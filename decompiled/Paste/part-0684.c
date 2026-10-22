/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10074fc50 | FUN_10074fc50 */

void FUN_10074fc50(undefined8 param_1,long *param_2)

{
  undefined1 *puVar1;
  Optional OVar2;
  undefined7 extraout_var;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined1 auStack_d0 [8];
  long local_c8;
  undefined1 *local_c0;
  long local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined1 auStack_90 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long lVar3;
  
  lVar7 = *param_2;
  local_a0 = param_1;
  FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
  uVar12 = *(undefined8 *)(lVar7 + 0x58);
  uStack_a8 = *(undefined8 *)(lVar7 + 0x58);
  uVar14 = *(undefined8 *)(lVar7 + 0x50);
  local_b0 = uVar14;
  _swift_getAssociatedTypeWitness
            (0xff,uVar12,uVar14,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  Swift::Result::typeMetadataAccessor();
  OVar2 = Swift::Optional::typeMetadataAccessor();
  lVar3 = CONCAT71(extraout_var,OVar2.value);
  lVar7 = 0;
  FUN_1007c3a74(0,lVar3);
  local_c0 = auStack_d0 + -(*(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = *(long *)(lVar3 + -8);
  uVar6 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_c8 = (long)local_c0 - uVar6;
  lVar10 = local_c8 - uVar6;
  lVar4 = 0;
  local_b8 = lVar7;
  FUN_10074e2ac(0,uVar14,uVar12);
  lVar11 = *(long *)(lVar4 + -8);
  uVar6 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar8 = lVar10 - uVar6;
  lVar13 = lVar8 - uVar6;
  lVar7 = param_2[2];
  uStack_78 = uStack_a8;
  local_80 = local_b0;
  local_70 = local_a0;
  uVar5 = 0;
  FUN_10074af20(0,uVar14,uVar12);
  FUN_10079f534(lVar13,FUN_100750974,auStack_90,lVar7,uVar5,lVar4);
  (**(code **)(lVar11 + 0x10))(lVar8,lVar13,lVar4);
  lVar7 = lVar8;
  (**(code **)(lVar9 + 0x30))(lVar8,1,lVar3);
  if ((int)lVar7 != 1) {
    (**(code **)(lVar9 + 0x20))(lVar10,lVar8,lVar3);
    lVar7 = local_c8;
    (**(code **)(lVar9 + 0x10))(local_c8,lVar10,lVar3);
    puVar1 = local_c0;
    FUN_1005cfcb0(local_c0,lVar7,lVar3);
    FUN_10072e9c0(puVar1,local_a0,local_b8);
    (**(code **)(lVar9 + 8))(lVar10,lVar3);
  }
  (**(code **)(lVar11 + 8))(lVar13,lVar4);
  return;
}



/* Address: 0x10074fe88 | FUN_10074fe88 */

void FUN_10074fe88(void)

{
  Result RVar1;
  Optional OVar2;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *unaff_x20;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 auStack_90 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  Task local_70;
  long local_68;
  
  lVar8 = *unaff_x20;
  FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
  uVar7 = *(undefined8 *)(lVar8 + 0x58);
  uStack_a8 = *(undefined8 *)(lVar8 + 0x58);
  uVar11 = *(undefined8 *)(lVar8 + 0x50);
  local_b0 = uVar11;
  _swift_getAssociatedTypeWitness
            (0xff,uVar7,uVar11,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  RVar1 = Swift::Result::typeMetadataAccessor();
  OVar2 = Swift::Optional::typeMetadataAccessor();
  lVar8 = CONCAT71(extraout_var_00,OVar2.value);
  lVar9 = (long)&local_b0 - (*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  FUN_1007c3a74(0,lVar8);
  lVar10 = lVar9 - (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = unaff_x20[2];
  uStack_78 = uStack_a8;
  local_80 = local_b0;
  uVar4 = 0;
  FUN_10074af20(0,uVar11,uVar7);
  uVar5 = 0;
  FUN_10074f4a8(0,uVar11,uVar7);
  FUN_10079f534(&local_70,FUN_1007508ac,auStack_90,lVar6,uVar4,uVar5);
  if (local_70.unknown != (undefined *)0x0) {
    Swift::Task::cancel(local_70);
    if (local_68 != 0) {
      (**(code **)(*(long *)(CONCAT71(extraout_var,RVar1.value) + -8) + 0x38))
                (lVar9,1,1,CONCAT71(extraout_var,RVar1.value));
      FUN_1005cfcb0(lVar10,lVar9,lVar8);
      FUN_10072e9c0(lVar10,local_68,lVar3);
    }
    _swift_release(local_70.unknown);
  }
  return;
}



/* Address: 0x100750054 | FUN_100750054 */

void FUN_100750054(void)

{
  undefined *puVar1;
  Result RVar2;
  Optional OVar3;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined7 extraout_var_01;
  undefined8 in_x3;
  long *in_x4;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x90) = in_x3;
  *(long **)(unaff_x22 + 0x98) = in_x4;
  lVar7 = *in_x4;
  uVar10 = *(undefined8 *)(lVar7 + 0x58);
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar10;
  lVar9 = *(long *)(lVar7 + 0x50);
  *(long *)(unaff_x22 + 0xa8) = lVar9;
  puVar1 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  lVar7 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar10,lVar9,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  *(long *)(unaff_x22 + 0xb0) = lVar7;
  FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
  RVar2 = Swift::Result::typeMetadataAccessor();
  *(ulong *)(unaff_x22 + 0xb8) = CONCAT71(extraout_var,RVar2.value);
  OVar3 = Swift::Optional::typeMetadataAccessor();
  lVar8 = CONCAT71(extraout_var_00,OVar3.value);
  *(long *)(unaff_x22 + 0xc0) = lVar8;
  uVar4 = *(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 200) = uVar4;
  lVar5 = 0;
  FUN_1007c3a74(0,lVar8);
  *(long *)(unaff_x22 + 0xd0) = lVar5;
  lVar8 = *(long *)(lVar5 + -8);
  *(long *)(unaff_x22 + 0xd8) = lVar8;
  uVar4 = *(long *)(lVar8 + 0x40) + 0xf;
  uVar6 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xe0) = uVar6;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xe8) = uVar4;
  lVar8 = 0;
  FUN_10074d6d0(0,lVar9,uVar10);
  *(long *)(unaff_x22 + 0xf0) = lVar8;
  lVar8 = *(long *)(lVar8 + -8);
  *(long *)(unaff_x22 + 0xf8) = lVar8;
  uVar4 = *(long *)(lVar8 + 0x40) + 0xf;
  uVar6 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x100) = uVar6;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x108) = uVar4;
  lVar7 = *(long *)(lVar7 + -8);
  *(long *)(unaff_x22 + 0x110) = lVar7;
  uVar4 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x118) = uVar4;
  OVar3 = Swift::Optional::typeMetadataAccessor();
  uVar4 = *(long *)(*(long *)(CONCAT71(extraout_var_01,OVar3.value) + -8) + 0x40) + 0xfU &
          0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x120) = uVar4;
  lVar7 = *(long *)(lVar9 + -8);
  *(long *)(unaff_x22 + 0x128) = lVar7;
  uVar4 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x130) = uVar4;
  lVar7 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar10,lVar9,puVar1,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  *(long *)(unaff_x22 + 0x138) = lVar7;
  lVar7 = *(long *)(lVar7 + -8);
  *(long *)(unaff_x22 + 0x140) = lVar7;
  uVar4 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x148) = uVar4;
  _swift_task_switch(FUN_10075024c,0,0);
  return;
}



