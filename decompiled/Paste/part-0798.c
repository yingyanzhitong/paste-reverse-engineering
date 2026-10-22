/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1008c6cb0 | FUN_1008c6cb0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1008c6cb0(void)

{
  code *pcVar1;
  long unaff_x20;
  undefined1 auStack_28 [24];
  
  _swift_beginAccess(unaff_x20 + 0x20,auStack_28,0,0);
  if (*(long *)(*(long *)(unaff_x20 + 0x20) + 0x10) == 0) {
    _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
    _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
    _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
    _swift_release(*(undefined8 *)(unaff_x20 + 0x40));
    _swift_deallocClassInstance();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008c6d2c);
  (*pcVar1)();
}



/* Address: 0x1008c6d2c | thunk_FUN_1008c2bb8 */

void thunk_FUN_1008c2bb8(void)

{
  FUN_1008c2bb8();
  return;
}



/* Address: 0x1008c6d30 | FUN_1008c6d30 */

void FUN_1008c6d30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  
  FUN_100640e7c(param_1,param_2,*unaff_x20,param_3);
  return;
}



/* Address: 0x1008c6d3c | thunk_FUN_1008c3e74 */

void thunk_FUN_1008c3e74(void)

{
  FUN_1008c3e74();
  return;
}



/* Address: 0x1008c6d40 | thunk_FUN_1008c46a8 */

void thunk_FUN_1008c46a8(void)

{
  FUN_1008c46a8();
  return;
}



/* Address: 0x1008c6d44 | FUN_1008c6d44 */

void FUN_1008c6d44(void)

{
  FUN_1008c6f70();
  return;
}



/* Address: 0x1008c6d50 | FUN_1008c6d50 */

void FUN_1008c6d50(void)

{
  FUN_1008c6f70();
  return;
}



/* Address: 0x1008c6d5c | FUN_1008c6d5c */

void FUN_1008c6d5c(undefined8 param_1,undefined8 param_2)

{
  FUN_1003b6598(&DAT_100feb2d0,param_2,FUN_1008c8478,&TargetProtocolConformanceDescriptor_100c829c4)
  ;
  _swift_unknownObjectRetain();
  return;
}



/* Address: 0x1008c6da0 | FUN_1008c6da0 */

void FUN_1008c6da0(void)

{
  FUN_1008c715c();
  return;
}



/* Address: 0x1008c6db4 | FUN_1008c6db4 */

void FUN_1008c6db4(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined7 local_37;
  undefined1 uStack_30;
  undefined8 uStack_2f;
  
  FUN_1008c46b4(&local_50);
  if (unaff_x21 == 0) {
    param_1[1] = uStack_48;
    *param_1 = local_50;
    param_1[3] = CONCAT71(local_37,uStack_38);
    param_1[2] = uStack_40;
    *(undefined8 *)((long)param_1 + 0x21) = uStack_2f;
    *(ulong *)((long)param_1 + 0x19) = CONCAT17(uStack_30,local_37);
  }
  return;
}



/* Address: 0x1008c6df4 | FUN_1008c6df4 */

void FUN_1008c6df4(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined7 local_37;
  undefined1 uStack_30;
  undefined8 uStack_2f;
  
  FUN_1008c4918(&local_50);
  if (unaff_x21 == 0) {
    param_1[1] = uStack_48;
    *param_1 = local_50;
    param_1[3] = CONCAT71(local_37,uStack_38);
    param_1[2] = uStack_40;
    *(undefined8 *)((long)param_1 + 0x21) = uStack_2f;
    *(ulong *)((long)param_1 + 0x19) = CONCAT17(uStack_30,local_37);
  }
  return;
}



/* Address: 0x1008c6e34 | FUN_1008c6e34 */

