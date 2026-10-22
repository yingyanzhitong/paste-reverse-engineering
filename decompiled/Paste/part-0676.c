/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10072eebc | FUN_10072eebc */

void FUN_10072eebc(void)

{
  long unaff_x22;
  
  if ((*(byte *)(unaff_x22 + 0xa0) & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010072eef4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(0);
    return;
  }
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_10072ef30;
  _swift_continuation_init(unaff_x22 + 0x10,0);
  FUN_10072f3a0();
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}



/* Address: 0x10072ef30 | FUN_10072ef30 */

void FUN_10072ef30(void)

{
  _swift_task_switch(FUN_10072ef78,0,0);
  return;
}



/* Address: 0x10072ef78 | FUN_10072ef78 */

void FUN_10072ef78(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  Mutex MVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x98);
  lVar1 = (long)*(long **)(unaff_x22 + 0x90) + *(long *)(**(long **)(unaff_x22 + 0x90) + 0x60);
  _os_unfair_lock_lock(lVar1);
  uVar3 = 0xff;
  FUN_10073244c(0xff,*(undefined8 *)(lVar2 + 0x50),*(undefined8 *)(lVar2 + 0x58));
  MVar4 = Synchronization::Mutex::typeMetadataAccessor();
  lVar2 = lVar1 + *(int *)(MVar4.unknown + 0x1c);
  if ((*(char *)(lVar2 + 0x20) == '\x02') &&
     (*(long *)(lVar2 + 0x18) == 0 && *(long *)(lVar2 + 0x10) == 1)) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  _os_unfair_lock_unlock
            (lVar1,uVar3,PTR___type_metadata_for_Swift_Bool_100eac570,
             PTR___type_metadata_for_Swift_Never_100eadc38,
             PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
                    /* WARNING: Could not recover jumptable at 0x00010072f038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar5);
  return;
}



/* Address: 0x10072f03c | FUN_10072f03c */

/* WARNING: Removing unreachable block (ram,0x00010072f124) */

void FUN_10072f03c(undefined8 param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  Mutex MVar5;
  undefined *puVar6;
  long lVar7;
  long local_50;
  undefined1 local_48;
  
  lVar7 = *param_2;
  lVar1 = (long)param_2 + *(long *)(lVar7 + 0x60);
  _os_unfair_lock_lock(lVar1);
  uVar2 = *(undefined8 *)(lVar7 + 0x50);
  uVar3 = *(undefined8 *)(lVar7 + 0x58);
  uVar4 = 0xff;
  FUN_10073244c(0xff,uVar2,uVar3);
  MVar5 = Synchronization::Mutex::typeMetadataAccessor();
  FUN_10072f14c(&local_50,lVar1 + *(int *)(MVar5.unknown + 0x1c),param_3,param_1,uVar2,uVar3);
  puVar6 = &DAT_100fe0de0;
  FUN_1000f7830(&DAT_100fe0de0,&DAT_100c755a8);
  _os_unfair_lock_unlock
            (lVar1,uVar4,puVar6,PTR___type_metadata_for_Swift_Never_100eadc38,
             PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  if (local_50 != 0) {
    **(undefined1 **)(*(long *)(local_50 + 0x40) + 0x28) = local_48;
    _swift_continuation_resume();
  }
  return;
}



/* Address: 0x10072f14c | FUN_10072f14c */

void FUN_10072f14c(undefined8 *param_1,long param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long local_58;
  
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  uVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_6,param_5,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  FUN_1006035b0(&local_58,FUN_1006035a4,0,uVar3,&DAT_100ef5140,uVar1,
                PTR___type_metadata_for_Swift_Never_100eadc38,
                PTR___type_metadata_for_Swift_Int_100eac6f8,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  if (local_58 < param_3) {
    if (((*(char *)(param_2 + 0x20) == '\x02') && (*(long *)(param_2 + 0x18) == 0)) &&
       (*(long *)(param_2 + 0x10) == 1)) {
      *param_1 = param_4;
      *(undefined1 *)(param_1 + 1) = 1;
    }
    else {
      *param_1 = param_4;
      *(undefined1 *)(param_1 + 1) = 0;
    }
  }
  else {
    lVar2 = 0;
    FUN_10073244c(0,param_5,param_6);
    *(undefined8 *)(param_2 + *(int *)(lVar2 + 0x3c)) = param_4;
    if (((*(char *)(param_2 + 0x20) == '\x02') && (*(long *)(param_2 + 0x18) == 0)) &&
       (*(long *)(param_2 + 0x10) == 1)) {
      *param_1 = 0;
      *(undefined1 *)(param_1 + 1) = 1;
    }
    else {
      *param_1 = 0;
      *(undefined1 *)(param_1 + 1) = 0;
    }
  }
  return;
}



/* Address: 0x10072f29c | FUN_10072f29c */

void FUN_10072f29c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  UnownedSerialExecutor UVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = param_4;
  *(undefined8 *)(unaff_x22 + 0x60) = param_5;
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
  if (param_2 == 0) {
    UVar1.unknown = (undefined *)0x0;
    param_3 = 0;
  }
  else {
    _swift_getObjectType(param_2);
    UVar1 = Swift::Actor::get_unownedExecutor();
  }
  _swift_task_switch(FUN_10072f30c,UVar1.unknown,param_3);
  return;
}



/* Address: 0x10072f30c | FUN_10072f30c */

void FUN_10072f30c(void)

{
  code *pcVar1;
  long unaff_x22;
  
  pcVar1 = *(code **)(unaff_x22 + 0x58);
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x50);
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_10072f364;
  _swift_continuation_init(unaff_x22 + 0x10,0);
  (*pcVar1)();
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}



/* Address: 0x10072f364 | FUN_10072f364 */

void FUN_10072f364(void)

{
  long *unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010072f39c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x22 + 8))();
  return;
}



/* Address: 0x10072f3a0 | FUN_10072f3a0 */

void FUN_10072f3a0(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  Mutex MVar5;
  long lVar6;
  char local_41;
  
  lVar6 = *param_2;
  lVar1 = (long)param_2 + *(long *)(lVar6 + 0x60);
  _os_unfair_lock_lock(lVar1);
  uVar2 = *(undefined8 *)(lVar6 + 0x50);
  uVar3 = *(undefined8 *)(lVar6 + 0x58);
  uVar4 = 0xff;
  FUN_10073244c(0xff,uVar2,uVar3);
  MVar5 = Synchronization::Mutex::typeMetadataAccessor();
  FUN_10072f464(&local_41,lVar1 + *(int *)(MVar5.unknown + 0x1c),param_1,uVar2,uVar3);
  _os_unfair_lock_unlock
            (lVar1,uVar4,PTR___type_metadata_for_Swift_Bool_100eac570,
             PTR___type_metadata_for_Swift_Never_100eadc38,
             PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  if (local_41 == '\x01') {
    _swift_continuation_throwingResume(param_1);
  }
  return;
}



/* Address: 0x10072f464 | FUN_10072f464 */

void FUN_10072f464(undefined1 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  _NativeDictionary<undefined,undefined> _Var4;
  UnsafeMutablePointer<undefined> UVar5;
  long lVar6;
  undefined1 uVar7;
  __RawDictionaryStorage *p_Var8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auStack_b8 [40];
  _NativeDictionary local_90;
  long lStack_88;
  long local_80;
  long lStack_78;
  ulong local_70;
  
  p_Var8 = *(__RawDictionaryStorage **)(param_2 + 8);
  FUN_100733d64(0,param_4,param_5);
  _swift_bridgeObjectRetain();
  _Var4 = Swift::_NativeDictionary::init(p_Var8);
  Swift::_NativeDictionary::_makeIterator((_NativeDictionary)_Var4.unknown);
  Swift::Dictionary::Iterator::_init((Iterator)auStack_b8);
  lVar6 = lStack_78;
  uVar10 = local_70;
  do {
    while (lVar9 = lStack_78, uVar11 = local_70, uVar10 != 0) {
      uVar2 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
      uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 - 1 & uVar10;
      Swift::_NativeDictionary::get__keys(local_90);
      UVar5 = Swift::_NativeDictionary::get__values(local_90);
      local_70 = uVar10;
      lStack_78 = lVar6;
      if (*(long *)(UVar5.unknown + lVar6 * 0x400 + LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) * 0x10)
          != 0) {
        FUN_10000c650(local_90.unknown,lStack_88,local_80,lVar9,uVar11);
        uVar7 = 1;
LAB_10072f5ec:
        *param_1 = uVar7;
        return;
      }
    }
    lVar1 = lVar6 + 1;
    if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10072f638);
      (*pcVar3)();
    }
    if ((long)(local_80 + 0x40U >> 6) <= lVar1) {
      FUN_10000c650(local_90.unknown,lStack_88,local_80,lVar9,0);
      lVar6 = 0;
      FUN_10073244c(0,param_4,param_5);
      uVar7 = 0;
      *(undefined8 *)(param_2 + *(int *)(lVar6 + 0x40)) = param_3;
      goto LAB_10072f5ec;
    }
    lVar6 = lVar1;
    uVar10 = *(ulong *)(lStack_88 + lVar1 * 8);
    local_70 = uVar11;
    lStack_78 = lVar9;
  } while( true );
}



/* Address: 0x10072f638 | FUN_10072f638 */

void FUN_10072f638(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  Result RVar3;
  undefined8 uVar4;
  undefined7 extraout_var;
  long lVar6;
  undefined8 *unaff_x20;
  undefined8 uVar7;
  long lVar5;
  
  puVar2 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _swift_getAssociatedTypeWitness
            (0xff,uVar1,uVar7,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  Swift::Optional::typeMetadataAccessor();
  _swift_getAssociatedTypeWitness
            (0xff,uVar1,uVar7,puVar2,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Failure_100eaeae0);
  uVar4 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar1,uVar7,puVar2,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  _swift_getAssociatedConformanceWitness
            (uVar1,uVar7,uVar4,puVar2,
             PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
            );
  _swift_getAssociatedConformanceWitness();
  RVar3 = Swift::Result::typeMetadataAccessor();
  lVar5 = CONCAT71(extraout_var,RVar3.value);
  lVar6 = *(long *)(*(long *)(lVar5 + -8) + 0x40);
  uVar7 = *unaff_x20;
  (**(code **)(*(long *)(lVar5 + -8) + 0x10))
            (&stack0xffffffffffffffb0 + -(lVar6 + 0xfU & 0xfffffffffffffff0),
             (long)unaff_x20 + (long)*(int *)(param_1 + 0x24),lVar5);
  FUN_10072e9c0(&stack0xffffffffffffffb0 + -(lVar6 + 0xfU & 0xfffffffffffffff0),uVar7,lVar5);
  return;
}



/* Address: 0x10072f780 | FUN_10072f780 */

void FUN_10072f780(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined *puVar2;
  Result RVar3;
  long lVar4;
  undefined8 uVar5;
  undefined7 extraout_var;
  
  *param_1 = param_2;
  lVar4 = 0;
  FUN_100733d58(0,param_4,param_5);
  puVar2 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  iVar1 = *(int *)(lVar4 + 0x24);
  _swift_getAssociatedTypeWitness
            (0xff,param_5,param_4,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  Swift::Optional::typeMetadataAccessor();
  _swift_getAssociatedTypeWitness
            (0xff,param_5,param_4,puVar2,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Failure_100eaeae0);
  uVar5 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,param_5,param_4,puVar2,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  _swift_getAssociatedConformanceWitness
            (param_5,param_4,uVar5,puVar2,
             PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
            );
  _swift_getAssociatedConformanceWitness();
  RVar3 = Swift::Result::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x00010072f8b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(CONCAT71(extraout_var,RVar3.value) + -8) + 0x20))
            ((long)param_1 + (long)iVar1,param_3,CONCAT71(extraout_var,RVar3.value));
  return;
}



/* Address: 0x10072f8b4 | FUN_10072f8b4 */

