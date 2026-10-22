/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100aa50f0 | FUN_100aa50f0 */

void FUN_100aa50f0(void)

{
  long unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xe0));
                    /* WARNING: Could not recover jumptable at 0x000100aa5128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100aa512c | FUN_100aa512c */

void FUN_100aa512c(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x100);
  *(long *)(lVar3 + 0x110) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x108));
  _swift_release(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_100aa5198;
  }
  else {
    pcVar2 = FUN_100aa51c0;
  }
  _swift_task_switch(pcVar2,0,0);
  return;
}



/* Address: 0x100aa5198 | FUN_100aa5198 */

void FUN_100aa5198(void)

{
  code *pcVar1;
  long unaff_x22;
  
  if (!SCARRY8(*(long *)(unaff_x22 + 0xe8),*(long *)(unaff_x22 + 0x90))) {
    **(long **)(unaff_x22 + 0x98) = *(long *)(unaff_x22 + 0xe8) + *(long *)(unaff_x22 + 0x90);
                    /* WARNING: Could not recover jumptable at 0x000100aa51b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100aa51c0);
  (*pcVar1)();
}



/* Address: 0x100aa51c0 | FUN_100aa51c0 */

void FUN_100aa51c0(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000100aa51c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100aa51cc | FUN_100aa51cc */

void FUN_100aa51cc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  long *plVar6;
  long unaff_x20;
  undefined8 uVar7;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined1 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x38);
  plVar6 = (long *)0x120;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)thunk_FUN_1005c804c;
  FUN_100aa49b4(plVar6,param_1,param_2,uVar1,uVar3,uVar5,uVar2,uVar4,uVar7);
  return;
}



/* Address: 0x100aa526c | FUN_100aa526c */

void FUN_100aa526c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_4;
  *(undefined8 *)(unaff_x22 + 0x28) = param_6;
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  _swift_task_switch(FUN_100aa5288,0,0);
  return;
}



/* Address: 0x100aa5288 | FUN_100aa5288 */

void FUN_100aa5288(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  puVar1 = &DAT_100f2f7d8;
  _swift_allocObject(&DAT_100f2f7d8,0x40,7);
  *(undefined **)(unaff_x22 + 0x30) = puVar1;
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  *(undefined8 *)(puVar1 + 0x18) = 0xd000000000000023;
  *(undefined8 *)(puVar1 + 0x20) = 0x8000000100dbada0;
  *(undefined8 *)(puVar1 + 0x28) = 0xd000000000000024;
  *(undefined8 *)(puVar1 + 0x30) = 0x8000000100dbadd0;
  *(undefined8 *)(puVar1 + 0x38) = 0x34;
  plVar3 = (long *)0xa0;
  _swift_bridgeObjectRetain(uVar2);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x38) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100a729cc;
  FUN_100912dec(plVar3,unaff_x22 + 0x10,FUN_100a7c490,puVar1,
                PTR___type_metadata_for_Swift_Int_100eac6f8);
  return;
}



/* Address: 0x100aa5368 | FUN_100aa5368 */

void FUN_100aa5368(void)

{
  FUN_100aa5658(PTR__swift_unknownObjectRelease_100eae458,PTR__swift_release_100eae3e8,0x38);
  return;
}



/* Address: 0x100aa5380 | FUN_100aa5380 */

void FUN_100aa5380(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  long *plVar4;
  long unaff_x20;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined1 *)(unaff_x20 + 0x28);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
  plVar4 = (long *)0x50;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)thunk_FUN_1005c804c;
  FUN_100aa526c(plVar4,param_1,uVar1,uVar2,uVar6,uVar3,uVar5);
  return;
}



/* Address: 0x100aa540c | FUN_100aa540c */

void FUN_100aa540c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  plVar1 = (long *)0x2b0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100a53f20;
  FUN_100aa2ed0(param_6,param_7,param_4,param_5);
  return;
}



/* Address: 0x100aa5484 | FUN_100aa5484 */

void FUN_100aa5484(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  long *plVar6;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar7;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined1 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
  plVar6 = (long *)&DAT_00000030;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)thunk_FUN_1005c804c;
  FUN_100aa540c(plVar6,param_1,uVar1,uVar3,uVar7,uVar5,uVar2,uVar4);
  return;
}



/* Address: 0x100aa551c | FUN_100aa551c */

void FUN_100aa551c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100ff7f90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100ff7f88;
  FUN_1000f8b08(&DAT_100ff7f88,&DAT_100c93538);
  puVar2 = PTR__Swift__Iterator_>Swift__AsyncIteratorProtocol_100eaede0;
  _swift_getWitnessTable(PTR__Swift__Iterator_>Swift__AsyncIteratorProtocol_100eaede0,puVar1);
  DAT_100ff7f90 = puVar2;
  return;
}



/* Address: 0x100aa556c | FUN_100aa556c */

void FUN_100aa556c(void)

{
  FUN_100aa5658(PTR__swift_bridgeObjectRelease_100eae160,PTR__swift_bridgeObjectRelease_100eae160,
                0x40);
  return;
}



/* Address: 0x100aa5580 | thunk_FUN_100aa5584 */

void thunk_FUN_100aa5584(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_deallocObject();
  return;
}



/* Address: 0x100aa5584 | FUN_100aa5584 */

void FUN_100aa5584(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_deallocObject();
  return;
}



/* Address: 0x100aa55c0 | FUN_100aa55c0 */

void FUN_100aa55c0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  long *plVar6;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar7;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined1 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
  plVar6 = (long *)&DAT_00000030;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_1005c804c;
  FUN_100aa540c(plVar6,param_1,uVar1,uVar3,uVar7,uVar5,uVar2,uVar4);
  return;
}



/* Address: 0x100aa5658 | FUN_100aa5658 */

void FUN_100aa5658(code *param_1,code *param_2)

{
  long unaff_x20;
  
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x10));
  (*param_2)(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_deallocObject();
  return;
}



/* Address: 0x100aa56a8 | thunk_FUN_100aa556c */

void thunk_FUN_100aa556c(void)

{
  FUN_100aa556c();
  return;
}



/* Address: 0x100aa56ac | thunk_FUN_100aa5368 */

void thunk_FUN_100aa5368(void)

{
  FUN_100aa5368();
  return;
}



/* Address: 0x100aa56b0 | thunk_FUN_100aa5584 */

