/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10033094c | FUN_10033094c */

void FUN_10033094c(void)

{
  code *pcVar1;
  long *plVar2;
  long unaff_x22;
  double dVar3;
  
  dVar3 = *(double *)(unaff_x22 + 0x10) * 1000000000.0;
  if (0x7fefffffffffffff < (ulong)ABS(dVar3)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1003309e4);
    (*pcVar1)();
  }
  if (-1.0 < dVar3) {
    if (dVar3 < 1.8446744073709552e+19) {
      plVar2 = (long *)(ulong)*(uint *)(PTR__sleep_100eaed60 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x18) = plVar2;
      *plVar2 = unaff_x22;
      plVar2[1] = (long)FUN_1003309ec;
      (extension_Swift)::Swift::Task::_sleep((long)dVar3);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1003309ec);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003309e8);
  (*pcVar1)();
}



/* Address: 0x1003309ec | FUN_1003309ec */

void FUN_1003309ec(void)

{
  long unaff_x20;
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x18));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000100330a28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
  _swift_task_switch(FUN_100330a4c,0,0);
  return;
}



/* Address: 0x100330a4c | FUN_100330a4c */

void FUN_100330a4c(void)

{
  CancellationError CVar1;
  undefined *puVar2;
  long unaff_x22;
  
  CVar1 = Swift::CancellationError::typeMetadataAccessor();
  puVar2 = &DAT_100fc01e0;
  FUN_100003a00(&DAT_100fc01e0,PTR_typeMetadataAccessor_100eaeb38,
                PTR_Swift__Swift__CancellationError_>Swift__Error_100eaeb40);
  _swift_allocError(CVar1.unknown,puVar2,0,0);
  Swift::CancellationError::init();
  _swift_willThrow();
                    /* WARNING: Could not recover jumptable at 0x000100330ac8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100330acc | FUN_100330acc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100330acc(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x100330af8 | FUN_100330af8 */

void FUN_100330af8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0xc0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_100008284;
  FUN_10032e76c(plVar3,param_1,param_2,param_3,uVar1,uVar2);
  return;
}



/* Address: 0x100330b74 | FUN_100330b74 */

void FUN_100330b74(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_100008284;
  FUN_10032f928(plVar3,uVar4,param_1,param_2,uVar1,uVar2);
  return;
}



/* Address: 0x100330bfc | thunk_FUN_100330fd4 */

void thunk_FUN_100330fd4(void)

{
  FUN_100330fd4();
  return;
}



/* Address: 0x100330c00 | FUN_100330c00 */

void FUN_100330c00(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x40;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)thunk_FUN_100008284;
  FUN_10032f998(plVar5,param_1,uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Address: 0x100330c84 | FUN_100330c84 */

undefined8 FUN_100330c84(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fbe478;
  FUN_1000037f0(&DAT_100fbe478,&DAT_100c40940);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x100330ccc | FUN_100330ccc */

void FUN_100330ccc(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x100330cf0 | FUN_100330cf0 */

void FUN_100330cf0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_100008284;
  FUN_10032fa1c(plVar3,uVar4,param_1,uVar1,uVar2);
  return;
}



/* Address: 0x100330d70 | FUN_100330d70 */

undefined8 FUN_100330d70(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fbe478;
  FUN_1000037f0(&DAT_100fbe478,&DAT_100c40940);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x100330dc0 | FUN_100330dc0 */

void FUN_100330dc0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100008284;
  FUN_10032fb2c(plVar3,uVar4,param_1,param_2,uVar1,uVar2);
  return;
}



/* Address: 0x100330e48 | FUN_100330e48 */

void FUN_100330e48(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x40;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)thunk_FUN_100008284;
  FUN_10032fb9c(plVar5,param_1,uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Address: 0x100330ecc | FUN_100330ecc */

void FUN_100330ecc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_100008284;
  FUN_10032fc68(plVar3,uVar4,param_1,uVar1,uVar2);
  return;
}



/* Address: 0x100330f4c | FUN_100330f4c */

void FUN_100330f4c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_100008284;
  FUN_10032fa6c(plVar3,uVar4,param_1,param_2,uVar1,uVar2);
  return;
}



/* Address: 0x100330fd4 | FUN_100330fd4 */

void FUN_100330fd4(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x100331000 | FUN_100331000 */

void FUN_100331000(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x40;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)thunk_FUN_100008284;
  FUN_10032f998(plVar5,param_1,uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Address: 0x100331084 | FUN_100331084 */

void FUN_100331084(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_100008284;
  FUN_10032fadc(plVar3,uVar4,param_1,uVar1,uVar2);
  return;
}



/* Address: 0x100331104 | thunk_FUN_100330ccc */

void thunk_FUN_100330ccc(void)

{
  FUN_100330ccc();
  return;
}



/* Address: 0x100331108 | thunk_FUN_100330ccc */

void thunk_FUN_100330ccc(void)

{
  FUN_100330ccc();
  return;
}



/* Address: 0x10033110c | thunk_FUN_100330060 */

void thunk_FUN_100330060(void)

{
  FUN_100330060();
  return;
}



/* Address: 0x100331110 | thunk_FUN_10032e754 */

void thunk_FUN_10032e754(void)

{
  FUN_10032e754();
  return;
}



/* Address: 0x100331114 | thunk_FUN_10032e754 */

void thunk_FUN_10032e754(void)

{
  FUN_10032e754();
  return;
}



/* Address: 0x100331118 | thunk_FUN_100330a4c */

void thunk_FUN_100330a4c(void)

{
  FUN_100330a4c();
  return;
}



/* Address: 0x10033111c | thunk_FUN_1000cee0c */

void thunk_FUN_1000cee0c(void)

{
  FUN_1000cee0c();
  return;
}



/* Address: 0x100331120 | thunk_FUN_10032ff4c */

void thunk_FUN_10032ff4c(void)

{
  FUN_10032ff4c();
  return;
}



/* Address: 0x100331124 | thunk_FUN_10032fc20 */

void thunk_FUN_10032fc20(void)

{
  FUN_10032fc20();
  return;
}



/* Address: 0x100331128 | thunk_FUN_10032e744 */

void thunk_FUN_10032e744(void)

{
  FUN_10032e744();
  return;
}



/* Address: 0x10033112c | thunk_FUN_10032e744 */

void thunk_FUN_10032e744(void)

{
  FUN_10032e744();
  return;
}



/* Address: 0x100331130 | thunk_FUN_100330fd4 */

void thunk_FUN_100330fd4(void)

{
  thunk_FUN_100330fd4();
  return;
}



/* Address: 0x100331134 | thunk_FUN_100330fd4 */

void thunk_FUN_100330fd4(void)

{
  thunk_FUN_100330fd4();
  return;
}



/* Address: 0x100331138 | thunk_FUN_10033050c */

void thunk_FUN_10033050c(void)

{
  FUN_10033050c();
  return;
}



/* Address: 0x10033113c | FUN_10033113c */

void FUN_10033113c(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_100004594(param_1);
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x28));
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_100004594(param_1 + 0x30);
    return;
  }
  return;
}



