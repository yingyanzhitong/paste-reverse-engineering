/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1002ca718 | FUN_1002ca718 */

void FUN_1002ca718(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = &DAT_100c3ce00;
  _swift_getKeyPath();
  puVar2 = &DAT_100fbc418;
  FUN_1000037f0(&DAT_100fbc418,&DAT_100c3d410);
  _swift_allocObject();
  FUN_1000da6e0(puVar1,puVar2);
  FUN_1000d4ca4(0);
  _swift_allocObject();
  uVar3 = 0x6769666e6f43;
  FUN_1000d4624(0x6769666e6f43,&DAT_e600000000000000);
  *param_1 = puVar1;
  param_1[1] = uVar3;
  param_1[2] = param_2;
  param_1[3] = param_3;
  param_1[4] = param_4;
  param_1[5] = param_5;
  param_1[6] = param_6;
  return;
}



/* Address: 0x1002ca7e0 | FUN_1002ca7e0 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002ca7e0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  NSString *pNVar3;
  ID IVar4;
  long extraout_x8;
  long lVar5;
  long lVar6;
  code *pcVar7;
  ID local_80 [4];
  
  lVar2 = 0;
  FUN_1002cd128(0,*(undefined8 *)(param_2 + 0x10));
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = (long)local_80 + -extraout_x8;
  FUN_1000da768(local_80);
  IVar4 = local_80[0];
  FUN_1002ca654(lVar5,param_2);
  uVar1 = *(undefined8 *)((long)local_80 + -extraout_x8 + 8);
  pcVar7 = *(code **)(lVar6 + 8);
  _swift_bridgeObjectRetain(uVar1);
  (*pcVar7)(lVar5,lVar2);
  pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(uVar1);
  IVar4 = objc_stub::objectForKey_(IVar4,pNVar3);
  if (IVar4 == 0) {
    local_80[1] = 0;
    local_80[0] = 0;
    local_80[3] = 0;
    local_80[2] = 0;
  }
  else {
    Swift::__bridgeAnyObjectToAny();
    _swift_unknownObjectRelease(IVar4);
  }
  FUN_1002ca920(param_1,local_80,param_2);
  FUN_1002cabd4(local_80);
  return;
}



/* Address: 0x1002ca920 | FUN_1002ca920 */

/* WARNING: Removing unreachable block (ram,0x0001002caa04) */

void FUN_1002ca920(undefined8 param_1,undefined8 param_2,long param_3)

{
  Optional OVar1;
  long lVar2;
  undefined7 extraout_var;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_110 [16];
  
  lVar6 = *(long *)(param_3 + 0x10);
  lVar2 = 0;
  FUN_1002cd128(0,lVar6);
  lVar4 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = auStack_110 + -extraout_x8;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lVar8 = *(long *)(CONCAT71(extraout_var,OVar1.value) + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = (long)puVar9 - extraout_x8_00;
  lVar7 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar7 + 0x40));
  lVar11 = lVar10 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(unaff_x20 + 0x18))(lVar10,param_2);
  lVar3 = lVar10;
  (**(code **)(lVar7 + 0x30))(lVar10,1,lVar6);
  if ((int)lVar3 == 1) {
    (**(code **)(lVar8 + 8))(lVar10,CONCAT71(extraout_var,OVar1.value));
    FUN_1002ca654(puVar9,param_3);
    (**(code **)(lVar7 + 0x10))(param_1,puVar9 + *(int *)(lVar2 + 0x1c),lVar6);
    (**(code **)(lVar4 + 8))(puVar9,lVar2);
  }
  else {
    pcVar5 = *(code **)(lVar7 + 0x20);
    (*pcVar5)(lVar11,lVar10,lVar6);
    (*pcVar5)(param_1,lVar11,lVar6);
  }
  return;
}



/* Address: 0x1002cabd4 | FUN_1002cabd4 */

undefined8 FUN_1002cabd4(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fbc420;
  FUN_1000037f0(&DAT_100fbc420,&DAT_100c3ce30);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x1002cac1c | FUN_1002cac1c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Type propagation algorithm not settling */

void FUN_1002cac1c(ID param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  ID *pIVar4;
  NSString *pNVar5;
  long extraout_x8;
  long extraout_x8_00;
  long lVar6;
  undefined8 *unaff_x20;
  code *pcVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_f0 [8];
  ID local_e8 [4];
  long local_c8;
  ID local_c0 [3];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar6 = *(long *)(param_2 + 0x10);
  lVar2 = 0;
  FUN_1002cd128(0,lVar6);
  lVar12 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = -extraout_x8;
  puVar8 = auStack_f0 + lVar1;
  lVar11 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar11 + 0x40));
  lVar9 = (long)puVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar11 + 0x10))(lVar9,param_1,lVar6);
  puVar3 = &DAT_100fbc420;
  FUN_1000037f0(&DAT_100fbc420,&DAT_100c3ce30);
  _swift_dynamicCast(&local_a0,lVar9,lVar6,puVar3,7);
  FUN_1002cabd4(&local_a0);
  local_e8[0] = param_1;
  if (local_88 == 0) {
    uVar10 = *unaff_x20;
    FUN_1000da768(local_c0);
    uStack_90 = unaff_x20[2];
    uStack_98 = unaff_x20[1];
    uStack_80 = unaff_x20[4];
    local_88 = unaff_x20[3];
    uStack_70 = unaff_x20[6];
    uStack_78 = unaff_x20[5];
    local_a0 = uVar10;
    FUN_1002ca654(puVar8,param_2);
    uVar10 = *(undefined8 *)((long)local_e8 + lVar1);
    pcVar7 = *(code **)(lVar12 + 8);
    _swift_bridgeObjectRetain(uVar10);
    (*pcVar7)(puVar8,lVar2);
    pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(uVar10);
    objc_stub::removeObjectForKey_(local_c0[0],pNVar5);
    (**(code **)(lVar11 + 8))(local_e8[0],lVar6);
  }
  else {
    uStack_98 = unaff_x20[1];
    local_a0 = *unaff_x20;
    local_88 = unaff_x20[3];
    uStack_90 = unaff_x20[2];
    uStack_78 = unaff_x20[5];
    uStack_80 = unaff_x20[4];
    uStack_70 = unaff_x20[6];
    FUN_1002caed8(local_e8 + 1,param_1,param_2);
    if (local_c8 == 0) {
      (**(code **)(lVar11 + 8))(param_1,lVar6);
      FUN_1002cabd4(local_e8 + 1);
    }
    else {
      FUN_100011080(local_e8 + 1,local_c0);
      FUN_1000da768(local_e8 + 1);
      pIVar4 = local_c0;
      FUN_100004640(pIVar4,local_a8);
      Swift::__bridgeAnythingToObjectiveC();
      FUN_1002ca654(puVar8,param_2);
      uVar10 = *(undefined8 *)((long)local_e8 + lVar1);
      pcVar7 = *(code **)(lVar12 + 8);
      _swift_bridgeObjectRetain(uVar10);
      (*pcVar7)(puVar8,lVar2);
      pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(uVar10);
      objc_stub::setObject_forKey_(local_e8[1],pIVar4,pNVar5);
      _swift_unknownObjectRelease(pIVar4);
      (**(code **)(lVar11 + 8))(local_e8[0],lVar6);
      FUN_100004594(local_c0);
    }
  }
  return;
}



