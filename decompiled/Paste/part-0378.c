/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10049dd60 | FUN_10049dd60 */

void FUN_10049dd60(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fca8a8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4fa54;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4fa54,&DAT_100ed93d8);
  DAT_100fca8a8 = pTVar1;
  return;
}



/* Address: 0x10049dda0 | thunk_FUN_10049a590 */

void thunk_FUN_10049a590(void)

{
  FUN_10049a590();
  return;
}



/* Address: 0x10049dda4 | FUN_10049dda4 */

void FUN_10049dda4(undefined8 param_1,long param_2)

{
  int iVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  Index IVar5;
  CharacterView CVar6;
  long lVar7;
  long extraout_x8;
  long lVar8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long lVar9;
  code *pcVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  code *local_a0;
  long local_98;
  undefined *local_90;
  undefined *local_88;
  long local_80;
  long local_78;
  undefined8 local_70;
  long local_68;
  
  puVar3 = &DAT_100fca948;
  local_70 = param_1;
  FUN_1000037f0(&DAT_100fca948,&DAT_100c4fad0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar3 + -8) + 0x40));
  lVar7 = (long)&local_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar8 = lVar7 - extraout_x12;
  puVar4 = &DAT_100fca950;
  local_80 = lVar8;
  FUN_1000037f0(&DAT_100fca950,&DAT_100c4fad8);
  local_88 = puVar4;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = lVar8 - extraout_x8_00;
  puVar4 = &DAT_100fca958;
  local_78 = lVar8;
  FUN_1000037f0(&DAT_100fca958,&DAT_100c4fae0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar4 + -8) + 0x40));
  lVar8 = lVar8 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  IVar5 = Foundation::AttributedString::Index::typeMetadataAccessor();
  lVar11 = *(long *)((long)IVar5.cmsgPointer.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar11 + 0x40));
  lVar9 = (lVar8 - extraout_x12_00) - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar13 = lVar9 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_68 = lVar13 - extraout_x12_02;
  if (param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x10049e1c4);
    (*pcVar10)();
  }
  local_98 = lVar7;
  local_90 = puVar3;
  CVar6 = Foundation::AttributedString::CharacterView::typeMetadataAccessor();
  puVar3 = &DAT_100fca960;
  FUN_100003a00(&DAT_100fca960,PTR_typeMetadataAccessor_100ea6e40,
                PTR_Foundation__Foundation__AttributedString__CharacterView_>Swift__Collection_100ea6e58
               );
  Swift::Collection::_get_startIndex();
  Swift::Collection::_get_endIndex();
  Swift::Collection::_index(lVar13);
  pcVar10 = *(code **)(lVar11 + 8);
  (*pcVar10)(lVar9,IVar5.cmsgPointer.unknown);
  local_a0 = pcVar10;
  (*pcVar10)(lVar13,IVar5.cmsgPointer.unknown);
  FUN_10019ffdc(lVar8 - extraout_x12_00,lVar8,&DAT_100fca958,&DAT_100c4fae0);
  lVar7 = lVar8;
  (**(code **)(lVar11 + 0x30))(lVar8,1,IVar5.cmsgPointer.unknown);
  lVar9 = local_68;
  if ((int)lVar7 == 1) {
    Swift::Collection::_get_endIndex();
    FUN_100005808(lVar8,&DAT_100fca958,&DAT_100c4fae0);
  }
  else {
    (**(code **)(lVar11 + 0x20))(local_68,lVar8,IVar5.cmsgPointer.unknown);
  }
  Swift::Collection::_get_startIndex();
  puVar4 = &DAT_100fca968;
  FUN_100003a00(&DAT_100fca968,PTR_typeMetadataAccessor_100ea6e60,
                PTR_Foundation__Foundation__AttributedString__Index_>Swift__Comparable_100ea6e70);
  bVar2 = Swift::Comparable::<__infix(lVar13,lVar9,IVar5.cmsgPointer.unknown,puVar4);
  lVar8 = local_80;
  if (bVar2) {
    pcVar12 = *(code **)(lVar11 + 0x20);
    (*pcVar12)(local_80,lVar13,IVar5.cmsgPointer.unknown);
    puVar4 = local_90;
    (*pcVar12)(lVar8 + *(int *)(local_90 + 0x30),lVar9,IVar5.cmsgPointer.unknown);
    lVar9 = local_98;
    FUN_100011090(lVar8,local_98,&DAT_100fca948,&DAT_100c4fad0);
    lVar11 = local_78;
    iVar1 = *(int *)(puVar4 + 0x30);
    (*pcVar12)(local_78,lVar9,IVar5.cmsgPointer.unknown);
    pcVar10 = local_a0;
    (*local_a0)(lVar9 + iVar1,IVar5.cmsgPointer.unknown);
    FUN_10019ffdc(lVar8,lVar9,&DAT_100fca948,&DAT_100c4fad0);
    (*pcVar12)(lVar11 + *(int *)(local_88 + 0x24),lVar9 + *(int *)(puVar4 + 0x30),
               IVar5.cmsgPointer.unknown);
    (*pcVar10)(lVar9,IVar5.cmsgPointer.unknown);
    __dispatch_thunk_of_Swift_Collection_subscript_getter____Swift_Range<A_Index>___>_A_SubSequence
              (local_70,lVar11,CVar6.unknown,puVar3);
    (**(code **)(*(long *)(CVar6.unknown + -8) + 8))();
    FUN_100005808(lVar11,&DAT_100fca950,&DAT_100c4fad8);
    return;
  }
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x10049e1c8);
  (*pcVar10)();
}



/* Address: 0x10049e1c8 | FUN_10049e1c8 */

undefined1  [16] FUN_10049e1c8(byte param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  if (param_1 < 4) {
    puVar1 = (undefined1 *)0x707061;
    if (param_1 != 2) {
      puVar1 = (undefined1 *)0x656c746974;
    }
    puVar4 = (undefined1 *)0xe300000000000000;
    if (param_1 != 2) {
      puVar4 = &DAT_e500000000000000;
    }
    puVar5 = (undefined1 *)0x7972657571;
    if (param_1 != 0) {
      puVar5 = &DAT_65707974;
    }
    puVar6 = &DAT_e500000000000000;
    if (param_1 != 0) {
      puVar6 = &DAT_e400000000000000;
    }
    if (param_1 < 2) {
      puVar4 = puVar6;
      puVar1 = puVar5;
    }
    auVar8._8_8_ = puVar4;
    auVar8._0_8_ = puVar1;
    return auVar8;
  }
  uVar3 = 0x6f5465746164;
  if (param_1 != 7) {
    uVar3 = 0x74696d696c;
  }
  puVar1 = &DAT_e600000000000000;
  if (param_1 != 7) {
    puVar1 = &DAT_e500000000000000;
  }
  uVar2 = 0x6d6f724665746164;
  if (param_1 != 6) {
    uVar2 = uVar3;
  }
  puVar4 = &DAT_e800000000000000;
  if (param_1 != 6) {
    puVar4 = puVar1;
  }
  uVar3 = 0x656369766564;
  if (param_1 != 4) {
    uVar3 = 0x6472616f626e6970;
  }
  puVar1 = &DAT_e600000000000000;
  if (param_1 != 4) {
    puVar1 = (undefined1 *)0xea00000000006449;
  }
  if (param_1 < 6) {
    puVar4 = puVar1;
    uVar2 = uVar3;
  }
  auVar7._8_8_ = puVar4;
  auVar7._0_8_ = uVar2;
  return auVar7;
}



/* Address: 0x10049e2c4 | FUN_10049e2c4 */

void FUN_10049e2c4(long param_1,undefined8 param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long extraout_x8;
  long unaff_x21;
  long lVar4;
  undefined1 auStack_70 [14];
  undefined1 local_62;
  undefined1 local_61;
  undefined8 local_58;
  
  puVar1 = &DAT_100fca938;
  FUN_1000037f0(&DAT_100fca938,&DAT_100c4fac0);
  lVar4 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_1004a1368();
  Swift::Encoder::_container();
  local_61 = 0;
  puVar2 = &DAT_100fca928;
  local_58 = param_2;
  FUN_1000037f0(&DAT_100fca928,&DAT_100c4fab8);
  puVar3 = &DAT_100fca940;
  FUN_1004a13a8(&DAT_100fca940,FUN_1004912bc,
                PTR__Swift__Swift__Array<undefined>_>Swift__Encodable_100eac510);
  Swift::KeyedEncodingContainer::_encode(&local_58,&local_61,puVar1,puVar2,puVar3);
  if (unaff_x21 == 0) {
    local_62 = 1;
    Swift::KeyedEncodingContainer::_encode(param_3 & 1,&local_62,puVar1);
    (**(code **)(lVar4 + 8))(auStack_70 + -extraout_x8,puVar1);
  }
  else {
    (**(code **)(lVar4 + 8))(auStack_70 + -extraout_x8,puVar1);
  }
  return;
}



/* Address: 0x10049e43c | FUN_10049e43c */

void FUN_10049e43c(void)

{
  undefined1 *unaff_x20;
  
  FUN_10049e1c8(*unaff_x20);
  return;
}



/* Address: 0x10049e444 | FUN_10049e444 */

void FUN_10049e444(undefined1 *param_1,undefined1 param_2)

{
  FUN_1004a09cc();
  *param_1 = param_2;
  return;
}



/* Address: 0x10049e468 | FUN_10049e468 */

String FUN_10049e468(void)

{
  String SVar1;
  
  FUN_1004a112c();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x10049e490 | FUN_10049e490 */

String FUN_10049e490(void)

{
  String SVar1;
  
  FUN_1004a112c();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x10049e4b8 | FUN_10049e4b8 */

void FUN_10049e4b8(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined7 local_37;
  undefined1 uStack_30;
  undefined8 uStack_2f;
  
  FUN_1004a0c9c(&local_b0);
  if (unaff_x21 == 0) {
    param_1[0xd] = uStack_48;
    param_1[0xc] = local_50;
    param_1[0xf] = CONCAT71(local_37,uStack_38);
    param_1[0xe] = uStack_40;
    *(undefined8 *)((long)param_1 + 0x81) = uStack_2f;
    *(ulong *)((long)param_1 + 0x79) = CONCAT17(uStack_30,local_37);
    param_1[5] = uStack_88;
    param_1[4] = local_90;
    param_1[7] = uStack_78;
    param_1[6] = uStack_80;
    param_1[9] = uStack_68;
    param_1[8] = local_70;
    param_1[0xb] = uStack_58;
    param_1[10] = uStack_60;
    param_1[1] = uStack_a8;
    *param_1 = local_b0;
    param_1[3] = uStack_98;
    param_1[2] = uStack_a0;
  }
  return;
}



/* Address: 0x10049e510 | FUN_10049e510 */

undefined1  [16] FUN_10049e510(void)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  char *unaff_x20;
  undefined1 auVar3 [16];
  
  uVar1 = 0x65726f4d736168;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x736d657469;
  }
  puVar2 = &DAT_e700000000000000;
  if (*unaff_x20 != '\x01') {
    puVar2 = &DAT_e500000000000000;
  }
  auVar3._8_8_ = puVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Address: 0x10049e548 | FUN_10049e548 */

void FUN_10049e548(undefined1 *param_1,long param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined1 uVar2;
  
  if (param_2 != 0x736d657469 || param_3 != &DAT_e500000000000000) {
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x736d657469,(_StringGuts)0xe500000000000000,
                       (_StringComparisonResult)(__int8)param_2);
    if (!bVar1) {
      if ((param_2 == 0x65726f4d736168) && (param_3 == &DAT_e700000000000000)) {
        _swift_bridgeObjectRelease(&DAT_e700000000000000);
        uVar2 = 1;
      }
      else {
        bVar1 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)0x65726f4d736168,(_StringGuts)0xe700000000000000,
                           (_StringComparisonResult)(__int8)param_2);
        _swift_bridgeObjectRelease(param_3);
        uVar2 = 1;
        if (!bVar1) {
          uVar2 = 2;
        }
      }
      goto LAB_10049e5a4;
    }
  }
  _swift_bridgeObjectRelease(param_3);
  uVar2 = 0;
