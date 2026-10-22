/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1002d08c8 | FUN_1002d08c8 */

void FUN_1002d08c8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[3] = PTR___type_metadata_for_Swift_Double_100eac5d0;
  *param_1 = uVar1;
  return;
}



/* Address: 0x1002d08e0 | thunk_FUN_1002ca5a0 */

void thunk_FUN_1002ca5a0(void)

{
  FUN_1002ca5a0();
  return;
}



/* Address: 0x1002d08e4 | FUN_1002d08e4 */

undefined * FUN_1002d08e4(_ArrayBuffer param_1)

{
  _CocoaArrayWrapper _Var1;
  undefined *puVar2;
  code *pcVar3;
  bool bVar4;
  _SetStorage *this;
  ulong uVar5;
  AnyCancellable *pAVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined *puVar14;
  ulong uVar15;
  __int64 seed;
  undefined8 local_70;
  ulong local_68;
  
  if ((ulong)param_1.unknown >> 0x3e == 0) {
    puVar14 = *(undefined **)((param_1.unknown & 0xffffffffffffff8U) + 0x10);
  }
  else {
    _Var1.unknown = param_1.unknown & 0xffffffffffffff8U;
    if (((ulong)param_1.unknown & 0x8000000000000000) != 0) {
      _Var1.unknown = param_1.unknown;
    }
    puVar14 = (undefined *)Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  puVar2 = PTR___swiftEmptySetSingleton_100eae0e8;
  if (puVar14 != (undefined *)0x0) {
    this = (_SetStorage *)&DAT_100fbcc28;
    FUN_1000037f0(&DAT_100fbcc28,&DAT_100c3d418);
    Swift::_SetStorage::_allocate(this,(__int64)puVar14);
    puVar2 = puVar14;
  }
  if ((ulong)param_1.unknown >> 0x3e == 0) {
    uVar13 = *(ulong *)(((ulong)param_1.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = param_1.unknown & 0xffffffffffffff8;
    if (((ulong)param_1.unknown & 0x8000000000000000) != 0) {
      _Var1.unknown = param_1.unknown;
    }
    uVar13 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (uVar13 != 0) {
    uVar15 = 0;
    do {
      puVar14 = PTR_typeMetadataAccessor_100ea9780;
      if (((ulong)param_1.unknown & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)param_1.unknown & 0xffffffffffffff8) + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1002d0b4c);
          (*pcVar3)();
        }
        uVar5 = *(ulong *)(param_1.unknown + uVar15 * 8 + 0x20);
        _swift_retain();
      }
      else {
        uVar5 = uVar15;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar15,param_1);
      }
      if (SCARRY8(uVar15,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1002d0b44);
        (*pcVar3)();
      }
      uVar15 = uVar15 + 1;
      seed = *(__int64 *)(puVar2 + 0x28);
      local_68 = uVar5;
      pAVar6 = Combine::AnyCancellable::typeMetadataAccessor();
      FUN_100003a00(&DAT_100fbcc30,puVar14,
                    PTR_Combine__Combine__AnyCancellable_>Swift__Hashable_100ea9790);
      uVar7 = Swift::Hashable::_rawHashValue(seed);
      uVar12 = -1L << ((ulong)(byte)puVar2[0x20] & 0x3f);
      uVar7 = uVar7 & (uVar12 ^ 0xffffffffffffffff);
      uVar9 = uVar7 >> 6;
      uVar10 = *(ulong *)(puVar2 + uVar9 * 8 + 0x38);
      uVar11 = 1L << (uVar7 & 0x3f);
      if ((uVar11 & uVar10) != 0) {
        puVar8 = &DAT_100fbcc38;
        FUN_100003a00(&DAT_100fbcc38,puVar14,
                      PTR_Combine__Combine__AnyCancellable_>Swift__Equatable_100ea9798);
        do {
          local_70 = *(undefined8 *)(*(long *)(puVar2 + 0x30) + uVar7 * 8);
          bVar4 = Swift::Equatable::___infix(&local_70,&local_68,pAVar6,puVar8);
          if (bVar4) {
            _swift_release(uVar5);
            goto LAB_1002d09cc;
          }
          uVar7 = uVar7 + 1 & ~uVar12;
          uVar9 = uVar7 >> 6;
          uVar10 = *(ulong *)(puVar2 + uVar9 * 8 + 0x38);
          uVar11 = 1L << (uVar7 & 0x3f);
        } while ((uVar11 & uVar10) != 0);
      }
      *(ulong *)(puVar2 + uVar9 * 8 + 0x38) = uVar11 | uVar10;
      *(ulong *)(*(long *)(puVar2 + 0x30) + uVar7 * 8) = uVar5;
      if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1002d0b48);
        (*pcVar3)();
      }
      *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + 1;
LAB_1002d09cc:
    } while (uVar15 != uVar13);
  }
  return puVar2;
}



/* Address: 0x1002d0b4c | FUN_1002d0b4c */

void FUN_1002d0b4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  local_48 = param_2;
  uStack_40 = param_3;
  local_38 = param_4;
  _swift_retain();
  _swift_retain(param_3);
  _swift_retain(param_4);
  _swift_getAtKeyPath(param_1,&local_48,param_4);
  _swift_release(param_4);
  _swift_release(param_3);
  _swift_release(param_2);
  return;
}



/* Address: 0x1002d0bc8 | FUN_1002d0bc8 */

undefined * FUN_1002d0bc8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = &DAT_100c3d438;
  _swift_getKeyPath(&DAT_100c3d438);
  puVar2 = &DAT_100fbc430;
  FUN_1000037f0(&DAT_100fbc430,&DAT_100c3ce60);
  _swift_allocObject();
  FUN_1000da6e0(puVar1,puVar2);
  FUN_1000d4ca4(0);
  _swift_allocObject();
  FUN_1000d4624(0x6f4365746f6d6552,0xec0000006769666e);
  return puVar1;
}



/* Address: 0x1002d0c74 | thunk_FUN_1002cc214 */

void thunk_FUN_1002cc214(void)

{
  FUN_1002cc214();
  return;
}



/* Address: 0x1002d0c78 | FUN_1002d0c78 */