void thunk_FUN_100aa5584(void)

{
  thunk_FUN_100aa5584();
  return;
}



/* Address: 0x100aa56b4 | thunk_FUN_100aa556c */

void thunk_FUN_100aa556c(void)

{
  FUN_100aa556c();
  return;
}



/* Address: 0x100aa56b8 | FUN_100aa56b8 */

undefined * FUN_100aa56b8(void)

{
  return &DAT_100c93560;
}



/* Address: 0x100aa56c4 | /usr/lib/swift/libswiftDarwin.dylib::Darwin::get_errno */

__int32 Darwin::get_errno(void)

{
  __int32 _Var1;
  
  _Var1 = get_errno();
  return _Var1;
}



/* Address: 0x100aa56c8 | /usr/lib/swift/libswiftDarwin.dylib::Darwin::set_errno */

void __thiscall Darwin::set_errno(Darwin *this,__int32 param_1)

{
  set_errno(this,param_1);
  return;
}



/* Address: 0x100aa56cc | FUN_100aa56cc */

undefined1  [16] FUN_100aa56cc(__int32 *param_1)

{
  __int32 _Var1;
  undefined1 auVar2 [16];
  
  _Var1 = Darwin::get_errno();
  *param_1 = _Var1;
  auVar2._8_8_ = param_1;
  auVar2._0_8_ = FUN_100aa56fc;
  return auVar2;
}



/* Address: 0x100aa56fc | FUN_100aa56fc */

void FUN_100aa56fc(__int32 *param_1)

{
  Darwin *unaff_x20;
  
  Darwin::set_errno(unaff_x20,*param_1);
  return;
}



/* Address: 0x100aa5704 | FUN_100aa5704 */

void FUN_100aa5704(__int32 *param_1,ulong param_2,code *param_3,undefined8 param_4,long param_5,
                  long param_6)

