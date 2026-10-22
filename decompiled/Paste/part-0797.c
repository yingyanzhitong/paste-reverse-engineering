/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1008c2884 | FUN_1008c2884 */

void FUN_1008c2884(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  long *plVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  long unaff_x20;
  long *plVar9;
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined8 local_d8;
  undefined1 auStack_d0 [8];
  code *local_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  long lStack_a8;
  undefined1 auStack_98 [8];
  long local_90;
  undefined8 local_88;
  code *local_80;
  undefined8 uStack_78;
  
  _swift_beginAccess(unaff_x20 + 0x20,auStack_f0,0,0);
  local_d8 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar9 = *(long **)(unaff_x20 + 0x10);
  _swift_bridgeObjectRetain();
  plVar5 = (long *)0x0;
  FUN_1008d0824(auStack_d0);
  pcVar4 = local_c8;
  uVar1 = local_c0;
  uVar2 = local_b0;
  lVar3 = lStack_a8;
  while( true ) {
    if (pcVar4 == (code *)0x0) {
      _swift_beginAccess(unaff_x20 + 0x20,auStack_108,0x21,0);
      FUN_1008d0824(auStack_98,0);
      puVar6 = auStack_108;
      _swift_endAccess();
      if (local_90 != 0) {
        FUN_1008c8678();
        do {
          uVar2 = uStack_78;
          pcVar4 = local_80;
          uVar1 = local_88;
          puVar7 = &DAT_100eef640;
          puVar8 = puVar6;
          _swift_allocError(&DAT_100eef640,puVar6,0,0);
          *puVar8 = 2;
          (*pcVar4)();
          _swift_errorRelease(puVar7);
          _swift_release(uVar2);
          _swift_release(uVar1);
          _swift_beginAccess(unaff_x20 + 0x20,auStack_108,0x21,0);
          FUN_1008d0824(auStack_98,0);
          _swift_endAccess(auStack_108);
        } while (local_90 != 0);
      }
      _swift_bridgeObjectRelease(local_d8);
      return;
    }
    if (lVar3 < 0) break;
    local_c8 = pcVar4;
    local_c0 = uVar1;
    local_b0 = uVar2;
    lStack_a8 = lVar3;
    (**(code **)(*plVar9 + 0x88))();
    *plVar5 = lVar3;
    (*pcVar4)();
    _swift_release(uVar2);
    _swift_release(uVar1);
    plVar5 = (long *)0x0;
    FUN_1008d0824(auStack_d0);
    pcVar4 = local_c8;
    uVar1 = local_c0;
    uVar2 = local_b0;
    lVar3 = lStack_a8;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1008c2a20);
  (*pcVar4)();
}



/* Address: 0x1008c2a20 | FUN_1008c2a20 */

void FUN_1008c2a20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = param_4;
  *(undefined8 *)(unaff_x22 + 0x60) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x48) = param_2;
  *(undefined8 *)(unaff_x22 + 0x50) = param_3;
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
  _swift_task_switch(FUN_1008c2a40,0,0);
  return;
}



/* Address: 0x1008c2a40 | FUN_1008c2a40 */

void FUN_1008c2a40(void)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x60);
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x58);
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x50);
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x48);
  plVar1 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x68) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1008c2ae4;
  FUN_1008c2e80(*(undefined8 *)(unaff_x22 + 0x40),0,0,0xd000000000000014,0x8000000100db44c0,
                FUN_1008c5838,unaff_x22 + 0x10,*(undefined8 *)(unaff_x22 + 0x58));
  return;
}



/* Address: 0x1008c2ae4 | FUN_1008c2ae4 */

void FUN_1008c2ae4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x0001008c2b24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Address: 0x1008c2b28 | FUN_1008c2b28 */

void FUN_1008c2b28(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = unaff_x20;
  _swift_task_switch(FUN_1008c2b40,0,0);
  return;
}



/* Address: 0x1008c2b40 | FUN_1008c2b40 */

void FUN_1008c2b40(ulong *param_1)

{
  long *plVar1;
  ulong uVar2;
  long unaff_x22;
  
  (**(code **)(**(long **)(*(long *)(unaff_x22 + 0x10) + 0x10) + 0x88))();
  uVar2 = *param_1;
  if (0x7ffffffffffffffe < uVar2) {
    uVar2 = 0x7fffffffffffffff;
  }
  plVar1 = (long *)0x90;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005cd444;
  FUN_1008c4b54(uVar2);
  return;
}



/* Address: 0x1008c2bb8 | FUN_1008c2bb8 */

void FUN_1008c2bb8(undefined8 param_1,undefined8 param_2)

