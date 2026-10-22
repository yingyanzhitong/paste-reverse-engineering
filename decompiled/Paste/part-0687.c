/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100757ff4 | FUN_100757ff4 */

void FUN_100757ff4(undefined8 param_1)

{
  FUN_100758010(param_1,FUN_100751b7c);
  return;
}



/* Address: 0x100758010 | FUN_100758010 */

void FUN_100758010(undefined8 *param_1,undefined8 param_2,code *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar1 = 0;
  FUN_100756358(0,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  (*param_3)(uVar2,uVar1);
  *param_1 = uVar2;
  return;
}



/* Address: 0x100758070 | FUN_100758070 */

void FUN_100758070(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar3 = 0;
  FUN_100756358(0,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  FUN_10075182c(uVar4,uVar1,uVar2,uVar3);
  *param_1 = uVar4;
  return;
}



/* Address: 0x1007580d8 | FUN_1007580d8 */

void FUN_1007580d8(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long local_80;
  long lStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar3 = *(long *)(param_5 + -8);
  lVar1 = (long)&local_80 - (*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = *(long *)(param_4 + -8);
  lVar2 = lVar1 - (*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar4 + 0x10))(lVar2,param_2);
  (**(code **)(lVar3 + 0x10))(lVar1,param_3,param_5);
  (**(code **)(lVar4 + 0x20))(param_1,lVar2,param_4);
  lVar2 = 0;
  local_80 = param_4;
  lStack_78 = param_5;
  local_70 = param_6;
  uStack_68 = param_7;
  FUN_100758944(0,&local_80);
  (**(code **)(lVar3 + 0x20))(param_1 + *(int *)(lVar2 + 0x34),lVar1,param_5);
  return;
}



/* Address: 0x1007581cc | FUN_1007581cc */

void FUN_1007581cc(long param_1)

{
  Optional OVar1;
  undefined7 extraout_var;
  undefined8 unaff_x20;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 local_80;
  long lStack_78;
  long local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  lVar2 = *(long *)(param_1 + 0x18);
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lVar4 = *(long *)(CONCAT71(extraout_var,OVar1.value) + -8);
  lVar3 = (long)&local_80 - (*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_80 = *(undefined8 *)(param_1 + 0x10);
  local_58 = *(undefined8 *)(param_1 + 0x28);
  uStack_60 = *(undefined8 *)(param_1 + 0x28);
  local_68 = *(undefined8 *)(param_1 + 0x20);
  lStack_78 = lVar2;
  local_70 = lVar2;
  FUN_100774028(0,&local_80);
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(lVar3,1,1,lVar2);
  FUN_100774c28();
  (**(code **)(lVar4 + 8))(lVar3,CONCAT71(extraout_var,OVar1.value));
  FUN_1007582b4(unaff_x20);
  return;
}



/* Address: 0x1007582b4 | FUN_1007582b4 */

void FUN_1007582b4(long *param_1)

{
  long lVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar1 = *param_1;
  uStack_38 = *(undefined8 *)(lVar1 + 0x58);
  local_40 = *(undefined8 *)(lVar1 + 0x50);
  uStack_28 = *(undefined8 *)(lVar1 + 0x70);
  uStack_30 = *(undefined8 *)(lVar1 + 0x68);
  lVar1 = 0;
  FUN_1007589a0(0,&local_40);
  _swift_allocObject();
  *(long **)(lVar1 + 0x10) = param_1;
  return;
}



/* Address: 0x100758304 | FUN_100758304 */

void FUN_100758304(void)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  _swift_retain(uVar1);
  FUN_10076f244();
  _swift_release(uVar1);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100758344 | FUN_100758344 */

void FUN_100758344(void)

{
  FUN_100758304();
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100758364 | FUN_100758364 */

void FUN_100758364(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  Optional OVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long *unaff_x20;
  long unaff_x22;
  long lVar9;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(long **)(unaff_x22 + 0x18) = unaff_x20;
  puVar2 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar1 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  lVar9 = *unaff_x20;
  uVar4 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(lVar9 + 0x60),*(undefined8 *)(lVar9 + 0x50),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar4;
  uVar5 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(lVar9 + 0x68),*(undefined8 *)(lVar9 + 0x58),puVar2,puVar1);
  *(undefined8 *)(unaff_x22 + 0x28) = uVar5;
  OVar3 = Swift::Optional::typeMetadataAccessor();
  *(ulong *)(unaff_x22 + 0x30) = CONCAT71(extraout_var,OVar3.value);
  lVar9 = 0xff;
  _swift_getTupleTypeMetadata3(0xff,uVar4,uVar5,CONCAT71(extraout_var,OVar3.value),0,0);
  *(long *)(unaff_x22 + 0x38) = lVar9;
  OVar3 = Swift::Optional::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x40) = CONCAT71(extraout_var_00,OVar3.value);
  lVar8 = *(long *)(CONCAT71(extraout_var_00,OVar3.value) + -8);
  *(long *)(unaff_x22 + 0x48) = lVar8;
  uVar6 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x50) = uVar6;
  lVar9 = *(long *)(lVar9 + -8);
  *(long *)(unaff_x22 + 0x58) = lVar9;
  uVar6 = *(long *)(lVar9 + 0x40) + 0xf;
  uVar7 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x60) = uVar7;
  uVar7 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x68) = uVar7;
  uVar6 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x70) = uVar6;
  _swift_task_switch(FUN_100758494,0,0);
  return;
}



/* Address: 0x100758494 | FUN_100758494 */

void FUN_100758494(void)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)&DAT_00000030;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x78) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1007584f0;
  FUN_10076f424(plVar1,*(undefined8 *)(unaff_x22 + 0x50));
  return;
}



/* Address: 0x1007584f0 | FUN_1007584f0 */

void FUN_1007584f0(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x80) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x78));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100758554;
  }
  else {
    pcVar1 = FUN_100758778;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100758554 | FUN_100758554 */

void FUN_100758554(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  code *pcVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long unaff_x22;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar9 = *(long *)(unaff_x22 + 0x58);
  lVar17 = *(long *)(unaff_x22 + 0x38);
  uVar11 = uVar1;
  (**(code **)(lVar9 + 0x30))(uVar1,1,lVar17);
  if ((int)uVar11 == 1) {
    uVar11 = *(undefined8 *)(unaff_x22 + 0x20);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x28);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x10);
    (**(code **)(*(long *)(unaff_x22 + 0x48) + 8))(uVar1,*(undefined8 *)(unaff_x22 + 0x40));
    lVar9 = 0;
    _swift_getTupleTypeMetadata2(0,uVar11,uVar14,0,0);
    (**(code **)(*(long *)(lVar9 + -8) + 0x38))(uVar13,1,1,lVar9);
  }
  else {
    lVar2 = *(long *)(unaff_x22 + 0x68);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x70);
    lVar15 = *(long *)(unaff_x22 + 0x60);
    lVar3 = *(long *)(unaff_x22 + 0x28);
    lVar4 = *(long *)(unaff_x22 + 0x30);
    lVar16 = *(long *)(unaff_x22 + 0x20);
    lVar19 = *(long *)(unaff_x22 + 0x10);
    pcVar12 = *(code **)(lVar9 + 0x20);
    (*pcVar12)(uVar11,uVar1,lVar17);
    lVar10 = 0;
    _swift_getTupleTypeMetadata2(0,lVar16,lVar3,0,0);
    iVar5 = *(int *)(lVar10 + 0x30);
    (**(code **)(lVar9 + 0x10))(lVar2,uVar11,lVar17);
    iVar6 = *(int *)(lVar17 + 0x30);
    iVar7 = *(int *)(lVar17 + 0x40);
    lVar9 = *(long *)(lVar16 + -8);
    (**(code **)(lVar9 + 0x20))(lVar19,lVar2,lVar16);
    (*pcVar12)(lVar15,uVar11,lVar17);
    iVar8 = *(int *)(lVar17 + 0x40);
    lVar18 = *(long *)(lVar3 + -8);
    (**(code **)(lVar18 + 0x20))(lVar19 + iVar5,lVar15 + *(int *)(lVar17 + 0x30),lVar3);
    (**(code **)(*(long *)(lVar10 + -8) + 0x38))(lVar19,0,1,lVar10);
    pcVar12 = *(code **)(*(long *)(lVar4 + -8) + 8);
    (*pcVar12)(lVar15 + iVar8,lVar4);
    (**(code **)(lVar9 + 8))(lVar15,lVar16);
    (*pcVar12)(lVar2 + iVar7,lVar4);
    (**(code **)(lVar18 + 8))(lVar2 + iVar6,lVar3);
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x50);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x70));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar14);
                    /* WARNING: Could not recover jumptable at 0x000100758774. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100758778 | FUN_100758778 */

void FUN_100758778(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x70));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001007587d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1007587dc | FUN_1007587dc */

void FUN_1007587dc(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = unaff_x20;
  _swift_task_switch(FUN_1007587f4,0,0);
  return;
}



/* Address: 0x1007587f4 | FUN_1007587f4 */

void FUN_1007587f4(void)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x90;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x20) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100758850;
  FUN_100758364(plVar1,*(undefined8 *)(unaff_x22 + 0x10));
  return;
}



/* Address: 0x100758850 | FUN_100758850 */

void FUN_100758850(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x000100758890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Address: 0x100758894 | FUN_100758894 */

void FUN_100758894(undefined8 param_1)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)&DAT_00000030;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005c804c;
  FUN_1007587dc(plVar1,param_1);
  return;
}



/* Address: 0x1007588ec | FUN_1007588ec */

void FUN_1007588ec(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_2;
  FUN_1007581cc();
  (**(code **)(*(long *)(param_2 + -8) + 8))();
  *param_1 = lVar1;
  return;
}



/* Address: 0x100758934 | FUN_100758934 */

void FUN_100758934(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c76770,param_1);
  return;
}



/* Address: 0x100758944 | FUN_100758944 */

void FUN_100758944(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetStructDescriptor_100cbebdc);
  return;
}



/* Address: 0x100758950 | FUN_100758950 */

void FUN_100758950(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetStructDescriptor_100cbec24);
  return;
}



/* Address: 0x10075895c | FUN_10075895c */

void FUN_10075895c(long param_1)

{
  undefined *local_18;
  
  local_18 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
  _swift_initClassMetadata2(param_1,0,1,&local_18,param_1 + 0x70);
  return;
}



/* Address: 0x1007589a0 | FUN_1007589a0 */

void FUN_1007589a0(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetClassDescriptor_100cbec6c);
  return;
}



/* Address: 0x1007589ac | FUN_1007589ac */

void FUN_1007589ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,long param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 auStack_90 [2];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  local_80 = param_10;
  lVar3 = *(long *)(param_7 + -8);
  lVar4 = (long)&local_80 - (*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = *(long *)(param_6 + -8);
  lVar5 = lVar4 - (*(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = lVar5 - (*(long *)(*(long *)(param_5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_78 = param_1;
  local_70 = param_8;
  local_68 = param_9;
  (**(code **)(*(long *)(param_5 + -8) + 0x10))(lVar1,param_2,param_5);
  (**(code **)(lVar2 + 0x10))(lVar5,param_3,param_6);
  (**(code **)(lVar3 + 0x10))(lVar4,param_4,param_7);
  *(undefined8 *)(lVar1 + -0x10) = local_80;
  FUN_100758ad0(local_78,lVar1,lVar5,lVar4,param_5,param_6,param_7,local_70,local_68);
  return;
}



/* Address: 0x100758ad0 | FUN_100758ad0 */

void FUN_100758ad0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,long param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10)

{
  long lVar1;
  long local_90;
  long lStack_88;
  long local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  (**(code **)(*(long *)(param_5 + -8) + 0x20))(param_1,param_2,param_5);
  uStack_68 = param_10;
  lVar1 = 0;
  local_90 = param_5;
  lStack_88 = param_6;
  local_80 = param_7;
  uStack_78 = param_8;
  local_70 = param_9;
  FUN_10075937c(0,&local_90);
  (**(code **)(*(long *)(param_6 + -8) + 0x20))(param_1 + *(int *)(lVar1 + 0x44),param_3,param_6);
  (**(code **)(*(long *)(param_7 + -8) + 0x20))(param_1 + *(int *)(lVar1 + 0x48),param_4,param_7);
  return;
}



/* Address: 0x100758ba0 | FUN_100758ba0 */

void FUN_100758ba0(long param_1)

{
  Optional OVar1;
  undefined7 extraout_var;
  long lVar2;
  long unaff_x20;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  lVar3 = *(long *)(param_1 + 0x20);
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lVar5 = *(long *)(CONCAT71(extraout_var,OVar1.value) + -8);
  lVar4 = (long)&local_80 - (*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_58 = *(undefined8 *)(param_1 + 0x38);
  uStack_78 = *(undefined8 *)(param_1 + 0x18);
  local_80 = *(undefined8 *)(param_1 + 0x10);
  uStack_60 = *(undefined8 *)(param_1 + 0x30);
  local_68 = *(undefined8 *)(param_1 + 0x28);
  local_70 = lVar3;
  FUN_100774028(0,&local_80);
  lVar2 = *(long *)(lVar3 + -8);
  (**(code **)(lVar2 + 0x10))(lVar4,unaff_x20 + *(int *)(param_1 + 0x48),lVar3);
  (**(code **)(lVar2 + 0x38))(lVar4,0,1,lVar3);
  FUN_100774c28();
  (**(code **)(lVar5 + 8))(lVar4,CONCAT71(extraout_var,OVar1.value));
  FUN_100758c9c(unaff_x20);
  return;
}



/* Address: 0x100758c9c | FUN_100758c9c */

void FUN_100758c9c(long *param_1)

{
  long lVar1;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  lVar1 = *param_1;
  uStack_48 = *(undefined8 *)(lVar1 + 0x58);
  local_50 = *(undefined8 *)(lVar1 + 0x50);
  uStack_38 = *(undefined8 *)(lVar1 + 0x68);
  uStack_40 = *(undefined8 *)(lVar1 + 0x60);
  uStack_28 = *(undefined8 *)(lVar1 + 0x78);
  local_30 = *(undefined8 *)(lVar1 + 0x70);
  lVar1 = 0;
  FUN_1007593d8(0,&local_50);
  _swift_allocObject();
  *(long **)(lVar1 + 0x10) = param_1;
  return;
}



/* Address: 0x100758cf0 | FUN_100758cf0 */

void FUN_100758cf0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  Optional OVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long *unaff_x20;
  long unaff_x22;
  long lVar10;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(long **)(unaff_x22 + 0x18) = unaff_x20;
  puVar2 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar1 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  lVar10 = *unaff_x20;
  uVar4 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(lVar10 + 0x68),*(undefined8 *)(lVar10 + 0x50),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar4;
  uVar5 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(lVar10 + 0x70),*(undefined8 *)(lVar10 + 0x58),puVar2,puVar1);
  *(undefined8 *)(unaff_x22 + 0x28) = uVar5;
  uVar6 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(lVar10 + 0x78),*(undefined8 *)(lVar10 + 0x60),puVar2,puVar1);
  *(undefined8 *)(unaff_x22 + 0x30) = uVar6;
  OVar3 = Swift::Optional::typeMetadataAccessor();
  *(ulong *)(unaff_x22 + 0x38) = CONCAT71(extraout_var,OVar3.value);
  lVar10 = 0xff;
  _swift_getTupleTypeMetadata3(0xff,uVar4,uVar5,CONCAT71(extraout_var,OVar3.value),0,0);
  *(long *)(unaff_x22 + 0x40) = lVar10;
  OVar3 = Swift::Optional::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x48) = CONCAT71(extraout_var_00,OVar3.value);
  lVar9 = *(long *)(CONCAT71(extraout_var_00,OVar3.value) + -8);
  *(long *)(unaff_x22 + 0x50) = lVar9;
  uVar7 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x58) = uVar7;
  lVar10 = *(long *)(lVar10 + -8);
  *(long *)(unaff_x22 + 0x60) = lVar10;
  uVar7 = *(long *)(lVar10 + 0x40) + 0xf;
  uVar8 = uVar7 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x68) = uVar8;
  uVar8 = uVar7 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x70) = uVar8;
  uVar8 = uVar7 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x78) = uVar8;
  uVar7 = uVar7 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x80) = uVar7;
  _swift_task_switch(FUN_100758e50,0,0);
  return;
}



/* Address: 0x100758e50 | FUN_100758e50 */

void FUN_100758e50(void)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)&DAT_00000030;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x88) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100758eac;
  FUN_10076f424(plVar1,*(undefined8 *)(unaff_x22 + 0x58));
  return;
}



/* Address: 0x100758eac | FUN_100758eac */

void FUN_100758eac(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x90) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x88));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100758f10;
  }
  else {
    pcVar1 = FUN_1007591ec;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100758f10 | FUN_100758f10 */

void FUN_100758f10(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long unaff_x22;
  undefined8 uVar15;
  code *pcVar16;
  undefined8 uVar17;
  code *pcVar18;
  code *pcVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  lVar8 = *(long *)(unaff_x22 + 0x60);
  lVar14 = *(long *)(unaff_x22 + 0x40);
  uVar7 = uVar1;
  (**(code **)(lVar8 + 0x30))(uVar1,1,lVar14);
  if ((int)uVar7 == 1) {
    uVar7 = *(undefined8 *)(unaff_x22 + 0x28);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x30);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x20);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x10);
    (**(code **)(*(long *)(unaff_x22 + 0x50) + 8))(uVar1,*(undefined8 *)(unaff_x22 + 0x48));
    lVar8 = 0;
    _swift_getTupleTypeMetadata3(0,uVar15,uVar7,uVar12,0,0);
    (**(code **)(*(long *)(lVar8 + -8) + 0x38))(uVar17,1,1,lVar8);
  }
  else {
    uVar7 = *(undefined8 *)(unaff_x22 + 0x78);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x80);
    lVar2 = *(long *)(unaff_x22 + 0x68);
    lVar20 = *(long *)(unaff_x22 + 0x70);
    lVar13 = *(long *)(unaff_x22 + 0x28);
    lVar3 = *(long *)(unaff_x22 + 0x30);
    lVar21 = *(long *)(unaff_x22 + 0x20);
    lVar10 = *(long *)(unaff_x22 + 0x10);
    (**(code **)(lVar8 + 0x20))(uVar12,uVar1,lVar14);
    lVar9 = 0;
    _swift_getTupleTypeMetadata3(0,lVar21,lVar13,lVar3,0,0);
    iVar5 = *(int *)(lVar9 + 0x30);
    pcVar19 = *(code **)(lVar8 + 0x10);
    (*pcVar19)(uVar7,uVar12,lVar14);
    lVar11 = *(long *)(lVar21 + -8);
    (**(code **)(lVar11 + 0x20))(lVar10,uVar7,lVar21);
    (*pcVar19)(lVar20,uVar12,lVar14);
    lVar21 = *(long *)(lVar13 + -8);
    (**(code **)(lVar21 + 0x20))(lVar10 + iVar5,lVar20 + *(int *)(lVar14 + 0x30),lVar13);
    (*pcVar19)(lVar2,uVar12,lVar14);
    lVar13 = (long)*(int *)(lVar14 + 0x40);
    lVar20 = *(long *)(lVar3 + -8);
    lVar8 = lVar2 + lVar13;
    (**(code **)(lVar20 + 0x30))(lVar8,1);
    if ((int)lVar8 == 1) {
                    /* WARNING: Does not return */
      pcVar19 = (code *)SoftwareBreakpoint(1,0x1007591ec);
      (*pcVar19)();
    }
    lVar8 = *(long *)(unaff_x22 + 0x78);
    lVar3 = *(long *)(unaff_x22 + 0x68);
    lVar4 = *(long *)(unaff_x22 + 0x70);
    lVar10 = *(long *)(unaff_x22 + 0x38);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x30);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x20);
    lVar22 = *(long *)(unaff_x22 + 0x10);
    iVar5 = *(int *)(lVar9 + 0x40);
    iVar6 = *(int *)(lVar14 + 0x30);
    (**(code **)(*(long *)(unaff_x22 + 0x60) + 8))
              (*(undefined8 *)(unaff_x22 + 0x80),*(undefined8 *)(unaff_x22 + 0x40));
    (**(code **)(lVar20 + 0x20))(lVar22 + iVar5,lVar2 + lVar13,uVar7);
    (**(code **)(*(long *)(lVar9 + -8) + 0x38))(lVar22,0,1,lVar9);
    pcVar19 = *(code **)(lVar21 + 8);
    (*pcVar19)(lVar3 + iVar6,uVar1);
    pcVar16 = *(code **)(lVar11 + 8);
    (*pcVar16)(lVar3,uVar12);
    pcVar18 = *(code **)(*(long *)(lVar10 + -8) + 8);
    (*pcVar18)(lVar4 + lVar13,lVar10);
    (*pcVar16)(lVar4,uVar12);
    (*pcVar18)(lVar8 + lVar13,lVar10);
    (*pcVar19)(lVar8 + iVar6,uVar1);
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x58);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x80));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar15);
                    /* WARNING: Could not recover jumptable at 0x0001007591e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1007591ec | FUN_1007591ec */

void FUN_1007591ec(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x58);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x80));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000100759254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100759258 | FUN_100759258 */

void FUN_100759258(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = unaff_x20;
  _swift_task_switch(FUN_100759270,0,0);
  return;
}



/* Address: 0x100759270 | FUN_100759270 */

void FUN_100759270(void)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x20) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100758850;
  FUN_100758cf0(plVar1,*(undefined8 *)(unaff_x22 + 0x10));
  return;
}



/* Address: 0x1007592cc | FUN_1007592cc */

void FUN_1007592cc(undefined8 param_1)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)&DAT_00000030;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005c804c;
  FUN_100759258(plVar1,param_1);
  return;
}



/* Address: 0x100759324 | FUN_100759324 */

void FUN_100759324(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_2;
  FUN_100758ba0();
  (**(code **)(*(long *)(param_2 + -8) + 8))();
  *param_1 = lVar1;
  return;
}



/* Address: 0x10075936c | FUN_10075936c */

void FUN_10075936c(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c768c0,param_1);
  return;
}



/* Address: 0x10075937c | FUN_10075937c */

void FUN_10075937c(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetStructDescriptor_100cbecd4);
  return;
}



/* Address: 0x100759388 | FUN_100759388 */

void FUN_100759388(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetStructDescriptor_100cbed28);
  return;
}



/* Address: 0x100759394 | FUN_100759394 */

void FUN_100759394(long param_1)

{
  undefined *local_18;
  
  local_18 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
  _swift_initClassMetadata2(param_1,0,1,&local_18,param_1 + 0x80);
  return;
}



/* Address: 0x1007593d8 | FUN_1007593d8 */

void FUN_1007593d8(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetClassDescriptor_100cbed7c);
  return;
}



/* Address: 0x1007593e4 | FUN_1007593e4 */

void FUN_1007593e4(long param_1)

{
  long lVar1;
  long *plVar2;
  long local_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  plVar2 = &local_50;
  puStack_48 = *(undefined **)(param_1 + 0x18);
  local_50 = *(long *)(param_1 + 0x10);
  uStack_38 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = *(undefined8 *)(param_1 + 0x20);
  uStack_28 = *(undefined8 *)(param_1 + 0x38);
  local_30 = *(undefined8 *)(param_1 + 0x30);
  lVar1 = 0x13f;
  FUN_10075d188();
  if (plVar2 < (undefined1 *)0x40) {
    local_50 = *(long *)(lVar1 + -8) + 0x40;
    puStack_48 = PTR___value_witness_table_for_Builtin_Int64_100eabd48 + 0x40;
    _swift_initStructMetadata(param_1,0,2,&local_50,param_1 + 0x40);
  }
  return;
}



/* Address: 0x10075946c | FUN_10075946c */

long * FUN_10075946c(long *param_1,uint *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  void *pvVar16;
  long lVar17;
  undefined1 uVar18;
  ulong uVar19;
  void *pvVar20;
  uint uVar21;
  long lVar22;
  size_t sVar23;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  ulong uVar27;
  long lVar28;
  ulong uVar29;
  ulong uVar30;
  uint uVar31;
  size_t sVar32;
  size_t sVar33;
  size_t sVar34;
  ulong uVar35;
  undefined8 *puVar36;
  long lVar37;
  ulong uVar38;
  long lVar39;
  undefined8 *puVar40;
  ulong uVar41;
  long lVar42;
  ulong uVar43;
  ulong uVar44;
  long lVar45;
  void *pvVar46;
  ulong uVar47;
  code *pcVar48;
  
  puVar12 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar11 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  lVar17 = *(long *)(param_3 + 0x10);
  lVar6 = *(long *)(param_3 + 0x18);
  lVar7 = *(long *)(param_3 + 0x20);
  lVar39 = *(long *)(lVar17 + -8);
  lVar22 = *(long *)(lVar6 + -8);
  uVar8 = *(uint *)(lVar22 + 0x50);
  uVar24 = (ulong)uVar8 & 0xff;
  uVar38 = *(long *)(lVar39 + 0x40) + uVar24;
  lVar25 = *(long *)(lVar22 + 0x40);
  lVar28 = *(long *)(lVar7 + -8);
  uVar21 = *(uint *)(lVar28 + 0x50);
  uVar29 = (ulong)uVar21 & 0xff;
  sVar23 = *(size_t *)(lVar28 + 0x40);
  if (*(int *)(lVar28 + 0x54) == 0) {
    sVar23 = sVar23 + 1;
  }
  uVar27 = sVar23 + (lVar25 + uVar29 + (uVar38 & (uVar24 ^ 0xffffffffffffffff)) &
                    (uVar29 ^ 0xffffffffffffffff));
  lVar13 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),lVar17,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar42 = *(long *)(lVar13 + -8);
  uVar31 = *(uint *)(lVar42 + 0x50);
  uVar43 = (ulong)uVar31 & 0xff;
  lVar14 = 0;
  _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_3 + 0x30),lVar6,puVar12,puVar11);
  lVar45 = *(long *)(lVar14 + -8);
  uVar9 = *(uint *)(lVar45 + 0x50);
  uVar35 = (ulong)uVar9 & 0xff;
  uVar47 = uVar35 | 7;
  lVar15 = 0;
  _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_3 + 0x38),lVar7,puVar12,puVar11);
  lVar37 = *(long *)(lVar15 + -8);
  uVar19 = (ulong)*(uint *)(lVar37 + 0x50) & 0xff;
  uVar41 = uVar19 | 7;
  uVar30 = uVar35 | uVar43 | uVar19;
  sVar32 = *(size_t *)(lVar42 + 0x40);
  if (*(int *)(lVar42 + 0x54) == 0) {
    sVar32 = sVar32 + 1;
  }
  lVar1 = (uVar43 + 8 & (uVar43 ^ 0xffffffffffffffff)) + 1;
  uVar2 = uVar35 + 8;
  sVar34 = *(size_t *)(lVar45 + 0x40);
  if (*(int *)(lVar45 + 0x54) == 0) {
    sVar34 = sVar34 + 1;
  }
  lVar3 = (uVar2 & (uVar35 ^ 0xffffffffffffffff)) + 1;
  uVar4 = uVar19 + 8;
  sVar33 = *(size_t *)(lVar37 + 0x40);
  if (*(int *)(lVar37 + 0x54) == 0) {
    sVar33 = sVar33 + 1;
  }
  lVar5 = (uVar4 & (uVar19 ^ 0xffffffffffffffff)) + sVar33 +
          (lVar3 + uVar41 + sVar34 + (lVar1 + uVar47 + sVar32 & (uVar47 ^ 0xffffffffffffffff)) &
          (uVar41 ^ 0xffffffffffffffff)) + 1;
  uVar26 = lVar5 + ((ulong)((uint)uVar30 & 0xf8 ^ 0x1f8) & uVar30 + 8) + 7 & 0xfffffffffffffff8;
  uVar44 = uVar26 + 8;
  if (uVar44 <= uVar27) {
    uVar44 = uVar27;
  }
  uVar26 = uVar26 + 0x10;
  if (uVar26 <= uVar44) {
    uVar26 = uVar44;
  }
  if (uVar26 < 9) {
    uVar26 = 8;
  }
  uVar21 = uVar21 | uVar8;
  uVar30 = uVar30 | ((uVar21 | *(uint *)(lVar39 + 0x50)) & 0xf8 | 7);
  if (((uVar30 != 7) ||
      (((uVar21 | uVar31 | uVar9 | *(uint *)(lVar37 + 0x50) | *(uint *)(lVar39 + 0x50)) >> 0x14 & 1)
       != 0)) || (0x18 < (uVar26 & 0xfffffffffffffff8) + 0x10)) {
    lVar25 = *(long *)param_2;
    *param_1 = lVar25;
    _swift_retain();
    return (long *)(lVar25 + (uVar30 + 0x10 & (uVar30 ^ 0xffffffffffffffff)));
  }
  bVar10 = *(byte *)((long)param_2 + uVar26);
  uVar21 = (uint)bVar10;
  if (4 < bVar10) {
    uVar31 = (uint)uVar26;
    uVar8 = 4;
    if (uVar31 < 4) {
      uVar8 = uVar31;
    }
    if ((int)uVar8 < 2) {
      if (uVar8 == 0) goto LAB_100759778;
      uVar21 = (uint)(byte)*param_2;
    }
    else if (uVar8 == 2) {
      uVar21 = (uint)(ushort)*param_2;
    }
    else if (uVar8 == 3) {
      uVar21 = (uint)(uint3)*param_2;
    }
    else {
      uVar21 = *param_2;
    }
    if (uVar31 < 4) {
      uVar21 = uVar21 | bVar10 - 5 << (ulong)((uVar31 & 3) << 3);
    }
    uVar21 = uVar21 + 5;
  }
