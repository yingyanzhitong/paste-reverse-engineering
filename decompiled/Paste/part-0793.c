/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1008b9b84 | FUN_1008b9b84 */

void FUN_1008b9b84(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  lVar3 = *(long *)(lVar2 + 0xb0);
  if (lVar3 == 0) {
    _swift_release(*(undefined8 *)(lVar2 + 0x220));
    pcVar1 = FUN_1008b9bfc;
  }
  else {
    _swift_willThrow();
    *(long *)(lVar2 + 0x268) = lVar3;
    pcVar1 = FUN_1008b9dbc;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1008b9bfc | FUN_1008b9bfc */

void FUN_1008b9bfc(void)

{
  char cVar1;
  long *plVar2;
  UnsafeContinuation<undefined,undefined> continuation;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  long lVar7;
  String isolation;
  String function;
  
  cVar1 = *(char *)(unaff_x22 + 0x202);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x240);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x220);
  _swift_retain(uVar6);
  *(undefined8 *)(unaff_x22 + 0x1e0) = uVar5;
  *(code **)(unaff_x22 + 0x1e8) = FUN_1008c101c;
  *(undefined8 *)(unaff_x22 + 0x1f0) = uVar6;
  if (cVar1 == '\x01') {
    plVar2 = (long *)(ulong)*(uint *)(PTR__withCheckedThrowingContinuation_100eaefc8 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x270) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_1008b9df8;
    isolation.bridgeObject = (void *)0x0;
    isolation.str = (char *)(unaff_x22 + 0x138);
    Swift::_withCheckedThrowingContinuation(isolation);
    return;
  }
  *(long *)(unaff_x22 + 0xf8) = unaff_x22 + 0x198;
  *(long *)(unaff_x22 + 0xd0) = unaff_x22;
  *(code **)(unaff_x22 + 0xd8) = FUN_1008b9e64;
  continuation.unknown = (undefined *)(unaff_x22 + 0xd0);
  _swift_continuation_init(continuation.unknown,1);
  puVar3 = &DAT_100feb0e0;
  FUN_1000f7830(&DAT_100feb0e0,&DAT_100c82678);
  lVar7 = *(long *)(puVar3 + -8);
  uVar4 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar4);
  FUN_1000f7830(&DAT_100feb0c8,&DAT_100c82c50);
  function.bridgeObject = (void *)0x8000000100db44c0;
  function.str = (char *)0xd000000000000014;
  Swift::CheckedContinuation::init(continuation,function);
  FUN_1008bea94(uVar4,uVar5,FUN_1008c101c,uVar6);
  (**(code **)(lVar7 + 8))(uVar4,puVar3);
  _swift_task_dealloc(uVar4);
  _swift_continuation_await(unaff_x22 + 0xd0);
  return;
}



/* Address: 0x1008b9dbc | FUN_1008b9dbc */

void FUN_1008b9dbc(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x220));
                    /* WARNING: Could not recover jumptable at 0x0001008b9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1008b9df8 | FUN_1008b9df8 */

void FUN_1008b9df8(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x270));
  if (unaff_x20 == 0) {
    _swift_release(*(undefined8 *)(lVar2 + 0x220));
    pcVar1 = FUN_1008b9f08;
  }
  else {
    *(long *)(lVar2 + 0x278) = unaff_x20;
    pcVar1 = FUN_1008b9f34;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1008b9e64 | FUN_1008b9e64 */

void FUN_1008b9e64(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar2 = *unaff_x22;
  lVar3 = *(long *)(lVar2 + 0xf0);
  if (lVar3 == 0) {
    uVar4 = *(undefined8 *)(lVar2 + 0x1c8);
    uVar10 = *(undefined8 *)(lVar2 + 0x1a0);
    uVar9 = *(undefined8 *)(lVar2 + 0x198);
    uVar7 = *(undefined8 *)(lVar2 + 0x1b0);
    uVar5 = *(undefined8 *)(lVar2 + 0x1a8);
    uVar8 = *(undefined8 *)(lVar2 + 0x1c0);
    uVar6 = *(undefined8 *)(lVar2 + 0x1b8);
    _swift_release(*(undefined8 *)(lVar2 + 0x220));
    *(undefined8 *)(lVar2 + 0x150) = uVar7;
    *(undefined8 *)(lVar2 + 0x148) = uVar5;
    *(undefined8 *)(lVar2 + 0x160) = uVar8;
    *(undefined8 *)(lVar2 + 0x158) = uVar6;
    *(undefined8 *)(lVar2 + 0x140) = uVar10;
    *(undefined8 *)(lVar2 + 0x138) = uVar9;
    *(undefined8 *)(lVar2 + 0x168) = uVar4;
    pcVar1 = FUN_1008b9f08;
  }
  else {
    _swift_willThrow();
    *(long *)(lVar2 + 0x278) = lVar3;
    pcVar1 = FUN_1008b9f34;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1008b9f08 | FUN_1008b9f08 */

void FUN_1008b9f08(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x22;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x218);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x158);
  puVar1[1] = *(undefined8 *)(unaff_x22 + 0x140);
  *puVar1 = uVar3;
  puVar1[3] = uVar5;
  puVar1[2] = uVar4;
  puVar1[5] = uVar7;
  puVar1[4] = uVar6;
  puVar1[6] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x0001008b9f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1008b9f34 | FUN_1008b9f34 */

void FUN_1008b9f34(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x220));
  _swift_unexpectedError
            (*(undefined8 *)(unaff_x22 + 0x278),"NIOEmbedded/AsyncTestingChannel.swift",0x25,1,0x167
            );
  return;
}



/* Address: 0x1008b9f80 | FUN_1008b9f80 */

void FUN_1008b9f80(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xb0) = param_2;
  *(undefined8 *)(unaff_x22 + 0xb8) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_1;
  _swift_task_switch(FUN_1008b9f9c,0,0);
  return;
}



/* Address: 0x1008b9f9c | FUN_1008b9f9c */

void FUN_1008b9f9c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  long *plVar4;
  UnsafeContinuation<undefined,undefined> continuation;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  long unaff_x22;
  long lVar8;
  String isolation;
  String function;
  
  *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0xb8);
  *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(unaff_x22 + 0xb0);
  *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0xa8);
  bVar3 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar3 & 1) != 0) {
    plVar4 = (long *)(ulong)*(uint *)(PTR__withCheckedThrowingContinuation_100eaefc8 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xc0) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_1008ba158;
    isolation.bridgeObject = (void *)0x0;
    isolation.str = (char *)(unaff_x22 + 0x78);
    Swift::_withCheckedThrowingContinuation(isolation);
    return;
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xa8);
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x90;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_1008ba1bc;
  continuation.unknown = (undefined *)(unaff_x22 + 0x10);
  _swift_continuation_init(continuation.unknown,1);
  puVar5 = &DAT_100feb248;
  FUN_1000f7830(&DAT_100feb248,&DAT_100c828b8);
  lVar8 = *(long *)(puVar5 + -8);
  uVar6 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar6);
  FUN_1000f7830(&DAT_100feb0c8,&DAT_100c82c50);
  function.bridgeObject = (void *)0x8000000100db44c0;
  function.str = (char *)0xd000000000000014;
  Swift::CheckedContinuation::init(continuation,function);
  FUN_1008becf8(uVar6,uVar2,uVar7,uVar1);
  (**(code **)(lVar8 + 8))(uVar6,puVar5);
  _swift_task_dealloc(uVar6);
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}



/* Address: 0x1008ba158 | FUN_1008ba158 */

void FUN_1008ba158(void)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0xc0));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001008ba19c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001008ba1b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))
            (*(undefined8 *)(lVar1 + 0x78),*(undefined8 *)(lVar1 + 0x80),
             *(undefined8 *)(lVar1 + 0x88));
  return;
}



/* Address: 0x1008ba1bc | FUN_1008ba1bc */

void FUN_1008ba1bc(void)

{
  long lVar1;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  if (*(long *)(lVar1 + 0x30) != 0) {
    _swift_willThrow();
                    /* WARNING: Could not recover jumptable at 0x0001008ba20c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001008ba22c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))
            (*(undefined8 *)(lVar1 + 0x90),*(undefined8 *)(lVar1 + 0x98),
             *(undefined8 *)(lVar1 + 0xa0));
  return;
}



/* Address: 0x1008ba230 | FUN_1008ba230 */

void FUN_1008ba230(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x78) = unaff_x20;
  _swift_task_switch(FUN_1008ba248,0,0);
  return;
}



/* Address: 0x1008ba248 | FUN_1008ba248 */

void FUN_1008ba248(void)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  UnsafeContinuation<undefined,undefined> continuation;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x22;
  String isolation;
  String function;
  
  lVar2 = *(long *)(unaff_x22 + 0x78);
  uVar7 = *(undefined8 *)(lVar2 + 0x30);
  _swift_retain();
  *(undefined8 *)(unaff_x22 + 0x60) = uVar7;
  *(code **)(unaff_x22 + 0x68) = FUN_1008c27fc;
  *(long *)(unaff_x22 + 0x70) = lVar2;
  bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar1 & 1) != 0) {
    plVar3 = (long *)(ulong)*(uint *)(PTR__withCheckedThrowingContinuation_100eaefc8 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x80) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_1008ba408;
    isolation.bridgeObject = (void *)0x0;
    isolation.str = (char *)plVar3;
    Swift::_withCheckedThrowingContinuation(isolation);
    return;
  }
  uVar6 = *(undefined8 *)(unaff_x22 + 0x78);
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_1008ba474;
  continuation.unknown = (undefined *)(unaff_x22 + 0x10);
  _swift_continuation_init(continuation.unknown,1);
  puVar4 = &DAT_100feb0d8;
  FUN_1000f7830(&DAT_100feb0d8,&DAT_100c82670);
  lVar2 = *(long *)(puVar4 + -8);
  uVar5 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar5);
  FUN_1000f7830(&DAT_100feb0c8,&DAT_100c82c50);
  function.bridgeObject = (void *)0x8000000100db44c0;
  function.str = (char *)0xd000000000000014;
  Swift::CheckedContinuation::init(continuation,function);
  FUN_1008be830(uVar5,uVar7,FUN_1008c27fc,uVar6);
  (**(code **)(lVar2 + 8))(uVar5,puVar4);
  _swift_task_dealloc(uVar5);
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}



/* Address: 0x1008ba408 | FUN_1008ba408 */