void FUN_1008c6e34(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  
  if (*(char *)(param_1 + 0x28) != '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    _swift_retain(uVar4);
    _swift_retain(uVar2);
    FUN_1008d30f4(uVar4,uVar1,uVar2);
    _swift_release(uVar2);
    _swift_release(uVar4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1008c6e98);
  (*pcVar3)();
}



/* Address: 0x1008c6e98 | thunk_FUN_1008c64dc */

void thunk_FUN_1008c64dc(void)

{
  FUN_1008c64dc();
  return;
}



/* Address: 0x1008c6e9c | thunk_FUN_1008c6724 */

void thunk_FUN_1008c6724(void)

{
  FUN_1008c6724();
  return;
}



/* Address: 0x1008c6ea0 | thunk_FUN_1008c67ec */

void thunk_FUN_1008c67ec(void)

{
  FUN_1008c67ec();
  return;
}



/* Address: 0x1008c6ea4 | thunk_FUN_1008c68ac */

void thunk_FUN_1008c68ac(void)

{
  FUN_1008c68ac();
  return;
}



/* Address: 0x1008c6ea8 | FUN_1008c6ea8 */

void FUN_1008c6ea8(void)

{
  FUN_1008c6ee0();
  return;
}



/* Address: 0x1008c6ec4 | FUN_1008c6ec4 */

void FUN_1008c6ec4(void)

{
  FUN_1008c6ee0();
  return;
}



/* Address: 0x1008c6ee0 | FUN_1008c6ee0 */

void FUN_1008c6ee0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,code *param_8)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined7 local_37;
  undefined1 uStack_30;
  undefined8 uStack_2f;
  
  (*param_8)(&local_50,param_2,param_3,*unaff_x20,param_4,param_7,param_5);
  if (unaff_x21 == 0) {
    param_1[1] = uStack_48;
    *param_1 = local_50;
    param_1[3] = CONCAT71(local_37,uStack_38);
    param_1[2] = uStack_40;
    *(undefined8 *)((long)param_1 + 0x21) = uStack_2f;
    *(ulong *)((long)param_1 + 0x19) = CONCAT17(uStack_30,local_37);
  }
  return;
}



/* Address: 0x1008c6f30 | FUN_1008c6f30 */

void FUN_1008c6f30(void)

{
  _swift_unknownObjectRetain();
  return;
}



/* Address: 0x1008c6f5c | thunk_FUN_1008c5ae8 */

void thunk_FUN_1008c5ae8(void)

{
  FUN_1008c5ae8();
  return;
}



/* Address: 0x1008c6f60 | FUN_1008c6f60 */

void FUN_1008c6f60(void)

{
  undefined8 *unaff_x20;
  
  FUN_1006419c8(*unaff_x20,&PTR_PTR_100f0d740);
  return;
}



/* Address: 0x1008c6f70 | FUN_1008c6f70 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1008c6f70(void)

{
  code *pcVar1;
  DispatchPredicate DVar2;
  bool bVar3;
  undefined7 extraout_var;
  undefined4 *in_x6;
  long unaff_x20;
  undefined8 *puVar5;
  long lVar6;
  long lVar4;
  
  DVar2 = Dispatch::DispatchPredicate::typeMetadataAccessor();
  lVar4 = CONCAT71(extraout_var,DVar2.value);
  lVar6 = *(long *)(lVar4 + -8);
  puVar5 = (undefined8 *)
           (&stack0xffffffffffffffc0 + -(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0));
  *puVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  (**(code **)(lVar6 + 0x68))(puVar5,*in_x6,lVar4);
  bVar3 = Dispatch::_dispatchPreconditionTest((DispatchPredicate)(__int8)puVar5);
  (**(code **)(lVar6 + 8))(puVar5,lVar4);
  if (bVar3) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008c7010);
  (*pcVar1)();
}



/* Address: 0x1008c7010 | FUN_1008c7010 */

void FUN_1008c7010(UnownedJob param_1,undefined8 param_2)

{
  FUN_1003b6598(&DAT_100feb2d8,param_2,FUN_1008c8478,&TargetProtocolConformanceDescriptor_100c82a24)
  ;
  (extension_Swift)::Swift::Executor::enqueue(param_1);
  return;
}



/* Address: 0x1008c7064 | FUN_1008c7064 */

void FUN_1008c7064(Job param_1,undefined8 param_2)

{
  FUN_1003b6598(&DAT_100feb2d8,param_2,FUN_1008c8478,&TargetProtocolConformanceDescriptor_100c82a24)
  ;
  (extension_Swift)::Swift::Executor::enqueue(param_1);
  return;
}



/* Address: 0x1008c70b8 | FUN_1008c70b8 */

void FUN_1008c70b8(void)

{
  FUN_1008c715c();
  return;
}



/* Address: 0x1008c70cc | FUN_1008c70cc */

void FUN_1008c70cc(void)

{
  code *pcVar1;
  long unaff_x20;
  long local_28;
  
  FUN_1008c1058(0);
  if (DAT_100feb2b0 != -1) {
    _swift_once(&DAT_100feb2b0,FUN_1008c3000);
  }
  (extension_Dispatch)::__C::OS_dispatch_queue::_getSpecific();
  if (local_28 != 0 && unaff_x20 == local_28) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008c7148);
  (*pcVar1)();
}



/* Address: 0x1008c7148 | FUN_1008c7148 */

void FUN_1008c7148(void)

{
  FUN_1008c715c();
  return;
}



/* Address: 0x1008c715c | FUN_1008c715c */

void FUN_1008c715c(ExecutorJob param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  UnownedJob UVar1;
  undefined8 unaff_x20;
  
  UVar1 = Swift::UnownedJob::init(param_1);
  _swift_allocObject(param_4,0x20,7);
  *(undefined **)(param_4 + 0x10) = UVar1.unknown;
  *(undefined8 *)(param_4 + 0x18) = unaff_x20;
  _swift_retain();
  FUN_1008c2bb8(param_5,param_4);
  _swift_release(param_4);
  return;
}



