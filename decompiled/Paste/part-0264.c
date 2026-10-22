/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10032e754 | FUN_10032e754 */

void FUN_10032e754(long param_1)

{
  FUN_100004594(param_1 + 0x20);
  return;
}



/* Address: 0x10032e76c | FUN_10032e76c */

void FUN_10032e76c(undefined8 param_1,undefined8 param_2,undefined8 param_3,ID param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  ulong uVar2;
  UnsafeContinuation<undefined,undefined> continuation;
  long lVar3;
  long unaff_x22;
  long lVar4;
  String function;
  
  *(undefined8 *)(unaff_x22 + 0xa0) = param_2;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_3;
  *(undefined8 *)(unaff_x22 + 0x98) = param_1;
  puVar1 = &DAT_100fc01e8;
  FUN_1000037f0(&DAT_100fc01e8,&DAT_100c41fb0);
  lVar4 = *(long *)(puVar1 + -8);
  uVar2 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xb0) = uVar2;
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x90;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_10032e8f0;
  continuation.unknown = (undefined *)(unaff_x22 + 0x10);
  _swift_continuation_init(continuation.unknown,1);
  *(undefined **)(unaff_x22 + 0x88) = puVar1;
  lVar3 = unaff_x22 + 0x70;
  FUN_10000cbb0(lVar3);
  FUN_10000ec2c(0,&DAT_100fc01d0,&PTR__OBJC_CLASS___CKRecordZoneID_100f8db98);
  FUN_1000037f0(&DAT_100fc1bb0,&DAT_100c422e0);
  function.bridgeObject = (void *)0x8000000100da1040;
  function.str = (char *)0xd000000000000026;
  Swift::CheckedContinuation::init(continuation,function);
  (**(code **)(lVar4 + 0x20))(lVar3,uVar2,puVar1);
  *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_100ea82a0;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
  *(code **)(unaff_x22 + 0x60) = FUN_10032e9d4;
  *(undefined **)(unaff_x22 + 0x68) = &DAT_100ecb890;
  objc_stub::FUN_100c00f80(param_4,param_5);
  (**(code **)(lVar4 + 8))(lVar3,puVar1);
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}



/* Address: 0x10032e8f0 | FUN_10032e8f0 */

void FUN_10032e8f0(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar4 + 0xa0);
  uVar3 = *(undefined8 *)(lVar4 + 0xa8);
  lVar5 = *(long *)(lVar4 + 0x30);
  *(long *)(lVar4 + 0xb8) = lVar5;
  FUN_1000da368(uVar1,uVar3);
  if (lVar5 == 0) {
    pcVar2 = FUN_10032e954;
  }
  else {
    pcVar2 = FUN_10032e990;
  }
  _swift_task_switch(pcVar2,uVar1,uVar3);
  return;
}



/* Address: 0x10032e954 | FUN_10032e954 */

void FUN_10032e954(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb0);
  **(undefined8 **)(unaff_x22 + 0x98) = *(undefined8 *)(unaff_x22 + 0x90);
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010032e98c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10032e990 | FUN_10032e990 */

void FUN_10032e990(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb0);
  _swift_willThrow();
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010032e9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10032e9d4 | FUN_10032e9d4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10032e9d4(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  undefined *puVar2;
  long local_38;
  
  FUN_100004640(param_1 + 0x20,*(undefined8 *)(param_1 + 0x38));
  if (param_3 == 0) {
    if (param_2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10032ea8c);
      (*pcVar1)();
    }
    puVar2 = &DAT_100fc01e8;
    local_38 = param_2;
    FUN_1000037f0(&DAT_100fc01e8,&DAT_100c41fb0);
    Swift::CheckedContinuation::resume(&local_38,puVar2);
  }
  else {
    puVar2 = &DAT_100fc01e8;
    local_38 = param_3;
    FUN_1000037f0(&DAT_100fc01e8,&DAT_100c41fb0);
    Swift::CheckedContinuation::resume(&local_38,puVar2);
  }
  return;
}



/* Address: 0x10032ea8c | FUN_10032ea8c */

void FUN_10032ea8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x60) = param_1;
  *(undefined8 *)(unaff_x22 + 0x50) = param_3;
  *(undefined8 *)(unaff_x22 + 0x58) = param_4;
  *(undefined8 *)(unaff_x22 + 0x48) = param_2;
  _swift_task_switch(FUN_10032eaac,0,0);
  return;
}



/* Address: 0x10032eaac | FUN_10032eaac */

void FUN_10032eaac(void)

