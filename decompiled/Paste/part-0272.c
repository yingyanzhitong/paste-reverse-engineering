/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100358bc4 | FUN_100358bc4 */

void FUN_100358bc4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x18))(*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x100358bf4 | FUN_100358bf4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100358bf4(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_2;
  *(ulong *)(unaff_x22 + 0x78) = param_3;
  if (DAT_100fc09c8 != -1) {
    _swift_once(&DAT_100fc09c8,FUN_100357ea0);
  }
  FUN_1000da768(unaff_x22 + 0x48);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  lVar2 = *(long *)(unaff_x22 + 0x68);
  FUN_100004640(unaff_x22 + 0x48,uVar1);
  (**(code **)(lVar2 + 0x18))(uVar1,lVar2);
  *(undefined8 *)(unaff_x22 + 0x80) = uVar1;
  lVar2 = unaff_x22 + 0x48;
  FUN_100004594();
  FUN_100357efc();
  _swift_allocObject();
  *(long *)(unaff_x22 + 0x88) = lVar2;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x18) = 0;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(undefined8 *)(lVar2 + 0x38) = 0;
  *(undefined8 *)(lVar2 + 0x50) = 0;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(undefined8 *)(lVar2 + 0x60) = 0;
  *(undefined8 *)(lVar2 + 0x58) = 0;
  *(undefined8 *)(lVar2 + 0x70) = 0;
  *(undefined8 *)(lVar2 + 0x68) = 0;
  *(undefined8 *)(lVar2 + 0x80) = 0;
  *(undefined8 *)(lVar2 + 0x78) = 0;
  *(undefined8 *)(lVar2 + 0x90) = 0;
  *(undefined8 *)(lVar2 + 0x88) = 0;
  *(undefined8 *)(lVar2 + 0xa0) = 0;
  *(undefined8 *)(lVar2 + 0x98) = 0;
  *(undefined8 *)(lVar2 + 0xb0) = 0;
  *(undefined8 *)(lVar2 + 0xa8) = 0;
  *(undefined8 *)(lVar2 + 0x10) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x30) = param_4;
  *(undefined8 *)(unaff_x22 + 0x38) = param_5;
  plVar3 = (long *)0x20;
  *(undefined8 *)(unaff_x22 + 0x20) = param_6;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar1;
  *(long *)(unaff_x22 + 0x40) = lVar2;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x90) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100358d88;
  FUN_100359380(param_1,param_2,param_3 & 0xcfffffffffffffff,0xd000000000000013,0x8000000100da2d80,
                FUN_1003590bc,unaff_x22 + 0x10,param_6);
  return;
}



/* Address: 0x100358d88 | FUN_100358d88 */

void FUN_100358d88(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar4 + 0x70);
  uVar3 = *(undefined8 *)(lVar4 + 0x78);
  *(long *)(lVar4 + 0x98) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0x90));
  FUN_1000da368(uVar1,uVar3);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_100358e00;
  }
  else {
    pcVar2 = FUN_100358e3c;
  }
  _swift_task_switch(pcVar2,uVar1,uVar3);
  return;
}



