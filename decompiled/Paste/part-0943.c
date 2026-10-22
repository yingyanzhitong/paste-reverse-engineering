/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100a2fc00 | thunk_FUN_1000d0d2c */

void thunk_FUN_1000d0d2c(void)

{
  thunk_FUN_1000d0d2c();
  return;
}



/* Address: 0x100a2fc04 | thunk_FUN_1000da664 */

void thunk_FUN_1000da664(void)

{
  FUN_1000da664();
  return;
}



/* Address: 0x100a2fc08 | thunk_FUN_100055978 */

void thunk_FUN_100055978(void)

{
  FUN_100055978();
  return;
}



/* Address: 0x100a2fc0c | FUN_100a2fc0c */

undefined1  [16] FUN_100a2fc0c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  tuple2_conflict3 tVar2;
  undefined1 auVar3 [16];
  
  uVar1 = 0;
  _swift_getTupleTypeMetadata2(0,param_1,param_2,"key value ",0);
  tVar2 = Swift::Array<undefined>::_allocateUninitialized(0,uVar1);
  auVar3._0_8_ = tVar2._0_8_;
  auVar3._8_8_ = PTR___swiftEmptyArrayStorage_100eae0d8;
  return auVar3;
}



/* Address: 0x100a2fc4c | FUN_100a2fc4c */

undefined1  [16]
FUN_100a2fc4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_60 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_50 = param_2;
  uStack_48 = param_3;
  local_40 = param_4;
  local_38 = param_1;
  _swift_getTupleTypeMetadata2(0xff,param_2,param_3,"key value ",0);
  uVar1 = 0;
  Swift::Array<undefined>::typeMetadataAccessor();
  puVar2 = PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548;
  _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548,uVar1);
  pcVar3 = FUN_100a31264;
  FUN_100193cd8(FUN_100a31264,auStack_60,uVar1,PTR___type_metadata_for_Swift_Int_100eac6f8,
                PTR___type_metadata_for_Swift_Never_100eadc38,puVar2,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  auVar4._8_8_ = pcVar3;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Address: 0x100a2fcf8 | FUN_100a2fcf8 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100a2fd38 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100a2fcf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  _swift_getTupleTypeMetadata2(0,param_3,param_4,"key value ",0);
  Swift::Array<undefined>::get_endIndex(uVar1,uVar1);
  return;
}



/* Address: 0x100a2fd3c | FUN_100a2fd3c */

void FUN_100a2fd3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7)

{
  int iVar1;
  long lVar2;
  long extraout_x8;
  undefined1 *puVar3;
  
  lVar2 = 0;
  _swift_getTupleTypeMetadata2(0,param_6,param_7,"key value ",0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &stack0xffffffffffffffb0 + -extraout_x8;
  Swift::Array<undefined>::get_subscript(puVar3,param_3,param_4,lVar2);
  iVar1 = *(int *)(lVar2 + 0x30);
  (**(code **)(*(long *)(param_6 + -8) + 0x20))(param_1,puVar3,param_6);
  (**(code **)(*(long *)(param_7 + -8) + 0x20))(param_2,puVar3 + iVar1,param_7);
  return;
}



/* Address: 0x100a2fe18 | FUN_100a2fe18 */

undefined1  [16] FUN_100a2fe18(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = param_1;
  FUN_100a310c8();
  _swift_bridgeObjectRelease(param_1);
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = uVar1;
  return auVar2;
}



/* Address: 0x100a2fe58 | FUN_100a2fe58 */

void FUN_100a2fe58(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x12;
  long lVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  long local_70;
  long local_68;
  
  lVar1 = 0;
  _swift_getTupleTypeMetadata2();
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar5 + 0x40));
  lVar3 = (long)&local_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar4 = lVar3 - extraout_x12;
  lVar2 = 0;
  _swift_getTupleTypeMetadata2(0,param_3,param_4,"key value ",0);
  local_70 = (long)*(int *)(lVar2 + 0x30);
  pcVar6 = *(code **)(lVar5 + 0x10);
  (*pcVar6)(lVar4,param_2,lVar1);
  local_68 = (long)*(int *)(lVar1 + 0x30);
  lVar2 = *(long *)(param_3 + -8);
  (**(code **)(lVar2 + 0x20))(param_1,lVar4,param_3);
  (*pcVar6)(lVar3,param_2,lVar1);
  lVar5 = *(long *)(param_4 + -8);
  (**(code **)(lVar5 + 0x20))(param_1 + local_70,lVar3 + *(int *)(lVar1 + 0x30),param_4);
  (**(code **)(lVar2 + 8))(lVar3,param_3);
  (**(code **)(lVar5 + 8))(lVar4 + local_68,param_4);
  return;
}



/* Address: 0x100a2ffb8 | FUN_100a2ffb8 */

void FUN_100a2ffb8(void)

{
  Hasher into;
  undefined1 auStack_78 [72];
  
  Swift::Hasher::init();
  into.unknown = auStack_78;
  Swift::Hashable::hash(into);
  Swift::Hasher::finalize(into);
  return;
}



/* Address: 0x100a3000c | FUN_100a3000c */

void FUN_100a3000c(undefined8 param_1,long param_2,undefined8 param_3,long param_4,long param_5,
                  long param_6,undefined8 param_7)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  undefined1 *puVar3;
  
  lVar1 = 0;
  _swift_getTupleTypeMetadata2(0,param_5,param_6,"key value ",0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &stack0xffffffffffffffa0 + -extraout_x8;
  FUN_100a2ffb8(param_2,param_5,param_6,param_7);
  if (*(long *)(param_4 + 0x10) != 0) {
    lVar2 = 0;
    do {
      if (*(long *)(param_4 + 0x20 + lVar2 * 8) == param_2) {
        Swift::Array<undefined>::get_subscript(puVar3,lVar2,param_3,lVar1);
        lVar2 = *(long *)(param_6 + -8);
        (**(code **)(lVar2 + 0x20))(param_1,puVar3 + *(int *)(lVar1 + 0x30),param_6);
        (**(code **)(lVar2 + 0x38))(param_1,0,1,param_6);
        (**(code **)(*(long *)(param_5 + -8) + 8))(puVar3,param_5);
        return;
      }
      lVar2 = lVar2 + 1;
    } while (*(long *)(param_4 + 0x10) != lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x000100a300fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_6 + -8) + 0x38))(param_1,1,1,param_6);
  return;
}



/* Address: 0x100a3017c | FUN_100a3017c */