/* Address: 0x10075024c | FUN_10075024c */

void FUN_10075024c(void)

{
  long lVar1;
  long *plVar2;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x98);
  (**(code **)(*(long *)(unaff_x22 + 0x128) + 0x10))
            (*(undefined8 *)(unaff_x22 + 0x130),*(undefined8 *)(unaff_x22 + 0x90),
             *(undefined8 *)(unaff_x22 + 0xa8));
  Swift::AsyncSequence::_makeAsyncIterator();
  *(undefined8 *)(unaff_x22 + 0x150) = *(undefined8 *)(lVar1 + 0x10);
  _swift_getAssociatedConformanceWitness
            (*(undefined8 *)(unaff_x22 + 0xa0),*(undefined8 *)(unaff_x22 + 0xa8),
             *(undefined8 *)(unaff_x22 + 0x138),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
            );
  plVar2 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x158) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_10075031c;
  Swift::AsyncIteratorProtocol::_next();
  return;
}



/* Address: 0x10075031c | FUN_10075031c */

void FUN_10075031c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x160) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x158));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100750380;
  }
  else {
    pcVar1 = FUN_1007506ec;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100750380 | FUN_100750380 */

void FUN_100750380(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  UnsafeContinuation UVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long unaff_x22;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0x120);
  lVar11 = *(long *)(unaff_x22 + 0x110);
  uVar12 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar3 = uVar8;
  (**(code **)(lVar11 + 0x30))(uVar8,1,uVar12);
  if ((int)uVar3 == 1) {
    uVar8 = *(undefined8 *)(unaff_x22 + 0x150);
    uVar3 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar12 = *(undefined8 *)(unaff_x22 + 0xa8);
    (**(code **)(*(long *)(unaff_x22 + 0x140) + 8))
              (*(undefined8 *)(unaff_x22 + 0x148),*(undefined8 *)(unaff_x22 + 0x138));
    *(undefined8 *)(unaff_x22 + 0x80) = uVar12;
    *(undefined8 *)(unaff_x22 + 0x88) = uVar3;
    uVar4 = 0;
    FUN_10074af20(0,uVar12,uVar3);
    uVar5 = 0;
    FUN_10074d604(0,uVar12,uVar3);
    FUN_10079f534(unaff_x22 + 0x68,FUN_100750b38,unaff_x22 + 0x70,uVar8,uVar4,uVar5);
    uVar9 = *(ulong *)(unaff_x22 + 0x68);
    if (1 < uVar9) {
      uVar4 = *(undefined8 *)(unaff_x22 + 0xe8);
      uVar3 = *(undefined8 *)(unaff_x22 + 200);
      uVar8 = *(undefined8 *)(unaff_x22 + 0xd0);
      uVar12 = *(undefined8 *)(unaff_x22 + 0xc0);
      (**(code **)(*(long *)(*(long *)(unaff_x22 + 0xb8) + -8) + 0x38))(uVar3,1,1);
      FUN_1005cfcb0(uVar4,uVar3,uVar12);
      FUN_10072e9c0(uVar4,uVar9,uVar8);
    }
    uVar10 = *(undefined8 *)(unaff_x22 + 0x130);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x118);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x120);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x100);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x108);
    uVar12 = *(undefined8 *)(unaff_x22 + 0xe0);
    uVar1 = *(undefined8 *)(unaff_x22 + 0xe8);
    uVar14 = *(undefined8 *)(unaff_x22 + 200);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x148));
    _swift_task_dealloc(uVar10);
    _swift_task_dealloc(uVar4);
    _swift_task_dealloc(uVar3);
    _swift_task_dealloc(uVar5);
    _swift_task_dealloc(uVar8);
    _swift_task_dealloc(uVar1);
    _swift_task_dealloc(uVar12);
    _swift_task_dealloc(uVar14);
                    /* WARNING: Could not recover jumptable at 0x000100750500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar14 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xf0);
  lVar2 = *(long *)(unaff_x22 + 0xf8);
  uVar15 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xa8);
  (**(code **)(lVar11 + 0x20))(uVar13,uVar8,uVar12);
  *(undefined8 *)(unaff_x22 + 0x50) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x58) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x60) = uVar13;
  uVar8 = 0;
  FUN_10074af20(0,uVar10,uVar5);
  FUN_10079f534(uVar1,FUN_100750b88,unaff_x22 + 0x40,uVar14,uVar8,uVar4);
  (**(code **)(lVar2 + 0x10))(uVar3,uVar1,uVar4);
  UVar6 = Swift::UnsafeContinuation::typeMetadataAccessor();
  lVar11 = 0;
  _swift_getTupleTypeMetadata2(0,UVar6.unknown,uVar15,"continuation result ",0);
  (**(code **)(*(long *)(lVar11 + -8) + 0x30))(uVar3,1,lVar11);
  if ((int)uVar3 != 1) {
    uVar3 = *(undefined8 *)(unaff_x22 + 0xe0);
    uVar12 = *(undefined8 *)(unaff_x22 + 0xe8);
    uVar8 = *(undefined8 *)(unaff_x22 + 0xd0);
    lVar2 = *(long *)(unaff_x22 + 0xd8);
    uVar4 = **(undefined8 **)(unaff_x22 + 0x100);
    (**(code **)(lVar2 + 0x20))
              (uVar12,(long)*(undefined8 **)(unaff_x22 + 0x100) + (long)*(int *)(lVar11 + 0x30),
               uVar8);
    (**(code **)(lVar2 + 0x10))(uVar3,uVar12,uVar8);
    FUN_10072e9c0(uVar3,uVar4,uVar8);
    (**(code **)(lVar2 + 8))(uVar12,uVar8);
  }
  lVar11 = *(long *)(unaff_x22 + 0x110);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xb0);
  (**(code **)(*(long *)(unaff_x22 + 0xf8) + 8))
            (*(undefined8 *)(unaff_x22 + 0x108),*(undefined8 *)(unaff_x22 + 0xf0));
  (**(code **)(lVar11 + 8))(uVar3,uVar8);
  _swift_getAssociatedConformanceWitness
            (*(undefined8 *)(unaff_x22 + 0xa0),*(undefined8 *)(unaff_x22 + 0xa8),
             *(undefined8 *)(unaff_x22 + 0x138),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
            );
  plVar7 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x158) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_10075031c;
  Swift::AsyncIteratorProtocol::_next();
  return;
}



/* Address: 0x1007506ec | FUN_1007506ec */