void FUN_1008ba408(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x80));
  if (unaff_x20 == 0) {
    _swift_release(*(undefined8 *)(lVar2 + 0x78));
    pcVar1 = FUN_1000e5808;
  }
  else {
    *(long *)(lVar2 + 0x88) = unaff_x20;
    pcVar1 = FUN_1008ba4ec;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1008ba474 | FUN_1008ba474 */

void FUN_1008ba474(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  lVar3 = *(long *)(lVar2 + 0x30);
  if (lVar3 == 0) {
    _swift_release(*(undefined8 *)(lVar2 + 0x78));
    pcVar1 = FUN_1000e5808;
  }
  else {
    _swift_willThrow();
    *(long *)(lVar2 + 0x88) = lVar3;
    pcVar1 = FUN_1008ba4ec;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1008ba4ec | FUN_1008ba4ec */

void FUN_1008ba4ec(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x0001008ba524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1008ba528 | FUN_1008ba528 */

void FUN_1008ba528(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  undefined1 auStack_1a0 [24];
  undefined1 auStack_188 [24];
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined2 local_e0;
  undefined6 uStack_de;
  long local_d8;
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  _swift_beginAccess(param_2 + 0x48,auStack_80,0,0);
  lVar14 = *(long *)(param_2 + 0x48);
  if (lVar14 == 0) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x1008ba834);
    (*pcVar7)();
  }
  _swift_beginAccess(lVar14 + 0x58,auStack_98,0,0);
  lVar1 = *(long *)(lVar14 + 0x60);
  lVar5 = *(long *)(lVar14 + 0x68);
  if (((lVar1 == lVar5) &&
      (_swift_beginAccess(lVar14 + 0xa0,auStack_188,0,0),
      *(long *)(lVar14 + 0xa8) == *(long *)(lVar14 + 0xb0))) &&
     (_swift_beginAccess(lVar14 + 0x78,auStack_1a0,0,0),
     *(long *)(lVar14 + 0x80) == *(long *)(lVar14 + 0x88))) {
    param_1[6] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    return;
  }
  _swift_beginAccess(lVar14 + 0xa0,auStack_b0,0,0);
  uVar2 = *(undefined8 *)(lVar14 + 0xa0);
  uVar6 = *(undefined8 *)(lVar14 + 0xa8);
  uVar8 = *(undefined8 *)(lVar14 + 0xb0);
  uVar9 = *(undefined8 *)(lVar14 + 0x58);
  _swift_beginAccess(lVar14 + 0x78,auStack_c8,0,0);
  puVar10 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar3 = *(long *)(lVar14 + 0x78);
  uVar13 = *(ulong *)(lVar14 + 0x80);
  uVar12 = *(long *)(lVar14 + 0x88) - uVar13;
  if (*(long *)(lVar14 + 0x88) < (long)uVar13) {
    uVar12 = uVar12 + *(long *)(lVar3 + 0x10);
  }
  if (uVar12 == 0) {
    _swift_retain(uVar2);
    _swift_retain();
    puVar10 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    _swift_retain(uVar2);
    _swift_retain(uVar9);
    _swift_retain(lVar14);
    _swift_retain(lVar3);
    FUN_1008d1370(0,uVar12 & ((long)uVar12 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar13 < 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1008ba824);
      (*pcVar7)();
    }
    if (uVar13 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1008ba828);
      (*pcVar7)();
    }
    if ((long)uVar12 < 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1008ba82c);
      (*pcVar7)();
    }
    uVar11 = *(ulong *)(lVar3 + 0x10);
    do {
      uVar13 = uVar13 & 0xffffffff;
      if (uVar11 <= uVar13) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1008ba81c);
        (*pcVar7)();
      }
      FUN_1000f8cac(lVar3 + 0x20 + uVar13 * 0x50,&local_120,&DAT_100feb100,&DAT_100c826d0);
      if (local_d8 == 1) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1008ba830);
        (*pcVar7)();
      }
      uStack_148 = uStack_f8;
      local_150 = local_100;
      uStack_138 = uStack_e8;
      uStack_140 = local_f0;
      local_130 = CONCAT62(uStack_de,local_e0);
      uStack_168 = uStack_118;
      local_170 = local_120;
      uStack_158 = uStack_108;
      uStack_160 = local_110;
      _swift_release();
      uStack_f8 = uStack_148;
      local_100 = local_150;
      uStack_e8 = uStack_138;
      local_f0 = uStack_140;
      local_e0 = (undefined2)local_130;
      uStack_118 = uStack_168;
      local_120 = local_170;
      uStack_108 = uStack_158;
      local_110 = uStack_160;
      uVar4 = *(ulong *)(puVar10 + 0x10);
      if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar4) {
        FUN_1008d1370(1 < *(ulong *)(puVar10 + 0x18),uVar4 + 1,1);
      }
      *(ulong *)(puVar10 + 0x10) = uVar4 + 1;
      *(undefined8 *)(puVar10 + uVar4 * 0x48 + 0x28) = uStack_118;
      *(undefined8 *)(puVar10 + uVar4 * 0x48 + 0x20) = local_120;
      *(undefined2 *)(puVar10 + uVar4 * 0x48 + 0x60) = local_e0;
      *(undefined8 *)(puVar10 + uVar4 * 0x48 + 0x48) = uStack_f8;
      *(undefined8 *)(puVar10 + uVar4 * 0x48 + 0x40) = local_100;
      *(undefined8 *)(puVar10 + uVar4 * 0x48 + 0x58) = uStack_e8;
      *(undefined8 *)(puVar10 + uVar4 * 0x48 + 0x50) = local_f0;
      *(undefined8 *)(puVar10 + uVar4 * 0x48 + 0x38) = uStack_108;
      *(undefined8 *)(puVar10 + uVar4 * 0x48 + 0x30) = local_110;
      uVar13 = *(long *)(lVar3 + 0x10) - 1U & uVar13 + 1;
      if (uVar13 >> 0x20 != 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1008ba820);
        (*pcVar7)();
      }
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
    _swift_release(lVar14);
    _swift_release(lVar3);
  }
  *param_1 = uVar2;
  param_1[1] = uVar6;
  param_1[2] = uVar8;
  param_1[3] = uVar9;
  param_1[4] = lVar1;
  param_1[5] = lVar5;
  param_1[6] = puVar10;
  return;
}



/* Address: 0x1008ba834 | FUN_1008ba834 */

void FUN_1008ba834(undefined8 param_1)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_1;
  plVar1 = (long *)0x280;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x50) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1008ba890;
  FUN_1008b91a4(plVar1,unaff_x22 + 0x10,0);
  return;
}



/* Address: 0x1008ba890 | FUN_1008ba890 */

void FUN_1008ba890(void)

{
  undefined8 *puVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x50));
  if (unaff_x20 == 0) {
    uVar5 = *(undefined8 *)(lVar2 + 0x18);
    uVar4 = *(undefined8 *)(lVar2 + 0x10);
    uVar7 = *(undefined8 *)(lVar2 + 0x28);
    uVar6 = *(undefined8 *)(lVar2 + 0x20);
    uVar9 = *(undefined8 *)(lVar2 + 0x38);
    uVar8 = *(undefined8 *)(lVar2 + 0x30);
    puVar1 = *(undefined8 **)(lVar2 + 0x48);
    puVar1[6] = *(undefined8 *)(lVar2 + 0x40);
    puVar1[3] = uVar7;
    puVar1[2] = uVar6;
    puVar1[5] = uVar9;
    puVar1[4] = uVar8;
    puVar1[1] = uVar5;
    *puVar1 = uVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x0001008ba8ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))();
  return;
}



/* Address: 0x1008ba8f0 | FUN_1008ba8f0 */

void FUN_1008ba8f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_3;
  *(undefined8 *)(unaff_x22 + 0x20) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  _swift_task_switch(FUN_1008ba90c,0,0);
  return;
}



/* Address: 0x1008ba90c | FUN_1008ba90c */

void FUN_1008ba90c(void)

{
  Optional OVar1;
  undefined *puVar2;
  long *plVar3;
  long unaff_x22;
  undefined8 uVar4;
  
  puVar2 = &DAT_100f0cb40;
  _swift_allocObject(&DAT_100f0cb40,0x20,7);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x18);
  *(undefined **)(unaff_x22 + 0x28) = puVar2;
  *(undefined8 *)(puVar2 + 0x18) = *(undefined8 *)(unaff_x22 + 0x20);
  *(undefined8 *)(puVar2 + 0x10) = uVar4;
  plVar3 = (long *)0x70;
  _swift_retain();
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x30) = plVar3;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_1008bb494;
  FUN_1008c2a20(*(undefined8 *)(unaff_x22 + 0x10),FUN_1008c1040,puVar2,OVar1.value);
  return;
}



/* Address: 0x1008ba9c4 | FUN_1008ba9c4 */

void FUN_1008ba9c4(undefined8 param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_2 + 0x48,auStack_58,0,0);
  lVar2 = *(long *)(param_2 + 0x48);
  if (lVar2 != 0) {
    _swift_beginAccess(lVar2 + 0x58,auStack_70,0x21,0);
    _swift_retain(lVar2);
    FUN_1008baa6c(param_1,lVar2 + 0x58,param_3);
    _swift_endAccess(auStack_70);
    _swift_release(lVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008baa6c);
  (*pcVar1)();
}



/* Address: 0x1008baa6c | FUN_1008baa6c */

void FUN_1008baa6c(undefined8 param_1,long param_2,long param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  long unaff_x21;
  long lVar3;
  long local_98 [9];
  
  lVar3 = *(long *)(unaff_x20 + 0x30);
  FUN_1008c1058(0);
  if (DAT_100feb2b0 != -1) {
    _swift_once(&DAT_100feb2b0,FUN_1008c3000);
  }
  (extension_Dispatch)::__C::OS_dispatch_queue::_getSpecific();
  if (local_98[0] != 0 && lVar3 == local_98[0]) {
    if (*(long *)(param_2 + 8) == *(long *)(param_2 + 0x10)) {
      uVar2 = 1;
    }
    else {
      FUN_1008bc43c(local_98);
      FUN_1008bb0e8(param_1,local_98);
      FUN_1005e70f4(local_98);
      if (unaff_x21 != 0) {
        return;
      }
      uVar2 = 0;
    }
    (**(code **)(*(long *)(param_3 + -8) + 0x38))(param_1,uVar2,1,param_3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008bab7c);
  (*pcVar1)();
}



/* Address: 0x1008bab7c | FUN_1008bab7c */

void FUN_1008bab7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_3;
  *(undefined8 *)(unaff_x22 + 0x40) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x30) = param_1;
  _swift_task_switch(FUN_1008bab98,0,0);
  return;
}



/* Address: 0x1008bab98 | FUN_1008bab98 */

void FUN_1008bab98(void)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x40);
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x38);
  plVar1 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x48) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1008bb640;
  FUN_1008c2e80(*(undefined8 *)(unaff_x22 + 0x30),0,0,0xd000000000000019,0x8000000100db44e0,
                FUN_1008c109c,unaff_x22 + 0x10,*(undefined8 *)(unaff_x22 + 0x38));
  return;
}



/* Address: 0x1008bac34 | FUN_1008bac34 */

/* WARNING: Removing unreachable block (ram,0x0001008bb0c8) */
/* WARNING: Removing unreachable block (ram,0x0001008bad14) */

