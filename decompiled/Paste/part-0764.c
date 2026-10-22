/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100868bd8 | FUN_100868bd8 */

void FUN_100868bd8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  bool bVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong *unaff_x20;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  if (param_1[1] != 0) {
    if (((undefined *)param_1[2] != (undefined *)0x656d656863733a ||
         (undefined *)param_1[3] != &DAT_e700000000000000) &&
       (bVar7 = Swift::_stringCompareWithSmolCheck
                          ((undefined *)param_1[2],(undefined *)param_1[3],
                           (_StringComparisonResult)0x3a), !bVar7)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100868c94);
      (*pcVar6)();
    }
  }
  uVar8 = *unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar10 = *unaff_x20;
  if ((uVar8 & 1) == 0) {
    FUN_100869e18();
    _swift_release(uVar10);
    *unaff_x20 = uVar8;
    uVar10 = uVar8;
  }
  uVar1 = *(undefined8 *)(uVar10 + 0x48);
  uVar3 = *(undefined8 *)(uVar10 + 0x50);
  uVar11 = *param_1;
  uVar13 = param_1[3];
  uVar12 = param_1[2];
  *(undefined8 *)(uVar10 + 0x50) = param_1[1];
  *(undefined8 *)(uVar10 + 0x48) = uVar11;
  uVar11 = *(undefined8 *)(uVar10 + 0x58);
  uVar4 = *(undefined8 *)(uVar10 + 0x60);
  uVar2 = *(undefined8 *)(uVar10 + 0x68);
  uVar5 = *(undefined8 *)(uVar10 + 0x70);
  uVar9 = *(undefined8 *)(uVar10 + 0x78);
  *(undefined8 *)(uVar10 + 0x60) = uVar13;
  *(undefined8 *)(uVar10 + 0x58) = uVar12;
  uVar12 = param_1[4];
  *(undefined8 *)(uVar10 + 0x70) = param_1[5];
  *(undefined8 *)(uVar10 + 0x68) = uVar12;
  *(undefined8 *)(uVar10 + 0x78) = param_1[6];
  FUN_100864364(uVar1,uVar3,uVar11,uVar4,uVar2,uVar5,uVar9);
  return;
}



/* Address: 0x100868c94 | FUN_100868c94 */

void FUN_100868c94(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  bool bVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong *unaff_x20;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  if (param_1[1] != 0) {
    if (((undefined *)param_1[2] != (undefined *)0x69726f687475613a ||
         (undefined *)param_1[3] != (undefined *)0xea00000000007974) &&
       (bVar8 = Swift::_stringCompareWithSmolCheck
                          ((undefined *)param_1[2],(undefined *)param_1[3],
                           (_StringComparisonResult)0x3a), !bVar8)) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x100868d54);
      (*pcVar7)();
    }
  }
  uVar9 = *unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar11 = *unaff_x20;
  if ((uVar9 & 1) == 0) {
    FUN_100869e18();
    _swift_release(uVar11);
    *unaff_x20 = uVar9;
    uVar11 = uVar9;
  }
  uVar1 = *(undefined8 *)(uVar11 + 0x80);
  uVar4 = *(undefined8 *)(uVar11 + 0x88);
  uVar2 = *(undefined8 *)(uVar11 + 0x90);
  uVar5 = *(undefined8 *)(uVar11 + 0x98);
  uVar3 = *(undefined8 *)(uVar11 + 0xa0);
  uVar6 = *(undefined8 *)(uVar11 + 0xa8);
  uVar10 = *(undefined8 *)(uVar11 + 0xb0);
  uVar12 = *param_1;
  uVar14 = param_1[3];
  uVar13 = param_1[2];
  *(undefined8 *)(uVar11 + 0x88) = param_1[1];
  *(undefined8 *)(uVar11 + 0x80) = uVar12;
  *(undefined8 *)(uVar11 + 0x98) = uVar14;
  *(undefined8 *)(uVar11 + 0x90) = uVar13;
  uVar12 = param_1[4];
  *(undefined8 *)(uVar11 + 0xa8) = param_1[5];
  *(undefined8 *)(uVar11 + 0xa0) = uVar12;
  *(undefined8 *)(uVar11 + 0xb0) = param_1[6];
  FUN_100864364(uVar1,uVar4,uVar2,uVar5,uVar3,uVar6,uVar10);
  return;
}



/* Address: 0x100868d54 | FUN_100868d54 */

void FUN_100868d54(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  bool bVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong *unaff_x20;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  if (param_1[1] != 0) {
    if (((undefined *)param_1[2] != (undefined *)0x687461703a ||
         (undefined *)param_1[3] != &DAT_e500000000000000) &&
       (bVar7 = Swift::_stringCompareWithSmolCheck
                          ((undefined *)param_1[2],(undefined *)param_1[3],
                           (_StringComparisonResult)0x3a), !bVar7)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100868e0c);
      (*pcVar6)();
    }
  }
  uVar8 = *unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar10 = *unaff_x20;
  if ((uVar8 & 1) == 0) {
    FUN_100869e18();
    _swift_release(uVar10);
    *unaff_x20 = uVar8;
    uVar10 = uVar8;
  }
  uVar1 = *(undefined8 *)(uVar10 + 0xb8);
  uVar3 = *(undefined8 *)(uVar10 + 0xc0);
  uVar11 = *param_1;
  uVar13 = param_1[3];
  uVar12 = param_1[2];
  *(undefined8 *)(uVar10 + 0xc0) = param_1[1];
  *(undefined8 *)(uVar10 + 0xb8) = uVar11;
  uVar11 = *(undefined8 *)(uVar10 + 200);
  uVar4 = *(undefined8 *)(uVar10 + 0xd0);
  uVar2 = *(undefined8 *)(uVar10 + 0xd8);
  uVar5 = *(undefined8 *)(uVar10 + 0xe0);
  uVar9 = *(undefined8 *)(uVar10 + 0xe8);
  *(undefined8 *)(uVar10 + 0xd0) = uVar13;
  *(undefined8 *)(uVar10 + 200) = uVar12;
  uVar12 = param_1[4];
  *(undefined8 *)(uVar10 + 0xe0) = param_1[5];
  *(undefined8 *)(uVar10 + 0xd8) = uVar12;
  *(undefined8 *)(uVar10 + 0xe8) = param_1[6];
  FUN_100864364(uVar1,uVar3,uVar11,uVar4,uVar2,uVar5,uVar9);
  return;
}



/* Address: 0x100868e0c | FUN_100868e0c */

undefined1  [16] FUN_100868e0c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xe300000000000000;
  auVar1._0_8_ = 0x544547;
  return auVar1;
}



/* Address: 0x100868e1c | FUN_100868e1c */

undefined1  [16]
FUN_100868e1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5,long param_6,undefined8 param_7,long param_8,undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  ulong local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  ulong local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  byte local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  byte local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  byte local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  if (param_4 == 0) {
    local_138 = 0;
    uStack_130 = 0;
    local_148 = 0;
    uStack_140 = 0;
    local_158 = 0;
    local_150 = 0;
    local_160 = 0;
  }
  else {
    FUN_100859230(&local_110,0x656d656863733a,&DAT_e700000000000000,0x656d656863733a,
                  &DAT_e700000000000000,param_3,param_4);
    local_138 = uStack_108;
    uStack_130 = local_110;
    local_148 = uStack_f8;
    uStack_140 = local_100;
    local_150 = (ulong)local_f0;
    local_160 = uStack_e0;
    local_158 = local_e8;
  }
  if (param_6 == 0) {
    local_170 = 0;
    uStack_168 = 0;
    local_180 = 0;
    uStack_178 = 0;
    local_188 = 0;
    uVar4 = 0;
    uVar5 = 0;
  }
  else {
    FUN_100859230(&local_d8,0x69726f687475613a,0xea00000000007974,0x69726f687475613a,
                  0xea00000000007974,param_5,param_6);
    local_188 = (ulong)local_b8;
    uVar4 = local_b0;
    uVar5 = uStack_a8;
    local_170 = uStack_d0;
    uStack_168 = local_d8;
    local_180 = uStack_c0;
    uStack_178 = local_c8;
  }
  if (param_8 == 0) {
    local_a0 = 0;
    uStack_98 = 0;
    local_90 = 0;
    uStack_88 = 0;
    uVar11 = 0;
    local_78 = 0;
    uStack_70 = 0;
  }
  else {
    FUN_100859230(&local_a0,0x687461703a,&DAT_e500000000000000,0x687461703a,&DAT_e500000000000000,
                  param_7,param_8);
    uVar11 = (ulong)local_80;
  }
  lVar8 = 0;
  FUN_10086c690();
  _swift_allocObject();
  *(undefined8 *)(lVar8 + 0x88) = 0;
  *(undefined8 *)(lVar8 + 0x80) = 0;
  *(undefined8 *)(lVar8 + 0x98) = 0;
  *(undefined8 *)(lVar8 + 0x90) = 0;
  *(undefined8 *)(lVar8 + 0xa8) = 0;
  *(undefined8 *)(lVar8 + 0xa0) = 0;
  *(undefined8 *)(lVar8 + 0xb8) = 0;
  *(undefined8 *)(lVar8 + 0xb0) = 0;
  *(undefined8 *)(lVar8 + 200) = 0;
  *(undefined8 *)(lVar8 + 0xc0) = 0;
  *(undefined8 *)(lVar8 + 0xd8) = 0;
  *(undefined8 *)(lVar8 + 0xd0) = 0;
  *(undefined8 *)(lVar8 + 0xe8) = 0;
  *(undefined8 *)(lVar8 + 0xe0) = 0;
  *(undefined8 *)(lVar8 + 0xf8) = 0;
  *(undefined8 *)(lVar8 + 0xf0) = 0;
  *(undefined8 *)(lVar8 + 0x108) = 0;
  *(undefined8 *)(lVar8 + 0x100) = 0;
  *(undefined8 *)(lVar8 + 0x118) = 0;
  *(undefined8 *)(lVar8 + 0x110) = 0;
  *(undefined8 *)(lVar8 + 0x120) = 0;
  *(undefined8 *)(lVar8 + 0x10) = 0x646f6874656d3a;
  *(undefined1 **)(lVar8 + 0x18) = &DAT_e700000000000000;
  *(undefined8 *)(lVar8 + 0x20) = 0x646f6874656d3a;
  *(undefined1 **)(lVar8 + 0x28) = &DAT_e700000000000000;
  *(undefined1 *)(lVar8 + 0x30) = 0;
  *(undefined8 *)(lVar8 + 0x38) = param_1;
  *(undefined8 *)(lVar8 + 0x40) = param_2;
  *(undefined8 *)(lVar8 + 0x48) = uStack_130;
  *(undefined8 *)(lVar8 + 0x50) = local_138;
  *(undefined8 *)(lVar8 + 0x58) = uStack_140;
  *(undefined8 *)(lVar8 + 0x60) = local_148;
  *(ulong *)(lVar8 + 0x68) = local_150;
  *(undefined8 *)(lVar8 + 0x70) = local_158;
  *(undefined8 *)(lVar8 + 0x78) = local_160;
  FUN_100864364(0,0,0,0,0,0,0);
  uVar1 = *(undefined8 *)(lVar8 + 0x80);
  uVar6 = *(undefined8 *)(lVar8 + 0x88);
  uVar2 = *(undefined8 *)(lVar8 + 0x90);
  uVar10 = *(undefined8 *)(lVar8 + 0x98);
  uVar3 = *(undefined8 *)(lVar8 + 0xa0);
  uVar7 = *(undefined8 *)(lVar8 + 0xa8);
  uVar9 = *(undefined8 *)(lVar8 + 0xb0);
  *(undefined8 *)(lVar8 + 0x80) = uStack_168;
  *(undefined8 *)(lVar8 + 0x88) = local_170;
  *(undefined8 *)(lVar8 + 0x90) = uStack_178;
  *(undefined8 *)(lVar8 + 0x98) = local_180;
  *(ulong *)(lVar8 + 0xa0) = local_188;
  *(undefined8 *)(lVar8 + 0xa8) = uVar4;
  *(undefined8 *)(lVar8 + 0xb0) = uVar5;
  FUN_100864364(uVar1,uVar6,uVar2,uVar10,uVar3,uVar7,uVar9);
  uVar4 = *(undefined8 *)(lVar8 + 0xb8);
  uVar2 = *(undefined8 *)(lVar8 + 0xc0);
  uVar5 = *(undefined8 *)(lVar8 + 200);
  uVar3 = *(undefined8 *)(lVar8 + 0xd0);
  uVar1 = *(undefined8 *)(lVar8 + 0xd8);
  uVar6 = *(undefined8 *)(lVar8 + 0xe0);
  uVar10 = *(undefined8 *)(lVar8 + 0xe8);
  *(undefined8 *)(lVar8 + 0xb8) = local_a0;
  *(undefined8 *)(lVar8 + 0xc0) = uStack_98;
  *(undefined8 *)(lVar8 + 200) = local_90;
  *(undefined8 *)(lVar8 + 0xd0) = uStack_88;
  *(ulong *)(lVar8 + 0xd8) = uVar11;
  *(undefined8 *)(lVar8 + 0xe0) = local_78;
  *(undefined8 *)(lVar8 + 0xe8) = uStack_70;
  FUN_100864364(uVar4,uVar2,uVar5,uVar3,uVar1,uVar6,uVar10);
  uVar4 = *(undefined8 *)(lVar8 + 0xf0);
  uVar2 = *(undefined8 *)(lVar8 + 0xf8);
  uVar5 = *(undefined8 *)(lVar8 + 0x100);
  uVar3 = *(undefined8 *)(lVar8 + 0x108);
  uVar1 = *(undefined8 *)(lVar8 + 0x110);
  uVar6 = *(undefined8 *)(lVar8 + 0x118);
  uVar10 = *(undefined8 *)(lVar8 + 0x120);
  *(undefined8 *)(lVar8 + 0xf8) = 0;
  *(undefined8 *)(lVar8 + 0xf0) = 0;
  *(undefined8 *)(lVar8 + 0x108) = 0;
  *(undefined8 *)(lVar8 + 0x100) = 0;
  *(undefined8 *)(lVar8 + 0x118) = 0;
  *(undefined8 *)(lVar8 + 0x110) = 0;
  *(undefined8 *)(lVar8 + 0x120) = 0;
  FUN_100864364(uVar4,uVar2,uVar5,uVar3,uVar1,uVar6,uVar10);
  auVar12._8_8_ = param_9;
  auVar12._0_8_ = lVar8;
  return auVar12;
}



