/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10055a718 | FUN_10055a718 */

undefined1  [16] FUN_10055a718(void)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  byte bVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  undefined1 auVar6 [16];
  
  bVar4 = *unaff_x20;
  uVar5 = 0x6972506465657073;
  puVar3 = (undefined1 *)0xed0000797469726f;
  if (bVar4 != 2) {
    uVar5 = 0xd000000000000014;
    puVar3 = (undefined1 *)0x8000000100dad910;
  }
  uVar1 = 0x73746e6968;
  if (bVar4 != 0) {
    uVar1 = 0x6f69725074736f63;
  }
  puVar2 = &DAT_e500000000000000;
  if (bVar4 != 0) {
    puVar2 = (undefined1 *)0xec00000079746972;
  }
  if (bVar4 < 2) {
    puVar3 = puVar2;
    uVar5 = uVar1;
  }
  auVar6._8_8_ = puVar3;
  auVar6._0_8_ = uVar5;
  return auVar6;
}



/* Address: 0x10055a7a8 | FUN_10055a7a8 */

void FUN_10055a7a8(undefined1 *param_1,undefined1 param_2)

{
  FUN_100561460();
  *param_1 = param_2;
  return;
}



/* Address: 0x10055a7cc | FUN_10055a7cc */

String FUN_10055a7cc(void)

