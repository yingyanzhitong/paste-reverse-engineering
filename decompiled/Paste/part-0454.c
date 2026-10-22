/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100573688 | switchD_10057357c::caseD_b0 */

void switchD_10057357c::caseD_b0(void)

{
  FUN_100571dc0();
  return;
}



/* Address: 0x10057369c | FUN_10057369c */

uint FUN_10057369c(undefined8 *param_1,undefined8 *param_2)

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
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  uVar1 = 0;
  uStack_88 = param_1[5];
  local_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  local_70 = param_1[8];
  uStack_a8 = param_1[1];
  local_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_38 = param_2[5];
  local_40 = param_2[4];
  uStack_28 = param_2[7];
  uStack_30 = param_2[6];
  local_20 = param_2[8];
  uStack_58 = param_2[1];
  local_60 = *param_2;
  uStack_48 = param_2[3];
  uStack_50 = param_2[2];
  FUN_100575bd4(&local_b0,&local_60);
  return uVar1 & 1;
}



/* Address: 0x1005736f4 | FUN_1005736f4 */

void FUN_1005736f4(undefined8 param_1,Hasher param_2)

{
  char *pcVar1;
  byte *unaff_x20;
  String SVar2;
  undefined1 auStack_68 [72];
  
  pcVar1 = (char *)(ulong)*unaff_x20;
  Swift::Hasher::init(0);
  FUN_100573554();
  SVar2.bridgeObject = param_2.unknown;
  SVar2.str = pcVar1;
  Swift::String::hash((Hasher)auStack_68,SVar2);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(param_2);
  return;
}



/* Address: 0x100573754 | FUN_100573754 */

void FUN_100573754(Hasher param_1,void *param_2)

{
  char *pcVar1;
  byte *unaff_x20;
  String SVar2;
  
  pcVar1 = (char *)(ulong)*unaff_x20;
  FUN_100573554();
  SVar2.bridgeObject = param_2;
  SVar2.str = pcVar1;
  Swift::String::hash(param_1,SVar2);
  _swift_bridgeObjectRelease(param_2);
  return;
}



/* Address: 0x100573794 | FUN_100573794 */

void FUN_100573794(__int64 param_1,Hasher param_2)

{
  char *pcVar1;
  byte *unaff_x20;
  String SVar2;
  undefined1 auStack_68 [72];
  
  pcVar1 = (char *)(ulong)*unaff_x20;
  Swift::Hasher::init(param_1);
  FUN_100573554();
  SVar2.bridgeObject = param_2.unknown;
  SVar2.str = pcVar1;
  Swift::String::hash((Hasher)auStack_68,SVar2);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(param_2);
  return;
}



/* Address: 0x1005737f0 | FUN_1005737f0 */

