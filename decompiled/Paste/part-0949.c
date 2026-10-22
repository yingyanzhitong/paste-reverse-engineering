/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100a3d154 | FUN_100a3d154 */

undefined *
FUN_100a3d154(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,undefined *param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  
  uVar4 = param_2;
  if ((param_3 & 1) != 0) {
    uVar4 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar4 < (long)param_2) {
      if ((long)(uVar4 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100a3d284);
        (*pcVar2)();
      }
      uVar4 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar4 <= (long)param_2) {
        uVar4 = param_2;
      }
    }
  }
  uVar5 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar4 <= (long)uVar5) {
    uVar4 = uVar5;
  }
  puVar6 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar4 != 0) {
    FUN_1000f7830(param_5,param_6);
    _swift_allocObject();
    puVar3 = param_5;
    _malloc_size();
    puVar6 = puVar3 + -0x11;
    if (0x1f < (long)puVar3) {
      puVar6 = puVar3 + -0x20;
    }
    *(ulong *)(param_5 + 0x10) = uVar5;
    *(long *)(param_5 + 0x18) = ((long)puVar6 >> 4) << 1;
    puVar6 = param_5;
  }
  puVar3 = puVar6 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    FUN_1000f7830(param_7,param_8);
    _swift_arrayInitWithCopy(puVar3,puVar1,uVar5,param_7);
  }
  else {
    if (puVar6 != param_4 || puVar1 + uVar5 * 0x10 <= puVar3) {
      _memmove(puVar3,puVar1,uVar5 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar6;
}



/* Address: 0x100a3d284 | FUN_100a3d284 */

long FUN_100a3d284(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,long param_7)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  pthread_mutex_t *ppVar4;
  pthread_mutexattr_t local_a0;
  undefined1 auStack_90 [24];
  long local_78;
  long lStack_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  local_78 = param_6;
  lStack_70 = param_7;
  FUN_10000cbb0(auStack_90);
  (**(code **)(*(long *)(param_6 + -8) + 0x20))();
  lVar3 = 0;
  FUN_100a369c8();
  _swift_allocObject();
  ppVar4 = (pthread_mutex_t *)0x40;
  _swift_slowAlloc(0x40,0xffffffffffffffff);
  *(pthread_mutex_t **)(lVar3 + 0x10) = ppVar4;
  local_a0.__sig = 0;
  local_a0.__opaque[0] = '\0';
  local_a0.__opaque[1] = '\0';
  local_a0.__opaque[2] = '\0';
  local_a0.__opaque[3] = '\0';
  local_a0.__opaque[4] = '\0';
  local_a0.__opaque[5] = '\0';
  local_a0.__opaque[6] = '\0';
  local_a0.__opaque[7] = '\0';
  iVar2 = _pthread_mutexattr_init(&local_a0);
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100a3d3c4);
    (*pcVar1)();
  }
  iVar2 = _pthread_mutex_init(ppVar4,&local_a0);
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100a3d3c8);
    (*pcVar1)();
  }
  iVar2 = _pthread_mutexattr_destroy(&local_a0);
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100a3d3cc);
    (*pcVar1)();
  }
  *(long *)(param_5 + 0x10) = lVar3;
  *(undefined8 *)(param_5 + 0x50) = 0;
  (**(code **)(param_7 + 0x10))(param_1,param_2,param_3,param_6,param_7);
  *(undefined8 *)(param_5 + 0x18) = param_1;
  *(undefined8 *)(param_5 + 0x20) = param_2;
  FUN_100076508(auStack_90,param_5 + 0x28);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_68) {
    return param_5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100a3d3d0 | FUN_100a3d3d0 */

long FUN_100a3d3d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,long param_7)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  pthread_mutex_t *ppVar4;
  pthread_mutexattr_t local_a0;
  undefined1 auStack_90 [24];
  long local_78;
  long lStack_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  local_78 = param_6;
  lStack_70 = param_7;
  FUN_10000cbb0(auStack_90);
  (**(code **)(*(long *)(param_6 + -8) + 0x20))();
  *(undefined8 *)(param_5 + 0x20) = 0;
  lVar3 = 0;
  FUN_100a369c8();
  _swift_allocObject();
  ppVar4 = (pthread_mutex_t *)0x40;
  _swift_slowAlloc(0x40,0xffffffffffffffff);
  *(pthread_mutex_t **)(lVar3 + 0x10) = ppVar4;
  local_a0.__sig = 0;
  local_a0.__opaque[0] = '\0';
  local_a0.__opaque[1] = '\0';
  local_a0.__opaque[2] = '\0';
  local_a0.__opaque[3] = '\0';
  local_a0.__opaque[4] = '\0';
  local_a0.__opaque[5] = '\0';
  local_a0.__opaque[6] = '\0';
  local_a0.__opaque[7] = '\0';
  iVar2 = _pthread_mutexattr_init(&local_a0);
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100a3d514);
    (*pcVar1)();
  }
  iVar2 = _pthread_mutex_init(ppVar4,&local_a0);
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100a3d518);
    (*pcVar1)();
  }
  iVar2 = _pthread_mutexattr_destroy(&local_a0);
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100a3d51c);
    (*pcVar1)();
  }
  *(long *)(param_5 + 0x28) = lVar3;
  (**(code **)(param_7 + 0x28))(param_1,param_2,param_3,1,param_6,param_7);
  *(undefined8 *)(param_5 + 0x10) = param_1;
  *(undefined8 *)(param_5 + 0x18) = param_2;
  FUN_100076508(auStack_90,param_5 + 0x30);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_68) {
    return param_5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100a3d520 | FUN_100a3d520 */

void FUN_100a3d520(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,code *param_8)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_6 + -8);
  lVar1 = *(long *)(lVar2 + 0x40);
  _swift_allocObject(param_5,0x58,7);
  (**(code **)(lVar2 + 0x10))
            (&stack0xffffffffffffffa0 + -(lVar1 + 0xfU & 0xfffffffffffffff0),param_4,param_6);
  (*param_8)(param_1,param_2,param_3,&stack0xffffffffffffffa0 + -(lVar1 + 0xfU & 0xfffffffffffffff0)
             ,param_5,param_6,param_7);
  return;
}



