/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100771780 | FUN_100771780 */

void FUN_100771780(void)

{
  undefined *puVar1;
  Optional OVar2;
  Result RVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined7 extraout_var;
  ulong uVar8;
  ulong uVar9;
  undefined7 extraout_var_00;
  undefined7 extraout_var_01;
  undefined8 uVar10;
  undefined8 in_x3;
  long *in_x4;
  long lVar11;
  long unaff_x22;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  
  *(undefined8 *)(unaff_x22 + 0x1b0) = in_x3;
  *(long **)(unaff_x22 + 0x1b8) = in_x4;
  lVar15 = *in_x4;
  uVar10 = *(undefined8 *)(lVar15 + 0x68);
  *(undefined8 *)(unaff_x22 + 0x1c0) = uVar10;
  lVar11 = *(long *)(lVar15 + 0x50);
  *(long *)(unaff_x22 + 0x1c8) = lVar11;
  puVar1 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar7 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  lVar4 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar10,lVar11,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  *(long *)(unaff_x22 + 0x1d0) = lVar4;
  uVar12 = *(undefined8 *)(lVar15 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x1d8) = uVar12;
  uVar13 = *(undefined8 *)(lVar15 + 0x58);
  *(undefined8 *)(unaff_x22 + 0x1e0) = uVar13;
  uVar5 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,uVar12,uVar13,puVar1,puVar7);
  uVar14 = *(undefined8 *)(lVar15 + 0x78);
  *(undefined8 *)(unaff_x22 + 0x1e8) = uVar14;
  uVar16 = *(undefined8 *)(lVar15 + 0x60);
  *(undefined8 *)(unaff_x22 + 0x1f0) = uVar16;
  _swift_getAssociatedTypeWitness(0xff,uVar14,uVar16,puVar1,puVar7);
  OVar2 = Swift::Optional::typeMetadataAccessor();
  uVar6 = 0xff;
  _swift_getTupleTypeMetadata3(0xff,lVar4,uVar5,OVar2.value,0,0);
  *(undefined8 *)(unaff_x22 + 0x1f8) = uVar6;
  Swift::Optional::typeMetadataAccessor();
  puVar7 = &DAT_100fdfb40;
  FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
  *(undefined **)(unaff_x22 + 0x200) = puVar7;
  RVar3 = Swift::Result::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x208) = CONCAT71(extraout_var,RVar3.value);
  lVar15 = *(long *)(CONCAT71(extraout_var,RVar3.value) + -8);
  *(long *)(unaff_x22 + 0x210) = lVar15;
  uVar9 = *(long *)(lVar15 + 0x40) + 0xf;
  uVar8 = uVar9 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x218) = uVar8;
  uVar9 = uVar9 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(long *)(unaff_x22 + 0x58) = lVar11;
  *(ulong *)(unaff_x22 + 0x220) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x60) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x68) = uVar16;
  *(undefined8 *)(unaff_x22 + 0x70) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x78) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x80) = uVar14;
  uVar5 = 0xff;
  FUN_100769150();
  *(undefined8 *)(unaff_x22 + 0x228) = uVar5;
  OVar2 = Swift::Optional::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x230) = CONCAT71(extraout_var_00,OVar2.value);
  lVar15 = *(long *)(CONCAT71(extraout_var_00,OVar2.value) + -8);
  *(long *)(unaff_x22 + 0x238) = lVar15;
  uVar9 = *(long *)(lVar15 + 0x40) + 0xf;
  uVar8 = uVar9 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x240) = uVar8;
  uVar9 = uVar9 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x248) = uVar9;
  OVar2 = Swift::Optional::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x250) = CONCAT71(extraout_var_01,OVar2.value);
  lVar15 = *(long *)(CONCAT71(extraout_var_01,OVar2.value) + -8);
  *(long *)(unaff_x22 + 600) = lVar15;
  uVar9 = *(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x260) = uVar9;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0x268) = lVar4;
  uVar9 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x270) = uVar9;
  lVar4 = *(long *)(lVar11 + -8);
  *(long *)(unaff_x22 + 0x278) = lVar4;
  uVar9 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x280) = uVar9;
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar10,lVar11,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  *(long *)(unaff_x22 + 0x288) = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0x290) = lVar4;
  uVar9 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x298) = uVar9;
  _swift_task_switch(FUN_100771a10,0,0);
  return;
}



/* Address: 0x100771a10 | FUN_100771a10 */

void FUN_100771a10(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x1b8);
  (**(code **)(*(long *)(unaff_x22 + 0x278) + 0x10))
            (*(undefined8 *)(unaff_x22 + 0x280),*(undefined8 *)(unaff_x22 + 0x1b0),
             *(undefined8 *)(unaff_x22 + 0x1c8));
  Swift::AsyncSequence::_makeAsyncIterator();
  *(undefined8 *)(unaff_x22 + 0x2a0) = *(undefined8 *)(lVar1 + 0x10);
  *(long *)(unaff_x22 + 0x130) = unaff_x22;
  *(code **)(unaff_x22 + 0x138) = FUN_100771ab8;
  _swift_continuation_init(unaff_x22 + 0x130,1);
  FUN_100772ef4();
  _swift_continuation_await(unaff_x22 + 0x130);
  return;
}



/* Address: 0x100771ab8 | FUN_100771ab8 */

void FUN_100771ab8(void)

{
  long *plVar1;
  long *unaff_x22;
  long lVar2;
  long lVar3;
  
  lVar3 = *unaff_x22;
  lVar2 = *unaff_x22;
  if (*(long *)(lVar3 + 0x150) != 0) {
    *(long *)(lVar3 + 0x2b8) = *(long *)(lVar3 + 0x150);
    _swift_willThrow();
    _swift_task_switch(thunk_FUN_100772800,0,0);
    return;
  }
  _swift_getAssociatedConformanceWitness
            (*(undefined8 *)(lVar3 + 0x1c0),*(undefined8 *)(lVar3 + 0x1c8),
             *(undefined8 *)(lVar3 + 0x288),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
            );
  plVar1 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
  _swift_task_alloc();
  *(long **)(lVar3 + 0x2a8) = plVar1;
  *plVar1 = lVar2;
  plVar1[1] = (long)FUN_100771b90;
  Swift::AsyncIteratorProtocol::_next();
  return;
}



/* Address: 0x100771b90 | FUN_100771b90 */

