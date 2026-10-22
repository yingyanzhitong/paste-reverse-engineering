/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1009bf6c4 | FUN_1009bf6c4 */

void FUN_1009bf6c4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  AsyncMapSequence AVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 local_80;
  undefined *local_78;
  long local_70;
  undefined8 local_68;
  
  lVar2 = 0;
  local_80 = param_2;
  local_68 = param_1;
  FUN_1009bf908();
  lVar7 = (long)&local_80 - (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_1009bf914(0xff,param_3,param_4);
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8c0e0,lVar2);
  local_78 = (undefined *)Swift::AsyncMapSequence::typeMetadataAccessor();
  local_70 = *(long *)(local_78 + -8);
  lVar6 = lVar7 - (*(long *)(local_70 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100708128(lVar7,param_3);
  puVar3 = &DAT_100f25928;
  _swift_allocObject(&DAT_100f25928,0x20,7);
  *(long *)(puVar3 + 0x10) = param_3;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  (extension_Swift)::Swift::AsyncSequence::_map();
  _swift_release(puVar3);
  FUN_1000f8b08(&DAT_100ff2c48,&DAT_100c8bfb0);
  FUN_1009bfb5c();
  AVar4 = Swift::AsyncMapSequence::typeMetadataAccessor();
  lVar2 = *(long *)(AVar4.unknown + -8);
  lVar7 = lVar6 - (*(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100f25950;
  _swift_allocObject(&DAT_100f25950,0x20,7);
  *(long *)(puVar3 + 0x10) = param_3;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  (extension_Swift)::Swift::AsyncSequence::_map();
  _swift_release(puVar3);
  (**(code **)(*(long *)(param_3 + -8) + 8))(local_80,param_3);
  puVar1 = local_78;
  puVar3 = PTR_Swift__Swift__AsyncMapSequence<undefined,undefined>_>Swift__AsyncSequence_100eaef68;
  puVar5 = PTR_Swift__Swift__AsyncMapSequence<undefined,undefined>_>Swift__AsyncSequence_100eaef68;
  _swift_getWitnessTable
            (PTR_Swift__Swift__AsyncMapSequence<undefined,undefined>_>Swift__AsyncSequence_100eaef68
             ,local_78);
  _swift_getWitnessTable(puVar3,AVar4.unknown);
  FUN_10079f7a0(local_68,lVar6,lVar7,puVar1,AVar4.unknown,puVar5,puVar3);
  (**(code **)(lVar2 + 8))(lVar7,AVar4.unknown);
  (**(code **)(local_70 + 8))(lVar6,puVar1);
  return;
}



/* Address: 0x1009bf908 | FUN_1009bf908 */

void FUN_1009bf908(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1009bf914 | FUN_1009bf914 */

void FUN_1009bf914(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1009bf920 | FUN_1009bf920 */

void FUN_1009bf920(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  AsyncMapSequence AVar4;
  AsyncMapSequence AVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *local_60;
  undefined *puStack_58;
  undefined *local_50;
  undefined *puStack_48;
  
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  uVar3 = 0xff;
  FUN_1009bf908(0xff,uVar1,uVar2);
  FUN_1009bf914(0xff,uVar1,uVar2);
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8c0e0,uVar3);
  AVar4 = Swift::AsyncMapSequence::typeMetadataAccessor();
  FUN_1000f8b08(&DAT_100ff2c48,&DAT_100c8bfb0);
  FUN_1009bfb5c();
  AVar5 = Swift::AsyncMapSequence::typeMetadataAccessor();
  puVar7 = PTR_Swift__Swift__AsyncMapSequence<undefined,undefined>_>Swift__AsyncSequence_100eaef68;
  puVar6 = PTR_Swift__Swift__AsyncMapSequence<undefined,undefined>_>Swift__AsyncSequence_100eaef68;
  _swift_getWitnessTable
            (PTR_Swift__Swift__AsyncMapSequence<undefined,undefined>_>Swift__AsyncSequence_100eaef68
             ,AVar4.unknown);
  _swift_getWitnessTable(puVar7,AVar5.unknown);
  lVar8 = 0;
  local_60 = AVar4.unknown;
  puStack_58 = AVar5.unknown;
  local_50 = puVar6;
  puStack_48 = puVar7;
  FUN_10079fb4c(0,&local_60);
  (**(code **)(*(long *)(lVar8 + -8) + 0x10))(param_1);
  return;
}



/* Address: 0x1009bfa2c | FUN_1009bfa2c */

void FUN_1009bfa2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  _swift_task_switch(FUN_1009bfa48,0,0);
  return;
}



/* Address: 0x1009bfa48 | FUN_1009bfa48 */

void FUN_1009bfa48(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  long lVar4;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x18);
  lVar3 = 0;
  FUN_1009c0450(0,*(undefined8 *)(unaff_x22 + 0x20),*(undefined8 *)(unaff_x22 + 0x28));
  lVar4 = *(long *)(lVar3 + -8);
  (**(code **)(lVar4 + 0x10))(uVar1,uVar2,lVar3);
  (**(code **)(lVar4 + 0x38))(uVar1,0,1,lVar3);
                    /* WARNING: Could not recover jumptable at 0x0001009bfac0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1009bfac4 | FUN_1009bfac4 */

void FUN_1009bfac4(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x1009bfad4 | FUN_1009bfad4 */

void FUN_1009bfad4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)&DAT_00000030;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_1005c804c;
  FUN_1009bfa2c(plVar3,param_1,param_2,uVar1,uVar2);
  return;
}



/* Address: 0x1009bfb5c | FUN_1009bfb5c */

void FUN_1009bfb5c(void)

{
  undefined *puVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  
  if (DAT_100ff2c50 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  puVar1 = &DAT_100ff2c48;
  FUN_1000f8b08(&DAT_100ff2c48,&DAT_100c8bfb0);
  pTVar2 = &TargetProtocolConformanceDescriptor_100c8c0e0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8c0e0,puVar1);
  DAT_100ff2c50 = pTVar2;
  return;
}



/* Address: 0x1009bfbac | FUN_1009bfbac */

void FUN_1009bfbac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_3;
  *(undefined8 *)(unaff_x22 + 0x20) = param_4;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  _swift_task_switch(FUN_1009bfbc8,0,0);
  return;
}



/* Address: 0x1009bfbc8 | FUN_1009bfbc8 */

void FUN_1009bfbc8(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x10);
  lVar1 = 0;
  FUN_1009c0450(0,*(undefined8 *)(unaff_x22 + 0x18),*(undefined8 *)(unaff_x22 + 0x20));
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(uVar2,1,1,lVar1);
                    /* WARNING: Could not recover jumptable at 0x0001009bfc20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1009bfc24 | FUN_1009bfc24 */

void FUN_1009bfc24(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)&DAT_00000030;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1005c804c;
  FUN_1009bfbac(plVar3,param_1,param_2,uVar1,uVar2);
  return;
}



/* Address: 0x1009bfcac | FUN_1009bfcac */

