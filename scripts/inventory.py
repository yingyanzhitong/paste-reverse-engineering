#!/usr/bin/env python3
"""只读取安装包，提取 arm64 分析副本与可核验的文件清单。"""
import hashlib
import json
import pathlib
import plistlib
import subprocess
import sys
from datetime import datetime, timedelta, timezone

ROOT = pathlib.Path(__file__).resolve().parents[1]
APP = pathlib.Path(sys.argv[1] if len(sys.argv) > 1 else "/Applications/Paste.app")
TARGETS = ["Contents/MacOS/Paste", "Contents/MacOS/paste-mcp-stdio",
           "Contents/Library/LoginItems/Paste Helper.app/Contents/MacOS/Paste Helper"]


def run(*args):
    return subprocess.run(args, check=True, capture_output=True, text=True).stdout


def main():
    (ROOT / ".local/targets").mkdir(parents=True, exist_ok=True)
    (ROOT / "reports/symbols").mkdir(parents=True, exist_ok=True)
    rows = []
    for relative in TARGETS:
        binary = APP / relative
        name = binary.name.replace(" ", "-")
        target = ROOT / ".local/targets" / (name + ".arm64")
        run("xcrun", "lipo", str(binary), "-thin", "arm64", "-output", str(target))
        symbols = run("nm", "-nm", str(target))
        demangled = subprocess.run(["xcrun", "swift-demangle", "--compact"],
                                  input=symbols, capture_output=True, text=True, check=True).stdout
        (ROOT / "reports/symbols" / (name + ".txt")).write_text(demangled)
        rows.append({"name": binary.name, "relative_path": relative,
                     "sha256": hashlib.sha256(binary.read_bytes()).hexdigest(),
                     "size": binary.stat().st_size, "analyzed_architecture": "arm64",
                     "arm64_sha256": hashlib.sha256(target.read_bytes()).hexdigest(),
                     "arm64_size": target.stat().st_size,
                     "symbols_lines": len(symbols.splitlines())})
    info = plistlib.loads((APP / "Contents/Info.plist").read_bytes())
    manifest = {"application": "Paste", "version": info["CFBundleShortVersionString"],
                "build": info["CFBundleVersion"], "bundle_id": info["CFBundleIdentifier"],
                "date": datetime.now(timezone(timedelta(hours=8))).date().isoformat(), "binaries": rows}
    (ROOT / "reports/target-manifest.json").write_text(json.dumps(manifest, indent=2) + "\n")
    print(json.dumps(manifest, indent=2))


if __name__ == "__main__":
    main()
