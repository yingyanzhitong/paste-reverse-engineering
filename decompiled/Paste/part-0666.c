/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10070b970 | FUN_10070b970 */

void FUN_10070b970(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c743b8,param_1);
  return;
}



/* Address: 0x10070b980 | FUN_10070b980 */

void FUN_10070b980(long param_1)

{
  FUN_10070b75c();
                    /* WARNING: Could not recover jumptable at 0x00010070b9ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + -8) + 8))();
  return;
}



/* Address: 0x10070b9b0 | FUN_10070b9b0 */

undefined1  [16] FUN_10070b9b0(long param_1)

{
  Optional OVar1;
  ulong uVar2;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  long lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  long local_30;
  long local_28;
  
  uVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lVar3 = CONCAT71(extraout_var,OVar1.value);
  if (uVar2 < 0x40) {
    local_30 = *(long *)(lVar3 + -8) + 0x40;
    uVar2 = 0xff;
    _swift_getAssociatedTypeWitness
              (0xff,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x18),
               PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
               PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
    OVar1 = Swift::Optional::typeMetadataAccessor();
    lVar3 = CONCAT71(extraout_var_00,OVar1.value);
    if (uVar2 < 0x40) {
      local_28 = *(long *)(lVar3 + -8) + 0x40;
      _swift_initStructMetadata(param_1,0,2,&local_30,param_1 + 0x30);
      lVar3 = 0;
      uVar4 = 0;
      goto LAB_10070ba6c;
    }
  }
  uVar4 = 0x3f;
LAB_10070ba6c:
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = lVar3;
  return auVar5;
}



/* Address: 0x10070ba7c | FUN_10070ba7c */

long * FUN_10070ba7c(long *param_1,long *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  size_t sVar12;
  size_t sVar13;
  long lVar14;
  long lVar15;
  
  puVar6 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar5 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8;
  lVar7 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar15 = *(long *)(lVar7 + -8);
  sVar12 = *(size_t *)(lVar15 + 0x40);
  if (*(int *)(lVar15 + 0x54) == 0) {
    sVar12 = sVar12 + 1;
  }
  lVar8 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x18),puVar6,puVar5);
  lVar14 = *(long *)(lVar8 + -8);
  uVar11 = (ulong)*(uint *)(lVar14 + 0x50) & 0xff;
  uVar1 = sVar12 + uVar11;
  sVar13 = *(size_t *)(lVar14 + 0x40);
  if (*(int *)(lVar14 + 0x54) == 0) {
    sVar13 = sVar13 + 1;
  }
  uVar4 = *(uint *)(lVar15 + 0x50) | *(uint *)(lVar14 + 0x50);
  uVar3 = uVar4 & 0xff;
  if ((uVar3 < 8 && (uVar4 & 0x100000) == 0) &&
      (uVar1 & (uVar11 ^ 0xffffffffffffffff)) + sVar13 < 0x19) {
    uVar11 = ~uVar11;
    plVar9 = param_2;
    (**(code **)(lVar15 + 0x30))(param_2,1,lVar7);
    if ((int)plVar9 == 0) {
      (**(code **)(lVar15 + 0x10))(param_1,param_2,lVar7);
      (**(code **)(lVar15 + 0x38))(param_1,0,1,lVar7);
    }
    else {
      _memcpy(param_1,param_2,sVar12);
    }
    uVar2 = uVar1 + (long)param_1;
    uVar1 = uVar1 + (long)param_2;
    uVar10 = uVar1 & uVar11;
    (**(code **)(lVar14 + 0x30))(uVar10,1,lVar8);
    if ((int)uVar10 == 0) {
      (**(code **)(lVar14 + 0x10))(uVar2 & uVar11,uVar1 & uVar11,lVar8);
      (**(code **)(lVar14 + 0x38))(uVar2 & uVar11,0,1,lVar8);
    }
    else {
      _memcpy((void *)(uVar2 & uVar11),(void *)(uVar1 & uVar11),sVar13);
    }
  }
  else {
    lVar7 = *param_2;
    *param_1 = lVar7;
    param_1 = (long *)(lVar7 + ((ulong)uVar3 + 0x10 & ((ulong)uVar3 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x10070bc3c | FUN_10070bc3c */

void FUN_10070bc3c(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar4 = *(long *)(lVar2 + -8);
  lVar6 = param_1;
  (**(code **)(lVar4 + 0x30))(param_1,1,lVar2);
  if ((int)lVar6 == 0) {
    (**(code **)(lVar4 + 8))(param_1,lVar2);
  }
  iVar1 = *(int *)(lVar4 + 0x54);
  lVar6 = *(long *)(lVar4 + 0x40);
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x18),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar4 = *(long *)(lVar2 + -8);
  uVar5 = (ulong)*(byte *)(lVar4 + 0x50);
  lVar6 = lVar6 + param_1;
  if (iVar1 == 0) {
    lVar6 = lVar6 + 1;
  }
  uVar3 = lVar6 + uVar5 & (uVar5 ^ 0xffffffffffffffff);
  (**(code **)(lVar4 + 0x30))(uVar3,1,lVar2);
  if ((int)uVar3 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010070bd34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))(lVar6 + uVar5 & (uVar5 ^ 0xffffffffffffffff),lVar2);
  return;
}



/* Address: 0x10070bd38 | FUN_10070bd38 */

void * FUN_10070bd38(void *param_1,void *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  size_t sVar3;
  long lVar4;
  void *pvVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  size_t sVar10;
  
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar9 = *(long *)(lVar4 + -8);
  pvVar5 = param_2;
  (**(code **)(lVar9 + 0x30))(param_2,1,lVar4);
  if ((int)pvVar5 == 0) {
    (**(code **)(lVar9 + 0x10))(param_1,param_2,lVar4);
    (**(code **)(lVar9 + 0x38))(param_1,0,1,lVar4);
    iVar7 = *(int *)(lVar9 + 0x54);
    sVar10 = *(size_t *)(lVar9 + 0x40);
  }
  else {
    iVar7 = *(int *)(lVar9 + 0x54);
    sVar10 = *(size_t *)(lVar9 + 0x40);
    sVar3 = sVar10;
    if (iVar7 == 0) {
      sVar3 = sVar10 + 1;
    }
    _memcpy(param_1,param_2,sVar3);
  }
  if (iVar7 == 0) {
    sVar10 = sVar10 + 1;
  }
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x18),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar9 = *(long *)(lVar4 + -8);
  uVar8 = (ulong)*(byte *)(lVar9 + 0x50);
  uVar1 = sVar10 + uVar8 + (long)param_1;
  uVar2 = sVar10 + uVar8 + (long)param_2;
  uVar6 = uVar2 & (uVar8 ^ 0xffffffffffffffff);
  (**(code **)(lVar9 + 0x30))(uVar6,1,lVar4);
  if ((int)uVar6 == 0) {
    (**(code **)(lVar9 + 0x10))
              (uVar1 & (uVar8 ^ 0xffffffffffffffff),uVar2 & (uVar8 ^ 0xffffffffffffffff),lVar4);
    (**(code **)(lVar9 + 0x38))(uVar1 & (uVar8 ^ 0xffffffffffffffff),0,1,lVar4);
  }
  else {
    sVar10 = *(size_t *)(lVar9 + 0x40);
    if (*(int *)(lVar9 + 0x54) == 0) {
      sVar10 = sVar10 + 1;
    }
    _memcpy((void *)(uVar1 & (uVar8 ^ 0xffffffffffffffff)),
            (void *)(uVar2 & (uVar8 ^ 0xffffffffffffffff)),sVar10);
  }
  return param_1;
}



/* Address: 0x10070bea8 | FUN_10070bea8 */

void * FUN_10070bea8(void *param_1,void *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  void *pvVar4;
  void *pvVar5;
  ulong uVar6;
  ulong uVar7;
  size_t sVar8;
  ulong uVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar10 = *(long *)(lVar3 + -8);
  pcVar11 = *(code **)(lVar10 + 0x30);
  pvVar4 = param_1;
  (*pcVar11)(param_1,1,lVar3);
  pvVar5 = param_2;
  (*pcVar11)(param_2,1,lVar3);
  if ((int)pvVar4 == 0) {
    if ((int)pvVar5 == 0) {
      (**(code **)(lVar10 + 0x18))(param_1,param_2,lVar3);
      goto LAB_10070bf84;
    }
    (**(code **)(lVar10 + 8))(param_1,lVar3);
  }
  else if ((int)pvVar5 == 0) {
    (**(code **)(lVar10 + 0x10))(param_1,param_2,lVar3);
    (**(code **)(lVar10 + 0x38))(param_1,0,1,lVar3);
    goto LAB_10070bf84;
  }
  sVar8 = *(size_t *)(lVar10 + 0x40);
  if (*(int *)(lVar10 + 0x54) == 0) {
    sVar8 = sVar8 + 1;
  }
  _memcpy(param_1,param_2,sVar8);
LAB_10070bf84:
  lVar3 = *(long *)(lVar10 + 0x40);
  if (*(int *)(lVar10 + 0x54) == 0) {
    lVar3 = lVar3 + 1;
  }
  lVar10 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x18),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar12 = *(long *)(lVar10 + -8);
  uVar9 = (ulong)*(byte *)(lVar12 + 0x50);
  uVar1 = lVar3 + uVar9 + (long)param_1;
  uVar2 = lVar3 + uVar9 + (long)param_2;
  pcVar11 = *(code **)(lVar12 + 0x30);
  uVar6 = uVar1 & (uVar9 ^ 0xffffffffffffffff);
  (*pcVar11)(uVar6,1,lVar10);
  uVar7 = uVar2 & (uVar9 ^ 0xffffffffffffffff);
  (*pcVar11)(uVar7,1,lVar10);
  if ((int)uVar6 == 0) {
    if ((int)uVar7 == 0) {
      (**(code **)(lVar12 + 0x18))
                (uVar1 & (uVar9 ^ 0xffffffffffffffff),uVar2 & (uVar9 ^ 0xffffffffffffffff),lVar10);
      return param_1;
    }
    (**(code **)(lVar12 + 8))(uVar1 & (uVar9 ^ 0xffffffffffffffff),lVar10);
  }
  else if ((int)uVar7 == 0) {
    (**(code **)(lVar12 + 0x10))
              (uVar1 & (uVar9 ^ 0xffffffffffffffff),uVar2 & (uVar9 ^ 0xffffffffffffffff),lVar10);
    (**(code **)(lVar12 + 0x38))(uVar1 & (uVar9 ^ 0xffffffffffffffff),0,1,lVar10);
    return param_1;
  }
  sVar8 = *(size_t *)(lVar12 + 0x40);
  if (*(int *)(lVar12 + 0x54) == 0) {
    sVar8 = sVar8 + 1;
  }
  _memcpy((void *)(uVar1 & (uVar9 ^ 0xffffffffffffffff)),
          (void *)(uVar2 & (uVar9 ^ 0xffffffffffffffff)),sVar8);
  return param_1;
}



/* Address: 0x10070c0a8 | FUN_10070c0a8 */

void * FUN_10070c0a8(void *param_1,void *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  size_t sVar3;
  long lVar4;
  void *pvVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  size_t sVar10;
  
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar9 = *(long *)(lVar4 + -8);
  pvVar5 = param_2;
  (**(code **)(lVar9 + 0x30))(param_2,1,lVar4);
  if ((int)pvVar5 == 0) {
    (**(code **)(lVar9 + 0x20))(param_1,param_2,lVar4);
    (**(code **)(lVar9 + 0x38))(param_1,0,1,lVar4);
    iVar7 = *(int *)(lVar9 + 0x54);
    sVar10 = *(size_t *)(lVar9 + 0x40);
  }
  else {
    iVar7 = *(int *)(lVar9 + 0x54);
    sVar10 = *(size_t *)(lVar9 + 0x40);
    sVar3 = sVar10;
    if (iVar7 == 0) {
      sVar3 = sVar10 + 1;
    }
    _memcpy(param_1,param_2,sVar3);
  }
  if (iVar7 == 0) {
    sVar10 = sVar10 + 1;
  }
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x18),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar9 = *(long *)(lVar4 + -8);
  uVar8 = (ulong)*(byte *)(lVar9 + 0x50);
  uVar1 = sVar10 + uVar8 + (long)param_1;
  uVar2 = sVar10 + uVar8 + (long)param_2;
  uVar6 = uVar2 & (uVar8 ^ 0xffffffffffffffff);
  (**(code **)(lVar9 + 0x30))(uVar6,1,lVar4);
  if ((int)uVar6 == 0) {
    (**(code **)(lVar9 + 0x20))
              (uVar1 & (uVar8 ^ 0xffffffffffffffff),uVar2 & (uVar8 ^ 0xffffffffffffffff),lVar4);
    (**(code **)(lVar9 + 0x38))(uVar1 & (uVar8 ^ 0xffffffffffffffff),0,1,lVar4);
  }
  else {
    sVar10 = *(size_t *)(lVar9 + 0x40);
    if (*(int *)(lVar9 + 0x54) == 0) {
      sVar10 = sVar10 + 1;
    }
    _memcpy((void *)(uVar1 & (uVar8 ^ 0xffffffffffffffff)),
            (void *)(uVar2 & (uVar8 ^ 0xffffffffffffffff)),sVar10);
  }
  return param_1;
}



/* Address: 0x10070c218 | FUN_10070c218 */

