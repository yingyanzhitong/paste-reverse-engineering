/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10056f98c | FUN_10056f98c */

void FUN_10056f98c(void)

{
  undefined1 *unaff_x20;
  
  FUN_1005a0ebc(0,*unaff_x20);
  return;
}



/* Address: 0x10056f998 | FUN_10056f998 */

void FUN_10056f998(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  FUN_10056fcac(param_1,*unaff_x20);
  return;
}



/* Address: 0x10056f9b0 | FUN_10056f9b0 */

void FUN_10056f9b0(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  FUN_1005a0ebc(param_1,*unaff_x20);
  return;
}



/* Address: 0x10056f9b8 | FUN_10056f9b8 */

void FUN_10056f9b8(void)

{
  FUN_1005715d8();
  (extension_Swift)::Swift::RawRepresentable::_init();
  return;
}



/* Address: 0x10056fa14 | FUN_10056fa14 */

void FUN_10056fa14(void)

{
  FUN_1005715d8();
  (extension_Swift)::Swift::RawRepresentable::_encode();
  return;
}



/* Address: 0x10056fa60 | FUN_10056fa60 */

void FUN_10056fa60(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fd0928;
  FUN_1000f7830(&DAT_100fd0928,&DAT_100c5b1f0);
  _swift_initStaticObject();
  *param_1 = puVar1;
  return;
}



/* Address: 0x10056faa0 | FUN_10056faa0 */

undefined * FUN_10056faa0(void)

{
  return &DAT_100ee0a38;
}



/* Address: 0x10056faac | FUN_10056faac */

undefined1  [16] FUN_10056faac(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x8000000100dad4a0;
  auVar1._0_8_ = 0xd000000000000010;
  return auVar1;
}



/* Address: 0x10056fac8 | FUN_10056fac8 */

undefined1  [16] FUN_10056fac8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = &DAT_e500000000000000;
  auVar1._0_8_ = &DAT_6c6576656c;
  return auVar1;
}



/* Address: 0x10056fadc | FUN_10056fadc */

void FUN_10056fadc(byte *param_1,undefined1 *param_2,undefined1 *param_3)

{
  bool bVar1;
  byte bVar2;
  
  if (param_2 == &DAT_6c6576656c && param_3 == &DAT_e500000000000000) {
    _swift_bridgeObjectRelease(param_3);
    bVar2 = 0;
  }
  else {
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x6c6576656c,(_StringGuts)0xe500000000000000,
                       (_StringComparisonResult)(__int8)param_2);
    _swift_bridgeObjectRelease(param_3);
    bVar2 = (bVar1 ^ 0xffU) & 1;
  }
  *param_1 = bVar2;
  return;
}



/* Address: 0x10056fb5c | FUN_10056fb5c */

String FUN_10056fb5c(void)

