/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100790acc | FUN_100790acc */

void FUN_100790acc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  UnownedSerialExecutor UVar1;
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined8 **)(unaff_x22 + 0x30) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x38) = param_4;
  *(long *)(unaff_x22 + 0x20) = param_2;
  *(undefined8 *)(unaff_x22 + 0x28) = param_3;
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  *(undefined8 *)(unaff_x22 + 0x40) = *unaff_x20;
  if (param_2 == 0) {
    UVar1.unknown = (undefined *)0x0;
    param_3 = 0;
  }
  else {
    _swift_getObjectType(param_2);
    UVar1 = Swift::Actor::get_unownedExecutor();
  }
  *(undefined **)(unaff_x22 + 0x48) = UVar1.unknown;
  *(undefined8 *)(unaff_x22 + 0x50) = param_3;
  _swift_task_switch(FUN_100790b4c,UVar1.unknown);
  return;
}



/* Address: 0x100790b4c | FUN_100790b4c */

void FUN_100790b4c(void)

{
  Optional OVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0x40);
  plVar2 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x58) = plVar2;
  uVar3 = *(undefined8 *)(lVar5 + 0x68);
  *(undefined8 *)(unaff_x22 + 0x60) = uVar3;
  uVar4 = *(undefined8 *)(lVar5 + 0x58);
  *(undefined8 *)(unaff_x22 + 0x68) = uVar4;
  _swift_getAssociatedTypeWitness
            (0xff,uVar3,uVar4,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  OVar1 = Swift::Optional::typeMetadataAccessor();
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100790c0c;
  FUN_1007aae80(*(undefined8 *)(unaff_x22 + 0x18),&UNK_100c773f0,*(undefined8 *)(unaff_x22 + 0x30),
                FUN_1007918f4,*(undefined8 *)(unaff_x22 + 0x30),*(undefined8 *)(unaff_x22 + 0x20),
                *(undefined8 *)(unaff_x22 + 0x28),OVar1.value);
  return;
}



/* Address: 0x100790c0c | FUN_100790c0c */

void FUN_100790c0c(void)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  *(long *)(lVar1 + 0x70) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x58));
  if (unaff_x20 != 0) {
    _swift_task_switch(FUN_100790c74,*(undefined8 *)(lVar1 + 0x48),*(undefined8 *)(lVar1 + 0x50));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100790c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Address: 0x100790c74 | FUN_100790c74 */

void FUN_100790c74(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x38);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar2;
  _swift_errorRetain(uVar2);
  puVar4 = &DAT_100fdfb40;
  FUN_1000f7830(&DAT_100fdfb40,&DAT_100c74390);
  puVar3 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar8,uVar1,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Failure_100eaeae0);
  _swift_dynamicCast(uVar7,(undefined8 *)(unaff_x22 + 0x10),puVar4,uVar5,7);
  uVar6 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar8,uVar1,puVar3,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  _swift_getAssociatedConformanceWitness
            (uVar8,uVar1,uVar6,puVar3,
             PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
            );
  _swift_getAssociatedConformanceWitness();
  FUN_1005c64f0(uVar7,uVar5,uVar8);
  _swift_errorRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000100790da0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100790da4 | FUN_100790da4 */

void FUN_100790da4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  long lVar2;
  long *unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar2 = *unaff_x20;
  uVar3 = *(undefined8 *)(lVar2 + 0x58);
  uStack_88 = *(undefined8 *)(lVar2 + 0x58);
  local_90 = *(undefined8 *)(lVar2 + 0x50);
  uStack_98 = *(undefined8 *)(lVar2 + 0x68);
  local_a0 = *(undefined8 *)(lVar2 + 0x60);
  uVar4 = *(undefined8 *)(lVar2 + 0x68);
  lVar2 = 0;
  local_80 = local_90;
  uStack_78 = uStack_88;
  uStack_70 = local_a0;
  uStack_68 = uStack_98;
  FUN_10078a6b4(0,&local_80);
  lVar6 = *(long *)(lVar2 + -8);
  lVar5 = (long)&local_a0 - (*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar1 = (undefined4 *)0x4;
  _swift_slowAlloc(4,0xffffffffffffffff);
  *puVar1 = 0;
  unaff_x20[2] = (long)puVar1;
  FUN_10078b3ec(lVar5,param_1,param_2,param_3,local_90,uVar3,local_a0,uVar4);
  (**(code **)(lVar6 + 0x20))((long)unaff_x20 + *(long *)(*unaff_x20 + 0x78),lVar5,lVar2);
  return;
}



/* Address: 0x100790e94 | FUN_100790e94 */

void FUN_100790e94(void)

{
  long lVar1;
  long *unaff_x20;
  long lVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = *unaff_x20;
  _swift_slowDealloc(unaff_x20[2],0xffffffffffffffff,0xffffffffffffffff);
  lVar2 = *(long *)(*unaff_x20 + 0x78);
  uStack_48 = *(undefined8 *)(lVar1 + 0x58);
  local_50 = *(undefined8 *)(lVar1 + 0x50);
  uStack_38 = *(undefined8 *)(lVar1 + 0x68);
  uStack_40 = *(undefined8 *)(lVar1 + 0x60);
  lVar1 = 0;
  FUN_10078a6b4(0,&local_50);
  (**(code **)(*(long *)(lVar1 + -8) + 8))((long)unaff_x20 + lVar2,lVar1);
  return;
}



/* Address: 0x100790f04 | FUN_100790f04 */

void FUN_100790f04(void)

{
  FUN_100790e94();
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100790f28 | FUN_100790f28 */

void FUN_100790f28(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetClassDescriptor_100cbfabc);
  return;
}



/* Address: 0x100790f34 | FUN_100790f34 */

void FUN_100790f34(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x68) = param_1;
  *(long **)(unaff_x22 + 0x70) = param_2;
  lVar8 = *param_2;
  lVar7 = *(long *)(lVar8 + 0x50);
  *(long *)(unaff_x22 + 0x78) = lVar7;
  lVar3 = *(long *)(lVar7 + -8);
  *(long *)(unaff_x22 + 0x80) = lVar3;
  uVar1 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x88) = uVar1;
  uVar4 = *(undefined8 *)(lVar8 + 0x58);
  *(undefined8 *)(unaff_x22 + 0x90) = uVar4;
  uVar5 = *(undefined8 *)(lVar8 + 0x60);
  *(undefined8 *)(unaff_x22 + 0x98) = uVar5;
  uVar6 = *(undefined8 *)(lVar8 + 0x68);
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar6;
  *(long *)(unaff_x22 + 0x10) = lVar7;
  *(undefined8 *)(unaff_x22 + 0x18) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar6;
  lVar3 = 0;
  FUN_10078d884();
  *(long *)(unaff_x22 + 0xa8) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0xb0) = lVar3;
  uVar1 = *(long *)(lVar3 + 0x40) + 0xf;
  uVar2 = uVar1 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xb8) = uVar2;
  uVar1 = uVar1 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xc0) = uVar1;
  _swift_task_switch(FUN_100790ff8,0,0);
  return;
}



/* Address: 0x100790ff8 | FUN_100790ff8 */