/* Address: 0x1002caed8 | FUN_1002caed8 */

/* WARNING: Removing unreachable block (ram,0x0001002caf58) */

void FUN_1002caed8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_1002cd128(0,*(undefined8 *)(param_3 + 0x10));
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(unaff_x20 + 0x28))(param_1,param_2);
  return;
}



/* Address: 0x1002cb074 | FUN_1002cb074 */

undefined1  [16] FUN_1002cb074(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  long lVar4;
  undefined8 *unaff_x20;
  void *pvVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  
  puVar1 = PTR__swift_coroFrameAlloc_100eae1a0;
  puVar2 = (undefined8 *)0x68;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    puVar2 = _malloc(0x68);
  }
  else {
    _swift_coroFrameAlloc(0x68,0x7d5);
  }
  *param_1 = puVar2;
  puVar2[7] = param_2;
  puVar2[8] = unaff_x20;
  lVar4 = *(long *)(param_2 + 0x10);
  puVar2[9] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  puVar2[10] = lVar4;
  pvVar5 = *(void **)(lVar4 + 0x40);
  if (puVar1 == (undefined *)0x0) {
    pvVar3 = _malloc((size_t)pvVar5);
    puVar2[0xb] = pvVar3;
    pvVar5 = _malloc((size_t)pvVar5);
  }
  else {
    pvVar3 = pvVar5;
    _swift_coroFrameAlloc(pvVar5,0x7d5);
    puVar2[0xb] = pvVar3;
    _swift_coroFrameAlloc(pvVar5,0x7d5);
  }
  puVar2[0xc] = pvVar5;
  uVar7 = unaff_x20[1];
  uVar6 = *unaff_x20;
  uVar9 = unaff_x20[3];
  uVar8 = unaff_x20[2];
  uVar11 = unaff_x20[5];
  uVar10 = unaff_x20[4];
  puVar2[6] = unaff_x20[6];
  puVar2[3] = uVar9;
  puVar2[2] = uVar8;
  puVar2[5] = uVar11;
  puVar2[4] = uVar10;
  puVar2[1] = uVar7;
  *puVar2 = uVar6;
  FUN_1002ca7e0(pvVar5,param_2);
  auVar12._8_8_ = pvVar5;
  auVar12._0_8_ = FUN_1002cb154;
  return auVar12;
}



/* Address: 0x1002cb154 | FUN_1002cb154 */

void FUN_1002cb154(undefined8 *param_1,ulong param_2)

{
  void *pvVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  void *pvVar4;
  long lVar5;
  void *pvVar6;
  
  pvVar6 = (void *)*param_1;
  pvVar1 = *(void **)((long)pvVar6 + 0x58);
  pvVar4 = *(void **)((long)pvVar6 + 0x60);
  if ((param_2 & 1) == 0) {
    FUN_1002cac1c(pvVar4,*(undefined8 *)((long)pvVar6 + 0x38));
  }
  else {
    uVar2 = *(undefined8 *)((long)pvVar6 + 0x48);
    lVar5 = *(long *)((long)pvVar6 + 0x50);
    uVar3 = *(undefined8 *)((long)pvVar6 + 0x38);
    (**(code **)(lVar5 + 0x10))(pvVar1,pvVar4,uVar2);
    FUN_1002cac1c(pvVar1,uVar3);
    (**(code **)(lVar5 + 8))(pvVar4,uVar2);
  }
  _free(pvVar4);
  _free(pvVar1);
  _free(pvVar6);
  return;
}