LAB_10049e5a4:
  *param_1 = uVar2;
  return;
}



/* Address: 0x10049e61c | FUN_10049e61c */

String FUN_10049e61c(void)

{
  String SVar1;
  
  FUN_1004a1368();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x10049e644 | FUN_10049e644 */

String FUN_10049e644(void)

{
  String SVar1;
  
  FUN_1004a1368();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x10049e66c | FUN_10049e66c */

void FUN_10049e66c(undefined8 *param_1,undefined8 param_2,byte param_3)

{
  long unaff_x21;
  
  FUN_1004a11cc();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    *(byte *)(param_1 + 1) = param_3 & 1;
  }
  return;
}



/* Address: 0x10049e69c | FUN_10049e69c */

void FUN_10049e69c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10049e2c4(param_1,*unaff_x20,*(undefined1 *)(unaff_x20 + 1));
  return;
}



/* Address: 0x10049e6b8 | FUN_10049e6b8 */

/* WARNING: Removing unreachable block (ram,0x00010049e71c) */

void FUN_10049e6b8(undefined8 param_1,ulong param_2,long param_3)

{
  long lVar1;
  char cVar2;
  long *plVar3;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(param_3 + 0x80);
  cVar2 = *(char *)(param_3 + 0x88);
  *(char *)(unaff_x22 + 0x59) = cVar2;
  if (lVar4 < 2) {
    lVar4 = 1;
  }
  if (99 < lVar4) {
    lVar4 = 100;
  }
  *(long *)(unaff_x22 + 0x78) = lVar4;
  FUN_1004a0794();
  *(long *)(unaff_x22 + 0x80) = param_3;
  if (*(long *)(param_3 + 0x10) == 0) {
    _swift_bridgeObjectRelease();
    lVar1 = 0x14;
    if (cVar2 != '\x01') {
      lVar1 = lVar4;
    }
    *(long *)(unaff_x22 + 0x40) = lVar1 + 1;
    *(long *)(unaff_x22 + 0x48) = lVar1;
    FUN_100357f60(unaff_x22 + 0x60,FUN_1004a1420,unaff_x22 + 0x30,&DAT_100ed93d8);
    (**(code **)(unaff_x22 + 8))
              (*(undefined8 *)(unaff_x22 + 0x60),*(undefined1 *)(unaff_x22 + 0x68));
    return;
  }
  FUN_1000da768(unaff_x22 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x88) = *(undefined8 *)(unaff_x22 + 0x70);
  plVar3 = (long *)0x40;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x90) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_10049e80c;
  FUN_1002e0f7c(param_1,param_2 & 0xcfffffffffffffff,param_3);
  return;
}



/* Address: 0x10049e80c | FUN_10049e80c */

void FUN_10049e80c(undefined *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  __ContiguousArrayStorageBase *p_Var3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  long *unaff_x22;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  
  lVar9 = *unaff_x22;
  uVar2 = *(undefined8 *)(lVar9 + 0x88);
  uVar7 = *(undefined8 *)(lVar9 + 0x80);
  lVar6 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar9 + 0x90));
  _swift_bridgeObjectRelease(uVar7);
  _swift_release(uVar2);
  if (unaff_x20 != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(lVar6 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010049e874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE,0);
    return;
  }
  uVar8 = 0x15;
  if (*(char *)(lVar9 + 0x59) != '\x01') {
    uVar8 = *(long *)(lVar9 + 0x78) + 1;
  }
  uVar1 = *(ulong *)(param_1 + 0x10);
  if (uVar8 <= *(ulong *)(param_1 + 0x10)) {
    uVar1 = uVar8;
  }
  p_Var3 = Swift::__ContiguousArrayStorageBase::typeMetadataAccessor();
  puVar4 = param_1;
  _swift_unknownObjectRetain_n(param_1,2);
  _swift_dynamicCastClass();
  if (puVar4 == (undefined *)0x0) {
    _swift_unknownObjectRelease(param_1);
    puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  uVar8 = *(ulong *)(puVar4 + 0x10);
  _swift_release();
  if (uVar8 == uVar1) {
    puVar5 = param_1;
    _swift_dynamicCastClass(param_1,p_Var3);
    _swift_unknownObjectRelease(param_1);
    puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
    if (puVar5 != (undefined *)0x0) goto LAB_10049e908;
  }
  else {
    _swift_unknownObjectRelease(param_1);
    puVar4 = param_1;
    FUN_10049ff08(param_1,param_1 + 0x20,0,uVar1 << 1 | 1);
  }
  _swift_unknownObjectRelease(param_1);
  puVar5 = puVar4;
LAB_10049e908:
  uVar2 = 0x14;
  if (*(char *)(lVar9 + 0x59) != '\x01') {
    uVar2 = *(undefined8 *)(lVar9 + 0x78);
  }
  *(undefined **)(lVar9 + 0x20) = puVar5;
  *(undefined8 *)(lVar9 + 0x28) = uVar2;
  FUN_100357f60(lVar9 + 0x50,FUN_1004a1418,lVar9 + 0x10,&DAT_100ed93d8);
  _swift_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010049e968. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar6 + 8))(*(undefined8 *)(lVar9 + 0x50),*(undefined1 *)(lVar9 + 0x58));
  return;
}



/* Address: 0x10049e998 | FUN_10049e998 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10049e998(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  undefined *puVar1;
  ulong uVar2;
  code *pcVar3;
  _ArrayBuffer _Var4;
  undefined *puVar5;
  _SliceBuffer<Swift__CocoaArrayWrapper_subscript_getter_:_(Swift_Range<Swift_Int>)__>_Swift__SliceBuffer<Swift_AnyObject>>
  _Var6;
  undefined *puVar7;
  _CocoaArrayWrapper _Var8;
  ulong uVar9;
  __int64 _Var10;
  _CocoaArrayWrapper _Var11;
  _ArrayBuffer _Var12;
  undefined8 *puVar13;
  ulong uVar14;
  long lVar15;
  undefined *local_e8 [3];
  undefined *local_d0;
  long lStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  ulong local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  FUN_1003594c0(&local_c0);
  uVar9 = local_a0;
  FUN_100004640(&local_c0,local_a8);
  FUN_1003595f8(local_e8);
  FUN_100004640(local_e8,local_d0);
  (**(code **)(lStack_c8 + 0x28))(local_d0,lStack_c8);
  _Var4.unknown = local_d0;
  (**(code **)(uVar9 + 0x18))();
  FUN_100004594(local_e8);
  FUN_100004594(&local_c0);
  if ((long)param_4 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10049ec60);
    (*pcVar3)();
  }
  uVar14 = (ulong)_Var4.unknown >> 0x3e;
  if (uVar14 == 0) {
    puVar5 = *(undefined **)((_Var4.unknown & 0xffffffffffffff8U) + 0x10);
    puVar7 = puVar5;
    if (param_4 <= puVar5) {
      puVar7 = param_4;
    }
    _Var8.unknown = (undefined *)0x0;
    if (param_4 != (undefined *)0x0) {
      _Var8.unknown = puVar7;
    }
    if ((long)puVar5 < (long)_Var8.unknown) {
LAB_10049eca8:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10049ecac);
      (*pcVar3)();
    }
  }
  else {
    _Var11.unknown = _Var4.unknown & 0xffffffffffffff8U;
    if (((ulong)_Var4.unknown & 0x8000000000000000) != 0) {
      _Var11.unknown = _Var4.unknown;
    }
    puVar7 = (undefined *)Swift::_CocoaArrayWrapper::get_endIndex(_Var11);
    _Var10 = Swift::_CocoaArrayWrapper::get_endIndex(_Var11);
    if (_Var10 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10049ecb8);
      (*pcVar3)();
    }
    puVar5 = puVar7;
    if ((long)param_4 <= (long)puVar7) {
      puVar5 = param_4;
    }
    puVar1 = param_4;
    if (-1 < (long)puVar7) {
      puVar1 = puVar5;
    }
    _Var8.unknown = (undefined *)0x0;
    if (param_4 != (undefined *)0x0) {
      _Var8.unknown = puVar1;
    }
    _Var10 = Swift::_CocoaArrayWrapper::get_endIndex(_Var11);
    if (_Var10 < (long)_Var8.unknown) goto LAB_10049eca8;
  }
  if (((ulong)_Var4.unknown & 0xc000000000000001) == 0 || _Var8.unknown == (undefined *)0x0) {
    _swift_bridgeObjectRetain(_Var4.unknown);
  }
  else {
    FUN_1003214a8(0);
    _swift_bridgeObjectRetain(_Var4.unknown);
    puVar7 = (undefined *)0x0;
    do {
      puVar5 = puVar7 + 1;
      Swift::_ArrayBuffer::_typeCheckSlowPath((__int64)puVar7,_Var4);
      puVar7 = puVar5;
    } while (_Var8.unknown != puVar5);
  }
  if (uVar14 == 0) {
    _Var12.unknown = (undefined *)0x0;
    _Var6.unknown = _Var4.unknown & 0xffffffffffffff8;
    _Var11.unknown = _Var8.unknown;
    _Var8.unknown = _Var6.unknown + 0x20;
  }
  else {
    _swift_bridgeObjectRelease(_Var4.unknown);
    _Var12.unknown = _Var4.unknown & 0xffffffffffffff8;
    if (((ulong)_Var4.unknown & 0x8000000000000000) != 0) {
      _Var12.unknown = _Var4.unknown;
    }
    _Var6 = Swift::_CocoaArrayWrapper::_get_subscript((Range<__int64>)0x0,_Var8);
    _Var11.unknown = (undefined *)(uVar9 >> 1);
  }
  uVar9 = (long)_Var11.unknown - (long)_Var12.unknown;
  if (!SBORROW8((long)_Var11.unknown,(long)_Var12.unknown)) {
    if (uVar9 == 0) {
      _swift_unknownObjectRelease();
      puVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
    }
    else {
      local_e8[0] = PTR___swiftEmptyArrayStorage_100eae0d8;
      FUN_10046ae28(0,uVar9 & ((long)uVar9 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10049ecb4);
        (*pcVar3)();
      }
      if ((long)_Var11.unknown <= (long)_Var12.unknown) {
        _Var11.unknown = _Var12.unknown;
      }
      lVar15 = (long)_Var11.unknown - (long)_Var12.unknown;
      puVar13 = (undefined8 *)(_Var8.unknown + (long)_Var12.unknown * 8);
      do {
        puVar7 = local_e8[0];
        if (lVar15 == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10049ec5c);
          (*pcVar3)();
        }
        FUN_10049738c(&local_c0,*puVar13);
        uVar2 = *(ulong *)(puVar7 + 0x10);
        local_e8[0] = puVar7;
        if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar2) {
          FUN_10046ae28(1 < *(ulong *)(puVar7 + 0x18),uVar2 + 1,1);
        }
        puVar7 = local_e8[0];
        *(ulong *)(local_e8[0] + 0x10) = uVar2 + 1;
        *(undefined8 *)(local_e8[0] + uVar2 * 0x58 + 0x28) = uStack_b8;
        *(undefined8 *)(local_e8[0] + uVar2 * 0x58 + 0x20) = local_c0;
        *(undefined8 *)(local_e8[0] + uVar2 * 0x58 + 0x38) = local_a8;
        *(undefined8 *)(local_e8[0] + uVar2 * 0x58 + 0x30) = uStack_b0;
        *(undefined8 *)(local_e8[0] + uVar2 * 0x58 + 0x70) = local_70;
        *(undefined8 *)(local_e8[0] + uVar2 * 0x58 + 0x58) = uStack_88;
        *(undefined8 *)(local_e8[0] + uVar2 * 0x58 + 0x50) = uStack_90;
        *(undefined8 *)(local_e8[0] + uVar2 * 0x58 + 0x68) = uStack_78;
        *(undefined8 *)(local_e8[0] + uVar2 * 0x58 + 0x60) = local_80;
        *(undefined8 *)(local_e8[0] + uVar2 * 0x58 + 0x48) = uStack_98;
        *(ulong *)(local_e8[0] + uVar2 * 0x58 + 0x40) = local_a0;
        lVar15 = lVar15 + -1;
        puVar13 = puVar13 + 1;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
      _swift_unknownObjectRelease(_Var6.unknown);
    }
    if (uVar14 == 0) {
      _Var10 = *(long *)(((ulong)_Var4.unknown & 0xffffffffffffff8) + 0x10);
    }
    else {
      _Var11.unknown = _Var4.unknown & 0xffffffffffffff8;
      if (((ulong)_Var4.unknown & 0x8000000000000000) != 0) {
        _Var11.unknown = _Var4.unknown;
      }
      _Var10 = Swift::_CocoaArrayWrapper::get_endIndex(_Var11);
    }
    _swift_bridgeObjectRelease(_Var4.unknown);
    *param_1 = puVar7;
    *(bool *)(param_1 + 1) = (long)param_4 < _Var10;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10049ecb0);
  (*pcVar3)();
}



/* Address: 0x10049ecb8 | FUN_10049ecb8 */