/* Address: 0x100331188 | FUN_100331188 */

undefined8 * FUN_100331188(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_2[3];
  if (lVar1 == 0) {
    uVar2 = *param_2;
    uVar4 = param_2[3];
    uVar3 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar2;
    param_1[3] = uVar4;
    param_1[2] = uVar3;
  }
  else {
    param_1[3] = lVar1;
    (*(code *)**(undefined8 **)(lVar1 + -8))(param_1,param_2);
  }
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  lVar1 = param_2[9];
  _swift_bridgeObjectRetain();
  if (lVar1 == 0) {
    uVar2 = param_2[6];
    uVar4 = param_2[9];
    uVar3 = param_2[8];
    param_1[7] = param_2[7];
    param_1[6] = uVar2;
    param_1[9] = uVar4;
    param_1[8] = uVar3;
  }
  else {
    param_1[9] = lVar1;
    (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 6,param_2 + 6,lVar1);
  }
  return param_1;
}



/* Address: 0x10033121c | FUN_10033121c */

undefined8 * FUN_10033121c(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_2[3];
  if (param_1[3] == 0) {
    if (lVar1 != 0) {
      param_1[3] = lVar1;
      (*(code *)**(undefined8 **)(lVar1 + -8))(param_1,param_2);
      goto LAB_100331280;
    }
  }
  else {
    if (lVar1 != 0) {
      FUN_10003083c(param_1,param_2);
      goto LAB_100331280;
    }
    FUN_100004594(param_1);
  }
  uVar2 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
LAB_100331280:
  param_1[4] = param_2[4];
  uVar2 = param_1[5];
  param_1[5] = param_2[5];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  lVar1 = param_2[9];
  if (param_1[9] == 0) {
    if (lVar1 != 0) {
      param_1[9] = lVar1;
      (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 6,param_2 + 6);
      return param_1;
    }
  }
  else {
    if (lVar1 != 0) {
      FUN_10003083c(param_1 + 6,param_2 + 6);
      return param_1;
    }
    FUN_100004594(param_1 + 6);
  }
  uVar2 = param_2[6];
  uVar4 = param_2[9];
  uVar3 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = uVar2;
  param_1[9] = uVar4;
  param_1[8] = uVar3;
  return param_1;
}



/* Address: 0x100331300 | FUN_100331300 */

void FUN_100331300(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  uVar4 = param_2[5];
  uVar3 = param_2[4];
  uVar5 = param_2[6];
  uVar7 = param_2[9];
  uVar6 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = uVar5;
  param_1[9] = uVar7;
  param_1[8] = uVar6;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  param_1[5] = uVar4;
  param_1[4] = uVar3;
  return;
}



/* Address: 0x10033131c | FUN_10033131c */

undefined8 * FUN_10033131c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_1[3] != 0) {
    FUN_100004594(param_1);
  }
  uVar2 = *param_2;
  uVar3 = param_2[3];
  uVar1 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_1[3] = uVar3;
  param_1[2] = uVar1;
  uVar2 = param_2[5];
  uVar1 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  if (param_1[9] != 0) {
    FUN_100004594(param_1 + 6);
  }
  uVar2 = param_2[6];
  uVar3 = param_2[9];
  uVar1 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = uVar2;
  param_1[9] = uVar3;
  param_1[8] = uVar1;
  return param_1;
}



/* Address: 0x100331380 | FUN_100331380 */

int FUN_100331380(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x14] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 10);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x1003313c8 | FUN_1003313c8 */