{
  String SVar1;
  
  FUN_100570764();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x10056fb84 | FUN_10056fb84 */

String FUN_10056fb84(void)

{
  String SVar1;
  
  FUN_100570764();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x10056fbac | FUN_10056fbac */

void FUN_10056fbac(long param_1,undefined1 param_2)

{
  undefined *puVar1;
  long extraout_x8;
  long lVar2;
  undefined1 auStack_60 [15];
  undefined1 local_51;
  
  puVar1 = &DAT_100fd0930;
  FUN_1000f7830(&DAT_100fd0930,&DAT_100c5b1f8);
  lVar2 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_100570764();
  Swift::Encoder::_container();
  local_51 = param_2;
  FUN_1005707a4();
  Swift::KeyedEncodingContainer::_encode(&local_51);
  (**(code **)(lVar2 + 8))(auStack_60 + -extraout_x8,puVar1);
  return;
}



/* Address: 0x10056fca8 | thunk_FUN_10056fcac */

void thunk_FUN_10056fcac(void)

{
  FUN_10056fcac();
  return;
}



/* Address: 0x10056fcac | FUN_10056fcac */

void FUN_10056fcac(Hasher param_1,byte param_2)

{
  char *pcVar1;
  undefined1 *puVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  String SVar7;
  
  pcVar1 = (char *)0x7472656c61;
  if (param_2 != 6) {
    pcVar1 = (char *)0x636e656772656d65;
  }
  puVar6 = &DAT_e500000000000000;
  if (param_2 != 6) {
    puVar6 = (undefined1 *)0xe900000000000079;
  }
  pcVar3 = (char *)0x726f727265;
  if (param_2 != 4) {
    pcVar3 = (char *)0x6c61636974697263;
  }
  puVar2 = &DAT_e500000000000000;
  if (param_2 != 4) {
    puVar2 = &DAT_e800000000000000;
  }
  if (param_2 < 6) {
    puVar6 = puVar2;
    pcVar1 = pcVar3;
  }
  pcVar3 = (char *)0x656369746f6e;
  if (param_2 != 2) {
    pcVar3 = (char *)0x676e696e726177;
  }
  puVar2 = &DAT_e600000000000000;
  if (param_2 != 2) {
    puVar2 = &DAT_e700000000000000;
  }
  pcVar4 = (char *)0x6775626564;
  if (param_2 != 0) {
    pcVar4 = (char *)0x6f666e69;
  }
  puVar5 = &DAT_e500000000000000;
  if (param_2 != 0) {
    puVar5 = &DAT_e400000000000000;
  }
  if (param_2 < 2) {
    puVar2 = puVar5;
    pcVar3 = pcVar4;
  }
  if (param_2 < 4) {
    puVar6 = puVar2;
    pcVar1 = pcVar3;
  }
  SVar7.bridgeObject = puVar6;
  SVar7.str = pcVar1;
  Swift::String::hash(param_1,SVar7);
  _swift_bridgeObjectRelease(puVar6);
  return;
}



/* Address: 0x10056fdb4 | FUN_10056fdb4 */

void FUN_10056fdb4(byte param_1)

{
  char *pcVar1;
  undefined1 *puVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 *puVar5;
  Hasher HVar6;
  String SVar7;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(0);
  pcVar1 = (char *)0x7472656c61;
  if (param_1 != 6) {
    pcVar1 = (char *)0x636e656772656d65;
  }
  HVar6.unknown = &DAT_e500000000000000;
  if (param_1 != 6) {
    HVar6.unknown = (undefined1 *)0xe900000000000079;
  }
  pcVar3 = (char *)0x726f727265;
  if (param_1 != 4) {
    pcVar3 = (char *)0x6c61636974697263;
  }
  puVar2 = &DAT_e500000000000000;
  if (param_1 != 4) {
    puVar2 = &DAT_e800000000000000;
  }
  if (param_1 < 6) {
    HVar6.unknown = puVar2;
    pcVar1 = pcVar3;
  }
  pcVar3 = (char *)0x656369746f6e;
  if (param_1 != 2) {
    pcVar3 = (char *)0x676e696e726177;
  }
  puVar2 = &DAT_e600000000000000;
  if (param_1 != 2) {
    puVar2 = &DAT_e700000000000000;
  }
  pcVar4 = (char *)0x6775626564;
  if (param_1 != 0) {
    pcVar4 = (char *)0x6f666e69;
  }
  puVar5 = &DAT_e500000000000000;
  if (param_1 != 0) {
    puVar5 = &DAT_e400000000000000;
  }
  if (param_1 < 2) {
    puVar2 = puVar5;
    pcVar3 = pcVar4;
  }
  if (param_1 < 4) {
    HVar6.unknown = puVar2;
    pcVar1 = pcVar3;
  }
  SVar7.bridgeObject = HVar6.unknown;
  SVar7.str = pcVar1;
  Swift::String::hash((Hasher)auStack_68,SVar7);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar6);
  return;
}



/* Address: 0x10056fee4 | FUN_10056fee4 */

void FUN_10056fee4(void)

{
  FUN_1005707e4();
  return;
}



/* Address: 0x10056fef8 | FUN_10056fef8 */

void FUN_10056fef8(void)

{
  undefined1 *unaff_x20;
  
  FUN_10056fdb4(*unaff_x20);
  return;
}



/* Address: 0x10056ff00 | FUN_10056ff00 */

void FUN_10056ff00(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  thunk_FUN_10056fcac(param_1,*unaff_x20);
  return;
}



/* Address: 0x10056ff08 | FUN_10056ff08 */

void FUN_10056ff08(__int64 param_1)

{
  undefined1 uVar1;
  Hasher HVar2;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  Swift::Hasher::init(param_1);
  HVar2.unknown = auStack_68;
  thunk_FUN_10056fcac(HVar2.unknown,uVar1);
  Swift::Hasher::_finalize(HVar2);
  return;
}



/* Address: 0x10056ff48 | FUN_10056ff48 */

void FUN_10056ff48(undefined1 *param_1,undefined1 param_2)

{
  long unaff_x21;
  
  FUN_1005707e4();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Address: 0x10056ff70 | FUN_10056ff70 */

void FUN_10056ff70(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  FUN_10056fbac(param_1,*unaff_x20);
  return;
}



/* Address: 0x10056ff88 | FUN_10056ff88 */

undefined * FUN_10056ff88(void)

{
  return &DAT_100ee0a48;
}



/* Address: 0x10056ff94 | FUN_10056ff94 */

undefined1  [16] FUN_10056ff94(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x8000000100dada90;
  auVar1._0_8_ = 0xd000000000000015;
  return auVar1;
}



/* Address: 0x10056ffb0 | FUN_10056ffb0 */

void FUN_10056ffb0(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10052797c(unaff_x20 + 0x18,param_1);
  return;
}



/* Address: 0x10056ffbc | FUN_10056ffbc */

void FUN_10056ffbc(undefined1 *param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 8) = param_3;
  *(undefined8 *)(param_1 + 0x10) = param_4;
  uVar1 = *param_5;
  uVar3 = param_5[3];
  uVar2 = param_5[2];
  *(undefined8 *)(param_1 + 0x20) = param_5[1];
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(undefined8 *)(param_1 + 0x30) = uVar3;
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  param_1[0x38] = *(undefined1 *)(param_5 + 4);
  return;
}



/* Address: 0x10056ffdc | FUN_10056ffdc */

undefined1  [16] FUN_10056ffdc(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  char cVar4;
  char *unaff_x20;
  undefined1 auVar5 [16];
  
  cVar4 = *unaff_x20;
  puVar3 = (undefined1 *)0x726567676f6c;
  if (cVar4 != '\x01') {
    puVar3 = (undefined1 *)0x61746164;
  }
  puVar1 = &DAT_e600000000000000;
  if (cVar4 != '\x01') {
    puVar1 = &DAT_e400000000000000;
  }
  puVar2 = &DAT_6c6576656c;
  if (cVar4 != '\0') {
    puVar2 = puVar3;
  }
  puVar3 = &DAT_e500000000000000;
  if (cVar4 != '\0') {
    puVar3 = puVar1;
  }
  auVar5._8_8_ = puVar3;
  auVar5._0_8_ = puVar2;
  return auVar5;
}



/* Address: 0x100570028 | FUN_100570028 */

void FUN_100570028(undefined1 *param_1,undefined1 param_2)

{
  FUN_100570948();
  *param_1 = param_2;
  return;
}



/* Address: 0x10057004c | FUN_10057004c */

String FUN_10057004c(void)

{
  String SVar1;
  
  FUN_100570908();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x100570074 | FUN_100570074 */

String FUN_100570074(void)

{
  String SVar1;
  
  FUN_100570908();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x10057009c | thunk_FUN_100570640 */

void thunk_FUN_100570640(void)

{
  FUN_100570640();
  return;
}



/* Address: 0x1005700a0 | FUN_1005700a0 */

/* WARNING: Removing unreachable block (ram,0x0001005701b8) */

void FUN_1005700a0(long param_1)

{
  undefined *puVar1;
  KeyedEncodingContainer<undefined> KVar2;
  undefined8 *puVar3;
  long extraout_x8;
  undefined1 *unaff_x20;
  long unaff_x21;
  long lVar4;
  undefined1 auStack_e0 [8];
  undefined1 local_d8 [39];
  undefined1 local_b1;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 local_60;
  
  puVar1 = &DAT_100fd0948;
  FUN_1000f7830(&DAT_100fd0948,&DAT_100c5b200);
  lVar4 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_100570908();
  KVar2 = Swift::Encoder::_container();
  local_d8[0] = 0;
  local_b0._0_1_ = *unaff_x20;
  FUN_1005707a4();
  Swift::KeyedEncodingContainer::_encode(&local_b0,local_d8,puVar1,&DAT_100ee0ad8,KVar2.unknown);
  if (unaff_x21 == 0) {
    local_b0 = CONCAT71(local_b0._1_7_,1);
    Swift::KeyedEncodingContainer::_encodeIfPresent
              (*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10),&local_b0,puVar1);
    uStack_78 = *(undefined8 *)(unaff_x20 + 0x20);
    local_80 = *(undefined8 *)(unaff_x20 + 0x18);
    uStack_68 = *(undefined8 *)(unaff_x20 + 0x30);
    uStack_70 = *(undefined8 *)(unaff_x20 + 0x28);
    local_60 = unaff_x20[0x38];
    uStack_a8 = *(undefined8 *)(unaff_x20 + 0x20);
    local_b0 = *(undefined8 *)(unaff_x20 + 0x18);
    uStack_98 = *(undefined8 *)(unaff_x20 + 0x30);
    local_a0 = *(undefined8 *)(unaff_x20 + 0x28);
    local_90 = unaff_x20[0x38];
    local_b1 = 2;
    puVar3 = &local_80;
    FUN_10052797c(puVar3,local_d8);
    FUN_1004d9ea8();
    Swift::KeyedEncodingContainer::_encode(&local_b0,&local_b1,puVar1,&DAT_100edd000,puVar3);
    FUN_1004dbde0(local_b0,uStack_a8,local_a0,uStack_98,local_90);
    (**(code **)(lVar4 + 8))(auStack_e0 + -extraout_x8,puVar1);
  }
  else {
    (**(code **)(lVar4 + 8))(auStack_e0 + -extraout_x8,puVar1);
  }
  return;
}



/* Address: 0x100570278 | FUN_100570278 */

void FUN_100570278(Hasher param_1)

{
  undefined1 *puVar1;
  char *pcVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  byte bVar5;
  Hasher HVar6;
  byte *unaff_x20;
  void *pvVar7;
  char *pcVar8;
  String SVar9;
  String SVar10;
  
  bVar5 = *unaff_x20;
  HVar6.unknown = (char *)0x7472656c61;
  if (bVar5 != 6) {
    HVar6.unknown = (char *)0x636e656772656d65;
  }
  puVar4 = &DAT_e500000000000000;
  if (bVar5 != 6) {
    puVar4 = (undefined1 *)0xe900000000000079;
  }
  pcVar8 = (char *)0x726f727265;
  if (bVar5 != 4) {
    pcVar8 = (char *)0x6c61636974697263;
  }
  puVar1 = &DAT_e500000000000000;
  if (bVar5 != 4) {
    puVar1 = &DAT_e800000000000000;
  }
  if (bVar5 < 6) {
    puVar4 = puVar1;
    HVar6.unknown = pcVar8;
  }
  pcVar8 = (char *)0x656369746f6e;
  if (bVar5 != 2) {
    pcVar8 = (char *)0x676e696e726177;
  }
  puVar1 = &DAT_e600000000000000;
  if (bVar5 != 2) {
    puVar1 = &DAT_e700000000000000;
  }
  pcVar2 = (char *)0x6775626564;
  if (bVar5 != 0) {
    pcVar2 = (char *)0x6f666e69;
  }
  puVar3 = &DAT_e500000000000000;
  if (bVar5 != 0) {
    puVar3 = &DAT_e400000000000000;
  }
  if (bVar5 < 2) {
    puVar1 = puVar3;
    pcVar8 = pcVar2;
  }
  if (bVar5 < 4) {
    puVar4 = puVar1;
    HVar6.unknown = pcVar8;
  }
  SVar9.bridgeObject = puVar4;
  SVar9.str = HVar6.unknown;
  Swift::String::hash(param_1,SVar9);
  _swift_bridgeObjectRelease(puVar4);
  pvVar7 = *(void **)(unaff_x20 + 0x10);
  if (pvVar7 == (void *)0x0) {
    Swift::Hasher::_combine(0,HVar6);
  }
  else {
    pcVar8 = *(char **)(unaff_x20 + 8);
    Swift::Hasher::_combine(1,HVar6);
    SVar10.bridgeObject = pvVar7;
    SVar10.str = pcVar8;
    Swift::String::hash(param_1,SVar10);
  }
  FUN_100525cfc(param_1.unknown);
  return;
}



/* Address: 0x1005703fc | FUN_1005703fc */

void FUN_1005703fc(void)

{
  Hasher HVar1;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(0);
  HVar1.unknown = auStack_68;
  FUN_100570278();
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x100570438 | FUN_100570438 */

void FUN_100570438(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined1 uStack_30;
  undefined8 uStack_2f;
  
  FUN_100570a54(&local_60);
  if (unaff_x21 == 0) {
    param_1[1] = uStack_58;
    *param_1 = local_60;
    param_1[3] = uStack_48;
    param_1[2] = uStack_50;
    param_1[5] = CONCAT71(uStack_37,uStack_38);
    param_1[4] = local_40;
    *(undefined8 *)((long)param_1 + 0x31) = uStack_2f;
    *(ulong *)((long)param_1 + 0x29) = CONCAT17(uStack_30,uStack_37);
  }
  return;
}



/* Address: 0x100570480 | thunk_FUN_100570278 */

void thunk_FUN_100570278(void)

{
  FUN_100570278();
  return;
}



/* Address: 0x100570484 | FUN_100570484 */

void FUN_100570484(__int64 param_1)

{
  Hasher HVar1;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(param_1);
  HVar1.unknown = auStack_68;
  FUN_100570278();
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x1005704bc | FUN_1005704bc */

void FUN_1005704bc(void)

{
  FUN_1005700a0();
  return;
}



/* Address: 0x1005704d0 | FUN_1005704d0 */

uint FUN_1005704d0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined8 uStack_5f;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined1 uStack_28;
  undefined7 uStack_27;
  undefined1 uStack_20;
  undefined8 uStack_1f;
  
  uVar1 = 0;
  uStack_88 = param_1[1];
  local_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  local_70 = param_1[4];
  uStack_68 = (undefined1)param_1[5];
  uStack_5f = *(undefined8 *)((long)param_1 + 0x31);
  uStack_67 = (undefined7)*(undefined8 *)((long)param_1 + 0x29);
  uStack_60 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x29) >> 0x38);
  uStack_48 = param_2[1];
  local_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  local_30 = param_2[4];
  uStack_28 = (undefined1)param_2[5];
  uStack_1f = *(undefined8 *)((long)param_2 + 0x31);
  uStack_27 = (undefined7)*(undefined8 *)((long)param_2 + 0x29);
  uStack_20 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x29) >> 0x38);
  FUN_100570640(&local_90,&local_50);
  return uVar1 & 1;
}