{
  String SVar1;
  
  FUN_100561330();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x10055a7f4 | FUN_10055a7f4 */

String FUN_10055a7f4(void)

{
  String SVar1;
  
  FUN_100561330();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x10055a81c | thunk_FUN_100560b50 */

void thunk_FUN_100560b50(void)

{
  FUN_100560b50();
  return;
}



/* Address: 0x10055a820 | FUN_10055a820 */

void FUN_10055a820(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar5;
  undefined8 local_60;
  undefined1 local_58;
  undefined1 local_51;
  
  puVar1 = &DAT_100fcfaa8;
  FUN_1000f7830(&DAT_100fcfaa8,&BYTE_100c58828);
  lVar5 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_100561330();
  Swift::Encoder::_container();
  local_60 = *unaff_x20;
  local_51 = 0;
  puVar2 = &DAT_100fcfab8;
  FUN_1000f7830(&DAT_100fcfab8,&BYTE_100c58830);
  puVar3 = puVar2;
  FUN_100561370();
  puVar4 = &local_60;
  Swift::KeyedEncodingContainer::_encodeIfPresent(puVar4,&local_51,puVar1,puVar2,puVar3);
  if (unaff_x21 == 0) {
    local_60 = unaff_x20[1];
    local_58 = *(undefined1 *)(unaff_x20 + 2);
    local_51 = 1;
    FUN_100561420();
    Swift::KeyedEncodingContainer::_encodeIfPresent
              (&local_60,&local_51,puVar1,&DAT_100edc918,puVar4);
    local_60 = unaff_x20[3];
    local_58 = *(undefined1 *)(unaff_x20 + 4);
    local_51 = 2;
    Swift::KeyedEncodingContainer::_encodeIfPresent
              (&local_60,&local_51,puVar1,&DAT_100edc918,puVar4);
    local_60 = unaff_x20[5];
    local_58 = *(undefined1 *)(unaff_x20 + 6);
    local_51 = 3;
    Swift::KeyedEncodingContainer::_encodeIfPresent
              (&local_60,&local_51,puVar1,&DAT_100edc918,puVar4);
  }
  (**(code **)(lVar5 + 8))((long)&local_60 - extraout_x8,puVar1);
  return;
}



/* Address: 0x10055aa10 | FUN_10055aa10 */

void FUN_10055aa10(undefined8 param_1,Hasher param_2)

{
  __uint64 _Var1;
  ulong uVar2;
  undefined8 *unaff_x20;
  undefined *puVar3;
  
  puVar3 = (undefined *)*unaff_x20;
  if (puVar3 == (undefined *)0x0) {
    Swift::Hasher::_combine(0,param_2);
  }
  else {
    Swift::Hasher::_combine(1,param_2);
    FUN_1004d8718(param_1);
    param_2.unknown = puVar3;
  }
  if (*(char *)(unaff_x20 + 2) == '\x01') {
    Swift::Hasher::_combine(0,param_2);
  }
  else {
    uVar2 = unaff_x20[1];
    Swift::Hasher::_combine(1,param_2);
    _Var1 = 0;
    if ((uVar2 & 0x7fffffffffffffff) != 0) {
      _Var1 = uVar2;
    }
    Swift::Hasher::_combine(_Var1,param_2);
  }
  if (*(char *)(unaff_x20 + 4) == '\x01') {
    Swift::Hasher::_combine(0,param_2);
  }
  else {
    uVar2 = unaff_x20[3];
    Swift::Hasher::_combine(1,param_2);
    _Var1 = 0;
    if ((uVar2 & 0x7fffffffffffffff) != 0) {
      _Var1 = uVar2;
    }
    Swift::Hasher::_combine(_Var1,param_2);
  }
  if (*(char *)(unaff_x20 + 6) == '\x01') {
    Swift::Hasher::_combine(0,param_2);
  }
  else {
    uVar2 = unaff_x20[5];
    Swift::Hasher::_combine(1,param_2);
    _Var1 = 0;
    if ((uVar2 & 0x7fffffffffffffff) != 0) {
      _Var1 = uVar2;
    }
    Swift::Hasher::_combine(_Var1,param_2);
  }
  return;
}



/* Address: 0x10055aaf0 | FUN_10055aaf0 */

void FUN_10055aaf0(void)

{
  Hasher HVar1;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(0);
  HVar1.unknown = auStack_68;
  FUN_10055aa10();
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x10055ab2c | FUN_10055ab2c */

void FUN_10055ab2c(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  
  FUN_1005615d0(&local_58);
  if (unaff_x21 == 0) {
    param_1[1] = uStack_50;
    *param_1 = local_58;
    param_1[3] = uStack_40;
    param_1[2] = local_48;
    param_1[5] = uStack_30;
    param_1[4] = local_38;
    *(undefined1 *)(param_1 + 6) = local_28;
  }
  return;
}



/* Address: 0x10055ab78 | thunk_FUN_10055aa10 */

void thunk_FUN_10055aa10(void)

{
  FUN_10055aa10();
  return;
}



/* Address: 0x10055ab7c | FUN_10055ab7c */

void FUN_10055ab7c(void)

{
  FUN_10055ab88();
  return;
}



/* Address: 0x10055ab88 | FUN_10055ab88 */

void FUN_10055ab88(__int64 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  Hasher HVar1;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(param_1);
  HVar1.unknown = auStack_68;
  (*param_4)();
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x10055abc4 | FUN_10055abc4 */

void FUN_10055abc4(void)

{
  FUN_10055a820();
  return;
}



/* Address: 0x10055abd8 | FUN_10055abd8 */

uint FUN_10055abd8(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined1 local_20;
  
  uVar1 = 0;
  uStack_88 = param_1[1];
  local_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  local_70 = param_1[4];
  local_60 = *(undefined1 *)(param_1 + 6);
  uStack_48 = param_2[1];
  local_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  local_30 = param_2[4];
  local_20 = *(undefined1 *)(param_2 + 6);
  FUN_100560b50(&local_90,&local_50);
  return uVar1 & 1;
}



/* Address: 0x10055ac30 | FUN_10055ac30 */

void FUN_10055ac30(undefined8 param_1,undefined8 param_2)

{
  FUN_1004cbd4c(param_1,param_2,&DAT_100fd03c0);
  return;
}



/* Address: 0x10055ac4c | FUN_10055ac4c */

undefined1  [16] FUN_10055ac4c(char param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_1 == '\0') {
    auVar4._8_8_ = &DAT_e400000000000000;
    auVar4._0_8_ = 0x656e6f6e;
    return auVar4;
  }
  uVar1 = 0xea00000000007265;
  uVar2 = 0x7672655373696874;
  if (param_1 != '\x01') {
    uVar1 = 0xea00000000007372;
    uVar2 = 0x65767265536c6c61;
  }
  auVar3._8_8_ = uVar1;
  auVar3._0_8_ = uVar2;
  return auVar3;
}



/* Address: 0x10055aca0 | FUN_10055aca0 */

void FUN_10055aca0(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1004cbd4c(uVar1,param_2[1],&DAT_100fd03c0);
  *param_1 = (char)uVar1;
  return;
}



/* Address: 0x10055acd4 | FUN_10055acd4 */

void FUN_10055acd4(undefined8 *param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  char cVar4;
  undefined8 uVar5;
  char *unaff_x20;
  
  cVar4 = *unaff_x20;
  puVar1 = (undefined1 *)0xea00000000007265;
  uVar5 = 0x7672655373696874;
  if (cVar4 != '\x01') {
    puVar1 = (undefined1 *)0xea00000000007372;
    uVar5 = 0x65767265536c6c61;
  }
  uVar2 = 0x656e6f6e;
  if (cVar4 != '\0') {
    uVar2 = uVar5;
  }
  puVar3 = &DAT_e400000000000000;
  if (cVar4 != '\0') {
    puVar3 = puVar1;
  }
  *param_1 = uVar2;
  param_1[1] = puVar3;
  return;
}



/* Address: 0x10055ad30 | FUN_10055ad30 */

void FUN_10055ad30(void)

{
  undefined1 *puVar1;
  char *pcVar2;
  char cVar3;
  char *pcVar4;
  Hasher HVar5;
  char *unaff_x20;
  String SVar6;
  undefined1 auStack_68 [72];
  
  cVar3 = *unaff_x20;
  Swift::Hasher::init(0);
  puVar1 = (undefined1 *)0xea00000000007265;
  pcVar4 = (char *)0x7672655373696874;
  if (cVar3 != '\x01') {
    puVar1 = (undefined1 *)0xea00000000007372;
    pcVar4 = (char *)0x65767265536c6c61;
  }
  pcVar2 = (char *)0x656e6f6e;
  if (cVar3 != '\0') {
    pcVar2 = pcVar4;
  }
  HVar5.unknown = &DAT_e400000000000000;
  if (cVar3 != '\0') {
    HVar5.unknown = puVar1;
  }
  SVar6.bridgeObject = HVar5.unknown;
  SVar6.str = pcVar2;
  Swift::String::hash((Hasher)auStack_68,SVar6);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar5);
  return;
}



/* Address: 0x10055adcc | FUN_10055adcc */

void FUN_10055adcc(Hasher param_1)

{
  undefined1 *puVar1;
  char *pcVar2;
  undefined1 *puVar3;
  char cVar4;
  char *pcVar5;
  char *unaff_x20;
  String SVar6;
  
  cVar4 = *unaff_x20;
  puVar1 = (undefined1 *)0xea00000000007265;
  pcVar5 = (char *)0x7672655373696874;
  if (cVar4 != '\x01') {
    puVar1 = (undefined1 *)0xea00000000007372;
    pcVar5 = (char *)0x65767265536c6c61;
  }
  pcVar2 = (char *)0x656e6f6e;
  if (cVar4 != '\0') {
    pcVar2 = pcVar5;
  }
  puVar3 = &DAT_e400000000000000;
  if (cVar4 != '\0') {
    puVar3 = puVar1;
  }
  SVar6.bridgeObject = puVar3;
  SVar6.str = pcVar2;
  Swift::String::hash(param_1,SVar6);
  _swift_bridgeObjectRelease(puVar3);
  return;
}



/* Address: 0x10055ae44 | FUN_10055ae44 */

void FUN_10055ae44(__int64 param_1)

{
  undefined1 *puVar1;
  char *pcVar2;
  char cVar3;
  char *pcVar4;
  Hasher HVar5;
  char *unaff_x20;
  String SVar6;
  undefined1 auStack_68 [72];
  
  cVar3 = *unaff_x20;
  Swift::Hasher::init(param_1);
  puVar1 = (undefined1 *)0xea00000000007265;
  pcVar4 = (char *)0x7672655373696874;
  if (cVar3 != '\x01') {
    puVar1 = (undefined1 *)0xea00000000007372;
    pcVar4 = (char *)0x65767265536c6c61;
  }
  pcVar2 = (char *)0x656e6f6e;
  if (cVar3 != '\0') {
    pcVar2 = pcVar4;
  }
  HVar5.unknown = &DAT_e400000000000000;
  if (cVar3 != '\0') {
    HVar5.unknown = puVar1;
  }
  SVar6.bridgeObject = HVar5.unknown;
  SVar6.str = pcVar2;
  Swift::String::hash((Hasher)auStack_68,SVar6);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar5);
  return;
}



/* Address: 0x10055aedc | FUN_10055aedc */

void FUN_10055aedc(void)

{
  FUN_100567668();
  (extension_Swift)::Swift::RawRepresentable::_init();
  return;
}



/* Address: 0x10055af38 | FUN_10055af38 */

void FUN_10055af38(void)

{
  FUN_100567668();
  (extension_Swift)::Swift::RawRepresentable::_encode();
  return;
}



/* Address: 0x10055af84 | FUN_10055af84 */

byte * FUN_10055af84(void)

{
  return &BYTE_100c587c8;
}



/* Address: 0x10055af90 | FUN_10055af90 */

undefined1  [16] FUN_10055af90(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = &DAT_e700000000000000;
  auVar1._0_8_ = 0x6e727554646e65;
  return auVar1;
}



/* Address: 0x10055afa8 | FUN_10055afa8 */

byte * FUN_10055afa8(void)

{
  return &BYTE_100c587d8;
}



/* Address: 0x10055afb4 | FUN_10055afb4 */

undefined1  [16] FUN_10055afb4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xec00000065636e65;
  auVar1._0_8_ = 0x75716553706f7473;
  return auVar1;
}



/* Address: 0x10055afd4 | FUN_10055afd4 */

byte * FUN_10055afd4(void)

