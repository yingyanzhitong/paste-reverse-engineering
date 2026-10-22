/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100a4f1d8 | FUN_100a4f1d8 */

void FUN_100a4f1d8(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long unaff_x22;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  (**(code **)(*(long *)(unaff_x22 + 0x170) + 8))
            (*(undefined8 *)(unaff_x22 + 0x178),*(undefined8 *)(unaff_x22 + 0x168));
  puVar5 = *(undefined8 **)(unaff_x22 + 0x1d0);
  (**(code **)(*(long *)(unaff_x22 + 0x1a0) + 8))
            (*(undefined8 *)(unaff_x22 + 0x1a8),*(undefined8 *)(unaff_x22 + 0x198));
  *(undefined8 **)(unaff_x22 + 0x130) = puVar5;
  _swift_errorRetain(puVar5);
  puVar1 = &DAT_100ff69f8;
  FUN_1000f7830(&DAT_100ff69f8,&DAT_100c910f0);
  lVar2 = unaff_x22 + 0x10;
  _swift_dynamicCast(lVar2,unaff_x22 + 0x130,puVar1,&DAT_100f2de38,0);
  if ((int)lVar2 == 0) {
    _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x130));
    puVar4 = (undefined8 *)(unaff_x22 + 0xa0);
    *(undefined1 *)puVar4 = 8;
    *(undefined8 *)(unaff_x22 + 0xa8) = 0xd000000000000048;
    *(undefined8 *)(unaff_x22 + 0xb0) = 0x8000000100db8520;
    *(undefined8 **)(unaff_x22 + 0xb8) = puVar5;
    *(undefined8 *)(unaff_x22 + 0xc0) = 0xd000000000000012;
    *(undefined8 *)(unaff_x22 + 200) = 0x8000000100db8570;
    *(undefined8 *)(unaff_x22 + 0xd0) = 0xd000000000000023;
    *(undefined8 *)(unaff_x22 + 0xd8) = 0x8000000100db8590;
    *(undefined8 *)(unaff_x22 + 0xe0) = 0x90;
    puVar7 = (undefined8 *)(unaff_x22 + 0x58);
    *(undefined1 *)puVar7 = 8;
    *(undefined8 *)(unaff_x22 + 0x60) = 0xd000000000000048;
    *(undefined8 *)(unaff_x22 + 0x68) = 0x8000000100db8520;
    *(undefined8 **)(unaff_x22 + 0x70) = puVar5;
    *(undefined8 *)(unaff_x22 + 0x78) = 0xd000000000000012;
    *(undefined8 *)(unaff_x22 + 0x80) = 0x8000000100db8570;
    *(undefined8 *)(unaff_x22 + 0x88) = 0xd000000000000023;
    *(undefined8 *)(unaff_x22 + 0x90) = 0x8000000100db8590;
    *(undefined8 *)(unaff_x22 + 0x98) = 0x90;
    _swift_errorRetain(puVar5);
    FUN_100a50050(puVar4,unaff_x22 + 0xe8);
    FUN_100a5008c();
    FUN_100a500c0();
    _swift_allocError(&DAT_100f2de38,puVar7,0,0);
    uVar3 = *puVar4;
    puVar7[1] = *(undefined8 *)(unaff_x22 + 0xa8);
    *puVar7 = uVar3;
    uVar9 = *(undefined8 *)(unaff_x22 + 200);
    uVar6 = *(undefined8 *)(unaff_x22 + 0xc0);
    uVar8 = *(undefined8 *)(unaff_x22 + 0xd8);
    uVar3 = *(undefined8 *)(unaff_x22 + 0xd0);
    uVar11 = *(undefined8 *)(unaff_x22 + 0xb8);
    uVar10 = *(undefined8 *)(unaff_x22 + 0xb0);
    puVar7[8] = *(undefined8 *)(unaff_x22 + 0xe0);
    puVar7[5] = uVar9;
    puVar7[4] = uVar6;
    puVar7[7] = uVar8;
    puVar7[6] = uVar3;
    puVar7[3] = uVar11;
    puVar7[2] = uVar10;
    _swift_willThrow();
  }
  else {
    _swift_errorRelease();
    uVar9 = *(undefined8 *)(unaff_x22 + 0x38);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x30);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x18);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x10);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x28);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x20);
    FUN_100a500c0();
    _swift_allocError(&DAT_100f2de38,puVar5,0,0);
    puVar5[5] = uVar9;
    puVar5[4] = uVar8;
    puVar5[7] = uVar13;
    puVar5[6] = uVar11;
    puVar5[8] = uVar3;
    puVar5[1] = uVar14;
    *puVar5 = uVar12;
    puVar5[3] = uVar10;
    puVar5[2] = uVar6;
    _swift_willThrow();
    puVar5 = *(undefined8 **)(unaff_x22 + 0x130);
  }
  _swift_errorRelease(puVar5);
  uVar6 = *(undefined8 *)(unaff_x22 + 400);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x180);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x1a8));
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000100a4f3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a4f3fc | FUN_100a4f3fc */

void FUN_100a4f3fc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x30) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(long *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  lVar2 = *(long *)(param_3 + -8);
  *(long *)(unaff_x22 + 0x38) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x40) = uVar1;
  _swift_task_switch(FUN_100a4f460,0,0);
  return;
}



/* Address: 0x100a4f460 | FUN_100a4f460 */