{
  bool bVar1;
  Result RVar2;
  __int32 _Var3;
  long lVar4;
  __int64 _Var5;
  __uint64 _Var6;
  undefined4 extraout_var;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  Darwin *unaff_x20;
  __int32 *p_Var10;
  long lVar11;
  long lVar12;
  long lVar13;
  __int32 *local_90;
  long local_88;
  long local_80;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  lVar11 = *(long *)(param_6 + 8);
  local_70 = *(undefined8 *)(*(long *)(lVar11 + 0x18) + 0x10);
  lVar4 = 0;
  local_90 = param_1;
  _swift_getAssociatedTypeWitness
            (0,local_70,param_5,
             PTR___protocol_requirements_base_descriptor_for_Swift_ExpressibleByIntegerLiteral_100ead898
             ,
             PTR___associated_type_descriptor_for_Swift_ExpressibleByIntegerLiteral_IntegerLiteralType_100eabce0
            );
  local_80 = (long)&local_90 - (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar13 = *(long *)(param_5 + -8);
  uVar7 = *(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar8 = local_80 - uVar7;
  lVar12 = lVar8 - uVar7;
  local_88 = lVar13;
  local_78 = lVar4;
  do {
    Darwin::set_errno(unaff_x20,0);
    (*param_3)(lVar12);
    bVar1 = Swift::BinaryInteger::get_isSigned();
    if (!bVar1) {
      bVar1 = Swift::BinaryInteger::get_isSigned();
      _Var5 = Swift::BinaryInteger::get_bitWidth();
      lVar4 = local_78;
      if (bVar1) {
        if (0x40 < _Var5) goto LAB_100aa5824;
        uVar9 = local_70;
        _swift_getAssociatedConformanceWitness
                  (local_70,param_5,local_78,
                   PTR___protocol_requirements_base_descriptor_for_Swift_ExpressibleByIntegerLiteral_100ead898
                   ,
                   PTR___associated_conformance_descriptor_for_Swift_ExpressibleByIntegerLiteral_Swift_ExpressibleByIntegerLiteral_IntegerLiteralType__Swift__ExpressibleByBuiltinIntegerLiteral_100ead890
                  );
        Swift::_ExpressibleByBuiltinIntegerLiteral::init(local_80,&DAT_100c6c6b8,0x100,lVar4,uVar9);
        lVar13 = local_88;
        Swift::ExpressibleByIntegerLiteral::_init();
        bVar1 = Swift::Comparable::>__infix
                          (lVar12,lVar8,param_5,*(undefined8 *)(*(long *)(lVar11 + 0x20) + 8));
        (**(code **)(lVar13 + 8))(lVar8,param_5);
        if (bVar1) goto LAB_100aa5938;
      }
      else if (_Var5 < 0x40) goto LAB_100aa5938;
LAB_100aa5988:
      p_Var10 = local_90;
      (**(code **)(lVar13 + 0x20))(local_90,lVar12,param_5);
      uVar9 = 0;
      goto LAB_100aa59a4;
    }
    _Var5 = Swift::BinaryInteger::get_bitWidth();
    if (_Var5 < 0x40) {
LAB_100aa5938:
      _Var6 = Swift::BinaryInteger::get__lowWord();
      if (_Var6 != 0xffffffffffffffff) goto LAB_100aa5988;
    }
    else {
LAB_100aa5824:
      local_68 = 0xffffffffffffffff;
      FUN_100aa59f0();
      Swift::BinaryInteger::_init
                (lVar8,&local_68,PTR___type_metadata_for_Swift_Int_100eac6f8,_Var5,param_5,lVar11);
      bVar1 = Swift::Equatable::___infix
                        (lVar12,lVar8,param_5,*(undefined8 *)(*(long *)(lVar11 + 0x10) + 8));
      (**(code **)(lVar13 + 8))(lVar8,param_5);
      if (!bVar1) goto LAB_100aa5988;
    }
    _Var3 = Darwin::get_errno();
    unaff_x20 = (Darwin *)CONCAT44(extraout_var,_Var3);
    (**(code **)(lVar13 + 8))(lVar12,param_5);
  } while ((_Var3 == 4) && ((param_2 & 1) != 0));
  *local_90 = _Var3;
  uVar9 = 1;
  p_Var10 = local_90;
LAB_100aa59a4:
  FUN_100a54208();
  RVar2 = Swift::Result::typeMetadataAccessor();
  _swift_storeEnumTagMultiPayload(p_Var10,RVar2.value,uVar9);
  return;
}



/* Address: 0x100aa59f0 | FUN_100aa59f0 */

void FUN_100aa59f0(void)

{
  undefined *puVar1;
  
  if (DAT_100ff7fa0 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Swift____int64_>Swift__BinaryInteger_100eac738;
  _swift_getWitnessTable
            (PTR_Swift____int64_>Swift__BinaryInteger_100eac738,
             PTR___type_metadata_for_Swift_Int_100eac6f8);
  DAT_100ff7fa0 = puVar1;
  return;
}



/* Address: 0x100aa5a30 | FUN_100aa5a30 */

ulong FUN_100aa5a30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5)

{
  Result RVar1;
  undefined7 extraout_var;
  long lVar3;
  long lVar4;
  undefined1 auStack_80 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  uint5 local_58;
  long lVar2;
  
  FUN_100a54208();
  RVar1 = Swift::Result::typeMetadataAccessor();
  lVar2 = CONCAT71(extraout_var,RVar1.value);
  lVar4 = *(long *)(lVar2 + -8);
  lVar3 = *(long *)(lVar4 + 0x40);
  FUN_100aa5704(auStack_80 + -(lVar3 + 0xfU & 0xfffffffffffffff0),param_1,param_2,param_3,param_4,
                param_5);
  local_70 = param_4;
  uStack_68 = param_5;
  FUN_10062f364(&local_58,FUN_100004520,auStack_80,lVar2,PTR___type_metadata_for____100eae0c8 + 8);
  (**(code **)(lVar4 + 8))(auStack_80 + -(lVar3 + 0xfU & 0xfffffffffffffff0),lVar2);
  return (ulong)local_58;
}



/* Address: 0x100aa5b1c | FUN_100aa5b1c */

void FUN_100aa5b1c(__int32 *param_1,ulong param_2,code *param_3,Darwin *param_4,long param_5)

{
  Optional OVar1;
  Result RVar2;
  __int32 _Var3;
  undefined7 extraout_var;
  undefined1 *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lVar10 = *(long *)(CONCAT71(extraout_var,OVar1.value) + -8);
  puVar7 = &stack0xffffffffffffffa0 + -(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = *(long *)(param_5 + -8);
  lVar8 = (long)puVar7 - (*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  do {
    Darwin::set_errno(param_4,0);
    (*param_3)(puVar7);
    puVar4 = puVar7;
    (**(code **)(lVar9 + 0x30))(puVar7,1,param_5);
    if ((int)puVar4 != 1) {
      pcVar5 = *(code **)(lVar9 + 0x20);
      (*pcVar5)(lVar8,puVar7,param_5);
      (*pcVar5)(param_1,lVar8,param_5);
      pcVar5 = *(code **)(lVar9 + 0x38);
      uVar6 = 0;
LAB_100aa5c34:
      (*pcVar5)(param_1,uVar6,1,param_5);
      uVar6 = 0;
      goto LAB_100aa5c44;
    }
    (**(code **)(lVar10 + 8))(puVar7,CONCAT71(extraout_var,OVar1.value));
    _Var3 = Darwin::get_errno();
    if (_Var3 != 4) {
      if (_Var3 == 0) {
        pcVar5 = *(code **)(lVar9 + 0x38);
        uVar6 = 1;
        goto LAB_100aa5c34;
      }
      goto LAB_100aa5bf8;
    }
    if ((param_2 & 1) == 0) {
LAB_100aa5bf8:
      *param_1 = _Var3;
      uVar6 = 1;
LAB_100aa5c44:
      FUN_100a54208();
      RVar2 = Swift::Result::typeMetadataAccessor();
      _swift_storeEnumTagMultiPayload(param_1,RVar2.value,uVar6);
      return;
    }
  } while( true );
}



/* Address: 0x100aa5c90 | FUN_100aa5c90 */

void FUN_100aa5c90(__int32 *param_1,ulong param_2,code *param_3,Darwin *param_4,long param_5)

{
  Result RVar1;
  __int32 _Var2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_5 + -8);
  puVar4 = &stack0xffffffffffffffb0 + -(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  do {
    Darwin::set_errno(param_4,0);
    (*param_3)(puVar4);
    _Var2 = Darwin::get_errno();
    if (_Var2 == 0) {
      (**(code **)(lVar5 + 0x20))(param_1,puVar4,param_5);
      uVar3 = 0;
      goto LAB_100aa5d34;
    }
    (**(code **)(lVar5 + 8))(puVar4,param_5);
  } while ((_Var2 == 4) && ((param_2 & 1) != 0));
  *param_1 = _Var2;
  uVar3 = 1;
LAB_100aa5d34:
  FUN_100a54208();
  RVar1 = Swift::Result::typeMetadataAccessor();
  _swift_storeEnumTagMultiPayload(param_1,RVar1.value,uVar3);
  return;
}



/* Address: 0x100aa5d7c | FUN_100aa5d7c */

ulong FUN_100aa5d7c(undefined8 param_1,uint param_2,uint param_3,undefined8 param_4,Darwin *param_5,
                   undefined4 param_6)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  uint local_84;
  undefined1 auStack_80 [16];
  undefined2 local_70;
  undefined1 local_6e;
  undefined4 local_6c;
  uint uStack_68;
  uint local_64;
  
  puVar1 = PTR___type_metadata_for_Swift_Int32_100eadbd0;
  while( true ) {
    Darwin::set_errno(param_5,0);
    local_70 = (undefined2)param_4;
    local_6e = (char)((ulong)param_4 >> 0x10);
    local_6c = param_6;
    uStack_68 = param_3 | param_2;
    local_64 = param_3;
    FUN_1005b32d0(&local_84,FUN_100aa5eb0,auStack_80,param_1,puVar1);
    if (local_84 != 0xffffffff) break;
    uVar2 = Darwin::get_errno();
    uVar3 = 0x100000000;
    if ((uVar2 != 4) || (((ulong)param_5 & 1) == 0)) goto LAB_100aa5e24;
  }
  uVar3 = 0;
  uVar2 = local_84;
LAB_100aa5e24:
  return uVar3 | uVar2;
}



/* Address: 0x100aa5e4c | FUN_100aa5e4c */

void FUN_100aa5e4c(__int32 *param_1,UnsafePointer<__int8> param_2,uint param_3,__int32 param_4,
                  __int32 param_5,uint param_6)

{
  code *pcVar1;
  __int32 _Var2;
  
  if ((param_3 & 0xff0000) == 0x10000) {
    if ((param_6 >> 9 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100aa5eb0);
      (*pcVar1)();
    }
    _Var2 = Darwin::openat(param_4,param_2,param_5);
  }
  else {
    _Var2 = Darwin::openat(param_4,param_2,param_5,(__uint16)param_3);
  }
  *param_1 = _Var2;
  return;
}



/* Address: 0x100aa5eb0 | FUN_100aa5eb0 */

void FUN_100aa5eb0(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100aa5e4c(param_1,(ulong)*(uint3 *)(unaff_x20 + 0x10),*(undefined4 *)(unaff_x20 + 0x14),
                *(undefined4 *)(unaff_x20 + 0x18),*(undefined4 *)(unaff_x20 + 0x1c));
  return;
}



/* Address: 0x100aa5ed8 | FUN_100aa5ed8 */

void FUN_100aa5ed8(undefined8 *param_1,Darwin *param_2)

{
  int iVar1;
  stat local_200;
  stat local_170;
  undefined1 local_e0;
  stat local_d0;
  undefined1 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ea82f0;
  local_200.st_gen = 0;
  local_200.st_lspare = 0;
  local_200.st_blksize = 0;
  local_200.st_flags = 0;
  local_200.st_qspare[1] = 0;
  local_200.st_qspare[0] = 0;
  local_200.st_birthtimespec.tv_nsec = 0;
  local_200.st_birthtimespec.tv_sec = 0;
  local_200.st_blocks = 0;
  local_200.st_size = 0;
  local_200.st_mtimespec.tv_nsec = 0;
  local_200.st_mtimespec.tv_sec = 0;
  local_200.st_ctimespec.tv_nsec = 0;
  local_200.st_ctimespec.tv_sec = 0;
  local_200.st_rdev = 0;
  local_200._28_4_ = 0;
  local_200.st_uid = 0;
  local_200.st_gid = 0;
  local_200.st_atimespec.tv_nsec = 0;
  local_200.st_atimespec.tv_sec = 0;
  local_200.st_ino = 0;
  local_200.st_dev = 0;
  local_200.st_mode = 0;
  local_200.st_nlink = 0;
  Darwin::set_errno(param_2,0);
  iVar1 = _fstat((int)param_2,&local_200);
  if (iVar1 == -1) {
    local_170.st_dev = Darwin::get_errno();
    FUN_1005b841c(&local_170);
  }
  else {
    local_170.st_blocks = local_200.st_blocks;
    local_170.st_size = local_200.st_size;
    local_170.st_gen = local_200.st_gen;
    local_170.st_lspare = local_200.st_lspare;
    local_170.st_blksize = local_200.st_blksize;
    local_170.st_flags = local_200.st_flags;
    local_170.st_qspare[1] = local_200.st_qspare[1];
    local_170.st_qspare[0] = local_200.st_qspare[0];
    local_170.st_atimespec.tv_nsec = local_200.st_atimespec.tv_nsec;
    local_170.st_atimespec.tv_sec = local_200.st_atimespec.tv_sec;
    local_170.st_mtimespec.tv_nsec = local_200.st_mtimespec.tv_nsec;
    local_170.st_mtimespec.tv_sec = local_200.st_mtimespec.tv_sec;
    local_170.st_ctimespec.tv_nsec = local_200.st_ctimespec.tv_nsec;
    local_170.st_ctimespec.tv_sec = local_200.st_ctimespec.tv_sec;
    local_170.st_birthtimespec.tv_nsec = local_200.st_birthtimespec.tv_nsec;
    local_170.st_birthtimespec.tv_sec = local_200.st_birthtimespec.tv_sec;
    local_170.st_ino = local_200.st_ino;
    local_170.st_dev = local_200.st_dev;
    local_170.st_mode = local_200.st_mode;
    local_170.st_nlink = local_200.st_nlink;
    local_170.st_rdev = local_200.st_rdev;
    local_170._28_4_ = local_200._28_4_;
    local_170.st_uid = local_200.st_uid;
    local_170.st_gid = local_200.st_gid;
    FUN_1005b8d54(&local_170);
  }
  local_d0.st_blocks = local_170.st_blocks;
  local_d0.st_size = local_170.st_size;
  local_d0.st_gen = local_170.st_gen;
  local_d0.st_lspare = local_170.st_lspare;
  local_d0.st_blksize = local_170.st_blksize;
  local_d0.st_flags = local_170.st_flags;
  local_d0.st_qspare[1] = local_170.st_qspare[1];
  local_d0.st_qspare[0] = local_170.st_qspare[0];
  local_40 = local_e0;
  local_d0.st_atimespec.tv_nsec = local_170.st_atimespec.tv_nsec;
  local_d0.st_atimespec.tv_sec = local_170.st_atimespec.tv_sec;
  local_d0.st_mtimespec.tv_nsec = local_170.st_mtimespec.tv_nsec;
  local_d0.st_mtimespec.tv_sec = local_170.st_mtimespec.tv_sec;
  local_d0.st_ctimespec.tv_nsec = local_170.st_ctimespec.tv_nsec;
  local_d0.st_ctimespec.tv_sec = local_170.st_ctimespec.tv_sec;
  local_d0.st_birthtimespec.tv_nsec = local_170.st_birthtimespec.tv_nsec;
  local_d0.st_birthtimespec.tv_sec = local_170.st_birthtimespec.tv_sec;
  local_d0.st_ino = local_170.st_ino;
  local_d0.st_dev = local_170.st_dev;
  local_d0.st_mode = local_170.st_mode;
  local_d0.st_nlink = local_170.st_nlink;
  local_d0.st_rdev = local_170.st_rdev;
  local_d0._28_4_ = local_170._28_4_;
  local_d0.st_uid = local_170.st_uid;
  local_d0.st_gid = local_170.st_gid;
  param_1[0xd] = local_170.st_blocks;
  param_1[0xc] = local_170.st_size;
  param_1[0xf] = local_170._120_8_;
  param_1[0xe] = local_170._112_8_;
  param_1[0x11] = local_170.st_qspare[1];
  param_1[0x10] = local_170.st_qspare[0];
  *(undefined1 *)(param_1 + 0x12) = local_e0;
  param_1[5] = local_170.st_atimespec.tv_nsec;
  param_1[4] = local_170.st_atimespec.tv_sec;
  param_1[7] = local_170.st_mtimespec.tv_nsec;
  param_1[6] = local_170.st_mtimespec.tv_sec;
  param_1[9] = local_170.st_ctimespec.tv_nsec;
  param_1[8] = local_170.st_ctimespec.tv_sec;
  param_1[0xb] = local_170.st_birthtimespec.tv_nsec;
  param_1[10] = local_170.st_birthtimespec.tv_sec;
  param_1[1] = local_170.st_ino;
  *param_1 = local_170._0_8_;
  param_1[3] = local_170._24_8_;
  param_1[2] = local_170._16_8_;
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100aa600c | FUN_100aa600c */

ulong FUN_100aa600c(mode_t param_1,Darwin *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  
  do {
    Darwin::set_errno(param_2,0);
    iVar1 = _fchmod(param_3,param_1);
    if (iVar1 != -1) {
      uVar3 = 0;
      uVar4 = 0;
      goto LAB_100aa6068;
    }
    uVar2 = Darwin::get_errno();
  } while ((uVar2 == 4) && (((ulong)param_2 & 1) != 0));
  uVar3 = (ulong)uVar2;
  uVar4 = 0x100000000;
LAB_100aa6068:
  return uVar4 | uVar3;
}



/* Address: 0x100aa607c | FUN_100aa607c */

undefined1  [16] FUN_100aa607c(char *param_1,Darwin *param_2,char param_3,int param_4)

{
  Darwin *size;
  char *namebuff;
  bool bVar1;
  uint uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  
  Darwin::set_errno(param_2,0);
  size = (Darwin *)0x0;
  if (param_3 != '\x01') {
    size = param_2;
  }
  namebuff = (char *)0x0;
  if (param_3 != '\x01') {
    namebuff = param_1;
  }
  uVar3 = _flistxattr(param_4,namebuff,(size_t)size,0);
  bVar1 = uVar3 == 0xffffffffffffffff;
  if (bVar1) {
    uVar2 = Darwin::get_errno();
    uVar3 = (ulong)uVar2;
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = uVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Address: 0x100aa60e8 | FUN_100aa60e8 */

undefined1  [16]
FUN_100aa60e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             Darwin *param_5,undefined4 param_6)

{
  bool bVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auStack_80 [16];
  undefined4 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  ulong local_48;
  
  Darwin::set_errno(param_5,0);
  local_58 = SUB81(param_5,0);
  local_70 = param_6;
  local_68 = param_3;
  uStack_60 = param_4;
  FUN_1005b958c(&local_48,FUN_100aa618c,auStack_80,param_1,param_2,
                PTR___type_metadata_for_Swift_Int_100eac6f8);
  bVar1 = local_48 == 0xffffffffffffffff;
  if (bVar1) {
    uVar2 = Darwin::get_errno();
    local_48 = (ulong)uVar2;
  }
  auVar3[8] = bVar1;
  auVar3._0_8_ = local_48;
  auVar3._9_7_ = 0;
  return auVar3;
}



/* Address: 0x100aa618c | FUN_100aa618c */

void FUN_100aa618c(void)

{
  FUN_100aa6918();
  return;
}



/* Address: 0x100aa61a0 | FUN_100aa61a0 */

ulong FUN_100aa61a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   Darwin *param_5,undefined4 param_6)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auStack_70 [16];
  undefined4 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  int local_44;
  
  Darwin::set_errno(param_5,0);
  local_48 = SUB81(param_5,0);
  local_60 = param_6;
  local_58 = param_3;
  uStack_50 = param_4;
  FUN_1005b958c(&local_44,FUN_100aa62a4,auStack_70,param_1,param_2,
                PTR___type_metadata_for_Swift_Int32_100eadbd0);
  if (local_44 == -1) {
    uVar1 = Darwin::get_errno();
    uVar2 = (ulong)uVar1;
    uVar3 = 0x100000000;
  }
  else {
    uVar2 = 0;
    uVar3 = 0;
  }
  return uVar3 | uVar2;
}



/* Address: 0x100aa624c | FUN_100aa624c */

void FUN_100aa624c(int *param_1,char *param_2,int param_3,void *param_4,long param_5,char param_6)

{
  size_t size;
  void *value;
  int iVar1;
  
  size = 0;
  if (param_6 != '\x01' && param_4 != (void *)0x0) {
    size = param_5 - (long)param_4;
  }
  value = (void *)0x0;
  if (param_6 != '\x01' && param_4 != (void *)0x0) {
    value = param_4;
  }
  iVar1 = _fsetxattr(param_3,param_2,value,size,0,0);
  *param_1 = iVar1;
  return;
}



/* Address: 0x100aa62a4 | FUN_100aa62a4 */

void FUN_100aa62a4(int *param_1,char *param_2)

{
  size_t size;
  void *value;
  void *pvVar1;
  bool bVar2;
  int iVar3;
  long unaff_x20;
  
  pvVar1 = *(void **)(unaff_x20 + 0x18);
  bVar2 = *(char *)(unaff_x20 + 0x28) != '\x01';
  size = 0;
  if (bVar2 && pvVar1 != (void *)0x0) {
    size = *(long *)(unaff_x20 + 0x20) - (long)pvVar1;
  }
  value = (void *)0x0;
  if (bVar2 && pvVar1 != (void *)0x0) {
    value = pvVar1;
  }
  iVar3 = _fsetxattr(*(int *)(unaff_x20 + 0x10),param_2,value,size,0,0);
  *param_1 = iVar3;
  return;
}



/* Address: 0x100aa62fc | FUN_100aa62fc */

ulong FUN_100aa62fc(undefined8 param_1,Darwin *param_2,undefined4 param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auStack_50 [16];
  undefined4 local_40;
  int local_34;
  
  Darwin::set_errno(param_2,0);
  local_40 = param_3;
  FUN_1005b958c(&local_34,FUN_100aa63c8,auStack_50,param_1,param_2,
                PTR___type_metadata_for_Swift_Int32_100eadbd0);
  if (local_34 == -1) {
    uVar1 = Darwin::get_errno();
    uVar2 = (ulong)uVar1;
    uVar3 = 0x100000000;
  }
  else {
    uVar2 = 0;
    uVar3 = 0;
  }
  return uVar3 | uVar2;
}



/* Address: 0x100aa638c | FUN_100aa638c */

void FUN_100aa638c(int *param_1,char *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = _fremovexattr(param_3,param_2,0);
  *param_1 = iVar1;
  return;
}



/* Address: 0x100aa63c8 | FUN_100aa63c8 */

void FUN_100aa63c8(int *param_1,char *param_2)

{
  int iVar1;
  long unaff_x20;
  
  iVar1 = _fremovexattr(*(int *)(unaff_x20 + 0x10),param_2,0);
  *param_1 = iVar1;
  return;
}



/* Address: 0x100aa6400 | FUN_100aa6400 */

ulong FUN_100aa6400(Darwin *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  
  do {
    Darwin::set_errno(param_1,0);
    iVar1 = _fsync(param_2);
    if (iVar1 != -1) {
      uVar3 = 0;
      uVar4 = 0;
      goto LAB_100aa6450;
    }
    uVar2 = Darwin::get_errno();
  } while ((uVar2 == 4) && (((ulong)param_1 & 1) != 0));
  uVar3 = (ulong)uVar2;
  uVar4 = 0x100000000;
LAB_100aa6450:
  return uVar4 | uVar3;
}



/* Address: 0x100aa6460 | FUN_100aa6460 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100aa64b0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined1  [16] FUN_100aa6460(Darwin *param_1)

{
  size_t size;
  _ArrayBuffer<undefined> _Var1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined *local_48;
  ssize_t local_40;
  undefined *puStack_38;
  
  Darwin::set_errno(param_1,0);
  size = _flistxattr((int)param_1,(char *)0x0,0,0);
  if (size == 0xffffffffffffffff) {
    Darwin::get_errno();
  }
  else {
    if ((long)size < 1) {
      uVar2 = 0;
      local_48 = PTR___swiftEmptyArrayStorage_100eae0d8;
      goto LAB_100aa6548;
    }
    _Var1 = Swift::Array<undefined>::_allocateBufferUninitialized
                      (size,PTR___type_metadata_for_Swift_UInt8_100eadcd0);
    *(size_t *)(_Var1.unknown + 0x10) = size;
    _bzero(_Var1.unknown + 0x20,size);
    Darwin::set_errno(param_1,0);
    local_40 = _flistxattr((int)param_1,_Var1.unknown + 0x20,size,0);
    if (local_40 != -1) {
      puStack_38 = _Var1.unknown;
      FUN_100aa655c(&local_48,&local_40,&puStack_38);
      _swift_bridgeObjectRelease(_Var1.unknown);
      uVar2 = 0;
      goto LAB_100aa6548;
    }
    Darwin::get_errno();
    _swift_bridgeObjectRelease(_Var1.unknown);
  }
  local_48 = (undefined *)0xffffffff;
  uVar2 = 1;
LAB_100aa6548:
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = local_48;
  return auVar3;
}



/* Address: 0x100aa655c | FUN_100aa655c */

void FUN_100aa655c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined1 *param_4)

{
  bool bVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  code *pcVar5;
  __ContiguousArrayStorageBase *p_Var6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  long lVar12;
  undefined *puVar13;
  ulong uVar14;
  undefined1 *puVar15;
  String SVar16;
  tuple2_conflict1 tVar17;
  
  puVar10 = (undefined1 *)*param_2;
  if ((long)puVar10 < 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100aa6794);
    (*pcVar5)();
  }
  puVar13 = (undefined *)*param_3;
  puVar2 = *(undefined1 **)(puVar13 + 0x10);
  if (puVar10 <= *(undefined1 **)(puVar13 + 0x10)) {
    puVar2 = puVar10;
  }
  puVar3 = (undefined1 *)0x0;
  if (puVar10 != (undefined1 *)0x0) {
    puVar3 = puVar2;
  }
  _swift_bridgeObjectRetain(puVar13);
  puVar10 = (undefined1 *)0x0;
  puVar9 = PTR___swiftEmptyArrayStorage_100eae0d8;
  while (puVar10 != puVar3) {
    puVar11 = puVar10;
    if ((long)puVar10 <= (long)puVar2) {
      puVar11 = puVar2;
    }
    uVar14 = (long)puVar10 << 1 | 1;
    puVar15 = puVar10;
    while( true ) {
      if (puVar11 == puVar15) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100aa6790);
        (*pcVar5)();
      }
      if ((puVar13 + (long)puVar15)[0x20] == '\0') break;
      puVar15 = puVar15 + 1;
      uVar14 = uVar14 + 2;
      if (puVar2 == puVar15) goto LAB_100aa6760;
    }
    if ((long)puVar15 < 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100aa6798);
      (*pcVar5)();
    }
    p_Var6 = Swift::__ContiguousArrayStorageBase::typeMetadataAccessor();
    puVar7 = puVar13;
    _swift_unknownObjectRetain_n(puVar13,3);
    _swift_dynamicCastClass();
    if (puVar7 == (undefined *)0x0) {
      _swift_unknownObjectRelease(puVar13);
      puVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
    }
    lVar12 = *(long *)(puVar7 + 0x10);
    _swift_release();
    lVar4 = (long)puVar15 - (long)puVar10;
    if (SBORROW8((long)puVar15,(long)puVar10)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100aa679c);
      (*pcVar5)();
    }
    puVar7 = puVar13;
    if (lVar12 == lVar4) {
      _swift_dynamicCastClass(puVar13,p_Var6);
      if (puVar7 == (undefined *)0x0) {
        _swift_unknownObjectRelease(puVar13);
        puVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
      }
    }
    else {
      _swift_unknownObjectRelease();
      param_4 = puVar10;
      FUN_100aa6b4c(puVar13,puVar13 + 0x20,puVar10,uVar14);
    }
    SVar16.str = *(char **)(puVar7 + 0x10);
    SVar16.bridgeObject = param_4;
    tVar17 = Swift::String::_fromUTF8Repairing((UnsafeBufferPointer<__int8>)(puVar7 + 0x20),SVar16);
    param_4 = tVar17._16_8_;
    _swift_release(puVar7);
    puVar7 = puVar9;
    _swift_isUniquelyReferenced_nonNull_native();
    puVar8 = puVar9;
    if (((ulong)puVar7 & 1) == 0) {
      puVar8 = (undefined *)0x0;
      param_4 = &DAT_00000001;
      FUN_100aa7c9c(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
    }
    uVar14 = *(ulong *)(puVar8 + 0x10);
    puVar9 = puVar8;
    if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar14) {
      puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
      param_4 = &DAT_00000001;
      FUN_100aa7c9c(puVar9,uVar14 + 1,1,puVar8);
    }
    *(ulong *)(puVar9 + 0x10) = uVar14 + 1;
    *(char **)(puVar9 + uVar14 * 0x10 + 0x20) = tVar17.result.str;
    *(void **)(puVar9 + uVar14 * 0x10 + 0x28) = tVar17.result.bridgeObject;
    _swift_unknownObjectRelease(puVar13);
    uVar14 = lVar4 + 1;
    if (SCARRY8(lVar4,1)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100aa67a0);
      (*pcVar5)();
    }
    if ((long)uVar14 < 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100aa67a4);
      (*pcVar5)();
    }
    if (SBORROW8((long)puVar3,(long)puVar10)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100aa67a8);
      (*pcVar5)();
    }
    puVar11 = puVar3;
    if (uVar14 <= (ulong)((long)puVar3 - (long)puVar10)) {
      puVar11 = puVar10 + uVar14;
      if (SCARRY8((long)puVar10,uVar14)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100aa67b4);
        (*pcVar5)();
      }
      if ((long)puVar3 < (long)puVar11) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100aa67b0);
        (*pcVar5)();
      }
    }
    bVar1 = (long)puVar11 < (long)puVar10;
    puVar10 = puVar11;
    if (bVar1) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100aa67ac);
      (*pcVar5)();
    }
  }
