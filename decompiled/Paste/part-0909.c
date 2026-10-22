/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1009c4944 | FUN_1009c4944 */

void FUN_1009c4944(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  UnownedSerialExecutor UVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_5;
  *(undefined8 *)(unaff_x22 + 0x30) = param_6;
  *(undefined8 *)(unaff_x22 + 0x18) = param_3;
  *(undefined8 *)(unaff_x22 + 0x20) = param_4;
  if (param_1 == 0) {
    UVar1.unknown = (undefined *)0x0;
    param_2 = 0;
  }
  else {
    _swift_getObjectType();
    UVar1 = Swift::Actor::get_unownedExecutor();
  }
  *(undefined **)(unaff_x22 + 0x38) = UVar1.unknown;
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
  _swift_task_switch(FUN_1009c49b4,UVar1.unknown);
  return;
}



/* Address: 0x1009c49b4 | FUN_1009c49b4 */

void FUN_1009c49b4(void)

{
  ulong uVar1;
  char cVar2;
  code *pcVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  long unaff_x22;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  code *local_40;
  
  if (DAT_100ff3090 != -1) {
    _swift_once(&DAT_100ff3090,FUN_1009c766c);
  }
  Swift::TaskLocal::get(DAT_101058298);
  lVar8 = *(long *)(unaff_x22 + 0x10);
  *(long *)(unaff_x22 + 0x48) = lVar8;
  if (lVar8 == 0) {
    piVar10 = *(int **)(unaff_x22 + 0x18);
    plVar5 = (long *)(ulong)(uint)piVar10[1];
    local_40 = (code *)((long)*piVar10 + (long)piVar10);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x68) = plVar5;
    pcVar3 = FUN_1009c4be8;
  }
  else {
    lVar8 = *(long *)(lVar8 + 0x10);
    iVar4 = _pthread_mutex_lock((pthread_mutex_t *)(lVar8 + 0x30));
    if (iVar4 != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1009c4b3c);
      (*pcVar3)();
    }
    cVar2 = *(char *)(lVar8 + 0x20);
    *(char *)(unaff_x22 + 0x79) = cVar2;
    if (cVar2 == '\x01') {
      (**(code **)(unaff_x22 + 0x28))();
      uVar11 = 0;
    }
    else {
      uVar1 = *(ulong *)(lVar8 + 0x10);
      uVar11 = *(ulong *)(lVar8 + 0x18);
      _swift_retain(*(undefined8 *)(unaff_x22 + 0x30));
      uVar7 = uVar1;
      _swift_isUniquelyReferenced_nonNull_native();
      *(ulong *)(lVar8 + 0x10) = uVar1;
      uVar6 = uVar1;
      if ((uVar7 & 1) == 0) {
        uVar6 = 0;
        FUN_1009c7f6c(0,*(long *)(uVar1 + 0x10) + 1,1,uVar1);
        *(ulong *)(lVar8 + 0x10) = uVar6;
      }
      uVar1 = *(ulong *)(uVar6 + 0x10);
      uVar7 = uVar6;
      if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar1) {
        uVar7 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
        FUN_1009c7f6c(uVar7,uVar1 + 1,1,uVar6);
      }
      uVar13 = *(undefined8 *)(unaff_x22 + 0x30);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x28);
      *(ulong *)(uVar7 + 0x10) = uVar1 + 1;
      lVar9 = uVar7 + uVar1 * 0x18;
      *(ulong *)(lVar9 + 0x20) = uVar11;
      *(undefined8 *)(lVar9 + 0x30) = uVar13;
      *(undefined8 *)(lVar9 + 0x28) = uVar12;
      *(ulong *)(lVar8 + 0x10) = uVar7;
      if (0xfffffffffffffffe < uVar11) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1009c4b88);
        (*pcVar3)();
      }
      *(ulong *)(lVar8 + 0x18) = uVar11 + 1;
    }
    *(ulong *)(unaff_x22 + 0x50) = uVar11;
    iVar4 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar8 + 0x30));
    if (iVar4 != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1009c4b40);
      (*pcVar3)();
    }
    piVar10 = *(int **)(unaff_x22 + 0x18);
    plVar5 = (long *)(ulong)(uint)piVar10[1];
    local_40 = (code *)((long)*piVar10 + (long)piVar10);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x58) = plVar5;
    pcVar3 = FUN_1009c4b88;
  }
  *plVar5 = unaff_x22;
  plVar5[1] = (long)pcVar3;
                    /* WARNING: Could not recover jumptable at 0x0001009c4b1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*local_40)(plVar5,unaff_x22 + 0x78);
  return;
}



/* Address: 0x1009c4b88 | FUN_1009c4b88 */