/* Address: 0x100570528 | FUN_100570528 */

String FUN_100570528(void)

{
  String SVar1;
  
  FUN_100570c9c();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x100570550 | FUN_100570550 */

String FUN_100570550(void)

{
  String SVar1;
  
  FUN_100570c9c();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x100570578 | FUN_100570578 */

void FUN_100570578(long param_1)

{
  undefined *puVar1;
  long extraout_x8;
  long lVar2;
  
  puVar1 = &DAT_100fd0958;
  FUN_1000f7830(&DAT_100fd0958,&DAT_100c5b208);
  lVar2 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_100570c9c();
  Swift::Encoder::_container();
  (**(code **)(lVar2 + 8))(&stack0xffffffffffffffb0 + -extraout_x8,puVar1);
  return;
}



/* Address: 0x100570640 | FUN_100570640 */

uint FUN_100570640(char *param_1,char *param_2)

{
  bool bVar1;
  uint uVar2;
  undefined *puVar4;
  _StringGuts _Var5;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  char local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  char local_30;
  undefined8 *puVar3;
  
  if (*param_1 == *param_2) {
    _Var5.unknown = *(undefined **)(param_1 + 0x10);
    puVar4 = *(undefined **)(param_2 + 0x10);
    if (_Var5.unknown == (undefined *)0x0) {
      if (puVar4 == (undefined *)0x0) {
LAB_1005706ac:
        uStack_48 = *(undefined8 *)(param_1 + 0x20);
        local_50 = *(undefined8 *)(param_1 + 0x18);
        uStack_38 = *(undefined8 *)(param_1 + 0x30);
        uStack_40 = *(undefined8 *)(param_1 + 0x28);
        local_30 = param_1[0x38];
        uStack_78 = *(undefined8 *)(param_2 + 0x20);
        local_80 = *(undefined8 *)(param_2 + 0x18);
        uStack_68 = *(undefined8 *)(param_2 + 0x30);
        uStack_70 = *(undefined8 *)(param_2 + 0x28);
        local_60 = param_2[0x38];
        puVar3 = &local_50;
        FUN_100527718(puVar3,&local_80);
        uVar2 = (uint)puVar3;
        goto LAB_1005706ec;
      }
    }
    else if (puVar4 != (undefined *)0x0) {
      if ((*(undefined **)(param_1 + 8) == *(undefined **)(param_2 + 8) && _Var5.unknown == puVar4)
         || (bVar1 = Swift::_stringCompareWithSmolCheck
                               ((_StringGuts)*(undefined **)(param_1 + 8),_Var5,
                                (_StringComparisonResult)(__int8)*(undefined **)(param_2 + 8)),
            bVar1)) goto LAB_1005706ac;
    }
  }
  uVar2 = 0;
LAB_1005706ec:
  return uVar2 & 1;
}



/* Address: 0x100570700 | FUN_100570700 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010057073c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ulong FUN_100570700(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  FUN_1000f7830(&DAT_100fcb810,&DAT_100c51eb0);
  _swift_initStaticObject();
  uVar1 = Swift::_findStringSwitchCase(param_1,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  if (7 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}



/* Address: 0x100570764 | FUN_100570764 */

void FUN_100570764(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0938 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5b854;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5b854,&DAT_100ee0d60);
  DAT_100fd0938 = pTVar1;
  return;
}



/* Address: 0x1005707a4 | FUN_1005707a4 */

void FUN_1005707a4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0940 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5b2d8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5b2d8,&DAT_100ee0ad8);
  DAT_100fd0940 = pTVar1;
  return;
}