/* Address: 0x1002cb1ec | FUN_1002cb1ec */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_1002cb1ec(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  AnyPublisher<(extension_in_Combine):Combine_Publisher_eraseToAnyPublisher()__>_Combine_AnyPublisher<A_Output,A_Failure>__extension_in_Combine__Combine_Publisher_eraseToAnyPublisher____>_Combine_AnyPublisher<A_Output,A_Failure>>
  AVar7;
  long extraout_x8;
  long extraout_x8_00;
  long lVar8;
  code *pcVar9;
  undefined8 *unaff_x20;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *apuStack_b0 [5];
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  uVar13 = *(undefined8 *)(param_1 + 0x10);
  lVar4 = 0;
  FUN_1002cd128(0,uVar13);
  lVar8 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = (undefined8 *)((long)apuStack_b0 + -extraout_x8);
  uVar5 = 0xff;
  _swift_getTupleTypeMetadata2(0xff,uVar13,uVar13,"old new ",0);
  apuStack_b0[3] = (undefined *)uVar5;
  FUN_1002cb418();
  apuStack_b0[2] = (undefined *)uVar5;
  apuStack_b0[4] = (undefined *)Combine::Publishers::Map::typeMetadataAccessor();
  local_88 = *(long *)(apuStack_b0[4] + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_88 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar11 = *unaff_x20;
  FUN_1000da768(&local_80);
  apuStack_b0[1] = (undefined *)local_80;
  FUN_1002ca654(puVar10,param_1);
  uVar5 = *puVar10;
  uVar2 = *(undefined8 *)((long)apuStack_b0 + -extraout_x8 + 8);
  pcVar9 = *(code **)(lVar8 + 8);
  _swift_bridgeObjectRetain(uVar2);
  (*pcVar9)(puVar10,lVar4);
  uStack_68 = 7;
  uVar1 = unaff_x20[1];
  uVar3 = unaff_x20[2];
  uVar12 = unaff_x20[4];
  uVar14 = unaff_x20[6];
  puVar6 = &DAT_100ec6ec0;
  uStack_78 = uVar5;
  local_70 = uVar2;
  _swift_allocObject(&DAT_100ec6ec0,0x50,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar13;
  uVar5 = *unaff_x20;
  uVar15 = unaff_x20[3];
  uVar13 = unaff_x20[2];
  *(undefined8 *)(puVar6 + 0x20) = unaff_x20[1];
  *(undefined8 *)(puVar6 + 0x18) = uVar5;
  *(undefined8 *)(puVar6 + 0x30) = uVar15;
  *(undefined8 *)(puVar6 + 0x28) = uVar13;
  uVar5 = unaff_x20[4];
  *(undefined8 *)(puVar6 + 0x40) = unaff_x20[5];
  *(undefined8 *)(puVar6 + 0x38) = uVar5;
  *(undefined8 *)(puVar6 + 0x48) = unaff_x20[6];
  _swift_retain(uVar11);
  _swift_retain(uVar1);
  _swift_retain(uVar3);
  _swift_retain(uVar12);
  _swift_retain(uVar14);
  (extension_Combine)::Combine::Publisher::_map();
  _swift_bridgeObjectRelease(uVar2);
  _swift_release(puVar6);
  puVar6 = apuStack_b0[4];
  _swift_getWitnessTable
            (PTR_Combine__Combine__Publishers__Map<undefined,undefined>_>Combine__Publisher_100ea9698
             ,apuStack_b0[4]);
  AVar7 = (extension_Combine)::Combine::Publisher::_eraseToAnyPublisher();
  (**(code **)(local_88 + 8))((long)puVar10 - extraout_x8_00,puVar6);
  return AVar7.unknown;
}



/* Address: 0x1002cb418 | FUN_1002cb418 */

void FUN_1002cb418(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fbc428 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c3d5d4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c3d5d4,&DAT_100ec7598);
  DAT_100fbc428 = pTVar1;
  return;
}



/* Address: 0x1002cb458 | FUN_1002cb458 */

void FUN_1002cb458(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  _swift_getTupleTypeMetadata2(0,param_4,param_4,"old new ",0);
  iVar1 = *(int *)(lVar2 + 0x30);
  uVar3 = 0;
  FUN_1002cc310(0,param_4);
  FUN_1002ca920(param_1,param_2,uVar3);
  FUN_1002ca920(param_1 + iVar1,param_2 + 0x20,uVar3);
  return;
}



/* Address: 0x1002cb4dc | FUN_1002cb4dc */

void FUN_1002cb4dc(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  lVar2 = *param_3;
  local_78 = param_2;
  _swift_unknownObjectRetain();
  _swift_getAtKeyPath(&local_b0,&local_78,param_4);
  uStack_68 = uStack_a8;
  local_70 = local_b0;
  uStack_58 = uStack_98;
  local_60 = uStack_a0;
  uStack_48 = uStack_88;
  local_50 = local_90;
  local_40 = local_80;
  FUN_1002cc310(0,*(undefined8 *)
                   (lVar2 + *(long *)
                             PTR___class_metadata_base_offset_for_Swift_ReferenceWritableKeyPath_100ead6a0
                   + 8));
  FUN_1002ca7e0(param_1);
  _swift_release(local_70);
  _swift_release(uStack_68);
  _swift_release(local_60);
  _swift_release(local_50);
  uVar1 = local_40;
  _swift_unknownObjectRelease(param_2);
  _swift_release(uVar1);
  return;
}



/* Address: 0x1002cb5a0 | FUN_1002cb5a0 */

void FUN_1002cb5a0(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  
  lVar1 = *param_3;
  FUN_1002cc3a0();
  _swift_unknownObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x0001002cb5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*(long *)(lVar1 + *(long *)
                                            PTR___class_metadata_base_offset_for_Swift_ReferenceWritableKeyPath_100ead6a0
                                  + 8) + -8) + 8))(param_1);
  return;
}



/* Address: 0x1002cb5f8 | FUN_1002cb5f8 */