void FUN_1009c4b88(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x60) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x58));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1009c4c48;
  }
  else {
    pcVar1 = FUN_1009c4cfc;
  }
  _swift_task_switch(pcVar1,*(undefined8 *)(lVar2 + 0x38),*(undefined8 *)(lVar2 + 0x40));
  return;
}



/* Address: 0x1009c4be8 | FUN_1009c4be8 */

void FUN_1009c4be8(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x70) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x68));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1009c4dac;
  }
  else {
    pcVar1 = FUN_1009c4dbc;
  }
  _swift_task_switch(pcVar1,*(undefined8 *)(lVar2 + 0x38),*(undefined8 *)(lVar2 + 0x40));
  return;
}



/* Address: 0x1009c4c48 | FUN_1009c4c48 */

void FUN_1009c4c48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long unaff_x22;
  
  if ((*(byte *)(unaff_x22 + 0x79) & 1) == 0) {
    lVar6 = *(long *)(*(long *)(unaff_x22 + 0x48) + 0x10);
    iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(lVar6 + 0x30));
    if (iVar2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1009c4cf8);
      (*pcVar1)();
    }
    lVar4 = *(long *)(*(long *)(lVar6 + 0x10) + 0x10);
    if (lVar4 != 0) {
      lVar3 = 0;
      plVar5 = (long *)(*(long *)(lVar6 + 0x10) + 0x20);
      do {
        if (*plVar5 == *(long *)(unaff_x22 + 0x50)) {
          FUN_1009c78b0();
          _swift_release(param_3);
          break;
        }
        lVar3 = lVar3 + 1;
        plVar5 = plVar5 + 3;
      } while (lVar4 != lVar3);
    }
    iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar6 + 0x30));
    if (iVar2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1009c4cfc);
      (*pcVar1)();
    }
  }
  _swift_release(*(undefined8 *)(unaff_x22 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x0001009c4cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined1 *)(unaff_x22 + 0x78));
  return;
}



/* Address: 0x1009c4cfc | FUN_1009c4cfc */

void FUN_1009c4cfc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long unaff_x22;
  
  if ((*(byte *)(unaff_x22 + 0x79) & 1) == 0) {
    lVar6 = *(long *)(*(long *)(unaff_x22 + 0x48) + 0x10);
    iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(lVar6 + 0x30));
    if (iVar2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1009c4da8);
      (*pcVar1)();
    }
    lVar4 = *(long *)(*(long *)(lVar6 + 0x10) + 0x10);
    if (lVar4 != 0) {
      lVar3 = 0;
      plVar5 = (long *)(*(long *)(lVar6 + 0x10) + 0x20);
      do {
        if (*plVar5 == *(long *)(unaff_x22 + 0x50)) {
          FUN_1009c78b0();
          _swift_release(param_3);
          break;
        }
        lVar3 = lVar3 + 1;
        plVar5 = plVar5 + 3;
      } while (lVar4 != lVar3);
    }
    iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar6 + 0x30));
    if (iVar2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1009c4dac);
      (*pcVar1)();
    }
  }
  _swift_release(*(undefined8 *)(unaff_x22 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x0001009c4da0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1009c4dac | FUN_1009c4dac */

void FUN_1009c4dac(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x0001009c4db8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined1 *)(unaff_x22 + 0x78));
  return;
}



/* Address: 0x1009c4dbc | FUN_1009c4dbc */

void FUN_1009c4dbc(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x0001009c4dc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1009c4dc8 | FUN_1009c4dc8 */

void FUN_1009c4dc8(undefined8 param_1)

{
  FUN_1009c4ddc(param_1,&DAT_100f25d70,&DAT_100c8c488);
  return;
}



/* Address: 0x1009c4ddc | FUN_1009c4ddc */

void FUN_1009c4ddc(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  TaskPriority TVar2;
  long lVar3;
  
  puVar1 = &DAT_100ff3080;
  FUN_1000f7830(&DAT_100ff3080,&DAT_100c8c470);
  lVar3 = *(long *)(*(long *)(puVar1 + -8) + 0x40);
  TVar2 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar2.unknown + -8) + 0x38))
            (&stack0xffffffffffffffd0 + -(lVar3 + 0xfU & 0xfffffffffffffff0),1,1,TVar2.unknown);
  _swift_allocObject(param_2,0x28,7);
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = param_1;
  _swift_retain(param_1);
  FUN_1009ca434(0,0,&stack0xffffffffffffffd0 + -(lVar3 + 0xfU & 0xfffffffffffffff0),param_3,param_2)
  ;
  _swift_release();
  return;
}



/* Address: 0x1009c4ea0 | FUN_1009c4ea0 */

void FUN_1009c4ea0(void)

{
  FUN_1009c4ddc();
  return;
}



/* Address: 0x1009c4ec8 | FUN_1009c4ec8 */

void FUN_1009c4ec8(void)

