/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10031bc4c | FUN_10031bc4c */

undefined8 FUN_10031bc4c(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fbf9e0;
  FUN_1000037f0(&DAT_100fbf9e0,&DAT_100c422f0);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x10031bc94 | FUN_10031bc94 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10031bc94(void)

{
  ID IVar1;
  ID IVar2;
  ID unaff_x20;
  
  IVar1 = objc_stub::list(unaff_x20);
  if ((IVar1 != 0) && (IVar2 = IVar1, FUN_1003250f0(), (IVar2 & 1) == 0)) {
    IVar1 = 0;
  }
  return IVar1;
}



/* Address: 0x10031bcdc | FUN_10031bcdc */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_10031bcdc(void)

{
  undefined8 *puVar1;
  long lVar2;
  _CocoaArrayWrapper _Var3;
  undefined8 uVar4;
  long lVar5;
  Encoding using;
  code *pcVar6;
  int iVar7;
  _ArrayBuffer _Var8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  ID self;
  UTType UVar12;
  UTType UVar13;
  Encoding EVar14;
  char *pcVar15;
  undefined *extraout_x1;
  _ArrayBuffer _Var16;
  ContiguousArray CVar17;
  undefined *puVar18;
  long extraout_x8;
  long extraout_x8_00;
  ContiguousArray CVar19;
  ID unaff_x20;
  undefined8 uVar20;
  ulong uVar21;
  undefined8 *puVar22;
  undefined *puVar23;
  long lVar24;
  ulong uVar25;
  ulong uVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  undefined *local_e0;
  ulong local_d8;
  undefined *local_d0;
  long local_c8;
  undefined *puStack_c0;
  Encoding local_b8;
  long local_b0;
  undefined *puStack_a8;
  undefined8 local_a0;
  undefined *local_98;
  undefined *local_90;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined *local_68;
  
  puStack_a8 = (undefined *)Encoding::_typeMetadataAccessor();
  local_b0 = *(long *)(puStack_a8 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_b0 + 0x40));
  puVar23 = (undefined *)((long)&local_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  local_b8.unknown = puVar23;
  puStack_c0 = (undefined *)UniformTypeIdentifiers::UTType::typeMetadataAccessor();
  local_c8 = *(long *)(puStack_c0 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_c8 + 0x40));
  local_d0 = puVar23 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  _Var8.unknown = (undefined *)objc_stub::data(unaff_x20);
  CVar19.unknown = extraout_x1;
  FUN_10031b218();
  puVar23 = _Var8.unknown & 0xffffffffffffff8;
  if ((ulong)_Var8.unknown >> 0x3e == 0) {
    uVar21 = *(ulong *)(puVar23 + 0x10);
  }
  else {
    _Var3.unknown = puVar23;
    if ((undefined *)0x7fffffffffffffff < _Var8.unknown) {
      _Var3.unknown = _Var8.unknown;
    }
    uVar21 = Swift::_CocoaArrayWrapper::get_endIndex(_Var3);
  }
  puVar18 = PTR___swiftEmptyArrayStorage_100eae0d8;
  local_e0 = PTR___swiftEmptyArrayStorage_100eae0d8;
  uVar26 = 0;
  while (uVar21 != uVar26) {
    if (((ulong)_Var8.unknown & 0xc000000000000001) == 0) {
      if (*(ulong *)(puVar23 + 0x10) <= uVar26) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10031c2bc);
        (*pcVar6)();
      }
      uVar9 = *(ulong *)(_Var8.unknown + uVar26 * 8 + 0x20);
      _Var16.unknown = CVar19.unknown;
    }
    else {
      uVar9 = uVar26;
      _Var16.unknown = _Var8.unknown;
      Swift::_ArrayBuffer::__getElementSlowPath(uVar26,_Var8);
    }
    if (SCARRY8(uVar26,1)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10031c2b8);
      (*pcVar6)();
    }
    uVar25 = uVar26 + 1;
    FUN_10037c9a8();
    CVar19.unknown = _Var16.unknown;
    uVar26 = uVar26 + 1;
    if (_Var16.unknown != (undefined *)0x0) {
      puVar10 = local_e0;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((ulong)puVar10 & 1) == 0) {
        CVar19.unknown = (undefined *)(*(long *)(local_e0 + 0x10) + 1);
        puVar10 = (undefined *)0x0;
        FUN_10037f834(0,CVar19.unknown,1);
        local_e0 = puVar10;
      }
      uVar26 = *(ulong *)(local_e0 + 0x10);
      puVar10 = (undefined *)(uVar26 + 1);
      if (*(ulong *)(local_e0 + 0x18) >> 1 <= uVar26) {
        puVar11 = (undefined *)(ulong)(1 < *(ulong *)(local_e0 + 0x18));
        CVar19.unknown = puVar10;
        FUN_10037f834(puVar11,puVar10,1,local_e0);
        local_e0 = puVar11;
      }
      *(undefined **)(local_e0 + 0x10) = puVar10;
      *(ulong *)(local_e0 + uVar26 * 0x10 + 0x20) = uVar9;
      *(undefined **)(local_e0 + uVar26 * 0x10 + 0x28) = _Var16.unknown;
      uVar26 = uVar25;
    }
  }
  _swift_bridgeObjectRelease(_Var8.unknown);
  puVar23 = local_e0;
  uVar21 = *(ulong *)(local_e0 + 0x10);
  if (uVar21 == 0) {
    _swift_bridgeObjectRelease(local_e0);
    local_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    local_68 = puVar18;
    Swift::ContiguousArray::_reserveCapacity(uVar21,CVar19);
    uVar26 = 0;
    puVar22 = (undefined8 *)(puVar23 + 0x28);
    local_d8 = uVar21;
    do {
      if (*(ulong *)(puVar23 + 0x10) <= uVar26) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10031c2c0);
        (*pcVar6)();
      }
      uVar20 = puVar22[-1];
      uVar4 = *puVar22;
      self = 0;
      FUN_100381740();
      _objc_allocWithZone();
      _swift_bridgeObjectRetain(uVar4);
      UVar12.unknown = (undefined *)objc_stub::init(self);
      EVar14.unknown = local_d0;
      UVar13 = UniformTypeIdentifiers::UTType::get_utf8PlainText(UVar12);
      SVar27 = UniformTypeIdentifiers::UTType::get_identifier(UVar13);
      CVar19.unknown = SVar27.bridgeObject;
      (**(code **)(local_c8 + 8))(EVar14.unknown,puStack_c0);
      using.unknown = local_b8.unknown;
      local_80 = uVar20;
      uStack_78 = uVar4;
      Encoding::_get_utf8(EVar14);
      FUN_10030cce0();
      puVar18 = (undefined *)0x0;
      EVar14.unknown = using.unknown;
      (extension_Foundation)::Swift::StringProtocol::_data(using,false);
      local_98 = EVar14.unknown;
      local_90 = puVar18;
      (**(code **)(local_b0 + 8))(using.unknown,puStack_a8);
      lVar5 = _TtC9PasteCore14PasteboardItem::types;
      _swift_beginAccess(UVar12.unknown + _TtC9PasteCore14PasteboardItem::types,&local_80,0x21,0);
      uVar25 = *(ulong *)(UVar12.unknown + lVar5);
      _swift_bridgeObjectRetain(CVar19.unknown);
      uVar21 = uVar25;
      _swift_isUniquelyReferenced_nonNull_native();
      *(ulong *)(UVar12.unknown + lVar5) = uVar25;
      uVar9 = uVar25;
      local_a0 = uVar4;
      if ((uVar21 & 1) == 0) {
        uVar9 = 0;
        FUN_10037f834(0,*(long *)(uVar25 + 0x10) + 1,1,uVar25);
        *(ulong *)(UVar12.unknown + lVar5) = uVar9;
      }
      uVar21 = *(ulong *)(uVar9 + 0x10);
      uVar25 = uVar9;
      if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar21) {
        uVar25 = (ulong)(1 < *(ulong *)(uVar9 + 0x18));
        FUN_10037f834(uVar25,uVar21 + 1,1,uVar9);
      }
      *(ulong *)(uVar25 + 0x10) = uVar21 + 1;
      *(String *)(uVar25 + uVar21 * 0x10 + 0x20) = SVar27;
      *(ulong *)(UVar12.unknown + lVar5) = uVar25;
      _swift_endAccess(&local_80);
      lVar5 = _TtC9PasteCore14PasteboardItem::dataByType;
      _swift_beginAccess(UVar12.unknown + _TtC9PasteCore14PasteboardItem::dataByType,&local_80,0x21,
                         0);
      if ((ulong)local_90 >> 0x3c < 0xf) {
        FUN_1001037b4(local_98);
        uVar21 = *(ulong *)(UVar12.unknown + lVar5);
        _swift_isUniquelyReferenced_nonNull_native();
        lVar24 = *(long *)(UVar12.unknown + lVar5);
        *(undefined8 *)(UVar12.unknown + lVar5) = 0x8000000000000000;
        SVar28 = SVar27;
        local_88 = lVar24;
        FUN_100071370();
        pcVar15 = SVar28.str;
        uVar9 = (ulong)~(uint)SVar28.bridgeObject & 1;
        lVar2 = *(long *)(lVar24 + 0x10) + uVar9;
        if (SCARRY8(*(long *)(lVar24 + 0x10),uVar9)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10031c2c4);
          (*pcVar6)();
        }
        if (*(long *)(lVar24 + 0x18) < lVar2) {
          FUN_10031d89c(lVar2,uVar21);
          SVar29 = SVar27;
          FUN_100071370();
          pcVar15 = SVar29.str;
          if (((uint)SVar28.bridgeObject & 1) != ((uint)SVar29.bridgeObject & 1)) {
            Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10031c2ec);
            (*pcVar6)();
          }
joined_r0x00010031c26c:
          if (((ulong)SVar28.bridgeObject & 1) != 0) goto LAB_10031bed4;
LAB_10031c1b4:
          lVar24 = local_88;
          lVar2 = local_88 + ((ulong)pcVar15 >> 6) * 8;
          *(ulong *)(lVar2 + 0x40) = *(ulong *)(lVar2 + 0x40) | 1L << ((ulong)pcVar15 & 0x3f);
          *(String *)(*(long *)(local_88 + 0x30) + (long)pcVar15 * 0x10) = SVar27;
          puVar1 = (undefined8 *)(*(long *)(local_88 + 0x38) + (long)pcVar15 * 0x10);
          *puVar1 = local_98;
          puVar1[1] = local_90;
          if (SCARRY8(*(long *)(local_88 + 0x10),1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10031c2c8);
            (*pcVar6)();
          }
          *(long *)(local_88 + 0x10) = *(long *)(local_88 + 0x10) + 1;
          _swift_bridgeObjectRetain(CVar19.unknown);
        }
        else {
          if ((uVar21 & 1) == 0) {
            FUN_10031ca10();
            goto joined_r0x00010031c26c;
          }
          if (((ulong)SVar28.bridgeObject & 1) == 0) goto LAB_10031c1b4;
LAB_10031bed4:
          lVar24 = local_88;
          puVar1 = (undefined8 *)(*(long *)(local_88 + 0x38) + (long)pcVar15 * 0x10);
          uVar20 = *puVar1;
          uVar4 = puVar1[1];
          *puVar1 = local_98;
          puVar1[1] = local_90;
          FUN_10003bf2c(uVar20,uVar4);
        }
        *(long *)(UVar12.unknown + lVar5) = lVar24;
        puVar23 = local_e0;
      }
      else {
        uVar20 = *(undefined8 *)(UVar12.unknown + lVar5);
        _swift_bridgeObjectRetain(uVar20);
        FUN_100071370();
        _swift_bridgeObjectRelease(uVar20);
        if (((ulong)SVar27.bridgeObject & 1) != 0) {
          iVar7 = (int)*(undefined8 *)(UVar12.unknown + lVar5);
          _swift_isUniquelyReferenced_nonNull_native();
          local_88 = *(long *)(UVar12.unknown + lVar5);
          *(undefined8 *)(UVar12.unknown + lVar5) = 0x8000000000000000;
          if (iVar7 == 0) {
            FUN_10031ca10();
          }
          lVar2 = local_88;
          lVar24 = (long)SVar27.str * 0x10;
          _swift_bridgeObjectRelease(*(undefined8 *)(*(long *)(local_88 + 0x30) + lVar24 + 8));
          puVar1 = (undefined8 *)(*(long *)(lVar2 + 0x38) + lVar24);
          FUN_10003bf2c(*puVar1,puVar1[1]);
          FUN_10031e9f4(SVar27.str,lVar2);
          *(long *)(UVar12.unknown + lVar5) = lVar2;
        }
      }
      uVar26 = uVar26 + 1;
      _swift_endAccess(&local_80);
      _swift_bridgeObjectRelease(local_a0);
      CVar17.unknown = local_90;
      FUN_10003bf18(local_98);
      _swift_bridgeObjectRelease();
      Swift::ContiguousArray::__makeUniqueAndReserveCapacityIfNotUnique(CVar19);
                    /* WARNING: Load size is inaccurate */
      CVar19.unknown = local_68[0x10];
      Swift::ContiguousArray::__reserveCapacityAssumingUniqueBuffer((__int64)CVar19.unknown,CVar17);
      Swift::ContiguousArray::__appendElementAssumeUniqueAndCapacity(CVar19.unknown,UVar12.unknown);
      Swift::ContiguousArray::__endMutation(CVar19);
      puVar22 = puVar22 + 2;
    } while (local_d8 != uVar26);
    _swift_bridgeObjectRelease(puVar23);
  }
  return local_68;
}



/* Address: 0x10031c2ec | FUN_10031c2ec */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

uint FUN_10031c2ec(void)

{
  ID IVar1;
  ulong uVar2;
  uint uVar3;
  ID unaff_x20;
  ushort uVar4;
  
  IVar1 = objc_stub::rawType(unaff_x20);
  uVar3 = (uint)IVar1;
  FUN_100323594();
  uVar4 = 0;
  if ((uVar3 & 0xff) != 6) {
    uVar4 = (ushort)uVar3;
  }
  uVar4 = NEON_umaxv(CONCAT26(-(ushort)((ushort)(byte)((uint)DAT_100fbfa10 >> 0x18) ==
                                       (uVar4 & 0xff)),
                              CONCAT24(-(ushort)((ushort)(byte)((uint)DAT_100fbfa10 >> 0x10) ==
                                                (uVar4 & 0xff)),
                                       CONCAT22(-(ushort)((ushort)(byte)((uint)DAT_100fbfa10 >> 8)
                                                         == (uVar4 & 0xff)),
                                                -(ushort)((ushort)(byte)DAT_100fbfa10 ==
                                                         (uVar4 & 0xff))))),2);
  if ((uVar4 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = objc_stub::list(unaff_x20);
    if (uVar2 == 0) {
      uVar3 = 1;
    }
    else {
      FUN_1003250f0();
      uVar3 = (uint)uVar2;
      if ((uVar2 & 1) == 0) {
        uVar3 = 1;
      }
      else {
        FUN_100328f38();
      }
    }
  }
  return uVar3 & 1;
}



/* Address: 0x10031c38c | FUN_10031c38c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

bool FUN_10031c38c(void)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  String *pSVar4;
  ulong uVar5;
  undefined8 uVar6;
  void *pvVar7;
  ID unaff_x20;
  undefined8 local_b8;
  undefined8 uStack_b0;
  String local_58;
  ulong local_40;
  undefined8 uStack_38;
  
  puVar2 = &DAT_100c41060;
  _swift_getKeyPath(&DAT_100c41060);
  puVar3 = &DAT_100fbdc20;
  FUN_1000037f0(&DAT_100fbdc20,&DAT_100c3f170);
  _swift_initStackObject();
  FUN_1000da6e0(puVar2,puVar3);
  FUN_1000da768(&local_58);
  _swift_release(puVar2);
  pSVar4 = &local_58;
  FUN_100004640(pSVar4,local_40);
  uVar5 = local_40;
  FUN_1001a15c4(local_40,uStack_38,pSVar4);
  FUN_100004594(&local_58);
  if ((uVar5 & 1) == 0) {
    objc_stub::identifier(unaff_x20);
    local_58 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    pvVar7 = local_58.bridgeObject;
    uVar6 = 0;
    local_b8 = 0x696472616f626e6f;
    uStack_b0 = 0xea0000000000676e;
    FUN_10030cce0(0);
    bVar1 = (extension_Foundation)::Swift::StringProtocol::_contains
                      (&local_b8,PTR___type_metadata_for_Swift_String_100eac208,
                       PTR___type_metadata_for_Swift_String_100eac208,uVar6,uVar6);
    _swift_bridgeObjectRelease(pvVar7);
    bVar1 = !bVar1;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Address: 0x10031c4c4 | FUN_10031c4c4 */

bool FUN_10031c4c4(void)

{
  bool bVar1;
  
  bVar1 = (extension_Swift)::Swift::Sequence::_allSatisfy();
  return bVar1;
}



/* Address: 0x10031c504 | FUN_10031c504 */

uint FUN_10031c504(uint param_1)

{
  FUN_10031c38c();
  return param_1 & 1;
}



/* Address: 0x10031c530 | FUN_10031c530 */

void FUN_10031c530(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  code *pcVar2;
  Date DVar3;
  long lVar4;
  
  lVar4 = param_5 + (param_1 >> 6) * 8;
  *(ulong *)(lVar4 + 0x40) = *(ulong *)(lVar4 + 0x40) | 1L << (param_1 & 0x3f);
  puVar1 = (undefined8 *)(*(long *)(param_5 + 0x30) + param_1 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  lVar4 = *(long *)(param_5 + 0x38);
  DVar3 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar3.unknown + -8) + 0x20))
            (lVar4 + *(long *)(*(long *)(DVar3.unknown + -8) + 0x48) * param_1,param_4,DVar3.unknown
            );
  if (!SCARRY8(*(long *)(param_5 + 0x10),1)) {
    *(long *)(param_5 + 0x10) = *(long *)(param_5 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10031c5c0);
  (*pcVar2)();
}



