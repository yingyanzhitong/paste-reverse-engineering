/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1005501ec | FUN_1005501ec */

void FUN_1005501ec(undefined1 *param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x21;
  
  FUN_100552284();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    *(undefined8 *)(param_1 + 8) = param_3;
    *(undefined8 *)(param_1 + 0x10) = param_4;
  }
  return;
}



/* Address: 0x100550218 | FUN_100550218 */

void FUN_100550218(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  FUN_10054fe14(param_1,*unaff_x20,*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10))
  ;
  return;
}



/* Address: 0x100550234 | FUN_100550234 */

void FUN_100550234(undefined1 *param_1,undefined1 *param_2)

{
  FUN_10055126c(*param_1,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),*param_2,
                *(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
  return;
}



/* Address: 0x10055024c | FUN_10055024c */

void FUN_10055024c(void)

{
  undefined1 *unaff_x20;
  
  FUN_1005716c0(*unaff_x20);
  return;
}



/* Address: 0x100550254 | FUN_100550254 */

void FUN_100550254(Hasher param_1)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  byte bVar6;
  undefined1 *puVar7;
  byte *unaff_x20;
  String SVar8;
  
  bVar6 = *unaff_x20;
  puVar7 = (undefined1 *)0xed000064496e6f69;
  pcVar2 = (char *)0x7461746963696c65;
  if (bVar6 != 4) {
    puVar7 = &DAT_e500000000000000;
    pcVar2 = (char *)0x6174656d5f;
  }
  pcVar1 = (char *)0x6c7275;
  if (bVar6 != 3) {
    pcVar1 = pcVar2;
  }
  puVar5 = (undefined1 *)0xe300000000000000;
  if (bVar6 != 3) {
    puVar5 = puVar7;
  }
  pcVar2 = (char *)0x6567617373656d;
  if (bVar6 != 1) {
    pcVar2 = (char *)0x6574736575716572;
  }
  puVar7 = &DAT_e700000000000000;
  if (bVar6 != 1) {
    puVar7 = (undefined1 *)0xef616d6568635364;
  }
  pcVar3 = (char *)0x65646f6d;
  if (bVar6 != 0) {
    pcVar3 = pcVar2;
  }
  puVar4 = &DAT_e400000000000000;
  if (bVar6 != 0) {
    puVar4 = puVar7;
  }
  if (bVar6 < 3) {
    puVar5 = puVar4;
    pcVar1 = pcVar3;
  }
  SVar8.bridgeObject = puVar5;
  SVar8.str = pcVar1;
  Swift::String::hash(param_1,SVar8);
  _swift_bridgeObjectRelease(puVar5);
  return;
}



/* Address: 0x100550334 | FUN_100550334 */

void FUN_100550334(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  FUN_1005a0a3c(param_1,*unaff_x20);
  return;
}



/* Address: 0x10055033c | FUN_10055033c */

