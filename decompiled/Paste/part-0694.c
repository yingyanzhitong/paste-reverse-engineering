/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100787150 | FUN_100787150 */

void FUN_100787150(undefined8 param_1)

{
  FUN_10078716c(param_1,FUN_10077cbe4);
  return;
}



/* Address: 0x10078716c | FUN_10078716c */

void FUN_10078716c(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long unaff_x20;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x18);
  local_60 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_48 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_50 = *(undefined8 *)(unaff_x20 + 0x20);
  FUN_100778e04(0,&local_60);
  (*param_3)(param_1);
  return;
}



/* Address: 0x1007871d0 | FUN_1007871d0 */

void FUN_1007871d0(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100785f20(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1007871e8 | FUN_1007871e8 */

void FUN_1007871e8(undefined8 *param_1)

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
  FUN_10077be60();
  *param_1 = uVar2;
  param_1[1] = uVar1;
  return;
}



/* Address: 0x100787254 | FUN_100787254 */

void FUN_100787254(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  Optional OVar2;
  long lVar3;
  long lVar4;
  undefined7 extraout_var;
  undefined8 uVar5;
  long lVar6;
  long *unaff_x20;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_e0 [8];
  long local_d8;
  long local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 *local_b8;
  long local_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  long local_90;
  undefined8 local_88;
  long local_80;
  long lStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar9 = *unaff_x20;
  uVar5 = *(undefined8 *)(lVar9 + 0x68);
  lVar7 = *(long *)(lVar9 + 0x58);
  lVar3 = 0;
  local_c0 = uVar5;
  local_a0 = param_2;
  local_98 = param_3;
  local_88 = param_4;
  _swift_getAssociatedTypeWitness
            (0,uVar5,lVar7,PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Duration_100eaeaf0);
  local_b0 = *(long *)(lVar3 + -8);
  local_b8 = auStack_e0 + -(*(long *)(local_b0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_90 = *(long *)(lVar7 + -8);
  lVar12 = (long)local_b8 - (*(long *)(local_90 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = *(long *)(lVar9 + 0x50);
  lVar10 = *(long *)(lVar8 + -8);
  lVar6 = lVar12 - (*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_c8 = *(undefined8 *)(lVar9 + 0x60);
  lVar4 = 0;
  local_d8 = lVar7;
  local_a8 = lVar3;
  local_80 = lVar8;
  lStack_78 = lVar7;
  local_70 = local_c8;
  uStack_68 = uVar5;
  FUN_100778e04(0,&local_80);
  local_d0 = *(long *)(lVar4 + -8);
  lVar11 = lVar6 - (*(long *)(local_d0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar10 + 0x10))(lVar6,param_1,lVar8);
  (**(code **)(local_90 + 0x10))(lVar12,local_88,lVar7);
  uVar5 = local_a0;
  lVar9 = local_a8;
  lVar7 = local_b0;
  puVar1 = local_b8;
  (**(code **)(local_b0 + 0x10))(local_b8,local_a0,local_a8);
  lVar3 = local_d8;
  FUN_10077b418(lVar11,lVar6,lVar12,puVar1,lVar8,local_d8,local_c8,local_c0);
  lVar6 = lVar11;
  FUN_10079f660(lVar11,lVar4);
  (**(code **)(local_d0 + 8))(lVar11,lVar4);
  unaff_x20[2] = lVar6;
  (**(code **)(lVar7 + 0x20))((long)unaff_x20 + *(long *)(*unaff_x20 + 0x78),uVar5,lVar9);
  lVar7 = *(long *)(*unaff_x20 + 0x80);
  OVar2 = Swift::Optional::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,OVar2.value) + -8) + 0x20))
            ((long)unaff_x20 + lVar7,local_98,CONCAT71(extraout_var,OVar2.value));
  (**(code **)(local_90 + 0x20))((long)unaff_x20 + *(long *)(*unaff_x20 + 0x88),local_88,lVar3);
  return;
}



/* Address: 0x100787470 | FUN_100787470 */

void FUN_100787470(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _swift_allocObject();
  FUN_100787254(param_1,param_2,param_3,param_4);
  return;
}



/* Address: 0x1007874d0 | thunk_FUN_100786e70 */

void thunk_FUN_100786e70(void)

{
  thunk_FUN_100786e70();
  return;
}



/* Address: 0x1007874d4 | FUN_1007874d4 */

void FUN_1007874d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  long lVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_5;
  *(undefined8 *)(unaff_x22 + 0x40) = param_6;
  *(undefined8 *)(unaff_x22 + 0x28) = param_3;
  *(long *)(unaff_x22 + 0x30) = param_4;
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  *(undefined8 *)(unaff_x22 + 0x20) = param_2;
  lVar2 = *(long *)(param_4 + -8);
  *(long *)(unaff_x22 + 0x48) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x50) = uVar1;
  _swift_task_switch(FUN_100787538,0,0);
  return;
}



/* Address: 0x100787538 | FUN_100787538 */

void FUN_100787538(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined *puVar7;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x48);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x18);
  _swift_getTupleTypeMetadata2
            (0xff,*(undefined8 *)(unaff_x22 + 0x20),*(undefined8 *)(unaff_x22 + 0x28),0,0);
  uVar5 = 0;
  Swift::Array<undefined>::typeMetadataAccessor();
  *(undefined8 *)(unaff_x22 + 0x58) = uVar5;
  (**(code **)(lVar1 + 0x10))(uVar3,uVar2,uVar4);
  plVar6 = (long *)0xb0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x60) = plVar6;
  puVar7 = PTR_Swift__Swift__Array<undefined>_>Swift__RangeReplaceableCollection_100eac550;
  _swift_getWitnessTable
            (PTR_Swift__Swift__Array<undefined>_>Swift__RangeReplaceableCollection_100eac550,uVar5);
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_10078760c;
  FUN_1007c2fa0(unaff_x22 + 0x10,*(undefined8 *)(unaff_x22 + 0x50),uVar5,
                *(undefined8 *)(unaff_x22 + 0x30),puVar7,*(undefined8 *)(unaff_x22 + 0x40));
  return;
}



/* Address: 0x10078760c | FUN_10078760c */

void FUN_10078760c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x68) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x60));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100787670;
  }
  else {
    pcVar1 = FUN_10078771c;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100787670 | FUN_100787670 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001007876d4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100787670(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  Dictionary<undefined,undefined> DVar8;
  long unaff_x22;
  undefined8 uVar9;
  long lVar10;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x58);
  lVar10 = *(long *)(unaff_x22 + 0x48);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x18);
  puVar7 = PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530;
  _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530,uVar4);
  DVar8 = Swift::Dictionary::_init(puVar7,uVar3,uVar6,uVar4,uVar5,puVar7);
  (**(code **)(lVar10 + 8))(uVar9,uVar2);
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100787718. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(DVar8.unknown);
  return;
}



/* Address: 0x10078771c | FUN_10078771c */