void FUN_1002d0c78(undefined8 param_1,undefined8 param_2,undefined8 param_3,char *param_4,
                  void *param_5,undefined8 param_6,undefined8 param_7)

{
  char *pcVar1;
  undefined8 uVar2;
  void *pvVar3;
  String SVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  Optional OVar8;
  long lVar9;
  undefined7 extraout_var;
  undefined1 *puVar10;
  char *pcVar11;
  void *pvVar12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  code *pcVar13;
  long lVar14;
  long lVar15;
  String *pSVar16;
  String SVar17;
  String SStack_110;
  undefined1 *local_100;
  String *local_f8;
  undefined *local_f0;
  undefined8 local_e8;
  char *local_e0;
  undefined1 *local_d8;
  code *local_d0;
  long local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 auStack_90 [24];
  undefined *local_78;
  long lStack_70;
  
  lVar9 = 0;
  local_b8 = param_1;
  local_b0 = param_7;
  FUN_1002cd128(0,param_5);
  local_c8 = *(long *)(lVar9 + -8);
  local_a8 = lVar9;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_c8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  pSVar16 = (String *)((long)&SStack_110 + -extraout_x8);
  OVar8 = Swift::Optional::typeMetadataAccessor();
  local_f0 = (undefined *)CONCAT71(extraout_var,OVar8.value);
  local_100 = *(undefined1 **)((long)local_f0 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)((long)local_100 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = (long)pSVar16 - extraout_x8_00;
  lVar14 = *(long *)((long)param_5 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar14 + 0x40));
  SStack_110.bridgeObject = (void *)(lVar15 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  FUN_1000da768(auStack_90);
  lVar9 = lStack_70;
  puVar7 = local_78;
  puVar10 = auStack_90;
  FUN_100004640(puVar10,local_78);
  local_e8 = param_2;
  local_e0 = param_4;
  local_d8 = puVar10;
  local_c0 = param_3;
  FUN_1002d0b4c(pSVar16,param_2,param_3,param_4,param_5,param_6,local_b0);
  pcVar1 = pSVar16->str;
  uVar2 = *(undefined8 *)((long)&SStack_110 + -extraout_x8 + 8);
  pcVar13 = *(code **)(local_c8 + 8);
  _swift_bridgeObjectRetain(uVar2);
  local_f8 = pSVar16;
  local_d0 = pcVar13;
  (*pcVar13)(pSVar16,local_a8);
  (**(code **)(lVar9 + 0x10))(lVar15,pcVar1,uVar2,param_5,param_6,puVar7,lVar9);
  _swift_bridgeObjectRelease(uVar2);
  lVar9 = lVar15;
  local_c8 = lVar14;
  (**(code **)(lVar14 + 0x30))(lVar15,1,param_5);
  pvVar3 = SStack_110.bridgeObject;
  if ((int)lVar9 == 1) {
    (**(code **)((long)local_100 + 8))(lVar15,local_f0);
    FUN_100004594(auStack_90);
    uVar5 = local_c0;
    FUN_1000d468c(auStack_90);
    local_f0 = local_78;
    local_d8 = (undefined1 *)lStack_70;
    puVar10 = auStack_90;
    FUN_100004640();
    local_a0 = 0;
    local_98 = 0xe000000000000000;
    local_100 = puVar10;
    Swift::_StringGuts::grow(0x1d,(_StringGuts)local_78);
    _swift_bridgeObjectRelease(local_98);
    uVar6 = local_b0;
    pcVar1 = local_e0;
    uVar2 = local_e8;
    pSVar16 = local_f8;
    local_a0 = 0xd00000000000001b;
    local_98 = 0x8000000100da0f00;
    pcVar11 = local_e0;
    pvVar12 = param_5;
    FUN_1002d0b4c(local_f8,local_e8,uVar5,local_e0,param_5,param_6,local_b0);
    pvVar3 = pSVar16->bridgeObject;
    SVar4 = *pSVar16;
    _swift_bridgeObjectRetain(pvVar3);
    lVar9 = local_a8;
    (*local_d0)(pSVar16,local_a8);
    SVar17.bridgeObject = pvVar12;
    SVar17.str = pcVar11;
    Swift::String::append(SVar4,SVar17);
    _swift_bridgeObjectRelease(pvVar3);
    uVar5 = local_98;
    FUN_1000d4df0(local_a0,local_98,local_f0,local_d8);
    _swift_bridgeObjectRelease(uVar5);
    FUN_100004594(auStack_90);
    FUN_1002d0b4c(pSVar16,uVar2,local_c0,pcVar1,param_5,param_6,uVar6);
    (**(code **)(local_c8 + 0x10))
              (local_b8,(long)&pSVar16->str + (long)*(int *)(lVar9 + 0x1c),param_5);
    (*local_d0)(pSVar16,lVar9);
  }
  else {
    pcVar13 = *(code **)(local_c8 + 0x20);
    (*pcVar13)(SStack_110.bridgeObject,lVar15,param_5);
    FUN_100004594(auStack_90);
    (*pcVar13)(local_b8,pvVar3,param_5);
  }
  return;
}



/* Address: 0x1002d0fc4 | FUN_1002d0fc4 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001002d1238 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined *
FUN_1002d0fc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  AnyPublisher<(extension_in_Combine):Combine_Publisher_eraseToAnyPublisher()__>_Combine_AnyPublisher<A_Output,A_Failure>__extension_in_Combine__Combine_Publisher_eraseToAnyPublisher____>_Combine_AnyPublisher<A_Output,A_Failure>>
  AVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar10;
  long extraout_x12;
  code *pcVar11;
  undefined1 auStack_110 [8];
  undefined8 local_108;
  long local_100;
  long local_f8;
  long local_f0;
  undefined8 local_e8;
  undefined1 *local_e0;
  undefined8 local_d8;
  long local_d0;
  undefined8 local_c8;
  undefined *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  long local_a8;
  long local_a0;
  undefined1 auStack_90 [24];
  undefined8 local_78;
  long lStack_70;
  
  lVar7 = 0;
  local_d8 = param_2;
  local_c8 = param_6;
  _swift_getTupleTypeMetadata2(0,param_4,param_4,"old new ",0);
  local_a0 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_a0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_f0 = *(long *)(param_4 + -8);
  local_e0 = auStack_110 + -extraout_x8;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_f0 + 0x40));
  lVar10 = (long)(auStack_110 + -extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_f8 = lVar10;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar10 = lVar10 - extraout_x12;
  puVar8 = &DAT_100fbcc40;
  FUN_100005c24(&DAT_100fbcc40,&DAT_100c3d460);
  local_b8 = puVar8;
  FUN_1002d12c8();
  local_100 = lVar7;
  local_c0 = puVar8;
  local_b0 = (undefined *)Combine::Publishers::Scan::typeMetadataAccessor();
  local_a8 = *(long *)(local_b0 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_a8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_d0 = lVar10 - extraout_x8_01;
  FUN_1000da768(auStack_90);
  FUN_100004640(auStack_90,local_78);
  (**(code **)(lStack_70 + 8))(local_78,lStack_70);
  uVar6 = local_c8;
  uVar5 = local_d8;
  local_108 = param_3;
  local_e8 = local_78;
  FUN_1002d0c78(lVar10,param_1,local_d8,param_3,param_4,param_5,local_c8);
  lVar3 = local_f8;
  FUN_1002d0c78(local_f8,param_1,uVar5,param_3,param_4,param_5,uVar6);
  puVar4 = local_e0;
  iVar1 = *(int *)(lVar7 + 0x30);
  pcVar11 = *(code **)(local_f0 + 0x20);
  (*pcVar11)(local_e0,lVar10,param_4);
  (*pcVar11)(puVar4 + iVar1,lVar3,param_4);
  puVar8 = &DAT_100ec7430;
  _swift_allocObject(&DAT_100ec7430,0x40,7);
  uVar2 = local_108;
  *(long *)(puVar8 + 0x10) = param_4;
  *(undefined8 *)(puVar8 + 0x18) = param_5;
  *(undefined8 *)(puVar8 + 0x20) = uVar6;
  *(undefined8 *)(puVar8 + 0x28) = param_1;
  *(undefined8 *)(puVar8 + 0x30) = uVar5;
  *(undefined8 *)(puVar8 + 0x38) = local_108;
  _swift_retain(param_1);
  _swift_retain(uVar5);
  _swift_retain(uVar2);
  lVar7 = local_d0;
  lVar3 = local_100;
  (extension_Combine)::Combine::Publisher::_scan
            (local_d0,puVar8,FUN_1002d1458,puVar8,local_b8,local_100,local_c0);
  _swift_release(puVar8);
  (**(code **)(local_a0 + 8))(puVar4,lVar3);
  _swift_release(local_e8);
  FUN_100004594(auStack_90);
  puVar8 = local_b0;
  _swift_getWitnessTable
            (PTR_Combine__Combine__Publishers__Scan<undefined,undefined>_>Combine__Publisher_100ea96b8
             ,local_b0);
  AVar9 = (extension_Combine)::Combine::Publisher::_eraseToAnyPublisher();
  (**(code **)(local_a8 + 8))(lVar7,puVar8);
  return AVar9.unknown;
}



/* Address: 0x1002d12c8 | FUN_1002d12c8 */

void FUN_1002d12c8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fbcc48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fbcc40;
  FUN_100005c24(&DAT_100fbcc40,&DAT_100c3d460);
  puVar2 = PTR_Combine__Combine__AnyPublisher<undefined,undefined>_>Combine__Publisher_100ea9758;
  _swift_getWitnessTable
            (PTR_Combine__Combine__AnyPublisher<undefined,undefined>_>Combine__Publisher_100ea9758,
             puVar1);
  DAT_100fbcc48 = puVar2;
  return;
}