undefined1  [16]
FUN_1002cb5f8(undefined8 *param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  long lVar4;
  void *pvVar5;
  undefined1 auVar6 [16];
  
  puVar1 = PTR__swift_coroFrameAlloc_100eae1a0;
  puVar2 = (undefined8 *)&DAT_00000038;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    puVar2 = _malloc(0x38);
  }
  else {
    _swift_coroFrameAlloc(0x38,0xd52e);
  }
  *param_1 = puVar2;
  puVar2[1] = param_3;
  puVar2[2] = param_4;
  *puVar2 = param_2;
  lVar4 = *(long *)(*param_3 +
                    *(long *)
                     PTR___class_metadata_base_offset_for_Swift_ReferenceWritableKeyPath_100ead6a0 +
                   8);
  puVar2[3] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  puVar2[4] = lVar4;
  pvVar5 = *(void **)(lVar4 + 0x40);
  if (puVar1 == (undefined *)0x0) {
    pvVar3 = _malloc((size_t)pvVar5);
    puVar2[5] = pvVar3;
    pvVar5 = _malloc((size_t)pvVar5);
  }
  else {
    pvVar3 = pvVar5;
    _swift_coroFrameAlloc(pvVar5,0xd52e);
    puVar2[5] = pvVar3;
    _swift_coroFrameAlloc(pvVar5,0xd52e);
  }
  puVar2[6] = pvVar5;
  FUN_1002cb4dc(pvVar5,param_2,param_3,param_4);
  auVar6._8_8_ = pvVar5;
  auVar6._0_8_ = FUN_1002cb6e4;
  return auVar6;
}



/* Address: 0x1002cb6e4 | FUN_1002cb6e4 */

void FUN_1002cb6e4(undefined8 *param_1,ulong param_2)

{
  void *pvVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  void *pvVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  
  param_1 = (undefined8 *)*param_1;
  pvVar1 = (void *)param_1[5];
  pvVar4 = (void *)param_1[6];
  uVar2 = param_1[3];
  lVar5 = param_1[4];
  uVar3 = param_1[1];
  uVar6 = param_1[2];
  uVar7 = *param_1;
  if ((param_2 & 1) == 0) {
    _swift_retain(uVar6);
    _swift_retain(uVar3);
    _swift_unknownObjectRetain(uVar7);
    FUN_1002cc3a0(pvVar4,uVar7,uVar3,uVar6);
    _swift_unknownObjectRelease(uVar7);
    pcVar8 = *(code **)(lVar5 + 8);
  }
  else {
    (**(code **)(lVar5 + 0x10))(pvVar1,pvVar4,uVar2);
    _swift_retain(uVar6);
    _swift_retain(uVar3);
    _swift_unknownObjectRetain(uVar7);
    FUN_1002cc3a0(pvVar1,uVar7,uVar3,uVar6);
    _swift_unknownObjectRelease(uVar7);
    pcVar8 = *(code **)(lVar5 + 8);
    (*pcVar8)(pvVar1,uVar2);
  }
  (*pcVar8)(pvVar4,uVar2);
  _free(pvVar4);
  _free(pvVar1);
  _free(param_1);
  return;
}



/* Address: 0x1002cb7e0 | FUN_1002cb7e0 */

void FUN_1002cb7e0(undefined8 param_1,undefined8 param_2)

{
  FUN_1002cbe9c(param_1,param_2,&DAT_100ec6ee8,&DAT_100ec6f10,FUN_1002cc5a8,FUN_1002cc5c0);
  return;
}



/* Address: 0x1002cb804 | FUN_1002cb804 */

void FUN_1002cb804(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [32];
  
  FUN_1002cca74(param_2,auStack_50);
  puVar1 = &DAT_100fbc420;
  FUN_1000037f0(&DAT_100fbc420,&DAT_100c3ce30);
  uVar2 = param_1;
  _swift_dynamicCast(param_1,auStack_50,puVar1,param_3,6);
  (**(code **)(*(long *)(param_3 + -8) + 0x38))(param_1,(uint)uVar2 ^ 1,1,param_3);
  return;
}



/* Address: 0x1002cb88c | FUN_1002cb88c */