{
  return &BYTE_100c587e8;
}



/* Address: 0x10055afe0 | FUN_10055afe0 */

undefined1  [16] FUN_10055afe0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xe900000000000073;
  auVar1._0_8_ = 0x6e656b6f5478616d;
  return auVar1;
}



/* Address: 0x10055affc | FUN_10055affc */

byte * FUN_10055affc(void)

{
  return &BYTE_100c587f8;
}



/* Address: 0x10055b008 | FUN_10055b008 */

undefined1  [16] FUN_10055b008(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = &DAT_e700000000000000;
  auVar1._0_8_ = 0x6573556c6f6f74;
  return auVar1;
}



/* Address: 0x10055b020 | FUN_10055b020 */

void FUN_10055b020(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  return;
}



/* Address: 0x10055b02c | FUN_10055b02c */

void FUN_10055b02c(void)

{
  FUN_100567628();
  (extension_Swift)::Swift::RawRepresentable::_init();
  return;
}



/* Address: 0x10055b088 | FUN_10055b088 */

void FUN_10055b088(void)

{
  FUN_100567628();
  (extension_Swift)::Swift::RawRepresentable::_encode();
  return;
}



/* Address: 0x10055b0d4 | FUN_10055b0d4 */

undefined1  [16] FUN_10055b0d4(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  byte bVar4;
  undefined1 *puVar5;
  byte *unaff_x20;
  undefined1 auVar6 [16];
  
  bVar4 = *unaff_x20;
  puVar5 = (undefined1 *)0x7475706e69;
  if (bVar4 != 2) {
    puVar5 = (undefined1 *)0x6174656d5f;
  }
  puVar1 = &SUB_00006469;
  if (bVar4 != 0) {
    puVar1 = (undefined1 *)0x656d616e;
  }
  puVar2 = &SUB_e200000000000000;
  if (bVar4 != 0) {
    puVar2 = &DAT_e400000000000000;
  }
  puVar3 = &DAT_e500000000000000;
  if (bVar4 < 2) {
    puVar3 = puVar2;
    puVar5 = puVar1;
  }
  auVar6._8_8_ = puVar3;
  auVar6._0_8_ = puVar5;
  return auVar6;
}



/* Address: 0x10055b134 | FUN_10055b134 */

void FUN_10055b134(undefined1 *param_1,undefined1 param_2)

{
  FUN_10056188c();
  *param_1 = param_2;
  return;
}



/* Address: 0x10055b158 | FUN_10055b158 */

String FUN_10055b158(void)