/* Address: 0x1008690c0 | FUN_1008690c0 */

void FUN_1008690c0(void)

{
  FUN_10086c6b0();
  return;
}



/* Address: 0x1008690d4 | FUN_1008690d4 */

void FUN_1008690d4(void)

{
  FUN_1007ffbd4();
  return;
}



/* Address: 0x1008690e0 | FUN_1008690e0 */

void FUN_1008690e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  FUN_10086c6b0();
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}



/* Address: 0x10086910c | FUN_10086910c */

void FUN_10086910c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_10086c6b0();
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}



/* Address: 0x100869130 | FUN_100869130 */

void FUN_100869130(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  uVar6 = *(undefined1 *)(param_2 + 0x30);
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  uVar5 = *(undefined8 *)(param_2 + 0x40);
  *param_1 = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar3;
  param_1[2] = uVar1;
  param_1[3] = uVar4;
  *(undefined1 *)(param_1 + 4) = uVar6;
  param_1[5] = uVar2;
  param_1[6] = uVar5;
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar5);
  return;
}



/* Address: 0x10086917c | FUN_10086917c */

void FUN_10086917c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  long lVar6;
  long *unaff_x20;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  lVar6 = *unaff_x20;
  uVar1 = *(undefined8 *)(lVar6 + 0x10);
  uVar3 = *(undefined8 *)(lVar6 + 0x18);
  uVar2 = *(undefined8 *)(lVar6 + 0x20);
  uVar4 = *(undefined8 *)(lVar6 + 0x28);
  uVar5 = *(undefined1 *)(lVar6 + 0x30);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
  local_88 = uVar1;
  uStack_80 = uVar3;
  local_78 = uVar2;
  uStack_70 = uVar4;
  local_68 = uVar5;
  local_60 = param_1;
  uStack_58 = param_2;
  FUN_1008691f4(&local_88);
  return;
}



/* Address: 0x1008691f4 | FUN_1008691f4 */

void FUN_1008691f4(undefined8 *param_1)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong *unaff_x20;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  if (((undefined *)param_1[2] != (undefined *)0x646f6874656d3a ||
       (undefined *)param_1[3] != &DAT_e700000000000000) &&
     (bVar2 = Swift::_stringCompareWithSmolCheck
                        ((undefined *)param_1[2],(undefined *)param_1[3],
                         (_StringComparisonResult)0x3a), !bVar2)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008692e8);
    (*pcVar1)();
  }
  uVar3 = param_1[5];
  uVar5 = uVar3 & 0xffffffffffff;
  if ((param_1[6] & 0x2000000000000000) != 0) {
    uVar5 = (ulong)param_1[6] >> 0x38 & 0xf;
  }
  if (uVar5 != 0) {
    FUN_10086b970();
    if ((uVar3 & 1) == 0) {
      uVar3 = *unaff_x20;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar5 = *unaff_x20;
      if ((uVar3 & 1) == 0) {
        FUN_100869e18();
        _swift_release(uVar5);
        *unaff_x20 = uVar3;
        uVar5 = uVar3;
      }
      uVar6 = *(undefined8 *)(uVar5 + 0x18);
      uVar7 = *(undefined8 *)(uVar5 + 0x28);
      uVar4 = *(undefined8 *)(uVar5 + 0x40);
      uVar8 = *param_1;
      uVar10 = param_1[3];
      uVar9 = param_1[2];
      *(undefined8 *)(uVar5 + 0x18) = param_1[1];
      *(undefined8 *)(uVar5 + 0x10) = uVar8;
      *(undefined8 *)(uVar5 + 0x28) = uVar10;
      *(undefined8 *)(uVar5 + 0x20) = uVar9;
      uVar8 = param_1[4];
      *(undefined8 *)(uVar5 + 0x38) = param_1[5];
      *(undefined8 *)(uVar5 + 0x30) = uVar8;
      *(undefined8 *)(uVar5 + 0x40) = param_1[6];
      _swift_bridgeObjectRelease(uVar4);
      _swift_bridgeObjectRelease(uVar7);
      _swift_bridgeObjectRelease(uVar6);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008692e4);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008692e0);
  (*pcVar1)();
}



/* Address: 0x1008692e8 | FUN_1008692e8 */

undefined1  [16] FUN_1008692e8(undefined8 *param_1)

{
  undefined8 uVar1;
  void *pvVar2;
  long lVar3;
  long *unaff_x20;
  undefined1 auVar4 [16];
  
  pvVar2 = (void *)0x90;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    pvVar2 = _malloc(0x90);
  }
  else {
    _swift_coroFrameAlloc(0x90,0x7c23);
  }
  *param_1 = pvVar2;
  *(long **)((long)pvVar2 + 0x80) = unaff_x20;
  lVar3 = *unaff_x20;
  *(long *)((long)pvVar2 + 0x88) = lVar3;
  uVar1 = *(undefined8 *)(lVar3 + 0x40);
  *(undefined8 *)((long)pvVar2 + 0x70) = *(undefined8 *)(lVar3 + 0x38);
  *(undefined8 *)((long)pvVar2 + 0x78) = uVar1;
  _swift_bridgeObjectRetain();
  auVar4._8_8_ = (undefined8 *)((long)pvVar2 + 0x70);
  auVar4._0_8_ = FUN_10086935c;
  return auVar4;
}



/* Address: 0x10086935c | FUN_10086935c */

void FUN_10086935c(undefined8 *param_1,uint param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  
  param_1 = (undefined8 *)*param_1;
  lVar2 = param_1[0x11];
  uVar3 = *(undefined8 *)(lVar2 + 0x18);
  uVar1 = *(undefined8 *)(lVar2 + 0x20);
  uVar4 = *(undefined8 *)(lVar2 + 0x28);
  uVar5 = *(undefined1 *)(lVar2 + 0x30);
  uVar6 = param_1[0xf];
  if ((param_2 & 1) == 0) {
    param_1[7] = *(undefined8 *)(lVar2 + 0x10);
    param_1[8] = uVar3;
    param_1[9] = uVar1;
    param_1[10] = uVar4;
    *(undefined1 *)(param_1 + 0xb) = uVar5;
    param_1[0xc] = param_1[0xe];
    param_1[0xd] = uVar6;
    _swift_bridgeObjectRetain(uVar3);
    _swift_bridgeObjectRetain(uVar4);
    FUN_1008691f4(param_1 + 7);
  }
  else {
    *param_1 = *(undefined8 *)(lVar2 + 0x10);
    param_1[1] = uVar3;
    param_1[2] = uVar1;
    param_1[3] = uVar4;
    *(undefined1 *)(param_1 + 4) = uVar5;
    param_1[5] = param_1[0xe];
    param_1[6] = uVar6;
    _swift_bridgeObjectRetain(uVar6);
    _swift_bridgeObjectRetain(uVar3);
    _swift_bridgeObjectRetain(uVar4);
    FUN_1008691f4(param_1);
    _swift_bridgeObjectRelease(param_1[0xf]);
  }
  _free(param_1);
  return;
}



/* Address: 0x100869408 | FUN_100869408 */

undefined1  [16] FUN_100869408(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  
  lVar8 = *(long *)(param_1 + 0x50);
  if (lVar8 == 0) {
    uVar6 = 0;
    uVar7 = 0;
  }
  else {
    uVar9 = *(undefined8 *)(param_1 + 0x48);
    uVar1 = *(undefined8 *)(param_1 + 0x58);
    uVar3 = *(undefined8 *)(param_1 + 0x60);
    uVar2 = *(undefined8 *)(param_1 + 0x68);
    uVar6 = *(ulong *)(param_1 + 0x70);
    uVar7 = *(undefined8 *)(param_1 + 0x78);
    uVar4 = uVar6;
    FUN_100858afc(uVar6,uVar7);
    if ((uVar4 & 1) == 0) {
      _swift_bridgeObjectRetain(uVar7);
    }
    else {
      FUN_100867d14(uVar9,lVar8,uVar1,uVar3,uVar2,uVar6,uVar7);
      uVar4 = uVar6;
      uVar5 = uVar7;
      FUN_100872ba8(uVar6,uVar7);
      FUN_100864364(uVar9,lVar8,uVar1,uVar3,uVar2,uVar6,uVar7);
      uVar6 = uVar4;
      uVar7 = uVar5;
    }
  }
  auVar10._8_8_ = uVar7;
  auVar10._0_8_ = uVar6;
  return auVar10;
}



/* Address: 0x1008694f0 | FUN_1008694f0 */

undefined1  [16] FUN_1008694f0(ulong *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *unaff_x20;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  
  param_1[2] = (ulong)unaff_x20;
  lVar6 = *unaff_x20;
  lVar9 = *(long *)(lVar6 + 0x50);
  if (lVar9 == 0) {
    uVar7 = 0;
    uVar8 = 0;
  }
  else {
    uVar10 = *(undefined8 *)(lVar6 + 0x48);
    uVar1 = *(undefined8 *)(lVar6 + 0x58);
    uVar3 = *(undefined8 *)(lVar6 + 0x60);
    uVar2 = *(undefined8 *)(lVar6 + 0x68);
    uVar7 = *(ulong *)(lVar6 + 0x70);
    uVar8 = *(ulong *)(lVar6 + 0x78);
    uVar4 = uVar7;
    FUN_100858afc(uVar7,uVar8);
    if ((uVar4 & 1) == 0) {
      _swift_bridgeObjectRetain(uVar8);
    }
    else {
      FUN_100867d14(uVar10,lVar9,uVar1,uVar3,uVar2,uVar7,uVar8);
      uVar4 = uVar7;
      uVar5 = uVar8;
      FUN_100872ba8();
      FUN_100864364(uVar10,lVar9,uVar1,uVar3,uVar2,uVar7,uVar8);
      uVar7 = uVar4;
      uVar8 = uVar5;
    }
  }
  *param_1 = uVar7;
  param_1[1] = uVar8;
  auVar11._8_8_ = param_1;
  auVar11._0_8_ = FUN_1008695ec;
  return auVar11;
}



