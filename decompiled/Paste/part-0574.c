/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10065d620 | FUN_10065d620 */

void FUN_10065d620(int *param_1,uint param_2)

{
  if (2 < param_2) {
    *(undefined1 *)(param_1 + 0x10) = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    *param_1 = param_2 - 3;
    param_2 = 3;
  }
  *(char *)((long)param_1 + 0x41) = (char)param_2;
  return;
}



/* Address: 0x10065d64c | FUN_10065d64c */

undefined1  [16] FUN_10065d64c(void)

{
  return ZEXT816(0x100ef1ad8);
}



/* Address: 0x10065d65c | thunk_FUN_10065d660 */

void thunk_FUN_10065d660(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    _swift_retain(lVar1);
    FUN_10062b624(param_2);
    _swift_release(lVar1);
  }
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    _swift_retain(lVar1);
    FUN_10062aa18(2,0);
    _swift_release(lVar1);
    return;
  }
  return;
}



/* Address: 0x10065d660 | FUN_10065d660 */

void FUN_10065d660(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    _swift_retain(lVar1);
    FUN_10062b624(param_2);
    _swift_release(lVar1);
  }
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    _swift_retain(lVar1);
    FUN_10062aa18(2,0);
    _swift_release(lVar1);
    return;
  }
  return;
}



/* Address: 0x10065d6d8 | FUN_10065d6d8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10065d6d8(void)

{
  return ZEXT816(0x100fd8b68);
}



/* Address: 0x10065d6f8 | FUN_10065d6f8 */

void FUN_10065d6f8(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  long param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 local_90;
  undefined4 local_84;
  long local_80;
  long lStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar3 = *(long *)(param_6 + -8);
  lVar5 = (long)&local_90 - (*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = *(long *)(param_5 + -8);
  lVar6 = lVar5 - (*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_90 = param_3;
  local_84 = param_4;
  (**(code **)(lVar4 + 0x10))(lVar6);
  (**(code **)(lVar3 + 0x10))(lVar5,param_2,param_6);
  lVar2 = 0;
  local_80 = param_5;
  lStack_78 = param_6;
  local_70 = param_7;
  uStack_68 = param_8;
  FUN_10065d8d0(0,&local_80);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar2 + 0x38));
  (**(code **)(lVar4 + 0x20))(param_1,lVar6,param_5);
  (**(code **)(lVar3 + 0x20))(param_1 + *(int *)(lVar2 + 0x34),lVar5,param_6);
  *puVar1 = local_90;
  *(char *)(puVar1 + 1) = (char)local_84;
  return;
}



/* Address: 0x10065d818 | FUN_10065d818 */

void FUN_10065d818(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,long param_6,long param_7,undefined8 param_8,undefined8 param_9
                  )

{
  undefined8 *puVar1;
  long lVar2;
  long local_80;
  long lStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar2 = 0;
  local_80 = param_6;
  lStack_78 = param_7;
  local_70 = param_8;
  uStack_68 = param_9;
  FUN_10065d8d0(0,&local_80);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar2 + 0x38));
  (**(code **)(*(long *)(param_6 + -8) + 0x20))(param_1,param_2,param_6);
  (**(code **)(*(long *)(param_7 + -8) + 0x20))(param_1 + *(int *)(lVar2 + 0x34),param_3,param_7);
  *puVar1 = param_4;
  *(undefined1 *)(puVar1 + 1) = param_5;
  return;
}



/* Address: 0x10065d8d0 | FUN_10065d8d0 */

void FUN_10065d8d0(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetStructDescriptor_100cb92b4);
  return;
}



/* Address: 0x10065d8dc | FUN_10065d8dc */

void FUN_10065d8dc(undefined8 param_1,long param_2)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010065d8f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*(long *)(param_2 + 0x18) + -8) + 0x10))
            (param_1,unaff_x20 + *(int *)(param_2 + 0x34));
  return;
}



/* Address: 0x10065d8f8 | FUN_10065d8f8 */

void FUN_10065d8f8(undefined8 param_1,long param_2)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010065d914. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*(long *)(param_2 + 0x18) + -8) + 0x28))
            (unaff_x20 + *(int *)(param_2 + 0x34),param_1);
  return;
}



/* Address: 0x10065d918 | FUN_10065d918 */

undefined1  [16] FUN_10065d918(long param_1)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._9_7_ = 0;
  auVar1._0_9_ = *(unkuint9 *)(unaff_x20 + *(int *)(param_1 + 0x38));
  return auVar1;
}



/* Address: 0x10065d92c | FUN_10065d92c */

void FUN_10065d92c(undefined8 param_1,undefined1 param_2,long param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(unaff_x20 + *(int *)(param_3 + 0x38));
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = param_2;
  return;
}



/* Address: 0x10065d940 | FUN_10065d940 */

void FUN_10065d940(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_2 + -8) + 0x40);
  (**(code **)(*(long *)(param_2 + -8) + 0x10))
            (&stack0xffffffffffffffd0 + -(lVar1 + 0xfU & 0xfffffffffffffff0));
  FUN_10065d9b0(param_1,&stack0xffffffffffffffd0 + -(lVar1 + 0xfU & 0xfffffffffffffff0),
                *(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18),
                *(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x28));
  return;
}



/* Address: 0x10065d9b0 | FUN_10065d9b0 */

void FUN_10065d9b0(long param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_90 [8];
  long local_88;
  long local_80;
  long lStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar5 = *(long *)(param_4 + -8);
  puVar4 = auStack_90 + -(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_88 = param_1;
  (**(code **)(*(long *)(param_3 + -8) + 0x10))
            ((long)puVar4 - (*(long *)(*(long *)(param_3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0),
             param_2,param_3);
  Swift::AsyncSequence::_makeAsyncIterator();
  FUN_100665fe8(0,param_4,param_6);
  lVar3 = 0;
  local_80 = param_3;
  lStack_78 = param_4;
  local_70 = param_5;
  uStack_68 = param_6;
  FUN_10065d8d0(0,&local_80);
  (**(code **)(lVar5 + 0x10))(puVar4,param_2 + *(int *)(lVar3 + 0x34),param_4);
  puVar1 = (undefined8 *)(param_2 + *(int *)(lVar3 + 0x38));
  uVar6 = *puVar1;
  uVar2 = *(undefined1 *)(puVar1 + 1);
  (**(code **)(*(long *)(lVar3 + -8) + 8))(param_2,lVar3);
  FUN_100664c44(puVar4,uVar6,uVar2);
  lVar3 = 0;
  local_80 = param_3;
  lStack_78 = param_4;
  local_70 = param_5;
  uStack_68 = param_6;
  FUN_10065dc08(0,&local_80);
  *(undefined1 **)(local_88 + *(int *)(lVar3 + 0x34)) = puVar4;
  *(undefined1 *)(local_88 + *(int *)(lVar3 + 0x38)) = 0;
  return;
}



/* Address: 0x10065db0c | FUN_10065db0c */

void FUN_10065db0c(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
                    /* WARNING: Could not recover jumptable at 0x00010065db58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_1);
  return;
}



/* Address: 0x10065db5c | FUN_10065db5c */

void FUN_10065db5c(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
                    /* WARNING: Could not recover jumptable at 0x00010065dbac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x28))();
  return;
}



/* Address: 0x10065dbb0 | FUN_10065dbb0 */

void FUN_10065dbb0(long param_1)

{
  long unaff_x20;
  
  _swift_retain(*(undefined8 *)(unaff_x20 + *(int *)(param_1 + 0x34)));
  return;
}



/* Address: 0x10065dbbc | FUN_10065dbbc */

void FUN_10065dbbc(undefined8 param_1,long param_2)

{
  int iVar1;
  long unaff_x20;
  
  iVar1 = *(int *)(param_2 + 0x34);
  _swift_release(*(undefined8 *)(unaff_x20 + iVar1));
  *(undefined8 *)(unaff_x20 + iVar1) = param_1;
  return;
}



/* Address: 0x10065dbf0 | FUN_10065dbf0 */

undefined1 FUN_10065dbf0(long param_1)

{
  long unaff_x20;
  
  return *(undefined1 *)(unaff_x20 + *(int *)(param_1 + 0x38));
}



/* Address: 0x10065dbfc | FUN_10065dbfc */

void FUN_10065dbfc(undefined1 param_1,long param_2)

{
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + *(int *)(param_2 + 0x38)) = param_1;
  return;
}



/* Address: 0x10065dc08 | FUN_10065dc08 */

void FUN_10065dc08(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetStructDescriptor_100cb9308);
  return;
}



/* Address: 0x10065dc14 | FUN_10065dc14 */

void FUN_10065dc14(undefined8 param_1,long param_2)

{
  Optional OVar1;
  long lVar2;
  ulong uVar3;
  undefined7 extraout_var;
  ulong uVar4;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x30) = param_2;
  *(undefined8 *)(unaff_x22 + 0x38) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(*(long *)(param_2 + 0x28) + 8),*(undefined8 *)(param_2 + 0x18),
             0x100cb8688,&TargetProtocolRequirement_100cb8690);
  *(long *)(unaff_x22 + 0x40) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x48) = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x50) = uVar3;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x58) = CONCAT71(extraout_var,OVar1.value);
  lVar2 = *(long *)(CONCAT71(extraout_var,OVar1.value) + -8);
  *(long *)(unaff_x22 + 0x60) = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xf;
  uVar4 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x68) = uVar4;
  uVar4 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x70) = uVar4;
  uVar4 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x78) = uVar4;
  uVar4 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x80) = uVar4;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x88) = uVar3;
  _swift_task_switch(FUN_10065dd00,0,0);
  return;
}