{
  DispatchWorkItemFlags DVar1;
  DispatchQoS DVar2;
  ulong *puVar3;
  void *aBlock;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  DispatchQoS unaff_x20;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_b0 [8];
  undefined *local_a8;
  undefined8 local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  DVar1 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  lVar11 = *(long *)(DVar1.unknown + -8);
  puVar9 = auStack_b0 + -(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  DVar2 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar10 = *(long *)(DVar2.unknown + -8);
  lVar7 = *(long *)(lVar10 + 0x40);
  FUN_1008c1058(0);
  if (DAT_100feb2b0 != -1) {
    _swift_once(&DAT_100feb2b0,FUN_1008c3000);
  }
  puVar3 = DAT_100feb2b8;
  (extension_Dispatch)::__C::OS_dispatch_queue::_getSpecific();
  if ((local_90 == (undefined *)0x0) || (unaff_x20.unknown != local_90)) {
    local_a0 = *(undefined8 *)(unaff_x20.unknown + 0x38);
    puVar6 = &DAT_100f0d570;
    _swift_allocObject(&DAT_100f0d570,0x28,7);
    *(undefined **)(puVar6 + 0x10) = unaff_x20.unknown;
    *(undefined8 *)(puVar6 + 0x18) = param_1;
    *(undefined8 *)(puVar6 + 0x20) = param_2;
    local_70 = FUN_1008c5848;
    local_90 = PTR___NSConcreteStackBlock_100ea82a0;
    local_88 = 0x42000000;
    local_80 = FUN_100030410;
    puStack_78 = &DAT_100f0d588;
    local_68 = puVar6;
    aBlock = __Block_copy(&local_90);
    _swift_retain(param_2);
    _swift_retain();
    Dispatch::DispatchQoS::get_unspecified(unaff_x20);
    local_98 = PTR___swiftEmptyArrayStorage_100eae0d8;
    puVar6 = &DAT_100feb250;
    FUN_1003b6598(&DAT_100feb250,0xff,PTR_typeMetadataAccessor_100eae670,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_100eae680);
    puVar4 = &DAT_100feb258;
    FUN_1000f7830(&DAT_100feb258,&DAT_100c828c0);
    puVar5 = &DAT_100feb260;
    local_a8 = DVar2.unknown;
    FUN_100134584(&DAT_100feb260,&DAT_100feb258,&DAT_100c828c0,
                  PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530);
    Swift::SetAlgebra::_init(puVar9,&local_98,puVar4,puVar5,DVar1.unknown,puVar6);
    (extension_Dispatch)::__C::OS_dispatch_queue::_async
              ((DispatchQoS)0x0,
               (DispatchWorkItemFlags)(puVar9 + -(lVar7 + 0xfU & 0xfffffffffffffff0)));
    __Block_release(aBlock);
    (**(code **)(lVar11 + 8))(puVar9,DVar1.unknown);
    (**(code **)(lVar10 + 8))(puVar9 + -(lVar7 + 0xfU & 0xfffffffffffffff0),local_a8);
    puVar4 = local_68;
  }
  else {
    (**(code **)(**(long **)(unaff_x20.unknown + 0x10) + 0x88))();
    uVar8 = *puVar3;
    if (0x7ffffffffffffffe < uVar8) {
      uVar8 = 0x7fffffffffffffff;
    }
    puVar6 = &DAT_100f0d5c0;
    _swift_allocObject(&DAT_100f0d5c0,0x20,7);
    *(undefined8 *)(puVar6 + 0x10) = param_1;
    *(undefined8 *)(puVar6 + 0x18) = param_2;
    _swift_retain(param_2);
    puVar4 = puVar6;
    FUN_1008c3a00(uVar8,FUN_1006226e4,puVar6);
    _swift_release(puVar6);
    _swift_release(uVar8);
  }
  _swift_release(puVar4);
  return;
}



/* Address: 0x1008c2e80 | FUN_1008c2e80 */

void FUN_1008c2e80(char *param_1,void *param_2,undefined8 param_3,undefined8 param_4,
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
    plVar2[1] = (long)FUN_1005cd444;
    isolation.bridgeObject = param_2;
    isolation.str = param_1;
    Swift::_withCheckedThrowingContinuation(isolation);
    return;
  }
  plVar2 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1005c804c;
  FUN_1008c71f8(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



/* Address: 0x1008c2fc8 | FUN_1008c2fc8 */

ulong FUN_1008c2fc8(ulong *param_1)

{
  ulong uVar1;
  long unaff_x20;
  
  (**(code **)(**(long **)(unaff_x20 + 0x10) + 0x88))();
  uVar1 = *param_1;
  if (0x7ffffffffffffffe < uVar1) {
    uVar1 = 0x7fffffffffffffff;
  }
  return uVar1;
}



/* Address: 0x1008c3000 | FUN_1008c3000 */

void FUN_1008c3000(void)

{
  DispatchSpecificKey *this;
  
  this = (DispatchSpecificKey *)&DAT_100feb4d8;
  FUN_1000f7830(&DAT_100feb4d8,&DAT_100c82bf0);
  _swift_allocObject();
  Dispatch::DispatchSpecificKey::_init(this);
  DAT_100feb2b8 = this;
  return;
}



/* Address: 0x1008c3048 | FUN_1008c3048 */

bool FUN_1008c3048(void)

{
  long unaff_x20;
  long local_28;
  
  FUN_1008c1058(0);
  if (DAT_100feb2b0 != -1) {
    _swift_once(&DAT_100feb2b0,FUN_1008c3000);
  }
  (extension_Dispatch)::__C::OS_dispatch_queue::_getSpecific();
  return local_28 != 0 && unaff_x20 == local_28;
}



/* Address: 0x1008c30c0 | FUN_1008c30c0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1008c30c0(void)

{
  code *pcVar1;
  AutoreleaseFrequency AVar2;
  int iVar3;
  undefined7 extraout_var;
  Attributes AVar4;
  DispatchQoS DVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  OS_dispatch_queue *pOVar10;
  long lVar11;
  long lVar12;
  long unaff_x20;
  long lVar13;
  long lVar14;
  Attributes attributes;
  String label;
  long local_90;
  char *local_88;
  OS_dispatch_queue *pOStack_80;
  
  lVar11 = *(long *)PTR____stack_chk_guard_100ea82f0;
  AVar2 = (extension_Dispatch)::__C::OS_dispatch_queue::AutoreleaseFrequency::typeMetadataAccessor()
  ;
  lVar13 = *(long *)(CONCAT71(extraout_var,AVar2.value) + -8);
  lVar14 = (long)&local_90 - (*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  AVar4 = Attributes::_typeMetadataAccessor();
  attributes.unknown =
       (undefined *)
       (lVar14 - (*(long *)(*(long *)(AVar4.unknown + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  DVar5 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar12 = *(long *)(*(long *)(DVar5.unknown + -8) + 0x40);
  puVar6 = &DAT_100feb120;
  FUN_1000f7830(&DAT_100feb120,&DAT_100c826f0);
  puVar7 = puVar6;
  _swift_allocObject();
  *(undefined8 *)(puVar7 + 0x10) = 0;
  *(undefined **)(unaff_x20 + 0x10) = puVar7;
  _swift_allocObject(puVar6,0x18,7);
  *(undefined8 *)(puVar6 + 0x10) = 0;
  puVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
  *(undefined **)(unaff_x20 + 0x18) = puVar6;
  *(undefined **)(unaff_x20 + 0x20) = puVar7;
  lVar8 = 0;
  FUN_1008c5870();
  _swift_allocObject();
  puVar6 = &DAT_100feb128;
  FUN_1000f7830(&DAT_100feb128,&DAT_100c82940);
  _swift_allocObject();
  _pthread_mutexattr_init((pthread_mutexattr_t *)&stack0xffffffffffffff88);
  iVar3 = _pthread_mutex_init((pthread_mutex_t *)(puVar6 + 0x10),
                              (pthread_mutexattr_t *)&stack0xffffffffffffff88);
  if (iVar3 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008c33b4);
    (*pcVar1)();
  }
  *(undefined **)(lVar8 + 0x10) = puVar6;
  FUN_1008c0aa8();
  *(undefined **)(lVar8 + 0x18) = puVar7;
  *(long *)(unaff_x20 + 0x28) = lVar8;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  DVar5.unknown = (undefined *)0x0;
  FUN_1008c1058();
  local_88 = "waitForInboundWrite(as:)";
  local_90 = CONCAT71(extraout_var,AVar2.value);
  pOStack_80 = (OS_dispatch_queue *)DVar5.unknown;
  Dispatch::DispatchQoS::get_unspecified(DVar5);
  puVar6 = &DAT_100feb130;
  FUN_1003b6598(&DAT_100feb130,0xff,PTR__typeMetadataAccessor_100eae788,
                PTR__Dispatch__Attributes_>Swift__SetAlgebra_100eae798);
  puVar7 = &DAT_100feb138;
  FUN_1000f7830(&DAT_100feb138,&DAT_100c82700);
  puVar9 = &DAT_100feb140;
  FUN_100134584(&DAT_100feb140,&DAT_100feb138,&DAT_100c82700,
                PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530);
  Swift::SetAlgebra::_init
            (attributes.unknown,&stack0xffffffffffffff88,puVar7,puVar9,AVar4.unknown,puVar6);
  (**(code **)(lVar13 + 0x68))
            (lVar14,*(undefined4 *)
                     PTR___enum_case_for__extension_in_Dispatch____C_OS_dispatch_queue_AutoreleaseFrequency_inherit__extension_in_Dispatch____C_OS_dispatch_queue_AutoreleaseFrequency_Type___>__extension_in_Dispatch____C_OS_dispatch_queue_AutoreleaseFrequency_100eae7d0
             ,local_90);
  label.bridgeObject = (void *)((ulong)local_88 | 0x8000000000000000);
  label.str = (char *)0xd000000000000022;
  pOVar10 = (extension_Dispatch)::__C::OS_dispatch_queue::___allocating_init
                      (pOStack_80,label,
                       (DispatchQoS)(attributes.unknown + -(lVar12 + 0xfU & 0xfffffffffffffff0)),
                       attributes,(AutoreleaseFrequency)(__int8)lVar14);
  *(OS_dispatch_queue **)(unaff_x20 + 0x38) = pOVar10;
  puVar6 = &DAT_100feb148;
  FUN_1000f7830(&DAT_100feb148,&DAT_100c82950);
  _swift_allocObject();
  *(undefined8 *)(puVar6 + 0x10) = 0;
  *(undefined **)(unaff_x20 + 0x40) = puVar6;
  if (DAT_100feb2b0 != -1) {
    _swift_once(&DAT_100feb2b0,FUN_1008c3000);
  }
  (extension_Dispatch)::__C::OS_dispatch_queue::_setSpecific();
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar11) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}



/* Address: 0x1008c33d0 | FUN_1008c33d0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1008c33d0(long param_1)

{
  code *pcVar1;
  DispatchPredicate DVar2;
  bool bVar3;
  undefined7 extraout_var;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 *puVar6;
  long lVar7;
  undefined8 auStack_90 [3];
  undefined1 auStack_78 [56];
  
  DVar2 = Dispatch::DispatchPredicate::typeMetadataAccessor();
  lVar4 = CONCAT71(extraout_var,DVar2.value);
  lVar7 = *(long *)(lVar4 + -8);
  puVar6 = (undefined8 *)((long)auStack_90 - (*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0));
  *puVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  (**(code **)(lVar7 + 0x68))
            (puVar6,*(undefined4 *)
                     PTR___enum_case_for_Dispatch_DispatchPredicate_onQueue_Dispatch_DispatchPredicate_Type___>____C_OS_dispatch_queue___>_Dispatch_DispatchPredicate_100eae750
             ,lVar4);
  bVar3 = Dispatch::_dispatchPreconditionTest((DispatchPredicate)(__int8)puVar6);
  (**(code **)(lVar7 + 8))(puVar6,lVar4);
  if (!bVar3) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008c34dc);
    (*pcVar1)();
  }
  _swift_beginAccess(unaff_x20 + 0x20,auStack_90,0x21,0);
  lVar4 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0x10);
  if (lVar4 != 0) {
    lVar7 = 0;
    plVar5 = (long *)(*(long *)(unaff_x20 + 0x20) + 0x20);
    do {
      if (*plVar5 == param_1) {
        FUN_1008d0824(auStack_78);
        FUN_1008c86e8(auStack_78);
        break;
      }
      lVar7 = lVar7 + 1;
      plVar5 = plVar5 + 7;
    } while (lVar4 != lVar7);
  }
  _swift_endAccess(auStack_90);
  return;
}



/* Address: 0x1008c34dc | FUN_1008c34dc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1008c34dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined4 uVar1;
  DispatchPredicate DVar2;
  bool bVar3;
  undefined7 extraout_var;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  code *pcVar7;
  long unaff_x20;
  undefined8 uVar8;
  long lVar9;
  code *pcVar10;
  undefined8 *puVar11;
  undefined8 local_d0 [4];
  undefined1 auStack_b0 [24];
  undefined8 local_98;
  code *pcStack_90;
  undefined *local_88;
  code *pcStack_80;
  undefined *local_78;
  undefined8 uStack_70;
  long local_68;
  
  local_d0[0] = param_4;
  local_d0[1] = param_1;
  local_d0[2] = param_2;
  local_d0[3] = param_5;
  DVar2 = Dispatch::DispatchPredicate::typeMetadataAccessor();
  lVar9 = CONCAT71(extraout_var,DVar2.value);
  lVar6 = *(long *)(lVar9 + -8);
  puVar11 = (undefined8 *)((long)local_d0 - (*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0));
  uVar8 = *(undefined8 *)(unaff_x20 + 0x38);
  *puVar11 = uVar8;
  uVar1 = *(undefined4 *)
           PTR___enum_case_for_Dispatch_DispatchPredicate_onQueue_Dispatch_DispatchPredicate_Type___>____C_OS_dispatch_queue___>_Dispatch_DispatchPredicate_100eae750
  ;
  pcVar10 = *(code **)(lVar6 + 0x68);
  (*pcVar10)(puVar11,uVar1,lVar9);
  bVar3 = Dispatch::_dispatchPreconditionTest((DispatchPredicate)(__int8)puVar11);
  pcVar7 = *(code **)(lVar6 + 8);
  (*pcVar7)(puVar11,lVar9);
  if (!bVar3) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x1008c36a8);
    (*pcVar7)();
  }
  *puVar11 = uVar8;
  (*pcVar10)(puVar11,uVar1,lVar9);
  bVar3 = Dispatch::_dispatchPreconditionTest((DispatchPredicate)(__int8)puVar11);
  (*pcVar7)(puVar11,lVar9);
  if (bVar3) {
    lVar9 = *(long *)(unaff_x20 + 0x30);
    if (lVar9 != -1) {
      *(long *)(unaff_x20 + 0x30) = lVar9 + 1;
      puVar4 = &DAT_100f0dba8;
      _swift_allocObject(&DAT_100f0dba8,0x30,7);
      uVar8 = local_d0[3];
      *(undefined8 *)(puVar4 + 0x10) = param_6;
      *(undefined8 *)(puVar4 + 0x18) = local_d0[0];
      *(undefined8 *)(puVar4 + 0x20) = local_d0[3];
      *(undefined8 *)(puVar4 + 0x28) = param_3;
      puVar5 = &DAT_100f0dbd0;
      _swift_allocObject(&DAT_100f0dbd0,0x20,7);
      *(undefined8 *)(puVar5 + 0x10) = param_6;
      *(undefined8 *)(puVar5 + 0x18) = param_3;
      local_98 = local_d0[1];
      pcStack_90 = FUN_1008c891c;
      pcStack_80 = FUN_1008c8928;
      uStack_70 = local_d0[2];
      local_88 = puVar4;
      local_78 = puVar5;
      local_68 = lVar9;
      _swift_beginAccess(unaff_x20 + 0x20,auStack_b0,0x21,0);
      _swift_retain_n(param_3,2);
      _swift_retain(uVar8);
      FUN_1008c75a8(&local_98);
      _swift_endAccess(auStack_b0);
      _swift_release(puVar5);
      _swift_release(puVar4);
      return;
    }
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x1008c36b0);
    (*pcVar7)();
  }
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x1008c36ac);
  (*pcVar7)();
}



/* Address: 0x1008c36b0 | FUN_1008c36b0 */

/* WARNING: Removing unreachable block (ram,0x0001008c36e0) */
/* WARNING: Removing unreachable block (ram,0x0001008c378c) */
/* WARNING: Removing unreachable block (ram,0x0001008c36e4) */
/* WARNING: Removing unreachable block (ram,0x0001008c37ac) */
/* WARNING: Removing unreachable block (ram,0x0001008c3704) */

void FUN_1008c36b0(code *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = param_3;
  (*param_1)();
  if (param_3 != 0) {
    uVar1 = 0;
    uVar2 = 0;
    FUN_1008d06a0(0,0);
    FUN_1006486f8();
    FUN_100004550(uVar1,uVar2);
    _swift_bridgeObjectRelease(lVar3);
    return;
  }
  return;
}



/* Address: 0x1008c3838 | FUN_1008c3838 */

/* WARNING: Removing unreachable block (ram,0x0001008c3888) */
/* WARNING: Removing unreachable block (ram,0x0001008c388c) */
/* WARNING: Removing unreachable block (ram,0x0001008c389c) */

void FUN_1008c3838(code *param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined1 *puVar1;
  long lVar2;
  undefined1 auStack_50 [16];
  
  lVar2 = *(long *)(param_4 + -8);
  puVar1 = auStack_50 + -(*(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (*param_1)(puVar1);
  if (param_3 != 0) {
    _swift_retain(param_3,param_4);
    FUN_100643020(puVar1,param_3,param_4);
    _swift_release(param_3);
  }
  (**(code **)(lVar2 + 8))(puVar1,param_4);
  return;
}



/* Address: 0x1008c38fc | FUN_1008c38fc */

void FUN_1008c38fc(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  code *pcVar6;
  
  if (param_2 == 0) {
    return;
  }
  uVar2 = *(ulong *)(param_2 + 0x20);
  lVar1 = *(long *)(param_2 + 0x28);
  _swift_getObjectType();
  uVar3 = uVar2;
  lVar5 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  if ((uVar3 & 1) != 0) {
    thunk_FUN_1005de8f4(param_1);
    FUN_1006486f8();
    FUN_100004550(param_1,lVar5);
    _swift_bridgeObjectRelease(param_3);
    return;
  }
  puVar4 = &DAT_100f0da18;
  _swift_allocObject(&DAT_100f0da18,0x20,7);
  *(long *)(puVar4 + 0x10) = param_2;
  *(undefined8 *)(puVar4 + 0x18) = param_1;
  pcVar6 = *(code **)(lVar1 + 0x18);
  _swift_retain(param_2);
  _swift_errorRetain(param_1);
  (*pcVar6)(FUN_1008c22e0,puVar4,uVar2,lVar1);
  _swift_release(puVar4);
  return;
}



/* Address: 0x1008c3a00 | FUN_1008c3a00 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_1008c3a00(code *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  DispatchPredicate DVar3;
  bool bVar4;
  DispatchWorkItemFlags DVar5;
  undefined7 extraout_var;
  void *aBlock;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  DispatchQoS unaff_x20;
  undefined8 uVar11;
  ulong uVar12;
  DispatchWorkItemFlags qos;
  long lVar13;
  undefined8 *puVar14;
  code *pcVar15;
  long lVar16;
  code *pcVar17;
  undefined *apuStack_140 [4];
  undefined8 local_120;
  undefined8 local_118;
  undefined *local_110;
  long local_108;
  undefined8 local_100;
  code *local_f8;
  undefined8 local_f0;
  undefined *local_e8 [3];
  undefined *local_d0;
  undefined8 uStack_c8;
  undefined *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  char local_a8;
  undefined *local_a0;
  code *local_98;
  code *local_90;
  code *pcStack_88;
  code *local_80;
  code *local_78;
  ulong local_70;
  long lVar6;
  
  local_100 = param_2;
  local_f8 = param_1;
  local_f0 = param_3;
  DVar5 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_108 = *(long *)(DVar5.unknown + -8);
  lVar16 = (long)apuStack_140 - (*(long *)(local_108 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_110 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar13 = *(long *)(local_110 + -8);
  qos.unknown = (undefined *)(lVar16 - (*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0));
  DVar3 = Dispatch::DispatchPredicate::typeMetadataAccessor();
  lVar6 = CONCAT71(extraout_var,DVar3.value);
  lVar10 = *(long *)(lVar6 + -8);
  puVar14 = (undefined8 *)(qos.unknown + -(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0));
  FUN_1008c4158(&local_d0);
  if (local_a8 != '\x01') {
    local_118 = uStack_c8;
    apuStack_140[2] = local_c0;
    local_120 = local_b8;
    apuStack_140[3] = (undefined *)uStack_b0;
    FUN_1008c1058(0);
    if (DAT_100feb2b0 != -1) {
      _swift_once(&DAT_100feb2b0,FUN_1008c3000);
    }
    (extension_Dispatch)::__C::OS_dispatch_queue::_getSpecific();
    if ((local_a0 == (undefined *)0x0) || (unaff_x20.unknown != local_a0)) {
      apuStack_140[1] = *(undefined **)(unaff_x20.unknown + 0x38);
      pcVar15 = (code *)&DAT_100f0dc70;
      _swift_allocObject(&DAT_100f0dc70,0x40,7);
      uVar2 = local_f0;
      uVar11 = local_118;
      *(undefined **)(pcVar15 + 0x10) = unaff_x20.unknown;
      *(undefined **)(pcVar15 + 0x18) = local_d0;
      *(code **)(pcVar15 + 0x20) = local_f8;
      *(undefined8 *)(pcVar15 + 0x28) = local_118;
      *(undefined8 *)(pcVar15 + 0x30) = local_100;
      *(undefined8 *)(pcVar15 + 0x38) = local_f0;
      local_80 = FUN_1008c89c0;
      local_a0 = PTR___NSConcreteStackBlock_100ea82a0;
      local_98 = (code *)0x42000000;
      local_90 = FUN_100030410;
      pcStack_88 = (code *)&DAT_100f0dc88;
      local_78 = pcVar15;
      aBlock = __Block_copy(&local_a0);
      _swift_retain(uVar11);
      _swift_retain(uVar2);
      _swift_retain();
      Dispatch::DispatchQoS::get_unspecified(unaff_x20);
      local_e8[0] = PTR___swiftEmptyArrayStorage_100eae0d8;
      puVar7 = &DAT_100feb250;
      FUN_1003b6598(&DAT_100feb250,0xff,PTR_typeMetadataAccessor_100eae670,
                    PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_100eae680);
      puVar8 = &DAT_100feb258;
      FUN_1000f7830(&DAT_100feb258,&DAT_100c828c0);
      puVar9 = &DAT_100feb260;
      FUN_100134584(&DAT_100feb260,&DAT_100feb258,&DAT_100c828c0,
                    PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530);
      Swift::SetAlgebra::_init(lVar16,local_e8,puVar8,puVar9,DVar5.unknown,puVar7);
      (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
      __Block_release(aBlock);
      _swift_release(uVar11);
      (**(code **)(local_108 + 8))(lVar16,DVar5.unknown);
      (**(code **)(lVar13 + 8))(qos.unknown,local_110);
      pcVar15 = local_78;
    }
    else {
      uVar11 = *(undefined8 *)(unaff_x20.unknown + 0x38);
      *puVar14 = uVar11;
      uVar1 = *(undefined4 *)
               PTR___enum_case_for_Dispatch_DispatchPredicate_onQueue_Dispatch_DispatchPredicate_Type___>____C_OS_dispatch_queue___>_Dispatch_DispatchPredicate_100eae750
      ;
      pcVar15 = *(code **)(lVar10 + 0x68);
      (*pcVar15)(puVar14,uVar1,lVar6);
      _swift_retain(local_118);
      bVar4 = Dispatch::_dispatchPreconditionTest((DispatchPredicate)(__int8)puVar14);
      pcVar17 = *(code **)(lVar10 + 8);
      (*pcVar17)(puVar14,lVar6);
      if (!bVar4) {
                    /* WARNING: Does not return */
        pcVar15 = (code *)SoftwareBreakpoint(1,0x1008c3e6c);
        (*pcVar15)();
      }
      *puVar14 = uVar11;
      (*pcVar15)(puVar14,uVar1,lVar6);
      bVar4 = Dispatch::_dispatchPreconditionTest((DispatchPredicate)(__int8)puVar14);
      (*pcVar17)(puVar14,lVar6);
      if (!bVar4) {
                    /* WARNING: Does not return */
        pcVar15 = (code *)SoftwareBreakpoint(1,0x1008c3e70);
        (*pcVar15)();
      }
      uVar12 = *(ulong *)(unaff_x20.unknown + 0x30);
      if (0xfffffffffffffffe < uVar12) {
                    /* WARNING: Does not return */
        pcVar15 = (code *)SoftwareBreakpoint(1,0x1008c3e74);
        (*pcVar15)();
      }
      *(ulong *)(unaff_x20.unknown + 0x30) = uVar12 + 1;
      pcVar15 = (code *)&DAT_100f0dcc0;
      _swift_allocObject(&DAT_100f0dcc0,0x28,7);
      uVar2 = local_f0;
      uVar11 = local_118;
      *(undefined8 *)(pcVar15 + 0x10) = local_100;
      *(undefined8 *)(pcVar15 + 0x18) = local_f0;
      *(undefined8 *)(pcVar15 + 0x20) = local_118;
      pcVar17 = (code *)&DAT_100f0dce8;
      _swift_allocObject(&DAT_100f0dce8,0x18,7);
      *(undefined8 *)(pcVar17 + 0x10) = uVar11;
      local_a0 = local_d0;
      local_98 = thunk_FUN_1008c8304;
      pcStack_88 = thunk_FUN_1008c8310;
      local_78 = local_f8;
      local_90 = pcVar15;
      local_80 = pcVar17;
      local_70 = uVar12;
      _swift_beginAccess(unaff_x20.unknown + 0x20,local_e8,0x21,0);
      _swift_retain_n(uVar11,2);
      _swift_retain(uVar2);
      FUN_1008c75a8(&local_a0);
      _swift_endAccess(local_e8);
      _swift_release_n(uVar11,2);
      _swift_release(pcVar17);
    }
    _swift_release(pcVar15);
    local_d0 = apuStack_140[2];
  }
  return local_d0;
}



