/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100679d80 | FUN_100679d80 */

void FUN_100679d80(undefined8 param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  ManagedBufferPointer MVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 *unaff_x20;
  undefined1 auStack_b8 [8];
  long local_b0 [2];
  undefined8 local_a0;
  code *pcStack_98;
  undefined1 *local_90;
  undefined1 auStack_80 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  
  uVar7 = *(undefined8 *)(param_2 + 0x10);
  FUN_1006035b0(local_b0,FUN_1006035a4,0,*unaff_x20,&DAT_100ef5140,uVar7,
                PTR___type_metadata_for_Swift_Never_100eadc38,
                PTR___type_metadata_for_Swift_Int_100eac6f8,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  lVar1 = local_b0[0] + 1;
  if (!SCARRY8(local_b0[0],1)) {
    MVar4 = Swift::ManagedBufferPointer::typeMetadataAccessor();
    bVar3 = Swift::ManagedBufferPointer::isUniqueReference(MVar4);
    FUN_1006035b0(local_b0,FUN_100003284,0,*unaff_x20,&DAT_100ef5140,uVar7,
                  PTR___type_metadata_for_Swift_Never_100eadc38,
                  PTR___type_metadata_for_Swift_Int_100eac6f8,
                  PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
    if ((local_b0[0] < lVar1) || (!bVar3)) {
      uVar5 = 0;
      FUN_1006844f0(0,uVar7);
      FUN_100684260(bVar3,lVar1,0,uVar5);
    }
    uVar5 = *unaff_x20;
    pcStack_98 = FUN_10067f620;
    local_90 = auStack_80;
    puVar6 = &DAT_100fda040;
    local_a0 = uVar7;
    local_70 = uVar7;
    uStack_68 = param_1;
    FUN_1000f7830(&DAT_100fda040,0x100c6d628);
    FUN_1006034cc(FUN_10067f650,local_b0,uVar5,&DAT_100ef5140,uVar7,puVar6,
                  PTR___type_metadata_for____100eae0c8 + 8,
                  PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90,auStack_b8
                 );
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100679f08);
  (*pcVar2)();
}



/* Address: 0x100679f08 | FUN_100679f08 */

undefined8 FUN_100679f08(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_10067f50c();
  _swift_release(param_1);
  return uVar1;
}



/* Address: 0x100679f50 | FUN_100679f50 */

undefined8 FUN_100679f50(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_10067f67c();
  _swift_release(param_1);
  return uVar1;
}



/* Address: 0x100679f98 | FUN_100679f98 */

void FUN_100679f98(undefined8 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_4;
  FUN_100684540(param_4,param_2,param_3,param_6);
  lVar2 = lVar1;
  if (param_4 != param_2[1]) {
    lVar2 = param_2[2];
    FUN_100686f74(lVar2,param_2[1],param_2,param_3,param_6);
    if (lVar2 <= lVar1) {
      lVar2 = *param_2;
    }
  }
  *param_1 = param_5;
  param_1[1] = lVar1;
  param_1[2] = lVar2;
  _swift_retain(param_5);
  return;
}



/* Address: 0x10067a03c | FUN_10067a03c */

undefined1 FUN_10067a03c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [16];
  undefined8 local_80;
  code *pcStack_78;
  undefined1 *local_70;
  undefined1 auStack_60 [16];
  undefined8 local_50;
  undefined1 local_31;
  
  uVar2 = *unaff_x20;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  pcStack_78 = FUN_10067f738;
  local_70 = auStack_60;
  local_80 = uVar3;
  local_50 = uVar3;
  _swift_retain(uVar2);
  puVar1 = &DAT_100fda040;
  FUN_1000f7830(&DAT_100fda040,0x100c6d628);
  FUN_1006034cc(&local_31,FUN_10067f7a0,auStack_90,uVar2,&DAT_100ef5140,uVar3,puVar1,
                PTR___type_metadata_for_Swift_Bool_100eac570,
                PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90,auStack_98);
  _swift_release(uVar2);
  return local_31;
}



/* Address: 0x10067a0f0 | thunk_FUN_100679ba8 */

void thunk_FUN_100679ba8(void)

{
  FUN_100679ba8();
  return;
}



/* Address: 0x10067a0f4 | FUN_10067a0f4 */

undefined8 FUN_10067a0f4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_10067f7c8();
  _swift_release(param_1);
  return uVar1;
}



/* Address: 0x10067a124 | FUN_10067a124 */

void FUN_10067a124(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined1 auStack_90 [16];
  undefined8 local_80;
  code *pcStack_78;
  undefined1 *local_70;
  undefined1 auStack_60 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined1 auStack_28 [8];
  
  pcStack_78 = FUN_100680bc0;
  local_70 = auStack_60;
  puVar1 = &DAT_100fda040;
  local_80 = param_4;
  local_50 = param_4;
  uStack_48 = param_1;
  local_40 = param_2;
  FUN_1000f7830(&DAT_100fda040,0x100c6d628);
  FUN_1006034cc(FUN_10067f650,auStack_90,param_3,&DAT_100ef5140,param_4,puVar1,
                PTR___type_metadata_for____100eae0c8 + 8,
                PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90,auStack_28);
  return;
}



/* Address: 0x10067a1cc | FUN_10067a1cc */

void FUN_10067a1cc(undefined8 param_1,undefined8 param_2,undefined8 *param_3,long *param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  UnsafeMutableBufferPointer UVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  UnsafeBufferPointer UVar6;
  Slice<UnsafeMutableBufferPointer<undefined>> SVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 local_b8;
  undefined *puStack_b0;
  undefined8 local_a8;
  long lStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  Range<__int64> RStack_80;
  undefined8 local_78;
  long local_70;
  char local_68;
  undefined *local_58;
  
  FUN_10068457c(&local_88,param_1,param_2,param_5);
  local_58 = RStack_80.unknown;
  UVar2 = Swift::UnsafeMutableBufferPointer::typeMetadataAccessor();
  puVar3 = &DAT_100fda0f0;
  FUN_1000f7830(&DAT_100fda0f0,0x100c6d9c8);
  puVar4 = 
  PTR_Swift__Swift__UnsafeMutableBufferPointer<undefined>_>Swift__MutableCollection_100eaca30;
  _swift_getWitnessTable
            (PTR_Swift__Swift__UnsafeMutableBufferPointer<undefined>_>Swift__MutableCollection_100eaca30
             ,UVar2.unknown);
  puVar5 = puVar4;
  FUN_100680b34();
  ___extension_in_Swift__Swift_MutableCollection_subscript_getter___<A_where_A1:_Swift_RangeExpression,A_Index____A1_Bound>_A1___>_A_SubSequence
            (&local_a8,&local_58,UVar2.unknown,puVar3,puVar4,puVar5);
  local_b8 = local_88;
  puStack_b0 = RStack_80.unknown;
  UVar6 = Swift::UnsafeBufferPointer::typeMetadataAccessor();
  puVar3 = PTR_Swift__Swift__UnsafeBufferPointer<undefined>_>Swift__Collection_100eac048;
  _swift_getWitnessTable
            (PTR_Swift__Swift__UnsafeBufferPointer<undefined>_>Swift__Collection_100eac048,
             UVar6.unknown);
  FUN_10067f1b0(&local_b8,local_a8,lStack_a0,local_98,uStack_90,param_5,UVar6.unknown,puVar3);
  if (SCARRY8(*param_4,(long)RStack_80.unknown)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10067a37c);
    (*pcVar1)();
  }
  *param_4 = (long)(RStack_80.unknown + *param_4);
  if (local_68 != '\x01') {
    UVar2.unknown = RStack_80.unknown + local_70;
    if (SCARRY8((long)RStack_80.unknown,local_70)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10067a380);
      (*pcVar1)();
    }
    if ((long)UVar2.unknown < (long)RStack_80.unknown) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10067a384);
      (*pcVar1)();
    }
    uVar8 = *param_3;
    uVar9 = param_3[1];
    SVar7 = Swift::UnsafeMutableBufferPointer::get_subscript(RStack_80,UVar2);
    local_a8 = local_78;
    lStack_a0 = local_70;
    FUN_10067f1b0(&local_a8,SVar7.unknown,UVar2.unknown,uVar8,uVar9,param_5,UVar6.unknown,puVar3);
    if (SCARRY8(*param_4,local_70)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10067a388);
      (*pcVar1)();
    }
    *param_4 = *param_4 + local_70;
  }
  return;
}



