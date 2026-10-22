/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1004c8328 | FUN_1004c8328 */

void FUN_1004c8328(void)

{
  undefined1 *unaff_x20;
  
  FUN_1005a0b40(0,*unaff_x20);
  return;
}



/* Address: 0x1004c8334 | FUN_1004c8334 */

void FUN_1004c8334(Hasher param_1)

{
  undefined1 *puVar1;
  byte bVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  undefined1 *puVar7;
  byte *unaff_x20;
  String SVar8;
  
  bVar2 = *unaff_x20;
  if (bVar2 < 3) {
    puVar1 = (undefined1 *)0x8000000100da8450;
    pcVar3 = (char *)0xd000000000000016;
    if (bVar2 != 1) {
      puVar1 = (undefined1 *)0xee00746e696f7064;
      pcVar3 = (char *)0x6e655f6e656b6f74;
    }
    pcVar6 = (char *)0x726575737369;
    if (bVar2 != 0) {
      pcVar6 = pcVar3;
    }
    puVar7 = &DAT_e600000000000000;
    if (bVar2 != 0) {
      puVar7 = puVar1;
    }
  }
  else {
    pcVar3 = "ethods_supported";
    if (bVar2 != 5) {
      pcVar3 = "_in";
    }
    pcVar4 = "dpoint";
    pcVar5 = (char *)0xd000000000000015;
    if (bVar2 != 3) {
      pcVar4 = "grant_types_supported";
      pcVar5 = (char *)0xd000000000000020;
    }
    pcVar6 = (char *)0xd000000000000025;
    if (bVar2 < 5) {
      pcVar3 = pcVar4;
      pcVar6 = pcVar5;
    }
    puVar7 = (undefined1 *)((ulong)pcVar3 | 0x8000000000000000);
  }
  SVar8.bridgeObject = puVar7;
  SVar8.str = pcVar6;
  Swift::String::hash(param_1,SVar8);
  _swift_bridgeObjectRelease(puVar7);
  return;
}



/* Address: 0x1004c8448 | FUN_1004c8448 */

void FUN_1004c8448(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  FUN_1005a0b40(param_1,*unaff_x20);
  return;
}



/* Address: 0x1004c8450 | FUN_1004c8450 */

