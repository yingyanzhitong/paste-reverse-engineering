/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10071ac4c | FUN_10071ac4c */

void FUN_10071ac4c(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x10071ac58 | FUN_10071ac58 */

void FUN_10071ac58(undefined8 param_1,long param_2)

{
  Optional OVar1;
  long lVar2;
  ulong uVar3;
  undefined7 extraout_var;
  ulong uVar4;
  undefined7 extraout_var_00;
  undefined8 unaff_x20;
  long lVar5;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(param_2 + 0x10);
  lVar2 = 0;
  _swift_getAssociatedTypeWitness();
  *(long *)(unaff_x22 + 0x38) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x40) = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x48) = uVar3;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x50) = CONCAT71(extraout_var,OVar1.value);
  lVar2 = *(long *)(CONCAT71(extraout_var,OVar1.value) + -8);
  *(long *)(unaff_x22 + 0x58) = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xf;
  uVar4 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x60) = uVar4;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x68) = uVar3;
  lVar5 = *(long *)(param_2 + 0x18);
  *(long *)(unaff_x22 + 0x70) = lVar5;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x78) = CONCAT71(extraout_var_00,OVar1.value);
  lVar2 = *(long *)(CONCAT71(extraout_var_00,OVar1.value) + -8);
  *(long *)(unaff_x22 + 0x80) = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x88) = uVar3;
  lVar2 = *(long *)(lVar5 + -8);
  *(long *)(unaff_x22 + 0x90) = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x98) = uVar3;
  _swift_task_switch(FUN_10071ad74,0,0);
  return;
}



/* Address: 0x10071ad74 | FUN_10071ad74 */

void FUN_10071ad74(void)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x88);
  lVar1 = *(long *)(unaff_x22 + 0x90);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x70);
  iVar2 = *(int *)(*(long *)(unaff_x22 + 0x18) + 0x2c);
  *(int *)(unaff_x22 + 0xc0) = iVar2;
  (**(code **)(*(long *)(unaff_x22 + 0x80) + 0x10))
            (uVar4,*(long *)(unaff_x22 + 0x20) + (long)iVar2,*(undefined8 *)(unaff_x22 + 0x78));
  (**(code **)(lVar1 + 0x30))(uVar4,1,uVar7);
  if ((int)uVar4 == 1) {
    lVar1 = *(long *)(unaff_x22 + 0x90);
    (**(code **)(*(long *)(unaff_x22 + 0x80) + 8))
              (*(undefined8 *)(unaff_x22 + 0x88),*(undefined8 *)(unaff_x22 + 0x78));
    uVar8 = *(undefined8 *)(unaff_x22 + 0x98);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x68);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x48);
    (**(code **)(lVar1 + 0x38))
              (*(undefined8 *)(unaff_x22 + 0x10),1,1,*(undefined8 *)(unaff_x22 + 0x70));
    _swift_task_dealloc(uVar8);
    _swift_task_dealloc(uVar7);
    _swift_task_dealloc(uVar4);
    _swift_task_dealloc(uVar9);
    _swift_task_dealloc(uVar10);
                    /* WARNING: Could not recover jumptable at 0x00010071ae58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar4 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x30);
  pcVar6 = *(code **)(*(long *)(unaff_x22 + 0x90) + 0x20);
  *(code **)(unaff_x22 + 0xa0) = pcVar6;
  (*pcVar6)(*(undefined8 *)(unaff_x22 + 0x98),*(undefined8 *)(unaff_x22 + 0x88),
            *(undefined8 *)(unaff_x22 + 0x70));
  puVar3 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar8 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar4,uVar7,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  _swift_getAssociatedConformanceWitness
            (uVar4,uVar7,uVar8,puVar3,
             PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
            );
  plVar5 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xa8) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_10071af10;
  Swift::AsyncIteratorProtocol::_next();
  return;
}



/* Address: 0x10071af10 | FUN_10071af10 */

void FUN_10071af10(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xb0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xa8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10071af74;
  }
  else {
    pcVar1 = FUN_10071b2b8;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x10071af74 | FUN_10071af74 */

void FUN_10071af74(void)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x22;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x38);
  lVar2 = *(long *)(unaff_x22 + 0x40);
  (**(code **)(*(long *)(unaff_x22 + 0x58) + 0x10))
            (uVar5,*(undefined8 *)(unaff_x22 + 0x68),*(undefined8 *)(unaff_x22 + 0x50));
  (**(code **)(lVar2 + 0x30))(uVar5,1,uVar8);
  if ((int)uVar5 == 1) {
    iVar4 = *(int *)(unaff_x22 + 0xc0);
    lVar2 = *(long *)(unaff_x22 + 0x90);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x98);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x78);
    lVar3 = *(long *)(unaff_x22 + 0x80);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x70);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x50);
    lVar12 = *(long *)(unaff_x22 + 0x20);
    pcVar7 = *(code **)(*(long *)(unaff_x22 + 0x58) + 8);
    (*pcVar7)(*(undefined8 *)(unaff_x22 + 0x68),uVar11);
    (**(code **)(lVar2 + 8))(uVar8,uVar9);
    (*pcVar7)(uVar10,uVar11);
    (**(code **)(lVar3 + 8))(lVar12 + iVar4,uVar5);
    pcVar7 = *(code **)(lVar2 + 0x38);
    (*pcVar7)(lVar12 + iVar4,1,1,uVar9);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x98);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x68);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x48);
    (*pcVar7)(*(undefined8 *)(unaff_x22 + 0x10),1,1,*(undefined8 *)(unaff_x22 + 0x70));
    _swift_task_dealloc(uVar9);
    _swift_task_dealloc(uVar8);
    _swift_task_dealloc(uVar5);
    _swift_task_dealloc(uVar10);
    _swift_task_dealloc(uVar11);
                    /* WARNING: Could not recover jumptable at 0x00010071b0b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar2 = *(long *)(unaff_x22 + 0x18);
  lVar3 = *(long *)(unaff_x22 + 0x20);
  (**(code **)(*(long *)(unaff_x22 + 0x40) + 0x20))
            (*(undefined8 *)(unaff_x22 + 0x48),*(undefined8 *)(unaff_x22 + 0x60),
             *(undefined8 *)(unaff_x22 + 0x38));
  piVar1 = *(int **)(lVar3 + *(int *)(lVar2 + 0x30));
  iVar4 = *piVar1;
  plVar6 = (long *)(ulong)(uint)piVar1[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xb8) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_10071b134;
                    /* WARNING: Could not recover jumptable at 0x00010071b130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar4 + (long)piVar1))
            (*(undefined8 *)(unaff_x22 + 0x98),*(undefined8 *)(unaff_x22 + 0x48));
  return;
}



/* Address: 0x10071b134 | FUN_10071b134 */

void FUN_10071b134(void)

{
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0xb8));
  _swift_task_switch(FUN_10071b184,0,0);
  return;
}



/* Address: 0x10071b184 | FUN_10071b184 */

void FUN_10071b184(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  code *pcVar11;
  long lVar12;
  long lVar13;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
  pcVar2 = *(code **)(unaff_x22 + 0xa0);
  lVar12 = (long)*(int *)(unaff_x22 + 0xc0);
  lVar13 = *(long *)(unaff_x22 + 0x90);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x78);
  lVar3 = *(long *)(unaff_x22 + 0x80);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar4 = *(long *)(unaff_x22 + 0x58);
  lVar6 = *(long *)(unaff_x22 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x10);
  (**(code **)(*(long *)(unaff_x22 + 0x40) + 8))
            (*(undefined8 *)(unaff_x22 + 0x48),*(undefined8 *)(unaff_x22 + 0x38));
  (**(code **)(lVar4 + 8))(uVar8,uVar9);
  (**(code **)(lVar3 + 8))(lVar6 + lVar12,uVar7);
  (**(code **)(lVar13 + 0x10))(lVar6 + lVar12,uVar1,uVar10);
  pcVar11 = *(code **)(lVar13 + 0x38);
  (*pcVar11)(lVar6 + lVar12,0,1,uVar10);
  (*pcVar2)(uVar5,uVar1,uVar10);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x48);
  (*pcVar11)(*(undefined8 *)(unaff_x22 + 0x10),0,1,*(undefined8 *)(unaff_x22 + 0x70));
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar10);
                    /* WARNING: Could not recover jumptable at 0x00010071b2b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10071b2b8 | FUN_10071b2b8 */

void FUN_10071b2b8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x48);
  (**(code **)(*(long *)(unaff_x22 + 0x90) + 8))(uVar2,*(undefined8 *)(unaff_x22 + 0x70));
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010071b340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10071b344 | FUN_10071b344 */

void FUN_10071b344(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0xd0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005c804c;
  FUN_10071ac58(plVar1,param_1,param_2);
  return;
}



/* Address: 0x10071b3ac | FUN_10071b3ac */