/* Address: 0x10067a388 | FUN_10067a388 */

void FUN_10067a388(__int64 param_1,code *param_2,undefined8 param_3,ContiguousArray param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  __int64 _Var1;
  long lVar2;
  long lVar3;
  long unaff_x21;
  tuple2_conflict10 tVar4;
  undefined1 auStack_90 [8];
  undefined8 local_88;
  undefined *local_80;
  __int64 _Stack_78;
  undefined8 local_70;
  undefined *puStack_68;
  undefined *local_58;
  
  lVar3 = *(long *)(param_5 + -8);
  lVar2 = *(long *)(lVar3 + 0x40);
  local_88 = param_6;
  tVar4 = Swift::ContiguousArray::_allocateUninitialized(param_1,param_4);
  puStack_68 = (undefined *)tVar4._.unknown;
  local_58 = (undefined *)tVar4._.unknown;
  local_70 = 0;
  _Var1 = param_1;
  local_80 = (undefined *)Swift::UnsafeMutableBufferPointer::_init((__int64)puStack_68);
  _Stack_78 = _Var1;
  (*param_2)(&local_80,&local_70,auStack_90 + -(lVar2 + 0xfU & 0xfffffffffffffff0));
  if (unaff_x21 == 0) {
    FUN_10067f170(&local_70,param_1,&local_80,&puStack_68,&local_58,param_4.unknown,param_5,local_88
                 );
  }
  else {
    (**(code **)(lVar3 + 0x20))(param_7,auStack_90 + -(lVar2 + 0xfU & 0xfffffffffffffff0),param_5);
    FUN_10067f170(&local_70,param_1,&local_80,&puStack_68,&local_58,param_4.unknown,param_5,local_88
                 );
    _swift_release(local_58);
  }
  return;
}



/* Address: 0x10067a4b8 | FUN_10067a4b8 */

undefined8 FUN_10067a4b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_10067f86c();
  _swift_release(param_3);
  return param_1;
}



/* Address: 0x10067a510 | FUN_10067a510 */

void FUN_10067a510(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5,undefined8 param_6,undefined8 param_7)

{
  Range<__int64> RVar1;
  long lVar2;
  code *pcVar3;
  UnsafeMutableBufferPointer UVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  UnsafeBufferPointer UVar8;
  Slice SVar9;
  Slice<UnsafeMutableBufferPointer<undefined>> SVar10;
  undefined8 uVar11;
  UnsafeMutableBufferPointer UVar12;
  undefined8 local_e0;
  long lStack_d8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined *puStack_98;
  undefined1 local_90 [8];
  undefined *puStack_88;
  undefined8 local_80;
  long local_78;
  char local_70;
  undefined *local_58;
  
  FUN_10068457c(local_90,param_2,param_3,param_7);
  RVar1.unknown = param_5;
  if ((long)puStack_88 <= (long)param_5) {
    RVar1.unknown = puStack_88;
  }
  local_a0 = param_4;
  puStack_98 = param_5;
  local_58 = RVar1.unknown;
  UVar4 = Swift::UnsafeMutableBufferPointer::typeMetadataAccessor();
  puVar5 = &DAT_100fda0f0;
  FUN_1000f7830(&DAT_100fda0f0,0x100c6d9c8);
  puVar6 = 
  PTR_Swift__Swift__UnsafeMutableBufferPointer<undefined>_>Swift__MutableCollection_100eaca30;
  _swift_getWitnessTable
            (PTR_Swift__Swift__UnsafeMutableBufferPointer<undefined>_>Swift__MutableCollection_100eaca30
             ,UVar4.unknown);
  puVar7 = puVar6;
  FUN_100680b34();
  ___extension_in_Swift__Swift_MutableCollection_subscript_getter___<A_where_A1:_Swift_RangeExpression,A_Index____A1_Bound>_A1___>_A_SubSequence
            (&local_c0,&local_58,UVar4.unknown,puVar5,puVar6,puVar7);
  UVar8 = Swift::UnsafeBufferPointer::typeMetadataAccessor();
  _swift_getWitnessTable
            (PTR_Swift__Swift__UnsafeBufferPointer<undefined>_>Swift__Collection_100eac048,
             UVar8.unknown);
  (extension_Swift)::Swift::Collection::_prefix((__int64)RVar1.unknown);
  SVar9 = Swift::Slice::typeMetadataAccessor();
  puVar5 = PTR_Swift__Swift__Slice<undefined>_>Swift__Collection_100eadcb8;
  _swift_getWitnessTable
            (PTR_Swift__Swift__Slice<undefined>_>Swift__Collection_100eadcb8,SVar9.unknown);
  FUN_10067f1b0(&local_e0,local_c0,uStack_b8,local_b0,uStack_a8,param_7,SVar9.unknown,puVar5);
  UVar4.unknown = RVar1.unknown;
  if (((long)puStack_88 < (long)param_5) && (local_70 != '\x01')) {
    if (SBORROW8((long)param_5,(long)RVar1.unknown)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10067a76c);
      (*pcVar3)();
    }
    lVar2 = (long)param_5 - (long)RVar1.unknown;
    if (local_78 <= (long)param_5 - (long)RVar1.unknown) {
      lVar2 = local_78;
    }
    UVar4.unknown = RVar1.unknown + lVar2;
    if (SCARRY8((long)RVar1.unknown,lVar2)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10067a770);
      (*pcVar3)();
    }
    if ((long)UVar4.unknown < (long)RVar1.unknown) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10067a774);
      (*pcVar3)();
    }
    UVar12.unknown = UVar4.unknown;
    SVar10 = Swift::UnsafeMutableBufferPointer::get_subscript(RVar1,UVar4);
    local_e0 = local_80;
    lStack_d8 = local_78;
    (extension_Swift)::Swift::Collection::_prefix(lVar2);
    FUN_10067f1b0(&local_c0,SVar10.unknown,UVar12.unknown,param_4,param_5,param_7,SVar9.unknown,
                  puVar5);
  }
  uVar11 = param_6;
  _swift_retain();
  puVar5 = UVar4.unknown;
  FUN_10067f67c();
  _swift_release(param_6);
  *param_1 = uVar11;
  param_1[1] = puVar5;
  param_1[2] = param_7;
  param_1[3] = UVar4.unknown;
  return;
}



