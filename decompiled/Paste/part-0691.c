/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100774fb8 | FUN_100774fb8 */

void FUN_100774fb8(long param_1)

{
  Optional OVar1;
  long lVar2;
  undefined7 extraout_var;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long local_90;
  long local_88;
  undefined8 local_80;
  long lStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar4 = *(long *)(param_1 + 0x18);
  local_88 = *(long *)(lVar4 + -8);
  lVar7 = (long)&local_90 - (*(long *)(local_88 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  lVar2 = 0xff;
  local_90 = lVar7;
  _swift_getAssociatedTypeWitness
            (0xff,uVar6,lVar4,PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Duration_100eaeaf0);
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lVar8 = *(long *)(CONCAT71(extraout_var,OVar1.value) + -8);
  lVar7 = lVar7 - (*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = *(long *)(lVar2 + -8);
  lVar3 = *(long *)(lVar5 + 0x40);
  local_80 = *(undefined8 *)(param_1 + 0x10);
  local_70 = *(undefined8 *)(param_1 + 0x20);
  lStack_78 = lVar4;
  uStack_68 = uVar6;
  FUN_100786c0c(0,&local_80);
  (**(code **)(lVar5 + 0x10))
            (lVar7 - (lVar3 + 0xfU & 0xfffffffffffffff0),unaff_x20 + *(int *)(param_1 + 0x38),lVar2)
  ;
  (**(code **)(lVar8 + 0x10))
            (lVar7,unaff_x20 + *(int *)(param_1 + 0x3c),CONCAT71(extraout_var,OVar1.value));
  (**(code **)(local_88 + 0x10))(local_90,unaff_x20 + *(int *)(param_1 + 0x34),lVar4);
  FUN_100787470();
  FUN_10077511c();
  return;
}



/* Address: 0x10077511c | FUN_10077511c */

void FUN_10077511c(long *param_1)

{
  long lVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar1 = *param_1;
  uStack_38 = *(undefined8 *)(lVar1 + 0x58);
  local_40 = *(undefined8 *)(lVar1 + 0x50);
  uStack_28 = *(undefined8 *)(lVar1 + 0x68);
  uStack_30 = *(undefined8 *)(lVar1 + 0x60);
  lVar1 = 0;
  FUN_1007762c4(0,&local_40);
  _swift_allocObject();
  *(long **)(lVar1 + 0x10) = param_1;
  return;
}



/* Address: 0x100775168 | FUN_100775168 */

void FUN_100775168(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_2;
  FUN_100774fb8();
  (**(code **)(*(long *)(param_2 + -8) + 8))();
  *param_1 = lVar1;
  return;
}



/* Address: 0x1007751b0 | FUN_1007751b0 */

void FUN_1007751b0(void)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  _swift_retain(uVar1);
  FUN_10078318c();
  _swift_release(uVar1);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1007751f0 | FUN_1007751f0 */

void FUN_1007751f0(void)

{
  FUN_1007751b0();
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100775210 | FUN_100775210 */

void FUN_100775210(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = unaff_x20;
  _swift_task_switch(FUN_100775228,0,0);
  return;
}



/* Address: 0x100775228 | FUN_100775228 */

void FUN_100775228(void)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)&DAT_00000030;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x20) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100758850;
  FUN_1007833a4(plVar1,*(undefined8 *)(unaff_x22 + 0x10));
  return;
}



/* Address: 0x100775284 | FUN_100775284 */

void FUN_100775284(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = unaff_x20;
  _swift_task_switch(FUN_10077529c,0,0);
  return;
}



/* Address: 0x10077529c | FUN_10077529c */

void FUN_10077529c(void)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)&DAT_00000030;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x20) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_100758850;
  FUN_100775210(plVar1,*(undefined8 *)(unaff_x22 + 0x10));
  return;
}



/* Address: 0x1007752f8 | FUN_1007752f8 */

void FUN_1007752f8(undefined8 param_1)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)&DAT_00000030;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005c804c;
  FUN_100775284(plVar1,param_1);
  return;
}



/* Address: 0x100775350 | FUN_100775350 */

void FUN_100775350(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c76d28,param_1);
  return;
}



/* Address: 0x100775360 | FUN_100775360 */

undefined1  [16] FUN_100775360(long param_1)

{
  Optional OVar1;
  ulong uVar2;
  undefined7 extraout_var;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  long local_40;
  long local_38;
  long local_30;
  long local_28;
  
  uVar3 = *(ulong *)(param_1 + 0x10);
  uVar2 = 0x13f;
  _swift_checkMetadataState();
  if (uVar3 < 0x40) {
    local_40 = *(long *)(uVar2 - 8) + 0x40;
    uVar3 = *(ulong *)(param_1 + 0x18);
    uVar2 = 0x13f;
    _swift_checkMetadataState();
    if (uVar3 < 0x40) {
      local_38 = *(long *)(uVar2 - 8) + 0x40;
      uVar4 = *(ulong *)(param_1 + 0x28);
      uVar3 = 0x13f;
      _swift_getAssociatedTypeWitness();
      uVar2 = uVar3;
      if (uVar4 < 0x40) {
        local_30 = *(long *)(uVar3 - 8) + 0x40;
        OVar1 = Swift::Optional::typeMetadataAccessor();
        uVar2 = CONCAT71(extraout_var,OVar1.value);
        if (uVar3 < 0x40) {
          local_28 = *(long *)(uVar2 - 8) + 0x40;
          _swift_initStructMetadata(param_1,0,4,&local_40,param_1 + 0x30);
          uVar2 = 0;
          uVar5 = 0;
          goto LAB_10077543c;
        }
      }
    }
  }
  uVar5 = 0x3f;
LAB_10077543c:
  auVar6._8_8_ = uVar5;
  auVar6._0_8_ = uVar2;
  return auVar6;
}



/* Address: 0x100775450 | FUN_100775450 */

long * FUN_100775450(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  size_t sVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  code *pcVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  
  lVar2 = *(long *)(param_3 + 0x10);
  lVar3 = *(long *)(param_3 + 0x18);
  lVar16 = *(long *)(lVar2 + -8);
  lVar15 = *(long *)(lVar3 + -8);
  uVar4 = *(uint *)(lVar15 + 0x50);
  uVar9 = (ulong)uVar4 & 0xff;
  uVar11 = *(long *)(lVar16 + 0x40) + uVar9;
  lVar10 = *(long *)(lVar15 + 0x40);
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),lVar3,
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Duration_100eaeaf0);
  lVar14 = *(long *)(lVar6 + -8);
  uVar7 = (ulong)*(uint *)(lVar14 + 0x50) & 0xff;
  lVar10 = lVar10 + uVar7;
  sVar8 = *(size_t *)(lVar14 + 0x40);
  lVar1 = sVar8 + uVar7;
  if (*(int *)(lVar14 + 0x54) == 0) {
    sVar8 = sVar8 + 1;
  }
  uVar5 = uVar4 | *(uint *)(lVar16 + 0x50) | *(uint *)(lVar14 + 0x50);
  uVar4 = uVar5 & 0xff;
  if ((uVar4 < 8 && (uVar5 & 0x100000) == 0) &&
      (lVar1 + (lVar10 + (uVar11 & (uVar9 ^ 0xffffffffffffffff)) & (uVar7 ^ 0xffffffffffffffff)) &
      (uVar7 ^ 0xffffffffffffffff)) + sVar8 < 0x19) {
    uVar7 = ~uVar7;
    (**(code **)(lVar16 + 0x10))(param_1,param_2,lVar2);
    uVar12 = uVar11 + (long)param_1 & ~uVar9;
    uVar9 = uVar11 + (long)param_2 & ~uVar9;
    (**(code **)(lVar15 + 0x10))(uVar12,uVar9,lVar3);
    uVar11 = uVar12 + lVar10 & uVar7;
    uVar9 = uVar9 + lVar10 & uVar7;
    pcVar13 = *(code **)(lVar14 + 0x10);
    (*pcVar13)(uVar11,uVar9,lVar6);
    uVar11 = lVar1 + uVar11;
    uVar9 = lVar1 + uVar9;
    uVar12 = uVar9 & uVar7;
    (**(code **)(lVar14 + 0x30))(uVar12,1,lVar6);
    if ((int)uVar12 == 0) {
      (*pcVar13)(uVar11 & uVar7,uVar9 & uVar7,lVar6);
      (**(code **)(lVar14 + 0x38))(uVar11 & uVar7,0,1,lVar6);
    }
    else {
      _memcpy((void *)(uVar11 & uVar7),(void *)(uVar9 & uVar7),sVar8);
    }
  }
  else {
    lVar10 = *param_2;
    *param_1 = lVar10;
    param_1 = (long *)(lVar10 + ((ulong)uVar4 + 0x10 & ((ulong)uVar4 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x100775630 | FUN_100775630 */

void FUN_100775630(long param_1,long param_2)

{
  ulong uVar1;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  lVar3 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  (**(code **)(lVar3 + 8))();
  lVar4 = *(long *)(param_2 + 0x18);
  lVar6 = *(long *)(lVar4 + -8);
  uVar2 = *(long *)(lVar3 + 0x40) + param_1 + (ulong)*(byte *)(lVar6 + 0x50) &
          ((ulong)*(byte *)(lVar6 + 0x50) ^ 0xffffffffffffffff);
  (**(code **)(lVar6 + 8))(uVar2,lVar4);
  lVar6 = *(long *)(lVar6 + 0x40);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x28),lVar4,
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Duration_100eaeaf0);
  lVar4 = *(long *)(lVar3 + -8);
  uVar5 = (ulong)*(byte *)(lVar4 + 0x50);
  uVar2 = uVar2 + lVar6 + uVar5 & (uVar5 ^ 0xffffffffffffffff);
  UNRECOVERED_JUMPTABLE = *(code **)(lVar4 + 8);
  (*UNRECOVERED_JUMPTABLE)(uVar2,lVar3);
  uVar2 = *(long *)(lVar4 + 0x40) + uVar5 + uVar2;
  uVar1 = uVar2 & (uVar5 ^ 0xffffffffffffffff);
  (**(code **)(lVar4 + 0x30))(uVar1,1,lVar3);
  if ((int)uVar1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100775738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar2 & (uVar5 ^ 0xffffffffffffffff),lVar3);
  return;
}



/* Address: 0x10077573c | FUN_10077573c */

long FUN_10077573c(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  size_t sVar9;
  
  lVar3 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar3 + 0x10))();
  lVar4 = *(long *)(param_3 + 0x18);
  lVar7 = *(long *)(lVar4 + -8);
  uVar1 = (ulong)*(byte *)(lVar7 + 0x50);
  lVar3 = *(long *)(lVar3 + 0x40) + uVar1;
  uVar5 = lVar3 + param_1 & (uVar1 ^ 0xffffffffffffffff);
  uVar2 = lVar3 + param_2 & (uVar1 ^ 0xffffffffffffffff);
  (**(code **)(lVar7 + 0x10))(uVar5,uVar2,lVar4);
  lVar3 = *(long *)(lVar7 + 0x40);
  lVar7 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),lVar4,
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Duration_100eaeaf0);
  lVar4 = *(long *)(lVar7 + -8);
  uVar8 = (ulong)*(byte *)(lVar4 + 0x50);
  lVar3 = lVar3 + uVar8;
  uVar1 = lVar3 + uVar5 & (uVar8 ^ 0xffffffffffffffff);
  uVar2 = lVar3 + uVar2 & (uVar8 ^ 0xffffffffffffffff);
  pcVar6 = *(code **)(lVar4 + 0x10);
  (*pcVar6)(uVar1,uVar2,lVar7);
  sVar9 = *(size_t *)(lVar4 + 0x40);
  uVar1 = sVar9 + uVar8 + uVar1;
  uVar2 = sVar9 + uVar8 + uVar2;
  uVar5 = uVar2 & (uVar8 ^ 0xffffffffffffffff);
  (**(code **)(lVar4 + 0x30))(uVar5,1,lVar7);
  if ((int)uVar5 == 0) {
    (*pcVar6)(uVar1 & (uVar8 ^ 0xffffffffffffffff),uVar2 & (uVar8 ^ 0xffffffffffffffff),lVar7);
    (**(code **)(lVar4 + 0x38))(uVar1 & (uVar8 ^ 0xffffffffffffffff),0,1,lVar7);
  }
  else {
    if (*(int *)(lVar4 + 0x54) == 0) {
      sVar9 = sVar9 + 1;
    }
    _memcpy((void *)(uVar1 & (uVar8 ^ 0xffffffffffffffff)),
            (void *)(uVar2 & (uVar8 ^ 0xffffffffffffffff)),sVar9);
  }
  return param_1;
}



/* Address: 0x100775888 | FUN_100775888 */

long FUN_100775888(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  size_t sVar9;
  code *pcVar10;
  code *pcVar11;
  
  lVar4 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar4 + 0x18))();
  lVar5 = *(long *)(param_3 + 0x18);
  lVar7 = *(long *)(lVar5 + -8);
  uVar2 = (ulong)*(byte *)(lVar7 + 0x50);
  lVar4 = *(long *)(lVar4 + 0x40) + uVar2;
  uVar6 = lVar4 + param_1 & (uVar2 ^ 0xffffffffffffffff);
  uVar3 = lVar4 + param_2 & (uVar2 ^ 0xffffffffffffffff);
  (**(code **)(lVar7 + 0x18))(uVar6,uVar3,lVar5);
  lVar4 = *(long *)(lVar7 + 0x40);
  lVar7 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),lVar5,
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Duration_100eaeaf0);
  lVar5 = *(long *)(lVar7 + -8);
  uVar8 = (ulong)*(byte *)(lVar5 + 0x50);
  lVar4 = lVar4 + uVar8;
  uVar2 = lVar4 + uVar6 & (uVar8 ^ 0xffffffffffffffff);
  uVar3 = lVar4 + uVar3 & (uVar8 ^ 0xffffffffffffffff);
  pcVar10 = *(code **)(lVar5 + 0x18);
  (*pcVar10)(uVar2,uVar3,lVar7);
  sVar9 = *(size_t *)(lVar5 + 0x40);
  uVar2 = sVar9 + uVar8 + uVar2;
  uVar3 = sVar9 + uVar8 + uVar3;
  pcVar11 = *(code **)(lVar5 + 0x30);
  uVar6 = uVar2 & (uVar8 ^ 0xffffffffffffffff);
  (*pcVar11)(uVar6,1,lVar7);
  uVar1 = uVar3 & (uVar8 ^ 0xffffffffffffffff);
  (*pcVar11)(uVar1,1,lVar7);
  if ((int)uVar6 == 0) {
    if ((int)uVar1 == 0) {
      (*pcVar10)(uVar2 & (uVar8 ^ 0xffffffffffffffff),uVar3 & (uVar8 ^ 0xffffffffffffffff),lVar7);
      return param_1;
    }
    (**(code **)(lVar5 + 8))(uVar2 & (uVar8 ^ 0xffffffffffffffff),lVar7);
  }
  else if ((int)uVar1 == 0) {
    (**(code **)(lVar5 + 0x10))
              (uVar2 & (uVar8 ^ 0xffffffffffffffff),uVar3 & (uVar8 ^ 0xffffffffffffffff),lVar7);
    (**(code **)(lVar5 + 0x38))(uVar2 & (uVar8 ^ 0xffffffffffffffff),0,1,lVar7);
    return param_1;
  }
  if (*(int *)(lVar5 + 0x54) == 0) {
    sVar9 = sVar9 + 1;
  }
  _memcpy((void *)(uVar2 & (uVar8 ^ 0xffffffffffffffff)),
          (void *)(uVar3 & (uVar8 ^ 0xffffffffffffffff)),sVar9);
  return param_1;
}



/* Address: 0x100775a20 | FUN_100775a20 */

long FUN_100775a20(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  size_t sVar9;
  
  lVar3 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar3 + 0x20))();
  lVar4 = *(long *)(param_3 + 0x18);
  lVar7 = *(long *)(lVar4 + -8);
  uVar1 = (ulong)*(byte *)(lVar7 + 0x50);
  lVar3 = *(long *)(lVar3 + 0x40) + uVar1;
  uVar5 = lVar3 + param_1 & (uVar1 ^ 0xffffffffffffffff);
  uVar2 = lVar3 + param_2 & (uVar1 ^ 0xffffffffffffffff);
  (**(code **)(lVar7 + 0x20))(uVar5,uVar2,lVar4);
  lVar3 = *(long *)(lVar7 + 0x40);
  lVar7 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),lVar4,
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Duration_100eaeaf0);
  lVar4 = *(long *)(lVar7 + -8);
  uVar8 = (ulong)*(byte *)(lVar4 + 0x50);
  lVar3 = lVar3 + uVar8;
  uVar1 = lVar3 + uVar5 & (uVar8 ^ 0xffffffffffffffff);
  uVar2 = lVar3 + uVar2 & (uVar8 ^ 0xffffffffffffffff);
  pcVar6 = *(code **)(lVar4 + 0x20);
  (*pcVar6)(uVar1,uVar2,lVar7);
  sVar9 = *(size_t *)(lVar4 + 0x40);
  uVar1 = sVar9 + uVar8 + uVar1;
  uVar2 = sVar9 + uVar8 + uVar2;
  uVar5 = uVar2 & (uVar8 ^ 0xffffffffffffffff);
  (**(code **)(lVar4 + 0x30))(uVar5,1,lVar7);
  if ((int)uVar5 == 0) {
    (*pcVar6)(uVar1 & (uVar8 ^ 0xffffffffffffffff),uVar2 & (uVar8 ^ 0xffffffffffffffff),lVar7);
    (**(code **)(lVar4 + 0x38))(uVar1 & (uVar8 ^ 0xffffffffffffffff),0,1,lVar7);
  }
  else {
    if (*(int *)(lVar4 + 0x54) == 0) {
      sVar9 = sVar9 + 1;
    }
    _memcpy((void *)(uVar1 & (uVar8 ^ 0xffffffffffffffff)),
            (void *)(uVar2 & (uVar8 ^ 0xffffffffffffffff)),sVar9);
  }
  return param_1;
}



/* Address: 0x100775b6c | FUN_100775b6c */

long FUN_100775b6c(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  size_t sVar9;
  code *pcVar10;
  code *pcVar11;
  
  lVar4 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar4 + 0x28))();
  lVar5 = *(long *)(param_3 + 0x18);
  lVar7 = *(long *)(lVar5 + -8);
  uVar2 = (ulong)*(byte *)(lVar7 + 0x50);
  lVar4 = *(long *)(lVar4 + 0x40) + uVar2;
  uVar6 = lVar4 + param_1 & (uVar2 ^ 0xffffffffffffffff);
  uVar3 = lVar4 + param_2 & (uVar2 ^ 0xffffffffffffffff);
  (**(code **)(lVar7 + 0x28))(uVar6,uVar3,lVar5);
  lVar4 = *(long *)(lVar7 + 0x40);
  lVar7 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),lVar5,
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Duration_100eaeaf0);
  lVar5 = *(long *)(lVar7 + -8);
  uVar8 = (ulong)*(byte *)(lVar5 + 0x50);
  lVar4 = lVar4 + uVar8;
  uVar2 = lVar4 + uVar6 & (uVar8 ^ 0xffffffffffffffff);
  uVar3 = lVar4 + uVar3 & (uVar8 ^ 0xffffffffffffffff);
  pcVar10 = *(code **)(lVar5 + 0x28);
  (*pcVar10)(uVar2,uVar3,lVar7);
  sVar9 = *(size_t *)(lVar5 + 0x40);
  uVar2 = sVar9 + uVar8 + uVar2;
  uVar3 = sVar9 + uVar8 + uVar3;
  pcVar11 = *(code **)(lVar5 + 0x30);
  uVar6 = uVar2 & (uVar8 ^ 0xffffffffffffffff);
  (*pcVar11)(uVar6,1,lVar7);
  uVar1 = uVar3 & (uVar8 ^ 0xffffffffffffffff);
  (*pcVar11)(uVar1,1,lVar7);
  if ((int)uVar6 == 0) {
    if ((int)uVar1 == 0) {
      (*pcVar10)(uVar2 & (uVar8 ^ 0xffffffffffffffff),uVar3 & (uVar8 ^ 0xffffffffffffffff),lVar7);
      return param_1;
    }
    (**(code **)(lVar5 + 8))(uVar2 & (uVar8 ^ 0xffffffffffffffff),lVar7);
  }
  else if ((int)uVar1 == 0) {
    (**(code **)(lVar5 + 0x20))
              (uVar2 & (uVar8 ^ 0xffffffffffffffff),uVar3 & (uVar8 ^ 0xffffffffffffffff),lVar7);
    (**(code **)(lVar5 + 0x38))(uVar2 & (uVar8 ^ 0xffffffffffffffff),0,1,lVar7);
    return param_1;
  }
  if (*(int *)(lVar5 + 0x54) == 0) {
    sVar9 = sVar9 + 1;
  }
  _memcpy((void *)(uVar2 & (uVar8 ^ 0xffffffffffffffff)),
          (void *)(uVar3 & (uVar8 ^ 0xffffffffffffffff)),sVar9);
  return param_1;
}



/* Address: 0x100775d04 | FUN_100775d04 */

uint * FUN_100775d04(uint *param_1,uint param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  code *UNRECOVERED_JUMPTABLE;
  long lVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  
  lVar3 = *(long *)(param_3 + 0x10);
  lVar4 = *(long *)(param_3 + 0x18);
  lVar18 = *(long *)(lVar3 + -8);
  uVar5 = *(uint *)(lVar18 + 0x54);
  lVar17 = *(long *)(lVar4 + -8);
  uVar11 = *(uint *)(lVar17 + 0x54);
  uVar2 = uVar11;
  if (uVar11 <= uVar5) {
    uVar2 = uVar5;
  }
  lVar7 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),lVar4,
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Duration_100eaeaf0);
  lVar10 = *(long *)(lVar7 + -8);
  uVar9 = *(uint *)(lVar10 + 0x54);
  uVar6 = uVar9;
  if (uVar9 <= uVar2) {
    uVar6 = uVar2;
  }
  uVar2 = 0;
  if (uVar9 != 0) {
    uVar2 = uVar9 - 1;
  }
  if (uVar2 <= uVar6) {
    uVar2 = uVar6;
  }
  lVar12 = *(long *)(lVar10 + 0x40);
  lVar1 = lVar12;
  if (uVar9 == 0) {
    lVar1 = lVar12 + 1;
  }
  if (param_2 == 0) {
    return (uint *)0x0;
  }
  uVar14 = (ulong)*(byte *)(lVar17 + 0x50);
  uVar8 = *(long *)(lVar18 + 0x40) + uVar14;
  uVar13 = (ulong)*(byte *)(lVar10 + 0x50);
  if (param_2 < uVar2 || param_2 - uVar2 == 0) goto LAB_100775e4c;
  lVar1 = lVar1 + (lVar12 + uVar13 +
                   (*(long *)(lVar17 + 0x40) + uVar13 + (uVar8 & (uVar14 ^ 0xffffffffffffffff)) &
                   (uVar13 ^ 0xffffffffffffffff)) & (uVar13 ^ 0xffffffffffffffff));
  uVar15 = (uint)lVar1;
  uVar6 = uVar15 << 3;
  if (uVar15 < 4) {
    uVar16 = ((param_2 - uVar2) + ~(-1 << (ulong)(uVar6 & 0x1f)) >> (ulong)(uVar6 & 0x1f)) + 1;
    if (0xff < uVar16) {
      if (uVar16 >> 0x10 == 0) {
        uVar16 = (uint)*(ushort *)((long)param_1 + lVar1);
      }
      else {
        uVar16 = *(uint *)((long)param_1 + lVar1);
      }
      goto LAB_100775de4;
    }
    if (1 < uVar16) goto LAB_100775de0;
  }
  else {
LAB_100775de0:
    uVar16 = (uint)*(byte *)((long)param_1 + lVar1);
LAB_100775de4:
    if (uVar16 != 0) {
      uVar5 = 0;
      if (uVar15 < 4) {
        uVar5 = uVar16 - 1 << (ulong)(uVar6 & 0x1f);
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
      return (uint *)(ulong)(uVar2 + (uVar11 | uVar5) + 1);
    }
  }
  if (uVar2 == 0) {
    return (uint *)0x0;
  }
LAB_100775e4c:
  if (uVar5 == uVar2) {
    UNRECOVERED_JUMPTABLE = *(code **)(lVar18 + 0x30);
    lVar7 = lVar3;
    uVar9 = uVar5;
  }
  else {
    param_1 = (uint *)((ulong)(uVar8 + (long)param_1) & ~uVar14);
    if (uVar11 == uVar2) {
      UNRECOVERED_JUMPTABLE = *(code **)(lVar17 + 0x30);
      lVar7 = lVar4;
      uVar9 = uVar11;
    }
    else {
      param_1 = (uint *)((ulong)((long)param_1 + uVar13 + *(long *)(lVar17 + 0x40)) & ~uVar13);
      if (uVar9 != uVar2) {
        uVar8 = (ulong)(lVar12 + uVar13 + (long)param_1) & ~uVar13;
        (**(code **)(lVar10 + 0x30))(uVar8,uVar9,lVar7);
        uVar2 = 0;
        if ((int)uVar8 != 0) {
          uVar2 = (int)uVar8 - 1;
        }
        return (uint *)(ulong)uVar2;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(lVar10 + 0x30);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000100775ec8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar9,lVar7);
  return param_1;
}



/* Address: 0x100775f54 | FUN_100775f54 */

void FUN_100775f54(uint *param_1,ulong param_2,uint param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  size_t sVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined2 uVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  code *UNRECOVERED_JUMPTABLE;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  size_t sVar17;
  int iVar18;
  long lVar19;
  uint uVar20;
  uint uVar21;
  long lVar22;
  byte bVar23;
  
  lVar6 = *(long *)(param_4 + 0x10);
  lVar7 = *(long *)(param_4 + 0x18);
  lVar19 = *(long *)(lVar6 + -8);
  uVar13 = *(uint *)(lVar19 + 0x54);
  lVar22 = *(long *)(lVar7 + -8);
  uVar10 = *(uint *)(lVar22 + 0x54);
  uVar4 = uVar10;
  if (uVar10 <= uVar13) {
    uVar4 = uVar13;
  }
  lVar9 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 0x28),lVar7,
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Duration_100eaeaf0);
  bVar23 = 0;
  lVar12 = *(long *)(lVar9 + -8);
  uVar11 = *(uint *)(lVar12 + 0x54);
  uVar21 = uVar11;
  if (uVar11 <= uVar4) {
    uVar21 = uVar4;
  }
  uVar4 = 0;
  if (uVar11 != 0) {
    uVar4 = uVar11 - 1;
  }
  uVar5 = uVar4;
  if (uVar4 <= uVar21) {
    uVar5 = uVar21;
  }
  uVar16 = (ulong)*(byte *)(lVar22 + 0x50);
  uVar1 = *(long *)(lVar19 + 0x40) + uVar16;
  lVar15 = *(long *)(lVar22 + 0x40);
  uVar14 = (ulong)*(byte *)(lVar12 + 0x50);
  sVar17 = *(size_t *)(lVar12 + 0x40);
  lVar2 = sVar17 + uVar14;
  if (uVar11 == 0) {
    sVar17 = sVar17 + 1;
  }
  sVar3 = sVar17 + (lVar2 + (lVar15 + uVar14 + (uVar1 & (uVar16 ^ 0xffffffffffffffff)) &
                            (uVar14 ^ 0xffffffffffffffff)) & (uVar14 ^ 0xffffffffffffffff));
  uVar21 = (uint)sVar3;
  if (uVar5 <= param_3 && param_3 - uVar5 != 0) {
    if (uVar21 < 4) {
      uVar20 = ((param_3 - uVar5) + ~(-1 << (ulong)(uVar21 << 3 & 0x1f)) >>
               (ulong)(uVar21 << 3 & 0x1f)) + 1;
      bVar23 = 2;
      if (0xffff < uVar20) {
        bVar23 = 4;
      }
      if (uVar20 < 0x100) {
        bVar23 = 1 < uVar20;
      }
    }
    else {
      bVar23 = 1;
    }
  }
  uVar20 = (uint)param_2;
  if (uVar5 < uVar20) {
    uVar20 = uVar20 + ~uVar5;
    if (uVar21 < 4) {
      iVar18 = (uVar20 >> (ulong)(uVar21 << 3 & 0x1f)) + 1;
      if (uVar21 != 0) {
        uVar4 = uVar20 & (-1 << (ulong)(uVar21 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar3);
        uVar8 = (undefined2)uVar4;
        if (uVar21 == 3) {
          *(undefined2 *)param_1 = uVar8;
          *(char *)((long)param_1 + 2) = (char)(uVar4 >> 0x10);
        }
        else if (uVar21 == 2) {
          *(undefined2 *)param_1 = uVar8;
        }
        else {
          *(char *)param_1 = (char)uVar20;
        }
      }
    }
    else {
      _bzero(param_1,sVar3);
      *param_1 = uVar20;
      iVar18 = 1;
    }
    if (bVar23 < 2) {
      if (bVar23 != 0) {
        *(char *)((long)param_1 + sVar3) = (char)iVar18;
      }
    }
    else if (bVar23 == 2) {
      *(short *)((long)param_1 + sVar3) = (short)iVar18;
    }
    else {
      *(int *)((long)param_1 + sVar3) = iVar18;
    }
  }
  else {
    if (bVar23 < 2) {
      if (bVar23 != 0) {
        *(undefined1 *)((long)param_1 + sVar3) = 0;
      }
    }
    else if (bVar23 == 2) {
      *(undefined2 *)((long)param_1 + sVar3) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar3) = 0;
    }
    if (uVar20 != 0) {
      if (uVar13 == uVar5) {
        UNRECOVERED_JUMPTABLE = *(code **)(lVar19 + 0x38);
        lVar9 = lVar6;
        uVar11 = uVar13;
      }
      else {
        param_1 = (uint *)(uVar1 + (long)param_1 & ~uVar16);
        if (uVar10 == uVar5) {
          UNRECOVERED_JUMPTABLE = *(code **)(lVar22 + 0x38);
          lVar9 = lVar7;
          uVar11 = uVar10;
        }
        else {
          param_1 = (uint *)((long)param_1 + uVar14 + lVar15 & ~uVar14);
          if (uVar11 == uVar5) {
            UNRECOVERED_JUMPTABLE = *(code **)(lVar12 + 0x38);
          }
          else {
            param_1 = (uint *)(lVar2 + (long)param_1 & ~uVar14);
            if (uVar4 < uVar20) {
              uVar10 = (uint)sVar17;
              uVar13 = 0xffffffff;
              if (uVar10 < 4) {
                uVar13 = ~(-1 << (ulong)((uVar10 & 3) << 3));
              }
              if (uVar10 == 0) {
                return;
              }
              uVar13 = uVar13 & (uVar4 - uVar20 ^ 0xffffffff);
              uVar4 = 4;
              if (uVar10 < 4) {
                uVar4 = uVar10;
              }
              _bzero(param_1,sVar17);
              if ((int)uVar4 < 3) {
                if (uVar4 == 1) {
                  *(char *)param_1 = (char)uVar13;
                  return;
                }
                *(short *)param_1 = (short)uVar13;
                return;
              }
              if (uVar4 == 3) {
                *(short *)param_1 = (short)uVar13;
                *(char *)((long)param_1 + 2) = (char)(uVar13 >> 0x10);
                return;
              }
              *param_1 = uVar13;
              return;
            }
            UNRECOVERED_JUMPTABLE = *(code **)(lVar12 + 0x38);
            param_2 = (ulong)(uVar20 + 1);
          }
        }
      }
                    /* WARNING: Could not recover jumptable at 0x000100776280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1,param_2,uVar11,lVar9);
      return;
    }
  }
  return;
}



/* Address: 0x1007762ac | FUN_1007762ac */

void FUN_1007762ac(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetStructDescriptor_100cbf1e4);
  return;
}



/* Address: 0x1007762b8 | FUN_1007762b8 */

void FUN_1007762b8(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetStructDescriptor_100cbf22c);
  return;
}



/* Address: 0x1007762c4 | FUN_1007762c4 */

void FUN_1007762c4(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetClassDescriptor_100cbf274);
  return;
}



/* Address: 0x1007762d0 | thunk_FUN_100758850 */

void thunk_FUN_100758850(void)

{
  FUN_100758850();
  return;
}



/* Address: 0x1007762d4 | FUN_1007762d4 */

void FUN_1007762d4(long param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long local_40;
  long lStack_38;
  long local_30;
  undefined8 uStack_28;
  
  plVar2 = &local_40;
  uVar4 = *(ulong *)(param_1 + 0x18);
  lStack_38 = *(undefined8 *)(param_1 + 0x18);
  local_40 = *(long *)(param_1 + 0x10);
  uStack_28 = *(undefined8 *)(param_1 + 0x28);
  local_30 = *(undefined8 *)(param_1 + 0x20);
  lVar1 = 0x13f;
  FUN_100778e10();
  if (plVar2 < (undefined1 *)0x40) {
    uVar3 = *(ulong *)(param_1 + 0x28);
    local_40 = *(long *)(lVar1 + -8) + 0x40;
    lVar1 = 0x13f;
    _swift_getAssociatedTypeWitness
              (0x13f,uVar3,uVar4,
               PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
               PTR___associated_type_descriptor_for_Swift_Clock_Duration_100eaeaf0);
    if (uVar3 < 0x40) {
      lStack_38 = *(long *)(lVar1 + -8) + 0x40;
      lVar1 = 0x13f;
      _swift_checkMetadataState();
      if (uVar4 < 0x40) {
        local_30 = *(long *)(lVar1 + -8) + 0x40;
        _swift_initStructMetadata(param_1,0,3,&local_40,param_1 + 0x30);
      }
    }
  }
  return;
}



/* Address: 0x1007763a0 | FUN_1007763a0 */

long * FUN_1007763a0(long *param_1,uint *param_2,long param_3)