void FUN_100a3017c(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  int iVar4;
  Optional OVar5;
  long lVar6;
  undefined7 extraout_var;
  long lVar8;
  undefined8 uVar9;
  _ContiguousArrayBuffer<undefined> _Var10;
  ulong uVar11;
  ulong uVar12;
  long extraout_x8;
  long lVar13;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar14;
  long extraout_x12;
  long extraout_x12_00;
  ulong uVar15;
  code *pcVar16;
  _ArrayBuffer _Var17;
  undefined8 *unaff_x20;
  long lVar18;
  code *pcVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long local_b0;
  ulong *local_a8;
  long lVar7;
  
  lVar1 = *(long *)(param_3 + 0x10);
  lVar2 = *(long *)(param_3 + 0x18);
  lVar6 = 0;
  _swift_getTupleTypeMetadata2(0,lVar1,lVar2,"key value ",0);
  local_b0 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_b0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar22 = (long)&local_b0 - extraout_x8;
  OVar5 = Swift::Optional::typeMetadataAccessor();
  lVar7 = CONCAT71(extraout_var,OVar5.value);
  lVar13 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar13 + 0x40));
  lVar21 = lVar22 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar18 = lVar21 - extraout_x12;
  lVar23 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar23 + 0x40));
  lVar14 = lVar18 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar8 = param_2;
  FUN_100a2ffb8(param_2,lVar1,lVar2,*(undefined8 *)(param_3 + 0x20));
  local_a8 = unaff_x20 + 1;
  uVar15 = *local_a8;
  if (*(long *)(uVar15 + 0x10) != 0) {
    lVar20 = 0;
    do {
      if (*(long *)(uVar15 + 0x20 + lVar20 * 8) == lVar8) {
        (**(code **)(lVar13 + 0x10))(lVar18,param_1,lVar7);
        lVar8 = lVar18;
        (**(code **)(lVar23 + 0x30))(lVar18,1,lVar2);
        if ((int)lVar8 == 1) {
          pcVar16 = *(code **)(lVar13 + 8);
          (*pcVar16)(lVar18,lVar7);
          uVar9 = 0;
          Swift::Array<undefined>::typeMetadataAccessor();
          Swift::Array<undefined>::remove(lVar22,lVar20,uVar9);
          (**(code **)(lVar23 + 8))(lVar22 + *(int *)(lVar6 + 0x30),lVar2);
          pcVar19 = *(code **)(*(long *)(lVar1 + -8) + 8);
          (*pcVar19)(lVar22,lVar1);
          FUN_100a30740(lVar20);
          (*pcVar19)(param_2,lVar1);
          (*pcVar16)(param_1,lVar7);
          return;
        }
        (**(code **)(lVar23 + 0x20))(lVar14 - extraout_x12_00,lVar18,lVar2);
        Swift::Array<undefined>::typeMetadataAccessor();
        Swift::Array<undefined>::_makeMutableAndUnique();
        _Var17.unknown = (undefined *)*unaff_x20;
        FUN_100662648(lVar20,_Var17.unknown,lVar6);
        _Var10 = Swift::_ArrayBuffer::get__native(_Var17);
        lVar8 = local_b0;
        bVar3 = *(byte *)(local_b0 + 0x50);
        _swift_release();
        (**(code **)(lVar23 + 0x28))
                  (_Var10.unknown +
                   (long)*(int *)(lVar6 + 0x30) +
                   *(long *)(lVar8 + 0x48) * lVar20 +
                   ((ulong)bVar3 + 0x20 & ((ulong)bVar3 ^ 0xffffffffffffffff)),
                   lVar14 - extraout_x12_00,lVar2);
        (**(code **)(*(long *)(lVar1 + -8) + 8))(param_2);
        (**(code **)(lVar13 + 8))(param_1,lVar7);
        return;
      }
      lVar20 = lVar20 + 1;
    } while (*(long *)(uVar15 + 0x10) != lVar20);
  }
  (**(code **)(lVar13 + 0x10))(lVar21,param_1,lVar7);
  lVar18 = lVar21;
  (**(code **)(lVar23 + 0x30))(lVar21,1,lVar2);
  if ((int)lVar18 == 1) {
    (**(code **)(*(long *)(lVar1 + -8) + 8))(param_2);
    pcVar16 = *(code **)(lVar13 + 8);
    (*pcVar16)(param_1,lVar7);
    (*pcVar16)(lVar21,lVar7);
  }
  else {
    (**(code **)(lVar23 + 0x20))(lVar14,lVar21,lVar2);
    iVar4 = *(int *)(lVar6 + 0x30);
    local_b0 = *(long *)(lVar1 + -8);
    (**(code **)(local_b0 + 0x10))(lVar22,param_2,lVar1);
    (**(code **)(lVar23 + 0x10))(lVar22 + iVar4,lVar14,lVar2);
    uVar9 = 0;
    Swift::Array<undefined>::typeMetadataAccessor();
    Swift::Array<undefined>::append(lVar22,uVar9);
    uVar12 = uVar15;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar11 = uVar15;
    if ((uVar12 & 1) == 0) {
      uVar11 = 0;
      FUN_1009fd6ac(0,*(long *)(uVar15 + 0x10) + 1,1,uVar15);
    }
    uVar15 = *(ulong *)(uVar11 + 0x10);
    uVar12 = uVar11;
    if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar15) {
      uVar12 = (ulong)(1 < *(ulong *)(uVar11 + 0x18));
      FUN_1009fd6ac(uVar12,uVar15 + 1,1,uVar11);
    }
    *(ulong *)(uVar12 + 0x10) = uVar15 + 1;
    *(long *)(uVar12 + uVar15 * 8 + 0x20) = lVar8;
    (**(code **)(local_b0 + 8))(param_2,lVar1);
    (**(code **)(lVar13 + 8))(param_1,lVar7);
    (**(code **)(lVar23 + 8))(lVar14,lVar2);
    *local_a8 = uVar12;
  }
  return;
}



/* Address: 0x100a30614 | FUN_100a30614 */

void FUN_100a30614(undefined8 param_1)

{
  FUN_100a3062c(param_1,FUN_100a3108c);
  return;
}



/* Address: 0x100a30620 | FUN_100a30620 */

void FUN_100a30620(undefined8 param_1)

{
  FUN_100a306b8(param_1,FUN_100a310a0);
  return;
}



/* Address: 0x100a3062c | FUN_100a3062c */

undefined1  [16] FUN_100a3062c(ulong param_1,code *param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  code *pcVar3;
  ulong uVar4;
  undefined1 (*pauVar5) [16];
  ulong uVar6;
  ulong *unaff_x20;
  long lVar7;
  
  uVar6 = *unaff_x20;
  uVar4 = uVar6;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar4 & 1) == 0) {
    (*param_2)();
  }
  if (param_1 < *(ulong *)(uVar6 + 0x10)) {
    lVar7 = *(ulong *)(uVar6 + 0x10) - 1;
    lVar1 = uVar6 + param_1 * 0x10;
    pauVar5 = (undefined1 (*) [16])(lVar1 + 0x20);
    auVar2 = *pauVar5;
    _memmove(pauVar5,(void *)(lVar1 + 0x30),(lVar7 - param_1) * 0x10);
    *(long *)(uVar6 + 0x10) = lVar7;
    *unaff_x20 = uVar6;
    return auVar2;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100a306b8);
  (*pcVar3)();
}



/* Address: 0x100a306b8 | FUN_100a306b8 */

undefined8 FUN_100a306b8(ulong param_1,code *param_2)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong *unaff_x20;
  undefined8 uVar6;
  long lVar7;
  
  uVar5 = *unaff_x20;
  uVar3 = uVar5;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar3 & 1) == 0) {
    (*param_2)();
  }
  if (param_1 < *(ulong *)(uVar5 + 0x10)) {
    lVar7 = *(ulong *)(uVar5 + 0x10) - 1;
    lVar1 = uVar5 + param_1 * 8;
    puVar4 = (undefined8 *)(lVar1 + 0x20);
    uVar6 = *puVar4;
    _memmove(puVar4,(void *)(lVar1 + 0x28),(lVar7 - param_1) * 8);
    *(long *)(uVar5 + 0x10) = lVar7;
    *unaff_x20 = uVar5;
    return uVar6;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100a30740);
  (*pcVar2)();
}



/* Address: 0x100a30740 | FUN_100a30740 */

undefined8 FUN_100a30740(ulong param_1)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong *unaff_x20;
  undefined8 uVar6;
  long lVar7;
  
  uVar5 = *unaff_x20;
  uVar3 = uVar5;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar3 & 1) == 0) {
    FUN_100a310b4();
  }
  if (param_1 < *(ulong *)(uVar5 + 0x10)) {
    lVar7 = *(ulong *)(uVar5 + 0x10) - 1;
    lVar1 = uVar5 + param_1 * 8;
    puVar4 = (undefined8 *)(lVar1 + 0x20);
    uVar6 = *puVar4;
    _memmove(puVar4,(void *)(lVar1 + 0x28),(lVar7 - param_1) * 8);
    *(long *)(uVar5 + 0x10) = lVar7;
    *unaff_x20 = uVar5;
    return uVar6;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100a307c4);
  (*pcVar2)();
}