/* Address: 0x1008695ec | FUN_1008695ec */

void FUN_1008695ec(undefined8 param_1,undefined8 param_2)

{
  FUN_100869db4(param_1,param_2,FUN_100868230);
  return;
}



/* Address: 0x1008695f8 | FUN_1008695f8 */

undefined1  [16] FUN_1008695f8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  
  lVar8 = *(long *)(param_1 + 0x88);
  if (lVar8 == 0) {
    uVar6 = 0;
    uVar7 = 0;
  }
  else {
    uVar9 = *(undefined8 *)(param_1 + 0x80);
    uVar1 = *(undefined8 *)(param_1 + 0x90);
    uVar3 = *(undefined8 *)(param_1 + 0x98);
    uVar2 = *(undefined8 *)(param_1 + 0xa0);
    uVar6 = *(ulong *)(param_1 + 0xa8);
    uVar7 = *(undefined8 *)(param_1 + 0xb0);
    uVar4 = uVar6;
    FUN_100858afc(uVar6,uVar7);
    if ((uVar4 & 1) == 0) {
      _swift_bridgeObjectRetain(uVar7);
    }
    else {
      FUN_100867d14(uVar9,lVar8,uVar1,uVar3,uVar2,uVar6,uVar7);
      uVar4 = uVar6;
      uVar5 = uVar7;
      FUN_100872ba8(uVar6,uVar7);
      FUN_100864364(uVar9,lVar8,uVar1,uVar3,uVar2,uVar6,uVar7);
      uVar6 = uVar4;
      uVar7 = uVar5;
    }
  }
  auVar10._8_8_ = uVar7;
  auVar10._0_8_ = uVar6;
  return auVar10;
}



/* Address: 0x1008696e0 | FUN_1008696e0 */

undefined1  [16] FUN_1008696e0(ulong *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *unaff_x20;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  
  param_1[2] = (ulong)unaff_x20;
  lVar6 = *unaff_x20;
  lVar9 = *(long *)(lVar6 + 0x88);
  if (lVar9 == 0) {
    uVar7 = 0;
    uVar8 = 0;
  }
  else {
    uVar10 = *(undefined8 *)(lVar6 + 0x80);
    uVar1 = *(undefined8 *)(lVar6 + 0x90);
    uVar3 = *(undefined8 *)(lVar6 + 0x98);
    uVar2 = *(undefined8 *)(lVar6 + 0xa0);
    uVar7 = *(ulong *)(lVar6 + 0xa8);
    uVar8 = *(ulong *)(lVar6 + 0xb0);
    uVar4 = uVar7;
    FUN_100858afc(uVar7,uVar8);
    if ((uVar4 & 1) == 0) {
      _swift_bridgeObjectRetain(uVar8);
    }
    else {
      FUN_100867d14(uVar10,lVar9,uVar1,uVar3,uVar2,uVar7,uVar8);
      uVar4 = uVar7;
      uVar5 = uVar8;
      FUN_100872ba8();
      FUN_100864364(uVar10,lVar9,uVar1,uVar3,uVar2,uVar7,uVar8);
      uVar7 = uVar4;
      uVar8 = uVar5;
    }
  }
  *param_1 = uVar7;
  param_1[1] = uVar8;
  auVar11._8_8_ = param_1;
  auVar11._0_8_ = FUN_1008697dc;
  return auVar11;
}



/* Address: 0x1008697dc | FUN_1008697dc */

void FUN_1008697dc(undefined8 param_1,undefined8 param_2)

{
  FUN_100869db4(param_1,param_2,FUN_100868564);
  return;
}



/* Address: 0x1008697e8 | FUN_1008697e8 */

undefined1  [16] FUN_1008697e8(ulong *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *unaff_x20;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  
  param_1[2] = (ulong)unaff_x20;
  lVar6 = *unaff_x20;
  lVar9 = *(long *)(lVar6 + 0xc0);
  if (lVar9 == 0) {
    uVar7 = 0;
    uVar8 = 0;
  }
  else {
    uVar10 = *(undefined8 *)(lVar6 + 0xb8);
    uVar1 = *(undefined8 *)(lVar6 + 200);
    uVar3 = *(undefined8 *)(lVar6 + 0xd0);
    uVar2 = *(undefined8 *)(lVar6 + 0xd8);
    uVar7 = *(ulong *)(lVar6 + 0xe0);
    uVar8 = *(ulong *)(lVar6 + 0xe8);
    uVar4 = uVar7;
    FUN_100858afc(uVar7,uVar8);
    if ((uVar4 & 1) == 0) {
      _swift_bridgeObjectRetain(uVar8);
    }
    else {
      FUN_100867d14(uVar10,lVar9,uVar1,uVar3,uVar2,uVar7,uVar8);
      uVar4 = uVar7;
      uVar5 = uVar8;
      FUN_100872ba8();
      FUN_100864364(uVar10,lVar9,uVar1,uVar3,uVar2,uVar7,uVar8);
      uVar7 = uVar4;
      uVar8 = uVar5;
    }
  }
  *param_1 = uVar7;
  param_1[1] = uVar8;
  auVar11._8_8_ = param_1;
  auVar11._0_8_ = FUN_1008698e4;
  return auVar11;
}



/* Address: 0x1008698e4 | FUN_1008698e4 */

void FUN_1008698e4(undefined8 param_1,undefined8 param_2)

{
  FUN_100869db4(param_1,param_2,FUN_1008688ac);
  return;
}



/* Address: 0x1008698f0 | FUN_1008698f0 */

void FUN_1008698f0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *(undefined8 *)(param_2 + 0xf0);
  uVar4 = *(undefined8 *)(param_2 + 0xf8);
  uVar2 = *(undefined8 *)(param_2 + 0x100);
  uVar5 = *(undefined8 *)(param_2 + 0x108);
  uVar3 = *(undefined8 *)(param_2 + 0x110);
  uVar6 = *(undefined8 *)(param_2 + 0x118);
  uVar7 = *(undefined8 *)(param_2 + 0x120);
  FUN_100867d14(uVar1,uVar4,uVar2,uVar5,uVar3,uVar6,uVar7);
  *param_1 = uVar1;
  param_1[1] = uVar4;
  param_1[2] = uVar2;
  param_1[3] = uVar5;
  param_1[4] = uVar3;
  param_1[5] = uVar6;
  param_1[6] = uVar7;
  return;
}



/* Address: 0x100869964 | FUN_100869964 */

void FUN_100869964(ulong param_1,long param_2)

{
  _StringGuts _Var1;
  _StringGuts _Var2;
  code *pcVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  undefined8 uVar17;
  ulong *unaff_x20;
  long lVar18;
  undefined8 uVar19;
  ulong local_98;
  long lStack_90;
  _StringGuts local_88;
  _StringGuts _Stack_80;
  byte local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if (param_2 == 0) {
    uVar7 = *unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar16 = *unaff_x20;
    if ((uVar7 & 1) == 0) {
      FUN_100869e18();
      _swift_release(uVar16);
      *unaff_x20 = uVar7;
      uVar16 = uVar7;
    }
    uVar8 = *(undefined8 *)(uVar16 + 0xf0);
    uVar10 = *(undefined8 *)(uVar16 + 0xf8);
    uVar17 = *(undefined8 *)(uVar16 + 0x100);
    uVar12 = *(undefined8 *)(uVar16 + 0x108);
    uVar19 = *(undefined8 *)(uVar16 + 0x110);
    uVar13 = *(undefined8 *)(uVar16 + 0x118);
    uVar14 = *(undefined8 *)(uVar16 + 0x120);
    *(undefined8 *)(uVar16 + 0xf8) = 0;
    *(undefined8 *)(uVar16 + 0xf0) = 0;
    *(undefined8 *)(uVar16 + 0x108) = 0;
    *(undefined8 *)(uVar16 + 0x100) = 0;
    *(undefined8 *)(uVar16 + 0x118) = 0;
    *(undefined8 *)(uVar16 + 0x110) = 0;
    *(undefined8 *)(uVar16 + 0x120) = 0;
  }
  else {
    uVar16 = *unaff_x20;
    lVar18 = *(long *)(uVar16 + 0xf8);
    if (lVar18 != 0) {
      uVar19 = *(undefined8 *)(uVar16 + 0xf0);
      _Var1.unknown = *(undefined **)(uVar16 + 0x100);
      _Var2.unknown = *(undefined **)(uVar16 + 0x108);
      uVar7 = *(ulong *)(uVar16 + 0x110);
      uVar8 = *(undefined8 *)(uVar16 + 0x118);
      uVar17 = *(undefined8 *)(uVar16 + 0x120);
      uVar16 = param_1;
      FUN_100858afc(param_1,param_2);
      if ((uVar16 & 1) == 0) {
        FUN_100867d14(uVar19,lVar18,_Var1.unknown,_Var2.unknown,uVar7,uVar8,uVar17);
      }
      else {
        local_88.unknown = FUN_100872b9c;
        _Stack_80.unknown = (undefined *)0x0;
        local_98 = param_1;
        lStack_90 = param_2;
        FUN_100867d14(uVar19,lVar18,_Var1.unknown,_Var2.unknown,uVar7,uVar8,uVar17);
        puVar5 = &DAT_100fe81f8;
        FUN_1000f7830(&DAT_100fe81f8,&DAT_100c7d850);
        puVar6 = puVar5;
        FUN_10086c640();
        Swift::String::UnicodeScalarView::_append(&local_98,puVar5,puVar6);
        _swift_bridgeObjectRelease(param_2);
        param_1 = 0;
        param_2 = -0x2000000000000000;
      }
      lVar11 = param_2;
      FUN_1008590a4();
      _swift_bridgeObjectRelease(uVar17);
      _swift_bridgeObjectRelease(param_2);
      if ((_Var1.unknown != (undefined *)0x6f636f746f72703a ||
           _Var2.unknown != (undefined *)0xe90000000000006c) &&
         (bVar4 = Swift::_stringCompareWithSmolCheck(_Var1,_Var2,(_StringComparisonResult)0x3a),
         !bVar4)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100869ca8);
        (*pcVar3)();
      }
      _swift_bridgeObjectRetain(lVar18);
      _swift_bridgeObjectRetain(_Var2.unknown);
      _swift_bridgeObjectRetain(lVar11);
      uVar9 = *unaff_x20;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar16 = *unaff_x20;
      if ((uVar9 & 1) == 0) {
        FUN_100869e18();
        _swift_release(uVar16);
        *unaff_x20 = uVar9;
        uVar16 = uVar9;
      }
      uVar8 = *(undefined8 *)(uVar16 + 0xf0);
      uVar12 = *(undefined8 *)(uVar16 + 0xf8);
      uVar17 = *(undefined8 *)(uVar16 + 0x100);
      uVar13 = *(undefined8 *)(uVar16 + 0x108);
      uVar10 = *(undefined8 *)(uVar16 + 0x110);
      uVar14 = *(undefined8 *)(uVar16 + 0x118);
      uVar15 = *(undefined8 *)(uVar16 + 0x120);
      *(undefined8 *)(uVar16 + 0xf0) = uVar19;
      *(long *)(uVar16 + 0xf8) = lVar18;
      *(undefined **)(uVar16 + 0x100) = _Var1.unknown;
      *(undefined **)(uVar16 + 0x108) = _Var2.unknown;
      *(ulong *)(uVar16 + 0x110) = uVar7 & 0xff;
      *(ulong *)(uVar16 + 0x118) = param_1;
      *(long *)(uVar16 + 0x120) = lVar11;
      FUN_100864364(uVar8,uVar12,uVar17,uVar13,uVar10,uVar14,uVar15);
      _swift_bridgeObjectRelease(lVar11);
      _swift_bridgeObjectRelease(_Var2.unknown);
      _swift_bridgeObjectRelease(lVar18);
      return;
    }
    FUN_100859230(&local_98,0x6f636f746f72703a,0xe90000000000006c,0x6f636f746f72703a,
                  0xe90000000000006c,param_1,param_2);
    if (((local_88.unknown != (undefined *)0x6f636f746f72703a) ||
        (_Stack_80.unknown != (undefined *)0xe90000000000006c)) &&
       (bVar4 = Swift::_stringCompareWithSmolCheck(local_88,_Stack_80,(_StringComparisonResult)0x3a)
       , !bVar4)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100869cac);
      (*pcVar3)();
    }
    uVar7 = *unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar16 = *unaff_x20;
    if ((uVar7 & 1) == 0) {
      FUN_100869e18();
      _swift_release(uVar16);
      *unaff_x20 = uVar7;
      uVar16 = uVar7;
    }
    uVar8 = *(undefined8 *)(uVar16 + 0xf0);
    uVar10 = *(undefined8 *)(uVar16 + 0xf8);
    uVar17 = *(undefined8 *)(uVar16 + 0x100);
    uVar12 = *(undefined8 *)(uVar16 + 0x108);
    uVar19 = *(undefined8 *)(uVar16 + 0x110);
    uVar13 = *(undefined8 *)(uVar16 + 0x118);
    uVar14 = *(undefined8 *)(uVar16 + 0x120);
    *(ulong *)(uVar16 + 0xf0) = local_98;
    *(long *)(uVar16 + 0xf8) = lStack_90;
    *(undefined **)(uVar16 + 0x100) = local_88.unknown;
    *(undefined **)(uVar16 + 0x108) = _Stack_80.unknown;
    *(ulong *)(uVar16 + 0x110) = (ulong)local_78;
    *(undefined8 *)(uVar16 + 0x118) = local_70;
    *(undefined8 *)(uVar16 + 0x120) = uStack_68;
  }
  FUN_100864364(uVar8,uVar10,uVar17,uVar12,uVar19,uVar13,uVar14);
  return;
}