/* Address: 0x10065dd00 | FUN_10065dd00 */

/* WARNING: Removing unreachable block (ram,0x00010065de2c) */

void FUN_10065dd00(void)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  code *pcVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x22;
  undefined8 uVar12;
  undefined8 uVar13;
  
  iVar3 = *(int *)(*(long *)(unaff_x22 + 0x30) + 0x38);
  *(int *)(unaff_x22 + 0xb8) = iVar3;
  cVar2 = *(char *)(*(long *)(unaff_x22 + 0x38) + (long)iVar3);
  if (cVar2 == '\x02') {
    uVar11 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x28);
    pcVar8 = *(code **)(*(long *)(unaff_x22 + 0x48) + 0x38);
    uVar10 = 1;
  }
  else {
    if (cVar2 == '\x01') {
      uVar5 = *(ulong *)(unaff_x22 + 0x68);
      FUN_100664cd0(uVar5,1,1);
      pcVar8 = *(code **)(*(long *)(unaff_x22 + 0x60) + 0x20);
      (*pcVar8)(*(undefined8 *)(unaff_x22 + 0x70),*(undefined8 *)(unaff_x22 + 0x68),
                *(undefined8 *)(unaff_x22 + 0x58));
      if ((uVar5 & 1) != 0) {
        *(undefined1 *)(*(long *)(unaff_x22 + 0x38) + (long)*(int *)(unaff_x22 + 0xb8)) = 2;
      }
      (*pcVar8)(*(undefined8 *)(unaff_x22 + 0x28),*(undefined8 *)(unaff_x22 + 0x70),
                *(undefined8 *)(unaff_x22 + 0x58));
      goto LAB_10065ddc0;
    }
    *(undefined8 *)(unaff_x22 + 0x98) =
         *(undefined8 *)
          (*(long *)(unaff_x22 + 0x38) + (long)*(int *)(*(long *)(unaff_x22 + 0x30) + 0x34));
    FUN_100664cd0(*(undefined8 *)(unaff_x22 + 0x80),0,0);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x78);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x58);
    lVar9 = *(long *)(unaff_x22 + 0x60);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x40);
    lVar1 = *(long *)(unaff_x22 + 0x48);
    (**(code **)(lVar9 + 0x20))(uVar11,*(undefined8 *)(unaff_x22 + 0x80),uVar6);
    (**(code **)(lVar9 + 0x10))(uVar12,uVar11,uVar6);
    (**(code **)(lVar1 + 0x30))(uVar12,1,uVar10);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x78);
    if ((int)uVar12 == 1) {
      lVar9 = *(long *)(unaff_x22 + 0x30);
      pcVar8 = *(code **)(*(long *)(unaff_x22 + 0x60) + 8);
      *(code **)(unaff_x22 + 0xa0) = pcVar8;
      (*pcVar8)(uVar10);
      puVar4 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
      uVar11 = *(undefined8 *)(lVar9 + 0x20);
      uVar10 = *(undefined8 *)(lVar9 + 0x10);
      uVar6 = 0;
      _swift_getAssociatedTypeWitness
                (0,uVar11,uVar10,
                 PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
                 PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
      _swift_getAssociatedConformanceWitness
                (uVar11,uVar10,uVar6,puVar4,
                 PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
                );
      plVar7 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0xa8) = plVar7;
      *plVar7 = unaff_x22;
      plVar7[1] = (long)FUN_10065dff0;
      Swift::AsyncIteratorProtocol::_next();
      return;
    }
    lVar9 = *(long *)(unaff_x22 + 0x48);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x28);
    (**(code **)(*(long *)(unaff_x22 + 0x60) + 8))
              (*(undefined8 *)(unaff_x22 + 0x88),*(undefined8 *)(unaff_x22 + 0x58));
    pcVar8 = *(code **)(lVar9 + 0x20);
    (*pcVar8)(uVar12,uVar10,uVar11);
    (*pcVar8)(uVar6,uVar12,uVar11);
    pcVar8 = *(code **)(lVar9 + 0x38);
    uVar10 = 0;
  }
  (*pcVar8)(uVar6,uVar10,1,uVar11);
LAB_10065ddc0:
  uVar6 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x50);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x88));
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar13);
                    /* WARNING: Could not recover jumptable at 0x00010065de88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10065dff0 | FUN_10065dff0 */

