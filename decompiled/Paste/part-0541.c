/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100622c84 | FUN_100622c84 */

void FUN_100622c84(long param_1,long param_2)

{
  code *pcVar1;
  
  if ((0 < param_1) && (param_1 <= param_2)) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100622c9c);
  (*pcVar1)();
}



/* Address: 0x100622c9c | FUN_100622c9c */

undefined ** FUN_100622c9c(void)

{
  return &PTR_FUN_100eec6e0;
}



/* Address: 0x100622ca8 | FUN_100622ca8 */

undefined1  [16] FUN_100622ca8(void)

{
  return ZEXT816(0x10060a56c);
}



/* Address: 0x100622cb8 | FUN_100622cb8 */

ulong FUN_100622cb8(long param_1)

{
  return param_1 << 0x20 | 0xffff;
}



/* Address: 0x100622cc4 | FUN_100622cc4 */

undefined ** FUN_100622cc4(void)

{
  return &PTR_FUN_100eec6f0;
}



/* Address: 0x100622cd0 | FUN_100622cd0 */

undefined1  [16] FUN_100622cd0(void)

{
  return ZEXT816(0x100622cb8);
}



/* Address: 0x100622ce0 | FUN_100622ce0 */

long FUN_100622ce0(long param_1)

{
  return param_1 << 0x20;
}



/* Address: 0x100622ce8 | FUN_100622ce8 */

undefined ** FUN_100622ce8(void)

{
  return &PTR_FUN_100eec700;
}



/* Address: 0x100622cf4 | FUN_100622cf4 */

undefined1  [16] FUN_100622cf4(void)

{
  return ZEXT816(0x100622ce0);
}



/* Address: 0x100622d04 | FUN_100622d04 */

ulong FUN_100622d04(long param_1)

{
  return param_1 << 0x20 | 6;
}



/* Address: 0x100622d10 | FUN_100622d10 */

undefined ** FUN_100622d10(void)

{
  return &PTR_FUN_100eec710;
}



/* Address: 0x100622d1c | FUN_100622d1c */

undefined1  [16] FUN_100622d1c(void)

{
  return ZEXT816(0x100622d04);
}



/* Address: 0x100622d2c | FUN_100622d2c */

void FUN_100622d2c(void)

{
  FUN_1006245ac(0,2,0,PTR___swiftEmptyArrayStorage_100eae0d8);
  return;
}



/* Address: 0x100622d54 | FUN_100622d54 */

/* WARNING: Removing unreachable block (ram,0x000100623058) */

void FUN_100622d54(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *unaff_x20;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined1 auStack_170 [24];
  long local_158;
  undefined *local_150 [3];
  long local_138;
  undefined8 uStack_130;
  undefined1 auStack_120 [40];
  undefined1 auStack_f8 [48];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  code *pcStack_80;
  undefined *local_78;
  byte local_69 [9];
  
  local_69[0] = 0;
  lVar7 = *unaff_x20;
  uVar8 = *(ulong *)(lVar7 + 0x10);
  if (uVar8 == 0) {
    _swift_bridgeObjectRelease(lVar7);
    puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
    *unaff_x20 = (long)PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    local_150[0] = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_100624f94(0,uVar8,0);
    uVar6 = 0;
    lVar9 = lVar7 + 0x20;
    do {
      puVar5 = local_150[0];
      if (*(ulong *)(lVar7 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100623018);
        (*pcVar2)();
      }
      FUN_100625d14(lVar9,auStack_120);
      FUN_1006231f8(&local_c8,auStack_120,param_1,local_69,param_2,param_3,param_4);
      FUN_1000fb4c4(auStack_120,&DAT_100fd7538,&DAT_100c68bf0);
      uVar1 = *(ulong *)(puVar5 + 0x10);
      local_150[0] = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar1) {
        FUN_100624f94(1 < *(ulong *)(puVar5 + 0x18),uVar1 + 1,1);
      }
      puVar5 = local_150[0];
      uVar6 = uVar6 + 1;
      *(ulong *)(local_150[0] + 0x10) = uVar1 + 1;
      *(undefined8 *)(local_150[0] + uVar1 * 0x58 + 0x28) = uStack_c0;
      *(undefined8 *)(local_150[0] + uVar1 * 0x58 + 0x20) = local_c8;
      *(undefined8 *)(local_150[0] + uVar1 * 0x58 + 0x38) = uStack_b0;
      *(undefined8 *)(local_150[0] + uVar1 * 0x58 + 0x30) = uStack_b8;
      *(undefined **)(local_150[0] + uVar1 * 0x58 + 0x70) = local_78;
      *(undefined8 *)(local_150[0] + uVar1 * 0x58 + 0x58) = uStack_90;
      *(undefined8 *)(local_150[0] + uVar1 * 0x58 + 0x50) = uStack_98;
      *(code **)(local_150[0] + uVar1 * 0x58 + 0x68) = pcStack_80;
      *(undefined8 *)(local_150[0] + uVar1 * 0x58 + 0x60) = local_88;
      *(undefined8 *)(local_150[0] + uVar1 * 0x58 + 0x48) = uStack_a0;
      *(undefined8 *)(local_150[0] + uVar1 * 0x58 + 0x40) = local_a8;
      lVar9 = lVar9 + 0x58;
    } while (uVar8 != uVar6);
    _swift_bridgeObjectRelease(lVar7);
    *unaff_x20 = (long)puVar5;
    if ((local_69[0] & 1) != 0) {
      return;
    }
  }
  local_138 = param_3;
  uStack_130 = param_4;
  FUN_10000cbb0(local_150);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))();
  lVar7 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_4,param_3,0x100cb819c,&TargetProtocolRequirement_100cb81b4);
  local_158 = lVar7;
  FUN_10000cbb0(auStack_170);
  (**(code **)(*(long *)(lVar7 + -8) + 0x10))();
  puVar3 = &DAT_100eec730;
  _swift_allocObject(&DAT_100eec730,0x20,7);
  *(long *)(puVar3 + 0x10) = param_3;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  FUN_100076508(local_150,auStack_120);
  FUN_100011080(auStack_170,auStack_f8);
  FUN_100076508(auStack_120,&local_c8);
  FUN_100011080(auStack_f8,&uStack_a0);
  puVar4 = &DAT_100eec758;
  _swift_allocObject(&DAT_100eec758,0x20,7);
  *(code **)(puVar4 + 0x10) = thunk_FUN_100625d64;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  pcStack_80 = thunk_FUN_100625dc8;
  puVar3 = puVar5;
  local_78 = puVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  puVar4 = puVar5;
  if (((ulong)puVar3 & 1) == 0) {
    puVar4 = (undefined *)0x0;
    FUN_1006245ac(0,*(long *)(puVar5 + 0x10) + 1,1,puVar5);
  }
  uVar8 = *(ulong *)(puVar4 + 0x10);
  puVar5 = puVar4;
  if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar8) {
    puVar5 = (undefined *)(ulong)(1 < *(ulong *)(puVar4 + 0x18));
    FUN_1006245ac(puVar5,uVar8 + 1,1,puVar4);
  }
  *(ulong *)(puVar5 + 0x10) = uVar8 + 1;
  *(undefined8 *)(puVar5 + uVar8 * 0x58 + 0x28) = uStack_c0;
  *(undefined8 *)(puVar5 + uVar8 * 0x58 + 0x20) = local_c8;
  *(undefined8 *)(puVar5 + uVar8 * 0x58 + 0x38) = uStack_b0;
  *(undefined8 *)(puVar5 + uVar8 * 0x58 + 0x30) = uStack_b8;
  *(undefined **)(puVar5 + uVar8 * 0x58 + 0x70) = local_78;
  *(undefined8 *)(puVar5 + uVar8 * 0x58 + 0x58) = uStack_90;
  *(undefined8 *)(puVar5 + uVar8 * 0x58 + 0x50) = uStack_98;
  *(code **)(puVar5 + uVar8 * 0x58 + 0x68) = pcStack_80;
  *(undefined8 *)(puVar5 + uVar8 * 0x58 + 0x60) = local_88;
  *(undefined8 *)(puVar5 + uVar8 * 0x58 + 0x48) = uStack_a0;
  *(undefined8 *)(puVar5 + uVar8 * 0x58 + 0x40) = local_a8;
  *unaff_x20 = (long)puVar5;
  return;
}