void FUN_100a4f460(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  AsyncMapSequence AVar4;
  ulong uVar5;
  long *plVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long unaff_x22;
  undefined8 uVar10;
  
  lVar1 = *(long *)(unaff_x22 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x10);
  AVar4 = Swift::AsyncMapSequence::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x48) = AVar4.unknown;
  lVar9 = *(long *)(AVar4.unknown + -8);
  *(long *)(unaff_x22 + 0x50) = lVar9;
  uVar5 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x58) = uVar5;
  (**(code **)(lVar1 + 0x10))(uVar3,uVar10,uVar2);
  (extension_Swift)::Swift::AsyncSequence::_map();
  plVar6 = (long *)0x1e0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x60) = plVar6;
  puVar7 = PTR_Swift__Swift__AsyncMapSequence<undefined,undefined>_>Swift__AsyncSequence_100eaef68;
  _swift_getWitnessTable
            (PTR_Swift__Swift__AsyncMapSequence<undefined,undefined>_>Swift__AsyncSequence_100eaef68
             ,AVar4.unknown);
  puVar8 = puVar7;
  FUN_100a50010();
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_100a4f57c;
  FUN_100a4eb6c(uVar5,*(undefined8 *)(unaff_x22 + 0x18),AVar4.unknown,puVar7,puVar8);
  return;
}



/* Address: 0x100a4f57c | FUN_100a4f57c */

void FUN_100a4f57c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  long *unaff_x22;
  long lVar4;
  
  lVar3 = *unaff_x22;
  lVar4 = *unaff_x22;
  *(long *)(lVar3 + 0x68) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x60));
  if (unaff_x20 != 0) {
    _swift_task_switch(FUN_100a4f624,0,0);
    return;
  }
  uVar2 = *(undefined8 *)(lVar3 + 0x58);
  uVar1 = *(undefined8 *)(lVar3 + 0x40);
  (**(code **)(*(long *)(lVar3 + 0x50) + 8))(uVar2,*(undefined8 *)(lVar3 + 0x48));
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100a4f620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))(param_1);
  return;
}



/* Address: 0x100a4f624 | FUN_100a4f624 */

void FUN_100a4f624(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
  (**(code **)(*(long *)(unaff_x22 + 0x50) + 8))(uVar2,*(undefined8 *)(unaff_x22 + 0x48));
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100a4f678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a4f67c | FUN_100a4f67c */

void FUN_100a4f67c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *param_2;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x20) = param_2[1];
  *(undefined4 *)(unaff_x22 + 0x28) = *(undefined4 *)(param_2 + 2);
  *(undefined2 *)(unaff_x22 + 0x2c) = *(undefined2 *)((long)param_2 + 0x14);
  *(undefined1 *)(unaff_x22 + 0x2e) = *(undefined1 *)((long)param_2 + 0x16);
  _swift_task_switch(FUN_100a4f6b8,0,0);
  return;
}



/* Address: 0x100a4f6b8 | FUN_100a4f6b8 */

void FUN_100a4f6b8(void)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  code *UNRECOVERED_JUMPTABLE;
  long unaff_x22;
  
  uVar1 = *(uint *)(unaff_x22 + 0x20);
  uVar2 = *(uint *)(unaff_x22 + 0x24);
  if (uVar2 < uVar1) {
                    /* WARNING: Does not return */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x100a4f73c);
    (*UNRECOVERED_JUMPTABLE)();
  }
  uVar5 = *(undefined1 *)(unaff_x22 + 0x2e);
  uVar6 = *(undefined2 *)(unaff_x22 + 0x2c);
  iVar4 = *(int *)(unaff_x22 + 0x28);
  if (uVar2 <= iVar4 - (uint)CONCAT21(uVar6,uVar5)) {
    puVar3 = *(undefined8 **)(unaff_x22 + 0x10);
    *puVar3 = *(undefined8 *)(unaff_x22 + 0x18);
    *(uint *)(puVar3 + 1) = uVar1;
    *(uint *)((long)puVar3 + 0xc) = uVar2;
    *(int *)(puVar3 + 2) = iVar4;
    *(undefined2 *)((long)puVar3 + 0x14) = uVar6;
    *(undefined1 *)((long)puVar3 + 0x16) = uVar5;
    puVar3[3] = (ulong)uVar1;
    puVar3[4] = (ulong)uVar2;
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
    _swift_retain();
                    /* WARNING: Could not recover jumptable at 0x000100a4f734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
                    /* WARNING: Does not return */
  UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x100a4f740);
  (*UNRECOVERED_JUMPTABLE)();
}



/* Address: 0x100a4f740 | FUN_100a4f740 */

void FUN_100a4f740(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x30) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(long *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  lVar2 = *(long *)(param_3 + -8);
  *(long *)(unaff_x22 + 0x38) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x40) = uVar1;
  _swift_task_switch(FUN_100a4f7a4,0,0);
  return;
}



/* Address: 0x100a4f7a4 | FUN_100a4f7a4 */

void FUN_100a4f7a4(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  AsyncMapSequence AVar4;
  ulong uVar5;
  long *plVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long unaff_x22;
  undefined8 uVar10;
  
  lVar1 = *(long *)(unaff_x22 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x10);
  FUN_1000f8b08(&DAT_100ff6a08,&DAT_100c909d8);
  AVar4 = Swift::AsyncMapSequence::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x48) = AVar4.unknown;
  lVar9 = *(long *)(AVar4.unknown + -8);
  *(long *)(unaff_x22 + 0x50) = lVar9;
  uVar5 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x58) = uVar5;
  (**(code **)(lVar1 + 0x10))(uVar3,uVar10,uVar2);
  (extension_Swift)::Swift::AsyncSequence::_map();
  plVar6 = (long *)0x1e0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x60) = plVar6;
  puVar7 = PTR_Swift__Swift__AsyncMapSequence<undefined,undefined>_>Swift__AsyncSequence_100eaef68;
  _swift_getWitnessTable
            (PTR_Swift__Swift__AsyncMapSequence<undefined,undefined>_>Swift__AsyncSequence_100eaef68
             ,AVar4.unknown);
  puVar8 = &DAT_100ff6a10;
  FUN_100134584(&DAT_100ff6a10,&DAT_100ff6a08,&DAT_100c909d8,
                PTR_Swift__Swift__CollectionOfOne<undefined>_>Swift__Sequence_100ead040);
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_100a4f8f8;
  FUN_100a4eb6c(uVar5,*(undefined8 *)(unaff_x22 + 0x18),AVar4.unknown,puVar7,puVar8);
  return;
}