void FUN_10049ecb8(undefined8 *param_1,undefined8 param_2,long param_3,ulong param_4)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  code *pcVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined *local_f8;
  undefined1 auStack_e8 [24];
  undefined8 local_d0;
  long lStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((long)param_4 < 0) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10049eed8);
    (*pcVar7)();
  }
  uVar2 = *(ulong *)(param_3 + 0x10);
  if (param_4 <= *(ulong *)(param_3 + 0x10)) {
    uVar2 = param_4;
  }
  _swift_bridgeObjectRetain(param_3);
  local_f8 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if ((param_4 != 0) && (uVar2 != 0)) {
    uVar11 = 0;
    do {
      uVar3 = uVar11;
      if ((long)uVar11 <= (long)uVar2) {
        uVar3 = uVar2;
      }
      puVar10 = (undefined8 *)(param_3 + 0x28 + uVar11 * 0x10);
      uVar11 = uVar11 + 1;
      while( true ) {
        if (uVar11 - uVar3 == 1) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10049eed4);
          (*pcVar7)();
        }
        lVar9 = puVar10[-1];
        uVar4 = *puVar10;
        _swift_bridgeObjectRetain(uVar4);
        FUN_1003594c0(auStack_e8);
        lVar6 = lStack_c8;
        uVar5 = local_d0;
        FUN_100004640(auStack_e8,local_d0);
        (**(code **)(lVar6 + 0x20))(lVar9,uVar4,uVar5,lVar6);
        if (lVar9 != 0) break;
        _swift_bridgeObjectRelease(uVar4);
        FUN_100004594(auStack_e8);
        uVar11 = uVar11 + 1;
        puVar10 = puVar10 + 2;
        if (uVar11 - uVar2 == 1) goto LAB_10049ee90;
      }
      FUN_100004594(auStack_e8);
      FUN_10049738c(&local_c0,lVar9);
      _swift_bridgeObjectRelease(uVar4);
      puVar8 = local_f8;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((ulong)puVar8 & 1) == 0) {
        plVar1 = (long *)(local_f8 + 0x10);
        local_f8 = (undefined *)0x0;
        FUN_1004646ec(0,*plVar1 + 1,1);
      }
      uVar3 = *(ulong *)(local_f8 + 0x10);
      if (*(ulong *)(local_f8 + 0x18) >> 1 <= uVar3) {
        puVar8 = (undefined *)(ulong)(1 < *(ulong *)(local_f8 + 0x18));
        FUN_1004646ec(puVar8,uVar3 + 1,1,local_f8);
        local_f8 = puVar8;
      }
      *(ulong *)(local_f8 + 0x10) = uVar3 + 1;
      *(undefined8 *)(local_f8 + uVar3 * 0x58 + 0x28) = uStack_b8;
      *(undefined8 *)(local_f8 + uVar3 * 0x58 + 0x20) = local_c0;
      *(undefined8 *)(local_f8 + uVar3 * 0x58 + 0x38) = uStack_a8;
      *(undefined8 *)(local_f8 + uVar3 * 0x58 + 0x30) = uStack_b0;
      *(undefined8 *)(local_f8 + uVar3 * 0x58 + 0x70) = local_70;
      *(undefined8 *)(local_f8 + uVar3 * 0x58 + 0x58) = uStack_88;
      *(undefined8 *)(local_f8 + uVar3 * 0x58 + 0x50) = uStack_90;
      *(undefined8 *)(local_f8 + uVar3 * 0x58 + 0x68) = uStack_78;
      *(undefined8 *)(local_f8 + uVar3 * 0x58 + 0x60) = local_80;
      *(undefined8 *)(local_f8 + uVar3 * 0x58 + 0x48) = uStack_98;
      *(undefined8 *)(local_f8 + uVar3 * 0x58 + 0x40) = local_a0;
    } while (uVar11 != uVar2);
  }
LAB_10049ee90:
  _swift_unknownObjectRelease(param_3);
  lVar9 = *(long *)(param_3 + 0x10);
  *param_1 = local_f8;
  *(bool *)(param_1 + 1) = (long)param_4 < lVar9;
  return;
}



/* Address: 0x10049eed8 | FUN_10049eed8 */

void FUN_10049eed8(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  long lVar2;
  undefined1 *puVar3;
  Date DVar4;
  Date DVar5;
  bool bVar6;
  Date DVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined *puVar11;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  long lVar15;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long unaff_x21;
  long lVar16;
  long lVar17;
  code *pcVar18;
  undefined8 uVar19;
  long lVar20;
  code *pcVar21;
  undefined1 auStack_e0 [8];
  undefined *local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  undefined *local_b8;
  undefined1 *local_b0;
  Date local_a8;
  long local_a0;
  Date local_98;
  long local_90;
  long local_88;
  undefined *local_80;
  undefined8 local_78;
  undefined7 extraout_var;
  
  puVar14 = &DAT_100fca978;
  local_78 = param_3;
  FUN_1000037f0(&DAT_100fca978,&DAT_100c4faf0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar14 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar14 = &DAT_100fca980;
  local_b0 = auStack_e0 + -extraout_x8;
  FUN_1000037f0(&DAT_100fca980,&DAT_100c4faf8);
  local_b8 = puVar14;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar14 + -8) + 0x40));
  lVar13 = (long)(auStack_e0 + -extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_c0 = lVar13;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar13 = lVar13 - extraout_x12;
  puVar14 = &DAT_100fca988;
  local_d0 = lVar13;
  FUN_1000037f0(&DAT_100fca988,&DAT_100c4fb00);
  local_d8 = puVar14;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar14 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = lVar13 - extraout_x8_01;
  local_c8 = lVar13;
  local_80 = (undefined *)Foundation::Date::typeMetadataAccessor();
  local_90 = *(long *)(local_80 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_90 + 0x40));
  puVar11 = (undefined *)(lVar13 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  puVar14 = &DAT_100fca990;
  local_a8.unknown = puVar11;
  FUN_1000037f0(&DAT_100fca990,&DAT_100c4fb08);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar14 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = (long)puVar11 - extraout_x8_03;
  DVar7.unknown = (undefined *)0x0;
  FUN_1004a1428();
  lVar16 = *(long *)(DVar7.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar16 + 0x40));
  lVar13 = lVar17 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  local_a0 = lVar13;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar14 = (undefined *)(lVar13 - extraout_x12_00);
  local_98.unknown = puVar14;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar13 = (long)puVar14 - extraout_x12_01;
  puVar14 = &DAT_100fca998;
  local_88 = lVar13;
  FUN_1000037f0(&DAT_100fca998,&DAT_100c4fb10);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar14 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = lVar13 - extraout_x8_05;
  puVar11 = &DAT_100fca9a0;
  FUN_1000037f0(&DAT_100fca9a0,&DAT_100c4fb18);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar11 + -8) + 0x40));
  lVar15 = lVar13 - (extraout_x8_06 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar12 = lVar15 - extraout_x12_02;
  if (param_2 == 0) {
    uVar10 = 1;
  }
  else {
    FUN_10049f6dc(param_1,param_2,0x6f72665f65746164,0xe90000000000006d);
    if (unaff_x21 != 0) {
      return;
    }
    uVar10 = 0;
  }
  pcVar21 = *(code **)(lVar16 + 0x38);
  uVar19 = 1;
  (*pcVar21)(lVar12,uVar10,1,DVar7.unknown);
  if (param_4 != 0) {
    FUN_10049f6dc(lVar15,local_78,param_4,0x6f745f65746164,&DAT_e700000000000000);
    if (unaff_x21 != 0) goto LAB_10049f224;
    uVar19 = 0;
  }
  (*pcVar21)(lVar15,uVar19,1,DVar7.unknown);
  lVar20 = (long)*(int *)(puVar14 + 0x30);
  FUN_100011090(lVar12,lVar13,&DAT_100fca9a0,&DAT_100c4fb18);
  FUN_100011090(lVar15,lVar13 + lVar20,&DAT_100fca9a0,&DAT_100c4fb18);
  pcVar21 = *(code **)(lVar16 + 0x30);
  lVar8 = lVar13;
  (*pcVar21)(lVar13,1,DVar7.unknown);
  lVar16 = lVar13 + lVar20;
  (*pcVar21)(lVar16,1);
  lVar2 = local_88;
  DVar5.unknown = local_98.unknown;
  if ((int)lVar8 == 1) {
    if ((int)lVar16 == 1) {
      FUN_100005808(lVar15,&DAT_100fca9a0,&DAT_100c4fb18);
      FUN_100005808(lVar12,&DAT_100fca9a0,&DAT_100c4fb18);
      return;
    }
    FUN_1004a1460(lVar13 + lVar20,local_88);
    FUN_10049f9d4(lVar17,lVar2);
    puVar9 = &DAT_100fc8168;
    FUN_100003a00(&DAT_100fc8168,PTR_typeMetadataAccessor_100ea7480,
                  PTR_Foundation__Foundation__Date_>Swift__Equatable_100ea74a0);
    bVar6 = Swift::Equatable::___infix(lVar17,lVar17,local_80,puVar9);
    if (!bVar6) {
                    /* WARNING: Does not return */
      pcVar21 = (code *)SoftwareBreakpoint(1,0x10049f6d8);
      (*pcVar21)();
    }
    FUN_1002d74fc(lVar17);
    FUN_100005808(lVar17,&DAT_100fca990,&DAT_100c4fb08);
  }
  else {
    if ((int)lVar16 != 1) {
      FUN_1004a1460(lVar13,local_98.unknown);
      lVar16 = local_a0;
      FUN_1004a1460(lVar13 + lVar20,local_a0);
      DVar4.unknown = local_a8.unknown;
      FUN_10049f9d4(local_a8.unknown,lVar16);
      bVar6 = Foundation::Date::<_infix(DVar5,DVar4,DVar7);
      puVar9 = (undefined8 *)CONCAT71(extraout_var,bVar6);
      if (!bVar6) {
        FUN_100491028();
        _swift_allocError(&DAT_100ed8ab0,puVar9,0,0);
        *puVar9 = 0xd000000000000025;
        puVar9[1] = 0x8000000100da9b00;
        *(undefined1 *)(puVar9 + 2) = 5;
        _swift_willThrow();
        (**(code **)(local_90 + 8))(DVar4.unknown,local_80);
        FUN_1004a14a4(lVar16);
        FUN_1004a14a4(DVar5.unknown);
        FUN_100005808(lVar15,&DAT_100fca9a0,&DAT_100c4fb18);
LAB_10049f224:
        FUN_100005808(lVar12,&DAT_100fca9a0,&DAT_100c4fb18);
        return;
      }
      puVar14 = &DAT_100fca9a8;
      FUN_100003a00(&DAT_100fca9a8,PTR_typeMetadataAccessor_100ea7480,
                    PTR_Foundation__Foundation__Date_>Swift__Comparable_100ea7498);
      puVar11 = local_80;
      bVar6 = Swift::Comparable::<__infix(DVar5.unknown,DVar4.unknown,local_80,puVar14);
      lVar16 = local_90;
      lVar13 = local_d0;
      if (!bVar6) {
                    /* WARNING: Does not return */
        pcVar21 = (code *)SoftwareBreakpoint(1,0x10049f6dc);
        (*pcVar21)();
      }
      pcVar21 = *(code **)(local_90 + 0x10);
      (*pcVar21)(local_d0,DVar5.unknown,puVar11);
      puVar14 = local_b8;
      (*pcVar21)(lVar13 + *(int *)(local_b8 + 0x30),DVar4.unknown,puVar11);
      lVar2 = local_c0;
      FUN_100011090(lVar13,local_c0,&DAT_100fca980,&DAT_100c4faf8);
      lVar17 = local_c8;
      iVar1 = *(int *)(puVar14 + 0x30);
      pcVar21 = *(code **)(lVar16 + 0x20);
      (*pcVar21)(local_c8,lVar2,puVar11);
      pcVar18 = *(code **)(lVar16 + 8);
      (*pcVar18)(lVar2 + iVar1,puVar11);
      FUN_10019ffdc(lVar13,lVar2,&DAT_100fca980,&DAT_100c4faf8);
      (*pcVar21)(lVar17 + *(int *)(local_d8 + 0x24),lVar2 + *(int *)(puVar14 + 0x30),puVar11);
      (*pcVar18)(lVar2,puVar11);
      thunk_FUN_1002d9d2c(lVar17);
      FUN_100005808(lVar17,&DAT_100fca988,&DAT_100c4fb00);
      (*pcVar18)(DVar4.unknown,puVar11);
      FUN_1004a14a4(local_a0);
      FUN_1004a14a4(local_98.unknown);
      goto LAB_10049f44c;
    }
    FUN_1004a1460(lVar13,local_88);
    puVar9 = &DAT_100fc8168;
    FUN_100003a00(&DAT_100fc8168,PTR_typeMetadataAccessor_100ea7480,
                  PTR_Foundation__Foundation__Date_>Swift__Equatable_100ea74a0);
    puVar14 = local_80;
    bVar6 = Swift::Equatable::___infix(lVar2,lVar2,local_80,puVar9);
    puVar3 = local_b0;
    if (!bVar6) {
                    /* WARNING: Does not return */
      pcVar21 = (code *)SoftwareBreakpoint(1,0x10049f6d4);
      (*pcVar21)();
    }
    (**(code **)(local_90 + 0x10))(local_b0,lVar2,puVar14);
    FUN_1002d736c(puVar3);
    FUN_100005808(puVar3,&DAT_100fca978,&DAT_100c4faf0);
  }
  FUN_1004a14a4(lVar2);
LAB_10049f44c:
  FUN_100005808(lVar15,&DAT_100fca9a0,&DAT_100c4fb18);
  FUN_100005808(lVar12,&DAT_100fca9a0,&DAT_100c4fb18);
  return;
}