{
  undefined8 uVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  
  if (DAT_100ff2f80 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_1009c4f0c(0xff);
  pTVar2 = &TargetProtocolConformanceDescriptor_100c8c3f8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8c3f8,uVar1);
  DAT_100ff2f80 = pTVar2;
  return;
}



/* Address: 0x1009c4f0c | FUN_1009c4f0c */

void FUN_1009c4f0c(undefined8 param_1)

{
  if (DAT_100ff2fc0 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetClassDescriptor_100cc86a8);
  return;
}



/* Address: 0x1009c4f44 | FUN_1009c4f44 */

void FUN_1009c4f44(undefined8 param_1)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005c804c;
  FUN_1009c4400(plVar1,param_1);
  return;
}



/* Address: 0x1009c4fa0 | FUN_1009c4fa0 */

void FUN_1009c4fa0(void)

{
  FUN_1009c4ddc();
  return;
}



/* Address: 0x1009c4fc8 | FUN_1009c4fc8 */

void FUN_1009c4fc8(void)

{
  undefined8 in_x3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = in_x3;
  _swift_task_switch(FUN_1009c4fe0,in_x3,0);
  return;
}



/* Address: 0x1009c4fe0 | FUN_1009c4fe0 */

void FUN_1009c4fe0(void)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long unaff_x22;
  long lVar6;
  long lVar7;
  
  lVar6 = *(long *)(unaff_x22 + 0x40);
  puVar2 = &DAT_100ff2f88;
  FUN_1000f7830(&DAT_100ff2f88,&DAT_100c8c660);
  uVar5 = *(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xf;
  uVar3 = uVar5 & 0xfffffffffffffff0;
  _swift_task_alloc();
  lVar1 = _TtC16ServiceLifecycle18CancellationWaiter::taskContinuation;
  _swift_beginAccess(lVar6 + _TtC16ServiceLifecycle18CancellationWaiter::taskContinuation,
                     unaff_x22 + 0x10,0,0);
  FUN_1009c5354(lVar6 + lVar1,uVar3);
  puVar2 = &DAT_100ff2c58;
  FUN_1000f7830(&DAT_100ff2c58,&DAT_100c8c350);
  lVar7 = *(long *)(puVar2 + -8);
  uVar4 = uVar3;
  (**(code **)(lVar7 + 0x30))(uVar3,1,puVar2);
  if ((int)uVar4 == 0) {
    uVar4 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc(uVar4);
    (**(code **)(lVar7 + 0x10))();
    FUN_1009c5198(uVar3);
    *(undefined1 *)(unaff_x22 + 0x48) = 0;
    Swift::CheckedContinuation::resume((undefined1 *)(unaff_x22 + 0x48),puVar2);
    (**(code **)(lVar7 + 8))(uVar4,puVar2);
    _swift_task_dealloc(uVar4);
  }
  else {
    FUN_1009c5198(uVar3);
  }
  _swift_task_dealloc(uVar3);
  uVar5 = uVar5 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar5);
  (**(code **)(lVar7 + 0x38))();
  _swift_beginAccess(lVar6 + lVar1,unaff_x22 + 0x28,0x21,0);
  FUN_1009c53a4(uVar5,lVar6 + lVar1);
  _swift_endAccess(unaff_x22 + 0x28);
  _swift_task_dealloc(uVar5);
                    /* WARNING: Could not recover jumptable at 0x0001009c5168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1009c516c | FUN_1009c516c */

void FUN_1009c516c(void)

{
  long unaff_x20;
  
  FUN_1009c5198(unaff_x20 + _TtC16ServiceLifecycle18CancellationWaiter::taskContinuation);
  _swift_defaultActor_destroy();
  return;
}



/* Address: 0x1009c5198 | FUN_1009c5198 */

undefined8 FUN_1009c5198(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100ff2f88;
  FUN_1000f7830(&DAT_100ff2f88,&DAT_100c8c660);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x1009c51e0 | FUN_1009c51e0 */

void FUN_1009c51e0(void)

{
  long unaff_x20;
  
  FUN_1009c5198(unaff_x20 + _TtC16ServiceLifecycle18CancellationWaiter::taskContinuation);
  _swift_defaultActor_destroy();
  _swift_defaultActor_deallocate();
  return;
}



/* Address: 0x1009c5210 | thunk_FUN_1009c5214 */

void thunk_FUN_1009c5214(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff2f90 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c8c390;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8c390,&DAT_100f25d28);
  DAT_100ff2f90 = pTVar1;
  return;
}



/* Address: 0x1009c5214 | FUN_1009c5214 */

void FUN_1009c5214(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff2f90 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c8c390;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8c390,&DAT_100f25d28);
  DAT_100ff2f90 = pTVar1;
  return;
}