void FUN_1003313c8(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 10) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 10) = 0;
    }
    if (param_2 != 0) {
      param_1[5] = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x10033141c | FUN_10033141c */

undefined1  [16] FUN_10033141c(void)

{
  return ZEXT816(0x100ecb9c0);
}



/* Address: 0x10033142c | FUN_10033142c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_10033142c(long *param_1)

{
  _CocoaArrayWrapper _Var1;
  code *pcVar2;
  undefined *puVar3;
  NSString *pNVar4;
  _ArrayBuffer _Var5;
  ulong uVar6;
  long unaff_x21;
  ulong uVar7;
  ulong uVar8;
  ulong local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar3 = &_OBJC_CLASS___NSFetchRequest;
  _objc_allocWithZone();
  pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _Var5.unknown = (undefined *)objc_stub::initWithEntityName_(puVar3,pNVar4);
  FUN_100308464(0);
  (extension_CoreData)::__C::NSManagedObjectContext::_fetch();
  if (unaff_x21 != 0) {
    return 0;
  }
  if ((ulong)_Var5.unknown >> 0x3e == 0) {
    uVar7 = *(ulong *)(((ulong)_Var5.unknown & 0xffffffffffffff8) + 0x10);
    puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    _Var1.unknown = _Var5.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < _Var5.unknown) {
      _Var1.unknown = _Var5.unknown;
    }
    uVar7 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
    puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  PTR___swiftEmptyArrayStorage_100eae0d8 = puVar3;
  if (uVar7 == 0) {
    _swift_bridgeObjectRelease(_Var5.unknown);
    puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    FUN_100307754(0,uVar7 & ((long)uVar7 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar7 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10033164c);
      (*pcVar2)();
    }
    uVar8 = 0;
    do {
      if (((ulong)_Var5.unknown & 0xc000000000000001) == 0) {
        if (*(long *)(((ulong)_Var5.unknown & 0xffffffffffffff8) + 0x10) <= (long)uVar8) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1003315f0);
          (*pcVar2)();
        }
        uVar6 = *(ulong *)(_Var5.unknown + uVar8 * 8 + 0x20);
      }
      else {
        uVar6 = uVar8;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar8,_Var5);
      }
      local_b8 = uVar6;
      FUN_10033164c(&local_b0,&local_b8);
      uVar6 = *(ulong *)(puVar3 + 0x10);
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar6) {
        FUN_100307754(1 < *(ulong *)(puVar3 + 0x18),uVar6 + 1,1);
      }
      uVar8 = uVar8 + 1;
      *(ulong *)(puVar3 + 0x10) = uVar6 + 1;
      *(undefined8 *)(puVar3 + uVar6 * 0x50 + 0x28) = uStack_a8;
      *(undefined8 *)(puVar3 + uVar6 * 0x50 + 0x20) = local_b0;
      *(undefined8 *)(puVar3 + uVar6 * 0x50 + 0x58) = uStack_78;
      *(undefined8 *)(puVar3 + uVar6 * 0x50 + 0x50) = local_80;
      *(undefined8 *)(puVar3 + uVar6 * 0x50 + 0x68) = uStack_68;
      *(undefined8 *)(puVar3 + uVar6 * 0x50 + 0x60) = uStack_70;
      *(undefined8 *)(puVar3 + uVar6 * 0x50 + 0x38) = uStack_98;
      *(undefined8 *)(puVar3 + uVar6 * 0x50 + 0x30) = local_a0;
      *(undefined8 *)(puVar3 + uVar6 * 0x50 + 0x48) = uStack_88;
      *(undefined8 *)(puVar3 + uVar6 * 0x50 + 0x40) = uStack_90;
    } while (uVar7 != uVar8);
    _swift_bridgeObjectRelease(_Var5.unknown);
  }
  *param_1 = (long)puVar3;
  return 0;
}



/* Address: 0x10033164c | FUN_10033164c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10033164c(undefined8 *param_1,ID *param_2)

{
  NSString *pNVar1;
  ID IVar2;
  ulong uVar3;
  ID self;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long local_48;
  
  uVar3 = 0;
  self = *param_2;
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar2 = objc_stub::FUN_100c112a0(self,pNVar1);
  if (IVar2 == 0) {
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  else {
    Swift::__bridgeAnyObjectToAny();
    _swift_unknownObjectRelease(IVar2);
  }
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar2 = objc_stub::FUN_100c112a0(self,pNVar1);
  if (IVar2 == 0) {
    uStack_78 = 0;
    local_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    Swift::__bridgeAnyObjectToAny();
    _swift_unknownObjectRelease(IVar2);
  }
  uStack_58 = uStack_78;
  local_60 = local_80;
  local_48 = lStack_68;
  uStack_50 = uStack_70;
  if (lStack_68 == 0) {
    FUN_100005808(&local_60,&DAT_100fbe6f0,&DAT_100c42750);
  }
  else {
    _swift_dynamicCast(&local_90,&local_60,PTR___type_metadata_for_Any_100eae0c0 + 8,
                       PTR___type_metadata_for_Swift_String_100eac208,6);
    uVar4 = local_90;
    uVar5 = uStack_88;
    if ((uVar3 & 1) != 0) goto LAB_10033178c;
  }
  uVar4 = 0;
  uVar5 = 0xe000000000000000;
LAB_10033178c:
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar2 = objc_stub::FUN_100c112a0(self,pNVar1);
  if (IVar2 == 0) {
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[9] = 0;
    param_1[8] = 0;
  }
  else {
    Swift::__bridgeAnyObjectToAny();
    _swift_unknownObjectRelease(IVar2);
  }
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  return;
}



/* Address: 0x100331804 | FUN_100331804 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100331804(long param_1,ID param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  code *pcVar3;
  _DictionaryStorage *this;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong *puVar7;
  NSString *pNVar8;
  ID self;
  NSString *pNVar9;
  ID IVar10;
  ulong uVar11;
  char *pcVar12;
  ulong uVar13;
  _StringGuts _Var14;
  char *pcVar15;
  long extraout_x8;
  long extraout_x8_00;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String separator;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  char *local_1e0;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined1 auStack_1a8 [8];
  ulong local_1a0;
  ulong uStack_198;
  undefined8 local_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_150;
  undefined8 local_148;
  undefined1 auStack_140 [32];
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
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  long local_78;
  
  local_78 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar19 = *(long *)(param_1 + 0x10);
  if (lVar19 != 0) {
    param_1 = param_1 + 0x20;
    this = (_DictionaryStorage *)&DAT_100fc01b0;
    FUN_1000037f0(&DAT_100fc01b0,&DAT_100c41f28);
    local_1e0 = "it zone deletion";
    uStack_1e8 = 2;
    local_1f0 = 1;
    do {
      FUN_100331dd8(param_1,&local_c8);
      uStack_f8 = uStack_a0;
      local_100 = local_a8;
      uStack_e8 = uStack_90;
      uStack_f0 = uStack_98;
      uStack_d8 = uStack_80;
      local_e0 = local_88;
      uStack_118 = uStack_c0;
      local_120 = local_c8;
      uStack_108 = uStack_b0;
      uStack_110 = uStack_b8;
      local_150 = 0x696669746e656469;
      local_148 = 0xea00000000007265;
      FUN_100011090(&local_120,auStack_140,&DAT_100fbe6f0,&DAT_100c42750);
      uVar4 = 1;
      Swift::_DictionaryStorage::_allocate(this,1);
      _swift_retain();
      FUN_100011090(&local_150,&local_1a0,&DAT_100fc01b8,&DAT_100c41f30);
      uVar2 = uStack_198;
      uVar11 = local_1a0;
      uVar5 = local_1a0;
      uVar13 = uStack_198;
      FUN_100071370();
      if ((uVar13 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100331dd0);
        (*pcVar3)();
      }
      lVar18 = uVar4 + (uVar5 >> 6) * 8;
      *(ulong *)(lVar18 + 0x40) = *(ulong *)(lVar18 + 0x40) | 1L << (uVar5 & 0x3f);
      puVar7 = (ulong *)(*(long *)(uVar4 + 0x30) + uVar5 * 0x10);
      *puVar7 = uVar11;
      puVar7[1] = uVar2;
      puVar1 = (undefined8 *)(*(long *)(uVar4 + 0x38) + uVar5 * 0x20);
      puVar1[1] = puStack_188;
      *puVar1 = local_190;
      puVar1[3] = uStack_178;
      puVar1[2] = uStack_180;
      if (SCARRY8(*(long *)(uVar4 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100331dd4);
        (*pcVar3)();
      }
      *(long *)(uVar4 + 0x10) = *(long *)(uVar4 + 0x10) + 1;
      _swift_release(uVar4);
      FUN_100005808(&local_150,&DAT_100fc01b8,&DAT_100c41f30);
      puVar6 = &DAT_100fc01c0;
      FUN_1000037f0(&DAT_100fc01c0,&DAT_100c41f38);
      puVar7 = &local_1a0;
      local_1a0 = uVar4;
      puStack_188 = puVar6;
      FUN_100328e30(puVar7,0,param_2);
      FUN_100004594(&local_1a0);
      if (puVar7 == (ulong *)0x0) {
        pNVar8 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        self = objc_stub::FUN_100c052e0((ID)&_OBJC_CLASS___NSEntityDescription,pNVar8,param_2);
        FUN_100011090(&local_120,&local_1a0,&DAT_100fbe6f0,&DAT_100c42750);
        puVar6 = puStack_188;
        if (puStack_188 == (undefined *)0x0) {
          lVar18 = 0;
        }
        else {
          FUN_100004640(&local_1a0,puStack_188);
          lVar16 = *(long *)(puVar6 + -8);
          (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar16 + 0x40));
          lVar17 = (long)&local_1f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
          (**(code **)(lVar16 + 0x10))(lVar17);
          lVar18 = lVar17;
          Swift::__bridgeAnythingToObjectiveC(lVar17,puVar6);
          (**(code **)(lVar16 + 8))(lVar17,puVar6);
          FUN_100004594(&local_1a0);
        }
        pNVar8 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        objc_stub::setValue_forKey_(self,lVar18,pNVar8);
        _swift_unknownObjectRelease(lVar18);
        pNVar8 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        pNVar9 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        objc_stub::setValue_forKey_(self,pNVar8,pNVar9);
        FUN_100011090(&uStack_f0,&local_1a0,&DAT_100fbe6f0,&DAT_100c42750);
        puVar6 = puStack_188;
        if (puStack_188 == (undefined *)0x0) {
          lVar18 = 0;
        }
        else {
          FUN_100004640(&local_1a0,puStack_188);
          lVar16 = *(long *)(puVar6 + -8);
          (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar16 + 0x40));
          lVar17 = (long)&local_1f0 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
          (**(code **)(lVar16 + 0x10))(lVar17);
          lVar18 = lVar17;
          Swift::__bridgeAnythingToObjectiveC(lVar17,puVar6);
          (**(code **)(lVar16 + 8))(lVar17,puVar6);
          FUN_100004594(&local_1a0);
        }
        pNVar8 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        objc_stub::setValue_forKey_(self,lVar18);
        _swift_unknownObjectRelease(lVar18);
        local_1a0 = 0;
        IVar10 = objc_stub::validateForInsert_(self,&local_1a0);
        if ((int)IVar10 == 0) {
          uVar11 = local_1a0;
          Foundation::__convertNSErrorToError();
          _swift_willThrow(0);
          pcVar12 = &DAT_100fbec98;
          FUN_1000037f0(&DAT_100fbec98,&DAT_100c40a70);
          _Var14.unknown = (undefined *)0x40;
          pcVar15 = (char *)0x7;
          _swift_allocObject();
          *(undefined8 *)(pcVar12 + 0x18) = uStack_1e8;
          *(undefined8 *)(pcVar12 + 0x10) = local_1f0;
          local_1a0 = 0;
          uStack_198 = 0xe000000000000000;
          Swift::_StringGuts::grow(0x27,_Var14);
          SVar20.bridgeObject = (void *)((ulong)local_1e0 | 0x8000000000000000);
          SVar20.str = (char *)0xd000000000000025;
          SVar22.bridgeObject = pNVar8;
          SVar22.str = pcVar15;
          Swift::String::append(SVar20,SVar22);
          _swift_getErrorValue(uVar11,auStack_1a8,&local_1c0);
          Swift::DefaultStringInterpolation::_appendInterpolation(local_1c0,uStack_1b8);
          *(undefined **)(pcVar12 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
          *(ulong *)(pcVar12 + 0x20) = local_1a0;
          *(ulong *)(pcVar12 + 0x28) = uStack_198;
          SVar21.bridgeObject = (void *)0x20;
          SVar21.str = pcVar12;
          separator.bridgeObject = (void *)0xa;
          separator.str = (char *)0xe100000000000000;
          Swift::_print(SVar21,separator);
          _swift_release(pcVar12);
          objc_stub::deleteObject_(param_2,self);
          _swift_errorRelease(uVar11);
        }
      }
      FUN_100331e0c(&local_120);
      param_1 = param_1 + 0x50;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_78) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x100331dd8 | FUN_100331dd8 */

undefined8 FUN_100331dd8(undefined8 param_1,undefined8 param_2)

{
  FUN_100331188(param_2,param_1,&DAT_100ecb9c0);
  return param_2;
}



/* Address: 0x100331e0c | FUN_100331e0c */

undefined8 FUN_100331e0c(undefined8 param_1)

{
  FUN_10033113c(param_1,&DAT_100ecb9c0);
  return param_1;
}



/* Address: 0x100331e38 | FUN_100331e38 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_100331e38(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  if ((param_4 & 0xff) - 1 < 2) {
    _swift_bridgeObjectRetain(param_2);
  }
  else if ((param_4 & 0xff) != 0) {
    return param_1;
  }
  return param_3;
}



/* Address: 0x100331e84 | FUN_100331e84 */

void FUN_100331e84(undefined8 *param_1)

{
  FUN_100331e98(*param_1,param_1[1],param_1[2],*(undefined1 *)(param_1 + 3));
  return;
}



/* Address: 0x100331e98 | FUN_100331e98 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100331e98(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  if ((param_4 & 0xff) - 1 < 2) {
    _swift_bridgeObjectRelease(param_2);
  }
  else if ((param_4 & 0xff) != 0) {
    return param_1;
  }
  return 0;
}



/* Address: 0x100331ee4 | FUN_100331ee4 */

undefined8 * FUN_100331ee4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar4 = param_2[2];
  uVar3 = *(undefined1 *)(param_2 + 3);
  FUN_100331e38(uVar1,uVar2,uVar4,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar4;
  *(undefined1 *)(param_1 + 3) = uVar3;
  return param_1;
}



/* Address: 0x100331f40 | FUN_100331f40 */

undefined8 * FUN_100331f40(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar8 = param_2[2];
  uVar5 = *(undefined1 *)(param_2 + 3);
  FUN_100331e38(uVar1,uVar3,uVar8,uVar5);
  uVar2 = *param_1;
  uVar4 = param_1[1];
  uVar7 = param_1[2];
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar8;
  uVar6 = *(undefined1 *)(param_1 + 3);
  *(undefined1 *)(param_1 + 3) = uVar5;
  FUN_100331e98(uVar2,uVar4,uVar7,uVar6);
  return param_1;
}



/* Address: 0x100331fac | FUN_100331fac */

void FUN_100331fac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar3 = *(undefined8 *)((long)param_2 + 9);
  *(undefined8 *)((long)param_1 + 0x11) = *(undefined8 *)((long)param_2 + 0x11);
  *(undefined8 *)((long)param_1 + 9) = uVar3;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x100331fc0 | FUN_100331fc0 */

undefined8 * FUN_100331fc0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar6 = param_2[2];
  uVar3 = *(undefined1 *)(param_2 + 3);
  uVar5 = *param_1;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar7 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[2] = uVar6;
  uVar4 = *(undefined1 *)(param_1 + 3);
  *(undefined1 *)(param_1 + 3) = uVar3;
  FUN_100331e98(uVar5,uVar1,uVar2,uVar4);
  return param_1;
}