void FUN_1004c8450(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1004cb494(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Address: 0x1004c847c | FUN_1004c847c */

void FUN_1004c847c(undefined8 *param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  byte bVar4;
  char *pcVar5;
  char *pcVar6;
  undefined8 uVar7;
  byte *unaff_x20;
  
  bVar4 = *unaff_x20;
  if (bVar4 < 3) {
    puVar1 = (undefined1 *)0x8000000100da8450;
    uVar7 = 0xd000000000000016;
    if (bVar4 != 1) {
      puVar1 = (undefined1 *)0xee00746e696f7064;
      uVar7 = 0x6e655f6e656b6f74;
    }
    uVar2 = 0x726575737369;
    if (bVar4 != 0) {
      uVar2 = uVar7;
    }
    puVar3 = &DAT_e600000000000000;
    if (bVar4 != 0) {
      puVar3 = puVar1;
    }
    *param_1 = uVar2;
    param_1[1] = puVar3;
    return;
  }
  pcVar5 = "ethods_supported";
  if (bVar4 != 5) {
    pcVar5 = "_in";
  }
  pcVar6 = "dpoint";
  uVar7 = 0xd000000000000015;
  if (bVar4 != 3) {
    pcVar6 = "grant_types_supported";
    uVar7 = 0xd000000000000020;
  }
  uVar2 = 0xd000000000000025;
  if (bVar4 < 5) {
    pcVar5 = pcVar6;
    uVar2 = uVar7;
  }
  *param_1 = uVar2;
  param_1[1] = (ulong)pcVar5 | 0x8000000000000000;
  return;
}



/* Address: 0x1004c8578 | FUN_1004c8578 */

undefined1  [16] FUN_1004c8578(void)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  byte bVar4;
  char *pcVar5;
  char *pcVar6;
  undefined8 uVar7;
  byte *unaff_x20;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  bVar4 = *unaff_x20;
  if (bVar4 < 3) {
    puVar1 = (undefined1 *)0x8000000100da8450;
    uVar7 = 0xd000000000000016;
    if (bVar4 != 1) {
      puVar1 = (undefined1 *)0xee00746e696f7064;
      uVar7 = 0x6e655f6e656b6f74;
    }
    uVar2 = 0x726575737369;
    if (bVar4 != 0) {
      uVar2 = uVar7;
    }
    puVar3 = &DAT_e600000000000000;
    if (bVar4 != 0) {
      puVar3 = puVar1;
    }
    auVar9._8_8_ = puVar3;
    auVar9._0_8_ = uVar2;
    return auVar9;
  }
  pcVar5 = "ethods_supported";
  if (bVar4 != 5) {
    pcVar5 = "_in";
  }
  pcVar6 = "dpoint";
  uVar7 = 0xd000000000000015;
  if (bVar4 != 3) {
    pcVar6 = "grant_types_supported";
    uVar7 = 0xd000000000000020;
  }
  uVar2 = 0xd000000000000025;
  if (bVar4 < 5) {
    pcVar5 = pcVar6;
    uVar2 = uVar7;
  }
  auVar8._8_8_ = (ulong)pcVar5 | 0x8000000000000000;
  auVar8._0_8_ = uVar2;
  return auVar8;
}



/* Address: 0x1004c866c | FUN_1004c866c */

void FUN_1004c866c(undefined1 *param_1,undefined1 param_2)

{
  FUN_1004cb494();
  *param_1 = param_2;
  return;
}



/* Address: 0x1004c8690 | FUN_1004c8690 */

String FUN_1004c8690(void)

{
  String SVar1;
  
  FUN_1004cebd0();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x1004c86b8 | FUN_1004c86b8 */

String FUN_1004c86b8(void)

{
  String SVar1;
  
  FUN_1004cebd0();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x1004c86e0 | FUN_1004c86e0 */

void FUN_1004c86e0(void)

{
  FUN_1004c7cc4();
  return;
}



/* Address: 0x1004c86f4 | thunk_FUN_1004ca538 */

void thunk_FUN_1004ca538(void)

{
  FUN_1004ca538();
  return;
}



/* Address: 0x1004c86f8 | FUN_1004c86f8 */

void FUN_1004c86f8(void)

{
  char *pcVar1;
  undefined1 *puVar2;
  byte bVar3;
  char *pcVar4;
  Hasher HVar5;
  undefined1 *puVar6;
  byte *unaff_x20;
  String SVar7;
  undefined1 auStack_68 [72];
  
  bVar3 = *unaff_x20;
  Swift::Hasher::init(0);
  puVar6 = (undefined1 *)0xec0000006e656b6f;
  pcVar1 = (char *)0x65706f6373;
  if (bVar3 != 3) {
    pcVar1 = (char *)0x5f68736572666572;
  }
  puVar2 = &DAT_e500000000000000;
  if (bVar3 != 3) {
    puVar2 = (undefined1 *)0xed00006e656b6f74;
  }
  HVar5.unknown = (undefined1 *)0xea00000000006e69;
  pcVar4 = (char *)0x5f73657269707865;
  if (bVar3 != 2) {
    HVar5.unknown = puVar2;
    pcVar4 = pcVar1;
  }
  pcVar1 = (char *)0x745f737365636361;
  if (bVar3 != 0) {
    puVar6 = (undefined1 *)0xea00000000006570;
    pcVar1 = (char *)0x79745f6e656b6f74;
  }
  if (bVar3 < 2) {
    HVar5.unknown = puVar6;
    pcVar4 = pcVar1;
  }
  SVar7.bridgeObject = HVar5.unknown;
  SVar7.str = pcVar4;
  Swift::String::hash((Hasher)auStack_68,SVar7);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar5);
  return;
}



/* Address: 0x1004c87f4 | FUN_1004c87f4 */

void FUN_1004c87f4(Hasher param_1)

{
  char *pcVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  byte bVar4;
  char *pcVar5;
  undefined1 *puVar6;
  byte *unaff_x20;
  String SVar7;
  
  bVar4 = *unaff_x20;
  puVar6 = (undefined1 *)0xec0000006e656b6f;
  pcVar1 = (char *)0x65706f6373;
  if (bVar4 != 3) {
    pcVar1 = (char *)0x5f68736572666572;
  }
  puVar2 = &DAT_e500000000000000;
  if (bVar4 != 3) {
    puVar2 = (undefined1 *)0xed00006e656b6f74;
  }
  puVar3 = (undefined1 *)0xea00000000006e69;
  pcVar5 = (char *)0x5f73657269707865;
  if (bVar4 != 2) {
    puVar3 = puVar2;
    pcVar5 = pcVar1;
  }
  pcVar1 = (char *)0x745f737365636361;
  if (bVar4 != 0) {
    puVar6 = (undefined1 *)0xea00000000006570;
    pcVar1 = (char *)0x79745f6e656b6f74;
  }
  if (bVar4 < 2) {
    puVar3 = puVar6;
    pcVar5 = pcVar1;
  }
  SVar7.bridgeObject = puVar3;
  SVar7.str = pcVar5;
  Swift::String::hash(param_1,SVar7);
  _swift_bridgeObjectRelease(puVar3);
  return;
}



/* Address: 0x1004c88cc | FUN_1004c88cc */

void FUN_1004c88cc(__int64 param_1)

{
  char *pcVar1;
  undefined1 *puVar2;
  byte bVar3;
  char *pcVar4;
  Hasher HVar5;
  undefined1 *puVar6;
  byte *unaff_x20;
  String SVar7;
  undefined1 auStack_68 [72];
  
  bVar3 = *unaff_x20;
  Swift::Hasher::init(param_1);
  puVar6 = (undefined1 *)0xec0000006e656b6f;
  pcVar1 = (char *)0x65706f6373;
  if (bVar3 != 3) {
    pcVar1 = (char *)0x5f68736572666572;
  }
  puVar2 = &DAT_e500000000000000;
  if (bVar3 != 3) {
    puVar2 = (undefined1 *)0xed00006e656b6f74;
  }
  HVar5.unknown = (undefined1 *)0xea00000000006e69;
  pcVar4 = (char *)0x5f73657269707865;
  if (bVar3 != 2) {
    HVar5.unknown = puVar2;
    pcVar4 = pcVar1;
  }
  pcVar1 = (char *)0x745f737365636361;
  if (bVar3 != 0) {
    puVar6 = (undefined1 *)0xea00000000006570;
    pcVar1 = (char *)0x79745f6e656b6f74;
  }
  if (bVar3 < 2) {
    HVar5.unknown = puVar6;
    pcVar4 = pcVar1;
  }
  SVar7.bridgeObject = HVar5.unknown;
  SVar7.str = pcVar4;
  Swift::String::hash((Hasher)auStack_68,SVar7);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar5);
  return;
}



/* Address: 0x1004c89c4 | FUN_1004c89c4 */

void FUN_1004c89c4(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1004cb4f8(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Address: 0x1004c89f0 | FUN_1004c89f0 */

void FUN_1004c89f0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  byte *unaff_x20;
  
  bVar4 = *unaff_x20;
  puVar6 = (undefined1 *)0xec0000006e656b6f;
  uVar1 = 0x65706f6373;
  if (bVar4 != 3) {
    uVar1 = 0x5f68736572666572;
  }
  puVar2 = &DAT_e500000000000000;
  if (bVar4 != 3) {
    puVar2 = (undefined1 *)0xed00006e656b6f74;
  }
  puVar3 = (undefined1 *)0xea00000000006e69;
  uVar5 = 0x5f73657269707865;
  if (bVar4 != 2) {
    puVar3 = puVar2;
    uVar5 = uVar1;
  }
  uVar1 = 0x745f737365636361;
  if (bVar4 != 0) {
    puVar6 = (undefined1 *)0xea00000000006570;
    uVar1 = 0x79745f6e656b6f74;
  }
  if (bVar4 < 2) {
    puVar3 = puVar6;
    uVar5 = uVar1;
  }
  *param_1 = uVar5;
  param_1[1] = puVar3;
  return;
}



/* Address: 0x1004c8aac | FUN_1004c8aac */

undefined1  [16] FUN_1004c8aac(void)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  byte *unaff_x20;
  undefined1 auVar7 [16];
  
  puVar6 = (undefined1 *)0xec0000006e656b6f;
  bVar4 = *unaff_x20;
  uVar1 = 0x65706f6373;
  if (bVar4 != 3) {
    uVar1 = 0x5f68736572666572;
  }
  puVar2 = &DAT_e500000000000000;
  if (bVar4 != 3) {
    puVar2 = (undefined1 *)0xed00006e656b6f74;
  }
  puVar3 = (undefined1 *)0xea00000000006e69;
  uVar5 = 0x5f73657269707865;
  if (bVar4 != 2) {
    puVar3 = puVar2;
    uVar5 = uVar1;
  }
  uVar1 = 0x745f737365636361;
  if (bVar4 != 0) {
    puVar6 = (undefined1 *)0xea00000000006570;
    uVar1 = 0x79745f6e656b6f74;
  }
  if (bVar4 < 2) {
    puVar3 = puVar6;
    uVar5 = uVar1;
  }
  auVar7._8_8_ = puVar3;
  auVar7._0_8_ = uVar5;
  return auVar7;
}



/* Address: 0x1004c8b64 | FUN_1004c8b64 */

void FUN_1004c8b64(undefined1 *param_1,undefined1 param_2)

{
  FUN_1004cb4f8();
  *param_1 = param_2;
  return;
}



/* Address: 0x1004c8b88 | FUN_1004c8b88 */

String FUN_1004c8b88(void)

{
  String SVar1;
  
  FUN_1004ceb5c();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x1004c8bb0 | FUN_1004c8bb0 */

String FUN_1004c8bb0(void)

{
  String SVar1;
  
  FUN_1004ceb5c();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x1004c8bd8 | FUN_1004c8bd8 */

void FUN_1004c8bd8(undefined8 *param_1)

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
  
  FUN_1004cb55c(&local_70);
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



/* Address: 0x1004c8c20 | FUN_1004c8c20 */

uint FUN_1004c8c20(undefined8 *param_1,undefined8 *param_2)

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
  FUN_1004ca41c(&local_b0,&uStack_60);
  return uVar1 & 1;
}



/* Address: 0x1004c8c78 | FUN_1004c8c78 */

undefined1  [16] FUN_1004c8c78(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = &DAT_e500000000000000;
  auVar1._0_8_ = 0x726f727265;
  return auVar1;
}



/* Address: 0x1004c8c8c | FUN_1004c8c8c */

void FUN_1004c8c8c(byte *param_1,long param_2,undefined1 *param_3)

{
  bool bVar1;
  byte bVar2;
  
  if (param_2 == 0x726f727265 && param_3 == &DAT_e500000000000000) {
    _swift_bridgeObjectRelease(param_3);
    bVar2 = 0;
  }
  else {
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x726f727265,(_StringGuts)0xe500000000000000,
                       (_StringComparisonResult)(__int8)param_2);
    _swift_bridgeObjectRelease(param_3);
    bVar2 = (bVar1 ^ 0xffU) & 1;
  }
  *param_1 = bVar2;
  return;
}



/* Address: 0x1004c8d0c | FUN_1004c8d0c */

String FUN_1004c8d0c(void)

{
  String SVar1;
  
  FUN_1004cf044();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x1004c8d34 | FUN_1004c8d34 */

String FUN_1004c8d34(void)

{
  String SVar1;
  
  FUN_1004cf044();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x1004c8d5c | FUN_1004c8d5c */

/* WARNING: Removing unreachable block (ram,0x0001004c8e20) */

void FUN_1004c8d5c(String *param_1,long param_2)

{
  undefined *puVar1;
  KeyedDecodingContainer<undefined> KVar2;
  long extraout_x8;
  long unaff_x21;
  long lVar3;
  String SVar4;
  
  puVar1 = &DAT_100fcc0d0;
  FUN_1000f7830(&DAT_100fcc0d0,&DAT_100c515c8);
  lVar3 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_1004cf044();
  KVar2 = Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    SVar4 = Swift::KeyedDecodingContainer::_decode(KVar2.unknown,puVar1);
    (**(code **)(lVar3 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,puVar1);
    FUN_100004594(param_2);
    *param_1 = SVar4;
  }
  else {
    FUN_100004594(param_2);
  }
  return;
}



/* Address: 0x1004c8e84 | FUN_1004c8e84 */

void FUN_1004c8e84(void)

{
  FUN_1004c9908(FUN_1004c78dc);
  return;
}



/* Address: 0x1004c8e90 | FUN_1004c8e90 */

void FUN_1004c8e90(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_1004c78dc();
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + *(int *)(lVar1 + 0x1c)));
  return;
}



/* Address: 0x1004c8eb0 | FUN_1004c8eb0 */

void FUN_1004c8eb0(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_1004c78dc();
  FUN_1000f8cac(unaff_x20 + *(int *)(lVar1 + 0x20),param_1,&DAT_100fcb378,&DAT_100c50170);
  return;
}



/* Address: 0x1004c8ef4 | FUN_1004c8ef4 */

undefined1  [16] FUN_1004c8ef4(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long lVar3;
  long unaff_x20;
  
  lVar3 = 0;
  FUN_1004c78dc();
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + *(int *)(lVar3 + 0x24));
  auVar2 = *pauVar1;
  _swift_bridgeObjectRetain(*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Address: 0x1004c8f30 | FUN_1004c8f30 */

undefined1  [16] FUN_1004c8f30(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long lVar3;
  long unaff_x20;
  
  lVar3 = 0;
  FUN_1004c78dc();
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + *(int *)(lVar3 + 0x28));
  auVar2 = *pauVar1;
  _swift_bridgeObjectRetain(*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Address: 0x1004c8f6c | FUN_1004c8f6c */

undefined1  [16] FUN_1004c8f6c(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  byte *unaff_x20;
  undefined1 auVar7 [16];
  
  bVar3 = *unaff_x20;
  puVar5 = (undefined1 *)0xec0000006e656b6f;
  puVar4 = (undefined1 *)0x5468736572666572;
  if (bVar3 != 5) {
    puVar5 = &DAT_e800000000000000;
    puVar4 = (undefined1 *)0x4449746e65696c63;
  }
  puVar6 = (undefined1 *)0x7365706f6373;
  if (bVar3 != 3) {
    puVar6 = (undefined1 *)0xd000000000000013;
  }
  puVar2 = &DAT_e600000000000000;
  if (bVar3 != 3) {
    puVar2 = (undefined1 *)0x8000000100daaf60;
  }
  if (bVar3 < 5) {
    puVar5 = puVar2;
    puVar4 = puVar6;
  }
  puVar6 = (undefined1 *)0xe900000000000065;
  puVar2 = (undefined1 *)0x7079546e656b6f74;
  if (bVar3 != 1) {
    puVar6 = (undefined1 *)0xe900000000000074;
    puVar2 = (undefined1 *)0x4173657269707865;
  }
  puVar1 = &DAT_65756c6176;
  if (bVar3 != 0) {
    puVar1 = puVar2;
  }
  puVar2 = &DAT_e500000000000000;
  if (bVar3 != 0) {
    puVar2 = puVar6;
  }
  if (bVar3 < 3) {
    puVar5 = puVar2;
    puVar4 = puVar1;
  }
  auVar7._8_8_ = puVar5;
  auVar7._0_8_ = puVar4;
  return auVar7;
}



/* Address: 0x1004c9050 | FUN_1004c9050 */

void FUN_1004c9050(undefined1 *param_1,undefined1 param_2)

{
  FUN_1004cb80c();
  *param_1 = param_2;
  return;
}



/* Address: 0x1004c9074 | FUN_1004c9074 */

String FUN_1004c9074(void)

{
  String SVar1;
  
  FUN_1004ca360();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x1004c909c | FUN_1004c909c */

String FUN_1004c909c(void)

{
  String SVar1;
  
  FUN_1004ca360();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x1004c90c4 | FUN_1004c90c4 */

void FUN_1004c90c4(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  Date DVar5;
  undefined *puVar6;
  undefined *puVar7;
  URL UVar8;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar9;
  undefined1 auStack_60 [9];
  undefined1 local_57;
  undefined1 local_56;
  undefined1 local_55;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar3 = &DAT_100fcbb50;
  FUN_1000f7830(&DAT_100fcbb50,&USHORT_100c50b60);
  lVar9 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_1004ca360();
  Swift::Encoder::_container();
  local_51 = 0;
  Swift::KeyedEncodingContainer::_encode(*unaff_x20,unaff_x20[1],&local_51,puVar3);
  if (unaff_x21 == 0) {
    local_52 = 1;
    Swift::KeyedEncodingContainer::_encode(unaff_x20[2],unaff_x20[3],&local_52,puVar3);
    lVar4 = 0;
    FUN_1004c78dc();
    iVar2 = *(int *)(lVar4 + 0x18);
    local_53 = 2;
    DVar5 = Foundation::Date::typeMetadataAccessor();
    puVar6 = &DAT_100fcbb60;
    FUN_100003a00(&DAT_100fcbb60,PTR_typeMetadataAccessor_100ea7480,
                  PTR_Foundation__Foundation__Date_>Swift__Encodable_100ea7490);
    Swift::KeyedEncodingContainer::_encodeIfPresent
              ((long)unaff_x20 + (long)iVar2,&local_53,puVar3,DVar5.unknown,puVar6);
    iVar2 = *(int *)(lVar4 + 0x1c);
    local_54 = 3;
    puVar6 = &DAT_100fcbb68;
    FUN_1000f7830(&DAT_100fcbb68,&USHORT_100c50b68);
    puVar7 = &DAT_100fcbb70;
    FUN_1004ca3a0(&DAT_100fcbb70,
                  PTR___protocol_witness_table_for_Swift_String___Swift_Encodable_in_Swift_100eac210
                  ,PTR__Swift__Swift__Set<undefined>_>Swift__Encodable_100eac6c8);
    Swift::KeyedEncodingContainer::_encode
              ((long)unaff_x20 + (long)iVar2,&local_54,puVar3,puVar6,puVar7);
    iVar2 = *(int *)(lVar4 + 0x20);
    local_55 = 4;
    UVar8 = Foundation::URL::typeMetadataAccessor();
    puVar6 = &DAT_100fcbb78;
    FUN_100003a00(&DAT_100fcbb78,PTR_typeMetadataAccessor_100ea71a8,
                  PTR_Foundation__Foundation__URL_>Swift__Encodable_100ea71b8);
    Swift::KeyedEncodingContainer::_encodeIfPresent
              ((long)unaff_x20 + (long)iVar2,&local_55,puVar3,UVar8.unknown,puVar6);
    puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar4 + 0x24));
    local_56 = 5;
    Swift::KeyedEncodingContainer::_encodeIfPresent(*puVar1,puVar1[1],&local_56,puVar3);
    puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar4 + 0x28));
    local_57 = 6;
    Swift::KeyedEncodingContainer::_encodeIfPresent(*puVar1,puVar1[1],&local_57,puVar3);
  }
  (**(code **)(lVar9 + 8))(auStack_60 + -extraout_x8,puVar3);
  return;
}



/* Address: 0x1004c9368 | FUN_1004c9368 */

/* WARNING: Removing unreachable block (ram,0x0001004c97d8) */
/* WARNING: Removing unreachable block (ram,0x0001004c95e4) */
/* WARNING: Removing unreachable block (ram,0x0001004c9568) */
/* WARNING: Removing unreachable block (ram,0x0001004c95f4) */
/* WARNING: Removing unreachable block (ram,0x0001004c9608) */
/* WARNING: Removing unreachable block (ram,0x0001004c9730) */
/* WARNING: Removing unreachable block (ram,0x0001004c94fc) */
/* WARNING: Removing unreachable block (ram,0x0001004c9854) */
/* WARNING: Removing unreachable block (ram,0x0001004c960c) */

void FUN_1004c9368(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  void *pvVar3;
  void *pvVar4;
  undefined *puVar5;
  long lVar6;
  Date DVar7;
  undefined *puVar8;
  undefined *puVar9;
  URL UVar10;
  undefined1 *puVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar12;
  void *unaff_x21;
  long lVar13;
  String *pSVar14;
  long lVar15;
  String SVar16;
  String local_a0;
  String local_90;
  undefined *local_80;
  undefined8 local_68;
  undefined1 local_57;
  undefined1 local_56;
  undefined1 local_55;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar5 = &DAT_100fcb378;
  local_90.str = (char *)param_1;
  FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_100fcb550;
  local_90.bridgeObject = (void *)((long)&local_a0 - extraout_x8);
  FUN_1000f7830(&DAT_100fcb550,&USHORT_100c50b50);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = ((long)&local_a0 - extraout_x8) - extraout_x8_00;
  puVar5 = &DAT_100fcbb80;
  FUN_1000f7830(&DAT_100fcbb80,&USHORT_100c50b70);
  lVar15 = *(long *)(puVar5 + -8);
  local_80 = puVar5;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = lVar13 - extraout_x8_01;
  lVar6 = 0;
  FUN_1004c78dc();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  pSVar14 = (String *)(lVar12 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_1004ca360();
  Swift::Decoder::_container();
  puVar5 = local_80;
  if (unaff_x21 == (void *)0x0) {
    local_51 = 0;
    SVar16 = Swift::KeyedDecodingContainer::_decode(&local_51,local_80);
    *pSVar14 = SVar16;
    local_52 = 1;
    SVar16 = Swift::KeyedDecodingContainer::_decode(&local_52,puVar5);
    local_a0.str = SVar16.bridgeObject;
    pSVar14[1] = SVar16;
    DVar7 = Foundation::Date::typeMetadataAccessor();
    local_53 = 2;
    puVar8 = &DAT_100fcbb88;
    FUN_100003a00(&DAT_100fcbb88,PTR_typeMetadataAccessor_100ea7480,
                  PTR_Foundation__Foundation__Date_>Swift__Decodable_100ea74a8);
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (lVar13,DVar7.unknown,&local_53,puVar5,DVar7.unknown,puVar8);
    local_a0.bridgeObject = unaff_x21;
    FUN_10011532c(lVar13,(long)&pSVar14->str + (long)*(int *)(lVar6 + 0x18),&DAT_100fcb550,
                  &USHORT_100c50b50);
    puVar8 = &DAT_100fcbb68;
    FUN_1000f7830(&DAT_100fcbb68,&USHORT_100c50b68);
    local_54 = 3;
    puVar9 = &DAT_100fcbb90;
    FUN_1004ca3a0(&DAT_100fcbb90,
                  PTR___protocol_witness_table_for_Swift_String___Swift_Decodable_in_Swift_100eac240
                  ,PTR__Swift__Swift__Set<undefined>_>Swift__Decodable_100eac6d8);
    pvVar3 = local_a0.bridgeObject;
    Swift::KeyedDecodingContainer::_decode(&local_68,puVar8,&local_54,puVar5,puVar8,puVar9);
    if (local_a0.bridgeObject == (void *)0x0) {
      *(undefined8 *)((long)&pSVar14->str + (long)*(int *)(lVar6 + 0x1c)) = local_68;
      UVar10 = Foundation::URL::typeMetadataAccessor();
      local_55 = 4;
      puVar8 = &DAT_100fcbb98;
      FUN_100003a00(&DAT_100fcbb98,PTR_typeMetadataAccessor_100ea71a8,
                    PTR_Foundation__Foundation__URL_>Swift__Decodable_100ea71d0);
      pvVar4 = local_90.bridgeObject;
      Swift::KeyedDecodingContainer::_decodeIfPresent
                (local_90.bridgeObject,UVar10.unknown,&local_55,puVar5,UVar10.unknown,puVar8);
      FUN_10011532c(pvVar4,(long)&pSVar14->str + (long)*(int *)(lVar6 + 0x20),&DAT_100fcb378,
                    &DAT_100c50170);
      local_56 = 5;
      puVar11 = &local_56;
      puVar8 = puVar5;
      Swift::KeyedDecodingContainer::_decodeIfPresent();
      if (local_a0.bridgeObject == (void *)0x0) {
        puVar1 = (undefined8 *)((long)&pSVar14->str + (long)*(int *)(lVar6 + 0x24));
        *puVar1 = puVar11;
        puVar1[1] = puVar8;
        local_57 = 6;
        puVar11 = &local_57;
        puVar8 = puVar5;
        Swift::KeyedDecodingContainer::_decodeIfPresent();
        (**(code **)(lVar15 + 8))(lVar12,puVar5);
        puVar1 = (undefined8 *)((long)&pSVar14->str + (long)*(int *)(lVar6 + 0x28));
        *puVar1 = puVar11;
        puVar1[1] = puVar8;
        FUN_1000c495c(pSVar14,local_90.str,FUN_1004c78dc);
        FUN_100004594(param_2);
        FUN_10005241c(pSVar14,FUN_1004c78dc);
        return;
      }
      (**(code **)(lVar15 + 8))(lVar12,puVar5);
      bVar2 = true;
    }
    else {
      (**(code **)(lVar15 + 8))(lVar12,puVar5);
      bVar2 = false;
    }
    FUN_100004594(param_2);
    _swift_bridgeObjectRelease(pSVar14->bridgeObject);
    _swift_bridgeObjectRelease(pSVar14[1].bridgeObject);
    FUN_1000fb4c4((long)&pSVar14->str + (long)*(int *)(lVar6 + 0x18),&DAT_100fcb550,
                  &USHORT_100c50b50);
    if (pvVar3 == (void *)0x0) {
      _swift_bridgeObjectRelease
                (*(undefined8 *)((long)&pSVar14->str + (long)*(int *)(lVar6 + 0x1c)));
    }
    if (bVar2) {
      FUN_1000fb4c4((long)&pSVar14->str + (long)*(int *)(lVar6 + 0x20),&DAT_100fcb378,&DAT_100c50170
                   );
    }
  }
  else {
    FUN_100004594(param_2);
  }
  return;
}



/* Address: 0x1004c98d4 | FUN_1004c98d4 */

void FUN_1004c98d4(void)

{
  FUN_1004c9368();
  return;
}



/* Address: 0x1004c98e8 | FUN_1004c98e8 */

void FUN_1004c98e8(void)

{
  FUN_1004c90c4();
  return;
}



/* Address: 0x1004c98fc | FUN_1004c98fc */

void FUN_1004c98fc(void)

{
  FUN_1004c9908(FUN_1004ca408);
  return;
}



/* Address: 0x1004c9908 | FUN_1004c9908 */

void FUN_1004c9908(undefined8 param_1,code *param_2)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = 0;
  (*param_2)();
  FUN_1000f8cac(unaff_x20 + *(int *)(lVar1 + 0x18),param_1,&DAT_100fcb550,&USHORT_100c50b50);
  return;
}



/* Address: 0x1004c9950 | FUN_1004c9950 */

void FUN_1004c9950(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  lVar1 = 0;
  FUN_1004ca408();
  FUN_10011532c(param_4,(long)param_1 + (long)*(int *)(lVar1 + 0x18),&DAT_100fcb550,
                &USHORT_100c50b50);
  return;
}



/* Address: 0x1004c999c | thunk_FUN_1004cae4c */

undefined8 thunk_FUN_1004cae4c(long *param_1,long *param_2)

{
  int iVar1;
  bool bVar2;
  Date DVar3;
  undefined *puVar4;
  ulong uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  code *pcVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long lVar16;
  undefined1 auStack_70 [8];
  undefined1 *puStack_68;
  
  DVar3 = Foundation::Date::typeMetadataAccessor();
  lVar16 = *(long *)(DVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar16 + 0x40));
  puVar9 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100fcb550;
  FUN_1000f7830(&DAT_100fcb550,&USHORT_100c50b50);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = (long)puVar9 - extraout_x8_00;
  puVar4 = &DAT_100fcbe98;
  FUN_1000f7830(&DAT_100fcbe98,&DAT_100c51178);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = lVar12 - extraout_x8_01;
  lVar6 = *param_1;
  lVar7 = *param_2;
  puStack_68 = puVar9;
  if (lVar6 == 0) {
    if (lVar7 != 0) {
      return 0;
    }
  }
  else {
    if (lVar7 == 0) {
      return 0;
    }
    lVar13 = *(long *)(lVar6 + 0x10);
    if (lVar13 != *(long *)(lVar7 + 0x10)) {
      return 0;
    }
    if (lVar13 != 0 && lVar6 != lVar7) {
      puVar14 = (undefined8 *)(lVar7 + 0x28);
      puVar10 = (undefined8 *)(lVar6 + 0x28);
      do {
        if (((undefined *)puVar10[-1] != (undefined *)puVar14[-1] ||
             (undefined *)*puVar10 != (undefined *)*puVar14) &&
           (bVar2 = Swift::_stringCompareWithSmolCheck
                              ((undefined *)puVar10[-1],(undefined *)*puVar10,
                               (_StringComparisonResult)(__int8)(undefined *)puVar14[-1]), !bVar2))
        {
          return 0;
        }
        puVar14 = puVar14 + 2;
        puVar10 = puVar10 + 2;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
  }
  uVar15 = param_1[1];
  lVar6 = param_2[1];
  if (uVar15 == 0) {
    if (lVar6 != 0) {
      return 0;
    }
  }
  else {
    if (lVar6 == 0) {
      return 0;
    }
    _swift_bridgeObjectRetain(lVar6);
    uVar5 = uVar15;
    _swift_bridgeObjectRetain();
    FUN_10037b278();
    _swift_bridgeObjectRelease(uVar15);
    _swift_bridgeObjectRelease(lVar6);
    if ((uVar5 & 1) == 0) {
      return 0;
    }
  }
  lVar6 = 0;
  FUN_1004ca408();
  iVar1 = *(int *)(lVar6 + 0x18);
  lVar6 = (long)*(int *)(puVar4 + 0x30);
  FUN_1000f8cac((long)param_1 + (long)iVar1,lVar8,&DAT_100fcb550,&USHORT_100c50b50);
  FUN_1000f8cac((long)param_2 + (long)iVar1,lVar8 + lVar6,&DAT_100fcb550,&USHORT_100c50b50);
  pcVar11 = *(code **)(lVar16 + 0x30);
  lVar7 = lVar8;
  (*pcVar11)(lVar8,1,DVar3.unknown);
  if ((int)lVar7 == 1) {
    lVar6 = lVar8 + lVar6;
    (*pcVar11)(lVar6,1,DVar3.unknown);
    if ((int)lVar6 == 1) {
      FUN_1000fb4c4(lVar8,&DAT_100fcb550,&USHORT_100c50b50);
      return 1;
    }
  }
  else {
    FUN_1000f8cac(lVar8,lVar12,&DAT_100fcb550,&USHORT_100c50b50);
    lVar7 = lVar8 + lVar6;
    (*pcVar11)(lVar7,1,DVar3.unknown);
    puVar9 = puStack_68;
    if ((int)lVar7 != 1) {
      (**(code **)(lVar16 + 0x20))(puStack_68,lVar8 + lVar6,DVar3.unknown);
      puVar4 = &DAT_100fcbea0;
      FUN_100003a00(&DAT_100fcbea0,PTR_typeMetadataAccessor_100ea7480,
                    PTR_Foundation__Foundation__Date_>Swift__Equatable_100ea74a0);
      bVar2 = Swift::Equatable::___infix(lVar12,puVar9,DVar3.unknown,puVar4);
      pcVar11 = *(code **)(lVar16 + 8);
      (*pcVar11)(puVar9,DVar3.unknown);
      (*pcVar11)(lVar12,DVar3.unknown);
      FUN_1000fb4c4(lVar8,&DAT_100fcb550,&USHORT_100c50b50);
      if (!bVar2) {
        return 0;
      }
      return 1;
    }
    (**(code **)(lVar16 + 8))(lVar12,DVar3.unknown);
  }
  FUN_1000fb4c4(lVar8,&DAT_100fcbe98,&DAT_100c51178);
  return 0;
}



/* Address: 0x1004c99a0 | FUN_1004c99a0 */

void FUN_1004c99a0(void)

{
  undefined *puVar1;
  byte bVar2;
  char *pcVar3;
  char *pcVar4;
  Hasher HVar5;
  char *pcVar6;
  byte *unaff_x20;
  String SVar7;
  undefined1 auStack_68 [72];
  
  bVar2 = *unaff_x20;
  Swift::Hasher::init(0);
  pcVar6 = (char *)0xd00000000000001a;
  pcVar3 = "client_id_issued_at";
  if (bVar2 != 2) {
    pcVar6 = (char *)0xd000000000000018;
    pcVar3 = "orted";
  }
  puVar1 = (undefined *)0xe900000000000064;
  pcVar4 = (char *)0x695f746e65696c63;
  if (bVar2 != 0) {
    puVar1 = (undefined *)0xed00007465726365;
    pcVar4 = (char *)0x735f746e65696c63;
  }
  HVar5.unknown = (undefined *)((ulong)pcVar3 | 0x8000000000000000);
  if (bVar2 < 2) {
    HVar5.unknown = puVar1;
    pcVar6 = pcVar4;
  }
  SVar7.bridgeObject = HVar5.unknown;
  SVar7.str = pcVar6;
  Swift::String::hash((Hasher)auStack_68,SVar7);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar5);
  return;
}



/* Address: 0x1004c9a7c | FUN_1004c9a7c */

void FUN_1004c9a7c(Hasher param_1)

{
  void *pvVar1;
  void *pvVar2;
  byte bVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  byte *unaff_x20;
  String SVar7;
  
  bVar3 = *unaff_x20;
  pcVar6 = (char *)0xd00000000000001a;
  pcVar4 = "client_id_issued_at";
  if (bVar3 != 2) {
    pcVar6 = (char *)0xd000000000000018;
    pcVar4 = "orted";
  }
  pvVar1 = (void *)0xe900000000000064;
  pcVar5 = (char *)0x695f746e65696c63;
  if (bVar3 != 0) {
    pvVar1 = (void *)0xed00007465726365;
    pcVar5 = (char *)0x735f746e65696c63;
  }
  pvVar2 = (void *)((ulong)pcVar4 | 0x8000000000000000);
  if (bVar3 < 2) {
    pvVar2 = pvVar1;
    pcVar6 = pcVar5;
  }
  SVar7.bridgeObject = pvVar2;
  SVar7.str = pcVar6;
  Swift::String::hash(param_1,SVar7);
  _swift_bridgeObjectRelease(pvVar2);
  return;
}



/* Address: 0x1004c9b34 | FUN_1004c9b34 */

void FUN_1004c9b34(__int64 param_1)

{
  undefined *puVar1;
  byte bVar2;
  char *pcVar3;
  char *pcVar4;
  Hasher HVar5;
  char *pcVar6;
  byte *unaff_x20;
  String SVar7;
  undefined1 auStack_68 [72];
  
  bVar2 = *unaff_x20;
  Swift::Hasher::init(param_1);
  pcVar6 = (char *)0xd00000000000001a;
  pcVar3 = "client_id_issued_at";
  if (bVar2 != 2) {
    pcVar6 = (char *)0xd000000000000018;
    pcVar3 = "orted";
  }
  puVar1 = (undefined *)0xe900000000000064;
  pcVar4 = (char *)0x695f746e65696c63;
  if (bVar2 != 0) {
    puVar1 = (undefined *)0xed00007465726365;
    pcVar4 = (char *)0x735f746e65696c63;
  }
  HVar5.unknown = (undefined *)((ulong)pcVar3 | 0x8000000000000000);
  if (bVar2 < 2) {
    HVar5.unknown = puVar1;
    pcVar6 = pcVar4;
  }
  SVar7.bridgeObject = HVar5.unknown;
  SVar7.str = pcVar6;
  Swift::String::hash((Hasher)auStack_68,SVar7);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar5);
  return;
}