/* Address: 0x10049f6dc | FUN_10049f6dc */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10049f6dc(long param_1,char *param_2,void *param_3,char *param_4,void *param_5)

{
  String SVar1;
  String SVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  Date DVar5;
  undefined *self;
  ID self_00;
  NSString *pNVar6;
  Date DVar7;
  char *pcVar8;
  _StringGuts extraout_x1;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  undefined1 uVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  long lVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  undefined1 auStack_a0 [8];
  char *local_98;
  void *pvStack_90;
  char *local_88;
  void *pvStack_80;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  local_98 = param_4;
  pvStack_90 = param_5;
  local_78 = param_1;
  DVar5 = Foundation::Date::typeMetadataAccessor();
  lVar12 = *(long *)(DVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar12 + 0x40));
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar13 = (long)(auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar10 = (lVar13 - extraout_x12_00) - extraout_x12_01;
  self = &_OBJC_CLASS___NSISO8601DateFormatter;
  _objc_allocWithZone();
  self_00 = objc_stub::init((ID)self);
  objc_stub::setFormatOptions_(self_00,DAT_100fca9d8);
  local_88 = param_2;
  pvStack_80 = param_3;
  pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  DVar7.unknown = (undefined *)objc_stub::dateFromString_(self_00,pNVar6);
  if (DVar7.unknown == (undefined *)0x0) {
    objc_stub::setFormatOptions_(self_00,DAT_100fca9e0);
    pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    DVar7.unknown = (undefined *)objc_stub::dateFromString_(self_00,pNVar6);
    if (DVar7.unknown == (undefined *)0x0) {
      objc_stub::setFormatOptions_(self_00,0x113);
      pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      DVar7.unknown = (undefined *)objc_stub::dateFromString_(self_00);
      if (DVar7.unknown == (undefined *)0x0) {
        local_70 = 0;
        local_68 = 0xe000000000000000;
        Swift::_StringGuts::grow(0x2e,extraout_x1);
        _swift_bridgeObjectRelease(local_68);
        local_70 = 0x60;
        local_68 = 0xe100000000000000;
        SVar1.bridgeObject = pvStack_90;
        SVar1.str = local_98;
        SVar15.bridgeObject = param_5;
        SVar15.str = (char *)pNVar6;
        Swift::String::append(SVar1,SVar15);
        SVar14.bridgeObject = (void *)0x8000000100da9b30;
        SVar14.str = (char *)0xd000000000000029;
        SVar16.bridgeObject = param_5;
        SVar16.str = (char *)pNVar6;
        Swift::String::append(SVar14,SVar16);
        SVar2.bridgeObject = pvStack_80;
        SVar2.str = local_88;
        SVar17.bridgeObject = param_5;
        SVar17.str = (char *)pNVar6;
        pcVar8 = local_88;
        Swift::String::append(SVar2,SVar17);
        uVar4 = local_68;
        uVar3 = local_70;
        FUN_100491028();
        _swift_allocError(&DAT_100ed8ab0,pcVar8,0,0);
        *(undefined8 *)pcVar8 = uVar3;
        *(undefined8 *)(pcVar8 + 8) = uVar4;
        pcVar8[0x10] = '\x05';
        _swift_willThrow();
        return;
      }
      Foundation::Date::__unconditionallyBridgeFromObjectiveC(DVar7);
      pcVar11 = *(code **)(lVar12 + 0x20);
      (*pcVar11)(lVar13,auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),DVar5.unknown);
      lVar12 = local_78;
      (*pcVar11)(local_78,lVar13,DVar5.unknown);
      uVar9 = 1;
      goto LAB_10049f87c;
    }
  }
  Foundation::Date::__unconditionallyBridgeFromObjectiveC(DVar7);
  pcVar11 = *(code **)(lVar12 + 0x20);
  (*pcVar11)(lVar10,lVar13 - extraout_x12_00,DVar5.unknown);
  lVar12 = local_78;
  (*pcVar11)(local_78,lVar10,DVar5.unknown);
  uVar9 = 0;
LAB_10049f87c:
  lVar10 = 0;
  FUN_1004a1428();
  *(undefined1 *)(lVar12 + *(int *)(lVar10 + 0x14)) = uVar9;
  return;
}



/* Address: 0x10049f9d4 | FUN_10049f9d4 */

void FUN_10049f9d4(undefined8 param_1,Date param_2)

{
  undefined8 uVar1;
  Component CVar2;
  Identifier IVar3;
  undefined7 extraout_var;
  TimeZone TVar4;
  undefined7 extraout_var_00;
  long lVar5;
  Date DVar6;
  undefined *puVar7;
  Date DVar8;
  Calendar in_x4;
  long extraout_x8;
  long extraout_x8_00;
  long lVar9;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  undefined *puVar10;
  long extraout_x12;
  TimeZone TVar11;
  long lVar12;
  code *pcVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  Calendar *this;
  Calendar CStack_a0;
  long local_98;
  undefined *puStack_90;
  long local_88;
  long local_80;
  long lStack_78;
  undefined *local_70;
  undefined8 local_68;
  
  local_68 = param_1;
  CVar2 = Foundation::Calendar::Component::typeMetadataAccessor();
  lStack_78 = CONCAT71(extraout_var,CVar2.value);
  local_80 = *(long *)(lStack_78 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_80 + 0x40));
  lVar16 = (long)&CStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar10 = &DAT_100fc7df8;
  FUN_1000037f0(&DAT_100fc7df8,&DAT_100c4c890);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar10 + -8) + 0x40));
  puVar10 = (undefined *)(lVar16 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  local_70 = puVar10;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar9 = (long)puVar10 - extraout_x12;
  puVar10 = &DAT_100fca9e8;
  local_88 = lVar9;
  FUN_1000037f0(&DAT_100fca9e8,&DAT_100c4fb20);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = lVar9 - extraout_x8_01;
  TVar4 = Foundation::TimeZone::typeMetadataAccessor();
  lVar17 = *(long *)(TVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar17 + 0x40));
  TVar11.unknown = (undefined *)(lVar9 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  IVar3 = Foundation::Calendar::Identifier::typeMetadataAccessor();
  lVar12 = CONCAT71(extraout_var_00,IVar3.value);
  lVar14 = *(long *)(lVar12 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar14 + 0x40));
  lVar15 = (long)TVar11.unknown - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  puStack_90 = (undefined *)Foundation::Calendar::typeMetadataAccessor();
  local_98 = *(long *)(puStack_90 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_98 + 0x40));
  this = (Calendar *)(lVar15 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0));
  lVar5 = 0;
  FUN_1004a1428();
  if (param_2.unknown[*(int *)(lVar5 + 0x14)] != '\x01') {
    DVar8 = Foundation::Date::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x00010049fd44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(DVar8.unknown + -8) + 0x10))(local_68,param_2.unknown,DVar8.unknown);
    return;
  }
  (**(code **)(lVar14 + 0x68))
            (lVar15,*(undefined4 *)
                     PTR___enum_case_for_Foundation_Calendar_Identifier_gregorian_Foundation_Calendar_Identifier_Type___>_Foundation_Calendar_Identifier_100ea75b8
             ,lVar12);
  Foundation::Calendar::_init();
  (**(code **)(lVar14 + 8))(lVar15,lVar12);
  Foundation::TimeZone::_init(0);
  lVar12 = lVar9;
  (**(code **)(lVar17 + 0x30))(lVar9,1,TVar4.unknown);
  if ((int)lVar12 != 1) {
    (**(code **)(lVar17 + 0x20))(TVar11.unknown,lVar9,TVar4.unknown);
    Foundation::Calendar::set_timeZone(this,TVar11);
    lVar9 = lStack_78;
    lVar5 = local_80;
    (**(code **)(local_80 + 0x68))
              (lVar16,*(undefined4 *)
                       PTR___enum_case_for_Foundation_Calendar_Component_day_Foundation_Calendar_Component_Type___>_Foundation_Calendar_Component_100ea7628
               ,lStack_78);
    lVar12 = local_88;
    Foundation::Calendar::_date((Component)(__int8)lVar16,1,param_2,false,in_x4);
    (**(code **)(lVar5 + 8))(lVar16,lVar9);
    puVar10 = local_70;
    FUN_10019ffdc(lVar12,local_70,&DAT_100fc7df8,&DAT_100c4c890);
    DVar6 = Foundation::Date::typeMetadataAccessor();
    lVar12 = *(long *)(DVar6.unknown + -8);
    pcVar13 = *(code **)(lVar12 + 0x30);
    DVar8.unknown = puVar10;
    (*pcVar13)(puVar10,1,DVar6.unknown);
    uVar1 = local_68;
    if ((int)DVar8.unknown == 1) {
      Foundation::Date::addingTimeInterval(86400.0,DVar8);
      (**(code **)(local_98 + 8))(this,puStack_90);
      puVar7 = puVar10;
      (*pcVar13)(puVar10,1,DVar6.unknown);
      if ((int)puVar7 != 1) {
        FUN_100005808(puVar10,&DAT_100fc7df8,&DAT_100c4c890);
      }
    }
    else {
      (**(code **)(local_98 + 8))(this,puStack_90);
      (**(code **)(lVar12 + 0x20))(uVar1,puVar10,DVar6.unknown);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar13 = (code *)SoftwareBreakpoint(1,0x10049fd90);
  (*pcVar13)();
}



/* Address: 0x10049fd90 | FUN_10049fd90 */

undefined1  [16] FUN_10049fd90(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = &DAT_e600000000000000;
  auVar1._0_8_ = 0x686372616573;
  return auVar1;
}



/* Address: 0x10049fda4 | FUN_10049fda4 */

void FUN_10049fda4(undefined8 *param_1)

{
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
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  
  FUN_10049ffdc(&local_c8);
  param_1[0x11] = uStack_40;
  param_1[0x10] = local_48;
  param_1[0x13] = uStack_30;
  param_1[0x12] = local_38;
  *(undefined4 *)(param_1 + 0x14) = local_28;
  param_1[9] = uStack_80;
  param_1[8] = local_88;
  param_1[0xb] = uStack_70;
  param_1[10] = local_78;
  param_1[0xd] = uStack_60;
  param_1[0xc] = local_68;
  param_1[0xf] = uStack_50;
  param_1[0xe] = local_58;
  param_1[1] = uStack_c0;
  *param_1 = local_c8;
  param_1[3] = uStack_b0;
  param_1[2] = local_b8;
  param_1[5] = uStack_a0;
  param_1[4] = local_a8;
  param_1[7] = uStack_90;
  param_1[6] = local_98;
  return;
}



/* Address: 0x10049fe14 | FUN_10049fe14 */

void FUN_10049fe14(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  long unaff_x22;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *(undefined8 *)(unaff_x22 + 0xa0) = param_1;
  uVar2 = param_4[0xc];
  uVar4 = param_4[0xf];
  uVar3 = param_4[0xe];
  *(undefined8 *)(unaff_x22 + 0x78) = param_4[0xd];
  *(undefined8 *)(unaff_x22 + 0x70) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x88) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x80) = uVar3;
  uVar2 = *(undefined8 *)((long)param_4 + 0x79);
  *(undefined8 *)(unaff_x22 + 0x91) = *(undefined8 *)((long)param_4 + 0x81);
  *(undefined8 *)(unaff_x22 + 0x89) = uVar2;
  uVar2 = param_4[4];
  uVar4 = param_4[7];
  uVar3 = param_4[6];
  *(undefined8 *)(unaff_x22 + 0x38) = param_4[5];
  *(undefined8 *)(unaff_x22 + 0x30) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar3;
  uVar4 = param_4[8];
  uVar3 = param_4[0xb];
  uVar2 = param_4[10];
  *(undefined8 *)(unaff_x22 + 0x58) = param_4[9];
  *(undefined8 *)(unaff_x22 + 0x50) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x68) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x60) = uVar2;
  uVar4 = *param_4;
  uVar3 = param_4[3];
  uVar2 = param_4[2];
  *(undefined8 *)(unaff_x22 + 0x18) = param_4[1];
  *(undefined8 *)(unaff_x22 + 0x10) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar2;
  uVar2 = *unaff_x20;
  plVar1 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xa8) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10049fea8;
  FUN_10049e6b8(param_2,param_3 & 0xcfffffffffffffff,unaff_x22 + 0x10,uVar2);
  return;
}



