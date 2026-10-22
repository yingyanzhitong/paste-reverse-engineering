/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1006ff458 | FUN_1006ff458 */

void FUN_1006ff458(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  TargetProtocolConformanceDescriptor *pTVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  byte bVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long unaff_x22;
  long *plVar14;
  undefined8 uVar15;
  
  lVar11 = *(long *)(unaff_x22 + 0x80);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
  plVar14 = *(long **)(unaff_x22 + 0x48);
  lVar4 = 0xff;
  FUN_10073d7b0(0xff,uVar2);
  *(long *)(unaff_x22 + 0x90) = lVar4;
  pTVar5 = &TargetProtocolConformanceDescriptor_100c75b68;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c75b68,lVar4);
  *(TargetProtocolConformanceDescriptor **)(unaff_x22 + 0x98) = pTVar5;
  lVar6 = 0;
  FUN_1009c16a0(0,lVar4,pTVar5);
  *(long *)(unaff_x22 + 0xa0) = lVar6;
  lVar12 = *(long *)(lVar6 + -8);
  *(long *)(unaff_x22 + 0xa8) = lVar12;
  uVar7 = *(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xb0) = uVar7;
  lVar13 = *(long *)(lVar4 + -8);
  uVar8 = *(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar8);
  lVar12 = *plVar14;
  puVar3 = (undefined8 *)((long)plVar14 + *(long *)(lVar12 + 0x78));
  uVar15 = *puVar3;
  *(undefined8 *)(unaff_x22 + 0x30) = puVar3[1];
  *(undefined8 *)(unaff_x22 + 0x28) = uVar15;
  *(undefined8 *)(unaff_x22 + 0x18) = 0;
  *(undefined8 *)(unaff_x22 + 0x10) = 0;
  *(undefined1 *)(unaff_x22 + 0x20) = 1;
  (**(code **)(lVar11 + 0x10))(uVar1,(long)plVar14 + *(long *)(lVar12 + 0x70),uVar2);
  FUN_10073d6dc(uVar8,(undefined8 *)(unaff_x22 + 0x28),(undefined8 *)(unaff_x22 + 0x10),uVar1,uVar2,
                uVar9);
  FUN_1009bf648(uVar7,lVar4,pTVar5);
  lVar11 = lVar4;
  (**(code **)(lVar13 + 8))(uVar8);
  bVar10 = (byte)lVar11;
  _swift_task_dealloc(uVar8);
  FUN_1009bfcac();
  *(long *)(unaff_x22 + 0x38) = lVar6;
  *(long *)(unaff_x22 + 0xb8) = lVar6;
  *(byte *)(unaff_x22 + 0x40) = bVar10 & 1;
  plVar14 = (long *)0xb0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xc0) = plVar14;
  uVar9 = 0;
  FUN_1009c2a80(0,lVar4,pTVar5);
  *plVar14 = unaff_x22;
  plVar14[1] = (long)FUN_1006ff628;
  FUN_1009bfdac(*(undefined8 *)(unaff_x22 + 0x78),uVar9);
  return;
}



/* Address: 0x1006ff628 | FUN_1006ff628 */

void FUN_1006ff628(void)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0xc0));
  if (unaff_x20 != 0) {
    _swift_errorRelease();
    return;
  }
  _swift_task_switch(FUN_1006ff690,*(undefined8 *)(lVar1 + 0x48),0);
  return;
}



/* Address: 0x1006ff690 | FUN_1006ff690 */

void FUN_1006ff690(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar3 = uVar5;
  (**(code **)(*(long *)(*(long *)(unaff_x22 + 0x60) + -8) + 0x30))(uVar5,1);
  if ((int)uVar3 == 1) {
    uVar3 = *(undefined8 *)(unaff_x22 + 0xb0);
    uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
    lVar2 = *(long *)(unaff_x22 + 0xa8);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x88);
    _swift_release(*(undefined8 *)(unaff_x22 + 0xb8));
    (**(code **)(lVar2 + 8))(uVar3,uVar1);
    _swift_task_dealloc(uVar3);
    _swift_task_dealloc(uVar6);
    _swift_task_dealloc(uVar5);
                    /* WARNING: Could not recover jumptable at 0x0001006ff72c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar3 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
  lVar2 = *(long *)(unaff_x22 + 0x70);
  FUN_1006ff06c();
  (**(code **)(lVar2 + 8))(uVar5,uVar1);
  plVar4 = (long *)0xb0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 200) = plVar4;
  uVar5 = 0;
  FUN_1009c2a80(0,uVar3,uVar6);
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1006ff7ac;
  FUN_1009bfdac(*(undefined8 *)(unaff_x22 + 0x78),uVar5);
  return;
}



/* Address: 0x1006ff7ac | FUN_1006ff7ac */

void FUN_1006ff7ac(void)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 200));
  if (unaff_x20 != 0) {
    _swift_errorRelease();
    return;
  }
  _swift_task_switch(FUN_1006ff690,*(undefined8 *)(lVar1 + 0x48),0);
  return;
}



/* Address: 0x1006ff814 | FUN_1006ff814 */

void FUN_1006ff814(void)

{
  long lVar1;
  long *unaff_x20;
  
  lVar1 = *unaff_x20;
  _swift_bridgeObjectRelease(unaff_x20[0xe]);
  (**(code **)(*(long *)(*(long *)(lVar1 + 0x50) + -8) + 8))
            ((long)unaff_x20 + *(long *)(*unaff_x20 + 0x70));
  _swift_defaultActor_destroy();
  return;
}



/* Address: 0x1006ff860 | FUN_1006ff860 */

void FUN_1006ff860(void)

{
  FUN_1006ff814();
  _swift_defaultActor_deallocate();
  return;
}



/* Address: 0x1006ff87c | FUN_1006ff87c */

void FUN_1006ff87c(void)

{
  FUN_100243aec();
  return;
}



/* Address: 0x1006ff894 | FUN_1006ff894 */

void FUN_1006ff894(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x170;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005c804c;
  FUN_1006fd5ec(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



/* Address: 0x1006ff94c | FUN_1006ff94c */

void FUN_1006ff94c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x1a0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005c804c;
  FUN_1006fda5c(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



/* Address: 0x1006ffa04 | FUN_1006ffa04 */

void FUN_1006ffa04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x130;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005c804c;
  FUN_1006fe0e8(plVar1,param_1,param_2,param_3,param_4,param_5);
  return;
}



/* Address: 0x1006ffa88 | FUN_1006ffa88 */

void FUN_1006ffa88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x180;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005c804c;
  FUN_1006fe664(plVar1,param_1,param_2,param_3,param_4,param_5);
  return;
}



/* Address: 0x1006ffb0c | FUN_1006ffb0c */

void FUN_1006ffb0c(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x60;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005c804c;
  FUN_1006fef18(param_1,param_2);
  return;
}



/* Address: 0x1006ffb74 | FUN_1006ffb74 */

void FUN_1006ffb74(void)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0xd0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005c804c;
  FUN_1006ff39c();
  return;
}



