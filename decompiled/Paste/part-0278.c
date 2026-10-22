/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10036c99c | FUN_10036c99c */

void FUN_10036c99c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_100008284;
  FUN_100071054(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Address: 0x10036ca0c | FUN_10036ca0c */

void FUN_10036ca0c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_100008284;
  FUN_10007493c(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Address: 0x10036ca7c | FUN_10036ca7c */

void FUN_10036ca7c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100008284;
  FUN_10007493c(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Address: 0x10036caec | FUN_10036caec */

void FUN_10036caec(void)

{
  FUN_100369810();
  return;
}



/* Address: 0x10036caf4 | FUN_10036caf4 */

void FUN_10036caf4(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10036782c(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x10036cb00 | FUN_10036cb00 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10036cb00(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  ulong uVar3;
  
  puVar1 = &DAT_100fc1320;
  FUN_1000037f0(&DAT_100fc1320,&DAT_100c430a8);
  lVar2 = *(long *)(puVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  (**(code **)(lVar2 + 8))(unaff_x20 + (uVar3 + 0x38 & (uVar3 ^ 0xffffffffffffffff)),puVar1);
  _swift_deallocObject();
  return;
}



/* Address: 0x10036cb90 | FUN_10036cb90 */

void FUN_10036cb90(void)

{
  undefined *puVar1;
  long unaff_x20;
  
  puVar1 = &DAT_100fc1320;
  FUN_1000037f0(&DAT_100fc1320,&DAT_100c430a8);
  FUN_100367a54(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),
                unaff_x20 +
                ((ulong)*(byte *)(*(long *)(puVar1 + -8) + 0x50) + 0x38 &
                ((ulong)*(byte *)(*(long *)(puVar1 + -8) + 0x50) ^ 0xffffffffffffffff)));
  return;
}



/* Address: 0x10036cbd4 | FUN_10036cbd4 */

void FUN_10036cbd4(void)

{
  long unaff_x20;
  
  FUN_10036964c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x10036cbec | FUN_10036cbec */

void FUN_10036cbec(void)

{
  FUN_100366988();
  return;
}



/* Address: 0x10036cc14 | FUN_10036cc14 */

void FUN_10036cc14(void)

{
  FUN_100366c14();
  return;
}



/* Address: 0x10036cc34 | thunk_FUN_10036c978 */

void thunk_FUN_10036c978(void)

{
  FUN_10036c978();
  return;
}



/* Address: 0x10036cc38 | thunk_FUN_10036c978 */

void thunk_FUN_10036c978(void)

{
  FUN_10036c978();
  return;
}



/* Address: 0x10036cc3c | thunk_FUN_10036c978 */

void thunk_FUN_10036c978(void)

{
  FUN_10036c978();
  return;
}



/* Address: 0x10036cc40 | thunk_FUN_10036c978 */

void thunk_FUN_10036c978(void)

{
  FUN_10036c978();
  return;
}



/* Address: 0x10036cc44 | thunk_FUN_10036c8c8 */

void thunk_FUN_10036c8c8(void)

{
  FUN_10036c8c8();
  return;
}



/* Address: 0x10036cc48 | thunk_FUN_10036c274 */

void thunk_FUN_10036c274(void)

{
  FUN_10036c274();
  return;
}



/* Address: 0x10036cc4c | thunk_FUN_10036c274 */

void thunk_FUN_10036c274(void)

{
  FUN_10036c274();
  return;
}



/* Address: 0x10036cc50 | thunk_FUN_10036c274 */

void thunk_FUN_10036c274(void)

{
  FUN_10036c274();
  return;
}



/* Address: 0x10036cc54 | thunk_FUN_10036c288 */

void thunk_FUN_10036c288(void)

{
  FUN_10036c288();
  return;
}



/* Address: 0x10036cc58 | thunk_FUN_10036c288 */

void thunk_FUN_10036c288(void)

{
  FUN_10036c288();
  return;
}



/* Address: 0x10036cc5c | thunk_FUN_10036c288 */

void thunk_FUN_10036c288(void)

{
  FUN_10036c288();
  return;
}



/* Address: 0x10036cc60 | thunk_FUN_10036c85c */

void thunk_FUN_10036c85c(void)

{
  FUN_10036c85c();
  return;
}



/* Address: 0x10036cc64 | thunk_FUN_10036c85c */

void thunk_FUN_10036c85c(void)

{
  FUN_10036c85c();
  return;
}



/* Address: 0x10036cc68 | thunk_FUN_10036c960 */

void thunk_FUN_10036c960(void)

{
  FUN_100366f04();
  return;
}



/* Address: 0x10036cc6c | thunk_FUN_10036c8ec */

void thunk_FUN_10036c8ec(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1003546b0(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x10036cc70 | FUN_10036cc70 */

undefined1  [16] FUN_10036cc70(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_a8 [24];
  undefined1 local_90 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  _swift_beginAccess(unaff_x20 + 0x80,auStack_a8,0,0);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x88);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x80);
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x98);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x90);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0xa8);
  uVar3 = *(undefined8 *)(unaff_x20 + 0xa0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0xb0);
  local_80 = uVar2;
  uStack_78 = uVar4;
  local_70 = uVar5;
  local_60 = uVar3;
  local_50 = uVar1;
  _swift_retain(uVar2);
  _swift_retain(uVar4);
  _swift_retain(uVar5);
  _swift_retain(uVar3);
  _swift_retain(uVar1);
  FUN_1000037f0(&DAT_100fc1468,&DAT_100c431d0);
  FUN_1002ca7e0(local_90);
  _swift_release(uVar1);
  _swift_release(uVar3);
  _swift_release(uVar5);
  _swift_release(uVar4);
  _swift_release(uVar2);
  return local_90;
}



/* Address: 0x10036cd4c | FUN_10036cd4c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10036cd4c(undefined8 *param_1,undefined8 *param_2)

{
  Data DVar1;
  undefined8 extraout_x1;
  undefined8 uVar2;
  undefined8 local_50;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  local_50 = 0;
  DVar1.unknown =
       (undefined *)objc_stub::FUN_100bfdf40(&_OBJC_CLASS___NSKeyedArchiver,*param_2,1,&local_50);
  if (DVar1.unknown == (undefined *)0x0) {
    uVar2 = local_50;
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    _swift_errorRelease(uVar2);
    DVar1.unknown = (undefined *)0x0;
    uVar2 = 0xf000000000000000;
  }
  else {
    uVar2 = extraout_x1;
    DVar1 = Foundation::Data::__unconditionallyBridgeFromObjectiveC(DVar1);
  }
  *param_1 = DVar1.unknown;
  param_1[1] = uVar2;
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x10036ce40 | FUN_10036ce40 */

void FUN_10036ce40(undefined8 param_1)

{
  ScheduledTaskType SVar1;
  undefined7 extraout_var;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  *(undefined8 *)(unaff_x22 + 0x20) = unaff_x20;
  SVar1 = (extension_CoreData)::__C::NSManagedObjectContext::ScheduledTaskType::typeMetadataAccessor
                    ();
  *(long *)(unaff_x22 + 0x28) = CONCAT71(extraout_var,SVar1.value);
  lVar4 = *(long *)(CONCAT71(extraout_var,SVar1.value) + -8);
  *(long *)(unaff_x22 + 0x30) = lVar4;
  uVar2 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x38) = uVar2;
  puVar3 = &DAT_100fbe6e8;
  FUN_1000037f0(&DAT_100fbe6e8,&DAT_100c43250);
  lVar4 = *(long *)(puVar3 + -8);
  *(long *)(unaff_x22 + 0x40) = lVar4;
  lVar4 = *(long *)(lVar4 + 0x40);
  *(long *)(unaff_x22 + 0x48) = lVar4;
  uVar2 = lVar4 + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x50) = uVar2;
  _swift_task_switch(FUN_10036ced4);
  return;
}



/* Address: 0x10036ced4 | FUN_10036ced4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10036ced4(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  ulong uVar8;
  long *plVar9;
  long unaff_x22;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  
  lVar1 = *(long *)(unaff_x22 + 0x48);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x38);
  lVar5 = *(long *)(unaff_x22 + 0x40);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar6 = *(long *)(unaff_x22 + 0x30);
  uVar10 = *(undefined8 *)(*(long *)(unaff_x22 + 0x20) + 0x78);
  uVar11 = *(undefined8 *)(*(long *)(unaff_x22 + 0x20) + 200);
  FUN_100364a64(*(undefined8 *)(unaff_x22 + 0x18),uVar4);
  uVar8 = (ulong)*(byte *)(lVar5 + 0x50);
  uVar12 = uVar8 + 0x10 & (uVar8 ^ 0xffffffffffffffff);
  uVar13 = lVar1 + uVar12 + 7 & 0xfffffffffffffff8;
  puVar7 = &DAT_100ecd118;
  _swift_allocObject(&DAT_100ecd118,uVar13 + 0x10,uVar8 | 7);
  *(undefined **)(unaff_x22 + 0x58) = puVar7;
  FUN_100354148(uVar4,puVar7 + uVar12);
  *(undefined8 *)(puVar7 + uVar13) = uVar10;
  *(undefined8 *)(puVar7 + uVar13 + 8) = uVar11;
  (**(code **)(lVar6 + 0x68))
            (uVar2,*(undefined4 *)
                    PTR___enum_case_for__extension_in_CoreData____C_NSManagedObjectContext_ScheduledTaskType_immediate__extension_in_CoreData____C_NSManagedObjectContext_ScheduledTaskType_Type___>__extension_in_CoreData____C_NSManagedObjectContext_ScheduledTaskType_100ea9990
             ,uVar3);
  plVar9 = (long *)(ulong)*(uint *)(PTR__perform_100ea99b8 + 4);
  _swift_retain(uVar11);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x60) = plVar9;
  FUN_1000037f0(&DAT_100fbedd8,&DAT_100c42ed0);
  *plVar9 = unaff_x22;
  plVar9[1] = (long)FUN_10036d018;
  (extension_CoreData)::__C::NSManagedObjectContext::_perform
            ((ScheduledTaskType)((char)unaff_x22 + 0x10));
  return;
}



/* Address: 0x10036d018 | FUN_10036d018 */

void FUN_10036d018(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  long lVar4;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  *(long *)(lVar4 + 0x68) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0x60));
  uVar2 = *(undefined8 *)(lVar4 + 0x58);
  if (unaff_x20 == 0) {
    uVar3 = *(undefined8 *)(lVar4 + 0x20);
    (**(code **)(*(long *)(lVar4 + 0x30) + 8))
              (*(undefined8 *)(lVar4 + 0x38),*(undefined8 *)(lVar4 + 0x28));
    _swift_release(uVar2);
    pcVar1 = FUN_10036d0a4;
  }
  else {
    uVar3 = *(undefined8 *)(lVar4 + 0x20);
    _swift_release(uVar2);
    pcVar1 = FUN_10036d0ec;
  }
  _swift_task_switch(pcVar1,uVar3,0);
  return;
}



