#!/usr/bin/env python3
"""只核定一个已完整审阅的付费提示入口；不排除其通用辅助函数。"""
import hashlib
import json
import struct
from pathlib import Path
from macho_imports import parse_macho, _arm64_slice, _fragment_hashes

REPORT = 'reports/function-migration/paywall-presenter-scope-exclusions.json'
ADDRESS = '0x100064afc'
NAME = '_TtC5PasteP33_0834BD6CB1CDAA1FA46B007E7F71175821PaywallViewController'
REASON = '此地址只激活或呈现PaywallViewController；用户要求独立免费离线复刻，排除付费提示与解锁入口，不修改原版授权校验。'


def bytes_at(data, address, size):
    offset = 32
    for _ in range(struct.unpack_from('<I', data, 16)[0]):
        command, command_size = struct.unpack_from('<II', data, offset)
        if command == 0x19:
            _, vmaddr, _, fileoff, filesize = struct.unpack_from('<16sQQQQ', data, offset + 8)
            if vmaddr <= address and address + size <= vmaddr + filesize:
                start = fileoff + address - vmaddr
                result = data[start:start + size]
                if len(result) == size:
                    return result
        offset += command_size
    raise ValueError('排除证据地址不在文件支持的segment内')


def snapshot(root):
    target = next(x for x in json.loads((root / 'reports/target-manifest.json').read_text())['binaries']
                  if x['name'] == 'Paste')
    path = Path('/Applications/Paste.app') / target['relative_path']
    binary = parse_macho(path)
    if binary['container_sha256'] != target['sha256'] or binary['arm64_sha256'] != target['arm64_sha256']:
        raise ValueError('付费入口审阅绑定的原版输入已改变')
    data, _ = _arm64_slice(path.read_bytes())
    ranges = [
        ('presenter', 0x100064afc, 0x100064da0, '8ae243a67c5fdc1188f82d3873a902a5fb981d89bcb3b508fcb91639d863fbbb'),
        ('controller_factory_evidence_only', 0x100017bb0, 0x100017bd0, '9b6489a336e6ad0caf5c4778894a4e0acfb499323a7936f52d39e9a459a277e4'),
        ('class_metadata', 0x100f8f758, 0x100f8f780, 'cd6d2c48e4f43910e4938bf8d77ad5df66f5b0a7e32f1833905f655ca0413b30'),
        ('class_ro_metadata', 0x100f8f6f8, 0x100f8f720, '794509779a62f11c0fe96284da09dfef7b823e3cf8dd0f65764fa53fb683cce5'),
    ]
    proof = {}
    for label, start, end, expected in ranges:
        digest = hashlib.sha256(bytes_at(data, start, end - start)).hexdigest()
        if digest != expected:
            raise ValueError('付费入口完整机器码/元数据证据不符: ' + label)
        proof[label] = {'start': hex(start), 'end_exclusive': hex(end), 'sha256': digest}
    class_data = struct.unpack('<Q', bytes_at(data, 0x100f8f778, 8))[0]
    name_data = struct.unpack('<Q', bytes_at(data, 0x100f8f710, 8))[0]
    if class_data != 0x40000000f8f6fa or name_data != 0x10000000dd3500:
        raise ValueError('已审阅class→RO→name固定指针链改变')
    if bytes_at(data, 0x100dd3500, len(NAME) + 1) != NAME.encode() + b'\0':
        raise ValueError('目标控制器不是已审阅的PaywallViewController')
    index = json.loads((root / 'reports/Paste/function-index.json').read_text())
    for start, end in [(0x100064afc, 0x100064da0), (0x100017bb0, 0x100017bd0)]:
        if min(int(x['address'], 16) for x in index if int(x['address'], 16) > start) != end:
            raise ValueError('有界完整函数入口边界改变')
    row = next(x for x in index if x['address'] == ADDRESS)
    entry = {'function_id': 'Paste:' + ADDRESS, 'state': 'excluded_by_scope',
             'user_scope_reason': REASON,
             'original_pseudocode': {'path': row['file'], 'line': row['line']},
             'original_pseudocode_sha256': _fragment_hashes(root / row['file'])[ADDRESS],
             'complete_static_evidence': proof,
             'controller_class': {'address': '0x100f8f758', 'ro': '0x100f8f6f8',
                                  'name_address': '0x100dd3500', 'name': NAME},
             'review': '完整presenter只激活已存在付费窗口或通过已核factory创建并呈现该控制器；factory仅作证据，不计入排除。'}
    return {'schema_version': 1, 'kind': 'explicit_paywall_presenter_scope_exclusion',
            'original_binary_sha256': binary['arm64_sha256'], 'functions': {entry['function_id']: entry},
            'count_as_implemented': False, 'remove_from_total_denominator': False,
            'functional_tests_executed': False,
            'scope_boundary': '仅此一个付费presenter地址；不排除f66068本地恢复、allSatisfy、applier、WindowTransition、窗口通用生命周期或factory证据地址。'}
