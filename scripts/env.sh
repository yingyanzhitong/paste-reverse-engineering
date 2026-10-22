#!/bin/sh
# 由项目根目录执行：. scripts/env.sh
export GHIDRA_INSTALL_DIR="${GHIDRA_INSTALL_DIR:-$PWD/.local/tools/ghidra_12.1.4_PUBLIC}"
export JAVA_HOME="${JAVA_HOME:-$PWD/.local/tools/jdk-21.0.12.1+1/Contents/Home}"
export GHIDRA_SWIFT_DEMANGLER="${GHIDRA_SWIFT_DEMANGLER:-$(xcrun --find swift-demangle)}"
export REA_GHIDRA_STARTUP_TIMEOUT_MS=1800000
export GHIDRA_HEADLESS_MAXMEM=4G
