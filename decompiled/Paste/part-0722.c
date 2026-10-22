/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1007e5a3c | FUN_1007e5a3c */

void FUN_1007e5a3c(undefined8 param_1,long param_2,code *param_3,undefined8 param_4,code *param_5,
                  undefined8 param_6,long param_7)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  ContiguousArray CVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *unaff_x20;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined8 local_88;
  code *pcStack_80;
  undefined8 local_78;
  undefined8 local_70;
  code *local_68;
  
  uVar1 = *(undefined8 *)(param_7 + 0x10);
  lVar2 = *(long *)(param_7 + 0x18);
  lVar9 = *(long *)(lVar2 + -8);
  lVar6 = *(long *)(lVar9 + 0x40);
  uVar3 = *unaff_x20;
  uVar5 = unaff_x20[1];
  uVar8 = *(undefined8 *)(param_7 + 0x20);
  lVar7 = param_2;
  local_88 = param_4;
  pcStack_80 = param_3;
  local_78 = param_1;
  local_70 = param_6;
  local_68 = param_5;
  FUN_1007f9250(param_2,uVar3,uVar5,uVar1,uVar8);
  if (((uint)uVar3 & 0xff) == 1) {
    uVar3 = 0;
    FUN_1007fa688(0,uVar1,uVar8);
    FUN_1007ea1d8(param_2,uVar5,uVar3);
    (*pcStack_80)(auStack_90 + -(lVar6 + 0xfU & 0xfffffffffffffff0));
    CVar4 = Swift::ContiguousArray::typeMetadataAccessor();
    Swift::ContiguousArray::append(auStack_90 + -(lVar6 + 0xfU & 0xfffffffffffffff0),CVar4.unknown);
    lVar7 = *(long *)(unaff_x20[2] + 0x10) + -1;
    Swift::ContiguousArray::_makeMutableAndUnique(CVar4);
    lVar6 = unaff_x20[2];
    FUN_1007e381c(lVar7,lVar6,lVar2);
    FUN_100636dd8(lVar6,lVar2);
    lVar6 = lVar6 + *(long *)(lVar9 + 0x48) * lVar7;
  }
  else {
    CVar4 = Swift::ContiguousArray::typeMetadataAccessor();
    Swift::ContiguousArray::_makeMutableAndUnique(CVar4);
    lVar6 = unaff_x20[2];
    FUN_1007e381c(lVar7,lVar6,lVar2);
    FUN_100636dd8(lVar6,lVar2);
    lVar6 = lVar6 + *(long *)(lVar9 + 0x48) * lVar7;
  }
  (*local_68)(local_78,lVar6);
  FUN_1007e3838(unaff_x20 + 2,lVar2);
  return;
}



/* Address: 0x1007e5bd0 | FUN_1007e5bd0 */

void FUN_1007e5bd0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  _swift_release(*unaff_x20);
  _swift_release(unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Address: 0x1007e5c0c | FUN_1007e5c0c */

void FUN_1007e5c0c(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Address: 0x1007e5c34 | FUN_1007e5c34 */

undefined1  [16] FUN_1007e5c34(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  tuple2_conflict3 tVar5;
  undefined1 auVar6 [16];
  
  puVar1 = (undefined8 *)&DAT_00000038;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    puVar1 = _malloc(0x38);
  }
  else {
    _swift_coroFrameAlloc(0x38,0xc2b2);
  }
  *param_1 = puVar1;
  puVar1[3] = unaff_x20;
  uVar3 = unaff_x20[2];
  uVar2 = unaff_x20[1];
  *puVar1 = *unaff_x20;
  puVar1[2] = uVar3;
  puVar1[1] = uVar2;
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  puVar1[4] = uVar3;
  uVar4 = *(undefined8 *)(param_2 + 0x18);
  puVar1[5] = uVar4;
  uVar2 = 0;
  _swift_getTupleTypeMetadata2(0,uVar3,uVar4,0,0);
  tVar5 = Swift::Array<undefined>::_allocateUninitialized(0,uVar2);
  uVar2 = tVar5._0_8_;
  puVar1[6] = *(undefined8 *)(param_2 + 0x20);
  FUN_1007e050c();
  *unaff_x20 = uVar2;
  unaff_x20[1] = uVar3;
  unaff_x20[2] = uVar4;
  auVar6._8_8_ = puVar1;
  auVar6._0_8_ = FUN_1007e5cfc;
  return auVar6;
}



/* Address: 0x1007e5cfc | FUN_1007e5cfc */

void FUN_1007e5cfc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  param_1 = (undefined8 *)*param_1;
  FUN_1007df414(param_1[3],param_1,param_1[4],param_1[5],param_1[6]);
  uVar1 = *param_1;
  uVar2 = param_1[2];
  _swift_release(param_1[1]);
  _swift_release(uVar2);
  _swift_release(uVar1);
  _free(param_1);
  return;
}



/* Address: 0x1007e5d50 | FUN_1007e5d50 */

void FUN_1007e5d50(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *unaff_x20;
  undefined8 uVar6;
  tuple2_conflict3 tVar7;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar6 = unaff_x20[2];
  uVar4 = *(undefined8 *)(param_4 + 0x10);
  uVar5 = *(undefined8 *)(param_4 + 0x18);
  uVar3 = 0;
  _swift_getTupleTypeMetadata2(0,uVar4,uVar5,0,0);
  tVar7 = Swift::Array<undefined>::_allocateUninitialized(0,uVar3);
  uVar3 = tVar7._0_8_;
  FUN_1007e050c();
  _swift_release(uVar6);
  _swift_release(uVar2);
  _swift_release(uVar1);
  *unaff_x20 = uVar3;
  unaff_x20[1] = uVar4;
  unaff_x20[2] = uVar5;
  FUN_1007df414();
  _swift_release(param_3);
  _swift_release(param_2);
  _swift_release(param_1);
  return;
}



/* Address: 0x1007e5e4c | FUN_1007e5e4c */

void FUN_1007e5e4c(undefined8 param_1,__int64 param_2,uint param_3,undefined8 param_4,
                  ContiguousArray param_5,undefined8 param_6,long param_7)