void FUN_100790ff8(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  code *UNRECOVERED_JUMPTABLE;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xa8);
  lVar1 = *(long *)(unaff_x22 + 0xb0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xa0);
  plVar4 = *(long **)(unaff_x22 + 0x70);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x78);
  lVar6 = plVar4[2];
  uVar13 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x90);
  _os_unfair_lock_lock(lVar6);
  _swift_beginAccess((long)plVar4 + *(long *)(*plVar4 + 0x78),unaff_x22 + 0x50,0x21,0);
  *(undefined8 *)(unaff_x22 + 0x30) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar7;
  FUN_10078a6b4(0);
  FUN_10078b49c(uVar9);
  _swift_endAccess(unaff_x22 + 0x50);
  (**(code **)(lVar1 + 0x10))(uVar5,uVar9,uVar8);
  _swift_getEnumCaseMultiPayload(uVar5,uVar8);
  iVar2 = (int)uVar5;
  if (iVar2 < 2) {
    if (iVar2 != 0) {
      lVar1 = *(long *)(unaff_x22 + 0xb0);
      _os_unfair_lock_unlock(lVar6);
      _swift_willThrow();
      uVar5 = *(undefined8 *)(unaff_x22 + 0xb8);
      uVar8 = *(undefined8 *)(unaff_x22 + 0xc0);
      uVar9 = *(undefined8 *)(unaff_x22 + 0x88);
      (**(code **)(lVar1 + 8))(uVar8,*(undefined8 *)(unaff_x22 + 0xa8));
      _swift_task_dealloc(uVar8);
      _swift_task_dealloc(uVar5);
      _swift_task_dealloc(uVar9);
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
      goto LAB_1007912b4;
    }
    uVar5 = *(undefined8 *)(unaff_x22 + 0xb8);
    uVar9 = *(undefined8 *)(unaff_x22 + 0xc0);
    uVar8 = *(undefined8 *)(unaff_x22 + 0xa8);
    lVar1 = *(long *)(unaff_x22 + 0xb0);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x68);
    lVar3 = 0;
    _swift_getAssociatedTypeWitness
              (0,*(undefined8 *)(unaff_x22 + 0xa0),*(undefined8 *)(unaff_x22 + 0x90),
               PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
               PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
    lVar11 = *(long *)(lVar3 + -8);
    (**(code **)(lVar11 + 0x20))(uVar10,uVar5,lVar3);
    _os_unfair_lock_unlock(lVar6);
    (**(code **)(lVar1 + 8))(uVar9,uVar8);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar11 + 0x38);
    uVar5 = 0;
  }
  else {
    if (iVar2 == 2) {
      uVar5 = *(undefined8 *)(unaff_x22 + 0x88);
      (**(code **)(*(long *)(unaff_x22 + 0x80) + 0x20))
                (uVar5,*(undefined8 *)(unaff_x22 + 0xb8),*(undefined8 *)(unaff_x22 + 0x78));
      FUN_1007915c0(uVar5);
      plVar4 = (long *)&DAT_00000030;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 200) = plVar4;
      UNRECOVERED_JUMPTABLE = FUN_1007912d4;
LAB_10079123c:
      *plVar4 = unaff_x22;
      plVar4[1] = (long)UNRECOVERED_JUMPTABLE;
      FUN_100791780(plVar4,*(undefined8 *)(unaff_x22 + 0x68));
      return;
    }
    if (iVar2 != 3) {
      _os_unfair_lock_unlock(lVar6);
      plVar4 = (long *)&DAT_00000030;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0xd8) = plVar4;
      UNRECOVERED_JUMPTABLE = FUN_1007913b8;
      goto LAB_10079123c;
    }
    uVar8 = *(undefined8 *)(unaff_x22 + 0xc0);
    uVar5 = *(undefined8 *)(unaff_x22 + 0xa8);
    lVar1 = *(long *)(unaff_x22 + 0xb0);
    uVar9 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x90);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x68);
    _os_unfair_lock_unlock(lVar6);
    (**(code **)(lVar1 + 8))(uVar8,uVar5);
    lVar3 = 0;
    _swift_getAssociatedTypeWitness
              (0,uVar9,uVar7,
               PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
               PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar3 + -8) + 0x38);
    uVar5 = 1;
  }
  (*UNRECOVERED_JUMPTABLE)(uVar10,uVar5,1,lVar3);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x88);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xc0));
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar8);
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
LAB_1007912b4:
                    /* WARNING: Could not recover jumptable at 0x0001007912d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x1007912d4 | FUN_1007912d4 */

void FUN_1007912d4(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xd0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 200));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100791338;
  }
  else {
    pcVar1 = FUN_10079147c;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100791338 | FUN_100791338 */

void FUN_100791338(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa8);
  lVar2 = *(long *)(unaff_x22 + 0xb0);
  (**(code **)(*(long *)(unaff_x22 + 0x80) + 8))
            (*(undefined8 *)(unaff_x22 + 0x88),*(undefined8 *)(unaff_x22 + 0x78));
  (**(code **)(lVar2 + 8))(uVar3,uVar1);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x88);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xc0));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001007913b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1007913b8 | FUN_1007913b8 */

void FUN_1007913b8(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xe0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xd8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10079141c;
  }
  else {
    pcVar1 = FUN_1007914f8;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x10079141c | FUN_10079141c */

void FUN_10079141c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  (**(code **)(*(long *)(unaff_x22 + 0xb0) + 8))
            (*(undefined8 *)(unaff_x22 + 0xc0),*(undefined8 *)(unaff_x22 + 0xa8));
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x88);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xc0));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000100791478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10079147c | FUN_10079147c */

void FUN_10079147c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  undefined8 uVar3;
  
  (**(code **)(*(long *)(unaff_x22 + 0x80) + 8))
            (*(undefined8 *)(unaff_x22 + 0x88),*(undefined8 *)(unaff_x22 + 0x78));
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x88);
  (**(code **)(*(long *)(unaff_x22 + 0xb0) + 8))(uVar2,*(undefined8 *)(unaff_x22 + 0xa8));
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001007914f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1007914f8 | FUN_1007914f8 */

void FUN_1007914f8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x88);
  (**(code **)(*(long *)(unaff_x22 + 0xb0) + 8))(uVar2,*(undefined8 *)(unaff_x22 + 0xa8));
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000100791560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100791564 | FUN_100791564 */

void FUN_100791564(undefined8 param_1)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0xf0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005c804c;
  FUN_100790f34(plVar1,param_1);
  return;
}



/* Address: 0x1007915c0 | FUN_1007915c0 */

void FUN_1007915c0(undefined8 param_1)