/* Address: 0x10033200c | FUN_10033200c */

int FUN_10033200c(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfd < param_2) && (*(char *)((long)param_1 + 0x19) != '\0')) {
    return *param_1 + 0xfe;
  }
  uVar1 = *(byte *)(param_1 + 6) ^ 0xff;
  if (*(byte *)(param_1 + 6) < 3) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x100332054 | FUN_100332054 */

void FUN_100332054(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0xfe) {
    if (0xfd < param_3) {
      *(undefined1 *)((long)param_1 + 0x19) = 0;
    }
    if (param_2 != 0) {
      *(char *)(param_1 + 3) = -(char)param_2;
      return;
    }
  }
  else {
    param_1[1] = 0;
    param_1[2] = 0;
    *(undefined1 *)(param_1 + 3) = 0;
    *param_1 = (ulong)(param_2 - 0xfe);
    if (0xfd < param_3) {
      *(undefined1 *)((long)param_1 + 0x19) = 1;
    }
  }
  return;
}



/* Address: 0x10033209c | FUN_10033209c */

undefined1  [16] FUN_10033209c(void)

{
  return ZEXT816(0x100ecba68);
}



/* Address: 0x1003320ac | thunk_FUN_1003320b0 */

void thunk_FUN_1003320b0(void)

{
  FUN_1003320b0();
  return;
}