/* Address: 0x1006ffbc4 | FUN_1006ffbc4 */

void FUN_1006ffbc4(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1006ffbd0 | FUN_1006ffbd0 */

void FUN_1006ffbd0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_1006fdfa0(param_1,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),param_2,0x3a);
  return;
}



/* Address: 0x1006ffbf4 | FUN_1006ffbf4 */

void FUN_1006ffbf4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fde9c8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c73968;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c73968,&DAT_100efb418);
  DAT_100fde9c8 = pTVar1;
  return;
}



/* Address: 0x1006ffc34 | FUN_1006ffc34 */

void FUN_1006ffc34(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_1006fdfa0(param_1,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),param_2,0x3e);
  return;
}



/* Address: 0x1006ffc58 | FUN_1006ffc58 */

void FUN_1006ffc58(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *local_40;
  undefined *puStack_38;
  long local_30;
  undefined *puStack_28;
  
  puStack_38 = PTR___value_witness_table_for_Builtin_BridgeObject_100eabd38 + 0x40;
  local_40 = &DAT_100c73888;
  uVar2 = *(ulong *)(param_1 + 0x50);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    local_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = &DAT_100c738a0;
    _swift_initClassMetadata2(param_1,0,4,&local_40,param_1 + 0x60);
  }
  return;
}



/* Address: 0x1006ffce8 | FUN_1006ffce8 */