{
  byte bVar1;
  undefined *puVar2;
  ulong uVar3;
  TaskPriority TVar4;
  ulong uVar5;
  long *plVar6;
  long unaff_x22;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar11 = *(undefined8 *)(unaff_x22 + 0x60);
  puVar2 = &DAT_100fbe478;
  FUN_1000037f0(&DAT_100fbe478,&DAT_100c40940);
  uVar5 = *(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xf;
  uVar3 = uVar5 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar3);
  TVar4 = Swift::TaskPriority::typeMetadataAccessor();
  uVar7 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x50);
  pcVar8 = *(code **)(*(long *)(TVar4.unknown + -8) + 0x38);
  (*pcVar8)(uVar3,1,1,TVar4.unknown);
  puVar2 = &DAT_100ecb850;
  _swift_allocObject(&DAT_100ecb850,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = 0;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  *(undefined8 *)(puVar2 + 0x28) = uVar10;
  *(undefined8 *)(puVar2 + 0x20) = uVar9;
  _swift_retain(uVar7);
  FUN_10032f60c(uVar3,&DAT_100c41f90,puVar2,&DAT_100fc01d0,
                &PTR__OBJC_CLASS___CKRecordZoneID_100f8db98);
  FUN_100330c84(uVar3);
  _swift_task_dealloc(uVar3);
  uVar5 = uVar5 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar5);
  (*pcVar8)();
  puVar2 = &DAT_100ecb878;
  _swift_allocObject(&DAT_100ecb878,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = 0;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  *(undefined8 *)(puVar2 + 0x20) = uVar11;
  FUN_10032f60c(uVar5,&DAT_100c41fa0,puVar2,&DAT_100fc01d0,
                &PTR__OBJC_CLASS___CKRecordZoneID_100f8db98);
  FUN_100330c84(uVar5);
  _swift_task_dealloc(uVar5);
  bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar1 & 1) != 0) {
    plVar6 = (long *)(ulong)*(uint *)(PTR__next_100eaedc0 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x68) = plVar6;
    FUN_1000037f0(&DAT_100fc01d8,&DAT_100c41f80);
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_10032ecd8;
    Swift::ThrowingTaskGroup::_next((undefined *)(unaff_x22 + 0x38));
    return;
  }
  _swift_taskGroup_wait_next_throwing
            (unaff_x22 + 0x40,**(undefined8 **)(unaff_x22 + 0x48),FUN_10032ed3c,unaff_x22 + 0x10);
  return;
}



/* Address: 0x10032ecd8 | FUN_10032ecd8 */