{
  size_t sVar1;
  ulong uVar2;
  long lVar3;
  size_t sVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  uint *puVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  uint uVar18;
  undefined8 *puVar19;
  long lVar20;
  ulong uVar21;
  uint uVar22;
  long lVar23;
  code *pcVar24;
  ulong uVar25;
  ulong uVar26;
  undefined8 uVar27;
  long lVar28;
  uint uVar29;
  ulong uVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  uint *puVar34;
  ulong uVar35;
  ulong uVar36;
  void *pvVar37;
  
  lVar14 = *(long *)(param_3 + 0x10);
  lVar23 = *(long *)(lVar14 + -8);
  uVar25 = *(ulong *)(lVar23 + 0x40);
  lVar10 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),lVar14,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  puVar8 = PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008;
  lVar33 = *(long *)(lVar10 + -8);
  uVar18 = *(uint *)(lVar33 + 0x50);
  uVar27 = *(undefined8 *)(param_3 + 0x28);
  lVar31 = *(long *)(param_3 + 0x18);
  lVar11 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar27,lVar31,PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  lVar20 = *(long *)(lVar11 + -8);
  uVar5 = *(uint *)(lVar20 + 0x54);
  uVar36 = (ulong)*(uint *)(lVar20 + 0x50) & 0xff;
  uVar18 = *(uint *)(lVar20 + 0x50) | uVar18;
  uVar22 = uVar18 & 0xff;
  uVar35 = (ulong)uVar22;
  uVar15 = uVar35 + 0x18 & (uVar35 ^ 0xffffffffffffffff);
  uVar6 = *(uint *)(lVar33 + 0x54);
  uVar26 = *(long *)(lVar33 + 0x40) + uVar36;
  sVar1 = (uVar26 & (uVar36 ^ 0xffffffffffffffff)) + *(long *)(lVar20 + 0x40);
  uVar16 = sVar1 + uVar15;
  sVar4 = sVar1;
  if (uVar5 == 0 && uVar6 == 0) {
    sVar4 = sVar1 + 1;
  }
  uVar15 = sVar4 + uVar15;
  if (uVar15 <= uVar25) {
    uVar15 = uVar25;
  }
  if (uVar15 <= uVar16) {
    uVar15 = uVar16;
  }
  if (uVar15 < 0x19) {
    uVar15 = 0x18;
  }
  lVar12 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar27,lVar31,puVar8,
             PTR___associated_type_descriptor_for_Swift_Clock_Duration_100eaeaf0);
  lVar28 = *(long *)(lVar12 + -8);
  uVar16 = (ulong)*(uint *)(lVar28 + 0x50) & 0xff;
  lVar32 = *(long *)(lVar31 + -8);
  uVar25 = (ulong)*(uint *)(lVar32 + 0x50) & 0xff;
  uVar22 = (uint)uVar16 | *(uint *)(lVar23 + 0x50) & 0xf8 | uVar22 | (uint)uVar25;
  if (7 < uVar22 ||
      ((*(uint *)(lVar28 + 0x50) | *(uint *)(lVar32 + 0x50) | uVar18 | *(uint *)(lVar23 + 0x50)) &
      0x100000) != 0) {
LAB_100776594:
    uVar26 = (ulong)(uVar22 | 7);
    lVar10 = *(long *)param_2;
    *param_1 = lVar10;
    _swift_retain();
    return (long *)(lVar10 + (uVar26 + 0x10 & (uVar26 ^ 0xffffffffffffffff)));
  }
  uVar2 = uVar15 + 1 + uVar16;
  lVar3 = *(long *)(lVar28 + 0x40) + uVar25;
  if (0x18 < (lVar3 + (uVar2 & (uVar16 ^ 0xffffffffffffffff)) & (uVar25 ^ 0xffffffffffffffff)) +
             *(long *)(lVar32 + 0x40)) goto LAB_100776594;
  bVar7 = *(byte *)((long)param_2 + uVar15);
  uVar22 = (uint)bVar7;
  if (4 < bVar7) {
    uVar29 = (uint)uVar15;
    uVar18 = 4;
    if (uVar29 < 4) {
      uVar18 = uVar29;
    }
    if ((int)uVar18 < 2) {
      if (uVar18 == 0) goto LAB_100776604;
      uVar22 = (uint)(byte)*param_2;
    }
    else if (uVar18 == 2) {
      uVar22 = (uint)(ushort)*param_2;
    }
    else if (uVar18 == 3) {
      uVar22 = (uint)(uint3)*param_2;
    }
    else {
      uVar22 = *param_2;
    }
    if (uVar29 < 4) {
      uVar22 = (uVar22 | bVar7 - 5 << (ulong)((uVar29 & 3) << 3)) + 5;
    }
    else {
      uVar22 = uVar22 + 5;
    }
  }
LAB_100776604:
  uVar21 = ~uVar35;
  uVar36 = ~uVar36;
  if (1 < (int)uVar22) {
    if (uVar22 == 2) {
      *param_1 = *(long *)param_2;
      lVar10 = *(long *)(param_2 + 2);
      param_1[2] = *(long *)(param_2 + 4);
      param_1[1] = lVar10;
      *(undefined1 *)((long)param_1 + uVar15) = 2;
      _swift_retain();
      goto LAB_100776824;
    }
    if (uVar22 == 3) {
      *param_1 = *(long *)param_2;
      puVar19 = (undefined8 *)((long)param_1 + 0xfU & 0xfffffffffffffff8);
      puVar17 = (undefined8 *)((ulong)((long)param_2 + 0xf) & 0xfffffffffffffff8);
      *puVar19 = *puVar17;
      puVar19 = puVar19 + 1;
      puVar17 = puVar17 + 1;
      *puVar19 = *puVar17;
      uVar30 = (long)puVar19 + uVar35 + 8 & uVar21;
      uVar21 = (long)puVar17 + uVar35 + 8 & uVar21;
      pcVar24 = *(code **)(lVar33 + 0x10);
      _swift_retain();
      (*pcVar24)(uVar30,uVar21,lVar10);
      (**(code **)(lVar20 + 0x10))(uVar26 + uVar30 & uVar36,uVar26 + uVar21 & uVar36,lVar11);
      *(undefined1 *)((long)param_1 + uVar15) = 3;
      goto LAB_100776824;
    }
    if (uVar22 == 4) {
      lVar10 = *(long *)param_2;
      _swift_errorRetain(lVar10);
      *param_1 = lVar10;
      *(undefined1 *)((long)param_1 + uVar15) = 4;
      goto LAB_100776824;
    }
LAB_10077680c:
    _memcpy(param_1,param_2,uVar15 + 1);
    goto LAB_100776824;
  }
  if (uVar22 == 0) {
    (**(code **)(lVar23 + 0x10))(param_1,param_2,lVar14);
    *(undefined1 *)((long)param_1 + uVar15) = 0;
    goto LAB_100776824;
  }
  if (uVar22 != 1) goto LAB_10077680c;
  *param_1 = *(long *)param_2;
  puVar19 = (undefined8 *)((long)param_1 + 0xfU & 0xfffffffffffffff8);
  puVar17 = (undefined8 *)((ulong)((long)param_2 + 0xf) & 0xfffffffffffffff8);
  *puVar19 = *puVar17;
  puVar19 = puVar19 + 1;
  puVar17 = puVar17 + 1;
  *puVar19 = *puVar17;
  pvVar37 = (void *)((long)puVar19 + uVar35 + 8 & uVar21);
  puVar34 = (uint *)((long)puVar17 + uVar35 + 8 & uVar21);
  _swift_retain();
  if (uVar5 == 0 && uVar6 == 0) {
    if (*(byte *)((long)puVar34 + sVar1) != 0) {
      uVar18 = (uint)sVar1;
      uVar22 = 0;
      if (uVar18 < 4) {
        uVar22 = *(byte *)((long)puVar34 + sVar1) - 1 << (ulong)((uVar18 & 3) << 3);
      }
      if (uVar18 == 0) {
        uVar18 = 0;
      }
      else {
        uVar29 = 4;
        if (uVar18 < 4) {
          uVar29 = uVar18;
        }
        if ((int)uVar29 < 3) {
          if (uVar29 == 1) {
            uVar18 = (uint)(byte)*puVar34;
          }
          else {
            uVar18 = (uint)(ushort)*puVar34;
          }
        }
        else if (uVar29 == 3) {
          uVar18 = (uint)(uint3)*puVar34;
        }
        else {
          uVar18 = *puVar34;
        }
      }
      if ((uVar18 | uVar22) != 0xffffffff) goto LAB_1007768ec;
    }
LAB_100776938:
    (**(code **)(lVar33 + 0x10))(pvVar37,puVar34,lVar10);
    (**(code **)(lVar20 + 0x10))
              (uVar26 + (long)pvVar37 & uVar36,(ulong)(uVar26 + (long)puVar34) & uVar36,lVar11);
    if (uVar5 == 0 && uVar6 == 0) {
      *(undefined1 *)((long)pvVar37 + sVar1) = 0;
    }
  }
  else {
    if (uVar6 < uVar5) {
      uVar35 = (ulong)(uVar26 + (long)puVar34) & uVar36;
      (**(code **)(lVar20 + 0x30))(uVar35,uVar5,lVar11);
      iVar9 = (int)uVar35;
    }
    else {
      puVar13 = puVar34;
      (**(code **)(lVar33 + 0x30))(puVar34,uVar6,lVar10);
      iVar9 = (int)puVar13;
    }
    if (iVar9 == 0) goto LAB_100776938;
LAB_1007768ec:
    _memcpy(pvVar37,puVar34,sVar4);
  }
  *(undefined1 *)((long)param_1 + uVar15) = 1;
LAB_100776824:
  uVar15 = uVar2 + (long)param_1 & ~uVar16;
  uVar26 = (ulong)(uVar2 + (long)param_2) & ~uVar16;
  (**(code **)(lVar28 + 0x10))(uVar15,uVar26,lVar12);
  (**(code **)(lVar32 + 0x10))(lVar3 + uVar15 & ~uVar25,lVar3 + uVar26 & ~uVar25,lVar31);
  return param_1;
}



/* Address: 0x100776994 | FUN_100776994 */

void FUN_100776994(uint *param_1,long param_2)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  uint *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  code *pcVar16;
  ulong uVar17;
  uint *puVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  uint uVar23;
  ulong uVar24;
  long lVar25;
  
  lVar22 = *(long *)(param_2 + 0x10);
  lVar12 = *(long *)(lVar22 + -8);
  uVar24 = *(ulong *)(lVar12 + 0x40);
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x20),lVar22,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar25 = *(long *)(lVar6 + -8);
  bVar4 = *(byte *)(lVar25 + 0x50);
  uVar10 = *(undefined8 *)(param_2 + 0x28);
  lVar11 = *(long *)(param_2 + 0x18);
  lVar7 = 0;
  _swift_getAssociatedTypeWitness();
  lVar21 = *(long *)(lVar7 + -8);
  uVar3 = *(uint *)(lVar21 + 0x54);
  uVar13 = (ulong)*(uint *)(lVar21 + 0x50) & 0xff;
  uVar20 = (ulong)(*(uint *)(lVar21 + 0x50) & 0xff | (uint)bVar4);
  uVar15 = *(uint *)(lVar25 + 0x54);
  uVar17 = *(long *)(lVar25 + 0x40) + uVar13;
  lVar9 = (uVar17 & (uVar13 ^ 0xffffffffffffffff)) + *(long *)(lVar21 + 0x40);
  uVar19 = lVar9 + (uVar20 + 0x18 & (uVar20 ^ 0xffffffffffffffff));
  uVar1 = uVar19;
  if (uVar3 == 0 && uVar15 == 0) {
    uVar1 = uVar19 + 1;
  }
  if (uVar1 <= uVar24) {
    uVar1 = uVar24;
  }
  if (uVar1 <= uVar19) {
    uVar1 = uVar19;
  }
  if (uVar1 < 0x19) {
    uVar1 = 0x18;
  }
  bVar4 = *(byte *)((long)param_1 + uVar1);
  uVar14 = (uint)bVar4;
  if (4 < bVar4) {
    uVar23 = (uint)uVar1;
    uVar2 = 4;
    if (uVar23 < 4) {
      uVar2 = uVar23;
    }
    if ((int)uVar2 < 2) {
      if (uVar2 == 0) goto LAB_100776af4;
      uVar14 = (uint)(byte)*param_1;
    }
    else if (uVar2 == 2) {
      uVar14 = (uint)(ushort)*param_1;
    }
    else if (uVar2 == 3) {
      uVar14 = (uint)(uint3)*param_1;
    }
    else {
      uVar14 = *param_1;
    }
    if (uVar23 < 4) {
      uVar14 = uVar14 | bVar4 - 5 << (ulong)((uVar23 & 3) << 3);
    }
    uVar14 = uVar14 + 5;
  }
LAB_100776af4:
  if ((int)uVar14 < 2) {
    if (uVar14 == 0) {
      (**(code **)(lVar12 + 8))(param_1,lVar22);
      goto LAB_100776cec;
    }
    if (uVar14 != 1) goto LAB_100776cec;
    _swift_release(*(undefined8 *)param_1);
    puVar18 = (uint *)(((ulong)((long)param_1 + 0xf) & 0xfffffffffffffff8) + uVar20 + 0x10 & ~uVar20
                      );
    if (uVar3 == 0 && uVar15 == 0) {
      if (*(byte *)((long)puVar18 + lVar9) != 0) {
        uVar15 = (uint)lVar9;
        uVar3 = 0;
        if (uVar15 < 4) {
          uVar3 = *(byte *)((long)puVar18 + lVar9) - 1 << (ulong)((uVar15 & 3) << 3);
        }
        if (uVar15 == 0) {
          uVar15 = 0;
        }
        else {
          uVar14 = 4;
          if (uVar15 < 4) {
            uVar14 = uVar15;
          }
          if ((int)uVar14 < 3) {
            if (uVar14 == 1) {
              uVar15 = (uint)(byte)*puVar18;
            }
            else {
              uVar15 = (uint)(ushort)*puVar18;
            }
          }
          else if (uVar14 == 3) {
            uVar15 = (uint)(uint3)*puVar18;
          }
          else {
            uVar15 = *puVar18;
          }
        }
        if ((uVar15 | uVar3) != 0xffffffff) goto LAB_100776cec;
      }
    }
    else {
      if (uVar15 < uVar3) {
        uVar19 = (ulong)(uVar17 + (long)puVar18) & ~uVar13;
        (**(code **)(lVar21 + 0x30))(uVar19,uVar3,lVar7);
        iVar5 = (int)uVar19;
      }
      else {
        puVar8 = puVar18;
        (**(code **)(lVar25 + 0x30))(puVar18,uVar15,lVar6);
        iVar5 = (int)puVar8;
      }
      if (iVar5 != 0) goto LAB_100776cec;
    }
    (**(code **)(lVar25 + 8))(puVar18,lVar6);
    pcVar16 = *(code **)(lVar21 + 8);
  }
  else {
    if (uVar14 == 2) {
      _swift_release(*(undefined8 *)param_1);
      goto LAB_100776cec;
    }
    if (uVar14 != 3) {
      if (uVar14 == 4) {
        _swift_errorRelease(*(undefined8 *)param_1);
      }
      goto LAB_100776cec;
    }
    _swift_release(*(undefined8 *)param_1);
    puVar18 = (uint *)(((ulong)((long)param_1 + 0xf) & 0xfffffffffffffff8) + uVar20 + 0x10 & ~uVar20
                      );
    (**(code **)(lVar25 + 8))(puVar18,lVar6);
    pcVar16 = *(code **)(lVar21 + 8);
  }
  (*pcVar16)((ulong)(uVar17 + (long)puVar18) & ~uVar13,lVar7);
LAB_100776cec:
  lVar9 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar10,lVar11,PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Duration_100eaeaf0);
  lVar6 = *(long *)(lVar9 + -8);
  uVar19 = (ulong)((long)param_1 + *(byte *)(lVar6 + 0x50) + uVar1 + 1) &
           ((ulong)*(byte *)(lVar6 + 0x50) ^ 0xffffffffffffffff);
  (**(code **)(lVar6 + 8))(uVar19,lVar9);
  uVar17 = (ulong)*(byte *)(*(long *)(lVar11 + -8) + 0x50);
                    /* WARNING: Could not recover jumptable at 0x000100776d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar11 + -8) + 8))
            (uVar19 + *(long *)(lVar6 + 0x40) + uVar17 & (uVar17 ^ 0xffffffffffffffff),lVar11);
  return;
}



/* Address: 0x100776d74 | FUN_100776d74 */

undefined8 * FUN_100776d74(undefined8 *param_1,uint *param_2,long param_3)

{
  size_t sVar1;
  size_t sVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  uint *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  long lVar20;
  void *pvVar21;
  code *pcVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  undefined8 uVar26;
  long lVar27;
  uint *puVar28;
  uint uVar29;
  ulong uVar30;
  
  lVar27 = *(long *)(param_3 + 0x10);
  lVar20 = *(long *)(lVar27 + -8);
  uVar30 = *(ulong *)(lVar20 + 0x40);
  lVar7 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),lVar27,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar24 = *(long *)(lVar7 + -8);
  bVar5 = *(byte *)(lVar24 + 0x50);
  uVar10 = *(undefined8 *)(param_3 + 0x28);
  lVar23 = *(long *)(param_3 + 0x18);
  lVar8 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar10,lVar23,PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  lVar25 = *(long *)(lVar8 + -8);
  uVar3 = *(uint *)(lVar25 + 0x54);
  uVar11 = (ulong)*(uint *)(lVar25 + 0x50) & 0xff;
  uVar14 = (ulong)(*(uint *)(lVar25 + 0x50) & 0xff | (uint)bVar5);
  uVar15 = uVar14 + 0x18 & (uVar14 ^ 0xffffffffffffffff);
  uVar4 = *(uint *)(lVar24 + 0x54);
  uVar12 = *(long *)(lVar24 + 0x40) + uVar11;
  sVar1 = (uVar12 & (uVar11 ^ 0xffffffffffffffff)) + *(long *)(lVar25 + 0x40);
  uVar16 = sVar1 + uVar15;
  sVar2 = sVar1;
  if (uVar3 == 0 && uVar4 == 0) {
    sVar2 = sVar1 + 1;
  }
  uVar15 = sVar2 + uVar15;
  if (uVar15 <= uVar30) {
    uVar15 = uVar30;
  }
  if (uVar15 <= uVar16) {
    uVar15 = uVar16;
  }
  if (uVar15 < 0x19) {
    uVar15 = 0x18;
  }
  bVar5 = *(byte *)((long)param_2 + uVar15);
  uVar17 = (uint)bVar5;
  if (4 < bVar5) {
    uVar29 = (uint)uVar15;
    uVar13 = 4;
    if (uVar29 < 4) {
      uVar13 = uVar29;
    }
    if ((int)uVar13 < 2) {
      if (uVar13 == 0) goto LAB_100776ef4;
      uVar17 = (uint)(byte)*param_2;
    }
    else if (uVar13 == 2) {
      uVar17 = (uint)(ushort)*param_2;
    }
    else if (uVar13 == 3) {
      uVar17 = (uint)(uint3)*param_2;
    }
    else {
      uVar17 = *param_2;
    }
    if (uVar29 < 4) {
      uVar17 = (uVar17 | bVar5 - 5 << (ulong)((uVar29 & 3) << 3)) + 5;
    }
    else {
      uVar17 = uVar17 + 5;
    }
  }
LAB_100776ef4:
  uVar16 = ~uVar14;
  uVar11 = ~uVar11;
  if (1 < (int)uVar17) {
    if (uVar17 == 2) {
      *param_1 = *(undefined8 *)param_2;
      uVar26 = *(undefined8 *)(param_2 + 2);
      param_1[2] = *(undefined8 *)(param_2 + 4);
      param_1[1] = uVar26;
      *(undefined1 *)((long)param_1 + uVar15) = 2;
      _swift_retain();
      goto LAB_1007770d4;
    }
    if (uVar17 == 3) {
      uVar26 = *(undefined8 *)param_2;
      *param_1 = uVar26;
      puVar19 = (undefined8 *)((long)param_1 + 0xfU & 0xfffffffffffffff8);
      puVar18 = (undefined8 *)((ulong)((long)param_2 + 0xf) & 0xfffffffffffffff8);
      *puVar19 = *puVar18;
      puVar19 = puVar19 + 1;
      puVar18 = puVar18 + 1;
      *puVar19 = *puVar18;
      uVar30 = (long)puVar19 + uVar14 + 8 & uVar16;
      uVar16 = (long)puVar18 + uVar14 + 8 & uVar16;
      pcVar22 = *(code **)(lVar24 + 0x10);
      _swift_retain(uVar26);
      (*pcVar22)(uVar30,uVar16,lVar7);
      (**(code **)(lVar25 + 0x10))(uVar12 + uVar30 & uVar11,uVar12 + uVar16 & uVar11,lVar8);
      *(undefined1 *)((long)param_1 + uVar15) = 3;
      goto LAB_1007770d4;
    }
    if (uVar17 == 4) {
      uVar26 = *(undefined8 *)param_2;
      _swift_errorRetain(uVar26);
      *param_1 = uVar26;
      *(undefined1 *)((long)param_1 + uVar15) = 4;
      goto LAB_1007770d4;
    }
LAB_1007770bc:
    _memcpy(param_1,param_2,uVar15 + 1);
    goto LAB_1007770d4;
  }
  if (uVar17 == 0) {
    (**(code **)(lVar20 + 0x10))(param_1,param_2,lVar27);
    *(undefined1 *)((long)param_1 + uVar15) = 0;
    goto LAB_1007770d4;
  }
  if (uVar17 != 1) goto LAB_1007770bc;
  *param_1 = *(undefined8 *)param_2;
  puVar19 = (undefined8 *)((long)param_1 + 0xfU & 0xfffffffffffffff8);
  puVar18 = (undefined8 *)((ulong)((long)param_2 + 0xf) & 0xfffffffffffffff8);
  *puVar19 = *puVar18;
  puVar19 = puVar19 + 1;
  puVar18 = puVar18 + 1;
  *puVar19 = *puVar18;
  pvVar21 = (void *)((long)puVar19 + uVar14 + 8 & uVar16);
  puVar28 = (uint *)((long)puVar18 + uVar14 + 8 & uVar16);
  _swift_retain();
  if (uVar3 == 0 && uVar4 == 0) {
    if (*(byte *)((long)puVar28 + sVar1) != 0) {
      uVar13 = (uint)sVar1;
      uVar17 = 0;
      if (uVar13 < 4) {
        uVar17 = *(byte *)((long)puVar28 + sVar1) - 1 << (ulong)((uVar13 & 3) << 3);
      }
      if (uVar13 == 0) {
        uVar13 = 0;
      }
      else {
        uVar29 = 4;
        if (uVar13 < 4) {
          uVar29 = uVar13;
        }
        if ((int)uVar29 < 3) {
          if (uVar29 == 1) {
            uVar13 = (uint)(byte)*puVar28;
          }
          else {
            uVar13 = (uint)(ushort)*puVar28;
          }
        }
        else if (uVar29 == 3) {
          uVar13 = (uint)(uint3)*puVar28;
        }
        else {
          uVar13 = *puVar28;
        }
      }
      if ((uVar13 | uVar17) != 0xffffffff) goto LAB_1007771d0;
    }
LAB_100777220:
    (**(code **)(lVar24 + 0x10))(pvVar21,puVar28,lVar7);
    (**(code **)(lVar25 + 0x10))
              (uVar12 + (long)pvVar21 & uVar11,(ulong)(uVar12 + (long)puVar28) & uVar11,lVar8);
    if (uVar3 == 0 && uVar4 == 0) {
      *(undefined1 *)((long)pvVar21 + sVar1) = 0;
    }
  }
  else {
    if (uVar4 < uVar3) {
      uVar16 = (ulong)(uVar12 + (long)puVar28) & uVar11;
      (**(code **)(lVar25 + 0x30))(uVar16,uVar3,lVar8);
      iVar6 = (int)uVar16;
    }
    else {
      puVar9 = puVar28;
      (**(code **)(lVar24 + 0x30))(puVar28,uVar4,lVar7);
      iVar6 = (int)puVar9;
    }
    if (iVar6 == 0) goto LAB_100777220;
LAB_1007771d0:
    _memcpy(pvVar21,puVar28,sVar2);
  }
  *(undefined1 *)((long)param_1 + uVar15) = 1;
LAB_1007770d4:
  lVar8 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar10,lVar23,PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Duration_100eaeaf0);
  lVar20 = *(long *)(lVar8 + -8);
  uVar12 = (ulong)*(byte *)(lVar20 + 0x50);
  lVar7 = uVar15 + uVar12 + 1;
  uVar15 = lVar7 + (long)param_1 & (uVar12 ^ 0xffffffffffffffff);
  uVar16 = (ulong)(lVar7 + (long)param_2) & (uVar12 ^ 0xffffffffffffffff);
  (**(code **)(lVar20 + 0x10))(uVar15,uVar16,lVar8);
  uVar12 = (ulong)*(byte *)(*(long *)(lVar23 + -8) + 0x50);
  lVar7 = *(long *)(lVar20 + 0x40) + uVar12;
  (**(code **)(*(long *)(lVar23 + -8) + 0x10))
            (lVar7 + uVar15 & (uVar12 ^ 0xffffffffffffffff),
             lVar7 + uVar16 & (uVar12 ^ 0xffffffffffffffff),lVar23);
  return param_1;
}



/* Address: 0x100777278 | FUN_100777278 */

uint * FUN_100777278(uint *param_1,uint *param_2,long param_3)

{
  size_t sVar1;
  size_t sVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  uint *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  code *pcVar24;
  long lVar25;
  long lVar26;
  undefined8 uVar27;
  ulong uVar28;
  void *pvVar29;
  long lVar30;
  uint *puVar31;
  ulong uVar32;
  
  lVar30 = *(long *)(param_3 + 0x10);
  lVar26 = *(long *)(lVar30 + -8);
  uVar32 = *(ulong *)(lVar26 + 0x40);
  if (param_1 == param_2) {
    uVar10 = *(undefined8 *)(param_3 + 0x28);
    lVar22 = *(long *)(param_3 + 0x18);
    lVar7 = 0;
    _swift_getAssociatedTypeWitness
              (0,*(undefined8 *)(param_3 + 0x20),lVar30,
               PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
               PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
    lVar8 = 0;
    _swift_getAssociatedTypeWitness
              (0,uVar10,lVar22,PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008
               ,PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
    goto LAB_100777850;
  }
  lVar7 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),lVar30,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar25 = *(long *)(lVar7 + -8);
  bVar5 = *(byte *)(lVar25 + 0x50);
  uVar10 = *(undefined8 *)(param_3 + 0x28);
  lVar22 = *(long *)(param_3 + 0x18);
  lVar8 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar10,lVar22,PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  lVar21 = *(long *)(lVar8 + -8);
  uVar3 = *(uint *)(lVar21 + 0x54);
  uVar11 = (ulong)*(uint *)(lVar21 + 0x50) & 0xff;
  uVar23 = (ulong)(*(uint *)(lVar21 + 0x50) & 0xff | (uint)bVar5);
  uVar16 = uVar23 + 0x18 & (uVar23 ^ 0xffffffffffffffff);
  uVar4 = *(uint *)(lVar25 + 0x54);
  uVar18 = *(long *)(lVar25 + 0x40) + uVar11;
  sVar1 = (uVar18 & (uVar11 ^ 0xffffffffffffffff)) + *(long *)(lVar21 + 0x40);
  uVar20 = sVar1 + uVar16;
  sVar2 = sVar1;
  if (uVar3 == 0 && uVar4 == 0) {
    sVar2 = sVar1 + 1;
  }
  uVar16 = sVar2 + uVar16;
  if (uVar16 <= uVar32) {
    uVar16 = uVar32;
  }
  if (uVar16 <= uVar20) {
    uVar16 = uVar20;
  }
  if (uVar16 < 0x19) {
    uVar16 = 0x18;
  }
  bVar5 = *(byte *)((long)param_1 + uVar16);
  uVar13 = (uint)bVar5;
  uVar15 = (uint)uVar16;
  if (4 < bVar5) {
    uVar19 = 4;
    if (uVar15 < 4) {
      uVar19 = uVar15;
    }
    if ((int)uVar19 < 2) {
      if (uVar19 == 0) goto LAB_100777444;
      uVar13 = (uint)(byte)*param_1;
    }
    else if (uVar19 == 2) {
      uVar13 = (uint)(ushort)*param_1;
    }
    else if (uVar19 == 3) {
      uVar13 = (uint)(uint3)*param_1;
    }
    else {
      uVar13 = *param_1;
    }
    if (uVar15 < 4) {
      uVar13 = uVar13 | bVar5 - 5 << (ulong)((uVar15 & 3) << 3);
    }
    uVar13 = uVar13 + 5;
  }
LAB_100777444:
  uVar20 = ~uVar23;
  uVar11 = ~uVar11;
  uVar19 = (uint)sVar1;
  if ((int)uVar13 < 2) {
    if (uVar13 == 0) {
      (**(code **)(lVar26 + 8))(param_1,lVar30);
    }
    else if (uVar13 == 1) {
      _swift_release(*(undefined8 *)param_1);
      puVar31 = (uint *)(((ulong)((long)param_1 + 0xf) & 0xfffffffffffffff8) + uVar23 + 0x10 &
                        uVar20);
      if (uVar3 == 0 && uVar4 == 0) {
        if (*(byte *)((long)puVar31 + sVar1) != 0) {
          uVar13 = 0;
          if (uVar19 < 4) {
            uVar13 = *(byte *)((long)puVar31 + sVar1) - 1 << (ulong)((uVar19 & 3) << 3);
          }
          if (uVar19 == 0) {
            uVar14 = 0;
          }
          else {
            uVar14 = 4;
            if (uVar19 < 4) {
              uVar14 = uVar19;
            }
            if ((int)uVar14 < 3) {
              if (uVar14 == 1) {
                uVar14 = (uint)(byte)*puVar31;
              }
              else {
                uVar14 = (uint)(ushort)*puVar31;
              }
            }
            else if (uVar14 == 3) {
              uVar14 = (uint)(uint3)*puVar31;
            }
            else {
              uVar14 = *puVar31;
            }
          }
          if ((uVar14 | uVar13) != 0xffffffff) goto LAB_1007775e4;
        }
      }
      else {
        if (uVar4 < uVar3) {
          uVar28 = (ulong)(uVar18 + (long)puVar31) & uVar11;
          (**(code **)(lVar21 + 0x30))(uVar28,uVar3,lVar8);
          iVar6 = (int)uVar28;
        }
        else {
          puVar9 = puVar31;
          (**(code **)(lVar25 + 0x30))(puVar31,uVar4,lVar7);
          iVar6 = (int)puVar9;
        }
        if (iVar6 != 0) goto LAB_1007775e4;
      }
LAB_1007775b8:
      (**(code **)(lVar25 + 8))(puVar31,lVar7);
      (**(code **)(lVar21 + 8))((ulong)(uVar18 + (long)puVar31) & uVar11,lVar8);
    }
  }
  else if (uVar13 == 2) {
    _swift_release(*(undefined8 *)param_1);
  }
  else {
    if (uVar13 == 3) {
      _swift_release(*(undefined8 *)param_1);
      puVar31 = (uint *)(((ulong)((long)param_1 + 0xf) & 0xfffffffffffffff8) + uVar23 + 0x10 &
                        uVar20);
      goto LAB_1007775b8;
    }
    if (uVar13 == 4) {
      _swift_errorRelease(*(undefined8 *)param_1);
    }
  }
LAB_1007775e4:
  bVar5 = *(byte *)((long)param_2 + uVar16);
  uVar13 = (uint)bVar5;
  if (bVar5 < 5) {
LAB_100777650:
    if ((int)uVar13 < 2) goto LAB_100777778;
LAB_100777658:
    if (uVar13 == 2) {
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
      *(byte *)((long)param_1 + uVar16) = 2;
      _swift_retain();
      goto LAB_100777850;
    }
    if (uVar13 == 3) {
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      puVar17 = (undefined8 *)((ulong)((long)param_1 + 0xfU) & 0xfffffffffffffff8);
      puVar12 = (undefined8 *)((ulong)((long)param_2 + 0xf) & 0xfffffffffffffff8);
      *puVar17 = *puVar12;
      puVar17 = puVar17 + 1;
      puVar12 = puVar12 + 1;
      *puVar17 = *puVar12;
      uVar28 = (long)puVar17 + uVar23 + 8 & uVar20;
      uVar20 = (long)puVar12 + uVar23 + 8 & uVar20;
      pcVar24 = *(code **)(lVar25 + 0x10);
      _swift_retain();
      (*pcVar24)(uVar28,uVar20,lVar7);
      (**(code **)(lVar21 + 0x10))(uVar18 + uVar28 & uVar11,uVar18 + uVar20 & uVar11,lVar8);
      *(byte *)((long)param_1 + uVar16) = 3;
      goto LAB_100777850;
    }
    if (uVar13 == 4) {
      uVar27 = *(undefined8 *)param_2;
      _swift_errorRetain(uVar27);
      *(undefined8 *)param_1 = uVar27;
      *(byte *)((long)param_1 + uVar16) = 4;
      goto LAB_100777850;
    }
LAB_100777838:
    _memcpy(param_1,param_2,uVar16 + 1);
    goto LAB_100777850;
  }
  uVar14 = 4;
  if (uVar15 < 4) {
    uVar14 = uVar15;
  }
  if ((int)uVar14 < 2) {
    if (uVar14 == 0) goto LAB_100777650;
    uVar13 = (uint)(byte)*param_2;
  }
  else if (uVar14 == 2) {
    uVar13 = (uint)(ushort)*param_2;
  }
  else if (uVar14 == 3) {
    uVar13 = (uint)(uint3)*param_2;
  }
  else {
    uVar13 = *param_2;
  }
  if (3 < uVar15) {
    uVar13 = uVar13 + 5;
    goto LAB_100777650;
  }
  uVar13 = (uVar13 | bVar5 - 5 << (ulong)((uVar15 & 3) << 3)) + 5;
  if (1 < (int)uVar13) goto LAB_100777658;
LAB_100777778:
  if (uVar13 == 0) {
    (**(code **)(lVar26 + 0x10))(param_1,param_2,lVar30);
    *(byte *)((long)param_1 + uVar16) = 0;
    goto LAB_100777850;
  }
  if (uVar13 != 1) goto LAB_100777838;
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  puVar17 = (undefined8 *)((ulong)((long)param_1 + 0xf) & 0xfffffffffffffff8);
  puVar12 = (undefined8 *)((ulong)((long)param_2 + 0xf) & 0xfffffffffffffff8);
  *puVar17 = *puVar12;
  puVar17 = puVar17 + 1;
  puVar12 = puVar12 + 1;
  *puVar17 = *puVar12;
  pvVar29 = (void *)((long)puVar17 + uVar23 + 8 & uVar20);
  puVar31 = (uint *)((long)puVar12 + uVar23 + 8 & uVar20);
  _swift_retain();
  if (uVar3 == 0 && uVar4 == 0) {
    if (*(byte *)((long)puVar31 + sVar1) != 0) {
      uVar13 = 0;
      if (uVar19 < 4) {
        uVar13 = *(byte *)((long)puVar31 + sVar1) - 1 << (ulong)((uVar19 & 3) << 3);
      }
      if (uVar19 == 0) {
        uVar15 = 0;
      }
      else {
        uVar15 = 4;
        if (uVar19 < 4) {
          uVar15 = uVar19;
        }
        if ((int)uVar15 < 3) {
          if (uVar15 == 1) {
            uVar15 = (uint)(byte)*puVar31;
          }
          else {
            uVar15 = (uint)(ushort)*puVar31;
          }
        }
        else if (uVar15 == 3) {
          uVar15 = (uint)(uint3)*puVar31;
        }
        else {
          uVar15 = *puVar31;
        }
      }
      if ((uVar15 | uVar13) != 0xffffffff) goto LAB_1007779c4;
    }
LAB_100777a50:
    (**(code **)(lVar25 + 0x10))(pvVar29,puVar31,lVar7);
    (**(code **)(lVar21 + 0x10))
              (uVar18 + (long)pvVar29 & uVar11,(ulong)(uVar18 + (long)puVar31) & uVar11,lVar8);
    if (uVar3 == 0 && uVar4 == 0) {
      *(undefined1 *)((long)pvVar29 + sVar1) = 0;
    }
  }
  else {
    if (uVar4 < uVar3) {
      uVar20 = (ulong)(uVar18 + (long)puVar31) & uVar11;
      (**(code **)(lVar21 + 0x30))(uVar20,uVar3,lVar8);
      iVar6 = (int)uVar20;
    }
    else {
      puVar9 = puVar31;
      (**(code **)(lVar25 + 0x30))(puVar31,uVar4,lVar7);
      iVar6 = (int)puVar9;
    }
    if (iVar6 == 0) goto LAB_100777a50;
LAB_1007779c4:
    _memcpy(pvVar29,puVar31,sVar2);
  }
  *(byte *)((long)param_1 + uVar16) = 1;
LAB_100777850:
  lVar26 = *(long *)(lVar7 + -8);
  lVar30 = *(long *)(lVar8 + -8);
  uVar20 = (ulong)*(uint *)(lVar30 + 0x50) & 0xff;
  uVar18 = (ulong)(*(uint *)(lVar30 + 0x50) & 0xff | (uint)*(byte *)(lVar26 + 0x50));
  uVar18 = (*(long *)(lVar26 + 0x40) + uVar20 & (uVar20 ^ 0xffffffffffffffff)) +
           *(long *)(lVar30 + 0x40) + (uVar18 + 0x18 & (uVar18 ^ 0xffffffffffffffff));
  uVar20 = uVar18;
  if (*(int *)(lVar30 + 0x54) == 0 && *(int *)(lVar26 + 0x54) == 0) {
    uVar20 = uVar18 + 1;
  }
  if (uVar20 <= uVar32) {
    uVar20 = uVar32;
  }
  if (uVar20 <= uVar18) {
    uVar20 = uVar18;
  }
  if (uVar20 < 0x19) {
    uVar20 = 0x18;
  }
  lVar30 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar10,lVar22,PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Duration_100eaeaf0);
  lVar7 = *(long *)(lVar30 + -8);
  uVar32 = (ulong)*(byte *)(lVar7 + 0x50);
  lVar26 = uVar20 + uVar32 + 1;
  uVar20 = (ulong)(lVar26 + (long)param_1) & (uVar32 ^ 0xffffffffffffffff);
  uVar18 = (ulong)(lVar26 + (long)param_2) & (uVar32 ^ 0xffffffffffffffff);
  (**(code **)(lVar7 + 0x18))(uVar20,uVar18,lVar30);
  uVar32 = (ulong)*(byte *)(*(long *)(lVar22 + -8) + 0x50);
  lVar26 = *(long *)(lVar7 + 0x40) + uVar32;
  (**(code **)(*(long *)(lVar22 + -8) + 0x18))
            (lVar26 + uVar20 & (uVar32 ^ 0xffffffffffffffff),
             lVar26 + uVar18 & (uVar32 ^ 0xffffffffffffffff),lVar22);
  return param_1;
}