void FUN_1009bfcac(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  AsyncMapSequence AVar4;
  AsyncMapSequence AVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *local_60;
  undefined *puStack_58;
  undefined *local_50;
  undefined *puStack_48;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = 0xff;
  FUN_1009bf908(0xff,uVar1,uVar2);
  FUN_1009bf914(0xff,uVar1,uVar2);
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8c0e0,uVar3);
  AVar4 = Swift::AsyncMapSequence::typeMetadataAccessor();
  FUN_1000f8b08(&DAT_100ff2c48,&DAT_100c8bfb0);
  FUN_1009bfb5c();
  AVar5 = Swift::AsyncMapSequence::typeMetadataAccessor();
  puVar7 = PTR_Swift__Swift__AsyncMapSequence<undefined,undefined>_>Swift__AsyncSequence_100eaef68;
  puVar6 = PTR_Swift__Swift__AsyncMapSequence<undefined,undefined>_>Swift__AsyncSequence_100eaef68;
  _swift_getWitnessTable
            (PTR_Swift__Swift__AsyncMapSequence<undefined,undefined>_>Swift__AsyncSequence_100eaef68
             ,AVar4.unknown);
  _swift_getWitnessTable(puVar7,AVar5.unknown);
  local_60 = AVar4.unknown;
  puStack_58 = AVar5.unknown;
  local_50 = puVar6;
  puStack_48 = puVar7;
  FUN_10079fb4c(0,&local_60);
  FUN_10079f894();
  return;
}



/* Address: 0x1009bfda4 | FUN_1009bfda4 */

uint FUN_1009bfda4(undefined8 param_1,uint param_2)

{
  return param_2 & 1;
}



/* Address: 0x1009bfdac | FUN_1009bfdac */

void FUN_1009bfdac(undefined8 param_1,long param_2)

{
  Optional OVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined7 extraout_var;
  undefined8 uVar6;
  undefined8 unaff_x20;
  undefined8 uVar7;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_1;
  *(undefined8 *)(unaff_x22 + 0x38) = unaff_x20;
  uVar7 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x40) = uVar7;
  uVar6 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x48) = uVar6;
  lVar2 = 0;
  FUN_1009c0450(0,uVar7,uVar6);
  *(long *)(unaff_x22 + 0x50) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x58) = lVar2;
  uVar4 = *(long *)(lVar2 + 0x40) + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x60) = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x68) = uVar4;
  uVar5 = 0xff;
  FUN_1009bf914(0xff,uVar7,uVar6);
  *(undefined8 *)(unaff_x22 + 0x70) = uVar5;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x78) = CONCAT71(extraout_var,OVar1.value);
  lVar2 = *(long *)(CONCAT71(extraout_var,OVar1.value) + -8);
  *(long *)(unaff_x22 + 0x80) = lVar2;
  uVar4 = *(long *)(lVar2 + 0x40) + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x88) = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x90) = uVar4;
  _swift_task_switch(FUN_1009bfe8c,0,0);
  return;
}



/* Address: 0x1009bfe8c | FUN_1009bfe8c */

void FUN_1009bfe8c(void)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  AsyncMapSequence AVar5;
  AsyncMapSequence AVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long unaff_x22;
  
  if ((*(byte *)(*(long *)(unaff_x22 + 0x38) + 8) & 1) != 0) {
    uVar9 = *(undefined8 *)(unaff_x22 + 0x30);
    lVar2 = 0;
    _swift_getAssociatedTypeWitness
              (0,*(undefined8 *)(unaff_x22 + 0x48),*(undefined8 *)(unaff_x22 + 0x40),
               PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
               PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
    (**(code **)(*(long *)(lVar2 + -8) + 0x38))(uVar9,1,1,lVar2);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x68);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x90));
    _swift_task_dealloc(uVar9);
    _swift_task_dealloc(uVar4);
    _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001009bff38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar9 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
  plVar3 = (long *)&DAT_00000030;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x98) = plVar3;
  uVar4 = 0xff;
  FUN_1009bf908(0xff,uVar9,uVar1);
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8c0e0,uVar4);
  AVar5 = Swift::AsyncMapSequence::typeMetadataAccessor();
  FUN_1000f8b08(&DAT_100ff2c48,&DAT_100c8bfb0);
  FUN_1009bfb5c();
  AVar6 = Swift::AsyncMapSequence::typeMetadataAccessor();
  puVar8 = PTR_Swift__Swift__AsyncMapSequence<undefined,undefined>_>Swift__AsyncSequence_100eaef68;
  puVar7 = PTR_Swift__Swift__AsyncMapSequence<undefined,undefined>_>Swift__AsyncSequence_100eaef68;
  _swift_getWitnessTable
            (PTR_Swift__Swift__AsyncMapSequence<undefined,undefined>_>Swift__AsyncSequence_100eaef68
             ,AVar5.unknown);
  _swift_getWitnessTable(puVar8,AVar6.unknown);
  *(undefined **)(unaff_x22 + 0x10) = AVar5.unknown;
  *(undefined **)(unaff_x22 + 0x18) = AVar6.unknown;
  *(undefined **)(unaff_x22 + 0x20) = puVar7;
  *(undefined **)(unaff_x22 + 0x28) = puVar8;
  uVar9 = 0;
  FUN_10079fb58(0);
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1009c003c;
  FUN_10079f72c(*(undefined8 *)(unaff_x22 + 0x90),uVar9);
  return;
}



/* Address: 0x1009c003c | FUN_1009c003c */

void FUN_1009c003c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xa0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x98));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1009c00a0;
  }
  else {
    pcVar1 = FUN_1009c0260;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1009c00a0 | FUN_1009c00a0 */

void FUN_1009c00a0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long unaff_x22;
  
  uVar9 = *(undefined8 *)(unaff_x22 + 0x88);
  lVar7 = *(long *)(unaff_x22 + 0x70);
  (**(code **)(*(long *)(unaff_x22 + 0x80) + 0x20))
            (uVar9,*(undefined8 *)(unaff_x22 + 0x90),*(undefined8 *)(unaff_x22 + 0x78));
  (**(code **)(*(long *)(lVar7 + -8) + 0x30))(uVar9,1,lVar7);
  if ((int)uVar9 != 1) {
    uVar8 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x50);
    lVar7 = *(long *)(unaff_x22 + 0x58);
    uVar5 = uVar8;
    (**(code **)(lVar7 + 0x30))(uVar8,1,uVar9);
    if ((int)uVar5 != 1) {
      uVar5 = *(undefined8 *)(unaff_x22 + 0x60);
      uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
      uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
      uVar3 = *(undefined8 *)(unaff_x22 + 0x48);
      pcVar6 = *(code **)(lVar7 + 0x20);
      (*pcVar6)(uVar2,uVar8,uVar9);
      (*pcVar6)(uVar5,uVar2,uVar9);
      lVar7 = 0;
      _swift_getAssociatedTypeWitness
                (0,uVar3,uVar1,
                 PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
                 PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
      lVar10 = *(long *)(lVar7 + -8);
      (**(code **)(lVar10 + 0x30))(uVar5,1,lVar7);
      bVar4 = (int)uVar5 != 1;
      if (bVar4) {
        uVar9 = *(undefined8 *)(unaff_x22 + 0x30);
        (**(code **)(lVar10 + 0x20))(uVar9,*(undefined8 *)(unaff_x22 + 0x60),lVar7);
        pcVar6 = *(code **)(lVar10 + 0x38);
      }
      else {
        uVar9 = *(undefined8 *)(unaff_x22 + 0x30);
        *(undefined1 *)(*(long *)(unaff_x22 + 0x38) + 8) = 1;
        pcVar6 = *(code **)(lVar10 + 0x38);
      }
      bVar4 = !bVar4;
      goto LAB_1009c0214;
    }
  }
  uVar9 = *(undefined8 *)(unaff_x22 + 0x30);
  lVar7 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(unaff_x22 + 0x48),*(undefined8 *)(unaff_x22 + 0x40),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  pcVar6 = *(code **)(*(long *)(lVar7 + -8) + 0x38);
  bVar4 = true;
LAB_1009c0214:
  (*pcVar6)(uVar9,bVar4,1,lVar7);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x68);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x90));
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar5);
                    /* WARNING: Could not recover jumptable at 0x0001009c025c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1009c0260 | FUN_1009c0260 */

