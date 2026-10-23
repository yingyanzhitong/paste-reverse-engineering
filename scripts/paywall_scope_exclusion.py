#!/usr/bin/env python3
"""逐地址核定四个已完整审阅的付费专用入口；通用辅助函数仅作证据。"""
import hashlib
import json
import struct
from pathlib import Path
from macho_imports import parse_macho, _arm64_slice, _fragment_hashes

REPORT = 'reports/function-migration/paywall-presenter-scope-exclusions.json'
ADDRESS = '0x100064afc'
NAME = '_TtC5PasteP33_0834BD6CB1CDAA1FA46B007E7F71175821PaywallViewController'
REASON = '此地址只激活或呈现PaywallViewController；用户要求独立免费离线复刻，排除付费提示与解锁入口，不修改原版授权校验。'

# 固定清单与完整体摘要，绝不按class/模块前缀扩展范围。
REVIEWED_ADDITIONS = {'0x10006edc4': {'end': 4295422584,
                 'machine_sha256': '43dec5683b5f48813199cb3eee8e60f4892e461d67090b61ddfb2f8b7f47f890',
                 'pseudocode_sha256': '1c7b546e5b6e5f7e11a76f0a2b177d175dc3918c89435802e68594581a4ecc4f',
                 'contract': '真实已选实体中至少一个identifier不含onboarding、无License、operation含copy位1、窗口存在且屏幕落点在窗口外时，仅调用已核Paywall路由；不删除、移动或写剪贴板。',
                 'direct_callees': [{'address': '0x1000037f0',
                                     'identity': 'Generic metadata cache; not paid-only',
                                     'classification': 'Generic metadata cache; not paid-only'},
                                    {'address': '0x100003a00',
                                     'identity': 'Generic protocol conformance witness cache; not '
                                                 'paid-only',
                                     'classification': 'Generic protocol conformance witness cache; not '
                                                       'paid-only'},
                                    {'address': '0x100016eac',
                                     'identity': 'Generic conformance witness acquisition; not '
                                                 'paid-only',
                                     'classification': 'Generic conformance witness acquisition; not '
                                                       'paid-only'},
                                    {'address': '0x1001b9698',
                                     'identity': 'Safe applier index-to-optional mapping. Bounds miss '
                                                 'yields nil; valid index delegates existing element '
                                                 'projection, no mutation command',
                                     'classification': 'Safe applier index-to-optional mapping. Bounds '
                                                       'miss yields nil; valid index delegates existing '
                                                       'element projection, no mutation command'},
                                    {'address': '0x10030cc3c',
                                     'identity': 'Entity identifier.contains("onboarding"); reused by '
                                                 'another original caller in part0044, not paid-only',
                                     'classification': 'Entity identifier.contains("onboarding"); '
                                                       'reused by another original caller in part0044, '
                                                       'not paid-only'},
                                    {'address': '0x1003b8bfc',
                                     'identity': 'Existing VM lazy context/repository adapter getter; '
                                                 'may populate its cache, not a persistent delete/move '
                                                 'operation. Not paid-only',
                                     'classification': 'Existing VM lazy context/repository adapter '
                                                       'getter; may populate its cache, not a '
                                                       'persistent delete/move operation. Not '
                                                       'paid-only'},
                                    {'address': '0x1003b9128',
                                     'identity': 'Concrete VM hasLicense getter below',
                                     'classification': 'Concrete VM hasLicense getter below'},
                                    {'address': '0x1003bb23c',
                                     'identity': 'Concrete VM router+0x18 dedicated Paywall dispatch '
                                                 'below',
                                     'classification': 'Concrete VM router+0x18 dedicated Paywall '
                                                       'dispatch below'},
                                    {'address': '0x100bf8124',
                                     'identity': '_$sSa034_makeUniqueAndReserveCapacityIfNotB0yyFyXl_Ts5',
                                     'classification': 'Runtime array/ownership/actor/geometry helper; '
                                                       'not itself excluded'},
                                    {'address': '0x100bf819c',
                                     'identity': '_$sSa16_createNewBuffer14bufferIsUnique15minimumCapacity13growForAppendySb_SiSbtFyXl_Ts5',
                                     'classification': 'Runtime array/ownership/actor/geometry helper; '
                                                       'not itself excluded'},
                                    {'address': '0x100bf81e4',
                                     'identity': '_$sSa37_appendElementAssumeUniqueAndCapacity_03newB0ySi_xntFyXl_Ts5',
                                     'classification': 'Runtime array/ownership/actor/geometry helper; '
                                                       'not itself excluded'},
                                    {'address': '0x100bf82b0',
                                     'identity': '_$sScA15unownedExecutorScevgTj',
                                     'classification': 'Runtime array/ownership/actor/geometry helper; '
                                                       'not itself excluded'},
                                    {'address': '0x100bf8394',
                                     'identity': '_$sScM6sharedScMvgZ',
                                     'classification': 'Runtime array/ownership/actor/geometry helper; '
                                                       'not itself excluded'},
                                    {'address': '0x100bf83a0',
                                     'identity': '_$sScMMa',
                                     'classification': 'Runtime array/ownership/actor/geometry helper; '
                                                       'not itself excluded'},
                                    {'address': '0x100bf97e0',
                                     'identity': '_$ss12_ArrayBufferV19_getElementSlowPathyyXlSiFyXl_Ts5',
                                     'classification': 'Runtime array/ownership/actor/geometry helper; '
                                                       'not itself excluded'},
                                    {'address': '0x100bf9d44',
                                     'identity': '_$ss18_CocoaArrayWrapperV8endIndexSivg',
                                     'classification': 'Runtime array/ownership/actor/geometry helper; '
                                                       'not itself excluded'},
                                    {'address': '0x100bfae78',
                                     'identity': '_CGRectContainsPoint',
                                     'classification': 'Runtime array/ownership/actor/geometry helper; '
                                                       'not itself excluded'},
                                    {'address': '0x100bfbf64',
                                     'identity': '_objc_release',
                                     'classification': 'Runtime array/ownership/actor/geometry helper; '
                                                       'not itself excluded'},
                                    {'address': '0x100bfbf70',
                                     'identity': '_objc_retain',
                                     'classification': 'Runtime array/ownership/actor/geometry helper; '
                                                       'not itself excluded'},
                                    {'address': '0x100bfbf94',
                                     'identity': '_objc_retainAutoreleasedReturnValue',
                                     'classification': 'Runtime array/ownership/actor/geometry helper; '
                                                       'not itself excluded'},
                                    {'address': '0x100bfc594',
                                     'identity': '_swift_bridgeObjectRelease',
                                     'classification': 'Runtime array/ownership/actor/geometry helper; '
                                                       'not itself excluded'},
                                    {'address': '0x100bfc9c0',
                                     'identity': '_swift_release',
                                     'classification': 'Runtime array/ownership/actor/geometry helper; '
                                                       'not itself excluded'},
                                    {'address': '0x100bfc9d8',
                                     'identity': '_swift_retain',
                                     'classification': 'Runtime array/ownership/actor/geometry helper; '
                                                       'not itself excluded'},
                                    {'address': '0x100bfcad4',
                                     'identity': '_swift_task_isCurrentExecutor',
                                     'classification': 'Runtime array/ownership/actor/geometry helper; '
                                                       'not itself excluded'},
                                    {'address': '0x100bfcb04',
                                     'identity': '_swift_task_reportUnexpectedExecutor',
                                     'classification': 'Runtime array/ownership/actor/geometry helper; '
                                                       'not itself excluded'},
                                    {'address': '0x100c02a60',
                                     'identity': 'Original Objective-C frame getter selector stub',
                                     'classification': 'Original Objective-C frame getter selector '
                                                       'stub'},
                                    {'address': '0x100c11500',
                                     'identity': 'Original Objective-C window getter selector stub',
                                     'classification': 'Original Objective-C window getter selector '
                                                       'stub'}],
                 'indirect_call_sites': [4295421504]},
 '0x1003bb23c': {'end': 4298879616,
                 'machine_sha256': '9cedcbd66370cb8a46cba4436d6e845f63f4a9caaf19c889a4e6184fcab9589d',
                 'pseudocode_sha256': 'af68b389ae2725d210d4c893f157847a70b5964ce50f6a5b6474b93c493c044a',
                 'contract': '打开VM中真实注入的ItemCollectionViewModelRouter，调用witness+0x18；实际callee固定到route4的Paywall呈现。',
                 'direct_callees': [{'address': '0x100004640',
                                     'identity': 'Open boxed existential helper; not paid-only',
                                     'classification': 'Open boxed existential helper; not paid-only'}],
                 'indirect_call_sites': [4298879596]},
 '0x1003b9128': {'end': 4298871176,
                 'machine_sha256': '50ae799278aa7efc806e1b820e7415ae5499cb665e31059ad8362dea07c17b48',
                 'pseudocode_sha256': '6c1f2eb850f06c1d349586a7ccb23e0dd4279e68dfee2c8433f81b9dc738eb9b',
                 'contract': '从VM+0x30依赖获取LicenseManager，检查当前Optional<License>非nil；专供已核拖拽结束付费门槛，不是本地拖拽偏好。',
                 'direct_callees': [{'address': '0x100004594',
                                     'identity': 'Destroy existential helper; not paid-only',
                                     'classification': 'Destroy existential helper; not paid-only'},
                                    {'address': '0x100004640',
                                     'identity': 'Open boxed existential helper; not paid-only',
                                     'classification': 'Open boxed existential helper; not paid-only'},
                                    {'address': '0x1000da768',
                                     'identity': 'Generic lock-protected lazy DI getter with optional '
                                                 'cache; not paid-only',
                                     'classification': 'Generic lock-protected lazy DI getter with '
                                                       'optional cache; not paid-only'},
                                    {'address': '0x1001a15c4',
                                     'identity': 'LicenseManager current Optional<License> presence '
                                                 'check; generic licensing API itself not included in '
                                                 'these candidates',
                                     'classification': 'LicenseManager current Optional<License> '
                                                       'presence check; generic licensing API itself '
                                                       'not included in these candidates'}],
                 'indirect_call_sites': []}}