/* Address: 0x100777aa8 | FUN_100777aa8 */

undefined8 * FUN_100777aa8(undefined8 *param_1,uint *param_2,long param_3)

{
  size_t sVar1;
  size_t sVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  long lVar6;
  long lVar7;
  uint *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  code *pcVar14;
  ulong uVar15;
  undefined8 *puVar16;
  ulong uVar17;
  ulong uVar18;
  uint uVar19;
  long lVar20;
  long lVar21;
  void *pvVar22;
  long lVar23;
  uint *puVar24;
  long lVar25;
  long lVar26;
  uint uVar27;
  ulong uVar28;
  undefined8 uVar29;
  
  lVar23 = *(long *)(param_3 + 0x10);
  lVar21 = *(long *)(lVar23 + -8);
  uVar28 = *(ulong *)(lVar21 + 0x40);
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),lVar23,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar25 = *(long *)(lVar6 + -8);
  bVar5 = *(byte *)(lVar25 + 0x50);
  uVar9 = *(undefined8 *)(param_3 + 0x28);
  lVar20 = *(long *)(param_3 + 0x18);
  lVar7 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar9,lVar20,PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  lVar26 = *(long *)(lVar7 + -8);
  uVar3 = *(uint *)(lVar26 + 0x54);
  uVar15 = (ulong)*(uint *)(lVar26 + 0x50) & 0xff;
  uVar13 = (ulong)(*(uint *)(lVar26 + 0x50) & 0xff | (uint)bVar5);
  uVar17 = uVar13 + 0x18 & (uVar13 ^ 0xffffffffffffffff);
  uVar4 = *(uint *)(lVar25 + 0x54);
  uVar11 = *(long *)(lVar25 + 0x40) + uVar15;
  sVar1 = (uVar11 & (uVar15 ^ 0xffffffffffffffff)) + *(long *)(lVar26 + 0x40);
  uVar18 = sVar1 + uVar17;
  sVar2 = sVar1;
  if (uVar3 == 0 && uVar4 == 0) {
    sVar2 = sVar1 + 1;
  }
  uVar17 = sVar2 + uVar17;
  if (uVar17 <= uVar28) {
    uVar17 = uVar28;
  }
  if (uVar17 <= uVar18) {
    uVar17 = uVar18;
  }
  if (uVar17 < 0x19) {
    uVar17 = 0x18;
  }
  bVar5 = *(byte *)((long)param_2 + uVar17);
  uVar19 = (uint)bVar5;
  if (4 < bVar5) {
    uVar27 = (uint)uVar17;
    uVar12 = 4;
    if (uVar27 < 4) {
      uVar12 = uVar27;
    }
    if ((int)uVar12 < 2) {
      if (uVar12 == 0) goto LAB_100777c24;
      uVar19 = (uint)(byte)*param_2;
    }
    else if (uVar12 == 2) {
      uVar19 = (uint)(ushort)*param_2;
    }
    else if (uVar12 == 3) {
      uVar19 = (uint)(uint3)*param_2;
    }
    else {
      uVar19 = *param_2;
    }
    if (uVar27 < 4) {
      uVar19 = (uVar19 | bVar5 - 5 << (ulong)((uVar27 & 3) << 3)) + 5;
    }
    else {
      uVar19 = uVar19 + 5;
    }
  }
LAB_100777c24:
  uVar18 = ~uVar13;
  uVar15 = ~uVar15;
  if (1 < (int)uVar19) {
    if (uVar19 == 2) {
      uVar29 = *(undefined8 *)param_2;
      param_1[1] = *(undefined8 *)(param_2 + 2);
      *param_1 = uVar29;
      param_1[2] = *(undefined8 *)(param_2 + 4);
      *(undefined1 *)((long)param_1 + uVar17) = 2;
      goto LAB_100777dbc;
    }
    if (uVar19 == 3) {
      *param_1 = *(undefined8 *)param_2;
      puVar16 = (undefined8 *)((long)param_1 + 0xfU & 0xfffffffffffffff8);
      puVar10 = (undefined8 *)((ulong)((long)param_2 + 0xf) & 0xfffffffffffffff8);
      *puVar16 = *puVar10;
      puVar16 = puVar16 + 1;
      puVar10 = puVar10 + 1;
      *puVar16 = *puVar10;
      uVar28 = (long)puVar16 + uVar13 + 8 & uVar18;
      uVar18 = (long)puVar10 + uVar13 + 8 & uVar18;
      (**(code **)(lVar25 + 0x20))(uVar28,uVar18,lVar6);
      (**(code **)(lVar26 + 0x20))(uVar11 + uVar28 & uVar15,uVar11 + uVar18 & uVar15,lVar7);
      *(undefined1 *)((long)param_1 + uVar17) = 3;
      goto LAB_100777dbc;
    }
    if (uVar19 == 4) {
      *param_1 = *(undefined8 *)param_2;
      *(undefined1 *)((long)param_1 + uVar17) = 4;
      goto LAB_100777dbc;
    }
LAB_100777da8:
    _memcpy(param_1,param_2,uVar17 + 1);
    goto LAB_100777dbc;
  }
  if (uVar19 == 0) {
    (**(code **)(lVar21 + 0x20))(param_1,param_2,lVar23);
    *(undefined1 *)((long)param_1 + uVar17) = 0;
    goto LAB_100777dbc;
  }
  if (uVar19 != 1) goto LAB_100777da8;
  *param_1 = *(undefined8 *)param_2;
  puVar16 = (undefined8 *)((long)param_1 + 0xfU & 0xfffffffffffffff8);
  puVar10 = (undefined8 *)((ulong)((long)param_2 + 0xf) & 0xfffffffffffffff8);
  *puVar16 = *puVar10;
  puVar16 = puVar16 + 1;
  puVar10 = puVar10 + 1;
  *puVar16 = *puVar10;
  pvVar22 = (void *)((long)puVar16 + uVar13 + 8 & uVar18);
  puVar24 = (uint *)((long)puVar10 + uVar13 + 8 & uVar18);
  if (uVar3 == 0 && uVar4 == 0) {
    if (*(byte *)((long)puVar24 + sVar1) != 0) {
      uVar12 = (uint)sVar1;
      uVar19 = 0;
      if (uVar12 < 4) {
        uVar19 = *(byte *)((long)puVar24 + sVar1) - 1 << (ulong)((uVar12 & 3) << 3);
      }
      if (uVar12 == 0) {
        uVar12 = 0;
      }
      else {
        uVar27 = 4;
        if (uVar12 < 4) {
          uVar27 = uVar12;
        }
        if ((int)uVar27 < 3) {
          if (uVar27 == 1) {
            uVar12 = (uint)(byte)*puVar24;
          }
          else {
            uVar12 = (uint)(ushort)*puVar24;
          }
        }
        else if (uVar27 == 3) {
          uVar12 = (uint)(uint3)*puVar24;
        }
        else {
          uVar12 = *puVar24;
        }
      }
      if ((uVar12 | uVar19) != 0xffffffff) goto LAB_100777eb8;
    }
LAB_100777f08:
    (**(code **)(lVar25 + 0x20))(pvVar22,puVar24,lVar6);
    (**(code **)(lVar26 + 0x20))
              (uVar11 + (long)pvVar22 & uVar15,(ulong)(uVar11 + (long)puVar24) & uVar15,lVar7);
    if (uVar3 == 0 && uVar4 == 0) {
      *(undefined1 *)((long)pvVar22 + sVar1) = 0;
    }
  }
  else {
    if (uVar4 < uVar3) {
      pcVar14 = *(code **)(lVar26 + 0x30);
      puVar8 = (uint *)((ulong)(uVar11 + (long)puVar24) & uVar15);
      lVar21 = lVar7;
      uVar19 = uVar3;
    }
    else {
      pcVar14 = *(code **)(lVar25 + 0x30);
      puVar8 = puVar24;
      lVar21 = lVar6;
      uVar19 = uVar4;
    }
    (*pcVar14)(puVar8,uVar19,lVar21);
    if ((int)puVar8 == 0) goto LAB_100777f08;
LAB_100777eb8:
    _memcpy(pvVar22,puVar24,sVar2);
  }
  *(undefined1 *)((long)param_1 + uVar17) = 1;
LAB_100777dbc:
  lVar7 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar9,lVar20,PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Duration_100eaeaf0);
  lVar21 = *(long *)(lVar7 + -8);
  uVar11 = (ulong)*(byte *)(lVar21 + 0x50);
  lVar6 = uVar17 + uVar11 + 1;
  uVar17 = lVar6 + (long)param_1 & (uVar11 ^ 0xffffffffffffffff);
  uVar18 = (ulong)(lVar6 + (long)param_2) & (uVar11 ^ 0xffffffffffffffff);
  (**(code **)(lVar21 + 0x20))(uVar17,uVar18,lVar7);
  uVar11 = (ulong)*(byte *)(*(long *)(lVar20 + -8) + 0x50);
  lVar6 = *(long *)(lVar21 + 0x40) + uVar11;
  (**(code **)(*(long *)(lVar20 + -8) + 0x20))
            (lVar6 + uVar17 & (uVar11 ^ 0xffffffffffffffff),
             lVar6 + uVar18 & (uVar11 ^ 0xffffffffffffffff),lVar20);
  return param_1;
}



/* Address: 0x100777f5c | FUN_100777f5c */

uint * FUN_100777f5c(uint *param_1,uint *param_2,long param_3)

{
  size_t sVar1;
  size_t sVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  uint *puVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  void *pvVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  undefined8 uVar26;
  ulong uVar27;
  long lVar28;
  uint *puVar29;
  ulong uVar30;
  undefined8 uVar31;
  
  lVar28 = *(long *)(param_3 + 0x10);
  lVar10 = *(long *)(lVar28 + -8);
  uVar30 = *(ulong *)(lVar10 + 0x40);
  if (param_1 == param_2) {
    uVar26 = *(undefined8 *)(param_3 + 0x28);
    lVar22 = *(long *)(param_3 + 0x18);
    lVar7 = 0;
    _swift_getAssociatedTypeWitness
              (0,*(undefined8 *)(param_3 + 0x20),lVar28,
               PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
               PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
    lVar8 = 0;
    _swift_getAssociatedTypeWitness
              (0,uVar26,lVar22,PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008
               ,PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
    goto LAB_100778584;
  }
  lVar7 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),lVar28,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar24 = *(long *)(lVar7 + -8);
  bVar5 = *(byte *)(lVar24 + 0x50);
  uVar26 = *(undefined8 *)(param_3 + 0x28);
  lVar22 = *(long *)(param_3 + 0x18);
  lVar8 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar26,lVar22,PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  lVar23 = *(long *)(lVar8 + -8);
  uVar3 = *(uint *)(lVar23 + 0x54);
  uVar11 = (ulong)*(uint *)(lVar23 + 0x50) & 0xff;
  uVar25 = (ulong)(*(uint *)(lVar23 + 0x50) & 0xff | (uint)bVar5);
  uVar16 = uVar25 + 0x18 & (uVar25 ^ 0xffffffffffffffff);
  uVar4 = *(uint *)(lVar24 + 0x54);
  uVar18 = *(long *)(lVar24 + 0x40) + uVar11;
  sVar1 = (uVar18 & (uVar11 ^ 0xffffffffffffffff)) + *(long *)(lVar23 + 0x40);
  uVar20 = sVar1 + uVar16;
  sVar2 = sVar1;
  if (uVar3 == 0 && uVar4 == 0) {
    sVar2 = sVar1 + 1;
  }
  uVar16 = sVar2 + uVar16;
  if (uVar16 <= uVar30) {
    uVar16 = uVar30;
  }
  if (uVar16 <= uVar20) {
    uVar16 = uVar20;
  }
  if (uVar16 < 0x19) {
    uVar16 = 0x18;
  }
  bVar5 = *(byte *)((long)param_1 + uVar16);
  uVar13 = (uint)bVar5;
  uVar15 = (uint)uVar16;
  if (4 < bVar5) {
    uVar19 = 4;
    if (uVar15 < 4) {
      uVar19 = uVar15;
    }
    if ((int)uVar19 < 2) {
      if (uVar19 == 0) goto LAB_100778130;
      uVar13 = (uint)(byte)*param_1;
    }
    else if (uVar19 == 2) {
      uVar13 = (uint)(ushort)*param_1;
    }
    else if (uVar19 == 3) {
      uVar13 = (uint)(uint3)*param_1;
    }
    else {
      uVar13 = *param_1;
    }
    if (uVar15 < 4) {
      uVar13 = uVar13 | bVar5 - 5 << (ulong)((uVar15 & 3) << 3);
    }
    uVar13 = uVar13 + 5;
  }
LAB_100778130:
  uVar20 = ~uVar25;
  uVar11 = ~uVar11;
  uVar19 = (uint)sVar1;
  if ((int)uVar13 < 2) {
    if (uVar13 == 0) {
      (**(code **)(lVar10 + 8))(param_1,lVar28);
    }
    else if (uVar13 == 1) {
      _swift_release(*(undefined8 *)param_1);
      puVar29 = (uint *)(((ulong)((long)param_1 + 0xf) & 0xfffffffffffffff8) + uVar25 + 0x10 &
                        uVar20);
      if (uVar3 == 0 && uVar4 == 0) {
        if (*(byte *)((long)puVar29 + sVar1) != 0) {
          uVar13 = 0;
          if (uVar19 < 4) {
            uVar13 = *(byte *)((long)puVar29 + sVar1) - 1 << (ulong)((uVar19 & 3) << 3);
          }
          if (uVar19 == 0) {
            uVar14 = 0;
          }
          else {
            uVar14 = 4;
            if (uVar19 < 4) {
              uVar14 = uVar19;
            }
            if ((int)uVar14 < 3) {
              if (uVar14 == 1) {
                uVar14 = (uint)(byte)*puVar29;
              }
              else {
                uVar14 = (uint)(ushort)*puVar29;
              }
            }
            else if (uVar14 == 3) {
              uVar14 = (uint)(uint3)*puVar29;
            }
            else {
              uVar14 = *puVar29;
            }
          }
          if ((uVar14 | uVar13) != 0xffffffff) goto LAB_100778344;
        }
      }
      else {
        if (uVar4 < uVar3) {
          uVar27 = (ulong)(uVar18 + (long)puVar29) & uVar11;
          (**(code **)(lVar23 + 0x30))(uVar27,uVar3,lVar8);
          iVar6 = (int)uVar27;
        }
        else {
          puVar9 = puVar29;
          (**(code **)(lVar24 + 0x30))(puVar29,uVar4,lVar7);
          iVar6 = (int)puVar9;
        }
        if (iVar6 != 0) goto LAB_100778344;
      }
      (**(code **)(lVar24 + 8))(puVar29,lVar7);
      goto LAB_100778330;
    }
  }
  else if (uVar13 == 2) {
    _swift_release(*(undefined8 *)param_1);
  }
  else if (uVar13 == 3) {
    _swift_release(*(undefined8 *)param_1);
    puVar29 = (uint *)(((ulong)((long)param_1 + 0xf) & 0xfffffffffffffff8) + uVar25 + 0x10 & uVar20)
    ;
    (**(code **)(lVar24 + 8))(puVar29,lVar7);
LAB_100778330:
    (**(code **)(lVar23 + 8))((ulong)(uVar18 + (long)puVar29) & uVar11,lVar8);
  }
  else if (uVar13 == 4) {
    _swift_errorRelease(*(undefined8 *)param_1);
  }
LAB_100778344:
  bVar5 = *(byte *)((long)param_2 + uVar16);
  uVar13 = (uint)bVar5;
  if (bVar5 < 5) {
LAB_1007783b0:
    if ((int)uVar13 < 2) goto LAB_1007784c0;
LAB_1007783b8:
    if (uVar13 == 2) {
      uVar31 = *(undefined8 *)param_2;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)param_1 = uVar31;
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
      *(byte *)((long)param_1 + uVar16) = 2;
      goto LAB_100778584;
    }
    if (uVar13 == 3) {
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      puVar17 = (undefined8 *)((ulong)((long)param_1 + 0xfU) & 0xfffffffffffffff8);
      puVar12 = (undefined8 *)((ulong)((long)param_2 + 0xf) & 0xfffffffffffffff8);
      *puVar17 = *puVar12;
      puVar17 = puVar17 + 1;
      puVar12 = puVar12 + 1;
      *puVar17 = *puVar12;
      uVar27 = (long)puVar17 + uVar25 + 8 & uVar20;
      uVar20 = (long)puVar12 + uVar25 + 8 & uVar20;
      (**(code **)(lVar24 + 0x20))(uVar27,uVar20,lVar7);
      (**(code **)(lVar23 + 0x20))(uVar18 + uVar27 & uVar11,uVar18 + uVar20 & uVar11,lVar8);
      *(byte *)((long)param_1 + uVar16) = 3;
      goto LAB_100778584;
    }
    if (uVar13 == 4) {
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      *(byte *)((long)param_1 + uVar16) = 4;
      goto LAB_100778584;
    }
LAB_100778570:
    _memcpy(param_1,param_2,uVar16 + 1);
    goto LAB_100778584;
  }
  uVar14 = 4;
  if (uVar15 < 4) {
    uVar14 = uVar15;
  }
  if ((int)uVar14 < 2) {
    if (uVar14 == 0) goto LAB_1007783b0;
    uVar13 = (uint)(byte)*param_2;
  }
  else if (uVar14 == 2) {
    uVar13 = (uint)(ushort)*param_2;
  }
  else if (uVar14 == 3) {
    uVar13 = (uint)(uint3)*param_2;
  }
  else {
    uVar13 = *param_2;
  }
  if (3 < uVar15) {
    uVar13 = uVar13 + 5;
    goto LAB_1007783b0;
  }
  uVar13 = (uVar13 | bVar5 - 5 << (ulong)((uVar15 & 3) << 3)) + 5;
  if (1 < (int)uVar13) goto LAB_1007783b8;
LAB_1007784c0:
  if (uVar13 == 0) {
    (**(code **)(lVar10 + 0x20))(param_1,param_2,lVar28);
    *(byte *)((long)param_1 + uVar16) = 0;
    goto LAB_100778584;
  }
  if (uVar13 != 1) goto LAB_100778570;
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  puVar17 = (undefined8 *)((ulong)((long)param_1 + 0xf) & 0xfffffffffffffff8);
  puVar12 = (undefined8 *)((ulong)((long)param_2 + 0xf) & 0xfffffffffffffff8);
  *puVar17 = *puVar12;
  puVar17 = puVar17 + 1;
  puVar12 = puVar12 + 1;
  *puVar17 = *puVar12;
  pvVar21 = (void *)((long)puVar17 + uVar25 + 8 & uVar20);
  puVar29 = (uint *)((long)puVar12 + uVar25 + 8 & uVar20);
  if (uVar3 == 0 && uVar4 == 0) {
    if (*(byte *)((long)puVar29 + sVar1) != 0) {
      uVar13 = 0;
      if (uVar19 < 4) {
        uVar13 = *(byte *)((long)puVar29 + sVar1) - 1 << (ulong)((uVar19 & 3) << 3);
      }
      if (uVar19 == 0) {
        uVar15 = 0;
      }
      else {
        uVar15 = 4;
        if (uVar19 < 4) {
          uVar15 = uVar19;
        }
        if ((int)uVar15 < 3) {
          if (uVar15 == 1) {
            uVar15 = (uint)(byte)*puVar29;
          }
          else {
            uVar15 = (uint)(ushort)*puVar29;
          }
        }
        else if (uVar15 == 3) {
          uVar15 = (uint)(uint3)*puVar29;
        }
        else {
          uVar15 = *puVar29;
        }
      }
      if ((uVar15 | uVar13) != 0xffffffff) goto LAB_1007786fc;
    }
LAB_10077874c:
    (**(code **)(lVar24 + 0x20))(pvVar21,puVar29,lVar7);
    (**(code **)(lVar23 + 0x20))
              (uVar18 + (long)pvVar21 & uVar11,(ulong)(uVar18 + (long)puVar29) & uVar11,lVar8);
    if (uVar3 == 0 && uVar4 == 0) {
      *(undefined1 *)((long)pvVar21 + sVar1) = 0;
    }
  }
  else {
    if (uVar4 < uVar3) {
      uVar20 = (ulong)(uVar18 + (long)puVar29) & uVar11;
      (**(code **)(lVar23 + 0x30))(uVar20,uVar3,lVar8);
      iVar6 = (int)uVar20;
    }
    else {
      puVar9 = puVar29;
      (**(code **)(lVar24 + 0x30))(puVar29,uVar4,lVar7);
      iVar6 = (int)puVar9;
    }
    if (iVar6 == 0) goto LAB_10077874c;
LAB_1007786fc:
    _memcpy(pvVar21,puVar29,sVar2);
  }
  *(byte *)((long)param_1 + uVar16) = 1;
LAB_100778584:
  lVar10 = *(long *)(lVar7 + -8);
  lVar28 = *(long *)(lVar8 + -8);
  uVar20 = (ulong)*(uint *)(lVar28 + 0x50) & 0xff;
  uVar18 = (ulong)(*(uint *)(lVar28 + 0x50) & 0xff | (uint)*(byte *)(lVar10 + 0x50));
  uVar18 = (*(long *)(lVar10 + 0x40) + uVar20 & (uVar20 ^ 0xffffffffffffffff)) +
           *(long *)(lVar28 + 0x40) + (uVar18 + 0x18 & (uVar18 ^ 0xffffffffffffffff));
  uVar20 = uVar18;
  if (*(int *)(lVar28 + 0x54) == 0 && *(int *)(lVar10 + 0x54) == 0) {
    uVar20 = uVar18 + 1;
  }
  if (uVar20 <= uVar30) {
    uVar20 = uVar30;
  }
  if (uVar20 <= uVar18) {
    uVar20 = uVar18;
  }
  if (uVar20 < 0x19) {
    uVar20 = 0x18;
  }
  lVar28 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar26,lVar22,PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Duration_100eaeaf0);
  lVar7 = *(long *)(lVar28 + -8);
  uVar30 = (ulong)*(byte *)(lVar7 + 0x50);
  lVar10 = uVar20 + uVar30 + 1;
  uVar20 = (ulong)(lVar10 + (long)param_1) & (uVar30 ^ 0xffffffffffffffff);
  uVar18 = (ulong)(lVar10 + (long)param_2) & (uVar30 ^ 0xffffffffffffffff);
  (**(code **)(lVar7 + 0x28))(uVar20,uVar18,lVar28);
  uVar30 = (ulong)*(byte *)(*(long *)(lVar22 + -8) + 0x50);
  lVar10 = *(long *)(lVar7 + 0x40) + uVar30;
  (**(code **)(*(long *)(lVar22 + -8) + 0x28))
            (lVar10 + uVar20 & (uVar30 ^ 0xffffffffffffffff),
             lVar10 + uVar18 & (uVar30 ^ 0xffffffffffffffff),lVar22);
  return param_1;
}



/* Address: 0x1007787ac | FUN_1007787ac */

ulong FUN_1007787ac(uint *param_1,uint param_2,long param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  undefined8 uVar18;
  ulong uVar19;
  long lVar20;
  
  uVar19 = *(ulong *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x40);
  lVar8 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),*(long *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  puVar7 = PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008;
  lVar20 = *(long *)(lVar8 + -8);
  bVar5 = *(byte *)(lVar20 + 0x50);
  uVar18 = *(undefined8 *)(param_3 + 0x28);
  lVar8 = *(long *)(param_3 + 0x18);
  lVar9 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar18,lVar8,PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  lVar9 = *(long *)(lVar9 + -8);
  uVar12 = (ulong)*(uint *)(lVar9 + 0x50) & 0xff;
  uVar14 = (ulong)(*(uint *)(lVar9 + 0x50) & 0xff | (uint)bVar5);
  uVar12 = (*(long *)(lVar20 + 0x40) + uVar12 & (uVar12 ^ 0xffffffffffffffff)) +
           *(long *)(lVar9 + 0x40) + (uVar14 + 0x18 & (uVar14 ^ 0xffffffffffffffff));
  uVar14 = uVar12;
  if (*(int *)(lVar9 + 0x54) == 0 && *(int *)(lVar20 + 0x54) == 0) {
    uVar14 = uVar12 + 1;
  }
  if (uVar14 <= uVar19) {
    uVar14 = uVar19;
  }
  if (uVar14 <= uVar12) {
    uVar14 = uVar12;
  }
  if (uVar14 < 0x19) {
    uVar14 = 0x18;
  }
  lVar9 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar18,lVar8,puVar7,
             PTR___associated_type_descriptor_for_Swift_Clock_Duration_100eaeaf0);
  lVar20 = *(long *)(lVar9 + -8);
  uVar13 = *(uint *)(lVar20 + 0x54);
  lVar15 = *(long *)(lVar8 + -8);
  uVar10 = *(uint *)(lVar15 + 0x54);
  uVar4 = uVar13;
  if (uVar13 <= uVar10) {
    uVar4 = uVar10;
  }
  uVar3 = uVar4;
  if (uVar4 < 0xfb) {
    uVar3 = 0xfa;
  }
  if (param_2 == 0) {
    return 0;
  }
  uVar16 = (ulong)*(byte *)(lVar20 + 0x50);
  uVar12 = uVar14 + uVar16 + 1;
  uVar19 = (ulong)*(byte *)(lVar15 + 0x50);
  lVar1 = *(long *)(lVar20 + 0x40) + uVar19;
  if (param_2 < uVar3 || param_2 - uVar3 == 0) goto LAB_100778984;
  lVar2 = (lVar1 + (uVar12 & (uVar16 ^ 0xffffffffffffffff)) & (uVar19 ^ 0xffffffffffffffff)) +
          *(long *)(lVar15 + 0x40);
  uVar17 = (uint)lVar2;
  uVar6 = uVar17 << 3;
  if (uVar17 < 4) {
    uVar11 = ((param_2 - uVar3) + ~(-1 << (ulong)(uVar6 & 0x1f)) >> (ulong)(uVar6 & 0x1f)) + 1;
    if (uVar11 < 0x100) {
      if (uVar11 < 2) goto LAB_100778984;
      goto LAB_100778914;
    }
    if (uVar11 >> 0x10 == 0) {
      uVar11 = (uint)*(ushort *)((long)param_1 + lVar2);
    }
    else {
      uVar11 = *(uint *)((long)param_1 + lVar2);
    }
  }
  else {
LAB_100778914:
    uVar11 = (uint)*(byte *)((long)param_1 + lVar2);
  }
  if (uVar11 != 0) {
    uVar4 = 0;
    if (uVar17 < 4) {
      uVar4 = uVar11 - 1 << (ulong)(uVar6 & 0x1f);
    }
    if (uVar17 == 0) {
      uVar13 = 0;
    }
    else {
      uVar13 = 4;
      if (uVar17 < 4) {
        uVar13 = uVar17;
      }
      if ((int)uVar13 < 3) {
        if (uVar13 == 1) {
          uVar13 = (uint)(byte)*param_1;
        }
        else {
          uVar13 = (uint)(ushort)*param_1;
        }
      }
      else if (uVar13 == 3) {
        uVar13 = (uint)(uint3)*param_1;
      }
      else {
        uVar13 = *param_1;
      }
    }
    return (ulong)(uVar3 + (uVar13 | uVar4) + 1);
  }
LAB_100778984:
  if (uVar4 < 0xfb) {
    uVar4 = 0;
    if (5 < *(byte *)((long)param_1 + uVar14)) {
      uVar4 = (*(byte *)((long)param_1 + uVar14) ^ 0xff) + 1;
    }
    return (ulong)uVar4;
  }
  uVar12 = (ulong)(uVar12 + (long)param_1) & ~uVar16;
  if (uVar13 == uVar3) {
    UNRECOVERED_JUMPTABLE = *(code **)(lVar20 + 0x30);
    lVar8 = lVar9;
    uVar10 = uVar13;
  }
  else {
    UNRECOVERED_JUMPTABLE = *(code **)(lVar15 + 0x30);
    uVar12 = lVar1 + uVar12 & ~uVar19;
  }
                    /* WARNING: Could not recover jumptable at 0x0001007789e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar12,uVar10,lVar8);
  return uVar12;
}



/* Address: 0x100778a54 | FUN_100778a54 */

void FUN_100778a54(uint *param_1,undefined8 param_2,uint param_3,long param_4)

