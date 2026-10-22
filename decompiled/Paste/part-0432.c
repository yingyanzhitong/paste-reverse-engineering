/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10054e504 | FUN_10054e504 */

undefined1  [16] FUN_10054e504(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x48;
  auVar1._0_8_ = FUN_100004520;
  return auVar1;
}



/* Address: 0x10054e514 | FUN_10054e514 */

void FUN_10054e514(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 *param_5,undefined8 param_6)

{
  undefined1 auStack_158 [80];
  undefined7 uStack_108;
  undefined1 local_101;
  undefined7 uStack_100;
  undefined1 uStack_f9;
  undefined7 uStack_f8;
  undefined1 local_f1;
  undefined7 uStack_f0;
  undefined1 uStack_e9;
  undefined7 uStack_e8;
  undefined1 local_e1;
  undefined7 uStack_e0;
  undefined1 uStack_d9;
  undefined7 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 local_c0;
  undefined7 local_bf;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined1 uStack_b0;
  undefined7 local_af;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  undefined1 uStack_a0;
  undefined7 local_9f;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  undefined8 local_6f;
  undefined8 uStack_67;
  undefined8 local_5f;
  undefined8 uStack_57;
  undefined8 local_4f;
  undefined7 uStack_47;
  undefined1 uStack_40;
  undefined7 uStack_3f;
  undefined8 uStack_38;
  
  uStack_f9 = (undefined1)param_5[1];
  uStack_f8 = (undefined7)((ulong)param_5[1] >> 8);
  local_101 = (undefined1)*param_5;
  uStack_100 = (undefined7)((ulong)*param_5 >> 8);
  uStack_e9 = (undefined1)param_5[3];
  uStack_e8 = (undefined7)((ulong)param_5[3] >> 8);
  local_f1 = (undefined1)param_5[2];
  uStack_f0 = (undefined7)((ulong)param_5[2] >> 8);
  uStack_d9 = (undefined1)param_5[5];
  uStack_d8 = (undefined7)((ulong)param_5[5] >> 8);
  local_e1 = (undefined1)param_5[4];
  uStack_e0 = (undefined7)((ulong)param_5[4] >> 8);
  uStack_67 = CONCAT17(uStack_f9,uStack_100);
  local_6f = CONCAT17(local_101,uStack_108);
  uStack_b7 = uStack_100;
  uStack_b0 = uStack_f9;
  local_bf = uStack_108;
  uStack_b8 = local_101;
  uStack_57 = CONCAT17(uStack_e9,uStack_f0);
  local_5f = CONCAT17(local_f1,uStack_f8);
  uStack_a7 = uStack_f0;
  uStack_a0 = uStack_e9;
  local_af = uStack_f8;
  uStack_a8 = local_f1;
  local_4f = CONCAT17(local_e1,uStack_e8);
  uStack_97 = uStack_e0;
  local_9f = uStack_e8;
  uStack_98 = local_e1;
  uStack_47 = uStack_e0;
  uStack_40 = uStack_d9;
  local_d0 = param_2;
  uStack_c8 = param_3;
  local_c0 = param_4;
  uStack_90 = uStack_d9;
  uStack_8f = uStack_d8;
  uStack_88 = param_6;
  local_80 = param_2;
  uStack_78 = param_3;
  local_70 = param_4;
  uStack_3f = uStack_d8;
  uStack_38 = param_6;
  FUN_10055177c(&local_d0,auStack_158);
  FUN_1005517b0(&local_80);
  param_1[5] = CONCAT71(uStack_a7,uStack_a8);
  param_1[4] = CONCAT71(local_af,uStack_b0);
  param_1[7] = CONCAT71(uStack_97,uStack_98);
  param_1[6] = CONCAT71(local_9f,uStack_a0);
  param_1[9] = uStack_88;
  param_1[8] = CONCAT71(uStack_8f,uStack_90);
  param_1[1] = uStack_c8;
  *param_1 = local_d0;
  param_1[3] = CONCAT71(uStack_b7,uStack_b8);
  param_1[2] = CONCAT71(local_bf,local_c0);
  return;
}



/* Address: 0x10054e5d4 | FUN_10054e5d4 */

undefined1  [16] FUN_10054e5d4(void)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  byte *unaff_x20;
  undefined1 auVar6 [16];
  
  bVar3 = *unaff_x20;
  puVar5 = (undefined1 *)0xef616d6568635364;
  uVar4 = 0x6574736575716572;
  if (bVar3 != 2) {
    puVar5 = &DAT_e500000000000000;
    uVar4 = 0x6174656d5f;
  }
  uVar1 = 0x6567617373656d;
  if (bVar3 != 0) {
    uVar1 = 0x65646f6d;
  }
  puVar2 = &DAT_e700000000000000;
  if (bVar3 != 0) {
    puVar2 = &DAT_e400000000000000;
  }
  if (bVar3 < 2) {
    puVar5 = puVar2;
    uVar4 = uVar1;
  }
  auVar6._8_8_ = puVar5;
  auVar6._0_8_ = uVar4;
  return auVar6;
}



/* Address: 0x10054e650 | FUN_10054e650 */

void FUN_10054e650(undefined1 *param_1,undefined1 param_2)

{
  FUN_10055189c();
  *param_1 = param_2;
  return;
}



/* Address: 0x10054e674 | FUN_10054e674 */

String FUN_10054e674(void)