/* Address: 0x100358e00 | FUN_100358e00 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100358e00(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x88));
                    /* WARNING: Could not recover jumptable at 0x000100358e38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100358e3c | FUN_100358e3c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100358e3c(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x88));
                    /* WARNING: Could not recover jumptable at 0x000100358e74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100358e78 | FUN_100358e78 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100358e78(undefined8 param_1,ID param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  CheckedContinuation CVar1;
  ID IVar2;
  void *pvVar3;
  undefined *puVar4;
  long extraout_x8;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 auStack_c0 [8];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined *local_a0;
  undefined8 local_98;
  code *local_90;
  undefined *puStack_88;
  code *local_80;
  undefined *local_78;
  
  local_b8 = param_1;
  local_b0 = param_3;
  uStack_a8 = param_5;
  FUN_100005c24(&DAT_100fc1bb0,&DAT_100c422e0);
  CVar1 = Swift::CheckedContinuation::typeMetadataAccessor();
  lVar6 = *(long *)(CVar1.unknown + -8);
  lVar8 = *(long *)(lVar6 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(lVar8 + 0xfU & 0xfffffffffffffff0);
  IVar2 = NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  uVar9 = *(undefined8 *)PTR__NSManagedObjectContextDidSaveNotification_100ea99e8;
  local_80 = FUN_10035a134;
  local_78 = (undefined *)0x0;
  local_a0 = PTR___NSConcreteStackBlock_100ea82a0;
  local_98 = 0x42000000;
  local_90 = FUN_100059f04;
  puStack_88 = &DAT_100ecc568;
  pvVar3 = __Block_copy(&local_a0);
  _swift_release(local_78);
  IVar2 = NSNotificationCenter::addObserverForName_object_queue_usingBlock_
                    (IVar2,uVar9,param_2,0,pvVar3);
  __Block_release(pvVar3);
  (**(code **)(lVar6 + 0x10))(auStack_c0 + -extraout_x8,local_b8,CVar1.unknown);
  uVar5 = (ulong)*(byte *)(lVar6 + 0x50);
  uVar7 = uVar5 + 0x40 & (uVar5 ^ 0xffffffffffffffff);
  puVar4 = &DAT_100ecc5a0;
  _swift_allocObject(&DAT_100ecc5a0,uVar7 + lVar8,uVar5 | 7);
  uVar9 = uStack_a8;
  *(undefined8 *)(puVar4 + 0x10) = param_6;
  *(undefined8 *)(puVar4 + 0x18) = local_b0;
  *(undefined8 *)(puVar4 + 0x20) = param_4;
  *(undefined8 *)(puVar4 + 0x28) = uStack_a8;
  *(ID *)(puVar4 + 0x30) = param_2;
  *(ID *)(puVar4 + 0x38) = IVar2;
  (**(code **)(lVar6 + 0x20))(puVar4 + uVar7,auStack_c0 + -extraout_x8,CVar1.unknown);
  local_80 = FUN_10035a6ac;
  local_a0 = PTR___NSConcreteStackBlock_100ea82a0;
  local_98 = 0x42000000;
  local_90 = FUN_100030410;
  puStack_88 = &DAT_100ecc5b8;
  local_78 = puVar4;
  pvVar3 = __Block_copy(&local_a0);
  puVar4 = local_78;
  _swift_retain(param_4);
  _swift_retain(uVar9);
  _swift_unknownObjectRetain(IVar2);
  _swift_release(puVar4);
  objc_stub::performBlock_(param_2,pvVar3);
  __Block_release(pvVar3);
  _swift_unknownObjectRelease(IVar2);
  return;
}



/* Address: 0x1003590bc | FUN_1003590bc */

void FUN_1003590bc(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100358e78(param_1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1003590cc | FUN_1003590cc */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001003592a8) */
/* WARNING: Removing unreachable block (ram,0x000100359160) */
/* WARNING: Removing unreachable block (ram,0x000100359368) */
/* WARNING: Removing unreachable block (ram,0x0001003591a4) */

void FUN_1003590cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,ID param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  ID IVar1;
  CheckedContinuation CVar2;
  long extraout_x8;
  code *extraout_x12;
  long extraout_x13;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 local_c0 [48];
  undefined1 local_90 [16];
  ID local_80;
  
  lVar5 = *(long *)(param_7 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar5 + 0x40));
  puVar4 = local_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar3 = (long)puVar4 - extraout_x13;
  (*extraout_x12)(lVar3,param_3);
  IVar1 = objc_stub::hasChanges(param_4);
  if ((int)IVar1 != 0) {
    local_80 = param_4;
    FUN_1002ff9c8(FUN_10030844c,local_90);
  }
  IVar1 = objc_stub::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  objc_stub::removeObserver_(IVar1,param_5);
  (**(code **)(lVar5 + 0x10))(puVar4,lVar3,param_7);
  FUN_100005c24(&DAT_100fc1bb0,&DAT_100c422e0);
  CVar2 = Swift::CheckedContinuation::typeMetadataAccessor();
  Swift::CheckedContinuation::resume(puVar4,CVar2.unknown);
  (**(code **)(lVar5 + 8))(lVar3,param_7);
  return;
}



/* Address: 0x100359380 | FUN_100359380 */