void FUN_100771b90(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x2b0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x2a8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100771bf4;
  }
  else {
    pcVar1 = thunk_FUN_100772e2c;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100771bf4 | FUN_100771bf4 */

void FUN_100771bf4(void)

{
  Task TVar1;
  undefined *puVar2;
  Optional OVar3;
  CancellationError CVar4;
  undefined8 uVar5;
  UnsafeContinuation UVar6;
  CancellationError CVar7;
  CancellationError CVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  Task TVar15;
  undefined8 uVar16;
  long lVar17;
  long unaff_x22;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  long lVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  
  lVar23 = *(long *)(unaff_x22 + 0x268);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x260);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x1d0);
  uVar25 = uVar18;
  (**(code **)(lVar23 + 0x30))(uVar18,1,uVar20);
  if ((int)uVar25 == 1) {
    uVar16 = *(undefined8 *)(unaff_x22 + 0x2a0);
    uVar25 = *(undefined8 *)(unaff_x22 + 0x1e8);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x1f0);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x1d8);
    uVar24 = *(undefined8 *)(unaff_x22 + 0x1e0);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x1c0);
    uVar26 = *(undefined8 *)(unaff_x22 + 0x1c8);
    (**(code **)(*(long *)(unaff_x22 + 600) + 8))(uVar18,*(undefined8 *)(unaff_x22 + 0x250));
    *(undefined8 *)(unaff_x22 + 0x180) = uVar26;
    *(undefined8 *)(unaff_x22 + 0x188) = uVar24;
    *(undefined8 *)(unaff_x22 + 400) = uVar22;
    *(undefined8 *)(unaff_x22 + 0x198) = uVar19;
    *(undefined8 *)(unaff_x22 + 0x88) = uVar26;
    *(undefined8 *)(unaff_x22 + 0x1a0) = uVar20;
    *(undefined8 *)(unaff_x22 + 0x1a8) = uVar25;
    *(undefined8 *)(unaff_x22 + 0x90) = uVar24;
    *(undefined8 *)(unaff_x22 + 0x98) = uVar22;
    *(undefined8 *)(unaff_x22 + 0xa0) = uVar19;
    *(undefined8 *)(unaff_x22 + 0xa8) = uVar20;
    *(undefined8 *)(unaff_x22 + 0xb0) = uVar25;
    uVar18 = 0;
    FUN_10075d17c(0);
    *(undefined8 *)(unaff_x22 + 0xb8) = uVar26;
    *(undefined8 *)(unaff_x22 + 0xc0) = uVar24;
    *(undefined8 *)(unaff_x22 + 200) = uVar22;
    *(undefined8 *)(unaff_x22 + 0xd0) = uVar19;
    *(undefined8 *)(unaff_x22 + 0xd8) = uVar20;
    *(undefined8 *)(unaff_x22 + 0xe0) = uVar25;
    FUN_100769448(0xff,(undefined8 *)(unaff_x22 + 0xb8));
    OVar3 = Swift::Optional::typeMetadataAccessor();
    FUN_10079f534(unaff_x22 + 0x118,FUN_100774910,unaff_x22 + 0x170,uVar16,uVar18,OVar3.value);
    TVar15.unknown = *(undefined **)(unaff_x22 + 0x118);
    if ((((ulong)TVar15.unknown ^ 0xffffffffffffffff) & 0xf000000000000007) != 0) {
      TVar1.unknown = *(undefined **)(unaff_x22 + 0x120);
      lVar23 = *(long *)(unaff_x22 + 0x128);
      if ((long)TVar15.unknown < 0) {
        lVar17 = *(long *)(lVar23 + 0x10);
        if (lVar17 != 0) {
          CVar4 = Swift::CancellationError::typeMetadataAccessor();
          CVar7 = CVar4;
          FUN_10076915c();
          puVar2 = PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
          puVar21 = (undefined8 *)(lVar23 + 0x20);
          do {
            uVar25 = *(undefined8 *)(unaff_x22 + 0x200);
            uVar18 = *puVar21;
            CVar8 = CVar4;
            _swift_allocError(CVar4.unknown,CVar7.unknown,0,0);
            Swift::CancellationError::init();
            puVar9 = (undefined8 *)puVar2;
            _swift_allocError(uVar25,puVar2,0,0);
            *puVar9 = CVar8.unknown;
            _swift_continuation_throwingResumeWithError(uVar18,uVar25);
            lVar17 = lVar17 + -1;
            puVar21 = puVar21 + 1;
          } while (lVar17 != 0);
        }
        uVar25 = *(undefined8 *)(unaff_x22 + 0x220);
        uVar18 = *(undefined8 *)(unaff_x22 + 0x208);
        lVar17 = *(long *)(unaff_x22 + 0x1f8);
        Swift::Task::cancel(TVar1);
        (**(code **)(*(long *)(lVar17 + -8) + 0x38))(uVar25,1,1,lVar17);
        _swift_storeEnumTagMultiPayload(uVar25,uVar18,0);
        FUN_10072e9c0(uVar25,(ulong)TVar15.unknown & 0x7fffffffffffffff,uVar18);
      }
      else {
        lVar17 = *(long *)(TVar1.unknown + 0x10);
        if (lVar17 != 0) {
          CVar4 = Swift::CancellationError::typeMetadataAccessor();
          CVar7 = CVar4;
          FUN_10076915c();
          puVar2 = PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
          puVar21 = (undefined8 *)(TVar1.unknown + 0x20);
          do {
            uVar25 = *(undefined8 *)(unaff_x22 + 0x200);
            uVar18 = *puVar21;
            CVar8 = CVar4;
            _swift_allocError(CVar4.unknown,CVar7.unknown,0,0);
            Swift::CancellationError::init();
            puVar9 = (undefined8 *)puVar2;
            _swift_allocError(uVar25,puVar2,0,0);
            *puVar9 = CVar8.unknown;
            _swift_continuation_throwingResumeWithError(uVar18,uVar25);
            lVar17 = lVar17 + -1;
            puVar21 = puVar21 + 1;
          } while (lVar17 != 0);
        }
        Swift::Task::cancel(TVar15);
      }
      FUN_100774858(TVar15.unknown,TVar1.unknown,lVar23);
    }
    uVar18 = *(undefined8 *)(unaff_x22 + 0x298);
    uVar25 = *(undefined8 *)(unaff_x22 + 0x280);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x270);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x260);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x248);
    uVar24 = *(undefined8 *)(unaff_x22 + 0x240);
    uVar26 = *(undefined8 *)(unaff_x22 + 0x220);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x218);
    (**(code **)(*(long *)(unaff_x22 + 0x290) + 8))(uVar18,*(undefined8 *)(unaff_x22 + 0x288));
    _swift_task_dealloc(uVar18);
    _swift_task_dealloc(uVar25);
    _swift_task_dealloc(uVar20);
    _swift_task_dealloc(uVar19);
    _swift_task_dealloc(uVar22);
    _swift_task_dealloc(uVar24);
    _swift_task_dealloc(uVar26);
    _swift_task_dealloc(uVar16);
                    /* WARNING: Could not recover jumptable at 0x000100772154. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar13 = *(undefined8 *)(unaff_x22 + 0x2a0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x270);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x248);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x240);
  lVar17 = *(long *)(unaff_x22 + 0x238);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x230);
  lVar12 = *(long *)(unaff_x22 + 0x228);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x1e8);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x1f0);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x1d8);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x1e0);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x1c0);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x1c8);
  (**(code **)(lVar23 + 0x20))(uVar5,uVar18,uVar20);
  *(undefined8 *)(unaff_x22 + 0xe8) = uVar16;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar16;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar26;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar24;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar22;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar19;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar25;
  *(undefined8 *)(unaff_x22 + 0x50) = uVar5;
  *(undefined8 *)(unaff_x22 + 0xf0) = uVar26;
  *(undefined8 *)(unaff_x22 + 0xf8) = uVar24;
  *(undefined8 *)(unaff_x22 + 0x100) = uVar22;
  *(undefined8 *)(unaff_x22 + 0x108) = uVar19;
  *(undefined8 *)(unaff_x22 + 0x110) = uVar25;
  uVar25 = 0;
  FUN_10075d17c(0);
  FUN_10079f534(uVar14,FUN_1007749a0,unaff_x22 + 0x10,uVar13,uVar25,uVar11);
  (**(code **)(lVar17 + 0x10))(uVar10,uVar14,uVar11);
  (**(code **)(*(long *)(lVar12 + -8) + 0x30))(uVar10,1);
  if ((int)uVar10 != 1) {
    puVar21 = *(undefined8 **)(unaff_x22 + 0x240);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x220);
    uVar25 = *(undefined8 *)(unaff_x22 + 0x218);
    lVar17 = *(long *)(unaff_x22 + 0x210);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x208);
    uVar19 = *puVar21;
    UVar6 = Swift::UnsafeContinuation::typeMetadataAccessor();
    lVar23 = 0;
    _swift_getTupleTypeMetadata2(0,UVar6.unknown,uVar20,"downstreamContinuation result ",0);
    (**(code **)(lVar17 + 0x20))(uVar18,(long)puVar21 + (long)*(int *)(lVar23 + 0x30),uVar20);
    (**(code **)(lVar17 + 0x10))(uVar25,uVar18,uVar20);
    FUN_10072e9c0(uVar25,uVar19,uVar20);
    (**(code **)(lVar17 + 8))(uVar18,uVar20);
  }
  uVar18 = *(undefined8 *)(unaff_x22 + 0x270);
  lVar23 = *(long *)(unaff_x22 + 0x268);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x1d0);
  (**(code **)(*(long *)(unaff_x22 + 0x238) + 8))
            (*(undefined8 *)(unaff_x22 + 0x248),*(undefined8 *)(unaff_x22 + 0x230));
  (**(code **)(lVar23 + 8))(uVar18,uVar25);
  *(long *)(unaff_x22 + 0x130) = unaff_x22;
  *(code **)(unaff_x22 + 0x138) = FUN_100771ab8;
  _swift_continuation_init(unaff_x22 + 0x130,1);
  FUN_100772ef4();
  _swift_continuation_await(unaff_x22 + 0x130);
  return;
}



/* Address: 0x100772158 | FUN_100772158 */

void FUN_100772158(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  Optional OVar3;
  long lVar4;
  undefined7 extraout_var;
  long lVar5;
  undefined7 extraout_var_00;
  long lVar6;
  undefined7 extraout_var_01;
  undefined8 uVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_100 [8];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  long local_d0;
  long lStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  long local_b0;
  long lStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar2 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar1 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  lVar4 = 0xff;
  local_f8 = param_4;
  local_f0 = param_7;
  local_e8 = param_5;
  local_e0 = param_3;
  local_d8 = param_8;
  local_c0 = param_6;
  local_b8 = param_9;
  local_a0 = param_1;
  uStack_98 = param_2;
  _swift_getAssociatedTypeWitness
            (0xff,param_9,param_6,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  OVar3 = Swift::Optional::typeMetadataAccessor();
  lStack_a8 = CONCAT71(extraout_var,OVar3.value);
  local_b0 = *(long *)(lStack_a8 + -8);
  puVar9 = auStack_100 + -(*(long *)(local_b0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,param_8,param_5,puVar2,puVar1);
  OVar3 = Swift::Optional::typeMetadataAccessor();
  lStack_c8 = CONCAT71(extraout_var_00,OVar3.value);
  local_d0 = *(long *)(lStack_c8 + -8);
  lVar11 = (long)puVar9 - (*(long *)(local_d0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,param_7,param_4,puVar2,puVar1);
  OVar3 = Swift::Optional::typeMetadataAccessor();
  lVar10 = *(long *)(CONCAT71(extraout_var_01,OVar3.value) + -8);
  lVar12 = lVar11 - (*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = *(long *)(lVar6 + -8);
  (**(code **)(lVar8 + 0x10))(lVar12,local_e0,lVar6);
  (**(code **)(lVar8 + 0x38))(lVar12,0,1,lVar6);
  (**(code **)(*(long *)(lVar5 + -8) + 0x38))(lVar11,1,1,lVar5);
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))(puVar9,1,1,lVar4);
  local_90 = local_f8;
  uStack_88 = local_e8;
  local_80 = local_c0;
  uStack_78 = local_f0;
  local_70 = local_d8;
  uStack_68 = local_b8;
  uVar7 = 0;
  FUN_10075d17c(0,&local_90);
  FUN_100763dd8(local_a0,lVar12,lVar11,puVar9,uVar7);
  (**(code **)(local_b0 + 8))(puVar9,lStack_a8);
  (**(code **)(local_d0 + 8))(lVar11,lStack_c8);
  (**(code **)(lVar10 + 8))(lVar12,CONCAT71(extraout_var_01,OVar3.value));
  return;
}



/* Address: 0x10077238c | FUN_10077238c */

void FUN_10077238c(void)

{
  undefined *puVar1;
  Optional OVar2;
  Result RVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined7 extraout_var;
  ulong uVar8;
  ulong uVar9;
  undefined7 extraout_var_00;
  undefined7 extraout_var_01;
  undefined8 uVar10;
  undefined8 in_x3;
  long *in_x4;
  long lVar11;
  long unaff_x22;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  
  *(undefined8 *)(unaff_x22 + 0x1b0) = in_x3;
  *(long **)(unaff_x22 + 0x1b8) = in_x4;
  lVar15 = *in_x4;
  uVar12 = *(undefined8 *)(lVar15 + 0x68);
  *(undefined8 *)(unaff_x22 + 0x1c0) = uVar12;
  uVar13 = *(undefined8 *)(lVar15 + 0x50);
  *(undefined8 *)(unaff_x22 + 0x1c8) = uVar13;
  puVar1 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar7 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  uVar4 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar12,uVar13,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  uVar10 = *(undefined8 *)(lVar15 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x1d0) = uVar10;
  lVar11 = *(long *)(lVar15 + 0x58);
  *(long *)(unaff_x22 + 0x1d8) = lVar11;
  lVar5 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,uVar10,lVar11,puVar1,puVar7);
  *(long *)(unaff_x22 + 0x1e0) = lVar5;
  uVar14 = *(undefined8 *)(lVar15 + 0x78);
  *(undefined8 *)(unaff_x22 + 0x1e8) = uVar14;
  uVar16 = *(undefined8 *)(lVar15 + 0x60);
  *(undefined8 *)(unaff_x22 + 0x1f0) = uVar16;
  _swift_getAssociatedTypeWitness(0xff,uVar14,uVar16,puVar1,puVar7);
  OVar2 = Swift::Optional::typeMetadataAccessor();
  uVar6 = 0xff;
  _swift_getTupleTypeMetadata3(0xff,uVar4,lVar5,OVar2.value,0,0);
  *(undefined8 *)(unaff_x22 + 0x1f8) = uVar6;
  Swift::Optional::typeMetadataAccessor();
  puVar7 = &DAT_100fdfb40;
  FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
  *(undefined **)(unaff_x22 + 0x200) = puVar7;
  RVar3 = Swift::Result::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x208) = CONCAT71(extraout_var,RVar3.value);
  lVar15 = *(long *)(CONCAT71(extraout_var,RVar3.value) + -8);
  *(long *)(unaff_x22 + 0x210) = lVar15;
  uVar9 = *(long *)(lVar15 + 0x40) + 0xf;
  uVar8 = uVar9 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x218) = uVar8;
  uVar9 = uVar9 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(undefined8 *)(unaff_x22 + 0x58) = uVar13;
  *(ulong *)(unaff_x22 + 0x220) = uVar9;
  *(long *)(unaff_x22 + 0x60) = lVar11;
  *(undefined8 *)(unaff_x22 + 0x68) = uVar16;
  *(undefined8 *)(unaff_x22 + 0x70) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x78) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x80) = uVar14;
  uVar4 = 0xff;
  FUN_100769150();
  *(undefined8 *)(unaff_x22 + 0x228) = uVar4;
  OVar2 = Swift::Optional::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x230) = CONCAT71(extraout_var_00,OVar2.value);
  lVar15 = *(long *)(CONCAT71(extraout_var_00,OVar2.value) + -8);
  *(long *)(unaff_x22 + 0x238) = lVar15;
  uVar9 = *(long *)(lVar15 + 0x40) + 0xf;
  uVar8 = uVar9 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x240) = uVar8;
  uVar9 = uVar9 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x248) = uVar9;
  OVar2 = Swift::Optional::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x250) = CONCAT71(extraout_var_01,OVar2.value);
  lVar15 = *(long *)(CONCAT71(extraout_var_01,OVar2.value) + -8);
  *(long *)(unaff_x22 + 600) = lVar15;
  uVar9 = *(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x260) = uVar9;
  lVar5 = *(long *)(lVar5 + -8);
  *(long *)(unaff_x22 + 0x268) = lVar5;
  uVar9 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x270) = uVar9;
  lVar5 = *(long *)(lVar11 + -8);
  *(long *)(unaff_x22 + 0x278) = lVar5;
  uVar9 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x280) = uVar9;
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar10,lVar11,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  *(long *)(unaff_x22 + 0x288) = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  *(long *)(unaff_x22 + 0x290) = lVar5;
  uVar9 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x298) = uVar9;
  _swift_task_switch(FUN_10077261c,0,0);
  return;
}