void * FUN_10070c218(void *param_1,void *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  void *pvVar4;
  void *pvVar5;
  ulong uVar6;
  ulong uVar7;
  size_t sVar8;
  ulong uVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar10 = *(long *)(lVar3 + -8);
  pcVar11 = *(code **)(lVar10 + 0x30);
  pvVar4 = param_1;
  (*pcVar11)(param_1,1,lVar3);
  pvVar5 = param_2;
  (*pcVar11)(param_2,1,lVar3);
  if ((int)pvVar4 == 0) {
    if ((int)pvVar5 == 0) {
      (**(code **)(lVar10 + 0x28))(param_1,param_2,lVar3);
      goto LAB_10070c2f4;
    }
    (**(code **)(lVar10 + 8))(param_1,lVar3);
  }
  else if ((int)pvVar5 == 0) {
    (**(code **)(lVar10 + 0x20))(param_1,param_2,lVar3);
    (**(code **)(lVar10 + 0x38))(param_1,0,1,lVar3);
    goto LAB_10070c2f4;
  }
  sVar8 = *(size_t *)(lVar10 + 0x40);
  if (*(int *)(lVar10 + 0x54) == 0) {
    sVar8 = sVar8 + 1;
  }
  _memcpy(param_1,param_2,sVar8);
LAB_10070c2f4:
  lVar3 = *(long *)(lVar10 + 0x40);
  if (*(int *)(lVar10 + 0x54) == 0) {
    lVar3 = lVar3 + 1;
  }
  lVar10 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x18),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar12 = *(long *)(lVar10 + -8);
  uVar9 = (ulong)*(byte *)(lVar12 + 0x50);
  uVar1 = lVar3 + uVar9 + (long)param_1;
  uVar2 = lVar3 + uVar9 + (long)param_2;
  pcVar11 = *(code **)(lVar12 + 0x30);
  uVar6 = uVar1 & (uVar9 ^ 0xffffffffffffffff);
  (*pcVar11)(uVar6,1,lVar10);
  uVar7 = uVar2 & (uVar9 ^ 0xffffffffffffffff);
  (*pcVar11)(uVar7,1,lVar10);
  if ((int)uVar6 == 0) {
    if ((int)uVar7 == 0) {
      (**(code **)(lVar12 + 0x28))
                (uVar1 & (uVar9 ^ 0xffffffffffffffff),uVar2 & (uVar9 ^ 0xffffffffffffffff),lVar10);
      return param_1;
    }
    (**(code **)(lVar12 + 8))(uVar1 & (uVar9 ^ 0xffffffffffffffff),lVar10);
  }
  else if ((int)uVar7 == 0) {
    (**(code **)(lVar12 + 0x20))
              (uVar1 & (uVar9 ^ 0xffffffffffffffff),uVar2 & (uVar9 ^ 0xffffffffffffffff),lVar10);
    (**(code **)(lVar12 + 0x38))(uVar1 & (uVar9 ^ 0xffffffffffffffff),0,1,lVar10);
    return param_1;
  }
  sVar8 = *(size_t *)(lVar12 + 0x40);
  if (*(int *)(lVar12 + 0x54) == 0) {
    sVar8 = sVar8 + 1;
  }
  _memcpy((void *)(uVar1 & (uVar9 ^ 0xffffffffffffffff)),
          (void *)(uVar2 & (uVar9 ^ 0xffffffffffffffff)),sVar8);
  return param_1;
}



/* Address: 0x10070c418 | FUN_10070c418 */

int FUN_10070c418(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  long lVar17;
  
  puVar5 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar4 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8;
  lVar8 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar17 = *(long *)(lVar8 + -8);
  iVar7 = *(int *)(lVar17 + 0x54);
  uVar2 = 0;
  if (iVar7 != 0) {
    uVar2 = iVar7 - 1;
  }
  lVar9 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x18),puVar5,puVar4);
  lVar10 = *(long *)(lVar9 + -8);
  iVar6 = *(int *)(lVar10 + 0x54);
  uVar11 = 0;
  if (iVar6 != 0) {
    uVar11 = iVar6 - 1;
  }
  uVar1 = uVar11;
  if (uVar11 <= uVar2) {
    uVar1 = uVar2;
  }
  lVar12 = *(long *)(lVar17 + 0x40);
  if (iVar7 == 0) {
    lVar12 = lVar12 + 1;
  }
  lVar13 = *(long *)(lVar10 + 0x40);
  if (iVar6 == 0) {
    lVar13 = lVar13 + 1;
  }
  if (param_2 == 0) {
LAB_10070c57c:
    iVar7 = 0;
  }
  else {
    uVar14 = (ulong)*(byte *)(lVar10 + 0x50);
    if (uVar1 <= param_2 && param_2 - uVar1 != 0) {
      lVar13 = lVar13 + (lVar12 + uVar14 & (uVar14 ^ 0xffffffffffffffff));
      uVar15 = (uint)lVar13;
      uVar3 = uVar15 << 3;
      if (uVar15 < 4) {
        uVar16 = ((param_2 - uVar1) + ~(-1 << (ulong)(uVar3 & 0x1f)) >> (ulong)(uVar3 & 0x1f)) + 1;
        if (0xff < uVar16) {
          if (uVar16 >> 0x10 == 0) {
            uVar16 = (uint)*(ushort *)((long)param_1 + lVar13);
          }
          else {
            uVar16 = *(uint *)((long)param_1 + lVar13);
          }
          goto LAB_10070c4f4;
        }
        if (1 < uVar16) goto LAB_10070c4f0;
      }
      else {
LAB_10070c4f0:
        uVar16 = (uint)*(byte *)((long)param_1 + lVar13);
LAB_10070c4f4:
        if (uVar16 != 0) {
          uVar2 = 0;
          if (uVar15 < 4) {
            uVar2 = uVar16 - 1 << (ulong)(uVar3 & 0x1f);
          }
          if (uVar15 == 0) {
            uVar11 = 0;
          }
          else {
            uVar11 = 4;
            if (uVar15 < 4) {
              uVar11 = uVar15;
            }
            if ((int)uVar11 < 3) {
              if (uVar11 == 1) {
                uVar11 = (uint)(byte)*param_1;
              }
              else {
                uVar11 = (uint)(ushort)*param_1;
              }
            }
            else if (uVar11 == 3) {
              uVar11 = (uint)(uint3)*param_1;
            }
            else {
              uVar11 = *param_1;
            }
          }
          return uVar1 + (uVar11 | uVar2) + 1;
        }
      }
      if (uVar1 == 0) goto LAB_10070c57c;
    }
    if (uVar2 < uVar11) {
      uVar14 = (ulong)(lVar12 + uVar14 + (long)param_1) & ~uVar14;
      (**(code **)(lVar10 + 0x30))(uVar14,iVar6,lVar9);
      iVar6 = (int)uVar14;
    }
    else {
      (**(code **)(lVar17 + 0x30))(param_1,iVar7,lVar8);
      iVar6 = (int)param_1;
    }
    iVar7 = 0;
    if (iVar6 != 0) {
      iVar7 = iVar6 + -1;
    }
  }
  return iVar7;
}



/* Address: 0x10070c610 | FUN_10070c610 */

void FUN_10070c610(uint *param_1,uint param_2,uint param_3,long param_4)

{
  uint uVar1;
  size_t sVar2;
  uint uVar3;
  int iVar4;
  undefined2 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar11;
  size_t sVar12;
  size_t sVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  int iVar17;
  byte bVar18;
  long lVar19;
  
  puVar7 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar6 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8;
  lVar8 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 0x20),*(undefined8 *)(param_4 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar19 = *(long *)(lVar8 + -8);
  iVar17 = *(int *)(lVar19 + 0x54);
  uVar3 = 0;
  if (iVar17 != 0) {
    uVar3 = iVar17 - 1;
  }
  lVar9 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 0x28),*(undefined8 *)(param_4 + 0x18),puVar7,puVar6);
  bVar18 = 0;
  lVar15 = *(long *)(lVar9 + -8);
  iVar4 = *(int *)(lVar15 + 0x54);
  uVar10 = 0;
  if (iVar4 != 0) {
    uVar10 = iVar4 - 1;
  }
  uVar14 = uVar10;
  if (uVar10 <= uVar3) {
    uVar14 = uVar3;
  }
  sVar12 = *(size_t *)(lVar19 + 0x40);
  if (iVar17 == 0) {
    sVar12 = sVar12 + 1;
  }
  uVar16 = (ulong)*(byte *)(lVar15 + 0x50);
  sVar13 = *(size_t *)(lVar15 + 0x40);
  if (iVar4 == 0) {
    sVar13 = sVar13 + 1;
  }
  sVar2 = (sVar12 + uVar16 & (uVar16 ^ 0xffffffffffffffff)) + sVar13;
  uVar11 = (uint)sVar2;
  if (uVar14 <= param_3 && param_3 - uVar14 != 0) {
    if (uVar11 < 4) {
      uVar1 = ((param_3 - uVar14) + ~(-1 << (ulong)(uVar11 << 3 & 0x1f)) >>
              (ulong)(uVar11 << 3 & 0x1f)) + 1;
      bVar18 = 2;
      if (0xffff < uVar1) {
        bVar18 = 4;
      }
      if (uVar1 < 0x100) {
        bVar18 = 1 < uVar1;
      }
    }
    else {
      bVar18 = 1;
    }
  }
  if (uVar14 < param_2) {
    param_2 = param_2 + ~uVar14;
    if (uVar11 < 4) {
      iVar17 = (param_2 >> (ulong)(uVar11 << 3 & 0x1f)) + 1;
      if (uVar11 != 0) {
        uVar3 = param_2 & (-1 << (ulong)(uVar11 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar2);
        uVar5 = (undefined2)uVar3;
        if (uVar11 == 3) {
          *(undefined2 *)param_1 = uVar5;
          *(char *)((long)param_1 + 2) = (char)(uVar3 >> 0x10);
        }
        else if (uVar11 == 2) {
          *(undefined2 *)param_1 = uVar5;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      _bzero(param_1,sVar2);
      *param_1 = param_2;
      iVar17 = 1;
    }
    if (bVar18 < 2) {
      if (bVar18 != 0) {
        *(char *)((long)param_1 + sVar2) = (char)iVar17;
      }
    }
    else if (bVar18 == 2) {
      *(short *)((long)param_1 + sVar2) = (short)iVar17;
    }
    else {
      *(int *)((long)param_1 + sVar2) = iVar17;
    }
  }
  else {
    if (bVar18 < 2) {
      if (bVar18 != 0) {
        *(undefined1 *)((long)param_1 + sVar2) = 0;
      }
    }
    else if (bVar18 == 2) {
      *(undefined2 *)((long)param_1 + sVar2) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar2) = 0;
    }
    if (param_2 != 0) {
      if (uVar3 < uVar10) {
        param_1 = (uint *)(sVar12 + uVar16 + (long)param_1 & ~uVar16);
        if (param_2 <= uVar10) {
          UNRECOVERED_JUMPTABLE = *(code **)(lVar15 + 0x38);
          lVar8 = lVar9;
          iVar17 = iVar4;
LAB_10070c8d8:
                    /* WARNING: Could not recover jumptable at 0x00010070c8f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)(param_1,param_2 + 1,iVar17,lVar8);
          return;
        }
        uVar11 = (uint)sVar13;
        uVar14 = 0xffffffff;
        if (uVar11 < 4) {
          uVar14 = ~(-1 << (ulong)((uVar11 & 3) << 3));
        }
        if (uVar11 == 0) {
          return;
        }
        uVar14 = uVar14 & (uVar10 - param_2 ^ 0xffffffff);
        uVar3 = 4;
        if (uVar11 < 4) {
          uVar3 = uVar11;
        }
        _bzero(param_1,sVar13);
      }
      else {
        if (param_2 <= uVar3) {
          UNRECOVERED_JUMPTABLE = *(code **)(lVar19 + 0x38);
          goto LAB_10070c8d8;
        }
        uVar10 = (uint)sVar12;
        uVar14 = 0xffffffff;
        if (uVar10 < 4) {
          uVar14 = ~(-1 << (ulong)((uVar10 & 3) << 3));
        }
        if (uVar10 == 0) {
          return;
        }
        uVar14 = uVar14 & (uVar3 - param_2 ^ 0xffffffff);
        uVar3 = 4;
        if (uVar10 < 4) {
          uVar3 = uVar10;
        }
        _bzero(param_1,sVar12);
      }
      if ((int)uVar3 < 3) {
        if (uVar3 == 1) {
          *(char *)param_1 = (char)uVar14;
        }
        else {
          *(short *)param_1 = (short)uVar14;
        }
      }
      else if (uVar3 == 3) {
        *(short *)param_1 = (short)uVar14;
        *(char *)((long)param_1 + 2) = (char)(uVar14 >> 0x10);
      }
      else {
        *param_1 = uVar14;
      }
    }
  }
  return;
}



/* Address: 0x10070c95c | FUN_10070c95c */

void FUN_10070c95c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10070ca80(local_78,lVar1,lVar5,lVar4,param_5,param_6,param_7,local_70,local_68);
  return;
}



/* Address: 0x10070ca80 | FUN_10070ca80 */

void FUN_10070ca80(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10070cb50(0,&local_90);
  (**(code **)(*(long *)(param_6 + -8) + 0x20))(param_1 + *(int *)(lVar1 + 0x44),param_3,param_6);
  (**(code **)(*(long *)(param_7 + -8) + 0x20))(param_1 + *(int *)(lVar1 + 0x48),param_4,param_7);
  return;
}



/* Address: 0x10070cb50 | FUN_10070cb50 */

void FUN_10070cb50(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetStructDescriptor_100cbd168);
  return;
}



/* Address: 0x10070cb5c | FUN_10070cb5c */

void FUN_10070cb5c(undefined8 param_1,long param_2)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010070cb74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*(long *)(param_2 + 0x18) + -8) + 0x10))
            (param_1,unaff_x20 + *(int *)(param_2 + 0x44));
  return;
}



/* Address: 0x10070cb78 | FUN_10070cb78 */

void FUN_10070cb78(undefined8 param_1,long param_2)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010070cb90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*(long *)(param_2 + 0x20) + -8) + 0x10))
            (param_1,unaff_x20 + *(int *)(param_2 + 0x48));
  return;
}



/* Address: 0x10070cb94 | FUN_10070cb94 */

void FUN_10070cb94(undefined8 param_1,long param_2)