/* Address: 0x10067a774 | FUN_10067a774 */

void FUN_10067a774(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  Optional OVar1;
  undefined7 extraout_var;
  undefined *puVar2;
  undefined1 auStack_a0 [16];
  undefined8 local_90;
  undefined8 local_88;
  code *pcStack_80;
  undefined1 *local_78;
  undefined1 auStack_70 [16];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_38 [8];
  
  local_90 = param_5;
  local_60 = param_5;
  uStack_58 = param_6;
  local_50 = param_2;
  local_48 = param_3;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  pcStack_80 = FUN_10067f944;
  local_78 = auStack_70;
  puVar2 = &DAT_100fda040;
  local_88 = CONCAT71(extraout_var,OVar1.value);
  FUN_1000f7830(&DAT_100fda040,0x100c6d628);
  FUN_1006034cc(param_1,FUN_10067f960,auStack_a0,param_4,&DAT_100ef5140,param_5,puVar2,
                CONCAT71(extraout_var,OVar1.value),
                PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90,local_38);
  return;
}



/* Address: 0x10067a840 | FUN_10067a840 */

void FUN_10067a840(undefined8 param_1,long *param_2,undefined8 param_3,code *param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x21;
  
  lVar1 = param_2[1] + param_2[2];
  if (*param_2 < lVar1) {
    uVar3 = 1;
  }
  else {
    if (lVar1 < param_2[2]) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10067a8e8);
      (*pcVar2)();
    }
    FUN_100684644();
    (*param_4)(param_1);
    if (unaff_x21 != 0) {
      return;
    }
    uVar3 = 0;
  }
  (**(code **)(*(long *)(param_7 + -8) + 0x38))(param_1,uVar3,1,param_7);
  return;
}



/* Address: 0x10067a8e8 | FUN_10067a8e8 */