void FUN_1009c0260(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x68);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x90));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001009c02bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1009c02c0 | FUN_1009c02c0 */

void FUN_1009c02c0(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0xb0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005c804c;
  FUN_1009bfdac(plVar1,param_1,param_2);
  return;
}



/* Address: 0x1009c0328 | FUN_1009c0328 */

void FUN_1009c0328(void)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 in_x3;
  long in_x4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = in_x3;
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(in_x4 + 0x18),*(undefined8 *)(in_x4 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Failure_100eaeae0);
  *(long *)(unaff_x22 + 0x18) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x20) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x28) = uVar2;
  plVar3 = (long *)(ulong)*(uint *)(PTR__next_100eaebe8 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x30) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_100708dfc;
  (extension_Swift)::Swift::AsyncIteratorProtocol::_next();
  return;
}



/* Address: 0x1009c0404 | FUN_1009c0404 */

void FUN_1009c0404(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_2;
  FUN_1009bfcac();
  (**(code **)(*(long *)(param_2 + -8) + 8))();
  *param_1 = lVar1;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Address: 0x1009c0450 | FUN_1009c0450 */

void FUN_1009c0450(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1009c045c | FUN_1009c045c */

void FUN_1009c045c(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = *(long *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  lVar5 = *(long *)(lVar1 + -8);
  lVar4 = *(long *)(lVar5 + 0x40);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar2,lVar1,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar3 = *(long *)(*(long *)(lVar3 + -8) + 0x40);
  (**(code **)(lVar5 + 0x10))(&stack0xffffffffffffffb0 + -(lVar4 + 0xfU & 0xfffffffffffffff0));
  Swift::AsyncSequence::_makeAsyncIterator();
  FUN_1009c052c(param_1,(long)(&stack0xffffffffffffffb0 + -(lVar4 + 0xfU & 0xfffffffffffffff0)) -
                        (lVar3 + 0xfU & 0xfffffffffffffff0),lVar1,uVar2);
  return;
}



/* Address: 0x1009c052c | FUN_1009c052c */

void FUN_1009c052c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1009c05a0();
  *(undefined1 *)(param_1 + *(int *)(lVar1 + 0x24)) = 0;
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_4,param_3,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
                    /* WARNING: Could not recover jumptable at 0x0001009c059c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_1,param_2,lVar1);
  return;
}



/* Address: 0x1009c05a0 | FUN_1009c05a0 */

void FUN_1009c05a0(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1009c05ac | FUN_1009c05ac */

undefined1 FUN_1009c05ac(long param_1)

{
  long unaff_x20;
  
  return *(undefined1 *)(unaff_x20 + *(int *)(param_1 + 0x24));
}



/* Address: 0x1009c05b8 | FUN_1009c05b8 */

void FUN_1009c05b8(undefined1 param_1,long param_2)

{
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + *(int *)(param_2 + 0x24)) = param_1;
  return;
}



/* Address: 0x1009c05c4 | FUN_1009c05c4 */

void FUN_1009c05c4(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  Optional OVar2;
  long lVar3;
  ulong uVar4;
  undefined7 extraout_var;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 unaff_x20;
  undefined8 uVar9;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  uVar8 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x28) = uVar8;
  uVar9 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x30) = uVar9;
  puVar1 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar8,uVar9,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  *(long *)(unaff_x22 + 0x38) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x40) = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x48) = uVar4;
  OVar2 = Swift::Optional::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x50) = CONCAT71(extraout_var,OVar2.value);
  lVar3 = *(long *)(CONCAT71(extraout_var,OVar2.value) + -8);
  *(long *)(unaff_x22 + 0x58) = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xf;
  uVar5 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x60) = uVar5;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x68) = uVar4;
  uVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar8,uVar9,puVar1,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  _swift_getAssociatedConformanceWitness
            (uVar8,uVar9,uVar6,puVar1,
             PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
            );
  plVar7 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x70) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_1009c0710;
  Swift::AsyncIteratorProtocol::_next();
  return;
}



/* Address: 0x1009c0710 | FUN_1009c0710 */

void FUN_1009c0710(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x78) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x70));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1009c0774;
  }
  else {
    pcVar1 = FUN_1009c08b8;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1009c0774 | FUN_1009c0774 */

void FUN_1009c0774(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x38);
  lVar2 = *(long *)(unaff_x22 + 0x40);
  (**(code **)(*(long *)(unaff_x22 + 0x58) + 0x20))
            (uVar4,*(undefined8 *)(unaff_x22 + 0x68),*(undefined8 *)(unaff_x22 + 0x50));
  (**(code **)(lVar2 + 0x30))(uVar4,1,uVar3);
  if ((int)uVar4 == 1) {
    lVar2 = *(long *)(unaff_x22 + 0x18);
    lVar1 = *(long *)(unaff_x22 + 0x20);
    (**(code **)(*(long *)(unaff_x22 + 0x58) + 8))
              (*(undefined8 *)(unaff_x22 + 0x60),*(undefined8 *)(unaff_x22 + 0x50));
    lVar2 = (long)*(int *)(lVar2 + 0x24);
    uVar4 = 1;
    if ((*(byte *)(lVar1 + lVar2) & 1) != 0) goto LAB_1009c084c;
    *(undefined1 *)(lVar1 + lVar2) = 1;
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x38);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x10);
    pcVar6 = *(code **)(*(long *)(unaff_x22 + 0x40) + 0x20);
    (*pcVar6)(uVar4,*(undefined8 *)(unaff_x22 + 0x60),uVar3);
    (*pcVar6)(uVar5,uVar4,uVar3);
    uVar4 = 0;
  }
  (**(code **)(*(long *)(unaff_x22 + 0x40) + 0x38))
            (*(undefined8 *)(unaff_x22 + 0x10),uVar4,1,*(undefined8 *)(unaff_x22 + 0x38));
  uVar4 = 0;
LAB_1009c084c:
  uVar3 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x10);
  lVar2 = 0;
  FUN_1009c0450(0,*(undefined8 *)(unaff_x22 + 0x30),*(undefined8 *)(unaff_x22 + 0x28));
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(uVar8,uVar4,1,lVar2);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar7);
                    /* WARNING: Could not recover jumptable at 0x0001009c08b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1009c08b8 | FUN_1009c08b8 */

void FUN_1009c08b8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x68));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001009c0904. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1009c0908 | FUN_1009c0908 */

void FUN_1009c0908(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005c804c;
  FUN_1009c05c4(plVar1,param_1,param_2);
  return;
}



/* Address: 0x1009c0970 | FUN_1009c0970 */

void FUN_1009c0970(long param_1)