/* Address: 0x1003320b0 | FUN_1003320b0 */

void FUN_1003320b0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc0208 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c420d4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c420d4,&DAT_100ecba68);
  DAT_100fc0208 = pTVar1;
  return;
}



/* Address: 0x1003320f0 | FUN_1003320f0 */

String FUN_1003320f0(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  long lVar1;
  String SVar2;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_50;
  long lStack_48;
  undefined8 *local_40;
  ulong local_38;
  
  local_38 = CONCAT71(local_38._1_7_,param_4);
  local_50 = param_1;
  lStack_48 = param_2;
  local_40 = (undefined8 *)param_3;
  FUN_100331e38();
  SVar2 = Swift::String::_init(&local_50,&DAT_100ecba68);
  local_60 = 0x2e;
  uStack_58 = 0xe100000000000000;
  local_40 = &local_60;
  lVar1 = 0x7fffffffffffffff;
  FUN_1003321fc(0x7fffffffffffffff,1,FUN_1000f64a4,&local_50,SVar2.str,SVar2.bridgeObject);
  local_40 = (undefined8 *)(ulong)(*(long *)(lVar1 + 0x10) != 0);
  lStack_48 = lVar1 + 0x20;
  local_38 = *(long *)(lVar1 + 0x10) << 1 | 1;
  local_50 = lVar1;
  FUN_1000037f0(&DAT_100fc0210,&DAT_100c42118);
  FUN_1003325e8();
  FUN_100332638();
  SVar2.bridgeObject = (void *)0xe100000000000000;
  SVar2.str = (char *)0x2e;
  SVar2 = (extension_Swift)::Swift::Sequence::_joined(SVar2);
  _swift_bridgeObjectRelease(lVar1);
  return SVar2;
}



