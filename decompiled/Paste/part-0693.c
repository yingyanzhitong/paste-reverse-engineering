/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1007830a8 | FUN_1007830a8 */

void FUN_1007830a8(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetEnumDescriptor_100cbf5d8);
  return;
}



/* Address: 0x1007830b4 | FUN_1007830b4 */

void FUN_1007830b4(long param_1)

{
  Optional OVar1;
  ulong uVar2;
  undefined7 extraout_var;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *local_40;
  long local_38;
  long local_30;
  long local_28;
  
  local_40 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
  uVar4 = *(ulong *)(param_1 + 0x68);
  uVar5 = *(ulong *)(param_1 + 0x58);
  uVar2 = 0x13f;
  _swift_getAssociatedTypeWitness
            (0x13f,uVar4,uVar5,PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008
             ,PTR___associated_type_descriptor_for_Swift_Clock_Duration_100eaeaf0);
  if (uVar4 < 0x40) {
    local_38 = *(long *)(uVar2 - 8) + 0x40;
    OVar1 = Swift::Optional::typeMetadataAccessor();
    if (uVar2 < 0x40) {
      local_30 = *(long *)(CONCAT71(extraout_var,OVar1.value) + -8) + 0x40;
      lVar3 = 0x13f;
      _swift_checkMetadataState();
      if (uVar5 < 0x40) {
        local_28 = *(long *)(lVar3 + -8) + 0x40;
        _swift_initClassMetadata2(param_1,0,4,&local_40,param_1 + 0x70);
      }
    }
  }
  return;
}



/* Address: 0x10078318c | FUN_10078318c */

void FUN_10078318c(void)

{
  Task TVar1;
  Optional OVar2;
  undefined8 uVar3;
  CancellationError CVar4;
  CancellationError CVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long *unaff_x20;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  Task local_a8;
  long local_a0;
  long local_98;
  undefined8 local_90;
  undefined *local_80 [2];
  undefined *local_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  lVar7 = *unaff_x20;
  lVar10 = unaff_x20[2];
  lVar8 = *(long *)(lVar7 + 0x58);
  uStack_68 = *(undefined8 *)(lVar7 + 0x58);
  puVar11 = *(undefined **)(lVar7 + 0x50);
  uStack_58 = *(undefined8 *)(lVar7 + 0x68);
  lVar12 = *(long *)(lVar7 + 0x60);
  uVar9 = *(undefined8 *)(lVar7 + 0x68);
  uVar3 = 0;
  local_a8.unknown = puVar11;
  local_a0 = lVar8;
  local_98 = lVar12;
  local_90 = uVar9;
  local_70 = puVar11;
  lStack_60 = lVar12;
  FUN_100778e04(0,&local_a8);
  local_a8.unknown = puVar11;
  local_a0 = lVar8;
  local_98 = lVar12;
  local_90 = uVar9;
  FUN_1007830a8(0xff,&local_a8);
  OVar2 = Swift::Optional::typeMetadataAccessor();
  FUN_10079f534(&local_a8,FUN_100786c18,local_80,lVar10,uVar3,OVar2.value);
  lVar10 = local_98;
  lVar7 = local_a0;
  TVar1.unknown = local_a8.unknown;
  if (local_a8.unknown != (undefined *)0x0) {
    if (local_a0 == 0) {
      _swift_retain(local_a8.unknown);
    }
    else {
      CVar4 = Swift::CancellationError::typeMetadataAccessor();
      CVar5 = CVar4;
      FUN_10076915c();
      _swift_allocError(CVar4.unknown,CVar5.unknown,0,0);
      _swift_retain(TVar1.unknown);
      Swift::CancellationError::init();
      puVar11 = &DAT_100fdfb40;
      FUN_1000f7830(&DAT_100fdfb40,&DAT_100c74390);
      puVar6 = (undefined8 *)PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90
      ;
      _swift_allocError();
      *puVar6 = CVar4.unknown;
      _swift_continuation_throwingResumeWithError(lVar7,puVar11);
    }
    if (lVar10 != 0) {
      CVar4 = Swift::CancellationError::typeMetadataAccessor();
      CVar5 = CVar4;
      FUN_10076915c();
      _swift_allocError(CVar4.unknown,CVar5.unknown,0,0);
      Swift::CancellationError::init();
      uVar3 = 0;
      local_80[0] = CVar4.unknown;
      _swift_getAssociatedTypeWitness
                (0,uVar9,lVar8,PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008
                 ,PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
      puVar11 = &DAT_100fdfb40;
      FUN_1000f7830(&DAT_100fdfb40,&DAT_100c74390);
      FUN_1005ec180(local_80,lVar10,uVar3,puVar11,
                    PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
    Swift::Task::cancel(TVar1);
    _swift_release_n(TVar1.unknown,2);
  }
  return;
}



/* Address: 0x1007833a4 | FUN_1007833a4 */

void FUN_1007833a4(undefined8 param_1)

{
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 **)(unaff_x22 + 0x18) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x20) = *unaff_x20;
  _swift_task_switch(FUN_1007833c4,0,0);
  return;
}



/* Address: 0x1007833c4 | FUN_1007833c4 */

void FUN_1007833c4(void)

{
  Optional OVar1;
  long *plVar2;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x20);
  plVar2 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x28) = plVar2;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(lVar3 + 0x60),*(undefined8 *)(lVar3 + 0x50),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  OVar1 = Swift::Optional::typeMetadataAccessor();
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1005fc418;
  FUN_1007aae80(*(undefined8 *)(unaff_x22 + 0x10),&UNK_100c770d0,*(undefined8 *)(unaff_x22 + 0x18),
                FUN_100786cd0,*(undefined8 *)(unaff_x22 + 0x18),0,0,OVar1.value);
  return;
}



/* Address: 0x100783480 | FUN_100783480 */

void FUN_100783480(undefined8 param_1,long *param_2)

{
  Result RVar1;
  undefined7 extraout_var;
  ulong uVar2;
  long lVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(long **)(unaff_x22 + 0x18) = param_2;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(*param_2 + 0x60),*(undefined8 *)(*param_2 + 0x50),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  Swift::Optional::typeMetadataAccessor();
  FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
  RVar1 = Swift::Result::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x20) = CONCAT71(extraout_var,RVar1.value);
  lVar3 = *(long *)(CONCAT71(extraout_var,RVar1.value) + -8);
  *(long *)(unaff_x22 + 0x28) = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x30) = uVar2;
  _swift_task_switch(FUN_100783540,0,0);
  return;
}



/* Address: 0x100783540 | FUN_100783540 */

void FUN_100783540(void)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x70;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x38) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10076f72c;
  FUN_10072f29c(plVar1,*(undefined8 *)(unaff_x22 + 0x30),0,0,FUN_100786d34,
                *(undefined8 *)(unaff_x22 + 0x18),*(undefined8 *)(unaff_x22 + 0x20));
  return;
}



/* Address: 0x1007835bc | FUN_1007835bc */