/* Address: 0x10036d0a4 | FUN_10036d0a4 */

void FUN_10036d0a4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x10);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x50));
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010036d0e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar1);
  return;
}



/* Address: 0x10036d0ec | FUN_10036d0ec */

void FUN_10036d0ec(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  (**(code **)(*(long *)(unaff_x22 + 0x30) + 8))(uVar1,*(undefined8 *)(unaff_x22 + 0x28));
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010036d13c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10036d140 | FUN_10036d140 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined8 FUN_10036d140(undefined8 *param_1,undefined *param_2)

{
  ulong uVar1;
  _CocoaArrayWrapper _Var2;
  long lVar3;
  __int64 _Var4;
  code *pcVar5;
  bool bVar6;
  Date DVar7;
  undefined *puVar8;
  NSString *pNVar9;
  _ArrayBuffer self;
  NSArray *pNVar10;
  undefined *self_00;
  ID IVar11;
  undefined1 *puVar12;
  ulong self_01;
  undefined8 *puVar13;
  __int64 *p_Var14;
  undefined *puVar15;
  _StringGuts _Var16;
  undefined **ppuVar17;
  NSArray *pNVar18;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar19;
  long unaff_x21;
  long lVar20;
  undefined1 *puVar21;
  ulong uVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  undefined1 auStack_130 [8];
  undefined8 *local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  long local_108;
  undefined *local_100;
  undefined8 local_e0;
  undefined1 *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  __int64 local_b8;
  long local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_90;
  undefined1 *puStack_88;
  undefined8 uStack_80;
  undefined *local_78;
  long lStack_70;
  undefined1 auStack_58 [8];
  
  puVar8 = &DAT_100fbe6e8;
  local_128 = param_1;
  local_100 = param_2;
  FUN_1000037f0(&DAT_100fbe6e8,&DAT_100c43250);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar21 = auStack_130 + -extraout_x8;
  DVar7 = Foundation::Date::typeMetadataAccessor();
  lVar20 = *(long *)(DVar7.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar20 + 0x40));
  local_108 = (long)puVar21 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  bVar6 = false;
  FUN_1003214a8();
  SVar23 = Swift::__typeName(bVar6);
  puVar8 = &_OBJC_CLASS___NSFetchRequest;
  _objc_allocWithZone();
  pNVar9 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(SVar23.bridgeObject);
  self.unknown = (undefined *)objc_stub::initWithEntityName_(puVar8,pNVar9);
  objc_stub::FUN_100c0d760((ID)self.unknown,2);
  puVar8 = &DAT_100fbec98;
  FUN_1000037f0(&DAT_100fbec98,&DAT_100c40a70);
  puVar15 = puVar8;
  _swift_allocObject();
  uStack_118 = 2;
  local_120 = 1;
  *(undefined8 *)(puVar15 + 0x18) = 2;
  *(undefined8 *)(puVar15 + 0x10) = 1;
  *(undefined **)(puVar15 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
  *(undefined8 *)(puVar15 + 0x20) = 0x696669746e656469;
  *(undefined8 *)(puVar15 + 0x28) = 0xea00000000007265;
  pNVar10 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_release(puVar15);
  objc_stub::FUN_100c0d3e0((ID)self.unknown,pNVar10);
  puVar15 = &DAT_100fbe4e8;
  FUN_1000037f0(&DAT_100fbe4e8,&DAT_100c40a80);
  _swift_allocObject();
  *(undefined8 *)(puVar15 + 0x18) = 3;
  *(undefined8 *)(puVar15 + 0x10) = 1;
  self_00 = &_OBJC_CLASS___NSSortDescriptor;
  _objc_allocWithZone();
  pNVar9 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  pNVar18 = (NSArray *)0x0;
  IVar11 = objc_stub::FUN_100c04440((ID)self_00,pNVar9);
  *(ID *)(puVar15 + 0x20) = IVar11;
  FUN_10000ec2c(0,&DAT_100fbeca0,&PTR__OBJC_CLASS___NSSortDescriptor_100f8db40);
  pNVar10 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_release(puVar15);
  objc_stub::FUN_100c0dbc0((ID)self.unknown,pNVar10);
  FUN_100364a64(local_100,puVar21);
  puVar12 = puVar21;
  (**(code **)(lVar20 + 0x30))(puVar21,1,DVar7.unknown);
  lVar3 = local_108;
  if ((int)puVar12 == 1) {
    FUN_100005808(puVar21,&DAT_100fbe6e8,&DAT_100c43250);
  }
  else {
    (**(code **)(lVar20 + 0x20))(local_108,puVar21,DVar7.unknown);
    _swift_allocObject(puVar8,0x40,7);
    *(undefined8 *)(puVar8 + 0x18) = uStack_118;
    *(undefined8 *)(puVar8 + 0x10) = local_120;
    *(undefined **)(puVar8 + 0x38) = DVar7.unknown;
    FUN_10000cbb0(puVar8 + 0x20);
    (**(code **)(lVar20 + 0x10))();
    pNVar9 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    pNVar18 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
    _swift_release(puVar8);
    IVar11 = objc_stub::FUN_100c07fc0((ID)&_OBJC_CLASS___NSPredicate,pNVar9);
    objc_stub::setPredicate_((ID)self.unknown,IVar11);
    (**(code **)(lVar20 + 8))(lVar3,DVar7.unknown);
  }
  ppuVar17 = &PTR__OBJC_CLASS___NSDictionary_100f8d8e0;
  FUN_10000ec2c(0,&DAT_100fbeca8);
  (extension_CoreData)::__C::NSManagedObjectContext::_fetch();
  if (unaff_x21 == 0) {
    FUN_1000da768(&local_90);
    puVar8 = local_78;
    _Var16.unknown = local_78;
    FUN_100004640(&local_90);
    local_e0 = 0;
    puStack_d8 = (undefined1 *)0xe000000000000000;
    Swift::_StringGuts::grow(0x29,_Var16);
    _swift_bridgeObjectRelease(puStack_d8);
    local_e0 = 0x2064656863746546;
    puStack_d8 = &DAT_e800000000000000;
    if ((ulong)self.unknown >> 0x3e == 0) {
      local_b8 = *(__int64 *)(((ulong)self.unknown & 0xffffffffffffff8) + 0x10);
    }
    else {
      _Var2.unknown = self.unknown & 0xffffffffffffff8;
      if (((ulong)self.unknown & 0x8000000000000000) != 0) {
        _Var2.unknown = self.unknown;
      }
      local_b8 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
    }
    SVar23 = Swift::CustomStringConvertible::get_description();
    SVar26.bridgeObject = pNVar18;
    SVar26.str = (char *)ppuVar17;
    Swift::String::append(SVar23,SVar26);
    _swift_bridgeObjectRelease(SVar23.bridgeObject);
    SVar24.bridgeObject = (void *)0x8000000100da3350;
    SVar24.str = (char *)0xd00000000000001f;
    SVar27.bridgeObject = pNVar18;
    SVar27.str = (char *)ppuVar17;
    Swift::String::append(SVar24,SVar27);
    puVar12 = puStack_d8;
    (**(code **)(lStack_70 + 0x30))
              (0x692d686372616573,0xee0072657865646e,local_e0,puStack_d8,puVar8,lStack_70);
    _swift_bridgeObjectRelease(puVar12);
    FUN_100004594(&local_90);
    *local_128 = PTR___swiftEmptyArrayStorage_100eae0d8;
    if ((ulong)self.unknown >> 0x3e == 0) {
      uVar19 = *(ulong *)(((ulong)self.unknown & 0xffffffffffffff8) + 0x10);
      puVar8 = PTR___type_metadata_for_Swift_String_100eac208;
    }
    else {
      _Var2.unknown = self.unknown & 0xffffffffffffff8;
      if (((ulong)self.unknown & 0x8000000000000000) != 0) {
        _Var2.unknown = self.unknown;
      }
      uVar19 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
      puVar8 = PTR___type_metadata_for_Swift_String_100eac208;
    }
    PTR___type_metadata_for_Swift_String_100eac208 = puVar8;
    if (uVar19 != 0) {
      uVar22 = 0;
      local_100 = PTR___swiftEmptyArrayStorage_100eae0d8;
      do {
        while( true ) {
          if (((ulong)self.unknown & 0xc000000000000001) == 0) {
            if (*(ulong *)(((ulong)self.unknown & 0xffffffffffffff8) + 0x10) <= uVar22) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x10036d994);
              (*pcVar5)();
            }
            self_01 = *(ulong *)(self.unknown + uVar22 * 8 + 0x20);
          }
          else {
            self_01 = uVar22;
            Swift::_ArrayBuffer::__getElementSlowPath(uVar22,self);
          }
          uVar1 = uVar22 + 1;
          if (SCARRY8(uVar22,1)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10036d990);
            (*pcVar5)();
          }
          local_e0 = 0x696669746e656469;
          puStack_d8 = (undefined1 *)0xea00000000007265;
          puVar13 = &local_e0;
          Swift::__bridgeAnythingNonVerbatimToObjectiveC(puVar13,puVar8);
          IVar11 = objc_stub::FUN_100bfd120(self_01,puVar13);
          _swift_unknownObjectRelease(puVar13);
          if (IVar11 == 0) {
            puStack_d8 = (undefined1 *)0x0;
            local_e0 = 0;
            puStack_c8 = (undefined *)0x0;
            uStack_d0 = 0;
          }
          else {
            Swift::__bridgeAnyObjectToAny();
            _swift_unknownObjectRelease(IVar11);
          }
          puStack_88 = puStack_d8;
          local_90 = local_e0;
          local_78 = puStack_c8;
          uStack_80 = uStack_d0;
          if (puStack_c8 != (undefined *)0x0) break;
          FUN_100005808(&local_90,&DAT_100fbe6f0,&DAT_100c42750);
LAB_10036d7b8:
          uVar22 = uVar22 + 1;
          if (uVar1 == uVar19) goto LAB_10036d954;
        }
        p_Var14 = &local_b8;
        _swift_dynamicCast(p_Var14,&local_90,PTR___type_metadata_for_Any_100eae0c0 + 8,puVar8,6);
        lVar3 = local_b0;
        _Var4 = local_b8;
        if ((((ulong)p_Var14 & 1) == 0) || (local_b0 == 0)) goto LAB_10036d7b8;
        puVar15 = local_100;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((ulong)puVar15 & 1) == 0) {
          puVar15 = (undefined *)0x0;
          FUN_10037f834(0,*(long *)(local_100 + 0x10) + 1,1);
          local_100 = puVar15;
        }
        uVar22 = *(ulong *)(local_100 + 0x10);
        if (*(ulong *)(local_100 + 0x18) >> 1 <= uVar22) {
          puVar15 = (undefined *)(ulong)(1 < *(ulong *)(local_100 + 0x18));
          FUN_10037f834(puVar15,uVar22 + 1,1,local_100);
          local_100 = puVar15;
        }
        *(ulong *)(local_100 + 0x10) = uVar22 + 1;
        *(__int64 *)(local_100 + uVar22 * 0x10 + 0x20) = _Var4;
        *(long *)(local_100 + uVar22 * 0x10 + 0x28) = lVar3;
        *local_128 = local_100;
        uVar22 = uVar1;
      } while (uVar1 != uVar19);
    }