void FUN_1005737f0(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1005772c8(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Address: 0x10057381c | FUN_10057381c */

void FUN_10057381c(ulong *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  byte *unaff_x20;
  
  uVar1 = (ulong)*unaff_x20;
  FUN_100573554();
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}



/* Address: 0x100573844 | FUN_100573844 */

void FUN_100573844(void)

{
  undefined1 *unaff_x20;
  
  FUN_100573554(*unaff_x20);
  return;
}



/* Address: 0x10057385c | FUN_10057385c */

void FUN_10057385c(undefined1 *param_1,undefined1 param_2)

{
  FUN_1005772c8();
  *param_1 = param_2;
  return;
}



/* Address: 0x100573880 | FUN_100573880 */

String FUN_100573880(void)

{
  String SVar1;
  
  FUN_100577288();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x1005738a8 | FUN_1005738a8 */

String FUN_1005738a8(void)

{
  String SVar1;
  
  FUN_100577288();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x1005738d0 | FUN_1005738d0 */

/* WARNING: Removing unreachable block (ram,0x000100573c88) */

void FUN_1005738d0(long param_1)

{
  ulong uVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong *puVar7;
  undefined1 uVar8;
  long lVar9;
  long extraout_x8;
  code *pcVar10;
  ulong *unaff_x20;
  long unaff_x21;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong local_220;
  ulong local_218;
  ulong local_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong local_1e8;
  ulong local_1e0;
  ulong local_1d8;
  ulong local_1d0;
  ulong local_1c8;
  ulong local_1c0;
  ulong uStack_1b8;
  ulong local_1b0;
  ulong uStack_1a8;
  undefined1 local_191;
  ulong local_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong local_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong local_150;
  ulong local_140;
  ulong uStack_138;
  ulong local_130;
  ulong uStack_128;
  ulong local_120;
  ulong uStack_118;
  ulong local_110;
  ulong uStack_108;
  ulong local_100;
  ulong local_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong local_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong local_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong local_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined8 uStack_7f;
  
  puVar3 = &DAT_100fd0c80;
  FUN_1000f7830(&DAT_100fd0c80,&BYTE_100c5b928);
  lVar9 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_100577288();
  Swift::Encoder::_container();
  uStack_a8 = unaff_x20[9];
  local_b0 = unaff_x20[8];
  uStack_98 = unaff_x20[0xb];
  uStack_a0 = unaff_x20[10];
  local_90 = unaff_x20[0xc];
  uStack_88 = (undefined1)unaff_x20[0xd];
  uStack_7f = *(undefined8 *)((long)unaff_x20 + 0x71);
  uStack_87 = (undefined7)*(undefined8 *)((long)unaff_x20 + 0x69);
  uStack_80 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 0x69) >> 0x38);
  uStack_e8 = unaff_x20[1];
  local_f0 = *unaff_x20;
  uStack_d8 = unaff_x20[3];
  uStack_e0 = unaff_x20[2];
  uStack_c8 = unaff_x20[5];
  local_d0 = unaff_x20[4];
  uStack_b8 = unaff_x20[7];
  uStack_c0 = unaff_x20[6];
  iVar2 = (int)&local_f0;
  FUN_1004dbae4();
  if (iVar2 < 2) {
    if (iVar2 != 0) {
      puVar7 = &local_f0;
      FUN_100004520();
      uVar6 = *puVar7;
      uVar14 = puVar7[1];
      uVar11 = puVar7[2];
      uVar12 = puVar7[3];
      uVar4 = 0x6567616d69;
      goto LAB_100573cc4;
    }
    puVar7 = &local_f0;
    FUN_100004520();
    uVar11 = *puVar7;
    uVar12 = puVar7[1];
    local_140 = local_140 & 0xffffffffffffff00;
    Swift::KeyedEncodingContainer::_encode(0x74786574,&DAT_e400000000000000,&local_140,puVar3);
    if (unaff_x21 == 0) {
      uVar8 = 1;
      goto LAB_100573d44;
    }
LAB_100573d04:
    pcVar10 = *(code **)(lVar9 + 8);
  }
  else {
    if (iVar2 == 2) {
      puVar7 = &local_f0;
      FUN_100004520();
      uVar6 = *puVar7;
      uVar14 = puVar7[1];
      uVar11 = puVar7[2];
      uVar12 = puVar7[3];
      uVar4 = 0x6f69647561;
LAB_100573cc4:
      local_140 = local_140 & 0xffffffffffffff00;
      Swift::KeyedEncodingContainer::_encode(uVar4,&DAT_e500000000000000,&local_140,puVar3);
      if (unaff_x21 != 0) goto LAB_100573d04;
      local_140 = CONCAT71(local_140._1_7_,2);
      Swift::KeyedEncodingContainer::_encode(uVar6,uVar14,&local_140,puVar3);
      uVar8 = 3;
LAB_100573d44:
      local_140 = CONCAT71(local_140._1_7_,uVar8);
      Swift::KeyedEncodingContainer::_encode(uVar11,uVar12,&local_140,puVar3);
    }
    else if (iVar2 == 3) {
      puVar7 = &local_f0;
      FUN_100004520();
      uStack_128 = puVar7[3];
      local_130 = puVar7[2];
      uStack_118 = puVar7[5];
      local_120 = puVar7[4];
      uStack_108 = puVar7[7];
      local_110 = puVar7[6];
      local_100 = puVar7[8];
      uStack_138 = puVar7[1];
      local_140 = *puVar7;
      uStack_1b8 = puVar7[0xc];
      local_1c0 = puVar7[0xb];
      uStack_1a8 = puVar7[10];
      local_1b0 = puVar7[9];
      uVar6 = puVar7[0xd];
      uVar11 = puVar7[0xe];
      local_190 = local_190 & 0xffffffffffffff00;
      uVar4 = 0x656372756f736572;
      Swift::KeyedEncodingContainer::_encode
                (0x656372756f736572,&DAT_e800000000000000,&local_190,puVar3);
      if (unaff_x21 != 0) {
        (**(code **)(lVar9 + 8))((long)&local_220 - extraout_x8,puVar3);
        return;
      }
      uStack_168 = uStack_118;
      local_170 = local_120;
      uStack_158 = uStack_108;
      uStack_160 = local_110;
      local_150 = local_100;
      uStack_188 = uStack_138;
      local_190 = local_140;
      uStack_178 = uStack_128;
      uStack_180 = local_130;
      local_191 = 4;
      FUN_10056386c();
      puVar7 = &local_190;
      Swift::KeyedEncodingContainer::_encode(puVar7,&local_191,puVar3,&DAT_100ee1c80,uVar4);
      uStack_188 = uStack_1a8;
      local_190 = local_1b0;
      uStack_178 = uStack_1b8;
      uStack_180 = local_1c0;
      local_191 = 5;
      local_170 = uVar6;
      FUN_10056382c();
      puVar5 = &local_190;
      Swift::KeyedEncodingContainer::_encodeIfPresent
                (puVar5,&local_191,puVar3,&DAT_100ee1da8,puVar7);
      local_191 = 6;
      local_190 = uVar11;
      FUN_1004e02ac();
      Swift::KeyedEncodingContainer::_encodeIfPresent
                (&local_190,&local_191,puVar3,&DAT_100edcda0,puVar5);
    }
    else {
      puVar7 = &local_f0;
      FUN_100004520();
      local_1b0 = *puVar7;
      local_1c0 = puVar7[1];
      local_1c8 = puVar7[2];
      local_1d8 = puVar7[3];
      local_1e8 = puVar7[4];
      local_1e0 = puVar7[5];
      local_1d0 = puVar7[6];
      uVar11 = puVar7[7];
      uVar6 = puVar7[8];
      uVar14 = puVar7[9];
      uStack_1f8 = puVar7[0xb];
      uStack_200 = puVar7[10];
      uStack_208 = puVar7[0xd];
      local_210 = puVar7[0xc];
      uVar13 = puVar7[0xe];
      local_140 = local_140 & 0xffffffffffffff00;
      Swift::KeyedEncodingContainer::_encode
                (0x656372756f736572,0xed00006b6e696c5f,&local_140,puVar3);
      uVar1 = local_1c8;
      uVar12 = local_1d0;
      if (unaff_x21 != 0) goto LAB_100573d04;
      local_140._0_1_ = 7;
      local_220 = uVar14;
      local_218 = uVar11;
      Swift::KeyedEncodingContainer::_encode(local_1b0,local_1c0,&local_140,puVar3);
      local_140._0_1_ = 8;
      Swift::KeyedEncodingContainer::_encode(uVar1,local_1d8,&local_140,puVar3);
      local_140._0_1_ = 9;
      Swift::KeyedEncodingContainer::_encodeIfPresent(local_1e8,local_1e0,&local_140,puVar3);
      local_140._0_1_ = 10;
      Swift::KeyedEncodingContainer::_encodeIfPresent(uVar12,local_218,&local_140,puVar3);
      local_140 = CONCAT71(local_140._1_7_,3);
      Swift::KeyedEncodingContainer::_encodeIfPresent(uVar6,local_220,&local_140,puVar3);
      uStack_138 = uStack_1f8;
      local_140 = uStack_200;
      uStack_128 = uStack_208;
      local_130 = local_210;
      local_190 = CONCAT71(local_190._1_7_,5);
      local_120 = uVar13;
      FUN_10056382c();
      Swift::KeyedEncodingContainer::_encodeIfPresent
                (&local_140,&local_190,puVar3,&DAT_100ee1da8,uVar6);
    }
    pcVar10 = *(code **)(lVar9 + 8);
  }
  (*pcVar10)((long)&local_220 - extraout_x8,puVar3);
  return;
}



/* Address: 0x100573df0 | FUN_100573df0 */

void FUN_100573df0(undefined8 *param_1)

{
  long unaff_x21;
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
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined1 uStack_30;
  undefined8 uStack_2f;
  
  FUN_10057732c(&local_a0);
  if (unaff_x21 == 0) {
    param_1[9] = uStack_58;
    param_1[8] = local_60;
    param_1[0xb] = uStack_48;
    param_1[10] = uStack_50;
    param_1[0xd] = CONCAT71(uStack_37,uStack_38);
    param_1[0xc] = local_40;
    *(undefined8 *)((long)param_1 + 0x71) = uStack_2f;
    *(ulong *)((long)param_1 + 0x69) = CONCAT17(uStack_30,uStack_37);
    param_1[1] = uStack_98;
    *param_1 = local_a0;
    param_1[3] = uStack_88;
    param_1[2] = uStack_90;
    param_1[5] = uStack_78;
    param_1[4] = local_80;
    param_1[7] = uStack_68;
    param_1[6] = uStack_70;
  }
  return;
}



/* Address: 0x100573e48 | FUN_100573e48 */

void FUN_100573e48(void)

{
  FUN_1005738d0();
  return;
}



/* Address: 0x100573e5c | FUN_100573e5c */

void FUN_100573e5c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
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
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined1 uStack_30;
  undefined8 uStack_2f;
  
  local_a0 = param_2;
  uStack_98 = param_3;
  FUN_10049a544(&local_a0);
  param_1[9] = uStack_58;
  param_1[8] = local_60;
  param_1[0xb] = uStack_48;
  param_1[10] = uStack_50;
  param_1[0xd] = CONCAT71(uStack_37,uStack_38);
  param_1[0xc] = local_40;
  *(undefined8 *)((long)param_1 + 0x71) = uStack_2f;
  *(ulong *)((long)param_1 + 0x69) = CONCAT17(uStack_30,uStack_37);
  param_1[1] = uStack_98;
  *param_1 = local_a0;
  param_1[3] = uStack_88;
  param_1[2] = uStack_90;
  param_1[5] = uStack_78;
  param_1[4] = local_80;
  param_1[7] = uStack_68;
  param_1[6] = uStack_70;
  return;
}



/* Address: 0x100573eb4 | thunk_FUN_100573eb8 */

void thunk_FUN_100573eb8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined1 uStack_30;
  undefined8 uStack_2f;
  
  uStack_a0 = *param_2;
  uStack_98 = param_2[1];
  FUN_10049a544(&uStack_a0);
  param_1[9] = uStack_58;
  param_1[8] = uStack_60;
  param_1[0xb] = uStack_48;
  param_1[10] = uStack_50;
  param_1[0xd] = CONCAT71(uStack_37,uStack_38);
  param_1[0xc] = uStack_40;
  *(undefined8 *)((long)param_1 + 0x71) = uStack_2f;
  *(ulong *)((long)param_1 + 0x69) = CONCAT17(uStack_30,uStack_37);
  param_1[1] = uStack_98;
  *param_1 = uStack_a0;
  param_1[3] = uStack_88;
  param_1[2] = uStack_90;
  param_1[5] = uStack_78;
  param_1[4] = uStack_80;
  param_1[7] = uStack_68;
  param_1[6] = uStack_70;
  return;
}



