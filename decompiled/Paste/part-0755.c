/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100852940 | FUN_100852940 */

void FUN_100852940(void)

{
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x1c8));
  _swift_task_switch(FUN_100852990,0,0);
  return;
}



/* Address: 0x100852990 | FUN_100852990 */

void FUN_100852990(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined8 *puVar5;
  char *pcVar6;
  UnsafeContinuation UVar7;
  undefined *puVar8;
  long *plVar9;
  TaskGroup TVar10;
  code *pcVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  Task TVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long unaff_x22;
  long lVar18;
  Task TVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long lVar22;
  
  uVar17 = *(undefined8 *)(unaff_x22 + 0x1b0);
  lVar12 = *(long *)(unaff_x22 + 0x198);
  (**(code **)(*(long *)(unaff_x22 + 0x1a8) + 0x10))
            (uVar17,*(undefined8 *)(unaff_x22 + 0x1b8),*(undefined8 *)(unaff_x22 + 0x1a0));
  (**(code **)(*(long *)(lVar12 + -8) + 0x30))(uVar17,1,lVar12);
  if ((int)uVar17 != 1) {
    uVar14 = *(undefined8 *)(unaff_x22 + 0x1b0);
    uVar17 = uVar14;
    _swift_getEnumCaseMultiPayload(uVar14,*(undefined8 *)(unaff_x22 + 0x198));
    if ((int)uVar17 == 1) {
      uVar20 = *(undefined8 *)(unaff_x22 + 400);
      uVar17 = *(undefined8 *)(unaff_x22 + 0x178);
      lVar22 = *(long *)(unaff_x22 + 0x168);
      uVar21 = *(undefined8 *)(unaff_x22 + 0x170);
      lVar18 = *(long *)(unaff_x22 + 0x158);
      uVar2 = *(undefined8 *)(unaff_x22 + 0x160);
      uVar1 = *(undefined8 *)(unaff_x22 + 0x138);
      uVar16 = *(undefined8 *)(unaff_x22 + 0x140);
      uVar3 = *(undefined8 *)(unaff_x22 + 0x130);
      lVar12 = *(long *)(unaff_x22 + 0x128) + *(long *)(unaff_x22 + 0x1c0);
      pcVar11 = *(code **)(*(long *)(unaff_x22 + 0x180) + 0x20);
      (*pcVar11)(uVar20,uVar14,uVar1);
      _os_unfair_lock_lock(lVar12);
      FUN_10084a568(0xff,uVar3,uVar1,uVar16);
      Synchronization::Mutex::typeMetadataAccessor();
      uVar14 = 0;
      FUN_10084a568(0,uVar3,uVar1,uVar16);
      FUN_10084cd40(uVar17,uVar20,uVar14);
      _os_unfair_lock_unlock(lVar12);
      (**(code **)(lVar22 + 0x10))(uVar21,uVar17,uVar2);
      (**(code **)(*(long *)(lVar18 + -8) + 0x30))(uVar21,1,lVar18);
      if ((int)uVar21 != 1) {
        puVar13 = *(undefined8 **)(unaff_x22 + 0x170);
        puVar5 = puVar13;
        _swift_getEnumCaseMultiPayload(puVar13,*(undefined8 *)(unaff_x22 + 0x158));
        TVar15.unknown = (undefined *)*puVar13;
        if ((int)puVar5 == 1) {
          uVar17 = *(undefined8 *)(unaff_x22 + 0x188);
          uVar14 = *(undefined8 *)(unaff_x22 + 0x138);
          pcVar6 = (char *)0x40;
          _swift_task_alloc();
          builtin_strncpy(pcVar6,"downstreamContinuation error task upstreamContinuations ",0x39);
          UVar7 = Swift::UnsafeContinuation::typeMetadataAccessor();
          *(undefined **)(unaff_x22 + 0xc0) = UVar7.unknown;
          *(undefined8 *)(unaff_x22 + 200) = uVar14;
          puVar8 = &DAT_100fe7c30;
          FUN_1000f8b08(&DAT_100fe7c30,&DAT_100c7d2b0);
          *(undefined **)(unaff_x22 + 0xd0) = puVar8;
          puVar8 = &DAT_100fe7c38;
          FUN_1000f8b08(&DAT_100fe7c38,&DAT_100c7d2b8);
          *(undefined **)(unaff_x22 + 0xd8) = puVar8;
          lVar12 = 0;
          _swift_getTupleTypeMetadata(0,0x10004,unaff_x22 + 0xc0,pcVar6,0);
          _swift_task_dealloc(pcVar6);
          TVar19.unknown = *(undefined **)((long)puVar13 + (long)*(int *)(lVar12 + 0x40));
          lVar22 = *(long *)((long)puVar13 + (long)*(int *)(lVar12 + 0x50));
          (*pcVar11)(uVar17,(long)puVar13 + (long)*(int *)(lVar12 + 0x30),uVar14);
          Swift::Task::cancel(TVar19);
          lVar12 = *(long *)(lVar22 + 0x10);
          if (lVar12 != 0) {
            puVar5 = (undefined8 *)(lVar22 + 0x20);
            do {
              _swift_continuation_throwingResume(*puVar5);
              lVar12 = lVar12 + -1;
              puVar5 = puVar5 + 1;
            } while (lVar12 != 0);
          }
          lVar12 = *(long *)(unaff_x22 + 0x180);
          uVar14 = *(undefined8 *)(unaff_x22 + 0x188);
          uVar17 = *(undefined8 *)(unaff_x22 + 0x148);
          uVar1 = *(undefined8 *)(unaff_x22 + 0x150);
          uVar21 = *(undefined8 *)(unaff_x22 + 0x138);
          _swift_bridgeObjectRelease(lVar22);
          (**(code **)(lVar12 + 0x10))(uVar1,uVar14,uVar21);
          _swift_storeEnumTagMultiPayload(uVar1,uVar17,1);
          FUN_10072e9c0(uVar1,TVar15.unknown,uVar17);
          _swift_release(TVar19.unknown);
          (**(code **)(lVar12 + 8))(uVar14,uVar21);
        }
        else {
          lVar22 = puVar13[1];
          Swift::Task::cancel(TVar15);
          lVar12 = *(long *)(lVar22 + 0x10);
          if (lVar12 != 0) {
            lVar18 = 0x20;
            do {
              _swift_continuation_throwingResume(*(undefined8 *)(lVar22 + lVar18));
              lVar18 = lVar18 + 8;
              lVar12 = lVar12 + -1;
            } while (lVar12 != 0);
          }
          _swift_bridgeObjectRelease(lVar22);
          _swift_release(TVar15.unknown);
        }
      }
      uVar16 = *(undefined8 *)(unaff_x22 + 0x1b8);
      uVar1 = *(undefined8 *)(unaff_x22 + 0x1a0);
      lVar12 = *(long *)(unaff_x22 + 0x1a8);
      uVar14 = *(undefined8 *)(unaff_x22 + 400);
      uVar21 = *(undefined8 *)(unaff_x22 + 0x178);
      lVar22 = *(long *)(unaff_x22 + 0x180);
      uVar2 = *(undefined8 *)(unaff_x22 + 0x160);
      lVar18 = *(long *)(unaff_x22 + 0x168);
      uVar17 = *(undefined8 *)(unaff_x22 + 0x138);
      Swift::TaskGroup::cancelAll((undefined *)**(undefined8 **)(unaff_x22 + 0x118));
      (**(code **)(lVar18 + 8))(uVar21,uVar2);
      (**(code **)(lVar12 + 8))(uVar16,uVar1);
      pcVar11 = *(code **)(lVar22 + 8);
      goto LAB_100852d5c;
    }
  }
  uVar14 = *(undefined8 *)(unaff_x22 + 0x1b8);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x1a0);
  pcVar11 = *(code **)(*(long *)(unaff_x22 + 0x1a8) + 8);