void FUN_10067a8e8(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  
  uVar3 = *unaff_x20;
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  uVar1 = uVar3;
  FUN_100679b54();
  _swift_release(uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = param_4;
  return;
}



/* Address: 0x10067a940 | FUN_10067a940 */

void FUN_10067a940(undefined8 param_1)

{
  _swift_getWitnessTable(0x100c6d780,param_1);
  (extension_Swift)::Swift::Collection::get_underestimatedCount();
  return;
}



/* Address: 0x10067a974 | FUN_10067a974 */

undefined8 FUN_10067a974(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  
  uVar2 = *unaff_x20;
  uVar1 = uVar2;
  FUN_10067f7c8(uVar2,*(undefined8 *)(param_1 + 0x10));
  _swift_release(uVar2);
  return uVar1;
}



/* Address: 0x10067a9ac | FUN_10067a9ac */

undefined8 FUN_10067a9ac(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  
  uVar3 = *unaff_x20;
  uVar2 = *(undefined8 *)(param_4 + 0x10);
  uVar1 = uVar3;
  FUN_10067f86c();
  _swift_release(uVar3);
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = uVar1;
  return uVar2;
}



/* Address: 0x10067aa14 | FUN_10067aa14 */

void FUN_10067aa14(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *unaff_x20;
  
  FUN_10067a774(param_1,param_2,*unaff_x20,*(undefined8 *)(param_4 + 0x10),param_3);
  return;
}



/* Address: 0x10067aa34 | FUN_10067aa34 */

undefined8 FUN_10067aa34(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_28;
  
  FUN_1006035b0(&local_28,FUN_1006035a4,0,param_1,&DAT_100ef5140,param_2,
                PTR___type_metadata_for_Swift_Never_100eadc38,
                PTR___type_metadata_for_Swift_Int_100eac6f8,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  return local_28;
}



/* Address: 0x10067aa98 | FUN_10067aa98 */

undefined8 FUN_10067aa98(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long local_28;
  
  FUN_1006035b0(&local_28,FUN_1006035a4,0,param_1,&DAT_100ef5140,param_2,
                PTR___type_metadata_for_Swift_Never_100eadc38,
                PTR___type_metadata_for_Swift_Int_100eac6f8,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  if (-1 < local_28) {
    return 0;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10067ab08);
  (*pcVar1)();
}



/* Address: 0x10067ab08 | FUN_10067ab08 */

long FUN_10067ab08(long param_1)

{
  code *pcVar1;
  
  if (!SBORROW8(param_1,1)) {
    return param_1 + -1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10067ab18);
  (*pcVar1)();
}



/* Address: 0x10067ab18 | thunk_FUN_10061c770 */

void thunk_FUN_10061c770(void)

{
  FUN_10061c770();
  return;
}



/* Address: 0x10067ab1c | FUN_10067ab1c */

long FUN_10067ab1c(long param_1,long param_2)

{
  code *pcVar1;
  
  if (!SBORROW8(param_2,param_1)) {
    return param_2 - param_1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10067ab2c);
  (*pcVar1)();
}



/* Address: 0x10067ab2c | FUN_10067ab2c */

void FUN_10067ab2c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined1 auStack_a8 [8];
  long local_a0 [2];
  undefined8 local_90;
  undefined8 uStack_88;
  code *local_80;
  undefined1 *puStack_78;
  undefined1 auStack_70 [16];
  undefined8 local_60;
  long lStack_58;
  
  if (param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10067ac28);
    (*pcVar1)();
  }
  FUN_1006035b0(local_a0,FUN_1006035a4,0,param_3,&DAT_100ef5140,param_4,
                PTR___type_metadata_for_Swift_Never_100eadc38,
                PTR___type_metadata_for_Swift_Int_100eac6f8,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  if (param_2 < local_a0[0]) {
    puStack_78 = auStack_70;
    local_80 = FUN_10067f980;
    puVar2 = &DAT_100fda040;
    local_90 = param_4;
    uStack_88 = param_4;
    local_60 = param_4;
    lStack_58 = param_2;
    FUN_1000f7830(&DAT_100fda040,0x100c6d628);
    FUN_1006034cc(param_1,FUN_100680c70,local_a0,param_3,&DAT_100ef5140,param_4,puVar2,param_4,
                  PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90,auStack_a8
                 );
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10067ac2c);
  (*pcVar1)();
}



/* Address: 0x10067ac2c | FUN_10067ac2c */

void FUN_10067ac2c(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_10067f9e0();
                    /* WARNING: Could not recover jumptable at 0x00010067ac64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 8))(param_1);
  return;
}



/* Address: 0x10067ac68 | FUN_10067ac68 */

undefined1  [16] FUN_10067ac68(undefined8 *param_1,long param_2,long param_3)

{
  undefined *puVar1;
  code *pcVar2;
  long *plVar3;
  void *pvVar4;
  void *pvVar5;
  long lVar6;
  undefined8 *unaff_x20;
  long lVar7;
  undefined1 auVar8 [16];
  
  puVar1 = PTR__swift_coroFrameAlloc_100eae1a0;
  plVar3 = (long *)&DAT_00000030;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    plVar3 = _malloc(0x30);
  }
  else {
    _swift_coroFrameAlloc(0x30,0x6499);
  }
  *param_1 = plVar3;
  plVar3[2] = (long)unaff_x20;
  lVar7 = *(long *)(param_3 + 0x10);
  plVar3[3] = lVar7;
  lVar6 = *(long *)(lVar7 + -8);
  plVar3[4] = lVar6;
  pvVar4 = *(void **)(lVar6 + 0x40);
  if (puVar1 == (undefined *)0x0) {
    pvVar4 = _malloc((size_t)pvVar4);
  }
  else {
    _swift_coroFrameAlloc(pvVar4,0x6499);
  }
  plVar3[5] = (long)pvVar4;
  if (-1 < param_2) {
    FUN_1006035b0(plVar3,FUN_1006035a4,0,*unaff_x20,&DAT_100ef5140,lVar7,
                  PTR___type_metadata_for_Swift_Never_100eadc38,
                  PTR___type_metadata_for_Swift_Int_100eac6f8,
                  PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
    if (param_2 < *plVar3) {
      pvVar5 = pvVar4;
      FUN_10067add0(pvVar4,param_2,param_3);
      plVar3[1] = (long)pvVar5;
      auVar8._8_8_ = pvVar4;
      auVar8._0_8_ = FUN_10067ad78;
      return auVar8;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10067ad78);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10067ad74);
  (*pcVar2)();
}



/* Address: 0x10067ad78 | FUN_10067ad78 */

void FUN_10067ad78(undefined8 *param_1)

{
  long lVar1;
  void *pvVar2;
  undefined8 uVar3;
  void *pvVar4;
  
  pvVar4 = (void *)*param_1;
  lVar1 = *(long *)((long)pvVar4 + 0x20);
  pvVar2 = *(void **)((long)pvVar4 + 0x28);
  uVar3 = *(undefined8 *)((long)pvVar4 + 0x18);
  FUN_10067af0c(*(undefined8 *)((long)pvVar4 + 0x10),(long)pvVar4 + 8,pvVar2,uVar3);
  (**(code **)(lVar1 + 8))(pvVar2,uVar3);
  _free(pvVar2);
  _free(pvVar4);
  return;
}



/* Address: 0x10067add0 | FUN_10067add0 */

undefined8 FUN_10067add0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  ManagedBufferPointer MVar4;
  undefined *puVar5;
  undefined8 *unaff_x20;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 auStack_b0 [2];
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [16];
  long local_80;
  long lStack_78;
  code *local_70;
  undefined1 *puStack_68;
  undefined1 auStack_60 [16];
  long local_50;
  undefined8 uStack_48;
  
  lVar7 = *(long *)(param_3 + 0x10);
  lVar3 = 0;
  _swift_getTupleTypeMetadata2(0,&DAT_100ef5230,lVar7,0,0);
  lVar1 = -(*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = (undefined8 *)((long)&uStack_a0 + lVar1);
  MVar4 = Swift::ManagedBufferPointer::typeMetadataAccessor();
  bVar2 = Swift::ManagedBufferPointer::isUniqueReference(MVar4);
  if (!bVar2) {
    FUN_1006844f0(0,lVar7);
    FUN_1006840e8();
  }
  uVar6 = *unaff_x20;
  puStack_68 = auStack_60;
  local_70 = FUN_10067fb18;
  puVar5 = &DAT_100fda040;
  local_80 = lVar7;
  lStack_78 = lVar3;
  local_50 = lVar7;
  uStack_48 = param_2;
  FUN_1000f7830(&DAT_100fda040,0x100c6d628);
  *(undefined1 **)((long)auStack_b0 + lVar1) = auStack_98;
  FUN_1006034cc(puVar8,FUN_10067f960,auStack_90,uVar6,&DAT_100ef5140,lVar7,puVar5,lVar3,
                PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
  uVar6 = *puVar8;
  (**(code **)(*(long *)(lVar7 + -8) + 0x20))
            (param_1,(long)puVar8 + (long)*(int *)(lVar3 + 0x30),lVar7);
  return uVar6;
}



/* Address: 0x10067af0c | FUN_10067af0c */

void FUN_10067af0c(undefined8 param_1,undefined8 *param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_4 + -8);
  puVar2 = &stack0xffffffffffffffc0 + -(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar3 = *param_2;
  (**(code **)(lVar4 + 0x10))(puVar2,param_3,param_4);
  uVar1 = 0;
  FUN_1006883a0(0,param_4);
  FUN_10067b02c(uVar3,puVar2,uVar1);
  (**(code **)(lVar4 + 8))(puVar2,param_4);
  return;
}



/* Address: 0x10067afa0 | FUN_10067afa0 */

void FUN_10067afa0(long *param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  FUN_100684540(param_4,param_2,param_3);
  _swift_getTupleTypeMetadata2(0,&DAT_100ef5230,param_5,0,0);
  *param_1 = param_4;
  Swift::UnsafeMutablePointer::move
            ((undefined *)(param_3 + *(long *)(*(long *)(param_5 + -8) + 0x48) * param_4));
  return;
}



/* Address: 0x10067b02c | FUN_10067b02c */

void FUN_10067b02c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [16];
  undefined8 local_80;
  code *pcStack_78;
  undefined1 *local_70;
  undefined1 auStack_60 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  uVar2 = *unaff_x20;
  uVar3 = *(undefined8 *)(param_3 + 0x10);
  pcStack_78 = FUN_10067fb30;
  local_70 = auStack_60;
  puVar1 = &DAT_100fda040;
  local_80 = uVar3;
  local_50 = uVar3;
  uStack_48 = param_1;
  local_40 = param_2;
  FUN_1000f7830(&DAT_100fda040,0x100c6d628);
  FUN_1006034cc(FUN_100680c84,auStack_90,uVar2,&DAT_100ef5140,uVar3,puVar1,
                PTR___type_metadata_for____100eae0c8 + 8,
                PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90,auStack_98);
  return;
}



/* Address: 0x10067b0d0 | FUN_10067b0d0 */

void FUN_10067b0d0(undefined8 param_1,long param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_5 + -8);
  lVar2 = *(long *)(lVar1 + 0x40);
  lVar3 = *(long *)(lVar1 + 0x48);
  (**(code **)(lVar1 + 0x10))
            (&stack0xffffffffffffffd0 + -(lVar2 + 0xfU & 0xfffffffffffffff0),param_4,param_5);
  FUN_1006331c4(&stack0xffffffffffffffd0 + -(lVar2 + 0xfU & 0xfffffffffffffff0),
                param_2 + lVar3 * param_3,param_5);
  return;
}



/* Address: 0x10067b148 | FUN_10067b148 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010067b200 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

long FUN_10067b148(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long local_78;
  long local_70;
  undefined8 uStack_68;
  long local_60 [4];
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10067b228);
    (*pcVar1)();
  }
  FUN_1006035b0(local_60,FUN_1006035a4,0,param_3,&DAT_100ef5140,param_4,
                PTR___type_metadata_for_Swift_Never_100eadc38,
                PTR___type_metadata_for_Swift_Int_100eac6f8,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  if (param_2 <= local_60[0]) {
    uVar2 = 0;
    local_78 = param_1;
    local_70 = param_2;
    uStack_68 = param_3;
    FUN_1006883a0(0,param_4);
    _swift_retain(param_3);
    uVar3 = 0x100c6d780;
    _swift_getWitnessTable(0x100c6d780,uVar2);
    Swift::Slice::_init(local_60,uVar3,&local_78,uVar2,uVar3);
    return local_60[0];
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10067b22c);
  (*pcVar1)();
}



/* Address: 0x10067b22c | FUN_10067b22c */

void FUN_10067b22c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_10067ff34();
  _swift_release(param_3);
  return;
}



/* Address: 0x10067b250 | FUN_10067b250 */

void FUN_10067b250(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  FUN_10067fb4c();
                    /* WARNING: Could not recover jumptable at 0x00010067b288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_5 + -8) + 8))(param_3,param_5);
  return;
}



/* Address: 0x10067b28c | FUN_10067b28c */

undefined1  [16]
FUN_10067b28c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined1 auVar3 [16];
  
  puVar1 = (undefined8 *)&DAT_00000038;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    puVar1 = _malloc(0x38);
  }
  else {
    _swift_coroFrameAlloc(0x38,0x8766);
  }
  *param_1 = puVar1;
  puVar1[5] = param_4;
  puVar1[6] = unaff_x20;
  puVar1[3] = param_2;
  puVar1[4] = param_3;
  uVar2 = *unaff_x20;
  FUN_10067b148();
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1[2] = uVar2;
  auVar3._8_8_ = puVar1;
  auVar3._0_8_ = FUN_10067b31c;
  return auVar3;
}