/* Address: 0x1003321ec | FUN_1003321ec */

void FUN_1003321ec(void)

{
  undefined8 *unaff_x20;
  
  FUN_1003320f0(*unaff_x20,unaff_x20[1],unaff_x20[2],*(undefined1 *)(unaff_x20 + 3));
  return;
}



/* Address: 0x1003321fc | FUN_1003321fc */

UnsafeMutablePointer
FUN_1003321fc(long param_1,ulong param_2,code *param_3,undefined8 param_4,char *param_5,
             void *param_6)

{
  long *plVar1;
  code *pcVar2;
  ulong uVar3;
  Index after;
  Substring SVar4;
  undefined *puVar5;
  undefined *puVar6;
  Index IVar7;
  void *pvVar9;
  uint uVar10;
  ulong uVar11;
  Index IVar12;
  long unaff_x21;
  ulong uVar13;
  Character CVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  undefined *local_80;
  char *pcVar8;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100332580);
    (*pcVar2)();
  }
  uVar11 = (ulong)param_6 >> 0x38 & 0xf;
  uVar10 = (uint)((ulong)param_5 >> 0x20);
  if (param_1 != 0) {
    uVar13 = (ulong)param_5 & 0xffffffffffff;
    if (((ulong)param_6 & 0x2000000000000000) != 0) {
      uVar13 = uVar11;
    }
    if (uVar13 != 0) {
      uVar10 = uVar10 >> 0x1b & 1;
      if (((ulong)param_6 & 0x1000000000000000) == 0) {
        uVar10 = 1;
      }
      uVar11 = 7;
      if (uVar10 == 0) {
        uVar11 = 0xb;
      }
      SVar20.str = (char *)(uVar11 | uVar13 << 0x10);
      uVar13 = uVar13 * 4;
      IVar12.cmsgPointer.unknown = (UnsafeMutablePointer)(undefined *)0xf;
      local_80 = PTR___swiftEmptyArrayStorage_100eae0d8;
LAB_100332284:
      uVar11 = (ulong)IVar12.cmsgPointer.unknown >> 0xe;
      after.cmsgPointer.unknown = IVar12.cmsgPointer.unknown;
      if (uVar11 != uVar13) {
        do {
          SVar15.bridgeObject = param_6;
          SVar15.str = param_5;
          CVar14 = Swift::String::get_subscript(after,SVar15);
          uVar3 = 0;
          (*param_3)();
          if (unaff_x21 != 0) {
            _swift_bridgeObjectRelease(local_80);
            _swift_bridgeObjectRelease(param_6);
            _swift_bridgeObjectRelease(CVar14.bridgeObject);
            return (UnsafeMutablePointer)after.cmsgPointer.unknown.unknown;
          }
          _swift_bridgeObjectRelease(CVar14.bridgeObject);
          if ((uVar3 & 1) == 0) {
            SVar16.bridgeObject = param_6;
            SVar16.str = param_5;
            after = Swift::String::index(after,SVar16);
          }
          else {
            if (((ulong)IVar12.cmsgPointer.unknown >> 0xe != uVar11) || ((param_2 & 1) == 0))
            goto LAB_100332340;
            SVar17.bridgeObject = param_6;
            SVar17.str = param_5;
            after = Swift::String::index(after,SVar17);
            IVar12 = after;
          }
          uVar11 = (ulong)after.cmsgPointer.unknown >> 0xe;
          if (uVar11 == uVar13) break;
        } while( true );
      }
      goto LAB_1003324cc;
    }
  }
  uVar13 = (ulong)param_5 & 0xffffffffffff;
  if (((ulong)param_6 & 0x2000000000000000) != 0) {
    uVar13 = uVar11;
  }
  if ((uVar13 == 0) && ((param_2 & 1) != 0)) {
    _swift_bridgeObjectRelease(param_6);
    return (UnsafeMutablePointer)PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  uVar10 = uVar10 >> 0x1b & 1;
  if (((ulong)param_6 & 0x1000000000000000) == 0) {
    uVar10 = 1;
  }
  uVar11 = 7;
  if (uVar10 == 0) {
    uVar11 = 0xb;
  }
  SVar20.str = (char *)(uVar11 | uVar13 << 0x10);
  SVar20.bridgeObject = param_5;
  pvVar9 = param_6;
  SVar4 = Swift::String::get_subscript((Range<Index>)0xf,SVar20);
  puVar6 = (undefined *)0x0;
  FUN_10037ff18(0,1,1,PTR___swiftEmptyArrayStorage_100eae0d8);
  uVar11 = *(ulong *)(puVar6 + 0x10);
  local_80 = puVar6;
  if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar11) {
    local_80 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
    FUN_10037ff18(local_80,uVar11 + 1,1,puVar6);
  }
  *(ulong *)(local_80 + 0x10) = uVar11 + 1;
  *(undefined **)(local_80 + uVar11 * 0x20 + 0x20) = SVar4.unknown;
  *(char **)(local_80 + uVar11 * 0x20 + 0x28) = SVar20.str;
  *(char **)(local_80 + uVar11 * 0x20 + 0x30) = param_5;
  *(void **)(local_80 + uVar11 * 0x20 + 0x38) = pvVar9;