void FUN_1006ffce8(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1006ffcf4 | FUN_1006ffcf4 */

void FUN_1006ffcf4(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1006ffd00 | FUN_1006ffd00 */

undefined1  [16] FUN_1006ffd00(long param_1)

{
  Optional OVar1;
  ulong uVar2;
  undefined7 extraout_var;
  long lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined *local_30;
  long local_28;
  
  local_30 = &DAT_100c738f0;
  uVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lVar3 = CONCAT71(extraout_var,OVar1.value);
  if (uVar2 < 0x40) {
    local_28 = *(long *)(lVar3 + -8) + 0x40;
    _swift_initStructMetadata(param_1,0,2,&local_30,param_1 + 0x20);
    lVar3 = 0;
    uVar4 = 0;
  }
  else {
    uVar4 = 0x3f;
  }
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = lVar3;
  return auVar5;
}



/* Address: 0x1006ffd94 | FUN_1006ffd94 */

long * FUN_1006ffd94(long *param_1,long *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  size_t sVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  lVar8 = *(long *)(lVar3 + -8);
  uVar7 = (ulong)*(uint *)(lVar8 + 0x50) & 0xff;
  sVar6 = *(size_t *)(lVar8 + 0x40);
  if (*(int *)(lVar8 + 0x54) == 0) {
    sVar6 = sVar6 + 1;
  }
  if (((uint)uVar7 < 8 && (*(uint *)(lVar8 + 0x50) & 0x100000) == 0) &&
      0xffffffffffffffe6 < (-uVar7 - 0x31 | uVar7) - sVar6) {
    lVar5 = param_2[5];
    lVar9 = param_2[3];
    param_1[4] = param_2[4];
    param_1[3] = lVar9;
    param_1[5] = lVar5;
    (*(code *)**(undefined8 **)(lVar9 + -8))(param_1,param_2);
    uVar1 = (long)param_1 + uVar7 + 0x30;
    uVar2 = (long)param_2 + uVar7 + 0x30;
    uVar4 = uVar2 & (uVar7 ^ 0xffffffffffffffff);
    (**(code **)(lVar8 + 0x30))(uVar4,1,lVar3);
    if ((int)uVar4 == 0) {
      (**(code **)(lVar8 + 0x10))
                (uVar1 & (uVar7 ^ 0xffffffffffffffff),uVar2 & (uVar7 ^ 0xffffffffffffffff),lVar3);
      (**(code **)(lVar8 + 0x38))(uVar1 & (uVar7 ^ 0xffffffffffffffff),0,1,lVar3);
    }
    else {
      _memcpy((void *)(uVar1 & (uVar7 ^ 0xffffffffffffffff)),
              (void *)(uVar2 & (uVar7 ^ 0xffffffffffffffff)),sVar6);
    }
  }
  else {
    lVar3 = *param_2;
    *param_1 = lVar3;
    param_1 = (long *)(lVar3 + ((ulong)((uint)uVar7 & 0xf8 ^ 0x1f8) & uVar7 + 0x10));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x1006ffee0 | FUN_1006ffee0 */

void FUN_1006ffee0(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  FUN_100004594();
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  lVar4 = *(long *)(lVar2 + -8);
  uVar5 = (ulong)*(byte *)(lVar4 + 0x50);
  uVar1 = param_1 + uVar5 + 0x30;
  uVar3 = uVar1 & (uVar5 ^ 0xffffffffffffffff);
  (**(code **)(lVar4 + 0x30))(uVar3,1,lVar2);
  if ((int)uVar3 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001006fff6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))(uVar1 & (uVar5 ^ 0xffffffffffffffff),lVar2);
  return;
}



/* Address: 0x1006fff70 | FUN_1006fff70 */

long FUN_1006fff70(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  size_t sVar6;
  ulong uVar7;
  long lVar8;
  
  uVar5 = *(undefined8 *)(param_2 + 0x28);
  lVar3 = *(long *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(long *)(param_1 + 0x18) = lVar3;
  *(undefined8 *)(param_1 + 0x28) = uVar5;
  (*(code *)**(undefined8 **)(lVar3 + -8))();
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  lVar8 = *(long *)(lVar3 + -8);
  uVar7 = (ulong)*(byte *)(lVar8 + 0x50);
  uVar1 = uVar7 + 0x30 + param_1;
  uVar2 = uVar7 + 0x30 + param_2;
  uVar4 = uVar2 & (uVar7 ^ 0xffffffffffffffff);
  (**(code **)(lVar8 + 0x30))(uVar4,1,lVar3);
  if ((int)uVar4 == 0) {
    (**(code **)(lVar8 + 0x10))
              (uVar1 & (uVar7 ^ 0xffffffffffffffff),uVar2 & (uVar7 ^ 0xffffffffffffffff),lVar3);
    (**(code **)(lVar8 + 0x38))(uVar1 & (uVar7 ^ 0xffffffffffffffff),0,1,lVar3);
  }
  else {
    sVar6 = *(size_t *)(lVar8 + 0x40);
    if (*(int *)(lVar8 + 0x54) == 0) {
      sVar6 = sVar6 + 1;
    }
    _memcpy((void *)(uVar1 & (uVar7 ^ 0xffffffffffffffff)),
            (void *)(uVar2 & (uVar7 ^ 0xffffffffffffffff)),sVar6);
  }
  return param_1;
}



/* Address: 0x100700060 | FUN_100700060 */

long FUN_100700060(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  size_t sVar6;
  ulong uVar7;
  long lVar8;
  code *pcVar9;
  
  FUN_1004553a8();
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  lVar8 = *(long *)(lVar3 + -8);
  uVar7 = (ulong)*(byte *)(lVar8 + 0x50);
  uVar1 = uVar7 + 0x30 + param_1;
  uVar2 = uVar7 + 0x30 + param_2;
  pcVar9 = *(code **)(lVar8 + 0x30);
  uVar4 = uVar1 & (uVar7 ^ 0xffffffffffffffff);
  (*pcVar9)(uVar4,1,lVar3);
  uVar5 = uVar2 & (uVar7 ^ 0xffffffffffffffff);
  (*pcVar9)(uVar5,1,lVar3);
  if ((int)uVar4 == 0) {
    if ((int)uVar5 == 0) {
      (**(code **)(lVar8 + 0x18))
                (uVar1 & (uVar7 ^ 0xffffffffffffffff),uVar2 & (uVar7 ^ 0xffffffffffffffff),lVar3);
      return param_1;
    }
    (**(code **)(lVar8 + 8))(uVar1 & (uVar7 ^ 0xffffffffffffffff),lVar3);
  }
  else if ((int)uVar5 == 0) {
    (**(code **)(lVar8 + 0x10))
              (uVar1 & (uVar7 ^ 0xffffffffffffffff),uVar2 & (uVar7 ^ 0xffffffffffffffff),lVar3);
    (**(code **)(lVar8 + 0x38))(uVar1 & (uVar7 ^ 0xffffffffffffffff),0,1,lVar3);
    return param_1;
  }
  sVar6 = *(size_t *)(lVar8 + 0x40);
  if (*(int *)(lVar8 + 0x54) == 0) {
    sVar6 = sVar6 + 1;
  }
  _memcpy((void *)(uVar1 & (uVar7 ^ 0xffffffffffffffff)),
          (void *)(uVar2 & (uVar7 ^ 0xffffffffffffffff)),sVar6);
  return param_1;
}



/* Address: 0x100700180 | FUN_100700180 */

undefined8 * FUN_100700180(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  size_t sVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar8 = *param_2;
  uVar10 = param_2[3];
  uVar9 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar8;
  param_1[3] = uVar10;
  param_1[2] = uVar9;
  uVar8 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar8;
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  lVar7 = *(long *)(lVar3 + -8);
  uVar6 = (ulong)*(byte *)(lVar7 + 0x50);
  uVar1 = uVar6 + 0x30 + (long)param_1;
  uVar2 = uVar6 + 0x30 + (long)param_2;
  uVar4 = uVar2 & (uVar6 ^ 0xffffffffffffffff);
  (**(code **)(lVar7 + 0x30))(uVar4,1,lVar3);
  if ((int)uVar4 == 0) {
    (**(code **)(lVar7 + 0x20))
              (uVar1 & (uVar6 ^ 0xffffffffffffffff),uVar2 & (uVar6 ^ 0xffffffffffffffff),lVar3);
    (**(code **)(lVar7 + 0x38))(uVar1 & (uVar6 ^ 0xffffffffffffffff),0,1,lVar3);
  }
  else {
    sVar5 = *(size_t *)(lVar7 + 0x40);
    if (*(int *)(lVar7 + 0x54) == 0) {
      sVar5 = sVar5 + 1;
    }
    _memcpy((void *)(uVar1 & (uVar6 ^ 0xffffffffffffffff)),
            (void *)(uVar2 & (uVar6 ^ 0xffffffffffffffff)),sVar5);
  }
  return param_1;
}



/* Address: 0x10070025c | FUN_10070025c */

undefined8 * FUN_10070025c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  size_t sVar6;
  ulong uVar7;
  long lVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  FUN_100004594();
  uVar10 = *param_2;
  uVar12 = param_2[3];
  uVar11 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar10;
  param_1[3] = uVar12;
  param_1[2] = uVar11;
  uVar10 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar10;
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  lVar8 = *(long *)(lVar3 + -8);
  uVar7 = (ulong)*(byte *)(lVar8 + 0x50);
  uVar1 = uVar7 + 0x30 + (long)param_1;
  uVar2 = uVar7 + 0x30 + (long)param_2;
  pcVar9 = *(code **)(lVar8 + 0x30);
  uVar4 = uVar1 & (uVar7 ^ 0xffffffffffffffff);
  (*pcVar9)(uVar4,1,lVar3);
  uVar5 = uVar2 & (uVar7 ^ 0xffffffffffffffff);
  (*pcVar9)(uVar5,1,lVar3);
  if ((int)uVar4 == 0) {
    if ((int)uVar5 == 0) {
      (**(code **)(lVar8 + 0x28))
                (uVar1 & (uVar7 ^ 0xffffffffffffffff),uVar2 & (uVar7 ^ 0xffffffffffffffff),lVar3);
      return param_1;
    }
    (**(code **)(lVar8 + 8))(uVar1 & (uVar7 ^ 0xffffffffffffffff),lVar3);
  }
  else if ((int)uVar5 == 0) {
    (**(code **)(lVar8 + 0x20))
              (uVar1 & (uVar7 ^ 0xffffffffffffffff),uVar2 & (uVar7 ^ 0xffffffffffffffff),lVar3);
    (**(code **)(lVar8 + 0x38))(uVar1 & (uVar7 ^ 0xffffffffffffffff),0,1,lVar3);
    return param_1;
  }
  sVar6 = *(size_t *)(lVar8 + 0x40);
  if (*(int *)(lVar8 + 0x54) == 0) {
    sVar6 = sVar6 + 1;
  }
  _memcpy((void *)(uVar1 & (uVar7 ^ 0xffffffffffffffff)),
          (void *)(uVar2 & (uVar7 ^ 0xffffffffffffffff)),sVar6);
  return param_1;
}



/* Address: 0x10070038c | FUN_10070038c */

int FUN_10070038c(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  lVar5 = *(long *)(lVar4 + -8);
  iVar3 = *(int *)(lVar5 + 0x54);
  uVar2 = 0;
  if (iVar3 != 0) {
    uVar2 = iVar3 - 1;
  }
  uVar1 = uVar2;
  if (uVar2 < 0x80000000) {
    uVar1 = 0x7fffffff;
  }
  lVar7 = *(long *)(lVar5 + 0x40);
  if (iVar3 == 0) {
    lVar7 = lVar7 + 1;
  }
  if (param_2 == 0) {
    return 0;
  }
  uVar8 = (ulong)*(byte *)(lVar5 + 0x50);
  if (param_2 < uVar1 || param_2 - uVar1 == 0) goto LAB_100700470;
  lVar7 = lVar7 + (uVar8 + 0x30 & (uVar8 ^ 0xffffffffffffffff));
  uVar9 = (uint)lVar7;
  uVar6 = uVar9 << 3;
  if (uVar9 < 4) {
    uVar10 = (param_2 - uVar1) + ~(-1 << (ulong)(uVar6 & 0x1f)) >> (ulong)(uVar6 & 0x1f);
    if (uVar10 < 0xff) {
      if (uVar10 == 0) goto LAB_100700470;
      goto LAB_100700430;
    }
    if (uVar10 < 0xffff) {
      uVar10 = (uint)*(ushort *)((long)param_1 + lVar7);
    }
    else {
      uVar10 = *(uint *)((long)param_1 + lVar7);
    }
  }
  else {
LAB_100700430:
    uVar10 = (uint)*(byte *)((long)param_1 + lVar7);
  }
  if (uVar10 != 0) {
    uVar2 = 0;
    if (uVar9 < 4) {
      uVar2 = uVar10 - 1 << (ulong)(uVar6 & 0x1f);
    }
    if (uVar9 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = 4;
      if (uVar9 < 4) {
        uVar6 = uVar9;
      }
      if ((int)uVar6 < 3) {
        if (uVar6 == 1) {
          uVar6 = (uint)(byte)*param_1;
        }
        else {
          uVar6 = (uint)(ushort)*param_1;
        }
      }
      else if (uVar6 == 3) {
        uVar6 = (uint)(uint3)*param_1;
      }
      else {
        uVar6 = *param_1;
      }
    }
    return uVar1 + (uVar6 | uVar2) + 1;
  }
LAB_100700470:
  if ((int)uVar2 < 0) {
    uVar8 = (ulong)((long)param_1 + uVar8 + 0x30) & ~uVar8;
    (**(code **)(lVar5 + 0x30))(uVar8,iVar3,lVar4);
    iVar3 = 0;
    if ((int)uVar8 != 0) {
      iVar3 = (int)uVar8 + -1;
    }
  }
  else {
    uVar8 = *(ulong *)(param_1 + 6);
    if (0xfffffffe < uVar8) {
      uVar8 = 0xffffffff;
    }
    iVar3 = (int)uVar8 + 1;
  }
  return iVar3;
}



/* Address: 0x100700518 | FUN_100700518 */

void FUN_100700518(ulong *param_1,uint param_2,uint param_3,long param_4)

{
  size_t sVar1;
  uint uVar2;
  uint uVar3;
  undefined2 uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  size_t sVar10;
  byte bVar11;
  uint *puVar12;
  int iVar13;
  byte bVar14;
  
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 0x18),*(undefined8 *)(param_4 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  lVar7 = *(long *)(lVar5 + -8);
  iVar13 = *(int *)(lVar7 + 0x54);
  uVar2 = 0;
  if (iVar13 != 0) {
    uVar2 = iVar13 - 1;
  }
  uVar8 = uVar2;
  if (uVar2 < 0x80000000) {
    uVar8 = 0x7fffffff;
  }
  uVar9 = (ulong)*(byte *)(lVar7 + 0x50);
  sVar10 = *(size_t *)(lVar7 + 0x40);
  if (iVar13 == 0) {
    sVar10 = sVar10 + 1;
  }
  sVar1 = (uVar9 + 0x30 & (uVar9 ^ 0xffffffffffffffff)) + sVar10;
  uVar6 = (uint)sVar1;
  bVar14 = 0;
  if (uVar8 <= param_3 && param_3 - uVar8 != 0) {
    uVar3 = (param_3 - uVar8) + ~(-1 << (ulong)(uVar6 << 3 & 0x1f)) >> (ulong)(uVar6 << 3 & 0x1f);
    bVar11 = 2;
    if (0xfffe < uVar3) {
      bVar11 = 4;
    }
    if (uVar3 < 0xff) {
      bVar11 = uVar3 != 0;
    }
    bVar14 = 1;
    if (uVar6 < 4) {
      bVar14 = bVar11;
    }
  }
  if (uVar8 < param_2) {
    param_2 = param_2 + ~uVar8;
    if (uVar6 < 4) {
      iVar13 = (param_2 >> (ulong)(uVar6 << 3 & 0x1f)) + 1;
      if (uVar6 != 0) {
        uVar2 = param_2 & (-1 << (ulong)(uVar6 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar1);
        uVar4 = (undefined2)uVar2;
        if (uVar6 == 3) {
          *(undefined2 *)param_1 = uVar4;
          *(char *)((long)param_1 + 2) = (char)(uVar2 >> 0x10);
        }
        else if (uVar6 == 2) {
          *(undefined2 *)param_1 = uVar4;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      _bzero(param_1,sVar1);
      *(uint *)param_1 = param_2;
      iVar13 = 1;
    }
    if (bVar14 < 2) {
      if (bVar14 != 0) {
        *(char *)((long)param_1 + sVar1) = (char)iVar13;
      }
    }
    else if (bVar14 == 2) {
      *(short *)((long)param_1 + sVar1) = (short)iVar13;
    }
    else {
      *(int *)((long)param_1 + sVar1) = iVar13;
    }
  }
  else {
    if (bVar14 < 2) {
      if (bVar14 != 0) {
        *(undefined1 *)((long)param_1 + sVar1) = 0;
      }
    }
    else if (bVar14 == 2) {
      *(undefined2 *)((long)param_1 + sVar1) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar1) = 0;
    }
    if (param_2 != 0) {
      if ((int)uVar2 < 0) {
        puVar12 = (uint *)((long)param_1 + uVar9 + 0x30 & ~uVar9);
        if (param_2 <= uVar2) {
                    /* WARNING: Could not recover jumptable at 0x000100700748. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar7 + 0x38))(puVar12,param_2 + 1,iVar13,lVar5);
          return;
        }
        uVar6 = (uint)sVar10;
        uVar8 = 0xffffffff;
        if (uVar6 < 4) {
          uVar8 = ~(-1 << (ulong)((uVar6 & 3) << 3));
        }
        if (uVar6 != 0) {
          uVar8 = uVar8 & (uVar2 - param_2 ^ 0xffffffff);
          uVar2 = 4;
          if (uVar6 < 4) {
            uVar2 = uVar6;
          }
          _bzero(puVar12,sVar10);
          if ((int)uVar2 < 3) {
            if (uVar2 == 1) {
              *(char *)puVar12 = (char)uVar8;
            }
            else {
              *(short *)puVar12 = (short)uVar8;
            }
          }
          else if (uVar2 == 3) {
            *(short *)puVar12 = (short)uVar8;
            *(char *)((long)puVar12 + 2) = (char)(uVar8 >> 0x10);
          }
          else {
            *puVar12 = uVar8;
          }
        }
      }
      else if ((int)param_2 < 0) {
        param_1[5] = 0;
        param_1[4] = 0;
        param_1[3] = 0;
        param_1[2] = 0;
        param_1[1] = 0;
        *param_1 = (ulong)(param_2 & 0x7fffffff);
      }
      else {
        param_1[3] = (ulong)(param_2 - 1);
      }
    }
  }
  return;
}



/* Address: 0x1007007c8 | FUN_1007007c8 */

void FUN_1007007c8(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1006ff1b8(param_1,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1007007e4 | FUN_1007007e4 */

void FUN_1007007e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long unaff_x22;
  
  piVar3 = *(int **)(param_6 + 0x18);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)thunk_FUN_1005c804c;
                    /* WARNING: Could not recover jumptable at 0x0001007008a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))
            (param_1,param_2,param_3,0,0,1,param_5,param_7,param_8,param_4,param_6);
  return;
}



/* Address: 0x1007008a8 | FUN_1007008a8 */

void FUN_1007008a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long unaff_x22;
  
  piVar3 = *(int **)(param_6 + 0x20);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1005c804c;
                    /* WARNING: Could not recover jumptable at 0x000100700968. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))
            (param_1,param_2,param_3,0,0,1,param_5,param_7,param_8,param_4,param_6);
  return;
}



/* Address: 0x10070096c | FUN_10070096c */

void FUN_10070096c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9)

{
  int iVar1;
  Optional OVar2;
  undefined7 extraout_var;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  int *piVar6;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xb0) = param_8;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_9;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_6;
  *(long *)(unaff_x22 + 0xa8) = param_7;
  *(undefined8 *)(unaff_x22 + 0x98) = param_5;
  *(undefined8 *)(unaff_x22 + 0x58) = param_1;
  OVar2 = Swift::Optional::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0xc0) = CONCAT71(extraout_var,OVar2.value);
  lVar5 = *(long *)(CONCAT71(extraout_var,OVar2.value) + -8);
  *(long *)(unaff_x22 + 200) = lVar5;
  uVar3 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xd0) = uVar3;
  piVar6 = *(int **)(param_7 + 0x28);
  iVar1 = *piVar6;
  plVar4 = (long *)(ulong)(uint)piVar6[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xd8) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_100700a74;
                    /* WARNING: Could not recover jumptable at 0x000100700a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))
            (uVar3,param_2,param_3,param_4,param_6,param_8,param_9,param_5);
  return;
}



/* Address: 0x100700a74 | FUN_100700a74 */

void FUN_100700a74(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xe0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xd8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100700ad8;
  }
  else {
    pcVar1 = FUN_100700be0;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100700ad8 | FUN_100700ad8 */

void FUN_100700ad8(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  
  lVar1 = *(long *)(unaff_x22 + 200);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xa0);
  *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(unaff_x22 + 0x98);
  *(undefined8 *)(unaff_x22 + 0x78) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x90) = *(undefined8 *)(unaff_x22 + 0xb8);
  *(undefined8 *)(unaff_x22 + 0x88) = *(undefined8 *)(unaff_x22 + 0xb0);
  *(undefined8 *)(unaff_x22 + 0x80) = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xc0);
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0xa0);
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x98);
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0xb0);
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0xa8);
  *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0xb8);
  *(code **)(unaff_x22 + 0x48) = FUN_100700c1c;
  *(long *)(unaff_x22 + 0x50) = unaff_x22 + 0x60;
  puVar4 = &DAT_100fde9c0;
  FUN_1000f8b08(&DAT_100fde9c0,&DAT_100c737a8);
  uVar5 = 0;
  _swift_getTupleTypeMetadata2(0,uVar7,puVar4,"object ttl ",0);
  FUN_1001b8460(uVar6,FUN_100700c48,unaff_x22 + 0x10,uVar3,
                PTR___type_metadata_for_Swift_Never_100eadc38,uVar5,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  (**(code **)(lVar1 + 8))(uVar2,uVar3);
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000100700bdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100700be0 | FUN_100700be0 */

void FUN_100700be0(void)

{
  long unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xd0));
                    /* WARNING: Could not recover jumptable at 0x000100700c18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100700c1c | FUN_100700c1c */

undefined8 FUN_100700c1c(void)

{
  long unaff_x20;
  
  (**(code **)(*(long *)(*(long *)(unaff_x20 + 0x18) + -8) + 0x10))();
  return 0;
}



/* Address: 0x100700c48 | FUN_100700c48 */

void FUN_100700c48(long param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
  pcVar2 = *(code **)(unaff_x20 + 0x38);
  puVar3 = &DAT_100fde9c0;
  FUN_1000f8b08(&DAT_100fde9c0,&DAT_100c737a8);
  lVar4 = 0;
  _swift_getTupleTypeMetadata2(0,uVar6,puVar3,"object ttl ",0);
  uVar5 = SUB81(puVar3,0);
  plVar1 = (long *)(param_1 + *(int *)(lVar4 + 0x30));
  (*pcVar2)();
  *plVar1 = param_1;
  plVar1[1] = param_2;
  *(undefined1 *)(plVar1 + 2) = uVar5;
  return;
}



/* Address: 0x100700cd4 | FUN_100700cd4 */

void FUN_100700cd4(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  plVar1 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x28) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100700d2c;
  FUN_1009c6408();
  return;
}



/* Address: 0x100700d2c | FUN_100700d2c */

void FUN_100700d2c(void)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x22;
  long lVar5;
  
  lVar4 = *unaff_x22;
  lVar5 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0x28));
  if (unaff_x20 != 0) {
    _swift_errorRelease();
  }
  piVar3 = *(int **)(*(long *)(lVar4 + 0x18) + 0x10);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  _swift_task_alloc();
  *(long **)(lVar4 + 0x30) = plVar2;
  *plVar2 = lVar5;
  plVar2[1] = (long)FUN_1006a2030;
                    /* WARNING: Could not recover jumptable at 0x000100700db8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))
            (*(undefined8 *)(lVar4 + 0x10),*(undefined8 *)(lVar4 + 0x18));
  return;
}



/* Address: 0x100700dbc | FUN_100700dbc */