LAB_100852d5c:
  (*pcVar11)(uVar14,uVar17);
  bVar4 = Swift::TaskGroup::get_isEmpty((undefined *)**(undefined8 **)(unaff_x22 + 0x118));
  if (bVar4) {
    uVar17 = *(undefined8 *)(unaff_x22 + 0x1b0);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x188);
    uVar21 = *(undefined8 *)(unaff_x22 + 400);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x170);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x178);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x150);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x1b8));
    _swift_task_dealloc(uVar17);
    _swift_task_dealloc(uVar21);
    _swift_task_dealloc(uVar14);
    _swift_task_dealloc(uVar2);
    _swift_task_dealloc(uVar1);
    _swift_task_dealloc(uVar16);
                    /* WARNING: Could not recover jumptable at 0x000100852dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  plVar9 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x1c8) = plVar9;
  TVar10 = Swift::TaskGroup::typeMetadataAccessor();
  *plVar9 = unaff_x22;
  plVar9[1] = (long)FUN_100852940;
  FUN_100853b00(*(undefined8 *)(unaff_x22 + 0x1b8),0,0,TVar10.unknown);
  return;
}



/* Address: 0x100852e58 | FUN_100852e58 */

void FUN_100852e58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5,undefined8 param_6)

{
  Result RVar1;
  Optional OVar2;
  undefined7 extraout_var;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined7 extraout_var_00;
  undefined7 extraout_var_01;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x22;
  
  *(long **)(unaff_x22 + 0x90) = param_5;
  *(undefined8 *)(unaff_x22 + 0x98) = param_6;
  *(undefined8 *)(unaff_x22 + 0x80) = param_1;
  *(undefined8 *)(unaff_x22 + 0x88) = param_4;
  lVar8 = *param_5;
  lVar7 = *(long *)(lVar8 + 0x50);
  *(long *)(unaff_x22 + 0xa0) = lVar7;
  Swift::Array<undefined>::typeMetadataAccessor();
  Swift::Optional::typeMetadataAccessor();
  lVar6 = *(long *)(lVar8 + 0x58);
  *(long *)(unaff_x22 + 0xa8) = lVar6;
  uVar9 = *(undefined8 *)(lVar8 + 0x60);
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar9;
  RVar1 = Swift::Result::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0xb8) = CONCAT71(extraout_var,RVar1.value);
  lVar8 = *(long *)(CONCAT71(extraout_var,RVar1.value) + -8);
  *(long *)(unaff_x22 + 0xc0) = lVar8;
  uVar4 = *(long *)(lVar8 + 0x40) + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 200) = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xd0) = uVar4;
  uVar5 = 0xff;
  FUN_10084e8d8(0xff,lVar7,lVar6,uVar9);
  *(undefined8 *)(unaff_x22 + 0xd8) = uVar5;
  OVar2 = Swift::Optional::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0xe0) = CONCAT71(extraout_var_00,OVar2.value);
  lVar8 = *(long *)(CONCAT71(extraout_var_00,OVar2.value) + -8);
  *(long *)(unaff_x22 + 0xe8) = lVar8;
  uVar4 = *(long *)(lVar8 + 0x40) + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xf0) = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xf8) = uVar4;
  lVar8 = *(long *)(lVar7 + -8);
  *(long *)(unaff_x22 + 0x100) = lVar8;
  uVar4 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x108) = uVar4;
  lVar8 = *(long *)(lVar6 + -8);
  *(long *)(unaff_x22 + 0x110) = lVar8;
  uVar4 = *(long *)(lVar8 + 0x40) + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x118) = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x120) = uVar4;
  OVar2 = Swift::Optional::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x128) = CONCAT71(extraout_var_01,OVar2.value);
  lVar8 = *(long *)(CONCAT71(extraout_var_01,OVar2.value) + -8);
  *(long *)(unaff_x22 + 0x130) = lVar8;
  uVar4 = *(long *)(lVar8 + 0x40) + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x138) = uVar3;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x140) = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x148) = uVar4;
  _swift_task_switch(FUN_100852ff0,0,0);
  return;
}



/* Address: 0x100852ff0 | FUN_100852ff0 */

void FUN_100852ff0(void)

{
  long lVar1;
  long *plVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  long lVar7;
  
  lVar7 = *(long *)(unaff_x22 + 0x88);
  plVar2 = *(long **)(unaff_x22 + 0x90);
  lVar1 = *(long *)(lVar7 + 0x18);
  uVar6 = *(undefined8 *)(lVar7 + 0x20);
  FUN_100004640(lVar7,lVar1);
  lVar7 = *(long *)(lVar1 + -8);
  uVar4 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar4);
  (**(code **)(lVar7 + 0x10))();
  puVar3 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar6,lVar1,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  *(undefined8 *)(unaff_x22 + 0x68) = uVar5;
  _swift_getAssociatedConformanceWitness
            (uVar6,lVar1,uVar5,puVar3,
             PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
            );
  *(undefined8 *)(unaff_x22 + 0x70) = uVar6;
  FUN_10000cbb0(unaff_x22 + 0x50);
  Swift::AsyncSequence::_makeAsyncIterator();
  _swift_task_dealloc(uVar4);
  *(undefined8 *)(unaff_x22 + 0x150) = *(undefined8 *)(*plVar2 + 0x68);
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_10085310c;
  _swift_continuation_init(unaff_x22 + 0x10,0);
  FUN_10085388c();
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}



/* Address: 0x10085310c | FUN_10085310c */

void FUN_10085310c(void)

{
  _swift_task_switch(FUN_100853154,0,0);
  return;
}



/* Address: 0x100853154 | FUN_100853154 */

void FUN_100853154(void)

{
  long *plVar1;
  long unaff_x22;
  
  FUN_10007d048(unaff_x22 + 0x50,*(undefined8 *)(unaff_x22 + 0x68));
  plVar1 = (long *)(ulong)*(uint *)(PTR__next_100eaebb0 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x158) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1008531dc;
  Swift::AsyncIteratorProtocol::_next();
  return;
}



/* Address: 0x1008531dc | FUN_1008531dc */

