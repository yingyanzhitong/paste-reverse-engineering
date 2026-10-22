/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1005e1b1c | FUN_1005e1b1c */

void FUN_1005e1b1c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long unaff_x22;
  
  puVar4 = *(undefined8 **)(unaff_x22 + 0xc0);
  FUN_1005eb0ac(0,*(undefined8 *)(*(long *)(unaff_x22 + 0xb0) + 0x18));
  FUN_1005e9458();
  uVar3 = *puVar4;
  lVar1 = puVar4[1];
  uVar2 = uVar3;
  _swift_getObjectType(uVar3);
  *(undefined8 *)(unaff_x22 + 0x90) = uVar3;
  uVar3 = 2;
  FUN_100622b00(2,uVar2,*(undefined8 *)(lVar1 + 8));
  *(undefined8 *)(unaff_x22 + 0x118) = uVar3;
  _swift_task_switch(FUN_1005e1ba8,0,0);
  return;
}



/* Address: 0x1005e1ba8 | FUN_1005e1ba8 */

void FUN_1005e1ba8(void)

{
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_1005e1bfc;
  _swift_continuation_init(unaff_x22 + 0x10,1);
  FUN_1005da8d8();
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}



/* Address: 0x1005e1bfc | FUN_1005e1bfc */

void FUN_1005e1bfc(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0x30);
  *(long *)(*unaff_x22 + 0x120) = lVar2;
  if (lVar2 == 0) {
    pcVar1 = FUN_1005e1c68;
  }
  else {
    _swift_willThrow();
    pcVar1 = FUN_1005e1d18;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1005e1c68 | FUN_1005e1c68 */

void FUN_1005e1c68(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x118));
  _swift_task_switch(FUN_1005e1ca8,*(undefined8 *)(unaff_x22 + 0x108),
                     *(undefined8 *)(unaff_x22 + 0x110));
  return;
}



/* Address: 0x1005e1ca8 | FUN_1005e1ca8 */

void FUN_1005e1ca8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xe0);
  _swift_willThrow();
  _swift_errorRetain(uVar1);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xd0);
  _swift_willThrow();
  _swift_errorRelease(uVar2);
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001005e1d14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1005e1d18 | FUN_1005e1d18 */

void FUN_1005e1d18(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x118));
  _swift_task_switch(FUN_1005e1d58,*(undefined8 *)(unaff_x22 + 0x108),
                     *(undefined8 *)(unaff_x22 + 0x110));
  return;
}



/* Address: 0x1005e1d58 | FUN_1005e1d58 */

void FUN_1005e1d58(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xd0);
  _swift_willThrow();
  _swift_errorRelease(uVar2);
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001005e1db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1005e1db4 | FUN_1005e1db4 */

void FUN_1005e1db4(undefined8 param_1,int *param_2,undefined8 param_3,long param_4,long param_5)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long unaff_x20;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0xa8) = param_5;
  *(long *)(unaff_x22 + 0xb0) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x98) = param_1;
  *(long *)(unaff_x22 + 0xa0) = param_4;
  puVar3 = &DAT_100fd4ff8;
  FUN_1000f7830(&DAT_100fd4ff8,&DAT_100c65fe8);
  *(undefined **)(unaff_x22 + 0xb8) = puVar3;
  uVar5 = *(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xf;
  uVar4 = uVar5 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xc0) = uVar4;
  uVar5 = uVar5 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 200) = uVar5;
  lVar7 = *(long *)(param_5 + -8);
  *(long *)(unaff_x22 + 0xd0) = lVar7;
  uVar5 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xd8) = uVar5;
  iVar2 = *(int *)(param_4 + 0x24);
  iVar1 = *param_2;
  plVar6 = (long *)(ulong)(uint)param_2[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xe0) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_1005e1ea8;
                    /* WARNING: Could not recover jumptable at 0x0001005e1ea4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_2))(plVar6,uVar5,unaff_x20 + iVar2);
  return;
}



/* Address: 0x1005e1ea8 | FUN_1005e1ea8 */

void FUN_1005e1ea8(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xe8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xe0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1005e1f0c;
  }
  else {
    pcVar1 = FUN_1005e219c;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1005e1f0c | FUN_1005e1f0c */

void FUN_1005e1f0c(void)

{
  long lVar1;
  Continuation_conflict CVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x22;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 200);
  lVar6 = *(long *)(unaff_x22 + 0xb0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xb8);
  lVar1 = *(long *)(unaff_x22 + 0xa0);
  (**(code **)(*(long *)(unaff_x22 + 0xd0) + 0x20))
            (*(undefined8 *)(unaff_x22 + 0x98),*(undefined8 *)(unaff_x22 + 0xd8),
             *(undefined8 *)(unaff_x22 + 0xa8));
  FUN_1000f8cac(lVar6 + *(int *)(lVar1 + 0x28),uVar5,&DAT_100fd4ff8,&DAT_100c65fe8);
  _swift_getEnumCaseMultiPayload(uVar5,uVar4);
  if ((int)uVar5 == 1) {
    lVar6 = **(long **)(unaff_x22 + 200);
    FUN_1005e2cb0(0,*(undefined8 *)(lVar6 + 0x10));
    _swift_release(lVar6);
  }
  else {
    CVar2.unknown = &DAT_100fd5000;
    FUN_1000f7830(&DAT_100fd5000,&DAT_100c65ff0);
    lVar6 = *(long *)(CVar2.unknown + -8);
    uVar3 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc(uVar3);
    (**(code **)(lVar6 + 0x20))();
    Swift::AsyncStream::Continuation::finish(CVar2);
    (**(code **)(lVar6 + 8))(uVar3,CVar2.unknown);
    _swift_task_dealloc(uVar3);
  }
  uVar4 = **(undefined8 **)(unaff_x22 + 0xb0);
  lVar6 = (*(undefined8 **)(unaff_x22 + 0xb0))[1];
  _swift_getObjectType();
  FUN_10061cf14(2,0,uVar4,lVar6);
  (**(code **)(lVar6 + 0x20))(uVar4,lVar6);
  *(undefined8 *)(unaff_x22 + 0xf0) = uVar4;
  *(long *)(unaff_x22 + 0x50) = unaff_x22;
  *(code **)(unaff_x22 + 0x58) = FUN_1005e2078;
  _swift_continuation_init(unaff_x22 + 0x50,1);
  FUN_1005da8d8();
  _swift_continuation_await(unaff_x22 + 0x50);
  return;
}



/* Address: 0x1005e2078 | FUN_1005e2078 */

void FUN_1005e2078(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0x70);
  *(long *)(*unaff_x22 + 0xf8) = lVar2;
  if (lVar2 == 0) {
    pcVar1 = FUN_1005e20e4;
  }
  else {
    _swift_willThrow();
    pcVar1 = FUN_1005e213c;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1005e20e4 | FUN_1005e20e4 */

void FUN_1005e20e4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0xf0));
  uVar1 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar2 = *(undefined8 *)(unaff_x22 + 200);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xd8));
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001005e2138. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1005e213c | FUN_1005e213c */

void FUN_1005e213c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xf8);
  _swift_release(*(undefined8 *)(unaff_x22 + 0xf0));
  _swift_errorRelease(uVar1);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar2 = *(undefined8 *)(unaff_x22 + 200);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xd8));
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001005e2198. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1005e219c | FUN_1005e219c */

void FUN_1005e219c(void)

{
  undefined8 uVar1;
  Continuation_conflict CVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xc0);
  FUN_1000f8cac(*(long *)(unaff_x22 + 0xb0) + (long)*(int *)(*(long *)(unaff_x22 + 0xa0) + 0x28),
                uVar1,&DAT_100fd4ff8,&DAT_100c65fe8);
  _swift_getEnumCaseMultiPayload(uVar1,uVar4);
  if ((int)uVar1 == 1) {
    lVar5 = **(long **)(unaff_x22 + 0xc0);
    FUN_1005e2cb0(0,*(undefined8 *)(lVar5 + 0x10));
    _swift_release(lVar5);
  }
  else {
    CVar2.unknown = &DAT_100fd5000;
    FUN_1000f7830(&DAT_100fd5000,&DAT_100c65ff0);
    lVar5 = *(long *)(CVar2.unknown + -8);
    uVar3 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc(uVar3);
    (**(code **)(lVar5 + 0x20))();
    Swift::AsyncStream::Continuation::finish(CVar2);
    (**(code **)(lVar5 + 8))(uVar3,CVar2.unknown);
    _swift_task_dealloc(uVar3);
  }
  uVar4 = **(undefined8 **)(unaff_x22 + 0xb0);
  lVar5 = (*(undefined8 **)(unaff_x22 + 0xb0))[1];
  uVar1 = uVar4;
  _swift_getObjectType(uVar4);
  *(undefined8 *)(unaff_x22 + 0x90) = uVar4;
  uVar4 = 2;
  FUN_100622b00(2,uVar1,*(undefined8 *)(lVar5 + 8));
  *(undefined8 *)(unaff_x22 + 0x100) = uVar4;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_1005e22e8;
  _swift_continuation_init(unaff_x22 + 0x10,1);
  FUN_1005da8d8();
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}