/* Address: 0x1009c5254 | FUN_1009c5254 */

void FUN_1009c5254(void)

{
  FUN_1009c4f0c(0);
  return;
}



/* Address: 0x1009c525c | FUN_1009c525c */

void FUN_1009c525c(long param_1,ulong param_2)

{
  long lVar1;
  undefined *local_30;
  long local_28;
  
  local_30 = &DAT_100c8c448;
  lVar1 = 0x13f;
  FUN_1009c52d4();
  if (param_2 < 0x40) {
    local_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_updateClassMetadata2(param_1,0x100,2,&local_30,param_1 + 0x50);
  }
  return;
}



/* Address: 0x1009c52d4 | FUN_1009c52d4 */

void FUN_1009c52d4(void)

{
  Optional OVar1;
  undefined *puVar2;
  undefined7 extraout_var;
  
  if (DAT_100ff2fd0 == 0) {
    puVar2 = &DAT_100ff2c58;
    FUN_1000f8b08(&DAT_100ff2c58,&DAT_100c8c350);
    OVar1 = Swift::Optional::typeMetadataAccessor();
    if (puVar2 == (undefined *)0x0) {
      DAT_100ff2fd0 = CONCAT71(extraout_var,OVar1.value);
    }
  }
  return;
}



/* Address: 0x1009c5334 | FUN_1009c5334 */

void FUN_1009c5334(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Address: 0x1009c5340 | FUN_1009c5340 */

void FUN_1009c5340(void)

{
  return;
}



/* Address: 0x1009c5344 | FUN_1009c5344 */

undefined1  [16] FUN_1009c5344(void)

{
  return ZEXT816(0x100f25d28);
}



/* Address: 0x1009c5354 | FUN_1009c5354 */

undefined8 FUN_1009c5354(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100ff2f88;
  FUN_1000f7830(&DAT_100ff2f88,&DAT_100c8c660);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1009c53a4 | FUN_1009c53a4 */

undefined8 FUN_1009c53a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100ff2f88;
  FUN_1000f7830(&DAT_100ff2f88,&DAT_100c8c660);
  (**(code **)(*(long *)(puVar1 + -8) + 0x28))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1009c53f4 | thunk_FUN_1000aa754 */

void thunk_FUN_1000aa754(void)

{
  FUN_1000aa754();
  return;
}



/* Address: 0x1009c53f8 | FUN_1009c53f8 */

void FUN_1009c53f8(undefined8 param_1)

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
  plVar3 = (long *)0x50;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1005c804c;
  FUN_1009c479c(plVar3,param_1,uVar1,uVar2,uVar4);
  return;
}



/* Address: 0x1009c546c | FUN_1009c546c */

void FUN_1009c546c(void)

{
  FUN_1009c46a8();
  return;
}



/* Address: 0x1009c5474 | FUN_1009c5474 */

void FUN_1009c5474(undefined8 param_1)

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
  plVar3 = (long *)0x50;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_1005c804c;
  FUN_1009c4fc8(plVar3,param_1,uVar1,uVar2,uVar4);
  return;
}



/* Address: 0x1009c54e8 | FUN_1009c54e8 */

void FUN_1009c54e8(undefined8 param_1)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005c804c;
  FUN_1009c4400(plVar1,param_1);
  return;
}



/* Address: 0x1009c5544 | thunk_FUN_1000aa754 */

void thunk_FUN_1000aa754(void)

{
  FUN_1000aa754();
  return;
}



/* Address: 0x1009c5548 | thunk_FUN_1009c4fa0 */

void thunk_FUN_1009c4fa0(void)

{
  FUN_1009c4fa0();
  return;
}



/* Address: 0x1009c554c | FUN_1009c554c */