void FUN_10065dff0(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xb0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xa8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10065e054;
  }
  else {
    pcVar1 = FUN_10065e3dc;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x10065e054 | FUN_10065e054 */

void FUN_10065e054(void)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  code *UNRECOVERED_JUMPTABLE;
  
  lVar6 = *(long *)(unaff_x22 + 0x10);
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 0xa0);
  if (lVar6 == 0) {
    iVar3 = *(int *)(unaff_x22 + 0xb8);
    lVar6 = *(long *)(unaff_x22 + 0x38);
    (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(unaff_x22 + 0x88),*(undefined8 *)(unaff_x22 + 0x58));
    *(undefined1 *)(lVar6 + iVar3) = 1;
    lVar6 = *(long *)(unaff_x22 + 0xb0);
LAB_10065e14c:
    uVar12 = *(ulong *)(unaff_x22 + 0x68);
    FUN_100664cd0(uVar12,1,1);
    if (lVar6 != 0) {
LAB_10065e210:
      uVar8 = *(undefined8 *)(unaff_x22 + 0x80);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x70);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x78);
      uVar9 = *(undefined8 *)(unaff_x22 + 0x68);
      uVar11 = *(undefined8 *)(unaff_x22 + 0x50);
      _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x88));
      _swift_task_dealloc(uVar8);
      _swift_task_dealloc(uVar7);
      _swift_task_dealloc(uVar10);
      _swift_task_dealloc(uVar9);
      _swift_task_dealloc(uVar11);
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
      goto LAB_10065e254;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(unaff_x22 + 0x60) + 0x20);
    (*UNRECOVERED_JUMPTABLE)
              (*(undefined8 *)(unaff_x22 + 0x70),*(undefined8 *)(unaff_x22 + 0x68),
               *(undefined8 *)(unaff_x22 + 0x58));
    if ((uVar12 & 1) != 0) {
      *(undefined1 *)(*(long *)(unaff_x22 + 0x38) + (long)*(int *)(unaff_x22 + 0xb8)) = 2;
    }
    (*UNRECOVERED_JUMPTABLE)
              (*(undefined8 *)(unaff_x22 + 0x28),*(undefined8 *)(unaff_x22 + 0x70),
               *(undefined8 *)(unaff_x22 + 0x58));
  }
  else {
    uVar8 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x58);
    uVar12 = (ulong)*(uint *)(unaff_x22 + 0x20) | (ulong)*(byte *)(unaff_x22 + 0x97) << 0x38 |
             ((ulong)(uint)*(uint3 *)(unaff_x22 + 0x24) & 0xffff |
             (ulong)(uint)*(uint3 *)(unaff_x22 + 0x24) & 0xff0000) << 0x20;
    FUN_100664f8c(lVar6,*(undefined8 *)(unaff_x22 + 0x18),uVar12);
    _swift_release(lVar6);
    (*UNRECOVERED_JUMPTABLE)(uVar8,uVar10);
    lVar6 = *(long *)(unaff_x22 + 0xb0);
    *(ulong *)(unaff_x22 + 0x90) = uVar12;
    cVar2 = *(char *)(*(long *)(unaff_x22 + 0x38) + (long)*(int *)(unaff_x22 + 0xb8));
    if (cVar2 == '\0') {
      *(undefined8 *)(unaff_x22 + 0x98) =
           *(undefined8 *)
            (*(long *)(unaff_x22 + 0x38) + (long)*(int *)(*(long *)(unaff_x22 + 0x30) + 0x34));
      FUN_100664cd0(*(undefined8 *)(unaff_x22 + 0x80),0,0);
      if (lVar6 != 0) goto LAB_10065e210;
      uVar7 = *(undefined8 *)(unaff_x22 + 0x88);
      uVar9 = *(undefined8 *)(unaff_x22 + 0x78);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x58);
      lVar6 = *(long *)(unaff_x22 + 0x60);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x40);
      lVar1 = *(long *)(unaff_x22 + 0x48);
      (**(code **)(lVar6 + 0x20))(uVar7,*(undefined8 *)(unaff_x22 + 0x80),uVar8);
      (**(code **)(lVar6 + 0x10))(uVar9,uVar7,uVar8);
      (**(code **)(lVar1 + 0x30))(uVar9,1,uVar10);
      if ((int)uVar9 == 1) {
        lVar6 = *(long *)(unaff_x22 + 0x30);
        UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(unaff_x22 + 0x60) + 8);
        *(code **)(unaff_x22 + 0xa0) = UNRECOVERED_JUMPTABLE;
        (*UNRECOVERED_JUMPTABLE)
                  (*(undefined8 *)(unaff_x22 + 0x78),*(undefined8 *)(unaff_x22 + 0x58));
        puVar4 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
        uVar10 = *(undefined8 *)(lVar6 + 0x20);
        uVar7 = *(undefined8 *)(lVar6 + 0x10);
        uVar8 = 0;
        _swift_getAssociatedTypeWitness
                  (0,uVar10,uVar7,
                   PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
                   PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8)
        ;
        _swift_getAssociatedConformanceWitness
                  (uVar10,uVar7,uVar8,puVar4,
                   PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
                  );
        plVar5 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0xa8) = plVar5;
        *plVar5 = unaff_x22;
        plVar5[1] = (long)FUN_10065dff0;
        Swift::AsyncIteratorProtocol::_next();
        return;
      }
      uVar10 = *(undefined8 *)(unaff_x22 + 0x78);
      lVar6 = *(long *)(unaff_x22 + 0x48);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x50);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x40);
      uVar9 = *(undefined8 *)(unaff_x22 + 0x28);
      (**(code **)(*(long *)(unaff_x22 + 0x60) + 8))
                (*(undefined8 *)(unaff_x22 + 0x88),*(undefined8 *)(unaff_x22 + 0x58));
      UNRECOVERED_JUMPTABLE = *(code **)(lVar6 + 0x20);
      (*UNRECOVERED_JUMPTABLE)(uVar8,uVar10,uVar7);
      (*UNRECOVERED_JUMPTABLE)(uVar9,uVar8,uVar7);
      (**(code **)(lVar6 + 0x38))(uVar9,0,1,uVar7);
    }
    else {
      if (cVar2 == '\x01') goto LAB_10065e14c;
      (**(code **)(*(long *)(unaff_x22 + 0x48) + 0x38))
                (*(undefined8 *)(unaff_x22 + 0x28),1,1,*(undefined8 *)(unaff_x22 + 0x40));
    }
  }
  uVar8 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x50);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x88));
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar11);
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
LAB_10065e254:
                    /* WARNING: Could not recover jumptable at 0x00010065e26c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x10065e3dc | FUN_10065e3dc */

void FUN_10065e3dc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  
  (**(code **)(unaff_x22 + 0xa0))
            (*(undefined8 *)(unaff_x22 + 0x88),*(undefined8 *)(unaff_x22 + 0x58));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x50);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x88));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010065e468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10065e46c | FUN_10065e46c */

void FUN_10065e46c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  Optional OVar1;
  long lVar2;
  ulong uVar3;
  undefined7 extraout_var;
  ulong uVar4;
  UnownedSerialExecutor UVar5;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x40) = param_4;
  *(undefined8 *)(unaff_x22 + 0x48) = unaff_x20;
  *(long *)(unaff_x22 + 0x30) = param_2;
  *(undefined8 *)(unaff_x22 + 0x38) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(param_4 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(param_4 + 0x10);
  lVar2 = 0;
  _swift_getAssociatedTypeWitness();
  *(long *)(unaff_x22 + 0x60) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x68) = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x70) = uVar3;
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(*(long *)(param_4 + 0x28) + 8),*(undefined8 *)(param_4 + 0x18),
             0x100cb8688,&TargetProtocolRequirement_100cb8690);
  *(long *)(unaff_x22 + 0x78) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x80) = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x88) = uVar3;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x90) = CONCAT71(extraout_var,OVar1.value);
  lVar2 = *(long *)(CONCAT71(extraout_var,OVar1.value) + -8);
  *(long *)(unaff_x22 + 0x98) = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xf;
  uVar4 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xa0) = uVar4;
  uVar4 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xa8) = uVar4;
  uVar4 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xb0) = uVar4;
  uVar4 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xb8) = uVar4;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xc0) = uVar3;
  if (param_2 == 0) {
    UVar5.unknown = (undefined *)0x0;
    param_3 = 0;
  }
  else {
    _swift_getObjectType(param_2);
    UVar5 = Swift::Actor::get_unownedExecutor();
  }
  *(undefined **)(unaff_x22 + 200) = UVar5.unknown;
  *(undefined8 *)(unaff_x22 + 0xd0) = param_3;
  _swift_task_switch(FUN_10065e5e0,UVar5.unknown);
  return;
}



/* Address: 0x10065e5e0 | FUN_10065e5e0 */

/* WARNING: Removing unreachable block (ram,0x00010065e718) */

void FUN_10065e5e0(void)