void FUN_1008531dc(void)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x158));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10085323c;
  }
  else {
    pcVar1 = FUN_1008536e0;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x10085323c | FUN_10085323c */

void FUN_10085323c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  Result RVar5;
  undefined8 uVar6;
  Task TVar7;
  Task TVar8;
  UnsafeContinuation UVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long unaff_x22;
  undefined8 uVar14;
  long lVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined8 uVar18;
  code *pcVar19;
  
  uVar12 = *(undefined8 *)(unaff_x22 + 0x148);
  lVar15 = *(long *)(unaff_x22 + 0x130);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x128);
  lVar17 = *(long *)(unaff_x22 + 0x100);
  uVar14 = *(undefined8 *)(unaff_x22 + 0xa0);
  (**(code **)(lVar15 + 0x20))(uVar12,*(undefined8 *)(unaff_x22 + 0x140),uVar11);
  (**(code **)(lVar15 + 0x10))(uVar6,uVar12,uVar11);
  (**(code **)(lVar17 + 0x30))(uVar6,1,uVar14);
  if ((int)uVar6 != 1) {
    uVar14 = *(undefined8 *)(unaff_x22 + 0x108);
    uVar12 = *(undefined8 *)(unaff_x22 + 0xf0);
    uVar1 = *(undefined8 *)(unaff_x22 + 0xf8);
    lVar10 = *(long *)(unaff_x22 + 0xe8);
    lVar17 = *(long *)(unaff_x22 + 0xd8);
    uVar2 = *(undefined8 *)(unaff_x22 + 0xe0);
    uVar6 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar3 = *(undefined8 *)(unaff_x22 + 0xb0);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x98);
    uVar4 = *(undefined8 *)(unaff_x22 + 0xa0);
    lVar15 = *(long *)(unaff_x22 + 0x90) + *(long *)(unaff_x22 + 0x150);
    (**(code **)(*(long *)(unaff_x22 + 0x100) + 0x20))
              (uVar14,*(undefined8 *)(unaff_x22 + 0x138),uVar4);
    _os_unfair_lock_lock(lVar15);
    FUN_10084a568(0xff,uVar4,uVar6,uVar3);
    Synchronization::Mutex::typeMetadataAccessor();
    uVar13 = 0;
    FUN_10084a568(0,uVar4,uVar6,uVar3);
    FUN_10084bd6c(uVar1,uVar14,uVar11,uVar13);
    _os_unfair_lock_unlock(lVar15);
    (**(code **)(lVar10 + 0x10))(uVar12,uVar1,uVar2);
    (**(code **)(*(long *)(lVar17 + -8) + 0x30))(uVar12,1,lVar17);
    if ((int)uVar12 != 1) {
      puVar16 = *(undefined8 **)(unaff_x22 + 0xf0);
      uVar12 = *(undefined8 *)(unaff_x22 + 200);
      uVar11 = *(undefined8 *)(unaff_x22 + 0xd0);
      uVar6 = *(undefined8 *)(unaff_x22 + 0xb8);
      lVar15 = *(long *)(unaff_x22 + 0xc0);
      uVar14 = *puVar16;
      UVar9 = Swift::UnsafeContinuation::typeMetadataAccessor();
      lVar17 = 0;
      _swift_getTupleTypeMetadata2(0,UVar9.unknown,uVar6,"downstreamContinuation result ",0);
      (**(code **)(lVar15 + 0x20))(uVar11,(long)puVar16 + (long)*(int *)(lVar17 + 0x30),uVar6);
      (**(code **)(lVar15 + 0x10))(uVar12,uVar11,uVar6);
      FUN_10072e9c0(uVar12,uVar14,uVar6);
      (**(code **)(lVar15 + 8))(uVar11,uVar6);
    }
    uVar11 = *(undefined8 *)(unaff_x22 + 0x148);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x128);
    lVar17 = *(long *)(unaff_x22 + 0x130);
    lVar15 = *(long *)(unaff_x22 + 0x100);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x108);
    uVar14 = *(undefined8 *)(unaff_x22 + 0xa0);
    (**(code **)(*(long *)(unaff_x22 + 0xe8) + 8))
              (*(undefined8 *)(unaff_x22 + 0xf8),*(undefined8 *)(unaff_x22 + 0xe0));
    (**(code **)(lVar17 + 8))(uVar11,uVar12);
    (**(code **)(lVar15 + 8))(uVar6,uVar14);
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_10085310c;
    _swift_continuation_init(unaff_x22 + 0x10,0);
    FUN_10085388c();
    _swift_continuation_await(unaff_x22 + 0x10);
    return;
  }
  lVar17 = *(long *)(unaff_x22 + 0xa8);
  uVar12 = *(undefined8 *)(unaff_x22 + 0xb0);
  TVar8.unknown = *(undefined **)(unaff_x22 + 0x98);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xa0);
  lVar15 = *(long *)(unaff_x22 + 0x90) + *(long *)(unaff_x22 + 0x150);
  pcVar19 = *(code **)(*(long *)(unaff_x22 + 0x130) + 8);
  (*pcVar19)(*(undefined8 *)(unaff_x22 + 0x138),*(undefined8 *)(unaff_x22 + 0x128));
  _os_unfair_lock_lock(lVar15);
  FUN_10084a568(0xff,uVar6,lVar17,uVar12);
  Synchronization::Mutex::typeMetadataAccessor();
  TVar7.unknown = (undefined *)0x0;
  lVar10 = lVar17;
  FUN_10084a568(0,uVar6,lVar17,uVar12);
  FUN_10084c45c();
  FUN_10084e9e0(0xff,uVar6,lVar17,uVar12);
  Swift::Optional::typeMetadataAccessor();
  _os_unfair_lock_unlock(lVar15);
  if ((((ulong)TVar8.unknown ^ 0xffffffffffffffff) & 0xf000000000000007) != 0) {
    if ((long)TVar8.unknown < 0) {
      Swift::Task::cancel(TVar7);
      lVar15 = *(long *)(lVar10 + 0x10);
      if (lVar15 != 0) {
        puVar16 = (undefined8 *)(lVar10 + 0x20);
        do {
          _swift_continuation_throwingResume(*puVar16);
          lVar15 = lVar15 + -1;
          puVar16 = puVar16 + 1;
        } while (lVar15 != 0);
      }
      puVar16 = *(undefined8 **)(unaff_x22 + 0xd0);
      uVar12 = *(undefined8 *)(unaff_x22 + 0xb8);
      *puVar16 = 0;
      _swift_storeEnumTagMultiPayload(puVar16,uVar12,0);
      FUN_10072e9c0(puVar16,(ulong)TVar8.unknown & 0x7fffffffffffffff,uVar12);
    }
    else {
      Swift::Task::cancel(TVar8);
      lVar15 = *(long *)(TVar7.unknown + 0x10);
      if (lVar15 != 0) {
        puVar16 = (undefined8 *)(TVar7.unknown + 0x20);
        do {
          _swift_continuation_throwingResume(*puVar16);
          lVar15 = lVar15 + -1;
          puVar16 = puVar16 + 1;
        } while (lVar15 != 0);
      }
    }
    FUN_100774858(TVar8.unknown,TVar7.unknown,lVar10);
  }
  uVar12 = *(undefined8 *)(unaff_x22 + 0x80);
  (*pcVar19)(*(undefined8 *)(unaff_x22 + 0x148),*(undefined8 *)(unaff_x22 + 0x128));
  RVar5 = Swift::Result::typeMetadataAccessor();
  _swift_storeEnumTagMultiPayload(uVar12,RVar5.value,0);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar11 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar14 = *(undefined8 *)(unaff_x22 + 200);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xd0);
  FUN_100004594(unaff_x22 + 0x50);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar18);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar14);
                    /* WARNING: Could not recover jumptable at 0x0001008536dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1008536e0 | FUN_1008536e0 */

