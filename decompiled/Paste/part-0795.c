/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1008c0da8 | FUN_1008c0da8 */

void FUN_1008c0da8(void)

{
  undefined8 uVar1;
  long *plVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x80));
  *(undefined8 *)(unaff_x22 + 0x50) = uVar1;
  plVar2 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x90) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1008c0e2c;
  FUN_1005dbf6c("NIOEmbedded/AsyncTestingChannel.swift",0x25,2,0x149,
                *(undefined8 *)(unaff_x22 + 0x70),&PTR_PTR_100f0ce60);
  return;
}



/* Address: 0x1008c0e2c | FUN_1008c0e2c */

void FUN_1008c0e2c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x98) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x90));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1008c0ef4;
  }
  else {
    pcVar1 = FUN_1008c0f40;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1008c0e90 | FUN_1008c0e90 */

void FUN_1008c0e90(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x58);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x80));
  _swift_release(uVar1);
  _swift_release(uVar2);
  _swift_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001008c0ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1008c0ef4 | FUN_1008c0ef4 */

void FUN_1008c0ef4(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x68));
  _swift_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001008c0f3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x78));
  return;
}



/* Address: 0x1008c0f40 | FUN_1008c0f40 */

void FUN_1008c0f40(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x68));
  _swift_release(uVar1);
  _swift_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001008c0f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1008c0f94 | FUN_1008c0f94 */

void FUN_1008c0f94(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100feb0d0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c684cc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c684cc,&DAT_100eeb710);
  DAT_100feb0d0 = pTVar1;
  return;
}



/* Address: 0x1008c0fd4 | FUN_1008c0fd4 */

void FUN_1008c0fd4(void)

{
  FUN_1008c2884();
  return;
}



/* Address: 0x1008c0ffc | FUN_1008c0ffc */