void FUN_10032ecd8(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x68));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x70) = *(undefined8 *)(lVar2 + 0x38);
    pcVar1 = FUN_10032ed6c;
  }
  else {
    *(long *)(lVar2 + 0x78) = unaff_x20;
    pcVar1 = FUN_10032ee00;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x10032ed3c | FUN_10032ed3c */

void FUN_10032ed3c(void)

{
  code *pcVar1;
  long unaff_x20;
  long unaff_x22;
  
  if (unaff_x20 == 0) {
    *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(unaff_x22 + 0x40);
    pcVar1 = FUN_10032ed6c;
  }
  else {
    *(long *)(unaff_x22 + 0x78) = unaff_x20;
    pcVar1 = FUN_10032ee00;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x10032ed6c | FUN_10032ed6c */

void FUN_10032ed6c(void)

{
  code *pcVar1;
  ThrowingTaskGroup TVar2;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x70);
  if (lVar3 != 0) {
    TVar2.unknown = (undefined *)**(undefined8 **)(unaff_x22 + 0x48);
    FUN_10000ec2c(0,&DAT_100fc01d0,&PTR__OBJC_CLASS___CKRecordZoneID_100f8db98);
    FUN_1000037f0(&DAT_100fc1bb0,&DAT_100c422e0);
    Swift::ThrowingTaskGroup::cancelAll(TVar2);
                    /* WARNING: Could not recover jumptable at 0x00010032edf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(lVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10032ee00);
  (*pcVar1)();
}



/* Address: 0x10032ee00 | FUN_10032ee00 */

void FUN_10032ee00(void)

{
  ThrowingTaskGroup TVar1;
  long unaff_x22;
  
  TVar1.unknown = (undefined *)**(undefined8 **)(unaff_x22 + 0x48);
  FUN_10000ec2c(0,&DAT_100fc01d0,&PTR__OBJC_CLASS___CKRecordZoneID_100f8db98);
  FUN_1000037f0(&DAT_100fc1bb0,&DAT_100c422e0);
  Swift::ThrowingTaskGroup::cancelAll(TVar1);
                    /* WARNING: Could not recover jumptable at 0x00010032ee78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10032ee7c | FUN_10032ee7c */

void FUN_10032ee7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x60) = param_1;
  *(undefined8 *)(unaff_x22 + 0x50) = param_3;
  *(undefined8 *)(unaff_x22 + 0x58) = param_4;
  *(undefined8 *)(unaff_x22 + 0x48) = param_2;
  _swift_task_switch(FUN_10032ee9c,0,0);
  return;
}



/* Address: 0x10032ee9c | FUN_10032ee9c */

void FUN_10032ee9c(void)

{
  byte bVar1;
  undefined *puVar2;
  ulong uVar3;
  TaskPriority TVar4;
  ulong uVar5;
  long *plVar6;
  long unaff_x22;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar11 = *(undefined8 *)(unaff_x22 + 0x60);
  puVar2 = &DAT_100fbe478;
  FUN_1000037f0(&DAT_100fbe478,&DAT_100c40940);
  uVar5 = *(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xf;
  uVar3 = uVar5 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar3);
  TVar4 = Swift::TaskPriority::typeMetadataAccessor();
  uVar7 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x50);
  pcVar8 = *(code **)(*(long *)(TVar4.unknown + -8) + 0x38);
  (*pcVar8)(uVar3,1,1,TVar4.unknown);
  puVar2 = &DAT_100ecb918;
  _swift_allocObject(&DAT_100ecb918,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = 0;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  *(undefined8 *)(puVar2 + 0x28) = uVar10;
  *(undefined8 *)(puVar2 + 0x20) = uVar9;
  _swift_retain(uVar7);
  FUN_10032f60c(uVar3,&DAT_100c42038,puVar2,&DAT_100fc01f8,
                &PTR__OBJC_CLASS___NSManagedObjectContext_100f8dba0);
  FUN_100330c84(uVar3);
  _swift_task_dealloc(uVar3);
  uVar5 = uVar5 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar5);
  (*pcVar8)();
  puVar2 = &DAT_100ecb940;
  _swift_allocObject(&DAT_100ecb940,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = 0;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  *(undefined8 *)(puVar2 + 0x20) = uVar11;
  FUN_10032f60c(uVar5,&DAT_100c42048,puVar2,&DAT_100fc01f8,
                &PTR__OBJC_CLASS___NSManagedObjectContext_100f8dba0);
  FUN_100330c84(uVar5);
  _swift_task_dealloc(uVar5);
  bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar1 & 1) != 0) {
    plVar6 = (long *)(ulong)*(uint *)(PTR__next_100eaedc0 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x68) = plVar6;
    FUN_1000037f0(&DAT_100fc0200,&DAT_100c42028);
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_10032f0c8;
    Swift::ThrowingTaskGroup::_next((undefined *)(unaff_x22 + 0x38));
    return;
  }
  _swift_taskGroup_wait_next_throwing
            (unaff_x22 + 0x40,**(undefined8 **)(unaff_x22 + 0x48),FUN_10032f12c,unaff_x22 + 0x10);
  return;
}



/* Address: 0x10032f0c8 | FUN_10032f0c8 */

void FUN_10032f0c8(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x68));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x70) = *(undefined8 *)(lVar2 + 0x38);
    pcVar1 = FUN_10032f15c;
  }
  else {
    *(long *)(lVar2 + 0x78) = unaff_x20;
    pcVar1 = FUN_10032f1f0;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x10032f12c | FUN_10032f12c */

void FUN_10032f12c(void)

{
  code *pcVar1;
  long unaff_x20;
  long unaff_x22;
  
  if (unaff_x20 == 0) {
    *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(unaff_x22 + 0x40);
    pcVar1 = FUN_10032f15c;
  }
  else {
    *(long *)(unaff_x22 + 0x78) = unaff_x20;
    pcVar1 = FUN_10032f1f0;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x10032f15c | FUN_10032f15c */

void FUN_10032f15c(void)

{
  code *pcVar1;
  ThrowingTaskGroup TVar2;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x70);
  if (lVar3 != 0) {
    TVar2.unknown = (undefined *)**(undefined8 **)(unaff_x22 + 0x48);
    FUN_10000ec2c(0,&DAT_100fc01f8,&PTR__OBJC_CLASS___NSManagedObjectContext_100f8dba0);
    FUN_1000037f0(&DAT_100fc1bb0,&DAT_100c422e0);
    Swift::ThrowingTaskGroup::cancelAll(TVar2);
                    /* WARNING: Could not recover jumptable at 0x00010032f1e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(lVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10032f1f0);
  (*pcVar1)();
}



/* Address: 0x10032f1f0 | FUN_10032f1f0 */

void FUN_10032f1f0(void)

{
  ThrowingTaskGroup TVar1;
  long unaff_x22;
  
  TVar1.unknown = (undefined *)**(undefined8 **)(unaff_x22 + 0x48);
  FUN_10000ec2c(0,&DAT_100fc01f8,&PTR__OBJC_CLASS___NSManagedObjectContext_100f8dba0);
  FUN_1000037f0(&DAT_100fc1bb0,&DAT_100c422e0);
  Swift::ThrowingTaskGroup::cancelAll(TVar1);
                    /* WARNING: Could not recover jumptable at 0x00010032f268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10032f26c | FUN_10032f26c */

void FUN_10032f26c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_1;
  *(undefined8 *)(unaff_x22 + 0x60) = param_3;
  *(undefined8 *)(unaff_x22 + 0x68) = param_4;
  *(undefined8 *)(unaff_x22 + 0x58) = param_2;
  _swift_task_switch(FUN_10032f28c,0,0);
  return;
}



/* Address: 0x10032f28c | FUN_10032f28c */

void FUN_10032f28c(void)

{
  byte bVar1;
  undefined *puVar2;
  ulong uVar3;
  TaskPriority TVar4;
  ulong uVar5;
  long *plVar6;
  long unaff_x22;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar11 = *(undefined8 *)(unaff_x22 + 0x70);
  puVar2 = &DAT_100fbe478;
  FUN_1000037f0(&DAT_100fbe478,&DAT_100c40940);
  uVar5 = *(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xf;
  uVar3 = uVar5 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar3);
  TVar4 = Swift::TaskPriority::typeMetadataAccessor();
  uVar7 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x60);
  pcVar8 = *(code **)(*(long *)(TVar4.unknown + -8) + 0x38);
  (*pcVar8)(uVar3,1,1,TVar4.unknown);
  puVar2 = &DAT_100ecb8c8;
  _swift_allocObject(&DAT_100ecb8c8,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = 0;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  *(undefined8 *)(puVar2 + 0x28) = uVar10;
  *(undefined8 *)(puVar2 + 0x20) = uVar9;
  _swift_retain(uVar7);
  FUN_10032f7a8(uVar3,&DAT_100c41fe8,puVar2);
  FUN_100330c84(uVar3);
  _swift_task_dealloc(uVar3);
  uVar5 = uVar5 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar5);
  (*pcVar8)();
  puVar2 = &DAT_100ecb8f0;
  _swift_allocObject(&DAT_100ecb8f0,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = 0;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  *(undefined8 *)(puVar2 + 0x20) = uVar11;
  FUN_10032f7a8(uVar5,&DAT_100c41ff8,puVar2);
  FUN_100330c84(uVar5);
  _swift_task_dealloc(uVar5);
  bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar1 & 1) != 0) {
    plVar6 = (long *)(ulong)*(uint *)(PTR__next_100eaedc0 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x78) = plVar6;
    FUN_1000037f0(&DAT_100fc01f0,&DAT_100c41fd8);
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_10032f48c;
    Swift::ThrowingTaskGroup::_next((undefined *)(unaff_x22 + 0x38));
    return;
  }
  _swift_taskGroup_wait_next_throwing
            (unaff_x22 + 0x48,**(undefined8 **)(unaff_x22 + 0x58),FUN_10032f4f8,unaff_x22 + 0x10);
  return;
}



/* Address: 0x10032f48c | FUN_10032f48c */

void FUN_10032f48c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x78));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x80) = *(undefined8 *)(lVar2 + 0x38);
    *(undefined1 *)(lVar2 + 0x41) = *(undefined1 *)(lVar2 + 0x40);
    pcVar1 = FUN_10032f530;
  }
  else {
    *(long *)(lVar2 + 0x88) = unaff_x20;
    pcVar1 = FUN_10032f5a8;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x10032f4f8 | FUN_10032f4f8 */

void FUN_10032f4f8(void)

{
  code *pcVar1;
  long unaff_x20;
  long unaff_x22;
  
  if (unaff_x20 == 0) {
    *(undefined8 *)(unaff_x22 + 0x80) = *(undefined8 *)(unaff_x22 + 0x48);
    *(undefined1 *)(unaff_x22 + 0x41) = *(undefined1 *)(unaff_x22 + 0x50);
    pcVar1 = FUN_10032f530;
  }
  else {
    *(long *)(unaff_x22 + 0x88) = unaff_x20;
    pcVar1 = FUN_10032f5a8;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x10032f530 | FUN_10032f530 */

void FUN_10032f530(void)

{
  code *pcVar1;
  ThrowingTaskGroup TVar2;
  long unaff_x22;
  
  if (*(char *)(unaff_x22 + 0x41) != '\x01') {
    TVar2.unknown = (undefined *)**(undefined8 **)(unaff_x22 + 0x58);
    FUN_1000037f0(&DAT_100fc1bb0,&DAT_100c422e0);
    Swift::ThrowingTaskGroup::cancelAll(TVar2);
                    /* WARNING: Could not recover jumptable at 0x00010032f5a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x80));
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10032f5a8);
  (*pcVar1)();
}



/* Address: 0x10032f5a8 | FUN_10032f5a8 */

void FUN_10032f5a8(void)

{
  ThrowingTaskGroup TVar1;
  long unaff_x22;
  
  TVar1.unknown = (undefined *)**(undefined8 **)(unaff_x22 + 0x58);
  FUN_1000037f0(&DAT_100fc1bb0,&DAT_100c422e0);
  Swift::ThrowingTaskGroup::cancelAll(TVar1);
                    /* WARNING: Could not recover jumptable at 0x00010032f608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10032f60c | FUN_10032f60c */

void FUN_10032f60c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  __uint8 _Var1;
  undefined *puVar2;
  TaskPriority TVar3;
  TaskPriority TVar4;
  UnownedSerialExecutor UVar5;
  undefined8 uVar6;
  long extraout_x8;
  undefined8 *unaff_x20;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined auStack_a0 [8];
  undefined8 local_98;
  undefined8 *puStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined *local_70;
  long lStack_68;
  
  puVar2 = &DAT_100fbe478;
  FUN_1000037f0(&DAT_100fbe478,&DAT_100c40940);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = auStack_a0 + -extraout_x8;
  FUN_100330d70(param_1,puVar2);
  TVar3 = Swift::TaskPriority::typeMetadataAccessor();
  lVar10 = *(long *)(TVar3.unknown + -8);
  TVar4.unknown = puVar2;
  (**(code **)(lVar10 + 0x30))(puVar2,1,TVar3.unknown);
  if ((int)TVar4.unknown == 1) {
    FUN_100330c84(puVar2);
    uVar8 = 0x3100;
    lVar10 = *(long *)(param_3 + 0x10);
  }
  else {
    _Var1 = Swift::TaskPriority::get_rawValue(TVar4);
    (**(code **)(lVar10 + 8))(puVar2,TVar3.unknown);
    uVar8 = (ulong)_Var1 | 0x3100;
    lVar10 = *(long *)(param_3 + 0x10);
  }
  if (lVar10 == 0) {
    UVar5.unknown = (undefined *)0x0;
    lVar9 = 0;
  }
  else {
    lVar9 = *(long *)(param_3 + 0x18);
    _swift_getObjectType(lVar10);
    _swift_unknownObjectRetain(lVar10);
    UVar5 = Swift::Actor::get_unownedExecutor();
    _swift_unknownObjectRelease(lVar10);
  }
  uVar7 = *unaff_x20;
  uVar6 = 0;
  FUN_10000ec2c(0,param_4,param_5);
  puStack_90 = (undefined8 *)0x0;
  if (lVar9 != 0 || UVar5.unknown != (undefined *)0x0) {
    local_80 = 0;
    uStack_78 = 0;
    puStack_90 = &local_80;
    local_70 = UVar5.unknown;
    lStack_68 = lVar9;
  }
  local_98 = 1;
  local_88 = uVar7;
  _swift_task_create(uVar8,&local_98,uVar6,param_2,param_3);
  _swift_release();
  return;
}



/* Address: 0x10032f7a8 | FUN_10032f7a8 */

void FUN_10032f7a8(undefined8 param_1,undefined8 param_2,long param_3)

{
  __uint8 _Var1;
  undefined *puVar2;
  TaskPriority TVar3;
  TaskPriority TVar4;
  UnownedSerialExecutor UVar5;
  long extraout_x8;
  undefined8 *unaff_x20;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined auStack_90 [8];
  undefined8 local_88;
  undefined8 *puStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined *local_60;
  long lStack_58;
  
  puVar2 = &DAT_100fbe478;
  FUN_1000037f0(&DAT_100fbe478,&DAT_100c40940);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = auStack_90 + -extraout_x8;
  FUN_100330d70(param_1,puVar2);
  TVar3 = Swift::TaskPriority::typeMetadataAccessor();
  lVar8 = *(long *)(TVar3.unknown + -8);
  TVar4.unknown = puVar2;
  (**(code **)(lVar8 + 0x30))(puVar2,1,TVar3.unknown);
  if ((int)TVar4.unknown == 1) {
    FUN_100330c84(puVar2);
    uVar6 = 0x3100;
    lVar8 = *(long *)(param_3 + 0x10);
  }
  else {
    _Var1 = Swift::TaskPriority::get_rawValue(TVar4);
    (**(code **)(lVar8 + 8))(puVar2,TVar3.unknown);
    uVar6 = (ulong)_Var1 | 0x3100;
    lVar8 = *(long *)(param_3 + 0x10);
  }
  if (lVar8 == 0) {
    UVar5.unknown = (undefined *)0x0;
    lVar7 = 0;
  }
  else {
    lVar7 = *(long *)(param_3 + 0x18);
    _swift_getObjectType(lVar8);
    _swift_unknownObjectRetain(lVar8);
    UVar5 = Swift::Actor::get_unownedExecutor();
    _swift_unknownObjectRelease(lVar8);
  }
  local_78 = *unaff_x20;
  puStack_80 = (undefined8 *)0x0;
  if (lVar7 != 0 || UVar5.unknown != (undefined *)0x0) {
    local_70 = 0;
    uStack_68 = 0;
    puStack_80 = &local_70;
    local_60 = UVar5.unknown;
    lStack_58 = lVar7;
  }
  local_88 = 1;
  _swift_task_create(uVar6,&local_88,PTR___type_metadata_for_Swift_Int_100eac6f8,param_2,param_3);
  _swift_release();
  return;
}



/* Address: 0x10032f928 | FUN_10032f928 */

void FUN_10032f928(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
  plVar1 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1000cee0c;
  FUN_10032ea8c(param_1,param_3,param_4,param_5);
  return;
}



/* Address: 0x10032f998 | FUN_10032f998 */

void FUN_10032f998(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_4;
  *(undefined8 *)(unaff_x22 + 0x28) = param_5;
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  _swift_task_switch(FUN_10032f9b4,0,0);
  return;
}



/* Address: 0x10032f9b4 | FUN_10032f9b4 */

void FUN_10032f9b4(void)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long unaff_x22;
  
  piVar3 = *(int **)(unaff_x22 + 0x20);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x30) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)thunk_FUN_10032fc20;
                    /* WARNING: Could not recover jumptable at 0x00010032fa18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))(plVar2,unaff_x22 + 0x10,0,0);
  return;
}



/* Address: 0x10032fa1c | FUN_10032fa1c */

void FUN_10032fa1c(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
  plVar1 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1000cee0c;
  FUN_10033081c(param_1);
  return;
}



/* Address: 0x10032fa6c | FUN_10032fa6c */

void FUN_10032fa6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
  plVar1 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1000cee0c;
  FUN_10032ee7c(param_1,param_3,param_4,param_5);
  return;
}



/* Address: 0x10032fadc | FUN_10032fadc */

void FUN_10032fadc(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
  plVar1 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1000cee0c;
  FUN_10033081c(param_1);
  return;
}



/* Address: 0x10032fb2c | FUN_10032fb2c */

void FUN_10032fb2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
  plVar1 = (long *)0x90;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1000cee0c;
  FUN_10032f26c(param_1,param_3,param_4,param_5);
  return;
}



/* Address: 0x10032fb9c | FUN_10032fb9c */

void FUN_10032fb9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_4;
  *(undefined8 *)(unaff_x22 + 0x28) = param_5;
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  _swift_task_switch(FUN_10032fbb8,0,0);
  return;
}