LAB_100759778:
  uVar27 = ~uVar43;
  uVar44 = ~uVar47;
  uVar35 = ~uVar35;
  uVar30 = ~uVar41;
  uVar19 = ~uVar19;
  if ((int)uVar21 < 2) {
    if (uVar21 == 0) {
      uVar19 = ~uVar29;
      (**(code **)(lVar39 + 0x10))(param_1,param_2,lVar17);
      uVar27 = uVar38 + (long)param_1 & ~uVar24;
      uVar38 = (ulong)(uVar38 + (long)param_2) & ~uVar24;
      (**(code **)(lVar22 + 0x10))(uVar27,uVar38,lVar6);
      lVar25 = lVar25 + uVar29;
      uVar27 = uVar27 + lVar25;
      uVar38 = uVar38 + lVar25;
      uVar24 = uVar38 & uVar19;
      (**(code **)(lVar28 + 0x30))(uVar24,1,lVar7);
      if ((int)uVar24 == 0) {
        (**(code **)(lVar28 + 0x10))(uVar27 & uVar19,uVar38 & uVar19,lVar7);
        (**(code **)(lVar28 + 0x38))(uVar27 & uVar19,0,1,lVar7);
        *(undefined1 *)((long)param_1 + uVar26) = 0;
      }
      else {
        _memcpy((void *)(uVar27 & uVar19),(void *)(uVar38 & uVar19),sVar23);
        *(undefined1 *)((long)param_1 + uVar26) = 0;
      }
      goto LAB_100759dd8;
    }
    if (uVar21 != 1) goto LAB_1007599a8;
    *param_1 = *(long *)param_2;
    puVar40 = (undefined8 *)((long)param_1 + 0xfU & 0xfffffffffffffff8);
    puVar36 = (undefined8 *)((ulong)((long)param_2 + 0xf) & 0xfffffffffffffff8);
    *puVar40 = *puVar36;
    pvVar20 = (void *)((long)puVar40 + uVar43 + 8 & uVar27);
    pvVar46 = (void *)((long)puVar36 + uVar43 + 8 & uVar27);
    pcVar48 = *(code **)(lVar42 + 0x30);
    _swift_retain();
    pvVar16 = pvVar46;
    (*pcVar48)(pvVar46,1,lVar13);
    if ((int)pvVar16 == 0) {
      (**(code **)(lVar42 + 0x10))(pvVar20,pvVar46,lVar13);
      (**(code **)(lVar42 + 0x38))(pvVar20,0,1,lVar13);
    }
    else {
      _memcpy(pvVar20,pvVar46,sVar32);
    }
    *(undefined1 *)(sVar32 + (long)pvVar20) = *(undefined1 *)(sVar32 + (long)pvVar46);
    puVar40 = (undefined8 *)((long)puVar40 + lVar1 + sVar32 + uVar47 & uVar44);
    puVar36 = (undefined8 *)((long)puVar36 + lVar1 + sVar32 + uVar47 & uVar44);
    *puVar40 = *puVar36;
    pvVar20 = (void *)(uVar2 + (long)puVar40 & uVar35);
    pvVar46 = (void *)(uVar2 + (long)puVar36 & uVar35);
    pvVar16 = pvVar46;
    (**(code **)(lVar45 + 0x30))(pvVar46,1,lVar14);
    if ((int)pvVar16 == 0) {
      (**(code **)(lVar45 + 0x10))(pvVar20,pvVar46,lVar14);
      (**(code **)(lVar45 + 0x38))(pvVar20,0,1,lVar14);
    }
    else {
      _memcpy(pvVar20,pvVar46,sVar34);
    }
    *(undefined1 *)((long)pvVar20 + sVar34) = *(undefined1 *)((long)pvVar46 + sVar34);
    puVar40 = (undefined8 *)((long)puVar40 + lVar3 + sVar34 + uVar41 & uVar30);
    puVar36 = (undefined8 *)((long)puVar36 + lVar3 + sVar34 + uVar41 & uVar30);
    *puVar40 = *puVar36;
    pvVar20 = (void *)(uVar4 + (long)puVar40 & uVar19);
    pvVar46 = (void *)(uVar4 + (long)puVar36 & uVar19);
    pvVar16 = pvVar46;
    (**(code **)(lVar37 + 0x30))(pvVar46,1,lVar15);
    if ((int)pvVar16 == 0) {
      (**(code **)(lVar37 + 0x10))(pvVar20,pvVar46,lVar15);
      (**(code **)(lVar37 + 0x38))(pvVar20,0,1,lVar15);
    }
    else {
      _memcpy(pvVar20,pvVar46,sVar33);
    }
    *(undefined1 *)((long)pvVar20 + sVar33) = *(undefined1 *)((long)pvVar46 + sVar33);
    *(undefined8 *)(((long)param_1 + 0xfU | 7) + lVar5 & 0xfffffffffffffff8) =
         *(undefined8 *)(((ulong)((long)param_2 + 0xf) | 7) + lVar5 & 0xfffffffffffffff8);
    uVar18 = 1;
LAB_100759dcc:
    *(undefined1 *)((long)param_1 + uVar26) = uVar18;
  }
  else {
    if (uVar21 == 2) {
      *param_1 = *(long *)param_2;
      puVar40 = (undefined8 *)((long)param_1 + 0xfU & 0xfffffffffffffff8);
      puVar36 = (undefined8 *)((ulong)((long)param_2 + 0xf) & 0xfffffffffffffff8);
      *puVar40 = *puVar36;
      pvVar20 = (void *)((long)puVar40 + uVar43 + 8 & uVar27);
      pvVar46 = (void *)((long)puVar36 + uVar43 + 8 & uVar27);
      pcVar48 = *(code **)(lVar42 + 0x30);
      _swift_retain();
      pvVar16 = pvVar46;
      (*pcVar48)(pvVar46,1,lVar13);
      if ((int)pvVar16 == 0) {
        (**(code **)(lVar42 + 0x10))(pvVar20,pvVar46,lVar13);
        (**(code **)(lVar42 + 0x38))(pvVar20,0,1,lVar13);
      }
      else {
        _memcpy(pvVar20,pvVar46,sVar32);
      }
      *(undefined1 *)(sVar32 + (long)pvVar20) = *(undefined1 *)(sVar32 + (long)pvVar46);
      puVar40 = (undefined8 *)((long)puVar40 + lVar1 + sVar32 + uVar47 & uVar44);
      puVar36 = (undefined8 *)((long)puVar36 + lVar1 + sVar32 + uVar47 & uVar44);
      *puVar40 = *puVar36;
      pvVar20 = (void *)(uVar2 + (long)puVar40 & uVar35);
      pvVar46 = (void *)(uVar2 + (long)puVar36 & uVar35);
      pvVar16 = pvVar46;
      (**(code **)(lVar45 + 0x30))(pvVar46,1,lVar14);
      if ((int)pvVar16 == 0) {
        (**(code **)(lVar45 + 0x10))(pvVar20,pvVar46,lVar14);
        (**(code **)(lVar45 + 0x38))(pvVar20,0,1,lVar14);
      }
      else {
        _memcpy(pvVar20,pvVar46,sVar34);
      }
      *(undefined1 *)((long)pvVar20 + sVar34) = *(undefined1 *)((long)pvVar46 + sVar34);
      puVar40 = (undefined8 *)((long)puVar40 + lVar3 + sVar34 + uVar41 & uVar30);
      puVar36 = (undefined8 *)((long)puVar36 + lVar3 + sVar34 + uVar41 & uVar30);
      *puVar40 = *puVar36;
      pvVar20 = (void *)(uVar4 + (long)puVar40 & uVar19);
      pvVar46 = (void *)(uVar4 + (long)puVar36 & uVar19);
      pvVar16 = pvVar46;
      (**(code **)(lVar37 + 0x30))(pvVar46,1,lVar15);
      if ((int)pvVar16 == 0) {
        (**(code **)(lVar37 + 0x10))(pvVar20,pvVar46,lVar15);
        (**(code **)(lVar37 + 0x38))(pvVar20,0,1,lVar15);
      }
      else {
        _memcpy(pvVar20,pvVar46,sVar33);
      }
      *(undefined1 *)((long)pvVar20 + sVar33) = *(undefined1 *)((long)pvVar46 + sVar33);
      puVar36 = (undefined8 *)(((long)param_1 + 0xfU | 7) + lVar5 & 0xfffffffffffffff8);
      puVar40 = (undefined8 *)(((ulong)((long)param_2 + 0xf) | 7) + lVar5 & 0xfffffffffffffff8);
      *puVar36 = *puVar40;
      puVar36[1] = puVar40[1];
      uVar18 = 2;
      goto LAB_100759dcc;
    }
    if (uVar21 != 3) {
      if (uVar21 == 4) {
        lVar25 = *(long *)param_2;
        _swift_errorRetain(lVar25);
        *param_1 = lVar25;
        *(undefined1 *)((long)param_1 + uVar26) = 4;
        goto LAB_100759dd8;
      }
LAB_1007599a8:
      _memcpy(param_1,param_2,uVar26 + 1);
      goto LAB_100759dd8;
    }
    *param_1 = *(long *)param_2;
    *(undefined1 *)((long)param_1 + uVar26) = 3;
  }
  _swift_retain();
LAB_100759dd8:
  *(undefined8 *)((long)param_1 + uVar26 + 8 & 0xfffffffffffffff8) =
       *(undefined8 *)((ulong)((long)param_2 + uVar26 + 8) & 0xfffffffffffffff8);
  return param_1;
}



/* Address: 0x100759e1c | FUN_100759e1c */

undefined8 * FUN_100759e1c(undefined8 *param_1,uint *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  byte bVar9;
  byte bVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  void *pvVar16;
  long lVar17;
  ulong uVar18;
  undefined1 uVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  size_t sVar24;
  ulong uVar25;
  ulong uVar26;
  long lVar27;
  ulong uVar28;
  undefined8 *puVar29;
  uint uVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  size_t sVar34;
  size_t sVar35;
  size_t sVar36;
  ulong uVar37;
  long lVar38;
  undefined8 *puVar39;
  ulong uVar40;
  undefined8 uVar41;
  void *pvVar42;
  ulong uVar43;
  long lVar44;
  long lVar45;
  ulong uVar46;
  ulong uVar47;
  ulong uVar48;
  undefined8 *puVar49;
  void *pvVar50;
  undefined8 *puVar51;
  uint uVar52;
  code *pcVar53;
  
  puVar12 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar11 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  lVar17 = *(long *)(param_3 + 0x10);
  lVar7 = *(long *)(param_3 + 0x18);
  lVar8 = *(long *)(param_3 + 0x20);
  lVar20 = *(long *)(lVar17 + -8);
  lVar22 = *(long *)(lVar7 + -8);
  uVar26 = (ulong)*(byte *)(lVar22 + 0x50);
  uVar46 = *(long *)(lVar20 + 0x40) + uVar26;
  lVar23 = *(long *)(lVar22 + 0x40);
  lVar27 = *(long *)(lVar8 + -8);
  uVar31 = (ulong)*(byte *)(lVar27 + 0x50);
  sVar24 = *(size_t *)(lVar27 + 0x40);
  if (*(int *)(lVar27 + 0x54) == 0) {
    sVar24 = sVar24 + 1;
  }
  uVar18 = sVar24 + (lVar23 + uVar31 + (uVar46 & (uVar26 ^ 0xffffffffffffffff)) &
                    (uVar31 ^ 0xffffffffffffffff));
  lVar13 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),lVar17,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar44 = *(long *)(lVar13 + -8);
  bVar9 = *(byte *)(lVar44 + 0x50);
  uVar48 = (ulong)bVar9;
  lVar14 = 0;
  _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_3 + 0x30),lVar7,puVar12,puVar11);
  lVar38 = *(long *)(lVar14 + -8);
  bVar10 = *(byte *)(lVar38 + 0x50);
  uVar40 = (ulong)bVar10;
  uVar37 = uVar40 | 7;
  lVar15 = 0;
  _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_3 + 0x38),lVar8,puVar12,puVar11);
  lVar45 = *(long *)(lVar15 + -8);
  uVar28 = (ulong)*(byte *)(lVar45 + 0x50);
  uVar47 = uVar28 | 7;
  uVar21 = (ulong)(byte)(bVar10 | bVar9 | *(byte *)(lVar45 + 0x50));
  uVar25 = uVar21 | 7;
  uVar43 = uVar48 + 8;
  sVar34 = *(size_t *)(lVar44 + 0x40);
  if (*(int *)(lVar44 + 0x54) == 0) {
    sVar34 = sVar34 + 1;
  }
  lVar1 = (uVar43 & (uVar48 ^ 0xffffffffffffffff)) + 1;
  uVar2 = uVar40 + 8;
  sVar35 = *(size_t *)(lVar38 + 0x40);
  if (*(int *)(lVar38 + 0x54) == 0) {
    sVar35 = sVar35 + 1;
  }
  lVar3 = (uVar2 & (uVar40 ^ 0xffffffffffffffff)) + 1;
  uVar4 = uVar28 + 8;
  sVar36 = *(size_t *)(lVar45 + 0x40);
  if (*(int *)(lVar45 + 0x54) == 0) {
    sVar36 = sVar36 + 1;
  }
  lVar5 = (uVar4 & (uVar28 ^ 0xffffffffffffffff)) + sVar36 +
          (lVar3 + uVar47 + sVar35 + (lVar1 + uVar37 + sVar34 & (uVar37 ^ 0xffffffffffffffff)) &
          (uVar47 ^ 0xffffffffffffffff));
  uVar32 = lVar5 + (uVar21 + 8 & (uVar25 ^ 0xffffffffffffffff)) + 8 & 0xfffffffffffffff8;
  uVar21 = uVar32 + 8;
  if (uVar21 <= uVar18) {
    uVar21 = uVar18;
  }
  uVar32 = uVar32 + 0x10;
  if (uVar32 <= uVar21) {
    uVar32 = uVar21;
  }
  if (uVar32 < 9) {
    uVar32 = 8;
  }
  bVar9 = *(byte *)((long)param_2 + uVar32);
  uVar30 = (uint)bVar9;
  if (4 < bVar9) {
    uVar52 = (uint)uVar32;
    uVar6 = 4;
    if (uVar52 < 4) {
      uVar6 = uVar52;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_10075a09c;
      uVar30 = (uint)(byte)*param_2;
    }
    else if (uVar6 == 2) {
      uVar30 = (uint)(ushort)*param_2;
    }
    else if (uVar6 == 3) {
      uVar30 = (uint)(uint3)*param_2;
    }
    else {
      uVar30 = *param_2;
    }
    if (uVar52 < 4) {
      uVar30 = uVar30 | bVar9 - 5 << (ulong)((uVar52 & 3) << 3);
    }
    uVar30 = uVar30 + 5;
  }
LAB_10075a09c:
  uVar33 = ~uVar25;
  uVar48 = ~uVar48;
  uVar21 = ~uVar37;
  uVar40 = ~uVar40;
  uVar18 = ~uVar47;
  uVar28 = ~uVar28;
  if ((int)uVar30 < 2) {
    if (uVar30 == 0) {
      uVar18 = ~uVar31;
      (**(code **)(lVar20 + 0x10))(param_1,param_2,lVar17);
      uVar43 = uVar46 + (long)param_1 & ~uVar26;
      uVar46 = (ulong)(uVar46 + (long)param_2) & ~uVar26;
      (**(code **)(lVar22 + 0x10))(uVar43,uVar46,lVar7);
      lVar23 = lVar23 + uVar31;
      uVar43 = uVar43 + lVar23;
      uVar46 = uVar46 + lVar23;
      uVar26 = uVar46 & uVar18;
      (**(code **)(lVar27 + 0x30))(uVar26,1,lVar8);
      if ((int)uVar26 == 0) {
        (**(code **)(lVar27 + 0x10))(uVar43 & uVar18,uVar46 & uVar18,lVar8);
        (**(code **)(lVar27 + 0x38))(uVar43 & uVar18,0,1,lVar8);
        *(undefined1 *)((long)param_1 + uVar32) = 0;
      }
      else {
        _memcpy((void *)(uVar43 & uVar18),(void *)(uVar46 & uVar18),sVar24);
        *(undefined1 *)((long)param_1 + uVar32) = 0;
      }
      goto LAB_10075a6e8;
    }
    if (uVar30 == 1) {
      *param_1 = *(undefined8 *)param_2;
      puVar49 = (undefined8 *)((long)param_1 + uVar25 + 8 & uVar33);
      puVar29 = (undefined8 *)((ulong)((long)param_2 + uVar25 + 8) & uVar33);
      *puVar49 = *puVar29;
      pvVar42 = (void *)(uVar43 + (long)puVar49 & uVar48);
      pvVar50 = (void *)(uVar43 + (long)puVar29 & uVar48);
      pcVar53 = *(code **)(lVar44 + 0x30);
      _swift_retain();
      pvVar16 = pvVar50;
      (*pcVar53)(pvVar50,1,lVar13);
      if ((int)pvVar16 == 0) {
        (**(code **)(lVar44 + 0x10))(pvVar42,pvVar50,lVar13);
        (**(code **)(lVar44 + 0x38))(pvVar42,0,1,lVar13);
      }
      else {
        _memcpy(pvVar42,pvVar50,sVar34);
      }
      *(undefined1 *)((long)pvVar42 + sVar34) = *(undefined1 *)((long)pvVar50 + sVar34);
      puVar51 = (undefined8 *)((long)puVar49 + lVar1 + sVar34 + uVar37 & uVar21);
      puVar39 = (undefined8 *)((long)puVar29 + lVar1 + sVar34 + uVar37 & uVar21);
      *puVar51 = *puVar39;
      pvVar42 = (void *)(uVar2 + (long)puVar51 & uVar40);
      pvVar50 = (void *)(uVar2 + (long)puVar39 & uVar40);
      pvVar16 = pvVar50;
      (**(code **)(lVar38 + 0x30))(pvVar50,1,lVar14);
      if ((int)pvVar16 == 0) {
        (**(code **)(lVar38 + 0x10))(pvVar42,pvVar50,lVar14);
        (**(code **)(lVar38 + 0x38))(pvVar42,0,1,lVar14);
      }
      else {
        _memcpy(pvVar42,pvVar50,sVar35);
      }
      *(undefined1 *)((long)pvVar42 + sVar35) = *(undefined1 *)((long)pvVar50 + sVar35);
      puVar51 = (undefined8 *)((long)puVar51 + lVar3 + sVar35 + uVar47 & uVar18);
      puVar39 = (undefined8 *)((long)puVar39 + lVar3 + sVar35 + uVar47 & uVar18);
      *puVar51 = *puVar39;
      pvVar42 = (void *)(uVar4 + (long)puVar51 & uVar28);
      pvVar50 = (void *)(uVar4 + (long)puVar39 & uVar28);
      pvVar16 = pvVar50;
      (**(code **)(lVar45 + 0x30))(pvVar50,1,lVar15);
      if ((int)pvVar16 == 0) {
        (**(code **)(lVar45 + 0x10))(pvVar42,pvVar50,lVar15);
        (**(code **)(lVar45 + 0x38))(pvVar42,0,1,lVar15);
      }
      else {
        _memcpy(pvVar42,pvVar50,sVar36);
      }
      *(undefined1 *)((long)pvVar42 + sVar36) = *(undefined1 *)((long)pvVar50 + sVar36);
      *(undefined8 *)((long)puVar49 + lVar5 + 8 & 0xfffffffffffffff8) =
           *(undefined8 *)((long)puVar29 + lVar5 + 8 & 0xfffffffffffffff8);
      uVar19 = 1;
      goto LAB_10075a6dc;
    }
  }
  else {
    if (uVar30 == 2) {
      *param_1 = *(undefined8 *)param_2;
      puVar49 = (undefined8 *)((long)param_1 + uVar25 + 8 & uVar33);
      puVar29 = (undefined8 *)((ulong)((long)param_2 + uVar25 + 8) & uVar33);
      *puVar49 = *puVar29;
      pvVar42 = (void *)(uVar43 + (long)puVar49 & uVar48);
      pvVar50 = (void *)(uVar43 + (long)puVar29 & uVar48);
      pcVar53 = *(code **)(lVar44 + 0x30);
      _swift_retain();
      pvVar16 = pvVar50;
      (*pcVar53)(pvVar50,1,lVar13);
      if ((int)pvVar16 == 0) {
        (**(code **)(lVar44 + 0x10))(pvVar42,pvVar50,lVar13);
        (**(code **)(lVar44 + 0x38))(pvVar42,0,1,lVar13);
      }
      else {
        _memcpy(pvVar42,pvVar50,sVar34);
      }
      *(undefined1 *)((long)pvVar42 + sVar34) = *(undefined1 *)((long)pvVar50 + sVar34);
      puVar51 = (undefined8 *)((long)puVar49 + lVar1 + sVar34 + uVar37 & uVar21);
      puVar39 = (undefined8 *)((long)puVar29 + lVar1 + sVar34 + uVar37 & uVar21);
      *puVar51 = *puVar39;
      pvVar42 = (void *)(uVar2 + (long)puVar51 & uVar40);
      pvVar50 = (void *)(uVar2 + (long)puVar39 & uVar40);
      pvVar16 = pvVar50;
      (**(code **)(lVar38 + 0x30))(pvVar50,1,lVar14);
      if ((int)pvVar16 == 0) {
        (**(code **)(lVar38 + 0x10))(pvVar42,pvVar50,lVar14);
        (**(code **)(lVar38 + 0x38))(pvVar42,0,1,lVar14);
      }
      else {
        _memcpy(pvVar42,pvVar50,sVar35);
      }
      *(undefined1 *)((long)pvVar42 + sVar35) = *(undefined1 *)((long)pvVar50 + sVar35);
      puVar51 = (undefined8 *)((long)puVar51 + lVar3 + sVar35 + uVar47 & uVar18);
      puVar39 = (undefined8 *)((long)puVar39 + lVar3 + sVar35 + uVar47 & uVar18);
      *puVar51 = *puVar39;
      pvVar42 = (void *)(uVar4 + (long)puVar51 & uVar28);
      pvVar50 = (void *)(uVar4 + (long)puVar39 & uVar28);
      pvVar16 = pvVar50;
      (**(code **)(lVar45 + 0x30))(pvVar50,1,lVar15);
      if ((int)pvVar16 == 0) {
        (**(code **)(lVar45 + 0x10))(pvVar42,pvVar50,lVar15);
        (**(code **)(lVar45 + 0x38))(pvVar42,0,1,lVar15);
      }
      else {
        _memcpy(pvVar42,pvVar50,sVar36);
      }
      *(undefined1 *)((long)pvVar42 + sVar36) = *(undefined1 *)((long)pvVar50 + sVar36);
      puVar49 = (undefined8 *)((long)puVar49 + lVar5 + 8 & 0xfffffffffffffff8);
      puVar29 = (undefined8 *)((long)puVar29 + lVar5 + 8 & 0xfffffffffffffff8);
      *puVar49 = *puVar29;
      puVar49[1] = puVar29[1];
      uVar19 = 2;
LAB_10075a6dc:
      *(undefined1 *)((long)param_1 + uVar32) = uVar19;
      _swift_retain();
      goto LAB_10075a6e8;
    }
    if (uVar30 == 3) {
      *param_1 = *(undefined8 *)param_2;
      *(undefined1 *)((long)param_1 + uVar32) = 3;
      _swift_retain();
      goto LAB_10075a6e8;
    }
    if (uVar30 == 4) {
      uVar41 = *(undefined8 *)param_2;
      _swift_errorRetain(uVar41);
      *param_1 = uVar41;
      *(undefined1 *)((long)param_1 + uVar32) = 4;
      goto LAB_10075a6e8;
    }
  }
  _memcpy(param_1,param_2,uVar32 + 1);
LAB_10075a6e8:
  *(undefined8 *)(uVar32 + 8 + (long)param_1 & 0xfffffffffffffff8) =
       *(undefined8 *)((ulong)(uVar32 + 8 + (long)param_2) & 0xfffffffffffffff8);
  return param_1;
}



/* Address: 0x10075a728 | FUN_10075a728 */