{
  FUN_1009c045c();
                    /* WARNING: Could not recover jumptable at 0x0001009c099c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + -8) + 8))();
  return;
}



/* Address: 0x1009c09a0 | FUN_1009c09a0 */

void FUN_1009c09a0(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100ff2c58;
  FUN_1000f7830(&DAT_100ff2c58,&DAT_100c8c350);
                    /* WARNING: Could not recover jumptable at 0x0001009c09e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar1 + -8) + 0x38))(param_1,1,1,puVar1);
  return;
}



/* Address: 0x1009c09e8 | FUN_1009c09e8 */

undefined * FUN_1009c09e8(void)

{
  undefined *puVar1;
  code *pcVar2;
  int iVar3;
  undefined *puVar4;
  pthread_mutexattr_t local_38;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100ea82f0;
  puVar4 = &DAT_100ff2c60;
  FUN_1000f7830(&DAT_100ff2c60,&DAT_100c8bfe0);
  _swift_allocObject();
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  *(undefined **)(puVar4 + 0x10) = PTR___swiftEmptyArrayStorage_100eae0d8;
  *(undefined8 *)(puVar4 + 0x18) = 0;
  puVar4[0x20] = 0;
  *(undefined **)(puVar4 + 0x28) = puVar1;
  local_38.__sig = 0;
  local_38.__opaque[0] = '\0';
  local_38.__opaque[1] = '\0';
  local_38.__opaque[2] = '\0';
  local_38.__opaque[3] = '\0';
  local_38.__opaque[4] = '\0';
  local_38.__opaque[5] = '\0';
  local_38.__opaque[6] = '\0';
  local_38.__opaque[7] = '\0';
  _pthread_mutexattr_init(&local_38);
  iVar3 = _pthread_mutex_init((pthread_mutex_t *)(puVar4 + 0x30),&local_38);
  if (iVar3 != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1009c0a8c);
    (*pcVar2)();
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_28) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1009c0a90 | FUN_1009c0a90 */

undefined1  [16] FUN_1009c0a90(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xe90000000000006c;
  auVar1._0_8_ = 0x616e6769732d6c73;
  return auVar1;
}



/* Address: 0x1009c0aac | FUN_1009c0aac */

undefined1  [16] FUN_1009c0aac(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x8000000100db71f0;
  auVar1._0_8_ = 0xd00000000000001a;
  return auVar1;
}



/* Address: 0x1009c0ac8 | FUN_1009c0ac8 */

undefined1  [16] FUN_1009c0ac8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x8000000100db7210;
  auVar1._0_8_ = 0xd000000000000016;
  return auVar1;
}



/* Address: 0x1009c0ae4 | FUN_1009c0ae4 */

undefined1  [16] FUN_1009c0ae4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xea00000000006563;
  auVar1._0_8_ = 0x69767265732d6c73;
  return auVar1;
}



/* Address: 0x1009c0b00 | FUN_1009c0b00 */

undefined1  [16] FUN_1009c0b00(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xeb00000000736563;
  auVar1._0_8_ = 0x69767265732d6c73;
  return auVar1;
}



/* Address: 0x1009c0b20 | FUN_1009c0b20 */

undefined1  [16] FUN_1009c0b20(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = &DAT_e800000000000000;
  auVar1._0_8_ = 0x726f7272652d6c73;
  return auVar1;
}



/* Address: 0x1009c0b38 | FUN_1009c0b38 */

void FUN_1009c0b38(undefined8 *param_1)

{
  *param_1 = 0x616e6769732d6c73;
  param_1[1] = 0xe90000000000006c;
  param_1[2] = 0xd00000000000001a;
  param_1[3] = 0x8000000100db71f0;
  param_1[4] = 0xd000000000000016;
  param_1[5] = 0x8000000100db7210;
  param_1[6] = 0x69767265732d6c73;
  param_1[7] = 0xea00000000006563;
  param_1[8] = 0x69767265732d6c73;
  param_1[9] = 0xeb00000000736563;
  param_1[10] = 0x726f7272652d6c73;
  param_1[0xb] = &DAT_e800000000000000;
  return;
}



/* Address: 0x1009c0bd0 | FUN_1009c0bd0 */

void FUN_1009c0bd0(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8bff8,param_1);
  return;
}



/* Address: 0x1009c0be0 | thunk_FUN_1007090f4 */

void thunk_FUN_1007090f4(void)

{
  FUN_1007090f4();
  return;
}



/* Address: 0x1009c0be4 | FUN_1009c0be4 */

void FUN_1009c0be4(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8c098,param_1);
  return;
}



/* Address: 0x1009c0bf4 | FUN_1009c0bf4 */

void FUN_1009c0bf4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  AsyncMapSequence AVar4;
  AsyncMapSequence AVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined *local_60;
  undefined *puStack_58;
  undefined *local_50;
  undefined *puStack_48;
  
  ppuVar9 = &local_60;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = 0xff;
  FUN_1009bf908(0xff,uVar1,uVar2);
  FUN_1009bf914(0xff,uVar1,uVar2);
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8c0e0,uVar3);
  AVar4 = Swift::AsyncMapSequence::typeMetadataAccessor();
  FUN_1000f8b08(&DAT_100ff2c48,&DAT_100c8bfb0);
  FUN_1009bfb5c();
  AVar5 = Swift::AsyncMapSequence::typeMetadataAccessor();
  puVar7 = PTR_Swift__Swift__AsyncMapSequence<undefined,undefined>_>Swift__AsyncSequence_100eaef68;
  puVar6 = PTR_Swift__Swift__AsyncMapSequence<undefined,undefined>_>Swift__AsyncSequence_100eaef68;
  _swift_getWitnessTable
            (PTR_Swift__Swift__AsyncMapSequence<undefined,undefined>_>Swift__AsyncSequence_100eaef68
             ,AVar4.unknown);
  _swift_getWitnessTable(puVar7,AVar5.unknown);
  lVar8 = 0x13f;
  local_60 = AVar4.unknown;
  puStack_58 = AVar5.unknown;
  local_50 = puVar6;
  puStack_48 = puVar7;
  FUN_10079fb4c();
  if (ppuVar9 < (undefined1 *)0x40) {
    local_60 = (undefined *)(*(long *)(lVar8 + -8) + 0x40);
    _swift_initStructMetadata(param_1,0,1,&local_60,param_1 + 0x20);
  }
  return;
}



/* Address: 0x1009c0d24 | FUN_1009c0d24 */