{
  String SVar1;
  
  FUN_1005517dc();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x10054e69c | FUN_10054e69c */

String FUN_10054e69c(void)

{
  String SVar1;
  
  FUN_1005517dc();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x10054e6c4 | thunk_FUN_10055107c */

void thunk_FUN_10055107c(void)

{
  FUN_10055107c();
  return;
}



/* Address: 0x10054e6c8 | FUN_10054e6c8 */

void FUN_10054e6c8(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar6;
  undefined1 auStack_f0 [8];
  undefined1 local_e8 [55];
  undefined1 local_b1;
  ulong local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  puVar2 = &DAT_100fcf208;
  FUN_1000f7830(&DAT_100fcf208,&DAT_100c57050);
  lVar6 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_1005517dc();
  Swift::Encoder::_container();
  uVar3 = *unaff_x20;
  local_b0 = local_b0 & 0xffffffffffffff00;
  Swift::KeyedEncodingContainer::_encode(uVar3,unaff_x20[1],&local_b0,puVar2);
  if (unaff_x21 == 0) {
    local_b0 = CONCAT71(local_b0._1_7_,*(undefined1 *)(unaff_x20 + 2));
    local_e8[0] = 1;
    FUN_10055181c();
    Swift::KeyedEncodingContainer::_encodeIfPresent(&local_b0,local_e8,puVar2,&DAT_100ede670,uVar3);
    uStack_78 = unaff_x20[4];
    local_80 = unaff_x20[3];
    uStack_68 = unaff_x20[6];
    uStack_70 = unaff_x20[5];
    uStack_58 = unaff_x20[8];
    local_60 = unaff_x20[7];
    uStack_a8 = unaff_x20[4];
    local_b0 = unaff_x20[3];
    local_98 = unaff_x20[6];
    uStack_a0 = unaff_x20[5];
    uStack_88 = unaff_x20[8];
    local_90 = unaff_x20[7];
    local_b1 = 2;
    puVar4 = &local_80;
    FUN_100551714(puVar4,local_e8);
    FUN_10055185c();
    Swift::KeyedEncodingContainer::_encode(&local_b0,&local_b1,puVar2,&DAT_100ede538,puVar4);
    uVar5 = uStack_88;
    uVar1 = local_98;
    uVar3 = uStack_a8;
    _swift_bridgeObjectRelease(local_90);
    _swift_bridgeObjectRelease(uVar3);
    _swift_bridgeObjectRelease(uVar1);
    _swift_bridgeObjectRelease(uVar5);
    local_b0 = unaff_x20[9];
    local_e8[0] = 3;
    FUN_1004e02ac();
    Swift::KeyedEncodingContainer::_encodeIfPresent(&local_b0,local_e8,puVar2,&DAT_100edcda0,uVar5);
  }
  (**(code **)(lVar6 + 8))(auStack_f0 + -extraout_x8,puVar2);
  return;
}



/* Address: 0x10054e8cc | FUN_10054e8cc */

void FUN_10054e8cc(Hasher param_1)

{
  undefined1 *puVar1;
  char cVar2;
  uint uVar3;
  Hasher HVar4;
  String *unaff_x20;
  void *pvVar5;
  String SVar6;
  
  HVar4.unknown = unaff_x20->str;
  Swift::String::hash(param_1,*unaff_x20);
  cVar2 = *(char *)&unaff_x20[1].str;
  if (cVar2 == '\x02') {
    Swift::Hasher::_combine(0,HVar4);
  }
  else {
    Swift::Hasher::_combine(1,HVar4);
    uVar3 = 0x6c7275;
    if (cVar2 != '\x01') {
      uVar3 = 0x6d726f66;
    }
    HVar4.unknown = (undefined *)(ulong)uVar3;
    puVar1 = (undefined1 *)0xe300000000000000;
    if (cVar2 != '\x01') {
      puVar1 = &DAT_e400000000000000;
    }
    SVar6.bridgeObject = puVar1;
    SVar6.str = HVar4.unknown;
    Swift::String::hash(param_1,SVar6);
    _swift_bridgeObjectRelease(puVar1);
  }
  FUN_10054e0bc(param_1.unknown);
  pvVar5 = unaff_x20[4].bridgeObject;
  if (pvVar5 != (void *)0x0) {
    Swift::Hasher::_combine(1,HVar4);
    FUN_1004df778(param_1.unknown,pvVar5);
    return;
  }
  Swift::Hasher::_combine(0,HVar4);
  return;
}



/* Address: 0x10054e9a0 | FUN_10054e9a0 */

void FUN_10054e9a0(void)

{
  Hasher HVar1;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(0);
  HVar1.unknown = auStack_68;
  FUN_10054e8cc();
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x10054e9dc | FUN_10054e9dc */

void FUN_10054e9dc(undefined8 *param_1)

{
  long unaff_x21;
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
  
  FUN_100551a00(&local_70);
  if (unaff_x21 == 0) {
    param_1[5] = uStack_48;
    param_1[4] = local_50;
    param_1[7] = uStack_38;
    param_1[6] = uStack_40;
    param_1[9] = uStack_28;
    param_1[8] = local_30;
    param_1[1] = uStack_68;
    *param_1 = local_70;
    param_1[3] = uStack_58;
    param_1[2] = uStack_60;
  }
  return;
}



/* Address: 0x10054ea24 | thunk_FUN_10054e8cc */

void thunk_FUN_10054e8cc(void)

{
  FUN_10054e8cc();
  return;
}



/* Address: 0x10054ea28 | FUN_10054ea28 */

void FUN_10054ea28(__int64 param_1)

{
  Hasher HVar1;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(param_1);
  HVar1.unknown = auStack_68;
  FUN_10054e8cc();
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x10054ea60 | FUN_10054ea60 */

void FUN_10054ea60(void)

{
  FUN_10054e6c8();
  return;
}



/* Address: 0x10054ea74 | FUN_10054ea74 */

uint FUN_10054ea74(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_88 = param_1[5];
  local_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_68 = param_1[9];
  local_70 = param_1[8];
  uStack_a8 = param_1[1];
  local_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_38 = param_2[5];
  local_40 = param_2[4];
  uStack_28 = param_2[7];
  uStack_30 = param_2[6];
  uStack_18 = param_2[9];
  local_20 = param_2[8];
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  uStack_48 = param_2[3];
  local_50 = param_2[2];
  FUN_10055107c(&local_b0,&uStack_60);
  return uVar1 & 1;
}



/* Address: 0x10054eacc | FUN_10054eacc */

void FUN_10054eacc(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x38));
  *(undefined8 *)(unaff_x20 + 0x38) = param_1;
  return;
}



/* Address: 0x10054eaf4 | FUN_10054eaf4 */

void FUN_10054eaf4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 auStack_e0 [64];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 local_90;
  undefined7 uStack_8f;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  local_90 = 1;
  local_50 = 1;
  local_a0 = param_2;
  uStack_98 = param_3;
  local_88 = param_4;
  local_80 = param_5;
  uStack_78 = param_6;
  uStack_70 = param_7;
  local_68 = param_8;
  local_60 = param_2;
  uStack_58 = param_3;
  local_48 = param_4;
  uStack_40 = param_5;
  local_38 = param_6;
  uStack_30 = param_7;
  local_28 = param_8;
  FUN_100551ce0(&local_a0,auStack_e0);
  FUN_100551d14(&local_60);
  param_1[1] = uStack_98;
  *param_1 = local_a0;
  param_1[3] = local_88;
  param_1[2] = CONCAT71(uStack_8f,local_90);
  param_1[5] = uStack_78;
  param_1[4] = local_80;
  param_1[7] = local_68;
  param_1[6] = uStack_70;
  return;
}



/* Address: 0x10054eb68 | FUN_10054eb68 */

undefined1  [16] FUN_10054eb68(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  byte bVar4;
  undefined1 *puVar5;
  byte *unaff_x20;
  undefined1 auVar6 [16];
  
  bVar4 = *unaff_x20;
  puVar5 = (undefined1 *)0xed000064496e6f69;
  uVar2 = 0x7461746963696c65;
  if (bVar4 != 3) {
    puVar5 = &DAT_e500000000000000;
    uVar2 = 0x6174656d5f;
  }
  uVar1 = 0x6c7275;
  if (bVar4 != 2) {
    uVar1 = uVar2;
  }
  puVar3 = (undefined1 *)0xe300000000000000;
  if (bVar4 != 2) {
    puVar3 = puVar5;
  }
  uVar2 = 0x6567617373656d;
  if (bVar4 != 0) {
    uVar2 = 0x65646f6d;
  }
  puVar5 = &DAT_e700000000000000;
  if (bVar4 != 0) {
    puVar5 = &DAT_e400000000000000;
  }
  if (bVar4 < 2) {
    puVar3 = puVar5;
    uVar1 = uVar2;
  }
  auVar6._8_8_ = puVar3;
  auVar6._0_8_ = uVar1;
  return auVar6;
}



/* Address: 0x10054ebfc | FUN_10054ebfc */

void FUN_10054ebfc(undefined1 *param_1,undefined1 param_2)

{
  FUN_100551d80();
  *param_1 = param_2;
  return;
}



/* Address: 0x10054ec20 | FUN_10054ec20 */

String FUN_10054ec20(void)

{
  String SVar1;
  
  FUN_100551d40();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x10054ec48 | FUN_10054ec48 */

String FUN_10054ec48(void)

{
  String SVar1;
  
  FUN_100551d40();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x10054ec70 | thunk_FUN_10055117c */

void thunk_FUN_10055117c(void)

{
  FUN_10055117c();
  return;
}



/* Address: 0x10054ec74 | FUN_10054ec74 */

void FUN_10054ec74(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar3;
  undefined1 auStack_70 [15];
  undefined1 local_61;
  undefined8 local_60;
  undefined1 local_55;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar1 = &DAT_100fcf228;
  FUN_1000f7830(&DAT_100fcf228,&DAT_100c57058);
  lVar3 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_100551d40();
  Swift::Encoder::_container();
  uVar2 = *unaff_x20;
  local_51 = 0;
  Swift::KeyedEncodingContainer::_encode(uVar2,unaff_x20[1],&local_51,puVar1);
  if (unaff_x21 == 0) {
    local_52 = *(undefined1 *)(unaff_x20 + 2);
    local_53 = 1;
    FUN_10055181c();
    Swift::KeyedEncodingContainer::_encode(&local_52,&local_53,puVar1,&DAT_100ede670,uVar2);
    local_54 = 2;
    Swift::KeyedEncodingContainer::_encode(unaff_x20[3],unaff_x20[4],&local_54,puVar1);
    uVar2 = unaff_x20[5];
    local_55 = 3;
    Swift::KeyedEncodingContainer::_encode(uVar2,unaff_x20[6],&local_55,puVar1);
    local_60 = unaff_x20[7];
    local_61 = 4;
    FUN_1004e02ac();
    Swift::KeyedEncodingContainer::_encodeIfPresent(&local_60,&local_61,puVar1,&DAT_100edcda0,uVar2)
    ;
  }
  (**(code **)(lVar3 + 8))(auStack_70 + -extraout_x8,puVar1);
  return;
}



/* Address: 0x10054ee34 | FUN_10054ee34 */

void FUN_10054ee34(Hasher param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  bool bVar3;
  Hasher HVar4;
  void *pvVar5;
  String *unaff_x20;
  String SVar6;
  
  Swift::String::hash(param_1,*unaff_x20);
  bVar3 = *(char *)&unaff_x20[1].str != '\x01';
  uVar2 = 0x6c7275;
  if (bVar3) {
    uVar2 = 0x6d726f66;
  }
  puVar1 = (undefined1 *)0xe300000000000000;
  if (bVar3) {
    puVar1 = &DAT_e400000000000000;
  }
  SVar6.bridgeObject = puVar1;
  SVar6.str = (char *)(ulong)uVar2;
  Swift::String::hash(param_1,SVar6);
  _swift_bridgeObjectRelease(puVar1);
  Swift::String::hash(param_1,*(String *)&unaff_x20[1].bridgeObject);
  HVar4.unknown = unaff_x20[2].bridgeObject;
  Swift::String::hash(param_1,*(String *)&unaff_x20[2].bridgeObject);
  pvVar5 = unaff_x20[3].bridgeObject;
  if (pvVar5 != (void *)0x0) {
    Swift::Hasher::_combine(1,HVar4);
    FUN_1004df778(param_1.unknown,pvVar5);
    return;
  }
  Swift::Hasher::_combine(0,HVar4);
  return;
}



/* Address: 0x10054eeec | FUN_10054eeec */

void FUN_10054eeec(void)

{
  undefined1 *puVar1;
  uint uVar2;
  bool bVar3;
  Hasher HVar4;
  Hasher HVar5;
  void *pvVar6;
  String *unaff_x20;
  String SVar7;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(0);
  Swift::String::hash((Hasher)auStack_68,*unaff_x20);
  bVar3 = *(char *)&unaff_x20[1].str != '\x01';
  uVar2 = 0x6c7275;
  if (bVar3) {
    uVar2 = 0x6d726f66;
  }
  puVar1 = (undefined1 *)0xe300000000000000;
  if (bVar3) {
    puVar1 = &DAT_e400000000000000;
  }
  SVar7.bridgeObject = puVar1;
  SVar7.str = (char *)(ulong)uVar2;
  Swift::String::hash((Hasher)auStack_68,SVar7);
  _swift_bridgeObjectRelease(puVar1);
  Swift::String::hash((Hasher)auStack_68,*(String *)&unaff_x20[1].bridgeObject);
  HVar5.unknown = unaff_x20[2].bridgeObject;
  Swift::String::hash((Hasher)auStack_68,*(String *)&unaff_x20[2].bridgeObject);
  pvVar6 = unaff_x20[3].bridgeObject;
  if (pvVar6 == (void *)0x0) {
    HVar4.unknown = (undefined *)0x0;
    Swift::Hasher::_combine(0,HVar5);
  }
  else {
    Swift::Hasher::_combine(1,HVar5);
    HVar4.unknown = auStack_68;
    FUN_1004df778(HVar4.unknown,pvVar6);
  }
  Swift::Hasher::_finalize(HVar4);
  return;
}



/* Address: 0x10054efb0 | FUN_10054efb0 */

void FUN_10054efb0(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_100551f30(&local_60);
  if (unaff_x21 == 0) {
    param_1[1] = uStack_58;
    *param_1 = local_60;
    param_1[3] = uStack_48;
    param_1[2] = uStack_50;
    param_1[5] = uStack_38;
    param_1[4] = local_40;
    param_1[7] = uStack_28;
    param_1[6] = uStack_30;
  }
  return;
}



/* Address: 0x10054eff0 | thunk_FUN_10054eeec */

void thunk_FUN_10054eeec(void)

{
  FUN_10054eeec();
  return;
}



/* Address: 0x10054eff4 | FUN_10054eff4 */

void FUN_10054eff4(Hasher param_1)

{
  undefined1 *puVar1;
  char cVar2;
  uint uVar3;
  String SVar4;
  String SVar5;
  bool bVar6;
  Hasher HVar7;
  void *pvVar8;
  String *unaff_x20;
  String SVar9;
  
  cVar2 = *(char *)&unaff_x20[1].str;
  SVar4 = *(String *)&unaff_x20[1].bridgeObject;
  HVar7.unknown = unaff_x20[2].bridgeObject;
  SVar5 = *(String *)&unaff_x20[2].bridgeObject;
  pvVar8 = unaff_x20[3].bridgeObject;
  Swift::String::hash(param_1,*unaff_x20);
  bVar6 = cVar2 != '\x01';
  uVar3 = 0x6c7275;
  if (bVar6) {
    uVar3 = 0x6d726f66;
  }
  puVar1 = (undefined1 *)0xe300000000000000;
  if (bVar6) {
    puVar1 = &DAT_e400000000000000;
  }
  SVar9.bridgeObject = puVar1;
  SVar9.str = (char *)(ulong)uVar3;
  Swift::String::hash(param_1,SVar9);
  _swift_bridgeObjectRelease(puVar1);
  Swift::String::hash(param_1,SVar4);
  Swift::String::hash(param_1,SVar5);
  if (pvVar8 != (void *)0x0) {
    Swift::Hasher::_combine(1,HVar7);
    FUN_1004df778(param_1.unknown,pvVar8);
    return;
  }
  Swift::Hasher::_combine(0,HVar7);
  return;
}



/* Address: 0x10054f0d4 | FUN_10054f0d4 */

void FUN_10054f0d4(__int64 param_1)

{
  undefined1 *puVar1;
  char cVar2;
  uint uVar3;
  String SVar4;
  String SVar5;
  bool bVar6;
  Hasher HVar7;
  Hasher HVar8;
  void *pvVar9;
  String *unaff_x20;
  String SVar10;
  undefined1 auStack_a8 [72];
  
  SVar10 = *unaff_x20;
  cVar2 = *(char *)&unaff_x20[1].str;
  SVar4 = *(String *)&unaff_x20[1].bridgeObject;
  HVar8.unknown = unaff_x20[2].bridgeObject;
  SVar5 = *(String *)&unaff_x20[2].bridgeObject;
  pvVar9 = unaff_x20[3].bridgeObject;
  Swift::Hasher::init(param_1);
  Swift::String::hash((Hasher)auStack_a8,SVar10);
  bVar6 = cVar2 != '\x01';
  uVar3 = 0x6c7275;
  if (bVar6) {
    uVar3 = 0x6d726f66;
  }
  puVar1 = (undefined1 *)0xe300000000000000;
  if (bVar6) {
    puVar1 = &DAT_e400000000000000;
  }
  SVar10.bridgeObject = puVar1;
  SVar10.str = (char *)(ulong)uVar3;
  Swift::String::hash((Hasher)auStack_a8,SVar10);
  _swift_bridgeObjectRelease(puVar1);
  Swift::String::hash((Hasher)auStack_a8,SVar4);
  Swift::String::hash((Hasher)auStack_a8,SVar5);
  if (pvVar9 == (void *)0x0) {
    HVar7.unknown = (undefined *)0x0;
    Swift::Hasher::_combine(0,HVar8);
  }
  else {
    Swift::Hasher::_combine(1,HVar8);
    HVar7.unknown = auStack_a8;
    FUN_1004df778(HVar7.unknown,pvVar9);
  }
  Swift::Hasher::_finalize(HVar7);
  return;
}



/* Address: 0x10054f1c8 | FUN_10054f1c8 */

void FUN_10054f1c8(void)

{
  FUN_10054ec74();
  return;
}



/* Address: 0x10054f1dc | FUN_10054f1dc */

uint FUN_10054f1dc(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
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
  uStack_88 = param_1[1];
  local_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  local_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_48 = param_2[1];
  local_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  local_30 = param_2[4];
  uStack_18 = param_2[7];
  uStack_20 = param_2[6];
  FUN_10055117c(&local_90,&local_50);
  return uVar1 & 1;
}



/* Address: 0x10054f224 | FUN_10054f224 */

uint FUN_10054f224(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 local_b0;
  undefined8 uStack_a8;
  ulong local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulong local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_60 = *param_1;
  uStack_58 = param_1[1];
  local_50 = param_1[2];
  uStack_48 = param_1[3];
  local_40 = param_1[4];
  uStack_38 = param_1[5];
  local_30 = param_1[6];
  uStack_28 = param_1[7];
  if ((long)local_50 < 0) {
    local_50 = local_50 & 0x7fffffffffffffff;
    if ((long)param_2[2] < 0) {
      local_78 = param_2[7];
      local_a0 = param_2[2] & 0x7fffffffffffffff;
      uStack_a8 = param_2[1];
      local_b0 = *param_2;
      uStack_90 = param_2[4];
      local_98 = param_2[3];
      uStack_80 = param_2[6];
      local_88 = param_2[5];
      puVar2 = &local_60;
      FUN_10055117c(puVar2,&local_b0);
      uVar1 = (uint)puVar2;
      goto LAB_10054f2f8;
    }
  }
  else {
    uStack_18 = param_1[9];
    local_20 = param_1[8];
    local_a0 = param_2[2];
    if (-1 < (long)local_a0) {
      local_68 = param_2[9];
      uStack_a8 = param_2[1];
      local_b0 = *param_2;
      uStack_90 = param_2[4];
      local_98 = param_2[3];
      uStack_80 = param_2[6];
      local_88 = param_2[5];
      uStack_70 = param_2[8];
      local_78 = param_2[7];
      puVar2 = &local_60;
      FUN_10055107c(puVar2,&local_b0);
      uVar1 = (uint)puVar2;
      goto LAB_10054f2f8;
    }
  }
  uVar1 = 0;
LAB_10054f2f8:
  return uVar1 & 1;
}



/* Address: 0x10054f308 | FUN_10054f308 */

void FUN_10054f308(Hasher param_1,Hasher param_2)

{
  undefined1 *puVar1;
  char *pcVar2;
  void *pvVar3;
  uint uVar4;
  String SVar5;
  String SVar6;
  bool bVar7;
  Hasher HVar8;
  String *unaff_x20;
  String SVar9;
  
  SVar9 = *unaff_x20;
  pcVar2 = unaff_x20[1].str;
  SVar5 = *(String *)&unaff_x20[1].bridgeObject;
  HVar8.unknown = unaff_x20[2].bridgeObject;
  SVar6 = *(String *)&unaff_x20[2].bridgeObject;
  pvVar3 = unaff_x20[3].bridgeObject;
  if ((long)pcVar2 < 0) {
    Swift::Hasher::_combine(1,param_2);
    Swift::String::hash(param_1,SVar9);
    bVar7 = ((ulong)pcVar2 & 0xff) != 1;
    uVar4 = 0x6c7275;
    if (bVar7) {
      uVar4 = 0x6d726f66;
    }
    puVar1 = (undefined1 *)0xe300000000000000;
    if (bVar7) {
      puVar1 = &DAT_e400000000000000;
    }
    SVar9.bridgeObject = puVar1;
    SVar9.str = (char *)(ulong)uVar4;
    Swift::String::hash(param_1,SVar9);
    _swift_bridgeObjectRelease(puVar1);
    Swift::String::hash(param_1,SVar5);
    Swift::String::hash(param_1,SVar6);
    if (pvVar3 != (void *)0x0) {
      Swift::Hasher::_combine(1,HVar8);
      FUN_1004df778(param_1.unknown,pvVar3);
      return;
    }
    Swift::Hasher::_combine(0,HVar8);
  }
  else {
    Swift::Hasher::_combine(0,param_2);
    FUN_10054e8cc(param_1.unknown);
  }
  return;
}



/* Address: 0x10054f450 | FUN_10054f450 */

void FUN_10054f450(undefined8 param_1,Hasher param_2)

{
  undefined1 *puVar1;
  char *pcVar2;
  void *pvVar3;
  uint uVar4;
  String SVar5;
  String SVar6;
  bool bVar7;
  Hasher HVar8;
  Hasher HVar9;
  String *unaff_x20;
  String SVar10;
  undefined1 auStack_f8 [72];
  char *local_b0;
  void *pvStack_a8;
  char *local_a0;
  void *pvStack_98;
  char *local_90;
  undefined *puStack_88;
  char *local_80;
  void *pvStack_78;
  char *local_70;
  void *pvStack_68;
  
  Swift::Hasher::init(0);
  SVar10 = *unaff_x20;
  pcVar2 = unaff_x20[1].str;
  SVar5 = *(String *)&unaff_x20[1].bridgeObject;
  HVar9.unknown = unaff_x20[2].bridgeObject;
  SVar6 = *(String *)&unaff_x20[2].bridgeObject;
  pvVar3 = unaff_x20[3].bridgeObject;
  if ((long)pcVar2 < 0) {
    Swift::Hasher::_combine(1,param_2);
    Swift::String::hash((Hasher)auStack_f8,SVar10);
    bVar7 = ((ulong)pcVar2 & 0xff) != 1;
    uVar4 = 0x6c7275;
    if (bVar7) {
      uVar4 = 0x6d726f66;
    }
    puVar1 = (undefined1 *)0xe300000000000000;
    if (bVar7) {
      puVar1 = &DAT_e400000000000000;
    }
    SVar10.bridgeObject = puVar1;
    SVar10.str = (char *)(ulong)uVar4;
    Swift::String::hash((Hasher)auStack_f8,SVar10);
    _swift_bridgeObjectRelease(puVar1);
    Swift::String::hash((Hasher)auStack_f8,SVar5);
    Swift::String::hash((Hasher)auStack_f8,SVar6);
    if (pvVar3 == (void *)0x0) {
      HVar8.unknown = (undefined *)0x0;
      Swift::Hasher::_combine(0,HVar9);
    }
    else {
      Swift::Hasher::_combine(1,HVar9);
      HVar8.unknown = auStack_f8;
      FUN_1004df778(HVar8.unknown,pvVar3);
    }
  }
  else {
    pvStack_68 = unaff_x20[4].bridgeObject;
    local_70 = unaff_x20[4].str;
    local_b0 = unaff_x20->str;
    pvStack_a8 = unaff_x20->bridgeObject;
    local_a0 = pcVar2;
    pvStack_98 = unaff_x20[1].bridgeObject;
    local_90 = unaff_x20[2].str;
    puStack_88 = HVar9.unknown;
    local_80 = unaff_x20[3].str;
    pvStack_78 = pvVar3;
    Swift::Hasher::_combine(0,param_2);
    HVar8.unknown = auStack_f8;
    FUN_10054e8cc();
  }
  Swift::Hasher::_finalize(HVar8);
  return;
}



/* Address: 0x10054f58c | thunk_FUN_10054f450 */

void thunk_FUN_10054f450(undefined8 param_1,Hasher param_2)

{
  undefined1 *puVar1;
  char *pcVar2;
  void *pvVar3;
  uint uVar4;
  String SVar5;
  String SVar6;
  bool bVar7;
  Hasher HVar8;
  Hasher HVar9;
  String *unaff_x20;
  String SVar10;
  undefined1 auStack_f8 [72];
  char *pcStack_b0;
  void *pvStack_a8;
  char *pcStack_a0;
  void *pvStack_98;
  char *pcStack_90;
  undefined *puStack_88;
  char *pcStack_80;
  void *pvStack_78;
  char *pcStack_70;
  void *pvStack_68;
  
  Swift::Hasher::init(0);
  SVar10 = *unaff_x20;
  pcVar2 = unaff_x20[1].str;
  SVar5 = *(String *)&unaff_x20[1].bridgeObject;
  HVar9.unknown = unaff_x20[2].bridgeObject;
  SVar6 = *(String *)&unaff_x20[2].bridgeObject;
  pvVar3 = unaff_x20[3].bridgeObject;
  if ((long)pcVar2 < 0) {
    Swift::Hasher::_combine(1,param_2);
    Swift::String::hash((Hasher)auStack_f8,SVar10);
    bVar7 = ((ulong)pcVar2 & 0xff) != 1;
    uVar4 = 0x6c7275;
    if (bVar7) {
      uVar4 = 0x6d726f66;
    }
    puVar1 = (undefined1 *)0xe300000000000000;
    if (bVar7) {
      puVar1 = &DAT_e400000000000000;
    }
    SVar10.bridgeObject = puVar1;
    SVar10.str = (char *)(ulong)uVar4;
    Swift::String::hash((Hasher)auStack_f8,SVar10);
    _swift_bridgeObjectRelease(puVar1);
    Swift::String::hash((Hasher)auStack_f8,SVar5);
    Swift::String::hash((Hasher)auStack_f8,SVar6);
    if (pvVar3 == (void *)0x0) {
      HVar8.unknown = (undefined *)0x0;
      Swift::Hasher::_combine(0,HVar9);
    }
    else {
      Swift::Hasher::_combine(1,HVar9);
      HVar8.unknown = auStack_f8;
      FUN_1004df778(HVar8.unknown,pvVar3);
    }
  }
  else {
    pvStack_68 = unaff_x20[4].bridgeObject;
    pcStack_70 = unaff_x20[4].str;
    pcStack_b0 = unaff_x20->str;
    pvStack_a8 = unaff_x20->bridgeObject;
    pcStack_a0 = pcVar2;
    pvStack_98 = unaff_x20[1].bridgeObject;
    pcStack_90 = unaff_x20[2].str;
    puStack_88 = HVar9.unknown;
    pcStack_80 = unaff_x20[3].str;
    pvStack_78 = pvVar3;
    Swift::Hasher::_combine(0,param_2);
    HVar8.unknown = auStack_f8;
    FUN_10054e8cc();
  }
  Swift::Hasher::_finalize(HVar8);
  return;
}



/* Address: 0x10054f590 | FUN_10054f590 */

void FUN_10054f590(__int64 param_1,Hasher param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  void *pvVar6;
  void *pvVar7;
  void *pvVar8;
  void *pvVar9;
  uint uVar10;
  String SVar11;
  String SVar12;
  bool bVar13;
  undefined1 *puVar14;
  Hasher HVar15;
  Hasher HVar16;
  String *unaff_x20;
  String SVar17;
  undefined1 auStack_100 [72];
  char *local_b8;
  void *pvStack_b0;
  char *local_a8;
  void *pvStack_a0;
  char *local_98;
  undefined *puStack_90;
  char *local_88;
  void *pvStack_80;
  char *local_78;
  void *pvStack_70;
  
  puVar14 = auStack_100;
  HVar15.unknown = auStack_100;
  pcVar1 = unaff_x20->str;
  pvVar6 = unaff_x20->bridgeObject;
  SVar17 = *unaff_x20;
  pcVar2 = unaff_x20[1].str;
  pvVar7 = unaff_x20[1].bridgeObject;
  pcVar3 = unaff_x20[2].str;
  SVar11 = *(String *)&unaff_x20[1].bridgeObject;
  HVar16.unknown = unaff_x20[2].bridgeObject;
  pcVar4 = unaff_x20[3].str;
  SVar12 = *(String *)&unaff_x20[2].bridgeObject;
  pvVar8 = unaff_x20[3].bridgeObject;
  pcVar5 = unaff_x20[4].str;
  pvVar9 = unaff_x20[4].bridgeObject;
  Swift::Hasher::init(param_1);
  if ((long)pcVar2 < 0) {
    Swift::Hasher::_combine(1,param_2);
    Swift::String::hash((Hasher)auStack_100,SVar17);
    bVar13 = ((ulong)pcVar2 & 0xff) != 1;
    uVar10 = 0x6c7275;
    if (bVar13) {
      uVar10 = 0x6d726f66;
    }
    puVar14 = (undefined1 *)0xe300000000000000;
    if (bVar13) {
      puVar14 = &DAT_e400000000000000;
    }
    SVar17.bridgeObject = puVar14;
    SVar17.str = (char *)(ulong)uVar10;
    Swift::String::hash((Hasher)auStack_100,SVar17);
    _swift_bridgeObjectRelease(puVar14);
    Swift::String::hash((Hasher)auStack_100,SVar11);
    Swift::String::hash((Hasher)auStack_100,SVar12);
    if (pvVar8 == (void *)0x0) {
      HVar15.unknown = (undefined *)0x0;
      Swift::Hasher::_combine(0,HVar16);
    }
    else {
      Swift::Hasher::_combine(1,HVar16);
      FUN_1004df778(auStack_100,pvVar8);
    }
  }
  else {
    local_b8 = pcVar1;
    pvStack_b0 = pvVar6;
    local_a8 = pcVar2;
    pvStack_a0 = pvVar7;
    local_98 = pcVar3;
    puStack_90 = HVar16.unknown;
    local_88 = pcVar4;
    pvStack_80 = pvVar8;
    local_78 = pcVar5;
    pvStack_70 = pvVar9;
    Swift::Hasher::_combine(0,param_2);
    FUN_10054e8cc();
    HVar15.unknown = puVar14;
  }
  Swift::Hasher::_finalize(HVar15);
  return;
}



/* Address: 0x10054f6c8 | FUN_10054f6c8 */

uint FUN_10054f6c8(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 local_b0;
  undefined8 uStack_a8;
  ulong local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulong local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  uVar1 = 0;
  local_b0 = *param_1;
  uStack_a8 = param_1[1];
  local_a0 = param_1[2];
  uStack_98 = param_1[3];
  local_90 = param_1[4];
  uStack_88 = param_1[5];
  local_80 = param_1[6];
  uStack_78 = param_1[7];
  local_60 = *param_2;
  uStack_58 = param_2[1];
  local_50 = param_2[2];
  uStack_48 = param_2[3];
  local_40 = param_2[4];
  uStack_38 = param_2[5];
  if ((long)local_a0 < 0) {
    uStack_28 = param_2[7];
    local_30 = param_2[6];
    local_a0 = local_a0 & 0x7fffffffffffffff;
    if ((long)local_50 < 0) {
      local_50 = local_50 & 0x7fffffffffffffff;
      uVar1 = 0;
      FUN_10055117c(&local_b0,&local_60);
      goto LAB_10054f788;
    }
  }
  else {
    uStack_20 = param_2[8];
    uStack_28 = param_2[7];
    local_30 = param_2[6];
    local_18 = param_2[9];
    uStack_68 = param_1[9];
    local_70 = param_1[8];
    if (-1 < (long)local_50) {
      FUN_10055107c(&local_b0,&local_60);
      goto LAB_10054f788;
    }
  }
  uVar1 = 0;
LAB_10054f788:
  return uVar1 & 1;
}



/* Address: 0x10054f798 | FUN_10054f798 */

void FUN_10054f798(undefined8 param_1,undefined8 param_2)

{
  FUN_1004cbd4c(param_1,param_2,&DAT_100fcf708);
  return;
}



/* Address: 0x10054f7b4 | FUN_10054f7b4 */

undefined1  [16] FUN_10054f7b4(char param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_1 != '\0') {
    uVar1 = 0x656e696c636564;
    if (param_1 != '\x01') {
      uVar1 = 0x6c65636e6163;
    }
    puVar2 = &DAT_e700000000000000;
    if (param_1 != '\x01') {
      puVar2 = &DAT_e600000000000000;
    }
    auVar3._8_8_ = puVar2;
    auVar3._0_8_ = uVar1;
    return auVar3;
  }
  auVar4._8_8_ = &DAT_e600000000000000;
  auVar4._0_8_ = 0x747065636361;
  return auVar4;
}



/* Address: 0x10054f804 | FUN_10054f804 */

void FUN_10054f804(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1004cbd4c(uVar1,param_2[1],&DAT_100fcf708);
  *param_1 = (char)uVar1;
  return;
}



/* Address: 0x10054f838 | FUN_10054f838 */

void FUN_10054f838(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  char cVar5;
  char *unaff_x20;
  
  cVar5 = *unaff_x20;
  uVar1 = 0x656e696c636564;
  if (cVar5 != '\x01') {
    uVar1 = 0x6c65636e6163;
  }
  puVar2 = &DAT_e700000000000000;
  if (cVar5 != '\x01') {
    puVar2 = &DAT_e600000000000000;
  }
  uVar3 = 0x747065636361;
  if (cVar5 != '\0') {
    uVar3 = uVar1;
  }
  puVar4 = &DAT_e600000000000000;
  if (cVar5 != '\0') {
    puVar4 = puVar2;
  }
  *param_1 = uVar3;
  param_1[1] = puVar4;
  return;
}



/* Address: 0x10054f890 | FUN_10054f890 */

void FUN_10054f890(void)

{
  char *pcVar1;
  undefined1 *puVar2;
  char *pcVar3;
  char cVar4;
  Hasher HVar5;
  char *unaff_x20;
  String SVar6;
  undefined1 auStack_68 [72];
  
  cVar4 = *unaff_x20;
  Swift::Hasher::init(0);
  pcVar1 = (char *)0x656e696c636564;
  if (cVar4 != '\x01') {
    pcVar1 = (char *)0x6c65636e6163;
  }
  puVar2 = &DAT_e700000000000000;
  if (cVar4 != '\x01') {
    puVar2 = &DAT_e600000000000000;
  }
  pcVar3 = (char *)0x747065636361;
  if (cVar4 != '\0') {
    pcVar3 = pcVar1;
  }
  HVar5.unknown = &DAT_e600000000000000;
  if (cVar4 != '\0') {
    HVar5.unknown = puVar2;
  }
  SVar6.bridgeObject = HVar5.unknown;
  SVar6.str = pcVar3;
  Swift::String::hash((Hasher)auStack_68,SVar6);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar5);
  return;
}



/* Address: 0x10054f928 | FUN_10054f928 */

void FUN_10054f928(Hasher param_1)

{
  char *pcVar1;
  undefined1 *puVar2;
  char *pcVar3;
  undefined1 *puVar4;
  char cVar5;
  char *unaff_x20;
  String SVar6;
  
  cVar5 = *unaff_x20;
  pcVar1 = (char *)0x656e696c636564;
  if (cVar5 != '\x01') {
    pcVar1 = (char *)0x6c65636e6163;
  }
  puVar2 = &DAT_e700000000000000;
  if (cVar5 != '\x01') {
    puVar2 = &DAT_e600000000000000;
  }
  pcVar3 = (char *)0x747065636361;
  if (cVar5 != '\0') {
    pcVar3 = pcVar1;
  }
  puVar4 = &DAT_e600000000000000;
  if (cVar5 != '\0') {
    puVar4 = puVar2;
  }
  SVar6.bridgeObject = puVar4;
  SVar6.str = pcVar3;
  Swift::String::hash(param_1,SVar6);
  _swift_bridgeObjectRelease(puVar4);
  return;
}



/* Address: 0x10054f99c | FUN_10054f99c */

void FUN_10054f99c(__int64 param_1)

{
  char *pcVar1;
  undefined1 *puVar2;
  char *pcVar3;
  char cVar4;
  Hasher HVar5;
  char *unaff_x20;
  String SVar6;
  undefined1 auStack_68 [72];
  
  cVar4 = *unaff_x20;
  Swift::Hasher::init(param_1);
  pcVar1 = (char *)0x656e696c636564;
  if (cVar4 != '\x01') {
    pcVar1 = (char *)0x6c65636e6163;
  }
  puVar2 = &DAT_e700000000000000;
  if (cVar4 != '\x01') {
    puVar2 = &DAT_e600000000000000;
  }
  pcVar3 = (char *)0x747065636361;
  if (cVar4 != '\0') {
    pcVar3 = pcVar1;
  }
  HVar5.unknown = &DAT_e600000000000000;
  if (cVar4 != '\0') {
    HVar5.unknown = puVar2;
  }
  SVar6.bridgeObject = HVar5.unknown;
  SVar6.str = pcVar3;
  Swift::String::hash((Hasher)auStack_68,SVar6);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar5);
  return;
}