LAB_100aa6760:
  _swift_unknownObjectRelease(puVar13);
  *param_1 = puVar9;
  return;
}



/* Address: 0x100aa67b4 | FUN_100aa67b4 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100aa683c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined1  [16]
FUN_100aa67b4(_ArrayBuffer<undefined> param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puVar1;
  size_t sVar2;
  code *pcVar3;
  undefined8 uVar4;
  Darwin *this;
  undefined1 auVar5 [16];
  undefined *local_90 [2];
  undefined4 local_80;
  undefined *local_78;
  undefined *puStack_70;
  undefined1 local_68;
  size_t local_58;
  
  this = (Darwin *)param_1.unknown;
  Darwin::set_errno((Darwin *)param_1.unknown,0);
  local_78 = (undefined *)0x0;
  puStack_70 = (undefined *)0x0;
  local_68 = 1;
  local_80 = param_3;
  FUN_1005b958c(&local_58,FUN_100aa6c08,local_90,this,param_2,
                PTR___type_metadata_for_Swift_Int_100eac6f8);
  sVar2 = local_58;
  if (local_58 == 0xffffffffffffffff) {
    Darwin::get_errno();
  }
  else {
    if ((long)local_58 < 1) {
      uVar4 = 0;
      local_90[0] = PTR___swiftEmptyArrayStorage_100eae0d8;
      goto LAB_100aa68f8;
    }
    param_1 = Swift::Array<undefined>::_allocateBufferUninitialized
                        (param_1.unknown,PTR___type_metadata_for_Swift_UInt8_100eadcd0);
    *(size_t *)(param_1.unknown + 0x10) = sVar2;
    puVar1 = param_1.unknown + 0x20;
    _bzero(puVar1,sVar2);
    Darwin::set_errno(this,0);
    local_68 = 0;
    local_80 = param_3;
    local_78 = puVar1;
    puStack_70 = puVar1 + sVar2;
    FUN_1005b958c(&local_58,FUN_100aa6c08,local_90,this,param_2,
                  PTR___type_metadata_for_Swift_Int_100eac6f8);
    if (local_58 != 0xffffffffffffffff) {
      local_90[0] = param_1.unknown;
      if (SBORROW8(*(long *)(param_1.unknown + 0x10),local_58)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100aa6918);
        (*pcVar3)();
      }
      FUN_100aa6970(*(long *)(param_1.unknown + 0x10) - local_58);
      uVar4 = 0;
      goto LAB_100aa68f8;
    }
    Darwin::get_errno();
    _swift_bridgeObjectRelease(param_1.unknown);
  }
  local_90[0] = param_1.unknown & 0xffffffff;
  uVar4 = 1;
LAB_100aa68f8:
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = local_90[0];
  return auVar5;
}



/* Address: 0x100aa6918 | FUN_100aa6918 */