void FUN_1002cb88c(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  lVar3 = *param_2;
  puVar1 = &DAT_100ec6f38;
  _swift_allocObject(&DAT_100ec6f38,0x28,7);
  uVar4 = *(undefined8 *)
           (*(long *)(lVar3 + *(long *)PTR___class_metadata_base_offset_for_Swift_KeyPath_100eadf28)
           + 0x10);
  *(undefined8 *)(puVar1 + 0x10) = uVar4;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  puVar2 = &DAT_100ec6f60;
  _swift_allocObject(&DAT_100ec6f60,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar4;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  FUN_1002ca718(&local_78,param_2,FUN_1002cc610,puVar1,FUN_1002cc63c,puVar2);
  param_1[1] = uStack_70;
  *param_1 = local_78;
  param_1[3] = uStack_60;
  param_1[2] = local_68;
  param_1[5] = uStack_50;
  param_1[4] = local_58;
  param_1[6] = local_48;
  return;
}



/* Address: 0x1002cb960 | FUN_1002cb960 */

void FUN_1002cb960(undefined8 param_1,undefined8 param_2,Data param_3)

{
  ulong uVar1;
  JSONDecoder *pJVar2;
  undefined8 uVar3;
  code *pcVar4;
  long unaff_x21;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [24];
  long local_58;
  
  uVar1 = 0;
  FUN_1002cca74(param_2,auStack_70);
  if (local_58 == 0) {
    FUN_1002cabd4(auStack_70);
  }
  else {
    _swift_dynamicCast(&local_80,auStack_70,PTR___type_metadata_for_Any_100eae0c0 + 8,
                       PTR___type_metadata_for_Foundation_Data_100ea7300,6);
    if ((uVar1 & 1) != 0) {
      pJVar2 = Foundation::JSONDecoder::typeMetadataAccessor();
      _swift_allocObject(pJVar2,*(undefined4 *)(pJVar2 + 0x30),*(undefined2 *)(pJVar2 + 0x34));
      pJVar2 = Foundation::JSONDecoder::init(pJVar2);
      Foundation::JSONDecoder::_decode(pJVar2,param_3);
      if (unaff_x21 != 0) {
        _swift_release(pJVar2);
        FUN_10003bf2c(local_80,uStack_78);
        return;
      }
      FUN_10003bf2c(local_80,uStack_78);
      _swift_release(pJVar2);
      pcVar4 = *(code **)(*(long *)(param_3.unknown + -8) + 0x38);
      uVar3 = 0;
      goto LAB_1002cba40;
    }
  }
  pcVar4 = *(code **)(*(long *)(param_3.unknown + -8) + 0x38);
  uVar3 = 1;
LAB_1002cba40:
  (*pcVar4)(param_1,uVar3,1,param_3.unknown);
  return;
}



/* Address: 0x1002cba94 | FUN_1002cba94 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001002cbaf4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1002cba94(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  JSONEncoder *pJVar1;
  Data DVar2;
  long unaff_x21;
  
  pJVar1 = Foundation::JSONEncoder::typeMetadataAccessor();
  _swift_allocObject(pJVar1,*(undefined4 *)(pJVar1 + 0x30),*(undefined2 *)(pJVar1 + 0x34));
  pJVar1 = Foundation::JSONEncoder::init(pJVar1);
  DVar2 = Foundation::JSONEncoder::_encode(pJVar1,pJVar1,param_3,param_5);
  _swift_release(pJVar1);
  if (unaff_x21 == 0) {
    param_1[3] = PTR___type_metadata_for_Foundation_Data_100ea7300;
    *param_1 = DVar2.unknown;
    param_1[1] = param_3;
  }
  return;
}



/* Address: 0x1002cbb3c | FUN_1002cbb3c */

void FUN_1002cbb3c(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  lVar3 = *param_2;
  puVar1 = &DAT_100ec6f88;
  _swift_allocObject(&DAT_100ec6f88,0x30,7);
  uVar4 = *(undefined8 *)
           (*(long *)(lVar3 + *(long *)PTR___class_metadata_base_offset_for_Swift_KeyPath_100eadf28)
           + 0x10);
  *(undefined8 *)(puVar1 + 0x10) = uVar4;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  puVar2 = &DAT_100ec6fb0;
  _swift_allocObject(&DAT_100ec6fb0,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar4;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  *(undefined8 *)(puVar2 + 0x28) = param_5;
  FUN_1002ca718(&local_88,param_2,FUN_1002cc668,puVar1,FUN_1002cc684,puVar2);
  param_1[1] = uStack_80;
  *param_1 = local_88;
  param_1[3] = uStack_70;
  param_1[2] = local_78;
  param_1[5] = uStack_60;
  param_1[4] = local_68;
  param_1[6] = local_58;
  return;
}



/* Address: 0x1002cbc1c | FUN_1002cbc1c */

void FUN_1002cbc1c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  Optional OVar1;
  long lVar2;
  undefined7 extraout_var;
  undefined *puVar3;
  ulong uVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 auStack_80 [32];
  
  lVar2 = 0xff;
  local_90 = param_6;
  local_88 = param_1;
  _swift_getAssociatedTypeWitness
            (0xff,param_6,param_3,
             PTR___protocol_requirements_base_descriptor_for_Swift_RawRepresentable_100eac3a0,
             PTR___associated_type_descriptor_for_Swift_RawRepresentable_RawValue_100eabd20);
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lVar6 = *(long *)(CONCAT71(extraout_var,OVar1.value) + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar7 = (long)&local_90 - extraout_x8;
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar5 + 0x40));
  lVar9 = uVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar8 = lVar9 - extraout_x12;
  FUN_1002cca74(param_2,auStack_80);
  puVar3 = &DAT_100fbc420;
  FUN_1000037f0(&DAT_100fbc420,&DAT_100c3ce30);
  uVar4 = uVar7;
  _swift_dynamicCast(uVar7,auStack_80,puVar3,lVar2,6);
  if ((uVar4 & 1) == 0) {
    (**(code **)(lVar5 + 0x38))(uVar7,1,1,lVar2);
    (**(code **)(lVar6 + 8))(uVar7,CONCAT71(extraout_var,OVar1.value));
    (**(code **)(*(long *)(param_3 + -8) + 0x38))(local_88,1,1,param_3);
  }
  else {
    (**(code **)(lVar5 + 0x38))(uVar7,0,1,lVar2);
    (**(code **)(lVar5 + 0x20))(lVar8,uVar7,lVar2);
    (**(code **)(lVar5 + 0x10))(lVar9,lVar8,lVar2);
    Swift::RawRepresentable::_init();
    (**(code **)(lVar5 + 8))(lVar8,lVar2);
  }
  return;
}



/* Address: 0x1002cbdfc | FUN_1002cbdfc */

void FUN_1002cbdfc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_6,param_3,
             PTR___protocol_requirements_base_descriptor_for_Swift_RawRepresentable_100eac3a0,
             PTR___associated_type_descriptor_for_Swift_RawRepresentable_RawValue_100eabd20);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  FUN_10000cbb0(param_1);
  Swift::RawRepresentable::_get_rawValue();
  return;
}



/* Address: 0x1002cbe78 | FUN_1002cbe78 */

void FUN_1002cbe78(undefined8 param_1,undefined8 param_2)

{
  FUN_1002cbe9c(param_1,param_2,&DAT_100ec6fd8,&DAT_100ec7000,FUN_1002cc6a0,FUN_1002cc6b8);
  return;
}