long * FUN_1009c0d24(long *param_1,long *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 uVar4;
  AsyncMapSequence AVar5;
  AsyncMapSequence AVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  undefined *local_60;
  undefined *puStack_58;
  undefined *local_50;
  undefined *puStack_48;
  
  uVar1 = *(undefined8 *)(param_3 + 0x10);
  uVar2 = *(undefined8 *)(param_3 + 0x18);
  uVar4 = 0xff;
  FUN_1009bf908(0xff,uVar1,uVar2);
  FUN_1009bf914(0xff,uVar1,uVar2);
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8c0e0,uVar4);
  AVar5 = Swift::AsyncMapSequence::typeMetadataAccessor();
  FUN_1000f8b08(&DAT_100ff2c48,&DAT_100c8bfb0);
  FUN_1009bfb5c();
  AVar6 = Swift::AsyncMapSequence::typeMetadataAccessor();
  puVar8 = PTR_Swift__Swift__AsyncMapSequence<undefined,undefined>_>Swift__AsyncSequence_100eaef68;
  puVar7 = PTR_Swift__Swift__AsyncMapSequence<undefined,undefined>_>Swift__AsyncSequence_100eaef68;
  _swift_getWitnessTable
            (PTR_Swift__Swift__AsyncMapSequence<undefined,undefined>_>Swift__AsyncSequence_100eaef68
             ,AVar5.unknown);
  _swift_getWitnessTable(puVar8,AVar6.unknown);
  lVar9 = 0;
  local_60 = AVar5.unknown;
  puStack_58 = AVar6.unknown;
  local_50 = puVar7;
  puStack_48 = puVar8;
  FUN_10079fb4c(0,&local_60);
  uVar3 = *(uint *)(*(long *)(lVar9 + -8) + 0x50);
  if ((uVar3 >> 0x11 & 1) == 0) {
    (**(code **)(*(long *)(AVar5.unknown + -8) + 0x10))(param_1,param_2,AVar5.unknown);
    (**(code **)(*(long *)(AVar6.unknown + -8) + 0x10))
              ((long)param_1 + (long)*(int *)(lVar9 + 0x34),
               (long)param_2 + (long)*(int *)(lVar9 + 0x34),AVar6.unknown);
  }
  else {
    lVar9 = *param_2;
    *param_1 = lVar9;
    uVar10 = (ulong)uVar3 & 0xff;
    param_1 = (long *)(lVar9 + (uVar10 + 0x10 & (uVar10 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x1009c0e84 | FUN_1009c0e84 */

void FUN_1009c0e84(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  AsyncMapSequence AVar4;
  AsyncMapSequence AVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *local_60;
  undefined *puStack_58;
  undefined *local_50;
  undefined *puStack_48;
  
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  uVar3 = 0xff;
  FUN_1009bf908(0xff,uVar1,uVar2);
  FUN_1009bf914(0xff,uVar1,uVar2);
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8c0e0,uVar3);
  AVar4 = Swift::AsyncMapSequence::typeMetadataAccessor();
  (**(code **)(*(long *)(AVar4.unknown + -8) + 8))(param_1,AVar4.unknown);
  FUN_1000f8b08(&DAT_100ff2c48,&DAT_100c8bfb0);
  FUN_1009bfb5c();
  AVar5 = Swift::AsyncMapSequence::typeMetadataAccessor();
  puVar7 = PTR_Swift__Swift__AsyncMapSequence<undefined,undefined>_>Swift__AsyncSequence_100eaef68;
  puVar6 = PTR_Swift__Swift__AsyncMapSequence<undefined,undefined>_>Swift__AsyncSequence_100eaef68;
  _swift_getWitnessTable
            (PTR_Swift__Swift__AsyncMapSequence<undefined,undefined>_>Swift__AsyncSequence_100eaef68
             ,AVar4.unknown);
  _swift_getWitnessTable(puVar7,AVar5.unknown);
  lVar8 = 0;
  local_60 = AVar4.unknown;
  puStack_58 = AVar5.unknown;
  local_50 = puVar6;
  puStack_48 = puVar7;
  FUN_10079fb4c(0,&local_60);
  (**(code **)(*(long *)(AVar5.unknown + -8) + 8))(param_1 + *(int *)(lVar8 + 0x34),AVar5.unknown);
  return;
}



/* Address: 0x1009c0fa4 | FUN_1009c0fa4 */

long FUN_1009c0fa4(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  AsyncMapSequence AVar4;
  AsyncMapSequence AVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *local_60;
  undefined *puStack_58;
  undefined *local_50;
  undefined *puStack_48;
  
  uVar1 = *(undefined8 *)(param_3 + 0x10);
  uVar2 = *(undefined8 *)(param_3 + 0x18);
  uVar3 = 0xff;
  FUN_1009bf908(0xff,uVar1,uVar2);
  FUN_1009bf914(0xff,uVar1,uVar2);
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8c0e0,uVar3);
  AVar4 = Swift::AsyncMapSequence::typeMetadataAccessor();
  (**(code **)(*(long *)(AVar4.unknown + -8) + 0x10))(param_1,param_2,AVar4.unknown);
  FUN_1000f8b08(&DAT_100ff2c48,&DAT_100c8bfb0);
  FUN_1009bfb5c();
  AVar5 = Swift::AsyncMapSequence::typeMetadataAccessor();
  puVar7 = PTR_Swift__Swift__AsyncMapSequence<undefined,undefined>_>Swift__AsyncSequence_100eaef68;
  puVar6 = PTR_Swift__Swift__AsyncMapSequence<undefined,undefined>_>Swift__AsyncSequence_100eaef68;
  _swift_getWitnessTable
            (PTR_Swift__Swift__AsyncMapSequence<undefined,undefined>_>Swift__AsyncSequence_100eaef68
             ,AVar4.unknown);
  _swift_getWitnessTable(puVar7,AVar5.unknown);
  lVar8 = 0;
  local_60 = AVar4.unknown;
  puStack_58 = AVar5.unknown;
  local_50 = puVar6;
  puStack_48 = puVar7;
  FUN_10079fb4c(0,&local_60);
  (**(code **)(*(long *)(AVar5.unknown + -8) + 0x10))
            (param_1 + *(int *)(lVar8 + 0x34),param_2 + *(int *)(lVar8 + 0x34),AVar5.unknown);
  return param_1;
}



/* Address: 0x1009c10d4 | FUN_1009c10d4 */

long FUN_1009c10d4(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  AsyncMapSequence AVar4;
  AsyncMapSequence AVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *local_60;
  undefined *puStack_58;
  undefined *local_50;
  undefined *puStack_48;
  
  uVar1 = *(undefined8 *)(param_3 + 0x10);
  uVar2 = *(undefined8 *)(param_3 + 0x18);
  uVar3 = 0xff;
  FUN_1009bf908(0xff,uVar1,uVar2);
  FUN_1009bf914(0xff,uVar1,uVar2);
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8c0e0,uVar3);
  AVar4 = Swift::AsyncMapSequence::typeMetadataAccessor();
  (**(code **)(*(long *)(AVar4.unknown + -8) + 0x18))(param_1,param_2,AVar4.unknown);
  FUN_1000f8b08(&DAT_100ff2c48,&DAT_100c8bfb0);
  FUN_1009bfb5c();
  AVar5 = Swift::AsyncMapSequence::typeMetadataAccessor();
  puVar7 = PTR_Swift__Swift__AsyncMapSequence<undefined,undefined>_>Swift__AsyncSequence_100eaef68;
  puVar6 = PTR_Swift__Swift__AsyncMapSequence<undefined,undefined>_>Swift__AsyncSequence_100eaef68;
  _swift_getWitnessTable
            (PTR_Swift__Swift__AsyncMapSequence<undefined,undefined>_>Swift__AsyncSequence_100eaef68
             ,AVar4.unknown);
  _swift_getWitnessTable(puVar7,AVar5.unknown);
  lVar8 = 0;
  local_60 = AVar4.unknown;
  puStack_58 = AVar5.unknown;
  local_50 = puVar6;
  puStack_48 = puVar7;
  FUN_10079fb4c(0,&local_60);
  (**(code **)(*(long *)(AVar5.unknown + -8) + 0x18))
            (param_1 + *(int *)(lVar8 + 0x34),param_2 + *(int *)(lVar8 + 0x34),AVar5.unknown);
  return param_1;
}



/* Address: 0x1009c1204 | FUN_1009c1204 */

long FUN_1009c1204(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  AsyncMapSequence AVar4;
  AsyncMapSequence AVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *local_60;
  undefined *puStack_58;
  undefined *local_50;
  undefined *puStack_48;
  
  uVar1 = *(undefined8 *)(param_3 + 0x10);
  uVar2 = *(undefined8 *)(param_3 + 0x18);
  uVar3 = 0xff;
  FUN_1009bf908(0xff,uVar1,uVar2);
  FUN_1009bf914(0xff,uVar1,uVar2);
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8c0e0,uVar3);
  AVar4 = Swift::AsyncMapSequence::typeMetadataAccessor();
  (**(code **)(*(long *)(AVar4.unknown + -8) + 0x20))(param_1,param_2,AVar4.unknown);
  FUN_1000f8b08(&DAT_100ff2c48,&DAT_100c8bfb0);
  FUN_1009bfb5c();
  AVar5 = Swift::AsyncMapSequence::typeMetadataAccessor();
  puVar7 = PTR_Swift__Swift__AsyncMapSequence<undefined,undefined>_>Swift__AsyncSequence_100eaef68;
  puVar6 = PTR_Swift__Swift__AsyncMapSequence<undefined,undefined>_>Swift__AsyncSequence_100eaef68;
  _swift_getWitnessTable
            (PTR_Swift__Swift__AsyncMapSequence<undefined,undefined>_>Swift__AsyncSequence_100eaef68
             ,AVar4.unknown);
  _swift_getWitnessTable(puVar7,AVar5.unknown);
  lVar8 = 0;
  local_60 = AVar4.unknown;
  puStack_58 = AVar5.unknown;
  local_50 = puVar6;
  puStack_48 = puVar7;
  FUN_10079fb4c(0,&local_60);
  (**(code **)(*(long *)(AVar5.unknown + -8) + 0x20))
            (param_1 + *(int *)(lVar8 + 0x34),param_2 + *(int *)(lVar8 + 0x34),AVar5.unknown);
  return param_1;
}