/* Address: 0x100a4f8f8 | FUN_100a4f8f8 */

void FUN_100a4f8f8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  long *unaff_x22;
  long lVar4;
  
  lVar3 = *unaff_x22;
  lVar4 = *unaff_x22;
  *(long *)(lVar3 + 0x68) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x60));
  if (unaff_x20 != 0) {
    _swift_task_switch(thunk_FUN_100a4f624,0,0);
    return;
  }
  uVar2 = *(undefined8 *)(lVar3 + 0x58);
  uVar1 = *(undefined8 *)(lVar3 + 0x40);
  (**(code **)(*(long *)(lVar3 + 0x50) + 8))(uVar2,*(undefined8 *)(lVar3 + 0x48));
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100a4f99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))(param_1);
  return;
}



/* Address: 0x100a4f9a0 | FUN_100a4f9a0 */

void FUN_100a4f9a0(undefined8 param_1,undefined1 *param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined1 *)(unaff_x22 + 0x18) = *param_2;
  _swift_task_switch(FUN_100a4f9c0,0,0);
  return;
}



/* Address: 0x100a4f9c0 | FUN_100a4f9c0 */

void FUN_100a4f9c0(void)

{
  long unaff_x22;
  
  **(undefined1 **)(unaff_x22 + 0x10) = *(undefined1 *)(unaff_x22 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000100a4f9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a4f9d4 | FUN_100a4f9d4 */

void FUN_100a4f9d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_4 + -8) + 0x40);
  (**(code **)(*(long *)(param_4 + -8) + 0x10))
            (&stack0xffffffffffffffb0 + -(lVar1 + 0xfU & 0xfffffffffffffff0));
  FUN_100a4e460(param_1,&stack0xffffffffffffffb0 + -(lVar1 + 0xfU & 0xfffffffffffffff0),param_2,
                param_3,param_4,param_5);
  return;
}



/* Address: 0x100a4fa64 | FUN_100a4fa64 */

void FUN_100a4fa64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x88) = param_8;
  *(undefined8 *)(unaff_x22 + 0x90) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x78) = param_6;
  *(undefined8 *)(unaff_x22 + 0x80) = param_7;
  *(undefined8 *)(unaff_x22 + 0x68) = param_4;
  *(undefined8 *)(unaff_x22 + 0x70) = param_5;
  *(undefined8 *)(unaff_x22 + 0x58) = param_2;
  *(undefined8 *)(unaff_x22 + 0x60) = param_3;
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
  _swift_task_switch(FUN_100a4fa8c,0,0);
  return;
}



/* Address: 0x100a4fa8c | FUN_100a4fa8c */

void FUN_100a4fa8c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long *plVar7;
  long unaff_x22;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar4 = 0;
  uVar6 = uVar8;
  FUN_100a50100(0,uVar8,uVar2);
  _swift_allocBox();
  *(undefined8 *)(unaff_x22 + 0x98) = uVar4;
  FUN_100a4f9d4(uVar6,uVar1,uVar3,uVar8,uVar2);
  *(undefined8 *)(unaff_x22 + 0x28) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar6;
  puVar5 = &DAT_100f2b438;
  _swift_allocObject(&DAT_100f2b438,0x30,7);
  *(undefined **)(unaff_x22 + 0xa0) = puVar5;
  *(undefined8 *)(puVar5 + 0x10) = uVar8;
  *(undefined8 *)(puVar5 + 0x20) = uVar11;
  *(undefined8 *)(puVar5 + 0x18) = uVar9;
  *(undefined8 *)(puVar5 + 0x28) = uVar4;
  plVar7 = (long *)0xe0;
  _swift_retain(uVar4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xa8) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_100a4fbc0;
  FUN_100a92a24(plVar7,*(undefined8 *)(unaff_x22 + 0x50),&DAT_100c909f8,unaff_x22 + 0x10,
                &DAT_100c90a08,puVar5,*(undefined8 *)(unaff_x22 + 0x80));
  return;
}



/* Address: 0x100a4fbc0 | FUN_100a4fbc0 */

void FUN_100a4fbc0(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0xa0);
  *(long *)(lVar3 + 0xb0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0xa8));
  _swift_release(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_1005dc60c;
  }
  else {
    pcVar2 = FUN_100a4fc2c;
  }
  _swift_task_switch(pcVar2,0,0);
  return;
}



/* Address: 0x100a4fc2c | FUN_100a4fc2c */

void FUN_100a4fc2c(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x98));
                    /* WARNING: Could not recover jumptable at 0x000100a4fc64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a4fc68 | FUN_100a4fc68 */

void FUN_100a4fc68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_3;
  *(undefined8 *)(unaff_x22 + 0x40) = param_4;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  _swift_task_switch(FUN_100a4fc84,0,0);
  return;
}