void FUN_1008536e0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  Result RVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x22;
  code *pcVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  lVar8 = *(long *)(unaff_x22 + 0x118);
  uVar11 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar14 = *(undefined8 *)(unaff_x22 + 0xb0);
  pcVar13 = *(code **)(*(long *)(unaff_x22 + 0x110) + 0x20);
  (*pcVar13)(lVar8,*(undefined8 *)(unaff_x22 + 0x120),uVar11);
  Swift::__getErrorEmbeddedNSError(lVar8,uVar11,uVar14);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x118);
  lVar10 = *(long *)(unaff_x22 + 0xa8);
  if (lVar8 == 0) {
    uVar14 = *(undefined8 *)(unaff_x22 + 0xb0);
    lVar8 = lVar10;
    _swift_allocError(lVar10,uVar14,0,0);
    (*pcVar13)(uVar14,uVar11,lVar10);
  }
  else {
    (**(code **)(*(long *)(unaff_x22 + 0x110) + 8))(uVar11);
  }
  uVar11 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x80);
  *(long *)(unaff_x22 + 0x78) = lVar8;
  puVar9 = &DAT_100fe7218;
  FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
  _swift_dynamicCast(uVar14,(long *)(unaff_x22 + 0x78),puVar9,uVar11,7);
  RVar7 = Swift::Result::typeMetadataAccessor();
  _swift_storeEnumTagMultiPayload(uVar14,RVar7.value,1);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar2 = *(undefined8 *)(unaff_x22 + 200);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xd0);
  FUN_100004594(unaff_x22 + 0x50);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000100853888. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10085388c | FUN_10085388c */

void FUN_10085388c(undefined8 param_1,long *param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar5 = *param_2;
  lVar1 = (long)param_2 + *(long *)(lVar5 + 0x68);
  _os_unfair_lock_lock(lVar1);
  uVar2 = *(undefined8 *)(lVar5 + 0x50);
  uVar3 = *(undefined8 *)(lVar5 + 0x58);
  uVar6 = *(undefined8 *)(lVar5 + 0x60);
  FUN_10084a568(0xff,uVar2,uVar3,uVar6);
  Synchronization::Mutex::typeMetadataAccessor();
  uVar4 = 0;
  FUN_10084a568(0,uVar2,uVar3,uVar6);
  FUN_10084bb90(param_3,param_1,uVar4);
  FUN_10084e9d4(0xff,uVar2,uVar3,uVar6);
  Swift::Optional::typeMetadataAccessor();
  _os_unfair_lock_unlock(lVar1);
  if (param_3 != 0) {
    _swift_continuation_throwingResume(param_3);
  }
  return;
}



/* Address: 0x100853964 | FUN_100853964 */

void FUN_100853964(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  __uint8 _Var1;
  undefined *puVar2;
  TaskPriority TVar3;
  TaskPriority TVar4;
  UnownedSerialExecutor UVar5;
  undefined8 uVar6;
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
  
  puVar2 = &DAT_100fe7fc0;
  FUN_1000f7830(&DAT_100fe7fc0,&DAT_100c7d458);
  puVar2 = auStack_a0 + -(*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_1008544b0(param_1,puVar2);
  TVar3 = Swift::TaskPriority::typeMetadataAccessor();
  lVar10 = *(long *)(TVar3.unknown + -8);
  TVar4.unknown = puVar2;
  (**(code **)(lVar10 + 0x30))(puVar2,1,TVar3.unknown);
  if ((int)TVar4.unknown == 1) {
    FUN_100854500(puVar2);
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
  puVar2 = &DAT_100f06be8;
  _swift_allocObject(&DAT_100f06be8,0x28,7);
  uVar6 = *(undefined8 *)(param_4 + 0x10);
  *(undefined8 *)(puVar2 + 0x10) = uVar6;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  *(long *)(puVar2 + 0x20) = param_3;
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
  _swift_task_create(uVar8,&local_98,uVar6,&DAT_100c7d4c8,puVar2);
  _swift_release();
  return;
}



/* Address: 0x100853b00 | FUN_100853b00 */

void FUN_100853b00(TaskGroup param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  long *plVar2;
  long unaff_x22;
  
  bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar1 & 1) != 0) {
    plVar2 = (long *)(ulong)*(uint *)(PTR__next_100eaeb70 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x18) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_1005cd444;
    Swift::TaskGroup::_next(param_1);
    return;
  }
  plVar2 = (long *)0x60;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1005c804c;
  FUN_1008542cc(plVar2,param_1.unknown,param_2,param_3,param_4);
  return;
}



/* Address: 0x100853c04 | FUN_100853c04 */