{
  Optional OVar1;
  undefined7 extraout_var;
  
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  OVar1 = Swift::Optional::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x00010070cbec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(CONCAT71(extraout_var,OVar1.value) + -8) + 0x10))(param_1);
  return;
}



/* Address: 0x10070cbf0 | FUN_10070cbf0 */

void FUN_10070cbf0(undefined8 param_1,long param_2)

{
  Optional OVar1;
  undefined7 extraout_var;
  
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  OVar1 = Swift::Optional::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x00010070cc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(CONCAT71(extraout_var,OVar1.value) + -8) + 0x28))();
  return;
}



/* Address: 0x10070cc50 | FUN_10070cc50 */

void FUN_10070cc50(undefined8 param_1,long param_2)

{
  int iVar1;
  Optional OVar2;
  undefined7 extraout_var;
  long unaff_x20;
  
  iVar1 = *(int *)(param_2 + 0x44);
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x18),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  OVar2 = Swift::Optional::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x00010070ccb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(CONCAT71(extraout_var,OVar2.value) + -8) + 0x10))
            (param_1,unaff_x20 + iVar1,CONCAT71(extraout_var,OVar2.value));
  return;
}



/* Address: 0x10070ccb8 | FUN_10070ccb8 */

void FUN_10070ccb8(undefined8 param_1,long param_2)

{
  int iVar1;
  Optional OVar2;
  undefined7 extraout_var;
  long unaff_x20;
  
  iVar1 = *(int *)(param_2 + 0x44);
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x18),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  OVar2 = Swift::Optional::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x00010070cd20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(CONCAT71(extraout_var,OVar2.value) + -8) + 0x28))
            (unaff_x20 + iVar1,param_1,CONCAT71(extraout_var,OVar2.value));
  return;
}



/* Address: 0x10070cd24 | FUN_10070cd24 */

undefined1  [16] FUN_10070cd24(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + *(int *)(param_2 + 0x44);
  auVar1._0_8_ = FUN_100004520;
  return auVar1;
}



/* Address: 0x10070cd38 | FUN_10070cd38 */

void FUN_10070cd38(undefined8 param_1,long param_2)

{
  int iVar1;
  Optional OVar2;
  undefined7 extraout_var;
  long unaff_x20;
  
  iVar1 = *(int *)(param_2 + 0x48);
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(param_2 + 0x38),*(undefined8 *)(param_2 + 0x20),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  OVar2 = Swift::Optional::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x00010070cd9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(CONCAT71(extraout_var,OVar2.value) + -8) + 0x10))
            (param_1,unaff_x20 + iVar1,CONCAT71(extraout_var,OVar2.value));
  return;
}



/* Address: 0x10070cda0 | FUN_10070cda0 */

void FUN_10070cda0(undefined8 param_1,long param_2)

{
  int iVar1;
  Optional OVar2;
  undefined7 extraout_var;
  long unaff_x20;
  
  iVar1 = *(int *)(param_2 + 0x48);
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(param_2 + 0x38),*(undefined8 *)(param_2 + 0x20),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  OVar2 = Swift::Optional::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x00010070ce08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(CONCAT71(extraout_var,OVar2.value) + -8) + 0x28))
            (unaff_x20 + iVar1,param_1,CONCAT71(extraout_var,OVar2.value));
  return;
}



/* Address: 0x10070ce0c | FUN_10070ce0c */

undefined1  [16] FUN_10070ce0c(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + *(int *)(param_2 + 0x48);
  auVar1._0_8_ = FUN_100004520;
  return auVar1;
}



/* Address: 0x10070ce20 | FUN_10070ce20 */

void FUN_10070ce20(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  Optional OVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined7 extraout_var_01;
  code *pcVar6;
  code *pcVar7;
  code *pcVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar1 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8;
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_8,param_5,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar9 = *(long *)(lVar3 + -8);
  pcVar6 = *(code **)(lVar9 + 0x38);
  (*pcVar6)(param_1,1,1,lVar3);
  uStack_68 = param_10;
  lVar4 = 0;
  local_90 = param_5;
  uStack_88 = param_6;
  local_80 = param_7;
  uStack_78 = param_8;
  local_70 = param_9;
  FUN_10070d04c(0,&local_90);
  lVar13 = (long)*(int *)(lVar4 + 0x44);
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_9,param_6,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,puVar1);
  lVar12 = *(long *)(lVar5 + -8);
  pcVar7 = *(code **)(lVar12 + 0x38);
  (*pcVar7)(param_1 + lVar13,1,1,lVar5);
  lVar11 = (long)*(int *)(lVar4 + 0x48);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_10,param_7,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,puVar1);
  lVar10 = *(long *)(lVar4 + -8);
  pcVar8 = *(code **)(lVar10 + 0x38);
  (*pcVar8)(param_1 + lVar11,1,1,lVar4);
  OVar2 = Swift::Optional::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,OVar2.value) + -8) + 8))
            (param_1,CONCAT71(extraout_var,OVar2.value));
  (**(code **)(lVar9 + 0x20))(param_1,param_2,lVar3);
  (*pcVar6)(param_1,0,1,lVar3);
  OVar2 = Swift::Optional::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var_00,OVar2.value) + -8) + 8))
            (param_1 + lVar13,CONCAT71(extraout_var_00,OVar2.value));
  (**(code **)(lVar12 + 0x20))(param_1 + lVar13,param_3,lVar5);
  (*pcVar7)(param_1 + lVar13,0,1,lVar5);
  OVar2 = Swift::Optional::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var_01,OVar2.value) + -8) + 8))
            (param_1 + lVar11,CONCAT71(extraout_var_01,OVar2.value));
  (**(code **)(lVar10 + 0x20))(param_1 + lVar11,param_4,lVar4);
  (*pcVar8)(param_1 + lVar11,0,1,lVar4);
  return;
}



/* Address: 0x10070d04c | FUN_10070d04c */

void FUN_10070d04c(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetStructDescriptor_100cbd1d4);
  return;
}



/* Address: 0x10070d058 | FUN_10070d058 */

void FUN_10070d058(undefined8 param_1,long param_2)

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
  uVar6 = *(undefined8 *)(param_2 + 0x28);
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
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x58) = uVar4;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x60) = lVar2;
  uVar4 = *(long *)(lVar2 + 0x40) + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x68) = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x70) = uVar4;
  _swift_task_switch(FUN_10070d130,0,0);
  return;
}



/* Address: 0x10070d130 | FUN_10070d130 */

void FUN_10070d130(void)

{
  int iVar1;
  Optional OVar2;
  long lVar3;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  long *plVar4;
  long lVar5;
  code *pcVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x20);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar8,uVar10,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  *(long *)(unaff_x22 + 0x78) = lVar3;
  lVar5 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x80) = lVar5;
  (**(code **)(lVar5 + 0x30))(uVar9,1,lVar3);
  if ((int)uVar9 == 0) {
    _swift_getAssociatedConformanceWitness
              (uVar8,uVar10,lVar3,
               PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
               PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
              );
    plVar4 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x88) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_10070d4a0;
  }
  else {
    (**(code **)(*(long *)(unaff_x22 + 0x60) + 0x38))
              (*(undefined8 *)(unaff_x22 + 0x58),1,1,*(undefined8 *)(unaff_x22 + 0x38));
    uVar8 = *(undefined8 *)(unaff_x22 + 0x78);
    lVar7 = *(long *)(unaff_x22 + 0x80);
    lVar5 = *(long *)(unaff_x22 + 0x18);
    lVar3 = *(long *)(unaff_x22 + 0x20);
    pcVar6 = *(code **)(*(long *)(unaff_x22 + 0x48) + 8);
    *(code **)(unaff_x22 + 0x98) = pcVar6;
    (*pcVar6)(*(undefined8 *)(unaff_x22 + 0x58),*(undefined8 *)(unaff_x22 + 0x40));
    OVar2 = Swift::Optional::typeMetadataAccessor();
    (**(code **)(*(long *)(CONCAT71(extraout_var,OVar2.value) + -8) + 8))
              (lVar3,CONCAT71(extraout_var,OVar2.value));
    (**(code **)(lVar7 + 0x38))(lVar3,1,1,uVar8);
    iVar1 = *(int *)(lVar5 + 0x44);
    *(int *)(unaff_x22 + 0xd0) = iVar1;
    uVar8 = *(undefined8 *)(lVar5 + 0x30);
    uVar10 = *(undefined8 *)(lVar5 + 0x18);
    lVar5 = 0;
    _swift_getAssociatedTypeWitness
              (0,uVar8,uVar10,
               PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
               PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
    *(long *)(unaff_x22 + 0xa0) = lVar5;
    lVar7 = *(long *)(lVar5 + -8);
    *(long *)(unaff_x22 + 0xa8) = lVar7;
    lVar3 = lVar3 + iVar1;
    (**(code **)(lVar7 + 0x30))(lVar3,1,lVar5);
    if ((int)lVar3 == 0) {
      _swift_getAssociatedConformanceWitness
                (uVar8,uVar10,lVar5,
                 PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
                 PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
                );
      plVar4 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0xb0) = plVar4;
      *plVar4 = unaff_x22;
      plVar4[1] = (long)FUN_10070d81c;
    }
    else {
      (**(code **)(*(long *)(unaff_x22 + 0x60) + 0x38))
                (*(undefined8 *)(unaff_x22 + 0x50),1,1,*(undefined8 *)(unaff_x22 + 0x38));
      uVar8 = *(undefined8 *)(unaff_x22 + 0xa0);
      lVar7 = *(long *)(unaff_x22 + 0xa8);
      iVar1 = *(int *)(unaff_x22 + 0xd0);
      lVar5 = *(long *)(unaff_x22 + 0x18);
      lVar3 = *(long *)(unaff_x22 + 0x20);
      (**(code **)(unaff_x22 + 0x98))
                (*(undefined8 *)(unaff_x22 + 0x50),*(undefined8 *)(unaff_x22 + 0x40));
      OVar2 = Swift::Optional::typeMetadataAccessor();
      (**(code **)(*(long *)(CONCAT71(extraout_var_00,OVar2.value) + -8) + 8))
                (lVar3 + iVar1,CONCAT71(extraout_var_00,OVar2.value));
      (**(code **)(lVar7 + 0x38))(lVar3 + iVar1,1,1,uVar8);
      iVar1 = *(int *)(lVar5 + 0x48);
      uVar8 = *(undefined8 *)(lVar5 + 0x38);
      uVar10 = *(undefined8 *)(lVar5 + 0x20);
      lVar5 = 0;
      _swift_getAssociatedTypeWitness
                (0,uVar8,uVar10,
                 PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
                 PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
      lVar3 = lVar3 + iVar1;
      (**(code **)(*(long *)(lVar5 + -8) + 0x30))(lVar3,1,lVar5);
      if ((int)lVar3 != 0) {
        (**(code **)(*(long *)(unaff_x22 + 0x60) + 0x38))
                  (*(undefined8 *)(unaff_x22 + 0x10),1,1,*(undefined8 *)(unaff_x22 + 0x38));
        uVar8 = *(undefined8 *)(unaff_x22 + 0x68);
        uVar10 = *(undefined8 *)(unaff_x22 + 0x50);
        uVar9 = *(undefined8 *)(unaff_x22 + 0x58);
        _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x70));
        _swift_task_dealloc(uVar8);
        _swift_task_dealloc(uVar9);
        _swift_task_dealloc(uVar10);
                    /* WARNING: Could not recover jumptable at 0x00010070d380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(unaff_x22 + 8))();
        return;
      }
      _swift_getAssociatedConformanceWitness
                (uVar8,uVar10,lVar5,
                 PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
                 PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
                );
      plVar4 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0xc0) = plVar4;
      *plVar4 = unaff_x22;
      plVar4[1] = (long)FUN_10070da80;
    }
  }
  Swift::AsyncIteratorProtocol::_next();
  return;
}



/* Address: 0x10070d4a0 | FUN_10070d4a0 */

void FUN_10070d4a0(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x90) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x88));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10070d504;
  }
  else {
    pcVar1 = FUN_10070db20;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x10070d504 | FUN_10070d504 */

void FUN_10070d504(void)

{
  int iVar1;
  Optional OVar2;
  undefined7 extraout_var;
  long lVar3;
  long lVar4;
  undefined7 extraout_var_00;
  long *plVar5;
  code *pcVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x22;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar9 = *(undefined8 *)(unaff_x22 + 0x58);
  lVar4 = *(long *)(unaff_x22 + 0x60);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar10 = uVar9;
  (**(code **)(lVar4 + 0x30))(uVar9,1,uVar8);
  if ((int)uVar10 == 1) {
    uVar10 = *(undefined8 *)(unaff_x22 + 0x78);
    lVar7 = *(long *)(unaff_x22 + 0x80);
    lVar3 = *(long *)(unaff_x22 + 0x18);
    lVar4 = *(long *)(unaff_x22 + 0x20);
    pcVar6 = *(code **)(*(long *)(unaff_x22 + 0x48) + 8);
    *(code **)(unaff_x22 + 0x98) = pcVar6;
    (*pcVar6)(uVar9,*(undefined8 *)(unaff_x22 + 0x40));
    OVar2 = Swift::Optional::typeMetadataAccessor();
    (**(code **)(*(long *)(CONCAT71(extraout_var,OVar2.value) + -8) + 8))
              (lVar4,CONCAT71(extraout_var,OVar2.value));
    (**(code **)(lVar7 + 0x38))(lVar4,1,1,uVar10);
    iVar1 = *(int *)(lVar3 + 0x44);
    *(int *)(unaff_x22 + 0xd0) = iVar1;
    uVar9 = *(undefined8 *)(lVar3 + 0x30);
    uVar10 = *(undefined8 *)(lVar3 + 0x18);
    lVar3 = 0;
    _swift_getAssociatedTypeWitness
              (0,uVar9,uVar10,
               PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
               PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
    *(long *)(unaff_x22 + 0xa0) = lVar3;
    lVar7 = *(long *)(lVar3 + -8);
    *(long *)(unaff_x22 + 0xa8) = lVar7;
    lVar4 = lVar4 + iVar1;
    (**(code **)(lVar7 + 0x30))(lVar4,1,lVar3);
    if ((int)lVar4 == 0) {
      _swift_getAssociatedConformanceWitness
                (uVar9,uVar10,lVar3,
                 PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
                 PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
                );
      plVar5 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0xb0) = plVar5;
      *plVar5 = unaff_x22;
      plVar5[1] = (long)FUN_10070d81c;
    }
    else {
      uVar9 = 1;
      (**(code **)(*(long *)(unaff_x22 + 0x60) + 0x38))
                (*(undefined8 *)(unaff_x22 + 0x50),1,1,*(undefined8 *)(unaff_x22 + 0x38));
      uVar10 = *(undefined8 *)(unaff_x22 + 0xa0);
      lVar7 = *(long *)(unaff_x22 + 0xa8);
      iVar1 = *(int *)(unaff_x22 + 0xd0);
      lVar3 = *(long *)(unaff_x22 + 0x18);
      lVar4 = *(long *)(unaff_x22 + 0x20);
      (**(code **)(unaff_x22 + 0x98))
                (*(undefined8 *)(unaff_x22 + 0x50),*(undefined8 *)(unaff_x22 + 0x40));
      OVar2 = Swift::Optional::typeMetadataAccessor();
      (**(code **)(*(long *)(CONCAT71(extraout_var_00,OVar2.value) + -8) + 8))
                (lVar4 + iVar1,CONCAT71(extraout_var_00,OVar2.value));
      (**(code **)(lVar7 + 0x38))(lVar4 + iVar1,1,1,uVar10);
      iVar1 = *(int *)(lVar3 + 0x48);
      uVar10 = *(undefined8 *)(lVar3 + 0x38);
      uVar8 = *(undefined8 *)(lVar3 + 0x20);
      lVar3 = 0;
      _swift_getAssociatedTypeWitness
                (0,uVar10,uVar8,
                 PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
                 PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
      lVar4 = lVar4 + iVar1;
      (**(code **)(*(long *)(lVar3 + -8) + 0x30))(lVar4,1,lVar3);
      if ((int)lVar4 != 0) goto LAB_10070d740;
      _swift_getAssociatedConformanceWitness
                (uVar10,uVar8,lVar3,
                 PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
                 PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
                );
      plVar5 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0xc0) = plVar5;
      *plVar5 = unaff_x22;
      plVar5[1] = (long)FUN_10070da80;
    }
    Swift::AsyncIteratorProtocol::_next();
    return;
  }
  uVar10 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x10);
  pcVar6 = *(code **)(lVar4 + 0x20);
  (*pcVar6)(uVar10,uVar9,uVar8);
  (*pcVar6)(uVar11,uVar10,uVar8);
  uVar9 = 0;
LAB_10070d740:
  (**(code **)(*(long *)(unaff_x22 + 0x60) + 0x38))
            (*(undefined8 *)(unaff_x22 + 0x10),uVar9,1,*(undefined8 *)(unaff_x22 + 0x38));
  uVar9 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x58);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x70));
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar10);
                    /* WARNING: Could not recover jumptable at 0x00010070d7a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10070d81c | FUN_10070d81c */