/* Address: 0x10032fbb8 | FUN_10032fbb8 */

void FUN_10032fbb8(void)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long unaff_x22;
  
  piVar3 = *(int **)(unaff_x22 + 0x20);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x30) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_10032fc20;
                    /* WARNING: Could not recover jumptable at 0x00010032fc1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))(plVar2,unaff_x22 + 0x10,0,0);
  return;
}



/* Address: 0x10032fc20 | FUN_10032fc20 */

void FUN_10032fc20(void)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x30));
  if (unaff_x20 == 0) {
    **(undefined8 **)(lVar1 + 0x18) = *(undefined8 *)(lVar1 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010032fc64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Address: 0x10032fc68 | FUN_10032fc68 */

void FUN_10032fc68(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
  plVar1 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1000cee0c;
  FUN_100330934(param_1);
  return;
}



/* Address: 0x10032fcb8 | FUN_10032fcb8 */

void FUN_10032fcb8(undefined8 param_1,long param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  byte bVar1;
  long *plVar2;
  UnownedSerialExecutor UVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x150) = param_4;
  *(undefined8 *)(unaff_x22 + 0x158) = param_5;
  *(undefined8 *)(unaff_x22 + 0x148) = param_1;
  *(undefined8 *)(unaff_x22 + 0x120) = param_4;
  *(undefined8 *)(unaff_x22 + 0x128) = param_5;
  *(undefined8 *)(unaff_x22 + 0x130) = param_1;
  bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar1 & 1) != 0) {
    FUN_10000ec2c(0,&DAT_100fc01d0,&PTR__OBJC_CLASS___CKRecordZoneID_100f8db98);
    plVar2 = (long *)(ulong)*(uint *)(PTR__withThrowingTaskGroup_100eaef88 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x160) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)thunk_FUN_10033050c;
    Swift::_withThrowingTaskGroup();
    return;
  }
  if (param_2 == 0) {
    UVar3.unknown = (undefined *)0x0;
    param_3 = 0;
  }
  else {
    _swift_getObjectType(param_2);
    param_3 = param_3 & 0xcfffffffffffffff;
    UVar3 = Swift::Actor::get_unownedExecutor();
  }
  *(undefined **)(unaff_x22 + 0x168) = UVar3.unknown;
  *(ulong *)(unaff_x22 + 0x170) = param_3;
  _swift_task_switch(FUN_10032fdd4,UVar3.unknown);
  return;
}