void FUN_100359380(char *param_1,void *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  long *plVar2;
  long unaff_x22;
  String isolation;
  
  bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar1 & 1) != 0) {
    plVar2 = (long *)(ulong)*(uint *)(PTR__withCheckedThrowingContinuation_100eaefc8 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x18) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_10030b860;
    isolation.bridgeObject = param_2;
    isolation.str = param_1;
    Swift::_withCheckedThrowingContinuation(isolation);
    return;
  }
  plVar2 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100008284;
  FUN_100359f0c(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



/* Address: 0x1003594c0 | FUN_1003594c0 */

void FUN_1003594c0(void)

{
  FUN_1003594e4(&DAT_100fc09e8,&DAT_100c42828,thunk_FUN_100076508,&PTR_PTR_100eccaa0);
  return;
}



/* Address: 0x1003594e4 | FUN_1003594e4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1003594e4(long *param_1,undefined8 param_2,undefined8 param_3,code *param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_b8 [24];
  long local_a0;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [40];
  
  _swift_beginAccess(unaff_x20 + 0x18,auStack_90,0,0);
  FUN_100011090(unaff_x20 + 0x18,auStack_b8,param_2,param_3);
  if (local_a0 == 0) {
    FUN_100005808(auStack_b8,param_2,param_3);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
    lVar1 = 0;
    FUN_100363c68();
    lVar2 = lVar1;
    _swift_allocObject();
    *(undefined8 *)(lVar2 + 0x10) = uVar3;
    param_1[3] = lVar1;
    param_1[4] = param_5;
    *param_1 = lVar2;
    FUN_100076688(param_1,auStack_78);
    _swift_beginAccess(unaff_x20 + 0x18,auStack_b8,0x21,0);
    FUN_1001a7c4c(auStack_78,unaff_x20 + 0x18,param_2,param_3);
    _swift_endAccess(auStack_b8);
  }
  else {
    (*param_4)(auStack_b8,auStack_78);
    (*param_4)(auStack_78,param_1);
  }
  return;
}



/* Address: 0x1003595f8 | FUN_1003595f8 */

void FUN_1003595f8(void)

{
  FUN_10035961c(&DAT_100fc09f0,&DAT_100c42830,thunk_FUN_100076508,&PTR_PTR_100eccd70);
  return;
}



/* Address: 0x10035961c | FUN_10035961c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10035961c(long *param_1,undefined8 param_2,undefined8 param_3,code *param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined1 auStack_c8 [24];
  long local_b0;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [40];
  
  _swift_beginAccess(unaff_x20 + 0x40,auStack_a0,0,0);
  FUN_100011090(unaff_x20 + 0x40,auStack_c8,param_2,param_3);
  if (local_b0 == 0) {
    FUN_100005808(auStack_c8,param_2,param_3);
    uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
    lVar1 = 0;
    FUN_10036c810();
    lVar2 = lVar1;
    _swift_allocObject();
    puVar3 = &DAT_100c427c0;
    _swift_getKeyPath();
    FUN_1000037f0(&DAT_100fbdba8,&DAT_100c435d0);
    _swift_allocObject();
    FUN_1000da6e0();
    *(undefined **)(lVar2 + 0x10) = puVar3;
    puVar3 = &DAT_100c427e8;
    _swift_getKeyPath();
    puVar4 = &DAT_100fbdbb8;
    FUN_1000037f0(&DAT_100fbdbb8,&DAT_100c3f020);
    _swift_allocObject();
    FUN_1000da6e0(puVar3,puVar4);
    *(undefined **)(lVar2 + 0x18) = puVar3;
    *(undefined8 *)(lVar2 + 0x20) = uVar5;
    param_1[3] = lVar1;
    param_1[4] = param_5;
    *param_1 = lVar2;
    FUN_100076688(param_1,auStack_88);
    _swift_beginAccess(unaff_x20 + 0x40,auStack_c8,0x21,0);
    FUN_1001a7c4c(auStack_88,unaff_x20 + 0x40,param_2,param_3);
    _swift_endAccess(auStack_c8);
  }
  else {
    (*param_4)(auStack_c8,auStack_88);
    (*param_4)(auStack_88,param_1);
  }
  return;
}



/* Address: 0x1003597c8 | FUN_1003597c8 */

void FUN_1003597c8(void)

{
  FUN_1003597ec(&DAT_100fc09f8,&DAT_100c42838,thunk_FUN_100076508,&PTR_PTR_100ecc8e0);
  return;
}



/* Address: 0x1003597ec | FUN_1003597ec */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1003597ec(long *param_1,undefined8 param_2,undefined8 param_3,code *param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_b8 [24];
  long local_a0;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [40];
  
  _swift_beginAccess(unaff_x20 + 0x68,auStack_90,0,0);
  FUN_100011090(unaff_x20 + 0x68,auStack_b8,param_2,param_3);
  if (local_a0 == 0) {
    FUN_100005808(auStack_b8,param_2,param_3);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
    lVar1 = 0;
    FUN_10035fcb4();
    lVar2 = lVar1;
    _swift_allocObject();
    *(undefined8 *)(lVar2 + 0x10) = uVar3;
    param_1[3] = lVar1;
    param_1[4] = param_5;
    *param_1 = lVar2;
    FUN_100076688(param_1,auStack_78);
    _swift_beginAccess(unaff_x20 + 0x68,auStack_b8,0x21,0);
    FUN_1001a7c4c(auStack_78,unaff_x20 + 0x68,param_2,param_3);
    _swift_endAccess(auStack_b8);
  }
  else {
    (*param_4)(auStack_b8,auStack_78);
    (*param_4)(auStack_78,param_1);
  }
  return;
}



/* Address: 0x100359900 | FUN_100359900 */

void FUN_100359900(void)

{
  FUN_100359c0c(&DAT_100fc0a00,&DAT_100c42840,thunk_FUN_100076508,&PTR_PTR_100ecc930);
  return;
}



/* Address: 0x100359924 | FUN_100359924 */

void FUN_100359924(void)

{
  long unaff_x20;
  
  FUN_100005808(unaff_x20 + 0x18,&DAT_100fc09e8,&DAT_100c42828);
  FUN_100005808(unaff_x20 + 0x40,&DAT_100fc09f0,&DAT_100c42830);
  FUN_100005808(unaff_x20 + 0x68,&DAT_100fc09f8,&DAT_100c42838);
  FUN_100005808(unaff_x20 + 0x90,&DAT_100fc0a00,&DAT_100c42840);
  return;
}



/* Address: 0x100359994 | FUN_100359994 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100359994(void)

{
  long unaff_x20;
  
  FUN_100005808(unaff_x20 + 0x18,&DAT_100fc09e8,&DAT_100c42828);
  FUN_100005808(unaff_x20 + 0x40,&DAT_100fc09f0,&DAT_100c42830);
  FUN_100005808(unaff_x20 + 0x68,&DAT_100fc09f8,&DAT_100c42838);
  FUN_100005808(unaff_x20 + 0x90,&DAT_100fc0a00,&DAT_100c42840);
  return;
}



/* Address: 0x100359a10 | FUN_100359a10 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100359a10(void)

{
  long unaff_x20;
  
  _swift_retain();
  FUN_100005808(unaff_x20 + 0x18,&DAT_100fc09e8,&DAT_100c42828);
  FUN_100005808(unaff_x20 + 0x40,&DAT_100fc09f0,&DAT_100c42830);
  FUN_100005808(unaff_x20 + 0x68,&DAT_100fc09f8,&DAT_100c42838);
  FUN_100005808(unaff_x20 + 0x90,&DAT_100fc0a00,&DAT_100c42840);
  _swift_release();
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100359aa4 | FUN_100359aa4 */

void FUN_100359aa4(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [40];
  
  lVar1 = *param_2;
  FUN_100076688(param_1,auStack_58);
  _swift_beginAccess(lVar1 + 0x18,auStack_70,0x21,0);
  FUN_1001a7c4c(auStack_58,lVar1 + 0x18,param_5,param_6);
  _swift_endAccess(auStack_70);
  return;
}



/* Address: 0x100359b10 | FUN_100359b10 */

void FUN_100359b10(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [40];
  
  lVar1 = *param_2;
  FUN_100076688(param_1,auStack_58);
  _swift_beginAccess(lVar1 + 0x40,auStack_70,0x21,0);
  FUN_1001a7c4c(auStack_58,lVar1 + 0x40,param_5,param_6);
  _swift_endAccess(auStack_70);
  return;
}



/* Address: 0x100359b7c | FUN_100359b7c */

void FUN_100359b7c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [40];
  
  lVar1 = *param_2;
  FUN_100076688(param_1,auStack_58);
  _swift_beginAccess(lVar1 + 0x68,auStack_70,0x21,0);
  FUN_1001a7c4c(auStack_58,lVar1 + 0x68,param_5,param_6);
  _swift_endAccess(auStack_70);
  return;
}