void FUN_10078771c(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  (**(code **)(*(long *)(unaff_x22 + 0x48) + 8))
            (*(undefined8 *)(unaff_x22 + 0x18),*(undefined8 *)(unaff_x22 + 0x30));
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100787768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10078776c | FUN_10078776c */

void FUN_10078776c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  Optional OVar1;
  undefined7 extraout_var;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined7 extraout_var_00;
  long lVar5;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_7;
  *(undefined8 *)(unaff_x22 + 0x50) = param_8;
  *(long *)(unaff_x22 + 0x38) = param_5;
  *(long *)(unaff_x22 + 0x40) = param_6;
  *(undefined8 *)(unaff_x22 + 0x28) = param_3;
  *(long *)(unaff_x22 + 0x30) = param_4;
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  *(undefined8 *)(unaff_x22 + 0x20) = param_2;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x58) = CONCAT71(extraout_var,OVar1.value);
  lVar5 = *(long *)(CONCAT71(extraout_var,OVar1.value) + -8);
  *(long *)(unaff_x22 + 0x60) = lVar5;
  uVar3 = *(long *)(lVar5 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x68) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x70) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x78) = uVar3;
  lVar5 = *(long *)(param_5 + -8);
  *(long *)(unaff_x22 + 0x80) = lVar5;
  uVar3 = *(long *)(lVar5 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x88) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x90) = uVar3;
  lVar5 = *(long *)(param_4 + -8);
  *(long *)(unaff_x22 + 0x98) = lVar5;
  uVar3 = *(long *)(lVar5 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xa0) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xa8) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xb0) = uVar3;
  uVar4 = 0xff;
  _swift_getTupleTypeMetadata2(0xff,param_4,param_5,0,0);
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar4;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  uVar3 = *(long *)(*(long *)(CONCAT71(extraout_var_00,OVar1.value) + -8) + 0x40) + 0xfU &
          0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xc0) = uVar3;
  lVar5 = *(long *)(param_6 + -8);
  *(long *)(unaff_x22 + 200) = lVar5;
  uVar3 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xd0) = uVar3;
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_8,param_6,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  *(long *)(unaff_x22 + 0xd8) = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  *(long *)(unaff_x22 + 0xe0) = lVar5;
  uVar3 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xe8) = uVar3;
  _swift_task_switch(FUN_100787914,0,0);
  return;
}



/* Address: 0x100787914 | FUN_100787914 */

void FUN_100787914(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  Dictionary<undefined,undefined> DVar4;
  long *plVar5;
  long unaff_x22;
  undefined8 uVar6;
  
  lVar1 = *(long *)(unaff_x22 + 200);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x18);
  DVar4 = Swift::Dictionary::init();
  *(undefined **)(unaff_x22 + 0x10) = DVar4.unknown;
  (**(code **)(lVar1 + 0x10))(uVar2,uVar6,uVar3);
  Swift::AsyncSequence::_makeAsyncIterator();
  _swift_getAssociatedConformanceWitness
            (*(undefined8 *)(unaff_x22 + 0x50),*(undefined8 *)(unaff_x22 + 0x40),
             *(undefined8 *)(unaff_x22 + 0xd8),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
            );
  plVar5 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xf0) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1007879f4;
  Swift::AsyncIteratorProtocol::_next();
  return;
}



/* Address: 0x1007879f4 | FUN_1007879f4 */

void FUN_1007879f4(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xf8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xf0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100787a58;
  }
  else {
    pcVar1 = FUN_100787f4c;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100787a58 | FUN_100787a58 */

void FUN_100787a58(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  Dictionary DVar6;
  long *plVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int *piVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long unaff_x22;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  
  lVar18 = *(long *)(unaff_x22 + 0xb8);
  lVar19 = *(long *)(unaff_x22 + 0xc0);
  lVar5 = lVar19;
  (**(code **)(*(long *)(lVar18 + -8) + 0x30))(lVar19,1,lVar18);
  if ((int)lVar5 == 1) {
    lVar18 = *(long *)(unaff_x22 + 0xe0);
    uVar15 = *(undefined8 *)(unaff_x22 + 0xe8);
    uVar12 = *(undefined8 *)(unaff_x22 + 0xd0);
    uVar14 = *(undefined8 *)(unaff_x22 + 0xd8);
    uVar13 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar1 = *(undefined8 *)(unaff_x22 + 0xb0);
    uVar17 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x70);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x78);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x68);
    (**(code **)(*(long *)(unaff_x22 + 200) + 8))
              (*(undefined8 *)(unaff_x22 + 0x18),*(undefined8 *)(unaff_x22 + 0x40));
    (**(code **)(lVar18 + 8))(uVar15,uVar14);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x10);
    _swift_task_dealloc(uVar15);
    _swift_task_dealloc(uVar12);
    _swift_task_dealloc(lVar19);
    _swift_task_dealloc(uVar1);
    _swift_task_dealloc(uVar13);
    _swift_task_dealloc(uVar17);
    _swift_task_dealloc(uVar2);
    _swift_task_dealloc(uVar16);
    _swift_task_dealloc(uVar3);
    _swift_task_dealloc(uVar10);
    _swift_task_dealloc(uVar9);
                    /* WARNING: Could not recover jumptable at 0x000100787b78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(uVar14);
    return;
  }
  uVar15 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x78);
  lVar5 = *(long *)(unaff_x22 + 0x80);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x38);
  iVar4 = *(int *)(lVar18 + 0x30);
  (**(code **)(*(long *)(unaff_x22 + 0x98) + 0x20))(uVar15,lVar19,uVar16);
  pcVar8 = *(code **)(lVar5 + 0x20);
  (*pcVar8)(uVar12,lVar19 + iVar4,uVar10);
  *(undefined8 *)(unaff_x22 + 0x100) = *(undefined8 *)(unaff_x22 + 0x10);
  Swift::Dictionary::_get_subscript
            (uVar13,uVar15,*(undefined8 *)(unaff_x22 + 0x10),uVar16,uVar10,uVar14);
  (**(code **)(lVar5 + 0x30))(uVar13,1,uVar10);
  uVar12 = *(undefined8 *)(unaff_x22 + 0xb0);
  lVar18 = *(long *)(unaff_x22 + 0x98);
  if ((int)uVar13 == 1) {
    uVar10 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x90);
    lVar19 = *(long *)(unaff_x22 + 0x80);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x70);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x30);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x38);
    (**(code **)(*(long *)(unaff_x22 + 0x60) + 8))
              (*(undefined8 *)(unaff_x22 + 0x78),*(undefined8 *)(unaff_x22 + 0x58));
    (**(code **)(lVar18 + 0x10))(uVar10,uVar12,uVar13);
    (**(code **)(lVar19 + 0x10))(uVar14,uVar15,uVar16);
    (**(code **)(lVar19 + 0x38))(uVar14,0,1,uVar16);
    DVar6 = Swift::Dictionary::typeMetadataAccessor();
    Swift::Dictionary::_set_subscript((Dictionary *)(unaff_x22 + 0x10),uVar14,uVar10,DVar6.unknown);
    uVar13 = *(undefined8 *)(unaff_x22 + 0xb0);
    lVar18 = *(long *)(unaff_x22 + 0x98);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x30);
    (**(code **)(lVar19 + 8))(*(undefined8 *)(unaff_x22 + 0x90),*(undefined8 *)(unaff_x22 + 0x38));
    (**(code **)(lVar18 + 8))(uVar13,uVar12);
    _swift_getAssociatedConformanceWitness
              (*(undefined8 *)(unaff_x22 + 0x50),*(undefined8 *)(unaff_x22 + 0x40),
               *(undefined8 *)(unaff_x22 + 0xd8),
               PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
               PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
              );
    plVar7 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xf0) = plVar7;
    *plVar7 = unaff_x22;
    plVar7[1] = (long)FUN_1007879f4;
    Swift::AsyncIteratorProtocol::_next();
    return;
  }
  uVar16 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x30);
  piVar11 = *(int **)(unaff_x22 + 0x20);
  (*pcVar8)(*(undefined8 *)(unaff_x22 + 0x88),*(undefined8 *)(unaff_x22 + 0x78),
            *(undefined8 *)(unaff_x22 + 0x38));
  (**(code **)(lVar18 + 0x10))(uVar16,uVar12,uVar13);
  iVar4 = *piVar11;
  plVar7 = (long *)(ulong)(uint)piVar11[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x108) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_100787dc4;
                    /* WARNING: Could not recover jumptable at 0x000100787dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar4 + (long)piVar11))
            (plVar7,*(undefined8 *)(unaff_x22 + 0x68),*(undefined8 *)(unaff_x22 + 0x88),
             *(undefined8 *)(unaff_x22 + 0x90));
  return;
}



/* Address: 0x100787dc4 | FUN_100787dc4 */