/* Address: 0x100573eb8 | FUN_100573eb8 */

void FUN_100573eb8(undefined8 *param_1,undefined8 *param_2)

{
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
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined1 uStack_30;
  undefined8 uStack_2f;
  
  local_a0 = *param_2;
  uStack_98 = param_2[1];
  FUN_10049a544(&local_a0);
  param_1[9] = uStack_58;
  param_1[8] = local_60;
  param_1[0xb] = uStack_48;
  param_1[10] = uStack_50;
  param_1[0xd] = CONCAT71(uStack_37,uStack_38);
  param_1[0xc] = local_40;
  *(undefined8 *)((long)param_1 + 0x71) = uStack_2f;
  *(ulong *)((long)param_1 + 0x69) = CONCAT17(uStack_30,uStack_37);
  param_1[1] = uStack_98;
  *param_1 = local_a0;
  param_1[3] = uStack_88;
  param_1[2] = uStack_90;
  param_1[5] = uStack_78;
  param_1[4] = local_80;
  param_1[7] = uStack_68;
  param_1[6] = uStack_70;
  return;
}



/* Address: 0x100573f14 | FUN_100573f14 */

byte * FUN_100573f14(void)

{
  return &BYTE_100c5b8d0;
}



/* Address: 0x100573f20 | FUN_100573f20 */