/* Address: 0x10062307c | FUN_10062307c */

long FUN_10062307c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_c0 [8];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [40];
  
  lVar1 = 0;
  local_b0 = param_2;
  _swift_getAssociatedTypeWitness
            (0,param_6,param_5,0x100cb819c,&TargetProtocolRequirement_100cb81b4);
  lVar6 = *(long *)(lVar1 + -8);
  puVar4 = auStack_c0 + -(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = *(long *)(param_5 + -8);
  lVar5 = (long)puVar4 - (*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_getObjectType();
  local_b8 = param_3;
  FUN_100076688(param_1,auStack_88);
  puVar2 = &DAT_100fd77f8;
  FUN_1000f7830(&DAT_100fd77f8,&DAT_100c6ad20);
  _swift_dynamicCast(lVar5,auStack_88,puVar2,param_5,7);
  FUN_10000cbfc(local_b0,auStack_a8);
  puVar2 = &DAT_100fd7808;
  FUN_1000f7830(&DAT_100fd7808,&DAT_100c693e0);
  _swift_dynamicCast(puVar4,auStack_a8,puVar2,lVar1,7);
  lVar3 = lVar5;
  (**(code **)(param_4 + 0x48))(lVar5,puVar4,param_5,param_6,local_b8,param_4);
  (**(code **)(lVar6 + 8))(puVar4,lVar1);
  (**(code **)(lVar7 + 8))(lVar5,param_5);
  return lVar3;
}



/* Address: 0x1006231f8 | FUN_1006231f8 */

void FUN_1006231f8(long param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4,
                  undefined8 param_5,long param_6,long param_7)

{
  code *pcVar1;
  Optional OVar2;
  bool bVar3;
  undefined7 extraout_var;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 *local_250;
  undefined8 local_248;
  long local_240;
  undefined8 local_238;
  code *local_230;
  undefined *puStack_228;
  long local_220;
  undefined1 auStack_218 [24];
  long local_200;
  undefined1 auStack_1f8 [24];
  long local_1e0;
  long lStack_1d8;
  undefined1 auStack_1d0 [48];
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  code *local_158;
  undefined *puStack_150;
  undefined1 auStack_148 [40];
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  code *local_d8;
  undefined *local_d0;
  undefined1 auStack_c8 [40];
  undefined1 auStack_a0 [32];
  undefined8 local_80;
  undefined8 uStack_78;
  
  local_250 = param_4;
  local_248 = param_5;
  local_238 = param_3;
  local_230 = (code *)param_7;
  local_220 = param_1;
  OVar2 = Swift::Optional::typeMetadataAccessor();
  local_240 = CONCAT71(extraout_var,OVar2.value);
  lVar8 = *(long *)(local_240 + -8);
  uVar7 = (long)&local_250 - (*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = *(long *)(param_6 + -8);
  lVar9 = uVar7 - (*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100625d14(param_2,auStack_c8);
  FUN_100076508(auStack_c8,&local_120);
  FUN_100011080(auStack_a0,&uStack_f8);
  puVar4 = &DAT_100eecda0;
  _swift_allocObject(&DAT_100eecda0,0x20,7);
  *(undefined8 *)(puVar4 + 0x18) = uStack_78;
  *(undefined8 *)(puVar4 + 0x10) = local_80;
  local_d8 = thunk_FUN_100625cb8;
  local_d0 = puVar4;
  FUN_100625d14(&local_120,&local_1a0);
  _swift_release(puStack_150);
  FUN_100076508(&local_1a0,auStack_148);
  FUN_100004594(&uStack_178);
  FUN_100076688(auStack_148,&local_1a0);
  puVar4 = &DAT_100fd77f8;
  FUN_1000f7830(&DAT_100fd77f8,&DAT_100c6ad20);
  uVar5 = uVar7;
  _swift_dynamicCast(uVar7,&local_1a0,puVar4,param_6,6);
  if ((uVar5 & 1) == 0) {
    (**(code **)(lVar10 + 0x38))(uVar7,1,1,param_6);
    FUN_100004594(auStack_148);
    (**(code **)(lVar8 + 8))(uVar7,local_240);
  }
  else {
    (**(code **)(lVar10 + 0x38))(uVar7,0,1,param_6);
    (**(code **)(lVar10 + 0x20))(lVar9,uVar7,param_6);
    pcVar1 = local_230;
    bVar3 = Swift::Equatable::___infix
                      (lVar9,local_238,param_6,*(undefined8 *)((long)local_230 + 0x10));
    if (bVar3) {
      *local_250 = 1;
      lStack_1d8 = (long)pcVar1;
      local_1e0 = param_6;
      FUN_10000cbb0(auStack_1f8);
      (**(code **)(lVar10 + 0x10))();
      lVar8 = 0;
      _swift_getAssociatedTypeWitness
                (0,pcVar1,param_6,0x100cb819c,&TargetProtocolRequirement_100cb81b4);
      local_200 = lVar8;
      FUN_10000cbb0(auStack_218);
      (**(code **)(*(long *)(lVar8 + -8) + 0x10))();
      (**(code **)(lVar10 + 8))(lVar9,param_6);
      FUN_100004594(auStack_148);
      FUN_1000fb4c4(&local_120,&DAT_100fd7538,&DAT_100c68bf0);
      puVar4 = &DAT_100eecdf0;
      _swift_allocObject(&DAT_100eecdf0,0x20,7);
      *(long *)(puVar4 + 0x10) = param_6;
      *(code **)(puVar4 + 0x18) = pcVar1;
      FUN_100076508(auStack_1f8,&local_1a0);
      FUN_100011080(auStack_218,&uStack_178);
      lVar8 = local_220;
      FUN_100076508(&local_1a0,local_220);
      FUN_100011080(&uStack_178,lVar8 + 0x28);
      puVar6 = &DAT_100eece18;
      _swift_allocObject(&DAT_100eece18,0x20,7);
      *(code **)(puVar6 + 0x10) = thunk_FUN_100625d64;
      *(undefined **)(puVar6 + 0x18) = puVar4;
      *(code **)(lVar8 + 0x48) = thunk_FUN_100625dc8;
      *(undefined **)(lVar8 + 0x50) = puVar6;
      return;
    }
    (**(code **)(lVar10 + 8))(lVar9,param_6);
    FUN_100004594(auStack_148);
  }
  uStack_168 = uStack_e8;
  local_170 = local_f0;
  local_158 = local_d8;
  uStack_160 = uStack_e0;
  uStack_198 = uStack_118;
  local_1a0 = local_120;
  puStack_150 = local_d0;
  uStack_188 = uStack_108;
  local_190 = local_110;
  uStack_178 = uStack_f8;
  uStack_180 = uStack_100;
  puStack_228 = local_d0;
  local_230 = local_d8;
  FUN_100076508(&local_1a0,auStack_1f8);
  FUN_100011080(&uStack_178,auStack_1d0);
  lVar8 = local_220;
  FUN_100076508(auStack_1f8,local_220);
  FUN_100011080(auStack_1d0,lVar8 + 0x28);
  puVar4 = &DAT_100eecdc8;
  _swift_allocObject(&DAT_100eecdc8,0x20,7);
  *(undefined **)(puVar4 + 0x18) = puStack_228;
  *(code **)(puVar4 + 0x10) = local_230;
  *(code **)(lVar8 + 0x48) = thunk_FUN_100625dc8;
  *(undefined **)(lVar8 + 0x50) = puVar4;
  return;
}



/* Address: 0x100623594 | FUN_100623594 */

undefined8 FUN_100623594(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  _swift_getObjectType();
  (**(code **)(*(long *)(param_2 + 8) + 0x50))();
  uVar2 = uVar1;
  _swift_getObjectType();
  FUN_1006422fc();
  _swift_unknownObjectRelease(uVar1);
  FUN_100623630(param_3,0,uVar2,param_1,param_2);
  return uVar2;
}



/* Address: 0x100623630 | FUN_100623630 */

void FUN_100623630(long param_1,ulong param_2,long param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  char cVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  code *pcVar15;
  undefined1 auStack_1b8 [40];
  undefined1 auStack_190 [48];
  code *local_160;
  undefined8 uStack_158;
  undefined1 auStack_138 [48];
  long local_108;
  undefined8 uStack_100;
  long local_f0;
  undefined1 auStack_e0 [32];
  code *local_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [48];
  
  if (param_2 == *(ulong *)(param_1 + 0x10)) {
LAB_1006238c8:
    FUN_100649994(0,0,param_3);
    return;
  }
  if (*(ulong *)(param_1 + 0x10) <= param_2) {
                    /* WARNING: Does not return */
    pcVar15 = (code *)SoftwareBreakpoint(1,0x100623cbc);
    (*pcVar15)();
  }
  FUN_100625d14(param_1 + param_2 * 0x58 + 0x20,&local_108);
  if (local_f0 == 0) goto LAB_1006238c8;
  FUN_100076508(&local_108,auStack_1b8);
  FUN_100011080(auStack_e0,auStack_190);
  FUN_100076508(auStack_1b8,&local_160);
  FUN_100011080(auStack_190,auStack_138);
  FUN_100076508(&local_160,auStack_90);
  FUN_100011080(auStack_138,auStack_b0);
  local_108 = param_4;
  uStack_100 = param_5;
  _swift_bridgeObjectRetain(param_1);
  (*local_c0)(&local_160,&local_108);
  (*local_160)(&local_108,auStack_90,auStack_b0);
  _swift_release(uStack_158);
  lVar2 = local_108;
  puVar3 = &DAT_100eecbe8;
  _swift_allocObject(&DAT_100eecbe8,0x38,7);
  *(long *)(puVar3 + 0x10) = param_3;
  *(long *)(puVar3 + 0x18) = param_4;
  *(undefined8 *)(puVar3 + 0x20) = param_5;
  *(long *)(puVar3 + 0x28) = param_1;
  *(ulong *)(puVar3 + 0x30) = param_2 + 1;
  puVar4 = &DAT_100eecc10;
  _swift_allocObject(&DAT_100eecc10,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_100625bb0;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  puVar5 = &DAT_100eecc38;
  _swift_allocObject(&DAT_100eecc38,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_1000386a0;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  puVar6 = &DAT_100eecc60;
  _swift_allocObject(&DAT_100eecc60,0x28,7);
  *(long *)(puVar6 + 0x10) = lVar2;
  *(code **)(puVar6 + 0x18) = FUN_1000386a0;
  *(undefined **)(puVar6 + 0x20) = puVar5;
  uVar7 = *(ulong *)(lVar2 + 0x20);
  lVar1 = *(long *)(lVar2 + 0x28);
  _swift_getObjectType();
  pcVar15 = *(code **)(lVar1 + 0x10);
  _swift_retain_n(param_3,2);
  _swift_unknownObjectRetain_n(param_4,2);
  _swift_retain_n(puVar4,2);
  _swift_retain_n(lVar2,2);
  _swift_retain_n(puVar5,2);
  _swift_bridgeObjectRetain(param_1);
  _swift_retain(puVar3);
  uVar8 = uVar7;
  (*pcVar15)(uVar7,lVar1);
  if ((uVar8 & 1) == 0) {
    _swift_release(puVar4);
    puVar9 = &DAT_100eecc88;
    _swift_allocObject(&DAT_100eecc88,0x28,7);
    *(long *)(puVar9 + 0x10) = lVar2;
    *(code **)(puVar9 + 0x18) = FUN_100625bc4;
    *(undefined **)(puVar9 + 0x20) = puVar6;
    pcVar15 = *(code **)(lVar1 + 0x18);
    _swift_retain(lVar2);
    _swift_retain(puVar6);
    (*pcVar15)(FUN_1005dfe64,puVar9,uVar7,lVar1);
    _swift_release(puVar4);
    _swift_release(puVar9);
    _swift_release_n(puVar5,2);
    _swift_release(lVar2);
    _swift_release(puVar6);
  }
  else {
    _swift_beginAccess(lVar2 + 0x10,auStack_1b8,0,0);
    if (*(char *)(lVar2 + 0x18) == '\x01') {
      _swift_release(puVar4);
    }
    else if (*(char *)(lVar2 + 0x18) == -1) {
      _swift_release(puVar4);
      _swift_beginAccess(lVar2 + 0x30,&local_108,0x21,0);
      FUN_10064967c(FUN_100625bc4,puVar6);
      _swift_endAccess(&local_108);
    }
    else {
      FUN_100623630(param_1,param_2 + 1,param_3,param_4,param_5);
      _swift_release(puVar4);
    }
    FUN_1006486f8(0,0,0);
    FUN_100004550(0,0);
    _swift_release(puVar4);
    _swift_release_n(puVar5,2);
    _swift_release(lVar2);
    _swift_release(puVar6);
    _swift_bridgeObjectRelease(0);
  }
  _swift_bridgeObjectRelease(param_1);
  _swift_unknownObjectRelease(param_4);
  _swift_release(param_3);
  _swift_release(puVar3);
  puVar3 = &DAT_100eeccb0;
  _swift_allocObject(&DAT_100eeccb0,0x28,7);
  *(long *)(puVar3 + 0x10) = lVar2;
  *(code **)(puVar3 + 0x18) = FUN_100625bd0;
  *(long *)(puVar3 + 0x20) = param_3;
  uVar7 = *(ulong *)(lVar2 + 0x20);
  lVar1 = *(long *)(lVar2 + 0x28);
  _swift_getObjectType();
  pcVar15 = *(code **)(lVar1 + 0x10);
  _swift_retain_n(param_3,5);
  _swift_retain_n(lVar2,2);
  uVar8 = uVar7;
  (*pcVar15)(uVar7,lVar1);
  if ((uVar8 & 1) == 0) {
    puVar4 = &DAT_100eeccd8;
    _swift_allocObject(&DAT_100eeccd8,0x28,7);
    *(long *)(puVar4 + 0x10) = lVar2;
    *(code **)(puVar4 + 0x18) = FUN_100625bd8;
    *(undefined **)(puVar4 + 0x20) = puVar3;
    pcVar15 = *(code **)(lVar1 + 0x18);
    _swift_retain(lVar2);
    _swift_retain(puVar3);
    (*pcVar15)(thunk_FUN_1005dfe64,puVar4,uVar7,lVar1);
    _swift_release(puVar4);
    _swift_release_n(param_3,3);
    _swift_release(lVar2);
    _swift_release(puVar3);
    goto LAB_100623c70;
  }
  uVar13 = 0;
  _swift_beginAccess(lVar2 + 0x10,&local_108,0,0);
  uVar14 = *(undefined8 *)(lVar2 + 0x10);
  cVar11 = *(char *)(lVar2 + 0x18);
  if (cVar11 == '\x01') {
    uVar7 = *(ulong *)(param_3 + 0x20);
    lVar1 = *(long *)(param_3 + 0x28);
    _swift_getObjectType();
    pcVar15 = *(code **)(lVar1 + 0x10);
    FUN_100308524(uVar14,1);
    uVar8 = uVar7;
    lVar12 = lVar1;
    (*pcVar15)(uVar7,lVar1);
    if ((uVar8 & 1) == 0) {
      puVar4 = &DAT_100eecd00;
      _swift_allocObject(&DAT_100eecd00,0x20,7);
      *(long *)(puVar4 + 0x10) = param_3;
      *(undefined8 *)(puVar4 + 0x18) = uVar14;
      pcVar15 = *(code **)(lVar1 + 0x18);
      _swift_retain(param_3);
      FUN_1005dfeb4(uVar14,1);
      (*pcVar15)(FUN_10061dfe0,puVar4,uVar7,lVar1);
      _swift_release(puVar4);
    }
    else {
      uVar10 = uVar14;
      thunk_FUN_1005de8f4(uVar14);
      FUN_1006486f8();
      FUN_100004550(uVar10,lVar12);
      _swift_bridgeObjectRelease(uVar13);
    }
    cVar11 = '\x01';
LAB_100623c28:
    FUN_100308538(uVar14,cVar11);
  }
  else {
    if (cVar11 != -1) goto LAB_100623c28;
    _swift_beginAccess(lVar2 + 0x30,&local_160,0x21,0);
    FUN_10064967c(FUN_100625bd8,puVar3);
    _swift_endAccess(&local_160);
  }
  FUN_1006486f8(0,0,0);
  FUN_100004550(0,0);
  _swift_release_n(param_3,3);
  _swift_release(lVar2);
  _swift_release(puVar3);
  _swift_bridgeObjectRelease(0);
LAB_100623c70:
  _swift_release(param_3);
  _swift_release(lVar2);
  _swift_release(uStack_b8);
  FUN_100004594(auStack_b0);
  FUN_100004594(auStack_90);
  return;
}



/* Address: 0x100623cbc | FUN_100623cbc */

void FUN_100623cbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong *unaff_x20;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined1 auStack_118 [88];
  undefined1 auStack_c0 [40];
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  
  uVar9 = *unaff_x20;
  puVar10 = (ulong *)(uVar9 + 0x10);
  uVar8 = *puVar10;
  if (uVar8 == 0) {
    uVar6 = 0;
    uVar12 = uVar6;
  }
  else {
    lVar7 = 0x78;
    uVar6 = 0;
    do {
      lVar1 = uVar9 + lVar7;
      uVar11 = lVar1 - 0x58;
      puVar3 = &DAT_100eec780;
      _swift_allocObject(&DAT_100eec780,0x20,7);
      uVar4 = *(undefined8 *)(lVar1 + -8);
      uVar13 = *(undefined8 *)(lVar1 + -0x10);
      *(undefined8 *)(puVar3 + 0x18) = *(undefined8 *)(lVar1 + -8);
      *(undefined8 *)(puVar3 + 0x10) = uVar13;
      _swift_retain(uVar4);
      FUN_100623f4c(uVar11,lVar1 + -0x30,thunk_FUN_100625cb8,puVar3,param_1,param_2,param_3);
      _swift_release(puVar3);
      uVar12 = uVar6 + 1;
      if ((uVar11 & 1) != 0) {
        uVar8 = *puVar10;
        if (uVar8 - 1 != uVar6) {
          do {
            if (uVar8 <= uVar12) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x100623f34);
              (*pcVar2)();
            }
            FUN_100625d14(uVar9 + lVar7,auStack_c0);
            puVar3 = &DAT_100eec7a8;
            _swift_allocObject(&DAT_100eec7a8,0x20,7);
            *(undefined8 *)(puVar3 + 0x18) = uStack_70;
            *(undefined8 *)(puVar3 + 0x10) = local_78;
            _swift_retain(uStack_70);
            puVar5 = auStack_c0;
            FUN_100623f4c(puVar5,auStack_98,thunk_FUN_100625cb8,puVar3,param_1,param_2,param_3);
            _swift_release(puVar3);
            FUN_1000fb4c4(auStack_c0,&DAT_100fd7538,&DAT_100c68bf0);
            if (((ulong)puVar5 & 1) == 0) {
              if (uVar12 != uVar6) {
                if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x100623f38);
                  (*pcVar2)();
                }
                uVar8 = *puVar10;
                if (uVar8 <= uVar6) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x100623f3c);
                  (*pcVar2)();
                }
                FUN_100625d14(uVar9 + 0x20 + uVar6 * 0x58,auStack_c0);
                if (uVar8 <= uVar12) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x100623f40);
                  (*pcVar2)();
                }
                FUN_100625d14(uVar9 + lVar7,auStack_118);
                uVar8 = uVar9;
                _swift_isUniquelyReferenced_nonNull_native();
                if ((uVar8 & 1) == 0) {
                  FUN_100624ec0();
                }
                if (*(ulong *)(uVar9 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x100623f44);
                  (*pcVar2)();
                }
                FUN_100625004(auStack_118,uVar9 + uVar6 * 0x58 + 0x20);
                if (*(ulong *)(uVar9 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x100623f48);
                  (*pcVar2)();
                }
                FUN_100625004(auStack_c0,uVar9 + lVar7);
                *unaff_x20 = uVar9;
              }
              uVar6 = uVar6 + 1;
            }
            uVar12 = uVar12 + 1;
            puVar10 = (ulong *)(uVar9 + 0x10);
            uVar8 = *puVar10;
            lVar7 = lVar7 + 0x58;
          } while (uVar12 != uVar8);
        }
        if ((long)uVar12 < (long)uVar6) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100623f4c);
          (*pcVar2)();
        }
        goto LAB_100623db4;
      }
      lVar7 = lVar7 + 0x58;
      uVar6 = uVar12;
    } while (uVar8 != uVar12);
    uVar6 = *puVar10;
    uVar12 = uVar6;
  }