/* Address: 0x1008c71bc | FUN_1008c71bc */

void FUN_1008c71bc(void)

{
  code *pcVar1;
  long unaff_x20;
  
  if (*(long *)(*(long *)(unaff_x20 + 0x18) + 0x10) == 0) {
    _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
    _swift_deallocClassInstance();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008c71f8);
  (*pcVar1)();
}



/* Address: 0x1008c71f8 | FUN_1008c71f8 */

void FUN_1008c71f8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
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
  _swift_task_switch(FUN_1008c726c,UVar1.unknown,param_3);
  return;
}



/* Address: 0x1008c726c | FUN_1008c726c */

void FUN_1008c726c(void)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x50);
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_1005da450;
  _swift_continuation_init(unaff_x22 + 0x10,1);
  FUN_1008c72ec();
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}



/* Address: 0x1008c72ec | FUN_1008c72ec */

void FUN_1008c72ec(UnsafeContinuation<undefined,undefined> param_1,code *param_2,undefined8 param_3,
                  char *param_4,void *param_5)

{
  CheckedContinuation CVar1;
  long lVar2;
  long lVar3;
  String function;
  
  FUN_1000f7830(&DAT_100feb0c8,&DAT_100c82c50);
  CVar1 = Swift::CheckedContinuation::typeMetadataAccessor();
  lVar3 = *(long *)(CVar1.unknown + -8);
  lVar2 = *(long *)(lVar3 + 0x40);
  _swift_bridgeObjectRetain(param_5);
  function.bridgeObject = param_5;
  function.str = param_4;
  Swift::CheckedContinuation::init(param_1,function);
  (*param_2)(&stack0xffffffffffffffa0 + -(lVar2 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(lVar3 + 8))
            (&stack0xffffffffffffffa0 + -(lVar2 + 0xfU & 0xfffffffffffffff0),CVar1.unknown);
  return;
}



/* Address: 0x1008c73d8 | FUN_1008c73d8 */

void FUN_1008c73d8(long param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong *unaff_x20;
  ulong uVar5;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined2 local_60;
  
  uVar3 = *unaff_x20;
  uVar5 = unaff_x20[1];
  lVar4 = unaff_x20[2] - uVar5;
  if ((long)unaff_x20[2] < (long)uVar5) {
    lVar4 = lVar4 + *(long *)(uVar3 + 0x10);
  }
  if (lVar4 < param_1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008c74bc);
    (*pcVar1)();
  }
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008c74c0);
    (*pcVar1)();
  }
  if (param_1 != 0) {
    uVar2 = uVar3;
    _swift_isUniquelyReferenced_nonNull_native();
    if ((uVar2 & 1) == 0) {
      thunk_FUN_1008d1a30();
    }
    do {
      uStack_78 = 0;
      local_80 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_98 = 0;
      local_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      local_60 = 0xff00;
      if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1008c74b4);
        (*pcVar1)();
      }
      if (*(ulong *)(uVar3 + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1008c74b8);
        (*pcVar1)();
      }
      FUN_1008c8a20(&local_a0,uVar3 + 0x20 + uVar5 * 0x48);
      uVar5 = *(long *)(uVar3 + 0x10) + 0x7fffffffffffffffU & uVar5 + 1;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
    *unaff_x20 = uVar3;
  }
  unaff_x20[1] = uVar5;
  return;
}



/* Address: 0x1008c74c0 | FUN_1008c74c0 */

void FUN_1008c74c0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong *unaff_x20;
  ulong uVar13;
  
  uVar9 = *unaff_x20;
  uVar13 = unaff_x20[1];
  lVar11 = unaff_x20[2] - uVar13;
  if ((long)unaff_x20[2] < (long)uVar13) {
    lVar11 = lVar11 + *(long *)(uVar9 + 0x10);
  }
  if (lVar11 < param_1) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x1008c75a4);
    (*pcVar7)();
  }
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x1008c75a8);
    (*pcVar7)();
  }
  if (param_1 != 0) {
    uVar8 = uVar9;
    _swift_isUniquelyReferenced_nonNull_native();
    if ((uVar8 & 1) == 0) {
      FUN_1008d1a08();
    }
    do {
      if ((long)uVar13 < 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1008c759c);
        (*pcVar7)();
      }
      if (*(ulong *)(uVar9 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1008c75a0);
        (*pcVar7)();
      }
      puVar12 = (undefined8 *)(uVar9 + 0x20 + uVar13 * 0x38);
      uVar1 = *puVar12;
      uVar4 = puVar12[1];
      uVar2 = puVar12[2];
      uVar5 = puVar12[3];
      uVar3 = puVar12[4];
      uVar6 = puVar12[5];
      uVar10 = puVar12[6];
      puVar12[1] = 0;
      *puVar12 = 0;
      puVar12[3] = 0;
      puVar12[2] = 0;
      puVar12[5] = 0;
      puVar12[4] = 0;
      puVar12[6] = 0;
      FUN_1008c86b8(uVar1,uVar4,uVar2,uVar5,uVar3,uVar6,uVar10);
      uVar13 = *(long *)(uVar9 + 0x10) + 0x7fffffffffffffffU & uVar13 + 1;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
    *unaff_x20 = uVar9;
  }
  unaff_x20[1] = uVar13;
  return;
}