{
  bool bVar1;
  
  FUN_1007f9250();
  bVar1 = (param_3 & 0xff) != 1;
  if (bVar1) {
    Swift::ContiguousArray::get_subscript(param_2,param_5);
  }
                    /* WARNING: Could not recover jumptable at 0x0001007e5ebc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_7 + -8) + 0x38))(param_1,!bVar1,1,param_7);
  return;
}



/* Address: 0x1007e5ec0 | FUN_1007e5ec0 */

void FUN_1007e5ec0(long param_1,__int64 param_2,long param_3)

{
  long lVar1;
  Optional OVar2;
  undefined *puVar3;
  undefined7 extraout_var;
  long lVar5;
  __int64 at;
  undefined8 uVar6;
  ContiguousArray CVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  code *pcVar14;
  undefined8 *unaff_x20;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long local_a0;
  long local_98;
  long local_90;
  long lVar4;
  
  lVar1 = *(long *)(param_3 + 0x10);
  lVar9 = *(long *)(param_3 + 0x18);
  lVar11 = *(long *)(lVar1 + -8);
  local_a0 = (long)&local_a0 - (*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = *(long *)(lVar9 + -8);
  uVar12 = *(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_98 = local_a0 - uVar12;
  lVar13 = local_98 - uVar12;
  puVar3 = &DAT_100fe6968;
  local_90 = lVar13;
  FUN_1000f8b08(&DAT_100fe6968,0x100c79ec0);
  OVar2 = Swift::Optional::typeMetadataAccessor();
  lVar4 = CONCAT71(extraout_var,OVar2.value);
  lVar5 = 0;
  _swift_getTupleTypeMetadata2(0,puVar3,lVar4,0,0);
  lVar13 = lVar13 - (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar6 = *unaff_x20;
  uVar10 = unaff_x20[1];
  uVar15 = *(undefined8 *)(param_3 + 0x20);
  at = param_2;
  FUN_1007f9250(param_2,uVar6,uVar10,lVar1,uVar15);
  lVar17 = (long)*(int *)(lVar5 + 0x30);
  lVar18 = *(long *)(lVar4 + -8);
  (**(code **)(lVar18 + 0x10))(lVar13 + lVar17,param_1,lVar4);
  lVar5 = lVar13 + lVar17;
  (**(code **)(lVar16 + 0x30))(lVar5,1,lVar9);
  lVar8 = local_90;
  if (((uint)uVar6 & 0xff) == 1) {
    if ((int)lVar5 == 1) {
      (**(code **)(lVar11 + 8))(param_2,lVar1);
      pcVar14 = *(code **)(lVar18 + 8);
      lVar8 = param_1;
      lVar9 = lVar4;
    }
    else {
      (**(code **)(lVar16 + 0x20))(local_90,lVar13 + lVar17,lVar9);
      uVar6 = 0;
      FUN_1007fa688(0,lVar1,uVar15);
      FUN_1007ea1d8(param_2,uVar10,uVar6);
      lVar5 = local_98;
      (**(code **)(lVar16 + 0x10))(local_98,lVar8,lVar9);
      CVar7 = Swift::ContiguousArray::typeMetadataAccessor();
      Swift::ContiguousArray::append(lVar5,CVar7.unknown);
      (**(code **)(lVar11 + 8))(param_2,lVar1);
      (**(code **)(lVar18 + 8))(param_1,lVar4);
      pcVar14 = *(code **)(lVar16 + 8);
    }
  }
  else {
    if ((int)lVar5 != 1) {
      (**(code **)(lVar16 + 0x20))(local_90,lVar13 + lVar17,lVar9);
      CVar7 = Swift::ContiguousArray::typeMetadataAccessor();
      Swift::ContiguousArray::_makeMutableAndUnique(CVar7);
      lVar5 = unaff_x20[2];
      FUN_1007e381c(at,lVar5,lVar9);
      FUN_100636dd8(lVar5,lVar9);
      (**(code **)(lVar16 + 0x28))(lVar5 + *(long *)(lVar16 + 0x48) * at,lVar8,lVar9);
      (**(code **)(lVar11 + 8))(param_2,lVar1);
      (**(code **)(lVar18 + 8))(param_1,lVar4);
      FUN_1007e3838(unaff_x20 + 2,lVar9);
      return;
    }
    uVar6 = 0;
    FUN_1007fa688(0,lVar1,uVar15);
    lVar5 = local_a0;
    FUN_1007f92d0(local_a0,at,uVar10,uVar6);
    pcVar14 = *(code **)(lVar11 + 8);
    (*pcVar14)(lVar5,lVar1);
    CVar7 = Swift::ContiguousArray::typeMetadataAccessor();
    lVar8 = local_90;
    Swift::ContiguousArray::remove(at,CVar7);
    (*pcVar14)(param_2,lVar1);
    (**(code **)(lVar18 + 8))(param_1,lVar4);
    pcVar14 = *(code **)(lVar16 + 8);
  }
  (*pcVar14)(lVar8,lVar9);
  return;
}



/* Address: 0x1007e6238 | FUN_1007e6238 */

undefined1  [16] FUN_1007e6238(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  Optional OVar2;
  undefined8 *puVar3;
  undefined7 extraout_var;
  void *pvVar4;
  void *pvVar5;
  long lVar6;
  undefined8 unaff_x20;
  long lVar7;
  undefined1 auVar8 [16];
  
  puVar1 = PTR__swift_coroFrameAlloc_100eae1a0;
  puVar3 = (undefined8 *)0x50;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    puVar3 = _malloc(0x50);
  }
  else {
    _swift_coroFrameAlloc(0x50,0x6fdb);
  }
  *param_1 = puVar3;
  puVar3[1] = param_3;
  puVar3[2] = unaff_x20;
  *puVar3 = param_2;
  lVar7 = *(long *)(param_3 + 0x18);
  puVar3[3] = lVar7;
  OVar2 = Swift::Optional::typeMetadataAccessor();
  puVar3[4] = CONCAT71(extraout_var,OVar2.value);
  lVar6 = *(long *)(CONCAT71(extraout_var,OVar2.value) + -8);
  puVar3[5] = lVar6;
  pvVar4 = *(void **)(lVar6 + 0x40);
  if (puVar1 == (undefined *)0x0) {
    pvVar4 = _malloc((size_t)pvVar4);
  }
  else {
    _swift_coroFrameAlloc(pvVar4,0x6fdb);
  }
  puVar3[6] = pvVar4;
  (**(code **)(*(long *)(lVar7 + -8) + 0x38))();
  pvVar5 = pvVar4;
  FUN_1007e63b4();
  *(char *)(puVar3 + 9) = (char)pvVar5;
  puVar3[7] = param_2;
  puVar3[8] = param_3;
  auVar8._8_8_ = pvVar4;
  auVar8._0_8_ = FUN_1007e6318;
  return auVar8;
}



/* Address: 0x1007e6318 | FUN_1007e6318 */

void FUN_1007e6318(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  param_1 = (undefined8 *)*param_1;
  uVar1 = param_1[7];
  uVar3 = param_1[8];
  lVar2 = param_1[5];
  pvVar4 = (void *)param_1[6];
  uVar5 = param_1[4];
  uVar8 = *param_1;
  uVar6 = *(undefined1 *)(param_1 + 9);
  uVar7 = 0;
  FUN_1007e85b0(0,*(undefined8 *)(param_1[1] + 0x10),param_1[3],*(undefined8 *)(param_1[1] + 0x20));
  FUN_1007e64f4(uVar8,uVar1,uVar6,uVar3,pvVar4,uVar7);
  (**(code **)(lVar2 + 8))(pvVar4,uVar5);
  _free(pvVar4);
  _free(param_1);
  return;
}



/* Address: 0x1007e63b4 | FUN_1007e63b4 */

undefined8 FUN_1007e63b4(undefined8 param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  Optional OVar2;
  undefined7 extraout_var;
  __int64 _Var3;
  ContiguousArray CVar4;
  undefined8 uVar5;
  undefined8 *unaff_x20;
  long lVar6;
  
  uVar5 = *unaff_x20;
  FUN_1007f9250(param_1,uVar5,unaff_x20[1],*(undefined8 *)(param_3 + 0x10),
                *(undefined8 *)(param_3 + 0x20));
  if (((uint)uVar5 & 0xff) != 1) {
    lVar6 = *(long *)(param_3 + 0x18);
    OVar2 = Swift::Optional::typeMetadataAccessor();
    (**(code **)(*(long *)(CONCAT71(extraout_var,OVar2.value) + -8) + 8))
              (param_2,CONCAT71(extraout_var,OVar2.value));
    _Var3 = Swift::ContiguousArray::get_count((undefined *)unaff_x20[2]);
    if (SBORROW8(_Var3,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1007e64f4);
      (*pcVar1)();
    }
    CVar4 = Swift::ContiguousArray::typeMetadataAccessor();
    _swift_getWitnessTable
              (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__MutableCollection_100ead128,
               CVar4.unknown);
    (extension_Swift)::Swift::MutableCollection::_swapAt();
    _swift_getWitnessTable
              (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__BidirectionalCollection_100ead120
               ,CVar4.unknown);
    _swift_getWitnessTable
              (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__RangeReplaceableCollection_100ead150
               ,CVar4.unknown);
    (extension_Swift)::Swift::RangeReplaceableCollection::_removeLast();
    (**(code **)(*(long *)(lVar6 + -8) + 0x38))(param_2,0,1,lVar6);
  }
  return param_1;
}



/* Address: 0x1007e64f4 | FUN_1007e64f4 */

void FUN_1007e64f4(undefined8 param_1,long param_2,char param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  Optional OVar1;
  undefined *puVar2;
  undefined7 extraout_var;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  ContiguousArray CVar7;
  __int64 _Var8;
  long lVar9;
  ulong uVar10;
  code *pcVar11;
  long lVar12;
  long unaff_x20;
  undefined1 *puVar13;
  long lVar14;
  undefined1 auStack_b0 [8];
  undefined8 local_a8;
  undefined1 *local_a0;
  long local_98;
  long local_90;
  undefined8 local_88;
  long local_80;
  long lVar3;
  
  local_90 = *(long *)(param_6 + 0x10);
  lVar9 = *(long *)(param_6 + 0x18);
  local_98 = *(long *)(local_90 + -8);
  local_a0 = auStack_b0 + -(*(long *)(local_98 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = *(long *)(lVar9 + -8);
  uVar10 = *(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar14 = (long)local_a0 - uVar10;
  puVar13 = (undefined1 *)(lVar14 - uVar10);
  puVar2 = &DAT_100fe6968;
  local_a8 = param_1;
  local_88 = param_4;
  local_80 = param_2;
  FUN_1000f8b08(&DAT_100fe6968,0x100c79ec0);
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lVar3 = CONCAT71(extraout_var,OVar1.value);
  lVar4 = 0;
  _swift_getTupleTypeMetadata2(0,puVar2,lVar3,0,0);
  uVar10 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar4 = (long)*(int *)(lVar4 + 0x30);
  (**(code **)(*(long *)(lVar3 + -8) + 0x10))(puVar13 + (lVar4 - uVar10),param_5,lVar3);
  puVar5 = puVar13 + (lVar4 - uVar10);
  (**(code **)(lVar12 + 0x30))(puVar5,1,lVar9);
  if (param_3 == '\x01') {
    if ((int)puVar5 == 1) {
      return;
    }
    (**(code **)(lVar12 + 0x20))(puVar13,puVar13 + (lVar4 - uVar10),lVar9);
    uVar6 = 0;
    FUN_1007fa688(0,local_90,*(undefined8 *)(param_6 + 0x20));
    FUN_1007ea1d8(local_a8,local_88,uVar6);
    (**(code **)(lVar12 + 0x10))(lVar14,puVar13,lVar9);
    CVar7 = Swift::ContiguousArray::typeMetadataAccessor();
    Swift::ContiguousArray::append(lVar14,CVar7.unknown);
  }
  else {
    if ((int)puVar5 == 1) {
      _Var8 = Swift::ContiguousArray::get_count((ContiguousArray)*(undefined **)(unaff_x20 + 0x10));
      lVar3 = local_80;
      if (local_80 < _Var8) {
        CVar7 = Swift::ContiguousArray::typeMetadataAccessor();
        Swift::ContiguousArray::remove(lVar3,CVar7);
        (**(code **)(lVar12 + 0x10))(lVar14,puVar13,lVar9);
        Swift::ContiguousArray::append(lVar14,CVar7.unknown);
        (**(code **)(lVar12 + 8))(puVar13,lVar9);
      }
      lVar9 = local_90;
      uVar6 = 0;
      FUN_1007fa688(0,local_90,*(undefined8 *)(param_6 + 0x20));
      puVar13 = local_a0;
      FUN_1007f92d0(local_a0,lVar3,local_88,uVar6);
      pcVar11 = *(code **)(local_98 + 8);
      goto LAB_1007e67dc;
    }
    (**(code **)(lVar12 + 0x20))(puVar13,puVar13 + (lVar4 - uVar10),lVar9);
    (**(code **)(lVar12 + 0x10))(lVar14,puVar13,lVar9);
    CVar7 = Swift::ContiguousArray::typeMetadataAccessor();
    Swift::ContiguousArray::append(lVar14,CVar7.unknown);
    _Var8 = Swift::ContiguousArray::get_count((ContiguousArray)*(undefined **)(unaff_x20 + 0x10));
    if (SBORROW8(_Var8,1)) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x1007e6804);
      (*pcVar11)();
    }
    _swift_getWitnessTable
              (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__MutableCollection_100ead128,
               CVar7.unknown);
    (extension_Swift)::Swift::MutableCollection::_swapAt();
  }
  pcVar11 = *(code **)(lVar12 + 8);
LAB_1007e67dc:
  (*pcVar11)(puVar13,lVar9);
  return;
}



/* Address: 0x1007e6804 | FUN_1007e6804 */

void FUN_1007e6804(undefined8 param_1,__int64 param_2,code *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,ContiguousArray param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  FUN_1007f9250(param_2,param_5,param_6,param_8,param_10);
  if (((uint)param_5 & 0xff) == 1) {
    (*param_3)(param_1);
    return;
  }
  Swift::ContiguousArray::get_subscript(param_2,param_7);
  return;
}



/* Address: 0x1007e6890 | FUN_1007e6890 */

undefined1  [16]
FUN_1007e6890(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  undefined *puVar1;
  long *plVar2;
  void *pvVar3;
  void *pvVar4;
  long unaff_x20;
  long lVar5;
  void *pvVar6;
  long lVar7;
  undefined1 auVar8 [16];
  
  puVar1 = PTR__swift_coroFrameAlloc_100eae1a0;
  plVar2 = (long *)&DAT_00000038;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    plVar2 = _malloc(0x38);
  }
  else {
    _swift_coroFrameAlloc(0x38,0x4294);
  }
  *param_1 = plVar2;
  *plVar2 = param_5;
  plVar2[1] = unaff_x20;
  lVar5 = *(long *)(param_5 + 0x18);
  plVar2[2] = lVar5;
  lVar7 = *(long *)(lVar5 + -8);
  plVar2[3] = lVar7;
  pvVar6 = *(void **)(lVar7 + 0x40);
  if (puVar1 == (undefined *)0x0) {
    pvVar3 = _malloc((size_t)pvVar6);
    plVar2[4] = (long)pvVar3;
    pvVar6 = _malloc((size_t)pvVar6);
  }
  else {
    pvVar3 = pvVar6;
    _swift_coroFrameAlloc(pvVar6,0x4294);
    plVar2[4] = (long)pvVar3;
    _swift_coroFrameAlloc(pvVar6,0x4294);
  }
  plVar2[5] = (long)pvVar6;
  pvVar4 = pvVar3;
  FUN_1007e6a28(pvVar3,param_2,param_3,param_4,param_5);
  plVar2[6] = (long)pvVar4;
  (**(code **)(lVar7 + 0x20))(pvVar6,pvVar3,lVar5);
  auVar8._8_8_ = pvVar6;
  auVar8._0_8_ = FUN_1007e699c;
  return auVar8;
}



/* Address: 0x1007e699c | FUN_1007e699c */

void FUN_1007e699c(undefined8 *param_1)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  
  plVar7 = (long *)*param_1;
  pvVar1 = (void *)plVar7[5];
  lVar3 = plVar7[6];
  lVar2 = plVar7[3];
  pvVar4 = (void *)plVar7[4];
  lVar5 = plVar7[2];
  uVar6 = 0;
  FUN_1007e85b0(0,*(undefined8 *)(*plVar7 + 0x10),lVar5,*(undefined8 *)(*plVar7 + 0x20));
  FUN_1007e6c58(lVar3,pvVar1,uVar6);
  (**(code **)(lVar2 + 8))(pvVar1,lVar5);
  _free(pvVar1);
  _free(pvVar4);
  _free(plVar7);
  return;
}



/* Address: 0x1007e6a28 | FUN_1007e6a28 */

long FUN_1007e6a28(undefined8 param_1,ulong param_2,code *param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ContiguousArray CVar4;
  __int64 start;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined *local_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(param_5 + 0x18);
  lVar8 = *(long *)(lVar1 + -8);
  lVar7 = (long)&local_70 - (*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  FUN_1007fa688(0,*(undefined8 *)(param_5 + 0x10),*(undefined8 *)(param_5 + 0x20));
  FUN_1007ea300();
  if ((param_2 & 1) != 0) {
    (*param_3)(lVar7);
    CVar4 = Swift::ContiguousArray::typeMetadataAccessor();
    Swift::ContiguousArray::append(lVar7,CVar4.unknown);
  }
  CVar4 = Swift::ContiguousArray::typeMetadataAccessor();
  Swift::ContiguousArray::_makeMutableAndUnique(CVar4);
  start = *(long *)(unaff_x20 + 0x10);
  uVar6 = *(undefined8 *)(start + 0x10);
  FUN_100636dd8(start,lVar1);
  uVar5 = uVar6;
  local_70 = (undefined *)Swift::UnsafeMutableBufferPointer::_init(start);
  uStack_68 = uVar5;
  if (local_70 != (undefined *)0x0) {
    Swift::UnsafeMutablePointer::move
              ((UnsafeMutablePointer)(local_70 + *(long *)(lVar8 + 0x48) * lVar3));
    FUN_1007e37e8(&local_70,start,uVar6,unaff_x20 + 0x10,lVar1,lVar1,
                  PTR___type_metadata_for_Swift_Never_100eadc38,
                  PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
    return lVar3;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1007e6b6c);
  (*pcVar2)();
}



/* Address: 0x1007e6b6c | FUN_1007e6b6c */

void FUN_1007e6b6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  code *pcVar6;
  
  lVar3 = *(long *)(param_5 + 0x18);
  lVar5 = *(long *)(lVar3 + -8);
  puVar4 = &stack0xffffffffffffffa0 + -(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar1 = puVar4;
  FUN_1007e6a28(puVar4);
  pcVar6 = *(code **)(lVar5 + 8);
  (*pcVar6)(puVar4,lVar3);
  (**(code **)(lVar5 + 0x10))(puVar4,param_1,lVar3);
  lVar5 = *(long *)(param_5 + 0x10);
  uVar2 = 0;
  FUN_1007e85b0(0,lVar5,lVar3,*(undefined8 *)(param_5 + 0x20));
  FUN_1007e6c58(puVar1,puVar4,uVar2);
  (**(code **)(*(long *)(lVar5 + -8) + 8))(param_2,lVar5);
  (*pcVar6)(param_1,lVar3);
  (*pcVar6)(puVar4,lVar3);
  return;
}



/* Address: 0x1007e6c58 | FUN_1007e6c58 */

void FUN_1007e6c58(undefined8 param_1,undefined8 param_2,long param_3)

{
  ContiguousArray CVar1;
  __int64 start;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *local_60;
  undefined8 uStack_58;
  
  uVar4 = *(undefined8 *)(param_3 + 0x18);
  CVar1 = Swift::ContiguousArray::typeMetadataAccessor();
  Swift::ContiguousArray::_makeMutableAndUnique(CVar1);
  start = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(start + 0x10);
  FUN_100636dd8(start,uVar4);
  uVar2 = uVar3;
  local_60 = (undefined *)Swift::UnsafeMutableBufferPointer::_init(start);
  uStack_58 = uVar2;
  FUN_1007e6d30(&local_60,param_1,param_2,*(undefined8 *)(param_3 + 0x10),uVar4,
                *(undefined8 *)(param_3 + 0x20));
  FUN_1007e37e8(&local_60,start,uVar3,unaff_x20 + 0x10,uVar4,
                PTR___type_metadata_for____100eae0c8 + 8,
                PTR___type_metadata_for_Swift_Never_100eadc38,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  return;
}



/* Address: 0x1007e6d30 | FUN_1007e6d30 */

void FUN_1007e6d30(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar2 = *(long *)(param_5 + -8);
  lVar3 = *(long *)(lVar2 + 0x40);
  lVar4 = *param_1;
  if (lVar4 != 0) {
    lVar5 = *(long *)(lVar2 + 0x48);
    (**(code **)(lVar2 + 0x10))
              (&stack0xffffffffffffffd0 + -(lVar3 + 0xfU & 0xfffffffffffffff0),param_3,param_5);
    FUN_1006331c4(&stack0xffffffffffffffd0 + -(lVar3 + 0xfU & 0xfffffffffffffff0),
                  lVar4 + lVar5 * param_2,param_5);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1007e6db4);
  (*pcVar1)();
}



/* Address: 0x1007e6db4 | FUN_1007e6db4 */

void FUN_1007e6db4(undefined8 param_1,undefined8 param_2,__int64 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  __int64 _Var3;
  undefined8 uVar4;
  ContiguousArray CVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *unaff_x20;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  
  uVar1 = *(undefined8 *)(param_4 + 0x10);
  lVar2 = *(long *)(param_4 + 0x18);
  lVar10 = *(long *)(lVar2 + -8);
  lVar7 = *(long *)(lVar10 + 0x40);
  uVar4 = *unaff_x20;
  uVar6 = unaff_x20[1];
  uVar9 = *(undefined8 *)(param_4 + 0x20);
  _Var3 = param_3;
  FUN_1007f9250(param_3,uVar4,uVar6,uVar1,uVar9);
  if (((uint)uVar4 & 0xff) == 1) {
    uVar4 = 0;
    FUN_1007fa688(0,uVar1,uVar9);
    FUN_1007ea1d8(param_3,uVar6,uVar4);
    (**(code **)(lVar10 + 0x10))
              (&stack0xffffffffffffffa0 + -(lVar7 + 0xfU & 0xfffffffffffffff0),param_2,lVar2);
    CVar5 = Swift::ContiguousArray::typeMetadataAccessor();
    Swift::ContiguousArray::append
              (&stack0xffffffffffffffa0 + -(lVar7 + 0xfU & 0xfffffffffffffff0),CVar5.unknown);
    (**(code **)(lVar10 + 0x38))(param_1,1,1,lVar2);
    return;
  }
  plVar8 = unaff_x20 + 2;
  Swift::ContiguousArray::get_subscript(_Var3,(undefined *)*plVar8);
  CVar5 = Swift::ContiguousArray::typeMetadataAccessor();
  Swift::ContiguousArray::_makeMutableAndUnique(CVar5);
  lVar7 = *plVar8;
  FUN_1007e381c(_Var3,lVar7,lVar2);
  FUN_100636dd8(lVar7,lVar2);
  (**(code **)(lVar10 + 0x18))(lVar7 + *(long *)(lVar10 + 0x48) * _Var3,param_2,lVar2);
  FUN_1007e3838(plVar8,lVar2);
                    /* WARNING: Could not recover jumptable at 0x0001007e6f48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar10 + 0x38))(param_1,0,1,lVar2);
  return;
}



/* Address: 0x1007e6f4c | FUN_1007e6f4c */

__int64 FUN_1007e6f4c(undefined8 param_1,undefined8 param_2,ulong param_3,__int64 param_4,
                     long param_5)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  ContiguousArray CVar4;
  long lVar5;
  code *pcVar6;
  long unaff_x20;
  long *plVar7;
  long lVar8;
  
  lVar2 = *(long *)(param_5 + 0x18);
  lVar8 = *(long *)(lVar2 + -8);
  lVar5 = *(long *)(lVar8 + 0x40);
  uVar3 = 0;
  FUN_1007fa688(0,*(undefined8 *)(param_5 + 0x10),*(undefined8 *)(param_5 + 0x20));
  FUN_1007ea568(param_3,param_4,uVar3);
  bVar1 = (param_3 & 1) == 0;
  if (bVar1) {
    plVar7 = (long *)(unaff_x20 + 0x10);
    Swift::ContiguousArray::get_subscript(param_4,(undefined *)*plVar7);
    CVar4 = Swift::ContiguousArray::typeMetadataAccessor();
    Swift::ContiguousArray::_makeMutableAndUnique(CVar4);
    lVar5 = *plVar7;
    FUN_1007e381c(param_4,lVar5,lVar2);
    FUN_100636dd8(lVar5,lVar2);
    (**(code **)(lVar8 + 0x18))(lVar5 + *(long *)(lVar8 + 0x48) * param_4,param_2,lVar2);
    FUN_1007e3838(plVar7,lVar2);
    pcVar6 = *(code **)(lVar8 + 0x38);
  }
  else {
    (**(code **)(lVar8 + 0x10))
              (&stack0xffffffffffffffb0 + -(lVar5 + 0xfU & 0xfffffffffffffff0),param_2,lVar2);
    CVar4 = Swift::ContiguousArray::typeMetadataAccessor();
    Swift::ContiguousArray::insert
              (&stack0xffffffffffffffb0 + -(lVar5 + 0xfU & 0xfffffffffffffff0),param_4,CVar4.unknown
              );
    pcVar6 = *(code **)(lVar8 + 0x38);
  }
  (*pcVar6)(param_1,!bVar1,1,lVar2);
  return param_4;
}



/* Address: 0x1007e709c | FUN_1007e709c */

void FUN_1007e709c(undefined8 param_1,long param_2,code *param_3,undefined8 param_4,long param_5,
                  code *param_6,undefined8 param_7,long param_8)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ContiguousArray CVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  long lVar7;
  undefined8 uVar8;
  undefined8 local_90;
  code *pcStack_88;
  long local_80;
  undefined8 local_78;
  undefined8 local_70;
  code *local_68;
  
  uVar1 = *(undefined8 *)(param_8 + 0x10);
  lVar2 = *(long *)(param_8 + 0x18);
  local_80 = *(long *)(lVar2 + -8);
  lVar7 = (long)&local_90 - (*(long *)(local_80 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar4 = *unaff_x20;
  uVar6 = unaff_x20[1];
  uVar8 = *(undefined8 *)(param_8 + 0x20);
  lVar3 = param_2;
  local_90 = param_4;
  pcStack_88 = param_3;
  local_78 = param_1;
  local_70 = param_7;
  local_68 = param_6;
  FUN_1007f9250(param_2,uVar4,uVar6,uVar1,uVar8);
  if (((uint)uVar4 & 0xff) == 1) {
    uVar4 = 0;
    FUN_1007fa688(0,uVar1,uVar8);
    FUN_1007ea5d8(param_2,param_5,uVar6,uVar4);
    (*pcStack_88)(lVar7);
    CVar5 = Swift::ContiguousArray::typeMetadataAccessor();
    Swift::ContiguousArray::insert(lVar7,param_5,CVar5.unknown);
    Swift::ContiguousArray::_makeMutableAndUnique(CVar5);
    lVar7 = unaff_x20[2];
    FUN_1007e381c(param_5,lVar7,lVar2);
    FUN_100636dd8(lVar7,lVar2);
    lVar7 = lVar7 + *(long *)(local_80 + 0x48) * param_5;
  }
  else {
    CVar5 = Swift::ContiguousArray::typeMetadataAccessor();
    Swift::ContiguousArray::_makeMutableAndUnique(CVar5);
    lVar7 = unaff_x20[2];
    FUN_1007e381c(lVar3,lVar7,lVar2);
    FUN_100636dd8(lVar7,lVar2);
    lVar7 = lVar7 + *(long *)(local_80 + 0x48) * lVar3;
  }
  (*local_68)(local_78,lVar7);
  FUN_1007e3838(unaff_x20 + 2,lVar2);
  return;
}



/* Address: 0x1007e723c | FUN_1007e723c */

void FUN_1007e723c(undefined8 param_1,__int64 param_2,long param_3)

{
  undefined8 uVar1;
  ContiguousArray CVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *unaff_x20;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar5 = *(long *)(param_3 + 0x10);
  lVar7 = *(long *)(lVar5 + -8);
  lVar4 = *(long *)(lVar7 + 0x40);
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar6 = *(undefined8 *)(param_3 + 0x20);
  FUN_1007f9250(param_2,uVar1,uVar3,lVar5,uVar6);
  if (((uint)uVar1 & 0xff) == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001007e72d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(*(long *)(param_3 + 0x18) + -8) + 0x38))(param_1,1,1);
    return;
  }
  uVar1 = 0;
  FUN_1007fa688(0,lVar5,uVar6);
  FUN_1007f92d0(&stack0xffffffffffffffa0 + -(lVar4 + 0xfU & 0xfffffffffffffff0),param_2,uVar3,uVar1)
  ;
  (**(code **)(lVar7 + 8))(&stack0xffffffffffffffa0 + -(lVar4 + 0xfU & 0xfffffffffffffff0),lVar5);
  lVar4 = *(long *)(param_3 + 0x18);
  CVar2 = Swift::ContiguousArray::typeMetadataAccessor();
  Swift::ContiguousArray::remove(param_2,CVar2);
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))(param_1,0,1,lVar4);
  return;
}



/* Address: 0x1007e7374 | FUN_1007e7374 */

void FUN_1007e7374(undefined8 param_1,code *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  long unaff_x21;
  long lVar2;
  
  lVar2 = *(long *)(param_6 + -8);
  lVar1 = *(long *)(lVar2 + 0x40);
  (*param_2)(&stack0xffffffffffffffc0 + -(lVar1 + 0xfU & 0xfffffffffffffff0),param_1,param_4);
  if (unaff_x21 == 0) {
    (**(code **)(lVar2 + 8))(param_1,param_6);
    (**(code **)(lVar2 + 0x20))
              (param_1,&stack0xffffffffffffffc0 + -(lVar1 + 0xfU & 0xfffffffffffffff0),param_6);
  }
  return;
}



/* Address: 0x1007e7408 | FUN_1007e7408 */

void FUN_1007e7408(void)

{
  FUN_1007e7470();
  return;
}



/* Address: 0x1007e743c | FUN_1007e743c */

void FUN_1007e743c(void)

{
  FUN_1007e7470();
  return;
}



/* Address: 0x1007e7470 | FUN_1007e7470 */

void FUN_1007e7470(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined8 param_10,undefined8 param_11,code *param_12)

{
  undefined8 uVar1;
  long unaff_x21;
  
  uVar1 = 0;
  FUN_1007e85b0(0,param_7,param_8,param_10);
  _swift_retain(param_4);
  _swift_retain(param_5);
  _swift_retain(param_6);
  (*param_12)(param_1,param_2,param_3,uVar1,param_9,param_11);
  if (unaff_x21 == 0) {
    (**(code **)(*(long *)(param_9 + -8) + 8))(param_1,param_9);
    _swift_release(param_6);
    _swift_release(param_5);
    _swift_release(param_4);
  }
  else {
    _swift_release(param_6);
    _swift_release(param_5);
    _swift_release(param_4);
    (**(code **)(*(long *)(param_9 + -8) + 8))(param_1,param_9);
    _swift_release(param_4);
    _swift_release(param_5);
    _swift_release(param_6);
  }
  return;
}



/* Address: 0x1007e75b0 | FUN_1007e75b0 */

long FUN_1007e75b0(code *param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  code *param_6,long param_7,undefined8 param_8)

{
  int iVar1;
  Optional OVar2;
  long lVar3;
  undefined7 extraout_var;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ContiguousArray CVar7;
  code *pcVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long unaff_x21;
  code *pcVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  code *pcVar16;
  tuple2_conflict3 tVar17;
  long local_120;
  long local_118;
  undefined8 local_110;
  undefined8 local_108;
  long local_100;
  undefined8 local_f8;
  code *local_f0;
  long local_e8;
  code *local_e0;
  undefined8 local_d8;
  code *local_d0;
  long lStack_c8;
  ulong local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  
  lVar3 = 0;
  local_d0 = param_1;
  lStack_c8 = param_2;
  _swift_getTupleTypeMetadata2(0,param_6,param_7,"key value ",0);
  lVar13 = *(long *)(lVar3 + -8);
  uVar10 = *(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_100 = (long)&local_120 - uVar10;
  local_c0 = local_100 - uVar10;
  lVar11 = local_c0 - uVar10;
  local_b0 = lVar11;
  OVar2 = Swift::Optional::typeMetadataAccessor();
  lVar11 = lVar11 - (*(long *)(*(long *)(CONCAT71(extraout_var,OVar2.value) + -8) + 0x40) + 0xfU &
                    0xfffffffffffffff0);
  uVar4 = 0;
  _swift_getTupleTypeMetadata2(0,param_6,param_7,0,0);
  tVar17 = Swift::Array<undefined>::_allocateUninitialized(0,uVar4);
  lVar5 = tVar17._0_8_;
  pcVar8 = param_6;
  lVar9 = param_7;
  FUN_1007e050c();
  uVar4 = 0;
  local_120 = lVar9;
  local_118 = param_7;
  local_f8 = param_8;
  local_f0 = pcVar8;
  local_e8 = lVar5;
  FUN_1007e4458(0,param_6,param_7,param_8);
  _swift_retain(param_3);
  local_108 = param_4;
  _swift_retain(param_4);
  local_110 = param_5;
  _swift_retain(param_5);
  local_d8 = uVar4;
  FUN_1007e40f0(lVar11,uVar4);
  local_e0 = *(code **)(lVar13 + 0x30);
  lVar14 = lVar11;
  local_b8 = lVar3;
  local_a8 = lVar13;
  (*local_e0)(lVar11,1,lVar3);
  lVar3 = local_118;
  lVar13 = local_e8;
  if ((int)lVar14 != 1) {
    local_e8 = *(long *)(param_6 + -8);
    local_f0 = *(code **)(local_e8 + 0x20);
    lVar14 = local_b8;
    local_120 = param_3;
    do {
      lVar13 = local_b0;
      uVar10 = local_c0;
      iVar1 = *(int *)(lVar14 + 0x30);
      (*local_f0)(local_b0,lVar11,param_6);
      lVar15 = *(long *)(lVar3 + -8);
      (**(code **)(lVar15 + 0x20))(lVar13 + iVar1,lVar11 + iVar1,lVar3);
      pcVar12 = *(code **)(local_a8 + 0x10);
      (*pcVar12)(uVar10,lVar13,lVar14);
      lVar13 = lStack_c8;
      lVar14 = (long)*(int *)(lVar14 + 0x30);
      uVar6 = uVar10;
      (*local_d0)(uVar10,uVar10 + lVar14);
      if (unaff_x21 != 0) {
        (**(code **)(local_a8 + 8))(local_b0,local_b8);
        _swift_release(local_110);
        _swift_release(local_108);
        _swift_release(local_120);
        _swift_release(lVar9);
        _swift_release(lVar5);
        _swift_release(pcVar8);
        (**(code **)(lVar15 + 8))(uVar10 + lVar14,lVar3);
        (**(code **)(local_e8 + 8))(uVar10,param_6);
        return lVar13;
      }
      (**(code **)(lVar15 + 8))(uVar10 + lVar14,lVar3);
      pcVar16 = *(code **)(local_e8 + 8);
      (*pcVar16)(uVar10,param_6);
      lVar14 = local_b8;
      if ((uVar6 & 1) == 0) {
        (**(code **)(local_a8 + 8))(local_b0,local_b8);
      }
      else {
        uVar4 = 0;
        FUN_1007fa688(0,param_6,local_f8);
        lVar15 = local_b0;
        FUN_1007ea370(local_b0,uVar4);
        lVar14 = local_b8;
        lVar13 = local_100;
        (*pcVar12)(local_100,lVar15,local_b8);
        iVar1 = *(int *)(lVar14 + 0x30);
        CVar7 = Swift::ContiguousArray::typeMetadataAccessor();
        Swift::ContiguousArray::append(lVar13 + iVar1,CVar7.unknown);
        (**(code **)(local_a8 + 8))(lVar15,lVar14);
        (*pcVar16)(lVar13,param_6);
      }
      FUN_1007e40f0(lVar11,local_d8);
      lVar15 = lVar11;
      (*local_e0)(lVar11,1,lVar14);
      lVar13 = lVar5;
      param_3 = local_120;
    } while ((int)lVar15 != 1);
  }
  _swift_release(local_110);
  _swift_release(local_108);
  _swift_release(param_3);
  return lVar13;
}



/* Address: 0x1007e79cc | FUN_1007e79cc */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001007e7afc */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined1  [16]
FUN_1007e79cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  ContiguousArray CVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  long unaff_x21;
  undefined1 auVar6 [16];
  undefined1 local_a8 [8];
  code *local_a0 [2];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_58;
  
  uStack_78 = param_9;
  local_90 = param_6;
  uStack_88 = param_7;
  local_80 = param_8;
  local_70 = param_1;
  uStack_68 = param_2;
  local_58 = param_5;
  CVar1 = Swift::ContiguousArray::typeMetadataAccessor();
  _swift_retain(param_3);
  _swift_retain(param_4);
  _swift_retain(param_5);
  puVar2 = &DAT_100fe6850;
  FUN_1000f7830(&DAT_100fe6850,0x100c79a70);
  puVar3 = PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__Collection_100ead148;
  _swift_getWitnessTable
            (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__Collection_100ead148,CVar1.unknown
            );
  pcVar4 = FUN_1007e85bc;
  FUN_1005f45bc(FUN_1007e85bc,local_a0,CVar1.unknown,param_8,puVar2,puVar3,
                PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90,local_a8);
  if (unaff_x21 == 0) {
    _swift_release(param_5);
    uVar5 = 0;
    local_a0[0] = pcVar4;
    Swift::Array<undefined>::typeMetadataAccessor();
    puVar2 = PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530;
    _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530,uVar5);
    Swift::ContiguousArray::_init(puVar2,param_8,uVar5,puVar2);
  }
  else {
    _swift_release(param_4);
    _swift_release(param_3);
    _swift_release(param_5);
  }
  auVar6._8_8_ = param_4;
  auVar6._0_8_ = param_3;
  return auVar6;
}



/* Address: 0x1007e7b2c | FUN_1007e7b2c */

void FUN_1007e7b2c(code *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7,long param_8,undefined8 param_9)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  Optional OVar5;
  undefined7 extraout_var;
  long lVar6;
  undefined7 extraout_var_00;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ContiguousArray CVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long unaff_x21;
  long lVar15;
  tuple2_conflict3 tVar16;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  long local_138;
  long local_130;
  long local_128;
  undefined8 local_120;
  code *local_118;
  long local_110;
  long local_108;
  long lStack_100;
  undefined8 local_f8;
  long local_f0;
  long local_e8;
  undefined8 local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  long lStack_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  long local_70;
  
  local_f8 = param_9;
  local_150 = param_5;
  local_148 = param_4;
  local_140 = param_3;
  OVar5 = Swift::Optional::typeMetadataAccessor();
  lStack_100 = CONCAT71(extraout_var,OVar5.value);
  local_108 = *(long *)(lStack_100 + -8);
  local_e8 = (long)&local_150 - (*(long *)(local_108 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_f0 = *(long *)(param_8 + -8);
  uVar13 = *(long *)(local_f0 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_110 = local_e8 - uVar13;
  local_128 = local_110 - uVar13;
  lVar15 = *(long *)(param_7 + -8);
  local_a8 = local_128 - (*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_b0 = *(long *)(param_6 + -8);
  lVar14 = local_a8 - (*(long *)(local_b0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0xff;
  local_b8 = lVar14;
  local_a0 = param_6;
  _swift_getTupleTypeMetadata2(0xff,param_6,param_7,"key value ",0);
  OVar5 = Swift::Optional::typeMetadataAccessor();
  lStack_c0 = CONCAT71(extraout_var_00,OVar5.value);
  local_c8 = *(long *)(lStack_c0 + -8);
  uVar13 = *(long *)(local_c8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_d0 = lVar14 - uVar13;
  local_d8 = local_d0 - uVar13;
  uVar7 = 0;
  _swift_getTupleTypeMetadata2(0,param_6,param_8,0,0);
  tVar16 = Swift::Array<undefined>::_allocateUninitialized(0,uVar7);
  uVar8 = tVar16._0_8_;
  lVar14 = param_8;
  FUN_1007e050c();
  uVar2 = local_148;
  uVar7 = local_150;
  local_98 = local_140;
  uStack_90 = local_148;
  local_88 = local_150;
  uStack_80 = 0;
  uVar9 = 0;
  local_78 = uVar8;
  local_70 = param_6;
  FUN_1007e4458(0,local_a0,param_7,local_f8);
  local_e0 = uVar9;
  _swift_retain(local_140);
  _swift_retain(uVar2);
  _swift_retain(uVar7);
  local_138 = lVar6;
  local_130 = lVar15;
  local_120 = param_2;
  local_118 = param_1;
  while( true ) {
    lVar11 = local_d0;
    FUN_1007e40f0(local_d0,local_e0);
    lVar4 = local_d8;
    (**(code **)(local_c8 + 0x20))(local_d8,lVar11,lStack_c0);
    lVar11 = lVar4;
    (**(code **)(*(long *)(lVar6 + -8) + 0x30))(lVar4,1,lVar6);
    if ((int)lVar11 == 1) {
      _swift_release(local_150);
      _swift_release(local_148);
      _swift_release(local_140);
      return;
    }
    iVar1 = *(int *)(lVar6 + 0x30);
    (**(code **)(local_b0 + 0x20))(local_b8,lVar4,local_a0);
    lVar3 = local_a8;
    (**(code **)(lVar15 + 0x20))(local_a8,lVar4 + iVar1,param_7);
    lVar11 = local_e8;
    (*param_1)(local_e8,lVar3);
    lVar4 = local_f0;
    if (unaff_x21 != 0) break;
    lVar12 = lVar11;
    (**(code **)(local_f0 + 0x30))(lVar11,1,param_8);
    lVar3 = local_128;
    if ((int)lVar12 == 1) {
      (**(code **)(lVar15 + 8))(local_a8,param_7);
      (**(code **)(local_b0 + 8))(local_b8,local_a0);
      (**(code **)(local_108 + 8))(lVar11,lStack_100);
    }
    else {
      (**(code **)(lVar4 + 0x20))(local_128,lVar11,param_8);
      lVar12 = local_a0;
      uVar7 = 0;
      FUN_1007fa688(0,local_a0,local_f8);
      lVar11 = local_b8;
      FUN_1007ea370(local_b8,uVar7);
      lVar6 = local_110;
      (**(code **)(lVar4 + 0x10))(local_110,lVar3,param_8);
      CVar10 = Swift::ContiguousArray::typeMetadataAccessor();
      Swift::ContiguousArray::append(lVar6,CVar10.unknown);
      lVar15 = local_130;
      (**(code **)(lVar4 + 8))(lVar3,param_8);
      (**(code **)(lVar15 + 8))(local_a8,param_7);
      param_1 = local_118;
      lVar6 = local_138;
      (**(code **)(local_b0 + 8))(lVar11,lVar12);
    }
  }
  (**(code **)(lVar15 + 8))(local_a8,param_7);
  (**(code **)(local_b0 + 8))(local_b8,local_a0);
  _swift_release(local_150);
  _swift_release(local_148);
  _swift_release(local_140);
  _swift_release(lVar14);
  _swift_release(local_78);
  _swift_release(local_70);
  return;
}



/* Address: 0x1007e7fc4 | FUN_1007e7fc4 */

void FUN_1007e7fc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  int iVar2;
  undefined1 *puVar3;
  long lVar4;
  Optional OVar5;
  long lVar6;
  undefined7 extraout_var;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ContiguousArray CVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 *unaff_x20;
  long lVar17;
  long unaff_x21;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  undefined8 auStack_110 [2];
  undefined1 auStack_100 [8];
  long local_f8;
  long local_f0;
  undefined1 *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  long local_d0;
  undefined8 local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  
  local_b8 = *(long *)(param_4 + 0x10);
  lVar1 = *(long *)(param_4 + 0x18);
  local_f8 = *(long *)(lVar1 + -8);
  uVar12 = *(long *)(local_f8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_e8 = auStack_100 + -uVar12;
  lVar19 = (long)local_e8 - uVar12;
  lVar22 = *(long *)(local_b8 + -8);
  lVar13 = lVar19 - (*(long *)(lVar22 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0xff;
  local_e0 = param_2;
  uStack_d8 = param_3;
  local_c0 = lVar13;
  local_b0 = param_4;
  _swift_getTupleTypeMetadata2(0xff,local_b8,lVar1,"key value ",0);
  OVar5 = Swift::Optional::typeMetadataAccessor();
  lVar14 = *(long *)(CONCAT71(extraout_var,OVar5.value) + -8);
  uVar12 = *(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar13 = lVar13 - uVar12;
  lVar15 = lVar13 - uVar12;
  lVar17 = *(long *)(param_5 + -8);
  lVar18 = lVar15 - (*(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_6,param_5,
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_type_descriptor_for_Swift_Sequence_Iterator_100eabd18);
  local_f0 = *(long *)(lVar7 + -8);
  lVar21 = lVar18 - (*(long *)(local_f0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar17 + 0x10))(lVar18,param_1,param_5);
  lVar17 = local_f8;
  Swift::Sequence::_makeIterator();
  lVar18 = local_c0;
  local_d0 = param_5;
  local_c8 = param_6;
  _swift_getAssociatedConformanceWitness
            (param_6,param_5,lVar7,
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_conformance_descriptor_for_Swift_Sequence_Swift_Sequence_Iterator__Swift_IteratorProtocol_100eac2d8
            );
  while( true ) {
    while( true ) {
      Swift::IteratorProtocol::_next();
      (**(code **)(lVar14 + 0x20))(lVar15,lVar13,CONCAT71(extraout_var,OVar5.value));
      lVar9 = lVar15;
      (**(code **)(*(long *)(lVar6 + -8) + 0x30))(lVar15,1,lVar6);
      lVar4 = local_b8;
      if ((int)lVar9 == 1) {
        (**(code **)(local_f0 + 8))(lVar21,lVar7);
        return;
      }
      iVar2 = *(int *)(lVar6 + 0x30);
      (**(code **)(lVar22 + 0x20))(lVar18,lVar15,local_b8);
      (**(code **)(lVar17 + 0x20))(lVar19,lVar15 + iVar2,lVar1);
      uVar8 = *unaff_x20;
      uVar11 = unaff_x20[1];
      uVar20 = *(undefined8 *)(local_b0 + 0x20);
      lVar9 = lVar18;
      FUN_1007f9250(lVar18,uVar8,uVar11,lVar4,uVar20);
      if (((uint)uVar8 & 0xff) != 1) break;
      uVar8 = 0;
      FUN_1007fa688(0,lVar4,uVar20);
      FUN_1007ea1d8(lVar18,uVar11,uVar8);
      puVar3 = local_e8;
      (**(code **)(lVar17 + 0x10))(local_e8,lVar19,lVar1);
      CVar10 = Swift::ContiguousArray::typeMetadataAccessor();
      Swift::ContiguousArray::append(puVar3,CVar10.unknown);
      (**(code **)(lVar17 + 8))(lVar19,lVar1);
      (**(code **)(lVar22 + 8))(lVar18,lVar4);
    }
    CVar10 = Swift::ContiguousArray::typeMetadataAccessor();
    Swift::ContiguousArray::_makeMutableAndUnique(CVar10);
    lVar18 = unaff_x20[2];
    FUN_1007e381c(lVar9,lVar18,lVar1);
    FUN_100636dd8(lVar18,lVar1);
    lVar16 = *(long *)(lVar17 + 0x48);
    *(undefined8 *)(lVar21 + -0x10) = local_c8;
    FUN_1007e7374(lVar18 + lVar16 * lVar9,local_e0,uStack_d8,lVar19,lVar4,lVar1,local_d0,uVar20);
    if (unaff_x21 != 0) break;
    (**(code **)(lVar17 + 8))(lVar19,lVar1);
    lVar18 = local_c0;
    (**(code **)(lVar22 + 8))(local_c0,lVar4);
    FUN_1007e3838(unaff_x20 + 2,lVar1);
  }
  (**(code **)(lVar17 + 8))(lVar19,lVar1);
  (**(code **)(lVar22 + 8))(local_c0,lVar4);
  (**(code **)(local_f0 + 8))(lVar21,lVar7);
  FUN_1007e3838(unaff_x20 + 2,lVar1);
  return;
}



/* Address: 0x1007e83e8 | FUN_1007e83e8 */

void FUN_1007e83e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  LazySequence LVar1;
  undefined8 uVar2;
  LazyMapSequence LVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long local_88;
  long local_80;
  undefined8 local_78;
  undefined8 local_70;
  
  local_78 = param_2;
  local_70 = param_3;
  LVar1 = Swift::LazySequence::typeMetadataAccessor();
  local_80 = *(long *)(LVar1.unknown + -8);
  lVar6 = (long)&local_a0 - (*(long *)(local_80 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uStack_98 = *(undefined8 *)(param_4 + 0x18);
  local_a0 = *(undefined8 *)(param_4 + 0x10);
  uVar2 = 0xff;
  _swift_getTupleTypeMetadata2(0xff,local_a0,*(undefined8 *)(param_4 + 0x18),"key value ",0);
  local_90 = uVar2;
  LVar3 = Swift::LazyMapSequence::typeMetadataAccessor();
  local_88 = *(long *)(LVar3.unknown + -8);
  lVar5 = lVar6 - (*(long *)(local_88 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (extension_Swift)::Swift::Sequence::get_lazy();
  puVar4 = &DAT_100f037d0;
  _swift_allocObject(&DAT_100f037d0,0x38,7);
  *(undefined8 *)(puVar4 + 0x18) = uStack_98;
  *(undefined8 *)(puVar4 + 0x10) = local_a0;
  uVar2 = *(undefined8 *)(param_4 + 0x20);
  *(undefined8 *)(puVar4 + 0x20) = param_5;
  *(undefined8 *)(puVar4 + 0x28) = uVar2;
  *(undefined8 *)(puVar4 + 0x30) = param_6;
  _swift_getWitnessTable
            (PTR_Swift__Swift__LazySequence<undefined>_>Swift__LazySequenceProtocol_100eace88,
             LVar1.unknown);
  (extension_Swift)::Swift::LazySequenceProtocol::_map();
  _swift_release(puVar4);
  (**(code **)(local_80 + 8))(lVar6,LVar1.unknown);
  puVar4 = PTR_Swift__Swift__LazyMapSequence<undefined,undefined>_>Swift__Sequence_100ead1b0;
  _swift_getWitnessTable
            (PTR_Swift__Swift__LazyMapSequence<undefined,undefined>_>Swift__Sequence_100ead1b0,
             LVar3.unknown);
  FUN_1007e7fc4(lVar5,local_78,local_70,param_4,LVar3.unknown,puVar4);
  (**(code **)(local_88 + 8))(lVar5,LVar3.unknown);
  return;
}



/* Address: 0x1007e85b0 | FUN_1007e85b0 */

void FUN_1007e85b0(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1007e85bc | FUN_1007e85bc */

void FUN_1007e85bc(undefined8 param_1,long *param_2)

{
  long unaff_x20;
  long unaff_x21;
  
  (**(code **)(unaff_x20 + 0x30))();
  if (unaff_x21 != 0) {
    *param_2 = unaff_x21;
  }
  return;
}



/* Address: 0x1007e85ec | FUN_1007e85ec */

void FUN_1007e85ec(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x1007e85fc | thunk_FUN_1007df284 */

void thunk_FUN_1007df284(void)

{
  FUN_1007df284();
  return;
}



/* Address: 0x1007e8600 | FUN_1007e8600 */

void FUN_1007e8600(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ContiguousArray CVar1;
  undefined *puVar2;
  undefined8 local_80;
  undefined1 auStack_78 [24];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_48;
  
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  Swift::Encoder::_singleValueContainer();
  local_48 = param_3;
  FUN_10007d048(auStack_78,local_60);
  CVar1 = Swift::ContiguousArray::typeMetadataAccessor();
  puVar2 = PTR__Swift__Swift__ContiguousArray<undefined>_>Swift__Encodable_100ead118;
  local_80 = param_5;
  _swift_getWitnessTable
            (PTR__Swift__Swift__ContiguousArray<undefined>_>Swift__Encodable_100ead118,CVar1.unknown
             ,&local_80);
  Swift::SingleValueEncodingContainer::_encode(&local_48,CVar1.unknown,puVar2,local_60,uStack_58);
  FUN_100004594(auStack_78);
  return;
}



/* Address: 0x1007e86d4 | FUN_1007e86d4 */

void FUN_1007e86d4(undefined8 param_1,long param_2,long param_3)

{
  long unaff_x20;
  
  FUN_1007e8600(param_1,param_2,*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(param_2 + 0x10),
                *(undefined8 *)(param_3 + -8));
  return;
}



/* Address: 0x1007e86f4 | FUN_1007e86f4 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001007e8920 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined1  [16]
FUN_1007e86f4(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  DecodingError DVar2;
  Context CVar3;
  ContiguousArray CVar4;
  ContiguousArray CVar5;
  undefined *puVar6;
  ContiguousArray *pCVar7;
  __int64 _Var8;
  char *pcVar10;
  undefined1 *puVar11;
  long lVar12;
  long unaff_x21;
  long lVar13;
  String SVar14;
  String SVar15;
  undefined1 auVar16 [16];
  String SVar17;
  String SVar18;
  String SVar19;
  undefined1 auStack_d0 [8];
  undefined1 *local_c8;
  long local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  ContiguousArray local_a0;
  undefined8 uStack_98;
  undefined *local_90;
  undefined1 auStack_88 [24];
  undefined8 local_70;
  undefined *puStack_68;
  undefined8 local_58;
  ContiguousArray CVar9;
  
  local_b0 = param_3;
  local_a8 = param_2;
  CVar3 = Swift::DecodingError::Context::typeMetadataAccessor();
  lVar13 = *(long *)(CVar3.unknown + -8);
  lVar12 = *(long *)(lVar13 + 0x40);
  CVar9.unknown = param_1;
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  Swift::Decoder::_singleValueContainer();
  if (unaff_x21 == 0) {
    local_c8 = auStack_d0 + -(lVar12 + 0xfU & 0xfffffffffffffff0);
    local_c0 = lVar13;
    local_b8 = CVar3.unknown;
    FUN_100004640(auStack_88,local_70);
    uVar1 = local_a8;
    CVar4 = Swift::ContiguousArray::typeMetadataAccessor();
    local_58 = local_b0;
    _swift_getWitnessTable
              (PTR__Swift__Swift__ContiguousArray<undefined>_>Swift__Decodable_100ead138,
               CVar4.unknown,&local_58);
    CVar5 = CVar4;
    Swift::SingleValueDecodingContainer::_decode();
    CVar9.unknown = local_a0.unknown;
    local_90 = local_a0.unknown;
    FUN_100002c1c();
    puVar6 = PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__RandomAccessCollection_100ead140;
    _swift_getWitnessTable
              (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__RandomAccessCollection_100ead140
               ,CVar4.unknown);
    pCVar7 = &local_a0;
    pcVar10 = (char *)0x0;
    puVar11 = &DAT_00000001;
    FUN_1007dc934(pCVar7,&local_90,0,1,CVar5.unknown,CVar4.unknown,puVar6,param_4);
    CVar5.unknown = local_a0.unknown;
    if (local_a0.unknown == *(undefined **)(CVar9.unknown + 0x10)) {
      _Var8 = Swift::ContiguousArray::get_count(CVar9);
      if (_Var8 < 0x10) {
        CVar3.unknown = (undefined *)0x0;
      }
      else {
        _swift_retain(pCVar7);
        CVar3.unknown = (undefined *)pCVar7;
      }
      FUN_10069d9ec(CVar9.unknown,CVar3.unknown,uVar1,param_4);
      _swift_release(pCVar7);
      FUN_100004594(auStack_88);
      FUN_100004594(param_1);
      goto LAB_1007e89b4;
    }
    _swift_release(CVar9.unknown);
    FUN_100004640(auStack_88,local_70);
    Swift::SingleValueDecodingContainer::_get_codingPath();
    local_a0.unknown = (undefined *)0x0;
    uStack_98 = 0xe000000000000000;
    Swift::_StringGuts::grow(0x3d,(_StringGuts)puStack_68);
    SVar14.bridgeObject = (void *)0x8000000100db1b50;
    SVar14.str = (char *)0xd00000000000003a;
    SVar17.bridgeObject = puVar11;
    SVar17.str = pcVar10;
    Swift::String::append(SVar14,SVar17);
    local_90 = CVar5.unknown;
    SVar14 = Swift::CustomStringConvertible::get_description();
    SVar18.bridgeObject = puVar11;
    SVar18.str = pcVar10;
    Swift::String::append(SVar14,SVar18);
    _swift_bridgeObjectRelease(SVar14.bridgeObject);
    SVar15.bridgeObject = (void *)0xe100000000000000;
    SVar15.str = (char *)0x29;
    SVar19.bridgeObject = puVar11;
    SVar19.str = pcVar10;
    Swift::String::append(SVar15,SVar19);
    puVar11 = local_c8;
    Swift::DecodingError::Context::_init(local_c8,auStack_88,local_a0.unknown,uStack_98,0);
    DVar2 = Swift::DecodingError::typeMetadataAccessor();
    CVar9.unknown = (undefined *)CONCAT71((int7)((ulong)auStack_88 >> 8),DVar2.value);
    CVar3.unknown =
         PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80;
    _swift_allocError(CVar9.unknown,
                      PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
                      ,0,0);
    puVar6 = local_b8;
    lVar12 = local_c0;
    (**(code **)(local_c0 + 0x10))(CVar3.unknown,puVar11,local_b8);
    (**(code **)(*(long *)(CVar9.unknown + -8) + 0x68))
              (CVar3.unknown,
               *(undefined4 *)
                PTR___enum_case_for_Swift_DecodingError_dataCorrupted_Swift_DecodingError_Type___>__Swift_DecodingError_Context___>_Swift_DecodingError_100eacf40
               ,CVar9.unknown);
    _swift_willThrow();
    _swift_release(pCVar7);
    (**(code **)(lVar12 + 8))(puVar11,puVar6);
    FUN_100004594(auStack_88);
  }
  FUN_100004594(param_1);
LAB_1007e89b4:
  auVar16._8_8_ = CVar3.unknown;
  auVar16._0_8_ = CVar9.unknown;
  return auVar16;
}



/* Address: 0x1007e8a18 | FUN_1007e8a18 */

void FUN_1007e8a18(undefined8 *param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  long unaff_x21;
  
  uVar1 = *(undefined8 *)(param_3 + 0x10);
  FUN_1007e86f4(param_2,uVar1,*(undefined8 *)(param_4 + -8),*(undefined8 *)(param_3 + 0x18));
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    param_1[1] = uVar1;
  }
  return;
}



/* Address: 0x1007e8a4c | FUN_1007e8a4c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001007e8ba4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1007e8a4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined4 uVar1;
  AncestorRepresentation AVar2;
  DisplayStyle DVar3;
  undefined *puVar4;
  undefined8 uVar6;
  ContiguousArray CVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_80 [8];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long lVar5;
  
  AVar2 = Swift::Mirror::AncestorRepresentation::typeMetadataAccessor();
  puVar8 = auStack_80 +
           -(*(long *)(*(long *)(CONCAT71((int7)((ulong)param_2 >> 8),AVar2.value) + -8) + 0x40) +
             0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100fe6698;
  FUN_1000f7830(&DAT_100fe6698,&TargetResilientWitness_100c79308);
  lVar9 = (long)puVar8 - (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined4 *)
           PTR___enum_case_for_Swift_Mirror_DisplayStyle_set_Swift_Mirror_DisplayStyle_Type___>_Swift_Mirror_DisplayStyle_100eadd90
  ;
  local_78 = param_3;
  local_70 = param_2;
  uStack_68 = param_3;
  DVar3 = Swift::Mirror::DisplayStyle::typeMetadataAccessor();
  lVar5 = CONCAT71((int7)((ulong)puVar4 >> 8),DVar3.value);
  lVar10 = *(long *)(lVar5 + -8);
  (**(code **)(lVar10 + 0x68))(lVar9,uVar1,lVar5);
  (**(code **)(lVar10 + 0x38))(lVar9,0,1,lVar5);
  uVar6 = 0;
  FUN_1007fa688(0,param_4,param_5);
  CVar7 = Swift::ContiguousArray::typeMetadataAccessor();
  puVar4 = PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__Collection_100ead148;
  _swift_getWitnessTable
            (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__Collection_100ead148,CVar7.unknown
            );
  FUN_1007de1ec(puVar8,uVar6,CVar7.unknown,puVar4);
  _swift_retain(param_2);
  _swift_retain_n(param_3,2);
  Swift::Mirror::_init(param_1,puVar4,&local_78,lVar9,puVar8,uVar6,CVar7.unknown,puVar4);
  return;
}



/* Address: 0x1007e8bc8 | FUN_1007e8bc8 */

void FUN_1007e8bc8(long param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1007e8a4c(*unaff_x20,unaff_x20[1],*(undefined8 *)(param_1 + 0x10),
                *(undefined8 *)(param_1 + 0x18));
  return;
}



/* Address: 0x1007e8bd8 | FUN_1007e8bd8 */

void FUN_1007e8bd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  local_30 = param_1;
  uStack_28 = param_2;
  FUN_1007fa688(0,param_3,param_4);
  uVar2 = 0x100c7a1e0;
  _swift_getWitnessTable(0x100c7a1e0,uVar1);
  FUN_10068f120(&local_30,uVar1,uVar2);
  return;
}



/* Address: 0x1007e8c30 | FUN_1007e8c30 */

void FUN_1007e8c30(long param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1007e8bd8(*unaff_x20,unaff_x20[1],*(undefined8 *)(param_1 + 0x10),
                *(undefined8 *)(param_1 + 0x18));
  return;
}



/* Address: 0x1007e8c40 | thunk_FUN_1007e8bd8 */

void thunk_FUN_1007e8bd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        )

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  uStack_30 = param_1;
  uStack_28 = param_2;
  FUN_1007fa688(0,param_3,param_4);
  uVar2 = 0x100c7a1e0;
  _swift_getWitnessTable(0x100c7a1e0,uVar1);
  FUN_10068f120(&uStack_30,uVar1,uVar2);
  return;
}



/* Address: 0x1007e8c44 | FUN_1007e8c44 */

void FUN_1007e8c44(long param_1)

{
  undefined8 *unaff_x20;
  
  thunk_FUN_1007e8bd8(*unaff_x20,unaff_x20[1],*(undefined8 *)(param_1 + 0x10),
                      *(undefined8 *)(param_1 + 0x18));
  return;
}



/* Address: 0x1007e8c54 | FUN_1007e8c54 */

void FUN_1007e8c54(undefined8 param_1,undefined8 param_2,ContiguousArray param_3,undefined8 param_4,
                  ContiguousArray param_5,long param_6,undefined8 param_7)

{
  undefined1 *puVar1;
  code *pcVar2;
  Change CVar3;
  Optional OVar4;
  undefined7 extraout_var;
  __int64 _Var6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  CollectionDifference CVar9;
  undefined7 extraout_var_00;
  undefined8 uVar10;
  undefined *puVar11;
  long lVar12;
  undefined1 **ppuVar13;
  ContiguousArray CVar14;
  long lVar15;
  long lVar16;
  undefined1 *puVar17;
  undefined4 auStack_100 [4];
  undefined1 auStack_f0 [8];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined1 *local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  ContiguousArray local_c0;
  long local_b8;
  code *local_b0;
  undefined8 local_a8;
  undefined1 *local_a0;
  undefined8 local_98;
  undefined1 auStack_90 [24];
  undefined8 local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined8 uVar5;
  
  local_b8 = *(long *)(param_6 + -8);
  lVar12 = -(*(long *)(local_b8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_70 = (undefined1 *)0x0;
  local_68 = (undefined1 *)0x0;
  local_e8 = param_1;
  local_a0 = auStack_f0 + lVar12;
  CVar3 = Swift::CollectionDifference::Change::typeMetadataAccessor();
  uVar5 = CONCAT71(extraout_var,CVar3.value);
  local_e0 = uVar5;
  Swift::Array<undefined>::init();
  local_78 = uVar5;
  _swift_beginAccess(&local_70,auStack_90,0,0);
  puVar17 = (undefined1 *)0x0;
  local_c8 = param_4;
  local_c0.unknown = param_5.unknown;
  local_a8 = param_2;
  puVar7 = local_70;
  do {
    while( true ) {
      local_70 = puVar7;
      _Var6 = Swift::ContiguousArray::get_count(param_3);
      puVar7 = local_70;
      if ((_Var6 <= (long)puVar17) &&
         (_Var6 = Swift::ContiguousArray::get_count(param_5), _Var6 <= (long)puVar7)) {
        CVar9 = Swift::CollectionDifference::typeMetadataAccessor();
        OVar4 = Swift::Optional::typeMetadataAccessor();
        uVar5 = local_78;
        lVar16 = (long)(auStack_f0 + lVar12) -
                 (*(long *)(*(long *)(CONCAT71(extraout_var_00,OVar4.value) + -8) + 0x40) + 0xfU &
                 0xfffffffffffffff0);
        local_98 = local_78;
        uVar10 = 0;
        Swift::Array<undefined>::typeMetadataAccessor();
        _swift_bridgeObjectRetain(uVar5);
        puVar11 = PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548;
        _swift_getWitnessTable
                  (PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548,uVar10);
        Swift::CollectionDifference::_init(lVar16,&local_98,param_6,uVar10,puVar11);
        lVar15 = *(long *)(CVar9.unknown + -8);
        lVar12 = lVar16;
        (**(code **)(lVar15 + 0x30))(lVar16,1,CVar9.unknown);
        if ((int)lVar12 == 1) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1007e90f4);
          (*pcVar2)();
        }
        _swift_bridgeObjectRelease(uVar5);
        (**(code **)(lVar15 + 0x20))(local_e8,lVar16,CVar9.unknown);
        return;
      }
      puVar1 = local_70;
      puVar7 = (undefined1 *)Swift::ContiguousArray::get_count(param_5);
      if (puVar1 != puVar7) break;
      *(undefined4 *)((long)auStack_100 + lVar12) = 1;
      CVar14.unknown = param_5.unknown;
      uVar10 = param_2;
      uVar5 = param_4;
LAB_1007e8d10:
      ppuVar13 = &local_68;
      param_5.unknown = param_3.unknown;
      puVar11 = CVar14.unknown;
      param_2 = uVar10;
      param_4 = uVar5;
LAB_1007e8d14:
      FUN_1007e90f4(uVar10,param_5.unknown,ppuVar13,&local_78,uVar5,CVar14.unknown,param_6,param_7);
      param_5.unknown = puVar11;
      puVar17 = local_68;
      puVar7 = local_70;
    }
    puVar8 = (undefined1 *)Swift::ContiguousArray::get_count(param_3);
    puVar7 = local_a0;
    if (puVar17 == puVar8) {
      *(undefined4 *)((long)auStack_100 + lVar12) = 0;
      uVar5 = param_2;
      uVar10 = param_4;
LAB_1007e8d94:
      ppuVar13 = &local_70;
      CVar14.unknown = param_3.unknown;
      puVar11 = param_5.unknown;
      param_2 = uVar5;
      param_4 = uVar10;
      goto LAB_1007e8d14;
    }
    Swift::ContiguousArray::get_subscript((__int64)puVar17,param_3);
    puVar8 = puVar7;
    uVar5 = param_4;
    FUN_1007f9250(puVar7,param_4,param_5.unknown,param_6,param_7);
    local_b0 = *(code **)(local_b8 + 8);
    (*local_b0)(puVar7,param_6);
    puVar7 = local_a0;
    CVar14.unknown = local_c0.unknown;
    if (((uint)uVar5 & 0xff) == 1) {
      *(undefined4 *)((long)auStack_100 + lVar12) = 1;
      param_2 = local_a8;
      FUN_1007e90f4(local_a8,param_3.unknown,&local_68,&local_78,param_4,param_5.unknown,param_6,
                    param_7);
      puVar17 = local_68;
      puVar7 = local_70;
    }
    else {
      if ((long)puVar8 < (long)puVar1) {
        *(undefined4 *)((long)auStack_100 + lVar12) = 1;
        CVar14.unknown = local_c0.unknown;
        uVar10 = local_a8;
        uVar5 = local_c8;
        goto LAB_1007e8d10;
      }
      local_d8 = puVar8;
      Swift::ContiguousArray::get_subscript((__int64)puVar1,local_c0);
      puVar8 = puVar7;
      uVar5 = local_a8;
      FUN_1007f9250(puVar7,local_a8,param_3.unknown,param_6,param_7);
      local_d0 = puVar8;
      (*local_b0)(puVar7,param_6);
      param_4 = local_c8;
      if (((uint)uVar5 & 0xff) == 1) {
        *(undefined4 *)((long)auStack_100 + lVar12) = 0;
        param_2 = local_a8;
        param_4 = local_c8;
        FUN_1007e90f4(local_c8,CVar14.unknown,&local_70,&local_78,local_a8,param_3.unknown,param_6,
                      param_7);
        param_5.unknown = CVar14.unknown;
        puVar17 = local_68;
        puVar7 = local_70;
      }
      else if ((long)local_d0 < (long)puVar17) {
        *(undefined4 *)((long)auStack_100 + lVar12) = 0;
        param_2 = local_a8;
        param_5.unknown = local_c0.unknown;
        FUN_1007e90f4(param_4,local_c0.unknown,&local_70,&local_78,local_a8,param_3.unknown,param_6,
                      param_7);
        puVar17 = local_68;
        puVar7 = local_70;
      }
      else {
        if (puVar17 != local_d0) {
          if (SBORROW8((long)local_d0,(long)puVar17)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1007e90e8);
            (*pcVar2)();
          }
          if (SBORROW8((long)local_d8,(long)puVar1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1007e90f0);
            (*pcVar2)();
          }
          if ((long)local_d0 - (long)puVar17 < (long)local_d8 - (long)puVar1) {
            *(undefined4 *)((long)auStack_100 + lVar12) = 0;
            param_5.unknown = local_c0.unknown;
            uVar5 = local_a8;
            uVar10 = param_4;
            goto LAB_1007e8d94;
          }
          *(undefined4 *)((long)auStack_100 + lVar12) = 1;
          CVar14.unknown = local_c0.unknown;
          uVar10 = local_a8;
          uVar5 = param_4;
          goto LAB_1007e8d10;
        }
        puVar8 = puVar17 + 1;
        if (SCARRY8((long)puVar17,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1007e90e4);
          (*pcVar2)();
        }
        param_5.unknown = local_c0.unknown;
        param_2 = local_a8;
        puVar17 = puVar8;
        puVar7 = puVar1 + 1;
        local_68 = puVar8;
        if (SCARRY8((long)puVar1,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1007e90ec);
          (*pcVar2)();
        }
      }
    }
  } while( true );
}



/* Address: 0x1007e90f4 | FUN_1007e90f4 */

void FUN_1007e90f4(undefined8 param_1,ContiguousArray param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined4 param_9)

{
  long *plVar1;
  int iVar2;
  code *pcVar3;
  Change CVar4;
  undefined7 extraout_var;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 uStack_70;
  long local_68;
  
  uStack_70._4_4_ = param_9;
  lVar9 = *(long *)(param_7 + -8);
  lVar8 = (long)&uStack_70 - (*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_68 = param_4;
  Swift::ContiguousArray::get_subscript(*param_3,param_2);
  CVar4 = Swift::CollectionDifference::Change::typeMetadataAccessor();
  plVar10 = (long *)(lVar8 - (*(long *)(*(long *)(CONCAT71(extraout_var,CVar4.value) + -8) + 0x40) +
                              0xfU & 0xfffffffffffffff0));
  puVar5 = &DAT_100fe6968;
  FUN_1000f8b08(&DAT_100fe6968,0x100c79ec0);
  lVar6 = 0;
  _swift_getTupleTypeMetadata3
            (0,PTR___type_metadata_for_Swift_Int_100eac6f8,param_7,puVar5,
             "offset element associatedWith ",0);
  iVar2 = *(int *)(lVar6 + 0x30);
  plVar1 = (long *)((long)plVar10 + (long)*(int *)(lVar6 + 0x40));
  *plVar10 = *param_3;
  (**(code **)(lVar9 + 0x10))((long)plVar10 + (long)iVar2,lVar8,param_7);
  lVar6 = lVar8;
  FUN_1007f9250(lVar8,param_5,param_6,param_7,param_8);
  *plVar1 = lVar6;
  *(char *)(plVar1 + 1) = (char)param_5;
  _swift_storeEnumTagMultiPayload(plVar10,CONCAT71(extraout_var,CVar4.value),uStack_70._4_4_);
  uVar7 = 0;
  Swift::Array<undefined>::typeMetadataAccessor();
  Swift::Array<undefined>::append(plVar10,uVar7);
  (**(code **)(lVar9 + 8))(lVar8,param_7);
  if (!SCARRY8(*param_3,1)) {
    *param_3 = *param_3 + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1007e927c);
  (*pcVar3)();
}



/* Address: 0x1007e927c | FUN_1007e927c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001007e9358 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined1  [16]
FUN_1007e927c(CollectionDifference<(extension_in_Swift):Swift_RangeReplaceableCollection_applying(Swift_CollectionDifference<A_Element>)__>_A_>
              param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  __int64 _Var3;
  __int64 _Var4;
  long *plVar5;
  ContiguousArray CVar6;
  undefined1 auVar7 [16];
  long local_48;
  
  FUN_1007f925c(param_2,param_3,param_4,param_5);
  uVar1 = 0;
  Swift::Array<undefined>::typeMetadataAccessor();
  _swift_getWitnessTable
            (PTR_Swift__Swift__Array<undefined>_>Swift__RangeReplaceableCollection_100eac550,uVar1);
  (extension_Swift)::Swift::RangeReplaceableCollection::_applying(param_1);
  _swift_bridgeObjectRelease(param_2);
  if (local_48 != 0) {
    _swift_bridgeObjectRetain(local_48);
    puVar2 = PTR_Swift__Swift__Array<undefined>_>Swift__RandomAccessCollection_100eac540;
    _swift_getWitnessTable
              (PTR_Swift__Swift__Array<undefined>_>Swift__RandomAccessCollection_100eac540,uVar1);
    plVar5 = &local_48;
    CVar6.unknown = param_4;
    FUN_1007e966c(plVar5,param_4,uVar1,param_5,puVar2);
    _Var3 = Swift::ContiguousArray::get_count(CVar6);
    _Var4 = Swift::Array<undefined>::get_count(_Var3,param_4);
    _swift_bridgeObjectRelease(local_48);
    if (_Var3 == _Var4) goto LAB_1007e9390;
    _swift_release(CVar6.unknown);
    _swift_release(plVar5);
  }
  plVar5 = (long *)0x0;
  CVar6.unknown = (undefined *)0x0;
LAB_1007e9390:
  auVar7._8_8_ = CVar6.unknown;
  auVar7._0_8_ = plVar5;
  return auVar7;
}



/* Address: 0x1007e93ac | FUN_1007e93ac */

void FUN_1007e93ac(undefined8 param_1,ContiguousArray<undefined> param_2,undefined8 param_3,
                  ContiguousArray<undefined> param_4)

{
  (extension_Swift)::Swift::ContiguousArray::____infix(param_2,param_4);
  return;
}



/* Address: 0x1007e93c4 | FUN_1007e93c4 */

void FUN_1007e93c4(long param_1,long param_2,long param_3)

{
  FUN_1007e93ac(param_1,*(undefined8 *)(param_1 + 8),param_3,*(undefined8 *)(param_2 + 8),
                *(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x18));
  return;
}



/* Address: 0x1007e93d8 | FUN_1007e93d8 */

void FUN_1007e93d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 local_48;
  
  uVar2 = 0;
  local_48 = param_1;
  Swift::Array<undefined>::typeMetadataAccessor();
  _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548,uVar2);
  bVar1 = (extension_Swift)::Swift::Collection::get_isEmpty();
  if (bVar1) {
    _swift_bridgeObjectRelease(param_1);
    FUN_1007f61ec(param_2,param_3);
  }
  else {
    puVar3 = PTR_Swift__Swift__Array<undefined>_>Swift__RandomAccessCollection_100eac540;
    local_48 = param_1;
    _swift_getWitnessTable
              (PTR_Swift__Swift__Array<undefined>_>Swift__RandomAccessCollection_100eac540,uVar2);
    FUN_1007e966c(&local_48,param_2,uVar2,param_3,puVar3);
  }
  return;
}



/* Address: 0x1007e948c | FUN_1007e948c */

void FUN_1007e948c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_3 + 0x10);
  FUN_1007e93d8(param_2,uVar1,*(undefined8 *)(param_3 + 0x18));
  *param_1 = param_2;
  param_1[1] = uVar1;
  return;
}



/* Address: 0x1007e94b8 | FUN_1007e94b8 */

void FUN_1007e94b8(Hasher param_1,undefined8 param_2,ContiguousArray param_3,undefined *param_4)

{
  __uint64 _Var1;
  Hasher HVar2;
  ulong uVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *(long *)(param_4 + -8);
  uVar3 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar4 = &stack0xffffffffffffffa0 + -uVar3;
  HVar2.unknown = param_4;
  _Var1 = Swift::ContiguousArray::get_count(param_3);
  Swift::Hasher::_combine(_Var1,HVar2);
  lVar7 = *(long *)(param_3.unknown + 0x10);
  if (lVar7 != 0) {
    lVar5 = 0;
    do {
      Swift::ContiguousArray::get_subscript(lVar5,param_3);
      lVar5 = lVar5 + 1;
      (**(code **)(lVar6 + 0x20))(puVar4,(long)puVar4 - uVar3,param_4);
      Swift::Hashable::hash(param_1);
      (**(code **)(lVar6 + 8))(puVar4,param_4);
    } while (lVar7 != lVar5);
  }
  return;
}



/* Address: 0x1007e95a4 | FUN_1007e95a4 */

void FUN_1007e95a4(void)

{
  Hasher HVar1;
  undefined1 auStack_78 [72];
  
  Swift::Hasher::init(0);
  HVar1.unknown = auStack_78;
  FUN_1007e94b8();
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x1007e9600 | FUN_1007e9600 */

void FUN_1007e9600(undefined8 param_1)

{
  _swift_getWitnessTable(0x100c7a000,param_1);
  return;
}



/* Address: 0x1007e9610 | FUN_1007e9610 */

void FUN_1007e9610(long param_1)

{
  long unaff_x20;
  
  FUN_1007e95a4(param_1,*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(param_1 + 0x10),
                *(undefined8 *)(param_1 + 0x18));
  return;
}



/* Address: 0x1007e961c | FUN_1007e961c */

void FUN_1007e961c(undefined8 param_1,long param_2)

{
  long unaff_x20;
  
  FUN_1007e94b8(param_1,param_2,*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(param_2 + 0x10),
                *(undefined8 *)(param_2 + 0x18));
  return;
}



/* Address: 0x1007e9628 | FUN_1007e9628 */

void FUN_1007e9628(__int64 param_1)

{
  Hasher HVar1;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(param_1);
  HVar1.unknown = auStack_68;
  FUN_1007e94b8();
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x1007e966c | FUN_1007e966c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001007e9930 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined1  [16]
FUN_1007e966c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  PartialRangeUpTo PVar8;
  ContiguousArray<undefined> CVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  code *pcVar17;
  long lVar18;
  long lVar19;
  undefined1 auVar20 [16];
  code *local_120;
  undefined8 local_118;
  undefined8 local_110;
  long local_108;
  undefined8 local_100;
  code *local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  undefined *local_d8;
  long local_d0;
  long local_c8;
  undefined *local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  undefined8 local_98;
  undefined8 local_90;
  long local_88;
  long local_80;
  undefined *local_78;
  long lStack_70;
  
  puVar1 = PTR___protocol_requirements_base_descriptor_for_Swift_Collection_100eac828;
  lVar15 = *(long *)(*(long *)(param_5 + 8) + 8);
  lVar5 = 0xff;
  local_98 = param_2;
  local_80 = param_5;
  _swift_getAssociatedTypeWitness
            (0xff,lVar15,param_3,
             PTR___protocol_requirements_base_descriptor_for_Swift_Collection_100eac828,
             PTR___associated_type_descriptor_for_Swift_Collection_Index_100eabcf0);
  lVar6 = lVar15;
  _swift_getAssociatedConformanceWitness
            (lVar15,param_3,lVar5,puVar1,
             PTR___associated_conformance_descriptor_for_Swift_Collection_Swift_Collection_Index__Swift_Comparable_100eac7d0
            );
  local_d8 = (undefined *)Swift::PartialRangeFrom::typeMetadataAccessor();
  local_e0 = *(long *)(local_d8 + -8);
  lVar12 = (long)&local_120 - (*(long *)(local_e0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0;
  local_e8 = lVar12;
  _swift_getAssociatedTypeWitness
            (0,lVar15,param_3,puVar1,
             PTR___associated_type_descriptor_for_Swift_Collection_SubSequence_100eabcd8);
  local_f0 = *(long *)(lVar7 + -8);
  lVar12 = lVar12 - (*(long *)(local_f0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_b8 = lVar12;
  local_a8 = lVar7;
  PVar8 = Swift::PartialRangeUpTo::typeMetadataAccessor();
  local_c8 = *(long *)(PVar8.unknown + -8);
  local_d0 = lVar12 - (*(long *)(local_c8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_a0 = *(long *)(param_3 + -8);
  lVar16 = local_d0 - (*(long *)(local_a0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar19 = *(long *)(lVar5 + -8);
  uVar13 = *(long *)(lVar19 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar18 = lVar16 - uVar13;
  lVar7 = lVar18 - uVar13;
  local_c0 = PVar8.unknown;
  FUN_100002c1c();
  lVar12 = lVar7;
  local_90 = param_4;
  FUN_1007dc934(lVar7,param_1,0,1,PVar8.unknown,param_3,local_80,param_4);
  local_80 = lVar12;
  Swift::Collection::_get_endIndex();
  uVar14 = *(undefined8 *)(lVar6 + 8);
  local_b0 = lVar6;
  local_88 = lVar7;
  bVar4 = Swift::Equatable::___infix(lVar7,lVar18,lVar5,uVar14);
  pcVar17 = *(code **)(lVar19 + 8);
  (*pcVar17)(lVar18,lVar5);
  lVar7 = local_88;
  lVar6 = local_a0;
  if (bVar4) {
    (**(code **)(local_a0 + 0x10))(lVar16,param_1,param_3);
    uVar14 = local_98;
    CVar9 = Swift::ContiguousArray::_init(lVar12,local_98,param_3,*(undefined8 *)(lVar15 + 8));
    lVar7 = local_80;
    FUN_10069d9ec(CVar9.unknown,local_80,uVar14,local_90);
    (**(code **)(lVar6 + 8))(param_1,param_3);
    (*pcVar17)(local_88,lVar5);
    local_78 = CVar9.unknown;
    lStack_70 = lVar7;
  }
  else {
    local_f8 = pcVar17;
    bVar4 = Swift::Equatable::___infix(local_88,local_88,lVar5,uVar14);
    if (!bVar4) {
                    /* WARNING: Does not return */
      pcVar17 = (code *)SoftwareBreakpoint(1,0x1007e9b2c);
      (*pcVar17)();
    }
    local_120 = *(code **)(lVar19 + 0x10);
    (*local_120)(lVar18,lVar7,lVar5);
    lVar6 = local_d0;
    local_100 = uVar14;
    Swift::PartialRangeUpTo::init(local_d0,lVar12,lVar5,local_b0);
    puVar1 = local_c0;
    puVar10 = PTR_Swift__Swift__PartialRangeUpTo<undefined>_>Swift__RangeExpression_100ead220;
    _swift_getWitnessTable
              (PTR_Swift__Swift__PartialRangeUpTo<undefined>_>Swift__RangeExpression_100ead220,
               local_c0);
    lVar12 = local_b8;
    local_110 = param_1;
    ___extension_in_Swift__Swift_Collection_subscript_getter___<A_where_A1:_Swift_RangeExpression,A_Index____A1_Bound>_A1___>_A_SubSequence
              (local_b8,lVar6,param_3,puVar1,lVar15,puVar10);
    lVar16 = local_a8;
    lVar19 = lVar15;
    local_108 = param_3;
    _swift_getAssociatedConformanceWitness
              (lVar15,param_3,local_a8,
               PTR___protocol_requirements_base_descriptor_for_Swift_Collection_100eac828,
               PTR___associated_conformance_descriptor_for_Swift_Collection_Swift_Collection_SubSequence__Swift_Collection_100eac7c0
              );
    uVar14 = local_98;
    local_118 = *(undefined8 *)(lVar19 + 8);
    CVar9 = Swift::ContiguousArray::_init(lVar19,local_98,lVar16);
    (**(code **)(local_c8 + 8))(lVar6,puVar1);
    lVar6 = local_80;
    uVar3 = local_90;
    lVar16 = local_80;
    FUN_10069d9ec(CVar9.unknown,local_80,uVar14,local_90);
    local_78 = CVar9.unknown;
    lStack_70 = lVar16;
    _swift_retain(lVar6);
    bVar4 = Swift::Equatable::___infix(lVar7,lVar7,lVar5,local_100);
    if (!bVar4) {
                    /* WARNING: Does not return */
      pcVar17 = (code *)SoftwareBreakpoint(1,0x1007e9b30);
      (*pcVar17)();
    }
    (*local_120)(lVar18,lVar7,lVar5);
    lVar16 = local_e8;
    Swift::PartialRangeFrom::init(local_e8,CVar9.unknown,lVar5,local_b0);
    puVar1 = local_d8;
    puVar10 = PTR_Swift__Swift__PartialRangeFrom<undefined>_>Swift__RangeExpression_100ead200;
    _swift_getWitnessTable
              (PTR_Swift__Swift__PartialRangeFrom<undefined>_>Swift__RangeExpression_100ead200,
               local_d8);
    lVar6 = local_108;
    uVar2 = local_110;
    ___extension_in_Swift__Swift_Collection_subscript_getter___<A_where_A1:_Swift_RangeExpression,A_Index____A1_Bound>_A1___>_A_SubSequence
              (lVar12,lVar16,local_108,puVar1,lVar15,puVar10);
    uVar11 = 0;
    FUN_1007fa688(0,uVar14,uVar3);
    lVar15 = local_a8;
    FUN_1007ea780(lVar12,uVar11,local_a8,local_118);
    _swift_release(local_80);
    (**(code **)(local_a0 + 8))(uVar2,lVar6);
    (**(code **)(local_f0 + 8))(lVar12,lVar15);
    (**(code **)(local_e0 + 8))(lVar16,puVar1);
    (*local_f8)(lVar7,lVar5);
  }
  auVar20._8_8_ = lStack_70;
  auVar20._0_8_ = local_78;
  return auVar20;
}



/* Address: 0x1007e9b30 | FUN_1007e9b30 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001007e9b9c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined1  [16]
FUN_1007e9b30(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5)

{
  ContiguousArray<undefined> CVar1;
  ContiguousArray<undefined> CVar2;
  ContiguousArray CVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  __int64 _Var6;
  undefined **ppuVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined1 auStack_60 [8];
  undefined *local_58;
  
  lVar8 = *(long *)(param_3 + -8);
  (**(code **)(lVar8 + 0x10))
            (auStack_60 + -(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0),param_1);
  CVar1 = Swift::ContiguousArray::_init(param_1,param_2,param_3,param_5);
  CVar2 = CVar1;
  local_58 = CVar1.unknown;
  FUN_100002c1c();
  CVar3 = Swift::ContiguousArray::typeMetadataAccessor();
  puVar4 = PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__RandomAccessCollection_100ead140;
  _swift_getWitnessTable
            (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__RandomAccessCollection_100ead140,
             CVar3.unknown);
  ppuVar5 = &local_58;
  FUN_1007dc87c(ppuVar5,0,1,CVar2.unknown,CVar3.unknown,puVar4,param_4);
  _Var6 = Swift::ContiguousArray::get_count((ContiguousArray)CVar1.unknown);
  ppuVar7 = (undefined **)0x0;
  if (0xf < _Var6) {
    _swift_retain(ppuVar5,0);
    ppuVar7 = ppuVar5;
  }
  FUN_10069d9ec(CVar1.unknown,ppuVar7,param_2,param_4);
  _swift_release(ppuVar5);
  (**(code **)(lVar8 + 8))(param_1,param_3);
  auVar9._8_8_ = ppuVar7;
  auVar9._0_8_ = CVar1.unknown;
  return auVar9;
}



/* Address: 0x1007e9c6c | FUN_1007e9c6c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001007e9d4c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined1  [16]
FUN_1007e9c6c(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5)

{
  long lVar1;
  ContiguousArray<undefined> CVar2;
  ContiguousArray<undefined> CVar3;
  ContiguousArray CVar4;
  undefined **ppuVar5;
  __int64 _Var6;
  undefined *puVar7;
  undefined **ppuVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  undefined1 auVar13 [16];
  undefined1 auStack_90 [8];
  undefined *local_88;
  undefined **ppuStack_80;
  
  lVar11 = *(long *)(param_3 + -8);
  uVar9 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar10 = (long)(auStack_90 + -uVar9) - uVar9;
  lVar1 = 0;
  FUN_1007fa688(0,param_2,param_4);
  if (param_3 == lVar1) {
    CVar2.unknown = (undefined *)*param_1;
    ppuVar8 = (undefined **)param_1[1];
    pcVar12 = *(code **)(lVar11 + 8);
    _swift_retain(CVar2.unknown);
    _swift_retain(ppuVar8);
    (*pcVar12)(param_1,param_3);
  }
  else {
    pcVar12 = *(code **)(lVar11 + 0x10);
    (*pcVar12)(lVar10,param_1,param_3);
    puVar7 = &DAT_100fe69f0;
    FUN_1000f7830(&DAT_100fe69f0,0x100c7a0a0);
    ppuVar8 = &local_88;
    _swift_dynamicCast(ppuVar8,lVar10,param_3,puVar7,6);
    if (((ulong)ppuVar8 & 1) == 0) {
      puVar7 = (undefined *)Swift::Sequence::get_underestimatedCount();
      ppuVar8 = (undefined **)0x0;
      FUN_1007f6ae0(puVar7,0,param_2,param_4);
      local_88 = puVar7;
      ppuStack_80 = ppuVar8;
      FUN_1007ea780(param_1,lVar1,param_3,param_5);
      (**(code **)(lVar11 + 8))(param_1,param_3);
      CVar2.unknown = local_88;
      ppuVar8 = ppuStack_80;
    }
    else {
      FUN_100004594(&local_88);
      (*pcVar12)(auStack_90 + -uVar9,param_1,param_3);
      CVar2 = Swift::ContiguousArray::_init(&local_88,param_2,param_3,param_5);
      CVar3 = CVar2;
      local_88 = CVar2.unknown;
      FUN_100002c1c();
      CVar4 = Swift::ContiguousArray::typeMetadataAccessor();
      puVar7 = PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__RandomAccessCollection_100ead140
      ;
      _swift_getWitnessTable
                (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__RandomAccessCollection_100ead140
                 ,CVar4.unknown);
      ppuVar5 = &local_88;
      FUN_1007dc87c(ppuVar5,0,1,CVar3.unknown,CVar4.unknown,puVar7,param_4);
      _Var6 = Swift::ContiguousArray::get_count((ContiguousArray)CVar2.unknown);
      ppuVar8 = (undefined **)0x0;
      if (0xf < _Var6) {
        _swift_retain(ppuVar5,0);
        ppuVar8 = ppuVar5;
      }
      FUN_10069d9ec(CVar2.unknown,ppuVar8,param_2,param_4);
      _swift_release(ppuVar5);
      (**(code **)(lVar11 + 8))(param_1,param_3);
    }
  }
  auVar13._8_8_ = ppuVar8;
  auVar13._0_8_ = CVar2.unknown;
  return auVar13;
}



/* Address: 0x1007e9e9c | FUN_1007e9e9c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001007e9f10 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined1  [16]
FUN_1007e9e9c(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  ArraySlice AVar2;
  undefined *puVar3;
  ContiguousArray<undefined> CVar4;
  ContiguousArray<undefined> CVar5;
  ContiguousArray CVar6;
  undefined **ppuVar7;
  __int64 _Var8;
  undefined8 uVar9;
  undefined1 *puVar10;
  undefined1 auVar11 [16];
  undefined *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  ppuVar7 = &local_70;
  puVar1 = param_1;
  uVar9 = param_2;
  FUN_1007f6cc8();
  local_70 = puVar1;
  uStack_68 = uVar9;
  local_60 = param_3;
  uStack_58 = param_4;
  AVar2 = Swift::ArraySlice::typeMetadataAccessor();
  _swift_unknownObjectRetain(puVar1);
  puVar3 = PTR_Swift__Swift__ArraySlice<undefined>_>Swift__Sequence_100eacc60;
  _swift_getWitnessTable
            (PTR_Swift__Swift__ArraySlice<undefined>_>Swift__Sequence_100eacc60,AVar2.unknown);
  CVar4 = Swift::ContiguousArray::_init(puVar3,param_5,AVar2.unknown,puVar3);
  CVar5 = CVar4;
  local_70 = CVar4.unknown;
  FUN_100002c1c();
  CVar6 = Swift::ContiguousArray::typeMetadataAccessor();
  puVar3 = PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__RandomAccessCollection_100ead140;
  _swift_getWitnessTable
            (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__RandomAccessCollection_100ead140,
             CVar6.unknown);
  FUN_1007dc87c(&local_70,0,1,CVar5.unknown,CVar6.unknown,puVar3,param_6);
  _Var8 = Swift::ContiguousArray::get_count((ContiguousArray)CVar4.unknown);
  puVar10 = (undefined1 *)0x0;
  if (0xf < _Var8) {
    _swift_retain(ppuVar7,0);
    puVar10 = (undefined1 *)ppuVar7;
  }
  FUN_10069d9ec(CVar4.unknown,puVar10,param_5,param_6);
  _swift_release(ppuVar7);
  _swift_unknownObjectRelease(puVar1);
  _swift_release(param_2);
  _swift_release(param_1);
  auVar11._8_8_ = puVar10;
  auVar11._0_8_ = CVar4.unknown;
  return auVar11;
}



/* Address: 0x1007e9fe8 | FUN_1007e9fe8 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001007ea044 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined1  [16] FUN_1007e9fe8(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  Set SVar1;
  undefined *puVar2;
  ContiguousArray<undefined> CVar3;
  ContiguousArray<undefined> CVar4;
  ContiguousArray CVar5;
  undefined **ppuVar6;
  __int64 _Var7;
  undefined **ppuVar8;
  undefined1 auVar9 [16];
  undefined *local_48;
  
  local_48 = param_1;
  SVar1 = Swift::Set::typeMetadataAccessor();
  _swift_bridgeObjectRetain(param_1);
  puVar2 = PTR_Swift__Swift__Set<undefined>_>Swift__Sequence_100eac6d0;
  _swift_getWitnessTable(PTR_Swift__Swift__Set<undefined>_>Swift__Sequence_100eac6d0,SVar1.unknown);
  CVar3 = Swift::ContiguousArray::_init(puVar2,param_2,SVar1.unknown,puVar2);
  CVar4 = CVar3;
  local_48 = CVar3.unknown;
  FUN_100002c1c();
  CVar5 = Swift::ContiguousArray::typeMetadataAccessor();
  puVar2 = PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__RandomAccessCollection_100ead140;
  _swift_getWitnessTable
            (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__RandomAccessCollection_100ead140,
             CVar5.unknown);
  ppuVar6 = &local_48;
  FUN_1007dc87c(ppuVar6,0,1,CVar4.unknown,CVar5.unknown,puVar2,param_3);
  _Var7 = Swift::ContiguousArray::get_count((ContiguousArray)CVar3.unknown);
  ppuVar8 = (undefined **)0x0;
  if (0xf < _Var7) {
    _swift_retain(ppuVar6,0);
    ppuVar8 = ppuVar6;
  }
  FUN_10069d9ec(CVar3.unknown,ppuVar8,param_2,param_3);
  _swift_release(ppuVar6);
  _swift_bridgeObjectRelease(param_1);
  auVar9._8_8_ = ppuVar8;
  auVar9._0_8_ = CVar3.unknown;
  return auVar9;
}