{
  undefined *puVar1;
  TaskPriority TVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *unaff_x20;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  long local_a0;
  long local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  lVar10 = *unaff_x20;
  lVar6 = *(long *)(lVar10 + 0x50);
  lVar12 = *(long *)(lVar6 + -8);
  lVar13 = *(long *)(lVar12 + 0x40);
  lVar8 = (long)&local_a0 - (lVar13 + 0xfU & 0xfffffffffffffff0);
  puVar1 = &DAT_100fe0dc8;
  local_a0 = lVar8;
  FUN_1000f7830(&DAT_100fe0dc8,&DAT_100c75540);
  lVar7 = lVar8 - (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  TVar2 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar2.unknown + -8) + 0x38))(lVar7,1,1,TVar2.unknown);
  (**(code **)(lVar12 + 0x10))(lVar8,param_1,lVar6);
  uVar5 = (ulong)*(byte *)(lVar12 + 0x50);
  uVar15 = uVar5 + 0x40 & (uVar5 ^ 0xffffffffffffffff);
  uVar14 = lVar13 + uVar15 + 7 & 0xfffffffffffffff8;
  puVar1 = &DAT_100f00220;
  _swift_allocObject(&DAT_100f00220,uVar14 + 8,uVar5 | 7);
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(long *)(puVar1 + 0x20) = lVar6;
  uVar16 = *(undefined8 *)(lVar10 + 0x58);
  *(undefined8 *)(puVar1 + 0x28) = uVar16;
  uVar9 = *(undefined8 *)(lVar10 + 0x60);
  *(undefined8 *)(puVar1 + 0x30) = uVar9;
  uVar11 = *(undefined8 *)(lVar10 + 0x68);
  *(undefined8 *)(puVar1 + 0x38) = uVar11;
  (**(code **)(lVar12 + 0x20))(puVar1 + uVar15,local_a0,lVar6);
  *(long **)(puVar1 + uVar14) = unaff_x20;
  _swift_retain();
  uVar3 = 0;
  FUN_100731e58(0,0,lVar7,&DAT_100c77428,puVar1);
  _swift_beginAccess((long)unaff_x20 + *(long *)(*unaff_x20 + 0x78),auStack_78,0x21,0);
  uVar4 = 0;
  local_98 = lVar6;
  uStack_90 = uVar16;
  local_88 = uVar9;
  uStack_80 = uVar11;
  FUN_10078a6b4(0,&local_98);
  FUN_10078bbd8(uVar3,uVar4);
  _swift_endAccess(auStack_78);
  _os_unfair_lock_unlock(unaff_x20[2]);
  _swift_release(uVar3);
  return;
}



/* Address: 0x100791780 | FUN_100791780 */

void FUN_100791780(undefined8 param_1)

{
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 **)(unaff_x22 + 0x18) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x20) = *unaff_x20;
  _swift_task_switch(FUN_1007917a0,0,0);
  return;
}



/* Address: 0x1007917a0 | FUN_1007917a0 */

void FUN_1007917a0(void)

{
  Optional OVar1;
  long *plVar2;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x20);
  plVar2 = (long *)0x70;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x28) = plVar2;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(lVar3 + 0x68),*(undefined8 *)(lVar3 + 0x58),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  OVar1 = Swift::Optional::typeMetadataAccessor();
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1005fc418;
  FUN_100790978(*(undefined8 *)(unaff_x22 + 0x10),0,0,FUN_100793810,
                *(undefined8 *)(unaff_x22 + 0x18),OVar1.value);
  return;
}



/* Address: 0x100791850 | FUN_100791850 */