/* Address: 0x10077261c | FUN_10077261c */

void FUN_10077261c(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x1b8);
  (**(code **)(*(long *)(unaff_x22 + 0x278) + 0x10))
            (*(undefined8 *)(unaff_x22 + 0x280),*(undefined8 *)(unaff_x22 + 0x1b0),
             *(undefined8 *)(unaff_x22 + 0x1d8));
  Swift::AsyncSequence::_makeAsyncIterator();
  *(undefined8 *)(unaff_x22 + 0x2a0) = *(undefined8 *)(lVar1 + 0x10);
  *(long *)(unaff_x22 + 0x130) = unaff_x22;
  *(code **)(unaff_x22 + 0x138) = FUN_1007726c4;
  _swift_continuation_init(unaff_x22 + 0x130,1);
  FUN_100772ef4();
  _swift_continuation_await(unaff_x22 + 0x130);
  return;
}



/* Address: 0x1007726c4 | FUN_1007726c4 */

void FUN_1007726c4(void)

{
  long *plVar1;
  long *unaff_x22;
  long lVar2;
  long lVar3;
  
  lVar3 = *unaff_x22;
  lVar2 = *unaff_x22;
  if (*(long *)(lVar3 + 0x150) != 0) {
    *(long *)(lVar3 + 0x2b8) = *(long *)(lVar3 + 0x150);
    _swift_willThrow();
    _swift_task_switch(FUN_100772800,0,0);
    return;
  }
  _swift_getAssociatedConformanceWitness
            (*(undefined8 *)(lVar3 + 0x1d0),*(undefined8 *)(lVar3 + 0x1d8),
             *(undefined8 *)(lVar3 + 0x288),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
            );
  plVar1 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
  _swift_task_alloc();
  *(long **)(lVar3 + 0x2a8) = plVar1;
  *plVar1 = lVar2;
  plVar1[1] = (long)FUN_10077279c;
  Swift::AsyncIteratorProtocol::_next();
  return;
}



/* Address: 0x10077279c | FUN_10077279c */

void FUN_10077279c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x2b0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x2a8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1007728c8;
  }
  else {
    pcVar1 = FUN_100772e2c;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100772800 | FUN_100772800 */

void FUN_100772800(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x298);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x280);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x270);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x260);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x248);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x240);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x220);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x218);
  (**(code **)(*(long *)(unaff_x22 + 0x290) + 8))(uVar1,*(undefined8 *)(unaff_x22 + 0x288));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar8);
                    /* WARNING: Could not recover jumptable at 0x0001007728c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1007728c8 | FUN_1007728c8 */

void FUN_1007728c8(void)