void FUN_100aa6918(ssize_t *param_1,char *param_2)

{
  size_t size;
  void *value;
  void *pvVar1;
  bool bVar2;
  ssize_t sVar3;
  long unaff_x20;
  
  pvVar1 = *(void **)(unaff_x20 + 0x18);
  bVar2 = *(char *)(unaff_x20 + 0x28) != '\x01';
  size = 0;
  if (bVar2 && pvVar1 != (void *)0x0) {
    size = *(long *)(unaff_x20 + 0x20) - (long)pvVar1;
  }
  value = (void *)0x0;
  if (bVar2 && pvVar1 != (void *)0x0) {
    value = pvVar1;
  }
  sVar3 = _fgetxattr(*(int *)(unaff_x20 + 0x10),param_2,value,size,0,0);
  *param_1 = sVar3;
  return;
}



/* Address: 0x100aa6970 | FUN_100aa6970 */

void FUN_100aa6970(ulong param_1)

{
  code *pcVar1;
  long *unaff_x20;
  
  if (param_1 == 0) {
    return;
  }
  if (-1 < (long)param_1) {
    if (param_1 <= *(ulong *)(*unaff_x20 + 0x10)) {
      FUN_100a4fffc(*(ulong *)(*unaff_x20 + 0x10) - param_1);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100aa6998);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100aa6994);
  (*pcVar1)();
}