/* Address: 0x100869cac | FUN_100869cac */

undefined1  [16] FUN_100869cac(ulong *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *unaff_x20;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  
  param_1[2] = (ulong)unaff_x20;
  lVar6 = *unaff_x20;
  lVar9 = *(long *)(lVar6 + 0xf8);
  if (lVar9 == 0) {
    uVar7 = 0;
    uVar8 = 0;
  }
  else {
    uVar10 = *(undefined8 *)(lVar6 + 0xf0);
    uVar1 = *(undefined8 *)(lVar6 + 0x100);
    uVar3 = *(undefined8 *)(lVar6 + 0x108);
    uVar2 = *(undefined8 *)(lVar6 + 0x110);
    uVar7 = *(ulong *)(lVar6 + 0x118);
    uVar8 = *(ulong *)(lVar6 + 0x120);
    uVar4 = uVar7;
    FUN_100858afc(uVar7,uVar8);
    if ((uVar4 & 1) == 0) {
      _swift_bridgeObjectRetain(uVar8);
    }
    else {
      FUN_100867d14(uVar10,lVar9,uVar1,uVar3,uVar2,uVar7,uVar8);
      uVar4 = uVar7;
      uVar5 = uVar8;
      FUN_100872ba8();
      FUN_100864364(uVar10,lVar9,uVar1,uVar3,uVar2,uVar7,uVar8);
      uVar7 = uVar4;
      uVar8 = uVar5;
    }
  }
  *param_1 = uVar7;
  param_1[1] = uVar8;
  auVar11._8_8_ = param_1;
  auVar11._0_8_ = FUN_100869da8;
  return auVar11;
}



/* Address: 0x100869da8 | FUN_100869da8 */

void FUN_100869da8(undefined8 param_1,undefined8 param_2)

{
  FUN_100869db4(param_1,param_2,FUN_100869964);
  return;
}



/* Address: 0x100869db4 | FUN_100869db4 */

void FUN_100869db4(undefined8 *param_1,ulong param_2,code *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  if ((param_2 & 1) != 0) {
    _swift_bridgeObjectRetain(uVar2);
    (*param_3)(uVar1,uVar2);
    _swift_bridgeObjectRelease(uVar2);
    return;
  }
  (*param_3)(uVar1,uVar2);
  return;
}



/* Address: 0x100869e18 | FUN_100869e18 */

long FUN_100869e18(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  long lVar41;
  long lVar42;
  undefined8 uVar43;
  long *unaff_x20;
  
  lVar42 = *unaff_x20;
  lVar1 = unaff_x20[2];
  lVar21 = unaff_x20[3];
  lVar2 = unaff_x20[4];
  lVar22 = unaff_x20[5];
  lVar41 = unaff_x20[6];
  lVar3 = unaff_x20[7];
  lVar23 = unaff_x20[8];
  lVar4 = unaff_x20[9];
  lVar24 = unaff_x20[10];
  lVar5 = unaff_x20[0xb];
  lVar25 = unaff_x20[0xc];
  lVar6 = unaff_x20[0xd];
  lVar26 = unaff_x20[0xe];
  lVar7 = unaff_x20[0xf];
  lVar27 = unaff_x20[0x10];
  lVar8 = unaff_x20[0x11];
  lVar28 = unaff_x20[0x12];
  lVar9 = unaff_x20[0x13];
  lVar29 = unaff_x20[0x14];
  lVar10 = unaff_x20[0x15];
  lVar30 = unaff_x20[0x16];
  lVar11 = unaff_x20[0x17];
  lVar31 = unaff_x20[0x18];
  lVar12 = unaff_x20[0x19];
  lVar32 = unaff_x20[0x1a];
  lVar13 = unaff_x20[0x1b];
  lVar33 = unaff_x20[0x1c];
  lVar14 = unaff_x20[0x1d];
  lVar34 = unaff_x20[0x1e];
  lVar15 = unaff_x20[0x1f];
  lVar35 = unaff_x20[0x20];
  lVar16 = unaff_x20[0x21];
  lVar36 = unaff_x20[0x22];
  lVar17 = unaff_x20[0x23];
  lVar37 = unaff_x20[0x24];
  _swift_allocObject(lVar42,0x128,7);
  *(undefined8 *)(lVar42 + 0x88) = 0;
  *(undefined8 *)(lVar42 + 0x80) = 0;
  *(undefined8 *)(lVar42 + 0x98) = 0;
  *(undefined8 *)(lVar42 + 0x90) = 0;
  *(undefined8 *)(lVar42 + 0xa8) = 0;
  *(undefined8 *)(lVar42 + 0xa0) = 0;
  *(undefined8 *)(lVar42 + 0xb8) = 0;
  *(undefined8 *)(lVar42 + 0xb0) = 0;
  *(undefined8 *)(lVar42 + 200) = 0;
  *(undefined8 *)(lVar42 + 0xc0) = 0;
  *(undefined8 *)(lVar42 + 0xd8) = 0;
  *(undefined8 *)(lVar42 + 0xd0) = 0;
  *(undefined8 *)(lVar42 + 0xe8) = 0;
  *(undefined8 *)(lVar42 + 0xe0) = 0;
  *(undefined8 *)(lVar42 + 0xf8) = 0;
  *(undefined8 *)(lVar42 + 0xf0) = 0;
  *(undefined8 *)(lVar42 + 0x108) = 0;
  *(undefined8 *)(lVar42 + 0x100) = 0;
  *(undefined8 *)(lVar42 + 0x118) = 0;
  *(undefined8 *)(lVar42 + 0x110) = 0;
  *(undefined8 *)(lVar42 + 0x120) = 0;
  *(long *)(lVar42 + 0x10) = lVar1;
  *(long *)(lVar42 + 0x18) = lVar21;
  *(long *)(lVar42 + 0x20) = lVar2;
  *(long *)(lVar42 + 0x28) = lVar22;
  *(char *)(lVar42 + 0x30) = (char)lVar41;
  *(long *)(lVar42 + 0x38) = lVar3;
  *(long *)(lVar42 + 0x40) = lVar23;
  _swift_bridgeObjectRetain(lVar21);
  _swift_bridgeObjectRetain(lVar22);
  _swift_bridgeObjectRetain(lVar23);
  FUN_100867d14(lVar4,lVar24,lVar5,lVar25,lVar6,lVar26,lVar7);
  FUN_100867d14(lVar27,lVar8,lVar28,lVar9,lVar29,lVar10,lVar30);
  FUN_100867d14(lVar11,lVar31,lVar12,lVar32,lVar13,lVar33,lVar14);
  FUN_100867d14(lVar34,lVar15,lVar35,lVar16,lVar36,lVar17,lVar37);
  *(long *)(lVar42 + 0x48) = lVar4;
  *(long *)(lVar42 + 0x50) = lVar24;
  *(long *)(lVar42 + 0x58) = lVar5;
  *(long *)(lVar42 + 0x60) = lVar25;
  *(long *)(lVar42 + 0x68) = lVar6;
  *(long *)(lVar42 + 0x70) = lVar26;
  *(long *)(lVar42 + 0x78) = lVar7;
  FUN_100864364(0,0,0,0,0,0,0);
  uVar18 = *(undefined8 *)(lVar42 + 0x80);
  uVar38 = *(undefined8 *)(lVar42 + 0x88);
  uVar19 = *(undefined8 *)(lVar42 + 0x90);
  uVar39 = *(undefined8 *)(lVar42 + 0x98);
  uVar20 = *(undefined8 *)(lVar42 + 0xa0);
  uVar40 = *(undefined8 *)(lVar42 + 0xa8);
  uVar43 = *(undefined8 *)(lVar42 + 0xb0);
  *(long *)(lVar42 + 0x80) = lVar27;
  *(long *)(lVar42 + 0x88) = lVar8;
  *(long *)(lVar42 + 0x90) = lVar28;
  *(long *)(lVar42 + 0x98) = lVar9;
  *(long *)(lVar42 + 0xa0) = lVar29;
  *(long *)(lVar42 + 0xa8) = lVar10;
  *(long *)(lVar42 + 0xb0) = lVar30;
  FUN_100864364(uVar18,uVar38,uVar19,uVar39,uVar20,uVar40,uVar43);
  uVar18 = *(undefined8 *)(lVar42 + 0xb8);
  uVar38 = *(undefined8 *)(lVar42 + 0xc0);
  uVar19 = *(undefined8 *)(lVar42 + 200);
  uVar39 = *(undefined8 *)(lVar42 + 0xd0);
  uVar20 = *(undefined8 *)(lVar42 + 0xd8);
  uVar40 = *(undefined8 *)(lVar42 + 0xe0);
  uVar43 = *(undefined8 *)(lVar42 + 0xe8);
  *(long *)(lVar42 + 0xb8) = lVar11;
  *(long *)(lVar42 + 0xc0) = lVar31;
  *(long *)(lVar42 + 200) = lVar12;
  *(long *)(lVar42 + 0xd0) = lVar32;
  *(long *)(lVar42 + 0xd8) = lVar13;
  *(long *)(lVar42 + 0xe0) = lVar33;
  *(long *)(lVar42 + 0xe8) = lVar14;
  FUN_100864364(uVar18,uVar38,uVar19,uVar39,uVar20,uVar40,uVar43);
  uVar18 = *(undefined8 *)(lVar42 + 0xf0);
  uVar38 = *(undefined8 *)(lVar42 + 0xf8);
  uVar19 = *(undefined8 *)(lVar42 + 0x100);
  uVar39 = *(undefined8 *)(lVar42 + 0x108);
  uVar20 = *(undefined8 *)(lVar42 + 0x110);
  uVar40 = *(undefined8 *)(lVar42 + 0x118);
  uVar43 = *(undefined8 *)(lVar42 + 0x120);
  *(long *)(lVar42 + 0xf0) = lVar34;
  *(long *)(lVar42 + 0xf8) = lVar15;
  *(long *)(lVar42 + 0x100) = lVar35;
  *(long *)(lVar42 + 0x108) = lVar16;
  *(long *)(lVar42 + 0x110) = lVar36;
  *(long *)(lVar42 + 0x118) = lVar17;
  *(long *)(lVar42 + 0x120) = lVar37;
  FUN_100864364(uVar18,uVar38,uVar19,uVar39,uVar20,uVar40,uVar43);
  return lVar42;
}