void FUN_100787dc4(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x110) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x108));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100787e28;
  }
  else {
    pcVar1 = FUN_100788058;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100787e28 | FUN_100787e28 */

void FUN_100787e28(void)

{
  long lVar1;
  undefined8 uVar2;
  Dictionary DVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  code *pcVar8;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0xa0);
  lVar1 = *(long *)(unaff_x22 + 0x80);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x38);
  (**(code **)(lVar1 + 0x38))(uVar7,0,1,uVar6);
  DVar3 = Swift::Dictionary::typeMetadataAccessor();
  Swift::Dictionary::_set_subscript((Dictionary *)(unaff_x22 + 0x10),uVar7,uVar5,DVar3.unknown);
  pcVar8 = *(code **)(lVar1 + 8);
  (*pcVar8)(uVar2,uVar6);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xb0);
  lVar1 = *(long *)(unaff_x22 + 0x98);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x30);
  (*pcVar8)(*(undefined8 *)(unaff_x22 + 0x90),*(undefined8 *)(unaff_x22 + 0x38));
  (**(code **)(lVar1 + 8))(uVar6,uVar2);
  _swift_getAssociatedConformanceWitness
            (*(undefined8 *)(unaff_x22 + 0x50),*(undefined8 *)(unaff_x22 + 0x40),
             *(undefined8 *)(unaff_x22 + 0xd8),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
            );
  plVar4 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xf0) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1007879f4;
  Swift::AsyncIteratorProtocol::_next();
  return;
}



/* Address: 0x100787f4c | FUN_100787f4c */

void FUN_100787f4c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x22;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar1 = *(long *)(unaff_x22 + 0xe0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xd8);
  (**(code **)(*(long *)(unaff_x22 + 200) + 8))
            (*(undefined8 *)(unaff_x22 + 0x18),*(undefined8 *)(unaff_x22 + 0x40));
  (**(code **)(lVar1 + 8))(uVar3,uVar8);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar12 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x68);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x10));
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar7);
                    /* WARNING: Could not recover jumptable at 0x000100788054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100788058 | FUN_100788058 */

void FUN_100788058(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  code *pcVar10;
  code *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long unaff_x22;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  lVar1 = *(long *)(unaff_x22 + 0xe0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar12 = *(undefined8 *)(unaff_x22 + 0xb0);
  lVar2 = *(long *)(unaff_x22 + 0x98);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x90);
  lVar9 = *(long *)(unaff_x22 + 0x80);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x30);
  (**(code **)(*(long *)(unaff_x22 + 200) + 8))
            (*(undefined8 *)(unaff_x22 + 0x18),*(undefined8 *)(unaff_x22 + 0x40));
  pcVar11 = *(code **)(lVar2 + 8);
  (*pcVar11)(uVar6,uVar16);
  pcVar10 = *(code **)(lVar9 + 8);
  (*pcVar10)(uVar3,uVar4);
  (*pcVar10)(uVar7,uVar4);
  (*pcVar11)(uVar12,uVar16);
  (**(code **)(lVar1 + 8))(uVar5,uVar8);
  uVar16 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar13 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar14 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar15 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x68);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x100));
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar12);
                    /* WARNING: Could not recover jumptable at 0x0001007881ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1007881b0 | FUN_1007881b0 */

void FUN_1007881b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  Optional OVar2;
  ulong uVar3;
  ulong uVar4;
  undefined7 extraout_var;
  long lVar5;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_6;
  *(undefined8 *)(unaff_x22 + 0x50) = param_7;
  *(long *)(unaff_x22 + 0x38) = param_4;
  *(long *)(unaff_x22 + 0x40) = param_5;
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
  *(undefined8 *)(unaff_x22 + 0x30) = param_3;
  *(undefined8 *)(unaff_x22 + 0x20) = param_1;
  lVar5 = *(long *)(param_4 + -8);
  *(long *)(unaff_x22 + 0x58) = lVar5;
  uVar4 = *(long *)(lVar5 + 0x40) + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x60) = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x68) = uVar4;
  puVar1 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_7,param_5,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  *(long *)(unaff_x22 + 0x70) = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  *(long *)(unaff_x22 + 0x78) = lVar5;
  uVar4 = *(long *)(lVar5 + 0x40) + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x80) = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x88) = uVar4;
  OVar2 = Swift::Optional::typeMetadataAccessor();
  uVar4 = *(long *)(*(long *)(CONCAT71(extraout_var,OVar2.value) + -8) + 0x40) + 0xfU &
          0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x90) = uVar4;
  lVar5 = *(long *)(param_5 + -8);
  *(long *)(unaff_x22 + 0x98) = lVar5;
  uVar4 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xa0) = uVar4;
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_7,param_5,puVar1,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  *(long *)(unaff_x22 + 0xa8) = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  *(long *)(unaff_x22 + 0xb0) = lVar5;
  uVar4 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xb8) = uVar4;
  _swift_task_switch(FUN_10078830c,0,0);
  return;
}



/* Address: 0x10078830c | FUN_10078830c */

void FUN_10078830c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  Dictionary<undefined,undefined> DVar5;
  long *plVar6;
  long unaff_x22;
  undefined8 uVar7;
  
  lVar1 = *(long *)(unaff_x22 + 0x98);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar4 = 0;
  Swift::Array<undefined>::typeMetadataAccessor();
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar4;
  DVar5 = Swift::Dictionary::init();
  *(undefined **)(unaff_x22 + 0x10) = DVar5.unknown;
  (**(code **)(lVar1 + 0x10))(uVar2,uVar7,uVar3);
  Swift::AsyncSequence::_makeAsyncIterator();
  *(undefined **)(unaff_x22 + 0xe8) = DVar5.unknown;
  *(undefined8 *)(unaff_x22 + 0xd0) = 0;
  *(undefined8 *)(unaff_x22 + 200) = 0;
  *(undefined8 *)(unaff_x22 + 0xe0) = 0;
  *(undefined8 *)(unaff_x22 + 0xd8) = 0;
  _swift_getAssociatedConformanceWitness
            (*(undefined8 *)(unaff_x22 + 0x50),*(undefined8 *)(unaff_x22 + 0x40),
             *(undefined8 *)(unaff_x22 + 0xa8),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
            );
  plVar6 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xf0) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_100788420;
  Swift::AsyncIteratorProtocol::_next();
  return;
}



/* Address: 0x100788420 | FUN_100788420 */