/* Address: 0x1009c1334 | FUN_1009c1334 */

long FUN_1009c1334(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  AsyncMapSequence AVar4;
  AsyncMapSequence AVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *local_60;
  undefined *puStack_58;
  undefined *local_50;
  undefined *puStack_48;
  
  uVar1 = *(undefined8 *)(param_3 + 0x10);
  uVar2 = *(undefined8 *)(param_3 + 0x18);
  uVar3 = 0xff;
  FUN_1009bf908(0xff,uVar1,uVar2);
  FUN_1009bf914(0xff,uVar1,uVar2);
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8c0e0,uVar3);
  AVar4 = Swift::AsyncMapSequence::typeMetadataAccessor();
  (**(code **)(*(long *)(AVar4.unknown + -8) + 0x28))(param_1,param_2,AVar4.unknown);
  FUN_1000f8b08(&DAT_100ff2c48,&DAT_100c8bfb0);
  FUN_1009bfb5c();
  AVar5 = Swift::AsyncMapSequence::typeMetadataAccessor();
  puVar7 = PTR_Swift__Swift__AsyncMapSequence<undefined,undefined>_>Swift__AsyncSequence_100eaef68;
  puVar6 = PTR_Swift__Swift__AsyncMapSequence<undefined,undefined>_>Swift__AsyncSequence_100eaef68;
  _swift_getWitnessTable
            (PTR_Swift__Swift__AsyncMapSequence<undefined,undefined>_>Swift__AsyncSequence_100eaef68
             ,AVar4.unknown);
  _swift_getWitnessTable(puVar7,AVar5.unknown);
  lVar8 = 0;
  local_60 = AVar4.unknown;
  puStack_58 = AVar5.unknown;
  local_50 = puVar6;
  puStack_48 = puVar7;
  FUN_10079fb4c(0,&local_60);
  (**(code **)(*(long *)(AVar5.unknown + -8) + 0x28))
            (param_1 + *(int *)(lVar8 + 0x34),param_2 + *(int *)(lVar8 + 0x34),AVar5.unknown);
  return param_1;
}



/* Address: 0x1009c1464 | FUN_1009c1464 */

void FUN_1009c1464(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1009c1470 | FUN_1009c1470 */

void FUN_1009c1470(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  AsyncMapSequence AVar4;
  AsyncMapSequence AVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *local_60;
  undefined *puStack_58;
  undefined *local_50;
  undefined *puStack_48;
  
  uVar1 = *(undefined8 *)(param_3 + 0x10);
  uVar2 = *(undefined8 *)(param_3 + 0x18);
  uVar3 = 0xff;
  FUN_1009bf908(0xff,uVar1,uVar2);
  FUN_1009bf914(0xff,uVar1,uVar2);
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8c0e0,uVar3);
  AVar4 = Swift::AsyncMapSequence::typeMetadataAccessor();
  FUN_1000f8b08(&DAT_100ff2c48,&DAT_100c8bfb0);
  FUN_1009bfb5c();
  AVar5 = Swift::AsyncMapSequence::typeMetadataAccessor();
  puVar7 = PTR_Swift__Swift__AsyncMapSequence<undefined,undefined>_>Swift__AsyncSequence_100eaef68;
  puVar6 = PTR_Swift__Swift__AsyncMapSequence<undefined,undefined>_>Swift__AsyncSequence_100eaef68;
  _swift_getWitnessTable
            (PTR_Swift__Swift__AsyncMapSequence<undefined,undefined>_>Swift__AsyncSequence_100eaef68
             ,AVar4.unknown);
  _swift_getWitnessTable(puVar7,AVar5.unknown);
  lVar8 = 0;
  local_60 = AVar4.unknown;
  puStack_58 = AVar5.unknown;
  local_50 = puVar6;
  puStack_48 = puVar7;
  FUN_10079fb4c(0,&local_60);
  (**(code **)(*(long *)(lVar8 + -8) + 0x30))(param_1,param_2,lVar8);
  return;
}



/* Address: 0x1009c1580 | FUN_1009c1580 */

void FUN_1009c1580(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1009c158c | FUN_1009c158c */

void FUN_1009c158c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  AsyncMapSequence AVar4;
  AsyncMapSequence AVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *local_60;
  undefined *puStack_58;
  undefined *local_50;
  undefined *puStack_48;
  
  uVar1 = *(undefined8 *)(param_4 + 0x10);
  uVar2 = *(undefined8 *)(param_4 + 0x18);
  uVar3 = 0xff;
  FUN_1009bf908(0xff,uVar1,uVar2);
  FUN_1009bf914(0xff,uVar1,uVar2);
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8c0e0,uVar3);
  AVar4 = Swift::AsyncMapSequence::typeMetadataAccessor();
  FUN_1000f8b08(&DAT_100ff2c48,&DAT_100c8bfb0);
  FUN_1009bfb5c();
  AVar5 = Swift::AsyncMapSequence::typeMetadataAccessor();
  puVar7 = PTR_Swift__Swift__AsyncMapSequence<undefined,undefined>_>Swift__AsyncSequence_100eaef68;
  puVar6 = PTR_Swift__Swift__AsyncMapSequence<undefined,undefined>_>Swift__AsyncSequence_100eaef68;
  _swift_getWitnessTable
            (PTR_Swift__Swift__AsyncMapSequence<undefined,undefined>_>Swift__AsyncSequence_100eaef68
             ,AVar4.unknown);
  _swift_getWitnessTable(puVar7,AVar5.unknown);
  lVar8 = 0;
  local_60 = AVar4.unknown;
  puStack_58 = AVar5.unknown;
  local_50 = puVar6;
  puStack_48 = puVar7;
  FUN_10079fb4c(0,&local_60);
  (**(code **)(*(long *)(lVar8 + -8) + 0x38))(param_1,param_2,param_2,lVar8);
  return;
}



/* Address: 0x1009c16a0 | FUN_1009c16a0 */

