/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100631c20 | FUN_100631c20 */

void FUN_100631c20(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  FUN_100004594(unaff_x20 + 0x18);
  _swift_deallocObject();
  return;
}



/* Address: 0x100631c4c | FUN_100631c4c */

void FUN_100631c4c(void)

{
  long unaff_x20;
  
  FUN_100629b80(*(undefined8 *)(unaff_x20 + 0x10),unaff_x20 + 0x18);
  return;
}



/* Address: 0x100631c58 | FUN_100631c58 */

void FUN_100631c58(void)

{
  FUN_10061e580(PTR__swift_errorRelease_100eae218);
  return;
}



/* Address: 0x100631c64 | FUN_100631c64 */

void FUN_100631c64(void)

{
  long unaff_x20;
  
  FUN_100629cf8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100631c6c | FUN_100631c6c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100631c6c(void)

{
  return ZEXT816(0x100fd7a00);
}



/* Address: 0x100631c8c | FUN_100631c8c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100631c8c(void)

{
  return ZEXT816(0x100fd7a98);
}



/* Address: 0x100631cac | FUN_100631cac */

void FUN_100631cac(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10062f2b4(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100631cc4 | FUN_100631cc4 */

void FUN_100631cc4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fd78c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fd78b8;
  FUN_1000f8b08(&DAT_100fd78b8,&DAT_100c694a0);
  puVar2 = PTR_Swift__Swift__Array<undefined>_>Swift__BidirectionalCollection_100eac518;
  _swift_getWitnessTable
            (PTR_Swift__Swift__Array<undefined>_>Swift__BidirectionalCollection_100eac518,puVar1);
  DAT_100fd78c0 = puVar2;
  return;
}



/* Address: 0x100631d14 | FUN_100631d14 */

void FUN_100631d14(void)

{
  FUN_10062f714();
  return;
}



/* Address: 0x100631d2c | FUN_100631d2c */

void FUN_100631d2c(void)

{
  FUN_10062fb64();
  return;
}



/* Address: 0x100631d44 | thunk_FUN_100631d48 */

void thunk_FUN_100631d48(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd78f0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c69500;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c69500,&DAT_100eed960);
  DAT_100fd78f0 = pTVar1;
  return;
}



/* Address: 0x100631d48 | FUN_100631d48 */

void FUN_100631d48(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd78f0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c69500;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c69500,&DAT_100eed960);
  DAT_100fd78f0 = pTVar1;
  return;
}



/* Address: 0x100631d88 | FUN_100631d88 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100631d88(void)

{
  return ZEXT816(0x100fd7938);
}



/* Address: 0x100631da8 | FUN_100631da8 */

undefined1  [16] FUN_100631da8(void)

{
  return ZEXT816(0x100eed7a8);
}



/* Address: 0x100631db8 | FUN_100631db8 */

undefined8 * FUN_100631db8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  FUN_1005dfcb0(uVar1,uVar2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return param_1;
}



/* Address: 0x100631df4 | FUN_100631df4 */

void FUN_100631df4(void)

{
  FUN_100631e38();
  return;
}



/* Address: 0x100631e08 | FUN_100631e08 */

undefined1  [16] FUN_100631e08(void)

{
  return ZEXT816(0x100eed840);
}



/* Address: 0x100631e18 | FUN_100631e18 */

void FUN_100631e18(undefined8 *param_1)

{
  FUN_1005dfc80(*param_1,param_1[1]);
  return;
}



/* Address: 0x100631e24 | FUN_100631e24 */

void FUN_100631e24(void)

{
  FUN_100631e38();
  return;
}



/* Address: 0x100631e38 | FUN_100631e38 */

undefined8 *
FUN_100631e38(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,code *param_4,code *param_5
             )

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  (*param_4)(uVar1,uVar3);
  uVar2 = *param_1;
  uVar4 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = uVar3;
  (*param_5)(uVar2,uVar4);
  return param_1;
}



/* Address: 0x100631e80 | FUN_100631e80 */

undefined8 * FUN_100631e80(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  FUN_1005dfc80(uVar1,uVar2);
  return param_1;
}



/* Address: 0x100631eb8 | thunk_FUN_100631ebc */