/* Address: 0x100a3d5dc | FUN_100a3d5dc */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100a3d5dc(void)

{
  return ZEXT816(0x100ff5e78);
}



/* Address: 0x100a3d5fc | FUN_100a3d5fc */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100a3d5fc(void)

{
  return ZEXT816(0x100ff5f30);
}



/* Address: 0x100a3d61c | FUN_100a3d61c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100a3d61c(void)

{
  return ZEXT816(0x100ff6088);
}



/* Address: 0x100a3d63c | FUN_100a3d63c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100a3d63c(void)

{
  return ZEXT816(0x100ff6128);
}



/* Address: 0x100a3d65c | FUN_100a3d65c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100a3d65c(void)

{
  return ZEXT816(0x100ff61c8);
}



/* Address: 0x100a3d67c | FUN_100a3d67c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100a3d67c(void)

{
  return ZEXT816(0x100ff6268);
}



/* Address: 0x100a3d69c | FUN_100a3d69c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100a3d69c(void)

{
  return ZEXT816(0x100ff6308);
}



/* Address: 0x100a3d6bc | FUN_100a3d6bc */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100a3d6bc(void)

{
  return ZEXT816(0x100ff5948);
}



/* Address: 0x100a3d6dc | FUN_100a3d6dc */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100a3d6dc(void)

{
  return ZEXT816(0x100ff5a00);
}



/* Address: 0x100a3d6fc | FUN_100a3d6fc */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100a3d6fc(void)

{
  return ZEXT816(0x100ff5ae0);
}



/* Address: 0x100a3d71c | FUN_100a3d71c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100a3d71c(void)

{
  return ZEXT816(0x100ff5bb0);
}



/* Address: 0x100a3d73c | FUN_100a3d73c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100a3d73c(void)

{
  return ZEXT816(0x100ff5c40);
}



/* Address: 0x100a3d75c | FUN_100a3d75c */

void FUN_100a3d75c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  return;
}



/* Address: 0x100a3d768 | FUN_100a3d768 */

int FUN_100a3d768(byte *param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xf9 < param_2) && (param_1[0x10] != 0)) {
    return *(int *)param_1 + 0xfa;
  }
  iVar1 = *param_1 - 7;
  if (*param_1 < 7) {
    iVar1 = -1;
  }
  return iVar1 + 1;
}