/* Address: 0x100a4fc84 | FUN_100a4fc84 */

void FUN_100a4fc84(void)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long unaff_x22;
  
  piVar3 = *(int **)(unaff_x22 + 0x30);
  _swift_beginAccess(*(undefined8 *)(unaff_x22 + 0x40),unaff_x22 + 0x10,0x21,0);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x48) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100a4fd00;
                    /* WARNING: Could not recover jumptable at 0x000100a4fcfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))
            (plVar2,*(undefined8 *)(unaff_x22 + 0x28),*(undefined8 *)(unaff_x22 + 0x40));
  return;
}



/* Address: 0x100a4fd00 | FUN_100a4fd00 */

void FUN_100a4fd00(void)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  *(long *)(lVar1 + 0x50) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x48));
  if (unaff_x20 != 0) {
    _swift_task_switch(FUN_100a4fd74,0,0);
    return;
  }
  _swift_endAccess(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000100a4fd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Address: 0x100a4fd74 | FUN_100a4fd74 */

void FUN_100a4fd74(void)

{
  long unaff_x22;
  
  _swift_endAccess(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000100a4fdac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a4fdb0 | FUN_100a4fdb0 */

void FUN_100a4fdb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = 0;
  FUN_100a50100(0,param_4,param_6);
  *(undefined8 *)(unaff_x22 + 0x28) = uVar1;
  _swift_projectBox();
  *(undefined8 *)(unaff_x22 + 0x30) = param_3;
  _swift_task_switch(FUN_100a4fe10,0,0);
  return;
}



/* Address: 0x100a4fe10 | FUN_100a4fe10 */

void FUN_100a4fe10(void)

{
  long *plVar1;
  long unaff_x22;
  
  _swift_beginAccess(*(undefined8 *)(unaff_x22 + 0x30),unaff_x22 + 0x10,0x21,0);
  plVar1 = (long *)0x40;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x38) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100a4fe78;
  FUN_100a4e6f4(*(undefined8 *)(unaff_x22 + 0x28));
  return;
}



/* Address: 0x100a4fe78 | FUN_100a4fe78 */

void FUN_100a4fe78(void)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  *(long *)(lVar1 + 0x40) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x38));
  if (unaff_x20 != 0) {
    _swift_task_switch(FUN_1009f1fcc,0,0);
    return;
  }
  _swift_endAccess(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000100a4fee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Address: 0x100a4feec | FUN_100a4feec */

void FUN_100a4feec(undefined8 param_1,undefined8 param_2)

{
  FUN_100a4ff94(param_1,param_2,&DAT_100ff6aa8,&DAT_100c90a58);
  return;
}



/* Address: 0x100a4ff00 | FUN_100a4ff00 */

undefined * FUN_100a4ff00(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (param_2 != 0) {
    puVar2 = &DAT_100ff6aa0;
    FUN_1000f7830(&DAT_100ff6aa0,&DAT_100c90a50);
    _swift_allocObject();
    puVar3 = puVar2;
    _malloc_size();
    puVar1 = puVar3 + -0x11;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(long *)(puVar2 + 0x10) = param_1;
    *(long *)(puVar2 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  return puVar2;
}



/* Address: 0x100a4ff80 | FUN_100a4ff80 */

void FUN_100a4ff80(undefined8 param_1,undefined8 param_2)

{
  FUN_100a4ff94(param_1,param_2,&DAT_100ff6a98,&DAT_100c90a48);
  return;
}



/* Address: 0x100a4ff94 | FUN_100a4ff94 */

undefined * FUN_100a4ff94(long param_1,long param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (param_2 != 0) {
    FUN_1000f7830(param_3,param_4);
    _swift_allocObject();
    puVar1 = param_3;
    _malloc_size();
    *(long *)(param_3 + 0x10) = param_1;
    *(long *)(param_3 + 0x18) = (long)puVar1 * 2 + -0x40;
    puVar1 = param_3;
  }
  return puVar1;
}



/* Address: 0x100a4fffc | FUN_100a4fffc */

void FUN_100a4fffc(undefined8 param_1,undefined8 param_2)

{
  FUN_10012ae44(param_1,param_2,FUN_100aa7840,FUN_1005afc04);
  return;
}



/* Address: 0x100a50010 | FUN_100a50010 */

void FUN_100a50010(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff69f0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c68260;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c68260,&DAT_100eeb2d0);
  DAT_100ff69f0 = pTVar1;
  return;
}



/* Address: 0x100a50050 | FUN_100a50050 */

undefined8 FUN_100a50050(undefined8 param_1,undefined8 param_2)

{
  FUN_100a84728(param_2,param_1);
  return param_2;
}



/* Address: 0x100a5008c | FUN_100a5008c */

undefined8 FUN_100a5008c(undefined8 param_1)

{
  FUN_100a846f0();
  return param_1;
}



/* Address: 0x100a500c0 | FUN_100a500c0 */

void FUN_100a500c0(void)

{
  byte *pbVar1;
  
  if (DAT_100ff6a00 != (byte *)0x0) {
    return;
  }
  pbVar1 = &BYTE_100c92168;
  _swift_getWitnessTable(&BYTE_100c92168,&DAT_100f2de38);
  DAT_100ff6a00 = pbVar1;
  return;
}



/* Address: 0x100a50100 | FUN_100a50100 */

void FUN_100a50100(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100a5010c | FUN_100a5010c */

void FUN_100a5010c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  plVar7 = (long *)0x60;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_1005c804c;
  FUN_100a4fc68(plVar7,param_1,uVar5,uVar3,uVar6,uVar1,uVar4,uVar2);
  return;
}



/* Address: 0x100a501a0 | FUN_100a501a0 */

void FUN_100a501a0(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x100a501c4 | FUN_100a501c4 */

void FUN_100a501c4(undefined8 param_1,undefined8 param_2)

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
  plVar5 = (long *)0x50;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)thunk_FUN_1005c804c;
  FUN_100a4fdb0(param_1,param_2,uVar4,uVar1,uVar3,uVar2);
  return;
}



/* Address: 0x100a50248 | FUN_100a50248 */

void FUN_100a50248(long param_1)

{
  long lVar1;
  ulong uVar2;
  long local_40;
  undefined *puStack_38;
  undefined *local_30;
  undefined *puStack_28;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    local_40 = *(long *)(lVar1 + -8) + 0x40;
    puStack_38 = PTR___value_witness_table_for_Builtin_Int64_100eabd48 + 0x40;
    local_30 = PTR___value_witness_table_for_Builtin_BridgeObject_100eabd38 + 0x40;
    puStack_28 = puStack_38;
    _swift_initStructMetadata(param_1,0,4,&local_40,param_1 + 0x20);
  }
  return;
}