LAB_1003324e0:
  _swift_bridgeObjectRelease(param_6);
  return (UnsafeMutablePointer)local_80;
LAB_100332340:
  if (uVar11 < (ulong)IVar12.cmsgPointer.unknown >> 0xe) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1003325e8);
    (*pcVar2)();
  }
  SVar18.bridgeObject = param_5;
  SVar18.str = (char *)after.cmsgPointer.unknown;
  IVar7.cmsgPointer.unknown = after.cmsgPointer.unknown;
  pcVar8 = param_5;
  pvVar9 = param_6;
  SVar4 = Swift::String::get_subscript((Range<Index>)IVar12.cmsgPointer.unknown,SVar18);
  puVar6 = local_80;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar6 & 1) == 0) {
    plVar1 = (long *)(local_80 + 0x10);
    local_80 = (undefined *)0x0;
    FUN_10037ff18(0,*plVar1 + 1,1);
  }
  uVar11 = *(ulong *)(local_80 + 0x10);
  if (*(ulong *)(local_80 + 0x18) >> 1 <= uVar11) {
    puVar6 = (undefined *)(ulong)(1 < *(ulong *)(local_80 + 0x18));
    FUN_10037ff18(puVar6,uVar11 + 1,1,local_80);
    local_80 = puVar6;
  }
  *(ulong *)(local_80 + 0x10) = uVar11 + 1;
  *(undefined **)(local_80 + uVar11 * 0x20 + 0x20) = SVar4.unknown;
  *(UnsafeMutablePointer *)(local_80 + uVar11 * 0x20 + 0x28) = IVar7.cmsgPointer.unknown;
  *(char **)(local_80 + uVar11 * 0x20 + 0x30) = pcVar8;
  *(void **)(local_80 + uVar11 * 0x20 + 0x38) = pvVar9;
  SVar19.bridgeObject = param_6;
  SVar19.str = param_5;
  IVar12 = Swift::String::index(after,SVar19);
  if (*(long *)(local_80 + 0x10) == param_1) goto LAB_1003324cc;
  goto LAB_100332284;
LAB_1003324cc:
  if (((ulong)IVar12.cmsgPointer.unknown >> 0xe != uVar13) || ((param_2 & 1) == 0)) {
    if ((ulong)IVar12.cmsgPointer.unknown >> 0xe <= uVar13) {
      SVar21.bridgeObject = param_5;
      SVar21.str = SVar20.str;
      pvVar9 = param_6;
      SVar4 = Swift::String::get_subscript((Range<Index>)IVar12.cmsgPointer.unknown,SVar21);
      _swift_bridgeObjectRelease(param_6);
      puVar6 = local_80;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar5 = local_80;
      if (((ulong)puVar6 & 1) == 0) {
        puVar5 = (undefined *)0x0;
        FUN_10037ff18(0,*(long *)(local_80 + 0x10) + 1,1,local_80);
      }
      uVar11 = *(ulong *)(puVar5 + 0x10);
      puVar6 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar11) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
        FUN_10037ff18(puVar6,uVar11 + 1,1,puVar5);
      }
      *(ulong *)(puVar6 + 0x10) = uVar11 + 1;
      *(undefined **)(puVar6 + uVar11 * 0x20 + 0x20) = SVar4.unknown;
      *(char **)(puVar6 + uVar11 * 0x20 + 0x28) = SVar20.str;
      *(char **)(puVar6 + uVar11 * 0x20 + 0x30) = param_5;
      *(void **)(puVar6 + uVar11 * 0x20 + 0x38) = pvVar9;
      return (UnsafeMutablePointer)puVar6;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1003325a4);
    (*pcVar2)();
  }
  goto LAB_1003324e0;
}



/* Address: 0x1003325e8 | FUN_1003325e8 */

void FUN_1003325e8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fc0218 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fc0210;
  FUN_100005c24(&DAT_100fc0210,&DAT_100c42118);
  puVar2 = PTR_Swift__Swift__ArraySlice<undefined>_>Swift__Sequence_100eacc60;
  _swift_getWitnessTable(PTR_Swift__Swift__ArraySlice<undefined>_>Swift__Sequence_100eacc60,puVar1);
  DAT_100fc0218 = puVar2;
  return;
}



/* Address: 0x100332638 | FUN_100332638 */

void FUN_100332638(void)