void FUN_1008bac34(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  Optional OVar2;
  undefined7 extraout_var;
  CheckedContinuation CVar3;
  undefined *puVar4;
  byte *pbVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  ulong uVar15;
  long lVar16;
  long local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  undefined *local_d0;
  undefined *local_c8 [8];
  undefined1 local_86;
  undefined1 auStack_78 [24];
  
  local_d0 = (undefined *)param_2;
  OVar2 = Swift::Optional::typeMetadataAccessor();
  lVar8 = *(long *)(CONCAT71(extraout_var,OVar2.value) + -8);
  lVar12 = (long)&local_f0 - (*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = *(long *)(param_3 + -8);
  uVar7 = *(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar11 = lVar12 - uVar7;
  lVar10 = lVar11 - uVar7;
  _swift_beginAccess(param_1 + 0x48,auStack_78,0,0);
  lVar16 = *(long *)(param_1 + 0x48);
  if (lVar16 == 0) {
                    /* WARNING: Does not return */
    pcVar14 = (code *)SoftwareBreakpoint(1,0x1008bb0c4);
    (*pcVar14)();
  }
  _swift_beginAccess(lVar16 + 0x58,local_c8,0x21,0);
  _swift_retain(lVar16);
  FUN_1008baa6c(lVar12,lVar16 + 0x58,param_3);
  _swift_endAccess(local_c8);
  _swift_release(lVar16);
  lVar16 = lVar12;
  local_d8 = param_1;
  (**(code **)(lVar13 + 0x30))(lVar12,1,param_3);
  if ((int)lVar16 == 1) {
    (**(code **)(lVar8 + 8))(lVar12,CONCAT71(extraout_var,OVar2.value));
    lVar8 = *(long *)(local_d8 + 0x48);
    if (lVar8 == 0) {
                    /* WARNING: Does not return */
      pcVar14 = (code *)SoftwareBreakpoint(1,0x1008bb0c8);
      (*pcVar14)();
    }
    FUN_1000f8b08(&DAT_100feb0c8,&DAT_100c82c50);
    CVar3 = Swift::CheckedContinuation::typeMetadataAccessor();
    lVar12 = *(long *)(CVar3.unknown + -8);
    lVar11 = *(long *)(lVar12 + 0x40);
    uVar7 = lVar11 + 0xfU & 0xfffffffffffffff0;
    lVar13 = lVar10 - uVar7;
    pcVar14 = *(code **)(lVar12 + 0x10);
    local_e0 = lVar10;
    (*pcVar14)(lVar13,local_d0,CVar3.unknown);
    lVar16 = lVar13 - uVar7;
    local_f0 = lVar13;
    (*pcVar14)(lVar16,lVar13,CVar3.unknown);
    uVar7 = (ulong)*(byte *)(lVar12 + 0x50);
    uVar15 = uVar7 + 0x18 & (uVar7 ^ 0xffffffffffffffff);
    uVar9 = lVar11 + uVar15 + 7 & 0xfffffffffffffff8;
    puVar4 = &DAT_100f0d2d8;
    _swift_allocObject(&DAT_100f0d2d8,uVar9 + 8,uVar7 | 7);
    *(long *)(puVar4 + 0x10) = param_3;
    local_e8 = lVar12;
    local_d0 = CVar3.unknown;
    (**(code **)(lVar12 + 0x20))(puVar4 + uVar15,lVar13,CVar3.unknown);
    lVar10 = local_d8;
    *(long *)(puVar4 + uVar9) = local_d8;
    pbVar5 = *(byte **)(lVar8 + 0x30);
    uVar1 = *(undefined8 *)(lVar8 + 0x38);
    _swift_getObjectType();
    _swift_retain_n(lVar10,2);
    _swift_retain(lVar8);
    FUN_100642338(pbVar5,uVar1);
    (**(code **)(**(long **)(lVar8 + 0x10) + 0x88))();
    if ((*pbVar5 & 1) == 0) {
      FUN_1008c0f94();
      puVar6 = &DAT_100eeb710;
      _swift_allocError(&DAT_100eeb710,pbVar5,0,0);
      pbVar5[0] = 2;
      pbVar5[1] = 0;
      pbVar5[2] = 0;
      pbVar5[3] = 0;
      pbVar5[4] = 0;
      pbVar5[5] = 0;
      pbVar5[6] = 0;
      pbVar5[7] = 0;
      pbVar5[8] = 3;
      local_86 = 1;
      local_c8[0] = puVar6;
      FUN_1008bbc40(local_c8,lVar16,lVar10,param_3,FUN_1008c27dc);
      FUN_1000fb4c4(local_c8,&DAT_100feb268,&DAT_100c828c8);
      _swift_release(puVar4);
    }
    else {
      puVar6 = &DAT_100f0d300;
      _swift_allocObject(&DAT_100f0d300,0x20,7);
      *(code **)(puVar6 + 0x10) = FUN_1008c2540;
      *(undefined **)(puVar6 + 0x18) = puVar4;
      _swift_beginAccess(lVar8 + 0x70,local_c8,0x21,0);
      uVar7 = *(ulong *)(lVar8 + 0x70);
      lVar10 = *(long *)(uVar7 + 0x18);
      if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x1008bb0c0);
        (*pcVar14)();
      }
      _swift_retain(puVar4);
      _swift_isUniquelyReferenced_nonNull_native();
      lVar11 = *(long *)(lVar8 + 0x70);
      if ((*(long *)(lVar11 + 0x10) < lVar10 + 1) || ((uVar7 & 1) == 0)) {
        FUN_1008c0040();
        lVar11 = *(long *)(lVar8 + 0x70);
      }
      FUN_1008c0204(lVar11 + 0x10,lVar11 + 0x28,thunk_FUN_1000386a0,puVar6);
      _swift_endAccess(local_c8);
      _swift_release(puVar4);
      _swift_release(puVar6);
      lVar10 = local_d8;
    }
    (**(code **)(local_e8 + 8))(lVar16,local_d0);
    _swift_release(lVar8);
    _swift_release(lVar10);
  }
  else {
    (**(code **)(lVar13 + 0x20))(lVar10,lVar12,param_3);
    (**(code **)(lVar13 + 0x10))(lVar11,lVar10,param_3);
    FUN_1000f8b08(&DAT_100feb0c8,&DAT_100c82c50);
    CVar3 = Swift::CheckedContinuation::typeMetadataAccessor();
    Swift::CheckedContinuation::resume(lVar11,CVar3.unknown);
    (**(code **)(lVar13 + 8))(lVar10,param_3);
  }
  return;
}



/* Address: 0x1008bb0e8 | FUN_1008bb0e8 */

void FUN_1008bb0e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  Optional OVar2;
  undefined7 extraout_var;
  undefined8 uVar3;
  undefined1 *puVar4;
  long *plVar5;
  long *plVar6;
  long unaff_x20;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined1 auStack_a0 [8];
  long alStack_98 [3];
  long local_80;
  undefined1 auStack_78 [24];
  
  OVar2 = Swift::Optional::typeMetadataAccessor();
  lVar9 = *(long *)(CONCAT71(extraout_var,OVar2.value) + -8);
  puVar8 = auStack_a0 + -(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_beginAccess(unaff_x20 + 0x48,auStack_78,0,0);
  lVar7 = *(long *)(unaff_x20 + 0x48);
  if (lVar7 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008bb288);
    (*pcVar1)();
  }
  uVar3 = 0;
  FUN_1008d419c(0);
  _swift_retain(lVar7);
  FUN_10061d918(puVar8,param_2,param_4,uVar3,param_4,&PTR_PTR_100f0e2b0);
  _swift_release(lVar7);
  lVar7 = *(long *)(param_4 + -8);
  puVar4 = puVar8;
  (**(code **)(lVar7 + 0x30))(puVar8,1,param_4);
  if ((int)puVar4 == 1) {
    (**(code **)(lVar9 + 8))(puVar8,CONCAT71(extraout_var,OVar2.value));
    if (*(long *)(unaff_x20 + 0x48) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008bb28c);
      (*pcVar1)();
    }
    FUN_1008bfca0(alStack_98,PTR___type_metadata_for_Any_100eae0c0 + 8);
    if (local_80 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008bb290);
      (*pcVar1)();
    }
    plVar5 = alStack_98;
    FUN_100004640(plVar5,local_80);
    _swift_getDynamicType();
    plVar6 = alStack_98;
    FUN_100004594();
    FUN_1008c10c4();
    _swift_allocError(&DAT_100f0d048,plVar6,0,0);
    *plVar6 = param_4;
    plVar6[1] = (long)plVar5;
    _swift_willThrow();
  }
  else {
    (**(code **)(lVar7 + 0x20))(param_1,puVar8,param_4);
  }
  return;
}



/* Address: 0x1008bb290 | FUN_1008bb290 */

void FUN_1008bb290(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  Result RVar3;
  undefined7 extraout_var;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_70 [8];
  long lVar4;
  
  lVar1 = *(long *)(param_2 + 0x10);
  lVar2 = *(long *)(param_2 + 0x18);
  lVar10 = *(long *)(lVar1 + -8);
  puVar6 = auStack_70 + -(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = *(long *)(lVar2 + -8);
  lVar7 = (long)puVar6 - (*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  RVar3 = Swift::Result::typeMetadataAccessor();
  lVar4 = CONCAT71(extraout_var,RVar3.value);
  lVar8 = lVar7 - (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(*(long *)(lVar4 + -8) + 0x10))(lVar8,param_1,lVar4);
  lVar5 = lVar8;
  _swift_getEnumCaseMultiPayload(lVar8,lVar4);
  if ((int)lVar5 == 1) {
    (**(code **)(lVar9 + 0x20))(lVar7,lVar8,lVar2);
    Swift::CheckedContinuation::resume(lVar7,param_2);
  }
  else {
    (**(code **)(lVar10 + 0x20))(puVar6,lVar8,lVar1);
    Swift::CheckedContinuation::resume(puVar6,param_2);
  }
  return;
}



/* Address: 0x1008bb3c0 | FUN_1008bb3c0 */

void FUN_1008bb3c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_3;
  *(undefined8 *)(unaff_x22 + 0x20) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  _swift_task_switch(FUN_1008bb3dc,0,0);
  return;
}



/* Address: 0x1008bb3dc | FUN_1008bb3dc */

void FUN_1008bb3dc(void)

{
  Optional OVar1;
  undefined *puVar2;
  long *plVar3;
  long unaff_x22;
  undefined8 uVar4;
  
  puVar2 = &DAT_100f0cb68;
  _swift_allocObject(&DAT_100f0cb68,0x20,7);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x18);
  *(undefined **)(unaff_x22 + 0x28) = puVar2;
  *(undefined8 *)(puVar2 + 0x18) = *(undefined8 *)(unaff_x22 + 0x20);
  *(undefined8 *)(puVar2 + 0x10) = uVar4;
  plVar3 = (long *)0x70;
  _swift_retain();
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x30) = plVar3;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1008bb494;
  FUN_1008c2a20(*(undefined8 *)(unaff_x22 + 0x10),FUN_1008c1104,puVar2,OVar1.value);
  return;
}



/* Address: 0x1008bb494 | FUN_1008bb494 */

void FUN_1008bb494(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  long lVar2;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x28);
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x30));
  _swift_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001008bb4dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Address: 0x1008bb4e0 | FUN_1008bb4e0 */

void FUN_1008bb4e0(undefined8 param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_2 + 0x48,auStack_58,0,0);
  lVar2 = *(long *)(param_2 + 0x48);
  if (lVar2 != 0) {
    _swift_beginAccess(lVar2 + 0xa0,auStack_70,0x21,0);
    _swift_retain(lVar2);
    FUN_1008baa6c(param_1,lVar2 + 0xa0,param_3);
    _swift_endAccess(auStack_70);
    _swift_release(lVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008bb588);
  (*pcVar1)();
}



/* Address: 0x1008bb588 | FUN_1008bb588 */

void FUN_1008bb588(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_3;
  *(undefined8 *)(unaff_x22 + 0x40) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x30) = param_1;
  _swift_task_switch(FUN_1008bb5a4,0,0);
  return;
}



/* Address: 0x1008bb5a4 | FUN_1008bb5a4 */

void FUN_1008bb5a4(void)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x40);
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x38);
  plVar1 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x48) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1008bb640;
  FUN_1008c2e80(*(undefined8 *)(unaff_x22 + 0x30),0,0,0xd000000000000018,0x8000000100db4500,
                FUN_1008c111c,unaff_x22 + 0x10,*(undefined8 *)(unaff_x22 + 0x38));
  return;
}



/* Address: 0x1008bb640 | FUN_1008bb640 */