/* Address: 0x10049fea8 | FUN_10049fea8 */

void FUN_10049fea8(undefined8 param_1,byte param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  long lVar3;
  
  lVar3 = *unaff_x22;
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0xa8));
  if (unaff_x20 == 0) {
    puVar1 = *(undefined8 **)(lVar3 + 0xa0);
    *puVar1 = param_1;
    *(byte *)(puVar1 + 1) = param_2 & 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010049ff04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Address: 0x10049ff08 | FUN_10049ff08 */

undefined * FUN_10049ff08(undefined8 param_1,long param_2,ulong param_3,ulong param_4)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  param_4 = param_4 >> 1;
  lVar2 = param_4 - param_3;
  if (SBORROW8(param_4,param_3)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10049ffdc);
    (*pcVar3)();
  }
  puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (lVar2 != 0) {
    if (0 < lVar2) {
      puVar4 = &DAT_100fca970;
      FUN_1000037f0(&DAT_100fca970,&DAT_100c4fae8);
      _swift_allocObject();
      puVar5 = puVar4;
      _malloc_size();
      puVar1 = puVar5 + -0x11;
      if (0x1f < (long)puVar5) {
        puVar1 = puVar5 + -0x20;
      }
      *(long *)(puVar4 + 0x10) = lVar2;
      *(long *)(puVar4 + 0x18) = ((long)puVar1 >> 4) << 1;
    }
    if (param_3 == param_4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10049ffd8);
      (*pcVar3)();
    }
    _swift_arrayInitWithCopy(puVar4 + 0x20,param_2 + param_3 * 0x10,lVar2,&DAT_100ec8300);
  }
  return puVar4;
}



/* Address: 0x10049ffdc | FUN_10049ffdc */