/* Address: 0x1008c3e74 | FUN_1008c3e74 */

undefined8
FUN_1008c3e74(undefined8 param_1,undefined8 param_2,DispatchQoS param_3,undefined8 param_4)

{
  DispatchWorkItemFlags DVar1;
  undefined *puVar2;
  void *aBlock;
  undefined *puVar3;
  undefined *puVar4;
  undefined *unaff_x20;
  long lVar5;
  long lVar6;
  DispatchWorkItemFlags qos;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined *local_f0;
  long local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined *local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  code *local_b8;
  undefined *puStack_b0;
  code *local_a8;
  undefined *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  char local_70;
  
  local_e0 = param_1;
  uStack_d8 = param_2;
  DVar1 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_e8 = *(long *)(DVar1.unknown + -8);
  lVar5 = (long)&local_110 - (*(long *)(local_e8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_f0 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar6 = *(long *)(local_f0 + -8);
  qos.unknown = (undefined *)(lVar5 - (*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0));
  FUN_1008c436c(&local_98,param_4,param_4);
  local_108 = local_98;
  if (local_70 != '\x01') {
    local_f8 = local_80;
    local_108 = local_88;
    uStack_100 = uStack_78;
    FUN_1008c1058(0);
    if (DAT_100feb2b0 != -1) {
      _swift_once(&DAT_100feb2b0,FUN_1008c3000);
    }
    (extension_Dispatch)::__C::OS_dispatch_queue::_getSpecific();
    if ((local_c8 == (undefined *)0x0) || (unaff_x20 != local_c8)) {
      local_110 = *(undefined8 *)(unaff_x20 + 0x38);
      puVar2 = &DAT_100f0d5e8;
      _swift_allocObject(&DAT_100f0d5e8,0x48,7);
      *(undefined8 *)(puVar2 + 0x10) = param_4;
      *(undefined **)(puVar2 + 0x18) = unaff_x20;
      *(undefined8 *)(puVar2 + 0x20) = local_98;
      *(undefined8 *)(puVar2 + 0x28) = local_e0;
      *(undefined8 *)(puVar2 + 0x30) = uStack_90;
      *(undefined8 *)(puVar2 + 0x38) = uStack_d8;
      *(undefined **)(puVar2 + 0x40) = param_3.unknown;
      local_a8 = FUN_1008c817c;
      local_c8 = PTR___NSConcreteStackBlock_100ea82a0;
      local_c0 = 0x42000000;
      local_b8 = FUN_100030410;
      puStack_b0 = &DAT_100f0d600;
      local_a0 = puVar2;
      aBlock = __Block_copy(&local_c8);
      _swift_retain(uStack_90);
      _swift_retain();
      _swift_retain();
      Dispatch::DispatchQoS::get_unspecified(param_3);
      local_d0 = PTR___swiftEmptyArrayStorage_100eae0d8;
      puVar2 = &DAT_100feb250;
      FUN_1003b6598(&DAT_100feb250,0xff,PTR_typeMetadataAccessor_100eae670,
                    PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_100eae680);
      puVar3 = &DAT_100feb258;
      FUN_1000f7830(&DAT_100feb258,&DAT_100c828c0);
      puVar4 = &DAT_100feb260;
      FUN_100134584(&DAT_100feb260,&DAT_100feb258,&DAT_100c828c0,
                    PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530);
      Swift::SetAlgebra::_init(lVar5,&local_d0,puVar3,puVar4,DVar1.unknown,puVar2);
      (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
      __Block_release(aBlock);
      _swift_release(uStack_90);
      (**(code **)(local_e8 + 8))(lVar5,DVar1.unknown);
      (**(code **)(lVar6 + 8))(qos.unknown,local_f0);
      _swift_release(local_a0);
    }
    else {
      _swift_retain(uStack_90);
      FUN_1008c34dc(local_98,local_e0,uStack_90,uStack_d8,param_3.unknown,param_4);
      _swift_release_n(uStack_90,2);
    }
  }
  return local_108;
}



/* Address: 0x1008c4158 | FUN_1008c4158 */

void FUN_1008c4158(undefined8 *param_1)

{
  code *pcVar1;
  code *pcVar2;
  long *plVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  code *pcVar9;
  long *unaff_x20;
  undefined *puVar10;
  code *pcVar11;
  
  pcVar1 = (code *)&DAT_100feb0f8;
  FUN_1000f7830(&DAT_100feb0f8,&DAT_100c82be0);
  _swift_allocObject();
  *(long **)(pcVar1 + 0x20) = unaff_x20;
  *(undefined ***)(pcVar1 + 0x28) = &PTR_PTR_100f0d740;
  *(undefined8 *)(pcVar1 + 0x10) = 0;
  pcVar1[0x18] = (code)0xff;
  *(undefined8 *)(pcVar1 + 0x38) = 0;
  *(undefined8 *)(pcVar1 + 0x40) = 0;
  *(undefined8 *)(pcVar1 + 0x30) = 0;
  pcVar11 = *(code **)(*(long *)unaff_x20[8] + 0x88);
  plVar3 = unaff_x20;
  _swift_retain();
  (*pcVar11)();
  if (*plVar3 - 1U < 2) {
    FUN_1008c8678();
    puVar10 = &DAT_100eef640;
    uVar7 = 0;
    _swift_allocError(&DAT_100eef640,plVar3,0,0);
    *(undefined1 *)plVar3 = 1;
    uVar4 = *(ulong *)(pcVar1 + 0x20);
    lVar6 = *(long *)(pcVar1 + 0x28);
    _swift_getObjectType();
    (**(code **)(lVar6 + 0x10))();
    if ((uVar4 & 1) == 0) {
      uVar7 = *(undefined8 *)(pcVar1 + 0x20);
      lVar6 = *(long *)(pcVar1 + 0x28);
      _swift_getObjectType(uVar7);
      puVar5 = &DAT_100f0dd60;
      _swift_allocObject(&DAT_100f0dd60,0x20,7);
      *(code **)(puVar5 + 0x10) = pcVar1;
      *(undefined **)(puVar5 + 0x18) = puVar10;
      pcVar11 = *(code **)(lVar6 + 0x18);
      _swift_retain(pcVar1);
      _swift_errorRetain(puVar10);
      (*pcVar11)(thunk_FUN_1008c22e0,puVar5,uVar7,lVar6);
      _swift_release(puVar5);
    }
    else {
      puVar5 = puVar10;
      thunk_FUN_1005de8f4(puVar10);
      FUN_1006486f8();
      FUN_100004550(puVar5,lVar6);
      _swift_bridgeObjectRelease(uVar7);
    }
    _swift_errorRelease(puVar10);
    pcVar11 = (code *)0x0;
    puVar10 = (undefined *)0x0;
    uVar8 = 1;
    pcVar9 = (code *)0x0;
    pcVar2 = pcVar1;
    pcVar1 = FUN_100004520;
  }
  else {
    if (*plVar3 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008c436c);
      (*pcVar1)();
    }
    (**(code **)(*(long *)unaff_x20[3] + 0x88))();
    pcVar2 = (code *)*plVar3;
    *plVar3 = (long)(pcVar2 + 1);
    puVar10 = &DAT_100f0dd88;
    _swift_allocObject(&DAT_100f0dd88,0x20,7);
    *(long **)(puVar10 + 0x10) = unaff_x20;
    *(code **)(puVar10 + 0x18) = pcVar2;
    _swift_retain();
    _swift_retain(pcVar1);
    uVar8 = 0;
    pcVar11 = thunk_FUN_1008c893c;
    pcVar9 = pcVar1;
  }
  *param_1 = pcVar2;
  param_1[1] = pcVar1;
  param_1[2] = pcVar9;
  param_1[3] = pcVar11;
  param_1[4] = puVar10;
  *(undefined1 *)(param_1 + 5) = uVar8;
  return;
}



/* Address: 0x1008c436c | FUN_1008c436c */

void FUN_1008c436c(undefined8 *param_1)

{
  code *pcVar1;
  code *pcVar2;
  code *pcVar3;
  code *unaff_x20;
  undefined1 uVar4;
  code *pcVar5;
  code *pcVar6;
  undefined *puVar7;
  
  pcVar1 = unaff_x20;
  FUN_1008c83b4();
  pcVar5 = *(code **)(**(long **)(unaff_x20 + 0x40) + 0x88);
  pcVar6 = unaff_x20;
  _swift_unknownObjectRetain();
  (*pcVar5)();
  if (*(long *)pcVar6 - 1U < 2) {
    FUN_1008c8678();
    puVar7 = &DAT_100eef640;
    _swift_allocError(&DAT_100eef640,pcVar6,0,0);
    uVar4 = 1;
    *pcVar6 = (code)0x1;
    FUN_100646f54();
    _swift_errorRelease(puVar7);
    pcVar3 = FUN_100004520;
    pcVar5 = (code *)0x0;
    FUN_100004520();
    pcVar6 = (code *)0x0;
    puVar7 = (undefined *)0x0;
    pcVar2 = pcVar1;
    pcVar1 = pcVar3;
  }
  else {
    if (*(long *)pcVar6 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008c44d4);
      (*pcVar1)();
    }
    (**(code **)(**(long **)(unaff_x20 + 0x18) + 0x88))();
    pcVar2 = *(code **)pcVar6;
    *(code **)pcVar6 = pcVar2 + 1;
    puVar7 = &DAT_100f0dbf8;
    _swift_allocObject(&DAT_100f0dbf8,0x20,7);
    *(code **)(puVar7 + 0x10) = unaff_x20;
    *(code **)(puVar7 + 0x18) = pcVar2;
    pcVar6 = FUN_1008c893c;
    pcVar5 = pcVar1;
    FUN_100004520();
    _swift_retain(pcVar1);
    _swift_retain();
    uVar4 = 0;
  }
  *param_1 = pcVar2;
  param_1[1] = pcVar1;
  param_1[2] = pcVar5;
  param_1[3] = pcVar6;
  param_1[4] = puVar7;
  *(undefined1 *)(param_1 + 5) = uVar4;
  return;
}



/* Address: 0x1008c44d4 | FUN_1008c44d4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1008c44d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined4 uVar1;
  DispatchPredicate DVar2;
  bool bVar3;
  undefined7 extraout_var;
  undefined *puVar4;
  undefined *puVar5;
  code *pcVar6;
  long lVar7;
  code *pcVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 auStack_d0 [4];
  undefined1 auStack_b0 [24];
  undefined8 local_98;
  code *pcStack_90;
  undefined *local_88;
  code *pcStack_80;
  undefined *local_78;
  undefined8 uStack_70;
  long local_68;
  
  auStack_d0[1] = param_5;
  auStack_d0[2] = param_2;
  auStack_d0[3] = param_3;
  DVar2 = Dispatch::DispatchPredicate::typeMetadataAccessor();
  lVar10 = CONCAT71(extraout_var,DVar2.value);
  lVar7 = *(long *)(lVar10 + -8);
  puVar9 = (undefined8 *)((long)auStack_d0 - (*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0));
  uVar11 = *(undefined8 *)(param_1 + 0x38);
  *puVar9 = uVar11;
  uVar1 = *(undefined4 *)
           PTR___enum_case_for_Dispatch_DispatchPredicate_onQueue_Dispatch_DispatchPredicate_Type___>____C_OS_dispatch_queue___>_Dispatch_DispatchPredicate_100eae750
  ;
  pcVar6 = *(code **)(lVar7 + 0x68);
  (*pcVar6)(puVar9,uVar1,lVar10);
  bVar3 = Dispatch::_dispatchPreconditionTest((DispatchPredicate)(__int8)puVar9);
  pcVar8 = *(code **)(lVar7 + 8);
  (*pcVar8)(puVar9,lVar10);
  if (!bVar3) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1008c46a0);
    (*pcVar6)();
  }
  *puVar9 = uVar11;
  (*pcVar6)(puVar9,uVar1,lVar10);
  bVar3 = Dispatch::_dispatchPreconditionTest((DispatchPredicate)(__int8)puVar9);
  (*pcVar8)(puVar9,lVar10);
  if (bVar3) {
    lVar10 = *(long *)(param_1 + 0x30);
    if (lVar10 != -1) {
      *(long *)(param_1 + 0x30) = lVar10 + 1;
      puVar4 = &DAT_100f0dd10;
      _swift_allocObject(&DAT_100f0dd10,0x28,7);
      *(undefined8 *)(puVar4 + 0x10) = auStack_d0[1];
      *(undefined8 *)(puVar4 + 0x18) = param_6;
      *(undefined8 *)(puVar4 + 0x20) = param_4;
      puVar5 = &DAT_100f0dd38;
      _swift_allocObject(&DAT_100f0dd38,0x18,7);
      *(undefined8 *)(puVar5 + 0x10) = param_4;
      local_98 = auStack_d0[2];
      pcStack_90 = thunk_FUN_1008c8304;
      pcStack_80 = thunk_FUN_1008c8310;
      uStack_70 = auStack_d0[3];
      local_88 = puVar4;
      local_78 = puVar5;
      local_68 = lVar10;
      _swift_beginAccess(param_1 + 0x20,auStack_b0,0x21,0);
      _swift_retain_n(param_4,2);
      _swift_retain(param_6);
      FUN_1008c75a8(&local_98);
      _swift_endAccess(auStack_b0);
      _swift_release(puVar5);
      _swift_release(puVar4);
      return;
    }
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1008c46a8);
    (*pcVar6)();
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x1008c46a4);
  (*pcVar6)();
}



/* Address: 0x1008c46a8 | FUN_1008c46a8 */

void FUN_1008c46a8(void)

{
  FUN_1008c68b8();
  return;
}



/* Address: 0x1008c46b4 | FUN_1008c46b4 */

void FUN_1008c46b4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *unaff_x20;
  ulong uVar8;
  long unaff_x21;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_e0 [8];
  undefined8 local_d8;
  undefined8 *local_d0;
  undefined1 auStack_c0 [40];
  undefined1 auStack_98 [56];
  undefined8 *local_58;
  
  local_d8 = *unaff_x20;
  lVar9 = *(long *)(param_4 + -8);
  lVar7 = *(long *)(lVar9 + 0x40);
  local_d0 = param_1;
  FUN_1008c1058(0);
  if (DAT_100feb2b0 != -1) {
    _swift_once(&DAT_100feb2b0,FUN_1008c3000);
  }
  (extension_Dispatch)::__C::OS_dispatch_queue::_getSpecific();
  if ((local_58 == (undefined8 *)0x0) || (unaff_x20 != local_58)) {
    (**(code **)(lVar9 + 0x10))(auStack_e0 + -(lVar7 + 0xfU & 0xfffffffffffffff0),param_3,param_4);
    uVar5 = (ulong)*(byte *)(lVar9 + 0x50);
    uVar8 = uVar5 + 0x30 & (uVar5 ^ 0xffffffffffffffff);
    puVar2 = &DAT_100f0d638;
    _swift_allocObject(&DAT_100f0d638,uVar8 + lVar7,uVar5 | 7);
    *(long *)(puVar2 + 0x10) = param_4;
    *(undefined8 *)(puVar2 + 0x18) = param_5;
    *(undefined8 **)(puVar2 + 0x20) = unaff_x20;
    *(undefined8 *)(puVar2 + 0x28) = param_2;
    (**(code **)(lVar9 + 0x20))
              (puVar2 + uVar8,auStack_e0 + -(lVar7 + 0xfU & 0xfffffffffffffff0),param_4);
    puVar3 = &DAT_100feb2c0;
    FUN_1000f7830(&DAT_100feb2c0,&DAT_100c82958);
    _swift_allocObject();
    *(undefined8 **)(puVar3 + 0x40) = unaff_x20;
    *(undefined ***)(puVar3 + 0x48) = &PTR_PTR_100f0d740;
    *(undefined8 *)(puVar3 + 0x18) = 0;
    *(undefined8 *)(puVar3 + 0x10) = 0;
    *(undefined8 *)(puVar3 + 0x28) = 0;
    *(undefined8 *)(puVar3 + 0x20) = 0;
    *(undefined8 *)(puVar3 + 0x30) = 0;
    *(undefined2 *)(puVar3 + 0x38) = 0xff00;
    *(undefined8 *)(puVar3 + 0x58) = 0;
    *(undefined8 *)(puVar3 + 0x60) = 0;
    *(undefined8 *)(puVar3 + 0x50) = 0;
    puVar4 = &DAT_100f0d660;
    _swift_allocObject(&DAT_100f0d660,0x28,7);
    *(undefined **)(puVar4 + 0x10) = puVar3;
    *(code **)(puVar4 + 0x18) = FUN_1008c8210;
    *(undefined **)(puVar4 + 0x20) = puVar2;
    _swift_retain_n();
    _swift_retain(puVar3);
    _swift_retain(puVar2);
    FUN_1008c2bb8(FUN_1008c82a8,puVar4);
    _swift_release(puVar4);
    _swift_release(puVar2);
    lVar7 = -0x80;
    FUN_1008c779c(auStack_98 + 8,"NIOEmbedded/AsyncTestingEventLoop.swift",0x27,2,0xd6);
    _swift_release(puVar3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  else {
    lVar7 = -0xb0;
    FUN_1006628e0(auStack_c0,param_2,param_3,local_d8,param_4,&PTR_PTR_100f0d740,param_5);
  }
  uVar6 = *(undefined8 *)(&stack0x00000010 + lVar7);
  uVar1 = (&stack0x00000018)[lVar7];
  uVar12 = *(undefined8 *)(&stack0xfffffffffffffff0 + lVar7);
  uVar11 = *(undefined8 *)(&stack0x00000008 + lVar7);
  uVar10 = *(undefined8 *)(&stack0x00000000 + lVar7);
  local_d0[1] = *(undefined8 *)(&stack0xfffffffffffffff8 + lVar7);
  *local_d0 = uVar12;
  local_d0[3] = uVar11;
  local_d0[2] = uVar10;
  local_d0[4] = uVar6;
  *(undefined1 *)(local_d0 + 5) = uVar1;
  return;
}



/* Address: 0x1008c4918 | FUN_1008c4918 */

void FUN_1008c4918(undefined8 *param_1,ulong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  long unaff_x20;
  long unaff_x21;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined7 local_67;
  undefined1 uStack_60;
  undefined8 uStack_5f;
  
  puVar2 = param_2;
  (**(code **)(**(long **)(unaff_x20 + 0x10) + 0x88))();
  uVar3 = *puVar2;
  if (0x7ffffffffffffffe < uVar3) {
    uVar3 = 0x7fffffffffffffff;
  }
  uVar1 = 0x7fffffffffffffff;
  if (!SCARRY8(uVar3,(long)param_2)) {
    uVar1 = uVar3 + (long)param_2 & ((long)(uVar3 + (long)param_2) >> 0x3f ^ 0xffffffffffffffffU);
  }
  FUN_1008c46b4(&local_80,uVar1,param_3,param_4,param_5);
  if (unaff_x21 == 0) {
    param_1[1] = uStack_78;
    *param_1 = local_80;
    param_1[3] = CONCAT71(local_67,uStack_68);
    param_1[2] = uStack_70;
    *(undefined8 *)((long)param_1 + 0x21) = uStack_5f;
    *(ulong *)((long)param_1 + 0x19) = CONCAT17(uStack_60,local_67);
  }
  return;
}



/* Address: 0x1008c49c8 | FUN_1008c49c8 */

void FUN_1008c49c8(ulong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  
  (**(code **)(*(long *)param_1[2] + 0x88))();
  uVar3 = *param_1;
  if (0x7ffffffffffffffe < uVar3) {
    uVar3 = 0x7fffffffffffffff;
  }
  puVar1 = &DAT_100f0ddb0;
  _swift_allocObject(&DAT_100f0ddb0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  _swift_retain(param_3);
  puVar2 = puVar1;
  FUN_1008c3a00(uVar3,FUN_1006227e0,puVar1);
  _swift_release(puVar1);
  _swift_release(uVar3);
  _swift_release(puVar2);
  FUN_1008c4a80();
  return;
}



/* Address: 0x1008c4a80 | FUN_1008c4a80 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1008c4a80(void)

{
  code *pcVar1;
  DispatchPredicate DVar2;
  bool bVar3;
  undefined7 extraout_var;
  ulong *puVar5;
  ulong uVar6;
  long unaff_x20;
  long lVar7;
  long lVar4;
  
  DVar2 = Dispatch::DispatchPredicate::typeMetadataAccessor();
  lVar4 = CONCAT71(extraout_var,DVar2.value);
  lVar7 = *(long *)(lVar4 + -8);
  puVar5 = (ulong *)(&stack0xffffffffffffffc0 +
                    -(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0));
  *puVar5 = *(ulong *)(unaff_x20 + 0x38);
  (**(code **)(lVar7 + 0x68))
            (puVar5,*(undefined4 *)
                     PTR___enum_case_for_Dispatch_DispatchPredicate_onQueue_Dispatch_DispatchPredicate_Type___>____C_OS_dispatch_queue___>_Dispatch_DispatchPredicate_100eae750
             ,lVar4);
  bVar3 = Dispatch::_dispatchPreconditionTest((DispatchPredicate)(__int8)puVar5);
  (**(code **)(lVar7 + 8))(puVar5,lVar4);
  if (bVar3) {
    (**(code **)(**(long **)(unaff_x20 + 0x10) + 0x88))();
    uVar6 = *puVar5;
    if (0x7ffffffffffffffe < uVar6) {
      uVar6 = 0x7fffffffffffffff;
    }
    FUN_1008c50d8(uVar6);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008c4b54);
  (*pcVar1)();
}



/* Address: 0x1008c4b54 | FUN_1008c4b54 */

void FUN_1008c4b54(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_1;
  *(undefined8 *)(unaff_x22 + 0x78) = unaff_x20;
  _swift_task_switch(FUN_1008c4b6c,0,0);
  return;
}



/* Address: 0x1008c4b6c | FUN_1008c4b6c */

void FUN_1008c4b6c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  long *plVar4;
  UnsafeContinuation<undefined,undefined> continuation;
  undefined *puVar5;
  ulong uVar6;
  long unaff_x22;
  long lVar7;
  String isolation;
  String function;
  
  *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0x78);
  *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0x70);
  bVar3 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar3 & 1) != 0) {
    plVar4 = (long *)(ulong)*(uint *)(PTR__withCheckedContinuation_100eaef98 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x80) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_1008c4d00;
    isolation.bridgeObject = (void *)0x0;
    isolation.str = (char *)plVar4;
    Swift::_withCheckedContinuation(isolation);
    return;
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_1008c4d50;
  continuation.unknown = (undefined *)(unaff_x22 + 0x10);
  _swift_continuation_init(continuation.unknown,0);
  puVar5 = &DAT_100feb2c8;
  FUN_1000f7830(&DAT_100feb2c8,&DAT_100c82960);
  lVar7 = *(long *)(puVar5 + -8);
  uVar6 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar6);
  function.bridgeObject = (void *)0x8000000100db45a0;
  function.str = (char *)0xd000000000000010;
  Swift::CheckedContinuation::init(continuation,function);
  FUN_1008c4e34(uVar6,uVar2,uVar1);
  (**(code **)(lVar7 + 8))(uVar6,puVar5);
  _swift_task_dealloc(uVar6);
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}