/* Address: 0x10054fa30 | FUN_10054fa30 */

void FUN_10054fa30(void)

{
  FUN_100554168();
  (extension_Swift)::Swift::RawRepresentable::_init();
  return;
}



/* Address: 0x10054fa8c | FUN_10054fa8c */

void FUN_10054fa8c(void)

{
  FUN_100554168();
  (extension_Swift)::Swift::RawRepresentable::_encode();
  return;
}



/* Address: 0x10054fad8 | FUN_10054fad8 */

void FUN_10054fad8(void)

{
  char *pcVar1;
  undefined1 *puVar2;
  char *pcVar3;
  char cVar4;
  Hasher HVar5;
  char *unaff_x20;
  String SVar6;
  undefined1 auStack_68 [72];
  
  cVar4 = *unaff_x20;
  Swift::Hasher::init(0);
  pcVar1 = (char *)0x746e65746e6f63;
  if (cVar4 != '\x01') {
    pcVar1 = (char *)0x6174656d5f;
  }
  puVar2 = &DAT_e700000000000000;
  if (cVar4 != '\x01') {
    puVar2 = &DAT_e500000000000000;
  }
  pcVar3 = (char *)0x6e6f69746361;
  if (cVar4 != '\0') {
    pcVar3 = pcVar1;
  }
  HVar5.unknown = &DAT_e600000000000000;
  if (cVar4 != '\0') {
    HVar5.unknown = puVar2;
  }
  SVar6.bridgeObject = HVar5.unknown;
  SVar6.str = pcVar3;
  Swift::String::hash((Hasher)auStack_68,SVar6);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar5);
  return;
}