/* Address: 0x10031c5c0 | FUN_10031c5c0 */

void FUN_10031c5c0(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  
  lVar1 = param_5 + (param_1 >> 6) * 8;
  *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (param_1 & 0x3f);
  *(undefined8 *)(*(long *)(param_5 + 0x30) + param_1 * 8) = param_2;
  puVar2 = (undefined8 *)(*(long *)(param_5 + 0x38) + param_1 * 0x10);
  *puVar2 = param_3;
  puVar2[1] = param_4;
  if (!SCARRY8(*(long *)(param_5 + 0x10),1)) {
    *(long *)(param_5 + 0x10) = *(long *)(param_5 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10031c608);
  (*pcVar3)();
}



/* Address: 0x10031c608 | FUN_10031c608 */

void FUN_10031c608(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  
  lVar1 = param_4 + (param_1 >> 6) * 8;
  *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (param_1 & 0x3f);
  *(undefined8 *)(*(long *)(param_4 + 0x30) + param_1 * 8) = param_2;
  *(undefined8 *)(*(long *)(param_4 + 0x38) + param_1 * 8) = param_3;
  if (!SCARRY8(*(long *)(param_4 + 0x10),1)) {
    *(long *)(param_4 + 0x10) = *(long *)(param_4 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10031c64c);
  (*pcVar2)();
}



/* Address: 0x10031c64c | FUN_10031c64c */

void FUN_10031c64c(void)

{
  __RawDictionaryStorage *p_Var1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  long lVar11;
  long lVar12;
  undefined1 auStack_80 [32];
  
  this = (_DictionaryStorage *)&DAT_100fbfa30;
  FUN_1000037f0(&DAT_100fbfa30,&DAT_100c44530);
  original = (__RawDictionaryStorage *)*unaff_x20;
  p_Var6 = original;
  Swift::_DictionaryStorage::_copy(this,original);
  if (*(long *)(original + 0x10) == 0) {
    _swift_release(original);
LAB_10031c7c8:
    *unaff_x20 = (long)p_Var6;
    return;
  }
  p_Var1 = original + 0x40;
  uVar7 = (1L << ((ulong)(byte)p_Var6[0x20] & 0x3f)) + 0x3fU >> 6;
  if (p_Var6 != original || p_Var1 + uVar7 * 8 <= p_Var6 + 0x40) {
    _memmove(p_Var6 + 0x40,p_Var1,uVar7 << 3);
  }
  lVar11 = 0;
  *(undefined8 *)(p_Var6 + 0x10) = *(undefined8 *)(original + 0x10);
  uVar8 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar7 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar7 = ~(-1L << (uVar8 & 0x3f));
  }
  uVar7 = uVar7 & *(ulong *)(original + 0x40);
  if (uVar7 == 0) goto LAB_10031c734;
  do {
    uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
    uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
    uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
    uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
    uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
    uVar7 = uVar7 - 1 & uVar7;
    while( true ) {
      uVar9 = LZCOUNT(uVar9) | lVar11 << 6;
      lVar12 = uVar9 * 0x10;
      puVar2 = (undefined8 *)(*(long *)(original + 0x30) + lVar12);
      uVar3 = *puVar2;
      uVar4 = puVar2[1];
      lVar10 = uVar9 * 0x20;
      FUN_10000cbfc(*(long *)(original + 0x38) + lVar10,auStack_80);
      puVar2 = (undefined8 *)(*(long *)(p_Var6 + 0x30) + lVar12);
      *puVar2 = uVar3;
      puVar2[1] = uVar4;
      FUN_100011080(auStack_80,*(long *)(p_Var6 + 0x38) + lVar10);
      _swift_bridgeObjectRetain(uVar4);
      if (uVar7 != 0) break;
LAB_10031c734:
      do {
        lVar10 = lVar11 + 1;
        if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10031c7f0);
          (*pcVar5)();
        }
        if ((long)(uVar8 + 0x3f >> 6) <= lVar10) {
          _swift_release(original);
          goto LAB_10031c7c8;
        }
        uVar7 = *(ulong *)(p_Var1 + lVar10 * 8);
        lVar11 = lVar11 + 1;
      } while (uVar7 == 0);
      uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar7 = uVar7 - 1 & uVar7;
      lVar11 = lVar10;
    }
  } while( true );
}



/* Address: 0x10031c7f0 | FUN_10031c7f0 */

void FUN_10031c7f0(void)

{
  __RawDictionaryStorage *p_Var1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  Date DVar6;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var7;
  long lVar8;
  long extraout_x8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  __RawDictionaryStorage *original;
  long lVar12;
  long lVar13;
  undefined1 auStack_a0 [8];
  ulong local_68;
  
  DVar6 = Foundation::Date::typeMetadataAccessor();
  lVar8 = *(long *)(DVar6.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar8 + 0x40));
  this = (_DictionaryStorage *)&DAT_100fbfa28;
  FUN_1000037f0(&DAT_100fbfa28,&DAT_100c410a8);
  original = (__RawDictionaryStorage *)*unaff_x20;
  p_Var7 = original;
  Swift::_DictionaryStorage::_copy(this,original);
  if (*(long *)(original + 0x10) == 0) {
    _swift_release(original);
LAB_10031c9e8:
    *unaff_x20 = (long)p_Var7;
    return;
  }
  p_Var1 = original + 0x40;
  uVar9 = (1L << ((ulong)(byte)p_Var7[0x20] & 0x3f)) + 0x3fU >> 6;
  if ((p_Var7 != original) || (p_Var1 + uVar9 * 8 <= p_Var7 + 0x40)) {
    _memmove(p_Var7 + 0x40,p_Var1,uVar9 << 3);
  }
  lVar13 = 0;
  *(undefined8 *)(p_Var7 + 0x10) = *(undefined8 *)(original + 0x10);
  uVar9 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  local_68 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    local_68 = ~(-1L << (uVar9 & 0x3f));
  }
  local_68 = local_68 & *(ulong *)(original + 0x40);
  if (local_68 == 0) goto LAB_10031c920;
  do {
    uVar10 = (local_68 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_68 & 0x5555555555555555) << 1;
    uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
    uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
    uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
    uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
    local_68 = local_68 - 1 & local_68;
    while( true ) {
      uVar10 = LZCOUNT(uVar10) | lVar13 << 6;
      lVar11 = uVar10 * 0x10;
      puVar2 = (undefined8 *)(*(long *)(original + 0x30) + lVar11);
      uVar3 = *puVar2;
      uVar4 = puVar2[1];
      lVar12 = *(long *)(lVar8 + 0x48) * uVar10;
      (**(code **)(lVar8 + 0x10))
                (auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                 *(long *)(original + 0x38) + lVar12,DVar6.unknown);
      puVar2 = (undefined8 *)(*(long *)(p_Var7 + 0x30) + lVar11);
      *puVar2 = uVar3;
      puVar2[1] = uVar4;
      (**(code **)(lVar8 + 0x20))
                (*(long *)(p_Var7 + 0x38) + lVar12,
                 auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),DVar6.unknown);
      _swift_bridgeObjectRetain(uVar4);
      if (local_68 != 0) break;
LAB_10031c920:
      do {
        lVar11 = lVar13 + 1;
        if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10031ca10);
          (*pcVar5)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar11) {
          _swift_release(original);
          goto LAB_10031c9e8;
        }
        local_68 = *(ulong *)(p_Var1 + lVar11 * 8);
        lVar13 = lVar13 + 1;
      } while (local_68 == 0);
      uVar10 = (local_68 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_68 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      local_68 = local_68 - 1 & local_68;
      lVar13 = lVar11;
    }
  } while( true );
}



/* Address: 0x10031ca10 | FUN_10031ca10 */

void FUN_10031ca10(void)

{
  __RawDictionaryStorage *p_Var1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  this = (_DictionaryStorage *)&DAT_100fbfa38;
  FUN_1000037f0(&DAT_100fbfa38,&DAT_100c410b0);
  original = (__RawDictionaryStorage *)*unaff_x20;
  p_Var7 = original;
  Swift::_DictionaryStorage::_copy(this,original);
  if (*(long *)(original + 0x10) != 0) {
    p_Var1 = original + 0x40;
    uVar8 = (1L << ((ulong)(byte)p_Var7[0x20] & 0x3f)) + 0x3fU >> 6;
    if (p_Var7 != original || p_Var1 + uVar8 * 8 <= p_Var7 + 0x40) {
      _memmove(p_Var7 + 0x40,p_Var1,uVar8 << 3);
    }
    lVar13 = 0;
    *(undefined8 *)(p_Var7 + 0x10) = *(undefined8 *)(original + 0x10);
    uVar9 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
    uVar8 = 0xffffffffffffffff;
    if (((byte)original[0x20] & 0x3f) < 6) {
      uVar8 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar8 = uVar8 & *(ulong *)(original + 0x40);
    if (uVar8 == 0) goto LAB_10031caf0;
    do {
      uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      while( true ) {
        lVar11 = (LZCOUNT(uVar10) | lVar13 << 6) * 0x10;
        uVar4 = ((undefined8 *)(*(long *)(original + 0x30) + lVar11))[1];
        puVar2 = (undefined8 *)(*(long *)(original + 0x38) + lVar11);
        lVar12 = *(long *)(p_Var7 + 0x30);
        uVar15 = puVar2[1];
        uVar14 = *puVar2;
        uVar3 = *puVar2;
        uVar5 = puVar2[1];
        *(undefined8 *)(lVar12 + lVar11) = *(undefined8 *)(*(long *)(original + 0x30) + lVar11);
        ((undefined8 *)(lVar12 + lVar11))[1] = uVar4;
        lVar12 = *(long *)(p_Var7 + 0x38);
        ((undefined8 *)(lVar12 + lVar11))[1] = uVar15;
        *(undefined8 *)(lVar12 + lVar11) = uVar14;
        _swift_bridgeObjectRetain();
        FUN_1001037b4(uVar3,uVar5);
        if (uVar8 != 0) break;
LAB_10031caf0:
        do {
          lVar11 = lVar13 + 1;
          if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10031cb94);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar11) goto LAB_10031cb68;
          uVar8 = *(ulong *)(p_Var1 + lVar11 * 8);
          lVar13 = lVar13 + 1;
        } while (uVar8 == 0);
        uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar8 = uVar8 - 1 & uVar8;
        lVar13 = lVar11;
      }
    } while( true );
  }
LAB_10031cb68:
  _swift_release(original);
  *unaff_x20 = (long)p_Var7;
  return;
}



/* Address: 0x10031cb94 | FUN_10031cb94 */

void FUN_10031cb94(void)

{
  __RawDictionaryStorage *p_Var1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  undefined8 uVar11;
  long lVar12;
  
  this = (_DictionaryStorage *)&DAT_100fbfa40;
  FUN_1000037f0(&DAT_100fbfa40,&DAT_100c410b8);
  original = (__RawDictionaryStorage *)*unaff_x20;
  p_Var7 = original;
  Swift::_DictionaryStorage::_copy(this,original);
  if (*(long *)(original + 0x10) != 0) {
    p_Var1 = original + 0x40;
    uVar8 = (1L << ((ulong)(byte)p_Var7[0x20] & 0x3f)) + 0x3fU >> 6;
    if (p_Var7 != original || p_Var1 + uVar8 * 8 <= p_Var7 + 0x40) {
      _memmove(p_Var7 + 0x40,p_Var1,uVar8 << 3);
    }
    lVar12 = 0;
    *(undefined8 *)(p_Var7 + 0x10) = *(undefined8 *)(original + 0x10);
    uVar9 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
    uVar8 = 0xffffffffffffffff;
    if (((byte)original[0x20] & 0x3f) < 6) {
      uVar8 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar8 = uVar8 & *(ulong *)(original + 0x40);
    if (uVar8 == 0) goto LAB_10031cc70;
    do {
      uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      while( true ) {
        uVar10 = LZCOUNT(uVar10) | lVar12 << 6;
        puVar3 = (undefined8 *)(*(long *)(original + 0x30) + uVar10 * 0x10);
        uVar5 = puVar3[1];
        uVar11 = *(undefined8 *)(*(long *)(original + 0x38) + uVar10 * 8);
        puVar4 = (undefined8 *)(*(long *)(p_Var7 + 0x30) + uVar10 * 0x10);
        *puVar4 = *puVar3;
        puVar4[1] = uVar5;
        *(undefined8 *)(*(long *)(p_Var7 + 0x38) + uVar10 * 8) = uVar11;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar11);
        if (uVar8 != 0) break;
LAB_10031cc70:
        do {
          lVar2 = lVar12 + 1;
          if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10031cd04);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar2) goto LAB_10031ccdc;
          uVar8 = *(ulong *)(p_Var1 + lVar2 * 8);
          lVar12 = lVar12 + 1;
        } while (uVar8 == 0);
        uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar8 = uVar8 - 1 & uVar8;
        lVar12 = lVar2;
      }
    } while( true );
  }
LAB_10031ccdc:
  _swift_release(original);
  *unaff_x20 = (long)p_Var7;
  return;
}



/* Address: 0x10031cd04 | FUN_10031cd04 */

void FUN_10031cd04(void)

{
  __RawDictionaryStorage *p_Var1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  long lVar12;
  
  this = (_DictionaryStorage *)&DAT_100fbfa48;
  FUN_1000037f0(&DAT_100fbfa48,&DAT_100c410c0);
  original = (__RawDictionaryStorage *)*unaff_x20;
  p_Var6 = original;
  Swift::_DictionaryStorage::_copy(this,original);
  if (*(long *)(original + 0x10) != 0) {
    p_Var1 = original + 0x40;
    uVar7 = (1L << ((ulong)(byte)p_Var6[0x20] & 0x3f)) + 0x3fU >> 6;
    if (p_Var6 != original || p_Var1 + uVar7 * 8 <= p_Var6 + 0x40) {
      _memmove(p_Var6 + 0x40,p_Var1,uVar7 << 3);
    }
    lVar12 = 0;
    *(undefined8 *)(p_Var6 + 0x10) = *(undefined8 *)(original + 0x10);
    uVar8 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
    uVar7 = 0xffffffffffffffff;
    if (((byte)original[0x20] & 0x3f) < 6) {
      uVar7 = ~(-1L << (uVar8 & 0x3f));
    }
    uVar7 = uVar7 & *(ulong *)(original + 0x40);
    if (uVar7 == 0) goto LAB_10031cde0;
    do {
      uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar7 = uVar7 - 1 & uVar7;
      while( true ) {
        lVar10 = (LZCOUNT(uVar9) | lVar12 << 6) * 0x10;
        uVar3 = ((undefined8 *)(*(long *)(original + 0x30) + lVar10))[1];
        uVar2 = *(undefined8 *)(*(long *)(original + 0x38) + lVar10);
        uVar4 = ((undefined8 *)(*(long *)(original + 0x38) + lVar10))[1];
        lVar11 = *(long *)(p_Var6 + 0x30);
        *(undefined8 *)(lVar11 + lVar10) = *(undefined8 *)(*(long *)(original + 0x30) + lVar10);
        ((undefined8 *)(lVar11 + lVar10))[1] = uVar3;
        lVar11 = *(long *)(p_Var6 + 0x38);
        *(undefined8 *)(lVar11 + lVar10) = uVar2;
        ((undefined8 *)(lVar11 + lVar10))[1] = uVar4;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar4);
        if (uVar7 != 0) break;
LAB_10031cde0:
        do {
          lVar10 = lVar12 + 1;
          if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10031ce7c);
            (*pcVar5)();
          }
          if ((long)(uVar8 + 0x3f >> 6) <= lVar10) goto LAB_10031ce54;
          uVar7 = *(ulong *)(p_Var1 + lVar10 * 8);
          lVar12 = lVar12 + 1;
        } while (uVar7 == 0);
        uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
        uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
        uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
        uVar7 = uVar7 - 1 & uVar7;
        lVar12 = lVar10;
      }
    } while( true );
  }
LAB_10031ce54:
  _swift_release(original);
  *unaff_x20 = (long)p_Var6;
  return;
}



/* Address: 0x10031ce7c | FUN_10031ce7c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10031ce7c(void)

{
  __RawDictionaryStorage *p_Var1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  undefined8 uVar11;
  long lVar12;
  
  this = (_DictionaryStorage *)&DAT_100fbfa50;
  FUN_1000037f0(&DAT_100fbfa50,&DAT_100c410c8);
  original = (__RawDictionaryStorage *)*unaff_x20;
  p_Var7 = original;
  Swift::_DictionaryStorage::_copy(this,original);
  if (*(long *)(original + 0x10) != 0) {
    p_Var1 = original + 0x40;
    uVar8 = (1L << ((ulong)(byte)p_Var7[0x20] & 0x3f)) + 0x3fU >> 6;
    if (p_Var7 != original || p_Var1 + uVar8 * 8 <= p_Var7 + 0x40) {
      _memmove(p_Var7 + 0x40,p_Var1,uVar8 << 3);
    }
    lVar12 = 0;
    *(undefined8 *)(p_Var7 + 0x10) = *(undefined8 *)(original + 0x10);
    uVar9 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
    uVar8 = 0xffffffffffffffff;
    if (((byte)original[0x20] & 0x3f) < 6) {
      uVar8 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar8 = uVar8 & *(ulong *)(original + 0x40);
    if (uVar8 == 0) goto LAB_10031cf58;
    do {
      uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      while( true ) {
        uVar10 = LZCOUNT(uVar10) | lVar12 << 6;
        puVar3 = (undefined8 *)(*(long *)(original + 0x30) + uVar10 * 0x10);
        uVar5 = puVar3[1];
        uVar11 = *(undefined8 *)(*(long *)(original + 0x38) + uVar10 * 8);
        puVar4 = (undefined8 *)(*(long *)(p_Var7 + 0x30) + uVar10 * 0x10);
        *puVar4 = *puVar3;
        puVar4[1] = uVar5;
        *(undefined8 *)(*(long *)(p_Var7 + 0x38) + uVar10 * 8) = uVar11;
        _swift_bridgeObjectRetain();
        if (uVar8 != 0) break;
LAB_10031cf58:
        do {
          lVar2 = lVar12 + 1;
          if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10031cfec);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar2) goto LAB_10031cfc4;
          uVar8 = *(ulong *)(p_Var1 + lVar2 * 8);
          lVar12 = lVar12 + 1;
        } while (uVar8 == 0);
        uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar8 = uVar8 - 1 & uVar8;
        lVar12 = lVar2;
      }
    } while( true );
  }
LAB_10031cfc4:
  _swift_release(original);
  *unaff_x20 = (long)p_Var7;
  return;
}



/* Address: 0x10031cfec | FUN_10031cfec */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10031cfec(void)