void FUN_1009c554c(int *param_1)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  iVar1 = *param_1;
  plVar2 = (long *)(ulong)(uint)param_1[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1005c804c;
                    /* WARNING: Could not recover jumptable at 0x0001009c55a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_1))();
  return;
}



/* Address: 0x1009c55ac | FUN_1009c55ac */

void FUN_1009c55ac(void)

{
  int iVar1;
  int *piVar2;
  long *plVar3;
  undefined8 *unaff_x20;
  long unaff_x22;
  
  piVar2 = (int *)*unaff_x20;
  iVar1 = *piVar2;
  plVar3 = (long *)(ulong)(uint)piVar2[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_1005c804c;
                    /* WARNING: Could not recover jumptable at 0x0001009c5604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))();
  return;
}



/* Address: 0x1009c5608 | FUN_1009c5608 */

void FUN_1009c5608(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  return;
}



/* Address: 0x1009c5614 | FUN_1009c5614 */

undefined1  [16] FUN_1009c5614(void)

{
  return ZEXT816(0x100f25e48);
}



/* Address: 0x1009c5624 | FUN_1009c5624 */

void FUN_1009c5624(void)

{
  FUN_1009c562c(0);
  return;
}



/* Address: 0x1009c562c | FUN_1009c562c */

void FUN_1009c562c(void)

{
  undefined8 uVar1;
  
  if (DAT_100ff3088 != 0) {
    return;
  }
  uVar1 = 0x65000000;
  _swift_getFunctionTypeMetadata0(0x65000000,PTR___type_metadata_for____100eae0c8 + 8);
  DAT_100ff3088 = uVar1;
  return;
}



/* Address: 0x1009c5674 | FUN_1009c5674 */

void FUN_1009c5674(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  UnownedSerialExecutor UVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_6;
  *(undefined8 *)(unaff_x22 + 0x38) = param_7;
  *(undefined8 *)(unaff_x22 + 0x20) = param_4;
  *(undefined8 *)(unaff_x22 + 0x28) = param_5;
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  if (param_2 == 0) {
    UVar1.unknown = (undefined *)0x0;
    param_3 = 0;
  }
  else {
    _swift_getObjectType(param_2);
    UVar1 = Swift::Actor::get_unownedExecutor();
  }
  *(undefined **)(unaff_x22 + 0x40) = UVar1.unknown;
  *(undefined8 *)(unaff_x22 + 0x48) = param_3;
  _swift_task_switch(FUN_1009c56ec,UVar1.unknown);
  return;
}



/* Address: 0x1009c56ec | FUN_1009c56ec */

void FUN_1009c56ec(void)

{
  ulong uVar1;
  char cVar2;
  code *pcVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  long unaff_x22;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  code *local_40;
  
  if (DAT_100ff3090 != -1) {
    _swift_once(&DAT_100ff3090,FUN_1009c766c);
  }
  Swift::TaskLocal::get(DAT_101058298);
  lVar8 = *(long *)(unaff_x22 + 0x10);
  *(long *)(unaff_x22 + 0x50) = lVar8;
  if (lVar8 == 0) {
    piVar10 = *(int **)(unaff_x22 + 0x20);
    plVar5 = (long *)(ulong)(uint)piVar10[1];
    local_40 = (code *)((long)*piVar10 + (long)piVar10);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x70) = plVar5;
    pcVar3 = FUN_1009c59cc;
  }
  else {
    lVar8 = *(long *)(lVar8 + 0x10);
    iVar4 = _pthread_mutex_lock((pthread_mutex_t *)(lVar8 + 0x30));
    if (iVar4 != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1009c5870);
      (*pcVar3)();
    }
    cVar2 = *(char *)(lVar8 + 0x20);
    *(char *)(unaff_x22 + 0x78) = cVar2;
    if (cVar2 == '\x01') {
      (**(code **)(unaff_x22 + 0x30))();
      uVar11 = 0;
    }
    else {
      uVar1 = *(ulong *)(lVar8 + 0x10);
      uVar11 = *(ulong *)(lVar8 + 0x18);
      _swift_retain(*(undefined8 *)(unaff_x22 + 0x38));
      uVar7 = uVar1;
      _swift_isUniquelyReferenced_nonNull_native();
      *(ulong *)(lVar8 + 0x10) = uVar1;
      uVar6 = uVar1;
      if ((uVar7 & 1) == 0) {
        uVar6 = 0;
        FUN_1009c7f6c(0,*(long *)(uVar1 + 0x10) + 1,1,uVar1);
        *(ulong *)(lVar8 + 0x10) = uVar6;
      }
      uVar1 = *(ulong *)(uVar6 + 0x10);
      uVar7 = uVar6;
      if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar1) {
        uVar7 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
        FUN_1009c7f6c(uVar7,uVar1 + 1,1,uVar6);
      }
      uVar13 = *(undefined8 *)(unaff_x22 + 0x38);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x30);
      *(ulong *)(uVar7 + 0x10) = uVar1 + 1;
      lVar9 = uVar7 + uVar1 * 0x18;
      *(ulong *)(lVar9 + 0x20) = uVar11;
      *(undefined8 *)(lVar9 + 0x30) = uVar13;
      *(undefined8 *)(lVar9 + 0x28) = uVar12;
      *(ulong *)(lVar8 + 0x10) = uVar7;
      if (0xfffffffffffffffe < uVar11) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1009c58bc);
        (*pcVar3)();
      }
      *(ulong *)(lVar8 + 0x18) = uVar11 + 1;
    }
    *(ulong *)(unaff_x22 + 0x58) = uVar11;
    iVar4 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar8 + 0x30));
    if (iVar4 != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1009c5874);
      (*pcVar3)();
    }
    piVar10 = *(int **)(unaff_x22 + 0x20);
    plVar5 = (long *)(ulong)(uint)piVar10[1];
    local_40 = (code *)((long)*piVar10 + (long)piVar10);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x60) = plVar5;
    pcVar3 = FUN_1009c58bc;
  }
  *plVar5 = unaff_x22;
  plVar5[1] = (long)pcVar3;
                    /* WARNING: Could not recover jumptable at 0x0001009c5850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*local_40)(plVar5,*(undefined8 *)(unaff_x22 + 0x18));
  return;
}



/* Address: 0x1009c58bc | FUN_1009c58bc */