void FUN_1007506ec(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x22;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar10 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xa8);
  (**(code **)(*(long *)(unaff_x22 + 0x140) + 8))
            (*(undefined8 *)(unaff_x22 + 0x148),*(undefined8 *)(unaff_x22 + 0x138));
  *(undefined8 *)(unaff_x22 + 0x20) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar10;
  uVar10 = 0;
  FUN_10074af20(0,uVar7,uVar1);
  uVar6 = 0;
  FUN_10074d604(0,uVar7,uVar1);
  FUN_10079f534(unaff_x22 + 0x38,FUN_100750ae4,unaff_x22 + 0x10,uVar4,uVar10,uVar6);
  lVar8 = *(long *)(unaff_x22 + 0x38);
  if ((lVar8 == 0) || (lVar8 == 1)) {
    _swift_errorRelease();
  }
  else {
    uVar7 = *(undefined8 *)(unaff_x22 + 0xe8);
    puVar2 = *(undefined8 **)(unaff_x22 + 200);
    uVar1 = *(undefined8 *)(unaff_x22 + 0xd0);
    lVar3 = *(long *)(unaff_x22 + 0xb8);
    uVar4 = *(undefined8 *)(unaff_x22 + 0xc0);
    *puVar2 = *(undefined8 *)(unaff_x22 + 0x160);
    _swift_storeEnumTagMultiPayload(puVar2,lVar3,1);
    (**(code **)(*(long *)(lVar3 + -8) + 0x38))(puVar2,0,1,lVar3);
    FUN_1005cfcb0(uVar7,puVar2,uVar4);
    FUN_10072e9c0(uVar7,lVar8,uVar1);
  }
  uVar9 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar11 = *(undefined8 *)(unaff_x22 + 200);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x148));
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar11);
                    /* WARNING: Could not recover jumptable at 0x000100750874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100750878 | FUN_100750878 */

