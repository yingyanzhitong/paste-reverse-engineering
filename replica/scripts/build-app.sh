#!/bin/bash
set -euo pipefail
replica_root="$(cd "$(dirname "$0")/.." && pwd)"
configuration="${1:-release}"
version="$(python3 -c 'import json,sys; print(json.load(open(sys.argv[1]))["version"])' "$replica_root/../package.json")"
if [[ ! "$version" =~ ^[0-9]+\.[0-9]+\.[0-9]+$ ]]; then
  printf '%s\n' 'package.json version 必须为数字 major.minor.patch。' >&2
  exit 1
fi
swift build --package-path "$replica_root" -c "$configuration"
binary_root="$(swift build --package-path "$replica_root" -c "$configuration" --show-bin-path)"
bundle="$replica_root/dist/Paste Replica.app"
mkdir -p "$bundle/Contents/MacOS" "$bundle/Contents/Resources"
cp "$binary_root/PasteReplica" "$bundle/Contents/MacOS/PasteReplica"
cp "$binary_root/paste-replica-mcp" "$bundle/Contents/MacOS/paste-replica-mcp"
helper="$bundle/Contents/Library/LoginItems/Paste Replica Helper.app"
mkdir -p "$helper/Contents/MacOS"
cp "$binary_root/PasteReplicaHelper" "$helper/Contents/MacOS/PasteReplicaHelper"
cat > "$helper/Contents/Info.plist" <<PLIST
<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE plist PUBLIC "-//Apple//DTD PLIST 1.0//EN" "http://www.apple.com/DTDs/PropertyList-1.0.dtd">
<plist version="1.0"><dict>
<key>CFBundleIdentifier</key><string>com.yingyanzhitong.paste-replica.helper</string>
<key>CFBundleName</key><string>Paste Replica Helper</string>
<key>CFBundleExecutable</key><string>PasteReplicaHelper</string>
<key>CFBundlePackageType</key><string>APPL</string>
<key>CFBundleShortVersionString</key><string>$version</string>
<key>CFBundleVersion</key><string>$version</string>
<key>LSMinimumSystemVersion</key><string>14.0</string>
<key>LSUIElement</key><true/>
<key>NSPrincipalClass</key><string>NSApplication</string>
</dict></plist>
PLIST
plutil -lint "$helper/Contents/Info.plist"
codesign --force --sign - "$helper"
cat > "$bundle/Contents/Info.plist" <<PLIST
<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE plist PUBLIC "-//Apple//DTD PLIST 1.0//EN" "http://www.apple.com/DTDs/PropertyList-1.0.dtd">
<plist version="1.0"><dict>
<key>CFBundleIdentifier</key><string>com.yingyanzhitong.paste-replica</string>
<key>CFBundleName</key><string>Paste Replica</string>
<key>CFBundleDisplayName</key><string>Paste Replica</string>
<key>CFBundleExecutable</key><string>PasteReplica</string>
<key>CFBundlePackageType</key><string>APPL</string>
<key>CFBundleShortVersionString</key><string>$version</string>
<key>CFBundleVersion</key><string>$version</string>
<key>LSMinimumSystemVersion</key><string>14.0</string>
<key>LSUIElement</key><true/>
<key>NSHighResolutionCapable</key><true/>
<key>NSPrincipalClass</key><string>NSApplication</string>
</dict></plist>
PLIST
plutil -lint "$bundle/Contents/Info.plist"
codesign --force --sign - "$bundle"
codesign --verify --deep --strict "$bundle"
printf '%s\n' "$bundle"