void FUN_1007835bc(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  code *pcVar5;
  Result RVar6;
  Optional OVar7;
  int iVar8;
  long lVar9;
  undefined *puVar10;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined8 uVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long lVar24;
  String SVar25;
  undefined8 uStack_100;
  undefined4 auStack_f8 [2];
  long local_f0 [5];
  undefined *local_c8;
  long *local_c0;
  long local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long *plStack_68;
  
  lVar18 = *param_2;
  uVar21 = *(undefined8 *)(lVar18 + 0x60);
  uVar20 = *(undefined8 *)(lVar18 + 0x50);
  lVar9 = 0xff;
  local_b0 = param_1;
  _swift_getAssociatedTypeWitness
            (0xff,uVar21,uVar20,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  local_f0[1] = lVar9;
  Swift::Optional::typeMetadataAccessor();
  puVar10 = &DAT_100fdfb40;
  FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
  local_c8 = puVar10;
  RVar6 = Swift::Result::typeMetadataAccessor();
  local_b8 = CONCAT71(extraout_var,RVar6.value);
  plVar12 = (long *)((long)local_f0 -
                    (*(long *)(*(long *)(local_b8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  uVar23 = *(undefined8 *)(lVar18 + 0x68);
  uVar22 = *(undefined8 *)(lVar18 + 0x58);
  lVar9 = 0;
  local_c0 = plVar12;
  _swift_getAssociatedTypeWitness
            (0,uVar23,uVar22,PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  local_f0[3] = *(long *)(lVar9 + -8);
  uVar15 = *(long *)(local_f0[3] + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_f0[0] = (long)plVar12 - uVar15;
  lVar16 = local_f0[0] - uVar15;
  lVar18 = 0xff;
  local_f0[2] = lVar16;
  local_f0[4] = lVar9;
  local_80 = uVar20;
  uStack_78 = uVar22;
  local_70 = uVar21;
  plStack_68 = (long *)uVar23;
  FUN_10077f21c(0xff,&local_80);
  OVar7 = Swift::Optional::typeMetadataAccessor();
  lVar9 = CONCAT71(extraout_var_00,OVar7.value);
  lVar17 = *(long *)(lVar9 + -8);
  uVar15 = *(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0;
  plVar19 = (long *)(lVar16 - uVar15);
  lVar16 = (long)plVar19 - uVar15;
  lVar24 = param_2[2];
  local_70 = local_b0;
  uVar11 = 0;
  local_a8 = uVar20;
  uStack_a0 = uVar22;
  local_98 = uVar21;
  uStack_90 = uVar23;
  plStack_68 = param_2;
  FUN_100778e04(0,&local_a8);
  FUN_10079f534(lVar16,FUN_100786d3c,&local_80,lVar24,uVar11,lVar9);
  (**(code **)(lVar17 + 0x10))(plVar19,lVar16,lVar9);
  plVar12 = plVar19;
  (**(code **)(*(long *)(lVar18 + -8) + 0x30))(plVar19,1,lVar18);
  if ((int)plVar12 != 1) {
    plVar13 = plVar19;
    _swift_getEnumCaseMultiPayload(plVar19,lVar18);
    lVar18 = local_b8;
    plVar12 = local_c0;
    iVar8 = (int)plVar13;
    if (iVar8 < 3) {
      if (iVar8 == 1) {
        if (*plVar19 != 0) {
          _swift_continuation_throwingResume();
        }
      }
      else {
        if (iVar8 != 2) {
          *(undefined4 *)(lVar16 + -8) = 0;
          *(undefined8 *)(lVar16 + -0x10) = 0x58;
          SVar25.bridgeObject = (void *)0x2;
          SVar25.str = (char *)0xb;
          Swift::_assertionFailure
                    ((StaticString)0x100d8deb0,SVar25,(StaticString)0xd000000000000016,
                     0x8000000100db1320,0xdb1600);
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10078399c);
          (*pcVar5)();
        }
        lVar18 = *plVar19;
        lVar24 = plVar19[1];
        puVar10 = &DAT_100fe3398;
        FUN_1000f8b08(&DAT_100fe3398,&DAT_100c772a0);
        puVar4 = local_c8;
        lVar3 = local_f0[4];
        Swift::UnsafeContinuation::typeMetadataAccessor();
        OVar7 = Swift::Optional::typeMetadataAccessor();
        lVar14 = 0;
        _swift_getTupleTypeMetadata3
                  (0,puVar10,OVar7.value,lVar3,"upstreamContinuation clockContinuation deadline ",0)
        ;
        lVar2 = local_f0[3];
        lVar1 = local_f0[2];
        (**(code **)(local_f0[3] + 0x20))
                  (local_f0[2],(long)plVar19 + (long)*(int *)(lVar14 + 0x40),lVar3);
        if (lVar18 != 0) {
          _swift_continuation_throwingResume(lVar18);
        }
        lVar18 = local_f0[0];
        if (lVar24 != 0) {
          (**(code **)(lVar2 + 0x10))(local_f0[0],lVar1,lVar3);
          FUN_1005ec10c(lVar18,lVar24,lVar3,puVar4,
                        PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
        }
        (**(code **)(lVar2 + 8))(lVar1,lVar3);
      }
    }
    else {
      if (iVar8 != 3) {
        lVar24 = *plVar19;
        *local_c0 = plVar19[1];
      }
      else {
        lVar24 = *plVar19;
        (**(code **)(*(long *)(local_f0[1] + -8) + 0x38))(local_c0,1,1);
        lVar18 = local_b8;
      }
      _swift_storeEnumTagMultiPayload(plVar12,lVar18,iVar8 != 3);
      FUN_10072e9c0(plVar12,lVar24,lVar18);
    }
  }
  (**(code **)(lVar17 + 8))(lVar16,lVar9);
  return;
}



/* Address: 0x10078399c | FUN_10078399c */

void FUN_10078399c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  Optional OVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined1 *puVar15;
  undefined1 auStack_d0 [8];
  undefined8 local_c8;
  undefined8 local_c0;
  long *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_88;
  long local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  lVar7 = *param_4;
  lVar13 = *(long *)(lVar7 + 0x50);
  lVar10 = *(long *)(lVar13 + -8);
  puVar15 = auStack_d0 + -(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uStack_98 = *(undefined8 *)(lVar7 + 0x60);
  local_c0 = *(undefined8 *)(lVar7 + 0x58);
  local_c8 = *(undefined8 *)(lVar7 + 0x68);
  uStack_a8 = *(undefined8 *)(lVar7 + 0x68);
  local_b0 = *(undefined8 *)(lVar7 + 0x60);
  lVar3 = 0;
  local_b8 = param_4;
  local_a0 = local_c0;
  local_88 = param_1;
  local_80 = lVar13;
  local_78 = local_c0;
  uStack_70 = uStack_98;
  local_68 = local_c8;
  FUN_10077f21c(0,&local_80);
  lVar14 = *(long *)(lVar3 + -8);
  uVar8 = *(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar12 = (long)puVar15 - uVar8;
  lVar11 = lVar12 - uVar8;
  local_78 = local_a0;
  local_68 = uStack_a8;
  uStack_70 = local_b0;
  uVar4 = 0;
  local_80 = lVar13;
  FUN_100778e04(0,&local_80);
  FUN_10077ea14(lVar11,param_3,uVar4);
  (**(code **)(lVar14 + 0x10))(lVar12,lVar11,lVar3);
  lVar7 = lVar12;
  _swift_getEnumCaseMultiPayload(lVar12,lVar3);
  iVar2 = (int)lVar7;
  if (iVar2 < 2) {
    if (iVar2 == 0) {
      (**(code **)(lVar10 + 0x20))(puVar15,lVar12,lVar13);
      FUN_100783c58(param_2,puVar15,param_3);
      (**(code **)(lVar10 + 8))(puVar15,lVar13);
      (**(code **)(lVar14 + 8))(lVar11,lVar3);
      pcVar9 = *(code **)(lVar14 + 0x38);
      uVar6 = 1;
      uVar4 = local_88;
      goto LAB_100783b4c;
    }
  }
  else {
    if (iVar2 == 2) {
      puVar5 = &DAT_100fe3398;
      FUN_1000f8b08(&DAT_100fe3398,&DAT_100c772a0);
      lVar7 = 0xff;
      _swift_getAssociatedTypeWitness
                (0xff,local_c8,local_c0,
                 PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
                 PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
      FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
      Swift::UnsafeContinuation::typeMetadataAccessor();
      OVar1 = Swift::Optional::typeMetadataAccessor();
      lVar10 = 0;
      _swift_getTupleTypeMetadata3
                (0,puVar5,OVar1.value,lVar7,"upstreamContinuation clockContinuation deadline ",0);
      uVar4 = local_88;
      iVar2 = *(int *)(lVar10 + 0x40);
      (**(code **)(lVar14 + 0x20))(local_88,lVar11,lVar3);
      (**(code **)(lVar14 + 0x38))(uVar4,0,1,lVar3);
      (**(code **)(*(long *)(lVar7 + -8) + 8))(lVar12 + iVar2,lVar7);
      return;
    }
    if (iVar2 != 3) {
      (**(code **)(lVar14 + 8))(lVar12,lVar3);
    }
  }
  uVar4 = local_88;
  (**(code **)(lVar14 + 0x20))(local_88,lVar11,lVar3);
  pcVar9 = *(code **)(lVar14 + 0x38);
  uVar6 = 0;
LAB_100783b4c:
  (*pcVar9)(uVar4,uVar6,1,lVar3);
  return;
}



/* Address: 0x100783c58 | FUN_100783c58 */

void FUN_100783c58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  TaskPriority TVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long *unaff_x20;
  undefined8 uVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  undefined1 auStack_a0 [8];
  long local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar12 = *unaff_x20;
  lVar8 = *(long *)(lVar12 + 0x50);
  lVar14 = *(long *)(lVar8 + -8);
  lVar15 = *(long *)(lVar14 + 0x40);
  puVar9 = auStack_a0 + -(lVar15 + 0xfU & 0xfffffffffffffff0);
  puVar1 = &DAT_100fe0dc8;
  FUN_1000f7830(&DAT_100fe0dc8,&DAT_100c75540);
  lVar11 = (long)puVar9 - (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  TVar2 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar2.unknown + -8) + 0x38))(lVar11,1,1,TVar2.unknown);
  (**(code **)(lVar14 + 0x10))(puVar9,param_2,lVar8);
  uVar5 = (ulong)*(byte *)(lVar14 + 0x50);
  uVar6 = uVar5 + 0x40 & (uVar5 ^ 0xffffffffffffffff);
  uVar16 = lVar15 + uVar6 + 7 & 0xfffffffffffffff8;
  puVar1 = &DAT_100effd10;
  _swift_allocObject(&DAT_100effd10,uVar16 + 8,uVar5 | 7);
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(long *)(puVar1 + 0x20) = lVar8;
  uVar7 = *(undefined8 *)(lVar12 + 0x58);
  *(undefined8 *)(puVar1 + 0x28) = uVar7;
  uVar10 = *(undefined8 *)(lVar12 + 0x60);
  *(undefined8 *)(puVar1 + 0x30) = uVar10;
  uVar13 = *(undefined8 *)(lVar12 + 0x68);
  *(undefined8 *)(puVar1 + 0x38) = uVar13;
  (**(code **)(lVar14 + 0x20))(puVar1 + uVar6,puVar9,lVar8);
  *(long **)(puVar1 + uVar16) = unaff_x20;
  _swift_retain();
  uVar3 = 0;
  FUN_100731e58(0,0,lVar11,&DAT_100c770e0,puVar1);
  uVar4 = 0;
  local_80 = lVar8;
  uStack_78 = uVar7;
  local_70 = uVar10;
  uStack_68 = uVar13;
  FUN_100778e04(0,&local_80);
  FUN_10077b9e4(uVar3,param_3,uVar4);
  _swift_release(uVar3);
  return;
}



/* Address: 0x100783dec | FUN_100783dec */

void FUN_100783dec(long *param_1)

{
  Task TVar1;
  Result RVar2;
  Optional OVar3;
  long lVar4;
  undefined *puVar5;
  undefined7 extraout_var;
  undefined8 uVar7;
  CancellationError CVar8;
  CancellationError CVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  Task local_c0;
  undefined *local_b0 [2];
  long local_a0;
  undefined *puStack_98;
  long local_90;
  long lStack_88;
  long local_80;
  undefined *local_78;
  long local_70;
  long local_68;
  long lVar6;
  
  lVar17 = *param_1;
  lVar12 = *(long *)(lVar17 + 0x60);
  lVar15 = *(long *)(lVar17 + 0x50);
  lVar4 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,lVar12,lVar15,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  Swift::Optional::typeMetadataAccessor();
  puVar5 = &DAT_100fdfb40;
  FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
  RVar2 = Swift::Result::typeMetadataAccessor();
  lVar6 = CONCAT71(extraout_var,RVar2.value);
  lVar13 = (long)&local_c0 - (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = param_1[2];
  puVar14 = *(undefined **)(lVar17 + 0x58);
  lVar17 = *(long *)(lVar17 + 0x68);
  uVar7 = 0;
  local_a0 = lVar15;
  puStack_98 = puVar14;
  local_90 = lVar12;
  lStack_88 = lVar17;
  local_80 = lVar15;
  local_78 = puVar14;
  local_70 = lVar12;
  local_68 = lVar17;
  FUN_100778e04(0,&local_80);
  local_80 = lVar15;
  local_78 = puVar14;
  local_70 = lVar12;
  local_68 = lVar17;
  FUN_10078309c(0xff,&local_80);
  OVar3 = Swift::Optional::typeMetadataAccessor();
  FUN_10079f534(&local_80,FUN_100786cd8,local_b0,lVar16,uVar7,OVar3.value);
  lVar16 = local_68;
  lVar15 = local_70;
  lVar12 = local_80;
  if (local_80 != 0) {
    local_c0.unknown = local_78;
    if (local_70 != 0) {
      CVar8 = Swift::CancellationError::typeMetadataAccessor();
      CVar9 = CVar8;
      FUN_10076915c();
      _swift_allocError(CVar8.unknown,CVar9.unknown,0,0);
      Swift::CancellationError::init();
      puVar10 = puVar5;
      puVar11 = (undefined8 *)
                PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
      _swift_allocError(puVar5,
                        PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90,0,0)
      ;
      *puVar11 = CVar8.unknown;
      _swift_continuation_throwingResumeWithError(lVar15,puVar10);
    }
    if (lVar16 != 0) {
      CVar8 = Swift::CancellationError::typeMetadataAccessor();
      CVar9 = CVar8;
      FUN_10076915c();
      _swift_allocError(CVar8.unknown,CVar9.unknown,0,0);
      Swift::CancellationError::init();
      uVar7 = 0;
      local_b0[0] = CVar8.unknown;
      _swift_getAssociatedTypeWitness
                (0,lVar17,puVar14,
                 PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
                 PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
      FUN_1005ec180(local_b0,lVar16,uVar7,puVar5,
                    PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
    TVar1.unknown = local_c0.unknown;
    Swift::Task::cancel(local_c0);
    (**(code **)(*(long *)(lVar4 + -8) + 0x38))(lVar13,1,1,lVar4);
    _swift_storeEnumTagMultiPayload(lVar13,lVar6,0);
    FUN_10072e9c0(lVar13,lVar12,lVar6);
    FUN_100004550(lVar12,TVar1.unknown,lVar15,lVar16);
  }
  return;
}



/* Address: 0x100784090 | FUN_100784090 */

void FUN_100784090(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x140) = param_4;
  *(undefined8 *)(unaff_x22 + 0x148) = param_5;
  *(undefined8 *)(unaff_x22 + 0x138) = param_1;
  _swift_task_switch(FUN_1007840ac,0,0);
  return;
}



/* Address: 0x1007840ac | FUN_1007840ac */

void FUN_1007840ac(void)

{
  byte bVar1;
  long *plVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x128) = *(undefined8 *)(unaff_x22 + 0x148);
  *(undefined8 *)(unaff_x22 + 0x120) = *(undefined8 *)(unaff_x22 + 0x140);
  bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar1 & 1) != 0) {
    plVar2 = (long *)(ulong)*(uint *)(PTR__withThrowingTaskGroup_100eaef88 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x150) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_1007841ac;
    Swift::_withThrowingTaskGroup();
    return;
  }
  _swift_taskGroup_initialize(unaff_x22 + 0x10,PTR___type_metadata_for____100eae0c8 + 8);
  *(long *)(unaff_x22 + 0x130) = unaff_x22 + 0x10;
  plVar2 = (long *)0x150;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x158) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100784208;
  FUN_10078444c();
  return;
}



/* Address: 0x1007841ac | FUN_1007841ac */

void FUN_1007841ac(void)

{
  long unaff_x20;
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x150));
  if (unaff_x20 != 0) {
    _swift_errorRelease();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100784204. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Address: 0x100784208 | FUN_100784208 */

void FUN_100784208(void)

{
  long *plVar1;
  ThrowingTaskGroup TVar2;
  long unaff_x20;
  long lVar3;
  long *unaff_x22;
  long lVar4;
  
  lVar3 = *unaff_x22;
  lVar4 = *unaff_x22;
  *(long *)(lVar3 + 0x160) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x158));
  if (unaff_x20 != 0) {
    _swift_task_switch(FUN_10078430c,0,0);
    return;
  }
  plVar1 = (long *)(ulong)*(uint *)(PTR__awaitAllRemainingTasks_100eaedb0 + 4);
  _swift_task_alloc();
  *(long **)(lVar3 + 0x168) = plVar1;
  TVar2.unknown = &DAT_100fe3110;
  FUN_1000f7830(&DAT_100fe3110,&DAT_100c76c88);
  *plVar1 = lVar4;
  plVar1[1] = (long)FUN_1007842bc;
  Swift::ThrowingTaskGroup::_awaitAllRemainingTasks(TVar2);
  return;
}



/* Address: 0x1007842bc | FUN_1007842bc */

void FUN_1007842bc(void)

{
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x168));
  _swift_task_switch(FUN_1007709dc,0,0);
  return;
}



/* Address: 0x10078430c | FUN_10078430c */

void FUN_10078430c(void)

{
  long *plVar1;
  ThrowingTaskGroup TVar2;
  long unaff_x22;
  
  TVar2.unknown = *(undefined **)(unaff_x22 + 0x130);
  FUN_1000f7830(&DAT_100fdfb40,&DAT_100c74390);
  Swift::ThrowingTaskGroup::cancelAll(TVar2);
  plVar1 = (long *)(ulong)*(uint *)(PTR__awaitAllRemainingTasks_100eaedb0 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x170) = plVar1;
  TVar2.unknown = &DAT_100fe3110;
  FUN_1000f7830(&DAT_100fe3110,&DAT_100c76c88);
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1007843b0;
  Swift::ThrowingTaskGroup::_awaitAllRemainingTasks(TVar2);
  return;
}



/* Address: 0x1007843b0 | FUN_1007843b0 */

void FUN_1007843b0(void)

{
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x170));
  _swift_task_switch(FUN_100784400,0,0);
  return;
}



