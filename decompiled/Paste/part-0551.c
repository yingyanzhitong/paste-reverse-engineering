/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100634b1c | FUN_100634b1c */

void FUN_100634b1c(uint *param_1,uint *param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *unaff_x20;
  
  uVar1 = 0x100000000000000;
  if (*(char *)((long)param_1 + 7) == '\0') {
    uVar1 = 0;
  }
  uVar2 = 0x100000000000000;
  if (*(char *)((long)param_2 + 7) == '\0') {
    uVar2 = 0;
  }
  FUN_100632dac(uVar1 | (ulong)*(byte *)((long)param_1 + 6) << 0x30 |
                (ulong)(ushort)param_1[1] << 0x20 | (ulong)*param_1,
                uVar2 | (ulong)*(byte *)((long)param_2 + 6) << 0x30 |
                (ulong)(ushort)param_2[1] << 0x20 | (ulong)*param_2,*unaff_x20,param_4,param_5,
                *(undefined8 *)(param_3 + 0x10));
  return;
}



/* Address: 0x100634b78 | FUN_100634b78 */

undefined1 * FUN_100634b78(ulong param_1,long param_2)

{
  int iVar1;
  code *pcVar2;
  Optional OVar3;
  undefined7 extraout_var;
  undefined1 *puVar5;
  int iVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar4;
  
  OVar3 = Swift::Optional::typeMetadataAccessor();
  lVar4 = CONCAT71(extraout_var,OVar3.value);
  lVar8 = *(long *)(lVar4 + -8);
  puVar7 = &stack0xffffffffffffffc0 + -(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100634c54);
    (*pcVar2)();
  }
  if (param_1 >> 0x20 == 0) {
    iVar6 = (int)LZCOUNT((int)param_1 + -1);
    iVar1 = 0;
    if (iVar6 != 0) {
      iVar1 = 1 << (ulong)(-iVar6 & 0x1f);
    }
    iVar6 = 1;
    if (param_1 != 0) {
      iVar6 = iVar1;
    }
    (**(code **)(*(long *)(param_2 + -8) + 0x38))(puVar7,1,1,param_2);
    puVar5 = puVar7;
    FUN_10063701c(puVar7,iVar6,lVar4);
    (**(code **)(lVar8 + 8))(puVar7,lVar4);
    return puVar5;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100634c58);
  (*pcVar2)();
}



/* Address: 0x100634c58 | FUN_100634c58 */

void FUN_100634c58(undefined8 param_1)

{
  FUN_100634b78(0x10,param_1);
  return;
}



/* Address: 0x100634c7c | FUN_100634c7c */

void FUN_100634c7c(undefined8 param_1,long param_2)