/* Address: 0x10054fb70 | FUN_10054fb70 */

void FUN_10054fb70(Hasher param_1)

{
  char *pcVar1;
  undefined1 *puVar2;
  char *pcVar3;
  undefined1 *puVar4;
  char cVar5;
  char *unaff_x20;
  String SVar6;
  
  cVar5 = *unaff_x20;
  pcVar1 = (char *)0x746e65746e6f63;
  if (cVar5 != '\x01') {
    pcVar1 = (char *)0x6174656d5f;
  }
  puVar2 = &DAT_e700000000000000;
  if (cVar5 != '\x01') {
    puVar2 = &DAT_e500000000000000;
  }
  pcVar3 = (char *)0x6e6f69746361;
  if (cVar5 != '\0') {
    pcVar3 = pcVar1;
  }
  puVar4 = &DAT_e600000000000000;
  if (cVar5 != '\0') {
    puVar4 = puVar2;
  }
  SVar6.bridgeObject = puVar4;
  SVar6.str = pcVar3;
  Swift::String::hash(param_1,SVar6);
  _swift_bridgeObjectRelease(puVar4);
  return;
}



/* Address: 0x10054fbe4 | FUN_10054fbe4 */

void FUN_10054fbe4(__int64 param_1)

{
  char *pcVar1;
  undefined1 *puVar2;
  char *pcVar3;
  char cVar4;
  Hasher HVar5;
  char *unaff_x20;
  String SVar6;
  undefined1 auStack_68 [72];
  
  cVar4 = *unaff_x20;
  Swift::Hasher::init(param_1);
  pcVar1 = (char *)0x746e65746e6f63;
  if (cVar4 != '\x01') {
    pcVar1 = (char *)0x6174656d5f;
  }
  puVar2 = &DAT_e700000000000000;
  if (cVar4 != '\x01') {
    puVar2 = &DAT_e500000000000000;
  }
  pcVar3 = (char *)0x6e6f69746361;
  if (cVar4 != '\0') {
    pcVar3 = pcVar1;
  }
  HVar5.unknown = &DAT_e600000000000000;
  if (cVar4 != '\0') {
    HVar5.unknown = puVar2;
  }
  SVar6.bridgeObject = HVar5.unknown;
  SVar6.str = pcVar3;
  Swift::String::hash((Hasher)auStack_68,SVar6);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar5);
  return;
}