/* Address: 0x100784400 | FUN_100784400 */

void FUN_100784400(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x160);
  _swift_taskGroup_destroy(unaff_x22 + 0x10);
  _swift_willThrow();
  _swift_errorRelease(uVar1);
  return;
}



/* Address: 0x10078444c | FUN_10078444c */

void FUN_10078444c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xf0) = param_3;
  *(undefined8 **)(unaff_x22 + 0xf8) = param_4;
  *(undefined8 *)(unaff_x22 + 0xe8) = param_2;
  *(undefined8 *)(unaff_x22 + 0x100) = *param_4;
  _swift_task_switch(FUN_100784470,0,0);
  return;
}



/* Address: 0x100784470 | FUN_100784470 */

void FUN_100784470(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  bool bVar3;
  byte bVar4;
  undefined *puVar5;
  ulong uVar6;
  TaskPriority TVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  code *pcVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  ThrowingTaskGroup TVar17;
  long unaff_x22;
  long lVar18;
  long lVar19;
  long lVar20;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xf8);
  lVar15 = *(long *)(unaff_x22 + 0x100);
  puVar2 = *(undefined8 **)(unaff_x22 + 0xe8);
  puVar5 = &DAT_100fe0dc8;
  FUN_1000f7830(&DAT_100fe0dc8,&DAT_100c75540);
  uVar9 = *(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xf;
  uVar6 = uVar9 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar6);
  TVar7 = Swift::TaskPriority::typeMetadataAccessor();
  pcVar11 = *(code **)(*(long *)(TVar7.unknown + -8) + 0x38);
  (*pcVar11)(uVar6,1,1,TVar7.unknown);
  lVar19 = *(long *)(lVar15 + 0x50);
  *(long *)(unaff_x22 + 0x108) = lVar19;
  lVar20 = *(long *)(lVar19 + -8);
  lVar18 = *(long *)(lVar20 + 0x40);
  uVar8 = lVar18 + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar8);
  (**(code **)(lVar20 + 0x10))();
  uVar12 = (ulong)*(byte *)(lVar20 + 0x50);
  uVar16 = uVar12 + 0x40 & (uVar12 ^ 0xffffffffffffffff);
  uVar14 = lVar18 + uVar16 + 7 & 0xfffffffffffffff8;
  puVar5 = &DAT_100effd38;
  _swift_allocObject(&DAT_100effd38,uVar14 + 8,uVar12 | 7);
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined8 *)(puVar5 + 0x18) = 0;
  *(long *)(puVar5 + 0x20) = lVar19;
  uVar13 = *(undefined8 *)(lVar15 + 0x58);
  *(undefined8 *)(unaff_x22 + 0x110) = uVar13;
  *(undefined8 *)(puVar5 + 0x28) = uVar13;
  uVar13 = *(undefined8 *)(lVar15 + 0x60);
  *(undefined8 *)(unaff_x22 + 0x118) = uVar13;
  *(undefined8 *)(puVar5 + 0x30) = uVar13;
  uVar13 = *(undefined8 *)(lVar15 + 0x68);
  *(undefined8 *)(unaff_x22 + 0x120) = uVar13;
  *(undefined8 *)(puVar5 + 0x38) = uVar13;
  (**(code **)(lVar20 + 0x20))(puVar5 + uVar16,uVar8,lVar19);
  *(undefined8 *)(puVar5 + uVar14) = uVar1;
  _swift_task_dealloc(uVar8);
  _swift_retain(uVar1);
  FUN_1007d299c(uVar6,&DAT_100c77100,puVar5);
  FUN_100733b9c(uVar6);
  _swift_task_dealloc(uVar6);
  uVar9 = uVar9 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar9);
  (*pcVar11)();
  puVar5 = &DAT_100effd60;
  _swift_allocObject(&DAT_100effd60,0x28,7);
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined8 *)(puVar5 + 0x18) = 0;
  *(undefined8 *)(puVar5 + 0x20) = uVar1;
  _swift_retain(uVar1);
  FUN_1007d299c(uVar9,&DAT_100c77110,puVar5);
  FUN_100733b9c(uVar9);
  _swift_task_dealloc(uVar9);
  TVar17.unknown = (undefined *)*puVar2;
  puVar5 = &DAT_100fdfb40;
  FUN_1000f7830(&DAT_100fdfb40,&DAT_100c74390);
  *(undefined **)(unaff_x22 + 0x128) = puVar5;
  bVar3 = Swift::ThrowingTaskGroup::get_isEmpty(TVar17);
  if (bVar3) {
                    /* WARNING: Could not recover jumptable at 0x0001007846c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar15 = *(long *)(unaff_x22 + 0xf8);
  bVar4 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  *(byte *)(unaff_x22 + 0x14a) = bVar4 & 1;
  *(undefined8 *)(unaff_x22 + 0x130) = *(undefined8 *)(lVar15 + 0x10);
  if ((bVar4 & 1) != 0) {
    plVar10 = (long *)(ulong)*(uint *)(PTR__next_100eaedc0 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x138) = plVar10;
    FUN_1000f7830(&DAT_100fe3110,&DAT_100c76c88);
    *plVar10 = unaff_x22;
    plVar10[1] = (long)FUN_10078479c;
    Swift::ThrowingTaskGroup::_next((undefined *)(unaff_x22 + 0x148));
    return;
  }
  _swift_taskGroup_wait_next_throwing
            (unaff_x22 + 0x149,TVar17.unknown,FUN_100784800,unaff_x22 + 0x70);
  return;
}



/* Address: 0x10078479c | FUN_10078479c */

void FUN_10078479c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x138));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100784828;
  }
  else {
    *(long *)(lVar2 + 0x140) = unaff_x20;
    pcVar1 = FUN_100784944;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100784800 | FUN_100784800 */

void FUN_100784800(void)

{
  code *pcVar1;
  long unaff_x20;
  long unaff_x22;
  
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100784828;
  }
  else {
    *(long *)(unaff_x22 + 0x140) = unaff_x20;
    pcVar1 = FUN_100784944;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100784828 | FUN_100784828 */

void FUN_100784828(void)

{
  bool bVar1;
  long *plVar2;
  ThrowingTaskGroup TVar3;
  long unaff_x22;
  
  TVar3.unknown = (undefined *)**(undefined8 **)(unaff_x22 + 0xe8);
  Swift::ThrowingTaskGroup::cancelAll(TVar3);
  bVar1 = Swift::ThrowingTaskGroup::get_isEmpty(TVar3);
  if (bVar1) {
                    /* WARNING: Could not recover jumptable at 0x0001007848a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  if (*(char *)(unaff_x22 + 0x14a) == '\x01') {
    plVar2 = (long *)(ulong)*(uint *)(PTR__next_100eaedc0 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x138) = plVar2;
    FUN_1000f7830(&DAT_100fe3110,&DAT_100c76c88);
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_10078479c;
    Swift::ThrowingTaskGroup::_next((undefined *)(unaff_x22 + 0x148));
    return;
  }
  _swift_taskGroup_wait_next_throwing
            (unaff_x22 + 0x149,TVar3.unknown,FUN_100784800,unaff_x22 + 0x70);
  return;
}



/* Address: 0x100784944 | FUN_100784944 */

void FUN_100784944(void)

{
  long lVar1;
  long lVar2;
  Optional OVar3;
  Result RVar4;
  bool bVar5;
  undefined8 uVar6;
  CancellationError CVar7;
  CancellationError CVar8;
  undefined7 extraout_var;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  ThrowingTaskGroup TVar13;
  undefined8 uVar14;
  Task TVar15;
  long unaff_x22;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  uVar11 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x118);
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x110);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar18;
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x120);
  *(undefined8 *)(unaff_x22 + 0x30) = uVar19;
  *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0x140);
  *(undefined8 *)(unaff_x22 + 0x98) = uVar18;
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar14;
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar19;
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar17;
  uVar6 = 0;
  FUN_100778e04(0);
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar18;
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar14;
  *(undefined8 *)(unaff_x22 + 200) = uVar19;
  *(undefined8 *)(unaff_x22 + 0xd0) = uVar17;
  FUN_100781de0(0xff,(undefined8 *)(unaff_x22 + 0xb8));
  OVar3 = Swift::Optional::typeMetadataAccessor();
  FUN_10079f534(unaff_x22 + 0x48,FUN_10078702c,unaff_x22 + 0x10,uVar11,uVar6,OVar3.value);
  TVar15.unknown = *(undefined **)(unaff_x22 + 0x48);
  uVar12 = *(ulong *)(unaff_x22 + 0x58);
  if ((((ulong)TVar15.unknown & uVar12 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) {
    _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x140));
  }
  else {
    lVar16 = *(long *)(unaff_x22 + 0x50);
    lVar1 = *(long *)(unaff_x22 + 0x60);
    lVar2 = *(long *)(unaff_x22 + 0x68);
    if ((long)uVar12 < 0) {
      if (lVar1 != 0) {
        uVar6 = *(undefined8 *)(unaff_x22 + 0x128);
        CVar7 = Swift::CancellationError::typeMetadataAccessor();
        CVar8 = CVar7;
        FUN_10076915c();
        _swift_allocError(CVar7.unknown,CVar8.unknown,0,0);
        Swift::CancellationError::init();
        puVar10 = (undefined8 *)
                  PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
        _swift_allocError(uVar6,
                          PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90,0,
                          0);
        *puVar10 = CVar7.unknown;
        _swift_continuation_throwingResumeWithError(lVar1,uVar6);
      }
      if (lVar2 != 0) {
        uVar6 = *(undefined8 *)(unaff_x22 + 0x120);
        uVar11 = *(undefined8 *)(unaff_x22 + 0x128);
        uVar17 = *(undefined8 *)(unaff_x22 + 0x110);
        CVar7 = Swift::CancellationError::typeMetadataAccessor();
        CVar8 = CVar7;
        FUN_10076915c();
        _swift_allocError(CVar7.unknown,CVar8.unknown,0,0);
        Swift::CancellationError::init();
        *(undefined **)(unaff_x22 + 0xe0) = CVar7.unknown;
        uVar14 = 0;
        _swift_getAssociatedTypeWitness
                  (0,uVar6,uVar17,
                   PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
                   PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
        FUN_1005ec180(unaff_x22 + 0xe0,lVar2,uVar14,uVar11,
                      PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
      }
      uVar6 = *(undefined8 *)(unaff_x22 + 0x140);
      uVar14 = *(undefined8 *)(unaff_x22 + 0x118);
      uVar11 = *(undefined8 *)(unaff_x22 + 0x108);
      Swift::Task::cancel((undefined *)(uVar12 & 0x7fffffffffffffff));
      _swift_getAssociatedTypeWitness
                (0xff,uVar14,uVar11,
                 PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
                 PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
      Swift::Optional::typeMetadataAccessor();
      RVar4 = Swift::Result::typeMetadataAccessor();
      plVar9 = (long *)(*(long *)(*(long *)(CONCAT71(extraout_var,RVar4.value) + -8) + 0x40) + 0xfU
                       & 0xfffffffffffffff0);
      _swift_task_alloc();
      *plVar9 = lVar16;
      _swift_storeEnumTagMultiPayload();
      _swift_errorRetain(lVar16);
      FUN_10072e9c0(plVar9,TVar15.unknown,CONCAT71(extraout_var,RVar4.value));
      _swift_errorRelease(uVar6);
      FUN_1007870a8(TVar15.unknown,lVar16,uVar12,lVar1,lVar2);
      _swift_task_dealloc(plVar9);
    }
    else {
      if (lVar16 == 0) {
        FUN_100781b48(TVar15.unknown,0,uVar12,lVar1,lVar2);
      }
      else {
        uVar6 = *(undefined8 *)(unaff_x22 + 0x120);
        uVar11 = *(undefined8 *)(unaff_x22 + 0x128);
        uVar17 = *(undefined8 *)(unaff_x22 + 0x110);
        CVar7 = Swift::CancellationError::typeMetadataAccessor();
        CVar8 = CVar7;
        FUN_10076915c();
        _swift_allocError(CVar7.unknown,CVar8.unknown,0,0);
        FUN_100781b48(TVar15.unknown,lVar16,uVar12,lVar1,lVar2);
        Swift::CancellationError::init();
        *(undefined **)(unaff_x22 + 0xd8) = CVar7.unknown;
        uVar14 = 0;
        _swift_getAssociatedTypeWitness
                  (0,uVar6,uVar17,
                   PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
                   PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
        FUN_1005ec180(unaff_x22 + 0xd8,lVar16,uVar14,uVar11,
                      PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
      }
      uVar6 = *(undefined8 *)(unaff_x22 + 0x140);
      Swift::Task::cancel(TVar15);
      _swift_errorRelease(uVar6);
      FUN_1007870a8(TVar15.unknown,lVar16,uVar12,lVar1,lVar2);
      FUN_1007870a8(TVar15.unknown,lVar16,uVar12,lVar1,lVar2);
    }
  }
  TVar13.unknown = (undefined *)**(undefined8 **)(unaff_x22 + 0xe8);
  Swift::ThrowingTaskGroup::cancelAll(TVar13);
  bVar5 = Swift::ThrowingTaskGroup::get_isEmpty(TVar13);
  if (bVar5) {
                    /* WARNING: Could not recover jumptable at 0x000100784d9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  if (*(char *)(unaff_x22 + 0x14a) == '\x01') {
    plVar9 = (long *)(ulong)*(uint *)(PTR__next_100eaedc0 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x138) = plVar9;
    FUN_1000f7830(&DAT_100fe3110,&DAT_100c76c88);
    *plVar9 = unaff_x22;
    plVar9[1] = (long)FUN_10078479c;
    Swift::ThrowingTaskGroup::_next((undefined *)(unaff_x22 + 0x148));
    return;
  }
  _swift_taskGroup_wait_next_throwing
            (unaff_x22 + 0x149,TVar13.unknown,FUN_100784800,unaff_x22 + 0x70);
  return;
}



/* Address: 0x100784e50 | FUN_100784e50 */

void FUN_100784e50(void)

{
  undefined *puVar1;
  Optional OVar2;
  Result RVar3;
  Optional OVar4;
  long lVar5;
  undefined7 extraout_var;
  undefined *puVar6;
  undefined7 extraout_var_00;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined7 extraout_var_01;
  undefined7 extraout_var_02;
  undefined8 in_x3;
  long *in_x4;
  long lVar10;
  undefined8 uVar11;
  long unaff_x22;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  
  *(undefined8 *)(unaff_x22 + 0x160) = in_x3;
  *(long **)(unaff_x22 + 0x168) = in_x4;
  lVar13 = *in_x4;
  uVar11 = *(undefined8 *)(lVar13 + 0x60);
  *(undefined8 *)(unaff_x22 + 0x170) = uVar11;
  lVar10 = *(long *)(lVar13 + 0x50);
  *(long *)(unaff_x22 + 0x178) = lVar10;
  puVar1 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  lVar5 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar11,lVar10,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  *(long *)(unaff_x22 + 0x180) = lVar5;
  OVar2 = Swift::Optional::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x188) = CONCAT71(extraout_var,OVar2.value);
  puVar6 = &DAT_100fdfb40;
  FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
  *(undefined **)(unaff_x22 + 400) = puVar6;
  RVar3 = Swift::Result::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x198) = CONCAT71(extraout_var_00,RVar3.value);
  uVar7 = *(long *)(*(long *)(CONCAT71(extraout_var_00,RVar3.value) + -8) + 0x40) + 0xfU &
          0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1a0) = uVar7;
  uVar12 = *(undefined8 *)(lVar13 + 0x68);
  *(undefined8 *)(unaff_x22 + 0x1a8) = uVar12;
  uVar14 = *(undefined8 *)(lVar13 + 0x58);
  *(undefined8 *)(unaff_x22 + 0x1b0) = uVar14;
  lVar13 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar12,uVar14,PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  *(long *)(unaff_x22 + 0x1b8) = lVar13;
  lVar13 = *(long *)(lVar13 + -8);
  *(long *)(unaff_x22 + 0x1c0) = lVar13;
  uVar7 = *(long *)(lVar13 + 0x40) + 0xf;
  uVar8 = uVar7 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1c8) = uVar8;
  uVar7 = uVar7 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1d0) = uVar7;
  *(long *)(unaff_x22 + 200) = lVar10;
  *(undefined8 *)(unaff_x22 + 0xd0) = uVar14;
  *(undefined8 *)(unaff_x22 + 0xd8) = uVar11;
  *(undefined8 *)(unaff_x22 + 0xe0) = uVar12;
  uVar9 = 0xff;
  FUN_10077e9fc();
  *(undefined8 *)(unaff_x22 + 0x1d8) = uVar9;
  OVar4 = Swift::Optional::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x1e0) = CONCAT71(extraout_var_01,OVar4.value);
  lVar13 = *(long *)(CONCAT71(extraout_var_01,OVar4.value) + -8);
  *(long *)(unaff_x22 + 0x1e8) = lVar13;
  uVar7 = *(long *)(lVar13 + 0x40) + 0xf;
  uVar8 = uVar7 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1f0) = uVar8;
  uVar7 = uVar7 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1f8) = uVar7;
  *(long *)(unaff_x22 + 0xe8) = lVar10;
  *(undefined8 *)(unaff_x22 + 0xf0) = uVar14;
  *(undefined8 *)(unaff_x22 + 0xf8) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x100) = uVar12;
  uVar9 = 0xff;
  FUN_10077ea08();
  *(undefined8 *)(unaff_x22 + 0x200) = uVar9;
  OVar4 = Swift::Optional::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x208) = CONCAT71(extraout_var_02,OVar4.value);
  lVar13 = *(long *)(CONCAT71(extraout_var_02,OVar4.value) + -8);
  *(long *)(unaff_x22 + 0x210) = lVar13;
  uVar7 = *(long *)(lVar13 + 0x40) + 0xf;
  uVar8 = uVar7 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x218) = uVar8;
  uVar7 = uVar7 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x220) = uVar7;
  lVar13 = *(long *)(CONCAT71(extraout_var,OVar2.value) + -8);
  *(long *)(unaff_x22 + 0x228) = lVar13;
  uVar7 = *(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x230) = uVar7;
  lVar5 = *(long *)(lVar5 + -8);
  *(long *)(unaff_x22 + 0x238) = lVar5;
  uVar7 = *(long *)(lVar5 + 0x40) + 0xf;
  uVar8 = uVar7 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x240) = uVar8;
  uVar7 = uVar7 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x248) = uVar7;
  lVar5 = *(long *)(lVar10 + -8);
  *(long *)(unaff_x22 + 0x250) = lVar5;
  uVar7 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 600) = uVar7;
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar11,lVar10,puVar1,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  *(long *)(unaff_x22 + 0x260) = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  *(long *)(unaff_x22 + 0x268) = lVar5;
  uVar7 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x270) = uVar7;
  _swift_task_switch(FUN_1007850e8,0,0);
  return;
}