{
  __RawDictionaryStorage *p_Var1;
  long lVar2;
  undefined8 *puVar3;
  code *pcVar4;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  this = (_DictionaryStorage *)&DAT_100fbfa20;
  FUN_1000037f0(&DAT_100fbfa20,&DAT_100c410a0);
  original = (__RawDictionaryStorage *)*unaff_x20;
  p_Var5 = original;
  Swift::_DictionaryStorage::_copy(this,original);
  if (*(long *)(original + 0x10) != 0) {
    p_Var1 = original + 0x40;
    uVar6 = (1L << ((ulong)(byte)p_Var5[0x20] & 0x3f)) + 0x3fU >> 6;
    if (p_Var5 != original || p_Var1 + uVar6 * 8 <= p_Var5 + 0x40) {
      _memmove(p_Var5 + 0x40,p_Var1,uVar6 << 3);
    }
    lVar10 = 0;
    *(undefined8 *)(p_Var5 + 0x10) = *(undefined8 *)(original + 0x10);
    uVar7 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
    uVar6 = 0xffffffffffffffff;
    if (((byte)original[0x20] & 0x3f) < 6) {
      uVar6 = ~(-1L << (uVar7 & 0x3f));
    }
    uVar6 = uVar6 & *(ulong *)(original + 0x40);
    if (uVar6 == 0) goto LAB_10031d0c8;
    do {
      uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar6 = uVar6 - 1 & uVar6;
      while( true ) {
        uVar8 = LZCOUNT(uVar8) | lVar10 << 6;
        puVar3 = (undefined8 *)(*(long *)(original + 0x38) + uVar8 * 0x10);
        uVar9 = puVar3[1];
        uVar12 = puVar3[1];
        uVar11 = *puVar3;
        *(undefined8 *)(*(long *)(p_Var5 + 0x30) + uVar8 * 8) =
             *(undefined8 *)(*(long *)(original + 0x30) + uVar8 * 8);
        puVar3 = (undefined8 *)(*(long *)(p_Var5 + 0x38) + uVar8 * 0x10);
        puVar3[1] = uVar12;
        *puVar3 = uVar11;
        _swift_retain(uVar9);
        if (uVar6 != 0) break;
LAB_10031d0c8:
        do {
          lVar2 = lVar10 + 1;
          if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10031d15c);
            (*pcVar4)();
          }
          if ((long)(uVar7 + 0x3f >> 6) <= lVar2) goto LAB_10031d134;
          uVar6 = *(ulong *)(p_Var1 + lVar2 * 8);
          lVar10 = lVar10 + 1;
        } while (uVar6 == 0);
        uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
        uVar6 = uVar6 - 1 & uVar6;
        lVar10 = lVar2;
      }
    } while( true );
  }
LAB_10031d134:
  _swift_release(original);
  *unaff_x20 = (long)p_Var5;
  return;
}



/* Address: 0x10031d15c | FUN_10031d15c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10031d15c(void)

{
  __RawDictionaryStorage *p_Var1;
  long lVar2;
  code *pcVar3;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  undefined8 uVar8;
  long lVar9;
  
  this = (_DictionaryStorage *)&DAT_100fbfa18;
  FUN_1000037f0(&DAT_100fbfa18,&DAT_100c41098);
  original = (__RawDictionaryStorage *)*unaff_x20;
  p_Var4 = original;
  Swift::_DictionaryStorage::_copy(this,original);
  if (*(long *)(original + 0x10) != 0) {
    p_Var1 = original + 0x40;
    uVar5 = (1L << ((ulong)(byte)p_Var4[0x20] & 0x3f)) + 0x3fU >> 6;
    if (p_Var4 != original || p_Var1 + uVar5 * 8 <= p_Var4 + 0x40) {
      _memmove(p_Var4 + 0x40,p_Var1,uVar5 << 3);
    }
    lVar9 = 0;
    *(undefined8 *)(p_Var4 + 0x10) = *(undefined8 *)(original + 0x10);
    uVar6 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
    uVar5 = 0xffffffffffffffff;
    if (((byte)original[0x20] & 0x3f) < 6) {
      uVar5 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar5 = uVar5 & *(ulong *)(original + 0x40);
    if (uVar5 == 0) goto LAB_10031d238;
    do {
      uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar5 = uVar5 - 1 & uVar5;
      while( true ) {
        uVar7 = LZCOUNT(uVar7) | lVar9 << 6;
        uVar8 = *(undefined8 *)(*(long *)(original + 0x38) + uVar7 * 8);
        *(undefined8 *)(*(long *)(p_Var4 + 0x30) + uVar7 * 8) =
             *(undefined8 *)(*(long *)(original + 0x30) + uVar7 * 8);
        *(undefined8 *)(*(long *)(p_Var4 + 0x38) + uVar7 * 8) = uVar8;
        _swift_bridgeObjectRetain(uVar8);
        if (uVar5 != 0) break;
LAB_10031d238:
        do {
          lVar2 = lVar9 + 1;
          if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10031d2c0);
            (*pcVar3)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar2) goto LAB_10031d298;
          uVar5 = *(ulong *)(p_Var1 + lVar2 * 8);
          lVar9 = lVar9 + 1;
        } while (uVar5 == 0);
        uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
        uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
        uVar5 = uVar5 - 1 & uVar5;
        lVar9 = lVar2;
      }
    } while( true );
  }
LAB_10031d298:
  _swift_release(original);
  *unaff_x20 = (long)p_Var4;
  return;
}



/* Address: 0x10031d2c0 | FUN_10031d2c0 */

void FUN_10031d2c0(long param_1,bool param_2)

{
  undefined8 *puVar1;
  String *pSVar2;
  __int64 capacity;
  char *pcVar3;
  void *pvVar4;
  String SVar5;
  bool bVar6;
  code *pcVar7;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var8;
  Hasher into;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  ulong uVar15;
  __RawDictionaryStorage *p_Var16;
  long lVar17;
  undefined1 auStack_c8 [72];
  undefined1 auStack_80 [32];
  
  original = (__RawDictionaryStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_DictionaryStorage *)&DAT_100fbfa30;
  FUN_1000037f0(&DAT_100fbfa30,&DAT_100c44530);
  p_Var8 = original;
  Swift::_DictionaryStorage::_resize(this,original,capacity,param_2);
  if (*(long *)(original + 0x10) == 0) {
LAB_10031d548:
    _swift_release(original);
LAB_10031d550:
    *unaff_x20 = (long)p_Var8;
    return;
  }
  p_Var16 = original + 0x40;
  uVar13 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar15 = uVar15 & *(ulong *)p_Var16;
  lVar11 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar17 = lVar11 + 1;
        if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10031d578);
          (*pcVar7)();
        }
        if ((long)(uVar13 + 0x3f >> 6) <= lVar17) {
          if ((param_2 & 1U) == 0) {
            _swift_release(original);
            goto LAB_10031d550;
          }
          uVar15 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
          if (((byte)original[0x20] & 0x3f) < 6) {
            *(long *)p_Var16 = -1L << (uVar15 & 0x3f);
          }
          else {
            _bzero(p_Var16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(original + 0x10) = 0;
          goto LAB_10031d548;
        }
        uVar15 = *(ulong *)(p_Var16 + lVar17 * 8);
        lVar11 = lVar11 + 1;
      } while (uVar15 == 0);
      uVar10 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar10 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar17 = lVar11;
    }
    uVar10 = LZCOUNT(uVar10) | lVar17 << 6;
    pSVar2 = (String *)(*(long *)(original + 0x30) + uVar10 * 0x10);
    pcVar3 = pSVar2->str;
    pvVar4 = pSVar2->bridgeObject;
    SVar5 = *pSVar2;
    lVar11 = *(long *)(original + 0x38) + uVar10 * 0x20;
    if ((param_2 & 1U) == 0) {
      FUN_10000cbfc(lVar11,auStack_80);
      _swift_bridgeObjectRetain(pvVar4);
    }
    else {
      FUN_100011080(lVar11,auStack_80);
    }
    Swift::Hasher::init(*(__int64 *)(p_Var8 + 0x28));
    into.unknown = auStack_c8;
    Swift::String::hash(into,SVar5);
    uVar9 = Swift::Hasher::_finalize(into);
    uVar14 = -1L << ((ulong)(byte)p_Var8[0x20] & 0x3f);
    uVar9 = uVar9 & (uVar14 ^ 0xffffffffffffffff);
    uVar12 = uVar9 >> 6;
    uVar10 = -1L << (uVar9 & 0x3f) & (*(ulong *)(p_Var8 + uVar12 * 8 + 0x40) ^ 0xffffffffffffffff);
    if (uVar10 == 0) {
      bVar6 = false;
      uVar10 = 0x3f - uVar14 >> 6;
      do {
        uVar9 = uVar12 + 1;
        if ((uVar9 == uVar10) && (bVar6)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10031d57c);
          (*pcVar7)();
        }
        uVar12 = 0;
        if (uVar9 != uVar10) {
          uVar12 = uVar9;
        }
        bVar6 = (bool)(uVar9 == uVar10 | bVar6);
      } while (*(ulong *)(p_Var8 + uVar12 * 8 + 0x40) == 0xffffffffffffffff);
      uVar10 = ~*(ulong *)(p_Var8 + uVar12 * 8 + 0x40);
      uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar12 << 6;
    }
    else {
      uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar9 & 0x7fffffffffffffc0;
    }
    uVar12 = uVar10 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var8 + uVar12 + 0x40) = 1L << (uVar10 & 0x3f) | *(ulong *)(p_Var8 + uVar12 + 0x40);
    puVar1 = (undefined8 *)(*(long *)(p_Var8 + 0x30) + uVar10 * 0x10);
    *puVar1 = pcVar3;
    puVar1[1] = pvVar4;
    FUN_100011080(auStack_80,*(long *)(p_Var8 + 0x38) + uVar10 * 0x20);
    *(long *)(p_Var8 + 0x10) = *(long *)(p_Var8 + 0x10) + 1;
    lVar11 = lVar17;
  } while( true );
}



/* Address: 0x10031d57c | FUN_10031d57c */

void FUN_10031d57c(long param_1,bool param_2)

{
  undefined8 *puVar1;
  String *pSVar2;
  __int64 capacity;
  char *pcVar3;
  void *pvVar4;
  String SVar5;
  bool bVar6;
  code *pcVar7;
  Date DVar8;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var9;
  Hasher into;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long extraout_x8;
  undefined1 *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  long lVar19;
  long lVar20;
  __RawDictionaryStorage *p_Var21;
  undefined1 auStack_e0 [8];
  undefined1 auStack_a8 [72];
  
  DVar8 = Foundation::Date::typeMetadataAccessor();
  lVar12 = *(long *)(DVar8.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar12 + 0x40));
  puVar13 = auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  original = (__RawDictionaryStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_DictionaryStorage *)&DAT_100fbfa28;
  FUN_1000037f0(&DAT_100fbfa28,&DAT_100c410a8);
  p_Var9 = original;
  Swift::_DictionaryStorage::_resize(this,original,capacity,param_2);
  if (*(long *)(original + 0x10) == 0) {
LAB_10031d868:
    _swift_release(original);
LAB_10031d870:
    *unaff_x20 = (long)p_Var9;
    return;
  }
  p_Var21 = original + 0x40;
  uVar16 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar18 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar18 = ~(-1L << (uVar16 & 0x3f));
  }
  uVar18 = uVar18 & *(ulong *)p_Var21;
  lVar11 = 0;
  do {
    if (uVar18 == 0) {
      do {
        lVar20 = lVar11 + 1;
        if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10031d898);
          (*pcVar7)();
        }
        if ((long)(uVar16 + 0x3f >> 6) <= lVar20) {
          if ((param_2 & 1U) == 0) {
            _swift_release(original);
            goto LAB_10031d870;
          }
          uVar18 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
          if (((byte)original[0x20] & 0x3f) < 6) {
            *(long *)p_Var21 = -1L << (uVar18 & 0x3f);
          }
          else {
            _bzero(p_Var21,uVar18 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(original + 0x10) = 0;
          goto LAB_10031d868;
        }
        uVar18 = *(ulong *)(p_Var21 + lVar20 * 8);
        lVar11 = lVar11 + 1;
      } while (uVar18 == 0);
      uVar14 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
      uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
      uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
      uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
      uVar14 = uVar14 >> 0x20 | uVar14 << 0x20;
      uVar18 = uVar18 - 1 & uVar18;
    }
    else {
      uVar14 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
      uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
      uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
      uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
      uVar14 = uVar14 >> 0x20 | uVar14 << 0x20;
      uVar18 = uVar18 - 1 & uVar18;
      lVar20 = lVar11;
    }
    uVar14 = LZCOUNT(uVar14) | lVar20 << 6;
    pSVar2 = (String *)(*(long *)(original + 0x30) + uVar14 * 0x10);
    pcVar3 = pSVar2->str;
    pvVar4 = pSVar2->bridgeObject;
    SVar5 = *pSVar2;
    lVar19 = *(long *)(lVar12 + 0x48);
    lVar11 = *(long *)(original + 0x38) + lVar19 * uVar14;
    if ((param_2 & 1U) == 0) {
      (**(code **)(lVar12 + 0x10))(puVar13,lVar11,DVar8.unknown);
      _swift_bridgeObjectRetain(pvVar4);
    }
    else {
      (**(code **)(lVar12 + 0x20))(puVar13,lVar11,DVar8.unknown);
    }
    Swift::Hasher::init(*(__int64 *)(p_Var9 + 0x28));
    into.unknown = auStack_a8;
    Swift::String::hash(into,SVar5);
    uVar10 = Swift::Hasher::_finalize(into);
    uVar17 = -1L << ((ulong)(byte)p_Var9[0x20] & 0x3f);
    uVar10 = uVar10 & (uVar17 ^ 0xffffffffffffffff);
    uVar15 = uVar10 >> 6;
    uVar14 = -1L << (uVar10 & 0x3f) & (*(ulong *)(p_Var9 + uVar15 * 8 + 0x40) ^ 0xffffffffffffffff);
    if (uVar14 == 0) {
      bVar6 = false;
      uVar14 = 0x3f - uVar17 >> 6;
      do {
        uVar10 = uVar15 + 1;
        if ((uVar10 == uVar14) && (bVar6)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10031d89c);
          (*pcVar7)();
        }
        uVar15 = 0;
        if (uVar10 != uVar14) {
          uVar15 = uVar10;
        }
        bVar6 = (bool)(uVar10 == uVar14 | bVar6);
      } while (*(ulong *)(p_Var9 + uVar15 * 8 + 0x40) == 0xffffffffffffffff);
      uVar14 = ~*(ulong *)(p_Var9 + uVar15 * 8 + 0x40);
      uVar14 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
      uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
      uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
      uVar14 = LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) | uVar15 << 6;
    }
    else {
      uVar14 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
      uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
      uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
      uVar14 = LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) | uVar10 & 0x7fffffffffffffc0;
    }
    uVar15 = uVar14 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var9 + uVar15 + 0x40) = 1L << (uVar14 & 0x3f) | *(ulong *)(p_Var9 + uVar15 + 0x40);
    puVar1 = (undefined8 *)(*(long *)(p_Var9 + 0x30) + uVar14 * 0x10);
    *puVar1 = pcVar3;
    puVar1[1] = pvVar4;
    (**(code **)(lVar12 + 0x20))(*(long *)(p_Var9 + 0x38) + lVar19 * uVar14,puVar13,DVar8.unknown);
    *(long *)(p_Var9 + 0x10) = *(long *)(p_Var9 + 0x10) + 1;
    lVar11 = lVar20;
  } while( true );
}



/* Address: 0x10031d89c | FUN_10031d89c */

void FUN_10031d89c(long param_1,bool param_2)