undefined1  [16] FUN_100700dbc(void)

{
  return ZEXT816(0x100efb418);
}



/* Address: 0x100700dcc | FUN_100700dcc */

undefined1  [16] FUN_100700dcc(void)

{
  return ZEXT816(0x100efb4b0);
}



/* Address: 0x100700ddc | thunk_FUN_100700de0 */

void thunk_FUN_100700de0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fdeb58 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c73a38;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c73a38,&DAT_100efb4b0);
  DAT_100fdeb58 = pTVar1;
  return;
}



/* Address: 0x100700de0 | FUN_100700de0 */

void FUN_100700de0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fdeb58 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c73a38;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c73a38,&DAT_100efb4b0);
  DAT_100fdeb58 = pTVar1;
  return;
}



/* Address: 0x100700e20 | FUN_100700e20 */

void FUN_100700e20(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100700e44 | FUN_100700e44 */

void FUN_100700e44(void)

{
  Identifier IVar1;
  undefined *puVar2;
  ulong uVar3;
  TimeZone TVar4;
  undefined7 extraout_var;
  Date DVar5;
  long lVar6;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = unaff_x20;
  puVar2 = &DAT_100fded20;
  FUN_1000f7830(&DAT_100fded20,&DAT_100c73d00);
  uVar3 = *(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x30) = uVar3;
  TVar4 = Foundation::TimeZone::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x38) = TVar4.unknown;
  lVar6 = *(long *)(TVar4.unknown + -8);
  *(long *)(unaff_x22 + 0x40) = lVar6;
  uVar3 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x48) = uVar3;
  IVar1 = Foundation::Calendar::Identifier::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x50) = CONCAT71(extraout_var,IVar1.value);
  lVar6 = *(long *)(CONCAT71(extraout_var,IVar1.value) + -8);
  *(long *)(unaff_x22 + 0x58) = lVar6;
  uVar3 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x60) = uVar3;
  lVar6 = 0;
  FUN_100701be0();
  *(long *)(unaff_x22 + 0x68) = lVar6;
  uVar3 = *(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x70) = uVar3;
  DVar5 = Foundation::Date::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x78) = DVar5.unknown;
  lVar6 = *(long *)(DVar5.unknown + -8);
  *(long *)(unaff_x22 + 0x80) = lVar6;
  uVar3 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x88) = uVar3;
  _swift_task_switch(FUN_100700f4c,0,0);
  return;
}