/* Address: 0x1007850e8 | FUN_1007850e8 */

void FUN_1007850e8(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x168);
  (**(code **)(*(long *)(unaff_x22 + 0x250) + 0x10))
            (*(undefined8 *)(unaff_x22 + 600),*(undefined8 *)(unaff_x22 + 0x160),
             *(undefined8 *)(unaff_x22 + 0x178));
  Swift::AsyncSequence::_makeAsyncIterator();
  *(undefined8 *)(unaff_x22 + 0x278) = *(undefined8 *)(lVar1 + 0x10);
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_100785188;
  _swift_continuation_init(unaff_x22 + 0x10,1);
  FUN_100785dec();
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}



/* Address: 0x100785188 | FUN_100785188 */

void FUN_100785188(void)

{
  long *plVar1;
  long *unaff_x22;
  long lVar2;
  long lVar3;
  
  lVar3 = *unaff_x22;
  lVar2 = *unaff_x22;
  if (*(long *)(lVar3 + 0x30) != 0) {
    *(long *)(lVar3 + 0x290) = *(long *)(lVar3 + 0x30);
    _swift_willThrow();
    _swift_task_switch(FUN_1007852c4,0,0);
    return;
  }
  _swift_getAssociatedConformanceWitness
            (*(undefined8 *)(lVar3 + 0x170),*(undefined8 *)(lVar3 + 0x178),
             *(undefined8 *)(lVar3 + 0x260),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
            );
  plVar1 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
  _swift_task_alloc();
  *(long **)(lVar3 + 0x280) = plVar1;
  *plVar1 = lVar2;
  plVar1[1] = (long)FUN_100785260;
  Swift::AsyncIteratorProtocol::_next();
  return;
}