/* Address: 0x100a3d7ac | FUN_100a3d7ac */

void FUN_100a3d7ac(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0xfa) {
    if (0xf9 < param_3) {
      *(char *)(param_1 + 2) = '\0';
    }
    if (param_2 != 0) {
      *(char *)param_1 = (char)param_2 + '\x06';
      return;
    }
  }
  else {
    *param_1 = (ulong)(param_2 - 0xfa);
    param_1[1] = 0;
    if (0xf9 < param_3) {
      *(char *)(param_1 + 2) = '\x01';
    }
  }
  return;
}



/* Address: 0x100a3d7ec | FUN_100a3d7ec */

undefined1  [16] FUN_100a3d7ec(void)

{
  return ZEXT816(0x100f2a198);
}



/* Address: 0x100a3d7fc | FUN_100a3d7fc */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100a3d7fc(void)

{
  return ZEXT816(0x100ff5d10);
}



/* Address: 0x100a3d81c | FUN_100a3d81c */

undefined1  [16] FUN_100a3d81c(void)

{
  return ZEXT816(0x100f2a1c0);
}



/* Address: 0x100a3d82c | FUN_100a3d82c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100a3d82c(void)

{
  return ZEXT816(0x100ff5dc8);
}



/* Address: 0x100a3d84c | FUN_100a3d84c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100a3d84c(void)

{
  return ZEXT816(0x100ff5fe8);
}



/* Address: 0x100a3d86c | FUN_100a3d86c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100a3d86c(void)

{
  return ZEXT816(0x100ff63a8);
}



/* Address: 0x100a3d88c | FUN_100a3d88c */

void FUN_100a3d88c(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Address: 0x100a3d898 | FUN_100a3d898 */

undefined1  [16] FUN_100a3d898(void)

{
  return ZEXT816(0x100f2a250);
}



/* Address: 0x100a3d8a8 | thunk_FUN_100a3d8ac */

void thunk_FUN_100a3d8ac(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff6400 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c8f824;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8f824,&DAT_100f2a250);
  DAT_100ff6400 = pTVar1;
  return;
}



/* Address: 0x100a3d8ac | FUN_100a3d8ac */

void FUN_100a3d8ac(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff6400 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c8f824;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8f824,&DAT_100f2a250);
  DAT_100ff6400 = pTVar1;
  return;
}



/* Address: 0x100a3d8ec | thunk_FUN_100422750 */

void thunk_FUN_100422750(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100076688(unaff_x20 + 0x20,param_1);
  return;
}



/* Address: 0x100a3d8f0 | thunk_FUN_100a388ec */

void thunk_FUN_100a388ec(void)

{
  FUN_100a388ec();
  return;
}



/* Address: 0x100a3d8f4 | thunk_FUN_100a37ae4 */

void thunk_FUN_100a37ae4(void)

{
  thunk_FUN_100a37ae4();
  return;
}



/* Address: 0x100a3d8f8 | thunk_FUN_100a38480 */

void thunk_FUN_100a38480(void)

{
  FUN_100a38480();
  return;
}



/* Address: 0x100a3d8fc | thunk_FUN_1005a100c */