void FUN_10070d81c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xb8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xb0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10070d880;
  }
  else {
    pcVar1 = FUN_10070dcb0;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x10070d880 | FUN_10070d880 */

void FUN_10070d880(void)

{
  long lVar1;
  int iVar2;
  Optional OVar3;
  undefined7 extraout_var;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  long lVar10;
  code *pcVar11;
  
  lVar10 = *(long *)(unaff_x22 + 0x60);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar8 = uVar7;
  (**(code **)(lVar10 + 0x30))(uVar7,1,uVar6);
  if ((int)uVar8 == 1) {
    uVar6 = *(undefined8 *)(unaff_x22 + 0xa0);
    lVar1 = *(long *)(unaff_x22 + 0xa8);
    iVar2 = *(int *)(unaff_x22 + 0xd0);
    lVar4 = *(long *)(unaff_x22 + 0x18);
    lVar10 = *(long *)(unaff_x22 + 0x20);
    (**(code **)(unaff_x22 + 0x98))(uVar7,*(undefined8 *)(unaff_x22 + 0x40));
    OVar3 = Swift::Optional::typeMetadataAccessor();
    (**(code **)(*(long *)(CONCAT71(extraout_var,OVar3.value) + -8) + 8))
              (lVar10 + iVar2,CONCAT71(extraout_var,OVar3.value));
    uVar8 = 1;
    (**(code **)(lVar1 + 0x38))(lVar10 + iVar2,1,1,uVar6);
    iVar2 = *(int *)(lVar4 + 0x48);
    uVar6 = *(undefined8 *)(lVar4 + 0x38);
    uVar7 = *(undefined8 *)(lVar4 + 0x20);
    lVar4 = 0;
    _swift_getAssociatedTypeWitness
              (0,uVar6,uVar7,
               PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
               PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
    lVar10 = lVar10 + iVar2;
    (**(code **)(*(long *)(lVar4 + -8) + 0x30))(lVar10,1,lVar4);
    if ((int)lVar10 == 0) {
      _swift_getAssociatedConformanceWitness
                (uVar6,uVar7,lVar4,
                 PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
                 PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
                );
      plVar5 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0xc0) = plVar5;
      *plVar5 = unaff_x22;
      plVar5[1] = (long)FUN_10070da80;
      Swift::AsyncIteratorProtocol::_next();
      return;
    }
  }
  else {
    uVar8 = *(undefined8 *)(unaff_x22 + 0x68);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x10);
    pcVar11 = *(code **)(lVar10 + 0x20);
    (*pcVar11)(uVar8,uVar7,uVar6);
    (*pcVar11)(uVar9,uVar8,uVar6);
    uVar8 = 0;
  }
  (**(code **)(*(long *)(unaff_x22 + 0x60) + 0x38))
            (*(undefined8 *)(unaff_x22 + 0x10),uVar8,1,*(undefined8 *)(unaff_x22 + 0x38));
  uVar8 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x58);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x70));
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010070da7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10070da80 | FUN_10070da80 */

void FUN_10070da80(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  long *unaff_x22;
  long lVar5;
  
  lVar4 = *unaff_x22;
  lVar5 = *unaff_x22;
  *(long *)(lVar4 + 200) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0xc0));
  if (unaff_x20 != 0) {
    _swift_task_switch(FUN_10070de40,0,0);
    return;
  }
  uVar1 = *(undefined8 *)(lVar4 + 0x68);
  uVar2 = *(undefined8 *)(lVar4 + 0x50);
  uVar3 = *(undefined8 *)(lVar4 + 0x58);
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0x70));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010070db1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar5 + 8))();
  return;
}



/* Address: 0x10070db20 | FUN_10070db20 */

void FUN_10070db20(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  undefined *puVar9;
  undefined *puVar10;
  Optional OVar11;
  undefined7 extraout_var;
  long lVar12;
  undefined7 extraout_var_00;
  undefined7 extraout_var_01;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
  lVar12 = *(long *)(unaff_x22 + 0x80);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x58);
  lVar4 = *(long *)(unaff_x22 + 0x18);
  lVar7 = *(long *)(unaff_x22 + 0x20);
  OVar11 = Swift::Optional::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,OVar11.value) + -8) + 8))
            (lVar7,CONCAT71(extraout_var,OVar11.value));
  (**(code **)(lVar12 + 0x38))(lVar7,1,1,uVar1);
  puVar10 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar9 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8;
  iVar8 = *(int *)(lVar4 + 0x44);
  lVar12 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(lVar4 + 0x30),*(undefined8 *)(lVar4 + 0x18),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  OVar11 = Swift::Optional::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var_00,OVar11.value) + -8) + 8))
            (lVar7 + iVar8,CONCAT71(extraout_var_00,OVar11.value));
  (**(code **)(*(long *)(lVar12 + -8) + 0x38))(lVar7 + iVar8,1,1,lVar12);
  iVar8 = *(int *)(lVar4 + 0x48);
  lVar12 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(lVar4 + 0x38),*(undefined8 *)(lVar4 + 0x20),puVar10,puVar9);
  OVar11 = Swift::Optional::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var_01,OVar11.value) + -8) + 8))
            (lVar7 + iVar8,CONCAT71(extraout_var_01,OVar11.value));
  (**(code **)(*(long *)(lVar12 + -8) + 0x38))(lVar7 + iVar8,1,1,lVar12);
  _swift_willThrow();
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010070dcac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10070dcb0 | FUN_10070dcb0 */

void FUN_10070dcb0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  undefined *puVar9;
  undefined *puVar10;
  Optional OVar11;
  undefined7 extraout_var;
  long lVar12;
  undefined7 extraout_var_00;
  undefined7 extraout_var_01;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
  lVar12 = *(long *)(unaff_x22 + 0x80);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x58);
  lVar4 = *(long *)(unaff_x22 + 0x18);
  lVar7 = *(long *)(unaff_x22 + 0x20);
  OVar11 = Swift::Optional::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,OVar11.value) + -8) + 8))
            (lVar7,CONCAT71(extraout_var,OVar11.value));
  (**(code **)(lVar12 + 0x38))(lVar7,1,1,uVar1);
  puVar10 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar9 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8;
  iVar8 = *(int *)(lVar4 + 0x44);
  lVar12 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(lVar4 + 0x30),*(undefined8 *)(lVar4 + 0x18),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  OVar11 = Swift::Optional::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var_00,OVar11.value) + -8) + 8))
            (lVar7 + iVar8,CONCAT71(extraout_var_00,OVar11.value));
  (**(code **)(*(long *)(lVar12 + -8) + 0x38))(lVar7 + iVar8,1,1,lVar12);
  iVar8 = *(int *)(lVar4 + 0x48);
  lVar12 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(lVar4 + 0x38),*(undefined8 *)(lVar4 + 0x20),puVar10,puVar9);
  OVar11 = Swift::Optional::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var_01,OVar11.value) + -8) + 8))
            (lVar7 + iVar8,CONCAT71(extraout_var_01,OVar11.value));
  (**(code **)(*(long *)(lVar12 + -8) + 0x38))(lVar7 + iVar8,1,1,lVar12);
  _swift_willThrow();
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010070de3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10070de40 | FUN_10070de40 */

void FUN_10070de40(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  undefined *puVar9;
  undefined *puVar10;
  Optional OVar11;
  undefined7 extraout_var;
  long lVar12;
  undefined7 extraout_var_00;
  undefined7 extraout_var_01;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
  lVar12 = *(long *)(unaff_x22 + 0x80);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x58);
  lVar4 = *(long *)(unaff_x22 + 0x18);
  lVar7 = *(long *)(unaff_x22 + 0x20);
  OVar11 = Swift::Optional::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,OVar11.value) + -8) + 8))
            (lVar7,CONCAT71(extraout_var,OVar11.value));
  (**(code **)(lVar12 + 0x38))(lVar7,1,1,uVar1);
  puVar10 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar9 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8;
  iVar8 = *(int *)(lVar4 + 0x44);
  lVar12 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(lVar4 + 0x30),*(undefined8 *)(lVar4 + 0x18),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  OVar11 = Swift::Optional::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var_00,OVar11.value) + -8) + 8))
            (lVar7 + iVar8,CONCAT71(extraout_var_00,OVar11.value));
  (**(code **)(*(long *)(lVar12 + -8) + 0x38))(lVar7 + iVar8,1,1,lVar12);
  iVar8 = *(int *)(lVar4 + 0x48);
  lVar12 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(lVar4 + 0x38),*(undefined8 *)(lVar4 + 0x20),puVar10,puVar9);
  OVar11 = Swift::Optional::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var_01,OVar11.value) + -8) + 8))
            (lVar7 + iVar8,CONCAT71(extraout_var_01,OVar11.value));
  (**(code **)(*(long *)(lVar12 + -8) + 0x38))(lVar7 + iVar8,1,1,lVar12);
  _swift_willThrow();
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010070dfcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10070dfd0 | FUN_10070dfd0 */

void FUN_10070dfd0(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0xe0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005c804c;
  FUN_10070d058(plVar1,param_1,param_2);
  return;
}



/* Address: 0x10070e038 | FUN_10070e038 */

void FUN_10070e038(void)

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
            (0,*(undefined8 *)(in_x4 + 0x28),*(undefined8 *)(in_x4 + 0x10),
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
  plVar3[1] = (long)FUN_100708dfc;
  (extension_Swift)::Swift::AsyncIteratorProtocol::_next();
  return;
}



/* Address: 0x10070e118 | FUN_10070e118 */