{
  long lVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  undefined *puVar5;
  ulong uVar6;
  long *plVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x22;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  iVar4 = *(int *)(*(long *)(unaff_x22 + 0x40) + 0x38);
  *(int *)(unaff_x22 + 0x110) = iVar4;
  cVar3 = *(char *)(*(long *)(unaff_x22 + 0x48) + (long)iVar4);
  if (cVar3 == '\x02') {
    uVar10 = *(undefined8 *)(unaff_x22 + 0x78);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x28);
    pcVar8 = *(code **)(*(long *)(unaff_x22 + 0x80) + 0x38);
    uVar9 = 1;
  }
  else {
    if (cVar3 == '\x01') {
      uVar6 = *(ulong *)(unaff_x22 + 0xa0);
      FUN_100664cd0(uVar6,1,1);
      pcVar8 = *(code **)(*(long *)(unaff_x22 + 0x98) + 0x20);
      (*pcVar8)(*(undefined8 *)(unaff_x22 + 0xa8),*(undefined8 *)(unaff_x22 + 0xa0),
                *(undefined8 *)(unaff_x22 + 0x90));
      if ((uVar6 & 1) != 0) {
        *(undefined1 *)(*(long *)(unaff_x22 + 0x48) + (long)*(int *)(unaff_x22 + 0x110)) = 2;
      }
      (*pcVar8)(*(undefined8 *)(unaff_x22 + 0x28),*(undefined8 *)(unaff_x22 + 0xa8),
                *(undefined8 *)(unaff_x22 + 0x90));
      goto LAB_10065e6a0;
    }
    *(undefined8 *)(unaff_x22 + 0xe0) =
         *(undefined8 *)
          (*(long *)(unaff_x22 + 0x48) + (long)*(int *)(*(long *)(unaff_x22 + 0x40) + 0x34));
    FUN_100664cd0(*(undefined8 *)(unaff_x22 + 0xb8),0,0);
    uVar10 = *(undefined8 *)(unaff_x22 + 0xc0);
    uVar11 = *(undefined8 *)(unaff_x22 + 0xb0);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x90);
    lVar1 = *(long *)(unaff_x22 + 0x98);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x78);
    lVar2 = *(long *)(unaff_x22 + 0x80);
    (**(code **)(lVar1 + 0x20))(uVar10,*(undefined8 *)(unaff_x22 + 0xb8),uVar12);
    (**(code **)(lVar1 + 0x10))(uVar11,uVar10,uVar12);
    (**(code **)(lVar2 + 0x30))(uVar11,1,uVar9);
    uVar9 = *(undefined8 *)(unaff_x22 + 0xb0);
    if ((int)uVar11 == 1) {
      uVar12 = *(undefined8 *)(unaff_x22 + 0x50);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x58);
      pcVar8 = *(code **)(*(long *)(unaff_x22 + 0x98) + 8);
      *(code **)(unaff_x22 + 0xe8) = pcVar8;
      (*pcVar8)(uVar9);
      puVar5 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
      uVar9 = 0;
      _swift_getAssociatedTypeWitness
                (0,uVar12,uVar10,
                 PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
                 PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
      *(undefined8 *)(unaff_x22 + 0xf0) = uVar9;
      _swift_getAssociatedConformanceWitness
                (uVar12,uVar10,uVar9,puVar5,
                 PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
                );
      *(undefined8 *)(unaff_x22 + 0xf8) = uVar12;
      plVar7 = (long *)(ulong)*(uint *)(PTR__next_100eaebb0 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x100) = plVar7;
      *plVar7 = unaff_x22;
      plVar7[1] = (long)FUN_10065e8f0;
      Swift::AsyncIteratorProtocol::_next();
      return;
    }
    lVar1 = *(long *)(unaff_x22 + 0x80);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x78);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x28);
    (**(code **)(*(long *)(unaff_x22 + 0x98) + 8))
              (*(undefined8 *)(unaff_x22 + 0xc0),*(undefined8 *)(unaff_x22 + 0x90));
    pcVar8 = *(code **)(lVar1 + 0x20);
    (*pcVar8)(uVar11,uVar9,uVar10);
    (*pcVar8)(uVar12,uVar11,uVar10);
    pcVar8 = *(code **)(lVar1 + 0x38);
    uVar9 = 0;
  }
  (*pcVar8)(uVar12,uVar9,1,uVar10);
LAB_10065e6a0:
  uVar12 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x70);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xc0));
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar14);
                    /* WARNING: Could not recover jumptable at 0x00010065e780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10065e8f0 | FUN_10065e8f0 */

void FUN_10065e8f0(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x108) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x100));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10065e950;
  }
  else {
    pcVar1 = FUN_10065ecf8;
  }
  _swift_task_switch(pcVar1,*(undefined8 *)(lVar2 + 200),*(undefined8 *)(lVar2 + 0xd0));
  return;
}



/* Address: 0x10065e950 | FUN_10065e950 */

void FUN_10065e950(void)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long unaff_x22;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  code *UNRECOVERED_JUMPTABLE;
  
  lVar7 = *(long *)(unaff_x22 + 0x10);
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 0xe8);
  if (lVar7 == 0) {
    iVar3 = *(int *)(unaff_x22 + 0x110);
    lVar7 = *(long *)(unaff_x22 + 0x48);
    (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(unaff_x22 + 0xc0),*(undefined8 *)(unaff_x22 + 0x90));
    *(undefined1 *)(lVar7 + iVar3) = 1;
    lVar7 = *(long *)(unaff_x22 + 0x108);
LAB_10065ea48:
    uVar12 = *(ulong *)(unaff_x22 + 0xa0);
    FUN_100664cd0(uVar12,1,1);
    if (lVar7 != 0) {
LAB_10065eb18:
      uVar8 = *(undefined8 *)(unaff_x22 + 0xb8);
      uVar10 = *(undefined8 *)(unaff_x22 + 0xa8);
      uVar5 = *(undefined8 *)(unaff_x22 + 0xb0);
      uVar9 = *(undefined8 *)(unaff_x22 + 0xa0);
      uVar11 = *(undefined8 *)(unaff_x22 + 0x88);
      uVar13 = *(undefined8 *)(unaff_x22 + 0x70);
      _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xc0));
      _swift_task_dealloc(uVar8);
      _swift_task_dealloc(uVar5);
      _swift_task_dealloc(uVar10);
      _swift_task_dealloc(uVar9);
      _swift_task_dealloc(uVar11);
      _swift_task_dealloc(uVar13);
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
      goto LAB_10065eb68;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(unaff_x22 + 0x98) + 0x20);
    (*UNRECOVERED_JUMPTABLE)
              (*(undefined8 *)(unaff_x22 + 0xa8),*(undefined8 *)(unaff_x22 + 0xa0),
               *(undefined8 *)(unaff_x22 + 0x90));
    if ((uVar12 & 1) != 0) {
      *(undefined1 *)(*(long *)(unaff_x22 + 0x48) + (long)*(int *)(unaff_x22 + 0x110)) = 2;
    }
    (*UNRECOVERED_JUMPTABLE)
              (*(undefined8 *)(unaff_x22 + 0x28),*(undefined8 *)(unaff_x22 + 0xa8),
               *(undefined8 *)(unaff_x22 + 0x90));
  }
  else {
    uVar8 = *(undefined8 *)(unaff_x22 + 0xc0);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x90);
    uVar12 = (ulong)*(uint *)(unaff_x22 + 0x20) | (ulong)*(byte *)(unaff_x22 + 0xdf) << 0x38 |
             ((ulong)(uint)*(uint3 *)(unaff_x22 + 0x24) & 0xffff |
             (ulong)(uint)*(uint3 *)(unaff_x22 + 0x24) & 0xff0000) << 0x20;
    FUN_100664f8c(lVar7,*(undefined8 *)(unaff_x22 + 0x18),uVar12);
    _swift_release(lVar7);
    (*UNRECOVERED_JUMPTABLE)(uVar8,uVar10);
    lVar7 = *(long *)(unaff_x22 + 0x108);
    *(ulong *)(unaff_x22 + 0xd8) = uVar12;
    cVar2 = *(char *)(*(long *)(unaff_x22 + 0x48) + (long)*(int *)(unaff_x22 + 0x110));
    if (cVar2 == '\0') {
      *(undefined8 *)(unaff_x22 + 0xe0) =
           *(undefined8 *)
            (*(long *)(unaff_x22 + 0x48) + (long)*(int *)(*(long *)(unaff_x22 + 0x40) + 0x34));
      FUN_100664cd0(*(undefined8 *)(unaff_x22 + 0xb8),0,0);
      if (lVar7 != 0) goto LAB_10065eb18;
      uVar5 = *(undefined8 *)(unaff_x22 + 0xc0);
      uVar9 = *(undefined8 *)(unaff_x22 + 0xb0);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x90);
      lVar7 = *(long *)(unaff_x22 + 0x98);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x78);
      lVar1 = *(long *)(unaff_x22 + 0x80);
      (**(code **)(lVar7 + 0x20))(uVar5,*(undefined8 *)(unaff_x22 + 0xb8),uVar8);
      (**(code **)(lVar7 + 0x10))(uVar9,uVar5,uVar8);
      (**(code **)(lVar1 + 0x30))(uVar9,1,uVar10);
      if ((int)uVar9 == 1) {
        uVar8 = *(undefined8 *)(unaff_x22 + 0x50);
        uVar10 = *(undefined8 *)(unaff_x22 + 0x58);
        UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(unaff_x22 + 0x98) + 8);
        *(code **)(unaff_x22 + 0xe8) = UNRECOVERED_JUMPTABLE;
        (*UNRECOVERED_JUMPTABLE)
                  (*(undefined8 *)(unaff_x22 + 0xb0),*(undefined8 *)(unaff_x22 + 0x90));
        puVar4 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
        uVar5 = 0;
        _swift_getAssociatedTypeWitness
                  (0,uVar8,uVar10,
                   PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
                   PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8)
        ;
        *(undefined8 *)(unaff_x22 + 0xf0) = uVar5;
        _swift_getAssociatedConformanceWitness
                  (uVar8,uVar10,uVar5,puVar4,
                   PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
                  );
        *(undefined8 *)(unaff_x22 + 0xf8) = uVar8;
        plVar6 = (long *)(ulong)*(uint *)(PTR__next_100eaebb0 + 4);
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x100) = plVar6;
        *plVar6 = unaff_x22;
        plVar6[1] = (long)FUN_10065e8f0;
        Swift::AsyncIteratorProtocol::_next();
        return;
      }
      uVar10 = *(undefined8 *)(unaff_x22 + 0xb0);
      lVar7 = *(long *)(unaff_x22 + 0x80);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x88);
      uVar5 = *(undefined8 *)(unaff_x22 + 0x78);
      uVar9 = *(undefined8 *)(unaff_x22 + 0x28);
      (**(code **)(*(long *)(unaff_x22 + 0x98) + 8))
                (*(undefined8 *)(unaff_x22 + 0xc0),*(undefined8 *)(unaff_x22 + 0x90));
      UNRECOVERED_JUMPTABLE = *(code **)(lVar7 + 0x20);
      (*UNRECOVERED_JUMPTABLE)(uVar8,uVar10,uVar5);
      (*UNRECOVERED_JUMPTABLE)(uVar9,uVar8,uVar5);
      (**(code **)(lVar7 + 0x38))(uVar9,0,1,uVar5);
    }
    else {
      if (cVar2 == '\x01') goto LAB_10065ea48;
      (**(code **)(*(long *)(unaff_x22 + 0x80) + 0x38))
                (*(undefined8 *)(unaff_x22 + 0x28),1,1,*(undefined8 *)(unaff_x22 + 0x78));
    }
  }
  uVar8 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x70);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xc0));
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar13);
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
LAB_10065eb68:
                    /* WARNING: Could not recover jumptable at 0x00010065eb80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x10065ecf8 | FUN_10065ecf8 */