/* Address: 0x10032fdd4 | FUN_10032fdd4 */

void FUN_10032fdd4(void)

{
  undefined8 uVar1;
  long *plVar2;
  long unaff_x22;
  
  uVar1 = 0;
  FUN_10000ec2c(0,&DAT_100fc01d0,&PTR__OBJC_CLASS___CKRecordZoneID_100f8db98);
  *(undefined8 *)(unaff_x22 + 0x178) = uVar1;
  _swift_taskGroup_initialize(unaff_x22 + 0x10,uVar1);
  *(long *)(unaff_x22 + 0x140) = unaff_x22 + 0x10;
  plVar2 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x180) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_10032fe58;
  FUN_10032ea8c(plVar2,*(undefined8 *)(unaff_x22 + 0x148),unaff_x22 + 0x140,
                *(undefined8 *)(unaff_x22 + 0x150),*(undefined8 *)(unaff_x22 + 0x158));
  return;
}



/* Address: 0x10032fe58 | FUN_10032fe58 */

void FUN_10032fe58(undefined8 param_1)

{
  long *plVar1;
  ThrowingTaskGroup TVar2;
  long unaff_x20;
  long lVar3;
  long *unaff_x22;
  long lVar4;
  
  lVar3 = *unaff_x22;
  lVar4 = *unaff_x22;
  *(long *)(lVar3 + 0x188) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x180));
  if (unaff_x20 != 0) {
    _swift_task_switch(FUN_10032ff84,*(undefined8 *)(lVar3 + 0x168),*(undefined8 *)(lVar3 + 0x170));
    return;
  }
  *(undefined8 *)(lVar3 + 400) = param_1;
  plVar1 = (long *)(ulong)*(uint *)(PTR__awaitAllRemainingTasks_100eaedb0 + 4);
  _swift_task_alloc();
  *(long **)(lVar3 + 0x198) = plVar1;
  TVar2.unknown = &DAT_100fc01d8;
  FUN_1000037f0(&DAT_100fc01d8,&DAT_100c41f80);
  *plVar1 = lVar4;
  plVar1[1] = (long)FUN_10032ff08;
  Swift::ThrowingTaskGroup::_awaitAllRemainingTasks(TVar2);
  return;
}