void FUN_10055033c(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_100552488(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Address: 0x100550368 | FUN_100550368 */

void FUN_100550368(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  byte bVar6;
  undefined1 *puVar7;
  byte *unaff_x20;
  
  bVar6 = *unaff_x20;
  puVar7 = (undefined1 *)0xed000064496e6f69;
  uVar2 = 0x7461746963696c65;
  if (bVar6 != 4) {
    puVar7 = &DAT_e500000000000000;
    uVar2 = 0x6174656d5f;
  }
  uVar1 = 0x6c7275;
  if (bVar6 != 3) {
    uVar1 = uVar2;
  }
  puVar5 = (undefined1 *)0xe300000000000000;
  if (bVar6 != 3) {
    puVar5 = puVar7;
  }
  uVar2 = 0x6567617373656d;
  if (bVar6 != 1) {
    uVar2 = 0x6574736575716572;
  }
  puVar7 = &DAT_e700000000000000;
  if (bVar6 != 1) {
    puVar7 = (undefined1 *)0xef616d6568635364;
  }
  uVar3 = 0x65646f6d;
  if (bVar6 != 0) {
    uVar3 = uVar2;
  }
  puVar4 = &DAT_e400000000000000;
  if (bVar6 != 0) {
    puVar4 = puVar7;
  }
  if (bVar6 < 3) {
    puVar5 = puVar4;
    uVar1 = uVar3;
  }
  *param_1 = uVar1;
  param_1[1] = puVar5;
  return;
}



/* Address: 0x10055042c | FUN_10055042c */

undefined1  [16] FUN_10055042c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  byte bVar6;
  undefined1 *puVar7;
  byte *unaff_x20;
  undefined1 auVar8 [16];
  
  bVar6 = *unaff_x20;
  puVar7 = (undefined1 *)0xed000064496e6f69;
  uVar2 = 0x7461746963696c65;
  if (bVar6 != 4) {
    puVar7 = &DAT_e500000000000000;
    uVar2 = 0x6174656d5f;
  }
  uVar1 = 0x6c7275;
  if (bVar6 != 3) {
    uVar1 = uVar2;
  }
  puVar5 = (undefined1 *)0xe300000000000000;
  if (bVar6 != 3) {
    puVar5 = puVar7;
  }
  uVar2 = 0x6567617373656d;
  if (bVar6 != 1) {
    uVar2 = 0x6574736575716572;
  }
  puVar7 = &DAT_e700000000000000;
  if (bVar6 != 1) {
    puVar7 = (undefined1 *)0xef616d6568635364;
  }
  uVar3 = 0x65646f6d;
  if (bVar6 != 0) {
    uVar3 = uVar2;
  }
  puVar4 = &DAT_e400000000000000;
  if (bVar6 != 0) {
    puVar4 = puVar7;
  }
  if (bVar6 < 3) {
    puVar5 = puVar4;
    uVar1 = uVar3;
  }
  auVar8._8_8_ = puVar5;
  auVar8._0_8_ = uVar1;
  return auVar8;
}



/* Address: 0x1005504ec | FUN_1005504ec */

void FUN_1005504ec(undefined1 *param_1,undefined1 param_2)

{
  FUN_100552488();
  *param_1 = param_2;
  return;
}



/* Address: 0x100550510 | FUN_100550510 */

String FUN_100550510(void)

{
  String SVar1;
  
  FUN_100552990();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x100550538 | FUN_100550538 */

String FUN_100550538(void)

{
  String SVar1;
  
  FUN_100552990();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x100550560 | FUN_100550560 */

void FUN_100550560(undefined8 *param_1)

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
  
  FUN_1005524ec(&local_70);
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



/* Address: 0x1005505a8 | FUN_1005505a8 */

void FUN_1005505a8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long extraout_x8;
  code *pcVar9;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar10;
  undefined1 auStack_c0 [8];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  long local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_51;
  
  puVar6 = &DAT_100fcf250;
  FUN_1000f7830(&DAT_100fcf250,&DAT_100c57068);
  lVar10 = *(long *)(puVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_100552990();
  Swift::Encoder::_container();
  uVar8 = *unaff_x20;
  uVar3 = unaff_x20[3];
  uVar1 = unaff_x20[4];
  local_a8 = unaff_x20[5];
  uStack_a0 = unaff_x20[6];
  local_b0 = unaff_x20[7];
  uVar5 = (undefined1)unaff_x20[2];
  if ((long)unaff_x20[2] < 0) {
    local_90 = CONCAT71(local_90._1_7_,1);
    Swift::KeyedEncodingContainer::_encode(uVar8,unaff_x20[1],&local_90,puVar6);
    if (unaff_x21 == 0) {
      local_51 = 0;
      local_90._0_1_ = uVar5;
      FUN_10055181c();
      Swift::KeyedEncodingContainer::_encode(&local_90,&local_51,puVar6,&DAT_100ede670,uVar8);
      local_90._0_1_ = 3;
      Swift::KeyedEncodingContainer::_encode(uVar3,uVar1,&local_90,puVar6);
      local_90 = CONCAT71(local_90._1_7_,4);
      uVar8 = local_a8;
      Swift::KeyedEncodingContainer::_encode(local_a8,uStack_a0,&local_90,puVar6);
      local_90 = local_b0;
      local_51 = 5;
      FUN_1004e02ac();
      Swift::KeyedEncodingContainer::_encodeIfPresent
                (&local_90,&local_51,puVar6,&DAT_100edcda0,uVar8);
    }
    pcVar9 = *(code **)(lVar10 + 8);
  }
  else {
    uVar2 = unaff_x20[8];
    uVar4 = unaff_x20[9];
    local_90 = CONCAT71(local_90._1_7_,1);
    local_98 = lVar10;
    Swift::KeyedEncodingContainer::_encode(uVar8,unaff_x20[1],&local_90,puVar6);
    if (unaff_x21 == 0) {
      local_90 = CONCAT71(local_90._1_7_,uVar5);
      local_51 = 0;
      local_b8 = uVar4;
      FUN_10055181c();
      puVar7 = &local_90;
      Swift::KeyedEncodingContainer::_encodeIfPresent(puVar7,&local_51,puVar6,&DAT_100ede670,uVar8);
      uVar4 = uStack_a0;
      uVar8 = local_b0;
      local_80 = local_a8;
      uStack_78 = uStack_a0;
      local_70 = local_b0;
      local_51 = 2;
      local_90 = uVar3;
      uStack_88 = uVar1;
      uStack_68 = uVar2;
      FUN_10055185c();
      _swift_bridgeObjectRetain(uVar1);
      _swift_bridgeObjectRetain(uVar4);
      _swift_bridgeObjectRetain(uVar8);
      _swift_bridgeObjectRetain(uVar2);
      Swift::KeyedEncodingContainer::_encodeIfPresent
                (&local_90,&local_51,puVar6,&DAT_100ede538,puVar7);
      uVar8 = local_90;
      FUN_1005529d0(local_90,uStack_88,local_80,uStack_78,local_70,uStack_68);
      local_90 = local_b8;
      local_51 = 5;
      FUN_1004e02ac();
      Swift::KeyedEncodingContainer::_encodeIfPresent
                (&local_90,&local_51,puVar6,&DAT_100edcda0,uVar8);
    }
    pcVar9 = *(code **)(local_98 + 8);
  }
  (*pcVar9)(auStack_c0 + -extraout_x8,puVar6);
  return;
}



/* Address: 0x1005508c0 | FUN_1005508c0 */

void FUN_1005508c0(void)

{
  FUN_1005505a8();
  return;
}



/* Address: 0x1005508d4 | FUN_1005508d4 */

undefined * FUN_1005508d4(void)

{
  return &DAT_100ede4a0;
}



/* Address: 0x1005508e0 | FUN_1005508e0 */

undefined1  [16] FUN_1005508e0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x8000000100dad860;
  auVar1._0_8_ = 0xd000000000000022;
  return auVar1;
}



/* Address: 0x1005508fc | FUN_1005508fc */

undefined1  [16] FUN_1005508fc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xed000064496e6f69;
  auVar1._0_8_ = 0x7461746963696c65;
  return auVar1;
}



/* Address: 0x100550920 | FUN_100550920 */

void FUN_100550920(byte *param_1,long param_2,long param_3)

{
  bool bVar1;
  byte bVar2;
  
  if (param_2 == 0x7461746963696c65 && param_3 == -0x12ffff9bb6919097) {
    _swift_bridgeObjectRelease(param_3);
    bVar2 = 0;
  }
  else {
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x7461746963696c65,(_StringGuts)0xed000064496e6f69,
                       (_StringComparisonResult)(__int8)param_2);
    _swift_bridgeObjectRelease(param_3);
    bVar2 = (bVar1 ^ 0xffU) & 1;
  }
  *param_1 = bVar2;
  return;
}



/* Address: 0x1005509ac | FUN_1005509ac */

String FUN_1005509ac(void)