void FUN_10075a728(uint *param_1,uint *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  byte bVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  void *pvVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  byte bVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  uint uVar23;
  long lVar24;
  long lVar25;
  size_t sVar26;
  ulong uVar27;
  ulong uVar28;
  long lVar29;
  ulong uVar30;
  long lVar31;
  ulong uVar32;
  ulong uVar33;
  undefined8 *puVar34;
  ulong uVar35;
  long lVar36;
  ulong uVar37;
  size_t sVar38;
  size_t sVar39;
  size_t sVar40;
  long lVar41;
  ulong uVar42;
  ulong uVar43;
  long lVar44;
  undefined8 *puVar45;
  long lVar46;
  ulong uVar47;
  ulong uVar48;
  undefined8 uVar49;
  void *pvVar50;
  ulong uVar51;
  ulong uVar52;
  void *pvVar53;
  ulong uVar54;
  ulong uVar55;
  ulong uVar56;
  undefined8 *puVar57;
  code *pcVar58;
  undefined8 *puVar59;
  uint uVar60;
  ulong uVar61;
  undefined8 local_78;
  
  puVar11 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar10 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  if (param_1 == param_2) {
    uVar18 = *(undefined8 *)(param_3 + 0x28);
    uVar17 = *(undefined8 *)(param_3 + 0x30);
    local_78 = *(undefined8 *)(param_3 + 0x38);
    goto LAB_10075b34c;
  }
  lVar36 = *(long *)(param_3 + 0x10);
  lVar29 = *(long *)(param_3 + 0x18);
  lVar20 = *(long *)(lVar36 + -8);
  lVar24 = *(long *)(lVar29 + -8);
  uVar30 = (ulong)*(byte *)(lVar24 + 0x50);
  uVar35 = *(long *)(lVar20 + 0x40) + uVar30;
  lVar25 = *(long *)(lVar24 + 0x40);
  lVar22 = *(long *)(param_3 + 0x20);
  uVar18 = *(undefined8 *)(param_3 + 0x28);
  lVar31 = *(long *)(lVar22 + -8);
  uVar37 = (ulong)*(byte *)(lVar31 + 0x50);
  sVar26 = *(size_t *)(lVar31 + 0x40);
  if (*(int *)(lVar31 + 0x54) == 0) {
    sVar26 = sVar26 + 1;
  }
  uVar32 = sVar26 + (lVar25 + uVar37 + (uVar35 & (uVar30 ^ 0xffffffffffffffff)) &
                    (uVar37 ^ 0xffffffffffffffff));
  lVar12 = 0;
  _swift_getAssociatedTypeWitness();
  lVar46 = *(long *)(lVar12 + -8);
  bVar19 = *(byte *)(lVar46 + 0x50);
  uVar51 = (ulong)bVar19;
  uVar17 = *(undefined8 *)(param_3 + 0x30);
  lVar13 = 0;
  _swift_getAssociatedTypeWitness(0,uVar17,lVar29,puVar11,puVar10);
  lVar44 = *(long *)(lVar13 + -8);
  bVar9 = *(byte *)(lVar44 + 0x50);
  uVar55 = (ulong)bVar9;
  uVar43 = uVar55 | 7;
  local_78 = *(undefined8 *)(param_3 + 0x38);
  lVar14 = 0;
  _swift_getAssociatedTypeWitness
            (0,local_78,lVar22,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,puVar10);
  lVar41 = *(long *)(lVar14 + -8);
  uVar21 = (ulong)*(byte *)(lVar41 + 0x50);
  uVar42 = uVar21 | 7;
  uVar27 = (ulong)(byte)(bVar9 | bVar19 | *(byte *)(lVar41 + 0x50));
  uVar56 = uVar27 | 7;
  uVar54 = uVar51 + 8;
  sVar38 = *(size_t *)(lVar46 + 0x40);
  if (*(int *)(lVar46 + 0x54) == 0) {
    sVar38 = sVar38 + 1;
  }
  lVar1 = (uVar54 & (uVar51 ^ 0xffffffffffffffff)) + sVar38 + 1;
  uVar61 = lVar1 + uVar43;
  uVar2 = uVar55 + 8;
  sVar39 = *(size_t *)(lVar44 + 0x40);
  if (*(int *)(lVar44 + 0x54) == 0) {
    sVar39 = sVar39 + 1;
  }
  lVar3 = (uVar2 & (uVar55 ^ 0xffffffffffffffff)) + sVar39 + 1;
  lVar6 = lVar3 + uVar42;
  uVar4 = uVar21 + 8;
  sVar40 = *(size_t *)(lVar41 + 0x40);
  if (*(int *)(lVar41 + 0x54) == 0) {
    sVar40 = sVar40 + 1;
  }
  lVar7 = (uVar4 & (uVar21 ^ 0xffffffffffffffff)) + sVar40 +
          (lVar6 + (uVar61 & (uVar43 ^ 0xffffffffffffffff)) & (uVar42 ^ 0xffffffffffffffff));
  lVar5 = lVar7 + 1;
  uVar28 = lVar5 + (uVar27 + 8 & (uVar56 ^ 0xffffffffffffffff)) + 7 & 0xfffffffffffffff8;
  uVar27 = uVar28 + 8;
  if (uVar27 <= uVar32) {
    uVar27 = uVar32;
  }
  uVar28 = uVar28 + 0x10;
  if (uVar28 <= uVar27) {
    uVar28 = uVar27;
  }
  if (uVar28 < 9) {
    uVar28 = 8;
  }
  uVar60 = (uint)uVar28;
  bVar19 = *(byte *)((long)param_1 + uVar28);
  uVar23 = (uint)bVar19;
  if (4 < bVar19) {
    uVar8 = 4;
    if (uVar60 < 4) {
      uVar8 = uVar60;
    }
    if ((int)uVar8 < 2) {
      if (uVar8 == 0) goto LAB_10075a9f8;
      uVar23 = (uint)(byte)*param_1;
    }
    else if (uVar8 == 2) {
      uVar23 = (uint)(ushort)*param_1;
    }
    else if (uVar8 == 3) {
      uVar23 = (uint)(uint3)*param_1;
    }
    else {
      uVar23 = *param_1;
    }
    if (uVar60 < 4) {
      uVar23 = uVar23 | bVar19 - 5 << (ulong)(uVar60 << 3 & 0x1f);
    }
    uVar23 = uVar23 + 5;
  }
LAB_10075a9f8:
  uVar30 = ~uVar30;
  uVar32 = ~uVar37;
  uVar47 = ~uVar56;
  uVar51 = ~uVar51;
  uVar27 = ~uVar43;
  uVar55 = ~uVar55;
  uVar33 = ~uVar42;
  uVar21 = ~uVar21;
  if ((int)uVar23 < 2) {
    if (uVar23 == 0) {
      (**(code **)(lVar20 + 8))(param_1,lVar36);
      uVar61 = (ulong)(uVar35 + (long)param_1) & uVar30;
      (**(code **)(lVar24 + 8))(uVar61,lVar29);
      uVar61 = uVar61 + lVar25 + uVar37;
      uVar15 = uVar61 & uVar32;
      (**(code **)(lVar31 + 0x30))(uVar15,1,lVar22);
      if ((int)uVar15 == 0) {
        (**(code **)(lVar31 + 8))(uVar61 & uVar32,lVar22);
      }
    }
    else if (uVar23 == 1) {
      _swift_release(*(undefined8 *)param_1);
      uVar48 = (ulong)((long)param_1 + uVar56 + 8) & uVar47;
      uVar15 = uVar54 + uVar48 & uVar51;
      (**(code **)(lVar46 + 0x30))(uVar15,1,lVar12);
      if ((int)uVar15 == 0) {
        (**(code **)(lVar46 + 8))(uVar54 + uVar48 & uVar51,lVar12);
      }
      uVar52 = uVar61 + uVar48 & uVar27;
      uVar61 = uVar2 + uVar52;
      uVar15 = uVar61 & uVar55;
      (**(code **)(lVar44 + 0x30))(uVar15,1,lVar13);
      if ((int)uVar15 == 0) {
        (**(code **)(lVar44 + 8))(uVar61 & uVar55,lVar13);
      }
      uVar61 = uVar4 + (lVar6 + uVar52 & uVar33);
      uVar15 = uVar61 & uVar21;
      (**(code **)(lVar41 + 0x30))(uVar15,1,lVar14);
      if ((int)uVar15 == 0) {
        (**(code **)(lVar41 + 8))(uVar61 & uVar21,lVar14);
      }
      uVar61 = lVar5 + uVar48 + 7;
      goto LAB_10075ac40;
    }
  }
  else {
    if (uVar23 == 2) {
      _swift_release(*(undefined8 *)param_1);
      uVar48 = (ulong)((long)param_1 + uVar56 + 8) & uVar47;
      uVar15 = uVar54 + uVar48 & uVar51;
      (**(code **)(lVar46 + 0x30))(uVar15,1,lVar12);
      if ((int)uVar15 == 0) {
        (**(code **)(lVar46 + 8))(uVar54 + uVar48 & uVar51,lVar12);
      }
      uVar52 = uVar61 + uVar48 & uVar27;
      uVar61 = uVar2 + uVar52;
      uVar15 = uVar61 & uVar55;
      (**(code **)(lVar44 + 0x30))(uVar15,1,lVar13);
      if ((int)uVar15 == 0) {
        (**(code **)(lVar44 + 8))(uVar61 & uVar55,lVar13);
      }
      uVar61 = uVar4 + (lVar6 + uVar52 & uVar33);
      uVar15 = uVar61 & uVar21;
      (**(code **)(lVar41 + 0x30))(uVar15,1,lVar14);
      if ((int)uVar15 == 0) {
        (**(code **)(lVar41 + 8))(uVar61 & uVar21,lVar14);
      }
      uVar61 = (lVar5 + uVar48 + 7 & 0xfffffffffffffff8) + 0xf;
LAB_10075ac40:
      uVar49 = *(undefined8 *)(uVar61 & 0xfffffffffffffff8);
    }
    else {
      if (uVar23 != 3) {
        if (uVar23 == 4) {
          _swift_errorRelease(*(undefined8 *)param_1);
        }
        goto LAB_10075ac54;
      }
      uVar49 = *(undefined8 *)param_1;
    }
    _swift_release(uVar49);
  }
LAB_10075ac54:
  bVar19 = *(byte *)((long)param_2 + uVar28);
  uVar23 = (uint)bVar19;
  if (4 < bVar19) {
    uVar8 = 4;
    if (uVar60 < 4) {
      uVar8 = uVar60;
    }
    if ((int)uVar8 < 2) {
      if (uVar8 == 0) goto LAB_10075ad6c;
      uVar23 = (uint)(byte)*param_2;
    }
    else if (uVar8 == 2) {
      uVar23 = (uint)(ushort)*param_2;
    }
    else if (uVar8 == 3) {
      uVar23 = (uint)(uint3)*param_2;
    }
    else {
      uVar23 = *param_2;
    }
    if (uVar60 < 4) {
      uVar23 = (uVar23 | bVar19 - 5 << (ulong)(uVar60 << 3 & 0x1f)) + 5;
    }
    else {
      uVar23 = uVar23 + 5;
    }
  }
LAB_10075ad6c:
  if ((int)uVar23 < 2) {
    if (uVar23 == 0) {
      (**(code **)(lVar20 + 0x10))(param_1,param_2,lVar36);
      uVar54 = (ulong)(uVar35 + (long)param_1) & uVar30;
      uVar30 = (ulong)(uVar35 + (long)param_2) & uVar30;
      (**(code **)(lVar24 + 0x10))(uVar54,uVar30,lVar29);
      uVar54 = uVar54 + lVar25 + uVar37;
      uVar30 = uVar30 + lVar25 + uVar37;
      uVar35 = uVar30 & uVar32;
      (**(code **)(lVar31 + 0x30))(uVar35,1,lVar22);
      if ((int)uVar35 == 0) {
        (**(code **)(lVar31 + 0x10))(uVar54 & uVar32,uVar30 & uVar32,lVar22);
        (**(code **)(lVar31 + 0x38))(uVar54 & uVar32,0,1,lVar22);
      }
      else {
        _memcpy((void *)(uVar54 & uVar32),(void *)(uVar30 & uVar32),sVar26);
      }
      *(byte *)((long)param_1 + uVar28) = 0;
      goto LAB_10075b34c;
    }
    if (uVar23 == 1) {
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      puVar57 = (undefined8 *)((ulong)((long)param_1 + uVar56 + 8) & uVar47);
      puVar34 = (undefined8 *)((ulong)((long)param_2 + uVar56 + 8) & uVar47);
      *puVar57 = *puVar34;
      pvVar50 = (void *)(uVar54 + (long)puVar57 & uVar51);
      pvVar53 = (void *)(uVar54 + (long)puVar34 & uVar51);
      pcVar58 = *(code **)(lVar46 + 0x30);
      _swift_retain();
      pvVar16 = pvVar53;
      (*pcVar58)(pvVar53,1,lVar12);
      if ((int)pvVar16 == 0) {
        (**(code **)(lVar46 + 0x10))(pvVar50,pvVar53,lVar12);
        (**(code **)(lVar46 + 0x38))(pvVar50,0,1,lVar12);
      }
      else {
        _memcpy(pvVar50,pvVar53,sVar38);
      }
      *(undefined1 *)((long)pvVar50 + sVar38) = *(undefined1 *)((long)pvVar53 + sVar38);
      puVar45 = (undefined8 *)((long)puVar57 + lVar1 + uVar43 & uVar27);
      puVar59 = (undefined8 *)((long)puVar34 + lVar1 + uVar43 & uVar27);
      *puVar45 = *puVar59;
      pvVar50 = (void *)(uVar2 + (long)puVar45 & uVar55);
      pvVar53 = (void *)(uVar2 + (long)puVar59 & uVar55);
      pvVar16 = pvVar53;
      (**(code **)(lVar44 + 0x30))(pvVar53,1,lVar13);
      if ((int)pvVar16 == 0) {
        (**(code **)(lVar44 + 0x10))(pvVar50,pvVar53,lVar13);
        (**(code **)(lVar44 + 0x38))(pvVar50,0,1,lVar13);
      }
      else {
        _memcpy(pvVar50,pvVar53,sVar39);
      }
      *(undefined1 *)((long)pvVar50 + sVar39) = *(undefined1 *)((long)pvVar53 + sVar39);
      puVar45 = (undefined8 *)((long)puVar45 + lVar3 + uVar42 & uVar33);
      puVar59 = (undefined8 *)((long)puVar59 + lVar3 + uVar42 & uVar33);
      *puVar45 = *puVar59;
      pvVar50 = (void *)(uVar4 + (long)puVar45 & uVar21);
      pvVar53 = (void *)(uVar4 + (long)puVar59 & uVar21);
      pvVar16 = pvVar53;
      (**(code **)(lVar41 + 0x30))(pvVar53,1,lVar14);
      if ((int)pvVar16 == 0) {
        (**(code **)(lVar41 + 0x10))(pvVar50,pvVar53,lVar14);
        (**(code **)(lVar41 + 0x38))(pvVar50,0,1,lVar14);
      }
      else {
        _memcpy(pvVar50,pvVar53,sVar40);
      }
      *(undefined1 *)((long)pvVar50 + sVar40) = *(undefined1 *)((long)pvVar53 + sVar40);
      *(undefined8 *)((long)puVar57 + lVar7 + 8 & 0xfffffffffffffff8) =
           *(undefined8 *)((long)puVar34 + lVar7 + 8 & 0xfffffffffffffff8);
      bVar19 = 1;
      goto LAB_10075b340;
    }
  }
  else {
    if (uVar23 == 2) {
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      puVar57 = (undefined8 *)((ulong)((long)param_1 + uVar56 + 8) & uVar47);
      puVar34 = (undefined8 *)((ulong)((long)param_2 + uVar56 + 8) & uVar47);
      *puVar57 = *puVar34;
      pvVar50 = (void *)(uVar54 + (long)puVar57 & uVar51);
      pvVar53 = (void *)(uVar54 + (long)puVar34 & uVar51);
      pcVar58 = *(code **)(lVar46 + 0x30);
      _swift_retain();
      pvVar16 = pvVar53;
      (*pcVar58)(pvVar53,1,lVar12);
      if ((int)pvVar16 == 0) {
        (**(code **)(lVar46 + 0x10))(pvVar50,pvVar53,lVar12);
        (**(code **)(lVar46 + 0x38))(pvVar50,0,1,lVar12);
      }
      else {
        _memcpy(pvVar50,pvVar53,sVar38);
      }
      *(undefined1 *)((long)pvVar50 + sVar38) = *(undefined1 *)((long)pvVar53 + sVar38);
      puVar45 = (undefined8 *)((long)puVar57 + lVar1 + uVar43 & uVar27);
      puVar59 = (undefined8 *)((long)puVar34 + lVar1 + uVar43 & uVar27);
      *puVar45 = *puVar59;
      pvVar50 = (void *)(uVar2 + (long)puVar45 & uVar55);
      pvVar53 = (void *)(uVar2 + (long)puVar59 & uVar55);
      pvVar16 = pvVar53;
      (**(code **)(lVar44 + 0x30))(pvVar53,1,lVar13);
      if ((int)pvVar16 == 0) {
        (**(code **)(lVar44 + 0x10))(pvVar50,pvVar53,lVar13);
        (**(code **)(lVar44 + 0x38))(pvVar50,0,1,lVar13);
      }
      else {
        _memcpy(pvVar50,pvVar53,sVar39);
      }
      *(undefined1 *)((long)pvVar50 + sVar39) = *(undefined1 *)((long)pvVar53 + sVar39);
      puVar45 = (undefined8 *)((long)puVar45 + lVar3 + uVar42 & uVar33);
      puVar59 = (undefined8 *)((long)puVar59 + lVar3 + uVar42 & uVar33);
      *puVar45 = *puVar59;
      pvVar50 = (void *)(uVar4 + (long)puVar45 & uVar21);
      pvVar53 = (void *)(uVar4 + (long)puVar59 & uVar21);
      pvVar16 = pvVar53;
      (**(code **)(lVar41 + 0x30))(pvVar53,1,lVar14);
      if ((int)pvVar16 == 0) {
        (**(code **)(lVar41 + 0x10))(pvVar50,pvVar53,lVar14);
        (**(code **)(lVar41 + 0x38))(pvVar50,0,1,lVar14);
      }
      else {
        _memcpy(pvVar50,pvVar53,sVar40);
      }
      *(undefined1 *)((long)pvVar50 + sVar40) = *(undefined1 *)((long)pvVar53 + sVar40);
      puVar57 = (undefined8 *)((long)puVar57 + lVar7 + 8 & 0xfffffffffffffff8);
      puVar34 = (undefined8 *)((long)puVar34 + lVar7 + 8 & 0xfffffffffffffff8);
      *puVar57 = *puVar34;
      puVar57[1] = puVar34[1];
      bVar19 = 2;
LAB_10075b340:
      *(byte *)((long)param_1 + uVar28) = bVar19;
      _swift_retain();
      goto LAB_10075b34c;
    }
    if (uVar23 == 3) {
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      *(byte *)((long)param_1 + uVar28) = 3;
      _swift_retain();
      goto LAB_10075b34c;
    }
    if (uVar23 == 4) {
      uVar49 = *(undefined8 *)param_2;
      _swift_errorRetain(uVar49);
      *(undefined8 *)param_1 = uVar49;
      *(byte *)((long)param_1 + uVar28) = 4;
      goto LAB_10075b34c;
    }
  }
  _memcpy(param_1,param_2,uVar28 + 1);
LAB_10075b34c:
  puVar11 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar10 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  lVar22 = *(long *)(param_3 + 0x18);
  lVar29 = *(long *)(lVar22 + -8);
  uVar35 = (ulong)*(byte *)(lVar29 + 0x50);
  lVar24 = *(long *)(param_3 + 0x20);
  lVar20 = *(long *)(lVar24 + -8);
  lVar36 = *(long *)(lVar20 + 0x40);
  if (*(int *)(lVar20 + 0x54) == 0) {
    lVar36 = lVar36 + 1;
  }
  uVar35 = lVar36 + ((*(long *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x40) + uVar35 &
                     (uVar35 ^ 0xffffffffffffffff)) +
                     *(long *)(lVar29 + 0x40) + (ulong)*(byte *)(lVar20 + 0x50) &
                    ((ulong)*(byte *)(lVar20 + 0x50) ^ 0xffffffffffffffff));
  lVar36 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar18,*(long *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar20 = *(long *)(lVar36 + -8);
  bVar19 = *(byte *)(lVar20 + 0x50);
  lVar36 = 0;
  _swift_getAssociatedTypeWitness(0,uVar17,lVar22,puVar11,puVar10);
  lVar29 = *(long *)(lVar36 + -8);
  bVar9 = *(byte *)(lVar29 + 0x50);
  uVar37 = (ulong)bVar9;
  lVar36 = 0;
  _swift_getAssociatedTypeWitness(0,local_78,lVar24,puVar11,puVar10);
  lVar22 = *(long *)(lVar36 + -8);
  uVar30 = (ulong)*(byte *)(lVar22 + 0x50);
  bVar9 = bVar9 | bVar19 | *(byte *)(lVar22 + 0x50);
  lVar36 = ((ulong)bVar19 + 8 & ((ulong)bVar19 ^ 0xffffffffffffffff)) +
           (uVar37 | 7) + *(long *)(lVar20 + 0x40);
  if (*(int *)(lVar20 + 0x54) == 0) {
    lVar36 = lVar36 + 1;
  }
  lVar20 = (uVar37 + 8 & (uVar37 ^ 0xffffffffffffffff)) + (uVar30 | 7) + *(long *)(lVar29 + 0x40);
  if (*(int *)(lVar29 + 0x54) == 0) {
    lVar20 = lVar20 + 1;
  }
  lVar29 = (uVar30 + 8 & (uVar30 ^ 0xffffffffffffffff)) + *(long *)(lVar22 + 0x40) +
           ((ulong)(bVar9 & 0xf8 ^ 0x1f8) & (ulong)bVar9 + 8);
  if (*(int *)(lVar22 + 0x54) == 0) {
    lVar29 = lVar29 + 1;
  }
  uVar37 = lVar29 + (lVar20 + (lVar36 + 1U & ((uVar37 | 7) ^ 0xffffffffffffffff)) + 1 &
                    ((uVar30 | 7) ^ 0xffffffffffffffff)) + 8 & 0xfffffffffffffff8;
  uVar30 = uVar37 + 8;
  if (uVar30 <= uVar35) {
    uVar30 = uVar35;
  }
  uVar37 = uVar37 + 0x10;
  if (uVar37 <= uVar30) {
    uVar37 = uVar30;
  }
  if (uVar37 < 9) {
    uVar37 = 8;
  }
  *(undefined8 *)((ulong)(uVar37 + 8 + (long)param_1) & 0xfffffffffffffff8) =
       *(undefined8 *)((ulong)(uVar37 + 8 + (long)param_2) & 0xfffffffffffffff8);
  return;
}



/* Address: 0x10075b510 | FUN_10075b510 */

void FUN_10075b510(undefined8 *param_1,uint *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  byte bVar9;
  byte bVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  void *pvVar16;
  long lVar17;
  ulong uVar18;
  undefined1 uVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  size_t sVar24;
  ulong uVar25;
  ulong uVar26;
  long lVar27;
  ulong uVar28;
  undefined8 *puVar29;
  uint uVar30;
  ulong uVar31;
  ulong uVar32;
  undefined8 *puVar33;
  size_t sVar34;
  size_t sVar35;
  size_t sVar36;
  ulong uVar37;
  void *pvVar38;
  uint uVar39;
  undefined8 *puVar40;
  long lVar41;
  ulong uVar42;
  ulong uVar43;
  ulong uVar44;
  long lVar45;
  ulong uVar46;
  ulong uVar47;
  ulong uVar48;
  long lVar49;
  void *pvVar50;
  undefined8 *puVar51;
  
  puVar12 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar11 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  lVar17 = *(long *)(param_3 + 0x10);
  lVar7 = *(long *)(param_3 + 0x18);
  lVar8 = *(long *)(param_3 + 0x20);
  lVar20 = *(long *)(lVar17 + -8);
  lVar22 = *(long *)(lVar7 + -8);
  uVar26 = (ulong)*(byte *)(lVar22 + 0x50);
  uVar46 = *(long *)(lVar20 + 0x40) + uVar26;
  lVar23 = *(long *)(lVar22 + 0x40);
  lVar27 = *(long *)(lVar8 + -8);
  uVar31 = (ulong)*(byte *)(lVar27 + 0x50);
  sVar24 = *(size_t *)(lVar27 + 0x40);
  if (*(int *)(lVar27 + 0x54) == 0) {
    sVar24 = sVar24 + 1;
  }
  uVar18 = sVar24 + (lVar23 + uVar31 + (uVar46 & (uVar26 ^ 0xffffffffffffffff)) &
                    (uVar31 ^ 0xffffffffffffffff));
  lVar13 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),lVar17,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar41 = *(long *)(lVar13 + -8);
  bVar9 = *(byte *)(lVar41 + 0x50);
  uVar37 = (ulong)bVar9;
  lVar14 = 0;
  _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_3 + 0x30),lVar7,puVar12,puVar11);
  lVar49 = *(long *)(lVar14 + -8);
  bVar10 = *(byte *)(lVar49 + 0x50);
  uVar48 = (ulong)bVar10;
  uVar44 = uVar48 | 7;
  lVar15 = 0;
  _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_3 + 0x38),lVar8,puVar12,puVar11);
  lVar45 = *(long *)(lVar15 + -8);
  uVar28 = (ulong)*(byte *)(lVar45 + 0x50);
  uVar47 = uVar28 | 7;
  uVar21 = (ulong)(byte)(bVar10 | bVar9 | *(byte *)(lVar45 + 0x50));
  uVar25 = uVar21 | 7;
  uVar43 = uVar37 + 8;
  sVar34 = *(size_t *)(lVar41 + 0x40);
  if (*(int *)(lVar41 + 0x54) == 0) {
    sVar34 = sVar34 + 1;
  }
  lVar1 = (uVar43 & (uVar37 ^ 0xffffffffffffffff)) + 1;
  uVar2 = uVar48 + 8;
  sVar35 = *(size_t *)(lVar49 + 0x40);
  if (*(int *)(lVar49 + 0x54) == 0) {
    sVar35 = sVar35 + 1;
  }
  lVar3 = (uVar2 & (uVar48 ^ 0xffffffffffffffff)) + 1;
  uVar4 = uVar28 + 8;
  sVar36 = *(size_t *)(lVar45 + 0x40);
  if (*(int *)(lVar45 + 0x54) == 0) {
    sVar36 = sVar36 + 1;
  }
  lVar5 = (uVar4 & (uVar28 ^ 0xffffffffffffffff)) + sVar36 +
          (lVar3 + uVar47 + sVar35 + (lVar1 + uVar44 + sVar34 & (uVar44 ^ 0xffffffffffffffff)) &
          (uVar47 ^ 0xffffffffffffffff));
  uVar32 = lVar5 + (uVar21 + 8 & (uVar25 ^ 0xffffffffffffffff)) + 8 & 0xfffffffffffffff8;
  uVar21 = uVar32 + 8;
  if (uVar21 <= uVar18) {
    uVar21 = uVar18;
  }
  uVar32 = uVar32 + 0x10;
  if (uVar32 <= uVar21) {
    uVar32 = uVar21;
  }
  if (uVar32 < 9) {
    uVar32 = 8;
  }
  bVar9 = *(byte *)((long)param_2 + uVar32);
  uVar30 = (uint)bVar9;
  if (4 < bVar9) {
    uVar39 = (uint)uVar32;
    uVar6 = 4;
    if (uVar39 < 4) {
      uVar6 = uVar39;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_10075b790;
      uVar30 = (uint)(byte)*param_2;
    }
    else if (uVar6 == 2) {
      uVar30 = (uint)(ushort)*param_2;
    }
    else if (uVar6 == 3) {
      uVar30 = (uint)(uint3)*param_2;
    }
    else {
      uVar30 = *param_2;
    }
    if (uVar39 < 4) {
      uVar30 = uVar30 | bVar9 - 5 << (ulong)((uVar39 & 3) << 3);
    }
    uVar30 = uVar30 + 5;
  }
LAB_10075b790:
  uVar21 = ~uVar25;
  uVar37 = ~uVar37;
  uVar42 = ~uVar44;
  uVar48 = ~uVar48;
  uVar18 = ~uVar47;
  uVar28 = ~uVar28;
  if ((int)uVar30 < 2) {
    if (uVar30 == 0) {
      uVar18 = ~uVar31;
      (**(code **)(lVar20 + 0x20))(param_1,param_2,lVar17);
      uVar43 = uVar46 + (long)param_1 & ~uVar26;
      uVar46 = (ulong)(uVar46 + (long)param_2) & ~uVar26;
      (**(code **)(lVar22 + 0x20))(uVar43,uVar46,lVar7);
      lVar23 = lVar23 + uVar31;
      uVar43 = uVar43 + lVar23;
      uVar46 = uVar46 + lVar23;
      uVar26 = uVar46 & uVar18;
      (**(code **)(lVar27 + 0x30))(uVar26,1,lVar8);
      if ((int)uVar26 == 0) {
        (**(code **)(lVar27 + 0x20))(uVar43 & uVar18,uVar46 & uVar18,lVar8);
        (**(code **)(lVar27 + 0x38))(uVar43 & uVar18,0,1,lVar8);
      }
      else {
        _memcpy((void *)(uVar43 & uVar18),(void *)(uVar46 & uVar18),sVar24);
      }
      *(undefined1 *)((long)param_1 + uVar32) = 0;
      goto LAB_10075bdb4;
    }
    if (uVar30 == 1) {
      *param_1 = *(undefined8 *)param_2;
      puVar33 = (undefined8 *)((long)param_1 + uVar25 + 8 & uVar21);
      puVar29 = (undefined8 *)((ulong)((long)param_2 + uVar25 + 8) & uVar21);
      *puVar33 = *puVar29;
      pvVar38 = (void *)(uVar43 + (long)puVar33 & uVar37);
      pvVar50 = (void *)(uVar43 + (long)puVar29 & uVar37);
      pvVar16 = pvVar50;
      (**(code **)(lVar41 + 0x30))(pvVar50,1,lVar13);
      if ((int)pvVar16 == 0) {
        (**(code **)(lVar41 + 0x20))(pvVar38,pvVar50,lVar13);
        (**(code **)(lVar41 + 0x38))(pvVar38,0,1,lVar13);
      }
      else {
        _memcpy(pvVar38,pvVar50,sVar34);
      }
      *(undefined1 *)((long)pvVar38 + sVar34) = *(undefined1 *)((long)pvVar50 + sVar34);
      puVar51 = (undefined8 *)((long)puVar33 + lVar1 + sVar34 + uVar44 & uVar42);
      puVar40 = (undefined8 *)((long)puVar29 + lVar1 + sVar34 + uVar44 & uVar42);
      *puVar51 = *puVar40;
      pvVar38 = (void *)(uVar2 + (long)puVar51 & uVar48);
      pvVar50 = (void *)(uVar2 + (long)puVar40 & uVar48);
      pvVar16 = pvVar50;
      (**(code **)(lVar49 + 0x30))(pvVar50,1,lVar14);
      if ((int)pvVar16 == 0) {
        (**(code **)(lVar49 + 0x20))(pvVar38,pvVar50,lVar14);
        (**(code **)(lVar49 + 0x38))(pvVar38,0,1,lVar14);
      }
      else {
        _memcpy(pvVar38,pvVar50,sVar35);
      }
      *(undefined1 *)((long)pvVar38 + sVar35) = *(undefined1 *)((long)pvVar50 + sVar35);
      puVar51 = (undefined8 *)((long)puVar51 + lVar3 + sVar35 + uVar47 & uVar18);
      puVar40 = (undefined8 *)((long)puVar40 + lVar3 + sVar35 + uVar47 & uVar18);
      *puVar51 = *puVar40;
      pvVar38 = (void *)(uVar4 + (long)puVar51 & uVar28);
      pvVar50 = (void *)(uVar4 + (long)puVar40 & uVar28);
      pvVar16 = pvVar50;
      (**(code **)(lVar45 + 0x30))(pvVar50,1,lVar15);
      if ((int)pvVar16 == 0) {
        (**(code **)(lVar45 + 0x20))(pvVar38,pvVar50,lVar15);
        (**(code **)(lVar45 + 0x38))(pvVar38,0,1,lVar15);
      }
      else {
        _memcpy(pvVar38,pvVar50,sVar36);
      }
      *(undefined1 *)((long)pvVar38 + sVar36) = *(undefined1 *)((long)pvVar50 + sVar36);
      *(undefined8 *)((long)puVar33 + lVar5 + 8 & 0xfffffffffffffff8) =
           *(undefined8 *)((long)puVar29 + lVar5 + 8 & 0xfffffffffffffff8);
      uVar19 = 1;
      goto LAB_10075bdac;
    }
  }
  else {
    if (uVar30 == 2) {
      *param_1 = *(undefined8 *)param_2;
      puVar33 = (undefined8 *)((long)param_1 + uVar25 + 8 & uVar21);
      puVar29 = (undefined8 *)((ulong)((long)param_2 + uVar25 + 8) & uVar21);
      *puVar33 = *puVar29;
      pvVar38 = (void *)(uVar43 + (long)puVar33 & uVar37);
      pvVar50 = (void *)(uVar43 + (long)puVar29 & uVar37);
      pvVar16 = pvVar50;
      (**(code **)(lVar41 + 0x30))(pvVar50,1);
      if ((int)pvVar16 == 0) {
        (**(code **)(lVar41 + 0x20))(pvVar38,pvVar50,lVar13);
        (**(code **)(lVar41 + 0x38))(pvVar38,0,1,lVar13);
      }
      else {
        _memcpy(pvVar38,pvVar50,sVar34);
      }
      *(undefined1 *)((long)pvVar38 + sVar34) = *(undefined1 *)((long)pvVar50 + sVar34);
      puVar51 = (undefined8 *)((long)puVar33 + lVar1 + sVar34 + uVar44 & uVar42);
      puVar40 = (undefined8 *)((long)puVar29 + lVar1 + sVar34 + uVar44 & uVar42);
      *puVar51 = *puVar40;
      pvVar38 = (void *)(uVar2 + (long)puVar51 & uVar48);
      pvVar50 = (void *)(uVar2 + (long)puVar40 & uVar48);
      pvVar16 = pvVar50;
      (**(code **)(lVar49 + 0x30))(pvVar50,1,lVar14);
      if ((int)pvVar16 == 0) {
        (**(code **)(lVar49 + 0x20))(pvVar38,pvVar50,lVar14);
        (**(code **)(lVar49 + 0x38))(pvVar38,0,1,lVar14);
      }
      else {
        _memcpy(pvVar38,pvVar50,sVar35);
      }
      *(undefined1 *)((long)pvVar38 + sVar35) = *(undefined1 *)((long)pvVar50 + sVar35);
      puVar51 = (undefined8 *)((long)puVar51 + lVar3 + sVar35 + uVar47 & uVar18);
      puVar40 = (undefined8 *)((long)puVar40 + lVar3 + sVar35 + uVar47 & uVar18);
      *puVar51 = *puVar40;
      pvVar38 = (void *)(uVar4 + (long)puVar51 & uVar28);
      pvVar50 = (void *)(uVar4 + (long)puVar40 & uVar28);
      pvVar16 = pvVar50;
      (**(code **)(lVar45 + 0x30))(pvVar50,1,lVar15);
      if ((int)pvVar16 == 0) {
        (**(code **)(lVar45 + 0x20))(pvVar38,pvVar50,lVar15);
        (**(code **)(lVar45 + 0x38))(pvVar38,0,1,lVar15);
      }
      else {
        _memcpy(pvVar38,pvVar50,sVar36);
      }
      *(undefined1 *)((long)pvVar38 + sVar36) = *(undefined1 *)((long)pvVar50 + sVar36);
      puVar33 = (undefined8 *)((long)puVar33 + lVar5 + 8 & 0xfffffffffffffff8);
      puVar29 = (undefined8 *)((long)puVar29 + lVar5 + 8 & 0xfffffffffffffff8);
      *puVar33 = *puVar29;
      puVar33[1] = puVar29[1];
      uVar19 = 2;
LAB_10075bdac:
      *(undefined1 *)((long)param_1 + uVar32) = uVar19;
      goto LAB_10075bdb4;
    }
    if (uVar30 == 3) {
      *param_1 = *(undefined8 *)param_2;
      *(undefined1 *)((long)param_1 + uVar32) = 3;
      goto LAB_10075bdb4;
    }
    if (uVar30 == 4) {
      *param_1 = *(undefined8 *)param_2;
      *(undefined1 *)((long)param_1 + uVar32) = 4;
      goto LAB_10075bdb4;
    }
  }
  _memcpy(param_1,param_2,uVar32 + 1);
LAB_10075bdb4:
  *(undefined8 *)(uVar32 + 8 + (long)param_1 & 0xfffffffffffffff8) =
       *(undefined8 *)((ulong)(uVar32 + 8 + (long)param_2) & 0xfffffffffffffff8);
  return;
}



/* Address: 0x10075bdf0 | FUN_10075bdf0 */