void thunk_FUN_1005a100c(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Address: 0x100a3d900 | thunk_FUN_100a37b20 */

void thunk_FUN_100a37b20(void)

{
  thunk_FUN_100a37b20();
  return;
}



/* Address: 0x100a3d904 | thunk_FUN_100a37ed0 */

void thunk_FUN_100a37ed0(void)

{
  thunk_FUN_100a37ed0();
  return;
}



/* Address: 0x100a3d908 | thunk_FUN_100a3c6b0 */

void thunk_FUN_100a3c6b0(void)

{
  FUN_100a3c6b0();
  return;
}



/* Address: 0x100a3d90c | thunk_FUN_100a3c4b8 */

void thunk_FUN_100a3c4b8(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  
  lVar4 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x10);
  if (lVar4 != 0) {
    plVar5 = (long *)(*(long *)(unaff_x20 + 0x10) + 0x28);
    do {
      lVar1 = plVar5[-1];
      lVar2 = *plVar5;
      lVar3 = lVar1;
      _swift_getObjectType(lVar1);
      pcVar6 = *(code **)(lVar2 + 0x18);
      _swift_unknownObjectRetain(lVar1);
      (*pcVar6)(param_1,lVar3,lVar2);
      _swift_unknownObjectRelease(lVar1);
      plVar5 = plVar5 + 2;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



/* Address: 0x100a3d910 | thunk_FUN_1005c3738 */

void thunk_FUN_1005c3738(void)

{
  FUN_1005c3738();
  return;
}



/* Address: 0x100a3d914 | thunk_FUN_100a3c1c4 */

void thunk_FUN_100a3c1c4(void)

{
  FUN_100a3c1c4();
  return;
}



/* Address: 0x100a3d918 | thunk_FUN_100a38848 */

void thunk_FUN_100a38848(void)

{
  FUN_100a38848();
  return;
}



/* Address: 0x100a3d91c | thunk_FUN_100a388c0 */

void thunk_FUN_100a388c0(void)

{
  FUN_100a388c0();
  return;
}



/* Address: 0x100a3d920 | thunk_FUN_100a374ac */

void thunk_FUN_100a374ac(void)

{
  thunk_FUN_100a374ac();
  return;
}



/* Address: 0x100a3d924 | thunk_FUN_100a39f78 */

void thunk_FUN_100a39f78(void)

{
  FUN_100a39f78();
  return;
}



/* Address: 0x100a3d928 | thunk_FUN_100a374ec */

void thunk_FUN_100a374ec(void)

{
  FUN_100a39fac(0x60);
  return;
}



/* Address: 0x100a3d92c | thunk_FUN_100a37b14 */

void thunk_FUN_100a37b14(void)

{
  FUN_100a39fac(0x61);
  return;
}



/* Address: 0x100a3d930 | FUN_100a3d930 */

void FUN_100a3d930(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  long unaff_x21;
  
  FUN_100a3a798(param_1,FUN_1005ce100,&stack0xffffffffffffff90);
  if (unaff_x21 != 0) {
    _swift_errorRetain();
    puVar1 = &DAT_100ff6468;
    FUN_1000f7830(&DAT_100ff6468,&DAT_100c8f9e8);
    _swift_dynamicCast(in_x6,&stack0xffffffffffffff90,puVar1,in_x4,7);
    FUN_1005c64f0(in_x6,in_x4,in_x5);
    _swift_errorRelease();
  }
  return;
}



/* Address: 0x100a3d9dc | FUN_100a3d9dc */

void FUN_100a3d9dc(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = param_9;
  *(undefined8 *)(unaff_x22 + 0x60) = param_10;
  *(undefined8 *)(unaff_x22 + 0x50) = param_8;
  *(undefined8 *)(unaff_x22 + 0x20) = param_7;
  *(undefined8 *)(unaff_x22 + 0x28) = param_8;
  *(undefined8 *)(unaff_x22 + 0x30) = param_9;
  *(undefined8 *)(unaff_x22 + 0x38) = param_5;
  *(undefined8 *)(unaff_x22 + 0x40) = param_6;
  plVar1 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x68) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100a3da8c;
  FUN_100a3a868(plVar1,param_1,param_2,param_3 & 0xcfffffffffffffff,param_4,&DAT_100c8fa00,
                unaff_x22 + 0x10,param_7);
  return;
}



/* Address: 0x100a3da8c | FUN_100a3da8c */

void FUN_100a3da8c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *UNRECOVERED_JUMPTABLE;
  long lVar4;
  long unaff_x20;
  long *unaff_x22;
  long lVar5;
  undefined8 uVar6;
  
  lVar4 = *unaff_x22;
  lVar5 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0x68));
  if (unaff_x20 == 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(lVar5 + 8);
  }
  else {
    *(long *)(lVar4 + 0x48) = unaff_x20;
    uVar1 = *(undefined8 *)(lVar4 + 0x58);
    uVar2 = *(undefined8 *)(lVar4 + 0x60);
    uVar6 = *(undefined8 *)(lVar4 + 0x50);
    _swift_errorRetain();
    puVar3 = &DAT_100ff6468;
    FUN_1000f7830(&DAT_100ff6468,&DAT_100c8f9e8);
    _swift_dynamicCast(uVar2,(long *)(lVar4 + 0x48),puVar3,uVar6,7);
    FUN_1005c64f0(uVar2,uVar6,uVar1);
    _swift_errorRelease();
    UNRECOVERED_JUMPTABLE = *(code **)(lVar5 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000100a3db44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x100a3db48 | FUN_100a3db48 */

void FUN_100a3db48(undefined8 param_1,undefined8 param_2,ulong param_3,int *param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x10) = param_7;
  *(undefined8 *)(unaff_x22 + 0x18) = param_8;
  lVar4 = *(long *)(param_7 + -8);
  *(long *)(unaff_x22 + 0x20) = lVar4;
  uVar2 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x28) = uVar2;
  iVar1 = *param_4;
  plVar3 = (long *)(ulong)(uint)param_4[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x30) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100a3dc00;
                    /* WARNING: Could not recover jumptable at 0x000100a3dbfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_4))
            (plVar3,param_1,param_2,param_3 & 0xcfffffffffffffff,uVar2);
  return;
}



/* Address: 0x100a3dc00 | FUN_100a3dc00 */

void FUN_100a3dc00(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  long *unaff_x22;
  long lVar6;
  
  lVar5 = *unaff_x22;
  lVar6 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar5 + 0x30));
  if (unaff_x20 == 0) {
    _swift_task_dealloc(*(undefined8 *)(lVar5 + 0x28));
    UNRECOVERED_JUMPTABLE = *(code **)(lVar6 + 8);
  }
  else {
    lVar1 = *(long *)(lVar5 + 0x20);
    uVar3 = *(undefined8 *)(lVar5 + 0x28);
    uVar2 = *(undefined8 *)(lVar5 + 0x10);
    uVar4 = *(undefined8 *)(lVar5 + 0x18);
    _swift_allocError(uVar2,uVar4,0,0);
    (**(code **)(lVar1 + 0x20))(uVar4,uVar3,uVar2);
    _swift_task_dealloc(uVar3);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar6 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000100a3dc98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x100a3dc9c | FUN_100a3dc9c */

void FUN_100a3dc9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
  plVar5 = (long *)0x40;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1005c804c;
  FUN_100a3db48(plVar5,param_1,param_2,param_3,uVar4,uVar6,uVar1,uVar3,uVar2);
  return;
}