/* Address: 0x100a502d0 | FUN_100a502d0 */

long * FUN_100a502d0(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  
  lVar2 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  lVar5 = *(long *)(lVar2 + 0x40);
  if ((*(uint *)(lVar2 + 0x50) & 0x1000f8) == 0 && (lVar5 + 7U & 0xfffffffffffffff8) + 0x18 < 0x19)
  {
    (**(code **)(lVar2 + 0x10))(param_1);
    puVar3 = (undefined8 *)((long)param_1 + lVar5 + 7 & 0xfffffffffffffff8);
    puVar4 = (undefined8 *)((long)param_2 + lVar5 + 7 & 0xfffffffffffffff8);
    *puVar3 = *puVar4;
    puVar3[1] = puVar4[1];
    puVar3[2] = puVar4[2];
    _swift_bridgeObjectRetain();
  }
  else {
    uVar1 = *(uint *)(lVar2 + 0x50) & 0xf8;
    lVar2 = *param_2;
    *param_1 = lVar2;
    param_1 = (long *)(lVar2 + ((ulong)(uVar1 + 0x17 & (uVar1 ^ 0xffffffff)) & 0x1f8));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x100a503b0 | FUN_100a503b0 */

void FUN_100a503b0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  (**(code **)(lVar1 + 8))();
  _swift_bridgeObjectRelease
            (*(undefined8 *)((param_1 + *(long *)(lVar1 + 0x40) + 7U & 0xfffffffffffffff8) + 8));
  return;
}



/* Address: 0x100a503f8 | FUN_100a503f8 */

long FUN_100a503f8(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar3 + 0x10))();
  lVar3 = *(long *)(lVar3 + 0x40) + 7;
  puVar2 = (undefined8 *)(lVar3 + param_1 & 0xfffffffffffffff8);
  puVar1 = (undefined8 *)(lVar3 + param_2 & 0xfffffffffffffff8);
  *puVar2 = *puVar1;
  puVar2[1] = puVar1[1];
  puVar2[2] = puVar1[2];
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Address: 0x100a50478 | FUN_100a50478 */

long FUN_100a50478(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar4 + 0x18))();
  lVar4 = *(long *)(lVar4 + 0x40) + 7;
  puVar2 = (undefined8 *)(lVar4 + param_1 & 0xfffffffffffffff8);
  puVar1 = (undefined8 *)(lVar4 + param_2 & 0xfffffffffffffff8);
  *puVar2 = *puVar1;
  uVar3 = puVar2[1];
  puVar2[1] = puVar1[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  puVar2[2] = puVar1[2];
  return param_1;
}



/* Address: 0x100a50504 | FUN_100a50504 */

long FUN_100a50504(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar3 + 0x20))();
  lVar3 = *(long *)(lVar3 + 0x40) + 7;
  puVar2 = (undefined8 *)(lVar3 + param_1 & 0xfffffffffffffff8);
  puVar1 = (undefined8 *)(lVar3 + param_2 & 0xfffffffffffffff8);
  *puVar2 = *puVar1;
  puVar2[1] = puVar1[1];
  puVar2[2] = puVar1[2];
  return param_1;
}



/* Address: 0x100a50580 | FUN_100a50580 */

long FUN_100a50580(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  
  lVar4 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar4 + 0x28))();
  lVar4 = *(long *)(lVar4 + 0x40) + 7;
  puVar3 = (undefined8 *)(lVar4 + param_1 & 0xfffffffffffffff8);
  puVar2 = (undefined8 *)(lVar4 + param_2 & 0xfffffffffffffff8);
  *puVar3 = *puVar2;
  uVar1 = puVar3[1];
  puVar3[1] = puVar2[1];
  _swift_bridgeObjectRelease(uVar1);
  puVar3[2] = puVar2[2];
  return param_1;
}



/* Address: 0x100a50604 | FUN_100a50604 */