void FUN_10075bdf0(uint *param_1,uint *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  byte bVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  void *pvVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  byte bVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  uint uVar23;
  long lVar24;
  long lVar25;
  size_t sVar26;
  ulong uVar27;
  ulong uVar28;
  long lVar29;
  ulong uVar30;
  long lVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  undefined8 *puVar35;
  ulong uVar36;
  long lVar37;
  ulong uVar38;
  undefined8 *puVar39;
  size_t sVar40;
  size_t sVar41;
  size_t sVar42;
  long lVar43;
  ulong uVar44;
  ulong uVar45;
  long lVar46;
  undefined8 *puVar47;
  long lVar48;
  ulong uVar49;
  ulong uVar50;
  ulong uVar51;
  ulong uVar52;
  ulong uVar53;
  void *pvVar54;
  ulong uVar55;
  void *pvVar56;
  undefined8 *puVar57;
  uint uVar58;
  ulong uVar59;
  undefined8 local_78;
  
  puVar11 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar10 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  if (param_1 == param_2) {
    uVar18 = *(undefined8 *)(param_3 + 0x28);
    uVar17 = *(undefined8 *)(param_3 + 0x30);
    local_78 = *(undefined8 *)(param_3 + 0x38);
    goto LAB_10075ca34;
  }
  lVar37 = *(long *)(param_3 + 0x10);
  lVar29 = *(long *)(param_3 + 0x18);
  lVar20 = *(long *)(lVar37 + -8);
  lVar24 = *(long *)(lVar29 + -8);
  uVar30 = (ulong)*(byte *)(lVar24 + 0x50);
  uVar36 = *(long *)(lVar20 + 0x40) + uVar30;
  lVar25 = *(long *)(lVar24 + 0x40);
  lVar22 = *(long *)(param_3 + 0x20);
  uVar18 = *(undefined8 *)(param_3 + 0x28);
  lVar31 = *(long *)(lVar22 + -8);
  uVar38 = (ulong)*(byte *)(lVar31 + 0x50);
  sVar26 = *(size_t *)(lVar31 + 0x40);
  if (*(int *)(lVar31 + 0x54) == 0) {
    sVar26 = sVar26 + 1;
  }
  uVar32 = sVar26 + (lVar25 + uVar38 + (uVar36 & (uVar30 ^ 0xffffffffffffffff)) &
                    (uVar38 ^ 0xffffffffffffffff));
  lVar12 = 0;
  _swift_getAssociatedTypeWitness();
  lVar48 = *(long *)(lVar12 + -8);
  bVar19 = *(byte *)(lVar48 + 0x50);
  uVar52 = (ulong)bVar19;
  uVar17 = *(undefined8 *)(param_3 + 0x30);
  lVar13 = 0;
  _swift_getAssociatedTypeWitness(0,uVar17,lVar29,puVar11,puVar10);
  lVar46 = *(long *)(lVar13 + -8);
  bVar9 = *(byte *)(lVar46 + 0x50);
  uVar49 = (ulong)bVar9;
  uVar45 = uVar49 | 7;
  local_78 = *(undefined8 *)(param_3 + 0x38);
  lVar14 = 0;
  _swift_getAssociatedTypeWitness
            (0,local_78,lVar22,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,puVar10);
  lVar43 = *(long *)(lVar14 + -8);
  uVar21 = (ulong)*(byte *)(lVar43 + 0x50);
  uVar44 = uVar21 | 7;
  uVar27 = (ulong)(byte)(bVar9 | bVar19 | *(byte *)(lVar43 + 0x50));
  uVar50 = uVar27 | 7;
  uVar51 = uVar52 + 8;
  sVar40 = *(size_t *)(lVar48 + 0x40);
  if (*(int *)(lVar48 + 0x54) == 0) {
    sVar40 = sVar40 + 1;
  }
  lVar1 = (uVar51 & (uVar52 ^ 0xffffffffffffffff)) + sVar40 + 1;
  uVar59 = lVar1 + uVar45;
  uVar2 = uVar49 + 8;
  sVar41 = *(size_t *)(lVar46 + 0x40);
  if (*(int *)(lVar46 + 0x54) == 0) {
    sVar41 = sVar41 + 1;
  }
  lVar3 = (uVar2 & (uVar49 ^ 0xffffffffffffffff)) + sVar41 + 1;
  lVar6 = lVar3 + uVar44;
  uVar4 = uVar21 + 8;
  sVar42 = *(size_t *)(lVar43 + 0x40);
  if (*(int *)(lVar43 + 0x54) == 0) {
    sVar42 = sVar42 + 1;
  }
  lVar7 = (uVar4 & (uVar21 ^ 0xffffffffffffffff)) + sVar42 +
          (lVar6 + (uVar59 & (uVar45 ^ 0xffffffffffffffff)) & (uVar44 ^ 0xffffffffffffffff));
  lVar5 = lVar7 + 1;
  uVar28 = lVar5 + (uVar27 + 8 & (uVar50 ^ 0xffffffffffffffff)) + 7 & 0xfffffffffffffff8;
  uVar27 = uVar28 + 8;
  if (uVar27 <= uVar32) {
    uVar27 = uVar32;
  }
  uVar28 = uVar28 + 0x10;
  if (uVar28 <= uVar27) {
    uVar28 = uVar27;
  }
  if (uVar28 < 9) {
    uVar28 = 8;
  }
  uVar58 = (uint)uVar28;
  bVar19 = *(byte *)((long)param_1 + uVar28);
  uVar23 = (uint)bVar19;
  if (4 < bVar19) {
    uVar8 = 4;
    if (uVar58 < 4) {
      uVar8 = uVar58;
    }
    if ((int)uVar8 < 2) {
      if (uVar8 == 0) goto LAB_10075c0cc;
      uVar23 = (uint)(byte)*param_1;
    }
    else if (uVar8 == 2) {
      uVar23 = (uint)(ushort)*param_1;
    }
    else if (uVar8 == 3) {
      uVar23 = (uint)(uint3)*param_1;
    }
    else {
      uVar23 = *param_1;
    }
    if (uVar58 < 4) {
      uVar23 = uVar23 | bVar19 - 5 << (ulong)(uVar58 << 3 & 0x1f);
    }
    uVar23 = uVar23 + 5;
  }
LAB_10075c0cc:
  uVar30 = ~uVar30;
  uVar32 = ~uVar38;
  uVar27 = ~uVar50;
  uVar52 = ~uVar52;
  uVar33 = ~uVar45;
  uVar49 = ~uVar49;
  uVar34 = ~uVar44;
  uVar21 = ~uVar21;
  if ((int)uVar23 < 2) {
    if (uVar23 == 0) {
      (**(code **)(lVar20 + 8))(param_1,lVar37);
      uVar59 = (ulong)(uVar36 + (long)param_1) & uVar30;
      (**(code **)(lVar24 + 8))(uVar59,lVar29);
      uVar59 = uVar59 + lVar25 + uVar38;
      uVar15 = uVar59 & uVar32;
      (**(code **)(lVar31 + 0x30))(uVar15,1,lVar22);
      if ((int)uVar15 == 0) {
        (**(code **)(lVar31 + 8))(uVar59 & uVar32,lVar22);
      }
    }
    else if (uVar23 == 1) {
      _swift_release(*(undefined8 *)param_1);
      uVar53 = (ulong)((long)param_1 + uVar50 + 8) & uVar27;
      uVar15 = uVar51 + uVar53 & uVar52;
      (**(code **)(lVar48 + 0x30))(uVar15,1,lVar12);
      if ((int)uVar15 == 0) {
        (**(code **)(lVar48 + 8))(uVar51 + uVar53 & uVar52,lVar12);
      }
      uVar55 = uVar59 + uVar53 & uVar33;
      uVar59 = uVar2 + uVar55;
      uVar15 = uVar59 & uVar49;
      (**(code **)(lVar46 + 0x30))(uVar15,1,lVar13);
      if ((int)uVar15 == 0) {
        (**(code **)(lVar46 + 8))(uVar59 & uVar49,lVar13);
      }
      uVar59 = uVar4 + (lVar6 + uVar55 & uVar34);
      uVar15 = uVar59 & uVar21;
      (**(code **)(lVar43 + 0x30))(uVar15,1,lVar14);
      if ((int)uVar15 == 0) {
        (**(code **)(lVar43 + 8))(uVar59 & uVar21,lVar14);
      }
      uVar59 = lVar5 + uVar53 + 7;
      goto LAB_10075c320;
    }
  }
  else if (uVar23 == 2) {
    _swift_release(*(undefined8 *)param_1);
    uVar53 = (ulong)((long)param_1 + uVar50 + 8) & uVar27;
    uVar15 = uVar51 + uVar53 & uVar52;
    (**(code **)(lVar48 + 0x30))(uVar15,1,lVar12);
    if ((int)uVar15 == 0) {
      (**(code **)(lVar48 + 8))(uVar51 + uVar53 & uVar52,lVar12);
    }
    uVar55 = uVar59 + uVar53 & uVar33;
    uVar59 = uVar2 + uVar55;
    uVar15 = uVar59 & uVar49;
    (**(code **)(lVar46 + 0x30))(uVar15,1,lVar13);
    if ((int)uVar15 == 0) {
      (**(code **)(lVar46 + 8))(uVar59 & uVar49,lVar13);
    }
    uVar59 = uVar4 + (lVar6 + uVar55 & uVar34);
    uVar15 = uVar59 & uVar21;
    (**(code **)(lVar43 + 0x30))(uVar15,1,lVar14);
    if ((int)uVar15 == 0) {
      (**(code **)(lVar43 + 8))(uVar59 & uVar21,lVar14);
    }
    uVar59 = (lVar5 + uVar53 + 7 & 0xfffffffffffffff8) + 0xf;
LAB_10075c320:
    _swift_release(*(undefined8 *)(uVar59 & 0xfffffffffffffff8));
  }
  else if (uVar23 == 3) {
    _swift_release(*(undefined8 *)param_1);
  }
  else if (uVar23 == 4) {
    _swift_errorRelease(*(undefined8 *)param_1);
  }
  bVar19 = *(byte *)((long)param_2 + uVar28);
  uVar23 = (uint)bVar19;
  if (4 < bVar19) {
    uVar8 = 4;
    if (uVar58 < 4) {
      uVar8 = uVar58;
    }
    if ((int)uVar8 < 2) {
      if (uVar8 == 0) goto LAB_10075c454;
      uVar23 = (uint)(byte)*param_2;
    }
    else if (uVar8 == 2) {
      uVar23 = (uint)(ushort)*param_2;
    }
    else if (uVar8 == 3) {
      uVar23 = (uint)(uint3)*param_2;
    }
    else {
      uVar23 = *param_2;
    }
    if (uVar58 < 4) {
      uVar23 = (uVar23 | bVar19 - 5 << (ulong)(uVar58 << 3 & 0x1f)) + 5;
    }
    else {
      uVar23 = uVar23 + 5;
    }
  }
LAB_10075c454:
  if ((int)uVar23 < 2) {
    if (uVar23 == 0) {
      (**(code **)(lVar20 + 0x20))(param_1,param_2,lVar37);
      uVar51 = (ulong)(uVar36 + (long)param_1) & uVar30;
      uVar30 = (ulong)(uVar36 + (long)param_2) & uVar30;
      (**(code **)(lVar24 + 0x20))(uVar51,uVar30,lVar29);
      uVar51 = uVar51 + lVar25 + uVar38;
      uVar30 = uVar30 + lVar25 + uVar38;
      uVar36 = uVar30 & uVar32;
      (**(code **)(lVar31 + 0x30))(uVar36,1,lVar22);
      if ((int)uVar36 == 0) {
        (**(code **)(lVar31 + 0x20))(uVar51 & uVar32,uVar30 & uVar32,lVar22);
        (**(code **)(lVar31 + 0x38))(uVar51 & uVar32,0,1,lVar22);
      }
      else {
        _memcpy((void *)(uVar51 & uVar32),(void *)(uVar30 & uVar32),sVar26);
      }
      *(byte *)((long)param_1 + uVar28) = 0;
      goto LAB_10075ca34;
    }
    if (uVar23 == 1) {
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      puVar39 = (undefined8 *)((ulong)((long)param_1 + uVar50 + 8) & uVar27);
      puVar35 = (undefined8 *)((ulong)((long)param_2 + uVar50 + 8) & uVar27);
      *puVar39 = *puVar35;
      pvVar54 = (void *)(uVar51 + (long)puVar39 & uVar52);
      pvVar56 = (void *)(uVar51 + (long)puVar35 & uVar52);
      pvVar16 = pvVar56;
      (**(code **)(lVar48 + 0x30))(pvVar56,1,lVar12);
      if ((int)pvVar16 == 0) {
        (**(code **)(lVar48 + 0x20))(pvVar54,pvVar56,lVar12);
        (**(code **)(lVar48 + 0x38))(pvVar54,0,1,lVar12);
      }
      else {
        _memcpy(pvVar54,pvVar56,sVar40);
      }
      *(undefined1 *)((long)pvVar54 + sVar40) = *(undefined1 *)((long)pvVar56 + sVar40);
      puVar47 = (undefined8 *)((long)puVar39 + lVar1 + uVar45 & uVar33);
      puVar57 = (undefined8 *)((long)puVar35 + lVar1 + uVar45 & uVar33);
      *puVar47 = *puVar57;
      pvVar54 = (void *)(uVar2 + (long)puVar47 & uVar49);
      pvVar56 = (void *)(uVar2 + (long)puVar57 & uVar49);
      pvVar16 = pvVar56;
      (**(code **)(lVar46 + 0x30))(pvVar56,1,lVar13);
      if ((int)pvVar16 == 0) {
        (**(code **)(lVar46 + 0x20))(pvVar54,pvVar56,lVar13);
        (**(code **)(lVar46 + 0x38))(pvVar54,0,1,lVar13);
      }
      else {
        _memcpy(pvVar54,pvVar56,sVar41);
      }
      *(undefined1 *)((long)pvVar54 + sVar41) = *(undefined1 *)((long)pvVar56 + sVar41);
      puVar47 = (undefined8 *)((long)puVar47 + lVar3 + uVar44 & uVar34);
      puVar57 = (undefined8 *)((long)puVar57 + lVar3 + uVar44 & uVar34);
      *puVar47 = *puVar57;
      pvVar54 = (void *)(uVar4 + (long)puVar47 & uVar21);
      pvVar56 = (void *)(uVar4 + (long)puVar57 & uVar21);
      pvVar16 = pvVar56;
      (**(code **)(lVar43 + 0x30))(pvVar56,1,lVar14);
      if ((int)pvVar16 == 0) {
        (**(code **)(lVar43 + 0x20))(pvVar54,pvVar56,lVar14);
        (**(code **)(lVar43 + 0x38))(pvVar54,0,1,lVar14);
      }
      else {
        _memcpy(pvVar54,pvVar56,sVar42);
      }
      *(undefined1 *)((long)pvVar54 + sVar42) = *(undefined1 *)((long)pvVar56 + sVar42);
      *(undefined8 *)((long)puVar39 + lVar7 + 8 & 0xfffffffffffffff8) =
           *(undefined8 *)((long)puVar35 + lVar7 + 8 & 0xfffffffffffffff8);
      bVar19 = 1;
      goto LAB_10075ca2c;
    }
  }
  else {
    if (uVar23 == 2) {
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      puVar39 = (undefined8 *)((ulong)((long)param_1 + uVar50 + 8) & uVar27);
      puVar35 = (undefined8 *)((ulong)((long)param_2 + uVar50 + 8) & uVar27);
      *puVar39 = *puVar35;
      pvVar54 = (void *)(uVar51 + (long)puVar39 & uVar52);
      pvVar56 = (void *)(uVar51 + (long)puVar35 & uVar52);
      pvVar16 = pvVar56;
      (**(code **)(lVar48 + 0x30))(pvVar56,1,lVar12);
      if ((int)pvVar16 == 0) {
        (**(code **)(lVar48 + 0x20))(pvVar54,pvVar56,lVar12);
        (**(code **)(lVar48 + 0x38))(pvVar54,0,1,lVar12);
      }
      else {
        _memcpy(pvVar54,pvVar56,sVar40);
      }
      *(undefined1 *)((long)pvVar54 + sVar40) = *(undefined1 *)((long)pvVar56 + sVar40);
      puVar47 = (undefined8 *)((long)puVar39 + lVar1 + uVar45 & uVar33);
      puVar57 = (undefined8 *)((long)puVar35 + lVar1 + uVar45 & uVar33);
      *puVar47 = *puVar57;
      pvVar54 = (void *)(uVar2 + (long)puVar47 & uVar49);
      pvVar56 = (void *)(uVar2 + (long)puVar57 & uVar49);
      pvVar16 = pvVar56;
      (**(code **)(lVar46 + 0x30))(pvVar56,1,lVar13);
      if ((int)pvVar16 == 0) {
        (**(code **)(lVar46 + 0x20))(pvVar54,pvVar56,lVar13);
        (**(code **)(lVar46 + 0x38))(pvVar54,0,1,lVar13);
      }
      else {
        _memcpy(pvVar54,pvVar56,sVar41);
      }
      *(undefined1 *)((long)pvVar54 + sVar41) = *(undefined1 *)((long)pvVar56 + sVar41);
      puVar47 = (undefined8 *)((long)puVar47 + lVar3 + uVar44 & uVar34);
      puVar57 = (undefined8 *)((long)puVar57 + lVar3 + uVar44 & uVar34);
      *puVar47 = *puVar57;
      pvVar54 = (void *)(uVar4 + (long)puVar47 & uVar21);
      pvVar56 = (void *)(uVar4 + (long)puVar57 & uVar21);
      pvVar16 = pvVar56;
      (**(code **)(lVar43 + 0x30))(pvVar56,1,lVar14);
      if ((int)pvVar16 == 0) {
        (**(code **)(lVar43 + 0x20))(pvVar54,pvVar56,lVar14);
        (**(code **)(lVar43 + 0x38))(pvVar54,0,1,lVar14);
      }
      else {
        _memcpy(pvVar54,pvVar56,sVar42);
      }
      *(undefined1 *)((long)pvVar54 + sVar42) = *(undefined1 *)((long)pvVar56 + sVar42);
      puVar39 = (undefined8 *)((long)puVar39 + lVar7 + 8 & 0xfffffffffffffff8);
      puVar35 = (undefined8 *)((long)puVar35 + lVar7 + 8 & 0xfffffffffffffff8);
      *puVar39 = *puVar35;
      puVar39[1] = puVar35[1];
      bVar19 = 2;
LAB_10075ca2c:
      *(byte *)((long)param_1 + uVar28) = bVar19;
      goto LAB_10075ca34;
    }
    if (uVar23 == 3) {
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      *(byte *)((long)param_1 + uVar28) = 3;
      goto LAB_10075ca34;
    }
    if (uVar23 == 4) {
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      *(byte *)((long)param_1 + uVar28) = 4;
      goto LAB_10075ca34;
    }
  }
  _memcpy(param_1,param_2,uVar28 + 1);
LAB_10075ca34:
  puVar11 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar10 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  lVar22 = *(long *)(param_3 + 0x18);
  lVar29 = *(long *)(lVar22 + -8);
  uVar36 = (ulong)*(byte *)(lVar29 + 0x50);
  lVar24 = *(long *)(param_3 + 0x20);
  lVar20 = *(long *)(lVar24 + -8);
  lVar37 = *(long *)(lVar20 + 0x40);
  if (*(int *)(lVar20 + 0x54) == 0) {
    lVar37 = lVar37 + 1;
  }
  uVar36 = lVar37 + ((*(long *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x40) + uVar36 &
                     (uVar36 ^ 0xffffffffffffffff)) +
                     *(long *)(lVar29 + 0x40) + (ulong)*(byte *)(lVar20 + 0x50) &
                    ((ulong)*(byte *)(lVar20 + 0x50) ^ 0xffffffffffffffff));
  lVar37 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar18,*(long *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar20 = *(long *)(lVar37 + -8);
  bVar19 = *(byte *)(lVar20 + 0x50);
  lVar37 = 0;
  _swift_getAssociatedTypeWitness(0,uVar17,lVar22,puVar11,puVar10);
  lVar29 = *(long *)(lVar37 + -8);
  bVar9 = *(byte *)(lVar29 + 0x50);
  uVar38 = (ulong)bVar9;
  lVar37 = 0;
  _swift_getAssociatedTypeWitness(0,local_78,lVar24,puVar11,puVar10);
  lVar22 = *(long *)(lVar37 + -8);
  uVar30 = (ulong)*(byte *)(lVar22 + 0x50);
  bVar9 = bVar9 | bVar19 | *(byte *)(lVar22 + 0x50);
  lVar37 = ((ulong)bVar19 + 8 & ((ulong)bVar19 ^ 0xffffffffffffffff)) +
           (uVar38 | 7) + *(long *)(lVar20 + 0x40);
  if (*(int *)(lVar20 + 0x54) == 0) {
    lVar37 = lVar37 + 1;
  }
  lVar20 = (uVar38 + 8 & (uVar38 ^ 0xffffffffffffffff)) + (uVar30 | 7) + *(long *)(lVar29 + 0x40);
  if (*(int *)(lVar29 + 0x54) == 0) {
    lVar20 = lVar20 + 1;
  }
  lVar29 = (uVar30 + 8 & (uVar30 ^ 0xffffffffffffffff)) + *(long *)(lVar22 + 0x40) +
           ((ulong)(bVar9 & 0xf8 ^ 0x1f8) & (ulong)bVar9 + 8);
  if (*(int *)(lVar22 + 0x54) == 0) {
    lVar29 = lVar29 + 1;
  }
  uVar38 = lVar29 + (lVar20 + (lVar37 + 1U & ((uVar38 | 7) ^ 0xffffffffffffffff)) + 1 &
                    ((uVar30 | 7) ^ 0xffffffffffffffff)) + 8 & 0xfffffffffffffff8;
  uVar30 = uVar38 + 8;
  if (uVar30 <= uVar36) {
    uVar30 = uVar36;
  }
  uVar38 = uVar38 + 0x10;
  if (uVar38 <= uVar30) {
    uVar38 = uVar30;
  }
  if (uVar38 < 9) {
    uVar38 = 8;
  }
  *(undefined8 *)((ulong)(uVar38 + 8 + (long)param_1) & 0xfffffffffffffff8) =
       *(undefined8 *)((ulong)(uVar38 + 8 + (long)param_2) & 0xfffffffffffffff8);
  return;
}



/* Address: 0x10075cbf8 | FUN_10075cbf8 */

int FUN_10075cbf8(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  byte bVar5;
  byte bVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  
  puVar8 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar7 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  lVar10 = *(long *)(param_3 + 0x18);
  lVar4 = *(long *)(param_3 + 0x20);
  lVar11 = *(long *)(lVar10 + -8);
  uVar14 = (ulong)*(byte *)(lVar11 + 0x50);
  lVar15 = *(long *)(lVar4 + -8);
  lVar16 = *(long *)(lVar15 + 0x40);
  if (*(int *)(lVar15 + 0x54) == 0) {
    lVar16 = lVar16 + 1;
  }
  uVar14 = lVar16 + ((*(long *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x40) + uVar14 &
                     (uVar14 ^ 0xffffffffffffffff)) +
                     *(long *)(lVar11 + 0x40) + (ulong)*(byte *)(lVar15 + 0x50) &
                    ((ulong)*(byte *)(lVar15 + 0x50) ^ 0xffffffffffffffff));
  lVar16 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(long *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar15 = *(long *)(lVar16 + -8);
  bVar5 = *(byte *)(lVar15 + 0x50);
  lVar16 = 0;
  _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_3 + 0x30),lVar10,puVar8,puVar7);
  lVar11 = *(long *)(lVar16 + -8);
  bVar6 = *(byte *)(lVar11 + 0x50);
  uVar18 = (ulong)bVar6;
  lVar16 = 0;
  _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_3 + 0x38),lVar4,puVar8,puVar7);
  lVar10 = *(long *)(lVar16 + -8);
  uVar12 = (ulong)*(byte *)(lVar10 + 0x50);
  bVar6 = bVar6 | bVar5 | *(byte *)(lVar10 + 0x50);
  lVar16 = ((ulong)bVar5 + 8 & ((ulong)bVar5 ^ 0xffffffffffffffff)) +
           (uVar18 | 7) + *(long *)(lVar15 + 0x40);
  if (*(int *)(lVar15 + 0x54) == 0) {
    lVar16 = lVar16 + 1;
  }
  lVar4 = (uVar18 + 8 & (uVar18 ^ 0xffffffffffffffff)) + (uVar12 | 7) + *(long *)(lVar11 + 0x40);
  if (*(int *)(lVar11 + 0x54) == 0) {
    lVar4 = lVar4 + 1;
  }
  lVar11 = (uVar12 + 8 & (uVar12 ^ 0xffffffffffffffff)) + *(long *)(lVar10 + 0x40) +
           ((ulong)(bVar6 & 0xf8 ^ 0x1f8) & (ulong)bVar6 + 8);
  if (*(int *)(lVar10 + 0x54) == 0) {
    lVar11 = lVar11 + 1;
  }
  uVar18 = lVar11 + (lVar4 + (lVar16 + 1U & ((uVar18 | 7) ^ 0xffffffffffffffff)) + 1 &
                    ((uVar12 | 7) ^ 0xffffffffffffffff)) + 8 & 0xfffffffffffffff8;
  uVar12 = uVar18 + 8;
  if (uVar12 <= uVar14) {
    uVar12 = uVar14;
  }
  uVar18 = uVar18 + 0x10;
  if (uVar18 <= uVar12) {
    uVar18 = uVar12;
  }
  if (uVar18 < 9) {
    uVar18 = 8;
  }
  uVar1 = 0xfa;
  if ((uint)uVar18 < 4) {
    uVar1 = 0xfa - (1U >> (ulong)(((uint)uVar18 & 3) << 3));
  }
  if (param_2 == 0) {
    return 0;
  }
  if (uVar1 <= param_2 && param_2 - uVar1 != 0) {
    uVar14 = (uVar18 & 0xfffffffffffffff8) + 0x10;
    uVar12 = uVar14 & 0xfffffff8;
    uVar13 = (uint)uVar12;
    uVar17 = 2;
    uVar3 = uVar17;
    if (uVar12 == 0) {
      uVar3 = (param_2 - uVar1) + 1;
    }
    if (0xffff < uVar3) {
      uVar17 = 4;
    }
    if (uVar3 < 0x100) {
      uVar17 = 1;
    }
    uVar2 = 0;
    if (1 < uVar3) {
      uVar2 = uVar17;
    }
    if (uVar2 < 2) {
      if ((uVar2 != 0) &&
         (uVar17 = (uint)*(byte *)((long)param_1 + uVar14), *(byte *)((long)param_1 + uVar14) != 0))
      goto LAB_10075ce40;
    }
    else if (uVar2 == 2) {
      uVar17 = (uint)*(ushort *)((long)param_1 + uVar14);
      if (*(ushort *)((long)param_1 + uVar14) != 0) {
LAB_10075ce40:
        uVar17 = uVar17 - 1;
        if (uVar12 != 0) {
          uVar17 = 0;
          uVar13 = *param_1;
        }
        return uVar1 + (uVar13 | uVar17) + 1;
      }
    }
    else {
      uVar17 = *(uint *)((long)param_1 + uVar14);
      if (uVar17 != 0) goto LAB_10075ce40;
    }
  }
  iVar9 = 0x100 - (uint)*(byte *)((long)param_1 + uVar18);
  if (uVar1 <= (*(byte *)((long)param_1 + uVar18) ^ 0xff)) {
    iVar9 = 0;
  }
  return iVar9;
}



/* Address: 0x10075cea4 | FUN_10075cea4 */

void FUN_10075cea4(int *param_1,uint param_2,uint param_3,long param_4)

{
  size_t sVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  
  puVar9 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar8 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  lVar18 = *(long *)(param_4 + 0x18);
  lVar11 = *(long *)(lVar18 + -8);
  uVar13 = (ulong)*(byte *)(lVar11 + 0x50);
  lVar10 = *(long *)(param_4 + 0x20);
  lVar14 = *(long *)(lVar10 + -8);
  lVar15 = *(long *)(lVar14 + 0x40);
  if (*(int *)(lVar14 + 0x54) == 0) {
    lVar15 = lVar15 + 1;
  }
  uVar13 = lVar15 + ((*(long *)(*(long *)(*(long *)(param_4 + 0x10) + -8) + 0x40) + uVar13 &
                     (uVar13 ^ 0xffffffffffffffff)) +
                     *(long *)(lVar11 + 0x40) + (ulong)*(byte *)(lVar14 + 0x50) &
                    ((ulong)*(byte *)(lVar14 + 0x50) ^ 0xffffffffffffffff));
  lVar15 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 0x28),*(long *)(param_4 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar11 = *(long *)(lVar15 + -8);
  bVar5 = *(byte *)(lVar11 + 0x50);
  lVar15 = 0;
  _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_4 + 0x30),lVar18,puVar9,puVar8);
  lVar18 = *(long *)(lVar15 + -8);
  bVar6 = *(byte *)(lVar18 + 0x50);
  uVar17 = (ulong)bVar6;
  lVar15 = 0;
  _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_4 + 0x38),lVar10,puVar9,puVar8);
  lVar10 = *(long *)(lVar15 + -8);
  uVar12 = (ulong)*(byte *)(lVar10 + 0x50);
  bVar6 = bVar6 | bVar5 | *(byte *)(lVar10 + 0x50);
  lVar15 = ((ulong)bVar5 + 8 & ((ulong)bVar5 ^ 0xffffffffffffffff)) +
           (uVar17 | 7) + *(long *)(lVar11 + 0x40);
  if (*(int *)(lVar11 + 0x54) == 0) {
    lVar15 = lVar15 + 1;
  }
  lVar11 = (uVar17 + 8 & (uVar17 ^ 0xffffffffffffffff)) + (uVar12 | 7) + *(long *)(lVar18 + 0x40);
  if (*(int *)(lVar18 + 0x54) == 0) {
    lVar11 = lVar11 + 1;
  }
  lVar18 = (uVar12 + 8 & (uVar12 ^ 0xffffffffffffffff)) + *(long *)(lVar10 + 0x40) +
           ((ulong)(bVar6 & 0xf8 ^ 0x1f8) & (ulong)bVar6 + 8);
  if (*(int *)(lVar10 + 0x54) == 0) {
    lVar18 = lVar18 + 1;
  }
  uVar17 = lVar18 + (lVar11 + (lVar15 + 1U & ((uVar17 | 7) ^ 0xffffffffffffffff)) + 1 &
                    ((uVar12 | 7) ^ 0xffffffffffffffff)) + 8 & 0xfffffffffffffff8;
  uVar12 = uVar17 + 8;
  if (uVar12 <= uVar13) {
    uVar12 = uVar13;
  }
  uVar17 = uVar17 + 0x10;
  if (uVar17 <= uVar12) {
    uVar17 = uVar12;
  }
  if (uVar17 < 9) {
    uVar17 = 8;
  }
  uVar2 = 0xfa;
  if ((uint)uVar17 < 4) {
    uVar2 = 0xfa - (1U >> (ulong)(((uint)uVar17 & 3) << 3));
  }
  sVar1 = (uVar17 & 0xfffffffffffffff8) + 0x10;
  uVar16 = 2;
  uVar4 = uVar16;
  if ((int)sVar1 == 0) {
    uVar4 = (param_3 - uVar2) + 1;
  }
  if (0xffff < uVar4) {
    uVar16 = 4;
  }
  if (uVar4 < 0x100) {
    uVar16 = 1;
  }
  uVar3 = 0;
  if (1 < uVar4) {
    uVar3 = uVar16;
  }
  uVar16 = 0;
  if (uVar2 < param_3) {
    uVar16 = uVar3;
  }
  iVar7 = param_2 - uVar2;
  if (param_2 < uVar2 || iVar7 == 0) {
    if (uVar16 < 2) {
      if (uVar16 != 0) {
        *(undefined1 *)((long)param_1 + sVar1) = 0;
      }
    }
    else if (uVar16 == 2) {
      *(undefined2 *)((long)param_1 + sVar1) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar1) = 0;
    }
    if (param_2 != 0) {
      *(char *)((long)param_1 + uVar17) = -(char)param_2;
    }
  }
  else {
    if ((int)sVar1 != 0) {
      iVar7 = 1;
      _bzero(param_1,sVar1);
      *param_1 = param_2 + ~uVar2;
    }
    if (uVar16 < 2) {
      if (uVar16 != 0) {
        *(char *)((long)param_1 + sVar1) = (char)iVar7;
      }
    }
    else if (uVar16 == 2) {
      *(short *)((long)param_1 + sVar1) = (short)iVar7;
    }
    else {
      *(int *)((long)param_1 + sVar1) = iVar7;
    }
  }
  return;
}



/* Address: 0x10075d17c | FUN_10075d17c */

void FUN_10075d17c(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetStructDescriptor_100cbedf0);
  return;
}



/* Address: 0x10075d188 | FUN_10075d188 */

void FUN_10075d188(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetEnumDescriptor_100cbee7c);
  return;
}



/* Address: 0x10075d194 | FUN_10075d194 */

void FUN_10075d194(long param_1)