/* Address: 0x100785260 | FUN_100785260 */

void FUN_100785260(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x288) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x280));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1007853c0;
  }
  else {
    pcVar1 = FUN_100785cf0;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1007852c4 | FUN_1007852c4 */

void FUN_1007852c4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x270);
  uVar7 = *(undefined8 *)(unaff_x22 + 600);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x248);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x240);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x230);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x220);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x218);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1f0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1f8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1c8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x1d0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x1a0);
  (**(code **)(*(long *)(unaff_x22 + 0x268) + 8))(uVar6,*(undefined8 *)(unaff_x22 + 0x260));
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar5);
                    /* WARNING: Could not recover jumptable at 0x0001007853bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1007853c0 | FUN_1007853c0 */

void FUN_1007853c0(void)

{
  Optional OVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  CancellationError CVar4;
  CancellationError CVar5;
  char *pcVar6;
  UnsafeContinuation UVar7;
  undefined *puVar8;
  undefined7 extraout_var;
  undefined8 uVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  Task TVar13;
  undefined8 *puVar14;
  long lVar15;
  long unaff_x22;
  undefined8 uVar16;
  undefined8 uVar17;
  long *plVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long lVar24;
  long lVar25;
  Task TVar26;
  long lVar27;
  undefined8 uVar28;
  
  lVar24 = *(long *)(unaff_x22 + 0x238);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x230);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar19 = uVar11;
  (**(code **)(lVar24 + 0x30))(uVar11,1,uVar16);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x278);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x1b0);
  if ((int)uVar19 == 1) {
    uVar17 = *(undefined8 *)(unaff_x22 + 0x220);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x218);
    lVar24 = *(long *)(unaff_x22 + 0x210);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x208);
    lVar25 = *(long *)(unaff_x22 + 0x200);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x170);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x178);
    (**(code **)(*(long *)(unaff_x22 + 0x228) + 8))(uVar11,*(undefined8 *)(unaff_x22 + 0x188));
    *(undefined8 *)(unaff_x22 + 0x60) = uVar16;
    *(undefined8 *)(unaff_x22 + 0x68) = uVar12;
    *(undefined8 *)(unaff_x22 + 0x70) = uVar19;
    *(undefined8 *)(unaff_x22 + 0x78) = uVar2;
    *(undefined8 *)(unaff_x22 + 0x108) = uVar16;
    *(undefined8 *)(unaff_x22 + 0x110) = uVar12;
    *(undefined8 *)(unaff_x22 + 0x118) = uVar19;
    *(undefined8 *)(unaff_x22 + 0x120) = uVar2;
    uVar2 = 0;
    FUN_100778e04(0,unaff_x22 + 0x108);
    FUN_10079f534(uVar17,FUN_100787150,unaff_x22 + 0x50,uVar9,uVar2,uVar22);
    (**(code **)(lVar24 + 0x10))(uVar20,uVar17,uVar22);
    (**(code **)(*(long *)(lVar25 + -8) + 0x30))(uVar20,1,lVar25);
    if ((int)uVar20 == 1) {
      uVar2 = *(undefined8 *)(unaff_x22 + 0x270);
      lVar24 = *(long *)(unaff_x22 + 0x268);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x260);
      (**(code **)(*(long *)(unaff_x22 + 0x210) + 8))
                (*(undefined8 *)(unaff_x22 + 0x220),*(undefined8 *)(unaff_x22 + 0x208));
      pcVar10 = *(code **)(lVar24 + 8);
    }
    else {
      puVar14 = *(undefined8 **)(unaff_x22 + 0x218);
      puVar3 = puVar14;
      _swift_getEnumCaseMultiPayload(puVar14,*(undefined8 *)(unaff_x22 + 0x200));
      TVar26.unknown = (undefined *)*puVar14;
      if ((int)puVar3 == 0) {
        lVar15 = puVar14[1];
        Swift::Task::cancel(TVar26);
        uVar2 = *(undefined8 *)(unaff_x22 + 0x270);
        lVar25 = *(long *)(unaff_x22 + 0x268);
        uVar12 = *(undefined8 *)(unaff_x22 + 0x260);
        uVar19 = *(undefined8 *)(unaff_x22 + 0x220);
        lVar24 = *(long *)(unaff_x22 + 0x210);
        uVar9 = *(undefined8 *)(unaff_x22 + 0x208);
        if (lVar15 == 0) {
          _swift_release(TVar26.unknown);
          (**(code **)(lVar24 + 8))(uVar19,uVar9);
          pcVar10 = *(code **)(lVar25 + 8);
        }
        else {
          uVar11 = *(undefined8 *)(unaff_x22 + 0x1b8);
          uVar16 = *(undefined8 *)(unaff_x22 + 400);
          CVar4 = Swift::CancellationError::typeMetadataAccessor();
          CVar5 = CVar4;
          FUN_10076915c();
          _swift_allocError(CVar4.unknown,CVar5.unknown,0,0);
          Swift::CancellationError::init();
          *(undefined **)(unaff_x22 + 0x158) = CVar4.unknown;
          FUN_1005ec180(unaff_x22 + 0x158,lVar15,uVar11,uVar16,
                        PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
          _swift_release(TVar26.unknown);
          (**(code **)(lVar24 + 8))(uVar19,uVar9);
          pcVar10 = *(code **)(lVar25 + 8);
        }
      }
      else if ((int)puVar3 == 1) {
        TVar13.unknown = (undefined *)puVar14[1];
        lVar24 = puVar14[2];
        lVar25 = puVar14[3];
        if (lVar24 != 0) {
          uVar2 = *(undefined8 *)(unaff_x22 + 400);
          CVar4 = Swift::CancellationError::typeMetadataAccessor();
          CVar5 = CVar4;
          FUN_10076915c();
          _swift_allocError(CVar4.unknown,CVar5.unknown,0,0);
          Swift::CancellationError::init();
          puVar3 = (undefined8 *)
                   PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
          _swift_allocError(uVar2,
                            PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90,
                            0,0);
          *puVar3 = CVar4.unknown;
          _swift_continuation_throwingResumeWithError(lVar24,uVar2);
        }
        if (lVar25 != 0) {
          uVar2 = *(undefined8 *)(unaff_x22 + 0x1b8);
          uVar12 = *(undefined8 *)(unaff_x22 + 400);
          CVar4 = Swift::CancellationError::typeMetadataAccessor();
          CVar5 = CVar4;
          FUN_10076915c();
          _swift_allocError(CVar4.unknown,CVar5.unknown,0,0);
          Swift::CancellationError::init();
          *(undefined **)(unaff_x22 + 0x150) = CVar4.unknown;
          FUN_1005ec180(unaff_x22 + 0x150,lVar25,uVar2,uVar12,
                        PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
        }
        uVar2 = *(undefined8 *)(unaff_x22 + 0x270);
        lVar25 = *(long *)(unaff_x22 + 0x268);
        uVar12 = *(undefined8 *)(unaff_x22 + 0x260);
        lVar24 = *(long *)(unaff_x22 + 0x238);
        uVar11 = *(undefined8 *)(unaff_x22 + 0x220);
        lVar15 = *(long *)(unaff_x22 + 0x210);
        uVar16 = *(undefined8 *)(unaff_x22 + 0x208);
        uVar19 = *(undefined8 *)(unaff_x22 + 0x198);
        uVar9 = *(undefined8 *)(unaff_x22 + 0x1a0);
        uVar20 = *(undefined8 *)(unaff_x22 + 0x180);
        Swift::Task::cancel(TVar13);
        (**(code **)(lVar24 + 0x38))(uVar9,1,1,uVar20);
        _swift_storeEnumTagMultiPayload(uVar9,uVar19,0);
        FUN_10072e9c0(uVar9,TVar26.unknown,uVar19);
        _swift_release(TVar13.unknown);
        (**(code **)(lVar15 + 8))(uVar11,uVar16);
        pcVar10 = *(code **)(lVar25 + 8);
      }
      else {
        uVar2 = *(undefined8 *)(unaff_x22 + 0x240);
        lVar25 = *(long *)(unaff_x22 + 0x238);
        uVar12 = *(undefined8 *)(unaff_x22 + 0x180);
        pcVar6 = (char *)0x60;
        _swift_task_alloc();
        builtin_strncpy(pcVar6,
                        "downstreamContinuation element task upstreamContinuation clockContinuation "
                        ,0x4c);
        UVar7 = Swift::UnsafeContinuation::typeMetadataAccessor();
        *(undefined **)(unaff_x22 + 0xa0) = UVar7.unknown;
        *(undefined8 *)(unaff_x22 + 0xa8) = uVar12;
        puVar8 = &DAT_100fe2d00;
        FUN_1000f8b08(&DAT_100fe2d00,&DAT_100c76eb0);
        *(undefined **)(unaff_x22 + 0xb0) = puVar8;
        puVar8 = &DAT_100fe3398;
        FUN_1000f8b08(&DAT_100fe3398,&DAT_100c772a0);
        *(undefined **)(unaff_x22 + 0xb8) = puVar8;
        Swift::UnsafeContinuation::typeMetadataAccessor();
        OVar1 = Swift::Optional::typeMetadataAccessor();
        *(ulong *)(unaff_x22 + 0xc0) = CONCAT71(extraout_var,OVar1.value);
        lVar24 = 0;
        _swift_getTupleTypeMetadata(0,0x10005,unaff_x22 + 0xa0,pcVar6,0);
        _swift_task_dealloc(pcVar6);
        TVar13.unknown = *(undefined **)((long)puVar14 + (long)*(int *)(lVar24 + 0x40));
        lVar27 = *(long *)((long)puVar14 + (long)*(int *)(lVar24 + 0x50));
        lVar15 = *(long *)((long)puVar14 + (long)*(int *)(lVar24 + 0x60));
        (**(code **)(lVar25 + 0x20))(uVar2,(long)puVar14 + (long)*(int *)(lVar24 + 0x30),uVar12);
        if (lVar27 != 0) {
          uVar2 = *(undefined8 *)(unaff_x22 + 400);
          CVar4 = Swift::CancellationError::typeMetadataAccessor();
          CVar5 = CVar4;
          FUN_10076915c();
          _swift_allocError(CVar4.unknown,CVar5.unknown,0,0);
          Swift::CancellationError::init();
          puVar3 = (undefined8 *)
                   PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
          _swift_allocError(uVar2,
                            PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90,
                            0,0);
          *puVar3 = CVar4.unknown;
          _swift_continuation_throwingResumeWithError(lVar27,uVar2);
        }
        if (lVar15 != 0) {
          uVar2 = *(undefined8 *)(unaff_x22 + 0x1b8);
          uVar12 = *(undefined8 *)(unaff_x22 + 400);
          CVar4 = Swift::CancellationError::typeMetadataAccessor();
          CVar5 = CVar4;
          FUN_10076915c();
          _swift_allocError(CVar4.unknown,CVar5.unknown,0,0);
          Swift::CancellationError::init();
          *(undefined **)(unaff_x22 + 0x148) = CVar4.unknown;
          FUN_1005ec180(unaff_x22 + 0x148,lVar15,uVar2,uVar12,
                        PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
        }
        uVar2 = *(undefined8 *)(unaff_x22 + 0x270);
        lVar24 = *(long *)(unaff_x22 + 0x268);
        uVar12 = *(undefined8 *)(unaff_x22 + 0x260);
        uVar16 = *(undefined8 *)(unaff_x22 + 0x240);
        lVar25 = *(long *)(unaff_x22 + 0x238);
        uVar20 = *(undefined8 *)(unaff_x22 + 0x220);
        lVar15 = *(long *)(unaff_x22 + 0x210);
        uVar17 = *(undefined8 *)(unaff_x22 + 0x208);
        uVar19 = *(undefined8 *)(unaff_x22 + 0x198);
        uVar9 = *(undefined8 *)(unaff_x22 + 0x1a0);
        uVar11 = *(undefined8 *)(unaff_x22 + 0x180);
        Swift::Task::cancel(TVar13);
        (**(code **)(lVar25 + 0x10))(uVar9,uVar16,uVar11);
        (**(code **)(lVar25 + 0x38))(uVar9,0,1,uVar11);
        _swift_storeEnumTagMultiPayload(uVar9,uVar19,0);
        FUN_10072e9c0(uVar9,TVar26.unknown,uVar19);
        _swift_release(TVar13.unknown);
        (**(code **)(lVar25 + 8))(uVar16,uVar11);
        (**(code **)(lVar15 + 8))(uVar20,uVar17);
        pcVar10 = *(code **)(lVar24 + 8);
      }
    }
    (*pcVar10)(uVar2,uVar12);
    uVar20 = *(undefined8 *)(unaff_x22 + 600);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x248);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x240);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x230);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x220);
    uVar23 = *(undefined8 *)(unaff_x22 + 0x218);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x1f0);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x1f8);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x1c8);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x1d0);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x1a0);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x270));
    _swift_task_dealloc(uVar20);
    _swift_task_dealloc(uVar16);
    _swift_task_dealloc(uVar17);
    _swift_task_dealloc(uVar22);
    _swift_task_dealloc(uVar21);
    _swift_task_dealloc(uVar23);
    _swift_task_dealloc(uVar19);
    _swift_task_dealloc(uVar2);
    _swift_task_dealloc(uVar9);
    _swift_task_dealloc(uVar12);
    _swift_task_dealloc(uVar11);
                    /* WARNING: Could not recover jumptable at 0x000100785cc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar23 = *(undefined8 *)(unaff_x22 + 0x248);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x1f0);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x1f8);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x1e0);
  lVar25 = *(long *)(unaff_x22 + 0x1e8);
  lVar15 = *(long *)(unaff_x22 + 0x1d8);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar28 = *(undefined8 *)(unaff_x22 + 0x168);
  (**(code **)(lVar24 + 0x20))(uVar23,uVar11,uVar16);
  *(undefined8 *)(unaff_x22 + 0x90) = uVar28;
  *(undefined8 *)(unaff_x22 + 0x98) = uVar23;
  *(undefined8 *)(unaff_x22 + 0x128) = uVar21;
  *(undefined8 *)(unaff_x22 + 0x130) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x138) = uVar17;
  *(undefined8 *)(unaff_x22 + 0x140) = uVar2;
  uVar2 = 0;
  FUN_100778e04(0,unaff_x22 + 0x128);
  FUN_10079f534(uVar22,FUN_1007871d0,unaff_x22 + 0x80,uVar9,uVar2,uVar20);
  (**(code **)(lVar25 + 0x10))(uVar19,uVar22,uVar20);
  (**(code **)(*(long *)(lVar15 + -8) + 0x30))(uVar19,1);
  if ((int)uVar19 != 1) {
    plVar18 = *(long **)(unaff_x22 + 0x1f0);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x1d0);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x1b8);
    lVar24 = *(long *)(unaff_x22 + 0x1c0);
    lVar15 = *plVar18;
    Swift::UnsafeContinuation::typeMetadataAccessor();
    OVar1 = Swift::Optional::typeMetadataAccessor();
    lVar25 = 0;
    _swift_getTupleTypeMetadata2(0,OVar1.value,uVar2,"clockContinuation deadline ",0);
    (**(code **)(lVar24 + 0x20))(uVar12,(long)plVar18 + (long)*(int *)(lVar25 + 0x30),uVar2);
    if (lVar15 != 0) {
      uVar2 = *(undefined8 *)(unaff_x22 + 0x1c8);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x1b8);
      uVar19 = *(undefined8 *)(unaff_x22 + 400);
      (**(code **)(*(long *)(unaff_x22 + 0x1c0) + 0x10))
                (uVar2,*(undefined8 *)(unaff_x22 + 0x1d0),uVar12);
      FUN_1005ec10c(uVar2,lVar15,uVar12,uVar19,
                    PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
    (**(code **)(*(long *)(unaff_x22 + 0x1c0) + 8))
              (*(undefined8 *)(unaff_x22 + 0x1d0),*(undefined8 *)(unaff_x22 + 0x1b8));
  }
  uVar12 = *(undefined8 *)(unaff_x22 + 0x248);
  lVar24 = *(long *)(unaff_x22 + 0x238);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x180);
  (**(code **)(*(long *)(unaff_x22 + 0x1e8) + 8))
            (*(undefined8 *)(unaff_x22 + 0x1f8),*(undefined8 *)(unaff_x22 + 0x1e0));
  (**(code **)(lVar24 + 8))(uVar12,uVar2);
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_100785188;
  _swift_continuation_init(unaff_x22 + 0x10,1);
  FUN_100785dec();
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}



/* Address: 0x100785cf0 | FUN_100785cf0 */