/* Address: 0x1002d1318 | FUN_1002d1318 */

void FUN_1002d1318(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9)

{
  int iVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x12;
  long lVar3;
  undefined1 *puVar4;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  
  lVar2 = 0;
  local_68 = param_9;
  _swift_getTupleTypeMetadata2(0,param_7,param_7,"old new ",0);
  lVar3 = lVar2;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar4 = auStack_70 + -extraout_x12;
  iVar1 = *(int *)(lVar3 + 0x30);
  (**(code **)(extraout_x8 + 0x10))(puVar4,param_2,lVar2);
  lVar3 = *(long *)(param_7 + -8);
  (**(code **)(lVar3 + 0x20))(param_1,puVar4 + *(int *)(lVar2 + 0x30),param_7);
  FUN_1002d0c78(param_1 + iVar1,param_4,param_5,param_6,param_7,param_8,local_68);
  (**(code **)(lVar3 + 8))(puVar4,param_7);
  return;
}



/* Address: 0x1002d1424 | FUN_1002d1424 */

void FUN_1002d1424(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_deallocObject();
  return;
}



/* Address: 0x1002d1458 | FUN_1002d1458 */

void FUN_1002d1458(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_1002d1318(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1002d1468 | FUN_1002d1468 */

void FUN_1002d1468(undefined8 param_1,undefined8 param_2,long *param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  
  lVar1 = *param_3;
  lVar2 = *param_4;
  local_58 = param_2;
  _swift_unknownObjectRetain();
  _swift_getAtKeyPath(&local_70,&local_58,param_4);
  lVar2 = *(long *)(lVar2 + *(long *)
                             PTR___class_metadata_base_offset_for_Swift_ReferenceWritableKeyPath_100ead6a0
                   + 8);
  FUN_1002d0c78(param_1,local_70,uStack_68,local_60,
                *(undefined8 *)
                 (lVar1 + *(long *)PTR___class_metadata_base_offset_for_Swift_KeyPath_100eadf28 + 8)
                ,*(undefined8 *)(lVar2 + 0x18),*(undefined8 *)(lVar2 + 0x20));
  _swift_unknownObjectRelease(param_2);
  _swift_release(local_60);
  _swift_release(uStack_68);
  _swift_release(local_70);
  return;
}



/* Address: 0x1002d1534 | thunk_FUN_1002d1568 */

undefined8 * thunk_FUN_1002d1568(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  param_1[2] = uVar2;
  _swift_retain(uVar3);
  _swift_retain(uVar1);
  _swift_retain(uVar2);
  return param_1;
}



/* Address: 0x1002d1538 | FUN_1002d1538 */

void FUN_1002d1538(undefined8 *param_1)

{
  _swift_release(*param_1);
  _swift_release(param_1[1]);
  _swift_release(param_1[2]);
  return;
}



/* Address: 0x1002d1568 | FUN_1002d1568 */

undefined8 * FUN_1002d1568(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  param_1[2] = uVar2;
  _swift_retain(uVar3);
  _swift_retain(uVar1);
  _swift_retain(uVar2);
  return param_1;
}



/* Address: 0x1002d15b8 | FUN_1002d15b8 */

undefined8 * FUN_1002d15b8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
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
  return param_1;
}



/* Address: 0x1002d162c | FUN_1002d162c */

void FUN_1002d162c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x1002d1640 | FUN_1002d1640 */

undefined8 * FUN_1002d1640(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _swift_release(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _swift_release(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_release(uVar1);
  return param_1;
}



/* Address: 0x1002d168c | FUN_1002d168c */

void FUN_1002d168c(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1002d1698 | thunk_FUN_1002d1568 */

void thunk_FUN_1002d1568(void)

{
  thunk_FUN_1002d1568();
  return;
}



/* Address: 0x1002d169c | FUN_1002d169c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002d169c(undefined8 param_1,ID param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  undefined *puVar1;
  AnySubscriberBox *pAVar2;
  undefined8 *puVar3;
  class_t *pcVar4;
  class_t *pcVar5;
  ID IVar6;
  NSString *pNVar7;
  long extraout_x8;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  long extraout_x8_00;
  code *pcVar11;
  ulong uVar12;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  code *pcVar19;
  long lVar20;
  long lVar21;
  String SVar22;
  long local_130;
  undefined *local_128;
  long local_120 [8];
  undefined8 local_e0;
  undefined8 local_d8;
  objc_super local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  ID local_90 [3];
  class_t *local_78;
  undefined *local_70;
  
  puVar9 = &DAT_100fbcd38;
  local_120[2] = param_6;
  local_120[3] = param_7;
  local_120[5] = param_3;
  local_120[6] = param_4;
  local_120[7] = param_2;
  local_e0 = param_5;
  FUN_1000037f0(&DAT_100fbcd38,&DAT_100c3d618);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = (long)&local_130 - extraout_x8;
  lVar18 = *(long *)(param_6 + -8);
  lVar17 = *(long *)(lVar18 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar8 = lVar14 - (lVar17 + 0xfU & 0xfffffffffffffff0);
  local_130 = lVar8;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar8 = lVar8 - extraout_x12;
  local_120[1] = lVar8;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar9 = (undefined *)(lVar8 - extraout_x12_00);
  local_128 = puVar9;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar10 = (long)puVar9 - extraout_x12_01;
  local_120[0] = lVar10;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar10 = lVar10 - extraout_x12_02;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar21 = lVar10 - extraout_x12_03;
  puVar9 = &DAT_100fbcd40;
  FUN_1000037f0(&DAT_100fbcd40,&DAT_100c3d620);
  lVar20 = *(long *)(puVar9 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar20 + 0x40));
  lVar16 = lVar21 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar8 = local_120[2];
  plVar13 = (long *)(lVar16 - extraout_x12_04);
  pcVar19 = *(code **)(lVar18 + 0x10);
  local_120[4] = lVar18;
  local_d8 = param_1;
  (*pcVar19)(lVar21,param_1,local_120[2]);
  (*pcVar19)(lVar10,lVar21,lVar8);
  lVar18 = lVar14;
  _swift_dynamicCast(lVar14,lVar10,lVar8,puVar9,6);
  pcVar11 = *(code **)(lVar20 + 0x38);
  if ((int)lVar18 == 0) {
    (*pcVar11)(lVar14,1,1,puVar9);
    FUN_100005808(lVar14,&DAT_100fbcd38,&DAT_100c3d618);
    lVar14 = local_120[3];
    Combine::CustomCombineIdentifierConvertible::get_combineIdentifier();
    pAVar2 = Combine::AnySubscriberBox::typeMetadataAccessor();
    lVar10 = local_120[0];
    (*pcVar19)(local_120[0],lVar21,lVar8);
    lVar18 = lVar10;
    Combine::AnySubscriberBox::___allocating_init(pAVar2);
    *plVar13 = lVar18;
    puVar1 = local_128;
    (*pcVar19)(local_128,lVar21,lVar8);
    puVar9 = &DAT_100fbcd48;
    FUN_1000037f0(&DAT_100fbcd48,&DAT_100c3d628);
    puVar3 = &local_c0;
    local_128 = puVar9;
    _swift_dynamicCast(puVar3,puVar1,lVar8,puVar9,6);
    if (((ulong)puVar3 & 1) == 0) {
      local_a0 = 0;
      uStack_b8 = 0;
      local_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      FUN_100005808(&local_c0,&DAT_100fbcd50,&DAT_100c3d630);
      lVar18 = lVar21;
      _swift_getDynamicType(lVar21,lVar8,0);
      SVar22 = Swift::__typeName(SUB81(lVar18,0));
      puVar9 = &DAT_100ec75c8;
      _swift_allocObject(&DAT_100ec75c8,0x20,7);
      *(String *)(puVar9 + 0x10) = SVar22;
      pcVar11 = FUN_1000ce47c;
    }
    else {
      FUN_100076508(&local_c0,local_90);
      FUN_100076508(local_90,&local_c0);
      puVar9 = &DAT_100ec7690;
      _swift_allocObject(&DAT_100ec7690,0x38,7);
      FUN_100076508(&local_c0,puVar9 + 0x10);
      pcVar11 = FUN_1002d2928;
    }
    lVar18 = local_120[4];
    plVar13[1] = (long)pcVar11;
    plVar13[2] = (long)puVar9;
    (*pcVar19)(lVar10,lVar21,lVar8);
    uVar12 = (ulong)*(byte *)(lVar18 + 0x50);
    uVar15 = uVar12 + 0x20 & (uVar12 ^ 0xffffffffffffffff);
    puVar9 = &DAT_100ec75f0;
    _swift_allocObject(&DAT_100ec75f0,uVar15 + lVar17,uVar12 | 7);
    *(long *)(puVar9 + 0x10) = lVar8;
    *(long *)(puVar9 + 0x18) = lVar14;
    (**(code **)(lVar18 + 0x20))(puVar9 + uVar15,lVar10,lVar8);
    plVar13[3] = (long)FUN_1002d2824;
    lVar10 = local_120[1];
    plVar13[4] = (long)puVar9;
    (*pcVar19)(local_120[1],lVar21,lVar8);
    puVar9 = &DAT_100fbcd58;
    FUN_1000037f0(&DAT_100fbcd58,&DAT_100c3d638);
    puVar3 = &local_c0;
    _swift_dynamicCast(puVar3,lVar10,lVar8,puVar9,6);
    if ((int)puVar3 == 0) {
      local_a0 = 0;
      uStack_b8 = 0;
      local_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      FUN_100005808(&local_c0,&DAT_100fbcd60,&DAT_100c3d640);
      lVar10 = local_130;
      (*pcVar19)(local_130,lVar21,lVar8);
      puVar3 = &local_c0;
      _swift_dynamicCast(puVar3,lVar10,lVar8,local_128,6);
      if ((int)puVar3 == 0) {
        local_a0 = 0;
        uStack_b8 = 0;
        local_c0 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
        FUN_100005808(&local_c0,&DAT_100fbcd50,&DAT_100c3d630);
        lVar10 = lVar21;
        _swift_getDynamicType(lVar21,lVar8,0);
        SVar22 = Swift::__typeName(SUB81(lVar10,0));
        puVar9 = &DAT_100ec7618;
        _swift_allocObject(&DAT_100ec7618,0x20,7);
        *(String *)(puVar9 + 0x10) = SVar22;
        plVar13[5] = (long)FUN_1002d2850;
        plVar13[6] = (long)puVar9;
        goto LAB_1002d1c5c;
      }
      FUN_100076508(&local_c0,local_90);
      FUN_100076508(local_90,&local_c0);
      puVar9 = &DAT_100ec7640;
      _swift_allocObject(&DAT_100ec7640,0x38,7);
      FUN_100076508(&local_c0,puVar9 + 0x10);
      pcVar11 = FUN_1002d2868;
    }
    else {
      FUN_100076508(&local_c0,local_90);
      FUN_100076508(local_90,&local_c0);
      puVar9 = &DAT_100ec7668;
      _swift_allocObject(&DAT_100ec7668,0x38,7);
      FUN_100076508(&local_c0,puVar9 + 0x10);
      pcVar11 = FUN_1002d28e0;
    }
    plVar13[5] = (long)pcVar11;
    plVar13[6] = (long)puVar9;
  }
  else {
    (*pcVar11)(lVar14,0,1,puVar9);
    FUN_1002d2968(lVar14,lVar16);
    FUN_1002d2968(lVar16,plVar13);
    lVar18 = local_120[4];
  }
LAB_1002d1c5c:
  (**(code **)(lVar18 + 8))(lVar21,lVar8);
  pcVar4 = (class_t *)0x0;
  FUN_1002d1f90();
  pcVar5 = pcVar4;
  _objc_allocWithZone();
  lVar8 = _TtCV11PasteConfig25StringKeyPathKVOPublisherP33_1A0272A7BC563A3C07182DAB71D9D1A315KVOSubscription
          ::object;
  _swift_unknownObjectWeakInit
            ((long)&pcVar5->isa +
             _TtCV11PasteConfig25StringKeyPathKVOPublisherP33_1A0272A7BC563A3C07182DAB71D9D1A315KVOSubscription
             ::object,0);
  lVar18 = local_120[7];
  _swift_unknownObjectWeakAssign((long)&pcVar5->isa + lVar8,local_120[7]);
  lVar8 = local_120[6];
  puVar3 = (undefined8 *)
           ((long)&pcVar5->isa +
           _TtCV11PasteConfig25StringKeyPathKVOPublisherP33_1A0272A7BC563A3C07182DAB71D9D1A315KVOSubscription
           ::keyPath);
  *puVar3 = local_120[5];
  puVar3[1] = local_120[6];
  FUN_100011090(plVar13,(long)&pcVar5->isa +
                        _TtCV11PasteConfig25StringKeyPathKVOPublisherP33_1A0272A7BC563A3C07182DAB71D9D1A315KVOSubscription
                        ::subscriber,&DAT_100fbcd40,&DAT_100c3d620);
  local_d0.receiver = (ID)pcVar5;
  local_d0.super_class = pcVar4;
  _swift_bridgeObjectRetain(lVar8);
  IVar6 = _objc_msgSendSuper2(&local_d0,"init");
  pNVar7 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  objc_stub::addObserver_forKeyPath_options_context_(lVar18,IVar6,pNVar7,local_e0,0);
  FUN_100005808(plVar13,&DAT_100fbcd40,&DAT_100c3d620);
  puVar9 = &DAT_100fbcd68;
  local_78 = pcVar4;
  FUN_100003a00(&DAT_100fbcd68,FUN_1002d1f90,&TargetProtocolConformanceDescriptor_100c3d59c);
  local_90[0] = IVar6;
  local_70 = puVar9;
  Combine::Subscriber::_receive();
  FUN_100004594(local_90);
  return;
}



/* Address: 0x1002d1db8 | FUN_1002d1db8 */

void FUN_1002d1db8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  
  FUN_1002d169c(param_1,*unaff_x20,unaff_x20[1],unaff_x20[2],unaff_x20[3],param_2,param_3);
  return;
}



/* Address: 0x1002d1dcc | _TtCV11PasteConfig25StringKeyPathKVOPublisherP33_1A0272A7BC563A3C07182DAB71D9D1A315KVOSubscription::observeValueForKeyPath:ofObject:change:context: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x30 bytes */

void _TtCV11PasteConfig25StringKeyPathKVOPublisherP33_1A0272A7BC563A3C07182DAB71D9D1A315KVOSubscription
     ::observeValueForKeyPath_ofObject_change_context_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,void *param_6)

{
  Dictionary<undefined,undefined> DVar1;
  SEL pcVar2;
  String SVar3;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_3 == 0) {
    pcVar2 = (SEL)0x0;
  }
  else {
    SVar3 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    pcVar2 = SVar3.bridgeObject;
    param_2 = pcVar2;
  }
  if (param_4 == 0) {
    uStack_48 = 0;
    local_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
  }
  else {
    _swift_unknownObjectRetain(param_4,param_2);
    Swift::__bridgeAnyObjectToAny();
    _swift_unknownObjectRelease(param_4);
  }
  if (param_5 == 0) {
    DVar1.unknown = (undefined *)0x0;
  }
  else {
    FUN_1002ccac4(0);
    FUN_100003a00(&DAT_100fbc518,FUN_1002ccac4,&TargetProtocolConformanceDescriptor_100c3d270);
    DVar1 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  }
  FUN_1002d29b8(&local_50,DVar1.unknown);
  _swift_bridgeObjectRelease(pcVar2);
  _swift_bridgeObjectRelease(DVar1.unknown);
  FUN_100005808(&local_50,&DAT_100fbc420,&DAT_100c3ce30);
  return;
}



/* Address: 0x1002d1efc | _TtCV11PasteConfig25StringKeyPathKVOPublisherP33_1A0272A7BC563A3C07182DAB71D9D1A315KVOSubscription::init */

/* Function Stack Size: 0x10 bytes */

ID _TtCV11PasteConfig25StringKeyPathKVOPublisherP33_1A0272A7BC563A3C07182DAB71D9D1A315KVOSubscription
   ::init(ID param_1,SEL param_2)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("PasteConfig.KVOSubscription",0x1b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1002d1f28);
  (*pcVar1)();
}