/* Address: 0x100aa6998 | FUN_100aa6998 */

undefined1  [16] FUN_100aa6998(undefined8 param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  
  FUN_100aa69d8(param_2,param_1);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_2;
  return auVar1;
}



/* Address: 0x100aa69d8 | FUN_100aa69d8 */

undefined8 FUN_100aa69d8(undefined8 param_1,uint param_2)

{
  byte bVar1;
  undefined7 extraout_var;
  undefined4 *puVar3;
  undefined4 local_24;
  undefined4 *puVar2;
  
  FUN_1005ac040();
  if ((param_2 & 0xff) == 1) {
    local_24 = (int)param_1;
    bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    puVar2 = (undefined4 *)CONCAT71(extraout_var,bVar1);
    puVar3 = puVar2;
    if ((bVar1 & 1) != 0) {
      FUN_100a54208();
      puVar3 = &local_24;
      _swift_willThrowTypedImpl(puVar3,&DAT_100ee42f8,puVar2);
    }
    FUN_100a54208();
    _swift_allocError(&DAT_100ee42f8,puVar3,0,0);
    *puVar3 = (int)param_1;
  }
  return param_1;
}



/* Address: 0x100aa6a78 | FUN_100aa6a78 */

undefined1  [16] FUN_100aa6a78(ulong param_1)