{
  Task TVar1;
  undefined *puVar2;
  Optional OVar3;
  CancellationError CVar4;
  undefined8 uVar5;
  UnsafeContinuation UVar6;
  CancellationError CVar7;
  CancellationError CVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  Task TVar15;
  undefined8 uVar16;
  long lVar17;
  long unaff_x22;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  long lVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  
  lVar23 = *(long *)(unaff_x22 + 0x268);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x260);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x1e0);
  uVar25 = uVar18;
  (**(code **)(lVar23 + 0x30))(uVar18,1,uVar20);
  if ((int)uVar25 == 1) {
    uVar16 = *(undefined8 *)(unaff_x22 + 0x2a0);
    uVar25 = *(undefined8 *)(unaff_x22 + 0x1e8);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x1f0);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x1d0);
    uVar24 = *(undefined8 *)(unaff_x22 + 0x1d8);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x1c0);
    uVar26 = *(undefined8 *)(unaff_x22 + 0x1c8);
    (**(code **)(*(long *)(unaff_x22 + 600) + 8))(uVar18,*(undefined8 *)(unaff_x22 + 0x250));
    *(undefined8 *)(unaff_x22 + 0x180) = uVar26;
    *(undefined8 *)(unaff_x22 + 0x188) = uVar24;
    *(undefined8 *)(unaff_x22 + 400) = uVar22;
    *(undefined8 *)(unaff_x22 + 0x198) = uVar19;
    *(undefined8 *)(unaff_x22 + 0x88) = uVar26;
    *(undefined8 *)(unaff_x22 + 0x1a0) = uVar20;
    *(undefined8 *)(unaff_x22 + 0x1a8) = uVar25;
    *(undefined8 *)(unaff_x22 + 0x90) = uVar24;
    *(undefined8 *)(unaff_x22 + 0x98) = uVar22;
    *(undefined8 *)(unaff_x22 + 0xa0) = uVar19;
    *(undefined8 *)(unaff_x22 + 0xa8) = uVar20;
    *(undefined8 *)(unaff_x22 + 0xb0) = uVar25;
    uVar18 = 0;
    FUN_10075d17c(0);
    *(undefined8 *)(unaff_x22 + 0xb8) = uVar26;
    *(undefined8 *)(unaff_x22 + 0xc0) = uVar24;
    *(undefined8 *)(unaff_x22 + 200) = uVar22;
    *(undefined8 *)(unaff_x22 + 0xd0) = uVar19;
    *(undefined8 *)(unaff_x22 + 0xd8) = uVar20;
    *(undefined8 *)(unaff_x22 + 0xe0) = uVar25;
    FUN_100769448(0xff,(undefined8 *)(unaff_x22 + 0xb8));
    OVar3 = Swift::Optional::typeMetadataAccessor();
    FUN_10079f534(unaff_x22 + 0x118,FUN_1007748c4,unaff_x22 + 0x170,uVar16,uVar18,OVar3.value);
    TVar15.unknown = *(undefined **)(unaff_x22 + 0x118);
    if ((((ulong)TVar15.unknown ^ 0xffffffffffffffff) & 0xf000000000000007) != 0) {
      TVar1.unknown = *(undefined **)(unaff_x22 + 0x120);
      lVar23 = *(long *)(unaff_x22 + 0x128);
      if ((long)TVar15.unknown < 0) {
        lVar17 = *(long *)(lVar23 + 0x10);
        if (lVar17 != 0) {
          CVar4 = Swift::CancellationError::typeMetadataAccessor();
          CVar7 = CVar4;
          FUN_10076915c();
          puVar2 = PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
          puVar21 = (undefined8 *)(lVar23 + 0x20);
          do {
            uVar25 = *(undefined8 *)(unaff_x22 + 0x200);
            uVar18 = *puVar21;
            CVar8 = CVar4;
            _swift_allocError(CVar4.unknown,CVar7.unknown,0,0);
            Swift::CancellationError::init();
            puVar9 = (undefined8 *)puVar2;
            _swift_allocError(uVar25,puVar2,0,0);
            *puVar9 = CVar8.unknown;
            _swift_continuation_throwingResumeWithError(uVar18,uVar25);
            lVar17 = lVar17 + -1;
            puVar21 = puVar21 + 1;
          } while (lVar17 != 0);
        }
        uVar25 = *(undefined8 *)(unaff_x22 + 0x220);
        uVar18 = *(undefined8 *)(unaff_x22 + 0x208);
        lVar17 = *(long *)(unaff_x22 + 0x1f8);
        Swift::Task::cancel(TVar1);
        (**(code **)(*(long *)(lVar17 + -8) + 0x38))(uVar25,1,1,lVar17);
        _swift_storeEnumTagMultiPayload(uVar25,uVar18,0);
        FUN_10072e9c0(uVar25,(ulong)TVar15.unknown & 0x7fffffffffffffff,uVar18);
      }
      else {
        lVar17 = *(long *)(TVar1.unknown + 0x10);
        if (lVar17 != 0) {
          CVar4 = Swift::CancellationError::typeMetadataAccessor();
          CVar7 = CVar4;
          FUN_10076915c();
          puVar2 = PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
          puVar21 = (undefined8 *)(TVar1.unknown + 0x20);
          do {
            uVar25 = *(undefined8 *)(unaff_x22 + 0x200);
            uVar18 = *puVar21;
            CVar8 = CVar4;
            _swift_allocError(CVar4.unknown,CVar7.unknown,0,0);
            Swift::CancellationError::init();
            puVar9 = (undefined8 *)puVar2;
            _swift_allocError(uVar25,puVar2,0,0);
            *puVar9 = CVar8.unknown;
            _swift_continuation_throwingResumeWithError(uVar18,uVar25);
            lVar17 = lVar17 + -1;
            puVar21 = puVar21 + 1;
          } while (lVar17 != 0);
        }
        Swift::Task::cancel(TVar15);
      }
      FUN_100774858(TVar15.unknown,TVar1.unknown,lVar23);
    }
    uVar18 = *(undefined8 *)(unaff_x22 + 0x298);
    uVar25 = *(undefined8 *)(unaff_x22 + 0x280);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x270);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x260);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x248);
    uVar24 = *(undefined8 *)(unaff_x22 + 0x240);
    uVar26 = *(undefined8 *)(unaff_x22 + 0x220);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x218);
    (**(code **)(*(long *)(unaff_x22 + 0x290) + 8))(uVar18,*(undefined8 *)(unaff_x22 + 0x288));
    _swift_task_dealloc(uVar18);
    _swift_task_dealloc(uVar25);
    _swift_task_dealloc(uVar20);
    _swift_task_dealloc(uVar19);
    _swift_task_dealloc(uVar22);
    _swift_task_dealloc(uVar24);
    _swift_task_dealloc(uVar26);
    _swift_task_dealloc(uVar16);
                    /* WARNING: Could not recover jumptable at 0x000100772e28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar13 = *(undefined8 *)(unaff_x22 + 0x2a0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x270);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x248);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x240);
  lVar17 = *(long *)(unaff_x22 + 0x238);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x230);
  lVar12 = *(long *)(unaff_x22 + 0x228);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x1e8);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x1f0);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x1d0);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x1d8);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x1c0);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x1c8);
  (**(code **)(lVar23 + 0x20))(uVar5,uVar18,uVar20);
  *(undefined8 *)(unaff_x22 + 0xe8) = uVar16;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar16;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar26;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar24;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar22;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar19;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar25;
  *(undefined8 *)(unaff_x22 + 0x50) = uVar5;
  *(undefined8 *)(unaff_x22 + 0xf0) = uVar26;
  *(undefined8 *)(unaff_x22 + 0xf8) = uVar24;
  *(undefined8 *)(unaff_x22 + 0x100) = uVar22;
  *(undefined8 *)(unaff_x22 + 0x108) = uVar19;
  *(undefined8 *)(unaff_x22 + 0x110) = uVar25;
  uVar25 = 0;
  FUN_10075d17c(0);
  FUN_10079f534(uVar14,FUN_1007748dc,unaff_x22 + 0x10,uVar13,uVar25,uVar11);
  (**(code **)(lVar17 + 0x10))(uVar10,uVar14,uVar11);
  (**(code **)(*(long *)(lVar12 + -8) + 0x30))(uVar10,1);
  if ((int)uVar10 != 1) {
    puVar21 = *(undefined8 **)(unaff_x22 + 0x240);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x220);
    uVar25 = *(undefined8 *)(unaff_x22 + 0x218);
    lVar17 = *(long *)(unaff_x22 + 0x210);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x208);
    uVar19 = *puVar21;
    UVar6 = Swift::UnsafeContinuation::typeMetadataAccessor();
    lVar23 = 0;
    _swift_getTupleTypeMetadata2(0,UVar6.unknown,uVar20,"downstreamContinuation result ",0);
    (**(code **)(lVar17 + 0x20))(uVar18,(long)puVar21 + (long)*(int *)(lVar23 + 0x30),uVar20);
    (**(code **)(lVar17 + 0x10))(uVar25,uVar18,uVar20);
    FUN_10072e9c0(uVar25,uVar19,uVar20);
    (**(code **)(lVar17 + 8))(uVar18,uVar20);
  }
  uVar18 = *(undefined8 *)(unaff_x22 + 0x270);
  lVar23 = *(long *)(unaff_x22 + 0x268);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x1e0);
  (**(code **)(*(long *)(unaff_x22 + 0x238) + 8))
            (*(undefined8 *)(unaff_x22 + 0x248),*(undefined8 *)(unaff_x22 + 0x230));
  (**(code **)(lVar23 + 8))(uVar18,uVar25);
  *(long *)(unaff_x22 + 0x130) = unaff_x22;
  *(code **)(unaff_x22 + 0x138) = FUN_1007726c4;
  _swift_continuation_init(unaff_x22 + 0x130,1);
  FUN_100772ef4();
  _swift_continuation_await(unaff_x22 + 0x130);
  return;
}



/* Address: 0x100772e2c | FUN_100772e2c */

void FUN_100772e2c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x298);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x280);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x270);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x260);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x248);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x240);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x220);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x218);
  (**(code **)(*(long *)(unaff_x22 + 0x290) + 8))(uVar1,*(undefined8 *)(unaff_x22 + 0x288));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar8);
                    /* WARNING: Could not recover jumptable at 0x000100772ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100772ef4 | FUN_100772ef4 */

void FUN_100772ef4(undefined8 param_1,long *param_2,undefined8 param_3)

{
  Optional OVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong local_d8;
  ulong local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 auStack_a0 [16];
  ulong local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  lVar5 = *param_2;
  lVar6 = param_2[2];
  uVar8 = *(ulong *)(lVar5 + 0x58);
  uStack_88 = *(undefined8 *)(lVar5 + 0x58);
  uVar7 = *(ulong *)(lVar5 + 0x50);
  uStack_78 = *(undefined8 *)(lVar5 + 0x68);
  uVar11 = *(undefined8 *)(lVar5 + 0x60);
  uVar9 = *(undefined8 *)(lVar5 + 0x68);
  uVar10 = *(undefined8 *)(lVar5 + 0x78);
  uStack_68 = *(undefined8 *)(lVar5 + 0x78);
  uVar12 = *(undefined8 *)(lVar5 + 0x70);
  uVar2 = 0;
  local_d8 = uVar7;
  local_d0 = uVar8;
  local_c8 = uVar11;
  local_c0 = uVar9;
  local_b8 = uVar12;
  local_b0 = uVar10;
  local_90 = uVar7;
  uStack_80 = uVar11;
  local_70 = uVar12;
  local_60 = param_1;
  FUN_10075d17c(0,&local_d8);
  local_d8 = uVar7;
  local_d0 = uVar8;
  local_c8 = uVar11;
  local_c0 = uVar9;
  local_b8 = uVar12;
  local_b0 = uVar10;
  FUN_1007693a8(0xff,&local_d8);
  OVar1 = Swift::Optional::typeMetadataAccessor();
  FUN_10079f534(&local_d8,param_3,auStack_a0,lVar6,uVar2,OVar1.value);
  uVar7 = local_d0;
  uVar8 = local_d8;
  if ((((local_d8 ^ 0xffffffffffffffff) & 0xf00000000000000f) != 0) ||
     ((local_d0 & 0xf000000000000007) != 0xf000000000000007)) {
    if ((long)local_d0 < 0) {
      uVar7 = local_d0 & 0x7fffffffffffffff;
      puVar3 = &DAT_100fdfb40;
      FUN_1000f7830(&DAT_100fdfb40,&DAT_100c74390);
      puVar4 = (ulong *)PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
      _swift_allocError();
      *puVar4 = uVar7;
      _swift_continuation_throwingResumeWithError(uVar8,puVar3);
    }
    else {
      _swift_continuation_throwingResume(local_d8);
      FUN_1007748a0(uVar8,uVar7);
    }
  }
  return;
}



/* Address: 0x10077305c | FUN_10077305c */

void FUN_10077305c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  Optional OVar3;
  long lVar4;
  undefined7 extraout_var;
  long lVar5;
  undefined7 extraout_var_00;
  long lVar6;
  undefined7 extraout_var_01;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  long local_d0;
  long lStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  long local_b0;
  long lStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar2 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar1 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  lVar4 = 0xff;
  local_f0 = param_7;
  local_e8 = param_5;
  local_e0 = param_8;
  local_d8 = param_3;
  local_c0 = param_6;
  local_b8 = param_9;
  local_a0 = param_1;
  uStack_98 = param_2;
  _swift_getAssociatedTypeWitness
            (0xff,param_9,param_6,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  OVar3 = Swift::Optional::typeMetadataAccessor();
  lStack_a8 = CONCAT71(extraout_var,OVar3.value);
  local_b0 = *(long *)(lStack_a8 + -8);
  lVar8 = (long)&local_f0 - (*(long *)(local_b0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,param_8,param_5,puVar2,puVar1);
  OVar3 = Swift::Optional::typeMetadataAccessor();
  lStack_c8 = CONCAT71(extraout_var_00,OVar3.value);
  local_d0 = *(long *)(lStack_c8 + -8);
  lVar10 = lVar8 - (*(long *)(local_d0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,param_7,param_4,puVar2,puVar1);
  OVar3 = Swift::Optional::typeMetadataAccessor();
  lVar9 = *(long *)(CONCAT71(extraout_var_01,OVar3.value) + -8);
  lVar11 = lVar10 - (*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(*(long *)(lVar6 + -8) + 0x38))(lVar11,1,1,lVar6);
  lVar6 = *(long *)(lVar5 + -8);
  (**(code **)(lVar6 + 0x10))(lVar10,local_d8,lVar5);
  (**(code **)(lVar6 + 0x38))(lVar10,0,1,lVar5);
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))(lVar8,1,1,lVar4);
  uStack_88 = local_e8;
  local_80 = local_c0;
  uStack_78 = local_f0;
  local_70 = local_e0;
  uStack_68 = local_b8;
  uVar7 = 0;
  local_90 = param_4;
  FUN_10075d17c(0,&local_90);
  FUN_100763dd8(local_a0,lVar11,lVar10,lVar8,uVar7);
  (**(code **)(local_b0 + 8))(lVar8,lStack_a8);
  (**(code **)(local_d0 + 8))(lVar10,lStack_c8);
  (**(code **)(lVar9 + 8))(lVar11,CONCAT71(extraout_var_01,OVar3.value));
  return;
}