void FUN_10071b3ac(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  
  lVar2 = *(long *)(param_2 + 0x10);
  lVar4 = *(long *)(param_2 + 0x18);
  lVar11 = *(long *)(lVar4 + -8);
  puVar9 = auStack_70 + -(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = *(long *)(lVar2 + -8);
  lVar7 = (long)puVar9 - (*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar10 = *(undefined8 *)(param_2 + 0x20);
  lVar6 = 0;
  local_68 = param_1;
  _swift_getAssociatedTypeWitness
            (0,uVar10,lVar2,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar6 = *(long *)(*(long *)(lVar6 + -8) + 0x40);
  (**(code **)(lVar8 + 0x10))(lVar7);
  Swift::AsyncSequence::_makeAsyncIterator();
  (**(code **)(lVar11 + 0x10))(puVar9,unaff_x20 + *(int *)(param_2 + 0x2c),lVar4);
  puVar1 = (undefined8 *)(unaff_x20 + *(int *)(param_2 + 0x30));
  uVar3 = *puVar1;
  uVar5 = puVar1[1];
  _swift_retain(uVar5);
  FUN_10071ab28(local_68,lVar7 - (lVar6 + 0xfU & 0xfffffffffffffff0),puVar9,uVar3,uVar5,lVar2,lVar4,
                uVar10);
  return;
}



/* Address: 0x10071b4e8 | FUN_10071b4e8 */

void FUN_10071b4e8(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c74b58,param_1);
  return;
}



/* Address: 0x10071b4f8 | FUN_10071b4f8 */

void FUN_10071b4f8(long param_1)

{
  FUN_10071b3ac();
                    /* WARNING: Could not recover jumptable at 0x00010071b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + -8) + 8))();
  return;
}



/* Address: 0x10071b528 | FUN_10071b528 */

void FUN_10071b528(long param_1)

{
  long lVar1;
  ulong uVar2;
  long local_38;
  long local_30;
  undefined *puStack_28;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    local_38 = *(long *)(lVar1 + -8) + 0x40;
    uVar2 = *(ulong *)(param_1 + 0x18);
    lVar1 = 0x13f;
    _swift_checkMetadataState();
    if (uVar2 < 0x40) {
      local_30 = *(long *)(lVar1 + -8) + 0x40;
      puStack_28 = PTR___value_witness_table_for_____>____100eae0d0 + 0x40;
      _swift_initStructMetadata(param_1,0,3,&local_38,param_1 + 0x28);
    }
  }
  return;
}



/* Address: 0x10071b5c0 | FUN_10071b5c0 */

long * FUN_10071b5c0(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  
  lVar8 = *(long *)(param_3 + 0x18);
  lVar3 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  lVar10 = *(long *)(lVar8 + -8);
  uVar6 = (ulong)*(uint *)(lVar10 + 0x50) & 0xff;
  uVar4 = *(long *)(lVar3 + 0x40) + uVar6;
  lVar2 = *(long *)(lVar10 + 0x40) + 7;
  uVar1 = (uint)uVar6 | *(uint *)(lVar3 + 0x50) & 0xf8;
  if ((uVar1 < 8 && ((*(uint *)(lVar3 + 0x50) | *(uint *)(lVar10 + 0x50)) & 0x100000) == 0) &&
      (lVar2 + (uVar4 & (uVar6 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) + 0x10 < 0x19) {
    (**(code **)(lVar3 + 0x10))(param_1);
    uVar9 = uVar4 + (long)param_1 & ~uVar6;
    uVar4 = uVar4 + (long)param_2 & ~uVar6;
    (**(code **)(lVar10 + 0x10))(uVar9,uVar4,lVar8);
    puVar5 = (undefined8 *)(lVar2 + uVar9 & 0xfffffffffffffff8);
    puVar7 = (undefined8 *)(lVar2 + uVar4 & 0xfffffffffffffff8);
    lVar2 = puVar7[1];
    uVar11 = *puVar7;
    puVar5[1] = puVar7[1];
    *puVar5 = uVar11;
  }
  else {
    uVar4 = (ulong)(uVar1 | 7);
    lVar2 = *param_2;
    *param_1 = lVar2;
    param_1 = (long *)(lVar2 + (uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff)));
  }
  _swift_retain(lVar2);
  return param_1;
}



/* Address: 0x10071b6cc | FUN_10071b6cc */

void FUN_10071b6cc(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  (**(code **)(lVar2 + 8))();
  lVar3 = *(long *)(*(long *)(param_2 + 0x18) + -8);
  uVar1 = *(long *)(lVar2 + 0x40) + param_1 + (ulong)*(byte *)(lVar3 + 0x50) &
          ((ulong)*(byte *)(lVar3 + 0x50) ^ 0xffffffffffffffff);
  (**(code **)(lVar3 + 8))(uVar1);
  _swift_release(*(undefined8 *)((*(long *)(lVar3 + 0x40) + uVar1 + 7 & 0xfffffffffffffff8) + 8));
  return;
}



/* Address: 0x10071b740 | FUN_10071b740 */

long FUN_10071b740(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  lVar6 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar6 + 0x10))();
  lVar7 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar3 = (ulong)*(byte *)(lVar7 + 0x50);
  lVar6 = *(long *)(lVar6 + 0x40) + uVar3;
  uVar5 = lVar6 + param_1 & (uVar3 ^ 0xffffffffffffffff);
  uVar3 = lVar6 + param_2 & (uVar3 ^ 0xffffffffffffffff);
  (**(code **)(lVar7 + 0x10))(uVar5,uVar3);
  lVar6 = *(long *)(lVar7 + 0x40) + 7;
  puVar4 = (undefined8 *)(lVar6 + uVar5 & 0xfffffffffffffff8);
  puVar2 = (undefined8 *)(lVar6 + uVar3 & 0xfffffffffffffff8);
  uVar1 = puVar2[1];
  uVar8 = *puVar2;
  puVar4[1] = puVar2[1];
  *puVar4 = uVar8;
  _swift_retain(uVar1);
  return param_1;
}



/* Address: 0x10071b7dc | FUN_10071b7dc */

long FUN_10071b7dc(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  lVar7 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar7 + 0x18))();
  lVar8 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar3 = (ulong)*(byte *)(lVar8 + 0x50);
  lVar7 = *(long *)(lVar7 + 0x40) + uVar3;
  uVar5 = lVar7 + param_1 & (uVar3 ^ 0xffffffffffffffff);
  uVar3 = lVar7 + param_2 & (uVar3 ^ 0xffffffffffffffff);
  (**(code **)(lVar8 + 0x18))(uVar5,uVar3);
  lVar7 = *(long *)(lVar8 + 0x40) + 7;
  puVar4 = (undefined8 *)(lVar7 + uVar5 & 0xfffffffffffffff8);
  puVar2 = (undefined8 *)(lVar7 + uVar3 & 0xfffffffffffffff8);
  uVar6 = puVar4[1];
  uVar1 = puVar2[1];
  uVar9 = *puVar2;
  puVar4[1] = puVar2[1];
  *puVar4 = uVar9;
  _swift_retain(uVar1);
  _swift_release(uVar6);
  return param_1;
}



/* Address: 0x10071b884 | FUN_10071b884 */

long FUN_10071b884(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  lVar5 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar5 + 0x20))();
  lVar6 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar2 = (ulong)*(byte *)(lVar6 + 0x50);
  lVar5 = *(long *)(lVar5 + 0x40) + uVar2;
  uVar4 = lVar5 + param_1 & (uVar2 ^ 0xffffffffffffffff);
  uVar2 = lVar5 + param_2 & (uVar2 ^ 0xffffffffffffffff);
  (**(code **)(lVar6 + 0x20))(uVar4,uVar2);
  lVar5 = *(long *)(lVar6 + 0x40) + 7;
  puVar3 = (undefined8 *)(lVar5 + uVar4 & 0xfffffffffffffff8);
  puVar1 = (undefined8 *)(lVar5 + uVar2 & 0xfffffffffffffff8);
  uVar7 = *puVar1;
  puVar3[1] = puVar1[1];
  *puVar3 = uVar7;
  return param_1;
}



/* Address: 0x10071b918 | FUN_10071b918 */

long FUN_10071b918(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  lVar6 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar6 + 0x28))();
  lVar7 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar3 = (ulong)*(byte *)(lVar7 + 0x50);
  lVar6 = *(long *)(lVar6 + 0x40) + uVar3;
  uVar5 = lVar6 + param_1 & (uVar3 ^ 0xffffffffffffffff);
  uVar3 = lVar6 + param_2 & (uVar3 ^ 0xffffffffffffffff);
  (**(code **)(lVar7 + 0x28))(uVar5,uVar3);
  lVar6 = *(long *)(lVar7 + 0x40) + 7;
  puVar4 = (undefined8 *)(lVar6 + uVar5 & 0xfffffffffffffff8);
  puVar2 = (undefined8 *)(lVar6 + uVar3 & 0xfffffffffffffff8);
  uVar1 = puVar4[1];
  uVar8 = *puVar2;
  puVar4[1] = puVar2[1];
  *puVar4 = uVar8;
  _swift_release(uVar1);
  return param_1;
}



/* Address: 0x10071b9b4 | FUN_10071b9b4 */