undefined1  [16] FUN_100573f20(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xec0000007473696c;
  auVar1._0_8_ = 0x2f7374706d6f7270;
  return auVar1;
}



/* Address: 0x100573f40 | FUN_100573f40 */

undefined1  [16] FUN_100573f40(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = &DAT_e600000000000000;
  auVar1._0_8_ = 0x726f73727563;
  return auVar1;
}



/* Address: 0x100573f54 | FUN_100573f54 */

void FUN_100573f54(byte *param_1,long param_2,undefined1 *param_3)

{
  bool bVar1;
  byte bVar2;
  
  if (param_2 == 0x726f73727563 && param_3 == &DAT_e600000000000000) {
    _swift_bridgeObjectRelease(param_3);
    bVar2 = 0;
  }
  else {
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x726f73727563,(_StringGuts)0xe600000000000000,
                       (_StringComparisonResult)(__int8)param_2);
    _swift_bridgeObjectRelease(param_3);
    bVar2 = (bVar1 ^ 0xffU) & 1;
  }
  *param_1 = bVar2;
  return;
}



/* Address: 0x100573fd4 | FUN_100573fd4 */

String FUN_100573fd4(void)

{
  String SVar1;
  
  FUN_100577b68();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x100573ffc | FUN_100573ffc */

String FUN_100573ffc(void)

{
  String SVar1;
  
  FUN_100577b68();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x100574024 | FUN_100574024 */

void FUN_100574024(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long extraout_x8;
  long lVar2;
  
  puVar1 = &DAT_100fd0c90;
  FUN_1000f7830(&DAT_100fd0c90,&BYTE_100c5b930);
  lVar2 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_100577b68();
  Swift::Encoder::_container();
  Swift::KeyedEncodingContainer::_encodeIfPresent(param_2,param_3);
  (**(code **)(lVar2 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,puVar1);
  return;
}



/* Address: 0x100574118 | FUN_100574118 */

undefined1  [16] FUN_100574118(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  KeyedDecodingContainer<undefined> KVar3;
  undefined *puVar4;
  long extraout_x8;
  long unaff_x21;
  long lVar5;
  undefined1 auVar6 [16];
  
  puVar1 = &DAT_100fd0ca0;
  FUN_1000f7830(&DAT_100fd0ca0,&BYTE_100c5b938);
  lVar5 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = *(undefined **)(param_1 + 0x18);
  puVar2 = param_1;
  FUN_100004640(param_1,puVar4);
  FUN_100577b68();
  KVar3 = Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    puVar4 = puVar1;
    Swift::KeyedDecodingContainer::_decodeIfPresent(KVar3.unknown,puVar1);
    (**(code **)(lVar5 + 8))(&stack0xffffffffffffffb0 + -extraout_x8,puVar1);
    FUN_100004594(param_1);
  }
  else {
    FUN_100004594(param_1);
    KVar3.unknown = puVar2;
  }
  auVar6._8_8_ = puVar4;
  auVar6._0_8_ = KVar3.unknown;
  return auVar6;
}



/* Address: 0x100574228 | FUN_100574228 */

/* WARNING: Removing unreachable block (ram,0x0001005742ec) */

void FUN_100574228(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  KeyedDecodingContainer<undefined> KVar2;
  undefined *puVar3;
  long extraout_x8;
  long unaff_x21;
  long lVar4;
  
  puVar1 = &DAT_100fd0ca0;
  FUN_1000f7830(&DAT_100fd0ca0,&BYTE_100c5b938);
  lVar4 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_100577b68();
  KVar2 = Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    puVar3 = puVar1;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    (**(code **)(lVar4 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,puVar1);
    FUN_100004594(param_2);
    *param_1 = KVar2.unknown;
    param_1[1] = puVar3;
  }
  else {
    FUN_100004594(param_2);
  }
  return;
}



/* Address: 0x100574350 | FUN_100574350 */

void FUN_100574350(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long extraout_x8;
  undefined8 *unaff_x20;
  long lVar4;
  
  puVar3 = &DAT_100fd0c90;
  FUN_1000f7830(&DAT_100fd0c90,&BYTE_100c5b930);
  lVar4 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_100577b68();
  Swift::Encoder::_container();
  Swift::KeyedEncodingContainer::_encodeIfPresent(uVar1,uVar2);
  (**(code **)(lVar4 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,puVar3);
  return;
}



/* Address: 0x100574440 | FUN_100574440 */

void FUN_100574440(void)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  Hasher HVar4;
  undefined1 *puVar5;
  char *unaff_x20;
  String SVar6;
  undefined1 auStack_68 [72];
  
  cVar2 = *unaff_x20;
  Swift::Hasher::init(0);
  puVar5 = (undefined1 *)0xea0000000000726f;
  pcVar3 = (char *)0x737275437478656e;
  if (cVar2 != '\x01') {
    puVar5 = &DAT_e500000000000000;
    pcVar3 = (char *)0x6174656d5f;
  }
  pcVar1 = (char *)0x7374706d6f7270;
  if (cVar2 != '\0') {
    pcVar1 = pcVar3;
  }
  HVar4.unknown = &DAT_e700000000000000;
  if (cVar2 != '\0') {
    HVar4.unknown = puVar5;
  }
  SVar6.bridgeObject = HVar4.unknown;
  SVar6.str = pcVar1;
  Swift::String::hash((Hasher)auStack_68,SVar6);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar4);
  return;
}



/* Address: 0x1005744e0 | FUN_1005744e0 */

void FUN_1005744e0(Hasher param_1)

{
  char *pcVar1;
  undefined1 *puVar2;
  char cVar3;
  char *pcVar4;
  undefined1 *puVar5;
  char *unaff_x20;
  String SVar6;
  
  cVar3 = *unaff_x20;
  puVar5 = (undefined1 *)0xea0000000000726f;
  pcVar4 = (char *)0x737275437478656e;
  if (cVar3 != '\x01') {
    puVar5 = &DAT_e500000000000000;
    pcVar4 = (char *)0x6174656d5f;
  }
  pcVar1 = (char *)0x7374706d6f7270;
  if (cVar3 != '\0') {
    pcVar1 = pcVar4;
  }
  puVar2 = &DAT_e700000000000000;
  if (cVar3 != '\0') {
    puVar2 = puVar5;
  }
  SVar6.bridgeObject = puVar2;
  SVar6.str = pcVar1;
  Swift::String::hash(param_1,SVar6);
  _swift_bridgeObjectRelease(puVar2);
  return;
}



/* Address: 0x10057455c | FUN_10057455c */

void FUN_10057455c(__int64 param_1)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  Hasher HVar4;
  undefined1 *puVar5;
  char *unaff_x20;
  String SVar6;
  undefined1 auStack_68 [72];
  
  cVar2 = *unaff_x20;
  Swift::Hasher::init(param_1);
  puVar5 = (undefined1 *)0xea0000000000726f;
  pcVar3 = (char *)0x737275437478656e;
  if (cVar2 != '\x01') {
    puVar5 = &DAT_e500000000000000;
    pcVar3 = (char *)0x6174656d5f;
  }
  pcVar1 = (char *)0x7374706d6f7270;
  if (cVar2 != '\0') {
    pcVar1 = pcVar3;
  }
  HVar4.unknown = &DAT_e700000000000000;
  if (cVar2 != '\0') {
    HVar4.unknown = puVar5;
  }
  SVar6.bridgeObject = HVar4.unknown;
  SVar6.str = pcVar1;
  Swift::String::hash((Hasher)auStack_68,SVar6);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar4);
  return;
}