/* Address: 0x100359be8 | FUN_100359be8 */

void FUN_100359be8(void)

{
  FUN_100359c0c(&DAT_100fc0a08,&DAT_100c42848,thunk_FUN_100076508,&PTR_PTR_100ecc918);
  return;
}



/* Address: 0x100359c0c | FUN_100359c0c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100359c0c(long *param_1,undefined8 param_2,undefined8 param_3,code *param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_b8 [24];
  long local_a0;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [40];
  
  _swift_beginAccess(unaff_x20 + 0x90,auStack_90,0,0);
  FUN_100011090(unaff_x20 + 0x90,auStack_b8,param_2,param_3);
  if (local_a0 == 0) {
    FUN_100005808(auStack_b8,param_2,param_3);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
    lVar1 = 0;
    FUN_10035fee0();
    lVar2 = lVar1;
    _swift_allocObject();
    *(undefined8 *)(lVar2 + 0x10) = uVar3;
    param_1[3] = lVar1;
    param_1[4] = param_5;
    *param_1 = lVar2;
    FUN_100076688(param_1,auStack_78);
    _swift_beginAccess(unaff_x20 + 0x90,auStack_b8,0x21,0);
    FUN_1001a7c4c(auStack_78,unaff_x20 + 0x90,param_2,param_3);
    _swift_endAccess(auStack_b8);
  }
  else {
    (*param_4)(auStack_b8,auStack_78);
    (*param_4)(auStack_78,param_1);
  }
  return;
}



/* Address: 0x100359d20 | FUN_100359d20 */