/* Address: 0x100a307c4 | FUN_100a307c4 */

undefined1  [16] FUN_100a307c4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  Optional OVar2;
  long *plVar3;
  undefined7 extraout_var;
  void *pvVar4;
  long lVar5;
  code *pcVar6;
  undefined8 *unaff_x20;
  undefined8 uVar7;
  void *pvVar8;
  void *pvVar9;
  size_t sVar10;
  long lVar11;
  undefined1 auVar12 [16];
  
  puVar1 = PTR__swift_coroFrameAlloc_100eae1a0;
  plVar3 = (long *)0x58;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    plVar3 = _malloc(0x58);
  }
  else {
    _swift_coroFrameAlloc(0x58,0xc445);
  }
  *param_1 = plVar3;
  *plVar3 = param_3;
  plVar3[1] = (long)unaff_x20;
  uVar7 = *(undefined8 *)(param_3 + 0x18);
  OVar2 = Swift::Optional::typeMetadataAccessor();
  plVar3[2] = CONCAT71(extraout_var,OVar2.value);
  lVar5 = *(long *)(CONCAT71(extraout_var,OVar2.value) + -8);
  plVar3[3] = lVar5;
  pvVar8 = *(void **)(lVar5 + 0x40);
  if (puVar1 == (undefined *)0x0) {
    pvVar9 = _malloc((size_t)pvVar8);
    plVar3[4] = (long)pvVar9;
    pvVar8 = _malloc((size_t)pvVar8);
    plVar3[5] = (long)pvVar8;
    lVar5 = *(long *)(param_3 + 0x10);
    plVar3[6] = lVar5;
    lVar11 = *(long *)(lVar5 + -8);
    plVar3[7] = lVar11;
    sVar10 = *(size_t *)(lVar11 + 0x40);
    pvVar9 = _malloc(sVar10);
    plVar3[8] = (long)pvVar9;
    pvVar9 = _malloc(sVar10);
  }
  else {
    pvVar9 = pvVar8;
    _swift_coroFrameAlloc(pvVar8,0xc445);
    plVar3[4] = (long)pvVar9;
    _swift_coroFrameAlloc(pvVar8,0xc445);
    plVar3[5] = (long)pvVar8;
    lVar5 = *(long *)(param_3 + 0x10);
    plVar3[6] = lVar5;
    lVar11 = *(long *)(lVar5 + -8);
    plVar3[7] = lVar11;
    pvVar9 = *(void **)(lVar11 + 0x40);
    pvVar4 = pvVar9;
    _swift_coroFrameAlloc(pvVar9,0xc445);
    plVar3[8] = (long)pvVar4;
    _swift_coroFrameAlloc(pvVar9,0xc445);
  }
  plVar3[9] = (long)pvVar9;
  pcVar6 = *(code **)(lVar11 + 0x10);
  plVar3[10] = (long)pcVar6;
  (*pcVar6)();
  FUN_100a3000c(pvVar8,param_2,*unaff_x20,unaff_x20[1],lVar5,uVar7,*(undefined8 *)(param_3 + 0x20));
  auVar12._8_8_ = pvVar8;
  auVar12._0_8_ = FUN_100a30930;
  return auVar12;
}



/* Address: 0x100a30930 | FUN_100a30930 */

void FUN_100a30930(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  void *pvVar6;
  void *pvVar7;
  void *pvVar8;
  void *pvVar9;
  undefined8 uVar10;
  
  param_1 = (undefined8 *)*param_1;
  if ((param_2 & 1) == 0) {
    pvVar7 = (void *)param_1[8];
    pvVar6 = (void *)param_1[9];
    pvVar9 = (void *)param_1[4];
    pvVar8 = (void *)param_1[5];
    FUN_100a3017c(pvVar8,pvVar6,*param_1);
  }
  else {
    pvVar6 = (void *)param_1[9];
    pcVar3 = (code *)param_1[10];
    lVar1 = param_1[7];
    pvVar7 = (void *)param_1[8];
    pvVar8 = (void *)param_1[5];
    uVar4 = param_1[6];
    lVar2 = param_1[3];
    pvVar9 = (void *)param_1[4];
    uVar5 = param_1[2];
    uVar10 = *param_1;
    (**(code **)(lVar2 + 0x10))(pvVar9,pvVar8,uVar5);
    (*pcVar3)(pvVar7,pvVar6,uVar4);
    FUN_100a3017c(pvVar9,pvVar7,uVar10);
    (**(code **)(lVar1 + 8))(pvVar6,uVar4);
    (**(code **)(lVar2 + 8))(pvVar8,uVar5);
  }
  _free(pvVar6);
  _free(pvVar7);
  _free(pvVar8);
  _free(pvVar9);
  _free(param_1);
  return;
}



/* Address: 0x100a30a30 | FUN_100a30a30 */

undefined8
FUN_100a30a30(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
             undefined8 param_6)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  tuple2_conflict3 tVar7;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  
  lVar2 = 0;
  _swift_getTupleTypeMetadata2(0,param_4,param_5,"key value ",0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = auStack_70 + -extraout_x8;
  tVar7 = Swift::Array<undefined>::_allocateUninitialized(0,param_5);
  local_68 = tVar7._0_8_;
  FUN_100a2ffb8(param_1,param_4,param_5,param_6);
  lVar6 = *(long *)(param_3 + 0x10);
  uVar3 = tVar7._0_8_;
  if (lVar6 != 0) {
    lVar5 = 0;
    do {
      if (*(long *)(param_3 + 0x20 + lVar5 * 8) == param_1) {
        Swift::Array<undefined>::get_subscript(puVar4,lVar5,param_2,lVar2);
        iVar1 = *(int *)(lVar2 + 0x30);
        uVar3 = 0;
        Swift::Array<undefined>::typeMetadataAccessor();
        Swift::Array<undefined>::append(puVar4 + iVar1,uVar3);
        (**(code **)(*(long *)(param_4 + -8) + 8))(puVar4,param_4);
      }
      lVar5 = lVar5 + 1;
      uVar3 = local_68;
    } while (lVar6 != lVar5);
  }
  return uVar3;
}



/* Address: 0x100a30b80 | FUN_100a30b80 */

bool FUN_100a30b80(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  
  FUN_100a2ffb8(param_1,param_4,param_5,param_6);
  lVar2 = *(long *)(param_3 + 0x10);
  bVar1 = false;
  if (lVar2 != 0) {
    plVar3 = (long *)(param_3 + 0x20);
    do {
      lVar2 = lVar2 + -1;
      bVar1 = *plVar3 == param_1;
      plVar3 = plVar3 + 1;
    } while (!bVar1 && lVar2 != 0);
  }
  return bVar1;
}



/* Address: 0x100a30bd8 | FUN_100a30bd8 */

void FUN_100a30bd8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  long extraout_x8;
  long unaff_x20;
  ulong uVar9;
  undefined1 *puVar10;
  
  lVar1 = *(long *)(param_3 + 0x10);
  lVar2 = *(long *)(param_3 + 0x18);
  lVar4 = 0;
  _swift_getTupleTypeMetadata2(0,lVar1,lVar2,"key value ",0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = &stack0xffffffffffffffa0 + -extraout_x8;
  uVar5 = param_1;
  FUN_100a2ffb8(param_1,lVar1,lVar2,*(undefined8 *)(param_3 + 0x20));
  iVar3 = *(int *)(lVar4 + 0x30);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(puVar10,param_1,lVar1);
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(puVar10 + iVar3,param_2,lVar2);
  uVar6 = 0;
  Swift::Array<undefined>::typeMetadataAccessor();
  Swift::Array<undefined>::append(puVar10,uVar6);
  uVar9 = *(ulong *)(unaff_x20 + 8);
  uVar7 = uVar9;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar8 = uVar9;
  if ((uVar7 & 1) == 0) {
    uVar8 = 0;
    FUN_1009fd6ac(0,*(long *)(uVar9 + 0x10) + 1,1,uVar9);
  }
  uVar7 = *(ulong *)(uVar8 + 0x10);
  uVar9 = uVar8;
  if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar7) {
    uVar9 = (ulong)(1 < *(ulong *)(uVar8 + 0x18));
    FUN_1009fd6ac(uVar9,uVar7 + 1,1,uVar8);
  }
  *(ulong *)(uVar9 + 0x10) = uVar7 + 1;
  *(undefined8 *)(uVar9 + uVar7 * 8 + 0x20) = uVar5;
  *(ulong *)(unaff_x20 + 8) = uVar9;
  return;
}