LAB_10036d954:
    _swift_bridgeObjectRelease(self.unknown);
  }
  else {
    FUN_1000da768(&local_90);
    lVar3 = lStack_70;
    puVar8 = local_78;
    _Var16.unknown = local_78;
    FUN_100004640(&local_90);
    local_e0 = 0;
    puStack_d8 = (undefined1 *)0xe000000000000000;
    Swift::_StringGuts::grow(0x24,_Var16);
    SVar23.bridgeObject = (void *)0x8000000100da3320;
    SVar23.str = (char *)0xd000000000000022;
    SVar25.bridgeObject = pNVar18;
    SVar25.str = (char *)ppuVar17;
    Swift::String::append(SVar23,SVar25);
    _swift_getErrorValue(unaff_x21,auStack_58,&local_a8);
    Swift::DefaultStringInterpolation::_appendInterpolation(local_a8,uStack_a0);
    puVar12 = puStack_d8;
    (**(code **)(lVar3 + 0x30))
              (0x692d686372616573,0xee0072657865646e,local_e0,puStack_d8,puVar8,lVar3);
    _swift_bridgeObjectRelease(puVar12);
    FUN_100004594(&local_90);
    FUN_1000da768(&local_90);
    FUN_100004640(&local_90,local_78);
    (**(code **)(lStack_70 + 0x20))(unaff_x21,local_78,lStack_70);
    FUN_100004594(&local_90);
    _swift_willThrow();
  }
  return 0;
}



/* Address: 0x10036d9a8 | FUN_10036d9a8 */

void FUN_10036d9a8(undefined8 param_1)

{
  ScheduledTaskType SVar1;
  undefined7 extraout_var;
  ulong uVar2;
  long lVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  *(undefined8 *)(unaff_x22 + 0x20) = unaff_x20;
  SVar1 = (extension_CoreData)::__C::NSManagedObjectContext::ScheduledTaskType::typeMetadataAccessor
                    ();
  *(long *)(unaff_x22 + 0x28) = CONCAT71(extraout_var,SVar1.value);
  lVar3 = *(long *)(CONCAT71(extraout_var,SVar1.value) + -8);
  *(long *)(unaff_x22 + 0x30) = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x38) = uVar2;
  _swift_task_switch(FUN_10036da08);
  return;
}