void FUN_1008bb640(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x0001008bb680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Address: 0x1008bb684 | FUN_1008bb684 */

void FUN_1008bb684(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  CheckedContinuation CVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  FUN_1000f8b08(&DAT_100feb0c8,&DAT_100c82c50);
  CVar1 = Swift::CheckedContinuation::typeMetadataAccessor();
  lVar4 = *(long *)(CVar1.unknown + -8);
  lVar5 = *(long *)(lVar4 + 0x40);
  (**(code **)(lVar4 + 0x10))
            (&stack0xffffffffffffffa0 + -(lVar5 + 0xfU & 0xfffffffffffffff0),param_1,CVar1.unknown);
  uVar2 = (ulong)*(byte *)(lVar4 + 0x50);
  uVar3 = uVar2 + 0x20 & (uVar2 ^ 0xffffffffffffffff);
  _swift_allocObject(param_4,uVar3 + lVar5,uVar2 | 7);
  *(undefined8 *)(param_4 + 0x10) = param_3;
  *(undefined8 *)(param_4 + 0x18) = param_2;
  (**(code **)(lVar4 + 0x20))
            (param_4 + uVar3,&stack0xffffffffffffffa0 + -(lVar5 + 0xfU & 0xfffffffffffffff0),
             CVar1.unknown);
  _swift_retain(param_2);
  FUN_1008c2bb8(param_5,param_4);
  _swift_release(param_4);
  return;
}



/* Address: 0x1008bb78c | FUN_1008bb78c */

/* WARNING: Removing unreachable block (ram,0x0001008bbc20) */
/* WARNING: Removing unreachable block (ram,0x0001008bb86c) */

void FUN_1008bb78c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  Optional OVar2;
  undefined7 extraout_var;
  CheckedContinuation CVar3;
  undefined *puVar4;
  byte *pbVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  ulong uVar15;
  long lVar16;
  long local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  undefined *local_d0;
  undefined *local_c8 [8];
  undefined1 local_86;
  undefined1 auStack_78 [24];
  
  local_d0 = (undefined *)param_2;
  OVar2 = Swift::Optional::typeMetadataAccessor();
  lVar8 = *(long *)(CONCAT71(extraout_var,OVar2.value) + -8);
  lVar12 = (long)&local_f0 - (*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = *(long *)(param_3 + -8);
  uVar7 = *(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar11 = lVar12 - uVar7;
  lVar10 = lVar11 - uVar7;
  _swift_beginAccess(param_1 + 0x48,auStack_78,0,0);
  lVar16 = *(long *)(param_1 + 0x48);
  if (lVar16 == 0) {
                    /* WARNING: Does not return */
    pcVar14 = (code *)SoftwareBreakpoint(1,0x1008bbc1c);
    (*pcVar14)();
  }
  _swift_beginAccess(lVar16 + 0xa0,local_c8,0x21,0);
  _swift_retain(lVar16);
  FUN_1008baa6c(lVar12,lVar16 + 0xa0,param_3);
  _swift_endAccess(local_c8);
  _swift_release(lVar16);
  lVar16 = lVar12;
  local_d8 = param_1;
  (**(code **)(lVar13 + 0x30))(lVar12,1,param_3);
  if ((int)lVar16 == 1) {
    (**(code **)(lVar8 + 8))(lVar12,CONCAT71(extraout_var,OVar2.value));
    lVar8 = *(long *)(local_d8 + 0x48);
    if (lVar8 == 0) {
                    /* WARNING: Does not return */
      pcVar14 = (code *)SoftwareBreakpoint(1,0x1008bbc20);
      (*pcVar14)();
    }
    FUN_1000f8b08(&DAT_100feb0c8,&DAT_100c82c50);
    CVar3 = Swift::CheckedContinuation::typeMetadataAccessor();
    lVar12 = *(long *)(CVar3.unknown + -8);
    lVar11 = *(long *)(lVar12 + 0x40);
    uVar7 = lVar11 + 0xfU & 0xfffffffffffffff0;
    lVar13 = lVar10 - uVar7;
    pcVar14 = *(code **)(lVar12 + 0x10);
    local_e0 = lVar10;
    (*pcVar14)(lVar13,local_d0,CVar3.unknown);
    lVar16 = lVar13 - uVar7;
    local_f0 = lVar13;
    (*pcVar14)(lVar16,lVar13,CVar3.unknown);
    uVar7 = (ulong)*(byte *)(lVar12 + 0x50);
    uVar15 = uVar7 + 0x18 & (uVar7 ^ 0xffffffffffffffff);
    uVar9 = lVar11 + uVar15 + 7 & 0xfffffffffffffff8;
    puVar4 = &DAT_100f0d260;
    _swift_allocObject(&DAT_100f0d260,uVar9 + 8,uVar7 | 7);
    *(long *)(puVar4 + 0x10) = param_3;
    local_e8 = lVar12;
    local_d0 = CVar3.unknown;
    (**(code **)(lVar12 + 0x20))(puVar4 + uVar15,lVar13,CVar3.unknown);
    lVar10 = local_d8;
    *(long *)(puVar4 + uVar9) = local_d8;
    pbVar5 = *(byte **)(lVar8 + 0x30);
    uVar1 = *(undefined8 *)(lVar8 + 0x38);
    _swift_getObjectType();
    _swift_retain_n(lVar10,2);
    _swift_retain(lVar8);
    FUN_100642338(pbVar5,uVar1);
    (**(code **)(**(long **)(lVar8 + 0x10) + 0x88))();
    if ((*pbVar5 & 1) == 0) {
      FUN_1008c0f94();
      puVar6 = &DAT_100eeb710;
      _swift_allocError(&DAT_100eeb710,pbVar5,0,0);
      pbVar5[0] = 2;
      pbVar5[1] = 0;
      pbVar5[2] = 0;
      pbVar5[3] = 0;
      pbVar5[4] = 0;
      pbVar5[5] = 0;
      pbVar5[6] = 0;
      pbVar5[7] = 0;
      pbVar5[8] = 3;
      local_86 = 1;
      local_c8[0] = puVar6;
      FUN_1008bbc40(local_c8,lVar16,lVar10,param_3,FUN_1008c2380);
      FUN_1000fb4c4(local_c8,&DAT_100feb268,&DAT_100c828c8);
      _swift_release(puVar4);
    }
    else {
      puVar6 = &DAT_100f0d288;
      _swift_allocObject(&DAT_100f0d288,0x20,7);
      *(code **)(puVar6 + 0x10) = FUN_1008c2350;
      *(undefined **)(puVar6 + 0x18) = puVar4;
      _swift_beginAccess(lVar8 + 0xb8,local_c8,0x21,0);
      uVar7 = *(ulong *)(lVar8 + 0xb8);
      lVar10 = *(long *)(uVar7 + 0x18);
      if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x1008bbc18);
        (*pcVar14)();
      }
      _swift_retain(puVar4);
      _swift_isUniquelyReferenced_nonNull_native();
      lVar11 = *(long *)(lVar8 + 0xb8);
      if ((*(long *)(lVar11 + 0x10) < lVar10 + 1) || ((uVar7 & 1) == 0)) {
        FUN_1008c0040();
        lVar11 = *(long *)(lVar8 + 0xb8);
      }
      FUN_1008c0204(lVar11 + 0x10,lVar11 + 0x28,FUN_1000386a0,puVar6);
      _swift_endAccess(local_c8);
      _swift_release(puVar4);
      _swift_release(puVar6);
      lVar10 = local_d8;
    }
    (**(code **)(local_e8 + 8))(lVar16,local_d0);
    _swift_release(lVar8);
    _swift_release(lVar10);
  }
  else {
    (**(code **)(lVar13 + 0x20))(lVar10,lVar12,param_3);
    (**(code **)(lVar13 + 0x10))(lVar11,lVar10,param_3);
    FUN_1000f8b08(&DAT_100feb0c8,&DAT_100c82c50);
    CVar3 = Swift::CheckedContinuation::typeMetadataAccessor();
    Swift::CheckedContinuation::resume(lVar11,CVar3.unknown);
    (**(code **)(lVar13 + 8))(lVar10,param_3);
  }
  return;
}



/* Address: 0x1008bbc40 | FUN_1008bbc40 */

void FUN_1008bbc40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  Result RVar1;
  undefined *puVar2;
  undefined7 extraout_var;
  CheckedContinuation CVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_120 [16];
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 *local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined2 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined2 local_68;
  char local_66;
  
  puVar2 = &DAT_100feb0c8;
  FUN_1000f8b08(&DAT_100feb0c8,&DAT_100c82c50);
  RVar1 = Swift::Result::typeMetadataAccessor();
  lVar5 = *(long *)(CONCAT71(extraout_var,RVar1.value) + -8);
  puVar4 = auStack_120 + -(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_1000f8cac(param_1,&local_a8,&DAT_100feb268,&DAT_100c828c8);
  if (local_66 == '\x01') {
    local_f0 = local_a8;
    CVar3 = Swift::CheckedContinuation::typeMetadataAccessor();
    Swift::CheckedContinuation::resume(&local_f0,CVar3.unknown);
  }
  else {
    uStack_c8 = uStack_80;
    local_d0 = uStack_88;
    uStack_b8 = uStack_70;
    uStack_c0 = local_78;
    local_b0 = local_68;
    uStack_e8 = uStack_a0;
    local_f0 = local_a8;
    uStack_d8 = uStack_90;
    uStack_e0 = local_98;
    local_100 = &local_f0;
    local_110 = param_4;
    uStack_108 = param_3;
    FUN_1006414f4(puVar4,param_5,auStack_120,param_4,puVar2,
                  PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    CVar3 = Swift::CheckedContinuation::typeMetadataAccessor();
    FUN_1008bb290(puVar4,CVar3.unknown);
    (**(code **)(lVar5 + 8))(puVar4,CONCAT71(extraout_var,RVar1.value));
    FUN_1005e70f4(&local_f0);
  }
  return;
}



/* Address: 0x1008bbdc4 | FUN_1008bbdc4 */

void FUN_1008bbdc4(undefined8 param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  lVar2 = *(long *)(param_2 + -8);
  *(long *)(unaff_x22 + 0x28) = lVar2;
  lVar2 = *(long *)(lVar2 + 0x40);
  *(long *)(unaff_x22 + 0x30) = lVar2;
  uVar1 = lVar2 + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x38) = uVar1;
  _swift_task_switch(FUN_1008bbe28,0,0);
  return;
}



/* Address: 0x1008bbe28 | FUN_1008bbe28 */

void FUN_1008bbe28(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  long *plVar6;
  ulong uVar7;
  long unaff_x22;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar1 = *(long *)(unaff_x22 + 0x30);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x20);
  lVar4 = *(long *)(unaff_x22 + 0x28);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x18);
  (**(code **)(lVar4 + 0x10))(uVar3,*(undefined8 *)(unaff_x22 + 0x10),uVar9);
  uVar7 = (ulong)*(byte *)(lVar4 + 0x50);
  uVar8 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
  puVar5 = &DAT_100f0cb90;
  _swift_allocObject(&DAT_100f0cb90,uVar8 + lVar1,uVar7 | 7);
  *(undefined **)(unaff_x22 + 0x40) = puVar5;
  *(undefined8 *)(puVar5 + 0x18) = uVar10;
  *(undefined8 *)(puVar5 + 0x10) = uVar9;
  (**(code **)(lVar4 + 0x20))(puVar5 + uVar8,uVar3,uVar9);
  plVar6 = (long *)0xd0;
  _swift_retain(uVar2);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x48) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_1008bbf2c;
  FUN_1008b9f80(FUN_1008c11a4,puVar5);
  return;
}



/* Address: 0x1008bbf2c | FUN_1008bbf2c */

void FUN_1008bbf2c(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  long lVar2;
  long lVar3;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x40);
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x48));
  _swift_release(uVar1);
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x0001008bbfa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Address: 0x1008bbfac | FUN_1008bbfac */

void FUN_1008bbfac(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x21;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar3 = *(long *)(param_2 + 0x50);
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008bc0bc);
    (*pcVar1)();
  }
  _swift_retain(lVar3);
  FUN_100629740(param_3,param_4);
  _swift_release(lVar3);
  lVar3 = *(long *)(param_2 + 0x50);
  if (lVar3 != 0) {
    _swift_retain(lVar3);
    FUN_100629938();
    _swift_release(lVar3);
    FUN_1008bc0c4();
    if (unaff_x21 == 0) {
      _swift_beginAccess(param_2 + 0x48,auStack_58,0,0);
      lVar3 = *(long *)(param_2 + 0x48);
      if (lVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1008bc0c4);
        (*pcVar1)();
      }
      _swift_beginAccess(lVar3 + 0xa0,auStack_70,0,0);
      uVar2 = 0;
      uVar4 = 0;
      uVar5 = 0;
      if (*(long *)(lVar3 + 0xa8) != *(long *)(lVar3 + 0xb0)) {
        _swift_beginAccess(lVar3 + 0xa0,auStack_88,0,0);
        uVar2 = *(undefined8 *)(lVar3 + 0xa0);
        uVar4 = *(undefined8 *)(lVar3 + 0xa8);
        uVar5 = *(undefined8 *)(lVar3 + 0xb0);
        _swift_retain();
      }
      *param_1 = uVar2;
      param_1[1] = uVar4;
      param_1[2] = uVar5;
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008bc0c0);
  (*pcVar1)();
}