{
  code *pcVar1;
  Optional OVar2;
  undefined7 extraout_var;
  ContiguousArray CVar3;
  __int64 _Var4;
  long *unaff_x20;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  
  lVar6 = *(long *)(param_2 + 0x10);
  OVar2 = Swift::Optional::typeMetadataAccessor();
  lVar7 = *(long *)(CONCAT71(extraout_var,OVar2.value) + -8);
  puVar5 = &stack0xffffffffffffffa0 + -(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar8 = unaff_x20[2];
  lVar9 = *(long *)(lVar6 + -8);
  (**(code **)(lVar9 + 0x10))(puVar5,param_1,lVar6);
  (**(code **)(lVar9 + 0x38))(puVar5,0,1,lVar6);
  CVar3 = Swift::ContiguousArray::typeMetadataAccessor();
  Swift::ContiguousArray::_makeMutableAndUnique(CVar3);
  if ((long)uVar8 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100634da8);
    (*pcVar1)();
  }
  if (uVar8 < *(ulong *)(*unaff_x20 + 0x10)) {
    (**(code **)(lVar7 + 0x28))
              (*unaff_x20 +
               ((ulong)*(byte *)(lVar7 + 0x50) + 0x20 &
               ((ulong)*(byte *)(lVar7 + 0x50) ^ 0xffffffffffffffff)) +
               *(long *)(lVar7 + 0x48) * uVar8,puVar5,CONCAT71(extraout_var,OVar2.value));
    lVar6 = unaff_x20[2];
    _Var4 = Swift::ContiguousArray::get_count((undefined *)*unaff_x20);
    uVar8 = _Var4 - 1U & lVar6 + 1U;
    unaff_x20[2] = uVar8;
    if (unaff_x20[1] == uVar8) {
      FUN_100634dac(param_2);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100634dac);
  (*pcVar1)();
}



/* Address: 0x100634dac | FUN_100634dac */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100634e58 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100634dac(long param_1)

{
  ContiguousArray CVar1;
  undefined8 uVar2;
  code *pcVar3;
  Optional OVar4;
  Repeated RVar6;
  __int64 _Var7;
  ContiguousArray CVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  ArraySlice AVar12;
  long lVar13;
  undefined8 *unaff_x20;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined *local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  long local_98;
  undefined1 auStack_90 [32];
  undefined8 local_70;
  ContiguousArray local_68;
  long lVar5;
  
  local_98 = *(long *)(param_1 + 0x10);
  OVar4 = Swift::Optional::typeMetadataAccessor();
  lVar5 = CONCAT71((int7)((ulong)param_1 >> 8),OVar4.value);
  lVar14 = *(long *)(lVar5 + -8);
  lVar16 = (long)&local_d0 - (*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  RVar6 = Swift::Repeated::typeMetadataAccessor();
  lVar13 = *(long *)(*(long *)(RVar6.unknown + -8) + 0x40);
  CVar1.unknown = (undefined *)*unaff_x20;
  uVar2 = unaff_x20[1];
  local_a0 = unaff_x20[2];
  _Var7 = Swift::ContiguousArray::get_count(CVar1);
  lVar15 = _Var7 * 2;
  Swift::Array<undefined>::_allocateUninitialized(0,lVar5);
  local_68.unknown = (undefined *)Swift::ContiguousArray::_init(_Var7,lVar5);
  if (0 < lVar15) {
    CVar8 = Swift::ContiguousArray::typeMetadataAccessor();
    local_c8 = lVar15;
    local_b8 = lVar16 - (lVar13 + 0xfU & 0xfffffffffffffff0);
    local_a8 = RVar6.unknown;
    Swift::ContiguousArray::reserveCapacity(lVar15,CVar8);
    puVar9 = &DAT_100fd7bd0;
    local_70 = uVar2;
    FUN_1000f7830(&DAT_100fd7bd0,&DAT_100c69798);
    puVar10 = PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__MutableCollection_100ead128;
    local_c0 = lVar14;
    _swift_getWitnessTable
              (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__MutableCollection_100ead128,
               CVar8.unknown);
    puVar11 = &DAT_100fd7bd8;
    local_d0 = puVar10;
    local_b0 = CVar1.unknown;
    FUN_100134584(&DAT_100fd7bd8,&DAT_100fd7bd0,&DAT_100c69798,
                  PTR_Swift__Swift__PartialRangeFrom<undefined>_>Swift__RangeExpression_100ead200);
    ___extension_in_Swift__Swift_MutableCollection_subscript_getter___<A_where_A1:_Swift_RangeExpression,A_Index____A1_Bound>_A1___>_A_SubSequence
              (auStack_90,&local_70,CVar8.unknown,puVar9,puVar10,puVar11);
    AVar12 = Swift::ArraySlice::typeMetadataAccessor();
    puVar10 = PTR_Swift__Swift__ArraySlice<undefined>_>Swift__Sequence_100eacc60;
    _swift_getWitnessTable
              (PTR_Swift__Swift__ArraySlice<undefined>_>Swift__Sequence_100eacc60,AVar12.unknown);
    Swift::ContiguousArray::_append(auStack_90,CVar8.unknown,AVar12.unknown,puVar10);
    local_70 = local_a0;
    puVar9 = &DAT_100fd7be0;
    FUN_1000f7830(&DAT_100fd7be0,&DAT_100c697a0);
    lVar13 = local_98;
    puVar11 = &DAT_100fd7be8;
    FUN_100134584(&DAT_100fd7be8,&DAT_100fd7be0,&DAT_100c697a0,
                  PTR_Swift__Swift__PartialRangeUpTo<undefined>_>Swift__RangeExpression_100ead220);
    ___extension_in_Swift__Swift_MutableCollection_subscript_getter___<A_where_A1:_Swift_RangeExpression,A_Index____A1_Bound>_A1___>_A_SubSequence
              (auStack_90,&local_70,CVar8.unknown,puVar9,local_d0,puVar11);
    Swift::ContiguousArray::_append(auStack_90,CVar8.unknown,AVar12.unknown,puVar10);
    _Var7 = Swift::ContiguousArray::get_count(local_68);
    lVar14 = local_c8 - _Var7;
    (**(code **)(*(long *)(lVar13 + -8) + 0x38))(lVar16,1,1,lVar13);
    lVar13 = local_b8;
    Swift::_repeatElement(local_b8,_Var7,lVar14,lVar5);
    (**(code **)(local_c0 + 8))(lVar16,lVar5);
    puVar9 = local_a8;
    puVar11 = PTR_Swift__Swift__Repeated<undefined>_>Swift__Sequence_100eadff0;
    _swift_getWitnessTable
              (PTR_Swift__Swift__Repeated<undefined>_>Swift__Sequence_100eadff0,local_a8);
    Swift::ContiguousArray::_append(lVar13,CVar8.unknown,puVar9,puVar11);
    _swift_release(local_b0);
    unaff_x20[1] = 0;
    unaff_x20[2] = _Var7;
    *unaff_x20 = local_68.unknown;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100635098);
  (*pcVar3)();
}



/* Address: 0x100635098 | FUN_100635098 */

void FUN_100635098(undefined8 param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  Optional OVar3;
  undefined7 extraout_var;
  __int64 _Var4;
  ContiguousArray CVar5;
  ulong uVar6;
  long *unaff_x20;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_70 [8];
  ulong local_68;
  
  lVar8 = *(long *)(param_2 + 0x10);
  OVar3 = Swift::Optional::typeMetadataAccessor();
  lVar10 = *(long *)(CONCAT71(extraout_var,OVar3.value) + -8);
  puVar7 = auStack_70 + -(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = unaff_x20[1];
  local_68 = unaff_x20[2];
  _Var4 = Swift::ContiguousArray::get_count((undefined *)*unaff_x20);
  lVar9 = *(long *)(lVar8 + -8);
  (**(code **)(lVar9 + 0x10))(puVar7,param_1,lVar8);
  (**(code **)(lVar9 + 0x38))(puVar7,0,1,lVar8);
  CVar5 = Swift::ContiguousArray::typeMetadataAccessor();
  Swift::ContiguousArray::_makeMutableAndUnique(CVar5);
  uVar6 = _Var4 - 1U & lVar1 - 1U;
  if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1006351e0);
    (*pcVar2)();
  }
  if (uVar6 < *(ulong *)(*unaff_x20 + 0x10)) {
    (**(code **)(lVar10 + 0x28))
              (*unaff_x20 +
               ((ulong)*(byte *)(lVar10 + 0x50) + 0x20 &
               ((ulong)*(byte *)(lVar10 + 0x50) ^ 0xffffffffffffffff)) +
               *(long *)(lVar10 + 0x48) * uVar6,puVar7,CONCAT71(extraout_var,OVar3.value));
    lVar1 = unaff_x20[1];
    _Var4 = Swift::ContiguousArray::get_count((undefined *)*unaff_x20);
    uVar6 = _Var4 - 1U & lVar1 - 1U;
    unaff_x20[1] = uVar6;
    if (uVar6 == local_68) {
      FUN_100634dac(param_2);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1006351e4);
  (*pcVar2)();
}



/* Address: 0x1006351e4 | FUN_1006351e4 */

void FUN_1006351e4(ContiguousArray param_1)

{
  Swift::Optional::typeMetadataAccessor();
  Swift::ContiguousArray::get_count(param_1);
  return;
}



/* Address: 0x100635214 | FUN_100635214 */

undefined1 FUN_100635214(ContiguousArray param_1,ulong param_2,ulong param_3,long param_4)

{
  Optional OVar1;
  undefined7 extraout_var;
  undefined1 *puVar2;
  __int64 _Var3;
  undefined1 *puVar4;
  long lVar5;
  
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lVar5 = *(long *)(CONCAT71(extraout_var,OVar1.value) + -8);
  puVar4 = &stack0xffffffffffffffb0 + -(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  while( true ) {
    if (param_2 == param_3) {
      return 1;
    }
    Swift::ContiguousArray::get_subscript(param_2,param_1);
    puVar2 = puVar4;
    (**(code **)(*(long *)(param_4 + -8) + 0x30))(puVar4,1,param_4);
    (**(code **)(lVar5 + 8))(puVar4,CONCAT71(extraout_var,OVar1.value));
    if ((int)puVar2 == 1) break;
    _Var3 = Swift::ContiguousArray::get_count(param_1);
    param_2 = _Var3 - 1U & param_2 + 1;
  }
  return 0;
}



/* Address: 0x100635304 | FUN_100635304 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100635398 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100635304(__int64 param_1,long param_2)

{
  Range<__int64> RVar1;
  code *pcVar2;
  Optional OVar3;
  Repeated RVar5;
  ContiguousArray CVar6;
  undefined *puVar7;
  undefined *puVar8;
  ArraySlice AVar9;
  undefined *puVar10;
  __int64 _Var11;
  ContiguousArray CVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 *unaff_x20;
  long lVar15;
  long lVar16;
  undefined1 *puVar17;
  undefined1 auStack_c0 [8];
  undefined *local_b8;
  long local_b0;
  undefined *local_a8;
  long local_a0;
  long local_98;
  undefined *local_90;
  undefined *puStack_88;
  undefined8 local_80;
  long lStack_78;
  undefined *local_70;
  ContiguousArray local_68;
  long lVar4;
  
  lVar15 = *(long *)(param_2 + 0x10);
  OVar3 = Swift::Optional::typeMetadataAccessor();
  lVar4 = CONCAT71((int7)((ulong)param_1 >> 8),OVar3.value);
  lVar16 = *(long *)(lVar4 + -8);
  puVar17 = auStack_c0 + -(*(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0);
  RVar5 = Swift::Repeated::typeMetadataAccessor();
  lVar14 = *(long *)(*(long *)(RVar5.unknown + -8) + 0x40);
  Swift::Array<undefined>::_allocateUninitialized(0,lVar4);
  local_68.unknown = (undefined *)Swift::ContiguousArray::_init(RVar5.unknown,lVar4);
  if (0 < param_1) {
    local_a0 = lVar15;
    local_98 = (long)puVar17 - (lVar14 + 0xfU & 0xfffffffffffffff0);
    CVar6 = Swift::ContiguousArray::typeMetadataAccessor();
    Swift::ContiguousArray::reserveCapacity(param_1,CVar6);
    RVar1.unknown = (undefined *)unaff_x20[1];
    CVar12.unknown = (undefined *)unaff_x20[2];
    if ((long)CVar12.unknown < (long)RVar1.unknown) {
      puVar10 = &DAT_100fd7bd0;
      local_a8 = RVar5.unknown;
      local_70 = RVar1.unknown;
      FUN_1000f7830(&DAT_100fd7bd0,&DAT_100c69798);
      puVar7 = PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__MutableCollection_100ead128;
      local_b0 = lVar16;
      _swift_getWitnessTable
                (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__MutableCollection_100ead128,
                 CVar6.unknown);
      puVar8 = &DAT_100fd7bd8;
      local_b8 = puVar7;
      FUN_100134584(&DAT_100fd7bd8,&DAT_100fd7bd0,&DAT_100c69798,
                    PTR_Swift__Swift__PartialRangeFrom<undefined>_>Swift__RangeExpression_100ead200)
      ;
      ___extension_in_Swift__Swift_MutableCollection_subscript_getter___<A_where_A1:_Swift_RangeExpression,A_Index____A1_Bound>_A1___>_A_SubSequence
                (&local_90,&local_70,CVar6.unknown,puVar10,puVar7,puVar8);
      AVar9 = Swift::ArraySlice::typeMetadataAccessor();
      puVar10 = PTR_Swift__Swift__ArraySlice<undefined>_>Swift__Sequence_100eacc60;
      _swift_getWitnessTable
                (PTR_Swift__Swift__ArraySlice<undefined>_>Swift__Sequence_100eacc60,AVar9.unknown);
      Swift::ContiguousArray::_append(&local_90,CVar6.unknown,AVar9.unknown,puVar10);
      puVar8 = &DAT_100fd7be0;
      local_70 = CVar12.unknown;
      FUN_1000f7830(&DAT_100fd7be0,&DAT_100c697a0);
      puVar7 = &DAT_100fd7be8;
      FUN_100134584(&DAT_100fd7be8,&DAT_100fd7be0,&DAT_100c697a0,
                    PTR_Swift__Swift__PartialRangeUpTo<undefined>_>Swift__RangeExpression_100ead220)
      ;
      ___extension_in_Swift__Swift_MutableCollection_subscript_getter___<A_where_A1:_Swift_RangeExpression,A_Index____A1_Bound>_A1___>_A_SubSequence
                (&local_90,&local_70,CVar6.unknown,puVar8,local_b8,puVar7);
      RVar5.unknown = local_a8;
      lVar16 = local_b0;
    }
    else {
      uVar13 = *unaff_x20;
      lVar14 = lVar4;
      local_90 = (undefined *)Swift::ContiguousArray::get_subscript(RVar1,CVar12);
      puStack_88 = CVar12.unknown;
      local_80 = uVar13;
      lStack_78 = lVar14;
      AVar9 = Swift::ArraySlice::typeMetadataAccessor();
      puVar10 = PTR_Swift__Swift__ArraySlice<undefined>_>Swift__Sequence_100eacc60;
      _swift_getWitnessTable
                (PTR_Swift__Swift__ArraySlice<undefined>_>Swift__Sequence_100eacc60,AVar9.unknown);
    }
    Swift::ContiguousArray::_append(&local_90,CVar6.unknown,AVar9.unknown,puVar10);
    _Var11 = Swift::ContiguousArray::get_count(local_68);
    (**(code **)(*(long *)(local_a0 + -8) + 0x38))(puVar17,1,1);
    lVar14 = local_98;
    Swift::_repeatElement(local_98,_Var11,param_1 - _Var11,lVar4);
    (**(code **)(lVar16 + 8))(puVar17,lVar4);
    puVar10 = PTR_Swift__Swift__Repeated<undefined>_>Swift__Sequence_100eadff0;
    _swift_getWitnessTable
              (PTR_Swift__Swift__Repeated<undefined>_>Swift__Sequence_100eadff0,RVar5.unknown);
    Swift::ContiguousArray::_append(lVar14,CVar6.unknown,RVar5.unknown,puVar10);
    CVar12.unknown = local_68.unknown;
    unaff_x20[1] = 0;
    unaff_x20[2] = _Var11;
    _swift_release(*unaff_x20);
    *unaff_x20 = CVar12.unknown;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100635614);
  (*pcVar2)();
}



/* Address: 0x100635614 | FUN_100635614 */

void FUN_100635614(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  FUN_100632d28(param_3,param_4,param_5,param_6);
  FUN_1006329fc();
  FUN_100632ab0(param_1);
  return;
}



/* Address: 0x10063568c | FUN_10063568c */

void FUN_10063568c(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_1006372a4();
                    /* WARNING: Could not recover jumptable at 0x0001006356c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 8))(param_1);
  return;
}



/* Address: 0x1006356c8 | FUN_1006356c8 */

undefined1  [16] FUN_1006356c8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  long lVar4;
  undefined8 *unaff_x20;
  long lVar5;
  void *pvVar6;
  undefined1 auVar7 [16];
  
  puVar1 = PTR__swift_coroFrameAlloc_100eae1a0;
  puVar2 = (undefined8 *)&DAT_00000038;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    puVar2 = _malloc(0x38);
  }
  else {
    _swift_coroFrameAlloc(0x38,0xc271);
  }
  *param_1 = puVar2;
  puVar2[1] = param_3;
  puVar2[2] = unaff_x20;
  *puVar2 = param_2;
  lVar5 = *(long *)(param_3 + 0x10);
  puVar2[3] = lVar5;
  lVar4 = *(long *)(lVar5 + -8);
  puVar2[4] = lVar4;
  pvVar6 = *(void **)(lVar4 + 0x40);
  if (puVar1 == (undefined *)0x0) {
    pvVar3 = _malloc((size_t)pvVar6);
    puVar2[5] = pvVar3;
    pvVar6 = _malloc((size_t)pvVar6);
  }
  else {
    pvVar3 = pvVar6;
    _swift_coroFrameAlloc(pvVar6,0xc271);
    puVar2[5] = pvVar3;
    _swift_coroFrameAlloc(pvVar6,0xc271);
  }
  puVar2[6] = pvVar6;
  FUN_100635614(pvVar6,param_2,*unaff_x20,unaff_x20[1],unaff_x20[2],lVar5);
  auVar7._8_8_ = pvVar6;
  auVar7._0_8_ = FUN_1006357a0;
  return auVar7;
}



/* Address: 0x1006357a0 | FUN_1006357a0 */

void FUN_1006357a0(undefined8 *param_1,ulong param_2)

{
  void *pvVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  void *pvVar4;
  long lVar5;
  code *pcVar6;
  undefined8 uVar7;
  
  param_1 = (undefined8 *)*param_1;
  pvVar1 = (void *)param_1[5];
  pvVar4 = (void *)param_1[6];
  uVar2 = param_1[3];
  lVar5 = param_1[4];
  uVar3 = param_1[1];
  uVar7 = *param_1;
  if ((param_2 & 1) == 0) {
    FUN_1006372a4(pvVar4,uVar7,uVar3);
    pcVar6 = *(code **)(lVar5 + 8);
  }
  else {
    (**(code **)(lVar5 + 0x10))(pvVar1,pvVar4,uVar2);
    FUN_1006372a4(pvVar1,uVar7,uVar3);
    pcVar6 = *(code **)(lVar5 + 8);
    (*pcVar6)(pvVar1,uVar2);
  }
  (*pcVar6)(pvVar4,uVar2);
  _free(pvVar4);
  _free(pvVar1);
  _free(param_1);
  return;
}



/* Address: 0x100635854 | FUN_100635854 */

void FUN_100635854(ulong param_1,long param_2)

{
  Optional OVar1;
  undefined7 extraout_var;
  ContiguousArray CVar2;
  long lVar3;
  long lVar4;
  undefined8 *unaff_x20;
  
  lVar4 = *(long *)(param_2 + 0x10);
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lVar3 = *(long *)(*(long *)(CONCAT71(extraout_var,OVar1.value) + -8) + 0x40);
  if ((param_1 & 1) == 0) {
    CVar2 = Swift::ContiguousArray::typeMetadataAccessor();
    Swift::ContiguousArray::removeAll(false,CVar2);
    (**(code **)(*(long *)(lVar4 + -8) + 0x38))
              (&stack0xffffffffffffffc0 + -(lVar3 + 0xfU & 0xfffffffffffffff0),1,1,lVar4);
    Swift::ContiguousArray::append
              (&stack0xffffffffffffffc0 + -(lVar3 + 0xfU & 0xfffffffffffffff0),CVar2.unknown);
  }
  else {
    FUN_10063258c(*unaff_x20,unaff_x20[1],unaff_x20[2],lVar4);
    FUN_10063591c();
  }
  unaff_x20[1] = 0;
  unaff_x20[2] = 0;
  return;
}



/* Address: 0x10063591c | FUN_10063591c */

void FUN_10063591c(long param_1,long param_2)

{
  Optional OVar1;
  undefined7 extraout_var;
  long lVar2;
  ContiguousArray CVar3;
  __int64 _Var4;
  long lVar5;
  long *unaff_x20;
  long lVar6;
  ulong uVar7;
  long lVar8;
  code *pcVar9;
  
  lVar6 = *(long *)(param_2 + 0x10);
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lVar8 = *(long *)(CONCAT71(extraout_var,OVar1.value) + -8);
  lVar5 = *(long *)(lVar8 + 0x40);
  lVar2 = *unaff_x20;
  uVar7 = unaff_x20[1];
  FUN_10063258c(lVar2,uVar7,unaff_x20[2],lVar6);
  if (lVar2 < param_1) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x100635a4c);
    (*pcVar9)();
  }
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x100635a50);
    (*pcVar9)();
  }
  if (param_1 != 0) {
    pcVar9 = *(code **)(*(long *)(lVar6 + -8) + 0x38);
    do {
      (*pcVar9)(&stack0xffffffffffffffa0 + -(lVar5 + 0xfU & 0xfffffffffffffff0),1,1,lVar6);
      CVar3 = Swift::ContiguousArray::typeMetadataAccessor();
      Swift::ContiguousArray::_makeMutableAndUnique(CVar3);
      if ((long)uVar7 < 0) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x100635a44);
        (*pcVar9)();
      }
      if (*(ulong *)(*unaff_x20 + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x100635a48);
        (*pcVar9)();
      }
      (**(code **)(lVar8 + 0x28))
                (*unaff_x20 +
                 ((ulong)*(byte *)(lVar8 + 0x50) + 0x20 &
                 ((ulong)*(byte *)(lVar8 + 0x50) ^ 0xffffffffffffffff)) +
                 *(long *)(lVar8 + 0x48) * uVar7,
                 &stack0xffffffffffffffa0 + -(lVar5 + 0xfU & 0xfffffffffffffff0),
                 CONCAT71(extraout_var,OVar1.value));
      _Var4 = Swift::ContiguousArray::get_count((undefined *)*unaff_x20);
      uVar7 = _Var4 + 0x7fffffffffffffffU & uVar7 + 1;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  unaff_x20[1] = uVar7;
  return;
}