void FUN_100750878(void)

{
  long unaff_x20;
  
  FUN_10074fe88();
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1007508a0 | FUN_1007508a0 */

void FUN_1007508a0(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1007508ac | FUN_1007508ac */

void FUN_1007508ac(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = 0;
  FUN_10074af20(0,uVar2,*(undefined8 *)(unaff_x20 + 0x18));
  FUN_10074d15c();
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}



/* Address: 0x1007508f4 | FUN_1007508f4 */

void FUN_1007508f4(undefined8 param_1)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005c804c;
  FUN_10074f5dc(plVar1,param_1);
  return;
}



/* Address: 0x100750950 | thunk_FUN_10074fe88 */

void thunk_FUN_10074fe88(void)

{
  FUN_10074fe88();
  return;
}



/* Address: 0x100750954 | FUN_100750954 */

void FUN_100750954(void)

{
  FUN_10074f91c();
  return;
}



/* Address: 0x10075096c | FUN_10075096c */

void FUN_10075096c(void)

{
  FUN_10074fc50();
  return;
}



/* Address: 0x100750974 | FUN_100750974 */

void FUN_100750974(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = 0;
  FUN_10074af20(0,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_10074cc3c(param_1,uVar2,uVar1);
  return;
}



/* Address: 0x1007509c8 | FUN_1007509c8 */

void FUN_1007509c8(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  ulong uVar4;
  
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(lVar2 + -8);
  uVar4 = (ulong)*(byte *)(lVar3 + 0x50) + 0x30 &
          ((ulong)*(byte *)(lVar3 + 0x50) ^ 0xffffffffffffffff);
  lVar1 = *(long *)(lVar3 + 0x40);
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  (**(code **)(lVar3 + 8))(unaff_x20 + uVar4,lVar2);
  _swift_release(*(undefined8 *)(unaff_x20 + (lVar1 + uVar4 + 7 & 0xfffffffffffffff8)));
  _swift_deallocObject();
  return;
}



/* Address: 0x100750a40 | FUN_100750a40 */

void FUN_100750a40(undefined8 param_1)

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
  uVar4 = uVar4 + 0x30 & (uVar4 ^ 0xffffffffffffffff);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x20 + (*(long *)(lVar3 + 0x40) + uVar4 + 7 & 0xfffffffffffffff8));
  plVar2 = (long *)0x170;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1005c804c;
  FUN_100750054(plVar2,param_1,uVar5,uVar1,unaff_x20 + uVar4,uVar6);
  return;
}