CODE_EVIDENCE = [('ended_paywall_delegate',
  4295421380,
  4295422584,
  '43dec5683b5f48813199cb3eee8e60f4892e461d67090b61ddfb2f8b7f47f890',
  '1c7b546e5b6e5f7e11a76f0a2b177d175dc3918c89435802e68594581a4ecc4f'),
 ('dedicated_paywall_router',
  4298879548,
  4298879616,
  '9cedcbd66370cb8a46cba4436d6e845f63f4a9caaf19c889a4e6184fcab9589d',
  'af68b389ae2725d210d4c893f157847a70b5964ce50f6a5b6474b93c493c044a'),
 ('dedicated_license_check',
  4298871080,
  4298871176,
  '50ae799278aa7efc806e1b820e7415ae5499cb665e31059ad8362dea07c17b48',
  '6c1f2eb850f06c1d349586a7ccb23e0dd4279e68dfee2c8433f81b9dc738eb9b'),
 ('actual_router_injection_evidence_only',
  4295305012,
  4295305568,
  '43c2445eab5a80a31413da5afd1131d34c831b6acea05c12541ab57c890842ae',
  'd561222f03153c7bf94b5c4d1bdea02eb1785aa76a58cca3bada1878c6e0181b'),
 ('vm_injected_storage_evidence_only',
  4298880956,
  4298881384,
  '2f96be3599fd46f30bf441a4d19f394a2d49e9045f9e91a541078f45b34e1e8d',
  '1aab9de73a3ee4c971b064130cbe8d1451b31d5402a05faf2bd7b3896e766f4f'),
 ('router_witness_evidence_only',
  4295066520,
  4295066524,
  '1e1616a3679022b9288860ef71ef89ef27beea03f3c116abb3e9dd6ba9c1e2cd',
  'bd341fab1ff34dccc7c2694d1aa0890dba5537e25dd390fbc19d1d4de318bd63'),
 ('concrete_route4_evidence_only',
  4295063456,
  4295063468,
  '8997e1c94061c948ac81809d6328961107415f0085d3a8f7d7d9a8fb21176de9',
  '5a211d489cff9314d6409bbf144b2ec93f815f8cd13e43ed7ce91915f04e9e10'),
 ('generic_route_wrapper_evidence_only',
  4295063428,
  4295063456,
  '36eae1be3d4e741a9c3a876ade78982731c6c342a2909a45ab4418bcded61518',
  '245e884ce4bd47833ee85dec1e6209990c3be6ca65255c0d6988f17315ce8102'),
 ('route_witness_evidence_only',
  4295064896,
  4295064908,
  '5749f841fbc27b3211f52ad044737c7a9fa8b7d09dac7ddc0e5e1101413021e7',
  'c90795085cf5b4183b03a8d59b1ea06f09d9342053963cdf39d173c687b4ec5e'),
 ('generic_window_presenter_evidence_only',
  4295063484,
  4295064180,
  '1ca5d181e11fb6f670cabd5061eda0844ac4c3f5c0509d76ffbf9373149919af',
  '16aa3d1dffa2c83eec1f6548f5c414a7b04014ce756f93b5ce9926f1932a536b'),
 ('optional_license_evidence_only',
  4296676804,
  4296677004,
  'ce6bd7a9845e8573695835db8e84e3b794b723b5c3d0b0693773b0d05a4383d4',
  'f07eff933b2cff55694d4da1fa29973634a9f121b540442e5e426b4cae87b8a5'),
 ('current_license_evidence_only',
  4296689456,
  4296689512,
  'e51563e7a987fb9627ead5e17b48796599861154284dfe3264ad55c2c9a0ab1b',
  '575c317e74e0256a331367c4e45d5807343dfb4753cd8a8378d85941185cb17c'),
 ('license_keypath_thunk_evidence_only',
  4298882028,
  4298882032,
  '0f6a285ef79c6adc2065e33e6a4a793b63a8600bf385a03d4f0436dc22642ebc',
  '1ca917d3ffaee2281ab639da4dad1573e0edd730553d8818875f272c575c60f4'),
 ('license_keypath_trampoline_evidence_only',
  4297336616,
  4297336620,
  '24c06578f18cc3f1fc4517a2bd74f1baf37f92b986b02c3a35d854de54e37d39',
  '5cae898baf0048e9fa296c576898483f5b757d3ef5a6779fa52d67ec75b04a09'),
 ('license_di_registration_evidence_only',
  4296670192,
  4296670224,
  'db3c04e41a4e884908d1a702778abe53f1f6b83f86e739e8d28957fc6a79f81b',
  'b53c35974a6bfb8c613db2d1eb4c6f96d150a346e3168e68508849ab7d1df4c3'),
 ('generic_di_registration_evidence_only',
  4296670452,
  4296670556,
  'af9b9297141b4f44bf734f91babc01172032e2e1c483d8782de34c0f3e047261',
  'c1cfb41a74c43bbb93fb2da9d37cbff68ddb84323321e18d6a783098f257546e'),
 ('license_factory_evidence_only',
  4296670224,
  4296670420,
  '563ccc0724d9adcfd6ec0e1422eebd5b3a7ef9c10b3ac8cd81205ff9de34ffa5',
  'e54c1ded2d449d02b89e35bf1b9869ea32afb95be5efa70a0eef9c8e0c884c61')]