/* Address: 0x100635a50 | FUN_100635a50 */

void FUN_100635a50(undefined8 param_1,ulong param_2,code *param_3,undefined8 param_4,long param_5)

{
  code *pcVar1;
  Optional OVar2;
  undefined7 extraout_var;
  ContiguousArray CVar3;
  long lVar4;
  ulong uVar5;
  long *unaff_x20;
  long lVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_5 + 0x10);
  OVar2 = Swift::Optional::typeMetadataAccessor();
  CVar3 = Swift::ContiguousArray::typeMetadataAccessor();
  Swift::ContiguousArray::_makeMutableAndUnique(CVar3);
  if (*(ulong *)(*unaff_x20 + 0x10) <= (param_2 & 0xffffffff)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100635b1c);
    (*pcVar1)();
  }
  lVar4 = *(long *)(CONCAT71(extraout_var,OVar2.value) + -8);
  uVar5 = (ulong)*(byte *)(lVar4 + 0x50);
  lVar6 = *unaff_x20 + (uVar5 + 0x20 & (uVar5 ^ 0xffffffffffffffff)) +
          *(long *)(lVar4 + 0x48) * (param_2 & 0xffffffff);
  lVar4 = lVar6;
  (**(code **)(*(long *)(lVar7 + -8) + 0x30))(lVar6,1,lVar7);
  if ((int)lVar4 != 1) {
    (*param_3)(param_1,lVar6);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100635b20);
  (*pcVar1)();
}