/* Address: 0x10032ff08 | FUN_10032ff08 */

void FUN_10032ff08(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x198));
  _swift_task_switch(FUN_10032ff4c,*(undefined8 *)(lVar1 + 0x168),*(undefined8 *)(lVar1 + 0x170));
  return;
}



/* Address: 0x10032ff4c | FUN_10032ff4c */

void FUN_10032ff4c(void)

{
  long unaff_x22;
  
  _swift_taskGroup_destroy(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010032ff80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 400));
  return;
}



/* Address: 0x10032ff84 | FUN_10032ff84 */

void FUN_10032ff84(void)

{
  long *plVar1;
  ThrowingTaskGroup TVar2;
  long unaff_x22;
  
  TVar2.unknown = *(undefined **)(unaff_x22 + 0x140);
  FUN_1000037f0(&DAT_100fc1bb0,&DAT_100c422e0);
  Swift::ThrowingTaskGroup::cancelAll(TVar2);
  plVar1 = (long *)(ulong)*(uint *)(PTR__awaitAllRemainingTasks_100eaedb0 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x1a0) = plVar1;
  TVar2.unknown = &DAT_100fc01d8;
  FUN_1000037f0(&DAT_100fc01d8,&DAT_100c41f80);
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10033001c;
  Swift::ThrowingTaskGroup::_awaitAllRemainingTasks(TVar2);
  return;
}



/* Address: 0x10033001c | FUN_10033001c */

void FUN_10033001c(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x1a0));
  _swift_task_switch(FUN_100330060,*(undefined8 *)(lVar1 + 0x168),*(undefined8 *)(lVar1 + 0x170));
  return;
}



/* Address: 0x100330060 | FUN_100330060 */

void FUN_100330060(void)

{
  long unaff_x22;
  
  _swift_taskGroup_destroy(unaff_x22 + 0x10);
  _swift_willThrow();
                    /* WARNING: Could not recover jumptable at 0x0001003300a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1003300a4 | FUN_1003300a4 */

void FUN_1003300a4(undefined8 param_1,long param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  byte bVar1;
  long *plVar2;
  UnownedSerialExecutor UVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x150) = param_4;
  *(undefined8 *)(unaff_x22 + 0x158) = param_5;
  *(undefined8 *)(unaff_x22 + 0x148) = param_1;
  *(undefined8 *)(unaff_x22 + 0x120) = param_4;
  *(undefined8 *)(unaff_x22 + 0x128) = param_5;
  *(undefined8 *)(unaff_x22 + 0x130) = param_1;
  bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar1 & 1) != 0) {
    FUN_10000ec2c(0,&DAT_100fc01f8,&PTR__OBJC_CLASS___NSManagedObjectContext_100f8dba0);
    plVar2 = (long *)(ulong)*(uint *)(PTR__withThrowingTaskGroup_100eaef88 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x160) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)thunk_FUN_10033050c;
    Swift::_withThrowingTaskGroup();
    return;
  }
  if (param_2 == 0) {
    UVar3.unknown = (undefined *)0x0;
    param_3 = 0;
  }
  else {
    _swift_getObjectType(param_2);
    param_3 = param_3 & 0xcfffffffffffffff;
    UVar3 = Swift::Actor::get_unownedExecutor();
  }
  *(undefined **)(unaff_x22 + 0x168) = UVar3.unknown;
  *(ulong *)(unaff_x22 + 0x170) = param_3;
  _swift_task_switch(FUN_1003301c0,UVar3.unknown);
  return;
}