{
  Optional OVar1;
  undefined *puVar2;
  long lVar3;
  undefined7 extraout_var;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined **ppuVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auStack_150 [32];
  undefined1 auStack_130 [32];
  undefined *local_110;
  undefined1 *local_108;
  undefined *local_100;
  undefined *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined1 auStack_d8 [32];
  undefined1 auStack_b8 [32];
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined *puStack_60;
  undefined *local_58;
  
  uVar6 = *(ulong *)(param_1 + 0x10);
  puVar2 = (undefined *)0x13f;
  _swift_checkMetadataState();
  if (uVar6 < 0x40) {
    lVar9 = *(long *)(puVar2 + -8);
    uVar6 = *(ulong *)(param_1 + 0x18);
    lVar3 = 0x13f;
    _swift_checkMetadataState();
    if (uVar6 < 0x40) {
      uVar8 = *(ulong *)(param_1 + 0x20);
      uVar6 = uVar8;
      OVar1 = Swift::Optional::typeMetadataAccessor();
      if (uVar6 < 0x40) {
        _swift_getTupleTypeLayout3
                  (auStack_98,lVar9 + 0x40,*(long *)(lVar3 + -8) + 0x40,
                   *(long *)(CONCAT71(extraout_var,OVar1.value) + -8) + 0x40);
        uVar14 = *(undefined8 *)(param_1 + 0x30);
        uVar12 = *(undefined8 *)(param_1 + 0x28);
        uVar4 = 0xff;
        local_78 = auStack_98;
        _swift_getAssociatedTypeWitness
                  (0xff,uVar12,puVar2,
                   PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
                   PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
        uVar10 = *(undefined8 *)(param_1 + 0x38);
        uVar15 = *(undefined8 *)(param_1 + 0x38);
        uVar13 = *(undefined8 *)(param_1 + 0x30);
        ppuVar7 = &local_110;
        lVar9 = 0x13f;
        local_110 = puVar2;
        local_108 = (undefined1 *)lVar3;
        local_100 = (undefined *)uVar8;
        local_f8 = (undefined *)uVar4;
        local_f0 = uVar12;
        uStack_e8 = uVar13;
        local_e0 = uVar10;
        FUN_100761aec();
        if (ppuVar7 < (undefined **)0x40) {
          lVar11 = *(long *)(lVar9 + -8);
          uVar4 = 0xff;
          _swift_getAssociatedTypeWitness
                    (0xff,uVar13,lVar3,
                     PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
                     PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
          ppuVar7 = &local_110;
          lVar9 = 0x13f;
          local_110 = puVar2;
          local_108 = (undefined1 *)lVar3;
          local_100 = (undefined *)uVar8;
          local_f8 = (undefined *)uVar4;
          local_f0 = uVar12;
          uStack_e8 = uVar13;
          local_e0 = uVar15;
          FUN_100761aec();
          if (ppuVar7 < (undefined **)0x40) {
            uVar4 = 0xff;
            _swift_getAssociatedTypeWitness
                      (0xff,uVar10,uVar8,
                       PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18
                       ,PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
            ppuVar7 = &local_110;
            lVar5 = 0x13f;
            local_110 = puVar2;
            local_108 = (undefined1 *)lVar3;
            local_100 = (undefined *)uVar8;
            local_f8 = (undefined *)uVar4;
            local_f0 = uVar12;
            uStack_e8 = uVar14;
            local_e0 = uVar10;
            FUN_100761aec();
            if (ppuVar7 < (undefined **)0x40) {
              lVar3 = *(long *)(lVar9 + -8);
              lVar9 = *(long *)(lVar5 + -8);
              _swift_getTupleTypeLayout3(auStack_d8,lVar11 + 0x40,lVar3 + 0x40,lVar9 + 0x40);
              puVar2 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
              _swift_getTupleTypeLayout3(auStack_b8,puVar2,auStack_d8,puVar2);
              local_110 = puVar2;
              local_70 = auStack_b8;
              _swift_getTupleTypeLayout3(auStack_150,lVar11 + 0x40,lVar3 + 0x40,lVar9 + 0x40);
              local_100 = &DAT_100c76a28;
              local_108 = auStack_150;
              local_f8 = puVar2;
              _swift_getTupleTypeLayout(auStack_130,0,4,&local_110);
              local_58 = &DAT_100c76a40;
              local_68 = auStack_130;
              puStack_60 = puVar2;
              _swift_initEnumMetadataMultiPayload(param_1,0,5,&local_78);
            }
          }
        }
      }
    }
  }
  return;
}



/* Address: 0x10075d414 | FUN_10075d414 */

long * FUN_10075d414(long *param_1,uint *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  void *pvVar16;
  long *plVar17;
  long lVar18;
  ulong uVar19;
  void *pvVar20;
  uint uVar21;
  long lVar22;
  size_t sVar23;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  ulong uVar27;
  long lVar28;
  ulong uVar29;
  ulong uVar30;
  size_t sVar31;
  size_t sVar32;
  size_t sVar33;
  ulong uVar34;
  code *pcVar35;
  long lVar36;
  ulong uVar37;
  ulong uVar38;
  ulong uVar39;
  undefined8 *puVar40;
  long lVar41;
  ulong uVar42;
  long lVar43;
  ulong uVar44;
  void *pvVar45;
  uint uVar46;
  long lVar47;
  undefined8 *puVar48;
  
  puVar12 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar11 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  lVar18 = *(long *)(param_3 + 0x10);
  lVar6 = *(long *)(param_3 + 0x18);
  lVar7 = *(long *)(param_3 + 0x20);
  lVar47 = *(long *)(lVar18 + -8);
  lVar22 = *(long *)(lVar6 + -8);
  uVar8 = *(uint *)(lVar22 + 0x50);
  uVar24 = (ulong)uVar8 & 0xff;
  uVar37 = *(long *)(lVar47 + 0x40) + uVar24;
  lVar25 = *(long *)(lVar22 + 0x40);
  lVar28 = *(long *)(lVar7 + -8);
  uVar21 = *(uint *)(lVar28 + 0x50);
  uVar29 = (ulong)uVar21 & 0xff;
  sVar23 = *(size_t *)(lVar28 + 0x40);
  if (*(int *)(lVar28 + 0x54) == 0) {
    sVar23 = sVar23 + 1;
  }
  uVar27 = sVar23 + (lVar25 + uVar29 + (uVar37 & (uVar24 ^ 0xffffffffffffffff)) &
                    (uVar29 ^ 0xffffffffffffffff));
  lVar13 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),lVar18,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar41 = *(long *)(lVar13 + -8);
  uVar46 = *(uint *)(lVar41 + 0x50);
  uVar34 = (ulong)uVar46 & 0xff;
  lVar14 = 0;
  _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_3 + 0x30),lVar6,puVar12,puVar11);
  lVar43 = *(long *)(lVar14 + -8);
  uVar9 = *(uint *)(lVar43 + 0x50);
  uVar38 = (ulong)uVar9 & 0xff;
  uVar44 = uVar38 | 7;
  lVar15 = 0;
  _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_3 + 0x38),lVar7,puVar12,puVar11);
  lVar36 = *(long *)(lVar15 + -8);
  uVar19 = (ulong)*(uint *)(lVar36 + 0x50) & 0xff;
  uVar39 = uVar19 | 7;
  uVar30 = uVar38 | uVar34 | uVar19;
  sVar31 = *(size_t *)(lVar41 + 0x40);
  if (*(int *)(lVar41 + 0x54) == 0) {
    sVar31 = sVar31 + 1;
  }
  lVar1 = (uVar34 + 8 & (uVar34 ^ 0xffffffffffffffff)) + 1;
  uVar2 = uVar38 + 8;
  sVar33 = *(size_t *)(lVar43 + 0x40);
  if (*(int *)(lVar43 + 0x54) == 0) {
    sVar33 = sVar33 + 1;
  }
  lVar3 = (uVar2 & (uVar38 ^ 0xffffffffffffffff)) + 1;
  uVar4 = uVar19 + 8;
  sVar32 = *(size_t *)(lVar36 + 0x40);
  if (*(int *)(lVar36 + 0x54) == 0) {
    sVar32 = sVar32 + 1;
  }
  lVar5 = (uVar4 & (uVar19 ^ 0xffffffffffffffff)) + sVar32 +
          (lVar3 + uVar39 + sVar33 + (lVar1 + uVar44 + sVar31 & (uVar44 ^ 0xffffffffffffffff)) &
          (uVar39 ^ 0xffffffffffffffff)) + 1;
  uVar26 = lVar5 + ((ulong)((uint)uVar30 & 0xf8 ^ 0x1f8) & uVar30 + 8) + 7 & 0xfffffffffffffff8;
  uVar42 = uVar26 + 8;
  if (uVar42 <= uVar27) {
    uVar42 = uVar27;
  }
  uVar26 = uVar26 + 0x10;
  if (uVar26 <= uVar42) {
    uVar26 = uVar42;
  }
  if (uVar26 < 9) {
    uVar26 = 8;
  }
  uVar21 = uVar21 | uVar8;
  uVar30 = uVar30 | ((uVar21 | *(uint *)(lVar47 + 0x50)) & 0xf8 | 7);
  if (((uVar30 != 7) ||
      (((uVar21 | uVar46 | uVar9 | *(uint *)(lVar36 + 0x50) | *(uint *)(lVar47 + 0x50)) >> 0x14 & 1)
       != 0)) || (0x18 < uVar26 + 1)) {
    lVar25 = *(long *)param_2;
    *param_1 = lVar25;
    param_1 = (long *)(lVar25 + (uVar30 + 0x10 & (uVar30 ^ 0xffffffffffffffff)));
    goto LAB_10075d6d0;
  }
  bVar10 = *(byte *)((long)param_2 + uVar26);
  uVar21 = (uint)bVar10;
  if (4 < bVar10) {
    uVar46 = (uint)uVar26;
    uVar8 = 4;
    if (uVar46 < 4) {
      uVar8 = uVar46;
    }
    if ((int)uVar8 < 2) {
      if (uVar8 == 0) goto LAB_10075d728;
      uVar21 = (uint)(byte)*param_2;
    }
    else if (uVar8 == 2) {
      uVar21 = (uint)(ushort)*param_2;
    }
    else if (uVar8 == 3) {
      uVar21 = (uint)(uint3)*param_2;
    }
    else {
      uVar21 = *param_2;
    }
    if (uVar46 < 4) {
      uVar21 = uVar21 | bVar10 - 5 << (ulong)((uVar46 & 3) << 3);
    }
    uVar21 = uVar21 + 5;
  }
LAB_10075d728:
  uVar27 = ~uVar34;
  uVar42 = ~uVar44;
  uVar38 = ~uVar38;
  uVar30 = ~uVar39;
  uVar19 = ~uVar19;
  if ((int)uVar21 < 2) {
    if (uVar21 == 0) {
      uVar19 = ~uVar29;
      (**(code **)(lVar47 + 0x10))(param_1,param_2,lVar18);
      uVar27 = uVar37 + (long)param_1 & ~uVar24;
      uVar37 = (ulong)(uVar37 + (long)param_2) & ~uVar24;
      (**(code **)(lVar22 + 0x10))(uVar27,uVar37,lVar6);
      lVar25 = lVar25 + uVar29;
      uVar27 = uVar27 + lVar25;
      uVar37 = uVar37 + lVar25;
      uVar24 = uVar37 & uVar19;
      (**(code **)(lVar28 + 0x30))(uVar24,1,lVar7);
      if ((int)uVar24 != 0) {
        _memcpy((void *)(uVar27 & uVar19),(void *)(uVar37 & uVar19),sVar23);
        *(undefined1 *)((long)param_1 + uVar26) = 0;
        return param_1;
      }
      (**(code **)(lVar28 + 0x10))(uVar27 & uVar19,uVar37 & uVar19,lVar7);
      (**(code **)(lVar28 + 0x38))(uVar27 & uVar19,0,1,lVar7);
      *(undefined1 *)((long)param_1 + uVar26) = 0;
      return param_1;
    }
    if (uVar21 != 1) {
LAB_10075d968:
      plVar17 = _memcpy(param_1,param_2,uVar26 + 1);
      return plVar17;
    }
    *param_1 = *(long *)param_2;
    puVar48 = (undefined8 *)((long)param_1 + 0xfU & 0xfffffffffffffff8);
    puVar40 = (undefined8 *)((ulong)((long)param_2 + 0xf) & 0xfffffffffffffff8);
    *puVar48 = *puVar40;
    pvVar20 = (void *)((long)puVar48 + uVar34 + 8 & uVar27);
    pvVar45 = (void *)((long)puVar40 + uVar34 + 8 & uVar27);
    pcVar35 = *(code **)(lVar41 + 0x30);
    _swift_retain();
    pvVar16 = pvVar45;
    (*pcVar35)(pvVar45,1,lVar13);
    if ((int)pvVar16 == 0) {
      (**(code **)(lVar41 + 0x10))(pvVar20,pvVar45,lVar13);
      (**(code **)(lVar41 + 0x38))(pvVar20,0,1,lVar13);
    }
    else {
      _memcpy(pvVar20,pvVar45,sVar31);
    }
    *(undefined1 *)(sVar31 + (long)pvVar20) = *(undefined1 *)(sVar31 + (long)pvVar45);
    puVar48 = (undefined8 *)((long)puVar48 + lVar1 + sVar31 + uVar44 & uVar42);
    puVar40 = (undefined8 *)((long)puVar40 + lVar1 + sVar31 + uVar44 & uVar42);
    *puVar48 = *puVar40;
    pvVar20 = (void *)(uVar2 + (long)puVar48 & uVar38);
    pvVar45 = (void *)(uVar2 + (long)puVar40 & uVar38);
    pvVar16 = pvVar45;
    (**(code **)(lVar43 + 0x30))(pvVar45,1,lVar14);
    if ((int)pvVar16 == 0) {
      (**(code **)(lVar43 + 0x10))(pvVar20,pvVar45,lVar14);
      (**(code **)(lVar43 + 0x38))(pvVar20,0,1,lVar14);
    }
    else {
      _memcpy(pvVar20,pvVar45,sVar33);
    }
    *(undefined1 *)((long)pvVar20 + sVar33) = *(undefined1 *)((long)pvVar45 + sVar33);
    puVar48 = (undefined8 *)((long)puVar48 + lVar3 + sVar33 + uVar39 & uVar30);
    puVar40 = (undefined8 *)((long)puVar40 + lVar3 + sVar33 + uVar39 & uVar30);
    *puVar48 = *puVar40;
    pvVar20 = (void *)(uVar4 + (long)puVar48 & uVar19);
    pvVar45 = (void *)(uVar4 + (long)puVar40 & uVar19);
    pvVar16 = pvVar45;
    (**(code **)(lVar36 + 0x30))(pvVar45,1,lVar15);
    if ((int)pvVar16 == 0) {
      (**(code **)(lVar36 + 0x10))(pvVar20,pvVar45,lVar15);
      (**(code **)(lVar36 + 0x38))(pvVar20,0,1,lVar15);
    }
    else {
      _memcpy(pvVar20,pvVar45,sVar32);
    }
    *(undefined1 *)((long)pvVar20 + sVar32) = *(undefined1 *)((long)pvVar45 + sVar32);
    *(undefined8 *)(((long)param_1 + 0xfU | 7) + lVar5 & 0xfffffffffffffff8) =
         *(undefined8 *)(((ulong)((long)param_2 + 0xf) | 7) + lVar5 & 0xfffffffffffffff8);
    *(undefined1 *)((long)param_1 + uVar26) = 1;
  }
  else if (uVar21 == 2) {
    *param_1 = *(long *)param_2;
    puVar48 = (undefined8 *)((long)param_1 + 0xfU & 0xfffffffffffffff8);
    puVar40 = (undefined8 *)((ulong)((long)param_2 + 0xf) & 0xfffffffffffffff8);
    *puVar48 = *puVar40;
    pvVar20 = (void *)((long)puVar48 + uVar34 + 8 & uVar27);
    pvVar45 = (void *)((long)puVar40 + uVar34 + 8 & uVar27);
    pcVar35 = *(code **)(lVar41 + 0x30);
    _swift_retain();
    pvVar16 = pvVar45;
    (*pcVar35)(pvVar45,1,lVar13);
    if ((int)pvVar16 == 0) {
      (**(code **)(lVar41 + 0x10))(pvVar20,pvVar45,lVar13);
      (**(code **)(lVar41 + 0x38))(pvVar20,0,1,lVar13);
    }
    else {
      _memcpy(pvVar20,pvVar45,sVar31);
    }
    *(undefined1 *)(sVar31 + (long)pvVar20) = *(undefined1 *)(sVar31 + (long)pvVar45);
    puVar48 = (undefined8 *)((long)puVar48 + lVar1 + sVar31 + uVar44 & uVar42);
    puVar40 = (undefined8 *)((long)puVar40 + lVar1 + sVar31 + uVar44 & uVar42);
    *puVar48 = *puVar40;
    pvVar20 = (void *)(uVar2 + (long)puVar48 & uVar38);
    pvVar45 = (void *)(uVar2 + (long)puVar40 & uVar38);
    pvVar16 = pvVar45;
    (**(code **)(lVar43 + 0x30))(pvVar45,1,lVar14);
    if ((int)pvVar16 == 0) {
      (**(code **)(lVar43 + 0x10))(pvVar20,pvVar45,lVar14);
      (**(code **)(lVar43 + 0x38))(pvVar20,0,1,lVar14);
    }
    else {
      _memcpy(pvVar20,pvVar45,sVar33);
    }
    *(undefined1 *)((long)pvVar20 + sVar33) = *(undefined1 *)((long)pvVar45 + sVar33);
    puVar48 = (undefined8 *)((long)puVar48 + lVar3 + sVar33 + uVar39 & uVar30);
    puVar40 = (undefined8 *)((long)puVar40 + lVar3 + sVar33 + uVar39 & uVar30);
    *puVar48 = *puVar40;
    pvVar20 = (void *)(uVar4 + (long)puVar48 & uVar19);
    pvVar45 = (void *)(uVar4 + (long)puVar40 & uVar19);
    pvVar16 = pvVar45;
    (**(code **)(lVar36 + 0x30))(pvVar45,1,lVar15);
    if ((int)pvVar16 == 0) {
      (**(code **)(lVar36 + 0x10))(pvVar20,pvVar45,lVar15);
      (**(code **)(lVar36 + 0x38))(pvVar20,0,1,lVar15);
    }
    else {
      _memcpy(pvVar20,pvVar45,sVar32);
    }
    *(undefined1 *)((long)pvVar20 + sVar32) = *(undefined1 *)((long)pvVar45 + sVar32);
    puVar40 = (undefined8 *)(((long)param_1 + 0xfU | 7) + lVar5 & 0xfffffffffffffff8);
    puVar48 = (undefined8 *)(((ulong)((long)param_2 + 0xf) | 7) + lVar5 & 0xfffffffffffffff8);
    *puVar40 = *puVar48;
    puVar40[1] = puVar48[1];
    *(undefined1 *)((long)param_1 + uVar26) = 2;
  }
  else {
    if (uVar21 != 3) {
      if (uVar21 == 4) {
        lVar25 = *(long *)param_2;
        _swift_errorRetain(lVar25);
        *param_1 = lVar25;
        *(undefined1 *)((long)param_1 + uVar26) = 4;
        return param_1;
      }
      goto LAB_10075d968;
    }
    *param_1 = *(long *)param_2;
    *(undefined1 *)((long)param_1 + uVar26) = 3;
  }
LAB_10075d6d0:
  _swift_retain();
  return param_1;
}



/* Address: 0x10075ddac | thunk_FUN_10075ddb0 */

void thunk_FUN_10075ddb0(uint *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  byte bVar11;
  byte bVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  undefined8 uVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  uint uVar26;
  ulong uVar27;
  long lVar28;
  ulong uVar29;
  ulong uVar30;
  uint uVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  long lVar35;
  ulong uVar36;
  long lVar37;
  ulong uVar38;
  long lVar39;
  
  puVar14 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar13 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  lVar8 = *(long *)(param_2 + 0x10);
  lVar10 = *(long *)(param_2 + 0x18);
  lVar20 = *(long *)(lVar8 + -8);
  lVar22 = *(long *)(lVar10 + -8);
  uVar27 = (ulong)*(byte *)(lVar22 + 0x50);
  uVar18 = *(long *)(lVar20 + 0x40) + uVar27;
  lVar23 = *(long *)(lVar22 + 0x40);
  lVar9 = *(long *)(param_2 + 0x20);
  lVar28 = *(long *)(lVar9 + -8);
  uVar32 = (ulong)*(byte *)(lVar28 + 0x50);
  lVar24 = *(long *)(lVar28 + 0x40);
  if (*(int *)(lVar28 + 0x54) == 0) {
    lVar24 = lVar24 + 1;
  }
  uVar5 = lVar24 + (lVar23 + uVar32 + (uVar18 & (uVar27 ^ 0xffffffffffffffff)) &
                   (uVar32 ^ 0xffffffffffffffff));
  lVar15 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x28),lVar8,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar35 = *(long *)(lVar15 + -8);
  bVar11 = *(byte *)(lVar35 + 0x50);
  uVar34 = (ulong)bVar11;
  lVar16 = 0;
  _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_2 + 0x30),lVar10,puVar14,puVar13);
  lVar39 = *(long *)(lVar16 + -8);
  bVar12 = *(byte *)(lVar39 + 0x50);
  uVar36 = (ulong)bVar12;
  uVar33 = uVar36 | 7;
  lVar17 = 0;
  _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_2 + 0x38),lVar9,puVar14,puVar13);
  lVar37 = *(long *)(lVar17 + -8);
  uVar21 = (ulong)*(byte *)(lVar37 + 0x50);
  uVar25 = uVar21 | 7;
  uVar29 = (ulong)(byte)(bVar12 | bVar11 | *(byte *)(lVar37 + 0x50));
  uVar38 = uVar29 | 7;
  uVar1 = uVar34 + 8;
  lVar24 = (uVar1 & (uVar34 ^ 0xffffffffffffffff)) + *(long *)(lVar35 + 0x40);
  if (*(int *)(lVar35 + 0x54) == 0) {
    lVar24 = lVar24 + 1;
  }
  uVar2 = lVar24 + uVar33 + 1;
  uVar3 = uVar36 + 8;
  lVar24 = (uVar3 & (uVar36 ^ 0xffffffffffffffff)) + *(long *)(lVar39 + 0x40);
  if (*(int *)(lVar39 + 0x54) == 0) {
    lVar24 = lVar24 + 1;
  }
  lVar24 = lVar24 + uVar25 + 1;
  uVar4 = uVar21 + 8;
  lVar6 = (uVar4 & (uVar21 ^ 0xffffffffffffffff)) + *(long *)(lVar37 + 0x40);
  if (*(int *)(lVar37 + 0x54) == 0) {
    lVar6 = lVar6 + 1;
  }
  lVar6 = lVar6 + (lVar24 + (uVar2 & (uVar33 ^ 0xffffffffffffffff)) & (uVar25 ^ 0xffffffffffffffff))
          + 1;
  uVar30 = lVar6 + (uVar29 + 8 & (uVar38 ^ 0xffffffffffffffff)) + 7 & 0xfffffffffffffff8;
  uVar29 = uVar30 + 8;
  if (uVar29 <= uVar5) {
    uVar29 = uVar5;
  }
  uVar30 = uVar30 + 0x10;
  if (uVar30 <= uVar29) {
    uVar30 = uVar29;
  }
  if (uVar30 < 9) {
    uVar30 = 8;
  }
  bVar11 = *(byte *)((long)param_1 + uVar30);
  uVar26 = (uint)bVar11;
  if (4 < bVar11) {
    uVar31 = (uint)uVar30;
    uVar7 = 4;
    if (uVar31 < 4) {
      uVar7 = uVar31;
    }
    if ((int)uVar7 < 2) {
      if (uVar7 == 0) goto LAB_10075e010;
      uVar26 = (uint)(byte)*param_1;
    }
    else if (uVar7 == 2) {
      uVar26 = (uint)(ushort)*param_1;
    }
    else if (uVar7 == 3) {
      uVar26 = (uint)(uint3)*param_1;
    }
    else {
      uVar26 = *param_1;
    }
    if (uVar31 < 4) {
      uVar26 = uVar26 | bVar11 - 5 << (ulong)((uVar31 & 3) << 3);
    }
    uVar26 = uVar26 + 5;
  }
LAB_10075e010:
  uVar34 = ~uVar34;
  uVar36 = ~uVar36;
  uVar21 = ~uVar21;
  if ((int)uVar26 < 2) {
    if (uVar26 == 0) {
      (**(code **)(lVar20 + 8))(param_1,lVar8);
      uVar18 = (ulong)(uVar18 + (long)param_1) & ~uVar27;
      (**(code **)(lVar22 + 8))(uVar18,lVar10);
      uVar18 = uVar18 + lVar23 + uVar32;
      uVar27 = uVar18 & ~uVar32;
      (**(code **)(lVar28 + 0x30))(uVar27,1,lVar9);
      if ((int)uVar27 != 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00010075e34c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar28 + 8))(uVar18 & ~uVar32,lVar9);
      return;
    }
    if (uVar26 != 1) {
      return;
    }
    _swift_release(*(undefined8 *)param_1);
    uVar27 = (ulong)((long)param_1 + uVar38 + 8) & ~uVar38;
    uVar18 = uVar1 + uVar27 & uVar34;
    (**(code **)(lVar35 + 0x30))(uVar18,1,lVar15);
    if ((int)uVar18 == 0) {
      (**(code **)(lVar35 + 8))(uVar1 + uVar27 & uVar34,lVar15);
    }
    uVar32 = uVar2 + uVar27 & ~uVar33;
    uVar3 = uVar3 + uVar32;
    uVar18 = uVar3 & uVar36;
    (**(code **)(lVar39 + 0x30))(uVar18,1,lVar16);
    if ((int)uVar18 == 0) {
      (**(code **)(lVar39 + 8))(uVar3 & uVar36,lVar16);
    }
    uVar4 = uVar4 + (lVar24 + uVar32 & ~uVar25);
    uVar18 = uVar4 & uVar21;
    (**(code **)(lVar37 + 0x30))(uVar18,1,lVar17);
    if ((int)uVar18 == 0) {
      (**(code **)(lVar37 + 8))(uVar4 & uVar21,lVar17);
    }
    uVar18 = lVar6 + uVar27 + 7;
  }
  else {
    if (uVar26 != 2) {
      if (uVar26 != 3) {
        if (uVar26 != 4) {
          return;
        }
        _swift_errorRelease(*(undefined8 *)param_1);
        return;
      }
      uVar19 = *(undefined8 *)param_1;
      goto LAB_10075e264;
    }
    _swift_release(*(undefined8 *)param_1);
    uVar27 = (ulong)((long)param_1 + uVar38 + 8) & ~uVar38;
    uVar18 = uVar1 + uVar27 & uVar34;
    (**(code **)(lVar35 + 0x30))(uVar18,1,lVar15);
    if ((int)uVar18 == 0) {
      (**(code **)(lVar35 + 8))(uVar1 + uVar27 & uVar34,lVar15);
    }
    uVar32 = uVar2 + uVar27 & ~uVar33;
    uVar3 = uVar3 + uVar32;
    uVar18 = uVar3 & uVar36;
    (**(code **)(lVar39 + 0x30))(uVar18,1,lVar16);
    if ((int)uVar18 == 0) {
      (**(code **)(lVar39 + 8))(uVar3 & uVar36,lVar16);
    }
    uVar4 = uVar4 + (lVar24 + uVar32 & ~uVar25);
    uVar18 = uVar4 & uVar21;
    (**(code **)(lVar37 + 0x30))(uVar18,1,lVar17);
    if ((int)uVar18 == 0) {
      (**(code **)(lVar37 + 8))(uVar4 & uVar21,lVar17);
    }
    uVar18 = (lVar6 + uVar27 + 7 & 0xfffffffffffffff8) + 0xf;
  }
  uVar19 = *(undefined8 *)(uVar18 & 0xfffffffffffffff8);
LAB_10075e264:
  _swift_release(uVar19);
  return;
}



/* Address: 0x10075ddb0 | FUN_10075ddb0 */

void FUN_10075ddb0(uint *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  byte bVar11;
  byte bVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  undefined8 uVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  uint uVar26;
  ulong uVar27;
  long lVar28;
  ulong uVar29;
  ulong uVar30;
  uint uVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  long lVar35;
  ulong uVar36;
  long lVar37;
  ulong uVar38;
  long lVar39;
  
  puVar14 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar13 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  lVar8 = *(long *)(param_2 + 0x10);
  lVar10 = *(long *)(param_2 + 0x18);
  lVar20 = *(long *)(lVar8 + -8);
  lVar22 = *(long *)(lVar10 + -8);
  uVar27 = (ulong)*(byte *)(lVar22 + 0x50);
  uVar18 = *(long *)(lVar20 + 0x40) + uVar27;
  lVar23 = *(long *)(lVar22 + 0x40);
  lVar9 = *(long *)(param_2 + 0x20);
  lVar28 = *(long *)(lVar9 + -8);
  uVar32 = (ulong)*(byte *)(lVar28 + 0x50);
  lVar24 = *(long *)(lVar28 + 0x40);
  if (*(int *)(lVar28 + 0x54) == 0) {
    lVar24 = lVar24 + 1;
  }
  uVar5 = lVar24 + (lVar23 + uVar32 + (uVar18 & (uVar27 ^ 0xffffffffffffffff)) &
                   (uVar32 ^ 0xffffffffffffffff));
  lVar15 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x28),lVar8,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar35 = *(long *)(lVar15 + -8);
  bVar11 = *(byte *)(lVar35 + 0x50);
  uVar34 = (ulong)bVar11;
  lVar16 = 0;
  _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_2 + 0x30),lVar10,puVar14,puVar13);
  lVar39 = *(long *)(lVar16 + -8);
  bVar12 = *(byte *)(lVar39 + 0x50);
  uVar36 = (ulong)bVar12;
  uVar33 = uVar36 | 7;
  lVar17 = 0;
  _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_2 + 0x38),lVar9,puVar14,puVar13);
  lVar37 = *(long *)(lVar17 + -8);
  uVar21 = (ulong)*(byte *)(lVar37 + 0x50);
  uVar25 = uVar21 | 7;
  uVar29 = (ulong)(byte)(bVar12 | bVar11 | *(byte *)(lVar37 + 0x50));
  uVar38 = uVar29 | 7;
  uVar1 = uVar34 + 8;
  lVar24 = (uVar1 & (uVar34 ^ 0xffffffffffffffff)) + *(long *)(lVar35 + 0x40);
  if (*(int *)(lVar35 + 0x54) == 0) {
    lVar24 = lVar24 + 1;
  }
  uVar2 = lVar24 + uVar33 + 1;
  uVar3 = uVar36 + 8;
  lVar24 = (uVar3 & (uVar36 ^ 0xffffffffffffffff)) + *(long *)(lVar39 + 0x40);
  if (*(int *)(lVar39 + 0x54) == 0) {
    lVar24 = lVar24 + 1;
  }
  lVar24 = lVar24 + uVar25 + 1;
  uVar4 = uVar21 + 8;
  lVar6 = (uVar4 & (uVar21 ^ 0xffffffffffffffff)) + *(long *)(lVar37 + 0x40);
  if (*(int *)(lVar37 + 0x54) == 0) {
    lVar6 = lVar6 + 1;
  }
  lVar6 = lVar6 + (lVar24 + (uVar2 & (uVar33 ^ 0xffffffffffffffff)) & (uVar25 ^ 0xffffffffffffffff))
          + 1;
  uVar30 = lVar6 + (uVar29 + 8 & (uVar38 ^ 0xffffffffffffffff)) + 7 & 0xfffffffffffffff8;
  uVar29 = uVar30 + 8;
  if (uVar29 <= uVar5) {
    uVar29 = uVar5;
  }
  uVar30 = uVar30 + 0x10;
  if (uVar30 <= uVar29) {
    uVar30 = uVar29;
  }
  if (uVar30 < 9) {
    uVar30 = 8;
  }
  bVar11 = *(byte *)((long)param_1 + uVar30);
  uVar26 = (uint)bVar11;
  if (4 < bVar11) {
    uVar31 = (uint)uVar30;
    uVar7 = 4;
    if (uVar31 < 4) {
      uVar7 = uVar31;
    }
    if ((int)uVar7 < 2) {
      if (uVar7 == 0) goto LAB_10075e010;
      uVar26 = (uint)(byte)*param_1;
    }
    else if (uVar7 == 2) {
      uVar26 = (uint)(ushort)*param_1;
    }
    else if (uVar7 == 3) {
      uVar26 = (uint)(uint3)*param_1;
    }
    else {
      uVar26 = *param_1;
    }
    if (uVar31 < 4) {
      uVar26 = uVar26 | bVar11 - 5 << (ulong)((uVar31 & 3) << 3);
    }
    uVar26 = uVar26 + 5;
  }