/* Address: 0x1005e22e8 | FUN_1005e22e8 */

void FUN_1005e22e8(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0x30);
  *(long *)(*unaff_x22 + 0x108) = lVar2;
  if (lVar2 == 0) {
    pcVar1 = FUN_1005e2354;
  }
  else {
    _swift_willThrow();
    pcVar1 = FUN_1005e23e8;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1005e2354 | FUN_1005e2354 */

void FUN_1005e2354(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0xe8);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x100));
  _swift_willThrow();
  _swift_errorRetain(uVar3);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar1 = *(undefined8 *)(unaff_x22 + 200);
  _swift_willThrow();
  _swift_errorRelease(uVar4);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001005e23e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1005e23e8 | FUN_1005e23e8 */

void FUN_1005e23e8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x100));
  uVar4 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar2 = *(undefined8 *)(unaff_x22 + 200);
  _swift_willThrow();
  _swift_errorRelease(uVar4);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001005e2464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1005e2468 | FUN_1005e2468 */

void FUN_1005e2468(undefined8 param_1,undefined8 param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5,long param_6,long param_7)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long unaff_x20;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0xb8) = param_7;
  *(long *)(unaff_x22 + 0xc0) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_3;
  *(long *)(unaff_x22 + 0xb0) = param_6;
  *(undefined8 *)(unaff_x22 + 0x98) = param_1;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_2;
  puVar3 = &DAT_100fd4ff8;
  FUN_1000f7830(&DAT_100fd4ff8,&DAT_100c65fe8);
  *(undefined **)(unaff_x22 + 200) = puVar3;
  uVar5 = *(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xf;
  uVar4 = uVar5 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xd0) = uVar4;
  uVar5 = uVar5 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xd8) = uVar5;
  lVar7 = *(long *)(param_7 + -8);
  *(long *)(unaff_x22 + 0xe0) = lVar7;
  uVar5 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xe8) = uVar5;
  iVar2 = *(int *)(param_6 + 0x24);
  iVar1 = *param_4;
  plVar6 = (long *)(ulong)(uint)param_4[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xf0) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_1005e2560;
                    /* WARNING: Could not recover jumptable at 0x0001005e255c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_4))(plVar6,uVar5,unaff_x20 + iVar2);
  return;
}



/* Address: 0x1005e2560 | FUN_1005e2560 */

void FUN_1005e2560(void)

{
  UnownedSerialExecutor UVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  long lVar5;
  
  lVar5 = *unaff_x22;
  *(long *)(lVar5 + 0xf8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar5 + 0xf0));
  lVar3 = *(long *)(lVar5 + 0xa0);
  if (unaff_x20 == 0) {
    if (lVar3 == 0) {
      UVar1.unknown = (undefined *)0x0;
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(lVar5 + 0xa8);
      _swift_getObjectType(lVar3);
      UVar1 = Swift::Actor::get_unownedExecutor();
    }
    *(undefined **)(lVar5 + 0x100) = UVar1.unknown;
    *(undefined8 *)(lVar5 + 0x108) = uVar4;
    pcVar2 = FUN_1005e2634;
  }
  else {
    if (lVar3 == 0) {
      UVar1.unknown = (undefined *)0x0;
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(lVar5 + 0xa8);
      _swift_getObjectType(lVar3);
      UVar1 = Swift::Actor::get_unownedExecutor();
    }
    *(undefined **)(lVar5 + 0x120) = UVar1.unknown;
    *(undefined8 *)(lVar5 + 0x128) = uVar4;
    pcVar2 = FUN_1005e2938;
  }
  _swift_task_switch(pcVar2,UVar1.unknown);
  return;
}



/* Address: 0x1005e2634 | FUN_1005e2634 */

void FUN_1005e2634(void)

{
  long lVar1;
  Continuation_conflict CVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x22;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0xd8);
  lVar6 = *(long *)(unaff_x22 + 0xc0);
  uVar4 = *(undefined8 *)(unaff_x22 + 200);
  lVar1 = *(long *)(unaff_x22 + 0xb0);
  (**(code **)(*(long *)(unaff_x22 + 0xe0) + 0x20))
            (*(undefined8 *)(unaff_x22 + 0x98),*(undefined8 *)(unaff_x22 + 0xe8),
             *(undefined8 *)(unaff_x22 + 0xb8));
  FUN_1000f8cac(lVar6 + *(int *)(lVar1 + 0x28),uVar5,&DAT_100fd4ff8,&DAT_100c65fe8);
  _swift_getEnumCaseMultiPayload(uVar5,uVar4);
  if ((int)uVar5 == 1) {
    lVar6 = **(long **)(unaff_x22 + 0xd8);
    FUN_1005e2cb0(0,*(undefined8 *)(lVar6 + 0x10));
    _swift_release(lVar6);
  }
  else {
    CVar2.unknown = &DAT_100fd5000;
    FUN_1000f7830(&DAT_100fd5000,&DAT_100c65ff0);
    lVar6 = *(long *)(CVar2.unknown + -8);
    uVar3 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc(uVar3);
    (**(code **)(lVar6 + 0x20))();
    Swift::AsyncStream::Continuation::finish(CVar2);
    (**(code **)(lVar6 + 8))(uVar3,CVar2.unknown);
    _swift_task_dealloc(uVar3);
  }
  uVar4 = **(undefined8 **)(unaff_x22 + 0xc0);
  lVar6 = (*(undefined8 **)(unaff_x22 + 0xc0))[1];
  _swift_getObjectType();
  FUN_10061cf14(2,0,uVar4,lVar6);
  (**(code **)(lVar6 + 0x20))(uVar4,lVar6);
  *(undefined8 *)(unaff_x22 + 0x110) = uVar4;
  _swift_task_switch(FUN_1005e2788,0,0);
  return;
}



/* Address: 0x1005e2788 | FUN_1005e2788 */

void FUN_1005e2788(void)

{
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x50) = unaff_x22;
  *(code **)(unaff_x22 + 0x58) = FUN_1005e27dc;
  _swift_continuation_init(unaff_x22 + 0x50,1);
  FUN_1005da8d8();
  _swift_continuation_await(unaff_x22 + 0x50);
  return;
}



/* Address: 0x1005e27dc | FUN_1005e27dc */

void FUN_1005e27dc(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0x70);
  *(long *)(*unaff_x22 + 0x118) = lVar2;
  if (lVar2 == 0) {
    pcVar1 = FUN_1005e2848;
  }
  else {
    _swift_willThrow();
    pcVar1 = FUN_1005e28a0;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1005e2848 | FUN_1005e2848 */

void FUN_1005e2848(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x110));
  uVar1 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd8);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xe8));
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001005e289c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1005e28a0 | FUN_1005e28a0 */

void FUN_1005e28a0(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x110));
  _swift_task_switch(FUN_1005e28e0,*(undefined8 *)(unaff_x22 + 0x100),
                     *(undefined8 *)(unaff_x22 + 0x108));
  return;
}



/* Address: 0x1005e28e0 | FUN_1005e28e0 */

void FUN_1005e28e0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x118));
  uVar1 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd8);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xe8));
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001005e2934. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1005e2938 | FUN_1005e2938 */

void FUN_1005e2938(void)

{
  undefined8 uVar1;
  Continuation_conflict CVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 200);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xd0);
  FUN_1000f8cac(*(long *)(unaff_x22 + 0xc0) + (long)*(int *)(*(long *)(unaff_x22 + 0xb0) + 0x28),
                uVar1,&DAT_100fd4ff8,&DAT_100c65fe8);
  _swift_getEnumCaseMultiPayload(uVar1,uVar4);
  if ((int)uVar1 == 1) {
    lVar5 = **(long **)(unaff_x22 + 0xd0);
    FUN_1005e2cb0(0,*(undefined8 *)(lVar5 + 0x10));
    _swift_release(lVar5);
  }
  else {
    CVar2.unknown = &DAT_100fd5000;
    FUN_1000f7830(&DAT_100fd5000,&DAT_100c65ff0);
    lVar5 = *(long *)(CVar2.unknown + -8);
    uVar3 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc(uVar3);
    (**(code **)(lVar5 + 0x20))();
    Swift::AsyncStream::Continuation::finish(CVar2);
    (**(code **)(lVar5 + 8))(uVar3,CVar2.unknown);
    _swift_task_dealloc(uVar3);
  }
  uVar4 = **(undefined8 **)(unaff_x22 + 0xc0);
  lVar5 = (*(undefined8 **)(unaff_x22 + 0xc0))[1];
  uVar1 = uVar4;
  _swift_getObjectType(uVar4);
  *(undefined8 *)(unaff_x22 + 0x90) = uVar4;
  uVar4 = 2;
  FUN_100622b00(2,uVar1,*(undefined8 *)(lVar5 + 8));
  *(undefined8 *)(unaff_x22 + 0x130) = uVar4;
  _swift_task_switch(FUN_1005e2a6c,0,0);
  return;
}