/* Address: 0x100635b20 | FUN_100635b20 */

void FUN_100635b20(undefined8 param_1,long param_2)

{
  long lVar1;
  long *unaff_x20;
  long lVar2;
  
  lVar1 = *unaff_x20;
  lVar2 = *(long *)(param_2 + 0x10);
  FUN_10063258c(lVar1,unaff_x20[1],unaff_x20[2],lVar2);
  if (lVar1 >= 1) {
    FUN_100635b90(param_1,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x000100635b8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(param_1,lVar1 < 1,1,lVar2);
  return;
}



/* Address: 0x100635b90 | FUN_100635b90 */

void FUN_100635b90(undefined8 param_1,long param_2)

{
  code *pcVar1;
  Optional OVar2;
  undefined7 extraout_var;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  
  lVar5 = *(long *)(param_2 + 0x10);
  OVar2 = Swift::Optional::typeMetadataAccessor();
  puVar6 = &stack0xffffffffffffffc0 +
           -(*(long *)(*(long *)(CONCAT71(extraout_var,OVar2.value) + -8) + 0x40) + 0xfU &
            0xfffffffffffffff0);
  FUN_100635ed8(puVar6,*unaff_x20,unaff_x20[1],unaff_x20[2],lVar5);
  lVar7 = *(long *)(lVar5 + -8);
  puVar3 = puVar6;
  (**(code **)(lVar7 + 0x30))(puVar6,1,lVar5);
  if ((int)puVar3 != 1) {
    (**(code **)(lVar7 + 0x20))(param_1,puVar6,lVar5);
    uVar4 = 0;
    FUN_100637324(0,lVar5);
    FUN_10063591c(1,uVar4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100635c50);
  (*pcVar1)();
}



/* Address: 0x100635c50 | FUN_100635c50 */

void FUN_100635c50(undefined8 param_1,long param_2)

{
  long lVar1;
  long *unaff_x20;
  long lVar2;
  
  lVar1 = *unaff_x20;
  lVar2 = *(long *)(param_2 + 0x10);
  FUN_10063258c(lVar1,unaff_x20[1],unaff_x20[2],lVar2);
  if (lVar1 >= 1) {
    FUN_100635cc0(param_1,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x000100635cbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(param_1,lVar1 < 1,1,lVar2);
  return;
}



/* Address: 0x100635cc0 | FUN_100635cc0 */

void FUN_100635cc0(undefined8 param_1,long param_2)

{
  code *pcVar1;
  Optional OVar2;
  undefined7 extraout_var;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined1 auStack_60 [8];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  lVar6 = *(long *)(param_2 + 0x10);
  OVar2 = Swift::Optional::typeMetadataAccessor();
  puVar7 = auStack_60 +
           -(*(long *)(*(long *)(CONCAT71(extraout_var,OVar2.value) + -8) + 0x40) + 0xfU &
            0xfffffffffffffff0);
  local_58 = *unaff_x20;
  uStack_48 = unaff_x20[2];
  local_50 = unaff_x20[1];
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c69a48,param_2);
  (extension_Swift)::Swift::BidirectionalCollection::_get_last();
  lVar5 = *(long *)(lVar6 + -8);
  puVar3 = puVar7;
  (**(code **)(lVar5 + 0x30))(puVar7,1,lVar6);
  if ((int)puVar3 != 1) {
    (**(code **)(lVar5 + 0x20))(param_1,puVar7,lVar6);
    uVar4 = 0;
    FUN_100637324(0,lVar6);
    FUN_100635db0(1,uVar4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100635db0);
  (*pcVar1)();
}



/* Address: 0x100635db0 | FUN_100635db0 */

void FUN_100635db0(long param_1,long param_2)

{
  code *pcVar1;
  Optional OVar2;
  undefined7 extraout_var;
  long lVar3;
  __int64 _Var4;
  ContiguousArray CVar5;
  long lVar6;
  long *unaff_x20;
  long lVar7;
  ulong uVar8;
  long lVar9;
  
  lVar7 = *(long *)(param_2 + 0x10);
  OVar2 = Swift::Optional::typeMetadataAccessor();
  lVar9 = *(long *)(CONCAT71(extraout_var,OVar2.value) + -8);
  lVar6 = *(long *)(lVar9 + 0x40);
  lVar3 = *unaff_x20;
  uVar8 = unaff_x20[2];
  FUN_10063258c(lVar3,unaff_x20[1],uVar8,lVar7);
  if (lVar3 < param_1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100635ed4);
    (*pcVar1)();
  }
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100635ed8);
    (*pcVar1)();
  }
  while( true ) {
    if (param_1 == 0) {
      unaff_x20[2] = uVar8;
      return;
    }
    _Var4 = Swift::ContiguousArray::get_count((undefined *)*unaff_x20);
    (**(code **)(*(long *)(lVar7 + -8) + 0x38))
              (&stack0xffffffffffffffb0 + -(lVar6 + 0xfU & 0xfffffffffffffff0),1,1,lVar7);
    CVar5 = Swift::ContiguousArray::typeMetadataAccessor();
    Swift::ContiguousArray::_makeMutableAndUnique(CVar5);
    uVar8 = _Var4 - 1U & uVar8 - 1;
    if ((long)uVar8 < 0) break;
    if (*(ulong *)(*unaff_x20 + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100635ed0);
      (*pcVar1)();
    }
    (**(code **)(lVar9 + 0x28))
              (*unaff_x20 +
               ((ulong)*(byte *)(lVar9 + 0x50) + 0x20 &
               ((ulong)*(byte *)(lVar9 + 0x50) ^ 0xffffffffffffffff)) +
               *(long *)(lVar9 + 0x48) * uVar8,
               &stack0xffffffffffffffb0 + -(lVar6 + 0xfU & 0xfffffffffffffff0),
               CONCAT71(extraout_var,OVar2.value));
    param_1 = param_1 + -1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100635ecc);
  (*pcVar1)();
}



/* Address: 0x100635ed8 | FUN_100635ed8 */

void FUN_100635ed8(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  if (param_3 != param_4) {
    FUN_100632d28();
    FUN_100632ab0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x000100635f40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_5 + -8) + 0x38))(param_1,param_3 == param_4,1,param_5);
  return;
}



