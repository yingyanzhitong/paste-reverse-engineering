/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100916f80 | FUN_100916f80 */

void FUN_100916f80(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xa0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x98));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0xa8) = param_2;
    *(undefined8 *)(lVar2 + 0xb0) = param_1;
    pcVar1 = FUN_100916ff8;
  }
  else {
    pcVar1 = FUN_100917038;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100916ff8 | FUN_100916ff8 */

void FUN_100916ff8(void)

{
  long unaff_x22;
  
  _swift_task_removeCancellationHandler(*(undefined8 *)(unaff_x22 + 0x90));
                    /* WARNING: Could not recover jumptable at 0x000100917034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0xb0),*(undefined8 *)(unaff_x22 + 0xa8));
  return;
}



/* Address: 0x100917038 | FUN_100917038 */

void FUN_100917038(void)

{
  long unaff_x22;
  
  _swift_task_removeCancellationHandler(*(undefined8 *)(unaff_x22 + 0x90));
                    /* WARNING: Could not recover jumptable at 0x000100917070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100917074 | FUN_100917074 */

void FUN_100917074(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_2;
  *(undefined8 *)(unaff_x22 + 0x78) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x68) = param_1;
  _swift_task_switch(FUN_100917090,0,0);
  return;
}



/* Address: 0x100917090 | FUN_100917090 */

void FUN_100917090(long *param_1)

{
  long lVar1;
  byte bVar2;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar5 = *(long *)(unaff_x22 + 0x78);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x68);
  (**(code **)(**(long **)(lVar5 + 0x38) + 0x88))();
  lVar1 = *param_1;
  *param_1 = lVar1 + 1;
  *(long *)(unaff_x22 + 0x20) = lVar5;
  *(long *)(unaff_x22 + 0x28) = lVar1;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar6;
  *(long *)(unaff_x22 + 0x50) = lVar5;
  *(long *)(unaff_x22 + 0x58) = lVar1;
  bVar2 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar2 & 1) != 0) {
    plVar3 = (long *)(ulong)*(uint *)(PTR__withTaskCancellationHandler_100eaefb8 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x80) = plVar3;
    FUN_1000f7830(&DAT_100fecdd0,&DAT_100c84b48);
    *plVar3 = unaff_x22;
    plVar3[1] = (long)thunk_FUN_100916a48;
    Swift::_withTaskCancellationHandler();
    return;
  }
  pcVar4 = FUN_10091409c;
  _swift_task_addCancellationHandler(FUN_10091409c,unaff_x22 + 0x40);
  *(code **)(unaff_x22 + 0x88) = pcVar4;
  plVar3 = (long *)0xc0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x90) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1009165ec;
  FUN_10091856c(*(undefined8 *)(unaff_x22 + 0x78),lVar1,*(undefined8 *)(unaff_x22 + 0x68),
                *(undefined8 *)(unaff_x22 + 0x70));
  return;
}



/* Address: 0x1009171d4 | FUN_1009171d4 */

void FUN_1009171d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xc0) = param_3;
  *(undefined8 *)(unaff_x22 + 200) = param_4;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_1;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_2;
  _swift_task_switch(FUN_1009171f0,0,0);
  return;
}



/* Address: 0x1009171f0 | FUN_1009171f0 */

void FUN_1009171f0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  long *plVar6;
  UnsafeContinuation<undefined,undefined> continuation;
  undefined *puVar7;
  ulong uVar8;
  long unaff_x22;
  long lVar9;
  String isolation;
  String function;
  
  *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0xb0);
  *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0xb8);
  *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(unaff_x22 + 200);
  *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(unaff_x22 + 0xc0);
  bVar5 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar5 & 1) != 0) {
    plVar6 = (long *)(ulong)*(uint *)(PTR__withCheckedThrowingContinuation_100eaefc8 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xd0) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_1009173f8;
    isolation.bridgeObject = (void *)0x0;
    isolation.str = (char *)(unaff_x22 + 0x80);
    Swift::_withCheckedThrowingContinuation(isolation);
    return;
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar3 = *(undefined8 *)(unaff_x22 + 200);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xb8);
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x98;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_10091746c;
  continuation.unknown = (undefined *)(unaff_x22 + 0x10);
  _swift_continuation_init(continuation.unknown,1);
  puVar7 = &DAT_100fece40;
  FUN_1000f7830(&DAT_100fece40,&DAT_100c84e88);
  lVar9 = *(long *)(puVar7 + -8);
  uVar8 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar8);
  FUN_1000f7830(&DAT_100febaf0,&DAT_100c83800);
  function.bridgeObject = (void *)0xef293a5f28657669;
  function.str = (char *)0x74634166496e7572;
  Swift::CheckedContinuation::init(continuation,function);
  FUN_1009187bc(uVar8,uVar2,uVar4,uVar1,uVar3,&DAT_100fece40,&DAT_100c84e88,&DAT_100f18410,
                FUN_10092cedc);
  (**(code **)(lVar9 + 8))(uVar8,puVar7);
  _swift_task_dealloc(uVar8);
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}



/* Address: 0x1009173f8 | FUN_1009173f8 */

void FUN_1009173f8(void)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0xd0));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010091743c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100917468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))
            (*(undefined8 *)(lVar1 + 0x80),*(undefined8 *)(lVar1 + 0x88),
             (ulong)*(uint7 *)(lVar1 + 0x90));
  return;
}



/* Address: 0x10091746c | FUN_10091746c */

void FUN_10091746c(void)

{
  long lVar1;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  if (*(long *)(lVar1 + 0x30) != 0) {
    _swift_willThrow();
                    /* WARNING: Could not recover jumptable at 0x0001009174bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
  *(undefined8 *)(lVar1 + 0x80) = *(undefined8 *)(lVar1 + 0x98);
  *(undefined8 *)(lVar1 + 0x88) = *(undefined8 *)(lVar1 + 0xa0);
                    /* WARNING: Could not recover jumptable at 0x0001009174fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))
            (*(undefined8 *)(lVar1 + 0x98),*(undefined8 *)(lVar1 + 0xa0),
             (ulong)*(uint7 *)(lVar1 + 0xa8));
  return;
}



/* Address: 0x100917500 | FUN_100917500 */

void FUN_100917500(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x98) = param_4;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_5;
  *(undefined8 *)(unaff_x22 + 0x88) = param_2;
  *(undefined8 *)(unaff_x22 + 0x90) = param_3;
  *(undefined8 *)(unaff_x22 + 0x80) = param_1;
  _swift_task_switch(FUN_100917520,0,0);
  return;
}



/* Address: 0x100917520 | FUN_100917520 */

void FUN_100917520(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  long *plVar6;
  UnsafeContinuation<undefined,undefined> continuation;
  undefined *puVar7;
  ulong uVar8;
  long unaff_x22;
  long lVar9;
  String isolation;
  String function;
  
  *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0x88);
  *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0x90);
  *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(unaff_x22 + 0xa0);
  *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(unaff_x22 + 0x98);
  bVar5 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar5 & 1) != 0) {
    plVar6 = (long *)(ulong)*(uint *)(PTR__withCheckedThrowingContinuation_100eaefc8 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xa8) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_100830684;
    isolation.str = *(ulong *)(unaff_x22 + 0x80);
    isolation.bridgeObject = (void *)0x0;
    Swift::_withCheckedThrowingContinuation(isolation);
    return;
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x90);
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_1005da450;
  continuation.unknown = (undefined *)(unaff_x22 + 0x10);
  _swift_continuation_init(continuation.unknown,1);
  puVar7 = &DAT_100fecbc0;
  FUN_1000f7830(&DAT_100fecbc0,&DAT_100c84878);
  lVar9 = *(long *)(puVar7 + -8);
  uVar8 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar8);
  FUN_1000f7830(&DAT_100febaf0,&DAT_100c83800);
  function.bridgeObject = (void *)0xef293a5f28657669;
  function.str = (char *)0x74634166496e7572;
  Swift::CheckedContinuation::init(continuation,function);
  FUN_1009187bc(uVar8,uVar2,uVar4,uVar1,uVar3,&DAT_100fecbc0,&DAT_100c84878,&DAT_100f183e8,
                FUN_10092cd70);
  (**(code **)(lVar9 + 8))(uVar8,puVar7);
  _swift_task_dealloc(uVar8);
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}



/* Address: 0x100917728 | FUN_100917728 */

void FUN_100917728(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa0) = param_3;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_4;
  *(undefined8 *)(unaff_x22 + 0x90) = param_1;
  *(undefined8 *)(unaff_x22 + 0x98) = param_2;
  _swift_task_switch(FUN_100917744,0,0);
  return;
}



/* Address: 0x100917744 | FUN_100917744 */

void FUN_100917744(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  long *plVar6;
  UnsafeContinuation<undefined,undefined> continuation;
  undefined *puVar7;
  ulong uVar8;
  long unaff_x22;
  long lVar9;
  String isolation;
  String function;
  
  *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0x90);
  *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0x98);
  *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(unaff_x22 + 0xa8);
  *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(unaff_x22 + 0xa0);
  bVar5 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar5 & 1) != 0) {
    plVar6 = (long *)(ulong)*(uint *)(PTR__withCheckedThrowingContinuation_100eaefc8 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xb0) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)thunk_FUN_100917ea0;
    isolation.bridgeObject = (void *)0x0;
    isolation.str = (char *)(unaff_x22 + 0x80);
    Swift::_withCheckedThrowingContinuation(isolation);
    return;
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x98);
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x88;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = thunk_FUN_100917f00;
  continuation.unknown = (undefined *)(unaff_x22 + 0x10);
  _swift_continuation_init(continuation.unknown,1);
  puVar7 = &DAT_100fece38;
  FUN_1000f7830(&DAT_100fece38,&DAT_100c84e50);
  lVar9 = *(long *)(puVar7 + -8);
  uVar8 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar8);
  FUN_1000f7830(&DAT_100febaf0,&DAT_100c83800);
  function.bridgeObject = (void *)0xef293a5f28657669;
  function.str = (char *)0x74634166496e7572;
  Swift::CheckedContinuation::init(continuation,function);
  FUN_1009187bc(uVar8,uVar2,uVar4,uVar1,uVar3,&DAT_100fece38,&DAT_100c84e50,&DAT_100f183c0,
                FUN_10092cc78);
  (**(code **)(lVar9 + 8))(uVar8,puVar7);
  _swift_task_dealloc(uVar8);
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}



/* Address: 0x10091794c | FUN_10091794c */

void FUN_10091794c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xc0) = param_3;
  *(undefined8 *)(unaff_x22 + 200) = param_4;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_1;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_2;
  _swift_task_switch(FUN_100917968,0,0);
  return;
}



/* Address: 0x100917968 | FUN_100917968 */

void FUN_100917968(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  long *plVar6;
  UnsafeContinuation<undefined,undefined> continuation;
  undefined *puVar7;
  ulong uVar8;
  long unaff_x22;
  long lVar9;
  String isolation;
  String function;
  
  *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0xb0);
  *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0xb8);
  *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(unaff_x22 + 200);
  *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(unaff_x22 + 0xc0);
  bVar5 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar5 & 1) != 0) {
    plVar6 = (long *)(ulong)*(uint *)(PTR__withCheckedThrowingContinuation_100eaefc8 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xd0) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_100917b70;
    isolation.bridgeObject = (void *)0x0;
    isolation.str = (char *)(unaff_x22 + 0x80);
    Swift::_withCheckedThrowingContinuation(isolation);
    return;
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar3 = *(undefined8 *)(unaff_x22 + 200);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xb8);
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x98;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_100917be4;
  continuation.unknown = (undefined *)(unaff_x22 + 0x10);
  _swift_continuation_init(continuation.unknown,1);
  puVar7 = &DAT_100fece20;
  FUN_1000f7830(&DAT_100fece20,&DAT_100c84e28);
  lVar9 = *(long *)(puVar7 + -8);
  uVar8 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar8);
  FUN_1000f7830(&DAT_100febaf0,&DAT_100c83800);
  function.bridgeObject = (void *)0xef293a5f28657669;
  function.str = (char *)0x74634166496e7572;
  Swift::CheckedContinuation::init(continuation,function);
  FUN_1009187bc(uVar8,uVar2,uVar4,uVar1,uVar3,&DAT_100fece20,&DAT_100c84e28,&DAT_100f18398,
                FUN_10092cb18);
  (**(code **)(lVar9 + 8))(uVar8,puVar7);
  _swift_task_dealloc(uVar8);
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}



/* Address: 0x100917b70 | FUN_100917b70 */

void FUN_100917b70(void)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0xd0));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000100917bb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100917be0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))
            (*(undefined8 *)(lVar1 + 0x80),*(undefined8 *)(lVar1 + 0x88),
             (ulong)*(uint7 *)(lVar1 + 0x90));
  return;
}



/* Address: 0x100917be4 | FUN_100917be4 */

void FUN_100917be4(void)

{
  long lVar1;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  if (*(long *)(lVar1 + 0x30) != 0) {
    _swift_willThrow();
                    /* WARNING: Could not recover jumptable at 0x000100917c34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100917c64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))
            (*(undefined8 *)(lVar1 + 0x98),*(undefined8 *)(lVar1 + 0xa0),
             (ulong)*(uint7 *)(lVar1 + 0xa8));
  return;
}



/* Address: 0x100917c68 | FUN_100917c68 */

void FUN_100917c68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa0) = param_3;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_4;
  *(undefined8 *)(unaff_x22 + 0x90) = param_1;
  *(undefined8 *)(unaff_x22 + 0x98) = param_2;
  _swift_task_switch(FUN_100917c84,0,0);
  return;
}



/* Address: 0x100917c84 | FUN_100917c84 */

void FUN_100917c84(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  long *plVar6;
  UnsafeContinuation<undefined,undefined> continuation;
  undefined *puVar7;
  ulong uVar8;
  long unaff_x22;
  long lVar9;
  String isolation;
  String function;
  
  *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0x90);
  *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0x98);
  *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(unaff_x22 + 0xa8);
  *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(unaff_x22 + 0xa0);
  bVar5 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar5 & 1) != 0) {
    plVar6 = (long *)(ulong)*(uint *)(PTR__withCheckedThrowingContinuation_100eaefc8 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xb0) = plVar6;
    FUN_100654ce4(0);
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_100917ea0;
    isolation.bridgeObject = (void *)0x0;
    isolation.str = (char *)(unaff_x22 + 0x80);
    Swift::_withCheckedThrowingContinuation(isolation);
    return;
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x98);
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x88;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_100917f00;
  continuation.unknown = (undefined *)(unaff_x22 + 0x10);
  _swift_continuation_init(continuation.unknown,1);
  puVar7 = &DAT_100fece18;
  FUN_1000f7830(&DAT_100fece18,&DAT_100c84e08);
  lVar9 = *(long *)(puVar7 + -8);
  uVar8 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar8);
  FUN_100654ce4(0);
  FUN_1000f7830(&DAT_100febaf0,&DAT_100c83800);
  function.bridgeObject = (void *)0xef293a5f28657669;
  function.str = (char *)0x74634166496e7572;
  Swift::CheckedContinuation::init(continuation,function);
  FUN_1009187bc(uVar8,uVar2,uVar4,uVar1,uVar3,&DAT_100fece18,&DAT_100c84e08,&DAT_100f18370,
                FUN_10092ca14);
  (**(code **)(lVar9 + 8))(uVar8,puVar7);
  _swift_task_dealloc(uVar8);
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}



/* Address: 0x100917ea0 | FUN_100917ea0 */

void FUN_100917ea0(void)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0xb0));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000100917ee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100917efc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))(*(undefined8 *)(lVar1 + 0x80));
  return;
}



/* Address: 0x100917f00 | FUN_100917f00 */

void FUN_100917f00(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  if (*(long *)(*unaff_x22 + 0x30) != 0) {
    _swift_willThrow();
                    /* WARNING: Could not recover jumptable at 0x000100917f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100917f6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(*(undefined8 *)(*unaff_x22 + 0x88));
  return;
}



/* Address: 0x100917f70 | FUN_100917f70 */

void FUN_100917f70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x128) = param_4;
  *(undefined8 *)(unaff_x22 + 0x130) = param_5;
  *(undefined8 *)(unaff_x22 + 0x118) = param_2;
  *(undefined8 *)(unaff_x22 + 0x120) = param_3;
  *(undefined8 *)(unaff_x22 + 0x110) = param_1;
  _swift_task_switch(FUN_100917f90,0,0);
  return;
}



/* Address: 0x100917f90 | FUN_100917f90 */

void FUN_100917f90(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  long *plVar6;
  UnsafeContinuation<undefined,undefined> continuation;
  undefined *puVar7;
  ulong uVar8;
  long unaff_x22;
  long lVar9;
  String isolation;
  String function;
  
  *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0x118);
  *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0x120);
  *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(unaff_x22 + 0x130);
  *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(unaff_x22 + 0x128);
  bVar5 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar5 & 1) != 0) {
    plVar6 = (long *)(ulong)*(uint *)(PTR__withCheckedThrowingContinuation_100eaefc8 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x138) = plVar6;
    FUN_1008d4df0(0);
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_1009181b0;
    isolation.str = *(ulong *)(unaff_x22 + 0x110);
    isolation.bridgeObject = (void *)0x0;
    Swift::_withCheckedThrowingContinuation(isolation);
    return;
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x120);
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x80;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_1009181f4;
  continuation.unknown = (undefined *)(unaff_x22 + 0x10);
  _swift_continuation_init(continuation.unknown,1);
  puVar7 = &DAT_100fece10;
  FUN_1000f7830(&DAT_100fece10,&DAT_100c84de8);
  lVar9 = *(long *)(puVar7 + -8);
  uVar8 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar8);
  FUN_1008d4df0(0);
  FUN_1000f7830(&DAT_100febaf0,&DAT_100c83800);
  function.bridgeObject = (void *)0xef293a5f28657669;
  function.str = (char *)0x74634166496e7572;
  Swift::CheckedContinuation::init(continuation,function);
  FUN_1009187bc(uVar8,uVar2,uVar4,uVar1,uVar3,&DAT_100fece10,&DAT_100c84de8,&DAT_100f18348,
                FUN_10092c908);
  (**(code **)(lVar9 + 8))(uVar8,puVar7);
  _swift_task_dealloc(uVar8);
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}



/* Address: 0x1009181b0 | FUN_1009181b0 */

void FUN_1009181b0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x138));
                    /* WARNING: Could not recover jumptable at 0x0001009181f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Address: 0x1009181f4 | FUN_1009181f4 */

void FUN_1009181f4(void)

{
  long lVar1;
  undefined8 *puVar2;
  long *unaff_x22;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar1 = *unaff_x22;
  lVar3 = *unaff_x22;
  if (*(long *)(lVar1 + 0x30) == 0) {
    puVar2 = *(undefined8 **)(lVar1 + 0x110);
    uVar4 = *(undefined8 *)(lVar1 + 0x80);
    puVar2[1] = *(undefined8 *)(lVar1 + 0x88);
    *puVar2 = uVar4;
    uVar5 = *(undefined8 *)(lVar1 + 0x98);
    uVar4 = *(undefined8 *)(lVar1 + 0x90);
    uVar7 = *(undefined8 *)(lVar1 + 0xa8);
    uVar6 = *(undefined8 *)(lVar1 + 0xa0);
    uVar8 = *(undefined8 *)(lVar1 + 0xb0);
    uVar10 = *(undefined8 *)(lVar1 + 200);
    uVar9 = *(undefined8 *)(lVar1 + 0xc0);
    puVar2[7] = *(undefined8 *)(lVar1 + 0xb8);
    puVar2[6] = uVar8;
    puVar2[9] = uVar10;
    puVar2[8] = uVar9;
    puVar2[3] = uVar5;
    puVar2[2] = uVar4;
    puVar2[5] = uVar7;
    puVar2[4] = uVar6;
    uVar5 = *(undefined8 *)(lVar1 + 0xd8);
    uVar4 = *(undefined8 *)(lVar1 + 0xd0);
    uVar7 = *(undefined8 *)(lVar1 + 0xe8);
    uVar6 = *(undefined8 *)(lVar1 + 0xe0);
    uVar8 = *(undefined8 *)(lVar1 + 0xf0);
    uVar10 = *(undefined8 *)(lVar1 + 0x108);
    uVar9 = *(undefined8 *)(lVar1 + 0x100);
    puVar2[0xf] = *(undefined8 *)(lVar1 + 0xf8);
    puVar2[0xe] = uVar8;
    puVar2[0x11] = uVar10;
    puVar2[0x10] = uVar9;
    puVar2[0xb] = uVar5;
    puVar2[10] = uVar4;
    puVar2[0xd] = uVar7;
    puVar2[0xc] = uVar6;
  }
  else {
    _swift_willThrow();
  }
                    /* WARNING: Could not recover jumptable at 0x000100918274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))();
  return;
}



/* Address: 0x100918278 | FUN_100918278 */

void FUN_100918278(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xb0) = param_3;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_4;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_1;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_2;
  _swift_task_switch(FUN_100918294,0,0);
  return;
}



/* Address: 0x100918294 | FUN_100918294 */

void FUN_100918294(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  long *plVar6;
  UnsafeContinuation<undefined,undefined> continuation;
  undefined *puVar7;
  ulong uVar8;
  long unaff_x22;
  long lVar9;
  String isolation;
  String function;
  
  *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0xa0);
  *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0xa8);
  *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(unaff_x22 + 0xb8);
  *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(unaff_x22 + 0xb0);
  bVar5 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar5 & 1) != 0) {
    plVar6 = (long *)(ulong)*(uint *)(PTR__withCheckedThrowingContinuation_100eaefc8 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xc0) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_10091849c;
    isolation.bridgeObject = (void *)0x0;
    isolation.str = (char *)(unaff_x22 + 0x80);
    Swift::_withCheckedThrowingContinuation(isolation);
    return;
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xa8);
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x90;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_1009184fc;
  continuation.unknown = (undefined *)(unaff_x22 + 0x10);
  _swift_continuation_init(continuation.unknown,1);
  puVar7 = &DAT_100fecdf0;
  FUN_1000f7830(&DAT_100fecdf0,&DAT_100c84db8);
  lVar9 = *(long *)(puVar7 + -8);
  uVar8 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar8);
  FUN_1000f7830(&DAT_100febaf0,&DAT_100c83800);
  function.bridgeObject = (void *)0xef293a5f28657669;
  function.str = (char *)0x74634166496e7572;
  Swift::CheckedContinuation::init(continuation,function);
  FUN_1009187bc(uVar8,uVar2,uVar4,uVar1,uVar3,&DAT_100fecdf0,&DAT_100c84db8,&DAT_100f18320,
                FUN_10092c810);
  (**(code **)(lVar9 + 8))(uVar8,puVar7);
  _swift_task_dealloc(uVar8);
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}



/* Address: 0x10091849c | FUN_10091849c */

void FUN_10091849c(void)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0xc0));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001009184e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001009184f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))(*(undefined8 *)(lVar1 + 0x80),*(undefined8 *)(lVar1 + 0x88));
  return;
}



/* Address: 0x1009184fc | FUN_1009184fc */

void FUN_1009184fc(void)

{
  long lVar1;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  if (*(long *)(lVar1 + 0x30) != 0) {
    _swift_willThrow();
                    /* WARNING: Could not recover jumptable at 0x00010091854c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100918568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))(*(undefined8 *)(lVar1 + 0x90),*(undefined8 *)(lVar1 + 0x98));
  return;
}



/* Address: 0x10091856c | FUN_10091856c */

void FUN_10091856c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa0) = param_3;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_4;
  *(undefined8 *)(unaff_x22 + 0x90) = param_1;
  *(undefined8 *)(unaff_x22 + 0x98) = param_2;
  _swift_task_switch(FUN_100918588,0,0);
  return;
}



/* Address: 0x100918588 | FUN_100918588 */

void FUN_100918588(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  long *plVar6;
  UnsafeContinuation<undefined,undefined> continuation;
  undefined *puVar7;
  ulong uVar8;
  long unaff_x22;
  long lVar9;
  String isolation;
  String function;
  
  *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0x90);
  *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0x98);
  *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(unaff_x22 + 0xa8);
  *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(unaff_x22 + 0xa0);
  bVar5 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar5 & 1) != 0) {
    plVar6 = (long *)(ulong)*(uint *)(PTR__withCheckedThrowingContinuation_100eaefc8 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xb0) = plVar6;
    FUN_1000f7830(&DAT_100fecdd0,&DAT_100c84b48);
    *plVar6 = unaff_x22;
    plVar6[1] = (long)thunk_FUN_100917ea0;
    isolation.bridgeObject = (void *)0x0;
    isolation.str = (char *)(unaff_x22 + 0x80);
    Swift::_withCheckedThrowingContinuation(isolation);
    return;
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x98);
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x88;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = thunk_FUN_100917f00;
  continuation.unknown = (undefined *)(unaff_x22 + 0x10);
  _swift_continuation_init(continuation.unknown,1);
  puVar7 = &DAT_100fecde8;
  FUN_1000f7830(&DAT_100fecde8,&DAT_100c84d90);
  lVar9 = *(long *)(puVar7 + -8);
  uVar8 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar8);
  FUN_1000f7830(&DAT_100fecdd0,&DAT_100c84b48);
  FUN_1000f7830(&DAT_100febaf0,&DAT_100c83800);
  function.bridgeObject = (void *)0xef293a5f28657669;
  function.str = (char *)0x74634166496e7572;
  Swift::CheckedContinuation::init(continuation,function);
  FUN_1009187bc(uVar8,uVar2,uVar4,uVar1,uVar3,&DAT_100fecde8,&DAT_100c84d90,&DAT_100f182f8,
                FUN_10092c70c);
  (**(code **)(lVar9 + 8))(uVar8,puVar7);
  _swift_task_dealloc(uVar8);
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}



/* Address: 0x1009187bc | FUN_1009187bc */

void FUN_1009187bc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,long param_8,undefined8 param_9
                  )

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  CancellationError CVar6;
  CancellationError CVar7;
  bool bVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  long lVar14;
  long lVar15;
  String SVar16;
  undefined8 uStack_c0;
  undefined4 auStack_b8 [2];
  undefined8 local_b0;
  long local_a8;
  undefined *local_98;
  ulong local_90 [3];
  undefined1 auStack_78 [24];
  
  local_b0 = param_3;
  local_a8 = param_8;
  FUN_1000f7830(param_6,param_7);
  lVar14 = *(long *)(param_6 + -8);
  lVar15 = *(long *)(lVar14 + 0x40);
  uVar9 = lVar15 + 0xfU & 0xfffffffffffffff0;
  lVar11 = (long)&local_b0 - uVar9;
  pcVar13 = *(code **)(lVar14 + 0x10);
  (*pcVar13)(lVar11,param_1,param_6);
  lVar12 = lVar11 - uVar9;
  (*pcVar13)(lVar12,lVar11,param_6);
  uVar9 = (ulong)*(byte *)(lVar14 + 0x50);
  uVar10 = uVar9 + 0x20 & (uVar9 ^ 0xffffffffffffffff);
  lVar4 = local_a8;
  _swift_allocObject(local_a8,uVar10 + lVar15,uVar9 | 7);
  *(undefined8 *)(lVar4 + 0x10) = param_4;
  *(undefined8 *)(lVar4 + 0x18) = param_5;
  (**(code **)(lVar14 + 0x20))(lVar4 + uVar10,lVar11,param_6);
  lVar15 = *(long *)(param_2 + 0x10);
  lVar11 = *(long *)(lVar15 + 0x10);
  _swift_retain(param_5);
  iVar3 = _pthread_mutex_lock((pthread_mutex_t *)(lVar11 + 0x10));
  if (iVar3 != 0) {
                    /* WARNING: Does not return */
    pcVar13 = (code *)SoftwareBreakpoint(1,0x100918a30);
    (*pcVar13)();
  }
  bVar8 = true;
  _swift_beginAccess(param_2 + 0x20,auStack_78,1,0);
  bVar1 = *(byte *)(param_2 + 0x28);
  uVar9 = (ulong)bVar1;
  if (bVar1 != 0) {
    uVar9 = *(ulong *)(param_2 + 0x20);
    if (bVar1 == 1) {
      *(undefined8 *)(param_2 + 0x20) = 1;
      *(undefined1 *)(param_2 + 0x28) = 2;
      lVar11 = *(long *)(uVar9 + 0x18);
      local_90[0] = uVar9;
      if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x100918a40);
        (*pcVar13)();
      }
      uVar10 = uVar9;
      _swift_isUniquelyReferenced_nonNull_native();
      if ((*(long *)(uVar9 + 0x10) < lVar11 + 1) || ((uVar10 & 1) == 0)) {
        FUN_1009434a8();
        uVar9 = local_90[0];
      }
      FUN_100943cc4(uVar9 + 0x10,uVar9 + 0x28,param_9,lVar4,local_b0,0);
      uVar5 = *(undefined8 *)(param_2 + 0x20);
      *(ulong *)(param_2 + 0x20) = uVar9;
      uVar2 = *(undefined1 *)(param_2 + 0x28);
      uVar9 = 1;
      *(undefined1 *)(param_2 + 0x28) = 1;
      FUN_10090fdd4(uVar5,uVar2);
      bVar8 = false;
    }
    else {
      if (uVar9 != 0) {
        *(undefined4 *)(lVar12 + -8) = 0;
        *(undefined8 *)(lVar12 + -0x10) = 200;
        SVar16.bridgeObject = (void *)0x2;
        SVar16.str = (char *)0xb;
        Swift::_assertionFailure
                  ((StaticString)0x100d8deb0,SVar16,(StaticString)0xd000000000000017,
                   0x8000000100db4ab0,0xdb4ab0);
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x100918a94);
        (*pcVar13)();
      }
      uVar9 = 0;
      bVar8 = true;
    }
  }
  _swift_beginAccess(lVar15 + 0x18,local_90,1,0);
  if (!SCARRY8(*(long *)(lVar15 + 0x18),uVar9)) {
    *(ulong *)(lVar15 + 0x18) = *(long *)(lVar15 + 0x18) + uVar9;
    iVar3 = _pthread_mutex_unlock((pthread_mutex_t *)(*(long *)(lVar15 + 0x10) + 0x10));
    if (iVar3 != 0) {
                    /* WARNING: Does not return */
      pcVar13 = (code *)SoftwareBreakpoint(1,0x100918a38);
      (*pcVar13)();
    }
    if (bVar8) {
      CVar6 = Swift::CancellationError::typeMetadataAccessor();
      CVar7 = CVar6;
      FUN_100915560();
      _swift_allocError(CVar6.unknown,CVar7.unknown,0,0);
      Swift::CancellationError::init();
      local_98 = CVar6.unknown;
      Swift::CheckedContinuation::resume(&local_98,param_6);
    }
    else {
      iVar3 = _pthread_cond_signal(*(pthread_cond_t **)(lVar15 + 0x20));
      if (iVar3 != 0) {
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x100918a3c);
        (*pcVar13)();
      }
    }
    _swift_release(lVar4);
    (**(code **)(lVar14 + 8))(lVar12,param_6);
    return;
  }
                    /* WARNING: Does not return */
  pcVar13 = (code *)SoftwareBreakpoint(1,0x100918a34);
  (*pcVar13)();
}



/* Address: 0x100918a94 | FUN_100918a94 */

/* WARNING: Removing unreachable block (ram,0x000100918b04) */

void FUN_100918a94(char param_1,code *param_2)

{
  CancellationError CVar1;
  CancellationError CVar2;
  undefined *puVar3;
  undefined *local_48 [3];
  
  if (param_1 == '\x01') {
    CVar1 = Swift::CancellationError::typeMetadataAccessor();
    CVar2 = CVar1;
    FUN_100915560();
    _swift_allocError(CVar1.unknown,CVar2.unknown,0,0);
    Swift::CancellationError::init();
    puVar3 = &DAT_100fece40;
    local_48[0] = CVar1.unknown;
    FUN_1000f7830(&DAT_100fece40,&DAT_100c84e88);
    Swift::CheckedContinuation::resume(local_48,puVar3);
  }
  else {
    (*param_2)(local_48);
    puVar3 = &DAT_100fece40;
    FUN_1000f7830(&DAT_100fece40,&DAT_100c84e88);
    Swift::CheckedContinuation::resume(local_48,puVar3);
  }
  return;
}



/* Address: 0x100918b90 | FUN_100918b90 */

/* WARNING: Removing unreachable block (ram,0x000100918c00) */

void FUN_100918b90(char param_1,code *param_2)

{
  CancellationError CVar1;
  CancellationError CVar2;
  undefined *puVar3;
  undefined *local_40 [2];
  
  if (param_1 == '\x01') {
    CVar1 = Swift::CancellationError::typeMetadataAccessor();
    CVar2 = CVar1;
    FUN_100915560();
    _swift_allocError(CVar1.unknown,CVar2.unknown,0,0);
    Swift::CancellationError::init();
    puVar3 = &DAT_100fecbc0;
    local_40[0] = CVar1.unknown;
    FUN_1000f7830(&DAT_100fecbc0,&DAT_100c84878);
    Swift::CheckedContinuation::resume(local_40,puVar3);
  }
  else {
    (*param_2)(local_40);
    FUN_1000f7830(&DAT_100fecbc0,&DAT_100c84878);
    Swift::CheckedContinuation::resume();
  }
  return;
}



/* Address: 0x100918c60 | FUN_100918c60 */

/* WARNING: Removing unreachable block (ram,0x000100918cd0) */

void FUN_100918c60(char param_1,code *param_2)

{
  CancellationError CVar1;
  CancellationError CVar2;
  undefined *puVar3;
  undefined *local_38;
  
  if (param_1 == '\x01') {
    CVar1 = Swift::CancellationError::typeMetadataAccessor();
    CVar2 = CVar1;
    FUN_100915560();
    _swift_allocError(CVar1.unknown,CVar2.unknown,0,0);
    Swift::CancellationError::init();
    puVar3 = &DAT_100fece38;
    local_38 = CVar1.unknown;
    FUN_1000f7830(&DAT_100fece38,&DAT_100c84e50);
    Swift::CheckedContinuation::resume(&local_38,puVar3);
  }
  else {
    (*param_2)(&local_38);
    puVar3 = &DAT_100fece38;
    FUN_1000f7830(&DAT_100fece38,&DAT_100c84e50);
    Swift::CheckedContinuation::resume(&local_38,puVar3);
  }
  return;
}



/* Address: 0x100918d3c | FUN_100918d3c */

/* WARNING: Removing unreachable block (ram,0x000100918dac) */

void FUN_100918d3c(char param_1,code *param_2)

{
  CancellationError CVar1;
  CancellationError CVar2;
  undefined *puVar3;
  undefined *local_48 [3];
  
  if (param_1 == '\x01') {
    CVar1 = Swift::CancellationError::typeMetadataAccessor();
    CVar2 = CVar1;
    FUN_100915560();
    _swift_allocError(CVar1.unknown,CVar2.unknown,0,0);
    Swift::CancellationError::init();
    puVar3 = &DAT_100fece20;
    local_48[0] = CVar1.unknown;
    FUN_1000f7830(&DAT_100fece20,&DAT_100c84e28);
    Swift::CheckedContinuation::resume(local_48,puVar3);
  }
  else {
    (*param_2)(local_48);
    puVar3 = &DAT_100fece20;
    FUN_1000f7830(&DAT_100fece20,&DAT_100c84e28);
    Swift::CheckedContinuation::resume(local_48,puVar3);
  }
  return;
}



/* Address: 0x100918e30 | FUN_100918e30 */

/* WARNING: Removing unreachable block (ram,0x000100918ea0) */

void FUN_100918e30(char param_1,code *param_2)

{
  CancellationError CVar1;
  CancellationError CVar2;
  undefined *puVar3;
  undefined *local_38;
  
  if (param_1 == '\x01') {
    CVar1 = Swift::CancellationError::typeMetadataAccessor();
    CVar2 = CVar1;
    FUN_100915560();
    _swift_allocError(CVar1.unknown,CVar2.unknown,0,0);
    Swift::CancellationError::init();
    puVar3 = &DAT_100fece18;
    local_38 = CVar1.unknown;
    FUN_1000f7830(&DAT_100fece18,&DAT_100c84e08);
    Swift::CheckedContinuation::resume(&local_38,puVar3);
  }
  else {
    (*param_2)(&local_38);
    puVar3 = &DAT_100fece18;
    FUN_1000f7830(&DAT_100fece18,&DAT_100c84e08);
    Swift::CheckedContinuation::resume(&local_38,puVar3);
  }
  return;
}



/* Address: 0x100918f0c | FUN_100918f0c */

/* WARNING: Removing unreachable block (ram,0x000100918f98) */

void FUN_100918f0c(char param_1,code *param_2)

{
  int iVar1;
  CancellationError CVar2;
  CancellationError CVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *local_340;
  undefined *puStack_338;
  undefined *local_330;
  undefined *puStack_328;
  undefined *puStack_320;
  undefined *puStack_318;
  undefined *local_310;
  undefined *puStack_308;
  undefined *puStack_300;
  undefined *puStack_2f8;
  undefined *local_2f0;
  undefined *puStack_2e8;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  undefined *local_2d0;
  undefined *puStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined *local_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined1 local_220;
  undefined *local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined1 local_180;
  undefined *local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 local_e0;
  undefined *local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
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
  undefined1 local_40;
  
  if (param_1 == '\x01') {
    CVar2 = Swift::CancellationError::typeMetadataAccessor();
    CVar3 = CVar2;
    FUN_100915560();
    _swift_allocError(CVar2.unknown,CVar3.unknown,0,0);
    Swift::CancellationError::init();
    puVar5 = &DAT_100fece10;
    local_d0 = CVar2.unknown;
    FUN_1000f7830(&DAT_100fece10,&DAT_100c84de8);
    ppuVar4 = &local_d0;
  }
  else {
    (*param_2)(&local_170);
    FUN_1005b8d54(&local_170);
    uStack_1a8 = uStack_108;
    local_1b0 = local_110;
    uStack_198 = uStack_f8;
    uStack_1a0 = uStack_100;
    uStack_188 = uStack_e8;
    local_190 = local_f0;
    local_180 = local_e0;
    uStack_1e8 = uStack_148;
    local_1f0 = local_150;
    uStack_1d8 = uStack_138;
    uStack_1e0 = uStack_140;
    uStack_1c8 = uStack_128;
    local_1d0 = local_130;
    uStack_1b8 = uStack_118;
    uStack_1c0 = uStack_120;
    uStack_208 = uStack_168;
    local_210 = local_170;
    uStack_1f8 = uStack_158;
    uStack_200 = uStack_160;
    iVar1 = (int)&local_210;
    FUN_10092c924();
    if (iVar1 != 1) {
      uStack_248 = uStack_1a8;
      local_250 = local_1b0;
      uStack_238 = uStack_198;
      uStack_240 = uStack_1a0;
      uStack_228 = uStack_188;
      local_230 = local_190;
      local_220 = local_180;
      uStack_288 = uStack_1e8;
      local_290 = local_1f0;
      uStack_278 = uStack_1d8;
      uStack_280 = uStack_1e0;
      uStack_268 = uStack_1c8;
      local_270 = local_1d0;
      uStack_258 = uStack_1b8;
      uStack_260 = uStack_1c0;
      uStack_2a8 = uStack_208;
      local_2b0 = local_210;
      uStack_298 = uStack_1f8;
      uStack_2a0 = uStack_200;
      ppuVar4 = &local_2b0;
      FUN_100004520();
      puStack_338 = ppuVar4[1];
      local_340 = *ppuVar4;
      puStack_308 = ppuVar4[7];
      local_310 = ppuVar4[6];
      puStack_2f8 = ppuVar4[9];
      puStack_300 = ppuVar4[8];
      puStack_328 = ppuVar4[3];
      local_330 = ppuVar4[2];
      puStack_318 = ppuVar4[5];
      puStack_320 = ppuVar4[4];
      puStack_2c8 = ppuVar4[0xf];
      local_2d0 = ppuVar4[0xe];
      puStack_2b8 = ppuVar4[0x11];
      puStack_2c0 = ppuVar4[0x10];
      puStack_2e8 = ppuVar4[0xb];
      local_2f0 = ppuVar4[10];
      puStack_2d8 = ppuVar4[0xd];
      puStack_2e0 = ppuVar4[0xc];
      puVar5 = &DAT_100fece10;
      FUN_1000f7830(&DAT_100fece10,&DAT_100c84de8);
      Swift::CheckedContinuation::resume(&local_340,puVar5);
      return;
    }
    uStack_68 = uStack_1a8;
    local_70 = local_1b0;
    uStack_58 = uStack_198;
    uStack_60 = uStack_1a0;
    uStack_48 = uStack_188;
    local_50 = local_190;
    local_40 = local_180;
    uStack_a8 = uStack_1e8;
    local_b0 = local_1f0;
    uStack_98 = uStack_1d8;
    uStack_a0 = uStack_1e0;
    uStack_88 = uStack_1c8;
    local_90 = local_1d0;
    uStack_78 = uStack_1b8;
    uStack_80 = uStack_1c0;
    uStack_c8 = uStack_208;
    local_d0 = local_210;
    uStack_b8 = uStack_1f8;
    uStack_c0 = uStack_200;
    uStack_108 = uStack_1a8;
    local_110 = local_1b0;
    uStack_f8 = uStack_198;
    uStack_100 = uStack_1a0;
    uStack_e8 = uStack_188;
    local_f0 = local_190;
    local_e0 = local_180;
    uStack_148 = uStack_1e8;
    local_150 = local_1f0;
    uStack_138 = uStack_1d8;
    uStack_140 = uStack_1e0;
    uStack_128 = uStack_1c8;
    local_130 = local_1d0;
    uStack_118 = uStack_1b8;
    uStack_120 = uStack_1c0;
    uStack_168 = uStack_208;
    local_170 = local_210;
    uStack_158 = uStack_1f8;
    uStack_160 = uStack_200;
    ppuVar4 = &local_170;
    FUN_100004520();
    local_210 = *ppuVar4;
    puVar5 = &DAT_100fece10;
    FUN_1000f7830(&DAT_100fece10,&DAT_100c84de8);
    ppuVar4 = &local_210;
  }
  Swift::CheckedContinuation::resume(ppuVar4,puVar5);
  return;
}



/* Address: 0x100919120 | FUN_100919120 */

/* WARNING: Removing unreachable block (ram,0x000100919190) */

void FUN_100919120(char param_1,code *param_2)

{
  CancellationError CVar1;
  CancellationError CVar2;
  undefined *puVar3;
  undefined *local_40 [2];
  
  if (param_1 == '\x01') {
    CVar1 = Swift::CancellationError::typeMetadataAccessor();
    CVar2 = CVar1;
    FUN_100915560();
    _swift_allocError(CVar1.unknown,CVar2.unknown,0,0);
    Swift::CancellationError::init();
    puVar3 = &DAT_100fecdf0;
    local_40[0] = CVar1.unknown;
    FUN_1000f7830(&DAT_100fecdf0,&DAT_100c84db8);
    Swift::CheckedContinuation::resume(local_40,puVar3);
  }
  else {
    (*param_2)(local_40);
    puVar3 = &DAT_100fecdf0;
    FUN_1000f7830(&DAT_100fecdf0,&DAT_100c84db8);
    Swift::CheckedContinuation::resume(local_40,puVar3);
  }
  return;
}



/* Address: 0x1009191fc | FUN_1009191fc */

/* WARNING: Removing unreachable block (ram,0x00010091926c) */

void FUN_1009191fc(char param_1,code *param_2)

{
  CancellationError CVar1;
  CancellationError CVar2;
  undefined *puVar3;
  undefined *local_38;
  
  if (param_1 == '\x01') {
    CVar1 = Swift::CancellationError::typeMetadataAccessor();
    CVar2 = CVar1;
    FUN_100915560();
    _swift_allocError(CVar1.unknown,CVar2.unknown,0,0);
    Swift::CancellationError::init();
    puVar3 = &DAT_100fecde8;
    local_38 = CVar1.unknown;
    FUN_1000f7830(&DAT_100fecde8,&DAT_100c84d90);
    Swift::CheckedContinuation::resume(&local_38,puVar3);
  }
  else {
    (*param_2)(&local_38);
    puVar3 = &DAT_100fecde8;
    FUN_1000f7830(&DAT_100fecde8,&DAT_100c84d90);
    Swift::CheckedContinuation::resume(&local_38,puVar3);
  }
  return;
}



/* Address: 0x1009192d8 | FUN_1009192d8 */

undefined *
FUN_1009192d8(long param_1,undefined8 param_2,ulong param_3,void *param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined *param_9,
             char *param_10,code *param_11,undefined8 param_12,undefined *param_13)

{
  undefined8 uVar1;
  long lVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined8 uVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined8 uVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  long lVar30;
  undefined *puVar31;
  undefined *puVar32;
  undefined *puVar33;
  undefined8 uVar34;
  undefined *puVar35;
  undefined *puVar36;
  long lVar37;
  undefined *puVar38;
  undefined *puVar39;
  undefined *puVar40;
  undefined8 uVar41;
  undefined *puVar42;
  ulong uVar43;
  undefined *puVar44;
  long lVar45;
  undefined *puVar46;
  undefined *puVar47;
  undefined *puVar48;
  undefined8 uVar49;
  undefined8 *puVar50;
  undefined *puVar51;
  undefined *puVar52;
  char cVar53;
  char cVar54;
  char cVar55;
  _StringGuts _Var56;
  char *pcVar57;
  void *pvVar58;
  code *pcVar59;
  ulong uVar60;
  undefined8 uVar61;
  ulong uVar62;
  undefined8 uVar63;
  ulong uVar64;
  undefined8 uVar65;
  ulong uVar66;
  void *pvVar67;
  ulong uVar68;
  ulong uVar69;
  void *pvVar70;
  undefined8 uVar71;
  ulong uVar72;
  undefined8 uVar73;
  String SVar74;
  String SVar75;
  String SVar76;
  String SVar77;
  String SVar78;
  String SVar79;
  String SVar80;
  String SVar81;
  String SVar82;
  String SVar83;
  String SVar84;
  String SVar85;
  String SVar86;
  String SVar87;
  String SVar88;
  String SVar89;
  String SVar90;
  String SVar91;
  String SVar92;
  String SVar93;
  String SVar94;
  String SVar95;
  String SVar96;
  String SVar97;
  String SVar98;
  String SVar99;
  String SVar100;
  String SVar101;
  String SVar102;
  String SVar103;
  undefined *local_330;
  undefined *local_2a8;
  undefined *local_198;
  void *local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  void *local_158 [3];
  undefined8 local_140;
  undefined8 local_138;
  void *local_128 [3];
  undefined8 local_110;
  undefined8 uStack_108;
  void *local_f8 [3];
  undefined8 local_e0;
  undefined8 uStack_d8;
  void *local_c8 [3];
  undefined8 local_b0;
  undefined8 uStack_a8;
  void *local_98 [3];
  undefined8 local_80;
  undefined8 uStack_78;
  
  lVar7 = param_1;
  pvVar58 = param_4;
  FUN_100654dbc(param_1,param_2,param_3 & 0xffffffffffffff);
  lVar8 = param_1;
  FUN_100611db0(param_1,param_2,param_3 & 0xffffffffffffff);
  if ((long)param_4 < 1) {
                    /* WARNING: Does not return */
    pcVar59 = (code *)SoftwareBreakpoint(1,0x10091a5e8);
    (*pcVar59)();
  }
  uVar66 = 0;
  if (param_4 != (void *)0x0) {
    uVar66 = lVar7 / (long)param_4;
  }
  lVar14 = uVar66 + 1;
  if (SCARRY8(uVar66,1)) {
                    /* WARNING: Does not return */
    pcVar59 = (code *)SoftwareBreakpoint(1,0x10091a5ec);
    (*pcVar59)();
  }
  pvVar67 = (void *)(lVar7 - uVar66 * (long)param_4);
  local_198 = param_9;
  _swift_getObjectType();
  _Var56.unknown = PTR___type_metadata_for____100eae0c8 + 8;
  puVar9 = local_198;
  pcVar57 = param_10;
  FUN_1008f68cc();
  pvVar70 = param_4;
  if ((uVar66 == 0 || lVar14 < 1) && (pvVar70 = pvVar67, uVar66 != 0 || (long)pvVar67 < 1)) {
    FUN_10090d0b8(0,0,puVar9);
    return puVar9;
  }
  if ((ulong)pvVar70 >> 0x20 == 0) {
    puVar10 = &DAT_100f169a8;
    _swift_allocObject(&DAT_100f169a8,0x58,7);
    *(undefined **)(puVar10 + 0x10) = param_13;
    *(long *)(puVar10 + 0x18) = param_1;
    *(long *)(puVar10 + 0x20) = lVar8;
    puVar10[0x28] = 0;
    *(void **)(puVar10 + 0x30) = pvVar70;
    *(undefined8 *)(puVar10 + 0x38) = param_5;
    *(undefined8 *)(puVar10 + 0x40) = param_6;
    *(undefined8 *)(puVar10 + 0x48) = param_7;
    *(undefined8 *)(puVar10 + 0x50) = param_8;
    puVar11 = local_198;
    FUN_1008f68cc(local_198,&DAT_100eeaaa8,param_10);
    _swift_retain();
    _swift_retain(puVar10);
    _swift_retain(param_13);
    _swift_retain(param_1);
    FUN_100914f44(0,1,param_13,puVar11,FUN_10092d308,puVar10);
    _swift_release(puVar11);
    _swift_release_n(puVar10,2);
  }
  else {
    local_80 = 0;
    uStack_78 = 0xe000000000000000;
    Swift::_StringGuts::grow(0x44,_Var56);
    SVar84.bridgeObject = (void *)0xeb00000000282074;
    SVar84.str = (char *)0x6e756f4365747962;
    SVar86.bridgeObject = pvVar58;
    SVar86.str = pcVar57;
    Swift::String::append(SVar84,SVar86);
    local_98[0] = pvVar70;
    SVar84 = Swift::CustomStringConvertible::get_description();
    SVar87.bridgeObject = pvVar58;
    SVar87.str = pcVar57;
    Swift::String::append(SVar84,SVar87);
    _swift_bridgeObjectRelease(SVar84.bridgeObject);
    puVar50 = (undefined8 *)0xd000000000000037;
    SVar74.bridgeObject = (void *)0x8000000100db4b30;
    SVar74.str = (char *)0xd000000000000037;
    SVar88.bridgeObject = pvVar58;
    SVar88.str = pcVar57;
    Swift::String::append(SVar74,SVar88);
    uVar71 = uStack_78;
    uVar1 = local_80;
    FUN_1008d5300();
    puVar10 = &DAT_100ef11e8;
    _swift_allocError(&DAT_100ef11e8,puVar50,0,0);
    *puVar50 = uVar1;
    puVar50[1] = uVar71;
    *(undefined4 *)(puVar50 + 2) = 0x16;
    puVar11 = puVar10;
    FUN_10063dd74();
    _swift_errorRelease(puVar10);
  }
  puVar10 = &DAT_100f16098;
  _swift_allocObject(&DAT_100f16098,0x98,7);
  *(code **)(puVar10 + 0x10) = param_11;
  *(undefined8 *)(puVar10 + 0x18) = param_12;
  *(undefined **)(puVar10 + 0x20) = puVar9;
  *(undefined **)(puVar10 + 0x28) = param_9;
  *(char **)(puVar10 + 0x30) = param_10;
  *(void **)(puVar10 + 0x38) = pvVar67;
  *(void **)(puVar10 + 0x40) = param_4;
  *(undefined **)(puVar10 + 0x48) = param_13;
  *(long *)(puVar10 + 0x50) = param_1;
  *(long *)(puVar10 + 0x58) = lVar8;
  puVar10[0x60] = 0;
  *(undefined8 *)(puVar10 + 0x68) = param_5;
  *(undefined8 *)(puVar10 + 0x70) = param_6;
  *(undefined8 *)(puVar10 + 0x78) = param_7;
  *(undefined8 *)(puVar10 + 0x80) = param_8;
  *(long *)(puVar10 + 0x88) = lVar14;
  *(undefined8 *)(puVar10 + 0x90) = 0;
  puVar12 = &DAT_100f160c0;
  _swift_allocObject(&DAT_100f160c0,0x28,7);
  *(code **)(puVar12 + 0x10) = thunk_FUN_10092d0a0;
  *(undefined **)(puVar12 + 0x18) = puVar10;
  *(undefined **)(puVar12 + 0x20) = puVar11;
  uVar72 = *(ulong *)(puVar11 + 0x28);
  lVar7 = *(long *)(puVar11 + 0x30);
  _swift_getObjectType();
  pcVar59 = *(code **)(lVar7 + 0x10);
  _swift_retain_n(param_13,2);
  _swift_retain_n(param_1,2);
  _swift_retain_n(param_12,2);
  _swift_retain_n(puVar9,2);
  _swift_unknownObjectRetain_n(param_9,2);
  _swift_retain_n(puVar10,2);
  _swift_retain_n(puVar11,2);
  uVar68 = uVar72;
  (*pcVar59)(uVar72,lVar7);
  if ((uVar68 & 1) == 0) {
    puVar13 = &DAT_100f160e8;
    _swift_allocObject(&DAT_100f160e8,0x28,7);
    *(undefined **)(puVar13 + 0x10) = puVar11;
    *(code **)(puVar13 + 0x18) = FUN_10092be10;
    *(undefined **)(puVar13 + 0x20) = puVar12;
    pcVar59 = *(code **)(lVar7 + 0x18);
    _swift_retain(puVar11);
    _swift_retain(puVar12);
    (*pcVar59)(FUN_10092be1c,puVar13,uVar72,lVar7);
    _swift_release(param_12);
    _swift_release(puVar13);
    _swift_release(puVar11);
    _swift_release_n(puVar10,2);
    _swift_release(puVar12);
    goto LAB_100919f40;
  }
  _swift_beginAccess(puVar11 + 0x10,&local_80,0,0);
  uVar72 = *(ulong *)(puVar11 + 0x20);
  if (uVar72 >> 0x38 < 0xff) {
    lVar7 = *(long *)(puVar11 + 0x10);
    uVar1 = *(undefined8 *)(puVar11 + 0x18);
    if (uVar72 >> 0x38 == 1) {
      uVar66 = *(ulong *)(puVar9 + 0x20);
      lVar8 = *(long *)(puVar9 + 0x28);
      _swift_getObjectType();
      pcVar59 = *(code **)(lVar8 + 0x10);
      uVar68 = uVar72;
      FUN_1008fa5cc(lVar7,uVar1,uVar72,1);
      (*pcVar59)(uVar66,lVar8);
      if ((uVar66 & 1) == 0) {
        uVar71 = *(undefined8 *)(puVar9 + 0x20);
        lVar8 = *(long *)(puVar9 + 0x28);
        _swift_getObjectType(uVar71);
        puVar13 = &DAT_100f16110;
        _swift_allocObject(&DAT_100f16110,0x20,7);
        *(undefined **)(puVar13 + 0x10) = puVar9;
        *(long *)(puVar13 + 0x18) = lVar7;
        pcVar59 = *(code **)(lVar8 + 0x18);
        _swift_retain(puVar9);
        FUN_10092be28(lVar7,uVar1,uVar72);
        (*pcVar59)(thunk_FUN_1005dfd68,puVar13,uVar71,lVar8);
        _swift_release(puVar13);
      }
      else {
        lVar14 = lVar7;
        FUN_1005de8f4(lVar7);
        FUN_1006486f8();
        FUN_100004550(lVar14,lVar8);
        _swift_bridgeObjectRelease(uVar68);
      }
      FUN_10092be3c(lVar7,uVar1,uVar72);
    }
    else {
      uVar5 = (int)((ulong)uVar1 >> 0x20) - (int)uVar1;
      uVar68 = (ulong)uVar5;
      FUN_1008fa5cc(lVar7,uVar1,uVar72);
      lVar15 = lVar7;
      (*param_11)(lVar7,uVar1,uVar72 & 0xffffffffffffff);
      if (uVar5 == 0) {
        puVar13 = &DAT_100f16138;
        _swift_allocObject(&DAT_100f16138,0x28,7);
        *(code **)(puVar13 + 0x10) = FUN_10092be50;
        *(undefined **)(puVar13 + 0x18) = puVar9;
        *(long *)(puVar13 + 0x20) = lVar15;
        uVar66 = *(ulong *)(lVar15 + 0x20);
        lVar8 = *(long *)(lVar15 + 0x28);
        _swift_getObjectType();
        pcVar59 = *(code **)(lVar8 + 0x10);
        _swift_retain_n(puVar9,5);
        _swift_retain_n(lVar15,2);
        uVar68 = uVar66;
        (*pcVar59)(uVar66,lVar8);
        if ((uVar68 & 1) == 0) {
          _swift_release(puVar9);
          puVar18 = &DAT_100f16160;
          _swift_allocObject(&DAT_100f16160,0x28,7);
          *(long *)(puVar18 + 0x10) = lVar15;
          *(code **)(puVar18 + 0x18) = FUN_10065310c;
          *(undefined **)(puVar18 + 0x20) = puVar13;
          pcVar59 = *(code **)(lVar8 + 0x18);
          _swift_retain(lVar15);
          _swift_retain(puVar13);
          (*pcVar59)(FUN_1008db360,puVar18,uVar66,lVar8);
          _swift_release(puVar18);
          _swift_release_n(lVar15,2);
          _swift_release_n(puVar9,2);
          _swift_release(puVar13);
        }
        else {
          _swift_beginAccess(lVar15 + 0x10,local_98,0,0);
          cVar3 = *(char *)(lVar15 + 0x18);
          if (cVar3 == -1) {
            _swift_release(puVar9);
            _swift_beginAccess(lVar15 + 0x30,&local_b0,0x21,0);
            FUN_10064967c(FUN_10065310c,puVar13);
            _swift_endAccess(&local_b0);
          }
          else {
            uVar71 = *(undefined8 *)(lVar15 + 0x10);
            FUN_100308524(uVar71,cVar3);
            FUN_10092b43c(uVar71,cVar3,puVar9);
            _swift_release(puVar9);
            FUN_100308538(uVar71,cVar3);
          }
          FUN_1006486f8(0,0,0);
          FUN_100004550(0,0);
          _swift_release_n(lVar15,2);
          _swift_release_n(puVar9,2);
          _swift_release(puVar13);
          _swift_bridgeObjectRelease(0);
        }
        _swift_release(puVar9);
        FUN_10092be3c(lVar7,uVar1,uVar72);
      }
      else {
        puVar16 = param_9;
        FUN_100915740(param_9,param_10);
        _swift_release(lVar15);
        puVar13 = &DAT_100f16188;
        _swift_allocObject(&DAT_100f16188,0xa0,7);
        *(undefined **)(puVar13 + 0x10) = param_9;
        *(char **)(puVar13 + 0x18) = param_10;
        *(void **)(puVar13 + 0x20) = pvVar67;
        *(void **)(puVar13 + 0x28) = param_4;
        *(undefined **)(puVar13 + 0x30) = param_13;
        *(long *)(puVar13 + 0x38) = param_1;
        *(long *)(puVar13 + 0x40) = lVar8;
        puVar13[0x48] = 0;
        *(undefined8 *)(puVar13 + 0x50) = param_5;
        *(undefined8 *)(puVar13 + 0x58) = param_6;
        *(undefined8 *)(puVar13 + 0x60) = param_7;
        *(undefined8 *)(puVar13 + 0x68) = param_8;
        *(code **)(puVar13 + 0x70) = param_11;
        *(undefined8 *)(puVar13 + 0x78) = param_12;
        *(undefined **)(puVar13 + 0x80) = puVar9;
        *(long *)(puVar13 + 0x88) = lVar14;
        *(undefined8 *)(puVar13 + 0x90) = 0;
        *(ulong *)(puVar13 + 0x98) = uVar68;
        puVar18 = &DAT_100f161b0;
        _swift_allocObject(&DAT_100f161b0,0x28,7);
        *(code **)(puVar18 + 0x10) = thunk_FUN_10092d008;
        *(undefined **)(puVar18 + 0x18) = puVar13;
        *(undefined **)(puVar18 + 0x20) = puVar16;
        uVar69 = *(ulong *)(puVar16 + 0x20);
        lVar14 = *(long *)(puVar16 + 0x28);
        _swift_getObjectType();
        pcVar59 = *(code **)(lVar14 + 0x10);
        _swift_retain_n(param_13,2);
        _swift_retain_n(param_1,2);
        _swift_retain_n(param_12,2);
        _swift_retain_n(puVar9,2);
        _swift_unknownObjectRetain_n(param_9,2);
        _swift_retain_n(puVar13,2);
        _swift_retain_n(puVar16,2);
        uVar60 = uVar69;
        (*pcVar59)(uVar69,lVar14);
        if ((uVar60 & 1) == 0) {
          puVar17 = &DAT_100f161d8;
          _swift_allocObject(&DAT_100f161d8,0x28,7);
          *(undefined **)(puVar17 + 0x10) = puVar16;
          *(code **)(puVar17 + 0x18) = thunk_FUN_10065310c;
          *(undefined **)(puVar17 + 0x20) = puVar18;
          pcVar59 = *(code **)(lVar14 + 0x18);
          _swift_retain(puVar16);
          _swift_retain(puVar18);
          (*pcVar59)(thunk_FUN_1008db360,puVar17,uVar69,lVar14);
          _swift_unknownObjectRelease(param_9);
          _swift_release(puVar17);
          _swift_release(puVar16);
          _swift_release_n(puVar13,2);
          _swift_release(puVar18);
        }
        else {
          _Var56.unknown = (undefined *)local_98;
          pcVar57 = (char *)0x0;
          pvVar58 = (void *)0x0;
          _swift_beginAccess(puVar16 + 0x10);
          uVar71 = *(undefined8 *)(puVar16 + 0x10);
          cVar3 = puVar16[0x18];
          if (cVar3 == '\x01') {
            uVar66 = *(ulong *)(puVar9 + 0x20);
            lVar8 = *(long *)(puVar9 + 0x28);
            _swift_getObjectType();
            pcVar59 = *(code **)(lVar8 + 0x10);
            FUN_100308524(uVar71,1);
            (*pcVar59)(uVar66,lVar8);
            if ((uVar66 & 1) == 0) {
              uVar19 = *(undefined8 *)(puVar9 + 0x20);
              lVar8 = *(long *)(puVar9 + 0x28);
              _swift_getObjectType(uVar19);
              puVar17 = &DAT_100f16200;
              _swift_allocObject(&DAT_100f16200,0x20,7);
              *(undefined **)(puVar17 + 0x10) = puVar9;
              *(undefined8 *)(puVar17 + 0x18) = uVar71;
              pcVar59 = *(code **)(lVar8 + 0x18);
              _swift_retain(puVar9);
              FUN_1005dfeb4(uVar71,1);
              (*pcVar59)(thunk_FUN_1005dfd68,puVar17,uVar19,lVar8);
              _swift_release(puVar17);
            }
            else {
              uVar19 = uVar71;
              FUN_1005de8f4(uVar71);
              FUN_1006486f8();
              FUN_100004550(uVar19,lVar8);
              _swift_bridgeObjectRelease(pcVar57);
            }
            FUN_100308538(uVar71,1);
          }
          else if (cVar3 == -1) {
            _swift_beginAccess(puVar16 + 0x30,&local_b0,0x21,0);
            FUN_10064967c(thunk_FUN_10065310c,puVar18);
            _swift_endAccess(&local_b0);
          }
          else {
            pvVar70 = param_4;
            if ((uVar66 < 2) && ((uVar66 != 1 || (pvVar70 = pvVar67, (long)pvVar67 < 1)))) {
              FUN_10090d0b8(0,0,puVar9);
              FUN_100308538(uVar71,cVar3);
            }
            else {
              if (SCARRY8(lVar8,uVar68)) {
                    /* WARNING: Does not return */
                pcVar59 = (code *)SoftwareBreakpoint(1,0x10091b150);
                (*pcVar59)();
              }
              if ((ulong)pvVar70 >> 0x20 == 0) {
                puVar17 = &DAT_100f16980;
                _swift_allocObject(&DAT_100f16980,0x58,7);
                *(undefined **)(puVar17 + 0x10) = param_13;
                *(long *)(puVar17 + 0x18) = param_1;
                *(ulong *)(puVar17 + 0x20) = lVar8 + uVar68;
                puVar17[0x28] = 0;
                *(void **)(puVar17 + 0x30) = pvVar70;
                *(undefined8 *)(puVar17 + 0x38) = param_5;
                *(undefined8 *)(puVar17 + 0x40) = param_6;
                *(undefined8 *)(puVar17 + 0x48) = param_7;
                *(undefined8 *)(puVar17 + 0x50) = param_8;
                puVar20 = local_198;
                FUN_1008f68cc(local_198,&DAT_100eeaaa8,param_10);
                _swift_retain(param_13);
                _swift_retain(param_1);
                _swift_retain(puVar20);
                FUN_100914f44(0,1,param_13,puVar20,FUN_10092d308,puVar17);
                _swift_release(puVar17);
                _swift_release(puVar20);
              }
              else {
                local_b0 = 0;
                uStack_a8 = 0xe000000000000000;
                Swift::_StringGuts::grow(0x44,_Var56);
                SVar75.bridgeObject = (void *)0xeb00000000282074;
                SVar75.str = (char *)0x6e756f4365747962;
                SVar89.bridgeObject = pvVar58;
                SVar89.str = pcVar57;
                Swift::String::append(SVar75,SVar89);
                local_c8[0] = pvVar70;
                SVar84 = Swift::CustomStringConvertible::get_description();
                SVar90.bridgeObject = pvVar58;
                SVar90.str = pcVar57;
                Swift::String::append(SVar84,SVar90);
                _swift_bridgeObjectRelease(SVar84.bridgeObject);
                puVar50 = (undefined8 *)0xd000000000000037;
                SVar76.bridgeObject = (void *)0x8000000100db4b30;
                SVar76.str = (char *)0xd000000000000037;
                SVar91.bridgeObject = pvVar58;
                SVar91.str = pcVar57;
                Swift::String::append(SVar76,SVar91);
                uVar73 = uStack_a8;
                uVar19 = local_b0;
                FUN_1008d5300();
                puVar17 = &DAT_100ef11e8;
                _swift_allocError(&DAT_100ef11e8,puVar50,0,0);
                *puVar50 = uVar19;
                puVar50[1] = uVar73;
                *(undefined4 *)(puVar50 + 2) = 0x16;
                puVar20 = puVar17;
                FUN_10063dd74();
                _swift_errorRelease(puVar17);
              }
              puVar17 = &DAT_100f16228;
              _swift_allocObject(&DAT_100f16228,0x98,7);
              *(code **)(puVar17 + 0x10) = param_11;
              *(undefined8 *)(puVar17 + 0x18) = param_12;
              *(undefined **)(puVar17 + 0x20) = puVar9;
              *(undefined **)(puVar17 + 0x28) = param_9;
              *(char **)(puVar17 + 0x30) = param_10;
              *(void **)(puVar17 + 0x38) = pvVar67;
              *(void **)(puVar17 + 0x40) = param_4;
              *(undefined **)(puVar17 + 0x48) = param_13;
              *(long *)(puVar17 + 0x50) = param_1;
              *(long *)(puVar17 + 0x58) = lVar8;
              puVar17[0x60] = 0;
              *(undefined8 *)(puVar17 + 0x68) = param_5;
              *(undefined8 *)(puVar17 + 0x70) = param_6;
              *(undefined8 *)(puVar17 + 0x78) = param_7;
              *(undefined8 *)(puVar17 + 0x80) = param_8;
              *(ulong *)(puVar17 + 0x88) = uVar66;
              *(ulong *)(puVar17 + 0x90) = uVar68;
              puVar21 = &DAT_100f16250;
              _swift_allocObject(&DAT_100f16250,0x28,7);
              *(code **)(puVar21 + 0x10) = thunk_FUN_10092d0a0;
              *(undefined **)(puVar21 + 0x18) = puVar17;
              *(undefined **)(puVar21 + 0x20) = puVar20;
              uVar69 = *(ulong *)(puVar20 + 0x28);
              lVar14 = *(long *)(puVar20 + 0x30);
              _swift_getObjectType();
              pcVar59 = *(code **)(lVar14 + 0x10);
              _swift_retain_n(param_13,2);
              _swift_retain_n(param_1,2);
              _swift_retain_n(param_12,2);
              _swift_retain_n(puVar9,2);
              _swift_unknownObjectRetain_n(param_9,2);
              _swift_retain_n(puVar17,2);
              _swift_retain_n(puVar20,2);
              uVar60 = uVar69;
              (*pcVar59)(uVar69,lVar14);
              if ((uVar60 & 1) == 0) {
                puVar22 = &DAT_100f16278;
                _swift_allocObject(&DAT_100f16278,0x28,7);
                *(undefined **)(puVar22 + 0x10) = puVar20;
                *(code **)(puVar22 + 0x18) = thunk_FUN_10092be10;
                *(undefined **)(puVar22 + 0x20) = puVar21;
                pcVar59 = *(code **)(lVar14 + 0x18);
                _swift_retain(puVar20);
                _swift_retain(puVar21);
                (*pcVar59)(thunk_FUN_10092be1c,puVar22,uVar69,lVar14);
                _swift_release(param_12);
                _swift_release(puVar22);
                _swift_release(puVar20);
                _swift_release_n(puVar17,2);
                _swift_release(puVar21);
              }
              else {
                _swift_beginAccess(puVar20 + 0x10,&local_b0,0,0);
                uVar69 = *(ulong *)(puVar20 + 0x20);
                if (uVar69 >> 0x38 < 0xff) {
                  lVar14 = *(long *)(puVar20 + 0x10);
                  uVar19 = *(undefined8 *)(puVar20 + 0x18);
                  if (uVar69 >> 0x38 == 1) {
                    uVar66 = *(ulong *)(puVar9 + 0x20);
                    lVar8 = *(long *)(puVar9 + 0x28);
                    _swift_getObjectType();
                    pcVar59 = *(code **)(lVar8 + 0x10);
                    uVar68 = uVar69;
                    FUN_1008fa5cc(lVar14,uVar19,uVar69,1);
                    (*pcVar59)(uVar66,lVar8);
                    if ((uVar66 & 1) == 0) {
                      uVar73 = *(undefined8 *)(puVar9 + 0x20);
                      lVar8 = *(long *)(puVar9 + 0x28);
                      _swift_getObjectType(uVar73);
                      puVar22 = &DAT_100f162a0;
                      _swift_allocObject(&DAT_100f162a0,0x20,7);
                      *(undefined **)(puVar22 + 0x10) = puVar9;
                      *(long *)(puVar22 + 0x18) = lVar14;
                      pcVar59 = *(code **)(lVar8 + 0x18);
                      _swift_retain(puVar9);
                      FUN_10092be28(lVar14,uVar19,uVar69);
                      (*pcVar59)(thunk_FUN_1005dfd68,puVar22,uVar73,lVar8);
                      _swift_release(puVar22);
                    }
                    else {
                      lVar15 = lVar14;
                      FUN_1005de8f4(lVar14);
                      FUN_1006486f8();
                      FUN_100004550(lVar15,lVar8);
                      _swift_bridgeObjectRelease(uVar68);
                    }
                    FUN_10092be3c(lVar14,uVar19,uVar69);
                  }
                  else {
                    uVar5 = (int)((ulong)uVar19 >> 0x20) - (int)uVar19;
                    FUN_1008fa5cc(lVar14,uVar19,uVar69);
                    lVar15 = lVar14;
                    (*param_11)(lVar14,uVar19,uVar69 & 0xffffffffffffff);
                    if (uVar5 == 0) {
                      puVar22 = &DAT_100f162c8;
                      _swift_allocObject(&DAT_100f162c8,0x28,7);
                      *(code **)(puVar22 + 0x10) = thunk_FUN_10092be50;
                      *(undefined **)(puVar22 + 0x18) = puVar9;
                      *(long *)(puVar22 + 0x20) = lVar15;
                      uVar66 = *(ulong *)(lVar15 + 0x20);
                      lVar8 = *(long *)(lVar15 + 0x28);
                      _swift_getObjectType();
                      pcVar59 = *(code **)(lVar8 + 0x10);
                      _swift_retain_n(puVar9,5);
                      _swift_retain_n(lVar15,2);
                      uVar68 = uVar66;
                      (*pcVar59)(uVar66,lVar8);
                      if ((uVar68 & 1) == 0) {
                        _swift_release(puVar9);
                        puVar25 = &DAT_100f162f0;
                        _swift_allocObject(&DAT_100f162f0,0x28,7);
                        *(long *)(puVar25 + 0x10) = lVar15;
                        *(code **)(puVar25 + 0x18) = thunk_FUN_10065310c;
                        *(undefined **)(puVar25 + 0x20) = puVar22;
                        pcVar59 = *(code **)(lVar8 + 0x18);
                        _swift_retain(lVar15);
                        _swift_retain(puVar22);
                        (*pcVar59)(thunk_FUN_1008db360,puVar25,uVar66,lVar8);
                        _swift_release(puVar25);
                        _swift_release_n(lVar15,2);
                        _swift_release_n(puVar9,2);
                        _swift_release(puVar22);
                      }
                      else {
                        _swift_beginAccess(lVar15 + 0x10,local_c8,0,0);
                        cVar4 = *(char *)(lVar15 + 0x18);
                        if (cVar4 == -1) {
                          _swift_release(puVar9);
                          _swift_beginAccess(lVar15 + 0x30,&local_e0,0x21,0);
                          FUN_10064967c(thunk_FUN_10065310c,puVar22);
                          _swift_endAccess(&local_e0);
                        }
                        else {
                          uVar73 = *(undefined8 *)(lVar15 + 0x10);
                          FUN_100308524(uVar73,cVar4);
                          FUN_10092b43c(uVar73,cVar4,puVar9);
                          _swift_release(puVar9);
                          FUN_100308538(uVar73,cVar4);
                        }
                        FUN_1006486f8(0,0,0);
                        FUN_100004550(0,0);
                        _swift_release_n(lVar15,2);
                        _swift_release_n(puVar9,2);
                        _swift_release(puVar22);
                        _swift_bridgeObjectRelease(0);
                      }
                      _swift_release(puVar9);
                      FUN_10092be3c(lVar14,uVar19,uVar69);
                    }
                    else {
                      puVar23 = param_9;
                      FUN_100915740(param_9,param_10);
                      _swift_release(lVar15);
                      puVar22 = &DAT_100f16318;
                      _swift_allocObject(&DAT_100f16318,0xa0,7);
                      *(undefined **)(puVar22 + 0x10) = param_9;
                      *(char **)(puVar22 + 0x18) = param_10;
                      *(void **)(puVar22 + 0x20) = pvVar67;
                      *(void **)(puVar22 + 0x28) = param_4;
                      *(undefined **)(puVar22 + 0x30) = param_13;
                      *(long *)(puVar22 + 0x38) = param_1;
                      *(long *)(puVar22 + 0x40) = lVar8;
                      puVar22[0x48] = 0;
                      *(undefined8 *)(puVar22 + 0x50) = param_5;
                      *(undefined8 *)(puVar22 + 0x58) = param_6;
                      *(undefined8 *)(puVar22 + 0x60) = param_7;
                      *(undefined8 *)(puVar22 + 0x68) = param_8;
                      *(code **)(puVar22 + 0x70) = param_11;
                      *(undefined8 *)(puVar22 + 0x78) = param_12;
                      *(undefined **)(puVar22 + 0x80) = puVar9;
                      *(ulong *)(puVar22 + 0x88) = uVar66;
                      *(ulong *)(puVar22 + 0x90) = uVar68;
                      *(ulong *)(puVar22 + 0x98) = (ulong)uVar5;
                      puVar25 = &DAT_100f16340;
                      _swift_allocObject(&DAT_100f16340,0x28,7);
                      *(code **)(puVar25 + 0x10) = thunk_FUN_10092d008;
                      *(undefined **)(puVar25 + 0x18) = puVar22;
                      *(undefined **)(puVar25 + 0x20) = puVar23;
                      uVar60 = *(ulong *)(puVar23 + 0x20);
                      lVar15 = *(long *)(puVar23 + 0x28);
                      _swift_getObjectType();
                      pcVar59 = *(code **)(lVar15 + 0x10);
                      _swift_retain_n(param_13,2);
                      _swift_retain_n(param_1,2);
                      _swift_retain_n(param_12,2);
                      _swift_retain_n(puVar9,2);
                      _swift_unknownObjectRetain_n(param_9,2);
                      _swift_retain_n(puVar22,2);
                      _swift_retain_n(puVar23,2);
                      uVar62 = uVar60;
                      (*pcVar59)(uVar60,lVar15);
                      if ((uVar62 & 1) == 0) {
                        puVar24 = &DAT_100f16368;
                        _swift_allocObject(&DAT_100f16368,0x28,7);
                        *(undefined **)(puVar24 + 0x10) = puVar23;
                        *(code **)(puVar24 + 0x18) = thunk_FUN_10065310c;
                        *(undefined **)(puVar24 + 0x20) = puVar25;
                        pcVar59 = *(code **)(lVar15 + 0x18);
                        _swift_retain(puVar23);
                        _swift_retain(puVar25);
                        (*pcVar59)(thunk_FUN_1008db360,puVar24,uVar60,lVar15);
                        _swift_unknownObjectRelease(param_9);
                        _swift_release(puVar24);
                        _swift_release(puVar23);
                        _swift_release_n(puVar22,2);
                        _swift_release(puVar25);
                      }
                      else {
                        _Var56.unknown = (undefined *)local_c8;
                        pcVar57 = (char *)0x0;
                        pvVar58 = (void *)0x0;
                        _swift_beginAccess(puVar23 + 0x10);
                        uVar73 = *(undefined8 *)(puVar23 + 0x10);
                        cVar4 = puVar23[0x18];
                        if (cVar4 == '\x01') {
                          uVar66 = *(ulong *)(puVar9 + 0x20);
                          lVar8 = *(long *)(puVar9 + 0x28);
                          _swift_getObjectType();
                          pcVar59 = *(code **)(lVar8 + 0x10);
                          FUN_100308524(uVar73,1);
                          (*pcVar59)(uVar66,lVar8);
                          if ((uVar66 & 1) == 0) {
                            uVar26 = *(undefined8 *)(puVar9 + 0x20);
                            lVar8 = *(long *)(puVar9 + 0x28);
                            _swift_getObjectType(uVar26);
                            puVar24 = &DAT_100f16390;
                            _swift_allocObject(&DAT_100f16390,0x20,7);
                            *(undefined **)(puVar24 + 0x10) = puVar9;
                            *(undefined8 *)(puVar24 + 0x18) = uVar73;
                            pcVar59 = *(code **)(lVar8 + 0x18);
                            _swift_retain(puVar9);
                            FUN_1005dfeb4(uVar73,1);
                            (*pcVar59)(thunk_FUN_1005dfd68,puVar24,uVar26,lVar8);
                            _swift_release(puVar24);
                          }
                          else {
                            uVar26 = uVar73;
                            FUN_1005de8f4(uVar73);
                            FUN_1006486f8();
                            FUN_100004550(uVar26,lVar8);
                            _swift_bridgeObjectRelease(pcVar57);
                          }
                          FUN_100308538(uVar73,1);
                        }
                        else if (cVar4 == -1) {
                          _swift_beginAccess(puVar23 + 0x30,&local_e0,0x21,0);
                          FUN_10064967c(thunk_FUN_10065310c,puVar25);
                          _swift_endAccess(&local_e0);
                        }
                        else {
                          uVar60 = uVar66 - 1;
                          pvVar70 = param_4;
                          if ((uVar60 < 2) &&
                             ((uVar60 != 1 || (pvVar70 = pvVar67, (long)pvVar67 < 1)))) {
                            FUN_10090d0b8(0,0,puVar9);
                            FUN_100308538(uVar73,cVar4);
                          }
                          else {
                            lVar15 = uVar5 + uVar68;
                            if (SCARRY8(lVar8,lVar15)) {
                    /* WARNING: Does not return */
                              pcVar59 = (code *)SoftwareBreakpoint(1,0x10091bbc0);
                              (*pcVar59)();
                            }
                            if ((ulong)pvVar70 >> 0x20 == 0) {
                              puVar24 = &DAT_100f16958;
                              _swift_allocObject(&DAT_100f16958,0x58,7);
                              *(undefined **)(puVar24 + 0x10) = param_13;
                              *(long *)(puVar24 + 0x18) = param_1;
                              *(long *)(puVar24 + 0x20) = lVar8 + lVar15;
                              puVar24[0x28] = 0;
                              *(void **)(puVar24 + 0x30) = pvVar70;
                              *(undefined8 *)(puVar24 + 0x38) = param_5;
                              *(undefined8 *)(puVar24 + 0x40) = param_6;
                              *(undefined8 *)(puVar24 + 0x48) = param_7;
                              *(undefined8 *)(puVar24 + 0x50) = param_8;
                              puVar27 = local_198;
                              FUN_1008f68cc(local_198,&DAT_100eeaaa8,param_10);
                              _swift_retain(param_13);
                              _swift_retain(param_1);
                              _swift_retain(puVar27);
                              FUN_100914f44(0,1,param_13,puVar27,FUN_10092d308,puVar24);
                              _swift_release(puVar24);
                              _swift_release(puVar27);
                            }
                            else {
                              local_e0 = 0;
                              uStack_d8 = 0xe000000000000000;
                              Swift::_StringGuts::grow(0x44,_Var56);
                              SVar77.bridgeObject = (void *)0xeb00000000282074;
                              SVar77.str = (char *)0x6e756f4365747962;
                              SVar92.bridgeObject = pvVar58;
                              SVar92.str = pcVar57;
                              Swift::String::append(SVar77,SVar92);
                              local_f8[0] = pvVar70;
                              SVar84 = Swift::CustomStringConvertible::get_description();
                              SVar93.bridgeObject = pvVar58;
                              SVar93.str = pcVar57;
                              Swift::String::append(SVar84,SVar93);
                              _swift_bridgeObjectRelease(SVar84.bridgeObject);
                              puVar50 = (undefined8 *)0xd000000000000037;
                              SVar78.bridgeObject = (void *)0x8000000100db4b30;
                              SVar78.str = (char *)0xd000000000000037;
                              SVar94.bridgeObject = pvVar58;
                              SVar94.str = pcVar57;
                              Swift::String::append(SVar78,SVar94);
                              uVar61 = uStack_d8;
                              uVar26 = local_e0;
                              FUN_1008d5300();
                              puVar24 = &DAT_100ef11e8;
                              _swift_allocError(&DAT_100ef11e8,puVar50,0,0);
                              *puVar50 = uVar26;
                              puVar50[1] = uVar61;
                              *(undefined4 *)(puVar50 + 2) = 0x16;
                              puVar27 = puVar24;
                              FUN_10063dd74();
                              _swift_errorRelease(puVar24);
                            }
                            puVar24 = &DAT_100f163b8;
                            _swift_allocObject(&DAT_100f163b8,0x98,7);
                            *(code **)(puVar24 + 0x10) = param_11;
                            *(undefined8 *)(puVar24 + 0x18) = param_12;
                            *(undefined **)(puVar24 + 0x20) = puVar9;
                            *(undefined **)(puVar24 + 0x28) = param_9;
                            *(char **)(puVar24 + 0x30) = param_10;
                            *(void **)(puVar24 + 0x38) = pvVar67;
                            *(void **)(puVar24 + 0x40) = param_4;
                            *(undefined **)(puVar24 + 0x48) = param_13;
                            *(long *)(puVar24 + 0x50) = param_1;
                            *(long *)(puVar24 + 0x58) = lVar8;
                            puVar24[0x60] = 0;
                            *(undefined8 *)(puVar24 + 0x68) = param_5;
                            *(undefined8 *)(puVar24 + 0x70) = param_6;
                            *(undefined8 *)(puVar24 + 0x78) = param_7;
                            *(undefined8 *)(puVar24 + 0x80) = param_8;
                            *(ulong *)(puVar24 + 0x88) = uVar60;
                            *(long *)(puVar24 + 0x90) = lVar15;
                            puVar28 = &DAT_100f163e0;
                            _swift_allocObject(&DAT_100f163e0,0x28,7);
                            *(code **)(puVar28 + 0x10) = thunk_FUN_10092d0a0;
                            *(undefined **)(puVar28 + 0x18) = puVar24;
                            *(undefined **)(puVar28 + 0x20) = puVar27;
                            uVar68 = *(ulong *)(puVar27 + 0x28);
                            lVar2 = *(long *)(puVar27 + 0x30);
                            _swift_getObjectType();
                            pcVar59 = *(code **)(lVar2 + 0x10);
                            _swift_retain_n(param_13,2);
                            _swift_retain_n(param_1,2);
                            _swift_retain_n(param_12,2);
                            _swift_retain_n(puVar9,2);
                            _swift_unknownObjectRetain_n(param_9,2);
                            _swift_retain_n(puVar24,2);
                            _swift_retain_n(puVar27,2);
                            uVar62 = uVar68;
                            (*pcVar59)(uVar68,lVar2);
                            if ((uVar62 & 1) == 0) {
                              puVar29 = &DAT_100f16408;
                              _swift_allocObject(&DAT_100f16408,0x28,7);
                              *(undefined **)(puVar29 + 0x10) = puVar27;
                              *(code **)(puVar29 + 0x18) = thunk_FUN_10092be10;
                              *(undefined **)(puVar29 + 0x20) = puVar28;
                              pcVar59 = *(code **)(lVar2 + 0x18);
                              _swift_retain(puVar27);
                              _swift_retain(puVar28);
                              (*pcVar59)(thunk_FUN_10092be1c,puVar29,uVar68,lVar2);
                              _swift_release(param_12);
                              _swift_release(puVar29);
                              _swift_release(puVar27);
                              _swift_release_n(puVar24,2);
                              _swift_release(puVar28);
                            }
                            else {
                              _swift_beginAccess(puVar27 + 0x10,&local_e0,0,0);
                              uVar68 = *(ulong *)(puVar27 + 0x20);
                              if (uVar68 >> 0x38 < 0xff) {
                                lVar2 = *(long *)(puVar27 + 0x10);
                                uVar26 = *(undefined8 *)(puVar27 + 0x18);
                                if (uVar68 >> 0x38 == 1) {
                                  uVar66 = *(ulong *)(puVar9 + 0x20);
                                  lVar8 = *(long *)(puVar9 + 0x28);
                                  _swift_getObjectType();
                                  pcVar59 = *(code **)(lVar8 + 0x10);
                                  uVar60 = uVar68;
                                  FUN_1008fa5cc(lVar2,uVar26,uVar68,1);
                                  (*pcVar59)(uVar66,lVar8);
                                  if ((uVar66 & 1) == 0) {
                                    uVar61 = *(undefined8 *)(puVar9 + 0x20);
                                    lVar8 = *(long *)(puVar9 + 0x28);
                                    _swift_getObjectType(uVar61);
                                    puVar29 = &DAT_100f16430;
                                    _swift_allocObject(&DAT_100f16430,0x20,7);
                                    *(undefined **)(puVar29 + 0x10) = puVar9;
                                    *(long *)(puVar29 + 0x18) = lVar2;
                                    pcVar59 = *(code **)(lVar8 + 0x18);
                                    _swift_retain(puVar9);
                                    FUN_10092be28(lVar2,uVar26,uVar68);
                                    (*pcVar59)(thunk_FUN_1005dfd68,puVar29,uVar61,lVar8);
                                    _swift_release(puVar29);
                                  }
                                  else {
                                    lVar15 = lVar2;
                                    FUN_1005de8f4(lVar2);
                                    FUN_1006486f8();
                                    FUN_100004550(lVar15,lVar8);
                                    _swift_bridgeObjectRelease(uVar60);
                                  }
                                }
                                else {
                                  uVar5 = (int)((ulong)uVar26 >> 0x20) - (int)uVar26;
                                  FUN_1008fa5cc(lVar2,uVar26,uVar68);
                                  lVar30 = lVar2;
                                  (*param_11)(lVar2,uVar26,uVar68 & 0xffffffffffffff);
                                  if (uVar5 == 0) {
                                    puVar29 = &DAT_100f16458;
                                    _swift_allocObject(&DAT_100f16458,0x28,7);
                                    *(code **)(puVar29 + 0x10) = thunk_FUN_10092be50;
                                    *(undefined **)(puVar29 + 0x18) = puVar9;
                                    *(long *)(puVar29 + 0x20) = lVar30;
                                    uVar66 = *(ulong *)(lVar30 + 0x20);
                                    lVar8 = *(long *)(lVar30 + 0x28);
                                    _swift_getObjectType();
                                    pcVar59 = *(code **)(lVar8 + 0x10);
                                    _swift_retain_n(puVar9,5);
                                    _swift_retain_n(lVar30,2);
                                    uVar60 = uVar66;
                                    (*pcVar59)(uVar66,lVar8);
                                    puVar31 = puVar9;
                                    if ((uVar60 & 1) == 0) {
                                      _swift_release(puVar9);
                                      puVar33 = &DAT_100f16480;
                                      _swift_allocObject(&DAT_100f16480,0x28,7);
                                      *(long *)(puVar33 + 0x10) = lVar30;
                                      *(code **)(puVar33 + 0x18) = thunk_FUN_10065310c;
                                      *(undefined **)(puVar33 + 0x20) = puVar29;
                                      pcVar59 = *(code **)(lVar8 + 0x18);
                                      _swift_retain(lVar30);
                                      _swift_retain(puVar29);
                                      (*pcVar59)(thunk_FUN_1008db360,puVar33,uVar66,lVar8);
                                      _swift_release(puVar33);
                                      _swift_release_n(lVar30,2);
                                      _swift_release_n(puVar9,2);
                                      _swift_release(puVar29);
                                    }
                                    else {
                                      _swift_beginAccess(lVar30 + 0x10,local_f8,0,0);
                                      cVar55 = *(char *)(lVar30 + 0x18);
                                      if (cVar55 == -1) {
                                        _swift_release(puVar9);
                                        _swift_beginAccess(lVar30 + 0x30,&local_110,0x21,0);
                                        FUN_10064967c(thunk_FUN_10065310c,puVar29);
                                        _swift_endAccess(&local_110);
                                      }
                                      else {
                                        uVar61 = *(undefined8 *)(lVar30 + 0x10);
                                        FUN_100308524(uVar61,cVar55);
                                        FUN_10092b43c(uVar61,cVar55,puVar9);
                                        _swift_release(puVar9);
                                        FUN_100308538(uVar61,cVar55);
                                      }
                                      FUN_1006486f8(0,0,0);
                                      FUN_100004550(0,0);
                                      _swift_release_n(lVar30,2);
                                      _swift_release_n(puVar9,2);
                                      _swift_release(puVar29);
                                      _swift_bridgeObjectRelease(0);
                                    }
                                  }
                                  else {
                                    puVar33 = param_9;
                                    FUN_100915740(param_9,param_10);
                                    _swift_release(lVar30);
                                    puVar29 = &DAT_100f164a8;
                                    _swift_allocObject(&DAT_100f164a8,0xa0,7);
                                    *(undefined **)(puVar29 + 0x10) = param_9;
                                    *(char **)(puVar29 + 0x18) = param_10;
                                    *(void **)(puVar29 + 0x20) = pvVar67;
                                    *(void **)(puVar29 + 0x28) = param_4;
                                    *(undefined **)(puVar29 + 0x30) = param_13;
                                    *(long *)(puVar29 + 0x38) = param_1;
                                    *(long *)(puVar29 + 0x40) = lVar8;
                                    puVar29[0x48] = 0;
                                    *(undefined8 *)(puVar29 + 0x50) = param_5;
                                    *(undefined8 *)(puVar29 + 0x58) = param_6;
                                    *(undefined8 *)(puVar29 + 0x60) = param_7;
                                    *(undefined8 *)(puVar29 + 0x68) = param_8;
                                    *(code **)(puVar29 + 0x70) = param_11;
                                    *(undefined8 *)(puVar29 + 0x78) = param_12;
                                    *(undefined **)(puVar29 + 0x80) = puVar9;
                                    *(ulong *)(puVar29 + 0x88) = uVar60;
                                    *(long *)(puVar29 + 0x90) = lVar15;
                                    *(ulong *)(puVar29 + 0x98) = (ulong)uVar5;
                                    puVar31 = &DAT_100f164d0;
                                    _swift_allocObject(&DAT_100f164d0,0x28,7);
                                    *(code **)(puVar31 + 0x10) = thunk_FUN_10092d008;
                                    *(undefined **)(puVar31 + 0x18) = puVar29;
                                    *(undefined **)(puVar31 + 0x20) = puVar33;
                                    uVar60 = *(ulong *)(puVar33 + 0x20);
                                    lVar30 = *(long *)(puVar33 + 0x28);
                                    _swift_getObjectType();
                                    pcVar59 = *(code **)(lVar30 + 0x10);
                                    _swift_retain_n(param_13,2);
                                    _swift_retain_n(param_1,2);
                                    _swift_retain_n(param_12,2);
                                    _swift_retain_n(puVar9,2);
                                    _swift_unknownObjectRetain_n(param_9,2);
                                    _swift_retain_n(puVar29,2);
                                    _swift_retain_n(puVar33,2);
                                    uVar62 = uVar60;
                                    (*pcVar59)(uVar60,lVar30);
                                    if ((uVar62 & 1) == 0) {
                                      puVar32 = &DAT_100f164f8;
                                      _swift_allocObject(&DAT_100f164f8,0x28,7);
                                      *(undefined **)(puVar32 + 0x10) = puVar33;
                                      *(code **)(puVar32 + 0x18) = thunk_FUN_10065310c;
                                      *(undefined **)(puVar32 + 0x20) = puVar31;
                                      pcVar59 = *(code **)(lVar30 + 0x18);
                                      _swift_retain(puVar33);
                                      _swift_retain(puVar31);
                                      (*pcVar59)(thunk_FUN_1008db360,puVar32,uVar60,lVar30);
                                      _swift_unknownObjectRelease(param_9);
                                      _swift_release(puVar32);
                                      _swift_release(puVar33);
                                      _swift_release_n(puVar29,2);
                                      _swift_release(puVar31);
                                    }
                                    else {
                                      _Var56.unknown = (undefined *)local_f8;
                                      pcVar57 = (char *)0x0;
                                      pvVar58 = (void *)0x0;
                                      _swift_beginAccess(puVar33 + 0x10);
                                      uVar61 = *(undefined8 *)(puVar33 + 0x10);
                                      cVar55 = puVar33[0x18];
                                      if (cVar55 == '\x01') {
                                        uVar66 = *(ulong *)(puVar9 + 0x20);
                                        lVar8 = *(long *)(puVar9 + 0x28);
                                        _swift_getObjectType();
                                        pcVar59 = *(code **)(lVar8 + 0x10);
                                        FUN_100308524(uVar61,1);
                                        (*pcVar59)(uVar66,lVar8);
                                        if ((uVar66 & 1) == 0) {
                                          uVar34 = *(undefined8 *)(puVar9 + 0x20);
                                          lVar8 = *(long *)(puVar9 + 0x28);
                                          _swift_getObjectType(uVar34);
                                          puVar32 = &DAT_100f16520;
                                          _swift_allocObject(&DAT_100f16520,0x20,7);
                                          *(undefined **)(puVar32 + 0x10) = puVar9;
                                          *(undefined8 *)(puVar32 + 0x18) = uVar61;
                                          pcVar59 = *(code **)(lVar8 + 0x18);
                                          _swift_retain(puVar9);
                                          FUN_1005dfeb4(uVar61,1);
                                          (*pcVar59)(thunk_FUN_1005dfd68,puVar32,uVar34,lVar8);
                                          _swift_release(puVar32);
                                        }
                                        else {
                                          uVar34 = uVar61;
                                          FUN_1005de8f4(uVar61);
                                          FUN_1006486f8();
                                          FUN_100004550(uVar34,lVar8);
                                          _swift_bridgeObjectRelease(pcVar57);
                                        }
                                        cVar55 = '\x01';
LAB_10091d0b8:
                                        FUN_100308538(uVar61,cVar55);
                                      }
                                      else {
                                        if (cVar55 != -1) {
                                          uVar60 = uVar66 - 2;
                                          pvVar70 = param_4;
                                          if ((uVar60 < 2) &&
                                             ((uVar60 != 1 || (pvVar70 = pvVar67, (long)pvVar67 < 1)
                                              ))) {
                                            FUN_10090d0b8(0,0,puVar9);
                                            goto LAB_10091d0b8;
                                          }
                                          lVar15 = (ulong)uVar5 + lVar15;
                                          if (SCARRY8(lVar8,lVar15)) {
                    /* WARNING: Does not return */
                                            pcVar59 = (code *)SoftwareBreakpoint(1,0x10091c644);
                                            (*pcVar59)();
                                          }
                                          if ((ulong)pvVar70 >> 0x20 == 0) {
                                            puVar32 = &DAT_100f16930;
                                            _swift_allocObject(&DAT_100f16930,0x58,7);
                                            *(undefined **)(puVar32 + 0x10) = param_13;
                                            *(long *)(puVar32 + 0x18) = param_1;
                                            *(long *)(puVar32 + 0x20) = lVar8 + lVar15;
                                            puVar32[0x28] = 0;
                                            *(void **)(puVar32 + 0x30) = pvVar70;
                                            *(undefined8 *)(puVar32 + 0x38) = param_5;
                                            *(undefined8 *)(puVar32 + 0x40) = param_6;
                                            *(undefined8 *)(puVar32 + 0x48) = param_7;
                                            *(undefined8 *)(puVar32 + 0x50) = param_8;
                                            local_2a8 = local_198;
                                            FUN_1008f68cc(local_198,&DAT_100eeaaa8,param_10);
                                            _swift_retain(param_13);
                                            _swift_retain(param_1);
                                            _swift_retain(local_2a8);
                                            FUN_100914f44(0,1,param_13,local_2a8,FUN_10092d308,
                                                          puVar32);
                                            _swift_release(puVar32);
                                            _swift_release(local_2a8);
                                          }
                                          else {
                                            local_110 = 0;
                                            uStack_108 = 0xe000000000000000;
                                            Swift::_StringGuts::grow(0x44,_Var56);
                                            SVar79.bridgeObject = (void *)0xeb00000000282074;
                                            SVar79.str = (char *)0x6e756f4365747962;
                                            SVar95.bridgeObject = pvVar58;
                                            SVar95.str = pcVar57;
                                            Swift::String::append(SVar79,SVar95);
                                            local_128[0] = pvVar70;
                                            SVar84 = Swift::CustomStringConvertible::get_description
                                                               ();
                                            SVar96.bridgeObject = pvVar58;
                                            SVar96.str = pcVar57;
                                            Swift::String::append(SVar84,SVar96);
                                            _swift_bridgeObjectRelease(SVar84.bridgeObject);
                                            puVar50 = (undefined8 *)0xd000000000000037;
                                            SVar80.bridgeObject = (void *)0x8000000100db4b30;
                                            SVar80.str = (char *)0xd000000000000037;
                                            SVar97.bridgeObject = pvVar58;
                                            SVar97.str = pcVar57;
                                            Swift::String::append(SVar80,SVar97);
                                            uVar63 = uStack_108;
                                            uVar34 = local_110;
                                            FUN_1008d5300();
                                            puVar32 = &DAT_100ef11e8;
                                            _swift_allocError(&DAT_100ef11e8,puVar50,0,0);
                                            *puVar50 = uVar34;
                                            puVar50[1] = uVar63;
                                            *(undefined4 *)(puVar50 + 2) = 0x16;
                                            local_2a8 = puVar32;
                                            FUN_10063dd74();
                                            _swift_errorRelease(puVar32);
                                          }
                                          puVar32 = &DAT_100f16548;
                                          _swift_allocObject(&DAT_100f16548,0x98,7);
                                          *(code **)(puVar32 + 0x10) = param_11;
                                          *(undefined8 *)(puVar32 + 0x18) = param_12;
                                          *(undefined **)(puVar32 + 0x20) = puVar9;
                                          *(undefined **)(puVar32 + 0x28) = param_9;
                                          *(char **)(puVar32 + 0x30) = param_10;
                                          *(void **)(puVar32 + 0x38) = pvVar67;
                                          *(void **)(puVar32 + 0x40) = param_4;
                                          *(undefined **)(puVar32 + 0x48) = param_13;
                                          *(long *)(puVar32 + 0x50) = param_1;
                                          *(long *)(puVar32 + 0x58) = lVar8;
                                          puVar32[0x60] = 0;
                                          *(undefined8 *)(puVar32 + 0x68) = param_5;
                                          *(undefined8 *)(puVar32 + 0x70) = param_6;
                                          *(undefined8 *)(puVar32 + 0x78) = param_7;
                                          *(undefined8 *)(puVar32 + 0x80) = param_8;
                                          *(ulong *)(puVar32 + 0x88) = uVar60;
                                          *(long *)(puVar32 + 0x90) = lVar15;
                                          puVar35 = &DAT_100f16570;
                                          _swift_allocObject(&DAT_100f16570,0x28,7);
                                          *(code **)(puVar35 + 0x10) = thunk_FUN_10092d0a0;
                                          *(undefined **)(puVar35 + 0x18) = puVar32;
                                          *(undefined **)(puVar35 + 0x20) = local_2a8;
                                          uVar62 = *(ulong *)(local_2a8 + 0x28);
                                          lVar30 = *(long *)(local_2a8 + 0x30);
                                          _swift_getObjectType();
                                          pcVar59 = *(code **)(lVar30 + 0x10);
                                          _swift_retain_n(param_13,2);
                                          _swift_retain_n(param_1,2);
                                          _swift_retain_n(param_12,2);
                                          _swift_retain_n(puVar9,2);
                                          _swift_unknownObjectRetain_n(param_9,2);
                                          _swift_retain_n(puVar32,2);
                                          _swift_retain_n(local_2a8,2);
                                          uVar64 = uVar62;
                                          (*pcVar59)(uVar62,lVar30);
                                          if ((uVar64 & 1) == 0) {
                                            puVar36 = &DAT_100f16598;
                                            _swift_allocObject(&DAT_100f16598,0x28,7);
                                            *(undefined **)(puVar36 + 0x10) = local_2a8;
                                            *(code **)(puVar36 + 0x18) = thunk_FUN_10092be10;
                                            *(undefined **)(puVar36 + 0x20) = puVar35;
                                            pcVar59 = *(code **)(lVar30 + 0x18);
                                            _swift_retain(local_2a8);
                                            _swift_retain(puVar35);
                                            (*pcVar59)(thunk_FUN_10092be1c,puVar36,uVar62,lVar30);
                                            _swift_release(param_12);
                                            _swift_release(puVar36);
                                            _swift_release(local_2a8);
                                            _swift_release_n(puVar32,2);
                                            _swift_release(puVar35);
                                          }
                                          else {
                                            _swift_beginAccess(local_2a8 + 0x10,&local_110,0,0);
                                            uVar62 = *(ulong *)(local_2a8 + 0x20);
                                            if (uVar62 >> 0x38 < 0xff) {
                                              lVar30 = *(long *)(local_2a8 + 0x10);
                                              uVar34 = *(undefined8 *)(local_2a8 + 0x18);
                                              if (uVar62 >> 0x38 == 1) {
                                                uVar66 = *(ulong *)(puVar9 + 0x20);
                                                lVar8 = *(long *)(puVar9 + 0x28);
                                                _swift_getObjectType();
                                                pcVar59 = *(code **)(lVar8 + 0x10);
                                                uVar60 = uVar62;
                                                FUN_1008fa5cc(lVar30,uVar34,uVar62,1);
                                                (*pcVar59)(uVar66,lVar8);
                                                if ((uVar66 & 1) == 0) {
                                                  uVar63 = *(undefined8 *)(puVar9 + 0x20);
                                                  lVar8 = *(long *)(puVar9 + 0x28);
                                                  _swift_getObjectType(uVar63);
                                                  puVar36 = &DAT_100f165c0;
                                                  _swift_allocObject(&DAT_100f165c0,0x20,7);
                                                  *(undefined **)(puVar36 + 0x10) = puVar9;
                                                  *(long *)(puVar36 + 0x18) = lVar30;
                                                  pcVar59 = *(code **)(lVar8 + 0x18);
                                                  _swift_retain(puVar9);
                                                  FUN_10092be28(lVar30,uVar34,uVar62);
                                                  (*pcVar59)(thunk_FUN_1005dfd68,puVar36,uVar63,
                                                             lVar8);
                                                  _swift_release(puVar36);
                                                }
                                                else {
                                                  lVar15 = lVar30;
                                                  FUN_1005de8f4(lVar30);
                                                  FUN_1006486f8();
                                                  FUN_100004550(lVar15,lVar8);
                                                  _swift_bridgeObjectRelease(uVar60);
                                                }
                                              }
                                              else {
                                                uVar5 = (int)((ulong)uVar34 >> 0x20) - (int)uVar34;
                                                FUN_1008fa5cc(lVar30,uVar34,uVar62);
                                                lVar37 = lVar30;
                                                (*param_11)(lVar30,uVar34,uVar62 & 0xffffffffffffff)
                                                ;
                                                if (uVar5 == 0) {
                                                  puVar36 = &DAT_100f165e8;
                                                  _swift_allocObject(&DAT_100f165e8,0x28,7);
                                                  *(code **)(puVar36 + 0x10) = thunk_FUN_10092be50;
                                                  *(undefined **)(puVar36 + 0x18) = puVar9;
                                                  *(long *)(puVar36 + 0x20) = lVar37;
                                                  uVar66 = *(ulong *)(lVar37 + 0x20);
                                                  lVar8 = *(long *)(lVar37 + 0x28);
                                                  _swift_getObjectType();
                                                  pcVar59 = *(code **)(lVar8 + 0x10);
                                                  _swift_retain_n(puVar9,5);
                                                  _swift_retain_n(lVar37,2);
                                                  uVar60 = uVar66;
                                                  (*pcVar59)(uVar66,lVar8);
                                                  puVar38 = puVar9;
                                                  if ((uVar60 & 1) == 0) {
                                                    _swift_release(puVar9);
                                                    puVar40 = &DAT_100f16610;
                                                    _swift_allocObject(&DAT_100f16610,0x28,7);
                                                    *(long *)(puVar40 + 0x10) = lVar37;
                                                    *(code **)(puVar40 + 0x18) = thunk_FUN_10065310c
                                                    ;
                                                    *(undefined **)(puVar40 + 0x20) = puVar36;
                                                    pcVar59 = *(code **)(lVar8 + 0x18);
                                                    _swift_retain(lVar37);
                                                    _swift_retain(puVar36);
                                                    (*pcVar59)(thunk_FUN_1008db360,puVar40,uVar66,
                                                               lVar8);
                                                    _swift_release(puVar40);
                                                    _swift_release_n(lVar37,2);
                                                    _swift_release_n(puVar9,2);
                                                    _swift_release(puVar36);
                                                  }
                                                  else {
                                                    _swift_beginAccess(lVar37 + 0x10,local_128,0,0);
                                                    cVar54 = *(char *)(lVar37 + 0x18);
                                                    if (cVar54 == -1) {
                                                      _swift_release(puVar9);
                                                      _swift_beginAccess(lVar37 + 0x30,&local_140,
                                                                         0x21,0);
                                                      FUN_10064967c(thunk_FUN_10065310c,puVar36);
                                                      _swift_endAccess(&local_140);
                                                    }
                                                    else {
                                                      uVar63 = *(undefined8 *)(lVar37 + 0x10);
                                                      FUN_100308524(uVar63,cVar54);
                                                      FUN_10092b43c(uVar63,cVar54,puVar9);
                                                      _swift_release(puVar9);
                                                      FUN_100308538(uVar63,cVar54);
                                                    }
                                                    FUN_1006486f8(0,0,0);
                                                    FUN_100004550(0,0);
                                                    _swift_release_n(lVar37,2);
                                                    _swift_release_n(puVar9,2);
                                                    _swift_release(puVar36);
                                                    _swift_bridgeObjectRelease(0);
                                                  }
                                                }
                                                else {
                                                  puVar40 = param_9;
                                                  FUN_100915740(param_9,param_10);
                                                  _swift_release(lVar37);
                                                  puVar36 = &DAT_100f16638;
                                                  _swift_allocObject(&DAT_100f16638,0xa0,7);
                                                  *(undefined **)(puVar36 + 0x10) = param_9;
                                                  *(char **)(puVar36 + 0x18) = param_10;
                                                  *(void **)(puVar36 + 0x20) = pvVar67;
                                                  *(void **)(puVar36 + 0x28) = param_4;
                                                  *(undefined **)(puVar36 + 0x30) = param_13;
                                                  *(long *)(puVar36 + 0x38) = param_1;
                                                  *(long *)(puVar36 + 0x40) = lVar8;
                                                  puVar36[0x48] = 0;
                                                  *(undefined8 *)(puVar36 + 0x50) = param_5;
                                                  *(undefined8 *)(puVar36 + 0x58) = param_6;
                                                  *(undefined8 *)(puVar36 + 0x60) = param_7;
                                                  *(undefined8 *)(puVar36 + 0x68) = param_8;
                                                  *(code **)(puVar36 + 0x70) = param_11;
                                                  *(undefined8 *)(puVar36 + 0x78) = param_12;
                                                  *(undefined **)(puVar36 + 0x80) = puVar9;
                                                  *(ulong *)(puVar36 + 0x88) = uVar60;
                                                  *(long *)(puVar36 + 0x90) = lVar15;
                                                  *(ulong *)(puVar36 + 0x98) = (ulong)uVar5;
                                                  puVar38 = &DAT_100f16660;
                                                  _swift_allocObject(&DAT_100f16660,0x28,7);
                                                  *(code **)(puVar38 + 0x10) = thunk_FUN_10092d008;
                                                  *(undefined **)(puVar38 + 0x18) = puVar36;
                                                  *(undefined **)(puVar38 + 0x20) = puVar40;
                                                  uVar60 = *(ulong *)(puVar40 + 0x20);
                                                  lVar37 = *(long *)(puVar40 + 0x28);
                                                  _swift_getObjectType();
                                                  pcVar59 = *(code **)(lVar37 + 0x10);
                                                  _swift_retain_n(param_13,2);
                                                  _swift_retain_n(param_1,2);
                                                  _swift_retain_n(param_12,2);
                                                  _swift_retain_n(puVar9,2);
                                                  _swift_unknownObjectRetain_n(param_9,2);
                                                  _swift_retain_n(puVar36,2);
                                                  _swift_retain_n(puVar40,2);
                                                  uVar64 = uVar60;
                                                  (*pcVar59)(uVar60,lVar37);
                                                  if ((uVar64 & 1) == 0) {
                                                    puVar39 = &DAT_100f16688;
                                                    _swift_allocObject(&DAT_100f16688,0x28,7);
                                                    *(undefined **)(puVar39 + 0x10) = puVar40;
                                                    *(code **)(puVar39 + 0x18) = thunk_FUN_10065310c
                                                    ;
                                                    *(undefined **)(puVar39 + 0x20) = puVar38;
                                                    pcVar59 = *(code **)(lVar37 + 0x18);
                                                    _swift_retain(puVar40);
                                                    _swift_retain(puVar38);
                                                    (*pcVar59)(thunk_FUN_1008db360,puVar39,uVar60,
                                                               lVar37);
                                                    _swift_unknownObjectRelease(param_9);
                                                    _swift_release(puVar39);
                                                    _swift_release(puVar40);
                                                    _swift_release_n(puVar36,2);
                                                    _swift_release(puVar38);
                                                  }
                                                  else {
                                                    _Var56.unknown = (undefined *)local_128;
                                                    pcVar57 = (char *)0x0;
                                                    pvVar58 = (void *)0x0;
                                                    _swift_beginAccess(puVar40 + 0x10);
                                                    uVar63 = *(undefined8 *)(puVar40 + 0x10);
                                                    cVar54 = puVar40[0x18];
                                                    if (cVar54 == '\x01') {
                                                      uVar66 = *(ulong *)(puVar9 + 0x20);
                                                      lVar8 = *(long *)(puVar9 + 0x28);
                                                      _swift_getObjectType();
                                                      pcVar59 = *(code **)(lVar8 + 0x10);
                                                      FUN_100308524(uVar63,1);
                                                      (*pcVar59)(uVar66,lVar8);
                                                      if ((uVar66 & 1) == 0) {
                                                        uVar41 = *(undefined8 *)(puVar9 + 0x20);
                                                        lVar8 = *(long *)(puVar9 + 0x28);
                                                        _swift_getObjectType(uVar41);
                                                        puVar39 = &DAT_100f166b0;
                                                        _swift_allocObject(&DAT_100f166b0,0x20,7);
                                                        *(undefined **)(puVar39 + 0x10) = puVar9;
                                                        *(undefined8 *)(puVar39 + 0x18) = uVar63;
                                                        pcVar59 = *(code **)(lVar8 + 0x18);
                                                        _swift_retain(puVar9);
                                                        FUN_1005dfeb4(uVar63,1);
                                                        (*pcVar59)(thunk_FUN_1005dfd68,puVar39,
                                                                   uVar41,lVar8);
                                                        _swift_release(puVar39);
                                                      }
                                                      else {
                                                        uVar41 = uVar63;
                                                        FUN_1005de8f4(uVar63);
                                                        FUN_1006486f8();
                                                        FUN_100004550(uVar41,lVar8);
                                                        _swift_bridgeObjectRelease(pcVar57);
                                                      }
                                                      cVar54 = '\x01';
LAB_10091cfbc:
                                                      FUN_100308538(uVar63,cVar54);
                                                    }
                                                    else {
                                                      if (cVar54 != -1) {
                                                        uVar60 = uVar66 - 3;
                                                        pvVar70 = param_4;
                                                        if ((uVar60 < 2) &&
                                                           ((uVar60 != 1 ||
                                                            (pvVar70 = pvVar67, (long)pvVar67 < 1)))
                                                           ) {
                                                          FUN_10090d0b8(0,0,puVar9);
                                                          goto LAB_10091cfbc;
                                                        }
                                                        lVar15 = (ulong)uVar5 + lVar15;
                                                        if (SCARRY8(lVar8,lVar15)) {
                    /* WARNING: Does not return */
                                                          pcVar59 = (code *)SoftwareBreakpoint(1,
                                                  0x10091d380);
                                                  (*pcVar59)();
                                                  }
                                                  if ((ulong)pvVar70 >> 0x20 == 0) {
                                                    puVar39 = &DAT_100f16908;
                                                    _swift_allocObject(&DAT_100f16908,0x58,7);
                                                    *(undefined **)(puVar39 + 0x10) = param_13;
                                                    *(long *)(puVar39 + 0x18) = param_1;
                                                    *(long *)(puVar39 + 0x20) = lVar8 + lVar15;
                                                    puVar39[0x28] = 0;
                                                    *(void **)(puVar39 + 0x30) = pvVar70;
                                                    *(undefined8 *)(puVar39 + 0x38) = param_5;
                                                    *(undefined8 *)(puVar39 + 0x40) = param_6;
                                                    *(undefined8 *)(puVar39 + 0x48) = param_7;
                                                    *(undefined8 *)(puVar39 + 0x50) = param_8;
                                                    local_330 = local_198;
                                                    FUN_1008f68cc(local_198,&DAT_100eeaaa8,param_10)
                                                    ;
                                                    _swift_retain(param_13);
                                                    _swift_retain(param_1);
                                                    _swift_retain(local_330);
                                                    FUN_100914f44(0,1,param_13,local_330,
                                                                  FUN_10092d308,puVar39);
                                                    _swift_release(puVar39);
                                                    _swift_release(local_330);
                                                  }
                                                  else {
                                                    local_140 = 0;
                                                    local_138 = 0xe000000000000000;
                                                    Swift::_StringGuts::grow(0x44,_Var56);
                                                    SVar81.bridgeObject = (void *)0xeb00000000282074
                                                    ;
                                                    SVar81.str = (char *)0x6e756f4365747962;
                                                    SVar98.bridgeObject = pvVar58;
                                                    SVar98.str = pcVar57;
                                                    Swift::String::append(SVar81,SVar98);
                                                    local_158[0] = pvVar70;
                                                    SVar84 = Swift::CustomStringConvertible::
                                                             get_description();
                                                    SVar99.bridgeObject = pvVar58;
                                                    SVar99.str = pcVar57;
                                                    Swift::String::append(SVar84,SVar99);
                                                    _swift_bridgeObjectRelease(SVar84.bridgeObject);
                                                    puVar50 = (undefined8 *)0xd000000000000037;
                                                    SVar82.bridgeObject = (void *)0x8000000100db4b30
                                                    ;
                                                    SVar82.str = (char *)0xd000000000000037;
                                                    SVar100.bridgeObject = pvVar58;
                                                    SVar100.str = pcVar57;
                                                    Swift::String::append(SVar82,SVar100);
                                                    uVar65 = local_138;
                                                    uVar41 = local_140;
                                                    FUN_1008d5300();
                                                    puVar39 = &DAT_100ef11e8;
                                                    _swift_allocError(&DAT_100ef11e8,puVar50,0,0);
                                                    *puVar50 = uVar41;
                                                    puVar50[1] = uVar65;
                                                    *(undefined4 *)(puVar50 + 2) = 0x16;
                                                    local_330 = puVar39;
                                                    FUN_10063dd74();
                                                    _swift_errorRelease(puVar39);
                                                  }
                                                  puVar39 = &DAT_100f166d8;
                                                  _swift_allocObject(&DAT_100f166d8,0x98,7);
                                                  *(code **)(puVar39 + 0x10) = param_11;
                                                  *(undefined8 *)(puVar39 + 0x18) = param_12;
                                                  *(undefined **)(puVar39 + 0x20) = puVar9;
                                                  *(undefined **)(puVar39 + 0x28) = param_9;
                                                  *(char **)(puVar39 + 0x30) = param_10;
                                                  *(void **)(puVar39 + 0x38) = pvVar67;
                                                  *(void **)(puVar39 + 0x40) = param_4;
                                                  *(undefined **)(puVar39 + 0x48) = param_13;
                                                  *(long *)(puVar39 + 0x50) = param_1;
                                                  *(long *)(puVar39 + 0x58) = lVar8;
                                                  puVar39[0x60] = 0;
                                                  *(undefined8 *)(puVar39 + 0x68) = param_5;
                                                  *(undefined8 *)(puVar39 + 0x70) = param_6;
                                                  *(undefined8 *)(puVar39 + 0x78) = param_7;
                                                  *(undefined8 *)(puVar39 + 0x80) = param_8;
                                                  *(ulong *)(puVar39 + 0x88) = uVar60;
                                                  *(long *)(puVar39 + 0x90) = lVar15;
                                                  puVar42 = &DAT_100f16700;
                                                  _swift_allocObject(&DAT_100f16700,0x28,7);
                                                  *(code **)(puVar42 + 0x10) = thunk_FUN_10092d0a0;
                                                  *(undefined **)(puVar42 + 0x18) = puVar39;
                                                  *(undefined **)(puVar42 + 0x20) = local_330;
                                                  uVar64 = *(ulong *)(local_330 + 0x28);
                                                  lVar37 = *(long *)(local_330 + 0x30);
                                                  _swift_getObjectType();
                                                  pcVar59 = *(code **)(lVar37 + 0x10);
                                                  _swift_retain_n(param_13,2);
                                                  _swift_retain_n(param_1,2);
                                                  _swift_retain_n(param_12,2);
                                                  _swift_retain_n(puVar9,2);
                                                  _swift_unknownObjectRetain_n(param_9,2);
                                                  _swift_retain_n(puVar39,2);
                                                  _swift_retain_n(local_330,2);
                                                  uVar43 = uVar64;
                                                  (*pcVar59)(uVar64,lVar37);
                                                  if ((uVar43 & 1) == 0) {
                                                    puVar44 = &DAT_100f16728;
                                                    _swift_allocObject(&DAT_100f16728,0x28,7);
                                                    *(undefined **)(puVar44 + 0x10) = local_330;
                                                    *(code **)(puVar44 + 0x18) = thunk_FUN_10092be10
                                                    ;
                                                    *(undefined **)(puVar44 + 0x20) = puVar42;
                                                    pcVar59 = *(code **)(lVar37 + 0x18);
                                                    _swift_retain(local_330);
                                                    _swift_retain(puVar42);
                                                    (*pcVar59)(thunk_FUN_10092be1c,puVar44,uVar64,
                                                               lVar37);
                                                    _swift_release(param_12);
                                                    _swift_release(puVar44);
                                                    _swift_release(local_330);
                                                    _swift_release_n(puVar39,2);
                                                    _swift_release(puVar42);
                                                  }
                                                  else {
                                                    _swift_beginAccess(local_330 + 0x10,&local_140,0
                                                                       ,0);
                                                    uVar64 = *(ulong *)(local_330 + 0x20);
                                                    if (uVar64 >> 0x38 < 0xff) {
                                                      lVar37 = *(long *)(local_330 + 0x10);
                                                      uVar41 = *(undefined8 *)(local_330 + 0x18);
                                                      if (uVar64 >> 0x38 == 1) {
                                                        uVar66 = *(ulong *)(puVar9 + 0x20);
                                                        lVar8 = *(long *)(puVar9 + 0x28);
                                                        _swift_getObjectType();
                                                        pcVar59 = *(code **)(lVar8 + 0x10);
                                                        uVar60 = uVar64;
                                                        FUN_1008fa5cc(lVar37,uVar41,uVar64,1);
                                                        (*pcVar59)(uVar66,lVar8);
                                                        if ((uVar66 & 1) == 0) {
                                                          uVar65 = *(undefined8 *)(puVar9 + 0x20);
                                                          lVar8 = *(long *)(puVar9 + 0x28);
                                                          _swift_getObjectType(uVar65);
                                                          puVar44 = &DAT_100f16750;
                                                          _swift_allocObject(&DAT_100f16750,0x20,7);
                                                          *(undefined **)(puVar44 + 0x10) = puVar9;
                                                          *(long *)(puVar44 + 0x18) = lVar37;
                                                          pcVar59 = *(code **)(lVar8 + 0x18);
                                                          _swift_retain(puVar9);
                                                          FUN_10092be28(lVar37,uVar41,uVar64);
                                                          (*pcVar59)(thunk_FUN_1005dfd68,puVar44,
                                                                     uVar65,lVar8);
                                                          _swift_release(puVar44);
                                                        }
                                                        else {
                                                          lVar15 = lVar37;
                                                          FUN_1005de8f4(lVar37);
                                                          FUN_1006486f8();
                                                          FUN_100004550(lVar15,lVar8);
                                                          _swift_bridgeObjectRelease(uVar60);
                                                        }
                                                      }
                                                      else {
                                                        uVar5 = (int)((ulong)uVar41 >> 0x20) -
                                                                (int)uVar41;
                                                        FUN_1008fa5cc(lVar37,uVar41,uVar64);
                                                        lVar45 = lVar37;
                                                        (*param_11)(lVar37,uVar41,
                                                                    uVar64 & 0xffffffffffffff);
                                                        if (uVar5 == 0) {
                                                          puVar44 = &DAT_100f16778;
                                                          _swift_allocObject(&DAT_100f16778,0x28,7);
                                                          *(code **)(puVar44 + 0x10) =
                                                               thunk_FUN_10092be50;
                                                          *(undefined **)(puVar44 + 0x18) = puVar9;
                                                          *(long *)(puVar44 + 0x20) = lVar45;
                                                          uVar66 = *(ulong *)(lVar45 + 0x20);
                                                          lVar8 = *(long *)(lVar45 + 0x28);
                                                          _swift_getObjectType();
                                                          pcVar59 = *(code **)(lVar8 + 0x10);
                                                          _swift_retain_n(puVar9,5);
                                                          _swift_retain_n(lVar45,2);
                                                          uVar60 = uVar66;
                                                          (*pcVar59)(uVar66,lVar8);
                                                          puVar46 = puVar9;
                                                          if ((uVar60 & 1) == 0) {
                                                            _swift_release(puVar9);
                                                            puVar48 = &DAT_100f167a0;
                                                            _swift_allocObject(&DAT_100f167a0,0x28,7
                                                                              );
                                                            *(long *)(puVar48 + 0x10) = lVar45;
                                                            *(code **)(puVar48 + 0x18) =
                                                                 thunk_FUN_10065310c;
                                                            *(undefined **)(puVar48 + 0x20) =
                                                                 puVar44;
                                                            pcVar59 = *(code **)(lVar8 + 0x18);
                                                            _swift_retain(lVar45);
                                                            _swift_retain(puVar44);
                                                            (*pcVar59)(thunk_FUN_1008db360,puVar48,
                                                                       uVar66,lVar8);
                                                            _swift_release(puVar48);
                                                            _swift_release_n(lVar45,2);
                                                            _swift_release_n(puVar9,2);
                                                            _swift_release(puVar44);
                                                          }
                                                          else {
                                                            _swift_beginAccess(lVar45 + 0x10,
                                                                               local_158,0,0);
                                                            cVar53 = *(char *)(lVar45 + 0x18);
                                                            if (cVar53 == -1) {
                                                              _swift_release(puVar9);
                                                              _swift_beginAccess(lVar45 + 0x30,
                                                                                 &local_170,0x21,0);
                                                              FUN_10064967c(thunk_FUN_10065310c,
                                                                            puVar44);
                                                              _swift_endAccess(&local_170);
                                                            }
                                                            else {
                                                              uVar65 = *(undefined8 *)
                                                                        (lVar45 + 0x10);
                                                              FUN_100308524(uVar65,cVar53);
                                                              FUN_10092b43c(uVar65,cVar53,puVar9);
                                                              _swift_release(puVar9);
                                                              FUN_100308538(uVar65,cVar53);
                                                            }
                                                            FUN_1006486f8(0,0,0);
                                                            FUN_100004550(0,0);
                                                            _swift_release_n(lVar45,2);
                                                            _swift_release_n(puVar9,2);
                                                            _swift_release(puVar44);
                                                            _swift_bridgeObjectRelease(0);
                                                          }
                                                        }
                                                        else {
                                                          puVar48 = param_9;
                                                          FUN_100915740(param_9,param_10);
                                                          _swift_release(lVar45);
                                                          puVar44 = &DAT_100f167c8;
                                                          _swift_allocObject(&DAT_100f167c8,0xa0,7);
                                                          *(undefined **)(puVar44 + 0x10) = param_9;
                                                          *(char **)(puVar44 + 0x18) = param_10;
                                                          *(void **)(puVar44 + 0x20) = pvVar67;
                                                          *(void **)(puVar44 + 0x28) = param_4;
                                                          *(undefined **)(puVar44 + 0x30) = param_13
                                                          ;
                                                          *(long *)(puVar44 + 0x38) = param_1;
                                                          *(long *)(puVar44 + 0x40) = lVar8;
                                                          puVar44[0x48] = 0;
                                                          *(undefined8 *)(puVar44 + 0x50) = param_5;
                                                          *(undefined8 *)(puVar44 + 0x58) = param_6;
                                                          *(undefined8 *)(puVar44 + 0x60) = param_7;
                                                          *(undefined8 *)(puVar44 + 0x68) = param_8;
                                                          *(code **)(puVar44 + 0x70) = param_11;
                                                          *(undefined8 *)(puVar44 + 0x78) = param_12
                                                          ;
                                                          *(undefined **)(puVar44 + 0x80) = puVar9;
                                                          *(ulong *)(puVar44 + 0x88) = uVar60;
                                                          *(long *)(puVar44 + 0x90) = lVar15;
                                                          *(ulong *)(puVar44 + 0x98) = (ulong)uVar5;
                                                          puVar46 = &DAT_100f167f0;
                                                          _swift_allocObject(&DAT_100f167f0,0x28,7);
                                                          *(code **)(puVar46 + 0x10) =
                                                               thunk_FUN_10092d008;
                                                          *(undefined **)(puVar46 + 0x18) = puVar44;
                                                          *(undefined **)(puVar46 + 0x20) = puVar48;
                                                          uVar60 = *(ulong *)(puVar48 + 0x20);
                                                          lVar45 = *(long *)(puVar48 + 0x28);
                                                          _swift_getObjectType();
                                                          pcVar59 = *(code **)(lVar45 + 0x10);
                                                          _swift_retain_n(param_13,2);
                                                          _swift_retain_n(param_1,2);
                                                          _swift_retain_n(param_12,2);
                                                          _swift_retain_n(puVar9,2);
                                                          _swift_unknownObjectRetain_n(param_9,2);
                                                          _swift_retain_n(puVar44,2);
                                                          _swift_retain_n(puVar48,2);
                                                          uVar43 = uVar60;
                                                          (*pcVar59)(uVar60,lVar45);
                                                          if ((uVar43 & 1) == 0) {
                                                            puVar47 = &DAT_100f16818;
                                                            _swift_allocObject(&DAT_100f16818,0x28,7
                                                                              );
                                                            *(undefined **)(puVar47 + 0x10) =
                                                                 puVar48;
                                                            *(code **)(puVar47 + 0x18) =
                                                                 thunk_FUN_10065310c;
                                                            *(undefined **)(puVar47 + 0x20) =
                                                                 puVar46;
                                                            pcVar59 = *(code **)(lVar45 + 0x18);
                                                            _swift_retain(puVar48);
                                                            _swift_retain(puVar46);
                                                            (*pcVar59)(thunk_FUN_1008db360,puVar47,
                                                                       uVar60,lVar45);
                                                            _swift_unknownObjectRelease(param_9);
                                                            _swift_release(puVar47);
                                                            _swift_release(puVar48);
                                                            _swift_release_n(puVar44,2);
                                                            _swift_release(puVar46);
                                                          }
                                                          else {
                                                            _Var56.unknown = (undefined *)local_158;
                                                            pcVar57 = (char *)0x0;
                                                            pvVar58 = (void *)0x0;
                                                            _swift_beginAccess(puVar48 + 0x10);
                                                            uVar65 = *(undefined8 *)(puVar48 + 0x10)
                                                            ;
                                                            cVar53 = puVar48[0x18];
                                                            if (cVar53 == '\x01') {
                                                              uVar66 = *(ulong *)(puVar9 + 0x20);
                                                              lVar8 = *(long *)(puVar9 + 0x28);
                                                              _swift_getObjectType();
                                                              pcVar59 = *(code **)(lVar8 + 0x10);
                                                              FUN_100308524(uVar65,1);
                                                              (*pcVar59)(uVar66,lVar8);
                                                              if ((uVar66 & 1) == 0) {
                                                                uVar49 = *(undefined8 *)
                                                                          (puVar9 + 0x20);
                                                                lVar8 = *(long *)(puVar9 + 0x28);
                                                                _swift_getObjectType(uVar49);
                                                                puVar47 = &DAT_100f16840;
                                                                _swift_allocObject(&DAT_100f16840,
                                                                                   0x20,7);
                                                                *(undefined **)(puVar47 + 0x10) =
                                                                     puVar9;
                                                                *(undefined8 *)(puVar47 + 0x18) =
                                                                     uVar65;
                                                                pcVar59 = *(code **)(lVar8 + 0x18);
                                                                _swift_retain(puVar9);
                                                                FUN_1005dfeb4(uVar65,1);
                                                                (*pcVar59)(thunk_FUN_1005dfd68,
                                                                           puVar47,uVar49,lVar8);
                                                                _swift_release(puVar47);
                                                              }
                                                              else {
                                                                uVar49 = uVar65;
                                                                FUN_1005de8f4(uVar65);
                                                                FUN_1006486f8();
                                                                FUN_100004550(uVar49,lVar8);
                                                                _swift_bridgeObjectRelease(pcVar57);
                                                              }
                                                              cVar53 = '\x01';
LAB_10091cec0:
                                                              FUN_100308538(uVar65,cVar53);
                                                            }
                                                            else {
                                                              if (cVar53 != -1) {
                                                                uVar66 = uVar66 - 4;
                                                                pvVar70 = param_4;
                                                                if ((uVar66 < 2) &&
                                                                   ((uVar66 != 1 ||
                                                                    (pvVar70 = pvVar67,
                                                                    (long)pvVar67 < 1)))) {
                                                                  FUN_10090d0b8(0,0,puVar9);
                                                                }
                                                                else {
                                                                  lVar15 = (ulong)uVar5 + lVar15;
                                                                  if (SCARRY8(lVar8,lVar15)) {
                    /* WARNING: Does not return */
                                                                    pcVar59 = (code *)
                                                  SoftwareBreakpoint(1,0x10091d384);
                                                  (*pcVar59)();
                                                  }
                                                  if ((ulong)pvVar70 >> 0x20 == 0) {
                                                    puVar47 = &DAT_100f168e0;
                                                    _swift_allocObject(&DAT_100f168e0,0x58,7);
                                                    *(undefined **)(puVar47 + 0x10) = param_13;
                                                    *(long *)(puVar47 + 0x18) = param_1;
                                                    *(long *)(puVar47 + 0x20) = lVar8 + lVar15;
                                                    puVar47[0x28] = 0;
                                                    *(void **)(puVar47 + 0x30) = pvVar70;
                                                    *(undefined8 *)(puVar47 + 0x38) = param_5;
                                                    *(undefined8 *)(puVar47 + 0x40) = param_6;
                                                    *(undefined8 *)(puVar47 + 0x48) = param_7;
                                                    *(undefined8 *)(puVar47 + 0x50) = param_8;
                                                    FUN_1008f68cc(local_198,&DAT_100eeaaa8,param_10)
                                                    ;
                                                    _swift_retain(param_13);
                                                    _swift_retain(param_1);
                                                    _swift_retain(local_198);
                                                    FUN_100914f44(0,1,param_13,local_198,
                                                                  FUN_10092d308,puVar47);
                                                    _swift_release(puVar47);
                                                    _swift_release(local_198);
                                                  }
                                                  else {
                                                    local_170 = 0;
                                                    local_168 = 0xe000000000000000;
                                                    Swift::_StringGuts::grow(0x44,_Var56);
                                                    SVar83.bridgeObject = (void *)0xeb00000000282074
                                                    ;
                                                    SVar83.str = (char *)0x6e756f4365747962;
                                                    SVar101.bridgeObject = pvVar58;
                                                    SVar101.str = pcVar57;
                                                    Swift::String::append(SVar83,SVar101);
                                                    local_188 = pvVar70;
                                                    SVar84 = Swift::CustomStringConvertible::
                                                             get_description();
                                                    SVar102.bridgeObject = pvVar58;
                                                    SVar102.str = pcVar57;
                                                    Swift::String::append(SVar84,SVar102);
                                                    _swift_bridgeObjectRelease(SVar84.bridgeObject);
                                                    puVar50 = (undefined8 *)0xd000000000000037;
                                                    SVar85.bridgeObject = (void *)0x8000000100db4b30
                                                    ;
                                                    SVar85.str = (char *)0xd000000000000037;
                                                    SVar103.bridgeObject = pvVar58;
                                                    SVar103.str = pcVar57;
                                                    Swift::String::append(SVar85,SVar103);
                                                    uVar6 = local_168;
                                                    uVar49 = local_170;
                                                    FUN_1008d5300();
                                                    puVar47 = &DAT_100ef11e8;
                                                    _swift_allocError(&DAT_100ef11e8,puVar50,0,0);
                                                    *puVar50 = uVar49;
                                                    puVar50[1] = uVar6;
                                                    *(undefined4 *)(puVar50 + 2) = 0x16;
                                                    local_198 = puVar47;
                                                    FUN_10063dd74();
                                                    _swift_errorRelease(puVar47);
                                                  }
                                                  puVar47 = &DAT_100f16868;
                                                  _swift_allocObject(&DAT_100f16868,0x98,7);
                                                  *(code **)(puVar47 + 0x10) = param_11;
                                                  *(undefined8 *)(puVar47 + 0x18) = param_12;
                                                  *(undefined **)(puVar47 + 0x20) = puVar9;
                                                  *(undefined **)(puVar47 + 0x28) = param_9;
                                                  *(char **)(puVar47 + 0x30) = param_10;
                                                  *(void **)(puVar47 + 0x38) = pvVar67;
                                                  *(void **)(puVar47 + 0x40) = param_4;
                                                  *(undefined **)(puVar47 + 0x48) = param_13;
                                                  *(long *)(puVar47 + 0x50) = param_1;
                                                  *(long *)(puVar47 + 0x58) = lVar8;
                                                  puVar47[0x60] = 0;
                                                  *(undefined8 *)(puVar47 + 0x68) = param_5;
                                                  *(undefined8 *)(puVar47 + 0x70) = param_6;
                                                  *(undefined8 *)(puVar47 + 0x78) = param_7;
                                                  *(undefined8 *)(puVar47 + 0x80) = param_8;
                                                  *(ulong *)(puVar47 + 0x88) = uVar66;
                                                  *(long *)(puVar47 + 0x90) = lVar15;
                                                  puVar51 = &DAT_100f16890;
                                                  _swift_allocObject(&DAT_100f16890,0x28,7);
                                                  *(code **)(puVar51 + 0x10) = thunk_FUN_10092d0a0;
                                                  *(undefined **)(puVar51 + 0x18) = puVar47;
                                                  *(undefined **)(puVar51 + 0x20) = local_198;
                                                  uVar66 = *(ulong *)(local_198 + 0x28);
                                                  lVar15 = *(long *)(local_198 + 0x30);
                                                  _swift_getObjectType();
                                                  pcVar59 = *(code **)(lVar15 + 0x10);
                                                  _swift_retain_n(param_13,2);
                                                  _swift_retain_n(param_1,2);
                                                  _swift_retain_n(param_12,2);
                                                  _swift_retain_n(puVar9,2);
                                                  _swift_unknownObjectRetain_n(param_9,2);
                                                  _swift_retain_n(puVar47,2);
                                                  _swift_retain_n(local_198,2);
                                                  uVar60 = uVar66;
                                                  (*pcVar59)(uVar66,lVar15);
                                                  if ((uVar60 & 1) == 0) {
                                                    puVar52 = &DAT_100f168b8;
                                                    _swift_allocObject(&DAT_100f168b8,0x28,7);
                                                    *(undefined **)(puVar52 + 0x10) = local_198;
                                                    *(code **)(puVar52 + 0x18) = thunk_FUN_10092be10
                                                    ;
                                                    *(undefined **)(puVar52 + 0x20) = puVar51;
                                                    pcVar59 = *(code **)(lVar15 + 0x18);
                                                    _swift_retain(local_198);
                                                    _swift_retain(puVar51);
                                                    (*pcVar59)(thunk_FUN_10092be1c,puVar52,uVar66,
                                                               lVar15);
                                                    _swift_release(param_12);
                                                    _swift_release(puVar52);
                                                    _swift_release(local_198);
                                                    _swift_release_n(puVar47,2);
                                                    _swift_release(puVar51);
                                                  }
                                                  else {
                                                    _swift_beginAccess(local_198 + 0x10,&local_170,0
                                                                       ,0);
                                                    if (*(ulong *)(local_198 + 0x20) >> 0x38 < 0xff)
                                                    {
                                                      local_188 = *(void **)(local_198 + 0x10);
                                                      local_180 = *(undefined8 *)(local_198 + 0x18);
                                                      local_178 = *(ulong *)(local_198 + 0x20);
                                                      FUN_1008fa5cc();
                                                      FUN_100925494(&local_188,param_11,param_12,
                                                                    puVar9,param_9,param_10,pvVar67,
                                                                    param_4,param_13,param_1,lVar8,0
                                                                   );
                                                      FUN_10090ef88(local_188,local_180,
                                                                    local_178 & 0xffffffffffffff,
                                                                    local_178._7_1_);
                                                    }
                                                    else {
                                                      _swift_beginAccess(local_198 + 0x38,&local_188
                                                                         ,0x21,0);
                                                      FUN_10064967c(thunk_FUN_10092be10,puVar51);
                                                      _swift_endAccess(&local_188);
                                                    }
                                                    FUN_1006486f8(0,0,0);
                                                    FUN_100004550(0,0);
                                                    _swift_release(param_12);
                                                    _swift_release(local_198);
                                                    _swift_release_n(puVar47,2);
                                                    _swift_release(puVar51);
                                                    _swift_bridgeObjectRelease(0);
                                                  }
                                                  _swift_release(local_198);
                                                  _swift_release(param_1);
                                                  _swift_release(param_13);
                                                  _swift_unknownObjectRelease(param_9);
                                                  _swift_release(puVar9);
                                                  }
                                                  goto LAB_10091cec0;
                                                  }
                                                  _swift_beginAccess(puVar48 + 0x30,&local_170,0x21,
                                                                     0);
                                                  FUN_10064967c(thunk_FUN_10065310c,puVar46);
                                                  _swift_endAccess(&local_170);
                                                  }
                                                  FUN_1006486f8(0,0,0);
                                                  FUN_100004550(0,0);
                                                  _swift_unknownObjectRelease(param_9);
                                                  _swift_release(puVar48);
                                                  _swift_release_n(puVar44,2);
                                                  _swift_release(puVar46);
                                                  _swift_bridgeObjectRelease(0);
                                                  }
                                                  _swift_release(puVar48);
                                                  _swift_release(puVar9);
                                                  _swift_release(param_12);
                                                  _swift_release(param_1);
                                                  puVar46 = param_13;
                                                  }
                                                  _swift_release(puVar46);
                                                  }
                                                  FUN_10092be3c(lVar37,uVar41,uVar64);
                                                  }
                                                  else {
                                                    _swift_beginAccess(local_330 + 0x38,local_158,
                                                                       0x21,0);
                                                    FUN_10064967c(thunk_FUN_10092be10,puVar42);
                                                    _swift_endAccess(local_158);
                                                  }
                                                  FUN_1006486f8(0,0,0);
                                                  FUN_100004550(0,0);
                                                  _swift_release(param_12);
                                                  _swift_release(local_330);
                                                  _swift_release_n(puVar39,2);
                                                  _swift_release(puVar42);
                                                  _swift_bridgeObjectRelease(0);
                                                  }
                                                  _swift_release(local_330);
                                                  _swift_release(param_1);
                                                  _swift_release(param_13);
                                                  _swift_unknownObjectRelease(param_9);
                                                  _swift_release(puVar9);
                                                  goto LAB_10091cfbc;
                                                  }
                                                  _swift_beginAccess(puVar40 + 0x30,&local_140,0x21,
                                                                     0);
                                                  FUN_10064967c(thunk_FUN_10065310c,puVar38);
                                                  _swift_endAccess(&local_140);
                                                  }
                                                  FUN_1006486f8(0,0,0);
                                                  FUN_100004550(0,0);
                                                  _swift_unknownObjectRelease(param_9);
                                                  _swift_release(puVar40);
                                                  _swift_release_n(puVar36,2);
                                                  _swift_release(puVar38);
                                                  _swift_bridgeObjectRelease(0);
                                                  }
                                                  _swift_release(puVar40);
                                                  _swift_release(puVar9);
                                                  _swift_release(param_12);
                                                  _swift_release(param_1);
                                                  puVar38 = param_13;
                                                }
                                                _swift_release(puVar38);
                                              }
                                              FUN_10092be3c(lVar30,uVar34,uVar62);
                                            }
                                            else {
                                              _swift_beginAccess(local_2a8 + 0x38,local_128,0x21,0);
                                              FUN_10064967c(thunk_FUN_10092be10,puVar35);
                                              _swift_endAccess(local_128);
                                            }
                                            FUN_1006486f8(0,0,0);
                                            FUN_100004550(0,0);
                                            _swift_release(param_12);
                                            _swift_release(local_2a8);
                                            _swift_release_n(puVar32,2);
                                            _swift_release(puVar35);
                                            _swift_bridgeObjectRelease(0);
                                          }
                                          _swift_release(local_2a8);
                                          _swift_release(param_1);
                                          _swift_release(param_13);
                                          _swift_unknownObjectRelease(param_9);
                                          _swift_release(puVar9);
                                          goto LAB_10091d0b8;
                                        }
                                        _swift_beginAccess(puVar33 + 0x30,&local_110,0x21,0);
                                        FUN_10064967c(thunk_FUN_10065310c,puVar31);
                                        _swift_endAccess(&local_110);
                                      }
                                      FUN_1006486f8(0,0,0);
                                      FUN_100004550(0,0);
                                      _swift_unknownObjectRelease(param_9);
                                      _swift_release(puVar33);
                                      _swift_release_n(puVar29,2);
                                      _swift_release(puVar31);
                                      _swift_bridgeObjectRelease(0);
                                    }
                                    _swift_release(puVar33);
                                    _swift_release(puVar9);
                                    _swift_release(param_12);
                                    _swift_release(param_1);
                                    puVar31 = param_13;
                                  }
                                  _swift_release(puVar31);
                                }
                                FUN_10092be3c(lVar2,uVar26,uVar68);
                              }
                              else {
                                _swift_beginAccess(puVar27 + 0x38,local_f8,0x21,0);
                                FUN_10064967c(thunk_FUN_10092be10,puVar28);
                                _swift_endAccess(local_f8);
                              }
                              FUN_1006486f8(0,0,0);
                              FUN_100004550(0,0);
                              _swift_release(param_12);
                              _swift_release(puVar27);
                              _swift_release_n(puVar24,2);
                              _swift_release(puVar28);
                              _swift_bridgeObjectRelease(0);
                            }
                            _swift_release(puVar27);
                            _swift_release(param_1);
                            _swift_release(param_13);
                            _swift_unknownObjectRelease(param_9);
                            _swift_release(puVar9);
                            FUN_100308538(uVar73,cVar4);
                          }
                        }
                        FUN_1006486f8(0,0,0);
                        FUN_100004550(0,0);
                        _swift_unknownObjectRelease(param_9);
                        _swift_release(puVar23);
                        _swift_release_n(puVar22,2);
                        _swift_release(puVar25);
                        _swift_bridgeObjectRelease(0);
                      }
                      _swift_release(puVar23);
                      _swift_release(puVar9);
                      _swift_release(param_12);
                      _swift_release(param_1);
                      _swift_release(param_13);
                      FUN_10092be3c(lVar14,uVar19,uVar69);
                    }
                  }
                }
                else {
                  _swift_beginAccess(puVar20 + 0x38,local_c8,0x21,0);
                  FUN_10064967c(thunk_FUN_10092be10,puVar21);
                  _swift_endAccess(local_c8);
                }
                FUN_1006486f8(0,0,0);
                FUN_100004550(0,0);
                _swift_release(param_12);
                _swift_release(puVar20);
                _swift_release_n(puVar17,2);
                _swift_release(puVar21);
                _swift_bridgeObjectRelease(0);
              }
              _swift_release(puVar20);
              _swift_release(param_1);
              _swift_release(param_13);
              _swift_unknownObjectRelease(param_9);
              _swift_release(puVar9);
              FUN_100308538(uVar71,cVar3);
            }
          }
          FUN_1006486f8(0,0,0);
          FUN_100004550(0,0);
          _swift_unknownObjectRelease(param_9);
          _swift_release(puVar16);
          _swift_release_n(puVar13,2);
          _swift_release(puVar18);
          _swift_bridgeObjectRelease(0);
        }
        _swift_release(puVar16);
        _swift_release(puVar9);
        _swift_release(param_12);
        _swift_release(param_1);
        _swift_release(param_13);
        FUN_10092be3c(lVar7,uVar1,uVar72);
      }
    }
  }
  else {
    _swift_beginAccess(puVar11 + 0x38,local_98,0x21,0);
    FUN_10064967c(FUN_10092be10,puVar12);
    _swift_endAccess(local_98);
  }
  FUN_1006486f8(0,0,0);
  FUN_100004550(0,0);
  _swift_release(param_12);
  _swift_release(puVar11);
  _swift_release_n(puVar10,2);
  _swift_release(puVar12);
  _swift_bridgeObjectRelease(0);
LAB_100919f40:
  _swift_release(puVar11);
  _swift_release(param_1);
  _swift_release(param_13);
  _swift_unknownObjectRelease(param_9);
  _swift_release(puVar9);
  return puVar9;
}



/* Address: 0x10091d384 | FUN_10091d384 */

undefined *
FUN_10091d384(undefined8 param_1,long param_2,long param_3,void *param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined *param_9,
             char *param_10,code *param_11,undefined8 param_12,undefined *param_13)

{
  long lVar1;
  undefined8 uVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  long lVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined8 uVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  long lVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined8 uVar32;
  undefined *puVar33;
  undefined *puVar34;
  long lVar35;
  undefined *puVar36;
  undefined *puVar37;
  undefined *puVar38;
  undefined8 uVar39;
  undefined *puVar40;
  ulong uVar41;
  undefined *puVar42;
  long lVar43;
  undefined *puVar44;
  undefined *puVar45;
  undefined *puVar46;
  undefined8 uVar47;
  undefined8 *puVar48;
  undefined *puVar49;
  undefined *puVar50;
  char cVar51;
  char cVar52;
  char cVar53;
  _StringGuts _Var54;
  long lVar55;
  char *pcVar56;
  void *pvVar57;
  ulong uVar58;
  undefined8 uVar59;
  ulong uVar60;
  undefined8 uVar61;
  ulong uVar62;
  undefined8 uVar63;
  ulong uVar64;
  code *pcVar65;
  void *pvVar66;
  ulong uVar67;
  undefined8 uVar68;
  void *pvVar69;
  ulong uVar70;
  undefined8 uVar71;
  ulong uVar72;
  String SVar73;
  String SVar74;
  String SVar75;
  String SVar76;
  String SVar77;
  String SVar78;
  String SVar79;
  String SVar80;
  String SVar81;
  String SVar82;
  String SVar83;
  String SVar84;
  String SVar85;
  String SVar86;
  String SVar87;
  String SVar88;
  String SVar89;
  String SVar90;
  String SVar91;
  String SVar92;
  String SVar93;
  String SVar94;
  String SVar95;
  String SVar96;
  String SVar97;
  String SVar98;
  String SVar99;
  String SVar100;
  String SVar101;
  String SVar102;
  undefined *local_330;
  undefined *local_2b0;
  undefined *local_198;
  void *local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  void *local_158 [3];
  undefined8 local_140;
  undefined8 local_138;
  void *local_128 [3];
  undefined8 local_110;
  undefined8 uStack_108;
  void *local_f8 [3];
  undefined8 local_e0;
  undefined8 uStack_d8;
  void *local_c8 [3];
  undefined8 local_b0;
  undefined8 uStack_a8;
  void *local_98 [3];
  undefined8 local_80;
  undefined8 uStack_78;
  
  if ((long)param_4 < 1) {
                    /* WARNING: Does not return */
    pcVar65 = (code *)SoftwareBreakpoint(1,0x10091e5d4);
    (*pcVar65)();
  }
  uVar64 = 0;
  if (param_4 != (void *)0x0) {
    uVar64 = param_3 / (long)param_4;
  }
  lVar55 = uVar64 + 1;
  if (SCARRY8(uVar64,1)) {
                    /* WARNING: Does not return */
    pcVar65 = (code *)SoftwareBreakpoint(1,0x10091e5d8);
    (*pcVar65)();
  }
  pvVar66 = (void *)(param_3 - uVar64 * (long)param_4);
  local_198 = param_9;
  pvVar57 = param_4;
  _swift_getObjectType();
  _Var54.unknown = PTR___type_metadata_for____100eae0c8 + 8;
  puVar7 = local_198;
  pcVar56 = param_10;
  FUN_1008f68cc();
  pvVar69 = param_4;
  if ((uVar64 == 0 || lVar55 < 1) && (pvVar69 = pvVar66, uVar64 != 0 || (long)pvVar66 < 1)) {
    FUN_10090d0b8(0,0,puVar7);
    return puVar7;
  }
  if ((ulong)pvVar69 >> 0x20 == 0) {
    puVar8 = &DAT_100f172e0;
    _swift_allocObject(&DAT_100f172e0,0x58,7);
    *(undefined **)(puVar8 + 0x10) = param_13;
    *(undefined8 *)(puVar8 + 0x18) = param_1;
    *(long *)(puVar8 + 0x20) = param_2;
    puVar8[0x28] = 0;
    *(void **)(puVar8 + 0x30) = pvVar69;
    *(undefined8 *)(puVar8 + 0x38) = param_5;
    *(undefined8 *)(puVar8 + 0x40) = param_6;
    *(undefined8 *)(puVar8 + 0x48) = param_7;
    *(undefined8 *)(puVar8 + 0x50) = param_8;
    puVar9 = local_198;
    FUN_1008f68cc(local_198,&DAT_100eeaaa8,param_10);
    _swift_retain();
    _swift_retain(puVar8);
    _swift_retain(param_13);
    _swift_retain(param_1);
    FUN_100914f44(0,1,param_13,puVar9,FUN_10092d308,puVar8);
    _swift_release(puVar9);
    _swift_release_n(puVar8,2);
  }
  else {
    local_80 = 0;
    uStack_78 = 0xe000000000000000;
    Swift::_StringGuts::grow(0x44,_Var54);
    SVar83.bridgeObject = (void *)0xeb00000000282074;
    SVar83.str = (char *)0x6e756f4365747962;
    SVar85.bridgeObject = pvVar57;
    SVar85.str = pcVar56;
    Swift::String::append(SVar83,SVar85);
    local_98[0] = pvVar69;
    SVar83 = Swift::CustomStringConvertible::get_description();
    SVar86.bridgeObject = pvVar57;
    SVar86.str = pcVar56;
    Swift::String::append(SVar83,SVar86);
    _swift_bridgeObjectRelease(SVar83.bridgeObject);
    puVar48 = (undefined8 *)0xd000000000000037;
    SVar73.bridgeObject = (void *)0x8000000100db4b30;
    SVar73.str = (char *)0xd000000000000037;
    SVar87.bridgeObject = pvVar57;
    SVar87.str = pcVar56;
    Swift::String::append(SVar73,SVar87);
    uVar71 = uStack_78;
    uVar2 = local_80;
    FUN_1008d5300();
    puVar8 = &DAT_100ef11e8;
    _swift_allocError(&DAT_100ef11e8,puVar48,0,0);
    *puVar48 = uVar2;
    puVar48[1] = uVar71;
    *(undefined4 *)(puVar48 + 2) = 0x16;
    puVar9 = puVar8;
    FUN_10063dd74();
    _swift_errorRelease(puVar8);
  }
  puVar8 = &DAT_100f169d0;
  _swift_allocObject(&DAT_100f169d0,0x98,7);
  *(code **)(puVar8 + 0x10) = param_11;
  *(undefined8 *)(puVar8 + 0x18) = param_12;
  *(undefined **)(puVar8 + 0x20) = puVar7;
  *(undefined **)(puVar8 + 0x28) = param_9;
  *(char **)(puVar8 + 0x30) = param_10;
  *(void **)(puVar8 + 0x38) = pvVar66;
  *(void **)(puVar8 + 0x40) = param_4;
  *(undefined **)(puVar8 + 0x48) = param_13;
  *(undefined8 *)(puVar8 + 0x50) = param_1;
  *(long *)(puVar8 + 0x58) = param_2;
  puVar8[0x60] = 0;
  *(undefined8 *)(puVar8 + 0x68) = param_5;
  *(undefined8 *)(puVar8 + 0x70) = param_6;
  *(undefined8 *)(puVar8 + 0x78) = param_7;
  *(undefined8 *)(puVar8 + 0x80) = param_8;
  *(long *)(puVar8 + 0x88) = lVar55;
  *(undefined8 *)(puVar8 + 0x90) = 0;
  puVar10 = &DAT_100f169f8;
  _swift_allocObject(&DAT_100f169f8,0x28,7);
  *(code **)(puVar10 + 0x10) = thunk_FUN_10092d0a0;
  *(undefined **)(puVar10 + 0x18) = puVar8;
  *(undefined **)(puVar10 + 0x20) = puVar9;
  uVar70 = *(ulong *)(puVar9 + 0x28);
  lVar1 = *(long *)(puVar9 + 0x30);
  _swift_getObjectType();
  pcVar65 = *(code **)(lVar1 + 0x10);
  _swift_retain_n(param_13,2);
  _swift_retain_n(param_1,2);
  _swift_retain_n(param_12,2);
  _swift_retain_n(puVar7,2);
  _swift_unknownObjectRetain_n(param_9,2);
  _swift_retain_n(puVar8,2);
  _swift_retain_n(puVar9,2);
  uVar67 = uVar70;
  (*pcVar65)(uVar70,lVar1);
  if ((uVar67 & 1) == 0) {
    puVar11 = &DAT_100f16a20;
    _swift_allocObject(&DAT_100f16a20,0x28,7);
    *(undefined **)(puVar11 + 0x10) = puVar9;
    *(code **)(puVar11 + 0x18) = thunk_FUN_10092be10;
    *(undefined **)(puVar11 + 0x20) = puVar10;
    pcVar65 = *(code **)(lVar1 + 0x18);
    _swift_retain(puVar9);
    _swift_retain(puVar10);
    (*pcVar65)(thunk_FUN_10092be1c,puVar11,uVar70,lVar1);
    _swift_release(param_12);
    _swift_release(puVar11);
    _swift_release(puVar9);
    _swift_release_n(puVar8,2);
    _swift_release(puVar10);
    goto LAB_1009213dc;
  }
  _swift_beginAccess(puVar9 + 0x10,&local_80,0,0);
  uVar70 = *(ulong *)(puVar9 + 0x20);
  if (uVar70 >> 0x38 < 0xff) {
    lVar1 = *(long *)(puVar9 + 0x10);
    uVar2 = *(undefined8 *)(puVar9 + 0x18);
    if (uVar70 >> 0x38 == 1) {
      uVar64 = *(ulong *)(puVar7 + 0x20);
      lVar55 = *(long *)(puVar7 + 0x28);
      _swift_getObjectType();
      pcVar65 = *(code **)(lVar55 + 0x10);
      uVar67 = uVar70;
      FUN_1008fa5cc(lVar1,uVar2,uVar70,1);
      (*pcVar65)(uVar64,lVar55);
      if ((uVar64 & 1) == 0) {
        uVar71 = *(undefined8 *)(puVar7 + 0x20);
        lVar55 = *(long *)(puVar7 + 0x28);
        _swift_getObjectType(uVar71);
        puVar11 = &DAT_100f16a48;
        _swift_allocObject(&DAT_100f16a48,0x20,7);
        *(undefined **)(puVar11 + 0x10) = puVar7;
        *(long *)(puVar11 + 0x18) = lVar1;
        pcVar65 = *(code **)(lVar55 + 0x18);
        _swift_retain(puVar7);
        FUN_10092be28(lVar1,uVar2,uVar70);
        (*pcVar65)(thunk_FUN_1005dfd68,puVar11,uVar71,lVar55);
        _swift_release(puVar11);
      }
      else {
        lVar12 = lVar1;
        FUN_1005de8f4(lVar1);
        FUN_1006486f8();
        FUN_100004550(lVar12,lVar55);
        _swift_bridgeObjectRelease(uVar67);
      }
      FUN_10092be3c(lVar1,uVar2,uVar70);
    }
    else {
      uVar5 = (int)((ulong)uVar2 >> 0x20) - (int)uVar2;
      uVar67 = (ulong)uVar5;
      FUN_1008fa5cc(lVar1,uVar2,uVar70);
      lVar12 = lVar1;
      (*param_11)(lVar1,uVar2,uVar70 & 0xffffffffffffff);
      if (uVar5 == 0) {
        puVar11 = &DAT_100f16a70;
        _swift_allocObject(&DAT_100f16a70,0x28,7);
        *(code **)(puVar11 + 0x10) = thunk_FUN_10092be50;
        *(undefined **)(puVar11 + 0x18) = puVar7;
        *(long *)(puVar11 + 0x20) = lVar12;
        uVar64 = *(ulong *)(lVar12 + 0x20);
        lVar55 = *(long *)(lVar12 + 0x28);
        _swift_getObjectType();
        pcVar65 = *(code **)(lVar55 + 0x10);
        _swift_retain_n(puVar7,5);
        _swift_retain_n(lVar12,2);
        uVar67 = uVar64;
        (*pcVar65)(uVar64,lVar55);
        if ((uVar67 & 1) == 0) {
          _swift_release(puVar7);
          puVar15 = &DAT_100f16a98;
          _swift_allocObject(&DAT_100f16a98,0x28,7);
          *(long *)(puVar15 + 0x10) = lVar12;
          *(code **)(puVar15 + 0x18) = thunk_FUN_10065310c;
          *(undefined **)(puVar15 + 0x20) = puVar11;
          pcVar65 = *(code **)(lVar55 + 0x18);
          _swift_retain(lVar12);
          _swift_retain(puVar11);
          (*pcVar65)(thunk_FUN_1008db360,puVar15,uVar64,lVar55);
          _swift_release(puVar15);
          _swift_release_n(lVar12,2);
          _swift_release_n(puVar7,2);
          _swift_release(puVar11);
        }
        else {
          _swift_beginAccess(lVar12 + 0x10,local_98,0,0);
          cVar3 = *(char *)(lVar12 + 0x18);
          if (cVar3 == -1) {
            _swift_release(puVar7);
            _swift_beginAccess(lVar12 + 0x30,&local_b0,0x21,0);
            FUN_10064967c(thunk_FUN_10065310c,puVar11);
            _swift_endAccess(&local_b0);
          }
          else {
            uVar71 = *(undefined8 *)(lVar12 + 0x10);
            FUN_100308524(uVar71,cVar3);
            FUN_10092b43c(uVar71,cVar3,puVar7);
            _swift_release(puVar7);
            FUN_100308538(uVar71,cVar3);
          }
          FUN_1006486f8(0,0,0);
          FUN_100004550(0,0);
          _swift_release_n(lVar12,2);
          _swift_release_n(puVar7,2);
          _swift_release(puVar11);
          _swift_bridgeObjectRelease(0);
        }
        _swift_release(puVar7);
        FUN_10092be3c(lVar1,uVar2,uVar70);
      }
      else {
        puVar13 = param_9;
        FUN_100915740(param_9,param_10);
        _swift_release(lVar12);
        puVar11 = &DAT_100f16ac0;
        _swift_allocObject(&DAT_100f16ac0,0xa0,7);
        *(undefined **)(puVar11 + 0x10) = param_9;
        *(char **)(puVar11 + 0x18) = param_10;
        *(void **)(puVar11 + 0x20) = pvVar66;
        *(void **)(puVar11 + 0x28) = param_4;
        *(undefined **)(puVar11 + 0x30) = param_13;
        *(undefined8 *)(puVar11 + 0x38) = param_1;
        *(long *)(puVar11 + 0x40) = param_2;
        puVar11[0x48] = 0;
        *(undefined8 *)(puVar11 + 0x50) = param_5;
        *(undefined8 *)(puVar11 + 0x58) = param_6;
        *(undefined8 *)(puVar11 + 0x60) = param_7;
        *(undefined8 *)(puVar11 + 0x68) = param_8;
        *(code **)(puVar11 + 0x70) = param_11;
        *(undefined8 *)(puVar11 + 0x78) = param_12;
        *(undefined **)(puVar11 + 0x80) = puVar7;
        *(long *)(puVar11 + 0x88) = lVar55;
        *(undefined8 *)(puVar11 + 0x90) = 0;
        *(ulong *)(puVar11 + 0x98) = uVar67;
        puVar15 = &DAT_100f16ae8;
        _swift_allocObject(&DAT_100f16ae8,0x28,7);
        *(code **)(puVar15 + 0x10) = thunk_FUN_10092d008;
        *(undefined **)(puVar15 + 0x18) = puVar11;
        *(undefined **)(puVar15 + 0x20) = puVar13;
        uVar72 = *(ulong *)(puVar13 + 0x20);
        lVar55 = *(long *)(puVar13 + 0x28);
        _swift_getObjectType();
        pcVar65 = *(code **)(lVar55 + 0x10);
        _swift_retain_n(param_13,2);
        _swift_retain_n(param_1,2);
        _swift_retain_n(param_12,2);
        _swift_retain_n(puVar7,2);
        _swift_unknownObjectRetain_n(param_9,2);
        _swift_retain_n(puVar11,2);
        _swift_retain_n(puVar13,2);
        uVar58 = uVar72;
        (*pcVar65)(uVar72,lVar55);
        if ((uVar58 & 1) == 0) {
          puVar14 = &DAT_100f16b10;
          _swift_allocObject(&DAT_100f16b10,0x28,7);
          *(undefined **)(puVar14 + 0x10) = puVar13;
          *(code **)(puVar14 + 0x18) = thunk_FUN_10065310c;
          *(undefined **)(puVar14 + 0x20) = puVar15;
          pcVar65 = *(code **)(lVar55 + 0x18);
          _swift_retain(puVar13);
          _swift_retain(puVar15);
          (*pcVar65)(thunk_FUN_1008db360,puVar14,uVar72,lVar55);
          _swift_unknownObjectRelease(param_9);
          _swift_release(puVar14);
          _swift_release(puVar13);
          _swift_release_n(puVar11,2);
          _swift_release(puVar15);
        }
        else {
          _Var54.unknown = (undefined *)local_98;
          pcVar56 = (char *)0x0;
          pvVar57 = (void *)0x0;
          _swift_beginAccess(puVar13 + 0x10);
          uVar71 = *(undefined8 *)(puVar13 + 0x10);
          cVar3 = puVar13[0x18];
          if (cVar3 == '\x01') {
            uVar64 = *(ulong *)(puVar7 + 0x20);
            lVar55 = *(long *)(puVar7 + 0x28);
            _swift_getObjectType();
            pcVar65 = *(code **)(lVar55 + 0x10);
            FUN_100308524(uVar71,1);
            (*pcVar65)(uVar64,lVar55);
            if ((uVar64 & 1) == 0) {
              uVar16 = *(undefined8 *)(puVar7 + 0x20);
              lVar55 = *(long *)(puVar7 + 0x28);
              _swift_getObjectType(uVar16);
              puVar14 = &DAT_100f16b38;
              _swift_allocObject(&DAT_100f16b38,0x20,7);
              *(undefined **)(puVar14 + 0x10) = puVar7;
              *(undefined8 *)(puVar14 + 0x18) = uVar71;
              pcVar65 = *(code **)(lVar55 + 0x18);
              _swift_retain(puVar7);
              FUN_1005dfeb4(uVar71,1);
              (*pcVar65)(thunk_FUN_1005dfd68,puVar14,uVar16,lVar55);
              _swift_release(puVar14);
            }
            else {
              uVar16 = uVar71;
              FUN_1005de8f4(uVar71);
              FUN_1006486f8();
              FUN_100004550(uVar16,lVar55);
              _swift_bridgeObjectRelease(pcVar56);
            }
            FUN_100308538(uVar71,1);
          }
          else if (cVar3 == -1) {
            _swift_beginAccess(puVar13 + 0x30,&local_b0,0x21,0);
            FUN_10064967c(thunk_FUN_10065310c,puVar15);
            _swift_endAccess(&local_b0);
          }
          else {
            pvVar69 = param_4;
            if ((uVar64 < 2) && ((uVar64 != 1 || (pvVar69 = pvVar66, (long)pvVar66 < 1)))) {
              FUN_10090d0b8(0,0,puVar7);
              FUN_100308538(uVar71,cVar3);
            }
            else {
              if (SCARRY8(param_2,uVar67)) {
                    /* WARNING: Does not return */
                pcVar65 = (code *)SoftwareBreakpoint(1,0x10091f164);
                (*pcVar65)();
              }
              if ((ulong)pvVar69 >> 0x20 == 0) {
                puVar14 = &DAT_100f172b8;
                _swift_allocObject(&DAT_100f172b8,0x58,7);
                *(undefined **)(puVar14 + 0x10) = param_13;
                *(undefined8 *)(puVar14 + 0x18) = param_1;
                *(ulong *)(puVar14 + 0x20) = param_2 + uVar67;
                puVar14[0x28] = 0;
                *(void **)(puVar14 + 0x30) = pvVar69;
                *(undefined8 *)(puVar14 + 0x38) = param_5;
                *(undefined8 *)(puVar14 + 0x40) = param_6;
                *(undefined8 *)(puVar14 + 0x48) = param_7;
                *(undefined8 *)(puVar14 + 0x50) = param_8;
                puVar17 = local_198;
                FUN_1008f68cc(local_198,&DAT_100eeaaa8,param_10);
                _swift_retain(param_13);
                _swift_retain(param_1);
                _swift_retain(puVar17);
                FUN_100914f44(0,1,param_13,puVar17,FUN_10092d308,puVar14);
                _swift_release(puVar14);
                _swift_release(puVar17);
              }
              else {
                local_b0 = 0;
                uStack_a8 = 0xe000000000000000;
                Swift::_StringGuts::grow(0x44,_Var54);
                SVar74.bridgeObject = (void *)0xeb00000000282074;
                SVar74.str = (char *)0x6e756f4365747962;
                SVar88.bridgeObject = pvVar57;
                SVar88.str = pcVar56;
                Swift::String::append(SVar74,SVar88);
                local_c8[0] = pvVar69;
                SVar83 = Swift::CustomStringConvertible::get_description();
                SVar89.bridgeObject = pvVar57;
                SVar89.str = pcVar56;
                Swift::String::append(SVar83,SVar89);
                _swift_bridgeObjectRelease(SVar83.bridgeObject);
                puVar48 = (undefined8 *)0xd000000000000037;
                SVar75.bridgeObject = (void *)0x8000000100db4b30;
                SVar75.str = (char *)0xd000000000000037;
                SVar90.bridgeObject = pvVar57;
                SVar90.str = pcVar56;
                Swift::String::append(SVar75,SVar90);
                uVar68 = uStack_a8;
                uVar16 = local_b0;
                FUN_1008d5300();
                puVar14 = &DAT_100ef11e8;
                _swift_allocError(&DAT_100ef11e8,puVar48,0,0);
                *puVar48 = uVar16;
                puVar48[1] = uVar68;
                *(undefined4 *)(puVar48 + 2) = 0x16;
                puVar17 = puVar14;
                FUN_10063dd74();
                _swift_errorRelease(puVar14);
              }
              puVar14 = &DAT_100f16b60;
              _swift_allocObject(&DAT_100f16b60,0x98,7);
              *(code **)(puVar14 + 0x10) = param_11;
              *(undefined8 *)(puVar14 + 0x18) = param_12;
              *(undefined **)(puVar14 + 0x20) = puVar7;
              *(undefined **)(puVar14 + 0x28) = param_9;
              *(char **)(puVar14 + 0x30) = param_10;
              *(void **)(puVar14 + 0x38) = pvVar66;
              *(void **)(puVar14 + 0x40) = param_4;
              *(undefined **)(puVar14 + 0x48) = param_13;
              *(undefined8 *)(puVar14 + 0x50) = param_1;
              *(long *)(puVar14 + 0x58) = param_2;
              puVar14[0x60] = 0;
              *(undefined8 *)(puVar14 + 0x68) = param_5;
              *(undefined8 *)(puVar14 + 0x70) = param_6;
              *(undefined8 *)(puVar14 + 0x78) = param_7;
              *(undefined8 *)(puVar14 + 0x80) = param_8;
              *(ulong *)(puVar14 + 0x88) = uVar64;
              *(ulong *)(puVar14 + 0x90) = uVar67;
              puVar18 = &DAT_100f16b88;
              _swift_allocObject(&DAT_100f16b88,0x28,7);
              *(code **)(puVar18 + 0x10) = thunk_FUN_10092d0a0;
              *(undefined **)(puVar18 + 0x18) = puVar14;
              *(undefined **)(puVar18 + 0x20) = puVar17;
              uVar72 = *(ulong *)(puVar17 + 0x28);
              lVar55 = *(long *)(puVar17 + 0x30);
              _swift_getObjectType();
              pcVar65 = *(code **)(lVar55 + 0x10);
              _swift_retain_n(param_13,2);
              _swift_retain_n(param_1,2);
              _swift_retain_n(param_12,2);
              _swift_retain_n(puVar7,2);
              _swift_unknownObjectRetain_n(param_9,2);
              _swift_retain_n(puVar14,2);
              _swift_retain_n(puVar17,2);
              uVar58 = uVar72;
              (*pcVar65)(uVar72,lVar55);
              if ((uVar58 & 1) == 0) {
                puVar19 = &DAT_100f16bb0;
                _swift_allocObject(&DAT_100f16bb0,0x28,7);
                *(undefined **)(puVar19 + 0x10) = puVar17;
                *(code **)(puVar19 + 0x18) = thunk_FUN_10092be10;
                *(undefined **)(puVar19 + 0x20) = puVar18;
                pcVar65 = *(code **)(lVar55 + 0x18);
                _swift_retain(puVar17);
                _swift_retain(puVar18);
                (*pcVar65)(thunk_FUN_10092be1c,puVar19,uVar72,lVar55);
                _swift_release(param_12);
                _swift_release(puVar19);
                _swift_release(puVar17);
                _swift_release_n(puVar14,2);
                _swift_release(puVar18);
              }
              else {
                _swift_beginAccess(puVar17 + 0x10,&local_b0,0,0);
                uVar72 = *(ulong *)(puVar17 + 0x20);
                if (uVar72 >> 0x38 < 0xff) {
                  lVar55 = *(long *)(puVar17 + 0x10);
                  uVar16 = *(undefined8 *)(puVar17 + 0x18);
                  if (uVar72 >> 0x38 == 1) {
                    uVar64 = *(ulong *)(puVar7 + 0x20);
                    lVar12 = *(long *)(puVar7 + 0x28);
                    _swift_getObjectType();
                    pcVar65 = *(code **)(lVar12 + 0x10);
                    uVar67 = uVar72;
                    FUN_1008fa5cc(lVar55,uVar16,uVar72,1);
                    (*pcVar65)(uVar64,lVar12);
                    if ((uVar64 & 1) == 0) {
                      uVar68 = *(undefined8 *)(puVar7 + 0x20);
                      lVar12 = *(long *)(puVar7 + 0x28);
                      _swift_getObjectType();
                      puVar19 = &DAT_100f16bd8;
                      _swift_allocObject(&DAT_100f16bd8,0x20,7);
                      *(undefined **)(puVar19 + 0x10) = puVar7;
                      *(long *)(puVar19 + 0x18) = lVar55;
                      pcVar65 = *(code **)(lVar12 + 0x18);
                      _swift_retain(puVar7);
                      FUN_10092be28(lVar55,uVar16,uVar72);
                      (*pcVar65)(thunk_FUN_1005dfd68,puVar19,uVar68,lVar12);
                      _swift_release(puVar19);
                    }
                    else {
                      lVar20 = lVar55;
                      FUN_1005de8f4(lVar55);
                      FUN_1006486f8();
                      FUN_100004550(lVar20,lVar12);
                      _swift_bridgeObjectRelease(uVar67);
                    }
                    FUN_10092be3c(lVar55,uVar16,uVar72);
                  }
                  else {
                    uVar5 = (int)((ulong)uVar16 >> 0x20) - (int)uVar16;
                    FUN_1008fa5cc(lVar55,uVar16,uVar72);
                    lVar12 = lVar55;
                    (*param_11)(lVar55,uVar16,uVar72 & 0xffffffffffffff);
                    if (uVar5 == 0) {
                      puVar19 = &DAT_100f16c00;
                      _swift_allocObject(&DAT_100f16c00,0x28,7);
                      *(code **)(puVar19 + 0x10) = thunk_FUN_10092be50;
                      *(undefined **)(puVar19 + 0x18) = puVar7;
                      *(long *)(puVar19 + 0x20) = lVar12;
                      uVar64 = *(ulong *)(lVar12 + 0x20);
                      lVar20 = *(long *)(lVar12 + 0x28);
                      _swift_getObjectType();
                      pcVar65 = *(code **)(lVar20 + 0x10);
                      _swift_retain_n(puVar7,5);
                      _swift_retain_n(lVar12,2);
                      uVar67 = uVar64;
                      (*pcVar65)(uVar64,lVar20);
                      if ((uVar67 & 1) == 0) {
                        _swift_release(puVar7);
                        puVar23 = &DAT_100f16c28;
                        _swift_allocObject(&DAT_100f16c28,0x28,7);
                        *(long *)(puVar23 + 0x10) = lVar12;
                        *(code **)(puVar23 + 0x18) = thunk_FUN_10065310c;
                        *(undefined **)(puVar23 + 0x20) = puVar19;
                        pcVar65 = *(code **)(lVar20 + 0x18);
                        _swift_retain(lVar12);
                        _swift_retain(puVar19);
                        (*pcVar65)(thunk_FUN_1008db360,puVar23,uVar64,lVar20);
                        _swift_release(puVar23);
                        _swift_release_n(lVar12,2);
                        _swift_release_n(puVar7,2);
                        _swift_release(puVar19);
                      }
                      else {
                        _swift_beginAccess(lVar12 + 0x10,local_c8,0,0);
                        cVar4 = *(char *)(lVar12 + 0x18);
                        if (cVar4 == -1) {
                          _swift_release(puVar7);
                          _swift_beginAccess(lVar12 + 0x30,&local_e0,0x21,0);
                          FUN_10064967c(thunk_FUN_10065310c,puVar19);
                          _swift_endAccess(&local_e0);
                        }
                        else {
                          uVar68 = *(undefined8 *)(lVar12 + 0x10);
                          FUN_100308524(uVar68,cVar4);
                          FUN_10092b43c(uVar68,cVar4,puVar7);
                          _swift_release(puVar7);
                          FUN_100308538(uVar68,cVar4);
                        }
                        FUN_1006486f8(0,0,0);
                        FUN_100004550(0,0);
                        _swift_release_n(lVar12,2);
                        _swift_release_n(puVar7,2);
                        _swift_release(puVar19);
                        _swift_bridgeObjectRelease(0);
                      }
                      _swift_release(puVar7);
                      FUN_10092be3c(lVar55,uVar16,uVar72);
                    }
                    else {
                      puVar21 = param_9;
                      FUN_100915740(param_9,param_10);
                      _swift_release(lVar12);
                      puVar19 = &DAT_100f16c50;
                      _swift_allocObject(&DAT_100f16c50,0xa0,7);
                      *(undefined **)(puVar19 + 0x10) = param_9;
                      *(char **)(puVar19 + 0x18) = param_10;
                      *(void **)(puVar19 + 0x20) = pvVar66;
                      *(void **)(puVar19 + 0x28) = param_4;
                      *(undefined **)(puVar19 + 0x30) = param_13;
                      *(undefined8 *)(puVar19 + 0x38) = param_1;
                      *(long *)(puVar19 + 0x40) = param_2;
                      puVar19[0x48] = 0;
                      *(undefined8 *)(puVar19 + 0x50) = param_5;
                      *(undefined8 *)(puVar19 + 0x58) = param_6;
                      *(undefined8 *)(puVar19 + 0x60) = param_7;
                      *(undefined8 *)(puVar19 + 0x68) = param_8;
                      *(code **)(puVar19 + 0x70) = param_11;
                      *(undefined8 *)(puVar19 + 0x78) = param_12;
                      *(undefined **)(puVar19 + 0x80) = puVar7;
                      *(ulong *)(puVar19 + 0x88) = uVar64;
                      *(ulong *)(puVar19 + 0x90) = uVar67;
                      *(ulong *)(puVar19 + 0x98) = (ulong)uVar5;
                      puVar23 = &DAT_100f16c78;
                      _swift_allocObject(&DAT_100f16c78,0x28,7);
                      *(code **)(puVar23 + 0x10) = thunk_FUN_10092d008;
                      *(undefined **)(puVar23 + 0x18) = puVar19;
                      *(undefined **)(puVar23 + 0x20) = puVar21;
                      uVar58 = *(ulong *)(puVar21 + 0x20);
                      lVar12 = *(long *)(puVar21 + 0x28);
                      _swift_getObjectType();
                      pcVar65 = *(code **)(lVar12 + 0x10);
                      _swift_retain_n(param_13,2);
                      _swift_retain_n(param_1,2);
                      _swift_retain_n(param_12,2);
                      _swift_retain_n(puVar7,2);
                      _swift_unknownObjectRetain_n(param_9,2);
                      _swift_retain_n(puVar19,2);
                      _swift_retain_n(puVar21,2);
                      uVar60 = uVar58;
                      (*pcVar65)(uVar58,lVar12);
                      if ((uVar60 & 1) == 0) {
                        puVar22 = &DAT_100f16ca0;
                        _swift_allocObject(&DAT_100f16ca0,0x28,7);
                        *(undefined **)(puVar22 + 0x10) = puVar21;
                        *(code **)(puVar22 + 0x18) = thunk_FUN_10065310c;
                        *(undefined **)(puVar22 + 0x20) = puVar23;
                        pcVar65 = *(code **)(lVar12 + 0x18);
                        _swift_retain(puVar21);
                        _swift_retain(puVar23);
                        (*pcVar65)(thunk_FUN_1008db360,puVar22,uVar58,lVar12);
                        _swift_unknownObjectRelease(param_9);
                        _swift_release(puVar22);
                        _swift_release(puVar21);
                        _swift_release_n(puVar19,2);
                        _swift_release(puVar23);
                      }
                      else {
                        _Var54.unknown = (undefined *)local_c8;
                        pcVar56 = (char *)0x0;
                        pvVar57 = (void *)0x0;
                        _swift_beginAccess(puVar21 + 0x10);
                        uVar68 = *(undefined8 *)(puVar21 + 0x10);
                        cVar4 = puVar21[0x18];
                        if (cVar4 == '\x01') {
                          uVar64 = *(ulong *)(puVar7 + 0x20);
                          lVar12 = *(long *)(puVar7 + 0x28);
                          _swift_getObjectType();
                          pcVar65 = *(code **)(lVar12 + 0x10);
                          FUN_100308524(uVar68,1);
                          (*pcVar65)(uVar64,lVar12);
                          if ((uVar64 & 1) == 0) {
                            uVar24 = *(undefined8 *)(puVar7 + 0x20);
                            lVar12 = *(long *)(puVar7 + 0x28);
                            _swift_getObjectType(uVar24);
                            puVar22 = &DAT_100f16cc8;
                            _swift_allocObject(&DAT_100f16cc8,0x20,7);
                            *(undefined **)(puVar22 + 0x10) = puVar7;
                            *(undefined8 *)(puVar22 + 0x18) = uVar68;
                            pcVar65 = *(code **)(lVar12 + 0x18);
                            _swift_retain(puVar7);
                            FUN_1005dfeb4(uVar68,1);
                            (*pcVar65)(thunk_FUN_1005dfd68,puVar22,uVar24,lVar12);
                            _swift_release(puVar22);
                          }
                          else {
                            uVar24 = uVar68;
                            FUN_1005de8f4(uVar68);
                            FUN_1006486f8();
                            FUN_100004550(uVar24,lVar12);
                            _swift_bridgeObjectRelease(pcVar56);
                          }
                          FUN_100308538(uVar68,1);
                        }
                        else if (cVar4 == -1) {
                          _swift_beginAccess(puVar21 + 0x30,&local_e0,0x21,0);
                          FUN_10064967c(thunk_FUN_10065310c,puVar23);
                          _swift_endAccess(&local_e0);
                        }
                        else {
                          uVar58 = uVar64 - 1;
                          pvVar69 = param_4;
                          if ((uVar58 < 2) &&
                             ((uVar58 != 1 || (pvVar69 = pvVar66, (long)pvVar66 < 1)))) {
                            FUN_10090d0b8(0,0,puVar7);
                            FUN_100308538(uVar68,cVar4);
                          }
                          else {
                            lVar12 = uVar5 + uVar67;
                            if (SCARRY8(param_2,lVar12)) {
                    /* WARNING: Does not return */
                              pcVar65 = (code *)SoftwareBreakpoint(1,0x10091fbd8);
                              (*pcVar65)();
                            }
                            if ((ulong)pvVar69 >> 0x20 == 0) {
                              puVar22 = &DAT_100f17290;
                              _swift_allocObject(&DAT_100f17290,0x58,7);
                              *(undefined **)(puVar22 + 0x10) = param_13;
                              *(undefined8 *)(puVar22 + 0x18) = param_1;
                              *(long *)(puVar22 + 0x20) = param_2 + lVar12;
                              puVar22[0x28] = 0;
                              *(void **)(puVar22 + 0x30) = pvVar69;
                              *(undefined8 *)(puVar22 + 0x38) = param_5;
                              *(undefined8 *)(puVar22 + 0x40) = param_6;
                              *(undefined8 *)(puVar22 + 0x48) = param_7;
                              *(undefined8 *)(puVar22 + 0x50) = param_8;
                              puVar25 = local_198;
                              FUN_1008f68cc(local_198,&DAT_100eeaaa8,param_10);
                              _swift_retain(param_13);
                              _swift_retain(param_1);
                              _swift_retain(puVar25);
                              FUN_100914f44(0,1,param_13,puVar25,FUN_10092d308,puVar22);
                              _swift_release(puVar22);
                              _swift_release(puVar25);
                            }
                            else {
                              local_e0 = 0;
                              uStack_d8 = 0xe000000000000000;
                              Swift::_StringGuts::grow(0x44,_Var54);
                              SVar76.bridgeObject = (void *)0xeb00000000282074;
                              SVar76.str = (char *)0x6e756f4365747962;
                              SVar91.bridgeObject = pvVar57;
                              SVar91.str = pcVar56;
                              Swift::String::append(SVar76,SVar91);
                              local_f8[0] = pvVar69;
                              SVar83 = Swift::CustomStringConvertible::get_description();
                              SVar92.bridgeObject = pvVar57;
                              SVar92.str = pcVar56;
                              Swift::String::append(SVar83,SVar92);
                              _swift_bridgeObjectRelease(SVar83.bridgeObject);
                              puVar48 = (undefined8 *)0xd000000000000037;
                              SVar77.bridgeObject = (void *)0x8000000100db4b30;
                              SVar77.str = (char *)0xd000000000000037;
                              SVar93.bridgeObject = pvVar57;
                              SVar93.str = pcVar56;
                              Swift::String::append(SVar77,SVar93);
                              uVar59 = uStack_d8;
                              uVar24 = local_e0;
                              FUN_1008d5300();
                              puVar22 = &DAT_100ef11e8;
                              _swift_allocError(&DAT_100ef11e8,puVar48,0,0);
                              *puVar48 = uVar24;
                              puVar48[1] = uVar59;
                              *(undefined4 *)(puVar48 + 2) = 0x16;
                              puVar25 = puVar22;
                              FUN_10063dd74();
                              _swift_errorRelease(puVar22);
                            }
                            puVar22 = &DAT_100f16cf0;
                            _swift_allocObject(&DAT_100f16cf0,0x98,7);
                            *(code **)(puVar22 + 0x10) = param_11;
                            *(undefined8 *)(puVar22 + 0x18) = param_12;
                            *(undefined **)(puVar22 + 0x20) = puVar7;
                            *(undefined **)(puVar22 + 0x28) = param_9;
                            *(char **)(puVar22 + 0x30) = param_10;
                            *(void **)(puVar22 + 0x38) = pvVar66;
                            *(void **)(puVar22 + 0x40) = param_4;
                            *(undefined **)(puVar22 + 0x48) = param_13;
                            *(undefined8 *)(puVar22 + 0x50) = param_1;
                            *(long *)(puVar22 + 0x58) = param_2;
                            puVar22[0x60] = 0;
                            *(undefined8 *)(puVar22 + 0x68) = param_5;
                            *(undefined8 *)(puVar22 + 0x70) = param_6;
                            *(undefined8 *)(puVar22 + 0x78) = param_7;
                            *(undefined8 *)(puVar22 + 0x80) = param_8;
                            *(ulong *)(puVar22 + 0x88) = uVar58;
                            *(long *)(puVar22 + 0x90) = lVar12;
                            puVar26 = &DAT_100f16d18;
                            _swift_allocObject(&DAT_100f16d18,0x28,7);
                            *(code **)(puVar26 + 0x10) = thunk_FUN_10092d0a0;
                            *(undefined **)(puVar26 + 0x18) = puVar22;
                            *(undefined **)(puVar26 + 0x20) = puVar25;
                            uVar67 = *(ulong *)(puVar25 + 0x28);
                            lVar20 = *(long *)(puVar25 + 0x30);
                            _swift_getObjectType();
                            pcVar65 = *(code **)(lVar20 + 0x10);
                            _swift_retain_n(param_13,2);
                            _swift_retain_n(param_1,2);
                            _swift_retain_n(param_12,2);
                            _swift_retain_n(puVar7,2);
                            _swift_unknownObjectRetain_n(param_9,2);
                            _swift_retain_n(puVar22,2);
                            _swift_retain_n(puVar25,2);
                            uVar60 = uVar67;
                            (*pcVar65)(uVar67,lVar20);
                            if ((uVar60 & 1) == 0) {
                              puVar27 = &DAT_100f16d40;
                              _swift_allocObject(&DAT_100f16d40,0x28,7);
                              *(undefined **)(puVar27 + 0x10) = puVar25;
                              *(code **)(puVar27 + 0x18) = thunk_FUN_10092be10;
                              *(undefined **)(puVar27 + 0x20) = puVar26;
                              pcVar65 = *(code **)(lVar20 + 0x18);
                              _swift_retain(puVar25);
                              _swift_retain(puVar26);
                              (*pcVar65)(thunk_FUN_10092be1c,puVar27,uVar67,lVar20);
                              _swift_release(param_12);
                              _swift_release(puVar27);
                              _swift_release(puVar25);
                              _swift_release_n(puVar22,2);
                              _swift_release(puVar26);
                            }
                            else {
                              _swift_beginAccess(puVar25 + 0x10,&local_e0,0,0);
                              uVar67 = *(ulong *)(puVar25 + 0x20);
                              if (uVar67 >> 0x38 < 0xff) {
                                lVar20 = *(long *)(puVar25 + 0x10);
                                uVar24 = *(undefined8 *)(puVar25 + 0x18);
                                if (uVar67 >> 0x38 == 1) {
                                  uVar64 = *(ulong *)(puVar7 + 0x20);
                                  lVar12 = *(long *)(puVar7 + 0x28);
                                  _swift_getObjectType();
                                  pcVar65 = *(code **)(lVar12 + 0x10);
                                  uVar58 = uVar67;
                                  FUN_1008fa5cc(lVar20,uVar24,uVar67,1);
                                  (*pcVar65)(uVar64,lVar12);
                                  if ((uVar64 & 1) == 0) {
                                    uVar59 = *(undefined8 *)(puVar7 + 0x20);
                                    lVar12 = *(long *)(puVar7 + 0x28);
                                    _swift_getObjectType(uVar59);
                                    puVar27 = &DAT_100f16d68;
                                    _swift_allocObject(&DAT_100f16d68,0x20,7);
                                    *(undefined **)(puVar27 + 0x10) = puVar7;
                                    *(long *)(puVar27 + 0x18) = lVar20;
                                    pcVar65 = *(code **)(lVar12 + 0x18);
                                    _swift_retain(puVar7);
                                    FUN_10092be28(lVar20,uVar24,uVar67);
                                    (*pcVar65)(thunk_FUN_1005dfd68,puVar27,uVar59,lVar12);
                                    _swift_release(puVar27);
                                  }
                                  else {
                                    lVar28 = lVar20;
                                    FUN_1005de8f4(lVar20);
                                    FUN_1006486f8();
                                    FUN_100004550(lVar28,lVar12);
                                    _swift_bridgeObjectRelease(uVar58);
                                  }
                                }
                                else {
                                  uVar5 = (int)((ulong)uVar24 >> 0x20) - (int)uVar24;
                                  FUN_1008fa5cc(lVar20,uVar24,uVar67);
                                  lVar28 = lVar20;
                                  (*param_11)(lVar20,uVar24,uVar67 & 0xffffffffffffff);
                                  if (uVar5 == 0) {
                                    puVar27 = &DAT_100f16d90;
                                    _swift_allocObject(&DAT_100f16d90,0x28,7);
                                    *(code **)(puVar27 + 0x10) = thunk_FUN_10092be50;
                                    *(undefined **)(puVar27 + 0x18) = puVar7;
                                    *(long *)(puVar27 + 0x20) = lVar28;
                                    uVar64 = *(ulong *)(lVar28 + 0x20);
                                    lVar12 = *(long *)(lVar28 + 0x28);
                                    _swift_getObjectType();
                                    pcVar65 = *(code **)(lVar12 + 0x10);
                                    _swift_retain_n(puVar7,5);
                                    _swift_retain_n(lVar28,2);
                                    uVar58 = uVar64;
                                    (*pcVar65)(uVar64,lVar12);
                                    puVar29 = puVar7;
                                    if ((uVar58 & 1) == 0) {
                                      _swift_release(puVar7);
                                      puVar31 = &DAT_100f16db8;
                                      _swift_allocObject(&DAT_100f16db8,0x28,7);
                                      *(long *)(puVar31 + 0x10) = lVar28;
                                      *(code **)(puVar31 + 0x18) = thunk_FUN_10065310c;
                                      *(undefined **)(puVar31 + 0x20) = puVar27;
                                      pcVar65 = *(code **)(lVar12 + 0x18);
                                      _swift_retain(lVar28);
                                      _swift_retain(puVar27);
                                      (*pcVar65)(thunk_FUN_1008db360,puVar31,uVar64,lVar12);
                                      _swift_release(puVar31);
                                      _swift_release_n(lVar28,2);
                                      _swift_release_n(puVar7,2);
                                      _swift_release(puVar27);
                                    }
                                    else {
                                      _swift_beginAccess(lVar28 + 0x10,local_f8,0,0);
                                      cVar53 = *(char *)(lVar28 + 0x18);
                                      if (cVar53 == -1) {
                                        _swift_release(puVar7);
                                        _swift_beginAccess(lVar28 + 0x30,&local_110,0x21,0);
                                        FUN_10064967c(thunk_FUN_10065310c,puVar27);
                                        _swift_endAccess(&local_110);
                                      }
                                      else {
                                        uVar59 = *(undefined8 *)(lVar28 + 0x10);
                                        FUN_100308524(uVar59,cVar53);
                                        FUN_10092b43c(uVar59,cVar53,puVar7);
                                        _swift_release(puVar7);
                                        FUN_100308538(uVar59,cVar53);
                                      }
                                      FUN_1006486f8(0,0,0);
                                      FUN_100004550(0,0);
                                      _swift_release_n(lVar28,2);
                                      _swift_release_n(puVar7,2);
                                      _swift_release(puVar27);
                                      _swift_bridgeObjectRelease(0);
                                    }
                                  }
                                  else {
                                    puVar31 = param_9;
                                    FUN_100915740(param_9,param_10);
                                    _swift_release(lVar28);
                                    puVar27 = &DAT_100f16de0;
                                    _swift_allocObject(&DAT_100f16de0,0xa0,7);
                                    *(undefined **)(puVar27 + 0x10) = param_9;
                                    *(char **)(puVar27 + 0x18) = param_10;
                                    *(void **)(puVar27 + 0x20) = pvVar66;
                                    *(void **)(puVar27 + 0x28) = param_4;
                                    *(undefined **)(puVar27 + 0x30) = param_13;
                                    *(undefined8 *)(puVar27 + 0x38) = param_1;
                                    *(long *)(puVar27 + 0x40) = param_2;
                                    puVar27[0x48] = 0;
                                    *(undefined8 *)(puVar27 + 0x50) = param_5;
                                    *(undefined8 *)(puVar27 + 0x58) = param_6;
                                    *(undefined8 *)(puVar27 + 0x60) = param_7;
                                    *(undefined8 *)(puVar27 + 0x68) = param_8;
                                    *(code **)(puVar27 + 0x70) = param_11;
                                    *(undefined8 *)(puVar27 + 0x78) = param_12;
                                    *(undefined **)(puVar27 + 0x80) = puVar7;
                                    *(ulong *)(puVar27 + 0x88) = uVar58;
                                    *(long *)(puVar27 + 0x90) = lVar12;
                                    *(ulong *)(puVar27 + 0x98) = (ulong)uVar5;
                                    puVar29 = &DAT_100f16e08;
                                    _swift_allocObject(&DAT_100f16e08,0x28,7);
                                    *(code **)(puVar29 + 0x10) = thunk_FUN_10092d008;
                                    *(undefined **)(puVar29 + 0x18) = puVar27;
                                    *(undefined **)(puVar29 + 0x20) = puVar31;
                                    uVar58 = *(ulong *)(puVar31 + 0x20);
                                    lVar28 = *(long *)(puVar31 + 0x28);
                                    _swift_getObjectType();
                                    pcVar65 = *(code **)(lVar28 + 0x10);
                                    _swift_retain_n(param_13,2);
                                    _swift_retain_n(param_1,2);
                                    _swift_retain_n(param_12,2);
                                    _swift_retain_n(puVar7,2);
                                    _swift_unknownObjectRetain_n(param_9,2);
                                    _swift_retain_n(puVar27,2);
                                    _swift_retain_n(puVar31,2);
                                    uVar60 = uVar58;
                                    (*pcVar65)(uVar58,lVar28);
                                    if ((uVar60 & 1) == 0) {
                                      puVar30 = &DAT_100f16e30;
                                      _swift_allocObject(&DAT_100f16e30,0x28,7);
                                      *(undefined **)(puVar30 + 0x10) = puVar31;
                                      *(code **)(puVar30 + 0x18) = thunk_FUN_10065310c;
                                      *(undefined **)(puVar30 + 0x20) = puVar29;
                                      pcVar65 = *(code **)(lVar28 + 0x18);
                                      _swift_retain(puVar31);
                                      _swift_retain(puVar29);
                                      (*pcVar65)(thunk_FUN_1008db360,puVar30,uVar58,lVar28);
                                      _swift_unknownObjectRelease(param_9);
                                      _swift_release(puVar30);
                                      _swift_release(puVar31);
                                      _swift_release_n(puVar27,2);
                                      _swift_release(puVar29);
                                    }
                                    else {
                                      _Var54.unknown = (undefined *)local_f8;
                                      pcVar56 = (char *)0x0;
                                      pvVar57 = (void *)0x0;
                                      _swift_beginAccess(puVar31 + 0x10);
                                      uVar59 = *(undefined8 *)(puVar31 + 0x10);
                                      cVar53 = puVar31[0x18];
                                      if (cVar53 == '\x01') {
                                        uVar64 = *(ulong *)(puVar7 + 0x20);
                                        lVar12 = *(long *)(puVar7 + 0x28);
                                        _swift_getObjectType();
                                        pcVar65 = *(code **)(lVar12 + 0x10);
                                        FUN_100308524(uVar59,1);
                                        (*pcVar65)(uVar64,lVar12);
                                        if ((uVar64 & 1) == 0) {
                                          uVar32 = *(undefined8 *)(puVar7 + 0x20);
                                          lVar12 = *(long *)(puVar7 + 0x28);
                                          _swift_getObjectType(uVar32);
                                          puVar30 = &DAT_100f16e58;
                                          _swift_allocObject(&DAT_100f16e58,0x20,7);
                                          *(undefined **)(puVar30 + 0x10) = puVar7;
                                          *(undefined8 *)(puVar30 + 0x18) = uVar59;
                                          pcVar65 = *(code **)(lVar12 + 0x18);
                                          _swift_retain(puVar7);
                                          FUN_1005dfeb4(uVar59,1);
                                          (*pcVar65)(thunk_FUN_1005dfd68,puVar30,uVar32,lVar12);
                                          _swift_release(puVar30);
                                        }
                                        else {
                                          uVar32 = uVar59;
                                          FUN_1005de8f4(uVar59);
                                          FUN_1006486f8();
                                          FUN_100004550(uVar32,lVar12);
                                          _swift_bridgeObjectRelease(pcVar56);
                                        }
                                        cVar53 = '\x01';
LAB_1009210e4:
                                        FUN_100308538(uVar59,cVar53);
                                      }
                                      else {
                                        if (cVar53 != -1) {
                                          uVar58 = uVar64 - 2;
                                          pvVar69 = param_4;
                                          if ((uVar58 < 2) &&
                                             ((uVar58 != 1 || (pvVar69 = pvVar66, (long)pvVar66 < 1)
                                              ))) {
                                            FUN_10090d0b8(0,0,puVar7);
                                            goto LAB_1009210e4;
                                          }
                                          lVar12 = (ulong)uVar5 + lVar12;
                                          if (SCARRY8(param_2,lVar12)) {
                    /* WARNING: Does not return */
                                            pcVar65 = (code *)SoftwareBreakpoint(1,0x100920664);
                                            (*pcVar65)();
                                          }
                                          if ((ulong)pvVar69 >> 0x20 == 0) {
                                            puVar30 = &DAT_100f17268;
                                            _swift_allocObject(&DAT_100f17268,0x58,7);
                                            *(undefined **)(puVar30 + 0x10) = param_13;
                                            *(undefined8 *)(puVar30 + 0x18) = param_1;
                                            *(long *)(puVar30 + 0x20) = param_2 + lVar12;
                                            puVar30[0x28] = 0;
                                            *(void **)(puVar30 + 0x30) = pvVar69;
                                            *(undefined8 *)(puVar30 + 0x38) = param_5;
                                            *(undefined8 *)(puVar30 + 0x40) = param_6;
                                            *(undefined8 *)(puVar30 + 0x48) = param_7;
                                            *(undefined8 *)(puVar30 + 0x50) = param_8;
                                            local_2b0 = local_198;
                                            FUN_1008f68cc(local_198,&DAT_100eeaaa8,param_10);
                                            _swift_retain(param_13);
                                            _swift_retain(param_1);
                                            _swift_retain(local_2b0);
                                            FUN_100914f44(0,1,param_13,local_2b0,FUN_10092d308,
                                                          puVar30);
                                            _swift_release(puVar30);
                                            _swift_release(local_2b0);
                                          }
                                          else {
                                            local_110 = 0;
                                            uStack_108 = 0xe000000000000000;
                                            Swift::_StringGuts::grow(0x44,_Var54);
                                            SVar78.bridgeObject = (void *)0xeb00000000282074;
                                            SVar78.str = (char *)0x6e756f4365747962;
                                            SVar94.bridgeObject = pvVar57;
                                            SVar94.str = pcVar56;
                                            Swift::String::append(SVar78,SVar94);
                                            local_128[0] = pvVar69;
                                            SVar83 = Swift::CustomStringConvertible::get_description
                                                               ();
                                            SVar95.bridgeObject = pvVar57;
                                            SVar95.str = pcVar56;
                                            Swift::String::append(SVar83,SVar95);
                                            _swift_bridgeObjectRelease(SVar83.bridgeObject);
                                            puVar48 = (undefined8 *)0xd000000000000037;
                                            SVar79.bridgeObject = (void *)0x8000000100db4b30;
                                            SVar79.str = (char *)0xd000000000000037;
                                            SVar96.bridgeObject = pvVar57;
                                            SVar96.str = pcVar56;
                                            Swift::String::append(SVar79,SVar96);
                                            uVar61 = uStack_108;
                                            uVar32 = local_110;
                                            FUN_1008d5300();
                                            puVar30 = &DAT_100ef11e8;
                                            _swift_allocError(&DAT_100ef11e8,puVar48,0,0);
                                            *puVar48 = uVar32;
                                            puVar48[1] = uVar61;
                                            *(undefined4 *)(puVar48 + 2) = 0x16;
                                            local_2b0 = puVar30;
                                            FUN_10063dd74();
                                            _swift_errorRelease(puVar30);
                                          }
                                          puVar30 = &DAT_100f16e80;
                                          _swift_allocObject(&DAT_100f16e80,0x98,7);
                                          *(code **)(puVar30 + 0x10) = param_11;
                                          *(undefined8 *)(puVar30 + 0x18) = param_12;
                                          *(undefined **)(puVar30 + 0x20) = puVar7;
                                          *(undefined **)(puVar30 + 0x28) = param_9;
                                          *(char **)(puVar30 + 0x30) = param_10;
                                          *(void **)(puVar30 + 0x38) = pvVar66;
                                          *(void **)(puVar30 + 0x40) = param_4;
                                          *(undefined **)(puVar30 + 0x48) = param_13;
                                          *(undefined8 *)(puVar30 + 0x50) = param_1;
                                          *(long *)(puVar30 + 0x58) = param_2;
                                          puVar30[0x60] = 0;
                                          *(undefined8 *)(puVar30 + 0x68) = param_5;
                                          *(undefined8 *)(puVar30 + 0x70) = param_6;
                                          *(undefined8 *)(puVar30 + 0x78) = param_7;
                                          *(undefined8 *)(puVar30 + 0x80) = param_8;
                                          *(ulong *)(puVar30 + 0x88) = uVar58;
                                          *(long *)(puVar30 + 0x90) = lVar12;
                                          puVar33 = &DAT_100f16ea8;
                                          _swift_allocObject(&DAT_100f16ea8,0x28,7);
                                          *(code **)(puVar33 + 0x10) = thunk_FUN_10092d0a0;
                                          *(undefined **)(puVar33 + 0x18) = puVar30;
                                          *(undefined **)(puVar33 + 0x20) = local_2b0;
                                          uVar60 = *(ulong *)(local_2b0 + 0x28);
                                          lVar28 = *(long *)(local_2b0 + 0x30);
                                          _swift_getObjectType();
                                          pcVar65 = *(code **)(lVar28 + 0x10);
                                          _swift_retain_n(param_13,2);
                                          _swift_retain_n(param_1,2);
                                          _swift_retain_n(param_12,2);
                                          _swift_retain_n(puVar7,2);
                                          _swift_unknownObjectRetain_n(param_9,2);
                                          _swift_retain_n(puVar30,2);
                                          _swift_retain_n(local_2b0,2);
                                          uVar62 = uVar60;
                                          (*pcVar65)(uVar60,lVar28);
                                          if ((uVar62 & 1) == 0) {
                                            puVar34 = &DAT_100f16ed0;
                                            _swift_allocObject(&DAT_100f16ed0,0x28,7);
                                            *(undefined **)(puVar34 + 0x10) = local_2b0;
                                            *(code **)(puVar34 + 0x18) = thunk_FUN_10092be10;
                                            *(undefined **)(puVar34 + 0x20) = puVar33;
                                            pcVar65 = *(code **)(lVar28 + 0x18);
                                            _swift_retain(local_2b0);
                                            _swift_retain(puVar33);
                                            (*pcVar65)(thunk_FUN_10092be1c,puVar34,uVar60,lVar28);
                                            _swift_release(param_12);
                                            _swift_release(puVar34);
                                            _swift_release(local_2b0);
                                            _swift_release_n(puVar30,2);
                                            _swift_release(puVar33);
                                          }
                                          else {
                                            _swift_beginAccess(local_2b0 + 0x10,&local_110,0,0);
                                            uVar60 = *(ulong *)(local_2b0 + 0x20);
                                            if (uVar60 >> 0x38 < 0xff) {
                                              lVar28 = *(long *)(local_2b0 + 0x10);
                                              uVar32 = *(undefined8 *)(local_2b0 + 0x18);
                                              if (uVar60 >> 0x38 == 1) {
                                                uVar64 = *(ulong *)(puVar7 + 0x20);
                                                lVar12 = *(long *)(puVar7 + 0x28);
                                                _swift_getObjectType();
                                                pcVar65 = *(code **)(lVar12 + 0x10);
                                                uVar58 = uVar60;
                                                FUN_1008fa5cc(lVar28,uVar32,uVar60,1);
                                                (*pcVar65)(uVar64,lVar12);
                                                if ((uVar64 & 1) == 0) {
                                                  uVar61 = *(undefined8 *)(puVar7 + 0x20);
                                                  lVar12 = *(long *)(puVar7 + 0x28);
                                                  _swift_getObjectType(uVar61);
                                                  puVar34 = &DAT_100f16ef8;
                                                  _swift_allocObject(&DAT_100f16ef8,0x20,7);
                                                  *(undefined **)(puVar34 + 0x10) = puVar7;
                                                  *(long *)(puVar34 + 0x18) = lVar28;
                                                  pcVar65 = *(code **)(lVar12 + 0x18);
                                                  _swift_retain(puVar7);
                                                  FUN_10092be28(lVar28,uVar32,uVar60);
                                                  (*pcVar65)(thunk_FUN_1005dfd68,puVar34,uVar61,
                                                             lVar12);
                                                  _swift_release(puVar34);
                                                }
                                                else {
                                                  lVar35 = lVar28;
                                                  FUN_1005de8f4(lVar28);
                                                  FUN_1006486f8();
                                                  FUN_100004550(lVar35,lVar12);
                                                  _swift_bridgeObjectRelease(uVar58);
                                                }
                                              }
                                              else {
                                                uVar5 = (int)((ulong)uVar32 >> 0x20) - (int)uVar32;
                                                FUN_1008fa5cc(lVar28,uVar32,uVar60);
                                                lVar35 = lVar28;
                                                (*param_11)(lVar28,uVar32,uVar60 & 0xffffffffffffff)
                                                ;
                                                if (uVar5 == 0) {
                                                  puVar34 = &DAT_100f16f20;
                                                  _swift_allocObject(&DAT_100f16f20,0x28,7);
                                                  *(code **)(puVar34 + 0x10) = thunk_FUN_10092be50;
                                                  *(undefined **)(puVar34 + 0x18) = puVar7;
                                                  *(long *)(puVar34 + 0x20) = lVar35;
                                                  uVar64 = *(ulong *)(lVar35 + 0x20);
                                                  lVar12 = *(long *)(lVar35 + 0x28);
                                                  _swift_getObjectType();
                                                  pcVar65 = *(code **)(lVar12 + 0x10);
                                                  _swift_retain_n(puVar7,5);
                                                  _swift_retain_n(lVar35,2);
                                                  uVar58 = uVar64;
                                                  (*pcVar65)(uVar64,lVar12);
                                                  puVar36 = puVar7;
                                                  if ((uVar58 & 1) == 0) {
                                                    _swift_release(puVar7);
                                                    puVar38 = &DAT_100f16f48;
                                                    _swift_allocObject(&DAT_100f16f48,0x28,7);
                                                    *(long *)(puVar38 + 0x10) = lVar35;
                                                    *(code **)(puVar38 + 0x18) = thunk_FUN_10065310c
                                                    ;
                                                    *(undefined **)(puVar38 + 0x20) = puVar34;
                                                    pcVar65 = *(code **)(lVar12 + 0x18);
                                                    _swift_retain(lVar35);
                                                    _swift_retain(puVar34);
                                                    (*pcVar65)(thunk_FUN_1008db360,puVar38,uVar64,
                                                               lVar12);
                                                    _swift_release(puVar38);
                                                    _swift_release_n(lVar35,2);
                                                    _swift_release_n(puVar7,2);
                                                    _swift_release(puVar34);
                                                  }
                                                  else {
                                                    _swift_beginAccess(lVar35 + 0x10,local_128,0,0);
                                                    cVar52 = *(char *)(lVar35 + 0x18);
                                                    if (cVar52 == -1) {
                                                      _swift_release(puVar7);
                                                      _swift_beginAccess(lVar35 + 0x30,&local_140,
                                                                         0x21,0);
                                                      FUN_10064967c(thunk_FUN_10065310c,puVar34);
                                                      _swift_endAccess(&local_140);
                                                    }
                                                    else {
                                                      uVar61 = *(undefined8 *)(lVar35 + 0x10);
                                                      FUN_100308524(uVar61,cVar52);
                                                      FUN_10092b43c(uVar61,cVar52,puVar7);
                                                      _swift_release(puVar7);
                                                      FUN_100308538(uVar61,cVar52);
                                                    }
                                                    FUN_1006486f8(0,0,0);
                                                    FUN_100004550(0,0);
                                                    _swift_release_n(lVar35,2);
                                                    _swift_release_n(puVar7,2);
                                                    _swift_release(puVar34);
                                                    _swift_bridgeObjectRelease(0);
                                                  }
                                                }
                                                else {
                                                  puVar38 = param_9;
                                                  FUN_100915740(param_9,param_10);
                                                  _swift_release(lVar35);
                                                  puVar34 = &DAT_100f16f70;
                                                  _swift_allocObject(&DAT_100f16f70,0xa0,7);
                                                  *(undefined **)(puVar34 + 0x10) = param_9;
                                                  *(char **)(puVar34 + 0x18) = param_10;
                                                  *(void **)(puVar34 + 0x20) = pvVar66;
                                                  *(void **)(puVar34 + 0x28) = param_4;
                                                  *(undefined **)(puVar34 + 0x30) = param_13;
                                                  *(undefined8 *)(puVar34 + 0x38) = param_1;
                                                  *(long *)(puVar34 + 0x40) = param_2;
                                                  puVar34[0x48] = 0;
                                                  *(undefined8 *)(puVar34 + 0x50) = param_5;
                                                  *(undefined8 *)(puVar34 + 0x58) = param_6;
                                                  *(undefined8 *)(puVar34 + 0x60) = param_7;
                                                  *(undefined8 *)(puVar34 + 0x68) = param_8;
                                                  *(code **)(puVar34 + 0x70) = param_11;
                                                  *(undefined8 *)(puVar34 + 0x78) = param_12;
                                                  *(undefined **)(puVar34 + 0x80) = puVar7;
                                                  *(ulong *)(puVar34 + 0x88) = uVar58;
                                                  *(long *)(puVar34 + 0x90) = lVar12;
                                                  *(ulong *)(puVar34 + 0x98) = (ulong)uVar5;
                                                  puVar36 = &DAT_100f16f98;
                                                  _swift_allocObject(&DAT_100f16f98,0x28,7);
                                                  *(code **)(puVar36 + 0x10) = thunk_FUN_10092d008;
                                                  *(undefined **)(puVar36 + 0x18) = puVar34;
                                                  *(undefined **)(puVar36 + 0x20) = puVar38;
                                                  uVar58 = *(ulong *)(puVar38 + 0x20);
                                                  lVar35 = *(long *)(puVar38 + 0x28);
                                                  _swift_getObjectType();
                                                  pcVar65 = *(code **)(lVar35 + 0x10);
                                                  _swift_retain_n(param_13,2);
                                                  _swift_retain_n(param_1,2);
                                                  _swift_retain_n(param_12,2);
                                                  _swift_retain_n(puVar7,2);
                                                  _swift_unknownObjectRetain_n(param_9,2);
                                                  _swift_retain_n(puVar34,2);
                                                  _swift_retain_n(puVar38,2);
                                                  uVar62 = uVar58;
                                                  (*pcVar65)(uVar58,lVar35);
                                                  if ((uVar62 & 1) == 0) {
                                                    puVar37 = &DAT_100f16fc0;
                                                    _swift_allocObject(&DAT_100f16fc0,0x28,7);
                                                    *(undefined **)(puVar37 + 0x10) = puVar38;
                                                    *(code **)(puVar37 + 0x18) = thunk_FUN_10065310c
                                                    ;
                                                    *(undefined **)(puVar37 + 0x20) = puVar36;
                                                    pcVar65 = *(code **)(lVar35 + 0x18);
                                                    _swift_retain(puVar38);
                                                    _swift_retain(puVar36);
                                                    (*pcVar65)(thunk_FUN_1008db360,puVar37,uVar58,
                                                               lVar35);
                                                    _swift_unknownObjectRelease(param_9);
                                                    _swift_release(puVar37);
                                                    _swift_release(puVar38);
                                                    _swift_release_n(puVar34,2);
                                                    _swift_release(puVar36);
                                                  }
                                                  else {
                                                    _Var54.unknown = (undefined *)local_128;
                                                    pcVar56 = (char *)0x0;
                                                    pvVar57 = (void *)0x0;
                                                    _swift_beginAccess(puVar38 + 0x10);
                                                    uVar61 = *(undefined8 *)(puVar38 + 0x10);
                                                    cVar52 = puVar38[0x18];
                                                    if (cVar52 == '\x01') {
                                                      uVar64 = *(ulong *)(puVar7 + 0x20);
                                                      lVar12 = *(long *)(puVar7 + 0x28);
                                                      _swift_getObjectType();
                                                      pcVar65 = *(code **)(lVar12 + 0x10);
                                                      FUN_100308524(uVar61,1);
                                                      (*pcVar65)(uVar64,lVar12);
                                                      if ((uVar64 & 1) == 0) {
                                                        uVar39 = *(undefined8 *)(puVar7 + 0x20);
                                                        lVar12 = *(long *)(puVar7 + 0x28);
                                                        _swift_getObjectType(uVar39);
                                                        puVar37 = &DAT_100f16fe8;
                                                        _swift_allocObject(&DAT_100f16fe8,0x20,7);
                                                        *(undefined **)(puVar37 + 0x10) = puVar7;
                                                        *(undefined8 *)(puVar37 + 0x18) = uVar61;
                                                        pcVar65 = *(code **)(lVar12 + 0x18);
                                                        _swift_retain(puVar7);
                                                        FUN_1005dfeb4(uVar61,1);
                                                        (*pcVar65)(thunk_FUN_1005dfd68,puVar37,
                                                                   uVar39,lVar12);
                                                        _swift_release(puVar37);
                                                      }
                                                      else {
                                                        uVar39 = uVar61;
                                                        FUN_1005de8f4(uVar61);
                                                        FUN_1006486f8();
                                                        FUN_100004550(uVar39,lVar12);
                                                        _swift_bridgeObjectRelease(pcVar56);
                                                      }
                                                      cVar52 = '\x01';
LAB_100920fe8:
                                                      FUN_100308538(uVar61,cVar52);
                                                    }
                                                    else {
                                                      if (cVar52 != -1) {
                                                        uVar58 = uVar64 - 3;
                                                        pvVar69 = param_4;
                                                        if ((uVar58 < 2) &&
                                                           ((uVar58 != 1 ||
                                                            (pvVar69 = pvVar66, (long)pvVar66 < 1)))
                                                           ) {
                                                          FUN_10090d0b8(0,0,puVar7);
                                                          goto LAB_100920fe8;
                                                        }
                                                        lVar12 = (ulong)uVar5 + lVar12;
                                                        if (SCARRY8(param_2,lVar12)) {
                    /* WARNING: Does not return */
                                                          pcVar65 = (code *)SoftwareBreakpoint(1,
                                                  0x10092142c);
                                                  (*pcVar65)();
                                                  }
                                                  if ((ulong)pvVar69 >> 0x20 == 0) {
                                                    puVar37 = &DAT_100f17240;
                                                    _swift_allocObject(&DAT_100f17240,0x58,7);
                                                    *(undefined **)(puVar37 + 0x10) = param_13;
                                                    *(undefined8 *)(puVar37 + 0x18) = param_1;
                                                    *(long *)(puVar37 + 0x20) = param_2 + lVar12;
                                                    puVar37[0x28] = 0;
                                                    *(void **)(puVar37 + 0x30) = pvVar69;
                                                    *(undefined8 *)(puVar37 + 0x38) = param_5;
                                                    *(undefined8 *)(puVar37 + 0x40) = param_6;
                                                    *(undefined8 *)(puVar37 + 0x48) = param_7;
                                                    *(undefined8 *)(puVar37 + 0x50) = param_8;
                                                    local_330 = local_198;
                                                    FUN_1008f68cc(local_198,&DAT_100eeaaa8,param_10)
                                                    ;
                                                    _swift_retain(param_13);
                                                    _swift_retain(param_1);
                                                    _swift_retain(local_330);
                                                    FUN_100914f44(0,1,param_13,local_330,
                                                                  FUN_10092d308,puVar37);
                                                    _swift_release(puVar37);
                                                    _swift_release(local_330);
                                                  }
                                                  else {
                                                    local_140 = 0;
                                                    local_138 = 0xe000000000000000;
                                                    Swift::_StringGuts::grow(0x44,_Var54);
                                                    SVar80.bridgeObject = (void *)0xeb00000000282074
                                                    ;
                                                    SVar80.str = (char *)0x6e756f4365747962;
                                                    SVar97.bridgeObject = pvVar57;
                                                    SVar97.str = pcVar56;
                                                    Swift::String::append(SVar80,SVar97);
                                                    local_158[0] = pvVar69;
                                                    SVar83 = Swift::CustomStringConvertible::
                                                             get_description();
                                                    SVar98.bridgeObject = pvVar57;
                                                    SVar98.str = pcVar56;
                                                    Swift::String::append(SVar83,SVar98);
                                                    _swift_bridgeObjectRelease(SVar83.bridgeObject);
                                                    puVar48 = (undefined8 *)0xd000000000000037;
                                                    SVar81.bridgeObject = (void *)0x8000000100db4b30
                                                    ;
                                                    SVar81.str = (char *)0xd000000000000037;
                                                    SVar99.bridgeObject = pvVar57;
                                                    SVar99.str = pcVar56;
                                                    Swift::String::append(SVar81,SVar99);
                                                    uVar63 = local_138;
                                                    uVar39 = local_140;
                                                    FUN_1008d5300();
                                                    puVar37 = &DAT_100ef11e8;
                                                    _swift_allocError(&DAT_100ef11e8,puVar48,0,0);
                                                    *puVar48 = uVar39;
                                                    puVar48[1] = uVar63;
                                                    *(undefined4 *)(puVar48 + 2) = 0x16;
                                                    local_330 = puVar37;
                                                    FUN_10063dd74();
                                                    _swift_errorRelease(puVar37);
                                                  }
                                                  puVar37 = &DAT_100f17010;
                                                  _swift_allocObject(&DAT_100f17010,0x98,7);
                                                  *(code **)(puVar37 + 0x10) = param_11;
                                                  *(undefined8 *)(puVar37 + 0x18) = param_12;
                                                  *(undefined **)(puVar37 + 0x20) = puVar7;
                                                  *(undefined **)(puVar37 + 0x28) = param_9;
                                                  *(char **)(puVar37 + 0x30) = param_10;
                                                  *(void **)(puVar37 + 0x38) = pvVar66;
                                                  *(void **)(puVar37 + 0x40) = param_4;
                                                  *(undefined **)(puVar37 + 0x48) = param_13;
                                                  *(undefined8 *)(puVar37 + 0x50) = param_1;
                                                  *(long *)(puVar37 + 0x58) = param_2;
                                                  puVar37[0x60] = 0;
                                                  *(undefined8 *)(puVar37 + 0x68) = param_5;
                                                  *(undefined8 *)(puVar37 + 0x70) = param_6;
                                                  *(undefined8 *)(puVar37 + 0x78) = param_7;
                                                  *(undefined8 *)(puVar37 + 0x80) = param_8;
                                                  *(ulong *)(puVar37 + 0x88) = uVar58;
                                                  *(long *)(puVar37 + 0x90) = lVar12;
                                                  puVar40 = &DAT_100f17038;
                                                  _swift_allocObject(&DAT_100f17038,0x28,7);
                                                  *(code **)(puVar40 + 0x10) = thunk_FUN_10092d0a0;
                                                  *(undefined **)(puVar40 + 0x18) = puVar37;
                                                  *(undefined **)(puVar40 + 0x20) = local_330;
                                                  uVar62 = *(ulong *)(local_330 + 0x28);
                                                  lVar35 = *(long *)(local_330 + 0x30);
                                                  _swift_getObjectType();
                                                  pcVar65 = *(code **)(lVar35 + 0x10);
                                                  _swift_retain_n(param_13,2);
                                                  _swift_retain_n(param_1,2);
                                                  _swift_retain_n(param_12,2);
                                                  _swift_retain_n(puVar7,2);
                                                  _swift_unknownObjectRetain_n(param_9,2);
                                                  _swift_retain_n(puVar37,2);
                                                  _swift_retain_n(local_330,2);
                                                  uVar41 = uVar62;
                                                  (*pcVar65)(uVar62,lVar35);
                                                  if ((uVar41 & 1) == 0) {
                                                    puVar42 = &DAT_100f17060;
                                                    _swift_allocObject(&DAT_100f17060,0x28,7);
                                                    *(undefined **)(puVar42 + 0x10) = local_330;
                                                    *(code **)(puVar42 + 0x18) = thunk_FUN_10092be10
                                                    ;
                                                    *(undefined **)(puVar42 + 0x20) = puVar40;
                                                    pcVar65 = *(code **)(lVar35 + 0x18);
                                                    _swift_retain(local_330);
                                                    _swift_retain(puVar40);
                                                    (*pcVar65)(thunk_FUN_10092be1c,puVar42,uVar62,
                                                               lVar35);
                                                    _swift_release(param_12);
                                                    _swift_release(puVar42);
                                                    _swift_release(local_330);
                                                    _swift_release_n(puVar37,2);
                                                    _swift_release(puVar40);
                                                  }
                                                  else {
                                                    _swift_beginAccess(local_330 + 0x10,&local_140,0
                                                                       ,0);
                                                    uVar62 = *(ulong *)(local_330 + 0x20);
                                                    if (uVar62 >> 0x38 < 0xff) {
                                                      lVar35 = *(long *)(local_330 + 0x10);
                                                      uVar39 = *(undefined8 *)(local_330 + 0x18);
                                                      if (uVar62 >> 0x38 == 1) {
                                                        uVar64 = *(ulong *)(puVar7 + 0x20);
                                                        lVar12 = *(long *)(puVar7 + 0x28);
                                                        _swift_getObjectType();
                                                        pcVar65 = *(code **)(lVar12 + 0x10);
                                                        uVar58 = uVar62;
                                                        FUN_1008fa5cc(lVar35,uVar39,uVar62,1);
                                                        (*pcVar65)(uVar64,lVar12);
                                                        if ((uVar64 & 1) == 0) {
                                                          uVar63 = *(undefined8 *)(puVar7 + 0x20);
                                                          lVar12 = *(long *)(puVar7 + 0x28);
                                                          _swift_getObjectType(uVar63);
                                                          puVar42 = &DAT_100f17088;
                                                          _swift_allocObject(&DAT_100f17088,0x20,7);
                                                          *(undefined **)(puVar42 + 0x10) = puVar7;
                                                          *(long *)(puVar42 + 0x18) = lVar35;
                                                          pcVar65 = *(code **)(lVar12 + 0x18);
                                                          _swift_retain(puVar7);
                                                          FUN_10092be28(lVar35,uVar39,uVar62);
                                                          (*pcVar65)(thunk_FUN_1005dfd68,puVar42,
                                                                     uVar63,lVar12);
                                                          _swift_release(puVar42);
                                                        }
                                                        else {
                                                          lVar43 = lVar35;
                                                          FUN_1005de8f4(lVar35);
                                                          FUN_1006486f8();
                                                          FUN_100004550(lVar43,lVar12);
                                                          _swift_bridgeObjectRelease(uVar58);
                                                        }
                                                      }
                                                      else {
                                                        uVar5 = (int)((ulong)uVar39 >> 0x20) -
                                                                (int)uVar39;
                                                        FUN_1008fa5cc(lVar35,uVar39,uVar62);
                                                        lVar43 = lVar35;
                                                        (*param_11)(lVar35,uVar39,
                                                                    uVar62 & 0xffffffffffffff);
                                                        if (uVar5 == 0) {
                                                          puVar42 = &DAT_100f170b0;
                                                          _swift_allocObject(&DAT_100f170b0,0x28,7);
                                                          *(code **)(puVar42 + 0x10) =
                                                               thunk_FUN_10092be50;
                                                          *(undefined **)(puVar42 + 0x18) = puVar7;
                                                          *(long *)(puVar42 + 0x20) = lVar43;
                                                          uVar64 = *(ulong *)(lVar43 + 0x20);
                                                          lVar12 = *(long *)(lVar43 + 0x28);
                                                          _swift_getObjectType();
                                                          pcVar65 = *(code **)(lVar12 + 0x10);
                                                          _swift_retain_n(puVar7,5);
                                                          _swift_retain_n(lVar43,2);
                                                          uVar58 = uVar64;
                                                          (*pcVar65)(uVar64,lVar12);
                                                          puVar44 = puVar7;
                                                          if ((uVar58 & 1) == 0) {
                                                            _swift_release(puVar7);
                                                            puVar46 = &DAT_100f170d8;
                                                            _swift_allocObject(&DAT_100f170d8,0x28,7
                                                                              );
                                                            *(long *)(puVar46 + 0x10) = lVar43;
                                                            *(code **)(puVar46 + 0x18) =
                                                                 thunk_FUN_10065310c;
                                                            *(undefined **)(puVar46 + 0x20) =
                                                                 puVar42;
                                                            pcVar65 = *(code **)(lVar12 + 0x18);
                                                            _swift_retain(lVar43);
                                                            _swift_retain(puVar42);
                                                            (*pcVar65)(thunk_FUN_1008db360,puVar46,
                                                                       uVar64,lVar12);
                                                            _swift_release(puVar46);
                                                            _swift_release_n(lVar43,2);
                                                            _swift_release_n(puVar7,2);
                                                            _swift_release(puVar42);
                                                          }
                                                          else {
                                                            _swift_beginAccess(lVar43 + 0x10,
                                                                               local_158,0,0);
                                                            cVar51 = *(char *)(lVar43 + 0x18);
                                                            if (cVar51 == -1) {
                                                              _swift_release(puVar7);
                                                              _swift_beginAccess(lVar43 + 0x30,
                                                                                 &local_170,0x21,0);
                                                              FUN_10064967c(thunk_FUN_10065310c,
                                                                            puVar42);
                                                              _swift_endAccess(&local_170);
                                                            }
                                                            else {
                                                              uVar63 = *(undefined8 *)
                                                                        (lVar43 + 0x10);
                                                              FUN_100308524(uVar63,cVar51);
                                                              FUN_10092b43c(uVar63,cVar51,puVar7);
                                                              _swift_release(puVar7);
                                                              FUN_100308538(uVar63,cVar51);
                                                            }
                                                            FUN_1006486f8(0,0,0);
                                                            FUN_100004550(0,0);
                                                            _swift_release_n(lVar43,2);
                                                            _swift_release_n(puVar7,2);
                                                            _swift_release(puVar42);
                                                            _swift_bridgeObjectRelease(0);
                                                          }
                                                        }
                                                        else {
                                                          puVar46 = param_9;
                                                          FUN_100915740(param_9,param_10);
                                                          _swift_release(lVar43);
                                                          puVar42 = &DAT_100f17100;
                                                          _swift_allocObject(&DAT_100f17100,0xa0,7);
                                                          *(undefined **)(puVar42 + 0x10) = param_9;
                                                          *(char **)(puVar42 + 0x18) = param_10;
                                                          *(void **)(puVar42 + 0x20) = pvVar66;
                                                          *(void **)(puVar42 + 0x28) = param_4;
                                                          *(undefined **)(puVar42 + 0x30) = param_13
                                                          ;
                                                          *(undefined8 *)(puVar42 + 0x38) = param_1;
                                                          *(long *)(puVar42 + 0x40) = param_2;
                                                          puVar42[0x48] = 0;
                                                          *(undefined8 *)(puVar42 + 0x50) = param_5;
                                                          *(undefined8 *)(puVar42 + 0x58) = param_6;
                                                          *(undefined8 *)(puVar42 + 0x60) = param_7;
                                                          *(undefined8 *)(puVar42 + 0x68) = param_8;
                                                          *(code **)(puVar42 + 0x70) = param_11;
                                                          *(undefined8 *)(puVar42 + 0x78) = param_12
                                                          ;
                                                          *(undefined **)(puVar42 + 0x80) = puVar7;
                                                          *(ulong *)(puVar42 + 0x88) = uVar58;
                                                          *(long *)(puVar42 + 0x90) = lVar12;
                                                          *(ulong *)(puVar42 + 0x98) = (ulong)uVar5;
                                                          puVar44 = &DAT_100f17128;
                                                          _swift_allocObject(&DAT_100f17128,0x28,7);
                                                          *(code **)(puVar44 + 0x10) =
                                                               thunk_FUN_10092d008;
                                                          *(undefined **)(puVar44 + 0x18) = puVar42;
                                                          *(undefined **)(puVar44 + 0x20) = puVar46;
                                                          uVar58 = *(ulong *)(puVar46 + 0x20);
                                                          lVar43 = *(long *)(puVar46 + 0x28);
                                                          _swift_getObjectType();
                                                          pcVar65 = *(code **)(lVar43 + 0x10);
                                                          _swift_retain_n(param_13,2);
                                                          _swift_retain_n(param_1,2);
                                                          _swift_retain_n(param_12,2);
                                                          _swift_retain_n(puVar7,2);
                                                          _swift_unknownObjectRetain_n(param_9,2);
                                                          _swift_retain_n(puVar42,2);
                                                          _swift_retain_n(puVar46,2);
                                                          uVar41 = uVar58;
                                                          (*pcVar65)(uVar58,lVar43);
                                                          if ((uVar41 & 1) == 0) {
                                                            puVar45 = &DAT_100f17150;
                                                            _swift_allocObject(&DAT_100f17150,0x28,7
                                                                              );
                                                            *(undefined **)(puVar45 + 0x10) =
                                                                 puVar46;
                                                            *(code **)(puVar45 + 0x18) =
                                                                 thunk_FUN_10065310c;
                                                            *(undefined **)(puVar45 + 0x20) =
                                                                 puVar44;
                                                            pcVar65 = *(code **)(lVar43 + 0x18);
                                                            _swift_retain(puVar46);
                                                            _swift_retain(puVar44);
                                                            (*pcVar65)(thunk_FUN_1008db360,puVar45,
                                                                       uVar58,lVar43);
                                                            _swift_unknownObjectRelease(param_9);
                                                            _swift_release(puVar45);
                                                            _swift_release(puVar46);
                                                            _swift_release_n(puVar42,2);
                                                            _swift_release(puVar44);
                                                          }
                                                          else {
                                                            _Var54.unknown = (undefined *)local_158;
                                                            pcVar56 = (char *)0x0;
                                                            pvVar57 = (void *)0x0;
                                                            _swift_beginAccess(puVar46 + 0x10);
                                                            uVar63 = *(undefined8 *)(puVar46 + 0x10)
                                                            ;
                                                            cVar51 = puVar46[0x18];
                                                            if (cVar51 == '\x01') {
                                                              uVar64 = *(ulong *)(puVar7 + 0x20);
                                                              lVar12 = *(long *)(puVar7 + 0x28);
                                                              _swift_getObjectType();
                                                              pcVar65 = *(code **)(lVar12 + 0x10);
                                                              FUN_100308524(uVar63,1);
                                                              (*pcVar65)(uVar64,lVar12);
                                                              if ((uVar64 & 1) == 0) {
                                                                uVar47 = *(undefined8 *)
                                                                          (puVar7 + 0x20);
                                                                lVar12 = *(long *)(puVar7 + 0x28);
                                                                _swift_getObjectType(uVar47);
                                                                puVar45 = &DAT_100f17178;
                                                                _swift_allocObject(&DAT_100f17178,
                                                                                   0x20,7);
                                                                *(undefined **)(puVar45 + 0x10) =
                                                                     puVar7;
                                                                *(undefined8 *)(puVar45 + 0x18) =
                                                                     uVar63;
                                                                pcVar65 = *(code **)(lVar12 + 0x18);
                                                                _swift_retain(puVar7);
                                                                FUN_1005dfeb4(uVar63,1);
                                                                (*pcVar65)(thunk_FUN_1005dfd68,
                                                                           puVar45,uVar47,lVar12);
                                                                _swift_release(puVar45);
                                                              }
                                                              else {
                                                                uVar47 = uVar63;
                                                                FUN_1005de8f4(uVar63);
                                                                FUN_1006486f8();
                                                                FUN_100004550(uVar47,lVar12);
                                                                _swift_bridgeObjectRelease(pcVar56);
                                                              }
                                                              cVar51 = '\x01';
LAB_100920eec:
                                                              FUN_100308538(uVar63,cVar51);
                                                            }
                                                            else {
                                                              if (cVar51 != -1) {
                                                                uVar64 = uVar64 - 4;
                                                                pvVar69 = param_4;
                                                                if ((uVar64 < 2) &&
                                                                   ((uVar64 != 1 ||
                                                                    (pvVar69 = pvVar66,
                                                                    (long)pvVar66 < 1)))) {
                                                                  FUN_10090d0b8(0,0,puVar7);
                                                                }
                                                                else {
                                                                  lVar12 = (ulong)uVar5 + lVar12;
                                                                  if (SCARRY8(param_2,lVar12)) {
                    /* WARNING: Does not return */
                                                                    pcVar65 = (code *)
                                                  SoftwareBreakpoint(1,0x100921430);
                                                  (*pcVar65)();
                                                  }
                                                  if ((ulong)pvVar69 >> 0x20 == 0) {
                                                    puVar45 = &DAT_100f17218;
                                                    _swift_allocObject(&DAT_100f17218,0x58,7);
                                                    *(undefined **)(puVar45 + 0x10) = param_13;
                                                    *(undefined8 *)(puVar45 + 0x18) = param_1;
                                                    *(long *)(puVar45 + 0x20) = param_2 + lVar12;
                                                    puVar45[0x28] = 0;
                                                    *(void **)(puVar45 + 0x30) = pvVar69;
                                                    *(undefined8 *)(puVar45 + 0x38) = param_5;
                                                    *(undefined8 *)(puVar45 + 0x40) = param_6;
                                                    *(undefined8 *)(puVar45 + 0x48) = param_7;
                                                    *(undefined8 *)(puVar45 + 0x50) = param_8;
                                                    FUN_1008f68cc(local_198,&DAT_100eeaaa8,param_10)
                                                    ;
                                                    _swift_retain(param_13);
                                                    _swift_retain(param_1);
                                                    _swift_retain(local_198);
                                                    FUN_100914f44(0,1,param_13,local_198,
                                                                  FUN_10092d308,puVar45);
                                                    _swift_release(puVar45);
                                                    _swift_release(local_198);
                                                  }
                                                  else {
                                                    local_170 = 0;
                                                    local_168 = 0xe000000000000000;
                                                    Swift::_StringGuts::grow(0x44,_Var54);
                                                    SVar82.bridgeObject = (void *)0xeb00000000282074
                                                    ;
                                                    SVar82.str = (char *)0x6e756f4365747962;
                                                    SVar100.bridgeObject = pvVar57;
                                                    SVar100.str = pcVar56;
                                                    Swift::String::append(SVar82,SVar100);
                                                    local_188 = pvVar69;
                                                    SVar83 = Swift::CustomStringConvertible::
                                                             get_description();
                                                    SVar101.bridgeObject = pvVar57;
                                                    SVar101.str = pcVar56;
                                                    Swift::String::append(SVar83,SVar101);
                                                    _swift_bridgeObjectRelease(SVar83.bridgeObject);
                                                    puVar48 = (undefined8 *)0xd000000000000037;
                                                    SVar84.bridgeObject = (void *)0x8000000100db4b30
                                                    ;
                                                    SVar84.str = (char *)0xd000000000000037;
                                                    SVar102.bridgeObject = pvVar57;
                                                    SVar102.str = pcVar56;
                                                    Swift::String::append(SVar84,SVar102);
                                                    uVar6 = local_168;
                                                    uVar47 = local_170;
                                                    FUN_1008d5300();
                                                    puVar45 = &DAT_100ef11e8;
                                                    _swift_allocError(&DAT_100ef11e8,puVar48,0,0);
                                                    *puVar48 = uVar47;
                                                    puVar48[1] = uVar6;
                                                    *(undefined4 *)(puVar48 + 2) = 0x16;
                                                    local_198 = puVar45;
                                                    FUN_10063dd74();
                                                    _swift_errorRelease(puVar45);
                                                  }
                                                  puVar45 = &DAT_100f171a0;
                                                  _swift_allocObject(&DAT_100f171a0,0x98,7);
                                                  *(code **)(puVar45 + 0x10) = param_11;
                                                  *(undefined8 *)(puVar45 + 0x18) = param_12;
                                                  *(undefined **)(puVar45 + 0x20) = puVar7;
                                                  *(undefined **)(puVar45 + 0x28) = param_9;
                                                  *(char **)(puVar45 + 0x30) = param_10;
                                                  *(void **)(puVar45 + 0x38) = pvVar66;
                                                  *(void **)(puVar45 + 0x40) = param_4;
                                                  *(undefined **)(puVar45 + 0x48) = param_13;
                                                  *(undefined8 *)(puVar45 + 0x50) = param_1;
                                                  *(long *)(puVar45 + 0x58) = param_2;
                                                  puVar45[0x60] = 0;
                                                  *(undefined8 *)(puVar45 + 0x68) = param_5;
                                                  *(undefined8 *)(puVar45 + 0x70) = param_6;
                                                  *(undefined8 *)(puVar45 + 0x78) = param_7;
                                                  *(undefined8 *)(puVar45 + 0x80) = param_8;
                                                  *(ulong *)(puVar45 + 0x88) = uVar64;
                                                  *(long *)(puVar45 + 0x90) = lVar12;
                                                  puVar49 = &DAT_100f171c8;
                                                  _swift_allocObject(&DAT_100f171c8,0x28,7);
                                                  *(code **)(puVar49 + 0x10) = thunk_FUN_10092d0a0;
                                                  *(undefined **)(puVar49 + 0x18) = puVar45;
                                                  *(undefined **)(puVar49 + 0x20) = local_198;
                                                  uVar64 = *(ulong *)(local_198 + 0x28);
                                                  lVar12 = *(long *)(local_198 + 0x30);
                                                  _swift_getObjectType();
                                                  pcVar65 = *(code **)(lVar12 + 0x10);
                                                  _swift_retain_n(param_13,2);
                                                  _swift_retain_n(param_1,2);
                                                  _swift_retain_n(param_12,2);
                                                  _swift_retain_n(puVar7,2);
                                                  _swift_unknownObjectRetain_n(param_9,2);
                                                  _swift_retain_n(puVar45,2);
                                                  _swift_retain_n(local_198,2);
                                                  uVar58 = uVar64;
                                                  (*pcVar65)(uVar64,lVar12);
                                                  if ((uVar58 & 1) == 0) {
                                                    puVar50 = &DAT_100f171f0;
                                                    _swift_allocObject(&DAT_100f171f0,0x28,7);
                                                    *(undefined **)(puVar50 + 0x10) = local_198;
                                                    *(code **)(puVar50 + 0x18) = thunk_FUN_10092be10
                                                    ;
                                                    *(undefined **)(puVar50 + 0x20) = puVar49;
                                                    pcVar65 = *(code **)(lVar12 + 0x18);
                                                    _swift_retain(local_198);
                                                    _swift_retain(puVar49);
                                                    (*pcVar65)(thunk_FUN_10092be1c,puVar50,uVar64,
                                                               lVar12);
                                                    _swift_release(param_12);
                                                    _swift_release(puVar50);
                                                    _swift_release(local_198);
                                                    _swift_release_n(puVar45,2);
                                                    _swift_release(puVar49);
                                                  }
                                                  else {
                                                    _swift_beginAccess(local_198 + 0x10,&local_170,0
                                                                       ,0);
                                                    if (*(ulong *)(local_198 + 0x20) >> 0x38 < 0xff)
                                                    {
                                                      local_188 = *(void **)(local_198 + 0x10);
                                                      local_180 = *(undefined8 *)(local_198 + 0x18);
                                                      local_178 = *(ulong *)(local_198 + 0x20);
                                                      FUN_1008fa5cc();
                                                      FUN_100925494(&local_188,param_11,param_12,
                                                                    puVar7,param_9,param_10,pvVar66,
                                                                    param_4,param_13,param_1,param_2
                                                                    ,0);
                                                      FUN_10090ef88(local_188,local_180,
                                                                    local_178 & 0xffffffffffffff,
                                                                    local_178._7_1_);
                                                    }
                                                    else {
                                                      _swift_beginAccess(local_198 + 0x38,&local_188
                                                                         ,0x21,0);
                                                      FUN_10064967c(thunk_FUN_10092be10,puVar49);
                                                      _swift_endAccess(&local_188);
                                                    }
                                                    FUN_1006486f8(0,0,0);
                                                    FUN_100004550(0,0);
                                                    _swift_release(param_12);
                                                    _swift_release(local_198);
                                                    _swift_release_n(puVar45,2);
                                                    _swift_release(puVar49);
                                                    _swift_bridgeObjectRelease(0);
                                                  }
                                                  _swift_release(local_198);
                                                  _swift_release(param_1);
                                                  _swift_release(param_13);
                                                  _swift_unknownObjectRelease(param_9);
                                                  _swift_release(puVar7);
                                                  }
                                                  goto LAB_100920eec;
                                                  }
                                                  _swift_beginAccess(puVar46 + 0x30,&local_170,0x21,
                                                                     0);
                                                  FUN_10064967c(thunk_FUN_10065310c,puVar44);
                                                  _swift_endAccess(&local_170);
                                                  }
                                                  FUN_1006486f8(0,0,0);
                                                  FUN_100004550(0,0);
                                                  _swift_unknownObjectRelease(param_9);
                                                  _swift_release(puVar46);
                                                  _swift_release_n(puVar42,2);
                                                  _swift_release(puVar44);
                                                  _swift_bridgeObjectRelease(0);
                                                  }
                                                  _swift_release(puVar46);
                                                  _swift_release(puVar7);
                                                  _swift_release(param_12);
                                                  _swift_release(param_1);
                                                  puVar44 = param_13;
                                                  }
                                                  _swift_release(puVar44);
                                                  }
                                                  FUN_10092be3c(lVar35,uVar39,uVar62);
                                                  }
                                                  else {
                                                    _swift_beginAccess(local_330 + 0x38,local_158,
                                                                       0x21,0);
                                                    FUN_10064967c(thunk_FUN_10092be10,puVar40);
                                                    _swift_endAccess(local_158);
                                                  }
                                                  FUN_1006486f8(0,0,0);
                                                  FUN_100004550(0,0);
                                                  _swift_release(param_12);
                                                  _swift_release(local_330);
                                                  _swift_release_n(puVar37,2);
                                                  _swift_release(puVar40);
                                                  _swift_bridgeObjectRelease(0);
                                                  }
                                                  _swift_release(local_330);
                                                  _swift_release(param_1);
                                                  _swift_release(param_13);
                                                  _swift_unknownObjectRelease(param_9);
                                                  _swift_release(puVar7);
                                                  goto LAB_100920fe8;
                                                  }
                                                  _swift_beginAccess(puVar38 + 0x30,&local_140,0x21,
                                                                     0);
                                                  FUN_10064967c(thunk_FUN_10065310c,puVar36);
                                                  _swift_endAccess(&local_140);
                                                  }
                                                  FUN_1006486f8(0,0,0);
                                                  FUN_100004550(0,0);
                                                  _swift_unknownObjectRelease(param_9);
                                                  _swift_release(puVar38);
                                                  _swift_release_n(puVar34,2);
                                                  _swift_release(puVar36);
                                                  _swift_bridgeObjectRelease(0);
                                                  }
                                                  _swift_release(puVar38);
                                                  _swift_release(puVar7);
                                                  _swift_release(param_12);
                                                  _swift_release(param_1);
                                                  puVar36 = param_13;
                                                }
                                                _swift_release(puVar36);
                                              }
                                              FUN_10092be3c(lVar28,uVar32,uVar60);
                                            }
                                            else {
                                              _swift_beginAccess(local_2b0 + 0x38,local_128,0x21,0);
                                              FUN_10064967c(thunk_FUN_10092be10,puVar33);
                                              _swift_endAccess(local_128);
                                            }
                                            FUN_1006486f8(0,0,0);
                                            FUN_100004550(0,0);
                                            _swift_release(param_12);
                                            _swift_release(local_2b0);
                                            _swift_release_n(puVar30,2);
                                            _swift_release(puVar33);
                                            _swift_bridgeObjectRelease(0);
                                          }
                                          _swift_release(local_2b0);
                                          _swift_release(param_1);
                                          _swift_release(param_13);
                                          _swift_unknownObjectRelease(param_9);
                                          _swift_release(puVar7);
                                          goto LAB_1009210e4;
                                        }
                                        _swift_beginAccess(puVar31 + 0x30,&local_110,0x21,0);
                                        FUN_10064967c(thunk_FUN_10065310c,puVar29);
                                        _swift_endAccess(&local_110);
                                      }
                                      FUN_1006486f8(0,0,0);
                                      FUN_100004550(0,0);
                                      _swift_unknownObjectRelease(param_9);
                                      _swift_release(puVar31);
                                      _swift_release_n(puVar27,2);
                                      _swift_release(puVar29);
                                      _swift_bridgeObjectRelease(0);
                                    }
                                    _swift_release(puVar31);
                                    _swift_release(puVar7);
                                    _swift_release(param_12);
                                    _swift_release(param_1);
                                    puVar29 = param_13;
                                  }
                                  _swift_release(puVar29);
                                }
                                FUN_10092be3c(lVar20,uVar24,uVar67);
                              }
                              else {
                                _swift_beginAccess(puVar25 + 0x38,local_f8,0x21,0);
                                FUN_10064967c(thunk_FUN_10092be10,puVar26);
                                _swift_endAccess(local_f8);
                              }
                              FUN_1006486f8(0,0,0);
                              FUN_100004550(0,0);
                              _swift_release(param_12);
                              _swift_release(puVar25);
                              _swift_release_n(puVar22,2);
                              _swift_release(puVar26);
                              _swift_bridgeObjectRelease(0);
                            }
                            _swift_release(puVar25);
                            _swift_release(param_1);
                            _swift_release(param_13);
                            _swift_unknownObjectRelease(param_9);
                            _swift_release(puVar7);
                            FUN_100308538(uVar68,cVar4);
                          }
                        }
                        FUN_1006486f8(0,0,0);
                        FUN_100004550(0,0);
                        _swift_unknownObjectRelease(param_9);
                        _swift_release(puVar21);
                        _swift_release_n(puVar19,2);
                        _swift_release(puVar23);
                        _swift_bridgeObjectRelease(0);
                      }
                      _swift_release(puVar21);
                      _swift_release(puVar7);
                      _swift_release(param_12);
                      _swift_release(param_1);
                      _swift_release(param_13);
                      FUN_10092be3c(lVar55,uVar16,uVar72);
                    }
                  }
                }
                else {
                  _swift_beginAccess(puVar17 + 0x38,local_c8,0x21,0);
                  FUN_10064967c(thunk_FUN_10092be10,puVar18);
                  _swift_endAccess(local_c8);
                }
                FUN_1006486f8(0,0,0);
                FUN_100004550(0,0);
                _swift_release(param_12);
                _swift_release(puVar17);
                _swift_release_n(puVar14,2);
                _swift_release(puVar18);
                _swift_bridgeObjectRelease(0);
              }
              _swift_release(puVar17);
              _swift_release(param_1);
              _swift_release(param_13);
              _swift_unknownObjectRelease(param_9);
              _swift_release(puVar7);
              FUN_100308538(uVar71,cVar3);
            }
          }
          FUN_1006486f8(0,0,0);
          FUN_100004550(0,0);
          _swift_unknownObjectRelease(param_9);
          _swift_release(puVar13);
          _swift_release_n(puVar11,2);
          _swift_release(puVar15);
          _swift_bridgeObjectRelease(0);
        }
        _swift_release(puVar13);
        _swift_release(puVar7);
        _swift_release(param_12);
        _swift_release(param_1);
        _swift_release(param_13);
        FUN_10092be3c(lVar1,uVar2,uVar70);
      }
    }
  }
  else {
    _swift_beginAccess(puVar9 + 0x38,local_98,0x21,0);
    FUN_10064967c(thunk_FUN_10092be10,puVar10);
    _swift_endAccess(local_98);
  }
  FUN_1006486f8(0,0,0);
  FUN_100004550(0,0);
  _swift_release(param_12);
  _swift_release(puVar9);
  _swift_release_n(puVar8,2);
  _swift_release(puVar10);
  _swift_bridgeObjectRelease(0);
LAB_1009213dc:
  _swift_release(puVar9);
  _swift_release(param_1);
  _swift_release(param_13);
  _swift_unknownObjectRelease(param_9);
  _swift_release(puVar7);
  return puVar7;
}



/* Address: 0x100921430 | FUN_100921430 */

char * FUN_100921430(undefined8 param_1,long param_2,ulong param_3,void *param_4,undefined8 param_5,
                    undefined8 param_6,undefined8 param_7,char *param_8,char *param_9,code *param_10
                    ,undefined8 param_11,char *param_12)

{
  long lVar1;
  undefined8 uVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  char *pcVar7;
  char *pcVar8;
  undefined *puVar9;
  char *pcVar10;
  char *pcVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  char *pcVar17;
  char *pcVar18;
  undefined *puVar19;
  undefined *puVar20;
  long lVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined8 uVar24;
  char *pcVar25;
  undefined *puVar26;
  undefined *puVar27;
  long lVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined8 uVar31;
  undefined *puVar32;
  undefined *puVar33;
  long lVar34;
  undefined *puVar35;
  undefined *puVar36;
  undefined8 uVar37;
  undefined *puVar38;
  ulong uVar39;
  undefined *puVar40;
  long lVar41;
  undefined *puVar42;
  undefined *puVar43;
  undefined8 uVar44;
  undefined8 *puVar45;
  undefined *puVar46;
  undefined *puVar47;
  char cVar48;
  char cVar49;
  char cVar50;
  _StringGuts _Var51;
  undefined8 uVar52;
  char *pcVar53;
  char *pcVar54;
  char *pcVar55;
  char *pcVar56;
  void *pvVar57;
  ulong uVar58;
  undefined8 uVar59;
  undefined8 uVar60;
  ulong uVar61;
  undefined8 uVar62;
  ulong uVar63;
  code *pcVar64;
  ulong uVar65;
  ulong uVar66;
  ulong uVar67;
  ulong uVar68;
  undefined8 uVar69;
  ulong uVar70;
  long lVar71;
  undefined8 uVar72;
  String SVar73;
  String SVar74;
  String SVar75;
  String SVar76;
  String SVar77;
  String SVar78;
  String SVar79;
  String SVar80;
  String SVar81;
  String SVar82;
  String SVar83;
  String SVar84;
  String SVar85;
  String SVar86;
  String SVar87;
  String SVar88;
  String SVar89;
  String SVar90;
  String SVar91;
  String SVar92;
  String SVar93;
  String SVar94;
  String SVar95;
  String SVar96;
  String SVar97;
  String SVar98;
  String SVar99;
  String SVar100;
  String SVar101;
  String SVar102;
  char *local_328;
  char *local_2b8;
  ulong local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  ulong local_158 [3];
  undefined8 local_140;
  undefined8 local_138;
  ulong local_128 [3];
  undefined8 local_110;
  undefined8 uStack_108;
  ulong local_f8 [3];
  undefined8 local_e0;
  undefined8 uStack_d8;
  ulong local_c8 [3];
  undefined8 local_b0;
  undefined8 uStack_a8;
  ulong local_98 [3];
  undefined8 local_80;
  undefined8 uStack_78;
  
  if ((long)param_3 < 1) {
                    /* WARNING: Does not return */
    pcVar64 = (code *)SoftwareBreakpoint(1,0x100922758);
    (*pcVar64)();
  }
  uVar63 = 0;
  if (param_3 != 0) {
    uVar63 = param_2 / (long)param_3;
  }
  lVar71 = uVar63 + 1;
  if (SCARRY8(uVar63,1)) {
                    /* WARNING: Does not return */
    pcVar64 = (code *)SoftwareBreakpoint(1,0x10092275c);
    (*pcVar64)();
  }
  uVar68 = param_2 - uVar63 * param_3;
  pcVar7 = param_8;
  pvVar57 = param_4;
  _swift_getObjectType();
  _Var51.unknown = PTR___type_metadata_for____100eae0c8 + 8;
  pcVar8 = pcVar7;
  pcVar10 = param_9;
  FUN_1008f68cc();
  uVar66 = param_3;
  if ((uVar63 == 0 || lVar71 < 1) && (uVar66 = uVar68, uVar63 != 0 || (long)uVar68 < 1)) {
    FUN_10090d0b8(0,0,pcVar8);
    return pcVar8;
  }
  if (uVar66 >> 0x20 == 0) {
    puVar9 = &DAT_100f17c18;
    _swift_allocObject(&DAT_100f17c18,0x58,7);
    *(char **)(puVar9 + 0x10) = param_12;
    *(undefined8 *)(puVar9 + 0x18) = param_1;
    *(undefined8 *)(puVar9 + 0x20) = 0;
    puVar9[0x28] = 1;
    *(ulong *)(puVar9 + 0x30) = uVar66;
    *(void **)(puVar9 + 0x38) = param_4;
    *(undefined8 *)(puVar9 + 0x40) = param_5;
    *(undefined8 *)(puVar9 + 0x48) = param_6;
    *(undefined8 *)(puVar9 + 0x50) = param_7;
    pcVar11 = pcVar7;
    FUN_1008f68cc(pcVar7,&DAT_100eeaaa8,param_9);
    _swift_retain();
    _swift_retain(puVar9);
    _swift_retain(param_12);
    _swift_retain(param_1);
    FUN_100914f44(0,1,param_12,pcVar11,FUN_10092d308,puVar9);
    _swift_release(pcVar11);
    _swift_release_n(puVar9,2);
  }
  else {
    local_80 = 0;
    uStack_78 = 0xe000000000000000;
    Swift::_StringGuts::grow(0x44,_Var51);
    SVar83.bridgeObject = (void *)0xeb00000000282074;
    SVar83.str = (char *)0x6e756f4365747962;
    SVar85.bridgeObject = pvVar57;
    SVar85.str = pcVar10;
    Swift::String::append(SVar83,SVar85);
    local_98[0] = uVar66;
    SVar83 = Swift::CustomStringConvertible::get_description();
    SVar86.bridgeObject = pvVar57;
    SVar86.str = pcVar10;
    Swift::String::append(SVar83,SVar86);
    _swift_bridgeObjectRelease(SVar83.bridgeObject);
    puVar45 = (undefined8 *)0xd000000000000037;
    SVar73.bridgeObject = (void *)0x8000000100db4b30;
    SVar73.str = (char *)0xd000000000000037;
    SVar87.bridgeObject = pvVar57;
    SVar87.str = pcVar10;
    Swift::String::append(SVar73,SVar87);
    uVar52 = uStack_78;
    uVar2 = local_80;
    FUN_1008d5300();
    pcVar10 = "";
    _swift_allocError(&DAT_100ef11e8,puVar45,0,0);
    *puVar45 = uVar2;
    puVar45[1] = uVar52;
    *(undefined4 *)(puVar45 + 2) = 0x16;
    pcVar11 = pcVar10;
    FUN_10063dd74();
    _swift_errorRelease(pcVar10);
  }
  puVar9 = &DAT_100f17308;
  _swift_allocObject(&DAT_100f17308,0x98,7);
  *(code **)(puVar9 + 0x10) = param_10;
  *(undefined8 *)(puVar9 + 0x18) = param_11;
  *(char **)(puVar9 + 0x20) = pcVar8;
  *(char **)(puVar9 + 0x28) = param_8;
  *(char **)(puVar9 + 0x30) = param_9;
  *(ulong *)(puVar9 + 0x38) = uVar68;
  *(ulong *)(puVar9 + 0x40) = param_3;
  *(char **)(puVar9 + 0x48) = param_12;
  *(undefined8 *)(puVar9 + 0x50) = param_1;
  *(undefined8 *)(puVar9 + 0x58) = 0;
  puVar9[0x60] = 1;
  *(void **)(puVar9 + 0x68) = param_4;
  *(undefined8 *)(puVar9 + 0x70) = param_5;
  *(undefined8 *)(puVar9 + 0x78) = param_6;
  *(undefined8 *)(puVar9 + 0x80) = param_7;
  *(long *)(puVar9 + 0x88) = lVar71;
  *(undefined8 *)(puVar9 + 0x90) = 0;
  puVar12 = &DAT_100f17330;
  _swift_allocObject(&DAT_100f17330,0x28,7);
  *(code **)(puVar12 + 0x10) = thunk_FUN_10092d0a0;
  *(undefined **)(puVar12 + 0x18) = puVar9;
  *(char **)(puVar12 + 0x20) = pcVar11;
  uVar66 = *(ulong *)(pcVar11 + 0x28);
  lVar1 = *(long *)(pcVar11 + 0x30);
  _swift_getObjectType();
  pcVar64 = *(code **)(lVar1 + 0x10);
  _swift_retain_n(param_12,2);
  _swift_retain_n(param_1,2);
  _swift_retain_n(param_11,2);
  _swift_retain_n(pcVar8,2);
  _swift_unknownObjectRetain_n(param_8,2);
  _swift_retain_n(puVar9,2);
  _swift_retain_n(pcVar11,2);
  uVar67 = uVar66;
  (*pcVar64)(uVar66,lVar1);
  if ((uVar67 & 1) == 0) {
    puVar13 = &DAT_100f17358;
    _swift_allocObject(&DAT_100f17358,0x28,7);
    *(char **)(puVar13 + 0x10) = pcVar11;
    *(code **)(puVar13 + 0x18) = thunk_FUN_10092be10;
    *(undefined **)(puVar13 + 0x20) = puVar12;
    pcVar64 = *(code **)(lVar1 + 0x18);
    _swift_retain(pcVar11);
    _swift_retain(puVar12);
    (*pcVar64)(thunk_FUN_10092be1c,puVar13,uVar66,lVar1);
    _swift_release(param_11);
    _swift_release(puVar13);
    _swift_release(pcVar11);
    _swift_release_n(puVar9,2);
    _swift_release(puVar12);
    goto LAB_100921c4c;
  }
  _swift_beginAccess(pcVar11 + 0x10,&local_80,0,0);
  uVar66 = *(ulong *)(pcVar11 + 0x20);
  if (uVar66 >> 0x38 < 0xff) {
    lVar1 = *(long *)(pcVar11 + 0x10);
    uVar2 = *(undefined8 *)(pcVar11 + 0x18);
    if (uVar66 >> 0x38 == 1) {
      uVar63 = *(ulong *)(pcVar8 + 0x20);
      lVar71 = *(long *)(pcVar8 + 0x28);
      _swift_getObjectType();
      pcVar64 = *(code **)(lVar71 + 0x10);
      uVar68 = uVar66;
      FUN_1008fa5cc(lVar1,uVar2,uVar66,1);
      (*pcVar64)(uVar63,lVar71);
      if ((uVar63 & 1) == 0) {
        uVar52 = *(undefined8 *)(pcVar8 + 0x20);
        lVar71 = *(long *)(pcVar8 + 0x28);
        _swift_getObjectType();
        puVar13 = &DAT_100f17380;
        _swift_allocObject(&DAT_100f17380,0x20,7);
        *(char **)(puVar13 + 0x10) = pcVar8;
        *(long *)(puVar13 + 0x18) = lVar1;
        pcVar64 = *(code **)(lVar71 + 0x18);
        _swift_retain(pcVar8);
        FUN_10092be28(lVar1,uVar2,uVar66);
        (*pcVar64)(thunk_FUN_1005dfd68,puVar13,uVar52,lVar71);
        _swift_release(puVar13);
      }
      else {
        lVar14 = lVar1;
        FUN_1005de8f4(lVar1);
        FUN_1006486f8();
        FUN_100004550(lVar14,lVar71);
        _swift_bridgeObjectRelease(uVar68);
      }
      FUN_10092be3c(lVar1,uVar2,uVar66);
    }
    else {
      uVar5 = (int)((ulong)uVar2 >> 0x20) - (int)uVar2;
      uVar67 = (ulong)uVar5;
      FUN_1008fa5cc(lVar1,uVar2,uVar66);
      lVar14 = lVar1;
      (*param_10)(lVar1,uVar2,uVar66 & 0xffffffffffffff);
      if (uVar5 == 0) {
        puVar13 = &DAT_100f173a8;
        _swift_allocObject(&DAT_100f173a8,0x28,7);
        *(code **)(puVar13 + 0x10) = thunk_FUN_10092be50;
        *(char **)(puVar13 + 0x18) = pcVar8;
        *(long *)(puVar13 + 0x20) = lVar14;
        uVar63 = *(ulong *)(lVar14 + 0x20);
        lVar71 = *(long *)(lVar14 + 0x28);
        _swift_getObjectType();
        pcVar64 = *(code **)(lVar71 + 0x10);
        _swift_retain_n(pcVar8,5);
        _swift_retain_n(lVar14,2);
        uVar68 = uVar63;
        (*pcVar64)(uVar63,lVar71);
        if ((uVar68 & 1) == 0) {
          _swift_release(pcVar8);
          puVar16 = &DAT_100f173d0;
          _swift_allocObject(&DAT_100f173d0,0x28,7);
          *(long *)(puVar16 + 0x10) = lVar14;
          *(code **)(puVar16 + 0x18) = thunk_FUN_10065310c;
          *(undefined **)(puVar16 + 0x20) = puVar13;
          pcVar64 = *(code **)(lVar71 + 0x18);
          _swift_retain(lVar14);
          _swift_retain(puVar13);
          (*pcVar64)(thunk_FUN_1008db360,puVar16,uVar63,lVar71);
          _swift_release(puVar16);
          _swift_release_n(lVar14,2);
          _swift_release_n(pcVar8,2);
          _swift_release(puVar13);
        }
        else {
          _swift_beginAccess(lVar14 + 0x10,local_98,0,0);
          cVar3 = *(char *)(lVar14 + 0x18);
          if (cVar3 == -1) {
            _swift_release(pcVar8);
            _swift_beginAccess(lVar14 + 0x30,&local_b0,0x21,0);
            FUN_10064967c(thunk_FUN_10065310c,puVar13);
            _swift_endAccess(&local_b0);
          }
          else {
            uVar52 = *(undefined8 *)(lVar14 + 0x10);
            FUN_100308524(uVar52,cVar3);
            FUN_10092b43c(uVar52,cVar3,pcVar8);
            _swift_release(pcVar8);
            FUN_100308538(uVar52,cVar3);
          }
          FUN_1006486f8(0,0,0);
          FUN_100004550(0,0);
          _swift_release_n(lVar14,2);
          _swift_release_n(pcVar8,2);
          _swift_release(puVar13);
          _swift_bridgeObjectRelease(0);
        }
        _swift_release(pcVar8);
        FUN_10092be3c(lVar1,uVar2,uVar66);
      }
      else {
        pcVar10 = param_8;
        FUN_100915740(param_8,param_9);
        _swift_release(lVar14);
        puVar13 = &DAT_100f173f8;
        _swift_allocObject(&DAT_100f173f8,0xa0,7);
        *(char **)(puVar13 + 0x10) = param_8;
        *(char **)(puVar13 + 0x18) = param_9;
        *(ulong *)(puVar13 + 0x20) = uVar68;
        *(ulong *)(puVar13 + 0x28) = param_3;
        *(char **)(puVar13 + 0x30) = param_12;
        *(undefined8 *)(puVar13 + 0x38) = param_1;
        *(undefined8 *)(puVar13 + 0x40) = 0;
        puVar13[0x48] = 1;
        *(void **)(puVar13 + 0x50) = param_4;
        *(undefined8 *)(puVar13 + 0x58) = param_5;
        *(undefined8 *)(puVar13 + 0x60) = param_6;
        *(undefined8 *)(puVar13 + 0x68) = param_7;
        *(code **)(puVar13 + 0x70) = param_10;
        *(undefined8 *)(puVar13 + 0x78) = param_11;
        *(char **)(puVar13 + 0x80) = pcVar8;
        *(long *)(puVar13 + 0x88) = lVar71;
        *(undefined8 *)(puVar13 + 0x90) = 0;
        *(ulong *)(puVar13 + 0x98) = uVar67;
        puVar16 = &DAT_100f17420;
        _swift_allocObject(&DAT_100f17420,0x28,7);
        *(code **)(puVar16 + 0x10) = thunk_FUN_10092d008;
        *(undefined **)(puVar16 + 0x18) = puVar13;
        *(char **)(puVar16 + 0x20) = pcVar10;
        uVar70 = *(ulong *)(pcVar10 + 0x20);
        lVar71 = *(long *)(pcVar10 + 0x28);
        _swift_getObjectType();
        pcVar64 = *(code **)(lVar71 + 0x10);
        _swift_retain_n(param_12,2);
        _swift_retain_n(param_1,2);
        _swift_retain_n(param_11,2);
        _swift_retain_n(pcVar8,2);
        _swift_unknownObjectRetain_n(param_8,2);
        _swift_retain_n(puVar13,2);
        _swift_retain_n(pcVar10,2);
        uVar65 = uVar70;
        (*pcVar64)(uVar70,lVar71);
        if ((uVar65 & 1) == 0) {
          puVar15 = &DAT_100f17448;
          _swift_allocObject(&DAT_100f17448,0x28,7);
          *(char **)(puVar15 + 0x10) = pcVar10;
          *(code **)(puVar15 + 0x18) = thunk_FUN_10065310c;
          *(undefined **)(puVar15 + 0x20) = puVar16;
          pcVar64 = *(code **)(lVar71 + 0x18);
          _swift_retain(pcVar10);
          _swift_retain(puVar16);
          (*pcVar64)(thunk_FUN_1008db360,puVar15,uVar70,lVar71);
          _swift_unknownObjectRelease(param_8);
          _swift_release(puVar15);
          _swift_release(pcVar10);
          _swift_release_n(puVar13,2);
          _swift_release(puVar16);
        }
        else {
          _Var51.unknown = (undefined *)local_98;
          uVar52 = 0;
          pvVar57 = (void *)0x0;
          _swift_beginAccess(pcVar10 + 0x10,_Var51.unknown,0);
          uVar69 = *(undefined8 *)(pcVar10 + 0x10);
          cVar3 = pcVar10[0x18];
          if (cVar3 == '\x01') {
            uVar63 = *(ulong *)(pcVar8 + 0x20);
            lVar71 = *(long *)(pcVar8 + 0x28);
            _swift_getObjectType();
            pcVar64 = *(code **)(lVar71 + 0x10);
            FUN_100308524(uVar69,1);
            (*pcVar64)(uVar63,lVar71);
            if ((uVar63 & 1) == 0) {
              uVar52 = *(undefined8 *)(pcVar8 + 0x20);
              lVar71 = *(long *)(pcVar8 + 0x28);
              _swift_getObjectType(uVar52);
              puVar15 = &DAT_100f17470;
              _swift_allocObject(&DAT_100f17470,0x20,7);
              *(char **)(puVar15 + 0x10) = pcVar8;
              *(undefined8 *)(puVar15 + 0x18) = uVar69;
              pcVar64 = *(code **)(lVar71 + 0x18);
              _swift_retain(pcVar8);
              FUN_1005dfeb4(uVar69,1);
              (*pcVar64)(thunk_FUN_1005dfd68,puVar15,uVar52,lVar71);
              _swift_release(puVar15);
            }
            else {
              uVar72 = uVar69;
              FUN_1005de8f4(uVar69);
              FUN_1006486f8();
              FUN_100004550(uVar72,lVar71);
              _swift_bridgeObjectRelease(uVar52);
            }
            FUN_100308538(uVar69,1);
          }
          else if (cVar3 == -1) {
            _swift_beginAccess(pcVar10 + 0x30,&local_b0,0x21,0);
            FUN_10064967c(thunk_FUN_10065310c,puVar16);
            _swift_endAccess(&local_b0);
          }
          else {
            uVar70 = param_3;
            if ((uVar63 < 2) && ((uVar63 != 1 || (uVar70 = uVar68, (long)uVar68 < 1)))) {
              FUN_10090d0b8(0,0);
              FUN_100308538(uVar69,cVar3);
            }
            else {
              if (uVar70 >> 0x20 == 0) {
                puVar15 = &DAT_100f17bf0;
                _swift_allocObject(&DAT_100f17bf0,0x58,7);
                *(char **)(puVar15 + 0x10) = param_12;
                *(undefined8 *)(puVar15 + 0x18) = param_1;
                *(undefined8 *)(puVar15 + 0x20) = 0;
                puVar15[0x28] = 1;
                *(ulong *)(puVar15 + 0x30) = uVar70;
                *(void **)(puVar15 + 0x38) = param_4;
                *(undefined8 *)(puVar15 + 0x40) = param_5;
                *(undefined8 *)(puVar15 + 0x48) = param_6;
                *(undefined8 *)(puVar15 + 0x50) = param_7;
                pcVar18 = pcVar7;
                FUN_1008f68cc(pcVar7,&DAT_100eeaaa8,param_9);
                _swift_retain(param_12);
                _swift_retain(param_1);
                _swift_retain(pcVar18);
                FUN_100914f44(0,1,param_12,pcVar18,FUN_10092d308,puVar15);
                _swift_release(puVar15);
                _swift_release(pcVar18);
              }
              else {
                local_b0 = 0;
                uStack_a8 = 0xe000000000000000;
                pcVar17 = pcVar8;
                Swift::_StringGuts::grow(0x44,_Var51);
                SVar74.bridgeObject = (void *)0xeb00000000282074;
                SVar74.str = (char *)0x6e756f4365747962;
                SVar88.bridgeObject = pvVar57;
                SVar88.str = pcVar17;
                Swift::String::append(SVar74,SVar88);
                local_c8[0] = uVar70;
                SVar83 = Swift::CustomStringConvertible::get_description();
                SVar89.bridgeObject = pvVar57;
                SVar89.str = pcVar17;
                Swift::String::append(SVar83,SVar89);
                _swift_bridgeObjectRelease(SVar83.bridgeObject);
                puVar45 = (undefined8 *)0xd000000000000037;
                SVar75.bridgeObject = (void *)0x8000000100db4b30;
                SVar75.str = (char *)0xd000000000000037;
                SVar90.bridgeObject = pvVar57;
                SVar90.str = pcVar17;
                Swift::String::append(SVar75,SVar90);
                uVar72 = uStack_a8;
                uVar52 = local_b0;
                FUN_1008d5300();
                pcVar17 = "";
                _swift_allocError(&DAT_100ef11e8,puVar45,0,0);
                *puVar45 = uVar52;
                puVar45[1] = uVar72;
                *(undefined4 *)(puVar45 + 2) = 0x16;
                pcVar18 = pcVar17;
                FUN_10063dd74();
                _swift_errorRelease(pcVar17);
              }
              puVar15 = &DAT_100f17498;
              _swift_allocObject(&DAT_100f17498,0x98,7);
              *(code **)(puVar15 + 0x10) = param_10;
              *(undefined8 *)(puVar15 + 0x18) = param_11;
              *(char **)(puVar15 + 0x20) = pcVar8;
              *(char **)(puVar15 + 0x28) = param_8;
              *(char **)(puVar15 + 0x30) = param_9;
              *(ulong *)(puVar15 + 0x38) = uVar68;
              *(ulong *)(puVar15 + 0x40) = param_3;
              *(char **)(puVar15 + 0x48) = param_12;
              *(undefined8 *)(puVar15 + 0x50) = param_1;
              *(undefined8 *)(puVar15 + 0x58) = 0;
              puVar15[0x60] = 1;
              *(void **)(puVar15 + 0x68) = param_4;
              *(undefined8 *)(puVar15 + 0x70) = param_5;
              *(undefined8 *)(puVar15 + 0x78) = param_6;
              *(undefined8 *)(puVar15 + 0x80) = param_7;
              *(ulong *)(puVar15 + 0x88) = uVar63;
              *(ulong *)(puVar15 + 0x90) = uVar67;
              puVar19 = &DAT_100f174c0;
              _swift_allocObject(&DAT_100f174c0,0x28,7);
              *(code **)(puVar19 + 0x10) = thunk_FUN_10092d0a0;
              *(undefined **)(puVar19 + 0x18) = puVar15;
              *(char **)(puVar19 + 0x20) = pcVar18;
              uVar65 = *(ulong *)(pcVar18 + 0x28);
              lVar71 = *(long *)(pcVar18 + 0x30);
              _swift_getObjectType();
              pcVar64 = *(code **)(lVar71 + 0x10);
              _swift_retain_n(param_12,2);
              _swift_retain_n(param_1,2);
              _swift_retain_n(param_11,2);
              _swift_retain_n(pcVar8,2);
              _swift_unknownObjectRetain_n(param_8,2);
              _swift_retain_n(puVar15,2);
              _swift_retain_n(pcVar18,2);
              uVar70 = uVar65;
              (*pcVar64)(uVar65,lVar71);
              if ((uVar70 & 1) == 0) {
                puVar20 = &DAT_100f174e8;
                _swift_allocObject(&DAT_100f174e8,0x28,7);
                *(char **)(puVar20 + 0x10) = pcVar18;
                *(code **)(puVar20 + 0x18) = thunk_FUN_10092be10;
                *(undefined **)(puVar20 + 0x20) = puVar19;
                pcVar64 = *(code **)(lVar71 + 0x18);
                _swift_retain(pcVar18);
                _swift_retain(puVar19);
                (*pcVar64)(thunk_FUN_10092be1c,puVar20,uVar65,lVar71);
                _swift_release(param_11);
                _swift_release(puVar20);
                _swift_release(pcVar18);
                _swift_release_n(puVar15,2);
                _swift_release(puVar19);
              }
              else {
                _swift_beginAccess(pcVar18 + 0x10,&local_b0,0,0);
                uVar70 = *(ulong *)(pcVar18 + 0x20);
                if (uVar70 >> 0x38 < 0xff) {
                  lVar71 = *(long *)(pcVar18 + 0x10);
                  uVar52 = *(undefined8 *)(pcVar18 + 0x18);
                  if (uVar70 >> 0x38 == 1) {
                    uVar63 = *(ulong *)(pcVar8 + 0x20);
                    lVar14 = *(long *)(pcVar8 + 0x28);
                    _swift_getObjectType();
                    pcVar64 = *(code **)(lVar14 + 0x10);
                    uVar68 = uVar70;
                    FUN_1008fa5cc(lVar71,uVar52,uVar70,1);
                    (*pcVar64)(uVar63,lVar14);
                    if ((uVar63 & 1) == 0) {
                      uVar72 = *(undefined8 *)(pcVar8 + 0x20);
                      lVar14 = *(long *)(pcVar8 + 0x28);
                      _swift_getObjectType();
                      puVar20 = &DAT_100f17510;
                      _swift_allocObject(&DAT_100f17510,0x20,7);
                      *(char **)(puVar20 + 0x10) = pcVar8;
                      *(long *)(puVar20 + 0x18) = lVar71;
                      pcVar64 = *(code **)(lVar14 + 0x18);
                      _swift_retain(pcVar8);
                      FUN_10092be28(lVar71,uVar52,uVar70);
                      (*pcVar64)(thunk_FUN_1005dfd68,puVar20,uVar72,lVar14);
                      _swift_release(puVar20);
                    }
                    else {
                      lVar21 = lVar71;
                      FUN_1005de8f4(lVar71);
                      FUN_1006486f8();
                      FUN_100004550(lVar21,lVar14);
                      _swift_bridgeObjectRelease(uVar68);
                    }
                    FUN_10092be3c(lVar71,uVar52,uVar70);
                  }
                  else {
                    uVar5 = (int)((ulong)uVar52 >> 0x20) - (int)uVar52;
                    FUN_1008fa5cc(lVar71,uVar52,uVar70);
                    lVar14 = lVar71;
                    (*param_10)(lVar71,uVar52,uVar70 & 0xffffffffffffff);
                    if (uVar5 == 0) {
                      puVar20 = &DAT_100f17538;
                      _swift_allocObject(&DAT_100f17538,0x28,7);
                      *(code **)(puVar20 + 0x10) = thunk_FUN_10092be50;
                      *(char **)(puVar20 + 0x18) = pcVar8;
                      *(long *)(puVar20 + 0x20) = lVar14;
                      uVar63 = *(ulong *)(lVar14 + 0x20);
                      lVar21 = *(long *)(lVar14 + 0x28);
                      _swift_getObjectType();
                      pcVar64 = *(code **)(lVar21 + 0x10);
                      _swift_retain_n(pcVar8,5);
                      _swift_retain_n(lVar14,2);
                      uVar68 = uVar63;
                      (*pcVar64)(uVar63,lVar21);
                      if ((uVar68 & 1) == 0) {
                        _swift_release(pcVar8);
                        puVar23 = &DAT_100f17560;
                        _swift_allocObject(&DAT_100f17560,0x28,7);
                        *(long *)(puVar23 + 0x10) = lVar14;
                        *(code **)(puVar23 + 0x18) = thunk_FUN_10065310c;
                        *(undefined **)(puVar23 + 0x20) = puVar20;
                        pcVar64 = *(code **)(lVar21 + 0x18);
                        _swift_retain(lVar14);
                        _swift_retain(puVar20);
                        (*pcVar64)(thunk_FUN_1008db360,puVar23,uVar63,lVar21);
                        _swift_release(puVar23);
                        _swift_release_n(lVar14,2);
                        _swift_release_n(pcVar8,2);
                        _swift_release(puVar20);
                      }
                      else {
                        _swift_beginAccess(lVar14 + 0x10,local_c8,0,0);
                        cVar4 = *(char *)(lVar14 + 0x18);
                        if (cVar4 == -1) {
                          _swift_release(pcVar8);
                          _swift_beginAccess(lVar14 + 0x30,&local_e0,0x21,0);
                          FUN_10064967c(thunk_FUN_10065310c,puVar20);
                          _swift_endAccess(&local_e0);
                        }
                        else {
                          uVar72 = *(undefined8 *)(lVar14 + 0x10);
                          FUN_100308524(uVar72,cVar4);
                          FUN_10092b43c(uVar72,cVar4,pcVar8);
                          _swift_release(pcVar8);
                          FUN_100308538(uVar72,cVar4);
                        }
                        FUN_1006486f8(0,0,0);
                        FUN_100004550(0,0);
                        _swift_release_n(lVar14,2);
                        _swift_release_n(pcVar8,2);
                        _swift_release(puVar20);
                        _swift_bridgeObjectRelease(0);
                      }
                      _swift_release(pcVar8);
                      FUN_10092be3c(lVar71,uVar52,uVar70);
                    }
                    else {
                      pcVar17 = param_8;
                      FUN_100915740(param_8,param_9);
                      _swift_release(lVar14);
                      puVar20 = &DAT_100f17588;
                      _swift_allocObject(&DAT_100f17588,0xa0,7);
                      *(char **)(puVar20 + 0x10) = param_8;
                      *(char **)(puVar20 + 0x18) = param_9;
                      *(ulong *)(puVar20 + 0x20) = uVar68;
                      *(ulong *)(puVar20 + 0x28) = param_3;
                      *(char **)(puVar20 + 0x30) = param_12;
                      *(undefined8 *)(puVar20 + 0x38) = param_1;
                      *(undefined8 *)(puVar20 + 0x40) = 0;
                      puVar20[0x48] = 1;
                      *(void **)(puVar20 + 0x50) = param_4;
                      *(undefined8 *)(puVar20 + 0x58) = param_5;
                      *(undefined8 *)(puVar20 + 0x60) = param_6;
                      *(undefined8 *)(puVar20 + 0x68) = param_7;
                      *(code **)(puVar20 + 0x70) = param_10;
                      *(undefined8 *)(puVar20 + 0x78) = param_11;
                      *(char **)(puVar20 + 0x80) = pcVar8;
                      *(ulong *)(puVar20 + 0x88) = uVar63;
                      *(ulong *)(puVar20 + 0x90) = uVar67;
                      *(ulong *)(puVar20 + 0x98) = (ulong)uVar5;
                      puVar23 = &DAT_100f175b0;
                      _swift_allocObject(&DAT_100f175b0,0x28,7);
                      *(code **)(puVar23 + 0x10) = thunk_FUN_10092d008;
                      *(undefined **)(puVar23 + 0x18) = puVar20;
                      *(char **)(puVar23 + 0x20) = pcVar17;
                      uVar65 = *(ulong *)(pcVar17 + 0x20);
                      lVar14 = *(long *)(pcVar17 + 0x28);
                      _swift_getObjectType();
                      pcVar64 = *(code **)(lVar14 + 0x10);
                      _swift_retain_n(param_12,2);
                      _swift_retain_n(param_1,2);
                      _swift_retain_n(param_11,2);
                      _swift_retain_n(pcVar8,2);
                      _swift_unknownObjectRetain_n(param_8,2);
                      _swift_retain_n(puVar20,2);
                      _swift_retain_n(pcVar17,2);
                      uVar58 = uVar65;
                      (*pcVar64)(uVar65,lVar14);
                      if ((uVar58 & 1) == 0) {
                        puVar22 = &DAT_100f175d8;
                        _swift_allocObject(&DAT_100f175d8,0x28,7);
                        *(char **)(puVar22 + 0x10) = pcVar17;
                        *(code **)(puVar22 + 0x18) = thunk_FUN_10065310c;
                        *(undefined **)(puVar22 + 0x20) = puVar23;
                        pcVar64 = *(code **)(lVar14 + 0x18);
                        _swift_retain(pcVar17);
                        _swift_retain(puVar23);
                        (*pcVar64)(thunk_FUN_1008db360,puVar22,uVar65,lVar14);
                        _swift_unknownObjectRelease(param_8);
                        _swift_release(puVar22);
                        _swift_release(pcVar17);
                        _swift_release_n(puVar20,2);
                        _swift_release(puVar23);
                      }
                      else {
                        _Var51.unknown = (undefined *)local_c8;
                        pcVar53 = (char *)0x0;
                        pvVar57 = (void *)0x0;
                        _swift_beginAccess(pcVar17 + 0x10);
                        uVar72 = *(undefined8 *)(pcVar17 + 0x10);
                        cVar4 = pcVar17[0x18];
                        if (cVar4 == '\x01') {
                          uVar63 = *(ulong *)(pcVar8 + 0x20);
                          lVar14 = *(long *)(pcVar8 + 0x28);
                          _swift_getObjectType();
                          pcVar64 = *(code **)(lVar14 + 0x10);
                          FUN_100308524(uVar72,1);
                          (*pcVar64)(uVar63,lVar14);
                          if ((uVar63 & 1) == 0) {
                            uVar24 = *(undefined8 *)(pcVar8 + 0x20);
                            lVar14 = *(long *)(pcVar8 + 0x28);
                            _swift_getObjectType(uVar24);
                            puVar22 = &DAT_100f17600;
                            _swift_allocObject(&DAT_100f17600,0x20,7);
                            *(char **)(puVar22 + 0x10) = pcVar8;
                            *(undefined8 *)(puVar22 + 0x18) = uVar72;
                            pcVar64 = *(code **)(lVar14 + 0x18);
                            _swift_retain(pcVar8);
                            FUN_1005dfeb4(uVar72,1);
                            (*pcVar64)(thunk_FUN_1005dfd68,puVar22,uVar24,lVar14);
                            _swift_release(puVar22);
                          }
                          else {
                            uVar24 = uVar72;
                            FUN_1005de8f4(uVar72);
                            FUN_1006486f8();
                            FUN_100004550(uVar24,lVar14);
                            _swift_bridgeObjectRelease(pcVar53);
                          }
                          FUN_100308538(uVar72,1);
                        }
                        else if (cVar4 == -1) {
                          _swift_beginAccess(pcVar17 + 0x30,&local_e0,0x21,0);
                          FUN_10064967c(thunk_FUN_10065310c,puVar23);
                          _swift_endAccess(&local_e0);
                        }
                        else {
                          uVar58 = uVar63 - 1;
                          uVar65 = param_3;
                          if ((uVar58 < 2) && ((uVar58 != 1 || (uVar65 = uVar68, (long)uVar68 < 1)))
                             ) {
                            FUN_10090d0b8(0,0,pcVar8);
                            FUN_100308538(uVar72,cVar4);
                          }
                          else {
                            lVar14 = uVar5 + uVar67;
                            if (uVar65 >> 0x20 == 0) {
                              puVar22 = &DAT_100f17bc8;
                              _swift_allocObject(&DAT_100f17bc8,0x58,7);
                              *(char **)(puVar22 + 0x10) = param_12;
                              *(undefined8 *)(puVar22 + 0x18) = param_1;
                              *(undefined8 *)(puVar22 + 0x20) = 0;
                              puVar22[0x28] = 1;
                              *(ulong *)(puVar22 + 0x30) = uVar65;
                              *(void **)(puVar22 + 0x38) = param_4;
                              *(undefined8 *)(puVar22 + 0x40) = param_5;
                              *(undefined8 *)(puVar22 + 0x48) = param_6;
                              *(undefined8 *)(puVar22 + 0x50) = param_7;
                              pcVar25 = pcVar7;
                              FUN_1008f68cc(pcVar7,&DAT_100eeaaa8,param_9);
                              _swift_retain(param_12);
                              _swift_retain(param_1);
                              _swift_retain(pcVar25);
                              FUN_100914f44(0,1,param_12,pcVar25,FUN_10092d308,puVar22);
                              _swift_release(puVar22);
                              _swift_release(pcVar25);
                            }
                            else {
                              local_e0 = 0;
                              uStack_d8 = 0xe000000000000000;
                              Swift::_StringGuts::grow(0x44,_Var51);
                              SVar76.bridgeObject = (void *)0xeb00000000282074;
                              SVar76.str = (char *)0x6e756f4365747962;
                              SVar91.bridgeObject = pvVar57;
                              SVar91.str = pcVar53;
                              Swift::String::append(SVar76,SVar91);
                              local_f8[0] = uVar65;
                              SVar83 = Swift::CustomStringConvertible::get_description();
                              SVar92.bridgeObject = pvVar57;
                              SVar92.str = pcVar53;
                              Swift::String::append(SVar83,SVar92);
                              _swift_bridgeObjectRelease(SVar83.bridgeObject);
                              puVar45 = (undefined8 *)0xd000000000000037;
                              SVar77.bridgeObject = (void *)0x8000000100db4b30;
                              SVar77.str = (char *)0xd000000000000037;
                              SVar93.bridgeObject = pvVar57;
                              SVar93.str = pcVar53;
                              Swift::String::append(SVar77,SVar93);
                              uVar59 = uStack_d8;
                              uVar24 = local_e0;
                              FUN_1008d5300();
                              pcVar53 = "";
                              _swift_allocError(&DAT_100ef11e8,puVar45,0,0);
                              *puVar45 = uVar24;
                              puVar45[1] = uVar59;
                              *(undefined4 *)(puVar45 + 2) = 0x16;
                              pcVar25 = pcVar53;
                              FUN_10063dd74();
                              _swift_errorRelease(pcVar53);
                            }
                            puVar22 = &DAT_100f17628;
                            _swift_allocObject(&DAT_100f17628,0x98,7);
                            *(code **)(puVar22 + 0x10) = param_10;
                            *(undefined8 *)(puVar22 + 0x18) = param_11;
                            *(char **)(puVar22 + 0x20) = pcVar8;
                            *(char **)(puVar22 + 0x28) = param_8;
                            *(char **)(puVar22 + 0x30) = param_9;
                            *(ulong *)(puVar22 + 0x38) = uVar68;
                            *(ulong *)(puVar22 + 0x40) = param_3;
                            *(char **)(puVar22 + 0x48) = param_12;
                            *(undefined8 *)(puVar22 + 0x50) = param_1;
                            *(undefined8 *)(puVar22 + 0x58) = 0;
                            puVar22[0x60] = 1;
                            *(void **)(puVar22 + 0x68) = param_4;
                            *(undefined8 *)(puVar22 + 0x70) = param_5;
                            *(undefined8 *)(puVar22 + 0x78) = param_6;
                            *(undefined8 *)(puVar22 + 0x80) = param_7;
                            *(ulong *)(puVar22 + 0x88) = uVar58;
                            *(long *)(puVar22 + 0x90) = lVar14;
                            puVar26 = &DAT_100f17650;
                            _swift_allocObject(&DAT_100f17650,0x28,7);
                            *(code **)(puVar26 + 0x10) = thunk_FUN_10092d0a0;
                            *(undefined **)(puVar26 + 0x18) = puVar22;
                            *(char **)(puVar26 + 0x20) = pcVar25;
                            uVar67 = *(ulong *)(pcVar25 + 0x28);
                            lVar21 = *(long *)(pcVar25 + 0x30);
                            _swift_getObjectType();
                            pcVar64 = *(code **)(lVar21 + 0x10);
                            _swift_retain_n(param_12,2);
                            _swift_retain_n(param_1,2);
                            _swift_retain_n(param_11,2);
                            _swift_retain_n(pcVar8,2);
                            _swift_unknownObjectRetain_n(param_8,2);
                            _swift_retain_n(puVar22,2);
                            _swift_retain_n(pcVar25,2);
                            uVar65 = uVar67;
                            (*pcVar64)(uVar67,lVar21);
                            if ((uVar65 & 1) == 0) {
                              puVar27 = &DAT_100f17678;
                              _swift_allocObject(&DAT_100f17678,0x28,7);
                              *(char **)(puVar27 + 0x10) = pcVar25;
                              *(code **)(puVar27 + 0x18) = thunk_FUN_10092be10;
                              *(undefined **)(puVar27 + 0x20) = puVar26;
                              pcVar64 = *(code **)(lVar21 + 0x18);
                              _swift_retain(pcVar25);
                              _swift_retain(puVar26);
                              (*pcVar64)(thunk_FUN_10092be1c,puVar27,uVar67,lVar21);
                              _swift_release(param_11);
                              _swift_release(puVar27);
                              _swift_release(pcVar25);
                              _swift_release_n(puVar22,2);
                              _swift_release(puVar26);
                            }
                            else {
                              _swift_beginAccess(pcVar25 + 0x10,&local_e0,0,0);
                              uVar67 = *(ulong *)(pcVar25 + 0x20);
                              if (uVar67 >> 0x38 < 0xff) {
                                lVar21 = *(long *)(pcVar25 + 0x10);
                                uVar24 = *(undefined8 *)(pcVar25 + 0x18);
                                if (uVar67 >> 0x38 == 1) {
                                  uVar63 = *(ulong *)(pcVar8 + 0x20);
                                  lVar14 = *(long *)(pcVar8 + 0x28);
                                  _swift_getObjectType();
                                  pcVar64 = *(code **)(lVar14 + 0x10);
                                  uVar68 = uVar67;
                                  FUN_1008fa5cc(lVar21,uVar24,uVar67,1);
                                  (*pcVar64)(uVar63,lVar14);
                                  if ((uVar63 & 1) == 0) {
                                    uVar59 = *(undefined8 *)(pcVar8 + 0x20);
                                    lVar14 = *(long *)(pcVar8 + 0x28);
                                    _swift_getObjectType(uVar59);
                                    puVar27 = &DAT_100f176a0;
                                    _swift_allocObject(&DAT_100f176a0,0x20,7);
                                    *(char **)(puVar27 + 0x10) = pcVar8;
                                    *(long *)(puVar27 + 0x18) = lVar21;
                                    pcVar64 = *(code **)(lVar14 + 0x18);
                                    _swift_retain(pcVar8);
                                    FUN_10092be28(lVar21,uVar24,uVar67);
                                    (*pcVar64)(thunk_FUN_1005dfd68,puVar27,uVar59,lVar14);
                                    _swift_release(puVar27);
                                  }
                                  else {
                                    lVar28 = lVar21;
                                    FUN_1005de8f4(lVar21);
                                    FUN_1006486f8();
                                    FUN_100004550(lVar28,lVar14);
                                    _swift_bridgeObjectRelease(uVar68);
                                  }
                                }
                                else {
                                  uVar5 = (int)((ulong)uVar24 >> 0x20) - (int)uVar24;
                                  FUN_1008fa5cc(lVar21,uVar24,uVar67);
                                  lVar28 = lVar21;
                                  (*param_10)(lVar21,uVar24,uVar67 & 0xffffffffffffff);
                                  if (uVar5 == 0) {
                                    puVar27 = &DAT_100f176c8;
                                    _swift_allocObject(&DAT_100f176c8,0x28,7);
                                    *(code **)(puVar27 + 0x10) = thunk_FUN_10092be50;
                                    *(char **)(puVar27 + 0x18) = pcVar8;
                                    *(long *)(puVar27 + 0x20) = lVar28;
                                    uVar63 = *(ulong *)(lVar28 + 0x20);
                                    lVar14 = *(long *)(lVar28 + 0x28);
                                    _swift_getObjectType();
                                    pcVar64 = *(code **)(lVar14 + 0x10);
                                    _swift_retain_n(pcVar8,5);
                                    _swift_retain_n(lVar28,2);
                                    uVar68 = uVar63;
                                    (*pcVar64)(uVar63,lVar14);
                                    pcVar7 = pcVar8;
                                    if ((uVar68 & 1) == 0) {
                                      _swift_release(pcVar8);
                                      puVar30 = &DAT_100f176f0;
                                      _swift_allocObject(&DAT_100f176f0,0x28,7);
                                      *(long *)(puVar30 + 0x10) = lVar28;
                                      *(code **)(puVar30 + 0x18) = thunk_FUN_10065310c;
                                      *(undefined **)(puVar30 + 0x20) = puVar27;
                                      pcVar64 = *(code **)(lVar14 + 0x18);
                                      _swift_retain(lVar28);
                                      _swift_retain(puVar27);
                                      (*pcVar64)(thunk_FUN_1008db360,puVar30,uVar63,lVar14);
                                      _swift_release(puVar30);
                                      _swift_release_n(lVar28,2);
                                      _swift_release_n(pcVar8,2);
                                      _swift_release(puVar27);
                                    }
                                    else {
                                      _swift_beginAccess(lVar28 + 0x10,local_f8,0,0);
                                      cVar50 = *(char *)(lVar28 + 0x18);
                                      if (cVar50 == -1) {
                                        _swift_release(pcVar8);
                                        _swift_beginAccess(lVar28 + 0x30,&local_110,0x21,0);
                                        FUN_10064967c(thunk_FUN_10065310c,puVar27);
                                        _swift_endAccess(&local_110);
                                      }
                                      else {
                                        uVar59 = *(undefined8 *)(lVar28 + 0x10);
                                        FUN_100308524(uVar59,cVar50);
                                        FUN_10092b43c(uVar59,cVar50,pcVar8);
                                        _swift_release(pcVar8);
                                        FUN_100308538(uVar59,cVar50);
                                      }
                                      FUN_1006486f8(0,0,0);
                                      FUN_100004550(0,0);
                                      _swift_release_n(lVar28,2);
                                      _swift_release_n(pcVar8,2);
                                      _swift_release(puVar27);
                                      _swift_bridgeObjectRelease(0);
                                    }
                                  }
                                  else {
                                    pcVar53 = param_8;
                                    FUN_100915740(param_8,param_9);
                                    _swift_release(lVar28);
                                    puVar27 = &DAT_100f17718;
                                    _swift_allocObject(&DAT_100f17718,0xa0,7);
                                    *(char **)(puVar27 + 0x10) = param_8;
                                    *(char **)(puVar27 + 0x18) = param_9;
                                    *(ulong *)(puVar27 + 0x20) = uVar68;
                                    *(ulong *)(puVar27 + 0x28) = param_3;
                                    *(char **)(puVar27 + 0x30) = param_12;
                                    *(undefined8 *)(puVar27 + 0x38) = param_1;
                                    *(undefined8 *)(puVar27 + 0x40) = 0;
                                    puVar27[0x48] = 1;
                                    *(void **)(puVar27 + 0x50) = param_4;
                                    *(undefined8 *)(puVar27 + 0x58) = param_5;
                                    *(undefined8 *)(puVar27 + 0x60) = param_6;
                                    *(undefined8 *)(puVar27 + 0x68) = param_7;
                                    *(code **)(puVar27 + 0x70) = param_10;
                                    *(undefined8 *)(puVar27 + 0x78) = param_11;
                                    *(char **)(puVar27 + 0x80) = pcVar8;
                                    *(ulong *)(puVar27 + 0x88) = uVar58;
                                    *(long *)(puVar27 + 0x90) = lVar14;
                                    *(ulong *)(puVar27 + 0x98) = (ulong)uVar5;
                                    puVar30 = &DAT_100f17740;
                                    _swift_allocObject(&DAT_100f17740,0x28,7);
                                    *(code **)(puVar30 + 0x10) = thunk_FUN_10092d008;
                                    *(undefined **)(puVar30 + 0x18) = puVar27;
                                    *(char **)(puVar30 + 0x20) = pcVar53;
                                    uVar65 = *(ulong *)(pcVar53 + 0x20);
                                    lVar28 = *(long *)(pcVar53 + 0x28);
                                    _swift_getObjectType();
                                    pcVar64 = *(code **)(lVar28 + 0x10);
                                    _swift_retain_n(param_12,2);
                                    _swift_retain_n(param_1,2);
                                    _swift_retain_n(param_11,2);
                                    _swift_retain_n(pcVar8,2);
                                    _swift_unknownObjectRetain_n(param_8,2);
                                    _swift_retain_n(puVar27,2);
                                    _swift_retain_n(pcVar53,2);
                                    uVar58 = uVar65;
                                    (*pcVar64)(uVar65,lVar28);
                                    if ((uVar58 & 1) == 0) {
                                      puVar29 = &DAT_100f17768;
                                      _swift_allocObject(&DAT_100f17768,0x28,7);
                                      *(char **)(puVar29 + 0x10) = pcVar53;
                                      *(code **)(puVar29 + 0x18) = thunk_FUN_10065310c;
                                      *(undefined **)(puVar29 + 0x20) = puVar30;
                                      pcVar64 = *(code **)(lVar28 + 0x18);
                                      _swift_retain(pcVar53);
                                      _swift_retain(puVar30);
                                      (*pcVar64)(thunk_FUN_1008db360,puVar29,uVar65,lVar28);
                                      _swift_unknownObjectRelease(param_8);
                                      _swift_release(puVar29);
                                      _swift_release(pcVar53);
                                      _swift_release_n(puVar27,2);
                                      _swift_release(puVar30);
                                    }
                                    else {
                                      _Var51.unknown = (undefined *)local_f8;
                                      pcVar54 = (char *)0x0;
                                      pvVar57 = (void *)0x0;
                                      _swift_beginAccess(pcVar53 + 0x10);
                                      uVar59 = *(undefined8 *)(pcVar53 + 0x10);
                                      cVar50 = pcVar53[0x18];
                                      if (cVar50 == '\x01') {
                                        uVar63 = *(ulong *)(pcVar8 + 0x20);
                                        lVar14 = *(long *)(pcVar8 + 0x28);
                                        _swift_getObjectType();
                                        pcVar64 = *(code **)(lVar14 + 0x10);
                                        FUN_100308524(uVar59,1);
                                        (*pcVar64)(uVar63,lVar14);
                                        if ((uVar63 & 1) == 0) {
                                          uVar31 = *(undefined8 *)(pcVar8 + 0x20);
                                          lVar14 = *(long *)(pcVar8 + 0x28);
                                          _swift_getObjectType(uVar31);
                                          puVar29 = &DAT_100f17790;
                                          _swift_allocObject(&DAT_100f17790,0x20,7);
                                          *(char **)(puVar29 + 0x10) = pcVar8;
                                          *(undefined8 *)(puVar29 + 0x18) = uVar59;
                                          pcVar64 = *(code **)(lVar14 + 0x18);
                                          _swift_retain(pcVar8);
                                          FUN_1005dfeb4(uVar59,1);
                                          (*pcVar64)(thunk_FUN_1005dfd68,puVar29,uVar31,lVar14);
                                          _swift_release(puVar29);
                                        }
                                        else {
                                          uVar31 = uVar59;
                                          FUN_1005de8f4(uVar59);
                                          FUN_1006486f8();
                                          FUN_100004550(uVar31,lVar14);
                                          _swift_bridgeObjectRelease(pcVar54);
                                        }
                                        cVar50 = '\x01';
LAB_1009252e8:
                                        FUN_100308538(uVar59,cVar50);
                                      }
                                      else {
                                        if (cVar50 != -1) {
                                          uVar58 = uVar63 - 2;
                                          uVar65 = param_3;
                                          if ((uVar58 < 2) &&
                                             ((uVar58 != 1 || (uVar65 = uVar68, (long)uVar68 < 1))))
                                          {
                                            FUN_10090d0b8(0,0,pcVar8);
                                            goto LAB_1009252e8;
                                          }
                                          lVar14 = (ulong)uVar5 + lVar14;
                                          if (uVar65 >> 0x20 == 0) {
                                            puVar29 = &DAT_100f17ba0;
                                            _swift_allocObject(&DAT_100f17ba0,0x58,7);
                                            *(char **)(puVar29 + 0x10) = param_12;
                                            *(undefined8 *)(puVar29 + 0x18) = param_1;
                                            *(undefined8 *)(puVar29 + 0x20) = 0;
                                            puVar29[0x28] = 1;
                                            *(ulong *)(puVar29 + 0x30) = uVar65;
                                            *(void **)(puVar29 + 0x38) = param_4;
                                            *(undefined8 *)(puVar29 + 0x40) = param_5;
                                            *(undefined8 *)(puVar29 + 0x48) = param_6;
                                            *(undefined8 *)(puVar29 + 0x50) = param_7;
                                            local_2b8 = pcVar7;
                                            FUN_1008f68cc(pcVar7,&DAT_100eeaaa8,param_9);
                                            _swift_retain(param_12);
                                            _swift_retain(param_1);
                                            _swift_retain(local_2b8);
                                            FUN_100914f44(0,1,param_12,local_2b8,FUN_10092d308,
                                                          puVar29);
                                            _swift_release(puVar29);
                                            _swift_release(local_2b8);
                                          }
                                          else {
                                            local_110 = 0;
                                            uStack_108 = 0xe000000000000000;
                                            Swift::_StringGuts::grow(0x44,_Var51);
                                            SVar78.bridgeObject = (void *)0xeb00000000282074;
                                            SVar78.str = (char *)0x6e756f4365747962;
                                            SVar94.bridgeObject = pvVar57;
                                            SVar94.str = pcVar54;
                                            Swift::String::append(SVar78,SVar94);
                                            local_128[0] = uVar65;
                                            SVar83 = Swift::CustomStringConvertible::get_description
                                                               ();
                                            SVar95.bridgeObject = pvVar57;
                                            SVar95.str = pcVar54;
                                            Swift::String::append(SVar83,SVar95);
                                            _swift_bridgeObjectRelease(SVar83.bridgeObject);
                                            puVar45 = (undefined8 *)0xd000000000000037;
                                            SVar79.bridgeObject = (void *)0x8000000100db4b30;
                                            SVar79.str = (char *)0xd000000000000037;
                                            SVar96.bridgeObject = pvVar57;
                                            SVar96.str = pcVar54;
                                            Swift::String::append(SVar79,SVar96);
                                            uVar60 = uStack_108;
                                            uVar31 = local_110;
                                            FUN_1008d5300();
                                            pcVar54 = "";
                                            _swift_allocError(&DAT_100ef11e8,puVar45,0,0);
                                            *puVar45 = uVar31;
                                            puVar45[1] = uVar60;
                                            *(undefined4 *)(puVar45 + 2) = 0x16;
                                            local_2b8 = pcVar54;
                                            FUN_10063dd74();
                                            _swift_errorRelease(pcVar54);
                                          }
                                          puVar29 = &DAT_100f177b8;
                                          _swift_allocObject(&DAT_100f177b8,0x98,7);
                                          *(code **)(puVar29 + 0x10) = param_10;
                                          *(undefined8 *)(puVar29 + 0x18) = param_11;
                                          *(char **)(puVar29 + 0x20) = pcVar8;
                                          *(char **)(puVar29 + 0x28) = param_8;
                                          *(char **)(puVar29 + 0x30) = param_9;
                                          *(ulong *)(puVar29 + 0x38) = uVar68;
                                          *(ulong *)(puVar29 + 0x40) = param_3;
                                          *(char **)(puVar29 + 0x48) = param_12;
                                          *(undefined8 *)(puVar29 + 0x50) = param_1;
                                          *(undefined8 *)(puVar29 + 0x58) = 0;
                                          puVar29[0x60] = 1;
                                          *(void **)(puVar29 + 0x68) = param_4;
                                          *(undefined8 *)(puVar29 + 0x70) = param_5;
                                          *(undefined8 *)(puVar29 + 0x78) = param_6;
                                          *(undefined8 *)(puVar29 + 0x80) = param_7;
                                          *(ulong *)(puVar29 + 0x88) = uVar58;
                                          *(long *)(puVar29 + 0x90) = lVar14;
                                          puVar32 = &DAT_100f177e0;
                                          _swift_allocObject(&DAT_100f177e0,0x28,7);
                                          *(code **)(puVar32 + 0x10) = thunk_FUN_10092d0a0;
                                          *(undefined **)(puVar32 + 0x18) = puVar29;
                                          *(char **)(puVar32 + 0x20) = local_2b8;
                                          uVar65 = *(ulong *)(local_2b8 + 0x28);
                                          lVar28 = *(long *)(local_2b8 + 0x30);
                                          _swift_getObjectType();
                                          pcVar64 = *(code **)(lVar28 + 0x10);
                                          _swift_retain_n(param_12,2);
                                          _swift_retain_n(param_1,2);
                                          _swift_retain_n(param_11,2);
                                          _swift_retain_n(pcVar8,2);
                                          _swift_unknownObjectRetain_n(param_8,2);
                                          _swift_retain_n(puVar29,2);
                                          _swift_retain_n(local_2b8,2);
                                          uVar61 = uVar65;
                                          (*pcVar64)(uVar65,lVar28);
                                          if ((uVar61 & 1) == 0) {
                                            puVar33 = &DAT_100f17808;
                                            _swift_allocObject(&DAT_100f17808,0x28,7);
                                            *(char **)(puVar33 + 0x10) = local_2b8;
                                            *(code **)(puVar33 + 0x18) = thunk_FUN_10092be10;
                                            *(undefined **)(puVar33 + 0x20) = puVar32;
                                            pcVar64 = *(code **)(lVar28 + 0x18);
                                            _swift_retain(local_2b8);
                                            _swift_retain(puVar32);
                                            (*pcVar64)(thunk_FUN_10092be1c,puVar33,uVar65,lVar28);
                                            _swift_release(param_11);
                                            _swift_release(puVar33);
                                            _swift_release(local_2b8);
                                            _swift_release_n(puVar29,2);
                                            _swift_release(puVar32);
                                          }
                                          else {
                                            _swift_beginAccess(local_2b8 + 0x10,&local_110,0,0);
                                            uVar65 = *(ulong *)(local_2b8 + 0x20);
                                            if (uVar65 >> 0x38 < 0xff) {
                                              lVar28 = *(long *)(local_2b8 + 0x10);
                                              uVar31 = *(undefined8 *)(local_2b8 + 0x18);
                                              if (uVar65 >> 0x38 == 1) {
                                                uVar63 = *(ulong *)(pcVar8 + 0x20);
                                                lVar14 = *(long *)(pcVar8 + 0x28);
                                                _swift_getObjectType();
                                                pcVar64 = *(code **)(lVar14 + 0x10);
                                                uVar68 = uVar65;
                                                FUN_1008fa5cc(lVar28,uVar31,uVar65,1);
                                                (*pcVar64)(uVar63,lVar14);
                                                if ((uVar63 & 1) == 0) {
                                                  uVar60 = *(undefined8 *)(pcVar8 + 0x20);
                                                  lVar14 = *(long *)(pcVar8 + 0x28);
                                                  _swift_getObjectType(uVar60);
                                                  puVar33 = &DAT_100f17830;
                                                  _swift_allocObject(&DAT_100f17830,0x20,7);
                                                  *(char **)(puVar33 + 0x10) = pcVar8;
                                                  *(long *)(puVar33 + 0x18) = lVar28;
                                                  pcVar64 = *(code **)(lVar14 + 0x18);
                                                  _swift_retain(pcVar8);
                                                  FUN_10092be28(lVar28,uVar31,uVar65);
                                                  (*pcVar64)(thunk_FUN_1005dfd68,puVar33,uVar60,
                                                             lVar14);
                                                  _swift_release(puVar33);
                                                }
                                                else {
                                                  lVar34 = lVar28;
                                                  FUN_1005de8f4(lVar28);
                                                  FUN_1006486f8();
                                                  FUN_100004550(lVar34,lVar14);
                                                  _swift_bridgeObjectRelease(uVar68);
                                                }
                                              }
                                              else {
                                                uVar5 = (int)((ulong)uVar31 >> 0x20) - (int)uVar31;
                                                FUN_1008fa5cc(lVar28,uVar31,uVar65);
                                                lVar34 = lVar28;
                                                (*param_10)(lVar28,uVar31,uVar65 & 0xffffffffffffff)
                                                ;
                                                if (uVar5 == 0) {
                                                  puVar33 = &DAT_100f17858;
                                                  _swift_allocObject(&DAT_100f17858,0x28,7);
                                                  *(code **)(puVar33 + 0x10) = thunk_FUN_10092be50;
                                                  *(char **)(puVar33 + 0x18) = pcVar8;
                                                  *(long *)(puVar33 + 0x20) = lVar34;
                                                  uVar63 = *(ulong *)(lVar34 + 0x20);
                                                  lVar14 = *(long *)(lVar34 + 0x28);
                                                  _swift_getObjectType();
                                                  pcVar64 = *(code **)(lVar14 + 0x10);
                                                  _swift_retain_n(pcVar8,5);
                                                  _swift_retain_n(lVar34,2);
                                                  uVar68 = uVar63;
                                                  (*pcVar64)(uVar63,lVar14);
                                                  pcVar7 = pcVar8;
                                                  if ((uVar68 & 1) == 0) {
                                                    _swift_release(pcVar8);
                                                    puVar36 = &DAT_100f17880;
                                                    _swift_allocObject(&DAT_100f17880,0x28,7);
                                                    *(long *)(puVar36 + 0x10) = lVar34;
                                                    *(code **)(puVar36 + 0x18) = thunk_FUN_10065310c
                                                    ;
                                                    *(undefined **)(puVar36 + 0x20) = puVar33;
                                                    pcVar64 = *(code **)(lVar14 + 0x18);
                                                    _swift_retain(lVar34);
                                                    _swift_retain(puVar33);
                                                    (*pcVar64)(thunk_FUN_1008db360,puVar36,uVar63,
                                                               lVar14);
                                                    _swift_release(puVar36);
                                                    _swift_release_n(lVar34,2);
                                                    _swift_release_n(pcVar8,2);
                                                    _swift_release(puVar33);
                                                  }
                                                  else {
                                                    _swift_beginAccess(lVar34 + 0x10,local_128,0,0);
                                                    cVar49 = *(char *)(lVar34 + 0x18);
                                                    if (cVar49 == -1) {
                                                      _swift_release(pcVar8);
                                                      _swift_beginAccess(lVar34 + 0x30,&local_140,
                                                                         0x21,0);
                                                      FUN_10064967c(thunk_FUN_10065310c,puVar33);
                                                      _swift_endAccess(&local_140);
                                                    }
                                                    else {
                                                      uVar60 = *(undefined8 *)(lVar34 + 0x10);
                                                      FUN_100308524(uVar60,cVar49);
                                                      FUN_10092b43c(uVar60,cVar49,pcVar8);
                                                      _swift_release(pcVar8);
                                                      FUN_100308538(uVar60,cVar49);
                                                    }
                                                    FUN_1006486f8(0,0,0);
                                                    FUN_100004550(0,0);
                                                    _swift_release_n(lVar34,2);
                                                    _swift_release_n(pcVar8,2);
                                                    _swift_release(puVar33);
                                                    _swift_bridgeObjectRelease(0);
                                                  }
                                                }
                                                else {
                                                  pcVar54 = param_8;
                                                  FUN_100915740(param_8,param_9);
                                                  _swift_release(lVar34);
                                                  puVar33 = &DAT_100f178a8;
                                                  _swift_allocObject(&DAT_100f178a8,0xa0,7);
                                                  *(char **)(puVar33 + 0x10) = param_8;
                                                  *(char **)(puVar33 + 0x18) = param_9;
                                                  *(ulong *)(puVar33 + 0x20) = uVar68;
                                                  *(ulong *)(puVar33 + 0x28) = param_3;
                                                  *(char **)(puVar33 + 0x30) = param_12;
                                                  *(undefined8 *)(puVar33 + 0x38) = param_1;
                                                  *(undefined8 *)(puVar33 + 0x40) = 0;
                                                  puVar33[0x48] = 1;
                                                  *(void **)(puVar33 + 0x50) = param_4;
                                                  *(undefined8 *)(puVar33 + 0x58) = param_5;
                                                  *(undefined8 *)(puVar33 + 0x60) = param_6;
                                                  *(undefined8 *)(puVar33 + 0x68) = param_7;
                                                  *(code **)(puVar33 + 0x70) = param_10;
                                                  *(undefined8 *)(puVar33 + 0x78) = param_11;
                                                  *(char **)(puVar33 + 0x80) = pcVar8;
                                                  *(ulong *)(puVar33 + 0x88) = uVar58;
                                                  *(long *)(puVar33 + 0x90) = lVar14;
                                                  *(ulong *)(puVar33 + 0x98) = (ulong)uVar5;
                                                  puVar36 = &DAT_100f178d0;
                                                  _swift_allocObject(&DAT_100f178d0,0x28,7);
                                                  *(code **)(puVar36 + 0x10) = thunk_FUN_10092d008;
                                                  *(undefined **)(puVar36 + 0x18) = puVar33;
                                                  *(char **)(puVar36 + 0x20) = pcVar54;
                                                  uVar58 = *(ulong *)(pcVar54 + 0x20);
                                                  lVar34 = *(long *)(pcVar54 + 0x28);
                                                  _swift_getObjectType();
                                                  pcVar64 = *(code **)(lVar34 + 0x10);
                                                  _swift_retain_n(param_12,2);
                                                  _swift_retain_n(param_1,2);
                                                  _swift_retain_n(param_11,2);
                                                  _swift_retain_n(pcVar8,2);
                                                  _swift_unknownObjectRetain_n(param_8,2);
                                                  _swift_retain_n(puVar33,2);
                                                  _swift_retain_n(pcVar54,2);
                                                  uVar61 = uVar58;
                                                  (*pcVar64)(uVar58,lVar34);
                                                  if ((uVar61 & 1) == 0) {
                                                    puVar35 = &DAT_100f178f8;
                                                    _swift_allocObject(&DAT_100f178f8,0x28,7);
                                                    *(char **)(puVar35 + 0x10) = pcVar54;
                                                    *(code **)(puVar35 + 0x18) = thunk_FUN_10065310c
                                                    ;
                                                    *(undefined **)(puVar35 + 0x20) = puVar36;
                                                    pcVar64 = *(code **)(lVar34 + 0x18);
                                                    _swift_retain(pcVar54);
                                                    _swift_retain(puVar36);
                                                    (*pcVar64)(thunk_FUN_1008db360,puVar35,uVar58,
                                                               lVar34);
                                                    _swift_unknownObjectRelease(param_8);
                                                    _swift_release(puVar35);
                                                    _swift_release(pcVar54);
                                                    _swift_release_n(puVar33,2);
                                                    _swift_release(puVar36);
                                                  }
                                                  else {
                                                    _Var51.unknown = (undefined *)local_128;
                                                    pcVar55 = (char *)0x0;
                                                    pvVar57 = (void *)0x0;
                                                    _swift_beginAccess(pcVar54 + 0x10);
                                                    uVar60 = *(undefined8 *)(pcVar54 + 0x10);
                                                    cVar49 = pcVar54[0x18];
                                                    if (cVar49 == '\x01') {
                                                      uVar63 = *(ulong *)(pcVar8 + 0x20);
                                                      lVar14 = *(long *)(pcVar8 + 0x28);
                                                      _swift_getObjectType();
                                                      pcVar64 = *(code **)(lVar14 + 0x10);
                                                      FUN_100308524(uVar60,1);
                                                      (*pcVar64)(uVar63,lVar14);
                                                      if ((uVar63 & 1) == 0) {
                                                        uVar37 = *(undefined8 *)(pcVar8 + 0x20);
                                                        lVar14 = *(long *)(pcVar8 + 0x28);
                                                        _swift_getObjectType(uVar37);
                                                        puVar35 = &DAT_100f17920;
                                                        _swift_allocObject(&DAT_100f17920,0x20,7);
                                                        *(char **)(puVar35 + 0x10) = pcVar8;
                                                        *(undefined8 *)(puVar35 + 0x18) = uVar60;
                                                        pcVar64 = *(code **)(lVar14 + 0x18);
                                                        _swift_retain(pcVar8);
                                                        FUN_1005dfeb4(uVar60,1);
                                                        (*pcVar64)(thunk_FUN_1005dfd68,puVar35,
                                                                   uVar37,lVar14);
                                                        _swift_release(puVar35);
                                                      }
                                                      else {
                                                        uVar37 = uVar60;
                                                        FUN_1005de8f4(uVar60);
                                                        FUN_1006486f8();
                                                        FUN_100004550(uVar37,lVar14);
                                                        _swift_bridgeObjectRelease(pcVar55);
                                                      }
                                                      cVar49 = '\x01';
LAB_1009251f0:
                                                      FUN_100308538(uVar60,cVar49);
                                                    }
                                                    else {
                                                      if (cVar49 != -1) {
                                                        uVar61 = uVar63 - 3;
                                                        uVar58 = param_3;
                                                        if ((uVar61 < 2) &&
                                                           ((uVar61 != 1 ||
                                                            (uVar58 = uVar68, (long)uVar68 < 1)))) {
                                                          FUN_10090d0b8(0,0,pcVar8);
                                                          goto LAB_1009251f0;
                                                        }
                                                        lVar14 = (ulong)uVar5 + lVar14;
                                                        if (uVar58 >> 0x20 == 0) {
                                                          puVar35 = &DAT_100f17b78;
                                                          _swift_allocObject(&DAT_100f17b78,0x58,7);
                                                          *(char **)(puVar35 + 0x10) = param_12;
                                                          *(undefined8 *)(puVar35 + 0x18) = param_1;
                                                          *(undefined8 *)(puVar35 + 0x20) = 0;
                                                          puVar35[0x28] = 1;
                                                          *(ulong *)(puVar35 + 0x30) = uVar58;
                                                          *(void **)(puVar35 + 0x38) = param_4;
                                                          *(undefined8 *)(puVar35 + 0x40) = param_5;
                                                          *(undefined8 *)(puVar35 + 0x48) = param_6;
                                                          *(undefined8 *)(puVar35 + 0x50) = param_7;
                                                          local_328 = pcVar7;
                                                          FUN_1008f68cc(pcVar7,&DAT_100eeaaa8,
                                                                        param_9);
                                                          _swift_retain(param_12);
                                                          _swift_retain(param_1);
                                                          _swift_retain(local_328);
                                                          FUN_100914f44(0,1,param_12,local_328,
                                                                        FUN_10092d308,puVar35);
                                                          _swift_release(puVar35);
                                                          _swift_release(local_328);
                                                        }
                                                        else {
                                                          local_140 = 0;
                                                          local_138 = 0xe000000000000000;
                                                          Swift::_StringGuts::grow(0x44,_Var51);
                                                          SVar80.bridgeObject =
                                                               (void *)0xeb00000000282074;
                                                          SVar80.str = (char *)0x6e756f4365747962;
                                                          SVar97.bridgeObject = pvVar57;
                                                          SVar97.str = pcVar55;
                                                          Swift::String::append(SVar80,SVar97);
                                                          local_158[0] = uVar58;
                                                          SVar83 = Swift::CustomStringConvertible::
                                                                   get_description();
                                                          SVar98.bridgeObject = pvVar57;
                                                          SVar98.str = pcVar55;
                                                          Swift::String::append(SVar83,SVar98);
                                                          _swift_bridgeObjectRelease
                                                                    (SVar83.bridgeObject);
                                                          puVar45 = (undefined8 *)0xd000000000000037
                                                          ;
                                                          SVar81.bridgeObject =
                                                               (void *)0x8000000100db4b30;
                                                          SVar81.str = (char *)0xd000000000000037;
                                                          SVar99.bridgeObject = pvVar57;
                                                          SVar99.str = pcVar55;
                                                          Swift::String::append(SVar81,SVar99);
                                                          uVar62 = local_138;
                                                          uVar37 = local_140;
                                                          FUN_1008d5300();
                                                          pcVar55 = "";
                                                          _swift_allocError(&DAT_100ef11e8,puVar45,0
                                                                            ,0);
                                                          *puVar45 = uVar37;
                                                          puVar45[1] = uVar62;
                                                          *(undefined4 *)(puVar45 + 2) = 0x16;
                                                          local_328 = pcVar55;
                                                          FUN_10063dd74();
                                                          _swift_errorRelease(pcVar55);
                                                        }
                                                        puVar35 = &DAT_100f17948;
                                                        _swift_allocObject(&DAT_100f17948,0x98,7);
                                                        *(code **)(puVar35 + 0x10) = param_10;
                                                        *(undefined8 *)(puVar35 + 0x18) = param_11;
                                                        *(char **)(puVar35 + 0x20) = pcVar8;
                                                        *(char **)(puVar35 + 0x28) = param_8;
                                                        *(char **)(puVar35 + 0x30) = param_9;
                                                        *(ulong *)(puVar35 + 0x38) = uVar68;
                                                        *(ulong *)(puVar35 + 0x40) = param_3;
                                                        *(char **)(puVar35 + 0x48) = param_12;
                                                        *(undefined8 *)(puVar35 + 0x50) = param_1;
                                                        *(undefined8 *)(puVar35 + 0x58) = 0;
                                                        puVar35[0x60] = 1;
                                                        *(void **)(puVar35 + 0x68) = param_4;
                                                        *(undefined8 *)(puVar35 + 0x70) = param_5;
                                                        *(undefined8 *)(puVar35 + 0x78) = param_6;
                                                        *(undefined8 *)(puVar35 + 0x80) = param_7;
                                                        *(ulong *)(puVar35 + 0x88) = uVar61;
                                                        *(long *)(puVar35 + 0x90) = lVar14;
                                                        puVar38 = &DAT_100f17970;
                                                        _swift_allocObject(&DAT_100f17970,0x28,7);
                                                        *(code **)(puVar38 + 0x10) =
                                                             thunk_FUN_10092d0a0;
                                                        *(undefined **)(puVar38 + 0x18) = puVar35;
                                                        *(char **)(puVar38 + 0x20) = local_328;
                                                        uVar58 = *(ulong *)(local_328 + 0x28);
                                                        lVar34 = *(long *)(local_328 + 0x30);
                                                        _swift_getObjectType();
                                                        pcVar64 = *(code **)(lVar34 + 0x10);
                                                        _swift_retain_n(param_12,2);
                                                        _swift_retain_n(param_1,2);
                                                        _swift_retain_n(param_11,2);
                                                        _swift_retain_n(pcVar8,2);
                                                        _swift_unknownObjectRetain_n(param_8,2);
                                                        _swift_retain_n(puVar35,2);
                                                        _swift_retain_n(local_328,2);
                                                        uVar39 = uVar58;
                                                        (*pcVar64)(uVar58,lVar34);
                                                        if ((uVar39 & 1) == 0) {
                                                          puVar40 = &DAT_100f17998;
                                                          _swift_allocObject(&DAT_100f17998,0x28,7);
                                                          *(char **)(puVar40 + 0x10) = local_328;
                                                          *(code **)(puVar40 + 0x18) =
                                                               thunk_FUN_10092be10;
                                                          *(undefined **)(puVar40 + 0x20) = puVar38;
                                                          pcVar64 = *(code **)(lVar34 + 0x18);
                                                          _swift_retain(local_328);
                                                          _swift_retain(puVar38);
                                                          (*pcVar64)(thunk_FUN_10092be1c,puVar40,
                                                                     uVar58,lVar34);
                                                          _swift_release(param_11);
                                                          _swift_release(puVar40);
                                                          _swift_release(local_328);
                                                          _swift_release_n(puVar35,2);
                                                          _swift_release(puVar38);
                                                        }
                                                        else {
                                                          _swift_beginAccess(local_328 + 0x10,
                                                                             &local_140,0,0);
                                                          uVar58 = *(ulong *)(local_328 + 0x20);
                                                          if (uVar58 >> 0x38 < 0xff) {
                                                            lVar34 = *(long *)(local_328 + 0x10);
                                                            uVar37 = *(undefined8 *)
                                                                      (local_328 + 0x18);
                                                            if (uVar58 >> 0x38 == 1) {
                                                              uVar63 = *(ulong *)(pcVar8 + 0x20);
                                                              lVar14 = *(long *)(pcVar8 + 0x28);
                                                              _swift_getObjectType();
                                                              pcVar64 = *(code **)(lVar14 + 0x10);
                                                              uVar68 = uVar58;
                                                              FUN_1008fa5cc(lVar34,uVar37,uVar58,1);
                                                              (*pcVar64)(uVar63,lVar14);
                                                              if ((uVar63 & 1) == 0) {
                                                                uVar62 = *(undefined8 *)
                                                                          (pcVar8 + 0x20);
                                                                lVar14 = *(long *)(pcVar8 + 0x28);
                                                                _swift_getObjectType(uVar62);
                                                                puVar40 = &DAT_100f179c0;
                                                                _swift_allocObject(&DAT_100f179c0,
                                                                                   0x20,7);
                                                                *(char **)(puVar40 + 0x10) = pcVar8;
                                                                *(long *)(puVar40 + 0x18) = lVar34;
                                                                pcVar64 = *(code **)(lVar14 + 0x18);
                                                                _swift_retain(pcVar8);
                                                                FUN_10092be28(lVar34,uVar37,uVar58);
                                                                (*pcVar64)(thunk_FUN_1005dfd68,
                                                                           puVar40,uVar62,lVar14);
                                                                _swift_release(puVar40);
                                                              }
                                                              else {
                                                                lVar41 = lVar34;
                                                                FUN_1005de8f4(lVar34);
                                                                FUN_1006486f8();
                                                                FUN_100004550(lVar41,lVar14);
                                                                _swift_bridgeObjectRelease(uVar68);
                                                              }
                                                            }
                                                            else {
                                                              uVar5 = (int)((ulong)uVar37 >> 0x20) -
                                                                      (int)uVar37;
                                                              FUN_1008fa5cc(lVar34,uVar37,uVar58);
                                                              lVar41 = lVar34;
                                                              (*param_10)(lVar34,uVar37,
                                                                          uVar58 & 0xffffffffffffff)
                                                              ;
                                                              if (uVar5 == 0) {
                                                                puVar40 = &DAT_100f179e8;
                                                                _swift_allocObject(&DAT_100f179e8,
                                                                                   0x28,7);
                                                                *(code **)(puVar40 + 0x10) =
                                                                     thunk_FUN_10092be50;
                                                                *(char **)(puVar40 + 0x18) = pcVar8;
                                                                *(long *)(puVar40 + 0x20) = lVar41;
                                                                uVar63 = *(ulong *)(lVar41 + 0x20);
                                                                lVar14 = *(long *)(lVar41 + 0x28);
                                                                _swift_getObjectType();
                                                                pcVar64 = *(code **)(lVar14 + 0x10);
                                                                _swift_retain_n(pcVar8,5);
                                                                _swift_retain_n(lVar41,2);
                                                                uVar68 = uVar63;
                                                                (*pcVar64)(uVar63,lVar14);
                                                                pcVar7 = pcVar8;
                                                                if ((uVar68 & 1) == 0) {
                                                                  _swift_release(pcVar8);
                                                                  puVar43 = &DAT_100f17a10;
                                                                  _swift_allocObject(&DAT_100f17a10,
                                                                                     0x28,7);
                                                                  *(long *)(puVar43 + 0x10) = lVar41
                                                                  ;
                                                                  *(code **)(puVar43 + 0x18) =
                                                                       thunk_FUN_10065310c;
                                                                  *(undefined **)(puVar43 + 0x20) =
                                                                       puVar40;
                                                                  pcVar64 = *(code **)(lVar14 + 0x18
                                                                                      );
                                                                  _swift_retain(lVar41);
                                                                  _swift_retain(puVar40);
                                                                  (*pcVar64)(thunk_FUN_1008db360,
                                                                             puVar43,uVar63,lVar14);
                                                                  _swift_release(puVar43);
                                                                  _swift_release_n(lVar41,2);
                                                                  _swift_release_n(pcVar8,2);
                                                                  _swift_release(puVar40);
                                                                }
                                                                else {
                                                                  _swift_beginAccess(lVar41 + 0x10,
                                                                                     local_158,0,0);
                                                                  cVar48 = *(char *)(lVar41 + 0x18);
                                                                  if (cVar48 == -1) {
                                                                    _swift_release(pcVar8);
                                                                    _swift_beginAccess(lVar41 + 0x30
                                                                                       ,&local_170,
                                                                                       0x21,0);
                                                                    FUN_10064967c(
                                                  thunk_FUN_10065310c,puVar40);
                                                  _swift_endAccess(&local_170);
                                                  }
                                                  else {
                                                    uVar62 = *(undefined8 *)(lVar41 + 0x10);
                                                    FUN_100308524(uVar62,cVar48);
                                                    FUN_10092b43c(uVar62,cVar48,pcVar8);
                                                    _swift_release(pcVar8);
                                                    FUN_100308538(uVar62,cVar48);
                                                  }
                                                  FUN_1006486f8(0,0,0);
                                                  FUN_100004550(0,0);
                                                  _swift_release_n(lVar41,2);
                                                  _swift_release_n(pcVar8,2);
                                                  _swift_release(puVar40);
                                                  _swift_bridgeObjectRelease(0);
                                                  }
                                                  }
                                                  else {
                                                    pcVar55 = param_8;
                                                    FUN_100915740(param_8,param_9);
                                                    _swift_release(lVar41);
                                                    puVar40 = &DAT_100f17a38;
                                                    _swift_allocObject(&DAT_100f17a38,0xa0,7);
                                                    *(char **)(puVar40 + 0x10) = param_8;
                                                    *(char **)(puVar40 + 0x18) = param_9;
                                                    *(ulong *)(puVar40 + 0x20) = uVar68;
                                                    *(ulong *)(puVar40 + 0x28) = param_3;
                                                    *(char **)(puVar40 + 0x30) = param_12;
                                                    *(undefined8 *)(puVar40 + 0x38) = param_1;
                                                    *(undefined8 *)(puVar40 + 0x40) = 0;
                                                    puVar40[0x48] = 1;
                                                    *(void **)(puVar40 + 0x50) = param_4;
                                                    *(undefined8 *)(puVar40 + 0x58) = param_5;
                                                    *(undefined8 *)(puVar40 + 0x60) = param_6;
                                                    *(undefined8 *)(puVar40 + 0x68) = param_7;
                                                    *(code **)(puVar40 + 0x70) = param_10;
                                                    *(undefined8 *)(puVar40 + 0x78) = param_11;
                                                    *(char **)(puVar40 + 0x80) = pcVar8;
                                                    *(ulong *)(puVar40 + 0x88) = uVar61;
                                                    *(long *)(puVar40 + 0x90) = lVar14;
                                                    *(ulong *)(puVar40 + 0x98) = (ulong)uVar5;
                                                    puVar43 = &DAT_100f17a60;
                                                    _swift_allocObject(&DAT_100f17a60,0x28,7);
                                                    *(code **)(puVar43 + 0x10) = thunk_FUN_10092d008
                                                    ;
                                                    *(undefined **)(puVar43 + 0x18) = puVar40;
                                                    *(char **)(puVar43 + 0x20) = pcVar55;
                                                    uVar61 = *(ulong *)(pcVar55 + 0x20);
                                                    lVar41 = *(long *)(pcVar55 + 0x28);
                                                    _swift_getObjectType();
                                                    pcVar64 = *(code **)(lVar41 + 0x10);
                                                    _swift_retain_n(param_12,2);
                                                    _swift_retain_n(param_1,2);
                                                    _swift_retain_n(param_11,2);
                                                    _swift_retain_n(pcVar8,2);
                                                    _swift_unknownObjectRetain_n(param_8,2);
                                                    _swift_retain_n(puVar40,2);
                                                    _swift_retain_n(pcVar55,2);
                                                    uVar39 = uVar61;
                                                    (*pcVar64)(uVar61,lVar41);
                                                    if ((uVar39 & 1) == 0) {
                                                      puVar42 = &DAT_100f17a88;
                                                      _swift_allocObject(&DAT_100f17a88,0x28,7);
                                                      *(char **)(puVar42 + 0x10) = pcVar55;
                                                      *(code **)(puVar42 + 0x18) =
                                                           thunk_FUN_10065310c;
                                                      *(undefined **)(puVar42 + 0x20) = puVar43;
                                                      pcVar64 = *(code **)(lVar41 + 0x18);
                                                      _swift_retain(pcVar55);
                                                      _swift_retain(puVar43);
                                                      (*pcVar64)(thunk_FUN_1008db360,puVar42,uVar61,
                                                                 lVar41);
                                                      _swift_unknownObjectRelease(param_8);
                                                      _swift_release(puVar42);
                                                      _swift_release(pcVar55);
                                                      _swift_release_n(puVar40,2);
                                                      _swift_release(puVar43);
                                                    }
                                                    else {
                                                      _Var51.unknown = (undefined *)local_158;
                                                      pcVar56 = (char *)0x0;
                                                      pvVar57 = (void *)0x0;
                                                      _swift_beginAccess(pcVar55 + 0x10);
                                                      uVar62 = *(undefined8 *)(pcVar55 + 0x10);
                                                      cVar48 = pcVar55[0x18];
                                                      if (cVar48 == '\x01') {
                                                        uVar63 = *(ulong *)(pcVar8 + 0x20);
                                                        lVar14 = *(long *)(pcVar8 + 0x28);
                                                        _swift_getObjectType();
                                                        pcVar64 = *(code **)(lVar14 + 0x10);
                                                        FUN_100308524(uVar62,1);
                                                        (*pcVar64)(uVar63,lVar14);
                                                        if ((uVar63 & 1) == 0) {
                                                          uVar44 = *(undefined8 *)(pcVar8 + 0x20);
                                                          lVar14 = *(long *)(pcVar8 + 0x28);
                                                          _swift_getObjectType(uVar44);
                                                          puVar42 = &DAT_100f17ab0;
                                                          _swift_allocObject(&DAT_100f17ab0,0x20,7);
                                                          *(char **)(puVar42 + 0x10) = pcVar8;
                                                          *(undefined8 *)(puVar42 + 0x18) = uVar62;
                                                          pcVar64 = *(code **)(lVar14 + 0x18);
                                                          _swift_retain(pcVar8);
                                                          FUN_1005dfeb4(uVar62,1);
                                                          (*pcVar64)(thunk_FUN_1005dfd68,puVar42,
                                                                     uVar44,lVar14);
                                                          _swift_release(puVar42);
                                                        }
                                                        else {
                                                          uVar44 = uVar62;
                                                          FUN_1005de8f4(uVar62);
                                                          FUN_1006486f8();
                                                          FUN_100004550(uVar44,lVar14);
                                                          _swift_bridgeObjectRelease(pcVar56);
                                                        }
                                                        cVar48 = '\x01';
LAB_1009250f8:
                                                        FUN_100308538(uVar62,cVar48);
                                                      }
                                                      else {
                                                        if (cVar48 != -1) {
                                                          uVar63 = uVar63 - 4;
                                                          uVar61 = param_3;
                                                          if ((uVar63 < 2) &&
                                                             ((uVar63 != 1 ||
                                                              (uVar61 = uVar68, (long)uVar68 < 1))))
                                                          {
                                                            FUN_10090d0b8(0,0,pcVar8);
                                                          }
                                                          else {
                                                            if (uVar61 >> 0x20 == 0) {
                                                              puVar42 = &DAT_100f17b50;
                                                              _swift_allocObject(&DAT_100f17b50,0x58
                                                                                 ,7);
                                                              *(char **)(puVar42 + 0x10) = param_12;
                                                              *(undefined8 *)(puVar42 + 0x18) =
                                                                   param_1;
                                                              *(undefined8 *)(puVar42 + 0x20) = 0;
                                                              puVar42[0x28] = 1;
                                                              *(ulong *)(puVar42 + 0x30) = uVar61;
                                                              *(void **)(puVar42 + 0x38) = param_4;
                                                              *(undefined8 *)(puVar42 + 0x40) =
                                                                   param_5;
                                                              *(undefined8 *)(puVar42 + 0x48) =
                                                                   param_6;
                                                              *(undefined8 *)(puVar42 + 0x50) =
                                                                   param_7;
                                                              FUN_1008f68cc(pcVar7,&DAT_100eeaaa8,
                                                                            param_9);
                                                              _swift_retain(param_12);
                                                              _swift_retain(param_1);
                                                              _swift_retain(pcVar7);
                                                              FUN_100914f44(0,1,param_12,pcVar7,
                                                                            FUN_10092d308,puVar42);
                                                              _swift_release(puVar42);
                                                              _swift_release(pcVar7);
                                                            }
                                                            else {
                                                              local_170 = 0;
                                                              local_168 = 0xe000000000000000;
                                                              Swift::_StringGuts::grow(0x44,_Var51);
                                                              SVar82.bridgeObject =
                                                                   (void *)0xeb00000000282074;
                                                              SVar82.str = (char *)
                                                  0x6e756f4365747962;
                                                  SVar100.bridgeObject = pvVar57;
                                                  SVar100.str = pcVar56;
                                                  Swift::String::append(SVar82,SVar100);
                                                  local_188 = uVar61;
                                                  SVar83 = Swift::CustomStringConvertible::
                                                           get_description();
                                                  SVar101.bridgeObject = pvVar57;
                                                  SVar101.str = pcVar56;
                                                  Swift::String::append(SVar83,SVar101);
                                                  _swift_bridgeObjectRelease(SVar83.bridgeObject);
                                                  puVar45 = (undefined8 *)0xd000000000000037;
                                                  SVar84.bridgeObject = (void *)0x8000000100db4b30;
                                                  SVar84.str = (char *)0xd000000000000037;
                                                  SVar102.bridgeObject = pvVar57;
                                                  SVar102.str = pcVar56;
                                                  Swift::String::append(SVar84,SVar102);
                                                  uVar6 = local_168;
                                                  uVar44 = local_170;
                                                  FUN_1008d5300();
                                                  pcVar56 = "";
                                                  _swift_allocError(&DAT_100ef11e8,puVar45,0,0);
                                                  *puVar45 = uVar44;
                                                  puVar45[1] = uVar6;
                                                  *(undefined4 *)(puVar45 + 2) = 0x16;
                                                  pcVar7 = pcVar56;
                                                  FUN_10063dd74();
                                                  _swift_errorRelease(pcVar56);
                                                  }
                                                  puVar42 = &DAT_100f17ad8;
                                                  _swift_allocObject(&DAT_100f17ad8,0x98,7);
                                                  *(code **)(puVar42 + 0x10) = param_10;
                                                  *(undefined8 *)(puVar42 + 0x18) = param_11;
                                                  *(char **)(puVar42 + 0x20) = pcVar8;
                                                  *(char **)(puVar42 + 0x28) = param_8;
                                                  *(char **)(puVar42 + 0x30) = param_9;
                                                  *(ulong *)(puVar42 + 0x38) = uVar68;
                                                  *(ulong *)(puVar42 + 0x40) = param_3;
                                                  *(char **)(puVar42 + 0x48) = param_12;
                                                  *(undefined8 *)(puVar42 + 0x50) = param_1;
                                                  *(undefined8 *)(puVar42 + 0x58) = 0;
                                                  puVar42[0x60] = 1;
                                                  *(void **)(puVar42 + 0x68) = param_4;
                                                  *(undefined8 *)(puVar42 + 0x70) = param_5;
                                                  *(undefined8 *)(puVar42 + 0x78) = param_6;
                                                  *(undefined8 *)(puVar42 + 0x80) = param_7;
                                                  *(ulong *)(puVar42 + 0x88) = uVar63;
                                                  *(ulong *)(puVar42 + 0x90) = (ulong)uVar5 + lVar14
                                                  ;
                                                  puVar46 = &DAT_100f17b00;
                                                  _swift_allocObject(&DAT_100f17b00,0x28,7);
                                                  *(code **)(puVar46 + 0x10) = thunk_FUN_10092d0a0;
                                                  *(undefined **)(puVar46 + 0x18) = puVar42;
                                                  *(char **)(puVar46 + 0x20) = pcVar7;
                                                  uVar63 = *(ulong *)(pcVar7 + 0x28);
                                                  lVar14 = *(long *)(pcVar7 + 0x30);
                                                  _swift_getObjectType();
                                                  pcVar64 = *(code **)(lVar14 + 0x10);
                                                  _swift_retain_n(param_12,2);
                                                  _swift_retain_n(param_1,2);
                                                  _swift_retain_n(param_11,2);
                                                  _swift_retain_n(pcVar8,2);
                                                  _swift_unknownObjectRetain_n(param_8,2);
                                                  _swift_retain_n(puVar42,2);
                                                  _swift_retain_n(pcVar7,2);
                                                  uVar61 = uVar63;
                                                  (*pcVar64)(uVar63,lVar14);
                                                  if ((uVar61 & 1) == 0) {
                                                    puVar47 = &DAT_100f17b28;
                                                    _swift_allocObject(&DAT_100f17b28,0x28,7);
                                                    *(char **)(puVar47 + 0x10) = pcVar7;
                                                    *(code **)(puVar47 + 0x18) = thunk_FUN_10092be10
                                                    ;
                                                    *(undefined **)(puVar47 + 0x20) = puVar46;
                                                    pcVar64 = *(code **)(lVar14 + 0x18);
                                                    _swift_retain(pcVar7);
                                                    _swift_retain(puVar46);
                                                    (*pcVar64)(thunk_FUN_10092be1c,puVar47,uVar63,
                                                               lVar14);
                                                    _swift_release(param_11);
                                                    _swift_release(puVar47);
                                                    _swift_release(pcVar7);
                                                    _swift_release_n(puVar42,2);
                                                    _swift_release(puVar46);
                                                  }
                                                  else {
                                                    _swift_beginAccess(pcVar7 + 0x10,&local_170,0,0)
                                                    ;
                                                    if (*(ulong *)(pcVar7 + 0x20) >> 0x38 < 0xff) {
                                                      local_188 = *(ulong *)(pcVar7 + 0x10);
                                                      local_180 = *(undefined8 *)(pcVar7 + 0x18);
                                                      local_178 = *(ulong *)(pcVar7 + 0x20);
                                                      FUN_1008fa5cc();
                                                      FUN_100925494(&local_188,param_10,param_11,
                                                                    pcVar8,param_8,param_9,uVar68,
                                                                    param_3,param_12,param_1,0,1);
                                                      FUN_10090ef88(local_188,local_180,
                                                                    local_178 & 0xffffffffffffff,
                                                                    local_178._7_1_);
                                                    }
                                                    else {
                                                      _swift_beginAccess(pcVar7 + 0x38,&local_188,
                                                                         0x21,0);
                                                      FUN_10064967c(thunk_FUN_10092be10,puVar46);
                                                      _swift_endAccess(&local_188);
                                                    }
                                                    FUN_1006486f8(0,0,0);
                                                    FUN_100004550(0,0);
                                                    _swift_release(param_11);
                                                    _swift_release(pcVar7);
                                                    _swift_release_n(puVar42,2);
                                                    _swift_release(puVar46);
                                                    _swift_bridgeObjectRelease(0);
                                                  }
                                                  _swift_release(pcVar7);
                                                  _swift_release(param_1);
                                                  _swift_release(param_12);
                                                  _swift_unknownObjectRelease(param_8);
                                                  _swift_release(pcVar8);
                                                  }
                                                  goto LAB_1009250f8;
                                                  }
                                                  _swift_beginAccess(pcVar55 + 0x30,&local_170,0x21,
                                                                     0);
                                                  FUN_10064967c(thunk_FUN_10065310c,puVar43);
                                                  _swift_endAccess(&local_170);
                                                  }
                                                  FUN_1006486f8(0,0,0);
                                                  FUN_100004550(0,0);
                                                  _swift_unknownObjectRelease(param_8);
                                                  _swift_release(pcVar55);
                                                  _swift_release_n(puVar40,2);
                                                  _swift_release(puVar43);
                                                  _swift_bridgeObjectRelease(0);
                                                  }
                                                  _swift_release(pcVar55);
                                                  _swift_release(pcVar8);
                                                  _swift_release(param_11);
                                                  _swift_release(param_1);
                                                  pcVar7 = param_12;
                                                  }
                                                  _swift_release(pcVar7);
                                                  }
                                                  FUN_10092be3c(lVar34,uVar37,uVar58);
                                                  }
                                                  else {
                                                    _swift_beginAccess(local_328 + 0x38,local_158,
                                                                       0x21,0);
                                                    FUN_10064967c(thunk_FUN_10092be10,puVar38);
                                                    _swift_endAccess(local_158);
                                                  }
                                                  FUN_1006486f8(0,0,0);
                                                  FUN_100004550(0,0);
                                                  _swift_release(param_11);
                                                  _swift_release(local_328);
                                                  _swift_release_n(puVar35,2);
                                                  _swift_release(puVar38);
                                                  _swift_bridgeObjectRelease(0);
                                                  }
                                                  _swift_release(local_328);
                                                  _swift_release(param_1);
                                                  _swift_release(param_12);
                                                  _swift_unknownObjectRelease(param_8);
                                                  _swift_release(pcVar8);
                                                  goto LAB_1009251f0;
                                                  }
                                                  _swift_beginAccess(pcVar54 + 0x30,&local_140,0x21,
                                                                     0);
                                                  FUN_10064967c(thunk_FUN_10065310c,puVar36);
                                                  _swift_endAccess(&local_140);
                                                  }
                                                  FUN_1006486f8(0,0,0);
                                                  FUN_100004550(0,0);
                                                  _swift_unknownObjectRelease(param_8);
                                                  _swift_release(pcVar54);
                                                  _swift_release_n(puVar33,2);
                                                  _swift_release(puVar36);
                                                  _swift_bridgeObjectRelease(0);
                                                  }
                                                  _swift_release(pcVar54);
                                                  _swift_release(pcVar8);
                                                  _swift_release(param_11);
                                                  _swift_release(param_1);
                                                  pcVar7 = param_12;
                                                }
                                                _swift_release(pcVar7);
                                              }
                                              FUN_10092be3c(lVar28,uVar31,uVar65);
                                            }
                                            else {
                                              _swift_beginAccess(local_2b8 + 0x38,local_128,0x21,0);
                                              FUN_10064967c(thunk_FUN_10092be10,puVar32);
                                              _swift_endAccess(local_128);
                                            }
                                            FUN_1006486f8(0,0,0);
                                            FUN_100004550(0,0);
                                            _swift_release(param_11);
                                            _swift_release(local_2b8);
                                            _swift_release_n(puVar29,2);
                                            _swift_release(puVar32);
                                            _swift_bridgeObjectRelease(0);
                                          }
                                          _swift_release(local_2b8);
                                          _swift_release(param_1);
                                          _swift_release(param_12);
                                          _swift_unknownObjectRelease(param_8);
                                          _swift_release(pcVar8);
                                          goto LAB_1009252e8;
                                        }
                                        _swift_beginAccess(pcVar53 + 0x30,&local_110,0x21,0);
                                        FUN_10064967c(thunk_FUN_10065310c,puVar30);
                                        _swift_endAccess(&local_110);
                                      }
                                      FUN_1006486f8(0,0,0);
                                      FUN_100004550(0,0);
                                      _swift_unknownObjectRelease(param_8);
                                      _swift_release(pcVar53);
                                      _swift_release_n(puVar27,2);
                                      _swift_release(puVar30);
                                      _swift_bridgeObjectRelease(0);
                                    }
                                    _swift_release(pcVar53);
                                    _swift_release(pcVar8);
                                    _swift_release(param_11);
                                    _swift_release(param_1);
                                    pcVar7 = param_12;
                                  }
                                  _swift_release(pcVar7);
                                }
                                FUN_10092be3c(lVar21,uVar24,uVar67);
                              }
                              else {
                                _swift_beginAccess(pcVar25 + 0x38,local_f8,0x21,0);
                                FUN_10064967c(thunk_FUN_10092be10,puVar26);
                                _swift_endAccess(local_f8);
                              }
                              FUN_1006486f8(0,0,0);
                              FUN_100004550(0,0);
                              _swift_release(param_11);
                              _swift_release(pcVar25);
                              _swift_release_n(puVar22,2);
                              _swift_release(puVar26);
                              _swift_bridgeObjectRelease(0);
                            }
                            _swift_release(pcVar25);
                            _swift_release(param_1);
                            _swift_release(param_12);
                            _swift_unknownObjectRelease(param_8);
                            _swift_release(pcVar8);
                            FUN_100308538(uVar72,cVar4);
                          }
                        }
                        FUN_1006486f8(0,0,0);
                        FUN_100004550(0,0);
                        _swift_unknownObjectRelease(param_8);
                        _swift_release(pcVar17);
                        _swift_release_n(puVar20,2);
                        _swift_release(puVar23);
                        _swift_bridgeObjectRelease(0);
                      }
                      _swift_release(pcVar17);
                      _swift_release(pcVar8);
                      _swift_release(param_11);
                      _swift_release(param_1);
                      _swift_release(param_12);
                      FUN_10092be3c(lVar71,uVar52,uVar70);
                    }
                  }
                }
                else {
                  _swift_beginAccess(pcVar18 + 0x38,local_c8,0x21,0);
                  FUN_10064967c(thunk_FUN_10092be10,puVar19);
                  _swift_endAccess(local_c8);
                }
                FUN_1006486f8(0,0,0);
                FUN_100004550(0,0);
                _swift_release(param_11);
                _swift_release(pcVar18);
                _swift_release_n(puVar15,2);
                _swift_release(puVar19);
                _swift_bridgeObjectRelease(0);
              }
              _swift_release(pcVar18);
              _swift_release(param_1);
              _swift_release(param_12);
              _swift_unknownObjectRelease(param_8);
              _swift_release(pcVar8);
              FUN_100308538(uVar69,cVar3);
            }
          }
          FUN_1006486f8(0,0,0);
          FUN_100004550(0,0);
          _swift_unknownObjectRelease(param_8);
          _swift_release(pcVar10);
          _swift_release_n(puVar13,2);
          _swift_release(puVar16);
          _swift_bridgeObjectRelease(0);
        }
        _swift_release(pcVar10);
        _swift_release(pcVar8);
        _swift_release(param_11);
        _swift_release(param_1);
        _swift_release(param_12);
        FUN_10092be3c(lVar1,uVar2,uVar66);
      }
    }
  }
  else {
    _swift_beginAccess(pcVar11 + 0x38,local_98,0x21,0);
    FUN_10064967c(thunk_FUN_10092be10,puVar12);
    _swift_endAccess(local_98);
  }
  FUN_1006486f8(0,0,0);
  FUN_100004550(0,0);
  _swift_release(param_11);
  _swift_release(pcVar11);
  _swift_release_n(puVar9,2);
  _swift_release(puVar12);
  _swift_bridgeObjectRelease(0);
LAB_100921c4c:
  _swift_release(pcVar11);
  _swift_release(param_1);
  _swift_release(param_12);
  _swift_unknownObjectRelease(param_8);
  _swift_release(pcVar8);
  return pcVar8;
}



/* Address: 0x100925494 | FUN_100925494 */

void FUN_100925494(long *param_1,code *param_2,undefined8 param_3,long param_4,undefined8 *param_5,
                  undefined8 param_6,ulong param_7,ulong param_8,long param_9,undefined8 param_10,
                  long param_11,char param_12,undefined4 param_13,undefined8 param_14,
                  undefined8 param_15,undefined8 param_16,undefined8 param_17,long param_18,
                  long param_19)

{
  char cVar1;
  uint uVar2;
  uint7 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  _StringGuts _Var17;
  long lVar18;
  char *pcVar19;
  void *pvVar20;
  ulong uVar21;
  undefined1 uVar22;
  long lVar23;
  undefined8 uVar24;
  code *pcVar25;
  undefined8 uVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  undefined8 *local_100;
  ulong local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined2 local_84;
  undefined1 local_82;
  undefined1 auStack_80 [32];
  
  lVar5 = *param_1;
  lVar18 = param_1[1];
  uVar3 = *(uint7 *)(param_1 + 2);
  if (*(char *)((long)param_1 + 0x17) == '\x01') {
    uVar21 = *(ulong *)(param_4 + 0x20);
    lVar23 = *(long *)(param_4 + 0x28);
    _swift_getObjectType();
    uVar9 = uVar21;
    lVar16 = lVar23;
    (**(code **)(lVar23 + 0x10))();
    if ((uVar9 & 1) != 0) {
      FUN_1005de8f4(lVar5);
      FUN_1006486f8();
      FUN_100004550(lVar5,lVar16);
      _swift_bridgeObjectRelease(param_3);
      return;
    }
    puVar8 = &DAT_100f185c8;
    _swift_allocObject(&DAT_100f185c8,0x20,7);
    *(long *)(puVar8 + 0x10) = param_4;
    *(long *)(puVar8 + 0x18) = lVar5;
    pcVar25 = *(code **)(lVar23 + 0x18);
    _swift_retain(param_4);
    FUN_1008fa5cc(lVar5,lVar18,(ulong)uVar3,1);
    (*pcVar25)(thunk_FUN_1005dfd68,puVar8,uVar21,lVar23);
    _swift_release(puVar8);
    return;
  }
  uVar2 = (int)((ulong)lVar18 >> 0x20) - (int)lVar18;
  uVar21 = (ulong)uVar2;
  (*param_2)(lVar5,lVar18,(ulong)uVar3);
  if (uVar2 == 0) {
    puVar8 = &DAT_100f185f0;
    _swift_allocObject(&DAT_100f185f0,0x28,7);
    *(code **)(puVar8 + 0x10) = thunk_FUN_10092be50;
    *(long *)(puVar8 + 0x18) = param_4;
    *(long *)(puVar8 + 0x20) = lVar5;
    uVar21 = *(ulong *)(lVar5 + 0x20);
    lVar18 = *(long *)(lVar5 + 0x28);
    _swift_getObjectType();
    pcVar25 = *(code **)(lVar18 + 0x10);
    _swift_retain_n(param_4,5);
    _swift_retain_n(lVar5,2);
    uVar9 = uVar21;
    (*pcVar25)(uVar21,lVar18);
    param_9 = param_4;
    if ((uVar9 & 1) == 0) {
      _swift_release(param_4);
      puVar11 = &DAT_100f18618;
      _swift_allocObject(&DAT_100f18618,0x28,7);
      *(long *)(puVar11 + 0x10) = lVar5;
      *(code **)(puVar11 + 0x18) = thunk_FUN_10065310c;
      *(undefined **)(puVar11 + 0x20) = puVar8;
      pcVar25 = *(code **)(lVar18 + 0x18);
      _swift_retain(lVar5);
      _swift_retain(puVar8);
      (*pcVar25)(thunk_FUN_1008db360,puVar11,uVar21,lVar18);
      _swift_release(puVar11);
      _swift_release_n(lVar5,2);
      _swift_release_n(param_4,2);
      _swift_release(puVar8);
    }
    else {
      _swift_beginAccess(lVar5 + 0x10,auStack_80,0,0);
      cVar1 = *(char *)(lVar5 + 0x18);
      if (cVar1 == -1) {
        _swift_release(param_4);
        _swift_beginAccess(lVar5 + 0x30,&local_98,0x21,0);
        FUN_10064967c(thunk_FUN_10065310c,puVar8);
        _swift_endAccess(&local_98);
      }
      else {
        uVar24 = *(undefined8 *)(lVar5 + 0x10);
        FUN_100308524(uVar24,cVar1);
        FUN_10092b43c(uVar24,cVar1,param_4);
        _swift_release(param_4);
        FUN_100308538(uVar24,cVar1);
      }
      FUN_1006486f8(0,0,0);
      FUN_100004550(0,0);
      _swift_release_n(lVar5,2);
      _swift_release_n(param_4,2);
      _swift_release(puVar8);
      _swift_bridgeObjectRelease(0);
    }
  }
  else {
    puVar6 = param_5;
    FUN_100915740(param_5,param_6);
    _swift_release(lVar5);
    puVar8 = &DAT_100f18640;
    _swift_allocObject(&DAT_100f18640,0xa0,7);
    *(undefined8 **)(puVar8 + 0x10) = param_5;
    *(undefined8 *)(puVar8 + 0x18) = param_6;
    *(ulong *)(puVar8 + 0x20) = param_7;
    *(ulong *)(puVar8 + 0x28) = param_8;
    *(long *)(puVar8 + 0x30) = param_9;
    *(undefined8 *)(puVar8 + 0x38) = param_10;
    *(long *)(puVar8 + 0x40) = param_11;
    puVar8[0x48] = param_12;
    *(undefined8 *)(puVar8 + 0x50) = param_14;
    *(undefined8 *)(puVar8 + 0x58) = param_15;
    *(undefined8 *)(puVar8 + 0x60) = param_16;
    *(undefined8 *)(puVar8 + 0x68) = param_17;
    *(code **)(puVar8 + 0x70) = param_2;
    *(undefined8 *)(puVar8 + 0x78) = param_3;
    *(long *)(puVar8 + 0x80) = param_4;
    *(long *)(puVar8 + 0x88) = param_18;
    *(long *)(puVar8 + 0x90) = param_19;
    *(ulong *)(puVar8 + 0x98) = uVar21;
    puVar11 = &DAT_100f18668;
    _swift_allocObject(&DAT_100f18668,0x28,7);
    *(code **)(puVar11 + 0x10) = thunk_FUN_10092d008;
    *(undefined **)(puVar11 + 0x18) = puVar8;
    *(undefined8 **)(puVar11 + 0x20) = puVar6;
    uVar9 = puVar6[4];
    lVar5 = puVar6[5];
    _swift_getObjectType();
    pcVar25 = *(code **)(lVar5 + 0x10);
    _swift_unknownObjectRetain_n(param_5,2);
    _swift_retain_n(param_9,2);
    _swift_retain_n(param_10,2);
    _swift_retain_n(param_3,2);
    _swift_retain_n(param_4,2);
    _swift_retain_n(puVar8,2);
    _swift_retain_n(puVar6,2);
    uVar7 = uVar9;
    (*pcVar25)(uVar9,lVar5);
    if ((uVar7 & 1) == 0) {
      puVar10 = &DAT_100f18690;
      _swift_allocObject(&DAT_100f18690,0x28,7);
      *(undefined8 **)(puVar10 + 0x10) = puVar6;
      *(code **)(puVar10 + 0x18) = thunk_FUN_10065310c;
      *(undefined **)(puVar10 + 0x20) = puVar11;
      pcVar25 = *(code **)(lVar5 + 0x18);
      _swift_retain(puVar6);
      _swift_retain(puVar11);
      (*pcVar25)(thunk_FUN_1008db360,puVar10,uVar9,lVar5);
      _swift_unknownObjectRelease(param_5);
      _swift_release(puVar10);
      _swift_release(puVar6);
      _swift_release_n(puVar8,2);
      _swift_release(puVar11);
    }
    else {
      _Var17.unknown = auStack_80;
      pcVar19 = (char *)0x0;
      pvVar20 = (void *)0x0;
      _swift_beginAccess(puVar6 + 2);
      uVar24 = puVar6[2];
      cVar1 = *(char *)(puVar6 + 3);
      if (cVar1 == '\x01') {
        uVar21 = *(ulong *)(param_4 + 0x20);
        lVar5 = *(long *)(param_4 + 0x28);
        _swift_getObjectType();
        pcVar25 = *(code **)(lVar5 + 0x10);
        FUN_100308524(uVar24,1);
        uVar9 = uVar21;
        lVar18 = lVar5;
        (*pcVar25)(uVar21,lVar5);
        if ((uVar9 & 1) == 0) {
          puVar10 = &DAT_100f186b8;
          _swift_allocObject(&DAT_100f186b8,0x20,7);
          *(long *)(puVar10 + 0x10) = param_4;
          *(undefined8 *)(puVar10 + 0x18) = uVar24;
          pcVar25 = *(code **)(lVar5 + 0x18);
          _swift_retain(param_4);
          FUN_1005dfeb4(uVar24,1);
          (*pcVar25)(thunk_FUN_1005dfd68,puVar10,uVar21,lVar5);
          _swift_release(puVar10);
        }
        else {
          uVar26 = uVar24;
          FUN_1005de8f4(uVar24);
          FUN_1006486f8();
          FUN_100004550(uVar26,lVar18);
          _swift_bridgeObjectRelease(pcVar19);
        }
        FUN_100308538(uVar24,1);
      }
      else if (cVar1 == -1) {
        _swift_beginAccess(puVar6 + 6,&local_98,0x21,0);
        FUN_10064967c(thunk_FUN_10065310c,puVar11);
        _swift_endAccess(&local_98);
      }
      else {
        lVar5 = param_18 + -1;
        if (SBORROW8(param_18,1)) {
                    /* WARNING: Does not return */
          pcVar25 = (code *)SoftwareBreakpoint(1,0x1009261c0);
          (*pcVar25)();
        }
        lVar18 = param_19 + uVar21;
        if (SCARRY8(param_19,uVar21)) {
                    /* WARNING: Does not return */
          pcVar25 = (code *)SoftwareBreakpoint(1,0x1009261c4);
          (*pcVar25)();
        }
        uVar21 = param_8;
        if ((lVar5 < 2) && ((lVar5 != 1 || (uVar21 = param_7, (long)param_7 < 1)))) {
          FUN_10090d0b8(0,0,param_4);
          FUN_100308538(uVar24,cVar1);
        }
        else {
          if (param_12 == '\x01') {
            uVar22 = 1;
            lVar23 = param_11;
          }
          else {
            lVar23 = param_11 + lVar18;
            if (SCARRY8(param_11,lVar18)) {
                    /* WARNING: Does not return */
              pcVar25 = (code *)SoftwareBreakpoint(1,0x1009261c8);
              (*pcVar25)();
            }
            uVar22 = 0;
          }
          puVar12 = param_5;
          _swift_getObjectType();
          if ((long)uVar21 < 1) {
            puVar13 = puVar12;
            FUN_1006116e8();
            uVar26 = *puVar13;
            local_88 = *(undefined4 *)(puVar13 + 2);
            local_84 = *(undefined2 *)((long)puVar13 + 0x14);
            local_82 = *(undefined *)((long)puVar13 + 0x16);
            local_90 = puVar13[1];
            local_98 = uVar26;
            _swift_retain(uVar26);
            local_100 = &local_98;
            FUN_10063dc68(local_100,puVar12,&DAT_100eeaaa8,param_6);
            _swift_release(uVar26);
          }
          else if (uVar21 >> 0x20 == 0) {
            puVar10 = &DAT_100f18758;
            _swift_allocObject(&DAT_100f18758,0x58,7);
            *(long *)(puVar10 + 0x10) = param_9;
            *(undefined8 *)(puVar10 + 0x18) = param_10;
            *(long *)(puVar10 + 0x20) = lVar23;
            puVar10[0x28] = uVar22;
            *(ulong *)(puVar10 + 0x30) = uVar21;
            *(undefined8 *)(puVar10 + 0x38) = param_14;
            *(undefined8 *)(puVar10 + 0x40) = param_15;
            *(undefined8 *)(puVar10 + 0x48) = param_16;
            *(undefined8 *)(puVar10 + 0x50) = param_17;
            FUN_1008f68cc(puVar12,&DAT_100eeaaa8,param_6);
            _swift_retain(param_9);
            _swift_retain(param_10);
            _swift_retain(puVar12);
            FUN_100914f44(0,1,param_9,puVar12,FUN_10092d308,puVar10);
            _swift_release(puVar10);
            _swift_release(puVar12);
            local_100 = puVar12;
          }
          else {
            local_98 = 0;
            local_90 = 0xe000000000000000;
            Swift::_StringGuts::grow(0x44,_Var17);
            SVar27.bridgeObject = (void *)0xeb00000000282074;
            SVar27.str = (char *)0x6e756f4365747962;
            SVar29.bridgeObject = pvVar20;
            SVar29.str = pcVar19;
            Swift::String::append(SVar27,SVar29);
            local_b0 = uVar21;
            SVar27 = Swift::CustomStringConvertible::get_description();
            SVar30.bridgeObject = pvVar20;
            SVar30.str = pcVar19;
            Swift::String::append(SVar27,SVar30);
            _swift_bridgeObjectRelease(SVar27.bridgeObject);
            puVar13 = (undefined8 *)0xd000000000000037;
            SVar28.bridgeObject = (void *)0x8000000100db4b30;
            SVar28.str = (char *)0xd000000000000037;
            SVar31.bridgeObject = pvVar20;
            SVar31.str = pcVar19;
            Swift::String::append(SVar28,SVar31);
            uVar4 = local_90;
            uVar26 = local_98;
            FUN_1008d5300();
            puVar12 = (undefined8 *)&DAT_100ef11e8;
            _swift_allocError(&DAT_100ef11e8,puVar13,0,0);
            *puVar13 = uVar26;
            puVar13[1] = uVar4;
            *(undefined4 *)(puVar13 + 2) = 0x16;
            local_100 = puVar12;
            FUN_10063dd74();
            _swift_errorRelease(puVar12);
          }
          puVar10 = &DAT_100f186e0;
          _swift_allocObject(&DAT_100f186e0,0x98,7);
          *(code **)(puVar10 + 0x10) = param_2;
          *(undefined8 *)(puVar10 + 0x18) = param_3;
          *(long *)(puVar10 + 0x20) = param_4;
          *(undefined8 **)(puVar10 + 0x28) = param_5;
          *(undefined8 *)(puVar10 + 0x30) = param_6;
          *(ulong *)(puVar10 + 0x38) = param_7;
          *(ulong *)(puVar10 + 0x40) = param_8;
          *(long *)(puVar10 + 0x48) = param_9;
          *(undefined8 *)(puVar10 + 0x50) = param_10;
          *(long *)(puVar10 + 0x58) = param_11;
          puVar10[0x60] = param_12;
          *(undefined8 *)(puVar10 + 0x68) = param_14;
          *(undefined8 *)(puVar10 + 0x70) = param_15;
          *(undefined8 *)(puVar10 + 0x78) = param_16;
          *(undefined8 *)(puVar10 + 0x80) = param_17;
          *(long *)(puVar10 + 0x88) = lVar5;
          *(long *)(puVar10 + 0x90) = lVar18;
          puVar14 = &DAT_100f18708;
          _swift_allocObject(&DAT_100f18708,0x28,7);
          *(code **)(puVar14 + 0x10) = thunk_FUN_10092d0a0;
          *(undefined **)(puVar14 + 0x18) = puVar10;
          *(undefined8 **)(puVar14 + 0x20) = local_100;
          uVar21 = local_100[5];
          lVar5 = local_100[6];
          _swift_getObjectType();
          pcVar25 = *(code **)(lVar5 + 0x10);
          _swift_unknownObjectRetain_n(param_5,2);
          _swift_retain_n(param_9,2);
          _swift_retain_n(param_10,2);
          _swift_retain_n(param_3,2);
          _swift_retain_n(param_4,2);
          _swift_retain_n(puVar10,2);
          _swift_retain_n(local_100,2);
          uVar9 = uVar21;
          (*pcVar25)(uVar21,lVar5);
          if ((uVar9 & 1) == 0) {
            puVar15 = &DAT_100f18730;
            _swift_allocObject(&DAT_100f18730,0x28,7);
            *(undefined8 **)(puVar15 + 0x10) = local_100;
            *(code **)(puVar15 + 0x18) = thunk_FUN_10092be10;
            *(undefined **)(puVar15 + 0x20) = puVar14;
            pcVar25 = *(code **)(lVar5 + 0x18);
            _swift_retain(local_100);
            _swift_retain(puVar14);
            (*pcVar25)(thunk_FUN_10092be1c,puVar15,uVar21,lVar5);
            _swift_release(param_3);
            _swift_release(puVar15);
            _swift_release(local_100);
            _swift_release_n(puVar10,2);
            _swift_release(puVar14);
          }
          else {
            _swift_beginAccess(local_100 + 2,&local_98,0,0);
            if ((ulong)local_100[4] >> 0x38 < 0xff) {
              local_b0 = local_100[2];
              uStack_a8 = local_100[3];
              local_a0 = local_100[4];
              FUN_1008fa5cc();
              FUN_100925494(&local_b0,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                            param_9,param_10,param_11,param_12);
              FUN_10090ef88(local_b0,uStack_a8,local_a0 & 0xffffffffffffff,local_a0._7_1_);
            }
            else {
              _swift_beginAccess(local_100 + 7,&local_b0,0x21,0);
              FUN_10064967c(thunk_FUN_10092be10,puVar14);
              _swift_endAccess(&local_b0);
            }
            FUN_1006486f8(0,0,0);
            FUN_100004550(0,0);
            _swift_release(param_3);
            _swift_release(local_100);
            _swift_release_n(puVar10,2);
            _swift_release(puVar14);
            _swift_bridgeObjectRelease(0);
          }
          _swift_release(local_100);
          _swift_release(param_10);
          _swift_release(param_9);
          _swift_unknownObjectRelease(param_5);
          _swift_release(param_4);
          FUN_100308538(uVar24,cVar1);
        }
      }
      FUN_1006486f8(0,0,0);
      FUN_100004550(0,0);
      _swift_unknownObjectRelease(param_5);
      _swift_release(puVar6);
      _swift_release_n(puVar8,2);
      _swift_release(puVar11);
      _swift_bridgeObjectRelease(0);
    }
    _swift_release(puVar6);
    _swift_release(param_4);
    _swift_release(param_3);
    _swift_release(param_10);
  }
  _swift_release(param_9);
  return;
}



/* Address: 0x1009261c8 | FUN_1009261c8 */

void FUN_1009261c8(long param_1)

{
  char cVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  long unaff_x20;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  if (param_1 != 0) {
    puVar2 = &DAT_100f184b0;
    _swift_allocObject(&DAT_100f184b0,0x28,7);
    *(code **)(puVar2 + 0x10) = thunk_FUN_10092be50;
    *(long *)(puVar2 + 0x18) = param_1;
    *(long *)(puVar2 + 0x20) = unaff_x20;
    uVar5 = *(ulong *)(unaff_x20 + 0x20);
    lVar6 = *(long *)(unaff_x20 + 0x28);
    _swift_getObjectType();
    pcVar8 = *(code **)(lVar6 + 0x10);
    _swift_retain_n(param_1,5);
    _swift_retain_n();
    uVar3 = uVar5;
    (*pcVar8)(uVar5,lVar6);
    if ((uVar3 & 1) == 0) {
      _swift_release(param_1);
      puVar4 = &DAT_100f184d8;
      _swift_allocObject(&DAT_100f184d8,0x28,7);
      *(long *)(puVar4 + 0x10) = unaff_x20;
      *(code **)(puVar4 + 0x18) = thunk_FUN_10065310c;
      *(undefined **)(puVar4 + 0x20) = puVar2;
      pcVar8 = *(code **)(lVar6 + 0x18);
      _swift_retain();
      _swift_retain(puVar2);
      (*pcVar8)(thunk_FUN_1008db360,puVar4,uVar5,lVar6);
      _swift_release(puVar4);
      _swift_release();
      _swift_release_n(param_1,3);
      _swift_release(puVar2);
      return;
    }
    _swift_beginAccess(unaff_x20 + 0x10,auStack_68,0,0);
    cVar1 = *(char *)(unaff_x20 + 0x18);
    if (cVar1 == -1) {
      _swift_release(param_1);
      _swift_beginAccess(unaff_x20 + 0x30,auStack_80,0x21,0);
      FUN_10064967c(thunk_FUN_10065310c,puVar2);
      _swift_endAccess(auStack_80);
    }
    else {
      uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
      FUN_1005dfeb4(uVar7,cVar1);
      FUN_10092b43c(uVar7,cVar1,param_1);
      _swift_release(param_1);
      FUN_100308538(uVar7,cVar1);
    }
    FUN_1006486f8(0,0,0);
    FUN_100004550(0,0);
    _swift_release();
    _swift_release_n(param_1,3);
    _swift_release(puVar2);
    _swift_bridgeObjectRelease(0);
  }
  return;
}



/* Address: 0x1009263dc | FUN_1009263dc */

void FUN_1009263dc(undefined8 *param_1,undefined8 *param_2,char *param_3,void *param_4,void *param_5
                  ,undefined8 param_6,undefined8 param_7,long param_8,char param_9,
                  undefined4 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,
                  undefined8 param_14,undefined8 param_15,undefined8 param_16,long param_17,
                  long param_18,long param_19,long param_20)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  long lVar10;
  _StringGuts _Var11;
  char *pcVar12;
  void *pvVar13;
  long lVar14;
  undefined8 uVar15;
  code *pcVar16;
  void *pvVar17;
  undefined1 uVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  void *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined2 local_6c;
  undefined1 local_6a;
  
  if (*(char *)(param_1 + 1) == '\x01') {
    uVar15 = *param_1;
    uVar7 = *(ulong *)(param_17 + 0x20);
    lVar1 = *(long *)(param_17 + 0x28);
    _swift_getObjectType();
    uVar8 = uVar7;
    lVar10 = lVar1;
    (**(code **)(lVar1 + 0x10))();
    if ((uVar8 & 1) != 0) {
      FUN_1005de8f4(uVar15);
      FUN_1006486f8();
      FUN_100004550(uVar15,lVar10);
      _swift_bridgeObjectRelease(param_3);
      return;
    }
    puVar4 = &DAT_100f18500;
    _swift_allocObject(&DAT_100f18500,0x20,7);
    *(long *)(puVar4 + 0x10) = param_17;
    *(undefined8 *)(puVar4 + 0x18) = uVar15;
    pcVar16 = *(code **)(lVar1 + 0x18);
    _swift_retain(param_17);
    FUN_100308524(uVar15,1);
    (*pcVar16)(thunk_FUN_1005dfd68,puVar4,uVar7,lVar1);
    _swift_release(puVar4);
    return;
  }
  lVar1 = param_18 + -1;
  if (SBORROW8(param_18,1)) {
                    /* WARNING: Does not return */
    pcVar16 = (code *)SoftwareBreakpoint(1,0x100926b00);
    (*pcVar16)();
  }
  lVar10 = param_19 + param_20;
  if (!SCARRY8(param_19,param_20)) {
    pvVar17 = param_5;
    if ((lVar1 < 2) && ((lVar1 != 1 || (pvVar17 = param_4, (long)param_4 < 1)))) {
      FUN_10090d0b8(0,0,param_17);
      return;
    }
    if (param_9 == '\x01') {
      uVar18 = 1;
      lVar14 = param_8;
    }
    else {
      lVar14 = param_8 + lVar10;
      if (SCARRY8(param_8,lVar10)) {
                    /* WARNING: Does not return */
        pcVar16 = (code *)SoftwareBreakpoint(1,0x100926b08);
        (*pcVar16)();
      }
      uVar18 = 0;
    }
    puVar3 = param_2;
    _Var11.unknown = (undefined *)param_2;
    pcVar12 = param_3;
    pvVar13 = param_4;
    _swift_getObjectType();
    if ((long)pvVar17 < 1) {
      puVar5 = puVar3;
      FUN_1006116e8();
      uVar15 = *puVar5;
      local_70 = *(undefined4 *)(puVar5 + 2);
      local_6c = *(undefined2 *)((long)puVar5 + 0x14);
      local_6a = *(undefined *)((long)puVar5 + 0x16);
      local_78 = puVar5[1];
      local_80 = uVar15;
      _swift_retain(uVar15);
      puVar5 = &local_80;
      FUN_10063dc68(puVar5,puVar3,&DAT_100eeaaa8,param_3);
      _swift_release(uVar15);
    }
    else if ((ulong)pvVar17 >> 0x20 == 0) {
      puVar4 = &DAT_100f185a0;
      _swift_allocObject(&DAT_100f185a0,0x58,7);
      *(undefined8 *)(puVar4 + 0x10) = param_6;
      *(undefined8 *)(puVar4 + 0x18) = param_7;
      *(long *)(puVar4 + 0x20) = lVar14;
      puVar4[0x28] = uVar18;
      *(void **)(puVar4 + 0x30) = pvVar17;
      *(undefined8 *)(puVar4 + 0x38) = param_11;
      *(undefined8 *)(puVar4 + 0x40) = param_12;
      *(undefined8 *)(puVar4 + 0x48) = param_13;
      *(undefined8 *)(puVar4 + 0x50) = param_14;
      FUN_1008f68cc(puVar3,&DAT_100eeaaa8,param_3);
      _swift_retain();
      _swift_retain(puVar4);
      _swift_retain(param_6);
      _swift_retain(param_7);
      FUN_100914f44(0,1,param_6,puVar3,FUN_10092d308,puVar4);
      _swift_release(puVar3);
      _swift_release_n(puVar4,2);
      puVar5 = puVar3;
    }
    else {
      local_80 = 0;
      local_78 = 0xe000000000000000;
      Swift::_StringGuts::grow(0x44,_Var11);
      SVar19.bridgeObject = (void *)0xeb00000000282074;
      SVar19.str = (char *)0x6e756f4365747962;
      SVar21.bridgeObject = pvVar13;
      SVar21.str = pcVar12;
      Swift::String::append(SVar19,SVar21);
      local_98 = pvVar17;
      SVar19 = Swift::CustomStringConvertible::get_description();
      SVar22.bridgeObject = pvVar13;
      SVar22.str = pcVar12;
      Swift::String::append(SVar19,SVar22);
      _swift_bridgeObjectRelease(SVar19.bridgeObject);
      puVar5 = (undefined8 *)0xd000000000000037;
      SVar20.bridgeObject = (void *)0x8000000100db4b30;
      SVar20.str = (char *)0xd000000000000037;
      SVar23.bridgeObject = pvVar13;
      SVar23.str = pcVar12;
      Swift::String::append(SVar20,SVar23);
      uVar2 = local_78;
      uVar15 = local_80;
      FUN_1008d5300();
      puVar3 = (undefined8 *)&DAT_100ef11e8;
      _swift_allocError(&DAT_100ef11e8,puVar5,0,0);
      *puVar5 = uVar15;
      puVar5[1] = uVar2;
      *(undefined4 *)(puVar5 + 2) = 0x16;
      puVar5 = puVar3;
      FUN_10063dd74();
      _swift_errorRelease(puVar3);
    }
    puVar4 = &DAT_100f18528;
    _swift_allocObject(&DAT_100f18528,0x98,7);
    *(undefined8 *)(puVar4 + 0x10) = param_15;
    *(undefined8 *)(puVar4 + 0x18) = param_16;
    *(long *)(puVar4 + 0x20) = param_17;
    *(undefined8 **)(puVar4 + 0x28) = param_2;
    *(char **)(puVar4 + 0x30) = param_3;
    *(void **)(puVar4 + 0x38) = param_4;
    *(void **)(puVar4 + 0x40) = param_5;
    *(undefined8 *)(puVar4 + 0x48) = param_6;
    *(undefined8 *)(puVar4 + 0x50) = param_7;
    *(long *)(puVar4 + 0x58) = param_8;
    puVar4[0x60] = param_9;
    *(undefined8 *)(puVar4 + 0x68) = param_11;
    *(undefined8 *)(puVar4 + 0x70) = param_12;
    *(undefined8 *)(puVar4 + 0x78) = param_13;
    *(undefined8 *)(puVar4 + 0x80) = param_14;
    *(long *)(puVar4 + 0x88) = lVar1;
    *(long *)(puVar4 + 0x90) = lVar10;
    puVar6 = &DAT_100f18550;
    _swift_allocObject(&DAT_100f18550,0x28,7);
    *(code **)(puVar6 + 0x10) = thunk_FUN_10092d0a0;
    *(undefined **)(puVar6 + 0x18) = puVar4;
    *(undefined8 **)(puVar6 + 0x20) = puVar5;
    uVar7 = puVar5[5];
    lVar1 = puVar5[6];
    _swift_getObjectType();
    pcVar16 = *(code **)(lVar1 + 0x10);
    _swift_retain_n(param_6,2);
    _swift_retain_n(param_7,2);
    _swift_retain_n(param_16,2);
    _swift_retain_n(param_17,2);
    _swift_unknownObjectRetain_n(param_2,2);
    _swift_retain_n(puVar4,2);
    _swift_retain_n(puVar5,2);
    uVar8 = uVar7;
    (*pcVar16)(uVar7,lVar1);
    if ((uVar8 & 1) == 0) {
      puVar9 = &DAT_100f18578;
      _swift_allocObject(&DAT_100f18578,0x28,7);
      *(undefined8 **)(puVar9 + 0x10) = puVar5;
      *(code **)(puVar9 + 0x18) = thunk_FUN_10092be10;
      *(undefined **)(puVar9 + 0x20) = puVar6;
      pcVar16 = *(code **)(lVar1 + 0x18);
      _swift_retain(puVar5);
      _swift_retain(puVar6);
      (*pcVar16)(thunk_FUN_10092be1c,puVar9,uVar7,lVar1);
      _swift_release(param_16);
      _swift_release(puVar9);
      _swift_release(puVar5);
      _swift_release_n(puVar4,2);
      _swift_release(puVar6);
    }
    else {
      _swift_beginAccess(puVar5 + 2,&local_80,0,0);
      if ((ulong)puVar5[4] >> 0x38 < 0xff) {
        local_98 = (void *)puVar5[2];
        uStack_90 = puVar5[3];
        local_88 = puVar5[4];
        FUN_1008fa5cc();
        FUN_100925494(&local_98,param_15,param_16,param_17,param_2,param_3,param_4,param_5,param_6,
                      param_7,param_8,param_9);
        FUN_10090ef88(local_98,uStack_90,local_88 & 0xffffffffffffff,local_88._7_1_);
      }
      else {
        _swift_beginAccess(puVar5 + 7,&local_98,0x21,0);
        FUN_10064967c(thunk_FUN_10092be10,puVar6);
        _swift_endAccess(&local_98);
      }
      FUN_1006486f8(0,0,0);
      FUN_100004550(0,0);
      _swift_release(param_16);
      _swift_release(puVar5);
      _swift_release_n(puVar4,2);
      _swift_release(puVar6);
      _swift_bridgeObjectRelease(0);
    }
    _swift_release(puVar5);
    _swift_release(param_7);
    _swift_release(param_6);
    _swift_unknownObjectRelease(param_2);
    _swift_release(param_17);
    return;
  }
                    /* WARNING: Does not return */
  pcVar16 = (code *)SoftwareBreakpoint(1,0x100926b04);
  (*pcVar16)();
}



/* Address: 0x100926b08 | FUN_100926b08 */

undefined8 *
FUN_100926b08(ulong param_1,_StringGuts param_2,ulong param_3,void *param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7,undefined8 *param_8,undefined8 param_9,
             undefined8 param_10)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  char *pcVar7;
  void *pvVar8;
  undefined8 uVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined2 local_64;
  undefined1 local_62;
  
  uVar2 = param_1;
  pvVar8 = param_4;
  FUN_100654dbc(param_1,param_2.unknown,param_3 & 0xffffffffffffff);
  pcVar7 = (char *)(param_3 & 0xffffffffffffff);
  uVar3 = param_1;
  FUN_100611db0();
  if ((long)uVar2 < 1) {
    _swift_getObjectType();
    puVar5 = param_8;
    FUN_1006116e8();
    uVar9 = *puVar5;
    local_68 = *(undefined4 *)(puVar5 + 2);
    local_64 = *(undefined2 *)((long)puVar5 + 0x14);
    local_62 = *(undefined *)((long)puVar5 + 0x16);
    local_70 = puVar5[1];
    local_78 = uVar9;
    _swift_retain(uVar9);
    puVar5 = &local_78;
    FUN_10063dc68(puVar5,param_8,&DAT_100eeaaa8,param_9);
    _swift_release(uVar9);
  }
  else if (uVar2 >> 0x20 == 0) {
    puVar4 = &DAT_100f17c40;
    _swift_allocObject(&DAT_100f17c40,0x58,7);
    *(undefined8 *)(puVar4 + 0x10) = param_10;
    *(ulong *)(puVar4 + 0x18) = param_1;
    *(ulong *)(puVar4 + 0x20) = uVar3;
    puVar4[0x28] = 0;
    *(ulong *)(puVar4 + 0x30) = uVar2;
    *(void **)(puVar4 + 0x38) = param_4;
    *(undefined8 *)(puVar4 + 0x40) = param_5;
    *(undefined8 *)(puVar4 + 0x48) = param_6;
    *(undefined8 *)(puVar4 + 0x50) = param_7;
    _swift_getObjectType(param_8);
    FUN_1008f68cc();
    _swift_retain();
    _swift_retain(puVar4);
    _swift_retain(param_10);
    _swift_retain(param_1);
    FUN_100914f44(0,1,param_10,param_8,FUN_10092d308,puVar4);
    _swift_release(param_8);
    _swift_release_n(puVar4,2);
    puVar5 = param_8;
  }
  else {
    _swift_getObjectType(param_8);
    local_78 = 0;
    local_70 = 0xe000000000000000;
    Swift::_StringGuts::grow(0x44,param_2);
    SVar10.bridgeObject = (void *)0xeb00000000282074;
    SVar10.str = (char *)0x6e756f4365747962;
    SVar12.bridgeObject = pvVar8;
    SVar12.str = pcVar7;
    Swift::String::append(SVar10,SVar12);
    SVar10 = Swift::CustomStringConvertible::get_description();
    SVar13.bridgeObject = pvVar8;
    SVar13.str = pcVar7;
    Swift::String::append(SVar10,SVar13);
    _swift_bridgeObjectRelease(SVar10.bridgeObject);
    puVar5 = (undefined8 *)0xd000000000000037;
    SVar11.bridgeObject = (void *)0x8000000100db4b30;
    SVar11.str = (char *)0xd000000000000037;
    SVar14.bridgeObject = pvVar8;
    SVar14.str = pcVar7;
    Swift::String::append(SVar11,SVar14);
    uVar1 = local_70;
    uVar9 = local_78;
    FUN_1008d5300();
    puVar6 = (undefined8 *)&DAT_100ef11e8;
    _swift_allocError(&DAT_100ef11e8,puVar5,0,0);
    *puVar5 = uVar9;
    puVar5[1] = uVar1;
    *(undefined4 *)(puVar5 + 2) = 0x16;
    puVar5 = puVar6;
    FUN_10063dd74();
    _swift_errorRelease(puVar6);
  }
  return puVar5;
}



/* Address: 0x100926dac | FUN_100926dac */

undefined8 *
FUN_100926dac(undefined8 param_1,_StringGuts param_2,char *param_3,void *param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7,undefined8 *param_8,undefined8 param_9,
             undefined8 param_10)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  String SVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined2 local_64;
  undefined1 local_62;
  
  if ((long)param_3 < 1) {
    _swift_getObjectType();
    puVar3 = param_8;
    FUN_1006116e8();
    uVar5 = *puVar3;
    local_68 = *(undefined4 *)(puVar3 + 2);
    local_64 = *(undefined2 *)((long)puVar3 + 0x14);
    local_62 = *(undefined *)((long)puVar3 + 0x16);
    local_70 = puVar3[1];
    local_78 = uVar5;
    _swift_retain(uVar5);
    puVar3 = &local_78;
    FUN_10063dc68(puVar3,param_8,&DAT_100eeaaa8,param_9);
    _swift_release(uVar5);
  }
  else if ((ulong)param_3 >> 0x20 == 0) {
    puVar2 = &DAT_100f17c68;
    _swift_allocObject(&DAT_100f17c68,0x58,7);
    *(undefined8 *)(puVar2 + 0x10) = param_10;
    *(undefined8 *)(puVar2 + 0x18) = param_1;
    *(undefined **)(puVar2 + 0x20) = param_2.unknown;
    puVar2[0x28] = 0;
    *(char **)(puVar2 + 0x30) = param_3;
    *(void **)(puVar2 + 0x38) = param_4;
    *(undefined8 *)(puVar2 + 0x40) = param_5;
    *(undefined8 *)(puVar2 + 0x48) = param_6;
    *(undefined8 *)(puVar2 + 0x50) = param_7;
    _swift_getObjectType(param_8);
    FUN_1008f68cc();
    _swift_retain();
    _swift_retain(puVar2);
    _swift_retain(param_10);
    _swift_retain(param_1);
    FUN_100914f44(0,1,param_10,param_8,FUN_10092d308,puVar2);
    _swift_release(param_8);
    _swift_release_n(puVar2,2);
    puVar3 = param_8;
  }
  else {
    _swift_getObjectType(param_8);
    local_78 = 0;
    local_70 = 0xe000000000000000;
    Swift::_StringGuts::grow(0x44,param_2);
    SVar6.bridgeObject = (void *)0xeb00000000282074;
    SVar6.str = (char *)0x6e756f4365747962;
    SVar8.bridgeObject = param_4;
    SVar8.str = param_3;
    Swift::String::append(SVar6,SVar8);
    SVar6 = Swift::CustomStringConvertible::get_description();
    SVar9.bridgeObject = param_4;
    SVar9.str = param_3;
    Swift::String::append(SVar6,SVar9);
    _swift_bridgeObjectRelease(SVar6.bridgeObject);
    puVar3 = (undefined8 *)0xd000000000000037;
    SVar7.bridgeObject = (void *)0x8000000100db4b30;
    SVar7.str = (char *)0xd000000000000037;
    SVar10.bridgeObject = param_4;
    SVar10.str = param_3;
    Swift::String::append(SVar7,SVar10);
    uVar1 = local_70;
    uVar5 = local_78;
    FUN_1008d5300();
    puVar4 = (undefined8 *)&DAT_100ef11e8;
    _swift_allocError(&DAT_100ef11e8,puVar3,0,0);
    *puVar3 = uVar5;
    puVar3[1] = uVar1;
    *(undefined4 *)(puVar3 + 2) = 0x16;
    puVar3 = puVar4;
    FUN_10063dd74();
    _swift_errorRelease(puVar4);
  }
  return puVar3;
}



/* Address: 0x100927030 | FUN_100927030 */

undefined8 *
FUN_100927030(undefined8 param_1,_StringGuts param_2,char *param_3,void *param_4,undefined8 param_5,
             undefined8 param_6,undefined8 *param_7,undefined8 param_8,undefined8 param_9)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  String SVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined2 local_64;
  undefined1 local_62;
  
  if ((long)param_2.unknown < 1) {
    _swift_getObjectType();
    puVar3 = param_7;
    FUN_1006116e8();
    uVar5 = *puVar3;
    local_68 = *(undefined4 *)(puVar3 + 2);
    local_64 = *(undefined2 *)((long)puVar3 + 0x14);
    local_62 = *(undefined *)((long)puVar3 + 0x16);
    local_70 = puVar3[1];
    local_78 = uVar5;
    _swift_retain(uVar5);
    puVar3 = &local_78;
    FUN_10063dc68(puVar3,param_7,&DAT_100eeaaa8,param_8);
    _swift_release(uVar5);
  }
  else if ((ulong)param_2.unknown >> 0x20 == 0) {
    puVar2 = &DAT_100f17c90;
    _swift_allocObject(&DAT_100f17c90,0x58,7);
    *(undefined8 *)(puVar2 + 0x10) = param_9;
    *(undefined8 *)(puVar2 + 0x18) = param_1;
    *(undefined8 *)(puVar2 + 0x20) = 0;
    puVar2[0x28] = 1;
    *(undefined **)(puVar2 + 0x30) = param_2.unknown;
    *(char **)(puVar2 + 0x38) = param_3;
    *(void **)(puVar2 + 0x40) = param_4;
    *(undefined8 *)(puVar2 + 0x48) = param_5;
    *(undefined8 *)(puVar2 + 0x50) = param_6;
    _swift_getObjectType(param_7);
    FUN_1008f68cc();
    _swift_retain();
    _swift_retain(puVar2);
    _swift_retain(param_9);
    _swift_retain(param_1);
    FUN_100914f44(0,1,param_9,param_7,FUN_10092d308,puVar2);
    _swift_release(param_7);
    _swift_release_n(puVar2,2);
    puVar3 = param_7;
  }
  else {
    _swift_getObjectType(param_7);
    local_78 = 0;
    local_70 = 0xe000000000000000;
    Swift::_StringGuts::grow(0x44,param_2);
    SVar6.bridgeObject = (void *)0xeb00000000282074;
    SVar6.str = (char *)0x6e756f4365747962;
    SVar8.bridgeObject = param_4;
    SVar8.str = param_3;
    Swift::String::append(SVar6,SVar8);
    SVar6 = Swift::CustomStringConvertible::get_description();
    SVar9.bridgeObject = param_4;
    SVar9.str = param_3;
    Swift::String::append(SVar6,SVar9);
    _swift_bridgeObjectRelease(SVar6.bridgeObject);
    puVar3 = (undefined8 *)0xd000000000000037;
    SVar7.bridgeObject = (void *)0x8000000100db4b30;
    SVar7.str = (char *)0xd000000000000037;
    SVar10.bridgeObject = param_4;
    SVar10.str = param_3;
    Swift::String::append(SVar7,SVar10);
    uVar1 = local_70;
    uVar5 = local_78;
    FUN_1008d5300();
    puVar4 = (undefined8 *)&DAT_100ef11e8;
    _swift_allocError(&DAT_100ef11e8,puVar3,0,0);
    *puVar3 = uVar5;
    puVar3[1] = uVar1;
    *(undefined4 *)(puVar3 + 2) = 0x16;
    puVar3 = puVar4;
    FUN_10063dd74();
    _swift_errorRelease(puVar4);
  }
  return puVar3;
}



/* Address: 0x1009272b0 | FUN_1009272b0 */

void FUN_1009272b0(undefined8 *param_1,undefined8 param_2,long param_3,char param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,long *param_8)

{
  code *pcVar1;
  undefined1 uVar2;
  long unaff_x21;
  
  if (param_4 == '\x01') {
    if (param_5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100927324);
      (*pcVar1)();
    }
    FUN_10095de74(param_2,param_5,param_7);
    uVar2 = (undefined1)param_5;
  }
  else {
    if (param_5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100927328);
      (*pcVar1)();
    }
    if (SCARRY8(param_3,*param_8)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100927320);
      (*pcVar1)();
    }
    FUN_10095e630(param_2,param_5,param_7,param_3 + *param_8);
    uVar2 = (undefined1)param_5;
  }
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    *(undefined1 *)(param_1 + 1) = uVar2;
  }
  return;
}



/* Address: 0x100927328 | FUN_100927328 */

undefined8
FUN_100927328(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100f17cb8;
  _swift_allocObject(&DAT_100f17cb8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  _swift_getObjectType(param_3);
  FUN_1008f68cc();
  _swift_retain();
  _swift_retain(puVar1);
  _swift_retain(param_1);
  FUN_100914f7c(0,1,param_5,param_3,FUN_10092bec4,puVar1);
  _swift_release(param_3);
  _swift_release_n(puVar1,2);
  return param_3;
}



/* Address: 0x1009273f0 | FUN_1009273f0 */

undefined8
FUN_1009273f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _swift_getObjectType(param_2);
  FUN_1008f68cc();
  _swift_retain();
  _swift_retain_n(param_1,2);
  FUN_100914fb4(0,1,param_4,param_2,FUN_10092bee0,param_1);
  _swift_release(param_2);
  _swift_release_n(param_1,2);
  return param_2;
}



/* Address: 0x100927488 | FUN_100927488 */

void FUN_100927488(void)

{
  FUN_100928e20();
  return;
}



/* Address: 0x10092749c | FUN_10092749c */

void FUN_10092749c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  
  iVar3 = (int)((ulong)param_3 >> 0x20);
  uVar1 = iVar3 - (int)param_3;
  if (uVar1 == 0) {
    _swift_getObjectType(param_5);
    FUN_10063dc68();
  }
  else {
    puVar2 = &DAT_100f17ce0;
    _swift_allocObject(&DAT_100f17ce0,0x4f,7);
    *(undefined8 *)(puVar2 + 0x10) = param_7;
    *(undefined8 *)(puVar2 + 0x18) = param_1;
    *(ulong *)(puVar2 + 0x20) = (ulong)uVar1;
    *(undefined8 *)(puVar2 + 0x28) = 0;
    puVar2[0x30] = 1;
    *(undefined8 *)(puVar2 + 0x38) = param_2;
    *(int *)(puVar2 + 0x40) = (int)param_3;
    *(int *)(puVar2 + 0x44) = iVar3;
    *(int *)(puVar2 + 0x48) = (int)param_4;
    *(short *)(puVar2 + 0x4c) = (short)((ulong)param_4 >> 0x20);
    puVar2[0x4e] = (char)((ulong)param_4 >> 0x30);
    _swift_getObjectType(param_5);
    FUN_1008f68cc();
    _swift_retain();
    _swift_retain(puVar2);
    _swift_retain(param_7);
    _swift_retain(param_1);
    _swift_retain(param_2);
    FUN_100914f7c(0,1,param_7,param_5,FUN_10092bf0c,puVar2);
    _swift_release(param_5);
    _swift_release_n(puVar2,2);
  }
  return;
}



/* Address: 0x1009275f4 | FUN_1009275f4 */

void FUN_1009275f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  
  iVar3 = (int)((ulong)param_4 >> 0x20);
  uVar1 = iVar3 - (int)param_4;
  if (uVar1 == 0) {
    _swift_getObjectType(param_6);
    FUN_10063dc68();
  }
  else {
    puVar2 = &DAT_100f17d08;
    _swift_allocObject(&DAT_100f17d08,0x4f,7);
    *(undefined8 *)(puVar2 + 0x10) = param_8;
    *(undefined8 *)(puVar2 + 0x18) = param_1;
    *(ulong *)(puVar2 + 0x20) = (ulong)uVar1;
    *(undefined8 *)(puVar2 + 0x28) = param_2;
    puVar2[0x30] = 0;
    *(undefined8 *)(puVar2 + 0x38) = param_3;
    *(int *)(puVar2 + 0x40) = (int)param_4;
    *(int *)(puVar2 + 0x44) = iVar3;
    *(int *)(puVar2 + 0x48) = (int)param_5;
    *(short *)(puVar2 + 0x4c) = (short)((ulong)param_5 >> 0x20);
    puVar2[0x4e] = (char)((ulong)param_5 >> 0x30);
    _swift_getObjectType(param_6);
    FUN_1008f68cc();
    _swift_retain();
    _swift_retain(puVar2);
    _swift_retain(param_8);
    _swift_retain(param_1);
    _swift_retain(param_3);
    FUN_100914f7c(0,1,param_8,param_6,FUN_10092d31c,puVar2);
    _swift_release(param_6);
    _swift_release_n(puVar2,2);
  }
  return;
}



/* Address: 0x10092774c | FUN_10092774c */

void FUN_10092774c(undefined8 *param_1,undefined8 param_2,long param_3,char param_4,long param_5,
                  undefined8 param_6,long param_7,long *param_8)

{
  code *pcVar1;
  undefined1 uVar2;
  long lVar3;
  long unaff_x21;
  
  if (param_4 == '\x01') {
    if (param_5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1009277d4);
      (*pcVar1)();
    }
    if (SBORROW8(param_7,*param_8)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1009277c8);
      (*pcVar1)();
    }
    FUN_10095e118(param_2,param_5,param_7 - *param_8);
    uVar2 = (undefined1)param_5;
  }
  else {
    if (param_5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1009277d8);
      (*pcVar1)();
    }
    lVar3 = *param_8;
    if (SBORROW8(param_7,lVar3)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1009277cc);
      (*pcVar1)();
    }
    if (SCARRY8(param_3,lVar3)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1009277d0);
      (*pcVar1)();
    }
    FUN_10095e724(param_2,param_5,param_7 - lVar3,param_3 + lVar3);
    uVar2 = (undefined1)param_5;
  }
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    *(undefined1 *)(param_1 + 1) = uVar2;
  }
  return;
}



/* Address: 0x1009277d8 | FUN_1009277d8 */

void FUN_1009277d8(void)

{
  FUN_100927800();
  return;
}



/* Address: 0x1009277ec | FUN_1009277ec */

void FUN_1009277ec(void)

{
  FUN_100927800();
  return;
}



/* Address: 0x100927800 | FUN_100927800 */

undefined8
FUN_100927800(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  _swift_allocObject(param_6,0x20,7);
  *(undefined8 *)(param_6 + 0x10) = param_1;
  *(undefined8 *)(param_6 + 0x18) = param_2;
  _swift_getObjectType(param_3);
  puVar1 = &DAT_100fecdc8;
  FUN_1000f7830(&DAT_100fecdc8,&DAT_100c84b40);
  FUN_1008f68cc(param_3,puVar1,param_4);
  _swift_retain();
  _swift_retain(param_6);
  _swift_bridgeObjectRetain(param_2);
  FUN_100914fec(0,1,param_5,param_3,param_7,param_6);
  _swift_release(param_3);
  _swift_release_n(param_6,2);
  return param_3;
}



/* Address: 0x1009278e0 | FUN_1009278e0 */

/* WARNING: Removing unreachable block (ram,0x00010092794c) */
/* WARNING: Removing unreachable block (ram,0x00010092793c) */

void FUN_1009278e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long unaff_x21;
  
  uVar3 = (undefined4)((ulong)param_4 >> 0x20);
  uVar2 = (undefined4)param_4;
  FUN_100654ce4(0);
  _swift_bridgeObjectRetain(param_3);
  FUN_100654a5c();
  if (unaff_x21 == 0) {
    uVar1 = param_2;
    _swift_retain();
    FUN_100654e1c();
    *param_1 = param_2;
    param_1[1] = uVar1;
    param_1[2] = param_3;
    *(undefined4 *)(param_1 + 3) = uVar2;
    *(short *)((long)param_1 + 0x1c) = (short)uVar3;
    *(char *)((long)param_1 + 0x1e) = (char)((uint)uVar3 >> 0x10);
  }
  return;
}



/* Address: 0x100927998 | FUN_100927998 */

void FUN_100927998(void)

{
  FUN_1009279f8();
  return;
}



/* Address: 0x1009279c8 | FUN_1009279c8 */

void FUN_1009279c8(void)

{
  FUN_1009279f8();
  return;
}



/* Address: 0x1009279f8 | FUN_1009279f8 */

undefined8
FUN_1009279f8(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
             undefined8 param_9)

{
  undefined8 uVar1;
  
  _swift_allocObject(param_8,0x2c,7);
  *(undefined8 *)(param_8 + 0x10) = param_1;
  *(undefined8 *)(param_8 + 0x18) = param_2;
  *(undefined1 *)(param_8 + 0x20) = param_3;
  *(short *)(param_8 + 0x24) = (short)param_4;
  *(int *)(param_8 + 0x28) = (int)((ulong)param_4 >> 0x20);
  _swift_getObjectType(param_5);
  uVar1 = 0;
  FUN_100654ce4(0);
  FUN_1008f68cc(param_5,uVar1,param_6);
  _swift_retain();
  _swift_retain(param_8);
  _swift_bridgeObjectRetain(param_2);
  FUN_100915024(0,1,param_7,param_5,param_9,param_8);
  _swift_release(param_5);
  _swift_release_n(param_8,2);
  return param_5;
}



/* Address: 0x100927aec | FUN_100927aec */

undefined8
FUN_100927aec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = &DAT_100f17dd0;
  _swift_allocObject(&DAT_100f17dd0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  _swift_getObjectType(param_3);
  uVar2 = 0;
  FUN_1008d4df0(0);
  FUN_1008f68cc(param_3,uVar2,param_4);
  _swift_retain();
  _swift_retain(puVar1);
  _swift_bridgeObjectRetain(param_2);
  FUN_10091505c(0,1,param_5,param_3,FUN_10092bfc4,puVar1);
  _swift_release(param_3);
  _swift_release_n(puVar1,2);
  return param_3;
}