uint * FUN_100a50604(uint *param_1,uint param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  
  lVar8 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar5 = *(uint *)(lVar8 + 0x54);
  uVar2 = uVar5;
  if (uVar5 < 0x80000000) {
    uVar2 = 0x7fffffff;
  }
  if (param_2 == 0) {
    return (uint *)0x0;
  }
  if (uVar2 <= param_2 && param_2 - uVar2 != 0) {
    uVar7 = (*(long *)(lVar8 + 0x40) + 7U & 0xfffffffffffffff8) + 0x18;
    uVar1 = uVar7 & 0xfffffff8;
    uVar6 = (uint)uVar1;
    uVar9 = 2;
    uVar4 = uVar9;
    if (uVar1 == 0) {
      uVar4 = (param_2 - uVar2) + 1;
    }
    if (0xffff < uVar4) {
      uVar9 = 4;
    }
    if (uVar4 < 0x100) {
      uVar9 = 1;
    }
    uVar3 = 0;
    if (1 < uVar4) {
      uVar3 = uVar9;
    }
    if (uVar3 < 2) {
      if ((uVar3 != 0) &&
         (uVar9 = (uint)*(byte *)((long)param_1 + uVar7), *(byte *)((long)param_1 + uVar7) != 0))
      goto LAB_100a506a4;
    }
    else if (uVar3 == 2) {
      uVar9 = (uint)*(ushort *)((long)param_1 + uVar7);
      if (*(ushort *)((long)param_1 + uVar7) != 0) {
LAB_100a506a4:
        uVar9 = uVar9 - 1;
        if (uVar1 != 0) {
          uVar9 = 0;
          uVar6 = *param_1;
        }
        return (uint *)(ulong)(uVar2 + (uVar6 | uVar9) + 1);
      }
    }
    else {
      uVar9 = *(uint *)((long)param_1 + uVar7);
      if (uVar9 != 0) goto LAB_100a506a4;
    }
  }
  if (0x7ffffffe < uVar5) {
                    /* WARNING: Could not recover jumptable at 0x000100a506e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar8 + 0x30))();
    return param_1;
  }
  uVar7 = *(ulong *)(((long)param_1 + *(long *)(lVar8 + 0x40) + 7 & 0xfffffffffffffff8U) + 8);
  if (0xfffffffe < uVar7) {
    uVar7 = 0xffffffff;
  }
  return (uint *)(ulong)((int)uVar7 + 1);
}



/* Address: 0x100a50710 | FUN_100a50710 */

void FUN_100a50710(int *param_1,uint param_2,uint param_3,long param_4)

{
  size_t sVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  
  lVar6 = *(long *)(*(long *)(param_4 + 0x10) + -8);
  uVar4 = *(uint *)(lVar6 + 0x54);
  uVar2 = uVar4;
  if (uVar4 < 0x80000000) {
    uVar2 = 0x7fffffff;
  }
  lVar7 = *(long *)(lVar6 + 0x40);
  sVar1 = (lVar7 + 7U & 0xfffffffffffffff8) + 0x18;
  if (param_3 < uVar2 || param_3 - uVar2 == 0) {
    uVar9 = 0;
    iVar5 = param_2 - uVar2;
    if (uVar2 <= param_2 && iVar5 != 0) goto LAB_100a507bc;
  }
  else {
    uVar8 = 2;
    uVar3 = uVar8;
    if ((int)sVar1 == 0) {
      uVar3 = (param_3 - uVar2) + 1;
    }
    if (0xffff < uVar3) {
      uVar8 = 4;
    }
    if (uVar3 < 0x100) {
      uVar8 = 1;
    }
    uVar9 = 0;
    if (1 < uVar3) {
      uVar9 = uVar8;
    }
    iVar5 = param_2 - uVar2;
    if (uVar2 <= param_2 && iVar5 != 0) {
LAB_100a507bc:
      if ((int)sVar1 != 0) {
        iVar5 = 1;
        _bzero(param_1,sVar1);
        *param_1 = param_2 + ~uVar2;
      }
      if (uVar9 < 2) {
        if (uVar9 == 0) {
          return;
        }
        *(char *)((long)param_1 + sVar1) = (char)iVar5;
        return;
      }
      if (uVar9 == 2) {
        *(short *)((long)param_1 + sVar1) = (short)iVar5;
        return;
      }
      *(int *)((long)param_1 + sVar1) = iVar5;
      return;
    }
  }
  if (uVar9 < 2) {
    if (uVar9 != 0) {
      *(undefined1 *)((long)param_1 + sVar1) = 0;
    }
  }
  else if (uVar9 == 2) {
    *(undefined2 *)((long)param_1 + sVar1) = 0;
  }
  else {
    *(undefined4 *)((long)param_1 + sVar1) = 0;
  }
  if (param_2 != 0) {
    if (0x7ffffffe < uVar4) {
                    /* WARNING: Could not recover jumptable at 0x000100a50828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar6 + 0x38))();
      return;
    }
    if ((int)param_2 < 0) {
      param_2 = param_2 & 0x7fffffff;
    }
    else {
      param_2 = param_2 - 1;
    }
    *(ulong *)(((long)param_1 + lVar7 + 7 & 0xfffffffffffffff8U) + 8) = (ulong)param_2;
  }
  return;
}



/* Address: 0x100a5088c | FUN_100a5088c */

void FUN_100a5088c(long param_1,long param_2,long param_3)

{
  long lVar1;
  void *pvVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  size_t sVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar4 = param_2 - param_1;
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x100a50938);
    (*pcVar6)();
  }
  lVar8 = *unaff_x20;
  lVar1 = lVar8 + 0x20 + param_1 * 0x10;
  _swift_arrayDestroy(lVar1,lVar4,&DAT_100f2bb60);
  lVar5 = param_3 - lVar4;
  if (SBORROW8(param_3,lVar4)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x100a5093c);
    (*pcVar6)();
  }
  if (lVar5 != 0) {
    if (SBORROW8(*(long *)(lVar8 + 0x10),param_2)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100a50940);
      (*pcVar6)();
    }
    pvVar2 = (void *)(lVar1 + param_3 * 0x10);
    pvVar3 = (void *)(lVar8 + 0x20 + param_2 * 0x10);
    sVar7 = (*(long *)(lVar8 + 0x10) - param_2) * 0x10;
    if (pvVar2 != pvVar3 || (void *)((long)pvVar3 + sVar7) <= pvVar2) {
      _memmove(pvVar2,pvVar3,sVar7);
    }
    if (SCARRY8(*(long *)(lVar8 + 0x10),lVar5)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100a50944);
      (*pcVar6)();
    }
    *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + lVar5;
  }
  if (param_3 < 1) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x100a50948);
  (*pcVar6)();
}