DATA_EVIDENCE = [('router_witness_table_evidence_only',
  4310367832,
  4310367864,
  'f8a954759297d0cb70aeb728e488df26d10573a9d632e35b9eac0eada429866b'),
 ('route4_witness_table_evidence_only',
  4310369968,
  4310369984,
  'c5a3a023ca4777d992a0a05a4f0e027dbe77f229fedccc52e8d4cd9f02f5be84'),
 ('license_witness_table_evidence_only',
  4310424312,
  4310424344,
  '02935d4fc834afb790c6edf0d5cac3d540b9194588af046a7e1855c9840facd2'),
 ('license_type_evidence_only',
  4308232724,
  4308232768,
  '98c513aaebd7de4d2c1d9490d23fa40470d285a9d634c49f602bf258ca85f476'),
 ('license_protocol_evidence_only',
  4308232800,
  4308232824,
  '62e17a34b21fb86a875fb136cfb22afb71cff66cce436072b36188603b2a5af6'),
 ('router_protocol_evidence_only',
  4308260712,
  4308260736,
  '9b98a48a809b438f2f9852addcd7ed3b6b614ed27612b07a66155832987131a5'),
 ('router_conformance_evidence_only',
  4307692904,
  4307692924,
  'b2c20ff0131b2057fad019750a6387365a0d28ae09d27b1b13fd065a491a2e91'),
 ('license_conformance_evidence_only',
  4307756132,
  4307756152,
  'b75a396debdb491d27c13b79c8bf8d4d17e03998cfbb97efd3eed4f615c78b4f'),
 ('vm_license_keypath_evidence_only',
  4307831320,
  4307831376,
  '3efdfabb1666aecaad0c577a6f457820b2b0ab744a4a247d413af432a8902e9b')]


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