/* Address: 0x1004c9c0c | FUN_1004c9c0c */

void FUN_1004c9c0c(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1004cba60(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Address: 0x1004c9c38 | FUN_1004c9c38 */

void FUN_1004c9c38(undefined8 *param_1)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte *unaff_x20;
  
  bVar3 = *unaff_x20;
  uVar6 = 0xd00000000000001a;
  pcVar4 = "client_id_issued_at";
  if (bVar3 != 2) {
    uVar6 = 0xd000000000000018;
    pcVar4 = "orted";
  }
  uVar1 = 0xe900000000000064;
  uVar5 = 0x695f746e65696c63;
  if (bVar3 != 0) {
    uVar1 = 0xed00007465726365;
    uVar5 = 0x735f746e65696c63;
  }
  uVar2 = (ulong)pcVar4 | 0x8000000000000000;
  if (bVar3 < 2) {
    uVar2 = uVar1;
    uVar6 = uVar5;
  }
  *param_1 = uVar6;
  param_1[1] = uVar2;
  return;
}



/* Address: 0x1004c9cd4 | FUN_1004c9cd4 */

undefined1  [16] FUN_1004c9cd4(void)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte *unaff_x20;
  undefined1 auVar7 [16];
  
  bVar3 = *unaff_x20;
  uVar6 = 0xd00000000000001a;
  pcVar4 = "client_id_issued_at";
  if (bVar3 != 2) {
    uVar6 = 0xd000000000000018;
    pcVar4 = "orted";
  }
  uVar1 = 0xe900000000000064;
  uVar5 = 0x695f746e65696c63;
  if (bVar3 != 0) {
    uVar1 = 0xed00007465726365;
    uVar5 = 0x735f746e65696c63;
  }
  uVar2 = (ulong)pcVar4 | 0x8000000000000000;
  if (bVar3 < 2) {
    uVar2 = uVar1;
    uVar6 = uVar5;
  }
  auVar7._8_8_ = uVar2;
  auVar7._0_8_ = uVar6;
  return auVar7;
}