/* Address: 0x1005e2a6c | FUN_1005e2a6c */

void FUN_1005e2a6c(void)

{
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_1005e2ac0;
  _swift_continuation_init(unaff_x22 + 0x10,1);
  FUN_1005da8d8();
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}



/* Address: 0x1005e2ac0 | FUN_1005e2ac0 */

void FUN_1005e2ac0(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0x30);
  *(long *)(*unaff_x22 + 0x138) = lVar2;
  if (lVar2 == 0) {
    pcVar1 = FUN_1005e2b2c;
  }
  else {
    _swift_willThrow();
    pcVar1 = FUN_1005e2bf8;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1005e2b2c | FUN_1005e2b2c */

void FUN_1005e2b2c(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x130));
  _swift_task_switch(FUN_1005e2b6c,*(undefined8 *)(unaff_x22 + 0x120),
                     *(undefined8 *)(unaff_x22 + 0x128));
  return;
}



/* Address: 0x1005e2b6c | FUN_1005e2b6c */

void FUN_1005e2b6c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0xf8);
  _swift_willThrow();
  _swift_errorRetain(uVar3);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xd8);
  _swift_willThrow();
  _swift_errorRelease(uVar4);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001005e2bf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1005e2bf8 | FUN_1005e2bf8 */

void FUN_1005e2bf8(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x130));
  _swift_task_switch(FUN_1005e2c38,*(undefined8 *)(unaff_x22 + 0x120),
                     *(undefined8 *)(unaff_x22 + 0x128));
  return;
}



/* Address: 0x1005e2c38 | FUN_1005e2c38 */

void FUN_1005e2c38(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd8);
  _swift_willThrow();
  _swift_errorRelease(uVar4);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001005e2cac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1005e2cb0 | FUN_1005e2cb0 */

void FUN_1005e2cb0(undefined8 param_1,long param_2,undefined8 param_3,void *param_4)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  undefined *puVar4;
  _StringGuts _Var5;
  char *pcVar6;
  long *plVar7;
  ulong uVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  ulong local_a8;
  undefined *puStack_a0;
  char *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  code *pcStack_78;
  undefined8 uStack_70;
  char local_68;
  
  iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(param_2 + 0xa8));
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1005e2ef0);
    (*pcVar1)();
  }
  FUN_1005e2fb4(&local_a8,param_1);
  iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(param_2 + 0xa8));
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1005e2ef4);
    (*pcVar1)();
  }
  if (local_68 == '\0') {
    uVar8 = local_a8;
    _swift_getObjectType();
    uVar3 = uVar8;
    (**(code **)(puStack_a0 + 0x10))();
    if ((uVar3 & 1) == 0) {
      puVar4 = &DAT_100ee88c0;
      _swift_allocObject(&DAT_100ee88c0,0x58,7);
      *(ulong *)(puVar4 + 0x10) = local_a8;
      *(undefined **)(puVar4 + 0x18) = puStack_a0;
      *(char **)(puVar4 + 0x20) = local_98;
      *(undefined8 *)(puVar4 + 0x28) = uStack_90;
      *(undefined8 *)(puVar4 + 0x30) = local_88;
      *(code **)(puVar4 + 0x40) = pcStack_78;
      *(undefined8 *)(puVar4 + 0x38) = local_80;
      *(undefined8 *)(puVar4 + 0x48) = uStack_70;
      *(undefined8 *)(puVar4 + 0x50) = param_1;
      pcVar1 = *(code **)(puStack_a0 + 0x18);
      _swift_unknownObjectRetain(local_a8);
      _swift_retain(uStack_90);
      _swift_retain(local_80);
      _swift_retain(uStack_70);
      _swift_errorRetain(param_1);
      (*pcVar1)(FUN_1005e4670,puVar4,uVar8,puStack_a0);
      _swift_release(puVar4);
      _swift_release(uStack_70);
    }
    else {
      (*pcStack_78)(param_1);
      _swift_release(uStack_70);
    }
    _swift_release(local_80);
    _swift_release(uStack_90);
    _swift_unknownObjectRelease(local_a8);
    return;
  }
  if (local_68 != '\x01') {
    return;
  }
  _Var5.unknown = puStack_a0;
  pcVar6 = local_98;
  FUN_1005e4618(local_a8);
  uVar8 = 0;
  plVar7 = (long *)(local_a8 + 0x28);
  do {
    if (((uint)local_98 & 0xff) == 1) {
      if (uVar8 == *(ulong *)(local_a8 + 0x10)) goto LAB_1005e2e98;
      if (*(ulong *)(local_a8 + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1005e2eec);
        (*pcVar1)();
      }
      puVar4 = (undefined *)*plVar7;
    }
    else {
      puVar4 = puStack_a0;
      if (uVar8 != 0) {
        if (uVar8 != 1) {
          Swift::_StringGuts::grow(0x16,_Var5);
          _swift_bridgeObjectRelease(0xe000000000000000);
          SVar9 = Swift::CustomStringConvertible::get_description();
          SVar11.bridgeObject = param_4;
          SVar11.str = pcVar6;
          Swift::String::append(SVar9,SVar11);
          _swift_bridgeObjectRelease(SVar9.bridgeObject);
          SVar9.bridgeObject = (void *)0xee0073646e756f62;
          SVar9.str = (char *)0x20666f2074756f20;
          SVar12.bridgeObject = param_4;
          SVar12.str = pcVar6;
          Swift::String::append(SVar9,SVar12);
          SVar10.bridgeObject = (void *)0x2;
          SVar10.str = (char *)0xb;
          Swift::_assertionFailure
                    ((StaticString)0x100d8deb0,SVar10,(StaticString)0x207865646e69,
                     0xe600000000000000,0xdae790);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1005e2fb4);
          (*pcVar1)();
        }
LAB_1005e2e98:
        FUN_1000fb4c4(&local_a8,&DAT_100fd5108,&DAT_100c66080);
        FUN_1000fb4c4(&local_a8,&DAT_100fd5108,&DAT_100c66080);
        return;
      }
    }
    uVar8 = uVar8 + 1;
    **(undefined1 **)(*(long *)(puVar4 + 0x40) + 0x28) = 1;
    _swift_continuation_throwingResume();
    plVar7 = plVar7 + 2;
  } while( true );
}



/* Address: 0x1005e2fb4 | FUN_1005e2fb4 */