{
  String SVar1;
  
  FUN_10056184c();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x10055b180 | FUN_10055b180 */

String FUN_10055b180(void)

{
  String SVar1;
  
  FUN_10056184c();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x10055b1a8 | thunk_FUN_100561120 */

void thunk_FUN_100561120(void)

{
  FUN_100561120();
  return;
}



/* Address: 0x10055b1ac | FUN_10055b1ac */

/* WARNING: Removing unreachable block (ram,0x00010055b320) */

void FUN_10055b1ac(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong *puVar4;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar5;
  undefined1 auStack_60 [7];
  undefined1 local_59;
  ulong local_58;
  
  puVar1 = &DAT_100fcfad8;
  FUN_1000f7830(&DAT_100fcfad8,&BYTE_100c58838);
  lVar5 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_10056184c();
  Swift::Encoder::_container();
  local_58 = local_58 & 0xffffffffffffff00;
  Swift::KeyedEncodingContainer::_encode(*unaff_x20,unaff_x20[1],&local_58,puVar1);
  if (unaff_x21 == 0) {
    local_58 = CONCAT71(local_58._1_7_,1);
    Swift::KeyedEncodingContainer::_encode(unaff_x20[2],unaff_x20[3],&local_58,puVar1);
    local_58 = unaff_x20[4];
    local_59 = 2;
    puVar2 = &DAT_100fcc380;
    FUN_1000f7830(&DAT_100fcc380,&DAT_100c54e90);
    puVar3 = &DAT_100fcc388;
    FUN_1004dbd24(&DAT_100fcc388,FUN_1004d9ea8,
                  PTR___protocol_witness_table_for_Swift_String___Swift_Encodable_in_Swift_100eac210
                  ,PTR__Swift__Swift__Dictionary<undefined,undefined>_>Swift__Encodable_100eabe68);
    puVar4 = &local_58;
    Swift::KeyedEncodingContainer::_encode(puVar4,&local_59,puVar1,puVar2,puVar3);
    local_58 = unaff_x20[5];
    local_59 = 3;
    FUN_1004e02ac();
    Swift::KeyedEncodingContainer::_encodeIfPresent
              (&local_58,&local_59,puVar1,&DAT_100edcda0,puVar4);
    (**(code **)(lVar5 + 8))(auStack_60 + -extraout_x8,puVar1);
  }
  else {
    (**(code **)(lVar5 + 8))(auStack_60 + -extraout_x8,puVar1);
  }
  return;
}



/* Address: 0x10055b3a4 | FUN_10055b3a4 */

void FUN_10055b3a4(Hasher param_1)

{
  Hasher HVar1;
  void *pvVar2;
  String *unaff_x20;
  
  Swift::String::hash(param_1,*unaff_x20);
  Swift::String::hash(param_1,unaff_x20[1]);
  HVar1.unknown = unaff_x20[2].str;
  FUN_1004df778(param_1.unknown);
  pvVar2 = unaff_x20[2].bridgeObject;
  if (pvVar2 != (void *)0x0) {
    Swift::Hasher::_combine(1,HVar1);
    FUN_1004df778(param_1.unknown,pvVar2);
    return;
  }
  Swift::Hasher::_combine(0,HVar1);
  return;
}



/* Address: 0x10055b420 | FUN_10055b420 */

void FUN_10055b420(void)

{
  Hasher HVar1;
  Hasher HVar2;
  void *pvVar3;
  String *unaff_x20;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(0);
  Swift::String::hash((Hasher)auStack_68,*unaff_x20);
  Swift::String::hash((Hasher)auStack_68,unaff_x20[1]);
  HVar2.unknown = unaff_x20[2].str;
  FUN_1004df778(auStack_68);
  pvVar3 = unaff_x20[2].bridgeObject;
  if (pvVar3 == (void *)0x0) {
    HVar1.unknown = (undefined *)0x0;
    Swift::Hasher::_combine(0,HVar2);
  }
  else {
    Swift::Hasher::_combine(1,HVar2);
    HVar1.unknown = auStack_68;
    FUN_1004df778(HVar1.unknown,pvVar3);
  }
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x10055b4a8 | FUN_10055b4a8 */

void FUN_10055b4a8(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  FUN_1005619dc(&local_50);
  if (unaff_x21 == 0) {
    param_1[1] = uStack_48;
    *param_1 = local_50;
    param_1[3] = uStack_38;
    param_1[2] = uStack_40;
    param_1[5] = uStack_28;
    param_1[4] = local_30;
  }
  return;
}



/* Address: 0x10055b4e8 | FUN_10055b4e8 */

void FUN_10055b4e8(void)

{
  void *pvVar1;
  String SVar2;
  String SVar3;
  Hasher HVar4;
  Hasher HVar5;
  String *unaff_x20;
  undefined1 auStack_98 [72];
  
  SVar2 = *unaff_x20;
  SVar3 = unaff_x20[1];
  HVar5.unknown = unaff_x20[2].str;
  pvVar1 = unaff_x20[2].bridgeObject;
  Swift::Hasher::init(0);
  Swift::String::hash((Hasher)auStack_98,SVar2);
  Swift::String::hash((Hasher)auStack_98,SVar3);
  FUN_1004df778(auStack_98);
  if (pvVar1 == (void *)0x0) {
    HVar4.unknown = (undefined *)0x0;
    Swift::Hasher::_combine(0,HVar5);
  }
  else {
    Swift::Hasher::_combine(1,HVar5);
    HVar4.unknown = auStack_98;
    FUN_1004df778(HVar4.unknown,pvVar1);
  }
  Swift::Hasher::_finalize(HVar4);
  return;
}



/* Address: 0x10055b594 | FUN_10055b594 */

void FUN_10055b594(Hasher param_1)

{
  void *pvVar1;
  String SVar2;
  Hasher HVar3;
  String *unaff_x20;
  
  SVar2 = unaff_x20[1];
  HVar3.unknown = unaff_x20[2].str;
  pvVar1 = unaff_x20[2].bridgeObject;
  Swift::String::hash(param_1,*unaff_x20);
  Swift::String::hash(param_1,SVar2);
  FUN_1004df778(param_1.unknown);
  if (pvVar1 != (void *)0x0) {
    Swift::Hasher::_combine(1,HVar3);
    FUN_1004df778(param_1.unknown,pvVar1);
    return;
  }
  Swift::Hasher::_combine(0,HVar3);
  return;
}



/* Address: 0x10055b624 | FUN_10055b624 */

void FUN_10055b624(__int64 param_1)

{
  void *pvVar1;
  String SVar2;
  String SVar3;
  Hasher HVar4;
  Hasher HVar5;
  String *unaff_x20;
  undefined1 auStack_98 [72];
  
  SVar2 = *unaff_x20;
  SVar3 = unaff_x20[1];
  HVar5.unknown = unaff_x20[2].str;
  pvVar1 = unaff_x20[2].bridgeObject;
  Swift::Hasher::init(param_1);
  Swift::String::hash((Hasher)auStack_98,SVar2);
  Swift::String::hash((Hasher)auStack_98,SVar3);
  FUN_1004df778(auStack_98);
  if (pvVar1 == (void *)0x0) {
    HVar4.unknown = (undefined *)0x0;
    Swift::Hasher::_combine(0,HVar5);
  }
  else {
    Swift::Hasher::_combine(1,HVar5);
    HVar4.unknown = auStack_98;
    FUN_1004df778(HVar4.unknown,pvVar1);
  }
  Swift::Hasher::_finalize(HVar4);
  return;
}



/* Address: 0x10055b6cc | FUN_10055b6cc */

void FUN_10055b6cc(void)

{
  FUN_10055b1ac();
  return;
}



/* Address: 0x10055b6e0 | FUN_10055b6e0 */

uint FUN_10055b6e0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  local_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_48 = param_1[5];
  local_50 = param_1[4];
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  local_30 = param_2[2];
  uStack_18 = param_2[5];
  uStack_20 = param_2[4];
  FUN_100561120(&local_70,&uStack_40);
  return uVar1 & 1;
}



/* Address: 0x10055b724 | FUN_10055b724 */

void FUN_10055b724(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x10055b72c | thunk_FUN_100560020 */

void thunk_FUN_100560020(void)

{
  FUN_100560020();
  return;
}



/* Address: 0x10055b730 | FUN_10055b730 */

void FUN_10055b730(Hasher param_1,Hasher param_2)

{
  void *pvVar1;
  String SVar2;
  String SVar3;
  String SVar4;
  int iVar5;
  __uint64 _Var6;
  String *pSVar7;
  Hasher HVar8;
  Hasher HVar9;
  char *pcVar10;
  char *pcVar11;
  undefined8 *unaff_x20;
  void *pvVar12;
  void *pvVar13;
  char *pcVar14;
  void *pvVar15;
  char *pcVar16;
  void *pvVar17;
  String SVar18;
  String SVar19;
  String local_160;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined1 uStack_f8;
  undefined7 uStack_f7;
  undefined1 uStack_f0;
  undefined8 uStack_ef;
  void *local_e0;
  char *pcStack_d8;
  void *pvStack_d0;
  char *pcStack_c8;
  void *local_c0;
  char *local_b0;
  void *pvStack_a8;
  char *pcStack_a0;
  void *pvStack_98;
  char *local_90;
  void *pvStack_88;
  char *pcStack_80;
  void *pvStack_78;
  char *local_70;
  
  uStack_118 = unaff_x20[9];
  local_120 = unaff_x20[8];
  uStack_108 = unaff_x20[0xb];
  uStack_110 = unaff_x20[10];
  local_100 = unaff_x20[0xc];
  uStack_f8 = (undefined1)unaff_x20[0xd];
  uStack_ef = *(undefined8 *)((long)unaff_x20 + 0x71);
  uStack_f7 = (undefined7)*(undefined8 *)((long)unaff_x20 + 0x69);
  uStack_f0 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 0x69) >> 0x38);
  local_160.bridgeObject = (void *)unaff_x20[1];
  local_160.str = (char *)*unaff_x20;
  uStack_148 = unaff_x20[3];
  uStack_150 = unaff_x20[2];
  uStack_138 = unaff_x20[5];
  local_140 = unaff_x20[4];
  uStack_128 = unaff_x20[7];
  uStack_130 = unaff_x20[6];
  iVar5 = (int)&local_160;
  FUN_1004dbae4();
  if (iVar5 < 2) {
    if (iVar5 == 0) {
      pSVar7 = &local_160;
      FUN_100004520();
      SVar18 = *pSVar7;
      Swift::Hasher::_combine(0,param_2);
      Swift::String::hash(param_1,SVar18);
      return;
    }
    pSVar7 = &local_160;
    FUN_100004520();
    pcVar10 = pSVar7->str;
    pvVar12 = pSVar7->bridgeObject;
    pcVar11 = pSVar7[1].str;
    pvVar13 = pSVar7[1].bridgeObject;
    _Var6 = 1;
  }
  else {
    if (iVar5 != 2) {
      if (iVar5 != 3) {
        pSVar7 = &local_160;
        FUN_100004520();
        SVar18 = *pSVar7;
        HVar8.unknown = pSVar7[1].str;
        SVar19 = pSVar7[1];
        HVar9.unknown = pSVar7[2].str;
        pvVar12 = pSVar7[2].bridgeObject;
        SVar2 = pSVar7[2];
        pcVar10 = pSVar7[3].str;
        pvVar13 = pSVar7[3].bridgeObject;
        SVar3 = pSVar7[3];
        pvVar1 = pSVar7[4].bridgeObject;
        SVar4 = pSVar7[4];
        pvVar15 = pSVar7[5].bridgeObject;
        pcVar14 = pSVar7[5].str;
        pvVar17 = pSVar7[6].bridgeObject;
        pcVar16 = pSVar7[6].str;
        pcVar11 = pSVar7[7].str;
        Swift::Hasher::_combine(4,param_2);
        Swift::String::hash(param_1,SVar18);
        Swift::String::hash(param_1,SVar19);
        if (pvVar12 == (void *)0x0) {
          Swift::Hasher::_combine(0,HVar8);
          HVar9.unknown = HVar8.unknown;
        }
        else {
          Swift::Hasher::_combine(1,HVar8);
          Swift::String::hash(param_1,SVar2);
        }
        if (pvVar13 == (void *)0x0) {
          Swift::Hasher::_combine(0,HVar9);
        }
        else {
          Swift::Hasher::_combine(1,HVar9);
          Swift::String::hash(param_1,SVar3);
          HVar9.unknown = pcVar10;
        }
        if (pvVar1 == (void *)0x0) {
          Swift::Hasher::_combine(0,HVar9);
        }
        else {
          Swift::Hasher::_combine(1,HVar9);
          Swift::String::hash(param_1,SVar4);
        }
        local_b0 = pcVar14;
        pvStack_a8 = pvVar15;
        pcStack_a0 = pcVar16;
        pvStack_98 = pvVar17;
        local_90 = pcVar11;
        FUN_10055fb80(param_1.unknown);
        return;
      }
      pSVar7 = &local_160;
      FUN_100004520();
      pvStack_88 = pSVar7[2].bridgeObject;
      local_90 = pSVar7[2].str;
      pvStack_78 = pSVar7[3].bridgeObject;
      pcStack_80 = pSVar7[3].str;
      local_70 = pSVar7[4].str;
      pvStack_a8 = pSVar7->bridgeObject;
      local_b0 = pSVar7->str;
      pvStack_98 = pSVar7[1].bridgeObject;
      pcStack_a0 = pSVar7[1].str;
      local_c0 = pSVar7[6].bridgeObject;
      pcVar10 = pSVar7[7].str;
      pcStack_d8 = pSVar7[5].str;
      local_e0 = pSVar7[4].bridgeObject;
      pcStack_c8 = pSVar7[6].str;
      pvStack_d0 = pSVar7[5].bridgeObject;
      Swift::Hasher::_combine(3,param_2);
      FUN_10057b19c(param_1.unknown);
      FUN_10055fb80(param_1.unknown);
      if (pcVar10 != (char *)0x0) {
        Swift::Hasher::_combine(1,param_2);
        FUN_1004df778(param_1.unknown,pcVar10);
        return;
      }
      Swift::Hasher::_combine(0,param_2);
      return;
    }
    pSVar7 = &local_160;
    FUN_100004520();
    pcVar10 = pSVar7->str;
    pvVar12 = pSVar7->bridgeObject;
    pcVar11 = pSVar7[1].str;
    pvVar13 = pSVar7[1].bridgeObject;
    _Var6 = 2;
  }
  Swift::Hasher::_combine(_Var6,param_2);
  SVar18.bridgeObject = pvVar12;
  SVar18.str = pcVar10;
  Swift::String::hash(param_1,SVar18);
  SVar19.bridgeObject = pvVar13;
  SVar19.str = pcVar11;
  Swift::String::hash(param_1,SVar19);
  return;
}



/* Address: 0x10055b9dc | FUN_10055b9dc */

void FUN_10055b9dc(void)

{
  Hasher HVar1;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(0);
  HVar1.unknown = auStack_68;
  FUN_10055b730();
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x10055ba18 | thunk_FUN_10055b730 */

void thunk_FUN_10055b730(void)

{
  FUN_10055b730();
  return;
}



/* Address: 0x10055ba1c | FUN_10055ba1c */

void FUN_10055ba1c(__int64 param_1)

{
  Hasher HVar1;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(param_1);
  HVar1.unknown = auStack_68;
  FUN_10055b730();
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x10055ba54 | FUN_10055ba54 */

uint FUN_10055ba54(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined1 uStack_b0;
  undefined8 uStack_af;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined7 local_37;
  undefined1 uStack_30;
  undefined8 uStack_2f;
  
  uVar1 = 0;
  uStack_d8 = param_1[9];
  local_e0 = param_1[8];
  uStack_c8 = param_1[0xb];
  uStack_d0 = param_1[10];
  local_c0 = param_1[0xc];
  uStack_b8 = (undefined1)param_1[0xd];
  uStack_af = *(undefined8 *)((long)param_1 + 0x71);
  uStack_b7 = (undefined7)*(undefined8 *)((long)param_1 + 0x69);
  uStack_b0 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x69) >> 0x38);
  uStack_118 = param_1[1];
  local_120 = *param_1;
  uStack_108 = param_1[3];
  uStack_110 = param_1[2];
  uStack_f8 = param_1[5];
  local_100 = param_1[4];
  uStack_e8 = param_1[7];
  uStack_f0 = param_1[6];
  uStack_98 = param_2[1];
  local_a0 = *param_2;
  uStack_88 = param_2[3];
  uStack_90 = param_2[2];
  uStack_78 = param_2[5];
  local_80 = param_2[4];
  uStack_68 = param_2[7];
  uStack_70 = param_2[6];
  uStack_58 = param_2[9];
  local_60 = param_2[8];
  uStack_48 = param_2[0xb];
  local_50 = param_2[10];
  uStack_40 = param_2[0xc];
  uStack_2f = *(undefined8 *)((long)param_2 + 0x71);
  uStack_30 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x69) >> 0x38);
  uStack_38 = (undefined1)param_2[0xd];
  local_37 = (undefined7)((ulong)param_2[0xd] >> 8);
  FUN_100560020(&local_120,&local_a0);
  return uVar1 & 1;
}



