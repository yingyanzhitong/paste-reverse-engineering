#!/usr/bin/env python3
"""通过一个持久 REA MCP 会话批量导出 Ghidra 伪代码。原始 Evidence 仅存本地。"""
import json
import os
import pathlib
import subprocess
import sys

ROOT = pathlib.Path(__file__).resolve().parents[1]
REA = ROOT / ".local/tools/node_modules/rea-agents/scripts/rea.mjs"


class Rea:
    def __init__(self, log):
        self.seq = 0
        self.process = subprocess.Popen(["node", str(REA), "mcp"], cwd=ROOT,
                                        stdin=subprocess.PIPE, stdout=subprocess.PIPE,
                                        stderr=log, text=True)
        self.rpc("initialize", {"protocolVersion": "2024-11-05", "capabilities": {},
                               "clientInfo": {"name": "paste-static-export", "version": "0.1.0"}})
        self.process.stdin.write(json.dumps({"jsonrpc": "2.0", "method": "notifications/initialized"}) + "\n")
        self.process.stdin.flush()

    def rpc(self, method, params):
        self.seq += 1
        self.process.stdin.write(json.dumps({"jsonrpc": "2.0", "id": self.seq,
                                            "method": method, "params": params}) + "\n")
        self.process.stdin.flush()
        while True:
            line = self.process.stdout.readline()
            if not line:
                raise RuntimeError("REA MCP 意外退出；请查看 .local 中的日志")
            reply = json.loads(line)
            if reply.get("id") == self.seq:
                if "error" in reply:
                    raise RuntimeError(reply["error"])
                return reply["result"]

    def call(self, name, arguments=None):
        result = self.rpc("tools/call", {"name": name, "arguments": arguments or {}})
        if result.get("isError"):
            error = json.loads(next(c["text"] for c in result["content"] if c["type"] == "text"))["error"]
            evidence_id = error.get("details", {}).get("reported_limits", {}).get("evidence_id")
            if error.get("code") == "resource_constraint" and evidence_id:
                return self.read_retained(evidence_id)
            raise RuntimeError(result)
        value = result.get("structuredContent")
        if value is None:
            value = json.loads(next(c["text"] for c in result["content"] if c["type"] == "text"))
        return value

    def read_retained(self, evidence_id):
        path = ROOT / ".local" / ("overflow-" + evidence_id + ".json")
        self.call("export_evidence_bundle", {"path": str(path), "overwrite": True})
        bundle = json.loads(path.read_text())
        return next(record for record in bundle["records"] if record["evidence_id"] == evidence_id)

    def stop(self):
        self.process.stdin.close()
        try:
            self.process.wait(timeout=15)
        except subprocess.TimeoutExpired:
            self.process.terminate()
            self.process.wait(timeout=15)


def main():
    targets = sys.argv[1:] or ["paste-mcp-stdio", "Paste-Helper", "Paste"]
    for name in targets:
        local = ROOT / ".local" / name
        local.mkdir(parents=True, exist_ok=True)
        output = ROOT / "decompiled" / name
        output.mkdir(parents=True, exist_ok=True)
        with (local / "rea.stderr.log").open("w") as log:
            rea = Rea(log)
            try:
                opened = rea.call("open_binary", {"path": str(ROOT / ".local/targets" / (name + ".arm64")), "provider_id": "ghidra"})
                (local / "open.json").write_text(json.dumps(opened, indent=2))
                inventory = rea.call("list_procedures")
                (local / "procedures.json").write_text(json.dumps(inventory, indent=2))
                print(name, "inventory ready", flush=True)
                # 后续解析由实际工具返回的结构驱动，不依赖猜测的字段。
                if os.environ.get("REA_PROBE_ONLY") == "1":
                    print(json.dumps(inventory)[:4000], flush=True)
                    rea.call("close_binary")
                    continue
                export(rea, name, inventory, local, output)
                rea.call("close_binary")
            finally:
                rea.stop()