/* Address: 0x100773290 | FUN_100773290 */

void FUN_100773290(void)

{
  undefined *puVar1;
  Optional OVar2;
  Result RVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined7 extraout_var;
  undefined8 uVar6;
  undefined *puVar7;
  undefined7 extraout_var_00;
  ulong uVar8;
  ulong uVar9;
  undefined7 extraout_var_01;
  undefined8 uVar10;
  undefined8 in_x3;
  long *in_x4;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long unaff_x22;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  *(undefined8 *)(unaff_x22 + 0x1b0) = in_x3;
  *(long **)(unaff_x22 + 0x1b8) = in_x4;
  lVar13 = *in_x4;
  uVar15 = *(undefined8 *)(lVar13 + 0x68);
  *(undefined8 *)(unaff_x22 + 0x1c0) = uVar15;
  uVar16 = *(undefined8 *)(lVar13 + 0x50);
  *(undefined8 *)(unaff_x22 + 0x1c8) = uVar16;
  puVar1 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar7 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  uVar4 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar15,uVar16,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  uVar17 = *(undefined8 *)(lVar13 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x1d0) = uVar17;
  uVar18 = *(undefined8 *)(lVar13 + 0x58);
  *(undefined8 *)(unaff_x22 + 0x1d8) = uVar18;
  uVar5 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,uVar17,uVar18,puVar1,puVar7);
  uVar10 = *(undefined8 *)(lVar13 + 0x78);
  *(undefined8 *)(unaff_x22 + 0x1e0) = uVar10;
  lVar14 = *(long *)(lVar13 + 0x60);
  *(long *)(unaff_x22 + 0x1e8) = lVar14;
  lVar13 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,uVar10,lVar14,puVar1,puVar7);
  *(long *)(unaff_x22 + 0x1f0) = lVar13;
  OVar2 = Swift::Optional::typeMetadataAccessor();
  lVar12 = CONCAT71(extraout_var,OVar2.value);
  *(long *)(unaff_x22 + 0x1f8) = lVar12;
  uVar6 = 0xff;
  _swift_getTupleTypeMetadata3(0xff,uVar4,uVar5,lVar12,0,0);
  *(undefined8 *)(unaff_x22 + 0x200) = uVar6;
  Swift::Optional::typeMetadataAccessor();
  puVar7 = &DAT_100fdfb40;
  FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
  *(undefined **)(unaff_x22 + 0x208) = puVar7;
  RVar3 = Swift::Result::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x210) = CONCAT71(extraout_var_00,RVar3.value);
  lVar11 = *(long *)(CONCAT71(extraout_var_00,RVar3.value) + -8);
  *(long *)(unaff_x22 + 0x218) = lVar11;
  uVar9 = *(long *)(lVar11 + 0x40) + 0xf;
  uVar8 = uVar9 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x220) = uVar8;
  uVar9 = uVar9 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(undefined8 *)(unaff_x22 + 0x58) = uVar16;
  *(ulong *)(unaff_x22 + 0x228) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x60) = uVar18;
  *(long *)(unaff_x22 + 0x68) = lVar14;
  *(undefined8 *)(unaff_x22 + 0x70) = uVar15;
  *(undefined8 *)(unaff_x22 + 0x78) = uVar17;
  *(undefined8 *)(unaff_x22 + 0x80) = uVar10;
  uVar4 = 0xff;
  FUN_100769150();
  *(undefined8 *)(unaff_x22 + 0x230) = uVar4;
  OVar2 = Swift::Optional::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x238) = CONCAT71(extraout_var_01,OVar2.value);
  lVar11 = *(long *)(CONCAT71(extraout_var_01,OVar2.value) + -8);
  *(long *)(unaff_x22 + 0x240) = lVar11;
  uVar9 = *(long *)(lVar11 + 0x40) + 0xf;
  uVar8 = uVar9 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x248) = uVar8;
  uVar9 = uVar9 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x250) = uVar9;
  lVar12 = *(long *)(lVar12 + -8);
  *(long *)(unaff_x22 + 600) = lVar12;
  uVar9 = *(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x260) = uVar9;
  lVar13 = *(long *)(lVar13 + -8);
  *(long *)(unaff_x22 + 0x268) = lVar13;
  uVar9 = *(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x270) = uVar9;
  lVar13 = *(long *)(lVar14 + -8);
  *(long *)(unaff_x22 + 0x278) = lVar13;
  uVar9 = *(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x280) = uVar9;
  lVar13 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar10,lVar14,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  *(long *)(unaff_x22 + 0x288) = lVar13;
  lVar13 = *(long *)(lVar13 + -8);
  *(long *)(unaff_x22 + 0x290) = lVar13;
  uVar9 = *(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x298) = uVar9;
  _swift_task_switch(FUN_10077351c,0,0);
  return;
}



/* Address: 0x10077351c | FUN_10077351c */

void FUN_10077351c(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x1b8);
  (**(code **)(*(long *)(unaff_x22 + 0x278) + 0x10))
            (*(undefined8 *)(unaff_x22 + 0x280),*(undefined8 *)(unaff_x22 + 0x1b0),
             *(undefined8 *)(unaff_x22 + 0x1e8));
  Swift::AsyncSequence::_makeAsyncIterator();
  *(undefined8 *)(unaff_x22 + 0x2a0) = *(undefined8 *)(lVar1 + 0x10);
  *(long *)(unaff_x22 + 0x130) = unaff_x22;
  *(code **)(unaff_x22 + 0x138) = FUN_1007735c4;
  _swift_continuation_init(unaff_x22 + 0x130,1);
  FUN_100772ef4();
  _swift_continuation_await(unaff_x22 + 0x130);
  return;
}



/* Address: 0x1007735c4 | FUN_1007735c4 */

void FUN_1007735c4(void)

{
  long *plVar1;
  long *unaff_x22;
  long lVar2;
  long lVar3;
  
  lVar3 = *unaff_x22;
  lVar2 = *unaff_x22;
  if (*(long *)(lVar3 + 0x150) != 0) {
    *(long *)(lVar3 + 0x2b8) = *(long *)(lVar3 + 0x150);
    _swift_willThrow();
    _swift_task_switch(FUN_100773700,0,0);
    return;
  }
  _swift_getAssociatedConformanceWitness
            (*(undefined8 *)(lVar3 + 0x1e0),*(undefined8 *)(lVar3 + 0x1e8),
             *(undefined8 *)(lVar3 + 0x288),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
            );
  plVar1 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
  _swift_task_alloc();
  *(long **)(lVar3 + 0x2a8) = plVar1;
  *plVar1 = lVar2;
  plVar1[1] = (long)FUN_10077369c;
  Swift::AsyncIteratorProtocol::_next();
  return;
}



/* Address: 0x10077369c | FUN_10077369c */

void FUN_10077369c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x2b0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x2a8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1007737c8;
  }
  else {
    pcVar1 = FUN_100773d2c;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100773700 | FUN_100773700 */

void FUN_100773700(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x298);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x280);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x270);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x260);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x250);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x248);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x228);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x220);
  (**(code **)(*(long *)(unaff_x22 + 0x290) + 8))(uVar1,*(undefined8 *)(unaff_x22 + 0x288));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar8);
                    /* WARNING: Could not recover jumptable at 0x0001007737c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1007737c8 | FUN_1007737c8 */

void FUN_1007737c8(void)