void FUN_100788420(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xf8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xf0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100788484;
  }
  else {
    pcVar1 = FUN_100788964;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100788484 | FUN_100788484 */

void FUN_100788484(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined8 uVar15;
  long unaff_x22;
  int *piVar16;
  
  uVar15 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
  lVar6 = *(long *)(unaff_x22 + 0x78);
  uVar13 = uVar15;
  (**(code **)(lVar6 + 0x30))(uVar15,1,uVar2);
  if ((int)uVar13 == 1) {
    uVar2 = *(undefined8 *)(unaff_x22 + 0xd8);
    uVar7 = *(undefined8 *)(unaff_x22 + 0xe0);
    uVar13 = *(undefined8 *)(unaff_x22 + 200);
    uVar8 = *(undefined8 *)(unaff_x22 + 0xd0);
    lVar6 = *(long *)(unaff_x22 + 0xb0);
    uVar9 = *(undefined8 *)(unaff_x22 + 0xb8);
    uVar3 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar10 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x68);
    (**(code **)(*(long *)(unaff_x22 + 0x98) + 8))
              (*(undefined8 *)(unaff_x22 + 0x20),*(undefined8 *)(unaff_x22 + 0x40));
    (**(code **)(lVar6 + 8))(uVar9,uVar10);
    FUN_100004550(uVar13,uVar8);
    FUN_100004550(uVar2,uVar7);
    _swift_task_dealloc(uVar9);
    _swift_task_dealloc(uVar3);
    _swift_task_dealloc(uVar15);
    _swift_task_dealloc(uVar11);
    _swift_task_dealloc(uVar4);
    _swift_task_dealloc(uVar12);
    _swift_task_dealloc(uVar5);
                    /* WARNING: Could not recover jumptable at 0x000100788590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0xe8));
    return;
  }
  piVar16 = *(int **)(unaff_x22 + 0x28);
  (**(code **)(lVar6 + 0x20))(*(undefined8 *)(unaff_x22 + 0x88),uVar15,uVar2);
  iVar1 = *piVar16;
  plVar14 = (long *)(ulong)(uint)piVar16[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x100) = plVar14;
  *plVar14 = unaff_x22;
  plVar14[1] = (long)FUN_100788608;
                    /* WARNING: Could not recover jumptable at 0x000100788604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar16))
            (plVar14,*(undefined8 *)(unaff_x22 + 0x68),*(undefined8 *)(unaff_x22 + 0x88));
  return;
}



/* Address: 0x100788608 | FUN_100788608 */

void FUN_100788608(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x108) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x100));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10078866c;
  }
  else {
    pcVar1 = FUN_100788a64;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x10078866c | FUN_10078866c */

void FUN_10078866c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  _Variant _Var7;
  _NativeDictionary<undefined,undefined> _Var8;
  _NativeDictionary _Var9;
  _NativeDictionary<undefined,undefined> _Var10;
  _NativeDictionary<undefined,undefined> _Var11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  long unaff_x22;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  tuple2_conflict13 tVar25;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar20 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar2 = *(undefined8 *)(unaff_x22 + 200);
  uVar21 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x70);
  lVar17 = *(long *)(unaff_x22 + 0x78);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x68);
  puVar5 = &DAT_100effd98;
  _swift_allocObject(&DAT_100effd98,0x30,7);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined8 *)(puVar5 + 0x18) = *(undefined8 *)(unaff_x22 + 0x40);
  *(undefined8 *)(puVar5 + 0x10) = uVar24;
  *(undefined8 *)(puVar5 + 0x28) = uVar23;
  *(undefined8 *)(puVar5 + 0x20) = uVar22;
  FUN_100004550(uVar2,uVar21);
  (**(code **)(lVar17 + 0x10))(uVar15,uVar3,uVar16);
  puVar6 = &DAT_100effdc0;
  _swift_allocObject(&DAT_100effdc0,0x40,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar24;
  *(undefined8 *)(puVar6 + 0x18) = uVar19;
  *(undefined8 *)(puVar6 + 0x20) = uVar22;
  *(undefined8 *)(puVar6 + 0x28) = uVar14;
  *(code **)(puVar6 + 0x30) = FUN_100788b88;
  *(undefined **)(puVar6 + 0x38) = puVar5;
  FUN_100004550(uVar1,uVar20);
  _Var7 = Swift::Dictionary::_Variant::typeMetadataAccessor();
  bVar4 = Swift::Dictionary::_Variant::isUniquelyReferenced(_Var7);
  _Var8 = Swift::_NativeDictionary::init(*(__RawDictionaryStorage **)(unaff_x22 + 0x10));
  _Var9 = Swift::_NativeDictionary::typeMetadataAccessor();
  tVar25 = Swift::_NativeDictionary::mutatingFind(uVar13,bVar4,_Var9.unknown);
  *(undefined **)(unaff_x22 + 0x10) = _Var8.unknown;
  _swift_bridgeObjectRelease(0x8000000000000000);
  _Var10 = _Var8;
  _swift_bridgeObjectRetain();
  _Var10 = Swift::_NativeDictionary::init(_Var10.unknown);
  if ((tVar25._8_8_ & 1) == 0) {
    uVar16 = *(undefined8 *)(unaff_x22 + 0xc0);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
    lVar17 = *(long *)(unaff_x22 + 0x58);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x38);
    _Var11 = _Var10;
    (**(code **)(puVar6 + 0x30))();
    *(undefined8 *)(unaff_x22 + 0x18) = _Var11.unknown;
    (**(code **)(lVar17 + 0x10))(uVar1,uVar2,uVar20);
    Swift::_NativeDictionary::_insert
              (tVar25.bucket.offset.offset,uVar1,(undefined8 *)(unaff_x22 + 0x18),_Var10.unknown,
               uVar20,uVar16,uVar15);
  }
  uVar21 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
  lVar17 = *(long *)(unaff_x22 + 0x78);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x68);
  lVar18 = *(long *)(unaff_x22 + 0x58);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x38);
  Swift::_NativeDictionary::get__values((_NativeDictionary)_Var10.unknown);
  _swift_release(_Var10.unknown);
  Swift::Array<undefined>::append(uVar1,uVar21);
  (**(code **)(lVar18 + 8))(uVar16,uVar20);
  (**(code **)(lVar17 + 8))(uVar15,uVar2);
  *(undefined **)(unaff_x22 + 0xe0) = puVar6;
  *(undefined **)(unaff_x22 + 0xe8) = _Var8.unknown;
  *(undefined **)(unaff_x22 + 0xd0) = puVar5;
  *(code **)(unaff_x22 + 0xd8) = FUN_100788bd0;
  *(code **)(unaff_x22 + 200) = FUN_100788b88;
  _swift_getAssociatedConformanceWitness
            (*(undefined8 *)(unaff_x22 + 0x50),*(undefined8 *)(unaff_x22 + 0x40),
             *(undefined8 *)(unaff_x22 + 0xa8),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
            );
  plVar12 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xf0) = plVar12;
  *plVar12 = unaff_x22;
  plVar12[1] = (long)FUN_100788420;
  Swift::AsyncIteratorProtocol::_next();
  return;
}



/* Address: 0x100788964 | FUN_100788964 */

void FUN_100788964(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long unaff_x22;
  undefined8 uVar14;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar14 = *(undefined8 *)(unaff_x22 + 200);
  lVar3 = *(long *)(unaff_x22 + 0xb0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x68);
  (**(code **)(*(long *)(unaff_x22 + 0x98) + 8))
            (*(undefined8 *)(unaff_x22 + 0x20),*(undefined8 *)(unaff_x22 + 0x40));
  (**(code **)(lVar3 + 8))(uVar10,uVar11);
  _swift_bridgeObjectRelease(uVar8);
  FUN_100004550(uVar14,uVar2);
  FUN_100004550(uVar9,uVar1);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar7);
                    /* WARNING: Could not recover jumptable at 0x000100788a60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100788a64 | FUN_100788a64 */

void FUN_100788a64(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long unaff_x22;
  undefined8 uVar14;
  
  (**(code **)(*(long *)(unaff_x22 + 0x98) + 8))
            (*(undefined8 *)(unaff_x22 + 0x20),*(undefined8 *)(unaff_x22 + 0x40));
  uVar1 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar14 = *(undefined8 *)(unaff_x22 + 200);
  lVar3 = *(long *)(unaff_x22 + 0xb0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x68);
  (**(code **)(*(long *)(unaff_x22 + 0x78) + 8))(uVar5,*(undefined8 *)(unaff_x22 + 0x70));
  (**(code **)(lVar3 + 8))(uVar9,uVar10);
  _swift_bridgeObjectRelease(uVar7);
  FUN_100004550(uVar14,uVar2);
  FUN_100004550(uVar8,uVar1);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar6);
                    /* WARNING: Could not recover jumptable at 0x000100788b74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100788b78 | FUN_100788b78 */