void FUN_100785cf0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x270);
  uVar7 = *(undefined8 *)(unaff_x22 + 600);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x248);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x240);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x230);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x220);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x218);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1f0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1f8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1c8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x1d0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x1a0);
  (**(code **)(*(long *)(unaff_x22 + 0x268) + 8))(uVar6,*(undefined8 *)(unaff_x22 + 0x260));
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar5);
                    /* WARNING: Could not recover jumptable at 0x000100785de8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100785dec | FUN_100785dec */

void FUN_100785dec(undefined8 param_1,long *param_2)

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
  ulong local_98;
  ulong local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 auStack_70 [16];
  ulong local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  lVar5 = *param_2;
  lVar6 = param_2[2];
  uVar8 = *(ulong *)(lVar5 + 0x58);
  uStack_58 = *(undefined8 *)(lVar5 + 0x58);
  uVar7 = *(ulong *)(lVar5 + 0x50);
  uStack_48 = *(undefined8 *)(lVar5 + 0x68);
  uVar10 = *(undefined8 *)(lVar5 + 0x60);
  uVar9 = *(undefined8 *)(lVar5 + 0x68);
  uVar2 = 0;
  local_98 = uVar7;
  local_90 = uVar8;
  local_88 = uVar10;
  local_80 = uVar9;
  local_60 = uVar7;
  uStack_50 = uVar10;
  local_40 = param_1;
  FUN_100778e04(0,&local_98);
  local_98 = uVar7;
  local_90 = uVar8;
  local_88 = uVar10;
  local_80 = uVar9;
  FUN_10077f228(0xff,&local_98);
  OVar1 = Swift::Optional::typeMetadataAccessor();
  FUN_10079f534(&local_98,FUN_1007871e8,auStack_70,lVar6,uVar2,OVar1.value);
  uVar7 = local_90;
  uVar8 = local_98;
  if ((((local_98 ^ 0xffffffffffffffff) & 0xf00000000000000f) != 0) ||
     ((local_90 & 0xf000000000000007) != 0xf000000000000007)) {
    if ((long)local_90 < 0) {
      uVar7 = local_90 & 0x7fffffffffffffff;
      puVar3 = &DAT_100fdfb40;
      FUN_1000f7830(&DAT_100fdfb40,&DAT_100c74390);
      puVar4 = (ulong *)PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
      _swift_allocError();
      *puVar4 = uVar7;
      _swift_continuation_throwingResumeWithError(uVar8,puVar3);
    }
    else {
      _swift_continuation_throwingResume(local_98);
      FUN_1007748a0(uVar8,uVar7);
    }
  }
  return;
}



/* Address: 0x100785f20 | FUN_100785f20 */