void FUN_1005e2fb4(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  char cVar3;
  undefined2 uVar4;
  code *pcVar5;
  int iVar6;
  undefined **ppuVar7;
  _StringGuts _Var8;
  char *pcVar9;
  undefined *puVar10;
  undefined1 uVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  undefined8 *unaff_x20;
  long lVar14;
  undefined8 uVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  undefined8 local_338;
  undefined *puStack_330;
  undefined *local_328;
  char cStack_320;
  undefined7 uStack_31f;
  undefined *local_318;
  undefined *puStack_310;
  undefined1 local_308;
  undefined7 uStack_307;
  undefined *puStack_300;
  undefined *local_2f8;
  undefined *puStack_2f0;
  undefined *local_2e8;
  undefined *puStack_2e0;
  undefined *local_2d8;
  undefined *puStack_2d0;
  undefined *local_2c8;
  undefined8 uStack_2c0;
  undefined1 local_2b8;
  undefined *local_2b0;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  undefined8 uStack_298;
  undefined *local_290;
  undefined *puStack_288;
  undefined8 uStack_280;
  undefined *puStack_278;
  undefined *local_270;
  undefined *puStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined *local_250;
  undefined *puStack_248;
  undefined *puStack_240;
  undefined8 uStack_238;
  undefined1 local_230;
  StaticString local_220;
  undefined1 *puStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined1 local_1a0;
  undefined *local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
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
  undefined1 local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 local_80;
  
  uStack_138 = unaff_x20[0xb];
  uStack_140 = unaff_x20[10];
  uStack_98 = unaff_x20[0xd];
  local_a0 = unaff_x20[0xc];
  uStack_128 = unaff_x20[0xd];
  local_130 = unaff_x20[0xc];
  uStack_88 = unaff_x20[0xf];
  uStack_90 = unaff_x20[0xe];
  uStack_178 = unaff_x20[3];
  uStack_180 = unaff_x20[2];
  uStack_d8 = unaff_x20[5];
  local_e0 = unaff_x20[4];
  uStack_168 = unaff_x20[5];
  local_170 = unaff_x20[4];
  uStack_c8 = unaff_x20[7];
  uStack_d0 = unaff_x20[6];
  uStack_158 = unaff_x20[7];
  uStack_160 = unaff_x20[6];
  uStack_b8 = unaff_x20[9];
  local_c0 = unaff_x20[8];
  uStack_148 = unaff_x20[9];
  local_150 = unaff_x20[8];
  uStack_a8 = unaff_x20[0xb];
  uStack_b0 = unaff_x20[10];
  uStack_f8 = unaff_x20[1];
  local_100 = *unaff_x20;
  uStack_e8 = unaff_x20[3];
  uStack_f0 = unaff_x20[2];
  uStack_188 = unaff_x20[1];
  local_190 = (undefined *)*unaff_x20;
  uStack_118 = unaff_x20[0xf];
  uStack_120 = unaff_x20[0xe];
  local_80 = *(undefined1 *)(unaff_x20 + 0x10);
  local_110 = *(undefined1 *)(unaff_x20 + 0x10);
  iVar6 = (int)&local_190;
  FUN_1005e4694();
  if (iVar6 < 2) {
    if (iVar6 == 0) {
      ppuVar7 = &local_190;
      FUN_100004520();
      puVar25 = ppuVar7[4];
      puVar24 = ppuVar7[3];
      puVar23 = ppuVar7[2];
      puVar22 = ppuVar7[1];
      puVar21 = ppuVar7[8];
      puVar20 = ppuVar7[7];
      puVar19 = ppuVar7[6];
      puVar18 = ppuVar7[5];
      puStack_288 = (undefined *)unaff_x20[5];
      local_290 = (undefined *)unaff_x20[4];
      puStack_278 = (undefined *)unaff_x20[7];
      uStack_280 = unaff_x20[6];
      puStack_2a8 = (undefined *)unaff_x20[1];
      local_2b0 = (undefined *)*unaff_x20;
      uStack_298 = unaff_x20[3];
      puStack_2a0 = (undefined *)unaff_x20[2];
      local_230 = *(undefined1 *)(unaff_x20 + 0x10);
      puStack_248 = (undefined *)unaff_x20[0xd];
      local_250 = (undefined *)unaff_x20[0xc];
      uStack_238 = unaff_x20[0xf];
      puStack_240 = (undefined *)unaff_x20[0xe];
      puStack_268 = (undefined *)unaff_x20[9];
      local_270 = (undefined *)unaff_x20[8];
      puStack_258 = (undefined *)unaff_x20[0xb];
      puStack_260 = (undefined *)unaff_x20[10];
      FUN_1000f8cac(&local_100,&local_220,&DAT_100fd5110,&DAT_100c66088);
      FUN_1000fb4c4(&local_2b0,&DAT_100fd5110,&DAT_100c66088);
      local_220.unknown = (undefined *)0x0;
      FUN_1005e46cc(&local_220);
      uVar11 = 0;
      *(undefined1 *)(unaff_x20 + 0x10) = local_1a0;
      unaff_x20[0xd] = uStack_1b8;
      unaff_x20[0xc] = local_1c0;
      unaff_x20[0xf] = uStack_1a8;
      unaff_x20[0xe] = uStack_1b0;
      unaff_x20[5] = uStack_1f8;
      unaff_x20[4] = local_200;
      unaff_x20[7] = uStack_1e8;
      unaff_x20[6] = uStack_1f0;
      unaff_x20[9] = uStack_1d8;
      unaff_x20[8] = local_1e0;
      unaff_x20[0xb] = uStack_1c8;
      unaff_x20[10] = uStack_1d0;
      unaff_x20[1] = puStack_218;
      *unaff_x20 = local_220.unknown;
      unaff_x20[3] = uStack_208;
      unaff_x20[2] = uStack_210;
    }
    else {
      ppuVar7 = &local_190;
      FUN_100004520();
      uVar11 = *(undefined1 *)ppuVar7;
      puVar10 = *ppuVar7;
      uVar4 = *(undefined2 *)ppuVar7;
      local_318 = ppuVar7[1];
      puVar1 = ppuVar7[2];
      puVar12 = ppuVar7[3];
      cVar3 = *(char *)(ppuVar7 + 4);
      puStack_2f0 = ppuVar7[7];
      local_2e8 = ppuVar7[8];
      puStack_300 = ppuVar7[5];
      local_2f8 = ppuVar7[6];
      puStack_2d0 = ppuVar7[0xb];
      local_2c8 = ppuVar7[0xc];
      puStack_2e0 = ppuVar7[9];
      local_2d8 = ppuVar7[10];
      uStack_2c0 = param_2;
      if (cVar3 == '\x01') {
        puVar17 = *(undefined1 **)(puVar1 + 0x10);
        if (puVar17 == (undefined1 *)0x0) {
          puVar25 = ppuVar7[8];
          puVar24 = ppuVar7[7];
          puVar23 = ppuVar7[6];
          puVar22 = ppuVar7[5];
          puVar21 = ppuVar7[0xc];
          puVar20 = ppuVar7[0xb];
          puVar19 = ppuVar7[10];
          puVar18 = ppuVar7[9];
          FUN_1000f8cac(&local_100,&local_220,&DAT_100fd5110,&DAT_100c66088);
          FUN_10000cae0(puVar1,puVar12,1);
          if (((ulong)puVar10 & 0x100) == 0) {
            _swift_bridgeObjectRelease(local_318);
            FUN_1000fb4c4();
            local_220.unknown = (undefined *)0x0;
            FUN_1005e46cc(&local_220);
            uVar11 = 0;
            *(undefined1 *)(unaff_x20 + 0x10) = local_1a0;
            unaff_x20[0xd] = uStack_1b8;
            unaff_x20[0xc] = local_1c0;
            unaff_x20[0xf] = uStack_1a8;
            unaff_x20[0xe] = uStack_1b0;
            unaff_x20[5] = uStack_1f8;
            unaff_x20[4] = local_200;
            unaff_x20[7] = uStack_1e8;
            unaff_x20[6] = uStack_1f0;
            unaff_x20[9] = uStack_1d8;
            unaff_x20[8] = local_1e0;
            unaff_x20[0xb] = uStack_1c8;
            unaff_x20[10] = uStack_1d0;
            unaff_x20[1] = puStack_218;
            *unaff_x20 = local_220.unknown;
            unaff_x20[3] = uStack_208;
            unaff_x20[2] = uStack_210;
          }
          else {
            local_338._0_2_ = CONCAT11(1,uVar11);
            puStack_330 = PTR___swiftEmptyArrayStorage_100eae0d8;
            local_328 = (undefined *)0x0;
            cStack_320 = 1;
            puStack_310 = PTR___swiftEmptyArrayStorage_100eae0d8;
            local_308 = 1;
            FUN_1005e46c0(&local_338);
            puStack_248 = puStack_2d0;
            local_250 = local_2d8;
            uStack_238 = uStack_2c0;
            puStack_240 = local_2c8;
            local_230 = local_2b8;
            uStack_280 = CONCAT71(uStack_307,local_308);
            puStack_288 = puStack_310;
            local_290 = local_318;
            puStack_278 = puStack_300;
            puStack_268 = puStack_2f0;
            local_270 = local_2f8;
            puStack_258 = puStack_2e0;
            puStack_260 = local_2e8;
            uStack_298 = CONCAT71(uStack_31f,cStack_320);
            puStack_2a8 = puStack_330;
            local_2b0 = local_338;
            puStack_2a0 = local_328;
            uStack_1b8 = unaff_x20[0xd];
            local_1c0 = unaff_x20[0xc];
            uStack_1a8 = unaff_x20[0xf];
            uStack_1b0 = unaff_x20[0xe];
            local_1a0 = *(undefined1 *)(unaff_x20 + 0x10);
            uStack_1f8 = unaff_x20[5];
            local_200 = unaff_x20[4];
            uStack_1e8 = unaff_x20[7];
            uStack_1f0 = unaff_x20[6];
            uStack_1d8 = unaff_x20[9];
            local_1e0 = unaff_x20[8];
            uStack_1c8 = unaff_x20[0xb];
            uStack_1d0 = unaff_x20[10];
            puStack_218 = (undefined1 *)unaff_x20[1];
            local_220.unknown = (undefined *)*unaff_x20;
            uStack_208 = unaff_x20[3];
            uStack_210 = unaff_x20[2];
            _swift_errorRetain(param_2);
            FUN_1000fb4c4(&local_220,&DAT_100fd5118,&DAT_100c66090);
            unaff_x20[0xd] = puStack_248;
            unaff_x20[0xc] = local_250;
            unaff_x20[0xf] = uStack_238;
            unaff_x20[0xe] = puStack_240;
            unaff_x20[5] = puStack_288;
            unaff_x20[4] = local_290;
            unaff_x20[7] = puStack_278;
            unaff_x20[6] = uStack_280;
            unaff_x20[9] = puStack_268;
            unaff_x20[8] = local_270;
            unaff_x20[0xb] = puStack_258;
            unaff_x20[10] = puStack_260;
            puVar22 = (undefined *)0x0;
            puVar23 = (undefined *)0x0;
            uVar11 = 2;
            puVar24 = (undefined *)0x0;
            puVar25 = (undefined *)0x0;
            unaff_x20[1] = puStack_2a8;
            *unaff_x20 = local_2b0;
            unaff_x20[3] = uStack_298;
            unaff_x20[2] = puStack_2a0;
            puVar18 = (undefined *)0x0;
            puVar19 = (undefined *)0x0;
            puVar20 = (undefined *)0x0;
            puVar21 = (undefined *)0x0;
            *(undefined1 *)(unaff_x20 + 0x10) = local_230;
          }
          goto LAB_1005e35e0;
        }
      }
      else {
        puVar17 = &DAT_00000001;
      }
      puVar10 = &DAT_100c66088;
      FUN_1000f8cac(&local_100,&local_220,&DAT_100fd5110);
      local_2b0 = PTR___swiftEmptyArrayStorage_100eae0d8;
      pcVar9 = (char *)0x0;
      _Var8.unknown = puVar17;
      FUN_100624f5c(0);
      puVar22 = puVar1;
      if (cVar3 == '\x01') {
        if (*(long *)(puVar1 + 0x10) == 0) {
LAB_1005e3700:
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1005e3704);
          (*pcVar5)();
        }
        puVar22 = *(undefined **)(puVar1 + 0x20);
      }
      uVar2 = *(ulong *)(local_2b0 + 0x10);
      if (*(ulong *)(local_2b0 + 0x18) >> 1 <= uVar2) {
        pcVar9 = &DAT_00000001;
        _Var8.unknown = (undefined1 *)(uVar2 + 1);
        FUN_100624f5c(1 < *(ulong *)(local_2b0 + 0x18));
      }
      *(undefined1 **)(local_2b0 + 0x10) = (undefined1 *)(uVar2 + 1);
      *(undefined **)(local_2b0 + uVar2 * 8 + 0x20) = puVar22;
      if ((cVar3 == '\x01') && (*(long *)(puVar1 + 0x10) == 0)) {
LAB_1005e36fc:
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1005e3700);
        (*pcVar5)();
      }
      if (puVar17 != &DAT_00000001) {
        lVar14 = uVar2 + 5;
        puVar13 = (undefined8 *)(puVar1 + 0x30);
        puVar16 = &DAT_00000001;
        do {
          if (cVar3 != '\x01') {
            local_220.unknown = (undefined *)0x0;
            puStack_218 = (undefined1 *)0xe000000000000000;
            Swift::_StringGuts::grow(0x16,_Var8);
            _swift_bridgeObjectRelease(puStack_218);
            local_220.unknown = (undefined *)0x207865646e69;
            puStack_218 = &DAT_e600000000000000;
            local_338 = puVar16;
            SVar26 = Swift::CustomStringConvertible::get_description();
            SVar28.bridgeObject = puVar10;
            SVar28.str = pcVar9;
            Swift::String::append(SVar26,SVar28);
            _swift_bridgeObjectRelease(SVar26.bridgeObject);
            SVar26.bridgeObject = (void *)0xee0073646e756f62;
            SVar26.str = (char *)0x20666f2074756f20;
            SVar29.bridgeObject = puVar10;
            SVar29.str = pcVar9;
            Swift::String::append(SVar26,SVar29);
            SVar27.bridgeObject = (void *)0x2;
            SVar27.str = (char *)0xb;
            Swift::_assertionFailure
                      ((StaticString)0x100d8deb0,SVar27,local_220,(__uint64)puStack_218,0xdae790);
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1005e37f4);
            (*pcVar5)();
          }
          if (*(undefined1 **)(puVar1 + 0x10) <= puVar16) goto LAB_1005e3700;
          uVar15 = *puVar13;
          if (*(ulong *)(local_2b0 + 0x18) >> 1 <= lVar14 - 4U) {
            pcVar9 = &DAT_00000001;
            _Var8.unknown = (undefined *)(lVar14 + -3);
            FUN_100624f5c(1 < *(ulong *)(local_2b0 + 0x18));
          }
          *(undefined **)(local_2b0 + 0x10) = (undefined *)(lVar14 + -3);
          *(undefined8 *)(local_2b0 + lVar14 * 8) = uVar15;
          if (*(undefined1 **)(puVar1 + 0x10) <= puVar16) goto LAB_1005e36fc;
          puVar16 = puVar16 + 1;
          lVar14 = lVar14 + 1;
          puVar13 = puVar13 + 2;
        } while (puVar17 != puVar16);
      }
      puVar10 = local_2b0;
      local_220.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
      puStack_218 = (undefined1 *)CONCAT71(puStack_218._1_7_,1);
      FUN_1005e37f4(local_2b0);
      _swift_bridgeObjectRelease(puVar10);
      local_338 = (undefined1 *)CONCAT62(local_338._2_6_,uVar4);
      puStack_310 = local_220.unknown;
      local_308 = puStack_218._0_1_;
      puStack_330 = puVar1;
      local_328 = puVar12;
      cStack_320 = cVar3;
      FUN_1005e46c0(&local_338);
      puStack_248 = puStack_2d0;
      local_250 = local_2d8;
      uStack_238 = uStack_2c0;
      puStack_240 = local_2c8;
      local_230 = local_2b8;
      uStack_280 = CONCAT71(uStack_307,local_308);
      puStack_288 = puStack_310;
      local_290 = local_318;
      puStack_278 = puStack_300;
      puStack_268 = puStack_2f0;
      local_270 = local_2f8;
      puStack_258 = puStack_2e0;
      puStack_260 = local_2e8;
      uStack_298 = CONCAT71(uStack_31f,cStack_320);
      puStack_2a8 = puStack_330;
      local_2b0 = local_338;
      puStack_2a0 = local_328;
      uStack_1b8 = unaff_x20[0xd];
      local_1c0 = unaff_x20[0xc];
      uStack_1a8 = unaff_x20[0xf];
      uStack_1b0 = unaff_x20[0xe];
      local_1a0 = *(undefined1 *)(unaff_x20 + 0x10);
      uStack_1f8 = unaff_x20[5];
      local_200 = unaff_x20[4];
      uStack_1e8 = unaff_x20[7];
      uStack_1f0 = unaff_x20[6];
      uStack_1d8 = unaff_x20[9];
      local_1e0 = unaff_x20[8];
      uStack_1c8 = unaff_x20[0xb];
      uStack_1d0 = unaff_x20[10];
      puStack_218 = (undefined1 *)unaff_x20[1];
      local_220.unknown = (undefined *)*unaff_x20;
      uStack_208 = unaff_x20[3];
      uStack_210 = unaff_x20[2];
      _swift_errorRetain(param_2);
      FUN_1000fb4c4(&local_220,&DAT_100fd5118,&DAT_100c66090);
      unaff_x20[0xd] = puStack_248;
      unaff_x20[0xc] = local_250;
      unaff_x20[0xf] = uStack_238;
      unaff_x20[0xe] = puStack_240;
      unaff_x20[5] = puStack_288;
      unaff_x20[4] = local_290;
      unaff_x20[7] = puStack_278;
      unaff_x20[6] = uStack_280;
      unaff_x20[9] = puStack_268;
      unaff_x20[8] = local_270;
      unaff_x20[0xb] = puStack_258;
      unaff_x20[10] = puStack_260;
      puVar22 = (undefined *)0x0;
      puVar23 = (undefined *)0x0;
      uVar11 = 2;
      puVar24 = (undefined *)0x0;
      puVar25 = (undefined *)0x0;
      unaff_x20[1] = puStack_2a8;
      *unaff_x20 = local_2b0;
      unaff_x20[3] = uStack_298;
      unaff_x20[2] = puStack_2a0;
      puVar18 = (undefined *)0x0;
      puVar19 = (undefined *)0x0;
      puVar20 = (undefined *)0x0;
      puVar21 = (undefined *)0x0;
      *(undefined1 *)(unaff_x20 + 0x10) = local_230;
    }
  }
  else {
    if (iVar6 == 2) {
      ppuVar7 = &local_190;
      FUN_100004520();
      puVar1 = ppuVar7[1];
      puVar10 = ppuVar7[2];
      uVar11 = *(undefined1 *)(ppuVar7 + 3);
      FUN_1000f8cac(&local_100,&local_220,&DAT_100fd5110,&DAT_100c66088);
      FUN_10000cae0(puVar1,puVar10,uVar11);
      _swift_bridgeObjectRelease(ppuVar7[4]);
      FUN_1005e46ac(ppuVar7[5],*(undefined1 *)(ppuVar7 + 6));
      _swift_errorRelease(ppuVar7[0xf]);
      _swift_unknownObjectRelease(ppuVar7[7]);
      _swift_release(ppuVar7[10]);
      _swift_release(ppuVar7[0xc]);
      _swift_release(ppuVar7[0xe]);
    }
    else {
      if (iVar6 != 3) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1005e3734);
        (*pcVar5)();
      }
      uStack_1b8 = uStack_128;
      local_1c0 = local_130;
      uStack_1a8 = uStack_118;
      uStack_1b0 = uStack_120;
      local_1a0 = local_110;
      uStack_1f8 = uStack_168;
      local_200 = local_170;
      uStack_1e8 = uStack_158;
      uStack_1f0 = uStack_160;
      uStack_1d8 = uStack_148;
      local_1e0 = local_150;
      uStack_1c8 = uStack_138;
      uStack_1d0 = uStack_140;
      puStack_218 = (undefined1 *)uStack_188;
      local_220.unknown = local_190;
      uStack_208 = uStack_178;
      uStack_210 = uStack_180;
      FUN_1000f8cac(&local_100,&local_2b0,&DAT_100fd5110,&DAT_100c66088);
      FUN_1000fb4c4(&local_220,&DAT_100fd5110,&DAT_100c66088);
    }
    puVar22 = (undefined *)0x0;
    puVar23 = (undefined *)0x0;
    uVar11 = 2;
    puVar24 = (undefined *)0x0;
    puVar25 = (undefined *)0x0;
    puVar18 = (undefined *)0x0;
    puVar19 = (undefined *)0x0;
    puVar20 = (undefined *)0x0;
    puVar21 = (undefined *)0x0;
  }