LAB_100623db4:
  FUN_10062513c(uVar6,uVar12);
  return;
}



/* Address: 0x100623f4c | FUN_100623f4c */

bool FUN_100623f4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7)

{
  undefined1 *puVar1;
  Optional OVar2;
  bool bVar3;
  undefined7 extraout_var;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  code *pcVar13;
  long lVar14;
  long lVar15;
  undefined1 auStack_d0 [8];
  undefined1 *local_c8;
  long local_c0;
  long local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  long local_a0;
  long local_98;
  undefined1 auStack_90 [32];
  undefined8 local_70;
  undefined8 uStack_68;
  long lVar4;
  
  lVar14 = *(long *)(param_6 + -8);
  lVar7 = *(long *)(lVar14 + 0x40);
  local_c8 = auStack_d0 + -(lVar7 + 0xfU & 0xfffffffffffffff0);
  local_c0 = param_7;
  local_b0 = param_3;
  local_a8 = param_1;
  local_a0 = param_5;
  OVar2 = Swift::Optional::typeMetadataAccessor();
  lVar4 = CONCAT71(extraout_var,OVar2.value);
  lVar5 = 0;
  _swift_getTupleTypeMetadata2(0,lVar4,lVar4,0,0);
  local_b8 = *(long *)(lVar5 + -8);
  lVar10 = (long)(auStack_d0 + -(lVar7 + 0xfU & 0xfffffffffffffff0)) -
           (*(long *)(local_b8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = *(long *)(lVar4 + -8);
  uVar8 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_98 = lVar10 - uVar8;
  lVar15 = local_98 - uVar8;
  lVar12 = lVar15 - uVar8;
  FUN_10000cbfc(param_2,auStack_90);
  local_70 = local_b0;
  uStack_68 = param_4;
  _swift_retain(param_4);
  FUN_1000fb4c4(auStack_90,&DAT_100fd7858,&DAT_100c69438);
  FUN_100076688(local_a8,auStack_90);
  puVar6 = &DAT_100fd77f8;
  FUN_1000f7830(&DAT_100fd77f8,&DAT_100c6ad20);
  lVar7 = lVar12;
  _swift_dynamicCast(lVar12,auStack_90,puVar6,param_6,6);
  pcVar11 = *(code **)(lVar14 + 0x38);
  (*pcVar11)(lVar12,(uint)lVar7 ^ 1,1,param_6);
  (**(code **)(lVar14 + 0x10))(lVar15,local_a0,param_6);
  (*pcVar11)(lVar15,0,1,param_6);
  lVar7 = (long)*(int *)(lVar5 + 0x30);
  pcVar11 = *(code **)(lVar9 + 0x10);
  local_a0 = lVar12;
  (*pcVar11)(lVar10,lVar12,lVar4);
  (*pcVar11)(lVar10 + lVar7,lVar15,lVar4);
  pcVar13 = *(code **)(lVar14 + 0x30);
  lVar12 = lVar10;
  (*pcVar13)(lVar10,1,param_6);
  if ((int)lVar12 == 1) {
    pcVar11 = *(code **)(lVar9 + 8);
    (*pcVar11)(lVar15,lVar4);
    lVar7 = lVar10 + lVar7;
    (*pcVar13)(lVar7,1,param_6);
    if ((int)lVar7 == 1) {
      (*pcVar11)(lVar10,lVar4);
      bVar3 = true;
      goto LAB_100624228;
    }
  }
  else {
    (*pcVar11)(local_98,lVar10,lVar4);
    lVar12 = lVar10 + lVar7;
    (*pcVar13)(lVar12,1,param_6);
    puVar1 = local_c8;
    if ((int)lVar12 != 1) {
      (**(code **)(lVar14 + 0x20))(local_c8,lVar10 + lVar7,param_6);
      lVar7 = local_98;
      bVar3 = Swift::Equatable::___infix(local_98,puVar1,param_6,*(undefined8 *)(local_c0 + 0x10));
      pcVar13 = *(code **)(lVar14 + 8);
      (*pcVar13)(puVar1,param_6);
      pcVar11 = *(code **)(lVar9 + 8);
      (*pcVar11)(lVar15,lVar4);
      (*pcVar13)(lVar7,param_6);
      (*pcVar11)(lVar10,lVar4);
      goto LAB_100624228;
    }
    pcVar11 = *(code **)(lVar9 + 8);
    (*pcVar11)(lVar15,lVar4);
    (**(code **)(lVar14 + 8))(local_98,param_6);
  }
  (**(code **)(local_b8 + 8))(lVar10,lVar5);
  bVar3 = false;
LAB_100624228:
  (*pcVar11)(local_a0,lVar4);
  return bVar3;
}



/* Address: 0x100624258 | FUN_100624258 */

void FUN_100624258(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  code *pcVar6;
  
  uVar2 = *(ulong *)(param_2 + 0x20);
  lVar1 = *(long *)(param_2 + 0x28);
  _swift_getObjectType();
  uVar3 = uVar2;
  lVar5 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  if ((uVar3 & 1) != 0) {
    thunk_FUN_1005de8f4(param_1);
    FUN_1006486f8();
    FUN_100004550(param_1,lVar5);
    _swift_bridgeObjectRelease(param_3);
    return;
  }
  puVar4 = &DAT_100eecd28;
  _swift_allocObject(&DAT_100eecd28,0x20,7);
  *(long *)(puVar4 + 0x10) = param_2;
  *(undefined8 *)(puVar4 + 0x18) = param_1;
  pcVar6 = *(code **)(lVar1 + 0x18);
  _swift_retain(param_2);
  _swift_errorRetain(param_1);
  (*pcVar6)(thunk_FUN_10061dfe0,puVar4,uVar2,lVar1);
  _swift_release(puVar4);
  return;
}



/* Address: 0x100624340 | FUN_100624340 */

void FUN_100624340(void)

{
  byte bVar1;
  long lVar2;
  
  bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xd,0,0,0x10,0,0);
  if ((bVar1 & 1) != 0) {
    lVar2 = 0;
    FUN_100658d78();
    if (lVar2 != 0) {
      FUN_1000f7830(&DAT_100fd7830,&DAT_100c69408);
      return;
    }
  }
  FUN_1000f7830(&DAT_100fd7828,&DAT_100c69400);
  return;
}



/* Address: 0x1006243a4 | FUN_1006243a4 */

undefined * FUN_1006243a4(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1006244ac);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100fd7840;
    FUN_1000f7830(&DAT_100fd7840,&DAT_100c69420);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar6,&DAT_100ef0a38);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x1006244ac | FUN_1006244ac */