/* Address: 0x1008c4d00 | FUN_1008c4d00 */

void FUN_1008c4d00(void)

{
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x80));
  _swift_task_switch(FUN_1002e1208,0,0);
  return;
}



/* Address: 0x1008c4d50 | FUN_1008c4d50 */

void FUN_1008c4d50(void)

{
  _swift_task_switch(FUN_1002e1208,0,0);
  return;
}



/* Address: 0x1008c4d98 | FUN_1008c4d98 */

void FUN_1008c4d98(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = unaff_x20;
  _swift_task_switch(FUN_1008c4db0,0,0);
  return;
}



/* Address: 0x1008c4db0 | FUN_1008c4db0 */

void FUN_1008c4db0(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x10);
  (**(code **)(**(long **)(*(long *)(unaff_x22 + 0x18) + 0x10) + 0x88))();
  uVar5 = *param_1;
  if (0x7ffffffffffffffe < uVar5) {
    uVar5 = 0x7fffffffffffffff;
  }
  uVar1 = uVar5 + lVar3;
  uVar2 = 0x7fffffffffffffff;
  if (!SCARRY8(uVar5,lVar3)) {
    uVar2 = uVar1 & ((long)uVar1 >> 0x3f ^ 0xffffffffffffffffU);
  }
  plVar4 = (long *)0x90;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x20) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_100758850;
  FUN_1008c4b54(uVar2);
  return;
}