{
  String SVar1;
  
  FUN_100552a20();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x1005509d4 | FUN_1005509d4 */

String FUN_1005509d4(void)

{
  String SVar1;
  
  FUN_100552a20();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x1005509fc | FUN_1005509fc */

void FUN_1005509fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long extraout_x8;
  long lVar2;
  
  puVar1 = &DAT_100fcf260;
  FUN_1000f7830(&DAT_100fcf260,&DAT_100c57070);
  lVar2 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_100552a20();
  Swift::Encoder::_container();
  Swift::KeyedEncodingContainer::_encode(param_2,param_3);
  (**(code **)(lVar2 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,puVar1);
  return;
}



/* Address: 0x100550af0 | FUN_100550af0 */

String FUN_100550af0(char *param_1)

{
  void *pvVar1;
  undefined *puVar2;
  char *pcVar3;
  KeyedDecodingContainer<undefined> KVar4;
  long extraout_x8;
  long unaff_x21;
  long lVar5;
  String SVar6;
  
  puVar2 = &DAT_100fcf270;
  FUN_1000f7830(&DAT_100fcf270,&DAT_100c57078);
  lVar5 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  pvVar1 = *(void **)(param_1 + 0x18);
  pcVar3 = param_1;
  FUN_100004640(param_1,pvVar1);
  SVar6.bridgeObject = pvVar1;
  SVar6.str = pcVar3;
  FUN_100552a20();
  KVar4 = Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    SVar6 = Swift::KeyedDecodingContainer::_decode(KVar4.unknown,puVar2);
    (**(code **)(lVar5 + 8))(&stack0xffffffffffffffb0 + -extraout_x8,puVar2);
    FUN_100004594(param_1);
  }
  else {
    FUN_100004594(param_1);
  }
  return SVar6;
}



/* Address: 0x100550c00 | FUN_100550c00 */

/* WARNING: Removing unreachable block (ram,0x000100550cc4) */

void FUN_100550c00(String *param_1,long param_2)

{
  undefined *puVar1;
  KeyedDecodingContainer<undefined> KVar2;
  long extraout_x8;
  long unaff_x21;
  long lVar3;
  String SVar4;
  
  puVar1 = &DAT_100fcf270;
  FUN_1000f7830(&DAT_100fcf270,&DAT_100c57078);
  lVar3 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_100552a20();
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



/* Address: 0x100550d28 | FUN_100550d28 */

void FUN_100550d28(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long extraout_x8;
  undefined8 *unaff_x20;
  long lVar4;
  
  puVar3 = &DAT_100fcf260;
  FUN_1000f7830(&DAT_100fcf260,&DAT_100c57070);
  lVar4 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_100552a20();
  Swift::Encoder::_container();
  Swift::KeyedEncodingContainer::_encode(uVar1,uVar2);
  (**(code **)(lVar4 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,puVar3);
  return;
}



/* Address: 0x100550e18 | FUN_100550e18 */

String FUN_100550e18(void)

{
  String SVar1;
  
  FUN_100552a60();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x100550e40 | FUN_100550e40 */

String FUN_100550e40(void)

{
  String SVar1;
  
  FUN_100552a60();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x100550e68 | FUN_100550e68 */

void FUN_100550e68(long param_1)

{
  undefined *puVar1;
  long extraout_x8;
  long lVar2;
  
  puVar1 = &DAT_100fcf278;
  FUN_1000f7830(&DAT_100fcf278,&DAT_100c57080);
  lVar2 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_100552a60();
  Swift::Encoder::_container();
  (**(code **)(lVar2 + 8))(&stack0xffffffffffffffb0 + -extraout_x8,puVar1);
  return;
}



/* Address: 0x100550f30 | FUN_100550f30 */

undefined8 FUN_100550f30(undefined8 *param_1,undefined8 *param_2)

{
  bool bVar1;
  ulong uVar2;
  _StringGuts _Var3;
  undefined *puVar4;
  
  _Var3.unknown = (undefined *)param_1[1];
  puVar4 = (undefined *)param_2[1];
  if (_Var3.unknown == (undefined *)0x0) {
    if (puVar4 != (undefined *)0x0) {
      return 0;
    }
  }
  else {
    if (puVar4 == (undefined *)0x0) {
      return 0;
    }
    if (((undefined *)*param_1 != (undefined *)*param_2 || _Var3.unknown != puVar4) &&
       (bVar1 = Swift::_stringCompareWithSmolCheck
                          ((undefined *)*param_1,_Var3,
                           (_StringComparisonResult)(__int8)(undefined *)*param_2), !bVar1)) {
      return 0;
    }
  }
  _Var3.unknown = (undefined *)param_1[3];
  puVar4 = (undefined *)param_2[3];
  if (_Var3.unknown == (undefined *)0x0) {
    if (puVar4 != (undefined *)0x0) {
      return 0;
    }
  }
  else {
    if (puVar4 == (undefined *)0x0) {
      return 0;
    }
    if ((((undefined *)param_1[2] != (undefined *)param_2[2]) || (_Var3.unknown != puVar4)) &&
       (bVar1 = Swift::_stringCompareWithSmolCheck
                          ((undefined *)param_1[2],_Var3,
                           (_StringComparisonResult)(__int8)(undefined *)param_2[2]), !bVar1)) {
      return 0;
    }
  }
  uVar2 = param_1[4];
  FUN_100523efc(uVar2,param_2[4]);
  if ((uVar2 & 1) != 0) {
    uVar2 = param_1[5];
    if (uVar2 == 0) {
      if (param_2[5] == 0) {
        return 1;
      }
    }
    else if ((param_2[5] != 0) && (FUN_1004827e8(), (uVar2 & 1) != 0)) {
      return 1;
    }
  }
  return 0;
}



/* Address: 0x100550ffc | FUN_100550ffc */

void FUN_100550ffc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf1a0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c580b8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c580b8,&DAT_100eded70);
  DAT_100fcf1a0 = pTVar1;
  return;
}



/* Address: 0x10055103c | FUN_10055103c */

void FUN_10055103c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf1a8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c57150;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c57150,&DAT_100ede5e0);
  DAT_100fcf1a8 = pTVar1;
  return;
}



/* Address: 0x10055107c | FUN_10055107c */

undefined8 FUN_10055107c(undefined8 *param_1,long *param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long local_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long local_70;
  long lStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (((undefined *)*param_1 == (undefined *)*param_2 &&
       (undefined *)param_1[1] == (undefined *)param_2[1]) ||
     (bVar1 = Swift::_stringCompareWithSmolCheck
                        ((undefined *)*param_1,(undefined *)param_1[1],
                         (_StringComparisonResult)(__int8)(undefined *)*param_2), bVar1)) {
    if (*(char *)(param_1 + 2) == '\x02') {
      if ((char)param_2[2] != '\x02') {
        return 0;
      }
    }
    else if (*(char *)(param_1 + 2) != (char)param_2[2]) {
      return 0;
    }
    uStack_58 = param_1[4];
    local_60 = param_1[3];
    uStack_48 = param_1[6];
    uStack_50 = param_1[5];
    uStack_38 = param_1[8];
    local_40 = param_1[7];
    lStack_88 = param_2[4];
    local_90 = param_2[3];
    lStack_78 = param_2[6];
    lStack_80 = param_2[5];
    lStack_68 = param_2[8];
    local_70 = param_2[7];
    puVar2 = &local_60;
    FUN_100550f30(puVar2,&local_90);
    if (((ulong)puVar2 & 1) != 0) {
      uVar5 = param_1[9];
      lVar4 = param_2[9];
      if (uVar5 == 0) {
        if (lVar4 == 0) {
          return 1;
        }
      }
      else if (lVar4 != 0) {
        _swift_bridgeObjectRetain(lVar4);
        uVar3 = uVar5;
        _swift_bridgeObjectRetain();
        FUN_100523efc();
        _swift_bridgeObjectRelease(uVar5);
        _swift_bridgeObjectRelease(lVar4);
        if ((uVar3 & 1) != 0) {
          return 1;
        }
      }
    }
  }
  return 0;
}



/* Address: 0x10055117c | FUN_10055117c */

undefined8 FUN_10055117c(undefined8 *param_1,long *param_2)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  if ((((undefined *)*param_1 == (undefined *)*param_2 &&
        (undefined *)param_1[1] == (undefined *)param_2[1]) ||
      (bVar1 = Swift::_stringCompareWithSmolCheck
                         ((undefined *)*param_1,(undefined *)param_1[1],
                          (_StringComparisonResult)(__int8)(undefined *)*param_2), bVar1)) &&
     (*(char *)(param_1 + 2) == (char)param_2[2])) {
    if (((undefined *)param_1[3] == (undefined *)param_2[3] &&
         (undefined *)param_1[4] == (undefined *)param_2[4]) ||
       (bVar1 = Swift::_stringCompareWithSmolCheck
                          ((undefined *)param_1[3],(undefined *)param_1[4],
                           (_StringComparisonResult)(__int8)(undefined *)param_2[3]), bVar1)) {
      if ((((undefined *)param_1[5] == (undefined *)param_2[5]) &&
          ((undefined *)param_1[6] == (undefined *)param_2[6])) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((undefined *)param_1[5],(undefined *)param_1[6],
                             (_StringComparisonResult)(__int8)(undefined *)param_2[5]), bVar1)) {
        uVar4 = param_1[7];
        lVar3 = param_2[7];
        if (uVar4 == 0) {
          if (lVar3 == 0) {
            return 1;
          }
        }
        else if (lVar3 != 0) {
          _swift_bridgeObjectRetain(lVar3);
          uVar2 = uVar4;
          _swift_bridgeObjectRetain();
          FUN_100523efc();
          _swift_bridgeObjectRelease(uVar4);
          _swift_bridgeObjectRelease(lVar3);
          if ((uVar2 & 1) != 0) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}



/* Address: 0x10055126c | FUN_10055126c */

undefined8
FUN_10055126c(char param_1,ulong param_2,ulong param_3,char param_4,long param_5,long param_6)

{
  ulong uVar1;
  
  if (param_1 != param_4) {
    return 0;
  }
  if (param_2 == 0) {
    if (param_5 != 0) {
      return 0;
    }
  }
  else {
    if (param_5 == 0) {
      return 0;
    }
    _swift_bridgeObjectRetain(param_5);
    uVar1 = param_2;
    _swift_bridgeObjectRetain();
    FUN_100523efc();
    _swift_bridgeObjectRelease(param_2);
    _swift_bridgeObjectRelease(param_5);
    if ((uVar1 & 1) == 0) {
      return 0;
    }
  }
  if (param_3 == 0) {
    if (param_6 == 0) {
      return 1;
    }
  }
  else if (param_6 != 0) {
    _swift_bridgeObjectRetain(param_6);
    uVar1 = param_3;
    _swift_bridgeObjectRetain();
    FUN_100523efc();
    _swift_bridgeObjectRelease(param_3);
    _swift_bridgeObjectRelease(param_6);
    if ((uVar1 & 1) != 0) {
      return 1;
    }
  }
  return 0;
}



/* Address: 0x100551348 | FUN_100551348 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100551384 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ulong FUN_100551348(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  FUN_1000f7830(&DAT_100fcb810,&DAT_100c51eb0);
  _swift_initStaticObject();
  uVar1 = Swift::_findStringSwitchCase(param_1,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  if (4 < uVar1) {
    uVar1 = 5;
  }
  return uVar1;
}



/* Address: 0x1005513ac | FUN_1005513ac */

/* WARNING: Removing unreachable block (ram,0x000100551638) */
/* WARNING: Removing unreachable block (ram,0x0001005516a4) */
/* WARNING: Removing unreachable block (ram,0x000100551514) */
/* WARNING: Removing unreachable block (ram,0x0001005515ac) */
/* WARNING: Removing unreachable block (ram,0x000100551478) */
/* WARNING: Removing unreachable block (ram,0x0001005514c0) */

void FUN_1005513ac(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long extraout_x8;
  long unaff_x21;
  long lVar11;
  undefined1 auStack_90 [8];
  undefined8 *local_88;
  undefined8 local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 local_61;
  undefined1 local_58;
  undefined7 uStack_57;
  
  puVar3 = &DAT_100fcf780;
  FUN_1000f7830(&DAT_100fcf780,&DAT_100c58130);
  lVar11 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_100550ffc();
  Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    local_58 = 0;
    puVar4 = &local_58;
    puVar9 = puVar3;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    local_58 = 1;
    puVar5 = &local_58;
    puVar10 = puVar3;
    local_70 = puVar4;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    puVar6 = &DAT_100fcc380;
    local_78 = puVar5;
    FUN_1000f7830(&DAT_100fcc380,&DAT_100c54e90);
    local_61 = 2;
    puVar7 = &DAT_100fcc470;
    FUN_1004dbd24(&DAT_100fcc470,FUN_1004dbda0,
                  PTR___protocol_witness_table_for_Swift_String___Swift_Decodable_in_Swift_100eac240
                  ,PTR__Swift__Swift__Dictionary<undefined,undefined>_>Swift__Decodable_100eabe78);
    Swift::KeyedDecodingContainer::_decode(&local_58,puVar6,&local_61,puVar3,puVar6,puVar7);
    local_80 = CONCAT71(uStack_57,local_58);
    puVar6 = &DAT_100fcb568;
    FUN_1000f7830(&DAT_100fcb568,&DAT_100c50360);
    local_61 = 3;
    puVar8 = &DAT_100fcbe68;
    FUN_1004cb1cc(&DAT_100fcbe68,
                  PTR___protocol_witness_table_for_Swift_String___Swift_Decodable_in_Swift_100eac240
                  ,PTR__Swift__Swift__Array<undefined>_>Swift__Decodable_100eac538);
    Swift::KeyedDecodingContainer::_decodeIfPresent(&local_58,puVar6,&local_61,puVar3,puVar6,puVar8)
    ;
    uVar1 = CONCAT71(uStack_57,local_58);
    local_58 = 4;
    local_88 = param_1;
    FUN_1005542e8();
    Swift::KeyedDecodingContainer::_decode(&DAT_100ede5e0,&local_58,puVar3,&DAT_100ede5e0,puVar6);
    (**(code **)(lVar11 + 8))(auStack_90 + -extraout_x8,puVar3);
    _swift_bridgeObjectRetain(uVar1);
    _swift_bridgeObjectRetain(puVar9);
    _swift_bridgeObjectRetain(puVar10);
    uVar2 = local_80;
    _swift_bridgeObjectRetain(local_80);
    FUN_100004594(param_2);
    _swift_bridgeObjectRelease(uVar1);
    _swift_bridgeObjectRelease(uVar2);
    _swift_bridgeObjectRelease(puVar10);
    _swift_bridgeObjectRelease(puVar9);
    *local_88 = local_70;
    local_88[1] = puVar9;
    local_88[2] = local_78;
    local_88[3] = puVar10;
    local_88[4] = uVar2;
    local_88[5] = uVar1;
  }
  else {
    FUN_100004594(param_2);
    _swift_bridgeObjectRelease(0);
    _swift_bridgeObjectRelease(0);
    _swift_bridgeObjectRelease(0);
  }
  return;
}



/* Address: 0x100551714 | FUN_100551714 */

undefined8 FUN_100551714(undefined8 param_1,undefined8 param_2)

{
  FUN_1005530e8(param_2,param_1,&DAT_100ede538);
  return param_2;
}



/* Address: 0x100551748 | FUN_100551748 */

undefined8 FUN_100551748(undefined8 param_1,undefined8 param_2)

{
  FUN_1005531f8(param_2,param_1,&DAT_100ede538);
  return param_2;
}



/* Address: 0x10055177c | FUN_10055177c */

undefined8 FUN_10055177c(undefined8 param_1,undefined8 param_2)

{
  FUN_1005536c8(param_2,param_1,&DAT_100ede798);
  return param_2;
}



/* Address: 0x1005517b0 | FUN_1005517b0 */

undefined8 FUN_1005517b0(undefined8 param_1)

{
  FUN_100553680(param_1,&DAT_100ede798);
  return param_1;
}



/* Address: 0x1005517dc | FUN_1005517dc */

void FUN_1005517dc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf210 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c58068;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c58068,&DAT_100edece0);
  DAT_100fcf210 = pTVar1;
  return;
}