LAB_10075e010:
  uVar34 = ~uVar34;
  uVar36 = ~uVar36;
  uVar21 = ~uVar21;
  if ((int)uVar26 < 2) {
    if (uVar26 == 0) {
      (**(code **)(lVar20 + 8))(param_1,lVar8);
      uVar18 = (ulong)(uVar18 + (long)param_1) & ~uVar27;
      (**(code **)(lVar22 + 8))(uVar18,lVar10);
      uVar18 = uVar18 + lVar23 + uVar32;
      uVar27 = uVar18 & ~uVar32;
      (**(code **)(lVar28 + 0x30))(uVar27,1,lVar9);
      if ((int)uVar27 != 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00010075e34c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar28 + 8))(uVar18 & ~uVar32,lVar9);
      return;
    }
    if (uVar26 != 1) {
      return;
    }
    _swift_release(*(undefined8 *)param_1);
    uVar27 = (ulong)((long)param_1 + uVar38 + 8) & ~uVar38;
    uVar18 = uVar1 + uVar27 & uVar34;
    (**(code **)(lVar35 + 0x30))(uVar18,1,lVar15);
    if ((int)uVar18 == 0) {
      (**(code **)(lVar35 + 8))(uVar1 + uVar27 & uVar34,lVar15);
    }
    uVar32 = uVar2 + uVar27 & ~uVar33;
    uVar3 = uVar3 + uVar32;
    uVar18 = uVar3 & uVar36;
    (**(code **)(lVar39 + 0x30))(uVar18,1,lVar16);
    if ((int)uVar18 == 0) {
      (**(code **)(lVar39 + 8))(uVar3 & uVar36,lVar16);
    }
    uVar4 = uVar4 + (lVar24 + uVar32 & ~uVar25);
    uVar18 = uVar4 & uVar21;
    (**(code **)(lVar37 + 0x30))(uVar18,1,lVar17);
    if ((int)uVar18 == 0) {
      (**(code **)(lVar37 + 8))(uVar4 & uVar21,lVar17);
    }
    uVar18 = lVar6 + uVar27 + 7;
  }
  else {
    if (uVar26 != 2) {
      if (uVar26 != 3) {
        if (uVar26 != 4) {
          return;
        }
        _swift_errorRelease(*(undefined8 *)param_1);
        return;
      }
      uVar19 = *(undefined8 *)param_1;
      goto LAB_10075e264;
    }
    _swift_release(*(undefined8 *)param_1);
    uVar27 = (ulong)((long)param_1 + uVar38 + 8) & ~uVar38;
    uVar18 = uVar1 + uVar27 & uVar34;
    (**(code **)(lVar35 + 0x30))(uVar18,1,lVar15);
    if ((int)uVar18 == 0) {
      (**(code **)(lVar35 + 8))(uVar1 + uVar27 & uVar34,lVar15);
    }
    uVar32 = uVar2 + uVar27 & ~uVar33;
    uVar3 = uVar3 + uVar32;
    uVar18 = uVar3 & uVar36;
    (**(code **)(lVar39 + 0x30))(uVar18,1,lVar16);
    if ((int)uVar18 == 0) {
      (**(code **)(lVar39 + 8))(uVar3 & uVar36,lVar16);
    }
    uVar4 = uVar4 + (lVar24 + uVar32 & ~uVar25);
    uVar18 = uVar4 & uVar21;
    (**(code **)(lVar37 + 0x30))(uVar18,1,lVar17);
    if ((int)uVar18 == 0) {
      (**(code **)(lVar37 + 8))(uVar4 & uVar21,lVar17);
    }
    uVar18 = (lVar6 + uVar27 + 7 & 0xfffffffffffffff8) + 0xf;
  }
  uVar19 = *(undefined8 *)(uVar18 & 0xfffffffffffffff8);
LAB_10075e264:
  _swift_release(uVar19);
  return;
}



/* Address: 0x10075e350 | FUN_10075e350 */

undefined8 * FUN_10075e350(undefined8 *param_1,uint *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  byte bVar9;
  byte bVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  void *pvVar16;
  undefined8 *puVar17;
  long lVar18;
  ulong uVar19;
  undefined1 uVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  size_t sVar25;
  ulong uVar26;
  undefined8 *puVar27;
  ulong uVar28;
  long lVar29;
  ulong uVar30;
  uint uVar31;
  ulong uVar32;
  ulong uVar33;
  size_t sVar34;
  size_t sVar35;
  size_t sVar36;
  ulong uVar37;
  ulong uVar38;
  undefined8 uVar39;
  code *pcVar40;
  undefined8 *puVar41;
  long lVar42;
  void *pvVar43;
  ulong uVar44;
  long lVar45;
  ulong uVar46;
  undefined8 *puVar47;
  ulong uVar48;
  long lVar49;
  uint uVar50;
  void *pvVar51;
  ulong uVar52;
  ulong uVar53;
  undefined8 *puVar54;
  
  puVar12 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar11 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  lVar18 = *(long *)(param_3 + 0x10);
  lVar7 = *(long *)(param_3 + 0x18);
  lVar8 = *(long *)(param_3 + 0x20);
  lVar21 = *(long *)(lVar18 + -8);
  lVar23 = *(long *)(lVar7 + -8);
  uVar28 = (ulong)*(byte *)(lVar23 + 0x50);
  uVar46 = *(long *)(lVar21 + 0x40) + uVar28;
  lVar24 = *(long *)(lVar23 + 0x40);
  lVar29 = *(long *)(lVar8 + -8);
  uVar32 = (ulong)*(byte *)(lVar29 + 0x50);
  sVar25 = *(size_t *)(lVar29 + 0x40);
  if (*(int *)(lVar29 + 0x54) == 0) {
    sVar25 = sVar25 + 1;
  }
  uVar19 = sVar25 + (lVar24 + uVar32 + (uVar46 & (uVar28 ^ 0xffffffffffffffff)) &
                    (uVar32 ^ 0xffffffffffffffff));
  lVar13 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),lVar18,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar42 = *(long *)(lVar13 + -8);
  bVar9 = *(byte *)(lVar42 + 0x50);
  uVar37 = (ulong)bVar9;
  lVar14 = 0;
  _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_3 + 0x30),lVar7,puVar12,puVar11);
  lVar49 = *(long *)(lVar14 + -8);
  bVar10 = *(byte *)(lVar49 + 0x50);
  uVar53 = (ulong)bVar10;
  uVar52 = uVar53 | 7;
  lVar15 = 0;
  _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_3 + 0x38),lVar8,puVar12,puVar11);
  lVar45 = *(long *)(lVar15 + -8);
  uVar30 = (ulong)*(byte *)(lVar45 + 0x50);
  uVar48 = uVar30 | 7;
  uVar22 = (ulong)(byte)(bVar10 | bVar9 | *(byte *)(lVar45 + 0x50));
  uVar26 = uVar22 | 7;
  uVar44 = uVar37 + 8;
  sVar34 = *(size_t *)(lVar42 + 0x40);
  if (*(int *)(lVar42 + 0x54) == 0) {
    sVar34 = sVar34 + 1;
  }
  lVar1 = (uVar44 & (uVar37 ^ 0xffffffffffffffff)) + 1;
  uVar2 = uVar53 + 8;
  sVar35 = *(size_t *)(lVar49 + 0x40);
  if (*(int *)(lVar49 + 0x54) == 0) {
    sVar35 = sVar35 + 1;
  }
  lVar3 = (uVar2 & (uVar53 ^ 0xffffffffffffffff)) + 1;
  uVar4 = uVar30 + 8;
  sVar36 = *(size_t *)(lVar45 + 0x40);
  if (*(int *)(lVar45 + 0x54) == 0) {
    sVar36 = sVar36 + 1;
  }
  lVar5 = (uVar4 & (uVar30 ^ 0xffffffffffffffff)) + sVar36 +
          (lVar3 + uVar48 + sVar35 + (lVar1 + uVar52 + sVar34 & (uVar52 ^ 0xffffffffffffffff)) &
          (uVar48 ^ 0xffffffffffffffff));
  uVar33 = lVar5 + (uVar22 + 8 & (uVar26 ^ 0xffffffffffffffff)) + 8 & 0xfffffffffffffff8;
  uVar22 = uVar33 + 8;
  if (uVar22 <= uVar19) {
    uVar22 = uVar19;
  }
  uVar33 = uVar33 + 0x10;
  if (uVar33 <= uVar22) {
    uVar33 = uVar22;
  }
  if (uVar33 < 9) {
    uVar33 = 8;
  }
  bVar9 = *(byte *)((long)param_2 + uVar33);
  uVar31 = (uint)bVar9;
  if (4 < bVar9) {
    uVar50 = (uint)uVar33;
    uVar6 = 4;
    if (uVar50 < 4) {
      uVar6 = uVar50;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_10075e5bc;
      uVar31 = (uint)(byte)*param_2;
    }
    else if (uVar6 == 2) {
      uVar31 = (uint)(ushort)*param_2;
    }
    else if (uVar6 == 3) {
      uVar31 = (uint)(uint3)*param_2;
    }
    else {
      uVar31 = *param_2;
    }
    if (uVar50 < 4) {
      uVar31 = uVar31 | bVar9 - 5 << (ulong)((uVar50 & 3) << 3);
    }
    uVar31 = uVar31 + 5;
  }
LAB_10075e5bc:
  uVar22 = ~uVar26;
  uVar37 = ~uVar37;
  uVar38 = ~uVar52;
  uVar53 = ~uVar53;
  uVar19 = ~uVar48;
  uVar30 = ~uVar30;
  if ((int)uVar31 < 2) {
    if (uVar31 == 0) {
      uVar19 = ~uVar32;
      (**(code **)(lVar21 + 0x10))(param_1,param_2,lVar18);
      uVar44 = uVar46 + (long)param_1 & ~uVar28;
      uVar46 = (ulong)(uVar46 + (long)param_2) & ~uVar28;
      (**(code **)(lVar23 + 0x10))(uVar44,uVar46,lVar7);
      lVar24 = lVar24 + uVar32;
      uVar44 = uVar44 + lVar24;
      uVar46 = uVar46 + lVar24;
      uVar28 = uVar46 & uVar19;
      (**(code **)(lVar29 + 0x30))(uVar28,1,lVar8);
      if ((int)uVar28 != 0) {
        _memcpy((void *)(uVar44 & uVar19),(void *)(uVar46 & uVar19),sVar25);
        *(undefined1 *)((long)param_1 + uVar33) = 0;
        return param_1;
      }
      (**(code **)(lVar29 + 0x10))(uVar44 & uVar19,uVar46 & uVar19,lVar8);
      (**(code **)(lVar29 + 0x38))(uVar44 & uVar19,0,1,lVar8);
      *(undefined1 *)((long)param_1 + uVar33) = 0;
      return param_1;
    }
    if (uVar31 != 1) {
LAB_10075e804:
      puVar17 = _memcpy(param_1,param_2,uVar33 + 1);
      return puVar17;
    }
    *param_1 = *(undefined8 *)param_2;
    puVar54 = (undefined8 *)((long)param_1 + uVar26 + 8 & uVar22);
    puVar17 = (undefined8 *)((ulong)((long)param_2 + uVar26 + 8) & uVar22);
    *puVar54 = *puVar17;
    pvVar51 = (void *)(uVar44 + (long)puVar54 & uVar37);
    pvVar43 = (void *)(uVar44 + (long)puVar17 & uVar37);
    pcVar40 = *(code **)(lVar42 + 0x30);
    _swift_retain();
    pvVar16 = pvVar43;
    (*pcVar40)(pvVar43,1,lVar13);
    if ((int)pvVar16 == 0) {
      (**(code **)(lVar42 + 0x10))(pvVar51,pvVar43,lVar13);
      (**(code **)(lVar42 + 0x38))(pvVar51,0,1,lVar13);
    }
    else {
      _memcpy(pvVar51,pvVar43,sVar34);
    }
    *(undefined1 *)((long)pvVar51 + sVar34) = *(undefined1 *)((long)pvVar43 + sVar34);
    puVar41 = (undefined8 *)((long)puVar54 + lVar1 + sVar34 + uVar52 & uVar38);
    puVar47 = (undefined8 *)((long)puVar17 + lVar1 + sVar34 + uVar52 & uVar38);
    *puVar41 = *puVar47;
    pvVar51 = (void *)(uVar2 + (long)puVar41 & uVar53);
    pvVar43 = (void *)(uVar2 + (long)puVar47 & uVar53);
    pvVar16 = pvVar43;
    (**(code **)(lVar49 + 0x30))(pvVar43,1,lVar14);
    if ((int)pvVar16 == 0) {
      (**(code **)(lVar49 + 0x10))(pvVar51,pvVar43,lVar14);
      (**(code **)(lVar49 + 0x38))(pvVar51,0,1,lVar14);
    }
    else {
      _memcpy(pvVar51,pvVar43,sVar35);
    }
    *(undefined1 *)((long)pvVar51 + sVar35) = *(undefined1 *)((long)pvVar43 + sVar35);
    puVar27 = (undefined8 *)((long)puVar41 + lVar3 + sVar35 + uVar48 & uVar19);
    puVar41 = (undefined8 *)((long)puVar47 + lVar3 + sVar35 + uVar48 & uVar19);
    *puVar27 = *puVar41;
    pvVar43 = (void *)(uVar4 + (long)puVar27 & uVar30);
    pvVar51 = (void *)(uVar4 + (long)puVar41 & uVar30);
    pvVar16 = pvVar51;
    (**(code **)(lVar45 + 0x30))(pvVar51,1,lVar15);
    if ((int)pvVar16 == 0) {
      (**(code **)(lVar45 + 0x10))(pvVar43,pvVar51,lVar15);
      (**(code **)(lVar45 + 0x38))(pvVar43,0,1,lVar15);
    }
    else {
      _memcpy(pvVar43,pvVar51,sVar36);
    }
    *(undefined1 *)((long)pvVar43 + sVar36) = *(undefined1 *)((long)pvVar51 + sVar36);
    *(undefined8 *)((long)puVar54 + lVar5 + 8 & 0xfffffffffffffff8) =
         *(undefined8 *)((long)puVar17 + lVar5 + 8 & 0xfffffffffffffff8);
    uVar20 = 1;
  }
  else if (uVar31 == 2) {
    *param_1 = *(undefined8 *)param_2;
    puVar54 = (undefined8 *)((long)param_1 + uVar26 + 8 & uVar22);
    puVar17 = (undefined8 *)((ulong)((long)param_2 + uVar26 + 8) & uVar22);
    *puVar54 = *puVar17;
    pvVar51 = (void *)(uVar44 + (long)puVar54 & uVar37);
    pvVar43 = (void *)(uVar44 + (long)puVar17 & uVar37);
    pcVar40 = *(code **)(lVar42 + 0x30);
    _swift_retain();
    pvVar16 = pvVar43;
    (*pcVar40)(pvVar43,1,lVar13);
    if ((int)pvVar16 == 0) {
      (**(code **)(lVar42 + 0x10))(pvVar51,pvVar43,lVar13);
      (**(code **)(lVar42 + 0x38))(pvVar51,0,1,lVar13);
    }
    else {
      _memcpy(pvVar51,pvVar43,sVar34);
    }
    *(undefined1 *)((long)pvVar51 + sVar34) = *(undefined1 *)((long)pvVar43 + sVar34);
    puVar41 = (undefined8 *)((long)puVar54 + lVar1 + sVar34 + uVar52 & uVar38);
    puVar47 = (undefined8 *)((long)puVar17 + lVar1 + sVar34 + uVar52 & uVar38);
    *puVar41 = *puVar47;
    pvVar51 = (void *)(uVar2 + (long)puVar41 & uVar53);
    pvVar43 = (void *)(uVar2 + (long)puVar47 & uVar53);
    pvVar16 = pvVar43;
    (**(code **)(lVar49 + 0x30))(pvVar43,1,lVar14);
    if ((int)pvVar16 == 0) {
      (**(code **)(lVar49 + 0x10))(pvVar51,pvVar43,lVar14);
      (**(code **)(lVar49 + 0x38))(pvVar51,0,1,lVar14);
    }
    else {
      _memcpy(pvVar51,pvVar43,sVar35);
    }
    *(undefined1 *)((long)pvVar51 + sVar35) = *(undefined1 *)((long)pvVar43 + sVar35);
    puVar27 = (undefined8 *)((long)puVar41 + lVar3 + sVar35 + uVar48 & uVar19);
    puVar41 = (undefined8 *)((long)puVar47 + lVar3 + sVar35 + uVar48 & uVar19);
    *puVar27 = *puVar41;
    pvVar43 = (void *)(uVar4 + (long)puVar27 & uVar30);
    pvVar51 = (void *)(uVar4 + (long)puVar41 & uVar30);
    pvVar16 = pvVar51;
    (**(code **)(lVar45 + 0x30))(pvVar51,1,lVar15);
    if ((int)pvVar16 == 0) {
      (**(code **)(lVar45 + 0x10))(pvVar43,pvVar51,lVar15);
      (**(code **)(lVar45 + 0x38))(pvVar43,0,1,lVar15);
    }
    else {
      _memcpy(pvVar43,pvVar51,sVar36);
    }
    *(undefined1 *)((long)pvVar43 + sVar36) = *(undefined1 *)((long)pvVar51 + sVar36);
    puVar54 = (undefined8 *)((long)puVar54 + lVar5 + 8 & 0xfffffffffffffff8);
    puVar17 = (undefined8 *)((long)puVar17 + lVar5 + 8 & 0xfffffffffffffff8);
    *puVar54 = *puVar17;
    puVar54[1] = puVar17[1];
    uVar20 = 2;
  }
  else {
    if (uVar31 != 3) {
      if (uVar31 == 4) {
        uVar39 = *(undefined8 *)param_2;
        _swift_errorRetain(uVar39);
        *param_1 = uVar39;
        *(undefined1 *)((long)param_1 + uVar33) = 4;
        return param_1;
      }
      goto LAB_10075e804;
    }
    *param_1 = *(undefined8 *)param_2;
    uVar20 = 3;
  }
  *(undefined1 *)((long)param_1 + uVar33) = uVar20;
  _swift_retain();
  return param_1;
}



/* Address: 0x10075ec5c | FUN_10075ec5c */

uint * FUN_10075ec5c(uint *param_1,uint *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  byte bVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  void *pvVar19;
  ulong uVar20;
  uint *puVar21;
  byte bVar22;
  long lVar23;
  ulong uVar24;
  uint uVar25;
  long lVar26;
  long lVar27;
  size_t sVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  long lVar32;
  ulong uVar33;
  ulong uVar34;
  undefined8 *puVar35;
  undefined8 *puVar36;
  ulong uVar37;
  size_t sVar38;
  size_t sVar39;
  size_t sVar40;
  long lVar41;
  ulong uVar42;
  long lVar43;
  ulong uVar44;
  undefined8 uVar45;
  ulong uVar46;
  ulong uVar47;
  ulong uVar48;
  void *pvVar49;
  long lVar50;
  ulong uVar51;
  code *pcVar52;
  undefined8 *puVar53;
  uint uVar54;
  ulong uVar55;
  ulong uVar56;
  void *pvVar57;
  undefined8 *puVar58;
  ulong uVar59;
  ulong uVar60;
  
  puVar14 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar13 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  if (param_1 == param_2) {
    return param_1;
  }
  lVar9 = *(long *)(param_3 + 0x10);
  lVar11 = *(long *)(param_3 + 0x18);
  lVar23 = *(long *)(lVar9 + -8);
  lVar26 = *(long *)(lVar11 + -8);
  uVar31 = (ulong)*(byte *)(lVar26 + 0x50);
  uVar20 = *(long *)(lVar23 + 0x40) + uVar31;
  lVar27 = *(long *)(lVar26 + 0x40);
  lVar10 = *(long *)(param_3 + 0x20);
  lVar32 = *(long *)(lVar10 + -8);
  uVar37 = (ulong)*(byte *)(lVar32 + 0x50);
  sVar28 = *(size_t *)(lVar32 + 0x40);
  if (*(int *)(lVar32 + 0x54) == 0) {
    sVar28 = sVar28 + 1;
  }
  uVar33 = sVar28 + (lVar27 + uVar37 + (uVar20 & (uVar31 ^ 0xffffffffffffffff)) &
                    (uVar37 ^ 0xffffffffffffffff));
  lVar15 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),lVar9,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar50 = *(long *)(lVar15 + -8);
  bVar22 = *(byte *)(lVar50 + 0x50);
  uVar56 = (ulong)bVar22;
  lVar16 = 0;
  _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_3 + 0x30),lVar11,puVar14,puVar13);
  lVar43 = *(long *)(lVar16 + -8);
  bVar12 = *(byte *)(lVar43 + 0x50);
  uVar59 = (ulong)bVar12;
  uVar55 = uVar59 | 7;
  lVar17 = 0;
  _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_3 + 0x38),lVar10,puVar14,puVar13);
  lVar41 = *(long *)(lVar17 + -8);
  uVar24 = (ulong)*(byte *)(lVar41 + 0x50);
  uVar42 = uVar24 | 7;
  uVar29 = (ulong)(byte)(bVar12 | bVar22 | *(byte *)(lVar41 + 0x50));
  uVar47 = uVar29 | 7;
  uVar46 = uVar56 + 8;
  sVar38 = *(size_t *)(lVar50 + 0x40);
  if (*(int *)(lVar50 + 0x54) == 0) {
    sVar38 = sVar38 + 1;
  }
  lVar1 = (uVar46 & (uVar56 ^ 0xffffffffffffffff)) + sVar38 + 1;
  uVar44 = lVar1 + uVar55;
  uVar2 = uVar59 + 8;
  sVar39 = *(size_t *)(lVar43 + 0x40);
  if (*(int *)(lVar43 + 0x54) == 0) {
    sVar39 = sVar39 + 1;
  }
  lVar3 = (uVar2 & (uVar59 ^ 0xffffffffffffffff)) + sVar39 + 1;
  lVar6 = lVar3 + uVar42;
  uVar4 = uVar24 + 8;
  sVar40 = *(size_t *)(lVar41 + 0x40);
  if (*(int *)(lVar41 + 0x54) == 0) {
    sVar40 = sVar40 + 1;
  }
  lVar7 = (uVar4 & (uVar24 ^ 0xffffffffffffffff)) + sVar40 +
          (lVar6 + (uVar44 & (uVar55 ^ 0xffffffffffffffff)) & (uVar42 ^ 0xffffffffffffffff));
  lVar5 = lVar7 + 1;
  uVar30 = lVar5 + (uVar29 + 8 & (uVar47 ^ 0xffffffffffffffff)) + 7 & 0xfffffffffffffff8;
  uVar29 = uVar30 + 8;
  if (uVar29 <= uVar33) {
    uVar29 = uVar33;
  }
  uVar30 = uVar30 + 0x10;
  if (uVar30 <= uVar29) {
    uVar30 = uVar29;
  }
  if (uVar30 < 9) {
    uVar30 = 8;
  }
  uVar54 = (uint)uVar30;
  bVar22 = *(byte *)((long)param_1 + uVar30);
  uVar25 = (uint)bVar22;
  if (4 < bVar22) {
    uVar8 = 4;
    if (uVar54 < 4) {
      uVar8 = uVar54;
    }
    if ((int)uVar8 < 2) {
      if (uVar8 == 0) goto LAB_10075ef0c;
      uVar25 = (uint)(byte)*param_1;
    }
    else if (uVar8 == 2) {
      uVar25 = (uint)(ushort)*param_1;
    }
    else if (uVar8 == 3) {
      uVar25 = (uint)(uint3)*param_1;
    }
    else {
      uVar25 = *param_1;
    }
    if (uVar54 < 4) {
      uVar25 = uVar25 | bVar22 - 5 << (ulong)(uVar54 << 3 & 0x1f);
    }
    uVar25 = uVar25 + 5;
  }
LAB_10075ef0c:
  uVar31 = ~uVar31;
  uVar33 = ~uVar37;
  uVar29 = ~uVar47;
  uVar56 = ~uVar56;
  uVar34 = ~uVar55;
  uVar59 = ~uVar59;
  uVar60 = ~uVar42;
  uVar24 = ~uVar24;
  if ((int)uVar25 < 2) {
    if (uVar25 == 0) {
      (**(code **)(lVar23 + 8))(param_1,lVar9);
      uVar44 = (ulong)(uVar20 + (long)param_1) & uVar31;
      (**(code **)(lVar26 + 8))(uVar44,lVar11);
      uVar44 = uVar44 + lVar27 + uVar37;
      uVar18 = uVar44 & uVar33;
      (**(code **)(lVar32 + 0x30))(uVar18,1,lVar10);
      if ((int)uVar18 == 0) {
        (**(code **)(lVar32 + 8))(uVar44 & uVar33,lVar10);
      }
    }
    else if (uVar25 == 1) {
      _swift_release(*(undefined8 *)param_1);
      uVar48 = (ulong)((long)param_1 + uVar47 + 8) & uVar29;
      uVar18 = uVar46 + uVar48 & uVar56;
      (**(code **)(lVar50 + 0x30))(uVar18,1,lVar15);
      if ((int)uVar18 == 0) {
        (**(code **)(lVar50 + 8))(uVar46 + uVar48 & uVar56,lVar15);
      }
      uVar51 = uVar44 + uVar48 & uVar34;
      uVar44 = uVar2 + uVar51;
      uVar18 = uVar44 & uVar59;
      (**(code **)(lVar43 + 0x30))(uVar18,1,lVar16);
      if ((int)uVar18 == 0) {
        (**(code **)(lVar43 + 8))(uVar44 & uVar59,lVar16);
      }
      uVar44 = uVar4 + (lVar6 + uVar51 & uVar60);
      uVar18 = uVar44 & uVar24;
      (**(code **)(lVar41 + 0x30))(uVar18,1,lVar17);
      if ((int)uVar18 == 0) {
        (**(code **)(lVar41 + 8))(uVar44 & uVar24,lVar17);
      }
      _swift_release(*(undefined8 *)(lVar5 + uVar48 + 7 & 0xfffffffffffffff8));
    }
  }
  else if (uVar25 == 2) {
    _swift_release(*(undefined8 *)param_1);
    uVar48 = (ulong)((long)param_1 + uVar47 + 8) & uVar29;
    uVar18 = uVar46 + uVar48 & uVar56;
    (**(code **)(lVar50 + 0x30))(uVar18,1,lVar15);
    if ((int)uVar18 == 0) {
      (**(code **)(lVar50 + 8))(uVar46 + uVar48 & uVar56,lVar15);
    }
    uVar51 = uVar44 + uVar48 & uVar34;
    uVar44 = uVar2 + uVar51;
    uVar18 = uVar44 & uVar59;
    (**(code **)(lVar43 + 0x30))(uVar18,1,lVar16);
    if ((int)uVar18 == 0) {
      (**(code **)(lVar43 + 8))(uVar44 & uVar59,lVar16);
    }
    uVar44 = uVar4 + (lVar6 + uVar51 & uVar60);
    uVar18 = uVar44 & uVar24;
    (**(code **)(lVar41 + 0x30))(uVar18,1,lVar17);
    if ((int)uVar18 == 0) {
      (**(code **)(lVar41 + 8))(uVar44 & uVar24,lVar17);
    }
    _swift_release(*(undefined8 *)((lVar5 + uVar48 + 7 & 0xfffffffffffffff8) + 8));
  }
  else if (uVar25 == 3) {
    _swift_release(*(undefined8 *)param_1);
  }
  else if (uVar25 == 4) {
    _swift_errorRelease(*(undefined8 *)param_1);
  }
  bVar22 = *(byte *)((long)param_2 + uVar30);
  uVar25 = (uint)bVar22;
  if (bVar22 < 5) {
    if (1 < bVar22) goto LAB_10075f2ac;
  }
  else {
    uVar8 = 4;
    if (uVar54 < 4) {
      uVar8 = uVar54;
    }
    if ((int)uVar8 < 2) {
      if (uVar8 != 0) {
        uVar25 = (uint)(byte)*param_2;
        goto joined_r0x00010075f28c;
      }
    }
    else {
      if (uVar8 == 2) {
        uVar25 = (uint)(ushort)*param_2;
      }
      else if (uVar8 == 3) {
        uVar25 = (uint)(uint3)*param_2;
      }
      else {
        uVar25 = *param_2;
      }
joined_r0x00010075f28c:
      if (uVar54 < 4) {
        uVar25 = (uVar25 | bVar22 - 5 << (ulong)(uVar54 << 3 & 0x1f)) + 5;
      }
      else {
        uVar25 = uVar25 + 5;
      }
    }
    if (1 < (int)uVar25) {
LAB_10075f2ac:
      if (uVar25 != 2) {
        if (uVar25 == 3) {
          *(undefined8 *)param_1 = *(undefined8 *)param_2;
          bVar22 = 3;
          goto LAB_10075f8a4;
        }
        if (uVar25 == 4) {
          uVar45 = *(undefined8 *)param_2;
          _swift_errorRetain(uVar45);
          *(undefined8 *)param_1 = uVar45;
          *(byte *)((long)param_1 + uVar30) = 4;
          return param_1;
        }
        goto LAB_10075f4bc;
      }
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      puVar36 = (undefined8 *)((ulong)((long)param_1 + uVar47 + 8) & uVar29);
      puVar35 = (undefined8 *)((ulong)((long)param_2 + uVar47 + 8) & uVar29);
      *puVar36 = *puVar35;
      pvVar49 = (void *)(uVar46 + (long)puVar36 & uVar56);
      pvVar57 = (void *)(uVar46 + (long)puVar35 & uVar56);
      pcVar52 = *(code **)(lVar50 + 0x30);
      _swift_retain();
      pvVar19 = pvVar57;
      (*pcVar52)(pvVar57,1,lVar15);
      if ((int)pvVar19 == 0) {
        (**(code **)(lVar50 + 0x10))(pvVar49,pvVar57,lVar15);
        (**(code **)(lVar50 + 0x38))(pvVar49,0,1,lVar15);
      }
      else {
        _memcpy(pvVar49,pvVar57,sVar38);
      }
      *(undefined1 *)((long)pvVar49 + sVar38) = *(undefined1 *)((long)pvVar57 + sVar38);
      puVar53 = (undefined8 *)((long)puVar36 + lVar1 + uVar55 & uVar34);
      puVar58 = (undefined8 *)((long)puVar35 + lVar1 + uVar55 & uVar34);
      *puVar53 = *puVar58;
      pvVar49 = (void *)(uVar2 + (long)puVar53 & uVar59);
      pvVar57 = (void *)(uVar2 + (long)puVar58 & uVar59);
      pvVar19 = pvVar57;
      (**(code **)(lVar43 + 0x30))(pvVar57,1,lVar16);
      if ((int)pvVar19 == 0) {
        (**(code **)(lVar43 + 0x10))(pvVar49,pvVar57,lVar16);
        (**(code **)(lVar43 + 0x38))(pvVar49,0,1,lVar16);
      }
      else {
        _memcpy(pvVar49,pvVar57,sVar39);
      }
      *(undefined1 *)((long)pvVar49 + sVar39) = *(undefined1 *)((long)pvVar57 + sVar39);
      puVar53 = (undefined8 *)((long)puVar53 + lVar3 + uVar42 & uVar60);
      puVar58 = (undefined8 *)((long)puVar58 + lVar3 + uVar42 & uVar60);
      *puVar53 = *puVar58;
      pvVar49 = (void *)(uVar4 + (long)puVar53 & uVar24);
      pvVar57 = (void *)(uVar4 + (long)puVar58 & uVar24);
      pvVar19 = pvVar57;
      (**(code **)(lVar41 + 0x30))(pvVar57,1,lVar17);
      if ((int)pvVar19 == 0) {
        (**(code **)(lVar41 + 0x10))(pvVar49,pvVar57,lVar17);
        (**(code **)(lVar41 + 0x38))(pvVar49,0,1,lVar17);
      }
      else {
        _memcpy(pvVar49,pvVar57,sVar40);
      }
      *(undefined1 *)((long)pvVar49 + sVar40) = *(undefined1 *)((long)pvVar57 + sVar40);
      puVar36 = (undefined8 *)((long)puVar36 + lVar7 + 8 & 0xfffffffffffffff8);
      puVar35 = (undefined8 *)((long)puVar35 + lVar7 + 8 & 0xfffffffffffffff8);
      *puVar36 = *puVar35;
      puVar36[1] = puVar35[1];
      bVar22 = 2;
      goto LAB_10075f8a4;
    }
  }
  if (uVar25 == 0) {
    (**(code **)(lVar23 + 0x10))(param_1,param_2,lVar9);
    uVar46 = (ulong)(uVar20 + (long)param_1) & uVar31;
    uVar31 = (ulong)(uVar20 + (long)param_2) & uVar31;
    (**(code **)(lVar26 + 0x10))(uVar46,uVar31,lVar11);
    uVar46 = uVar46 + lVar27 + uVar37;
    uVar31 = uVar31 + lVar27 + uVar37;
    uVar20 = uVar31 & uVar33;
    (**(code **)(lVar32 + 0x30))(uVar20,1,lVar10);
    if ((int)uVar20 != 0) {
      _memcpy((void *)(uVar46 & uVar33),(void *)(uVar31 & uVar33),sVar28);
      *(byte *)((long)param_1 + uVar30) = 0;
      return param_1;
    }
    (**(code **)(lVar32 + 0x10))(uVar46 & uVar33,uVar31 & uVar33,lVar10);
    (**(code **)(lVar32 + 0x38))(uVar46 & uVar33,0,1,lVar10);
    *(byte *)((long)param_1 + uVar30) = 0;
    return param_1;
  }
  if (uVar25 != 1) {
LAB_10075f4bc:
    puVar21 = _memcpy(param_1,param_2,uVar30 + 1);
    return puVar21;
  }
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  puVar36 = (undefined8 *)((ulong)((long)param_1 + uVar47 + 8) & uVar29);
  puVar35 = (undefined8 *)((ulong)((long)param_2 + uVar47 + 8) & uVar29);
  *puVar36 = *puVar35;
  pvVar49 = (void *)(uVar46 + (long)puVar36 & uVar56);
  pvVar57 = (void *)(uVar46 + (long)puVar35 & uVar56);
  pcVar52 = *(code **)(lVar50 + 0x30);
  _swift_retain();
  pvVar19 = pvVar57;
  (*pcVar52)(pvVar57,1,lVar15);
  if ((int)pvVar19 == 0) {
    (**(code **)(lVar50 + 0x10))(pvVar49,pvVar57,lVar15);
    (**(code **)(lVar50 + 0x38))(pvVar49,0,1,lVar15);
  }
  else {
    _memcpy(pvVar49,pvVar57,sVar38);
  }
  *(undefined1 *)((long)pvVar49 + sVar38) = *(undefined1 *)((long)pvVar57 + sVar38);
  puVar53 = (undefined8 *)((long)puVar36 + lVar1 + uVar55 & uVar34);
  puVar58 = (undefined8 *)((long)puVar35 + lVar1 + uVar55 & uVar34);
  *puVar53 = *puVar58;
  pvVar49 = (void *)(uVar2 + (long)puVar53 & uVar59);
  pvVar57 = (void *)(uVar2 + (long)puVar58 & uVar59);
  pvVar19 = pvVar57;
  (**(code **)(lVar43 + 0x30))(pvVar57,1,lVar16);
  if ((int)pvVar19 == 0) {
    (**(code **)(lVar43 + 0x10))(pvVar49,pvVar57,lVar16);
    (**(code **)(lVar43 + 0x38))(pvVar49,0,1,lVar16);
  }
  else {
    _memcpy(pvVar49,pvVar57,sVar39);
  }
  *(undefined1 *)((long)pvVar49 + sVar39) = *(undefined1 *)((long)pvVar57 + sVar39);
  puVar53 = (undefined8 *)((long)puVar53 + lVar3 + uVar42 & uVar60);
  puVar58 = (undefined8 *)((long)puVar58 + lVar3 + uVar42 & uVar60);
  *puVar53 = *puVar58;
  pvVar49 = (void *)(uVar4 + (long)puVar53 & uVar24);
  pvVar57 = (void *)(uVar4 + (long)puVar58 & uVar24);
  pvVar19 = pvVar57;
  (**(code **)(lVar41 + 0x30))(pvVar57,1,lVar17);
  if ((int)pvVar19 == 0) {
    (**(code **)(lVar41 + 0x10))(pvVar49,pvVar57,lVar17);
    (**(code **)(lVar41 + 0x38))(pvVar49,0,1,lVar17);
  }
  else {
    _memcpy(pvVar49,pvVar57,sVar40);
  }
  *(undefined1 *)((long)pvVar49 + sVar40) = *(undefined1 *)((long)pvVar57 + sVar40);
  *(undefined8 *)((long)puVar36 + lVar7 + 8 & 0xfffffffffffffff8) =
       *(undefined8 *)((long)puVar35 + lVar7 + 8 & 0xfffffffffffffff8);
  bVar22 = 1;