/* Address: 0x1005707e4 | FUN_1005707e4 */

ulong FUN_1005707e4(ulong param_1)

{
  undefined *puVar1;
  long extraout_x8;
  ulong uVar2;
  long unaff_x21;
  long lVar3;
  undefined1 auStack_60 [15];
  byte local_51;
  
  puVar1 = &DAT_100fd0ad0;
  FUN_1000f7830(&DAT_100fd0ad0,&DAT_100c5b8b0);
  lVar3 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar2 = param_1;
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_100570764();
  Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    FUN_100571618();
    Swift::KeyedDecodingContainer::_decode(&local_51);
    (**(code **)(lVar3 + 8))(auStack_60 + -extraout_x8,puVar1);
    uVar2 = (ulong)local_51;
    FUN_100004594(param_1);
  }
  else {
    FUN_100004594(param_1);
  }
  return uVar2;
}



/* Address: 0x100570908 | FUN_100570908 */

void FUN_100570908(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0950 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5b804;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5b804,&DAT_100ee0cd0);
  DAT_100fd0950 = pTVar1;
  return;
}



/* Address: 0x100570948 | FUN_100570948 */

undefined4 FUN_100570948(undefined1 *param_1,undefined1 *param_2)

{
  bool bVar1;
  _StringComparisonResult expecting;
  
  if (param_1 != &DAT_6c6576656c || param_2 != &DAT_e500000000000000) {
    expecting.value = (__int8)param_1;
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x6c6576656c,(_StringGuts)0xe500000000000000,expecting);
    if (!bVar1) {
      if (((param_1 != (undefined1 *)0x726567676f6c) || (param_2 != &DAT_e600000000000000)) &&
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x726567676f6c,(_StringGuts)0xe600000000000000,expecting),
         !bVar1)) {
        if ((param_1 == (undefined1 *)0x61746164) && (param_2 == &DAT_e400000000000000)) {
          _swift_bridgeObjectRelease(&DAT_e400000000000000);
          return 2;
        }
        bVar1 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)0x61746164,(_StringGuts)0xe400000000000000,expecting);
        _swift_bridgeObjectRelease(param_2);
        if (bVar1) {
          return 2;
        }
        return 3;
      }
      _swift_bridgeObjectRelease(param_2);
      return 1;
    }
  }
  _swift_bridgeObjectRelease(param_2);
  return 0;
}