/* Address: 0x10055181c | FUN_10055181c */

void FUN_10055181c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf218 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c572f8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c572f8,&DAT_100ede670);
  DAT_100fcf218 = pTVar1;
  return;
}



/* Address: 0x10055185c | FUN_10055185c */

void FUN_10055185c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf220 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c571e0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c571e0,&DAT_100ede538);
  DAT_100fcf220 = pTVar1;
  return;
}



/* Address: 0x10055189c | FUN_10055189c */

undefined4 FUN_10055189c(long param_1,undefined1 *param_2)

{
  bool bVar1;
  _StringComparisonResult expecting;
  
  if (param_1 != 0x6567617373656d || param_2 != &DAT_e700000000000000) {
    expecting.value = (__int8)param_1;
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x6567617373656d,(_StringGuts)0xe700000000000000,expecting);
    if (!bVar1) {
      if (((param_1 == 0x65646f6d) && (param_2 == &DAT_e400000000000000)) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x65646f6d,(_StringGuts)0xe400000000000000,expecting),
         bVar1)) {
        _swift_bridgeObjectRelease(param_2);
        return 1;
      }
      if (((param_1 != 0x6574736575716572) || (param_2 != (undefined1 *)0xef616d6568635364)) &&
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x6574736575716572,(_StringGuts)0xef616d6568635364,
                             expecting), !bVar1)) {
        if ((param_1 == 0x6174656d5f) && (param_2 == &DAT_e500000000000000)) {
          _swift_bridgeObjectRelease(&DAT_e500000000000000);
          return 3;
        }
        bVar1 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)0x6174656d5f,(_StringGuts)0xe500000000000000,expecting);
        _swift_bridgeObjectRelease(param_2);
        if (bVar1) {
          return 3;
        }
        return 4;
      }
      _swift_bridgeObjectRelease(param_2);
      return 2;
    }
  }
  _swift_bridgeObjectRelease(param_2);
  return 0;
}