/* Address: 0x1008bc0c4 | FUN_1008bc0c4 */

void FUN_1008bc0c4(void)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long lVar3;
  long local_48 [3];
  
  lVar3 = *(long *)(unaff_x20 + 0x30);
  FUN_1008c1058(0);
  if (DAT_100feb2b0 != -1) {
    _swift_once(&DAT_100feb2b0,FUN_1008c3000);
  }
  (extension_Dispatch)::__C::OS_dispatch_queue::_getSpecific();
  if (local_48[0] != 0 && lVar3 == local_48[0]) {
    _swift_beginAccess(unaff_x20 + 0x48,local_48,0,0);
    lVar3 = *(long *)(unaff_x20 + 0x48);
    if (lVar3 != 0) {
      lVar2 = *(long *)(lVar3 + 0x48);
      if (lVar2 != 0) {
        *(undefined8 *)(lVar3 + 0x48) = 0;
        _swift_errorRetain(lVar2);
        _swift_retain(lVar3);
        _swift_errorRelease(lVar2);
        _swift_release(lVar3);
        _swift_willThrow();
      }
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008bc1ac);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008bc1a8);
  (*pcVar1)();
}



/* Address: 0x1008bc1ac | FUN_1008bc1ac */

void FUN_1008bc1ac(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 *unaff_x20;
  long unaff_x22;
  undefined8 uVar2;
  
  *(undefined8 **)(unaff_x22 + 0x10) = unaff_x20;
  uVar2 = *unaff_x20;
  plVar1 = (long *)0x90;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1008bc228;
  FUN_1005dbba4(param_1,uVar2,param_2,&PTR_PTR_100f0cdc8);
  return;
}



/* Address: 0x1008bc228 | FUN_1008bc228 */

void FUN_1008bc228(void)

{
  long unaff_x20;
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x18));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001008bc26c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
  _swift_task_switch(FUN_1008bc290,0,0);
  return;
}



/* Address: 0x1008bc290 | FUN_1008bc290 */

void FUN_1008bc290(void)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0xd0;
  _swift_retain();
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x20) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1008bc314;
  FUN_1008b9f80(FUN_1008c11d0,*(undefined8 *)(unaff_x22 + 0x10));
  return;
}



/* Address: 0x1008bc314 | FUN_1008bc314 */

void FUN_1008bc314(void)

{
  long *unaff_x22;
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(*unaff_x22 + 0x10);
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x20));
  _swift_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001008bc38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Address: 0x1008bc390 | FUN_1008bc390 */

void FUN_1008bc390(undefined8 *param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_2 + 0x48,auStack_48,0,0);
  lVar4 = *(long *)(param_2 + 0x48);
  if (lVar4 != 0) {
    _swift_beginAccess(lVar4 + 0x58,auStack_60,0,0);
    uVar2 = 0;
    uVar3 = 0;
    uVar5 = 0;
    if (*(long *)(lVar4 + 0x60) != *(long *)(lVar4 + 0x68)) {
      _swift_beginAccess(lVar4 + 0x58,auStack_78,0,0);
      uVar2 = *(undefined8 *)(lVar4 + 0x58);
      uVar3 = *(undefined8 *)(lVar4 + 0x60);
      uVar5 = *(undefined8 *)(lVar4 + 0x68);
      _swift_retain();
    }
    *param_1 = uVar2;
    param_1[1] = uVar3;
    param_1[2] = uVar5;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008bc43c);
  (*pcVar1)();
}



/* Address: 0x1008bc43c | FUN_1008bc43c */

void FUN_1008bc43c(undefined8 *param_1)

{
  ulong uVar1;
  code *pcVar2;
  long *unaff_x20;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined2 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined2 local_30;
  
  uVar1 = unaff_x20[1];
  if (uVar1 == unaff_x20[2]) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1008bc4f0);
    (*pcVar2)();
  }
  if ((long)uVar1 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1008bc4f4);
    (*pcVar2)();
  }
  if (uVar1 >> 0x20 != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1008bc4f8);
    (*pcVar2)();
  }
  if (uVar1 < *(ulong *)(*unaff_x20 + 0x10)) {
    FUN_1000f8cac(*unaff_x20 + uVar1 * 0x48 + 0x20,&local_b8,&DAT_100feb158,&DAT_100c82c40);
    if (local_78._1_1_ != -1) {
      uStack_48 = uStack_90;
      local_50 = local_98;
      uStack_38 = uStack_80;
      uStack_40 = local_88;
      local_30 = local_78;
      uStack_68 = uStack_b0;
      local_70 = local_b8;
      uStack_58 = uStack_a0;
      uStack_60 = local_a8;
      param_1[5] = uStack_90;
      param_1[4] = local_98;
      param_1[7] = uStack_80;
      param_1[6] = local_88;
      *(undefined2 *)(param_1 + 8) = local_78;
      param_1[1] = uStack_b0;
      *param_1 = local_b8;
      param_1[3] = uStack_a0;
      param_1[2] = local_a8;
      FUN_1008c73d8(1);
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1008bc500);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1008bc4fc);
  (*pcVar2)();
}



/* Address: 0x1008bc500 | FUN_1008bc500 */

undefined * FUN_1008bc500(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long unaff_x20;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_a0 [8];
  long local_98;
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 *local_78;
  undefined8 local_70;
  
  lVar3 = 0;
  local_88 = param_1;
  local_80 = param_2;
  local_70 = param_4;
  _swift_getAssociatedTypeWitness
            (0,param_4,param_3,0x100cb819c,&TargetProtocolRequirement_100cb81b4);
  lVar10 = *(long *)(lVar3 + -8);
  local_98 = *(long *)(lVar10 + 0x40);
  local_78 = auStack_a0 + -(local_98 + 0xfU & 0xfffffffffffffff0);
  lVar11 = *(long *)(param_3 + -8);
  lVar12 = *(long *)(lVar11 + 0x40);
  lVar13 = (long)local_78 - (lVar12 + 0xfU & 0xfffffffffffffff0);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar4 = 0;
  local_90 = lVar3;
  FUN_1008c8478();
  _swift_retain(uVar8);
  FUN_1008c3048(uVar4,&PTR_PTR_100f0d740);
  _swift_release(uVar8);
  if ((uVar4 & 1) == 0) {
    (**(code **)(lVar11 + 0x10))(lVar13,local_88,param_3);
    lVar3 = local_90;
    (**(code **)(lVar10 + 0x10))(local_78,local_80,local_90);
    bVar1 = *(byte *)(lVar11 + 0x50);
    uVar4 = (ulong)bVar1 + 0x28 & ((ulong)bVar1 ^ 0xffffffffffffffff);
    bVar2 = *(byte *)(lVar10 + 0x50);
    uVar9 = lVar12 + uVar4 + (ulong)bVar2 & ((ulong)bVar2 ^ 0xffffffffffffffff);
    puVar5 = &DAT_100f0cbb8;
    _swift_allocObject(&DAT_100f0cbb8,uVar9 + local_98,bVar1 | bVar2 | 7);
    *(long *)(puVar5 + 0x10) = param_3;
    *(undefined8 *)(puVar5 + 0x18) = local_70;
    *(long *)(puVar5 + 0x20) = unaff_x20;
    (**(code **)(lVar11 + 0x20))(puVar5 + uVar4,lVar13,param_3);
    (**(code **)(lVar10 + 0x20))(puVar5 + uVar9,local_78,lVar3);
    puVar6 = &DAT_100feb0f8;
    FUN_1000f7830(&DAT_100feb0f8,&DAT_100c82be0);
    _swift_allocObject();
    *(undefined8 *)(puVar6 + 0x20) = uVar8;
    *(undefined ***)(puVar6 + 0x28) = &PTR_PTR_100f0d740;
    *(undefined8 *)(puVar6 + 0x30) = 0;
    *(undefined8 *)(puVar6 + 0x10) = 0;
    puVar6[0x18] = 0xff;
    *(undefined8 *)(puVar6 + 0x38) = 0;
    *(undefined8 *)(puVar6 + 0x40) = 0;
    puVar7 = &DAT_100f0cbe0;
    _swift_allocObject(&DAT_100f0cbe0,0x28,7);
    *(undefined **)(puVar7 + 0x10) = puVar6;
    *(code **)(puVar7 + 0x18) = FUN_1008c12a8;
    *(undefined **)(puVar7 + 0x20) = puVar5;
    _swift_retain_n(uVar8,2);
    _swift_retain(unaff_x20);
    _swift_retain(puVar6);
    _swift_retain(puVar5);
    FUN_1008c2bb8(FUN_1008c1340,puVar7);
    _swift_release(uVar8);
    _swift_release(puVar5);
    _swift_release(puVar7);
  }
  else {
    FUN_1008bc7a8(local_88,local_80,param_3,local_70);
    puVar6 = &DAT_100feb0f8;
    FUN_1000f7830(&DAT_100feb0f8,&DAT_100c82be0);
    _swift_allocObject();
    *(undefined8 *)(puVar6 + 0x20) = uVar8;
    *(undefined ***)(puVar6 + 0x28) = &PTR_PTR_100f0d740;
    *(undefined8 *)(puVar6 + 0x30) = 0;
    *(undefined8 *)(puVar6 + 0x10) = 0;
    puVar6[0x18] = 0;
    *(undefined8 *)(puVar6 + 0x38) = 0;
    *(undefined8 *)(puVar6 + 0x40) = 0;
    _swift_retain(uVar8);
  }
  return puVar6;
}



/* Address: 0x1008bc7a8 | FUN_1008bc7a8 */

void FUN_1008bc7a8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long unaff_x20;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_80 [31];
  undefined1 local_61;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_4,param_3,0x100cb819c,&TargetProtocolRequirement_100cb81b4);
  lVar7 = *(long *)(lVar2 + -8);
  puVar4 = auStack_80 + -(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = *(long *)(param_3 + -8);
  lVar6 = (long)puVar4 - (*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_1008bc90c(param_1,param_2,param_3,param_4);
  (**(code **)(lVar8 + 0x10))(lVar6,param_1,param_3);
  iVar1 = (int)lVar6;
  _swift_dynamicCast();
  if (iVar1 != 0) {
    (**(code **)(lVar7 + 0x10))(puVar4,param_2,lVar2);
    _swift_dynamicCast(&local_61,puVar4,lVar2,PTR___type_metadata_for_Swift_Bool_100eac570,7);
    _swift_beginAccess(unaff_x20 + 0x48,auStack_80,0,0);
    puVar4 = *(undefined1 **)(unaff_x20 + 0x48);
    if (puVar4 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1008bc90c);
      (*pcVar5)();
    }
    pcVar5 = *(code **)(**(long **)(puVar4 + 0x20) + 0x88);
    puVar3 = puVar4;
    _swift_retain();
    (*pcVar5)();
    *puVar3 = local_61;
    _swift_release(puVar4);
  }
  return;
}



/* Address: 0x1008bc90c | FUN_1008bc90c */

/* WARNING: Removing unreachable block (ram,0x0001008bc990) */

void FUN_1008bc90c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  int iVar2;
  long unaff_x20;
  long lVar3;
  
  lVar3 = *(long *)(unaff_x20 + 0x58);
  iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(lVar3 + 0x20));
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008bc98c);
    (*pcVar1)();
  }
  FUN_1008bd2b4(lVar3 + 0x10,param_1,param_2,param_3,param_4);
  iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar3 + 0x20));
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008bc990);
    (*pcVar1)();
  }
  return;
}



/* Address: 0x1008bc994 | FUN_1008bc994 */