void FUN_10049ffdc(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 auStack_3b8 [168];
  undefined1 auStack_310 [344];
  undefined8 local_1b8;
  undefined1 *puStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined *local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined1 local_168;
  undefined7 uStack_167;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined1 local_138;
  undefined7 uStack_137;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined1 *puStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined *local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  
  puVar1 = &DAT_100fc95f0;
  FUN_1000037f0(&DAT_100fc95f0,&DAT_100c4e190);
  puVar2 = puVar1;
  _swift_initStackObject();
  *(undefined8 *)(puVar2 + 0x18) = 4;
  *(undefined8 *)(puVar2 + 0x10) = 2;
  *(undefined1 **)(puVar2 + 0x20) = &DAT_65707974;
  *(undefined1 **)(puVar2 + 0x28) = &DAT_e400000000000000;
  *(undefined1 **)(puVar2 + 0x38) = &DAT_e600000000000000;
  *(undefined8 *)(puVar2 + 0x30) = 0x7463656a626f;
  *(undefined8 *)(puVar2 + 0x48) = 0x3000000000000000;
  *(undefined8 *)(puVar2 + 0x40) = 0;
  puVar2[0x50] = 0;
  *(undefined8 *)(puVar2 + 0x58) = 0x69747265706f7270;
  *(undefined8 *)(puVar2 + 0x60) = 0xea00000000007365;
  puVar3 = puVar1;
  _swift_allocObject(puVar1,0x218,7);
  *(undefined8 *)(puVar3 + 0x18) = 0x12;
  *(undefined8 *)(puVar3 + 0x10) = 9;
  *(undefined8 *)(puVar3 + 0x20) = 0x7972657571;
  *(undefined1 **)(puVar3 + 0x28) = &DAT_e500000000000000;
  puVar4 = puVar1;
  _swift_initStaticObject(puVar1,&DAT_100fca9f8);
  puVar5 = puVar4;
  FUN_10045afd8();
  puVar6 = &DAT_100fc9690;
  FUN_1000037f0(&DAT_100fc9690,&DAT_100c4e4e0);
  _swift_arrayDestroy(puVar4 + 0x20,2,puVar6);
  *(undefined **)(puVar3 + 0x30) = puVar5;
  *(undefined8 *)(puVar3 + 0x38) = 0;
  *(undefined8 *)(puVar3 + 0x40) = 0;
  *(undefined8 *)(puVar3 + 0x48) = 0x2000000000000000;
  puVar3[0x50] = 1;
  *(undefined1 **)(puVar3 + 0x58) = &DAT_65707974;
  *(undefined1 **)(puVar3 + 0x60) = &DAT_e400000000000000;
  puVar5 = puVar1;
  _swift_initStackObject(puVar1,auStack_310);
  *(undefined1 **)(puVar5 + 0x20) = &DAT_65707974;
  *(undefined8 *)(puVar5 + 0x18) = 6;
  *(undefined8 *)(puVar5 + 0x10) = 3;
  *(undefined1 **)(puVar5 + 0x28) = &DAT_e400000000000000;
  *(undefined1 **)(puVar5 + 0x38) = &DAT_e600000000000000;
  *(undefined1 **)(puVar5 + 0x30) = &DAT_676e69727473;
  *(undefined8 *)(puVar5 + 0x48) = 0x3000000000000000;
  *(undefined8 *)(puVar5 + 0x40) = 0;
  puVar5[0x50] = 0;
  *(undefined8 *)(puVar5 + 0x58) = 0x7470697263736564;
  *(undefined1 **)(puVar5 + 0x60) = &DAT_eb000000006e6f69;
  *(undefined8 *)(puVar5 + 0x68) = 0xd000000000000011;
  *(undefined8 *)(puVar5 + 0x70) = 0x8000000100da9ea0;
  *(undefined8 *)(puVar5 + 0x80) = 0x3000000000000000;
  *(undefined8 *)(puVar5 + 0x78) = 0;
  puVar5[0x88] = 0;
  *(undefined8 *)(puVar5 + 0x90) = 0x6d756e65;
  *(undefined1 **)(puVar5 + 0x98) = &DAT_e400000000000000;
  puVar4 = &DAT_100fc97a8;
  FUN_1000037f0(&DAT_100fc97a8,&DAT_100c4e1a0);
  _swift_initStaticObject();
  *(undefined **)(puVar5 + 0xa0) = puVar4;
  *(undefined8 *)(puVar5 + 0xa8) = 0;
  *(undefined8 *)(puVar5 + 0xb0) = 0;
  *(undefined8 *)(puVar5 + 0xb8) = 0x1000000000000000;
  puVar5[0xc0] = 1;
  puVar4 = puVar5;
  FUN_10045afd8();
  _swift_setDeallocating(puVar5);
  _swift_arrayDestroy(puVar5 + 0x20,3,puVar6);
  *(undefined **)(puVar3 + 0x68) = puVar4;
  *(undefined8 *)(puVar3 + 0x70) = 0;
  *(undefined8 *)(puVar3 + 0x78) = 0;
  *(undefined8 *)(puVar3 + 0x80) = 0x2000000000000000;
  puVar3[0x88] = 1;
  *(undefined8 *)(puVar3 + 0x90) = 0x707061;
  *(undefined8 *)(puVar3 + 0x98) = 0xe300000000000000;
  puVar4 = puVar1;
  _swift_initStaticObject(puVar1,&DAT_100fcab80);
  puVar5 = puVar4;
  FUN_10045afd8();
  _swift_arrayDestroy(puVar4 + 0x20,2,puVar6);
  *(undefined **)(puVar3 + 0xa0) = puVar5;
  *(undefined8 *)(puVar3 + 0xa8) = 0;
  *(undefined8 *)(puVar3 + 0xb0) = 0;
  *(undefined8 *)(puVar3 + 0xb8) = 0x2000000000000000;
  puVar3[0xc0] = 1;
  *(undefined8 *)(puVar3 + 200) = 0x656369766564;
  *(undefined1 **)(puVar3 + 0xd0) = &DAT_e600000000000000;
  puVar4 = puVar1;
  _swift_initStaticObject(puVar1,&DAT_100fcac18);
  puVar5 = puVar4;
  FUN_10045afd8();
  _swift_arrayDestroy(puVar4 + 0x20,2,puVar6);
  *(undefined **)(puVar3 + 0xd8) = puVar5;
  *(undefined8 *)(puVar3 + 0xe0) = 0;
  *(undefined8 *)(puVar3 + 0xe8) = 0;
  *(undefined8 *)(puVar3 + 0xf0) = 0x2000000000000000;
  puVar3[0xf8] = 1;
  *(undefined8 *)(puVar3 + 0x100) = 0x656c746974;
  *(undefined1 **)(puVar3 + 0x108) = &DAT_e500000000000000;
  puVar5 = puVar1;
  _swift_initStaticObject(puVar1,&DAT_100fcacb0);
  puVar4 = puVar5;
  FUN_10045afd8();
  _swift_arrayDestroy(puVar5 + 0x20,2,puVar6);
  *(undefined **)(puVar3 + 0x110) = puVar4;
  *(undefined8 *)(puVar3 + 0x118) = 0;
  *(undefined8 *)(puVar3 + 0x120) = 0;
  *(undefined8 *)(puVar3 + 0x128) = 0x2000000000000000;
  puVar3[0x130] = 1;
  *(undefined8 *)(puVar3 + 0x138) = 0x6472616f626e6970;
  *(undefined8 *)(puVar3 + 0x140) = 0xeb0000000064695f;
  puVar4 = puVar1;
  _swift_initStaticObject(puVar1,&DAT_100fcad48);
  puVar5 = puVar4;
  FUN_10045afd8();
  _swift_arrayDestroy(puVar4 + 0x20,2,puVar6);
  *(undefined **)(puVar3 + 0x148) = puVar5;
  *(undefined8 *)(puVar3 + 0x150) = 0;
  *(undefined8 *)(puVar3 + 0x158) = 0;
  *(undefined8 *)(puVar3 + 0x160) = 0x2000000000000000;
  puVar3[0x168] = 1;
  *(undefined8 *)(puVar3 + 0x170) = 0x6f72665f65746164;
  *(undefined8 *)(puVar3 + 0x178) = 0xe90000000000006d;
  puVar4 = puVar1;
  _swift_initStaticObject(puVar1,&DAT_100fcade0);
  puVar5 = puVar4;
  FUN_10045afd8();
  _swift_arrayDestroy(puVar4 + 0x20,2,puVar6);
  *(undefined **)(puVar3 + 0x180) = puVar5;
  *(undefined8 *)(puVar3 + 0x188) = 0;
  *(undefined8 *)(puVar3 + 400) = 0;
  *(undefined8 *)(puVar3 + 0x198) = 0x2000000000000000;
  puVar3[0x1a0] = 1;
  *(undefined8 *)(puVar3 + 0x1a8) = 0x6f745f65746164;
  *(undefined1 **)(puVar3 + 0x1b0) = &DAT_e700000000000000;
  puVar4 = puVar1;
  _swift_initStaticObject(puVar1,&DAT_100fcae78);
  puVar5 = puVar4;
  FUN_10045afd8();
  _swift_arrayDestroy(puVar4 + 0x20,2,puVar6);
  *(undefined **)(puVar3 + 0x1b8) = puVar5;
  *(undefined8 *)(puVar3 + 0x1c0) = 0;
  *(undefined8 *)(puVar3 + 0x1c8) = 0;
  *(undefined8 *)(puVar3 + 0x1d0) = 0x2000000000000000;
  puVar3[0x1d8] = 1;
  *(undefined8 *)(puVar3 + 0x1e0) = 0x74696d696c;
  *(undefined1 **)(puVar3 + 0x1e8) = &DAT_e500000000000000;
  _swift_initStaticObject(puVar1,&DAT_100fcaf10);
  puVar4 = puVar1;
  FUN_10045afd8();
  _swift_arrayDestroy(puVar1 + 0x20,4,puVar6);
  *(undefined8 *)(puVar3 + 0x1f8) = 0;
  *(undefined8 *)(puVar3 + 0x200) = 0;
  *(undefined **)(puVar3 + 0x1f0) = puVar4;
  *(undefined8 *)(puVar3 + 0x208) = 0x2000000000000000;
  puVar3[0x210] = 1;
  puVar1 = puVar3;
  FUN_10045afd8();
  _swift_setDeallocating(puVar3);
  _swift_arrayDestroy(puVar3 + 0x20,9,puVar6);
  _swift_deallocClassInstance(puVar3,0x20,7);
  *(undefined **)(puVar2 + 0x68) = puVar1;
  *(undefined8 *)(puVar2 + 0x70) = 0;
  *(undefined8 *)(puVar2 + 0x78) = 0;
  *(undefined8 *)(puVar2 + 0x80) = 0x2000000000000000;
  puVar2[0x88] = 1;
  puVar1 = puVar2;
  FUN_10045afd8();
  _swift_setDeallocating(puVar2);
  _swift_arrayDestroy(puVar2 + 0x20,2,puVar6);
  local_1b8 = 0x686372616573;
  puStack_1b0 = &DAT_e600000000000000;
  local_1a8 = 0xd000000000000012;
  uStack_1a0 = 0x8000000100da9b60;
  local_198 = 0x10000000000002df;
  uStack_190 = 0x8000000100da9b80;
  uStack_180 = 0;
  local_178 = 0;
  uStack_170 = 0x2000000000000000;
  local_168 = 1;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  local_140 = 0x3000000000000000;
  local_138 = 0xff;
  uStack_120 = 0;
  uStack_130 = 0;
  local_128 = 0;
  local_118 = 0x1000202;
  local_110 = 0x686372616573;
  puStack_108 = &DAT_e600000000000000;
  local_100 = 0xd000000000000012;
  uStack_f8 = 0x8000000100da9b60;
  local_f0 = 0x10000000000002df;
  uStack_e8 = 0x8000000100da9b80;
  uStack_d8 = 0;
  local_d0 = 0;
  uStack_c8 = 0x2000000000000000;
  local_c0 = 1;
  uStack_b0 = 0;
  local_b8 = 0;
  uStack_a0 = 0;
  local_a8 = 0;
  local_98 = 0x3000000000000000;
  local_90 = 0xff;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  local_188 = puVar1;
  local_e0 = puVar1;
  local_70 = local_118;
  FUN_1004910b8(&local_1b8,auStack_3b8);
  FUN_1004910f4(&local_110);
  param_1[0x11] = uStack_130;
  param_1[0x10] = CONCAT71(uStack_137,local_138);
  param_1[0x13] = uStack_120;
  param_1[0x12] = local_128;
  *(undefined4 *)(param_1 + 0x14) = local_118;
  param_1[9] = uStack_170;
  param_1[8] = local_178;
  param_1[0xb] = uStack_160;
  param_1[10] = CONCAT71(uStack_167,local_168);
  param_1[0xd] = uStack_150;
  param_1[0xc] = uStack_158;
  param_1[0xf] = local_140;
  param_1[0xe] = uStack_148;
  param_1[1] = puStack_1b0;
  *param_1 = local_1b8;
  param_1[3] = uStack_1a0;
  param_1[2] = local_1a8;
  param_1[5] = uStack_190;
  param_1[4] = local_198;
  param_1[7] = uStack_180;
  param_1[6] = local_188;
  return;
}



/* Address: 0x1004a0624 | FUN_1004a0624 */

void FUN_1004a0624(ulong *param_1,ulong param_2,undefined8 param_3,undefined *param_4)

{
  CharacterSet CVar1;
  CharacterSet CVar2;
  ulong uVar3;
  ulong uVar4;
  void *pvVar5;
  long extraout_x8;
  ulong uVar6;
  CharacterSet in;
  long lVar7;
  String SVar8;
  undefined8 local_60;
  undefined *puStack_58;
  
  CVar1 = Foundation::CharacterSet::typeMetadataAccessor();
  lVar7 = *(long *)(CVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar7 + 0x40));
  in.unknown = (undefined *)((long)&local_60 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  if (param_4 != (undefined *)0x0) {
    CVar2.unknown = param_4;
    local_60 = param_3;
    puStack_58 = param_4;
    _swift_bridgeObjectRetain();
    Foundation::CharacterSet::get_whitespaces(CVar2);
    FUN_10045b990();
    SVar8 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(in);
    pvVar5 = SVar8.bridgeObject;
    (**(code **)(lVar7 + 8))(in.unknown,CVar1.unknown);
    _swift_bridgeObjectRelease(param_4);
    uVar3 = (ulong)SVar8.str & 0xffffffffffff;
    if (((ulong)pvVar5 & 0x2000000000000000) != 0) {
      uVar3 = (ulong)pvVar5 >> 0x38 & 0xf;
    }
    if (uVar3 == 0) {
      _swift_bridgeObjectRelease(pvVar5);
    }
    else {
      uVar6 = *param_1;
      uVar3 = uVar6;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar4 = uVar6;
      if ((uVar3 & 1) == 0) {
        uVar4 = 0;
        FUN_1004645e4(0,*(long *)(uVar6 + 0x10) + 1,1,uVar6);
      }
      uVar3 = *(ulong *)(uVar4 + 0x10);
      uVar6 = uVar4;
      if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar3) {
        uVar6 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
        FUN_1004645e4(uVar6,uVar3 + 1,1,uVar4);
      }
      *(ulong *)(uVar6 + 0x10) = uVar3 + 1;
      lVar7 = uVar6 + uVar3 * 0x20;
      *(ulong *)(lVar7 + 0x20) = param_2 & 0xff;
      *(String *)(lVar7 + 0x28) = SVar8;
      *(undefined1 *)(lVar7 + 0x38) = 0;
      *param_1 = uVar6;
    }
  }
  return;
}



/* Address: 0x1004a0794 | FUN_1004a0794 */

undefined8 **** FUN_1004a0794(undefined8 *param_1)

{
  undefined8 ***pppuVar1;
  CharacterSet CVar2;
  CharacterSet CVar3;
  char *pcVar4;
  ulong uVar5;
  undefined8 ****ppppuVar6;
  undefined8 ***pppuVar7;
  undefined8 ***pppuVar8;
  long extraout_x8;
  undefined8 ****unaff_x20;
  long unaff_x21;
  undefined *puVar9;
  long lVar10;
  String SVar11;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  undefined *puStack_60;
  undefined8 ***local_58;
  
  CVar2 = Foundation::CharacterSet::typeMetadataAccessor();
  lVar10 = *(long *)(CVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar10 + 0x40));
  local_58 = (undefined8 ***)PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar9 = (undefined *)param_1[1];
  if (puVar9 != (undefined *)0x0) {
    local_68 = *param_1;
    CVar3.unknown = puVar9;
    puStack_60 = puVar9;
    _swift_bridgeObjectRetain();
    Foundation::CharacterSet::get_whitespacesAndNewlines(CVar3);
    FUN_10045b990();
    SVar11 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters
                       ((CharacterSet)(auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)));
    unaff_x20 = SVar11.bridgeObject;
    pcVar4 = SVar11.str;
    (**(code **)(lVar10 + 8))(auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),CVar2.unknown)
    ;
    _swift_bridgeObjectRelease(puVar9);
    uVar5 = (ulong)pcVar4 & 0xffffffffffff;
    if (((ulong)unaff_x20 & 0x2000000000000000) != 0) {
      uVar5 = (ulong)unaff_x20 >> 0x38 & 0xf;
    }
    if (uVar5 == 0) {
      _swift_bridgeObjectRelease(unaff_x20);
    }
    else {
      FUN_1002ddfe0(pcVar4,unaff_x20);
      _swift_bridgeObjectRelease(unaff_x20);
      unaff_x20 = &local_58;
      FUN_100459cf8(pcVar4);
    }
  }
  FUN_1004a0624(&local_58,1,param_1[2],param_1[3]);
  FUN_1004a0624(&local_58,0,param_1[4],param_1[5]);
  FUN_1004a0624(&local_58,2,param_1[6],param_1[7]);
  FUN_1004a0624(&local_58,4,param_1[8],param_1[9]);
  FUN_1004a0624(&local_58,5,param_1[10],param_1[0xb]);
  uVar5 = param_1[0xc];
  pppuVar7 = (undefined8 ***)param_1[0xd];
  pppuVar8 = (undefined8 ***)param_1[0xe];
  FUN_10049eed8();
  pppuVar1 = local_58;
  if (unaff_x21 == 0) {
    unaff_x20 = (undefined8 ****)local_58;
    if (pppuVar8 != (undefined8 ***)0x0) {
      ppppuVar6 = (undefined8 ****)local_58;
      _swift_isUniquelyReferenced_nonNull_native();
      unaff_x20 = (undefined8 ****)pppuVar1;
      if (((ulong)ppppuVar6 & 1) == 0) {
        unaff_x20 = (undefined8 ****)0x0;
        FUN_1004645e4(0,(long)pppuVar1[2] + 1,1,pppuVar1);
      }
      pppuVar1 = unaff_x20[2];
      if ((undefined8 ***)((ulong)unaff_x20[3] >> 1) <= pppuVar1) {
        ppppuVar6 = (undefined8 ****)(ulong)((undefined8 ***)0x1 < unaff_x20[3]);
        FUN_1004645e4(ppppuVar6,(undefined8 ***)((long)pppuVar1 + 1U),1,unaff_x20);
        unaff_x20 = ppppuVar6;
      }
      unaff_x20[2] = (undefined8 ***)((long)pppuVar1 + 1U);
      unaff_x20[(long)pppuVar1 * 4 + 4] = (undefined8 ***)(uVar5 & 0xff);
      unaff_x20[(long)pppuVar1 * 4 + 5] = pppuVar7;
      unaff_x20[(long)pppuVar1 * 4 + 6] = pppuVar8;
      *(undefined1 *)(unaff_x20 + (long)pppuVar1 * 4 + 7) = 0;
    }
  }
  else {
    _swift_bridgeObjectRelease(local_58);
  }
  return unaff_x20;
}