/* Address: 0x10067b31c | FUN_10067b31c */

void FUN_10067b31c(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  param_1 = (undefined8 *)*param_1;
  uVar1 = *param_1;
  uVar4 = param_1[1];
  uVar2 = param_1[5];
  uVar3 = param_1[3];
  uVar5 = param_1[4];
  uVar6 = param_1[2];
  if ((param_2 & 1) == 0) {
    FUN_10067ff34(uVar1,uVar4,uVar6,uVar3,uVar5,uVar2);
  }
  else {
    _swift_retain(uVar6);
    FUN_10067ff34(uVar1,uVar4,uVar6,uVar3,uVar5,uVar2);
    _swift_release(uVar6);
    uVar6 = param_1[2];
  }
  _swift_release(uVar6);
  _free(param_1);
  return;
}



/* Address: 0x10067b3c0 | FUN_10067b3c0 */

void FUN_10067b3c0(long param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1006035b0(FUN_1006035a4,0,*unaff_x20,&DAT_100ef5140,*(undefined8 *)(param_1 + 0x10),
                PTR___type_metadata_for_Swift_Never_100eadc38,
                PTR___type_metadata_for_Swift_Int_100eac6f8,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  return;
}



/* Address: 0x10067b41c | FUN_10067b41c */

code * FUN_10067b41c(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = (void *)0x28;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    pvVar1 = _malloc(0x28);
  }
  else {
    _swift_coroFrameAlloc(0x28,0x8dd6);
  }
  *param_1 = pvVar1;
  pvVar2 = pvVar1;
  FUN_10067b494();
  *(void **)((long)pvVar1 + 0x20) = pvVar2;
  return FUN_10026c674;
}



/* Address: 0x10067b494 | FUN_10067b494 */

undefined1  [16] FUN_10067b494(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  void *pvVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  lVar2 = *(long *)(param_4 + -8);
  *param_1 = param_4;
  param_1[1] = lVar2;
  pvVar1 = *(void **)(lVar2 + 0x40);
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    pvVar1 = _malloc((size_t)pvVar1);
  }
  else {
    _swift_coroFrameAlloc(pvVar1,0xc81d);
  }
  param_1[2] = (long)pvVar1;
  FUN_10067ab2c(pvVar1,param_2,param_3,param_4);
  auVar3._8_8_ = pvVar1;
  auVar3._0_8_ = FUN_1006333c4;
  return auVar3;
}



/* Address: 0x10067b51c | FUN_10067b51c */

void FUN_10067b51c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *unaff_x20;
  FUN_10067b148();
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  return;
}



/* Address: 0x10067b558 | FUN_10067b558 */

void FUN_10067b558(undefined8 *param_1,long param_2)