int * FUN_10071b9b4(int *param_1,uint param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  
  lVar13 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar6 = *(uint *)(lVar13 + 0x54);
  lVar12 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar7 = *(uint *)(lVar12 + 0x54);
  uVar3 = uVar7;
  if (uVar7 <= uVar6) {
    uVar3 = uVar6;
  }
  if (uVar3 < 0x80000000) {
    uVar3 = 0x7fffffff;
  }
  if (param_2 == 0) {
    return (int *)0x0;
  }
  uVar14 = (ulong)*(byte *)(lVar12 + 0x50);
  uVar11 = *(long *)(lVar13 + 0x40) + uVar14;
  lVar1 = *(long *)(lVar12 + 0x40) + 7;
  if (uVar3 <= param_2 && param_2 - uVar3 != 0) {
    uVar2 = (lVar1 + (uVar11 & (uVar14 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) + 0x10;
    uVar10 = 2;
    uVar5 = uVar10;
    if ((uVar2 & 0xfffffff8) == 0) {
      uVar5 = (param_2 - uVar3) + 1;
    }
    if (0xffff < uVar5) {
      uVar10 = 4;
    }
    if (uVar5 < 0x100) {
      uVar10 = 1;
    }
    uVar4 = 0;
    if (1 < uVar5) {
      uVar4 = uVar10;
    }
    if (uVar4 < 2) {
      if ((uVar4 != 0) &&
         (uVar10 = (uint)*(byte *)((long)param_1 + uVar2), *(byte *)((long)param_1 + uVar2) != 0))
      goto LAB_10071ba68;
    }
    else if (uVar4 == 2) {
      uVar10 = (uint)*(ushort *)((long)param_1 + uVar2);
      if (*(ushort *)((long)param_1 + uVar2) != 0) {
LAB_10071ba68:
        iVar8 = uVar10 - 1;
        if ((uVar2 & 0xfffffff8) != 0) {
          iVar8 = *param_1;
        }
        return (int *)(ulong)(uVar3 + iVar8 + 1);
      }
    }
    else {
      uVar10 = *(uint *)((long)param_1 + uVar2);
      if (uVar10 != 0) goto LAB_10071ba68;
    }
  }
  if (uVar6 == uVar3) {
                    /* WARNING: Could not recover jumptable at 0x00010071ba9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar13 + 0x30))(param_1,uVar6,*(long *)(param_3 + 0x10));
    return param_1;
  }
  piVar9 = (int *)(uVar11 + (long)param_1 & ~uVar14);
  if (uVar7 == uVar3) {
                    /* WARNING: Could not recover jumptable at 0x00010071bab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar12 + 0x30))();
    return piVar9;
  }
  uVar11 = *(ulong *)(lVar1 + (long)piVar9 & 0xfffffffffffffff8);
  if (0xfffffffe < uVar11) {
    uVar11 = 0xffffffff;
  }
  return (int *)(ulong)((int)uVar11 + 1);
}



/* Address: 0x10071baf0 | FUN_10071baf0 */

void FUN_10071baf0(int *param_1,undefined8 param_2,uint param_3,long param_4)

{
  long lVar1;
  size_t sVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  code *UNRECOVERED_JUMPTABLE;
  ulong *puVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  
  lVar6 = *(long *)(param_4 + 0x10);
  lVar11 = *(long *)(param_4 + 0x18);
  lVar15 = *(long *)(lVar6 + -8);
  uVar7 = *(uint *)(lVar15 + 0x54);
  lVar14 = *(long *)(lVar11 + -8);
  uVar8 = *(uint *)(lVar14 + 0x54);
  uVar4 = uVar8;
  if (uVar8 <= uVar7) {
    uVar4 = uVar7;
  }
  if (uVar4 < 0x80000000) {
    uVar4 = 0x7fffffff;
  }
  uVar16 = (ulong)*(byte *)(lVar14 + 0x50);
  uVar3 = *(long *)(lVar15 + 0x40) + uVar16;
  lVar1 = *(long *)(lVar14 + 0x40) + 7;
  sVar2 = (lVar1 + (uVar3 & (uVar16 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) + 0x10;
  uVar12 = 2;
  uVar10 = uVar12;
  if ((int)sVar2 == 0) {
    uVar10 = (param_3 - uVar4) + 1;
  }
  if (0xffff < uVar10) {
    uVar12 = 4;
  }
  if (uVar10 < 0x100) {
    uVar12 = 1;
  }
  uVar5 = 0;
  if (1 < uVar10) {
    uVar5 = uVar12;
  }
  uVar12 = 0;
  if (uVar4 < param_3) {
    uVar12 = uVar5;
  }
  uVar10 = (uint)param_2;
  iVar9 = uVar10 - uVar4;
  if (uVar10 < uVar4 || iVar9 == 0) {
    if (uVar12 < 2) {
      if (uVar12 != 0) {
        *(undefined1 *)((long)param_1 + sVar2) = 0;
      }
    }
    else if (uVar12 == 2) {
      *(undefined2 *)((long)param_1 + sVar2) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar2) = 0;
    }
    if (uVar10 != 0) {
      if (uVar7 == uVar4) {
        UNRECOVERED_JUMPTABLE = *(code **)(lVar15 + 0x38);
        lVar11 = lVar6;
        uVar8 = uVar7;
      }
      else {
        param_1 = (int *)(uVar3 + (long)param_1 & ~uVar16);
        if (uVar8 != uVar4) {
          puVar13 = (ulong *)(lVar1 + (long)param_1 & 0xfffffffffffffff8);
          if (-1 < (int)uVar10) {
            *puVar13 = (ulong)(uVar10 - 1);
            return;
          }
          *puVar13 = (ulong)(uVar10 & 0x7fffffff);
          puVar13[1] = 0;
          return;
        }
        UNRECOVERED_JUMPTABLE = *(code **)(lVar14 + 0x38);
      }
                    /* WARNING: Could not recover jumptable at 0x00010071bc44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1,param_2,uVar8,lVar11);
      return;
    }
  }
  else {
    if ((int)sVar2 != 0) {
      iVar9 = 1;
      _bzero(param_1,sVar2);
      *param_1 = uVar10 + ~uVar4;
    }
    if (uVar12 < 2) {
      if (uVar12 != 0) {
        *(char *)((long)param_1 + sVar2) = (char)iVar9;
      }
    }
    else if (uVar12 == 2) {
      *(short *)((long)param_1 + sVar2) = (short)iVar9;
    }
    else {
      *(int *)((long)param_1 + sVar2) = iVar9;
    }
  }
  return;
}



/* Address: 0x10071bc90 | FUN_10071bc90 */

void FUN_10071bc90(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 local_20;
  undefined8 local_18;
  
  local_20 = param_1[1];
  uVar1 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,param_1[2],*param_1,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  local_18 = uVar1;
  _swift_getFunctionTypeMetadata
            (0x66000002,&local_20,&DAT_100c74c28,PTR___type_metadata_for____100eae0c8 + 8);
  return;
}



/* Address: 0x10071bcf4 | FUN_10071bcf4 */

void FUN_10071bcf4(long param_1)

{
  Optional OVar1;
  long lVar2;
  undefined7 extraout_var;
  ulong uVar3;
  long local_38;
  long local_30;
  undefined *puStack_28;
  
  uVar3 = *(ulong *)(param_1 + 0x20);
  lVar2 = 0x13f;
  _swift_getAssociatedTypeWitness
            (0x13f,uVar3,*(undefined8 *)(param_1 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  if (uVar3 < 0x40) {
    local_38 = *(long *)(lVar2 + -8) + 0x40;
    uVar3 = *(ulong *)(param_1 + 0x18);
    OVar1 = Swift::Optional::typeMetadataAccessor();
    if (uVar3 < 0x40) {
      local_30 = *(long *)(CONCAT71(extraout_var,OVar1.value) + -8) + 0x40;
      puStack_28 = PTR___value_witness_table_for_____>____100eae0d0 + 0x40;
      _swift_initStructMetadata(param_1,0,3,&local_38,param_1 + 0x28);
    }
  }
  return;
}



/* Address: 0x10071bda0 | FUN_10071bda0 */

long * FUN_10071bda0(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  size_t sVar9;
  long lVar10;
  void *pvVar11;
  void *pvVar12;
  long lVar13;
  undefined8 uVar14;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar4 = *(long *)(lVar2 + -8);
  lVar10 = *(long *)(param_3 + 0x18);
  lVar13 = *(long *)(lVar10 + -8);
  uVar7 = (ulong)*(uint *)(lVar13 + 0x50) & 0xff;
  uVar5 = *(long *)(lVar4 + 0x40) + uVar7;
  sVar9 = *(size_t *)(lVar13 + 0x40);
  if (*(int *)(lVar13 + 0x54) == 0) {
    sVar9 = sVar9 + 1;
  }
  uVar1 = (uint)uVar7 | *(uint *)(lVar4 + 0x50) & 0xf8;
  if ((uVar1 < 8 && ((*(uint *)(lVar4 + 0x50) | *(uint *)(lVar13 + 0x50)) & 0x100000) == 0) &&
      (sVar9 + (uVar5 & (uVar7 ^ 0xffffffffffffffff)) + 7 & 0xfffffffffffffff8) + 0x10 < 0x19) {
    (**(code **)(lVar4 + 0x10))(param_1,param_2,lVar2);
    pvVar12 = (void *)(uVar5 + (long)param_1 & ~uVar7);
    pvVar11 = (void *)(uVar5 + (long)param_2 & ~uVar7);
    pvVar3 = pvVar11;
    (**(code **)(lVar13 + 0x30))(pvVar11,1,lVar10);
    if ((int)pvVar3 == 0) {
      (**(code **)(lVar13 + 0x10))(pvVar12,pvVar11,lVar10);
      (**(code **)(lVar13 + 0x38))(pvVar12,0,1,lVar10);
    }
    else {
      _memcpy(pvVar12,pvVar11,sVar9);
    }
    puVar6 = (undefined8 *)((long)pvVar12 + sVar9 + 7 & 0xfffffffffffffff8);
    puVar8 = (undefined8 *)((long)pvVar11 + sVar9 + 7 & 0xfffffffffffffff8);
    lVar2 = puVar8[1];
    uVar14 = *puVar8;
    puVar6[1] = puVar8[1];
    *puVar6 = uVar14;
  }
  else {
    uVar5 = (ulong)(uVar1 | 7);
    lVar2 = *param_2;
    *param_1 = lVar2;
    param_1 = (long *)(lVar2 + (uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff)));
  }
  _swift_retain(lVar2);
  return param_1;
}



/* Address: 0x10071bf24 | FUN_10071bf24 */

void FUN_10071bf24(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar4 = *(long *)(lVar1 + -8);
  (**(code **)(lVar4 + 8))(param_1,lVar1);
  lVar1 = *(long *)(param_2 + 0x18);
  lVar5 = *(long *)(lVar1 + -8);
  uVar3 = *(long *)(lVar4 + 0x40) + param_1 + (ulong)*(byte *)(lVar5 + 0x50) &
          ((ulong)*(byte *)(lVar5 + 0x50) ^ 0xffffffffffffffff);
  uVar2 = uVar3;
  (**(code **)(lVar5 + 0x30))(uVar3,1,lVar1);
  if ((int)uVar2 == 0) {
    (**(code **)(lVar5 + 8))(uVar3,lVar1);
  }
  lVar1 = uVar3 + *(long *)(lVar5 + 0x40);
  if (*(int *)(lVar5 + 0x54) == 0) {
    lVar1 = lVar1 + 1;
  }
  _swift_release(*(undefined8 *)((lVar1 + 7U & 0xfffffffffffffff8) + 8));
  return;
}



/* Address: 0x10071bfe4 | FUN_10071bfe4 */

long FUN_10071bfe4(long param_1,long param_2,long param_3)

{
  size_t sVar1;
  long lVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  void *pvVar8;
  void *pvVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  size_t sVar14;
  undefined8 uVar15;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar11 = *(long *)(lVar2 + -8);
  (**(code **)(lVar11 + 0x10))(param_1,param_2,lVar2);
  lVar12 = *(long *)(param_3 + 0x18);
  lVar13 = *(long *)(lVar12 + -8);
  uVar6 = (ulong)*(byte *)(lVar13 + 0x50);
  lVar2 = *(long *)(lVar11 + 0x40) + uVar6;
  pvVar8 = (void *)(lVar2 + param_1 & (uVar6 ^ 0xffffffffffffffff));
  pvVar9 = (void *)(lVar2 + param_2 & (uVar6 ^ 0xffffffffffffffff));
  pvVar3 = pvVar9;
  (**(code **)(lVar13 + 0x30))(pvVar9,1,lVar12);
  if ((int)pvVar3 == 0) {
    (**(code **)(lVar13 + 0x10))(pvVar8,pvVar9,lVar12);
    (**(code **)(lVar13 + 0x38))(pvVar8,0,1,lVar12);
    iVar10 = *(int *)(lVar13 + 0x54);
    sVar14 = *(size_t *)(lVar13 + 0x40);
  }
  else {
    iVar10 = *(int *)(lVar13 + 0x54);
    sVar14 = *(size_t *)(lVar13 + 0x40);
    sVar1 = sVar14;
    if (iVar10 == 0) {
      sVar1 = sVar14 + 1;
    }
    _memcpy(pvVar8,pvVar9,sVar1);
  }
  if (iVar10 == 0) {
    sVar14 = sVar14 + 1;
  }
  puVar7 = (undefined8 *)((long)pvVar8 + sVar14 + 7 & 0xfffffffffffffff8);
  puVar5 = (undefined8 *)((long)pvVar9 + sVar14 + 7 & 0xfffffffffffffff8);
  uVar4 = puVar5[1];
  uVar15 = *puVar5;
  puVar7[1] = puVar5[1];
  *puVar7 = uVar15;
  _swift_retain(uVar4);
  return param_1;
}



/* Address: 0x10071c114 | FUN_10071c114 */

long FUN_10071c114(long param_1,long param_2,long param_3)

{
  long lVar1;
  void *pvVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  size_t sVar7;
  undefined8 *puVar8;
  void *pvVar9;
  undefined8 uVar10;
  void *pvVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  code *pcVar15;
  undefined8 uVar16;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar12 = *(long *)(lVar1 + -8);
  (**(code **)(lVar12 + 0x18))(param_1,param_2,lVar1);
  lVar13 = *(long *)(param_3 + 0x18);
  lVar14 = *(long *)(lVar13 + -8);
  uVar6 = (ulong)*(byte *)(lVar14 + 0x50);
  lVar1 = *(long *)(lVar12 + 0x40) + uVar6;
  pvVar9 = (void *)(lVar1 + param_1 & (uVar6 ^ 0xffffffffffffffff));
  pvVar11 = (void *)(lVar1 + param_2 & (uVar6 ^ 0xffffffffffffffff));
  pcVar15 = *(code **)(lVar14 + 0x30);
  pvVar2 = pvVar9;
  (*pcVar15)(pvVar9,1,lVar13);
  pvVar3 = pvVar11;
  (*pcVar15)(pvVar11,1,lVar13);
  if ((int)pvVar2 == 0) {
    if ((int)pvVar3 == 0) {
      (**(code **)(lVar14 + 0x18))(pvVar9,pvVar11,lVar13);
      goto LAB_10071c224;
    }
    (**(code **)(lVar14 + 8))(pvVar9,lVar13);
  }
  else if ((int)pvVar3 == 0) {
    (**(code **)(lVar14 + 0x10))(pvVar9,pvVar11,lVar13);
    (**(code **)(lVar14 + 0x38))(pvVar9,0,1,lVar13);
    goto LAB_10071c224;
  }
  sVar7 = *(size_t *)(lVar14 + 0x40);
  if (*(int *)(lVar14 + 0x54) == 0) {
    sVar7 = sVar7 + 1;
  }
  _memcpy(pvVar9,pvVar11,sVar7);
LAB_10071c224:
  lVar1 = *(long *)(lVar14 + 0x40);
  if (*(int *)(lVar14 + 0x54) == 0) {
    lVar1 = lVar1 + 1;
  }
  puVar8 = (undefined8 *)((long)pvVar9 + lVar1 + 7 & 0xfffffffffffffff8);
  puVar5 = (undefined8 *)((long)pvVar11 + lVar1 + 7 & 0xfffffffffffffff8);
  uVar10 = puVar8[1];
  uVar4 = puVar5[1];
  uVar16 = *puVar5;
  puVar8[1] = puVar5[1];
  *puVar8 = uVar16;
  _swift_retain(uVar4);
  _swift_release(uVar10);
  return param_1;
}



/* Address: 0x10071c29c | FUN_10071c29c */

long FUN_10071c29c(long param_1,long param_2,long param_3)

{
  size_t sVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  void *pvVar7;
  void *pvVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  size_t sVar13;
  undefined8 uVar14;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar10 = *(long *)(lVar2 + -8);
  (**(code **)(lVar10 + 0x20))(param_1,param_2,lVar2);
  lVar11 = *(long *)(param_3 + 0x18);
  lVar12 = *(long *)(lVar11 + -8);
  uVar5 = (ulong)*(byte *)(lVar12 + 0x50);
  lVar2 = *(long *)(lVar10 + 0x40) + uVar5;
  pvVar7 = (void *)(lVar2 + param_1 & (uVar5 ^ 0xffffffffffffffff));
  pvVar8 = (void *)(lVar2 + param_2 & (uVar5 ^ 0xffffffffffffffff));
  pvVar3 = pvVar8;
  (**(code **)(lVar12 + 0x30))(pvVar8,1,lVar11);
  if ((int)pvVar3 == 0) {
    (**(code **)(lVar12 + 0x20))(pvVar7,pvVar8,lVar11);
    (**(code **)(lVar12 + 0x38))(pvVar7,0,1,lVar11);
    iVar9 = *(int *)(lVar12 + 0x54);
    sVar13 = *(size_t *)(lVar12 + 0x40);
  }
  else {
    iVar9 = *(int *)(lVar12 + 0x54);
    sVar13 = *(size_t *)(lVar12 + 0x40);
    sVar1 = sVar13;
    if (iVar9 == 0) {
      sVar1 = sVar13 + 1;
    }
    _memcpy(pvVar7,pvVar8,sVar1);
  }
  if (iVar9 == 0) {
    sVar13 = sVar13 + 1;
  }
  puVar6 = (undefined8 *)((long)pvVar7 + sVar13 + 7 & 0xfffffffffffffff8);
  puVar4 = (undefined8 *)((long)pvVar8 + sVar13 + 7 & 0xfffffffffffffff8);
  uVar14 = *puVar4;
  puVar6[1] = puVar4[1];
  *puVar6 = uVar14;
  return param_1;
}



/* Address: 0x10071c3c4 | FUN_10071c3c4 */

long FUN_10071c3c4(long param_1,long param_2,long param_3)

{
  long lVar1;
  void *pvVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  size_t sVar7;
  undefined8 *puVar8;
  void *pvVar9;
  void *pvVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  undefined8 uVar15;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar11 = *(long *)(lVar1 + -8);
  (**(code **)(lVar11 + 0x28))(param_1,param_2,lVar1);
  lVar12 = *(long *)(param_3 + 0x18);
  lVar13 = *(long *)(lVar12 + -8);
  uVar6 = (ulong)*(byte *)(lVar13 + 0x50);
  lVar1 = *(long *)(lVar11 + 0x40) + uVar6;
  pvVar9 = (void *)(lVar1 + param_1 & (uVar6 ^ 0xffffffffffffffff));
  pvVar10 = (void *)(lVar1 + param_2 & (uVar6 ^ 0xffffffffffffffff));
  pcVar14 = *(code **)(lVar13 + 0x30);
  pvVar2 = pvVar9;
  (*pcVar14)(pvVar9,1,lVar12);
  pvVar3 = pvVar10;
  (*pcVar14)(pvVar10,1,lVar12);
  if ((int)pvVar2 == 0) {
    if ((int)pvVar3 == 0) {
      (**(code **)(lVar13 + 0x28))(pvVar9,pvVar10,lVar12);
      goto LAB_10071c4d4;
    }
    (**(code **)(lVar13 + 8))(pvVar9,lVar12);
  }
  else if ((int)pvVar3 == 0) {
    (**(code **)(lVar13 + 0x20))(pvVar9,pvVar10,lVar12);
    (**(code **)(lVar13 + 0x38))(pvVar9,0,1,lVar12);
    goto LAB_10071c4d4;
  }
  sVar7 = *(size_t *)(lVar13 + 0x40);
  if (*(int *)(lVar13 + 0x54) == 0) {
    sVar7 = sVar7 + 1;
  }
  _memcpy(pvVar9,pvVar10,sVar7);
LAB_10071c4d4:
  lVar1 = *(long *)(lVar13 + 0x40);
  if (*(int *)(lVar13 + 0x54) == 0) {
    lVar1 = lVar1 + 1;
  }
  puVar8 = (undefined8 *)((long)pvVar9 + lVar1 + 7 & 0xfffffffffffffff8);
  puVar5 = (undefined8 *)((long)pvVar10 + lVar1 + 7 & 0xfffffffffffffff8);
  uVar4 = puVar8[1];
  uVar15 = *puVar5;
  puVar8[1] = puVar5[1];
  *puVar8 = uVar15;
  _swift_release(uVar4);
  return param_1;
}



/* Address: 0x10071c540 | FUN_10071c540 */

int * FUN_10071c540(int *param_1,uint param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  
  lVar9 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar13 = *(long *)(lVar9 + -8);
  uVar6 = *(uint *)(lVar13 + 0x54);
  lVar12 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar7 = *(uint *)(lVar12 + 0x54);
  uVar4 = 0;
  if (uVar7 != 0) {
    uVar4 = uVar7 - 1;
  }
  uVar2 = uVar4;
  if (uVar4 <= uVar6) {
    uVar2 = uVar6;
  }
  if (uVar2 < 0x80000000) {
    uVar2 = 0x7fffffff;
  }
  lVar14 = *(long *)(lVar12 + 0x40);
  if (uVar7 == 0) {
    lVar14 = lVar14 + 1;
  }
  if (param_2 != 0) {
    uVar15 = (ulong)*(byte *)(lVar12 + 0x50);
    uVar10 = *(long *)(lVar13 + 0x40) + uVar15;
    if (uVar2 <= param_2 && param_2 - uVar2 != 0) {
      uVar1 = (lVar14 + 7 + (uVar10 & (uVar15 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) + 0x10;
      uVar11 = 2;
      uVar5 = uVar11;
      if ((uVar1 & 0xfffffff8) == 0) {
        uVar5 = (param_2 - uVar2) + 1;
      }
      if (0xffff < uVar5) {
        uVar11 = 4;
      }
      if (uVar5 < 0x100) {
        uVar11 = 1;
      }
      uVar3 = 0;
      if (1 < uVar5) {
        uVar3 = uVar11;
      }
      if (uVar3 < 2) {
        if ((uVar3 != 0) &&
           (uVar11 = (uint)*(byte *)((long)param_1 + uVar1), *(byte *)((long)param_1 + uVar1) != 0))
        {
LAB_10071c620:
          iVar8 = uVar11 - 1;
          if ((uVar1 & 0xfffffff8) != 0) {
            iVar8 = *param_1;
          }
          return (int *)(ulong)(uVar2 + iVar8 + 1);
        }
      }
      else {
        if (uVar3 == 2) {
          uVar11 = (uint)*(ushort *)((long)param_1 + uVar1);
        }
        else {
          uVar11 = *(uint *)((long)param_1 + uVar1);
        }
        if (uVar11 != 0) goto LAB_10071c620;
      }
    }
    if (uVar6 == uVar2) {
                    /* WARNING: Could not recover jumptable at 0x00010071c678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar13 + 0x30))(param_1,uVar6,lVar9);
      return param_1;
    }
    uVar10 = uVar10 + (long)param_1 & ~uVar15;
    if (uVar4 != uVar2) {
      uVar10 = *(ulong *)(lVar14 + 7 + uVar10 & 0xfffffffffffffff8);
      if (0xfffffffe < uVar10) {
        uVar10 = 0xffffffff;
      }
      return (int *)(ulong)((int)uVar10 + 1);
    }
    if (1 < uVar7) {
      (**(code **)(lVar12 + 0x30))();
      uVar4 = 0;
      if ((int)uVar10 != 0) {
        uVar4 = (int)uVar10 - 1;
      }
      return (int *)(ulong)uVar4;
    }
  }
  return (int *)0x0;
}



/* Address: 0x10071c6f4 | FUN_10071c6f4 */

void FUN_10071c6f4(int *param_1,ulong param_2,uint param_3,long param_4)

{
  size_t sVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  code *UNRECOVERED_JUMPTABLE;
  ulong *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  
  lVar8 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 0x20),*(undefined8 *)(param_4 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar14 = *(long *)(lVar8 + -8);
  uVar6 = *(uint *)(lVar14 + 0x54);
  lVar11 = *(long *)(param_4 + 0x18);
  lVar13 = *(long *)(lVar11 + -8);
  uVar10 = *(uint *)(lVar13 + 0x54);
  uVar3 = 0;
  if (uVar10 != 0) {
    uVar3 = uVar10 - 1;
  }
  uVar4 = uVar3;
  if (uVar3 <= uVar6) {
    uVar4 = uVar6;
  }
  if (uVar4 < 0x80000000) {
    uVar4 = 0x7fffffff;
  }
  uVar16 = (ulong)*(byte *)(lVar13 + 0x50);
  uVar2 = *(long *)(lVar14 + 0x40) + uVar16;
  lVar15 = *(long *)(lVar13 + 0x40);
  if (uVar10 == 0) {
    lVar15 = lVar15 + 1;
  }
  sVar1 = (lVar15 + 7 + (uVar2 & (uVar16 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) + 0x10;
  uVar9 = 2;
  uVar17 = uVar9;
  if ((int)sVar1 == 0) {
    uVar17 = (param_3 - uVar4) + 1;
  }
  if (0xffff < uVar17) {
    uVar9 = 4;
  }
  if (uVar17 < 0x100) {
    uVar9 = 1;
  }
  uVar5 = 0;
  if (1 < uVar17) {
    uVar5 = uVar9;
  }
  uVar9 = 0;
  if (uVar4 < param_3) {
    uVar9 = uVar5;
  }
  uVar17 = (uint)param_2;
  iVar7 = uVar17 - uVar4;
  if (uVar17 < uVar4 || iVar7 == 0) {
    if (uVar9 < 2) {
      if (uVar9 != 0) {
        *(undefined1 *)((long)param_1 + sVar1) = 0;
      }
    }
    else if (uVar9 == 2) {
      *(undefined2 *)((long)param_1 + sVar1) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar1) = 0;
    }
    if (uVar17 != 0) {
      if (uVar6 == uVar4) {
        UNRECOVERED_JUMPTABLE = *(code **)(lVar14 + 0x38);
        lVar11 = lVar8;
        uVar10 = uVar6;
      }
      else {
        param_1 = (int *)(uVar2 + (long)param_1 & ~uVar16);
        if (uVar3 != uVar4) {
          puVar12 = (ulong *)(lVar15 + 7 + (long)param_1 & 0xfffffffffffffff8);
          if (-1 < (int)uVar17) {
            *puVar12 = (ulong)(uVar17 - 1);
            return;
          }
          *puVar12 = (ulong)(uVar17 & 0x7fffffff);
          puVar12[1] = 0;
          return;
        }
        UNRECOVERED_JUMPTABLE = *(code **)(lVar13 + 0x38);
        param_2 = (ulong)(uVar17 + 1);
      }
                    /* WARNING: Could not recover jumptable at 0x00010071c88c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1,param_2,uVar10,lVar11);
      return;
    }
  }
  else {
    if ((int)sVar1 != 0) {
      iVar7 = 1;
      _bzero(param_1,sVar1);
      *param_1 = uVar17 + ~uVar4;
    }
    if (uVar9 < 2) {
      if (uVar9 != 0) {
        *(char *)((long)param_1 + sVar1) = (char)iVar7;
      }
    }
    else if (uVar9 == 2) {
      *(short *)((long)param_1 + sVar1) = (short)iVar7;
    }
    else {
      *(int *)((long)param_1 + sVar1) = iVar7;
    }
  }
  return;
}



/* Address: 0x10071c8d8 | thunk_FUN_1001f646c */

void thunk_FUN_1001f646c(void)

{
  FUN_1001f646c();
  return;
}



/* Address: 0x10071c8dc | FUN_10071c8dc */

void FUN_10071c8dc(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_4 + -8);
  lVar2 = *(long *)(lVar3 + 0x40);
  (**(code **)(lVar3 + 0x10))(&stack0xffffffffffffffb0 + -(lVar2 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(lVar3 + 0x20))
            (param_1,&stack0xffffffffffffffb0 + -(lVar2 + 0xfU & 0xfffffffffffffff0),param_4);
  lVar2 = 0;
  FUN_10071c9f8(0,param_4,param_5);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar2 + 0x24));
  *puVar1 = param_2;
  puVar1[1] = param_3;
  _swift_retain(param_3);
  return;
}



/* Address: 0x10071c988 | FUN_10071c988 */

void FUN_10071c988(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long lVar2;
  
  (**(code **)(*(long *)(param_5 + -8) + 0x20))(param_1,param_2,param_5);
  lVar2 = 0;
  FUN_10071c9f8(0,param_5,param_6);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar2 + 0x24));
  *puVar1 = param_3;
  puVar1[1] = param_4;
  return;
}



/* Address: 0x10071c9f8 | FUN_10071c9f8 */

void FUN_10071c9f8(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x10071ca04 | FUN_10071ca04 */

undefined1  [16] FUN_10071ca04(long param_1)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + *(int *)(param_1 + 0x24));
  auVar2 = *pauVar1;
  _swift_retain(*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Address: 0x10071ca38 | FUN_10071ca38 */

undefined1  [16] FUN_10071ca38(long param_1)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + *(int *)(param_1 + 0x28));
  auVar2 = *pauVar1;
  _swift_retain(*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Address: 0x10071ca6c | FUN_10071ca6c */

void FUN_10071ca6c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = 0;
  FUN_10071cb54(0,param_5,param_6);
  puVar3 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  iVar2 = *(int *)(lVar4 + 0x24);
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_6,param_5,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  (**(code **)(*(long *)(lVar5 + -8) + 0x38))(param_1 + iVar2,1,1,lVar5);
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_6,param_5,puVar3,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  (**(code **)(*(long *)(lVar5 + -8) + 0x20))(param_1,param_2,lVar5);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar4 + 0x28));
  *puVar1 = param_3;
  puVar1[1] = param_4;
  return;
}



/* Address: 0x10071cb54 | FUN_10071cb54 */

void FUN_10071cb54(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x10071cb60 | FUN_10071cb60 */

void FUN_10071cb60(undefined8 param_1,long param_2)

{
  Optional OVar1;
  long lVar2;
  undefined7 extraout_var;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  uVar6 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x28) = uVar6;
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x30) = uVar5;
  lVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar6,uVar5,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  *(long *)(unaff_x22 + 0x38) = lVar2;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x40) = CONCAT71(extraout_var,OVar1.value);
  lVar7 = *(long *)(CONCAT71(extraout_var,OVar1.value) + -8);
  *(long *)(unaff_x22 + 0x48) = lVar7;
  uVar4 = *(long *)(lVar7 + 0x40) + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x50) = uVar3;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x58) = uVar3;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x60) = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x68) = uVar4;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x70) = lVar2;
  uVar4 = *(long *)(lVar2 + 0x40) + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x78) = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x80) = uVar4;
  _swift_task_switch(FUN_10071cc50,0,0);
  return;
}



/* Address: 0x10071cc50 | FUN_10071cc50 */

void FUN_10071cc50(void)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  code *pcVar7;
  undefined8 uVar8;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x68);
  lVar1 = *(long *)(unaff_x22 + 0x70);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x38);
  iVar2 = *(int *)(*(long *)(unaff_x22 + 0x18) + 0x24);
  *(int *)(unaff_x22 + 200) = iVar2;
  pcVar7 = *(code **)(*(long *)(unaff_x22 + 0x48) + 0x10);
  *(code **)(unaff_x22 + 0x88) = pcVar7;
  (*pcVar7)(uVar4,*(long *)(unaff_x22 + 0x20) + (long)iVar2,*(undefined8 *)(unaff_x22 + 0x40));
  pcVar7 = *(code **)(lVar1 + 0x30);
  *(code **)(unaff_x22 + 0x90) = pcVar7;
  (*pcVar7)(uVar4,1,uVar8);
  if ((int)uVar4 == 1) {
    uVar4 = *(undefined8 *)(unaff_x22 + 0x28);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x30);
    (**(code **)(*(long *)(unaff_x22 + 0x48) + 8))
              (*(undefined8 *)(unaff_x22 + 0x68),*(undefined8 *)(unaff_x22 + 0x40));
    puVar3 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
    uVar5 = 0;
    _swift_getAssociatedTypeWitness
              (0,uVar4,uVar8,
               PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
               PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
    _swift_getAssociatedConformanceWitness
              (uVar4,uVar8,uVar5,puVar3,
               PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
              );
    plVar6 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xb8) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_10071d10c;
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x22 + 0x30);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x28);
    pcVar7 = *(code **)(*(long *)(unaff_x22 + 0x70) + 0x20);
    *(code **)(unaff_x22 + 0x98) = pcVar7;
    (*pcVar7)(*(undefined8 *)(unaff_x22 + 0x80),*(undefined8 *)(unaff_x22 + 0x68),
              *(undefined8 *)(unaff_x22 + 0x38));
    puVar3 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
    uVar8 = 0;
    _swift_getAssociatedTypeWitness
              (0,uVar5,uVar4,
               PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
               PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
    _swift_getAssociatedConformanceWitness
              (uVar5,uVar4,uVar8,puVar3,
               PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
              );
    plVar6 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xa0) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_10071cdf4;
  }
  Swift::AsyncIteratorProtocol::_next();
  return;
}