/* Address: 0x1002cbe9c | FUN_1002cbe9c */

void FUN_1002cbe9c(undefined8 *param_1,long *param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  lVar1 = *param_2;
  _swift_allocObject(param_4,0x20,7);
  uVar2 = *(undefined8 *)
           (*(long *)(lVar1 + *(long *)PTR___class_metadata_base_offset_for_Swift_KeyPath_100eadf28)
           + 0x10);
  *(undefined8 *)(param_4 + 0x10) = uVar2;
  *(undefined8 *)(param_4 + 0x18) = param_3;
  _swift_allocObject(param_5,0x20,7);
  *(undefined8 *)(param_5 + 0x10) = uVar2;
  *(undefined8 *)(param_5 + 0x18) = param_3;
  FUN_1002ca718(&local_88,param_2,param_6,param_4,param_7,param_5);
  param_1[1] = uStack_80;
  *param_1 = local_88;
  param_1[3] = uStack_70;
  param_1[2] = local_78;
  param_1[5] = uStack_60;
  param_1[4] = local_68;
  param_1[6] = local_58;
  return;
}



/* Address: 0x1002cbf68 | FUN_1002cbf68 */

void FUN_1002cbf68(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  Optional OVar1;
  long lVar2;
  undefined7 extraout_var;
  undefined *puVar3;
  ulong uVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 auStack_80 [32];
  
  lVar2 = 0xff;
  local_90 = param_4;
  local_88 = param_1;
  _swift_getAssociatedTypeWitness
            (0xff,param_4,param_3,
             PTR___protocol_requirements_base_descriptor_for_Swift_RawRepresentable_100eac3a0,
             PTR___associated_type_descriptor_for_Swift_RawRepresentable_RawValue_100eabd20);
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lVar6 = *(long *)(CONCAT71(extraout_var,OVar1.value) + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar7 = (long)&local_90 - extraout_x8;
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar5 + 0x40));
  lVar9 = uVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar8 = lVar9 - extraout_x12;
  FUN_1002cca74(param_2,auStack_80);
  puVar3 = &DAT_100fbc420;
  FUN_1000037f0(&DAT_100fbc420,&DAT_100c3ce30);
  uVar4 = uVar7;
  _swift_dynamicCast(uVar7,auStack_80,puVar3,lVar2,6);
  if ((uVar4 & 1) == 0) {
    (**(code **)(lVar5 + 0x38))(uVar7,1,1,lVar2);
    (**(code **)(lVar6 + 8))(uVar7,CONCAT71(extraout_var,OVar1.value));
    (**(code **)(*(long *)(param_3 + -8) + 0x38))(local_88,1,1,param_3);
  }
  else {
    (**(code **)(lVar5 + 0x38))(uVar7,0,1,lVar2);
    (**(code **)(lVar5 + 0x20))(lVar8,uVar7,lVar2);
    (**(code **)(lVar5 + 0x10))(lVar9,lVar8,lVar2);
    Swift::RawRepresentable::_init();
    (**(code **)(lVar5 + 8))(lVar8,lVar2);
  }
  return;
}



/* Address: 0x1002cc144 | FUN_1002cc144 */

void FUN_1002cc144(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_4,param_3,
             PTR___protocol_requirements_base_descriptor_for_Swift_RawRepresentable_100eac3a0,
             PTR___associated_type_descriptor_for_Swift_RawRepresentable_RawValue_100eabd20);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  FUN_10000cbb0(param_1);
  Swift::RawRepresentable::_get_rawValue();
  return;
}



/* Address: 0x1002cc1c0 | FUN_1002cc1c0 */

void FUN_1002cc1c0(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100c3ce38;
  _swift_getKeyPath(&DAT_100c3ce38);
  FUN_1000037f0(&DAT_100fbc430,&DAT_100c3ce60);
  _swift_allocObject();
  FUN_1000da6e0(puVar1);
  return;
}



/* Address: 0x1002cc214 | FUN_1002cc214 */

void FUN_1002cc214(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1002d038c();
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(undefined ***)(param_1 + 0x20) = &PTR_PTR_100ec73a8;
  FUN_1000d80e0(param_1,"PasteConfig/DI+PasteConfig.swift",0x20,2,10,0x13,FUN_1002cd738,0);
  return;
}



/* Address: 0x1002cc270 | FUN_1002cc270 */

void FUN_1002cc270(void)

{
  FUN_1000d4ca4(0);
  _swift_allocObject();
  FUN_1000d4624(0x6f4365746f6d6552,0xec0000006769666e);
  return;
}



/* Address: 0x1002cc2c0 | FUN_1002cc2c0 */

void FUN_1002cc2c0(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x48));
  _swift_deallocObject();
  return;
}



/* Address: 0x1002cc304 | FUN_1002cc304 */