{
  code *pcVar1;
  undefined8 *unaff_x20;
  long local_38;
  
  FUN_1006035b0(&local_38,FUN_1006035a4,0,*unaff_x20,&DAT_100ef5140,*(undefined8 *)(param_2 + 0x10),
                PTR___type_metadata_for_Swift_Never_100eadc38,
                PTR___type_metadata_for_Swift_Int_100eac6f8,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  if (-1 < local_38) {
    *param_1 = 0;
    param_1[1] = local_38;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10067b5d4);
  (*pcVar1)();
}



/* Address: 0x10067b5d4 | FUN_10067b5d4 */

undefined8 FUN_10067b5d4(long param_1)

{
  undefined8 *unaff_x20;
  undefined8 local_28;
  
  FUN_1006035b0(&local_28,FUN_1006035a4,0,*unaff_x20,&DAT_100ef5140,*(undefined8 *)(param_1 + 0x10),
                PTR___type_metadata_for_Swift_Never_100eadc38,
                PTR___type_metadata_for_Swift_Int_100eac6f8,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  return local_28;
}



/* Address: 0x10067b638 | FUN_10067b638 */

void FUN_10067b638(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  bool bVar2;
  ManagedBufferPointer MVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *unaff_x20;
  undefined8 uVar6;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [16];
  undefined8 local_90;
  code *pcStack_88;
  long *local_80;
  long local_70 [2];
  undefined8 local_60;
  long lStack_58;
  long local_50;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10067b7b8);
    (*pcVar1)();
  }
  uVar6 = *unaff_x20;
  uVar5 = *(undefined8 *)(param_3 + 0x10);
  FUN_1006035b0(local_70,FUN_1006035a4,0,uVar6,&DAT_100ef5140,uVar5,
                PTR___type_metadata_for_Swift_Never_100eadc38,
                PTR___type_metadata_for_Swift_Int_100eac6f8,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  if ((-1 < param_2) && (param_1 < local_70[0])) {
    FUN_1006035b0(local_70,FUN_1006035a4,0,uVar6,&DAT_100ef5140,uVar5,
                  PTR___type_metadata_for_Swift_Never_100eadc38,
                  PTR___type_metadata_for_Swift_Int_100eac6f8,
                  PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
    if (param_2 < local_70[0]) {
      MVar3 = Swift::ManagedBufferPointer::typeMetadataAccessor();
      bVar2 = Swift::ManagedBufferPointer::isUniqueReference(MVar3);
      if (!bVar2) {
        FUN_1006844f0(0,uVar5);
        FUN_1006840e8();
      }
      uVar6 = *unaff_x20;
      pcStack_88 = FUN_100680034;
      local_80 = local_70;
      puVar4 = &DAT_100fda040;
      local_90 = uVar5;
      local_60 = uVar5;
      lStack_58 = param_1;
      local_50 = param_2;
      FUN_1000f7830(&DAT_100fda040,0x100c6d628);
      FUN_1006034cc(FUN_100680c84,auStack_a0,uVar6,&DAT_100ef5140,uVar5,puVar4,
                    PTR___type_metadata_for____100eae0c8 + 8,
                    PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90,
                    auStack_a8);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10067b7c0);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10067b7bc);
  (*pcVar1)();
}



/* Address: 0x10067b7c0 | FUN_10067b7c0 */

void FUN_10067b7c0(undefined8 param_1,__int64 param_2,__int64 param_3,__int64 param_4,
                  undefined8 param_5)

{
  UnsafeMutableBufferPointer<undefined> UVar1;
  
  FUN_100684540(param_3,param_1,param_2,param_5);
  FUN_100684540(param_4,param_1,param_2,param_5);
  UVar1 = Swift::UnsafeMutableBufferPointer::_init(param_2);
  Swift::UnsafeMutableBufferPointer::swapAt
            (param_3,param_4,(UnsafeMutableBufferPointer)UVar1.unknown);
  return;
}



/* Address: 0x10067b858 | FUN_10067b858 */

void FUN_10067b858(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  bool bVar1;
  Optional OVar2;
  ManagedBufferPointer MVar3;
  undefined7 extraout_var;
  undefined *puVar4;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_b0 [16];
  undefined8 local_a0;
  undefined8 local_98;
  code *pcStack_90;
  undefined1 *local_88;
  undefined1 auStack_80 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_48 [8];
  
  uVar6 = *(undefined8 *)(param_4 + 0x10);
  MVar3 = Swift::ManagedBufferPointer::typeMetadataAccessor();
  bVar1 = Swift::ManagedBufferPointer::isUniqueReference(MVar3);
  if (!bVar1) {
    FUN_1006844f0(0,uVar6);
    FUN_1006840e8();
  }
  uVar5 = *unaff_x20;
  local_a0 = uVar6;
  local_70 = uVar6;
  uStack_68 = param_5;
  local_60 = param_2;
  uStack_58 = param_3;
  OVar2 = Swift::Optional::typeMetadataAccessor();
  pcStack_90 = FUN_100680050;
  local_88 = auStack_80;
  puVar4 = &DAT_100fda040;
  local_98 = CONCAT71(extraout_var,OVar2.value);
  FUN_1000f7830(&DAT_100fda040,0x100c6d628);
  FUN_1006034cc(param_1,FUN_100680c48,auStack_b0,uVar5,&DAT_100ef5140,uVar6,puVar4,
                CONCAT71(extraout_var,OVar2.value),
                PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90,local_48);
  return;
}



/* Address: 0x10067b964 | FUN_10067b964 */

void FUN_10067b964(undefined8 param_1,long *param_2,undefined8 param_3,code *param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  code *pcVar1;
  UnsafeBufferPointer<undefined> mutating;
  UnsafeMutableBufferPointer<undefined> UVar2;
  undefined *puVar3;
  long unaff_x21;
  undefined *local_60;
  undefined *local_58;
  
  mutating.unknown = (undefined *)param_2[2];
  puVar3 = mutating.unknown + param_2[1];
  if (*param_2 < (long)puVar3) {
    (**(code **)(*(long *)(param_7 + -8) + 0x38))(param_1,1,1,param_7);
  }
  else {
    if ((long)puVar3 < (long)mutating.unknown) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10067baa0);
      (*pcVar1)();
    }
    FUN_100684644();
    UVar2 = Swift::UnsafeMutableBufferPointer::init(mutating);
    local_60 = UVar2.unknown;
    local_58 = puVar3;
    (*param_4)(param_1,&local_60);
    if (unaff_x21 == 0) {
      (**(code **)(*(long *)(param_7 + -8) + 0x38))(param_1,0,1,param_7);
      if (local_60 == (undefined *)0x0) {
        if (UVar2.unknown != (undefined *)0x0) goto LAB_10067baa8;
      }
      else {
        if (UVar2.unknown == (undefined *)0x0) {
LAB_10067baa8:
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10067baac);
          (*pcVar1)();
        }
        if (local_60 != UVar2.unknown) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10067ba58);
          (*pcVar1)();
        }
      }
      if (local_58 != puVar3) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10067baa4);
        (*pcVar1)();
      }
    }
    else {
      if (local_60 == (undefined *)0x0) {
        if (UVar2.unknown != (undefined *)0x0) goto LAB_10067baa4;
      }
      else {
        if (UVar2.unknown == (undefined *)0x0) {
LAB_10067baa4:
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10067baa8);
          (*pcVar1)();
        }
        if (local_60 != UVar2.unknown) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10067ba20);
          (*pcVar1)();
        }
      }
      if (local_58 != puVar3) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10067ba6c);
        (*pcVar1)();
      }
    }
  }
  return;
}



/* Address: 0x10067baac | FUN_10067baac */

void FUN_10067baac(void)

{
  FUN_10067b858();
  return;
}



/* Address: 0x10067bac0 | FUN_10067bac0 */

void FUN_10067bac0(void)

{
  FUN_10067f038();
  return;
}



/* Address: 0x10067bacc | FUN_10067bacc */

undefined1  [16] FUN_10067bacc(undefined8 *param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  code *pcVar2;
  long *plVar3;
  void *pvVar4;
  void *pvVar5;
  long lVar6;
  undefined8 *unaff_x20;
  long lVar7;
  undefined1 auVar8 [16];
  
  puVar1 = PTR__swift_coroFrameAlloc_100eae1a0;
  plVar3 = (long *)&DAT_00000030;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    plVar3 = _malloc(0x30);
  }
  else {
    _swift_coroFrameAlloc(0x30,0x6152);
  }
  *param_1 = plVar3;
  plVar3[2] = (long)unaff_x20;
  lVar7 = *(long *)(param_3 + 0x10);
  plVar3[3] = lVar7;
  lVar6 = *(long *)(lVar7 + -8);
  plVar3[4] = lVar6;
  pvVar4 = *(void **)(lVar6 + 0x40);
  if (puVar1 == (undefined *)0x0) {
    pvVar4 = _malloc((size_t)pvVar4);
  }
  else {
    _swift_coroFrameAlloc(pvVar4,0x6152);
  }
  plVar3[5] = (long)pvVar4;
  lVar6 = *param_2;
  if (-1 < lVar6) {
    FUN_1006035b0(plVar3,FUN_1006035a4,0,*unaff_x20,&DAT_100ef5140,lVar7,
                  PTR___type_metadata_for_Swift_Never_100eadc38,
                  PTR___type_metadata_for_Swift_Int_100eac6f8,
                  PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
    if (lVar6 < *plVar3) {
      pvVar5 = pvVar4;
      FUN_10067add0(pvVar4,lVar6,param_3);
      plVar3[1] = (long)pvVar5;
      auVar8._8_8_ = pvVar4;
      auVar8._0_8_ = FUN_10067ad78;
      return auVar8;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10067bbe8);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10067bbe4);
  (*pcVar2)();
}



/* Address: 0x10067bbe8 | FUN_10067bbe8 */

void FUN_10067bbe8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1[2];
  FUN_10067ff34(*param_1,param_1[1],uVar1,*param_2,param_2[1],param_3);
  _swift_release(uVar1);
  return;
}



/* Address: 0x10067bc24 | FUN_10067bc24 */