/* Address: 0x100635f44 | FUN_100635f44 */

void FUN_100635f44(ulong param_1,ulong param_2,long param_3)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 uVar4;
  ContiguousArray CVar5;
  TargetProtocolConformanceDescriptor *pTVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  __int64 *unaff_x20;
  long lVar9;
  ContiguousArray CVar10;
  __int64 _Var11;
  __int64 _Var12;
  tuple2_conflict3 tVar13;
  undefined1 auStack_b0 [8];
  __int64 *local_a8;
  undefined1 *local_a0;
  long local_98;
  long local_90;
  undefined4 local_70;
  undefined4 local_6c;
  ulong local_68;
  
  lVar9 = *(long *)(param_3 + 0x10);
  local_98 = *(long *)(lVar9 + -8);
  local_a0 = auStack_b0 + -(*(long *)(local_98 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar4 = 0;
  local_90 = param_3;
  FUN_100637010(0,lVar9);
  local_68 = param_2 & 0x1ffffffffffffff;
  CVar10.unknown = (undefined *)*unaff_x20;
  local_a8 = unaff_x20 + 1;
  _Var12 = *local_a8;
  _Var11 = unaff_x20[2];
  CVar5.unknown = CVar10.unknown;
  FUN_100632d28(CVar10.unknown,_Var12,_Var11,lVar9);
  local_70 = SUB84(CVar5.unknown,0);
  local_6c = 0x1ffffff;
  pTVar6 = &TargetProtocolConformanceDescriptor_100c697a8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c697a8,uVar4);
  bVar3 = (extension_Swift)::Swift::Comparable::>__infix(&local_68,&local_70,uVar4,pTVar6);
  if (!bVar3) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1006361b4);
    (*pcVar2)();
  }
  local_68 = param_2 & 0x1ffffffffffffff;
  CVar5.unknown = CVar10.unknown;
  FUN_100632d60(CVar10.unknown,_Var12,_Var11,lVar9);
  local_70 = SUB84(CVar5.unknown,0);
  local_6c = CONCAT13(((ulong)CVar5.unknown & 0xff00000000000000) != 0,
                      (int3)((ulong)CVar5.unknown >> 0x20));
  bVar3 = (extension_Swift)::Swift::Comparable::<__infix(&local_68,&local_70,uVar4,pTVar6);
  if (bVar3) {
    puVar7 = (undefined1 *)(param_1 & 0x1ffffffffffffff);
    FUN_100632dac(puVar7,param_2 & 0x1ffffffffffffff,CVar10.unknown);
    puVar1 = local_a0;
    if (puVar7 == &DAT_00000001) {
      FUN_1006361b8(local_a0,param_1 & 0x1ffffffffffffff,local_90);
      (**(code **)(local_98 + 8))(puVar1,lVar9);
    }
    else {
      CVar5.unknown = CVar10.unknown;
      FUN_10063258c(CVar10.unknown,_Var12,_Var11,lVar9);
      if (CVar5.unknown == puVar7) {
        Swift::Optional::typeMetadataAccessor();
        _Var11 = Swift::ContiguousArray::get_count(CVar10);
        FUN_100634b78(_Var11,lVar9);
        _swift_release(CVar10.unknown);
        *unaff_x20 = _Var11;
        *local_a8 = 0;
        local_a8[1] = 0;
      }
      else {
        tVar13 = Swift::Array<undefined>::_allocateUninitialized(0,lVar9);
        uVar4 = 0;
        local_68 = tVar13._0_8_;
        Swift::Array<undefined>::typeMetadataAccessor();
        puVar8 = PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548;
        _swift_getWitnessTable
                  (PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548,uVar4);
        FUN_100633ccc(param_1 & 0x1ffffffffffffff,param_2 & 0x1ffffffffffffff,&local_68,local_90,
                      uVar4,puVar8);
        _swift_bridgeObjectRelease(tVar13._0_8_);
      }
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1006361b8);
  (*pcVar2)();
}



/* Address: 0x1006361b8 | FUN_1006361b8 */