LAB_1005e35e0:
  param_1[1] = puVar23;
  *param_1 = puVar22;
  param_1[3] = puVar25;
  param_1[2] = puVar24;
  param_1[5] = puVar19;
  param_1[4] = puVar18;
  param_1[7] = puVar21;
  param_1[6] = puVar20;
  *(undefined1 *)(param_1 + 8) = uVar11;
  return;
}



/* Address: 0x1005e37f4 | FUN_1005e37f4 */

void FUN_1005e37f4(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *unaff_x20;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  
  uVar6 = *unaff_x20;
  if ((char)unaff_x20[1] != '\x01') {
    lVar9 = *(long *)(param_1 + 0x10);
    if (lVar9 == 0) {
      return;
    }
    uVar10 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = 0;
    FUN_1006244ac(0,lVar9 + 1,0,PTR___swiftEmptyArrayStorage_100eae0d8);
    uVar8 = *(ulong *)(uVar2 + 0x10);
    uVar12 = *(ulong *)(uVar2 + 0x18);
    uVar4 = uVar12 >> 1;
    lVar11 = uVar8 + 1;
    if (uVar4 <= uVar8) {
      uVar2 = (ulong)(1 < uVar12);
      FUN_1006244ac(uVar2,lVar11,1);
      uVar12 = *(ulong *)(uVar2 + 0x18);
      uVar4 = uVar12 >> 1;
    }
    *(long *)(uVar2 + 0x10) = lVar11;
    *(ulong *)(uVar2 + uVar8 * 8 + 0x20) = uVar6;
    lVar1 = uVar8 + 2;
    if ((long)uVar4 < lVar1) {
      uVar2 = (ulong)(1 < uVar12);
      FUN_1006244ac(uVar2,lVar1,1);
    }
    *(long *)(uVar2 + 0x10) = lVar1;
    *(undefined8 *)(uVar2 + lVar11 * 8 + 0x20) = uVar10;
    *unaff_x20 = uVar2;
    lVar9 = lVar9 + -1;
    if (lVar9 != 0) {
      puVar7 = (undefined8 *)(param_1 + 0x28);
      uVar6 = *(ulong *)(uVar2 + 0x10);
      do {
        uVar10 = *puVar7;
        uVar8 = uVar6 + 1;
        if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar6) {
          uVar2 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
          FUN_1006244ac(uVar2,uVar8,1);
        }
        *(ulong *)(uVar2 + 0x10) = uVar8;
        *(undefined8 *)(uVar2 + uVar6 * 8 + 0x20) = uVar10;
        lVar9 = lVar9 + -1;
        puVar7 = puVar7 + 1;
        uVar6 = uVar8;
      } while (lVar9 != 0);
      *unaff_x20 = uVar2;
    }
    goto LAB_1005e3944;
  }
  if (*(long *)(uVar6 + 0x10) == 0) {
    uVar8 = *(ulong *)(param_1 + 0x10);
    if (uVar8 == 0) {
      return;
    }
    uVar12 = *(ulong *)(param_1 + 0x20);
    if (uVar8 == 1) {
      FUN_1005e46ac(uVar6,1);
      *unaff_x20 = uVar12;
      *(undefined1 *)(unaff_x20 + 1) = 0;
      return;
    }
    uVar10 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = uVar6;
    _swift_isUniquelyReferenced_nonNull_native();
    if ((int)uVar2 == 0) {
LAB_1005e3988:
      FUN_1006244ac();
      uVar4 = *(ulong *)(uVar2 + 0x18);
      uVar5 = uVar4 >> 1;
      uVar6 = uVar2;
    }
    else {
      uVar4 = *(ulong *)(uVar6 + 0x18);
      uVar5 = uVar4 >> 1;
      if (uVar5 < uVar8) goto LAB_1005e3988;
    }
    uVar3 = *(ulong *)(uVar6 + 0x10);
    lVar9 = uVar3 + 1;
    uVar2 = uVar6;
    if (uVar5 <= uVar3) {
      uVar2 = (ulong)(1 < uVar4);
      FUN_1006244ac(uVar2,lVar9,1,uVar6);
      uVar4 = *(ulong *)(uVar2 + 0x18);
      uVar5 = uVar4 >> 1;
    }
    *(long *)(uVar2 + 0x10) = lVar9;
    *(ulong *)(uVar2 + uVar3 * 8 + 0x20) = uVar12;
    lVar11 = uVar3 + 2;
    uVar6 = uVar2;
    if ((long)uVar5 < lVar11) {
      uVar6 = (ulong)(1 < uVar4);
      FUN_1006244ac(uVar6,lVar11,1,uVar2);
    }
    *(long *)(uVar6 + 0x10) = lVar11;
    *(undefined8 *)(uVar6 + lVar9 * 8 + 0x20) = uVar10;
    lVar9 = uVar8 - 2;
    if (lVar9 != 0) {
      lVar11 = uVar3 + 6;
      uVar8 = uVar6;
      puVar7 = (undefined8 *)(param_1 + 0x30);
      do {
        uVar10 = *puVar7;
        uVar6 = uVar8;
        if (*(ulong *)(uVar8 + 0x18) >> 1 <= lVar11 - 4U) {
          uVar6 = (ulong)(1 < *(ulong *)(uVar8 + 0x18));
          FUN_1006244ac(uVar6,lVar11 + -3,1,uVar8);
        }
        *(long *)(uVar6 + 0x10) = lVar11 + -3;
        *(undefined8 *)(uVar6 + lVar11 * 8) = uVar10;
        lVar11 = lVar11 + 1;
        lVar9 = lVar9 + -1;
        uVar8 = uVar6;
        puVar7 = puVar7 + 1;
      } while (lVar9 != 0);
    }
  }
  else {
    _swift_bridgeObjectRetain(param_1);
    FUN_100668708();
  }
  *unaff_x20 = uVar6;