/* Address: 0x10036da08 | FUN_10036da08 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10036da08(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long *plVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar1 = *(long *)(unaff_x22 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x38);
  lVar2 = *(long *)(unaff_x22 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar3 = *(undefined8 *)(lVar2 + 0x70);
  uVar6 = *(undefined8 *)(lVar2 + 0x78);
  puVar7 = &DAT_100ecd0f0;
  _swift_allocObject(&DAT_100ecd0f0,0x38,7);
  uVar10 = *(undefined8 *)(lVar2 + 200);
  uVar12 = *(undefined8 *)(lVar2 + 200);
  uVar11 = *(undefined8 *)(lVar2 + 0xc0);
  *(undefined **)(unaff_x22 + 0x40) = puVar7;
  *(undefined8 *)(puVar7 + 0x10) = uVar9;
  *(undefined8 *)(puVar7 + 0x18) = uVar6;
  *(undefined8 *)(puVar7 + 0x28) = uVar12;
  *(undefined8 *)(puVar7 + 0x20) = uVar11;
  *(undefined8 *)(puVar7 + 0x30) = uVar3;
  (**(code **)(lVar1 + 0x68))
            (uVar4,*(undefined4 *)
                    PTR___enum_case_for__extension_in_CoreData____C_NSManagedObjectContext_ScheduledTaskType_immediate__extension_in_CoreData____C_NSManagedObjectContext_ScheduledTaskType_Type___>__extension_in_CoreData____C_NSManagedObjectContext_ScheduledTaskType_100ea9990
             ,uVar5);
  plVar8 = (long *)(ulong)*(uint *)(PTR__perform_100ea99b8 + 4);
  _swift_retain(uVar11);
  _swift_retain(uVar10);
  _swift_bridgeObjectRetain(uVar9);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x48) = plVar8;
  FUN_1000037f0(&DAT_100fc1498,&DAT_100c43248);
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_10036db38;
  (extension_CoreData)::__C::NSManagedObjectContext::_perform
            ((ScheduledTaskType)((char)unaff_x22 + 0x10));
  return;
}



/* Address: 0x10036db38 | FUN_10036db38 */

void FUN_10036db38(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x48));
  uVar2 = *(undefined8 *)(lVar3 + 0x40);
  if (unaff_x20 != 0) {
    _swift_errorRelease();
    _swift_release(uVar2);
    return;
  }
  uVar1 = *(undefined8 *)(lVar3 + 0x20);
  (**(code **)(*(long *)(lVar3 + 0x30) + 8))
            (*(undefined8 *)(lVar3 + 0x38),*(undefined8 *)(lVar3 + 0x28));
  _swift_release(uVar2);
  _swift_task_switch(FUN_10036dbc8,uVar1,0);
  return;
}



/* Address: 0x10036dbc8 | FUN_10036dbc8 */

void FUN_10036dbc8(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x10);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010036dbfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar1);
  return;
}