void FUN_100853c04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  long *plVar2;
  long unaff_x22;
  
  bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar1 & 1) != 0) {
    plVar2 = (long *)(ulong)*(uint *)(PTR__withTaskGroup_100eaeec0 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x18) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)thunk_FUN_1005cd444;
    Swift::_withTaskGroup();
    return;
  }
  plVar2 = (long *)0x160;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)thunk_FUN_1005c804c;
  FUN_1008540f8(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



/* Address: 0x100853d5c | FUN_100853d5c */

void FUN_100853d5c(char *param_1,void *param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5)

{
  __uint8 _Var1;
  undefined *puVar2;
  TaskPriority TVar3;
  undefined1 *puVar4;
  TaskPriority TVar5;
  UnownedSerialExecutor UVar6;
  ContiguousArray<__int8> CVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  String SVar13;
  undefined1 auStack_c0 [8];
  undefined8 local_b8;
  undefined8 *puStack_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined *local_90;
  long lStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined *local_70;
  long lStack_68;
  
  puVar2 = &DAT_100fe7fc0;
  FUN_1000f7830(&DAT_100fe7fc0,&DAT_100c7d458);
  puVar9 = auStack_c0 + -(*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_1008544b0(param_3,puVar9);
  TVar3 = Swift::TaskPriority::typeMetadataAccessor();
  lVar12 = *(long *)(TVar3.unknown + -8);
  puVar4 = puVar9;
  (**(code **)(lVar12 + 0x30))(puVar9,1,TVar3.unknown);
  TVar5.unknown = param_5;
  _swift_retain();
  if ((int)puVar4 == 1) {
    FUN_100854500(puVar9);
    uVar10 = 0x1c00;
  }
  else {
    _Var1 = Swift::TaskPriority::get_rawValue(TVar5);
    (**(code **)(lVar12 + 8))(puVar9,TVar3.unknown);
    uVar10 = (ulong)_Var1 | 0x1c00;
  }
  lVar12 = *(long *)(param_5 + 0x10);
  lVar11 = *(long *)(param_5 + 0x18);
  _swift_unknownObjectRetain(lVar12);
  _swift_release(param_5);
  if (lVar12 == 0) {
    UVar6.unknown = (undefined *)0x0;
    lVar11 = 0;
  }
  else {
    _swift_getObjectType(lVar12);
    UVar6 = Swift::Actor::get_unownedExecutor();
    _swift_unknownObjectRelease(lVar12);
  }
  if (param_2 == (void *)0x0) {
    FUN_100854500(param_3);
    puVar2 = &DAT_100f06b70;
    _swift_allocObject(&DAT_100f06b70,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_4;
    *(undefined **)(puVar2 + 0x18) = param_5;
    if (lVar11 == 0 && UVar6.unknown == (undefined *)0x0) {
      puVar8 = (undefined8 *)0x0;
    }
    else {
      local_80 = 0;
      uStack_78 = 0;
      puVar8 = &local_80;
      local_70 = UVar6.unknown;
      lStack_68 = lVar11;
    }
    _swift_task_create(uVar10,puVar8,PTR___type_metadata_for____100eae0c8 + 8,&DAT_100c7d478,puVar2)
    ;
  }
  else {
    SVar13.bridgeObject = param_2;
    SVar13.str = param_1;
    CVar7 = Swift::String::get_utf8CString(SVar13);
    _swift_bridgeObjectRelease(param_2);
    puVar2 = &DAT_100f06b98;
    _swift_allocObject(&DAT_100f06b98,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_4;
    *(undefined **)(puVar2 + 0x18) = param_5;
    _swift_retain(param_5);
    if (lVar11 == 0 && UVar6.unknown == (undefined *)0x0) {
      puStack_b0 = (undefined8 *)0x0;
    }
    else {
      local_a0 = 0;
      uStack_98 = 0;
      puStack_b0 = &local_a0;
      local_90 = UVar6.unknown;
      lStack_88 = lVar11;
    }
    local_b8 = 7;
    local_a8 = CVar7.unknown + 0x20;
    _swift_task_create(uVar10,&local_b8,PTR___type_metadata_for____100eae0c8 + 8,&DAT_100c7d480,
                       puVar2);
    _swift_release(CVar7.unknown);
    FUN_100854500(param_3);
    _swift_release(param_5);
  }
  return;
}



/* Address: 0x100853fac | FUN_100853fac */

void FUN_100853fac(void)

{
  long lVar1;
  long *unaff_x20;
  
  lVar1 = *unaff_x20;
  FUN_10084a568(0xff,*(undefined8 *)(lVar1 + 0x50),*(undefined8 *)(lVar1 + 0x58),
                *(undefined8 *)(lVar1 + 0x60));
  Synchronization::Mutex::typeMetadataAccessor();
  Synchronization::_Cell::typeMetadataAccessor();
  FUN_1007b88d0();
  return;
}



/* Address: 0x100854014 | FUN_100854014 */

void FUN_100854014(void)

{
  FUN_100853fac();
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100854038 | FUN_100854038 */

void FUN_100854038(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100854044 | FUN_100854044 */

Mutex FUN_100854044(undefined8 *param_1)

{
  Mutex MVar1;
  
  if (PTR__swift_runtimeSupportsNoncopyableTypes_100eae408 != (undefined *)0x0) {
    FUN_10084a568(0xff,*param_1,param_1[1],param_1[2]);
    MVar1 = Synchronization::Mutex::typeMetadataAccessor();
    return (Mutex)MVar1.unknown;
  }
  return (Mutex)(PTR___type_metadata_for____100eae0c8 + 8);
}



/* Address: 0x100854050 | FUN_100854050 */

void FUN_100854050(undefined8 *param_1)

{
  FUN_10084a568(0xff,*param_1,param_1[1],param_1[2]);
  Synchronization::Mutex::typeMetadataAccessor();
  return;
}



/* Address: 0x10085408c | FUN_10085408c */

void FUN_10085408c(undefined8 param_1,int *param_2)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  iVar1 = *param_2;
  plVar2 = (long *)(ulong)(uint)param_2[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)thunk_FUN_1005dfae0;
                    /* WARNING: Could not recover jumptable at 0x0001008540f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_2))(plVar2,param_1);
  return;
}



/* Address: 0x1008540f8 | FUN_1008540f8 */

void FUN_1008540f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  UnownedSerialExecutor UVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x128) = param_7;
  *(undefined8 *)(unaff_x22 + 0x130) = param_8;
  *(undefined8 *)(unaff_x22 + 0x118) = param_1;
  *(undefined8 *)(unaff_x22 + 0x120) = param_6;
  if (param_4 == 0) {
    UVar1.unknown = (undefined *)0x0;
    param_5 = 0;
  }
  else {
    _swift_getObjectType(param_4);
    UVar1 = Swift::Actor::get_unownedExecutor();
  }
  *(undefined **)(unaff_x22 + 0x138) = UVar1.unknown;
  *(undefined8 *)(unaff_x22 + 0x140) = param_5;
  _swift_task_switch(FUN_100854170,UVar1.unknown);
  return;
}



/* Address: 0x100854170 | FUN_100854170 */

void FUN_100854170(void)

{
  int iVar1;
  TaskGroup<undefined> TVar2;
  long *plVar3;
  int *piVar4;
  long unaff_x22;
  
  piVar4 = *(int **)(unaff_x22 + 0x120);
  _swift_taskGroup_initialize(unaff_x22 + 0x10,*(undefined8 *)(unaff_x22 + 0x130));
  TVar2 = Swift::TaskGroup::init((void *)(unaff_x22 + 0x10));
  *(undefined **)(unaff_x22 + 0x110) = TVar2.unknown;
  iVar1 = *piVar4;
  plVar3 = (long *)(ulong)(uint)piVar4[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x148) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100854200;
                    /* WARNING: Could not recover jumptable at 0x0001008541fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar4))
            (plVar3,*(undefined8 *)(unaff_x22 + 0x118),unaff_x22 + 0x110);
  return;
}



/* Address: 0x100854200 | FUN_100854200 */

void FUN_100854200(void)

{
  long *plVar1;
  TaskGroup TVar2;
  long lVar3;
  long lVar4;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  lVar4 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x148));
  plVar1 = (long *)(ulong)*(uint *)(PTR__awaitAllRemainingTasks_100eaeb60 + 4);
  _swift_task_alloc();
  *(long **)(lVar3 + 0x150) = plVar1;
  TVar2 = Swift::TaskGroup::typeMetadataAccessor();
  *plVar1 = lVar4;
  plVar1[1] = (long)FUN_100854280;
  Swift::TaskGroup::_awaitAllRemainingTasks(TVar2);
  return;
}



/* Address: 0x100854280 | FUN_100854280 */

void FUN_100854280(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x150));
  _swift_task_switch(FUN_1007709dc,*(undefined8 *)(lVar1 + 0x138),*(undefined8 *)(lVar1 + 0x140));
  return;
}



/* Address: 0x1008542cc | FUN_1008542cc */

void FUN_1008542cc(undefined8 param_1,long param_2,undefined8 param_3)

{
  UnownedSerialExecutor UVar1;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  *(undefined8 *)(unaff_x22 + 0x40) = unaff_x20;
  if (param_2 == 0) {
    UVar1.unknown = (undefined *)0x0;
    param_3 = 0;
  }
  else {
    _swift_getObjectType(param_2);
    UVar1 = Swift::Actor::get_unownedExecutor();
  }
  *(undefined **)(unaff_x22 + 0x48) = UVar1.unknown;
  *(undefined8 *)(unaff_x22 + 0x50) = param_3;
  _swift_task_switch(FUN_10085433c,UVar1.unknown);
  return;
}



/* Address: 0x10085433c | FUN_10085433c */

void FUN_10085433c(void)

{
  long unaff_x22;
  
  _swift_taskGroup_wait_next_throwing
            (*(undefined8 *)(unaff_x22 + 0x38),**(undefined8 **)(unaff_x22 + 0x40),FUN_100854354,
             unaff_x22 + 0x10);
  return;
}



/* Address: 0x100854354 | FUN_100854354 */

void FUN_100854354(void)

{
  long unaff_x20;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x58) = unaff_x20;
  if (unaff_x20 != 0) {
    _swift_task_switch(FUN_100854374,*(undefined8 *)(unaff_x22 + 0x48),
                       *(undefined8 *)(unaff_x22 + 0x50));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100854370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100854374 | FUN_100854374 */

void FUN_100854374(void)

{
  long unaff_x22;
  
  _swift_unexpectedError
            (*(undefined8 *)(unaff_x22 + 0x58),"_Concurrency/arm64e-apple-macos.swiftinterface",0x2e
             ,1,0xb9b);
  return;
}



/* Address: 0x100854390 | FUN_100854390 */

void FUN_100854390(undefined8 param_1)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)&DAT_00000030;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005c804c;
  FUN_100851900(plVar1,param_1);
  return;
}