/* Address: 0x10055bad4 | FUN_10055bad4 */

undefined1  [16] FUN_10055bad4(void)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  byte *unaff_x20;
  undefined1 auVar7 [16];
  
  bVar4 = *unaff_x20;
  puVar6 = (undefined1 *)0xe900000000000064;
  uVar1 = 0x726f7272457369;
  if (bVar4 != 3) {
    uVar1 = 0x6174656d5f;
  }
  puVar2 = &DAT_e700000000000000;
  if (bVar4 != 3) {
    puVar2 = &DAT_e500000000000000;
  }
  puVar3 = (undefined1 *)0x8000000100dad930;
  uVar5 = 0xd000000000000011;
  if (bVar4 != 2) {
    puVar3 = puVar2;
    uVar5 = uVar1;
  }
  uVar1 = 0x496573556c6f6f74;
  if (bVar4 != 0) {
    puVar6 = &DAT_e700000000000000;
    uVar1 = 0x746e65746e6f63;
  }
  if (bVar4 < 2) {
    puVar3 = puVar6;
    uVar5 = uVar1;
  }
  auVar7._8_8_ = puVar3;
  auVar7._0_8_ = uVar5;
  return auVar7;
}



/* Address: 0x10055bb74 | FUN_10055bb74 */

void FUN_10055bb74(undefined1 *param_1,undefined1 param_2)