/* Address: 0x1002d1f28 | _TtCV11PasteConfig25StringKeyPathKVOPublisherP33_1A0272A7BC563A3C07182DAB71D9D1A315KVOSubscription::.cxx_destruct */

/* Function Stack Size: 0x10 bytes */

void _TtCV11PasteConfig25StringKeyPathKVOPublisherP33_1A0272A7BC563A3C07182DAB71D9D1A315KVOSubscription
     ::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_unknownObjectWeakDestroy(param_1 + object);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + keyPath + 8));
  FUN_100005808(param_1 + subscriber,&DAT_100fbcd40,&DAT_100c3d620);
  return;
}



/* Address: 0x1002d1f88 | FUN_1002d1f88 */

void FUN_1002d1f88(void)

{
  FUN_1002d1f90(0);
  return;
}



/* Address: 0x1002d1f90 | FUN_1002d1f90 */

void FUN_1002d1f90(undefined8 param_1)

{
  if (DAT_100fbcd10 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetClassDescriptor_100cab0fc);
  return;
}



/* Address: 0x1002d1fc8 | FUN_1002d1fc8 */

void FUN_1002d1fc8(long param_1,ulong param_2)

{
  long lVar1;
  undefined *local_38;
  undefined *puStack_30;
  long local_28;
  
  local_38 = &DAT_100c3d4f0;
  puStack_30 = &DAT_100c3d508;
  lVar1 = 0x13f;
  FUN_1002d2048();
  if (param_2 < 0x40) {
    local_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_updateClassMetadata2(param_1,0x100,3,&local_38,param_1 + 0x50);
  }
  return;
}