undefined * FUN_1006244ac(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1006245ac);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100fd7868;
    FUN_1000f7830(&DAT_100fd7868,&DAT_100c69440);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _memcpy(puVar1,puVar4,uVar6 << 3);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 8 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x1006245ac | FUN_1006245ac */

undefined * FUN_1006245ac(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1006246fc);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar6 != 0) {
    puVar3 = (undefined *)0x0;
    FUN_100625be8(0,&DAT_100fd7860,PTR_typeMetadataAccessor_100ead690);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x58) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    puVar5 = &DAT_100fd7538;
    FUN_1000f7830(&DAT_100fd7538,&DAT_100c68bf0);
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar7,puVar5);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar7 * 0x58 <= puVar4) {
      _memmove(puVar4,puVar1,uVar7 * 0x58);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x1006246fc | FUN_1006246fc */

undefined * FUN_1006246fc(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100624804);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100fd7848;
    FUN_1000f7830(&DAT_100fd7848,&DAT_100c69428);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -1;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 5) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar6,&DAT_100eede50);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x20 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 5);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x100624804 | FUN_100624804 */

undefined * FUN_100624804(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10062490c);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100fd7850;
    FUN_1000f7830(&DAT_100fd7850,&DAT_100c69430);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar6,PTR___type_metadata_for_Swift_String_100eac208);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x10062490c | thunk_FUN_100624910 */