code * FUN_1008bc994(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  code *pcVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x20;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 *puVar10;
  code *pcVar11;
  undefined1 auStack_90 [8];
  long local_88;
  undefined8 local_80;
  undefined8 local_78;
  
  lVar6 = *(long *)(param_2 + -8);
  local_88 = *(long *)(lVar6 + 0x40);
  puVar10 = auStack_90 + -(local_88 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  local_80 = param_1;
  local_78 = param_3;
  _swift_getAssociatedTypeWitness
            (0,param_3,param_2,0x100cb819c,&TargetProtocolRequirement_100cb81b4);
  lVar9 = *(long *)(lVar1 + -8);
  pcVar11 = (code *)(puVar10 + -(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0));
  uVar8 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar2 = 0;
  FUN_1008c8478();
  _swift_retain(uVar8);
  uVar5 = uVar2;
  FUN_1008c3048(uVar2,&PTR_PTR_100f0d740);
  _swift_release(uVar8);
  if ((uVar5 & 1) == 0) {
    (**(code **)(lVar6 + 0x10))(puVar10,local_80,param_2);
    uVar5 = (ulong)*(byte *)(lVar6 + 0x50);
    uVar7 = uVar5 + 0x28 & (uVar5 ^ 0xffffffffffffffff);
    puVar3 = &DAT_100f0cc08;
    _swift_allocObject(&DAT_100f0cc08,uVar7 + local_88,uVar5 | 7);
    *(long *)(puVar3 + 0x10) = param_2;
    *(undefined8 *)(puVar3 + 0x18) = local_78;
    *(long *)(puVar3 + 0x20) = unaff_x20;
    (**(code **)(lVar6 + 0x20))(puVar3 + uVar7,puVar10,param_2);
    _swift_retain(uVar8);
    _swift_retain(unaff_x20);
    pcVar4 = FUN_1008c13b0;
    FUN_100640e7c(FUN_1008c13b0,puVar3,uVar2,lVar1,&PTR_PTR_100f0d740);
    _swift_release(uVar8);
    _swift_release(puVar3);
  }
  else {
    _swift_retain(uVar8);
    FUN_1008bcb84(pcVar11,local_80,param_2,local_78);
    pcVar4 = pcVar11;
    FUN_10063dc68(pcVar11,uVar2,lVar1,&PTR_PTR_100f0d740);
    _swift_release(uVar8);
    (**(code **)(lVar9 + 8))(pcVar11,lVar1);
  }
  return pcVar4;
}



/* Address: 0x1008bcb84 | FUN_1008bcb84 */

void FUN_1008bcb84(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  byte bVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  StaticString file;
  __uint64 line;
  bool bVar4;
  Optional OVar5;
  int iVar6;
  char *pcVar7;
  undefined7 extraout_var;
  byte *pbVar8;
  undefined1 *puVar9;
  _StringGuts _Var10;
  char *pcVar11;
  undefined *puVar12;
  ulong uVar13;
  long lVar14;
  byte *pbVar15;
  long lVar16;
  ulong uVar17;
  long unaff_x20;
  long lVar18;
  ulong uVar19;
  undefined *puVar20;
  code *pcVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  undefined8 uStack_190;
  undefined4 auStack_188 [2];
  undefined1 auStack_180 [8];
  char *local_178;
  undefined8 local_170;
  long local_168;
  undefined *local_160;
  undefined1 *local_158;
  undefined8 local_150;
  byte local_140 [8];
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  long lStack_f8;
  StaticString local_f0;
  __uint64 _Stack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  long lStack_a8;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  pcVar7 = (char *)0xff;
  local_150 = param_4;
  _swift_getAssociatedTypeWitness
            (0xff,param_4,param_3,0x100cb819c,&TargetProtocolRequirement_100cb81b4);
  OVar5 = Swift::Optional::typeMetadataAccessor();
  local_160 = (undefined *)CONCAT71(extraout_var,OVar5.value);
  local_168 = *(long *)(local_160 + -8);
  local_158 = auStack_180 + -(*(long *)(local_168 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar22 = *(long *)(pcVar7 + -8);
  lVar23 = (long)local_158 - (*(long *)(lVar22 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar13 = *(long *)(*(long *)(param_3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar24 = lVar23 - uVar13;
  lVar14 = lVar24 - uVar13;
  lVar18 = lVar14 - uVar13;
  pcVar21 = *(code **)(*(long *)(param_3 + -8) + 0x10);
  lVar16 = lVar18;
  (*pcVar21)(lVar18,param_2,param_3);
  iVar6 = (int)lVar16;
  _swift_dynamicCast();
  if (iVar6 == 0) {
    local_178 = pcVar7;
    local_170 = param_1;
    (*pcVar21)(lVar14,param_2,param_3);
    iVar6 = (int)lVar14;
    _swift_dynamicCast();
    if (iVar6 == 0) {
      (*pcVar21)(lVar24,param_2,param_3);
      iVar6 = (int)lVar24;
      puVar20 = &DAT_100eecb58;
      _swift_dynamicCast();
      puVar3 = local_158;
      if (iVar6 == 0) {
        FUN_1008bd0b8(local_158);
        pcVar7 = local_178;
        puVar9 = puVar3;
        pcVar11 = local_178;
        (**(code **)(lVar22 + 0x30))(puVar3,1);
        uVar2 = local_170;
        if ((int)puVar9 != 1) {
          pcVar21 = *(code **)(lVar22 + 0x20);
          (*pcVar21)(lVar23,puVar3,pcVar7);
          (*pcVar21)(uVar2,lVar23,pcVar7);
          return;
        }
        _Var10.unknown = local_160;
        (**(code **)(local_168 + 8))(puVar3);
        local_f0.unknown = (undefined *)0x0;
        _Stack_e8 = 0xe000000000000000;
        Swift::_StringGuts::grow(0x17,_Var10);
        SVar26.bridgeObject = &DAT_e700000000000000;
        SVar26.str = (char *)0x206e6f6974706f;
        SVar29.bridgeObject = puVar20;
        SVar29.str = pcVar11;
        Swift::String::append(SVar26,SVar29);
        Swift::DefaultStringInterpolation::_appendInterpolation(param_2,param_3);
        SVar27.bridgeObject = (void *)0xee00646574726f70;
        SVar27.str = (char *)0x70757320746f6e20;
        SVar30.bridgeObject = puVar20;
        SVar30.str = pcVar11;
        Swift::String::append(SVar27,SVar30);
        line = _Stack_e8;
        file.unknown = local_f0.unknown;
        *(undefined4 *)(lVar18 + -8) = 0;
        *(undefined8 *)(lVar18 + -0x10) = 0x26e;
        SVar28.bridgeObject = (void *)0x2;
        SVar28.str = (char *)0xb;
        Swift::_assertionFailure((StaticString)0x100d8deb0,SVar28,file,line,0xdb44b0);
                    /* WARNING: Does not return */
        pcVar21 = (code *)SoftwareBreakpoint(1,0x1008bd0b8);
        (*pcVar21)();
      }
      _swift_beginAccess(unaff_x20 + 0x48,auStack_80,0,0);
      lVar16 = *(long *)(unaff_x20 + 0x48);
      if (lVar16 == 0) {
                    /* WARNING: Does not return */
        pcVar21 = (code *)SoftwareBreakpoint(1,0x1008bcff8);
        (*pcVar21)();
      }
      _swift_beginAccess(lVar16 + 0x78,auStack_98,0,0);
      uVar13 = *(ulong *)(lVar16 + 0x80);
      if ((long)uVar13 < 0) {
                    /* WARNING: Does not return */
        pcVar21 = (code *)SoftwareBreakpoint(1,0x1008bcfdc);
        (*pcVar21)();
      }
      if (uVar13 >> 0x20 != 0) {
                    /* WARNING: Does not return */
        pcVar21 = (code *)SoftwareBreakpoint(1,0x1008bcfe0);
        (*pcVar21)();
      }
      uVar25 = *(ulong *)(lVar16 + 0x88);
      if ((long)uVar25 < 0) {
                    /* WARNING: Does not return */
        pcVar21 = (code *)SoftwareBreakpoint(1,0x1008bcfe4);
        (*pcVar21)();
      }
      if (uVar25 >> 0x20 != 0) {
                    /* WARNING: Does not return */
        pcVar21 = (code *)SoftwareBreakpoint(1,0x1008bcfe8);
        (*pcVar21)();
      }
      lVar16 = *(long *)(lVar16 + 0x78);
      _swift_retain_n(lVar16,2);
      if (uVar13 == uVar25) {
        puVar20 = (undefined *)0x0;
      }
      else {
        puVar20 = (undefined *)0x0;
        uVar19 = uVar13;
        do {
          uVar17 = *(ulong *)(lVar16 + 0x10);
          if (uVar17 <= uVar19) {
                    /* WARNING: Does not return */
            pcVar21 = (code *)SoftwareBreakpoint(1,0x1008bcfd0);
            (*pcVar21)();
          }
          pbVar15 = local_140;
          FUN_1000f8cac(lVar16 + 0x20 + uVar19 * 0x50,pbVar15,&DAT_100feb100,&DAT_100c826d0);
          if (lStack_f8 == 1) {
                    /* WARNING: Does not return */
            pcVar21 = (code *)SoftwareBreakpoint(1,0x1008bcfec);
            (*pcVar21)();
          }
          uStack_c8 = uStack_118;
          local_d0 = local_120;
          uStack_b8 = uStack_108;
          uStack_c0 = local_110;
          lStack_a8 = lStack_f8;
          local_b0 = local_100;
          _Stack_e8 = uStack_138;
          uStack_d8 = uStack_128;
          uStack_e0 = local_130;
          uVar19 = uVar17 + 0x1ffffffff & uVar19 + 1;
          if (uVar19 >> 0x20 != 0) {
                    /* WARNING: Does not return */
            pcVar21 = (code *)SoftwareBreakpoint(1,0x1008bcfd4);
            (*pcVar21)();
          }
          if (*(long *)(unaff_x20 + 0x48) == 0) {
                    /* WARNING: Does not return */
            pcVar21 = (code *)SoftwareBreakpoint(1,0x1008bcff0);
            (*pcVar21)();
          }
          FUN_10065b5f8();
          _swift_release();
          uVar17 = (ulong)(uint)((int)((ulong)pbVar15 >> 0x20) - (int)pbVar15);
          bVar4 = SCARRY8((long)puVar20,uVar17);
          puVar20 = puVar20 + uVar17;
          if (bVar4) {
                    /* WARNING: Does not return */
            pcVar21 = (code *)SoftwareBreakpoint(1,0x1008bcfd8);
            (*pcVar21)();
          }
          FUN_1000fb4c4(&local_f0,&DAT_100feb108,&DAT_100c82c30);
        } while ((uVar25 < uVar13 == (long)uVar13 <= (long)uVar19) || (uVar19 != uVar25));
      }
      _swift_release_n(lVar16,2);
      lVar16 = -0xe0;
      param_1 = local_170;
      puVar12 = PTR___type_metadata_for_Swift_Int_100eac6f8;
      pcVar7 = local_178;
      local_f0.unknown = puVar20;
    }
    else {
      _swift_beginAccess(unaff_x20 + 0x48,&local_f0,0,0);
      pbVar15 = *(byte **)(unaff_x20 + 0x48);
      if (pbVar15 == (byte *)0x0) {
                    /* WARNING: Does not return */
        pcVar21 = (code *)SoftwareBreakpoint(1,0x1008bcff4);
        (*pcVar21)();
      }
      pcVar21 = *(code **)(**(long **)(pbVar15 + 0x20) + 0x88);
      pbVar8 = pbVar15;
      _swift_retain();
      (*pcVar21)();
      bVar1 = *pbVar8;
      _swift_release(pbVar15);
      local_140[0] = bVar1 & 1;
      lVar16 = -0x130;
      param_1 = local_170;
      puVar12 = PTR___type_metadata_for_Swift_Bool_100eac570;
      pcVar7 = local_178;
    }
  }
  else {
    local_f0.unknown._0_1_ = 1;
    lVar16 = -0xe0;
    puVar12 = PTR___type_metadata_for_Swift_Bool_100eac570;
  }
  _swift_dynamicCast(param_1,&stack0xfffffffffffffff0 + lVar16,puVar12,pcVar7,7);
  return;
}



/* Address: 0x1008bd0b8 | FUN_1008bd0b8 */

/* WARNING: Removing unreachable block (ram,0x0001008bd298) */

void FUN_1008bd0b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long unaff_x20;
  long lVar8;
  ulong uVar9;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
  lVar6 = *(long *)(unaff_x20 + 0x58);
  iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(lVar6 + 0x20));
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008bd294);
    (*pcVar1)();
  }
  lVar8 = *(long *)(lVar6 + 0x18);
  _swift_bridgeObjectRetain(lVar8);
  iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar6 + 0x20));
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008bd298);
    (*pcVar1)();
  }
  uVar9 = *(ulong *)(lVar8 + 0x10);
  if (uVar9 != 0) {
    uVar7 = 0;
    lVar6 = lVar8 + 0x20;
    do {
      if (*(ulong *)(lVar8 + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1008bd290);
        (*pcVar1)();
      }
      FUN_1000f8cac(lVar6,&local_110,&DAT_100feb110,&DAT_100c826e0);
      uStack_138 = uStack_e8;
      local_140 = uStack_f0;
      uStack_128 = uStack_d8;
      uStack_130 = local_e0;
      local_120 = local_d0;
      uStack_158 = uStack_108;
      local_160 = local_110;
      uStack_148 = uStack_f8;
      uStack_150 = local_100;
      puVar3 = &local_160;
      FUN_1008bd5dc(puVar3,param_3,param_4);
      if (((ulong)puVar3 & 1) != 0) {
        _swift_bridgeObjectRelease(lVar8);
        uStack_98 = uStack_138;
        local_a0 = local_140;
        uStack_88 = uStack_128;
        uStack_90 = uStack_130;
        local_80 = local_120;
        uStack_b8 = uStack_158;
        local_c0 = local_160;
        uStack_a8 = uStack_148;
        uStack_b0 = uStack_150;
        FUN_100011080(&uStack_98,&local_110);
        FUN_100004594(&local_c0);
        goto LAB_1008bd1f8;
      }
      uVar7 = uVar7 + 1;
      FUN_1000fb4c4(&local_160,&DAT_100feb110,&DAT_100c826e0);
      lVar6 = lVar6 + 0x48;
    } while (uVar9 != uVar7);
  }
  _swift_bridgeObjectRelease(lVar8);
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  local_100 = 0;
LAB_1008bd1f8:
  puVar4 = &DAT_100feb118;
  FUN_1000f7830(&DAT_100feb118,&DAT_100c82c70);
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_4,param_3,0x100cb819c,&TargetProtocolRequirement_100cb81b4);
  uVar5 = param_1;
  _swift_dynamicCast(param_1,&local_110,puVar4,lVar6,6);
  (**(code **)(*(long *)(lVar6 + -8) + 0x38))(param_1,(uint)uVar5 ^ 1,1,lVar6);
  return;
}