/* Address: 0x1002d2048 | FUN_1002d2048 */

void FUN_1002d2048(void)

{
  AnySubscriber AVar1;
  undefined *puVar2;
  
  if (DAT_100fbcd20 != (undefined *)0x0) {
    return;
  }
  puVar2 = &DAT_100ec7518;
  AVar1 = Combine::AnySubscriber::typeMetadataAccessor();
  if (puVar2 != (undefined *)0x0) {
    return;
  }
  DAT_100fbcd20 = AVar1.unknown;
  return;
}



/* Address: 0x1002d20a8 | FUN_1002d20a8 */

void FUN_1002d20a8(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_100004594(param_1);
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_100004594(param_1 + 0x20);
  }
  return;
}



/* Address: 0x1002d20e4 | FUN_1002d20e4 */

undefined8 * FUN_1002d20e4(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_2[3];
  if (lVar1 == 0) {
    uVar2 = *param_2;
    uVar4 = param_2[3];
    uVar3 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar2;
    param_1[3] = uVar4;
    param_1[2] = uVar3;
    lVar1 = param_2[7];
  }
  else {
    param_1[3] = lVar1;
    (*(code *)**(undefined8 **)(lVar1 + -8))(param_1,param_2);
    lVar1 = param_2[7];
  }
  if (lVar1 == 0) {
    uVar2 = param_2[4];
    uVar4 = param_2[7];
    uVar3 = param_2[6];
    param_1[5] = param_2[5];
    param_1[4] = uVar2;
    param_1[7] = uVar4;
    param_1[6] = uVar3;
  }
  else {
    param_1[7] = lVar1;
    (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 4,param_2 + 4);
  }
  return param_1;
}