/* Address: 0x100750ae4 | FUN_100750ae4 */

void FUN_100750ae4(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = 0;
  FUN_10074af20(0,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_10074c44c(uVar2,uVar1);
  *param_1 = uVar2;
  return;
}



/* Address: 0x100750b38 | FUN_100750b38 */

void FUN_100750b38(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = 0;
  FUN_10074af20(0,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  uVar2 = 0;
  FUN_10074c44c(0,uVar1);
  *param_1 = uVar2;
  return;
}



/* Address: 0x100750b88 | FUN_100750b88 */

void FUN_100750b88(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = 0;
  FUN_10074af20(0,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_10074bea4(param_1,uVar2,uVar1);
  return;
}



/* Address: 0x100750bdc | FUN_100750bdc */

void FUN_100750bdc(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long *unaff_x20;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_70 [12];
  undefined4 local_64;
  
  lVar3 = *(long *)(*unaff_x20 + 0x50);
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x58);
  lVar7 = *(long *)(lVar3 + -8);
  puVar5 = auStack_70 + -(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  local_64 = param_3;
  FUN_10074af20(0,lVar3,uVar1);
  lVar4 = *(long *)(lVar2 + -8);
  lVar6 = (long)puVar5 - (*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar7 + 0x10))(puVar5,param_1,lVar3);
  FUN_10074bc50(lVar6,puVar5,param_2,local_64,lVar3,uVar1);
  lVar3 = lVar6;
  FUN_10079f660(lVar6,lVar2);
  (**(code **)(lVar4 + 8))(lVar6,lVar2);
  unaff_x20[2] = lVar3;
  return;
}



/* Address: 0x100750cd4 | FUN_100750cd4 */

void FUN_100750cd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _swift_allocObject();
  FUN_100750bdc(param_1,param_2,param_3);
  return;
}



/* Address: 0x100750d24 | FUN_100750d24 */

long * FUN_100750d24(void)

{
  long lVar1;
  undefined *puVar2;
  long *unaff_x20;
  
  _swift_allocObject();
  lVar1 = *(long *)(*unaff_x20 + 0x50);
  puVar2 = PTR___type_metadata_for_Swift_Never_100eadc38;
  FUN_10075666c(lVar1,PTR___type_metadata_for_Swift_Never_100eadc38,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  unaff_x20[2] = lVar1;
  unaff_x20[3] = (long)puVar2;
  return unaff_x20;
}



/* Address: 0x100750d74 | FUN_100750d74 */

void FUN_100750d74(void)

{
  long lVar1;
  undefined *puVar2;
  long *unaff_x20;
  
  lVar1 = *(long *)(*unaff_x20 + 0x50);
  puVar2 = PTR___type_metadata_for_Swift_Never_100eadc38;
  FUN_10075666c(lVar1,PTR___type_metadata_for_Swift_Never_100eadc38,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  unaff_x20[2] = lVar1;
  unaff_x20[3] = (long)puVar2;
  return;
}



/* Address: 0x100750da8 | FUN_100750da8 */

void FUN_100750da8(undefined8 param_1)

{
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 **)(unaff_x22 + 0x18) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x20) = *unaff_x20;
  _swift_task_switch(FUN_100750dc8,0,0);
  return;
}



/* Address: 0x100750dc8 | FUN_100750dc8 */

void FUN_100750dc8(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x20);
  uVar1 = *(undefined8 *)(*(long *)(unaff_x22 + 0x18) + 0x10);
  uVar3 = *(undefined8 *)(*(long *)(unaff_x22 + 0x18) + 0x18);
  plVar4 = (long *)0x110;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x28) = plVar4;
  uVar5 = *(undefined8 *)(lVar2 + 0x50);
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1005fc418;
  FUN_100756734(*(undefined8 *)(unaff_x22 + 0x10),uVar1,uVar3,uVar5,
                PTR___type_metadata_for_Swift_Never_100eadc38,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  return;
}