LAB_1005e3944:
  *(undefined1 *)(unaff_x20 + 1) = 1;
  return;
}



/* Address: 0x1005e3ae8 | FUN_1005e3ae8 */

void FUN_1005e3ae8(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1005e3af4 | FUN_1005e3af4 */

void FUN_1005e3af4(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x1005e3b04 | FUN_1005e3b04 */

void FUN_1005e3b04(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001005e3b18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*(long *)(unaff_x20 + 0x18) + -8) + 0x10))(param_1,param_2);
  return;
}



/* Address: 0x1005e3b1c | FUN_1005e3b1c */

undefined8 FUN_1005e3b1c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fd4fe8;
  FUN_1000f7830(&DAT_100fd4fe8,&DAT_100c65fc8);
  (**(code **)(*(long *)(puVar1 + -8) + 0x20))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1005e3b6c | FUN_1005e3b6c */

void FUN_1005e3b6c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_deallocObject();
  return;
}



/* Address: 0x1005e3b90 | FUN_1005e3b90 */

void FUN_1005e3b90(undefined8 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x28))(*param_1,param_1[1]);
  return;
}



/* Address: 0x1005e3bb8 | FUN_1005e3bb8 */

void FUN_1005e3bb8(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *local_38;
  long local_30;
  long local_28;
  
  local_38 = &DAT_100c66020;
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  FUN_1005e8278();
  if (uVar2 < 0x40) {
    local_30 = *(long *)(lVar1 + -8) + 0x40;
    uVar2 = *(ulong *)(param_1 + 0x18);
    lVar1 = 0x13f;
    FUN_1005e9588();
    if (uVar2 < 0x40) {
      local_28 = *(long *)(lVar1 + -8) + 0x40;
      _swift_initStructMetadata(param_1,0,3,&local_38,param_1 + 0x20);
    }
  }
  return;
}



/* Address: 0x1005e3c50 | FUN_1005e3c50 */