int thunk_FUN_100631ebc(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7d < param_2) && ((char)param_1[4] != '\0')) {
    return *param_1 + 0x7e;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x19 & 0x18 | (uint)*(undefined8 *)(param_1 + 2) & 7) << 2) ^
          0x7f;
  if (0x7c < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x100631ebc | FUN_100631ebc */

int FUN_100631ebc(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7d < param_2) && ((char)param_1[4] != '\0')) {
    return *param_1 + 0x7e;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x19 & 0x18 | (uint)*(undefined8 *)(param_1 + 2) & 7) << 2) ^
          0x7f;
  if (0x7c < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x100631f18 | thunk_FUN_100631f1c */

void thunk_FUN_100631f1c(ulong *param_1,uint param_2,uint param_3)

{
  ulong uVar1;
  
  if (param_2 < 0x7e) {
    if (0x7d < param_3) {
      *(undefined1 *)(param_1 + 2) = 0;
    }
    if (param_2 != 0) {
      uVar1 = (ulong)(-param_2 >> 2 & 0x1f | (-param_2 & 0x7f) << 5);
      *param_1 = 0;
      param_1[1] = (uVar1 | uVar1 << 0x39) & 0xf000000000000007;
      return;
    }
  }
  else {
    *param_1 = (ulong)(param_2 - 0x7e);
    param_1[1] = 0;
    if (0x7d < param_3) {
      *(undefined1 *)(param_1 + 2) = 1;
    }
  }
  return;
}



/* Address: 0x100631f1c | FUN_100631f1c */

void FUN_100631f1c(ulong *param_1,uint param_2,uint param_3)

{
  ulong uVar1;
  
  if (param_2 < 0x7e) {
    if (0x7d < param_3) {
      *(undefined1 *)(param_1 + 2) = 0;
    }
    if (param_2 != 0) {
      uVar1 = (ulong)(-param_2 >> 2 & 0x1f | (-param_2 & 0x7f) << 5);
      *param_1 = 0;
      param_1[1] = (uVar1 | uVar1 << 0x39) & 0xf000000000000007;
      return;
    }
  }
  else {
    *param_1 = (ulong)(param_2 - 0x7e);
    param_1[1] = 0;
    if (0x7d < param_3) {
      *(undefined1 *)(param_1 + 2) = 1;
    }
  }
  return;
}



/* Address: 0x100631f6c | FUN_100631f6c */

uint FUN_100631f6c(int *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1 + 2;
  if (-1 < *(long *)(param_1 + 2)) {
    uVar1 = (uint)((ulong)*(long *)(param_1 + 2) >> 0x3e);
  }
  return uVar1;
}



/* Address: 0x100631f88 | FUN_100631f88 */

void FUN_100631f88(long param_1)

{
  *(ulong *)(param_1 + 8) = *(ulong *)(param_1 + 8) & 0x3fffffffffffffff;
  return;
}



/* Address: 0x100631f98 | thunk_FUN_100631f9c */

void thunk_FUN_100631f9c(ulong *param_1,uint param_2)

{
  if (1 < param_2) {
    *param_1 = (ulong)(param_2 - 2);
    param_1[1] = 0x8000000000000000;
    return;
  }
  param_1[1] = param_1[1] & 0xffffffffffffff8 | (ulong)param_2 << 0x3e;
  return;
}



/* Address: 0x100631f9c | FUN_100631f9c */

void FUN_100631f9c(ulong *param_1,uint param_2)

{
  if (1 < param_2) {
    *param_1 = (ulong)(param_2 - 2);
    param_1[1] = 0x8000000000000000;
    return;
  }
  param_1[1] = param_1[1] & 0xffffffffffffff8 | (ulong)param_2 << 0x3e;
  return;
}



/* Address: 0x100631fc4 | FUN_100631fc4 */

undefined1  [16] FUN_100631fc4(void)

{
  return ZEXT816(0x100eed8d0);
}



/* Address: 0x100631fd4 | FUN_100631fd4 */

undefined1  [16] FUN_100631fd4(void)

{
  return ZEXT816(0x100eed960);
}



/* Address: 0x100631fe4 | FUN_100631fe4 */

undefined1  [16] FUN_100631fe4(void)

{
  return ZEXT816(0x100eed9d8);
}



/* Address: 0x100631ff4 | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  FUN_100049040();
  return;
}



/* Address: 0x100631ff8 | thunk_FUN_10061e53c */

void thunk_FUN_10061e53c(void)

{
  FUN_10061e53c();
  return;
}



/* Address: 0x100631ffc | FUN_100631ffc */

void FUN_100631ffc(void)

{
  FUN_10061e580(PTR__swift_release_100eae3e8);
  return;
}



/* Address: 0x100632008 | FUN_100632008 */

void FUN_100632008(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd7bc8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6855c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6855c,&DAT_100eeb730);
  DAT_100fd7bc8 = pTVar1;
  return;
}



/* Address: 0x100632048 | thunk_FUN_1006310f8 */

void thunk_FUN_1006310f8(void)

{
  FUN_1006310f8();
  return;
}



/* Address: 0x10063204c | thunk_FUN_1006311a0 */

void thunk_FUN_1006311a0(void)

{
  FUN_1006311a0();
  return;
}



/* Address: 0x100632050 | FUN_100632050 */

void FUN_100632050(undefined8 *param_1)

{
  _swift_unknownObjectRelease(*param_1);
  _swift_bridgeObjectRelease(param_1[3]);
  return;
}



/* Address: 0x100632078 | FUN_100632078 */