/* Address: 0x100a50948 | FUN_100a50948 */

void FUN_100a50948(undefined8 param_1,undefined8 param_2)

{
  FUN_10012ae44(param_1,param_2,FUN_100aa7854,FUN_100a5088c);
  return;
}



/* Address: 0x100a5095c | thunk_FUN_100a4f624 */

void thunk_FUN_100a4f624(void)

{
  FUN_100a4f624();
  return;
}



/* Address: 0x100a50960 | FUN_100a50960 */

void FUN_100a50960(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x68) = param_4;
  *(undefined8 *)(unaff_x22 + 0x70) = param_5;
  *(undefined8 *)(unaff_x22 + 0x58) = param_2;
  *(undefined8 *)(unaff_x22 + 0x60) = param_3;
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
  _swift_task_switch(FUN_100a50980,0,0);
  return;
}



/* Address: 0x100a50980 | FUN_100a50980 */

void FUN_100a50980(void)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x68);
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x58);
  plVar1 = (long *)0xd0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x78) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100a50a0c;
  FUN_100a84a40(plVar1,unaff_x22 + 0x38,*(undefined8 *)(unaff_x22 + 0x50),1,&DAT_100c90a70,
                unaff_x22 + 0x10,*(undefined8 *)(unaff_x22 + 0x68),&DAT_100eeaaa8,
                *(undefined8 *)(unaff_x22 + 0x70));
  return;
}



/* Address: 0x100a50a0c | FUN_100a50a0c */

void FUN_100a50a0c(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar3 = *(undefined8 *)(lVar2 + 0x50);
  *(long *)(lVar2 + 0x80) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x78));
  _swift_bridgeObjectRelease(uVar3);
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100a50a7c;
  }
  else {
    pcVar1 = FUN_100a50ad8;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a50a7c | FUN_100a50a7c */

void FUN_100a50a7c(void)

{
  long unaff_x22;
  
  (**(code **)(*(long *)(*(long *)(unaff_x22 + 0x68) + -8) + 8))(*(undefined8 *)(unaff_x22 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x000100a50ad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))
            (*(undefined8 *)(unaff_x22 + 0x38),*(undefined8 *)(unaff_x22 + 0x40),
             (ulong)*(uint7 *)(unaff_x22 + 0x48));
  return;
}



/* Address: 0x100a50ad8 | FUN_100a50ad8 */

void FUN_100a50ad8(void)

{
  long unaff_x22;
  
  (**(code **)(*(long *)(*(long *)(unaff_x22 + 0x68) + -8) + 8))(*(undefined8 *)(unaff_x22 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x000100a50b18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a50b1c | FUN_100a50b1c */

void FUN_100a50b1c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x40;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_1005c804c;
  FUN_100a4b218(plVar3,param_1,param_2,uVar4,uVar1,uVar2);
  return;
}



/* Address: 0x100a50ba0 | FUN_100a50ba0 */

void FUN_100a50ba0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  _swift_task_switch(FUN_100a50bb8,0,0);
  return;
}



/* Address: 0x100a50bb8 | FUN_100a50bb8 */

void FUN_100a50bb8(void)

{
  undefined8 uVar1;
  undefined1 uVar2;
  long *plVar3;
  long unaff_x22;
  
  if (DAT_100ff6d98 != -1) {
    _swift_once(&DAT_100ff6d98,FUN_100a73848);
  }
  uVar2 = DAT_100ff6da8;
  uVar1 = DAT_100ff6da0;
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x30);
  plVar3 = (long *)0xc0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x38) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100a50c7c;
  FUN_100a4b3bc(*(undefined8 *)(unaff_x22 + 0x28),1,&UNK_100c90a88,unaff_x22 + 0x10,uVar1,uVar2);
  return;
}



/* Address: 0x100a50c7c | FUN_100a50c7c */

void FUN_100a50c7c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  long unaff_x20;
  long *unaff_x22;
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(*unaff_x22 + 0x28);
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x38));
  _swift_bridgeObjectRelease(uVar2);
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000100a50ce8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100a50d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1,param_2,param_3 & 0xffffffffffffff);
  return;
}



/* Address: 0x100a50d14 | FUN_100a50d14 */

void FUN_100a50d14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_8;
  *(undefined8 *)(unaff_x22 + 0x78) = param_9;
  *(undefined8 *)(unaff_x22 + 0x60) = param_6;
  *(undefined8 *)(unaff_x22 + 0x68) = param_7;
  *(undefined8 *)(unaff_x22 + 0x50) = param_4;
  *(undefined8 *)(unaff_x22 + 0x58) = param_5;
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
  *(undefined8 *)(unaff_x22 + 0x48) = param_3;
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  _swift_task_switch(FUN_100a50d44,0,0);
  return;
}



/* Address: 0x100a50d44 | FUN_100a50d44 */

void FUN_100a50d44(void)