long * FUN_1005e3c50(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  bool bVar2;
  undefined8 uVar3;
  AsyncThrowingStream AVar4;
  Continuation_conflict CVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  lVar8 = *param_2;
  if ((uVar1 >> 0x11 & 1) == 0) {
    lVar6 = param_2[1];
    *param_1 = lVar8;
    param_1[1] = lVar6;
    lVar6 = (long)*(int *)(param_3 + 0x24);
    uVar3 = 0;
    FUN_1005e8278(0,*(undefined8 *)(param_3 + 0x10));
    _swift_unknownObjectRetain(lVar8);
    lVar8 = (long)param_2 + lVar6;
    _swift_getEnumCaseMultiPayload(lVar8,uVar3);
    bVar2 = (int)lVar8 != 1;
    if (bVar2) {
      FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
      AVar4 = Swift::AsyncThrowingStream::typeMetadataAccessor();
      (**(code **)(*(long *)(AVar4.unknown + -8) + 0x10))
                ((long)param_1 + lVar6,(long)param_2 + lVar6,AVar4.unknown);
    }
    else {
      *(undefined8 *)((long)param_1 + lVar6) = *(undefined8 *)((long)param_2 + lVar6);
      _swift_retain();
    }
    _swift_storeEnumTagMultiPayload((long)param_1 + lVar6,uVar3,!bVar2);
    lVar6 = (long)*(int *)(param_3 + 0x28);
    uVar3 = 0;
    FUN_1005e9588(0,*(undefined8 *)(param_3 + 0x18));
    lVar8 = (long)param_2 + lVar6;
    _swift_getEnumCaseMultiPayload(lVar8,uVar3);
    bVar2 = (int)lVar8 != 1;
    if (bVar2) {
      CVar5 = Swift::AsyncStream::Continuation::typeMetadataAccessor();
      (**(code **)(*(long *)(CVar5.unknown + -8) + 0x10))
                ((long)param_1 + lVar6,(long)param_2 + lVar6,CVar5.unknown);
    }
    else {
      *(undefined8 *)((long)param_1 + lVar6) = *(undefined8 *)((long)param_2 + lVar6);
      _swift_retain();
    }
    _swift_storeEnumTagMultiPayload((long)param_1 + lVar6,uVar3,!bVar2);
  }
  else {
    *param_1 = lVar8;
    uVar7 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar8 + (uVar7 + 0x10 & (uVar7 ^ 0xffffffffffffffff)));
    _swift_retain(lVar8);
  }
  return param_1;
}



/* Address: 0x1005e3de0 | FUN_1005e3de0 */

void FUN_1005e3de0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  AsyncThrowingStream AVar3;
  Continuation_conflict CVar4;
  long lVar5;
  
  _swift_unknownObjectRelease(*param_1);
  lVar5 = (long)*(int *)(param_2 + 0x24);
  uVar1 = 0;
  FUN_1005e8278(0,*(undefined8 *)(param_2 + 0x10));
  lVar2 = (long)param_1 + lVar5;
  _swift_getEnumCaseMultiPayload(lVar2,uVar1);
  if ((int)lVar2 == 1) {
    _swift_release(*(undefined8 *)((long)param_1 + lVar5));
  }
  else {
    FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
    AVar3 = Swift::AsyncThrowingStream::typeMetadataAccessor();
    (**(code **)(*(long *)(AVar3.unknown + -8) + 8))((long)param_1 + lVar5,AVar3.unknown);
  }
  lVar5 = (long)*(int *)(param_2 + 0x28);
  uVar1 = 0;
  FUN_1005e9588(0,*(undefined8 *)(param_2 + 0x18));
  lVar2 = (long)param_1 + lVar5;
  _swift_getEnumCaseMultiPayload(lVar2,uVar1);
  if ((int)lVar2 == 1) {
    _swift_release(*(undefined8 *)((long)param_1 + lVar5));
    return;
  }
  CVar4 = Swift::AsyncStream::Continuation::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x0001005e3ed8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(CVar4.unknown + -8) + 8))((long)param_1 + lVar5,CVar4.unknown);
  return;
}



/* Address: 0x1005e3edc | FUN_1005e3edc */

undefined8 * FUN_1005e3edc(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  AsyncThrowingStream AVar4;
  Continuation_conflict CVar5;
  long lVar6;
  undefined8 uVar7;
  
  uVar7 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  lVar6 = (long)*(int *)(param_3 + 0x24);
  uVar2 = 0;
  FUN_1005e8278(0,*(undefined8 *)(param_3 + 0x10));
  _swift_unknownObjectRetain(uVar7);
  lVar3 = (long)param_2 + lVar6;
  _swift_getEnumCaseMultiPayload(lVar3,uVar2);
  bVar1 = (int)lVar3 != 1;
  if (bVar1) {
    FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
    AVar4 = Swift::AsyncThrowingStream::typeMetadataAccessor();
    (**(code **)(*(long *)(AVar4.unknown + -8) + 0x10))
              ((long)param_1 + lVar6,(long)param_2 + lVar6,AVar4.unknown);
  }
  else {
    *(undefined8 *)((long)param_1 + lVar6) = *(undefined8 *)((long)param_2 + lVar6);
    _swift_retain();
  }
  _swift_storeEnumTagMultiPayload((long)param_1 + lVar6,uVar2,!bVar1);
  lVar6 = (long)*(int *)(param_3 + 0x28);
  uVar2 = 0;
  FUN_1005e9588(0,*(undefined8 *)(param_3 + 0x18));
  lVar3 = (long)param_2 + lVar6;
  _swift_getEnumCaseMultiPayload(lVar3,uVar2);
  bVar1 = (int)lVar3 != 1;
  if (bVar1) {
    CVar5 = Swift::AsyncStream::Continuation::typeMetadataAccessor();
    (**(code **)(*(long *)(CVar5.unknown + -8) + 0x10))
              ((long)param_1 + lVar6,(long)param_2 + lVar6,CVar5.unknown);
  }
  else {
    *(undefined8 *)((long)param_1 + lVar6) = *(undefined8 *)((long)param_2 + lVar6);
    _swift_retain();
  }
  _swift_storeEnumTagMultiPayload((long)param_1 + lVar6,uVar2,!bVar1);
  return param_1;
}



/* Address: 0x1005e403c | FUN_1005e403c */

undefined8 * FUN_1005e403c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  AsyncThrowingStream AVar5;
  Continuation_conflict CVar6;
  undefined8 uVar7;
  long lVar8;
  
  uVar1 = param_2[1];
  uVar7 = *param_1;
  *param_1 = *param_2;
  _swift_unknownObjectRetain();
  _swift_unknownObjectRelease(uVar7);
  param_1[1] = uVar1;
  if (param_1 != param_2) {
    lVar8 = (long)*(int *)(param_3 + 0x24);
    lVar3 = 0;
    FUN_1005e8278(0,*(undefined8 *)(param_3 + 0x10));
    (**(code **)(*(long *)(lVar3 + -8) + 8))((long)param_1 + lVar8,lVar3);
    lVar4 = (long)param_2 + lVar8;
    _swift_getEnumCaseMultiPayload(lVar4,lVar3);
    bVar2 = (int)lVar4 != 1;
    if (bVar2) {
      FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
      AVar5 = Swift::AsyncThrowingStream::typeMetadataAccessor();
      (**(code **)(*(long *)(AVar5.unknown + -8) + 0x10))
                ((long)param_1 + lVar8,(long)param_2 + lVar8,AVar5.unknown);
    }
    else {
      *(undefined8 *)((long)param_1 + lVar8) = *(undefined8 *)((long)param_2 + lVar8);
      _swift_retain();
    }
    _swift_storeEnumTagMultiPayload((long)param_1 + lVar8,lVar3,!bVar2);
    lVar8 = (long)*(int *)(param_3 + 0x28);
    lVar3 = 0;
    FUN_1005e9588(0,*(undefined8 *)(param_3 + 0x18));
    (**(code **)(*(long *)(lVar3 + -8) + 8))((long)param_1 + lVar8,lVar3);
    lVar4 = (long)param_2 + lVar8;
    _swift_getEnumCaseMultiPayload(lVar4,lVar3);
    bVar2 = (int)lVar4 != 1;
    if (bVar2) {
      CVar6 = Swift::AsyncStream::Continuation::typeMetadataAccessor();
      (**(code **)(*(long *)(CVar6.unknown + -8) + 0x10))
                ((long)param_1 + lVar8,(long)param_2 + lVar8,CVar6.unknown);
    }
    else {
      *(undefined8 *)((long)param_1 + lVar8) = *(undefined8 *)((long)param_2 + lVar8);
      _swift_retain();
    }
    _swift_storeEnumTagMultiPayload((long)param_1 + lVar8,lVar3,!bVar2);
  }
  return param_1;
}



/* Address: 0x1005e41c8 | FUN_1005e41c8 */

undefined8 * FUN_1005e41c8(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  AsyncThrowingStream AVar3;
  Continuation_conflict CVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar6 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar6;
  lVar5 = (long)*(int *)(param_3 + 0x24);
  lVar1 = 0;
  FUN_1005e8278(0,*(undefined8 *)(param_3 + 0x10));
  lVar2 = (long)param_2 + lVar5;
  _swift_getEnumCaseMultiPayload(lVar2,lVar1);
  if ((int)lVar2 == 0) {
    FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
    AVar3 = Swift::AsyncThrowingStream::typeMetadataAccessor();
    (**(code **)(*(long *)(AVar3.unknown + -8) + 0x20))
              ((long)param_1 + lVar5,(long)param_2 + lVar5,AVar3.unknown);
    _swift_storeEnumTagMultiPayload((long)param_1 + lVar5,lVar1,0);
  }
  else {
    _memcpy((void *)((long)param_1 + lVar5),(void *)((long)param_2 + lVar5),
            *(size_t *)(*(long *)(lVar1 + -8) + 0x40));
  }
  lVar5 = (long)*(int *)(param_3 + 0x28);
  lVar1 = 0;
  FUN_1005e9588(0,*(undefined8 *)(param_3 + 0x18));
  lVar2 = (long)param_2 + lVar5;
  _swift_getEnumCaseMultiPayload(lVar2,lVar1);
  if ((int)lVar2 == 0) {
    CVar4 = Swift::AsyncStream::Continuation::typeMetadataAccessor();
    (**(code **)(*(long *)(CVar4.unknown + -8) + 0x20))
              ((long)param_1 + lVar5,(long)param_2 + lVar5,CVar4.unknown);
    _swift_storeEnumTagMultiPayload((long)param_1 + lVar5,lVar1,0);
  }
  else {
    _memcpy((void *)((long)param_1 + lVar5),(void *)((long)param_2 + lVar5),
            *(size_t *)(*(long *)(lVar1 + -8) + 0x40));
  }
  return param_1;
}