/* Address: 0x1008c75a8 | FUN_1008c75a8 */

void FUN_1008c75a8(undefined8 *param_1)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *unaff_x20;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  uVar8 = *unaff_x20;
  uVar11 = *(ulong *)(uVar8 + 0x10);
  uVar13 = uVar8;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar14 = uVar8;
  if ((uVar13 & 1) == 0) {
    uVar14 = 0;
    FUN_1008d1050(0,uVar11 + 1,1,uVar8);
  }
  uVar13 = *(ulong *)(uVar14 + 0x10);
  uVar8 = uVar14;
  if (*(ulong *)(uVar14 + 0x18) >> 1 <= uVar13) {
    uVar8 = (ulong)(1 < *(ulong *)(uVar14 + 0x18));
    FUN_1008d1050(uVar8,uVar13 + 1,1,uVar14);
  }
  uVar4 = param_1[2];
  uVar9 = param_1[4];
  *(ulong *)(uVar8 + 0x10) = uVar13 + 1;
  lVar1 = uVar8 + 0x20;
  puVar5 = (undefined8 *)(lVar1 + uVar13 * 0x38);
  uVar18 = param_1[1];
  uVar12 = *param_1;
  uVar19 = param_1[3];
  uVar17 = param_1[2];
  uVar21 = param_1[5];
  uVar20 = param_1[4];
  puVar5[6] = param_1[6];
  puVar5[3] = uVar19;
  puVar5[2] = uVar17;
  puVar5[5] = uVar21;
  puVar5[4] = uVar20;
  puVar5[1] = uVar18;
  *puVar5 = uVar12;
  *unaff_x20 = uVar8;
  _swift_retain(uVar4);
  _swift_retain(uVar9);
  if (uVar11 != 0) {
    do {
      if (*(ulong *)(uVar8 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1008c7758);
        (*pcVar2)();
      }
      uVar13 = uVar11 - 1;
      uVar14 = uVar13 >> 1;
      if (*(ulong *)(uVar8 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1008c775c);
        (*pcVar2)();
      }
      puVar5 = (undefined8 *)(lVar1 + uVar11 * 0x38);
      uVar15 = puVar5[5];
      puVar16 = (undefined8 *)(lVar1 + uVar14 * 0x38);
      uVar6 = puVar16[5];
      if ((long)(uVar6 | uVar15) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1008c7760);
        (*pcVar2)();
      }
      uVar10 = puVar5[6];
      uVar7 = puVar16[6];
      bVar3 = uVar10 < uVar7;
      if (uVar15 != uVar6) {
        bVar3 = uVar15 < uVar6;
      }
      if (!bVar3) {
        return;
      }
      if (uVar11 != uVar14) {
        uVar12 = *puVar5;
        uVar21 = puVar5[2];
        uVar20 = puVar5[1];
        uVar19 = puVar5[4];
        uVar18 = puVar5[3];
        *puVar5 = *puVar16;
        uVar4 = puVar16[2];
        uVar9 = puVar16[1];
        puVar5[2] = puVar16[2];
        puVar5[1] = uVar9;
        uVar9 = puVar16[4];
        uVar17 = puVar16[3];
        puVar5[4] = puVar16[4];
        puVar5[3] = uVar17;
        puVar5[5] = uVar6;
        puVar5[6] = uVar7;
        uVar11 = *(ulong *)(uVar8 + 0x10);
        _swift_retain(uVar4);
        _swift_retain(uVar9);
        if (uVar11 <= uVar14) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1008c7734);
          (*pcVar2)();
        }
        uVar9 = puVar16[2];
        uVar4 = puVar16[4];
        *puVar16 = uVar12;
        puVar16[2] = uVar21;
        puVar16[1] = uVar20;
        puVar16[4] = uVar19;
        puVar16[3] = uVar18;
        puVar16[5] = uVar15;
        puVar16[6] = uVar10;
        _swift_release(uVar4);
        _swift_release(uVar9);
        *unaff_x20 = uVar8;
      }
      uVar11 = uVar14;
    } while (1 < uVar13);
  }
  return;
}