void FUN_100785f20(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auStack_a0 [8];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar6 = *param_3;
  uVar7 = *(undefined8 *)(lVar6 + 0x68);
  uVar8 = *(undefined8 *)(lVar6 + 0x58);
  lVar1 = 0;
  local_98 = param_1;
  local_90 = param_4;
  local_88 = param_2;
  _swift_getAssociatedTypeWitness
            (0,uVar7,uVar8,PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  lVar5 = *(long *)(lVar1 + -8);
  uVar3 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar9 = (long)(auStack_a0 + -uVar3) - uVar3;
  Swift::Clock::_get_now();
  _swift_getAssociatedConformanceWitness
            (uVar7,uVar8,lVar1,PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008
             ,
             PTR___associated_conformance_descriptor_for_Swift_Clock_Swift_Clock_Instant__Swift_InstantProtocol_100eaeff0
            );
  Swift::InstantProtocol::_advanced();
  pcVar4 = *(code **)(lVar5 + 8);
  (*pcVar4)(auStack_a0 + -uVar3,lVar1);
  local_80 = *(undefined8 *)(lVar6 + 0x50);
  local_70 = *(undefined8 *)(lVar6 + 0x60);
  uVar2 = 0;
  uStack_78 = uVar8;
  uStack_68 = uVar7;
  FUN_100778e04(0,&local_80);
  FUN_10077c2f8(local_98,local_90,lVar9,uVar2);
  (*pcVar4)(lVar9,lVar1);
  return;
}



/* Address: 0x100786070 | FUN_100786070 */

void FUN_100786070(void)

{
  Result RVar1;
  Optional OVar2;
  long lVar3;
  undefined *puVar4;
  undefined7 extraout_var;
  ulong uVar5;
  undefined7 extraout_var_00;
  ulong uVar6;
  long *in_x3;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x22;
  undefined8 uVar10;
  long lVar11;
  
  *(long **)(unaff_x22 + 0x88) = in_x3;
  lVar11 = *in_x3;
  uVar8 = *(undefined8 *)(lVar11 + 0x60);
  *(undefined8 *)(unaff_x22 + 0x90) = uVar8;
  uVar7 = *(undefined8 *)(lVar11 + 0x50);
  *(undefined8 *)(unaff_x22 + 0x98) = uVar7;
  lVar3 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar8,uVar7,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  *(long *)(unaff_x22 + 0xa0) = lVar3;
  Swift::Optional::typeMetadataAccessor();
  puVar4 = &DAT_100fdfb40;
  FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
  *(undefined **)(unaff_x22 + 0xa8) = puVar4;
  RVar1 = Swift::Result::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0xb0) = CONCAT71(extraout_var,RVar1.value);
  uVar5 = *(long *)(*(long *)(CONCAT71(extraout_var,RVar1.value) + -8) + 0x40) + 0xfU &
          0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xb8) = uVar5;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0xc0) = lVar3;
  uVar5 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 200) = uVar5;
  uVar9 = *(undefined8 *)(lVar11 + 0x58);
  *(undefined8 *)(unaff_x22 + 0xd0) = uVar9;
  uVar10 = *(undefined8 *)(lVar11 + 0x68);
  *(undefined8 *)(unaff_x22 + 0xd8) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x50) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x58) = uVar10;
  uVar7 = 0xff;
  FUN_10077e9e4();
  *(undefined8 *)(unaff_x22 + 0xe0) = uVar7;
  OVar2 = Swift::Optional::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0xe8) = CONCAT71(extraout_var_00,OVar2.value);
  lVar3 = *(long *)(CONCAT71(extraout_var_00,OVar2.value) + -8);
  *(long *)(unaff_x22 + 0xf0) = lVar3;
  uVar5 = *(long *)(lVar3 + 0x40) + 0xf;
  uVar6 = uVar5 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xf8) = uVar6;
  uVar5 = uVar5 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x100) = uVar5;
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar10,uVar9,PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  *(long *)(unaff_x22 + 0x108) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x110) = lVar3;
  uVar5 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x118) = uVar5;
  _swift_task_switch(FUN_100786218,0,0);
  return;
}



/* Address: 0x100786218 | FUN_100786218 */

void FUN_100786218(void)

{
  long *plVar1;
  long lVar2;
  long unaff_x22;
  
  lVar2 = **(long **)(unaff_x22 + 0x88);
  *(undefined8 *)(unaff_x22 + 0x120) = *(undefined8 *)(lVar2 + 0x88);
  *(undefined8 *)(unaff_x22 + 0x128) = *(undefined8 *)(lVar2 + 0x80);
  *(long *)(unaff_x22 + 0x130) = (*(long **)(unaff_x22 + 0x88))[2];
  plVar1 = (long *)0x70;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x138) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1007862b8;
  FUN_100790978(plVar1,*(undefined8 *)(unaff_x22 + 0x118),0,0,FUN_1007870c0,
                *(undefined8 *)(unaff_x22 + 0x88),*(undefined8 *)(unaff_x22 + 0x108));
  return;
}



/* Address: 0x1007862b8 | FUN_1007862b8 */

void FUN_1007862b8(void)

{
  long *plVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x138));
  if (unaff_x20 != 0) {
    *(long *)(lVar2 + 0x158) = unaff_x20;
    _swift_task_switch(FUN_1007866a0,0,0);
    return;
  }
  plVar1 = (long *)(ulong)*(uint *)(PTR__sleep_100eaefe8 + 4);
  _swift_task_alloc();
  *(long **)(lVar2 + 0x140) = plVar1;
  *plVar1 = lVar3;
  plVar1[1] = (long)FUN_10078636c;
  Swift::Clock::_sleep();
  return;
}



/* Address: 0x10078636c | FUN_10078636c */

void FUN_10078636c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x148) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x140));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1007863d0;
  }
  else {
    pcVar1 = FUN_100786794;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1007863d0 | FUN_1007863d0 */

void FUN_1007863d0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  UnsafeContinuation UVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long unaff_x22;
  undefined8 *puVar10;
  
  *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0x98);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xe8);
  lVar3 = *(long *)(unaff_x22 + 0xf0);
  lVar7 = *(long *)(unaff_x22 + 0xe0);
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x98);
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0xd0);
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x90);
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0xd8);
  *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0xd0);
  *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(unaff_x22 + 0x90);
  *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar4 = 0;
  FUN_100778e04(0);
  FUN_10079f534(uVar2,FUN_1007870c8,unaff_x22 + 0x10,uVar9,uVar4,uVar1);
  (**(code **)(lVar3 + 0x10))(uVar5,uVar2,uVar1);
  (**(code **)(*(long *)(lVar7 + -8) + 0x30))(uVar5,1,lVar7);
  if ((int)uVar5 != 1) {
    puVar10 = *(undefined8 **)(unaff_x22 + 0xf8);
    lVar3 = *(long *)(unaff_x22 + 0xc0);
    uVar1 = *(undefined8 *)(unaff_x22 + 200);
    uVar5 = *(undefined8 *)(unaff_x22 + 0xb0);
    uVar2 = *(undefined8 *)(unaff_x22 + 0xb8);
    uVar4 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar9 = *puVar10;
    UVar6 = Swift::UnsafeContinuation::typeMetadataAccessor();
    lVar7 = 0;
    _swift_getTupleTypeMetadata2(0,UVar6.unknown,uVar4,"downstreamContinuation element ",0);
    (**(code **)(lVar3 + 0x20))(uVar1,(long)puVar10 + (long)*(int *)(lVar7 + 0x30),uVar4);
    (**(code **)(lVar3 + 0x10))(uVar2,uVar1,uVar4);
    (**(code **)(lVar3 + 0x38))(uVar2,0,1,uVar4);
    _swift_storeEnumTagMultiPayload(uVar2,uVar5,0);
    FUN_10072e9c0(uVar2,uVar9,uVar5);
    (**(code **)(lVar3 + 8))(uVar1,uVar4);
  }
  lVar3 = *(long *)(unaff_x22 + 0x110);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x108);
  (**(code **)(*(long *)(unaff_x22 + 0xf0) + 8))
            (*(undefined8 *)(unaff_x22 + 0x100),*(undefined8 *)(unaff_x22 + 0xe8));
  (**(code **)(lVar3 + 8))(uVar5,uVar1);
  plVar8 = (long *)0x70;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x150) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_1007865ec;
  FUN_100790978(plVar8,*(undefined8 *)(unaff_x22 + 0x118),0,0,FUN_1007870c0,
                *(undefined8 *)(unaff_x22 + 0x88),*(undefined8 *)(unaff_x22 + 0x108));
  return;
}



/* Address: 0x1007865ec | FUN_1007865ec */

void FUN_1007865ec(void)

{
  long *plVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x150));
  if (unaff_x20 != 0) {
    *(long *)(lVar2 + 0x158) = unaff_x20;
    _swift_task_switch(FUN_1007866a0,0,0);
    return;
  }
  plVar1 = (long *)(ulong)*(uint *)(PTR__sleep_100eaefe8 + 4);
  _swift_task_alloc();
  *(long **)(lVar2 + 0x140) = plVar1;
  *plVar1 = lVar3;
  plVar1[1] = (long)FUN_10078636c;
  Swift::Clock::_sleep();
  return;
}



/* Address: 0x1007866a0 | FUN_1007866a0 */

void FUN_1007866a0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  CancellationError CVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  
  *(undefined8 *)(unaff_x22 + 0x80) = *(undefined8 *)(unaff_x22 + 0x158);
  CVar4 = Swift::CancellationError::typeMetadataAccessor();
  lVar10 = *(long *)(CVar4.unknown + -8);
  uVar5 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  uVar6 = uVar5;
  _swift_dynamicCast();
  if ((int)uVar6 != 0) {
    uVar7 = *(undefined8 *)(unaff_x22 + 0x118);
    uVar1 = *(undefined8 *)(unaff_x22 + 0xf8);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x100);
    uVar8 = *(undefined8 *)(unaff_x22 + 200);
    uVar9 = *(undefined8 *)(unaff_x22 + 0xb8);
    (**(code **)(lVar10 + 8))(uVar5,CVar4.unknown);
    _swift_task_dealloc(uVar5);
    _swift_task_dealloc(uVar7);
    _swift_task_dealloc(uVar2);
    _swift_task_dealloc(uVar1);
    _swift_task_dealloc(uVar8);
    _swift_task_dealloc(uVar9);
                    /* WARNING: Could not recover jumptable at 0x000100786784. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  _swift_task_dealloc(uVar5);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100786794);
  (*pcVar3)();
}



/* Address: 0x100786794 | FUN_100786794 */