/* Address: 0x10036dc00 | FUN_10036dc00 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8
FUN_10036dc00(undefined8 *param_1,long param_2,ID param_3,undefined8 param_4,void *param_5,
             undefined8 param_6)

{
  _CocoaArrayWrapper _Var1;
  void *pvVar2;
  NSPredicate *pNVar3;
  code *pcVar4;
  _ArrayBuffer self;
  NSPredicate *pNVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  ulong uVar10;
  _StringGuts _Var11;
  char *pcVar12;
  char *pcVar13;
  long lVar14;
  long extraout_x8;
  long unaff_x21;
  __int64 _Var15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  undefined *local_1f0;
  undefined **local_1e8;
  NSPredicate *local_1e0;
  undefined *local_1d8;
  ID local_1d0;
  undefined8 *local_1c8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c0 [8];
  char local_b8 [24];
  __int64 local_a0;
  void *local_98;
  undefined *local_90 [3];
  char *local_78;
  NSPredicate *pNStack_70;
  undefined1 auStack_58 [8];
  
  self.unknown = (undefined *)0x0;
  local_1c8 = param_1;
  FUN_100371e9c();
  lVar14 = *(long *)(self.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar14 + 0x40));
  lVar18 = (long)&local_1f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_100329754();
  pNVar5 = (NSPredicate *)0x0;
  FUN_10000ec2c(0,&DAT_100fbeb38,&PTR__OBJC_CLASS___NSPredicate_100f8db30);
  puVar6 = &DAT_100fbeb40;
  FUN_1000037f0("identifier IN %@",&DAT_100fbeb40,&DAT_100c42e40);
  _swift_allocObject();
  *(undefined8 *)(puVar6 + 0x18) = 2;
  *(undefined8 *)(puVar6 + 0x10) = 1;
  puVar7 = &DAT_100fbedd8;
  FUN_1000037f0(&DAT_100fbedd8,&DAT_100c42ed0);
  *(undefined **)(puVar6 + 0x38) = puVar7;
  FUN_100371194();
  *(undefined **)(puVar6 + 0x40) = puVar7;
  *(long *)(puVar6 + 0x20) = param_2;
  _swift_bridgeObjectRetain(param_2);
  pNVar5 = (extension_Foundation)::__C::NSPredicate::___allocating_init(pNVar5);
  objc_stub::setPredicate_((ID)self.unknown);
  FUN_1003214a8(0);
  local_1d8 = self.unknown;
  local_1d0 = param_3;
  (extension_CoreData)::__C::NSManagedObjectContext::_fetch();
  if (unaff_x21 == 0) {
    _swift_bridgeObjectRetain();
  }
  else {
    FUN_1000d468c(local_90);
    pNVar5 = pNStack_70;
    pcVar13 = local_78;
    _Var11.unknown = local_78;
    FUN_100004640(local_90);
    local_a0 = 0;
    local_98 = (void *)0xe000000000000000;
    Swift::_StringGuts::grow(0x26,_Var11);
    _swift_bridgeObjectRelease(local_98);
    local_a0 = 0xd000000000000024;
    local_98 = (void *)0x8000000100da3280;
    pcVar12 = local_b8;
    _swift_getErrorValue(unaff_x21,auStack_58);
    SVar20 = (extension_Foundation)::Swift::Error::get_localizedDescription();
    SVar22.bridgeObject = param_5;
    SVar22.str = pcVar12;
    Swift::String::append(SVar20,SVar22);
    _swift_bridgeObjectRelease(SVar20.bridgeObject);
    pvVar2 = local_98;
    FUN_1000d4e0c(local_a0,local_98);
    _swift_bridgeObjectRelease(pvVar2);
    FUN_100004594(local_90);
    FUN_1000da768(local_90);
    pNVar3 = pNStack_70;
    pcVar12 = local_78;
    _Var11.unknown = local_78;
    FUN_100004640(local_90);
    local_a0 = 0;
    local_98 = (void *)0xe000000000000000;
    Swift::_StringGuts::grow(0x19,_Var11);
    SVar20.bridgeObject = (void *)0x8000000100da32b0;
    SVar20.str = (char *)0xd000000000000017;
    SVar23.bridgeObject = pNVar5;
    SVar23.str = pcVar13;
    Swift::String::append(SVar20,SVar23);
    _swift_getErrorValue(unaff_x21,auStack_c0,&local_d8);
    Swift::DefaultStringInterpolation::_appendInterpolation(local_d8,uStack_d0);
    pvVar2 = local_98;
    param_5 = local_98;
    (**(code **)(pNVar3 + 0x30))
              (0x692d686372616573,0xee0072657865646e,local_a0,local_98,pcVar12,pNVar3);
    _swift_bridgeObjectRelease(pvVar2);
    FUN_100004594(local_90);
    FUN_1000da768(local_90);
    pNVar5 = pNStack_70;
    pcVar13 = local_78;
    FUN_100004640(local_90,local_78);
    (**(code **)(pNVar5 + 0x20))(unaff_x21,pcVar13);
    FUN_100004594(local_90);
    _swift_errorRelease(unaff_x21);
    self.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  uVar16 = (ulong)self.unknown >> 0x3e;
  if (uVar16 == 0) {
    _Var15 = *(__int64 *)((self.unknown & 0xffffffffffffff8U) + 0x10);
  }
  else {
    _Var1.unknown = self.unknown & 0xffffffffffffff8U;
    if (((ulong)self.unknown & 0x8000000000000000) != 0) {
      _Var1.unknown = self.unknown;
    }
    _Var15 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  _swift_bridgeObjectRelease(self.unknown);
  lVar19 = *(long *)(param_2 + 0x10);
  if (_Var15 != lVar19) {
    FUN_1000d468c(local_90);
    pNVar3 = pNStack_70;
    pcVar13 = local_78;
    ppuVar8 = local_90;
    _Var11.unknown = local_78;
    FUN_100004640();
    local_a0 = 0;
    local_98 = (void *)0xe000000000000000;
    local_1e0 = (NSPredicate *)ppuVar8;
    Swift::_StringGuts::grow(0x2e,_Var11);
    _swift_bridgeObjectRelease(local_98);
    local_a0 = 0x6574736575716552;
    local_98 = (void *)0xea00000000002064;
    SVar20 = Swift::CustomStringConvertible::get_description();
    SVar24.bridgeObject = param_5;
    SVar24.str = (char *)pNVar5;
    Swift::String::append(SVar20,SVar24);
    _swift_bridgeObjectRelease(SVar20.bridgeObject);
    SVar21.bridgeObject = (void *)0x8000000100da32d0;
    SVar21.str = (char *)0xd000000000000020;
    SVar25.bridgeObject = param_5;
    SVar25.str = (char *)pNVar5;
    Swift::String::append(SVar21,SVar25);
    if (uVar16 == 0) {
      _Var15 = *(__int64 *)((self.unknown & 0xffffffffffffff8U) + 0x10);
    }
    else {
      _Var1.unknown = self.unknown & 0xffffffffffffff8U;
      if (((ulong)self.unknown & 0x8000000000000000) != 0) {
        _Var1.unknown = self.unknown;
      }
      _Var15 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
    }
    SVar20 = Swift::CustomStringConvertible::get_description();
    SVar26.bridgeObject = param_5;
    SVar26.str = (char *)pNVar5;
    Swift::String::append(SVar20,SVar26);
    _swift_bridgeObjectRelease(SVar20.bridgeObject);
    pvVar2 = local_98;
    FUN_1000d4df0(local_a0,local_98,pcVar13,pNVar3);
    _swift_bridgeObjectRelease(pvVar2);
    FUN_100004594(local_90);
    FUN_1000da768(local_90);
    local_1e0 = pNStack_70;
    ppuVar8 = local_90;
    FUN_100004640();
    local_1e8 = ppuVar8;
    FUN_100371228();
    puVar6 = &DAT_100ecd1b0;
    _swift_allocError(&DAT_100ecd1b0,ppuVar8,0,0);
    puVar7 = &DAT_100fbf9d8;
    local_1f0 = puVar6;
    FUN_1000037f0(&DAT_100fbf9d8,&DAT_100c42b00);
    _swift_initStackObject();
    *(undefined8 *)(puVar7 + 0x20) = 0x656372756f73;
    *(undefined8 *)(puVar7 + 0x18) = 6;
    *(undefined8 *)(puVar7 + 0x10) = 3;
    puVar6 = PTR___type_metadata_for_Swift_String_100eac208;
    *(undefined1 **)(puVar7 + 0x28) = &DAT_e600000000000000;
    *(undefined8 *)(puVar7 + 0x30) = 0xd000000000000014;
    *(undefined8 *)(puVar7 + 0x38) = 0x8000000100da3300;
    *(undefined **)(puVar7 + 0x48) = puVar6;
    *(undefined8 *)(puVar7 + 0x50) = 0x6574736575716572;
    *(undefined8 *)(puVar7 + 0x58) = 0xe900000000000064;
    local_a0 = lVar19;
    SVar20 = Swift::CustomStringConvertible::get_description();
    *(String *)(puVar7 + 0x60) = SVar20;
    *(undefined **)(puVar7 + 0x78) = puVar6;
    *(undefined8 *)(puVar7 + 0x80) = 0x64656863746566;
    *(undefined1 **)(puVar7 + 0x88) = &DAT_e700000000000000;
    local_a0 = _Var15;
    SVar20 = Swift::CustomStringConvertible::get_description();
    *(undefined **)(puVar7 + 0xa8) = puVar6;
    *(String *)(puVar7 + 0x90) = SVar20;
    puVar9 = puVar7;
    FUN_1003c8f44(puVar7);
    _swift_setDeallocating(puVar7);
    puVar6 = &DAT_100fbf9e0;
    FUN_1000037f0(&DAT_100fbf9e0,&DAT_100c422f0);
    _swift_arrayDestroy(puVar7 + 0x20,3,puVar6);
    puVar6 = local_1f0;
    (**(code **)(local_1e0 + 0x28))(local_1f0,puVar9,local_78);
    _swift_bridgeObjectRelease(puVar9);
    _swift_errorRelease(puVar6);
    FUN_100004594(local_90);
  }
  if (uVar16 == 0) {
    uVar16 = *(ulong *)((self.unknown & 0xffffffffffffff8U) + 0x10);
  }
  else {
    _Var1.unknown = self.unknown & 0xffffffffffffff8U;
    if (((ulong)self.unknown & 0x8000000000000000) != 0) {
      _Var1.unknown = self.unknown;
    }
    uVar16 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  puVar6 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar16 != 0) {
    local_90[0] = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_1003077a8(0,uVar16 & ((long)uVar16 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar16 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10036e39c);
      (*pcVar4)();
    }
    uVar17 = 0;
    puVar6 = local_90[0];
    do {
      if (((ulong)self.unknown & 0xc000000000000001) == 0) {
        uVar10 = *(ulong *)(self.unknown + uVar17 * 8 + 0x20);
      }
      else {
        uVar10 = uVar17;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar17,self);
      }
      FUN_100371998(lVar18,uVar10,param_6);
      uVar10 = *(ulong *)(puVar6 + 0x10);
      local_90[0] = puVar6;
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar10) {
        FUN_1003077a8(1 < *(ulong *)(puVar6 + 0x18),uVar10 + 1,1);
      }
      puVar6 = local_90[0];
      uVar17 = uVar17 + 1;
      *(ulong *)(local_90[0] + 0x10) = uVar10 + 1;
      FUN_1003711e4(lVar18,local_90[0] +
                           *(long *)(lVar14 + 0x48) * uVar10 +
                           ((ulong)*(byte *)(lVar14 + 0x50) + 0x20 &
                           ((ulong)*(byte *)(lVar14 + 0x50) ^ 0xffffffffffffffff)));
    } while (uVar16 != uVar17);
  }
  objc_stub::reset(local_1d0);
  puVar7 = puVar6;
  FUN_1002faafc();
  _swift_bridgeObjectRelease(self.unknown);
  _swift_bridgeObjectRelease(puVar6);
  *local_1c8 = puVar7;
  return 0;
}



/* Address: 0x10036e3ac | FUN_10036e3ac */

void FUN_10036e3ac(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = unaff_x20;
  _swift_task_switch(FUN_10036e3c4);
  return;
}



/* Address: 0x10036e3c4 | FUN_10036e3c4 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10036e3c4(void)

{
  _CocoaArrayWrapper _Var1;
  code *pcVar2;
  _ArrayBuffer _Var3;
  ID IVar4;
  __int64 _Var5;
  long unaff_x22;
  String SVar6;
  
  _Var3.unknown =
       (undefined *)objc_stub::persistentStores(*(ID *)(*(long *)(unaff_x22 + 0x10) + 0x70));
  FUN_10000ec2c(0,&DAT_100fc0448,&PTR__OBJC_CLASS___NSPersistentStore_100f8dbb0);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  if ((ulong)_Var3.unknown >> 0x3e == 0) {
    if (*(long *)(((ulong)_Var3.unknown & 0xffffffffffffff8) + 0x10) != 0) goto LAB_10036e438;
LAB_10036e4b8:
    _swift_bridgeObjectRelease(_Var3.unknown);
  }
  else {
    _Var1.unknown = _Var3.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < _Var3.unknown) {
      _Var1.unknown = _Var3.unknown;
    }
    _Var5 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
    if (_Var5 == 0) goto LAB_10036e4b8;
LAB_10036e438:
    if (((ulong)_Var3.unknown & 0xc000000000000001) == 0) {
      if (*(long *)(((ulong)_Var3.unknown & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10036e4f4);
        (*pcVar2)();
      }
      IVar4 = *(ID *)(_Var3.unknown + 0x20);
    }
    else {
      IVar4 = 0;
      Swift::_ArrayBuffer::__getElementSlowPath(0,_Var3);
    }
    _swift_bridgeObjectRelease(_Var3.unknown);
    IVar4 = objc_stub::identifier(IVar4);
    if (IVar4 != 0) {
      SVar6 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      goto LAB_10036e4c8;
    }
  }
  SVar6 = (String)ZEXT816(0);
LAB_10036e4c8:
                    /* WARNING: Could not recover jumptable at 0x00010036e4dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(SVar6.str,SVar6.bridgeObject);
  return;
}



/* Address: 0x10036e4f4 | FUN_10036e4f4 */