/* Address: 0x1005e4310 | FUN_1005e4310 */

undefined8 * FUN_1005e4310(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  AsyncThrowingStream AVar5;
  Continuation_conflict CVar6;
  long lVar7;
  long lVar8;
  
  uVar1 = param_2[1];
  uVar2 = *param_1;
  *param_1 = *param_2;
  _swift_unknownObjectRelease(uVar2);
  param_1[1] = uVar1;
  if (param_1 != param_2) {
    lVar7 = (long)*(int *)(param_3 + 0x24);
    lVar3 = 0;
    FUN_1005e8278(0,*(undefined8 *)(param_3 + 0x10));
    lVar8 = *(long *)(lVar3 + -8);
    (**(code **)(lVar8 + 8))((long)param_1 + lVar7,lVar3);
    lVar4 = (long)param_2 + lVar7;
    _swift_getEnumCaseMultiPayload(lVar4,lVar3);
    if ((int)lVar4 == 0) {
      FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
      AVar5 = Swift::AsyncThrowingStream::typeMetadataAccessor();
      (**(code **)(*(long *)(AVar5.unknown + -8) + 0x20))
                ((long)param_1 + lVar7,(long)param_2 + lVar7,AVar5.unknown);
      _swift_storeEnumTagMultiPayload((long)param_1 + lVar7,lVar3,0);
    }
    else {
      _memcpy((void *)((long)param_1 + lVar7),(void *)((long)param_2 + lVar7),
              *(size_t *)(lVar8 + 0x40));
    }
    lVar7 = (long)*(int *)(param_3 + 0x28);
    lVar3 = 0;
    FUN_1005e9588(0,*(undefined8 *)(param_3 + 0x18));
    lVar8 = *(long *)(lVar3 + -8);
    (**(code **)(lVar8 + 8))((long)param_1 + lVar7,lVar3);
    lVar4 = (long)param_2 + lVar7;
    _swift_getEnumCaseMultiPayload(lVar4,lVar3);
    if ((int)lVar4 == 0) {
      CVar6 = Swift::AsyncStream::Continuation::typeMetadataAccessor();
      (**(code **)(*(long *)(CVar6.unknown + -8) + 0x20))
                ((long)param_1 + lVar7,(long)param_2 + lVar7,CVar6.unknown);
      _swift_storeEnumTagMultiPayload((long)param_1 + lVar7,lVar3,0);
    }
    else {
      _memcpy((void *)((long)param_1 + lVar7),(void *)((long)param_2 + lVar7),
              *(size_t *)(lVar8 + 0x40));
    }
  }
  return param_1;
}



/* Address: 0x1005e4494 | FUN_1005e4494 */

void FUN_1005e4494(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1005e44a0 | FUN_1005e44a0 */

ulong FUN_1005e44a0(ulong *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  if ((int)param_2 == 0x7fffffff) {
    uVar3 = *param_1;
    if (0xfffffffe < uVar3) {
      uVar3 = 0xffffffff;
    }
    return (ulong)((int)uVar3 + 1);
  }
  lVar2 = 0;
  FUN_1005e835c(0,*(undefined8 *)(param_3 + 0x10));
  lVar4 = *(long *)(lVar2 + -8);
  if ((int)param_2 == *(int *)(lVar4 + 0x54)) {
    iVar1 = *(int *)(param_3 + 0x24);
  }
  else {
    lVar2 = 0;
    FUN_1005eb0ac(0,*(undefined8 *)(param_3 + 0x18));
    lVar4 = *(long *)(lVar2 + -8);
    iVar1 = *(int *)(param_3 + 0x28);
  }
  uVar3 = (long)param_1 + (long)iVar1;
                    /* WARNING: Could not recover jumptable at 0x0001005e4544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 0x30))(uVar3,param_2,lVar2);
  return uVar3;
}



/* Address: 0x1005e4548 | FUN_1005e4548 */

void FUN_1005e4548(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1005e4554 | FUN_1005e4554 */

void FUN_1005e4554(ulong *param_1,undefined8 param_2,int param_3,long param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (param_3 == 0x7fffffff) {
    *param_1 = (ulong)((int)param_2 - 1);
    return;
  }
  lVar2 = 0;
  FUN_1005e835c(0,*(undefined8 *)(param_4 + 0x10));
  lVar3 = *(long *)(lVar2 + -8);
  if (param_3 == *(int *)(lVar3 + 0x54)) {
    iVar1 = *(int *)(param_4 + 0x24);
  }
  else {
    lVar2 = 0;
    FUN_1005eb0ac(0,*(undefined8 *)(param_4 + 0x18));
    lVar3 = *(long *)(lVar2 + -8);
    iVar1 = *(int *)(param_4 + 0x28);
  }
                    /* WARNING: Could not recover jumptable at 0x0001005e45f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x38))((long)param_1 + (long)iVar1,param_2,param_2,lVar2);
  return;
}



/* Address: 0x1005e45f8 | FUN_1005e45f8 */

void FUN_1005e45f8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  param_1[4] = param_2[4];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  return;
}



/* Address: 0x1005e460c | FUN_1005e460c */

void FUN_1005e460c(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1005e4618 | FUN_1005e4618 */

void FUN_1005e4618(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 == '\x01') {
    _swift_bridgeObjectRetain();
    return;
  }
  return;
}



/* Address: 0x1005e462c | FUN_1005e462c */

void FUN_1005e462c(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x48));
  _swift_errorRelease(*(undefined8 *)(unaff_x20 + 0x50));
  _swift_deallocObject();
  return;
}



/* Address: 0x1005e4670 | FUN_1005e4670 */

void FUN_1005e4670(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x40))(*(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Address: 0x1005e4694 | FUN_1005e4694 */

uint FUN_1005e4694(int *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1 + 4;
  if (*(byte *)(param_1 + 0x20) < 4) {
    uVar1 = (uint)*(byte *)(param_1 + 0x20);
  }
  return uVar1;
}



/* Address: 0x1005e46ac | FUN_1005e46ac */

void FUN_1005e46ac(undefined8 param_1,char param_2)

{
  if (param_2 == '\x01') {
    _swift_bridgeObjectRelease();
    return;
  }
  return;
}



/* Address: 0x1005e46c0 | FUN_1005e46c0 */

void FUN_1005e46c0(long param_1)

{
  *(undefined1 *)(param_1 + 0x80) = 2;
  return;
}



/* Address: 0x1005e46cc | FUN_1005e46cc */

void FUN_1005e46cc(long param_1)

{
  *(undefined1 *)(param_1 + 0x80) = 3;
  return;
}



/* Address: 0x1005e46d8 | thunk_FUN_1005e0334 */

void thunk_FUN_1005e0334(void)

{
  FUN_1005e0334();
  return;
}



/* Address: 0x1005e46dc | thunk_FUN_1005e037c */

void thunk_FUN_1005e037c(void)

{
  FUN_1005e037c();
  return;
}



/* Address: 0x1005e46e0 | FUN_1005e46e0 */

undefined1  [16]
FUN_1005e46e0(long param_1,long param_2,long param_3,long param_4,undefined1 param_5,
             undefined1 param_6)

{
  long *unaff_x20;
  tuple2_conflict3 tVar1;
  undefined1 auVar2 [16];
  
  _swift_allocObject();
  unaff_x20[2] = 0;
  unaff_x20[3] = 0;
  tVar1 = Swift::Array<undefined>::_allocateUninitialized(0,*(undefined8 *)(*unaff_x20 + 0x58));
  auVar2._8_8_ = tVar1._.unknown;
  unaff_x20[4] = tVar1._0_8_;
  *(undefined1 *)(unaff_x20 + 5) = 0;
  unaff_x20[0xb] = 0;
  unaff_x20[0xc] = 0;
  unaff_x20[6] = param_1;
  unaff_x20[7] = param_2;
  unaff_x20[8] = param_3;
  unaff_x20[9] = param_4;
  *(undefined1 *)(unaff_x20 + 10) = param_5;
  *(undefined1 *)(unaff_x20 + 0xd) = param_6;
  auVar2._0_8_ = unaff_x20;
  return auVar2;
}