/* WARNING: Removing unreachable block (ram,0x00010072fabc) */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010072fa24 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10072f8b4(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  Mutex MVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  __int64 _Var10;
  ulong uVar11;
  long *unaff_x20;
  undefined1 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined1 auStack_b0 [8];
  undefined8 local_a8;
  undefined *local_a0;
  undefined *local_98;
  undefined *puStack_90;
  undefined8 local_80;
  long lStack_78;
  long local_70;
  undefined1 local_68;
  
  lVar14 = *unaff_x20;
  uVar7 = *(undefined8 *)(lVar14 + 0x50);
  uVar2 = *(undefined8 *)(lVar14 + 0x58);
  lVar4 = 0;
  FUN_100733d58(0,uVar7,uVar2);
  lVar15 = *(long *)(lVar4 + -8);
  uVar11 = *(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar12 = auStack_b0 + -uVar11;
  lVar13 = (long)puVar12 - uVar11;
  lVar14 = (long)unaff_x20 + *(long *)(lVar14 + 0x60);
  _os_unfair_lock_lock(lVar14);
  uVar5 = 0xff;
  FUN_10073244c(0xff,uVar7,uVar2);
  MVar6 = Synchronization::Mutex::typeMetadataAccessor();
  FUN_10072fb3c(&local_80,lVar14 + *(int *)(MVar6.unknown + 0x1c),param_1);
  uVar7 = 0xff;
  Swift::Array<undefined>::typeMetadataAccessor();
  puVar8 = &DAT_100fe0dd0;
  local_a8 = uVar7;
  FUN_1000f8b08(&DAT_100fe0dd0,&DAT_100c75598);
  puVar9 = &DAT_100fe0dd8;
  local_a0 = puVar8;
  FUN_1000f8b08(&DAT_100fe0dd8,&DAT_100c755a0);
  puStack_90 = PTR___type_metadata_for_Swift_Bool_100eac570;
  uVar7 = 0;
  local_98 = puVar9;
  _swift_getTupleTypeMetadata(0,4,&local_a8,0,0);
  _os_unfair_lock_unlock
            (lVar14,uVar5,uVar7,PTR___type_metadata_for_Swift_Never_100eadc38,
             PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  if (lStack_78 != 0) {
    **(undefined1 **)(*(long *)(lStack_78 + 0x40) + 0x28) = local_68;
    _swift_continuation_resume();
  }
  if (local_70 != 0) {
    _swift_continuation_throwingResume(local_70);
  }
  _Var10 = Swift::Array<undefined>::get_endIndex(uVar7,lVar4);
  if (_Var10 != 0) {
    lVar14 = 0;
    do {
      Swift::Array<undefined>::get_subscript(lVar13,lVar14,local_80,lVar4);
      lVar1 = lVar14 + 1;
      if (SCARRY8(lVar14,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10072fabc);
        (*pcVar3)();
      }
      (**(code **)(lVar15 + 0x20))(puVar12,lVar13,lVar4);
      FUN_10072f638(lVar4);
      (**(code **)(lVar15 + 8))(puVar12,lVar4);
      _Var10 = Swift::Array<undefined>::get_endIndex(_Var10,lVar4);
      lVar14 = lVar14 + 1;
    } while (lVar1 != _Var10);
  }
  _swift_bridgeObjectRelease(local_80);
  return;
}



/* Address: 0x10072fb3c | FUN_10072fb3c */

void FUN_10072fb3c(long param_1,long param_2,long param_3,long *param_4)

{
  undefined8 *puVar1;
  char cVar2;
  Dictionary *pDVar3;
  _NativeDictionary _Var4;
  code *pcVar5;
  Optional OVar6;
  Result RVar7;
  long lVar8;
  undefined7 extraout_var;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined7 extraout_var_01;
  long lVar14;
  _NativeDictionary<undefined,undefined> _Var15;
  UnsafeMutablePointer<undefined> UVar16;
  Dictionary DVar17;
  long *plVar18;
  byte bVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  __RawDictionaryStorage *p_Var24;
  ulong uVar25;
  long lVar26;
  undefined8 uVar27;
  undefined *puVar28;
  long lVar29;
  long local_1b0;
  long local_1a8;
  long local_1a0;
  long local_198;
  long local_190;
  long local_188;
  long *local_180;
  long local_178;
  long local_170;
  long local_168;
  long local_160;
  Dictionary *local_158;
  long local_150;
  long local_148;
  long local_140;
  long local_138;
  long local_130;
  long local_128;
  long local_120;
  undefined8 local_118;
  undefined8 local_110;
  long local_108;
  _NativeDictionary local_100;
  long local_f8;
  long local_e8;
  long local_e0 [4];
  long local_c0;
  undefined1 local_b8 [40];
  undefined *local_90;
  long lStack_88;
  long local_80;
  long lStack_78;
  ulong local_70;
  long local_58;
  long lVar13;
  undefined7 extraout_var_00;
  
  puVar28 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar27 = *(undefined8 *)(*param_4 + 0x50);
  uVar23 = *(undefined8 *)(*param_4 + 0x58);
  lVar8 = 0xff;
  local_180 = param_4;
  local_178 = param_1;
  local_168 = param_2;
  local_f8 = param_3;
  _swift_getAssociatedTypeWitness
            (0xff,uVar23,uVar27,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Failure_100eaeae0);
  OVar6 = Swift::Optional::typeMetadataAccessor();
  local_198 = CONCAT71(extraout_var,OVar6.value);
  local_1a0 = *(long *)(local_198 + -8);
  lVar13 = (long)&local_1b0 - (*(long *)(local_1a0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = 0;
  local_1a8 = lVar13;
  FUN_100733d58(0,uVar27,uVar23);
  local_140 = lVar13 - (*(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_160 = *(long *)(lVar8 + -8);
  uVar20 = *(long *)(local_160 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_1b0 = local_140 - uVar20;
  lVar21 = local_1b0 - uVar20;
  lVar10 = 0;
  local_130 = lVar21;
  _swift_getAssociatedTypeWitness
            (0,uVar23,uVar27,puVar28,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  local_138 = *(long *)(lVar10 + -8);
  lVar21 = lVar21 - (*(long *)(local_138 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_158 = (Dictionary *)lVar21;
  OVar6 = Swift::Optional::typeMetadataAccessor();
  lVar11 = CONCAT71(extraout_var_00,OVar6.value);
  local_108 = *(long *)(lVar11 + -8);
  uVar20 = *(long *)(local_108 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar21 = lVar21 - uVar20;
  lVar22 = lVar21 - uVar20;
  uVar12 = 0xff;
  local_100.unknown = (undefined *)lVar22;
  _swift_getAssociatedTypeWitness
            (0xff,uVar23,uVar27,puVar28,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  _swift_getAssociatedConformanceWitness
            (uVar23,uVar27,uVar12,puVar28,
             PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
            );
  _swift_getAssociatedConformanceWitness();
  RVar7 = Swift::Result::typeMetadataAccessor();
  lVar13 = CONCAT71(extraout_var_01,RVar7.value);
  lVar26 = *(long *)(lVar13 + -8);
  uVar20 = *(long *)(lVar26 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_150 = lVar22 - uVar20;
  lVar29 = local_150 - uVar20;
  local_128 = lVar9;
  Swift::Array<undefined>::init();
  lVar22 = local_160;
  local_58 = lVar9;
  (**(code **)(lVar26 + 0x10))(lVar29,local_f8,lVar13);
  lVar14 = lVar29;
  local_148 = lVar13;
  _swift_getEnumCaseMultiPayload(lVar29,lVar13);
  _Var4.unknown = local_100.unknown;
  lVar26 = local_108;
  lVar9 = local_130;
  lVar13 = local_168;
  local_190 = lVar8;
  local_120 = lVar10;
  local_118 = uVar27;
  local_110 = uVar23;
  if ((int)lVar14 == 1) {
    (**(code **)(lVar22 + 0x20))(local_130,lVar29,lVar8);
    uVar12 = 0;
    FUN_10073244c(0,uVar27,uVar23);
    lVar13 = local_168;
    FUN_10072e338(lVar9,uVar12);
    (**(code **)(lVar22 + 8))(lVar9,lVar8);
  }
  else {
    (**(code **)(local_108 + 0x20))(local_100.unknown,lVar29,lVar11);
    (**(code **)(lVar26 + 0x10))(lVar21,_Var4.unknown,lVar11);
    lVar22 = local_138;
    lVar9 = lVar21;
    (**(code **)(local_138 + 0x30))(lVar21,1,lVar10);
    pDVar3 = local_158;
    if ((int)lVar9 == 1) {
      pcVar5 = *(code **)(lVar26 + 8);
      (*pcVar5)(local_100.unknown,lVar11);
      (*pcVar5)(lVar21,lVar11);
      *(undefined1 *)(lVar13 + 0x30) = 1;
      uVar23 = local_110;
      uVar27 = local_118;
    }
    else {
      (**(code **)(lVar22 + 0x20))(local_158,lVar21,lVar10);
      uVar23 = local_110;
      uVar27 = local_118;
      uVar12 = 0;
      FUN_10073244c(0,local_118,local_110);
      FUN_10072e1ec(pDVar3,uVar12);
      (**(code **)(lVar22 + 8))(pDVar3,lVar10);
      (**(code **)(lVar26 + 8))(local_100.unknown,lVar11);
    }
  }
  local_158 = (Dictionary *)(lVar13 + 8);
  p_Var24 = (__RawDictionaryStorage *)local_158->unknown;
  uVar12 = 0;
  FUN_100733d64(0,uVar27,uVar23);
  _swift_bridgeObjectRetain();
  puVar28 = PTR___type_metadata_for_Swift_Int_100eac6f8;
  _Var15 = Swift::_NativeDictionary::init(p_Var24);
  Swift::_NativeDictionary::_makeIterator((_NativeDictionary)_Var15.unknown);
  Swift::Dictionary::Iterator::_init((Iterator)local_b8);
  local_100.unknown = local_90;
  local_e8 = lStack_78;
  local_188 = local_80;
  local_170 = lStack_88;
  uVar20 = local_70;
  lVar22 = lStack_78;
  local_130 = uVar12;
  lVar9 = lStack_88;
  while( true ) {
    while (_Var4.unknown = local_100.unknown, uVar20 != 0) {
      uVar25 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
      uVar25 = (uVar25 & 0xcccccccccccccccc) >> 2 | (uVar25 & 0x3333333333333333) << 2;
      uVar25 = (uVar25 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar25 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar25 = (uVar25 & 0xff00ff00ff00ff00) >> 8 | (uVar25 & 0xff00ff00ff00ff) << 8;
      uVar25 = (uVar25 & 0xffff0000ffff0000) >> 0x10 | (uVar25 & 0xffff0000ffff) << 0x10;
      uVar20 = uVar20 - 1 & uVar20;
      uVar25 = LZCOUNT(uVar25 >> 0x20 | uVar25 << 0x20) | lVar22 << 6;
      UVar16 = Swift::_NativeDictionary::get__keys(local_100);
      local_f8 = *(long *)(UVar16.unknown + uVar25 * 8);
      UVar16 = Swift::_NativeDictionary::get__values(_Var4);
      lVar26 = local_120;
      local_108 = *(long *)(UVar16.unknown + uVar25 * 0x10);
      local_e8 = lVar22;
      if (local_108 != 0) {
        lVar8 = *(long *)((long)(UVar16.unknown + uVar25 * 0x10) + 8);
        uVar27 = *(undefined8 *)(lVar13 + 0x28);
        FUN_1006035b0(local_e0,FUN_1006035a4,0,uVar27,&DAT_100ef5140,local_120,
                      PTR___type_metadata_for_Swift_Never_100eadc38,puVar28,
                      PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40)
        ;
        lVar14 = local_150;
        if (lVar8 < local_e0[0]) {
          FUN_10067ab2c(local_150,lVar8,uVar27,lVar26);
          (**(code **)(local_138 + 0x38))(lVar14,0,1,lVar26);
          _swift_storeEnumTagMultiPayload(lVar14,local_148,0);
          lVar9 = local_140;
          pDVar3 = local_158;
          FUN_10072f780(local_140,local_108,lVar14,local_118,local_110);
          uVar27 = 0;
          Swift::Array<undefined>::typeMetadataAccessor();
          Swift::Array<undefined>::append(lVar9,uVar27);
          lVar9 = local_f8;
          local_c0 = local_f8;
          DVar17 = Swift::Dictionary::typeMetadataAccessor();
          pcVar5 = (code *)local_e0;
          plVar18 = &local_c0;
          Swift::Dictionary::_modify_subscript(pDVar3,pcVar5,plVar18,DVar17.unknown);
          if (*plVar18 != 1) {
            if (SCARRY8(plVar18[1],1)) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x10073054c);
              (*pcVar5)();
            }
            plVar18[1] = plVar18[1] + 1;
            lVar9 = local_f8;
          }
          (*pcVar5)(local_e0,0);
          pcVar5 = (code *)local_e0;
          plVar18 = &local_c0;
          local_c0 = lVar9;
          Swift::Dictionary::_modify_subscript(pDVar3,pcVar5,plVar18,DVar17.unknown);
          if (*plVar18 != 1) {
            *plVar18 = 0;
          }
          (*pcVar5)(local_e0,0);
          lVar9 = local_170;
        }
        else if (*(char *)(lVar13 + 0x30) == '\x01') {
          local_c0 = local_f8;
          DVar17 = Swift::Dictionary::typeMetadataAccessor();
          pcVar5 = (code *)local_e0;
          plVar18 = &local_c0;
          Swift::Dictionary::_modify_subscript(local_158,pcVar5,plVar18,DVar17.unknown);
          if (*plVar18 != 1) {
            *plVar18 = 0;
          }
          (*pcVar5)(local_e0,0);
          lVar10 = 0;
          FUN_10073244c(0,local_118,local_110);
          lVar8 = local_198;
          lVar14 = local_1a0;
          lVar26 = local_1a8;
          (**(code **)(local_1a0 + 0x10))(local_1a8,lVar13 + *(int *)(lVar10 + 0x34),local_198);
          lVar11 = local_160;
          lVar10 = local_190;
          lVar21 = lVar26;
          (**(code **)(local_160 + 0x30))(lVar26,1,local_190);
          lVar13 = local_1b0;
          if ((int)lVar21 == 1) {
            (**(code **)(lVar14 + 8))(lVar26,lVar8);
            lVar13 = local_150;
            (**(code **)(local_138 + 0x38))(local_150,1,1,local_120);
            _swift_storeEnumTagMultiPayload(lVar13,local_148,0);
            lVar26 = local_140;
            FUN_10072f780(local_140,local_108,lVar13,local_118,local_110);
            uVar27 = 0;
            Swift::Array<undefined>::typeMetadataAccessor();
            Swift::Array<undefined>::append(lVar26,uVar27);
            puVar28 = PTR___type_metadata_for_Swift_Int_100eac6f8;
            lVar13 = local_168;
          }
          else {
            (**(code **)(lVar11 + 0x20))(local_1b0,lVar26,lVar10);
            lVar26 = local_150;
            (**(code **)(lVar11 + 0x10))(local_150,lVar13,lVar10);
            _swift_storeEnumTagMultiPayload(lVar26,local_148,1);
            lVar14 = local_140;
            FUN_10072f780(local_140,local_108,lVar26,local_118,local_110);
            uVar27 = 0;
            Swift::Array<undefined>::typeMetadataAccessor();
            Swift::Array<undefined>::append(lVar14,uVar27);
            (**(code **)(lVar11 + 8))(lVar13,lVar10);
            puVar28 = PTR___type_metadata_for_Swift_Int_100eac6f8;
            lVar13 = local_168;
          }
        }
      }
    }
    lVar26 = lVar22 + 1;
    if (SCARRY8(lVar22,1)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100730548);
      (*pcVar5)();
    }
    if ((long)(local_80 + 0x40U >> 6) <= lVar26) break;
    uVar20 = *(ulong *)(lVar9 + lVar26 * 8);
    lVar22 = lVar26;
  }
  FUN_10000c650(local_100.unknown,lVar9,local_188,local_e8,0);
  FUN_10073244c(0,local_118,local_110);
  FUN_10072de40();
  puVar1 = (undefined8 *)((long)local_180 + *(long *)(*local_180 + 0x68));
  uVar27 = *puVar1;
  cVar2 = *(char *)(puVar1 + 1);
  Swift::Array<undefined>::typeMetadataAccessor();
  lVar13 = local_178;
  bVar19 = 0xff;
  if (cVar2 != '\x01') {
    bVar19 = (byte)uVar27;
  }
  plVar18 = &local_58;
  lVar22 = local_178;
  FUN_10072e020();
  _swift_bridgeObjectRelease(local_58);
  *(long *)(lVar13 + 8) = lVar22;
  *(long **)(lVar13 + 0x10) = plVar18;
  *(byte *)(lVar13 + 0x18) = bVar19 & 1;
  return;
}



/* Address: 0x10073054c | FUN_10073054c */

void FUN_10073054c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = param_2;
  *(undefined8 **)(unaff_x22 + 0x60) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
  *(undefined8 *)(unaff_x22 + 0x68) = *unaff_x20;
  _swift_task_switch(FUN_100730570,0,0);
  return;
}



/* Address: 0x100730570 | FUN_100730570 */

void FUN_100730570(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  Result RVar5;
  long *plVar6;
  undefined8 uVar7;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x68);
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x60);
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x58);
  *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0x60);
  *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(unaff_x22 + 0x58);
  plVar6 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x70) = plVar6;
  puVar4 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar1 = *(undefined8 *)(lVar2 + 0x50);
  uVar3 = *(undefined8 *)(lVar2 + 0x58);
  _swift_getAssociatedTypeWitness
            (0xff,uVar3,uVar1,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  Swift::Optional::typeMetadataAccessor();
  _swift_getAssociatedTypeWitness
            (0xff,uVar3,uVar1,puVar4,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Failure_100eaeae0);
  uVar7 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar3,uVar1,puVar4,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  _swift_getAssociatedConformanceWitness
            (uVar3,uVar1,uVar7,puVar4,
             PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
            );
  _swift_getAssociatedConformanceWitness();
  RVar5 = Swift::Result::typeMetadataAccessor();
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_1007306e8;
  FUN_1007aae80(*(undefined8 *)(unaff_x22 + 0x50),&UNK_100c755c8,unaff_x22 + 0x10,FUN_100733dfc,
                unaff_x22 + 0x30,0,0,RVar5.value);
  return;
}



/* Address: 0x1007306e8 | FUN_1007306e8 */

void FUN_1007306e8(void)

{
  long unaff_x20;
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x70));
  if (unaff_x20 != 0) {
    _swift_errorRelease();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100730740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Address: 0x100730744 | FUN_100730744 */

void FUN_100730744(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 **)(unaff_x22 + 0x38) = param_2;
  *(undefined8 *)(unaff_x22 + 0x40) = param_3;
  *(undefined8 *)(unaff_x22 + 0x30) = param_1;
  *(undefined8 *)(unaff_x22 + 0x48) = *param_2;
  _swift_task_switch(FUN_100730768,0,0);
  return;
}



/* Address: 0x100730768 | FUN_100730768 */

void FUN_100730768(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  Result RVar5;
  long *plVar6;
  undefined8 uVar7;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x48);
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x38);
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x40);
  plVar6 = (long *)0x70;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x50) = plVar6;
  puVar4 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar1 = *(undefined8 *)(lVar2 + 0x50);
  uVar3 = *(undefined8 *)(lVar2 + 0x58);
  _swift_getAssociatedTypeWitness
            (0xff,uVar3,uVar1,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  Swift::Optional::typeMetadataAccessor();
  _swift_getAssociatedTypeWitness
            (0xff,uVar3,uVar1,puVar4,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Failure_100eaeae0);
  uVar7 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar3,uVar1,puVar4,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  _swift_getAssociatedConformanceWitness
            (uVar3,uVar1,uVar7,puVar4,
             PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
            );
  _swift_getAssociatedConformanceWitness();
  RVar5 = Swift::Result::typeMetadataAccessor();
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_1007308d0;
  FUN_10072f29c(*(undefined8 *)(unaff_x22 + 0x30),0,0,FUN_100733e40,unaff_x22 + 0x10,RVar5.value);
  return;
}



/* Address: 0x1007308d0 | FUN_1007308d0 */

void FUN_1007308d0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x000100730914. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Address: 0x100730918 | FUN_100730918 */

void FUN_100730918(undefined8 param_1,long *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  long *plVar4;
  Result RVar5;
  Optional OVar6;
  undefined8 uVar7;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 uVar13;
  Mutex MVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  code *pcVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long local_c0 [3];
  long *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  long local_90;
  long local_80;
  undefined *local_78;
  undefined *local_70;
  undefined *puStack_68;
  long lVar8;
  long lVar9;
  
  puVar10 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  lVar19 = *param_2;
  uVar1 = *(undefined8 *)(lVar19 + 0x50);
  uVar2 = *(undefined8 *)(lVar19 + 0x58);
  local_a8 = param_2;
  local_a0 = param_1;
  local_98 = param_3;
  _swift_getAssociatedTypeWitness
            (0xff,uVar2,uVar1,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  Swift::Optional::typeMetadataAccessor();
  _swift_getAssociatedTypeWitness
            (0xff,uVar2,uVar1,puVar10,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Failure_100eaeae0);
  uVar7 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar2,uVar1,puVar10,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  _swift_getAssociatedConformanceWitness
            (uVar2,uVar1,uVar7,puVar10,
             PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
            );
  _swift_getAssociatedConformanceWitness();
  RVar5 = Swift::Result::typeMetadataAccessor();
  lVar8 = CONCAT71(extraout_var,RVar5.value);
  local_90 = *(long *)(lVar8 + -8);
  uVar15 = *(long *)(local_90 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_c0[0] = (long)local_c0 - uVar15;
  lVar16 = local_c0[0] - uVar15;
  local_c0[1] = lVar16;
  OVar6 = Swift::Optional::typeMetadataAccessor();
  lVar9 = CONCAT71(extraout_var_00,OVar6.value);
  local_c0[2] = *(long *)(lVar9 + -8);
  uVar15 = *(long *)(local_c0[2] + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar16 = lVar16 - uVar15;
  lVar22 = lVar16 - uVar15;
  puVar10 = &DAT_100fe0dd0;
  local_80 = lVar9;
  FUN_1000f8b08(&DAT_100fe0dd0,&DAT_100c75598);
  puVar11 = &DAT_100fe0dd8;
  local_78 = puVar10;
  FUN_1000f8b08(&DAT_100fe0dd8,&DAT_100c755a0);
  puStack_68 = PTR___type_metadata_for_Swift_Bool_100eac570;
  lVar12 = 0;
  local_70 = puVar11;
  _swift_getTupleTypeMetadata(0,4,&local_80,0,0);
  plVar4 = local_a8;
  lVar21 = lVar22 - (*(long *)(*(long *)(lVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar19 = (long)local_a8 + *(long *)(lVar19 + 0x60);
  _os_unfair_lock_lock(lVar19);
  uVar7 = local_a0;
  uVar13 = 0xff;
  FUN_10073244c(0xff,uVar1,uVar2);
  MVar14 = Synchronization::Mutex::typeMetadataAccessor();
  FUN_100730c90(lVar21,lVar19 + *(int *)(MVar14.unknown + 0x1c),local_98,plVar4,uVar7);
  _os_unfair_lock_unlock
            (lVar19,uVar13,lVar12,PTR___type_metadata_for_Swift_Never_100eadc38,
             PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  lVar19 = local_c0[2];
  lVar20 = *(long *)(lVar21 + *(int *)(lVar12 + 0x30));
  lVar17 = *(long *)(lVar21 + *(int *)(lVar12 + 0x40));
  uVar3 = *(undefined1 *)(lVar21 + *(int *)(lVar12 + 0x50));
  (**(code **)(local_c0[2] + 0x20))(lVar22,lVar21,lVar9);
  if (lVar20 != 0) {
    **(undefined1 **)(*(long *)(lVar20 + 0x40) + 0x28) = uVar3;
    _swift_continuation_resume(lVar20);
  }
  if (lVar17 != 0) {
    _swift_continuation_throwingResume(lVar17);
  }
  (**(code **)(lVar19 + 0x10))(lVar16,lVar22,lVar9);
  lVar17 = local_90;
  lVar20 = lVar16;
  (**(code **)(local_90 + 0x30))(lVar16,1,lVar8);
  lVar12 = local_c0[1];
  if ((int)lVar20 == 1) {
    pcVar18 = *(code **)(lVar19 + 8);
    (*pcVar18)(lVar22,lVar9);
    (*pcVar18)(lVar16,lVar9);
  }
  else {
    (**(code **)(lVar17 + 0x20))(local_c0[1],lVar16,lVar8);
    lVar16 = local_c0[0];
    (**(code **)(lVar17 + 0x10))(local_c0[0],lVar12,lVar8);
    FUN_10072e9c0(lVar16,uVar7,lVar8);
    (**(code **)(lVar17 + 8))(lVar12,lVar8);
    (**(code **)(lVar19 + 8))(lVar22,lVar9);
  }
  return;
}



/* Address: 0x100730c90 | FUN_100730c90 */

void FUN_100730c90(long param_1,long param_2,long param_3,long *param_4,long param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  long lVar9;
  code *pcVar10;
  Optional OVar11;
  Result RVar12;
  long lVar13;
  undefined7 extraout_var;
  long lVar14;
  undefined8 uVar15;
  undefined7 extraout_var_00;
  undefined7 extraout_var_01;
  long lVar16;
  undefined1 *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long *plVar23;
  byte bVar24;
  long lVar25;
  undefined8 uVar26;
  undefined1 auStack_120 [8];
  long local_118;
  long local_110;
  long local_108;
  long local_100;
  long local_f8;
  long local_f0;
  undefined1 *local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long *local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_88;
  undefined *local_80;
  undefined *local_78;
  undefined *puStack_70;
  long local_58;
  
  puVar18 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar2 = *(undefined8 *)(*param_4 + 0x50);
  uVar3 = *(undefined8 *)(*param_4 + 0x58);
  lVar13 = 0xff;
  local_100 = param_5;
  local_b0 = param_4;
  local_a8 = param_1;
  local_98 = param_3;
  _swift_getAssociatedTypeWitness
            (0xff,uVar3,uVar2,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Failure_100eaeae0);
  OVar11 = Swift::Optional::typeMetadataAccessor();
  local_e0 = CONCAT71(extraout_var,OVar11.value);
  local_f0 = *(long *)(local_e0 + -8);
  local_e8 = auStack_120 + -(*(long *)(local_f0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_d0 = *(long *)(lVar13 + -8);
  lVar25 = (long)local_e8 - (*(long *)(local_d0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = 0;
  local_f8 = lVar25;
  _swift_getAssociatedTypeWitness
            (0,uVar3,uVar2,puVar18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  local_c0 = *(long *)(lVar14 + -8);
  lVar25 = lVar25 - (*(long *)(local_c0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_c8 = lVar25;
  Swift::Optional::typeMetadataAccessor();
  uVar15 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar3,uVar2,puVar18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  _swift_getAssociatedConformanceWitness
            (uVar3,uVar2,uVar15,puVar18,
             PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
            );
  _swift_getAssociatedConformanceWitness();
  local_d8 = lVar13;
  RVar12 = Swift::Result::typeMetadataAccessor();
  lVar16 = CONCAT71(extraout_var_00,RVar12.value);
  OVar11 = Swift::Optional::typeMetadataAccessor();
  lVar20 = CONCAT71(extraout_var_01,OVar11.value);
  local_b8 = *(long *)(lVar20 + -8);
  lVar25 = lVar25 - (*(long *)(local_b8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar26 = *(undefined8 *)(param_2 + 8);
  local_58 = local_98;
  uVar15 = 0;
  local_a0 = param_2;
  FUN_100733d64(0,uVar2,uVar3);
  Swift::Dictionary::_get_subscript
            (&local_88,&local_58,uVar26,PTR___type_metadata_for_Swift_Int_100eac6f8,uVar15,
             PTR___protocol_witness_table_for_Swift_Int___Swift_Hashable_in_Swift_100eac708);
  lVar13 = local_a0;
  if (local_88 == 1) {
    puVar18 = &DAT_100fe0dd0;
    local_88 = lVar20;
    FUN_1000f8b08(&DAT_100fe0dd0,&DAT_100c75598);
    puVar19 = &DAT_100fe0dd8;
    local_80 = puVar18;
    FUN_1000f8b08(&DAT_100fe0dd8,&DAT_100c755a0);
    puStack_70 = PTR___type_metadata_for_Swift_Bool_100eac570;
    lVar13 = 0;
    local_78 = puVar19;
    _swift_getTupleTypeMetadata(0,4,&local_88,0,0);
    iVar5 = *(int *)(lVar13 + 0x30);
    local_98 = (long)*(int *)(lVar13 + 0x40);
    iVar6 = *(int *)(lVar13 + 0x50);
    (**(code **)(local_c0 + 0x38))(lVar25,1,1,lVar14);
    _swift_storeEnumTagMultiPayload(lVar25,lVar16,0);
    (**(code **)(*(long *)(lVar16 + -8) + 0x38))(lVar25,0,1,lVar16);
    puVar1 = (undefined8 *)((long)local_b0 + *(long *)(*local_b0 + 0x68));
    uVar15 = *puVar1;
    cVar4 = *(char *)(puVar1 + 1);
    FUN_10073244c(0,uVar2,uVar3);
    lVar13 = local_a8;
    bVar24 = 0xff;
    if (cVar4 != '\x01') {
      bVar24 = (byte)uVar15;
    }
    lVar14 = local_a8;
    lVar16 = lVar25;
    FUN_10072e020();
    (**(code **)(local_b8 + 8))(lVar25,lVar20);
    *(long *)(lVar13 + iVar5) = lVar14;
    *(long *)(lVar13 + local_98) = lVar16;
    *(byte *)(lVar13 + iVar6) = bVar24 & 1;
  }
  else {
    uVar15 = *(undefined8 *)(local_a0 + 0x28);
    local_118 = lVar16;
    local_110 = lVar25;
    local_108 = lVar20;
    FUN_1006035b0(&local_88,FUN_1006035a4,0,uVar15,&DAT_100ef5140,lVar14,
                  PTR___type_metadata_for_Swift_Never_100eadc38,
                  PTR___type_metadata_for_Swift_Int_100eac6f8,
                  PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
    if ((long)local_80 < local_88) {
      local_d0 = lVar14;
      FUN_10067ab2c(local_c8,local_80,uVar15,lVar14);
      local_58 = local_98;
      Swift::Dictionary::typeMetadataAccessor();
      pcVar10 = (code *)&local_88;
      plVar23 = &local_58;
      Swift::Dictionary::_modify_subscript();
      lVar14 = local_a8;
      lVar13 = local_c0;
      if (*plVar23 != 1) {
        if (SCARRY8(plVar23[1],1)) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x1007316a0);
          (*pcVar10)();
        }
        plVar23[1] = plVar23[1] + 1;
      }
      (*pcVar10)(&local_88,0);
      FUN_10073244c(0,uVar2,uVar3);
      FUN_10072de40();
      lVar25 = local_108;
      local_88 = local_108;
      puVar18 = &DAT_100fe0dd0;
      FUN_1000f8b08(&DAT_100fe0dd0,&DAT_100c75598);
      puVar19 = &DAT_100fe0dd8;
      local_80 = puVar18;
      FUN_1000f8b08(&DAT_100fe0dd8,&DAT_100c755a0);
      puStack_70 = PTR___type_metadata_for_Swift_Bool_100eac570;
      lVar16 = 0;
      local_78 = puVar19;
      _swift_getTupleTypeMetadata(0,4,&local_88,0,0);
      lVar22 = local_c8;
      lVar9 = local_d0;
      lVar20 = local_110;
      local_d8 = (long)*(int *)(lVar16 + 0x30);
      local_e0 = (long)*(int *)(lVar16 + 0x40);
      local_98 = (long)*(int *)(lVar16 + 0x50);
      (**(code **)(lVar13 + 0x10))(local_110,local_c8,local_d0);
      (**(code **)(lVar13 + 0x38))(lVar20,0,1,lVar9);
      lVar16 = local_118;
      _swift_storeEnumTagMultiPayload(lVar20,local_118,0);
      (**(code **)(*(long *)(lVar16 + -8) + 0x38))(lVar20,0,1,lVar16);
      puVar1 = (undefined8 *)((long)local_b0 + *(long *)(*local_b0 + 0x68));
      bVar24 = 0xff;
      if (*(char *)(puVar1 + 1) != '\x01') {
        bVar24 = (byte)*puVar1;
      }
      lVar16 = lVar14;
      lVar21 = lVar20;
      FUN_10072e020();
      (**(code **)(local_b8 + 8))(lVar20,lVar25);
      (**(code **)(lVar13 + 8))(lVar22,lVar9);
      *(long *)(lVar14 + local_d8) = lVar16;
      *(long *)(lVar14 + local_e0) = lVar21;
      *(byte *)(lVar14 + local_98) = bVar24 & 1;
    }
    else {
      lVar16 = 0;
      FUN_10073244c(0,uVar2,uVar3);
      lVar25 = local_e0;
      puVar8 = local_e8;
      lVar20 = local_f0;
      local_c8 = lVar16;
      (**(code **)(local_f0 + 0x10))(local_e8,lVar13 + *(int *)(lVar16 + 0x34),local_e0);
      lVar22 = local_d0;
      lVar9 = local_d8;
      puVar17 = puVar8;
      (**(code **)(local_d0 + 0x30))(puVar8,1,local_d8);
      lVar16 = local_f8;
      if ((int)puVar17 == 1) {
        (**(code **)(lVar20 + 8))(puVar8,lVar25);
        lVar16 = local_108;
        if ((*(byte *)(lVar13 + 0x30) & 1) == 0) {
          local_58 = local_98;
          Swift::Dictionary::typeMetadataAccessor();
          pcVar10 = (code *)&local_88;
          plVar23 = &local_58;
          Swift::Dictionary::_modify_subscript();
          lVar13 = local_a8;
          if (*plVar23 != 1) {
            *plVar23 = local_100;
          }
          (*pcVar10)(&local_88,0);
          lVar16 = local_108;
          local_88 = local_108;
          puVar18 = &DAT_100fe0dd0;
          FUN_1000f8b08(&DAT_100fe0dd0,&DAT_100c75598);
          puVar19 = &DAT_100fe0dd8;
          local_80 = puVar18;
          FUN_1000f8b08(&DAT_100fe0dd8,&DAT_100c755a0);
          puStack_70 = PTR___type_metadata_for_Swift_Bool_100eac570;
          lVar20 = 0;
          local_78 = puVar19;
          _swift_getTupleTypeMetadata(0,4,&local_88,0,0);
          lVar14 = local_110;
          iVar5 = *(int *)(lVar20 + 0x30);
          iVar6 = *(int *)(lVar20 + 0x40);
          iVar7 = *(int *)(lVar20 + 0x50);
          (**(code **)(*(long *)(local_118 + -8) + 0x38))(local_110,1,1);
          puVar1 = (undefined8 *)((long)local_b0 + *(long *)(*local_b0 + 0x68));
          bVar24 = 0xff;
          if (*(char *)(puVar1 + 1) != '\x01') {
            bVar24 = (byte)*puVar1;
          }
          lVar20 = lVar13;
          lVar25 = lVar14;
          FUN_10072e020();
          (**(code **)(local_b8 + 8))(lVar14,lVar16);
          *(long *)(lVar13 + iVar5) = lVar20;
          *(long *)(lVar13 + iVar6) = lVar25;
          *(byte *)(lVar13 + iVar7) = bVar24 & 1;
        }
        else {
          local_88 = local_108;
          puVar18 = &DAT_100fe0dd0;
          FUN_1000f8b08(&DAT_100fe0dd0,&DAT_100c75598);
          puVar19 = &DAT_100fe0dd8;
          local_80 = puVar18;
          FUN_1000f8b08(&DAT_100fe0dd8,&DAT_100c755a0);
          puStack_70 = PTR___type_metadata_for_Swift_Bool_100eac570;
          lVar13 = 0;
          local_78 = puVar19;
          _swift_getTupleTypeMetadata(0,4,&local_88,0,0);
          lVar20 = local_110;
          iVar5 = *(int *)(lVar13 + 0x30);
          iVar6 = *(int *)(lVar13 + 0x40);
          iVar7 = *(int *)(lVar13 + 0x50);
          (**(code **)(local_c0 + 0x38))(local_110,1,1,lVar14);
          lVar13 = local_118;
          _swift_storeEnumTagMultiPayload(lVar20,local_118,0);
          (**(code **)(*(long *)(lVar13 + -8) + 0x38))(lVar20,0,1,lVar13);
          lVar13 = local_a8;
          puVar1 = (undefined8 *)((long)local_b0 + *(long *)(*local_b0 + 0x68));
          bVar24 = 0xff;
          if (*(char *)(puVar1 + 1) != '\x01') {
            bVar24 = (byte)*puVar1;
          }
          lVar14 = local_a8;
          lVar25 = lVar20;
          FUN_10072e020();
          (**(code **)(local_b8 + 8))(lVar20,lVar16);
          *(long *)(lVar13 + iVar5) = lVar14;
          *(long *)(lVar13 + iVar6) = lVar25;
          *(byte *)(lVar13 + iVar7) = bVar24 & 1;
        }
      }
      else {
        (**(code **)(lVar22 + 0x20))(local_f8,puVar8,lVar9);
        lVar20 = local_108;
        local_88 = local_108;
        puVar18 = &DAT_100fe0dd0;
        FUN_1000f8b08(&DAT_100fe0dd0,&DAT_100c75598);
        puVar19 = &DAT_100fe0dd8;
        local_80 = puVar18;
        FUN_1000f8b08(&DAT_100fe0dd8,&DAT_100c755a0);
        puStack_70 = PTR___type_metadata_for_Swift_Bool_100eac570;
        lVar13 = 0;
        local_78 = puVar19;
        _swift_getTupleTypeMetadata(0,4,&local_88,0,0);
        lVar14 = local_110;
        local_c0 = (long)*(int *)(lVar13 + 0x30);
        local_e0 = (long)*(int *)(lVar13 + 0x40);
        local_98 = (long)*(int *)(lVar13 + 0x50);
        (**(code **)(lVar22 + 0x10))(local_110,lVar16,lVar9);
        lVar13 = local_118;
        _swift_storeEnumTagMultiPayload(lVar14,local_118,1);
        (**(code **)(*(long *)(lVar13 + -8) + 0x38))(lVar14,0,1,lVar13);
        lVar13 = local_a8;
        puVar1 = (undefined8 *)((long)local_b0 + *(long *)(*local_b0 + 0x68));
        bVar24 = 0xff;
        if (*(char *)(puVar1 + 1) != '\x01') {
          bVar24 = (byte)*puVar1;
        }
        lVar25 = local_a8;
        lVar22 = lVar14;
        FUN_10072e020();
        (**(code **)(local_b8 + 8))(lVar14,lVar20);
        (**(code **)(local_d0 + 8))(lVar16,lVar9);
        *(long *)(lVar13 + local_c0) = lVar25;
        *(long *)(lVar13 + local_e0) = lVar22;
        *(byte *)(lVar13 + local_98) = bVar24 & 1;
      }
    }
  }
  return;
}



/* Address: 0x1007316a0 | FUN_1007316a0 */

void FUN_1007316a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  Optional OVar3;
  Result RVar4;
  long lVar5;
  undefined7 extraout_var;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined7 extraout_var_00;
  ulong uVar8;
  long lVar9;
  long *unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_2;
  *(long **)(unaff_x22 + 0x28) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  puVar2 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x50);
  uVar7 = *(undefined8 *)(*unaff_x20 + 0x58);
  lVar5 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar7,uVar1,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  *(long *)(unaff_x22 + 0x30) = lVar5;
  OVar3 = Swift::Optional::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x38) = CONCAT71(extraout_var,OVar3.value);
  uVar6 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar7,uVar1,puVar2,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Failure_100eaeae0);
  *(undefined8 *)(unaff_x22 + 0x40) = uVar6;
  uVar6 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar7,uVar1,puVar2,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  _swift_getAssociatedConformanceWitness
            (uVar7,uVar1,uVar6,puVar2,
             PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
            );
  *(undefined8 *)(unaff_x22 + 0x48) = uVar7;
  _swift_getAssociatedConformanceWitness();
  RVar4 = Swift::Result::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x50) = CONCAT71(extraout_var_00,RVar4.value);
  lVar9 = *(long *)(CONCAT71(extraout_var_00,RVar4.value) + -8);
  *(long *)(unaff_x22 + 0x58) = lVar9;
  uVar8 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x60) = uVar8;
  lVar9 = *(long *)(CONCAT71(extraout_var,OVar3.value) + -8);
  *(long *)(unaff_x22 + 0x68) = lVar9;
  uVar8 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x70) = uVar8;
  lVar5 = *(long *)(lVar5 + -8);
  *(long *)(unaff_x22 + 0x78) = lVar5;
  uVar8 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x80) = uVar8;
  lVar5 = 0;
  _swift_checkMetadataState(0,uVar6);
  *(long *)(unaff_x22 + 0x88) = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  *(long *)(unaff_x22 + 0x90) = lVar5;
  uVar8 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x98) = uVar8;
  _swift_task_switch(FUN_10073185c,0,0);
  return;
}



/* Address: 0x10073185c | FUN_10073185c */

void FUN_10073185c(void)

{
  long *plVar1;
  long unaff_x22;
  
  (**(code **)(unaff_x22 + 0x18))(*(undefined8 *)(unaff_x22 + 0x98));
  plVar1 = (long *)0xb0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xa0) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1007318b8;
  FUN_10072edac();
  return;
}



/* Address: 0x1007318b8 | FUN_1007318b8 */

void FUN_1007318b8(undefined1 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined1 *)(lVar1 + 0xc0) = param_1;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0xa0));
  _swift_task_switch(FUN_100731910,0,0);
  return;
}



/* Address: 0x100731910 | FUN_100731910 */

void FUN_100731910(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  if (*(char *)(unaff_x22 + 0xc0) == '\x01') {
    plVar1 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xa8) = plVar1;
    *plVar1 = unaff_x22;
    plVar1[1] = (long)FUN_1007319dc;
    Swift::AsyncIteratorProtocol::_next();
    return;
  }
  (**(code **)(*(long *)(unaff_x22 + 0x90) + 8))
            (*(undefined8 *)(unaff_x22 + 0x98),*(undefined8 *)(unaff_x22 + 0x88));
  uVar3 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x60);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x98));
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0001007319d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1007319dc | FUN_1007319dc */

void FUN_1007319dc(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xb0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xa8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100731a40;
  }
  else {
    pcVar1 = FUN_100731cd0;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100731a40 | FUN_100731a40 */

void FUN_100731a40(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  code *pcVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
  lVar3 = *(long *)(unaff_x22 + 0x78);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar9 = uVar1;
  (**(code **)(lVar3 + 0x30))(uVar1,1,uVar7);
  lVar2 = *(long *)(unaff_x22 + 0x58);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x50);
  if ((int)uVar9 == 1) {
    (**(code **)(*(long *)(unaff_x22 + 0x68) + 8))(uVar1,*(undefined8 *)(unaff_x22 + 0x38));
    (**(code **)(lVar3 + 0x38))(uVar4,1,1,uVar7);
    _swift_storeEnumTagMultiPayload(uVar4,uVar8,0);
    FUN_10072f8b4(uVar4);
    pcVar6 = *(code **)(lVar2 + 8);
    uVar9 = uVar4;
    uVar7 = uVar8;
  }
  else {
    uVar9 = *(undefined8 *)(unaff_x22 + 0x80);
    (**(code **)(lVar3 + 0x20))(uVar9,uVar1,uVar7);
    (**(code **)(lVar3 + 0x10))(uVar4,uVar9,uVar7);
    (**(code **)(lVar3 + 0x38))(uVar4,0,1,uVar7);
    _swift_storeEnumTagMultiPayload(uVar4,uVar8,0);
    FUN_10072f8b4(uVar4);
    (**(code **)(lVar2 + 8))(uVar4,uVar8);
    pcVar6 = *(code **)(lVar3 + 8);
  }
  (*pcVar6)(uVar9,uVar7);
  plVar5 = (long *)0xb0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xb8) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_100731bac;
  FUN_10072edac();
  return;
}