/* Address: 0x100570a54 | FUN_100570a54 */

/* WARNING: Removing unreachable block (ram,0x000100570bf4) */
/* WARNING: Removing unreachable block (ram,0x000100570b74) */

void FUN_100570a54(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  KeyedDecodingContainer<undefined> KVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  long extraout_x8;
  long unaff_x21;
  long lVar5;
  undefined1 local_160 [64];
  undefined8 local_120;
  undefined8 *puStack_118;
  undefined *local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 uStack_f8;
  undefined7 local_f7;
  undefined1 uStack_f0;
  undefined8 uStack_ef;
  undefined1 local_e1;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 local_c0;
  undefined1 local_b0;
  undefined7 uStack_af;
  undefined8 *puStack_a8;
  undefined *puStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  undefined1 local_78;
  
  puVar1 = &DAT_100fd0ac0;
  FUN_1000f7830(&DAT_100fd0ac0,&DAT_100c5b8a8);
  lVar5 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_100570908();
  KVar2 = Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    local_160[0] = 0;
    FUN_100571618();
    Swift::KeyedDecodingContainer::_decode
              (&local_120,&DAT_100ee0ad8,local_160,puVar1,&DAT_100ee0ad8,KVar2.unknown);
    local_b0 = (undefined1)local_120;
    local_120 = CONCAT71(local_120._1_7_,1);
    puVar3 = &local_120;
    puVar4 = puVar1;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    local_e1 = 2;
    puStack_a8 = puVar3;
    puStack_a0 = puVar4;
    FUN_1004dbda0();
    Swift::KeyedDecodingContainer::_decode
              (&local_e0,&DAT_100edd000,&local_e1,puVar1,&DAT_100edd000,puVar3);
    (**(code **)(lVar5 + 8))(local_160 + -extraout_x8,puVar1);
    uStack_90 = uStack_d8;
    local_98 = local_e0;
    uStack_80 = (undefined1)uStack_c8;
    uStack_7f = (undefined7)((ulong)uStack_c8 >> 8);
    local_88 = (undefined1)uStack_d0;
    uStack_87 = (undefined7)((ulong)uStack_d0 >> 8);
    local_78 = local_c0;
    local_120 = CONCAT71(uStack_af,local_b0);
    puStack_118 = puStack_a8;
    uStack_108 = local_e0;
    local_110 = puStack_a0;
    uStack_100 = uStack_d8;
    uStack_ef = CONCAT17(local_c0,uStack_7f);
    local_f7 = uStack_87;
    uStack_f0 = uStack_80;
    uStack_f8 = local_88;
    FUN_100571658(&local_120,local_160);
    FUN_100004594(param_2);
    FUN_10057168c(&local_b0);
    param_1[1] = puStack_118;
    *param_1 = local_120;
    param_1[3] = uStack_108;
    param_1[2] = local_110;
    param_1[5] = CONCAT71(local_f7,uStack_f8);
    param_1[4] = uStack_100;
    *(undefined8 *)((long)param_1 + 0x31) = uStack_ef;
    *(ulong *)((long)param_1 + 0x29) = CONCAT17(uStack_f0,local_f7);
  }
  else {
    FUN_100004594(param_2);
  }
  return;
}