/* Address: 0x100750e48 | FUN_100750e48 */

void FUN_100750e48(void)

{
  long *unaff_x20;
  undefined1 local_11;
  
  local_11 = 1;
  FUN_100756b3c(&local_11,unaff_x20[2],unaff_x20[3],*(undefined8 *)(*unaff_x20 + 0x50),
                PTR___type_metadata_for_Swift_Never_100eadc38,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  return;
}



/* Address: 0x100750e8c | FUN_100750e8c */

undefined1  [16] FUN_100750e8c(void)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  auVar2 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  _swift_retain(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x10));
  _swift_retain(uVar1);
  return auVar2;
}



/* Address: 0x100750ec0 | FUN_100750ec0 */

void FUN_100750ec0(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  _swift_task_switch(FUN_100750edc,0,0);
  return;
}



/* Address: 0x100750edc | FUN_100750edc */

void FUN_100750edc(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x18);
  uVar2 = **(undefined8 **)(unaff_x22 + 0x20);
  uVar3 = (*(undefined8 **)(unaff_x22 + 0x20))[1];
  plVar4 = (long *)0x140;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x28) = plVar4;
  uVar5 = *(undefined8 *)(lVar1 + 0x10);
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_100750f5c;
  FUN_100756e48(plVar4,*(undefined8 *)(unaff_x22 + 0x10),uVar2,uVar3,uVar5,
                PTR___type_metadata_for_Swift_Never_100eadc38,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  return;
}



/* Address: 0x100750f5c | FUN_100750f5c */

void FUN_100750f5c(void)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  *(long *)(lVar1 + 0x30) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x28));
  if (unaff_x20 != 0) {
    _swift_task_switch(FUN_100750fc8,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100750fc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Address: 0x100750fc8 | FUN_100750fc8 */

void FUN_100750fc8(void)

{
  long unaff_x22;
  
  _swift_unexpectedError
            (*(undefined8 *)(unaff_x22 + 0x30),"AsyncAlgorithms/AsyncChannel.swift",0x22,1,0x3a);
  return;
}



/* Address: 0x100750fe4 | FUN_100750fe4 */

void FUN_100750fe4(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x40;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005dfae0;
  FUN_100750ec0(plVar1,param_1,param_2);
  return;
}



/* Address: 0x10075104c | FUN_10075104c */

void FUN_10075104c(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(uVar1);
  return;
}



/* Address: 0x100751078 | FUN_100751078 */

void FUN_100751078(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(uVar1);
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1007510ac | FUN_1007510ac */

void FUN_1007510ac(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c761e8,param_1);
  return;
}



/* Address: 0x1007510bc | FUN_1007510bc */

void FUN_1007510bc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *unaff_x20;
  FUN_100750e8c();
  _swift_release(uVar1);
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}



/* Address: 0x1007510fc | FUN_1007510fc */

void FUN_1007510fc(long param_1)

{
  undefined *local_18;
  
  local_18 = &DAT_100c76290;
  _swift_initClassMetadata2(param_1,0,1,&local_18,param_1 + 0x58);
  return;
}



/* Address: 0x10075113c | FUN_10075113c */

void FUN_10075113c(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100751148 | FUN_100751148 */

void FUN_100751148(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100751154 | FUN_100751154 */

long * FUN_100751154(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *unaff_x20;
  
  _swift_allocObject();
  lVar3 = *unaff_x20;
  lVar1 = *(long *)(lVar3 + 0x50);
  lVar2 = *(long *)(lVar3 + 0x58);
  FUN_10075666c(lVar1,lVar2,*(undefined8 *)(lVar3 + 0x60));
  unaff_x20[2] = lVar1;
  unaff_x20[3] = lVar2;
  return unaff_x20;
}



/* Address: 0x100751198 | FUN_100751198 */

void FUN_100751198(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *unaff_x20;
  
  lVar3 = *unaff_x20;
  lVar1 = *(long *)(lVar3 + 0x50);
  lVar2 = *(long *)(lVar3 + 0x58);
  FUN_10075666c(lVar1,lVar2,*(undefined8 *)(lVar3 + 0x60));
  unaff_x20[2] = lVar1;
  unaff_x20[3] = lVar2;
  return;
}



/* Address: 0x1007511c0 | FUN_1007511c0 */

void FUN_1007511c0(undefined8 param_1)

{
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 **)(unaff_x22 + 0x18) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x20) = *unaff_x20;
  _swift_task_switch(FUN_1007511e0,0,0);
  return;
}



/* Address: 0x1007511e0 | FUN_1007511e0 */

void FUN_1007511e0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x20);
  uVar1 = *(undefined8 *)(*(long *)(unaff_x22 + 0x18) + 0x10);
  uVar4 = *(undefined8 *)(*(long *)(unaff_x22 + 0x18) + 0x18);
  plVar6 = (long *)0x110;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x28) = plVar6;
  uVar2 = *(undefined8 *)(lVar3 + 0x50);
  uVar5 = *(undefined8 *)(lVar3 + 0x58);
  uVar7 = *(undefined8 *)(lVar3 + 0x60);
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_1005fc418;
  FUN_100756734(*(undefined8 *)(unaff_x22 + 0x10),uVar1,uVar4,uVar2,uVar5,uVar7);
  return;
}