/* Address: 0x1008c779c | FUN_1008c779c */

void FUN_1008c779c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  ushort uVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  undefined *puVar15;
  ulong uVar16;
  undefined *puVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  long unaff_x20;
  code *pcVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined8 local_78 [3];
  
  uVar12 = *(ulong *)(unaff_x20 + 0x40);
  lVar3 = *(long *)(unaff_x20 + 0x48);
  _swift_getObjectType();
  (**(code **)(lVar3 + 0x68))(param_2,param_3,param_4,param_5,uVar12,lVar3);
  puVar13 = &DAT_100feb4d0;
  FUN_1000f7830(&DAT_100feb4d0,&DAT_100c82bd8);
  _swift_allocObject();
  puVar18 = (undefined8 *)(puVar13 + 0x10);
  *(undefined8 *)(puVar13 + 0x18) = 0;
  *puVar18 = 0;
  *(undefined8 *)(puVar13 + 0x28) = 0;
  *(undefined8 *)(puVar13 + 0x20) = 0;
  *(undefined8 *)(puVar13 + 0x30) = 0;
  *(undefined2 *)(puVar13 + 0x38) = 0xff00;
  local_78[0] = 0;
  FUN_1000f7830(&DAT_100feb4b8,&DAT_100c82bc0);
  _swift_allocObject();
  puVar14 = local_78;
  FUN_100671b38();
  puVar15 = &DAT_100f0db58;
  _swift_allocObject(&DAT_100f0db58,0x28,7);
  *(undefined8 **)(puVar15 + 0x10) = puVar14;
  *(undefined **)(puVar15 + 0x18) = puVar13;
  *(long *)(puVar15 + 0x20) = unaff_x20;
  pcVar20 = *(code **)(lVar3 + 0x10);
  _swift_retain_n(puVar14,2);
  _swift_retain_n(puVar13,2);
  _swift_retain_n();
  uVar16 = uVar12;
  (*pcVar20)(uVar12,lVar3);
  if ((uVar16 & 1) == 0) {
    puVar17 = &DAT_100f0db80;
    _swift_allocObject(&DAT_100f0db80,0x28,7);
    *(long *)(puVar17 + 0x10) = unaff_x20;
    *(code **)(puVar17 + 0x18) = FUN_1008c8808;
    *(undefined **)(puVar17 + 0x20) = puVar15;
    pcVar20 = *(code **)(lVar3 + 0x18);
    _swift_retain();
    _swift_retain(puVar15);
    (*pcVar20)(FUN_1008c8814,puVar17,uVar12,lVar3);
    _swift_release(puVar17);
    _swift_release();
    _swift_release(puVar13);
    _swift_release(puVar14);
    _swift_release(puVar15);
  }
  else {
    _swift_beginAccess(unaff_x20 + 0x10,auStack_90,0,0);
    if (*(char *)(unaff_x20 + 0x39) == -1) {
      _swift_beginAccess(unaff_x20 + 0x50,local_78,0x21,0);
      FUN_10064967c(FUN_1008c8808,puVar15);
      _swift_endAccess(local_78);
    }
    else {
      FUN_100671c1c();
      uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
      uVar22 = *(undefined8 *)(unaff_x20 + 0x18);
      uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
      uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
      uVar21 = *(undefined8 *)(unaff_x20 + 0x30);
      uVar9 = *(undefined2 *)(unaff_x20 + 0x38);
      _swift_beginAccess(puVar18,auStack_a8,1,0);
      uVar7 = *(undefined8 *)(puVar13 + 0x10);
      uVar5 = *(undefined8 *)(puVar13 + 0x18);
      uVar8 = *(undefined8 *)(puVar13 + 0x20);
      uVar6 = *(undefined8 *)(puVar13 + 0x28);
      uVar19 = *(undefined8 *)(puVar13 + 0x30);
      *(undefined8 *)(puVar13 + 0x10) = uVar1;
      *(undefined8 *)(puVar13 + 0x18) = uVar22;
      *(undefined8 *)(puVar13 + 0x20) = uVar2;
      *(undefined8 *)(puVar13 + 0x28) = uVar4;
      *(undefined8 *)(puVar13 + 0x30) = uVar21;
      uVar10 = *(undefined2 *)(puVar13 + 0x38);
      *(undefined2 *)(puVar13 + 0x38) = uVar9;
      FUN_1008c8874(uVar1,uVar22,uVar2,uVar4,uVar21);
      FUN_1008c8888(uVar7,uVar5,uVar8,uVar6,uVar19,uVar10);
      local_78[0] = 1;
      FUN_10067215c(local_78);
    }
    FUN_1006486f8(0,0,0);
    FUN_100004550(0,0);
    _swift_release();
    _swift_release(puVar13);
    _swift_release(puVar14);
    _swift_release(puVar15);
    _swift_bridgeObjectRelease(0);
  }
  local_78[0] = 1;
  FUN_100671cfc(local_78);
  FUN_100671c28();
  _swift_beginAccess(puVar18,local_78,0,0);
  uVar11 = *(ushort *)(puVar13 + 0x38);
  if ((char)(uVar11 >> 8) != -1) {
    uVar1 = *(undefined8 *)(puVar13 + 0x10);
    uVar7 = *(undefined8 *)(puVar13 + 0x18);
    uVar2 = *(undefined8 *)(puVar13 + 0x20);
    uVar8 = *(undefined8 *)(puVar13 + 0x28);
    uVar22 = *(undefined8 *)(puVar13 + 0x30);
    if ((uVar11 & 0xff00) == 0x100) {
      _swift_willThrow();
      FUN_1008c8820(uVar1,uVar7,uVar2,uVar8,uVar22,uVar11,1);
      _swift_release(puVar13);
      _swift_release(puVar14);
    }
    else {
      FUN_1008c8874(uVar1,uVar7,uVar2,uVar8,uVar22,uVar11);
      _swift_unknownObjectRetain(uVar1);
      FUN_1006627ac(uVar2,uVar8,uVar22,uVar11);
      _swift_release(puVar13);
      _swift_release(puVar14);
      FUN_1008c8888(uVar1,uVar7,uVar2,uVar8,uVar22,uVar11);
      *param_1 = uVar1;
      param_1[1] = uVar7;
      param_1[2] = uVar2;
      param_1[3] = uVar8;
      param_1[4] = uVar22;
      *(char *)(param_1 + 5) = (char)uVar11;
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar20 = (code *)SoftwareBreakpoint(1,0x1008c7bc8);
  (*pcVar20)();
}



/* Address: 0x1008c7bc8 | FUN_1008c7bc8 */

void FUN_1008c7bc8(void)

{
  FUN_1008c7c30();
  return;
}



/* Address: 0x1008c7bfc | FUN_1008c7bfc */

void FUN_1008c7bfc(void)

{
  FUN_1008c7c30();
  return;
}



/* Address: 0x1008c7c30 | FUN_1008c7c30 */

void FUN_1008c7c30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7,undefined8 param_8)