/* Address: 0x100731bac | FUN_100731bac */

void FUN_100731bac(undefined1 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined1 *)(lVar1 + 0xc1) = param_1;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0xb8));
  _swift_task_switch(FUN_100731c04,0,0);
  return;
}



/* Address: 0x100731c04 | FUN_100731c04 */

void FUN_100731c04(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  if (*(char *)(unaff_x22 + 0xc1) == '\x01') {
    plVar1 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xa8) = plVar1;
    *plVar1 = unaff_x22;
    plVar1[1] = (long)FUN_1007319dc;
    Swift::AsyncIteratorProtocol::_next();
    return;
  }
  (**(code **)(*(long *)(unaff_x22 + 0x90) + 8))
            (*(undefined8 *)(unaff_x22 + 0x98),*(undefined8 *)(unaff_x22 + 0x88));
  uVar3 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x60);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x98));
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000100731ccc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100731cd0 | FUN_100731cd0 */

void FUN_100731cd0(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0xb0);
  lVar1 = *(long *)(unaff_x22 + 0x90);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x88);
  lVar2 = *(long *)(unaff_x22 + 0x58);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x40);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar4;
  _swift_errorRetain(uVar4);
  puVar3 = &DAT_100fdfb40;
  FUN_1000f7830(&DAT_100fdfb40,&DAT_100c74390);
  _swift_dynamicCast(uVar6,(undefined8 *)(unaff_x22 + 0x10),puVar3,uVar9,7);
  _swift_storeEnumTagMultiPayload(uVar6,uVar8,1);
  FUN_10072f8b4(uVar6);
  _swift_errorRelease(uVar4);
  (**(code **)(lVar1 + 8))(uVar5,uVar7);
  (**(code **)(lVar2 + 8))(uVar6,uVar8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x60);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x98));
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000100731de8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100731dec | FUN_100731dec */