LAB_10075f8a4:
  *(byte *)((long)param_1 + uVar30) = bVar22;
  _swift_retain();
  return param_1;
}



/* Address: 0x10075f8d0 | FUN_10075f8d0 */

undefined8 * FUN_10075f8d0(undefined8 *param_1,uint *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  byte bVar9;
  byte bVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  void *pvVar16;
  undefined8 *puVar17;
  long lVar18;
  ulong uVar19;
  undefined1 uVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  size_t sVar25;
  ulong uVar26;
  ulong uVar27;
  long lVar28;
  ulong uVar29;
  uint uVar30;
  ulong uVar31;
  ulong uVar32;
  undefined8 *puVar33;
  size_t sVar34;
  size_t sVar35;
  size_t sVar36;
  long lVar37;
  ulong uVar38;
  undefined8 *puVar39;
  ulong uVar40;
  void *pvVar41;
  ulong uVar42;
  long lVar43;
  ulong uVar44;
  ulong uVar45;
  ulong uVar46;
  uint uVar47;
  void *pvVar48;
  long lVar49;
  undefined8 *puVar50;
  ulong uVar51;
  
  puVar12 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar11 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  lVar18 = *(long *)(param_3 + 0x10);
  lVar7 = *(long *)(param_3 + 0x18);
  lVar8 = *(long *)(param_3 + 0x20);
  lVar21 = *(long *)(lVar18 + -8);
  lVar23 = *(long *)(lVar7 + -8);
  uVar27 = (ulong)*(byte *)(lVar23 + 0x50);
  uVar44 = *(long *)(lVar21 + 0x40) + uVar27;
  lVar24 = *(long *)(lVar23 + 0x40);
  lVar28 = *(long *)(lVar8 + -8);
  uVar31 = (ulong)*(byte *)(lVar28 + 0x50);
  sVar25 = *(size_t *)(lVar28 + 0x40);
  if (*(int *)(lVar28 + 0x54) == 0) {
    sVar25 = sVar25 + 1;
  }
  uVar19 = sVar25 + (lVar24 + uVar31 + (uVar44 & (uVar27 ^ 0xffffffffffffffff)) &
                    (uVar31 ^ 0xffffffffffffffff));
  lVar13 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),lVar18,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar37 = *(long *)(lVar13 + -8);
  bVar9 = *(byte *)(lVar37 + 0x50);
  uVar51 = (ulong)bVar9;
  lVar14 = 0;
  _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_3 + 0x30),lVar7,puVar12,puVar11);
  lVar49 = *(long *)(lVar14 + -8);
  bVar10 = *(byte *)(lVar49 + 0x50);
  uVar40 = (ulong)bVar10;
  uVar45 = uVar40 | 7;
  lVar15 = 0;
  _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_3 + 0x38),lVar8,puVar12,puVar11);
  lVar43 = *(long *)(lVar15 + -8);
  uVar29 = (ulong)*(byte *)(lVar43 + 0x50);
  uVar46 = uVar29 | 7;
  uVar22 = (ulong)(byte)(bVar10 | bVar9 | *(byte *)(lVar43 + 0x50));
  uVar26 = uVar22 | 7;
  uVar42 = uVar51 + 8;
  sVar34 = *(size_t *)(lVar37 + 0x40);
  if (*(int *)(lVar37 + 0x54) == 0) {
    sVar34 = sVar34 + 1;
  }
  lVar1 = (uVar42 & (uVar51 ^ 0xffffffffffffffff)) + 1;
  uVar2 = uVar40 + 8;
  sVar35 = *(size_t *)(lVar49 + 0x40);
  if (*(int *)(lVar49 + 0x54) == 0) {
    sVar35 = sVar35 + 1;
  }
  lVar3 = (uVar2 & (uVar40 ^ 0xffffffffffffffff)) + 1;
  uVar4 = uVar29 + 8;
  sVar36 = *(size_t *)(lVar43 + 0x40);
  if (*(int *)(lVar43 + 0x54) == 0) {
    sVar36 = sVar36 + 1;
  }
  lVar5 = (uVar4 & (uVar29 ^ 0xffffffffffffffff)) + sVar36 +
          (lVar3 + uVar46 + sVar35 + (lVar1 + uVar45 + sVar34 & (uVar45 ^ 0xffffffffffffffff)) &
          (uVar46 ^ 0xffffffffffffffff));
  uVar32 = lVar5 + (uVar22 + 8 & (uVar26 ^ 0xffffffffffffffff)) + 8 & 0xfffffffffffffff8;
  uVar22 = uVar32 + 8;
  if (uVar22 <= uVar19) {
    uVar22 = uVar19;
  }
  uVar32 = uVar32 + 0x10;
  if (uVar32 <= uVar22) {
    uVar32 = uVar22;
  }
  if (uVar32 < 9) {
    uVar32 = 8;
  }
  bVar9 = *(byte *)((long)param_2 + uVar32);
  uVar30 = (uint)bVar9;
  if (4 < bVar9) {
    uVar47 = (uint)uVar32;
    uVar6 = 4;
    if (uVar47 < 4) {
      uVar6 = uVar47;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_10075fb48;
      uVar30 = (uint)(byte)*param_2;
    }
    else if (uVar6 == 2) {
      uVar30 = (uint)(ushort)*param_2;
    }
    else if (uVar6 == 3) {
      uVar30 = (uint)(uint3)*param_2;
    }
    else {
      uVar30 = *param_2;
    }
    if (uVar47 < 4) {
      uVar30 = uVar30 | bVar9 - 5 << (ulong)((uVar47 & 3) << 3);
    }
    uVar30 = uVar30 + 5;
  }
LAB_10075fb48:
  uVar22 = ~uVar26;
  uVar51 = ~uVar51;
  uVar38 = ~uVar45;
  uVar40 = ~uVar40;
  uVar19 = ~uVar46;
  uVar29 = ~uVar29;
  if ((int)uVar30 < 2) {
    if (uVar30 == 0) {
      uVar19 = ~uVar31;
      (**(code **)(lVar21 + 0x20))(param_1,param_2,lVar18);
      uVar42 = uVar44 + (long)param_1 & ~uVar27;
      uVar44 = (ulong)(uVar44 + (long)param_2) & ~uVar27;
      (**(code **)(lVar23 + 0x20))(uVar42,uVar44,lVar7);
      lVar24 = lVar24 + uVar31;
      uVar42 = uVar42 + lVar24;
      uVar44 = uVar44 + lVar24;
      uVar27 = uVar44 & uVar19;
      (**(code **)(lVar28 + 0x30))(uVar27,1,lVar8);
      if ((int)uVar27 == 0) {
        (**(code **)(lVar28 + 0x20))(uVar42 & uVar19,uVar44 & uVar19,lVar8);
        (**(code **)(lVar28 + 0x38))(uVar42 & uVar19,0,1,lVar8);
      }
      else {
        _memcpy((void *)(uVar42 & uVar19),(void *)(uVar44 & uVar19),sVar25);
      }
      *(undefined1 *)((long)param_1 + uVar32) = 0;
    }
    else {
      if (uVar30 != 1) {
LAB_10075fd74:
        puVar17 = _memcpy(param_1,param_2,uVar32 + 1);
        return puVar17;
      }
      *param_1 = *(undefined8 *)param_2;
      puVar33 = (undefined8 *)((long)param_1 + uVar26 + 8 & uVar22);
      puVar17 = (undefined8 *)((ulong)((long)param_2 + uVar26 + 8) & uVar22);
      *puVar33 = *puVar17;
      pvVar48 = (void *)(uVar42 + (long)puVar33 & uVar51);
      pvVar41 = (void *)(uVar42 + (long)puVar17 & uVar51);
      pvVar16 = pvVar41;
      (**(code **)(lVar37 + 0x30))(pvVar41,1,lVar13);
      if ((int)pvVar16 == 0) {
        (**(code **)(lVar37 + 0x20))(pvVar48,pvVar41,lVar13);
        (**(code **)(lVar37 + 0x38))(pvVar48,0,1,lVar13);
      }
      else {
        _memcpy(pvVar48,pvVar41,sVar34);
      }
      *(undefined1 *)((long)pvVar48 + sVar34) = *(undefined1 *)((long)pvVar41 + sVar34);
      puVar50 = (undefined8 *)((long)puVar33 + lVar1 + sVar34 + uVar45 & uVar38);
      puVar39 = (undefined8 *)((long)puVar17 + lVar1 + sVar34 + uVar45 & uVar38);
      *puVar50 = *puVar39;
      pvVar48 = (void *)(uVar2 + (long)puVar50 & uVar40);
      pvVar41 = (void *)(uVar2 + (long)puVar39 & uVar40);
      pvVar16 = pvVar41;
      (**(code **)(lVar49 + 0x30))(pvVar41,1,lVar14);
      if ((int)pvVar16 == 0) {
        (**(code **)(lVar49 + 0x20))(pvVar48,pvVar41,lVar14);
        (**(code **)(lVar49 + 0x38))(pvVar48,0,1,lVar14);
      }
      else {
        _memcpy(pvVar48,pvVar41,sVar35);
      }
      *(undefined1 *)((long)pvVar48 + sVar35) = *(undefined1 *)((long)pvVar41 + sVar35);
      puVar50 = (undefined8 *)((long)puVar50 + lVar3 + sVar35 + uVar46 & uVar19);
      puVar39 = (undefined8 *)((long)puVar39 + lVar3 + sVar35 + uVar46 & uVar19);
      *puVar50 = *puVar39;
      pvVar41 = (void *)(uVar4 + (long)puVar50 & uVar29);
      pvVar48 = (void *)(uVar4 + (long)puVar39 & uVar29);
      pvVar16 = pvVar48;
      (**(code **)(lVar43 + 0x30))(pvVar48,1,lVar15);
      if ((int)pvVar16 == 0) {
        (**(code **)(lVar43 + 0x20))(pvVar41,pvVar48,lVar15);
        (**(code **)(lVar43 + 0x38))(pvVar41,0,1,lVar15);
      }
      else {
        _memcpy(pvVar41,pvVar48,sVar36);
      }
      *(undefined1 *)((long)pvVar41 + sVar36) = *(undefined1 *)((long)pvVar48 + sVar36);
      *(undefined8 *)((long)puVar33 + lVar5 + 8 & 0xfffffffffffffff8) =
           *(undefined8 *)((long)puVar17 + lVar5 + 8 & 0xfffffffffffffff8);
      *(undefined1 *)((long)param_1 + uVar32) = 1;
    }
  }
  else if (uVar30 == 2) {
    *param_1 = *(undefined8 *)param_2;
    puVar33 = (undefined8 *)((long)param_1 + uVar26 + 8 & uVar22);
    puVar17 = (undefined8 *)((ulong)((long)param_2 + uVar26 + 8) & uVar22);
    *puVar33 = *puVar17;
    pvVar48 = (void *)(uVar42 + (long)puVar33 & uVar51);
    pvVar41 = (void *)(uVar42 + (long)puVar17 & uVar51);
    pvVar16 = pvVar41;
    (**(code **)(lVar37 + 0x30))(pvVar41,1,lVar13);
    if ((int)pvVar16 == 0) {
      (**(code **)(lVar37 + 0x20))(pvVar48,pvVar41,lVar13);
      (**(code **)(lVar37 + 0x38))(pvVar48,0,1,lVar13);
    }
    else {
      _memcpy(pvVar48,pvVar41,sVar34);
    }
    *(undefined1 *)((long)pvVar48 + sVar34) = *(undefined1 *)((long)pvVar41 + sVar34);
    puVar50 = (undefined8 *)((long)puVar33 + lVar1 + sVar34 + uVar45 & uVar38);
    puVar39 = (undefined8 *)((long)puVar17 + lVar1 + sVar34 + uVar45 & uVar38);
    *puVar50 = *puVar39;
    pvVar48 = (void *)(uVar2 + (long)puVar50 & uVar40);
    pvVar41 = (void *)(uVar2 + (long)puVar39 & uVar40);
    pvVar16 = pvVar41;
    (**(code **)(lVar49 + 0x30))(pvVar41,1,lVar14);
    if ((int)pvVar16 == 0) {
      (**(code **)(lVar49 + 0x20))(pvVar48,pvVar41,lVar14);
      (**(code **)(lVar49 + 0x38))(pvVar48,0,1,lVar14);
    }
    else {
      _memcpy(pvVar48,pvVar41,sVar35);
    }
    *(undefined1 *)((long)pvVar48 + sVar35) = *(undefined1 *)((long)pvVar41 + sVar35);
    puVar50 = (undefined8 *)((long)puVar50 + lVar3 + sVar35 + uVar46 & uVar19);
    puVar39 = (undefined8 *)((long)puVar39 + lVar3 + sVar35 + uVar46 & uVar19);
    *puVar50 = *puVar39;
    pvVar41 = (void *)(uVar4 + (long)puVar50 & uVar29);
    pvVar48 = (void *)(uVar4 + (long)puVar39 & uVar29);
    pvVar16 = pvVar48;
    (**(code **)(lVar43 + 0x30))(pvVar48,1,lVar15);
    if ((int)pvVar16 == 0) {
      (**(code **)(lVar43 + 0x20))(pvVar41,pvVar48,lVar15);
      (**(code **)(lVar43 + 0x38))(pvVar41,0,1,lVar15);
    }
    else {
      _memcpy(pvVar41,pvVar48,sVar36);
    }
    *(undefined1 *)((long)pvVar41 + sVar36) = *(undefined1 *)((long)pvVar48 + sVar36);
    puVar33 = (undefined8 *)((long)puVar33 + lVar5 + 8 & 0xfffffffffffffff8);
    puVar17 = (undefined8 *)((long)puVar17 + lVar5 + 8 & 0xfffffffffffffff8);
    *puVar33 = *puVar17;
    puVar33[1] = puVar17[1];
    *(undefined1 *)((long)param_1 + uVar32) = 2;
  }
  else {
    if (uVar30 == 3) {
      *param_1 = *(undefined8 *)param_2;
      uVar20 = 3;
    }
    else {
      if (uVar30 != 4) goto LAB_10075fd74;
      *param_1 = *(undefined8 *)param_2;
      uVar20 = 4;
    }
    *(undefined1 *)((long)param_1 + uVar32) = uVar20;
  }
  return param_1;
}



/* Address: 0x1007601bc | FUN_1007601bc */

uint * FUN_1007601bc(uint *param_1,uint *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  byte bVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  undefined8 uVar19;
  void *pvVar20;
  ulong uVar21;
  uint *puVar22;
  byte bVar23;
  long lVar24;
  ulong uVar25;
  uint uVar26;
  long lVar27;
  long lVar28;
  size_t sVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  long lVar33;
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  size_t sVar37;
  undefined8 *puVar38;
  size_t sVar39;
  size_t sVar40;
  long lVar41;
  ulong uVar42;
  long lVar43;
  ulong uVar44;
  ulong uVar45;
  long lVar46;
  ulong uVar47;
  ulong uVar48;
  void *pvVar49;
  ulong uVar50;
  ulong uVar51;
  undefined8 *puVar52;
  uint uVar53;
  ulong uVar54;
  void *pvVar55;
  undefined8 *puVar56;
  undefined8 *puVar57;
  ulong uVar58;
  ulong uVar59;
  
  puVar14 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar13 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  if (param_1 == param_2) {
    return param_1;
  }
  lVar9 = *(long *)(param_3 + 0x10);
  lVar11 = *(long *)(param_3 + 0x18);
  lVar24 = *(long *)(lVar9 + -8);
  lVar27 = *(long *)(lVar11 + -8);
  uVar32 = (ulong)*(byte *)(lVar27 + 0x50);
  uVar21 = *(long *)(lVar24 + 0x40) + uVar32;
  lVar28 = *(long *)(lVar27 + 0x40);
  lVar10 = *(long *)(param_3 + 0x20);
  lVar33 = *(long *)(lVar10 + -8);
  uVar36 = (ulong)*(byte *)(lVar33 + 0x50);
  sVar29 = *(size_t *)(lVar33 + 0x40);
  if (*(int *)(lVar33 + 0x54) == 0) {
    sVar29 = sVar29 + 1;
  }
  uVar34 = sVar29 + (lVar28 + uVar36 + (uVar21 & (uVar32 ^ 0xffffffffffffffff)) &
                    (uVar36 ^ 0xffffffffffffffff));
  lVar15 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),lVar9,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar46 = *(long *)(lVar15 + -8);
  bVar23 = *(byte *)(lVar46 + 0x50);
  uVar58 = (ulong)bVar23;
  lVar16 = 0;
  _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_3 + 0x30),lVar11,puVar14,puVar13);
  lVar43 = *(long *)(lVar16 + -8);
  bVar12 = *(byte *)(lVar43 + 0x50);
  uVar54 = (ulong)bVar12;
  uVar59 = uVar54 | 7;
  lVar17 = 0;
  _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_3 + 0x38),lVar10,puVar14,puVar13);
  lVar41 = *(long *)(lVar17 + -8);
  uVar25 = (ulong)*(byte *)(lVar41 + 0x50);
  uVar42 = uVar25 | 7;
  uVar30 = (ulong)(byte)(bVar12 | bVar23 | *(byte *)(lVar41 + 0x50));
  uVar50 = uVar30 | 7;
  uVar45 = uVar58 + 8;
  sVar37 = *(size_t *)(lVar46 + 0x40);
  if (*(int *)(lVar46 + 0x54) == 0) {
    sVar37 = sVar37 + 1;
  }
  lVar1 = (uVar45 & (uVar58 ^ 0xffffffffffffffff)) + sVar37 + 1;
  uVar44 = lVar1 + uVar59;
  uVar2 = uVar54 + 8;
  sVar39 = *(size_t *)(lVar43 + 0x40);
  if (*(int *)(lVar43 + 0x54) == 0) {
    sVar39 = sVar39 + 1;
  }
  lVar3 = (uVar2 & (uVar54 ^ 0xffffffffffffffff)) + sVar39 + 1;
  lVar6 = lVar3 + uVar42;
  uVar4 = uVar25 + 8;
  sVar40 = *(size_t *)(lVar41 + 0x40);
  if (*(int *)(lVar41 + 0x54) == 0) {
    sVar40 = sVar40 + 1;
  }
  lVar7 = (uVar4 & (uVar25 ^ 0xffffffffffffffff)) + sVar40 +
          (lVar6 + (uVar44 & (uVar59 ^ 0xffffffffffffffff)) & (uVar42 ^ 0xffffffffffffffff));
  lVar5 = lVar7 + 1;
  uVar31 = lVar5 + (uVar30 + 8 & (uVar50 ^ 0xffffffffffffffff)) + 7 & 0xfffffffffffffff8;
  uVar30 = uVar31 + 8;
  if (uVar30 <= uVar34) {
    uVar30 = uVar34;
  }
  uVar31 = uVar31 + 0x10;
  if (uVar31 <= uVar30) {
    uVar31 = uVar30;
  }
  if (uVar31 < 9) {
    uVar31 = 8;
  }
  uVar53 = (uint)uVar31;
  bVar23 = *(byte *)((long)param_1 + uVar31);
  uVar26 = (uint)bVar23;
  if (4 < bVar23) {
    uVar8 = 4;
    if (uVar53 < 4) {
      uVar8 = uVar53;
    }
    if ((int)uVar8 < 2) {
      if (uVar8 == 0) goto LAB_10076046c;
      uVar26 = (uint)(byte)*param_1;
    }
    else if (uVar8 == 2) {
      uVar26 = (uint)(ushort)*param_1;
    }
    else if (uVar8 == 3) {
      uVar26 = (uint)(uint3)*param_1;
    }
    else {
      uVar26 = *param_1;
    }
    if (uVar53 < 4) {
      uVar26 = uVar26 | bVar23 - 5 << (ulong)(uVar53 << 3 & 0x1f);
    }
    uVar26 = uVar26 + 5;
  }
LAB_10076046c:
  uVar32 = ~uVar32;
  uVar47 = ~uVar36;
  uVar34 = ~uVar50;
  uVar58 = ~uVar58;
  uVar30 = ~uVar59;
  uVar54 = ~uVar54;
  uVar35 = ~uVar42;
  uVar25 = ~uVar25;
  if ((int)uVar26 < 2) {
    if (uVar26 == 0) {
      (**(code **)(lVar24 + 8))(param_1,lVar9);
      uVar44 = (ulong)(uVar21 + (long)param_1) & uVar32;
      (**(code **)(lVar27 + 8))(uVar44,lVar11);
      uVar44 = uVar44 + lVar28 + uVar36;
      uVar18 = uVar44 & uVar47;
      (**(code **)(lVar33 + 0x30))(uVar18,1,lVar10);
      if ((int)uVar18 == 0) {
        (**(code **)(lVar33 + 8))(uVar44 & uVar47,lVar10);
      }
    }
    else if (uVar26 == 1) {
      _swift_release(*(undefined8 *)param_1);
      uVar48 = (ulong)((long)param_1 + uVar50 + 8) & uVar34;
      uVar18 = uVar45 + uVar48 & uVar58;
      (**(code **)(lVar46 + 0x30))(uVar18,1,lVar15);
      if ((int)uVar18 == 0) {
        (**(code **)(lVar46 + 8))(uVar45 + uVar48 & uVar58,lVar15);
      }
      uVar51 = uVar44 + uVar48 & uVar30;
      uVar44 = uVar2 + uVar51;
      uVar18 = uVar44 & uVar54;
      (**(code **)(lVar43 + 0x30))(uVar18,1,lVar16);
      if ((int)uVar18 == 0) {
        (**(code **)(lVar43 + 8))(uVar44 & uVar54,lVar16);
      }
      uVar44 = uVar4 + (lVar6 + uVar51 & uVar35);
      uVar18 = uVar44 & uVar25;
      (**(code **)(lVar41 + 0x30))(uVar18,1,lVar17);
      if ((int)uVar18 == 0) {
        (**(code **)(lVar41 + 8))(uVar44 & uVar25,lVar17);
      }
      uVar44 = lVar5 + uVar48 + 7;
      goto LAB_1007606cc;
    }
  }
  else {
    if (uVar26 == 2) {
      _swift_release(*(undefined8 *)param_1);
      uVar48 = (ulong)((long)param_1 + uVar50 + 8) & uVar34;
      uVar18 = uVar45 + uVar48 & uVar58;
      (**(code **)(lVar46 + 0x30))(uVar18,1,lVar15);
      if ((int)uVar18 == 0) {
        (**(code **)(lVar46 + 8))(uVar45 + uVar48 & uVar58,lVar15);
      }
      uVar51 = uVar44 + uVar48 & uVar30;
      uVar44 = uVar2 + uVar51;
      uVar18 = uVar44 & uVar54;
      (**(code **)(lVar43 + 0x30))(uVar18,1,lVar16);
      if ((int)uVar18 == 0) {
        (**(code **)(lVar43 + 8))(uVar44 & uVar54,lVar16);
      }
      uVar44 = uVar4 + (lVar6 + uVar51 & uVar35);
      uVar18 = uVar44 & uVar25;
      (**(code **)(lVar41 + 0x30))(uVar18,1,lVar17);
      if ((int)uVar18 == 0) {
        (**(code **)(lVar41 + 8))(uVar44 & uVar25,lVar17);
      }
      uVar44 = (lVar5 + uVar48 + 7 & 0xfffffffffffffff8) + 0xf;
LAB_1007606cc:
      uVar19 = *(undefined8 *)(uVar44 & 0xfffffffffffffff8);
    }
    else {
      if (uVar26 != 3) {
        if (uVar26 == 4) {
          _swift_errorRelease(*(undefined8 *)param_1);
        }
        goto LAB_1007606e0;
      }
      uVar19 = *(undefined8 *)param_1;
    }
    _swift_release(uVar19);
  }