{
  long lVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long unaff_x20;
  code *pcVar10;
  undefined8 uVar11;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined8 local_78 [3];
  
  uVar4 = *(ulong *)(unaff_x20 + 0x20);
  lVar1 = *(long *)(unaff_x20 + 0x28);
  _swift_getObjectType();
  (**(code **)(lVar1 + 0x68))(param_1,param_2,param_3,param_4,uVar4,lVar1);
  puVar5 = &DAT_100feb4b0;
  FUN_1000f7830(&DAT_100feb4b0,&DAT_100c82bb8);
  _swift_allocObject();
  puVar8 = (undefined8 *)(puVar5 + 0x10);
  *puVar8 = 0;
  puVar5[0x18] = 0xff;
  local_78[0] = 0;
  FUN_1000f7830(&DAT_100feb4b8,&DAT_100c82bc0);
  _swift_allocObject();
  puVar6 = local_78;
  FUN_100671b38();
  _swift_allocObject(param_5,0x28,7);
  *(undefined8 **)(param_5 + 0x10) = puVar6;
  *(undefined **)(param_5 + 0x18) = puVar5;
  *(long *)(param_5 + 0x20) = unaff_x20;
  pcVar10 = *(code **)(lVar1 + 0x10);
  _swift_retain_n(puVar6,2);
  _swift_retain_n(puVar5,2);
  _swift_retain_n();
  uVar7 = uVar4;
  (*pcVar10)(uVar4,lVar1);
  if ((uVar7 & 1) == 0) {
    _swift_allocObject(param_7,0x28,7);
    *(long *)(param_7 + 0x10) = unaff_x20;
    *(undefined8 *)(param_7 + 0x18) = param_6;
    *(long *)(param_7 + 0x20) = param_5;
    pcVar10 = *(code **)(lVar1 + 0x18);
    _swift_retain();
    _swift_retain(param_5);
    (*pcVar10)(param_8,param_7,uVar4,lVar1);
    _swift_release(param_7);
    _swift_release();
    _swift_release(puVar5);
    _swift_release(puVar6);
    _swift_release(param_5);
  }
  else {
    _swift_beginAccess(unaff_x20 + 0x10,auStack_90,0,0);
    if (*(char *)(unaff_x20 + 0x18) == -1) {
      _swift_beginAccess(unaff_x20 + 0x30,local_78,0x21,0);
      FUN_10064967c(param_6,param_5);
      _swift_endAccess(local_78);
    }
    else {
      FUN_100671c1c();
      uVar9 = *(undefined8 *)(unaff_x20 + 0x10);
      uVar2 = *(undefined1 *)(unaff_x20 + 0x18);
      _swift_beginAccess(puVar8,auStack_a8,1,0);
      uVar11 = *(undefined8 *)(puVar5 + 0x10);
      *(undefined8 *)(puVar5 + 0x10) = uVar9;
      uVar3 = puVar5[0x18];
      puVar5[0x18] = uVar2;
      FUN_1005dfeb4(uVar9,uVar2);
      FUN_100308538(uVar11,uVar3);
      local_78[0] = 1;
      FUN_10067215c(local_78);
    }
    FUN_1006486f8(0,0,0);
    FUN_100004550(0,0);
    _swift_release();
    _swift_release(puVar5);
    _swift_release(puVar6);
    _swift_release(param_5);
    _swift_bridgeObjectRelease(0);
  }
  local_78[0] = 1;
  FUN_100671cfc(local_78);
  FUN_100671c28();
  _swift_beginAccess(puVar8,local_78,0,0);
  if (puVar5[0x18] == '\x01') {
    uVar9 = *(undefined8 *)(puVar5 + 0x10);
    _swift_willThrow();
    FUN_100308524(uVar9,1);
    _swift_release(puVar5);
    _swift_release(puVar6);
  }
  else {
    if (puVar5[0x18] == -1) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x1008c7f84);
      (*pcVar10)();
    }
    _swift_release(puVar5);
    _swift_release(puVar6);
  }
  return;
}