void FUN_10036e4f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x88) = param_2;
  *(undefined8 *)(unaff_x22 + 0x90) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x80) = param_1;
  puVar1 = &DAT_100fc1450;
  FUN_1000037f0(&DAT_100fc1450,&DAT_100c431b8);
  *(undefined **)(unaff_x22 + 0x98) = puVar1;
  lVar3 = *(long *)(puVar1 + -8);
  *(long *)(unaff_x22 + 0xa0) = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xa8) = uVar2;
  puVar1 = &DAT_100fc1458;
  FUN_1000037f0(&DAT_100fc1458,&DAT_100c431c0);
  *(undefined **)(unaff_x22 + 0xb0) = puVar1;
  lVar3 = *(long *)(puVar1 + -8);
  *(long *)(unaff_x22 + 0xb8) = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xc0) = uVar2;
  puVar1 = &DAT_100fc1460;
  FUN_1000037f0(&DAT_100fc1460,&DAT_100c431c8);
  *(undefined **)(unaff_x22 + 200) = puVar1;
  lVar3 = *(long *)(puVar1 + -8);
  *(long *)(unaff_x22 + 0xd0) = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xd8) = uVar2;
  _swift_task_switch(FUN_10036e5cc);
  return;
}



/* Address: 0x10036e5cc | FUN_10036e5cc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x00010036e700) */

void FUN_10036e5cc(void)

{
  Data ofClass;
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x22;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58 [2];
  
  lVar6 = *(long *)(unaff_x22 + 0x90);
  _swift_beginAccess(lVar6 + 0x80,unaff_x22 + 0x48,0,0);
  uVar4 = *(undefined8 *)(lVar6 + 0xb0);
  uVar9 = *(undefined8 *)(lVar6 + 0x98);
  uVar7 = *(undefined8 *)(lVar6 + 0x90);
  uVar10 = *(undefined8 *)(lVar6 + 0xa8);
  uVar8 = *(undefined8 *)(lVar6 + 0xa0);
  uVar11 = *(undefined8 *)(lVar6 + 0x80);
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(lVar6 + 0x88);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar4;
  uVar8 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x30);
  _swift_retain(uVar8);
  _swift_retain(uVar10);
  _swift_retain(uVar7);
  _swift_retain(uVar9);
  _swift_retain(uVar4);
  FUN_1000037f0(&DAT_100fc1468,&DAT_100c431d0);
  FUN_1002ca7e0(unaff_x22 + 0x60);
  _swift_release(uVar8);
  _swift_release(uVar10);
  _swift_release(uVar7);
  _swift_release(uVar9);
  _swift_release(uVar4);
  ofClass.unknown = (undefined *)0x0;
  uVar5 = *(ulong *)(unaff_x22 + 0x68);
  if (uVar5 >> 0x3c < 0xf) {
    uVar8 = *(undefined8 *)(unaff_x22 + 0x60);
    FUN_10000ec2c(0,&DAT_100fc0290,&PTR__OBJC_CLASS___NSKeyedUnarchiver_100f8dba8);
    ofClass.unknown = (undefined *)0x0;
    FUN_10000ec2c(0,&DAT_100fc1470,&PTR__OBJC_CLASS___NSPersistentHistoryToken_100f8dc00);
    (extension_Foundation)::__C::NSKeyedUnarchiver::_unarchivedObject(ofClass);
    FUN_10003bf18(uVar8,uVar5);
  }
  lVar6 = *(long *)(unaff_x22 + 0x90);
  *(undefined **)(lVar6 + 0xb8) = ofClass.unknown;
  lVar6 = *(long *)(lVar6 + 0xb8);
  if (lVar6 == 0) {
    local_68 = 0;
    uStack_60 = 0xf000000000000000;
  }
  else {
    local_58[0] = lVar6;
    FUN_10036cd4c(&local_68,local_58);
  }
  uVar8 = *(undefined8 *)(unaff_x22 + 0x90);
  puVar1 = &DAT_100c431d8;
  _swift_getKeyPath(&DAT_100c431d8);
  puVar2 = &DAT_100c43200;
  _swift_getKeyPath(&DAT_100c43200);
  *(undefined8 *)(unaff_x22 + 0x70) = local_68;
  *(undefined8 *)(unaff_x22 + 0x78) = uStack_60;
  _swift_retain(uVar8);
  FUN_1002cb5a0((undefined8 *)(unaff_x22 + 0x70),uVar8,puVar1,puVar2);
  plVar3 = (long *)0x230;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xe0) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_10036e808;
  FUN_10036eaf0(*(undefined8 *)(unaff_x22 + 0x80),*(undefined8 *)(unaff_x22 + 0x88));
  return;
}



/* Address: 0x10036e808 | FUN_10036e808 */

void FUN_10036e808(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x90);
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0xe0));
  _swift_task_switch(FUN_10036e854,uVar1,0);
  return;
}



/* Address: 0x10036e854 | FUN_10036e854 */

void FUN_10036e854(void)

{
  AsyncStream AVar1;
  long *plVar2;
  long unaff_x22;
  
  AVar1.unknown = *(undefined **)(unaff_x22 + 200);
  (**(code **)(*(long *)(unaff_x22 + 0xb8) + 0x68))
            (*(undefined8 *)(unaff_x22 + 0xc0),
             *(undefined4 *)
              PTR___enum_case_for_Swift_AsyncStream_Continuation_BufferingPolicy_unbounded<A>_Swift_AsyncStream<A>_Continuation_BufferingPolicy_Type___>_Swift_AsyncStream<A>_Continuation_BufferingPolicy_100eaec78
             ,*(undefined8 *)(unaff_x22 + 0xb0));
  Swift::AsyncStream::_init((BufferingPolicy)((char)PTR___type_metadata_for____100eae0c8 + 8));
  Swift::AsyncStream::_makeAsyncIterator(AVar1);
  plVar2 = (long *)(ulong)*(uint *)(PTR__next_100eaecc8 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xe8) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_10036e91c;
  Swift::AsyncStream::Iterator::_next((undefined *)(unaff_x22 + 0x100));
  return;
}



/* Address: 0x10036e91c | FUN_10036e91c */

void FUN_10036e91c(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x90);
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0xe8));
  _swift_task_switch(FUN_10036e968,uVar1,0);
  return;
}



/* Address: 0x10036e968 | FUN_10036e968 */

void FUN_10036e968(Task param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  long *plVar7;
  long unaff_x22;
  
  if ((*(char *)(unaff_x22 + 0x100) != '\x01') &&
     (bVar6 = (extension_Swift)::Swift::Task::_get_isCancelled(param_1), !bVar6)) {
    plVar7 = (long *)0x230;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xf0) = plVar7;
    *plVar7 = unaff_x22;
    plVar7[1] = (long)FUN_10036ea3c;
    FUN_10036eaf0(*(undefined8 *)(unaff_x22 + 0x80),*(undefined8 *)(unaff_x22 + 0x88));
    return;
  }
  lVar1 = *(long *)(unaff_x22 + 0xd0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar4 = *(undefined8 *)(unaff_x22 + 200);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xa8);
  (**(code **)(*(long *)(unaff_x22 + 0xa0) + 8))(uVar5,*(undefined8 *)(unaff_x22 + 0x98));
  (**(code **)(lVar1 + 8))(uVar3,uVar4);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010036e9f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10036ea3c | FUN_10036ea3c */