/* Address: 0x100a3dd50 | FUN_100a3dd50 */

void FUN_100a3dd50(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_78 [24];
  long local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  FUN_100a4a6b4(auStack_78,FUN_100a3de6c,0);
  if (local_60 == 0) {
    FUN_1000fb4c4(auStack_78,&DAT_100ff6470,&DAT_100c8fa20);
    uStack_48 = 0;
    local_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    local_30 = 0;
  }
  else {
    puVar1 = &DAT_100ff6480;
    FUN_1000f7830(&DAT_100ff6480,&DAT_100c8fa30);
    puVar2 = &DAT_100ff6488;
    FUN_1000f7830(&DAT_100ff6488,&DAT_100c8fa38);
    puVar3 = &local_50;
    _swift_dynamicCast(puVar3,auStack_78,puVar1,puVar2,0xe);
    if (((ulong)puVar3 & 1) == 0) {
      local_30 = 0;
      uStack_48 = 0;
      local_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
    }
  }
  FUN_1000f8cac(&local_50,auStack_78,&DAT_100ff6478,&DAT_100c8fa28);
  if (local_60 == 0) {
    *(undefined **)(param_1 + 0x18) = &DAT_100f2a4b0;
    *(undefined ***)(param_1 + 0x20) = &PTR_PTR_100ff64a0;
  }
  else {
    FUN_100076508(auStack_78,param_1);
  }
  FUN_1000fb4c4(&local_50,&DAT_100ff6478,&DAT_100c8fa28);
  return;
}



/* Address: 0x100a3de6c | FUN_100a3de6c */

void FUN_100a3de6c(undefined8 param_1)

{
  FUN_100a3dfb0(param_1,&DAT_100ff6488,&DAT_100c8fa38);
  return;
}



/* Address: 0x100a3de80 | FUN_100a3de80 */