/* Address: 0x10086a0b0 | FUN_10086a0b0 */

void FUN_10086a0b0(Hasher param_1)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined8 uVar3;
  __uint8 _Var4;
  String SVar5;
  String SVar6;
  long unaff_x20;
  Hasher HVar7;
  Hasher HVar8;
  Hasher HVar9;
  long lVar10;
  undefined8 uVar11;
  char *pcVar12;
  undefined8 uVar13;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  HVar7.unknown = ((String *)(unaff_x20 + 0x20))->str;
  uVar11 = *(undefined8 *)(unaff_x20 + 0x28);
  SVar5 = *(String *)(unaff_x20 + 0x20);
  HVar9.unknown = ((String *)(unaff_x20 + 0x38))->str;
  uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
  SVar6 = *(String *)(unaff_x20 + 0x38);
  _Var4 = *(__uint8 *)(unaff_x20 + 0x30);
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar11);
  _swift_bridgeObjectRetain(uVar3);
  Swift::String::hash(param_1,SVar5);
  Swift::Hasher::_combine(_Var4,HVar7);
  Swift::String::hash(param_1,SVar6);
  _swift_bridgeObjectRelease(uVar3);
  _swift_bridgeObjectRelease(uVar11);
  _swift_bridgeObjectRelease(uVar1);
  HVar7.unknown = *(undefined **)(unaff_x20 + 0x50);
  if (HVar7.unknown == (undefined *)0x0) {
    Swift::Hasher::_combine(0,HVar9);
    HVar8.unknown = *(undefined **)(unaff_x20 + 0x88);
    HVar7.unknown = HVar9.unknown;
  }
  else {
    pcVar2 = ((String *)(unaff_x20 + 0x70))->str;
    uVar3 = *(undefined8 *)(unaff_x20 + 0x78);
    SVar6 = *(String *)(unaff_x20 + 0x70);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x60);
    uVar11 = *(undefined8 *)(unaff_x20 + 0x68);
    pcVar12 = ((String *)(unaff_x20 + 0x58))->str;
    SVar5 = *(String *)(unaff_x20 + 0x58);
    uVar13 = *(undefined8 *)(unaff_x20 + 0x48);
    Swift::Hasher::_combine(1,HVar9);
    _swift_bridgeObjectRetain(HVar7.unknown);
    _swift_bridgeObjectRetain(uVar1);
    _swift_bridgeObjectRetain(uVar3);
    HVar9.unknown = pcVar12;
    Swift::String::hash(param_1,SVar5);
    Swift::Hasher::_combine((__uint8)uVar11,HVar9);
    Swift::String::hash(param_1,SVar6);
    FUN_100864364(uVar13,HVar7.unknown,pcVar12,uVar1,uVar11,pcVar2,uVar3);
    HVar8.unknown = *(undefined **)(unaff_x20 + 0x88);
  }
  if (HVar8.unknown == (undefined *)0x0) {
    Swift::Hasher::_combine(0,HVar7);
    HVar9.unknown = *(undefined **)(unaff_x20 + 0xc0);
    HVar8.unknown = HVar7.unknown;
  }
  else {
    pcVar2 = ((String *)(unaff_x20 + 0xa8))->str;
    uVar3 = *(undefined8 *)(unaff_x20 + 0xb0);
    SVar6 = *(String *)(unaff_x20 + 0xa8);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x98);
    uVar11 = *(undefined8 *)(unaff_x20 + 0xa0);
    pcVar12 = ((String *)(unaff_x20 + 0x90))->str;
    SVar5 = *(String *)(unaff_x20 + 0x90);
    uVar13 = *(undefined8 *)(unaff_x20 + 0x80);
    Swift::Hasher::_combine(1,HVar7);
    _swift_bridgeObjectRetain(HVar8.unknown);
    _swift_bridgeObjectRetain(uVar1);
    _swift_bridgeObjectRetain(uVar3);
    HVar9.unknown = pcVar12;
    Swift::String::hash(param_1,SVar5);
    Swift::Hasher::_combine((__uint8)uVar11,HVar9);
    Swift::String::hash(param_1,SVar6);
    FUN_100864364(uVar13,HVar8.unknown,pcVar12,uVar1,uVar11,pcVar2,uVar3);
    HVar9.unknown = *(undefined **)(unaff_x20 + 0xc0);
  }
  if (HVar9.unknown == (undefined *)0x0) {
    Swift::Hasher::_combine(0,HVar8);
    lVar10 = *(long *)(unaff_x20 + 0xf8);
    HVar9.unknown = HVar8.unknown;
  }
  else {
    pcVar2 = ((String *)(unaff_x20 + 0xe0))->str;
    uVar3 = *(undefined8 *)(unaff_x20 + 0xe8);
    SVar6 = *(String *)(unaff_x20 + 0xe0);
    uVar1 = *(undefined8 *)(unaff_x20 + 0xd0);
    uVar11 = *(undefined8 *)(unaff_x20 + 0xd8);
    pcVar12 = ((String *)(unaff_x20 + 200))->str;
    SVar5 = *(String *)(unaff_x20 + 200);
    uVar13 = *(undefined8 *)(unaff_x20 + 0xb8);
    Swift::Hasher::_combine(1,HVar8);
    _swift_bridgeObjectRetain(HVar9.unknown);
    _swift_bridgeObjectRetain(uVar1);
    _swift_bridgeObjectRetain(uVar3);
    HVar7.unknown = pcVar12;
    Swift::String::hash(param_1,SVar5);
    Swift::Hasher::_combine((__uint8)uVar11,HVar7);
    Swift::String::hash(param_1,SVar6);
    FUN_100864364(uVar13,HVar9.unknown,pcVar12,uVar1,uVar11,pcVar2,uVar3);
    lVar10 = *(long *)(unaff_x20 + 0xf8);
  }
  if (lVar10 == 0) {
    Swift::Hasher::_combine(0,HVar9);
    return;
  }
  pcVar2 = ((String *)(unaff_x20 + 0x118))->str;
  uVar3 = *(undefined8 *)(unaff_x20 + 0x120);
  SVar6 = *(String *)(unaff_x20 + 0x118);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x108);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x110);
  pcVar12 = ((String *)(unaff_x20 + 0x100))->str;
  SVar5 = *(String *)(unaff_x20 + 0x100);
  uVar13 = *(undefined8 *)(unaff_x20 + 0xf0);
  Swift::Hasher::_combine(1,HVar9);
  _swift_bridgeObjectRetain(lVar10);
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar3);
  HVar9.unknown = pcVar12;
  Swift::String::hash(param_1,SVar5);
  Swift::Hasher::_combine((__uint8)uVar11,HVar9);
  Swift::String::hash(param_1,SVar6);
  FUN_100864364(uVar13,lVar10,pcVar12,uVar1,uVar11,pcVar2,uVar3);
  return;
}



/* Address: 0x10086a3a8 | FUN_10086a3a8 */

void FUN_10086a3a8(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_bridgeObjectRelease(uVar2);
  _swift_bridgeObjectRelease(uVar1);
  FUN_100864364(*(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50),
                *(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)(unaff_x20 + 0x60),
                *(undefined8 *)(unaff_x20 + 0x68),*(undefined8 *)(unaff_x20 + 0x70),
                *(undefined8 *)(unaff_x20 + 0x78));
  FUN_100864364(*(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0));
  FUN_100864364(*(undefined8 *)(unaff_x20 + 0xb8),*(undefined8 *)(unaff_x20 + 0xc0),
                *(undefined8 *)(unaff_x20 + 200),*(undefined8 *)(unaff_x20 + 0xd0),
                *(undefined8 *)(unaff_x20 + 0xd8),*(undefined8 *)(unaff_x20 + 0xe0),
                *(undefined8 *)(unaff_x20 + 0xe8));
  FUN_100864364(*(undefined8 *)(unaff_x20 + 0xf0),*(undefined8 *)(unaff_x20 + 0xf8),
                *(undefined8 *)(unaff_x20 + 0x100),*(undefined8 *)(unaff_x20 + 0x108),
                *(undefined8 *)(unaff_x20 + 0x110),*(undefined8 *)(unaff_x20 + 0x118),
                *(undefined8 *)(unaff_x20 + 0x120));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x10086a444 | thunk_FUN_10086ade8 */

void thunk_FUN_10086ade8(void)

{
  FUN_10086ade8();
  return;
}



/* Address: 0x10086a448 | FUN_10086a448 */

void FUN_10086a448(void)

{
  FUN_10086a0b0();
  return;
}



/* Address: 0x10086a468 | thunk_FUN_10086ae28 */

void thunk_FUN_10086ae28(void)

{
  FUN_10086ae28();
  return;
}



/* Address: 0x10086a46c | FUN_10086a46c */

void FUN_10086a46c(undefined8 *param_1,undefined8 *param_2)

{
  FUN_10086bb70(*param_1,*param_2);
  return;
}



/* Address: 0x10086a478 | FUN_10086a478 */

undefined1  [16] FUN_10086a478(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  void *pvVar7;
  long lVar8;
  long *unaff_x20;
  undefined1 auVar9 [16];
  
  pvVar7 = (void *)0xe8;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    pvVar7 = _malloc(0xe8);
  }
  else {
    _swift_coroFrameAlloc(0xe8,0x5ca1);
  }
  *param_1 = pvVar7;
  *(long **)((long)pvVar7 + 0xe0) = unaff_x20;
  lVar8 = *unaff_x20;
  uVar3 = *(undefined8 *)(lVar8 + 0x18);
  uVar1 = *(undefined8 *)(lVar8 + 0x20);
  uVar4 = *(undefined8 *)(lVar8 + 0x28);
  uVar6 = *(undefined1 *)(lVar8 + 0x30);
  uVar2 = *(undefined8 *)(lVar8 + 0x38);
  uVar5 = *(undefined8 *)(lVar8 + 0x40);
  *(undefined8 *)((long)pvVar7 + 0x70) = *(undefined8 *)(lVar8 + 0x10);
  *(undefined8 *)((long)pvVar7 + 0x78) = uVar3;
  *(undefined8 *)((long)pvVar7 + 0x80) = uVar1;
  *(undefined8 *)((long)pvVar7 + 0x88) = uVar4;
  *(undefined1 *)((long)pvVar7 + 0x90) = uVar6;
  *(undefined8 *)((long)pvVar7 + 0x98) = uVar2;
  *(undefined8 *)((long)pvVar7 + 0xa0) = uVar5;
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar5);
  auVar9._8_8_ = (undefined8 *)((long)pvVar7 + 0x70);
  auVar9._0_8_ = FUN_10086a518;
  return auVar9;
}



/* Address: 0x10086a518 | FUN_10086a518 */