undefined1  [16] FUN_10067bc24(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  undefined1 auVar5 [16];
  
  puVar1 = (undefined8 *)&DAT_00000038;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    puVar1 = _malloc(0x38);
  }
  else {
    _swift_coroFrameAlloc(0x38,0x38a1);
  }
  *param_1 = puVar1;
  puVar1[3] = unaff_x20;
  puVar1[4] = param_3;
  uVar2 = *param_2;
  uVar3 = param_2[1];
  puVar1[5] = uVar2;
  puVar1[6] = uVar3;
  uVar4 = *unaff_x20;
  FUN_10067b148();
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  auVar5._8_8_ = puVar1;
  auVar5._0_8_ = FUN_10067bcac;
  return auVar5;
}



/* Address: 0x10067bcac | FUN_10067bcac */

void FUN_10067bcac(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  param_1 = (undefined8 *)*param_1;
  uVar1 = *param_1;
  uVar3 = param_1[1];
  uVar2 = param_1[5];
  uVar4 = param_1[6];
  uVar5 = param_1[4];
  uVar6 = param_1[2];
  if ((param_2 & 1) == 0) {
    FUN_10067ff34(uVar1,uVar3,uVar6,uVar2,uVar4,uVar5);
  }
  else {
    _swift_retain(uVar6);
    FUN_10067ff34(uVar1,uVar3,uVar6,uVar2,uVar4,uVar5);
    _swift_release(uVar6);
    uVar6 = param_1[2];
  }
  _swift_release(uVar6);
  _free(param_1);
  return;
}



/* Address: 0x10067bd50 | FUN_10067bd50 */

void FUN_10067bd50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _swift_getWitnessTable(&TargetResilientWitness_100c6d720,param_3);
  (extension_Swift)::Swift::MutableCollection::_partition();
  return;
}



/* Address: 0x10067bdc0 | FUN_10067bdc0 */

void FUN_10067bdc0(undefined8 *param_1,undefined8 *param_2)

{
  FUN_10067b638(*param_1,*param_2);
  return;
}



/* Address: 0x10067bdcc | FUN_10067bdcc */

void FUN_10067bdcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_10067baac(param_1,param_2,param_4,param_3);
  return;
}



/* Address: 0x10067bdec | FUN_10067bdec */

void FUN_10067bdec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_10067b858(param_1,param_2,param_4,param_3);
  return;
}