/* Address: 0x10054fc78 | FUN_10054fc78 */

void FUN_10054fc78(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1004cbd4c(uVar1,param_2[1],&DAT_100fcf528);
  *param_1 = (char)uVar1;
  return;
}



/* Address: 0x10054fcac | FUN_10054fcac */

void FUN_10054fcac(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  char cVar5;
  char *unaff_x20;
  
  cVar5 = *unaff_x20;
  uVar1 = 0x746e65746e6f63;
  if (cVar5 != '\x01') {
    uVar1 = 0x6174656d5f;
  }
  puVar2 = &DAT_e700000000000000;
  if (cVar5 != '\x01') {
    puVar2 = &DAT_e500000000000000;
  }
  uVar3 = 0x6e6f69746361;
  if (cVar5 != '\0') {
    uVar3 = uVar1;
  }
  puVar4 = &DAT_e600000000000000;
  if (cVar5 != '\0') {
    puVar4 = puVar2;
  }
  *param_1 = uVar3;
  param_1[1] = puVar4;
  return;
}



/* Address: 0x10054fd04 | FUN_10054fd04 */

undefined1  [16] FUN_10054fd04(void)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  char cVar5;
  char *unaff_x20;
  undefined1 auVar6 [16];
  
  cVar5 = *unaff_x20;
  uVar1 = 0x746e65746e6f63;
  if (cVar5 != '\x01') {
    uVar1 = 0x6174656d5f;
  }
  puVar2 = &DAT_e700000000000000;
  if (cVar5 != '\x01') {
    puVar2 = &DAT_e500000000000000;
  }
  uVar3 = 0x6e6f69746361;
  if (cVar5 != '\0') {
    uVar3 = uVar1;
  }
  puVar4 = &DAT_e600000000000000;
  if (cVar5 != '\0') {
    puVar4 = puVar2;
  }
  auVar6._8_8_ = puVar4;
  auVar6._0_8_ = uVar3;
  return auVar6;
}