{
  undefined1 auVar1 [16];
  
  FUN_100aa6aac();
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Address: 0x100aa6aac | FUN_100aa6aac */

undefined8 FUN_100aa6aac(undefined8 param_1,uint param_2)

{
  byte bVar1;
  undefined7 extraout_var;
  undefined4 *puVar3;
  undefined4 local_24;
  undefined4 *puVar2;
  
  FUN_1005abf00();
  if ((param_2 & 0xff) == 1) {
    local_24 = (int)param_1;
    bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    puVar2 = (undefined4 *)CONCAT71(extraout_var,bVar1);
    puVar3 = puVar2;
    if ((bVar1 & 1) != 0) {
      FUN_100a54208();
      puVar3 = &local_24;
      _swift_willThrowTypedImpl(puVar3,&DAT_100ee42f8,puVar2);
    }
    FUN_100a54208();
    _swift_allocError(&DAT_100ee42f8,puVar3,0,0);
    *puVar3 = (int)param_1;
  }
  return param_1;
}



/* Address: 0x100aa6b4c | FUN_100aa6b4c */

undefined * FUN_100aa6b4c(undefined8 param_1,long param_2,ulong param_3,ulong param_4)

{
  size_t sVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  param_4 = param_4 >> 1;
  sVar1 = param_4 - param_3;
  if (SBORROW8(param_4,param_3)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100aa6c08);
    (*pcVar2)();
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (sVar1 != 0) {
    if (0 < (long)sVar1) {
      puVar3 = &DAT_100ff6aa8;
      FUN_1000f7830(&DAT_100ff6aa8,&DAT_100c90a58);
      _swift_allocObject();
      puVar4 = puVar3;
      _malloc_size();
      *(size_t *)(puVar3 + 0x10) = sVar1;
      *(long *)(puVar3 + 0x18) = (long)puVar4 * 2 + -0x40;
    }
    if (param_3 == param_4) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100aa6c04);
      (*pcVar2)();
    }
    _memcpy(puVar3 + 0x20,(void *)(param_2 + param_3),sVar1);
  }
  return puVar3;
}