/* Address: 0x1008bd2b4 | FUN_1008bd2b4 */

void FUN_1008bd2b4(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x21;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined1 auStack_f8 [24];
  long local_e0;
  undefined1 auStack_d8 [24];
  long local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  long lStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  uVar5 = *(ulong *)(param_1 + 8);
  uVar6 = *(ulong *)(uVar5 + 0x10);
  _swift_bridgeObjectRetain(uVar5);
  if (uVar6 != 0) {
    uVar7 = 0;
    lVar8 = 0x48;
    do {
      if (*(ulong *)(uVar5 + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1008bd564);
        (*pcVar1)();
      }
      FUN_1000f8cac(uVar5 + lVar8 + -0x28,&local_b0,&DAT_100feb110,&DAT_100c826e0);
      puVar2 = &local_b0;
      FUN_1008bd5dc(puVar2,param_4,param_5);
      if (unaff_x21 != 0) {
        FUN_1000fb4c4(&local_b0,&DAT_100feb110,&DAT_100c826e0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1008bd5dc);
        (*pcVar1)();
      }
      FUN_1000fb4c4(&local_b0,&DAT_100feb110,&DAT_100c826e0);
      if (((ulong)puVar2 & 1) != 0) {
        lStack_98 = param_4;
        local_90 = param_5;
        FUN_10000cbb0(&local_b0);
        (**(code **)(*(long *)(param_4 + -8) + 0x10))();
        lVar3 = 0;
        _swift_getAssociatedTypeWitness
                  (0,param_5,param_4,0x100cb819c,&TargetProtocolRequirement_100cb81b4);
        local_c0 = lVar3;
        FUN_10000cbb0(auStack_d8);
        (**(code **)(*(long *)(lVar3 + -8) + 0x10))();
        uVar6 = uVar5;
        _swift_isUniquelyReferenced_nonNull_native();
        uVar4 = uVar5;
        if ((uVar6 & 1) == 0) {
          FUN_1008d103c();
        }
        if (*(ulong *)(uVar4 + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1008bd5c0);
          (*pcVar1)();
        }
        lVar8 = uVar4 + lVar8;
        FUN_100004594(lVar8 + -0x28);
        FUN_100076508(&local_b0,lVar8 + -0x28);
        FUN_100004594(lVar8);
        FUN_100011080(auStack_d8,lVar8);
        goto LAB_1008bd530;
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0x48;
    } while (uVar6 != uVar7);
  }
  local_c0 = param_4;
  local_b8 = param_5;
  FUN_10000cbb0(auStack_d8);
  (**(code **)(*(long *)(param_4 + -8) + 0x10))();
  lVar8 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_5,param_4,0x100cb819c,&TargetProtocolRequirement_100cb81b4);
  local_e0 = lVar8;
  FUN_10000cbb0(auStack_f8);
  (**(code **)(*(long *)(lVar8 + -8) + 0x10))();
  FUN_100076508(auStack_d8,&local_b0);
  FUN_100011080(auStack_f8,&uStack_88);
  uVar6 = uVar5;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar7 = uVar5;
  if ((uVar6 & 1) == 0) {
    uVar7 = 0;
    FUN_1008d1174(0,*(long *)(uVar5 + 0x10) + 1,1);
  }
  uVar6 = *(ulong *)(uVar7 + 0x10);
  uVar4 = uVar7;
  if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar6) {
    uVar4 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
    FUN_1008d1174(uVar4,uVar6 + 1,1,uVar7);
  }
  *(ulong *)(uVar4 + 0x10) = uVar6 + 1;
  lVar8 = uVar4 + uVar6 * 0x48;
  *(undefined8 *)(lVar8 + 0x28) = uStack_a8;
  *(undefined8 *)(lVar8 + 0x20) = local_b0;
  *(undefined8 *)(lVar8 + 0x60) = local_70;
  *(undefined8 *)(lVar8 + 0x48) = uStack_88;
  *(undefined8 *)(lVar8 + 0x40) = local_90;
  *(undefined8 *)(lVar8 + 0x58) = uStack_78;
  *(undefined8 *)(lVar8 + 0x50) = local_80;
  *(long *)(lVar8 + 0x38) = lStack_98;
  *(undefined8 *)(lVar8 + 0x30) = local_a0;
LAB_1008bd530:
  _swift_bridgeObjectRelease(uVar5);
  *(ulong *)(param_1 + 8) = uVar4;
  return;
}



/* Address: 0x1008bd5dc | FUN_1008bd5dc */

undefined1 * FUN_1008bd5dc(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 auStack_b0 [40];
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [40];
  
  lVar4 = *(long *)(param_2 + -8);
  puVar3 = auStack_b0 + -(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_1000f8cac(param_1,auStack_b0,&DAT_100feb110,&DAT_100c826e0);
  FUN_100076508(auStack_b0,auStack_68);
  puVar1 = &DAT_100feb240;
  FUN_1000f7830(&DAT_100feb240,&DAT_100c828b0);
  puVar2 = puVar3;
  _swift_dynamicCast(puVar3,auStack_68,puVar1,param_2,6);
  if ((int)puVar2 != 0) {
    (**(code **)(lVar4 + 8))(puVar3,param_2);
  }
  FUN_100004594(auStack_88);
  return puVar2;
}



/* Address: 0x1008bd6ac | FUN_1008bd6ac */

void FUN_1008bd6ac(ulong param_1,undefined *param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  long unaff_x20;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  code *pcVar11;
  ulong uVar12;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  long local_68;
  
  puVar2 = param_2;
  if (param_2 == (undefined *)0x0) {
    uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
    puVar2 = &DAT_100feb0f8;
    FUN_1000f7830(&DAT_100feb0f8,&DAT_100c82be0);
    _swift_allocObject();
    *(undefined8 *)(puVar2 + 0x20) = uVar9;
    *(undefined ***)(puVar2 + 0x28) = &PTR_PTR_100f0d740;
    *(undefined8 *)(puVar2 + 0x10) = 0;
    puVar2[0x18] = 0xff;
    *(undefined8 *)(puVar2 + 0x38) = 0;
    *(undefined8 *)(puVar2 + 0x40) = 0;
    *(undefined8 *)(puVar2 + 0x30) = 0;
    _swift_retain(uVar9);
  }
  puVar3 = &DAT_100f0cc30;
  _swift_allocObject(&DAT_100f0cc30,0x20,7);
  *(long *)(puVar3 + 0x10) = unaff_x20;
  *(ulong *)(puVar3 + 0x18) = param_1;
  puVar4 = &DAT_100f0cc58;
  _swift_allocObject(&DAT_100f0cc58,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_1008c13f8;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  puVar5 = &DAT_100f0cc80;
  _swift_allocObject(&DAT_100f0cc80,0x28,7);
  *(undefined **)(puVar5 + 0x10) = puVar2;
  *(code **)(puVar5 + 0x18) = FUN_1000386a0;
  *(undefined **)(puVar5 + 0x20) = puVar4;
  uVar6 = *(ulong *)(puVar2 + 0x20);
  lVar10 = *(long *)(puVar2 + 0x28);
  _swift_getObjectType();
  pcVar11 = *(code **)(lVar10 + 0x10);
  uVar12 = param_1 & 0x3fffffffffffffff;
  _swift_retain_n(uVar12,2);
  _swift_retain_n(puVar2,3);
  _swift_retain_n(puVar4,2);
  _swift_retain_n();
  _swift_retain(param_2);
  _swift_retain(puVar3);
  uVar7 = uVar6;
  (*pcVar11)(uVar6,lVar10);
  if ((uVar7 & 1) == 0) {
    _swift_release(uVar12);
    _swift_release();
    _swift_release(puVar3);
    puVar3 = &DAT_100f0cca8;
    _swift_allocObject(&DAT_100f0cca8,0x28,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    *(code **)(puVar3 + 0x18) = FUN_1008a8990;
    *(undefined **)(puVar3 + 0x20) = puVar5;
    pcVar11 = *(code **)(lVar10 + 0x18);
    _swift_retain(puVar2);
    _swift_retain(puVar5);
    (*pcVar11)(FUN_1008c1400,puVar3,uVar6,lVar10);
    _swift_release(puVar3);
    _swift_release_n(puVar4,2);
    _swift_release_n(puVar2,2);
    _swift_release(puVar5);
    goto LAB_1008bda24;
  }
  _swift_beginAccess(puVar2 + 0x10,auStack_80,0,0);
  if (puVar2[0x18] == '\x01') {
LAB_1008bd9c8:
    _swift_release();
    _swift_release(puVar3);
    _swift_release(uVar12);
  }
  else {
    if (puVar2[0x18] != -1) {
      _swift_beginAccess(unaff_x20 + 0x48,auStack_98,0,0);
      puVar8 = *(undefined **)(unaff_x20 + 0x48);
      if (puVar8 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x1008bdb3c);
        (*pcVar11)();
      }
      lVar10 = *(long *)(puVar8 + 0xc0);
      _swift_retain();
      _swift_retain(uVar12);
      _swift_retain(puVar8);
      iVar1 = _pthread_mutex_lock((pthread_mutex_t *)(lVar10 + 0x20));
      if (iVar1 != 0) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x1008bdb30);
        (*pcVar11)();
      }
      uVar9 = *(undefined8 *)(lVar10 + 0x10);
      *(ulong *)(lVar10 + 0x10) = param_1;
      _swift_retain(uVar12);
      FUN_1005d8534(uVar9);
      iVar1 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar10 + 0x20));
      if (iVar1 != 0) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x1008bdb34);
        (*pcVar11)();
      }
      _swift_release(puVar3);
      _swift_release_n();
      puVar3 = puVar8;
      goto LAB_1008bd9c8;
    }
    _swift_release(uVar12);
    _swift_release();
    _swift_release(puVar3);
    _swift_beginAccess(puVar2 + 0x30,auStack_98,0x21,0);
    FUN_10064967c(FUN_1008a8990,puVar5);
    _swift_endAccess(auStack_98);
  }
  FUN_1006486f8(0,0,0);
  FUN_100004550(0,0);
  _swift_release_n(puVar4,2);
  _swift_release_n(puVar2,2);
  _swift_release(puVar5);
  _swift_bridgeObjectRelease(0);