void FUN_10086a518(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  param_1 = (undefined8 *)*param_1;
  if ((param_2 & 1) == 0) {
    param_1[8] = param_1[0xf];
    param_1[7] = param_1[0xe];
    param_1[10] = param_1[0x11];
    param_1[9] = param_1[0x10];
    param_1[0xc] = param_1[0x13];
    param_1[0xb] = param_1[0x12];
    param_1[0xd] = param_1[0x14];
    FUN_1008691f4(param_1 + 7);
  }
  else {
    param_1[1] = param_1[0xf];
    *param_1 = param_1[0xe];
    param_1[3] = param_1[0x11];
    param_1[2] = param_1[0x10];
    param_1[5] = param_1[0x13];
    param_1[4] = param_1[0x12];
    param_1[6] = param_1[0x14];
    FUN_100864328(param_1,param_1 + 0x15);
    FUN_1008691f4(param_1);
    uVar1 = param_1[0x11];
    uVar2 = param_1[0x14];
    _swift_bridgeObjectRelease(param_1[0xf]);
    _swift_bridgeObjectRelease(uVar1);
    _swift_bridgeObjectRelease(uVar2);
  }
  _free(param_1);
  return;
}



/* Address: 0x10086a5c0 | FUN_10086a5c0 */

undefined1  [16] FUN_10086a5c0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  void *pvVar6;
  undefined8 uVar7;
  long lVar8;
  long *unaff_x20;
  undefined1 auVar9 [16];
  
  pvVar6 = (void *)0xb0;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    pvVar6 = _malloc(0xb0);
  }
  else {
    _swift_coroFrameAlloc(0xb0,0xf766);
  }
  *param_1 = pvVar6;
  *(long **)((long)pvVar6 + 0xa8) = unaff_x20;
  lVar8 = *unaff_x20;
  uVar3 = *(undefined8 *)(lVar8 + 0x50);
  uVar1 = *(undefined8 *)(lVar8 + 0x58);
  uVar4 = *(undefined8 *)(lVar8 + 0x60);
  uVar2 = *(undefined8 *)(lVar8 + 0x68);
  uVar5 = *(undefined8 *)(lVar8 + 0x70);
  uVar7 = *(undefined8 *)(lVar8 + 0x78);
  *(undefined8 *)((long)pvVar6 + 0x38) = *(undefined8 *)(lVar8 + 0x48);
  *(undefined8 *)((long)pvVar6 + 0x40) = uVar3;
  *(undefined8 *)((long)pvVar6 + 0x48) = uVar1;
  *(undefined8 *)((long)pvVar6 + 0x50) = uVar4;
  *(undefined8 *)((long)pvVar6 + 0x58) = uVar2;
  *(undefined8 *)((long)pvVar6 + 0x60) = uVar5;
  *(undefined8 *)((long)pvVar6 + 0x68) = uVar7;
  FUN_100867d14();
  auVar9._8_8_ = (undefined8 *)((long)pvVar6 + 0x38);
  auVar9._0_8_ = FUN_10086a644;
  return auVar9;
}



/* Address: 0x10086a644 | FUN_10086a644 */

void FUN_10086a644(undefined8 *param_1,ulong param_2)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  code *pcVar5;
  bool bVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong *puVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 uVar20;
  undefined8 uVar21;
  undefined1 auVar22 [16];
  
  param_1 = (undefined8 *)*param_1;
  if ((param_2 & 1) == 0) {
    auVar2 = *(undefined1 (*) [16])(param_1 + 0xb);
    pauVar1 = (undefined1 (*) [16])(param_1 + 9);
    uVar20 = *(undefined8 *)*pauVar1;
    auVar19 = *pauVar1;
    auVar18 = *pauVar1;
    pauVar1 = (undefined1 (*) [16])(param_1 + 7);
    uVar21 = *(undefined8 *)*pauVar1;
    auVar4 = *pauVar1;
    auVar3 = *pauVar1;
    uVar17 = param_1[0xd];
    if (param_1[8] != 0) {
      if (((undefined *)param_1[9] != (undefined *)0x656d656863733a ||
           (undefined *)param_1[10] != &DAT_e700000000000000) &&
         (bVar6 = Swift::_stringCompareWithSmolCheck
                            ((undefined *)param_1[9],(undefined *)param_1[10],
                             (_StringComparisonResult)0x3a), !bVar6)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10086a7b0);
        (*pcVar5)();
      }
    }
    auVar22 = NEON_ext(auVar2,auVar2,8,1);
    auVar18 = NEON_ext(auVar18,auVar19,8,1);
    auVar19 = NEON_ext(auVar3,auVar4,8,1);
    puVar15 = (ulong *)param_1[0x15];
    uVar7 = *puVar15;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar16 = *puVar15;
    if ((uVar7 & 1) == 0) {
      puVar15 = (ulong *)param_1[0x15];
      FUN_100869e18();
      _swift_release(uVar16);
      *puVar15 = uVar7;
      uVar16 = uVar7;
    }
    uVar8 = *(undefined8 *)(uVar16 + 0x48);
    uVar9 = *(undefined8 *)(uVar16 + 0x50);
    uVar10 = *(undefined8 *)(uVar16 + 0x58);
    uVar11 = *(undefined8 *)(uVar16 + 0x60);
    uVar12 = *(undefined8 *)(uVar16 + 0x68);
    uVar13 = *(undefined8 *)(uVar16 + 0x70);
    uVar14 = *(undefined8 *)(uVar16 + 0x78);
    *(long *)(uVar16 + 0x50) = auVar19._0_8_;
    *(undefined8 *)(uVar16 + 0x48) = uVar21;
    *(long *)(uVar16 + 0x60) = auVar18._0_8_;
    *(undefined8 *)(uVar16 + 0x58) = uVar20;
    *(long *)(uVar16 + 0x70) = auVar22._0_8_;
    *(long *)(uVar16 + 0x68) = auVar2._0_8_;
    *(undefined8 *)(uVar16 + 0x78) = uVar17;
  }
  else {
    param_1[1] = param_1[8];
    *param_1 = param_1[7];
    param_1[3] = param_1[10];
    param_1[2] = param_1[9];
    param_1[5] = param_1[0xc];
    param_1[4] = param_1[0xb];
    param_1[6] = param_1[0xd];
    FUN_10086c71c(param_1,param_1 + 0xe);
    FUN_100868bd8(param_1);
    uVar8 = param_1[7];
    uVar9 = param_1[8];
    uVar10 = param_1[9];
    uVar11 = param_1[10];
    uVar12 = param_1[0xb];
    uVar13 = param_1[0xc];
    uVar14 = param_1[0xd];
  }
  FUN_100864364(uVar8,uVar9,uVar10,uVar11,uVar12,uVar13,uVar14);
  _free(param_1);
  return;
}



/* Address: 0x10086a7b0 | FUN_10086a7b0 */

undefined1  [16] FUN_10086a7b0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  void *pvVar6;
  undefined8 uVar7;
  long lVar8;
  long *unaff_x20;
  undefined1 auVar9 [16];
  
  pvVar6 = (void *)0xb0;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    pvVar6 = _malloc(0xb0);
  }
  else {
    _swift_coroFrameAlloc(0xb0,0x41ad);
  }
  *param_1 = pvVar6;
  *(long **)((long)pvVar6 + 0xa8) = unaff_x20;
  lVar8 = *unaff_x20;
  uVar3 = *(undefined8 *)(lVar8 + 0x88);
  uVar1 = *(undefined8 *)(lVar8 + 0x90);
  uVar4 = *(undefined8 *)(lVar8 + 0x98);
  uVar2 = *(undefined8 *)(lVar8 + 0xa0);
  uVar5 = *(undefined8 *)(lVar8 + 0xa8);
  uVar7 = *(undefined8 *)(lVar8 + 0xb0);
  *(undefined8 *)((long)pvVar6 + 0x38) = *(undefined8 *)(lVar8 + 0x80);
  *(undefined8 *)((long)pvVar6 + 0x40) = uVar3;
  *(undefined8 *)((long)pvVar6 + 0x48) = uVar1;
  *(undefined8 *)((long)pvVar6 + 0x50) = uVar4;
  *(undefined8 *)((long)pvVar6 + 0x58) = uVar2;
  *(undefined8 *)((long)pvVar6 + 0x60) = uVar5;
  *(undefined8 *)((long)pvVar6 + 0x68) = uVar7;
  FUN_100867d14();
  auVar9._8_8_ = (undefined8 *)((long)pvVar6 + 0x38);
  auVar9._0_8_ = FUN_10086a834;
  return auVar9;
}



/* Address: 0x10086a834 | FUN_10086a834 */

void FUN_10086a834(undefined8 *param_1,ulong param_2)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  code *pcVar5;
  bool bVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong *puVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 uVar20;
  undefined8 uVar21;
  undefined1 auVar22 [16];
  
  param_1 = (undefined8 *)*param_1;
  if ((param_2 & 1) == 0) {
    auVar2 = *(undefined1 (*) [16])(param_1 + 0xb);
    pauVar1 = (undefined1 (*) [16])(param_1 + 9);
    uVar20 = *(undefined8 *)*pauVar1;
    auVar19 = *pauVar1;
    auVar18 = *pauVar1;
    pauVar1 = (undefined1 (*) [16])(param_1 + 7);
    uVar21 = *(undefined8 *)*pauVar1;
    auVar4 = *pauVar1;
    auVar3 = *pauVar1;
    uVar17 = param_1[0xd];
    if (param_1[8] != 0) {
      if (((undefined *)param_1[9] != (undefined *)0x69726f687475613a ||
           (undefined *)param_1[10] != (undefined *)0xea00000000007974) &&
         (bVar6 = Swift::_stringCompareWithSmolCheck
                            ((undefined *)param_1[9],(undefined *)param_1[10],
                             (_StringComparisonResult)0x3a), !bVar6)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10086a9a4);
        (*pcVar5)();
      }
    }
    auVar22 = NEON_ext(auVar2,auVar2,8,1);
    auVar18 = NEON_ext(auVar18,auVar19,8,1);
    auVar19 = NEON_ext(auVar3,auVar4,8,1);
    puVar15 = (ulong *)param_1[0x15];
    uVar7 = *puVar15;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar16 = *puVar15;
    if ((uVar7 & 1) == 0) {
      puVar15 = (ulong *)param_1[0x15];
      FUN_100869e18();
      _swift_release(uVar16);
      *puVar15 = uVar7;
      uVar16 = uVar7;
    }
    uVar8 = *(undefined8 *)(uVar16 + 0x80);
    uVar9 = *(undefined8 *)(uVar16 + 0x88);
    uVar10 = *(undefined8 *)(uVar16 + 0x90);
    uVar11 = *(undefined8 *)(uVar16 + 0x98);
    uVar12 = *(undefined8 *)(uVar16 + 0xa0);
    uVar13 = *(undefined8 *)(uVar16 + 0xa8);
    uVar14 = *(undefined8 *)(uVar16 + 0xb0);
    *(long *)(uVar16 + 0x88) = auVar19._0_8_;
    *(undefined8 *)(uVar16 + 0x80) = uVar21;
    *(long *)(uVar16 + 0x98) = auVar18._0_8_;
    *(undefined8 *)(uVar16 + 0x90) = uVar20;
    *(long *)(uVar16 + 0xa8) = auVar22._0_8_;
    *(long *)(uVar16 + 0xa0) = auVar2._0_8_;
    *(undefined8 *)(uVar16 + 0xb0) = uVar17;
  }
  else {
    param_1[1] = param_1[8];
    *param_1 = param_1[7];
    param_1[3] = param_1[10];
    param_1[2] = param_1[9];
    param_1[5] = param_1[0xc];
    param_1[4] = param_1[0xb];
    param_1[6] = param_1[0xd];
    FUN_10086c71c(param_1,param_1 + 0xe);
    FUN_100868c94(param_1);
    uVar8 = param_1[7];
    uVar9 = param_1[8];
    uVar10 = param_1[9];
    uVar11 = param_1[10];
    uVar12 = param_1[0xb];
    uVar13 = param_1[0xc];
    uVar14 = param_1[0xd];
  }
  FUN_100864364(uVar8,uVar9,uVar10,uVar11,uVar12,uVar13,uVar14);
  _free(param_1);
  return;
}



/* Address: 0x10086a9a4 | FUN_10086a9a4 */