void FUN_100a3de80(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_78 [24];
  long local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  FUN_100a4a6b4(auStack_78,FUN_100a3df9c,0);
  if (local_60 == 0) {
    FUN_1000fb4c4(auStack_78,&DAT_100ff6470,&DAT_100c8fa20);
    uStack_48 = 0;
    local_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    local_30 = 0;
  }
  else {
    puVar1 = &DAT_100ff6480;
    FUN_1000f7830(&DAT_100ff6480,&DAT_100c8fa30);
    puVar2 = &DAT_100ff6498;
    FUN_1000f7830(&DAT_100ff6498,&DAT_100c8fa48);
    puVar3 = &local_50;
    _swift_dynamicCast(puVar3,auStack_78,puVar1,puVar2,0xe);
    if (((ulong)puVar3 & 1) == 0) {
      local_30 = 0;
      uStack_48 = 0;
      local_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
    }
  }
  FUN_1000f8cac(&local_50,auStack_78,&DAT_100ff6490,&DAT_100c8fa40);
  if (local_60 == 0) {
    *(undefined **)(param_1 + 0x18) = &DAT_100f2a4b0;
    *(undefined ***)(param_1 + 0x20) = &PTR_PTR_100f2a468;
  }
  else {
    FUN_100076508(auStack_78,param_1);
  }
  FUN_1000fb4c4(&local_50,&DAT_100ff6490,&DAT_100c8fa40);
  return;
}



/* Address: 0x100a3df9c | FUN_100a3df9c */

void FUN_100a3df9c(undefined8 param_1)

{
  FUN_100a3dfb0(param_1,&DAT_100ff6498,&DAT_100c8fa48);
  return;
}



/* Address: 0x100a3dfb0 | FUN_100a3dfb0 */

void FUN_100a3dfb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined1 auStack_80 [40];
  undefined1 auStack_58 [40];
  
  iVar1 = (int)auStack_80;
  FUN_100076688(param_1,auStack_58);
  puVar2 = &DAT_100ff6480;
  FUN_1000f7830(&DAT_100ff6480,&DAT_100c8fa30);
  FUN_1000f7830(param_2,param_3);
  _swift_dynamicCast(auStack_80,auStack_58,puVar2,param_2,0xe);
  if (iVar1 != 0) {
    FUN_100004594(auStack_80);
  }
  return;
}



/* Address: 0x100a3e038 | FUN_100a3e038 */

void FUN_100a3e038(undefined8 *param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  (*param_4)();
  param_1[3] = &DAT_100f2a4d0;
  param_1[4] = &PTR_PTR_100f2a3f8;
  *param_1 = param_2;
  return;
}



/* Address: 0x100a3e074 | FUN_100a3e074 */

void FUN_100a3e074(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  FUN_100004520(param_2,param_4,param_5,param_6);
  return;
}



/* Address: 0x100a3e088 | FUN_100a3e088 */

undefined1  [16] FUN_100a3e088(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = &DAT_e400000000000000;
  auVar1._0_8_ = 0x706f6f6e;
  return auVar1;
}



/* Address: 0x100a3e098 | FUN_100a3e098 */

undefined1  [16] FUN_100a3e098(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  
  *param_1 = 0x706f6f6e;
  param_1[1] = &DAT_e400000000000000;
  auVar1._8_8_ = param_1;
  auVar1._0_8_ = FUN_1000884a0;
  return auVar1;
}



/* Address: 0x100a3e0b8 | FUN_100a3e0b8 */

/* WARNING: Removing unreachable block (ram,0x000100a3e104) */

undefined * FUN_100a3e0b8(void)

{
  undefined *local_28;
  
  local_28 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  FUN_100a3e2a0(PTR___swiftEmptyArrayStorage_100eae0d8,1,&local_28);
  return local_28;
}



/* Address: 0x100a3e124 | FUN_100a3e124 */

/* WARNING: Removing unreachable block (ram,0x000100a3e18c) */

undefined1  [16] FUN_100a3e124(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  undefined *local_40 [2];
  
  local_40[0] = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  FUN_100a3e2a0(PTR___swiftEmptyArrayStorage_100eae0d8,1,local_40);
  *param_1 = local_40[0];
  auVar1._8_8_ = param_1;
  auVar1._0_8_ = FUN_100108cb8;
  return auVar1;
}



/* Address: 0x100a3e1ac | FUN_100a3e1ac */

undefined1  [16] FUN_100a3e1ac(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  
  *param_1 = 0x706f6f6e;
  param_1[1] = &DAT_e400000000000000;
  auVar1._8_8_ = param_1;
  auVar1._0_8_ = thunk_FUN_1000884a0;
  return auVar1;
}