void FUN_1006361b8(undefined8 param_1,ulong param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  Optional OVar4;
  bool bVar5;
  undefined7 extraout_var;
  DefaultIndices DVar6;
  undefined8 uVar7;
  long lVar8;
  __int64 _Var9;
  ContiguousArray CVar10;
  undefined1 *puVar11;
  ulong uVar12;
  code *pcVar13;
  long lVar14;
  long *unaff_x20;
  long lVar15;
  long lVar16;
  undefined *puVar17;
  undefined *puVar18;
  long lVar19;
  undefined1 auStack_d0 [8];
  long local_c8;
  long local_c0;
  undefined8 local_b8;
  undefined1 *local_b0;
  undefined4 local_a8;
  undefined2 local_a4;
  undefined1 local_a2;
  undefined1 local_a1;
  undefined *local_a0 [5];
  undefined *local_78;
  undefined *puStack_70;
  long local_68;
  
  local_a8 = (undefined4)param_2;
  local_a4 = (undefined2)(param_2 >> 0x20);
  local_a2 = (undefined1)(param_2 >> 0x30);
  local_a1 = (undefined1)(param_2 >> 0x38);
  lVar16 = *(long *)(param_3 + 0x10);
  local_b8 = param_1;
  OVar4 = Swift::Optional::typeMetadataAccessor();
  lVar14 = CONCAT71(extraout_var,OVar4.value);
  local_c0 = *(long *)(lVar14 + -8);
  uVar12 = *(long *)(local_c0 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_b0 = auStack_d0 + -uVar12;
  lVar19 = (long)local_b0 - uVar12;
  CVar10.unknown = (undefined *)*unaff_x20;
  puVar1 = (undefined *)unaff_x20[1];
  local_c8 = unaff_x20[2];
  local_78 = CVar10.unknown;
  puStack_70 = puVar1;
  local_68 = local_c8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c69840,param_3);
  (extension_Swift)::Swift::Collection::_get_indices();
  DVar6 = Swift::DefaultIndices::typeMetadataAccessor();
  _swift_getWitnessTable
            (PTR_Swift__Swift__DefaultIndices<undefined>_>Swift__Sequence_100eabeb0,DVar6.unknown);
  uVar7 = 0xff;
  FUN_100637010(0xff,lVar16);
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c697f0,uVar7);
  bVar5 = (extension_Swift)::Swift::Sequence::_contains();
  (**(code **)(*(long *)(DVar6.unknown + -8) + 8))(local_a0,DVar6.unknown);
  if (!bVar5) {
                    /* WARNING: Does not return */
    pcVar13 = (code *)SoftwareBreakpoint(1,0x1006365b8);
    (*pcVar13)();
  }
  puVar17 = (undefined *)(param_2 & 0xffffffff);
  Swift::ContiguousArray::get_subscript((__int64)puVar17,CVar10);
  lVar15 = *(long *)(lVar16 + -8);
  lVar8 = lVar19;
  (**(code **)(lVar15 + 0x30))(lVar19,1,lVar16);
  if ((int)lVar8 == 1) {
                    /* WARNING: Does not return */
    pcVar13 = (code *)SoftwareBreakpoint(1,0x1006365c8);
    (*pcVar13)();
  }
  (**(code **)(lVar15 + 0x20))(local_b8,lVar19,lVar16);
  if (puVar1 == puVar17) {
    lVar19 = unaff_x20[1];
    _Var9 = Swift::ContiguousArray::get_count((undefined *)*unaff_x20);
    puVar11 = local_b0;
    unaff_x20[1] = _Var9 - 1U & lVar19 + 1U;
    (**(code **)(lVar15 + 0x38))(local_b0,1,1,lVar16);
    CVar10 = Swift::ContiguousArray::typeMetadataAccessor();
    Swift::ContiguousArray::_makeMutableAndUnique(CVar10);
    if (*(undefined **)(*unaff_x20 + 0x10) <= puVar1) {
                    /* WARNING: Does not return */
      pcVar13 = (code *)SoftwareBreakpoint(1,0x1006365bc);
      (*pcVar13)();
    }
    lVar16 = *unaff_x20 +
             ((ulong)*(byte *)(local_c0 + 0x50) + 0x20 &
             ((ulong)*(byte *)(local_c0 + 0x50) ^ 0xffffffffffffffff)) +
             *(long *)(local_c0 + 0x48) * (long)puVar1;
    pcVar13 = *(code **)(local_c0 + 0x28);
  }
  else {
    uVar12 = local_c8 - 1;
    _Var9 = Swift::ContiguousArray::get_count(CVar10);
    puVar11 = local_b0;
    if ((undefined *)(_Var9 - 1U & uVar12) != puVar17) {
      (**(code **)(lVar15 + 0x38))(local_b0,1,1,lVar16);
      CVar10 = Swift::ContiguousArray::typeMetadataAccessor();
      Swift::ContiguousArray::_makeMutableAndUnique(CVar10);
      if (puVar17 < *(undefined **)(*unaff_x20 + 0x10)) {
        (**(code **)(local_c0 + 0x28))
                  (*unaff_x20 +
                   ((ulong)*(byte *)(local_c0 + 0x50) + 0x20 &
                   ((ulong)*(byte *)(local_c0 + 0x50) ^ 0xffffffffffffffff)) +
                   *(long *)(local_c0 + 0x48) * (long)puVar17,puVar11,lVar14);
        puVar18 = (undefined *)unaff_x20[2];
        _Var9 = Swift::ContiguousArray::get_count((undefined *)*unaff_x20);
        puVar3 = PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__MutableCollection_100ead128;
        puVar2 = local_a0[0];
        for (puVar1 = (undefined *)(_Var9 - 1U & (ulong)(puVar17 + 1)); local_a0[0] = puVar17,
            puVar1 != puVar18; puVar1 = (undefined *)(_Var9 - 1U & (ulong)(puVar1 + 1))) {
          local_78 = puVar1;
          _swift_getWitnessTable(puVar3,CVar10.unknown);
          (extension_Swift)::Swift::MutableCollection::_swapAt();
          _Var9 = Swift::ContiguousArray::get_count((undefined *)*unaff_x20);
          puVar17 = puVar1;
          puVar2 = local_a0[0];
        }
        lVar14 = unaff_x20[2];
        local_a0[0] = puVar2;
        _Var9 = Swift::ContiguousArray::get_count((undefined *)*unaff_x20);
        unaff_x20[2] = _Var9 - 1U & lVar14 - 1U;
        return;
      }
                    /* WARNING: Does not return */
      pcVar13 = (code *)SoftwareBreakpoint(1,0x1006365c4);
      (*pcVar13)();
    }
    lVar19 = unaff_x20[2];
    _Var9 = Swift::ContiguousArray::get_count((undefined *)*unaff_x20);
    puVar11 = local_b0;
    unaff_x20[2] = _Var9 - 1U & lVar19 - 1U;
    (**(code **)(lVar15 + 0x38))(local_b0,1,1,lVar16);
    CVar10 = Swift::ContiguousArray::typeMetadataAccessor();
    Swift::ContiguousArray::_makeMutableAndUnique(CVar10);
    if (*(undefined **)(*unaff_x20 + 0x10) <= puVar17) {
                    /* WARNING: Does not return */
      pcVar13 = (code *)SoftwareBreakpoint(1,0x1006365c0);
      (*pcVar13)();
    }
    lVar16 = *unaff_x20 +
             ((ulong)*(byte *)(local_c0 + 0x50) + 0x20 &
             ((ulong)*(byte *)(local_c0 + 0x50) ^ 0xffffffffffffffff)) +
             *(long *)(local_c0 + 0x48) * (long)puVar17;
    pcVar13 = *(code **)(local_c0 + 0x28);
  }
  (*pcVar13)(lVar16,puVar11,lVar14);
  return;
}



/* Address: 0x1006365c8 | FUN_1006365c8 */

void FUN_1006365c8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  __int64 _Var3;
  undefined8 *unaff_x20;
  ContiguousArray CVar4;
  
  CVar4.unknown = (undefined *)*unaff_x20;
  Swift::Optional::typeMetadataAccessor();
  _Var3 = Swift::ContiguousArray::get_count(CVar4);
  if (_Var3 < param_1) {
    lVar1 = 0;
    if (LZCOUNT(param_1 + -1) != 0) {
      lVar1 = 1L << (-LZCOUNT(param_1 + -1) & 0x3fU);
    }
    lVar2 = 1;
    if (param_1 != 0) {
      lVar2 = lVar1;
    }
    FUN_100635304(lVar2,param_2);
    return;
  }
  return;
}



/* Address: 0x100636650 | FUN_100636650 */

void FUN_100636650(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  FUN_100634c58();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = uVar1;
  return;
}



/* Address: 0x10063667c | FUN_10063667c */

void FUN_10063667c(uint7 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = 0x100000000000000;
  if ((*(byte *)((long)param_1 + 7) & 1) == 0) {
    uVar1 = 0;
  }
  uVar2 = 0x100000000000000;
  if ((*(byte *)((long)param_1 + 0xf) & 1) == 0) {
    uVar2 = 0;
  }
  FUN_100633ccc(*param_1 | uVar1,param_1[1] | uVar2,param_2,param_5,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x000100636710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + -8) + 8))(param_2,param_3);
  return;
}



/* Address: 0x100636714 | thunk_FUN_1006365c8 */

void thunk_FUN_1006365c8(void)

{
  FUN_1006365c8();
  return;
}



/* Address: 0x100636718 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::RangeReplaceableCollection::$init */

void (extension_Swift)::Swift::RangeReplaceableCollection::_init(__int64 repeating)

{
  _init(repeating);
  return;
}



/* Address: 0x10063671c | FUN_10063671c */

void FUN_10063671c(undefined8 param_1,long param_2)

{
  FUN_100634c7c();
                    /* WARNING: Could not recover jumptable at 0x000100636754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*(long *)(param_2 + 0x10) + -8) + 8))(param_1);
  return;
}



/* Address: 0x100636758 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::RangeReplaceableCollection::$insert */

void (extension_Swift)::Swift::RangeReplaceableCollection::_insert(void)

{
  _insert();
  return;
}



/* Address: 0x10063675c | FUN_10063675c */

void FUN_10063675c(uint *param_1)

{
  ulong uVar1;
  
  uVar1 = 0x100000000000000;
  if (*(char *)((long)param_1 + 7) == '\0') {
    uVar1 = 0;
  }
  FUN_1006361b8(uVar1 | (ulong)*(byte *)((long)param_1 + 6) << 0x30 |
                (ulong)(ushort)param_1[1] << 0x20 | (ulong)*param_1);
  return;
}



/* Address: 0x100636788 | FUN_100636788 */

void FUN_100636788(uint7 *param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = 0x100000000000000;
  if ((*(byte *)((long)param_1 + 7) & 1) == 0) {
    uVar1 = 0;
  }
  uVar2 = 0x100000000000000;
  if ((*(byte *)((long)param_1 + 0xf) & 1) == 0) {
    uVar2 = 0;
  }
  FUN_100635f44(*param_1 | uVar1,param_1[1] | uVar2,param_2);
  return;
}



/* Address: 0x1006367dc | FUN_1006367dc */

void FUN_1006367dc(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c69a48,param_1);
  (extension_Swift)::Swift::RangeReplaceableCollection::__customRemoveLast();
  return;
}