void FUN_100791850(long *param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 auStack_70 [16];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = *param_1;
  uStack_58 = *(undefined8 *)(lVar1 + 0x58);
  local_60 = *(undefined8 *)(lVar1 + 0x50);
  uStack_48 = *(undefined8 *)(lVar1 + 0x68);
  uStack_50 = *(undefined8 *)(lVar1 + 0x60);
  lVar1 = 0;
  FUN_10078c9c0(0,&local_60);
  lVar3 = *(long *)(lVar1 + -8);
  puVar2 = auStack_70 + -(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_10079f5b0(puVar2,FUN_1007918fc,param_1,param_1[2],lVar1);
  FUN_10079191c(puVar2);
  (**(code **)(lVar3 + 8))(puVar2,lVar1);
  return;
}



/* Address: 0x1007918f4 | FUN_1007918f4 */

void FUN_1007918f4(void)

{
  FUN_100791850();
  return;
}



/* Address: 0x1007918fc | FUN_1007918fc */

void FUN_1007918fc(void)

{
  FUN_10079268c();
  return;
}



/* Address: 0x10079191c | FUN_10079191c */

/* WARNING: Type propagation algorithm not settling */

void FUN_10079191c(undefined8 param_1)

{
  Optional OVar1;
  Result RVar2;
  int iVar3;
  undefined7 extraout_var;
  long *plVar5;
  CancellationError CVar6;
  Task TVar7;
  CancellationError CVar8;
  Task TVar9;
  UnsafeContinuation UVar10;
  undefined8 *puVar11;
  long lVar12;
  code *pcVar13;
  long lVar14;
  long *unaff_x20;
  undefined *puVar15;
  undefined1 *puVar16;
  undefined *puVar17;
  long *plVar18;
  undefined *puVar19;
  undefined8 uVar20;
  undefined1 *puVar21;
  long lVar22;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  char acStack_bf [8];
  char acStack_b7 [8];
  char acStack_af [5];
  char acStack_aa [8];
  undefined1 auStack_a2 [18];
  undefined *local_88;
  undefined *local_80 [4];
  undefined *puVar4;
  
  lVar22 = *unaff_x20;
  puVar17 = *(undefined **)(lVar22 + 0x68);
  puVar15 = *(undefined **)(lVar22 + 0x58);
  _swift_getAssociatedTypeWitness
            (0xff,puVar17,puVar15,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  OVar1 = Swift::Optional::typeMetadataAccessor();
  puVar19 = &DAT_100fdfb40;
  FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
  local_88 = puVar19;
  RVar2 = Swift::Result::typeMetadataAccessor();
  puVar4 = (undefined *)CONCAT71(extraout_var,RVar2.value);
  lVar14 = *(long *)(puVar4 + -8);
  puVar21 = &stack0xffffffffffffff70 + -(*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = *(long *)(puVar15 + -8);
  puVar16 = puVar21 + -(*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_80[0] = *(undefined **)(lVar22 + 0x50);
  local_80[2] = *(undefined **)(lVar22 + 0x60);
  lVar22 = 0;
  local_80[1] = puVar15;
  local_80[3] = puVar17;
  FUN_10078c9c0(0,local_80);
  plVar18 = (long *)(puVar16 +
                    -(*(long *)(*(long *)(lVar22 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  (**(code **)(*(long *)(lVar22 + -8) + 0x10))(plVar18,param_1,lVar22);
  plVar5 = plVar18;
  _swift_getEnumCaseMultiPayload(plVar18,lVar22);
  puVar17 = local_88;
  puVar19 = PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
  iVar3 = (int)plVar5;
  if (iVar3 < 3) {
    if (iVar3 == 0) {
      *(undefined1 *)(plVar18 + -8) = 0x20;
      *(undefined4 *)(plVar18 + -7) = 0x206e6f69;
      builtin_strncpy((char *)((long)plVar18 + -0x3f),"generati",8);
      builtin_strncpy((char *)((long)plVar18 + -0x34),"previous",8);
      builtin_strncpy((char *)((long)plVar18 + -0x2f),"ousTask ",8);
      builtin_strncpy((char *)((long)plVar18 + -0x1f),"Continua",8);
      builtin_strncpy((char *)((long)plVar18 + -0x27),"previous",8);
      builtin_strncpy((char *)((long)plVar18 + -0x1a),"nuation ",8);
      *(undefined1 *)((long)plVar18 + -0x12) = 0;
      local_80[1] = PTR___type_metadata_for_Swift_Int_100eac6f8;
      puVar19 = &DAT_100fe3aa0;
      local_80[0] = puVar15;
      FUN_1000f8b08(&DAT_100fe3aa0,&DAT_100c77400);
      puVar17 = &DAT_100fe3398;
      local_80[2] = puVar19;
      FUN_1000f8b08(&DAT_100fe3398,&DAT_100c772a0);
      lVar22 = 0;
      local_80[3] = puVar17;
      _swift_getTupleTypeMetadata(0,0x10004,local_80,plVar18 + -8,0);
      uVar20 = *(undefined8 *)((long)plVar18 + (long)*(int *)(lVar22 + 0x30));
      puVar19 = *(undefined **)((long)plVar18 + (long)*(int *)(lVar22 + 0x40));
      lVar22 = *(long *)((long)plVar18 + (long)*(int *)(lVar22 + 0x50));
      (**(code **)(lVar12 + 0x20))(puVar16,plVar18,puVar15);
      if (puVar19 != (undefined *)0x0) {
        TVar9.unknown = puVar19;
        _swift_retain();
        Swift::Task::cancel(TVar9);
        if (lVar22 != 0) {
          CVar6 = Swift::CancellationError::typeMetadataAccessor();
          CVar8 = CVar6;
          FUN_10076915c();
          _swift_allocError(CVar6.unknown,CVar8.unknown,0,0);
          Swift::CancellationError::init();
          puVar17 = local_88;
          puVar11 = (undefined8 *)
                    PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
          _swift_allocError(local_88,
                            PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90,
                            0,0);
          *puVar11 = CVar6.unknown;
          _swift_continuation_throwingResumeWithError(lVar22,puVar17);
        }
        _swift_release(puVar19);
      }
      FUN_1007927a4(puVar16,uVar20);
      _swift_release(puVar19);
      pcVar13 = *(code **)(lVar12 + 8);
    }
    else {
      if (iVar3 == 1) {
        TVar9.unknown = (undefined *)*plVar18;
        lVar22 = plVar18[1];
        Swift::Task::cancel(TVar9);
        if (lVar22 != 0) {
          CVar6 = Swift::CancellationError::typeMetadataAccessor();
          CVar8 = CVar6;
          FUN_10076915c();
          _swift_allocError(CVar6.unknown,CVar8.unknown,0,0);
          Swift::CancellationError::init();
          puVar19 = local_88;
          puVar11 = (undefined8 *)
                    PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
          _swift_allocError(local_88,
                            PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90,
                            0,0);
          *puVar11 = CVar6.unknown;
          _swift_continuation_throwingResumeWithError(lVar22,puVar19);
        }
        goto LAB_100791c30;
      }
      lVar12 = *plVar18;
      UVar10 = Swift::UnsafeContinuation::typeMetadataAccessor();
      lVar22 = 0;
      _swift_getTupleTypeMetadata2(0,UVar10.unknown,puVar4,0,0);
      (**(code **)(lVar14 + 0x20))(puVar21,(long)plVar18 + (long)*(int *)(lVar22 + 0x30),puVar4);
      FUN_100793380(puVar21,lVar12,OVar1.value,puVar17,puVar19);
      pcVar13 = *(code **)(lVar14 + 8);
      puVar16 = puVar21;
      puVar15 = puVar4;
    }
    (*pcVar13)(puVar16,puVar15);
  }
  else {
    if (iVar3 == 3) {
      _swift_continuation_throwingResume(*plVar18);
      return;
    }
    if (iVar3 != 4) {
      return;
    }
    puVar19 = (undefined *)*plVar18;
    TVar9.unknown = (undefined *)plVar18[1];
    lVar22 = plVar18[2];
    lVar12 = plVar18[3];
    if (puVar19 != (undefined *)0x0) {
      TVar7.unknown = puVar19;
      _swift_retain();
      Swift::Task::cancel(TVar7);
      _swift_release(puVar19);
    }
    if (TVar9.unknown != (undefined *)0x0) {
      TVar7.unknown = TVar9.unknown;
      _swift_retain();
      Swift::Task::cancel(TVar7);
      _swift_release(TVar9.unknown);
    }
    puVar17 = local_88;
    if (lVar22 != 0) {
      CVar6 = Swift::CancellationError::typeMetadataAccessor();
      CVar8 = CVar6;
      FUN_10076915c();
      _swift_allocError(CVar6.unknown,CVar8.unknown,0,0);
      Swift::CancellationError::init();
      puVar15 = puVar17;
      puVar11 = (undefined8 *)
                PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
      _swift_allocError(puVar17,
                        PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90,0,0)
      ;
      *puVar11 = CVar6.unknown;
      _swift_continuation_throwingResumeWithError(lVar22,puVar15);
    }
    if (lVar12 != 0) {
      CVar6 = Swift::CancellationError::typeMetadataAccessor();
      CVar8 = CVar6;
      FUN_10076915c();
      _swift_allocError(CVar6.unknown,CVar8.unknown,0,0);
      Swift::CancellationError::init();
      puVar11 = (undefined8 *)
                PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
      _swift_allocError(puVar17,
                        PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90,0,0)
      ;
      *puVar11 = CVar6.unknown;
      _swift_continuation_throwingResumeWithError(lVar12,puVar17);
    }
    _swift_release(puVar19);
LAB_100791c30:
    _swift_release(TVar9.unknown);
  }
  return;
}



/* Address: 0x100791e84 | FUN_100791e84 */

void FUN_100791e84(void)

{
  undefined *puVar1;
  Optional OVar2;
  ulong uVar3;
  undefined7 extraout_var;
  undefined8 in_x3;
  long *in_x4;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  
  *(undefined8 *)(unaff_x22 + 0xd0) = in_x3;
  *(long **)(unaff_x22 + 0xd8) = in_x4;
  lVar4 = *in_x4;
  lVar8 = *(long *)(lVar4 + 0x50);
  *(long *)(unaff_x22 + 0xe0) = lVar8;
  uVar7 = *(undefined8 *)(lVar4 + 0x60);
  uVar10 = *(undefined8 *)(lVar4 + 0x60);
  uVar9 = *(undefined8 *)(lVar4 + 0x58);
  *(undefined8 *)(unaff_x22 + 0xe8) = uVar7;
  uVar5 = *(undefined8 *)(lVar4 + 0x68);
  *(long *)(unaff_x22 + 0xb0) = lVar8;
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar10;
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar9;
  *(undefined8 *)(unaff_x22 + 200) = uVar5;
  lVar4 = 0;
  FUN_10078c9c0();
  *(long *)(unaff_x22 + 0xf0) = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0xf8) = lVar4;
  uVar3 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x100) = uVar3;
  puVar1 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  lVar4 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar7,lVar8,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  *(long *)(unaff_x22 + 0x108) = lVar4;
  OVar2 = Swift::Optional::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x110) = CONCAT71(extraout_var,OVar2.value);
  lVar6 = *(long *)(CONCAT71(extraout_var,OVar2.value) + -8);
  *(long *)(unaff_x22 + 0x118) = lVar6;
  uVar3 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x120) = uVar3;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0x128) = lVar4;
  uVar3 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x130) = uVar3;
  lVar4 = *(long *)(lVar8 + -8);
  *(long *)(unaff_x22 + 0x138) = lVar4;
  uVar3 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x140) = uVar3;
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar7,lVar8,puVar1,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  *(long *)(unaff_x22 + 0x148) = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0x150) = lVar4;
  uVar3 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x158) = uVar3;
  _swift_task_switch(FUN_100791fec,0,0);
  return;
}



/* Address: 0x100791fec | FUN_100791fec */

void FUN_100791fec(void)