undefined * thunk_FUN_100624910(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100624a28);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100fd7838;
    FUN_1000f7830(&DAT_100fd7838,&DAT_100c69418);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x18) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar6,&DAT_100eeaaa8);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x18 <= puVar4) {
      _memmove(puVar4,puVar1,uVar6 * 0x18);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x100624910 | FUN_100624910 */

undefined * FUN_100624910(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100624a28);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100fd7838;
    FUN_1000f7830(&DAT_100fd7838,&DAT_100c69418);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x18) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar6,&DAT_100eeaaa8);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x18 <= puVar4) {
      _memmove(puVar4,puVar1,uVar6 * 0x18);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x100624a28 | FUN_100624a28 */

undefined * FUN_100624a28(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  size_t sVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100624b18);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  sVar6 = *(size_t *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)sVar6) {
    uVar5 = sVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100fd6f20;
    FUN_1000f7830(&DAT_100fd6f20,&DAT_100c67910);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(size_t *)(puVar3 + 0x10) = sVar6;
    *(long *)(puVar3 + 0x18) = (long)puVar4 * 2 + -0x40;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _memcpy(puVar4,puVar1,sVar6);
  }
  else {
    if (puVar3 != param_4 || puVar1 + sVar6 <= puVar4) {
      _memmove(puVar4,puVar1,sVar6);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x100624b18 | FUN_100624b18 */

ulong FUN_100624b18(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  _CocoaArrayWrapper _Var1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  if ((ulong)param_4 >> 0x3e == 0) {
    uVar3 = *(ulong *)((undefined *)((ulong)param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    _Var1.unknown = (undefined *)((ulong)param_4 & 0xffffffffffffff8);
    if (((ulong)param_4 & 0x8000000000000000) != 0) {
      _Var1.unknown = param_4;
    }
    uVar3 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  uVar5 = param_2;
  if (((param_3 & 1) != 0) && (uVar5 = uVar3, (long)uVar3 < (long)param_2)) {
    if ((long)(uVar3 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100624c40);
      (*pcVar2)();
    }
    uVar5 = uVar3 * 2;
    if (uVar5 - param_2 == 0 || (long)uVar5 < (long)param_2) {
      uVar5 = param_2;
    }
  }
  if ((ulong)param_4 >> 0x3e == 0) {
    uVar3 = *(ulong *)((undefined *)((ulong)param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = (undefined *)((ulong)param_4 & 0xffffffffffffff8);
    if (((ulong)param_4 & 0x8000000000000000) != 0) {
      _Var1.unknown = param_4;
    }
    uVar3 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  uVar4 = uVar3;
  FUN_100624d48(uVar3,uVar5);
  if ((param_1 & 1) == 0) {
    if ((long)uVar3 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100624c3c);
      (*pcVar2)();
    }
    FUN_100624dc8(0,uVar3,uVar4 + 0x20,param_4);
  }
  else {
    uVar5 = (ulong)param_4 & 0xffffffffffffff8;
    if ((uVar4 != uVar5) || ((void *)((long)(uVar5 + 0x20) + uVar3 * 8) <= (void *)(uVar4 + 0x20)))
    {
      _memmove((void *)(uVar4 + 0x20),(void *)(uVar5 + 0x20),uVar3 << 3);
    }
    *(undefined8 *)(uVar5 + 0x10) = 0;
    _swift_bridgeObjectRelease(param_4);
  }
  return uVar4;
}



/* Address: 0x100624c40 | FUN_100624c40 */

undefined * FUN_100624c40(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100624d48);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100fd7820;
    FUN_1000f7830(&DAT_100fd7820,&DAT_100c693f8);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar6,&DAT_100ef1608);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 8 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x100624d48 | FUN_100624d48 */

undefined * FUN_100624d48(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    FUN_100624340();
    _swift_allocObject();
    puVar3 = puVar2;
    _malloc_size();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Address: 0x100624dc8 | FUN_100624dc8 */

UnsafeMutablePointer<Swift__CocoaArrayWrapper__copyContents(subRange:_Swift_Range<Swift_Int>,initializing:_Swift_UnsafeMutablePointer<Swift_AnyObject>)__>_Swift_UnsafeMutablePointer<Swift_AnyObject>>
 FUN_100624dc8(Range<__int64> param_1,
              UnsafeMutablePointer<Swift__CocoaArrayWrapper__copyContents(subRange:_Swift_Range<Swift_Int>,initializing:_Swift_UnsafeMutablePointer<Swift_AnyObject>)__>_Swift_UnsafeMutablePointer<Swift_AnyObject>>
              param_2,_CocoaArrayWrapper param_3,_ArrayBuffer param_4)

{
  undefined *puVar1;
  code *pcVar2;
  Range<__int64> RVar3;
  undefined8 uVar4;
  UnsafeMutablePointer<Swift__CocoaArrayWrapper__copyContents(subRange:_Swift_Range<Swift_Int>,initializing:_Swift_UnsafeMutablePointer<Swift_AnyObject>)__>_Swift_UnsafeMutablePointer<Swift_AnyObject>>
  UVar5;
  
  if (((ulong)param_4.unknown & 0xc000000000000001) != 0) {
    if ((long)param_2.unknown < (long)param_1.unknown) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100624ebc);
      (*pcVar2)();
    }
    if (param_1.unknown != param_2.unknown) {
      if ((long)param_2.unknown <= (long)param_1.unknown) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100624ec0);
        (*pcVar2)();
      }
      FUN_100658d78(0);
      RVar3.unknown = param_1.unknown;
      do {
        puVar1 = RVar3.unknown + 1;
        Swift::_ArrayBuffer::_typeCheckSlowPath((__int64)RVar3.unknown,param_4);
        RVar3.unknown = puVar1;
      } while (param_2.unknown != puVar1);
    }
  }
  if ((ulong)param_4.unknown >> 0x3e == 0) {
    if (!SBORROW8((long)param_2.unknown,(long)param_1.unknown)) {
      uVar4 = 0;
      FUN_100658d78(0);
      _swift_arrayInitWithCopy
                (param_3.unknown,
                 ((ulong)param_4.unknown & 0xffffffffffffff8) + (long)param_1.unknown * 8 + 0x20,
                 (long)param_2.unknown - (long)param_1.unknown,uVar4);
      _swift_bridgeObjectRelease(param_4.unknown);
      return (UnsafeMutablePointer<Swift__CocoaArrayWrapper__copyContents(subRange:_Swift_Range<Swift_Int>,initializing:_Swift_UnsafeMutablePointer<Swift_AnyObject>)__>_Swift_UnsafeMutablePointer<Swift_AnyObject>>
              )(param_3.unknown + ((long)param_2.unknown - (long)param_1.unknown) * 8);
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100624eb8);
    (*pcVar2)();
  }
  UVar5 = Swift::_CocoaArrayWrapper::__copyContents(param_1,param_2,param_3);
  return (UnsafeMutablePointer<Swift__CocoaArrayWrapper__copyContents(subRange:_Swift_Range<Swift_Int>,initializing:_Swift_UnsafeMutablePointer<Swift_AnyObject>)__>_Swift_UnsafeMutablePointer<Swift_AnyObject>>
          )UVar5.unknown;
}



/* Address: 0x100624ec0 | FUN_100624ec0 */

void FUN_100624ec0(long param_1)

{
  FUN_1006245ac(0,*(undefined8 *)(param_1 + 0x10),0,param_1);
  return;
}



/* Address: 0x100624ee4 | FUN_100624ee4 */

void FUN_100624ee4(long param_1)

{
  FUN_100624910(0,*(undefined8 *)(param_1 + 0x10),0,param_1);
  return;
}



/* Address: 0x100624f08 | FUN_100624f08 */

void FUN_100624f08(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1006515f8();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x100624f24 | FUN_100624f24 */

void FUN_100624f24(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  thunk_FUN_100651dbc();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x100624f40 | FUN_100624f40 */

void FUN_100624f40(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1006516e8();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x100624f5c | FUN_100624f5c */

void FUN_100624f5c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100651830();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x100624f78 | FUN_100624f78 */

void FUN_100624f78(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100651930();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x100624f94 | FUN_100624f94 */

void FUN_100624f94(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100651a70();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x100624fb0 | FUN_100624fb0 */

void FUN_100624fb0(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x100624fc0 | thunk_FUN_100625d64 */

undefined1  [16] thunk_FUN_100625d64(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  puVar1 = &DAT_100eecd78;
  _swift_allocObject(&DAT_100eecd78,0x30,7);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(puVar1 + 0x18) = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  *(undefined8 *)(puVar1 + 0x28) = param_2;
  _swift_unknownObjectRetain(param_1);
  auVar3._8_8_ = puVar1;
  auVar3._0_8_ = FUN_100625cac;
  return auVar3;
}



/* Address: 0x100624fc4 | thunk_FUN_100625dc8 */

void thunk_FUN_100625dc8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  (**(code **)(unaff_x20 + 0x10))();
  puVar2 = &DAT_100eecd50;
  _swift_allocObject(&DAT_100eecd50,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  *param_1 = FUN_100625c60;
  param_1[1] = puVar2;
  return;
}



/* Address: 0x100624fc8 | FUN_100624fc8 */

void FUN_100624fc8(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100651bb0();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x100624fe4 | FUN_100624fe4 */

void FUN_100624fe4(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100651cb0();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x100625000 | thunk_FUN_100625cb8 */

undefined1  [16] thunk_FUN_100625cb8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = param_1;
  uStack_28 = param_2;
  (**(code **)(unaff_x20 + 0x10))(&uStack_40,&uStack_30);
  puVar1 = &DAT_100eecbc0;
  _swift_allocObject(&DAT_100eecbc0,0x20,7);
  *(undefined8 *)(puVar1 + 0x18) = uStack_38;
  *(undefined8 *)(puVar1 + 0x10) = uStack_40;
  auVar2._8_8_ = puVar1;
  auVar2._0_8_ = FUN_100625b4c;
  return auVar2;
}



/* Address: 0x100625004 | FUN_100625004 */

undefined8 FUN_100625004(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fd7538;
  FUN_1000f7830(&DAT_100fd7538,&DAT_100c68bf0);
  (**(code **)(*(long *)(puVar1 + -8) + 0x28))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x100625054 | FUN_100625054 */

void FUN_100625054(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  void *pvVar5;
  void *pvVar6;
  long *unaff_x20;
  long lVar7;
  long lVar8;
  
  lVar1 = param_2 - param_1;
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10062512c);
    (*pcVar3)();
  }
  lVar7 = *unaff_x20;
  lVar8 = lVar7 + 0x20 + param_1 * 0x58;
  puVar4 = &DAT_100fd7538;
  FUN_1000f7830(&DAT_100fd7538,&DAT_100c68bf0);
  _swift_arrayDestroy(lVar8,lVar1,puVar4);
  lVar2 = param_3 - lVar1;
  if (SBORROW8(param_3,lVar1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100625130);
    (*pcVar3)();
  }
  if (lVar2 != 0) {
    lVar1 = *(long *)(lVar7 + 0x10) - param_2;
    if (SBORROW8(*(long *)(lVar7 + 0x10),param_2)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100625134);
      (*pcVar3)();
    }
    pvVar5 = (void *)(lVar8 + param_3 * 0x58);
    pvVar6 = (void *)(lVar7 + 0x20 + param_2 * 0x58);
    if ((pvVar5 != pvVar6) || ((void *)((long)pvVar6 + lVar1 * 0x58) <= pvVar5)) {
      _memmove(pvVar5,pvVar6,lVar1 * 0x58);
    }
    if (SCARRY8(*(long *)(lVar7 + 0x10),lVar2)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100625138);
      (*pcVar3)();
    }
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + lVar2;
  }
  if (param_3 < 1) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10062513c);
  (*pcVar3)();
}



/* Address: 0x10062513c | FUN_10062513c */

void FUN_10062513c(long param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1006251e8);
    (*pcVar2)();
  }
  lVar4 = *unaff_x20;
  lVar5 = *(long *)(lVar4 + 0x10);
  if (lVar5 < param_2) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1006251ec);
    (*pcVar2)();
  }
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1006251f0);
    (*pcVar2)();
  }
  lVar1 = -(param_2 - param_1);
  if (!SBORROW8(0,param_2 - param_1)) {
    if (!SCARRY8(lVar5,lVar1)) {
      lVar3 = lVar4;
      _swift_isUniquelyReferenced_nonNull_native();
      *unaff_x20 = lVar4;
      if (((int)lVar3 == 0) || ((long)(*(ulong *)(lVar4 + 0x18) >> 1) < lVar5 + lVar1)) {
        FUN_1006245ac();
        *unaff_x20 = lVar3;
        lVar4 = lVar3;
      }
      FUN_100625054(param_1,param_2,0);
      *unaff_x20 = lVar4;
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1006251f8);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1006251f4);
  (*pcVar2)();
}