/* Address: 0x1008543ec | FUN_1008543ec */

void FUN_1008543ec(void)

{
  FUN_100852058();
  return;
}



/* Address: 0x1008543f4 | FUN_1008543f4 */

void FUN_1008543f4(void)

{
  FUN_100851a14();
  return;
}



/* Address: 0x1008543fc | FUN_1008543fc */

void FUN_1008543fc(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x100854430 | FUN_100854430 */

void FUN_100854430(undefined8 param_1)

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
  plVar5 = (long *)0x60;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1005c804c;
  FUN_100852394(plVar5,param_1,uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Address: 0x1008544b0 | FUN_1008544b0 */

undefined8 FUN_1008544b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fe7fc0;
  FUN_1000f7830(&DAT_100fe7fc0,&DAT_100c7d458);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x100854500 | FUN_100854500 */

undefined8 FUN_100854500(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fe7fc0;
  FUN_1000f7830(&DAT_100fe7fc0,&DAT_100c7d458);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x100854548 | FUN_100854548 */

void FUN_100854548(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x10085456c | FUN_10085456c */

void FUN_10085456c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_1005c804c;
  FUN_10085408c(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Address: 0x1008545e4 | FUN_1008545e4 */

void FUN_1008545e4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x1d0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_1005c804c;
  FUN_100852474(plVar3,param_1,param_2,uVar1,uVar2);
  return;
}



/* Address: 0x100854658 | FUN_100854658 */

void FUN_100854658(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  FUN_100004594(unaff_x20 + 0x20);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x48));
  _swift_deallocObject();
  return;
}



/* Address: 0x10085468c | FUN_10085468c */

void FUN_10085468c(undefined8 param_1)

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
  uVar2 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x50);
  plVar5 = (long *)0x160;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)thunk_FUN_1005c804c;
  FUN_100852e58(plVar5,param_1,uVar1,uVar3,unaff_x20 + 0x20,uVar2,uVar4);
  return;
}



/* Address: 0x100854710 | FUN_100854710 */

void FUN_100854710(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x100854734 | FUN_100854734 */

void FUN_100854734(undefined8 param_1)

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
  plVar3 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_1005c804c;
  FUN_1005dfa74(plVar3,param_1,uVar2,uVar4,uVar1);
  return;
}



/* Address: 0x1008547bc | thunk_FUN_100854548 */

void thunk_FUN_100854548(void)

{
  FUN_100854548();
  return;
}



/* Address: 0x1008547c0 | thunk_FUN_1005dfae0 */

void thunk_FUN_1005dfae0(void)

{
  FUN_1005dfae0();
  return;
}



/* Address: 0x1008547c4 | FUN_1008547c4 */

void FUN_1008547c4(long param_1)

{
  long in_x3;
  undefined8 in_x4;
  
  *(long *)(param_1 + 0x18) = in_x3;
  *(undefined8 *)(param_1 + 0x20) = in_x4;
  FUN_10000cbb0(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001008547fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(in_x3 + -8) + 0x20))();
  return;
}



/* Address: 0x100854800 | FUN_100854800 */

void FUN_100854800(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_a0 [8];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long lStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar4 = *(long *)(param_4 + -8);
  lVar3 = *(long *)(lVar4 + 0x40);
  local_98 = param_2;
  (**(code **)(lVar4 + 0x10))(auStack_a0 + -(lVar3 + 0xfU & 0xfffffffffffffff0));
  uVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_7,param_4,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  (**(code **)(lVar4 + 0x20))(param_1,auStack_a0 + -(lVar3 + 0xfU & 0xfffffffffffffff0),param_4);
  lVar3 = 0;
  local_90 = param_5;
  uStack_88 = param_6;
  local_80 = uVar2;
  lStack_78 = param_4;
  local_70 = param_8;
  uStack_68 = param_7;
  FUN_100855854(0,&local_90);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar3 + 0x44));
  *puVar1 = local_98;
  puVar1[1] = param_3;
  _swift_retain(param_3);
  return;
}



/* Address: 0x1008548f4 | FUN_1008548f4 */

void FUN_1008548f4(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  UnownedSerialExecutor UVar2;
  long lVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x30) = param_5;
  *(long *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  lVar3 = *(long *)(param_4 + 0x18);
  *(long *)(unaff_x22 + 0x38) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x40) = lVar3;
  uVar1 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x48) = uVar1;
  if (param_2 == 0) {
    UVar2.unknown = (undefined *)0x0;
    param_3 = 0;
  }
  else {
    _swift_getObjectType(param_2);
    UVar2 = Swift::Actor::get_unownedExecutor();
  }
  *(undefined **)(unaff_x22 + 0x50) = UVar2.unknown;
  *(undefined8 *)(unaff_x22 + 0x58) = param_3;
  _swift_task_switch(FUN_10085499c,UVar2.unknown);
  return;
}



/* Address: 0x10085499c | FUN_10085499c */

void FUN_10085499c(void)

{
  long *plVar1;
  long unaff_x22;
  
  FUN_10007d048(*(long *)(unaff_x22 + 0x28),*(undefined8 *)(*(long *)(unaff_x22 + 0x28) + 0x18));
  plVar1 = (long *)(ulong)*(uint *)(PTR__next_100eaebb0 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x60) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10072d57c;
  Swift::AsyncIteratorProtocol::_next();
  return;
}



/* Address: 0x100854a20 | FUN_100854a20 */

void FUN_100854a20(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x10) = param_2;
  lVar4 = *(long *)(param_2 + 0x18);
  *(long *)(unaff_x22 + 0x18) = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0x20) = lVar4;
  uVar2 = *(long *)(lVar4 + 0x40) + 0xf;
  uVar1 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x28) = uVar1;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x30) = uVar2;
  plVar3 = (long *)(ulong)*(uint *)(PTR__next_100eaebd8 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x38) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100854ad8;
  (extension_Swift)::Swift::AsyncIteratorProtocol::_next();
  return;
}



/* Address: 0x100854ad8 | FUN_100854ad8 */