/* Address: 0x1005745f8 | FUN_1005745f8 */

void FUN_1005745f8(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1004cbd4c(uVar1,param_2[1],&DAT_100fd1250);
  *param_1 = (char)uVar1;
  return;
}



/* Address: 0x10057462c | FUN_10057462c */

void FUN_10057462c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  char *unaff_x20;
  
  cVar3 = *unaff_x20;
  puVar5 = (undefined1 *)0xea0000000000726f;
  uVar4 = 0x737275437478656e;
  if (cVar3 != '\x01') {
    puVar5 = &DAT_e500000000000000;
    uVar4 = 0x6174656d5f;
  }
  uVar1 = 0x7374706d6f7270;
  if (cVar3 != '\0') {
    uVar1 = uVar4;
  }
  puVar2 = &DAT_e700000000000000;
  if (cVar3 != '\0') {
    puVar2 = puVar5;
  }
  *param_1 = uVar1;
  param_1[1] = puVar2;
  return;
}



/* Address: 0x10057468c | FUN_10057468c */

undefined1  [16] FUN_10057468c(void)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  char *unaff_x20;
  undefined1 auVar6 [16];
  
  cVar3 = *unaff_x20;
  puVar5 = (undefined1 *)0xea0000000000726f;
  uVar4 = 0x737275437478656e;
  if (cVar3 != '\x01') {
    puVar5 = &DAT_e500000000000000;
    uVar4 = 0x6174656d5f;
  }
  uVar1 = 0x7374706d6f7270;
  if (cVar3 != '\0') {
    uVar1 = uVar4;
  }
  puVar2 = &DAT_e700000000000000;
  if (cVar3 != '\0') {
    puVar2 = puVar5;
  }
  auVar6._8_8_ = puVar2;
  auVar6._0_8_ = uVar1;
  return auVar6;
}



/* Address: 0x1005746e8 | FUN_1005746e8 */

void FUN_1005746e8(undefined1 *param_1,undefined4 param_2,undefined8 param_3)

{
  FUN_1004cbd4c(param_2,param_3,&DAT_100fd1250);
  *param_1 = (char)param_2;
  return;
}