LAB_1008bda24:
  lVar10 = *(long *)(unaff_x20 + 0x30);
  FUN_1008c1058(0);
  if (DAT_100feb2b0 != -1) {
    _swift_once(&DAT_100feb2b0,FUN_1008c3000);
  }
  (extension_Dispatch)::__C::OS_dispatch_queue::_getSpecific();
  if ((local_68 == 0) || (lVar10 != local_68)) {
    puVar3 = &DAT_100f0ccd0;
    _swift_allocObject(&DAT_100f0ccd0,0x28,7);
    *(long *)(puVar3 + 0x10) = unaff_x20;
    *(ulong *)(puVar3 + 0x18) = param_1;
    *(undefined **)(puVar3 + 0x20) = puVar2;
    _swift_retain(puVar2);
    _swift_retain(unaff_x20);
    _swift_retain(uVar12);
    FUN_1008c2bb8(FUN_1008c1410,puVar3);
  }
  else {
    lVar10 = *(long *)(unaff_x20 + 0x50);
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x1008bdb38);
      (*pcVar11)();
    }
    _swift_retain(puVar2);
    _swift_retain(lVar10);
    FUN_100626f24(param_1,puVar2);
    _swift_release(lVar10);
    puVar3 = puVar2;
  }
  _swift_release(puVar3);
  _swift_release(puVar2);
  return;
}



/* Address: 0x1008bdb3c | FUN_1008bdb3c */

void FUN_1008bdb3c(long param_1,ulong param_2)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_1 + 0x48,auStack_48,0,0);
  lVar3 = *(long *)(param_1 + 0x48);
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008bdbd8);
    (*pcVar1)();
  }
  lVar5 = *(long *)(lVar3 + 0xc0);
  _swift_retain(lVar3);
  iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(lVar5 + 0x20));
  if (iVar2 == 0) {
    uVar4 = *(undefined8 *)(lVar5 + 0x10);
    *(ulong *)(lVar5 + 0x10) = param_2;
    _swift_retain(param_2 & 0x3fffffffffffffff);
    FUN_1005d8534(uVar4);
    iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar5 + 0x20));
    if (iVar2 == 0) {
      _swift_release(lVar3);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008bdbd4);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008bdbd0);
  (*pcVar1)();
}



/* Address: 0x1008bdbd8 | FUN_1008bdbd8 */

void FUN_1008bdbd8(ulong param_1,undefined *param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  long unaff_x20;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  code *pcVar11;
  ulong uVar12;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  long local_68;
  
  puVar2 = param_2;
  if (param_2 == (undefined *)0x0) {
    uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
    puVar2 = &DAT_100feb0f8;
    FUN_1000f7830(&DAT_100feb0f8,&DAT_100c82be0);
    _swift_allocObject();
    *(undefined8 *)(puVar2 + 0x20) = uVar9;
    *(undefined ***)(puVar2 + 0x28) = &PTR_PTR_100f0d740;
    *(undefined8 *)(puVar2 + 0x10) = 0;
    puVar2[0x18] = 0xff;
    *(undefined8 *)(puVar2 + 0x38) = 0;
    *(undefined8 *)(puVar2 + 0x40) = 0;
    *(undefined8 *)(puVar2 + 0x30) = 0;
    _swift_retain(uVar9);
  }
  puVar3 = &DAT_100f0ccf8;
  _swift_allocObject(&DAT_100f0ccf8,0x20,7);
  *(long *)(puVar3 + 0x10) = unaff_x20;
  *(ulong *)(puVar3 + 0x18) = param_1;
  puVar4 = &DAT_100f0cd20;
  _swift_allocObject(&DAT_100f0cd20,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_1008c1464;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  puVar5 = &DAT_100f0cd48;
  _swift_allocObject(&DAT_100f0cd48,0x28,7);
  *(undefined **)(puVar5 + 0x10) = puVar2;
  *(code **)(puVar5 + 0x18) = thunk_FUN_1000386a0;
  *(undefined **)(puVar5 + 0x20) = puVar4;
  uVar6 = *(ulong *)(puVar2 + 0x20);
  lVar10 = *(long *)(puVar2 + 0x28);
  _swift_getObjectType();
  pcVar11 = *(code **)(lVar10 + 0x10);
  uVar12 = param_1 & 0x3fffffffffffffff;
  _swift_retain_n(uVar12,2);
  _swift_retain_n(puVar2,3);
  _swift_retain_n(puVar4,2);
  _swift_retain_n();
  _swift_retain(param_2);
  _swift_retain(puVar3);
  uVar7 = uVar6;
  (*pcVar11)(uVar6,lVar10);
  if ((uVar7 & 1) == 0) {
    _swift_release(uVar12);
    _swift_release();
    _swift_release(puVar3);
    puVar3 = &DAT_100f0cd70;
    _swift_allocObject(&DAT_100f0cd70,0x28,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    *(code **)(puVar3 + 0x18) = thunk_FUN_1008a8990;
    *(undefined **)(puVar3 + 0x20) = puVar5;
    pcVar11 = *(code **)(lVar10 + 0x18);
    _swift_retain(puVar2);
    _swift_retain(puVar5);
    (*pcVar11)(thunk_FUN_1008c1400,puVar3,uVar6,lVar10);
    _swift_release(puVar3);
    _swift_release_n(puVar4,2);
    _swift_release_n(puVar2,2);
    _swift_release(puVar5);
    goto LAB_1008bdf50;
  }
  _swift_beginAccess(puVar2 + 0x10,auStack_80,0,0);
  if (puVar2[0x18] == '\x01') {
LAB_1008bdef4:
    _swift_release();
    _swift_release(puVar3);
    _swift_release(uVar12);
  }
  else {
    if (puVar2[0x18] != -1) {
      _swift_beginAccess(unaff_x20 + 0x48,auStack_98,0,0);
      puVar8 = *(undefined **)(unaff_x20 + 0x48);
      if (puVar8 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x1008be068);
        (*pcVar11)();
      }
      lVar10 = *(long *)(puVar8 + 0xc0);
      _swift_retain();
      _swift_retain(uVar12);
      _swift_retain(puVar8);
      iVar1 = _pthread_mutex_lock((pthread_mutex_t *)(lVar10 + 0x20));
      if (iVar1 != 0) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x1008be05c);
        (*pcVar11)();
      }
      uVar9 = *(undefined8 *)(lVar10 + 0x18);
      *(ulong *)(lVar10 + 0x18) = param_1;
      _swift_retain(uVar12);
      FUN_1005d8534(uVar9);
      iVar1 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar10 + 0x20));
      if (iVar1 != 0) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x1008be060);
        (*pcVar11)();
      }
      _swift_release(puVar3);
      _swift_release_n();
      puVar3 = puVar8;
      goto LAB_1008bdef4;
    }
    _swift_release(uVar12);
    _swift_release();
    _swift_release(puVar3);
    _swift_beginAccess(puVar2 + 0x30,auStack_98,0x21,0);
    FUN_10064967c(thunk_FUN_1008a8990,puVar5);
    _swift_endAccess(auStack_98);
  }
  FUN_1006486f8(0,0,0);
  FUN_100004550(0,0);
  _swift_release_n(puVar4,2);
  _swift_release_n(puVar2,2);
  _swift_release(puVar5);
  _swift_bridgeObjectRelease(0);
LAB_1008bdf50:
  lVar10 = *(long *)(unaff_x20 + 0x30);
  FUN_1008c1058(0);
  if (DAT_100feb2b0 != -1) {
    _swift_once(&DAT_100feb2b0,FUN_1008c3000);
  }
  (extension_Dispatch)::__C::OS_dispatch_queue::_getSpecific();
  if ((local_68 == 0) || (lVar10 != local_68)) {
    puVar3 = &DAT_100f0cd98;
    _swift_allocObject(&DAT_100f0cd98,0x28,7);
    *(long *)(puVar3 + 0x10) = unaff_x20;
    *(ulong *)(puVar3 + 0x18) = param_1;
    *(undefined **)(puVar3 + 0x20) = puVar2;
    _swift_retain(puVar2);
    _swift_retain(unaff_x20);
    _swift_retain(uVar12);
    FUN_1008c2bb8(FUN_1008c146c,puVar3);
  }
  else {
    lVar10 = *(long *)(unaff_x20 + 0x50);
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x1008be064);
      (*pcVar11)();
    }
    _swift_retain(puVar2);
    _swift_retain(lVar10);
    FUN_10062701c(param_1,puVar2);
    _swift_release(lVar10);
    puVar3 = puVar2;
  }
  _swift_release(puVar3);
  _swift_release(puVar2);
  return;
}



/* Address: 0x1008be068 | FUN_1008be068 */

void FUN_1008be068(long param_1,ulong param_2)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_1 + 0x48,auStack_48,0,0);
  lVar3 = *(long *)(param_1 + 0x48);
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008be104);
    (*pcVar1)();
  }
  lVar5 = *(long *)(lVar3 + 0xc0);
  _swift_retain(lVar3);
  iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(lVar5 + 0x20));
  if (iVar2 == 0) {
    uVar4 = *(undefined8 *)(lVar5 + 0x18);
    *(ulong *)(lVar5 + 0x18) = param_2;
    _swift_retain(param_2 & 0x3fffffffffffffff);
    FUN_1005d8534(uVar4);
    iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar5 + 0x20));
    if (iVar2 == 0) {
      _swift_release(lVar3);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008be100);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008be0fc);
  (*pcVar1)();
}



/* Address: 0x1008be104 | FUN_1008be104 */

void FUN_1008be104(long param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  code *pcVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x50);
  if (lVar2 != 0) {
    _swift_retain(lVar2);
    (*param_4)(param_2,param_3);
    _swift_release(lVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008be154);
  (*pcVar1)();
}



/* Address: 0x1008be154 | FUN_1008be154 */

void FUN_1008be154(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_3 + 0x30);
  uVar2 = 0;
  FUN_1008c8478();
  _swift_retain(uVar3);
  FUN_1008c3048(uVar2,&PTR_PTR_100f0d740);
  _swift_release(uVar3);
  if ((uVar2 & 1) != 0) {
    FUN_1008bc7a8(param_1,param_2,param_4,param_5);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008be204);
  (*pcVar1)();
}



/* Address: 0x1008be204 | FUN_1008be204 */

void FUN_1008be204(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_3 + 0x30);
  uVar2 = 0;
  FUN_1008c8478();
  _swift_retain(uVar3);
  FUN_1008c3048(uVar2,&PTR_PTR_100f0d740);
  _swift_release(uVar3);
  if ((uVar2 & 1) != 0) {
    FUN_1008bcb84(param_1,param_2,param_4,param_5);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008be2b4);
  (*pcVar1)();
}