/* Address: 0x10071cdf4 | FUN_10071cdf4 */

void FUN_10071cdf4(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xa8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xa0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10071ce58;
  }
  else {
    pcVar1 = FUN_10071d2a0;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x10071ce58 | FUN_10071ce58 */

void FUN_10071ce58(void)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  long lVar10;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar5 = uVar7;
  (**(code **)(unaff_x22 + 0x90))(uVar7,1,uVar8);
  if ((int)uVar5 == 1) {
    lVar10 = *(long *)(unaff_x22 + 0x70);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x40);
    lVar3 = *(long *)(unaff_x22 + 0x48);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x10);
    (**(code **)(lVar10 + 8))(*(undefined8 *)(unaff_x22 + 0x80),uVar8);
    (**(code **)(lVar3 + 8))(uVar7,uVar5);
    (**(code **)(lVar10 + 0x38))(uVar9,1,1,uVar8);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x78);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x68);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x58);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x80));
    _swift_task_dealloc(uVar5);
    _swift_task_dealloc(uVar9);
    _swift_task_dealloc(uVar7);
    _swift_task_dealloc(uVar4);
    _swift_task_dealloc(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010071cf40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar3 = *(long *)(unaff_x22 + 0x18);
  lVar10 = *(long *)(unaff_x22 + 0x20);
  (**(code **)(unaff_x22 + 0x98))(*(undefined8 *)(unaff_x22 + 0x78),uVar7,uVar8);
  piVar2 = *(int **)(lVar10 + *(int *)(lVar3 + 0x28));
  iVar1 = *piVar2;
  plVar6 = (long *)(ulong)(uint)piVar2[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xb0) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_10071cfb8;
                    /* WARNING: Could not recover jumptable at 0x00010071cfb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))
            (plVar6,*(undefined8 *)(unaff_x22 + 0x58),*(undefined8 *)(unaff_x22 + 0x80),
             *(undefined8 *)(unaff_x22 + 0x78));
  return;
}



/* Address: 0x10071cfb8 | FUN_10071cfb8 */

void FUN_10071cfb8(void)

{
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0xb0));
  _swift_task_switch(FUN_10071d008,0,0);
  return;
}