/* Address: 0x100551a00 | FUN_100551a00 */

/* WARNING: Removing unreachable block (ram,0x000100551ba4) */
/* WARNING: Removing unreachable block (ram,0x000100551c58) */
/* WARNING: Removing unreachable block (ram,0x000100551bb8) */
/* WARNING: Removing unreachable block (ram,0x000100551bcc) */
/* WARNING: Removing unreachable block (ram,0x000100551adc) */

void FUN_100551a00(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  long extraout_x8;
  long unaff_x21;
  long lVar5;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined1 local_170 [80];
  char *local_120;
  void *pvStack_118;
  undefined8 uStack_110;
  char *local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 local_c9;
  undefined8 local_c8;
  String local_c0;
  undefined1 local_b0;
  undefined7 uStack_af;
  char *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  puVar1 = &DAT_100fcf778;
  FUN_1000f7830(&DAT_100fcf778,&DAT_100c58128);
  lVar5 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_1005517dc();
  Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    local_120 = (char *)((ulong)local_120 & 0xffffffffffffff00);
    local_c0 = Swift::KeyedDecodingContainer::_decode(&local_120,puVar1);
    pcVar2 = local_c0.str;
    local_170[0] = 1;
    FUN_100554228();
    puVar3 = &DAT_100ede670;
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (&local_120,&DAT_100ede670,local_170,puVar1,&DAT_100ede670,pcVar2);
    local_b0 = local_120._0_1_;
    local_170[0] = 2;
    FUN_100554268();
    puVar4 = &DAT_100ede538;
    Swift::KeyedDecodingContainer::_decode
              (&local_120,&DAT_100ede538,local_170,puVar1,&DAT_100ede538,puVar3);
    local_180 = uStack_f8;
    uStack_178 = pvStack_118;
    uStack_a0 = pvStack_118;
    local_a8 = local_120;
    local_190 = local_100;
    uStack_188 = local_108;
    uStack_90 = local_108;
    local_98 = uStack_110;
    local_88 = local_100;
    local_80 = uStack_f8;
    local_c9 = 3;
    FUN_1004e16ac();
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (&local_c8,&DAT_100edcda0,&local_c9,puVar1,&DAT_100edcda0,puVar4);
    (**(code **)(lVar5 + 8))((long)&local_190 - extraout_x8,puVar1);
    uStack_78 = local_c8;
    uStack_f8 = local_98;
    local_100 = uStack_a0;
    uStack_e8 = local_88;
    uStack_f0 = uStack_90;
    uStack_110 = CONCAT71(uStack_af,local_b0);
    pvStack_118 = local_c0.bridgeObject;
    local_120 = local_c0.str;
    local_108 = local_a8;
    uStack_d8 = local_c8;
    local_e0 = local_80;
    FUN_10055177c(&local_120,local_170);
    FUN_100004594(param_2);
    FUN_1005517b0(&local_c0);
    param_1[5] = uStack_f8;
    param_1[4] = local_100;
    param_1[7] = uStack_e8;
    param_1[6] = uStack_f0;
    param_1[9] = uStack_d8;
    param_1[8] = local_e0;
    param_1[1] = pvStack_118;
    *param_1 = local_120;
    param_1[3] = local_108;
    param_1[2] = uStack_110;
  }
  else {
    FUN_100004594(param_2);
  }
  return;
}