/* Address: 0x100700f4c | FUN_100700f4c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001007010e8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100700f4c(void)

{
  undefined8 *puVar1;
  int iVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long unaff_x22;
  
  lVar13 = *(long *)(unaff_x22 + 0x28);
  puVar3 = &DAT_100fded28;
  FUN_1000f7830(&DAT_100fded28,&DAT_100c73b20);
  uVar4 = *(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x90) = uVar4;
  puVar3 = &DAT_100fded30;
  FUN_1000f7830(&DAT_100fded30,&DAT_100c73b28);
  uVar5 = *(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  iVar2 = *(int *)(puVar3 + 0x24);
  ((undefined8 *)(uVar5 + (long)iVar2))[1] = 0;
  *(undefined8 *)(uVar5 + (long)iVar2) = 1000000000000000000;
  puVar1 = (undefined8 *)(uVar5 + (long)*(int *)(puVar3 + 0x28));
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  (extension_Swift)::Swift::Clock::_get_suspending();
  puVar3 = &DAT_100fded38;
  FUN_1000f7830(&DAT_100fded38,&DAT_100c73b30);
  lVar14 = *(long *)(puVar3 + -8);
  uVar6 = *(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar6);
  puVar7 = &DAT_100fded40;
  FUN_1000f7830(&DAT_100fded40,&DAT_100c73b38);
  uVar8 = *(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar8);
  FUN_1000f8cac(uVar5,uVar8,&DAT_100fded30,&DAT_100c73b28);
  puVar9 = &DAT_100fded48;
  FUN_1000f7830(&DAT_100fded48,&DAT_100c73b48);
  *(undefined **)(unaff_x22 + 0x98) = puVar9;
  puVar10 = &DAT_100fded50;
  FUN_100134584(&DAT_100fded50,&DAT_100fded40,&DAT_100c73b38,
                &TargetProtocolConformanceDescriptor_100c8c0e0);
  Swift::AsyncMapSequence::_init(uVar6,puVar10,&DAT_100c73b40,0,puVar7,puVar9,puVar10);
  _swift_task_dealloc(uVar8);
  puVar7 = &DAT_100fded58;
  FUN_1000f7830(&DAT_100fded58,&DAT_100c73b50);
  lVar15 = *(long *)(puVar7 + -8);
  uVar8 = *(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar8);
  puVar10 = &DAT_100fded60;
  FUN_1000f7830(&DAT_100fded60,&DAT_100c73b60);
  puVar11 = &DAT_100fded68;
  FUN_100134584(&DAT_100fded68,&DAT_100fded60,&DAT_100c73b60,
                &TargetProtocolConformanceDescriptor_100c8c0e0);
  Swift::AsyncMapSequence::_init(uVar8,puVar11,&DAT_100c73b58,0,puVar10,puVar9,puVar11);
  FUN_1000fb4c4(uVar5,&DAT_100fded30,&DAT_100c73b28);
  puVar11 = PTR_Swift__Swift__AsyncMapSequence<undefined,undefined>_>Swift__AsyncSequence_100eaef68;
  puVar9 = &DAT_100fded70;
  FUN_100134584(&DAT_100fded70,&DAT_100fded38,&DAT_100c73b30,
                PTR_Swift__Swift__AsyncMapSequence<undefined,undefined>_>Swift__AsyncSequence_100eaef68
               );
  puVar10 = &DAT_100fded78;
  FUN_100134584(&DAT_100fded78,&DAT_100fded58,&DAT_100c73b50,puVar11);
  FUN_10079f7a0(uVar4,uVar6,uVar8,puVar3,puVar7,puVar9,puVar10);
  (**(code **)(lVar15 + 8))(uVar8,puVar7);
  (**(code **)(lVar14 + 8))(uVar6,puVar3);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar5);
  puVar3 = &DAT_100fded80;
  FUN_1000f7830(&DAT_100fded80,&DAT_100c73b68);
  FUN_10079f894();
  *(undefined **)(unaff_x22 + 0xa0) = puVar3;
  *(undefined **)(unaff_x22 + 0x20) = puVar3;
  puVar3 = &DAT_100fded88;
  FUN_1000f7830(&DAT_100fded88,&DAT_100c73b70);
  uVar4 = *(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xa8) = uVar4;
  *(undefined8 *)(unaff_x22 + 0xb0) = *(undefined8 *)(lVar13 + 0x10);
  *(undefined4 *)(unaff_x22 + 0xd0) =
       *(undefined4 *)
        PTR___enum_case_for_Foundation_Calendar_Identifier_gregorian_Foundation_Calendar_Identifier_Type___>_Foundation_Calendar_Identifier_100ea75b8
  ;
  puVar3 = &DAT_100fded90;
  FUN_1000f7830(&DAT_100fded90,&DAT_100c73b78);
  lVar13 = *(long *)(*(long *)(puVar3 + -8) + 0x40);
  *(long *)(unaff_x22 + 0xb8) = lVar13;
  uVar4 = lVar13 + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xc0) = uVar4;
  plVar12 = (long *)&DAT_00000030;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 200) = plVar12;
  puVar3 = &DAT_100fded98;
  FUN_1000f7830(&DAT_100fded98,&DAT_100c73b80);
  *plVar12 = unaff_x22;
  plVar12[1] = (long)FUN_10070134c;
  FUN_10079f72c(uVar4,puVar3);
  return;
}



/* Address: 0x10070134c | FUN_10070134c */