{
  Task TVar1;
  undefined *puVar2;
  Optional OVar3;
  CancellationError CVar4;
  undefined8 uVar5;
  UnsafeContinuation UVar6;
  CancellationError CVar7;
  CancellationError CVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  Task TVar15;
  undefined8 uVar16;
  long lVar17;
  long unaff_x22;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  long lVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  
  lVar23 = *(long *)(unaff_x22 + 0x268);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x260);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x1f0);
  uVar25 = uVar18;
  (**(code **)(lVar23 + 0x30))(uVar18,1,uVar20);
  if ((int)uVar25 == 1) {
    uVar16 = *(undefined8 *)(unaff_x22 + 0x2a0);
    uVar25 = *(undefined8 *)(unaff_x22 + 0x1e0);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x1e8);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x1d0);
    uVar24 = *(undefined8 *)(unaff_x22 + 0x1d8);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x1c0);
    uVar26 = *(undefined8 *)(unaff_x22 + 0x1c8);
    (**(code **)(*(long *)(unaff_x22 + 600) + 8))(uVar18,*(undefined8 *)(unaff_x22 + 0x1f8));
    *(undefined8 *)(unaff_x22 + 0x180) = uVar26;
    *(undefined8 *)(unaff_x22 + 0x188) = uVar24;
    *(undefined8 *)(unaff_x22 + 400) = uVar22;
    *(undefined8 *)(unaff_x22 + 0x198) = uVar19;
    *(undefined8 *)(unaff_x22 + 0x88) = uVar26;
    *(undefined8 *)(unaff_x22 + 0x1a0) = uVar20;
    *(undefined8 *)(unaff_x22 + 0x1a8) = uVar25;
    *(undefined8 *)(unaff_x22 + 0x90) = uVar24;
    *(undefined8 *)(unaff_x22 + 0x98) = uVar22;
    *(undefined8 *)(unaff_x22 + 0xa0) = uVar19;
    *(undefined8 *)(unaff_x22 + 0xa8) = uVar20;
    *(undefined8 *)(unaff_x22 + 0xb0) = uVar25;
    uVar18 = 0;
    FUN_10075d17c(0);
    *(undefined8 *)(unaff_x22 + 0xb8) = uVar26;
    *(undefined8 *)(unaff_x22 + 0xc0) = uVar24;
    *(undefined8 *)(unaff_x22 + 200) = uVar22;
    *(undefined8 *)(unaff_x22 + 0xd0) = uVar19;
    *(undefined8 *)(unaff_x22 + 0xd8) = uVar20;
    *(undefined8 *)(unaff_x22 + 0xe0) = uVar25;
    FUN_100769448(0xff,(undefined8 *)(unaff_x22 + 0xb8));
    OVar3 = Swift::Optional::typeMetadataAccessor();
    FUN_10079f534(unaff_x22 + 0x118,FUN_100774840,unaff_x22 + 0x170,uVar16,uVar18,OVar3.value);
    TVar15.unknown = *(undefined **)(unaff_x22 + 0x118);
    if ((((ulong)TVar15.unknown ^ 0xffffffffffffffff) & 0xf000000000000007) != 0) {
      TVar1.unknown = *(undefined **)(unaff_x22 + 0x120);
      lVar23 = *(long *)(unaff_x22 + 0x128);
      if ((long)TVar15.unknown < 0) {
        lVar17 = *(long *)(lVar23 + 0x10);
        if (lVar17 != 0) {
          CVar4 = Swift::CancellationError::typeMetadataAccessor();
          CVar7 = CVar4;
          FUN_10076915c();
          puVar2 = PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
          puVar21 = (undefined8 *)(lVar23 + 0x20);
          do {
            uVar25 = *(undefined8 *)(unaff_x22 + 0x208);
            uVar18 = *puVar21;
            CVar8 = CVar4;
            _swift_allocError(CVar4.unknown,CVar7.unknown,0,0);
            Swift::CancellationError::init();
            puVar9 = (undefined8 *)puVar2;
            _swift_allocError(uVar25,puVar2,0,0);
            *puVar9 = CVar8.unknown;
            _swift_continuation_throwingResumeWithError(uVar18,uVar25);
            lVar17 = lVar17 + -1;
            puVar21 = puVar21 + 1;
          } while (lVar17 != 0);
        }
        uVar25 = *(undefined8 *)(unaff_x22 + 0x228);
        uVar18 = *(undefined8 *)(unaff_x22 + 0x210);
        lVar17 = *(long *)(unaff_x22 + 0x200);
        Swift::Task::cancel(TVar1);
        (**(code **)(*(long *)(lVar17 + -8) + 0x38))(uVar25,1,1,lVar17);
        _swift_storeEnumTagMultiPayload(uVar25,uVar18,0);
        FUN_10072e9c0(uVar25,(ulong)TVar15.unknown & 0x7fffffffffffffff,uVar18);
      }
      else {
        lVar17 = *(long *)(TVar1.unknown + 0x10);
        if (lVar17 != 0) {
          CVar4 = Swift::CancellationError::typeMetadataAccessor();
          CVar7 = CVar4;
          FUN_10076915c();
          puVar2 = PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
          puVar21 = (undefined8 *)(TVar1.unknown + 0x20);
          do {
            uVar25 = *(undefined8 *)(unaff_x22 + 0x208);
            uVar18 = *puVar21;
            CVar8 = CVar4;
            _swift_allocError(CVar4.unknown,CVar7.unknown,0,0);
            Swift::CancellationError::init();
            puVar9 = (undefined8 *)puVar2;
            _swift_allocError(uVar25,puVar2,0,0);
            *puVar9 = CVar8.unknown;
            _swift_continuation_throwingResumeWithError(uVar18,uVar25);
            lVar17 = lVar17 + -1;
            puVar21 = puVar21 + 1;
          } while (lVar17 != 0);
        }
        Swift::Task::cancel(TVar15);
      }
      FUN_100774858(TVar15.unknown,TVar1.unknown,lVar23);
    }
    uVar18 = *(undefined8 *)(unaff_x22 + 0x298);
    uVar25 = *(undefined8 *)(unaff_x22 + 0x280);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x270);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x260);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x250);
    uVar24 = *(undefined8 *)(unaff_x22 + 0x248);
    uVar26 = *(undefined8 *)(unaff_x22 + 0x228);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x220);
    (**(code **)(*(long *)(unaff_x22 + 0x290) + 8))(uVar18,*(undefined8 *)(unaff_x22 + 0x288));
    _swift_task_dealloc(uVar18);
    _swift_task_dealloc(uVar25);
    _swift_task_dealloc(uVar20);
    _swift_task_dealloc(uVar19);
    _swift_task_dealloc(uVar22);
    _swift_task_dealloc(uVar24);
    _swift_task_dealloc(uVar26);
    _swift_task_dealloc(uVar16);
                    /* WARNING: Could not recover jumptable at 0x000100773d28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar13 = *(undefined8 *)(unaff_x22 + 0x2a0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x270);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x250);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x248);
  lVar17 = *(long *)(unaff_x22 + 0x240);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x238);
  lVar12 = *(long *)(unaff_x22 + 0x230);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x1e0);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x1e8);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x1d0);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x1d8);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x1c0);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x1c8);
  (**(code **)(lVar23 + 0x20))(uVar5,uVar18,uVar20);
  *(undefined8 *)(unaff_x22 + 0xe8) = uVar16;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar16;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar26;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar24;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar22;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar19;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar25;
  *(undefined8 *)(unaff_x22 + 0x50) = uVar5;
  *(undefined8 *)(unaff_x22 + 0xf0) = uVar26;
  *(undefined8 *)(unaff_x22 + 0xf8) = uVar24;
  *(undefined8 *)(unaff_x22 + 0x100) = uVar22;
  *(undefined8 *)(unaff_x22 + 0x108) = uVar19;
  *(undefined8 *)(unaff_x22 + 0x110) = uVar25;
  uVar25 = 0;
  FUN_10075d17c(0);
  FUN_10079f534(uVar14,FUN_10077486c,unaff_x22 + 0x10,uVar13,uVar25,uVar11);
  (**(code **)(lVar17 + 0x10))(uVar10,uVar14,uVar11);
  (**(code **)(*(long *)(lVar12 + -8) + 0x30))(uVar10,1);
  if ((int)uVar10 != 1) {
    puVar21 = *(undefined8 **)(unaff_x22 + 0x248);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x228);
    uVar25 = *(undefined8 *)(unaff_x22 + 0x220);
    lVar17 = *(long *)(unaff_x22 + 0x218);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x210);
    uVar19 = *puVar21;
    UVar6 = Swift::UnsafeContinuation::typeMetadataAccessor();
    lVar23 = 0;
    _swift_getTupleTypeMetadata2(0,UVar6.unknown,uVar20,"downstreamContinuation result ",0);
    (**(code **)(lVar17 + 0x20))(uVar18,(long)puVar21 + (long)*(int *)(lVar23 + 0x30),uVar20);
    (**(code **)(lVar17 + 0x10))(uVar25,uVar18,uVar20);
    FUN_10072e9c0(uVar25,uVar19,uVar20);
    (**(code **)(lVar17 + 8))(uVar18,uVar20);
  }
  uVar18 = *(undefined8 *)(unaff_x22 + 0x270);
  lVar23 = *(long *)(unaff_x22 + 0x268);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x1f0);
  (**(code **)(*(long *)(unaff_x22 + 0x240) + 8))
            (*(undefined8 *)(unaff_x22 + 0x250),*(undefined8 *)(unaff_x22 + 0x238));
  (**(code **)(lVar23 + 8))(uVar18,uVar25);
  *(long *)(unaff_x22 + 0x130) = unaff_x22;
  *(code **)(unaff_x22 + 0x138) = FUN_1007735c4;
  _swift_continuation_init(unaff_x22 + 0x130,1);
  FUN_100772ef4();
  _swift_continuation_await(unaff_x22 + 0x130);
  return;
}



/* Address: 0x100773d2c | FUN_100773d2c */

void FUN_100773d2c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x298);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x280);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x270);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x260);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x250);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x248);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x228);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x220);
  (**(code **)(*(long *)(unaff_x22 + 0x290) + 8))(uVar1,*(undefined8 *)(unaff_x22 + 0x288));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar8);
                    /* WARNING: Could not recover jumptable at 0x000100773df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100773df4 | FUN_100773df4 */

void FUN_100773df4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  Optional OVar3;
  long lVar4;
  undefined7 extraout_var;
  long lVar5;
  undefined7 extraout_var_00;
  long lVar6;
  undefined7 extraout_var_01;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  long local_d8;
  long lStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  long local_b0;
  long lStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar2 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar1 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  lVar4 = 0xff;
  local_f0 = param_7;
  local_e8 = param_5;
  local_e0 = param_8;
  local_c8 = param_3;
  local_c0 = param_6;
  local_b8 = param_9;
  local_a0 = param_1;
  uStack_98 = param_2;
  _swift_getAssociatedTypeWitness
            (0xff,param_9,param_6,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  OVar3 = Swift::Optional::typeMetadataAccessor();
  lStack_a8 = CONCAT71(extraout_var,OVar3.value);
  local_b0 = *(long *)(lStack_a8 + -8);
  lVar8 = (long)&local_f0 - (*(long *)(local_b0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,param_8,param_5,puVar2,puVar1);
  OVar3 = Swift::Optional::typeMetadataAccessor();
  lStack_d0 = CONCAT71(extraout_var_00,OVar3.value);
  local_d8 = *(long *)(lStack_d0 + -8);
  lVar10 = lVar8 - (*(long *)(local_d8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,param_7,param_4,puVar2,puVar1);
  OVar3 = Swift::Optional::typeMetadataAccessor();
  lVar9 = *(long *)(CONCAT71(extraout_var_01,OVar3.value) + -8);
  lVar11 = lVar10 - (*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(*(long *)(lVar6 + -8) + 0x38))(lVar11,1,1,lVar6);
  (**(code **)(*(long *)(lVar5 + -8) + 0x38))(lVar10,1,1,lVar5);
  lVar5 = *(long *)(lVar4 + -8);
  (**(code **)(lVar5 + 0x10))(lVar8,local_c8,lVar4);
  (**(code **)(lVar5 + 0x38))(lVar8,0,1,lVar4);
  uStack_88 = local_e8;
  local_80 = local_c0;
  uStack_78 = local_f0;
  local_70 = local_e0;
  uStack_68 = local_b8;
  uVar7 = 0;
  local_90 = param_4;
  FUN_10075d17c(0,&local_90);
  FUN_100763dd8(local_a0,lVar11,lVar10,lVar8,uVar7);
  (**(code **)(local_b0 + 8))(lVar8,lStack_a8);
  (**(code **)(local_d8 + 8))(lVar10,lStack_d0);
  (**(code **)(lVar9 + 8))(lVar11,CONCAT71(extraout_var_01,OVar3.value));
  return;
}



/* Address: 0x100774028 | FUN_100774028 */

void FUN_100774028(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetClassDescriptor_100cbf170);
  return;
}



/* Address: 0x100774034 | FUN_100774034 */

void FUN_100774034(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x20;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  puVar2 = &local_60;
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x18);
  local_60 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_48 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_50 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_38 = *(undefined8 *)(unaff_x20 + 0x38);
  local_40 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar1 = 0;
  FUN_10075d17c();
  FUN_100762724();
  *param_1 = uVar1;
  param_1[1] = puVar2;
  return;
}