def call_targets(body, start):
    direct, indirect = set(), []
    for offset in range(0, len(body), 4):
        word = struct.unpack_from('<I', body, offset)[0]
        if word & 0xfc000000 == 0x94000000:  # AArch64 BL imm26
            displacement = word & 0x03ffffff
            if displacement & 0x02000000:
                displacement -= 0x04000000
            direct.add(start + offset + displacement * 4)
        elif word & 0xfffffc1f == 0xd63f0000:  # BLR Xn
            indirect.append(start + offset)
    return {'direct': sorted(direct), 'indirect_sites': indirect}


def verify_typed_chain(data):
    def pointer(address):
        raw = struct.unpack('<Q', bytes_at(data, address, 8))[0]
        value = raw & 0xfffffffff
        return value + 0x100000000 if value < 0x100000000 else value

    def descriptor_name(address, expected):
        field = address + 8
        delta = struct.unpack('<i', bytes_at(data, field, 4))[0]
        if bytes_at(data, field + delta, len(expected) + 1) != expected.encode() + b'\0':
            raise ValueError('已核typed DI名称改变: ' + expected)

    for address, name in [(0x100cad768, 'ItemCollectionViewModelRouter'),
                          (0x100ca6a60, 'LicenseManager'), (0x100ca6a14, 'License')]:
        descriptor_name(address, name)
    for slot, expected in [(0x100eafe58, 0x100c22d68), (0x100eafe70, 0x100018398),
                           (0x100eb06b8, 0x100017d40), (0x100ebdaf8, 0x100c32464),
                           (0x100ebdb00, 0x1001a4730)]:
        if pointer(slot) != expected:
            raise ValueError('已核实际DI witness槽改变: ' + hex(slot))
    keypath_field = 0x100c44a40
    delta = struct.unpack('<i', bytes_at(data, keypath_field, 4))[0]
    if keypath_field + delta != 0x1003bbbec:
        raise ValueError('VM+30 LicenseManager keypath真实getter改变')
    return {'router_protocol': 'ItemCollectionViewModelRouter',
            'injection': '完整f052734注入witness100eafe58，完整f3bb7bc存于VM+58；f3bb23c调用witness+18。',
            'route': '100eafe58+18→f018398→f0177a0→f017784(route4,0,0)→100eb06b0+8=f017d40→f0177bc；后两通用体仅证据。',
            'paywall_class': NAME, 'class_address': '0x100f8f758',
            'license': '完整f3bb7bc在VM+30建keypath100c44a18；其+28relativegetter→f3bbbec→f242728→f19fbf0；后者传metadata f1a1b7c、witness100ebdaf8、key11、factoryf19fc10到f19fcf4。100ebdaf8+8=f1a4730读取CurrentValueSubject<License?>，f1a15c4检查非nil。',
            'native_session_retained': 'f227808的本地ended/窗口内1秒后activate与moved/source-mask/reorder不排除。'}