/* Address: 0x100574714 | FUN_100574714 */

void FUN_100574714(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fd1390;
  FUN_1000f7830(&DAT_100fd1390,&DAT_100c5cf18);
  _swift_initStaticObject();
  *param_1 = puVar1;
  return;
}



/* Address: 0x100574754 | FUN_100574754 */

String FUN_100574754(void)

{
  String SVar1;
  
  FUN_100577ba8();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x10057477c | FUN_10057477c */

String FUN_10057477c(void)

{
  String SVar1;
  
  FUN_100577ba8();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x1005747a4 | FUN_1005747a4 */

/* WARNING: Removing unreachable block (ram,0x0001005748dc) */

void FUN_1005747a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long extraout_x8;
  long unaff_x21;
  long lVar5;
  undefined1 auStack_80 [8];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_61;
  undefined8 local_58;
  
  puVar1 = &DAT_100fd0ca8;
  local_78 = param_3;
  uStack_70 = param_4;
  FUN_1000f7830(&DAT_100fd0ca8,&BYTE_100c5b940);
  lVar5 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_100577ba8();
  Swift::Encoder::_container();
  local_61 = 0;
  puVar2 = &DAT_100fd0cb8;
  local_58 = param_2;
  FUN_1000f7830(&DAT_100fd0cb8,&BYTE_100c5b948);
  puVar3 = puVar2;
  FUN_100577be8();
  Swift::KeyedEncodingContainer::_encode(&local_58,&local_61,puVar1,puVar2,puVar3);
  if (unaff_x21 == 0) {
    local_58 = CONCAT71(local_58._1_7_,1);
    uVar4 = local_78;
    Swift::KeyedEncodingContainer::_encodeIfPresent(local_78,uStack_70,&local_58,puVar1);
    local_61 = 2;
    local_58 = param_5;
    FUN_1004e02ac();
    Swift::KeyedEncodingContainer::_encodeIfPresent(&local_58,&local_61,puVar1,&DAT_100edcda0,uVar4)
    ;
    (**(code **)(lVar5 + 8))(auStack_80 + -extraout_x8,puVar1);
  }
  else {
    (**(code **)(lVar5 + 8))(auStack_80 + -extraout_x8,puVar1);
  }
  return;
}



/* Address: 0x100574960 | FUN_100574960 */

void FUN_100574960(undefined8 param_1)

{
  FUN_100575740(param_1,FUN_100577c98);
  return;
}



/* Address: 0x10057497c | thunk_FUN_100575d54 */

void thunk_FUN_100575d54(void)

{
  FUN_100575d54();
  return;
}



/* Address: 0x100574980 | FUN_100574980 */

void FUN_100574980(Hasher param_1,Hasher param_2,Hasher param_3,void *param_4,long param_5)

{
  String SVar1;
  
  FUN_1004d9400();
  if (param_4 == (void *)0x0) {
    Swift::Hasher::_combine(0,param_2);
    param_3.unknown = param_2.unknown;
  }
  else {
    Swift::Hasher::_combine(1,param_2);
    SVar1.bridgeObject = param_4;
    SVar1.str = param_3.unknown;
    Swift::String::hash(param_1,SVar1);
  }
  if (param_5 != 0) {
    Swift::Hasher::_combine(1,param_3);
    FUN_1004df778(param_1.unknown,param_5);
    return;
  }
  Swift::Hasher::_combine(0,param_3);
  return;
}



/* Address: 0x100574a08 | FUN_100574a08 */

void FUN_100574a08(Hasher param_1,Hasher param_2,void *param_3,long param_4)

{
  Hasher HVar1;
  String SVar2;
  undefined1 auStack_78 [72];
  
  Swift::Hasher::init(0);
  FUN_1004d9400(auStack_78);
  if (param_3 == (void *)0x0) {
    Swift::Hasher::_combine(0,param_1);
    param_2.unknown = param_1.unknown;
  }
  else {
    Swift::Hasher::_combine(1,param_1);
    SVar2.bridgeObject = param_3;
    SVar2.str = param_2.unknown;
    Swift::String::hash((Hasher)auStack_78,SVar2);
  }
  if (param_4 == 0) {
    HVar1.unknown = (undefined *)0x0;
    Swift::Hasher::_combine(0,param_2);
  }
  else {
    Swift::Hasher::_combine(1,param_2);
    HVar1.unknown = auStack_78;
    FUN_1004df778(HVar1.unknown,param_4);
  }
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x100574ab8 | FUN_100574ab8 */

void FUN_100574ab8(void)

{
  undefined8 *unaff_x20;
  
  FUN_100574a08(*unaff_x20,unaff_x20[1],unaff_x20[2],unaff_x20[3]);
  return;
}



/* Address: 0x100574ac4 | FUN_100574ac4 */

void FUN_100574ac4(Hasher param_1)

{
  long lVar1;
  long lVar2;
  String SVar3;
  Hasher HVar4;
  Hasher HVar5;
  undefined8 *unaff_x20;
  
  HVar4.unknown = (undefined *)*unaff_x20;
  HVar5.unknown = ((String *)(unaff_x20 + 1))->str;
  lVar1 = unaff_x20[2];
  SVar3 = *(String *)(unaff_x20 + 1);
  lVar2 = unaff_x20[3];
  FUN_1004d9400();
  if (lVar1 == 0) {
    Swift::Hasher::_combine(0,HVar4);
    HVar5.unknown = HVar4.unknown;
  }
  else {
    Swift::Hasher::_combine(1,HVar4);
    Swift::String::hash(param_1,SVar3);
  }
  if (lVar2 != 0) {
    Swift::Hasher::_combine(1,HVar5);
    FUN_1004df778(param_1.unknown,lVar2);
    return;
  }
  Swift::Hasher::_combine(0,HVar5);
  return;
}



/* Address: 0x100574b64 | FUN_100574b64 */

void FUN_100574b64(__int64 param_1)

{
  long lVar1;
  long lVar2;
  String SVar3;
  Hasher HVar4;
  Hasher HVar5;
  undefined8 *unaff_x20;
  undefined1 auStack_88 [72];
  
  HVar4.unknown = (undefined *)*unaff_x20;
  HVar5.unknown = ((String *)(unaff_x20 + 1))->str;
  lVar1 = unaff_x20[2];
  SVar3 = *(String *)(unaff_x20 + 1);
  lVar2 = unaff_x20[3];
  Swift::Hasher::init(param_1);
  FUN_1004d9400(auStack_88);
  if (lVar1 == 0) {
    Swift::Hasher::_combine(0,HVar4);
    HVar5.unknown = HVar4.unknown;
  }
  else {
    Swift::Hasher::_combine(1,HVar4);
    Swift::String::hash((Hasher)auStack_88,SVar3);
  }
  if (lVar2 == 0) {
    HVar4.unknown = (undefined *)0x0;
    Swift::Hasher::_combine(0,HVar5);
  }
  else {
    Swift::Hasher::_combine(1,HVar5);
    HVar4.unknown = auStack_88;
    FUN_1004df778(HVar4.unknown,lVar2);
  }
  Swift::Hasher::_finalize(HVar4);
  return;
}



/* Address: 0x100574c10 | FUN_100574c10 */

void FUN_100574c10(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x21;
  
  FUN_100577c98();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    param_1[1] = param_3;
    param_1[2] = param_4;
    param_1[3] = param_5;
  }
  return;
}



/* Address: 0x100574c3c | FUN_100574c3c */

void FUN_100574c3c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1005747a4(param_1,*unaff_x20,unaff_x20[1],unaff_x20[2],unaff_x20[3]);
  return;
}