void FUN_1009c16a0(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1009c16ac | FUN_1009c16ac */

void FUN_1009c16ac(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  FUN_1009c0450(0x13f,uVar2,*(undefined8 *)(param_1 + 0x18));
  if (uVar2 < 0x40) {
    _swift_initEnumMetadataSinglePayload(param_1,0,*(long *)(lVar1 + -8) + 0x40,1);
  }
  return;
}



/* Address: 0x1009c1704 | FUN_1009c1704 */

long * FUN_1009c1704(long *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  uint *puVar7;
  long *plVar8;
  size_t sVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar12 = *(long *)(lVar6 + -8);
  uVar5 = *(uint *)(lVar12 + 0x54);
  sVar9 = *(size_t *)(lVar12 + 0x40);
  if (uVar5 == 0) {
    sVar9 = sVar9 + 1;
  }
  uVar1 = sVar9;
  if (uVar5 < 2) {
    uVar1 = sVar9 + 1;
  }
  uVar10 = (ulong)*(uint *)(lVar12 + 0x50) & 0xff;
  if (((uint)uVar10 < 8 && (*(uint *)(lVar12 + 0x50) & 0x100000) == 0) && uVar1 < 0x19) {
    if (uVar5 < 2) {
      if (*(byte *)((long)param_2 + sVar9) != 0) {
        uVar11 = (uint)sVar9;
        uVar2 = 0;
        if (uVar11 < 4) {
          uVar2 = *(byte *)((long)param_2 + sVar9) - 1 << (ulong)((uVar11 & 3) << 3);
        }
        if (uVar11 == 0) {
          uVar11 = 0;
        }
        else {
          uVar3 = 4;
          if (uVar11 < 4) {
            uVar3 = uVar11;
          }
          if ((int)uVar3 < 3) {
            if (uVar3 == 1) {
              uVar11 = (uint)(byte)*param_2;
            }
            else {
              uVar11 = (uint)(ushort)*param_2;
            }
          }
          else if (uVar3 == 3) {
            uVar11 = (uint)(uint3)*param_2;
          }
          else {
            uVar11 = *param_2;
          }
        }
        if ((uVar11 | uVar2) != 0xffffffff) goto LAB_1009c1818;
      }
    }
    else {
      puVar7 = param_2;
      (**(code **)(lVar12 + 0x30))(param_2,uVar5,lVar6);
      iVar4 = 0;
      if ((int)puVar7 != 0) {
        iVar4 = (int)puVar7 + -1;
      }
      if (iVar4 != 0) {
LAB_1009c1818:
        plVar8 = _memcpy(param_1,param_2,uVar1);
        return plVar8;
      }
    }
    puVar7 = param_2;
    (**(code **)(lVar12 + 0x30))(param_2,1,lVar6);
    if ((int)puVar7 == 0) {
      (**(code **)(lVar12 + 0x10))(param_1,param_2,lVar6);
      (**(code **)(lVar12 + 0x38))(param_1,0,1,lVar6);
    }
    else {
      _memcpy(param_1,param_2,sVar9);
    }
    if (uVar5 < 2) {
      *(undefined1 *)((long)param_1 + sVar9) = 0;
    }
  }
  else {
    lVar6 = *(long *)param_2;
    *param_1 = lVar6;
    param_1 = (long *)(lVar6 + (uVar10 + 0x10 & (uVar10 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x1009c18e4 | FUN_1009c18e4 */

void FUN_1009c18e4(uint *param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  uint *puVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar8 = *(long *)(lVar4 + -8);
  uVar3 = *(uint *)(lVar8 + 0x54);
  uVar6 = *(ulong *)(lVar8 + 0x40);
  if (uVar3 == 0) {
    uVar6 = uVar6 + 1;
  }
  if (uVar3 < 2) {
    if (*(byte *)((long)param_1 + uVar6) != 0) {
      uVar7 = (uint)uVar6;
      uVar3 = 0;
      if (uVar7 < 4) {
        uVar3 = *(byte *)((long)param_1 + uVar6) - 1 << (ulong)((uVar7 & 3) << 3);
      }
      if (uVar7 != 0) {
        uVar1 = 4;
        if (uVar7 < 4) {
          uVar1 = uVar7;
        }
        if ((int)uVar1 < 3) {
          if (uVar1 == 1) {
            uVar6 = (ulong)(byte)*param_1;
          }
          else {
            uVar6 = (ulong)(ushort)*param_1;
          }
        }
        else if (uVar1 == 3) {
          uVar6 = (ulong)(uint3)*param_1;
        }
        else {
          uVar6 = (ulong)*param_1;
        }
      }
      if (((uint)uVar6 | uVar3) != 0xffffffff) {
        return;
      }
    }
  }
  else {
    puVar5 = param_1;
    (**(code **)(lVar8 + 0x30))(param_1,uVar3,lVar4);
    iVar2 = 0;
    if ((int)puVar5 != 0) {
      iVar2 = (int)puVar5 + -1;
    }
    if (iVar2 != 0) {
      return;
    }
  }
  puVar5 = param_1;
  (**(code **)(lVar8 + 0x30))(param_1,1,lVar4);
  if ((int)puVar5 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001009c1a0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar8 + 8))(param_1,lVar4);
  return;
}



/* Address: 0x1009c1a10 | FUN_1009c1a10 */

void * FUN_1009c1a10(void *param_1,uint *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  uint *puVar6;
  void *pvVar7;
  size_t sVar8;
  uint uVar9;
  long lVar10;
  
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar10 = *(long *)(lVar5 + -8);
  uVar4 = *(uint *)(lVar10 + 0x54);
  sVar8 = *(size_t *)(lVar10 + 0x40);
  if (uVar4 == 0) {
    sVar8 = sVar8 + 1;
  }
  if (uVar4 < 2) {
    if (*(byte *)((long)param_2 + sVar8) != 0) {
      uVar9 = (uint)sVar8;
      uVar1 = 0;
      if (uVar9 < 4) {
        uVar1 = *(byte *)((long)param_2 + sVar8) - 1 << (ulong)((uVar9 & 3) << 3);
      }
      if (uVar9 == 0) {
        uVar9 = 0;
      }
      else {
        uVar2 = 4;
        if (uVar9 < 4) {
          uVar2 = uVar9;
        }
        if ((int)uVar2 < 3) {
          if (uVar2 == 1) {
            uVar9 = (uint)(byte)*param_2;
          }
          else {
            uVar9 = (uint)(ushort)*param_2;
          }
        }
        else if (uVar2 == 3) {
          uVar9 = (uint)(uint3)*param_2;
        }
        else {
          uVar9 = *param_2;
        }
      }
      if ((uVar9 | uVar1) != 0xffffffff) goto LAB_1009c1acc;
    }
  }
  else {
    puVar6 = param_2;
    (**(code **)(lVar10 + 0x30))(param_2,uVar4,lVar5);
    iVar3 = 0;
    if ((int)puVar6 != 0) {
      iVar3 = (int)puVar6 + -1;
    }
    if (iVar3 != 0) {
LAB_1009c1acc:
      if (uVar4 < 2) {
        sVar8 = sVar8 + 1;
      }
      pvVar7 = _memcpy(param_1,param_2,sVar8);
      return pvVar7;
    }
  }
  puVar6 = param_2;
  (**(code **)(lVar10 + 0x30))(param_2,1,lVar5);
  if ((int)puVar6 == 0) {
    (**(code **)(lVar10 + 0x10))(param_1,param_2,lVar5);
    (**(code **)(lVar10 + 0x38))(param_1,0,1,lVar5);
  }
  else {
    _memcpy(param_1,param_2,sVar8);
  }
  if (uVar4 < 2) {
    *(undefined1 *)((long)param_1 + sVar8) = 0;
  }
  return param_1;
}



/* Address: 0x1009c1bac | FUN_1009c1bac */

uint * FUN_1009c1bac(uint *param_1,uint *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  size_t sVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  code *pcVar11;
  long lVar12;
  
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar12 = *(long *)(lVar3 + -8);
  uVar2 = *(uint *)(lVar12 + 0x54);
  sVar7 = *(size_t *)(lVar12 + 0x40);
  if (uVar2 == 0) {
    sVar7 = sVar7 + 1;
  }
  if (uVar2 < 2) {
    uVar10 = (uint)sVar7;
    uVar8 = uVar10 << 3;
    if (*(byte *)((long)param_1 + sVar7) != 0) {
      uVar1 = 0;
      if (uVar10 < 4) {
        uVar1 = *(byte *)((long)param_1 + sVar7) - 1 << (ulong)(uVar8 & 0x1f);
      }
      if (uVar10 == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = 4;
        if (uVar10 < 4) {
          uVar9 = uVar10;
        }
        if ((int)uVar9 < 3) {
          if (uVar9 == 1) {
            uVar9 = (uint)(byte)*param_1;
          }
          else {
            uVar9 = (uint)(ushort)*param_1;
          }
        }
        else if (uVar9 == 3) {
          uVar9 = (uint)(uint3)*param_1;
        }
        else {
          uVar9 = *param_1;
        }
      }
      if ((uVar9 | uVar1) != 0xffffffff) {
        if (*(byte *)((long)param_2 + sVar7) == 0) goto LAB_1009c1ea4;
        uVar1 = 0;
        if (uVar10 < 4) {
          uVar1 = *(byte *)((long)param_2 + sVar7) - 1 << (ulong)(uVar8 & 0x1f);
        }
        if (uVar10 == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = 4;
          if (uVar10 < 4) {
            uVar8 = uVar10;
          }
          if ((int)uVar8 < 3) {
            if (uVar8 == 1) {
              uVar8 = (uint)(byte)*param_2;
            }
            else {
              uVar8 = (uint)(ushort)*param_2;
            }
          }
          else if (uVar8 == 3) {
            uVar8 = (uint)(uint3)*param_2;
          }
          else {
            uVar8 = *param_2;
          }
        }
        iVar6 = (uVar8 | uVar1) + 1;
        goto LAB_1009c1e78;
      }
    }
    if (*(byte *)((long)param_2 + sVar7) != 0) {
      uVar1 = 0;
      if (uVar10 < 4) {
        uVar1 = *(byte *)((long)param_2 + sVar7) - 1 << (ulong)(uVar8 & 0x1f);
      }
      if (uVar10 == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = 4;
        if (uVar10 < 4) {
          uVar8 = uVar10;
        }
        if ((int)uVar8 < 3) {
          if (uVar8 == 1) {
            uVar8 = (uint)(byte)*param_2;
          }
          else {
            uVar8 = (uint)(ushort)*param_2;
          }
        }
        else if (uVar8 == 3) {
          uVar8 = (uint)(uint3)*param_2;
        }
        else {
          uVar8 = *param_2;
        }
      }
      if ((uVar8 | uVar1) != 0xffffffff) {
LAB_1009c1d9c:
        puVar5 = param_1;
        (**(code **)(lVar12 + 0x30))(param_1,1,lVar3);
        if ((int)puVar5 == 0) {
          (**(code **)(lVar12 + 8))(param_1,lVar3);
        }
        goto LAB_1009c1e7c;
      }
    }
  }
  else {
    pcVar11 = *(code **)(lVar12 + 0x30);
    puVar5 = param_1;
    (*pcVar11)(param_1,uVar2,lVar3);
    puVar4 = param_2;
    (*pcVar11)(param_2,uVar2,lVar3);
    iVar6 = 0;
    if ((int)puVar4 != 0) {
      iVar6 = (int)puVar4 + -1;
    }
    if (1 < (uint)puVar5) {
LAB_1009c1e78:
      if (iVar6 == 0) {
LAB_1009c1ea4:
        puVar5 = param_2;
        (**(code **)(lVar12 + 0x30))(param_2,1,lVar3);
        if ((int)puVar5 == 0) {
          (**(code **)(lVar12 + 0x10))(param_1,param_2,lVar3);
          (**(code **)(lVar12 + 0x38))(param_1,0,1,lVar3);
        }
        else {
          _memcpy(param_1,param_2,sVar7);
        }
        if (1 < uVar2) {
          return param_1;
        }
        *(byte *)((long)param_1 + sVar7) = 0;
        return param_1;
      }
LAB_1009c1e7c:
      if (uVar2 < 2) {
        sVar7 = sVar7 + 1;
      }
      goto LAB_1009c1e8c;
    }
    if (iVar6 != 0) goto LAB_1009c1d9c;
  }
  pcVar11 = *(code **)(lVar12 + 0x30);
  puVar5 = param_1;
  (*pcVar11)(param_1,1,lVar3);
  puVar4 = param_2;
  (*pcVar11)(param_2,1,lVar3);
  if ((int)puVar5 == 0) {
    if ((int)puVar4 == 0) {
      (**(code **)(lVar12 + 0x18))(param_1,param_2,lVar3);
      return param_1;
    }
    (**(code **)(lVar12 + 8))(param_1,lVar3);
  }
  else if ((int)puVar4 == 0) {
    (**(code **)(lVar12 + 0x10))(param_1,param_2,lVar3);
    (**(code **)(lVar12 + 0x38))(param_1,0,1,lVar3);
    return param_1;
  }
LAB_1009c1e8c:
  puVar5 = _memcpy(param_1,param_2,sVar7);
  return puVar5;
}



/* Address: 0x1009c1f2c | FUN_1009c1f2c */

void * FUN_1009c1f2c(void *param_1,uint *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  uint *puVar6;
  void *pvVar7;
  size_t sVar8;
  uint uVar9;
  long lVar10;
  
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar10 = *(long *)(lVar5 + -8);
  uVar4 = *(uint *)(lVar10 + 0x54);
  sVar8 = *(size_t *)(lVar10 + 0x40);
  if (uVar4 == 0) {
    sVar8 = sVar8 + 1;
  }
  if (uVar4 < 2) {
    if (*(byte *)((long)param_2 + sVar8) != 0) {
      uVar9 = (uint)sVar8;
      uVar1 = 0;
      if (uVar9 < 4) {
        uVar1 = *(byte *)((long)param_2 + sVar8) - 1 << (ulong)((uVar9 & 3) << 3);
      }
      if (uVar9 == 0) {
        uVar9 = 0;
      }
      else {
        uVar2 = 4;
        if (uVar9 < 4) {
          uVar2 = uVar9;
        }
        if ((int)uVar2 < 3) {
          if (uVar2 == 1) {
            uVar9 = (uint)(byte)*param_2;
          }
          else {
            uVar9 = (uint)(ushort)*param_2;
          }
        }
        else if (uVar2 == 3) {
          uVar9 = (uint)(uint3)*param_2;
        }
        else {
          uVar9 = *param_2;
        }
      }
      if ((uVar9 | uVar1) != 0xffffffff) goto LAB_1009c1fe8;
    }
  }
  else {
    puVar6 = param_2;
    (**(code **)(lVar10 + 0x30))(param_2,uVar4,lVar5);
    iVar3 = 0;
    if ((int)puVar6 != 0) {
      iVar3 = (int)puVar6 + -1;
    }
    if (iVar3 != 0) {
LAB_1009c1fe8:
      if (uVar4 < 2) {
        sVar8 = sVar8 + 1;
      }
      pvVar7 = _memcpy(param_1,param_2,sVar8);
      return pvVar7;
    }
  }
  puVar6 = param_2;
  (**(code **)(lVar10 + 0x30))(param_2,1,lVar5);
  if ((int)puVar6 == 0) {
    (**(code **)(lVar10 + 0x20))(param_1,param_2,lVar5);
    (**(code **)(lVar10 + 0x38))(param_1,0,1,lVar5);
  }
  else {
    _memcpy(param_1,param_2,sVar8);
  }
  if (uVar4 < 2) {
    *(undefined1 *)((long)param_1 + sVar8) = 0;
  }
  return param_1;
}