LAB_1007606e0:
  bVar23 = *(byte *)((long)param_2 + uVar31);
  uVar26 = (uint)bVar23;
  if (bVar23 < 5) {
    if (1 < bVar23) goto LAB_1007607e4;
  }
  else {
    uVar8 = 4;
    if (uVar53 < 4) {
      uVar8 = uVar53;
    }
    if ((int)uVar8 < 2) {
      if (uVar8 != 0) {
        uVar26 = (uint)(byte)*param_2;
        goto joined_r0x00010076074c;
      }
    }
    else {
      if (uVar8 == 2) {
        uVar26 = (uint)(ushort)*param_2;
      }
      else if (uVar8 == 3) {
        uVar26 = (uint)(uint3)*param_2;
      }
      else {
        uVar26 = *param_2;
      }
joined_r0x00010076074c:
      if (uVar53 < 4) {
        uVar26 = (uVar26 | bVar23 - 5 << (ulong)(uVar53 << 3 & 0x1f)) + 5;
      }
      else {
        uVar26 = uVar26 + 5;
      }
    }
    if (1 < (int)uVar26) {
LAB_1007607e4:
      if (uVar26 != 2) {
        if (uVar26 == 3) {
          *(undefined8 *)param_1 = *(undefined8 *)param_2;
          bVar23 = 3;
          goto LAB_100760e08;
        }
        if (uVar26 == 4) {
          *(undefined8 *)param_1 = *(undefined8 *)param_2;
          bVar23 = 4;
          goto LAB_100760e08;
        }
        goto LAB_100760a04;
      }
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      puVar38 = (undefined8 *)((ulong)((long)param_1 + uVar50 + 8) & uVar34);
      puVar56 = (undefined8 *)((ulong)((long)param_2 + uVar50 + 8) & uVar34);
      *puVar38 = *puVar56;
      pvVar49 = (void *)(uVar45 + (long)puVar38 & uVar58);
      pvVar55 = (void *)(uVar45 + (long)puVar56 & uVar58);
      pvVar20 = pvVar55;
      (**(code **)(lVar46 + 0x30))(pvVar55,1,lVar15);
      if ((int)pvVar20 == 0) {
        (**(code **)(lVar46 + 0x20))(pvVar49,pvVar55,lVar15);
        (**(code **)(lVar46 + 0x38))(pvVar49,0,1,lVar15);
      }
      else {
        _memcpy(pvVar49,pvVar55,sVar37);
      }
      *(undefined1 *)((long)pvVar49 + sVar37) = *(undefined1 *)((long)pvVar55 + sVar37);
      puVar52 = (undefined8 *)((long)puVar38 + lVar1 + uVar59 & uVar30);
      puVar57 = (undefined8 *)((long)puVar56 + lVar1 + uVar59 & uVar30);
      *puVar52 = *puVar57;
      pvVar49 = (void *)(uVar2 + (long)puVar52 & uVar54);
      pvVar55 = (void *)(uVar2 + (long)puVar57 & uVar54);
      pvVar20 = pvVar55;
      (**(code **)(lVar43 + 0x30))(pvVar55,1,lVar16);
      if ((int)pvVar20 == 0) {
        (**(code **)(lVar43 + 0x20))(pvVar49,pvVar55,lVar16);
        (**(code **)(lVar43 + 0x38))(pvVar49,0,1,lVar16);
      }
      else {
        _memcpy(pvVar49,pvVar55,sVar39);
      }
      *(undefined1 *)((long)pvVar49 + sVar39) = *(undefined1 *)((long)pvVar55 + sVar39);
      puVar52 = (undefined8 *)((long)puVar52 + lVar3 + uVar42 & uVar35);
      puVar57 = (undefined8 *)((long)puVar57 + lVar3 + uVar42 & uVar35);
      *puVar52 = *puVar57;
      pvVar49 = (void *)(uVar4 + (long)puVar52 & uVar25);
      pvVar55 = (void *)(uVar4 + (long)puVar57 & uVar25);
      pvVar20 = pvVar55;
      (**(code **)(lVar41 + 0x30))(pvVar55,1,lVar17);
      if ((int)pvVar20 == 0) {
        (**(code **)(lVar41 + 0x20))(pvVar49,pvVar55,lVar17);
        (**(code **)(lVar41 + 0x38))(pvVar49,0,1,lVar17);
      }
      else {
        _memcpy(pvVar49,pvVar55,sVar40);
      }
      *(undefined1 *)((long)pvVar49 + sVar40) = *(undefined1 *)((long)pvVar55 + sVar40);
      puVar38 = (undefined8 *)((long)puVar38 + lVar7 + 8 & 0xfffffffffffffff8);
      puVar56 = (undefined8 *)((long)puVar56 + lVar7 + 8 & 0xfffffffffffffff8);
      *puVar38 = *puVar56;
      puVar38[1] = puVar56[1];
      bVar23 = 2;
      goto LAB_100760e08;
    }
  }
  if (uVar26 == 0) {
    (**(code **)(lVar24 + 0x20))(param_1,param_2,lVar9);
    uVar45 = (ulong)(uVar21 + (long)param_1) & uVar32;
    uVar32 = (ulong)(uVar21 + (long)param_2) & uVar32;
    (**(code **)(lVar27 + 0x20))(uVar45,uVar32,lVar11);
    uVar45 = uVar45 + lVar28 + uVar36;
    uVar32 = uVar32 + lVar28 + uVar36;
    uVar21 = uVar32 & uVar47;
    (**(code **)(lVar33 + 0x30))(uVar21,1,lVar10);
    if ((int)uVar21 != 0) {
      _memcpy((void *)(uVar45 & uVar47),(void *)(uVar32 & uVar47),sVar29);
      *(byte *)((long)param_1 + uVar31) = 0;
      return param_1;
    }
    (**(code **)(lVar33 + 0x20))(uVar45 & uVar47,uVar32 & uVar47,lVar10);
    (**(code **)(lVar33 + 0x38))(uVar45 & uVar47,0,1,lVar10);
    *(byte *)((long)param_1 + uVar31) = 0;
    return param_1;
  }
  if (uVar26 != 1) {
LAB_100760a04:
    puVar22 = _memcpy(param_1,param_2,uVar31 + 1);
    return puVar22;
  }
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  puVar56 = (undefined8 *)((ulong)((long)param_1 + uVar50 + 8) & uVar34);
  puVar38 = (undefined8 *)((ulong)((long)param_2 + uVar50 + 8) & uVar34);
  *puVar56 = *puVar38;
  pvVar49 = (void *)(uVar45 + (long)puVar56 & uVar58);
  pvVar55 = (void *)(uVar45 + (long)puVar38 & uVar58);
  pvVar20 = pvVar55;
  (**(code **)(lVar46 + 0x30))(pvVar55,1,lVar15);
  if ((int)pvVar20 == 0) {
    (**(code **)(lVar46 + 0x20))(pvVar49,pvVar55,lVar15);
    (**(code **)(lVar46 + 0x38))(pvVar49,0,1,lVar15);
  }
  else {
    _memcpy(pvVar49,pvVar55,sVar37);
  }
  *(undefined1 *)((long)pvVar49 + sVar37) = *(undefined1 *)((long)pvVar55 + sVar37);
  puVar52 = (undefined8 *)((long)puVar56 + lVar1 + uVar59 & uVar30);
  puVar57 = (undefined8 *)((long)puVar38 + lVar1 + uVar59 & uVar30);
  *puVar52 = *puVar57;
  pvVar49 = (void *)(uVar2 + (long)puVar52 & uVar54);
  pvVar55 = (void *)(uVar2 + (long)puVar57 & uVar54);
  pvVar20 = pvVar55;
  (**(code **)(lVar43 + 0x30))(pvVar55,1,lVar16);
  if ((int)pvVar20 == 0) {
    (**(code **)(lVar43 + 0x20))(pvVar49,pvVar55,lVar16);
    (**(code **)(lVar43 + 0x38))(pvVar49,0,1,lVar16);
  }
  else {
    _memcpy(pvVar49,pvVar55,sVar39);
  }
  *(undefined1 *)((long)pvVar49 + sVar39) = *(undefined1 *)((long)pvVar55 + sVar39);
  puVar52 = (undefined8 *)((long)puVar52 + lVar3 + uVar42 & uVar35);
  puVar57 = (undefined8 *)((long)puVar57 + lVar3 + uVar42 & uVar35);
  *puVar52 = *puVar57;
  pvVar49 = (void *)(uVar4 + (long)puVar52 & uVar25);
  pvVar55 = (void *)(uVar4 + (long)puVar57 & uVar25);
  pvVar20 = pvVar55;
  (**(code **)(lVar41 + 0x30))(pvVar55,1,lVar17);
  if ((int)pvVar20 == 0) {
    (**(code **)(lVar41 + 0x20))(pvVar49,pvVar55,lVar17);
    (**(code **)(lVar41 + 0x38))(pvVar49,0,1,lVar17);
  }
  else {
    _memcpy(pvVar49,pvVar55,sVar40);
  }
  *(undefined1 *)((long)pvVar49 + sVar40) = *(undefined1 *)((long)pvVar55 + sVar40);
  *(undefined8 *)((long)puVar56 + lVar7 + 8 & 0xfffffffffffffff8) =
       *(undefined8 *)((long)puVar38 + lVar7 + 8 & 0xfffffffffffffff8);
  bVar23 = 1;
LAB_100760e08:
  *(byte *)((long)param_1 + uVar31) = bVar23;
  return param_1;
}



/* Address: 0x100760e30 | FUN_100760e30 */

int FUN_100760e30(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  
  puVar8 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar7 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  lVar10 = *(long *)(param_3 + 0x18);
  lVar3 = *(long *)(param_3 + 0x20);
  lVar11 = *(long *)(lVar10 + -8);
  uVar14 = (ulong)*(byte *)(lVar11 + 0x50);
  lVar15 = *(long *)(lVar3 + -8);
  lVar16 = *(long *)(lVar15 + 0x40);
  if (*(int *)(lVar15 + 0x54) == 0) {
    lVar16 = lVar16 + 1;
  }
  uVar14 = lVar16 + ((*(long *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x40) + uVar14 &
                     (uVar14 ^ 0xffffffffffffffff)) +
                     *(long *)(lVar11 + 0x40) + (ulong)*(byte *)(lVar15 + 0x50) &
                    ((ulong)*(byte *)(lVar15 + 0x50) ^ 0xffffffffffffffff));
  lVar16 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(long *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar15 = *(long *)(lVar16 + -8);
  bVar4 = *(byte *)(lVar15 + 0x50);
  lVar16 = 0;
  _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_3 + 0x30),lVar10,puVar8,puVar7);
  lVar11 = *(long *)(lVar16 + -8);
  bVar5 = *(byte *)(lVar11 + 0x50);
  uVar18 = (ulong)bVar5;
  lVar16 = 0;
  _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_3 + 0x38),lVar3,puVar8,puVar7);
  lVar10 = *(long *)(lVar16 + -8);
  uVar12 = (ulong)*(byte *)(lVar10 + 0x50);
  bVar5 = bVar5 | bVar4 | *(byte *)(lVar10 + 0x50);
  lVar16 = ((ulong)bVar4 + 8 & ((ulong)bVar4 ^ 0xffffffffffffffff)) +
           (uVar18 | 7) + *(long *)(lVar15 + 0x40);
  if (*(int *)(lVar15 + 0x54) == 0) {
    lVar16 = lVar16 + 1;
  }
  lVar3 = (uVar18 + 8 & (uVar18 ^ 0xffffffffffffffff)) + (uVar12 | 7) + *(long *)(lVar11 + 0x40);
  if (*(int *)(lVar11 + 0x54) == 0) {
    lVar3 = lVar3 + 1;
  }
  lVar11 = (uVar12 + 8 & (uVar12 ^ 0xffffffffffffffff)) + *(long *)(lVar10 + 0x40) +
           ((ulong)(bVar5 & 0xf8 ^ 0x1f8) & (ulong)bVar5 + 8);
  if (*(int *)(lVar10 + 0x54) == 0) {
    lVar11 = lVar11 + 1;
  }
  uVar18 = lVar11 + (lVar3 + (lVar16 + 1U & ((uVar18 | 7) ^ 0xffffffffffffffff)) + 1 &
                    ((uVar12 | 7) ^ 0xffffffffffffffff)) + 8 & 0xfffffffffffffff8;
  uVar12 = uVar18 + 8;
  if (uVar12 <= uVar14) {
    uVar12 = uVar14;
  }
  uVar18 = uVar18 + 0x10;
  if (uVar18 <= uVar12) {
    uVar18 = uVar12;
  }
  if (uVar18 < 9) {
    uVar18 = 8;
  }
  uVar1 = 0xfa;
  if ((uint)uVar18 < 4) {
    uVar1 = 0xfa - (1U >> (ulong)(((uint)uVar18 & 3) << 3));
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 <= uVar1) goto LAB_10076109c;
  uVar14 = uVar18 + 1;
  uVar13 = (uint)uVar14;
  uVar6 = uVar13 << 3;
  if (uVar13 < 4) {
    uVar17 = ((param_2 + ~(-1 << (ulong)(uVar6 & 0x1f))) - uVar1 >> (ulong)(uVar6 & 0x1f)) + 1;
    if (uVar17 < 0x100) {
      if (uVar17 < 2) goto LAB_10076109c;
      goto LAB_100761028;
    }
    if (uVar17 >> 0x10 == 0) {
      uVar17 = (uint)*(ushort *)((long)param_1 + uVar14);
    }
    else {
      uVar17 = *(uint *)((long)param_1 + uVar14);
    }
  }
  else {
LAB_100761028:
    uVar17 = (uint)*(byte *)((long)param_1 + uVar14);
  }
  if (uVar17 != 0) {
    uVar2 = 0;
    if (uVar13 < 4) {
      uVar2 = uVar17 - 1 << (ulong)(uVar6 & 0x1f);
    }
    if (uVar13 != 0) {
      uVar6 = 4;
      if (uVar13 < 4) {
        uVar6 = uVar13;
      }
      if ((int)uVar6 < 3) {
        if (uVar6 == 1) {
          uVar14 = (ulong)(byte)*param_1;
        }
        else {
          uVar14 = (ulong)(ushort)*param_1;
        }
      }
      else if (uVar6 == 3) {
        uVar14 = (ulong)(uint3)*param_1;
      }
      else {
        uVar14 = (ulong)*param_1;
      }
    }
    return uVar1 + ((uint)uVar14 | uVar2) + 1;
  }
LAB_10076109c:
  iVar9 = 0x100 - (uint)*(byte *)((long)param_1 + uVar18);
  if (uVar1 <= (*(byte *)((long)param_1 + uVar18) ^ 0xff)) {
    iVar9 = 0;
  }
  return iVar9;
}



/* Address: 0x100761120 | FUN_100761120 */

void FUN_100761120(uint *param_1,uint param_2,uint param_3,long param_4)

{
  uint uVar1;
  size_t sVar2;
  uint uVar3;
  undefined2 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  byte bVar13;
  int iVar14;
  ulong uVar15;
  byte bVar16;
  uint uVar17;
  long lVar18;
  
  puVar6 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar5 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  lVar18 = *(long *)(param_4 + 0x18);
  lVar8 = *(long *)(lVar18 + -8);
  uVar10 = (ulong)*(byte *)(lVar8 + 0x50);
  lVar7 = *(long *)(param_4 + 0x20);
  lVar11 = *(long *)(lVar7 + -8);
  lVar12 = *(long *)(lVar11 + 0x40);
  if (*(int *)(lVar11 + 0x54) == 0) {
    lVar12 = lVar12 + 1;
  }
  uVar10 = lVar12 + ((*(long *)(*(long *)(*(long *)(param_4 + 0x10) + -8) + 0x40) + uVar10 &
                     (uVar10 ^ 0xffffffffffffffff)) +
                     *(long *)(lVar8 + 0x40) + (ulong)*(byte *)(lVar11 + 0x50) &
                    ((ulong)*(byte *)(lVar11 + 0x50) ^ 0xffffffffffffffff));
  lVar12 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 0x28),*(long *)(param_4 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar8 = *(long *)(lVar12 + -8);
  bVar16 = *(byte *)(lVar8 + 0x50);
  lVar12 = 0;
  _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_4 + 0x30),lVar18,puVar6,puVar5);
  lVar18 = *(long *)(lVar12 + -8);
  bVar13 = *(byte *)(lVar18 + 0x50);
  uVar15 = (ulong)bVar13;
  lVar12 = 0;
  _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_4 + 0x38),lVar7,puVar6,puVar5);
  lVar7 = *(long *)(lVar12 + -8);
  uVar9 = (ulong)*(byte *)(lVar7 + 0x50);
  bVar13 = bVar13 | bVar16 | *(byte *)(lVar7 + 0x50);
  lVar12 = ((ulong)bVar16 + 8 & ((ulong)bVar16 ^ 0xffffffffffffffff)) +
           (uVar15 | 7) + *(long *)(lVar8 + 0x40);
  if (*(int *)(lVar8 + 0x54) == 0) {
    lVar12 = lVar12 + 1;
  }
  lVar8 = (uVar15 + 8 & (uVar15 ^ 0xffffffffffffffff)) + (uVar9 | 7) + *(long *)(lVar18 + 0x40);
  if (*(int *)(lVar18 + 0x54) == 0) {
    lVar8 = lVar8 + 1;
  }
  lVar18 = (uVar9 + 8 & (uVar9 ^ 0xffffffffffffffff)) + *(long *)(lVar7 + 0x40) +
           ((ulong)(bVar13 & 0xf8 ^ 0x1f8) & (ulong)bVar13 + 8);
  if (*(int *)(lVar7 + 0x54) == 0) {
    lVar18 = lVar18 + 1;
  }
  uVar15 = lVar18 + (lVar8 + (lVar12 + 1U & ((uVar15 | 7) ^ 0xffffffffffffffff)) + 1 &
                    ((uVar9 | 7) ^ 0xffffffffffffffff)) + 8 & 0xfffffffffffffff8;
  uVar9 = uVar15 + 8;
  if (uVar9 <= uVar10) {
    uVar9 = uVar10;
  }
  uVar15 = uVar15 + 0x10;
  if (uVar15 <= uVar9) {
    uVar15 = uVar9;
  }
  if (uVar15 < 9) {
    uVar15 = 8;
  }
  uVar3 = 0xfa;
  if ((uint)uVar15 < 4) {
    uVar3 = 0xfa - (1U >> (ulong)(((uint)uVar15 & 3) << 3));
  }
  sVar2 = uVar15 + 1;
  uVar17 = (uint)sVar2;
  if (uVar3 < param_3) {
    uVar1 = ((param_3 + ~(-1 << (ulong)(uVar17 << 3 & 0x1f))) - uVar3 >> (ulong)(uVar17 << 3 & 0x1f)
            ) + 1;
    bVar13 = 2;
    if (0xffff < uVar1) {
      bVar13 = 4;
    }
    if (uVar1 < 0x100) {
      bVar13 = 1 < uVar1;
    }
    bVar16 = 1;
    if (uVar17 < 4) {
      bVar16 = bVar13;
    }
  }
  else {
    bVar16 = 0;
  }
  if (uVar3 < param_2) {
    param_2 = param_2 + ~uVar3;
    if (uVar17 < 4) {
      iVar14 = (param_2 >> (ulong)(uVar17 << 3 & 0x1f)) + 1;
      if (uVar17 != 0) {
        uVar3 = param_2 & (-1 << (ulong)(uVar17 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar2);
        uVar4 = (undefined2)uVar3;
        if (uVar17 == 3) {
          *(undefined2 *)param_1 = uVar4;
          *(char *)((long)param_1 + 2) = (char)(uVar3 >> 0x10);
        }
        else if (uVar17 == 2) {
          *(undefined2 *)param_1 = uVar4;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      _bzero(param_1,sVar2);
      *param_1 = param_2;
      iVar14 = 1;
    }
    if (bVar16 < 2) {
      if (bVar16 != 0) {
        *(char *)((long)param_1 + sVar2) = (char)iVar14;
      }
    }
    else if (bVar16 == 2) {
      *(short *)((long)param_1 + sVar2) = (short)iVar14;
    }
    else {
      *(int *)((long)param_1 + sVar2) = iVar14;
    }
  }
  else {
    if (bVar16 < 2) {
      if (bVar16 != 0) {
        *(undefined1 *)((long)param_1 + sVar2) = 0;
      }
    }
    else if (bVar16 == 2) {
      *(undefined2 *)((long)param_1 + sVar2) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar2) = 0;
    }
    if (param_2 != 0) {
      *(char *)((long)param_1 + uVar15) = -(char)param_2;
    }
  }
  return;
}



/* Address: 0x100761480 | FUN_100761480 */

uint FUN_100761480(uint *param_1,long param_2)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  
  puVar5 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar4 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  lVar14 = *(long *)(param_2 + 0x18);
  lVar9 = *(long *)(lVar14 + -8);
  uVar11 = (ulong)*(byte *)(lVar9 + 0x50);
  lVar8 = *(long *)(param_2 + 0x20);
  lVar12 = *(long *)(lVar8 + -8);
  lVar13 = *(long *)(lVar12 + 0x40);
  if (*(int *)(lVar12 + 0x54) == 0) {
    lVar13 = lVar13 + 1;
  }
  uVar11 = lVar13 + ((*(long *)(*(long *)(*(long *)(param_2 + 0x10) + -8) + 0x40) + uVar11 &
                     (uVar11 ^ 0xffffffffffffffff)) +
                     *(long *)(lVar9 + 0x40) + (ulong)*(byte *)(lVar12 + 0x50) &
                    ((ulong)*(byte *)(lVar12 + 0x50) ^ 0xffffffffffffffff));
  lVar13 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x28),*(long *)(param_2 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar9 = *(long *)(lVar13 + -8);
  bVar2 = *(byte *)(lVar9 + 0x50);
  lVar13 = 0;
  _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_2 + 0x30),lVar14,puVar5,puVar4);
  lVar14 = *(long *)(lVar13 + -8);
  bVar3 = *(byte *)(lVar14 + 0x50);
  uVar15 = (ulong)bVar3;
  lVar13 = 0;
  _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_2 + 0x38),lVar8,puVar5,puVar4);
  lVar8 = *(long *)(lVar13 + -8);
  uVar10 = (ulong)*(byte *)(lVar8 + 0x50);
  bVar3 = bVar3 | bVar2 | *(byte *)(lVar8 + 0x50);
  lVar13 = ((ulong)bVar2 + 8 & ((ulong)bVar2 ^ 0xffffffffffffffff)) +
           (uVar15 | 7) + *(long *)(lVar9 + 0x40);
  if (*(int *)(lVar9 + 0x54) == 0) {
    lVar13 = lVar13 + 1;
  }
  lVar9 = (uVar15 + 8 & (uVar15 ^ 0xffffffffffffffff)) + (uVar10 | 7) + *(long *)(lVar14 + 0x40);
  if (*(int *)(lVar14 + 0x54) == 0) {
    lVar9 = lVar9 + 1;
  }
  lVar14 = (uVar10 + 8 & (uVar10 ^ 0xffffffffffffffff)) + *(long *)(lVar8 + 0x40) +
           ((ulong)(bVar3 & 0xf8 ^ 0x1f8) & (ulong)bVar3 + 8);
  if (*(int *)(lVar8 + 0x54) == 0) {
    lVar14 = lVar14 + 1;
  }
  uVar15 = lVar14 + (lVar9 + (lVar13 + 1U & ((uVar15 | 7) ^ 0xffffffffffffffff)) + 1 &
                    ((uVar10 | 7) ^ 0xffffffffffffffff)) + 8 & 0xfffffffffffffff8;
  uVar10 = uVar15 + 8;
  if (uVar10 <= uVar11) {
    uVar10 = uVar11;
  }
  uVar15 = uVar15 + 0x10;
  if (uVar15 <= uVar10) {
    uVar15 = uVar10;
  }
  if (uVar15 < 9) {
    uVar15 = 8;
  }
  bVar2 = *(byte *)((long)param_1 + uVar15);
  uVar6 = (uint)bVar2;
  if (4 < bVar2) {
    uVar7 = (uint)uVar15;
    uVar1 = 4;
    if (uVar7 < 4) {
      uVar1 = uVar7;
    }
    if ((int)uVar1 < 2) {
      if (uVar1 == 0) {
        return uVar6;
      }
      uVar6 = (uint)(byte)*param_1;
    }
    else if (uVar1 == 2) {
      uVar6 = (uint)(ushort)*param_1;
    }
    else if (uVar1 == 3) {
      uVar6 = (uint)(uint3)*param_1;
    }
    else {
      uVar6 = *param_1;
    }
    if (uVar7 < 4) {
      uVar6 = (uVar6 | bVar2 - 5 << (ulong)((uVar7 & 3) << 3)) + 5;
    }
    else {
      uVar6 = uVar6 + 5;
    }
  }
  return uVar6;
}



/* Address: 0x1007616dc | FUN_1007616dc */

void FUN_1007616dc(uint *param_1,uint param_2,long param_3)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  
  puVar4 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar3 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  if (param_2 < 5) {
    lVar7 = *(long *)(param_3 + 0x10);
    lVar5 = 0;
    _swift_getAssociatedTypeWitness
              (0,*(undefined8 *)(param_3 + 0x28),lVar7,
               PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
               PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
    lVar14 = *(long *)(lVar5 + -8);
    bVar1 = *(byte *)(lVar14 + 0x50);
    lVar13 = *(long *)(param_3 + 0x18);
    lVar5 = 0;
    _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_3 + 0x30),lVar13,puVar4,puVar3);
    lVar15 = *(long *)(lVar5 + -8);
    bVar2 = *(byte *)(lVar15 + 0x50);
    uVar11 = (ulong)bVar2;
    lVar12 = *(long *)(param_3 + 0x20);
    lVar5 = 0;
    _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_3 + 0x38),lVar12,puVar4,puVar3);
    lVar8 = *(long *)(lVar5 + -8);
    uVar9 = (ulong)*(byte *)(lVar8 + 0x50);
    bVar2 = bVar2 | bVar1 | *(byte *)(lVar8 + 0x50);
    lVar5 = ((ulong)bVar1 + 8 & ((ulong)bVar1 ^ 0xffffffffffffffff)) +
            (uVar11 | 7) + *(long *)(lVar14 + 0x40);
    if (*(int *)(lVar14 + 0x54) == 0) {
      lVar5 = lVar5 + 1;
    }
    lVar14 = (uVar11 + 8 & (uVar11 ^ 0xffffffffffffffff)) + *(long *)(lVar15 + 0x40) + (uVar9 | 7);
    if (*(int *)(lVar15 + 0x54) == 0) {
      lVar14 = lVar14 + 1;
    }
    lVar15 = (uVar9 + 8 & (uVar9 ^ 0xffffffffffffffff)) + *(long *)(lVar8 + 0x40) +
             ((ulong)(bVar2 & 0xf8 ^ 0x1f8) & (ulong)bVar2 + 8);
    if (*(int *)(lVar8 + 0x54) == 0) {
      lVar15 = lVar15 + 1;
    }
    uVar11 = lVar15 + (lVar14 + (lVar5 + 1U & ((uVar11 | 7) ^ 0xffffffffffffffff)) + 1 &
                      ((uVar9 | 7) ^ 0xffffffffffffffff)) + 8 & 0xfffffffffffffff8;
    uVar9 = uVar11 + 0x10;
    uVar11 = uVar11 + 8;
    lVar8 = *(long *)(lVar13 + -8);
    uVar10 = (ulong)*(byte *)(lVar8 + 0x50);
    lVar12 = *(long *)(lVar12 + -8);
    lVar5 = *(long *)(lVar12 + 0x40);
    if (*(int *)(lVar12 + 0x54) == 0) {
      lVar5 = lVar5 + 1;
    }
    uVar10 = lVar5 + ((*(long *)(*(long *)(lVar7 + -8) + 0x40) + uVar10 &
                      (uVar10 ^ 0xffffffffffffffff)) +
                      *(long *)(lVar8 + 0x40) + (ulong)*(byte *)(lVar12 + 0x50) &
                     ((ulong)*(byte *)(lVar12 + 0x50) ^ 0xffffffffffffffff));
    if (uVar11 <= uVar10) {
      uVar11 = uVar10;
    }
    if (uVar9 <= uVar11) {
      uVar9 = uVar11;
    }
    if (uVar9 < 9) {
      uVar9 = 8;
    }
    *(char *)((long)param_1 + uVar9) = (char)param_2;
  }
  else {
    lVar8 = *(long *)(param_3 + 0x18);
    lVar12 = *(long *)(lVar8 + -8);
    uVar9 = (ulong)*(byte *)(lVar12 + 0x50);
    lVar7 = *(long *)(param_3 + 0x20);
    lVar13 = *(long *)(lVar7 + -8);
    lVar5 = *(long *)(lVar13 + 0x40);
    if (*(int *)(lVar13 + 0x54) == 0) {
      lVar5 = lVar5 + 1;
    }
    uVar9 = lVar5 + ((*(long *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x40) + uVar9 &
                     (uVar9 ^ 0xffffffffffffffff)) +
                     *(long *)(lVar12 + 0x40) + (ulong)*(byte *)(lVar13 + 0x50) &
                    ((ulong)*(byte *)(lVar13 + 0x50) ^ 0xffffffffffffffff));
    lVar5 = 0;
    _swift_getAssociatedTypeWitness
              (0,*(undefined8 *)(param_3 + 0x28),*(long *)(param_3 + 0x10),
               PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
               PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
    lVar12 = *(long *)(lVar5 + -8);
    bVar1 = *(byte *)(lVar12 + 0x50);
    lVar5 = 0;
    _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_3 + 0x30),lVar8,puVar4,puVar3);
    lVar8 = *(long *)(lVar5 + -8);
    bVar2 = *(byte *)(lVar8 + 0x50);
    uVar10 = (ulong)bVar2;
    lVar5 = 0;
    _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_3 + 0x38),lVar7,puVar4,puVar3);
    lVar7 = *(long *)(lVar5 + -8);
    uVar11 = (ulong)*(byte *)(lVar7 + 0x50);
    bVar2 = bVar2 | bVar1 | *(byte *)(lVar7 + 0x50);
    lVar5 = ((ulong)bVar1 + 8 & ((ulong)bVar1 ^ 0xffffffffffffffff)) +
            (uVar10 | 7) + *(long *)(lVar12 + 0x40);
    if (*(int *)(lVar12 + 0x54) == 0) {
      lVar5 = lVar5 + 1;
    }
    lVar12 = (uVar10 + 8 & (uVar10 ^ 0xffffffffffffffff)) + (uVar11 | 7) + *(long *)(lVar8 + 0x40);
    if (*(int *)(lVar8 + 0x54) == 0) {
      lVar12 = lVar12 + 1;
    }
    lVar8 = (uVar11 + 8 & (uVar11 ^ 0xffffffffffffffff)) + *(long *)(lVar7 + 0x40) +
            ((ulong)(bVar2 & 0xf8 ^ 0x1f8) & (ulong)bVar2 + 8);
    if (*(int *)(lVar7 + 0x54) == 0) {
      lVar8 = lVar8 + 1;
    }
    uVar10 = lVar8 + (lVar12 + (lVar5 + 1U & ((uVar10 | 7) ^ 0xffffffffffffffff)) + 1 &
                     ((uVar11 | 7) ^ 0xffffffffffffffff)) + 8 & 0xfffffffffffffff8;
    uVar11 = uVar10 + 8;
    if (uVar11 <= uVar9) {
      uVar11 = uVar9;
    }
    uVar10 = uVar10 + 0x10;
    if (uVar10 <= uVar11) {
      uVar10 = uVar11;
    }
    if (uVar10 < 9) {
      uVar10 = 8;
    }
    param_2 = param_2 - 5;
    uVar6 = (uint)uVar10;
    if (uVar6 < 4) {
      *(char *)((long)param_1 + uVar10) = (char)(param_2 >> (ulong)(uVar6 << 3 & 0x1f)) + '\x05';
      if (uVar6 == 0) {
        return;
      }
      param_2 = param_2 & (-1 << (ulong)(uVar6 << 3 & 0x1f) ^ 0xffffffffU);
    }
    else {
      *(undefined1 *)((long)param_1 + uVar10) = 5;
    }
    if (3 < uVar6) {
      uVar6 = 4;
    }
    _bzero(param_1,uVar10);
    if ((int)uVar6 < 3) {
      if (uVar6 == 1) {
        *(char *)param_1 = (char)param_2;
      }
      else {
        *(short *)param_1 = (short)param_2;
      }
    }
    else if (uVar6 == 3) {
      *(short *)param_1 = (short)param_2;
      *(char *)((long)param_1 + 2) = (char)(param_2 >> 0x10);
    }
    else {
      *param_1 = param_2;
    }
  }
  return;
}



/* Address: 0x100761aec | FUN_100761aec */

void FUN_100761aec(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetStructDescriptor_100cbeed0);
  return;
}