void FUN_1009c58bc(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x68) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x60));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1009c591c;
  }
  else {
    pcVar1 = FUN_1009c5a10;
  }
  _swift_task_switch(pcVar1,*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x48));
  return;
}



/* Address: 0x1009c591c | FUN_1009c591c */

void FUN_1009c591c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long unaff_x22;
  
  if ((*(byte *)(unaff_x22 + 0x78) & 1) == 0) {
    lVar6 = *(long *)(*(long *)(unaff_x22 + 0x50) + 0x10);
    iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(lVar6 + 0x30));
    if (iVar2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1009c59c8);
      (*pcVar1)();
    }
    lVar4 = *(long *)(*(long *)(lVar6 + 0x10) + 0x10);
    if (lVar4 != 0) {
      lVar3 = 0;
      plVar5 = (long *)(*(long *)(lVar6 + 0x10) + 0x20);
      do {
        if (*plVar5 == *(long *)(unaff_x22 + 0x58)) {
          FUN_1009c78b0();
          _swift_release(param_3);
          break;
        }
        lVar3 = lVar3 + 1;
        plVar5 = plVar5 + 3;
      } while (lVar4 != lVar3);
    }
    iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar6 + 0x30));
    if (iVar2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1009c59cc);
      (*pcVar1)();
    }
  }
  _swift_release(*(undefined8 *)(unaff_x22 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x0001009c59c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1009c59cc | FUN_1009c59cc */

void FUN_1009c59cc(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x70));
                    /* WARNING: Could not recover jumptable at 0x0001009c5a0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Address: 0x1009c5a10 | FUN_1009c5a10 */

void FUN_1009c5a10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long unaff_x22;
  
  if ((*(byte *)(unaff_x22 + 0x78) & 1) == 0) {
    lVar6 = *(long *)(*(long *)(unaff_x22 + 0x50) + 0x10);
    iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(lVar6 + 0x30));
    if (iVar2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1009c5abc);
      (*pcVar1)();
    }
    lVar4 = *(long *)(*(long *)(lVar6 + 0x10) + 0x10);
    if (lVar4 != 0) {
      lVar3 = 0;
      plVar5 = (long *)(*(long *)(lVar6 + 0x10) + 0x20);
      do {
        if (*plVar5 == *(long *)(unaff_x22 + 0x58)) {
          FUN_1009c78b0();
          _swift_release(param_3);
          break;
        }
        lVar3 = lVar3 + 1;
        plVar5 = plVar5 + 3;
      } while (lVar4 != lVar3);
    }
    iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar6 + 0x30));
    if (iVar2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1009c5ac0);
      (*pcVar1)();
    }
  }
  _swift_release(*(undefined8 *)(unaff_x22 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x0001009c5ab4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1009c5ac0 | FUN_1009c5ac0 */

void FUN_1009c5ac0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  long *plVar2;
  long unaff_x22;
  
  bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar1 & 1) != 0) {
    plVar2 = (long *)(ulong)*(uint *)(PTR__withTaskCancellationHandler_100eaefb8 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x18) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)thunk_FUN_1005cd444;
    Swift::_withTaskCancellationHandler();
    return;
  }
  plVar2 = (long *)0x60;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)thunk_FUN_1005c804c;
  FUN_1005f4884(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



/* Address: 0x1009c5c08 | FUN_1009c5c08 */

undefined8 FUN_1009c5c08(void)

{
  undefined8 local_28;
  
  if (DAT_100ff3090 != -1) {
    _swift_once(&DAT_100ff3090,FUN_1009c766c);
  }
  Swift::TaskLocal::get(DAT_101058298);
  return local_28;
}



/* Address: 0x1009c5c64 | FUN_1009c5c64 */

void FUN_1009c5c64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_4;
  *(undefined8 *)(unaff_x22 + 0x38) = param_5;
  *(undefined8 *)(unaff_x22 + 0x20) = param_2;
  *(undefined8 *)(unaff_x22 + 0x28) = param_3;
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  _swift_task_switch(FUN_1009c5c84,0,0);
  return;
}



/* Address: 0x1009c5c84 | FUN_1009c5c84 */

void FUN_1009c5c84(void)