/* Address: 0x100a30d40 | FUN_100a30d40 */

void FUN_100a30d40(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  FUN_100a2fcf8(uVar1,param_3,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18));
  *param_1 = uVar1;
  return;
}



/* Address: 0x100a30d70 | FUN_100a30d70 */

undefined1  [16] FUN_100a30d70(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  void *pvVar4;
  long lVar5;
  void *pvVar6;
  void *pvVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *unaff_x20;
  undefined1 auVar10 [16];
  
  puVar3 = PTR__swift_coroFrameAlloc_100eae1a0;
  pvVar4 = (void *)0x40;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    pvVar4 = _malloc(0x40);
  }
  else {
    _swift_coroFrameAlloc(0x40,0x6ecf);
  }
  *param_1 = pvVar4;
  lVar1 = *(long *)(param_3 + 0x10);
  lVar2 = *(long *)(param_3 + 0x18);
  lVar5 = 0;
  _swift_getTupleTypeMetadata2(0,lVar1,lVar2,"key value ",0);
  *(long *)((long)pvVar4 + 0x20) = lVar5;
  lVar9 = *(long *)(lVar5 + -8);
  *(long *)((long)pvVar4 + 0x28) = lVar9;
  pvVar6 = *(void **)(lVar9 + 0x40);
  if (puVar3 == (undefined *)0x0) {
    pvVar6 = _malloc((size_t)pvVar6);
  }
  else {
    _swift_coroFrameAlloc(pvVar6,0x6ecf);
  }
  *(void **)((long)pvVar4 + 0x30) = pvVar6;
  uVar8 = *unaff_x20;
  pvVar7 = pvVar4;
  FUN_100a30ed8(pvVar4,*param_2,uVar8,unaff_x20[1],lVar1,lVar2,*(undefined8 *)(param_3 + 0x20));
  *(void **)((long)pvVar4 + 0x38) = pvVar7;
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(pvVar6);
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))
            ((long)pvVar6 + (long)*(int *)(lVar5 + 0x30),uVar8,lVar2);
  auVar10._8_8_ = pvVar6;
  auVar10._0_8_ = FUN_100a30e84;
  return auVar10;
}



/* Address: 0x100a30e84 | FUN_100a30e84 */

void FUN_100a30e84(undefined8 *param_1,undefined8 param_2)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar2 = (void *)*param_1;
  (**(code **)(*(long *)((long)pvVar2 + 0x28) + 8))
            (*(undefined8 *)((long)pvVar2 + 0x30),*(undefined8 *)((long)pvVar2 + 0x20));
  pvVar1 = *(void **)((long)pvVar2 + 0x30);
  (**(code **)((long)pvVar2 + 0x38))(pvVar2,param_2);
  _free(pvVar1);
  _free(pvVar2);
  return;
}



/* Address: 0x100a30ed8 | FUN_100a30ed8 */

code * FUN_100a30ed8(long *param_1)

{
  long lVar1;
  void *pvVar2;
  undefined8 in_x4;
  undefined8 in_x5;
  long lVar3;
  
  lVar1 = 0;
  _swift_getTupleTypeMetadata2(0,in_x4,in_x5,"key value ",0);
  lVar3 = *(long *)(lVar1 + -8);
  *param_1 = lVar1;
  param_1[1] = lVar3;
  pvVar2 = *(void **)(lVar3 + 0x40);
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    pvVar2 = _malloc((size_t)pvVar2);
  }
  else {
    _swift_coroFrameAlloc(pvVar2,0x105d);
  }
  param_1[2] = (long)pvVar2;
  FUN_100a2fd3c();
  return FUN_1006333c4;
}



/* Address: 0x100a30f98 | $$(extension_in_Swift):Swift.Collection<_where_A.SubSequence_==_Swift.Slice<A>>.subscript.getter_:_(Swift.Range<A.Index>)_->_Swift.Slice<A> */

void ___extension_in_Swift__Swift_Collection<_where_A_SubSequence____Swift_Slice<A>>_subscript_getter____Swift_Range<A_Index>___>_Swift_Slice<A>
               (void)

{
  ___extension_in_Swift__Swift_Collection<_where_A_SubSequence____Swift_Slice<A>>_subscript_getter____Swift_Range<A_Index>___>_Swift_Slice<A>
            ();
  return;
}



/* Address: 0x100a30f9c | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::Collection::$index */

void (extension_Swift)::Swift::Collection::_index(__int64 param_1)

{
  _index(param_1);
  return;
}



/* Address: 0x100a30fa0 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::Collection::$index */

void (extension_Swift)::Swift::Collection::_index(__int64 param_1)

{
  _index(param_1);
  return;
}



/* Address: 0x100a30fa4 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::Collection::$distance */

__int64 (extension_Swift)::Swift::Collection::_distance(void)

{
  __int64 _Var1;
  
  _Var1 = _distance();
  return _Var1;
}



/* Address: 0x100a30fa8 | FUN_100a30fa8 */

void FUN_100a30fa8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  uVar1 = param_2;
  FUN_100a310c8(param_2,uVar2,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x20));
  _swift_bridgeObjectRelease(param_2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}



/* Address: 0x100a30ff4 | FUN_100a30ff4 */

void FUN_100a30ff4(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *unaff_x20;
  param_1[1] = unaff_x20[1];
  *param_1 = uVar1;
  param_1[2] = 0;
  return;
}



/* Address: 0x100a31004 | FUN_100a31004 */

void FUN_100a31004(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8eb90,param_1);
  (extension_Swift)::Swift::Collection::get_underestimatedCount();
  return;
}



/* Address: 0x100a31038 | FUN_100a31038 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100a31064 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined * FUN_100a31038(undefined8 param_1)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  ContiguousArray<Swift__copyCollectionToContiguousArray<A_where_A:_Swift_Collection>(A)__>_Swift_ContiguousArray<A_Element>>
  CVar2;
  undefined8 *unaff_x20;
  
  pTVar1 = &TargetProtocolConformanceDescriptor_100c8eb90;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8eb90,param_1);
  CVar2 = Swift::__copyCollectionToContiguousArray(pTVar1,param_1,pTVar1);
  _swift_bridgeObjectRelease(*unaff_x20);
  _swift_bridgeObjectRelease(unaff_x20[1]);
  return CVar2.unknown;
}



/* Address: 0x100a3108c | FUN_100a3108c */

void FUN_100a3108c(long param_1)

{
  thunk_FUN_1009fd5ac(0,*(undefined8 *)(param_1 + 0x10),0,param_1);
  return;
}



/* Address: 0x100a310a0 | FUN_100a310a0 */

void FUN_100a310a0(long param_1)

{
  thunk_FUN_1009fd59c(0,*(undefined8 *)(param_1 + 0x10),0,param_1);
  return;
}



/* Address: 0x100a310b4 | FUN_100a310b4 */

void FUN_100a310b4(long param_1)

{
  FUN_1009fd6ac(0,*(undefined8 *)(param_1 + 0x10),0,param_1);
  return;
}



/* Address: 0x100a310c8 | FUN_100a310c8 */