{
  String *pSVar1;
  undefined8 *puVar2;
  __int64 capacity;
  char *pcVar3;
  undefined8 uVar4;
  void *pvVar5;
  undefined8 uVar6;
  String SVar7;
  bool bVar8;
  code *pcVar9;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var10;
  Hasher into;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long *unaff_x20;
  __RawDictionaryStorage *p_Var18;
  ulong uVar19;
  __RawDictionaryStorage *original;
  undefined1 auStack_a8 [72];
  
  original = (__RawDictionaryStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_DictionaryStorage *)&DAT_100fbfa38;
  FUN_1000037f0(&DAT_100fbfa38,&DAT_100c410b0);
  p_Var10 = original;
  Swift::_DictionaryStorage::_resize(this,original,capacity,param_2);
  if (*(long *)(original + 0x10) == 0) {
LAB_10031db24:
    _swift_release(original);
    *unaff_x20 = (long)p_Var10;
    return;
  }
  p_Var18 = original + 0x40;
  uVar15 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar19 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar19 = ~(-1L << (uVar15 & 0x3f));
  }
  uVar19 = uVar19 & *(ulong *)p_Var18;
  lVar13 = 0;
  do {
    if (uVar19 == 0) {
      do {
        lVar17 = lVar13 + 1;
        if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x10031db54);
          (*pcVar9)();
        }
        if ((long)(uVar15 + 0x3f >> 6) <= lVar17) {
          if ((param_2 & 1U) != 0) {
            uVar19 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
            if (((byte)original[0x20] & 0x3f) < 6) {
              *(long *)p_Var18 = -1L << (uVar19 & 0x3f);
            }
            else {
              _bzero(p_Var18,uVar19 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(original + 0x10) = 0;
          }
          goto LAB_10031db24;
        }
        uVar19 = *(ulong *)(p_Var18 + lVar17 * 8);
        lVar13 = lVar13 + 1;
      } while (uVar19 == 0);
      uVar12 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = uVar12 >> 0x20 | uVar12 << 0x20;
      uVar19 = uVar19 - 1 & uVar19;
    }
    else {
      uVar12 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = uVar12 >> 0x20 | uVar12 << 0x20;
      uVar19 = uVar19 - 1 & uVar19;
      lVar17 = lVar13;
    }
    lVar13 = (LZCOUNT(uVar12) | lVar17 << 6) * 0x10;
    pSVar1 = (String *)(*(long *)(original + 0x30) + lVar13);
    pcVar3 = pSVar1->str;
    pvVar5 = pSVar1->bridgeObject;
    SVar7 = *pSVar1;
    puVar2 = (undefined8 *)(*(long *)(original + 0x38) + lVar13);
    uVar4 = *puVar2;
    uVar6 = puVar2[1];
    if ((param_2 & 1U) == 0) {
      _swift_bridgeObjectRetain(pvVar5);
      FUN_1001037b4(uVar4,uVar6);
    }
    Swift::Hasher::init(*(__int64 *)(p_Var10 + 0x28));
    into.unknown = auStack_a8;
    Swift::String::hash(into,SVar7);
    uVar11 = Swift::Hasher::_finalize(into);
    uVar16 = -1L << ((ulong)(byte)p_Var10[0x20] & 0x3f);
    uVar11 = uVar11 & (uVar16 ^ 0xffffffffffffffff);
    uVar14 = uVar11 >> 6;
    uVar12 = -1L << (uVar11 & 0x3f) & (*(ulong *)(p_Var10 + uVar14 * 8 + 0x40) ^ 0xffffffffffffffff)
    ;
    if (uVar12 == 0) {
      bVar8 = false;
      uVar12 = 0x3f - uVar16 >> 6;
      do {
        uVar11 = uVar14 + 1;
        if ((uVar11 == uVar12) && (bVar8)) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x10031db58);
          (*pcVar9)();
        }
        uVar14 = 0;
        if (uVar11 != uVar12) {
          uVar14 = uVar11;
        }
        bVar8 = (bool)(uVar11 == uVar12 | bVar8);
      } while (*(ulong *)(p_Var10 + uVar14 * 8 + 0x40) == 0xffffffffffffffff);
      uVar12 = ~*(ulong *)(p_Var10 + uVar14 * 8 + 0x40);
      uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) | uVar14 << 6;
    }
    else {
      uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) | uVar11 & 0x7fffffffffffffc0;
    }
    uVar14 = uVar12 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var10 + uVar14 + 0x40) =
         1L << (uVar12 & 0x3f) | *(ulong *)(p_Var10 + uVar14 + 0x40);
    puVar2 = (undefined8 *)(*(long *)(p_Var10 + 0x30) + uVar12 * 0x10);
    *puVar2 = pcVar3;
    puVar2[1] = pvVar5;
    puVar2 = (undefined8 *)(*(long *)(p_Var10 + 0x38) + uVar12 * 0x10);
    *puVar2 = uVar4;
    puVar2[1] = uVar6;
    *(long *)(p_Var10 + 0x10) = *(long *)(p_Var10 + 0x10) + 1;
    lVar13 = lVar17;
  } while( true );
}



/* Address: 0x10031db58 | FUN_10031db58 */

void FUN_10031db58(long param_1,bool param_2)

{
  undefined8 *puVar1;
  String *pSVar2;
  __int64 capacity;
  char *pcVar3;
  void *pvVar4;
  String SVar5;
  bool bVar6;
  code *pcVar7;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var8;
  Hasher into;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  ulong uVar15;
  __RawDictionaryStorage *p_Var16;
  __RawDictionaryStorage *original;
  undefined8 uVar17;
  long lVar18;
  undefined1 auStack_a8 [72];
  
  original = (__RawDictionaryStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_DictionaryStorage *)&DAT_100fbfa40;
  FUN_1000037f0(&DAT_100fbfa40,&DAT_100c410b8);
  p_Var8 = original;
  Swift::_DictionaryStorage::_resize(this,original,capacity,param_2);
  if (*(long *)(original + 0x10) == 0) {
LAB_10031ddc0:
    _swift_release(original);
    *unaff_x20 = (long)p_Var8;
    return;
  }
  p_Var16 = original + 0x40;
  uVar13 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar15 = uVar15 & *(ulong *)p_Var16;
  lVar11 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar18 = lVar11 + 1;
        if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10031ddf0);
          (*pcVar7)();
        }
        if ((long)(uVar13 + 0x3f >> 6) <= lVar18) {
          if ((param_2 & 1U) != 0) {
            uVar15 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
            if (((byte)original[0x20] & 0x3f) < 6) {
              *(long *)p_Var16 = -1L << (uVar15 & 0x3f);
            }
            else {
              _bzero(p_Var16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(original + 0x10) = 0;
          }
          goto LAB_10031ddc0;
        }
        uVar15 = *(ulong *)(p_Var16 + lVar18 * 8);
        lVar11 = lVar11 + 1;
      } while (uVar15 == 0);
      uVar10 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar10 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar18 = lVar11;
    }
    uVar10 = LZCOUNT(uVar10) | lVar18 << 6;
    pSVar2 = (String *)(*(long *)(original + 0x30) + uVar10 * 0x10);
    pcVar3 = pSVar2->str;
    pvVar4 = pSVar2->bridgeObject;
    SVar5 = *pSVar2;
    uVar17 = *(undefined8 *)(*(long *)(original + 0x38) + uVar10 * 8);
    if ((param_2 & 1U) == 0) {
      _swift_bridgeObjectRetain(pvVar4);
      _swift_bridgeObjectRetain(uVar17);
    }
    Swift::Hasher::init(*(__int64 *)(p_Var8 + 0x28));
    into.unknown = auStack_a8;
    Swift::String::hash(into,SVar5);
    uVar9 = Swift::Hasher::_finalize(into);
    uVar14 = -1L << ((ulong)(byte)p_Var8[0x20] & 0x3f);
    uVar9 = uVar9 & (uVar14 ^ 0xffffffffffffffff);
    uVar12 = uVar9 >> 6;
    uVar10 = -1L << (uVar9 & 0x3f) & (*(ulong *)(p_Var8 + uVar12 * 8 + 0x40) ^ 0xffffffffffffffff);
    if (uVar10 == 0) {
      bVar6 = false;
      uVar10 = 0x3f - uVar14 >> 6;
      do {
        uVar9 = uVar12 + 1;
        if ((uVar9 == uVar10) && (bVar6)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10031ddf4);
          (*pcVar7)();
        }
        uVar12 = 0;
        if (uVar9 != uVar10) {
          uVar12 = uVar9;
        }
        bVar6 = (bool)(uVar9 == uVar10 | bVar6);
      } while (*(ulong *)(p_Var8 + uVar12 * 8 + 0x40) == 0xffffffffffffffff);
      uVar10 = ~*(ulong *)(p_Var8 + uVar12 * 8 + 0x40);
      uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar12 << 6;
    }
    else {
      uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar9 & 0x7fffffffffffffc0;
    }
    uVar12 = uVar10 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var8 + uVar12 + 0x40) = 1L << (uVar10 & 0x3f) | *(ulong *)(p_Var8 + uVar12 + 0x40);
    puVar1 = (undefined8 *)(*(long *)(p_Var8 + 0x30) + uVar10 * 0x10);
    *puVar1 = pcVar3;
    puVar1[1] = pvVar4;
    *(undefined8 *)(*(long *)(p_Var8 + 0x38) + uVar10 * 8) = uVar17;
    *(long *)(p_Var8 + 0x10) = *(long *)(p_Var8 + 0x10) + 1;
    lVar11 = lVar18;
  } while( true );
}



/* Address: 0x10031ddf4 | FUN_10031ddf4 */

void FUN_10031ddf4(long param_1,bool param_2)

{
  String *pSVar1;
  undefined8 *puVar2;
  __int64 capacity;
  char *pcVar3;
  undefined8 uVar4;
  void *pvVar5;
  undefined8 uVar6;
  String SVar7;
  bool bVar8;
  code *pcVar9;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var10;
  Hasher into;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long *unaff_x20;
  ulong uVar17;
  __RawDictionaryStorage *p_Var18;
  __RawDictionaryStorage *original;
  long lVar19;
  undefined1 auStack_a8 [72];
  
  original = (__RawDictionaryStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_DictionaryStorage *)&DAT_100fbfa48;
  FUN_1000037f0(&DAT_100fbfa48,&DAT_100c410c0);
  p_Var10 = original;
  Swift::_DictionaryStorage::_resize(this,original,capacity,param_2);
  if (*(long *)(original + 0x10) == 0) {
LAB_10031e074:
    _swift_release(original);
    *unaff_x20 = (long)p_Var10;
    return;
  }
  p_Var18 = original + 0x40;
  uVar15 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar17 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar17 = ~(-1L << (uVar15 & 0x3f));
  }
  uVar17 = uVar17 & *(ulong *)p_Var18;
  lVar13 = 0;
  do {
    if (uVar17 == 0) {
      do {
        lVar19 = lVar13 + 1;
        if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x10031e0a4);
          (*pcVar9)();
        }
        if ((long)(uVar15 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1U) != 0) {
            uVar17 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
            if (((byte)original[0x20] & 0x3f) < 6) {
              *(long *)p_Var18 = -1L << (uVar17 & 0x3f);
            }
            else {
              _bzero(p_Var18,uVar17 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(original + 0x10) = 0;
          }
          goto LAB_10031e074;
        }
        uVar17 = *(ulong *)(p_Var18 + lVar19 * 8);
        lVar13 = lVar13 + 1;
      } while (uVar17 == 0);
      uVar12 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = uVar12 >> 0x20 | uVar12 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
    }
    else {
      uVar12 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = uVar12 >> 0x20 | uVar12 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
      lVar19 = lVar13;
    }
    lVar13 = (LZCOUNT(uVar12) | lVar19 << 6) * 0x10;
    pSVar1 = (String *)(*(long *)(original + 0x30) + lVar13);
    pcVar3 = pSVar1->str;
    pvVar5 = pSVar1->bridgeObject;
    SVar7 = *pSVar1;
    puVar2 = (undefined8 *)(*(long *)(original + 0x38) + lVar13);
    uVar4 = *puVar2;
    uVar6 = puVar2[1];
    if ((param_2 & 1U) == 0) {
      _swift_bridgeObjectRetain(pvVar5);
      _swift_bridgeObjectRetain(uVar6);
    }
    Swift::Hasher::init(*(__int64 *)(p_Var10 + 0x28));
    into.unknown = auStack_a8;
    Swift::String::hash(into,SVar7);
    uVar11 = Swift::Hasher::_finalize(into);
    uVar16 = -1L << ((ulong)(byte)p_Var10[0x20] & 0x3f);
    uVar11 = uVar11 & (uVar16 ^ 0xffffffffffffffff);
    uVar14 = uVar11 >> 6;
    uVar12 = -1L << (uVar11 & 0x3f) & (*(ulong *)(p_Var10 + uVar14 * 8 + 0x40) ^ 0xffffffffffffffff)
    ;
    if (uVar12 == 0) {
      bVar8 = false;
      uVar12 = 0x3f - uVar16 >> 6;
      do {
        uVar11 = uVar14 + 1;
        if ((uVar11 == uVar12) && (bVar8)) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x10031e0a8);
          (*pcVar9)();
        }
        uVar14 = 0;
        if (uVar11 != uVar12) {
          uVar14 = uVar11;
        }
        bVar8 = (bool)(uVar11 == uVar12 | bVar8);
      } while (*(ulong *)(p_Var10 + uVar14 * 8 + 0x40) == 0xffffffffffffffff);
      uVar12 = ~*(ulong *)(p_Var10 + uVar14 * 8 + 0x40);
      uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) | uVar14 << 6;
    }
    else {
      uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) | uVar11 & 0x7fffffffffffffc0;
    }
    uVar14 = uVar12 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var10 + uVar14 + 0x40) =
         1L << (uVar12 & 0x3f) | *(ulong *)(p_Var10 + uVar14 + 0x40);
    puVar2 = (undefined8 *)(*(long *)(p_Var10 + 0x30) + uVar12 * 0x10);
    *puVar2 = pcVar3;
    puVar2[1] = pvVar5;
    puVar2 = (undefined8 *)(*(long *)(p_Var10 + 0x38) + uVar12 * 0x10);
    *puVar2 = uVar4;
    puVar2[1] = uVar6;
    *(long *)(p_Var10 + 0x10) = *(long *)(p_Var10 + 0x10) + 1;
    lVar13 = lVar19;
  } while( true );
}