{
  long unaff_x22;
  
  (**(code **)(*(long *)(unaff_x22 + 0x138) + 0x10))
            (*(undefined8 *)(unaff_x22 + 0x140),*(undefined8 *)(unaff_x22 + 0xd0),
             *(undefined8 *)(unaff_x22 + 0xe0));
  Swift::AsyncSequence::_makeAsyncIterator();
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_100792088;
  _swift_continuation_init(unaff_x22 + 0x10,1);
  FUN_100792568();
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}



/* Address: 0x100792088 | FUN_100792088 */

void FUN_100792088(void)

{
  long *plVar1;
  long *unaff_x22;
  long lVar2;
  long lVar3;
  
  lVar3 = *unaff_x22;
  lVar2 = *unaff_x22;
  if (*(long *)(lVar3 + 0x30) != 0) {
    *(long *)(lVar3 + 0x170) = *(long *)(lVar3 + 0x30);
    _swift_willThrow();
    _swift_task_switch(FUN_1007921c4,0,0);
    return;
  }
  _swift_getAssociatedConformanceWitness
            (*(undefined8 *)(lVar3 + 0xe8),*(undefined8 *)(lVar3 + 0xe0),
             *(undefined8 *)(lVar3 + 0x148),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
            );
  plVar1 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
  _swift_task_alloc();
  *(long **)(lVar3 + 0x160) = plVar1;
  *plVar1 = lVar2;
  plVar1[1] = (long)FUN_100792160;
  Swift::AsyncIteratorProtocol::_next();
  return;
}



/* Address: 0x100792160 | FUN_100792160 */

void FUN_100792160(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x168) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x160));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1007922b0;
  }
  else {
    pcVar1 = FUN_100792484;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1007921c4 | FUN_1007921c4 */

void FUN_1007921c4(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x170);
  lVar1 = *(long *)(unaff_x22 + 0xf8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar4 = *(undefined8 *)(*(long *)(unaff_x22 + 0xd8) + 0x10);
  *(long *)(unaff_x22 + 0x60) = *(long *)(unaff_x22 + 0xd8);
  *(undefined8 *)(unaff_x22 + 0x68) = uVar5;
  FUN_10079f5b0(uVar3,FUN_100793798,unaff_x22 + 0x50,uVar4,*(undefined8 *)(unaff_x22 + 0xf0));
  FUN_10079191c(uVar3);
  _swift_errorRelease(uVar5);
  lVar2 = *(long *)(unaff_x22 + 0x150);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x100);
  (**(code **)(lVar1 + 8))(uVar8,*(undefined8 *)(unaff_x22 + 0xf0));
  (**(code **)(lVar2 + 8))(uVar4,uVar5);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar8);
                    /* WARNING: Could not recover jumptable at 0x0001007922ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1007922b0 | FUN_1007922b0 */

void FUN_1007922b0(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x120);
  lVar7 = *(long *)(unaff_x22 + 0x128);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar5 = uVar2;
  (**(code **)(lVar7 + 0x30))(uVar2,1,uVar4);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x100);
  if ((int)uVar5 == 1) {
    uVar5 = *(undefined8 *)(unaff_x22 + 0xf0);
    lVar7 = *(long *)(unaff_x22 + 0xd8);
    (**(code **)(*(long *)(unaff_x22 + 0x118) + 8))(uVar2,*(undefined8 *)(unaff_x22 + 0x110));
    FUN_10079f5b0(uVar3,FUN_1007937b8,lVar7,*(undefined8 *)(lVar7 + 0x10),uVar5);
    FUN_10079191c(uVar3);
    lVar7 = *(long *)(unaff_x22 + 0x150);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x158);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x140);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x148);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x130);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x120);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x100);
    (**(code **)(*(long *)(unaff_x22 + 0xf8) + 8))(uVar4,*(undefined8 *)(unaff_x22 + 0xf0));
    (**(code **)(lVar7 + 8))(uVar5,uVar3);
    _swift_task_dealloc(uVar5);
    _swift_task_dealloc(uVar2);
    _swift_task_dealloc(uVar6);
    _swift_task_dealloc(uVar8);
    _swift_task_dealloc(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0001007923c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar6 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xf0);
  lVar1 = *(long *)(unaff_x22 + 0xf8);
  lVar9 = *(long *)(unaff_x22 + 0xd8);
  (**(code **)(lVar7 + 0x20))(uVar6,uVar2,uVar4);
  uVar2 = *(undefined8 *)(lVar9 + 0x10);
  *(long *)(unaff_x22 + 0xa0) = lVar9;
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar6;
  FUN_10079f5b0(uVar3,FUN_1007937d8,unaff_x22 + 0x90,uVar2,uVar5);
  FUN_10079191c(uVar3);
  (**(code **)(lVar1 + 8))(uVar3,uVar5);
  (**(code **)(lVar7 + 8))(uVar6,uVar4);
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_100792088;
  _swift_continuation_init(unaff_x22 + 0x10,1);
  FUN_100792568();
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}



/* Address: 0x100792484 | FUN_100792484 */

void FUN_100792484(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar3 = *(undefined8 *)(*(long *)(unaff_x22 + 0xd8) + 0x10);
  *(long *)(unaff_x22 + 0x80) = *(long *)(unaff_x22 + 0xd8);
  *(undefined8 *)(unaff_x22 + 0x88) = uVar4;
  FUN_10079f5b0(uVar5,FUN_100793864,unaff_x22 + 0x70,uVar3,*(undefined8 *)(unaff_x22 + 0xf0));
  FUN_10079191c(uVar5);
  _swift_errorRelease(uVar4);
  lVar1 = *(long *)(unaff_x22 + 0x150);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x100);
  (**(code **)(*(long *)(unaff_x22 + 0xf8) + 8))(uVar2,*(undefined8 *)(unaff_x22 + 0xf0));
  (**(code **)(lVar1 + 8))(uVar4,uVar5);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000100792564. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100792568 | FUN_100792568 */

void FUN_100792568(undefined8 param_1,long *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_50 [16];
  long *local_40;
  undefined8 uStack_38;
  
  lVar4 = *param_2;
  lVar5 = param_2[2];
  uStack_78 = *(undefined8 *)(lVar4 + 0x58);
  local_80 = *(ulong *)(lVar4 + 0x50);
  uStack_68 = *(undefined8 *)(lVar4 + 0x68);
  uStack_70 = *(undefined8 *)(lVar4 + 0x60);
  uVar1 = 0;
  local_40 = param_2;
  uStack_38 = param_1;
  FUN_10078e9a8(0,&local_80);
  FUN_10079f5b0(&local_80,param_3,auStack_50,lVar5,uVar1);
  uVar3 = (uint)(local_80 >> 0x3e);
  uVar2 = local_80;
  if (uVar3 != 0) {
    if (uVar3 != 1) {
      return;
    }
    uVar2 = local_80 & 0x3fffffffffffffff;
  }
  _swift_continuation_throwingResume(uVar2);
  return;
}



/* Address: 0x1007925ec | FUN_1007925ec */