/* Address: 0x1003301c0 | FUN_1003301c0 */

void FUN_1003301c0(void)

{
  undefined8 uVar1;
  long *plVar2;
  long unaff_x22;
  
  uVar1 = 0;
  FUN_10000ec2c(0,&DAT_100fc01f8,&PTR__OBJC_CLASS___NSManagedObjectContext_100f8dba0);
  *(undefined8 *)(unaff_x22 + 0x178) = uVar1;
  _swift_taskGroup_initialize(unaff_x22 + 0x10,uVar1);
  *(long *)(unaff_x22 + 0x140) = unaff_x22 + 0x10;
  plVar2 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x180) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100330244;
  FUN_10032ee7c(plVar2,*(undefined8 *)(unaff_x22 + 0x148),unaff_x22 + 0x140,
                *(undefined8 *)(unaff_x22 + 0x150),*(undefined8 *)(unaff_x22 + 0x158));
  return;
}



/* Address: 0x100330244 | FUN_100330244 */

void FUN_100330244(undefined8 param_1)

{
  long *plVar1;
  ThrowingTaskGroup TVar2;
  long unaff_x20;
  long lVar3;
  long *unaff_x22;
  long lVar4;
  
  lVar3 = *unaff_x22;
  lVar4 = *unaff_x22;
  *(long *)(lVar3 + 0x188) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x180));
  if (unaff_x20 != 0) {
    _swift_task_switch(FUN_100330338,*(undefined8 *)(lVar3 + 0x168),*(undefined8 *)(lVar3 + 0x170));
    return;
  }
  *(undefined8 *)(lVar3 + 400) = param_1;
  plVar1 = (long *)(ulong)*(uint *)(PTR__awaitAllRemainingTasks_100eaedb0 + 4);
  _swift_task_alloc();
  *(long **)(lVar3 + 0x198) = plVar1;
  TVar2.unknown = &DAT_100fc0200;
  FUN_1000037f0(&DAT_100fc0200,&DAT_100c42028);
  *plVar1 = lVar4;
  plVar1[1] = (long)FUN_1003302f4;
  Swift::ThrowingTaskGroup::_awaitAllRemainingTasks(TVar2);
  return;
}



/* Address: 0x1003302f4 | FUN_1003302f4 */

void FUN_1003302f4(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x198));
  _swift_task_switch(thunk_FUN_10032ff4c,*(undefined8 *)(lVar1 + 0x168),
                     *(undefined8 *)(lVar1 + 0x170));
  return;
}



/* Address: 0x100330338 | FUN_100330338 */

void FUN_100330338(void)

{
  long *plVar1;
  ThrowingTaskGroup TVar2;
  long unaff_x22;
  
  TVar2.unknown = *(undefined **)(unaff_x22 + 0x140);
  FUN_1000037f0(&DAT_100fc1bb0,&DAT_100c422e0);
  Swift::ThrowingTaskGroup::cancelAll(TVar2);
  plVar1 = (long *)(ulong)*(uint *)(PTR__awaitAllRemainingTasks_100eaedb0 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x1a0) = plVar1;
  TVar2.unknown = &DAT_100fc0200;
  FUN_1000037f0(&DAT_100fc0200,&DAT_100c42028);
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1003303d0;
  Swift::ThrowingTaskGroup::_awaitAllRemainingTasks(TVar2);
  return;
}



/* Address: 0x1003303d0 | FUN_1003303d0 */

void FUN_1003303d0(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x1a0));
  _swift_task_switch(thunk_FUN_100330060,*(undefined8 *)(lVar1 + 0x168),
                     *(undefined8 *)(lVar1 + 0x170));
  return;
}



/* Address: 0x100330414 | FUN_100330414 */

void FUN_100330414(undefined8 param_1,long param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  byte bVar1;
  long *plVar2;
  UnownedSerialExecutor UVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x150) = param_4;
  *(undefined8 *)(unaff_x22 + 0x158) = param_5;
  *(undefined8 *)(unaff_x22 + 0x148) = param_1;
  *(undefined8 *)(unaff_x22 + 0x120) = param_4;
  *(undefined8 *)(unaff_x22 + 0x128) = param_5;
  *(undefined8 *)(unaff_x22 + 0x130) = param_1;
  bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar1 & 1) != 0) {
    plVar2 = (long *)(ulong)*(uint *)(PTR__withThrowingTaskGroup_100eaef88 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x160) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_10033050c;
    Swift::_withThrowingTaskGroup();
    return;
  }
  if (param_2 == 0) {
    UVar3.unknown = (undefined *)0x0;
    param_3 = 0;
  }
  else {
    _swift_getObjectType(param_2);
    param_3 = param_3 & 0xcfffffffffffffff;
    UVar3 = Swift::Actor::get_unownedExecutor();
  }
  *(undefined **)(unaff_x22 + 0x168) = UVar3.unknown;
  *(ulong *)(unaff_x22 + 0x170) = param_3;
  _swift_task_switch(FUN_100330564,UVar3.unknown);
  return;
}