/* Address: 0x1008c4e34 | FUN_1008c4e34 */

void FUN_1008c4e34(undefined8 param_1,DispatchQoS param_2,undefined8 param_3)

{
  DispatchWorkItemFlags DVar1;
  undefined *puVar2;
  undefined *puVar3;
  void *aBlock;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  DispatchWorkItemFlags qos;
  long lVar9;
  ulong uVar10;
  undefined8 local_c0;
  undefined8 local_b8;
  long local_b0;
  undefined *puStack_a8;
  long local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  local_c0 = param_3;
  DVar1 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_a0 = *(long *)(DVar1.unknown + -8);
  lVar7 = (long)&local_c0 - (*(long *)(local_a0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puStack_a8 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_b0 = *(long *)(puStack_a8 + -8);
  qos.unknown = (undefined *)(lVar7 - (*(long *)(local_b0 + 0x40) + 0xfU & 0xfffffffffffffff0));
  local_b8 = *(undefined8 *)(param_2.unknown + 0x38);
  puVar2 = &DAT_100feb2c8;
  FUN_1000f7830(&DAT_100feb2c8,&DAT_100c82960);
  lVar8 = *(long *)(puVar2 + -8);
  lVar9 = *(long *)(lVar8 + 0x40);
  lVar6 = (long)qos.unknown - (lVar9 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar8 + 0x10))(lVar6,param_1,puVar2);
  uVar5 = (ulong)*(byte *)(lVar8 + 0x50);
  uVar10 = uVar5 + 0x20 & (uVar5 ^ 0xffffffffffffffff);
  puVar3 = &DAT_100f0db08;
  _swift_allocObject(&DAT_100f0db08,uVar10 + lVar9,uVar5 | 7);
  *(undefined **)(puVar3 + 0x10) = param_2.unknown;
  *(undefined8 *)(puVar3 + 0x18) = local_c0;
  (**(code **)(lVar8 + 0x20))(puVar3 + uVar10,lVar6,puVar2);
  local_70 = FUN_1008c87cc;
  local_90 = PTR___NSConcreteStackBlock_100ea82a0;
  local_88 = 0x42000000;
  local_80 = FUN_100030410;
  puStack_78 = &DAT_100f0db20;
  local_68 = puVar3;
  aBlock = __Block_copy(&local_90);
  _swift_retain();
  Dispatch::DispatchQoS::get_unspecified(param_2);
  local_98 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar2 = &DAT_100feb250;
  FUN_1003b6598(&DAT_100feb250,0xff,PTR_typeMetadataAccessor_100eae670,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_100eae680);
  puVar3 = &DAT_100feb258;
  FUN_1000f7830(&DAT_100feb258,&DAT_100c828c0);
  puVar4 = &DAT_100feb260;
  FUN_100134584(&DAT_100feb260,&DAT_100feb258,&DAT_100c828c0,
                PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530);
  Swift::SetAlgebra::_init(lVar7,&local_98,puVar3,puVar4,DVar1.unknown,puVar2);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
  __Block_release(aBlock);
  (**(code **)(local_a0 + 8))(lVar7,DVar1.unknown);
  (**(code **)(local_b0 + 8))(qos.unknown,puStack_a8);
  _swift_release(local_68);
  return;
}



/* Address: 0x1008c5090 | FUN_1008c5090 */

void FUN_1008c5090(undefined8 param_1,undefined8 param_2)

{
  FUN_1008c50d8(param_2);
  FUN_1000f7830(&DAT_100feb2c8,&DAT_100c82960);
  Swift::CheckedContinuation::resume();
  return;
}



/* Address: 0x1008c50d8 | FUN_1008c50d8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1008c50d8(ulong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  DispatchPredicate DVar7;
  bool bVar8;
  undefined7 extraout_var;
  ContiguousArray CVar9;
  _ContiguousArrayBuffer<undefined> _Var10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  long unaff_x20;
  long lVar15;
  undefined8 uVar16;
  ulong *puVar17;
  undefined8 uVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  undefined8 uVar22;
  code *pcVar23;
  ulong uStack_180;
  code *local_178;
  long *local_170;
  ulong local_168;
  ulong *local_160;
  ulong *local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined *local_128 [3];
  undefined1 auStack_110 [24];
  undefined *local_f8;
  undefined8 local_f0;
  ulong uStack_e8;
  undefined1 auStack_e0 [56];
  long local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  DVar7 = Dispatch::DispatchPredicate::typeMetadataAccessor();
  lVar15 = CONCAT71(extraout_var,DVar7.value);
  lVar20 = *(long *)(lVar15 + -8);
  puVar17 = (ulong *)((long)&uStack_180 - (*(long *)(lVar20 + 0x40) + 0xfU & 0xfffffffffffffff0));
  *puVar17 = *(ulong *)(unaff_x20 + 0x38);
  (**(code **)(lVar20 + 0x68))
            (puVar17,*(undefined4 *)
                      PTR___enum_case_for_Dispatch_DispatchPredicate_onQueue_Dispatch_DispatchPredicate_Type___>____C_OS_dispatch_queue___>_Dispatch_DispatchPredicate_100eae750
             ,lVar15);
  bVar8 = Dispatch::_dispatchPreconditionTest((DispatchPredicate)(__int8)puVar17);
  (**(code **)(lVar20 + 8))(puVar17,lVar15);
  if (!bVar8) {
                    /* WARNING: Does not return */
    pcVar23 = (code *)SoftwareBreakpoint(1,0x1008c55a4);
    (*pcVar23)();
  }
  local_170 = *(long **)(unaff_x20 + 0x10);
  local_178 = *(code **)(*local_170 + 0x88);
  (*local_178)();
  local_168 = *puVar17;
  if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar23 = (code *)SoftwareBreakpoint(1,0x1008c55a8);
    (*pcVar23)();
  }
  if (0x7ffffffffffffffe < local_168) {
    local_168 = 0x7fffffffffffffff;
  }
  if (local_168 <= param_1) {
    local_168 = param_1;
  }
  CVar9.unknown = &DAT_100feb4c8;
  FUN_1000f7830(&DAT_100feb4c8,&DAT_100c82bd0);
  _Var10 = Swift::ContiguousArray::_allocateBufferUninitialized(0x10,CVar9);
  *(undefined8 *)(_Var10.unknown + 0x10) = 0x10;
  _bzero(_Var10.unknown + 0x20,0x380);
  local_f0 = 0;
  uStack_e8 = 0;
  puVar17 = (ulong *)(unaff_x20 + 0x20);
  local_f8 = _Var10.unknown;
  _swift_beginAccess(puVar17,auStack_110,0,0);
  lVar15 = *(long *)(unaff_x20 + 0x20);
  lVar20 = *(long *)(lVar15 + 0x10);
  while (lVar20 != 0) {
    uVar19 = *(ulong *)(lVar15 + 0x48);
    if ((long)uVar19 < 0) {
                    /* WARNING: Does not return */
      pcVar23 = (code *)SoftwareBreakpoint(1,0x1008c559c);
      (*pcVar23)();
    }
    _Var10.unknown = local_f8;
    if (local_168 < uVar19) break;
    local_158 = *(ulong **)(lVar15 + 0x30);
    puVar17 = *(ulong **)(lVar15 + 0x40);
    _swift_retain();
    local_160 = puVar17;
    _swift_retain();
    uVar21 = 0;
    do {
      puVar12 = local_f8;
      if ((long)*(ulong *)(lVar15 + 0x48) < 0) {
                    /* WARNING: Does not return */
        pcVar23 = (code *)SoftwareBreakpoint(1,0x1008c558c);
        (*pcVar23)();
      }
      if (*(ulong *)(lVar15 + 0x48) != uVar19) break;
      uVar18 = *(undefined8 *)(lVar15 + 0x20);
      puVar17 = *(ulong **)(lVar15 + 0x30);
      uStack_138 = *(undefined8 *)(lVar15 + 0x30);
      local_140 = *(undefined8 *)(lVar15 + 0x28);
      uVar22 = *(undefined8 *)(lVar15 + 0x40);
      uStack_148 = *(undefined8 *)(lVar15 + 0x40);
      local_150 = *(undefined8 *)(lVar15 + 0x38);
      uVar16 = *(undefined8 *)(lVar15 + 0x50);
      _swift_retain_n(puVar17,2);
      _swift_retain_n(uVar22,2);
      puVar11 = puVar12;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((ulong)puVar11 & 1) == 0) {
        FUN_1008d1a08();
      }
      if (*(long *)(puVar12 + 0x10) <= (long)uVar21) {
                    /* WARNING: Does not return */
        pcVar23 = (code *)SoftwareBreakpoint(1,0x1008c5590);
        (*pcVar23)();
      }
      puVar14 = (undefined8 *)(puVar12 + uVar21 * 0x38 + 0x20);
      uVar1 = *puVar14;
      uVar4 = puVar14[1];
      uVar2 = puVar14[2];
      uVar5 = puVar14[3];
      uVar3 = puVar14[4];
      uVar6 = puVar14[5];
      uVar13 = puVar14[6];
      *puVar14 = uVar18;
      puVar14[2] = uStack_138;
      puVar14[1] = local_140;
      puVar14[4] = uStack_148;
      puVar14[3] = local_150;
      puVar14[5] = uVar19;
      puVar14[6] = uVar16;
      FUN_1008c86b8(uVar1,uVar4,uVar2,uVar5,uVar3,uVar6,uVar13);
      uVar21 = *(long *)(puVar12 + 0x10) - 1U & uVar21 + 1;
      local_f8 = puVar12;
      if (uVar21 == 0) {
        lVar15 = *(long *)(puVar12 + 0x10) * 2;
        if (lVar15 < 1) {
                    /* WARNING: Does not return */
          pcVar23 = (code *)SoftwareBreakpoint(1,0x1008c5594);
          (*pcVar23)();
        }
        local_128[0] = PTR___swiftEmptyArrayStorage_100eae0d8;
        FUN_1008d138c(0,lVar15,0);
        _swift_retain(puVar12);
        FUN_1008d3bb8();
        _swift_release(puVar12);
        _swift_retain(puVar12);
        FUN_1008d3bb8();
        _swift_release(puVar12);
        uVar21 = *(ulong *)(local_128[0] + 0x10);
        if ((long)(lVar15 - uVar21) < 0) {
                    /* WARNING: Does not return */
          pcVar23 = (code *)SoftwareBreakpoint(1,0x1008c5598);
          (*pcVar23)();
        }
        uStack_98 = 0;
        local_a0 = 0;
        uStack_88 = 0;
        local_90 = 0;
        uStack_78 = 0;
        local_80 = 0;
        local_70 = 0;
        local_a8 = lVar15 - uVar21;
        FUN_1008d1cb0(&local_a8);
        _swift_release(puVar12);
        local_f8 = local_128[0];
      }
      _swift_beginAccess(unaff_x20 + 0x20,local_128,0x21,0);
      FUN_1008d0824(auStack_e0,0);
      _swift_endAccess(local_128);
      FUN_1008c86e8(auStack_e0);
      _swift_release(uVar22);
      _swift_release();
      lVar15 = *(long *)(unaff_x20 + 0x20);
    } while (*(long *)(lVar15 + 0x10) != 0);
    local_f0 = 0;
    uStack_e8 = uVar21;
    (*local_178)();
    puVar12 = local_f8;
    *puVar17 = uVar19;
    if (0xffffffff < (long)uVar21) {
                    /* WARNING: Does not return */
      pcVar23 = (code *)SoftwareBreakpoint(1,0x1008c55a0);
      (*pcVar23)();
    }
    _swift_retain(local_f8);
    if (uVar21 != 0) {
      uVar19 = 0;
      do {
        uVar19 = uVar19 & 0xffffffff;
        if (*(ulong *)(puVar12 + 0x10) <= uVar19) {
                    /* WARNING: Does not return */
          pcVar23 = (code *)SoftwareBreakpoint(1,0x1008c5584);
          (*pcVar23)();
        }
        lVar15 = uVar19 * 0x38;
        pcVar23 = *(code **)(puVar12 + lVar15 + 0x28);
        if (pcVar23 == (code *)0x0) {
                    /* WARNING: Does not return */
          pcVar23 = (code *)SoftwareBreakpoint(1,0x1008c55ac);
          (*pcVar23)();
        }
        uVar19 = *(ulong *)(puVar12 + 0x10) - 1 & uVar19 + 1;
        if (uVar19 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar23 = (code *)SoftwareBreakpoint(1,0x1008c5588);
          (*pcVar23)();
        }
        uVar16 = *(undefined8 *)(puVar12 + lVar15 + 0x30);
        uVar18 = *(undefined8 *)(puVar12 + lVar15 + 0x40);
        _swift_retain(uVar16);
        _swift_retain(uVar18);
        (*pcVar23)();
        _swift_release(uVar18);
        _swift_release(uVar16);
      } while (uVar19 != uVar21);
    }
    _swift_release(puVar12);
    FUN_1008c74c0(uVar21);
    _swift_release(local_160);
    puVar17 = local_158;
    _swift_release();
    local_f0 = 0;
    uStack_e8 = 0;
    lVar15 = *(long *)(unaff_x20 + 0x20);
    _Var10.unknown = local_f8;
    lVar20 = *(long *)(lVar15 + 0x10);
  }
  (*local_178)();
  *puVar17 = local_168;
  _swift_release(_Var10.unknown);
  return;
}