{
  FUN_100561d6c();
  *param_1 = param_2;
  return;
}



/* Address: 0x10055bb98 | FUN_10055bb98 */

String FUN_10055bb98(void)

{
  String SVar1;
  
  FUN_100561c7c();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x10055bbc0 | FUN_10055bbc0 */

String FUN_10055bbc0(void)

{
  String SVar1;
  
  FUN_100561c7c();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x10055bbe8 | thunk_FUN_10056073c */

void thunk_FUN_10056073c(void)

{
  FUN_10056073c();
  return;
}



/* Address: 0x10055bbec | FUN_10055bbec */

void FUN_10055bbec(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar5;
  undefined1 auStack_60 [7];
  undefined1 local_59;
  ulong local_58;
  
  puVar1 = &DAT_100fcfae8;
  FUN_1000f7830(&DAT_100fcfae8,&BYTE_100c58848);
  lVar5 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_100561c7c();
  Swift::Encoder::_container();
  local_58 = local_58 & 0xffffffffffffff00;
  Swift::KeyedEncodingContainer::_encode(*unaff_x20,unaff_x20[1],&local_58,puVar1);
  if (unaff_x21 == 0) {
    local_58 = unaff_x20[2];
    local_59 = 1;
    puVar2 = &DAT_100fcfaf8;
    FUN_1000f7830(&DAT_100fcfaf8,&BYTE_100c58850);
    puVar3 = puVar2;
    FUN_100561cbc();
    Swift::KeyedEncodingContainer::_encode(&local_58,&local_59,puVar1,puVar2,puVar3);
    local_58 = unaff_x20[3];
    local_59 = 2;
    puVar2 = &DAT_100fcc380;
    FUN_1000f7830(&DAT_100fcc380,&DAT_100c54e90);
    puVar3 = &DAT_100fcc388;
    FUN_1004dbd24(&DAT_100fcc388,FUN_1004d9ea8,
                  PTR___protocol_witness_table_for_Swift_String___Swift_Encodable_in_Swift_100eac210
                  ,PTR__Swift__Swift__Dictionary<undefined,undefined>_>Swift__Encodable_100eabe68);
    Swift::KeyedEncodingContainer::_encodeIfPresent(&local_58,&local_59,puVar1,puVar2,puVar3);
    uVar4 = (ulong)*(byte *)(unaff_x20 + 4);
    local_58 = CONCAT71(local_58._1_7_,3);
    Swift::KeyedEncodingContainer::_encodeIfPresent(uVar4,&local_58,puVar1);
    local_58 = unaff_x20[5];
    local_59 = 4;
    FUN_1004e02ac();
    Swift::KeyedEncodingContainer::_encodeIfPresent(&local_58,&local_59,puVar1,&DAT_100edcda0,uVar4)
    ;
  }
  (**(code **)(lVar5 + 8))(auStack_60 + -extraout_x8,puVar1);
  return;
}



/* Address: 0x10055be0c | FUN_10055be0c */

void FUN_10055be0c(Hasher param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  byte bVar10;
  int iVar11;
  String *pSVar12;
  undefined8 *puVar13;
  Hasher HVar14;
  Hasher HVar15;
  char *pcVar16;
  Hasher HVar17;
  Hasher HVar18;
  char *pcVar19;
  Hasher HVar21;
  char *pcVar22;
  char *pcVar23;
  String *unaff_x20;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined *puVar26;
  void *pvVar27;
  __uint64 _Var28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  char *pcVar32;
  void *pvVar33;
  char *pcVar34;
  void *pvVar35;
  String SVar36;
  String SVar37;
  undefined1 auStack_2b8 [120];
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined1 uStack_1d8;
  undefined7 local_1d7;
  undefined1 uStack_1d0;
  undefined8 uStack_1cf;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 uStack_158;
  undefined7 local_157;
  undefined1 uStack_150;
  undefined8 uStack_14f;
  String local_140;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 uStack_d8;
  undefined7 local_d7;
  undefined1 uStack_d0;
  undefined8 uStack_cf;
  void *local_c0;
  char *pcStack_b8;
  void *pvStack_b0;
  char *pcStack_a8;
  void *local_a0;
  char *local_98;
  void *pvStack_90;
  char *local_88;
  void *pvStack_80;
  char *local_78;
  void *pvVar20;
  
  HVar21.unknown = unaff_x20->str;
  Swift::String::hash(param_1,*unaff_x20);
  pcVar23 = unaff_x20[1].str;
  _Var28 = *(__uint64 *)(pcVar23 + 0x10);
  Swift::Hasher::_combine(_Var28,HVar21);
  if (_Var28 != 0) {
    pcVar23 = pcVar23 + 0x20;
    HVar14.unknown = HVar21.unknown;
    do {
      uStack_1b8 = *(undefined8 *)(pcVar23 + 8);
      local_1c0 = *(undefined8 *)pcVar23;
      uStack_1a8 = *(undefined8 *)(pcVar23 + 0x18);
      uStack_1b0 = *(undefined8 *)(pcVar23 + 0x10);
      uStack_198 = *(undefined8 *)(pcVar23 + 0x28);
      local_1a0 = *(undefined8 *)(pcVar23 + 0x20);
      uStack_188 = *(undefined8 *)(pcVar23 + 0x38);
      uStack_190 = *(undefined8 *)(pcVar23 + 0x30);
      uStack_178 = *(undefined8 *)(pcVar23 + 0x48);
      local_180 = *(undefined8 *)(pcVar23 + 0x40);
      uStack_168 = *(undefined8 *)(pcVar23 + 0x58);
      local_170 = *(undefined8 *)(pcVar23 + 0x50);
      uStack_160 = *(undefined8 *)(pcVar23 + 0x60);
      uStack_14f = *(undefined8 *)(pcVar23 + 0x71);
      uStack_150 = (undefined1)((ulong)*(undefined8 *)(pcVar23 + 0x69) >> 0x38);
      uStack_158 = (undefined1)*(undefined8 *)(pcVar23 + 0x68);
      local_157 = (undefined7)((ulong)*(undefined8 *)(pcVar23 + 0x68) >> 8);
      uStack_e8 = *(undefined8 *)(pcVar23 + 0x58);
      local_f0 = *(undefined8 *)(pcVar23 + 0x50);
      uStack_e0 = *(undefined8 *)(pcVar23 + 0x60);
      uStack_cf = *(undefined8 *)(pcVar23 + 0x71);
      uStack_f8 = *(undefined8 *)(pcVar23 + 0x48);
      local_100 = *(undefined8 *)(pcVar23 + 0x40);
      uStack_d0 = (undefined1)((ulong)*(undefined8 *)(pcVar23 + 0x69) >> 0x38);
      uStack_d8 = (undefined1)*(undefined8 *)(pcVar23 + 0x68);
      local_d7 = (undefined7)((ulong)*(undefined8 *)(pcVar23 + 0x68) >> 8);
      local_140.bridgeObject = *(void **)(pcVar23 + 8);
      local_140.str = *(char **)pcVar23;
      uStack_128 = *(undefined8 *)(pcVar23 + 0x18);
      uStack_130 = *(undefined8 *)(pcVar23 + 0x10);
      uStack_118 = *(undefined8 *)(pcVar23 + 0x28);
      local_120 = *(undefined8 *)(pcVar23 + 0x20);
      uStack_108 = *(undefined8 *)(pcVar23 + 0x38);
      uStack_110 = *(undefined8 *)(pcVar23 + 0x30);
      iVar11 = (int)&local_1c0;
      FUN_1004dbae4();
      if (iVar11 < 2) {
        if (iVar11 != 0) {
          pSVar12 = &local_140;
          FUN_100004520();
          pcVar16 = pSVar12->str;
          pvVar27 = pSVar12->bridgeObject;
          HVar21.unknown = pSVar12[1].str;
          pvVar20 = pSVar12[1].bridgeObject;
          Swift::Hasher::_combine(1,HVar14);
          uStack_1e8 = uStack_168;
          local_1f0 = local_170;
          uStack_1d8 = uStack_158;
          uStack_1e0 = uStack_160;
          uStack_1cf = uStack_14f;
          local_1d7 = local_157;
          uStack_1d0 = uStack_150;
          uStack_238 = uStack_1b8;
          local_240 = local_1c0;
          uStack_228 = uStack_1a8;
          local_230 = uStack_1b0;
          uStack_218 = uStack_198;
          uStack_220 = local_1a0;
          uStack_208 = uStack_188;
          local_210 = uStack_190;
          uStack_1f8 = uStack_178;
          uStack_200 = local_180;
          puVar13 = &local_240;
          FUN_100004520();
          goto LAB_10055beb0;
        }
        pSVar12 = &local_140;
        FUN_100004520();
        HVar21.unknown = pSVar12->str;
        pvVar20 = pSVar12->bridgeObject;
        Swift::Hasher::_combine(0,HVar14);
        uStack_1e8 = uStack_168;
        local_1f0 = local_170;
        uStack_1d8 = uStack_158;
        uStack_1e0 = uStack_160;
        uStack_1cf = uStack_14f;
        local_1d7 = local_157;
        uStack_1d0 = uStack_150;
        uStack_238 = uStack_1b8;
        local_240 = local_1c0;
        uStack_228 = uStack_1a8;
        local_230 = uStack_1b0;
        uStack_218 = uStack_198;
        uStack_220 = local_1a0;
        uStack_208 = uStack_188;
        local_210 = uStack_190;
        uStack_1f8 = uStack_178;
        uStack_200 = local_180;
        puVar13 = &local_240;
        FUN_100004520();
        _swift_bridgeObjectRetain(puVar13[1]);
LAB_10055bee4:
        SVar37.bridgeObject = pvVar20;
        SVar37.str = HVar21.unknown;
        Swift::String::hash(param_1,SVar37);
      }
      else {
        if (iVar11 == 2) {
          pSVar12 = &local_140;
          FUN_100004520();
          pcVar16 = pSVar12->str;
          pvVar27 = pSVar12->bridgeObject;
          HVar21.unknown = pSVar12[1].str;
          pvVar20 = pSVar12[1].bridgeObject;
          Swift::Hasher::_combine(2,HVar14);
          uStack_1e8 = uStack_168;
          local_1f0 = local_170;
          uStack_1d8 = uStack_158;
          uStack_1e0 = uStack_160;
          uStack_1cf = uStack_14f;
          local_1d7 = local_157;
          uStack_1d0 = uStack_150;
          uStack_238 = uStack_1b8;
          local_240 = local_1c0;
          uStack_228 = uStack_1a8;
          local_230 = uStack_1b0;
          uStack_218 = uStack_198;
          uStack_220 = local_1a0;
          uStack_208 = uStack_188;
          local_210 = uStack_190;
          uStack_1f8 = uStack_178;
          uStack_200 = local_180;
          puVar13 = &local_240;
          FUN_100004520();
LAB_10055beb0:
          uVar24 = puVar13[3];
          _swift_bridgeObjectRetain(puVar13[1]);
          _swift_bridgeObjectRetain(uVar24);
          SVar36.bridgeObject = pvVar27;
          SVar36.str = pcVar16;
          Swift::String::hash(param_1,SVar36);
          goto LAB_10055bee4;
        }
        if (iVar11 == 3) {
          pSVar12 = &local_140;
          FUN_100004520();
          uStack_1e8 = uStack_168;
          local_1f0 = local_170;
          uStack_1d8 = uStack_158;
          uStack_1e0 = uStack_160;
          uStack_1cf = uStack_14f;
          local_1d7 = local_157;
          uStack_1d0 = uStack_150;
          uStack_238 = uStack_1b8;
          local_240 = local_1c0;
          uStack_228 = uStack_1a8;
          local_230 = uStack_1b0;
          uStack_218 = uStack_198;
          uStack_220 = local_1a0;
          uStack_208 = uStack_188;
          local_210 = uStack_190;
          uStack_1f8 = uStack_178;
          uStack_200 = local_180;
          puVar13 = &local_240;
          FUN_100004520(puVar13);
          HVar15.unknown = pSVar12->str;
          SVar36 = *pSVar12;
          pcVar16 = pSVar12[1].str;
          pvVar27 = pSVar12[1].bridgeObject;
          SVar37 = pSVar12[1];
          HVar17.unknown = pSVar12[2].str;
          pvVar20 = pSVar12[2].bridgeObject;
          SVar7 = pSVar12[2];
          HVar18.unknown = pSVar12[3].str;
          pvVar3 = pSVar12[3].bridgeObject;
          SVar8 = pSVar12[3];
          HVar21.unknown = pSVar12[4].str;
          Swift::Hasher::_combine(3,HVar14);
          FUN_1000f8cac(puVar13,auStack_2b8,&DAT_100fcc460,&DAT_100c51ed0);
          Swift::String::hash(param_1,SVar36);
          if (pvVar27 == (void *)0x0) {
            Swift::Hasher::_combine(0,HVar15);
            if (pvVar20 == (void *)0x0) goto LAB_10055c278;
LAB_10055c030:
            Swift::Hasher::_combine(1,HVar15);
            Swift::String::hash(param_1,SVar7);
            if (pvVar3 != (void *)0x0) goto LAB_10055c054;
LAB_10055c28c:
            HVar18.unknown = HVar17.unknown;
            Swift::Hasher::_combine(0,HVar18);
            if (HVar21.unknown == (char *)0x0) goto LAB_10055c29c;
LAB_10055c074:
            Swift::Hasher::_combine(1,HVar18);
            FUN_1004df778(param_1.unknown);
          }
          else {
            Swift::Hasher::_combine(1,HVar15);
            Swift::String::hash(param_1,SVar37);
            HVar15.unknown = pcVar16;
            if (pvVar20 != (void *)0x0) goto LAB_10055c030;
LAB_10055c278:
            HVar17.unknown = HVar15.unknown;
            Swift::Hasher::_combine(0,HVar17);
            if (pvVar3 == (void *)0x0) goto LAB_10055c28c;
LAB_10055c054:
            Swift::Hasher::_combine(1,HVar17);
            Swift::String::hash(param_1,SVar8);
            if (HVar21.unknown != (char *)0x0) goto LAB_10055c074;
LAB_10055c29c:
            HVar21.unknown = HVar18.unknown;
            Swift::Hasher::_combine(0,HVar21);
          }
          pcStack_b8 = pSVar12[5].str;
          local_c0 = pSVar12[4].bridgeObject;
          pcStack_a8 = pSVar12[6].str;
          pvStack_b0 = pSVar12[5].bridgeObject;
          local_a0 = pSVar12[6].bridgeObject;
          pcVar16 = pSVar12[7].str;
          FUN_10055fb80(param_1.unknown);
          if (pcVar16 == (char *)0x0) {
            Swift::Hasher::_combine(0,HVar21);
          }
          else {
            Swift::Hasher::_combine(1,HVar21);
            FUN_1004df778(param_1.unknown);
            HVar21.unknown = pcVar16;
          }
        }
        else {
          pSVar12 = &local_140;
          FUN_100004520();
          SVar36 = *pSVar12;
          HVar15.unknown = pSVar12[1].str;
          SVar37 = pSVar12[1];
          pcVar16 = pSVar12[2].str;
          pvVar27 = pSVar12[2].bridgeObject;
          SVar7 = pSVar12[2];
          pcVar19 = pSVar12[3].str;
          pvVar20 = pSVar12[3].bridgeObject;
          SVar8 = pSVar12[3];
          HVar21.unknown = pSVar12[4].str;
          pvVar3 = pSVar12[4].bridgeObject;
          SVar9 = pSVar12[4];
          pvVar33 = pSVar12[5].bridgeObject;
          pcVar32 = pSVar12[5].str;
          pvVar35 = pSVar12[6].bridgeObject;
          pcVar34 = pSVar12[6].str;
          pcVar22 = pSVar12[7].str;
          uStack_238 = uStack_1b8;
          local_240 = local_1c0;
          uStack_228 = uStack_1a8;
          local_230 = uStack_1b0;
          uStack_218 = uStack_198;
          uStack_220 = local_1a0;
          uStack_208 = uStack_188;
          local_210 = uStack_190;
          uStack_1f8 = uStack_178;
          uStack_200 = local_180;
          uStack_1e8 = uStack_168;
          local_1f0 = local_170;
          uStack_1d8 = uStack_158;
          uStack_1e0 = uStack_160;
          uStack_1cf = uStack_14f;
          local_1d7 = local_157;
          uStack_1d0 = uStack_150;
          puVar13 = &local_240;
          FUN_100004520();
          uVar30 = puVar13[1];
          uVar31 = puVar13[3];
          uVar25 = puVar13[5];
          uVar29 = puVar13[7];
          uVar24 = puVar13[9];
          uVar4 = puVar13[10];
          uVar1 = puVar13[0xb];
          uVar5 = puVar13[0xc];
          uVar2 = puVar13[0xd];
          uVar6 = puVar13[0xe];
          Swift::Hasher::_combine(4,HVar14);
          _swift_bridgeObjectRetain(uVar24);
          _swift_bridgeObjectRetain(uVar30);
          _swift_bridgeObjectRetain(uVar31);
          _swift_bridgeObjectRetain(uVar25);
          _swift_bridgeObjectRetain(uVar29);
          FUN_1004dbc6c(uVar4,uVar1,uVar5,uVar2,uVar6);
          Swift::String::hash(param_1,SVar36);
          Swift::String::hash(param_1,SVar37);
          if (pvVar27 == (void *)0x0) {
            Swift::Hasher::_combine(0,HVar15);
          }
          else {
            Swift::Hasher::_combine(1,HVar15);
            Swift::String::hash(param_1,SVar7);
            HVar15.unknown = pcVar16;
          }
          if (pvVar20 == (void *)0x0) {
            Swift::Hasher::_combine(0,HVar15);
            if (pvVar3 == (void *)0x0) goto LAB_10055c360;
LAB_10055c320:
            Swift::Hasher::_combine(1,HVar15);
            Swift::String::hash(param_1,SVar9);
          }
          else {
            Swift::Hasher::_combine(1,HVar15);
            Swift::String::hash(param_1,SVar8);
            HVar15.unknown = pcVar19;
            if (pvVar3 != (void *)0x0) goto LAB_10055c320;
LAB_10055c360:
            HVar21.unknown = HVar15.unknown;
            Swift::Hasher::_combine(0,HVar21);
          }
          local_98 = pcVar32;
          pvStack_90 = pvVar33;
          local_88 = pcVar34;
          pvStack_80 = pvVar35;
          local_78 = pcVar22;
          FUN_10055fb80(param_1.unknown);
        }
      }
      FUN_1004dbca0(&local_1c0);
      pcVar23 = pcVar23 + 0x80;
      _Var28 = _Var28 - 1;
      HVar14.unknown = HVar21.unknown;
    } while (_Var28 != 0);
  }
  puVar26 = unaff_x20[1].bridgeObject;
  if (puVar26 == (undefined *)0x0) {
    Swift::Hasher::_combine(0,HVar21);
  }
  else {
    Swift::Hasher::_combine(1,HVar21);
    FUN_1004df778(param_1.unknown);
    HVar21.unknown = puVar26;
  }
  bVar10 = *(byte *)&unaff_x20[2].str;
  if (bVar10 == 2) {
    bVar10 = 0;
  }
  else {
    Swift::Hasher::_combine(1,HVar21);
    bVar10 = bVar10 & 1;
  }
  Swift::Hasher::_combine(bVar10,HVar21);
  pvVar27 = unaff_x20[2].bridgeObject;
  if (pvVar27 == (void *)0x0) {
    Swift::Hasher::_combine(0,HVar21);
  }
  else {
    Swift::Hasher::_combine(1,HVar21);
    FUN_1004df778(param_1.unknown,pvVar27);
  }
  return;
}



/* Address: 0x10055c444 | FUN_10055c444 */

void FUN_10055c444(void)

{
  Hasher HVar1;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(0);
  HVar1.unknown = auStack_68;
  FUN_10055be0c();
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x10055c480 | FUN_10055c480 */

void FUN_10055c480(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  FUN_100561f24(&local_50);
  if (unaff_x21 == 0) {
    param_1[1] = uStack_48;
    *param_1 = local_50;
    param_1[3] = uStack_38;
    param_1[2] = uStack_40;
    param_1[5] = uStack_28;
    param_1[4] = local_30;
  }
  return;
}