/* Address: 0x10071d008 | FUN_10071d008 */

void FUN_10071d008(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  code *pcVar10;
  long lVar11;
  
  iVar6 = *(int *)(unaff_x22 + 200);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x80);
  pcVar4 = *(code **)(unaff_x22 + 0x88);
  lVar2 = *(long *)(unaff_x22 + 0x70);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x40);
  lVar5 = *(long *)(unaff_x22 + 0x48);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x38);
  lVar11 = *(long *)(unaff_x22 + 0x20);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x10);
  pcVar10 = *(code **)(lVar2 + 8);
  (*pcVar10)(*(undefined8 *)(unaff_x22 + 0x78),uVar9);
  (*pcVar10)(uVar1,uVar9);
  (**(code **)(lVar2 + 0x38))(uVar8,0,1,uVar9);
  (**(code **)(lVar5 + 0x28))(lVar11 + iVar6,uVar8,uVar3);
  (*pcVar4)(uVar7,lVar11 + iVar6,uVar3);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x58);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x80));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010071d108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10071d10c | FUN_10071d10c */

void FUN_10071d10c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xc0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xb8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10071d170;
  }
  else {
    pcVar1 = FUN_10071d224;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x10071d170 | FUN_10071d170 */

void FUN_10071d170(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  long unaff_x22;
  long lVar8;
  
  pcVar7 = *(code **)(unaff_x22 + 0x88);
  iVar4 = *(int *)(unaff_x22 + 200);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x40);
  lVar8 = *(long *)(unaff_x22 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x10);
  (**(code **)(*(long *)(unaff_x22 + 0x48) + 0x28))
            (lVar8 + iVar4,*(undefined8 *)(unaff_x22 + 0x50),uVar6);
  (*pcVar7)(uVar5,lVar8 + iVar4,uVar6);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x58);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x80));
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010071d220. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10071d224 | FUN_10071d224 */