void FUN_1007925ec(undefined8 *param_1,long *param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_68 [24];
  
  lVar2 = *param_2;
  _swift_beginAccess((long)param_2 + *(long *)(lVar2 + 0x78),auStack_68,0x21,0);
  uStack_88 = *(undefined8 *)(lVar2 + 0x58);
  local_90 = *(undefined8 *)(lVar2 + 0x50);
  uStack_78 = *(undefined8 *)(lVar2 + 0x68);
  uStack_80 = *(undefined8 *)(lVar2 + 0x60);
  uVar1 = 0;
  FUN_10078a6b4(0,&local_90);
  (*param_4)(param_3,uVar1);
  _swift_endAccess(auStack_68);
  *param_1 = param_3;
  return;
}



/* Address: 0x10079268c | FUN_10079268c */

void FUN_10079268c(undefined8 param_1,long *param_2,code *param_3)

{
  long lVar1;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [24];
  
  lVar1 = *param_2;
  _swift_beginAccess((long)param_2 + *(long *)(lVar1 + 0x78),auStack_58,0x21,0);
  uStack_78 = *(undefined8 *)(lVar1 + 0x58);
  local_80 = *(undefined8 *)(lVar1 + 0x50);
  uStack_68 = *(undefined8 *)(lVar1 + 0x68);
  uStack_70 = *(undefined8 *)(lVar1 + 0x60);
  FUN_10078a6b4(0,&local_80);
  (*param_3)(param_1);
  _swift_endAccess(auStack_58);
  return;
}



/* Address: 0x100792714 | FUN_100792714 */

void FUN_100792714(undefined8 param_1,long *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [24];
  
  lVar2 = *param_2;
  _swift_beginAccess((long)param_2 + *(long *)(lVar2 + 0x78),auStack_58,0x21,0);
  uStack_78 = *(undefined8 *)(lVar2 + 0x58);
  local_80 = *(undefined8 *)(lVar2 + 0x50);
  uStack_68 = *(undefined8 *)(lVar2 + 0x68);
  uStack_70 = *(undefined8 *)(lVar2 + 0x60);
  uVar1 = 0;
  FUN_10078a6b4(0,&local_80);
  FUN_10078bf60(param_1,param_3,uVar1);
  _swift_endAccess(auStack_58);
  return;
}



/* Address: 0x1007927a4 | FUN_1007927a4 */

void FUN_1007927a4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  TaskPriority TVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  long *unaff_x20;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  undefined1 auStack_b0 [8];
  undefined1 *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  long lStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  lVar12 = *unaff_x20;
  lVar8 = *(long *)(lVar12 + 0x58);
  lVar14 = *(long *)(lVar8 + -8);
  lVar15 = *(long *)(lVar14 + 0x40);
  puVar7 = auStack_b0 + -(lVar15 + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100fe0dc8;
  local_a8 = puVar7;
  local_a0 = param_2;
  FUN_1000f7830(&DAT_100fe0dc8,&DAT_100c75540);
  lVar10 = (long)puVar7 - (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  TVar3 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar3.unknown + -8) + 0x38))(lVar10,1,1,TVar3.unknown);
  (**(code **)(lVar14 + 0x10))(puVar7,param_1,lVar8);
  uVar6 = (ulong)*(byte *)(lVar14 + 0x50);
  uVar17 = uVar6 + 0x40 & (uVar6 ^ 0xffffffffffffffff);
  uVar16 = lVar15 + uVar17 + 7 & 0xfffffffffffffff8;
  puVar2 = &DAT_100f001f8;
  _swift_allocObject(&DAT_100f001f8,uVar16 + 0x10,uVar6 | 7);
  *(undefined8 *)(puVar2 + 0x10) = 0;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  uVar11 = *(undefined8 *)(lVar12 + 0x50);
  *(undefined8 *)(puVar2 + 0x20) = uVar11;
  *(long *)(puVar2 + 0x28) = lVar8;
  uVar9 = *(undefined8 *)(lVar12 + 0x60);
  *(undefined8 *)(puVar2 + 0x30) = uVar9;
  uVar13 = *(undefined8 *)(lVar12 + 0x68);
  *(undefined8 *)(puVar2 + 0x38) = uVar13;
  (**(code **)(lVar14 + 0x20))(puVar2 + uVar17,local_a8);
  uVar1 = local_a0;
  *(long **)(puVar2 + uVar16) = unaff_x20;
  *(undefined8 *)(puVar2 + uVar16 + 8) = local_a0;
  _swift_retain();
  uVar4 = 0;
  FUN_100731e58(0,0,lVar10,&DAT_100c77410,puVar2);
  _swift_beginAccess((long)unaff_x20 + *(long *)(*unaff_x20 + 0x78),auStack_78,0x21,0);
  uVar5 = 0;
  local_98 = uVar11;
  lStack_90 = lVar8;
  local_88 = uVar9;
  uStack_80 = uVar13;
  FUN_10078a6b4(0,&local_98);
  FUN_10078c224(uVar4,uVar1,uVar5);
  _swift_endAccess(auStack_78);
  _swift_release(uVar4);
  return;
}



/* Address: 0x10079296c | FUN_10079296c */

void FUN_10079296c(void)

{
  undefined *puVar1;
  Optional OVar2;
  ulong uVar3;
  undefined7 extraout_var;
  undefined8 in_x3;
  long *in_x4;
  undefined8 in_x5;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x22;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  *(undefined8 *)(unaff_x22 + 0xf8) = in_x5;
  *(long **)(unaff_x22 + 200) = in_x4;
  *(undefined8 *)(unaff_x22 + 0x98) = in_x3;
  lVar4 = *in_x4;
  lVar7 = *(long *)(lVar4 + 0x58);
  uVar9 = *(undefined8 *)(lVar4 + 0x58);
  uVar8 = *(undefined8 *)(lVar4 + 0x50);
  *(long *)(unaff_x22 + 0x120) = lVar7;
  uVar6 = *(undefined8 *)(lVar4 + 0x68);
  uVar11 = *(undefined8 *)(lVar4 + 0x68);
  uVar10 = *(undefined8 *)(lVar4 + 0x60);
  *(undefined8 *)(unaff_x22 + 0x128) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x80) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x78) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x90) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x88) = uVar10;
  lVar4 = 0;
  FUN_10078c9c0();
  *(long *)(unaff_x22 + 0x130) = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0x138) = lVar4;
  uVar3 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x140) = uVar3;
  puVar1 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  lVar4 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar6,lVar7,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  *(long *)(unaff_x22 + 0x148) = lVar4;
  OVar2 = Swift::Optional::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x150) = CONCAT71(extraout_var,OVar2.value);
  lVar5 = *(long *)(CONCAT71(extraout_var,OVar2.value) + -8);
  *(long *)(unaff_x22 + 0x158) = lVar5;
  uVar3 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x160) = uVar3;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0x168) = lVar4;
  uVar3 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x170) = uVar3;
  lVar4 = *(long *)(lVar7 + -8);
  *(long *)(unaff_x22 + 0x178) = lVar4;
  uVar3 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x180) = uVar3;
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar6,lVar7,puVar1,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  *(long *)(unaff_x22 + 0x188) = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 400) = lVar4;
  uVar3 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x198) = uVar3;
  _swift_task_switch(FUN_100792ad8,0,0);
  return;
}



/* Address: 0x100792ad8 | FUN_100792ad8 */

void FUN_100792ad8(void)

{
  long unaff_x22;
  
  (**(code **)(*(long *)(unaff_x22 + 0x178) + 0x10))
            (*(undefined8 *)(unaff_x22 + 0x180),*(undefined8 *)(unaff_x22 + 0x98),
             *(undefined8 *)(unaff_x22 + 0x120));
  Swift::AsyncSequence::_makeAsyncIterator();
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_100792b78;
  _swift_continuation_init(unaff_x22 + 0x10,1);
  FUN_100793078();
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}