/* Address: 0x1004a09cc | FUN_1004a09cc */

undefined4 FUN_1004a09cc(undefined1 *param_1,undefined1 *param_2)

{
  bool bVar1;
  _StringComparisonResult expecting;
  
  if (param_1 != (undefined1 *)0x7972657571 || param_2 != &DAT_e500000000000000) {
    expecting.value = (__int8)param_1;
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x7972657571,(_StringGuts)0xe500000000000000,expecting);
    if (!bVar1) {
      if (((param_1 == &DAT_65707974) && (param_2 == &DAT_e400000000000000)) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x65707974,(_StringGuts)0xe400000000000000,expecting),
         bVar1)) {
        _swift_bridgeObjectRelease(param_2);
        return 1;
      }
      if (((param_1 == (undefined1 *)0x707061) && (param_2 == (undefined1 *)0xe300000000000000)) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x707061,(_StringGuts)0xe300000000000000,expecting), bVar1
         )) {
        _swift_bridgeObjectRelease(param_2);
        return 2;
      }
      if (((param_1 == (undefined1 *)0x656c746974) && (param_2 == &DAT_e500000000000000)) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x656c746974,(_StringGuts)0xe500000000000000,expecting),
         bVar1)) {
        _swift_bridgeObjectRelease(param_2);
        return 3;
      }
      if (((param_1 == (undefined1 *)0x656369766564) && (param_2 == &DAT_e600000000000000)) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x656369766564,(_StringGuts)0xe600000000000000,expecting),
         bVar1)) {
        _swift_bridgeObjectRelease(param_2);
        return 4;
      }
      if (((param_1 != (undefined1 *)0x6472616f626e6970) ||
          (param_2 != (undefined1 *)0xea00000000006449)) &&
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x6472616f626e6970,(_StringGuts)0xea00000000006449,
                             expecting), !bVar1)) {
        if (((param_1 != (undefined1 *)0x6d6f724665746164) || (param_2 != &DAT_e800000000000000)) &&
           (bVar1 = Swift::_stringCompareWithSmolCheck
                              ((_StringGuts)0x6d6f724665746164,(_StringGuts)0xe800000000000000,
                               expecting), !bVar1)) {
          if (((param_1 != (undefined1 *)0x6f5465746164) || (param_2 != &DAT_e600000000000000)) &&
             (bVar1 = Swift::_stringCompareWithSmolCheck
                                ((_StringGuts)0x6f5465746164,(_StringGuts)0xe600000000000000,
                                 expecting), !bVar1)) {
            if ((param_1 == (undefined1 *)0x74696d696c) && (param_2 == &DAT_e500000000000000)) {
              _swift_bridgeObjectRelease(&DAT_e500000000000000);
              return 8;
            }
            bVar1 = Swift::_stringCompareWithSmolCheck
                              ((_StringGuts)0x74696d696c,(_StringGuts)0xe500000000000000,expecting);
            _swift_bridgeObjectRelease(param_2);
            if (bVar1) {
              return 8;
            }
            return 9;
          }
          _swift_bridgeObjectRelease(param_2);
          return 7;
        }
        _swift_bridgeObjectRelease(param_2);
        return 6;
      }
      _swift_bridgeObjectRelease(param_2);
      return 5;
    }
  }
  _swift_bridgeObjectRelease(param_2);
  return 0;
}



/* Address: 0x1004a0c9c | FUN_1004a0c9c */

/* WARNING: Removing unreachable block (ram,0x0001004a101c) */
/* WARNING: Removing unreachable block (ram,0x0001004a0f88) */
/* WARNING: Removing unreachable block (ram,0x0001004a0e9c) */
/* WARNING: Removing unreachable block (ram,0x0001004a0ef4) */
/* WARNING: Removing unreachable block (ram,0x0001004a0e28) */
/* WARNING: Removing unreachable block (ram,0x0001004a0de0) */
/* WARNING: Removing unreachable block (ram,0x0001004a0e6c) */
/* WARNING: Removing unreachable block (ram,0x0001004a0e88) */
/* WARNING: Removing unreachable block (ram,0x0001004a0eb4) */
/* WARNING: Removing unreachable block (ram,0x0001004a0ec0) */
/* WARNING: Removing unreachable block (ram,0x0001004a0ea0) */
/* WARNING: Removing unreachable block (ram,0x0001004a0eac) */
/* WARNING: Removing unreachable block (ram,0x0001004a0f3c) */
/* WARNING: Removing unreachable block (ram,0x0001004a0fcc) */
/* WARNING: Removing unreachable block (ram,0x0001004a1034) */
/* WARNING: Removing unreachable block (ram,0x0001004a1038) */
/* WARNING: Removing unreachable block (ram,0x0001004a1080) */
/* WARNING: Removing unreachable block (ram,0x0001004a106c) */
/* WARNING: Removing unreachable block (ram,0x0001004a1070) */
/* WARNING: Removing unreachable block (ram,0x0001004a107c) */
/* WARNING: Removing unreachable block (ram,0x0001004a108c) */
/* WARNING: Removing unreachable block (ram,0x0001004a1090) */
/* WARNING: Removing unreachable block (ram,0x0001004a0ec8) */
/* WARNING: Removing unreachable block (ram,0x0001004a0d78) */

void FUN_1004a0c9c(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 ****ppppuVar2;
  undefined8 ****ppppuVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long extraout_x8;
  long unaff_x21;
  long lVar7;
  undefined1 auStack_260 [4];
  undefined4 local_25c;
  undefined1 *local_258;
  undefined *local_250;
  undefined1 auStack_220 [144];
  undefined8 ***local_190;
  undefined *puStack_188;
  undefined8 ***pppuStack_180;
  undefined *puStack_178;
  undefined8 ***local_170;
  undefined *puStack_168;
  undefined8 ***pppuStack_160;
  undefined *puStack_158;
  undefined8 ***local_150;
  undefined *puStack_148;
  undefined8 ***pppuStack_140;
  undefined *puStack_138;
  undefined8 ***local_130;
  undefined *puStack_128;
  undefined8 ***pppuStack_120;
  undefined1 uStack_118;
  undefined7 local_117;
  undefined1 uStack_110;
  undefined8 uStack_10f;
  undefined1 local_101;
  undefined8 ***local_100;
  undefined *puStack_f8;
  undefined8 ***local_f0;
  undefined *puStack_e8;
  undefined8 ***local_e0;
  undefined *puStack_d8;
  undefined8 ***local_d0;
  undefined *puStack_c8;
  undefined8 ***local_c0;
  undefined *puStack_b8;
  undefined8 ***local_b0;
  undefined *puStack_a8;
  undefined8 ***local_a0;
  undefined *puStack_98;
  undefined8 ***local_90;
  undefined1 uStack_88;
  undefined7 local_87;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  undefined1 uStack_78;
  
  puVar1 = &DAT_100fca908;
  FUN_1000037f0(&DAT_100fca908,&DAT_100c4faa8);
  lVar7 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_1004a112c();
  Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    local_190 = (undefined8 ***)((ulong)local_190 & 0xffffffffffffff00);
    ppppuVar2 = &local_190;
    puVar5 = puVar1;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    local_190._0_1_ = 1;
    ppppuVar3 = &local_190;
    puVar6 = puVar1;
    local_100 = ppppuVar2;
    puStack_f8 = puVar5;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    local_190._0_1_ = 2;
    ppppuVar2 = &local_190;
    puVar5 = puVar1;
    local_f0 = ppppuVar3;
    puStack_e8 = puVar6;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    local_190._0_1_ = 3;
    ppppuVar3 = &local_190;
    puVar6 = puVar1;
    local_e0 = ppppuVar2;
    puStack_d8 = puVar5;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    local_190._0_1_ = 4;
    ppppuVar2 = &local_190;
    puVar5 = puVar1;
    local_d0 = ppppuVar3;
    puStack_c8 = puVar6;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    local_190._0_1_ = 5;
    ppppuVar3 = &local_190;
    puVar6 = puVar1;
    local_c0 = ppppuVar2;
    puStack_b8 = puVar5;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    local_190._0_1_ = 6;
    ppppuVar2 = &local_190;
    puVar5 = puVar1;
    local_b0 = ppppuVar3;
    puStack_a8 = puVar6;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    local_190._0_1_ = 7;
    ppppuVar3 = &local_190;
    puVar6 = puVar1;
    local_a0 = ppppuVar2;
    puStack_98 = puVar5;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    uStack_88 = SUB81(puVar6,0);
    local_87 = (undefined7)((ulong)puVar6 >> 8);
    local_101 = 8;
    puVar4 = &local_101;
    puVar5 = puVar1;
    local_250 = puVar6;
    local_90 = ppppuVar3;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    local_25c = SUB84(puVar5,0);
    local_258 = puVar4;
    (**(code **)(lVar7 + 8))(auStack_260 + -extraout_x8,puVar1);
    uStack_80 = SUB81(local_258,0);
    uStack_7f = (undefined7)((ulong)local_258 >> 8);
    uStack_78 = (undefined1)local_25c;
    puStack_128 = puStack_98;
    local_130 = local_a0;
    uStack_118 = uStack_88;
    pppuStack_120 = local_90;
    puStack_168 = puStack_d8;
    local_170 = local_e0;
    puStack_158 = puStack_c8;
    pppuStack_160 = local_d0;
    puStack_148 = puStack_b8;
    local_150 = local_c0;
    puStack_138 = puStack_a8;
    pppuStack_140 = local_b0;
    puStack_188 = puStack_f8;
    local_190 = local_100;
    puStack_178 = puStack_e8;
    pppuStack_180 = local_f0;
    uStack_10f = CONCAT17(uStack_78,uStack_7f);
    local_117 = local_87;
    uStack_110 = uStack_80;
    FUN_1004a116c(&local_190,auStack_220);
    FUN_100004594(param_2);
    FUN_1004a11a0(&local_100);
    param_1[0xd] = (long)puStack_128;
    param_1[0xc] = (long)local_130;
    param_1[0xf] = CONCAT71(local_117,uStack_118);
    param_1[0xe] = (long)pppuStack_120;
    *(undefined8 *)((long)param_1 + 0x81) = uStack_10f;
    *(ulong *)((long)param_1 + 0x79) = CONCAT17(uStack_110,local_117);
    param_1[5] = (long)puStack_168;
    param_1[4] = (long)local_170;
    param_1[7] = (long)puStack_158;
    param_1[6] = (long)pppuStack_160;
    param_1[9] = (long)puStack_148;
    param_1[8] = (long)local_150;
    param_1[0xb] = (long)puStack_138;
    param_1[10] = (long)pppuStack_140;
    param_1[1] = (long)puStack_188;
    *param_1 = (long)local_190;
    param_1[3] = (long)puStack_178;
    param_1[2] = (long)pppuStack_180;
  }
  else {
    FUN_100004594(param_2);
  }
  return;
}