void FUN_10065ecf8(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  code *pcVar7;
  undefined8 uVar8;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0xf8);
  pcVar7 = *(code **)(unaff_x22 + 0xe8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x90);
  lVar1 = *(long *)(unaff_x22 + 0x68);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x60);
  _swift_getAssociatedConformanceWitness
            (uVar3,*(undefined8 *)(unaff_x22 + 0xf0),uVar6,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncIteratorProtocol_100eaebc8,
             PTR___associated_conformance_descriptor_for_Swift_AsyncIteratorProtocol_Swift_AsyncIteratorProtocol_Failure__Swift_Error_100eaebb8
            );
  _swift_allocError(uVar6,uVar3,0,0);
  (**(code **)(lVar1 + 0x20))(uVar3,uVar2,uVar6);
  (*pcVar7)(uVar5,uVar4);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x70);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xc0));
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010065edf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10065edf4 | FUN_10065edf4 */

void FUN_10065edf4(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6ba60,param_1);
  return;
}



/* Address: 0x10065ee04 | FUN_10065ee04 */

void FUN_10065ee04(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0xc0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005c804c;
  FUN_10065dc14(plVar1,param_1,param_2);
  return;
}



/* Address: 0x10065ee6c | FUN_10065ee6c */

void FUN_10065ee6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_4;
  plVar1 = (long *)0x120;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10065eef0;
  FUN_10065e46c(plVar1,param_1,param_2,param_3,param_5);
  return;
}



/* Address: 0x10065eef0 | FUN_10065eef0 */

void FUN_10065eef0(void)

{
  code *UNRECOVERED_JUMPTABLE;
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x18));
  if (unaff_x20 == 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(lVar2 + 8);
  }
  else {
    **(long **)(lVar1 + 0x10) = unaff_x20;
    UNRECOVERED_JUMPTABLE = *(code **)(lVar2 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010065ef48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x10065ef4c | FUN_10065ef4c */

void FUN_10065ef4c(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6bad8,param_1);
  return;
}



/* Address: 0x10065ef5c | FUN_10065ef5c */

void FUN_10065ef5c(long param_1)

{
  FUN_10065d940();
                    /* WARNING: Could not recover jumptable at 0x00010065ef88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + -8) + 8))();
  return;
}



/* Address: 0x10065ef8c | FUN_10065ef8c */

void FUN_10065ef8c(long param_1)

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
      puStack_28 = &DAT_100c6bb88;
      _swift_initStructMetadata(param_1,0,3,&local_38,param_1 + 0x30);
    }
  }
  return;
}



/* Address: 0x10065f020 | FUN_10065f020 */

long * FUN_10065f020(long *param_1,long *param_2,long param_3)