void FUN_1002cc304(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1002cb458(param_1,unaff_x20 + 0x18,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1002cc310 | FUN_1002cc310 */

void FUN_1002cc310(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1002cc31c | FUN_1002cc31c */

void FUN_1002cc31c(void)

{
  FUN_100003a00(&DAT_100fbc518,FUN_1002ccac4,&TargetProtocolConformanceDescriptor_100c3d270);
  FUN_100003a00(&DAT_100fbc520,FUN_1002ccac4,&TargetProtocolConformanceDescriptor_100c3d1c4);
  (extension_Swift)::Swift::_SwiftNewtypeWrapper::__toCustomAnyHashable();
  return;
}



/* Address: 0x1002cc3a0 | FUN_1002cc3a0 */

void FUN_1002cc3a0(undefined8 param_1,ObservableObjectPublisher *param_2,long *param_3,
                  undefined8 param_4)

{
  ObservableObjectPublisher *pOVar1;
  undefined *puVar2;
  ObservableObjectPublisher *pOVar3;
  ObservableObjectPublisher **ppOVar4;
  code *pcVar5;
  undefined8 uVar6;
  long extraout_x8;
  long lVar7;
  long lVar8;
  ObservableObjectPublisher *local_90;
  undefined1 auStack_88 [24];
  undefined8 local_70;
  ObservableObjectPublisher *local_68;
  
  lVar7 = *(long *)(*param_3 +
                    *(long *)
                     PTR___class_metadata_base_offset_for_Swift_ReferenceWritableKeyPath_100ead6a0 +
                   8);
  lVar8 = *(long *)(lVar7 + -8);
  pOVar3 = param_2;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_unknownObjectRetain(pOVar3);
  pOVar3 = param_2;
  _swift_getObjectType();
  pOVar1 = pOVar3;
  _swift_conformsToProtocol2();
  puVar2 = PTR___protocol_requirements_base_descriptor_for_Combine_ObservableObject_100ea97d0;
  if (pOVar1 == (ObservableObjectPublisher *)0x0 || param_2 == (ObservableObjectPublisher *)0x0) {
    _swift_unknownObjectRelease(param_2);
  }
  else {
    uVar6 = 0;
    _swift_getAssociatedTypeWitness
              (0,pOVar1,pOVar3,
               PTR___protocol_requirements_base_descriptor_for_Combine_ObservableObject_100ea97d0,
               PTR___associated_type_descriptor_for_Combine_ObservableObject_ObjectWillChangePublisher_100ea95e0
              );
    local_70 = uVar6;
    _swift_getAssociatedConformanceWitness
              (pOVar1,pOVar3,uVar6,puVar2,
               PTR___associated_conformance_descriptor_for_Combine_ObservableObject_Combine_ObservableObject_ObjectWillChangePublisher__Combine_Publisher_100ea97b8
              );
    local_68 = pOVar1;
    FUN_10000cbb0(auStack_88);
    Combine::ObservableObject::_get_objectWillChange();
    _swift_unknownObjectRelease(param_2);
    puVar2 = &DAT_100fbc4c8;
    FUN_1000037f0(&DAT_100fbc4c8,&DAT_100c3cf58);
    pOVar3 = Combine::ObservableObjectPublisher::typeMetadataAccessor();
    ppOVar4 = &local_90;
    _swift_dynamicCast(ppOVar4,auStack_88,puVar2,pOVar3,6);
    if (((ulong)ppOVar4 & 1) != 0) {
      Combine::ObservableObjectPublisher::send(local_90);
      _swift_release(local_90);
    }
  }
  (**(code **)(lVar8 + 0x10))(auStack_88 + (-8 - extraout_x8),param_1,lVar7);
  local_90 = param_2;
  _swift_unknownObjectRetain(param_2);
  pcVar5 = (code *)auStack_88;
  _swift_modifyAtReferenceWritableKeyPath(pcVar5,&local_90,param_4);
  uVar6 = 0;
  FUN_1002cc310(0,lVar7);
  FUN_1002cac1c(auStack_88 + (-8 - extraout_x8),uVar6);
  (*pcVar5)(auStack_88,0);
  _swift_unknownObjectRelease(param_2);
  _swift_release(param_3);
  _swift_release(param_4);
  return;
}



/* Address: 0x1002cc598 | FUN_1002cc598 */

void FUN_1002cc598(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x1002cc5a8 | FUN_1002cc5a8 */

void FUN_1002cc5a8(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1002cb804(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1002cc5c0 | FUN_1002cc5c0 */

void FUN_1002cc5c0(long param_1)

{
  long unaff_x20;
  long lVar1;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  *(long *)(param_1 + 0x18) = lVar1;
  FUN_10000cbb0(param_1);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))();
  return;
}



/* Address: 0x1002cc610 | FUN_1002cc610 */

void FUN_1002cc610(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1002cb960(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1002cc62c | FUN_1002cc62c */

void FUN_1002cc62c(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x1002cc63c | FUN_1002cc63c */

void FUN_1002cc63c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1002cba94(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1002cc658 | FUN_1002cc658 */

void FUN_1002cc658(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x1002cc668 | FUN_1002cc668 */

void FUN_1002cc668(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1002cbc1c(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x1002cc684 | FUN_1002cc684 */

void FUN_1002cc684(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1002cbdfc(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x1002cc6a0 | FUN_1002cc6a0 */

void FUN_1002cc6a0(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1002cbf68(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1002cc6b8 | FUN_1002cc6b8 */

void FUN_1002cc6b8(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1002cc144(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1002cc6d0 | FUN_1002cc6d0 */

void FUN_1002cc6d0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1002cc6fc();
  *(long *)(param_1 + 8) = lVar1;
  FUN_1002cc73c();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Address: 0x1002cc6fc | FUN_1002cc6fc */

void FUN_1002cc6fc(void)

{
  undefined *puVar1;
  
  if (DAT_100fbc438 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Foundation__Foundation__Data_>Swift__Decodable_100ea7318;
  _swift_getWitnessTable
            (PTR_Foundation__Foundation__Data_>Swift__Decodable_100ea7318,
             PTR___type_metadata_for_Foundation_Data_100ea7300);
  DAT_100fbc438 = puVar1;
  return;
}



/* Address: 0x1002cc73c | FUN_1002cc73c */

void FUN_1002cc73c(void)

{
  undefined *puVar1;
  
  if (DAT_100fbc440 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Foundation__Foundation__Data_>Swift__Encodable_100ea7308;
  _swift_getWitnessTable
            (PTR_Foundation__Foundation__Data_>Swift__Encodable_100ea7308,
             PTR___type_metadata_for_Foundation_Data_100ea7300);
  DAT_100fbc440 = puVar1;
  return;
}



/* Address: 0x1002cc77c | FUN_1002cc77c */

void FUN_1002cc77c(long param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar2 = *param_3;
  local_38 = *(undefined8 *)(lVar2 + 8);
  puVar1 = 
  PTR__Swift__protocol_conformance_descriptor_for_<A_where_A:_Swift_Decodable>_A____Swift_Decodable_in_Swift_>Swift__Decodable_100eae0b0
  ;
  _swift_getWitnessTable
            (PTR__Swift__protocol_conformance_descriptor_for_<A_where_A:_Swift_Decodable>_A____Swift_Decodable_in_Swift_>Swift__Decodable_100eae0b0
             ,param_2,&local_38);
  *(undefined **)(param_1 + 8) = puVar1;
  local_40 = *(undefined8 *)(lVar2 + 0x10);
  puVar1 = 
  PTR__Swift__protocol_conformance_descriptor_for_<A_where_A:_Swift_Encodable>_A____Swift_Encodable_in_Swift_>Swift__Encodable_100eae098
  ;
  _swift_getWitnessTable
            (PTR__Swift__protocol_conformance_descriptor_for_<A_where_A:_Swift_Encodable>_A____Swift_Encodable_in_Swift_>Swift__Encodable_100eae098
             ,param_2,&local_40);
  *(undefined **)(param_1 + 0x10) = puVar1;
  return;
}



/* Address: 0x1002cc7ec | FUN_1002cc7ec */

void FUN_1002cc7ec(undefined8 *param_1)

{
  _swift_release(*param_1);
  _swift_release(param_1[1]);
  _swift_release(param_1[2]);
  _swift_release(param_1[4]);
  _swift_release(param_1[6]);
  return;
}



/* Address: 0x1002cc82c | FUN_1002cc82c */

undefined8 * FUN_1002cc82c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = param_2[1];
  uVar3 = *param_2;
  uVar2 = param_2[3];
  uVar6 = param_2[2];
  uVar5 = param_2[5];
  uVar4 = param_2[4];
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  param_1[3] = uVar2;
  param_1[2] = uVar6;
  uVar2 = param_2[6];
  param_1[5] = uVar5;
  param_1[4] = uVar4;
  param_1[6] = uVar2;
  _swift_retain(uVar3);
  _swift_retain(uVar1);
  _swift_retain(uVar6);
  _swift_retain(uVar4);
  _swift_retain(uVar2);
  return param_1;
}



/* Address: 0x1002cc8ac | FUN_1002cc8ac */

undefined8 * FUN_1002cc8ac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_retain();
  _swift_release(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_retain();
  _swift_release(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_retain();
  _swift_release(uVar1);
  uVar2 = param_1[4];
  uVar1 = param_2[4];
  uVar3 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar3;
  _swift_retain(uVar1);
  _swift_release(uVar2);
  uVar2 = param_1[6];
  uVar1 = param_2[6];
  uVar3 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar3;
  _swift_retain(uVar1);
  _swift_release(uVar2);
  return param_1;
}



/* Address: 0x1002cc958 | FUN_1002cc958 */

void FUN_1002cc958(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar6 = param_2[5];
  uVar5 = param_2[4];
  param_1[6] = param_2[6];
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  param_1[5] = uVar6;
  param_1[4] = uVar5;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x1002cc974 | FUN_1002cc974 */

undefined8 * FUN_1002cc974(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _swift_release(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _swift_release(uVar1);
  _swift_release(param_1[2]);
  uVar1 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar1;
  _swift_release(param_1[4]);
  uVar2 = param_2[6];
  uVar1 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar1;
  uVar1 = param_1[6];
  param_1[6] = uVar2;
  _swift_release(uVar1);
  return param_1;
}



/* Address: 0x1002cc9e0 | FUN_1002cc9e0 */

int FUN_1002cc9e0(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[7] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x1002cca28 | FUN_1002cca28 */

void FUN_1002cca28(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 7) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 7) = 0;
    }
    if (param_2 != 0) {
      *param_1 = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x1002cca74 | FUN_1002cca74 */

undefined8 FUN_1002cca74(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fbc420;
  FUN_1000037f0(&DAT_100fbc420,&DAT_100c3ce30);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1002ccac4 | FUN_1002ccac4 */

void FUN_1002ccac4(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100fbc4d0,&DAT_100ec7128);
  return;
}



/* Address: 0x1002ccad8 | FUN_1002ccad8 */

void FUN_1002ccad8(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100fbc4d8,&DAT_100ec7150);
  return;
}



/* Address: 0x1002ccaec | FUN_1002ccaec */

void FUN_1002ccaec(void)

{
  FUN_100003a00(&DAT_100fbc4e0,FUN_1002ccad8,&TargetProtocolConformanceDescriptor_100c3cfec);
  return;
}



/* Address: 0x1002ccb18 | FUN_1002ccb18 */

void FUN_1002ccb18(void)

{
  FUN_100003a00(&DAT_100fbc4e8,FUN_1002ccad8,&TargetProtocolConformanceDescriptor_100c3cfb8);
  return;
}



/* Address: 0x1002ccb44 | FUN_1002ccb44 */

void FUN_1002ccb44(void)

{
  FUN_100003a00(&DAT_100fbc4f0,FUN_1002ccad8,&TargetProtocolConformanceDescriptor_100c3d0e4);
  return;
}



/* Address: 0x1002ccb70 | FUN_1002ccb70 */

void FUN_1002ccb70(void)

{
  FUN_100003a00(&DAT_100fbc4f8,FUN_1002ccad8,&TargetProtocolConformanceDescriptor_100c3d018);
  return;
}