/* Address: 0x1004a112c | FUN_1004a112c */

void FUN_1004a112c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fca910 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4fd28;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4fd28,&DAT_100ed9360);
  DAT_100fca910 = pTVar1;
  return;
}



/* Address: 0x1004a116c | FUN_1004a116c */

undefined8 FUN_1004a116c(undefined8 param_1,undefined8 param_2)

{
  FUN_1004a184c(param_2,param_1,&DAT_100ed9458);
  return param_2;
}



/* Address: 0x1004a11a0 | FUN_1004a11a0 */

undefined8 FUN_1004a11a0(undefined8 param_1)

{
  FUN_1004a17f4(param_1,&DAT_100ed9458);
  return param_1;
}



/* Address: 0x1004a11cc | FUN_1004a11cc */

/* WARNING: Removing unreachable block (ram,0x0001004a135c) */
/* WARNING: Removing unreachable block (ram,0x0001004a12d8) */

undefined1  [16] FUN_1004a11cc(long param_1)

{
  undefined8 uVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long extraout_x8;
  uint uVar7;
  long unaff_x21;
  long lVar8;
  undefined1 auVar9 [16];
  undefined1 auStack_60 [6];
  undefined1 local_5a;
  undefined1 local_59;
  undefined8 local_58;
  
  puVar3 = &DAT_100fca918;
  FUN_1000037f0(&DAT_100fca918,&DAT_100c4fab0);
  lVar8 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  lVar4 = param_1;
  FUN_100004640(param_1,uVar1);
  FUN_1004a1368();
  Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    puVar5 = &DAT_100fca928;
    FUN_1000037f0(&DAT_100fca928,&DAT_100c4fab8);
    local_59 = 0;
    puVar6 = &DAT_100fca930;
    FUN_1004a13a8(&DAT_100fca930,FUN_100491278,
                  PTR__Swift__Swift__Array<undefined>_>Swift__Decodable_100eac538);
    Swift::KeyedDecodingContainer::_decode(&local_58,puVar5,&local_59,puVar3,puVar5,puVar6);
    local_5a = 1;
    bVar2 = Swift::KeyedDecodingContainer::_decode(&local_5a,puVar3);
    uVar7 = (uint)bVar2;
    (**(code **)(lVar8 + 8))(auStack_60 + -extraout_x8,puVar3);
    FUN_100004594(param_1);
  }
  else {
    uVar7 = (uint)lVar4;
    FUN_100004594(param_1);
    local_58 = uVar1;
  }
  auVar9._8_4_ = uVar7 & 1;
  auVar9._0_8_ = local_58;
  auVar9._12_4_ = 0;
  return auVar9;
}



/* Address: 0x1004a1368 | FUN_1004a1368 */

void FUN_1004a1368(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fca920 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4fcd8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4fcd8,&DAT_100ed92d0);
  DAT_100fca920 = pTVar1;
  return;
}



/* Address: 0x1004a13a8 | FUN_1004a13a8 */

void FUN_1004a13a8(long *param_1,code *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_38;
  
  if (*param_1 == 0) {
    puVar1 = &DAT_100fca928;
    FUN_100005c24(&DAT_100fca928,&DAT_100c4fab8);
    puVar2 = puVar1;
    (*param_2)();
    local_38 = puVar2;
    _swift_getWitnessTable(param_3,puVar1,&local_38);
    *param_1 = param_3;
  }
  return;
}



/* Address: 0x1004a1418 | FUN_1004a1418 */

void FUN_1004a1418(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10049ecb8(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1004a1420 | FUN_1004a1420 */

void FUN_1004a1420(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10049e998(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1004a1428 | FUN_1004a1428 */

void FUN_1004a1428(undefined8 param_1)

{
  if (DAT_100fcb068 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetStructDescriptor_100cb1c60);
  return;
}



/* Address: 0x1004a1460 | FUN_1004a1460 */

undefined8 FUN_1004a1460(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1004a1428();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Address: 0x1004a14a4 | FUN_1004a14a4 */

undefined8 FUN_1004a14a4(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1004a1428();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Address: 0x1004a14e0 | FUN_1004a14e0 */

void FUN_1004a14e0(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1004a14ec | FUN_1004a14ec */

ulong FUN_1004a14ec(ulong param_1,undefined8 param_2,long param_3)

{
  Date DVar1;
  ulong uVar2;
  uint uVar3;
  
  DVar1 = Foundation::Date::typeMetadataAccessor();
  if ((int)param_2 == *(int *)(*(long *)(DVar1.unknown + -8) + 0x54)) {
                    /* WARNING: Could not recover jumptable at 0x0001004a153c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(DVar1.unknown + -8) + 0x30))(param_1,param_2,DVar1.unknown);
    return param_1;
  }
  uVar3 = (uint)*(byte *)(param_1 + (long)*(int *)(param_3 + 0x14));
  if (uVar3 < 2) {
    uVar2 = 0;
  }
  else {
    uVar2 = (ulong)((uVar3 + 0x7ffffffe & 0x7fffffff) + 1);
  }
  return uVar2;
}



/* Address: 0x1004a1578 | FUN_1004a1578 */

void FUN_1004a1578(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1004a1584 | FUN_1004a1584 */

void FUN_1004a1584(long param_1,undefined8 param_2,int param_3,long param_4)

{
  Date DVar1;
  
  DVar1 = Foundation::Date::typeMetadataAccessor();
  if (param_3 == *(int *)(*(long *)(DVar1.unknown + -8) + 0x54)) {
                    /* WARNING: Could not recover jumptable at 0x0001004a15dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(DVar1.unknown + -8) + 0x38))(param_1,param_2,param_2,DVar1.unknown);
    return;
  }
  *(char *)(param_1 + *(int *)(param_4 + 0x14)) = (char)param_2 + '\x01';
  return;
}



/* Address: 0x1004a15fc | FUN_1004a15fc */

undefined1  [16] FUN_1004a15fc(long param_1,ulong param_2)

{
  Date DVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  long local_30;
  undefined *puStack_28;
  
  DVar1 = Foundation::Date::typeMetadataAccessor();
  if (param_2 < 0x40) {
    local_30 = *(long *)(DVar1.unknown + -8) + 0x40;
    puStack_28 = &DAT_100c4fb38;
    _swift_initStructMetadata(param_1,0x100,2,&local_30,param_1 + 0x10);
    DVar1.unknown = (undefined *)0x0;
    uVar2 = 0;
  }
  else {
    uVar2 = 0x3f;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = DVar1.unknown;
  return auVar3;
}



/* Address: 0x1004a166c | FUN_1004a166c */

undefined1  [16] FUN_1004a166c(void)

{
  return ZEXT816(0x100ed92d0);
}



/* Address: 0x1004a167c | FUN_1004a167c */

undefined1  [16] FUN_1004a167c(void)

{
  return ZEXT816(0x100ed9360);
}



/* Address: 0x1004a168c | FUN_1004a168c */

undefined8 * FUN_1004a168c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Address: 0x1004a16c0 | FUN_1004a16c0 */

undefined8 * FUN_1004a16c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  return param_1;
}



/* Address: 0x1004a170c | FUN_1004a170c */

void FUN_1004a170c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = uVar1;
  return;
}



/* Address: 0x1004a1720 | FUN_1004a1720 */

undefined8 * FUN_1004a1720(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  return param_1;
}



/* Address: 0x1004a175c | FUN_1004a175c */

int FUN_1004a175c(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 9) != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x1004a17a4 | FUN_1004a17a4 */

void FUN_1004a17a4(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    if (param_3 < 0) {
      *(undefined1 *)((long)param_1 + 9) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)((long)param_1 + 9) = 0;
    }
    if (param_2 != 0) {
      *param_1 = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x1004a17e4 | FUN_1004a17e4 */

undefined1  [16] FUN_1004a17e4(void)

{
  return ZEXT816(0x100ed93d8);
}



/* Address: 0x1004a17f4 | FUN_1004a17f4 */

void FUN_1004a17f4(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x38));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x48));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x58));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x68));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x78));
  return;
}



/* Address: 0x1004a184c | FUN_1004a184c */

undefined8 * FUN_1004a184c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  uVar3 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar3;
  uVar4 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar4;
  uVar5 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar5;
  uVar6 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar6;
  uVar7 = param_2[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar7;
  *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_2 + 0x11);
  param_1[0x10] = param_2[0x10];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar5);
  _swift_bridgeObjectRetain(uVar6);
  _swift_bridgeObjectRetain(uVar7);
  return param_1;
}



/* Address: 0x1004a1910 | FUN_1004a1910 */

undefined8 * FUN_1004a1910(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[4] = param_2[4];
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[6] = param_2[6];
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[8] = param_2[8];
  uVar1 = param_1[9];
  param_1[9] = param_2[9];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[10] = param_2[10];
  uVar1 = param_1[0xb];
  param_1[0xb] = param_2[0xb];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[0xc] = param_2[0xc];
  uVar1 = param_1[0xd];
  param_1[0xd] = param_2[0xd];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[0xe] = param_2[0xe];
  uVar1 = param_1[0xf];
  param_1[0xf] = param_2[0xf];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_2[0x10];
  *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_2 + 0x11);
  param_1[0x10] = uVar1;
  return param_1;
}



/* Address: 0x1004a1a4c | FUN_1004a1a4c */

void FUN_1004a1a4c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  uVar4 = param_2[5];
  uVar3 = param_2[4];
  uVar5 = param_2[6];
  uVar7 = param_2[9];
  uVar6 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = uVar5;
  param_1[9] = uVar7;
  param_1[8] = uVar6;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  param_1[5] = uVar4;
  param_1[4] = uVar3;
  uVar2 = param_2[0xb];
  uVar1 = param_2[10];
  uVar4 = param_2[0xd];
  uVar3 = param_2[0xc];
  uVar6 = param_2[0xf];
  uVar5 = param_2[0xe];
  uVar7 = *(undefined8 *)((long)param_2 + 0x79);
  *(undefined8 *)((long)param_1 + 0x81) = *(undefined8 *)((long)param_2 + 0x81);
  *(undefined8 *)((long)param_1 + 0x79) = uVar7;
  param_1[0xd] = uVar4;
  param_1[0xc] = uVar3;
  param_1[0xf] = uVar6;
  param_1[0xe] = uVar5;
  param_1[0xb] = uVar2;
  param_1[10] = uVar1;
  return;
}



/* Address: 0x1004a1a80 | FUN_1004a1a80 */

undefined8 * FUN_1004a1a80(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[5];
  uVar2 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[7];
  uVar2 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[9];
  uVar2 = param_1[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[0xb];
  uVar2 = param_1[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[0xd];
  uVar2 = param_1[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[0xf];
  uVar2 = param_1[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  param_1[0x10] = param_2[0x10];
  *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_2 + 0x11);
  return param_1;
}



/* Address: 0x1004a1b34 | FUN_1004a1b34 */

int FUN_1004a1b34(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && (*(char *)((long)param_1 + 0x89) != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}