void FUN_10071d224(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x58);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x80));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010071d29c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10071d2a0 | FUN_10071d2a0 */

void FUN_10071d2a0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  (**(code **)(*(long *)(unaff_x22 + 0x70) + 8))
            (*(undefined8 *)(unaff_x22 + 0x80),*(undefined8 *)(unaff_x22 + 0x38));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x58);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x80));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010071d32c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10071d330 | FUN_10071d330 */

void FUN_10071d330(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0xd0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005c804c;
  FUN_10071cb60(plVar1,param_1,param_2);
  return;
}



/* Address: 0x10071d398 | FUN_10071d398 */

void FUN_10071d398(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  long lVar7;
  
  lVar2 = *(long *)(param_2 + 0x10);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  lVar7 = *(long *)(lVar2 + -8);
  lVar6 = *(long *)(lVar7 + 0x40);
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar3,lVar2,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar5 = *(long *)(*(long *)(lVar5 + -8) + 0x40);
  (**(code **)(lVar7 + 0x10))(&stack0xffffffffffffffb0 + -(lVar6 + 0xfU & 0xfffffffffffffff0));
  Swift::AsyncSequence::_makeAsyncIterator();
  puVar1 = (undefined8 *)(unaff_x20 + *(int *)(param_2 + 0x24));
  uVar4 = puVar1[1];
  FUN_10071ca6c(param_1,(long)(&stack0xffffffffffffffb0 + -(lVar6 + 0xfU & 0xfffffffffffffff0)) -
                        (lVar5 + 0xfU & 0xfffffffffffffff0),*puVar1,uVar4,lVar2,uVar3);
  _swift_retain(uVar4);
  return;
}



/* Address: 0x10071d484 | FUN_10071d484 */

void FUN_10071d484(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c74c68,param_1);
  return;
}



/* Address: 0x10071d494 | FUN_10071d494 */

void FUN_10071d494(long param_1)

{
  FUN_10071d398();
                    /* WARNING: Could not recover jumptable at 0x00010071d4c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + -8) + 8))();
  return;
}



/* Address: 0x10071d4c4 | FUN_10071d4c4 */

void FUN_10071d4c4(long param_1)

{
  long lVar1;
  ulong uVar2;
  long local_30;
  undefined *puStack_28;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    local_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = PTR___value_witness_table_for_____>____100eae0d0 + 0x40;
    _swift_initStructMetadata(param_1,0,2,&local_30,param_1 + 0x20);
  }
  return;
}



/* Address: 0x10071d53c | FUN_10071d53c */

void FUN_10071d53c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,param_1[1],*param_1,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  _swift_getFunctionTypeMetadata2(0x64000002,uVar1,uVar1,uVar1);
  return;
}



/* Address: 0x10071d57c | FUN_10071d57c */