void FUN_100854ad8(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  long *unaff_x22;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  code *UNRECOVERED_JUMPTABLE;
  
  lVar7 = *unaff_x22;
  lVar5 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar7 + 0x38));
  if (unaff_x20 == 0) {
    uVar2 = *(undefined8 *)(lVar7 + 0x28);
    _swift_task_dealloc(*(undefined8 *)(lVar7 + 0x30));
    _swift_task_dealloc(uVar2);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar5 + 8);
  }
  else {
    lVar1 = *(long *)(lVar7 + 0x28);
    uVar2 = *(undefined8 *)(lVar7 + 0x18);
    lVar3 = *(long *)(lVar7 + 0x10);
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar7 + 0x20) + 0x20);
    (*UNRECOVERED_JUMPTABLE)(lVar1,*(undefined8 *)(lVar7 + 0x30),uVar2);
    uVar4 = *(undefined8 *)(lVar3 + 0x20);
    Swift::__getErrorEmbeddedNSError(lVar1,uVar2,uVar4);
    uVar2 = *(undefined8 *)(lVar7 + 0x28);
    if (lVar1 == 0) {
      uVar6 = *(undefined8 *)(lVar7 + 0x18);
      _swift_allocError(uVar6,uVar4,0,0);
      (*UNRECOVERED_JUMPTABLE)(uVar4,uVar2,uVar6);
    }
    else {
      (**(code **)(*(long *)(lVar7 + 0x20) + 8))(uVar2,*(undefined8 *)(lVar7 + 0x18));
    }
    uVar2 = *(undefined8 *)(lVar7 + 0x28);
    _swift_task_dealloc(*(undefined8 *)(lVar7 + 0x30));
    _swift_task_dealloc(uVar2);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar5 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000100854bd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x100854bd8 | FUN_100854bd8 */

void FUN_100854bd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_4;
  lVar3 = *(long *)(param_5 + 0x18);
  *(long *)(unaff_x22 + 0x18) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x20) = lVar3;
  uVar1 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x28) = uVar1;
  plVar2 = (long *)0x70;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x30) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)thunk_FUN_100708dfc;
  FUN_1008548f4(plVar2,param_1,param_2,param_3,param_5,uVar1);
  return;
}



/* Address: 0x100854c88 | FUN_100854c88 */

void FUN_100854c88(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  undefined8 local_50;
  undefined8 local_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  FUN_100004640();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))
            (auStack_70 + -(*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0),
             unaff_x20,lVar1);
  puVar2 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar4,lVar1,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  local_50 = uVar3;
  _swift_getAssociatedConformanceWitness
            (uVar4,lVar1,uVar3,puVar2,
             PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
            );
  local_48 = uVar4;
  FUN_10000cbb0(auStack_68);
  Swift::AsyncSequence::_makeAsyncIterator();
  FUN_100076508(auStack_68,param_1);
  return;
}



/* Address: 0x100854d68 | FUN_100854d68 */

void FUN_100854d68(undefined8 param_1,long param_2)

{
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  local_20 = *(undefined8 *)(param_2 + 0x20);
  uStack_28 = *(undefined8 *)(param_2 + 0x18);
  local_30 = *(undefined8 *)(param_2 + 0x10);
  _swift_getOpaqueTypeConformance(&local_30,&DAT_100cc24d0,1);
  return;
}



/* Address: 0x100854da4 | FUN_100854da4 */

void FUN_100854da4(long param_1)

{
  FUN_100854c88();
                    /* WARNING: Could not recover jumptable at 0x000100854dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + -8) + 8))();
  return;
}



/* Address: 0x100854dd4 | FUN_100854dd4 */

void FUN_100854dd4(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100854de0 | FUN_100854de0 */

void FUN_100854de0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xff;
  FUN_100854e0c(0xff,*param_1,param_1[1],param_1[2]);
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7d5e8,uVar1);
  return;
}



/* Address: 0x100854e0c | FUN_100854e0c */

void FUN_100854e0c(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100854e18 | FUN_100854e18 */

void FUN_100854e18(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7d688,param_1);
  return;
}



/* Address: 0x100854e28 | FUN_100854e28 */

void FUN_100854e28(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  Optional OVar6;
  long lVar7;
  undefined7 extraout_var;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long unaff_x20;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 auStack_70 [2];
  
  lVar11 = *(long *)(param_2 + 0x28);
  lVar14 = *(long *)(lVar11 + -8);
  lVar10 = *(long *)(lVar14 + 0x40);
  uVar12 = *(undefined8 *)(param_2 + 0x38);
  lVar7 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar12,lVar11,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  OVar6 = Swift::Optional::typeMetadataAccessor();
  lVar13 = (long)(&stack0xffffffffffffffa0 + -(lVar10 + 0xfU & 0xfffffffffffffff0)) -
           (*(long *)(*(long *)(CONCAT71(extraout_var,OVar6.value) + -8) + 0x40) + 0xfU &
           0xfffffffffffffff0);
  (**(code **)(lVar14 + 0x10))(&stack0xffffffffffffffa0 + -(lVar10 + 0xfU & 0xfffffffffffffff0));
  Swift::AsyncSequence::_makeAsyncIterator();
  (**(code **)(*(long *)(lVar7 + -8) + 0x38))(lVar13,0,1,lVar7);
  puVar1 = (undefined8 *)(unaff_x20 + *(int *)(param_2 + 0x44));
  uVar2 = *puVar1;
  uVar4 = puVar1[1];
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  uVar8 = *(undefined8 *)(param_2 + 0x20);
  uVar9 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(lVar13 + -0x10) = uVar12;
  FUN_100854f5c(param_1,lVar13,uVar2,uVar4,uVar3,uVar5,uVar8,lVar11,uVar9);
  _swift_retain(uVar4);
  return;
}



/* Address: 0x100854f5c | FUN_100854f5c */

void FUN_100854f5c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  Optional OVar2;
  undefined7 extraout_var;
  long lVar3;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  _swift_getAssociatedTypeWitness
            (0xff,param_10,param_8,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  OVar2 = Swift::Optional::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,OVar2.value) + -8) + 0x20))
            (param_1,param_2,CONCAT71(extraout_var,OVar2.value));
  uStack_68 = param_10;
  lVar3 = 0;
  local_90 = param_5;
  uStack_88 = param_6;
  local_80 = param_7;
  uStack_78 = param_8;
  local_70 = param_9;
  FUN_100855848(0,&local_90);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar3 + 0x44));
  *puVar1 = param_3;
  puVar1[1] = param_4;
  return;
}



/* Address: 0x10085502c | FUN_10085502c */