/* Address: 0x10031e0a8 | FUN_10031e0a8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10031e0a8(long param_1,bool param_2)

{
  undefined8 *puVar1;
  String *pSVar2;
  __int64 capacity;
  char *pcVar3;
  void *pvVar4;
  String SVar5;
  bool bVar6;
  code *pcVar7;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var8;
  Hasher into;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  ulong uVar15;
  __RawDictionaryStorage *p_Var16;
  __RawDictionaryStorage *original;
  undefined8 uVar17;
  long lVar18;
  undefined1 auStack_a8 [72];
  
  original = (__RawDictionaryStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_DictionaryStorage *)&DAT_100fbfa50;
  FUN_1000037f0(&DAT_100fbfa50,&DAT_100c410c8);
  p_Var8 = original;
  Swift::_DictionaryStorage::_resize(this,original,capacity,param_2);
  if (*(long *)(original + 0x10) == 0) {
LAB_10031e310:
    _swift_release(original);
    *unaff_x20 = (long)p_Var8;
    return;
  }
  p_Var16 = original + 0x40;
  uVar13 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar15 = uVar15 & *(ulong *)p_Var16;
  lVar11 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar18 = lVar11 + 1;
        if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10031e340);
          (*pcVar7)();
        }
        if ((long)(uVar13 + 0x3f >> 6) <= lVar18) {
          if ((param_2 & 1U) != 0) {
            uVar15 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
            if (((byte)original[0x20] & 0x3f) < 6) {
              *(long *)p_Var16 = -1L << (uVar15 & 0x3f);
            }
            else {
              _bzero(p_Var16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(original + 0x10) = 0;
          }
          goto LAB_10031e310;
        }
        uVar15 = *(ulong *)(p_Var16 + lVar18 * 8);
        lVar11 = lVar11 + 1;
      } while (uVar15 == 0);
      uVar10 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar10 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar18 = lVar11;
    }
    uVar10 = LZCOUNT(uVar10) | lVar18 << 6;
    pSVar2 = (String *)(*(long *)(original + 0x30) + uVar10 * 0x10);
    pcVar3 = pSVar2->str;
    pvVar4 = pSVar2->bridgeObject;
    SVar5 = *pSVar2;
    uVar17 = *(undefined8 *)(*(long *)(original + 0x38) + uVar10 * 8);
    if ((param_2 & 1U) == 0) {
      _swift_bridgeObjectRetain(pvVar4);
    }
    Swift::Hasher::init(*(__int64 *)(p_Var8 + 0x28));
    into.unknown = auStack_a8;
    Swift::String::hash(into,SVar5);
    uVar9 = Swift::Hasher::_finalize(into);
    uVar14 = -1L << ((ulong)(byte)p_Var8[0x20] & 0x3f);
    uVar9 = uVar9 & (uVar14 ^ 0xffffffffffffffff);
    uVar12 = uVar9 >> 6;
    uVar10 = -1L << (uVar9 & 0x3f) & (*(ulong *)(p_Var8 + uVar12 * 8 + 0x40) ^ 0xffffffffffffffff);
    if (uVar10 == 0) {
      bVar6 = false;
      uVar10 = 0x3f - uVar14 >> 6;
      do {
        uVar9 = uVar12 + 1;
        if ((uVar9 == uVar10) && (bVar6)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10031e344);
          (*pcVar7)();
        }
        uVar12 = 0;
        if (uVar9 != uVar10) {
          uVar12 = uVar9;
        }
        bVar6 = (bool)(uVar9 == uVar10 | bVar6);
      } while (*(ulong *)(p_Var8 + uVar12 * 8 + 0x40) == 0xffffffffffffffff);
      uVar10 = ~*(ulong *)(p_Var8 + uVar12 * 8 + 0x40);
      uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar12 << 6;
    }
    else {
      uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar9 & 0x7fffffffffffffc0;
    }
    uVar12 = uVar10 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var8 + uVar12 + 0x40) = 1L << (uVar10 & 0x3f) | *(ulong *)(p_Var8 + uVar12 + 0x40);
    puVar1 = (undefined8 *)(*(long *)(p_Var8 + 0x30) + uVar10 * 0x10);
    *puVar1 = pcVar3;
    puVar1[1] = pvVar4;
    *(undefined8 *)(*(long *)(p_Var8 + 0x38) + uVar10 * 8) = uVar17;
    *(long *)(p_Var8 + 0x10) = *(long *)(p_Var8 + 0x10) + 1;
    lVar11 = lVar18;
  } while( true );
}



/* Address: 0x10031e344 | FUN_10031e344 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10031e344(long param_1,bool param_2)

{
  undefined8 *puVar1;
  __int64 capacity;
  bool bVar2;
  code *pcVar3;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  undefined8 uVar11;
  __RawDictionaryStorage *original;
  __RawDictionaryStorage *p_Var12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  original = (__RawDictionaryStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_DictionaryStorage *)&DAT_100fbfa20;
  FUN_1000037f0(&DAT_100fbfa20,&DAT_100c410a0);
  p_Var4 = original;
  Swift::_DictionaryStorage::_resize(this,original,capacity,param_2);
  if (*(long *)(original + 0x10) == 0) {
LAB_10031e588:
    _swift_release(original);
    *unaff_x20 = (long)p_Var4;
    return;
  }
  p_Var12 = original + 0x40;
  uVar9 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar14 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar14 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar14 = uVar14 & *(ulong *)p_Var12;
  lVar7 = 0;
  do {
    if (uVar14 == 0) {
      do {
        lVar13 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10031e5b8);
          (*pcVar3)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar13) {
          if ((param_2 & 1U) != 0) {
            uVar14 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
            if (((byte)original[0x20] & 0x3f) < 6) {
              *(long *)p_Var12 = -1L << (uVar14 & 0x3f);
            }
            else {
              _bzero(p_Var12,uVar14 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(original + 0x10) = 0;
          }
          goto LAB_10031e588;
        }
        uVar14 = *(ulong *)(p_Var12 + lVar13 * 8);
        lVar7 = lVar7 + 1;
      } while (uVar14 == 0);
      uVar6 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar14 = uVar14 - 1 & uVar14;
    }
    else {
      uVar6 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar14 = uVar14 - 1 & uVar14;
      lVar13 = lVar7;
    }
    uVar6 = LZCOUNT(uVar6) | lVar13 << 6;
    uVar11 = *(undefined8 *)(*(long *)(original + 0x30) + uVar6 * 8);
    puVar1 = (undefined8 *)(*(long *)(original + 0x38) + uVar6 * 0x10);
    uVar16 = puVar1[1];
    uVar15 = *puVar1;
    if ((param_2 & 1U) == 0) {
      _swift_retain(puVar1[1]);
    }
    uVar5 = (extension_ObjectiveC)::__C::NSObject::_rawHashValue(*(__int64 *)(p_Var4 + 0x28));
    uVar10 = -1L << ((ulong)(byte)p_Var4[0x20] & 0x3f);
    uVar5 = uVar5 & (uVar10 ^ 0xffffffffffffffff);
    uVar8 = uVar5 >> 6;
    uVar6 = -1L << (uVar5 & 0x3f) & (*(ulong *)(p_Var4 + uVar8 * 8 + 0x40) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      bVar2 = false;
      uVar6 = 0x3f - uVar10 >> 6;
      do {
        uVar5 = uVar8 + 1;
        if ((uVar5 == uVar6) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10031e5bc);
          (*pcVar3)();
        }
        uVar8 = 0;
        if (uVar5 != uVar6) {
          uVar8 = uVar5;
        }
        bVar2 = (bool)(uVar5 == uVar6 | bVar2);
      } while (*(ulong *)(p_Var4 + uVar8 * 8 + 0x40) == 0xffffffffffffffff);
      uVar6 = ~*(ulong *)(p_Var4 + uVar8 * 8 + 0x40);
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar8 << 6;
    }
    else {
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar5 & 0x7fffffffffffffc0;
    }
    uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var4 + uVar8 + 0x40) = 1L << (uVar6 & 0x3f) | *(ulong *)(p_Var4 + uVar8 + 0x40);
    *(undefined8 *)(*(long *)(p_Var4 + 0x30) + uVar6 * 8) = uVar11;
    puVar1 = (undefined8 *)(*(long *)(p_Var4 + 0x38) + uVar6 * 0x10);
    puVar1[1] = uVar16;
    *puVar1 = uVar15;
    *(long *)(p_Var4 + 0x10) = *(long *)(p_Var4 + 0x10) + 1;
    lVar7 = lVar13;
  } while( true );
}



/* Address: 0x10031e5bc | FUN_10031e5bc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10031e5bc(long param_1,bool param_2)

{
  __int64 capacity;
  bool bVar1;
  code *pcVar2;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *unaff_x20;
  undefined8 uVar10;
  __RawDictionaryStorage *original;
  __RawDictionaryStorage *p_Var11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  
  original = (__RawDictionaryStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_DictionaryStorage *)&DAT_100fbfa18;
  FUN_1000037f0(&DAT_100fbfa18,&DAT_100c41098);
  p_Var3 = original;
  Swift::_DictionaryStorage::_resize(this,original,capacity,param_2);
  if (*(long *)(original + 0x10) == 0) {
LAB_10031e7f0:
    _swift_release(original);
    *unaff_x20 = (long)p_Var3;
    return;
  }
  p_Var11 = original + 0x40;
  uVar8 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar14 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar14 = ~(-1L << (uVar8 & 0x3f));
  }
  uVar14 = uVar14 & *(ulong *)p_Var11;
  lVar6 = 0;
  do {
    if (uVar14 == 0) {
      do {
        lVar13 = lVar6 + 1;
        if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10031e820);
          (*pcVar2)();
        }
        if ((long)(uVar8 + 0x3f >> 6) <= lVar13) {
          if ((param_2 & 1U) != 0) {
            uVar14 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
            if (((byte)original[0x20] & 0x3f) < 6) {
              *(long *)p_Var11 = -1L << (uVar14 & 0x3f);
            }
            else {
              _bzero(p_Var11,uVar14 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(original + 0x10) = 0;
          }
          goto LAB_10031e7f0;
        }
        uVar14 = *(ulong *)(p_Var11 + lVar13 * 8);
        lVar6 = lVar6 + 1;
      } while (uVar14 == 0);
      uVar5 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
      uVar14 = uVar14 - 1 & uVar14;
    }
    else {
      uVar5 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
      uVar14 = uVar14 - 1 & uVar14;
      lVar13 = lVar6;
    }
    uVar5 = LZCOUNT(uVar5) | lVar13 << 6;
    uVar10 = *(undefined8 *)(*(long *)(original + 0x30) + uVar5 * 8);
    uVar12 = *(undefined8 *)(*(long *)(original + 0x38) + uVar5 * 8);
    if ((param_2 & 1U) == 0) {
      _swift_bridgeObjectRetain(uVar12);
    }
    uVar4 = (extension_ObjectiveC)::__C::NSObject::_rawHashValue(*(__int64 *)(p_Var3 + 0x28));
    uVar9 = -1L << ((ulong)(byte)p_Var3[0x20] & 0x3f);
    uVar4 = uVar4 & (uVar9 ^ 0xffffffffffffffff);
    uVar7 = uVar4 >> 6;
    uVar5 = -1L << (uVar4 & 0x3f) & (*(ulong *)(p_Var3 + uVar7 * 8 + 0x40) ^ 0xffffffffffffffff);
    if (uVar5 == 0) {
      bVar1 = false;
      uVar5 = 0x3f - uVar9 >> 6;
      do {
        uVar4 = uVar7 + 1;
        if ((uVar4 == uVar5) && (bVar1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10031e824);
          (*pcVar2)();
        }
        uVar7 = 0;
        if (uVar4 != uVar5) {
          uVar7 = uVar4;
        }
        bVar1 = (bool)(uVar4 == uVar5 | bVar1);
      } while (*(ulong *)(p_Var3 + uVar7 * 8 + 0x40) == 0xffffffffffffffff);
      uVar5 = ~*(ulong *)(p_Var3 + uVar7 * 8 + 0x40);
      uVar5 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) | uVar7 << 6;
    }
    else {
      uVar5 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) | uVar4 & 0x7fffffffffffffc0;
    }
    uVar7 = uVar5 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var3 + uVar7 + 0x40) = 1L << (uVar5 & 0x3f) | *(ulong *)(p_Var3 + uVar7 + 0x40);
    *(undefined8 *)(*(long *)(p_Var3 + 0x30) + uVar5 * 8) = uVar10;
    *(undefined8 *)(*(long *)(p_Var3 + 0x38) + uVar5 * 8) = uVar12;
    *(long *)(p_Var3 + 0x10) = *(long *)(p_Var3 + 0x10) + 1;
    lVar6 = lVar13;
  } while( true );
}



/* Address: 0x10031e824 | FUN_10031e824 */

void FUN_10031e824(Bucket param_1,long param_2)

{
  _HashTable _Var1;
  String *pSVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  void *pvVar5;
  String SVar6;
  code *pcVar7;
  Bucket BVar8;
  Hasher into;
  ulong uVar9;
  Date DVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined1 auStack_a8 [72];
  
  _Var1.unknown = (undefined *)(param_2 + 0x40);
  uVar11 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar16 = param_1.offset + 1U & (uVar11 ^ 0xffffffffffffffff);
  if ((*(ulong *)(_Var1.unknown + (uVar16 >> 6) * 8) >> (uVar16 & 0x3f) & 1) != 0) {
    uVar11 = ~uVar11;
    BVar8 = Swift::_HashTable::previousHole(param_1,_Var1);
    uVar17 = BVar8.offset + 1U & uVar11;
    do {
      pSVar2 = (String *)(*(long *)(param_2 + 0x30) + uVar16 * 0x10);
      pvVar5 = pSVar2->bridgeObject;
      SVar6 = *pSVar2;
      Swift::Hasher::init(*(__int64 *)(param_2 + 0x28));
      _swift_bridgeObjectRetain(pvVar5);
      into.unknown = auStack_a8;
      Swift::String::hash(into,SVar6);
      uVar9 = Swift::Hasher::_finalize(into);
      _swift_bridgeObjectRelease(pvVar5);
      uVar9 = uVar9 & uVar11;
      if (param_1.offset < (long)uVar17) {
        if (uVar9 < uVar17) {
LAB_10031e918:
          if (param_1.offset < (long)uVar9) goto LAB_10031e8a0;
        }
        puVar3 = (undefined8 *)(*(long *)(param_2 + 0x30) + param_1.offset * 0x10);
        puVar4 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar16 * 0x10);
        if ((param_1.offset != uVar16) || (puVar4 + 2 <= puVar3)) {
          uVar18 = *puVar4;
          puVar3[1] = puVar4[1];
          *puVar3 = uVar18;
        }
        lVar15 = *(long *)(param_2 + 0x38);
        DVar10 = Foundation::Date::typeMetadataAccessor();
        lVar14 = *(long *)(*(long *)(DVar10.unknown + -8) + 0x48);
        lVar12 = lVar14 * param_1.offset;
        uVar9 = lVar15 + lVar12;
        lVar13 = lVar14 * uVar16;
        lVar15 = lVar15 + lVar13;
        param_1.offset = uVar16;
        if (lVar12 < lVar13 || (ulong)(lVar15 + lVar14) <= uVar9) {
          _swift_arrayInitWithTakeFrontToBack(uVar9,lVar15,1,DVar10.unknown);
        }
        else if (lVar12 - lVar13 != 0) {
          _swift_arrayInitWithTakeBackToFront(uVar9,lVar15,1);
        }
      }
      else if (uVar17 <= uVar9) goto LAB_10031e918;
LAB_10031e8a0:
      uVar16 = uVar16 + 1 & uVar11;
    } while ((*(ulong *)(_Var1.unknown + (uVar16 >> 6) * 8) >> (uVar16 & 0x3f) & 1) != 0);
  }
  uVar11 = (ulong)param_1.offset >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(_Var1.unknown + uVar11) =
       *(ulong *)(_Var1.unknown + uVar11) & (-1L << (param_1.offset & 0x3fU)) - 1U;
  if (!SBORROW8(*(long *)(param_2 + 0x10),1)) {
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10031e9f4);
  (*pcVar7)();
}



/* Address: 0x10031e9f4 | FUN_10031e9f4 */

void FUN_10031e9f4(Bucket param_1,long param_2)

{
  _HashTable _Var1;
  String *pSVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  void *pvVar5;
  String SVar6;
  code *pcVar7;
  Bucket BVar8;
  Hasher into;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined1 auStack_a8 [72];
  
  _Var1.unknown = (undefined *)(param_2 + 0x40);
  uVar10 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar11 = param_1.offset + 1U & (uVar10 ^ 0xffffffffffffffff);
  if ((*(ulong *)(_Var1.unknown + (uVar11 >> 6) * 8) >> (uVar11 & 0x3f) & 1) != 0) {
    uVar10 = ~uVar10;
    BVar8 = Swift::_HashTable::previousHole(param_1,_Var1);
    uVar12 = BVar8.offset + 1U & uVar10;
    do {
      pSVar2 = (String *)(*(long *)(param_2 + 0x30) + uVar11 * 0x10);
      pvVar5 = pSVar2->bridgeObject;
      SVar6 = *pSVar2;
      Swift::Hasher::init(*(__int64 *)(param_2 + 0x28));
      _swift_bridgeObjectRetain(pvVar5);
      into.unknown = auStack_a8;
      Swift::String::hash(into,SVar6);
      uVar9 = Swift::Hasher::_finalize(into);
      _swift_bridgeObjectRelease(pvVar5);
      uVar9 = uVar9 & uVar10;
      if (param_1.offset < (long)uVar12) {
        if (uVar9 < uVar12) {
LAB_10031eae8:
          if (param_1.offset < (long)uVar9) goto LAB_10031ea70;
        }
        puVar3 = (undefined8 *)(*(long *)(param_2 + 0x30) + param_1.offset * 0x10);
        puVar4 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar11 * 0x10);
        if ((param_1.offset < (long)uVar11) || (puVar4 + 2 <= puVar3 || param_1.offset != uVar11)) {
          uVar13 = *puVar4;
          puVar3[1] = puVar4[1];
          *puVar3 = uVar13;
        }
        puVar3 = (undefined8 *)(*(long *)(param_2 + 0x38) + param_1.offset * 0x10);
        puVar4 = (undefined8 *)(*(long *)(param_2 + 0x38) + uVar11 * 0x10);
        if (((param_1.offset < (long)uVar11) || (puVar4 + 2 <= puVar3)) ||
           (param_1.offset != uVar11)) {
          uVar13 = *puVar4;
          puVar3[1] = puVar4[1];
          *puVar3 = uVar13;
          param_1.offset = uVar11;
        }
      }
      else if (uVar12 <= uVar9) goto LAB_10031eae8;
LAB_10031ea70:
      uVar11 = uVar11 + 1 & uVar10;
    } while ((*(ulong *)(_Var1.unknown + (uVar11 >> 6) * 8) >> (uVar11 & 0x3f) & 1) != 0);
  }
  uVar10 = (ulong)param_1.offset >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(_Var1.unknown + uVar10) =
       *(ulong *)(_Var1.unknown + uVar10) & (-1L << (param_1.offset & 0x3fU)) - 1U;
  if (!SBORROW8(*(long *)(param_2 + 0x10),1)) {
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10031eba4);
  (*pcVar7)();
}



/* Address: 0x10031eba4 | thunk_FUN_10019fbf0 */

void thunk_FUN_10019fbf0(void)

{
  FUN_10019fbf0();
  return;
}



/* Address: 0x10031eba8 | FUN_10031eba8 */

undefined4 FUN_10031eba8(void)

{
  undefined4 uVar1;
  ID IVar2;
  ID unaff_x20;
  
  IVar2 = objc_stub::rawType(unaff_x20);
  uVar1 = (undefined4)IVar2;
  if (5 < IVar2) {
    uVar1 = 0;
  }
  return uVar1;
}