{
  ulong uVar1;
  char cVar2;
  code *pcVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  long unaff_x22;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  code *local_40;
  
  if (DAT_100ff3090 != -1) {
    _swift_once(&DAT_100ff3090,FUN_1009c766c);
  }
  Swift::TaskLocal::get(DAT_101058298);
  lVar8 = *(long *)(unaff_x22 + 0x10);
  *(long *)(unaff_x22 + 0x40) = lVar8;
  if (lVar8 == 0) {
    piVar10 = *(int **)(unaff_x22 + 0x20);
    plVar5 = (long *)(ulong)(uint)piVar10[1];
    local_40 = (code *)((long)*piVar10 + (long)piVar10);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x60) = plVar5;
    pcVar3 = FUN_1009c5f68;
  }
  else {
    lVar8 = *(long *)(lVar8 + 0x10);
    iVar4 = _pthread_mutex_lock((pthread_mutex_t *)(lVar8 + 0x30));
    if (iVar4 != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1009c5e08);
      (*pcVar3)();
    }
    cVar2 = *(char *)(lVar8 + 0x20);
    *(char *)(unaff_x22 + 0x68) = cVar2;
    if (cVar2 == '\x01') {
      (**(code **)(unaff_x22 + 0x30))();
      uVar11 = 0;
    }
    else {
      uVar1 = *(ulong *)(lVar8 + 0x10);
      uVar11 = *(ulong *)(lVar8 + 0x18);
      _swift_retain(*(undefined8 *)(unaff_x22 + 0x38));
      uVar7 = uVar1;
      _swift_isUniquelyReferenced_nonNull_native();
      *(ulong *)(lVar8 + 0x10) = uVar1;
      uVar6 = uVar1;
      if ((uVar7 & 1) == 0) {
        uVar6 = 0;
        FUN_1009c7f6c(0,*(long *)(uVar1 + 0x10) + 1,1,uVar1);
        *(ulong *)(lVar8 + 0x10) = uVar6;
      }
      uVar1 = *(ulong *)(uVar6 + 0x10);
      uVar7 = uVar6;
      if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar1) {
        uVar7 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
        FUN_1009c7f6c(uVar7,uVar1 + 1,1,uVar6);
      }
      uVar13 = *(undefined8 *)(unaff_x22 + 0x38);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x30);
      *(ulong *)(uVar7 + 0x10) = uVar1 + 1;
      lVar9 = uVar7 + uVar1 * 0x18;
      *(ulong *)(lVar9 + 0x20) = uVar11;
      *(undefined8 *)(lVar9 + 0x30) = uVar13;
      *(undefined8 *)(lVar9 + 0x28) = uVar12;
      *(ulong *)(lVar8 + 0x10) = uVar7;
      if (0xfffffffffffffffe < uVar11) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1009c5e54);
        (*pcVar3)();
      }
      *(ulong *)(lVar8 + 0x18) = uVar11 + 1;
    }
    *(ulong *)(unaff_x22 + 0x48) = uVar11;
    iVar4 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar8 + 0x30));
    if (iVar4 != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1009c5e0c);
      (*pcVar3)();
    }
    piVar10 = *(int **)(unaff_x22 + 0x20);
    plVar5 = (long *)(ulong)(uint)piVar10[1];
    local_40 = (code *)((long)*piVar10 + (long)piVar10);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x50) = plVar5;
    pcVar3 = FUN_1009c5e54;
  }
  *plVar5 = unaff_x22;
  plVar5[1] = (long)pcVar3;
                    /* WARNING: Could not recover jumptable at 0x0001009c5de8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*local_40)(plVar5,*(undefined8 *)(unaff_x22 + 0x18));
  return;
}



/* Address: 0x1009c5e54 | FUN_1009c5e54 */