undefined1  [16]
FUN_100a310c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  code *pcVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  undefined1 auStack_90 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_80 = param_2;
  uStack_78 = param_3;
  local_70 = param_4;
  uStack_68 = param_1;
  _swift_getTupleTypeMetadata2(0xff,param_2,param_3,0,0);
  uVar2 = 0;
  Swift::Array<undefined>::typeMetadataAccessor();
  uVar3 = 0;
  _swift_getTupleTypeMetadata2(0,param_2,param_3,"key value ",0);
  puVar4 = PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548;
  _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548,uVar2);
  puVar1 = PTR___type_metadata_for_Swift_Never_100eadc38;
  pcVar5 = FUN_100a3120c;
  FUN_100193cd8(FUN_100a3120c,auStack_90,uVar2,uVar3,PTR___type_metadata_for_Swift_Never_100eadc38,
                puVar4,PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40
               );
  pcVar6 = FUN_100a3122c;
  local_80 = param_2;
  uStack_78 = param_3;
  local_70 = param_4;
  uStack_68 = param_1;
  FUN_100193cd8(FUN_100a3122c,auStack_90,uVar2,PTR___type_metadata_for_Swift_Int_100eac6f8,puVar1,
                puVar4,PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40
               );
  auVar7._8_8_ = pcVar6;
  auVar7._0_8_ = pcVar5;
  return auVar7;
}



/* Address: 0x100a311f0 | FUN_100a311f0 */

void FUN_100a311f0(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8eca8,param_1);
  return;
}



/* Address: 0x100a31200 | FUN_100a31200 */

void FUN_100a31200(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100a3120c | FUN_100a3120c */

void FUN_100a3120c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_100a2fe58(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),param_2);
  return;
}



/* Address: 0x100a3122c | FUN_100a3122c */

void FUN_100a3122c(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_100a2ffb8(param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  *param_1 = param_2;
  return;
}



/* Address: 0x100a31260 | thunk_FUN_1001b6868 */

void thunk_FUN_1001b6868(void)

{
  thunk_FUN_1001b6868();
  return;
}



/* Address: 0x100a31264 | FUN_100a31264 */

void FUN_100a31264(void)

{
  FUN_100a3122c();
  return;
}



/* Address: 0x100a31278 | FUN_100a31278 */

String FUN_100a31278(long param_1,undefined8 param_2,void *param_3,long param_4)

{
  code *pcVar1;
  void *pvVar2;
  String SVar3;
  tuple2_conflict1 tVar4;
  
  if ((long)param_3 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100a312e8);
    (*pcVar1)();
  }
  if (param_3 <= *(void **)(param_1 + 0x10) && param_4 <= (long)*(void **)(param_1 + 0x10)) {
    if (-1 < param_4) {
      pvVar2 = param_3;
      _swift_bridgeObjectRetain();
      SVar3.bridgeObject = pvVar2;
      SVar3.str = (char *)(param_4 - (long)param_3);
      tVar4 = Swift::String::_fromUTF8Repairing((undefined *)((long)param_3 + param_1 + 0x20),SVar3)
      ;
      _swift_bridgeObjectRelease(param_1,tVar4.result.bridgeObject,tVar4._16_8_);
      return tVar4.result;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100a312f0);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100a312ec);
  (*pcVar1)();
}



/* Address: 0x100a312f0 | FUN_100a312f0 */

/* WARNING: Removing unreachable block (ram,0x000100a31398) */
/* WARNING: Removing unreachable block (ram,0x000100a313a4) */
/* WARNING: Removing unreachable block (ram,0x000100a314e4) */
/* WARNING: Removing unreachable block (ram,0x000100a313c8) */
/* WARNING: Removing unreachable block (ram,0x000100a313d8) */
/* WARNING: Removing unreachable block (ram,0x000100a31360) */
/* WARNING: Removing unreachable block (ram,0x000100a31370) */

undefined * FUN_100a312f0(uint param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  ulong uVar1;
  byte bVar2;
  code *pcVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  long *unaff_x20;
  long lVar12;
  
  lVar11 = unaff_x20[1];
  lVar12 = unaff_x20[3];
  puVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
  while( true ) {
    if (lVar11 == lVar12) {
      return puVar7;
    }
    uVar4 = (ulong)param_1;
    uVar8 = 1;
    FUN_100a33eb0();
    uVar9 = param_3;
    puVar10 = param_4;
    _swift_bridgeObjectRetain();
    puVar5 = puVar7;
    _swift_isUniquelyReferenced_nonNull_native();
    puVar6 = puVar7;
    if (((ulong)puVar5 & 1) == 0) {
      puVar6 = (undefined *)0x0;
      uVar9 = 1;
      FUN_1009fd494(0,*(long *)(puVar7 + 0x10) + 1);
      puVar10 = puVar7;
    }
    uVar1 = *(ulong *)(puVar6 + 0x10);
    puVar7 = puVar6;
    if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar1) {
      puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
      uVar9 = 1;
      FUN_1009fd494(puVar7,uVar1 + 1);
      puVar10 = puVar6;
    }
    *(ulong *)(puVar7 + 0x10) = uVar1 + 1;
    *(ulong *)(puVar7 + uVar1 * 0x20 + 0x20) = uVar4;
    *(undefined8 *)(puVar7 + uVar1 * 0x20 + 0x28) = uVar8;
    *(undefined8 *)(puVar7 + uVar1 * 0x20 + 0x30) = param_3;
    *(undefined **)(puVar7 + uVar1 * 0x20 + 0x38) = param_4;
    uVar4 = unaff_x20[1];
    if ((long)uVar4 < 0) break;
    if (*(ulong *)(*unaff_x20 + 0x10) <= uVar4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100a3150c);
      (*pcVar3)();
    }
    bVar2 = *(byte *)(*unaff_x20 + uVar4 + 0x20);
    if ((char)bVar2 < '\0') {
      if ((bVar2 & 0xe0) == 0xc0) {
        lVar11 = uVar4 + 2;
      }
      else if ((bVar2 & 0xf0) == 0xe0) {
        lVar11 = uVar4 + 3;
        if (SCARRY8(uVar4,3)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100a31510);
          (*pcVar3)();
        }
      }
      else {
        lVar11 = uVar4 + 4;
        if (SCARRY8(uVar4,4)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100a31514);
          (*pcVar3)();
        }
      }
    }
    else {
      lVar11 = uVar4 + 1;
    }
    unaff_x20[1] = lVar11;
    lVar11 = unaff_x20[1];
    param_4 = puVar10;
    param_3 = uVar9;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100a31508);
  (*pcVar3)();
}



/* Address: 0x100a31514 | FUN_100a31514 */

void FUN_100a31514(void)

{
  long unaff_x21;
  
  FUN_100a33eb0();
  if (unaff_x21 == 0) {
    _swift_bridgeObjectRetain();
  }
  return;
}



/* Address: 0x100a3155c | FUN_100a3155c */

void FUN_100a3155c(void)

{
  byte bVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  long *unaff_x20;
  
  uVar3 = unaff_x20[1];
  if ((long)uVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100a315d0);
    (*pcVar2)();
  }
  if (uVar3 < *(ulong *)(*unaff_x20 + 0x10)) {
    bVar1 = *(byte *)(*unaff_x20 + uVar3 + 0x20);
    if ((char)bVar1 < '\0') {
      if ((bVar1 & 0xe0) == 0xc0) {
        unaff_x20[1] = uVar3 + 2;
        return;
      }
      if ((bVar1 & 0xf0) == 0xe0) {
        lVar4 = uVar3 + 3;
        if (SCARRY8(uVar3,3)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100a315c0);
          (*pcVar2)();
        }
      }
      else {
        lVar4 = uVar3 + 4;
        if (SCARRY8(uVar3,4)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100a315cc);
          (*pcVar2)();
        }
      }
    }
    else {
      lVar4 = uVar3 + 1;
    }
    unaff_x20[1] = lVar4;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100a315d4);
  (*pcVar2)();
}