void FUN_10070e118(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long unaff_x20;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined8 auStack_c0 [2];
  undefined1 auStack_b0 [8];
  
  puVar2 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar1 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8;
  lVar6 = *(long *)(param_2 + 0x20);
  lVar7 = *(long *)(lVar6 + -8);
  lVar8 = *(long *)(lVar7 + 0x40);
  uVar4 = *(undefined8 *)(param_2 + 0x38);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness();
  lVar9 = (long)(auStack_b0 + -(lVar8 + 0xfU & 0xfffffffffffffff0)) -
          (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = *(long *)(param_2 + 0x18);
  lVar10 = *(long *)(lVar16 + -8);
  lVar14 = lVar9 - (*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar5 = *(undefined8 *)(param_2 + 0x30);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness(0,uVar5,lVar16,puVar2,puVar1);
  lVar12 = lVar14 - (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = *(long *)(param_2 + 0x10);
  lVar17 = *(long *)(lVar13 + -8);
  lVar11 = lVar12 - (*(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar15 = *(undefined8 *)(param_2 + 0x28);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness(0,uVar15,lVar13,puVar2,puVar1);
  lVar3 = lVar11 - (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar17 + 0x10))(lVar11,unaff_x20,lVar13);
  Swift::AsyncSequence::_makeAsyncIterator();
  (**(code **)(lVar10 + 0x10))(lVar14,unaff_x20 + *(int *)(param_2 + 0x44),lVar16);
  Swift::AsyncSequence::_makeAsyncIterator();
  (**(code **)(lVar7 + 0x10))
            (auStack_b0 + -(lVar8 + 0xfU & 0xfffffffffffffff0),unaff_x20 + *(int *)(param_2 + 0x48),
             lVar6);
  Swift::AsyncSequence::_makeAsyncIterator();
  *(undefined8 *)(lVar3 + -0x10) = uVar4;
  FUN_10070ce20(param_1,lVar3,lVar12,lVar9,lVar13,lVar16,lVar6,uVar15,uVar5);
  return;
}



/* Address: 0x10070e350 | FUN_10070e350 */

void FUN_10070e350(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar3,uVar4,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  _swift_getAssociatedConformanceWitness
            (uVar3,uVar4,uVar2,puVar1,
             PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
            );
  _swift_getAssociatedConformanceWitness();
  return;
}



/* Address: 0x10070e3e0 | FUN_10070e3e0 */

void FUN_10070e3e0(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c744b8,param_1);
  return;
}



/* Address: 0x10070e3f0 | FUN_10070e3f0 */

void FUN_10070e3f0(long param_1)

{
  FUN_10070e118();
                    /* WARNING: Could not recover jumptable at 0x00010070e41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + -8) + 8))();
  return;
}



/* Address: 0x10070e420 | FUN_10070e420 */

void FUN_10070e420(long param_1)

{
  long lVar1;
  ulong uVar2;
  long local_38;
  long local_30;
  long local_28;
  
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
      uVar2 = *(ulong *)(param_1 + 0x20);
      lVar1 = 0x13f;
      _swift_checkMetadataState();
      if (uVar2 < 0x40) {
        local_28 = *(long *)(lVar1 + -8) + 0x40;
        _swift_initStructMetadata(param_1,0,3,&local_38,param_1 + 0x40);
      }
    }
  }
  return;
}



/* Address: 0x10070e4cc | FUN_10070e4cc */

long * FUN_10070e4cc(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  
  lVar2 = *(long *)(param_3 + 0x18);
  lVar3 = *(long *)(param_3 + 0x20);
  lVar7 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  lVar11 = *(long *)(lVar2 + -8);
  uVar8 = (ulong)*(uint *)(lVar11 + 0x50) & 0xff;
  uVar9 = *(long *)(lVar7 + 0x40) + uVar8;
  lVar12 = *(long *)(lVar3 + -8);
  uVar6 = (ulong)*(uint *)(lVar12 + 0x50) & 0xff;
  lVar5 = *(long *)(lVar11 + 0x40) + uVar6;
  uVar4 = *(uint *)(lVar11 + 0x50) | *(uint *)(lVar7 + 0x50) | *(uint *)(lVar12 + 0x50);
  uVar1 = uVar4 & 0xff;
  if ((uVar1 < 8 &&
      (lVar5 + (uVar9 & (uVar8 ^ 0xffffffffffffffff)) & (uVar6 ^ 0xffffffffffffffff)) +
      *(long *)(lVar12 + 0x40) < 0x19) && (uVar4 & 0x100000) == 0) {
    (**(code **)(lVar7 + 0x10))(param_1);
    uVar10 = uVar9 + (long)param_1 & ~uVar8;
    uVar9 = uVar9 + (long)param_2 & ~uVar8;
    (**(code **)(lVar11 + 0x10))(uVar10,uVar9,lVar2);
    (**(code **)(lVar12 + 0x10))(uVar10 + lVar5 & ~uVar6,uVar9 + lVar5 & ~uVar6,lVar3);
  }
  else {
    lVar5 = *param_2;
    *param_1 = lVar5;
    param_1 = (long *)(lVar5 + ((ulong)uVar1 + 0x10 & ((ulong)uVar1 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x10070e600 | FUN_10070e600 */

void FUN_10070e600(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  (**(code **)(lVar3 + 8))();
  lVar4 = *(long *)(*(long *)(param_2 + 0x18) + -8);
  uVar2 = *(long *)(lVar3 + 0x40) + param_1 + (ulong)*(byte *)(lVar4 + 0x50) &
          ((ulong)*(byte *)(lVar4 + 0x50) ^ 0xffffffffffffffff);
  (**(code **)(lVar4 + 8))(uVar2);
  lVar3 = *(long *)(*(long *)(param_2 + 0x20) + -8);
  uVar1 = (ulong)*(byte *)(lVar3 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010070e67c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))(uVar2 + *(long *)(lVar4 + 0x40) + uVar1 & (uVar1 ^ 0xffffffffffffffff));
  return;
}



/* Address: 0x10070e680 | FUN_10070e680 */

long FUN_10070e680(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  lVar4 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar4 + 0x10))();
  lVar6 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar1 = (ulong)*(byte *)(lVar6 + 0x50);
  lVar4 = *(long *)(lVar4 + 0x40) + uVar1;
  uVar5 = lVar4 + param_1 & (uVar1 ^ 0xffffffffffffffff);
  uVar3 = lVar4 + param_2 & (uVar1 ^ 0xffffffffffffffff);
  (**(code **)(lVar6 + 0x10))(uVar5,uVar3);
  lVar2 = *(long *)(*(long *)(param_3 + 0x20) + -8);
  uVar1 = (ulong)*(byte *)(lVar2 + 0x50);
  lVar4 = *(long *)(lVar6 + 0x40) + uVar1;
  (**(code **)(lVar2 + 0x10))
            (lVar4 + uVar5 & (uVar1 ^ 0xffffffffffffffff),
             lVar4 + uVar3 & (uVar1 ^ 0xffffffffffffffff));
  return param_1;
}



/* Address: 0x10070e728 | FUN_10070e728 */

long FUN_10070e728(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  lVar4 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar4 + 0x18))();
  lVar6 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar1 = (ulong)*(byte *)(lVar6 + 0x50);
  lVar4 = *(long *)(lVar4 + 0x40) + uVar1;
  uVar5 = lVar4 + param_1 & (uVar1 ^ 0xffffffffffffffff);
  uVar3 = lVar4 + param_2 & (uVar1 ^ 0xffffffffffffffff);
  (**(code **)(lVar6 + 0x18))(uVar5,uVar3);
  lVar2 = *(long *)(*(long *)(param_3 + 0x20) + -8);
  uVar1 = (ulong)*(byte *)(lVar2 + 0x50);
  lVar4 = *(long *)(lVar6 + 0x40) + uVar1;
  (**(code **)(lVar2 + 0x18))
            (lVar4 + uVar5 & (uVar1 ^ 0xffffffffffffffff),
             lVar4 + uVar3 & (uVar1 ^ 0xffffffffffffffff));
  return param_1;
}



/* Address: 0x10070e7d0 | FUN_10070e7d0 */

long FUN_10070e7d0(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  lVar4 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar4 + 0x20))();
  lVar6 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar1 = (ulong)*(byte *)(lVar6 + 0x50);
  lVar4 = *(long *)(lVar4 + 0x40) + uVar1;
  uVar5 = lVar4 + param_1 & (uVar1 ^ 0xffffffffffffffff);
  uVar3 = lVar4 + param_2 & (uVar1 ^ 0xffffffffffffffff);
  (**(code **)(lVar6 + 0x20))(uVar5,uVar3);
  lVar2 = *(long *)(*(long *)(param_3 + 0x20) + -8);
  uVar1 = (ulong)*(byte *)(lVar2 + 0x50);
  lVar4 = *(long *)(lVar6 + 0x40) + uVar1;
  (**(code **)(lVar2 + 0x20))
            (lVar4 + uVar5 & (uVar1 ^ 0xffffffffffffffff),
             lVar4 + uVar3 & (uVar1 ^ 0xffffffffffffffff));
  return param_1;
}



/* Address: 0x10070e878 | FUN_10070e878 */

long FUN_10070e878(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  lVar4 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar4 + 0x28))();
  lVar6 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar1 = (ulong)*(byte *)(lVar6 + 0x50);
  lVar4 = *(long *)(lVar4 + 0x40) + uVar1;
  uVar5 = lVar4 + param_1 & (uVar1 ^ 0xffffffffffffffff);
  uVar3 = lVar4 + param_2 & (uVar1 ^ 0xffffffffffffffff);
  (**(code **)(lVar6 + 0x28))(uVar5,uVar3);
  lVar2 = *(long *)(*(long *)(param_3 + 0x20) + -8);
  uVar1 = (ulong)*(byte *)(lVar2 + 0x50);
  lVar4 = *(long *)(lVar6 + 0x40) + uVar1;
  (**(code **)(lVar2 + 0x28))
            (lVar4 + uVar5 & (uVar1 ^ 0xffffffffffffffff),
             lVar4 + uVar3 & (uVar1 ^ 0xffffffffffffffff));
  return param_1;
}



/* Address: 0x10070e920 | FUN_10070e920 */