/* Address: 0x100751254 | FUN_100751254 */

void FUN_100751254(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  long lVar3;
  undefined8 local_38;
  
  lVar3 = *unaff_x20;
  lVar1 = unaff_x20[2];
  lVar2 = unaff_x20[3];
  local_38 = param_1;
  _swift_errorRetain();
  FUN_100756b3c(&local_38,lVar1,lVar2,*(undefined8 *)(lVar3 + 0x50),*(undefined8 *)(lVar3 + 0x58),
                PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
  _swift_errorRelease(param_1);
  return;
}



/* Address: 0x1007512b4 | FUN_1007512b4 */

void FUN_1007512b4(void)

{
  long lVar1;
  long lVar2;
  Optional OVar3;
  undefined7 extraout_var;
  long lVar4;
  long *unaff_x20;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *unaff_x20;
  lVar4 = *(long *)(lVar6 + 0x58);
  OVar3 = Swift::Optional::typeMetadataAccessor();
  lVar7 = *(long *)(CONCAT71(extraout_var,OVar3.value) + -8);
  puVar5 = &stack0xffffffffffffffb0 + -(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = unaff_x20[2];
  lVar2 = unaff_x20[3];
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))(puVar5,1,1,lVar4);
  FUN_100756b3c(puVar5,lVar1,lVar2,*(undefined8 *)(lVar6 + 0x50),lVar4,*(undefined8 *)(lVar6 + 0x60)
               );
  (**(code **)(lVar7 + 8))(puVar5,CONCAT71(extraout_var,OVar3.value));
  return;
}



/* Address: 0x100751368 | FUN_100751368 */

void FUN_100751368(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  _swift_task_switch(FUN_100751384,0,0);
  return;
}



/* Address: 0x100751384 | FUN_100751384 */

void FUN_100751384(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x18);
  uVar2 = **(undefined8 **)(unaff_x22 + 0x20);
  uVar4 = (*(undefined8 **)(unaff_x22 + 0x20))[1];
  plVar6 = (long *)0x140;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x28) = plVar6;
  uVar3 = *(undefined8 *)(lVar1 + 0x10);
  uVar5 = *(undefined8 *)(lVar1 + 0x18);
  uVar7 = *(undefined8 *)(lVar1 + 0x20);
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_1005fc418;
  FUN_100756e48(plVar6,*(undefined8 *)(unaff_x22 + 0x10),uVar2,uVar4,uVar3,uVar5,uVar7);
  return;
}