{
  undefined1 uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  
  lVar9 = *(long *)(param_3 + 0x18);
  lVar4 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  lVar11 = *(long *)(lVar9 + -8);
  uVar7 = (ulong)*(uint *)(lVar11 + 0x50) & 0xff;
  uVar5 = *(long *)(lVar4 + 0x40) + uVar7;
  lVar3 = *(long *)(lVar11 + 0x40) + 7;
  uVar2 = (uint)uVar7 | *(uint *)(lVar4 + 0x50) & 0xf8;
  if ((uVar2 < 8 && ((*(uint *)(lVar4 + 0x50) | *(uint *)(lVar11 + 0x50)) & 0x100000) == 0) &&
      (lVar3 + (uVar5 & (uVar7 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) + 9 < 0x19) {
    (**(code **)(lVar4 + 0x10))(param_1);
    uVar10 = uVar5 + (long)param_1 & ~uVar7;
    uVar5 = uVar5 + (long)param_2 & ~uVar7;
    (**(code **)(lVar11 + 0x10))(uVar10,uVar5,lVar9);
    puVar8 = (undefined8 *)(lVar3 + uVar5 & 0xfffffffffffffff8);
    uVar1 = *(undefined1 *)(puVar8 + 1);
    puVar6 = (undefined8 *)(lVar3 + uVar10 & 0xfffffffffffffff8);
    *puVar6 = *puVar8;
    *(undefined1 *)(puVar6 + 1) = uVar1;
  }
  else {
    uVar5 = (ulong)(uVar2 | 7);
    lVar3 = *param_2;
    *param_1 = lVar3;
    param_1 = (long *)(lVar3 + (uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x10065f130 | FUN_10065f130 */

void FUN_10065f130(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  (**(code **)(lVar3 + 8))();
  lVar1 = *(long *)(*(long *)(param_2 + 0x18) + -8);
  uVar2 = (ulong)*(byte *)(lVar1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010065f184. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(*(long *)(lVar3 + 0x40) + param_1 + uVar2 & (uVar2 ^ 0xffffffffffffffff))
  ;
  return;
}



/* Address: 0x10065f188 | FUN_10065f188 */

long FUN_10065f188(long param_1,long param_2,long param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
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
  uVar1 = *(undefined1 *)(puVar2 + 1);
  *puVar4 = *puVar2;
  *(undefined1 *)(puVar4 + 1) = uVar1;
  return param_1;
}



/* Address: 0x10065f224 | FUN_10065f224 */

long FUN_10065f224(long param_1,long param_2,long param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar6 + 0x18))();
  lVar7 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar3 = (ulong)*(byte *)(lVar7 + 0x50);
  lVar6 = *(long *)(lVar6 + 0x40) + uVar3;
  uVar5 = lVar6 + param_1 & (uVar3 ^ 0xffffffffffffffff);
  uVar3 = lVar6 + param_2 & (uVar3 ^ 0xffffffffffffffff);
  (**(code **)(lVar7 + 0x18))(uVar5,uVar3);
  lVar6 = *(long *)(lVar7 + 0x40) + 7;
  puVar4 = (undefined8 *)(lVar6 + uVar5 & 0xfffffffffffffff8);
  puVar2 = (undefined8 *)(lVar6 + uVar3 & 0xfffffffffffffff8);
  uVar1 = *(undefined1 *)(puVar2 + 1);
  *puVar4 = *puVar2;
  *(undefined1 *)(puVar4 + 1) = uVar1;
  return param_1;
}



/* Address: 0x10065f2c0 | FUN_10065f2c0 */

long FUN_10065f2c0(long param_1,long param_2,long param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar6 + 0x20))();
  lVar7 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar3 = (ulong)*(byte *)(lVar7 + 0x50);
  lVar6 = *(long *)(lVar6 + 0x40) + uVar3;
  uVar5 = lVar6 + param_1 & (uVar3 ^ 0xffffffffffffffff);
  uVar3 = lVar6 + param_2 & (uVar3 ^ 0xffffffffffffffff);
  (**(code **)(lVar7 + 0x20))(uVar5,uVar3);
  lVar6 = *(long *)(lVar7 + 0x40) + 7;
  puVar4 = (undefined8 *)(lVar6 + uVar5 & 0xfffffffffffffff8);
  puVar2 = (undefined8 *)(lVar6 + uVar3 & 0xfffffffffffffff8);
  uVar1 = *(undefined1 *)(puVar2 + 1);
  *puVar4 = *puVar2;
  *(undefined1 *)(puVar4 + 1) = uVar1;
  return param_1;
}



/* Address: 0x10065f35c | FUN_10065f35c */

long FUN_10065f35c(long param_1,long param_2,long param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
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
  uVar1 = *(undefined1 *)(puVar2 + 1);
  *puVar4 = *puVar2;
  *(undefined1 *)(puVar4 + 1) = uVar1;
  return param_1;
}



/* Address: 0x10065f3f8 | FUN_10065f3f8 */

uint * FUN_10065f3f8(uint *param_1,uint param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  
  lVar11 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar6 = *(uint *)(lVar11 + 0x54);
  lVar12 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar9 = *(uint *)(lVar12 + 0x54);
  uVar3 = uVar9;
  if (uVar9 <= uVar6) {
    uVar3 = uVar6;
  }
  if (param_2 == 0) {
    return (uint *)0x0;
  }
  uVar13 = (ulong)*(byte *)(lVar12 + 0x50);
  uVar2 = *(long *)(lVar11 + 0x40) + uVar13;
  if (uVar3 <= param_2 && param_2 - uVar3 != 0) {
    lVar1 = (*(long *)(lVar12 + 0x40) + (uVar2 & (uVar13 ^ 0xffffffffffffffff)) + 7 &
            0xfffffffffffffff8) + 9;
    uVar10 = (uint)lVar1;
    uVar8 = 2;
    uVar5 = uVar8;
    if (uVar10 < 4) {
      uVar5 = ((param_2 - uVar3) + 0xff >> 8) + 1;
    }
    if (0xffff < uVar5) {
      uVar8 = 4;
    }
    if (uVar5 < 0x100) {
      uVar8 = 1;
    }
    uVar4 = 0;
    if (1 < uVar5) {
      uVar4 = uVar8;
    }
    if (uVar4 < 2) {
      if ((uVar4 != 0) &&
         (uVar8 = (uint)*(byte *)((long)param_1 + lVar1), *(byte *)((long)param_1 + lVar1) != 0)) {
LAB_10065f494:
        uVar6 = uVar8 - 1 << (ulong)((uVar10 & 3) << 3);
        if (uVar10 < 4) {
          uVar9 = (uint)(byte)*param_1;
        }
        else {
          uVar9 = *param_1;
          uVar6 = 0;
        }
        return (uint *)(ulong)(uVar3 + (uVar9 | uVar6) + 1);
      }
    }
    else {
      if (uVar4 == 2) {
        uVar8 = (uint)*(ushort *)((long)param_1 + lVar1);
      }
      else {
        uVar8 = *(uint *)((long)param_1 + lVar1);
      }
      if (uVar8 != 0) goto LAB_10065f494;
    }
    if (uVar3 == 0) {
      return (uint *)0x0;
    }
  }
  if (uVar6 < uVar9) {
    puVar7 = (uint *)((ulong)(uVar2 + (long)param_1) & ~uVar13);
                    /* WARNING: Could not recover jumptable at 0x00010065f4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar12 + 0x30))(puVar7,uVar9,*(long *)(param_3 + 0x18));
    return puVar7;
  }
                    /* WARNING: Could not recover jumptable at 0x00010065f504. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar11 + 0x30))(param_1,uVar6);
  return param_1;
}



/* Address: 0x10065f51c | FUN_10065f51c */

void FUN_10065f51c(uint *param_1,undefined8 param_2,uint param_3,long param_4)

{
  size_t sVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  code *UNRECOVERED_JUMPTABLE;
  int iVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  
  lVar9 = *(long *)(param_4 + 0x10);
  lVar11 = *(long *)(param_4 + 0x18);
  lVar12 = *(long *)(lVar9 + -8);
  uVar5 = *(uint *)(lVar12 + 0x54);
  lVar13 = *(long *)(lVar11 + -8);
  uVar6 = *(uint *)(lVar13 + 0x54);
  uVar3 = uVar6;
  if (uVar6 <= uVar5) {
    uVar3 = uVar5;
  }
  uVar14 = (ulong)*(byte *)(lVar13 + 0x50);
  uVar2 = *(long *)(lVar12 + 0x40) + uVar14;
  sVar1 = (*(long *)(lVar13 + 0x40) + (uVar2 & (uVar14 ^ 0xffffffffffffffff)) + 7 &
          0xfffffffffffffff8) + 9;
  uVar8 = (uint)param_2;
  if (param_3 < uVar3 || param_3 - uVar3 == 0) {
    uVar7 = 0;
  }
  else {
    uVar15 = 2;
    uVar4 = uVar15;
    if ((uint)sVar1 < 4) {
      uVar4 = ((param_3 - uVar3) + 0xff >> 8) + 1;
    }
    if (0xffff < uVar4) {
      uVar15 = 4;
    }
    if (uVar4 < 0x100) {
      uVar15 = 1;
    }
    uVar7 = 0;
    if (1 < uVar4) {
      uVar7 = uVar15;
    }
  }
  if (uVar3 < uVar8) {
    uVar8 = uVar8 + ~uVar3;
    _bzero(param_1,sVar1);
    iVar10 = 1;
    if ((uint)sVar1 < 4) {
      iVar10 = (uVar8 >> 8) + 1;
      *(char *)param_1 = (char)uVar8;
    }
    else {
      *param_1 = uVar8;
    }
    if (uVar7 < 2) {
      if (uVar7 != 0) {
        *(char *)((long)param_1 + sVar1) = (char)iVar10;
      }
    }
    else if (uVar7 == 2) {
      *(short *)((long)param_1 + sVar1) = (short)iVar10;
    }
    else {
      *(int *)((long)param_1 + sVar1) = iVar10;
    }
  }
  else {
    if (uVar7 < 2) {
      if (uVar7 != 0) {
        *(undefined1 *)((long)param_1 + sVar1) = 0;
        if (uVar8 == 0) {
          return;
        }
        goto LAB_10065f638;
      }
    }
    else if (uVar7 == 2) {
      *(undefined2 *)((long)param_1 + sVar1) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar1) = 0;
    }
    if (uVar8 != 0) {
LAB_10065f638:
      if (uVar5 < uVar6) {
        UNRECOVERED_JUMPTABLE = *(code **)(lVar13 + 0x38);
        param_1 = (uint *)(uVar2 + (long)param_1 & ~uVar14);
        lVar9 = lVar11;
        uVar5 = uVar6;
      }
      else {
        UNRECOVERED_JUMPTABLE = *(code **)(lVar12 + 0x38);
      }
                    /* WARNING: Could not recover jumptable at 0x00010065f68c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1,param_2,uVar5,lVar9);
      return;
    }
  }
  return;
}



/* Address: 0x10065f6b4 | FUN_10065f6b4 */

void FUN_10065f6b4(long param_1)

{
  long lVar1;
  ulong uVar2;
  long local_38;
  undefined *puStack_30;
  undefined *local_28;
  
  uVar2 = *(ulong *)(param_1 + 0x20);
  lVar1 = 0x13f;
  _swift_getAssociatedTypeWitness
            (0x13f,uVar2,*(undefined8 *)(param_1 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  if (uVar2 < 0x40) {
    local_38 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
    local_28 = &DAT_100c6bbc0;
    _swift_initStructMetadata(param_1,0,3,&local_38,param_1 + 0x30);
  }
  return;
}



/* Address: 0x10065f74c | FUN_10065f74c */

long * FUN_10065f74c(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar3 = *(long *)(lVar2 + -8);
  lVar6 = *(long *)(lVar3 + 0x40);
  if ((*(uint *)(lVar3 + 0x50) & 0x1000f8) == 0 && (lVar6 + 7U & 0xfffffffffffffff8) + 9 < 0x19) {
    (**(code **)(lVar3 + 0x10))(param_1,param_2,lVar2);
    puVar4 = (undefined8 *)((long)param_1 + lVar6 + 7 & 0xfffffffffffffff8);
    puVar5 = (undefined8 *)((long)param_2 + lVar6 + 7 & 0xfffffffffffffff8);
    *puVar4 = *puVar5;
    *(undefined1 *)(puVar4 + 1) = *(undefined1 *)(puVar5 + 1);
  }
  else {
    uVar1 = *(uint *)(lVar3 + 0x50) & 0xf8;
    lVar2 = *param_2;
    *param_1 = lVar2;
    param_1 = (long *)(lVar2 + ((ulong)(uVar1 + 0x17 & (uVar1 ^ 0xffffffff)) & 0x1f8));
  }
  _swift_retain();
  return param_1;
}



/* Address: 0x10065f824 | FUN_10065f824 */

void FUN_10065f824(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar2 = *(long *)(lVar1 + -8);
  (**(code **)(lVar2 + 8))(param_1,lVar1);
  _swift_release(*(undefined8 *)(param_1 + *(long *)(lVar2 + 0x40) + 7U & 0xfffffffffffffff8));
  return;
}



/* Address: 0x10065f88c | FUN_10065f88c */

long FUN_10065f88c(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar4 = *(long *)(lVar1 + -8);
  (**(code **)(lVar4 + 0x10))(param_1,param_2,lVar1);
  lVar1 = *(long *)(lVar4 + 0x40) + 7;
  puVar3 = (undefined8 *)(lVar1 + param_1 & 0xfffffffffffffff8);
  puVar2 = (undefined8 *)(lVar1 + param_2 & 0xfffffffffffffff8);
  *puVar3 = *puVar2;
  *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(puVar2 + 1);
  _swift_retain();
  return param_1;
}



/* Address: 0x10065f91c | FUN_10065f91c */

long FUN_10065f91c(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar3 = *(long *)(lVar1 + -8);
  (**(code **)(lVar3 + 0x18))(param_1,param_2,lVar1);
  lVar1 = *(long *)(lVar3 + 0x40) + 7;
  puVar4 = (undefined8 *)(lVar1 + param_1 & 0xfffffffffffffff8);
  puVar5 = (undefined8 *)(lVar1 + param_2 & 0xfffffffffffffff8);
  uVar2 = *puVar4;
  *puVar4 = *puVar5;
  _swift_retain();
  _swift_release(uVar2);
  *(undefined1 *)(puVar4 + 1) = *(undefined1 *)(puVar5 + 1);
  return param_1;
}



/* Address: 0x10065f9b8 | FUN_10065f9b8 */

long FUN_10065f9b8(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar4 = *(long *)(lVar1 + -8);
  (**(code **)(lVar4 + 0x20))(param_1,param_2,lVar1);
  lVar1 = *(long *)(lVar4 + 0x40) + 7;
  puVar3 = (undefined8 *)(lVar1 + param_1 & 0xfffffffffffffff8);
  puVar2 = (undefined8 *)(lVar1 + param_2 & 0xfffffffffffffff8);
  *puVar3 = *puVar2;
  *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(puVar2 + 1);
  return param_1;
}



/* Address: 0x10065fa44 | FUN_10065fa44 */

long FUN_10065fa44(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar4 = *(long *)(lVar1 + -8);
  (**(code **)(lVar4 + 0x28))(param_1,param_2,lVar1);
  lVar1 = *(long *)(lVar4 + 0x40) + 7;
  puVar5 = (undefined8 *)(lVar1 + param_1 & 0xfffffffffffffff8);
  puVar3 = (undefined8 *)(lVar1 + param_2 & 0xfffffffffffffff8);
  uVar2 = *puVar5;
  *puVar5 = *puVar3;
  _swift_release(uVar2);
  *(undefined1 *)(puVar5 + 1) = *(undefined1 *)(puVar3 + 1);
  return param_1;
}



/* Address: 0x10065fad8 | FUN_10065fad8 */

uint * FUN_10065fad8(uint *param_1,uint param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar8 = *(long *)(lVar6 + -8);
  uVar5 = *(uint *)(lVar8 + 0x54);
  uVar2 = uVar5;
  if (uVar5 < 0x80000000) {
    uVar2 = 0x7fffffff;
  }
  if (param_2 == 0) {
    return (uint *)0x0;
  }
  if (uVar2 <= param_2 && param_2 - uVar2 != 0) {
    lVar1 = (*(long *)(lVar8 + 0x40) + 7U & 0xfffffffffffffff8) + 9;
    uVar10 = (uint)lVar1;
    uVar9 = 2;
    uVar4 = uVar9;
    if (uVar10 < 4) {
      uVar4 = ((param_2 - uVar2) + 0xff >> 8) + 1;
    }
    if (0xffff < uVar4) {
      uVar9 = 4;
    }
    if (uVar4 < 0x100) {
      uVar9 = 1;
    }
    uVar3 = 0;
    if (1 < uVar4) {
      uVar3 = uVar9;
    }
    if (uVar3 < 2) {
      if ((uVar3 != 0) &&
         (uVar9 = (uint)*(byte *)((long)param_1 + lVar1), *(byte *)((long)param_1 + lVar1) != 0))
      goto LAB_10065fba0;
    }
    else if (uVar3 == 2) {
      uVar9 = (uint)*(ushort *)((long)param_1 + lVar1);
      if (*(ushort *)((long)param_1 + lVar1) != 0) {
LAB_10065fba0:
        uVar5 = uVar9 - 1 << (ulong)((uVar10 & 3) << 3);
        if (uVar10 < 4) {
          uVar9 = (uint)(byte)*param_1;
        }
        else {
          uVar9 = *param_1;
          uVar5 = 0;
        }
        return (uint *)(ulong)(uVar2 + (uVar9 | uVar5) + 1);
      }
    }
    else {
      uVar9 = *(uint *)((long)param_1 + lVar1);
      if (uVar9 != 0) goto LAB_10065fba0;
    }
  }
  if (uVar5 < 0x7fffffff) {
    uVar7 = *(ulong *)((ulong)((long)param_1 + *(long *)(lVar8 + 0x40) + 7) & 0xfffffffffffffff8);
    if (0xfffffffe < uVar7) {
      uVar7 = 0xffffffff;
    }
    return (uint *)(ulong)((int)uVar7 + 1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010065fbe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar8 + 0x30))(param_1,uVar5,lVar6);
  return param_1;
}



/* Address: 0x10065fc28 | FUN_10065fc28 */

void FUN_10065fc28(uint *param_1,undefined8 param_2,uint param_3,long param_4)

{
  size_t sVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 0x20),*(undefined8 *)(param_4 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar8 = *(long *)(lVar6 + -8);
  uVar4 = *(uint *)(lVar8 + 0x54);
  uVar2 = uVar4;
  if (uVar4 < 0x80000000) {
    uVar2 = 0x7fffffff;
  }
  lVar9 = *(long *)(lVar8 + 0x40);
  sVar1 = (lVar9 + 7U & 0xfffffffffffffff8) + 9;
  uVar11 = (uint)param_2;
  if (param_3 < uVar2 || param_3 - uVar2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar10 = 2;
    uVar3 = uVar10;
    if ((uint)sVar1 < 4) {
      uVar3 = ((param_3 - uVar2) + 0xff >> 8) + 1;
    }
    if (0xffff < uVar3) {
      uVar10 = 4;
    }
    if (uVar3 < 0x100) {
      uVar10 = 1;
    }
    uVar5 = 0;
    if (1 < uVar3) {
      uVar5 = uVar10;
    }
  }
  if (uVar2 < uVar11) {
    uVar11 = uVar11 + ~uVar2;
    _bzero(param_1,sVar1);
    iVar7 = 1;
    if ((uint)sVar1 < 4) {
      iVar7 = (uVar11 >> 8) + 1;
      *(char *)param_1 = (char)uVar11;
    }
    else {
      *param_1 = uVar11;
    }
    if (uVar5 < 2) {
      if (uVar5 != 0) {
        *(char *)((long)param_1 + sVar1) = (char)iVar7;
      }
    }
    else if (uVar5 == 2) {
      *(short *)((long)param_1 + sVar1) = (short)iVar7;
    }
    else {
      *(int *)((long)param_1 + sVar1) = iVar7;
    }
  }
  else {
    if (uVar5 < 2) {
      if (uVar5 != 0) {
        *(undefined1 *)((long)param_1 + sVar1) = 0;
      }
    }
    else if (uVar5 == 2) {
      *(undefined2 *)((long)param_1 + sVar1) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar1) = 0;
    }
    if (uVar11 != 0) {
      if (0x7ffffffe < uVar4) {
                    /* WARNING: Could not recover jumptable at 0x00010065fd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar8 + 0x38))(param_1,param_2,uVar4,lVar6);
        return;
      }
      if ((int)uVar11 < 0) {
        uVar11 = uVar11 & 0x7fffffff;
      }
      else {
        uVar11 = uVar11 - 1;
      }
      *(ulong *)((long)param_1 + lVar9 + 7 & 0xfffffffffffffff8) = (ulong)uVar11;
    }
  }
  return;
}



/* Address: 0x10065fdd4 | FUN_10065fdd4 */

void FUN_10065fdd4(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetEnumDescriptor_100cb935c);
  return;
}



/* Address: 0x10065fde0 | FUN_10065fde0 */

void FUN_10065fde0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  
  _swift_getObjectType(param_3);
  FUN_100642338();
  *param_1 = param_3;
  param_1[1] = param_4;
  lVar1 = 0;
  FUN_100660698(0,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010065fe50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_5 + -8) + 0x20))
            ((long)param_1 + (long)*(int *)(lVar1 + 0x1c),param_2,param_5);
  return;
}



/* Address: 0x10065fe54 | FUN_10065fe54 */

long * FUN_10065fe54(undefined8 param_1,long param_2,long param_3)

{
  long *unaff_x20;
  
  _swift_allocObject();
  unaff_x20[2] = param_2;
  unaff_x20[3] = param_3;
  (**(code **)(*(long *)(*(long *)(*unaff_x20 + 0x50) + -8) + 0x20))
            ((long)unaff_x20 + *(long *)(*unaff_x20 + 0x60),param_1);
  return unaff_x20;
}



/* Address: 0x10065febc | FUN_10065febc */

void FUN_10065febc(undefined8 param_1)

{
  long *unaff_x20;
  long lVar1;
  long lVar2;
  undefined1 auStack_58 [24];
  
  lVar2 = *unaff_x20;
  _swift_getObjectType(unaff_x20[2]);
  FUN_100642338();
  lVar1 = *(long *)(*unaff_x20 + 0x60);
  _swift_beginAccess((long)unaff_x20 + lVar1,auStack_58,0,0);
  (**(code **)(*(long *)(*(long *)(lVar2 + 0x50) + -8) + 0x10))(param_1,(long)unaff_x20 + lVar1);
  return;
}



/* Address: 0x10065ff44 | FUN_10065ff44 */

undefined1  [16] FUN_10065ff44(undefined8 param_1)

{
  long *unaff_x20;
  long lVar1;
  undefined1 auVar2 [16];
  
  _swift_getObjectType(unaff_x20[2]);
  FUN_100642338();
  lVar1 = *(long *)(*unaff_x20 + 0x60);
  _swift_beginAccess((long)unaff_x20 + lVar1,param_1,0x21,0);
  auVar2._8_8_ = (long)unaff_x20 + lVar1;
  auVar2._0_8_ = _swift_endAccess;
  return auVar2;
}



/* Address: 0x10065ffac | FUN_10065ffac */

void FUN_10065ffac(undefined8 param_1,long param_2)

{
  undefined8 *unaff_x20;
  
  _swift_getObjectType(*unaff_x20);
  FUN_100642338();
                    /* WARNING: Could not recover jumptable at 0x00010066000c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*(long *)(param_2 + 0x10) + -8) + 0x10))
            (param_1,(long)unaff_x20 + (long)*(int *)(param_2 + 0x1c));
  return;
}



/* Address: 0x100660010 | FUN_100660010 */

undefined1  [16] FUN_100660010(undefined8 param_1,long param_2)

{
  undefined8 *unaff_x20;
  undefined1 auVar1 [16];
  
  _swift_getObjectType(*unaff_x20);
  FUN_100642338();
  auVar1._8_8_ = (long)unaff_x20 + (long)*(int *)(param_2 + 0x1c);
  auVar1._0_8_ = FUN_100004520;
  return auVar1;
}



/* Address: 0x100660060 | FUN_100660060 */

void FUN_100660060(undefined8 param_1,long param_2)

{
  undefined8 *unaff_x20;
  
  _swift_getObjectType(*unaff_x20);
  FUN_100642338();
                    /* WARNING: Could not recover jumptable at 0x0001006600c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*(long *)(param_2 + 0x10) + -8) + 0x28))
            ((long)unaff_x20 + (long)*(int *)(param_2 + 0x1c),param_1);
  return;
}



/* Address: 0x1006600c4 | FUN_1006600c4 */

void FUN_1006600c4(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRetain(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}