/* Address: 0x10054fd58 | FUN_10054fd58 */

void FUN_10054fd58(undefined1 *param_1,undefined4 param_2,undefined8 param_3)

{
  FUN_1004cbd4c(param_2,param_3,&DAT_100fcf528);
  *param_1 = (char)param_2;
  return;
}



/* Address: 0x10054fd84 | FUN_10054fd84 */

void FUN_10054fd84(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fcf678;
  FUN_1000f7830(&DAT_100fcf678,&DAT_100c58108);
  _swift_initStaticObject();
  *param_1 = puVar1;
  return;
}



/* Address: 0x10054fdc4 | FUN_10054fdc4 */

String FUN_10054fdc4(void)

{
  String SVar1;
  
  FUN_100552204();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x10054fdec | FUN_10054fdec */

String FUN_10054fdec(void)

{
  String SVar1;
  
  FUN_100552204();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x10054fe14 | FUN_10054fe14 */

void FUN_10054fe14(long param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  KeyedEncodingContainer<undefined> KVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long extraout_x8;
  long unaff_x21;
  long lVar6;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_51;
  
  puVar1 = &DAT_100fcf238;
  local_70 = param_3;
  FUN_1000f7830(&DAT_100fcf238,&DAT_100c57060);
  lVar6 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_100552204();
  KVar2 = Swift::Encoder::_container();
  local_68 = CONCAT71(local_68._1_7_,param_2);
  local_51 = 0;
  FUN_100552244();
  Swift::KeyedEncodingContainer::_encode(&local_68,&local_51,puVar1,&DAT_100ede950,KVar2.unknown);
  if (unaff_x21 == 0) {
    local_68 = local_70;
    local_51 = 1;
    puVar3 = &DAT_100fcc380;
    FUN_1000f7830(&DAT_100fcc380,&DAT_100c54e90);
    puVar4 = &DAT_100fcc388;
    FUN_1004dbd24(&DAT_100fcc388,FUN_1004d9ea8,
                  PTR___protocol_witness_table_for_Swift_String___Swift_Encodable_in_Swift_100eac210
                  ,PTR__Swift__Swift__Dictionary<undefined,undefined>_>Swift__Encodable_100eabe68);
    puVar5 = &local_68;
    Swift::KeyedEncodingContainer::_encodeIfPresent(puVar5,&local_51,puVar1,puVar3,puVar4);
    local_51 = 2;
    local_68 = param_4;
    FUN_1004e02ac();
    Swift::KeyedEncodingContainer::_encodeIfPresent
              (&local_68,&local_51,puVar1,&DAT_100edcda0,puVar5);
  }
  (**(code **)(lVar6 + 8))((long)&local_70 - extraout_x8,puVar1);
  return;
}



/* Address: 0x10054ffd8 | FUN_10054ffd8 */

void FUN_10054ffd8(void)

{
  FUN_100552284();
  return;
}



/* Address: 0x10054fff8 | thunk_FUN_10055126c */

void thunk_FUN_10055126c(void)

{
  FUN_10055126c();
  return;
}



/* Address: 0x10054fffc | FUN_10054fffc */

void FUN_10054fffc(Hasher param_1,char param_2,Hasher param_3,long param_4)

{
  Hasher HVar1;
  undefined1 *puVar2;
  String SVar3;
  
  if (param_2 == '\0') {
    puVar2 = &DAT_e600000000000000;
    HVar1.unknown = (char *)0x747065636361;
  }
  else {
    HVar1.unknown = (char *)0x656e696c636564;
    if (param_2 != '\x01') {
      HVar1.unknown = (char *)0x6c65636e6163;
    }
    puVar2 = &DAT_e700000000000000;
    if (param_2 != '\x01') {
      puVar2 = &DAT_e600000000000000;
    }
  }
  SVar3.bridgeObject = puVar2;
  SVar3.str = HVar1.unknown;
  Swift::String::hash(param_1,SVar3);
  _swift_bridgeObjectRelease(puVar2);
  if (param_3.unknown == (undefined *)0x0) {
    Swift::Hasher::_combine(0,HVar1);
    param_3.unknown = HVar1.unknown;
  }
  else {
    Swift::Hasher::_combine(1,HVar1);
    FUN_1004df778(param_1.unknown);
  }
  if (param_4 == 0) {
    Swift::Hasher::_combine(0,param_3);
    return;
  }
  Swift::Hasher::_combine(1,param_3);
  FUN_1004df778(param_1.unknown,param_4);
  return;
}



/* Address: 0x1005500d8 | FUN_1005500d8 */

void FUN_1005500d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  Hasher HVar1;
  undefined1 auStack_78 [72];
  
  Swift::Hasher::init(0);
  HVar1.unknown = auStack_78;
  FUN_10054fffc(HVar1.unknown,param_1,param_2,param_3);
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x100550134 | FUN_100550134 */

void FUN_100550134(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  Hasher HVar4;
  undefined1 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar1 = *(undefined8 *)(unaff_x20 + 8);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *unaff_x20;
  Swift::Hasher::init(0);
  HVar4.unknown = auStack_78;
  FUN_10054fffc(HVar4.unknown,uVar3,uVar1,uVar2);
  Swift::Hasher::_finalize(HVar4);
  return;
}



/* Address: 0x10055018c | FUN_10055018c */

void FUN_10055018c(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  FUN_10054fffc(param_1,*unaff_x20,*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10))
  ;
  return;
}



/* Address: 0x100550198 | FUN_100550198 */

void FUN_100550198(__int64 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  Hasher HVar4;
  undefined1 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar1 = *(undefined8 *)(unaff_x20 + 8);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *unaff_x20;
  Swift::Hasher::init(param_1);
  HVar4.unknown = auStack_78;
  FUN_10054fffc(HVar4.unknown,uVar3,uVar1,uVar2);
  Swift::Hasher::_finalize(HVar4);
  return;
}