/* Address: 0x1008c7f84 | FUN_1008c7f84 */

undefined8 FUN_1008c7f84(undefined8 param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 local_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  FUN_100671c1c();
  _swift_beginAccess(param_3 + 0x10,auStack_78,0,0);
  uVar1 = *(undefined8 *)(param_3 + 0x10);
  uVar5 = *(undefined8 *)(param_3 + 0x18);
  uVar2 = *(undefined8 *)(param_3 + 0x20);
  uVar6 = *(undefined8 *)(param_3 + 0x28);
  uVar12 = *(undefined8 *)(param_3 + 0x30);
  uVar9 = *(undefined2 *)(param_3 + 0x38);
  _swift_beginAccess(param_2 + 0x10,auStack_90,1,0);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  uVar7 = *(undefined8 *)(param_2 + 0x18);
  uVar4 = *(undefined8 *)(param_2 + 0x20);
  uVar8 = *(undefined8 *)(param_2 + 0x28);
  uVar11 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_2 + 0x10) = uVar1;
  *(undefined8 *)(param_2 + 0x18) = uVar5;
  *(undefined8 *)(param_2 + 0x20) = uVar2;
  *(undefined8 *)(param_2 + 0x28) = uVar6;
  *(undefined8 *)(param_2 + 0x30) = uVar12;
  uVar10 = *(undefined2 *)(param_2 + 0x38);
  *(undefined2 *)(param_2 + 0x38) = uVar9;
  FUN_1008c8874(uVar1,uVar5,uVar2,uVar6,uVar12,uVar9);
  FUN_1008c8888(uVar3,uVar7,uVar4,uVar8,uVar11,uVar10);
  local_98 = 1;
  FUN_10067215c(&local_98);
  return 0;
}



/* Address: 0x1008c808c | FUN_1008c808c */

undefined8 FUN_1008c808c(undefined8 param_1,long param_2,long param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_88;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  FUN_100671c1c();
  _swift_beginAccess(param_3 + 0x10,auStack_68,0,0);
  uVar3 = *(undefined8 *)(param_3 + 0x10);
  uVar1 = *(undefined1 *)(param_3 + 0x18);
  _swift_beginAccess(param_2 + 0x10,auStack_80,1,0);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = uVar3;
  uVar2 = *(undefined1 *)(param_2 + 0x18);
  *(undefined1 *)(param_2 + 0x18) = uVar1;
  FUN_1005dfeb4(uVar3,uVar1);
  FUN_100308538(uVar4,uVar2);
  local_88 = 1;
  FUN_10067215c(&local_88);
  return 0;
}



/* Address: 0x1008c8148 | FUN_1008c8148 */

void FUN_1008c8148(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_deallocObject();
  return;
}



/* Address: 0x1008c817c | FUN_1008c817c */

void FUN_1008c817c(void)