undefined1  [16] FUN_10086a9a4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  void *pvVar6;
  undefined8 uVar7;
  long lVar8;
  long *unaff_x20;
  undefined1 auVar9 [16];
  
  pvVar6 = (void *)0xb0;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    pvVar6 = _malloc(0xb0);
  }
  else {
    _swift_coroFrameAlloc(0xb0,0x4420);
  }
  *param_1 = pvVar6;
  *(long **)((long)pvVar6 + 0xa8) = unaff_x20;
  lVar8 = *unaff_x20;
  uVar3 = *(undefined8 *)(lVar8 + 0xc0);
  uVar1 = *(undefined8 *)(lVar8 + 200);
  uVar4 = *(undefined8 *)(lVar8 + 0xd0);
  uVar2 = *(undefined8 *)(lVar8 + 0xd8);
  uVar5 = *(undefined8 *)(lVar8 + 0xe0);
  uVar7 = *(undefined8 *)(lVar8 + 0xe8);
  *(undefined8 *)((long)pvVar6 + 0x38) = *(undefined8 *)(lVar8 + 0xb8);
  *(undefined8 *)((long)pvVar6 + 0x40) = uVar3;
  *(undefined8 *)((long)pvVar6 + 0x48) = uVar1;
  *(undefined8 *)((long)pvVar6 + 0x50) = uVar4;
  *(undefined8 *)((long)pvVar6 + 0x58) = uVar2;
  *(undefined8 *)((long)pvVar6 + 0x60) = uVar5;
  *(undefined8 *)((long)pvVar6 + 0x68) = uVar7;
  FUN_100867d14();
  auVar9._8_8_ = (undefined8 *)((long)pvVar6 + 0x38);
  auVar9._0_8_ = FUN_10086aa28;
  return auVar9;
}



/* Address: 0x10086aa28 | FUN_10086aa28 */

void FUN_10086aa28(undefined8 *param_1,ulong param_2)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  code *pcVar5;
  bool bVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong *puVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 uVar20;
  undefined8 uVar21;
  undefined1 auVar22 [16];
  
  param_1 = (undefined8 *)*param_1;
  if ((param_2 & 1) == 0) {
    auVar2 = *(undefined1 (*) [16])(param_1 + 0xb);
    pauVar1 = (undefined1 (*) [16])(param_1 + 9);
    uVar20 = *(undefined8 *)*pauVar1;
    auVar19 = *pauVar1;
    auVar18 = *pauVar1;
    pauVar1 = (undefined1 (*) [16])(param_1 + 7);
    uVar21 = *(undefined8 *)*pauVar1;
    auVar4 = *pauVar1;
    auVar3 = *pauVar1;
    uVar17 = param_1[0xd];
    if (param_1[8] != 0) {
      if (((undefined *)param_1[9] != (undefined *)0x687461703a ||
           (undefined *)param_1[10] != &DAT_e500000000000000) &&
         (bVar6 = Swift::_stringCompareWithSmolCheck
                            ((undefined *)param_1[9],(undefined *)param_1[10],
                             (_StringComparisonResult)0x3a), !bVar6)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10086ab90);
        (*pcVar5)();
      }
    }
    auVar22 = NEON_ext(auVar2,auVar2,8,1);
    auVar18 = NEON_ext(auVar18,auVar19,8,1);
    auVar19 = NEON_ext(auVar3,auVar4,8,1);
    puVar15 = (ulong *)param_1[0x15];
    uVar7 = *puVar15;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar16 = *puVar15;
    if ((uVar7 & 1) == 0) {
      puVar15 = (ulong *)param_1[0x15];
      FUN_100869e18();
      _swift_release(uVar16);
      *puVar15 = uVar7;
      uVar16 = uVar7;
    }
    uVar8 = *(undefined8 *)(uVar16 + 0xb8);
    uVar9 = *(undefined8 *)(uVar16 + 0xc0);
    uVar10 = *(undefined8 *)(uVar16 + 200);
    uVar11 = *(undefined8 *)(uVar16 + 0xd0);
    uVar12 = *(undefined8 *)(uVar16 + 0xd8);
    uVar13 = *(undefined8 *)(uVar16 + 0xe0);
    uVar14 = *(undefined8 *)(uVar16 + 0xe8);
    *(long *)(uVar16 + 0xc0) = auVar19._0_8_;
    *(undefined8 *)(uVar16 + 0xb8) = uVar21;
    *(long *)(uVar16 + 0xd0) = auVar18._0_8_;
    *(undefined8 *)(uVar16 + 200) = uVar20;
    *(long *)(uVar16 + 0xe0) = auVar22._0_8_;
    *(long *)(uVar16 + 0xd8) = auVar2._0_8_;
    *(undefined8 *)(uVar16 + 0xe8) = uVar17;
  }
  else {
    param_1[1] = param_1[8];
    *param_1 = param_1[7];
    param_1[3] = param_1[10];
    param_1[2] = param_1[9];
    param_1[5] = param_1[0xc];
    param_1[4] = param_1[0xb];
    param_1[6] = param_1[0xd];
    FUN_10086c71c(param_1,param_1 + 0xe);
    FUN_100868d54(param_1);
    uVar8 = param_1[7];
    uVar9 = param_1[8];
    uVar10 = param_1[9];
    uVar11 = param_1[10];
    uVar12 = param_1[0xb];
    uVar13 = param_1[0xc];
    uVar14 = param_1[0xd];
  }
  FUN_100864364(uVar8,uVar9,uVar10,uVar11,uVar12,uVar13,uVar14);
  _free(param_1);
  return;
}



/* Address: 0x10086ab90 | FUN_10086ab90 */

undefined1  [16] FUN_10086ab90(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  void *pvVar6;
  undefined8 uVar7;
  long lVar8;
  long *unaff_x20;
  undefined1 auVar9 [16];
  
  pvVar6 = (void *)0xb0;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    pvVar6 = _malloc(0xb0);
  }
  else {
    _swift_coroFrameAlloc(0xb0,0x13ce);
  }
  *param_1 = pvVar6;
  *(long **)((long)pvVar6 + 0xa8) = unaff_x20;
  lVar8 = *unaff_x20;
  uVar3 = *(undefined8 *)(lVar8 + 0xf8);
  uVar1 = *(undefined8 *)(lVar8 + 0x100);
  uVar4 = *(undefined8 *)(lVar8 + 0x108);
  uVar2 = *(undefined8 *)(lVar8 + 0x110);
  uVar5 = *(undefined8 *)(lVar8 + 0x118);
  uVar7 = *(undefined8 *)(lVar8 + 0x120);
  *(undefined8 *)((long)pvVar6 + 0x38) = *(undefined8 *)(lVar8 + 0xf0);
  *(undefined8 *)((long)pvVar6 + 0x40) = uVar3;
  *(undefined8 *)((long)pvVar6 + 0x48) = uVar1;
  *(undefined8 *)((long)pvVar6 + 0x50) = uVar4;
  *(undefined8 *)((long)pvVar6 + 0x58) = uVar2;
  *(undefined8 *)((long)pvVar6 + 0x60) = uVar5;
  *(undefined8 *)((long)pvVar6 + 0x68) = uVar7;
  FUN_100867d14();
  auVar9._8_8_ = (undefined8 *)((long)pvVar6 + 0x38);
  auVar9._0_8_ = FUN_10086ac14;
  return auVar9;
}



/* Address: 0x10086ac14 | FUN_10086ac14 */

void FUN_10086ac14(undefined8 *param_1,ulong param_2)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  code *pcVar5;
  bool bVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong *puVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 uVar20;
  undefined8 uVar21;
  undefined1 auVar22 [16];
  
  param_1 = (undefined8 *)*param_1;
  if ((param_2 & 1) == 0) {
    auVar2 = *(undefined1 (*) [16])(param_1 + 0xb);
    pauVar1 = (undefined1 (*) [16])(param_1 + 9);
    uVar20 = *(undefined8 *)*pauVar1;
    auVar19 = *pauVar1;
    auVar18 = *pauVar1;
    pauVar1 = (undefined1 (*) [16])(param_1 + 7);
    uVar21 = *(undefined8 *)*pauVar1;
    auVar4 = *pauVar1;
    auVar3 = *pauVar1;
    uVar17 = param_1[0xd];
    if (param_1[8] != 0) {
      if (((undefined *)param_1[9] != (undefined *)0x6f636f746f72703a ||
           (undefined *)param_1[10] != (undefined *)0xe90000000000006c) &&
         (bVar6 = Swift::_stringCompareWithSmolCheck
                            ((undefined *)param_1[9],(undefined *)param_1[10],
                             (_StringComparisonResult)0x3a), !bVar6)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10086ad84);
        (*pcVar5)();
      }
    }
    auVar22 = NEON_ext(auVar2,auVar2,8,1);
    auVar18 = NEON_ext(auVar18,auVar19,8,1);
    auVar19 = NEON_ext(auVar3,auVar4,8,1);
    puVar15 = (ulong *)param_1[0x15];
    uVar7 = *puVar15;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar16 = *puVar15;
    if ((uVar7 & 1) == 0) {
      puVar15 = (ulong *)param_1[0x15];
      FUN_100869e18();
      _swift_release(uVar16);
      *puVar15 = uVar7;
      uVar16 = uVar7;
    }
    uVar8 = *(undefined8 *)(uVar16 + 0xf0);
    uVar9 = *(undefined8 *)(uVar16 + 0xf8);
    uVar10 = *(undefined8 *)(uVar16 + 0x100);
    uVar11 = *(undefined8 *)(uVar16 + 0x108);
    uVar12 = *(undefined8 *)(uVar16 + 0x110);
    uVar13 = *(undefined8 *)(uVar16 + 0x118);
    uVar14 = *(undefined8 *)(uVar16 + 0x120);
    *(long *)(uVar16 + 0xf8) = auVar19._0_8_;
    *(undefined8 *)(uVar16 + 0xf0) = uVar21;
    *(long *)(uVar16 + 0x108) = auVar18._0_8_;
    *(undefined8 *)(uVar16 + 0x100) = uVar20;
    *(long *)(uVar16 + 0x118) = auVar22._0_8_;
    *(long *)(uVar16 + 0x110) = auVar2._0_8_;
    *(undefined8 *)(uVar16 + 0x120) = uVar17;
  }
  else {
    param_1[1] = param_1[8];
    *param_1 = param_1[7];
    param_1[3] = param_1[10];
    param_1[2] = param_1[9];
    param_1[5] = param_1[0xc];
    param_1[4] = param_1[0xb];
    param_1[6] = param_1[0xd];
    FUN_10086c71c(param_1,param_1 + 0xe);
    FUN_100867de8(param_1);
    uVar8 = param_1[7];
    uVar9 = param_1[8];
    uVar10 = param_1[9];
    uVar11 = param_1[10];
    uVar12 = param_1[0xb];
    uVar13 = param_1[0xc];
    uVar14 = param_1[0xd];
  }
  FUN_100864364(uVar8,uVar9,uVar10,uVar11,uVar12,uVar13,uVar14);
  _free(param_1);
  return;
}



/* Address: 0x10086ad84 | thunk_FUN_10086bb70 */

void thunk_FUN_10086bb70(void)

{
  FUN_10086bb70();
  return;
}



/* Address: 0x10086ad88 | FUN_10086ad88 */

void FUN_10086ad88(void)

{
  FUN_10086a0b0();
  return;
}



/* Address: 0x10086ada8 | FUN_10086ada8 */

void FUN_10086ada8(void)