/* Address: 0x1002d2164 | FUN_1002d2164 */

undefined8 * FUN_1002d2164(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_2[3];
  if (param_1[3] == 0) {
    if (lVar1 != 0) {
      param_1[3] = lVar1;
      (*(code *)**(undefined8 **)(lVar1 + -8))(param_1,param_2);
      goto LAB_1002d21c4;
    }
  }
  else {
    if (lVar1 != 0) {
      FUN_10003083c(param_1,param_2);
      goto LAB_1002d21c4;
    }
    FUN_100004594(param_1);
  }
  uVar2 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
LAB_1002d21c4:
  lVar1 = param_2[7];
  if (param_1[7] == 0) {
    if (lVar1 != 0) {
      param_1[7] = lVar1;
      (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 4,param_2 + 4);
      return param_1;
    }
  }
  else {
    if (lVar1 != 0) {
      FUN_10003083c(param_1 + 4,param_2 + 4);
      return param_1;
    }
    FUN_100004594(param_1 + 4);
  }
  uVar2 = param_2[4];
  uVar4 = param_2[7];
  uVar3 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  param_1[7] = uVar4;
  param_1[6] = uVar3;
  return param_1;
}



/* Address: 0x1002d2220 | FUN_1002d2220 */

void FUN_1002d2220(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar5 = param_2[4];
  uVar7 = param_2[7];
  uVar6 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar5;
  param_1[7] = uVar7;
  param_1[6] = uVar6;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  return;
}