/* Address: 0x100636828 | FUN_100636828 */

void FUN_100636828(__int64 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c69a48);
  (extension_Swift)::Swift::RangeReplaceableCollection::__customRemoveLast(param_1);
  return;
}



/* Address: 0x100636870 | thunk_FUN_100635b90 */

void thunk_FUN_100635b90(void)

{
  FUN_100635b90();
  return;
}



/* Address: 0x100636874 | thunk_FUN_10063591c */

void thunk_FUN_10063591c(void)

{
  FUN_10063591c();
  return;
}



/* Address: 0x100636878 | thunk_FUN_100635854 */

void thunk_FUN_100635854(void)

{
  FUN_100635854();
  return;
}



/* Address: 0x10063687c | FUN_10063687c */

void FUN_10063687c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c69920,param_3);
  (extension_Swift)::Swift::RangeReplaceableCollection::_removeAll();
  return;
}



/* Address: 0x1006368e4 | FUN_1006368e4 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010063699c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

bool FUN_1006368e4(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  TargetProtocolConformanceDescriptor *pTVar4;
  undefined *puVar5;
  Zip2Sequence ZVar6;
  long local_e8;
  long lStack_e0;
  TargetProtocolConformanceDescriptor *local_d8;
  TargetProtocolConformanceDescriptor *pTStack_d0;
  long local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  code *local_a0;
  undefined *puStack_98;
  undefined8 local_90 [3];
  undefined8 local_78;
  
  lVar3 = param_1;
  FUN_10063258c();
  lVar2 = param_4;
  FUN_10063258c(param_4,param_5,param_6,param_7);
  if (lVar3 == lVar2) {
    lVar3 = 0;
    local_e8 = param_4;
    lStack_e0 = param_5;
    local_d8 = (TargetProtocolConformanceDescriptor *)param_6;
    local_c0 = param_1;
    uStack_b8 = param_2;
    local_b0 = param_3;
    FUN_100637324(0,param_7);
    pTVar4 = &TargetProtocolConformanceDescriptor_100c69990;
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c69990,lVar3);
    Swift::_zip(local_90,pTVar4,&local_e8,lVar3,lVar3,pTVar4,pTVar4);
    puVar5 = &DAT_100eee010;
    _swift_allocObject(&DAT_100eee010,0x28,7);
    *(undefined8 *)(puVar5 + 0x10) = param_7;
    *(undefined8 *)(puVar5 + 0x18) = param_8;
    *(undefined8 *)(puVar5 + 0x20) = param_7;
    local_a0 = FUN_100637330;
    local_e8 = lVar3;
    lStack_e0 = lVar3;
    local_d8 = pTVar4;
    pTStack_d0 = pTVar4;
    local_b0 = param_7;
    uStack_a8 = param_8;
    puStack_98 = puVar5;
    ZVar6 = Swift::Zip2Sequence::typeMetadataAccessor();
    _swift_getWitnessTable
              (PTR_Swift__Swift__Zip2Sequence<undefined,undefined>_>Swift__Sequence_100eacea8,
               ZVar6.unknown);
    bVar1 = (extension_Swift)::Swift::Sequence::_allSatisfy();
    _swift_release(puVar5);
    _swift_release(local_90[0]);
    _swift_release(local_78);
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Address: 0x100636a60 | FUN_100636a60 */

void FUN_100636a60(undefined8 *param_1,undefined8 *param_2,long param_3,long param_4)

{
  FUN_1006368e4(*param_1,param_1[1],param_1[2],*param_2,param_2[1],param_2[2],
                *(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_4 + -8));
  return;
}



/* Address: 0x100636a88 | FUN_100636a88 */

void FUN_100636a88(Hasher param_1,ulong param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  undefined8 param_6)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  
  lVar4 = *(long *)(param_5 + -8);
  uVar3 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar5 = auStack_70 + -uVar3;
  lVar6 = (long)puVar5 - uVar3;
  local_68 = param_6;
  _swift_retain(param_2);
  uVar3 = param_2;
  FUN_100632d28(param_2,param_3,param_4,param_5);
  uVar2 = param_2;
  FUN_100632d60(param_2,param_3,param_4,param_5);
  if (((uVar3 & 0xffffffffffffff) != (uVar2 & 0xffffffffffffff)) || (uVar2 >> 0x38 == 0)) {
    bVar1 = true;
    do {
      uVar2 = 0x100000000000000;
      if (!bVar1) {
        uVar2 = 0;
      }
      uVar3 = uVar2 | uVar3 & 0xffffffffffffff;
      FUN_100632ab0(lVar6,uVar3,param_2);
      FUN_1006329fc(uVar3,1,param_2,param_3,param_4,param_5);
      bVar1 = (uVar3 & 0xff00000000000000) != 0;
      (**(code **)(lVar4 + 0x20))(puVar5,lVar6,param_5);
      Swift::Hashable::hash(param_1);
      (**(code **)(lVar4 + 8))(puVar5,param_5);
      uVar2 = param_2;
      FUN_100632d60(param_2,param_3,param_4,param_5);
    } while (((uVar3 & 0xffffffffffffff) != (uVar2 & 0xffffffffffffff)) ||
            (bVar1 != ((uVar2 & 0xff00000000000000) != 0)));
  }
  _swift_release(param_2);
  return;
}



/* Address: 0x100636c14 | FUN_100636c14 */

void FUN_100636c14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  Hasher HVar1;
  undefined1 auStack_88 [72];
  
  Swift::Hasher::init(0);
  HVar1.unknown = auStack_88;
  FUN_100636a88(HVar1.unknown,param_1,param_2,param_3,param_4,param_5);
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x100636c88 | FUN_100636c88 */

void FUN_100636c88(long param_1,long param_2)

{
  undefined8 *unaff_x20;
  
  FUN_100636c14(*unaff_x20,unaff_x20[1],unaff_x20[2],*(undefined8 *)(param_1 + 0x10),
                *(undefined8 *)(param_2 + -8));
  return;
}



/* Address: 0x100636ca0 | FUN_100636ca0 */

void FUN_100636ca0(undefined8 param_1,long param_2,long param_3)

{
  undefined8 *unaff_x20;
  
  FUN_100636a88(param_1,*unaff_x20,unaff_x20[1],unaff_x20[2],*(undefined8 *)(param_2 + 0x10),
                *(undefined8 *)(param_3 + -8));
  return;
}



/* Address: 0x100636cb8 | FUN_100636cb8 */

void FUN_100636cb8(__int64 param_1,long param_2,long param_3)

{
  Hasher HVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_78 [72];
  
  uVar2 = *(undefined8 *)(param_3 + -8);
  Swift::Hasher::init(param_1);
  HVar1.unknown = auStack_78;
  FUN_100636a88(HVar1.unknown,*unaff_x20,unaff_x20[1],unaff_x20[2],*(undefined8 *)(param_2 + 0x10),
                uVar2);
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x100636d10 | FUN_100636d10 */

undefined8 FUN_100636d10(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  TargetProtocolConformanceDescriptor *pTVar3;
  undefined *puVar4;
  undefined8 local_50;
  undefined8 local_48 [3];
  
  uVar1 = 0;
  FUN_100637324(0);
  uVar2 = 0;
  local_50 = param_1;
  Swift::Array<undefined>::typeMetadataAccessor();
  pTVar3 = &TargetProtocolConformanceDescriptor_100c69aa8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c69aa8,uVar1);
  puVar4 = PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530;
  _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530,uVar2);
  (extension_Swift)::Swift::RangeReplaceableCollection::_init
            (local_48,&local_50,uVar1,uVar2,pTVar3,puVar4);
  return local_48[0];
}



/* Address: 0x100636dac | FUN_100636dac */

void FUN_100636dac(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_3 + 0x10);
  FUN_100636d10();
  *param_1 = param_2;
  param_1[1] = uVar1;
  param_1[2] = param_4;
  return;
}



/* Address: 0x100636dd8 | FUN_100636dd8 */

long FUN_100636dd8(long param_1,long param_2)