/* Address: 0x10031ebc8 | FUN_10031ebc8 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10031ebc8(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  Data DVar3;
  undefined1 *puVar4;
  undefined8 extraout_x1;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  ID unaff_x20;
  undefined1 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  puVar1 = &DAT_100fbf668;
  FUN_1000037f0(&DAT_100fbf668,&DAT_100c40d18);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &stack0xffffffffffffffa0 + -extraout_x8;
  lVar2 = 0;
  FUN_100314b8c();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar9 + 0x40));
  lVar7 = (long)puVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar8 = lVar7 - extraout_x12;
  DVar3.unknown = (undefined *)objc_stub::rawPreview(unaff_x20);
  if (DVar3.unknown == (undefined *)0x0) {
    (**(code **)(lVar9 + 0x38))(puVar5,1,1,lVar2);
  }
  else {
    uVar6 = extraout_x1;
    DVar3 = Foundation::Data::__unconditionallyBridgeFromObjectiveC(DVar3);
    FUN_100316490(puVar5,DVar3.unknown,uVar6);
    puVar4 = puVar5;
    (**(code **)(lVar9 + 0x30))(puVar5,1,lVar2);
    if ((int)puVar4 != 1) {
      FUN_1000523d8(puVar5,lVar8,FUN_100314b8c);
      FUN_1000c495c(lVar8,lVar7,FUN_100314b8c);
      FUN_100315a38(param_1,lVar7);
      FUN_10005241c(lVar8,FUN_100314b8c);
      uVar6 = 0;
      goto LAB_10031ed50;
    }
  }
  FUN_100005808(puVar5,&DAT_100fbf668,&DAT_100c40d18);
  uVar6 = 1;
LAB_10031ed50:
  lVar2 = 0;
  FUN_100317b10();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(param_1,uVar6,1,lVar2);
  return;
}



/* Address: 0x10031ed94 | FUN_10031ed94 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10031ed94(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  Data DVar4;
  ulong uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  ID unaff_x20;
  undefined *puVar6;
  NSData *pNVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  lVar2 = 0;
  FUN_100317b10();
  lVar11 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar11 + 0x40));
  puVar8 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar9 = (long)puVar8 - extraout_x12;
  puVar6 = &DAT_100fbe6e0;
  FUN_1000037f0(&DAT_100fbe6e0,&DAT_100c40980);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = lVar9 - extraout_x8_00;
  puVar6 = &DAT_100fbf668;
  FUN_1000037f0(&DAT_100fbf668,&DAT_100c40d18);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = (undefined *)(lVar10 - extraout_x8_01);
  FUN_100011090(param_1,lVar10,&DAT_100fbe6e0,&DAT_100c40980);
  lVar3 = lVar10;
  (**(code **)(lVar11 + 0x30))(lVar10,1,lVar2);
  bVar1 = (int)lVar3 == 1;
  if (!bVar1) {
    FUN_1000523d8(lVar10,lVar9,FUN_100317b10);
    FUN_1000c495c(lVar9,puVar8,FUN_100317b10);
    FUN_100316004(puVar6,puVar8);
    FUN_10005241c(lVar9,FUN_100317b10);
  }
  lVar3 = 0;
  FUN_100314b8c();
  lVar2 = *(long *)(lVar3 + -8);
  (**(code **)(lVar2 + 0x38))(puVar6,bVar1,1,lVar3);
  uVar5 = 1;
  DVar4.unknown = puVar6;
  (**(code **)(lVar2 + 0x30))(puVar6,1,lVar3);
  if ((int)DVar4.unknown == 1) {
    FUN_100005808(puVar6,&DAT_100fbf668,&DAT_100c40d18);
    pNVar7 = (NSData *)0x0;
  }
  else {
    FUN_1003168a8();
    FUN_10005241c(puVar6,FUN_100314b8c);
    if (uVar5 >> 0x3c < 0xf) {
      pNVar7 = Foundation::Data::_bridgeToObjectiveC(DVar4);
      FUN_10003bf18(DVar4.unknown,uVar5);
    }
    else {
      pNVar7 = (NSData *)0x0;
    }
  }
  objc_stub::setRawPreview_(unaff_x20,pNVar7);
  FUN_100005808(param_1,&DAT_100fbe6e0,&DAT_100c40980);
  return;
}



/* Address: 0x10031f000 | FUN_10031f000 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10031f000(void)

{
  ID IVar1;
  ID unaff_x20;
  
  IVar1 = objc_stub::data(unaff_x20);
  FUN_10031b218(IVar1);
  return IVar1;
}



/* Address: 0x10031f040 | FUN_10031f040 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

uint FUN_10031f040(void)

{
  ulong uVar1;
  uint uVar2;
  ID unaff_x20;
  
  uVar1 = objc_stub::list(unaff_x20);
  if (uVar1 == 0) {
    uVar2 = 1;
  }
  else {
    FUN_1003250f0();
    uVar2 = (uint)uVar1;
    if ((uVar1 & 1) == 0) {
      uVar2 = 1;
    }
    else {
      FUN_100328f38();
    }
  }
  return uVar2 & 1;
}



/* Address: 0x10031f09c | FUN_10031f09c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10031f09c(String *param_1,ID *param_2)

{
  ID IVar1;
  String SVar2;
  
  IVar1 = objc_stub::title(*param_2);
  if (IVar1 == 0) {
    SVar2 = (String)ZEXT816(0);
  }
  else {
    SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  *param_1 = SVar2;
  return 0;
}



/* Address: 0x10031f0fc | FUN_10031f0fc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10031f0fc(long param_1,ID *param_2)

{
  NSString *pNVar1;
  ID self;
  
  self = *param_2;
  if (*(long *)(param_1 + 8) == 0) {
    pNVar1 = (NSString *)0x0;
  }
  else {
    pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  }
  objc_stub::setTitle_(self,pNVar1);
  return 0;
}



/* Address: 0x10031f148 | FUN_10031f148 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10031f148(undefined8 param_1,ID *param_2)

{
  Date DVar1;
  Date DVar2;
  
  DVar1.unknown = (undefined *)objc_stub::timestamp(*param_2);
  if (DVar1.unknown != (undefined *)0x0) {
    Foundation::Date::__unconditionallyBridgeFromObjectiveC(DVar1);
  }
  DVar2 = Foundation::Date::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x00010031f1b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(DVar2.unknown + -8) + 0x38))
            (param_1,DVar1.unknown == (undefined *)0x0,1,DVar2.unknown);
  return;
}



/* Address: 0x10031f1b8 | FUN_10031f1b8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10031f1b8(undefined8 param_1,ID *param_2)

{
  undefined *puVar1;
  Date DVar2;
  Date DVar3;
  long extraout_x8;
  ID self;
  undefined1 *puVar4;
  NSDate *pNVar5;
  long lVar6;
  
  puVar1 = &DAT_100fbe6e8;
  FUN_1000037f0(&DAT_100fbe6e8,&DAT_100c43250);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffc0 + -extraout_x8;
  FUN_100011090(param_1,puVar4,&DAT_100fbe6e8,&DAT_100c43250);
  self = *param_2;
  DVar2 = Foundation::Date::typeMetadataAccessor();
  lVar6 = *(long *)(DVar2.unknown + -8);
  DVar3.unknown = puVar4;
  (**(code **)(lVar6 + 0x30))(puVar4,1,DVar2.unknown);
  pNVar5 = (NSDate *)0x0;
  if ((int)DVar3.unknown != 1) {
    pNVar5 = Foundation::Date::_bridgeToObjectiveC(DVar3);
    (**(code **)(lVar6 + 8))(puVar4,DVar2.unknown);
  }
  objc_stub::setTimestamp_(self,pNVar5);
  return 0;
}



/* Address: 0x10031f2a4 | _TtC9PasteCore10ItemEntity::defaultSortDescriptors */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC9PasteCore10ItemEntity::defaultSortDescriptors(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *self;
  NSString *pNVar2;
  ID IVar3;
  NSArray *pNVar4;
  
  puVar1 = &DAT_100fbe4e8;
  FUN_1000037f0(&DAT_100fbe4e8,&DAT_100c40a80);
  _swift_allocObject();
  *(undefined8 *)(puVar1 + 0x18) = 3;
  *(undefined8 *)(puVar1 + 0x10) = 1;
  self = &_OBJC_CLASS___NSSortDescriptor;
  _objc_allocWithZone();
  pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar3 = objc_stub::FUN_100c04440((ID)self,pNVar2,0);
  *(ID *)(puVar1 + 0x20) = IVar3;
  FUN_10000ec2c(0,&DAT_100fbeca0,&PTR__OBJC_CLASS___NSSortDescriptor_100f8db40);
  pNVar4 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_release(puVar1);
  return (ID)pNVar4;
}



/* Address: 0x10031f378 | FUN_10031f378 */

void FUN_10031f378(undefined8 param_1)

{
  undefined *puVar1;
  long extraout_x8;
  
  puVar1 = &DAT_100fbe6e0;
  FUN_1000037f0(&DAT_100fbe6e0,&DAT_100c40980);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100011090(param_1,&stack0xffffffffffffffc0 + -extraout_x8,&DAT_100fbe6e0,&DAT_100c40980);
  FUN_10031ed94(&stack0xffffffffffffffc0 + -extraout_x8);
  return;
}



/* Address: 0x10031f410 | FUN_10031f410 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

byte FUN_10031f410(void)

{
  bool bVar1;
  undefined8 uVar2;
  void *pvVar3;
  ID unaff_x20;
  undefined8 local_50;
  undefined8 uStack_48;
  String local_40;
  
  objc_stub::identifier(unaff_x20);
  local_40 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pvVar3 = local_40.bridgeObject;
  uVar2 = 0;
  local_50 = 0x696472616f626e6f;
  uStack_48 = 0xea0000000000676e;
  FUN_10030cce0(0);
  bVar1 = (extension_Foundation)::Swift::StringProtocol::_contains
                    (&local_50,PTR___type_metadata_for_Swift_String_100eac208,
                     PTR___type_metadata_for_Swift_String_100eac208,uVar2,uVar2);
  _swift_bridgeObjectRelease(pvVar3);
  return (bVar1 ^ 0xffU) & 1;
}



/* Address: 0x10031f4b8 | FUN_10031f4b8 */

undefined * FUN_10031f4b8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = &DAT_100fbef68;
  FUN_1000037f0(&DAT_100fbef68,&DAT_100c44740);
  _swift_initStaticObject();
  puVar2 = puVar1;
  FUN_1003c92b8();
  FUN_100005808(puVar1 + 0x20,&DAT_100fbef70,&DAT_100c40b10);
  return puVar2;
}



/* Address: 0x10031f518 | FUN_10031f518 */

undefined * FUN_10031f518(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar2 = &DAT_100fc1bf0;
  FUN_1000037f0(&DAT_100fc1bf0,&DAT_100c40ad0);
  puVar3 = puVar2;
  _swift_initStaticObject();
  puVar4 = puVar3;
  FUN_1002fc6c0();
  puVar1 = PTR___type_metadata_for_Swift_String_100eac208;
  _swift_arrayDestroy(puVar3 + 0x20,3,PTR___type_metadata_for_Swift_String_100eac208);
  _swift_initStaticObject(puVar2,&DAT_100fbfbb0);
  FUN_10036c298();
  _swift_arrayDestroy(puVar2 + 0x20,10,puVar1);
  return puVar4;
}



/* Address: 0x10031f5bc | FUN_10031f5bc */

undefined * FUN_10031f5bc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = &DAT_100fc1bf0;
  FUN_1000037f0(&DAT_100fc1bf0,&DAT_100c40ad0);
  puVar2 = puVar1;
  _swift_initStaticObject();
  puVar3 = puVar2;
  FUN_1002fc6c0();
  FUN_10000caac(puVar2 + 0x20);
  _swift_initStaticObject(puVar1,&DAT_100fbfad0);
  FUN_10036c298();
  _swift_arrayDestroy(puVar1 + 0x20,6,PTR___type_metadata_for_Swift_String_100eac208);
  return puVar3;
}



/* Address: 0x10031f654 | FUN_10031f654 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10031f654(ID param_1)

{
  char *pcVar1;
  CKRecordID *this;
  CKRecordZoneID *zoneID;
  CKRecordID *pCVar2;
  undefined *self;
  ID IVar3;
  void *extraout_x1;
  void *pvVar4;
  ID unaff_x20;
  long unaff_x21;
  String recordName;
  
  pcVar1 = (char *)objc_stub::list(unaff_x20);
  IVar3 = 0;
  if (pcVar1 != (char *)0x0) {
    pvVar4 = extraout_x1;
    FUN_1003b41b8();
    if (unaff_x21 == 0) {
      this = (CKRecordID *)0x0;
      FUN_10000ec2c(0,&DAT_100fbfa88,&PTR__OBJC_CLASS___CKRecordID_100f8db58);
      zoneID = (CKRecordZoneID *)objc_stub::zoneID(param_1);
      recordName.bridgeObject = pvVar4;
      recordName.str = pcVar1;
      pCVar2 = (extension_CloudKit)::__C::CKRecordID::__allocating_init(this,recordName,zoneID);
      self = &_OBJC_CLASS___CKReference;
      _objc_allocWithZone();
      IVar3 = objc_stub::initWithRecordID_action_((ID)self,pCVar2,0);
    }
    else {
      IVar3 = 0;
    }
  }
  return IVar3;
}



/* Address: 0x10031f748 | FUN_10031f748 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10031f748(long param_1,undefined1 *param_2,undefined8 param_3)

{
  bool bVar1;
  Data DVar2;
  undefined8 extraout_x1;
  undefined8 uVar3;
  ID unaff_x20;
  long unaff_x21;
  undefined1 auStack_70 [16];
  ID local_60;
  undefined *local_50;
  undefined8 uStack_48;
  
  if (param_1 != 0x6976657250776172 || param_2 != (undefined1 *)0xea00000000007765) {
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x6976657250776172,(_StringGuts)0xea00000000007765,
                       (_StringComparisonResult)(__int8)param_1);
    if (!bVar1) {
      if (((param_1 != 0x61746164) || (param_2 != &DAT_e400000000000000)) &&
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x61746164,(_StringGuts)0xe400000000000000,
                             (_StringComparisonResult)(__int8)param_1), !bVar1)) {
        FUN_1003b3d18(param_1,param_2,param_3);
        return;
      }
      local_60 = objc_stub::data(unaff_x20);
      FUN_1002ffc68(&local_50,FUN_1003216a4,auStack_70);
      if (unaff_x21 != 0) {
        return;
      }
      FUN_10000ec2c(0,&DAT_100fbee40,&PTR__OBJC_CLASS___CKAsset_100f8db48);
      goto LAB_10031f800;
    }
  }
  DVar2.unknown = (undefined *)objc_stub::rawPreview(unaff_x20);
  if (DVar2.unknown == (undefined *)0x0) {
    return;
  }
  uVar3 = extraout_x1;
  DVar2 = Foundation::Data::__unconditionallyBridgeFromObjectiveC(DVar2);
  FUN_10000ec2c(0,&DAT_100fbee40,&PTR__OBJC_CLASS___CKAsset_100f8db48);
  local_50 = DVar2.unknown;
  uStack_48 = uVar3;
LAB_10031f800:
  FUN_10038e594(local_50,uStack_48);
  return;
}



/* Address: 0x10031f8f0 | FUN_10031f8f0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x000100320094) */
/* WARNING: Removing unreachable block (ram,0x00010031fa80) */
/* WARNING: Removing unreachable block (ram,0x000100320268) */
/* WARNING: Removing unreachable block (ram,0x00010031fa94) */
/* WARNING: Removing unreachable block (ram,0x00010031fcd8) */
/* WARNING: Removing unreachable block (ram,0x000100320280) */
/* WARNING: Removing unreachable block (ram,0x00010031fce8) */

void FUN_10031f8f0(ID param_1,long param_2,undefined1 *param_3)

{
  code *pcVar1;
  bool bVar2;
  URL UVar3;
  URL UVar4;
  Data DVar5;
  Data DVar6;
  undefined *puVar7;
  Data *pDVar8;
  Data DVar9;
  NSData *pNVar10;
  ID IVar11;
  ID IVar12;
  uint uVar13;
  ulong uVar14;
  ulong extraout_x1;
  ulong uVar15;
  ulong extraout_x1_00;
  uint uVar16;
  long extraout_x8;
  long lVar17;
  long lVar18;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  ID unaff_x20;
  NSDataReadingOptions contentsOf;
  NSDataReadingOptions contentsOf_00;
  ID IVar19;
  long local_110;
  ID local_108;
  Data local_b0;
  ulong uStack_a8;
  ID local_a0 [2];
  ID local_90;
  
  local_108 = param_1;
  UVar3 = Foundation::URL::typeMetadataAccessor();
  local_110 = *(long *)(UVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_110 + 0x40));
  lVar17 = (long)&local_110 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  contentsOf_00.unknown = (undefined *)(lVar17 - extraout_x12);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  contentsOf.unknown =
       (undefined *)(((long)contentsOf_00.unknown - extraout_x12_00) - extraout_x12_01);
  if ((param_2 != 0x6976657250776172) || (param_3 != (undefined1 *)0xea00000000007765)) {
    bVar2 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x6976657250776172,(_StringGuts)0xea00000000007765,
                       (_StringComparisonResult)(__int8)param_2);
    if (!bVar2) {
      if (((param_2 != 0x61746164) || (param_3 != &DAT_e400000000000000)) &&
         (bVar2 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x61746164,(_StringGuts)0xe400000000000000,
                             (_StringComparisonResult)(__int8)param_2), !bVar2)) {
        FUN_1003b3f7c(local_108,param_2,param_3);
        return;
      }
      IVar19 = local_108;
      if (local_108 == 0) {
        return;
      }
      uVar13 = 0;
      IVar11 = local_108;
      _swift_dynamicCastObjCClass();
      if (IVar11 == 0) {
        return;
      }
      IVar12 = IVar19;
      _swift_unknownObjectRetain();
      FUN_10038e888();
      if ((((uVar13 & 0xff) == 1) || (0x40000000 < (long)IVar12)) ||
         (UVar4.unknown = (undefined *)objc_stub::fileURL(IVar11), UVar4.unknown == (undefined *)0x0
         )) goto LAB_10031fe88;
      Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar4);
      lVar18 = local_110;
      (**(code **)(local_110 + 0x20))(contentsOf_00.unknown,lVar17);
      uVar14 = 0;
      DVar5 = Foundation::Data::_init(contentsOf_00);
      (**(code **)(lVar18 + 8))(contentsOf_00.unknown,UVar3.unknown);
      uVar13 = (uint)(uVar14 >> 0x20);
      uVar16 = uVar13 >> 0x1e;
      if (uVar13 >> 0x1e < 2) {
        if (uVar16 != 0) {
          lVar17 = (long)(int)DVar5.unknown;
          lVar18 = (long)DVar5.unknown >> 0x20;
          goto LAB_100320044;
        }
        if ((uVar14 & 0xff000000000000) == 0) goto LAB_10032004c;
      }
      else {
        if (uVar16 != 2) goto LAB_10032004c;
        lVar17 = *(long *)(DVar5.unknown + 0x10);
        lVar18 = *(long *)(DVar5.unknown + 0x18);
LAB_100320044:
        if (lVar17 == lVar18) {
LAB_10032004c:
          _swift_unknownObjectRelease(IVar19);
          FUN_10003bf2c(DVar5.unknown,uVar14);
          return;
        }
      }
      local_90 = objc_stub::data(unaff_x20);
      FUN_1002ffc68(&local_b0,FUN_10031bc34,local_a0);
      uVar15 = uStack_a8;
      DVar6.unknown = local_b0.unknown;
      if (uStack_a8 >> 0x3c < 0xf) {
        if (uVar14 >> 0x3c < 0xf) {
          FUN_1001037b4(DVar5.unknown,uVar14);
          FUN_10011da54(local_b0.unknown,uStack_a8);
          FUN_10031b830(local_b0.unknown,uStack_a8,DVar5.unknown,uVar14);
          FUN_10003bf18(local_b0.unknown,uStack_a8);
          FUN_10003bf18(DVar5.unknown,uVar14);
          FUN_10003bf18(local_b0.unknown,uStack_a8);
          if (((ulong)DVar6.unknown & 1) != 0) {
            _swift_unknownObjectRelease(IVar19);
            FUN_10003bf2c(DVar5.unknown,uVar14);
            return;
          }
          goto LAB_100320118;
        }
      }
      else if (0xe < uVar14 >> 0x3c) {
        _swift_unknownObjectRelease(IVar19);
        goto LAB_10031fe50;
      }
      FUN_1001037b4(DVar5.unknown,uVar14);
      FUN_10003bf18(local_b0.unknown,uStack_a8);
      FUN_10003bf18(DVar5.unknown,uVar14);