/* Address: 0x1002d2234 | FUN_1002d2234 */

undefined8 * FUN_1002d2234(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_1[3] != 0) {
    FUN_100004594(param_1);
  }
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  if (param_1[7] != 0) {
    FUN_100004594(param_1 + 4);
  }
  uVar1 = param_2[4];
  uVar3 = param_2[7];
  uVar2 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar1;
  param_1[7] = uVar3;
  param_1[6] = uVar2;
  return param_1;
}



/* Address: 0x1002d2288 | FUN_1002d2288 */

int FUN_1002d2288(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x10] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x1002d22e4 | FUN_1002d22e4 */

void FUN_1002d22e4(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0x7fffffff) {
    if (0x7ffffffe < param_3) {
      *(undefined1 *)(param_1 + 8) = 0;
    }
    if (param_2 != 0) {
      param_1[3] = (ulong)param_2;
      return;
    }
  }
  else {
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = (ulong)(param_2 + 0x80000001);
    if (0x7ffffffe < param_3) {
      *(undefined1 *)(param_1 + 8) = 1;
    }
  }
  return;
}



/* Address: 0x1002d2348 | FUN_1002d2348 */

undefined1  [16] FUN_1002d2348(void)

{
  return ZEXT816(0x100ec7518);
}



/* Address: 0x1002d2358 | FUN_1002d2358 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002d2358(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Address: 0x1002d2380 | FUN_1002d2380 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 * FUN_1002d2380(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  _swift_bridgeObjectRetain(uVar1);
  return param_1;
}



/* Address: 0x1002d23bc | FUN_1002d23bc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 * FUN_1002d23bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[3] = param_2[3];
  return param_1;
}



/* Address: 0x1002d2428 | FUN_1002d2428 */

void FUN_1002d2428(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  return;
}



/* Address: 0x1002d2434 | FUN_1002d2434 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 * FUN_1002d2434(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar1 = param_2[2];
  uVar2 = param_1[2];
  param_1[1] = param_2[1];
  param_1[2] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  param_1[3] = param_2[3];
  return param_1;
}



/* Address: 0x1002d2480 | FUN_1002d2480 */

undefined1  [16] FUN_1002d2480(void)

{
  return ZEXT816(0x100ec7598);
}



/* Address: 0x1002d2490 | FUN_1002d2490 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1002d2490(void)

{
  ID self;
  NSString *pNVar1;
  long lVar2;
  long *unaff_x20;
  
  lVar2 = *unaff_x20;
  self = lVar2 + _TtCV11PasteConfig25StringKeyPathKVOPublisherP33_1A0272A7BC563A3C07182DAB71D9D1A315KVOSubscription
                 ::object;
  _swift_unknownObjectWeakLoadStrong();
  if (self != 0) {
    pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    objc_stub::removeObserver_forKeyPath_(self,lVar2,pNVar1);
    return 0;
  }
  return 0;
}



/* Address: 0x1002d2510 | FUN_1002d2510 */

void FUN_1002d2510(void)

{
  (extension_Combine)::Combine::CustomCombineIdentifierConvertible::_get_combineIdentifier();
  return;
}



/* Address: 0x1002d2530 | FUN_1002d2530 */

void FUN_1002d2530(void)

{
  FUN_100003a00(&DAT_100fbcd28,FUN_1002d1f90,&TargetProtocolConformanceDescriptor_100c3d574);
  return;
}



/* Address: 0x1002d255c | FUN_1002d255c */

void FUN_1002d255c(void)

{
  FUN_100003a00(&DAT_100fbcd30,FUN_1002d1f90,&TargetProtocolConformanceDescriptor_100c3d54c);
  return;
}



/* Address: 0x1002d2588 | FUN_1002d2588 */

undefined * FUN_1002d2588(void)

{
  return PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40;
}



/* Address: 0x1002d2594 | FUN_1002d2594 */

void FUN_1002d2594(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x1002d25b8 | FUN_1002d25b8 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001002d27b0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1002d25b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  AncestorRepresentation AVar1;
  DisplayStyle DVar2;
  undefined *puVar4;
  undefined8 *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x13;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined1 auStack_88 [24];
  undefined8 local_70;
  long lVar3;
  
  AVar1 = Swift::Mirror::AncestorRepresentation::typeMetadataAccessor();
  lVar3 = CONCAT71((int7)((ulong)param_2 >> 8),AVar1.value);
  lVar10 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar10 + 0x40));
  lVar6 = (long)&local_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100fbc530;
  FUN_1000037f0(&DAT_100fbc530,&DAT_100c3d2b8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = lVar6 - extraout_x8_00;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(param_5 + -8) + 0x40));
  lVar8 = lVar7 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar9 = lVar8 - extraout_x13;
  pcVar11 = *(code **)(extraout_x12 + 0x10);
  (*pcVar11)(lVar9,param_2,param_5);
  puVar4 = &DAT_100fbcd70;
  FUN_1000037f0(&DAT_100fbcd70,&DAT_100c3d650);
  puVar5 = &local_b0;
  _swift_dynamicCast(puVar5,lVar9,param_5,puVar4,6);
  if (((ulong)puVar5 & 1) == 0) {
    local_90 = 0;
    uStack_a8 = 0;
    local_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    FUN_100005808(&local_b0,&DAT_100fbcd78,&DAT_100c3d658);
    (*pcVar11)(lVar8,param_2,param_5);
    DVar2 = Swift::Mirror::DisplayStyle::typeMetadataAccessor();
    lVar8 = CONCAT71((int7)((ulong)&local_b0 >> 8),DVar2.value);
    (**(code **)(*(long *)(lVar8 + -8) + 0x38))(lVar7,1,1,lVar8);
    (**(code **)(lVar10 + 0x68))
              (lVar6,*(undefined4 *)
                      PTR___enum_case_for_Swift_Mirror_AncestorRepresentation_generated_Swift_Mirror_AncestorRepresentation_Type___>_Swift_Mirror_AncestorRepresentation_100eaddc0
               ,lVar3);
    Swift::Mirror::_init(param_1,lVar8,PTR___swiftEmptyArrayStorage_100eae0d8,lVar7,lVar6,param_5);
  }
  else {
    FUN_100076508(&local_b0,auStack_88);
    FUN_100004640(auStack_88,local_70);
    Swift::CustomReflectable::get_customMirror();
    FUN_100004594(auStack_88);
  }
  return;
}