/* Address: 0x100774094 | FUN_100774094 */

void FUN_100774094(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    _swift_release();
    _swift_bridgeObjectRelease(param_2);
    return;
  }
  return;
}



/* Address: 0x1007740c0 | FUN_1007740c0 */

void FUN_1007740c0(undefined8 param_1)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x40;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005c804c;
  FUN_10076f578(plVar1,param_1);
  return;
}



/* Address: 0x10077411c | FUN_10077411c */

void FUN_10077411c(void)

{
  FUN_100770340();
  return;
}



/* Address: 0x100774124 | FUN_100774124 */

void FUN_100774124(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x20;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  puVar2 = &local_60;
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x18);
  local_60 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_48 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_50 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_38 = *(undefined8 *)(unaff_x20 + 0x38);
  local_40 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar1 = 0;
  FUN_10075d17c();
  FUN_100767890();
  *param_1 = uVar1;
  param_1[1] = puVar2;
  param_1[2] = param_4;
  return;
}



/* Address: 0x100774188 | FUN_100774188 */

void FUN_100774188(ulong param_1)

{
  if (((param_1 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) {
    return;
  }
  FUN_10076ef10();
  return;
}



/* Address: 0x10077419c | FUN_10077419c */

void FUN_10077419c(void)

{
  FUN_10076f814();
  return;
}



/* Address: 0x1007741a4 | FUN_1007741a4 */

void FUN_1007741a4(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10076fc2c(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1007741bc | FUN_1007741bc */

void FUN_1007741bc(void)

{
  Optional OVar1;
  undefined7 extraout_var;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  lVar11 = *(long *)(lVar2 + -8);
  uVar8 = (ulong)*(byte *)(lVar11 + 0x50) + 0x50 &
          ((ulong)*(byte *)(lVar11 + 0x50) ^ 0xffffffffffffffff);
  uVar5 = *(long *)(lVar11 + 0x40) + uVar8 + 7 & 0xfffffffffffffff8;
  lVar6 = *(long *)(lVar4 + -8);
  uVar7 = *(byte *)(lVar6 + 0x50) + uVar5 + 8 &
          ((ulong)*(byte *)(lVar6 + 0x50) ^ 0xffffffffffffffff);
  lVar10 = *(long *)(lVar6 + 0x40);
  OVar1 = Swift::Optional::typeMetadataAccessor();
  uVar9 = (ulong)*(byte *)(*(long *)(CONCAT71(extraout_var,OVar1.value) + -8) + 0x50);
  uVar9 = uVar7 + lVar10 + uVar9 & (uVar9 ^ 0xffffffffffffffff);
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  (**(code **)(lVar11 + 8))(unaff_x20 + uVar8,lVar2);
  _swift_release(*(undefined8 *)(unaff_x20 + uVar5));
  (**(code **)(lVar6 + 8))(unaff_x20 + uVar7,lVar4);
  lVar4 = *(long *)(lVar3 + -8);
  lVar2 = unaff_x20 + uVar9;
  (**(code **)(lVar4 + 0x30))(lVar2,1,lVar3);
  if ((int)lVar2 == 0) {
    (**(code **)(lVar4 + 8))(unaff_x20 + uVar9,lVar3);
  }
  _swift_deallocObject();
  return;
}



/* Address: 0x1007742e8 | FUN_1007742e8 */

void FUN_1007742e8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  Optional OVar3;
  undefined7 extraout_var;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long unaff_x20;
  long unaff_x22;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  
  lVar5 = *(long *)(*(long *)(unaff_x20 + 0x20) + -8);
  uVar6 = (ulong)*(byte *)(lVar5 + 0x50);
  uVar9 = uVar6 + 0x50 & (uVar6 ^ 0xffffffffffffffff);
  uVar7 = *(long *)(lVar5 + 0x40) + uVar9 + 7 & 0xfffffffffffffff8;
  lVar5 = *(long *)(*(long *)(unaff_x20 + 0x28) + -8);
  uVar6 = (ulong)*(byte *)(lVar5 + 0x50);
  uVar10 = uVar6 + uVar7 + 8 & (uVar6 ^ 0xffffffffffffffff);
  lVar5 = *(long *)(lVar5 + 0x40);
  OVar3 = Swift::Optional::typeMetadataAccessor();
  uVar6 = (ulong)*(byte *)(*(long *)(CONCAT71(extraout_var,OVar3.value) + -8) + 0x50);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + uVar7);
  plVar4 = (long *)0x1a0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1005c804c;
  FUN_100770758(plVar4,param_1,uVar1,uVar2,unaff_x20 + uVar9,uVar8,unaff_x20 + uVar10,
                unaff_x20 + (uVar10 + lVar5 + uVar6 & (uVar6 ^ 0xffffffffffffffff)));
  return;
}



/* Address: 0x1007743d4 | FUN_1007743d4 */

void FUN_1007743d4(undefined8 param_1,undefined8 param_2)

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
  plVar5 = (long *)0x190;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)thunk_FUN_1005c804c;
  FUN_100770b54(plVar5,param_1,param_2,uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Address: 0x10077445c | FUN_10077445c */

void FUN_10077445c(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  ulong uVar4;
  
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(lVar2 + -8);
  uVar4 = (ulong)*(byte *)(lVar3 + 0x50) + 0x50 &
          ((ulong)*(byte *)(lVar3 + 0x50) ^ 0xffffffffffffffff);
  lVar1 = *(long *)(lVar3 + 0x40);
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  (**(code **)(lVar3 + 8))(unaff_x20 + uVar4,lVar2);
  _swift_release(*(undefined8 *)(unaff_x20 + (lVar1 + uVar4 + 7 & 0xfffffffffffffff8)));
  _swift_deallocObject();
  return;
}



/* Address: 0x1007744d4 | FUN_1007744d4 */

void FUN_1007744d4(undefined8 param_1)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x20;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar3 = *(long *)(*(long *)(unaff_x20 + 0x20) + -8);
  uVar4 = (ulong)*(byte *)(lVar3 + 0x50);
  uVar4 = uVar4 + 0x50 & (uVar4 ^ 0xffffffffffffffff);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x20 + (*(long *)(lVar3 + 0x40) + uVar4 + 7 & 0xfffffffffffffff8));
  plVar2 = (long *)0x2c0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)thunk_FUN_1005c804c;
  FUN_100771780(plVar2,param_1,uVar5,uVar1,unaff_x20 + uVar4,uVar6);
  return;
}



/* Address: 0x100774578 | FUN_100774578 */

void FUN_100774578(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  ulong uVar4;
  
  lVar2 = *(long *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(lVar2 + -8);
  uVar4 = (ulong)*(byte *)(lVar3 + 0x50) + 0x50 &
          ((ulong)*(byte *)(lVar3 + 0x50) ^ 0xffffffffffffffff);
  lVar1 = *(long *)(lVar3 + 0x40);
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  (**(code **)(lVar3 + 8))(unaff_x20 + uVar4,lVar2);
  _swift_release(*(undefined8 *)(unaff_x20 + (lVar1 + uVar4 + 7 & 0xfffffffffffffff8)));
  _swift_deallocObject();
  return;
}



/* Address: 0x1007745f0 | FUN_1007745f0 */

void FUN_1007745f0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar6;
  
  lVar4 = *(long *)(*(long *)(unaff_x20 + 0x28) + -8);
  uVar5 = (ulong)*(byte *)(lVar4 + 0x50);
  uVar5 = uVar5 + 0x50 & (uVar5 ^ 0xffffffffffffffff);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + (*(long *)(lVar4 + 0x40) + uVar5 + 7 & 0xfffffffffffffff8));
  plVar3 = (long *)0x2c0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_1005c804c;
  FUN_10077238c(plVar3,param_1,uVar1,uVar2,unaff_x20 + uVar5,uVar6);
  return;
}



/* Address: 0x100774694 | FUN_100774694 */

void FUN_100774694(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x18);
  local_70 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_60 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_48 = *(undefined8 *)(unaff_x20 + 0x38);
  local_50 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar1 = 0;
  FUN_10075d17c(0,&local_70);
  FUN_100766d44();
  *param_1 = uVar2;
  param_1[1] = uVar1;
  param_1[2] = param_4;
  param_1[3] = param_5;
  return;
}



/* Address: 0x10077470c | FUN_10077470c */

void FUN_10077470c(ulong param_1,undefined8 param_2,ulong param_3)

{
  if (((param_1 & param_3 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) {
    return;
  }
  FUN_10076b600();
  return;
}



/* Address: 0x100774724 | FUN_100774724 */

void FUN_100774724(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  ulong uVar4;
  
  lVar2 = *(long *)(unaff_x20 + 0x30);
  lVar3 = *(long *)(lVar2 + -8);
  uVar4 = (ulong)*(byte *)(lVar3 + 0x50) + 0x50 &
          ((ulong)*(byte *)(lVar3 + 0x50) ^ 0xffffffffffffffff);
  lVar1 = *(long *)(lVar3 + 0x40);
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  (**(code **)(lVar3 + 8))(unaff_x20 + uVar4,lVar2);
  _swift_release(*(undefined8 *)(unaff_x20 + (lVar1 + uVar4 + 7 & 0xfffffffffffffff8)));
  _swift_deallocObject();
  return;
}



/* Address: 0x10077479c | FUN_10077479c */

void FUN_10077479c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar6;
  
  lVar4 = *(long *)(*(long *)(unaff_x20 + 0x30) + -8);
  uVar5 = (ulong)*(byte *)(lVar4 + 0x50);
  uVar5 = uVar5 + 0x50 & (uVar5 ^ 0xffffffffffffffff);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + (*(long *)(lVar4 + 0x40) + uVar5 + 7 & 0xfffffffffffffff8));
  plVar3 = (long *)0x2c0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_1005c804c;
  FUN_100773290(plVar3,param_1,uVar1,uVar2,unaff_x20 + uVar5,uVar6);
  return;
}



/* Address: 0x100774840 | FUN_100774840 */