/* Address: 0x100551ce0 | FUN_100551ce0 */

undefined8 FUN_100551ce0(undefined8 param_1,undefined8 param_2)

{
  FUN_100553908(param_2,param_1,&DAT_100ede820);
  return param_2;
}



/* Address: 0x100551d14 | FUN_100551d14 */

undefined8 FUN_100551d14(undefined8 param_1)

{
  FUN_1005538d0(param_1,&DAT_100ede820);
  return param_1;
}



/* Address: 0x100551d40 | FUN_100551d40 */

void FUN_100551d40(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf230 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c58018;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c58018,&DAT_100edec50);
  DAT_100fcf230 = pTVar1;
  return;
}



/* Address: 0x100551d80 | FUN_100551d80 */

undefined4 FUN_100551d80(long param_1,undefined1 *param_2)

{
  bool bVar1;
  _StringComparisonResult expecting;
  
  if (param_1 != 0x6567617373656d || param_2 != &DAT_e700000000000000) {
    expecting.value = (__int8)param_1;
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x6567617373656d,(_StringGuts)0xe700000000000000,expecting);
    if (!bVar1) {
      if (((param_1 == 0x65646f6d) && (param_2 == &DAT_e400000000000000)) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x65646f6d,(_StringGuts)0xe400000000000000,expecting),
         bVar1)) {
        _swift_bridgeObjectRelease(param_2);
        return 1;
      }
      if (((param_1 != 0x6c7275) || (param_2 != (undefined1 *)0xe300000000000000)) &&
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x6c7275,(_StringGuts)0xe300000000000000,expecting),
         !bVar1)) {
        if (((param_1 != 0x7461746963696c65) || (param_2 != (undefined1 *)0xed000064496e6f69)) &&
           (bVar1 = Swift::_stringCompareWithSmolCheck
                              ((_StringGuts)0x7461746963696c65,(_StringGuts)0xed000064496e6f69,
                               expecting), !bVar1)) {
          if ((param_1 == 0x6174656d5f) && (param_2 == &DAT_e500000000000000)) {
            _swift_bridgeObjectRelease(&DAT_e500000000000000);
            return 4;
          }
          bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x6174656d5f,(_StringGuts)0xe500000000000000,expecting);
          _swift_bridgeObjectRelease(param_2);
          if (bVar1) {
            return 4;
          }
          return 5;
        }
        _swift_bridgeObjectRelease(param_2);
        return 3;
      }
      _swift_bridgeObjectRelease(param_2);
      return 2;
    }
  }
  _swift_bridgeObjectRelease(param_2);
  return 0;
}



/* Address: 0x100551f30 | FUN_100551f30 */

/* WARNING: Removing unreachable block (ram,0x000100552124) */
/* WARNING: Removing unreachable block (ram,0x0001005520b0) */
/* WARNING: Removing unreachable block (ram,0x000100552188) */
/* WARNING: Removing unreachable block (ram,0x0001005520c8) */
/* WARNING: Removing unreachable block (ram,0x0001005520dc) */
/* WARNING: Removing unreachable block (ram,0x0001005520e4) */
/* WARNING: Removing unreachable block (ram,0x0001005520e8) */
/* WARNING: Removing unreachable block (ram,0x000100552000) */

void FUN_100551f30(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  char *pcVar2;
  long extraout_x8;
  long unaff_x21;
  long lVar3;
  undefined1 auStack_140 [8];
  void *local_138;
  undefined1 local_130 [64];
  char *local_f0;
  void *pvStack_e8;
  undefined8 uStack_e0;
  char *pcStack_d8;
  void *local_d0;
  char *pcStack_c8;
  void *pvStack_c0;
  undefined8 uStack_b8;
  undefined1 local_a9;
  String local_a8;
  undefined1 local_98;
  undefined7 uStack_97;
  String SStack_90;
  String SStack_80;
  undefined8 uStack_70;
  undefined8 local_58;
  
  puVar1 = &DAT_100fcf770;
  FUN_1000f7830(&DAT_100fcf770,&DAT_100c58120);
  lVar3 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_100551d40();
  Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    local_f0 = (char *)((ulong)local_f0 & 0xffffffffffffff00);
    local_a8 = Swift::KeyedDecodingContainer::_decode(&local_f0,puVar1);
    pcVar2 = local_a8.str;
    local_130[0] = 1;
    FUN_100554228();
    Swift::KeyedDecodingContainer::_decode
              (&local_f0,&DAT_100ede670,local_130,puVar1,&DAT_100ede670,pcVar2);
    local_98 = local_f0._0_1_;
    local_f0._0_1_ = 2;
    SStack_90 = Swift::KeyedDecodingContainer::_decode(&local_f0,puVar1);
    local_f0 = (char *)CONCAT71(local_f0._1_7_,3);
    SStack_80 = Swift::KeyedDecodingContainer::_decode(&local_f0,puVar1);
    local_138 = SStack_80.bridgeObject;
    pcVar2 = SStack_80.str;
    local_a9 = 4;
    FUN_1004e16ac();
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (&local_58,&DAT_100edcda0,&local_a9,puVar1,&DAT_100edcda0,pcVar2);
    (**(code **)(lVar3 + 8))(auStack_140 + -extraout_x8,puVar1);
    uStack_70 = local_58;
    uStack_e0 = CONCAT71(uStack_97,local_98);
    pvStack_e8 = local_a8.bridgeObject;
    local_f0 = local_a8.str;
    pcStack_d8 = SStack_90.str;
    pcStack_c8 = SStack_80.str;
    local_d0 = SStack_90.bridgeObject;
    uStack_b8 = local_58;
    pvStack_c0 = SStack_80.bridgeObject;
    FUN_100551ce0(&local_f0,local_130);
    FUN_100004594(param_2);
    FUN_100551d14(&local_a8);
    param_1[1] = pvStack_e8;
    *param_1 = local_f0;
    param_1[3] = pcStack_d8;
    param_1[2] = uStack_e0;
    param_1[5] = pcStack_c8;
    param_1[4] = local_d0;
    param_1[7] = uStack_b8;
    param_1[6] = pvStack_c0;
  }
  else {
    FUN_100004594(param_2);
  }
  return;
}