void FUN_10070134c(void)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 200));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1007013b4;
  }
  else {
    _swift_errorRelease();
    pcVar1 = FUN_1007018bc;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1007013b4 | FUN_1007013b4 */

void FUN_1007013b4(void)

{
  Calendar *this;
  undefined8 uVar1;
  TimeZone TVar2;
  undefined4 uVar3;
  int iVar4;
  ulong uVar5;
  undefined *puVar6;
  Instant IVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  code *pcVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long unaff_x22;
  Date DVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  bool bVar22;
  undefined8 uVar23;
  
  uVar16 = *(undefined8 *)(unaff_x22 + 0xc0);
  lVar15 = *(long *)(unaff_x22 + 0x98);
  uVar5 = *(long *)(unaff_x22 + 0xb8) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  FUN_10011532c(uVar16,uVar5,&DAT_100fded90,&DAT_100c73b78);
  uVar10 = uVar5;
  (**(code **)(*(long *)(lVar15 + -8) + 0x30))(uVar5,1,lVar15);
  if ((int)uVar10 == 1) {
LAB_100701468:
    uVar16 = *(undefined8 *)(unaff_x22 + 0xa8);
    IVar7 = Swift::SuspendingClock::Instant::typeMetadataAccessor();
    (**(code **)(*(long *)(IVar7.unknown + -8) + 0x38))(uVar16,1,1,IVar7.unknown);
  }
  else {
    puVar6 = &DAT_100fdeda8;
    FUN_1000f7830(&DAT_100fdeda8,&DAT_100c73b88);
    lVar15 = *(long *)(puVar6 + -8);
    uVar10 = uVar5;
    (**(code **)(lVar15 + 0x30))(uVar5,1,puVar6);
    if ((int)uVar10 == 1) goto LAB_100701468;
    uVar10 = *(long *)(lVar15 + 0x40) + 0xf;
    uVar12 = uVar10 & 0xfffffffffffffff0;
    _swift_task_alloc(uVar12);
    FUN_10011532c(uVar5,uVar12,&DAT_100fdeda8,&DAT_100c73b88);
    uVar10 = uVar10 & 0xfffffffffffffff0;
    _swift_task_alloc();
    FUN_10011532c(uVar12,uVar10,&DAT_100fdeda8,&DAT_100c73b88);
    IVar7 = Swift::SuspendingClock::Instant::typeMetadataAccessor();
    lVar15 = *(long *)(IVar7.unknown + -8);
    uVar13 = uVar10;
    (**(code **)(lVar15 + 0x30))(uVar10,1,IVar7.unknown);
    uVar16 = *(undefined8 *)(unaff_x22 + 0xa8);
    if ((int)uVar13 == 1) {
      bVar22 = true;
      (**(code **)(lVar15 + 0x38))(uVar16,1,1,IVar7.unknown);
      _swift_task_dealloc(uVar10);
      _swift_task_dealloc(uVar12);
      goto LAB_100701498;
    }
    (**(code **)(lVar15 + 0x20))(uVar16,uVar10,IVar7.unknown);
    (**(code **)(lVar15 + 0x38))(uVar16,0,1,IVar7.unknown);
    _swift_task_dealloc(uVar10);
    _swift_task_dealloc(uVar12);
  }
  bVar22 = false;
LAB_100701498:
  uVar16 = *(undefined8 *)(unaff_x22 + 0xc0);
  DVar18.unknown = *(undefined **)(unaff_x22 + 0xa8);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar16);
  Swift::SuspendingClock::Instant::typeMetadataAccessor();
  lVar15 = *(long *)(IVar7.unknown + -8);
  pcVar14 = *(code **)(lVar15 + 0x30);
  (*pcVar14)(DVar18.unknown,1,IVar7.unknown);
  iVar4 = (int)DVar18.unknown;
  while( true ) {
    if (iVar4 == 1) {
      uVar1 = *(undefined8 *)(unaff_x22 + 0xa8);
      uVar16 = *(undefined8 *)(unaff_x22 + 0x88);
      uVar19 = *(undefined8 *)(unaff_x22 + 0x90);
      uVar17 = *(undefined8 *)(unaff_x22 + 0x70);
      uVar20 = *(undefined8 *)(unaff_x22 + 0x60);
      uVar21 = *(undefined8 *)(unaff_x22 + 0x48);
      uVar23 = *(undefined8 *)(unaff_x22 + 0x30);
      _swift_release(*(undefined8 *)(unaff_x22 + 0xa0));
      FUN_1000fb4c4(uVar19,&DAT_100fded28,&DAT_100c73b20);
      _swift_task_dealloc(uVar1);
      _swift_task_dealloc(uVar19);
      _swift_task_dealloc(uVar16);
      _swift_task_dealloc(uVar17);
      _swift_task_dealloc(uVar20);
      _swift_task_dealloc(uVar21);
      _swift_task_dealloc(uVar23);
                    /* WARNING: Could not recover jumptable at 0x000100701720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
    uVar3 = *(undefined4 *)(unaff_x22 + 0xd0);
    lVar9 = *(long *)(unaff_x22 + 0x58);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x38);
    lVar8 = *(long *)(unaff_x22 + 0x40);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x30);
    Foundation::Date::get_now(DVar18);
    (**(code **)(lVar9 + 0x68))(uVar1,uVar3,uVar17);
    Foundation::Calendar::_init();
    (**(code **)(lVar9 + 8))(uVar1,uVar17);
    Foundation::TimeZone::_init(0);
    (**(code **)(lVar8 + 0x30))(uVar19,1,uVar16);
    if ((int)uVar19 == 1) break;
    uVar16 = *(undefined8 *)(unaff_x22 + 0xa8);
    plVar11 = *(long **)(unaff_x22 + 0xb0);
    lVar9 = *(long *)(unaff_x22 + 0x80);
    lVar8 = *(long *)(unaff_x22 + 0x88);
    this = *(Calendar **)(unaff_x22 + 0x70);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x68);
    TVar2.unknown = *(undefined **)(unaff_x22 + 0x48);
    (**(code **)(*(long *)(unaff_x22 + 0x40) + 0x20))
              (TVar2.unknown,*(undefined8 *)(unaff_x22 + 0x30),*(undefined8 *)(unaff_x22 + 0x38));
    Foundation::Calendar::set_timeZone(this,TVar2);
    puVar6 = &DAT_100fdeda0;
    FUN_1003b6598(&DAT_100fdeda0,0xff,FUN_100701be0,&TargetProtocolConformanceDescriptor_100c73b90);
    Foundation::Date::_formatted(unaff_x22 + 0x10,this,uVar19,puVar6);
    FUN_100701b78(this);
    (**(code **)(lVar9 + 8))(lVar8,uVar1);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x10);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x18);
    FUN_100701910();
    _swift_allocObject();
    *(undefined8 *)(lVar8 + 0x10) = uVar1;
    *(undefined8 *)(lVar8 + 0x18) = uVar19;
    (**(code **)(*plVar11 + 0x88))();
    lVar9 = lVar8;
    _swift_retain(lVar8);
    thunk_FUN_10069b87c();
    _swift_release(lVar8);
    _swift_unknownObjectRelease(lVar9);
    FUN_1000fb4c4(uVar16,&DAT_100fded88,&DAT_100c73b70);
    if (!bVar22) {
      puVar6 = &DAT_100fded90;
      FUN_1000f7830(&DAT_100fded90,&DAT_100c73b78);
      lVar15 = *(long *)(*(long *)(puVar6 + -8) + 0x40);
      *(long *)(unaff_x22 + 0xb8) = lVar15;
      uVar10 = lVar15 + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc();
      *(ulong *)(unaff_x22 + 0xc0) = uVar10;
      plVar11 = (long *)&DAT_00000030;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 200) = plVar11;
      puVar6 = &DAT_100fded98;
      FUN_1000f7830(&DAT_100fded98,&DAT_100c73b80);
      *plVar11 = unaff_x22;
      plVar11[1] = (long)FUN_10070134c;
      FUN_10079f72c(uVar10,puVar6);
      return;
    }
    DVar18.unknown = *(undefined **)(unaff_x22 + 0xa8);
    bVar22 = true;
    (**(code **)(lVar15 + 0x38))(DVar18.unknown,1,1,IVar7.unknown);
    (*pcVar14)(DVar18.unknown,1,IVar7.unknown);
    iVar4 = (int)DVar18.unknown;
  }
                    /* WARNING: Does not return */
  pcVar14 = (code *)SoftwareBreakpoint(1,0x1007018bc);
  (*pcVar14)();
}



/* Address: 0x1007018bc | FUN_1007018bc */

void FUN_1007018bc(void)

{
  long unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xc0));
  return;
}