/* Address: 0x1006251f8 | FUN_1006251f8 */

void FUN_1006251f8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10062521c();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Address: 0x10062521c | FUN_10062521c */

void FUN_10062521c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd7560 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c68c14;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c68c14,&DAT_100eec8d0);
  DAT_100fd7560 = pTVar1;
  return;
}



/* Address: 0x10062525c | FUN_10062525c */

void FUN_10062525c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_100625280();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Address: 0x100625280 | FUN_100625280 */

void FUN_100625280(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd7588 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c68c68;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c68c68,&DAT_100eec8f8);
  DAT_100fd7588 = pTVar1;
  return;
}



/* Address: 0x1006252c0 | FUN_1006252c0 */

void FUN_1006252c0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1006252e4();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Address: 0x1006252e4 | FUN_1006252e4 */

void FUN_1006252e4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd75b0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c68cbc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c68cbc,&DAT_100eec918);
  DAT_100fd75b0 = pTVar1;
  return;
}



/* Address: 0x100625324 | FUN_100625324 */

void FUN_100625324(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_100625348();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Address: 0x100625348 | FUN_100625348 */

void FUN_100625348(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd75d8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c68d10;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c68d10,&DAT_100eec938);
  DAT_100fd75d8 = pTVar1;
  return;
}



/* Address: 0x100625388 | FUN_100625388 */

void FUN_100625388(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1006253ac();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Address: 0x1006253ac | FUN_1006253ac */

void FUN_1006253ac(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd7600 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c68d64;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c68d64,&DAT_100eec958);
  DAT_100fd7600 = pTVar1;
  return;
}



/* Address: 0x1006253ec | FUN_1006253ec */

void FUN_1006253ec(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_100625410();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Address: 0x100625410 | FUN_100625410 */

void FUN_100625410(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd7628 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c68db8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c68db8,&DAT_100eec978);
  DAT_100fd7628 = pTVar1;
  return;
}



/* Address: 0x100625450 | FUN_100625450 */

void FUN_100625450(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_100625474();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}