undefined8 * FUN_100632078(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  _swift_unknownObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar1);
  return param_1;
}



/* Address: 0x1006320b8 | FUN_1006320b8 */

undefined8 * FUN_1006320b8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = *param_1;
  *param_1 = *param_2;
  _swift_unknownObjectRetain();
  _swift_unknownObjectRelease(uVar2);
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x100632120 | FUN_100632120 */

undefined8 * FUN_100632120(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _swift_unknownObjectRelease(*param_1);
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  uVar2 = param_2[3];
  uVar1 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x100632164 | FUN_100632164 */

undefined1  [16] FUN_100632164(void)

{
  return ZEXT816(0x100eede50);
}



/* Address: 0x100632174 | FUN_100632174 */

void FUN_100632174(void)

{
  FUN_10062c2d4();
  return;
}



/* Address: 0x100632188 | FUN_100632188 */

void FUN_100632188(void)

{
  FUN_10062c3a0();
  return;
}



/* Address: 0x10063219c | thunk_FUN_1005dfcf0 */

void thunk_FUN_1005dfcf0(void)

{
  long unaff_x20;
  
  FUN_1006289cc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x1006321a0 | thunk_FUN_1005dfd8c */

void thunk_FUN_1005dfd8c(void)

{
  long unaff_x20;
  
  FUN_100628f10(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x1006321a4 | thunk_FUN_100631f6c */

void thunk_FUN_100631f6c(void)

{
  FUN_100631f6c();
  return;
}



/* Address: 0x1006321a8 | thunk_FUN_100631cac */

void thunk_FUN_100631cac(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10062f2b4(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1006321ac | thunk_FUN_100631f1c */

void thunk_FUN_100631f1c(void)

{
  thunk_FUN_100631f1c();
  return;
}



/* Address: 0x1006321b0 | thunk_FUN_1005dfc80 */

void thunk_FUN_1005dfc80(void)

{
  FUN_1005dfc80();
  return;
}



/* Address: 0x1006321b4 | thunk_FUN_1005dfcb0 */

void thunk_FUN_1005dfcb0(void)

{
  FUN_1005dfcb0();
  return;
}



/* Address: 0x1006321b8 | thunk_FUN_100308524 */

void thunk_FUN_100308524(void)

{
  FUN_100308524();
  return;
}



/* Address: 0x1006321bc | thunk_FUN_1006303e8 */

void thunk_FUN_1006303e8(undefined8 param_1,undefined8 param_2)

{
  FUN_100630334(param_1,param_2,FUN_1005dff00);
  return;
}



/* Address: 0x1006321c0 | thunk_FUN_100630328 */

void thunk_FUN_100630328(undefined8 param_1,undefined8 param_2)

{
  FUN_100630334(param_1,param_2,FUN_100308524);
  return;
}



/* Address: 0x1006321c4 | thunk_FUN_100631ebc */

int thunk_FUN_100631ebc(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7d < param_2) && ((char)param_1[4] != '\0')) {
    return *param_1 + 0x7e;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x19 & 0x18 | (uint)*(undefined8 *)(param_1 + 2) & 7) << 2) ^
          0x7f;
  if (0x7c < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x1006321c8 | thunk_FUN_100631f9c */

void thunk_FUN_100631f9c(ulong *param_1,uint param_2)

{
  if (1 < param_2) {
    *param_1 = (ulong)(param_2 - 2);
    param_1[1] = 0x8000000000000000;
    return;
  }
  param_1[1] = param_1[1] & 0xffffffffffffff8 | (ulong)param_2 << 0x3e;
  return;
}



/* Address: 0x1006321cc | thunk_FUN_100631f88 */

void thunk_FUN_100631f88(long param_1)

{
  *(ulong *)(param_1 + 8) = *(ulong *)(param_1 + 8) & 0x3fffffffffffffff;
  return;
}



/* Address: 0x1006321d0 | thunk_FUN_100631db8 */

void thunk_FUN_100631db8(void)

{
  FUN_100631db8();
  return;
}



/* Address: 0x1006321d4 | thunk_FUN_100631c58 */

void thunk_FUN_100631c58(void)

{
  FUN_10061e580(PTR__swift_errorRelease_100eae218);
  return;
}



/* Address: 0x1006321d8 | thunk_FUN_100631c58 */

void thunk_FUN_100631c58(void)

{
  FUN_10061e580(PTR__swift_errorRelease_100eae218);
  return;
}



/* Address: 0x1006321dc | thunk_FUN_10061e53c */

void thunk_FUN_10061e53c(void)

{
  FUN_10061e53c();
  return;
}



/* Address: 0x1006321e0 | thunk_FUN_100631740 */

void thunk_FUN_100631740(void)

{
  FUN_100631740();
  return;
}



/* Address: 0x1006321e4 | thunk_FUN_100631820 */

void thunk_FUN_100631820(void)

{
  FUN_100631820();
  return;
}