/* Address: 0x100a315d4 | FUN_100a315d4 */

bool FUN_100a315d4(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  return param_2 == param_4;
}



/* Address: 0x100a315e0 | FUN_100a315e0 */

void FUN_100a315e0(void)

{
  FUN_100a34078();
  _swift_bridgeObjectRetain();
  return;
}



/* Address: 0x100a31620 | FUN_100a31620 */

undefined1  [16] FUN_100a31620(long param_1,ulong param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  if (param_4 < (long)param_2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100a316a4);
    (*pcVar1)();
  }
  if (-1 < (long)param_2) {
    if (param_2 <= *(ulong *)(param_1 + 0x10) && param_4 <= (long)*(ulong *)(param_1 + 0x10)) {
      lVar2 = param_1;
      _swift_bridgeObjectRetain();
      lVar3 = lVar2 + 0x20;
      FUN_100a331a0();
      _swift_bridgeObjectRelease(param_1);
      auVar4._8_8_ = lVar3;
      auVar4._0_8_ = lVar2;
      return auVar4;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100a316ac);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100a316a8);
  (*pcVar1)();
}



/* Address: 0x100a316ac | FUN_100a316ac */

undefined8 FUN_100a316ac(undefined8 param_1,undefined8 param_2)

{
  FUN_100a33828();
  _swift_bridgeObjectRelease(param_2);
  return param_1;
}



/* Address: 0x100a316e8 | FUN_100a316e8 */

void FUN_100a316e8(undefined *param_1,ulong param_2)

{
  UnsafeBufferPointer<__int8> UVar1;
  ulong uVar2;
  undefined1 local_a0 [32];
  undefined *local_80;
  ulong uStack_78;
  undefined1 local_70 [32];
  
  _swift_bridgeObjectRetain(param_2);
  local_80 = param_1;
  if ((param_2 >> 0x3c & 1) != 0) {
    uVar2 = param_2;
    FUN_100a334ec();
    _swift_bridgeObjectRelease(param_2);
    local_80 = param_1;
    param_2 = uVar2;
  }
  if ((param_2 >> 0x3d & 1) == 0) {
    if (((ulong)local_80 >> 0x3c & 1) == 0) {
      UVar1 = Swift::_StringObject::get_sharedUTF8(local_80);
    }
    else {
      UVar1.unknown = (undefined *)((param_2 & 0xfffffffffffffff) + 0x20);
    }
    FUN_100a32388(local_70,UVar1.unknown);
    _swift_bridgeObjectRelease(param_2);
  }
  else {
    uStack_78 = param_2 & 0xffffffffffffff;
    FUN_100a32388(local_a0,&local_80,param_2 >> 0x38 & 0xf);
    _swift_bridgeObjectRelease(param_2);
  }
  return;
}



/* Address: 0x100a31808 | FUN_100a31808 */

undefined * FUN_100a31808(undefined1 *param_1,ulong param_2)

{
  byte bVar1;
  code *pcVar2;
  __uint32 _Var3;
  Hasher HVar4;
  Hasher HVar5;
  ulong uVar6;
  undefined1 *puVar7;
  ulong uVar8;
  undefined1 *puVar9;
  undefined8 *unaff_x20;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined *unaff_x24;
  
  puVar10 = (undefined1 *)unaff_x20[1];
  puVar7 = puVar10;
  puVar9 = puVar10;
  HVar4.unknown = param_1;
  if (puVar10 != (undefined1 *)unaff_x20[3]) {
    do {
      unaff_x24 = (undefined *)*unaff_x20;
      puVar9 = (undefined1 *)unaff_x20[3];
      HVar4.unknown = puVar7;
      HVar5.unknown = unaff_x24;
      FUN_100a32fa0();
      if (*(long *)(param_1 + 0x10) != 0) {
        Swift::Hasher::init(*(__int64 *)(param_1 + 0x28));
        _Var3 = (__uint32)HVar4.unknown;
        Swift::Hasher::_combine(_Var3,HVar5);
        HVar4.unknown = (undefined *)Swift::Hasher::_finalize(HVar4);
        uVar8 = -1L << ((ulong)(byte)param_1[0x20] & 0x3f);
        uVar6 = (ulong)HVar4.unknown & (uVar8 ^ 0xffffffffffffffff);
        if ((*(ulong *)(param_1 + (uVar6 >> 6) * 8 + 0x38) >> (uVar6 & 0x3f) & 1) != 0) {
          do {
            if (*(__uint32 *)(*(long *)(param_1 + 0x30) + uVar6 * 4) == _Var3) {
              if ((long)puVar7 < (long)puVar10) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x100a31a58);
                (*pcVar2)();
              }
              if ((long)puVar10 < 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x100a31a5c);
                (*pcVar2)();
              }
              puVar9 = *(undefined1 **)(unaff_x24 + 0x10);
              if ((long)puVar9 < (long)puVar7) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x100a31a60);
                (*pcVar2)();
              }
              if (puVar10 != puVar9) {
                if (puVar9 <= puVar10) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x100a31a70);
                  (*pcVar2)();
                }
                if ((char)(unaff_x24 + (long)puVar10)[0x20] < -0x40) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x100a319cc);
                  (*pcVar2)();
                }
              }
              goto LAB_100a31a14;
            }
            uVar6 = uVar6 + 1 & ~uVar8;
          } while ((*(ulong *)(param_1 + (uVar6 >> 6) * 8 + 0x38) >> (uVar6 & 0x3f) & 1) != 0);
        }
      }
      if ((long)puVar7 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100a31a50);
        (*pcVar2)();
      }
      if (*(undefined1 **)(unaff_x24 + 0x10) <= puVar7) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100a31a54);
        (*pcVar2)();
      }
      bVar1 = (unaff_x24 + (long)puVar7)[0x20];
      if ((char)bVar1 < '\0') {
        if ((bVar1 & 0xe0) == 0xc0) {
          puVar11 = puVar7 + 2;
        }
        else if ((bVar1 & 0xf0) == 0xe0) {
          puVar11 = puVar7 + 3;
          if (SCARRY8((long)puVar7,3)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100a31a74);
            (*pcVar2)();
          }
        }
        else {
          puVar11 = puVar7 + 4;
          if (SCARRY8((long)puVar7,4)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100a31988);
            (*pcVar2)();
          }
        }
      }
      else {
        puVar11 = puVar7 + 1;
      }
      unaff_x20[1] = puVar11;
      puVar7 = puVar11;
    } while (puVar11 != puVar9);
  }
  if ((param_2 & 1) == 0) {
    if ((long)puVar9 < (long)puVar10) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100a31a64);
      (*pcVar2)();
    }
    if ((long)puVar10 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100a31a68);
      (*pcVar2)();
    }
    unaff_x24 = (undefined *)*unaff_x20;
    puVar7 = *(undefined1 **)(unaff_x24 + 0x10);
    if ((long)puVar7 < (long)puVar9) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100a31a6c);
      (*pcVar2)();
    }
    if (puVar10 != puVar7) {
      if (puVar7 <= puVar10) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100a31a78);
        (*pcVar2)();
      }
      if ((char)(unaff_x24 + (long)puVar10)[0x20] < -0x40) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100a31a7c);
        (*pcVar2)();
      }
    }
LAB_100a31a14:
    _swift_bridgeObjectRetain(unaff_x24);
  }
  else {
    unaff_x20[1] = puVar10;
    FUN_1009ff51c();
    _swift_allocError(&DAT_100f29a58,HVar4.unknown,0,0);
    *HVar4.unknown = 0;
    _swift_willThrow();
  }
  return unaff_x24;
}



/* Address: 0x100a31a7c | FUN_100a31a7c */

long FUN_100a31a7c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  if (param_2 == param_4) {
    return 0;
  }
  FUN_100a32fa0(param_2,param_1);
  return param_2;
}