def snapshot(root):
    target = next(x for x in json.loads((root / 'reports/target-manifest.json').read_text())['binaries']
                  if x['name'] == 'Paste')
    path = Path('/Applications/Paste.app') / target['relative_path']
    binary = parse_macho(path)
    if binary['container_sha256'] != target['sha256'] or binary['arm64_sha256'] != target['arm64_sha256']:
        raise ValueError('付费入口审阅绑定的原版输入已改变')
    data, _ = _arm64_slice(path.read_bytes())
    index = json.loads((root / 'reports/Paste/function-index.json').read_text())
    by_address = {row['address']: row for row in index}
    ordered = sorted(int(row['address'], 16) for row in index)
    next_address = dict(zip(ordered, ordered[1:]))
    fragments = {}
    ranges = [
        ('presenter', 0x100064afc, 0x100064da0, '8ae243a67c5fdc1188f82d3873a902a5fb981d89bcb3b508fcb91639d863fbbb'),
        ('controller_factory_evidence_only', 0x100017bb0, 0x100017bd0, '9b6489a336e6ad0caf5c4778894a4e0acfb499323a7936f52d39e9a459a277e4'),
        ('class_metadata', 0x100f8f758, 0x100f8f780, 'cd6d2c48e4f43910e4938bf8d77ad5df66f5b0a7e32f1833905f655ca0413b30'),
        ('class_ro_metadata', 0x100f8f6f8, 0x100f8f720, '794509779a62f11c0fe96284da09dfef7b823e3cf8dd0f65764fa53fb683cce5'),
    ]
    ranges += [(label, start, end, digest) for label, start, end, digest, _ in CODE_EVIDENCE]
    ranges += DATA_EVIDENCE
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
    for start, end in [(0x100064afc, 0x100064da0), (0x100017bb0, 0x100017bd0)] + [(a, b) for _, a, b, _, _ in CODE_EVIDENCE]:
        if next_address.get(start) != end:
            raise ValueError('有界完整函数入口边界改变')
    for label, start, _, _, expected in CODE_EVIDENCE:
        row = by_address[hex(start)]
        if row['file'] not in fragments:
            fragments[row['file']] = _fragment_hashes(root / row['file'])
        digest = fragments[row['file']][hex(start)]
        if digest != expected:
            raise ValueError('付费链完整伪代码证据不符: ' + label)
        proof[label]['original_pseudocode'] = {'path': row['file'], 'line': row['line']}
        proof[label]['original_pseudocode_sha256'] = digest
    typed_chain = verify_typed_chain(data)
    row = by_address[ADDRESS]
    if _fragment_hashes(root / row['file'])[ADDRESS] != '04deb6353a9330026c59a720740f1ddd8e07216aaa6eebfe133c01775d1c973c':
        raise ValueError('原有付费presenter伪代码完整体改变')
    entry = {'function_id': 'Paste:' + ADDRESS, 'state': 'excluded_by_scope',
             'user_scope_reason': REASON,
             'original_pseudocode': {'path': row['file'], 'line': row['line']},
             'original_pseudocode_sha256': _fragment_hashes(root / row['file'])[ADDRESS],
             'complete_static_evidence': proof,
             'controller_class': {'address': '0x100f8f758', 'ro': '0x100f8f6f8',
                                  'name_address': '0x100dd3500', 'name': NAME},
             'review': '完整presenter只激活已存在付费窗口或通过已核factory创建并呈现该控制器；factory仅作证据，不计入排除。'}
    entries = {entry['function_id']: entry}
    for address, reviewed in REVIEWED_ADDITIONS.items():
        start, end = int(address, 16), reviewed['end']
        body = bytes_at(data, start, end - start)
        row = by_address[address]
        if (hashlib.sha256(body).hexdigest() != reviewed['machine_sha256'] or
                fragments[row['file']][address] != reviewed['pseudocode_sha256']):
            raise ValueError('逐地址候选完整机器码/伪代码摘要不符: ' + address)
        calls = call_targets(body, start)
        expected = sorted(int(row['address'], 16) for row in reviewed['direct_callees'])
        if calls['direct'] != expected or calls['indirect_sites'] != reviewed['indirect_call_sites']:
            raise ValueError('完整体全部直接/间接调用点改变: ' + address)
        row = by_address[address]
        key = 'Paste:' + address
        entries[key] = {
            'function_id': key, 'state': 'excluded_by_scope',
            'user_scope_reason': reviewed['contract'] + ' 用户要求免费离线独立复刻，排除该具体付费门槛/提示，不修改原版授权。',
            'original_pseudocode': {'path': row['file'], 'line': row['line']},
            'original_pseudocode_sha256': reviewed['pseudocode_sha256'],
            'complete_static_evidence': proof,
            'complete_function': {'start': address, 'end_exclusive': hex(end),
                                  'sha256': reviewed['machine_sha256']},
            'all_direct_callees_evidence_only': reviewed['direct_callees'],
            'indirect_call_sites': [hex(site) for site in calls['indirect_sites']],
            'typed_di_and_paywall': typed_chain,
            'review': reviewed['contract'] + ' 临时数组、读取、惰性依赖缓存及actor/不变量检查仅支撑此契约；通用被调函数不计入排除。',
        }
    if len(entries) != 4:
        raise ValueError('付费逐地址清单必须恰为四个，不得自动扩大')
    return {'schema_version': 1, 'kind': 'explicit_paywall_presenter_scope_exclusion',
            'original_binary_sha256': binary['arm64_sha256'], 'functions': entries,
            'count_as_implemented': False, 'remove_from_total_denominator': False,
            'functional_tests_executed': False,
            'scope_boundary': '仅固定四地址：原presenter及已核拖拽结束付费delegate/专用License检查/具体Paywall路由；不排除f017784、f0177bc、genericDI、f30cc3c、通用session、f66068本地恢复、allSatisfy、applier、WindowTransition或factory证据地址。'}