/* Address: 0x1004c9d6c | FUN_1004c9d6c */

void FUN_1004c9d6c(undefined1 *param_1,undefined1 param_2)

{
  FUN_1004cba60();
  *param_1 = param_2;
  return;
}



/* Address: 0x1004c9d90 | FUN_1004c9d90 */

String FUN_1004c9d90(void)

{
  String SVar1;
  
  FUN_1004cf084();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x1004c9db8 | FUN_1004c9db8 */

String FUN_1004c9db8(void)

{
  String SVar1;
  
  FUN_1004cf084();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x1004c9de0 | FUN_1004c9de0 */

void FUN_1004c9de0(undefined8 *param_1)

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
  
  FUN_1004cbac4(&local_60);
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



/* Address: 0x1004c9e28 | FUN_1004c9e28 */

void FUN_1004c9e28(void)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  Hasher HVar4;
  char *pcVar5;
  char *unaff_x20;
  String SVar6;
  undefined1 auStack_68 [72];
  
  cVar2 = *unaff_x20;
  Swift::Hasher::init(0);
  pcVar5 = (char *)0xd000000000000015;
  pcVar3 = "int_auth_methods_supported";
  if (cVar2 != '\x01') {
    pcVar5 = (char *)0xd000000000000010;
    pcVar3 = "authorizationServer";
  }
  pcVar1 = (char *)0x656372756f736572;
  if (cVar2 != '\0') {
    pcVar1 = pcVar5;
  }
  HVar4.unknown = &DAT_e800000000000000;
  if (cVar2 != '\0') {
    HVar4.unknown = (undefined1 *)((ulong)pcVar3 | 0x8000000000000000);
  }
  SVar6.bridgeObject = HVar4.unknown;
  SVar6.str = pcVar1;
  Swift::String::hash((Hasher)auStack_68,SVar6);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar4);
  return;
}