/* Address: 0x100a31aac | FUN_100a31aac */

undefined1 * FUN_100a31aac(undefined8 param_1,ulong param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined1 **ppuVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long extraout_x8;
  ulong uVar5;
  long extraout_x12;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  undefined1 auStack_60 [8];
  undefined1 *local_58;
  
  lVar8 = *(long *)(param_3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar8 + 0x40));
  puVar6 = auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  pcVar9 = *(code **)(lVar8 + 0x10);
  (*pcVar9)((long)puVar6 - extraout_x12,param_1);
  puVar1 = &DAT_100ff55d0;
  FUN_1000f7830(&DAT_100ff55d0,&DAT_100c8ed48);
  ppuVar2 = &local_58;
  _swift_dynamicCast(ppuVar2,(long)puVar6 - extraout_x12,param_3,puVar1,6);
  if (((ulong)ppuVar2 & 1) == 0) {
    (*pcVar9)(puVar6,param_1,param_3);
    Swift::Array<undefined>::_init
              (puVar6,PTR___type_metadata_for_Swift_UInt8_100eadcd0,param_3,
               *(undefined8 *)(param_4 + 8));
    lVar7 = *(long *)(puVar6 + 0x10);
  }
  else {
    lVar7 = *(long *)(local_58 + 0x10);
    puVar6 = local_58;
  }
  if ((param_2 & 1) == 0) {
LAB_100a31bec:
    (**(code **)(lVar8 + 8))(param_1,param_3);
  }
  else {
    puVar3 = (undefined1 *)0x0;
    do {
      if (lVar7 <= (long)puVar3) goto LAB_100a31bec;
      puVar4 = puVar6;
      FUN_100a33088();
      uVar5 = (ulong)puVar3 >> 0x20;
      puVar3 = puVar4;
    } while (uVar5 != 1);
    (**(code **)(lVar8 + 8))(param_1,param_3);
    _swift_bridgeObjectRelease(puVar6);
    puVar6 = (undefined1 *)0x0;
  }
  return puVar6;
}



/* Address: 0x100a31c28 | FUN_100a31c28 */

void FUN_100a31c28(void)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  
  puVar1 = (undefined1 *)unaff_x20[1];
  if (puVar1 == (undefined1 *)unaff_x20[3]) {
    FUN_1009ff51c();
    _swift_allocError(&DAT_100f29a58,puVar1,0,0);
    *puVar1 = 0;
    _swift_willThrow();
  }
  else {
    uVar2 = *unaff_x20;
    FUN_100a32fa0();
    unaff_x20[1] = uVar2;
  }
  return;
}



/* Address: 0x100a31c94 | FUN_100a31c94 */

uint FUN_100a31c94(undefined1 *param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  uint extraout_w8;
  uint uVar4;
  long *unaff_x20;
  long lVar5;
  
  lVar5 = unaff_x20[1];
  if (lVar5 == unaff_x20[3]) {
    FUN_1009ff51c();
    _swift_allocError(&DAT_100f29a58,param_1,0,0);
    *param_1 = 0;
    _swift_willThrow();
    uVar4 = extraout_w8;
  }
  else {
    lVar3 = *unaff_x20;
    lVar2 = lVar5;
    FUN_100a32fa0();
    bVar1 = (int)lVar2 == (int)param_1;
    uVar4 = (uint)bVar1;
    if (!bVar1) {
      lVar3 = lVar5;
    }
    unaff_x20[1] = lVar3;
  }
  return uVar4 & 1;
}



/* Address: 0x100a31d20 | FUN_100a31d20 */

uint FUN_100a31d20(undefined1 *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  uint extraout_w8;
  uint uVar3;
  undefined8 *unaff_x20;
  ulong uVar4;
  
  uVar4 = unaff_x20[1];
  if (uVar4 == unaff_x20[3]) {
    FUN_1009ff51c();
    _swift_allocError(&DAT_100f29a58,param_1,0,0);
    *param_1 = 0;
    _swift_willThrow();
    uVar3 = extraout_w8;
  }
  else {
    uVar2 = *unaff_x20;
    uVar1 = uVar4;
    FUN_100a32fa0();
    unaff_x20[1] = uVar2;
    FUN_1006e3df8();
    if ((uVar1 & 1) == 0) {
      uVar3 = 0;
      unaff_x20[1] = uVar4;
    }
    else {
      uVar3 = 1;
    }
  }
  return uVar3 & 1;
}



/* Address: 0x100a31dbc | FUN_100a31dbc */

uint FUN_100a31dbc(char *param_1,undefined *param_2,void *param_3,long param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 *puVar3;
  long lVar4;
  _StringGuts _Var5;
  void *pvVar6;
  uint extraout_w8;
  uint extraout_w8_00;
  uint uVar7;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  tuple2_conflict1 tVar12;
  
  uVar8 = *(undefined8 *)(unaff_x20 + 8);
  SVar9.bridgeObject = param_2;
  SVar9.str = param_1;
  puVar3 = (undefined1 *)Swift::String::get_count(SVar9);
  if ((long)puVar3 < 1) {
    FUN_1009ff51c();
    _swift_allocError(&DAT_100f29a58,puVar3,0,0);
    *puVar3 = 2;
    _swift_willThrow();
    uVar7 = extraout_w8_00;
  }
  else {
    SVar10.bridgeObject = param_2;
    SVar10.str = param_1;
    lVar4 = Swift::String::get_count(SVar10);
    FUN_100a3431c();
    uVar7 = extraout_w8;
    if (unaff_x21 == 0) {
      if ((long)param_3 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100a31f04);
        (*pcVar1)();
      }
      if (*(void **)(lVar4 + 0x10) < param_3 || (long)*(void **)(lVar4 + 0x10) < param_4) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100a31f08);
        (*pcVar1)();
      }
      if (param_4 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100a31f0c);
        (*pcVar1)();
      }
      pvVar6 = param_3;
      _swift_bridgeObjectRetain();
      SVar11.bridgeObject = pvVar6;
      SVar11.str = (char *)(param_4 - (long)param_3);
      tVar12 = Swift::String::_fromUTF8Repairing((undefined *)((long)param_3 + lVar4 + 0x20),SVar11)
      ;
      _Var5.unknown = tVar12.result.bridgeObject;
      _swift_bridgeObjectRelease(lVar4,_Var5.unknown,tVar12._16_8_);
      if ((tVar12.result.str == param_1) && (_Var5.unknown == param_2)) {
        _swift_bridgeObjectRelease(_Var5.unknown);
        uVar7 = 1;
      }
      else {
        bVar2 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)tVar12.result.str,_Var5,
                           (_StringComparisonResult)(__int8)param_1);
        _swift_bridgeObjectRelease(_Var5.unknown);
        if (bVar2) {
          uVar7 = 1;
        }
        else {
          uVar7 = 0;
          *(undefined8 *)(unaff_x20 + 8) = uVar8;
        }
      }
    }
  }
  return uVar7 & 1;
}



/* Address: 0x100a31f0c | FUN_100a31f0c */

void FUN_100a31f0c(void)

{
  long unaff_x21;
  
  FUN_100a3431c();
  if (unaff_x21 == 0) {
    _swift_bridgeObjectRetain();
  }
  return;
}



/* Address: 0x100a31f54 | FUN_100a31f54 */

long FUN_100a31f54(ulong param_1,long param_2)