def public_failure(item):
    """公开失败原因摘要；完整诊断与本机路径只保留在原始 Evidence 缓存。"""
    error = item["error"]
    summary = {key: error[key] for key in ("code", "category", "message") if key in error}
    diagnostics = error.get("details", {}).get("diagnostics", {})
    for key in ("remote_code", "remote_message"):
        if key in diagnostics:
            summary[key] = diagnostics[key]
    if "remote_message" not in summary and "failure_cause" in diagnostics:
        cause = diagnostics["failure_cause"]
        summary["failure_cause"] = {key: cause[key] for key in ("name", "code", "message") if key in cause}
    return {"address": item["address"],
            "procedure": {key: item["procedure"][key] for key in ("status", "address", "name")
                          if key in item["procedure"]},
            "status": item["status"], "error": summary}


def export(rea, name, inventory, local, output):
    procedures = inventory["normalized_result"]
    internal = [p for p in procedures if not p["procedure"]["external"]]
    report = ROOT / "reports" / name
    report.mkdir(parents=True, exist_ok=True)
    (report / "procedures.json").write_text(json.dumps(procedures, indent=2) + "\n")
    successes, failures, index = 0, [], []
    limitations = set(inventory.get("limitations", []))
    for offset in range(0, len(internal), 64):
        addresses = [p["address"] for p in internal[offset:offset + 64]]
        cache = local / ("batch-%04d.json" % (offset // 64))
        try:
            evidence = json.loads(cache.read_text()) if cache.exists() else None
        except json.JSONDecodeError:
            evidence = None
        if (evidence is None or evidence.get("parameters", {}).get("addresses") != addresses
                or evidence.get("subject", {}).get("digest") != inventory["subject"]["digest"]
                or evidence.get("analysis_profile", {}).get("parameters", {}).get("upstream_analysis_profile")
                != inventory["analysis_profile"]):
            evidence = rea.call("batch_decompile", {"addresses": addresses})
            cache.write_text(json.dumps(evidence))
        result = evidence["normalized_result"]
        assert result["total"] == len(addresses), "REA 批量返回数量与请求不符"
        assert [i["address"] for i in result["items"]] == addresses, "REA 批量返回顺序不符"
        limitations.update(evidence.get("limitations", []))
        filename = "part-%04d.c" % (offset // 64)
        parts = ["/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.\n"
                 " * Generated analysis output; not original or buildable source. */\n"]
        line = parts[0].count("\n") + 1
        for item in result["items"]:
            if item["status"] != "ok":
                failures.append(public_failure(item))
                continue
            code = item["pseudocode"]
            label = item["procedure"].get("name", item["address"])
            header = "\n/* Address: %s | %s */\n" % (item["address"], str(label).replace("*/", "* /"))
            parts.append(header + code + "\n")
            leading_blank_lines = code[:len(code) - len(code.lstrip())].count("\n")
            index.append({"address": item["address"], "procedure": item["procedure"],
                          "file": "decompiled/" + name + "/" + filename,
                          "line": line + 2 + leading_blank_lines})
            line += (header + code + "\n").count("\n")
            successes += 1
        (output / filename).write_text("".join(parts))
        print(name, min(offset + 64, len(internal)), "/", len(internal),
              "exported", successes, "failed", len(failures), flush=True)
    coverage = {"target": name, "architecture": "arm64", "sha256": inventory["subject"]["digest"]["sha256"],
                "rea_version": "6.7.0", "ghidra_version": "12.1.4",
                "inventory_evidence_id": inventory["evidence_id"], "analysis_profile": inventory["analysis_profile"],
                "total_procedures": len(procedures), "external_procedures_skipped": len(procedures) - len(internal),
                "internal_procedures": len(internal), "internal_thunks": sum(p["procedure"]["thunk"] for p in internal),
                "succeeded": successes, "failed": len(failures), "failures": failures,
                "limitations": sorted(limitations),
                "scope": "All Ghidra-discovered internal arm64 procedures; external library implementations are excluded."}
    (report / "function-index.json").write_text(json.dumps(index, indent=2) + "\n")
    (report / "coverage.json").write_text(json.dumps(coverage, indent=2) + "\n")
    assert successes + len(failures) == len(internal)


if __name__ == "__main__":
    main()