/* Address: 0x100574c58 | FUN_100574c58 */

void FUN_100574c58(void)

{
  FUN_100575a74();
  return;
}



/* Address: 0x100574c64 | FUN_100574c64 */

byte * FUN_100574c64(void)

{
  return &BYTE_100c5b8e0;
}



/* Address: 0x100574c70 | FUN_100574c70 */

undefined1  [16] FUN_100574c70(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xeb00000000746567;
  auVar1._0_8_ = 0x2f7374706d6f7270;
  return auVar1;
}



/* Address: 0x100574c90 | FUN_100574c90 */

undefined1  [16] FUN_100574c90(void)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  char *unaff_x20;
  undefined1 auVar3 [16];
  
  uVar1 = 0x746e656d75677261;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x656d616e;
  }
  puVar2 = (undefined1 *)0xe900000000000073;
  if (*unaff_x20 != '\x01') {
    puVar2 = &DAT_e400000000000000;
  }
  auVar3._8_8_ = puVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Address: 0x100574cc8 | FUN_100574cc8 */

void FUN_100574cc8(undefined1 *param_1,long param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined1 uVar2;
  
  if (param_2 != 0x656d616e || param_3 != &DAT_e400000000000000) {
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x656d616e,(_StringGuts)0xe400000000000000,
                       (_StringComparisonResult)(__int8)param_2);
    if (!bVar1) {
      if ((param_2 == 0x746e656d75677261) && (param_3 == (undefined1 *)0xe900000000000073)) {
        _swift_bridgeObjectRelease(0xe900000000000073);
        uVar2 = 1;
      }
      else {
        bVar1 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)0x746e656d75677261,(_StringGuts)0xe900000000000073,
                           (_StringComparisonResult)(__int8)param_2);
        _swift_bridgeObjectRelease(param_3);
        uVar2 = 1;
        if (!bVar1) {
          uVar2 = 2;
        }
      }
      goto LAB_100574d28;
    }
  }
  _swift_bridgeObjectRelease(param_3);
  uVar2 = 0;
LAB_100574d28:
  *param_1 = uVar2;
  return;
}



/* Address: 0x100574da8 | FUN_100574da8 */

String FUN_100574da8(void)