{
  Hasher HVar1;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(0);
  HVar1.unknown = auStack_68;
  FUN_10086a0b0();
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x10086ade8 | FUN_10086ade8 */

void FUN_10086ade8(void)

{
  Hasher HVar1;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(0);
  HVar1.unknown = auStack_68;
  FUN_10086a0b0();
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x10086ae28 | FUN_10086ae28 */

void FUN_10086ae28(__int64 param_1)

{
  Hasher HVar1;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(param_1);
  HVar1.unknown = auStack_68;
  FUN_10086a0b0();
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x10086ae64 | FUN_10086ae64 */

undefined8 FUN_10086ae64(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_10086bb70(param_1,param_3);
  if ((param_1 & 1) != 0) {
    FUN_100861ee4(param_2,param_4);
    return param_2;
  }
  return 0;
}



/* Address: 0x10086aea8 | FUN_10086aea8 */

void FUN_10086aea8(Hasher param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  void *pvVar3;
  __uint8 _Var4;
  Hasher HVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  String SVar10;
  undefined1 auStack_78 [24];
  
  FUN_10086a0b0();
  _swift_beginAccess(param_3 + 0x10,auStack_78,0,0);
  lVar6 = *(long *)(param_3 + 0x10);
  lVar8 = *(long *)(lVar6 + 0x10);
  if (lVar8 != 0) {
    _swift_bridgeObjectRetain(lVar6);
    puVar9 = (undefined8 *)(lVar6 + 0x50);
    do {
      uVar1 = puVar9[-5];
      HVar5.unknown = ((String *)(puVar9 + -4))->str;
      uVar7 = puVar9[-3];
      SVar10 = *(String *)(puVar9 + -4);
      pcVar2 = (char *)puVar9[-1];
      pvVar3 = (void *)*puVar9;
      _Var4 = *(__uint8 *)(puVar9 + -2);
      _swift_bridgeObjectRetain(uVar1);
      _swift_bridgeObjectRetain(uVar7);
      _swift_bridgeObjectRetain(pvVar3);
      Swift::String::hash(param_1,SVar10);
      Swift::Hasher::_combine(_Var4,HVar5);
      SVar10.bridgeObject = pvVar3;
      SVar10.str = pcVar2;
      Swift::String::hash(param_1,SVar10);
      _swift_bridgeObjectRelease(pvVar3);
      _swift_bridgeObjectRelease(uVar7);
      _swift_bridgeObjectRelease(uVar1);
      puVar9 = puVar9 + 8;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    _swift_bridgeObjectRelease(lVar6);
  }
  return;
}



/* Address: 0x10086afa4 | FUN_10086afa4 */

void FUN_10086afa4(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  void *pvVar3;
  __uint8 _Var4;
  Hasher HVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  String SVar10;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [72];
  
  Swift::Hasher::init(0);
  FUN_10086a0b0(auStack_a8);
  HVar5.unknown = (undefined *)(param_2 + 0x10);
  _swift_beginAccess(HVar5.unknown,auStack_c0,0,0);
  puVar6 = *(undefined **)(param_2 + 0x10);
  lVar8 = *(long *)(puVar6 + 0x10);
  if (lVar8 != 0) {
    _swift_bridgeObjectRetain(puVar6);
    puVar9 = (undefined8 *)(puVar6 + 0x50);
    do {
      uVar1 = puVar9[-5];
      HVar5.unknown = ((String *)(puVar9 + -4))->str;
      uVar7 = puVar9[-3];
      SVar10 = *(String *)(puVar9 + -4);
      pcVar2 = (char *)puVar9[-1];
      pvVar3 = (void *)*puVar9;
      _Var4 = *(__uint8 *)(puVar9 + -2);
      _swift_bridgeObjectRetain(uVar1);
      _swift_bridgeObjectRetain(uVar7);
      _swift_bridgeObjectRetain(pvVar3);
      Swift::String::hash((Hasher)auStack_a8,SVar10);
      Swift::Hasher::_combine(_Var4,HVar5);
      SVar10.bridgeObject = pvVar3;
      SVar10.str = pcVar2;
      Swift::String::hash((Hasher)auStack_a8,SVar10);
      _swift_bridgeObjectRelease(pvVar3);
      _swift_bridgeObjectRelease(uVar7);
      _swift_bridgeObjectRelease(uVar1);
      puVar9 = puVar9 + 8;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    _swift_bridgeObjectRelease();
    HVar5.unknown = puVar6;
  }
  Swift::Hasher::_finalize(HVar5);
  return;
}



/* Address: 0x10086b0b4 | FUN_10086b0b4 */

void FUN_10086b0b4(void)

{
  undefined8 *unaff_x20;
  
  FUN_10086afa4(*unaff_x20,unaff_x20[1]);
  return;
}



/* Address: 0x10086b0bc | FUN_10086b0bc */

void FUN_10086b0bc(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10086aea8(param_1,*unaff_x20,unaff_x20[1]);
  return;
}



/* Address: 0x10086b0c4 | FUN_10086b0c4 */

void FUN_10086b0c4(void)

{
  FUN_1007ffbd4();
  return;
}



/* Address: 0x10086b0d0 | FUN_10086b0d0 */

ulong FUN_10086b0d0(ulong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *param_1;
  uVar3 = param_1[1];
  uVar1 = param_2[1];
  FUN_10086bb70(uVar2,*param_2);
  if ((uVar2 & 1) != 0) {
    FUN_100861ee4(uVar3,uVar1);
    return uVar3;
  }
  return 0;
}



/* Address: 0x10086b118 | thunk_FUN_10086c76c */

void thunk_FUN_10086c76c(void)

{
  FUN_10086c76c();
  return;
}



/* Address: 0x10086b11c | FUN_10086b11c */

void FUN_10086b11c(void)

{
  undefined8 *unaff_x20;
  
  FUN_10086c76c(*unaff_x20);
  return;
}



/* Address: 0x10086b124 | FUN_10086b124 */

void FUN_10086b124(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  long unaff_x21;
  undefined8 local_c0;
  long local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 auStack_88 [24];
  undefined8 local_70;
  undefined8 uStack_68;
  
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  Swift::Encoder::_unkeyedContainer();
  uVar5 = uStack_68;
  uVar4 = local_70;
  local_c0 = *(undefined8 *)(param_2 + 0x10);
  lVar1 = *(long *)(param_2 + 0x18);
  local_b0 = *(undefined8 *)(param_2 + 0x20);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  local_a0 = *(undefined1 *)(param_2 + 0x30);
  local_98 = *(undefined8 *)(param_2 + 0x38);
  uVar3 = *(undefined8 *)(param_2 + 0x40);
  puVar6 = auStack_88;
  local_b8 = lVar1;
  local_a8 = uVar2;
  local_90 = uVar3;
  FUN_10007d048(puVar6,local_70);
  FUN_1008643e0();
  _swift_bridgeObjectRetain(lVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  Swift::UnkeyedEncodingContainer::_encode(&local_c0,&DAT_100f06ee0,puVar6,uVar4,uVar5);
  uVar2 = local_a8;
  lVar1 = local_b8;
  _swift_bridgeObjectRelease(local_90);
  _swift_bridgeObjectRelease(uVar2);
  _swift_bridgeObjectRelease(lVar1);
  uVar3 = uStack_68;
  uVar2 = local_70;
  if (unaff_x21 == 0) {
    if (*(long *)(param_2 + 0x50) != 0) {
      local_98 = *(undefined8 *)(param_2 + 0x70);
      local_90 = *(undefined8 *)(param_2 + 0x78);
      local_a8 = *(undefined8 *)(param_2 + 0x60);
      local_b0 = *(undefined8 *)(param_2 + 0x58);
      local_c0 = *(undefined8 *)(param_2 + 0x48);
      local_a0 = (undefined1)*(undefined8 *)(param_2 + 0x68);
      local_b8 = *(long *)(param_2 + 0x50);
      FUN_10007d048(auStack_88,local_70);
      Swift::UnkeyedEncodingContainer::_encode(&local_c0,&DAT_100f06ee0,puVar6,uVar2,uVar3);
    }
    uVar3 = uStack_68;
    uVar2 = local_70;
    if (*(long *)(param_2 + 0x88) != 0) {
      local_98 = *(undefined8 *)(param_2 + 0xa8);
      local_90 = *(undefined8 *)(param_2 + 0xb0);
      local_a8 = *(undefined8 *)(param_2 + 0x98);
      local_b0 = *(undefined8 *)(param_2 + 0x90);
      local_c0 = *(undefined8 *)(param_2 + 0x80);
      local_a0 = (undefined1)*(undefined8 *)(param_2 + 0xa0);
      local_b8 = *(long *)(param_2 + 0x88);
      FUN_10007d048(auStack_88,local_70);
      Swift::UnkeyedEncodingContainer::_encode(&local_c0,&DAT_100f06ee0,puVar6,uVar2,uVar3);
    }
    uVar3 = uStack_68;
    uVar2 = local_70;
    if (*(long *)(param_2 + 0xc0) != 0) {
      local_98 = *(undefined8 *)(param_2 + 0xe0);
      local_90 = *(undefined8 *)(param_2 + 0xe8);
      local_a8 = *(undefined8 *)(param_2 + 0xd0);
      local_b0 = *(undefined8 *)(param_2 + 200);
      local_c0 = *(undefined8 *)(param_2 + 0xb8);
      local_a0 = (undefined1)*(undefined8 *)(param_2 + 0xd8);
      local_b8 = *(long *)(param_2 + 0xc0);
      FUN_10007d048(auStack_88,local_70);
      Swift::UnkeyedEncodingContainer::_encode(&local_c0,&DAT_100f06ee0,puVar6,uVar2,uVar3);
    }
    if (*(long *)(param_2 + 0xf8) != 0) {
      local_98 = *(undefined8 *)(param_2 + 0x118);
      local_90 = *(undefined8 *)(param_2 + 0x120);
      local_a8 = *(undefined8 *)(param_2 + 0x108);
      local_b0 = *(undefined8 *)(param_2 + 0x100);
      local_c0 = *(undefined8 *)(param_2 + 0xf0);
      local_a0 = (undefined1)*(undefined8 *)(param_2 + 0x110);
      local_b8 = *(long *)(param_2 + 0xf8);
      FUN_10007d048(auStack_88,local_70);
      Swift::UnkeyedEncodingContainer::_encode(&local_c0,&DAT_100f06ee0,puVar6,local_70,uStack_68);
    }
  }
  FUN_100004594(auStack_88);
  return;
}



/* Address: 0x10086b3c8 | FUN_10086b3c8 */

void FUN_10086b3c8(void)

{
  FUN_10086ca40();
  return;
}



/* Address: 0x10086b3dc | FUN_10086b3dc */

void FUN_10086b3dc(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x21;
  
  FUN_10086ca40();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Address: 0x10086b404 | FUN_10086b404 */

void FUN_10086b404(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10086b124(param_1,*unaff_x20);
  return;
}



/* Address: 0x10086b41c | FUN_10086b41c */

void FUN_10086b41c(void)

{
  char cVar1;
  Hasher HVar2;
  char *pcVar3;
  char *unaff_x20;
  String SVar4;
  undefined1 auStack_68 [72];
  
  cVar1 = *unaff_x20;
  Swift::Hasher::init(0);
  pcVar3 = (char *)0x6946726564616568;
  if (cVar1 != '\x01') {
    pcVar3 = (char *)0xd000000000000012;
  }
  HVar2.unknown = (undefined *)0xec00000073646c65;
  if (cVar1 != '\x01') {
    HVar2.unknown = (undefined *)0x8000000100db2650;
  }
  SVar4.bridgeObject = HVar2.unknown;
  SVar4.str = pcVar3;
  Swift::String::hash((Hasher)auStack_68,SVar4);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar2);
  return;
}



/* Address: 0x10086b4a8 | FUN_10086b4a8 */

void FUN_10086b4a8(Hasher param_1)

{
  void *pvVar1;
  char *pcVar2;
  char *unaff_x20;
  String SVar3;
  
  pcVar2 = (char *)0x6946726564616568;
  if (*unaff_x20 != '\x01') {
    pcVar2 = (char *)0xd000000000000012;
  }
  pvVar1 = (void *)0xec00000073646c65;
  if (*unaff_x20 != '\x01') {
    pvVar1 = (void *)0x8000000100db2650;
  }
  SVar3.bridgeObject = pvVar1;
  SVar3.str = pcVar2;
  Swift::String::hash(param_1,SVar3);
  _swift_bridgeObjectRelease(pvVar1);
  return;
}