void FUN_100359d20(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [40];
  
  lVar1 = *param_2;
  FUN_100076688(param_1,auStack_58);
  _swift_beginAccess(lVar1 + 0x90,auStack_70,0x21,0);
  FUN_1001a7c4c(auStack_58,lVar1 + 0x90,param_5,param_6);
  _swift_endAccess(auStack_70);
  return;
}



/* Address: 0x100359d8c | FUN_100359d8c */

void FUN_100359d8c(void)

{
  long unaff_x20;
  
  FUN_100005808(unaff_x20 + 0x18,&DAT_100fc09c0,&DAT_100c427b0);
  FUN_100005808(unaff_x20 + 0x40,&DAT_100fc09d8,&DAT_100c427b8);
  FUN_100005808(unaff_x20 + 0x68,&DAT_100fc09e0,&DAT_100c42810);
  FUN_100005808(unaff_x20 + 0x90,&DAT_100fc0a08,&DAT_100c42848);
  return;
}



/* Address: 0x100359dfc | FUN_100359dfc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100359dfc(void)

{
  long unaff_x20;
  
  FUN_100005808(unaff_x20 + 0x18,&DAT_100fc09c0,&DAT_100c427b0);
  FUN_100005808(unaff_x20 + 0x40,&DAT_100fc09d8,&DAT_100c427b8);
  FUN_100005808(unaff_x20 + 0x68,&DAT_100fc09e0,&DAT_100c42810);
  FUN_100005808(unaff_x20 + 0x90,&DAT_100fc0a08,&DAT_100c42848);
  return;
}



/* Address: 0x100359e78 | FUN_100359e78 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100359e78(void)

{
  long unaff_x20;
  
  _swift_retain();
  FUN_100005808(unaff_x20 + 0x18,&DAT_100fc09c0,&DAT_100c427b0);
  FUN_100005808(unaff_x20 + 0x40,&DAT_100fc09d8,&DAT_100c427b8);
  FUN_100005808(unaff_x20 + 0x68,&DAT_100fc09e0,&DAT_100c42810);
  FUN_100005808(unaff_x20 + 0x90,&DAT_100fc0a08,&DAT_100c42848);
  _swift_release();
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100359f0c | FUN_100359f0c */