void FUN_100788b78(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x100788b88 | FUN_100788b88 */

tuple2_conflict3 FUN_100788b88(void)

{
  undefined8 uVar1;
  long unaff_x20;
  tuple2_conflict3 tVar2;
  
  uVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x18),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  tVar2 = Swift::Array<undefined>::_allocateUninitialized(0,uVar1);
  return tVar2;
}



/* Address: 0x100788bc0 | FUN_100788bc0 */

void FUN_100788bc0(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x100788bd0 | FUN_100788bd0 */

void FUN_100788bd0(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x30))();
  *param_1 = param_2;
  return;
}



/* Address: 0x100788bf8 | FUN_100788bf8 */

void FUN_100788bf8(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar3 = *(long *)(param_4 + -8);
  lVar2 = (long)&local_80 - (*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar3 + 0x10))(lVar2);
  (**(code **)(lVar3 + 0x20))(param_1,lVar2,param_4);
  lVar2 = 0;
  local_80 = param_4;
  uStack_78 = param_5;
  local_70 = param_6;
  uStack_68 = param_7;
  FUN_1007891e0(0,&local_80);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar2 + 0x34));
  *puVar1 = param_2;
  puVar1[1] = param_3;
  _swift_retain(param_3);
  return;
}



/* Address: 0x100788cbc | FUN_100788cbc */

void FUN_100788cbc(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  TargetProtocolConformanceDescriptor *pTVar8;
  long lVar9;
  long lVar10;
  undefined8 local_90;
  long local_88;
  long local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  TargetProtocolConformanceDescriptor *pTStack_68;
  
  lVar9 = *(long *)(param_4 + -8);
  lVar10 = (long)&local_90 - (*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_90 = param_3;
  local_88 = param_1;
  (**(code **)(lVar9 + 0x10))(lVar10);
  puVar4 = &DAT_100effde8;
  _swift_allocObject(&DAT_100effde8,0x40,7);
  *(long *)(puVar4 + 0x10) = param_4;
  *(long *)(puVar4 + 0x18) = param_5;
  *(undefined8 *)(puVar4 + 0x20) = param_6;
  *(undefined8 *)(puVar4 + 0x28) = param_7;
  *(undefined8 *)(puVar4 + 0x30) = param_2;
  *(undefined8 *)(puVar4 + 0x38) = param_3;
  puVar2 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar5 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,param_6,param_4,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Failure_100eaeae0);
  uVar6 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,param_6,param_4,puVar2,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  uVar7 = param_6;
  _swift_getAssociatedConformanceWitness
            (param_6,param_4,uVar6,puVar2,
             PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
            );
  _swift_getAssociatedConformanceWitness();
  uVar6 = 0;
  local_80 = param_5;
  uStack_78 = uVar5;
  local_70 = param_7;
  pTStack_68 = (TargetProtocolConformanceDescriptor *)uVar7;
  FUN_1007294a8(0,&local_80);
  pTVar8 = &TargetProtocolConformanceDescriptor_100c75018;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c75018,uVar6);
  lVar3 = local_88;
  (**(code **)(lVar9 + 0x20))(local_88,lVar10,param_4);
  lVar9 = 0;
  local_80 = param_4;
  uStack_78 = uVar6;
  local_70 = param_6;
  pTStack_68 = pTVar8;
  FUN_1007891e0(0,&local_80);
  puVar1 = (undefined8 *)(lVar3 + *(int *)(lVar9 + 0x34));
  *puVar1 = FUN_100788fe0;
  puVar1[1] = puVar4;
  _swift_retain(local_90);
  return;
}



/* Address: 0x100788e60 | FUN_100788e60 */

void FUN_100788e60(undefined8 param_1,undefined8 param_2,code *param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  
  lVar6 = *(long *)(param_6 + -8);
  lVar5 = *(long *)(lVar6 + 0x40);
  local_68 = param_1;
  (*param_3)(auStack_70 + -(lVar5 + 0xfU & 0xfffffffffffffff0));
  puVar2 = &DAT_100effe90;
  _swift_allocObject(&DAT_100effe90,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = param_5;
  *(long *)(puVar2 + 0x18) = param_6;
  *(undefined8 *)(puVar2 + 0x20) = param_7;
  *(undefined8 *)(puVar2 + 0x28) = param_8;
  puVar1 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_7,param_5,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Failure_100eaeae0);
  uVar4 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,param_7,param_5,puVar1,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  _swift_getAssociatedConformanceWitness
            (param_7,param_5,uVar4,puVar1,
             PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
            );
  _swift_getAssociatedConformanceWitness();
  FUN_1007292ec(local_68,FUN_1006f8f6c,puVar2,param_6,uVar3,param_8,param_7);
  _swift_release(puVar2);
  (**(code **)(lVar6 + 8))(auStack_70 + -(lVar5 + 0xfU & 0xfffffffffffffff0),param_6);
  return;
}



/* Address: 0x100788fbc | FUN_100788fbc */

void FUN_100788fbc(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_deallocObject();
  return;
}



/* Address: 0x100788fe0 | FUN_100788fe0 */

void FUN_100788fe0(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100788e60(param_1,*(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x100788ff0 | FUN_100788ff0 */

void FUN_100788ff0(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  TargetProtocolConformanceDescriptor *pTVar7;
  long lVar8;
  long lVar9;
  long local_80;
  undefined8 uStack_78;
  TargetProtocolConformanceDescriptor *local_70;
  undefined8 uStack_68;
  
  puVar6 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,param_7,param_5,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Failure_100eaeae0);
  uVar3 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,param_7,param_5,puVar6,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  uVar4 = param_7;
  _swift_getAssociatedConformanceWitness
            (param_7,param_5,uVar3,puVar6,
             PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
            );
  _swift_getAssociatedConformanceWitness();
  lVar5 = 0;
  local_80 = param_4;
  uStack_78 = uVar2;
  local_70 = (TargetProtocolConformanceDescriptor *)param_6;
  uStack_68 = uVar4;
  FUN_1007294a8(0,&local_80);
  lVar9 = *(long *)(lVar5 + -8);
  lVar8 = *(long *)(lVar9 + 0x40);
  puVar6 = &DAT_100effe10;
  _swift_allocObject(&DAT_100effe10,0x30,7);
  *(long *)(puVar6 + 0x10) = param_4;
  *(undefined8 *)(puVar6 + 0x18) = param_5;
  *(undefined8 *)(puVar6 + 0x20) = param_6;
  *(undefined8 *)(puVar6 + 0x28) = param_7;
  FUN_1007292ec(&stack0xffffffffffffff60 + -(lVar8 + 0xfU & 0xfffffffffffffff0),FUN_1006f8f6c,puVar6
                ,param_4,uVar2,param_6,uVar4);
  _swift_release(puVar6);
  pTVar7 = &TargetProtocolConformanceDescriptor_100c75018;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c75018,lVar5);
  (**(code **)(lVar9 + 0x20))
            (param_1,&stack0xffffffffffffff60 + -(lVar8 + 0xfU & 0xfffffffffffffff0),lVar5);
  lVar8 = 0;
  local_80 = lVar5;
  uStack_78 = param_5;
  local_70 = pTVar7;
  uStack_68 = param_7;
  FUN_1007891e0(0,&local_80);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar8 + 0x34));
  *puVar1 = param_2;
  puVar1[1] = param_3;
  _swift_retain();
  return;
}



/* Address: 0x1007891a4 | FUN_1007891a4 */

void FUN_1007891a4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_1[1];
  local_30 = *param_1;
  uStack_18 = param_1[3];
  uStack_20 = param_1[2];
  uVar1 = 0xff;
  FUN_1007891e0(0xff,&local_30);
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c77160,uVar1);
  return;
}