uint * FUN_10070e920(uint *param_1,uint param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  
  lVar14 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar4 = *(uint *)(lVar14 + 0x54);
  lVar12 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar5 = *(uint *)(lVar12 + 0x54);
  uVar10 = uVar5;
  if (uVar5 <= uVar4) {
    uVar10 = uVar4;
  }
  lVar13 = *(long *)(*(long *)(param_3 + 0x20) + -8);
  uVar6 = *(uint *)(lVar13 + 0x54);
  uVar3 = uVar6;
  if (uVar6 <= uVar10) {
    uVar3 = uVar10;
  }
  if (param_2 == 0) {
    return (uint *)0x0;
  }
  uVar8 = (ulong)*(byte *)(lVar12 + 0x50);
  uVar1 = *(long *)(lVar14 + 0x40) + uVar8;
  uVar15 = (ulong)*(byte *)(lVar13 + 0x50);
  if (param_2 < uVar3 || param_2 - uVar3 == 0) goto LAB_10070ea0c;
  lVar2 = (*(long *)(lVar12 + 0x40) + uVar15 + (uVar1 & (uVar8 ^ 0xffffffffffffffff)) &
          (uVar15 ^ 0xffffffffffffffff)) + *(long *)(lVar13 + 0x40);
  uVar11 = (uint)lVar2;
  uVar10 = uVar11 << 3;
  if (uVar11 < 4) {
    uVar9 = ((param_2 - uVar3) + ~(-1 << (ulong)(uVar10 & 0x1f)) >> (ulong)(uVar10 & 0x1f)) + 1;
    if (0xff < uVar9) {
      if (uVar9 >> 0x10 == 0) {
        uVar9 = (uint)*(ushort *)((long)param_1 + lVar2);
      }
      else {
        uVar9 = *(uint *)((long)param_1 + lVar2);
      }
      goto LAB_10070e9a4;
    }
    if (1 < uVar9) goto LAB_10070e9a0;
  }
  else {
LAB_10070e9a0:
    uVar9 = (uint)*(byte *)((long)param_1 + lVar2);
LAB_10070e9a4:
    if (uVar9 != 0) {
      uVar4 = 0;
      if (uVar11 < 4) {
        uVar4 = uVar9 - 1 << (ulong)(uVar10 & 0x1f);
      }
      if (uVar11 == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = 4;
        if (uVar11 < 4) {
          uVar10 = uVar11;
        }
        if ((int)uVar10 < 3) {
          if (uVar10 == 1) {
            uVar10 = (uint)(byte)*param_1;
          }
          else {
            uVar10 = (uint)(ushort)*param_1;
          }
        }
        else if (uVar10 == 3) {
          uVar10 = (uint)(uint3)*param_1;
        }
        else {
          uVar10 = *param_1;
        }
      }
      return (uint *)(ulong)(uVar3 + (uVar10 | uVar4) + 1);
    }
  }
  if (uVar3 == 0) {
    return (uint *)0x0;
  }
LAB_10070ea0c:
  if (uVar4 == uVar3) {
                    /* WARNING: Could not recover jumptable at 0x00010070ea24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar14 + 0x30))(param_1,uVar4,*(long *)(param_3 + 0x10));
    return param_1;
  }
  puVar7 = (uint *)((ulong)(uVar1 + (long)param_1) & ~uVar8);
  if (uVar5 != uVar3) {
    puVar7 = (uint *)((long)puVar7 + uVar15 + *(long *)(lVar12 + 0x40) & ~uVar15);
                    /* WARNING: Could not recover jumptable at 0x00010070ea74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar13 + 0x30))(puVar7,uVar6,*(long *)(param_3 + 0x20));
    return puVar7;
  }
                    /* WARNING: Could not recover jumptable at 0x00010070ea50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar12 + 0x30))();
  return puVar7;
}



/* Address: 0x10070ead0 | FUN_10070ead0 */

void FUN_10070ead0(uint *param_1,undefined8 param_2,uint param_3,long param_4)

{
  ulong uVar1;
  size_t sVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  undefined2 uVar8;
  uint uVar9;
  uint uVar10;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  uint uVar18;
  int iVar19;
  byte bVar20;
  
  lVar4 = *(long *)(param_4 + 0x10);
  lVar5 = *(long *)(param_4 + 0x18);
  lVar15 = *(long *)(lVar4 + -8);
  uVar6 = *(uint *)(lVar15 + 0x54);
  lVar13 = *(long *)(lVar5 + -8);
  uVar7 = *(uint *)(lVar13 + 0x54);
  uVar18 = uVar7;
  if (uVar7 <= uVar6) {
    uVar18 = uVar6;
  }
  lVar12 = *(long *)(param_4 + 0x20);
  lVar14 = *(long *)(lVar12 + -8);
  uVar10 = *(uint *)(lVar14 + 0x54);
  uVar3 = uVar10;
  if (uVar10 <= uVar18) {
    uVar3 = uVar18;
  }
  uVar11 = (ulong)*(byte *)(lVar13 + 0x50);
  uVar1 = *(long *)(lVar15 + 0x40) + uVar11;
  lVar17 = *(long *)(lVar13 + 0x40);
  uVar16 = (ulong)*(byte *)(lVar14 + 0x50);
  sVar2 = (lVar17 + uVar16 + (uVar1 & (uVar11 ^ 0xffffffffffffffff)) & (uVar16 ^ 0xffffffffffffffff)
          ) + *(long *)(lVar14 + 0x40);
  uVar18 = (uint)sVar2;
  if (param_3 < uVar3 || param_3 - uVar3 == 0) {
    bVar20 = 0;
  }
  else if (uVar18 < 4) {
    uVar9 = ((param_3 - uVar3) + ~(-1 << (ulong)(uVar18 << 3 & 0x1f)) >> (ulong)(uVar18 << 3 & 0x1f)
            ) + 1;
    bVar20 = 2;
    if (0xffff < uVar9) {
      bVar20 = 4;
    }
    if (uVar9 < 0x100) {
      bVar20 = 1 < uVar9;
    }
  }
  else {
    bVar20 = 1;
  }
  uVar9 = (uint)param_2;
  if (uVar3 < uVar9) {
    uVar9 = uVar9 + ~uVar3;
    if (uVar18 < 4) {
      iVar19 = (uVar9 >> (ulong)(uVar18 << 3 & 0x1f)) + 1;
      if (uVar18 != 0) {
        uVar6 = uVar9 & (-1 << (ulong)(uVar18 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar2);
        uVar8 = (undefined2)uVar6;
        if (uVar18 == 3) {
          *(undefined2 *)param_1 = uVar8;
          *(char *)((long)param_1 + 2) = (char)(uVar6 >> 0x10);
        }
        else if (uVar18 == 2) {
          *(undefined2 *)param_1 = uVar8;
        }
        else {
          *(char *)param_1 = (char)uVar9;
        }
      }
    }
    else {
      _bzero(param_1,sVar2);
      *param_1 = uVar9;
      iVar19 = 1;
    }
    if (bVar20 < 2) {
      if (bVar20 != 0) {
        *(char *)((long)param_1 + sVar2) = (char)iVar19;
      }
    }
    else if (bVar20 == 2) {
      *(short *)((long)param_1 + sVar2) = (short)iVar19;
    }
    else {
      *(int *)((long)param_1 + sVar2) = iVar19;
    }
  }
  else {
    if (bVar20 < 2) {
      if (bVar20 != 0) {
        *(undefined1 *)((long)param_1 + sVar2) = 0;
      }
    }
    else if (bVar20 == 2) {
      *(undefined2 *)((long)param_1 + sVar2) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar2) = 0;
    }
    if (uVar9 != 0) {
      if (uVar6 == uVar3) {
        UNRECOVERED_JUMPTABLE = *(code **)(lVar15 + 0x38);
        lVar12 = lVar4;
        uVar10 = uVar6;
      }
      else {
        param_1 = (uint *)(uVar1 + (long)param_1 & ~uVar11);
        if (uVar7 == uVar3) {
          UNRECOVERED_JUMPTABLE = *(code **)(lVar13 + 0x38);
          lVar12 = lVar5;
          uVar10 = uVar7;
        }
        else {
          UNRECOVERED_JUMPTABLE = *(code **)(lVar14 + 0x38);
          param_1 = (uint *)((long)param_1 + uVar16 + lVar17 & ~uVar16);
        }
      }
                    /* WARNING: Could not recover jumptable at 0x00010070ecc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1,param_2,uVar10,lVar12);
      return;
    }
  }
  return;
}



/* Address: 0x10070ed18 | FUN_10070ed18 */

undefined1  [16] FUN_10070ed18(long param_1)

{
  Optional OVar1;
  ulong uVar2;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined7 extraout_var_01;
  long lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  long local_38;
  long local_30;
  long local_28;
  
  uVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lVar3 = CONCAT71(extraout_var,OVar1.value);
  if (uVar2 < 0x40) {
    local_38 = *(long *)(lVar3 + -8) + 0x40;
    uVar2 = 0xff;
    _swift_getAssociatedTypeWitness
              (0xff,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x18),
               PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
               PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
    OVar1 = Swift::Optional::typeMetadataAccessor();
    lVar3 = CONCAT71(extraout_var_00,OVar1.value);
    if (uVar2 < 0x40) {
      local_30 = *(long *)(lVar3 + -8) + 0x40;
      uVar2 = 0xff;
      _swift_getAssociatedTypeWitness
                (0xff,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x20),
                 PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
                 PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
      OVar1 = Swift::Optional::typeMetadataAccessor();
      lVar3 = CONCAT71(extraout_var_01,OVar1.value);
      if (uVar2 < 0x40) {
        local_28 = *(long *)(lVar3 + -8) + 0x40;
        _swift_initStructMetadata(param_1,0,3,&local_38,param_1 + 0x40);
        lVar3 = 0;
        uVar4 = 0;
        goto LAB_10070ee14;
      }
    }
  }
  uVar4 = 0x3f;
LAB_10070ee14:
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = lVar3;
  return auVar5;
}



/* Address: 0x10070ee24 | FUN_10070ee24 */

long * FUN_10070ee24(long *param_1,long *param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  void *pvVar11;
  ulong uVar12;
  size_t sVar13;
  size_t sVar14;
  size_t sVar15;
  ulong uVar16;
  ulong uVar17;
  void *pvVar18;
  long lVar19;
  void *pvVar20;
  long lVar21;
  long lVar22;
  
  puVar6 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar5 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8;
  lVar7 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar19 = *(long *)(lVar7 + -8);
  sVar13 = *(size_t *)(lVar19 + 0x40);
  if (*(int *)(lVar19 + 0x54) == 0) {
    sVar13 = sVar13 + 1;
  }
  lVar8 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x30),*(undefined8 *)(param_3 + 0x18),puVar6,puVar5);
  lVar22 = *(long *)(lVar8 + -8);
  uVar3 = *(uint *)(lVar22 + 0x50);
  uVar17 = (ulong)uVar3 & 0xff;
  uVar1 = sVar13 + uVar17;
  sVar14 = *(size_t *)(lVar22 + 0x40);
  if (*(int *)(lVar22 + 0x54) == 0) {
    sVar14 = sVar14 + 1;
  }
  lVar9 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x38),*(undefined8 *)(param_3 + 0x20),puVar6,puVar5);
  lVar21 = *(long *)(lVar9 + -8);
  uVar16 = (ulong)*(uint *)(lVar21 + 0x50) & 0xff;
  lVar2 = sVar14 + uVar16;
  sVar15 = *(size_t *)(lVar21 + 0x40);
  if (*(int *)(lVar21 + 0x54) == 0) {
    sVar15 = sVar15 + 1;
  }
  uVar4 = uVar3 | *(uint *)(lVar19 + 0x50) | *(uint *)(lVar21 + 0x50);
  uVar3 = uVar4 & 0xff;
  if ((uVar3 < 8 &&
      sVar15 + (lVar2 + (uVar1 & (uVar17 ^ 0xffffffffffffffff)) & (uVar16 ^ 0xffffffffffffffff)) <
      0x19) && (uVar4 & 0x100000) == 0) {
    plVar10 = param_2;
    (**(code **)(lVar19 + 0x30))(param_2,1,lVar7);
    if ((int)plVar10 == 0) {
      (**(code **)(lVar19 + 0x10))(param_1,param_2,lVar7);
      (**(code **)(lVar19 + 0x38))(param_1,0,1,lVar7);
    }
    else {
      _memcpy(param_1,param_2,sVar13);
    }
    uVar16 = ~uVar16;
    pvVar20 = (void *)(uVar1 + (long)param_1 & ~uVar17);
    pvVar18 = (void *)(uVar1 + (long)param_2 & ~uVar17);
    pvVar11 = pvVar18;
    (**(code **)(lVar22 + 0x30))(pvVar18,1,lVar8);
    if ((int)pvVar11 == 0) {
      (**(code **)(lVar22 + 0x10))(pvVar20,pvVar18,lVar8);
      (**(code **)(lVar22 + 0x38))(pvVar20,0,1,lVar8);
    }
    else {
      _memcpy(pvVar20,pvVar18,sVar14);
    }
    uVar1 = lVar2 + (long)pvVar20;
    uVar17 = lVar2 + (long)pvVar18;
    uVar12 = uVar17 & uVar16;
    (**(code **)(lVar21 + 0x30))(uVar12,1,lVar9);
    if ((int)uVar12 == 0) {
      (**(code **)(lVar21 + 0x10))(uVar1 & uVar16,uVar17 & uVar16,lVar9);
      (**(code **)(lVar21 + 0x38))(uVar1 & uVar16,0,1,lVar9);
    }
    else {
      _memcpy((void *)(uVar1 & uVar16),(void *)(uVar17 & uVar16),sVar15);
    }
  }
  else {
    lVar7 = *param_2;
    *param_1 = lVar7;
    param_1 = (long *)(lVar7 + ((ulong)uVar3 + 0x10 & ((ulong)uVar3 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x10070f0b8 | FUN_10070f0b8 */

void FUN_10070f0b8(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar4 = *(long *)(lVar2 + -8);
  lVar6 = param_1;
  (**(code **)(lVar4 + 0x30))(param_1,1,lVar2);
  if ((int)lVar6 == 0) {
    (**(code **)(lVar4 + 8))(param_1,lVar2);
  }
  iVar1 = *(int *)(lVar4 + 0x54);
  lVar6 = *(long *)(lVar4 + 0x40);
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x18),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar4 = *(long *)(lVar2 + -8);
  lVar6 = lVar6 + param_1;
  if (iVar1 == 0) {
    lVar6 = lVar6 + 1;
  }
  uVar3 = lVar6 + (ulong)*(byte *)(lVar4 + 0x50) &
          ((ulong)*(byte *)(lVar4 + 0x50) ^ 0xffffffffffffffff);
  uVar5 = uVar3;
  (**(code **)(lVar4 + 0x30))(uVar3,1,lVar2);
  if ((int)uVar5 == 0) {
    (**(code **)(lVar4 + 8))(uVar3,lVar2);
  }
  iVar1 = *(int *)(lVar4 + 0x54);
  lVar6 = *(long *)(lVar4 + 0x40);
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x38),*(undefined8 *)(param_2 + 0x20),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar4 = *(long *)(lVar2 + -8);
  uVar5 = (ulong)*(byte *)(lVar4 + 0x50);
  lVar6 = lVar6 + uVar3;
  if (iVar1 == 0) {
    lVar6 = lVar6 + 1;
  }
  uVar3 = lVar6 + uVar5 & (uVar5 ^ 0xffffffffffffffff);
  (**(code **)(lVar4 + 0x30))(uVar3,1,lVar2);
  if ((int)uVar3 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010070f220. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))(lVar6 + uVar5 & (uVar5 ^ 0xffffffffffffffff),lVar2);
  return;
}



/* Address: 0x10070f224 | FUN_10070f224 */

void * FUN_10070f224(void *param_1,void *param_2,long param_3)

{
  ulong uVar1;
  size_t sVar2;
  long lVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  void *pvVar7;
  int iVar8;
  void *pvVar9;
  long lVar10;
  size_t sVar11;
  ulong uVar12;
  
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar10 = *(long *)(lVar3 + -8);
  pvVar4 = param_2;
  (**(code **)(lVar10 + 0x30))(param_2,1,lVar3);
  if ((int)pvVar4 == 0) {
    (**(code **)(lVar10 + 0x10))(param_1,param_2,lVar3);
    (**(code **)(lVar10 + 0x38))(param_1,0,1,lVar3);
    iVar8 = *(int *)(lVar10 + 0x54);
    sVar11 = *(size_t *)(lVar10 + 0x40);
  }
  else {
    iVar8 = *(int *)(lVar10 + 0x54);
    sVar11 = *(size_t *)(lVar10 + 0x40);
    sVar2 = sVar11;
    if (iVar8 == 0) {
      sVar2 = sVar11 + 1;
    }
    _memcpy(param_1,param_2,sVar2);
  }
  if (iVar8 == 0) {
    sVar11 = sVar11 + 1;
  }
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x30),*(undefined8 *)(param_3 + 0x18),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar10 = *(long *)(lVar3 + -8);
  uVar6 = (ulong)*(byte *)(lVar10 + 0x50);
  pvVar9 = (void *)(sVar11 + uVar6 + (long)param_1 & (uVar6 ^ 0xffffffffffffffff));
  pvVar7 = (void *)(sVar11 + uVar6 + (long)param_2 & (uVar6 ^ 0xffffffffffffffff));
  pvVar4 = pvVar7;
  (**(code **)(lVar10 + 0x30))(pvVar7,1,lVar3);
  if ((int)pvVar4 == 0) {
    (**(code **)(lVar10 + 0x10))(pvVar9,pvVar7,lVar3);
    (**(code **)(lVar10 + 0x38))(pvVar9,0,1,lVar3);
    iVar8 = *(int *)(lVar10 + 0x54);
    sVar11 = *(size_t *)(lVar10 + 0x40);
  }
  else {
    iVar8 = *(int *)(lVar10 + 0x54);
    sVar11 = *(size_t *)(lVar10 + 0x40);
    sVar2 = sVar11;
    if (iVar8 == 0) {
      sVar2 = sVar11 + 1;
    }
    _memcpy(pvVar9,pvVar7,sVar2);
  }
  if (iVar8 == 0) {
    sVar11 = sVar11 + 1;
  }
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x38),*(undefined8 *)(param_3 + 0x20),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar10 = *(long *)(lVar3 + -8);
  uVar12 = (ulong)*(byte *)(lVar10 + 0x50);
  uVar6 = sVar11 + uVar12 + (long)pvVar9;
  uVar1 = sVar11 + uVar12 + (long)pvVar7;
  uVar5 = uVar1 & (uVar12 ^ 0xffffffffffffffff);
  (**(code **)(lVar10 + 0x30))(uVar5,1,lVar3);
  if ((int)uVar5 == 0) {
    (**(code **)(lVar10 + 0x10))
              (uVar6 & (uVar12 ^ 0xffffffffffffffff),uVar1 & (uVar12 ^ 0xffffffffffffffff),lVar3);
    (**(code **)(lVar10 + 0x38))(uVar6 & (uVar12 ^ 0xffffffffffffffff),0,1,lVar3);
  }
  else {
    sVar11 = *(size_t *)(lVar10 + 0x40);
    if (*(int *)(lVar10 + 0x54) == 0) {
      sVar11 = sVar11 + 1;
    }
    _memcpy((void *)(uVar6 & (uVar12 ^ 0xffffffffffffffff)),
            (void *)(uVar1 & (uVar12 ^ 0xffffffffffffffff)),sVar11);
  }
  return param_1;
}



/* Address: 0x10070f450 | FUN_10070f450 */

void * FUN_10070f450(void *param_1,void *param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  size_t sVar8;
  void *pvVar9;
  void *pvVar10;
  ulong uVar11;
  long lVar12;
  code *pcVar13;
  long lVar14;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar12 = *(long *)(lVar2 + -8);
  pcVar13 = *(code **)(lVar12 + 0x30);
  pvVar3 = param_1;
  (*pcVar13)(param_1,1,lVar2);
  pvVar4 = param_2;
  (*pcVar13)(param_2,1,lVar2);
  if ((int)pvVar3 == 0) {
    if ((int)pvVar4 != 0) {
      (**(code **)(lVar12 + 8))(param_1,lVar2);
      goto LAB_10070f510;
    }
    (**(code **)(lVar12 + 0x18))(param_1,param_2,lVar2);
  }
  else if ((int)pvVar4 == 0) {
    (**(code **)(lVar12 + 0x10))(param_1,param_2,lVar2);
    (**(code **)(lVar12 + 0x38))(param_1,0,1,lVar2);
  }
  else {
LAB_10070f510:
    sVar8 = *(size_t *)(lVar12 + 0x40);
    if (*(int *)(lVar12 + 0x54) == 0) {
      sVar8 = sVar8 + 1;
    }
    _memcpy(param_1,param_2,sVar8);
  }
  lVar2 = *(long *)(lVar12 + 0x40);
  if (*(int *)(lVar12 + 0x54) == 0) {
    lVar2 = lVar2 + 1;
  }
  lVar12 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x30),*(undefined8 *)(param_3 + 0x18),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar14 = *(long *)(lVar12 + -8);
  uVar7 = (ulong)*(byte *)(lVar14 + 0x50);
  pvVar10 = (void *)(lVar2 + uVar7 + (long)param_1 & (uVar7 ^ 0xffffffffffffffff));
  pvVar9 = (void *)(lVar2 + uVar7 + (long)param_2 & (uVar7 ^ 0xffffffffffffffff));
  pcVar13 = *(code **)(lVar14 + 0x30);
  pvVar3 = pvVar10;
  (*pcVar13)(pvVar10,1,lVar12);
  pvVar4 = pvVar9;
  (*pcVar13)(pvVar9,1,lVar12);
  if ((int)pvVar3 == 0) {
    if ((int)pvVar4 == 0) {
      (**(code **)(lVar14 + 0x18))(pvVar10,pvVar9,lVar12);
      goto LAB_10070f60c;
    }
    (**(code **)(lVar14 + 8))(pvVar10,lVar12);
  }
  else if ((int)pvVar4 == 0) {
    (**(code **)(lVar14 + 0x10))(pvVar10,pvVar9,lVar12);
    (**(code **)(lVar14 + 0x38))(pvVar10,0,1,lVar12);
    goto LAB_10070f60c;
  }
  sVar8 = *(size_t *)(lVar14 + 0x40);
  if (*(int *)(lVar14 + 0x54) == 0) {
    sVar8 = sVar8 + 1;
  }
  _memcpy(pvVar10,pvVar9,sVar8);
LAB_10070f60c:
  lVar2 = *(long *)(lVar14 + 0x40);
  if (*(int *)(lVar14 + 0x54) == 0) {
    lVar2 = lVar2 + 1;
  }
  lVar12 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x38),*(undefined8 *)(param_3 + 0x20),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar14 = *(long *)(lVar12 + -8);
  uVar11 = (ulong)*(byte *)(lVar14 + 0x50);
  uVar7 = lVar2 + uVar11 + (long)pvVar10;
  uVar1 = lVar2 + uVar11 + (long)pvVar9;
  pcVar13 = *(code **)(lVar14 + 0x30);
  uVar5 = uVar7 & (uVar11 ^ 0xffffffffffffffff);
  (*pcVar13)(uVar5,1,lVar12);
  uVar6 = uVar1 & (uVar11 ^ 0xffffffffffffffff);
  (*pcVar13)(uVar6,1,lVar12);
  if ((int)uVar5 == 0) {
    if ((int)uVar6 == 0) {
      (**(code **)(lVar14 + 0x18))
                (uVar7 & (uVar11 ^ 0xffffffffffffffff),uVar1 & (uVar11 ^ 0xffffffffffffffff),lVar12)
      ;
      return param_1;
    }
    (**(code **)(lVar14 + 8))(uVar7 & (uVar11 ^ 0xffffffffffffffff),lVar12);
  }
  else if ((int)uVar6 == 0) {
    (**(code **)(lVar14 + 0x10))
              (uVar7 & (uVar11 ^ 0xffffffffffffffff),uVar1 & (uVar11 ^ 0xffffffffffffffff),lVar12);
    (**(code **)(lVar14 + 0x38))(uVar7 & (uVar11 ^ 0xffffffffffffffff),0,1,lVar12);
    return param_1;
  }
  sVar8 = *(size_t *)(lVar14 + 0x40);
  if (*(int *)(lVar14 + 0x54) == 0) {
    sVar8 = sVar8 + 1;
  }
  _memcpy((void *)(uVar7 & (uVar11 ^ 0xffffffffffffffff)),
          (void *)(uVar1 & (uVar11 ^ 0xffffffffffffffff)),sVar8);
  return param_1;
}