/* Address: 0x100570c9c | FUN_100570c9c */

void FUN_100570c9c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0960 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5b7b4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5b7b4,&DAT_100ee0c40);
  DAT_100fd0960 = pTVar1;
  return;
}



/* Address: 0x100570cdc | thunk_FUN_100570ce0 */

void thunk_FUN_100570ce0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0968 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5b210;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5b210,&DAT_100ee0ad8);
  DAT_100fd0968 = pTVar1;
  return;
}



/* Address: 0x100570ce0 | FUN_100570ce0 */

void FUN_100570ce0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0968 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5b210;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5b210,&DAT_100ee0ad8);
  DAT_100fd0968 = pTVar1;
  return;
}



/* Address: 0x100570d20 | thunk_FUN_100570d24 */

void thunk_FUN_100570d24(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fd0970 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fd0978;
  FUN_1000f8b08(&DAT_100fd0978,&DAT_100c5b300);
  puVar2 = PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548;
  _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548,puVar1);
  DAT_100fd0970 = puVar2;
  return;
}



/* Address: 0x100570d24 | FUN_100570d24 */

void FUN_100570d24(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fd0970 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fd0978;
  FUN_1000f8b08(&DAT_100fd0978,&DAT_100c5b300);
  puVar2 = PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548;
  _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548,puVar1);
  DAT_100fd0970 = puVar2;
  return;
}