void FUN_10036ea3c(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xf0));
  plVar1 = (long *)(ulong)*(uint *)(PTR__next_100eaecc8 + 4);
  _swift_task_alloc();
  *(long **)(lVar2 + 0xf8) = plVar1;
  *plVar1 = lVar3;
  plVar1[1] = (long)FUN_10036eaa4;
  Swift::AsyncStream::Iterator::_next((undefined *)(lVar2 + 0x100));
  return;
}



/* Address: 0x10036eaa4 | FUN_10036eaa4 */

void FUN_10036eaa4(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x90);
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0xf8));
  _swift_task_switch(thunk_FUN_10036e968,uVar1,0);
  return;
}



/* Address: 0x10036eaf0 | FUN_10036eaf0 */

void FUN_10036eaf0(undefined8 param_1,undefined8 param_2)

{
  CancellationError CVar1;
  ulong uVar2;
  long lVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x1d8) = param_2;
  *(undefined8 *)(unaff_x22 + 0x1e0) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x1d0) = param_1;
  CVar1 = Swift::CancellationError::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x1e8) = CVar1.unknown;
  lVar3 = *(long *)(CVar1.unknown + -8);
  *(long *)(unaff_x22 + 0x1f0) = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1f8) = uVar2;
  _swift_task_switch(FUN_10036eb54);
  return;
}



/* Address: 0x10036eb54 | FUN_10036eb54 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x00010036ec48) */
/* WARNING: Removing unreachable block (ram,0x00010036ef94) */
/* WARNING: Removing unreachable block (ram,0x00010036ede0) */
/* WARNING: Removing unreachable block (ram,0x00010036ef98) */

void FUN_10036eb54(void)

{
  _CocoaArrayWrapper _Var1;
  int iVar2;
  char *pcVar3;
  __int64 _Var4;
  long lVar5;
  undefined *puVar6;
  long *plVar7;
  _StringGuts _Var8;
  void *pvVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long unaff_x22;
  int *piVar12;
  long lVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  
  lVar13 = *(long *)(unaff_x22 + 0x1e0);
  *(undefined8 *)(unaff_x22 + 0x200) = *(undefined8 *)(lVar13 + 200);
  FUN_1000da768(unaff_x22 + 0x30);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x48);
  lVar5 = *(long *)(unaff_x22 + 0x50);
  FUN_100004640(unaff_x22 + 0x30,uVar10);
  pvVar9 = (void *)0x8000000100da31c0;
  (**(code **)(lVar5 + 0x30))
            (0x692d686372616573,0xee0072657865646e,0xd00000000000001f,0x8000000100da31c0,uVar10,
             lVar5);
  FUN_100004594(unaff_x22 + 0x30);
  uVar10 = *(undefined8 *)(lVar13 + 0x78);
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(lVar13 + 0xb8);
  *(undefined8 *)(unaff_x22 + 0x28) = uVar10;
  pcVar3 = &DAT_100fc1488;
  FUN_1000037f0(&DAT_100fc1488,&DAT_100c43238);
  (extension_CoreData)::__C::NSManagedObjectContext::_performAndWait();
  puVar11 = *(undefined **)(unaff_x22 + 0x1a8);
  *(undefined **)(unaff_x22 + 0x208) = puVar11;
  FUN_1000da768(unaff_x22 + 0xa8,0);
  puVar6 = *(undefined **)(unaff_x22 + 0xc0);
  lVar5 = *(long *)(unaff_x22 + 200);
  _Var8.unknown = puVar6;
  FUN_100004640(unaff_x22 + 0xa8);
  Swift::_StringGuts::grow(0x17,_Var8);
  _swift_bridgeObjectRelease(0xe000000000000000);
  if ((ulong)puVar11 >> 0x3e == 0) {
    _Var4 = *(__int64 *)((undefined *)((ulong)puVar11 & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = (undefined *)((ulong)puVar11 & 0xffffffffffffff8);
    if (((ulong)puVar11 & 0x8000000000000000) != 0) {
      _Var1.unknown = puVar11;
    }
    _Var4 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  *(__int64 *)(unaff_x22 + 0x1b8) = _Var4;
  SVar14 = Swift::CustomStringConvertible::get_description();
  SVar15.bridgeObject = pvVar9;
  SVar15.str = pcVar3;
  Swift::String::append(SVar14,SVar15);
  _swift_bridgeObjectRelease(SVar14.bridgeObject);
  SVar14.bridgeObject = (void *)0xed0000736e6f6974;
  SVar14.str = (char *)0x6361736e61727420;
  SVar16.bridgeObject = pvVar9;
  SVar16.str = pcVar3;
  Swift::String::append(SVar14,SVar16);
  (**(code **)(lVar5 + 0x30))
            (0x692d686372616573,0xee0072657865646e,0x2064656863746546,&DAT_e800000000000000,puVar6,
             lVar5);
  _swift_bridgeObjectRelease(&DAT_e800000000000000);
  FUN_100004594(unaff_x22 + 0xa8);
  if ((ulong)puVar11 >> 0x3e == 0) {
    lVar5 = *(long *)((undefined *)((ulong)puVar11 & 0xffffffffffffff8) + 0x10);
    *(long *)(unaff_x22 + 0x210) = lVar5;
  }
  else {
    _Var1.unknown = (undefined *)((ulong)puVar11 & 0xffffffffffffff8);
    if (((ulong)puVar11 & 0x8000000000000000) != 0) {
      _Var1.unknown = puVar11;
    }
    lVar5 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
    *(long *)(unaff_x22 + 0x210) = lVar5;
  }
  if (lVar5 == 0) {
    _swift_bridgeObjectRelease(puVar11);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x1f8));
                    /* WARNING: Could not recover jumptable at 0x00010036f00c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar10 = *(undefined8 *)(unaff_x22 + 0x1e0);
  piVar12 = *(int **)(unaff_x22 + 0x1d0);
  FUN_10036fa2c();
  *(undefined **)(unaff_x22 + 0x218) = puVar11;
  puVar6 = puVar11;
  FUN_1003710d8();
  iVar2 = *piVar12;
  plVar7 = (long *)(ulong)(uint)piVar12[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x220) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_10036f040;
                    /* WARNING: Could not recover jumptable at 0x00010036ef90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar2 + (long)piVar12))(uVar10,puVar6,puVar11);
  return;
}



/* Address: 0x10036f040 | FUN_10036f040 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10036f040(void)

{
  code *pcVar1;
  ulong self;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  _ArrayBuffer _Var5;
  _StringGuts _Var6;
  char *pcVar7;
  long unaff_x20;
  undefined8 uVar8;
  void *pvVar9;
  undefined8 uVar10;
  long lVar11;
  long *unaff_x22;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  String SVar15;
  String SVar16;
  undefined8 local_78;
  undefined8 local_70;
  long local_68 [2];
  
  lVar14 = *unaff_x22;
  uVar8 = *(undefined8 *)(lVar14 + 0x218);
  lVar12 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar14 + 0x220));
  _swift_bridgeObjectRelease(uVar8);
  if (unaff_x20 == 0) {
    self = *(long *)(lVar14 + 0x210) - 1;
    if (SBORROW8(*(long *)(lVar14 + 0x210),1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10036f3c0);
      (*pcVar1)();
    }
    _Var5.unknown = *(undefined **)(lVar14 + 0x208);
    if (((ulong)_Var5.unknown & 0xc000000000000001) == 0) {
      if ((long)self < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10036f3cc);
        (*pcVar1)();
      }
      if (*(ulong *)(((ulong)_Var5.unknown & 0xffffffffffffff8) + 0x10) <= self) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10036f3d0);
        (*pcVar1)();
      }
      self = *(ulong *)(_Var5.unknown + self * 8 + 0x20);
    }
    else {
      Swift::_ArrayBuffer::__getElementSlowPath(self,_Var5);
    }
    IVar2 = objc_stub::token(self);
    if (IVar2 != 0) {
      lVar11 = *(long *)(lVar14 + 0x1e0);
      *(ID *)(lVar11 + 0xb8) = IVar2;
      lVar11 = *(long *)(lVar11 + 0xb8);
      if (lVar11 == 0) {
        uVar8 = 0;
        uVar10 = 0xf000000000000000;
      }
      else {
        local_68[0] = lVar11;
        FUN_10036cd4c(&local_78,local_68);
        uVar8 = local_78;
        uVar10 = local_70;
      }
      uVar13 = *(undefined8 *)(lVar14 + 0x1e0);
      puVar3 = &DAT_100c431d8;
      _swift_getKeyPath(&DAT_100c431d8);
      puVar4 = &DAT_100c43200;
      _swift_getKeyPath(&DAT_100c43200);
      *(undefined8 *)(lVar14 + 0x198) = uVar8;
      *(undefined8 *)(lVar14 + 0x1a0) = uVar10;
      _swift_retain(uVar13);
      FUN_1002cb5a0(lVar14 + 0x198,uVar13,puVar3,puVar4);
    }
    uVar10 = *(undefined8 *)(lVar14 + 0x208);
    FUN_1000da768(lVar14 + 0x120,0);
    uVar8 = *(undefined8 *)(lVar14 + 0x138);
    lVar11 = *(long *)(lVar14 + 0x140);
    FUN_100004640(lVar14 + 0x120,uVar8);
    (**(code **)(lVar11 + 0x30))
              (0x692d686372616573,0xee0072657865646e,0xd000000000000028,0x8000000100da3250,uVar8,
               lVar11);
    _swift_bridgeObjectRelease(uVar10);
    lVar11 = lVar14 + 0x120;
  }
  else {
    uVar8 = *(undefined8 *)(lVar14 + 0x1f8);
    pvVar9 = *(void **)(lVar14 + 0x1e8);
    *(long *)(lVar14 + 0x1c0) = unaff_x20;
    _swift_errorRetain();
    puVar3 = &DAT_100fc1bb0;
    FUN_1000037f0(&DAT_100fc1bb0,&DAT_100c422e0);
    _swift_dynamicCast(uVar8,lVar14 + 0x1c0,puVar3,pvVar9,0);
    uVar10 = *(undefined8 *)(lVar14 + 0x208);
    if ((int)uVar8 != 0) {
      lVar11 = *(long *)(lVar14 + 0x1f0);
      uVar8 = *(undefined8 *)(lVar14 + 0x1f8);
      uVar13 = *(undefined8 *)(lVar14 + 0x1e8);
      _swift_errorRelease();
      _swift_bridgeObjectRelease(uVar10);
      (**(code **)(lVar11 + 8))(uVar8,uVar13);
      _swift_errorRelease(*(undefined8 *)(lVar14 + 0x1c0));
      goto LAB_10036f390;
    }
    _swift_errorRelease(*(undefined8 *)(lVar14 + 0x1c0));
    FUN_1000d468c(lVar14 + 0xd0);
    puVar3 = *(undefined **)(lVar14 + 0xe8);
    uVar8 = *(undefined8 *)(lVar14 + 0xf0);
    _Var6.unknown = puVar3;
    FUN_100004640(lVar14 + 0xd0);
    local_78 = 0;
    local_70 = 0xe000000000000000;
    Swift::_StringGuts::grow(0x24,_Var6);
    _swift_bridgeObjectRelease(local_70);
    local_78 = 0xd000000000000022;
    local_70 = 0x8000000100da3220;
    pcVar7 = (char *)(lVar14 + 0x160);
    _swift_getErrorValue();
    SVar15 = (extension_Foundation)::Swift::Error::get_localizedDescription();
    SVar16.bridgeObject = pvVar9;
    SVar16.str = pcVar7;
    Swift::String::append(SVar15,SVar16);
    _swift_bridgeObjectRelease(SVar15.bridgeObject);
    uVar13 = local_70;
    FUN_1000d4df0(local_78,local_70,puVar3,uVar8);
    _swift_bridgeObjectRelease(uVar13);
    FUN_100004594(lVar14 + 0xd0);
    FUN_1000da768(lVar14 + 0xf8);
    lVar11 = *(long *)(lVar14 + 0x118);
    FUN_100004640(lVar14 + 0xf8,*(undefined8 *)(lVar14 + 0x110));
    (**(code **)(lVar11 + 0x20))();
    _swift_errorRelease();
    _swift_bridgeObjectRelease(uVar10);
    lVar11 = lVar14 + 0xf8;
  }
  FUN_100004594(lVar11);
LAB_10036f390:
  _swift_task_dealloc(*(undefined8 *)(lVar14 + 0x1f8));
                    /* WARNING: Could not recover jumptable at 0x00010036f3b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar12 + 8))();
  return;
}



/* Address: 0x10036f3d0 | FUN_10036f3d0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10036f3d0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x80);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x88);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x90);
  uVar4 = *(undefined8 *)(unaff_x20 + 0xa0);
  _swift_release(*(undefined8 *)(unaff_x20 + 0xb0));
  _swift_release(uVar4);
  _swift_release(uVar3);
  _swift_release(uVar2);
  _swift_release(uVar1);
  _swift_release(*(undefined8 *)(unaff_x20 + 0xc0));
  _swift_release(*(undefined8 *)(unaff_x20 + 200));
  _swift_defaultActor_destroy();
  _swift_defaultActor_deallocate();
  return;
}



/* Address: 0x10036f460 | FUN_10036f460 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10036f460(void)

{
  return ZEXT816(0x100fc1368);
}



/* Address: 0x10036f480 | FUN_10036f480 */

void FUN_10036f480(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  plVar1 = (long *)0x70;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x20) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10036f4d4;
  FUN_10036ce40(param_3);
  return;
}



/* Address: 0x10036f4d4 | FUN_10036f4d4 */

void FUN_10036f4d4(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  *(long *)(lVar4 + 0x28) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0x20));
  uVar1 = *(undefined8 *)(lVar4 + 0x10);
  uVar3 = *(undefined8 *)(lVar4 + 0x18);
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar4 + 0x30) = param_1;
    FUN_1000da368(uVar1,uVar3);
    pcVar2 = FUN_10036f55c;
  }
  else {
    FUN_1000da368(uVar1,uVar3);
    pcVar2 = FUN_1002e7908;
  }
  _swift_task_switch(pcVar2,uVar1,uVar3);
  return;
}