/* Address: 0x1008c55ac | FUN_1008c55ac */

void FUN_1008c55ac(undefined8 param_1,long param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5)

{
  DispatchWorkItemFlags DVar1;
  CheckedContinuation CVar2;
  undefined *puVar3;
  void *aBlock;
  DispatchQoS DVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined1 *puVar8;
  long lVar9;
  DispatchWorkItemFlags qos;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  undefined1 auStack_d0 [8];
  undefined8 local_c8;
  undefined *puStack_c0;
  undefined8 local_b8;
  long local_b0;
  undefined *puStack_a8;
  long local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  local_c8 = param_3;
  puStack_c0 = param_4;
  DVar1 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_a0 = *(long *)(DVar1.unknown + -8);
  puVar8 = auStack_d0 + -(*(long *)(local_a0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puStack_a8 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_b0 = *(long *)(puStack_a8 + -8);
  qos.unknown = puVar8 + -(*(long *)(local_b0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_b8 = *(undefined8 *)(param_2 + 0x38);
  FUN_1000f8b08(&DAT_100feb0c8,&DAT_100c82c50);
  CVar2 = Swift::CheckedContinuation::typeMetadataAccessor();
  lVar9 = *(long *)(CVar2.unknown + -8);
  lVar12 = *(long *)(lVar9 + 0x40);
  lVar10 = (long)qos.unknown - (lVar12 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar9 + 0x10))(lVar10,param_1,CVar2.unknown);
  uVar7 = (ulong)*(byte *)(lVar9 + 0x50);
  uVar11 = uVar7 + 0x18 & (uVar7 ^ 0xffffffffffffffff);
  uVar13 = lVar12 + uVar11 + 7 & 0xfffffffffffffff8;
  puVar3 = &DAT_100f0ddd8;
  _swift_allocObject(&DAT_100f0ddd8,uVar13 + 0x10,uVar7 | 7);
  *(undefined8 *)(puVar3 + 0x10) = param_5;
  (**(code **)(lVar9 + 0x20))(puVar3 + uVar11,lVar10,CVar2.unknown);
  DVar4.unknown = puStack_c0;
  *(undefined8 *)(puVar3 + uVar13) = local_c8;
  *(undefined **)((long)(puVar3 + uVar13) + 8) = puStack_c0;
  local_70 = FUN_1008c8b08;
  local_90 = PTR___NSConcreteStackBlock_100ea82a0;
  local_88 = 0x42000000;
  local_80 = FUN_100030410;
  puStack_78 = &DAT_100f0ddf0;
  local_68 = puVar3;
  aBlock = __Block_copy(&local_90);
  _swift_retain();
  Dispatch::DispatchQoS::get_unspecified(DVar4);
  local_98 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar3 = &DAT_100feb250;
  FUN_1003b6598(&DAT_100feb250,0xff,PTR_typeMetadataAccessor_100eae670,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_100eae680);
  puVar5 = &DAT_100feb258;
  FUN_1000f7830(&DAT_100feb258,&DAT_100c828c0);
  puVar6 = &DAT_100feb260;
  FUN_100134584(&DAT_100feb260,&DAT_100feb258,&DAT_100c828c0,
                PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530);
  Swift::SetAlgebra::_init(puVar8,&local_98,puVar5,puVar6,DVar1.unknown,puVar3);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
  __Block_release(aBlock);
  (**(code **)(local_a0 + 8))(puVar8,DVar1.unknown);
  (**(code **)(local_b0 + 8))(qos.unknown,puStack_a8);
  _swift_release(local_68);
  return;
}



/* Address: 0x1008c5838 | FUN_1008c5838 */

void FUN_1008c5838(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1008c55ac(param_1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1008c5844 | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  FUN_100049040();
  return;
}



/* Address: 0x1008c5848 | FUN_1008c5848 */

void FUN_1008c5848(void)

{
  long unaff_x20;
  
  FUN_1008c49c8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1008c5854 | FUN_1008c5854 */

void FUN_1008c5854(long param_1,long param_2)

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



/* Address: 0x1008c5868 | FUN_1008c5868 */

void FUN_1008c5868(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x1008c5870 | FUN_1008c5870 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1008c5870(void)

{
  return ZEXT816(0x100feb3f0);
}



/* Address: 0x1008c5890 | FUN_1008c5890 */

/* WARNING: Removing unreachable block (ram,0x0001008c58e0) */

void FUN_1008c5890(undefined8 param_1,code *param_2,undefined8 param_3,long param_4)

{
  CheckedContinuation CVar1;
  long lVar2;
  undefined1 local_50 [16];
  
  lVar2 = *(long *)(*(long *)(param_4 + -8) + 0x40);
  (*param_2)(local_50 + -(lVar2 + 0xfU & 0xfffffffffffffff0));
  FUN_1000f8b08(&DAT_100feb0c8,&DAT_100c82c50);
  CVar1 = Swift::CheckedContinuation::typeMetadataAccessor();
  Swift::CheckedContinuation::resume(local_50 + -(lVar2 + 0xfU & 0xfffffffffffffff0),CVar1.unknown);
  return;
}



/* Address: 0x1008c5978 | FUN_1008c5978 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1008c5978(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  DispatchPredicate DVar4;
  bool bVar5;
  undefined7 extraout_var;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  long unaff_x20;
  long lVar10;
  undefined8 auStack_a0 [3];
  undefined1 auStack_88 [8];
  long local_80;
  undefined8 local_78;
  code *local_70;
  undefined8 uStack_68;
  long lVar6;
  
  DVar4 = Dispatch::DispatchPredicate::typeMetadataAccessor();
  lVar6 = CONCAT71(extraout_var,DVar4.value);
  lVar10 = *(long *)(lVar6 + -8);
  puVar7 = (undefined8 *)((long)auStack_a0 - (*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0))
  ;
  *puVar7 = *(undefined8 *)(unaff_x20 + 0x38);
  (**(code **)(lVar10 + 0x68))
            (puVar7,*(undefined4 *)
                     PTR___enum_case_for_Dispatch_DispatchPredicate_onQueue_Dispatch_DispatchPredicate_Type___>____C_OS_dispatch_queue___>_Dispatch_DispatchPredicate_100eae750
             ,lVar6);
  bVar5 = Dispatch::_dispatchPreconditionTest((DispatchPredicate)(__int8)puVar7);
  (**(code **)(lVar10 + 8))(puVar7,lVar6);
  if (bVar5) {
    _swift_beginAccess(unaff_x20 + 0x20,auStack_a0,0x21,0);
    FUN_1008d0824(auStack_88,0);
    puVar7 = auStack_a0;
    _swift_endAccess();
    if (local_80 != 0) {
      FUN_1008c8678();
      do {
        uVar2 = uStack_68;
        pcVar3 = local_70;
        uVar1 = local_78;
        puVar8 = &DAT_100eef640;
        puVar9 = puVar7;
        _swift_allocError(&DAT_100eef640,puVar7,0,0);
        *(undefined1 *)puVar9 = 1;
        (*pcVar3)();
        _swift_errorRelease(puVar8);
        _swift_release(uVar2);
        _swift_release(uVar1);
        _swift_beginAccess(unaff_x20 + 0x20,auStack_a0,0x21,0);
        FUN_1008d0824(auStack_88,0);
        _swift_endAccess(auStack_a0);
      } while (local_80 != 0);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1008c5ae8);
  (*pcVar3)();
}



/* Address: 0x1008c5ae8 | FUN_1008c5ae8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1008c5ae8(undefined8 param_1,undefined8 param_2,DispatchQoS param_3)

{
  DispatchWorkItemFlags DVar1;
  DispatchQoS DVar2;
  undefined *puVar3;
  void *aBlock;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long unaff_x20;
  undefined1 *puVar7;
  long lVar8;
  undefined1 auStack_b0 [8];
  undefined8 local_a8;
  long local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  DVar1 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  puVar4 = PTR_typeMetadataAccessor_100eae670;
  local_a0 = *(long *)(DVar1.unknown + -8);
  puVar7 = auStack_b0 + -(*(long *)(local_a0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  DVar2 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar8 = *(long *)(DVar2.unknown + -8);
  lVar6 = *(long *)(lVar8 + 0x40);
  local_a8 = *(undefined8 *)(unaff_x20 + 0x38);
  puVar3 = &DAT_100f0d688;
  _swift_allocObject(&DAT_100f0d688,0x30,7);
  *(long *)(puVar3 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  *(undefined8 *)(puVar3 + 0x20) = param_2;
  *(undefined **)(puVar3 + 0x28) = param_3.unknown;
  local_70 = FUN_1008c82f0;
  local_90 = PTR___NSConcreteStackBlock_100ea82a0;
  local_88 = 0x42000000;
  local_80 = FUN_100030410;
  puStack_78 = &DAT_100f0d6a0;
  local_68 = puVar3;
  aBlock = __Block_copy(&local_90);
  _swift_retain();
  _swift_retain();
  Dispatch::DispatchQoS::get_unspecified(param_3);
  local_98 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar3 = &DAT_100feb250;
  FUN_1003b6598(&DAT_100feb250,0xff,puVar4,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_100eae680);
  puVar4 = &DAT_100feb258;
  FUN_1000f7830(&DAT_100feb258,&DAT_100c828c0);
  puVar5 = &DAT_100feb260;
  FUN_100134584(&DAT_100feb260,&DAT_100feb258,&DAT_100c828c0,
                PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530);
  Swift::SetAlgebra::_init(puVar7,&local_98,puVar4,puVar5,DVar1.unknown,puVar3);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async
            ((DispatchQoS)0x0,(DispatchWorkItemFlags)(puVar7 + -(lVar6 + 0xfU & 0xfffffffffffffff0))
            );
  __Block_release(aBlock);
  (**(code **)(local_a0 + 8))(puVar7,DVar1.unknown);
  (**(code **)(lVar8 + 8))(puVar7 + -(lVar6 + 0xfU & 0xfffffffffffffff0),DVar2.unknown);
  _swift_release(local_68);
  return;
}



/* Address: 0x1008c5cf0 | FUN_1008c5cf0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1008c5cf0(long param_1,undefined8 param_2,undefined8 param_3,DispatchQoS param_4)

{
  code *pcVar1;
  DispatchPredicate DVar2;
  bool bVar3;
  DispatchWorkItemFlags DVar4;
  undefined7 extraout_var;
  undefined *puVar6;
  void *aBlock;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  DispatchWorkItemFlags qos;
  undefined8 *puVar11;
  long alStack_c0 [2];
  undefined *puStack_b0;
  long local_a8;
  undefined8 local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  long lVar5;
  
  local_a0 = param_2;
  DVar4 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_a8 = *(long *)(DVar4.unknown + -8);
  lVar9 = (long)alStack_c0 - (*(long *)(local_a8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puStack_b0 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  alStack_c0[1] = *(long *)(puStack_b0 + -8);
  qos.unknown = (undefined *)(lVar9 - (*(long *)(alStack_c0[1] + 0x40) + 0xfU & 0xfffffffffffffff0))
  ;
  DVar2 = Dispatch::DispatchPredicate::typeMetadataAccessor();
  lVar5 = CONCAT71(extraout_var,DVar2.value);
  lVar10 = *(long *)(lVar5 + -8);
  puVar11 = (undefined8 *)(qos.unknown + -(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0));
  *puVar11 = *(undefined8 *)(param_1 + 0x38);
  (**(code **)(lVar10 + 0x68))
            (puVar11,*(undefined4 *)
                      PTR___enum_case_for_Dispatch_DispatchPredicate_onQueue_Dispatch_DispatchPredicate_Type___>____C_OS_dispatch_queue___>_Dispatch_DispatchPredicate_100eae750
             ,lVar5);
  bVar3 = Dispatch::_dispatchPreconditionTest((DispatchPredicate)(__int8)puVar11);
  (**(code **)(lVar10 + 8))(puVar11,lVar5);
  if (bVar3) {
    FUN_1008c4a80();
    FUN_1008c5978();
    puVar6 = &DAT_100f0dab8;
    _swift_allocObject(&DAT_100f0dab8,0x20,7);
    *(undefined8 *)(puVar6 + 0x10) = param_3;
    *(undefined **)(puVar6 + 0x18) = param_4.unknown;
    local_70 = FUN_1008c8730;
    local_90 = PTR___NSConcreteStackBlock_100ea82a0;
    local_88 = 0x42000000;
    local_80 = FUN_100030410;
    puStack_78 = &DAT_100f0dad0;
    local_68 = puVar6;
    aBlock = __Block_copy(&local_90);
    _swift_retain();
    Dispatch::DispatchQoS::get_unspecified(param_4);
    local_98 = PTR___swiftEmptyArrayStorage_100eae0d8;
    puVar6 = &DAT_100feb250;
    FUN_1003b6598(&DAT_100feb250,0xff,PTR_typeMetadataAccessor_100eae670,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_100eae680);
    puVar7 = &DAT_100feb258;
    FUN_1000f7830(&DAT_100feb258,&DAT_100c828c0);
    puVar8 = &DAT_100feb260;
    FUN_100134584(&DAT_100feb260,&DAT_100feb258,&DAT_100c828c0,
                  PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530);
    Swift::SetAlgebra::_init(lVar9,&local_98,puVar7,puVar8,DVar4.unknown,puVar6);
    (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
    __Block_release(aBlock);
    (**(code **)(local_a8 + 8))(lVar9,DVar4.unknown);
    (**(code **)(alStack_c0[1] + 8))(qos.unknown,puStack_b0);
    _swift_release(local_68);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008c5f58);
  (*pcVar1)();
}



/* Address: 0x1008c5f58 | FUN_1008c5f58 */

void FUN_1008c5f58(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = unaff_x20;
  _swift_task_switch(FUN_1008c5f70,0,0);
  return;
}



/* Address: 0x1008c5f70 | FUN_1008c5f70 */

void FUN_1008c5f70(void)

{
  byte bVar1;
  long *plVar2;
  UnsafeContinuation<undefined,undefined> continuation;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long unaff_x22;
  long lVar6;
  String isolation;
  String function;
  
  bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar1 & 1) != 0) {
    plVar2 = (long *)(ulong)*(uint *)(PTR__withCheckedContinuation_100eaef98 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x58) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_1008c60ec;
    isolation.bridgeObject = (void *)0x0;
    isolation.str = (char *)plVar2;
    Swift::_withCheckedContinuation(isolation);
    return;
  }
  uVar5 = *(undefined8 *)(unaff_x22 + 0x50);
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_1008c613c;
  continuation.unknown = (undefined *)(unaff_x22 + 0x10);
  _swift_continuation_init(continuation.unknown,0);
  puVar3 = &DAT_100feb2c8;
  FUN_1000f7830(&DAT_100feb2c8,&DAT_100c82960);
  lVar6 = *(long *)(puVar3 + -8);
  uVar4 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar4);
  function.bridgeObject = (void *)0x8000000100dae750;
  function.str = (char *)0xd000000000000014;
  Swift::CheckedContinuation::init(continuation,function);
  FUN_1008c6184(uVar4,uVar5);
  (**(code **)(lVar6 + 8))(uVar4,puVar3);
  _swift_task_dealloc(uVar4);
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}



/* Address: 0x1008c60ec | FUN_1008c60ec */

void FUN_1008c60ec(void)

{
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x58));
  _swift_task_switch(thunk_FUN_1002e1208,0,0);
  return;
}



/* Address: 0x1008c613c | FUN_1008c613c */

void FUN_1008c613c(void)

{
  _swift_task_switch(thunk_FUN_1002e1208,0,0);
  return;
}



/* Address: 0x1008c6184 | FUN_1008c6184 */

void FUN_1008c6184(undefined8 param_1,DispatchQoS param_2)

{
  DispatchWorkItemFlags DVar1;
  DispatchQoS DVar2;
  undefined *puVar3;
  undefined *puVar4;
  void *aBlock;
  undefined *puVar5;
  ulong uVar6;
  undefined1 *puVar7;
  long lVar8;
  DispatchWorkItemFlags qos;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_c0 [8];
  undefined8 local_b8;
  long local_b0;
  undefined *puStack_a8;
  long local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  DVar1 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_a0 = *(long *)(DVar1.unknown + -8);
  puVar7 = auStack_c0 + -(*(long *)(local_a0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  DVar2 = Dispatch::DispatchQoS::typeMetadataAccessor();
  local_b0 = *(long *)(DVar2.unknown + -8);
  qos.unknown = puVar7 + -(*(long *)(local_b0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puStack_a8 = DVar2.unknown;
  (**(code **)(**(long **)(param_2.unknown + 0x40) + 0x88))();
  *(undefined8 *)DVar2.unknown = 1;
  local_b8 = *(undefined8 *)(param_2.unknown + 0x38);
  puVar3 = &DAT_100feb2c8;
  FUN_1000f7830(&DAT_100feb2c8,&DAT_100c82960);
  lVar10 = *(long *)(puVar3 + -8);
  lVar8 = *(long *)(lVar10 + 0x40);
  lVar11 = (long)qos.unknown - (lVar8 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar10 + 0x10))(lVar11,param_1,puVar3);
  uVar6 = (ulong)*(byte *)(lVar10 + 0x50);
  uVar9 = uVar6 + 0x18 & (uVar6 ^ 0xffffffffffffffff);
  puVar4 = &DAT_100f0da68;
  _swift_allocObject(&DAT_100f0da68,uVar9 + lVar8,uVar6 | 7);
  *(undefined **)(puVar4 + 0x10) = param_2.unknown;
  (**(code **)(lVar10 + 0x20))(puVar4 + uVar9,lVar11,puVar3);
  local_70 = FUN_1008c863c;
  local_90 = PTR___NSConcreteStackBlock_100ea82a0;
  local_88 = 0x42000000;
  local_80 = FUN_100030410;
  puStack_78 = &DAT_100f0da80;
  local_68 = puVar4;
  aBlock = __Block_copy(&local_90);
  _swift_retain();
  Dispatch::DispatchQoS::get_unspecified(param_2);
  local_98 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar3 = &DAT_100feb250;
  FUN_1003b6598(&DAT_100feb250,0xff,PTR_typeMetadataAccessor_100eae670,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_100eae680);
  puVar4 = &DAT_100feb258;
  FUN_1000f7830(&DAT_100feb258,&DAT_100c828c0);
  puVar5 = &DAT_100feb260;
  FUN_100134584(&DAT_100feb260,&DAT_100feb258,&DAT_100c828c0,
                PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530);
  Swift::SetAlgebra::_init(puVar7,&local_98,puVar4,puVar5,DVar1.unknown,puVar3);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
  __Block_release(aBlock);
  (**(code **)(local_a0 + 8))(puVar7,DVar1.unknown);
  (**(code **)(local_b0 + 8))(qos.unknown,puStack_a8);
  _swift_release(local_68);
  return;
}



/* Address: 0x1008c63f0 | FUN_1008c63f0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1008c63f0(long param_1)

{
  code *pcVar1;
  DispatchPredicate DVar2;
  bool bVar3;
  undefined7 extraout_var;
  undefined8 *puVar5;
  long lVar6;
  long lVar4;
  
  DVar2 = Dispatch::DispatchPredicate::typeMetadataAccessor();
  lVar4 = CONCAT71(extraout_var,DVar2.value);
  lVar6 = *(long *)(lVar4 + -8);
  puVar5 = (undefined8 *)
           (&stack0xffffffffffffffc0 + -(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0));
  *puVar5 = *(undefined8 *)(param_1 + 0x38);
  (**(code **)(lVar6 + 0x68))
            (puVar5,*(undefined4 *)
                     PTR___enum_case_for_Dispatch_DispatchPredicate_onQueue_Dispatch_DispatchPredicate_Type___>____C_OS_dispatch_queue___>_Dispatch_DispatchPredicate_100eae750
             ,lVar4);
  bVar3 = Dispatch::_dispatchPreconditionTest((DispatchPredicate)(__int8)puVar5);
  (**(code **)(lVar6 + 8))(puVar5,lVar4);
  if (bVar3) {
    FUN_1008c4a80();
    FUN_1008c5978();
    (**(code **)(**(long **)(param_1 + 0x40) + 0x88))();
    *puVar5 = 2;
    FUN_1000f7830(&DAT_100feb2c8,&DAT_100c82960);
    Swift::CheckedContinuation::resume();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008c64dc);
  (*pcVar1)();
}



/* Address: 0x1008c64dc | FUN_1008c64dc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1008c64dc(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  DispatchPredicate DVar2;
  bool bVar3;
  undefined7 extraout_var;
  ulong *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long unaff_x20;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  code *pcVar12;
  ulong uVar13;
  ulong uVar14;
  code *pcVar15;
  ulong auStack_c0 [2];
  undefined1 auStack_b0 [24];
  ulong local_98;
  code *pcStack_90;
  undefined *local_88;
  code *pcStack_80;
  undefined *local_78;
  ulong uStack_70;
  long local_68;
  ulong *puVar4;
  
  DVar2 = Dispatch::DispatchPredicate::typeMetadataAccessor();
  puVar4 = (ulong *)CONCAT71(extraout_var,DVar2.value);
  uVar14 = puVar4[-1];
  puVar10 = (undefined8 *)
            ((long)auStack_c0 - (*(long *)(uVar14 + 0x40) + 0xfU & 0xfffffffffffffff0));
  puVar5 = puVar4;
  (**(code **)(**(long **)(unaff_x20 + 0x18) + 0x88))();
  auStack_c0[1] = *puVar5;
  *puVar5 = auStack_c0[1] + 1;
  (**(code **)(**(long **)(unaff_x20 + 0x10) + 0x88))();
  uVar13 = *puVar5;
  puVar6 = &DAT_100f0d6d8;
  _swift_allocObject(&DAT_100f0d6d8,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = param_1;
  *(undefined8 *)(puVar6 + 0x18) = param_2;
  uVar11 = *(undefined8 *)(unaff_x20 + 0x38);
  *puVar10 = uVar11;
  uVar1 = *(undefined4 *)
           PTR___enum_case_for_Dispatch_DispatchPredicate_onQueue_Dispatch_DispatchPredicate_Type___>____C_OS_dispatch_queue___>_Dispatch_DispatchPredicate_100eae750
  ;
  pcVar12 = *(code **)(uVar14 + 0x68);
  (*pcVar12)(puVar10,uVar1,puVar4);
  _swift_retain(param_2);
  bVar3 = Dispatch::_dispatchPreconditionTest((DispatchPredicate)(__int8)puVar10);
  pcVar15 = *(code **)(uVar14 + 8);
  (*pcVar15)(puVar10,puVar4);
  if (!bVar3) {
                    /* WARNING: Does not return */
    pcVar12 = (code *)SoftwareBreakpoint(1,0x1008c66fc);
    (*pcVar12)();
  }
  *puVar10 = uVar11;
  (*pcVar12)(puVar10,uVar1,puVar4);
  bVar3 = Dispatch::_dispatchPreconditionTest((DispatchPredicate)(__int8)puVar10);
  (*pcVar15)(puVar10,puVar4);
  if (bVar3) {
    lVar9 = *(long *)(unaff_x20 + 0x30);
    if (lVar9 != -1) {
      if (0x7ffffffffffffffe < uVar13) {
        uVar13 = 0x7fffffffffffffff;
      }
      *(long *)(unaff_x20 + 0x30) = lVar9 + 1;
      puVar7 = &DAT_100f0d700;
      _swift_allocObject(&DAT_100f0d700,0x28,7);
      *(code **)(puVar7 + 0x10) = FUN_1006227e0;
      *(undefined **)(puVar7 + 0x18) = puVar6;
      *(undefined8 *)(puVar7 + 0x20) = 0;
      puVar8 = &DAT_100f0d728;
      _swift_allocObject(&DAT_100f0d728,0x18,7);
      *(undefined8 *)(puVar8 + 0x10) = 0;
      local_98 = auStack_c0[1];
      pcStack_90 = FUN_1008c8304;
      pcStack_80 = FUN_1008c8310;
      local_88 = puVar7;
      local_78 = puVar8;
      uStack_70 = uVar13;
      local_68 = lVar9;
      _swift_beginAccess(unaff_x20 + 0x20,auStack_b0,0x21,0);
      _swift_retain(puVar6);
      FUN_1008c75a8(&local_98);
      _swift_endAccess(auStack_b0);
      _swift_release(puVar6);
      _swift_release(puVar8);
      _swift_release(puVar7);
      return;
    }
                    /* WARNING: Does not return */
    pcVar12 = (code *)SoftwareBreakpoint(1,0x1008c6704);
    (*pcVar12)();
  }
                    /* WARNING: Does not return */
  pcVar12 = (code *)SoftwareBreakpoint(1,0x1008c6700);
  (*pcVar12)();
}



/* Address: 0x1008c6704 | FUN_1008c6704 */

void FUN_1008c6704(code *param_1)

{
  (*param_1)();
  return;
}



/* Address: 0x1008c6724 | FUN_1008c6724 */

ulong * FUN_1008c6724(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong *unaff_x20;
  code *pcVar5;
  
  puVar2 = unaff_x20;
  FUN_1008c83b4();
  pcVar5 = *(code **)(*(long *)unaff_x20[3] + 0x88);
  puVar3 = unaff_x20;
  _swift_unknownObjectRetain();
  (*pcVar5)();
  uVar1 = *puVar3;
  *puVar3 = uVar1 + 1;
  (**(code **)(*(long *)unaff_x20[2] + 0x88))();
  uVar4 = *puVar3;
  if (0x7ffffffffffffffe < uVar4) {
    uVar4 = 0x7fffffffffffffff;
  }
  _swift_retain(puVar2);
  FUN_1008c34dc(uVar1,uVar4,puVar2,param_1,param_2,param_3);
  _swift_release(puVar2);
  return puVar2;
}



/* Address: 0x1008c67ec | FUN_1008c67ec */

undefined8
FUN_1008c67ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  char local_68;
  
  FUN_1008c436c(&local_90,param_4,param_4);
  if (local_68 != '\x01') {
    _swift_retain(uStack_88);
    FUN_1008c34dc(local_90,param_1,uStack_88,param_2,param_3,param_4);
    _swift_release_n(uStack_88,2);
    local_90 = local_80;
  }
  return local_90;
}



/* Address: 0x1008c68ac | FUN_1008c68ac */

void FUN_1008c68ac(void)

{
  FUN_1008c68b8();
  return;
}



/* Address: 0x1008c68b8 | FUN_1008c68b8 */

void FUN_1008c68b8(ulong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *UNRECOVERED_JUMPTABLE)

{
  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  long unaff_x20;
  
  puVar2 = param_1;
  (**(code **)(**(long **)(unaff_x20 + 0x10) + 0x88))();
  uVar3 = *puVar2;
  if (0x7ffffffffffffffe < uVar3) {
    uVar3 = 0x7fffffffffffffff;
  }
  uVar1 = 0x7fffffffffffffff;
  if (!SCARRY8(uVar3,(long)param_1)) {
    uVar1 = uVar3 + (long)param_1 & ((long)(uVar3 + (long)param_1) >> 0x3f ^ 0xffffffffffffffffU);
  }
                    /* WARNING: Could not recover jumptable at 0x0001008c6938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1,param_2,param_3,param_4);
  return;
}



/* Address: 0x1008c693c | FUN_1008c693c */

void FUN_1008c693c(void)

{
  FUN_1008c6954();
  return;
}



/* Address: 0x1008c6948 | FUN_1008c6948 */

void FUN_1008c6948(void)

{
  FUN_1008c6954();
  return;
}



/* Address: 0x1008c6954 | FUN_1008c6954 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1008c6954(void)

{
  code *pcVar1;
  DispatchPredicate DVar2;
  bool bVar3;
  undefined7 extraout_var;
  undefined4 *in_x4;
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
  (**(code **)(lVar6 + 0x68))(puVar5,*in_x4,lVar4);
  bVar3 = Dispatch::_dispatchPreconditionTest((DispatchPredicate)(__int8)puVar5);
  (**(code **)(lVar6 + 8))(puVar5,lVar4);
  if (bVar3) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008c69f4);
  (*pcVar1)();
}



/* Address: 0x1008c69f4 | FUN_1008c69f4 */

void FUN_1008c69f4(DispatchQoS param_1,undefined8 param_2)

{
  DispatchWorkItemFlags DVar1;
  DispatchQoS DVar2;
  undefined *puVar3;
  void *aBlock;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_b0 [8];
  undefined *local_a8;
  undefined8 local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  DVar1 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  lVar9 = *(long *)(DVar1.unknown + -8);
  puVar7 = auStack_b0 + -(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  DVar2 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar8 = *(long *)(DVar2.unknown + -8);
  lVar6 = *(long *)(lVar8 + 0x40);
  FUN_1008c1058(0);
  if (DAT_100feb2b0 != -1) {
    _swift_once(&DAT_100feb2b0,FUN_1008c3000);
  }
  (extension_Dispatch)::__C::OS_dispatch_queue::_getSpecific();
  if ((local_90 == (undefined *)0x0) || (param_1.unknown != local_90)) {
    local_a0 = *(undefined8 *)(param_1.unknown + 0x38);
    puVar3 = &DAT_100f0dc20;
    _swift_allocObject(&DAT_100f0dc20,0x20,7);
    *(undefined **)(puVar3 + 0x10) = param_1.unknown;
    *(undefined8 *)(puVar3 + 0x18) = param_2;
    local_70 = FUN_1008c8968;
    local_90 = PTR___NSConcreteStackBlock_100ea82a0;
    local_88 = 0x42000000;
    local_80 = FUN_100030410;
    puStack_78 = &DAT_100f0dc38;
    local_68 = puVar3;
    aBlock = __Block_copy(&local_90);
    _swift_retain();
    Dispatch::DispatchQoS::get_unspecified(param_1);
    local_98 = PTR___swiftEmptyArrayStorage_100eae0d8;
    puVar3 = &DAT_100feb250;
    FUN_1003b6598(&DAT_100feb250,0xff,PTR_typeMetadataAccessor_100eae670,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_100eae680);
    puVar4 = &DAT_100feb258;
    local_a8 = DVar2.unknown;
    FUN_1000f7830(&DAT_100feb258,&DAT_100c828c0);
    puVar5 = &DAT_100feb260;
    FUN_100134584(&DAT_100feb260,&DAT_100feb258,&DAT_100c828c0,
                  PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530);
    Swift::SetAlgebra::_init(puVar7,&local_98,puVar4,puVar5,DVar1.unknown,puVar3);
    (extension_Dispatch)::__C::OS_dispatch_queue::_async
              ((DispatchQoS)0x0,
               (DispatchWorkItemFlags)(puVar7 + -(lVar6 + 0xfU & 0xfffffffffffffff0)));
    __Block_release(aBlock);
    (**(code **)(lVar9 + 8))(puVar7,DVar1.unknown);
    (**(code **)(lVar8 + 8))(puVar7 + -(lVar6 + 0xfU & 0xfffffffffffffff0),local_a8);
    _swift_release(local_68);
  }
  else {
    FUN_1008c33d0(param_2);
  }
  return;
}



/* Address: 0x1008c6c40 | FUN_1008c6c40 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1008c6c40(void)

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
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008c6cb0);
  (*pcVar1)();
}