/* Address: 0x100792b78 | FUN_100792b78 */

void FUN_100792b78(void)

{
  long *plVar1;
  long *unaff_x22;
  long lVar2;
  long lVar3;
  
  lVar3 = *unaff_x22;
  lVar2 = *unaff_x22;
  if (*(long *)(lVar3 + 0x30) != 0) {
    *(long *)(lVar3 + 0x1b0) = *(long *)(lVar3 + 0x30);
    _swift_willThrow();
    _swift_task_switch(FUN_100792cb4,0,0);
    return;
  }
  _swift_getAssociatedConformanceWitness
            (*(undefined8 *)(lVar3 + 0x128),*(undefined8 *)(lVar3 + 0x120),
             *(undefined8 *)(lVar3 + 0x188),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
            );
  plVar1 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
  _swift_task_alloc();
  *(long **)(lVar3 + 0x1a0) = plVar1;
  *plVar1 = lVar2;
  plVar1[1] = (long)FUN_100792c50;
  Swift::AsyncIteratorProtocol::_next();
  return;
}



/* Address: 0x100792c50 | FUN_100792c50 */

void FUN_100792c50(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x1a8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x1a0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100792da8;
  }
  else {
    pcVar1 = FUN_100792f8c;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100792cb4 | FUN_100792cb4 */

void FUN_100792cb4(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x1b0);
  lVar1 = *(long *)(unaff_x22 + 0x138);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar4 = *(undefined8 *)(*(long *)(unaff_x22 + 200) + 0x10);
  *(long *)(unaff_x22 + 0x60) = *(long *)(unaff_x22 + 200);
  *(undefined8 *)(unaff_x22 + 0x68) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(unaff_x22 + 0xf8);
  FUN_10079f5b0(uVar3,FUN_100793608,unaff_x22 + 0x50,uVar4,*(undefined8 *)(unaff_x22 + 0x130));
  FUN_10079191c(uVar3);
  _swift_errorRelease(uVar5);
  lVar2 = *(long *)(unaff_x22 + 400);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x188);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x140);
  (**(code **)(lVar1 + 8))(uVar8,*(undefined8 *)(unaff_x22 + 0x130));
  (**(code **)(lVar2 + 8))(uVar4,uVar5);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar8);
                    /* WARNING: Could not recover jumptable at 0x000100792da4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100792da8 | FUN_100792da8 */

void FUN_100792da8(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long unaff_x22;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x160);
  lVar5 = *(long *)(unaff_x22 + 0x168);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar4 = uVar2;
  (**(code **)(lVar5 + 0x30))(uVar2,1,uVar3);
  if ((int)uVar4 == 1) {
    uVar4 = *(undefined8 *)(unaff_x22 + 0x140);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x130);
    uVar9 = *(undefined8 *)(unaff_x22 + 0xf8);
    lVar5 = *(long *)(unaff_x22 + 200);
    (**(code **)(*(long *)(unaff_x22 + 0x158) + 8))(uVar2,*(undefined8 *)(unaff_x22 + 0x150));
    uVar2 = *(undefined8 *)(lVar5 + 0x10);
    *(long *)(unaff_x22 + 0x110) = lVar5;
    *(undefined8 *)(unaff_x22 + 0x118) = uVar9;
    FUN_10079f5b0(uVar4,FUN_100793624,unaff_x22 + 0x100,uVar2,uVar3);
    FUN_10079191c(uVar4);
    lVar5 = *(long *)(unaff_x22 + 400);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x198);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x180);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x188);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x170);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x160);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x140);
    (**(code **)(*(long *)(unaff_x22 + 0x138) + 8))(uVar9,*(undefined8 *)(unaff_x22 + 0x130));
    (**(code **)(lVar5 + 8))(uVar4,uVar3);
    _swift_task_dealloc(uVar4);
    _swift_task_dealloc(uVar2);
    _swift_task_dealloc(uVar7);
    _swift_task_dealloc(uVar8);
    _swift_task_dealloc(uVar9);
                    /* WARNING: Could not recover jumptable at 0x000100792ec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar9 = *(undefined8 *)(unaff_x22 + 0x170);
  lVar1 = *(long *)(unaff_x22 + 0x138);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xf8);
  lVar6 = *(long *)(unaff_x22 + 200);
  (**(code **)(lVar5 + 0x20))(uVar9,uVar2,uVar3);
  uVar2 = *(undefined8 *)(lVar6 + 0x10);
  *(long *)(unaff_x22 + 0xe0) = lVar6;
  *(undefined8 *)(unaff_x22 + 0xe8) = uVar9;
  *(undefined8 *)(unaff_x22 + 0xf0) = uVar8;
  FUN_10079f5b0(uVar4,FUN_100793644,unaff_x22 + 0xd0,uVar2,uVar7);
  FUN_10079191c(uVar4);
  (**(code **)(lVar1 + 8))(uVar4,uVar7);
  (**(code **)(lVar5 + 8))(uVar9,uVar3);
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_100792b78;
  _swift_continuation_init(unaff_x22 + 0x10,1);
  FUN_100793078();
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}



/* Address: 0x100792f8c | FUN_100792f8c */

void FUN_100792f8c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar3 = *(undefined8 *)(*(long *)(unaff_x22 + 200) + 0x10);
  *(long *)(unaff_x22 + 0xb0) = *(long *)(unaff_x22 + 200);
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar4;
  *(undefined8 *)(unaff_x22 + 0xc0) = *(undefined8 *)(unaff_x22 + 0xf8);
  FUN_10079f5b0(uVar5,FUN_100793850,unaff_x22 + 0xa0,uVar3,*(undefined8 *)(unaff_x22 + 0x130));
  FUN_10079191c(uVar5);
  _swift_errorRelease(uVar4);
  lVar1 = *(long *)(unaff_x22 + 400);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x188);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x140);
  (**(code **)(*(long *)(unaff_x22 + 0x138) + 8))(uVar2,*(undefined8 *)(unaff_x22 + 0x130));
  (**(code **)(lVar1 + 8))(uVar4,uVar5);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000100793074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100793078 | FUN_100793078 */

void FUN_100793078(undefined8 param_1,long *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_60 [16];
  long *local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  lVar4 = *param_2;
  lVar5 = param_2[2];
  uStack_88 = *(undefined8 *)(lVar4 + 0x58);
  local_90 = *(ulong *)(lVar4 + 0x50);
  uStack_78 = *(undefined8 *)(lVar4 + 0x68);
  uStack_80 = *(undefined8 *)(lVar4 + 0x60);
  uVar1 = 0;
  local_50 = param_2;
  uStack_48 = param_1;
  local_40 = param_3;
  FUN_10078e9a8(0,&local_90);
  FUN_10079f5b0(&local_90,FUN_100793660,auStack_60,lVar5,uVar1);
  uVar3 = (uint)(local_90 >> 0x3e);
  uVar2 = local_90;
  if (uVar3 != 0) {
    if (uVar3 != 1) {
      return;
    }
    uVar2 = local_90 & 0x3fffffffffffffff;
  }
  _swift_continuation_throwingResume(uVar2);
  return;
}