void FUN_10071d57c(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  Optional OVar3;
  long lVar4;
  ulong uVar5;
  undefined7 extraout_var;
  long local_48;
  long local_40;
  undefined *puStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(ulong *)(param_1 + 0x18);
  lVar4 = 0x13f;
  uVar5 = uVar2;
  _swift_getAssociatedTypeWitness
            (0x13f,uVar2,uVar1,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  if (uVar5 < 0x40) {
    local_48 = *(long *)(lVar4 + -8) + 0x40;
    uVar5 = 0xff;
    _swift_getAssociatedTypeWitness
              (0xff,uVar2,uVar1,
               PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
               PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
    OVar3 = Swift::Optional::typeMetadataAccessor();
    if (uVar5 < 0x40) {
      local_40 = *(long *)(CONCAT71(extraout_var,OVar3.value) + -8) + 0x40;
      puStack_38 = PTR___value_witness_table_for_____>____100eae0d0 + 0x40;
      _swift_initStructMetadata(param_1,0,3,&local_48,param_1 + 0x20);
    }
  }
  return;
}



/* Address: 0x10071d654 | FUN_10071d654 */

long * FUN_10071d654(long *param_1,long *param_2,long param_3)

{
  undefined8 uVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  void *pvVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  size_t sVar11;
  void *pvVar12;
  void *pvVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  
  puVar3 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar17 = *(undefined8 *)(param_3 + 0x10);
  uVar1 = *(undefined8 *)(param_3 + 0x18);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar1,uVar17,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar15 = *(long *)(lVar4 + -8);
  lVar16 = *(long *)(lVar15 + 0x40);
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar1,uVar17,puVar3,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar14 = *(long *)(lVar5 + -8);
  uVar7 = (ulong)*(uint *)(lVar14 + 0x50) & 0xff;
  uVar8 = lVar16 + uVar7;
  sVar11 = *(size_t *)(lVar14 + 0x40);
  if (*(int *)(lVar14 + 0x54) == 0) {
    sVar11 = sVar11 + 1;
  }
  uVar2 = (uint)uVar7 | *(uint *)(lVar15 + 0x50) & 0xf8;
  if ((uVar2 < 8 && ((*(uint *)(lVar15 + 0x50) | *(uint *)(lVar14 + 0x50)) & 0x100000) == 0) &&
      (sVar11 + (uVar8 & (uVar7 ^ 0xffffffffffffffff)) + 7 & 0xfffffffffffffff8) + 0x10 < 0x19) {
    (**(code **)(lVar15 + 0x10))(param_1,param_2,lVar4);
    pvVar13 = (void *)(uVar8 + (long)param_1 & ~uVar7);
    pvVar12 = (void *)(uVar8 + (long)param_2 & ~uVar7);
    pvVar6 = pvVar12;
    (**(code **)(lVar14 + 0x30))(pvVar12,1,lVar5);
    if ((int)pvVar6 == 0) {
      (**(code **)(lVar14 + 0x10))(pvVar13,pvVar12,lVar5);
      (**(code **)(lVar14 + 0x38))(pvVar13,0,1,lVar5);
    }
    else {
      _memcpy(pvVar13,pvVar12,sVar11);
    }
    puVar9 = (undefined8 *)((long)pvVar13 + sVar11 + 7 & 0xfffffffffffffff8);
    puVar10 = (undefined8 *)((long)pvVar12 + sVar11 + 7 & 0xfffffffffffffff8);
    lVar4 = puVar10[1];
    uVar17 = *puVar10;
    puVar9[1] = puVar10[1];
    *puVar9 = uVar17;
  }
  else {
    uVar8 = (ulong)(uVar2 | 7);
    lVar4 = *param_2;
    *param_1 = lVar4;
    param_1 = (long *)(lVar4 + (uVar8 + 0x10 & (uVar8 ^ 0xffffffffffffffff)));
  }
  _swift_retain(lVar4);
  return param_1;
}



/* Address: 0x10071d804 | FUN_10071d804 */

void FUN_10071d804(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  puVar3 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar2,uVar1,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar8 = *(long *)(lVar4 + -8);
  (**(code **)(lVar8 + 8))(param_1,lVar4);
  lVar8 = *(long *)(lVar8 + 0x40);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar2,uVar1,puVar3,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar7 = *(long *)(lVar4 + -8);
  uVar6 = lVar8 + param_1 + (ulong)*(byte *)(lVar7 + 0x50) &
          ((ulong)*(byte *)(lVar7 + 0x50) ^ 0xffffffffffffffff);
  uVar5 = uVar6;
  (**(code **)(lVar7 + 0x30))(uVar6,1,lVar4);
  if ((int)uVar5 == 0) {
    (**(code **)(lVar7 + 8))(uVar6,lVar4);
  }
  lVar4 = uVar6 + *(long *)(lVar7 + 0x40);
  if (*(int *)(lVar7 + 0x54) == 0) {
    lVar4 = lVar4 + 1;
  }
  _swift_release(*(undefined8 *)((lVar4 + 7U & 0xfffffffffffffff8) + 8));
  return;
}



/* Address: 0x10071d8ec | FUN_10071d8ec */

long FUN_10071d8ec(long param_1,long param_2,long param_3)

{
  size_t sVar1;
  undefined *puVar2;
  long lVar3;
  void *pvVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  void *pvVar9;
  void *pvVar10;
  int iVar11;
  long lVar12;
  size_t sVar13;
  long lVar14;
  undefined8 uVar15;
  
  puVar2 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar5 = *(undefined8 *)(param_3 + 0x10);
  uVar15 = *(undefined8 *)(param_3 + 0x18);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar15,uVar5,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar14 = *(long *)(lVar3 + -8);
  (**(code **)(lVar14 + 0x10))(param_1,param_2,lVar3);
  lVar3 = *(long *)(lVar14 + 0x40);
  lVar14 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar15,uVar5,puVar2,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar12 = *(long *)(lVar14 + -8);
  uVar6 = (ulong)*(byte *)(lVar12 + 0x50);
  lVar3 = lVar3 + uVar6;
  pvVar9 = (void *)(lVar3 + param_1 & (uVar6 ^ 0xffffffffffffffff));
  pvVar10 = (void *)(lVar3 + param_2 & (uVar6 ^ 0xffffffffffffffff));
  pvVar4 = pvVar10;
  (**(code **)(lVar12 + 0x30))(pvVar10,1,lVar14);
  if ((int)pvVar4 == 0) {
    (**(code **)(lVar12 + 0x10))(pvVar9,pvVar10,lVar14);
    (**(code **)(lVar12 + 0x38))(pvVar9,0,1,lVar14);
    iVar11 = *(int *)(lVar12 + 0x54);
    sVar13 = *(size_t *)(lVar12 + 0x40);
  }
  else {
    iVar11 = *(int *)(lVar12 + 0x54);
    sVar13 = *(size_t *)(lVar12 + 0x40);
    sVar1 = sVar13;
    if (iVar11 == 0) {
      sVar1 = sVar13 + 1;
    }
    _memcpy(pvVar9,pvVar10,sVar1);
  }
  if (iVar11 == 0) {
    sVar13 = sVar13 + 1;
  }
  puVar8 = (undefined8 *)((long)pvVar9 + sVar13 + 7 & 0xfffffffffffffff8);
  puVar7 = (undefined8 *)((long)pvVar10 + sVar13 + 7 & 0xfffffffffffffff8);
  uVar5 = puVar7[1];
  uVar15 = *puVar7;
  puVar8[1] = puVar7[1];
  *puVar8 = uVar15;
  _swift_retain(uVar5);
  return param_1;
}



/* Address: 0x10071da3c | FUN_10071da3c */

long FUN_10071da3c(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  void *pvVar3;
  void *pvVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  size_t sVar8;
  undefined8 *puVar9;
  void *pvVar10;
  undefined8 uVar11;
  void *pvVar12;
  long lVar13;
  long lVar14;
  code *pcVar15;
  undefined8 uVar16;
  
  puVar1 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar5 = *(undefined8 *)(param_3 + 0x10);
  uVar11 = *(undefined8 *)(param_3 + 0x18);
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar11,uVar5,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar13 = *(long *)(lVar2 + -8);
  (**(code **)(lVar13 + 0x18))(param_1,param_2,lVar2);
  lVar2 = *(long *)(lVar13 + 0x40);
  lVar13 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar11,uVar5,puVar1,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar14 = *(long *)(lVar13 + -8);
  uVar6 = (ulong)*(byte *)(lVar14 + 0x50);
  lVar2 = lVar2 + uVar6;
  pvVar10 = (void *)(lVar2 + param_1 & (uVar6 ^ 0xffffffffffffffff));
  pvVar12 = (void *)(lVar2 + param_2 & (uVar6 ^ 0xffffffffffffffff));
  pcVar15 = *(code **)(lVar14 + 0x30);
  pvVar3 = pvVar10;
  (*pcVar15)(pvVar10,1,lVar13);
  pvVar4 = pvVar12;
  (*pcVar15)(pvVar12,1,lVar13);
  if ((int)pvVar3 == 0) {
    if ((int)pvVar4 == 0) {
      (**(code **)(lVar14 + 0x18))(pvVar10,pvVar12,lVar13);
      goto LAB_10071db6c;
    }
    (**(code **)(lVar14 + 8))(pvVar10,lVar13);
  }
  else if ((int)pvVar4 == 0) {
    (**(code **)(lVar14 + 0x10))(pvVar10,pvVar12,lVar13);
    (**(code **)(lVar14 + 0x38))(pvVar10,0,1,lVar13);
    goto LAB_10071db6c;
  }
  sVar8 = *(size_t *)(lVar14 + 0x40);
  if (*(int *)(lVar14 + 0x54) == 0) {
    sVar8 = sVar8 + 1;
  }
  _memcpy(pvVar10,pvVar12,sVar8);
LAB_10071db6c:
  lVar2 = *(long *)(lVar14 + 0x40);
  if (*(int *)(lVar14 + 0x54) == 0) {
    lVar2 = lVar2 + 1;
  }
  puVar9 = (undefined8 *)((long)pvVar10 + lVar2 + 7 & 0xfffffffffffffff8);
  puVar7 = (undefined8 *)((long)pvVar12 + lVar2 + 7 & 0xfffffffffffffff8);
  uVar11 = puVar9[1];
  uVar5 = puVar7[1];
  uVar16 = *puVar7;
  puVar9[1] = puVar7[1];
  *puVar9 = uVar16;
  _swift_retain(uVar5);
  _swift_release(uVar11);
  return param_1;
}



/* Address: 0x10071dbe4 | FUN_10071dbe4 */

long FUN_10071dbe4(long param_1,long param_2,long param_3)

{
  size_t sVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  void *pvVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  void *pvVar9;
  void *pvVar10;
  int iVar11;
  long lVar12;
  size_t sVar13;
  long lVar14;
  undefined8 uVar15;
  
  puVar3 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar15 = *(undefined8 *)(param_3 + 0x10);
  uVar2 = *(undefined8 *)(param_3 + 0x18);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar2,uVar15,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar14 = *(long *)(lVar4 + -8);
  (**(code **)(lVar14 + 0x20))(param_1,param_2,lVar4);
  lVar4 = *(long *)(lVar14 + 0x40);
  lVar14 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar2,uVar15,puVar3,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar12 = *(long *)(lVar14 + -8);
  uVar6 = (ulong)*(byte *)(lVar12 + 0x50);
  lVar4 = lVar4 + uVar6;
  pvVar9 = (void *)(lVar4 + param_1 & (uVar6 ^ 0xffffffffffffffff));
  pvVar10 = (void *)(lVar4 + param_2 & (uVar6 ^ 0xffffffffffffffff));
  pvVar5 = pvVar10;
  (**(code **)(lVar12 + 0x30))(pvVar10,1,lVar14);
  if ((int)pvVar5 == 0) {
    (**(code **)(lVar12 + 0x20))(pvVar9,pvVar10,lVar14);
    (**(code **)(lVar12 + 0x38))(pvVar9,0,1,lVar14);
    iVar11 = *(int *)(lVar12 + 0x54);
    sVar13 = *(size_t *)(lVar12 + 0x40);
  }
  else {
    iVar11 = *(int *)(lVar12 + 0x54);
    sVar13 = *(size_t *)(lVar12 + 0x40);
    sVar1 = sVar13;
    if (iVar11 == 0) {
      sVar1 = sVar13 + 1;
    }
    _memcpy(pvVar9,pvVar10,sVar1);
  }
  if (iVar11 == 0) {
    sVar13 = sVar13 + 1;
  }
  puVar8 = (undefined8 *)((long)pvVar9 + sVar13 + 7 & 0xfffffffffffffff8);
  puVar7 = (undefined8 *)((long)pvVar10 + sVar13 + 7 & 0xfffffffffffffff8);
  uVar15 = *puVar7;
  puVar8[1] = puVar7[1];
  *puVar8 = uVar15;
  return param_1;
}



/* Address: 0x10071dd2c | FUN_10071dd2c */

long FUN_10071dd2c(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  void *pvVar3;
  void *pvVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  size_t sVar8;
  undefined8 *puVar9;
  void *pvVar10;
  void *pvVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  undefined8 uVar15;
  
  puVar1 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar5 = *(undefined8 *)(param_3 + 0x10);
  uVar15 = *(undefined8 *)(param_3 + 0x18);
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar15,uVar5,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar12 = *(long *)(lVar2 + -8);
  (**(code **)(lVar12 + 0x28))(param_1,param_2,lVar2);
  lVar2 = *(long *)(lVar12 + 0x40);
  lVar12 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar15,uVar5,puVar1,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar13 = *(long *)(lVar12 + -8);
  uVar6 = (ulong)*(byte *)(lVar13 + 0x50);
  lVar2 = lVar2 + uVar6;
  pvVar10 = (void *)(lVar2 + param_1 & (uVar6 ^ 0xffffffffffffffff));
  pvVar11 = (void *)(lVar2 + param_2 & (uVar6 ^ 0xffffffffffffffff));
  pcVar14 = *(code **)(lVar13 + 0x30);
  pvVar3 = pvVar10;
  (*pcVar14)(pvVar10,1,lVar12);
  pvVar4 = pvVar11;
  (*pcVar14)(pvVar11,1,lVar12);
  if ((int)pvVar3 == 0) {
    if ((int)pvVar4 == 0) {
      (**(code **)(lVar13 + 0x28))(pvVar10,pvVar11,lVar12);
      goto LAB_10071de5c;
    }
    (**(code **)(lVar13 + 8))(pvVar10,lVar12);
  }
  else if ((int)pvVar4 == 0) {
    (**(code **)(lVar13 + 0x20))(pvVar10,pvVar11,lVar12);
    (**(code **)(lVar13 + 0x38))(pvVar10,0,1,lVar12);
    goto LAB_10071de5c;
  }
  sVar8 = *(size_t *)(lVar13 + 0x40);
  if (*(int *)(lVar13 + 0x54) == 0) {
    sVar8 = sVar8 + 1;
  }
  _memcpy(pvVar10,pvVar11,sVar8);
LAB_10071de5c:
  lVar2 = *(long *)(lVar13 + 0x40);
  if (*(int *)(lVar13 + 0x54) == 0) {
    lVar2 = lVar2 + 1;
  }
  puVar9 = (undefined8 *)((long)pvVar10 + lVar2 + 7 & 0xfffffffffffffff8);
  puVar7 = (undefined8 *)((long)pvVar11 + lVar2 + 7 & 0xfffffffffffffff8);
  uVar5 = puVar9[1];
  uVar15 = *puVar7;
  puVar9[1] = puVar7[1];
  *puVar9 = uVar15;
  _swift_release(uVar5);
  return param_1;
}



/* Address: 0x10071dec8 | FUN_10071dec8 */

int * FUN_10071dec8(int *param_1,uint param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined *puVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  
  puVar11 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar6 = *(undefined8 *)(param_3 + 0x10);
  uVar7 = *(undefined8 *)(param_3 + 0x18);
  lVar13 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar7,uVar6,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar19 = *(long *)(lVar13 + -8);
  uVar8 = *(uint *)(lVar19 + 0x54);
  lVar14 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar7,uVar6,puVar11,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar16 = *(long *)(lVar14 + -8);
  uVar9 = *(uint *)(lVar16 + 0x54);
  uVar4 = 0;
  if (uVar9 != 0) {
    uVar4 = uVar9 - 1;
  }
  uVar2 = uVar4;
  if (uVar4 <= uVar8) {
    uVar2 = uVar8;
  }
  if (uVar2 < 0x80000000) {
    uVar2 = 0x7fffffff;
  }
  lVar17 = *(long *)(lVar16 + 0x40);
  if (uVar9 == 0) {
    lVar17 = lVar17 + 1;
  }
  if (param_2 != 0) {
    uVar18 = (ulong)*(byte *)(lVar16 + 0x50);
    uVar15 = *(long *)(lVar19 + 0x40) + uVar18;
    if (uVar2 <= param_2 && param_2 - uVar2 != 0) {
      uVar1 = (lVar17 + 7 + (uVar15 & (uVar18 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) + 0x10;
      uVar12 = 2;
      uVar5 = uVar12;
      if ((uVar1 & 0xfffffff8) == 0) {
        uVar5 = (param_2 - uVar2) + 1;
      }
      if (0xffff < uVar5) {
        uVar12 = 4;
      }
      if (uVar5 < 0x100) {
        uVar12 = 1;
      }
      uVar3 = 0;
      if (1 < uVar5) {
        uVar3 = uVar12;
      }
      if (uVar3 < 2) {
        if ((uVar3 != 0) &&
           (uVar12 = (uint)*(byte *)((long)param_1 + uVar1), *(byte *)((long)param_1 + uVar1) != 0))
        {
LAB_10071dfd4:
          iVar10 = uVar12 - 1;
          if ((uVar1 & 0xfffffff8) != 0) {
            iVar10 = *param_1;
          }
          return (int *)(ulong)(uVar2 + iVar10 + 1);
        }
      }
      else {
        if (uVar3 == 2) {
          uVar12 = (uint)*(ushort *)((long)param_1 + uVar1);
        }
        else {
          uVar12 = *(uint *)((long)param_1 + uVar1);
        }
        if (uVar12 != 0) goto LAB_10071dfd4;
      }
    }
    if (uVar8 == uVar2) {
                    /* WARNING: Could not recover jumptable at 0x00010071e034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar19 + 0x30))(param_1,uVar8,lVar13);
      return param_1;
    }
    uVar15 = uVar15 + (long)param_1 & ~uVar18;
    if (uVar4 != uVar2) {
      uVar15 = *(ulong *)(lVar17 + 7 + uVar15 & 0xfffffffffffffff8);
      if (0xfffffffe < uVar15) {
        uVar15 = 0xffffffff;
      }
      return (int *)(ulong)((int)uVar15 + 1);
    }
    if (1 < uVar9) {
      (**(code **)(lVar16 + 0x30))(uVar15,uVar9,lVar14);
      uVar4 = 0;
      if ((int)uVar15 != 0) {
        uVar4 = (int)uVar15 - 1;
      }
      return (int *)(ulong)uVar4;
    }
  }
  return (int *)0x0;
}



/* Address: 0x10071e0b8 | FUN_10071e0b8 */

void FUN_10071e0b8(int *param_1,ulong param_2,uint param_3,long param_4)

{
  size_t sVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  code *UNRECOVERED_JUMPTABLE;
  long lVar14;
  ulong *puVar15;
  long lVar16;
  ulong uVar17;
  uint uVar18;
  uint uVar19;
  long lVar20;
  
  puVar11 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar6 = *(undefined8 *)(param_4 + 0x10);
  uVar7 = *(undefined8 *)(param_4 + 0x18);
  lVar12 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar7,uVar6,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar20 = *(long *)(lVar12 + -8);
  uVar8 = *(uint *)(lVar20 + 0x54);
  lVar13 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar7,uVar6,puVar11,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar14 = *(long *)(lVar13 + -8);
  uVar9 = *(uint *)(lVar14 + 0x54);
  uVar3 = 0;
  if (uVar9 != 0) {
    uVar3 = uVar9 - 1;
  }
  uVar4 = uVar3;
  if (uVar3 <= uVar8) {
    uVar4 = uVar8;
  }
  if (uVar4 < 0x80000000) {
    uVar4 = 0x7fffffff;
  }
  uVar17 = (ulong)*(byte *)(lVar14 + 0x50);
  uVar2 = *(long *)(lVar20 + 0x40) + uVar17;
  lVar16 = *(long *)(lVar14 + 0x40);
  if (uVar9 == 0) {
    lVar16 = lVar16 + 1;
  }
  sVar1 = (lVar16 + 7 + (uVar2 & (uVar17 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) + 0x10;
  uVar18 = 2;
  uVar19 = uVar18;
  if ((int)sVar1 == 0) {
    uVar19 = (param_3 - uVar4) + 1;
  }
  if (0xffff < uVar19) {
    uVar18 = 4;
  }
  if (uVar19 < 0x100) {
    uVar18 = 1;
  }
  uVar5 = 0;
  if (1 < uVar19) {
    uVar5 = uVar18;
  }
  uVar18 = 0;
  if (uVar4 < param_3) {
    uVar18 = uVar5;
  }
  uVar19 = (uint)param_2;
  iVar10 = uVar19 - uVar4;
  if (uVar19 < uVar4 || iVar10 == 0) {
    if (uVar18 < 2) {
      if (uVar18 != 0) {
        *(undefined1 *)((long)param_1 + sVar1) = 0;
      }
    }
    else if (uVar18 == 2) {
      *(undefined2 *)((long)param_1 + sVar1) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar1) = 0;
    }
    if (uVar19 != 0) {
      if (uVar8 == uVar4) {
        UNRECOVERED_JUMPTABLE = *(code **)(lVar20 + 0x38);
        lVar13 = lVar12;
        uVar9 = uVar8;
      }
      else {
        param_1 = (int *)(uVar2 + (long)param_1 & ~uVar17);
        if (uVar3 != uVar4) {
          puVar15 = (ulong *)(lVar16 + 7 + (long)param_1 & 0xfffffffffffffff8);
          if (-1 < (int)uVar19) {
            *puVar15 = (ulong)(uVar19 - 1);
            return;
          }
          *puVar15 = (ulong)(uVar19 & 0x7fffffff);
          puVar15[1] = 0;
          return;
        }
        UNRECOVERED_JUMPTABLE = *(code **)(lVar14 + 0x38);
        param_2 = (ulong)(uVar19 + 1);
      }
                    /* WARNING: Could not recover jumptable at 0x00010071e284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1,param_2,uVar9,lVar13);
      return;
    }
  }
  else {
    if ((int)sVar1 != 0) {
      iVar10 = 1;
      _bzero(param_1,sVar1);
      *param_1 = uVar19 + ~uVar4;
    }
    if (uVar18 < 2) {
      if (uVar18 != 0) {
        *(char *)((long)param_1 + sVar1) = (char)iVar10;
      }
    }
    else if (uVar18 == 2) {
      *(short *)((long)param_1 + sVar1) = (short)iVar10;
    }
    else {
      *(int *)((long)param_1 + sVar1) = iVar10;
    }
  }
  return;
}