/* Address: 0x10070f748 | FUN_10070f748 */

void * FUN_10070f748(void *param_1,void *param_2,long param_3)

{
  ulong uVar1;
  size_t sVar2;
  long lVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  void *pvVar7;
  int iVar8;
  void *pvVar9;
  long lVar10;
  size_t sVar11;
  ulong uVar12;
  
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar10 = *(long *)(lVar3 + -8);
  pvVar4 = param_2;
  (**(code **)(lVar10 + 0x30))(param_2,1,lVar3);
  if ((int)pvVar4 == 0) {
    (**(code **)(lVar10 + 0x20))(param_1,param_2,lVar3);
    (**(code **)(lVar10 + 0x38))(param_1,0,1,lVar3);
    iVar8 = *(int *)(lVar10 + 0x54);
    sVar11 = *(size_t *)(lVar10 + 0x40);
  }
  else {
    iVar8 = *(int *)(lVar10 + 0x54);
    sVar11 = *(size_t *)(lVar10 + 0x40);
    sVar2 = sVar11;
    if (iVar8 == 0) {
      sVar2 = sVar11 + 1;
    }
    _memcpy(param_1,param_2,sVar2);
  }
  if (iVar8 == 0) {
    sVar11 = sVar11 + 1;
  }
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x30),*(undefined8 *)(param_3 + 0x18),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar10 = *(long *)(lVar3 + -8);
  uVar6 = (ulong)*(byte *)(lVar10 + 0x50);
  pvVar9 = (void *)(sVar11 + uVar6 + (long)param_1 & (uVar6 ^ 0xffffffffffffffff));
  pvVar7 = (void *)(sVar11 + uVar6 + (long)param_2 & (uVar6 ^ 0xffffffffffffffff));
  pvVar4 = pvVar7;
  (**(code **)(lVar10 + 0x30))(pvVar7,1,lVar3);
  if ((int)pvVar4 == 0) {
    (**(code **)(lVar10 + 0x20))(pvVar9,pvVar7,lVar3);
    (**(code **)(lVar10 + 0x38))(pvVar9,0,1,lVar3);
    iVar8 = *(int *)(lVar10 + 0x54);
    sVar11 = *(size_t *)(lVar10 + 0x40);
  }
  else {
    iVar8 = *(int *)(lVar10 + 0x54);
    sVar11 = *(size_t *)(lVar10 + 0x40);
    sVar2 = sVar11;
    if (iVar8 == 0) {
      sVar2 = sVar11 + 1;
    }
    _memcpy(pvVar9,pvVar7,sVar2);
  }
  if (iVar8 == 0) {
    sVar11 = sVar11 + 1;
  }
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x38),*(undefined8 *)(param_3 + 0x20),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar10 = *(long *)(lVar3 + -8);
  uVar12 = (ulong)*(byte *)(lVar10 + 0x50);
  uVar6 = sVar11 + uVar12 + (long)pvVar9;
  uVar1 = sVar11 + uVar12 + (long)pvVar7;
  uVar5 = uVar1 & (uVar12 ^ 0xffffffffffffffff);
  (**(code **)(lVar10 + 0x30))(uVar5,1,lVar3);
  if ((int)uVar5 == 0) {
    (**(code **)(lVar10 + 0x20))
              (uVar6 & (uVar12 ^ 0xffffffffffffffff),uVar1 & (uVar12 ^ 0xffffffffffffffff),lVar3);
    (**(code **)(lVar10 + 0x38))(uVar6 & (uVar12 ^ 0xffffffffffffffff),0,1,lVar3);
  }
  else {
    sVar11 = *(size_t *)(lVar10 + 0x40);
    if (*(int *)(lVar10 + 0x54) == 0) {
      sVar11 = sVar11 + 1;
    }
    _memcpy((void *)(uVar6 & (uVar12 ^ 0xffffffffffffffff)),
            (void *)(uVar1 & (uVar12 ^ 0xffffffffffffffff)),sVar11);
  }
  return param_1;
}



/* Address: 0x10070f974 | FUN_10070f974 */

void * FUN_10070f974(void *param_1,void *param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  size_t sVar8;
  void *pvVar9;
  void *pvVar10;
  ulong uVar11;
  long lVar12;
  code *pcVar13;
  long lVar14;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar12 = *(long *)(lVar2 + -8);
  pcVar13 = *(code **)(lVar12 + 0x30);
  pvVar3 = param_1;
  (*pcVar13)(param_1,1,lVar2);
  pvVar4 = param_2;
  (*pcVar13)(param_2,1,lVar2);
  if ((int)pvVar3 == 0) {
    if ((int)pvVar4 != 0) {
      (**(code **)(lVar12 + 8))(param_1,lVar2);
      goto LAB_10070fa34;
    }
    (**(code **)(lVar12 + 0x28))(param_1,param_2,lVar2);
  }
  else if ((int)pvVar4 == 0) {
    (**(code **)(lVar12 + 0x20))(param_1,param_2,lVar2);
    (**(code **)(lVar12 + 0x38))(param_1,0,1,lVar2);
  }
  else {
LAB_10070fa34:
    sVar8 = *(size_t *)(lVar12 + 0x40);
    if (*(int *)(lVar12 + 0x54) == 0) {
      sVar8 = sVar8 + 1;
    }
    _memcpy(param_1,param_2,sVar8);
  }
  lVar2 = *(long *)(lVar12 + 0x40);
  if (*(int *)(lVar12 + 0x54) == 0) {
    lVar2 = lVar2 + 1;
  }
  lVar12 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x30),*(undefined8 *)(param_3 + 0x18),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar14 = *(long *)(lVar12 + -8);
  uVar7 = (ulong)*(byte *)(lVar14 + 0x50);
  pvVar10 = (void *)(lVar2 + uVar7 + (long)param_1 & (uVar7 ^ 0xffffffffffffffff));
  pvVar9 = (void *)(lVar2 + uVar7 + (long)param_2 & (uVar7 ^ 0xffffffffffffffff));
  pcVar13 = *(code **)(lVar14 + 0x30);
  pvVar3 = pvVar10;
  (*pcVar13)(pvVar10,1,lVar12);
  pvVar4 = pvVar9;
  (*pcVar13)(pvVar9,1,lVar12);
  if ((int)pvVar3 == 0) {
    if ((int)pvVar4 == 0) {
      (**(code **)(lVar14 + 0x28))(pvVar10,pvVar9,lVar12);
      goto LAB_10070fb30;
    }
    (**(code **)(lVar14 + 8))(pvVar10,lVar12);
  }
  else if ((int)pvVar4 == 0) {
    (**(code **)(lVar14 + 0x20))(pvVar10,pvVar9,lVar12);
    (**(code **)(lVar14 + 0x38))(pvVar10,0,1,lVar12);
    goto LAB_10070fb30;
  }
  sVar8 = *(size_t *)(lVar14 + 0x40);
  if (*(int *)(lVar14 + 0x54) == 0) {
    sVar8 = sVar8 + 1;
  }
  _memcpy(pvVar10,pvVar9,sVar8);
LAB_10070fb30:
  lVar2 = *(long *)(lVar14 + 0x40);
  if (*(int *)(lVar14 + 0x54) == 0) {
    lVar2 = lVar2 + 1;
  }
  lVar12 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x38),*(undefined8 *)(param_3 + 0x20),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar14 = *(long *)(lVar12 + -8);
  uVar11 = (ulong)*(byte *)(lVar14 + 0x50);
  uVar7 = lVar2 + uVar11 + (long)pvVar10;
  uVar1 = lVar2 + uVar11 + (long)pvVar9;
  pcVar13 = *(code **)(lVar14 + 0x30);
  uVar5 = uVar7 & (uVar11 ^ 0xffffffffffffffff);
  (*pcVar13)(uVar5,1,lVar12);
  uVar6 = uVar1 & (uVar11 ^ 0xffffffffffffffff);
  (*pcVar13)(uVar6,1,lVar12);
  if ((int)uVar5 == 0) {
    if ((int)uVar6 == 0) {
      (**(code **)(lVar14 + 0x28))
                (uVar7 & (uVar11 ^ 0xffffffffffffffff),uVar1 & (uVar11 ^ 0xffffffffffffffff),lVar12)
      ;
      return param_1;
    }
    (**(code **)(lVar14 + 8))(uVar7 & (uVar11 ^ 0xffffffffffffffff),lVar12);
  }
  else if ((int)uVar6 == 0) {
    (**(code **)(lVar14 + 0x20))
              (uVar7 & (uVar11 ^ 0xffffffffffffffff),uVar1 & (uVar11 ^ 0xffffffffffffffff),lVar12);
    (**(code **)(lVar14 + 0x38))(uVar7 & (uVar11 ^ 0xffffffffffffffff),0,1,lVar12);
    return param_1;
  }
  sVar8 = *(size_t *)(lVar14 + 0x40);
  if (*(int *)(lVar14 + 0x54) == 0) {
    sVar8 = sVar8 + 1;
  }
  _memcpy((void *)(uVar7 & (uVar11 ^ 0xffffffffffffffff)),
          (void *)(uVar1 & (uVar11 ^ 0xffffffffffffffff)),sVar8);
  return param_1;
}