void FUN_1009c5e54(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x58) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x50));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1009c5eb8;
  }
  else {
    pcVar1 = FUN_1009c5fac;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1009c5eb8 | FUN_1009c5eb8 */

void FUN_1009c5eb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long unaff_x22;
  
  if ((*(byte *)(unaff_x22 + 0x68) & 1) == 0) {
    lVar6 = *(long *)(*(long *)(unaff_x22 + 0x40) + 0x10);
    iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(lVar6 + 0x30));
    if (iVar2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1009c5f64);
      (*pcVar1)();
    }
    lVar4 = *(long *)(*(long *)(lVar6 + 0x10) + 0x10);
    if (lVar4 != 0) {
      lVar3 = 0;
      plVar5 = (long *)(*(long *)(lVar6 + 0x10) + 0x20);
      do {
        if (*plVar5 == *(long *)(unaff_x22 + 0x48)) {
          FUN_1009c78b0();
          _swift_release(param_3);
          break;
        }
        lVar3 = lVar3 + 1;
        plVar5 = plVar5 + 3;
      } while (lVar4 != lVar3);
    }
    iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar6 + 0x30));
    if (iVar2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1009c5f68);
      (*pcVar1)();
    }
  }
  _swift_release(*(undefined8 *)(unaff_x22 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x0001009c5f5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1009c5f68 | FUN_1009c5f68 */

void FUN_1009c5f68(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x0001009c5fa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Address: 0x1009c5fac | FUN_1009c5fac */

void FUN_1009c5fac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long unaff_x22;
  
  if ((*(byte *)(unaff_x22 + 0x68) & 1) == 0) {
    lVar6 = *(long *)(*(long *)(unaff_x22 + 0x40) + 0x10);
    iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(lVar6 + 0x30));
    if (iVar2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1009c6058);
      (*pcVar1)();
    }
    lVar4 = *(long *)(*(long *)(lVar6 + 0x10) + 0x10);
    if (lVar4 != 0) {
      lVar3 = 0;
      plVar5 = (long *)(*(long *)(lVar6 + 0x10) + 0x20);
      do {
        if (*plVar5 == *(long *)(unaff_x22 + 0x48)) {
          FUN_1009c78b0();
          _swift_release(param_3);
          break;
        }
        lVar3 = lVar3 + 1;
        plVar5 = plVar5 + 3;
      } while (lVar4 != lVar3);
    }
    iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar6 + 0x30));
    if (iVar2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1009c605c);
      (*pcVar1)();
    }
  }
  _swift_release(*(undefined8 *)(unaff_x22 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x0001009c6050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1009c605c | FUN_1009c605c */

void FUN_1009c605c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  UnownedSerialExecutor UVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa8) = param_7;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_8;
  *(undefined8 *)(unaff_x22 + 0x98) = param_5;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_6;
  *(undefined8 *)(unaff_x22 + 0x88) = param_3;
  *(undefined8 *)(unaff_x22 + 0x90) = param_4;
  *(long *)(unaff_x22 + 0x80) = param_2;
  *(undefined8 *)(unaff_x22 + 0x58) = param_1;
  if (param_2 == 0) {
    UVar1.unknown = (undefined *)0x0;
    param_3 = 0;
  }
  else {
    _swift_getObjectType(param_2);
    UVar1 = Swift::Actor::get_unownedExecutor();
  }
  _swift_task_switch(FUN_1009c60d8,UVar1.unknown,param_3);
  return;
}



/* Address: 0x1009c60d8 | FUN_1009c60d8 */

void FUN_1009c60d8(void)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x88);
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x80);
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0xb0);
  *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(unaff_x22 + 0xa8);
  plVar1 = (long *)0x20;
  *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0x98);
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x90);
  *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0xa8);
  *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(unaff_x22 + 0xa0);
  *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(unaff_x22 + 0xa0);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xb8) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1009c6184;
  FUN_1009c5ac0(*(undefined8 *)(unaff_x22 + 0x58),&DAT_100c8c4f0,unaff_x22 + 0x10,FUN_1000386a0,
                unaff_x22 + 0x60,*(undefined8 *)(unaff_x22 + 0x80),*(undefined8 *)(unaff_x22 + 0x88)
                ,*(undefined8 *)(unaff_x22 + 0xb0));
  return;
}



/* Address: 0x1009c6184 | FUN_1009c6184 */

void FUN_1009c6184(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0xb8));
                    /* WARNING: Could not recover jumptable at 0x0001009c61c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Address: 0x1009c61c8 | FUN_1009c61c8 */

void FUN_1009c61c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005c804c;
  FUN_1009c5674(plVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}



/* Address: 0x1009c6268 | FUN_1009c6268 */

void FUN_1009c6268(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x88) = param_5;
  *(undefined8 *)(unaff_x22 + 0x90) = param_6;
  *(undefined8 *)(unaff_x22 + 0x78) = param_3;
  *(undefined8 *)(unaff_x22 + 0x80) = param_4;
  *(undefined8 *)(unaff_x22 + 0x70) = param_2;
  *(undefined8 *)(unaff_x22 + 0x48) = param_1;
  _swift_task_switch(FUN_1009c628c,0,0);
  return;
}



/* Address: 0x1009c628c | FUN_1009c628c */

void FUN_1009c628c(void)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x90);
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x78);
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0x88);
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x80);
  *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0x80);
  *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0x88);
  plVar1 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x98) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1009c6334;
  FUN_1009c5ac0(*(undefined8 *)(unaff_x22 + 0x48),&DAT_100c8c510,unaff_x22 + 0x10,
                thunk_FUN_1000386a0,unaff_x22 + 0x50,0,0,*(undefined8 *)(unaff_x22 + 0x90));
  return;
}



/* Address: 0x1009c6334 | FUN_1009c6334 */

void FUN_1009c6334(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x98));
                    /* WARNING: Could not recover jumptable at 0x0001009c6374. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}