void FUN_10085502c(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  Optional OVar1;
  ulong uVar2;
  ulong uVar3;
  undefined7 extraout_var;
  UnownedSerialExecutor UVar4;
  long lVar5;
  undefined8 unaff_x20;
  long lVar6;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x38) = param_5;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(long *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(long *)(unaff_x22 + 0x18) = param_2;
  lVar5 = *(long *)(param_4 + 0x18);
  *(long *)(unaff_x22 + 0x40) = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  *(long *)(unaff_x22 + 0x48) = lVar5;
  uVar3 = *(long *)(lVar5 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x50) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x58) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x60) = uVar3;
  lVar6 = *(long *)(param_4 + 0x20);
  *(long *)(unaff_x22 + 0x68) = lVar6;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x70) = CONCAT71(extraout_var,OVar1.value);
  lVar5 = *(long *)(CONCAT71(extraout_var,OVar1.value) + -8);
  *(long *)(unaff_x22 + 0x78) = lVar5;
  uVar3 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x80) = uVar3;
  lVar5 = *(long *)(lVar6 + -8);
  *(long *)(unaff_x22 + 0x88) = lVar5;
  uVar3 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x90) = uVar3;
  if (param_2 == 0) {
    UVar4.unknown = (undefined *)0x0;
    param_3 = 0;
  }
  else {
    _swift_getObjectType(param_2);
    UVar4 = Swift::Actor::get_unownedExecutor();
  }
  *(undefined **)(unaff_x22 + 0x98) = UVar4.unknown;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_3;
  _swift_task_switch(FUN_100855140,UVar4.unknown);
  return;
}



/* Address: 0x100855140 | FUN_100855140 */

void FUN_100855140(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar6 = *(undefined8 *)(*(long *)(unaff_x22 + 0x28) + 0x38);
  uVar7 = *(undefined8 *)(*(long *)(unaff_x22 + 0x28) + 0x28);
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar6,uVar7,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  *(long *)(unaff_x22 + 0xa8) = lVar1;
  lVar4 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0xb0) = lVar4;
  (**(code **)(lVar4 + 0x30))(uVar2,1,lVar1);
  if ((int)uVar2 != 0) {
    (**(code **)(*(long *)(unaff_x22 + 0x88) + 0x38))
              (*(undefined8 *)(unaff_x22 + 0x80),1,1,*(undefined8 *)(unaff_x22 + 0x68));
    uVar6 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x90);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x50);
    lVar1 = *(long *)(unaff_x22 + 0x28);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x10);
    (**(code **)(*(long *)(unaff_x22 + 0x78) + 8))(uVar6,*(undefined8 *)(unaff_x22 + 0x70));
    (**(code **)(*(long *)(*(long *)(lVar1 + 0x10) + -8) + 0x38))(uVar9,1,1);
    _swift_task_dealloc(uVar5);
    _swift_task_dealloc(uVar6);
    _swift_task_dealloc(uVar7);
    _swift_task_dealloc(uVar2);
    _swift_task_dealloc(uVar8);
                    /* WARNING: Could not recover jumptable at 0x000100855260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  _swift_getAssociatedConformanceWitness
            (uVar6,uVar7,lVar1,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
            );
  plVar3 = (long *)(ulong)*(uint *)(PTR__next_100eaebb0 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xb8) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1008552e0;
  Swift::AsyncIteratorProtocol::_next();
  return;
}



/* Address: 0x1008552e0 | FUN_1008552e0 */

void FUN_1008552e0(void)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(long *)(lVar1 + 0xc0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0xb8));
  if (unaff_x20 != 0) {
    return;
  }
  _swift_task_switch(FUN_100855344,*(undefined8 *)(lVar1 + 0x98),*(undefined8 *)(lVar1 + 0xa0));
  return;
}



/* Address: 0x100855344 | FUN_100855344 */

void FUN_100855344(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  Optional OVar5;
  undefined7 extraout_var;
  code *UNRECOVERED_JUMPTABLE;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x22;
  undefined8 uVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  long lVar17;
  
  plVar14 = (long *)(unaff_x22 + 0x88);
  lVar17 = *plVar14;
  uVar9 = *(undefined8 *)(unaff_x22 + 0x80);
  puVar16 = (undefined8 *)(unaff_x22 + 0x68);
  uVar12 = *puVar16;
  uVar10 = uVar9;
  (**(code **)(lVar17 + 0x30))(uVar9,1,uVar12);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x90);
  if ((int)uVar10 == 1) {
    plVar14 = (long *)(unaff_x22 + 0x78);
    puVar16 = (undefined8 *)(unaff_x22 + 0x70);
    uVar10 = 1;
    uVar12 = uVar9;
  }
  else {
    lVar6 = *(long *)(unaff_x22 + 0xc0);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x58);
    lVar1 = *(long *)(unaff_x22 + 0x28);
    lVar2 = *(long *)(unaff_x22 + 0x30);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x10);
    (**(code **)(lVar17 + 0x20))(uVar8,uVar9,uVar12);
    (**(code **)(lVar2 + *(int *)(lVar1 + 0x44)))(uVar11,uVar8,uVar10);
    if (lVar6 != 0) {
      uVar10 = *(undefined8 *)(unaff_x22 + 0xa8);
      lVar1 = *(long *)(unaff_x22 + 0xb0);
      lVar17 = *(long *)(unaff_x22 + 0x88);
      uVar4 = *(undefined8 *)(unaff_x22 + 0x90);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x80);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x60);
      uVar13 = *(undefined8 *)(unaff_x22 + 0x68);
      uVar9 = *(undefined8 *)(unaff_x22 + 0x50);
      uVar15 = *(undefined8 *)(unaff_x22 + 0x58);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x40);
      lVar2 = *(long *)(unaff_x22 + 0x48);
      uVar11 = *(undefined8 *)(unaff_x22 + 0x30);
      uVar3 = *(undefined8 *)(unaff_x22 + 0x38);
      lVar6 = *(long *)(unaff_x22 + 0x28);
      (**(code **)(lVar2 + 0x20))(uVar8,uVar15,uVar12);
      UNRECOVERED_JUMPTABLE = *(code **)(lVar2 + 0x10);
      (*UNRECOVERED_JUMPTABLE)(uVar9,uVar8,uVar12);
      OVar5 = Swift::Optional::typeMetadataAccessor();
      (**(code **)(*(long *)(CONCAT71(extraout_var,OVar5.value) + -8) + 8))
                (uVar11,CONCAT71(extraout_var,OVar5.value));
      (**(code **)(lVar1 + 0x38))(uVar11,1,1,uVar10);
      (*UNRECOVERED_JUMPTABLE)(uVar3,uVar9,uVar12);
      FUN_1005c64f0(uVar3,uVar12,*(undefined8 *)(lVar6 + 0x30));
      UNRECOVERED_JUMPTABLE = *(code **)(lVar2 + 8);
      (*UNRECOVERED_JUMPTABLE)(uVar9,uVar12);
      (*UNRECOVERED_JUMPTABLE)(uVar8,uVar12);
      (**(code **)(lVar17 + 8))(uVar4,uVar13);
      _swift_task_dealloc(uVar4);
      _swift_task_dealloc(uVar7);
      _swift_task_dealloc(uVar8);
      _swift_task_dealloc(uVar15);
      _swift_task_dealloc(uVar9);
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
      goto LAB_100855588;
    }
    uVar9 = *(undefined8 *)(unaff_x22 + 0x90);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar10 = 0;
    uVar8 = uVar9;
  }
  uVar11 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar17 = *(long *)(unaff_x22 + 0x28);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x10);
  (**(code **)(*plVar14 + 8))(uVar9,*puVar16);
  (**(code **)(*(long *)(*(long *)(lVar17 + 0x10) + -8) + 0x38))(uVar15,uVar10,1);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar13);
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
LAB_100855588:
                    /* WARNING: Could not recover jumptable at 0x0001008555a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