{
  String SVar1;
  
  FUN_100577ea8();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x100574dd0 | FUN_100574dd0 */

String FUN_100574dd0(void)

{
  String SVar1;
  
  FUN_100577ea8();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x100574df8 | thunk_FUN_1005761f4 */

void thunk_FUN_1005761f4(void)

{
  FUN_1005761f4();
  return;
}



/* Address: 0x100574dfc | FUN_100574dfc */

void FUN_100574dfc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long extraout_x8;
  long unaff_x21;
  long lVar4;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar1 = &DAT_100fd0cd0;
  local_70 = param_4;
  FUN_1000f7830(&DAT_100fd0cd0,&BYTE_100c5b950);
  lVar4 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_100577ea8();
  Swift::Encoder::_container();
  local_51 = 0;
  Swift::KeyedEncodingContainer::_encode(param_2,param_3,&local_51,puVar1);
  if (unaff_x21 == 0) {
    local_68 = local_70;
    local_52 = 1;
    puVar2 = &DAT_100fcc360;
    FUN_1000f7830(&DAT_100fcc360,&DAT_100c519e8);
    puVar3 = &DAT_100fcc368;
    FUN_10054d580(&DAT_100fcc368,
                  PTR___protocol_witness_table_for_Swift_String___Swift_Encodable_in_Swift_100eac210
                  ,PTR__Swift__Swift__Dictionary<undefined,undefined>_>Swift__Encodable_100eabe68);
    Swift::KeyedEncodingContainer::_encodeIfPresent(&local_68,&local_52,puVar1,puVar2,puVar3);
  }
  (**(code **)(lVar4 + 8))((long)&local_70 - extraout_x8,puVar1);
  return;
}



/* Address: 0x100574f6c | FUN_100574f6c */

void FUN_100574f6c(Hasher param_1,Hasher param_2,void *param_3,long param_4)

{
  String SVar1;
  
  SVar1.bridgeObject = param_3;
  SVar1.str = param_2.unknown;
  Swift::String::hash(param_1,SVar1);
  if (param_4 != 0) {
    Swift::Hasher::_combine(1,param_2);
    FUN_1004df90c(param_1.unknown,param_4);
    return;
  }
  Swift::Hasher::_combine(0,param_2);
  return;
}



/* Address: 0x100574fb8 | FUN_100574fb8 */

void FUN_100574fb8(Hasher param_1,void *param_2,long param_3)

{
  Hasher HVar1;
  String SVar2;
  undefined1 auStack_78 [72];
  
  Swift::Hasher::init(0);
  SVar2.bridgeObject = param_2;
  SVar2.str = param_1.unknown;
  Swift::String::hash((Hasher)auStack_78,SVar2);
  if (param_3 == 0) {
    HVar1.unknown = (undefined *)0x0;
    Swift::Hasher::_combine(0,param_1);
  }
  else {
    Swift::Hasher::_combine(1,param_1);
    HVar1.unknown = auStack_78;
    FUN_1004df90c(HVar1.unknown,param_3);
  }
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x100575038 | FUN_100575038 */

undefined8 FUN_100575038(undefined8 param_1)

{
  undefined8 extraout_x8;
  long unaff_x21;
  
  FUN_100577ee8();
  if (unaff_x21 != 0) {
    param_1 = extraout_x8;
  }
  return param_1;
}



/* Address: 0x10057505c | FUN_10057505c */

void FUN_10057505c(void)

{
  String SVar1;
  Hasher HVar2;
  Hasher HVar3;
  char *pcVar4;
  String *unaff_x20;
  undefined1 auStack_78 [72];
  
  HVar3.unknown = unaff_x20->str;
  SVar1 = *unaff_x20;
  pcVar4 = unaff_x20[1].str;
  Swift::Hasher::init(0);
  Swift::String::hash((Hasher)auStack_78,SVar1);
  if (pcVar4 == (char *)0x0) {
    HVar2.unknown = (undefined *)0x0;
    Swift::Hasher::_combine(0,HVar3);
  }
  else {
    Swift::Hasher::_combine(1,HVar3);
    HVar2.unknown = auStack_78;
    FUN_1004df90c(HVar2.unknown,pcVar4);
  }
  Swift::Hasher::_finalize(HVar2);
  return;
}



/* Address: 0x1005750d8 | FUN_1005750d8 */

void FUN_1005750d8(Hasher param_1)

{
  Hasher HVar1;
  char *pcVar2;
  String *unaff_x20;
  
  HVar1.unknown = unaff_x20->str;
  pcVar2 = unaff_x20[1].str;
  Swift::String::hash(param_1,*unaff_x20);
  if (pcVar2 != (char *)0x0) {
    Swift::Hasher::_combine(1,HVar1);
    FUN_1004df90c(param_1.unknown,pcVar2);
    return;
  }
  Swift::Hasher::_combine(0,HVar1);
  return;
}



/* Address: 0x10057513c | FUN_10057513c */

void FUN_10057513c(__int64 param_1)

{
  String SVar1;
  Hasher HVar2;
  Hasher HVar3;
  char *pcVar4;
  String *unaff_x20;
  undefined1 auStack_78 [72];
  
  HVar3.unknown = unaff_x20->str;
  SVar1 = *unaff_x20;
  pcVar4 = unaff_x20[1].str;
  Swift::Hasher::init(param_1);
  Swift::String::hash((Hasher)auStack_78,SVar1);
  if (pcVar4 == (char *)0x0) {
    HVar2.unknown = (undefined *)0x0;
    Swift::Hasher::_combine(0,HVar3);
  }
  else {
    Swift::Hasher::_combine(1,HVar3);
    HVar2.unknown = auStack_78;
    FUN_1004df90c(HVar2.unknown,pcVar4);
  }
  Swift::Hasher::_finalize(HVar2);
  return;
}



/* Address: 0x1005751b4 | FUN_1005751b4 */

void FUN_1005751b4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x21;
  
  FUN_100577ee8();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    param_1[1] = param_3;
    param_1[2] = param_4;
  }
  return;
}



/* Address: 0x1005751e0 | FUN_1005751e0 */

void FUN_1005751e0(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100574dfc(param_1,*unaff_x20,unaff_x20[1],unaff_x20[2]);
  return;
}