/* Address: 0x1007891e0 | FUN_1007891e0 */

void FUN_1007891e0(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetStructDescriptor_100cbf880);
  return;
}



/* Address: 0x1007891ec | FUN_1007891ec */

void FUN_1007891ec(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  TargetProtocolConformanceDescriptor *pTVar8;
  undefined8 uVar9;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  TargetProtocolConformanceDescriptor *pTStack_58;
  
  puVar4 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar1 = *param_1;
  uVar9 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  uVar5 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar2,uVar1,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Failure_100eaeae0);
  uVar6 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar2,uVar1,puVar4,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  uVar7 = uVar2;
  _swift_getAssociatedConformanceWitness
            (uVar2,uVar1,uVar6,puVar4,
             PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
            );
  _swift_getAssociatedConformanceWitness();
  uVar6 = 0xff;
  local_70 = uVar9;
  uStack_68 = uVar5;
  local_60 = uVar3;
  pTStack_58 = (TargetProtocolConformanceDescriptor *)uVar7;
  FUN_1007294a8(0xff,&local_70);
  pTVar8 = &TargetProtocolConformanceDescriptor_100c75018;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c75018,uVar6);
  uVar9 = 0xff;
  local_70 = uVar1;
  uStack_68 = uVar6;
  local_60 = uVar2;
  pTStack_58 = pTVar8;
  FUN_1007891e0(0xff,&local_70);
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c77160,uVar9);
  return;
}



/* Address: 0x1007892f8 | FUN_1007892f8 */

void FUN_1007892f8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  TargetProtocolConformanceDescriptor *pTVar8;
  undefined8 uVar9;
  undefined8 local_70;
  undefined8 uStack_68;
  TargetProtocolConformanceDescriptor *local_60;
  undefined8 uStack_58;
  
  puVar4 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar9 = *param_1;
  uVar2 = param_1[1];
  uVar1 = param_1[2];
  uVar3 = param_1[3];
  uVar5 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar3,uVar2,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Failure_100eaeae0);
  uVar6 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar3,uVar2,puVar4,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  uVar7 = uVar3;
  _swift_getAssociatedConformanceWitness
            (uVar3,uVar2,uVar6,puVar4,
             PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
            );
  _swift_getAssociatedConformanceWitness();
  uVar6 = 0xff;
  local_70 = uVar9;
  uStack_68 = uVar5;
  local_60 = (TargetProtocolConformanceDescriptor *)uVar1;
  uStack_58 = uVar7;
  FUN_1007294a8(0xff,&local_70);
  pTVar8 = &TargetProtocolConformanceDescriptor_100c75018;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c75018,uVar6);
  uVar9 = 0xff;
  local_70 = uVar6;
  uStack_68 = uVar2;
  local_60 = pTVar8;
  uStack_58 = uVar3;
  FUN_1007891e0(0xff,&local_70);
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c77160,uVar9);
  return;
}



/* Address: 0x100789404 | FUN_100789404 */

void FUN_100789404(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1[1];
  uVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,param_1[2],*param_1,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  _swift_getFunctionTypeMetadata1(0x44000001,uVar2,uVar1);
  return;
}



/* Address: 0x10078944c | FUN_10078944c */

void FUN_10078944c(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c771b8,param_1);
  return;
}



/* Address: 0x10078945c | FUN_10078945c */

void FUN_10078945c(long param_1)

{
  long unaff_x20;
  
  _swift_retain(*(undefined8 *)(unaff_x20 + *(int *)(param_1 + 0x34) + 8));
  FUN_100789a38();
  return;
}



/* Address: 0x1007894c4 | FUN_1007894c4 */

void FUN_1007894c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_3;
  *(undefined8 *)(unaff_x22 + 0x18) = param_5;
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_5,param_3,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Failure_100eaeae0);
  *(long *)(unaff_x22 + 0x20) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x28) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x30) = uVar2;
  plVar3 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x38) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_10078957c;
  FUN_100790acc(plVar3,param_1,0,0,uVar2);
  return;
}



/* Address: 0x10078957c | FUN_10078957c */

void FUN_10078957c(void)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x38));
  if (unaff_x20 != 0) {
    _swift_task_switch(FUN_1007895ec,0,0);
    return;
  }
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x0001007895e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Address: 0x1007895ec | FUN_1007895ec */

void FUN_1007895ec(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  
  puVar4 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  lVar1 = *(long *)(unaff_x22 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar5 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar6,uVar7,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  _swift_getAssociatedConformanceWitness
            (uVar6,uVar7,uVar5,puVar4,
             PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
            );
  _swift_getAssociatedConformanceWitness();
  _swift_allocError(uVar3,uVar6,0,0);
  (**(code **)(lVar1 + 0x20))(uVar6,uVar2,uVar3);
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001007896d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1007896d8 | FUN_1007896d8 */

void FUN_1007896d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_3;
  *(undefined8 *)(unaff_x22 + 0x20) = param_9;
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_7,param_5,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Failure_100eaeae0);
  *(long *)(unaff_x22 + 0x28) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x30) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x38) = uVar2;
  plVar3 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x40) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1007897ac;
  FUN_100790acc(plVar3,param_1,param_2,param_3,uVar2);
  return;
}



/* Address: 0x1007897ac | FUN_1007897ac */

void FUN_1007897ac(void)

{
  UnownedSerialExecutor UVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long *unaff_x22;
  long lVar4;
  
  lVar2 = *unaff_x22;
  lVar4 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x40));
  if (unaff_x20 != 0) {
    if (*(long *)(lVar2 + 0x10) == 0) {
      UVar1.unknown = (undefined *)0x0;
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(lVar2 + 0x18);
      _swift_getObjectType(*(long *)(lVar2 + 0x10));
      UVar1 = Swift::Actor::get_unownedExecutor();
    }
    _swift_task_switch(FUN_100789848,UVar1.unknown,uVar3);
    return;
  }
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x000100789820. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))();
  return;
}



/* Address: 0x100789848 | FUN_100789848 */

void FUN_100789848(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  (**(code **)(*(long *)(unaff_x22 + 0x30) + 0x20))
            (*(undefined8 *)(unaff_x22 + 0x20),uVar1,*(undefined8 *)(unaff_x22 + 0x28));
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100789894. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100789898 | FUN_100789898 */

void FUN_100789898(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar4 = *unaff_x20;
  plVar1 = (long *)0x40;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005c804c;
  FUN_1007894c4(plVar1,param_1,uVar4,uVar2,param_4,uVar3);
  return;
}



/* Address: 0x10078990c | FUN_10078990c */

void FUN_10078990c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_4;
  uVar5 = *(undefined8 *)(param_5 + 0x20);
  uVar6 = *(undefined8 *)(param_5 + 0x10);
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar5,uVar6,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Failure_100eaeae0);
  *(long *)(unaff_x22 + 0x18) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x20) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x28) = uVar2;
  uVar4 = *unaff_x20;
  plVar3 = (long *)0x50;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x30) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100708dfc;
  FUN_1007896d8(plVar3,param_1,param_2,param_3,uVar4,uVar6,param_6,uVar5,param_8,uVar2);
  return;
}



/* Address: 0x1007899f0 | FUN_1007899f0 */

void FUN_1007899f0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_2;
  FUN_10078945c();
  (**(code **)(*(long *)(param_2 + -8) + 8))();
  *param_1 = lVar1;
  return;
}



/* Address: 0x100789a38 | FUN_100789a38 */

