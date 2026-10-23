#!/usr/bin/env python3
"""汇总既有功能的静态审阅；校验引用，不提升函数迁移或等价状态。"""
import argparse
from collections import Counter
from datetime import datetime, timezone
import hashlib
import json
from pathlib import Path
from function_ledger import source_fragments

ROOT = Path(__file__).resolve().parents[1]
LABELS = {"present": "列明行为已有代码", "partial": "已有代码，仍有差异或缺证据",
          "missing": "缺少实现", "unreviewed": "尚未核对"}


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("inputs", nargs="*", type=Path)
    parser.add_argument("--check", action="store_true", help="只校验已保存报告的源码及原证据摘要")
    args = parser.parse_args()
    mapping = json.loads((ROOT / "replica/function-map.json").read_text())["functions"]
    summary = json.loads((ROOT / "reports/function-implementation/summary.json").read_text())
    output = ROOT / "reports/replica/fast-coverage-audit.json"
    if args.check:
        report = json.loads(output.read_text())
        fragments = {}
        for feature in report["features"]:
            for path, digest in feature["source_sha256"].items():
                if hashlib.sha256((ROOT / path).read_bytes()).hexdigest() != digest:
                    raise ValueError("快审后源码改变: " + path)
            for ref in feature["original_reference_status"]:
                if ref["file"] not in fragments:
                    fragments[ref["file"]] = source_fragments(ROOT / ref["file"])
                if fragments[ref["file"]][ref["function_id"].split(":")[1]]["sha256"] != ref["pseudocode_sha256"]:
                    raise ValueError("原证据改变: " + ref["function_id"])
                if mapping.get(ref["function_id"], {}).get("state", "pending") != ref["ledger_state"]:
                    raise ValueError("快审后台账状态改变: " + ref["function_id"])
        for key, value in report["function_ledger_snapshot"].items():
            if summary[key] != value:
                raise ValueError("快审后台账摘要改变: " + key)
        print(json.dumps({"static_references_current": True, "features_checked": len(report["features"]),
                          "functional_tests_executed": False}))
        return
    if not args.inputs:
        parser.error("需要审阅输入文件，或使用 --check")
    original = {}
    for target in ("Paste", "Paste-Helper", "paste-mcp-stdio"):
        for row in json.loads((ROOT / "reports" / target / "function-index.json").read_text()):
            original[target + ":" + row["address"]] = row
    features, findings, ids, fragments = [], [], set(), {}
    for path in args.inputs:
        reviewed = json.loads(path.read_text())
        for feature in reviewed["features"]:
            if feature["id"] in ids or feature["status"] not in LABELS:
                raise ValueError("重复功能或状态无效: " + feature["id"])
            ids.add(feature["id"])
            hashes = {}
            for ref in feature["source_refs"]:
                relative = Path(ref["path"])
                if relative.is_absolute() or {"..", ".local"}.intersection(relative.parts):
                    raise ValueError("引用必须是公开源码路径")
                source = ROOT / relative
                if source.is_symlink() or ref["symbol"] not in source.read_text():
                    raise ValueError("源码引用失效: " + str(ref))
                hashes[str(relative)] = hashlib.sha256(source.read_bytes()).hexdigest()
            feature["source_sha256"] = hashes
            feature["original_reference_status"] = []
            for key in feature["original_functions"]:
                row = original[key]
                if row["file"] not in fragments:
                    fragments[row["file"]] = source_fragments(ROOT / row["file"])
                feature["original_reference_status"].append({
                    "function_id": key, "file": row["file"], "line": row["line"],
                    "pseudocode_sha256": fragments[row["file"]][row["address"]]["sha256"],
                    "ledger_state": mapping.get(key, {}).get("state", "pending")})
            feature["reviewer"] = reviewed.get("reviewer", path.stem)
            features.append(feature)
        findings.extend(reviewed.get("findings", []))
    report = {"kind": "static_existing_feature_audit", "schema_version": 1,
              "generated_at": datetime.now(timezone.utc).isoformat(),
              "policy": "按已有功能和调用链集中复核，只补真实缺口；本报告不修改逐地址台账，不将模块存在或候选匹配记为等价通过。",
              "functional_tests_executed": False, "mcp_tests_executed": False,
              "original_binary_sha256": {b["name"]: b["arm64_sha256"] for b in
                  json.loads((ROOT / "reports/target-manifest.json").read_text())["binaries"]},
              "function_ledger_snapshot": {key: summary[key] for key in ("total_functions", "states", "migration")},
              "feature_states": dict(Counter(f["status"] for f in features)),
              "features": features, "findings": findings}
    output.write_text(json.dumps(report, ensure_ascii=False, indent=2) + "\n")
    lines = ["# 既有功能集中核对", "", report["policy"], "",
             "本轮仅做源码和原版证据静态核对。没有运行应用、功能回归、UI 或 MCP 测试；不能据此宣称一比一通过。", "",
             "功能是否已有代码和原版二进制地址迁移数分开记录，不按本表行数计算产品完成率。", "",
             "先保留并复用已接入的采集、类型读写、搜索、Pinboard、多选粘贴、Stack、OCR和快捷键代码。优先核实用户可见的差异，再处理兼容性及底层生命周期；不为补地址数量重写已有功能。", "",
             "## 发现的优先问题", ""]
    lines += ["- " + f["title"] for f in findings if f.get("severity") == "high"]
    lines += ["", "## 功能清单", "", "| 功能 | 静态结论 | 已有行为 | 差异或待确认项 |", "| --- | --- | --- | --- |"]
    def cell(value):
        return str(value).replace("|", "\\|").replace("\n", " ")
    for f in features:
        lines.append("| " + " | ".join(map(cell, [f["title"], LABELS[f["status"]],
                     "；".join(f["covered_behavior"]), "；".join(f["gaps"])])) + " |")
    lines += ["", "## 复核方式", "",
              "保留现有实现，先核真实入口、输入输出、分支和副作用；完整契约已满足的函数直接复用，未知项保留缺口。系统转发、包装和编译器生成代码按完整边界及绑定证据分组审阅，不重新写同名函数。", "",
              "机器可读报告包含每项源码符号、源码摘要、原版地址及当前台账状态： [fast-coverage-audit.json](fast-coverage-audit.json)。没有原版地址的项只证明独立功能代码存在，不能当作原版函数迁移完成。", ""]
    lines += ["可用 `python3 scripts/coverage_audit.py --check` 快速检查报告引用与当前源码是否仍一致；该命令不运行应用、不验证运行行为。", ""]
    output.with_suffix(".md").write_text("\n".join(lines))
    print(json.dumps({"features_reviewed": len(features), "states": report["feature_states"],
                      "source_files_bound": len({p for f in features for p in f["source_sha256"]}),
                      "function_states_changed": False, "functional_tests_executed": False}, ensure_ascii=False))


if __name__ == "__main__":
    main()