/* Address: 0x100552204 | FUN_100552204 */

void FUN_100552204(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf240 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c57fc8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c57fc8,&DAT_100edebc0);
  DAT_100fcf240 = pTVar1;
  return;
}



/* Address: 0x100552244 | FUN_100552244 */

void FUN_100552244(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf248 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c575c0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c575c0,&DAT_100ede950);
  DAT_100fcf248 = pTVar1;
  return;
}



/* Address: 0x100552284 | FUN_100552284 */

/* WARNING: Removing unreachable block (ram,0x0001005523d8) */

ulong FUN_100552284(long param_1)

{
  undefined *puVar1;
  KeyedDecodingContainer<undefined> KVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long extraout_x8;
  long unaff_x21;
  ulong uVar5;
  long lVar6;
  byte local_60 [15];
  undefined1 local_51;
  
  puVar1 = &DAT_100fcf6f0;
  FUN_1000f7830(&DAT_100fcf6f0,&DAT_100c58118);
  lVar6 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar5 = *(ulong *)(param_1 + 0x18);
  FUN_100004640(param_1,uVar5);
  FUN_100552204();
  KVar2 = Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    local_51 = 0;
    FUN_1005542a8();
    Swift::KeyedDecodingContainer::_decode
              (local_60,&DAT_100ede950,&local_51,puVar1,&DAT_100ede950,KVar2.unknown);
    uVar5 = (ulong)local_60[0];
    puVar3 = &DAT_100fcc380;
    FUN_1000f7830(&DAT_100fcc380,&DAT_100c54e90);
    local_51 = 1;
    puVar4 = &DAT_100fcc470;
    FUN_1004dbd24(&DAT_100fcc470,FUN_1004dbda0,
                  PTR___protocol_witness_table_for_Swift_String___Swift_Decodable_in_Swift_100eac240
                  ,PTR__Swift__Swift__Dictionary<undefined,undefined>_>Swift__Decodable_100eabe78);
    Swift::KeyedDecodingContainer::_decodeIfPresent(local_60,puVar3,&local_51,puVar1,puVar3,puVar4);
    local_51 = 2;
    FUN_1004e16ac();
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (local_60,&DAT_100edcda0,&local_51,puVar1,&DAT_100edcda0,puVar3);
    (**(code **)(lVar6 + 8))(local_60 + -extraout_x8,puVar1);
    FUN_100004594(param_1);
  }
  else {
    FUN_100004594(param_1);
    _swift_bridgeObjectRelease(0);
  }
  return uVar5;
}



/* Address: 0x100552488 | FUN_100552488 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001005524c4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ulong FUN_100552488(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  FUN_1000f7830(&DAT_100fcb810,&DAT_100c51eb0);
  _swift_initStaticObject();
  uVar1 = Swift::_findStringSwitchCase(param_1,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  if (5 < uVar1) {
    uVar1 = 6;
  }
  return uVar1;
}



/* Address: 0x1005524ec | FUN_1005524ec */

/* WARNING: Removing unreachable block (ram,0x000100552738) */
/* WARNING: Removing unreachable block (ram,0x0001005525e0) */
/* WARNING: Removing unreachable block (ram,0x0001005527b0) */
/* WARNING: Removing unreachable block (ram,0x000100552678) */
/* WARNING: Removing unreachable block (ram,0x000100552828) */
/* WARNING: Removing unreachable block (ram,0x0001005526f4) */
/* WARNING: Removing unreachable block (ram,0x00010055284c) */