void FUN_100789a38(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  long local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  lVar2 = *(long *)(param_4 + -8);
  lVar1 = (long)&local_70 - (*(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_70 = param_4;
  uStack_68 = param_5;
  local_60 = param_6;
  uStack_58 = param_7;
  FUN_100790f28(0,&local_70);
  (**(code **)(lVar2 + 0x10))(lVar1,param_1,param_4);
  FUN_100790a78(lVar1,param_2,param_3);
  return;
}



/* Address: 0x100789adc | FUN_100789adc */

void FUN_100789adc(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x100789aec | FUN_100789aec */

void FUN_100789aec(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetStructDescriptor_100cbf8d4);
  return;
}



/* Address: 0x100789af8 | thunk_FUN_100789adc */

void thunk_FUN_100789adc(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x100789afc | FUN_100789afc */

void FUN_100789afc(long param_1)

{
  long lVar1;
  long *plVar2;
  long local_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  plVar2 = &local_40;
  puStack_38 = *(undefined **)(param_1 + 0x18);
  local_40 = *(long *)(param_1 + 0x10);
  uStack_28 = *(undefined8 *)(param_1 + 0x28);
  uStack_30 = *(undefined8 *)(param_1 + 0x20);
  lVar1 = 0x13f;
  FUN_10078a6c0();
  if (plVar2 < (undefined1 *)0x40) {
    local_40 = *(long *)(lVar1 + -8) + 0x40;
    puStack_38 = PTR___value_witness_table_for_____>____100eae0d0 + 0x40;
    _swift_initStructMetadata(param_1,0,2,&local_40,param_1 + 0x30);
  }
  return;
}



/* Address: 0x100789b7c | FUN_100789b7c */

long * FUN_100789b7c(long *param_1,uint *param_2,long param_3)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  
  lVar3 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar5 = *(ulong *)(lVar3 + 0x40);
  if (uVar5 < 0x3a) {
    uVar5 = 0x39;
  }
  if ((*(uint *)(lVar3 + 0x50) & 0x1000f8) != 0 || 0x18 < (uVar5 & 0xfffffffffffffff8) + 0x18) {
    uVar7 = *(uint *)(lVar3 + 0x50) & 0xf8;
    lVar3 = *(long *)param_2;
    *param_1 = lVar3;
    param_1 = (long *)(lVar3 + ((ulong)(uVar7 + 0x17 & (uVar7 ^ 0xffffffff)) & 0x1f8));
    goto LAB_100789d00;
  }
  bVar2 = *(byte *)((long)param_2 + uVar5);
  uVar7 = (uint)bVar2;
  if (1 < bVar2) {
    uVar10 = (uint)uVar5;
    uVar8 = 4;
    if (uVar10 < 4) {
      uVar8 = uVar10;
    }
    if ((int)uVar8 < 2) {
      if (uVar8 == 0) goto LAB_100789c64;
      uVar8 = (uint)(byte)*param_2;
    }
    else if (uVar8 == 2) {
      uVar8 = (uint)(ushort)*param_2;
    }
    else if (uVar8 == 3) {
      uVar8 = (uint)(uint3)*param_2;
    }
    else {
      uVar8 = *param_2;
    }
    uVar7 = uVar8 | bVar2 - 2 << (ulong)((uVar10 & 3) << 3);
    if (3 < uVar10) {
      uVar7 = uVar8;
    }
    uVar7 = uVar7 + 2;
  }
LAB_100789c64:
  if (uVar7 == 1) {
    lVar3 = *(long *)(param_2 + 2);
    *param_1 = *(long *)param_2;
    param_1[1] = lVar3;
    lVar9 = *(long *)(param_2 + 4);
    param_1[2] = lVar9;
    lVar13 = *(long *)(param_2 + 8);
    lVar11 = *(long *)(param_2 + 6);
    lVar3 = *(long *)(param_2 + 10);
    lVar1 = *(long *)(param_2 + 0xc);
    param_1[5] = lVar3;
    param_1[6] = lVar1;
    *(byte *)(param_1 + 7) = (byte)param_2[0xe];
    param_1[4] = lVar13;
    param_1[3] = lVar11;
    *(undefined1 *)((long)param_1 + uVar5) = 1;
    _swift_retain();
    _swift_retain(lVar9);
    _swift_retain(lVar3);
  }
  else if (uVar7 == 0) {
    (**(code **)(lVar3 + 0x10))(param_1,param_2);
    *(undefined1 *)((long)param_1 + uVar5) = 0;
  }
  else {
    _memcpy(param_1,param_2,uVar5 + 1);
  }
  puVar6 = (undefined8 *)(uVar5 + 8 + (long)param_1 & 0xfffffffffffffff8);
  puVar4 = (undefined8 *)((ulong)(uVar5 + 8 + (long)param_2) & 0xfffffffffffffff8);
  lVar3 = puVar4[1];
  uVar12 = *puVar4;
  puVar6[1] = puVar4[1];
  *puVar6 = uVar12;
LAB_100789d00:
  _swift_retain(lVar3);
  return param_1;
}



/* Address: 0x100789d1c | FUN_100789d1c */

void FUN_100789d1c(uint *param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  lVar2 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  uVar3 = *(ulong *)(lVar2 + 0x40);
  if (uVar3 < 0x3a) {
    uVar3 = 0x39;
  }
  bVar1 = *(byte *)((long)param_1 + uVar3);
  uVar4 = (uint)bVar1;
  if (1 < bVar1) {
    uVar6 = (uint)uVar3;
    uVar5 = 4;
    if (uVar6 < 4) {
      uVar5 = uVar6;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_100789db8;
      uVar5 = (uint)(byte)*param_1;
    }
    else if (uVar5 == 2) {
      uVar5 = (uint)(ushort)*param_1;
    }
    else if (uVar5 == 3) {
      uVar5 = (uint)(uint3)*param_1;
    }
    else {
      uVar5 = *param_1;
    }
    uVar4 = uVar5 | bVar1 - 2 << (ulong)((uVar6 & 3) << 3);
    if (3 < uVar6) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 2;
  }
LAB_100789db8:
  if (uVar4 == 1) {
    _swift_release(*(undefined8 *)param_1);
    _swift_release(*(undefined8 *)(param_1 + 4));
    _swift_release(*(undefined8 *)(param_1 + 10));
  }
  else if (uVar4 == 0) {
    (**(code **)(lVar2 + 8))(param_1);
  }
  _swift_release(*(undefined8 *)(((ulong)((long)param_1 + uVar3 + 8) & 0xfffffffffffffff8) + 8));
  return;
}



/* Address: 0x100789e08 | FUN_100789e08 */

undefined8 * FUN_100789e08(undefined8 *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  lVar3 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar5 = *(ulong *)(lVar3 + 0x40);
  if (uVar5 < 0x3a) {
    uVar5 = 0x39;
  }
  bVar1 = *(byte *)((long)param_2 + uVar5);
  uVar7 = (uint)bVar1;
  if (1 < bVar1) {
    uVar10 = (uint)uVar5;
    uVar8 = 4;
    if (uVar10 < 4) {
      uVar8 = uVar10;
    }
    if ((int)uVar8 < 2) {
      if (uVar8 == 0) goto LAB_100789eb0;
      uVar8 = (uint)(byte)*param_2;
    }
    else if (uVar8 == 2) {
      uVar8 = (uint)(ushort)*param_2;
    }
    else if (uVar8 == 3) {
      uVar8 = (uint)(uint3)*param_2;
    }
    else {
      uVar8 = *param_2;
    }
    uVar7 = uVar8 | bVar1 - 2 << (ulong)((uVar10 & 3) << 3);
    if (3 < uVar10) {
      uVar7 = uVar8;
    }
    uVar7 = uVar7 + 2;
  }
LAB_100789eb0:
  if (uVar7 == 1) {
    uVar2 = *(undefined8 *)(param_2 + 2);
    *param_1 = *(undefined8 *)param_2;
    param_1[1] = uVar2;
    uVar9 = *(undefined8 *)(param_2 + 4);
    param_1[2] = uVar9;
    uVar13 = *(undefined8 *)(param_2 + 8);
    uVar11 = *(undefined8 *)(param_2 + 6);
    uVar2 = *(undefined8 *)(param_2 + 10);
    uVar12 = *(undefined8 *)(param_2 + 0xc);
    param_1[5] = uVar2;
    param_1[6] = uVar12;
    *(byte *)(param_1 + 7) = (byte)param_2[0xe];
    param_1[4] = uVar13;
    param_1[3] = uVar11;
    *(undefined1 *)((long)param_1 + uVar5) = 1;
    _swift_retain();
    _swift_retain(uVar9);
    _swift_retain(uVar2);
  }
  else if (uVar7 == 0) {
    (**(code **)(lVar3 + 0x10))(param_1,param_2);
    *(undefined1 *)((long)param_1 + uVar5) = 0;
  }
  else {
    _memcpy(param_1,param_2,uVar5 + 1);
  }
  puVar6 = (undefined8 *)(uVar5 + 8 + (long)param_1 & 0xfffffffffffffff8);
  puVar4 = (undefined8 *)((ulong)(uVar5 + 8 + (long)param_2) & 0xfffffffffffffff8);
  uVar2 = puVar4[1];
  uVar12 = *puVar4;
  puVar6[1] = puVar4[1];
  *puVar6 = uVar12;
  _swift_retain(uVar2);
  return param_1;
}



/* Address: 0x100789f68 | FUN_100789f68 */

uint * FUN_100789f68(uint *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  undefined8 uVar12;
  
  lVar9 = *(long *)(param_3 + 0x10);
  lVar10 = *(long *)(lVar9 + -8);
  uVar3 = *(ulong *)(lVar10 + 0x40);
  if (uVar3 < 0x3a) {
    uVar3 = 0x39;
  }
  if (param_1 == param_2) goto LAB_10078a15c;
  bVar1 = *(byte *)((long)param_1 + uVar3);
  uVar5 = (uint)bVar1;
  uVar11 = (uint)uVar3;
  if (1 < bVar1) {
    uVar6 = 4;
    if (uVar11 < 4) {
      uVar6 = uVar11;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_10078a018;
      uVar6 = (uint)(byte)*param_1;
    }
    else if (uVar6 == 2) {
      uVar6 = (uint)(ushort)*param_1;
    }
    else if (uVar6 == 3) {
      uVar6 = (uint)(uint3)*param_1;
    }
    else {
      uVar6 = *param_1;
    }
    uVar5 = uVar6 | bVar1 - 2 << (ulong)((uVar11 & 3) << 3);
    if (3 < uVar11) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 2;
  }
LAB_10078a018:
  if (uVar5 == 1) {
    _swift_release(*(undefined8 *)param_1);
    _swift_release(*(undefined8 *)(param_1 + 4));
    _swift_release(*(undefined8 *)(param_1 + 10));
  }
  else if (uVar5 == 0) {
    (**(code **)(lVar10 + 8))(param_1,lVar9);
  }
  bVar1 = *(byte *)((long)param_2 + uVar3);
  uVar5 = (uint)bVar1;
  if (1 < bVar1) {
    uVar6 = 4;
    if (uVar11 < 4) {
      uVar6 = uVar11;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_10078a0c4;
      uVar6 = (uint)(byte)*param_2;
    }
    else if (uVar6 == 2) {
      uVar6 = (uint)(ushort)*param_2;
    }
    else if (uVar6 == 3) {
      uVar6 = (uint)(uint3)*param_2;
    }
    else {
      uVar6 = *param_2;
    }
    uVar5 = uVar6 | bVar1 - 2 << (ulong)((uVar11 & 3) << 3);
    if (3 < uVar11) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 2;
  }
LAB_10078a0c4:
  if (uVar5 == 1) {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    uVar2 = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_1 + 4) = uVar2;
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    uVar8 = *(undefined8 *)(param_2 + 10);
    *(undefined8 *)(param_1 + 10) = uVar8;
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
    *(byte *)(param_1 + 0xe) = (byte)param_2[0xe];
    *(byte *)((long)param_1 + uVar3) = 1;
    _swift_retain();
    _swift_retain(uVar2);
    _swift_retain(uVar8);
  }
  else if (uVar5 == 0) {
    (**(code **)(lVar10 + 0x10))(param_1,param_2,lVar9);
    *(byte *)((long)param_1 + uVar3) = 0;
  }
  else {
    _memcpy(param_1,param_2,uVar3 + 1);
  }
LAB_10078a15c:
  puVar7 = (undefined8 *)((ulong)(uVar3 + 8 + (long)param_1) & 0xfffffffffffffff8);
  puVar4 = (undefined8 *)((ulong)(uVar3 + 8 + (long)param_2) & 0xfffffffffffffff8);
  uVar8 = puVar7[1];
  uVar2 = puVar4[1];
  uVar12 = *puVar4;
  puVar7[1] = puVar4[1];
  *puVar7 = uVar12;
  _swift_retain(uVar2);
  _swift_release(uVar8);
  return param_1;
}



/* Address: 0x10078a1a4 | FUN_10078a1a4 */

void FUN_10078a1a4(undefined8 *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar2 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar4 = *(ulong *)(lVar2 + 0x40);
  if (uVar4 < 0x3a) {
    uVar4 = 0x39;
  }
  bVar1 = *(byte *)((long)param_2 + uVar4);
  uVar6 = (uint)bVar1;
  if (1 < bVar1) {
    uVar8 = (uint)uVar4;
    uVar7 = 4;
    if (uVar8 < 4) {
      uVar7 = uVar8;
    }
    if ((int)uVar7 < 2) {
      if (uVar7 == 0) goto LAB_10078a244;
      uVar7 = (uint)(byte)*param_2;
    }
    else if (uVar7 == 2) {
      uVar7 = (uint)(ushort)*param_2;
    }
    else if (uVar7 == 3) {
      uVar7 = (uint)(uint3)*param_2;
    }
    else {
      uVar7 = *param_2;
    }
    uVar6 = uVar7 | bVar1 - 2 << (ulong)((uVar8 & 3) << 3);
    if (3 < uVar8) {
      uVar6 = uVar7;
    }
    uVar6 = uVar6 + 2;
  }
LAB_10078a244:
  if (uVar6 == 1) {
    uVar9 = *(undefined8 *)param_2;
    uVar11 = *(undefined8 *)(param_2 + 6);
    uVar10 = *(undefined8 *)(param_2 + 4);
    param_1[1] = *(undefined8 *)(param_2 + 2);
    *param_1 = uVar9;
    param_1[3] = uVar11;
    param_1[2] = uVar10;
    uVar9 = *(undefined8 *)(param_2 + 8);
    param_1[5] = *(undefined8 *)(param_2 + 10);
    param_1[4] = uVar9;
    uVar9 = *(undefined8 *)((long)param_2 + 0x29);
    *(undefined8 *)((long)param_1 + 0x31) = *(undefined8 *)((long)param_2 + 0x31);
    *(undefined8 *)((long)param_1 + 0x29) = uVar9;
    *(undefined1 *)((long)param_1 + uVar4) = 1;
  }
  else if (uVar6 == 0) {
    (**(code **)(lVar2 + 0x20))(param_1,param_2);
    *(undefined1 *)((long)param_1 + uVar4) = 0;
  }
  else {
    _memcpy(param_1,param_2,uVar4 + 1);
  }
  puVar5 = (undefined8 *)(uVar4 + 8 + (long)param_1 & 0xfffffffffffffff8);
  puVar3 = (undefined8 *)((ulong)(uVar4 + 8 + (long)param_2) & 0xfffffffffffffff8);
  uVar9 = *puVar3;
  puVar5[1] = puVar3[1];
  *puVar5 = uVar9;
  return;
}