/* Address: 0x1007513f8 | FUN_1007513f8 */

void FUN_1007513f8(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)&DAT_00000030;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005c804c;
  FUN_100751368(plVar1,param_1,param_2);
  return;
}



/* Address: 0x100751460 | FUN_100751460 */

void FUN_100751460(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c76300,param_1);
  return;
}



/* Address: 0x100751470 | FUN_100751470 */

void FUN_100751470(long param_1)

{
  undefined *local_18;
  
  local_18 = &DAT_100c763b8;
  _swift_initClassMetadata2(param_1,0,1,&local_18,param_1 + 0x68);
  return;
}



/* Address: 0x1007514b0 | FUN_1007514b0 */

void FUN_1007514b0(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1007514bc | FUN_1007514bc */

void FUN_1007514bc(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1007514c8 | FUN_1007514c8 */

void FUN_1007514c8(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  Optional OVar1;
  undefined7 extraout_var;
  long lVar2;
  long lVar3;
  long lVar4;
  
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lVar4 = *(long *)(CONCAT71(extraout_var,OVar1.value) + -8);
  lVar3 = *(long *)(lVar4 + 0x40);
  (**(code **)(*(long *)(param_3 + -8) + 0x38))
            (&stack0xffffffffffffffb0 + -(lVar3 + 0xfU & 0xfffffffffffffff0),1,1,param_3);
  *param_1 = param_2;
  param_1[1] = 0;
  lVar2 = 0;
  FUN_100752c8c(0,param_3,param_4,param_5);
  (**(code **)(lVar4 + 0x20))
            ((long)param_1 + (long)*(int *)(lVar2 + 0x30),
             &stack0xffffffffffffffb0 + -(lVar3 + 0xfU & 0xfffffffffffffff0),
             CONCAT71(extraout_var,OVar1.value));
  return;
}



/* Address: 0x100751584 | FUN_100751584 */

void FUN_100751584(undefined8 param_1,Hasher param_2)

{
  Hasher HVar1;
  __uint64 *unaff_x20;
  
  Swift::Hasher::init(0);
  HVar1.unknown = (undefined *)*unaff_x20;
  Swift::Hasher::_combine((__uint64)HVar1.unknown,param_2);
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x1007515c4 | thunk_FUN_100751584 */

void thunk_FUN_100751584(void)

{
  FUN_100751584();
  return;
}



/* Address: 0x1007515c8 | thunk_FUN_1005b7fc8 */

void thunk_FUN_1005b7fc8(void)

{
  FUN_1005b7fc8();
  return;
}



/* Address: 0x1007515cc | FUN_1007515cc */

void FUN_1007515cc(__int64 param_1,undefined8 param_2)

{
  Hasher HVar1;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(param_1);
  HVar1.unknown = auStack_68;
  FUN_1005b7fc8(HVar1.unknown,param_2);
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x10075160c | FUN_10075160c */

void FUN_10075160c(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_10000312c(param_1,param_2,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x18),
                *(undefined8 *)(param_3 + 0x20));
  return;
}



/* Address: 0x10075161c | FUN_10075161c */

bool FUN_10075161c(long param_1,undefined8 param_2,long param_3)

{
  return param_1 == param_3;
}



/* Address: 0x100751628 | FUN_100751628 */

void FUN_100751628(long param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10063f8b0(*unaff_x20,unaff_x20[1],*(undefined8 *)(param_1 + 0x10),
                *(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Address: 0x10075163c | FUN_10075163c */

void FUN_10075163c(undefined8 param_1,long param_2)

{
  undefined8 *unaff_x20;
  
  FUN_10063f88c(param_1,*unaff_x20,unaff_x20[1],*(undefined8 *)(param_2 + 0x10),
                *(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20));
  return;
}



/* Address: 0x100751650 | FUN_100751650 */

void FUN_100751650(__int64 param_1,long param_2)

{
  Hasher HVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(param_1);
  HVar1.unknown = auStack_68;
  FUN_10063f88c(HVar1.unknown,*unaff_x20,unaff_x20[1],*(undefined8 *)(param_2 + 0x10),
                *(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20));
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x100751698 | FUN_100751698 */

void FUN_100751698(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  FUN_10075161c(*param_1,param_1[1],*param_2,param_2[1],*(undefined8 *)(param_3 + 0x10),
                *(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x20));
  return;
}