{
  long lVar1;
  size_t sVar2;
  uint uVar3;
  uint uVar4;
  undefined2 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  undefined8 uVar18;
  byte bVar19;
  ulong uVar20;
  long lVar21;
  
  uVar20 = *(ulong *)(*(long *)(*(long *)(param_4 + 0x10) + -8) + 0x40);
  lVar7 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 0x20),*(long *)(param_4 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  puVar6 = PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008;
  lVar21 = *(long *)(lVar7 + -8);
  bVar19 = *(byte *)(lVar21 + 0x50);
  uVar18 = *(undefined8 *)(param_4 + 0x28);
  lVar7 = *(long *)(param_4 + 0x18);
  lVar8 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar18,lVar7,PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  lVar8 = *(long *)(lVar8 + -8);
  uVar11 = (ulong)*(uint *)(lVar8 + 0x50) & 0xff;
  uVar13 = (ulong)(*(uint *)(lVar8 + 0x50) & 0xff | (uint)bVar19);
  uVar11 = (*(long *)(lVar21 + 0x40) + uVar11 & (uVar11 ^ 0xffffffffffffffff)) +
           *(long *)(lVar8 + 0x40) + (uVar13 + 0x18 & (uVar13 ^ 0xffffffffffffffff));
  uVar13 = uVar11;
  if (*(int *)(lVar8 + 0x54) == 0 && *(int *)(lVar21 + 0x54) == 0) {
    uVar13 = uVar11 + 1;
  }
  if (uVar13 <= uVar20) {
    uVar13 = uVar20;
  }
  if (uVar13 <= uVar11) {
    uVar13 = uVar11;
  }
  if (uVar13 < 0x19) {
    uVar13 = 0x18;
  }
  lVar8 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar18,lVar7,puVar6,
             PTR___associated_type_descriptor_for_Swift_Clock_Duration_100eaeaf0);
  lVar21 = *(long *)(lVar8 + -8);
  uVar10 = *(uint *)(lVar21 + 0x54);
  lVar12 = *(long *)(lVar7 + -8);
  uVar9 = *(uint *)(lVar12 + 0x54);
  uVar3 = uVar10;
  if (uVar10 <= uVar9) {
    uVar3 = uVar9;
  }
  uVar4 = uVar3;
  if (uVar3 < 0xfb) {
    uVar4 = 0xfa;
  }
  uVar14 = (ulong)*(byte *)(lVar21 + 0x50);
  uVar11 = uVar13 + uVar14 + 1;
  uVar20 = (ulong)*(byte *)(lVar12 + 0x50);
  lVar1 = *(long *)(lVar21 + 0x40) + uVar20;
  sVar2 = (lVar1 + (uVar11 & (uVar14 ^ 0xffffffffffffffff)) & (uVar20 ^ 0xffffffffffffffff)) +
          *(long *)(lVar12 + 0x40);
  uVar17 = (uint)sVar2;
  if (param_3 < uVar4 || param_3 - uVar4 == 0) {
    bVar19 = 0;
  }
  else if (uVar17 < 4) {
    uVar15 = ((param_3 - uVar4) + ~(-1 << (ulong)(uVar17 << 3 & 0x1f)) >>
             (ulong)(uVar17 << 3 & 0x1f)) + 1;
    bVar19 = 2;
    if (0xffff < uVar15) {
      bVar19 = 4;
    }
    if (uVar15 < 0x100) {
      bVar19 = 1 < uVar15;
    }
  }
  else {
    bVar19 = 1;
  }
  uVar15 = (uint)param_2;
  if (uVar4 < uVar15) {
    uVar15 = uVar15 + ~uVar4;
    if (uVar17 < 4) {
      iVar16 = (uVar15 >> (ulong)(uVar17 << 3 & 0x1f)) + 1;
      if (uVar17 != 0) {
        uVar3 = uVar15 & (-1 << (ulong)(uVar17 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar2);
        uVar5 = (undefined2)uVar3;
        if (uVar17 == 3) {
          *(undefined2 *)param_1 = uVar5;
          *(char *)((long)param_1 + 2) = (char)(uVar3 >> 0x10);
        }
        else if (uVar17 == 2) {
          *(undefined2 *)param_1 = uVar5;
        }
        else {
          *(char *)param_1 = (char)uVar15;
        }
      }
    }
    else {
      _bzero(param_1,sVar2);
      *param_1 = uVar15;
      iVar16 = 1;
    }
    if (bVar19 < 2) {
      if (bVar19 != 0) {
        *(char *)((long)param_1 + sVar2) = (char)iVar16;
      }
    }
    else if (bVar19 == 2) {
      *(short *)((long)param_1 + sVar2) = (short)iVar16;
    }
    else {
      *(int *)((long)param_1 + sVar2) = iVar16;
    }
  }
  else {
    if (bVar19 < 2) {
      if (bVar19 != 0) {
        *(undefined1 *)((long)param_1 + sVar2) = 0;
      }
    }
    else if (bVar19 == 2) {
      *(undefined2 *)((long)param_1 + sVar2) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar2) = 0;
    }
    if (uVar15 != 0) {
      if (0xfa < uVar3) {
        uVar11 = uVar11 + (long)param_1 & ~uVar14;
        if (uVar10 == uVar4) {
          UNRECOVERED_JUMPTABLE = *(code **)(lVar21 + 0x38);
          lVar7 = lVar8;
          uVar9 = uVar10;
        }
        else {
          UNRECOVERED_JUMPTABLE = *(code **)(lVar12 + 0x38);
          uVar11 = lVar1 + uVar11 & ~uVar20;
        }
                    /* WARNING: Could not recover jumptable at 0x000100778d7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(uVar11,param_2,uVar9,lVar7);
        return;
      }
      if (uVar15 < 0xfb) {
        *(char *)((long)param_1 + uVar13) = -(char)param_2;
      }
      else {
        uVar3 = (int)uVar13 + 1;
        uVar10 = 0xffffffff;
        if (uVar3 < 4) {
          uVar10 = ~(-1 << (ulong)(uVar3 * 8 & 0x1f));
        }
        if (uVar3 != 0) {
          uVar10 = uVar10 & uVar15 - 0xfb;
          uVar9 = 4;
          if (uVar3 < 4) {
            uVar9 = uVar3;
          }
          _bzero(param_1,(ulong)uVar3);
          if ((int)uVar9 < 3) {
            if (uVar9 == 1) {
              *(char *)param_1 = (char)uVar10;
            }
            else {
              *(short *)param_1 = (short)uVar10;
            }
          }
          else if (uVar9 == 3) {
            *(short *)param_1 = (short)uVar10;
            *(char *)((long)param_1 + 2) = (char)(uVar10 >> 0x10);
          }
          else {
            *param_1 = uVar10;
          }
        }
      }
    }
  }
  return;
}



/* Address: 0x100778e04 | FUN_100778e04 */

void FUN_100778e04(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetStructDescriptor_100cbf2dc);
  return;
}



/* Address: 0x100778e10 | FUN_100778e10 */

void FUN_100778e10(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetEnumDescriptor_100cbf350);
  return;
}



/* Address: 0x100778e1c | FUN_100778e1c */

undefined1  [16] FUN_100778e1c(long param_1)

{
  undefined *puVar1;
  Optional OVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined7 extraout_var;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auStack_108 [32];
  undefined1 auStack_e8 [32];
  undefined *local_c8;
  undefined *puStack_c0;
  undefined *local_b8;
  undefined1 *local_b0;
  undefined1 auStack_a8 [32];
  long local_88;
  undefined1 *local_80;
  undefined *puStack_78;
  undefined1 *local_70;
  undefined *puStack_68;
  
  uVar6 = *(ulong *)(param_1 + 0x10);
  lVar3 = 0x13f;
  _swift_checkMetadataState();
  if (uVar6 < 0x40) {
    local_88 = *(long *)(lVar3 + -8) + 0x40;
    puVar1 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
    puStack_c0 = &DAT_100c76e40;
    local_b8 = &DAT_100c76e40;
    uVar7 = *(ulong *)(param_1 + 0x20);
    lVar4 = 0xff;
    local_c8 = puVar1;
    _swift_getAssociatedTypeWitness();
    uVar8 = *(ulong *)(param_1 + 0x28);
    lVar5 = 0xff;
    _swift_getAssociatedTypeWitness
              (0xff,uVar8,*(undefined8 *)(param_1 + 0x18),
               PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
               PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
    uVar6 = 0xff;
    _swift_getTupleTypeMetadata2(0xff,lVar4,lVar5,"element deadline ",0);
    OVar2 = Swift::Optional::typeMetadataAccessor();
    lVar3 = CONCAT71(extraout_var,OVar2.value);
    if (uVar6 < 0x40) {
      local_b0 = (undefined1 *)(*(long *)(CONCAT71(extraout_var,OVar2.value) + -8) + 0x40);
      _swift_getTupleTypeLayout(auStack_a8,0,4,&local_c8);
      puStack_78 = &DAT_100c76e58;
      puStack_c0 = &DAT_100c76e40;
      local_b8 = &DAT_100c76e70;
      if (uVar7 < 0x40) {
        if (uVar8 < 0x40) {
          local_c8 = puVar1;
          local_80 = auStack_a8;
          _swift_getTupleTypeLayout2
                    (auStack_108,*(long *)(lVar4 + -8) + 0x40,*(long *)(lVar5 + -8) + 0x40);
          local_b0 = auStack_108;
          _swift_getTupleTypeLayout(auStack_e8,0,4,&local_c8);
          puStack_68 = &DAT_100c76e88;
          local_70 = auStack_e8;
          _swift_initEnumMetadataMultiPayload(param_1,0,5,&local_88);
          uVar9 = 0;
          lVar4 = 0;
        }
        else {
          uVar9 = 0x3f;
          lVar4 = lVar5;
        }
      }
      else {
        uVar9 = 0x3f;
      }
      goto LAB_100778fb8;
    }
  }
  lVar4 = lVar3;
  uVar9 = 0x3f;
LAB_100778fb8:
  auVar10._8_8_ = uVar9;
  auVar10._0_8_ = lVar4;
  return auVar10;
}



/* Address: 0x100778ff4 | FUN_100778ff4 */

long * FUN_100778ff4(long *param_1,long *param_2,long param_3)

{
  size_t sVar1;
  size_t sVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  uint *puVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  ulong uVar18;
  ulong uVar19;
  code *pcVar20;
  long lVar21;
  undefined8 *puVar22;
  long lVar23;
  uint *puVar24;
  long lVar25;
  long lVar26;
  
  lVar23 = *(long *)(param_3 + 0x10);
  lVar26 = *(long *)(lVar23 + -8);
  uVar19 = *(ulong *)(lVar26 + 0x40);
  lVar7 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),lVar23,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar25 = *(long *)(lVar7 + -8);
  uVar15 = *(uint *)(lVar25 + 0x50);
  lVar8 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x18),
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  lVar21 = *(long *)(lVar8 + -8);
  uVar4 = *(uint *)(lVar21 + 0x54);
  uVar12 = (ulong)*(uint *)(lVar21 + 0x50) & 0xff;
  uVar15 = *(uint *)(lVar21 + 0x50) | uVar15;
  uVar14 = uVar15 & 0xff;
  uVar18 = (ulong)uVar14 + 0x18 & ((ulong)uVar14 ^ 0xffffffffffffffff);
  uVar5 = *(uint *)(lVar25 + 0x54);
  uVar13 = *(long *)(lVar25 + 0x40) + uVar12;
  sVar1 = (uVar13 & (uVar12 ^ 0xffffffffffffffff)) + *(long *)(lVar21 + 0x40);
  uVar9 = sVar1 + uVar18;
  sVar2 = sVar1;
  if (uVar4 == 0 && uVar5 == 0) {
    sVar2 = sVar1 + 1;
  }
  uVar18 = sVar2 + uVar18;
  if (uVar18 <= uVar19) {
    uVar18 = uVar19;
  }
  if (uVar18 <= uVar9) {
    uVar18 = uVar9;
  }
  if (uVar18 < 0x19) {
    uVar18 = 0x18;
  }
  uVar14 = uVar14 | *(uint *)(lVar26 + 0x50) & 0xf8;
  if ((7 < uVar14 || ((*(uint *)(lVar26 + 0x50) | uVar15) & 0x100000) != 0) || 0x18 < uVar18 + 1) {
    uVar13 = (ulong)(uVar14 | 7);
    lVar7 = *param_2;
    *param_1 = lVar7;
    param_1 = (long *)(lVar7 + (uVar13 + 0x10 & (uVar13 ^ 0xffffffffffffffff)));
LAB_10077911c:
    _swift_retain();
    return param_1;
  }
  uVar14 = (uint)*(byte *)((long)param_2 + uVar18);
  if (4 < *(byte *)((long)param_2 + uVar18)) {
    uVar14 = (int)*param_2 + 5;
  }
  uVar12 = ~uVar12;
  if (1 < (int)uVar14) {
    if (uVar14 != 2) {
      if (uVar14 == 3) {
        lVar23 = *param_2;
        *param_1 = lVar23;
        puVar16 = (undefined8 *)((long)param_1 + 0xfU & 0xfffffffffffffff8);
        puVar17 = (undefined8 *)((long)param_2 + 0xfU & 0xfffffffffffffff8);
        *puVar16 = *puVar17;
        puVar16[1] = puVar17[1];
        pcVar20 = *(code **)(lVar25 + 0x10);
        _swift_retain(lVar23);
        (*pcVar20)(puVar16 + 2,puVar17 + 2,lVar7);
        (**(code **)(lVar21 + 0x10))
                  (uVar13 + (long)(puVar16 + 2) & uVar12,uVar13 + (long)(puVar17 + 2) & uVar12,lVar8
                  );
        *(undefined1 *)((long)param_1 + uVar18) = 3;
        return param_1;
      }
      if (uVar14 == 4) {
        lVar7 = *param_2;
        _swift_errorRetain(lVar7);
        *param_1 = lVar7;
        *(undefined1 *)((long)param_1 + uVar18) = 4;
        return param_1;
      }
LAB_1007792dc:
      plVar10 = _memcpy(param_1,param_2,uVar18 + 1);
      return plVar10;
    }
    *param_1 = *param_2;
    lVar7 = param_2[1];
    param_1[2] = param_2[2];
    param_1[1] = lVar7;
    *(undefined1 *)((long)param_1 + uVar18) = 2;
    goto LAB_10077911c;
  }
  if (uVar14 == 0) {
    (**(code **)(lVar26 + 0x10))(param_1,param_2,lVar23);
    *(undefined1 *)((long)param_1 + uVar18) = 0;
    return param_1;
  }
  if (uVar14 != 1) goto LAB_1007792dc;
  *param_1 = *param_2;
  puVar16 = (undefined8 *)((long)param_1 + 0xfU & 0xfffffffffffffff8);
  puVar17 = (undefined8 *)((long)param_2 + 0xfU & 0xfffffffffffffff8);
  *puVar16 = *puVar17;
  puVar24 = (uint *)(puVar17 + 2);
  puVar22 = puVar16 + 2;
  puVar16[1] = puVar17[1];
  _swift_retain();
  if (uVar4 == 0 && uVar5 == 0) {
    if (*(byte *)((long)puVar24 + sVar1) != 0) {
      uVar15 = (uint)sVar1;
      uVar14 = 0;
      if (uVar15 < 4) {
        uVar14 = *(byte *)((long)puVar24 + sVar1) - 1 << (ulong)((uVar15 & 3) << 3);
      }
      if (uVar15 == 0) {
        uVar15 = 0;
      }
      else {
        uVar3 = 4;
        if (uVar15 < 4) {
          uVar3 = uVar15;
        }
        if ((int)uVar3 < 3) {
          if (uVar3 == 1) {
            uVar15 = (uint)(byte)*puVar24;
          }
          else {
            uVar15 = (uint)(ushort)*puVar24;
          }
        }
        else if (uVar3 == 3) {
          uVar15 = (uint)(uint3)*puVar24;
        }
        else {
          uVar15 = *puVar24;
        }
      }
      if ((uVar15 | uVar14) != 0xffffffff) goto LAB_100779360;
    }
  }
  else {
    if (uVar5 < uVar4) {
      uVar9 = (ulong)(uVar13 + (long)puVar24) & uVar12;
      (**(code **)(lVar21 + 0x30))(uVar9,uVar4,lVar8);
      iVar6 = (int)uVar9;
    }
    else {
      puVar11 = puVar24;
      (**(code **)(lVar25 + 0x30))(puVar24,uVar5,lVar7);
      iVar6 = (int)puVar11;
    }
    if (iVar6 != 0) {
LAB_100779360:
      _memcpy(puVar22,puVar24,sVar2);
      goto LAB_1007793e8;
    }
  }
  (**(code **)(lVar25 + 0x10))(puVar22,puVar24,lVar7);
  (**(code **)(lVar21 + 0x10))
            (uVar13 + (long)puVar22 & uVar12,(ulong)(uVar13 + (long)puVar24) & uVar12,lVar8);
  if (uVar4 == 0 && uVar5 == 0) {
    *(undefined1 *)((long)puVar22 + sVar1) = 0;
  }
LAB_1007793e8:
  *(undefined1 *)((long)param_1 + uVar18) = 1;
  return param_1;
}



/* Address: 0x1007793f4 | FUN_1007793f4 */

void FUN_1007793f4(uint *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  uint *puVar10;
  code *UNRECOVERED_JUMPTABLE;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  uint *puVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  
  lVar19 = *(long *)(param_2 + 0x10);
  lVar11 = *(long *)(lVar19 + -8);
  uVar22 = *(ulong *)(lVar11 + 0x40);
  lVar8 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x20),lVar19,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar20 = *(long *)(lVar8 + -8);
  bVar6 = *(byte *)(lVar20 + 0x50);
  lVar9 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x18),
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  lVar21 = *(long *)(lVar9 + -8);
  uVar5 = *(uint *)(lVar21 + 0x54);
  uVar12 = (ulong)*(uint *)(lVar21 + 0x50) & 0xff;
  uVar16 = (ulong)(*(uint *)(lVar21 + 0x50) & 0xff | (uint)bVar6);
  uVar14 = *(uint *)(lVar20 + 0x54);
  uVar1 = *(long *)(lVar20 + 0x40) + uVar12;
  lVar2 = (uVar1 & (uVar12 ^ 0xffffffffffffffff)) + *(long *)(lVar21 + 0x40);
  uVar18 = lVar2 + (uVar16 + 0x18 & (uVar16 ^ 0xffffffffffffffff));
  uVar3 = uVar18;
  if (uVar5 == 0 && uVar14 == 0) {
    uVar3 = uVar18 + 1;
  }
  if (uVar3 <= uVar22) {
    uVar3 = uVar22;
  }
  if (uVar3 <= uVar18) {
    uVar3 = uVar18;
  }
  if (uVar3 < 0x19) {
    uVar3 = 0x18;
  }
  bVar6 = *(byte *)((long)param_1 + uVar3);
  uVar15 = (uint)bVar6;
  if (4 < bVar6) {
    uVar13 = (uint)uVar3;
    uVar4 = 4;
    if (uVar13 < 4) {
      uVar4 = uVar13;
    }
    if ((int)uVar4 < 2) {
      if (uVar4 == 0) goto LAB_100779564;
      uVar15 = (uint)(byte)*param_1;
    }
    else if (uVar4 == 2) {
      uVar15 = (uint)(ushort)*param_1;
    }
    else if (uVar4 == 3) {
      uVar15 = (uint)(uint3)*param_1;
    }
    else {
      uVar15 = *param_1;
    }
    if (uVar13 < 4) {
      uVar15 = (uVar15 | bVar6 - 5 << (ulong)((uVar13 & 3) << 3)) + 5;
    }
    else {
      uVar15 = uVar15 + 5;
    }
  }
LAB_100779564:
  uVar12 = ~uVar12;
  if ((int)uVar15 < 2) {
    if (uVar15 == 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(lVar11 + 8);
    }
    else {
      if (uVar15 != 1) {
        return;
      }
      _swift_release(*(undefined8 *)param_1);
      puVar17 = (uint *)(((ulong)((long)param_1 + 0xf) & 0xfffffffffffffff8) + uVar16 + 0x10 &
                        ~uVar16);
      if (uVar5 == 0 && uVar14 == 0) {
        if (*(byte *)((long)puVar17 + lVar2) != 0) {
          uVar14 = (uint)lVar2;
          uVar5 = 0;
          if (uVar14 < 4) {
            uVar5 = *(byte *)((long)puVar17 + lVar2) - 1 << (ulong)((uVar14 & 3) << 3);
          }
          if (uVar14 == 0) {
            uVar14 = 0;
          }
          else {
            uVar15 = 4;
            if (uVar14 < 4) {
              uVar15 = uVar14;
            }
            if ((int)uVar15 < 3) {
              if (uVar15 == 1) {
                uVar14 = (uint)(byte)*puVar17;
              }
              else {
                uVar14 = (uint)(ushort)*puVar17;
              }
            }
            else if (uVar15 == 3) {
              uVar14 = (uint)(uint3)*puVar17;
            }
            else {
              uVar14 = *puVar17;
            }
          }
          if ((uVar14 | uVar5) != 0xffffffff) {
            return;
          }
        }
      }
      else {
        if (uVar14 < uVar5) {
          uVar18 = (ulong)(uVar1 + (long)puVar17) & uVar12;
          (**(code **)(lVar21 + 0x30))(uVar18,uVar5,lVar9);
          iVar7 = (int)uVar18;
        }
        else {
          puVar10 = puVar17;
          (**(code **)(lVar20 + 0x30))(puVar17,uVar14,lVar8);
          iVar7 = (int)puVar10;
        }
        if (iVar7 != 0) {
          return;
        }
      }
      (**(code **)(lVar20 + 8))(puVar17,lVar8);
      UNRECOVERED_JUMPTABLE = *(code **)(lVar21 + 8);
      param_1 = (uint *)((ulong)(uVar1 + (long)puVar17) & uVar12);
      lVar19 = lVar9;
    }
  }
  else {
    if (uVar15 == 2) {
      _swift_release(*(undefined8 *)param_1);
      return;
    }
    if (uVar15 != 3) {
      if (uVar15 != 4) {
        return;
      }
      _swift_errorRelease(*(undefined8 *)param_1);
      return;
    }
    _swift_release(*(undefined8 *)param_1);
    uVar18 = ((ulong)((long)param_1 + 0xf) & 0xfffffffffffffff8) + uVar16 + 0x10 & ~uVar16;
    (**(code **)(lVar20 + 8))(uVar18,lVar8);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar21 + 8);
    param_1 = (uint *)(uVar1 + uVar18 & uVar12);
    lVar19 = lVar9;
  }
                    /* WARNING: Could not recover jumptable at 0x000100779788. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,lVar19);
  return;
}



/* Address: 0x10077978c | FUN_10077978c */

undefined8 * FUN_10077978c(undefined8 *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  size_t sVar2;
  size_t sVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  uint *puVar11;
  undefined1 uVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  uint uVar18;
  undefined8 *puVar19;
  long lVar20;
  void *pvVar21;
  code *pcVar22;
  undefined8 uVar23;
  long lVar24;
  uint *puVar25;
  long lVar26;
  uint uVar27;
  ulong uVar28;
  long lVar29;
  
  lVar24 = *(long *)(param_3 + 0x10);
  lVar20 = *(long *)(lVar24 + -8);
  uVar28 = *(ulong *)(lVar20 + 0x40);
  lVar8 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),lVar24,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar26 = *(long *)(lVar8 + -8);
  bVar6 = *(byte *)(lVar26 + 0x50);
  lVar9 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x18),
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  lVar29 = *(long *)(lVar9 + -8);
  uVar4 = *(uint *)(lVar29 + 0x54);
  uVar13 = (ulong)*(uint *)(lVar29 + 0x50) & 0xff;
  uVar15 = (ulong)(*(uint *)(lVar29 + 0x50) & 0xff | (uint)bVar6);
  uVar16 = uVar15 + 0x18 & (uVar15 ^ 0xffffffffffffffff);
  uVar5 = *(uint *)(lVar26 + 0x54);
  uVar1 = *(long *)(lVar26 + 0x40) + uVar13;
  sVar2 = (uVar1 & (uVar13 ^ 0xffffffffffffffff)) + *(long *)(lVar29 + 0x40);
  uVar17 = sVar2 + uVar16;
  sVar3 = sVar2;
  if (uVar4 == 0 && uVar5 == 0) {
    sVar3 = sVar2 + 1;
  }
  uVar16 = sVar3 + uVar16;
  if (uVar16 <= uVar28) {
    uVar16 = uVar28;
  }
  if (uVar16 <= uVar17) {
    uVar16 = uVar17;
  }
  if (uVar16 < 0x19) {
    uVar16 = 0x18;
  }
  bVar6 = *(byte *)((long)param_2 + uVar16);
  uVar18 = (uint)bVar6;
  if (4 < bVar6) {
    uVar27 = (uint)uVar16;
    uVar14 = 4;
    if (uVar27 < 4) {
      uVar14 = uVar27;
    }
    if ((int)uVar14 < 2) {
      if (uVar14 == 0) goto LAB_100779900;
      uVar18 = (uint)(byte)*param_2;
    }
    else if (uVar14 == 2) {
      uVar18 = (uint)(ushort)*param_2;
    }
    else if (uVar14 == 3) {
      uVar18 = (uint)(uint3)*param_2;
    }
    else {
      uVar18 = *param_2;
    }
    if (uVar27 < 4) {
      uVar18 = (uVar18 | bVar6 - 5 << (ulong)((uVar27 & 3) << 3)) + 5;
    }
    else {
      uVar18 = uVar18 + 5;
    }
  }
LAB_100779900:
  uVar17 = ~uVar15;
  uVar13 = ~uVar13;
  if (1 < (int)uVar18) {
    if (uVar18 == 2) {
      *param_1 = *(undefined8 *)param_2;
      uVar23 = *(undefined8 *)(param_2 + 2);
      param_1[2] = *(undefined8 *)(param_2 + 4);
      param_1[1] = uVar23;
      *(undefined1 *)((long)param_1 + uVar16) = 2;
      _swift_retain();
      return param_1;
    }
    if (uVar18 == 3) {
      uVar23 = *(undefined8 *)param_2;
      *param_1 = uVar23;
      puVar10 = (undefined8 *)((long)param_1 + 0xfU & 0xfffffffffffffff8);
      puVar19 = (undefined8 *)((ulong)((long)param_2 + 0xf) & 0xfffffffffffffff8);
      *puVar10 = *puVar19;
      puVar10 = puVar10 + 1;
      puVar19 = puVar19 + 1;
      *puVar10 = *puVar19;
      uVar28 = (long)puVar10 + uVar15 + 8 & uVar17;
      uVar17 = (long)puVar19 + uVar15 + 8 & uVar17;
      pcVar22 = *(code **)(lVar26 + 0x10);
      _swift_retain(uVar23);
      (*pcVar22)(uVar28,uVar17,lVar8);
      (**(code **)(lVar29 + 0x10))(uVar1 + uVar28 & uVar13,uVar1 + uVar17 & uVar13,lVar9);
      uVar12 = 3;
    }
    else {
      if (uVar18 != 4) goto LAB_100779ab0;
      uVar23 = *(undefined8 *)param_2;
      _swift_errorRetain(uVar23);
      *param_1 = uVar23;
      uVar12 = 4;
    }
    goto LAB_100779bd0;
  }
  if (uVar18 == 0) {
    (**(code **)(lVar20 + 0x10))(param_1,param_2,lVar24);
    *(undefined1 *)((long)param_1 + uVar16) = 0;
    return param_1;
  }
  if (uVar18 != 1) {
LAB_100779ab0:
    puVar10 = _memcpy(param_1,param_2,uVar16 + 1);
    return puVar10;
  }
  *param_1 = *(undefined8 *)param_2;
  puVar10 = (undefined8 *)((long)param_1 + 0xfU & 0xfffffffffffffff8);
  puVar19 = (undefined8 *)((ulong)((long)param_2 + 0xf) & 0xfffffffffffffff8);
  *puVar10 = *puVar19;
  puVar10 = puVar10 + 1;
  puVar19 = puVar19 + 1;
  *puVar10 = *puVar19;
  pvVar21 = (void *)((long)puVar10 + uVar15 + 8 & uVar17);
  puVar25 = (uint *)((long)puVar19 + uVar15 + 8 & uVar17);
  _swift_retain();
  if (uVar4 == 0 && uVar5 == 0) {
    if (*(byte *)((long)puVar25 + sVar2) != 0) {
      uVar14 = (uint)sVar2;
      uVar18 = 0;
      if (uVar14 < 4) {
        uVar18 = *(byte *)((long)puVar25 + sVar2) - 1 << (ulong)((uVar14 & 3) << 3);
      }
      if (uVar14 == 0) {
        uVar14 = 0;
      }
      else {
        uVar27 = 4;
        if (uVar14 < 4) {
          uVar27 = uVar14;
        }
        if ((int)uVar27 < 3) {
          if (uVar27 == 1) {
            uVar14 = (uint)(byte)*puVar25;
          }
          else {
            uVar14 = (uint)(ushort)*puVar25;
          }
        }
        else if (uVar27 == 3) {
          uVar14 = (uint)(uint3)*puVar25;
        }
        else {
          uVar14 = *puVar25;
        }
      }
      if ((uVar14 | uVar18) != 0xffffffff) goto LAB_100779b40;
    }
LAB_100779b8c:
    (**(code **)(lVar26 + 0x10))(pvVar21,puVar25,lVar8);
    (**(code **)(lVar29 + 0x10))
              (uVar1 + (long)pvVar21 & uVar13,(ulong)(uVar1 + (long)puVar25) & uVar13,lVar9);
    if (uVar4 == 0 && uVar5 == 0) {
      *(undefined1 *)((long)pvVar21 + sVar2) = 0;
    }
  }
  else {
    if (uVar5 < uVar4) {
      uVar17 = (ulong)(uVar1 + (long)puVar25) & uVar13;
      (**(code **)(lVar29 + 0x30))(uVar17,uVar4,lVar9);
      iVar7 = (int)uVar17;
    }
    else {
      puVar11 = puVar25;
      (**(code **)(lVar26 + 0x30))(puVar25,uVar5,lVar8);
      iVar7 = (int)puVar11;
    }
    if (iVar7 == 0) goto LAB_100779b8c;
LAB_100779b40:
    _memcpy(pvVar21,puVar25,sVar3);
  }
  uVar12 = 1;
LAB_100779bd0:
  *(undefined1 *)((long)param_1 + uVar16) = uVar12;
  return param_1;
}



/* Address: 0x100779bf8 | FUN_100779bf8 */

uint * FUN_100779bf8(uint *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  size_t sVar2;
  size_t sVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  uint *puVar9;
  byte bVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined8 uVar20;
  long lVar21;
  code *pcVar22;
  uint uVar23;
  void *pvVar24;
  long lVar25;
  uint *puVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar25 = *(long *)(param_3 + 0x10);
  lVar11 = *(long *)(lVar25 + -8);
  uVar28 = *(ulong *)(lVar11 + 0x40);
  lVar7 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),lVar25,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar21 = *(long *)(lVar7 + -8);
  bVar10 = *(byte *)(lVar21 + 0x50);
  lVar8 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x18),
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  lVar19 = *(long *)(lVar8 + -8);
  uVar4 = *(uint *)(lVar19 + 0x54);
  uVar12 = (ulong)*(uint *)(lVar19 + 0x50) & 0xff;
  uVar27 = (ulong)(*(uint *)(lVar19 + 0x50) & 0xff | (uint)bVar10);
  uVar17 = uVar27 + 0x18 & (uVar27 ^ 0xffffffffffffffff);
  uVar5 = *(uint *)(lVar21 + 0x54);
  uVar1 = *(long *)(lVar21 + 0x40) + uVar12;
  sVar2 = (uVar1 & (uVar12 ^ 0xffffffffffffffff)) + *(long *)(lVar19 + 0x40);
  uVar29 = sVar2 + uVar17;
  sVar3 = sVar2;
  if (uVar4 == 0 && uVar5 == 0) {
    sVar3 = sVar2 + 1;
  }
  uVar17 = sVar3 + uVar17;
  if (uVar17 <= uVar28) {
    uVar17 = uVar28;
  }
  if (uVar17 <= uVar29) {
    uVar17 = uVar29;
  }
  if (uVar17 < 0x19) {
    uVar17 = 0x18;
  }
  bVar10 = *(byte *)((long)param_1 + uVar17);
  uVar14 = (uint)bVar10;
  uVar16 = (uint)uVar17;
  if (4 < bVar10) {
    uVar23 = 4;
    if (uVar16 < 4) {
      uVar23 = uVar16;
    }
    if ((int)uVar23 < 2) {
      if (uVar23 == 0) goto LAB_100779d70;
      uVar14 = (uint)(byte)*param_1;
    }
    else if (uVar23 == 2) {
      uVar14 = (uint)(ushort)*param_1;
    }
    else if (uVar23 == 3) {
      uVar14 = (uint)(uint3)*param_1;
    }
    else {
      uVar14 = *param_1;
    }
    if (uVar16 < 4) {
      uVar14 = uVar14 | bVar10 - 5 << (ulong)((uVar16 & 3) << 3);
    }
    uVar14 = uVar14 + 5;
  }
LAB_100779d70:
  uVar29 = ~uVar27;
  uVar12 = ~uVar12;
  uVar23 = (uint)sVar2;
  if ((int)uVar14 < 2) {
    if (uVar14 == 0) {
      (**(code **)(lVar11 + 8))(param_1,lVar25);
    }
    else if (uVar14 == 1) {
      _swift_release(*(undefined8 *)param_1);
      puVar26 = (uint *)(((ulong)((long)param_1 + 0xf) & 0xfffffffffffffff8) + uVar27 + 0x10 &
                        uVar29);
      if (uVar4 == 0 && uVar5 == 0) {
        if (*(byte *)((long)puVar26 + sVar2) != 0) {
          uVar14 = 0;
          if (uVar23 < 4) {
            uVar14 = *(byte *)((long)puVar26 + sVar2) - 1 << (ulong)((uVar23 & 3) << 3);
          }
          if (uVar23 == 0) {
            uVar15 = 0;
          }
          else {
            uVar15 = 4;
            if (uVar23 < 4) {
              uVar15 = uVar23;
            }
            if ((int)uVar15 < 3) {
              if (uVar15 == 1) {
                uVar15 = (uint)(byte)*puVar26;
              }
              else {
                uVar15 = (uint)(ushort)*puVar26;
              }
            }
            else if (uVar15 == 3) {
              uVar15 = (uint)(uint3)*puVar26;
            }
            else {
              uVar15 = *puVar26;
            }
          }
          if ((uVar15 | uVar14) != 0xffffffff) goto LAB_100779e88;
        }
      }
      else {
        if (uVar5 < uVar4) {
          uVar28 = (ulong)(uVar1 + (long)puVar26) & uVar12;
          (**(code **)(lVar19 + 0x30))(uVar28,uVar4,lVar8);
          iVar6 = (int)uVar28;
        }
        else {
          puVar9 = puVar26;
          (**(code **)(lVar21 + 0x30))(puVar26,uVar5,lVar7);
          iVar6 = (int)puVar9;
        }
        if (iVar6 != 0) goto LAB_100779e88;
      }
LAB_100779e48:
      (**(code **)(lVar21 + 8))(puVar26,lVar7);
      (**(code **)(lVar19 + 8))((ulong)(uVar1 + (long)puVar26) & uVar12,lVar8);
    }
  }
  else if (uVar14 == 2) {
    _swift_release(*(undefined8 *)param_1);
  }
  else {
    if (uVar14 == 3) {
      _swift_release(*(undefined8 *)param_1);
      puVar26 = (uint *)(((ulong)((long)param_1 + 0xf) & 0xfffffffffffffff8) + uVar27 + 0x10 &
                        uVar29);
      goto LAB_100779e48;
    }
    if (uVar14 == 4) {
      _swift_errorRelease(*(undefined8 *)param_1);
    }
  }
LAB_100779e88:
  bVar10 = *(byte *)((long)param_2 + uVar17);
  uVar14 = (uint)bVar10;
  if (4 < bVar10) {
    uVar15 = 4;
    if (uVar16 < 4) {
      uVar15 = uVar16;
    }
    if ((int)uVar15 < 2) {
      if (uVar15 == 0) goto joined_r0x000100779ef8;
      uVar14 = (uint)(byte)*param_2;
    }
    else if (uVar15 == 2) {
      uVar14 = (uint)(ushort)*param_2;
    }
    else if (uVar15 == 3) {
      uVar14 = (uint)(uint3)*param_2;
    }
    else {
      uVar14 = *param_2;
    }
    if (uVar16 < 4) {
      uVar14 = (uVar14 | bVar10 - 5 << (ulong)((uVar16 & 3) << 3)) + 5;
    }
    else {
      uVar14 = uVar14 + 5;
    }
  }