void FUN_1005524ec(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  KeyedDecodingContainer<undefined> KVar2;
  char *pcVar3;
  undefined *puVar4;
  long extraout_x8;
  long unaff_x21;
  long lVar5;
  long lVar6;
  ulong uVar7;
  String SVar8;
  String SVar9;
  char *local_1c0;
  char *pcStack_1b8;
  long local_1b0;
  String local_1a8;
  void *pvStack_198;
  char *local_190;
  char *pcStack_188;
  char *local_180;
  void *pvStack_178;
  long local_168;
  undefined1 auStack_160 [80];
  char *local_110;
  void *pvStack_108;
  byte local_100;
  char *local_f8;
  char *pcStack_f0;
  char *local_e8;
  void *pvStack_e0;
  long local_d8;
  undefined *puStack_d0;
  long local_c8;
  char *local_c0;
  char *pcStack_b8;
  byte local_b0;
  undefined7 uStack_af;
  char *local_a8;
  char *local_a0;
  char *local_98;
  void *pvStack_90;
  long local_88;
  undefined *puStack_80;
  long local_78;
  long local_70 [2];
  undefined1 local_53;
  undefined1 local_52;
  byte local_51;
  
  puVar1 = &DAT_100fcf6d8;
  FUN_1000f7830(&DAT_100fcf6d8,&DAT_100c58110);
  lVar5 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = (long)&local_1c0 - extraout_x8;
  local_168 = param_2;
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_100552990();
  KVar2 = Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    local_52 = 0;
    FUN_100554228();
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (&local_51,&DAT_100ede670,&local_52,puVar1,&DAT_100ede670,KVar2.unknown);
    if (local_51 == 1) {
      local_c0._0_1_ = 1;
      SVar8 = Swift::KeyedDecodingContainer::_decode(&local_c0,puVar1);
      local_180 = SVar8.str;
      local_c0._0_1_ = 3;
      SVar9 = Swift::KeyedDecodingContainer::_decode(&local_c0,puVar1);
      local_190 = SVar9.str;
      local_c0 = (char *)CONCAT71(local_c0._1_7_,4);
      local_1a8 = Swift::KeyedDecodingContainer::_decode(&local_c0,puVar1);
      pcVar3 = local_1a8.str;
      local_53 = 5;
      FUN_1004e16ac();
      Swift::KeyedDecodingContainer::_decodeIfPresent
                (local_70,&DAT_100edcda0,&local_53,puVar1,&DAT_100edcda0,pcVar3);
      (**(code **)(lVar5 + 8))(lVar6,puVar1);
      local_110 = local_180;
      local_100 = 1;
      local_f8 = local_190;
      local_e8 = local_1a8.str;
      pvStack_e0 = local_1a8.bridgeObject;
      local_d8 = local_70[0];
      local_c0 = local_180;
      local_b0 = 1;
      local_a8 = local_190;
      local_98 = local_1a8.str;
      pvStack_90 = local_1a8.bridgeObject;
      local_88 = local_70[0];
      pvStack_108 = SVar8.bridgeObject;
      pcStack_f0 = SVar9.bridgeObject;
      pcStack_b8 = SVar8.bridgeObject;
      local_a0 = SVar9.bridgeObject;
      FUN_100551ce0(&local_110,auStack_160);
      FUN_100551d14(&local_c0);
      uVar7 = (ulong)local_100 | 0x8000000000000000;
    }
    else {
      local_c0 = (char *)CONCAT71(local_c0._1_7_,1);
      SVar8 = Swift::KeyedDecodingContainer::_decode(&local_c0,puVar1);
      pcVar3 = SVar8.str;
      local_110 = (char *)CONCAT71(local_110._1_7_,2);
      local_180 = pcVar3;
      FUN_100554268();
      puVar4 = &DAT_100ede538;
      Swift::KeyedDecodingContainer::_decode
                (&local_c0,&DAT_100ede538,&local_110,puVar1,&DAT_100ede538,pcVar3);
      local_1c0 = (char *)CONCAT71(uStack_af,local_b0);
      pcStack_1b8 = local_c0;
      local_1a8.str = pcStack_b8;
      local_1a8.bridgeObject = local_a8;
      local_1b0 = (long)local_a0;
      local_190 = local_98;
      local_53 = 5;
      FUN_1004e16ac();
      Swift::KeyedDecodingContainer::_decodeIfPresent
                (local_70,&DAT_100edcda0,&local_53,puVar1,&DAT_100edcda0,puVar4);
      (**(code **)(lVar5 + 8))(lVar6,puVar1);
      local_110 = local_180;
      local_100 = local_51;
      local_f8 = pcStack_1b8;
      pcStack_f0 = local_1a8.str;
      local_e8 = local_1c0;
      pvStack_e0 = local_1a8.bridgeObject;
      local_d8 = local_1b0;
      puStack_d0 = local_190;
      local_c8 = local_70[0];
      local_c0 = local_180;
      local_b0 = local_51;
      local_a8 = pcStack_1b8;
      local_a0 = local_1a8.str;
      local_98 = local_1c0;
      pvStack_90 = local_1a8.bridgeObject;
      local_88 = local_1b0;
      puStack_80 = local_190;
      local_78 = local_70[0];
      pvStack_108 = SVar8.bridgeObject;
      pcStack_b8 = SVar8.bridgeObject;
      FUN_10055177c(&local_110,auStack_160);
      FUN_1005517b0(&local_c0);
      uVar7 = (ulong)local_100;
      puVar1 = puStack_d0;
      lVar6 = local_c8;
    }
    lVar5 = local_d8;
    pvStack_198 = pvStack_e0;
    local_190 = local_f8;
    pcStack_188 = pcStack_f0;
    local_180 = local_110;
    pvStack_178 = pvStack_108;
    local_1a8.bridgeObject = local_e8;
    FUN_100004594(local_168);
    param_1[1] = pvStack_178;
    *param_1 = local_180;
    param_1[2] = uVar7;
    param_1[4] = pcStack_188;
    param_1[3] = local_190;
    param_1[6] = pvStack_198;
    param_1[5] = local_1a8.bridgeObject;
    param_1[7] = lVar5;
    param_1[8] = puVar1;
    param_1[9] = lVar6;
  }
  else {
    FUN_100004594(local_168);
  }
  return;
}



/* Address: 0x100552990 | FUN_100552990 */

void FUN_100552990(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf258 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c57f78;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c57f78,&DAT_100edeb30);
  DAT_100fcf258 = pTVar1;
  return;
}



/* Address: 0x1005529d0 | FUN_1005529d0 */

void FUN_1005529d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  if (param_5 != 0) {
    _swift_bridgeObjectRelease(param_5);
    _swift_bridgeObjectRelease(param_2);
    _swift_bridgeObjectRelease(param_4);
    _swift_bridgeObjectRelease(param_6);
    return;
  }
  return;
}



/* Address: 0x100552a20 | FUN_100552a20 */

void FUN_100552a20(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf268 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c57f28;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c57f28,&DAT_100edeaa0);
  DAT_100fcf268 = pTVar1;
  return;
}



/* Address: 0x100552a60 | FUN_100552a60 */

void FUN_100552a60(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf280 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c57ed8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c57ed8,&DAT_100edea10);
  DAT_100fcf280 = pTVar1;
  return;
}



/* Address: 0x100552aa0 | thunk_FUN_100552aa4 */

void thunk_FUN_100552aa4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf288 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c57088;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c57088,&DAT_100ede5e0);
  DAT_100fcf288 = pTVar1;
  return;
}



/* Address: 0x100552aa4 | FUN_100552aa4 */

void FUN_100552aa4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf288 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c57088;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c57088,&DAT_100ede5e0);
  DAT_100fcf288 = pTVar1;
  return;
}



/* Address: 0x100552ae4 | thunk_FUN_100552ae8 */

void thunk_FUN_100552ae8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf290 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c57208;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c57208,&DAT_100ede538);
  DAT_100fcf290 = pTVar1;
  return;
}



/* Address: 0x100552ae8 | FUN_100552ae8 */

void FUN_100552ae8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf290 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c57208;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c57208,&DAT_100ede538);
  DAT_100fcf290 = pTVar1;
  return;
}



/* Address: 0x100552b28 | thunk_FUN_100552b2c */

void thunk_FUN_100552b2c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf298 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c57230;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c57230,&DAT_100ede670);
  DAT_100fcf298 = pTVar1;
  return;
}