/* Address: 0x100aa6c08 | FUN_100aa6c08 */

void FUN_100aa6c08(void)

{
  FUN_100aa618c();
  return;
}



/* Address: 0x100aa6c1c | FUN_100aa6c1c */

void FUN_100aa6c1c(undefined8 param_1)

{
  FUN_100aa7248(param_1,FUN_100aa7794);
  return;
}



/* Address: 0x100aa6c28 | FUN_100aa6c28 */

char * FUN_100aa6c28(void)

{
  UnsafePointer<__int8> cString;
  char *pcVar1;
  String SVar2;
  
  cString.unknown = _getenv("HOME");
  pcVar1 = (char *)0x0;
  if (cString.unknown != (undefined *)0x0) {
    if (*cString.unknown == '\0') {
      return (char *)0x0;
    }
    SVar2 = Swift::String::init(cString);
    pcVar1 = SVar2.str;
    thunk_FUN_1005b3cd0(pcVar1,SVar2.bridgeObject);
  }
  return pcVar1;
}



/* Address: 0x100aa6c64 | thunk_FUN_100aa82ac */

void thunk_FUN_100aa82ac(void)

{
  FUN_100aa82ac();
  return;
}



/* Address: 0x100aa6c68 | FUN_100aa6c68 */

ulong FUN_100aa6c68(Darwin *param_1,undefined2 param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  int local_54;
  undefined1 auStack_50 [16];
  undefined2 local_40;
  
  Darwin::set_errno(param_1,0);
  local_40 = param_2;
  FUN_1005b32d0(&local_54,FUN_100aa8388,auStack_50,param_1,
                PTR___type_metadata_for_Swift_Int32_100eadbd0);
  uVar2 = 0;
  uVar3 = 0;
  if (local_54 == -1) {
    uVar1 = Darwin::get_errno();
    uVar2 = (ulong)uVar1;
    uVar3 = 0x100000000;
  }
  return uVar3 | uVar2;
}



/* Address: 0x100aa6cec | FUN_100aa6cec */

void FUN_100aa6cec(undefined8 param_1)

{
  FUN_100aa6d04(param_1,FUN_100aa6f78);
  return;
}



/* Address: 0x100aa6cf8 | FUN_100aa6cf8 */

void FUN_100aa6cf8(undefined8 param_1)

{
  FUN_100aa6d04(param_1,FUN_100aa6f28);
  return;
}



/* Address: 0x100aa6d04 | FUN_100aa6d04 */

void FUN_100aa6d04(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  
  puVar1 = &DAT_100ff6e98;
  FUN_1000f7830(&DAT_100ff6e98,&DAT_100c91f78);
  FUN_1005b32d0(&local_c8,param_3,0,param_2,puVar1);
  param_1[0xd] = uStack_60;
  param_1[0xc] = local_68;
  param_1[0xf] = uStack_50;
  param_1[0xe] = local_58;
  param_1[0x11] = uStack_40;
  param_1[0x10] = local_48;
  *(undefined1 *)(param_1 + 0x12) = local_38;
  param_1[5] = uStack_a0;
  param_1[4] = local_a8;
  param_1[7] = uStack_90;
  param_1[6] = local_98;
  param_1[9] = uStack_80;
  param_1[8] = local_88;
  param_1[0xb] = uStack_70;
  param_1[10] = local_78;
  param_1[1] = uStack_c0;
  *param_1 = local_c8;
  param_1[3] = uStack_b0;
  param_1[2] = local_b8;
  return;
}