void FUN_1008c0ffc(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1008be830(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1008c1008 | FUN_1008c1008 */

void FUN_1008c1008(void)

{
  FUN_1008bc0c4();
  return;
}



/* Address: 0x1008c101c | FUN_1008c101c */

void FUN_1008c101c(void)

{
  FUN_1008ba528();
  return;
}



/* Address: 0x1008c1034 | FUN_1008c1034 */

void FUN_1008c1034(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1008bea94(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1008c1040 | FUN_1008c1040 */

void FUN_1008c1040(void)

{
  long unaff_x20;
  
  FUN_1008ba9c4(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1008c1058 | FUN_1008c1058 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_1008c1058(void)

{
  undefined *puVar1;
  
  if (DAT_100feb0e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &_OBJC_CLASS___OS_dispatch_queue;
  _swift_getObjCClassMetadata();
  DAT_100feb0e8 = puVar1;
  return;
}



/* Address: 0x1008c109c | FUN_1008c109c */

void FUN_1008c109c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1008bb684(param_1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x10),
                &DAT_100f0d2b0,FUN_1008c242c);
  return;
}



/* Address: 0x1008c10c4 | FUN_1008c10c4 */

void FUN_1008c10c4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100feb0f0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c82728;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c82728,&DAT_100f0d048);
  DAT_100feb0f0 = pTVar1;
  return;
}



/* Address: 0x1008c1104 | FUN_1008c1104 */

void FUN_1008c1104(void)

{
  long unaff_x20;
  
  FUN_1008bb4e0(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1008c111c | FUN_1008c111c */

void FUN_1008c111c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1008bb684(param_1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x10),
                &DAT_100f0d238,FUN_1008c2340);
  return;
}



/* Address: 0x1008c1144 | FUN_1008c1144 */

void FUN_1008c1144(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  ulong uVar3;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(lVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  (**(code **)(lVar2 + 8))(unaff_x20 + (uVar3 + 0x20 & (uVar3 ^ 0xffffffffffffffff)),lVar1);
  _swift_deallocObject();
  return;
}



/* Address: 0x1008c11a4 | FUN_1008c11a4 */

void FUN_1008c11a4(void)

{
  ulong uVar1;
  long unaff_x20;
  
  uVar1 = (ulong)*(byte *)(*(long *)(*(long *)(unaff_x20 + 0x10) + -8) + 0x50);
  FUN_1008bbfac(*(undefined8 *)(unaff_x20 + 0x18),
                unaff_x20 + (uVar1 + 0x20 & (uVar1 ^ 0xffffffffffffffff)));
  return;
}



/* Address: 0x1008c11d0 | FUN_1008c11d0 */

void FUN_1008c11d0(void)

{
  FUN_1008bc390();
  return;
}



/* Address: 0x1008c11e8 | FUN_1008c11e8 */

void FUN_1008c11e8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x20;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar5 = *(long *)(lVar1 + -8);
  uVar6 = (ulong)*(byte *)(lVar5 + 0x50) + 0x28 &
          ((ulong)*(byte *)(lVar5 + 0x50) ^ 0xffffffffffffffff);
  lVar3 = *(long *)(lVar5 + 0x40);
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(unaff_x20 + 0x18),lVar1,0x100cb819c,
             &TargetProtocolRequirement_100cb81b4);
  lVar7 = *(long *)(lVar2 + -8);
  uVar4 = (ulong)*(byte *)(lVar7 + 0x50);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  (**(code **)(lVar5 + 8))(unaff_x20 + uVar6,lVar1);
  (**(code **)(lVar7 + 8))(unaff_x20 + (uVar6 + lVar3 + uVar4 & (uVar4 ^ 0xffffffffffffffff)),lVar2)
  ;
  _swift_deallocObject();
  return;
}



/* Address: 0x1008c12a8 | FUN_1008c12a8 */

void FUN_1008c12a8(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long unaff_x20;
  ulong uVar6;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  uVar6 = uVar5 + 0x28 & (uVar5 ^ 0xffffffffffffffff);
  lVar4 = *(long *)(*(long *)(lVar1 + -8) + 0x40);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness(0,uVar2,lVar1,0x100cb819c,&TargetProtocolRequirement_100cb81b4);
  uVar5 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  FUN_1008bc7a8(*(undefined8 *)(unaff_x20 + 0x20),unaff_x20 + uVar6,
                unaff_x20 + (uVar6 + lVar4 + uVar5 & (uVar5 ^ 0xffffffffffffffff)),lVar1,uVar2);
  return;
}



/* Address: 0x1008c1340 | FUN_1008c1340 */

void FUN_1008c1340(void)

{
  long unaff_x20;
  
  FUN_1008bf690(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1008c134c | FUN_1008c134c */

void FUN_1008c134c(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  ulong uVar3;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(lVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  (**(code **)(lVar2 + 8))(unaff_x20 + (uVar3 + 0x28 & (uVar3 ^ 0xffffffffffffffff)),lVar1);
  _swift_deallocObject();
  return;
}



/* Address: 0x1008c13b0 | FUN_1008c13b0 */

void FUN_1008c13b0(void)

{
  ulong uVar1;
  long unaff_x20;
  
  uVar1 = (ulong)*(byte *)(*(long *)(*(long *)(unaff_x20 + 0x10) + -8) + 0x50);
  FUN_1008bcb84(unaff_x20 + (uVar1 + 0x28 & (uVar1 ^ 0xffffffffffffffff)),
                *(long *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1008c13f4 | thunk_FUN_1008c1434 */

void thunk_FUN_1008c1434(void)

{
  FUN_1008c1434();
  return;
}



/* Address: 0x1008c13f8 | FUN_1008c13f8 */

void FUN_1008c13f8(void)

{
  long unaff_x20;
  
  FUN_1008bdb3c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1008c1400 | FUN_1008c1400 */

void FUN_1008c1400(void)

{
  long unaff_x20;
  
  FUN_10064bebc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1008c140c | thunk_FUN_10061e53c */

void thunk_FUN_10061e53c(void)

{
  FUN_10061e53c();
  return;
}



/* Address: 0x1008c1410 | FUN_1008c1410 */

void FUN_1008c1410(void)

{
  long unaff_x20;
  
  FUN_1008be104(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),FUN_100626f24);
  return;
}



/* Address: 0x1008c1434 | FUN_1008c1434 */

void FUN_1008c1434(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(ulong *)(unaff_x20 + 0x18) & 0x3fffffffffffffff);
  _swift_deallocObject();
  return;
}



/* Address: 0x1008c1464 | FUN_1008c1464 */

void FUN_1008c1464(void)

{
  long unaff_x20;
  
  FUN_1008be068(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1008c146c | FUN_1008c146c */

void FUN_1008c146c(void)

{
  long unaff_x20;
  
  FUN_1008be104(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),FUN_10062701c);
  return;
}



/* Address: 0x1008c1490 | FUN_1008c1490 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1008c1490(void)

{
  return ZEXT816(0x100feb1a8);
}



/* Address: 0x1008c14b0 | FUN_1008c14b0 */

void FUN_1008c14b0(ulong *param_1)

{
  if (0xfffffffe < *param_1) {
    _swift_release();
    _swift_release(param_1[3]);
    _swift_bridgeObjectRelease(param_1[6]);
    return;
  }
  return;
}



/* Address: 0x1008c14f8 | FUN_1008c14f8 */

ulong * FUN_1008c14f8(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = *param_2;
  if (0xfffffffe < uVar1) {
    *param_1 = uVar1;
    uVar2 = param_2[1];
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    uVar2 = param_2[3];
    param_1[3] = uVar2;
    uVar3 = param_2[4];
    param_1[5] = param_2[5];
    param_1[4] = uVar3;
    uVar3 = param_2[6];
    param_1[6] = uVar3;
    _swift_retain(uVar1);
    _swift_retain(uVar2);
    _swift_bridgeObjectRetain(uVar3);
    return param_1;
  }
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar1 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar1;
  param_1[6] = param_2[6];
  return param_1;
}



/* Address: 0x1008c1588 | FUN_1008c1588 */

ulong * FUN_1008c1588(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar2 = *param_1;
  uVar1 = *param_2;
  if (uVar2 < 0xffffffff) {
    if (0xfffffffe < uVar1) {
      *param_1 = uVar1;
      param_1[1] = param_2[1];
      param_1[2] = param_2[2];
      uVar2 = param_2[3];
      param_1[3] = uVar2;
      param_1[4] = param_2[4];
      param_1[5] = param_2[5];
      uVar1 = param_2[6];
      param_1[6] = uVar1;
      _swift_retain();
      _swift_retain(uVar2);
      _swift_bridgeObjectRetain(uVar1);
      return param_1;
    }
  }
  else {
    if (0xfffffffe < uVar1) {
      *param_1 = uVar1;
      _swift_retain();
      _swift_release(uVar2);
      param_1[1] = param_2[1];
      param_1[2] = param_2[2];
      uVar1 = param_1[3];
      param_1[3] = param_2[3];
      _swift_retain();
      _swift_release(uVar1);
      param_1[4] = param_2[4];
      param_1[5] = param_2[5];
      uVar1 = param_1[6];
      param_1[6] = param_2[6];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRelease(uVar1);
      return param_1;
    }
    _swift_release(uVar2);
    _swift_release(param_1[3]);
    _swift_bridgeObjectRelease(param_1[6]);
  }
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar6 = param_2[5];
  uVar5 = param_2[4];
  param_1[6] = param_2[6];
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  param_1[5] = uVar6;
  param_1[4] = uVar5;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return param_1;
}



/* Address: 0x1008c16c0 | FUN_1008c16c0 */

void FUN_1008c16c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar6 = param_2[5];
  uVar5 = param_2[4];
  param_1[6] = param_2[6];
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  param_1[5] = uVar6;
  param_1[4] = uVar5;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x1008c16dc | FUN_1008c16dc */

ulong * FUN_1008c16dc(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = *param_1;
  if (uVar1 < 0xffffffff) {
    uVar1 = *param_2;
    uVar3 = param_2[3];
    uVar2 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar1;
    param_1[3] = uVar3;
    param_1[2] = uVar2;
    uVar1 = param_2[4];
    param_1[5] = param_2[5];
    param_1[4] = uVar1;
    param_1[6] = param_2[6];
  }
  else if (*param_2 < 0xffffffff) {
    _swift_release(uVar1);
    _swift_release(param_1[3]);
    _swift_bridgeObjectRelease(param_1[6]);
    uVar1 = *param_2;
    uVar3 = param_2[3];
    uVar2 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar1;
    param_1[3] = uVar3;
    param_1[2] = uVar2;
    uVar1 = param_2[4];
    param_1[5] = param_2[5];
    param_1[4] = uVar1;
    param_1[6] = param_2[6];
  }
  else {
    *param_1 = *param_2;
    _swift_release(uVar1);
    uVar1 = param_2[1];
    param_1[2] = param_2[2];
    param_1[1] = uVar1;
    uVar1 = param_1[3];
    param_1[3] = param_2[3];
    _swift_release(uVar1);
    uVar1 = param_2[4];
    param_1[5] = param_2[5];
    param_1[4] = uVar1;
    uVar1 = param_1[6];
    param_1[6] = param_2[6];
    _swift_bridgeObjectRelease(uVar1);
  }
  return param_1;
}



/* Address: 0x1008c17b0 | FUN_1008c17b0 */

int FUN_1008c17b0(ulong *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[7] != '\0')) {
    return (int)*param_1 + 0x7fffffff;
  }
  uVar2 = *param_1;
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (1 < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2;
  }
  return iVar1;
}



/* Address: 0x1008c1800 | FUN_1008c1800 */

void FUN_1008c1800(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0x7fffffff) {
    if (0x7ffffffe < param_3) {
      *(undefined1 *)(param_1 + 7) = 0;
    }
    if (param_2 != 0) {
      *param_1 = (ulong)param_2;
      return;
    }
  }
  else {
    param_1[6] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    *(uint *)param_1 = param_2 + 0x80000001;
    if (0x7ffffffe < param_3) {
      *(undefined1 *)(param_1 + 7) = 1;
    }
  }
  return;
}



/* Address: 0x1008c1860 | FUN_1008c1860 */

void FUN_1008c1860(ulong *param_1,uint param_2)

{
  if ((int)param_2 < 0) {
    param_1[6] = 0;
    param_1[5] = 0;
    param_2 = param_2 & 0x7fffffff;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
  }
  else {
    if (param_2 == 0) {
      return;
    }
    param_2 = param_2 - 1;
  }
  *param_1 = (ulong)param_2;
  return;
}



/* Address: 0x1008c188c | FUN_1008c188c */

undefined1  [16] FUN_1008c188c(void)

{
  return ZEXT816(0x100f0cf40);
}



/* Address: 0x1008c189c | FUN_1008c189c */

void FUN_1008c189c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x1008c18b0 | FUN_1008c18b0 */

undefined1  [16] FUN_1008c18b0(void)

{
  return ZEXT816(0x100f0cfd0);
}



/* Address: 0x1008c18c0 | FUN_1008c18c0 */

void FUN_1008c18c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  return;
}



/* Address: 0x1008c18cc | FUN_1008c18cc */

void FUN_1008c18cc(void)

{
  return;
}



/* Address: 0x1008c18d0 | FUN_1008c18d0 */

undefined1  [16] FUN_1008c18d0(void)

{
  return ZEXT816(0x100f0d048);
}



/* Address: 0x1008c18e0 | FUN_1008c18e0 */

undefined1 * FUN_1008c18e0(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Address: 0x1008c1914 | FUN_1008c1914 */

undefined1 * FUN_1008c1914(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x1008c1954 | FUN_1008c1954 */

undefined1 * FUN_1008c1954(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x1008c198c | FUN_1008c198c */

undefined1  [16] FUN_1008c198c(void)

{
  return ZEXT816(0x100f0d0c8);
}



/* Address: 0x1008c199c | FUN_1008c199c */

undefined1  [16] FUN_1008c199c(void)

{
  return ZEXT816(0x100f0d0f0);
}



/* Address: 0x1008c19ac | FUN_1008c19ac */

void FUN_1008c19ac(void *param_1,void *param_2)

{
  _memcpy(param_1,param_2,0x2000);
  return;
}



/* Address: 0x1008c19b4 | FUN_1008c19b4 */

int FUN_1008c19b4(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[0x800] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Address: 0x1008c19d8 | FUN_1008c19d8 */

void FUN_1008c19d8(ulong *param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  
  if (param_2 == 0) {
    if (param_3 == 0) {
      return;
    }
    uVar1 = 0;
  }
  else {
    param_1[0x3ff] = 0;
    param_1[0x20] = 0;
    param_1[0x1f] = 0;
    param_1[0x1e] = 0;
    param_1[0x1d] = 0;
    param_1[0x1c] = 0;
    param_1[0x1b] = 0;
    param_1[0x1a] = 0;
    param_1[0x19] = 0;
    param_1[0x18] = 0;
    param_1[0x17] = 0;
    param_1[0x16] = 0;
    param_1[0x15] = 0;
    param_1[0x14] = 0;
    param_1[0x13] = 0;
    param_1[0x12] = 0;
    param_1[0x11] = 0;
    param_1[0x10] = 0;
    param_1[0xf] = 0;
    param_1[0xe] = 0;
    param_1[0xd] = 0;
    param_1[0xc] = 0;
    param_1[0xb] = 0;
    param_1[10] = 0;
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    param_1[0x220] = 0;
    param_1[0x21f] = 0;
    param_1[0x21e] = 0;
    param_1[0x21d] = 0;
    param_1[0x21c] = 0;
    param_1[0x21b] = 0;
    param_1[0x21a] = 0;
    param_1[0x219] = 0;
    param_1[0x218] = 0;
    param_1[0x217] = 0;
    param_1[0x216] = 0;
    param_1[0x215] = 0;
    param_1[0x214] = 0;
    param_1[0x213] = 0;
    param_1[0x212] = 0;
    param_1[0x211] = 0;
    param_1[0x210] = 0;
    param_1[0x20f] = 0;
    param_1[0x20e] = 0;
    param_1[0x20d] = 0;
    param_1[0x20c] = 0;
    param_1[0x20b] = 0;
    param_1[0x20a] = 0;
    param_1[0x209] = 0;
    param_1[0x208] = 0;
    param_1[0x207] = 0;
    param_1[0x206] = 0;
    param_1[0x205] = 0;
    param_1[0x204] = 0;
    param_1[0x203] = 0;
    param_1[0x202] = 0;
    param_1[0x201] = 0;
    param_1[0x200] = 0;
    param_1[0x1ff] = 0;
    param_1[0x1fe] = 0;
    param_1[0x1fd] = 0;
    param_1[0x1fc] = 0;
    param_1[0x1fb] = 0;
    param_1[0x1fa] = 0;
    param_1[0x1f9] = 0;
    param_1[0x1f8] = 0;
    param_1[0x1f7] = 0;
    param_1[0x1f6] = 0;
    param_1[0x1f5] = 0;
    param_1[500] = 0;
    param_1[499] = 0;
    param_1[0x1f2] = 0;
    param_1[0x1f1] = 0;
    param_1[0x1f0] = 0;
    param_1[0x1ef] = 0;
    param_1[0x1ee] = 0;
    param_1[0x1ed] = 0;
    param_1[0x1ec] = 0;
    param_1[0x1eb] = 0;
    param_1[0x1ea] = 0;
    param_1[0x1e9] = 0;
    param_1[0x1e8] = 0;
    param_1[0x1e7] = 0;
    param_1[0x1e6] = 0;
    param_1[0x1e5] = 0;
    param_1[0x1e4] = 0;
    param_1[0x1e3] = 0;
    param_1[0x1e2] = 0;
    param_1[0x1e1] = 0;
    param_1[0x1e0] = 0;
    param_1[0x1df] = 0;
    param_1[0x1de] = 0;
    param_1[0x1dd] = 0;
    param_1[0x1dc] = 0;
    param_1[0x1db] = 0;
    param_1[0x1da] = 0;
    param_1[0x1d9] = 0;
    param_1[0x1d8] = 0;
    param_1[0x1d7] = 0;
    param_1[0x1d6] = 0;
    param_1[0x1d5] = 0;
    param_1[0x1d4] = 0;
    param_1[0x1d3] = 0;
    param_1[0x1d2] = 0;
    param_1[0x1d1] = 0;
    param_1[0x1d0] = 0;
    param_1[0x1cf] = 0;
    param_1[0x1ce] = 0;
    param_1[0x1cd] = 0;
    param_1[0x1cc] = 0;
    param_1[0x1cb] = 0;
    param_1[0x1ca] = 0;
    param_1[0x1c9] = 0;
    param_1[0x1c8] = 0;
    param_1[0x1c7] = 0;
    param_1[0x1c6] = 0;
    param_1[0x1c5] = 0;
    param_1[0x1c4] = 0;
    param_1[0x1c3] = 0;
    param_1[0x1c2] = 0;
    param_1[0x1c1] = 0;
    param_1[0x1c0] = 0;
    param_1[0x1bf] = 0;
    param_1[0x1be] = 0;
    param_1[0x1bd] = 0;
    param_1[0x1bc] = 0;
    param_1[0x1bb] = 0;
    param_1[0x1ba] = 0;
    param_1[0x1b9] = 0;
    param_1[0x1b8] = 0;
    param_1[0x1b7] = 0;
    param_1[0x1b6] = 0;
    param_1[0x1b5] = 0;
    param_1[0x1b4] = 0;
    param_1[0x1b3] = 0;
    param_1[0x1b2] = 0;
    param_1[0x1b1] = 0;
    param_1[0x1b0] = 0;
    param_1[0x1af] = 0;
    param_1[0x1ae] = 0;
    param_1[0x1ad] = 0;
    param_1[0x1ac] = 0;
    param_1[0x1ab] = 0;
    param_1[0x1aa] = 0;
    param_1[0x1a9] = 0;
    param_1[0x1a8] = 0;
    param_1[0x1a7] = 0;
    param_1[0x1a6] = 0;
    param_1[0x1a5] = 0;
    param_1[0x1a4] = 0;
    param_1[0x1a3] = 0;
    param_1[0x1a2] = 0;
    param_1[0x1a1] = 0;
    param_1[0x1a0] = 0;
    param_1[0x19f] = 0;
    param_1[0x19e] = 0;
    param_1[0x19d] = 0;
    param_1[0x19c] = 0;
    param_1[0x19b] = 0;
    param_1[0x19a] = 0;
    param_1[0x199] = 0;
    param_1[0x198] = 0;
    param_1[0x197] = 0;
    param_1[0x196] = 0;
    param_1[0x195] = 0;
    param_1[0x194] = 0;
    param_1[0x193] = 0;
    param_1[0x192] = 0;
    param_1[0x191] = 0;
    param_1[400] = 0;
    param_1[399] = 0;
    param_1[0x18e] = 0;
    param_1[0x18d] = 0;
    param_1[0x18c] = 0;
    param_1[0x18b] = 0;
    param_1[0x18a] = 0;
    param_1[0x189] = 0;
    param_1[0x188] = 0;
    param_1[0x187] = 0;
    param_1[0x186] = 0;
    param_1[0x185] = 0;
    param_1[0x184] = 0;
    param_1[0x183] = 0;
    param_1[0x182] = 0;
    param_1[0x181] = 0;
    param_1[0x180] = 0;
    param_1[0x17f] = 0;
    param_1[0x17e] = 0;
    param_1[0x17d] = 0;
    param_1[0x17c] = 0;
    param_1[0x17b] = 0;
    param_1[0x17a] = 0;
    param_1[0x179] = 0;
    param_1[0x178] = 0;
    param_1[0x177] = 0;
    param_1[0x176] = 0;
    param_1[0x175] = 0;
    param_1[0x174] = 0;
    param_1[0x173] = 0;
    param_1[0x172] = 0;
    param_1[0x171] = 0;
    param_1[0x170] = 0;
    param_1[0x16f] = 0;
    param_1[0x16e] = 0;
    param_1[0x16d] = 0;
    param_1[0x16c] = 0;
    param_1[0x16b] = 0;
    param_1[0x16a] = 0;
    param_1[0x169] = 0;
    param_1[0x168] = 0;
    param_1[0x167] = 0;
    param_1[0x166] = 0;
    param_1[0x165] = 0;
    param_1[0x164] = 0;
    param_1[0x163] = 0;
    param_1[0x162] = 0;
    param_1[0x161] = 0;
    param_1[0x160] = 0;
    param_1[0x15f] = 0;
    param_1[0x15e] = 0;
    param_1[0x15d] = 0;
    param_1[0x15c] = 0;
    param_1[0x15b] = 0;
    param_1[0x15a] = 0;
    param_1[0x159] = 0;
    param_1[0x158] = 0;
    param_1[0x157] = 0;
    param_1[0x156] = 0;
    param_1[0x155] = 0;
    param_1[0x154] = 0;
    param_1[0x153] = 0;
    param_1[0x152] = 0;
    param_1[0x151] = 0;
    param_1[0x150] = 0;
    param_1[0x14f] = 0;
    param_1[0x14e] = 0;
    param_1[0x14d] = 0;
    param_1[0x14c] = 0;
    param_1[0x14b] = 0;
    param_1[0x14a] = 0;
    param_1[0x149] = 0;
    param_1[0x148] = 0;
    param_1[0x147] = 0;
    param_1[0x146] = 0;
    param_1[0x145] = 0;
    param_1[0x144] = 0;
    param_1[0x143] = 0;
    param_1[0x142] = 0;
    param_1[0x141] = 0;
    param_1[0x140] = 0;
    param_1[0x13f] = 0;
    param_1[0x13e] = 0;
    param_1[0x13d] = 0;
    param_1[0x13c] = 0;
    param_1[0x13b] = 0;
    param_1[0x13a] = 0;
    param_1[0x139] = 0;
    param_1[0x138] = 0;
    param_1[0x137] = 0;
    param_1[0x136] = 0;
    param_1[0x135] = 0;
    param_1[0x134] = 0;
    param_1[0x133] = 0;
    param_1[0x132] = 0;
    param_1[0x131] = 0;
    param_1[0x130] = 0;
    param_1[0x12f] = 0;
    param_1[0x12e] = 0;
    param_1[0x12d] = 0;
    param_1[300] = 0;
    param_1[299] = 0;
    param_1[0x12a] = 0;
    param_1[0x129] = 0;
    param_1[0x128] = 0;
    param_1[0x127] = 0;
    param_1[0x126] = 0;
    param_1[0x125] = 0;
    param_1[0x124] = 0;
    param_1[0x123] = 0;
    param_1[0x122] = 0;
    param_1[0x121] = 0;
    param_1[0x120] = 0;
    param_1[0x11f] = 0;
    param_1[0x11e] = 0;
    param_1[0x11d] = 0;
    param_1[0x11c] = 0;
    param_1[0x11b] = 0;
    param_1[0x11a] = 0;
    param_1[0x119] = 0;
    param_1[0x118] = 0;
    param_1[0x117] = 0;
    param_1[0x116] = 0;
    param_1[0x115] = 0;
    param_1[0x114] = 0;
    param_1[0x113] = 0;
    param_1[0x112] = 0;
    param_1[0x111] = 0;
    param_1[0x110] = 0;
    param_1[0x10f] = 0;
    param_1[0x10e] = 0;
    param_1[0x10d] = 0;
    param_1[0x10c] = 0;
    param_1[0x10b] = 0;
    param_1[0x10a] = 0;
    param_1[0x109] = 0;
    param_1[0x108] = 0;
    param_1[0x107] = 0;
    param_1[0x106] = 0;
    param_1[0x105] = 0;
    param_1[0x104] = 0;
    param_1[0x103] = 0;
    param_1[0x102] = 0;
    param_1[0x101] = 0;
    param_1[0x100] = 0;
    param_1[0xff] = 0;
    param_1[0xfe] = 0;
    param_1[0xfd] = 0;
    param_1[0xfc] = 0;
    param_1[0xfb] = 0;
    param_1[0xfa] = 0;
    param_1[0xf9] = 0;
    param_1[0xf8] = 0;
    param_1[0xf7] = 0;
    param_1[0xf6] = 0;
    param_1[0xf5] = 0;
    param_1[0xf4] = 0;
    param_1[0xf3] = 0;
    param_1[0xf2] = 0;
    param_1[0xf1] = 0;
    param_1[0xf0] = 0;
    param_1[0xef] = 0;
    param_1[0xee] = 0;
    param_1[0xed] = 0;
    param_1[0xec] = 0;
    param_1[0xeb] = 0;
    param_1[0xea] = 0;
    param_1[0xe9] = 0;
    param_1[0xe8] = 0;
    param_1[0xe7] = 0;
    param_1[0xe6] = 0;
    param_1[0xe5] = 0;
    param_1[0xe4] = 0;
    param_1[0xe3] = 0;
    param_1[0xe2] = 0;
    param_1[0xe1] = 0;
    param_1[0xe0] = 0;
    param_1[0xdf] = 0;
    param_1[0xde] = 0;
    param_1[0xdd] = 0;
    param_1[0xdc] = 0;
    param_1[0xdb] = 0;
    param_1[0xda] = 0;
    param_1[0xd9] = 0;
    param_1[0xd8] = 0;
    param_1[0xd7] = 0;
    param_1[0xd6] = 0;
    param_1[0xd5] = 0;
    param_1[0xd4] = 0;
    param_1[0xd3] = 0;
    param_1[0xd2] = 0;
    param_1[0xd1] = 0;
    param_1[0xd0] = 0;
    param_1[0xcf] = 0;
    param_1[0xce] = 0;
    param_1[0xcd] = 0;
    param_1[0xcc] = 0;
    param_1[0xcb] = 0;
    param_1[0xca] = 0;
    param_1[0xc9] = 0;
    param_1[200] = 0;
    param_1[199] = 0;
    param_1[0xc6] = 0;
    param_1[0xc5] = 0;
    param_1[0xc4] = 0;
    param_1[0xc3] = 0;
    param_1[0xc2] = 0;
    param_1[0xc1] = 0;
    param_1[0xc0] = 0;
    param_1[0xbf] = 0;
    param_1[0xbe] = 0;
    param_1[0xbd] = 0;
    param_1[0xbc] = 0;
    param_1[0xbb] = 0;
    param_1[0xba] = 0;
    param_1[0xb9] = 0;
    param_1[0xb8] = 0;
    param_1[0xb7] = 0;
    param_1[0xb6] = 0;
    param_1[0xb5] = 0;
    param_1[0xb4] = 0;
    param_1[0xb3] = 0;
    param_1[0xb2] = 0;
    param_1[0xb1] = 0;
    param_1[0xb0] = 0;
    param_1[0xaf] = 0;
    param_1[0xae] = 0;
    param_1[0xad] = 0;
    param_1[0xac] = 0;
    param_1[0xab] = 0;
    param_1[0xaa] = 0;
    param_1[0xa9] = 0;
    param_1[0xa8] = 0;
    param_1[0xa7] = 0;
    param_1[0xa6] = 0;
    param_1[0xa5] = 0;
    param_1[0xa4] = 0;
    param_1[0xa3] = 0;
    param_1[0xa2] = 0;
    param_1[0xa1] = 0;
    param_1[0xa0] = 0;
    param_1[0x9f] = 0;
    param_1[0x9e] = 0;
    param_1[0x9d] = 0;
    param_1[0x9c] = 0;
    param_1[0x9b] = 0;
    param_1[0x9a] = 0;
    param_1[0x99] = 0;
    param_1[0x98] = 0;
    param_1[0x97] = 0;
    param_1[0x96] = 0;
    param_1[0x95] = 0;
    param_1[0x94] = 0;
    param_1[0x93] = 0;
    param_1[0x92] = 0;
    param_1[0x91] = 0;
    param_1[0x90] = 0;
    param_1[0x8f] = 0;
    param_1[0x8e] = 0;
    param_1[0x8d] = 0;
    param_1[0x8c] = 0;
    param_1[0x8b] = 0;
    param_1[0x8a] = 0;
    param_1[0x89] = 0;
    param_1[0x88] = 0;
    param_1[0x87] = 0;
    param_1[0x86] = 0;
    param_1[0x85] = 0;
    param_1[0x84] = 0;
    param_1[0x83] = 0;
    param_1[0x82] = 0;
    param_1[0x81] = 0;
    param_1[0x80] = 0;
    param_1[0x7f] = 0;
    param_1[0x7e] = 0;
    param_1[0x7d] = 0;
    param_1[0x7c] = 0;
    param_1[0x7b] = 0;
    param_1[0x7a] = 0;
    param_1[0x79] = 0;
    param_1[0x78] = 0;
    param_1[0x77] = 0;
    param_1[0x76] = 0;
    param_1[0x75] = 0;
    param_1[0x74] = 0;
    param_1[0x73] = 0;
    param_1[0x72] = 0;
    param_1[0x71] = 0;
    param_1[0x70] = 0;
    param_1[0x6f] = 0;
    param_1[0x6e] = 0;
    param_1[0x6d] = 0;
    param_1[0x6c] = 0;
    param_1[0x6b] = 0;
    param_1[0x6a] = 0;
    param_1[0x69] = 0;
    param_1[0x68] = 0;
    param_1[0x67] = 0;
    param_1[0x66] = 0;
    param_1[0x65] = 0;
    param_1[100] = 0;
    param_1[99] = 0;
    param_1[0x62] = 0;
    param_1[0x61] = 0;
    param_1[0x60] = 0;
    param_1[0x5f] = 0;
    param_1[0x5e] = 0;
    param_1[0x5d] = 0;
    param_1[0x5c] = 0;
    param_1[0x5b] = 0;
    param_1[0x5a] = 0;
    param_1[0x59] = 0;
    param_1[0x58] = 0;
    param_1[0x57] = 0;
    param_1[0x56] = 0;
    param_1[0x55] = 0;
    param_1[0x54] = 0;
    param_1[0x53] = 0;
    param_1[0x52] = 0;
    param_1[0x51] = 0;
    param_1[0x44] = 0;
    param_1[0x43] = 0;
    param_1[0x50] = 0;
    param_1[0x4f] = 0;
    param_1[0x4e] = 0;
    param_1[0x4d] = 0;
    param_1[0x4c] = 0;
    param_1[0x4b] = 0;
    param_1[0x4a] = 0;
    param_1[0x49] = 0;
    param_1[0x48] = 0;
    param_1[0x47] = 0;
    param_1[0x46] = 0;
    param_1[0x45] = 0;
    param_1[0x42] = 0;
    param_1[0x41] = 0;
    param_1[0x40] = 0;
    param_1[0x3f] = 0;
    param_1[0x3e] = 0;
    param_1[0x3d] = 0;
    param_1[0x3c] = 0;
    param_1[0x3b] = 0;
    param_1[0x3a] = 0;
    param_1[0x39] = 0;
    param_1[0x38] = 0;
    param_1[0x37] = 0;
    param_1[0x36] = 0;
    param_1[0x35] = 0;
    param_1[0x34] = 0;
    param_1[0x33] = 0;
    param_1[0x32] = 0;
    param_1[0x31] = 0;
    param_1[0x30] = 0;
    param_1[0x2f] = 0;
    param_1[0x2e] = 0;
    param_1[0x2d] = 0;
    param_1[0x2c] = 0;
    param_1[0x2b] = 0;
    param_1[0x2a] = 0;
    param_1[0x29] = 0;
    param_1[0x28] = 0;
    param_1[0x27] = 0;
    param_1[0x26] = 0;
    param_1[0x25] = 0;
    param_1[0x24] = 0;
    param_1[0x23] = 0;
    param_1[0x22] = 0;
    param_1[0x21] = 0;
    param_1[0x3fe] = 0;
    param_1[0x3fd] = 0;
    param_1[0x3fc] = 0;
    param_1[0x3fb] = 0;
    param_1[0x3fa] = 0;
    param_1[0x3f9] = 0;
    param_1[0x3f8] = 0;
    param_1[0x3f7] = 0;
    param_1[0x3f6] = 0;
    param_1[0x3f5] = 0;
    param_1[0x3f4] = 0;
    param_1[0x3f3] = 0;
    param_1[0x3f2] = 0;
    param_1[0x3f1] = 0;
    param_1[0x3f0] = 0;
    param_1[0x3ef] = 0;
    param_1[0x3ee] = 0;
    param_1[0x3ed] = 0;
    param_1[0x3ec] = 0;
    param_1[0x3eb] = 0;
    param_1[0x3ea] = 0;
    param_1[0x3e9] = 0;
    param_1[1000] = 0;
    param_1[999] = 0;
    param_1[0x3e6] = 0;
    param_1[0x3e5] = 0;
    param_1[0x3e4] = 0;
    param_1[0x3e3] = 0;
    param_1[0x3e2] = 0;
    param_1[0x3e1] = 0;
    param_1[0x3e0] = 0;
    param_1[0x3df] = 0;
    param_1[0x3de] = 0;
    param_1[0x3dd] = 0;
    param_1[0x3dc] = 0;
    param_1[0x3db] = 0;
    param_1[0x3da] = 0;
    param_1[0x3d9] = 0;
    param_1[0x3d8] = 0;
    param_1[0x3d7] = 0;
    param_1[0x3d6] = 0;
    param_1[0x3d5] = 0;
    param_1[0x3d4] = 0;
    param_1[0x3d3] = 0;
    param_1[0x3d2] = 0;
    param_1[0x3d1] = 0;
    param_1[0x3d0] = 0;
    param_1[0x3cf] = 0;
    param_1[0x3ce] = 0;
    param_1[0x3cd] = 0;
    param_1[0x3cc] = 0;
    param_1[0x3cb] = 0;
    param_1[0x3ca] = 0;
    param_1[0x3c9] = 0;
    param_1[0x3c8] = 0;
    param_1[0x3c7] = 0;
    param_1[0x3c6] = 0;
    param_1[0x3c5] = 0;
    param_1[0x3c4] = 0;
    param_1[0x3c3] = 0;
    param_1[0x3c2] = 0;
    param_1[0x3c1] = 0;
    param_1[0x3c0] = 0;
    param_1[0x3bf] = 0;
    param_1[0x3be] = 0;
    param_1[0x3bd] = 0;
    param_1[0x3bc] = 0;
    param_1[0x3bb] = 0;
    param_1[0x3ba] = 0;
    param_1[0x3b9] = 0;
    param_1[0x3b8] = 0;
    param_1[0x3b7] = 0;
    param_1[0x3b6] = 0;
    param_1[0x3b5] = 0;
    param_1[0x3b4] = 0;
    param_1[0x3b3] = 0;
    param_1[0x3b2] = 0;
    param_1[0x3b1] = 0;
    param_1[0x3b0] = 0;
    param_1[0x3af] = 0;
    param_1[0x3ae] = 0;
    param_1[0x3ad] = 0;
    param_1[0x3ac] = 0;
    param_1[0x3ab] = 0;
    param_1[0x3aa] = 0;
    param_1[0x3a9] = 0;
    param_1[0x3a8] = 0;
    param_1[0x3a7] = 0;
    param_1[0x3a6] = 0;
    param_1[0x3a5] = 0;
    param_1[0x3a4] = 0;
    param_1[0x3a3] = 0;
    param_1[0x3a2] = 0;
    param_1[0x3a1] = 0;
    param_1[0x3a0] = 0;
    param_1[0x39f] = 0;
    param_1[0x39e] = 0;
    param_1[0x39d] = 0;
    param_1[0x39c] = 0;
    param_1[0x39b] = 0;
    param_1[0x39a] = 0;
    param_1[0x399] = 0;
    param_1[0x398] = 0;
    param_1[0x397] = 0;
    param_1[0x396] = 0;
    param_1[0x395] = 0;
    param_1[0x394] = 0;
    param_1[0x393] = 0;
    param_1[0x392] = 0;
    param_1[0x391] = 0;
    param_1[0x390] = 0;
    param_1[0x38f] = 0;
    param_1[0x38e] = 0;
    param_1[0x38d] = 0;
    param_1[0x38c] = 0;
    param_1[0x38b] = 0;
    param_1[0x38a] = 0;
    param_1[0x389] = 0;
    param_1[0x388] = 0;
    param_1[0x387] = 0;
    param_1[0x386] = 0;
    param_1[0x385] = 0;
    param_1[900] = 0;
    param_1[899] = 0;
    param_1[0x382] = 0;
    param_1[0x381] = 0;
    param_1[0x380] = 0;
    param_1[0x37f] = 0;
    param_1[0x37e] = 0;
    param_1[0x37d] = 0;
    param_1[0x37c] = 0;
    param_1[0x37b] = 0;
    param_1[0x37a] = 0;
    param_1[0x379] = 0;
    param_1[0x378] = 0;
    param_1[0x377] = 0;
    param_1[0x376] = 0;
    param_1[0x375] = 0;
    param_1[0x374] = 0;
    param_1[0x373] = 0;
    param_1[0x372] = 0;
    param_1[0x371] = 0;
    param_1[0x370] = 0;
    param_1[0x36f] = 0;
    param_1[0x36e] = 0;
    param_1[0x36d] = 0;
    param_1[0x36c] = 0;
    param_1[0x36b] = 0;
    param_1[0x36a] = 0;
    param_1[0x369] = 0;
    param_1[0x368] = 0;
    param_1[0x367] = 0;
    param_1[0x366] = 0;
    param_1[0x365] = 0;
    param_1[0x364] = 0;
    param_1[0x363] = 0;
    param_1[0x362] = 0;
    param_1[0x361] = 0;
    param_1[0x360] = 0;
    param_1[0x35f] = 0;
    param_1[0x35e] = 0;
    param_1[0x35d] = 0;
    param_1[0x35c] = 0;
    param_1[0x35b] = 0;
    param_1[0x35a] = 0;
    param_1[0x359] = 0;
    param_1[0x358] = 0;
    param_1[0x357] = 0;
    param_1[0x356] = 0;
    param_1[0x355] = 0;
    param_1[0x354] = 0;
    param_1[0x353] = 0;
    param_1[0x352] = 0;
    param_1[0x351] = 0;
    param_1[0x350] = 0;
    param_1[0x34f] = 0;
    param_1[0x34e] = 0;
    param_1[0x34d] = 0;
    param_1[0x34c] = 0;
    param_1[0x34b] = 0;
    param_1[0x34a] = 0;
    param_1[0x349] = 0;
    param_1[0x348] = 0;
    param_1[0x347] = 0;
    param_1[0x346] = 0;
    param_1[0x345] = 0;
    param_1[0x344] = 0;
    param_1[0x343] = 0;
    param_1[0x342] = 0;
    param_1[0x341] = 0;
    param_1[0x340] = 0;
    param_1[0x33f] = 0;
    param_1[0x33e] = 0;
    param_1[0x33d] = 0;
    param_1[0x33c] = 0;
    param_1[0x33b] = 0;
    param_1[0x33a] = 0;
    param_1[0x339] = 0;
    param_1[0x338] = 0;
    param_1[0x337] = 0;
    param_1[0x336] = 0;
    param_1[0x335] = 0;
    param_1[0x334] = 0;
    param_1[0x333] = 0;
    param_1[0x332] = 0;
    param_1[0x331] = 0;
    param_1[0x330] = 0;
    param_1[0x32f] = 0;
    param_1[0x32e] = 0;
    param_1[0x32d] = 0;
    param_1[0x32c] = 0;
    param_1[0x32b] = 0;
    param_1[0x32a] = 0;
    param_1[0x329] = 0;
    param_1[0x328] = 0;
    param_1[0x327] = 0;
    param_1[0x326] = 0;
    param_1[0x325] = 0;
    param_1[0x324] = 0;
    param_1[0x323] = 0;
    param_1[0x322] = 0;
    param_1[0x321] = 0;
    param_1[800] = 0;
    param_1[799] = 0;
    param_1[0x31e] = 0;
    param_1[0x31d] = 0;
    param_1[0x31c] = 0;
    param_1[0x31b] = 0;
    param_1[0x31a] = 0;
    param_1[0x319] = 0;
    param_1[0x318] = 0;
    param_1[0x317] = 0;
    param_1[0x316] = 0;
    param_1[0x315] = 0;
    param_1[0x314] = 0;
    param_1[0x313] = 0;
    param_1[0x312] = 0;
    param_1[0x311] = 0;
    param_1[0x310] = 0;
    param_1[0x30f] = 0;
    param_1[0x30e] = 0;
    param_1[0x30d] = 0;
    param_1[0x30c] = 0;
    param_1[0x30b] = 0;
    param_1[0x30a] = 0;
    param_1[0x309] = 0;
    param_1[0x308] = 0;
    param_1[0x307] = 0;
    param_1[0x306] = 0;
    param_1[0x305] = 0;
    param_1[0x304] = 0;
    param_1[0x303] = 0;
    param_1[0x302] = 0;
    param_1[0x301] = 0;
    param_1[0x300] = 0;
    param_1[0x2ff] = 0;
    param_1[0x2fe] = 0;
    param_1[0x2fd] = 0;
    param_1[0x2fc] = 0;
    param_1[0x2fb] = 0;
    param_1[0x2fa] = 0;
    param_1[0x2f9] = 0;
    param_1[0x2f8] = 0;
    param_1[0x2f7] = 0;
    param_1[0x2f6] = 0;
    param_1[0x2f5] = 0;
    param_1[0x2f4] = 0;
    param_1[0x2f3] = 0;
    param_1[0x2f2] = 0;
    param_1[0x2f1] = 0;
    param_1[0x2f0] = 0;
    param_1[0x2ef] = 0;
    param_1[0x2ee] = 0;
    param_1[0x2ed] = 0;
    param_1[0x2ec] = 0;
    param_1[0x2eb] = 0;
    param_1[0x2ea] = 0;
    param_1[0x2e9] = 0;
    param_1[0x2e8] = 0;
    param_1[0x2e7] = 0;
    param_1[0x2e6] = 0;
    param_1[0x2e5] = 0;
    param_1[0x2e4] = 0;
    param_1[0x2e3] = 0;
    param_1[0x2e2] = 0;
    param_1[0x2e1] = 0;
    param_1[0x2e0] = 0;
    param_1[0x2df] = 0;
    param_1[0x2de] = 0;
    param_1[0x2dd] = 0;
    param_1[0x2dc] = 0;
    param_1[0x2db] = 0;
    param_1[0x2da] = 0;
    param_1[0x2d9] = 0;
    param_1[0x2d8] = 0;
    param_1[0x2d7] = 0;
    param_1[0x2d6] = 0;
    param_1[0x2d5] = 0;
    param_1[0x2d4] = 0;
    param_1[0x2d3] = 0;
    param_1[0x2d2] = 0;
    param_1[0x2d1] = 0;
    param_1[0x2d0] = 0;
    param_1[0x2cf] = 0;
    param_1[0x2ce] = 0;
    param_1[0x2cd] = 0;
    param_1[0x2cc] = 0;
    param_1[0x2cb] = 0;
    param_1[0x2ca] = 0;
    param_1[0x2c9] = 0;
    param_1[0x2c8] = 0;
    param_1[0x2c7] = 0;
    param_1[0x2c6] = 0;
    param_1[0x2c5] = 0;
    param_1[0x2c4] = 0;
    param_1[0x2c3] = 0;
    param_1[0x2c2] = 0;
    param_1[0x2c1] = 0;
    param_1[0x2c0] = 0;
    param_1[0x2bf] = 0;
    param_1[0x2be] = 0;
    param_1[0x2bd] = 0;
    param_1[700] = 0;
    param_1[699] = 0;
    param_1[0x2ba] = 0;
    param_1[0x2b9] = 0;
    param_1[0x2b8] = 0;
    param_1[0x2b7] = 0;
    param_1[0x2b6] = 0;
    param_1[0x2b5] = 0;
    param_1[0x2b4] = 0;
    param_1[0x2b3] = 0;
    param_1[0x2b2] = 0;
    param_1[0x2b1] = 0;
    param_1[0x2b0] = 0;
    param_1[0x2af] = 0;
    param_1[0x2ae] = 0;
    param_1[0x2ad] = 0;
    param_1[0x2ac] = 0;
    param_1[0x2ab] = 0;
    param_1[0x2aa] = 0;
    param_1[0x2a9] = 0;
    param_1[0x2a8] = 0;
    param_1[0x2a7] = 0;
    param_1[0x2a6] = 0;
    param_1[0x2a5] = 0;
    param_1[0x2a4] = 0;
    param_1[0x2a3] = 0;
    param_1[0x2a2] = 0;
    param_1[0x2a1] = 0;
    param_1[0x2a0] = 0;
    param_1[0x29f] = 0;
    param_1[0x29e] = 0;
    param_1[0x29d] = 0;
    param_1[0x29c] = 0;
    param_1[0x29b] = 0;
    param_1[0x29a] = 0;
    param_1[0x299] = 0;
    param_1[0x298] = 0;
    param_1[0x297] = 0;
    param_1[0x296] = 0;
    param_1[0x295] = 0;
    param_1[0x294] = 0;
    param_1[0x293] = 0;
    param_1[0x292] = 0;
    param_1[0x291] = 0;
    param_1[0x290] = 0;
    param_1[0x28f] = 0;
    param_1[0x28e] = 0;
    param_1[0x28d] = 0;
    param_1[0x28c] = 0;
    param_1[0x28b] = 0;
    param_1[0x28a] = 0;
    param_1[0x289] = 0;
    param_1[0x288] = 0;
    param_1[0x287] = 0;
    param_1[0x286] = 0;
    param_1[0x285] = 0;
    param_1[0x284] = 0;
    param_1[0x283] = 0;
    param_1[0x282] = 0;
    param_1[0x281] = 0;
    param_1[0x280] = 0;
    param_1[0x27f] = 0;
    param_1[0x27e] = 0;
    param_1[0x27d] = 0;
    param_1[0x27c] = 0;
    param_1[0x27b] = 0;
    param_1[0x27a] = 0;
    param_1[0x279] = 0;
    param_1[0x278] = 0;
    param_1[0x277] = 0;
    param_1[0x276] = 0;
    param_1[0x275] = 0;
    param_1[0x274] = 0;
    param_1[0x273] = 0;
    param_1[0x272] = 0;
    param_1[0x271] = 0;
    param_1[0x270] = 0;
    param_1[0x26f] = 0;
    param_1[0x26e] = 0;
    param_1[0x26d] = 0;
    param_1[0x26c] = 0;
    param_1[0x26b] = 0;
    param_1[0x26a] = 0;
    param_1[0x269] = 0;
    param_1[0x268] = 0;
    param_1[0x267] = 0;
    param_1[0x266] = 0;
    param_1[0x265] = 0;
    param_1[0x264] = 0;
    param_1[0x263] = 0;
    param_1[0x262] = 0;
    param_1[0x261] = 0;
    param_1[0x260] = 0;
    param_1[0x25f] = 0;
    param_1[0x25e] = 0;
    param_1[0x25d] = 0;
    param_1[0x25c] = 0;
    param_1[0x25b] = 0;
    param_1[0x25a] = 0;
    param_1[0x259] = 0;
    param_1[600] = 0;
    param_1[599] = 0;
    param_1[0x256] = 0;
    param_1[0x255] = 0;
    param_1[0x254] = 0;
    param_1[0x253] = 0;
    param_1[0x252] = 0;
    param_1[0x251] = 0;
    param_1[0x250] = 0;
    param_1[0x24f] = 0;
    param_1[0x24e] = 0;
    param_1[0x24d] = 0;
    param_1[0x24c] = 0;
    param_1[0x24b] = 0;
    param_1[0x24a] = 0;
    param_1[0x249] = 0;
    param_1[0x248] = 0;
    param_1[0x247] = 0;
    param_1[0x246] = 0;
    param_1[0x245] = 0;
    param_1[0x244] = 0;
    param_1[0x243] = 0;
    param_1[0x242] = 0;
    param_1[0x241] = 0;
    param_1[0x240] = 0;
    param_1[0x23f] = 0;
    param_1[0x23e] = 0;
    param_1[0x23d] = 0;
    param_1[0x23c] = 0;
    param_1[0x23b] = 0;
    param_1[0x23a] = 0;
    param_1[0x239] = 0;
    param_1[0x238] = 0;
    param_1[0x237] = 0;
    param_1[0x236] = 0;
    param_1[0x235] = 0;
    param_1[0x234] = 0;
    param_1[0x233] = 0;
    param_1[0x232] = 0;
    param_1[0x231] = 0;
    param_1[0x230] = 0;
    param_1[0x22f] = 0;
    param_1[0x22e] = 0;
    param_1[0x22d] = 0;
    param_1[0x22c] = 0;
    param_1[0x22b] = 0;
    param_1[0x22a] = 0;
    param_1[0x229] = 0;
    param_1[0x228] = 0;
    param_1[0x227] = 0;
    param_1[0x226] = 0;
    param_1[0x225] = 0;
    param_1[0x224] = 0;
    param_1[0x223] = 0;
    param_1[0x222] = 0;
    param_1[0x221] = 0;
    *param_1 = (ulong)(param_2 - 1);
    if (param_3 == 0) {
      return;
    }
    uVar1 = 1;
  }
  *(undefined1 *)(param_1 + 0x400) = uVar1;
  return;
}



/* Address: 0x1008c22c0 | FUN_1008c22c0 */

void FUN_1008c22c0(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100feb230,&DAT_100f0d170);
  return;
}



/* Address: 0x1008c22d4 | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  FUN_10061fa64();
  return;
}



/* Address: 0x1008c22d8 | FUN_1008c22d8 */

void FUN_1008c22d8(void)

{
  long unaff_x20;
  
  FUN_1008d0524(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1008c22e0 | FUN_1008c22e0 */

void FUN_1008c22e0(void)

{
  long unaff_x20;
  
  thunk_FUN_1005de99c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1008c22e8 | FUN_1008c22e8 */

void FUN_1008c22e8(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1008becf8(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1008c22f4 | FUN_1008c22f4 */

void FUN_1008c22f4(void)

{
  FUN_1008c2658(&DAT_100feb248,&DAT_100c828b8);
  return;
}



/* Address: 0x1008c2308 | FUN_1008c2308 */

void FUN_1008c2308(void)

{
  FUN_1008c26e0(&DAT_100feb248,&DAT_100c828b8,FUN_1008bf074);
  return;
}



/* Address: 0x1008c2324 | FUN_1008c2324 */

void FUN_1008c2324(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  _swift_retain(uVar1);
  return;
}