/* Address: 0x10067be0c | FUN_10067be0c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010067bfcc */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10067be0c(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  PartialRangeUpTo PVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  long local_110;
  long local_108;
  code *local_100;
  long local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  long local_e0;
  long local_d8;
  undefined *local_d0;
  long local_c8;
  long local_c0;
  
  puVar8 = PTR___protocol_requirements_base_descriptor_for_Swift_Collection_100eac828;
  lVar4 = 0xff;
  local_110 = param_4;
  _swift_getAssociatedTypeWitness
            (0xff,in_stack_00000020,in_stack_00000018,
             PTR___protocol_requirements_base_descriptor_for_Swift_Collection_100eac828,
             PTR___associated_type_descriptor_for_Swift_Collection_Index_100eabcf0);
  lVar5 = in_stack_00000020;
  _swift_getAssociatedConformanceWitness
            (in_stack_00000020,in_stack_00000018,lVar4,puVar8,
             PTR___associated_conformance_descriptor_for_Swift_Collection_Swift_Collection_Index__Swift_Comparable_100eac7d0
            );
  local_d0 = (undefined *)Swift::PartialRangeFrom::typeMetadataAccessor();
  local_d8 = *(long *)(local_d0 + -8);
  lVar12 = (long)&local_110 - (*(long *)(local_d8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  local_e0 = lVar12;
  _swift_getAssociatedTypeWitness
            (0,in_stack_00000020,in_stack_00000018,puVar8,
             PTR___associated_type_descriptor_for_Swift_Collection_SubSequence_100eabcd8);
  lVar13 = *(long *)(lVar6 + -8);
  lVar12 = lVar12 - (*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = *(long *)(lVar4 + -8);
  lVar10 = lVar12 - (*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  PVar7 = Swift::PartialRangeUpTo::typeMetadataAccessor();
  local_c0 = *(long *)(PVar7.unknown + -8);
  lVar11 = lVar10 - (*(long *)(local_c0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  if (param_5 < param_3) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10067c190);
    (*pcVar2)();
  }
  local_e8 = *(undefined8 *)(lVar5 + 8);
  bVar3 = Swift::Equatable::___infix(param_7,param_7,lVar4);
  if (bVar3) {
    local_100 = *(code **)(lVar14 + 0x10);
    local_f0 = param_7;
    local_c8 = lVar13;
    (*local_100)(lVar10,param_7,lVar4);
    local_f8 = lVar5;
    Swift::PartialRangeUpTo::init(lVar11,PVar7.unknown,lVar4,lVar5);
    puVar8 = PTR_Swift__Swift__PartialRangeUpTo<undefined>_>Swift__RangeExpression_100ead220;
    _swift_getWitnessTable
              (PTR_Swift__Swift__PartialRangeUpTo<undefined>_>Swift__RangeExpression_100ead220,
               PVar7.unknown);
    ___extension_in_Swift__Swift_Collection_subscript_getter___<A_where_A1:_Swift_RangeExpression,A_Index____A1_Bound>_A1___>_A_SubSequence
              (lVar12,lVar11,in_stack_00000018,PVar7.unknown,in_stack_00000020,puVar8);
    lVar5 = in_stack_00000020;
    _swift_getAssociatedConformanceWitness
              (in_stack_00000020,in_stack_00000018,lVar6,
               PTR___protocol_requirements_base_descriptor_for_Swift_Collection_100eac828,
               PTR___associated_conformance_descriptor_for_Swift_Collection_Swift_Collection_SubSequence__Swift_Collection_100eac7c0
              );
    local_108 = lVar5;
    FUN_1006846b4(param_3,param_5,lVar12,param_1,param_2,in_stack_00000010,lVar6);
    (**(code **)(local_c8 + 8))(lVar12,lVar6);
    (**(code **)(local_c0 + 8))(lVar11,PVar7.unknown);
    uVar1 = local_f0;
    if (param_8 < 0) {
      if (local_110 < param_5) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10067c19c);
        (*pcVar2)();
      }
      FUN_1006852c0(param_5,local_110,param_1,param_2,in_stack_00000010);
    }
    else if (param_8 != 0) {
      bVar3 = Swift::Equatable::___infix(local_f0,local_f0,lVar4,local_e8);
      if (!bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10067c198);
        (*pcVar2)();
      }
      (*local_100)(lVar10,uVar1,lVar4);
      lVar10 = local_e0;
      Swift::PartialRangeFrom::init(local_e0,lVar5,lVar4,local_f8);
      puVar8 = local_d0;
      puVar9 = PTR_Swift__Swift__PartialRangeFrom<undefined>_>Swift__RangeExpression_100ead200;
      _swift_getWitnessTable
                (PTR_Swift__Swift__PartialRangeFrom<undefined>_>Swift__RangeExpression_100ead200,
                 local_d0);
      ___extension_in_Swift__Swift_Collection_subscript_getter___<A_where_A1:_Swift_RangeExpression,A_Index____A1_Bound>_A1___>_A_SubSequence
                (lVar12,lVar10,in_stack_00000018,puVar8,in_stack_00000020,puVar9);
      FUN_1006853ec(lVar12,param_8,param_5,param_1,param_2,in_stack_00000010,lVar6,local_108);
      (**(code **)(local_d8 + 8))(lVar10,puVar8);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10067c194);
  (*pcVar2)();
}



/* Address: 0x10067c19c | FUN_10067c19c */

undefined8 FUN_10067c19c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_10068006c();
  (**(code **)(*(long *)(param_3 + -8) + 8))(param_1,param_3);
  return uVar1;
}



/* Address: 0x10067c1e4 | FUN_10067c1e4 */

void FUN_10067c1e4(void)

{
  FUN_10067c768();
  return;
}



/* Address: 0x10067c1f0 | FUN_10067c1f0 */

void FUN_10067c1f0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  Optional OVar5;
  bool bVar6;
  undefined7 extraout_var;
  code *pcVar7;
  __int64 _Var8;
  ManagedBufferPointer MVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined1 *puVar12;
  long lVar13;
  long lVar14;
  code *pcVar15;
  undefined8 *unaff_x20;
  long lVar16;
  undefined1 *puVar17;
  long lVar18;
  undefined8 auStack_170 [2];
  undefined1 auStack_160 [8];
  long local_158;
  long local_150;
  long local_148;
  undefined1 *local_140;
  code *local_138;
  long local_e0 [2];
  long local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined1 auStack_a8 [8];
  char local_a0 [16];
  long local_90;
  code *pcStack_88;
  code *local_80;
  long *plStack_78;
  
  lVar16 = *(long *)(param_2 + 0x10);
  OVar5 = Swift::Optional::typeMetadataAccessor();
  local_148 = CONCAT71(extraout_var,OVar5.value);
  local_150 = *(long *)(local_148 + -8);
  puVar17 = auStack_160 + -(*(long *)(local_150 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = *(long *)(lVar16 + -8);
  lVar18 = (long)puVar17 - (*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  pcVar7 = (code *)0x0;
  _swift_getAssociatedTypeWitness
            (0,param_4,param_3,
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_type_descriptor_for_Swift_Sequence_Iterator_100eabd18);
  local_158 = *(long *)(pcVar7 + -8);
  lVar14 = lVar18 - (*(long *)(local_158 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_d0 = lVar16;
  uStack_c8 = param_3;
  local_c0 = param_4;
  Swift::Sequence::_withContiguousStorageIfAvailable();
  if (local_a0[0] == '\x01') {
    _Var8 = Swift::Sequence::get_underestimatedCount();
    FUN_1006035b0(local_e0,FUN_1006035a4,0,*unaff_x20,&DAT_100ef5140,lVar16,
                  PTR___type_metadata_for_Swift_Never_100eadc38,
                  PTR___type_metadata_for_Swift_Int_100eac6f8,
                  PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
    lVar1 = local_e0[0] + _Var8;
    if (SCARRY8(local_e0[0],_Var8)) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10067c75c);
      (*pcVar7)();
    }
    MVar9 = Swift::ManagedBufferPointer::typeMetadataAccessor();
    bVar6 = Swift::ManagedBufferPointer::isUniqueReference(MVar9);
    FUN_1006035b0(local_e0,FUN_100003284,0,*unaff_x20,&DAT_100ef5140,lVar16,
                  PTR___type_metadata_for_Swift_Never_100eadc38,
                  PTR___type_metadata_for_Swift_Int_100eac6f8,
                  PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
    if ((local_e0[0] < lVar1) || (!bVar6)) {
      uVar10 = 0;
      FUN_1006844f0(0,lVar16);
      FUN_100684260(bVar6,lVar1,0,uVar10);
    }
    uVar10 = *unaff_x20;
    plStack_78 = local_e0;
    local_80 = FUN_1006801d4;
    puVar11 = &DAT_100fda040;
    local_d0 = lVar16;
    uStack_c8 = param_3;
    local_c0 = param_4;
    local_90 = lVar16;
    pcStack_88 = pcVar7;
    FUN_1000f7830(&DAT_100fda040,0x100c6d628);
    *(undefined1 **)(lVar14 + -0x10) = auStack_a8;
    FUN_1006034cc(lVar14,FUN_100680c48,local_a0,uVar10,&DAT_100ef5140,lVar16,puVar11,pcVar7,
                  PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    _swift_getAssociatedConformanceWitness
              (param_4,param_3,pcVar7,
               PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
               PTR___associated_conformance_descriptor_for_Swift_Sequence_Swift_Sequence_Iterator__Swift_IteratorProtocol_100eac2d8
              );
    Swift::IteratorProtocol::_next();
    pcVar15 = *(code **)(lVar13 + 0x30);
    puVar12 = puVar17;
    (*pcVar15)(puVar17,1,lVar16);
    puVar2 = PTR___type_metadata_for_Swift_Int_100eac6f8;
    if ((int)puVar12 != 1) {
      local_138 = *(code **)(lVar13 + 0x20);
      local_140 = puVar17;
      do {
        puVar4 = PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40;
        puVar3 = PTR___type_metadata_for_Swift_Never_100eadc38;
        (*local_138)(lVar18,puVar17,lVar16);
        FUN_1006035b0(local_e0,FUN_1006035a4,0,uVar10,&DAT_100ef5140,lVar16,puVar3,puVar2,puVar4);
        lVar1 = local_e0[0] + 1;
        if (SCARRY8(local_e0[0],1)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10067c758);
          (*pcVar7)();
        }
        bVar6 = Swift::ManagedBufferPointer::isUniqueReference(MVar9);
        FUN_1006035b0(local_e0,FUN_100003284,0,*unaff_x20,&DAT_100ef5140,lVar16,puVar3,puVar2,puVar4
                     );
        if ((local_e0[0] < lVar1) || (!bVar6)) {
          uVar10 = 0;
          FUN_1006844f0(0,lVar16);
          FUN_100684260(bVar6,lVar1,0,uVar10);
        }
        uVar10 = *unaff_x20;
        pcStack_88 = FUN_1006801f0;
        local_80 = (code *)local_e0;
        local_d0 = lVar16;
        uStack_c8 = param_3;
        local_c0 = param_4;
        local_90 = lVar16;
        *(undefined1 **)(lVar14 + -0x10) = auStack_a8;
        FUN_1006034cc(FUN_100680c84,local_a0,uVar10,&DAT_100ef5140,lVar16,puVar11,
                      PTR___type_metadata_for____100eae0c8 + 8,
                      PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
        (**(code **)(lVar13 + 8))(lVar18,lVar16);
        puVar17 = local_140;
        Swift::IteratorProtocol::_next();
        puVar12 = puVar17;
        (*pcVar15)(puVar17,1,lVar16);
      } while ((int)puVar12 != 1);
    }
    (**(code **)(local_150 + 8))(puVar17,local_148);
    (**(code **)(local_158 + 8))(lVar14,pcVar7);
  }
  return;
}



/* Address: 0x10067c75c | FUN_10067c75c */

void FUN_10067c75c(void)

{
  FUN_10067c768();
  return;
}



/* Address: 0x10067c768 | FUN_10067c768 */

undefined8
FUN_10067c768(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,code *param_5)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  (*param_5)();
  (**(code **)(*(long *)(param_3 + -8) + 8))(param_1,param_3);
  return uVar1;
}