{
  code *pcVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  long unaff_x22;
  
  uVar4 = *(ulong *)(unaff_x22 + 0x60);
  uVar3 = uVar4 >> 0x20;
  if (uVar3 < (uVar4 & 0xffffffff)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100a50e34);
    (*pcVar1)();
  }
  uVar5 = *(undefined8 *)(unaff_x22 + 0x68);
  if (uVar3 <= (int)uVar5 -
               ((ushort)((ulong)uVar5 >> 0x30) & 0xff | (uint)((ulong)uVar5 >> 0x18) & 0xffff00)) {
    uVar7 = *(ulong *)(unaff_x22 + 0x48);
    *(undefined8 *)(unaff_x22 + 0x10) = *(undefined8 *)(unaff_x22 + 0x58);
    *(int *)(unaff_x22 + 0x18) = (int)uVar4;
    *(int *)(unaff_x22 + 0x1c) = (int)(uVar4 >> 0x20);
    *(int *)(unaff_x22 + 0x20) = (int)uVar5;
    *(short *)(unaff_x22 + 0x24) = (short)((ulong)uVar5 >> 0x20);
    *(char *)(unaff_x22 + 0x26) = (char)((ulong)uVar5 >> 0x30);
    *(ulong *)(unaff_x22 + 0x28) = uVar4 & 0xffffffff;
    *(ulong *)(unaff_x22 + 0x30) = uVar3;
    plVar6 = (long *)0xb0;
    _swift_retain();
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x80) = plVar6;
    plVar2 = plVar6;
    FUN_100a50010();
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_100a50e38;
    FUN_100a51dd8(*(undefined8 *)(unaff_x22 + 0x38),*(undefined8 *)(unaff_x22 + 0x40),
                  uVar7 & 0x101ffffffff00ff,*(undefined8 *)(unaff_x22 + 0x50),&DAT_100eeb2d0,
                  *(undefined8 *)(unaff_x22 + 0x70),plVar2,*(undefined8 *)(unaff_x22 + 0x78));
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100a50e38);
  (*pcVar1)();
}



/* Address: 0x100a50e38 | FUN_100a50e38 */

void FUN_100a50e38(undefined8 param_1)

{
  long unaff_x20;
  long lVar1;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  *(long *)(lVar1 + 0x88) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x80));
  if (unaff_x20 != 0) {
    _swift_task_switch(FUN_100a50ec0,0,0);
    return;
  }
  FUN_10096e070(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000100a50ebc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))(param_1);
  return;
}



/* Address: 0x100a50ec0 | FUN_100a50ec0 */

void FUN_100a50ec0(void)

{
  long unaff_x22;
  
  FUN_10096e070(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000100a50ef8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a50efc | FUN_100a50efc */

void FUN_100a50efc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa0) = param_5;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_6;
  *(undefined8 *)(unaff_x22 + 0x90) = param_3;
  *(undefined8 *)(unaff_x22 + 0x98) = param_4;
  *(undefined8 *)(unaff_x22 + 0x80) = param_1;
  *(undefined8 *)(unaff_x22 + 0x88) = param_2;
  _swift_task_switch(FUN_100a50f1c,0,0);
  return;
}



/* Address: 0x100a50f1c | FUN_100a50f1c */

void FUN_100a50f1c(void)

{
  ulong uVar1;
  undefined1 uVar2;
  code *pcVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  
  if (DAT_100ff6d98 != -1) {
    _swift_once(&DAT_100ff6d98,FUN_100a73848);
  }
  uVar6 = *(ulong *)(unaff_x22 + 0xa0);
  uVar5 = uVar6 >> 0x20;
  if ((uVar6 & 0xffffffff) <= uVar5) {
    uVar7 = *(undefined8 *)(unaff_x22 + 0xa8);
    if (uVar5 <= (int)uVar7 -
                 ((ushort)((ulong)uVar7 >> 0x30) & 0xff | (uint)((ulong)uVar7 >> 0x18) & 0xffff00))
    {
      uVar1 = *(ulong *)(unaff_x22 + 0x90);
      *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x98);
      *(int *)(unaff_x22 + 0x38) = (int)uVar6;
      *(int *)(unaff_x22 + 0x3c) = (int)(uVar6 >> 0x20);
      *(int *)(unaff_x22 + 0x40) = (int)uVar7;
      *(short *)(unaff_x22 + 0x44) = (short)((ulong)uVar7 >> 0x20);
      *(char *)(unaff_x22 + 0x46) = (char)((ulong)uVar7 >> 0x30);
      *(ulong *)(unaff_x22 + 0x48) = uVar6 & 0xffffffff;
      *(ulong *)(unaff_x22 + 0x50) = uVar5;
      *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0x38);
      *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(unaff_x22 + 0x30);
      uVar2 = DAT_100ff6da8;
      uVar7 = DAT_100ff6da0;
      uVar8 = *(undefined8 *)(unaff_x22 + 0x88);
      *(ulong *)(unaff_x22 + 0x78) = uVar5;
      *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(unaff_x22 + 0x48);
      *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0x40);
      _swift_retain();
      *(long *)(unaff_x22 + 0x20) = unaff_x22 + 0x58;
      *(undefined8 *)(unaff_x22 + 0x28) = uVar8;
      plVar4 = (long *)0xb0;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0xb0) = plVar4;
      *plVar4 = unaff_x22;
      plVar4[1] = (long)FUN_100a5106c;
      FUN_100a5115c(*(undefined8 *)(unaff_x22 + 0x80),uVar1 & 0x101ffffffff00ff,&DAT_100c90aa8,
                    unaff_x22 + 0x10,uVar7,uVar2);
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100a5106c);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100a51068);
  (*pcVar3)();
}