{
  long unaff_x20;
  
  FUN_1008c34dc(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                *(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1008c81ac | FUN_1008c81ac */

void FUN_1008c81ac(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  ulong uVar3;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(lVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  (**(code **)(lVar2 + 8))(unaff_x20 + (uVar3 + 0x30 & (uVar3 ^ 0xffffffffffffffff)),lVar1);
  _swift_deallocObject();
  return;
}



/* Address: 0x1008c8210 | FUN_1008c8210 */

void FUN_1008c8210(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long unaff_x20;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined7 local_67;
  undefined1 uStack_60;
  undefined8 uStack_5f;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  FUN_1008c8478();
  FUN_1006628e0(&local_80,uVar3,unaff_x20 + (uVar4 + 0x30 & (uVar4 ^ 0xffffffffffffffff)),param_2,
                lVar1,&PTR_PTR_100f0d740,uVar2);
  param_1[1] = uStack_78;
  *param_1 = local_80;
  param_1[3] = CONCAT71(local_67,uStack_68);
  param_1[2] = uStack_70;
  *(undefined8 *)((long)param_1 + 0x21) = uStack_5f;
  *(ulong *)((long)param_1 + 0x19) = CONCAT17(uStack_60,local_67);
  return;
}



/* Address: 0x1008c82a8 | FUN_1008c82a8 */

void FUN_1008c82a8(void)

{
  long unaff_x20;
  
  FUN_1008bf7dc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1008c82b4 | FUN_1008c82b4 */

void FUN_1008c82b4(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1008c4e34(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1008c82bc | FUN_1008c82bc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1008c82bc(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x1008c82f0 | FUN_1008c82f0 */

void FUN_1008c82f0(void)

{
  long unaff_x20;
  
  FUN_1008c5cf0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x1008c82fc | FUN_1008c82fc */

void FUN_1008c82fc(void)

{
  FUN_1008c6184();
  return;
}



/* Address: 0x1008c8304 | FUN_1008c8304 */

void FUN_1008c8304(void)

{
  long unaff_x20;
  
  FUN_1008c36b0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1008c8310 | FUN_1008c8310 */

void FUN_1008c8310(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1008c38fc(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1008c8318 | FUN_1008c8318 */

void FUN_1008c8318(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  Result RVar2;
  undefined7 extraout_var;
  long *unaff_x20;
  long lVar3;
  
  puVar1 = (undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x60));
  *puVar1 = param_1;
  puVar1[1] = param_2;
  lVar3 = *(long *)(*unaff_x20 + 0x58);
  FUN_1000f8b08(&DAT_100feb0c8,&DAT_100c82c50);
  RVar2 = Swift::Result::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,RVar2.value) + -8) + 0x38))
            ((long)unaff_x20 + lVar3,1,1,CONCAT71(extraout_var,RVar2.value));
  puVar1 = (undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x68));
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  return;
}



/* Address: 0x1008c83b4 | FUN_1008c83b4 */

void FUN_1008c83b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1006529e0(0,param_3);
  _swift_allocObject();
  FUN_1008c8318(param_1,param_2,uVar1);
  return;
}



/* Address: 0x1008c8400 | FUN_1008c8400 */

undefined8 FUN_1008c8400(void)

{
  undefined8 unaff_x20;
  
  FUN_1008c83b4();
  _swift_unknownObjectRetain();
  return unaff_x20;
}



/* Address: 0x1008c843c | FUN_1008c843c */

void FUN_1008c843c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100feb2d0;
  FUN_1003b6598(&DAT_100feb2d0,param_2,FUN_1008c8478,&TargetProtocolConformanceDescriptor_100c829c4)
  ;
  *(undefined **)(param_1 + 0x10) = puVar1;
  return;
}



/* Address: 0x1008c8478 | FUN_1008c8478 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1008c8478(void)

{
  return ZEXT816(0x100feb320);
}



/* Address: 0x1008c8498 | FUN_1008c8498 */

void FUN_1008c8498(undefined8 param_1,undefined8 param_2)

{
  FUN_1003b6598(&DAT_100feb2d8,param_2,FUN_1008c8478,&TargetProtocolConformanceDescriptor_100c82a24)
  ;
  return;
}



/* Address: 0x1008c84c4 | FUN_1008c84c4 */

void FUN_1008c84c4(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Address: 0x1008c84d0 | FUN_1008c84d0 */

undefined1  [16] FUN_1008c84d0(void)

{
  return ZEXT816(0x100f0d8e0);
}



/* Address: 0x1008c84e0 | FUN_1008c84e0 */

void FUN_1008c84e0(void)

{
  FUN_100134584(&DAT_100feb480,&DAT_100feb488,&DAT_100c82af0,
                &TargetProtocolConformanceDescriptor_100c6e490);
  return;
}



/* Address: 0x1008c8514 | thunk_FUN_1008c8518 */

void thunk_FUN_1008c8518(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100feb4a8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c82b8c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c82b8c,&DAT_100f0d8e0);
  DAT_100feb4a8 = pTVar1;
  return;
}



/* Address: 0x1008c8518 | FUN_1008c8518 */

void FUN_1008c8518(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100feb4a8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c82b8c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c82b8c,&DAT_100f0d8e0);
  DAT_100feb4a8 = pTVar1;
  return;
}