void FUN_100786794(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  CancellationError CVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  
  (**(code **)(*(long *)(unaff_x22 + 0x110) + 8))
            (*(undefined8 *)(unaff_x22 + 0x118),*(undefined8 *)(unaff_x22 + 0x108));
  *(undefined8 *)(unaff_x22 + 0x80) = *(undefined8 *)(unaff_x22 + 0x148);
  CVar4 = Swift::CancellationError::typeMetadataAccessor();
  lVar10 = *(long *)(CVar4.unknown + -8);
  uVar5 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  uVar6 = uVar5;
  _swift_dynamicCast();
  if ((int)uVar6 != 0) {
    uVar7 = *(undefined8 *)(unaff_x22 + 0x118);
    uVar1 = *(undefined8 *)(unaff_x22 + 0xf8);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x100);
    uVar8 = *(undefined8 *)(unaff_x22 + 200);
    uVar9 = *(undefined8 *)(unaff_x22 + 0xb8);
    (**(code **)(lVar10 + 8))(uVar5,CVar4.unknown);
    _swift_task_dealloc(uVar5);
    _swift_task_dealloc(uVar7);
    _swift_task_dealloc(uVar2);
    _swift_task_dealloc(uVar1);
    _swift_task_dealloc(uVar8);
    _swift_task_dealloc(uVar9);
                    /* WARNING: Could not recover jumptable at 0x000100786888. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  _swift_task_dealloc(uVar5);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100786898);
  (*pcVar3)();
}



/* Address: 0x100786898 | FUN_100786898 */

void FUN_100786898(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  Optional OVar4;
  long lVar5;
  undefined7 extraout_var;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  UnsafeContinuation UVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long local_f0 [5];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  lVar13 = *param_2;
  uVar18 = *(undefined8 *)(lVar13 + 0x68);
  uVar19 = *(undefined8 *)(lVar13 + 0x58);
  lVar5 = 0;
  local_f0[4] = param_1;
  _swift_getAssociatedTypeWitness
            (0,uVar18,uVar19,PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  local_f0[2] = *(long *)(lVar5 + -8);
  uVar10 = *(long *)(local_f0[2] + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_f0[0] = (long)local_f0 - uVar10;
  lVar11 = local_f0[0] - uVar10;
  uVar12 = *(undefined8 *)(lVar13 + 0x50);
  uVar14 = *(undefined8 *)(lVar13 + 0x60);
  lVar13 = 0xff;
  local_f0[1] = lVar11;
  local_f0[3] = lVar5;
  local_a0 = uVar12;
  uStack_98 = uVar19;
  local_90 = uVar14;
  uStack_88 = uVar18;
  FUN_10077e9f0(0xff,&local_a0);
  OVar4 = Swift::Optional::typeMetadataAccessor();
  lVar5 = CONCAT71(extraout_var,OVar4.value);
  lVar15 = *(long *)(lVar5 + -8);
  uVar10 = *(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar17 = (undefined8 *)(lVar11 - uVar10);
  lVar16 = (long)puVar17 - uVar10;
  lVar11 = param_2[2];
  local_70 = local_f0[4];
  uVar6 = 0;
  local_c8 = uVar12;
  uStack_c0 = uVar19;
  local_b8 = uVar14;
  uStack_b0 = uVar18;
  local_90 = uVar12;
  uStack_88 = uVar19;
  local_80 = uVar14;
  uStack_78 = uVar18;
  FUN_100778e04(0,&local_c8);
  FUN_10079f534(lVar16,FUN_1007870e4,&local_a0,lVar11,uVar6,lVar5);
  (**(code **)(lVar15 + 0x10))(puVar17,lVar16,lVar5);
  puVar7 = puVar17;
  (**(code **)(*(long *)(lVar13 + -8) + 0x30))(puVar17,1,lVar13);
  if ((int)puVar7 != 1) {
    puVar7 = puVar17;
    _swift_getEnumCaseMultiPayload(puVar17,lVar13);
    uVar6 = *puVar17;
    if ((int)puVar7 == 1) {
      local_a0 = puVar17[1];
      puVar8 = &DAT_100fdfb40;
      FUN_1000f7830(&DAT_100fdfb40,&DAT_100c74390);
      FUN_1005ec180(&local_a0,uVar6,local_f0[3],puVar8,
                    PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
    else {
      puVar8 = &DAT_100fdfb40;
      FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
      lVar3 = local_f0[3];
      puVar1 = PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
      UVar9 = Swift::UnsafeContinuation::typeMetadataAccessor();
      lVar13 = 0;
      _swift_getTupleTypeMetadata2(0,UVar9.unknown,lVar3,"clockContinuation deadline ",0);
      lVar2 = local_f0[2];
      lVar11 = local_f0[1];
      (**(code **)(local_f0[2] + 0x20))
                (local_f0[1],(long)puVar17 + (long)*(int *)(lVar13 + 0x30),lVar3);
      lVar13 = local_f0[0];
      (**(code **)(lVar2 + 0x10))(local_f0[0],lVar11,lVar3);
      FUN_1005ec10c(lVar13,uVar6,lVar3,puVar8,puVar1);
      (**(code **)(lVar2 + 8))(lVar11,lVar3);
    }
  }
  (**(code **)(lVar15 + 8))(lVar16,lVar5);
  return;
}



/* Address: 0x100786b30 | FUN_100786b30 */

void FUN_100786b30(void)

{
  Optional OVar1;
  long lVar2;
  undefined7 extraout_var;
  long lVar3;
  long lVar4;
  long *unaff_x20;
  long lVar5;
  
  lVar3 = *unaff_x20;
  _swift_release(unaff_x20[2]);
  lVar5 = *(long *)(*unaff_x20 + 0x78);
  lVar4 = *(long *)(lVar3 + 0x58);
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(lVar3 + 0x68),lVar4,
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Duration_100eaeaf0);
  (**(code **)(*(long *)(lVar2 + -8) + 8))((long)unaff_x20 + lVar5,lVar2);
  lVar2 = *(long *)(*unaff_x20 + 0x80);
  OVar1 = Swift::Optional::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,OVar1.value) + -8) + 8))
            ((long)unaff_x20 + lVar2,CONCAT71(extraout_var,OVar1.value));
  (**(code **)(*(long *)(lVar4 + -8) + 8))((long)unaff_x20 + *(long *)(*unaff_x20 + 0x88),lVar4);
  return;
}



/* Address: 0x100786be8 | FUN_100786be8 */

void FUN_100786be8(void)

{
  FUN_100786b30();
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100786c0c | FUN_100786c0c */

void FUN_100786c0c(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetClassDescriptor_100cbf620);
  return;
}



/* Address: 0x100786c18 | FUN_100786c18 */

void FUN_100786c18(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x20;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar2 = &local_50;
  uStack_48 = *(undefined8 *)(unaff_x20 + 0x18);
  local_50 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_38 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_40 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = 0;
  FUN_100778e04();
  FUN_10077b518();
  *param_1 = uVar1;
  param_1[1] = puVar2;
  param_1[2] = param_4;
  return;
}



/* Address: 0x100786c74 | FUN_100786c74 */

void FUN_100786c74(undefined8 param_1)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x40;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005c804c;
  FUN_100783480(plVar1,param_1);
  return;
}



/* Address: 0x100786cd0 | FUN_100786cd0 */

void FUN_100786cd0(void)

{
  FUN_100783dec();
  return;
}



/* Address: 0x100786cd8 | FUN_100786cd8 */

void FUN_100786cd8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x20;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar2 = &local_50;
  uStack_48 = *(undefined8 *)(unaff_x20 + 0x18);
  local_50 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_38 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_40 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = 0;
  FUN_100778e04();
  FUN_10077e4a8();
  *param_1 = uVar1;
  param_1[1] = puVar2;
  param_1[2] = param_4;
  param_1[3] = param_5;
  return;
}



/* Address: 0x100786d34 | FUN_100786d34 */

void FUN_100786d34(void)

{
  FUN_1007835bc();
  return;
}



/* Address: 0x100786d3c | FUN_100786d3c */

void FUN_100786d3c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10078399c(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100786d54 | thunk_FUN_100786e70 */

void thunk_FUN_100786e70(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  ulong uVar4;
  
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(lVar2 + -8);
  uVar4 = (ulong)*(byte *)(lVar3 + 0x50) + 0x40 &
          ((ulong)*(byte *)(lVar3 + 0x50) ^ 0xffffffffffffffff);
  lVar1 = *(long *)(lVar3 + 0x40);
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  (**(code **)(lVar3 + 8))(unaff_x20 + uVar4,lVar2);
  _swift_release(*(undefined8 *)(unaff_x20 + (lVar1 + uVar4 + 7 & 0xfffffffffffffff8)));
  _swift_deallocObject();
  return;
}



/* Address: 0x100786d58 | FUN_100786d58 */

void FUN_100786d58(undefined8 param_1)

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
  uVar4 = uVar4 + 0x40 & (uVar4 ^ 0xffffffffffffffff);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x20 + (*(long *)(lVar3 + 0x40) + uVar4 + 7 & 0xfffffffffffffff8));
  plVar2 = (long *)0x180;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1005c804c;
  FUN_100784090(plVar2,param_1,uVar5,uVar1,unaff_x20 + uVar4,uVar6);
  return;
}



/* Address: 0x100786dfc | FUN_100786dfc */

void FUN_100786dfc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x150;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_1005c804c;
  FUN_10078444c(plVar3,param_1,param_2,uVar1,uVar2);
  return;
}



/* Address: 0x100786e70 | FUN_100786e70 */

void FUN_100786e70(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  ulong uVar4;
  
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(lVar2 + -8);
  uVar4 = (ulong)*(byte *)(lVar3 + 0x50) + 0x40 &
          ((ulong)*(byte *)(lVar3 + 0x50) ^ 0xffffffffffffffff);
  lVar1 = *(long *)(lVar3 + 0x40);
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  (**(code **)(lVar3 + 8))(unaff_x20 + uVar4,lVar2);
  _swift_release(*(undefined8 *)(unaff_x20 + (lVar1 + uVar4 + 7 & 0xfffffffffffffff8)));
  _swift_deallocObject();
  return;
}



/* Address: 0x100786ee8 | FUN_100786ee8 */

void FUN_100786ee8(undefined8 param_1)

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
  uVar4 = uVar4 + 0x40 & (uVar4 ^ 0xffffffffffffffff);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x20 + (*(long *)(lVar3 + 0x40) + uVar4 + 7 & 0xfffffffffffffff8));
  plVar2 = (long *)0x2a0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)thunk_FUN_1005c804c;
  FUN_100784e50(plVar2,param_1,uVar5,uVar1,unaff_x20 + uVar4,uVar6);
  return;
}



/* Address: 0x100786f8c | FUN_100786f8c */

void FUN_100786f8c(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x100786fb8 | FUN_100786fb8 */

void FUN_100786fb8(undefined8 param_1)

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
  plVar3 = (long *)0x160;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_1005c804c;
  FUN_100786070(plVar3,param_1,uVar1,uVar2,uVar4);
  return;
}



/* Address: 0x10078702c | FUN_10078702c */

void FUN_10078702c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x18);
  local_70 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_60 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = 0;
  FUN_100778e04(0,&local_70);
  FUN_10077d318(&local_70,uVar2,uVar1);
  param_1[1] = uStack_68;
  *param_1 = local_70;
  param_1[3] = uStack_58;
  param_1[2] = uStack_60;
  param_1[4] = local_50;
  return;
}



/* Address: 0x1007870a8 | FUN_1007870a8 */

void FUN_1007870a8(ulong param_1,undefined8 param_2,ulong param_3)

{
  if (((param_1 & param_3 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) {
    return;
  }
  FUN_100781b8c();
  return;
}



/* Address: 0x1007870c0 | FUN_1007870c0 */

void FUN_1007870c0(void)

{
  FUN_100786898();
  return;
}



/* Address: 0x1007870c8 | FUN_1007870c8 */

void FUN_1007870c8(undefined8 param_1)

{
  FUN_10078716c(param_1,FUN_10077de9c);
  return;
}



/* Address: 0x1007870e4 | FUN_1007870e4 */

void FUN_1007870e4(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x18);
  local_60 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_48 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_50 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = 0;
  FUN_100778e04(0,&local_60);
  FUN_10077d85c(param_1,uVar2,uVar1);
  return;
}