void FUN_100731dec(void)

{
  long *plVar1;
  undefined8 in_x4;
  undefined8 in_x5;
  long unaff_x22;
  
  plVar1 = (long *)0xd0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005c804c;
  FUN_1007316a0(in_x4,in_x5);
  return;
}



/* Address: 0x100731e58 | FUN_100731e58 */

void FUN_100731e58(char *param_1,void *param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5)

{
  __uint8 _Var1;
  undefined *puVar2;
  TaskPriority TVar3;
  undefined1 *puVar4;
  TaskPriority TVar5;
  UnownedSerialExecutor UVar6;
  ContiguousArray<__int8> CVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  String SVar13;
  undefined1 auStack_c0 [8];
  undefined8 local_b8;
  undefined8 *puStack_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined *local_90;
  long lStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined *local_70;
  long lStack_68;
  
  puVar2 = &DAT_100fe0dc8;
  FUN_1000f7830(&DAT_100fe0dc8,&DAT_100c75540);
  puVar9 = auStack_c0 + -(*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100733c6c(param_3,puVar9);
  TVar3 = Swift::TaskPriority::typeMetadataAccessor();
  lVar12 = *(long *)(TVar3.unknown + -8);
  puVar4 = puVar9;
  (**(code **)(lVar12 + 0x30))(puVar9,1,TVar3.unknown);
  TVar5.unknown = param_5;
  _swift_retain();
  if ((int)puVar4 == 1) {
    FUN_100733b9c(puVar9);
    uVar10 = 0x1c00;
  }
  else {
    _Var1 = Swift::TaskPriority::get_rawValue(TVar5);
    (**(code **)(lVar12 + 8))(puVar9,TVar3.unknown);
    uVar10 = (ulong)_Var1 | 0x1c00;
  }
  lVar12 = *(long *)(param_5 + 0x10);
  lVar11 = *(long *)(param_5 + 0x18);
  _swift_unknownObjectRetain(lVar12);
  _swift_release(param_5);
  if (lVar12 == 0) {
    UVar6.unknown = (undefined *)0x0;
    lVar11 = 0;
  }
  else {
    _swift_getObjectType(lVar12);
    UVar6 = Swift::Actor::get_unownedExecutor();
    _swift_unknownObjectRelease(lVar12);
  }
  if (param_2 == (void *)0x0) {
    FUN_100733b9c(param_3);
    puVar2 = &DAT_100efd0f0;
    _swift_allocObject(&DAT_100efd0f0,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_4;
    *(undefined **)(puVar2 + 0x18) = param_5;
    if (lVar11 == 0 && UVar6.unknown == (undefined *)0x0) {
      puVar8 = (undefined8 *)0x0;
    }
    else {
      local_80 = 0;
      uStack_78 = 0;
      puVar8 = &local_80;
      local_70 = UVar6.unknown;
      lStack_68 = lVar11;
    }
    _swift_task_create(uVar10,puVar8,PTR___type_metadata_for____100eae0c8 + 8,&DAT_100c75570,puVar2)
    ;
  }
  else {
    SVar13.bridgeObject = param_2;
    SVar13.str = param_1;
    CVar7 = Swift::String::get_utf8CString(SVar13);
    _swift_bridgeObjectRelease(param_2);
    puVar2 = &DAT_100efd118;
    _swift_allocObject(&DAT_100efd118,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_4;
    *(undefined **)(puVar2 + 0x18) = param_5;
    _swift_retain(param_5);
    if (lVar11 == 0 && UVar6.unknown == (undefined *)0x0) {
      puStack_b0 = (undefined8 *)0x0;
    }
    else {
      local_a0 = 0;
      uStack_98 = 0;
      puStack_b0 = &local_a0;
      local_90 = UVar6.unknown;
      lStack_88 = lVar11;
    }
    local_b8 = 7;
    local_a8 = CVar7.unknown + 0x20;
    _swift_task_create(uVar10,&local_b8,PTR___type_metadata_for____100eae0c8 + 8,&DAT_100c75578,
                       puVar2);
    _swift_release(CVar7.unknown);
    FUN_100733b9c(param_3);
    _swift_release(param_5);
  }
  return;
}



/* Address: 0x1007320a8 | FUN_1007320a8 */

void FUN_1007320a8(void)

{
  long *plVar1;
  undefined8 in_x4;
  undefined8 in_x5;
  long unaff_x22;
  
  plVar1 = (long *)0xd0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005c804c;
  FUN_1007316a0(in_x4,in_x5);
  return;
}



/* Address: 0x100732114 | FUN_100732114 */

void FUN_100732114(char *param_1,void *param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5)

{
  __uint8 _Var1;
  undefined *puVar2;
  TaskPriority TVar3;
  undefined1 *puVar4;
  TaskPriority TVar5;
  UnownedSerialExecutor UVar6;
  ContiguousArray<__int8> CVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  String SVar13;
  undefined1 auStack_b0 [8];
  undefined8 local_a8;
  undefined8 *puStack_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined *local_80;
  long lStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined *local_60;
  long lStack_58;
  
  puVar2 = &DAT_100fe0dc8;
  FUN_1000f7830(&DAT_100fe0dc8,&DAT_100c75540);
  puVar9 = auStack_b0 + -(*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100733c6c(param_3,puVar9);
  TVar3 = Swift::TaskPriority::typeMetadataAccessor();
  lVar12 = *(long *)(TVar3.unknown + -8);
  puVar4 = puVar9;
  (**(code **)(lVar12 + 0x30))(puVar9,1,TVar3.unknown);
  TVar5.unknown = param_5;
  _swift_retain();
  if ((int)puVar4 == 1) {
    FUN_100733b9c(puVar9);
    uVar10 = 0x1000;
  }
  else {
    _Var1 = Swift::TaskPriority::get_rawValue(TVar5);
    (**(code **)(lVar12 + 8))(puVar9,TVar3.unknown);
    uVar10 = (ulong)_Var1 | 0x1000;
  }
  lVar12 = *(long *)(param_5 + 0x10);
  lVar11 = *(long *)(param_5 + 0x18);
  _swift_unknownObjectRetain(lVar12);
  _swift_release(param_5);
  if (lVar12 == 0) {
    UVar6.unknown = (undefined *)0x0;
    lVar11 = 0;
  }
  else {
    _swift_getObjectType(lVar12);
    UVar6 = Swift::Actor::get_unownedExecutor();
    _swift_unknownObjectRelease(lVar12);
  }
  if (param_2 == (void *)0x0) {
    puVar2 = &DAT_100efd140;
    _swift_allocObject(&DAT_100efd140,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_4;
    *(undefined **)(puVar2 + 0x18) = param_5;
    if (lVar11 == 0 && UVar6.unknown == (undefined *)0x0) {
      puVar8 = (undefined8 *)0x0;
    }
    else {
      local_70 = 0;
      uStack_68 = 0;
      puVar8 = &local_70;
      local_60 = UVar6.unknown;
      lStack_58 = lVar11;
    }
    _swift_task_create(uVar10,puVar8,PTR___type_metadata_for____100eae0c8 + 8,&DAT_100c755b0,puVar2)
    ;
  }
  else {
    SVar13.bridgeObject = param_2;
    SVar13.str = param_1;
    CVar7 = Swift::String::get_utf8CString(SVar13);
    puVar2 = &DAT_100efd168;
    _swift_allocObject(&DAT_100efd168,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_4;
    *(undefined **)(puVar2 + 0x18) = param_5;
    _swift_retain(param_5);
    if (lVar11 == 0 && UVar6.unknown == (undefined *)0x0) {
      puStack_a0 = (undefined8 *)0x0;
    }
    else {
      local_90 = 0;
      uStack_88 = 0;
      puStack_a0 = &local_90;
      local_80 = UVar6.unknown;
      lStack_78 = lVar11;
    }
    local_a8 = 7;
    local_98 = CVar7.unknown + 0x20;
    _swift_task_create(uVar10,&local_a8,PTR___type_metadata_for____100eae0c8 + 8,&DAT_100c755b8,
                       puVar2);
    _swift_release(param_5);
    _swift_release(CVar7.unknown);
  }
  return;
}



/* Address: 0x100732344 | FUN_100732344 */

void FUN_100732344(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  
  lVar1 = *(long *)(param_1 + 0x10);
  lVar2 = *(long *)(param_1 + 0x18);
  if (*(char *)(param_1 + 0x20) == '\x02' && (lVar2 == 0 && lVar1 == 0)) {
    _swift_retain(param_2);
    FUN_100732a34(lVar1,lVar2,2);
    *(undefined8 *)(param_1 + 0x10) = param_2;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined1 *)(param_1 + 0x20) = 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1007323b4);
  (*pcVar3)();
}



/* Address: 0x1007323b4 | FUN_1007323b4 */

void FUN_1007323b4(void)

{
  long *unaff_x20;
  
  FUN_10073244c(0xff,*(undefined8 *)(*unaff_x20 + 0x50),*(undefined8 *)(*unaff_x20 + 0x58));
  Synchronization::Mutex::typeMetadataAccessor();
  Synchronization::_Cell::typeMetadataAccessor();
  FUN_1007b88d0();
  return;
}



/* Address: 0x10073241c | FUN_10073241c */

void FUN_10073241c(void)

{
  FUN_1007323b4();
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100732440 | FUN_100732440 */

void FUN_100732440(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x10073244c | FUN_10073244c */

void FUN_10073244c(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100732458 | FUN_100732458 */

Mutex FUN_100732458(undefined8 *param_1)

{
  Mutex MVar1;
  
  if (PTR__swift_runtimeSupportsNoncopyableTypes_100eae408 != (undefined *)0x0) {
    FUN_10073244c(0xff,*param_1,param_1[1]);
    MVar1 = Synchronization::Mutex::typeMetadataAccessor();
    return (Mutex)MVar1.unknown;
  }
  return (Mutex)(PTR___type_metadata_for____100eae0c8 + 8);
}



/* Address: 0x100732464 | FUN_100732464 */

void FUN_100732464(undefined8 *param_1)

{
  FUN_10073244c(0xff,*param_1,param_1[1]);
  Synchronization::Mutex::typeMetadataAccessor();
  return;
}



/* Address: 0x10073249c | FUN_10073249c */

void FUN_10073249c(long param_1)

{
  undefined *local_18;
  
  local_18 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
  _swift_initClassMetadata2(param_1,0,1,&local_18,param_1 + 0x60);
  return;
}



/* Address: 0x1007324e0 | FUN_1007324e0 */

undefined8
FUN_1007324e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_x20;
  
  _swift_allocObject();
  FUN_100732544(param_1,param_2,param_3,param_4);
  return unaff_x20;
}



/* Address: 0x100732544 | FUN_100732544 */

void FUN_100732544(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long *unaff_x20;
  
  lVar1 = 0;
  FUN_100732440(0,*(undefined8 *)(*unaff_x20 + 0x50),*(undefined8 *)(*unaff_x20 + 0x58));
  _swift_allocObject();
  FUN_10072e444(param_1,param_2,param_3,param_4);
  unaff_x20[2] = lVar1;
  return;
}



/* Address: 0x1007325c0 | FUN_1007325c0 */

void FUN_1007325c0(void)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  _swift_retain(uVar1);
  FUN_10072e578();
  _swift_release(uVar1);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100732600 | FUN_100732600 */

void FUN_100732600(void)

{
  FUN_1007325c0();
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100732620 | FUN_100732620 */

void FUN_100732620(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x10073262c | FUN_10073262c */

void FUN_10073262c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xff;
  FUN_100732654(0xff,*param_1,param_1[1]);
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c75480,uVar1);
  return;
}



/* Address: 0x100732654 | FUN_100732654 */

void FUN_100732654(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100732660 | FUN_100732660 */

undefined1  [16] FUN_100732660(long param_1)

{
  Optional OVar1;
  ulong uVar2;
  undefined7 extraout_var;
  long lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined *local_70;
  undefined *puStack_68;
  undefined *local_60;
  undefined *puStack_58;
  undefined *local_50;
  long local_48;
  undefined *puStack_40;
  undefined *local_38;
  undefined *puStack_30;
  undefined *local_28;
  
  local_70 = PTR___value_witness_table_for_Builtin_Int64_100eabd48 + 0x40;
  puStack_68 = PTR___value_witness_table_for_Builtin_BridgeObject_100eabd38 + 0x40;
  puStack_58 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
  local_60 = &DAT_100c753d0;
  local_50 = &DAT_100c753e8;
  uVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Failure_100eaeae0);
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lVar3 = CONCAT71(extraout_var,OVar1.value);
  if (uVar2 < 0x40) {
    local_48 = *(long *)(lVar3 + -8) + 0x40;
    puStack_40 = &DAT_100c753e8;
    local_38 = &DAT_100c75400;
    puStack_30 = &DAT_100c75400;
    local_28 = &DAT_100c75418;
    _swift_initStructMetadata(param_1,0,10,&local_70,param_1 + 0x20);
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



/* Address: 0x100732740 | FUN_100732740 */

long * FUN_100732740(long *param_1,long *param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 uVar2;
  long lVar3;
  void *pvVar4;
  ulong uVar5;
  undefined8 uVar6;
  size_t sVar7;
  code *pcVar8;
  void *pvVar9;
  void *pvVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Failure_100eaeae0);
  lVar11 = *(long *)(lVar3 + -8);
  uVar12 = (ulong)*(uint *)(lVar11 + 0x50) & 0xff;
  sVar7 = *(size_t *)(lVar11 + 0x40);
  if (*(int *)(lVar11 + 0x54) == 0) {
    sVar7 = sVar7 + 1;
  }
  if (((uint)uVar12 < 8 && (*(uint *)(lVar11 + 0x50) & 0x100000) == 0) &&
      ((uVar12 + 0x31 & (uVar12 ^ 0xffffffffffffffff)) + sVar7 & 0xfffffffffffffff8) + 0x21 < 0x19)
  {
    *param_1 = *param_2;
    puVar13 = (undefined8 *)((long)param_1 + 0xfU & 0xfffffffffffffff8);
    puVar14 = (undefined8 *)((long)param_2 + 0xfU & 0xfffffffffffffff8);
    *puVar13 = *puVar14;
    uVar6 = puVar14[1];
    uVar1 = puVar14[2];
    uVar2 = *(undefined1 *)(puVar14 + 3);
    _swift_bridgeObjectRetain();
    FUN_100732958(uVar6,uVar1,uVar2);
    puVar13[1] = uVar6;
    puVar13[2] = uVar1;
    *(undefined1 *)(puVar13 + 3) = uVar2;
    puVar13[4] = puVar14[4];
    *(undefined1 *)(puVar13 + 5) = *(undefined1 *)(puVar14 + 5);
    pvVar9 = (void *)((long)(puVar13 + 4) + uVar12 + 9 & ~uVar12);
    pvVar10 = (void *)((long)(puVar14 + 4) + uVar12 + 9 & ~uVar12);
    pcVar8 = *(code **)(lVar11 + 0x30);
    _swift_retain();
    pvVar4 = pvVar10;
    (*pcVar8)(pvVar10,1,lVar3);
    if ((int)pvVar4 == 0) {
      (**(code **)(lVar11 + 0x10))(pvVar9,pvVar10,lVar3);
      (**(code **)(lVar11 + 0x38))(pvVar9,0,1,lVar3);
    }
    else {
      _memcpy(pvVar9,pvVar10,sVar7);
    }
    *(undefined1 *)((long)pvVar9 + sVar7) = *(undefined1 *)((long)pvVar10 + sVar7);
    uVar12 = (ulong)((long)pvVar9 + sVar7) & 0xfffffffffffffff8;
    uVar5 = (ulong)((long)pvVar10 + sVar7) & 0xfffffffffffffff8;
    *(undefined8 *)(uVar12 + 8) = *(undefined8 *)(uVar5 + 8);
    *(undefined8 *)(uVar12 + 0x10) = *(undefined8 *)(uVar5 + 0x10);
    uVar6 = *(undefined8 *)(uVar5 + 0x18);
    *(undefined1 *)(uVar12 + 0x20) = *(undefined1 *)(uVar5 + 0x20);
    *(undefined8 *)(uVar12 + 0x18) = uVar6;
  }
  else {
    lVar3 = *param_2;
    *param_1 = lVar3;
    param_1 = (long *)(lVar3 + ((ulong)((uint)uVar12 & 0xf8 ^ 0x1f8) & uVar12 + 0x10));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x100732958 | FUN_100732958 */

void FUN_100732958(undefined8 param_1,undefined8 param_2,char param_3)

{
  if ((param_3 != '\0') && (param_2 = param_1, param_3 != '\x01')) {
    return;
  }
  _swift_retain(param_2);
  return;
}



/* Address: 0x100732978 | FUN_100732978 */

void FUN_100732978(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  
  puVar4 = (undefined8 *)(param_1 + 0xfU & 0xfffffffffffffff8);
  _swift_bridgeObjectRelease(*puVar4);
  FUN_100732a34(puVar4[1],puVar4[2],*(undefined1 *)(puVar4 + 3));
  _swift_release(puVar4[4]);
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Failure_100eaeae0);
  lVar5 = *(long *)(lVar2 + -8);
  uVar6 = (ulong)*(byte *)(lVar5 + 0x50);
  uVar1 = (long)(puVar4 + 4) + uVar6 + 9;
  uVar3 = uVar1 & (uVar6 ^ 0xffffffffffffffff);
  (**(code **)(lVar5 + 0x30))(uVar3,1,lVar2);
  if ((int)uVar3 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100732a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar5 + 8))(uVar1 & (uVar6 ^ 0xffffffffffffffff),lVar2);
  return;
}



/* Address: 0x100732a34 | FUN_100732a34 */

void FUN_100732a34(undefined8 param_1,undefined8 param_2,char param_3)

{
  if ((param_3 != '\0') && (param_2 = param_1, param_3 != '\x01')) {
    return;
  }
  _swift_release(param_2);
  return;
}



/* Address: 0x100732a54 | FUN_100732a54 */

undefined8 * FUN_100732a54(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  size_t sVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  long lVar4;
  void *pvVar5;
  ulong uVar6;
  ulong uVar7;
  void *pvVar8;
  void *pvVar9;
  int iVar10;
  undefined8 uVar11;
  size_t sVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  code *pcVar16;
  
  *param_1 = *param_2;
  puVar13 = (undefined8 *)((long)param_1 + 0xfU & 0xfffffffffffffff8);
  puVar15 = (undefined8 *)((long)param_2 + 0xfU & 0xfffffffffffffff8);
  *puVar13 = *puVar15;
  uVar11 = puVar15[1];
  uVar2 = puVar15[2];
  uVar3 = *(undefined1 *)(puVar15 + 3);
  _swift_bridgeObjectRetain();
  FUN_100732958(uVar11,uVar2,uVar3);
  puVar13[1] = uVar11;
  puVar13[2] = uVar2;
  *(undefined1 *)(puVar13 + 3) = uVar3;
  uVar11 = puVar15[4];
  puVar13[4] = uVar11;
  *(undefined1 *)(puVar13 + 5) = *(undefined1 *)(puVar15 + 5);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Failure_100eaeae0);
  lVar14 = *(long *)(lVar4 + -8);
  uVar6 = (ulong)*(byte *)(lVar14 + 0x50);
  pvVar8 = (void *)(uVar6 + 9 + (long)(puVar13 + 4) & (uVar6 ^ 0xffffffffffffffff));
  pvVar9 = (void *)(uVar6 + 9 + (long)(puVar15 + 4) & (uVar6 ^ 0xffffffffffffffff));
  pcVar16 = *(code **)(lVar14 + 0x30);
  _swift_retain(uVar11);
  pvVar5 = pvVar9;
  (*pcVar16)(pvVar9,1,lVar4);
  if ((int)pvVar5 == 0) {
    (**(code **)(lVar14 + 0x10))(pvVar8,pvVar9,lVar4);
    (**(code **)(lVar14 + 0x38))(pvVar8,0,1,lVar4);
    iVar10 = *(int *)(lVar14 + 0x54);
    sVar12 = *(size_t *)(lVar14 + 0x40);
  }
  else {
    iVar10 = *(int *)(lVar14 + 0x54);
    sVar12 = *(size_t *)(lVar14 + 0x40);
    sVar1 = sVar12;
    if (iVar10 == 0) {
      sVar1 = sVar12 + 1;
    }
    _memcpy(pvVar8,pvVar9,sVar1);
  }
  if (iVar10 == 0) {
    sVar12 = sVar12 + 1;
  }
  *(undefined1 *)(sVar12 + (long)pvVar8) = *(undefined1 *)(sVar12 + (long)pvVar9);
  uVar7 = (ulong)(sVar12 + (long)pvVar8) & 0xfffffffffffffff8;
  uVar6 = (ulong)(sVar12 + (long)pvVar9) & 0xfffffffffffffff8;
  *(undefined8 *)(uVar7 + 8) = *(undefined8 *)(uVar6 + 8);
  *(undefined8 *)(uVar7 + 0x10) = *(undefined8 *)(uVar6 + 0x10);
  uVar11 = *(undefined8 *)(uVar6 + 0x18);
  *(undefined1 *)(uVar7 + 0x20) = *(undefined1 *)(uVar6 + 0x20);
  *(undefined8 *)(uVar7 + 0x18) = uVar11;
  return param_1;
}



/* Address: 0x100732c00 | FUN_100732c00 */

undefined8 * FUN_100732c00(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  long lVar6;
  void *pvVar7;
  void *pvVar8;
  ulong uVar9;
  size_t sVar10;
  ulong uVar11;
  void *pvVar12;
  undefined8 uVar13;
  void *pvVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined8 *puVar18;
  code *pcVar19;
  
  *param_1 = *param_2;
  puVar15 = (undefined8 *)((long)param_2 + 0xfU & 0xfffffffffffffff8);
  puVar18 = (undefined8 *)((long)param_1 + 0xfU & 0xfffffffffffffff8);
  uVar13 = *puVar18;
  *puVar18 = *puVar15;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar13);
  uVar13 = puVar15[1];
  uVar2 = puVar15[2];
  uVar4 = *(undefined1 *)(puVar15 + 3);
  FUN_100732958(uVar13,uVar2,uVar4);
  uVar1 = puVar18[1];
  uVar3 = puVar18[2];
  puVar18[1] = uVar13;
  puVar18[2] = uVar2;
  uVar5 = *(undefined1 *)(puVar18 + 3);
  *(undefined1 *)(puVar18 + 3) = uVar4;
  FUN_100732a34(uVar1,uVar3,uVar5);
  puVar16 = puVar18 + 4;
  uVar13 = *puVar16;
  *puVar16 = puVar15[4];
  _swift_retain();
  _swift_release(uVar13);
  *(undefined1 *)(puVar18 + 5) = *(undefined1 *)(puVar15 + 5);
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Failure_100eaeae0);
  lVar17 = *(long *)(lVar6 + -8);
  uVar9 = (ulong)*(byte *)(lVar17 + 0x50);
  pvVar12 = (void *)(uVar9 + 9 + (long)puVar16 & (uVar9 ^ 0xffffffffffffffff));
  pvVar14 = (void *)(uVar9 + 9 + (long)(puVar15 + 4) & (uVar9 ^ 0xffffffffffffffff));
  pcVar19 = *(code **)(lVar17 + 0x30);
  pvVar7 = pvVar12;
  (*pcVar19)(pvVar12,1,lVar6);
  pvVar8 = pvVar14;
  (*pcVar19)(pvVar14,1,lVar6);
  if ((int)pvVar7 == 0) {
    if ((int)pvVar8 == 0) {
      (**(code **)(lVar17 + 0x18))(pvVar12,pvVar14,lVar6);
      goto LAB_100732d80;
    }
    (**(code **)(lVar17 + 8))(pvVar12,lVar6);
  }
  else if ((int)pvVar8 == 0) {
    (**(code **)(lVar17 + 0x10))(pvVar12,pvVar14,lVar6);
    (**(code **)(lVar17 + 0x38))(pvVar12,0,1,lVar6);
    goto LAB_100732d80;
  }
  sVar10 = *(size_t *)(lVar17 + 0x40);
  if (*(int *)(lVar17 + 0x54) == 0) {
    sVar10 = sVar10 + 1;
  }
  _memcpy(pvVar12,pvVar14,sVar10);
LAB_100732d80:
  lVar6 = *(long *)(lVar17 + 0x40);
  if (*(int *)(lVar17 + 0x54) == 0) {
    lVar6 = lVar6 + 1;
  }
  *(undefined1 *)(lVar6 + (long)pvVar12) = *(undefined1 *)(lVar6 + (long)pvVar14);
  uVar11 = (ulong)(lVar6 + (long)pvVar12) & 0xfffffffffffffff8;
  uVar9 = (ulong)(lVar6 + (long)pvVar14) & 0xfffffffffffffff8;
  *(undefined8 *)(uVar11 + 8) = *(undefined8 *)(uVar9 + 8);
  *(undefined8 *)(uVar11 + 0x10) = *(undefined8 *)(uVar9 + 0x10);
  uVar13 = *(undefined8 *)(uVar9 + 0x18);
  *(undefined1 *)(uVar11 + 0x20) = *(undefined1 *)(uVar9 + 0x20);
  *(undefined8 *)(uVar11 + 0x18) = uVar13;
  return param_1;
}



/* Address: 0x100732e14 | FUN_100732e14 */

undefined8 * FUN_100732e14(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  size_t sVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  void *pvVar9;
  void *pvVar10;
  int iVar11;
  long lVar12;
  size_t sVar13;
  undefined8 uVar14;
  
  *param_1 = *param_2;
  puVar4 = (undefined8 *)((long)param_2 + 0xfU & 0xfffffffffffffff8);
  puVar6 = (undefined8 *)((long)param_1 + 0xfU & 0xfffffffffffffff8);
  *puVar6 = *puVar4;
  uVar14 = puVar4[2];
  uVar8 = puVar4[1];
  *(undefined1 *)(puVar6 + 3) = *(undefined1 *)(puVar4 + 3);
  puVar6[2] = uVar14;
  puVar6[1] = uVar8;
  puVar6[4] = puVar4[4];
  *(undefined1 *)(puVar6 + 5) = *(undefined1 *)(puVar4 + 5);
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Failure_100eaeae0);
  lVar12 = *(long *)(lVar2 + -8);
  uVar5 = (ulong)*(byte *)(lVar12 + 0x50);
  pvVar9 = (void *)(uVar5 + 9 + (long)(puVar6 + 4) & (uVar5 ^ 0xffffffffffffffff));
  pvVar10 = (void *)(uVar5 + 9 + (long)(puVar4 + 4) & (uVar5 ^ 0xffffffffffffffff));
  pvVar3 = pvVar10;
  (**(code **)(lVar12 + 0x30))(pvVar10,1,lVar2);
  if ((int)pvVar3 == 0) {
    (**(code **)(lVar12 + 0x20))(pvVar9,pvVar10,lVar2);
    (**(code **)(lVar12 + 0x38))(pvVar9,0,1,lVar2);
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
  *(undefined1 *)(sVar13 + (long)pvVar9) = *(undefined1 *)(sVar13 + (long)pvVar10);
  uVar7 = (ulong)(sVar13 + (long)pvVar9) & 0xfffffffffffffff8;
  uVar5 = (ulong)(sVar13 + (long)pvVar10) & 0xfffffffffffffff8;
  *(undefined8 *)(uVar7 + 8) = *(undefined8 *)(uVar5 + 8);
  *(undefined8 *)(uVar7 + 0x10) = *(undefined8 *)(uVar5 + 0x10);
  uVar8 = *(undefined8 *)(uVar5 + 0x18);
  *(undefined1 *)(uVar7 + 0x20) = *(undefined1 *)(uVar5 + 0x20);
  *(undefined8 *)(uVar7 + 0x18) = uVar8;
  return param_1;
}



/* Address: 0x100732f98 | FUN_100732f98 */

undefined8 * FUN_100732f98(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  long lVar5;
  void *pvVar6;
  void *pvVar7;
  ulong uVar8;
  size_t sVar9;
  ulong uVar10;
  void *pvVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  void *pvVar14;
  undefined8 *puVar15;
  long lVar16;
  code *pcVar17;
  undefined8 uVar18;
  
  *param_1 = *param_2;
  puVar12 = (undefined8 *)((long)param_2 + 0xfU & 0xfffffffffffffff8);
  puVar15 = (undefined8 *)((long)param_1 + 0xfU & 0xfffffffffffffff8);
  uVar4 = *puVar15;
  *puVar15 = *puVar12;
  _swift_bridgeObjectRelease(uVar4);
  uVar2 = *(undefined1 *)(puVar12 + 3);
  uVar4 = puVar15[1];
  uVar1 = puVar15[2];
  uVar18 = puVar12[1];
  puVar15[2] = puVar12[2];
  puVar15[1] = uVar18;
  uVar3 = *(undefined1 *)(puVar15 + 3);
  *(undefined1 *)(puVar15 + 3) = uVar2;
  FUN_100732a34(uVar4,uVar1,uVar3);
  puVar13 = puVar15 + 4;
  uVar4 = *puVar13;
  *puVar13 = puVar12[4];
  _swift_release(uVar4);
  *(undefined1 *)(puVar15 + 5) = *(undefined1 *)(puVar12 + 5);
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Failure_100eaeae0);
  lVar16 = *(long *)(lVar5 + -8);
  uVar8 = (ulong)*(byte *)(lVar16 + 0x50);
  pvVar11 = (void *)(uVar8 + 9 + (long)puVar13 & (uVar8 ^ 0xffffffffffffffff));
  pvVar14 = (void *)(uVar8 + 9 + (long)(puVar12 + 4) & (uVar8 ^ 0xffffffffffffffff));
  pcVar17 = *(code **)(lVar16 + 0x30);
  pvVar6 = pvVar11;
  (*pcVar17)(pvVar11,1,lVar5);
  pvVar7 = pvVar14;
  (*pcVar17)(pvVar14,1,lVar5);
  if ((int)pvVar6 == 0) {
    if ((int)pvVar7 == 0) {
      (**(code **)(lVar16 + 0x28))(pvVar11,pvVar14,lVar5);
      goto LAB_1007330f8;
    }
    (**(code **)(lVar16 + 8))(pvVar11,lVar5);
  }
  else if ((int)pvVar7 == 0) {
    (**(code **)(lVar16 + 0x20))(pvVar11,pvVar14,lVar5);
    (**(code **)(lVar16 + 0x38))(pvVar11,0,1,lVar5);
    goto LAB_1007330f8;
  }
  sVar9 = *(size_t *)(lVar16 + 0x40);
  if (*(int *)(lVar16 + 0x54) == 0) {
    sVar9 = sVar9 + 1;
  }
  _memcpy(pvVar11,pvVar14,sVar9);
LAB_1007330f8:
  lVar5 = *(long *)(lVar16 + 0x40);
  if (*(int *)(lVar16 + 0x54) == 0) {
    lVar5 = lVar5 + 1;
  }
  *(undefined1 *)(lVar5 + (long)pvVar11) = *(undefined1 *)(lVar5 + (long)pvVar14);
  uVar10 = (ulong)(lVar5 + (long)pvVar11) & 0xfffffffffffffff8;
  uVar8 = (ulong)(lVar5 + (long)pvVar14) & 0xfffffffffffffff8;
  *(undefined8 *)(uVar10 + 8) = *(undefined8 *)(uVar8 + 8);
  *(undefined8 *)(uVar10 + 0x10) = *(undefined8 *)(uVar8 + 0x10);
  uVar4 = *(undefined8 *)(uVar8 + 0x18);
  *(undefined1 *)(uVar10 + 0x20) = *(undefined1 *)(uVar8 + 0x20);
  *(undefined8 *)(uVar10 + 0x18) = uVar4;
  return param_1;
}



/* Address: 0x10073318c | FUN_10073318c */

int FUN_10073318c(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong *puVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Failure_100eaeae0);
  lVar7 = *(long *)(lVar6 + -8);
  iVar5 = *(int *)(lVar7 + 0x54);
  uVar4 = 0;
  if (iVar5 != 0) {
    uVar4 = iVar5 - 1;
  }
  uVar1 = uVar4;
  if (uVar4 < 0x80000000) {
    uVar1 = 0x7fffffff;
  }
  lVar10 = *(long *)(lVar7 + 0x40);
  if (iVar5 == 0) {
    lVar10 = lVar10 + 1;
  }
  if (param_2 == 0) {
    return 0;
  }
  uVar11 = (ulong)*(byte *)(lVar7 + 0x50);
  if (uVar1 <= param_2 && param_2 - uVar1 != 0) {
    lVar10 = (lVar10 + (uVar11 + 0x31 & (uVar11 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) + 0x21;
    uVar12 = (uint)lVar10;
    uVar9 = 2;
    uVar3 = uVar9;
    if (uVar12 < 4) {
      uVar3 = ((param_2 - uVar1) + 0xff >> 8) + 1;
    }
    if (0xffff < uVar3) {
      uVar9 = 4;
    }
    if (uVar3 < 0x100) {
      uVar9 = 1;
    }
    uVar2 = 0;
    if (1 < uVar3) {
      uVar2 = uVar9;
    }
    if (uVar2 < 2) {
      if ((uVar2 != 0) &&
         (uVar9 = (uint)*(byte *)((long)param_1 + lVar10), *(byte *)((long)param_1 + lVar10) != 0))
      goto LAB_10073327c;
    }
    else if (uVar2 == 2) {
      uVar9 = (uint)*(ushort *)((long)param_1 + lVar10);
      if (*(ushort *)((long)param_1 + lVar10) != 0) {
LAB_10073327c:
        uVar4 = uVar9 - 1 << (ulong)((uVar12 & 3) << 3);
        if (uVar12 < 4) {
          uVar9 = (uint)(byte)*param_1;
        }
        else {
          uVar9 = *param_1;
          uVar4 = 0;
        }
        return uVar1 + (uVar9 | uVar4) + 1;
      }
    }
    else {
      uVar9 = *(uint *)((long)param_1 + lVar10);
      if (uVar9 != 0) goto LAB_10073327c;
    }
  }
  puVar8 = (ulong *)((ulong)((long)param_1 + 0xfU) & 0xfffffffffffffff8);
  if ((int)uVar4 < 0) {
    uVar11 = (long)puVar8 + uVar11 + 0x29 & ~uVar11;
    (**(code **)(lVar7 + 0x30))(uVar11,iVar5,lVar6);
    iVar5 = 0;
    if ((int)uVar11 != 0) {
      iVar5 = (int)uVar11 + -1;
    }
  }
  else {
    uVar11 = *puVar8;
    if (0xfffffffe < uVar11) {
      uVar11 = 0xffffffff;
    }
    iVar5 = (int)uVar11 + 1;
  }
  return iVar5;
}



/* Address: 0x100733310 | FUN_100733310 */

void FUN_100733310(uint *param_1,uint param_2,uint param_3,long param_4)

{
  size_t sVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  ulong *puVar10;
  uint uVar11;
  size_t sVar12;
  uint *puVar13;
  
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 0x18),*(undefined8 *)(param_4 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Failure_100eaeae0);
  lVar7 = *(long *)(lVar4 + -8);
  iVar6 = *(int *)(lVar7 + 0x54);
  uVar2 = 0;
  if (iVar6 != 0) {
    uVar2 = iVar6 - 1;
  }
  uVar8 = uVar2;
  if (uVar2 < 0x80000000) {
    uVar8 = 0x7fffffff;
  }
  uVar9 = (ulong)*(byte *)(lVar7 + 0x50);
  sVar12 = *(size_t *)(lVar7 + 0x40);
  if (iVar6 == 0) {
    sVar12 = sVar12 + 1;
  }
  sVar1 = ((uVar9 + 0x31 & (uVar9 ^ 0xffffffffffffffff)) + sVar12 & 0xfffffffffffffff8) + 0x21;
  uVar5 = 0;
  if (uVar8 <= param_3 && param_3 - uVar8 != 0) {
    uVar11 = 2;
    uVar3 = uVar11;
    if ((uint)sVar1 < 4) {
      uVar3 = ((param_3 - uVar8) + 0xff >> 8) + 1;
    }
    if (0xffff < uVar3) {
      uVar11 = 4;
    }
    if (uVar3 < 0x100) {
      uVar11 = 1;
    }
    uVar5 = 0;
    if (1 < uVar3) {
      uVar5 = uVar11;
    }
  }
  if (uVar8 < param_2) {
    param_2 = param_2 + ~uVar8;
    _bzero(param_1,sVar1);
    iVar6 = 1;
    if ((uint)sVar1 < 4) {
      iVar6 = (param_2 >> 8) + 1;
      *(char *)param_1 = (char)param_2;
    }
    else {
      *param_1 = param_2;
    }
    if (uVar5 < 2) {
      if (uVar5 != 0) {
        *(char *)((long)param_1 + sVar1) = (char)iVar6;
      }
    }
    else if (uVar5 == 2) {
      *(short *)((long)param_1 + sVar1) = (short)iVar6;
    }
    else {
      *(int *)((long)param_1 + sVar1) = iVar6;
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
    if (param_2 != 0) {
      puVar10 = (ulong *)((long)param_1 + 0xfU & 0xfffffffffffffff8);
      if ((int)uVar2 < 0) {
        puVar13 = (uint *)((long)puVar10 + uVar9 + 0x29 & ~uVar9);
        if (param_2 <= uVar2) {
                    /* WARNING: Could not recover jumptable at 0x000100733538. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar7 + 0x38))(puVar13,param_2 + 1,iVar6,lVar4);
          return;
        }
        uVar5 = (uint)sVar12;
        uVar8 = 0xffffffff;
        if (uVar5 < 4) {
          uVar8 = ~(-1 << (ulong)((uVar5 & 3) << 3));
        }
        if (uVar5 != 0) {
          uVar8 = uVar8 & (uVar2 - param_2 ^ 0xffffffff);
          uVar2 = 4;
          if (uVar5 < 4) {
            uVar2 = uVar5;
          }
          _bzero(puVar13,sVar12);
          if ((int)uVar2 < 3) {
            if (uVar2 == 1) {
              *(char *)puVar13 = (char)uVar8;
            }
            else {
              *(short *)puVar13 = (short)uVar8;
            }
          }
          else if (uVar2 == 3) {
            *(short *)puVar13 = (short)uVar8;
            *(char *)((long)puVar13 + 2) = (char)(uVar8 >> 0x10);
          }
          else {
            *puVar13 = uVar8;
          }
        }
      }
      else {
        if ((int)param_2 < 0) {
          param_2 = param_2 & 0x7fffffff;
        }
        else {
          param_2 = param_2 - 1;
        }
        *puVar10 = (ulong)param_2;
      }
    }
  }
  return;
}



/* Address: 0x100733564 | FUN_100733564 */

void FUN_100733564(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c754d8,param_1);
  return;
}



/* Address: 0x100733574 | FUN_100733574 */

void FUN_100733574(undefined8 param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = unaff_x20;
  uVar4 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar4;
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x28) = uVar3;
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar4,uVar3,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Failure_100eaeae0);
  *(long *)(unaff_x22 + 0x30) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x38) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x40) = uVar2;
  _swift_task_switch(FUN_100733600,0,0);
  return;
}



/* Address: 0x100733600 | FUN_100733600 */

void FUN_100733600(void)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x70;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x48) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100733668;
  FUN_10072d450(plVar1,*(undefined8 *)(unaff_x22 + 0x10),0,0,*(undefined8 *)(unaff_x22 + 0x40));
  return;
}