void FUN_100359f0c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  UnownedSerialExecutor UVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_7;
  *(undefined8 *)(unaff_x22 + 0x78) = param_8;
  *(undefined8 *)(unaff_x22 + 0x60) = param_5;
  *(undefined8 *)(unaff_x22 + 0x68) = param_6;
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
  *(undefined8 *)(unaff_x22 + 0x58) = param_4;
  if (param_2 == 0) {
    UVar1.unknown = (undefined *)0x0;
    param_3 = 0;
  }
  else {
    _swift_getObjectType(param_2);
    UVar1 = Swift::Actor::get_unownedExecutor();
  }
  _swift_task_switch(FUN_100359f78,UVar1.unknown,param_3);
  return;
}



/* Address: 0x100359f78 | FUN_100359f78 */

void FUN_100359f78(void)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x50);
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_100359ff0;
  _swift_continuation_init(unaff_x22 + 0x10,1);
  FUN_10035a03c();
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}



/* Address: 0x100359ff0 | FUN_100359ff0 */

void FUN_100359ff0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  if (*(long *)(*unaff_x22 + 0x30) != 0) {
    _swift_willThrow();
  }
                    /* WARNING: Could not recover jumptable at 0x00010035a038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Address: 0x10035a03c | FUN_10035a03c */

void FUN_10035a03c(UnsafeContinuation<undefined,undefined> param_1,code *param_2,undefined8 param_3,
                  char *param_4,void *param_5)