/* Address: 0x100793100 | FUN_100793100 */

void FUN_100793100(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_68 [24];
  
  lVar2 = *param_2;
  _swift_beginAccess((long)param_2 + *(long *)(lVar2 + 0x78),auStack_68,0x21,0);
  uStack_88 = *(undefined8 *)(lVar2 + 0x58);
  local_90 = *(undefined8 *)(lVar2 + 0x50);
  uStack_78 = *(undefined8 *)(lVar2 + 0x68);
  uStack_80 = *(undefined8 *)(lVar2 + 0x60);
  uVar1 = 0;
  FUN_10078a6b4(0,&local_90);
  FUN_10078c354(param_3,param_4,uVar1);
  _swift_endAccess(auStack_68);
  *param_1 = param_3;
  return;
}



/* Address: 0x1007931a4 | FUN_1007931a4 */

void FUN_1007931a4(undefined8 param_1,long *param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_68 [24];
  
  lVar2 = *param_2;
  _swift_beginAccess((long)param_2 + *(long *)(lVar2 + 0x78),auStack_68,0x21,0);
  uStack_88 = *(undefined8 *)(lVar2 + 0x58);
  local_90 = *(undefined8 *)(lVar2 + 0x50);
  uStack_78 = *(undefined8 *)(lVar2 + 0x68);
  uStack_80 = *(undefined8 *)(lVar2 + 0x60);
  uVar1 = 0;
  FUN_10078a6b4(0,&local_90);
  (*param_4)(param_1,param_3,uVar1);
  _swift_endAccess(auStack_68);
  return;
}



/* Address: 0x100793240 | FUN_100793240 */

void FUN_100793240(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_68 [24];
  
  lVar2 = *param_2;
  _swift_beginAccess((long)param_2 + *(long *)(lVar2 + 0x78),auStack_68,0x21,0);
  uStack_88 = *(undefined8 *)(lVar2 + 0x58);
  local_90 = *(undefined8 *)(lVar2 + 0x50);
  uStack_78 = *(undefined8 *)(lVar2 + 0x68);
  uStack_80 = *(undefined8 *)(lVar2 + 0x60);
  uVar1 = 0;
  FUN_10078a6b4(0,&local_90);
  FUN_10078c5d4(param_1,param_3,param_4,uVar1);
  _swift_endAccess(auStack_68);
  return;
}



/* Address: 0x1007932e0 | FUN_1007932e0 */

void FUN_1007932e0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_68 [24];
  
  lVar2 = *param_2;
  _swift_beginAccess((long)param_2 + *(long *)(lVar2 + 0x78),auStack_68,0x21,0);
  uStack_88 = *(undefined8 *)(lVar2 + 0x58);
  local_90 = *(undefined8 *)(lVar2 + 0x50);
  uStack_78 = *(undefined8 *)(lVar2 + 0x68);
  uStack_80 = *(undefined8 *)(lVar2 + 0x60);
  uVar1 = 0;
  FUN_10078a6b4(0,&local_90);
  FUN_10078cda8(param_1,param_3,param_4,uVar1);
  _swift_endAccess(auStack_68);
  return;
}



/* Address: 0x100793380 | FUN_100793380 */

void FUN_100793380(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5)

{
  Result RVar1;
  undefined7 extraout_var;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  long lVar2;
  
  lVar8 = *(long *)(param_3 + -8);
  puVar5 = auStack_70 + -(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = *(long *)(param_4 + -8);
  lVar6 = (long)puVar5 - (*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_68 = param_2;
  RVar1 = Swift::Result::typeMetadataAccessor();
  lVar2 = CONCAT71(extraout_var,RVar1.value);
  lVar7 = lVar6 - (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(lVar7,param_1,lVar2);
  lVar3 = lVar7;
  _swift_getEnumCaseMultiPayload(lVar7,lVar2);
  if ((int)lVar3 == 1) {
    (**(code **)(lVar4 + 0x20))(lVar6,lVar7,param_4);
    FUN_1005ec180(lVar6,local_68,param_3,param_4,param_5);
  }
  else {
    (**(code **)(lVar8 + 0x20))(puVar5,lVar7,param_3);
    FUN_1005ec10c(puVar5,local_68,param_3,param_4,param_5);
  }
  return;
}



/* Address: 0x1007934c4 | FUN_1007934c4 */

void FUN_1007934c4(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  ulong uVar4;
  
  lVar2 = *(long *)(unaff_x20 + 0x28);
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



/* Address: 0x10079354c | FUN_10079354c */

void FUN_10079354c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  
  lVar4 = *(long *)(*(long *)(unaff_x20 + 0x28) + -8);
  uVar5 = (ulong)*(byte *)(lVar4 + 0x50);
  uVar8 = uVar5 + 0x40 & (uVar5 ^ 0xffffffffffffffff);
  uVar5 = *(long *)(lVar4 + 0x40) + uVar8 + 7 & 0xfffffffffffffff8;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + uVar5);
  uVar7 = *(undefined8 *)(unaff_x20 + uVar5 + 8);
  plVar3 = (long *)0x1c0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1005c804c;
  FUN_10079296c(plVar3,param_1,uVar1,uVar2,unaff_x20 + uVar8,uVar6,uVar7);
  return;
}



/* Address: 0x100793608 | FUN_100793608 */

void FUN_100793608(void)

{
  long unaff_x20;
  
  FUN_1007932e0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x100793624 | FUN_100793624 */

void FUN_100793624(void)

{
  long unaff_x20;
  
  FUN_1007931a4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),FUN_10078c9cc);
  return;
}



/* Address: 0x100793644 | FUN_100793644 */

void FUN_100793644(void)

{
  long unaff_x20;
  
  FUN_100793240(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x100793660 | FUN_100793660 */

void FUN_100793660(void)

{
  long unaff_x20;
  
  FUN_100793100(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x10079367c | FUN_10079367c */

void FUN_10079367c(void)

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



/* Address: 0x1007936f4 | FUN_1007936f4 */

void FUN_1007936f4(undefined8 param_1)

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
  plVar2[1] = (long)thunk_FUN_1005c804c;
  FUN_100791e84(plVar2,param_1,uVar5,uVar1,unaff_x20 + uVar4,uVar6);
  return;
}



/* Address: 0x100793798 | FUN_100793798 */

void FUN_100793798(void)

{
  long unaff_x20;
  
  FUN_1007931a4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),FUN_10078d37c);
  return;
}



/* Address: 0x1007937b8 | FUN_1007937b8 */

void FUN_1007937b8(void)

{
  FUN_10079268c();
  return;
}



/* Address: 0x1007937d8 | FUN_1007937d8 */

void FUN_1007937d8(void)

{
  long unaff_x20;
  
  FUN_100792714(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1007937f0 | FUN_1007937f0 */

void FUN_1007937f0(void)

{
  long unaff_x20;
  
  FUN_1007925ec(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),FUN_10078bd78);
  return;
}



/* Address: 0x100793810 | FUN_100793810 */

void FUN_100793810(void)

{
  FUN_100792568();
  return;
}



/* Address: 0x100793830 | FUN_100793830 */

void FUN_100793830(void)

{
  long unaff_x20;
  
  FUN_1007925ec(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),FUN_10078b890);
  return;
}



/* Address: 0x100793850 | FUN_100793850 */

void FUN_100793850(void)

{
  FUN_100793608();
  return;
}