/* Address: 0x1002d27d4 | FUN_1002d27d4 */

void FUN_1002d27d4(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x10) + -8);
  uVar2 = (ulong)*(byte *)(lVar1 + 0x50);
  (**(code **)(lVar1 + 8))(unaff_x20 + (uVar2 + 0x20 & (uVar2 ^ 0xffffffffffffffff)));
  _swift_deallocObject();
  return;
}



/* Address: 0x1002d2824 | FUN_1002d2824 */

void FUN_1002d2824(void)

{
  ulong uVar1;
  long unaff_x20;
  
  uVar1 = (ulong)*(byte *)(*(long *)(*(long *)(unaff_x20 + 0x10) + -8) + 0x50);
  FUN_1002d25b8(unaff_x20 + (uVar1 + 0x20 & (uVar1 ^ 0xffffffffffffffff)),&DAT_100ec7518,
                PTR___type_metadata_for_Swift_Never_100eadc38,*(long *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1002d2850 | FUN_1002d2850 */

void FUN_1002d2850(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  param_1[3] = PTR___type_metadata_for_Swift_String_100eac208;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  _swift_bridgeObjectRetain();
  return;
}



/* Address: 0x1002d2868 | FUN_1002d2868 */

void FUN_1002d2868(String *param_1)

{
  long unaff_x20;
  String SVar1;
  
  FUN_100004640(unaff_x20 + 0x10,*(undefined8 *)(unaff_x20 + 0x28));
  SVar1 = Swift::CustomStringConvertible::get_description();
  param_1[1].bridgeObject = PTR___type_metadata_for_Swift_String_100eac208;
  *param_1 = SVar1;
  return;
}



/* Address: 0x1002d28bc | FUN_1002d28bc */

void FUN_1002d28bc(void)

{
  long unaff_x20;
  
  FUN_100004594(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x1002d28e0 | FUN_1002d28e0 */

void FUN_1002d28e0(void)

{
  long unaff_x20;
  
  FUN_100004640(unaff_x20 + 0x10,*(undefined8 *)(unaff_x20 + 0x28));
  Swift::CustomPlaygroundDisplayConvertible::_get_playgroundDescription();
  return;
}



/* Address: 0x1002d2928 | FUN_1002d2928 */

String FUN_1002d2928(void)

{
  long unaff_x20;
  String SVar1;
  
  FUN_100004640(unaff_x20 + 0x10,*(undefined8 *)(unaff_x20 + 0x28));
  SVar1 = Swift::CustomStringConvertible::get_description();
  return SVar1;
}



/* Address: 0x1002d2968 | FUN_1002d2968 */

undefined8 FUN_1002d2968(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fbcd40;
  FUN_1000037f0(&DAT_100fbcd40,&DAT_100c3d620);
  (**(code **)(*(long *)(puVar1 + -8) + 0x20))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1002d29b8 | FUN_1002d29b8 */

void FUN_1002d29b8(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  long unaff_x20;
  long lVar2;
  undefined1 auStack_c0 [32];
  undefined1 auStack_a0 [32];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (param_2 == 0) {
    return;
  }
  uVar1 = param_2;
  if (*(long *)(param_2 + 0x10) == 0) {
LAB_1002d2a30:
    uStack_58 = 0;
    local_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    lVar2 = *(long *)(param_2 + 0x10);
  }
  else {
    lVar2 = *(long *)PTR__NSKeyValueChangeOldKey_100ea7c00;
    _swift_bridgeObjectRetain(param_2);
    FUN_1000712c0(lVar2);
    if ((uVar1 & 1) == 0) {
      _swift_bridgeObjectRelease(param_2);
      goto LAB_1002d2a30;
    }
    uVar1 = 0;
    FUN_10000cbfc(*(long *)(param_2 + 0x38) + lVar2 * 0x20);
    _swift_bridgeObjectRelease(param_2);
    lVar2 = *(long *)(param_2 + 0x10);
  }
  if (lVar2 != 0) {
    lVar2 = *(long *)PTR__NSKeyValueChangeNewKey_100ea7bf8;
    _swift_bridgeObjectRetain(param_2);
    FUN_1000712c0(lVar2);
    if ((uVar1 & 1) != 0) {
      FUN_10000cbfc(*(long *)(param_2 + 0x38) + lVar2 * 0x20,&local_80);
      _swift_bridgeObjectRelease(param_2);
      goto LAB_1002d2a8c;
    }
    _swift_bridgeObjectRelease(param_2);
  }
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
LAB_1002d2a8c:
  lVar2 = _TtCV11PasteConfig25StringKeyPathKVOPublisherP33_1A0272A7BC563A3C07182DAB71D9D1A315KVOSubscription
          ::subscriber;
  FUN_100011090(&local_60,auStack_c0,&DAT_100fbc420,&DAT_100c3ce30);
  FUN_100011090(&local_80,auStack_a0,&DAT_100fbc420,&DAT_100c3ce30);
  Combine::AnySubscriberBase::receive(*(AnySubscriberBase **)(unaff_x20 + lVar2));
  FUN_1002d2b1c(auStack_c0);
  FUN_100005808(&local_80,&DAT_100fbc420,&DAT_100c3ce30);
  FUN_100005808(&local_60,&DAT_100fbc420,&DAT_100c3ce30);
  return;
}



/* Address: 0x1002d2b1c | FUN_1002d2b1c */

undefined8 FUN_1002d2b1c(undefined8 param_1)

{
  FUN_1002d20a8(param_1,&DAT_100ec7518);
  return param_1;
}



/* Address: 0x1002d2b48 | thunk_FUN_1002d2594 */

void thunk_FUN_1002d2594(void)

{
  FUN_1002d2594();
  return;
}



/* Address: 0x1002d2b4c | thunk_FUN_1002d28bc */

void thunk_FUN_1002d28bc(void)

{
  FUN_1002d28bc();
  return;
}



/* Address: 0x1002d2b50 | thunk_FUN_1002d28bc */

void thunk_FUN_1002d28bc(void)

{
  FUN_1002d28bc();
  return;
}