/* Address: 0x1004c9ed0 | FUN_1004c9ed0 */

void FUN_1004c9ed0(Hasher param_1)

{
  char *pcVar1;
  undefined1 *puVar2;
  char cVar3;
  char *pcVar4;
  char *pcVar5;
  char *unaff_x20;
  String SVar6;
  
  cVar3 = *unaff_x20;
  pcVar5 = (char *)0xd000000000000015;
  pcVar4 = "int_auth_methods_supported";
  if (cVar3 != '\x01') {
    pcVar5 = (char *)0xd000000000000010;
    pcVar4 = "authorizationServer";
  }
  pcVar1 = (char *)0x656372756f736572;
  if (cVar3 != '\0') {
    pcVar1 = pcVar5;
  }
  puVar2 = &DAT_e800000000000000;
  if (cVar3 != '\0') {
    puVar2 = (undefined1 *)((ulong)pcVar4 | 0x8000000000000000);
  }
  SVar6.bridgeObject = puVar2;
  SVar6.str = pcVar1;
  Swift::String::hash(param_1,SVar6);
  _swift_bridgeObjectRelease(puVar2);
  return;
}



/* Address: 0x1004c9f54 | FUN_1004c9f54 */

void FUN_1004c9f54(__int64 param_1)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  Hasher HVar4;
  char *pcVar5;
  char *unaff_x20;
  String SVar6;
  undefined1 auStack_68 [72];
  
  cVar2 = *unaff_x20;
  Swift::Hasher::init(param_1);
  pcVar5 = (char *)0xd000000000000015;
  pcVar3 = "int_auth_methods_supported";
  if (cVar2 != '\x01') {
    pcVar5 = (char *)0xd000000000000010;
    pcVar3 = "authorizationServer";
  }
  pcVar1 = (char *)0x656372756f736572;
  if (cVar2 != '\0') {
    pcVar1 = pcVar5;
  }
  HVar4.unknown = &DAT_e800000000000000;
  if (cVar2 != '\0') {
    HVar4.unknown = (undefined1 *)((ulong)pcVar3 | 0x8000000000000000);
  }
  SVar6.bridgeObject = HVar4.unknown;
  SVar6.str = pcVar1;
  Swift::String::hash((Hasher)auStack_68,SVar6);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar4);
  return;
}