LAB_100320118:
      IVar11 = objc_stub::data(unaff_x20);
      IVar12 = objc_stub::managedObjectContext(IVar11);
      objc_stub::deleteObject_(IVar12,IVar11);
      IVar11 = objc_stub::managedObjectContext(unaff_x20);
      if (IVar11 != 0) {
        IVar12 = 0;
        FUN_10031b5e4();
        _swift_getObjCClassFromMetadata();
        _objc_allocWithZone();
        IVar11 = objc_stub::initWithContext_(IVar12,IVar11);
        objc_stub::setData_(unaff_x20,IVar11);
        IVar11 = objc_stub::data(unaff_x20);
        pNVar10 = Foundation::Data::_bridgeToObjectiveC(DVar5);
        objc_stub::setRawPasteboardItems_(IVar11,pNVar10);
        _swift_unknownObjectRelease(IVar19);
        FUN_10003bf2c(DVar5.unknown,uVar14);
        return;
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10032029c);
      (*pcVar1)();
    }
  }
  IVar19 = local_108;
  if (local_108 == 0) {
    DVar5.unknown = (undefined *)objc_stub::rawPreview(unaff_x20);
    if (DVar5.unknown == (undefined *)0x0) {
      DVar6.unknown = (undefined *)0x0;
      uVar15 = 0xf000000000000000;
    }
    else {
      uVar15 = extraout_x1;
      DVar6 = Foundation::Data::__unconditionallyBridgeFromObjectiveC(DVar5);
      if (uVar15 >> 0x3c < 0xf) {
        FUN_10003bf18(DVar6.unknown,uVar15);
        FUN_10003bf18(0,0xf000000000000000);
        objc_stub::setRawPreview_(unaff_x20,0);
        return;
      }
    }
    goto LAB_10031fe50;
  }
  IVar11 = local_108;
  _swift_dynamicCastObjCClass(local_108,&_OBJC_CLASS___CKAsset);
  _swift_unknownObjectRetain(IVar19);
  if (IVar11 == 0) {
LAB_10031fde4:
    local_a0[0] = IVar19;
    _swift_unknownObjectRetain(IVar19);
    puVar7 = &DAT_100fbee30;
    FUN_1000037f0(&DAT_100fbee30,&DAT_100c43f90);
    pDVar8 = &local_b0;
    _swift_dynamicCast(pDVar8,local_a0,puVar7,PTR___type_metadata_for_Foundation_Data_100ea7300,6);
    if ((int)pDVar8 == 0) {
      uStack_a8 = 0xf000000000000000;
      local_b0.unknown = (undefined *)0x0;
    }
  }
  else {
    _swift_unknownObjectRetain(IVar19);
    UVar4.unknown = (undefined *)objc_stub::fileURL(IVar11);
    if (UVar4.unknown == (undefined *)0x0) {
      _swift_unknownObjectRelease(IVar19);
      goto LAB_10031fde4;
    }
    Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar4);
    lVar17 = local_110;
    (**(code **)(local_110 + 0x20))
              (contentsOf.unknown,(long)contentsOf_00.unknown - extraout_x12_00);
    uVar14 = 0;
    DVar5 = Foundation::Data::_init(contentsOf);
    _swift_unknownObjectRelease(IVar19);
    (**(code **)(lVar17 + 8))(contentsOf.unknown,UVar3.unknown);
    local_b0 = DVar5;
    uStack_a8 = uVar14;
  }
  uVar15 = uStack_a8;
  DVar6.unknown = local_b0.unknown;
  if (0xe < uStack_a8 >> 0x3c) {
LAB_10031fe88:
    _swift_unknownObjectRelease(IVar19);
    return;
  }
  DVar5.unknown = (undefined *)objc_stub::rawPreview(unaff_x20);
  if (DVar5.unknown == (undefined *)0x0) {
    DVar5.unknown = (undefined *)0x0;
    uVar14 = 0xf000000000000000;
  }
  else {
    uVar14 = extraout_x1_00;
    DVar5 = Foundation::Data::__unconditionallyBridgeFromObjectiveC(DVar5);
    if (uVar14 >> 0x3c < 0xf) {
      FUN_10011da54(DVar6.unknown,uVar15);
      FUN_10011da54(DVar5.unknown,uVar14);
      DVar9 = DVar5;
      FUN_10031b830(DVar5.unknown,uVar14,DVar6.unknown,uVar15);
      FUN_10003bf18(DVar5.unknown,uVar14);
      FUN_10003bf18(DVar6.unknown,uVar15);
      FUN_10003bf18(DVar5.unknown,uVar14);
      if (((ulong)DVar9.unknown & 1) != 0) {
        _swift_unknownObjectRelease(IVar19);
LAB_10031fe50:
        FUN_10003bf18(DVar6.unknown,uVar15);
        return;
      }
      goto LAB_10031ff68;
    }
  }
  FUN_10011da54(DVar6.unknown,uVar15);
  FUN_10003bf18(DVar5.unknown,uVar14);
  FUN_10003bf18(DVar6.unknown,uVar15);
LAB_10031ff68:
  pNVar10 = Foundation::Data::_bridgeToObjectiveC(DVar6);
  objc_stub::setRawPreview_(unaff_x20,pNVar10);
  _swift_unknownObjectRelease(IVar19);
  FUN_10003bf18(DVar6.unknown,uVar15);
  return;
}



/* Address: 0x10032029c | _TtC9PasteCore10ItemEntity::initWithEntity:insertIntoManagedObjectContext: */

/* Function Stack Size: 0x20 bytes */

ID _TtC9PasteCore10ItemEntity::initWithEntity_insertIntoManagedObjectContext_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  class_t *pcVar1;
  ID IVar2;
  objc_super local_40;
  
  pcVar1 = (class_t *)param_1;
  _swift_getObjectType();
  local_40.receiver = param_1;
  local_40.super_class = pcVar1;
  IVar2 = _objc_msgSendSuper2(&local_40,"initWithEntity:insertIntoManagedObjectContext:",param_3,
                              param_4);
  return IVar2;
}



/* Address: 0x1003202f0 | FUN_1003202f0 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_1003202f0(void)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  _CocoaArrayWrapper _Var3;
  Encoding data;
  code *pcVar4;
  Encoding EVar5;
  ID IVar6;
  _ArrayBuffer _Var7;
  ulong uVar8;
  undefined *puVar9;
  UTType UVar10;
  UTType UVar11;
  undefined *puVar12;
  URL UVar13;
  Data DVar14;
  NSData *pNVar15;
  undefined *puVar16;
  undefined *extraout_x1;
  void *pvVar17;
  undefined *extraout_x1_00;
  _ArrayBuffer _Var18;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long lVar19;
  ID unaff_x20;
  long lVar20;
  undefined1 *puVar21;
  long lVar22;
  ulong uVar23;
  undefined *puVar24;
  long lVar25;
  long lVar26;
  String SVar27;
  undefined1 auStack_f0 [8];
  long local_e8;
  undefined1 *local_e0;
  undefined *local_d8;
  undefined *local_d0;
  ulong local_c8;
  ulong local_c0;
  undefined *local_b8;
  undefined1 *local_b0;
  undefined *local_a8;
  ID local_a0;
  undefined *puStack_98;
  undefined *local_88;
  undefined1 auStack_80 [32];
  
  EVar5 = Encoding::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(EVar5.unknown + -8) + 0x40));
  puVar21 = auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_e0 = puVar21;
  local_b8 = (undefined *)UniformTypeIdentifiers::UTType::typeMetadataAccessor();
  lVar22 = *(long *)(local_b8 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar22 + 0x40));
  puVar9 = &DAT_100fc1a40;
  local_b0 = puVar21 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_1000037f0(&DAT_100fc1a40,&DAT_100c40660);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar9 + -8) + 0x40));
  lVar26 = (long)(puVar21 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar20 = lVar26 - extraout_x12;
  IVar6 = objc_stub::rawType(unaff_x20);
  local_a8 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if ((long)IVar6 < 3) {
    if (IVar6 == 1) {
      _Var7.unknown = (undefined *)objc_stub::data(unaff_x20);
      _Var18.unknown = extraout_x1_00;
      FUN_10031b218();
      if ((ulong)_Var7.unknown >> 0x3e == 0) {
        puVar21 = *(undefined1 **)(((ulong)_Var7.unknown & 0xffffffffffffff8) + 0x10);
      }
      else {
        _Var3.unknown = _Var7.unknown & 0xffffffffffffff8;
        if ((undefined *)0x7fffffffffffffff < _Var7.unknown) {
          _Var3.unknown = _Var7.unknown;
        }
        puVar21 = (undefined1 *)Swift::_CocoaArrayWrapper::get_endIndex(_Var3);
      }
      puVar9 = local_d8;
      if (puVar21 != (undefined1 *)0x0) {
        puVar9 = (undefined *)0x0;
        local_b0 = puVar21;
        local_a8 = PTR___swiftEmptyArrayStorage_100eae0d8;
        do {
          if (((ulong)_Var7.unknown & 0xc000000000000001) == 0) {
            if (*(undefined **)(((ulong)_Var7.unknown & 0xffffffffffffff8) + 0x10) <= puVar9) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x100320c1c);
              (*pcVar4)();
            }
                    /* WARNING: Load size is inaccurate */
            DVar14.unknown = _Var7.unknown[(long)puVar9 * 8 + 0x20];
          }
          else {
            DVar14.unknown = puVar9;
            _Var18.unknown = _Var7.unknown;
            Swift::_ArrayBuffer::__getElementSlowPath((__int64)puVar9,_Var7);
          }
          puVar1 = puVar9 + 1;
          if (SCARRY8((long)puVar9,1)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100320c10);
            (*pcVar4)();
          }
          FUN_10037d5c4();
          if ((ulong)_Var18.unknown >> 0x3c < 0xf) {
            puVar16 = &_OBJC_CLASS___NSImage;
            _objc_allocWithZone();
            FUN_1001037b4(DVar14.unknown,_Var18.unknown);
            pNVar15 = Foundation::Data::_bridgeToObjectiveC(DVar14);
            IVar6 = objc_stub::initWithData_((ID)puVar16,pNVar15);
            FUN_10003bf18(DVar14.unknown,_Var18.unknown);
            puVar21 = local_b0;
            FUN_10003bf18(DVar14.unknown);
            if (IVar6 != 0) {
              puVar16 = (undefined *)0x0;
              FUN_10000ec2c(0,&DAT_100fbe960,&PTR__OBJC_CLASS___NSImage_100f8d6b8);
              local_a0 = IVar6;
              local_88 = puVar16;
              FUN_100011080(&local_a0,auStack_80);
              puVar16 = local_a8;
              _swift_isUniquelyReferenced_nonNull_native();
              if (((ulong)puVar16 & 1) == 0) {
                puVar16 = (undefined *)0x0;
                FUN_10037fe0c(0,*(long *)(local_a8 + 0x10) + 1,1);
                local_a8 = puVar16;
              }
              uVar23 = *(ulong *)(local_a8 + 0x10);
              if (*(ulong *)(local_a8 + 0x18) >> 1 <= uVar23) {
                puVar16 = (undefined *)(ulong)(1 < *(ulong *)(local_a8 + 0x18));
                FUN_10037fe0c(puVar16,uVar23 + 1,1,local_a8);
                local_a8 = puVar16;
              }
              *(ulong *)(local_a8 + 0x10) = uVar23 + 1;
              _Var18.unknown = local_a8 + uVar23 * 0x20 + 0x20;
              FUN_100011080(auStack_80);
            }
          }
          puVar9 = puVar9 + 1;
        } while (puVar1 != puVar21);
        goto LAB_100320c94;
      }
    }
    else {
      if (IVar6 != 2) {
        return PTR___swiftEmptyArrayStorage_100eae0d8;
      }
LAB_100320428:
      _Var7.unknown = (undefined *)objc_stub::data(unaff_x20);
      _Var18.unknown = extraout_x1;
      FUN_10031b218();
      if ((ulong)_Var7.unknown >> 0x3e == 0) {
        lVar22 = *(long *)(((ulong)_Var7.unknown & 0xffffffffffffff8) + 0x10);
        puVar16 = PTR___type_metadata_for_Swift_String_100eac208;
      }
      else {
        _Var3.unknown = _Var7.unknown & 0xffffffffffffff8;
        if ((undefined *)0x7fffffffffffffff < _Var7.unknown) {
          _Var3.unknown = _Var7.unknown;
        }
        lVar22 = Swift::_CocoaArrayWrapper::get_endIndex(_Var3);
        puVar16 = PTR___type_metadata_for_Swift_String_100eac208;
      }
      PTR___type_metadata_for_Swift_String_100eac208 = puVar16;
      puVar9 = local_d8;
      if (lVar22 != 0) {
        uVar23 = 0;
        local_a8 = PTR___swiftEmptyArrayStorage_100eae0d8;
        do {
          if (((ulong)_Var7.unknown & 0xc000000000000001) == 0) {
            if (*(ulong *)(((ulong)_Var7.unknown & 0xffffffffffffff8) + 0x10) <= uVar23) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x100320c04);
              (*pcVar4)();
            }
            uVar8 = *(ulong *)(_Var7.unknown + uVar23 * 8 + 0x20);
          }
          else {
            uVar8 = uVar23;
            _Var18.unknown = _Var7.unknown;
            Swift::_ArrayBuffer::__getElementSlowPath(uVar23,_Var7);
          }
          lVar20 = uVar23 + 1;
          if (SCARRY8(uVar23,1)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100320c00);
            (*pcVar4)();
          }
          FUN_10037c9a8();
          if (_Var18.unknown != (undefined *)0x0) {
            local_a0 = uVar8;
            puStack_98 = _Var18.unknown;
            local_88 = puVar16;
            FUN_100011080(&local_a0,auStack_80);
            puVar9 = local_a8;
            _swift_isUniquelyReferenced_nonNull_native();
            if (((ulong)puVar9 & 1) == 0) {
              puVar9 = (undefined *)0x0;
              FUN_10037fe0c(0,*(long *)(local_a8 + 0x10) + 1,1);
              local_a8 = puVar9;
            }
            uVar8 = *(ulong *)(local_a8 + 0x10);
            if (*(ulong *)(local_a8 + 0x18) >> 1 <= uVar8) {
              puVar9 = (undefined *)(ulong)(1 < *(ulong *)(local_a8 + 0x18));
              FUN_10037fe0c(puVar9,uVar8 + 1,1,local_a8);
              local_a8 = puVar9;
            }
            *(ulong *)(local_a8 + 0x10) = uVar8 + 1;
            _Var18.unknown = local_a8 + uVar8 * 0x20 + 0x20;
            FUN_100011080(auStack_80);
          }
          uVar23 = uVar23 + 1;
        } while (lVar20 != lVar22);
        goto LAB_100320c94;
      }
    }
  }
  else if (IVar6 == 3) {
    _Var7.unknown = (undefined *)objc_stub::data(unaff_x20);
    FUN_10031b218();
    if ((ulong)_Var7.unknown >> 0x3e == 0) {
      puVar16 = *(undefined **)(((ulong)_Var7.unknown & 0xffffffffffffff8) + 0x10);
      puVar9 = local_d8;
    }
    else {
      _Var3.unknown = _Var7.unknown & 0xffffffffffffff8;
      if ((undefined *)0x7fffffffffffffff < _Var7.unknown) {
        _Var3.unknown = _Var7.unknown;
      }
      puVar16 = (undefined *)Swift::_CocoaArrayWrapper::get_endIndex(_Var3);
      puVar9 = local_d8;
    }
    local_d8 = puVar16;
    if (local_d8 != (undefined *)0x0) {
      puVar9 = (undefined *)0x0;
      local_c0 = (ulong)_Var7.unknown & 0xc000000000000001;
      local_c8 = (ulong)_Var7.unknown & 0xffffffffffffff8;
      local_e8 = lVar22;
      local_d0 = _Var7.unknown;
      local_a8 = PTR___swiftEmptyArrayStorage_100eae0d8;
      do {
        if (local_c0 == 0) {
          if (*(undefined **)(local_c8 + 0x10) <= puVar9) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100320c14);
            (*pcVar4)();
          }
                    /* WARNING: Load size is inaccurate */
          UVar10.unknown = _Var7.unknown[(long)puVar9 * 8 + 0x20];
        }
        else {
          UVar10.unknown = puVar9;
          Swift::_ArrayBuffer::__getElementSlowPath((__int64)puVar9,_Var7);
        }
        puVar21 = local_b0;
        puVar16 = puVar9 + 1;
        if (SCARRY8((long)puVar9,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100320c08);
          (*pcVar4)();
        }
        UVar11 = UniformTypeIdentifiers::UTType::get_fileURL(UVar10);
        SVar27 = UniformTypeIdentifiers::UTType::get_identifier(UVar11);
        pvVar17 = SVar27.bridgeObject;
        (**(code **)(lVar22 + 8))(puVar21,local_b8);
        lVar26 = _TtC9PasteCore14PasteboardItem::dataByType;
        _swift_beginAccess(UVar10.unknown + _TtC9PasteCore14PasteboardItem::dataByType,auStack_80,
                           0x20,0);
                    /* WARNING: Load size is inaccurate */
        EVar5.unknown = UVar10.unknown[lVar26];
        if (*(long *)(EVar5.unknown + 0x10) == 0) {
LAB_1003205f0:
          _swift_endAccess(auStack_80);
          _swift_bridgeObjectRelease(pvVar17);
LAB_100320600:
          UVar13 = Foundation::URL::typeMetadataAccessor();
          (**(code **)(*(long *)(UVar13.unknown + -8) + 0x38))(lVar20,1,1,UVar13.unknown);
LAB_100320630:
          puVar24 = local_d8;
          FUN_100005808(lVar20,&DAT_100fc1a40,&DAT_100c40660);
          _Var7.unknown = local_d0;
        }
        else {
          _swift_bridgeObjectRetain(EVar5.unknown);
          FUN_100071370();
          if (((ulong)SVar27.bridgeObject & 1) == 0) {
            _swift_bridgeObjectRelease(EVar5.unknown);
            goto LAB_1003205f0;
          }
          puVar2 = (undefined8 *)(*(long *)(EVar5.unknown + 0x38) + (long)SVar27.str * 0x10);
          data.unknown = (undefined *)*puVar2;
          lVar26 = puVar2[1];
          FUN_1001037b4(data.unknown,lVar26);
          _swift_endAccess(auStack_80);
          _swift_bridgeObjectRelease();
          Encoding::_get_utf8(EVar5);
          lVar19 = lVar26;
          (extension_Foundation)::Swift::String::_init(data);
          _swift_bridgeObjectRelease(pvVar17);
          lVar22 = local_e8;
          FUN_10003bf2c(data.unknown,lVar26);
          if (lVar19 == 0) goto LAB_100320600;
          Foundation::URL::_init();
          _swift_bridgeObjectRelease(lVar19);
          UVar13 = Foundation::URL::typeMetadataAccessor();
          lVar19 = *(long *)(UVar13.unknown + -8);
          lVar26 = lVar20;
          (**(code **)(lVar19 + 0x30))(lVar20,1,UVar13.unknown);
          if ((int)lVar26 == 1) goto LAB_100320630;
          local_88 = UVar13.unknown;
          FUN_10000cbb0(&local_a0);
          (**(code **)(lVar19 + 0x20))();
          FUN_100011080(&local_a0,auStack_80);
          puVar12 = local_a8;
          _swift_isUniquelyReferenced_nonNull_native();
          puVar24 = local_d8;
          if (((ulong)puVar12 & 1) == 0) {
            puVar12 = (undefined *)0x0;
            FUN_10037fe0c(0,*(long *)(local_a8 + 0x10) + 1,1);
            local_a8 = puVar12;
          }
          _Var7.unknown = local_d0;
          uVar23 = *(ulong *)(local_a8 + 0x10);
          if (*(ulong *)(local_a8 + 0x18) >> 1 <= uVar23) {
            puVar12 = (undefined *)(ulong)(1 < *(ulong *)(local_a8 + 0x18));
            FUN_10037fe0c(puVar12,uVar23 + 1,1,local_a8);
            local_a8 = puVar12;
          }
          *(ulong *)(local_a8 + 0x10) = uVar23 + 1;
          FUN_100011080(auStack_80,local_a8 + uVar23 * 0x20 + 0x20);
        }
        puVar9 = puVar9 + 1;
      } while (puVar16 != puVar24);
      goto LAB_100320c94;
    }
  }
  else {
    if (IVar6 != 4) {
      if (IVar6 != 5) {
        return PTR___swiftEmptyArrayStorage_100eae0d8;
      }
      goto LAB_100320428;
    }
    _Var7.unknown = (undefined *)objc_stub::data(unaff_x20);
    FUN_10031b218();
    if ((ulong)_Var7.unknown >> 0x3e == 0) {
      lVar22 = *(long *)(((ulong)_Var7.unknown & 0xffffffffffffff8) + 0x10);
    }
    else {
      _Var3.unknown = _Var7.unknown & 0xffffffffffffff8;
      if ((undefined *)0x7fffffffffffffff < _Var7.unknown) {
        _Var3.unknown = _Var7.unknown;
      }
      lVar22 = Swift::_CocoaArrayWrapper::get_endIndex(_Var3);
    }
    puVar9 = local_d8;
    if (lVar22 != 0) {
      uVar23 = 0;
      local_a8 = PTR___swiftEmptyArrayStorage_100eae0d8;
      do {
        if (((ulong)_Var7.unknown & 0xc000000000000001) == 0) {
          if (*(ulong *)(((ulong)_Var7.unknown & 0xffffffffffffff8) + 0x10) <= uVar23) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100320c18);
            (*pcVar4)();
          }
        }
        else {
          Swift::_ArrayBuffer::__getElementSlowPath(uVar23,_Var7);
        }
        lVar20 = uVar23 + 1;
        if (SCARRY8(uVar23,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100320c0c);
          (*pcVar4)();
        }
        FUN_10037ce0c(lVar26);
        UVar13 = Foundation::URL::typeMetadataAccessor();
        lVar25 = *(long *)(UVar13.unknown + -8);
        lVar19 = lVar26;
        (**(code **)(lVar25 + 0x30))(lVar26,1,UVar13.unknown);
        if ((int)lVar19 == 1) {
          FUN_100005808(lVar26,&DAT_100fc1a40,&DAT_100c40660);
        }
        else {
          local_88 = UVar13.unknown;
          FUN_10000cbb0(&local_a0);
          (**(code **)(lVar25 + 0x20))();
          FUN_100011080(&local_a0,auStack_80);
          puVar9 = local_a8;
          _swift_isUniquelyReferenced_nonNull_native();
          if (((ulong)puVar9 & 1) == 0) {
            puVar9 = (undefined *)0x0;
            FUN_10037fe0c(0,*(long *)(local_a8 + 0x10) + 1,1);
            local_a8 = puVar9;
          }
          uVar8 = *(ulong *)(local_a8 + 0x10);
          if (*(ulong *)(local_a8 + 0x18) >> 1 <= uVar8) {
            puVar9 = (undefined *)(ulong)(1 < *(ulong *)(local_a8 + 0x18));
            FUN_10037fe0c(puVar9,uVar8 + 1,1,local_a8);
            local_a8 = puVar9;
          }
          *(ulong *)(local_a8 + 0x10) = uVar8 + 1;
          FUN_100011080(auStack_80,local_a8 + uVar8 * 0x20 + 0x20);
        }
        uVar23 = uVar23 + 1;
      } while (lVar20 != lVar22);
      goto LAB_100320c94;
    }
  }
  local_d8 = puVar9;
  local_a8 = PTR___swiftEmptyArrayStorage_100eae0d8;