{
  undefined *puVar1;
  
  if (DAT_100fc0220 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Swift__Swift__Substring_>Swift__StringProtocol_100eacac0;
  _swift_getWitnessTable
            (PTR_Swift__Swift__Substring_>Swift__StringProtocol_100eacac0,
             PTR___type_metadata_for_Swift_Substring_100eaca98);
  DAT_100fc0220 = puVar1;
  return;
}



/* Address: 0x100332678 | FUN_100332678 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100332678(undefined *param_1)

{
  ulong uVar1;
  __CocoaSet _Var2;
  ulong uVar3;
  undefined *puVar4;
  char cVar5;
  code *pcVar6;
  ulong uVar7;
  Index IVar8;
  Index IVar9;
  undefined8 uVar10;
  __uint64 _Var11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong *puVar15;
  UnsafeMutablePointer UVar16;
  long unaff_x21;
  undefined1 isUnique;
  long lVar17;
  ulong uVar18;
  undefined1 auStack_98 [32];
  Index local_78;
  ulong uStack_70;
  char local_68;
  
  uVar1 = (ulong)param_1 & 0xc000000000000001;
  if (uVar1 == 0) {
    uVar7 = *(ulong *)(param_1 + 0x10);
  }
  else {
    _Var2.unknown = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_1) {
      _Var2.unknown = param_1;
    }
    uVar7 = Swift::__CocoaSet::get_count(_Var2);
  }
  puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar7 != 0) {
    uVar12 = uVar7 & ((long)uVar7 >> 0x3f ^ 0xffffffffffffffffU);
    FUN_1003075b8(0,uVar12,0);
    if (uVar1 == 0) {
      local_78.cmsgPointer.unknown =
           (UnsafeMutablePointer)Swift::_HashTable::get_startBucket((_HashTable)(param_1 + 0x38));
      local_68 = '\0';
      uVar12 = (ulong)*(uint *)(param_1 + 0x24);
    }
    else {
      _Var2.unknown = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < param_1) {
        _Var2.unknown = param_1;
      }
      local_78 = Swift::__CocoaSet::get_startIndex(_Var2);
      local_68 = '\x01';
    }
    uStack_70 = uVar12;
    if ((long)uVar7 < 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1003329f4);
      (*pcVar6)();
    }
    uVar12 = 0;
    _Var2.unknown = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_1) {
      _Var2.unknown = param_1;
    }
    do {
      cVar5 = local_68;
      uVar3 = uStack_70;
      IVar8.cmsgPointer.unknown = local_78.cmsgPointer.unknown;
      if (uVar12 == uVar7) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1003329e4);
        (*pcVar6)();
      }
      FUN_100357284(local_78.cmsgPointer.unknown,uStack_70,local_68,param_1);
      uVar10 = 0x696669746e656469;
      uVar13 = 0xea00000000007265;
      FUN_100332c98();
      if (unaff_x21 != 0) {
        FUN_10000cae0(IVar8.cmsgPointer.unknown,uVar3,cVar5);
        _swift_release(puVar4);
        return;
      }
      uVar14 = *(ulong *)(puVar4 + 0x10);
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar14) {
        FUN_1003075b8(1 < *(ulong *)(puVar4 + 0x18),uVar14 + 1,1);
      }
      *(ulong *)(puVar4 + 0x10) = uVar14 + 1;
      *(undefined8 *)(puVar4 + uVar14 * 0x10 + 0x20) = uVar10;
      *(undefined8 *)(puVar4 + uVar14 * 0x10 + 0x28) = uVar13;
      if (uVar1 == 0) {
        if (cVar5 == '\x01') {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1003329fc);
          (*pcVar6)();
        }
        UVar16.unknown = (undefined *)(1L << ((ulong)(byte)param_1[0x20] & 0x3f));
        if (UVar16.unknown <= (ulong)IVar8.cmsgPointer.unknown) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1003329e8);
          (*pcVar6)();
        }
        uVar14 = (ulong)IVar8.cmsgPointer.unknown >> 6;
        if ((*(ulong *)(param_1 + uVar14 * 8 + 0x38) >> ((ulong)IVar8.cmsgPointer.unknown & 0x3f) &
            1) == 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1003329ec);
          (*pcVar6)();
        }
        if (*(int *)(param_1 + 0x24) != (int)uVar3) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1003329f0);
          (*pcVar6)();
        }
        uVar18 = *(ulong *)(param_1 + uVar14 * 8 + 0x38) &
                 -2L << ((ulong)IVar8.cmsgPointer.unknown & 0x3f);
        if (uVar18 == 0) {
          lVar17 = uVar14 << 6;
          puVar15 = (ulong *)(param_1 + uVar14 * 8 + 0x40);
          do {
            uVar14 = uVar14 + 1;
            if ((ulong)(UVar16.unknown + 0x3f) >> 6 <= uVar14) {
              FUN_10000cae0(IVar8.cmsgPointer.unknown,uVar3,cVar5);
              goto LAB_10033294c;
            }
            uVar18 = *puVar15;
            lVar17 = lVar17 + 0x40;
            puVar15 = puVar15 + 1;
          } while (uVar18 == 0);
          FUN_10000cae0(IVar8.cmsgPointer.unknown,uVar3,cVar5);
          uVar3 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
          uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
          uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
          uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
          UVar16.unknown = (undefined *)(LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) + lVar17);
        }
        else {
          uVar3 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
          uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
          uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
          uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
          UVar16.unknown =
               (undefined *)
               (LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) |
               (ulong)IVar8.cmsgPointer.unknown & 0x7fffffffffffffc0);
        }
LAB_10033294c:
        uStack_70 = (ulong)*(uint *)(param_1 + 0x24);
        local_68 = '\0';
        local_78.cmsgPointer.unknown = (UnsafeMutablePointer)(UnsafeMutablePointer)UVar16.unknown;
      }
      else {
        if (cVar5 != '\x01') {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1003329f8);
          (*pcVar6)();
        }
        _Var11 = Swift::__CocoaSet::Index::get_handleBitPattern(IVar8);
        if (_Var11 == 0) {
          isUnique = true;
        }
        else {
          _swift_isUniquelyReferenced_nonNull_native();
          isUnique = (undefined1)_Var11;
        }
        IVar8.cmsgPointer.unknown = (UnsafeMutablePointer)&DAT_100fc02a0;
        FUN_1000037f0(&DAT_100fc02a0,&DAT_100c42158);
        IVar9.cmsgPointer.unknown = (UnsafeMutablePointer)auStack_98;
        Swift::Set::Index::modify__asCocoa((Index *)&local_78,IVar9);
        Swift::__CocoaSet::formIndex(IVar8,(bool)isUnique,_Var2);
        (*(code *)IVar9.cmsgPointer.unknown)(auStack_98,0);
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 != uVar7);
    FUN_10000cae0(local_78.cmsgPointer.unknown,uStack_70,local_68);
  }
  return;
}