/* Address: 0x1007018f0 | FUN_1007018f0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1007018f0(void)

{
  return ZEXT816(0x100fdeba0);
}



/* Address: 0x100701910 | FUN_100701910 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100701910(void)

{
  return ZEXT816(0x100fdec40);
}



/* Address: 0x100701930 | FUN_100701930 */

void FUN_100701930(void)

{
  FUN_100134584(&DAT_100fdeca0,&DAT_100fdeca8,&DAT_100c73a98,
                &TargetProtocolConformanceDescriptor_100c6ecd0);
  return;
}



/* Address: 0x100701964 | FUN_100701964 */

void FUN_100701964(void)

{
  FUN_100134584(&DAT_100fdecc8,&DAT_100fdecd0,&DAT_100c73ac0,
                &TargetProtocolConformanceDescriptor_100c6ecec);
  return;
}



/* Address: 0x100701998 | FUN_100701998 */

void FUN_100701998(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fdecf8;
  FUN_1003b6598(&DAT_100fdecf8,param_2,FUN_100701910,&TargetProtocolConformanceDescriptor_100c73aa0)
  ;
  *(undefined **)(param_1 + 8) = puVar1;
  return;
}



/* Address: 0x1007019d4 | FUN_1007019d4 */

void FUN_1007019d4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fded18;
  FUN_1003b6598(&DAT_100fded18,param_2,FUN_100701910,&TargetProtocolConformanceDescriptor_100c73ac8)
  ;
  *(undefined **)(param_1 + 8) = puVar1;
  return;
}



