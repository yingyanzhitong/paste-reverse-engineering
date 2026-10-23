#!/usr/bin/env python3
"""核验逐地址排除证据；只识别明确审阅的五个纯CloudKit联网调用跳板。"""
import argparse
import json
from pathlib import Path
from macho_imports import parse_macho, _fragment_hashes

ROOT = Path(__file__).resolve().parents[1]
REPORT = 'reports/function-migration/cloud-network-scope-exclusions.json'
DYLIB = '/System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit'
# 显式逐项清单，不以库名、类名或符号前缀批量推定模块属于排除范围。
REVIEWED = {
    '0x100bf6eb8': (
        '_$s8CloudKit12CKSyncEngineC11sendChangesyyAC04SendF7OptionsVYaKF',
        '向CloudKit发送同步变更；属于用户明确排除的联网同步。'),
    '0x100bf6ec4': (
        '_$s8CloudKit12CKSyncEngineC12fetchChangesyyAC05FetchF7OptionsVYaKF',
        '从CloudKit拉取同步变更；属于用户明确排除的联网同步。'),
    '0x100bf8a60': (
        '_$sSo10CKDatabaseC8CloudKitE13modifyRecords6saving8deleting10savePolicy10atomicallySDySo10CKRecordIDCs6ResultOySo0K0Cs5Error_pGG0H7Results_SDyAjLyytsAO_pGG06deleteO0tSayANG_SayAJGSo0k4SaveI0VSbtYaKF',
        '在远程CloudKit数据库保存或删除记录；不属于离线仓库事务。'),
    '0x100bf8ad8': (
        '_$sSo10CKDatabaseC8CloudKitE7records8matching10inZoneWith11desiredKeys12resultsLimitSaySo10CKRecordIDC_s6ResultOySo0M0Cs5Error_pGtG12matchResults_So13CKQueryCursorCSg05queryT0tSo0S0C_So0mgN0CSgSaySSGSgSitYaKF',
        '执行CloudKit远程记录查询；保留本地搜索，不实现该联网入口。'),
    '0x100bf8af0': (
        '_$sSo11CKContainerC8CloudKitE6acceptySDySo15CKShareMetadataCs6ResultOySo0E0Cs5Error_pGGSayAFGYaKF',
        '接受CloudKit远程共享邀请；不属于离线Pinboard整理。'),
}


def snapshot(root):
    manifest = json.loads((root / 'reports/target-manifest.json').read_text())
    target = next(row for row in manifest['binaries'] if row['name'] == 'Paste')
    binary = parse_macho(Path('/Applications/Paste.app') / target['relative_path'])
    if (binary['container_sha256'] != target['sha256'] or
            binary['arm64_sha256'] != target['arm64_sha256']):
        raise ValueError('安装的原版与目标清单不符')
    index = {row['address']: row for row in json.loads((root / 'reports/Paste/function-index.json').read_text())}
    fragments, entries = {}, {}
    for address, (symbol, reason) in REVIEWED.items():
        stub = binary['stubs'][address]
        binding = stub['dyld_binding']
        if (stub['body_size'] != 12 or binding['symbol'] != symbol or
                binding['dylib']['install_name'] != DYLIB):
            raise ValueError('逐地址真实完整跳板或绑定不符: ' + address)
        row = index[address]
        if row['file'] not in fragments:
            fragments[row['file']] = _fragment_hashes(root / row['file'])
        key = 'Paste:' + address
        entries[key] = {
            'function_id': key, 'state': 'excluded_by_scope', 'user_scope_reason': reason,
            'original_pseudocode': {'path': row['file'], 'line': row['line']},
            'original_pseudocode_sha256': fragments[row['file']][address],
            'original_stub': stub,
        }
    return {'schema_version': 1, 'kind': 'explicit_cloud_network_scope_exclusions',
            'original_binary_sha256': binary['arm64_sha256'], 'functions': entries,
            'count_as_implemented': False, 'remove_from_total_denominator': False,
            'functional_tests_executed': False,
            'scope_boundary': '仅五个完整12字节网络入口跳板；不排除CloudKit类型/元数据、取消任务、本地状态、日志或任意调用方。'}


def verify_scope_report(root, report=REPORT):
    saved = json.loads((root / report).read_text())
    if saved != snapshot(root):
        raise ValueError('排除报告与当前原版完整跳板/逐地址审阅清单不符')
    return saved['functions']


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--check', action='store_true')
    args = parser.parse_args()
    if args.check:
        entries = verify_scope_report(ROOT)
    else:
        result = snapshot(ROOT)
        (ROOT / REPORT).write_text(json.dumps(result, ensure_ascii=False, indent=2) + '\n')
        entries = result['functions']
    print(json.dumps({'checked': args.check, 'excluded_addresses': len(entries),
                      'added_complete_functions': 0, 'total_denominator_unchanged': True}))


if __name__ == '__main__':
    main()