/* Address: 0x10033050c | FUN_10033050c */

void FUN_10033050c(void)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x160));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000100330548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100330560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))(*(undefined8 *)(lVar1 + 0x138));
  return;
}



/* Address: 0x100330564 | FUN_100330564 */

void FUN_100330564(void)

{
  long *plVar1;
  long unaff_x22;
  
  _swift_taskGroup_initialize(unaff_x22 + 0x10,PTR___type_metadata_for_Swift_Int_100eac6f8);
  *(long *)(unaff_x22 + 0x140) = unaff_x22 + 0x10;
  plVar1 = (long *)0x90;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x178) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1003305d0;
  FUN_10032f26c(plVar1,*(undefined8 *)(unaff_x22 + 0x148),unaff_x22 + 0x140,
                *(undefined8 *)(unaff_x22 + 0x150),*(undefined8 *)(unaff_x22 + 0x158));
  return;
}



/* Address: 0x1003305d0 | FUN_1003305d0 */

void FUN_1003305d0(undefined8 param_1)

{
  long *plVar1;
  ThrowingTaskGroup TVar2;
  long unaff_x20;
  long lVar3;
  long *unaff_x22;
  long lVar4;
  
  lVar3 = *unaff_x22;
  lVar4 = *unaff_x22;
  *(long *)(lVar3 + 0x180) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x178));
  if (unaff_x20 != 0) {
    _swift_task_switch(FUN_1003306fc,*(undefined8 *)(lVar3 + 0x168),*(undefined8 *)(lVar3 + 0x170));
    return;
  }
  *(undefined8 *)(lVar3 + 0x188) = param_1;
  plVar1 = (long *)(ulong)*(uint *)(PTR__awaitAllRemainingTasks_100eaedb0 + 4);
  _swift_task_alloc();
  *(long **)(lVar3 + 400) = plVar1;
  TVar2.unknown = &DAT_100fc01f0;
  FUN_1000037f0(&DAT_100fc01f0,&DAT_100c41fd8);
  *plVar1 = lVar4;
  plVar1[1] = (long)FUN_100330680;
  Swift::ThrowingTaskGroup::_awaitAllRemainingTasks(TVar2);
  return;
}



/* Address: 0x100330680 | FUN_100330680 */

void FUN_100330680(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 400));
  _swift_task_switch(FUN_1003306c4,*(undefined8 *)(lVar1 + 0x168),*(undefined8 *)(lVar1 + 0x170));
  return;
}



/* Address: 0x1003306c4 | FUN_1003306c4 */

void FUN_1003306c4(void)

{
  long unaff_x22;
  
  _swift_taskGroup_destroy(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001003306f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x188));
  return;
}



/* Address: 0x1003306fc | FUN_1003306fc */

void FUN_1003306fc(void)

{
  long *plVar1;
  ThrowingTaskGroup TVar2;
  long unaff_x22;
  
  TVar2.unknown = *(undefined **)(unaff_x22 + 0x140);
  FUN_1000037f0(&DAT_100fc1bb0,&DAT_100c422e0);
  Swift::ThrowingTaskGroup::cancelAll(TVar2);
  plVar1 = (long *)(ulong)*(uint *)(PTR__awaitAllRemainingTasks_100eaedb0 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x198) = plVar1;
  TVar2.unknown = &DAT_100fc01f0;
  FUN_1000037f0(&DAT_100fc01f0,&DAT_100c41fd8);
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100330794;
  Swift::ThrowingTaskGroup::_awaitAllRemainingTasks(TVar2);
  return;
}



/* Address: 0x100330794 | FUN_100330794 */

void FUN_100330794(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x198));
  _swift_task_switch(FUN_1003307d8,*(undefined8 *)(lVar1 + 0x168),*(undefined8 *)(lVar1 + 0x170));
  return;
}



/* Address: 0x1003307d8 | FUN_1003307d8 */

void FUN_1003307d8(void)

{
  long unaff_x22;
  
  _swift_taskGroup_destroy(unaff_x22 + 0x10);
  _swift_willThrow();
                    /* WARNING: Could not recover jumptable at 0x000100330818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10033081c | FUN_10033081c */

void FUN_10033081c(undefined8 param_1)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  _swift_task_switch(FUN_100330834,0,0);
  return;
}



/* Address: 0x100330834 | FUN_100330834 */

void FUN_100330834(void)

{
  code *pcVar1;
  long *plVar2;
  long unaff_x22;
  double dVar3;
  
  dVar3 = *(double *)(unaff_x22 + 0x10) * 1000000000.0;
  if (0x7fefffffffffffff < (ulong)ABS(dVar3)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1003308cc);
    (*pcVar1)();
  }
  if (-1.0 < dVar3) {
    if (dVar3 < 1.8446744073709552e+19) {
      plVar2 = (long *)(ulong)*(uint *)(PTR__sleep_100eaed60 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x18) = plVar2;
      *plVar2 = unaff_x22;
      plVar2[1] = (long)FUN_1003308d4;
      (extension_Swift)::Swift::Task::_sleep((long)dVar3);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1003308d4);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003308d0);
  (*pcVar1)();
}



/* Address: 0x1003308d4 | FUN_1003308d4 */

void FUN_1003308d4(void)

{
  long unaff_x20;
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x18));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000100330910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
  _swift_task_switch(thunk_FUN_100330a4c,0,0);
  return;
}



/* Address: 0x100330934 | FUN_100330934 */

void FUN_100330934(undefined8 param_1)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  _swift_task_switch(FUN_10033094c,0,0);
  return;
}