joined_r0x000100779ef8:
  if (1 < (int)uVar14) {
    if (uVar14 == 2) {
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
      *(byte *)((long)param_1 + uVar17) = 2;
      _swift_retain();
      return param_1;
    }
    if (uVar14 == 3) {
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      puVar13 = (undefined8 *)((ulong)((long)param_1 + 0xfU) & 0xfffffffffffffff8);
      puVar18 = (undefined8 *)((ulong)((long)param_2 + 0xf) & 0xfffffffffffffff8);
      *puVar13 = *puVar18;
      puVar13 = puVar13 + 1;
      puVar18 = puVar18 + 1;
      *puVar13 = *puVar18;
      uVar28 = (long)puVar13 + uVar27 + 8 & uVar29;
      uVar29 = (long)puVar18 + uVar27 + 8 & uVar29;
      pcVar22 = *(code **)(lVar21 + 0x10);
      _swift_retain();
      (*pcVar22)(uVar28,uVar29,lVar7);
      (**(code **)(lVar19 + 0x10))(uVar1 + uVar28 & uVar12,uVar1 + uVar29 & uVar12,lVar8);
      bVar10 = 3;
    }
    else {
      if (uVar14 != 4) goto LAB_10077a0b4;
      uVar20 = *(undefined8 *)param_2;
      _swift_errorRetain(uVar20);
      *(undefined8 *)param_1 = uVar20;
      bVar10 = 4;
    }
    goto LAB_10077a264;
  }
  if (uVar14 == 0) {
    (**(code **)(lVar11 + 0x10))(param_1,param_2,lVar25);
    *(byte *)((long)param_1 + uVar17) = 0;
    return param_1;
  }
  if (uVar14 != 1) {
LAB_10077a0b4:
    puVar26 = _memcpy(param_1,param_2,uVar17 + 1);
    return puVar26;
  }
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  puVar13 = (undefined8 *)((ulong)((long)param_1 + 0xf) & 0xfffffffffffffff8);
  puVar18 = (undefined8 *)((ulong)((long)param_2 + 0xf) & 0xfffffffffffffff8);
  *puVar13 = *puVar18;
  puVar13 = puVar13 + 1;
  puVar18 = puVar18 + 1;
  *puVar13 = *puVar18;
  pvVar24 = (void *)((long)puVar13 + uVar27 + 8 & uVar29);
  puVar26 = (uint *)((long)puVar18 + uVar27 + 8 & uVar29);
  _swift_retain();
  if (uVar4 == 0 && uVar5 == 0) {
    if (*(byte *)((long)puVar26 + sVar2) != 0) {
      uVar14 = 0;
      if (uVar23 < 4) {
        uVar14 = *(byte *)((long)puVar26 + sVar2) - 1 << (ulong)((uVar23 & 3) << 3);
      }
      if (uVar23 == 0) {
        uVar16 = 0;
      }
      else {
        uVar16 = 4;
        if (uVar23 < 4) {
          uVar16 = uVar23;
        }
        if ((int)uVar16 < 3) {
          if (uVar16 == 1) {
            uVar16 = (uint)(byte)*puVar26;
          }
          else {
            uVar16 = (uint)(ushort)*puVar26;
          }
        }
        else if (uVar16 == 3) {
          uVar16 = (uint)(uint3)*puVar26;
        }
        else {
          uVar16 = *puVar26;
        }
      }
      if ((uVar16 | uVar14) != 0xffffffff) goto LAB_10077a198;
    }
LAB_10077a220:
    (**(code **)(lVar21 + 0x10))(pvVar24,puVar26,lVar7);
    (**(code **)(lVar19 + 0x10))
              (uVar1 + (long)pvVar24 & uVar12,(ulong)(uVar1 + (long)puVar26) & uVar12,lVar8);
    if (uVar4 == 0 && uVar5 == 0) {
      *(undefined1 *)((long)pvVar24 + sVar2) = 0;
    }
  }
  else {
    if (uVar5 < uVar4) {
      uVar29 = (ulong)(uVar1 + (long)puVar26) & uVar12;
      (**(code **)(lVar19 + 0x30))(uVar29,uVar4,lVar8);
      iVar6 = (int)uVar29;
    }
    else {
      puVar9 = puVar26;
      (**(code **)(lVar21 + 0x30))(puVar26,uVar5,lVar7);
      iVar6 = (int)puVar9;
    }
    if (iVar6 == 0) goto LAB_10077a220;
LAB_10077a198:
    _memcpy(pvVar24,puVar26,sVar3);
  }
  bVar10 = 1;
LAB_10077a264:
  *(byte *)((long)param_1 + uVar17) = bVar10;
  return param_1;
}



/* Address: 0x10077a28c | FUN_10077a28c */

undefined8 * FUN_10077a28c(undefined8 *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  size_t sVar2;
  size_t sVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  uint *puVar11;
  undefined1 uVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  ulong uVar17;
  ulong uVar18;
  uint uVar19;
  long lVar20;
  void *pvVar21;
  long lVar22;
  uint *puVar23;
  uint uVar24;
  ulong uVar25;
  long lVar26;
  long lVar27;
  undefined8 uVar28;
  
  lVar22 = *(long *)(param_3 + 0x10);
  lVar20 = *(long *)(lVar22 + -8);
  uVar25 = *(ulong *)(lVar20 + 0x40);
  lVar8 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),lVar22,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar27 = *(long *)(lVar8 + -8);
  bVar6 = *(byte *)(lVar27 + 0x50);
  lVar9 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x18),
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  lVar26 = *(long *)(lVar9 + -8);
  uVar4 = *(uint *)(lVar26 + 0x54);
  uVar15 = (ulong)*(uint *)(lVar26 + 0x50) & 0xff;
  uVar14 = (ulong)(*(uint *)(lVar26 + 0x50) & 0xff | (uint)bVar6);
  uVar17 = uVar14 + 0x18 & (uVar14 ^ 0xffffffffffffffff);
  uVar5 = *(uint *)(lVar27 + 0x54);
  uVar1 = *(long *)(lVar27 + 0x40) + uVar15;
  sVar2 = (uVar1 & (uVar15 ^ 0xffffffffffffffff)) + *(long *)(lVar26 + 0x40);
  uVar18 = sVar2 + uVar17;
  sVar3 = sVar2;
  if (uVar4 == 0 && uVar5 == 0) {
    sVar3 = sVar2 + 1;
  }
  uVar17 = sVar3 + uVar17;
  if (uVar17 <= uVar25) {
    uVar17 = uVar25;
  }
  if (uVar17 <= uVar18) {
    uVar17 = uVar18;
  }
  if (uVar17 < 0x19) {
    uVar17 = 0x18;
  }
  bVar6 = *(byte *)((long)param_2 + uVar17);
  uVar19 = (uint)bVar6;
  if (4 < bVar6) {
    uVar24 = (uint)uVar17;
    uVar13 = 4;
    if (uVar24 < 4) {
      uVar13 = uVar24;
    }
    if ((int)uVar13 < 2) {
      if (uVar13 == 0) goto LAB_10077a400;
      uVar19 = (uint)(byte)*param_2;
    }
    else if (uVar13 == 2) {
      uVar19 = (uint)(ushort)*param_2;
    }
    else if (uVar13 == 3) {
      uVar19 = (uint)(uint3)*param_2;
    }
    else {
      uVar19 = *param_2;
    }
    if (uVar24 < 4) {
      uVar19 = (uVar19 | bVar6 - 5 << (ulong)((uVar24 & 3) << 3)) + 5;
    }
    else {
      uVar19 = uVar19 + 5;
    }
  }
LAB_10077a400:
  uVar18 = ~uVar14;
  uVar15 = ~uVar15;
  if (1 < (int)uVar19) {
    if (uVar19 == 2) {
      uVar28 = *(undefined8 *)param_2;
      param_1[1] = *(undefined8 *)(param_2 + 2);
      *param_1 = uVar28;
      param_1[2] = *(undefined8 *)(param_2 + 4);
      uVar12 = 2;
    }
    else if (uVar19 == 3) {
      *param_1 = *(undefined8 *)param_2;
      puVar10 = (undefined8 *)((long)param_1 + 0xfU & 0xfffffffffffffff8);
      puVar16 = (undefined8 *)((ulong)((long)param_2 + 0xf) & 0xfffffffffffffff8);
      *puVar10 = *puVar16;
      puVar10 = puVar10 + 1;
      puVar16 = puVar16 + 1;
      *puVar10 = *puVar16;
      uVar25 = (long)puVar10 + uVar14 + 8 & uVar18;
      uVar18 = (long)puVar16 + uVar14 + 8 & uVar18;
      (**(code **)(lVar27 + 0x20))(uVar25,uVar18,lVar8);
      (**(code **)(lVar26 + 0x20))(uVar1 + uVar25 & uVar15,uVar1 + uVar18 & uVar15,lVar9);
      uVar12 = 3;
    }
    else {
      if (uVar19 != 4) goto LAB_10077a574;
      *param_1 = *(undefined8 *)param_2;
      uVar12 = 4;
    }
    goto LAB_10077a690;
  }
  if (uVar19 == 0) {
    (**(code **)(lVar20 + 0x20))(param_1,param_2,lVar22);
    *(undefined1 *)((long)param_1 + uVar17) = 0;
    return param_1;
  }
  if (uVar19 != 1) {
LAB_10077a574:
    puVar10 = _memcpy(param_1,param_2,uVar17 + 1);
    return puVar10;
  }
  *param_1 = *(undefined8 *)param_2;
  puVar10 = (undefined8 *)((long)param_1 + 0xfU & 0xfffffffffffffff8);
  puVar16 = (undefined8 *)((ulong)((long)param_2 + 0xf) & 0xfffffffffffffff8);
  *puVar10 = *puVar16;
  puVar10 = puVar10 + 1;
  puVar16 = puVar16 + 1;
  *puVar10 = *puVar16;
  pvVar21 = (void *)((long)puVar10 + uVar14 + 8 & uVar18);
  puVar23 = (uint *)((long)puVar16 + uVar14 + 8 & uVar18);
  if (uVar4 == 0 && uVar5 == 0) {
    if (*(byte *)((long)puVar23 + sVar2) != 0) {
      uVar13 = (uint)sVar2;
      uVar19 = 0;
      if (uVar13 < 4) {
        uVar19 = *(byte *)((long)puVar23 + sVar2) - 1 << (ulong)((uVar13 & 3) << 3);
      }
      if (uVar13 == 0) {
        uVar13 = 0;
      }
      else {
        uVar24 = 4;
        if (uVar13 < 4) {
          uVar24 = uVar13;
        }
        if ((int)uVar24 < 3) {
          if (uVar24 == 1) {
            uVar13 = (uint)(byte)*puVar23;
          }
          else {
            uVar13 = (uint)(ushort)*puVar23;
          }
        }
        else if (uVar24 == 3) {
          uVar13 = (uint)(uint3)*puVar23;
        }
        else {
          uVar13 = *puVar23;
        }
      }
      if ((uVar13 | uVar19) != 0xffffffff) goto LAB_10077a604;
    }
LAB_10077a650:
    (**(code **)(lVar27 + 0x20))(pvVar21,puVar23,lVar8);
    (**(code **)(lVar26 + 0x20))
              (uVar1 + (long)pvVar21 & uVar15,(ulong)(uVar1 + (long)puVar23) & uVar15,lVar9);
    if (uVar4 == 0 && uVar5 == 0) {
      *(undefined1 *)((long)pvVar21 + sVar2) = 0;
    }
  }
  else {
    if (uVar5 < uVar4) {
      uVar18 = (ulong)(uVar1 + (long)puVar23) & uVar15;
      (**(code **)(lVar26 + 0x30))(uVar18,uVar4,lVar9);
      iVar7 = (int)uVar18;
    }
    else {
      puVar11 = puVar23;
      (**(code **)(lVar27 + 0x30))(puVar23,uVar5,lVar8);
      iVar7 = (int)puVar11;
    }
    if (iVar7 == 0) goto LAB_10077a650;
LAB_10077a604:
    _memcpy(pvVar21,puVar23,sVar3);
  }
  uVar12 = 1;
LAB_10077a690:
  *(undefined1 *)((long)param_1 + uVar17) = uVar12;
  return param_1;
}



/* Address: 0x10077a6b8 | FUN_10077a6b8 */

uint * FUN_10077a6b8(uint *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  size_t sVar2;
  size_t sVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  uint *puVar9;
  byte bVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  long lVar19;
  long lVar20;
  uint uVar21;
  void *pvVar22;
  long lVar23;
  uint *puVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  undefined8 uVar28;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar23 = *(long *)(param_3 + 0x10);
  lVar11 = *(long *)(lVar23 + -8);
  uVar26 = *(ulong *)(lVar11 + 0x40);
  lVar7 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),lVar23,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar20 = *(long *)(lVar7 + -8);
  bVar10 = *(byte *)(lVar20 + 0x50);
  lVar8 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x18),
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  lVar19 = *(long *)(lVar8 + -8);
  uVar4 = *(uint *)(lVar19 + 0x54);
  uVar12 = (ulong)*(uint *)(lVar19 + 0x50) & 0xff;
  uVar25 = (ulong)(*(uint *)(lVar19 + 0x50) & 0xff | (uint)bVar10);
  uVar17 = uVar25 + 0x18 & (uVar25 ^ 0xffffffffffffffff);
  uVar5 = *(uint *)(lVar20 + 0x54);
  uVar1 = *(long *)(lVar20 + 0x40) + uVar12;
  sVar2 = (uVar1 & (uVar12 ^ 0xffffffffffffffff)) + *(long *)(lVar19 + 0x40);
  uVar27 = sVar2 + uVar17;
  sVar3 = sVar2;
  if (uVar4 == 0 && uVar5 == 0) {
    sVar3 = sVar2 + 1;
  }
  uVar17 = sVar3 + uVar17;
  if (uVar17 <= uVar26) {
    uVar17 = uVar26;
  }
  if (uVar17 <= uVar27) {
    uVar17 = uVar27;
  }
  if (uVar17 < 0x19) {
    uVar17 = 0x18;
  }
  bVar10 = *(byte *)((long)param_1 + uVar17);
  uVar14 = (uint)bVar10;
  uVar16 = (uint)uVar17;
  if (4 < bVar10) {
    uVar21 = 4;
    if (uVar16 < 4) {
      uVar21 = uVar16;
    }
    if ((int)uVar21 < 2) {
      if (uVar21 == 0) goto LAB_10077a834;
      uVar14 = (uint)(byte)*param_1;
    }
    else if (uVar21 == 2) {
      uVar14 = (uint)(ushort)*param_1;
    }
    else if (uVar21 == 3) {
      uVar14 = (uint)(uint3)*param_1;
    }
    else {
      uVar14 = *param_1;
    }
    if (uVar16 < 4) {
      uVar14 = uVar14 | bVar10 - 5 << (ulong)((uVar16 & 3) << 3);
    }
    uVar14 = uVar14 + 5;
  }
LAB_10077a834:
  uVar27 = ~uVar25;
  uVar12 = ~uVar12;
  uVar21 = (uint)sVar2;
  if ((int)uVar14 < 2) {
    if (uVar14 == 0) {
      (**(code **)(lVar11 + 8))(param_1,lVar23);
    }
    else if (uVar14 == 1) {
      _swift_release(*(undefined8 *)param_1);
      puVar24 = (uint *)(((ulong)((long)param_1 + 0xf) & 0xfffffffffffffff8) + uVar25 + 0x10 &
                        uVar27);
      if (uVar4 == 0 && uVar5 == 0) {
        if (*(byte *)((long)puVar24 + sVar2) != 0) {
          uVar14 = 0;
          if (uVar21 < 4) {
            uVar14 = *(byte *)((long)puVar24 + sVar2) - 1 << (ulong)((uVar21 & 3) << 3);
          }
          if (uVar21 == 0) {
            uVar15 = 0;
          }
          else {
            uVar15 = 4;
            if (uVar21 < 4) {
              uVar15 = uVar21;
            }
            if ((int)uVar15 < 3) {
              if (uVar15 == 1) {
                uVar15 = (uint)(byte)*puVar24;
              }
              else {
                uVar15 = (uint)(ushort)*puVar24;
              }
            }
            else if (uVar15 == 3) {
              uVar15 = (uint)(uint3)*puVar24;
            }
            else {
              uVar15 = *puVar24;
            }
          }
          if ((uVar15 | uVar14) != 0xffffffff) goto LAB_10077a944;
        }
      }
      else {
        if (uVar5 < uVar4) {
          uVar26 = (ulong)(uVar1 + (long)puVar24) & uVar12;
          (**(code **)(lVar19 + 0x30))(uVar26,uVar4,lVar8);
          iVar6 = (int)uVar26;
        }
        else {
          puVar9 = puVar24;
          (**(code **)(lVar20 + 0x30))(puVar24,uVar5,lVar7);
          iVar6 = (int)puVar9;
        }
        if (iVar6 != 0) goto LAB_10077a944;
      }
LAB_10077a904:
      (**(code **)(lVar20 + 8))(puVar24,lVar7);
      (**(code **)(lVar19 + 8))((ulong)(uVar1 + (long)puVar24) & uVar12,lVar8);
    }
  }
  else if (uVar14 == 2) {
    _swift_release(*(undefined8 *)param_1);
  }
  else {
    if (uVar14 == 3) {
      _swift_release(*(undefined8 *)param_1);
      puVar24 = (uint *)(((ulong)((long)param_1 + 0xf) & 0xfffffffffffffff8) + uVar25 + 0x10 &
                        uVar27);
      goto LAB_10077a904;
    }
    if (uVar14 == 4) {
      _swift_errorRelease(*(undefined8 *)param_1);
    }
  }
LAB_10077a944:
  bVar10 = *(byte *)((long)param_2 + uVar17);
  uVar14 = (uint)bVar10;
  if (4 < bVar10) {
    uVar15 = 4;
    if (uVar16 < 4) {
      uVar15 = uVar16;
    }
    if ((int)uVar15 < 2) {
      if (uVar15 == 0) goto joined_r0x00010077a9b4;
      uVar14 = (uint)(byte)*param_2;
    }
    else if (uVar15 == 2) {
      uVar14 = (uint)(ushort)*param_2;
    }
    else if (uVar15 == 3) {
      uVar14 = (uint)(uint3)*param_2;
    }
    else {
      uVar14 = *param_2;
    }
    if (uVar16 < 4) {
      uVar14 = (uVar14 | bVar10 - 5 << (ulong)((uVar16 & 3) << 3)) + 5;
    }
    else {
      uVar14 = uVar14 + 5;
    }
  }
joined_r0x00010077a9b4:
  if (1 < (int)uVar14) {
    if (uVar14 == 2) {
      uVar28 = *(undefined8 *)param_2;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)param_1 = uVar28;
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
      bVar10 = 2;
    }
    else if (uVar14 == 3) {
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      puVar13 = (undefined8 *)((ulong)((long)param_1 + 0xfU) & 0xfffffffffffffff8);
      puVar18 = (undefined8 *)((ulong)((long)param_2 + 0xf) & 0xfffffffffffffff8);
      *puVar13 = *puVar18;
      puVar13 = puVar13 + 1;
      puVar18 = puVar18 + 1;
      *puVar13 = *puVar18;
      uVar26 = (long)puVar13 + uVar25 + 8 & uVar27;
      uVar27 = (long)puVar18 + uVar25 + 8 & uVar27;
      (**(code **)(lVar20 + 0x20))(uVar26,uVar27,lVar7);
      (**(code **)(lVar19 + 0x20))(uVar1 + uVar26 & uVar12,uVar1 + uVar27 & uVar12,lVar8);
      bVar10 = 3;
    }
    else {
      if (uVar14 != 4) goto LAB_10077ab50;
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      bVar10 = 4;
    }
    goto LAB_10077ad04;
  }
  if (uVar14 == 0) {
    (**(code **)(lVar11 + 0x20))(param_1,param_2,lVar23);
    *(byte *)((long)param_1 + uVar17) = 0;
    return param_1;
  }
  if (uVar14 != 1) {
LAB_10077ab50:
    puVar24 = _memcpy(param_1,param_2,uVar17 + 1);
    return puVar24;
  }
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  puVar13 = (undefined8 *)((ulong)((long)param_1 + 0xf) & 0xfffffffffffffff8);
  puVar18 = (undefined8 *)((ulong)((long)param_2 + 0xf) & 0xfffffffffffffff8);
  *puVar13 = *puVar18;
  puVar13 = puVar13 + 1;
  puVar18 = puVar18 + 1;
  *puVar13 = *puVar18;
  pvVar22 = (void *)((long)puVar13 + uVar25 + 8 & uVar27);
  puVar24 = (uint *)((long)puVar18 + uVar25 + 8 & uVar27);
  if (uVar4 == 0 && uVar5 == 0) {
    if (*(byte *)((long)puVar24 + sVar2) != 0) {
      uVar14 = 0;
      if (uVar21 < 4) {
        uVar14 = *(byte *)((long)puVar24 + sVar2) - 1 << (ulong)((uVar21 & 3) << 3);
      }
      if (uVar21 == 0) {
        uVar16 = 0;
      }
      else {
        uVar16 = 4;
        if (uVar21 < 4) {
          uVar16 = uVar21;
        }
        if ((int)uVar16 < 3) {
          if (uVar16 == 1) {
            uVar16 = (uint)(byte)*puVar24;
          }
          else {
            uVar16 = (uint)(ushort)*puVar24;
          }
        }
        else if (uVar16 == 3) {
          uVar16 = (uint)(uint3)*puVar24;
        }
        else {
          uVar16 = *puVar24;
        }
      }
      if ((uVar16 | uVar14) != 0xffffffff) goto LAB_10077ac38;
    }
LAB_10077acc0:
    (**(code **)(lVar20 + 0x20))(pvVar22,puVar24,lVar7);
    (**(code **)(lVar19 + 0x20))
              (uVar1 + (long)pvVar22 & uVar12,(ulong)(uVar1 + (long)puVar24) & uVar12,lVar8);
    if (uVar4 == 0 && uVar5 == 0) {
      *(undefined1 *)((long)pvVar22 + sVar2) = 0;
    }
  }
  else {
    if (uVar5 < uVar4) {
      uVar27 = (ulong)(uVar1 + (long)puVar24) & uVar12;
      (**(code **)(lVar19 + 0x30))(uVar27,uVar4,lVar8);
      iVar6 = (int)uVar27;
    }
    else {
      puVar9 = puVar24;
      (**(code **)(lVar20 + 0x30))(puVar24,uVar5,lVar7);
      iVar6 = (int)puVar9;
    }
    if (iVar6 == 0) goto LAB_10077acc0;
LAB_10077ac38:
    _memcpy(pvVar22,puVar24,sVar3);
  }
  bVar10 = 1;
LAB_10077ad04:
  *(byte *)((long)param_1 + uVar17) = bVar10;
  return param_1;
}



/* Address: 0x10077ad2c | FUN_10077ad2c */

int FUN_10077ad2c(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  
  uVar10 = *(ulong *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x40);
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),*(long *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar11 = *(long *)(lVar5 + -8);
  bVar2 = *(byte *)(lVar11 + 0x50);
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x18),
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  lVar5 = *(long *)(lVar5 + -8);
  uVar7 = (ulong)*(uint *)(lVar5 + 0x50) & 0xff;
  uVar9 = (ulong)(*(uint *)(lVar5 + 0x50) & 0xff | (uint)bVar2);
  uVar7 = (*(long *)(lVar11 + 0x40) + uVar7 & (uVar7 ^ 0xffffffffffffffff)) +
          *(long *)(lVar5 + 0x40) + (uVar9 + 0x18 & (uVar9 ^ 0xffffffffffffffff));
  uVar9 = uVar7;
  if (*(int *)(lVar5 + 0x54) == 0 && *(int *)(lVar11 + 0x54) == 0) {
    uVar9 = uVar7 + 1;
  }
  if (uVar9 <= uVar10) {
    uVar9 = uVar10;
  }
  if (uVar9 <= uVar7) {
    uVar9 = uVar7;
  }
  if (uVar9 < 0x19) {
    uVar9 = 0x18;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 < 0xfb) goto LAB_10077ae8c;
  uVar7 = uVar9 + 1;
  uVar6 = (uint)uVar7;
  uVar3 = uVar6 << 3;
  if (uVar6 < 4) {
    uVar8 = ((param_2 + ~(-1 << (ulong)(uVar3 & 0x1f))) - 0xfa >> (ulong)(uVar3 & 0x1f)) + 1;
    if (uVar8 < 0x100) {
      if (uVar8 < 2) goto LAB_10077ae8c;
      goto LAB_10077ae18;
    }
    if (uVar8 >> 0x10 == 0) {
      uVar8 = (uint)*(ushort *)((long)param_1 + uVar7);
    }
    else {
      uVar8 = *(uint *)((long)param_1 + uVar7);
    }
  }
  else {
LAB_10077ae18:
    uVar8 = (uint)*(byte *)((long)param_1 + uVar7);
  }
  if (uVar8 != 0) {
    uVar1 = 0;
    if (uVar6 < 4) {
      uVar1 = uVar8 - 1 << (ulong)(uVar3 & 0x1f);
    }
    if (uVar6 != 0) {
      uVar3 = 4;
      if (uVar6 < 4) {
        uVar3 = uVar6;
      }
      if ((int)uVar3 < 3) {
        if (uVar3 == 1) {
          uVar7 = (ulong)(byte)*param_1;
        }
        else {
          uVar7 = (ulong)(ushort)*param_1;
        }
      }
      else if (uVar3 == 3) {
        uVar7 = (ulong)(uint3)*param_1;
      }
      else {
        uVar7 = (ulong)*param_1;
      }
    }
    return ((uint)uVar7 | uVar1) + 0xfb;
  }
LAB_10077ae8c:
  iVar4 = 0;
  if (5 < *(byte *)((long)param_1 + uVar9)) {
    iVar4 = (*(byte *)((long)param_1 + uVar9) ^ 0xff) + 1;
  }
  return iVar4;
}



/* Address: 0x10077aef8 | FUN_10077aef8 */

void FUN_10077aef8(uint *param_1,uint param_2,uint param_3,long param_4)

{
  size_t sVar1;
  uint uVar2;
  undefined2 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  uint uVar8;
  byte bVar9;
  ulong uVar10;
  long lVar11;
  
  uVar10 = *(ulong *)(*(long *)(*(long *)(param_4 + 0x10) + -8) + 0x40);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 0x20),*(long *)(param_4 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar11 = *(long *)(lVar4 + -8);
  bVar9 = *(byte *)(lVar11 + 0x50);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 0x28),*(undefined8 *)(param_4 + 0x18),
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  lVar4 = *(long *)(lVar4 + -8);
  uVar5 = (ulong)*(uint *)(lVar4 + 0x50) & 0xff;
  uVar6 = (ulong)(*(uint *)(lVar4 + 0x50) & 0xff | (uint)bVar9);
  uVar5 = (*(long *)(lVar11 + 0x40) + uVar5 & (uVar5 ^ 0xffffffffffffffff)) +
          *(long *)(lVar4 + 0x40) + (uVar6 + 0x18 & (uVar6 ^ 0xffffffffffffffff));
  uVar6 = uVar5;
  if (*(int *)(lVar4 + 0x54) == 0 && *(int *)(lVar11 + 0x54) == 0) {
    uVar6 = uVar5 + 1;
  }
  if (uVar6 <= uVar10) {
    uVar6 = uVar10;
  }
  if (uVar6 <= uVar5) {
    uVar6 = uVar5;
  }
  if (uVar6 < 0x19) {
    uVar6 = 0x18;
  }
  sVar1 = uVar6 + 1;
  uVar8 = (uint)sVar1;
  if (param_3 < 0xfb) {
    bVar9 = 0;
  }
  else if (uVar8 < 4) {
    uVar2 = ((param_3 + ~(-1 << (ulong)(uVar8 << 3 & 0x1f))) - 0xfa >> (ulong)(uVar8 << 3 & 0x1f)) +
            1;
    bVar9 = 2;
    if (0xffff < uVar2) {
      bVar9 = 4;
    }
    if (uVar2 < 0x100) {
      bVar9 = 1 < uVar2;
    }
  }
  else {
    bVar9 = 1;
  }
  if (param_2 < 0xfb) {
    if (bVar9 < 2) {
      if (bVar9 != 0) {
        *(undefined1 *)((long)param_1 + sVar1) = 0;
      }
    }
    else if (bVar9 == 2) {
      *(undefined2 *)((long)param_1 + sVar1) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar1) = 0;
    }
    if (param_2 != 0) {
      *(char *)((long)param_1 + uVar6) = -(char)param_2;
    }
  }
  else {
    param_2 = param_2 - 0xfb;
    if (uVar8 < 4) {
      iVar7 = (param_2 >> (ulong)(uVar8 << 3 & 0x1f)) + 1;
      if (uVar8 != 0) {
        uVar2 = param_2 & (-1 << (ulong)(uVar8 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar1);
        uVar3 = (undefined2)uVar2;
        if (uVar8 == 3) {
          *(undefined2 *)param_1 = uVar3;
          *(char *)((long)param_1 + 2) = (char)(uVar2 >> 0x10);
        }
        else if (uVar8 == 2) {
          *(undefined2 *)param_1 = uVar3;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      _bzero(param_1,sVar1);
      *param_1 = param_2;
      iVar7 = 1;
    }
    if (bVar9 < 2) {
      if (bVar9 != 0) {
        *(char *)((long)param_1 + sVar1) = (char)iVar7;
      }
    }
    else if (bVar9 == 2) {
      *(short *)((long)param_1 + sVar1) = (short)iVar7;
    }
    else {
      *(int *)((long)param_1 + sVar1) = iVar7;
    }
  }
  return;
}



/* Address: 0x10077b148 | FUN_10077b148 */

uint FUN_10077b148(uint *param_1,long param_2)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  uVar8 = *(ulong *)(*(long *)(*(long *)(param_2 + 0x10) + -8) + 0x40);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x20),*(long *)(param_2 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar9 = *(long *)(lVar3 + -8);
  bVar1 = *(byte *)(lVar9 + 0x50);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x18),
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  lVar3 = *(long *)(lVar3 + -8);
  uVar5 = (ulong)*(uint *)(lVar3 + 0x50) & 0xff;
  uVar7 = (ulong)(*(uint *)(lVar3 + 0x50) & 0xff | (uint)bVar1);
  uVar5 = (*(long *)(lVar9 + 0x40) + uVar5 & (uVar5 ^ 0xffffffffffffffff)) + *(long *)(lVar3 + 0x40)
          + (uVar7 + 0x18 & (uVar7 ^ 0xffffffffffffffff));
  uVar7 = uVar5;
  if (*(int *)(lVar3 + 0x54) == 0 && *(int *)(lVar9 + 0x54) == 0) {
    uVar7 = uVar5 + 1;
  }
  if (uVar7 <= uVar8) {
    uVar7 = uVar8;
  }
  if (uVar7 <= uVar5) {
    uVar7 = uVar5;
  }
  if (uVar7 < 0x19) {
    uVar7 = 0x18;
  }
  bVar1 = *(byte *)((long)param_1 + uVar7);
  uVar2 = (uint)bVar1;
  if (4 < bVar1) {
    uVar4 = (uint)uVar7;
    uVar6 = 4;
    if (uVar4 < 4) {
      uVar6 = uVar4;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) {
        return uVar2;
      }
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
    uVar2 = uVar6 | bVar1 - 5 << (ulong)((uVar4 & 3) << 3);
    if (3 < uVar4) {
      uVar2 = uVar6;
    }
    uVar2 = uVar2 + 5;
  }
  return uVar2;
}



/* Address: 0x10077b29c | FUN_10077b29c */

void FUN_10077b29c(uint *param_1,uint param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  uVar6 = *(ulong *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x40);
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),*(long *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar7 = *(long *)(lVar2 + -8);
  bVar1 = *(byte *)(lVar7 + 0x50);
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x18),
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  lVar2 = *(long *)(lVar2 + -8);
  uVar4 = (ulong)*(uint *)(lVar2 + 0x50) & 0xff;
  uVar5 = (ulong)(*(uint *)(lVar2 + 0x50) & 0xff | (uint)bVar1);
  uVar4 = (*(long *)(lVar7 + 0x40) + uVar4 & (uVar4 ^ 0xffffffffffffffff)) + *(long *)(lVar2 + 0x40)
          + (uVar5 + 0x18 & (uVar5 ^ 0xffffffffffffffff));
  uVar5 = uVar4;
  if (*(int *)(lVar2 + 0x54) == 0 && *(int *)(lVar7 + 0x54) == 0) {
    uVar5 = uVar4 + 1;
  }
  if (uVar5 <= uVar6) {
    uVar5 = uVar6;
  }
  if (uVar5 <= uVar4) {
    uVar5 = uVar4;
  }
  if (uVar5 < 0x19) {
    uVar5 = 0x18;
  }
  if (param_2 < 5) {
    *(char *)((long)param_1 + uVar5) = (char)param_2;
  }
  else {
    param_2 = param_2 - 5;
    uVar3 = (uint)uVar5;
    if (uVar3 < 4) {
      *(char *)((long)param_1 + uVar5) = (char)(param_2 >> (ulong)(uVar3 << 3 & 0x1f)) + '\x05';
      if (uVar3 == 0) {
        return;
      }
      param_2 = param_2 & (-1 << (ulong)(uVar3 << 3 & 0x1f) ^ 0xffffffffU);
    }
    else {
      *(undefined1 *)((long)param_1 + uVar5) = 5;
    }
    if (3 < uVar3) {
      uVar3 = 4;
    }
    _bzero(param_1,uVar5);
    if ((int)uVar3 < 3) {
      if (uVar3 == 1) {
        *(char *)param_1 = (char)param_2;
      }
      else {
        *(short *)param_1 = (short)param_2;
      }
    }
    else if (uVar3 == 3) {
      *(short *)param_1 = (short)param_2;
      *(char *)((long)param_1 + 2) = (char)(param_2 >> 0x10);
    }
    else {
      *param_1 = param_2;
    }
  }
  return;
}



/* Address: 0x10077b418 | FUN_10077b418 */

void FUN_10077b418(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long local_70;
  long lStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  (**(code **)(*(long *)(param_5 + -8) + 0x20))(param_1,param_2,param_5);
  uVar2 = 0;
  local_70 = param_5;
  lStack_68 = param_6;
  local_60 = param_7;
  uStack_58 = param_8;
  FUN_100778e10(0,&local_70);
  _swift_storeEnumTagMultiPayload(param_1,uVar2,0);
  lVar3 = 0;
  local_70 = param_5;
  lStack_68 = param_6;
  local_60 = param_7;
  uStack_58 = param_8;
  FUN_100778e04(0,&local_70);
  (**(code **)(*(long *)(param_6 + -8) + 0x20))(param_1 + *(int *)(lVar3 + 0x38),param_3,param_6);
  iVar1 = *(int *)(lVar3 + 0x34);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_8,param_6,PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008
             ,PTR___associated_type_descriptor_for_Swift_Clock_Duration_100eaeaf0);
  (**(code **)(*(long *)(lVar3 + -8) + 0x20))(param_1 + iVar1,param_4,lVar3);
  return;
}



/* Address: 0x10077b518 | FUN_10077b518 */

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_10077b518(long param_1)