/* Address: 0x100570d74 | thunk_FUN_100570d78 */

void thunk_FUN_100570d78(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0980 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5b3d0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5b3d0,&DAT_100ee0b70);
  DAT_100fd0980 = pTVar1;
  return;
}



/* Address: 0x100570d78 | FUN_100570d78 */

void FUN_100570d78(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0980 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5b3d0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5b3d0,&DAT_100ee0b70);
  DAT_100fd0980 = pTVar1;
  return;
}



/* Address: 0x100570db8 | thunk_FUN_100570dbc */

void thunk_FUN_100570dbc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0988 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5b380;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5b380,&DAT_100ee0b70);
  DAT_100fd0988 = pTVar1;
  return;
}



/* Address: 0x100570dbc | FUN_100570dbc */

void FUN_100570dbc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0988 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5b380;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5b380,&DAT_100ee0b70);
  DAT_100fd0988 = pTVar1;
  return;
}



/* Address: 0x100570dfc | thunk_FUN_100570e00 */

void thunk_FUN_100570e00(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0990 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5b3a8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5b3a8,&DAT_100ee0b70);
  DAT_100fd0990 = pTVar1;
  return;
}



/* Address: 0x100570e00 | FUN_100570e00 */

void FUN_100570e00(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0990 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5b3a8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5b3a8,&DAT_100ee0b70);
  DAT_100fd0990 = pTVar1;
  return;
}



/* Address: 0x100570e40 | thunk_FUN_100570e44 */

void thunk_FUN_100570e44(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0998 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5b340;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5b340,&DAT_100ee0b70);
  DAT_100fd0998 = pTVar1;
  return;
}



/* Address: 0x100570e44 | FUN_100570e44 */

void FUN_100570e44(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0998 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5b340;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5b340,&DAT_100ee0b70);
  DAT_100fd0998 = pTVar1;
  return;
}



/* Address: 0x100570e84 | thunk_FUN_100570e88 */

void thunk_FUN_100570e88(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd09f0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5b4a4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5b4a4,&DAT_100ee0c10);
  DAT_100fd09f0 = pTVar1;
  return;
}