/* Address: 0x1004c9ff8 | FUN_1004c9ff8 */

void FUN_1004c9ff8(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1004cbd4c(uVar1,param_2[1],&DAT_100fcbde8);
  *param_1 = (char)uVar1;
  return;
}



/* Address: 0x1004ca02c | FUN_1004ca02c */

void FUN_1004ca02c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  char cVar3;
  char *pcVar4;
  undefined8 uVar5;
  char *unaff_x20;
  
  cVar3 = *unaff_x20;
  uVar5 = 0xd000000000000015;
  pcVar4 = "int_auth_methods_supported";
  if (cVar3 != '\x01') {
    uVar5 = 0xd000000000000010;
    pcVar4 = "authorizationServer";
  }
  uVar1 = 0x656372756f736572;
  if (cVar3 != '\0') {
    uVar1 = uVar5;
  }
  puVar2 = &DAT_e800000000000000;
  if (cVar3 != '\0') {
    puVar2 = (undefined1 *)((ulong)pcVar4 | 0x8000000000000000);
  }
  *param_1 = uVar1;
  param_1[1] = puVar2;
  return;
}



/* Address: 0x1004ca094 | FUN_1004ca094 */

void FUN_1004ca094(undefined1 *param_1,undefined4 param_2,undefined8 param_3)