/* Address: 0x10070fc6c | FUN_10070fc6c */

int FUN_10070fc6c(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  uint uVar20;
  uint uVar21;
  long lVar22;
  long lVar23;
  
  puVar6 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar5 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8;
  lVar9 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar23 = *(long *)(lVar9 + -8);
  iVar7 = *(int *)(lVar23 + 0x54);
  uVar2 = 0;
  if (iVar7 != 0) {
    uVar2 = iVar7 - 1;
  }
  lVar10 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x30),*(undefined8 *)(param_3 + 0x18),puVar6,puVar5);
  lVar22 = *(long *)(lVar10 + -8);
  iVar8 = *(int *)(lVar22 + 0x54);
  uVar14 = 0;
  if (iVar8 != 0) {
    uVar14 = iVar8 - 1;
  }
  uVar4 = uVar14;
  if (uVar14 <= uVar2) {
    uVar4 = uVar2;
  }
  lVar11 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x38),*(undefined8 *)(param_3 + 0x20),puVar6,puVar5);
  lVar13 = *(long *)(lVar11 + -8);
  iVar3 = *(int *)(lVar13 + 0x54);
  uVar1 = 0;
  if (iVar3 != 0) {
    uVar1 = iVar3 - 1;
  }
  if (uVar1 <= uVar4) {
    uVar1 = uVar4;
  }
  lVar15 = *(long *)(lVar23 + 0x40);
  if (iVar7 == 0) {
    lVar15 = lVar15 + 1;
  }
  lVar16 = *(long *)(lVar22 + 0x40);
  if (iVar8 == 0) {
    lVar16 = lVar16 + 1;
  }
  lVar18 = *(long *)(lVar13 + 0x40);
  if (iVar3 == 0) {
    lVar18 = lVar18 + 1;
  }
  if (param_2 == 0) {
    return 0;
  }
  uVar19 = (ulong)*(byte *)(lVar22 + 0x50);
  uVar17 = (ulong)*(byte *)(lVar13 + 0x50);
  if (uVar1 <= param_2 && param_2 - uVar1 != 0) {
    lVar18 = lVar18 + (lVar16 + uVar17 + (lVar15 + uVar19 & (uVar19 ^ 0xffffffffffffffff)) &
                      (uVar17 ^ 0xffffffffffffffff));
    uVar20 = (uint)lVar18;
    uVar4 = uVar20 << 3;
    if (uVar20 < 4) {
      uVar21 = ((param_2 - uVar1) + ~(-1 << (ulong)(uVar4 & 0x1f)) >> (ulong)(uVar4 & 0x1f)) + 1;
      if (0xff < uVar21) {
        if (uVar21 >> 0x10 == 0) {
          uVar21 = (uint)*(ushort *)((long)param_1 + lVar18);
        }
        else {
          uVar21 = *(uint *)((long)param_1 + lVar18);
        }
        goto LAB_10070fda4;
      }
      if (1 < uVar21) goto LAB_10070fda0;
    }
    else {
LAB_10070fda0:
      uVar21 = (uint)*(byte *)((long)param_1 + lVar18);
LAB_10070fda4:
      if (uVar21 != 0) {
        uVar2 = 0;
        if (uVar20 < 4) {
          uVar2 = uVar21 - 1 << (ulong)(uVar4 & 0x1f);
        }
        if (uVar20 == 0) {
          uVar14 = 0;
        }
        else {
          uVar14 = 4;
          if (uVar20 < 4) {
            uVar14 = uVar20;
          }
          if ((int)uVar14 < 3) {
            if (uVar14 == 1) {
              uVar14 = (uint)(byte)*param_1;
            }
            else {
              uVar14 = (uint)(ushort)*param_1;
            }
          }
          else if (uVar14 == 3) {
            uVar14 = (uint)(uint3)*param_1;
          }
          else {
            uVar14 = *param_1;
          }
        }
        return uVar1 + (uVar14 | uVar2) + 1;
      }
    }
    if (uVar1 == 0) {
      return 0;
    }
  }
  if (uVar2 == uVar1) {
    pcVar12 = *(code **)(lVar23 + 0x30);
    lVar10 = lVar9;
    iVar8 = iVar7;
  }
  else {
    param_1 = (uint *)((ulong)(lVar15 + uVar19 + (long)param_1) & ~uVar19);
    if (uVar14 != uVar1) {
      uVar17 = (ulong)((long)param_1 + uVar17 + lVar16) & ~uVar17;
      (**(code **)(lVar13 + 0x30))(uVar17,iVar3,lVar11);
      iVar7 = (int)uVar17;
      goto LAB_10070fe70;
    }
    pcVar12 = *(code **)(lVar22 + 0x30);
  }
  (*pcVar12)(param_1,iVar8,lVar10);
  iVar7 = (int)param_1;
LAB_10070fe70:
  iVar8 = 0;
  if (iVar7 != 0) {
    iVar8 = iVar7 + -1;
  }
  return iVar8;
}



/* Address: 0x10070feec | FUN_10070feec */

void FUN_10070feec(uint *param_1,uint param_2,uint param_3,long param_4)

{
  uint uVar1;
  size_t sVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined2 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  int iVar13;
  code *UNRECOVERED_JUMPTABLE;
  long lVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  size_t sVar20;
  int iVar21;
  long lVar22;
  long lVar23;
  uint uVar24;
  byte bVar25;
  
  puVar8 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar7 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8;
  lVar9 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 0x28),*(undefined8 *)(param_4 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar22 = *(long *)(lVar9 + -8);
  iVar21 = *(int *)(lVar22 + 0x54);
  uVar15 = 0;
  if (iVar21 != 0) {
    uVar15 = iVar21 - 1;
  }
  lVar10 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 0x30),*(undefined8 *)(param_4 + 0x18),puVar8,puVar7);
  lVar23 = *(long *)(lVar10 + -8);
  iVar5 = *(int *)(lVar23 + 0x54);
  uVar12 = 0;
  if (iVar5 != 0) {
    uVar12 = iVar5 - 1;
  }
  uVar24 = uVar12;
  if (uVar12 <= uVar15) {
    uVar24 = uVar15;
  }
  lVar11 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 0x38),*(undefined8 *)(param_4 + 0x20),puVar8,puVar7);
  bVar25 = 0;
  lVar14 = *(long *)(lVar11 + -8);
  iVar13 = *(int *)(lVar14 + 0x54);
  uVar3 = 0;
  if (iVar13 != 0) {
    uVar3 = iVar13 - 1;
  }
  uVar4 = uVar3;
  if (uVar3 <= uVar24) {
    uVar4 = uVar24;
  }
  lVar16 = *(long *)(lVar22 + 0x40);
  if (iVar21 == 0) {
    lVar16 = lVar16 + 1;
  }
  lVar17 = *(long *)(lVar23 + 0x40);
  if (iVar5 == 0) {
    lVar17 = lVar17 + 1;
  }
  uVar19 = (ulong)*(byte *)(lVar23 + 0x50);
  uVar18 = (ulong)*(byte *)(lVar14 + 0x50);
  sVar20 = *(size_t *)(lVar14 + 0x40);
  if (iVar13 == 0) {
    sVar20 = sVar20 + 1;
  }
  sVar2 = (lVar17 + uVar18 + (lVar16 + uVar19 & (uVar19 ^ 0xffffffffffffffff)) &
          (uVar18 ^ 0xffffffffffffffff)) + sVar20;
  uVar24 = (uint)sVar2;
  if (uVar4 <= param_3 && param_3 - uVar4 != 0) {
    if (uVar24 < 4) {
      uVar1 = ((param_3 - uVar4) + ~(-1 << (ulong)(uVar24 << 3 & 0x1f)) >>
              (ulong)(uVar24 << 3 & 0x1f)) + 1;
      bVar25 = 2;
      if (0xffff < uVar1) {
        bVar25 = 4;
      }
      if (uVar1 < 0x100) {
        bVar25 = 1 < uVar1;
      }
    }
    else {
      bVar25 = 1;
    }
  }
  if (uVar4 < param_2) {
    param_2 = param_2 + ~uVar4;
    if (uVar24 < 4) {
      iVar21 = (param_2 >> (ulong)(uVar24 << 3 & 0x1f)) + 1;
      if (uVar24 != 0) {
        uVar15 = param_2 & (-1 << (ulong)(uVar24 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar2);
        uVar6 = (undefined2)uVar15;
        if (uVar24 == 3) {
          *(undefined2 *)param_1 = uVar6;
          *(char *)((long)param_1 + 2) = (char)(uVar15 >> 0x10);
        }
        else if (uVar24 == 2) {
          *(undefined2 *)param_1 = uVar6;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      _bzero(param_1,sVar2);
      *param_1 = param_2;
      iVar21 = 1;
    }
    if (bVar25 < 2) {
      if (bVar25 != 0) {
        *(char *)((long)param_1 + sVar2) = (char)iVar21;
      }
    }
    else if (bVar25 == 2) {
      *(short *)((long)param_1 + sVar2) = (short)iVar21;
    }
    else {
      *(int *)((long)param_1 + sVar2) = iVar21;
    }
  }
  else {
    if (bVar25 < 2) {
      if (bVar25 != 0) {
        *(undefined1 *)((long)param_1 + sVar2) = 0;
      }
    }
    else if (bVar25 == 2) {
      *(undefined2 *)((long)param_1 + sVar2) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar2) = 0;
    }
    if (param_2 != 0) {
      if (uVar15 == uVar4) {
        UNRECOVERED_JUMPTABLE = *(code **)(lVar22 + 0x38);
        lVar11 = lVar9;
        iVar13 = iVar21;
      }
      else {
        param_1 = (uint *)(lVar16 + uVar19 + (long)param_1 & ~uVar19);
        if (uVar12 == uVar4) {
          UNRECOVERED_JUMPTABLE = *(code **)(lVar23 + 0x38);
          lVar11 = lVar10;
          iVar13 = iVar5;
        }
        else {
          param_1 = (uint *)((long)param_1 + uVar18 + lVar17 & ~uVar18);
          if (uVar3 < param_2) {
            uVar12 = (uint)sVar20;
            uVar15 = 0xffffffff;
            if (uVar12 < 4) {
              uVar15 = ~(-1 << (ulong)((uVar12 & 3) << 3));
            }
            if (uVar12 == 0) {
              return;
            }
            uVar15 = uVar15 & (uVar3 - param_2 ^ 0xffffffff);
            uVar24 = 4;
            if (uVar12 < 4) {
              uVar24 = uVar12;
            }
            _bzero(param_1,sVar20);
            if ((int)uVar24 < 3) {
              if (uVar24 == 1) {
                *(char *)param_1 = (char)uVar15;
                return;
              }
              *(short *)param_1 = (short)uVar15;
              return;
            }
            if (uVar24 == 3) {
              *(short *)param_1 = (short)uVar15;
              *(char *)((long)param_1 + 2) = (char)(uVar15 >> 0x10);
              return;
            }
            *param_1 = uVar15;
            return;
          }
          UNRECOVERED_JUMPTABLE = *(code **)(lVar14 + 0x38);
        }
      }
                    /* WARNING: Could not recover jumptable at 0x00010071024c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1,param_2 + 1,iVar13,lVar11);
      return;
    }
  }
  return;
}



/* Address: 0x100710278 | FUN_100710278 */

void FUN_100710278(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar3 = *(long *)(param_5 + -8);
  lVar2 = (long)&local_80 - (*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar3 + 0x10))(lVar2);
  (**(code **)(lVar3 + 0x20))(param_1,lVar2,param_5);
  lVar2 = 0;
  local_80 = param_5;
  uStack_78 = param_6;
  local_70 = param_7;
  uStack_68 = param_8;
  FUN_1007103cc(0,&local_80);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar2 + 0x34));
  *puVar1 = param_3;
  puVar1[1] = param_4;
  _swift_retain(param_4);
  return;
}



/* Address: 0x100710340 | FUN_100710340 */

void FUN_100710340(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  long lVar2;
  long local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  (**(code **)(*(long *)(param_5 + -8) + 0x20))(param_1,param_2,param_5);
  lVar2 = 0;
  local_70 = param_5;
  uStack_68 = param_6;
  local_60 = param_7;
  uStack_58 = param_8;
  FUN_1007103cc(0,&local_70);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar2 + 0x34));
  *puVar1 = param_3;
  puVar1[1] = param_4;
  return;
}



/* Address: 0x1007103cc | FUN_1007103cc */

void FUN_1007103cc(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetStructDescriptor_100cbd240);
  return;
}



/* Address: 0x1007103d8 | FUN_1007103d8 */

void FUN_1007103d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _swift_getAssociatedTypeWitness
            (0xff,param_5,param_4,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  uVar1 = 0;
  Swift::Array<undefined>::typeMetadataAccessor();
  _swift_getWitnessTable
            (PTR_Swift__Swift__Array<undefined>_>Swift__RangeReplaceableCollection_100eac550,uVar1);
  FUN_100710278(param_1);
  return;
}