/* Address: 0x100701a10 | FUN_100701a10 */

void FUN_100701a10(void)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0xe0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005c804c;
  FUN_100700e44();
  return;
}



/* Address: 0x100701a60 | FUN_100701a60 */

void FUN_100701a60(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  _swift_task_switch(FUN_100701a78,0,0);
  return;
}



/* Address: 0x100701a78 | FUN_100701a78 */

void FUN_100701a78(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x10);
  puVar2 = &DAT_100fdeda8;
  FUN_1000f8cac(*(undefined8 *)(unaff_x22 + 0x18),uVar1,&DAT_100fdeda8,&DAT_100c73b88);
  FUN_1000f7830(&DAT_100fdeda8,&DAT_100c73b88);
  (**(code **)(*(long *)(puVar2 + -8) + 0x38))(uVar1,0,1,puVar2);
                    /* WARNING: Could not recover jumptable at 0x000100701af8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100701afc | FUN_100701afc */

void FUN_100701afc(undefined8 param_1)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  _swift_task_switch(FUN_100701b14,0,0);
  return;
}



/* Address: 0x100701b14 | FUN_100701b14 */

void FUN_100701b14(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x10);
  puVar1 = &DAT_100fdeda8;
  FUN_1000f7830(&DAT_100fdeda8,&DAT_100c73b88);
  (**(code **)(*(long *)(puVar1 + -8) + 0x38))(uVar2,1,1,puVar1);
                    /* WARNING: Could not recover jumptable at 0x000100701b74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100701b78 | FUN_100701b78 */

undefined8 FUN_100701b78(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_100701be0();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Address: 0x100701bb4 | FUN_100701bb4 */

void FUN_100701bb4(void)

{
  FUN_100003a00(&DAT_100fdedb0,FUN_100701be0,&TargetProtocolConformanceDescriptor_100c73c78);
  return;
}



/* Address: 0x100701be0 | FUN_100701be0 */

void FUN_100701be0(undefined8 param_1)

{
  if (DAT_100fdf6a8 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetStructDescriptor_100cbce20);
  return;
}