/* Address: 0x10036f55c | FUN_10036f55c */

void FUN_10036f55c(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010036f568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x30));
  return;
}



/* Address: 0x10036f56c | FUN_10036f56c */

void FUN_10036f56c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  plVar1 = (long *)0x50;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x20) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10036f5c0;
  FUN_10036d9a8(param_3);
  return;
}



/* Address: 0x10036f5c0 | FUN_10036f5c0 */

void FUN_10036f5c0(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x18);
  uVar3 = *(undefined8 *)(lVar2 + 0x10);
  *(undefined8 *)(lVar2 + 0x28) = param_1;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x20));
  FUN_1000da368(uVar3,uVar1);
  _swift_task_switch(FUN_10036f628,uVar3,uVar1);
  return;
}



/* Address: 0x10036f628 | FUN_10036f628 */

void FUN_10036f628(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010036f630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x28));
  return;
}



/* Address: 0x10036f634 | FUN_10036f634 */

void FUN_10036f634(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  plVar1 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x20) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10036f680;
  FUN_10036e3ac();
  return;
}



/* Address: 0x10036f680 | FUN_10036f680 */

void FUN_10036f680(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x18);
  uVar3 = *(undefined8 *)(lVar2 + 0x10);
  *(undefined8 *)(lVar2 + 0x28) = param_1;
  *(undefined8 *)(lVar2 + 0x30) = param_2;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x20));
  FUN_1000da368(uVar3,uVar1);
  _swift_task_switch(FUN_10036f6e8,uVar3,uVar1);
  return;
}



/* Address: 0x10036f6e8 | FUN_10036f6e8 */

void FUN_10036f6e8(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010036f6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x28),*(undefined8 *)(unaff_x22 + 0x30));
  return;
}



/* Address: 0x10036f6f4 | FUN_10036f6f4 */

void FUN_10036f6f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  plVar1 = (long *)0x110;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x20) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10036f758;
  FUN_10036e4f4(param_3,param_4);
  return;
}



/* Address: 0x10036f758 | FUN_10036f758 */

void FUN_10036f758(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x18);
  uVar3 = *(undefined8 *)(lVar2 + 0x10);
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x20));
  FUN_1000da368(uVar3,uVar1);
  _swift_task_switch(FUN_1002e1208,uVar3,uVar1);
  return;
}