void FUN_100774840(undefined8 param_1)

{
  FUN_100774928(param_1,2);
  return;
}



/* Address: 0x100774858 | FUN_100774858 */

void FUN_100774858(ulong param_1)

{
  if (((param_1 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) {
    return;
  }
  FUN_1007693fc();
  return;
}



/* Address: 0x10077486c | FUN_10077486c */

void FUN_10077486c(undefined8 param_1)

{
  FUN_1007749bc(param_1,FUN_100773df4);
  return;
}



/* Address: 0x100774888 | FUN_100774888 */

void FUN_100774888(undefined8 param_1)

{
  FUN_1007749fc(param_1,2);
  return;
}



/* Address: 0x1007748a0 | FUN_1007748a0 */

void FUN_1007748a0(ulong param_1,ulong param_2)

{
  if ((((param_1 ^ 0xffffffffffffffff) & 0xf00000000000000f) == 0) &&
     ((param_2 & 0xf000000000000007) == 0xf000000000000007)) {
    return;
  }
  FUN_100769204();
  return;
}



/* Address: 0x1007748c4 | FUN_1007748c4 */

void FUN_1007748c4(undefined8 param_1)

{
  FUN_100774928(param_1,1);
  return;
}



/* Address: 0x1007748dc | FUN_1007748dc */

void FUN_1007748dc(undefined8 param_1)

{
  FUN_1007749bc(param_1,FUN_10077305c);
  return;
}



/* Address: 0x1007748f8 | FUN_1007748f8 */

void FUN_1007748f8(undefined8 param_1)

{
  FUN_1007749fc(param_1,1);
  return;
}



/* Address: 0x100774910 | FUN_100774910 */

void FUN_100774910(undefined8 param_1)

{
  FUN_100774928(param_1,0);
  return;
}



/* Address: 0x100774928 | FUN_100774928 */

void FUN_100774928(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x18);
  local_70 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_60 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_48 = *(undefined8 *)(unaff_x20 + 0x38);
  local_50 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar1 = 0;
  FUN_10075d17c(0,&local_70);
  FUN_100765ed4();
  *param_1 = param_3;
  param_1[1] = uVar1;
  param_1[2] = param_4;
  return;
}



/* Address: 0x1007749a0 | FUN_1007749a0 */

void FUN_1007749a0(undefined8 param_1)

{
  FUN_1007749bc(param_1,FUN_100772158);
  return;
}



/* Address: 0x1007749bc | FUN_1007749bc */

void FUN_1007749bc(undefined8 param_1,code *param_2)

{
  long unaff_x20;
  
  (*param_2)(param_1,*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x10),
             *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
             *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
             *(undefined8 *)(unaff_x20 + 0x38));
  return;
}



/* Address: 0x1007749e4 | FUN_1007749e4 */

void FUN_1007749e4(undefined8 param_1)

{
  FUN_1007749fc(param_1,0);
  return;
}



/* Address: 0x1007749fc | FUN_1007749fc */

void FUN_1007749fc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x18);
  local_70 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_60 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_48 = *(undefined8 *)(unaff_x20 + 0x38);
  local_50 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar1 = 0;
  FUN_10075d17c(0,&local_70);
  FUN_10076389c(param_3,uVar2,uVar1);
  *param_1 = param_3;
  param_1[1] = uVar2;
  return;
}



/* Address: 0x100774a78 | FUN_100774a78 */

void FUN_100774a78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  Optional OVar3;
  undefined7 extraout_var;
  long lVar4;
  undefined8 uVar5;
  long *unaff_x20;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 auStack_100 [2];
  undefined8 local_f0;
  undefined8 uStack_e8;
  long local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  long local_c0;
  undefined8 local_b8;
  long local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  long local_90;
  long lStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  lVar9 = *unaff_x20;
  uVar5 = *(undefined8 *)(lVar9 + 0x60);
  local_d0 = uVar5;
  local_b8 = param_1;
  local_a8 = param_2;
  local_a0 = param_3;
  OVar3 = Swift::Optional::typeMetadataAccessor();
  local_b0 = CONCAT71(extraout_var,OVar3.value);
  local_c0 = *(long *)(local_b0 + -8);
  lVar8 = (long)&local_f0 - (*(long *)(local_c0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = *(long *)(lVar9 + 0x50);
  lVar1 = *(long *)(lVar9 + 0x58);
  local_d8 = *(long *)(lVar1 + -8);
  lVar12 = lVar8 - (*(long *)(local_d8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = *(long *)(lVar4 + -8);
  lVar7 = lVar12 - (*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_c8 = *(undefined8 *)(lVar9 + 0x70);
  uVar2 = *(undefined8 *)(lVar9 + 0x78);
  uStack_e8 = *(undefined8 *)(lVar9 + 0x70);
  local_f0 = *(undefined8 *)(lVar9 + 0x68);
  lVar9 = 0;
  local_90 = lVar4;
  lStack_88 = lVar1;
  local_80 = uVar5;
  local_78 = local_f0;
  uStack_70 = uStack_e8;
  local_68 = uVar2;
  FUN_10075d17c(0,&local_90);
  lVar11 = *(long *)(lVar9 + -8);
  lVar10 = lVar7 - (*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar6 + 0x10))(lVar7,local_b8,lVar4);
  (**(code **)(local_d8 + 0x10))(lVar12,local_a8,lVar1);
  (**(code **)(local_c0 + 0x10))(lVar8,local_a0,local_b0);
  uVar5 = local_f0;
  *(undefined8 *)(lVar10 + -0x10) = uVar2;
  FUN_10076258c(lVar10,lVar7,lVar12,lVar8,lVar4,lVar1,local_d0,uVar5,local_c8);
  lVar4 = lVar10;
  FUN_10079f660(lVar10,lVar9);
  (**(code **)(lVar11 + 8))(lVar10,lVar9);
  unaff_x20[2] = lVar4;
  return;
}



/* Address: 0x100774c28 | FUN_100774c28 */

void FUN_100774c28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _swift_allocObject();
  FUN_100774a78(param_1,param_2,param_3);
  return;
}



/* Address: 0x100774c78 | thunk_FUN_100772800 */

void thunk_FUN_100772800(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x298);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x280);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x270);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x260);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x248);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x240);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x220);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x218);
  (**(code **)(*(long *)(unaff_x22 + 0x290) + 8))(uVar1,*(undefined8 *)(unaff_x22 + 0x288));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar8);
                    /* WARNING: Could not recover jumptable at 0x0001007728c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100774c7c | thunk_FUN_100772e2c */

void thunk_FUN_100772e2c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x298);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x280);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x270);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x260);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x248);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x240);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x220);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x218);
  (**(code **)(*(long *)(unaff_x22 + 0x290) + 8))(uVar1,*(undefined8 *)(unaff_x22 + 0x288));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar8);
                    /* WARNING: Could not recover jumptable at 0x000100772ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100774c80 | FUN_100774c80 */

void FUN_100774c80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  Optional OVar1;
  long lVar2;
  undefined7 extraout_var;
  long lVar3;
  long lVar4;
  undefined8 unaff_x20;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar3 = *(long *)(param_6 + -8);
  puVar6 = &stack0xffffffffffffff60 + -(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,param_8,param_6,
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Duration_100eaeaf0);
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lVar4 = *(long *)(CONCAT71(extraout_var,OVar1.value) + -8);
  lVar5 = (long)puVar6 - (*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = *(long *)(lVar2 + -8);
  lVar7 = lVar5 - (*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = lVar7 - (*(long *)(*(long *)(param_5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(*(long *)(param_5 + -8) + 0x10))(lVar8,unaff_x20,param_5);
  (**(code **)(lVar9 + 0x10))(lVar7,param_2,lVar2);
  (**(code **)(lVar4 + 0x10))(lVar5,param_3,CONCAT71(extraout_var,OVar1.value));
  (**(code **)(lVar3 + 0x10))(puVar6,param_4,param_6);
  FUN_100774df4(param_1,lVar8,lVar7,lVar5,puVar6,param_5,param_6,param_7,param_8);
  return;
}



/* Address: 0x100774df4 | FUN_100774df4 */

void FUN_100774df4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7,undefined8 param_8,undefined8 param_9
                  )

{
  int iVar1;
  Optional OVar2;
  long lVar3;
  long lVar4;
  undefined7 extraout_var;
  long local_70;
  long lStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  (**(code **)(*(long *)(param_6 + -8) + 0x20))(param_1,param_2,param_6);
  lVar3 = 0;
  local_70 = param_6;
  lStack_68 = param_7;
  local_60 = param_8;
  uStack_58 = param_9;
  FUN_1007762ac(0,&local_70);
  iVar1 = *(int *)(lVar3 + 0x38);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_9,param_7,PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008
             ,PTR___associated_type_descriptor_for_Swift_Clock_Duration_100eaeaf0);
  (**(code **)(*(long *)(lVar4 + -8) + 0x20))(param_1 + iVar1,param_3,lVar4);
  iVar1 = *(int *)(lVar3 + 0x3c);
  OVar2 = Swift::Optional::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,OVar2.value) + -8) + 0x20))
            (param_1 + iVar1,param_4,CONCAT71(extraout_var,OVar2.value));
  (**(code **)(*(long *)(param_7 + -8) + 0x20))(param_1 + *(int *)(lVar3 + 0x34),param_5,param_7);
  return;
}



/* Address: 0x100774f00 | FUN_100774f00 */

void FUN_100774f00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8)

{
  ContinuousClock CVar1;
  ContinuousClock CVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_80 [8];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  local_78 = param_4;
  uStack_70 = param_5;
  local_68 = param_6;
  local_60 = param_2;
  uStack_58 = param_3;
  CVar1 = Swift::ContinuousClock::typeMetadataAccessor();
  lVar4 = *(long *)(CVar1.unknown + -8);
  lVar3 = *(long *)(lVar4 + 0x40);
  CVar2 = (extension_Swift)::Swift::Clock::_get_continuous();
  FUN_1007363c8();
  FUN_100774c80(param_1,&local_60,&local_78,auStack_80 + -(lVar3 + 0xfU & 0xfffffffffffffff0),
                param_7,CVar1.unknown,param_8,CVar2.unknown);
  (**(code **)(lVar4 + 8))(auStack_80 + -(lVar3 + 0xfU & 0xfffffffffffffff0),CVar1.unknown);
  return;
}