{
  FUN_1004cbd4c(param_2,param_3,&DAT_100fcbde8);
  *param_1 = (char)param_2;
  return;
}



/* Address: 0x1004ca0c0 | FUN_1004ca0c0 */

String FUN_1004ca0c0(void)

{
  String SVar1;
  
  FUN_1004cb18c();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x1004ca0e8 | FUN_1004ca0e8 */

String FUN_1004ca0e8(void)

{
  String SVar1;
  
  FUN_1004cb18c();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x1004ca110 | FUN_1004ca110 */

void FUN_1004ca110(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long extraout_x8;
  long unaff_x21;
  long lVar5;
  undefined1 auStack_80 [8];
  ulong local_78;
  ulong uStack_70;
  undefined1 local_61;
  ulong local_58;
  
  puVar2 = &DAT_100fcbba0;
  local_78 = param_5;
  uStack_70 = param_4;
  FUN_1000f7830(&DAT_100fcbba0,&USHORT_100c50b78);
  lVar5 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_1004cb18c();
  Swift::Encoder::_container();
  local_58 = local_58 & 0xffffffffffffff00;
  Swift::KeyedEncodingContainer::_encode(param_2,param_3,&local_58,puVar2);
  uVar1 = local_78;
  if (unaff_x21 == 0) {
    local_58 = uStack_70;
    local_61 = 1;
    puVar3 = &DAT_100fcbbb0;
    FUN_1000f7830(&DAT_100fcbbb0,&USHORT_100c50b80);
    puVar4 = &DAT_100fcbbb8;
    FUN_1004cead0(&DAT_100fcbbb8,&DAT_100fcbb78,
                  PTR_Foundation__Foundation__URL_>Swift__Encodable_100ea71b8,
                  PTR__Swift__Swift__Array<undefined>_>Swift__Encodable_100eac510);
    Swift::KeyedEncodingContainer::_encode(&local_58,&local_61,puVar2,puVar3,puVar4);
    local_58 = uVar1;
    local_61 = 2;
    puVar3 = &DAT_100fcb568;
    FUN_1000f7830(&DAT_100fcb568,&DAT_100c50360);
    puVar4 = &DAT_100fcbbc0;
    FUN_1004cb1cc(&DAT_100fcbbc0,
                  PTR___protocol_witness_table_for_Swift_String___Swift_Encodable_in_Swift_100eac210
                  ,PTR__Swift__Swift__Array<undefined>_>Swift__Encodable_100eac510);
    Swift::KeyedEncodingContainer::_encodeIfPresent(&local_58,&local_61,puVar2,puVar3,puVar4);
  }
  (**(code **)(lVar5 + 8))(auStack_80 + -extraout_x8,puVar2);
  return;
}



/* Address: 0x1004ca2f0 | FUN_1004ca2f0 */

undefined8 FUN_1004ca2f0(undefined8 param_1)

{
  undefined8 extraout_x8;
  long unaff_x21;
  
  FUN_1004cbdb8();
  if (unaff_x21 != 0) {
    param_1 = extraout_x8;
  }
  return param_1;
}