{
  CheckedContinuation CVar1;
  long extraout_x8;
  long lVar2;
  String function;
  
  FUN_100005c24(&DAT_100fc1bb0,&DAT_100c422e0);
  CVar1 = Swift::CheckedContinuation::typeMetadataAccessor();
  lVar2 = *(long *)(CVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_bridgeObjectRetain(param_5);
  function.bridgeObject = param_5;
  function.str = param_4;
  Swift::CheckedContinuation::init(param_1,function);
  (*param_2)(&stack0xffffffffffffffa0 + -extraout_x8);
  (**(code **)(lVar2 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,CVar1.unknown);
  return;
}



/* Address: 0x10035a134 | FUN_10035a134 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10035a134(undefined8 param_1)

{
  char *pcVar1;
  undefined *self;
  undefined *puVar2;
  void *aBlock;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  Notification NVar8;
  undefined *local_80;
  undefined8 local_78;
  code *local_70;
  undefined *local_68;
  code *local_60;
  undefined *local_58;
  
  NVar8 = Foundation::Notification::typeMetadataAccessor();
  pcVar1 = NVar8.pastePaused.str;
  lVar7 = *(long *)(pcVar1 + -8);
  lVar5 = *(long *)(lVar7 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (pcVar1,NVar8.pastePaused.bridgeObject,NVar8.syncInProgress.str,
             NVar8.syncInProgress.bridgeObject);
  lVar4 = (long)&local_80 - (lVar5 + 0xfU & 0xfffffffffffffff0);
  if (DAT_100fc09c8 != -1) {
    _swift_once(&DAT_100fc09c8,FUN_100357ea0);
  }
  FUN_1000da768(&local_80);
  FUN_100004640(&local_80,local_68);
  self = local_68;
  (**(code **)((long)local_60 + 0x10))(local_68,local_60);
  FUN_100004594(&local_80);
  (**(code **)(lVar7 + 0x10))(lVar4,param_1,pcVar1);
  uVar3 = (ulong)*(byte *)(lVar7 + 0x50);
  uVar6 = uVar3 + 0x18 & (uVar3 ^ 0xffffffffffffffff);
  puVar2 = &DAT_100ecc528;
  _swift_allocObject(&DAT_100ecc528,uVar6 + lVar5,uVar3 | 7);
  *(undefined **)(puVar2 + 0x10) = self;
  (**(code **)(lVar7 + 0x20))(puVar2 + uVar6,lVar4,pcVar1);
  local_60 = FUN_10035a594;
  local_80 = PTR___NSConcreteStackBlock_100ea82a0;
  local_78 = 0x42000000;
  local_70 = FUN_100030410;
  local_68 = &DAT_100ecc540;
  local_58 = puVar2;
  aBlock = __Block_copy(&local_80);
  _swift_release(local_58);
  objc_stub::performBlock_((ID)self,aBlock);
  __Block_release(aBlock);
  return 0;
}



/* Address: 0x10035a2d8 | FUN_10035a2d8 */

void FUN_10035a2d8(void)

{
  FUN_1003594c0();
  return;
}



/* Address: 0x10035a2f8 | FUN_10035a2f8 */

void FUN_10035a2f8(void)

{
  FUN_100359aa4();
  return;
}



/* Address: 0x10035a31c | FUN_10035a31c */

void FUN_10035a31c(void)

{
  FUN_1003595f8();
  return;
}



/* Address: 0x10035a33c | FUN_10035a33c */

void FUN_10035a33c(void)

{
  FUN_100359b10();
  return;
}



/* Address: 0x10035a360 | FUN_10035a360 */

void FUN_10035a360(void)

{
  FUN_1003597c8();
  return;
}



/* Address: 0x10035a380 | FUN_10035a380 */

void FUN_10035a380(void)

{
  FUN_100359b7c();
  return;
}



/* Address: 0x10035a3a4 | FUN_10035a3a4 */

void FUN_10035a3a4(void)

{
  FUN_100359900();
  return;
}



/* Address: 0x10035a3c4 | FUN_10035a3c4 */

void FUN_10035a3c4(void)

{
  FUN_100359d20();
  return;
}



/* Address: 0x10035a3e8 | FUN_10035a3e8 */

void FUN_10035a3e8(void)

{
  FUN_100357cf0();
  return;
}



/* Address: 0x10035a408 | FUN_10035a408 */

void FUN_10035a408(void)

{
  FUN_100359aa4();
  return;
}



/* Address: 0x10035a42c | FUN_10035a42c */

void FUN_10035a42c(void)

{
  FUN_100357e58();
  return;
}



/* Address: 0x10035a44c | FUN_10035a44c */

void FUN_10035a44c(void)

{
  FUN_100359b10();
  return;
}



/* Address: 0x10035a470 | FUN_10035a470 */

void FUN_10035a470(void)

{
  FUN_100357e7c();
  return;
}



/* Address: 0x10035a490 | FUN_10035a490 */

void FUN_10035a490(void)

{
  FUN_100359b7c();
  return;
}



/* Address: 0x10035a4b4 | FUN_10035a4b4 */

void FUN_10035a4b4(void)

{
  FUN_100359be8();
  return;
}



/* Address: 0x10035a4d4 | FUN_10035a4d4 */

void FUN_10035a4d4(void)

{
  FUN_100359d20();
  return;
}



/* Address: 0x10035a4f8 | FUN_10035a4f8 */

undefined1  [16] FUN_10035a4f8(void)

{
  return ZEXT816(0x100ecc508);
}



/* Address: 0x10035a508 | FUN_10035a508 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10035a508(void)

{
  return ZEXT816(0x100fc0bd0);
}



/* Address: 0x10035a528 | FUN_10035a528 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10035a528(void)

{
  long unaff_x20;
  long lVar1;
  ulong uVar2;
  Notification NVar3;
  
  NVar3 = Foundation::Notification::typeMetadataAccessor();
  lVar1 = *(long *)(NVar3.pastePaused.str + -8);
  uVar2 = (ulong)*(byte *)(lVar1 + 0x50);
  (**(code **)(lVar1 + 8))
            (unaff_x20 + (uVar2 + 0x18 & (uVar2 ^ 0xffffffffffffffff)),NVar3.pastePaused.str,
             NVar3.syncInProgress.str,NVar3.syncInProgress.bridgeObject);
  _swift_deallocObject();
  return;
}



/* Address: 0x10035a594 | FUN_10035a594 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10035a594(void)

{
  NSNotification *pNVar1;
  ID self;
  long unaff_x20;
  Notification NVar2;
  
  NVar2 = Foundation::Notification::typeMetadataAccessor();
  self = *(ID *)(unaff_x20 + 0x10);
  pNVar1 = Foundation::Notification::_bridgeToObjectiveC(NVar2);
  objc_stub::mergeChangesFromContextDidSaveNotification_(self,pNVar1);
  return 0;
}



/* Address: 0x10035a5e4 | FUN_10035a5e4 */

void FUN_10035a5e4(long param_1,long param_2)

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



/* Address: 0x10035a5f8 | FUN_10035a5f8 */

void FUN_10035a5f8(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x10035a600 | FUN_10035a600 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10035a600(void)

{
  CheckedContinuation CVar1;
  long unaff_x20;
  long lVar2;
  ulong uVar3;
  
  FUN_100005c24(&DAT_100fc1bb0,&DAT_100c422e0);
  CVar1 = Swift::CheckedContinuation::typeMetadataAccessor();
  lVar2 = *(long *)(CVar1.unknown + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x38));
  (**(code **)(lVar2 + 8))(unaff_x20 + (uVar3 + 0x40 & (uVar3 ^ 0xffffffffffffffff)),CVar1.unknown);
  _swift_deallocObject();
  return;
}



/* Address: 0x10035a6ac | FUN_10035a6ac */

void FUN_10035a6ac(void)

{
  CheckedContinuation CVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_100005c24(&DAT_100fc1bb0,&DAT_100c422e0);
  CVar1 = Swift::CheckedContinuation::typeMetadataAccessor();
  FUN_1003590cc(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),
                unaff_x20 +
                ((ulong)*(byte *)(*(long *)(CVar1.unknown + -8) + 0x50) + 0x40 &
                ((ulong)*(byte *)(*(long *)(CVar1.unknown + -8) + 0x50) ^ 0xffffffffffffffff)),uVar2
               );
  return;
}



/* Address: 0x10035a718 | thunk_FUN_10035a5e4 */

void thunk_FUN_10035a5e4(void)

{
  FUN_10035a5e4();
  return;
}



/* Address: 0x10035a71c | thunk_FUN_10035a5e4 */

void thunk_FUN_10035a5e4(void)

{
  FUN_10035a5e4();
  return;
}



/* Address: 0x10035a720 | thunk_FUN_10035a5f8 */

void thunk_FUN_10035a5f8(void)

{
  FUN_10035a5f8();
  return;
}



/* Address: 0x10035a724 | thunk_FUN_10035a5f8 */

void thunk_FUN_10035a5f8(void)

{
  FUN_10035a5f8();
  return;
}



/* Address: 0x10035a728 | thunk_FUN_100076508 */

void thunk_FUN_100076508(void)

{
  FUN_100076508();
  return;
}



/* Address: 0x10035a72c | FUN_10035a72c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10035a72c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_70 [16];
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  undefined8 local_48;
  
  if (DAT_100fc09c8 != -1) {
    _swift_once(&DAT_100fc09c8,FUN_100357ea0);
  }
  FUN_1000da768(auStack_70);
  FUN_100004640(auStack_70,local_58);
  uVar1 = local_58;
  (**(code **)(local_50 + 0x10))(local_58,local_50);
  FUN_100004594(auStack_70);
  lVar2 = 0;
  FUN_100358ba4();
  _swift_allocObject();
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x18) = 0;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(undefined8 *)(lVar2 + 0x38) = 0;
  *(undefined8 *)(lVar2 + 0x50) = 0;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(undefined8 *)(lVar2 + 0x60) = 0;
  *(undefined8 *)(lVar2 + 0x58) = 0;
  *(undefined8 *)(lVar2 + 0x70) = 0;
  *(undefined8 *)(lVar2 + 0x68) = 0;
  *(undefined8 *)(lVar2 + 0x80) = 0;
  *(undefined8 *)(lVar2 + 0x78) = 0;
  *(undefined8 *)(lVar2 + 0x90) = 0;
  *(undefined8 *)(lVar2 + 0x88) = 0;
  *(undefined8 *)(lVar2 + 0xa0) = 0;
  *(undefined8 *)(lVar2 + 0x98) = 0;
  *(undefined8 *)(lVar2 + 0xb0) = 0;
  *(undefined8 *)(lVar2 + 0xa8) = 0;
  *(undefined8 *)(lVar2 + 0x10) = uVar1;
  local_60 = param_1;
  local_58 = param_2;
  local_50 = lVar2;
  FUN_10032b0c8(0);
  (extension_CoreData)::__C::NSManagedObjectContext::_performAndWait();
  _swift_release(lVar2);
  return local_48;
}



/* Address: 0x10035a864 | FUN_10035a864 */

void FUN_10035a864(undefined8 param_1,undefined8 param_2)

{
  FUN_10035a89c(param_1,param_2,&DAT_100fc0d18,&DAT_100c42940,FUN_10035bb5c);
  return;
}