{
  byte bVar1;
  code *pcVar2;
  long lVar3;
  
  if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100a31fb8);
    (*pcVar2)();
  }
  if (*(ulong *)(param_2 + 0x10) <= param_1) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100a31fbc);
    (*pcVar2)();
  }
  bVar1 = *(byte *)(param_2 + param_1 + 0x20);
  if (-1 < (char)bVar1) {
    return param_1 + 1;
  }
  if ((bVar1 & 0xe0) == 0xc0) {
    return param_1 + 2;
  }
  if ((bVar1 & 0xf0) == 0xe0) {
    lVar3 = param_1 + 3;
    if (SCARRY8(param_1,3)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100a31fa8);
      (*pcVar2)();
    }
  }
  else {
    lVar3 = param_1 + 4;
    if (SCARRY8(param_1,4)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100a31fc0);
      (*pcVar2)();
    }
  }
  return lVar3;
}



/* Address: 0x100a31fc0 | FUN_100a31fc0 */

long FUN_100a31fc0(code *param_1,undefined8 param_2,ulong param_3)

{
  code cVar1;
  bool bVar2;
  code *pcVar3;
  code *pcVar4;
  code *pcVar5;
  long *unaff_x20;
  code *pcVar6;
  long unaff_x24;
  code *pcVar7;
  
  pcVar6 = (code *)unaff_x20[1];
  pcVar7 = (code *)unaff_x20[3];
  pcVar4 = pcVar6;
  pcVar5 = pcVar6;
  pcVar3 = param_1;
  do {
    if (pcVar5 == pcVar7) {
      if ((param_3 & 1) == 0) {
        if ((long)pcVar4 < (long)pcVar6) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100a32180);
          (*pcVar5)();
        }
        if ((long)pcVar6 < 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100a32184);
          (*pcVar5)();
        }
        unaff_x24 = *unaff_x20;
        pcVar5 = *(code **)(unaff_x24 + 0x10);
        if ((long)pcVar5 < (long)pcVar4) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100a32188);
          (*pcVar5)();
        }
        if (pcVar6 != pcVar5) {
          if (pcVar5 <= pcVar6) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100a32198);
            (*pcVar5)();
          }
          if ((char)pcVar6[unaff_x24 + 0x20] < -0x40) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100a3219c);
            (*pcVar5)();
          }
        }
LAB_100a32138:
        _swift_bridgeObjectRetain(unaff_x24);
      }
      else {
        unaff_x20[1] = (long)pcVar6;
        FUN_1009ff51c();
        _swift_allocError(&DAT_100f29a58,pcVar3,0,0);
        *pcVar3 = (code)0x0;
        _swift_willThrow();
      }
      return unaff_x24;
    }
    unaff_x24 = *unaff_x20;
    pcVar3 = pcVar5;
    FUN_100a32fa0(pcVar5,unaff_x24);
    (*param_1)();
    if (((ulong)pcVar3 & 1) != 0) {
      if ((long)pcVar5 < (long)pcVar6) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100a3218c);
        (*pcVar5)();
      }
      if ((long)pcVar6 < 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100a32190);
        (*pcVar5)();
      }
      pcVar4 = *(code **)(unaff_x24 + 0x10);
      if ((long)pcVar4 < (long)pcVar5) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100a32194);
        (*pcVar5)();
      }
      if (pcVar6 != pcVar4) {
        if (pcVar4 <= pcVar6) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100a321a0);
          (*pcVar5)();
        }
        if ((char)pcVar6[unaff_x24 + 0x20] < -0x40) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100a320c4);
          (*pcVar5)();
        }
      }
      goto LAB_100a32138;
    }
    if ((long)pcVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100a32174);
      (*pcVar5)();
    }
    if (*(code **)(unaff_x24 + 0x10) <= pcVar5) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100a32178);
      (*pcVar5)();
    }
    cVar1 = pcVar5[unaff_x24 + 0x20];
    if ((char)cVar1 < '\0') {
      if (((byte)cVar1 & 0xe0) == 0xc0) {
        pcVar5 = pcVar5 + 2;
      }
      else if (((byte)cVar1 & 0xf0) == 0xe0) {
        bVar2 = SCARRY8((long)pcVar5,3);
        pcVar5 = pcVar5 + 3;
        if (bVar2) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100a3217c);
          (*pcVar5)();
        }
      }
      else {
        bVar2 = SCARRY8((long)pcVar5,4);
        pcVar5 = pcVar5 + 4;
        if (bVar2) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100a3208c);
          (*pcVar5)();
        }
      }
    }
    else {
      pcVar5 = pcVar5 + 1;
    }
    unaff_x20[1] = (long)pcVar5;
    pcVar4 = pcVar7;
  } while( true );
}



/* Address: 0x100a321a0 | FUN_100a321a0 */

long FUN_100a321a0(undefined4 *param_1,ulong param_2)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  undefined4 *puVar4;
  ulong uVar5;
  ulong uVar6;
  long *unaff_x20;
  long unaff_x23;
  ulong uVar7;
  ulong uVar8;
  char local_45;
  undefined4 local_44;
  
  uVar7 = unaff_x20[1];
  uVar8 = unaff_x20[3];
  uVar5 = uVar7;
  uVar6 = uVar7;
  puVar4 = param_1;
  do {
    if (uVar6 == uVar8) {
      if ((param_2 & 1) == 0) {
        if ((long)uVar5 < (long)uVar7) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100a32368);
          (*pcVar2)();
        }
        if ((long)uVar7 < 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100a3236c);
          (*pcVar2)();
        }
        unaff_x23 = *unaff_x20;
        uVar6 = *(ulong *)(unaff_x23 + 0x10);
        if ((long)uVar6 < (long)uVar5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100a32370);
          (*pcVar2)();
        }
        if (uVar7 != uVar6) {
          if (uVar6 <= uVar7) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100a32380);
            (*pcVar2)();
          }
          if (*(char *)(unaff_x23 + uVar7 + 0x20) < -0x40) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100a32384);
            (*pcVar2)();
          }
        }
LAB_100a32324:
        _swift_bridgeObjectRetain(unaff_x23);
      }
      else {
        unaff_x20[1] = uVar7;
        FUN_1009ff51c();
        _swift_allocError(&DAT_100f29a58,puVar4,0,0);
        *(undefined1 *)puVar4 = 0;
        _swift_willThrow();
      }
      return unaff_x23;
    }
    unaff_x23 = *unaff_x20;
    uVar5 = uVar6;
    FUN_100a32fa0(uVar6,unaff_x23);
    local_44 = (undefined4)uVar5;
    puVar4 = &local_44;
    _swift_getAtKeyPath(&local_45,puVar4,param_1);
    if (local_45 == '\x01') {
      if ((long)uVar6 < (long)uVar7) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100a32374);
        (*pcVar2)();
      }
      if ((long)uVar7 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100a32378);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(unaff_x23 + 0x10);
      if ((long)uVar5 < (long)uVar6) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100a3237c);
        (*pcVar2)();
      }
      if (uVar7 != uVar5) {
        if (uVar5 <= uVar7) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100a32388);
          (*pcVar2)();
        }
        if (*(char *)(unaff_x23 + uVar7 + 0x20) < -0x40) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100a322b0);
          (*pcVar2)();
        }
      }
      goto LAB_100a32324;
    }
    if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100a3235c);
      (*pcVar2)();
    }
    if (*(ulong *)(unaff_x23 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100a32360);
      (*pcVar2)();
    }
    bVar1 = *(byte *)(unaff_x23 + uVar6 + 0x20);
    if ((char)bVar1 < '\0') {
      if ((bVar1 & 0xe0) == 0xc0) {
        uVar6 = uVar6 + 2;
      }
      else if ((bVar1 & 0xf0) == 0xe0) {
        bVar3 = SCARRY8(uVar6,3);
        uVar6 = uVar6 + 3;
        if (bVar3) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100a32364);
          (*pcVar2)();
        }
      }
      else {
        bVar3 = SCARRY8(uVar6,4);
        uVar6 = uVar6 + 4;
        if (bVar3) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100a32278);
          (*pcVar2)();
        }
      }
    }
    else {
      uVar6 = uVar6 + 1;
    }
    unaff_x20[1] = uVar6;
    uVar5 = uVar8;
  } while( true );
}