{
  ulong uVar1;
  
  uVar1 = (ulong)*(byte *)(*(long *)(param_2 + -8) + 0x50);
  return param_1 + (uVar1 + 0x20 & (uVar1 ^ 0xffffffffffffffff));
}



/* Address: 0x100636df0 | FUN_100636df0 */

ulong FUN_100636df0(ulong param_1,long param_2)

{
  ulong uVar1;
  code *pcVar2;
  
  if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100636e18);
    (*pcVar2)();
  }
  if (param_1 >> 0x20 == 0) {
    uVar1 = 0xffffff00000000;
    if (param_2 <= (long)param_1) {
      uVar1 = 0x1ffffff00000000;
    }
    return uVar1 | param_1;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100636e1c);
  (*pcVar2)();
}



/* Address: 0x100636e1c | FUN_100636e1c */

void FUN_100636e1c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,char *param_4,
                  void *param_5)

{
  long unaff_x20;
  String SVar1;
  String SVar2;
  
  Swift::DefaultStringInterpolation::_appendInterpolation(param_2,*(undefined8 *)(unaff_x20 + 0x10))
  ;
  SVar1.bridgeObject = (void *)0xe100000000000000;
  SVar1.str = (char *)0x20;
  SVar2.bridgeObject = param_5;
  SVar2.str = param_4;
  Swift::String::append(SVar1,SVar2);
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  return;
}



/* Address: 0x100636e7c | FUN_100636e7c */

long FUN_100636e7c(undefined8 param_1,ulong param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  code *pcVar1;
  long lVar2;
  
  lVar2 = param_3;
  FUN_100632d28(param_3,param_4,param_5,param_6);
  FUN_100632dac();
  if (lVar2 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100636f20);
    (*pcVar1)();
  }
  lVar2 = param_3;
  FUN_100632d60(param_3,param_4,param_5,param_6);
  param_2 = param_2 & 0x1ffffffffffffff;
  FUN_100632dac(param_2,lVar2,param_3);
  if (-1 < (long)param_2) {
    return param_3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100636f24);
  (*pcVar1)();
}



/* Address: 0x100636f24 | FUN_100636f24 */

void FUN_100636f24(undefined8 param_1,ulong param_2,long param_3)

{
  code *pcVar1;
  Optional OVar2;
  undefined7 extraout_var;
  ContiguousArray CVar3;
  long *unaff_x20;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar5 = *(long *)(param_3 + 0x10);
  OVar2 = Swift::Optional::typeMetadataAccessor();
  lVar6 = *(long *)(CONCAT71(extraout_var,OVar2.value) + -8);
  puVar4 = &stack0xffffffffffffffb0 + -(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = *(long *)(lVar5 + -8);
  (**(code **)(lVar7 + 0x10))(puVar4,param_1,lVar5);
  (**(code **)(lVar7 + 0x38))(puVar4,0,1,lVar5);
  CVar3 = Swift::ContiguousArray::typeMetadataAccessor();
  Swift::ContiguousArray::_makeMutableAndUnique(CVar3);
  if ((param_2 & 0xffffffff) < *(ulong *)(*unaff_x20 + 0x10)) {
    (**(code **)(lVar6 + 0x28))
              (*unaff_x20 +
               ((ulong)*(byte *)(lVar6 + 0x50) + 0x20 &
               ((ulong)*(byte *)(lVar6 + 0x50) ^ 0xffffffffffffffff)) +
               *(long *)(lVar6 + 0x48) * (param_2 & 0xffffffff),puVar4,
               CONCAT71(extraout_var,OVar2.value));
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100637010);
  (*pcVar1)();
}



/* Address: 0x100637010 | FUN_100637010 */

void FUN_100637010(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x10063701c | FUN_10063701c */

undefined * FUN_10063701c(undefined8 param_1,__int64 param_2,ContiguousArray param_3)

{
  undefined1 *puVar1;
  UnsafeMutablePointer<undefined> UVar2;
  code *pcVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  tuple2_conflict10 tVar7;
  
  lVar4 = *(long *)(param_3.unknown + -8);
  puVar1 = &stack0xffffffffffffffa0 + -(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  tVar7 = Swift::ContiguousArray::_allocateUninitialized(param_2,param_3);
  UVar2 = tVar7._.unknown;
  if (-1 < param_2) {
    if (param_2 != 0) {
      pcVar3 = *(code **)(lVar4 + 0x10);
      (*pcVar3)(puVar1,param_1,param_3.unknown);
      pcVar5 = *(code **)(lVar4 + 0x20);
      (*pcVar5)(UVar2.unknown,puVar1,param_3.unknown);
      lVar6 = param_2 + -1;
      if (lVar6 != 0) {
        lVar4 = *(long *)(lVar4 + 0x48);
        do {
          UVar2.unknown = UVar2.unknown + lVar4;
          (*pcVar3)(puVar1,param_1,param_3.unknown);
          (*pcVar5)(UVar2.unknown,puVar1,param_3.unknown);
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
    }
    Swift::ContiguousArray::typeMetadataAccessor();
    return tVar7._.unknown.unknown;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100637114);
  (*pcVar3)();
}



/* Address: 0x100637114 | FUN_100637114 */

void FUN_100637114(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  ulong param_5,long param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  TargetProtocolConformanceDescriptor *pTVar6;
  long *unaff_x20;
  long lVar7;
  undefined8 uVar8;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  lVar1 = *unaff_x20;
  lVar2 = unaff_x20[1];
  lVar7 = unaff_x20[2];
  uVar8 = *(undefined8 *)(param_6 + 0x10);
  lVar4 = lVar1;
  FUN_100632d28(lVar1,lVar2,lVar7,uVar8);
  FUN_100632dac();
  if (lVar4 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100637208);
    (*pcVar3)();
  }
  lVar4 = lVar1;
  FUN_100632d60(lVar1,lVar2,lVar7,uVar8);
  uVar5 = param_5 & 0x1ffffffffffffff;
  FUN_100632dac(uVar5,lVar4,lVar1);
  if (-1 < (long)uVar5) {
    pTVar6 = &TargetProtocolConformanceDescriptor_100c69840;
    local_78 = param_1;
    uStack_70 = param_2;
    local_68 = param_3;
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c69840,param_6);
    FUN_100633ccc(param_4 & 0x1ffffffffffffff,param_5 & 0x1ffffffffffffff,&local_78,param_6,param_6,
                  pTVar6);
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10063720c);
  (*pcVar3)();
}



/* Address: 0x10063720c | FUN_10063720c */

void FUN_10063720c(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x10063721c | thunk_FUN_10063725c */

void thunk_FUN_10063725c(undefined8 param_1)

{
  long unaff_x20;
  long lVar1;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  (**(code **)(unaff_x20 + 0x28))();
                    /* WARNING: Could not recover jumptable at 0x0001006372a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(param_1,0,1,lVar1);
  return;
}



/* Address: 0x100637220 | FUN_100637220 */

void FUN_100637220(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100637234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*(long *)(unaff_x20 + 0x10) + -8) + 0x10))(param_1,param_2);
  return;
}



/* Address: 0x100637238 | FUN_100637238 */

void FUN_100637238(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_deallocObject();
  return;
}



/* Address: 0x10063725c | FUN_10063725c */

void FUN_10063725c(undefined8 param_1)

{
  long unaff_x20;
  long lVar1;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  (**(code **)(unaff_x20 + 0x28))();
                    /* WARNING: Could not recover jumptable at 0x0001006372a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(param_1,0,1,lVar1);
  return;
}



/* Address: 0x1006372a4 | FUN_1006372a4 */

void FUN_1006372a4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  FUN_100632d28(uVar1,unaff_x20[1],unaff_x20[2],*(undefined8 *)(param_3 + 0x10));
  FUN_1006329fc();
  FUN_100636f24(param_1,uVar1,param_3);
  return;
}



/* Address: 0x100637324 | FUN_100637324 */

void FUN_100637324(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100637330 | FUN_100637330 */

bool FUN_100637330(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  long unaff_x20;
  
  bVar1 = Swift::Equatable::___infix
                    (param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),
                     *(undefined8 *)(unaff_x20 + 0x18));
  return bVar1;
}