{
  char *pcVar1;
  long lVar2;
  code *pcVar3;
  Optional OVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined7 extraout_var_01;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined4 uStack_100;
  char acStack_fc [9];
  char acStack_f3 [5];
  char acStack_ee [8];
  char acStack_e6 [8];
  char acStack_de [7];
  char cStack_d7;
  undefined2 uStack_d6;
  char acStack_d4 [5];
  char acStack_cf [7];
  char acStack_c8 [4];
  undefined1 auStack_c4 [4];
  undefined1 auStack_c0 [16];
  undefined *local_b0 [5];
  undefined *puStack_88;
  undefined *local_80;
  undefined *local_78;
  undefined *local_70;
  undefined8 uStack_68;
  
  uVar13 = *(undefined8 *)(param_1 + 0x18);
  puStack_88 = *(undefined **)(param_1 + 0x18);
  local_b0[4] = *(undefined **)(param_1 + 0x10);
  local_b0[3] = *(undefined **)(param_1 + 0x28);
  local_b0[2] = *(undefined **)(param_1 + 0x20);
  uVar14 = *(undefined8 *)(param_1 + 0x28);
  lVar6 = 0;
  local_80 = local_b0[4];
  local_78 = puStack_88;
  local_70 = local_b0[2];
  uStack_68 = local_b0[3];
  FUN_100778e10(0,&local_80);
  lVar15 = *(long *)(lVar6 + -8);
  lVar2 = -(*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar12 = (undefined8 *)((long)local_b0 + lVar2);
  (**(code **)(lVar15 + 0x10))(puVar12);
  puVar7 = puVar12;
  _swift_getEnumCaseMultiPayload(puVar12,lVar6);
  iVar5 = (int)puVar7;
  if (iVar5 < 3) {
    if (iVar5 != 0) {
      if (iVar5 == 1) {
        local_b0[1] = (undefined *)*puVar12;
        local_b0[0] = *(undefined **)((long)local_b0 + lVar2 + 8);
        acStack_fc[lVar2] = ' ';
        *(undefined4 *)((long)&uStack_100 + lVar2) = 0x6b736174;
        pcVar1 = acStack_fc + lVar2 + 1;
        builtin_strncpy(acStack_f3 + lVar2,"Continua",8);
        pcVar1[0] = 'u';
        pcVar1[1] = 'p';
        pcVar1[2] = 's';
        pcVar1[3] = 't';
        pcVar1[4] = 'r';
        pcVar1[5] = 'e';
        pcVar1[6] = 'a';
        pcVar1[7] = 'm';
        builtin_strncpy(acStack_ee + lVar2,"nuation ",8);
        *(undefined2 *)(acStack_d4 + lVar2 + 0xfffffffffffffffe) = 0x206e;
        builtin_strncpy(acStack_de + lVar2,"tinuatio",8);
        builtin_strncpy(acStack_e6 + lVar2,"clockCon",8);
        pcVar1 = acStack_d4 + lVar2;
        builtin_strncpy(acStack_cf + lVar2 + 3,"Element ",8);
        pcVar1[0] = 'b';
        pcVar1[1] = 'u';
        pcVar1[2] = 'f';
        pcVar1[3] = 'f';
        pcVar1[4] = 'e';
        pcVar1[5] = 'r';
        pcVar1[6] = 'e';
        pcVar1[7] = 'd';
        auStack_c4[lVar2] = 0;
        puVar9 = &DAT_100fe2d00;
        FUN_1000f8b08(&DAT_100fe2d00,&DAT_100c76eb0);
        puVar10 = &DAT_100fe3398;
        local_80 = puVar9;
        FUN_1000f8b08(&DAT_100fe3398,&DAT_100c772a0);
        uVar8 = 0xff;
        local_78 = puVar10;
        _swift_getAssociatedTypeWitness
                  (0xff,uVar14,uVar13,
                   PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
                   PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
        FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
        Swift::UnsafeContinuation::typeMetadataAccessor();
        OVar4 = Swift::Optional::typeMetadataAccessor();
        local_70 = (undefined *)CONCAT71(extraout_var,OVar4.value);
        uVar13 = 0xff;
        _swift_getAssociatedTypeWitness
                  (0xff,local_b0[2],local_b0[4],
                   PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
                   PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
        _swift_getTupleTypeMetadata2(0xff,uVar13,uVar8,"element deadline ",0);
        OVar4 = Swift::Optional::typeMetadataAccessor();
        uStack_68 = CONCAT71(extraout_var_00,OVar4.value);
        lVar6 = 0;
        _swift_getTupleTypeMetadata(0,0x10004,&local_80,(long)&uStack_100 + lVar2,0);
        iVar5 = *(int *)(lVar6 + 0x50);
        (**(code **)(lVar15 + 8))();
        _swift_storeEnumTagMultiPayload();
        _swift_getTupleTypeMetadata2(0xff,uVar13,uVar8,"element deadline ",0);
        OVar4 = Swift::Optional::typeMetadataAccessor();
        (**(code **)(*(long *)(CONCAT71(extraout_var_01,OVar4.value) + -8) + 8))
                  ((long)puVar12 + (long)iVar5,CONCAT71(extraout_var_01,OVar4.value));
        return local_b0[1];
      }
LAB_10077b95c:
      (**(code **)(lVar15 + 8))(puVar12,lVar6);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10077b970);
      (*pcVar3)();
    }
    (**(code **)(*(long *)(local_b0[4] + -8) + 8))(puVar12);
  }
  else {
    if (iVar5 != 4) {
      if (iVar5 == 5) {
        return 0;
      }
      _swift_release(*puVar12,0,0);
      acStack_fc[lVar2] = ' ';
      *(undefined4 *)((long)&uStack_100 + lVar2) = 0x6b736174;
      pcVar1 = acStack_fc + lVar2 + 1;
      builtin_strncpy(acStack_f3 + lVar2,"Continua",8);
      pcVar1[0] = 'u';
      pcVar1[1] = 'p';
      pcVar1[2] = 's';
      pcVar1[3] = 't';
      pcVar1[4] = 'r';
      pcVar1[5] = 'e';
      pcVar1[6] = 'a';
      pcVar1[7] = 'm';
      builtin_strncpy(acStack_ee + lVar2,"nuation ",8);
      builtin_strncpy(acStack_de + lVar2,"amContin",8);
      builtin_strncpy(acStack_e6 + lVar2,"downstre",8);
      builtin_strncpy(&cStack_d7 + lVar2,"nuation ",8);
      builtin_strncpy(acStack_cf + lVar2,"currentE",8);
      builtin_strncpy(acStack_c8 + lVar2,"Element ",8);
      auStack_c0[lVar2] = 0;
      puVar9 = &DAT_100fe2d00;
      FUN_1000f8b08(&DAT_100fe2d00,&DAT_100c76eb0);
      puVar10 = &DAT_100fe3398;
      local_80 = puVar9;
      FUN_1000f8b08(&DAT_100fe3398,&DAT_100c772a0);
      uVar8 = 0xff;
      local_78 = puVar10;
      _swift_getAssociatedTypeWitness
                (0xff,local_b0[2],local_b0[4],
                 PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
                 PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
      Swift::Optional::typeMetadataAccessor();
      FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
      Swift::Result::typeMetadataAccessor();
      local_70 = (undefined *)Swift::UnsafeContinuation::typeMetadataAccessor();
      uVar11 = 0xff;
      _swift_getAssociatedTypeWitness
                (0xff,uVar14,uVar13,
                 PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
                 PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
      uVar13 = 0xff;
      _swift_getTupleTypeMetadata2(0xff,uVar8,uVar11,"element deadline ",0);
      lVar6 = 0;
      uStack_68 = uVar13;
      _swift_getTupleTypeMetadata(0,0x10004,&local_80,(long)&uStack_100 + lVar2,0);
      puVar12 = (undefined8 *)((long)puVar12 + (long)*(int *)(lVar6 + 0x50));
      lVar6 = 0;
      _swift_getTupleTypeMetadata2(0,uVar8,uVar11,"element deadline ",0);
      lVar15 = *(long *)(lVar6 + -8);
      goto LAB_10077b95c;
    }
    pcVar3 = *(code **)(lVar15 + 8);
    (*pcVar3)(puVar12,lVar6);
    (*pcVar3)();
    _swift_storeEnumTagMultiPayload();
  }
  return 0;
}



/* Address: 0x10077b9e4 | FUN_10077b9e4 */

/* WARNING: Type propagation algorithm not settling */

void FUN_10077b9e4(undefined8 param_1,undefined8 param_2,long param_3)

{
  char *pcVar1;
  long lVar2;
  Optional OVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined7 extraout_var_01;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *unaff_x20;
  undefined8 uVar12;
  undefined8 uVar13;
  code *pcVar14;
  long lVar15;
  undefined4 uStack_e0;
  char acStack_dc [9];
  char acStack_d3 [5];
  char acStack_ce [8];
  char acStack_c6 [8];
  char acStack_be [7];
  char cStack_b7;
  undefined2 uStack_b6;
  char acStack_b4 [5];
  char acStack_af [7];
  char acStack_a8 [4];
  undefined1 auStack_a4 [4];
  undefined1 auStack_a0 [16];
  undefined *local_90 [4];
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined8 uStack_58;
  
  uVar12 = *(undefined8 *)(param_3 + 0x18);
  local_90[3] = *(undefined **)(param_3 + 0x18);
  local_90[2] = *(undefined **)(param_3 + 0x10);
  local_90[1] = *(undefined **)(param_3 + 0x28);
  local_90[0] = *(undefined **)(param_3 + 0x20);
  uVar13 = *(undefined8 *)(param_3 + 0x28);
  lVar5 = 0;
  local_70 = local_90[2];
  local_68 = local_90[3];
  local_60 = local_90[0];
  uStack_58 = local_90[1];
  FUN_100778e10(0,&local_70);
  lVar15 = *(long *)(lVar5 + -8);
  lVar2 = -(*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar11 = (undefined8 *)((long)local_90 + lVar2);
  (**(code **)(lVar15 + 0x10))(puVar11);
  puVar6 = puVar11;
  _swift_getEnumCaseMultiPayload(puVar11,lVar5);
  iVar4 = (int)puVar6;
  if (iVar4 == 0) {
    (**(code **)(lVar15 + 8))();
    *unaff_x20 = param_1;
    unaff_x20[1] = 0;
    unaff_x20[2] = param_2;
    _swift_storeEnumTagMultiPayload();
    puVar7 = local_90[2];
    pcVar14 = *(code **)(*(long *)(local_90[2] + -8) + 8);
    _swift_retain(param_1);
    (*pcVar14)(puVar11,puVar7);
    return;
  }
  if (iVar4 < 3) {
    if (iVar4 == 1) {
      _swift_release(*puVar11);
      acStack_dc[lVar2] = ' ';
      *(undefined4 *)((long)&uStack_e0 + lVar2) = 0x6b736174;
      pcVar1 = acStack_dc + lVar2 + 1;
      builtin_strncpy(acStack_d3 + lVar2,"Continua",8);
      pcVar1[0] = 'u';
      pcVar1[1] = 'p';
      pcVar1[2] = 's';
      pcVar1[3] = 't';
      pcVar1[4] = 'r';
      pcVar1[5] = 'e';
      pcVar1[6] = 'a';
      pcVar1[7] = 'm';
      builtin_strncpy(acStack_ce + lVar2,"nuation ",8);
      *(undefined2 *)(acStack_b4 + lVar2 + 0xfffffffffffffffe) = 0x206e;
      builtin_strncpy(acStack_be + lVar2,"tinuatio",8);
      builtin_strncpy(acStack_c6 + lVar2,"clockCon",8);
      pcVar1 = acStack_b4 + lVar2;
      builtin_strncpy(acStack_af + lVar2 + 3,"Element ",8);
      pcVar1[0] = 'b';
      pcVar1[1] = 'u';
      pcVar1[2] = 'f';
      pcVar1[3] = 'f';
      pcVar1[4] = 'e';
      pcVar1[5] = 'r';
      pcVar1[6] = 'e';
      pcVar1[7] = 'd';
      auStack_a4[lVar2] = 0;
      puVar7 = &DAT_100fe2d00;
      FUN_1000f8b08(&DAT_100fe2d00,&DAT_100c76eb0);
      puVar8 = &DAT_100fe3398;
      local_70 = puVar7;
      FUN_1000f8b08(&DAT_100fe3398,&DAT_100c772a0);
      uVar9 = 0xff;
      local_68 = puVar8;
      _swift_getAssociatedTypeWitness
                (0xff,uVar13,uVar12,
                 PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
                 PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
      FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
      Swift::UnsafeContinuation::typeMetadataAccessor();
      OVar3 = Swift::Optional::typeMetadataAccessor();
      local_60 = (undefined *)CONCAT71(extraout_var,OVar3.value);
      uVar12 = 0xff;
      _swift_getAssociatedTypeWitness
                (0xff,local_90[0],local_90[2],
                 PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
                 PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
      _swift_getTupleTypeMetadata2(0xff,uVar12,uVar9,"element deadline ",0);
      OVar3 = Swift::Optional::typeMetadataAccessor();
      uStack_58 = CONCAT71(extraout_var_00,OVar3.value);
      lVar15 = 0;
      _swift_getTupleTypeMetadata(0,0x10004,&local_70,(long)&uStack_e0 + lVar2,0);
      _swift_getTupleTypeMetadata2(0xff,uVar12,uVar9,"element deadline ",0);
      OVar3 = Swift::Optional::typeMetadataAccessor();
      lVar5 = CONCAT71(extraout_var_01,OVar3.value);
      goto LAB_10077be3c;
    }
  }
  else if (iVar4 == 3) {
    _swift_release(*puVar11);
    acStack_dc[lVar2] = ' ';
    *(undefined4 *)((long)&uStack_e0 + lVar2) = 0x6b736174;
    pcVar1 = acStack_dc + lVar2 + 1;
    builtin_strncpy(acStack_d3 + lVar2,"Continua",8);
    pcVar1[0] = 'u';
    pcVar1[1] = 'p';
    pcVar1[2] = 's';
    pcVar1[3] = 't';
    pcVar1[4] = 'r';
    pcVar1[5] = 'e';
    pcVar1[6] = 'a';
    pcVar1[7] = 'm';
    builtin_strncpy(acStack_ce + lVar2,"nuation ",8);
    builtin_strncpy(acStack_be + lVar2,"amContin",8);
    builtin_strncpy(acStack_c6 + lVar2,"downstre",8);
    builtin_strncpy(&cStack_b7 + lVar2,"nuation ",8);
    builtin_strncpy(acStack_af + lVar2,"currentE",8);
    builtin_strncpy(acStack_a8 + lVar2,"Element ",8);
    auStack_a0[lVar2] = 0;
    puVar7 = &DAT_100fe2d00;
    FUN_1000f8b08(&DAT_100fe2d00,&DAT_100c76eb0);
    puVar8 = &DAT_100fe3398;
    local_70 = puVar7;
    FUN_1000f8b08(&DAT_100fe3398,&DAT_100c772a0);
    uVar9 = 0xff;
    local_68 = puVar8;
    _swift_getAssociatedTypeWitness
              (0xff,local_90[0],local_90[2],
               PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
               PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
    Swift::Optional::typeMetadataAccessor();
    FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
    Swift::Result::typeMetadataAccessor();
    local_60 = (undefined *)Swift::UnsafeContinuation::typeMetadataAccessor();
    uVar10 = 0xff;
    _swift_getAssociatedTypeWitness
              (0xff,uVar13,uVar12,
               PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
               PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
    uVar12 = 0xff;
    _swift_getTupleTypeMetadata2(0xff,uVar9,uVar10,"element deadline ",0);
    lVar15 = 0;
    uStack_58 = uVar12;
    _swift_getTupleTypeMetadata(0,0x10004,&local_70,(long)&uStack_e0 + lVar2,0);
    lVar5 = 0;
    _swift_getTupleTypeMetadata2(0,uVar9,uVar10,"element deadline ",0);
LAB_10077be3c:
    puVar11 = (undefined8 *)((long)puVar11 + (long)*(int *)(lVar15 + 0x50));
    lVar15 = *(long *)(lVar5 + -8);
  }
  else if (iVar4 != 4) goto LAB_10077be5c;
  (**(code **)(lVar15 + 8))(puVar11,lVar5);
LAB_10077be5c:
                    /* WARNING: Does not return */
  pcVar14 = (code *)SoftwareBreakpoint(1,0x10077be60);
  (*pcVar14)();
}



/* Address: 0x10077be60 | FUN_10077be60 */

undefined1  [16] FUN_10077be60(undefined8 param_1,long param_2)

{
  Optional OVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined7 extraout_var;
  long lVar6;
  undefined8 *puVar7;
  CancellationError CVar8;
  CancellationError CVar9;
  undefined7 extraout_var_00;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  ulong uVar13;
  code *pcVar14;
  long lVar15;
  undefined8 *unaff_x20;
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  undefined1 auVar21 [16];
  undefined8 uStack_100;
  char acStack_f3 [5];
  char acStack_ee [8];
  char acStack_e6 [8];
  char acStack_de [7];
  char cStack_d7;
  undefined2 uStack_d6;
  char acStack_d4 [5];
  char acStack_cf [7];
  char acStack_c8 [4];
  undefined1 auStack_c4 [4];
  undefined8 auStack_c0 [2];
  long local_b0 [2];
  undefined8 *local_a0;
  long lStack_98;
  undefined *local_90;
  undefined *puStack_88;
  undefined *local_80;
  undefined *puStack_78;
  undefined8 *local_70;
  long lStack_68;
  
  uVar16 = *(undefined8 *)(param_2 + 0x18);
  puStack_88 = *(undefined **)(param_2 + 0x18);
  local_90 = *(undefined **)(param_2 + 0x10);
  uVar18 = *(undefined8 *)(param_2 + 0x28);
  lStack_98 = *(long *)(param_2 + 0x28);
  local_a0 = *(undefined8 **)(param_2 + 0x20);
  uVar3 = 0xff;
  local_b0[1] = param_1;
  _swift_getAssociatedTypeWitness
            (0xff,local_a0,local_90,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  uVar4 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar18,uVar16,
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  lVar5 = 0xff;
  _swift_getTupleTypeMetadata2(0xff,uVar3,uVar4,"element deadline ",0);
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lVar12 = CONCAT71(extraout_var,OVar1.value);
  lVar20 = *(long *)(lVar12 + -8);
  lVar19 = (long)local_b0 - (*(long *)(lVar20 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puStack_78 = puStack_88;
  local_80 = local_90;
  lStack_68 = lStack_98;
  local_70 = local_a0;
  lVar6 = 0;
  FUN_100778e10(0,&local_80);
  lVar15 = *(long *)(lVar6 + -8);
  puVar17 = (undefined8 *)(lVar19 - (*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0));
  (**(code **)(lVar15 + 0x10))(puVar17);
  puVar7 = puVar17;
  _swift_getEnumCaseMultiPayload(puVar17,lVar6);
  iVar2 = (int)puVar7;
  if (iVar2 < 3) {
    if (iVar2 == 1) {
      local_a0 = puVar17;
      lVar5 = puVar17[1];
      local_90 = (undefined *)*puVar17;
      local_b0[0] = puVar17[2];
      *(undefined1 *)((long)puVar17 + -0x4c) = 0x20;
      *(undefined4 *)(puVar17 + -10) = 0x6b736174;
      builtin_strncpy((char *)((long)puVar17 + -0x43),"Continua",8);
      builtin_strncpy((char *)((long)puVar17 + -0x4b),"upstream",8);
      builtin_strncpy((char *)((long)puVar17 + -0x3e),"nuation ",8);
      *(undefined2 *)((long)puVar17 + -0x26) = 0x206e;
      builtin_strncpy((char *)((long)puVar17 + -0x2e),"tinuatio",8);
      builtin_strncpy((char *)((long)puVar17 + -0x36),"clockCon",8);
      builtin_strncpy((char *)((long)puVar17 + -0x1c),"Element ",8);
      builtin_strncpy((char *)((long)puVar17 + -0x24),"buffered",8);
      *(undefined1 *)((long)puVar17 + -0x14) = 0;
      puVar10 = &DAT_100fe2d00;
      FUN_1000f8b08(&DAT_100fe2d00,&DAT_100c76eb0);
      puVar11 = &DAT_100fe3398;
      local_80 = puVar10;
      FUN_1000f8b08(&DAT_100fe3398,&DAT_100c772a0);
      puStack_78 = puVar11;
      FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
      Swift::UnsafeContinuation::typeMetadataAccessor();
      OVar1 = Swift::Optional::typeMetadataAccessor();
      local_70 = (undefined8 *)CONCAT71(extraout_var_00,OVar1.value);
      lVar6 = 0;
      lStack_68 = lVar12;
      _swift_getTupleTypeMetadata(0,0x10004,&local_80,puVar17 + -10,0);
      puVar17 = (undefined8 *)((long)puVar17 + (long)*(int *)(lVar6 + 0x50));
      if (lVar5 != 0) {
        _swift_release(local_90);
        lVar5 = lVar12;
LAB_10077c2e4:
        (**(code **)(lVar20 + 8))(puVar17,lVar5);
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x10077c2f8);
        (*pcVar14)();
      }
      pcVar14 = *(code **)(lVar20 + 0x20);
      (*pcVar14)(lVar19,puVar17,lVar12);
      (**(code **)(lVar15 + 8))();
      iVar2 = *(int *)(lVar6 + 0x50);
      *unaff_x20 = local_90;
      unaff_x20[1] = local_b0[1];
      unaff_x20[2] = local_b0[0];
      (*pcVar14)((long)unaff_x20 + (long)iVar2,lVar19,lVar12);
      _swift_storeEnumTagMultiPayload();
      uVar13 = 0xf000000000000007;
      local_b0[1] = 0xf00000000000000f;
      goto LAB_10077c2a8;
    }
    if (iVar2 != 2) {
                    /* WARNING: Does not return */
      pcVar14 = (code *)SoftwareBreakpoint(1,0x10077c2cc);
      (*pcVar14)();
    }
    pcVar14 = *(code **)(lVar15 + 8);
    lVar5 = lVar6;
  }
  else {
    if (iVar2 != 3) {
      if (iVar2 != 5) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x10077c2d0);
        (*pcVar14)();
      }
      CVar8 = Swift::CancellationError::typeMetadataAccessor();
      CVar9 = CVar8;
      FUN_10076915c();
      _swift_allocError(CVar8.unknown,CVar9.unknown,0,0);
      Swift::CancellationError::init();
      uVar13 = (ulong)CVar8.unknown | 0x8000000000000000;
      goto LAB_10077c2a8;
    }
    _swift_release(*puVar17);
    lVar6 = puVar17[1];
    *(undefined1 *)((long)puVar17 + -0x4c) = 0x20;
    *(undefined4 *)(puVar17 + -10) = 0x6b736174;
    builtin_strncpy((char *)((long)puVar17 + -0x43),"Continua",8);
    builtin_strncpy((char *)((long)puVar17 + -0x4b),"upstream",8);
    builtin_strncpy((char *)((long)puVar17 + -0x3e),"nuation ",8);
    builtin_strncpy((char *)((long)puVar17 + -0x2e),"amContin",8);
    builtin_strncpy((char *)((long)puVar17 + -0x36),"downstre",8);
    builtin_strncpy((char *)((long)puVar17 + -0x27),"nuation ",8);
    builtin_strncpy((char *)((long)puVar17 + -0x1f),"currentE",8);
    builtin_strncpy((char *)(puVar17 + -3),"Element ",8);
    *(undefined1 *)(puVar17 + -2) = 0;
    puVar10 = &DAT_100fe2d00;
    FUN_1000f8b08(&DAT_100fe2d00,&DAT_100c76eb0);
    puVar11 = &DAT_100fe3398;
    local_80 = puVar10;
    FUN_1000f8b08(&DAT_100fe3398,&DAT_100c772a0);
    puStack_78 = puVar11;
    Swift::Optional::typeMetadataAccessor();
    FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
    Swift::Result::typeMetadataAccessor();
    local_70 = (undefined8 *)Swift::UnsafeContinuation::typeMetadataAccessor();
    lVar12 = 0;
    lStack_68 = lVar5;
    _swift_getTupleTypeMetadata(0,0x10004,&local_80,puVar17 + -10,0);
    puVar17 = (undefined8 *)((long)puVar17 + (long)*(int *)(lVar12 + 0x50));
    if (lVar6 != 0) {
      lVar20 = *(long *)(lVar5 + -8);
      goto LAB_10077c2e4;
    }
    pcVar14 = *(code **)(*(long *)(lVar5 + -8) + 8);
  }
  (*pcVar14)(puVar17,lVar5);
  uVar13 = 0;
LAB_10077c2a8:
  auVar21._8_8_ = uVar13;
  auVar21._0_8_ = local_b0[1];
  return auVar21;
}



/* Address: 0x10077c2f8 | FUN_10077c2f8 */

void FUN_10077c2f8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  Optional OVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined7 extraout_var;
  long lVar8;
  undefined7 extraout_var_00;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  code *pcVar13;
  undefined8 *unaff_x20;
  undefined8 *puVar14;
  undefined8 uVar15;
  long lVar16;
  undefined *puVar17;
  long lVar18;
  undefined8 uStack_130;
  char acStack_123 [5];
  char acStack_11e [8];
  char acStack_116 [8];
  char acStack_10e [7];
  char cStack_107;
  undefined2 uStack_106;
  char acStack_104 [5];
  char acStack_ff [7];
  char acStack_f8 [4];
  undefined1 auStack_f4 [4];
  undefined8 auStack_f0 [2];
  undefined8 *local_e0 [6];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  long local_98;
  undefined8 *local_90;
  undefined *local_88;
  undefined *local_80;
  undefined *local_78;
  undefined *local_70;
  undefined8 local_68;
  
  uVar15 = *(undefined8 *)(param_4 + 0x28);
  puVar17 = *(undefined **)(param_4 + 0x18);
  lVar3 = 0;
  local_a8 = param_2;
  local_a0 = param_3;
  local_90 = param_1;
  _swift_getAssociatedTypeWitness
            (0,uVar15,puVar17,PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  local_98 = *(long *)(lVar3 + -8);
  lVar8 = (long)local_e0 - (*(long *)(local_98 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_88 = *(undefined **)(param_4 + 0x10);
  puVar12 = *(undefined **)(param_4 + 0x20);
  lVar4 = 0;
  local_80 = local_88;
  local_78 = puVar17;
  local_70 = puVar12;
  local_68 = uVar15;
  FUN_100778e10(0,&local_80);
  lVar18 = *(long *)(lVar4 + -8);
  puVar14 = (undefined8 *)(lVar8 - (*(long *)(lVar18 + 0x40) + 0xfU & 0xfffffffffffffff0));
  (**(code **)(lVar18 + 0x10))(puVar14);
  puVar5 = puVar14;
  _swift_getEnumCaseMultiPayload(puVar14,lVar4);
  iVar2 = (int)puVar5;
  if (iVar2 < 3) {
    local_e0[4] = (undefined8 *)uVar15;
    local_e0[5] = (undefined8 *)puVar12;
    local_b0 = puVar17;
    if (iVar2 != 1) {
      if (iVar2 != 2) {
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x10077cbdc);
        (*pcVar13)();
      }
      uVar15 = *puVar14;
      local_e0[2] = (undefined8 *)puVar14[1];
      local_e0[1] = (undefined8 *)puVar14[2];
      (**(code **)(lVar18 + 8))();
      local_e0[0] = puVar14;
      *(undefined1 *)((long)puVar14 + -0x4c) = 0x20;
      *(undefined4 *)(puVar14 + -10) = 0x6b736174;
      builtin_strncpy((char *)((long)puVar14 + -0x43),"Continua",8);
      builtin_strncpy((char *)((long)puVar14 + -0x4b),"upstream",8);
      builtin_strncpy((char *)((long)puVar14 + -0x3e),"nuation ",8);
      builtin_strncpy((char *)((long)puVar14 + -0x2e),"amContin",8);
      builtin_strncpy((char *)((long)puVar14 + -0x36),"downstre",8);
      builtin_strncpy((char *)((long)puVar14 + -0x27),"nuation ",8);
      builtin_strncpy((char *)((long)puVar14 + -0x1f),"currentE",8);
      builtin_strncpy((char *)(puVar14 + -3),"Element ",8);
      *(undefined1 *)(puVar14 + -2) = 0;
      puVar17 = &DAT_100fe2d00;
      FUN_1000f8b08(&DAT_100fe2d00,&DAT_100c76eb0);
      puVar10 = &DAT_100fe3398;
      local_80 = puVar17;
      FUN_1000f8b08(&DAT_100fe3398,&DAT_100c772a0);
      lVar18 = 0xff;
      local_78 = puVar10;
      _swift_getAssociatedTypeWitness
                (0xff,puVar12,local_88,
                 PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
                 PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
      Swift::Optional::typeMetadataAccessor();
      FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
      Swift::Result::typeMetadataAccessor();
      local_70 = (undefined *)Swift::UnsafeContinuation::typeMetadataAccessor();
      uVar6 = 0xff;
      _swift_getTupleTypeMetadata2(0xff,lVar18,lVar3,"element deadline ",0);
      lVar4 = 0;
      local_68 = uVar6;
      _swift_getTupleTypeMetadata(0,0x10004,&local_80,puVar14 + -10,0);
      lVar4 = (long)unaff_x20 + (long)*(int *)(lVar4 + 0x50);
      *unaff_x20 = uVar15;
      unaff_x20[1] = 0;
      unaff_x20[2] = local_e0[1];
      lVar7 = 0;
      _swift_getTupleTypeMetadata2(0,lVar18,lVar3,"element deadline ",0);
      iVar2 = *(int *)(lVar7 + 0x30);
      (**(code **)(*(long *)(lVar18 + -8) + 0x10))(lVar4,local_a8,lVar18);
      lVar18 = local_98;
      (**(code **)(local_98 + 0x10))(lVar4 + iVar2,local_a0,lVar3);
      _swift_storeEnumTagMultiPayload();
      _swift_retain(uVar15);
      uVar6 = local_b0;
      puVar14 = local_e0[4];
      Swift::Clock::_get_now();
      FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
      Swift::UnsafeContinuation::typeMetadataAccessor();
      OVar1 = Swift::Optional::typeMetadataAccessor();
      _swift_getTupleTypeMetadata2(0,OVar1.value,lVar3,"clockContinuation deadline ",0);
      _swift_getAssociatedConformanceWitness
                (puVar14,uVar6,lVar3,
                 PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
                 PTR___associated_conformance_descriptor_for_Swift_Clock_Swift_Clock_Instant__Swift_InstantProtocol_100eaeff0
                );
      puVar5 = local_90;
      Swift::InstantProtocol::_advanced();
      _swift_release(uVar15);
      (**(code **)(lVar18 + 8))(lVar8,lVar3);
      *puVar5 = local_e0[2];
      local_80 = local_88;
      local_78 = (undefined *)uVar6;
      local_70 = (undefined *)local_e0[5];
      local_68 = puVar14;
      lVar3 = 0;
      FUN_10077e9fc(0,&local_80);
      pcVar13 = *(code **)(*(long *)(lVar3 + -8) + 0x38);
      uVar15 = 0;
      goto LAB_10077c954;
    }
    local_e0[1] = (undefined8 *)puVar14[1];
    local_e0[2] = (undefined8 *)*puVar14;
    local_e0[0] = (undefined8 *)puVar14[2];
    *(undefined1 *)((long)puVar14 + -0x4c) = 0x20;
    *(undefined4 *)(puVar14 + -10) = 0x6b736174;
    builtin_strncpy((char *)((long)puVar14 + -0x43),"Continua",8);
    builtin_strncpy((char *)((long)puVar14 + -0x4b),"upstream",8);
    builtin_strncpy((char *)((long)puVar14 + -0x3e),"nuation ",8);
    *(undefined2 *)((long)puVar14 + -0x26) = 0x206e;
    builtin_strncpy((char *)((long)puVar14 + -0x2e),"tinuatio",8);
    builtin_strncpy((char *)((long)puVar14 + -0x36),"clockCon",8);
    builtin_strncpy((char *)((long)puVar14 + -0x1c),"Element ",8);
    builtin_strncpy((char *)((long)puVar14 + -0x24),"buffered",8);
    *(undefined1 *)((long)puVar14 + -0x14) = 0;
    puVar17 = &DAT_100fe2d00;
    FUN_1000f8b08(&DAT_100fe2d00,&DAT_100c76eb0);
    puVar10 = &DAT_100fe3398;
    local_80 = puVar17;
    FUN_1000f8b08(&DAT_100fe3398,&DAT_100c772a0);
    local_78 = puVar10;
    FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
    Swift::UnsafeContinuation::typeMetadataAccessor();
    OVar1 = Swift::Optional::typeMetadataAccessor();
    local_70 = (undefined *)CONCAT71(extraout_var,OVar1.value);
    lVar8 = 0xff;
    _swift_getAssociatedTypeWitness
              (0xff,puVar12,local_88,
               PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
               PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
    _swift_getTupleTypeMetadata2(0xff,lVar8,lVar3,"element deadline ",0);
    OVar1 = Swift::Optional::typeMetadataAccessor();
    local_68 = CONCAT71(extraout_var_00,OVar1.value);
    lVar7 = 0;
    _swift_getTupleTypeMetadata(0,0x10004,&local_80,puVar14 + -10,0);
    iVar2 = *(int *)(lVar7 + 0x50);
    lVar9 = 0;
    _swift_getTupleTypeMetadata2(0,lVar8,lVar3,"element deadline ",0);
    lVar16 = *(long *)(lVar9 + -8);
    lVar4 = (long)puVar14 + (long)iVar2;
    (**(code **)(lVar16 + 0x30))(lVar4,1,lVar9);
    if ((int)lVar4 != 1) {
                    /* WARNING: Does not return */
      pcVar13 = (code *)SoftwareBreakpoint(1,0x10077cbe4);
      (*pcVar13)();
    }
    (**(code **)(lVar18 + 8))();
    lVar4 = (long)unaff_x20 + (long)*(int *)(lVar7 + 0x50);
    *unaff_x20 = local_e0[2];
    unaff_x20[1] = local_e0[1];
    unaff_x20[2] = local_e0[0];
    iVar2 = *(int *)(lVar9 + 0x30);
    (**(code **)(*(long *)(lVar8 + -8) + 0x10))(lVar4,local_a8,lVar8);
    (**(code **)(local_98 + 0x10))(lVar4 + iVar2,local_a0,lVar3);
    (**(code **)(lVar16 + 0x38))(lVar4,0,1,lVar9);
    _swift_storeEnumTagMultiPayload();
    local_78 = (undefined *)local_b0;
    local_70 = (undefined *)local_e0[5];
    local_68 = local_e0[4];
    puVar17 = local_78;
    puVar12 = local_70;
    uVar15 = local_68;
  }
  else {
    if (iVar2 == 3) {
      local_e0[0] = puVar14;
      local_e0[3] = (undefined8 *)puVar14[1];
      local_e0[2] = (undefined8 *)*puVar14;
      local_e0[1] = (undefined8 *)puVar14[2];
      *(undefined1 *)((long)puVar14 + -0x4c) = 0x20;
      *(undefined4 *)(puVar14 + -10) = 0x6b736174;
      builtin_strncpy((char *)((long)puVar14 + -0x43),"Continua",8);
      builtin_strncpy((char *)((long)puVar14 + -0x4b),"upstream",8);
      builtin_strncpy((char *)((long)puVar14 + -0x3e),"nuation ",8);
      builtin_strncpy((char *)((long)puVar14 + -0x2e),"amContin",8);
      builtin_strncpy((char *)((long)puVar14 + -0x36),"downstre",8);
      builtin_strncpy((char *)((long)puVar14 + -0x27),"nuation ",8);
      builtin_strncpy((char *)((long)puVar14 + -0x1f),"currentE",8);
      builtin_strncpy((char *)(puVar14 + -3),"Element ",8);
      *(undefined1 *)(puVar14 + -2) = 0;
      puVar10 = &DAT_100fe2d00;
      FUN_1000f8b08(&DAT_100fe2d00,&DAT_100c76eb0);
      puVar11 = &DAT_100fe3398;
      local_80 = puVar10;
      FUN_1000f8b08(&DAT_100fe3398,&DAT_100c772a0);
      puVar10 = local_88;
      lVar8 = 0xff;
      local_e0[5] = (undefined8 *)puVar12;
      local_78 = puVar11;
      _swift_getAssociatedTypeWitness
                (0xff,puVar12,local_88,
                 PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
                 PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
      Swift::Optional::typeMetadataAccessor();
      local_b0 = puVar17;
      FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
      Swift::Result::typeMetadataAccessor();
      local_70 = (undefined *)Swift::UnsafeContinuation::typeMetadataAccessor();
      uVar6 = 0xff;
      _swift_getTupleTypeMetadata2(0xff,lVar8,lVar3,"element deadline ",0);
      lVar4 = 0;
      local_68 = uVar6;
      _swift_getTupleTypeMetadata(0,0x10004,&local_80,puVar14 + -10,0);
      local_e0[0] = (undefined8 *)(long)*(int *)(lVar4 + 0x50);
      (**(code **)(lVar18 + 8))();
      lVar4 = (long)unaff_x20 + (long)*(int *)(lVar4 + 0x50);
      unaff_x20[1] = local_e0[3];
      *unaff_x20 = local_e0[2];
      unaff_x20[2] = local_e0[1];
      lVar18 = 0;
      _swift_getTupleTypeMetadata2(0,lVar8,lVar3,"element deadline ",0);
      iVar2 = *(int *)(lVar18 + 0x30);
      (**(code **)(*(long *)(lVar8 + -8) + 0x10))(lVar4,local_a8,lVar8);
      (**(code **)(local_98 + 0x10))(lVar4 + iVar2,local_a0,lVar3);
      _swift_storeEnumTagMultiPayload();
      local_80 = puVar10;
      local_78 = (undefined *)local_b0;
      local_70 = (undefined *)local_e0[5];
      lVar3 = 0;
      local_68 = uVar15;
      FUN_10077e9fc(0,&local_80);
      (**(code **)(*(long *)(lVar3 + -8) + 0x38))(local_90,1,1,lVar3);
      (**(code **)(*(long *)(lVar18 + -8) + 8))((long)puVar14 + (long)local_e0[0],lVar18);
      return;
    }
    if (iVar2 != 5) {
                    /* WARNING: Does not return */
      pcVar13 = (code *)SoftwareBreakpoint(1,0x10077cbe0);
      (*pcVar13)();
    }
  }
  local_68 = uVar15;
  local_70 = puVar12;
  local_78 = puVar17;
  lVar3 = 0;
  local_80 = local_88;
  FUN_10077e9fc(0,&local_80);
  pcVar13 = *(code **)(*(long *)(lVar3 + -8) + 0x38);
  uVar15 = 1;
  puVar5 = local_90;
LAB_10077c954:
  (*pcVar13)(puVar5,uVar15,1,lVar3);
  return;
}



/* Address: 0x10077cbe4 | FUN_10077cbe4 */

void FUN_10077cbe4(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  Optional OVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined *puVar13;
  undefined *puVar14;
  undefined7 extraout_var_01;
  long lVar15;
  undefined7 extraout_var_02;
  ulong uVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  long lVar22;
  undefined8 uStack_150;
  char acStack_143 [5];
  char acStack_13e [8];
  char acStack_136 [8];
  char acStack_12e [7];
  char cStack_127;
  undefined2 uStack_126;
  char acStack_124 [5];
  char acStack_11f [7];
  char acStack_118 [4];
  undefined1 auStack_114 [4];
  undefined8 auStack_110 [2];
  undefined8 *local_100;
  long local_f8;
  code *local_f0 [2];
  long local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  undefined *local_c0;
  undefined8 local_b8;
  undefined *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined *local_90;
  undefined *puStack_88;
  undefined *local_80;
  undefined *local_78;
  undefined8 local_70;
  
  uVar18 = *(undefined8 *)(param_2 + 0x28);
  uStack_a8 = *(undefined8 *)(param_2 + 0x18);
  local_c0 = *(undefined **)(param_2 + 0x10);
  uStack_98 = *(undefined8 *)(param_2 + 0x28);
  local_b8 = *(undefined8 *)(param_2 + 0x20);
  uVar19 = *(undefined8 *)(param_2 + 0x18);
  lVar9 = 0xff;
  local_b0 = local_c0;
  local_a0 = local_b8;
  _swift_getAssociatedTypeWitness();
  lVar10 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar18,uVar19,
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  lVar11 = 0;
  local_c8 = lVar10;
  _swift_getTupleTypeMetadata2(0,lVar9,lVar10,"element deadline ",0);
  lVar22 = *(long *)(lVar11 + -8);
  uVar16 = *(long *)(lVar22 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_d8 = (long)&local_100 - uVar16;
  lVar17 = local_d8 - uVar16;
  local_90 = local_b0;
  local_80 = (undefined *)local_a0;
  lVar10 = 0;
  local_e0 = lVar17;
  local_d0 = lVar11;
  puStack_88 = (undefined *)uVar19;
  local_78 = (undefined *)uVar18;
  FUN_100778e10(0,&local_90);
  lVar11 = *(long *)(lVar10 + -8);
  puVar20 = (undefined8 *)(lVar17 - (*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0));
  (**(code **)(lVar11 + 0x10))(puVar20);
  puVar12 = puVar20;
  _swift_getEnumCaseMultiPayload(puVar20,lVar10);
  iVar8 = (int)puVar12;
  if (iVar8 < 3) {
    if (iVar8 == 1) {
      if (puVar20[1] != 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10077d314);
        (*pcVar6)();
      }
      local_b8 = *puVar20;
      uVar18 = puVar20[2];
      *(undefined1 *)((long)puVar20 + -0x4c) = 0x20;
      *(undefined4 *)(puVar20 + -10) = 0x6b736174;
      builtin_strncpy((char *)((long)puVar20 + -0x43),"Continua",8);
      builtin_strncpy((char *)((long)puVar20 + -0x4b),"upstream",8);
      builtin_strncpy((char *)((long)puVar20 + -0x3e),"nuation ",8);
      *(undefined2 *)((long)puVar20 + -0x26) = 0x206e;
      builtin_strncpy((char *)((long)puVar20 + -0x2e),"tinuatio",8);
      builtin_strncpy((char *)((long)puVar20 + -0x36),"clockCon",8);
      builtin_strncpy((char *)((long)puVar20 + -0x1c),"Element ",8);
      builtin_strncpy((char *)((long)puVar20 + -0x24),"buffered",8);
      *(undefined1 *)((long)puVar20 + -0x14) = 0;
      puVar13 = &DAT_100fe2d00;
      FUN_1000f8b08(&DAT_100fe2d00,&DAT_100c76eb0);
      puVar14 = &DAT_100fe3398;
      local_90 = puVar13;
      FUN_1000f8b08(&DAT_100fe3398,&DAT_100c772a0);
      puStack_88 = puVar14;
      FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
      Swift::UnsafeContinuation::typeMetadataAccessor();
      OVar7 = Swift::Optional::typeMetadataAccessor();
      lVar10 = local_d0;
      local_80 = (undefined *)CONCAT71(extraout_var,OVar7.value);
      OVar7 = Swift::Optional::typeMetadataAccessor();
      local_78 = (undefined *)CONCAT71(extraout_var_00,OVar7.value);
      lVar9 = 0;
      _swift_getTupleTypeMetadata(0,0x10004,&local_90,puVar20 + -10,0);
      lVar9 = (long)puVar20 + (long)*(int *)(lVar9 + 0x50);
      (**(code **)(lVar22 + 0x30))(lVar9,1,lVar10);
      if ((int)lVar9 != 1) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10077d318);
        (*pcVar6)();
      }
      (**(code **)(lVar11 + 8))();
      _swift_storeEnumTagMultiPayload();
      *param_1 = local_b8;
      param_1[1] = uVar18;
      puStack_88 = (undefined *)uStack_a8;
      local_90 = local_b0;
      local_78 = (undefined *)uStack_98;
      local_80 = (undefined *)local_a0;
      lVar9 = 0;
      FUN_10077ea08(0,&local_90);
      uVar18 = 0;
    }
    else {
      if (iVar8 != 2) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10077d30c);
        (*pcVar6)();
      }
      uVar1 = *puVar20;
      uVar2 = puVar20[1];
      uVar21 = puVar20[2];
      (**(code **)(lVar11 + 8))();
      _swift_storeEnumTagMultiPayload();
      *param_1 = uVar21;
      param_1[1] = uVar1;
      param_1[2] = 0;
      param_1[3] = uVar2;
      local_90 = local_c0;
      local_80 = (undefined *)local_b8;
      lVar9 = 0;
      puStack_88 = (undefined *)uVar19;
      local_78 = (undefined *)uVar18;
      FUN_10077ea08(0,&local_90);
      uVar18 = 1;
    }
    _swift_storeEnumTagMultiPayload(param_1,lVar9,uVar18);
    (**(code **)(*(long *)(lVar9 + -8) + 0x38))(param_1,0,1,lVar9);
  }
  else if (iVar8 == 3) {
    local_f0[0] = (code *)puVar20;
    local_a0 = *puVar20;
    local_b0 = (undefined *)puVar20[1];
    local_f0[1] = (code *)puVar20[2];
    local_100 = puVar20 + -10;
    *(undefined1 *)((long)puVar20 + -0x4c) = 0x20;
    *(undefined4 *)(puVar20 + -10) = 0x6b736174;
    builtin_strncpy((char *)((long)puVar20 + -0x43),"Continua",8);
    builtin_strncpy((char *)((long)puVar20 + -0x4b),"upstream",8);
    builtin_strncpy((char *)((long)puVar20 + -0x3e),"nuation ",8);
    builtin_strncpy((char *)((long)puVar20 + -0x2e),"amContin",8);
    builtin_strncpy((char *)((long)puVar20 + -0x36),"downstre",8);
    builtin_strncpy((char *)((long)puVar20 + -0x27),"nuation ",8);
    builtin_strncpy((char *)((long)puVar20 + -0x1f),"currentE",8);
    builtin_strncpy((char *)(puVar20 + -3),"Element ",8);
    *(undefined1 *)(puVar20 + -2) = 0;
    puVar13 = &DAT_100fe2d00;
    FUN_1000f8b08(&DAT_100fe2d00,&DAT_100c76eb0);
    puVar14 = &DAT_100fe3398;
    local_90 = puVar13;
    FUN_1000f8b08(&DAT_100fe3398,&DAT_100c772a0);
    puStack_88 = puVar14;
    OVar7 = Swift::Optional::typeMetadataAccessor();
    local_f8 = CONCAT71(extraout_var_01,OVar7.value);
    FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
    Swift::Result::typeMetadataAccessor();
    local_80 = (undefined *)Swift::UnsafeContinuation::typeMetadataAccessor();
    lVar17 = local_d0;
    local_78 = (undefined *)local_d0;
    lVar15 = 0;
    _swift_getTupleTypeMetadata(0,0x10004,&local_90,local_100,0);
    lVar10 = local_e0;
    pcVar6 = local_f0[0];
    local_f0[0] = *(code **)(lVar22 + 0x20);
    (*local_f0[0])(local_e0,(long)puVar20 + (long)*(int *)(lVar15 + 0x50),lVar17);
    (**(code **)(lVar11 + 8))();
    _swift_storeEnumTagMultiPayload();
    builtin_strncpy((char *)((long)pcVar6 + -0x58),"amContin",8);
    builtin_strncpy((char *)((long)pcVar6 + -0x60),"downstre",8);
    builtin_strncpy((char *)((long)pcVar6 + -0x51),"nuation ",8);
    *(undefined8 *)((long)pcVar6 + -0x49) = 0x20746e656d656c65;
    *(undefined4 *)((long)pcVar6 + -0x41) = 0x6b736174;
    *(undefined1 *)((long)pcVar6 + -0x3d) = 0x20;
    builtin_strncpy((char *)((long)pcVar6 + -0x34),"Continua",8);
    builtin_strncpy((char *)((long)pcVar6 + -0x3c),"upstream",8);
    builtin_strncpy((char *)((long)pcVar6 + -0x2f),"nuation ",8);
    *(undefined2 *)((long)pcVar6 + -0x17) = 0x206e;
    builtin_strncpy((char *)((long)pcVar6 + -0x1f),"tinuatio",8);
    builtin_strncpy((char *)((long)pcVar6 + -0x27),"clockCon",8);
    *(undefined1 *)((long)pcVar6 + -0x15) = 0;
    FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
    Swift::Result::typeMetadataAccessor();
    local_90 = (undefined *)Swift::UnsafeContinuation::typeMetadataAccessor();
    puVar13 = &DAT_100fe2d00;
    puStack_88 = (undefined *)lVar9;
    FUN_1000f8b08(&DAT_100fe2d00,&DAT_100c76eb0);
    puVar14 = &DAT_100fe3398;
    local_80 = puVar13;
    FUN_1000f8b08(&DAT_100fe3398,&DAT_100c772a0);
    local_78 = puVar14;
    Swift::UnsafeContinuation::typeMetadataAccessor();
    OVar7 = Swift::Optional::typeMetadataAccessor();
    local_70 = CONCAT71(extraout_var_02,OVar7.value);
    lVar22 = 0;
    _swift_getTupleTypeMetadata(0,0x10005,&local_90,(undefined8 *)((long)pcVar6 + -0x60),0);
    lVar17 = local_d0;
    lVar11 = local_d8;
    iVar8 = *(int *)(lVar22 + 0x30);
    iVar3 = *(int *)(lVar22 + 0x40);
    iVar4 = *(int *)(lVar22 + 0x50);
    iVar5 = *(int *)(lVar22 + 0x60);
    *param_1 = local_f0[1];
    (*local_f0[0])(local_d8,lVar10,local_d0);
    local_d0 = (long)*(int *)(lVar17 + 0x30);
    (**(code **)(*(long *)(lVar9 + -8) + 0x20))((long)param_1 + (long)iVar8,lVar11,lVar9);
    *(undefined8 *)((long)param_1 + (long)iVar3) = local_a0;
    *(undefined **)((long)param_1 + (long)iVar4) = local_b0;
    *(undefined8 *)((long)param_1 + (long)iVar5) = 0;
    local_90 = local_c0;
    local_80 = (undefined *)local_b8;
    lVar9 = 0;
    puStack_88 = (undefined *)uVar19;
    local_78 = (undefined *)uVar18;
    FUN_10077ea08(0,&local_90);
    _swift_storeEnumTagMultiPayload(param_1,lVar9,2);
    (**(code **)(*(long *)(lVar9 + -8) + 0x38))(param_1,0,1,lVar9);
    (**(code **)(*(long *)(local_c8 + -8) + 8))(lVar11 + local_d0);
  }
  else {
    if (iVar8 != 5) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10077d310);
      (*pcVar6)();
    }
    local_90 = local_c0;
    local_80 = (undefined *)local_b8;
    lVar9 = 0;
    puStack_88 = (undefined *)uVar19;
    local_78 = (undefined *)uVar18;
    FUN_10077ea08(0,&local_90);
    (**(code **)(*(long *)(lVar9 + -8) + 0x38))(param_1,1,1,lVar9);
  }
  return;
}



/* Address: 0x10077d318 | FUN_10077d318 */

/* WARNING: Type propagation algorithm not settling */

void FUN_10077d318(ulong *param_1,ulong param_2,long param_3)

{
  char *pcVar1;
  code *pcVar2;
  Optional OVar3;
  int iVar4;
  long lVar5;
  ulong *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  ulong uVar12;
  ulong uVar13;
  ulong *puVar14;
  ulong uVar15;
  undefined8 uVar16;
  ulong uVar17;
  undefined8 uVar18;
  long lVar19;
  undefined4 uStack_120;
  char acStack_11c [9];
  char acStack_113 [5];
  char acStack_10e [8];
  char acStack_106 [8];
  char acStack_fe [7];
  char cStack_f7;
  undefined2 uStack_f6;
  char acStack_f4 [5];
  char acStack_ef [7];
  char acStack_e8 [4];
  undefined1 auStack_e4 [4];
  undefined1 auStack_e0 [16];
  ulong auStack_d0 [2];
  ulong *local_c0;
  ulong local_b8;
  ulong local_b0;
  ulong local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined *local_90;
  undefined8 uStack_88;
  undefined *local_80;
  undefined *local_78;
  undefined *local_70;
  undefined8 uStack_68;
  
  uVar16 = *(undefined8 *)(param_3 + 0x18);
  uStack_88 = *(undefined8 *)(param_3 + 0x18);
  local_90 = *(undefined **)(param_3 + 0x10);
  uStack_98 = *(undefined8 *)(param_3 + 0x28);
  local_a0 = *(undefined8 *)(param_3 + 0x20);
  uVar18 = *(undefined8 *)(param_3 + 0x28);
  lVar5 = 0;
  local_80 = local_90;
  local_78 = (undefined *)uStack_88;
  local_70 = (undefined *)local_a0;
  uStack_68 = uStack_98;
  FUN_100778e10(0,&local_80);
  lVar19 = *(long *)(lVar5 + -8);
  lVar9 = -(*(long *)(lVar19 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar14 = (ulong *)((long)auStack_d0 + lVar9);
  (**(code **)(lVar19 + 0x10))(puVar14);
  puVar6 = puVar14;
  _swift_getEnumCaseMultiPayload(puVar14,lVar5);
  iVar4 = (int)puVar6;
  if (iVar4 < 3) {
    if (iVar4 == 1) {
      if (*(long *)((long)auStack_d0 + lVar9 + 8) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10077d858);
        (*pcVar2)();
      }
      local_b0 = *puVar14;
      local_a8 = *(ulong *)((long)&local_c0 + lVar9);
      acStack_11c[lVar9] = ' ';
      *(undefined4 *)((long)&uStack_120 + lVar9) = 0x6b736174;
      pcVar1 = acStack_11c + lVar9 + 1;
      builtin_strncpy(acStack_113 + lVar9,"Continua",8);
      pcVar1[0] = 'u';
      pcVar1[1] = 'p';
      pcVar1[2] = 's';
      pcVar1[3] = 't';
      pcVar1[4] = 'r';
      pcVar1[5] = 'e';
      pcVar1[6] = 'a';
      pcVar1[7] = 'm';
      builtin_strncpy(acStack_10e + lVar9,"nuation ",8);
      *(undefined2 *)(acStack_f4 + lVar9 + 0xfffffffffffffffe) = 0x206e;
      builtin_strncpy(acStack_fe + lVar9,"tinuatio",8);
      builtin_strncpy(acStack_106 + lVar9,"clockCon",8);
      pcVar1 = acStack_f4 + lVar9;
      builtin_strncpy(acStack_ef + lVar9 + 3,"Element ",8);
      pcVar1[0] = 'b';
      pcVar1[1] = 'u';
      pcVar1[2] = 'f';
      pcVar1[3] = 'f';
      pcVar1[4] = 'e';
      pcVar1[5] = 'r';
      pcVar1[6] = 'e';
      pcVar1[7] = 'd';
      auStack_e4[lVar9] = 0;
      puVar10 = &DAT_100fe2d00;
      FUN_1000f8b08(&DAT_100fe2d00,&DAT_100c76eb0);
      puVar11 = &DAT_100fe3398;
      local_80 = puVar10;
      FUN_1000f8b08(&DAT_100fe3398,&DAT_100c772a0);
      uVar7 = 0xff;
      local_78 = puVar11;
      _swift_getAssociatedTypeWitness
                (0xff,uVar18,uVar16,
                 PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
                 PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
      FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
      Swift::UnsafeContinuation::typeMetadataAccessor();
      OVar3 = Swift::Optional::typeMetadataAccessor();
      local_70 = (undefined *)CONCAT71(extraout_var,OVar3.value);
      uVar16 = 0xff;
      _swift_getAssociatedTypeWitness
                (0xff,local_a0,local_90,
                 PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
                 PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
      _swift_getTupleTypeMetadata2(0xff,uVar16,uVar7,"element deadline ",0);
      OVar3 = Swift::Optional::typeMetadataAccessor();
      uStack_68 = CONCAT71(extraout_var_00,OVar3.value);
      lVar5 = 0;
      _swift_getTupleTypeMetadata(0,0x10004,&local_80,(long)&uStack_120 + lVar9,0);
      iVar4 = *(int *)(lVar5 + 0x50);
      lVar5 = 0;
      _swift_getTupleTypeMetadata2(0,uVar16,uVar7,"element deadline ",0);
      lVar9 = (long)puVar14 + (long)iVar4;
      (**(code **)(*(long *)(lVar5 + -8) + 0x30))(lVar9,1,lVar5);
      if ((int)lVar9 != 1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10077d85c);
        (*pcVar2)();
      }
      (**(code **)(lVar19 + 8))();
      _swift_storeEnumTagMultiPayload();
      uVar13 = 0;
      uVar12 = 0;
      uVar17 = 0;
      param_2 = local_a8;
    }
    else {
      if (iVar4 != 2) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10077d854);
        (*pcVar2)();
      }
      uVar13 = *puVar14;
      uVar17 = *(ulong *)((long)auStack_d0 + lVar9 + 8);
      uVar15 = *(ulong *)((long)&local_c0 + lVar9);
      (**(code **)(lVar19 + 8))();
      _swift_storeEnumTagMultiPayload();
      uVar13 = uVar13 | 0x8000000000000000;
      _swift_errorRetain(param_2);
      uVar12 = 0;
      local_b0 = uVar15;
    }
  }
  else if (iVar4 == 3) {
    local_c0 = puVar14;
    local_b8 = *puVar14;
    uVar12 = *(ulong *)((long)auStack_d0 + lVar9 + 8);
    local_b0 = *(ulong *)((long)&local_c0 + lVar9);
    auStack_d0[1] = (long)&uStack_120 + lVar9;
    acStack_11c[lVar9] = ' ';
    *(undefined4 *)((long)&uStack_120 + lVar9) = 0x6b736174;
    pcVar1 = acStack_11c + lVar9 + 1;
    builtin_strncpy(acStack_113 + lVar9,"Continua",8);
    pcVar1[0] = 'u';
    pcVar1[1] = 'p';
    pcVar1[2] = 's';
    pcVar1[3] = 't';
    pcVar1[4] = 'r';
    pcVar1[5] = 'e';
    pcVar1[6] = 'a';
    pcVar1[7] = 'm';
    builtin_strncpy(acStack_10e + lVar9,"nuation ",8);
    builtin_strncpy(acStack_fe + lVar9,"amContin",8);
    builtin_strncpy(acStack_106 + lVar9,"downstre",8);
    builtin_strncpy(&cStack_f7 + lVar9,"nuation ",8);
    builtin_strncpy(acStack_ef + lVar9,"currentE",8);
    builtin_strncpy(acStack_e8 + lVar9,"Element ",8);
    auStack_e0[lVar9] = 0;
    puVar10 = &DAT_100fe2d00;
    FUN_1000f8b08(&DAT_100fe2d00,&DAT_100c76eb0);
    puVar11 = &DAT_100fe3398;
    local_80 = puVar10;
    FUN_1000f8b08(&DAT_100fe3398,&DAT_100c772a0);
    uVar7 = 0xff;
    local_78 = puVar11;
    _swift_getAssociatedTypeWitness
              (0xff,local_a0,local_90,
               PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
               PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
    local_a8 = param_2;
    Swift::Optional::typeMetadataAccessor();
    FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
    Swift::Result::typeMetadataAccessor();
    local_70 = (undefined *)Swift::UnsafeContinuation::typeMetadataAccessor();
    uVar8 = 0xff;
    _swift_getAssociatedTypeWitness
              (0xff,uVar18,uVar16,
               PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
               PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
    uVar16 = 0xff;
    _swift_getTupleTypeMetadata2(0xff,uVar7,uVar8,"element deadline ",0);
    lVar9 = 0;
    uStack_68 = uVar16;
    _swift_getTupleTypeMetadata(0,0x10004,&local_80,auStack_d0[1],0);
    iVar4 = *(int *)(lVar9 + 0x50);
    (**(code **)(lVar19 + 8))();
    _swift_storeEnumTagMultiPayload();
    uVar13 = local_b8 | 0x8000000000000000;
    _swift_errorRetain(local_a8);
    param_2 = local_a8;
    lVar9 = 0;
    _swift_getTupleTypeMetadata2(0,uVar7,uVar8,"element deadline ",0);
    uVar15 = local_b0;
    (**(code **)(*(long *)(lVar9 + -8) + 8))((long)puVar14 + (long)iVar4,lVar9);
    uVar17 = 0;
    local_b0 = uVar15;
  }
  else {
    if (iVar4 == 4) {
      (**(code **)(lVar19 + 8))(puVar14,lVar5);
    }
    param_2 = 0;
    uVar12 = 0;
    uVar17 = 0;
    uVar13 = 0xf000000000000007;
    local_b0 = 0xf000000000000007;
  }
  *param_1 = local_b0;
  param_1[1] = param_2;
  param_1[2] = uVar13;
  param_1[3] = uVar12;
  param_1[4] = uVar17;
  return;
}



/* Address: 0x10077d85c | FUN_10077d85c */

void FUN_10077d85c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  Optional OVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined7 extraout_var;
  undefined8 *puVar6;
  CancellationError CVar7;
  CancellationError CVar8;
  UnsafeContinuation UVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined7 extraout_var_00;
  ulong uVar12;
  code *pcVar13;
  undefined8 *unaff_x20;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  undefined8 *puVar21;
  undefined8 uStack_140;
  char acStack_133 [5];
  char acStack_12e [8];
  char acStack_126 [8];
  char acStack_11e [7];
  char cStack_117;
  undefined2 uStack_116;
  char acStack_114 [5];
  char acStack_10f [7];
  char acStack_108 [4];
  undefined1 auStack_104 [4];
  undefined8 auStack_100 [2];
  long alStack_f0 [4];
  undefined *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 *local_a8;
  undefined *local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *local_80;
  undefined *puStack_78;
  undefined *local_70;
  long local_68;
  
  uVar15 = *(undefined8 *)(param_3 + 0x28);
  uStack_98 = *(undefined8 *)(param_3 + 0x18);
  local_d0 = *(undefined **)(param_3 + 0x10);
  uStack_88 = *(undefined8 *)(param_3 + 0x28);
  local_c8 = *(undefined8 *)(param_3 + 0x20);
  uVar19 = *(undefined8 *)(param_3 + 0x18);
  lVar3 = 0xff;
  local_b0 = param_2;
  local_a8 = param_1;
  local_a0 = local_d0;
  uStack_90 = local_c8;
  _swift_getAssociatedTypeWitness();
  lVar4 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar15,uVar19,
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  lVar5 = 0;
  alStack_f0[2] = lVar3;
  alStack_f0[3] = lVar4;
  _swift_getTupleTypeMetadata2(0,lVar3,lVar4,"element deadline ",0);
  lVar14 = *(long *)(lVar5 + -8);
  uVar12 = *(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0;
  alStack_f0[1] = (long)alStack_f0 - uVar12;
  lVar18 = alStack_f0[1] - uVar12;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lVar3 = CONCAT71(extraout_var,OVar1.value);
  lVar17 = *(long *)(lVar3 + -8);
  lVar20 = lVar18 - (*(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_80 = local_a0;
  local_70 = (undefined *)uStack_90;
  lVar4 = 0;
  local_c0 = uVar19;
  local_b8 = uVar15;
  puStack_78 = (undefined *)uVar19;
  local_68 = uVar15;
  FUN_100778e10(0,&local_80);
  lVar16 = *(long *)(lVar4 + -8);
  puVar21 = (undefined8 *)(lVar20 - (*(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0));
  (**(code **)(lVar16 + 0x10))(puVar21);
  puVar6 = puVar21;
  _swift_getEnumCaseMultiPayload(puVar21,lVar4);
  iVar2 = (int)puVar6;
  if (iVar2 < 3) {
    if (iVar2 == 1) {
      if (puVar21[2] != 0) {
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x10077de98);
        (*pcVar13)();
      }
      uVar15 = *puVar21;
      local_b8 = puVar21[1];
      *(undefined1 *)((long)puVar21 + -0x4c) = 0x20;
      *(undefined4 *)(puVar21 + -10) = 0x6b736174;
      builtin_strncpy((char *)((long)puVar21 + -0x43),"Continua",8);
      builtin_strncpy((char *)((long)puVar21 + -0x4b),"upstream",8);
      builtin_strncpy((char *)((long)puVar21 + -0x3e),"nuation ",8);
      *(undefined2 *)((long)puVar21 + -0x26) = 0x206e;
      builtin_strncpy((char *)((long)puVar21 + -0x2e),"tinuatio",8);
      builtin_strncpy((char *)((long)puVar21 + -0x36),"clockCon",8);
      builtin_strncpy((char *)((long)puVar21 + -0x1c),"Element ",8);
      builtin_strncpy((char *)((long)puVar21 + -0x24),"buffered",8);
      *(undefined1 *)((long)puVar21 + -0x14) = 0;
      puVar10 = &DAT_100fe2d00;
      FUN_1000f8b08(&DAT_100fe2d00,&DAT_100c76eb0);
      puVar11 = &DAT_100fe3398;
      local_80 = puVar10;
      FUN_1000f8b08(&DAT_100fe3398,&DAT_100c772a0);
      puStack_78 = puVar11;
      FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
      Swift::UnsafeContinuation::typeMetadataAccessor();
      OVar1 = Swift::Optional::typeMetadataAccessor();
      local_70 = (undefined *)CONCAT71(extraout_var_00,OVar1.value);
      lVar4 = 0;
      local_68 = lVar3;
      _swift_getTupleTypeMetadata(0,0x10004,&local_80,puVar21 + -10,0);
      pcVar13 = *(code **)(lVar17 + 0x20);
      (*pcVar13)(lVar20,(long)puVar21 + (long)*(int *)(lVar4 + 0x50),lVar3);
      (**(code **)(lVar16 + 8))();
      iVar2 = *(int *)(lVar4 + 0x50);
      *unaff_x20 = uVar15;
      unaff_x20[1] = local_b8;
      unaff_x20[2] = local_b0;
      (*pcVar13)((long)unaff_x20 + (long)iVar2,lVar20,lVar3);
      _swift_storeEnumTagMultiPayload();
      puStack_78 = (undefined *)uStack_98;
      local_80 = local_a0;
      local_68 = uStack_88;
      local_70 = (undefined *)uStack_90;
    }
    else {
      if (iVar2 != 2) {
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x10077de94);
        (*pcVar13)();
      }
      if (puVar21[1] != 0) {
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x10077de9c);
        (*pcVar13)();
      }
      uVar15 = puVar21[2];
      uVar19 = *puVar21;
      (**(code **)(lVar16 + 8))();
      *unaff_x20 = uVar19;
      unaff_x20[1] = local_b0;
      unaff_x20[2] = uVar15;
      _swift_storeEnumTagMultiPayload();
      local_80 = local_d0;
      puStack_78 = (undefined *)local_c0;
      local_70 = (undefined *)local_c8;
      local_68 = local_b8;
    }
    lVar3 = 0;
    FUN_10077e9f0(0,&local_80);
    pcVar13 = *(code **)(*(long *)(lVar3 + -8) + 0x38);
    uVar15 = 1;
    puVar6 = local_a8;
  }
  else {
    if (iVar2 == 3) {
      _swift_release(*puVar21);
      *(undefined1 *)((long)puVar21 + -0x4c) = 0x20;
      *(undefined4 *)(puVar21 + -10) = 0x6b736174;
      builtin_strncpy((char *)((long)puVar21 + -0x43),"Continua",8);
      builtin_strncpy((char *)((long)puVar21 + -0x4b),"upstream",8);
      builtin_strncpy((char *)((long)puVar21 + -0x3e),"nuation ",8);
      builtin_strncpy((char *)((long)puVar21 + -0x2e),"amContin",8);
      builtin_strncpy((char *)((long)puVar21 + -0x36),"downstre",8);
      builtin_strncpy((char *)((long)puVar21 + -0x27),"nuation ",8);
      builtin_strncpy((char *)((long)puVar21 + -0x1f),"currentE",8);
      builtin_strncpy((char *)(puVar21 + -3),"Element ",8);
      *(undefined1 *)(puVar21 + -2) = 0;
      puVar10 = &DAT_100fe2d00;
      FUN_1000f8b08(&DAT_100fe2d00,&DAT_100c76eb0);
      puVar11 = &DAT_100fe3398;
      local_80 = puVar10;
      FUN_1000f8b08(&DAT_100fe3398,&DAT_100c772a0);
      lVar4 = alStack_f0[2];
      puStack_78 = puVar11;
      Swift::Optional::typeMetadataAccessor();
      FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
      Swift::Result::typeMetadataAccessor();
      local_70 = (undefined *)Swift::UnsafeContinuation::typeMetadataAccessor();
      lVar3 = 0;
      local_68 = lVar5;
      _swift_getTupleTypeMetadata(0,0x10004,&local_80,puVar21 + -10,0);
      pcVar13 = *(code **)(lVar14 + 0x20);
      (*pcVar13)(lVar18,(long)puVar21 + (long)*(int *)(lVar3 + 0x50),lVar5);
      FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
      lVar14 = alStack_f0[3];
      UVar9 = Swift::UnsafeContinuation::typeMetadataAccessor();
      lVar16 = 0;
      _swift_getTupleTypeMetadata2(0,UVar9.unknown,lVar14,"clockContinuation deadline ",0);
      puVar6 = local_a8;
      lVar3 = alStack_f0[1];
      iVar2 = *(int *)(lVar16 + 0x30);
      *local_a8 = local_b0;
      (*pcVar13)(alStack_f0[1],lVar18,lVar5);
      (**(code **)(*(long *)(lVar14 + -8) + 0x20))
                ((long)puVar6 + (long)iVar2,lVar3 + *(int *)(lVar5 + 0x30),lVar14);
      local_80 = local_d0;
      puStack_78 = (undefined *)local_c0;
      local_70 = (undefined *)local_c8;
      local_68 = local_b8;
      lVar5 = 0;
      FUN_10077e9f0(0,&local_80);
      _swift_storeEnumTagMultiPayload(puVar6,lVar5,0);
      (**(code **)(*(long *)(lVar5 + -8) + 0x38))(puVar6,0,1,lVar5);
      (**(code **)(*(long *)(lVar4 + -8) + 8))(lVar3,lVar4);
      return;
    }
    if (iVar2 == 4) {
      (**(code **)(lVar16 + 8))(puVar21,lVar4);
    }
    CVar7 = Swift::CancellationError::typeMetadataAccessor();
    CVar8 = CVar7;
    FUN_10076915c();
    _swift_allocError(CVar7.unknown,CVar8.unknown,0,0);
    Swift::CancellationError::init();
    puVar6 = local_a8;
    *local_a8 = local_b0;
    local_a8[1] = CVar7.unknown;
    local_80 = local_d0;
    puStack_78 = (undefined *)local_c0;
    local_70 = (undefined *)local_c8;
    local_68 = local_b8;
    lVar3 = 0;
    FUN_10077e9f0(0,&local_80);
    _swift_storeEnumTagMultiPayload(puVar6,lVar3,1);
    pcVar13 = *(code **)(*(long *)(lVar3 + -8) + 0x38);
    uVar15 = 0;
  }
  (*pcVar13)(puVar6,uVar15,1,lVar3);
  return;
}



/* Address: 0x10077de9c | FUN_10077de9c */

void FUN_10077de9c(undefined8 *param_1,long param_2)

{
  int iVar1;
  code *pcVar2;
  Optional OVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined7 extraout_var;
  long lVar13;
  undefined7 extraout_var_00;
  undefined7 extraout_var_01;
  UnsafeContinuation UVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  undefined8 *unaff_x20;
  code *pcVar20;
  long lVar21;
  undefined8 uVar22;
  long lVar23;
  long lVar24;
  undefined *puVar25;
  long lVar26;
  undefined8 uStack_160;
  char acStack_153 [5];
  char acStack_14e [8];
  char acStack_146 [8];
  char acStack_13e [7];
  char acStack_137 [8];
  char acStack_12f [7];
  char acStack_128 [8];
  undefined8 auStack_120 [2];
  long alStack_110 [5];
  undefined8 *local_e8;
  code *local_e0;
  undefined8 local_d8;
  long local_d0;
  long local_c8;
  undefined *local_88;
  undefined *local_80;
  undefined *local_78;
  long local_70;
  
  lVar21 = *(long *)(param_2 + 0x28);
  uVar22 = *(undefined8 *)(param_2 + 0x18);
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,lVar21,uVar22,PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  lVar23 = *(long *)(lVar6 + -8);
  lVar24 = (long)alStack_110 - (*(long *)(lVar23 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar18 = *(undefined8 *)(param_2 + 0x20);
  puVar25 = *(undefined **)(param_2 + 0x10);
  lVar7 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar18,puVar25,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar8 = 0;
  _swift_getTupleTypeMetadata2(0,lVar7,lVar6,"element deadline ",0);
  lVar15 = *(long *)(lVar8 + -8);
  uVar16 = *(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_d0 = lVar24 - uVar16;
  lVar17 = local_d0 - uVar16;
  lVar9 = 0;
  local_c8 = lVar17;
  local_88 = puVar25;
  local_80 = (undefined *)uVar22;
  local_78 = (undefined *)uVar18;
  local_70 = lVar21;
  FUN_100778e10(0,&local_88);
  lVar26 = *(long *)(lVar9 + -8);
  puVar19 = (undefined8 *)(lVar17 - (*(long *)(lVar26 + 0x40) + 0xfU & 0xfffffffffffffff0));
  (**(code **)(lVar26 + 0x10))(puVar19);
  puVar10 = puVar19;
  _swift_getEnumCaseMultiPayload(puVar19,lVar9);
  iVar5 = (int)puVar10;
  if (2 < iVar5) {
    if (iVar5 == 3) {
      local_e0 = (code *)puVar19;
      alStack_110[2] = puVar19[1];
      local_d8 = *puVar19;
      alStack_110[3] = puVar19[2];
      local_e8 = puVar19 + -10;
      *(undefined1 *)((long)puVar19 + -0x4c) = 0x20;
      *(undefined4 *)(puVar19 + -10) = 0x6b736174;
      builtin_strncpy((char *)((long)puVar19 + -0x43),"Continua",8);
      builtin_strncpy((char *)((long)puVar19 + -0x4b),"upstream",8);
      builtin_strncpy((char *)((long)puVar19 + -0x3e),"nuation ",8);
      builtin_strncpy((char *)((long)puVar19 + -0x2e),"amContin",8);
      builtin_strncpy((char *)((long)puVar19 + -0x36),"downstre",8);
      builtin_strncpy((char *)((long)puVar19 + -0x27),"nuation ",8);
      builtin_strncpy((char *)((long)puVar19 + -0x1f),"currentE",8);
      builtin_strncpy((char *)(puVar19 + -3),"Element ",8);
      *(undefined1 *)(puVar19 + -2) = 0;
      puVar11 = &DAT_100fe2d00;
      FUN_1000f8b08(&DAT_100fe2d00,&DAT_100c76eb0);
      puVar12 = &DAT_100fe3398;
      local_88 = puVar11;
      FUN_1000f8b08(&DAT_100fe3398,&DAT_100c772a0);
      local_80 = puVar12;
      OVar3 = Swift::Optional::typeMetadataAccessor();
      FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
      alStack_110[1] = CONCAT71(extraout_var,OVar3.value);
      Swift::Result::typeMetadataAccessor();
      local_78 = (undefined *)Swift::UnsafeContinuation::typeMetadataAccessor();
      lVar13 = 0;
      alStack_110[4] = lVar23;
      local_70 = lVar8;
      _swift_getTupleTypeMetadata(0,0x10004,&local_88,local_e8,0);
      lVar17 = local_c8;
      pcVar2 = local_e0;
      local_e0 = *(code **)(lVar15 + 0x20);
      (*local_e0)(local_c8,(long)puVar19 + (long)*(int *)(lVar13 + 0x50),lVar8);
      iVar5 = *(int *)(lVar8 + 0x30);
      Swift::Clock::_get_now();
      lVar23 = lVar21;
      _swift_getAssociatedConformanceWitness
                (lVar21,uVar22,lVar6,
                 PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
                 PTR___associated_conformance_descriptor_for_Swift_Clock_Swift_Clock_Instant__Swift_InstantProtocol_100eaeff0
                );
      bVar4 = Swift::Comparable::<__infix(lVar17 + iVar5,lVar24,lVar6,*(undefined8 *)(lVar23 + 8));
      pcVar20 = *(code **)(alStack_110[4] + 8);
      (*pcVar20)(lVar24,lVar6);
      if (bVar4) {
        (**(code **)(lVar26 + 8))(unaff_x20,lVar9);
        *(undefined1 *)((long)pcVar2 + -0x4c) = 0x20;
        *(undefined4 *)((long)pcVar2 + -0x50) = 0x6b736174;
        builtin_strncpy((char *)((long)pcVar2 + -0x43),"Continua",8);
        builtin_strncpy((char *)((long)pcVar2 + -0x4b),"upstream",8);
        builtin_strncpy((char *)((long)pcVar2 + -0x3e),"nuation ",8);
        *(undefined2 *)((long)pcVar2 + -0x26) = 0x206e;
        builtin_strncpy((char *)((long)pcVar2 + -0x2e),"tinuatio",8);
        builtin_strncpy((char *)((long)pcVar2 + -0x36),"clockCon",8);
        builtin_strncpy((char *)((long)pcVar2 + -0x1c),"Element ",8);
        builtin_strncpy((char *)((long)pcVar2 + -0x24),"buffered",8);
        *(undefined1 *)((long)pcVar2 + -0x14) = 0;
        puVar11 = &DAT_100fe2d00;
        FUN_1000f8b08(&DAT_100fe2d00,&DAT_100c76eb0);
        puVar12 = &DAT_100fe3398;
        local_88 = puVar11;
        FUN_1000f8b08(&DAT_100fe3398,&DAT_100c772a0);
        local_80 = puVar12;
        FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
        Swift::UnsafeContinuation::typeMetadataAccessor();
        OVar3 = Swift::Optional::typeMetadataAccessor();
        local_78 = (undefined *)CONCAT71(extraout_var_00,OVar3.value);
        OVar3 = Swift::Optional::typeMetadataAccessor();
        local_70 = CONCAT71(extraout_var_01,OVar3.value);
        lVar23 = 0;
        _swift_getTupleTypeMetadata(0,0x10004,&local_88,(undefined8 *)((long)pcVar2 + -0x50),0);
        iVar5 = *(int *)(lVar23 + 0x50);
        *unaff_x20 = local_d8;
        unaff_x20[1] = alStack_110[2];
        unaff_x20[2] = 0;
        (**(code **)(lVar15 + 0x38))((long)unaff_x20 + (long)iVar5,1,1,lVar8);
        _swift_storeEnumTagMultiPayload(unaff_x20,lVar9,1);
        FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
        Swift::Result::typeMetadataAccessor();
        UVar14 = Swift::UnsafeContinuation::typeMetadataAccessor();
        lVar15 = 0;
        _swift_getTupleTypeMetadata2(0,UVar14.unknown,lVar7,"downstreamContinuation element ",0);
        lVar9 = local_d0;
        iVar5 = *(int *)(lVar15 + 0x30);
        *param_1 = alStack_110[3];
        (*local_e0)(local_d0,lVar17,lVar8);
        iVar1 = *(int *)(lVar8 + 0x30);
        (**(code **)(*(long *)(lVar7 + -8) + 0x20))((long)param_1 + (long)iVar5,lVar9,lVar7);
        lVar7 = 0;
        local_88 = puVar25;
        local_80 = (undefined *)uVar22;
        local_78 = (undefined *)uVar18;
        local_70 = lVar21;
        FUN_10077e9e4(0,&local_88);
        (**(code **)(*(long *)(lVar7 + -8) + 0x38))(param_1,0,1,lVar7);
        (*pcVar20)(lVar9 + iVar1,lVar6);
        return;
      }
      (**(code **)(lVar15 + 8))(lVar17,lVar8);
      _swift_release(local_d8);
    }
    else if (iVar5 == 4) {
      (**(code **)(lVar26 + 8))(puVar19,lVar9);
    }
    lVar6 = 0;
    local_88 = puVar25;
    local_80 = (undefined *)uVar22;
    local_78 = (undefined *)uVar18;
    local_70 = lVar21;
    FUN_10077e9e4(0,&local_88);
    (**(code **)(*(long *)(lVar6 + -8) + 0x38))(param_1,1,1,lVar6);
    return;
  }
  if (iVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10077e438);
    (*pcVar2)();
  }
  if (iVar5 != 1) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10077e43c);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10077e020);
  (*pcVar2)();
}



/* Address: 0x10077e4a8 | FUN_10077e4a8 */

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_10077e4a8(long param_1)

{
  char *pcVar1;
  Optional OVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined7 extraout_var_01;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined4 uStack_110;
  char acStack_10c [9];
  char acStack_103 [5];
  char acStack_fe [8];
  char acStack_f6 [8];
  char acStack_ee [7];
  char cStack_e7;
  undefined2 uStack_e6;
  char acStack_e4 [5];
  char acStack_df [7];
  char acStack_d8 [4];
  undefined1 auStack_d4 [4];
  undefined1 auStack_d0 [16];
  undefined8 auStack_c0 [6];
  undefined *local_90;
  undefined8 uStack_88;
  undefined *local_80;
  undefined *local_78;
  undefined *local_70;
  undefined8 uStack_68;
  
  uVar12 = *(undefined8 *)(param_1 + 0x18);
  uStack_88 = *(undefined8 *)(param_1 + 0x18);
  local_90 = *(undefined **)(param_1 + 0x10);
  auStack_c0[5] = *(undefined8 *)(param_1 + 0x28);
  auStack_c0[4] = *(undefined8 *)(param_1 + 0x20);
  uVar13 = *(undefined8 *)(param_1 + 0x28);
  lVar4 = 0;
  local_80 = local_90;
  local_78 = (undefined *)uStack_88;
  local_70 = (undefined *)auStack_c0[4];
  uStack_68 = auStack_c0[5];
  FUN_100778e10(0,&local_80);
  lVar14 = *(long *)(lVar4 + -8);
  lVar10 = -(*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar11 = (undefined8 *)((long)auStack_c0 + lVar10);
  (**(code **)(lVar14 + 0x10))(puVar11);
  puVar5 = puVar11;
  _swift_getEnumCaseMultiPayload(puVar11,lVar4);
  iVar3 = (int)puVar5;
  if (iVar3 < 3) {
    if (iVar3 == 0) {
      (**(code **)(lVar14 + 8))();
      _swift_storeEnumTagMultiPayload();
      (**(code **)(*(long *)(local_90 + -8) + 8))(puVar11);
    }
    else {
      if (iVar3 != 1) {
        uVar12 = *(undefined8 *)((long)auStack_c0 + lVar10 + 0x10);
        (**(code **)(lVar14 + 8))();
        _swift_storeEnumTagMultiPayload();
        return uVar12;
      }
      _swift_release(*puVar11);
      acStack_10c[lVar10] = ' ';
      *(undefined4 *)((long)&uStack_110 + lVar10) = 0x6b736174;
      pcVar1 = acStack_10c + lVar10 + 1;
      builtin_strncpy(acStack_103 + lVar10,"Continua",8);
      pcVar1[0] = 'u';
      pcVar1[1] = 'p';
      pcVar1[2] = 's';
      pcVar1[3] = 't';
      pcVar1[4] = 'r';
      pcVar1[5] = 'e';
      pcVar1[6] = 'a';
      pcVar1[7] = 'm';
      builtin_strncpy(acStack_fe + lVar10,"nuation ",8);
      *(undefined2 *)(acStack_e4 + lVar10 + 0xfffffffffffffffe) = 0x206e;
      builtin_strncpy(acStack_ee + lVar10,"tinuatio",8);
      builtin_strncpy(acStack_f6 + lVar10,"clockCon",8);
      pcVar1 = acStack_e4 + lVar10;
      builtin_strncpy(acStack_df + lVar10 + 3,"Element ",8);
      pcVar1[0] = 'b';
      pcVar1[1] = 'u';
      pcVar1[2] = 'f';
      pcVar1[3] = 'f';
      pcVar1[4] = 'e';
      pcVar1[5] = 'r';
      pcVar1[6] = 'e';
      pcVar1[7] = 'd';
      auStack_d4[lVar10] = 0;
      puVar7 = &DAT_100fe2d00;
      FUN_1000f8b08(&DAT_100fe2d00,&DAT_100c76eb0);
      puVar8 = &DAT_100fe3398;
      local_80 = puVar7;
      FUN_1000f8b08(&DAT_100fe3398,&DAT_100c772a0);
      uVar6 = 0xff;
      local_78 = puVar8;
      _swift_getAssociatedTypeWitness
                (0xff,uVar13,uVar12,
                 PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
                 PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
      FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
      Swift::UnsafeContinuation::typeMetadataAccessor();
      OVar2 = Swift::Optional::typeMetadataAccessor();
      local_70 = (undefined *)CONCAT71(extraout_var,OVar2.value);
      uVar12 = 0xff;
      _swift_getAssociatedTypeWitness
                (0xff,auStack_c0[4],local_90,
                 PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
                 PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
      _swift_getTupleTypeMetadata2(0xff,uVar12,uVar6,"element deadline ",0);
      OVar2 = Swift::Optional::typeMetadataAccessor();
      uStack_68 = CONCAT71(extraout_var_00,OVar2.value);
      lVar4 = 0;
      _swift_getTupleTypeMetadata(0,0x10004,&local_80,(long)&uStack_110 + lVar10,0);
      iVar3 = *(int *)(lVar4 + 0x50);
      (**(code **)(lVar14 + 8))();
      _swift_storeEnumTagMultiPayload();
      _swift_getTupleTypeMetadata2(0xff,uVar12,uVar6,"element deadline ",0);
      OVar2 = Swift::Optional::typeMetadataAccessor();
      (**(code **)(*(long *)(CONCAT71(extraout_var_01,OVar2.value) + -8) + 8))
                ((long)puVar11 + (long)iVar3,CONCAT71(extraout_var_01,OVar2.value));
    }
  }
  else {
    if (iVar3 == 3) {
      auStack_c0[2] = *(undefined8 *)((long)auStack_c0 + lVar10 + 8);
      auStack_c0[3] = *puVar11;
      auStack_c0[1] = *(undefined8 *)((long)auStack_c0 + lVar10 + 0x10);
      acStack_10c[lVar10] = ' ';
      *(undefined4 *)((long)&uStack_110 + lVar10) = 0x6b736174;
      pcVar1 = acStack_10c + lVar10 + 1;
      builtin_strncpy(acStack_103 + lVar10,"Continua",8);
      pcVar1[0] = 'u';
      pcVar1[1] = 'p';
      pcVar1[2] = 's';
      pcVar1[3] = 't';
      pcVar1[4] = 'r';
      pcVar1[5] = 'e';
      pcVar1[6] = 'a';
      pcVar1[7] = 'm';
      builtin_strncpy(acStack_fe + lVar10,"nuation ",8);
      builtin_strncpy(acStack_ee + lVar10,"amContin",8);
      builtin_strncpy(acStack_f6 + lVar10,"downstre",8);
      builtin_strncpy(&cStack_e7 + lVar10,"nuation ",8);
      builtin_strncpy(acStack_df + lVar10,"currentE",8);
      builtin_strncpy(acStack_d8 + lVar10,"Element ",8);
      auStack_d0[lVar10] = 0;
      puVar7 = &DAT_100fe2d00;
      FUN_1000f8b08(&DAT_100fe2d00,&DAT_100c76eb0);
      puVar8 = &DAT_100fe3398;
      local_80 = puVar7;
      FUN_1000f8b08(&DAT_100fe3398,&DAT_100c772a0);
      uVar6 = 0xff;
      local_78 = puVar8;
      _swift_getAssociatedTypeWitness
                (0xff,auStack_c0[4],local_90,
                 PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
                 PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
      Swift::Optional::typeMetadataAccessor();
      FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
      Swift::Result::typeMetadataAccessor();
      local_70 = (undefined *)Swift::UnsafeContinuation::typeMetadataAccessor();
      uVar9 = 0xff;
      _swift_getAssociatedTypeWitness
                (0xff,uVar13,uVar12,
                 PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
                 PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
      uVar12 = 0xff;
      _swift_getTupleTypeMetadata2(0xff,uVar6,uVar9,"element deadline ",0);
      lVar4 = 0;
      uStack_68 = uVar12;
      _swift_getTupleTypeMetadata(0,0x10004,&local_80,(long)&uStack_110 + lVar10,0);
      iVar3 = *(int *)(lVar4 + 0x50);
      (**(code **)(lVar14 + 8))();
      _swift_storeEnumTagMultiPayload();
      lVar10 = 0;
      _swift_getTupleTypeMetadata2(0,uVar6,uVar9,"element deadline ",0);
      (**(code **)(*(long *)(lVar10 + -8) + 8))((long)puVar11 + (long)iVar3,lVar10);
      return auStack_c0[1];
    }
    if (iVar3 == 4) {
      (**(code **)(lVar14 + 8))(puVar11,lVar4);
    }
    else {
      (**(code **)(lVar14 + 8))();
      _swift_storeEnumTagMultiPayload();
    }
  }
  return 0;
}



/* Address: 0x10077e9e4 | FUN_10077e9e4 */

void FUN_10077e9e4(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetEnumDescriptor_100cbf4b8);
  return;
}



/* Address: 0x10077e9f0 | FUN_10077e9f0 */

void FUN_10077e9f0(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetEnumDescriptor_100cbf470);
  return;
}



/* Address: 0x10077e9fc | FUN_10077e9fc */

void FUN_10077e9fc(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetEnumDescriptor_100cbf428);
  return;
}



/* Address: 0x10077ea08 | FUN_10077ea08 */

void FUN_10077ea08(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetEnumDescriptor_100cbf3e0);
  return;
}



/* Address: 0x10077ea14 | FUN_10077ea14 */

void FUN_10077ea14(undefined8 *param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  Optional OVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined7 extraout_var;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined7 extraout_var_00;
  long lVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *unaff_x20;
  long lVar15;
  long lVar16;
  undefined *puVar17;
  long lVar18;
  code *pcVar19;
  undefined8 *puVar20;
  undefined8 uStack_170;
  char acStack_163 [5];
  char acStack_15e [8];
  char acStack_156 [8];
  char acStack_14e [7];
  char cStack_147;
  undefined2 uStack_146;
  char acStack_144 [5];
  char acStack_13f [7];
  char acStack_138 [4];
  undefined1 auStack_134 [4];
  undefined8 auStack_130 [2];
  code *apcStack_120 [4];
  long local_100;
  long local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  undefined8 local_d0;
  undefined8 *local_c8;
  long local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined *puStack_a8;
  undefined8 *local_a0;
  long lStack_98;
  undefined *local_90;
  undefined *puStack_88;
  undefined8 *local_80;
  long local_78;
  
  lVar15 = *(long *)(param_3 + 0x28);
  puStack_a8 = *(undefined **)(param_3 + 0x18);
  local_b8 = *(undefined **)(param_3 + 0x10);
  lStack_98 = *(long *)(param_3 + 0x28);
  local_c8 = *(undefined8 **)(param_3 + 0x20);
  puVar17 = *(undefined **)(param_3 + 0x18);
  lVar4 = 0xff;
  local_d0 = param_2;
  local_b0 = local_b8;
  local_a0 = local_c8;
  _swift_getAssociatedTypeWitness();
  lVar5 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,lVar15,puVar17,
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  lVar6 = 0;
  local_f0 = lVar4;
  local_d8 = lVar5;
  _swift_getTupleTypeMetadata2(0,lVar4,lVar5,"element deadline ",0);
  local_e8 = *(long *)(lVar6 + -8);
  uVar13 = *(long *)(local_e8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_f8 = (long)apcStack_120 - uVar13;
  lVar14 = local_f8 - uVar13;
  local_100 = lVar14;
  local_e0 = lVar6;
  OVar2 = Swift::Optional::typeMetadataAccessor();
  lVar6 = CONCAT71(extraout_var,OVar2.value);
  lVar16 = *(long *)(lVar6 + -8);
  uVar13 = *(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar14 = lVar14 - uVar13;
  lVar18 = lVar14 - uVar13;
  local_90 = local_b0;
  local_80 = local_a0;
  lVar5 = 0;
  local_c0 = lVar15;
  puStack_88 = puVar17;
  local_78 = lVar15;
  FUN_100778e10(0,&local_90);
  lVar4 = *(long *)(lVar5 + -8);
  puVar20 = (undefined8 *)(lVar18 - (*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0));
  (**(code **)(lVar4 + 0x10))(puVar20);
  puVar7 = puVar20;
  _swift_getEnumCaseMultiPayload(puVar20,lVar5);
  iVar3 = (int)puVar7;
  if (iVar3 < 3) {
    if (iVar3 == 0) {
      (**(code **)(*(long *)(local_b8 + -8) + 0x20))(param_1,puVar20);
      puStack_88 = puStack_a8;
      local_90 = local_b0;
      local_78 = lStack_98;
      local_80 = local_a0;
      uVar10 = 0;
      FUN_10077f21c(0,&local_90);
      uVar12 = 0;
    }
    else {
      local_a0 = param_1;
      if (iVar3 != 1) {
LAB_10077f208:
        local_e0 = lVar5;
        local_e8 = lVar4;
        (**(code **)(local_e8 + 8))(puVar20,local_e0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10077f21c);
        (*pcVar1)();
      }
      apcStack_120[1] = (code *)puVar20;
      apcStack_120[2] = (code *)*puVar20;
      local_b0 = (undefined *)puVar20[1];
      apcStack_120[3] = (code *)puVar20[2];
      *(undefined1 *)((long)puVar20 + -0x4c) = 0x20;
      *(undefined4 *)(puVar20 + -10) = 0x6b736174;
      builtin_strncpy((char *)((long)puVar20 + -0x43),"Continua",8);
      builtin_strncpy((char *)((long)puVar20 + -0x4b),"upstream",8);
      builtin_strncpy((char *)((long)puVar20 + -0x3e),"nuation ",8);
      *(undefined2 *)((long)puVar20 + -0x26) = 0x206e;
      builtin_strncpy((char *)((long)puVar20 + -0x2e),"tinuatio",8);
      builtin_strncpy((char *)((long)puVar20 + -0x36),"clockCon",8);
      builtin_strncpy((char *)((long)puVar20 + -0x1c),"Element ",8);
      builtin_strncpy((char *)((long)puVar20 + -0x24),"buffered",8);
      *(undefined1 *)((long)puVar20 + -0x14) = 0;
      puVar11 = &DAT_100fe2d00;
      FUN_1000f8b08(&DAT_100fe2d00,&DAT_100c76eb0);
      puVar8 = &DAT_100fe3398;
      local_90 = puVar11;
      FUN_1000f8b08(&DAT_100fe3398,&DAT_100c772a0);
      puStack_88 = puVar8;
      FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
      Swift::UnsafeContinuation::typeMetadataAccessor();
      OVar2 = Swift::Optional::typeMetadataAccessor();
      local_80 = (undefined8 *)CONCAT71(extraout_var_00,OVar2.value);
      lVar5 = 0;
      local_78 = lVar6;
      _swift_getTupleTypeMetadata(0,0x10004,&local_90,puVar20 + -10,0);
      pcVar1 = apcStack_120[1];
      pcVar19 = *(code **)(lVar16 + 0x20);
      (*pcVar19)(lVar18,(long)puVar20 + (long)*(int *)(lVar5 + 0x50),lVar6);
      (*pcVar19)(lVar14,lVar18,lVar6);
      lVar18 = local_e0;
      lVar15 = local_e8;
      lVar9 = lVar14;
      (**(code **)(local_e8 + 0x30))(lVar14,1,local_e0);
      lVar5 = local_100;
      if ((int)lVar9 != 1) {
        apcStack_120[1] = *(code **)(lVar15 + 0x20);
        (*apcStack_120[1])(local_100,lVar14,lVar18);
        (**(code **)(lVar4 + 8))();
        *(undefined1 *)((long)pcVar1 + -0x4c) = 0x20;
        *(undefined4 *)((long)pcVar1 + -0x50) = 0x6b736174;
        builtin_strncpy((char *)((long)pcVar1 + -0x43),"Continua",8);
        builtin_strncpy((char *)((long)pcVar1 + -0x4b),"upstream",8);
        builtin_strncpy((char *)((long)pcVar1 + -0x3e),"nuation ",8);
        builtin_strncpy((char *)((long)pcVar1 + -0x2e),"amContin",8);
        builtin_strncpy((char *)((long)pcVar1 + -0x36),"downstre",8);
        builtin_strncpy((char *)((long)pcVar1 + -0x27),"nuation ",8);
        builtin_strncpy((char *)((long)pcVar1 + -0x1f),"currentE",8);
        builtin_strncpy((char *)((long)pcVar1 + -0x18),"Element ",8);
        *(undefined1 *)((long)pcVar1 + -0x10) = 0;
        puVar11 = &DAT_100fe2d00;
        FUN_1000f8b08(&DAT_100fe2d00,&DAT_100c76eb0);
        puVar8 = &DAT_100fe3398;
        local_90 = puVar11;
        FUN_1000f8b08(&DAT_100fe3398,&DAT_100c772a0);
        lVar6 = local_f0;
        puStack_88 = puVar8;
        Swift::Optional::typeMetadataAccessor();
        FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
        Swift::Result::typeMetadataAccessor();
        local_80 = (undefined8 *)Swift::UnsafeContinuation::typeMetadataAccessor();
        local_78 = lVar18;
        lVar4 = 0;
        _swift_getTupleTypeMetadata(0,0x10004,&local_90,(undefined8 *)((long)pcVar1 + -0x50),0);
        iVar3 = *(int *)(lVar4 + 0x50);
        *unaff_x20 = apcStack_120[2];
        unaff_x20[1] = 0;
        unaff_x20[2] = local_d0;
        (**(code **)(lVar15 + 0x10))((long)unaff_x20 + (long)iVar3,lVar5,lVar18);
        _swift_storeEnumTagMultiPayload();
        puVar11 = &DAT_100fe3398;
        FUN_1000f8b08(&DAT_100fe3398,&DAT_100c772a0);
        FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
        lVar14 = local_d8;
        Swift::UnsafeContinuation::typeMetadataAccessor();
        OVar2 = Swift::Optional::typeMetadataAccessor();
        lVar15 = 0;
        _swift_getTupleTypeMetadata3
                  (0,puVar11,OVar2.value,lVar14,"upstreamContinuation clockContinuation deadline ",0
                  );
        puVar20 = local_a0;
        lVar4 = local_f8;
        iVar3 = *(int *)(lVar15 + 0x40);
        *local_a0 = local_b0;
        local_a0[1] = apcStack_120[3];
        (*apcStack_120[1])(local_f8,lVar5,lVar18);
        (**(code **)(*(long *)(lVar14 + -8) + 0x20))
                  ((long)puVar20 + (long)iVar3,lVar4 + *(int *)(lVar18 + 0x30),lVar14);
        local_90 = local_b8;
        local_80 = local_c8;
        local_78 = local_c0;
        uVar10 = 0;
        puStack_88 = puVar17;
        FUN_10077f21c(0,&local_90);
        _swift_storeEnumTagMultiPayload(puVar20,uVar10,2);
        (**(code **)(*(long *)(lVar6 + -8) + 8))(lVar4,lVar6);
        return;
      }
      (**(code **)(lVar16 + 8))(lVar14,lVar6);
      (**(code **)(lVar4 + 8))();
      *unaff_x20 = apcStack_120[2];
      unaff_x20[1] = apcStack_120[3];
      unaff_x20[2] = local_d0;
      _swift_storeEnumTagMultiPayload();
      param_1 = local_a0;
      *local_a0 = local_b0;
      local_90 = local_b8;
      local_80 = local_c8;
      local_78 = local_c0;
      uVar10 = 0;
      puStack_88 = puVar17;
      FUN_10077f21c(0,&local_90);
      uVar12 = 1;
    }
  }
  else if (iVar3 == 4) {
    uVar10 = *puVar20;
    (**(code **)(lVar4 + 8))();
    _swift_storeEnumTagMultiPayload();
    *param_1 = local_d0;
    param_1[1] = uVar10;
    local_90 = local_b8;
    local_80 = local_c8;
    local_78 = local_c0;
    uVar10 = 0;
    puStack_88 = puVar17;
    FUN_10077f21c(0,&local_90);
    uVar12 = 4;
  }
  else {
    if (iVar3 != 5) {
      _swift_release(*puVar20);
      *(undefined1 *)((long)puVar20 + -0x4c) = 0x20;
      *(undefined4 *)(puVar20 + -10) = 0x6b736174;
      builtin_strncpy((char *)((long)puVar20 + -0x43),"Continua",8);
      builtin_strncpy((char *)((long)puVar20 + -0x4b),"upstream",8);
      builtin_strncpy((char *)((long)puVar20 + -0x3e),"nuation ",8);
      builtin_strncpy((char *)((long)puVar20 + -0x2e),"amContin",8);
      builtin_strncpy((char *)((long)puVar20 + -0x36),"downstre",8);
      builtin_strncpy((char *)((long)puVar20 + -0x27),"nuation ",8);
      builtin_strncpy((char *)((long)puVar20 + -0x1f),"currentE",8);
      builtin_strncpy((char *)(puVar20 + -3),"Element ",8);
      *(undefined1 *)(puVar20 + -2) = 0;
      puVar17 = &DAT_100fe2d00;
      FUN_1000f8b08(&DAT_100fe2d00,&DAT_100c76eb0);
      puVar11 = &DAT_100fe3398;
      local_90 = puVar17;
      FUN_1000f8b08(&DAT_100fe3398,&DAT_100c772a0);
      puStack_88 = puVar11;
      Swift::Optional::typeMetadataAccessor();
      FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
      Swift::Result::typeMetadataAccessor();
      local_80 = (undefined8 *)Swift::UnsafeContinuation::typeMetadataAccessor();
      local_78 = local_e0;
      lVar4 = 0;
      _swift_getTupleTypeMetadata(0,0x10004,&local_90,puVar20 + -10,0);
      puVar20 = (undefined8 *)((long)puVar20 + (long)*(int *)(lVar4 + 0x50));
      lVar4 = local_e8;
      lVar5 = local_e0;
      goto LAB_10077f208;
    }
    *param_1 = local_d0;
    local_90 = local_b8;
    local_80 = local_c8;
    local_78 = local_c0;
    uVar10 = 0;
    puStack_88 = puVar17;
    FUN_10077f21c(0,&local_90);
    uVar12 = 3;
  }
  _swift_storeEnumTagMultiPayload(param_1,uVar10,uVar12);
  return;
}



/* Address: 0x10077f21c | FUN_10077f21c */

void FUN_10077f21c(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetEnumDescriptor_100cbf548);
  return;
}



/* Address: 0x10077f228 | FUN_10077f228 */

void FUN_10077f228(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetEnumDescriptor_100cbf398);
  return;
}



/* Address: 0x10077f234 | FUN_10077f234 */

void FUN_10077f234(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *local_80;
  long local_78;
  undefined *puStack_70;
  undefined *local_68;
  undefined *puStack_60;
  undefined1 auStack_58 [32];
  undefined *local_38;
  undefined *puStack_30;
  undefined1 *local_28;
  
  local_38 = &DAT_100c76f08;
  puStack_30 = &DAT_100c76f20;
  local_80 = &DAT_100c76e70;
  uVar2 = *(ulong *)(param_1 + 0x20);
  lVar1 = 0x13f;
  _swift_getAssociatedTypeWitness
            (0x13f,uVar2,*(undefined8 *)(param_1 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  if (uVar2 < 0x40) {
    local_78 = *(long *)(lVar1 + -8) + 0x40;
    puStack_70 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
    local_68 = &DAT_100c76e40;
    puStack_60 = &DAT_100c76e40;
    _swift_getTupleTypeLayout(auStack_58,0,5,&local_80);
    local_28 = auStack_58;
    _swift_initEnumMetadataMultiPayload(param_1,0,3,&local_38);
  }
  return;
}