LAB_100320c94:
  _swift_bridgeObjectRelease(_Var7.unknown);
  return local_a8;
}



/* Address: 0x100320cc0 | FUN_100320cc0 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x0001003211e8) */

bool FUN_100320cc0(void)

{
  undefined8 *puVar1;
  _CocoaArrayWrapper _Var2;
  Encoding data;
  ulong uVar3;
  bool bVar4;
  Encoding EVar5;
  URL UVar6;
  ID IVar7;
  long lVar8;
  _ArrayBuffer _Var9;
  undefined *puVar10;
  UTType UVar11;
  UTType UVar12;
  URL UVar13;
  void *pvVar14;
  long lVar15;
  long extraout_x8;
  long extraout_x8_00;
  long lVar16;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x12;
  undefined *puVar17;
  ID unaff_x20;
  code *pcVar18;
  long lVar19;
  long lVar20;
  undefined *puVar21;
  String SVar22;
  undefined *local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  undefined *local_c0;
  long local_b8;
  undefined *local_b0;
  undefined *local_a8;
  ulong local_a0;
  ulong local_98;
  undefined *local_90;
  long local_88;
  undefined1 auStack_78 [24];
  undefined7 extraout_var;
  
  EVar5 = Encoding::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(EVar5.unknown + -8) + 0x40));
  lVar16 = (long)&local_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_b8 = lVar16;
  local_90 = (undefined *)UniformTypeIdentifiers::UTType::typeMetadataAccessor();
  lVar19 = *(long *)(local_90 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar19 + 0x40));
  lVar16 = lVar16 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar17 = &DAT_100fc1a40;
  local_88 = lVar16;
  FUN_1000037f0(&DAT_100fc1a40,&DAT_100c40660);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar17 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = lVar16 - extraout_x8_01;
  UVar6 = Foundation::URL::typeMetadataAccessor();
  lVar20 = *(long *)(UVar6.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar20 + 0x40));
  puVar17 = (undefined *)(lVar16 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  IVar7 = objc_stub::rawType(unaff_x20);
  lVar8 = 0;
  if (5 < IVar7) {
    return false;
  }
  if ((1L << (IVar7 & 0x3f) & 0x36U) != 0) {
    FUN_1003202f0();
    lVar19 = *(long *)(lVar8 + 0x10);
    _swift_bridgeObjectRelease();
    return lVar19 != 0;
  }
  if (IVar7 != 3) {
    return false;
  }
  _Var9.unknown = (undefined *)objc_stub::data(unaff_x20);
  FUN_10031b218();
  if ((ulong)_Var9.unknown >> 0x3e == 0) {
    puVar10 = *(undefined **)(((ulong)_Var9.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var2.unknown = _Var9.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < _Var9.unknown) {
      _Var2.unknown = _Var9.unknown;
    }
    puVar10 = (undefined *)Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
  }
  local_e0 = puVar17;
  local_c0 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (puVar10 != (undefined *)0x0) {
    puVar21 = (undefined *)0x0;
    local_98 = (ulong)_Var9.unknown & 0xc000000000000001;
    local_a0 = (ulong)_Var9.unknown & 0xffffffffffffff8;
    local_d8 = (long)puVar17 - extraout_x12;
    local_d0 = lVar19;
    local_c8 = lVar20;
    local_b0 = _Var9.unknown;
    local_a8 = puVar10;
    do {
      if (local_98 == 0) {
        if (*(undefined **)(local_a0 + 0x10) <= puVar21) {
                    /* WARNING: Does not return */
          pcVar18 = (code *)SoftwareBreakpoint(1,0x10032112c);
          (*pcVar18)();
        }
                    /* WARNING: Load size is inaccurate */
        UVar11.unknown = _Var9.unknown[(long)puVar21 * 8 + 0x20];
      }
      else {
        UVar11.unknown = puVar21;
        Swift::_ArrayBuffer::__getElementSlowPath((__int64)puVar21,_Var9);
      }
      lVar8 = local_88;
      puVar17 = puVar21 + 1;
      if (SCARRY8((long)puVar21,1)) {
                    /* WARNING: Does not return */
        pcVar18 = (code *)SoftwareBreakpoint(1,0x100321128);
        (*pcVar18)();
      }
      UVar12 = UniformTypeIdentifiers::UTType::get_fileURL(UVar11);
      SVar22 = UniformTypeIdentifiers::UTType::get_identifier(UVar12);
      pvVar14 = SVar22.bridgeObject;
      (**(code **)(lVar19 + 8))(lVar8,local_90);
      lVar8 = _TtC9PasteCore14PasteboardItem::dataByType;
      _swift_beginAccess(UVar11.unknown + _TtC9PasteCore14PasteboardItem::dataByType,auStack_78,0x20
                         ,0);
                    /* WARNING: Load size is inaccurate */
      EVar5.unknown = UVar11.unknown[lVar8];
      if (*(long *)(EVar5.unknown + 0x10) == 0) {
LAB_100320ec0:
        _swift_endAccess(auStack_78);
        _swift_bridgeObjectRelease(pvVar14);
LAB_100320ed0:
        (**(code **)(lVar20 + 0x38))(lVar16,1,1,UVar6.unknown);
LAB_100320ef4:
        FUN_100005808(lVar16,&DAT_100fc1a40,&DAT_100c40660);
        _Var9.unknown = local_b0;
      }
      else {
        _swift_bridgeObjectRetain(EVar5.unknown);
        FUN_100071370();
        if (((ulong)SVar22.bridgeObject & 1) == 0) {
          _swift_bridgeObjectRelease(EVar5.unknown);
          goto LAB_100320ec0;
        }
        puVar1 = (undefined8 *)(*(long *)(EVar5.unknown + 0x38) + (long)SVar22.str * 0x10);
        data.unknown = (undefined *)*puVar1;
        lVar8 = puVar1[1];
        FUN_1001037b4(data.unknown,lVar8);
        _swift_endAccess(auStack_78);
        _swift_bridgeObjectRelease();
        Encoding::_get_utf8(EVar5);
        lVar15 = lVar8;
        (extension_Foundation)::Swift::String::_init(data);
        _swift_bridgeObjectRelease(pvVar14);
        lVar20 = local_c8;
        lVar19 = local_d0;
        FUN_10003bf2c(data.unknown,lVar8);
        if (lVar15 == 0) goto LAB_100320ed0;
        Foundation::URL::_init();
        _swift_bridgeObjectRelease(lVar15);
        lVar8 = lVar16;
        (**(code **)(lVar20 + 0x30))(lVar16,1,UVar6.unknown);
        if ((int)lVar8 == 1) goto LAB_100320ef4;
        pcVar18 = *(code **)(lVar20 + 0x20);
        (*pcVar18)(local_d8,lVar16,UVar6.unknown);
        puVar10 = local_c0;
        _swift_isUniquelyReferenced_nonNull_native();
        _Var9.unknown = local_b0;
        if (((ulong)puVar10 & 1) == 0) {
          puVar10 = (undefined *)0x0;
          FUN_10037fb74(0,*(long *)(local_c0 + 0x10) + 1,1);
          local_c0 = puVar10;
        }
        uVar3 = *(ulong *)(local_c0 + 0x10);
        if (*(ulong *)(local_c0 + 0x18) >> 1 <= uVar3) {
          puVar10 = (undefined *)(ulong)(1 < *(ulong *)(local_c0 + 0x18));
          FUN_10037fb74(puVar10,uVar3 + 1,1,local_c0);
          local_c0 = puVar10;
        }
        *(ulong *)(local_c0 + 0x10) = uVar3 + 1;
        (*pcVar18)(local_c0 +
                   *(long *)(lVar20 + 0x48) * uVar3 +
                   ((ulong)*(byte *)(lVar20 + 0x50) + 0x20 &
                   ((ulong)*(byte *)(lVar20 + 0x50) ^ 0xffffffffffffffff)),local_d8,UVar6.unknown);
      }
      puVar21 = puVar21 + 1;
    } while (puVar17 != local_a8);
  }
  _swift_bridgeObjectRelease(_Var9.unknown);
  puVar10 = local_c0;
  puVar17 = local_e0;
  if (*(long *)(local_c0 + 0x10) != 0) {
    puVar21 = local_c0 +
              ((ulong)*(byte *)(lVar20 + 0x50) + 0x20 &
              ((ulong)*(byte *)(lVar20 + 0x50) ^ 0xffffffffffffffff));
    lVar8 = *(long *)(lVar20 + 0x48);
    pcVar18 = *(code **)(lVar20 + 0x10);
    lVar19 = *(long *)(local_c0 + 0x10) + 1;
    do {
      lVar19 = lVar19 + -1;
      if (lVar19 == 0) {
        _swift_bridgeObjectRelease(puVar10);
        return true;
      }
      UVar13.unknown = puVar17;
      (*pcVar18)(puVar17,puVar21,UVar6.unknown);
      UVar13.unknown._0_1_ = Foundation::URL::get_isFileURL(UVar13);
      UVar13.unknown._1_7_ = extraout_var;
      if (!UVar13.unknown._0_1_) {
        (**(code **)(lVar20 + 8))(puVar17,UVar6.unknown);
        break;
      }
      bVar4 = Foundation::URL::_checkResourceIsReachable(UVar13);
      puVar21 = puVar21 + lVar8;
      (**(code **)(lVar20 + 8))(puVar17,UVar6.unknown);
    } while (bVar4);
  }
  _swift_bridgeObjectRelease(puVar10);
  return false;
}



/* Address: 0x100321210 | FUN_100321210 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100321210(void)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  undefined1 *puVar5;
  ID unaff_x20;
  undefined8 uVar6;
  
  puVar1 = &DAT_100fbfa58;
  FUN_1000037f0(&DAT_100fbfa58,&DAT_100c44ed0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &stack0xffffffffffffffd0 + -extraout_x8;
  uVar2 = objc_stub::list(unaff_x20);
  if (uVar2 == 0) {
    return 0;
  }
  FUN_1003250f0();
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  FUN_1003b4444();
  if (uVar2 == 0) {
    lVar3 = 0;
    FUN_100325588();
    (**(code **)(*(long *)(lVar3 + -8) + 0x38))(puVar5,1,1,lVar3);
  }
  else {
    FUN_10032670c(puVar5);
    lVar3 = 0;
    FUN_100325588();
    uVar6 = 1;
    puVar4 = puVar5;
    (**(code **)(*(long *)(lVar3 + -8) + 0x30))(puVar5,1,lVar3);
    if ((int)puVar4 != 1) goto LAB_100321314;
  }
  uVar6 = 0;
LAB_100321314:
  FUN_100005808(puVar5,&DAT_100fbfa58,&DAT_100c44ed0);
  return uVar6;
}



/* Address: 0x100321344 | thunk_FUN_1003120dc */

void thunk_FUN_1003120dc(void)

{
  FUN_1003120dc();
  return;
}



/* Address: 0x100321348 | FUN_100321348 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100321348(undefined8 param_1,ID *param_2)

{
  NSString *pNVar1;
  ID self;
  
  self = *param_2;
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  objc_stub::setIdentifier_(self,pNVar1);
  return 0;
}



/* Address: 0x100321388 | FUN_100321388 */

char * FUN_100321388(void)

{
  return "title";
}



/* Address: 0x100321394 | thunk_FUN_10031f09c */

void thunk_FUN_10031f09c(void)

{
  FUN_10031f09c();
  return;
}



/* Address: 0x100321398 | thunk_FUN_10031f0fc */

void thunk_FUN_10031f0fc(void)

{
  FUN_10031f0fc();
  return;
}



/* Address: 0x10032139c | FUN_10032139c */

char * FUN_10032139c(void)

{
  return "timestamp";
}



/* Address: 0x1003213a8 | thunk_FUN_10031f148 */

void thunk_FUN_10031f148(void)

{
  FUN_10031f148();
  return;
}



/* Address: 0x1003213ac | thunk_FUN_10031f1b8 */

void thunk_FUN_10031f1b8(void)

{
  FUN_10031f1b8();
  return;
}



/* Address: 0x1003213b0 | FUN_1003213b0 */

char * FUN_1003213b0(void)

{
  return "sourceApplication";
}



/* Address: 0x1003213bc | FUN_1003213bc */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_1003213bc(ID *param_1,ID *param_2)

{
  ID IVar1;
  
  IVar1 = objc_stub::sourceApplication(*param_2);
  *param_1 = IVar1;
  return;
}



/* Address: 0x1003213ec | FUN_1003213ec */

void FUN_1003213ec(undefined8 *param_1,ID *param_2)

{
  objc_stub::setSourceApplication_(*param_2,*param_1);
  return;
}



/* Address: 0x1003213f8 | FUN_1003213f8 */

char * FUN_1003213f8(void)

{
  return "device";
}



/* Address: 0x100321404 | FUN_100321404 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100321404(ID *param_1,ID *param_2)

{
  ID IVar1;
  
  IVar1 = objc_stub::device(*param_2);
  *param_1 = IVar1;
  return;
}


