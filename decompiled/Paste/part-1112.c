/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100ba86b8 | FUN_100ba86b8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100ba86b8(char *param_1,char *param_2)

{
  _CocoaArrayWrapper _Var1;
  code *pcVar2;
  ID self;
  undefined *self_00;
  ID IVar3;
  char *pcVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  
  pcVar4 = param_2;
  if ((ulong)param_1 >> 0x3e == 0) {
    lVar6 = *(long *)(((ulong)param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if ((long)param_1 < 0) {
      _Var1.unknown = param_1;
    }
    lVar6 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (lVar6 != 0) {
    _swift_bridgeObjectRetain(param_1);
    lVar8 = 4;
    while( true ) {
      if (((ulong)param_1 & 0xc000000000000001) == 0) {
        self = *(ID *)(param_1 + lVar8 * 8);
      }
      else {
        self = lVar8 - 4U;
        pcVar4 = param_1;
        FUN_100b6d718();
      }
      if (SCARRY8(lVar8 - 4U,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100ba87f0);
        (*pcVar2)();
      }
      IVar3 = self;
      FUN_100b862d8(self);
      uVar7 = (uint)IVar3;
      if (pcVar4 == (char *)0x0) {
        self_00 = &_OBJC_CLASS___NSNumber;
        _objc_allocWithZone();
        uVar5 = 1;
      }
      else {
        if (param_2 == (char *)0x0) {
          uVar7 = 0;
        }
        else {
          FUN_100ba7e44();
        }
        _swift_bridgeObjectRelease(pcVar4);
        self_00 = &_OBJC_CLASS___NSNumber;
        _objc_allocWithZone();
        uVar5 = (ulong)(uVar7 & 1);
      }
      IVar3 = _objc_msgSend((ID)self_00,"initWithBool:",uVar5);
      pcVar4 = "setInApp:";
      _objc_msgSend(self,"setInApp:",IVar3);
      if (lVar8 + -3 == lVar6) break;
      lVar8 = lVar8 + 1;
    }
    _swift_bridgeObjectRelease(param_1);
  }
  return;
}



/* Address: 0x100ba8830 | FUN_100ba8830 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_100ba8830(undefined *param_1)

{
  _CocoaArrayWrapper _Var1;
  code *pcVar2;
  uint uVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined *puVar11;
  long lVar12;
  ulong uVar13;
  undefined *puVar14;
  ulong uVar15;
  __int64 _Var16;
  __int64 _Var17;
  ulong uVar18;
  
  lVar9 = *(long *)(param_1 + 0x10);
  puVar14 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (lVar9 != 0) {
    lVar4 = 0;
    FUN_100b891f4();
    uVar10 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
    puVar5 = param_1;
    _swift_bridgeObjectRetain();
    lVar4 = 0;
    puVar14 = PTR___swiftEmptyArrayStorage_100eae0d8;
    do {
      FUN_100ba9bd0(param_1 + (uVar10 + 0x20 & (uVar10 ^ 0xffffffffffffffff)));
      uVar13 = (ulong)puVar5 >> 0x3e;
      if (uVar13 == 0) {
        _Var16 = *(__int64 *)((undefined *)((ulong)puVar5 & 0xffffffffffffff8) + 0x10);
      }
      else {
        _Var1.unknown = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
        if (((ulong)puVar5 & 0x8000000000000000) != 0) {
          _Var1.unknown = puVar5;
        }
        _Var16 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
      }
      uVar18 = (ulong)puVar14 >> 0x3e;
      if (uVar18 == 0) {
        lVar6 = *(long *)((undefined *)((ulong)puVar14 & 0xffffffffffffff8) + 0x10);
      }
      else {
        _Var1.unknown = (undefined *)((ulong)puVar14 & 0xffffffffffffff8);
        if (((ulong)puVar14 & 0x8000000000000000) != 0) {
          _Var1.unknown = puVar14;
        }
        lVar6 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
      }
      lVar12 = lVar6 + _Var16;
      if (SCARRY8(lVar6,_Var16)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100ba8a98);
        (*pcVar2)();
      }
      puVar11 = puVar14;
      _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
      uVar3 = 0;
      if (uVar18 == 0) {
        uVar3 = (uint)puVar11;
      }
      puVar11 = (undefined *)(ulong)uVar3;
      if ((uVar3 != 1) ||
         (uVar15 = (ulong)puVar14 & 0xffffffffffffff8,
         (long)(*(ulong *)(uVar15 + 0x18) >> 1) < lVar12)) {
        if (uVar18 == 0) {
          lVar6 = *(long *)((undefined *)((ulong)puVar14 & 0xffffffffffffff8) + 0x10);
        }
        else {
          _Var1.unknown = (undefined *)((ulong)puVar14 & 0xffffffffffffff8);
          if (((ulong)puVar14 & 0x8000000000000000) != 0) {
            _Var1.unknown = puVar14;
          }
          lVar6 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
        }
        if (lVar6 <= lVar12) {
          lVar6 = lVar12;
        }
        FUN_100b6ea6c(puVar11,lVar6,1,puVar14);
        uVar15 = (ulong)puVar11 & 0xffffffffffffff8;
        puVar14 = puVar11;
      }
      lVar6 = *(long *)(uVar15 + 0x10);
      uVar18 = *(ulong *)(uVar15 + 0x18);
      if (uVar13 == 0) {
        _Var17 = *(__int64 *)((undefined *)((ulong)puVar5 & 0xffffffffffffff8) + 0x10);
        if (_Var17 == 0) goto LAB_100ba89a0;
LAB_100ba893c:
        if ((long)((uVar18 >> 1) - lVar6) < _Var16) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100ba8aa0);
          (*pcVar2)();
        }
        lVar6 = uVar15 + lVar6 * 8 + 0x20;
        if (uVar13 == 0) {
          uVar7 = 0;
          FUN_100b673ec(0,&DAT_101044940,&PTR_SentryDebugMeta_100f8e020);
          _swift_arrayInitWithCopy(lVar6,((ulong)puVar5 & 0xffffffffffffff8) + 0x20,_Var16,uVar7);
        }
        else {
          if (_Var17 < 1) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100ba8aa8);
            (*pcVar2)();
          }
          lVar12 = 0;
          do {
            if (((ulong)puVar5 & 0xc000000000000001) == 0) {
              lVar8 = *(long *)(puVar5 + lVar12 * 8 + 0x20);
            }
            else {
              lVar8 = lVar12;
              FUN_100b6d828(lVar12,puVar5);
            }
            *(long *)(lVar6 + lVar12 * 8) = lVar8;
            lVar12 = lVar12 + 1;
          } while (_Var17 != lVar12);
        }
        if (0 < _Var16) {
          if (SCARRY8(*(long *)(uVar15 + 0x10),_Var16)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100ba8aa4);
            (*pcVar2)();
          }
          *(long *)(uVar15 + 0x10) = *(long *)(uVar15 + 0x10) + _Var16;
        }
      }
      else {
        _Var1.unknown = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
        if (((ulong)puVar5 & 0x8000000000000000) != 0) {
          _Var1.unknown = puVar5;
        }
        _Var17 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
        if (_Var17 != 0) goto LAB_100ba893c;
LAB_100ba89a0:
        if (0 < _Var16) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100ba8a9c);
          (*pcVar2)();
        }
      }
      lVar4 = lVar4 + 1;
      _swift_bridgeObjectRelease();
    } while (lVar4 != lVar9);
    _swift_bridgeObjectRelease(param_1);
  }
  return puVar14;
}



/* Address: 0x100ba8aa8 | FUN_100ba8aa8 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100ba8f8c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100ba8aa8(undefined8 param_1,uint param_2,long param_3,undefined8 param_4,uint param_5)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  ID IVar6;
  class_t *pcVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  _NativeDictionary _Var11;
  undefined *puVar12;
  ID self;
  Dictionary<undefined,undefined> DVar13;
  char *capacity;
  char *pcVar14;
  long lVar15;
  long extraout_x8;
  long lVar16;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined *puVar17;
  long extraout_x9;
  long extraout_x9_00;
  ulong uVar18;
  long extraout_x10;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined *puVar23;
  long lVar24;
  undefined8 *puVar25;
  long lVar26;
  
  lVar4 = 0;
  FUN_100be55f4();
  lVar15 = *(long *)(lVar4 + -8);
  FUN_100b6f9e0(*(undefined8 *)(lVar15 + 0x40));
  lVar16 = extraout_x9 - extraout_x8;
  lVar24 = lVar4;
  FUN_100ba9f24();
  lVar21 = *(long *)(lVar24 + -8);
  FUN_100b6f9e0(*(undefined8 *)(lVar21 + 0x40));
  puVar5 = &_OBJC_CLASS___NSNumber;
  _objc_allocWithZone();
  IVar6 = _objc_msgSend((ID)puVar5,"initWithInteger:",param_1);
  pcVar7 = &objc::class_t::SentryThread;
  _objc_allocWithZone();
  capacity = "initWithThreadId:";
  IVar6 = _objc_msgSend((ID)pcVar7,"initWithThreadId:",IVar6);
  FUN_100b6faa8();
  lVar24 = *(long *)(param_3 + 0x10);
  puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (lVar24 != 0) {
    FUN_100ba9f68(*(undefined1 *)(lVar21 + 0x50));
    lVar20 = param_3 + extraout_x8_01;
    lVar21 = *(long *)(lVar21 + 0x48);
    _swift_bridgeObjectRetain_n(param_3,2);
    puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
    do {
      lVar19 = lVar20;
      FUN_1000c495c(lVar20,extraout_x9_00 - extraout_x8_00,FUN_100b891f4);
      FUN_100ba9068();
      FUN_10005241c(extraout_x9_00 - extraout_x8_00,FUN_100b891f4);
      lVar22 = *(long *)(lVar19 + 0x10);
      lVar26 = *(long *)(puVar5 + 0x10);
      if (SCARRY8(lVar26,lVar22)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100ba903c);
        (*pcVar2)();
      }
      puVar8 = puVar5;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((int)puVar8 == 0) || ((long)(*(ulong *)(puVar5 + 0x18) >> 1) < lVar26 + lVar22)) {
        FUN_100b6ea90();
        puVar5 = puVar8;
      }
      if (*(long *)(lVar19 + 0x10) == 0) {
        if (lVar22 != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100ba9040);
          (*pcVar2)();
        }
      }
      else {
        if ((long)((*(ulong *)(puVar5 + 0x18) >> 1) - *(long *)(puVar5 + 0x10)) < lVar22) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100ba904c);
          (*pcVar2)();
        }
        _swift_arrayInitWithCopy
                  (puVar5 + *(long *)(puVar5 + 0x10) * 0x10 + 0x20,lVar19 + 0x20,lVar22,
                   &DAT_100f3c8d8);
        if (lVar22 != 0) {
          if (SCARRY8(*(long *)(puVar5 + 0x10),lVar22)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100ba9054);
            (*pcVar2)();
          }
          *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + lVar22;
        }
      }
      _swift_bridgeObjectRelease(lVar19);
      lVar20 = lVar20 + lVar21;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
    capacity = (char *)0x0;
    _swift_bridgeObjectRelease_n(param_3);
  }
  puVar8 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  lVar24 = *(long *)(puVar5 + 0x10);
  if (lVar24 != 0) {
    puVar25 = (undefined8 *)(puVar5 + 0x28);
    do {
      lVar21 = puVar25[-1];
      puVar12 = (undefined *)*puVar25;
      lVar19 = *(long *)(puVar8 + 0x10);
      FUN_100b940f8();
      lVar20 = 0;
      pcVar14 = capacity;
      if (lVar19 != 0) {
        puVar9 = puVar8;
        _swift_bridgeObjectRetain();
        FUN_100ba9f34();
        if (((ulong)capacity & 1) == 0) {
          lVar20 = 0;
        }
        else {
          lVar20 = *(long *)(*(long *)(puVar8 + 0x38) + (long)puVar9 * 8);
        }
        _swift_bridgeObjectRelease(puVar8);
        pcVar14 = capacity;
      }
      lVar19 = lVar21 + lVar20;
      if (SCARRY8(lVar21,lVar20)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100ba9044);
        (*pcVar2)();
      }
      puVar9 = puVar8;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar10 = puVar9;
      FUN_100ba9f34();
      uVar18 = (ulong)~(uint)pcVar14 & 1;
      capacity = (char *)(*(long *)(puVar8 + 0x10) + uVar18);
      if (SCARRY8(*(long *)(puVar8 + 0x10),uVar18)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100ba9048);
        (*pcVar2)();
      }
      _Var11.unknown = &DAT_101046678;
      FUN_100b6730c();
      bVar3 = Swift::_NativeDictionary::ensureUnique(SUB81(puVar9,0),(__int64)capacity,_Var11);
      if ((bVar3) &&
         (puVar10 = puVar12, FUN_100b6cc8c(), ((uint)pcVar14 & 1) != ((uint)capacity & 1))) {
        FUN_100b6730c(&DAT_101046680);
        Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100ba9068);
        (*pcVar2)();
      }
      if (((ulong)pcVar14 & 1) == 0) {
        *(ulong *)(puVar8 + ((ulong)puVar10 >> 6) * 8 + 0x40) =
             *(ulong *)(puVar8 + ((ulong)puVar10 >> 6) * 8 + 0x40) | 1L << ((ulong)puVar10 & 0x3f);
        *(undefined **)(*(long *)(puVar8 + 0x30) + (long)puVar10 * 8) = puVar12;
        *(long *)(*(long *)(puVar8 + 0x38) + (long)puVar10 * 8) = lVar19;
        if (SCARRY8(*(long *)(puVar8 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100ba9050);
          (*pcVar2)();
        }
        *(long *)(puVar8 + 0x10) = *(long *)(puVar8 + 0x10) + 1;
      }
      else {
        *(long *)(*(long *)(puVar8 + 0x38) + (long)puVar10 * 8) = lVar19;
        FUN_100b678c0();
      }
      puVar25 = puVar25 + 2;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
  }
  _swift_bridgeObjectRelease(puVar5);
  puVar12 = puVar8;
  FUN_100ba94d8();
  puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar9 = puVar12;
  if (puVar12 != (undefined *)0x0) {
    lVar24 = *(long *)(puVar12 + 0x10);
    if (lVar24 != 0) {
      FUN_100b696c4(0,lVar24,0);
      FUN_100ba9f68(*(undefined1 *)(lVar15 + 0x50));
      puVar10 = puVar12 + extraout_x8_02;
      lVar15 = *(long *)(extraout_x10 + 0x48);
      do {
        FUN_1000c495c(puVar10,lVar16,FUN_100be55f4);
        pcVar7 = &objc::class_t::SentryFrame;
        _objc_allocWithZone();
        self = _objc_msgSend((ID)pcVar7,"init");
        if (*(long *)(lVar16 + *(int *)(lVar4 + 0x18) + 8) != 0) {
          FUN_100ba9f40();
        }
        FUN_100ba9f2c(self,"setPackage:");
        FUN_100b6fa78();
        puVar23 = *(undefined **)(lVar16 + *(int *)(lVar4 + 0x1c));
        puVar9 = puVar23;
        FUN_100b1e094(puVar23);
        _objc_msgSend(self,"setInstructionAddress:",puVar9);
        puVar17 = *(undefined **)(lVar16 + *(int *)(lVar4 + 0x14));
        if ((-1 < (long)puVar17) && (puVar17 <= puVar23 && (long)puVar23 - (long)puVar17 != 0)) {
          FUN_100b1e094((long)puVar23 - (long)puVar17);
          FUN_100ba9f2c(self,"setImageAddress:");
          FUN_100b6fa78();
        }
        FUN_10005241c(lVar16,FUN_100be55f4);
        uVar18 = *(ulong *)(puVar5 + 0x10);
        if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar18) {
          FUN_100b696c4(1 < *(ulong *)(puVar5 + 0x18),uVar18 + 1,1);
        }
        *(ulong *)(puVar5 + 0x10) = uVar18 + 1;
        *(ID *)(puVar5 + uVar18 * 8 + 0x20) = self;
        puVar10 = puVar10 + lVar15;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
    }
    _swift_bridgeObjectRelease(puVar12);
  }
  FUN_100b78d78();
  FUN_100ba86b8(puVar5,param_4);
  DVar13 = Swift::Dictionary::_init
                     (puVar9,PTR___type_metadata_for_Swift_String_100eac208,
                      PTR___type_metadata_for_Swift_String_100eac208,
                      PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100eac218
                     );
  pcVar7 = &objc::class_t::SentryStacktrace;
  _objc_allocWithZone(&objc::class_t::SentryStacktrace);
  FUN_100ba9e18(puVar5,DVar13.unknown,pcVar7);
  FUN_100ba9f60(IVar6,"setStacktrace:");
  FUN_100b6faa8();
  uVar1 = 0;
  if ((param_2 & 0xff) != 2) {
    uVar1 = param_2 & (param_5 ^ 1);
  }
  puVar5 = &_OBJC_CLASS___NSNumber;
  _objc_allocWithZone();
  _objc_msgSend((ID)puVar5,"initWithBool:",(ulong)(uVar1 & 1));
  FUN_100ba9f60(IVar6,"setCrashed:");
  _swift_bridgeObjectRelease(puVar8);
  FUN_100b6faa8();
  FUN_100b56ea0(IVar6);
  return;
}



/* Address: 0x100ba9068 | FUN_100ba9068 */

void FUN_100ba9068(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  long lVar6;
  UUID UVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  code *pcVar11;
  code *pcVar12;
  long extraout_x8;
  long lVar13;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x9;
  long extraout_x9_00;
  undefined8 uVar14;
  ulong uVar15;
  undefined *puVar16;
  long unaff_x20;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined *puVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  
  FUN_100ba9f24();
  lVar20 = *(long *)(param_1 + -8);
  FUN_100b6f9e0(*(undefined8 *)(lVar20 + 0x40));
  lVar17 = extraout_x9 - extraout_x8;
  lVar23 = lVar17 - extraout_x8;
  lVar6 = 0;
  FUN_100be55f4();
  lVar13 = *(long *)(lVar6 + -8);
  FUN_100b6f9e0(*(undefined8 *)(lVar13 + 0x40));
  lVar22 = extraout_x9_00 - extraout_x8_00;
  UVar7 = Foundation::UUID::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar7.unknown + -8) + 0x10))(lVar22);
  puVar1 = (undefined8 *)(unaff_x20 + *(int *)(param_1 + 0x18));
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  uVar14 = *(undefined8 *)(unaff_x20 + *(int *)(param_1 + 0x1c));
  *(undefined8 *)(lVar22 + *(int *)(lVar6 + 0x14)) =
       *(undefined8 *)(unaff_x20 + *(int *)(param_1 + 0x14));
  puVar1 = (undefined8 *)(lVar22 + *(int *)(lVar6 + 0x18));
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  *(undefined8 *)(lVar22 + *(int *)(lVar6 + 0x1c)) = uVar14;
  puVar21 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar16 = *(undefined **)(unaff_x20 + *(int *)(param_1 + 0x20));
  puVar10 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (puVar16 != (undefined *)0x0) {
    puVar10 = puVar16;
  }
  lVar6 = *(long *)(puVar10 + 0x10);
  if (lVar6 == 0) {
    lVar24 = *(long *)(PTR___swiftEmptyArrayStorage_100eae0d8 + 0x10);
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(puVar16);
    if (lVar24 == 0) {
      lVar6 = 0;
      goto LAB_100ba926c;
    }
  }
  else {
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(puVar16);
    FUN_1000717a8(0,lVar6,0);
    FUN_100ba9f68(*(undefined1 *)(lVar20 + 0x50));
    puVar16 = puVar10 + extraout_x8_01;
    lVar18 = *(long *)(lVar20 + 0x48);
    do {
      FUN_1000c495c(puVar16,lVar23,FUN_100b891f4);
      puVar1 = (undefined8 *)(lVar23 + *(int *)(param_1 + 0x24));
      uVar3 = 0;
      if (*(char *)(puVar1 + 1) == '\0') {
        uVar3 = *puVar1;
      }
      FUN_10005241c(lVar23,FUN_100b891f4);
      uVar15 = *(ulong *)(puVar21 + 0x10);
      lVar24 = uVar15 + 1;
      if (*(ulong *)(puVar21 + 0x18) >> 1 <= uVar15) {
        FUN_1000717a8(1 < *(ulong *)(puVar21 + 0x18),lVar24,1);
      }
      *(long *)(puVar21 + 0x10) = lVar24;
      *(undefined8 *)(puVar21 + uVar15 * 8 + 0x20) = uVar3;
      puVar16 = puVar16 + lVar18;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  lVar6 = 0;
  lVar23 = 0x20;
  do {
    bVar5 = SCARRY8(lVar6,*(long *)(puVar21 + lVar23));
    lVar6 = lVar6 + *(long *)(puVar21 + lVar23);
    if (bVar5) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x100ba9494);
      (*pcVar12)();
    }
    lVar23 = lVar23 + 8;
    lVar24 = lVar24 + -1;
  } while (lVar24 != 0);
LAB_100ba926c:
  FUN_100b6f860();
  plVar2 = (long *)(unaff_x20 + *(int *)(param_1 + 0x24));
  lVar23 = 0;
  if ((char)plVar2[1] == '\0') {
    lVar23 = *plVar2;
  }
  if (!SBORROW8(lVar23,lVar6)) {
    lVar24 = *(long *)(puVar10 + 0x10);
    if (lVar24 == 0) {
      FUN_100b678c0();
      puVar21 = PTR___swiftEmptyArrayStorage_100eae0d8;
    }
    else {
      FUN_100ba9f68(*(undefined1 *)(lVar20 + 0x50));
      puVar16 = puVar10 + extraout_x8_02;
      lVar20 = *(long *)(lVar20 + 0x48);
      FUN_100b940f8();
      puVar21 = PTR___swiftEmptyArrayStorage_100eae0d8;
      do {
        puVar8 = puVar16;
        FUN_1000c495c(puVar16,lVar17,FUN_100b891f4);
        FUN_100ba9068();
        FUN_10005241c(lVar17,FUN_100b891f4);
        lVar18 = *(long *)(puVar8 + 0x10);
        lVar19 = *(long *)(puVar21 + 0x10);
        if (SCARRY8(lVar19,lVar18)) {
                    /* WARNING: Does not return */
          pcVar12 = (code *)SoftwareBreakpoint(1,0x100ba9498);
          (*pcVar12)();
        }
        puVar9 = puVar21;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((int)puVar9 == 0) || ((long)(*(ulong *)(puVar21 + 0x18) >> 1) < lVar19 + lVar18)) {
          FUN_100b6ea90();
          puVar21 = puVar9;
        }
        if (*(long *)(puVar8 + 0x10) == 0) {
          if (lVar18 != 0) {
                    /* WARNING: Does not return */
            pcVar12 = (code *)SoftwareBreakpoint(1,0x100ba949c);
            (*pcVar12)();
          }
        }
        else {
          if ((long)((*(ulong *)(puVar21 + 0x18) >> 1) - *(long *)(puVar21 + 0x10)) < lVar18) {
                    /* WARNING: Does not return */
            pcVar12 = (code *)SoftwareBreakpoint(1,0x100ba94a0);
            (*pcVar12)();
          }
          _swift_arrayInitWithCopy
                    (puVar21 + *(long *)(puVar21 + 0x10) * 0x10 + 0x20,puVar8 + 0x20,lVar18,
                     &DAT_100f3c8d8);
          if (lVar18 != 0) {
            if (SCARRY8(*(long *)(puVar21 + 0x10),lVar18)) {
                    /* WARNING: Does not return */
              pcVar12 = (code *)SoftwareBreakpoint(1,0x100ba94a4);
              (*pcVar12)();
            }
            *(long *)(puVar21 + 0x10) = *(long *)(puVar21 + 0x10) + lVar18;
          }
        }
        FUN_100b6f860();
        puVar16 = puVar16 + lVar20;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      _swift_bridgeObjectRelease_n(puVar10,2);
    }
    *(long *)(lVar22 + -0x10) = lVar22;
    pcVar12 = FUN_100ba9f04;
    FUN_100ba8598(FUN_100ba9f04,lVar22 + -0x20,puVar21);
    _swift_bridgeObjectRelease(puVar21);
    if (0 < lVar23 - lVar6) {
      puVar10 = &DAT_1010449c0;
      FUN_100b6730c();
      uVar15 = (ulong)*(byte *)(lVar13 + 0x50);
      _swift_allocObject();
      *(undefined8 *)(puVar10 + 0x18) = 2;
      *(undefined8 *)(puVar10 + 0x10) = 1;
      FUN_1000c495c(lVar22,puVar10 + (uVar15 + 0x20 & (uVar15 ^ 0xffffffffffffffff)),FUN_100be55f4);
      pcVar11 = pcVar12;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((ulong)pcVar11 & 1) == 0) {
        pcVar11 = pcVar12 + 0x10;
        pcVar12 = (code *)0x0;
        FUN_100ba9f54(0,*(long *)pcVar11 + 1);
      }
      uVar15 = *(ulong *)(pcVar12 + 0x10);
      if (*(ulong *)(pcVar12 + 0x18) >> 1 <= uVar15) {
        pcVar12 = (code *)(ulong)(1 < *(ulong *)(pcVar12 + 0x18));
        FUN_100ba9f54(pcVar12,uVar15 + 1);
      }
      *(ulong *)(pcVar12 + 0x10) = uVar15 + 1;
      *(long *)(pcVar12 + uVar15 * 0x10 + 0x20) = lVar23 - lVar6;
      *(undefined **)(pcVar12 + uVar15 * 0x10 + 0x28) = puVar10;
    }
    FUN_10005241c(lVar22,FUN_100be55f4);
    FUN_100b56ea0(pcVar12);
    return;
  }
                    /* WARNING: Does not return */
  pcVar12 = (code *)SoftwareBreakpoint(1,0x100ba94a8);
  (*pcVar12)();
}



/* Address: 0x100ba94d8 | FUN_100ba94d8 */

undefined8 FUN_100ba94d8(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long local_88;
  long lStack_80;
  long local_78;
  long lStack_70;
  ulong local_68;
  
  FUN_100ba9ecc(&local_88);
  uVar6 = local_78 + 0x40U >> 6;
  _swift_bridgeObjectRetain(param_1);
  lVar2 = -1;
  uVar4 = 0;
  uVar8 = local_68;
  do {
    lVar7 = lStack_70;
    if (uVar8 == 0) {
      lVar7 = lStack_70 + 1;
      if (SCARRY8(lStack_70,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100ba9658);
        (*pcVar1)();
      }
      if ((long)uVar6 <= lVar7) goto LAB_100ba961c;
      uVar8 = *(ulong *)(lStack_80 + lVar7 * 8);
      if (uVar8 == 0) {
        lVar7 = lStack_70 + 2;
        if ((long)uVar6 <= lVar7) goto LAB_100ba961c;
        uVar8 = *(ulong *)(lStack_80 + lVar7 * 8);
        if (uVar8 == 0) {
          lVar7 = lStack_70 + 3;
          if ((long)uVar6 <= lVar7) goto LAB_100ba961c;
          uVar8 = *(ulong *)(lStack_80 + lVar7 * 8);
          if (uVar8 == 0) {
            lVar7 = lStack_70 + 4;
            if ((long)uVar6 <= lVar7) goto LAB_100ba961c;
            uVar8 = *(ulong *)(lStack_80 + lVar7 * 8);
            if (uVar8 == 0) {
              lVar7 = lStack_70 + 5;
              if ((long)uVar6 <= lVar7) goto LAB_100ba961c;
              uVar8 = *(ulong *)(lStack_80 + lVar7 * 8);
              if (uVar8 == 0) {
                lVar7 = lStack_70 + 6;
                if ((long)uVar6 <= lVar7) {
LAB_100ba961c:
                  FUN_10000c650(local_88,lStack_80,local_78,lStack_70,0);
                  return uVar4;
                }
                uVar8 = *(ulong *)(lStack_80 + lVar7 * 8);
                if (uVar8 == 0) {
                  lVar9 = lStack_70 + 7;
                  do {
                    lVar7 = lVar9;
                    if ((long)uVar6 <= lVar7) goto LAB_100ba961c;
                    uVar8 = *(ulong *)(lStack_80 + lVar7 * 8);
                    lVar9 = lVar7 + 1;
                  } while (uVar8 == 0);
                }
              }
            }
          }
        }
      }
    }
    uVar3 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
    uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
    uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
    uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
    uVar8 = uVar8 - 1 & uVar8;
    uVar3 = LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) | lVar7 << 6;
    lVar9 = *(long *)(*(long *)(local_88 + 0x38) + uVar3 * 8);
    lStack_70 = lVar7;
    if (lVar2 < lVar9) {
      uVar5 = *(undefined8 *)(*(long *)(local_88 + 0x30) + uVar3 * 8);
      _swift_bridgeObjectRetain(uVar5);
      _swift_bridgeObjectRelease(uVar4);
      lVar2 = lVar9;
      uVar4 = uVar5;
    }
  } while( true );
}



/* Address: 0x100ba9658 | FUN_100ba9658 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100ba9768 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ID FUN_100ba9658(undefined8 param_1,uint param_2,long param_3,undefined8 param_4,uint param_5,
                undefined8 param_6,uint param_7)

{
  uint uVar1;
  undefined *puVar2;
  ID IVar3;
  class_t *pcVar4;
  long lVar5;
  Dictionary<undefined,undefined> DVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *local_68;
  
  puVar2 = &_OBJC_CLASS___NSNumber;
  _objc_allocWithZone();
  IVar3 = _objc_msgSend((ID)puVar2,"initWithInteger:",param_1);
  pcVar4 = &objc::class_t::SentryThread;
  _objc_allocWithZone();
  IVar3 = _objc_msgSend((ID)pcVar4,"initWithThreadId:",IVar3);
  lVar5 = 0;
  local_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar10 = *(long *)(param_3 + 0x10);
  if (lVar10 != 0) {
    FUN_100ba9f24();
    uVar7 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
    lVar8 = param_3 + (uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff));
    lVar9 = *(long *)(*(long *)(lVar5 + -8) + 0x48);
    _swift_bridgeObjectRetain(param_3);
    do {
      FUN_100ba9818(lVar8,0xffffffffffffffff,&local_68,param_6,param_4,param_5 & 1);
      lVar8 = lVar8 + lVar9;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    _swift_bridgeObjectRelease(param_3);
  }
  puVar2 = local_68;
  DVar6 = Swift::Dictionary::_init
                    (lVar5,PTR___type_metadata_for_Swift_String_100eac208,
                     PTR___type_metadata_for_Swift_String_100eac208,
                     PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100eac218
                    );
  pcVar4 = &objc::class_t::SentryStacktrace;
  _objc_allocWithZone(&objc::class_t::SentryStacktrace);
  FUN_100ba9e18(puVar2,DVar6.unknown,pcVar4);
  _objc_msgSend(IVar3,"setStacktrace:",puVar2);
  uVar1 = 0;
  if ((param_2 & 0xff) != 2) {
    uVar1 = param_2 & (param_7 ^ 1);
  }
  puVar2 = &_OBJC_CLASS___NSNumber;
  _objc_allocWithZone();
  _objc_msgSend((ID)puVar2,"initWithBool:",(ulong)(uVar1 & 1));
  FUN_100ba9f60(IVar3,"setCrashed:");
  FUN_100b6faa8();
  return IVar3;
}



/* Address: 0x100ba9818 | FUN_100ba9818 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100ba9818(long param_1,ID param_2,ulong *param_3,long param_4,undefined8 param_5,
                  uint param_6)

{
  long lVar1;
  ulong uVar2;
  ID IVar3;
  NSNumber *this;
  undefined *puVar4;
  NSNumber *pNVar5;
  ID IVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined1 auStack_80 [8];
  ID local_78;
  long local_70;
  undefined *local_68;
  
  lVar1 = 0;
  IVar6 = param_2;
  FUN_100b891f4();
  local_70 = *(long *)(lVar1 + -8);
  puVar10 = auStack_80 + -(*(long *)(local_70 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar2 = *param_3;
  thunk_FUN_100b6cd50(uVar2);
  local_68 = (undefined *)param_1;
  FUN_100ba9a70();
  IVar3 = param_2;
  FUN_100b862d8();
  uVar9 = (uint)IVar3;
  if (IVar6 == 0) {
    this = (NSNumber *)0x0;
    FUN_100b673ec(0,&DAT_100fa87f8,&PTR__OBJC_CLASS___NSNumber_100f8d750);
    pNVar5 = (extension_Foundation)::__C::NSNumber::__allocating_init(this,true);
  }
  else {
    if (param_4 == 0) {
      uVar9 = 0;
    }
    else {
      FUN_100ba7e44();
    }
    _swift_bridgeObjectRelease(IVar6);
    puVar4 = &_OBJC_CLASS___NSNumber;
    _objc_allocWithZone();
    pNVar5 = (NSNumber *)_objc_msgSend((ID)puVar4,"initWithBool:",(ulong)(uVar9 & 1));
  }
  _objc_msgSend(param_2,"setInApp:",pNVar5);
  FUN_100b939ac();
  lVar11 = *(long *)((*param_3 & 0xffffffffffffff8) + 0x10);
  FUN_100b93c08(lVar11);
  uVar7 = *param_3;
  uVar8 = uVar7 & 0xffffffffffffff8;
  *(long *)(uVar8 + 0x10) = lVar11 + 1;
  *(ID *)(uVar8 + lVar11 * 8 + 0x20) = param_2;
  *param_3 = uVar7;
  puVar4 = *(undefined **)((long)local_68 + (long)*(int *)(lVar1 + 0x20));
  local_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (puVar4 != (undefined *)0x0) {
    local_68 = puVar4;
  }
  lVar1 = *(long *)(local_68 + 0x10);
  if (lVar1 != 0) {
    puVar4 = local_68 +
             ((ulong)*(byte *)(local_70 + 0x50) + 0x20 &
             ((ulong)*(byte *)(local_70 + 0x50) ^ 0xffffffffffffffff));
    lVar11 = *(long *)(local_70 + 0x48);
    local_78 = param_2;
    _swift_bridgeObjectRetain();
    do {
      FUN_1000c495c(puVar4,puVar10,FUN_100b891f4);
      FUN_100ba9818(puVar10,uVar2,param_3,param_4,param_5,param_6 & 1);
      FUN_10005241c(puVar10,FUN_100b891f4);
      puVar4 = puVar4 + lVar11;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
    _swift_bridgeObjectRelease(local_68);
    return;
  }
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(local_68);
  return;
}



/* Address: 0x100ba9a70 | FUN_100ba9a70 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100ba9a70(void)

{
  class_t *self;
  ID self_00;
  ID IVar1;
  NSNumber *pNVar2;
  ulong uVar3;
  long unaff_x20;
  ulong uVar4;
  
  self = &objc::class_t::SentryFrame;
  _objc_allocWithZone();
  self_00 = _objc_msgSend((ID)self,"init");
  IVar1 = self_00;
  FUN_100ba9f24();
  if (*(long *)(unaff_x20 + *(int *)(IVar1 + 0x18) + 8) != 0) {
    FUN_100ba9f40();
  }
  FUN_100ba9f2c(self_00,"setPackage:");
  FUN_100b6fa78();
  uVar4 = *(ulong *)(unaff_x20 + *(int *)(IVar1 + 0x1c));
  uVar3 = uVar4;
  FUN_100b1e094(uVar4);
  _objc_msgSend(self_00,"setInstructionAddress:",uVar3);
  uVar3 = *(ulong *)(unaff_x20 + *(int *)(IVar1 + 0x14));
  if ((-1 < (long)uVar3) && (uVar3 <= uVar4 && uVar4 - uVar3 != 0)) {
    FUN_100b1e094(uVar4 - uVar3);
    FUN_100ba9f2c(self_00,"setImageAddress:");
    FUN_100b6fa78();
  }
  pNVar2 = (extension_Foundation)::__int64::_bridgeToObjectiveC();
  _objc_msgSend(self_00,"setParentIndex:",pNVar2);
  if ((*(byte *)(unaff_x20 + *(int *)(IVar1 + 0x24) + 8) & 1) == 0) {
    pNVar2 = (extension_Foundation)::__int64::_bridgeToObjectiveC();
  }
  else {
    pNVar2 = (NSNumber *)0x0;
  }
  _objc_msgSend(self_00,"setSampleCount:",pNVar2);
  return self_00;
}



/* Address: 0x100ba9bd0 | FUN_100ba9bd0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

long FUN_100ba9bd0(void)

{
  class_t *self;
  ID IVar1;
  UUID UVar2;
  char *pcVar3;
  long lVar4;
  ulong uVar5;
  long unaff_x20;
  undefined *puVar6;
  String SVar7;
  
  self = &objc::class_t::SentryDebugMeta;
  _objc_allocWithZone();
  IVar1 = _objc_msgSend((ID)self,"init");
  UVar2.unknown = (undefined *)0x6f6863616d;
  FUN_100bae080(0x6f6863616d,&DAT_e500000000000000,IVar1);
  SVar7 = Foundation::UUID::get_uuidString(UVar2);
  pcVar3 = SVar7.str;
  FUN_100bae08c(pcVar3,SVar7.bridgeObject,IVar1);
  FUN_100ba9f24();
  if (*(long *)(unaff_x20 + *(int *)(pcVar3 + 0x18) + 8) != 0) {
    FUN_100ba9f40();
  }
  FUN_100ba9f48();
  lVar4 = 0;
  uVar5 = *(ulong *)(unaff_x20 + *(int *)(pcVar3 + 0x14));
  if ((-1 < (long)uVar5) &&
     (lVar4 = *(ulong *)(unaff_x20 + *(int *)(pcVar3 + 0x1c)) - uVar5,
     uVar5 <= *(ulong *)(unaff_x20 + *(int *)(pcVar3 + 0x1c)) && lVar4 != 0)) {
    FUN_100b1e094();
    FUN_100ba9f48();
    lVar4 = 0;
  }
  FUN_100b93850();
  _swift_allocObject();
  *(undefined8 *)(lVar4 + 0x18) = 3;
  *(undefined8 *)(lVar4 + 0x10) = 1;
  *(ID *)(lVar4 + 0x20) = IVar1;
  puVar6 = *(undefined **)(unaff_x20 + *(int *)(pcVar3 + 0x20));
  if (puVar6 == (undefined *)0x0) {
    FUN_100b78d78();
    puVar6 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    FUN_100b78d78();
    _swift_bridgeObjectRetain(puVar6);
    FUN_100ba8830();
    FUN_100b6f860();
  }
  FUN_100b940f8();
  _swift_bridgeObjectRetain(puVar6);
  FUN_100bb1cd8();
  _swift_bridgeObjectRelease(puVar6);
  FUN_100b678c0();
  FUN_100b6faa8();
  return lVar4;
}



/* Address: 0x100ba9d4c | FUN_100ba9d4c */

void FUN_100ba9d4c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  puVar3 = &DAT_1010449c0;
  FUN_100b6730c();
  lVar4 = 0;
  FUN_100be55f4();
  uVar5 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  uVar6 = uVar5 + 0x20 & (uVar5 ^ 0xffffffffffffffff);
  _swift_allocObject(puVar3,uVar6 + *(long *)(*(long *)(lVar4 + -8) + 0x48),uVar5 | 7);
  *(undefined8 *)(puVar3 + 0x18) = 2;
  *(undefined8 *)(puVar3 + 0x10) = 1;
  FUN_1000c495c(param_3,puVar3 + uVar6,FUN_100be55f4);
  _swift_bridgeObjectRetain(uVar2);
  FUN_100bb1d54();
  *param_1 = uVar1;
  param_1[1] = puVar3;
  return;
}



/* Address: 0x100ba9e18 | FUN_100ba9e18 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100ba9e18(undefined8 param_1,undefined8 param_2)

{
  NSArray *pNVar1;
  NSDictionary *pNVar2;
  ID IVar3;
  ID unaff_x20;
  
  FUN_100b673ec(0,&DAT_101044930,&PTR_SentryFrame_100f8e010);
  pNVar1 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_1);
  pNVar2 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_2);
  IVar3 = _objc_msgSend(unaff_x20,"initWithFrames:registers:",pNVar1,pNVar2);
  return IVar3;
}



/* Address: 0x100ba9ec8 | thunk_FUN_100ba9ecc */

void thunk_FUN_100ba9ecc(long *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar2 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  *param_1 = param_2;
  uVar4 = *(ulong *)(param_2 + 0x40);
  uVar3 = -uVar2;
  uVar1 = 0xffffffffffffffff;
  if ((long)uVar3 < 0x40) {
    uVar1 = ~(-1L << (uVar3 & 0x3f));
  }
  param_1[1] = param_2 + 0x40;
  param_1[2] = ~uVar2;
  param_1[3] = 0;
  param_1[4] = uVar1 & uVar4;
  return;
}



/* Address: 0x100ba9ecc | FUN_100ba9ecc */

void FUN_100ba9ecc(long *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar2 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  *param_1 = param_2;
  uVar4 = *(ulong *)(param_2 + 0x40);
  uVar3 = -uVar2;
  uVar1 = 0xffffffffffffffff;
  if ((long)uVar3 < 0x40) {
    uVar1 = ~(-1L << (uVar3 & 0x3f));
  }
  param_1[1] = param_2 + 0x40;
  param_1[2] = ~uVar2;
  param_1[3] = 0;
  param_1[4] = uVar1 & uVar4;
  return;
}



/* Address: 0x100ba9f04 | FUN_100ba9f04 */

void FUN_100ba9f04(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_100ba9d4c(param_1,*(undefined8 *)(unaff_x20 + 0x10),param_2);
  return;
}



/* Address: 0x100ba9f20 | thunk_FUN_100ba9ecc */

void thunk_FUN_100ba9ecc(long *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar2 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  *param_1 = param_2;
  uVar4 = *(ulong *)(param_2 + 0x40);
  uVar3 = -uVar2;
  uVar1 = 0xffffffffffffffff;
  if ((long)uVar3 < 0x40) {
    uVar1 = ~(-1L << (uVar3 & 0x3f));
  }
  param_1[1] = param_2 + 0x40;
  param_1[2] = ~uVar2;
  param_1[3] = 0;
  param_1[4] = uVar1 & uVar4;
  return;
}



/* Address: 0x100ba9f24 | FUN_100ba9f24 */

void FUN_100ba9f24(void)

{
  FUN_100b891f4(0);
  return;
}



/* Address: 0x100ba9f2c | FUN_100ba9f2c */

void FUN_100ba9f2c(ID param_1,SEL param_2)

{
  _objc_msgSend(param_1,param_2);
  return;
}



/* Address: 0x100ba9f34 | FUN_100ba9f34 */

void FUN_100ba9f34(void)

{
  FUN_100b6cc8c();
  return;
}



/* Address: 0x100ba9f40 | FUN_100ba9f40 */

void FUN_100ba9f40(void)

{
  (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  return;
}



/* Address: 0x100ba9f48 | FUN_100ba9f48 */

void FUN_100ba9f48(undefined8 param_1,SEL param_2)

{
  ID unaff_x19;
  
  _objc_msgSend(unaff_x19,param_2);
  return;
}



/* Address: 0x100ba9f54 | FUN_100ba9f54 */

void FUN_100ba9f54(undefined8 param_1,undefined8 param_2)

{
  FUN_100b6ea90(param_1,param_2,1);
  return;
}



/* Address: 0x100ba9f60 | FUN_100ba9f60 */

void FUN_100ba9f60(ID param_1,SEL param_2)

{
  _objc_msgSend(param_1,param_2);
  return;
}



/* Address: 0x100ba9f68 | FUN_100ba9f68 */

void FUN_100ba9f68(void)

{
  return;
}



/* Address: 0x100ba9f74 | thunk_FUN_100ba9f78 */

undefined8 * thunk_FUN_100ba9f78(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  param_1[2] = uVar1;
  _swift_bridgeObjectRetain();
  _swift_retain(uVar1);
  return param_1;
}



/* Address: 0x100ba9f78 | FUN_100ba9f78 */

undefined8 * FUN_100ba9f78(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  param_1[2] = uVar1;
  _swift_bridgeObjectRetain();
  _swift_retain(uVar1);
  return param_1;
}



/* Address: 0x100ba9fb4 | FUN_100ba9fb4 */

undefined8 * FUN_100ba9fb4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[1] = param_2[1];
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_retain();
  _swift_release(uVar1);
  return param_1;
}



/* Address: 0x100baa018 | FUN_100baa018 */

undefined8 * FUN_100baa018(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_2[2];
  uVar2 = param_1[2];
  param_1[1] = param_2[1];
  param_1[2] = uVar1;
  _swift_release(uVar2);
  return param_1;
}



/* Address: 0x100baa05c | FUN_100baa05c */

int FUN_100baa05c(ulong *param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    iVar1 = -1;
  }
  else if ((param_2 < 0) && ((char)param_1[3] != '\0')) {
    iVar1 = (int)*param_1 + 0x7fffffff;
  }
  else {
    uVar2 = *param_1;
    if (0xfffffffe < uVar2) {
      uVar2 = 0xffffffff;
    }
    iVar1 = (int)uVar2;
  }
  return iVar1 + 1;
}



/* Address: 0x100baa09c | FUN_100baa09c */

void FUN_100baa09c(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100baa0a8 | FUN_100baa0a8 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100baa0cc */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100baa0a8(undefined8 param_1,long param_2)

{
  code *pcVar1;
  Data DVar2;
  __int64 _Var3;
  undefined8 uVar4;
  long lVar5;
  long *unaff_x20;
  long unaff_x21;
  long lVar6;
  
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  DVar2 = Foundation::JSONEncoder::_encode
                    ((JSONEncoder *)unaff_x20[2],param_1,uVar4,*(undefined8 *)(param_2 + 0x18));
  if (unaff_x21 == 0) {
    FUN_100b6d4e0();
    FUN_100b939c0();
    lVar6 = *(long *)(*unaff_x20 + 0x10);
    FUN_100b93c14(lVar6);
    lVar5 = *unaff_x20;
    *(long *)(lVar5 + 0x10) = lVar6 + 1;
    lVar6 = lVar5 + lVar6 * 0x10;
    *(undefined **)(lVar6 + 0x20) = DVar2.unknown;
    *(undefined8 *)(lVar6 + 0x28) = uVar4;
    *unaff_x20 = lVar5;
    _Var3 = Foundation::Data::get_count(DVar2);
    FUN_10003bf2c(DVar2.unknown,uVar4);
    if (SCARRY8(unaff_x20[1],_Var3)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100baa15c);
      (*pcVar1)();
    }
    unaff_x20[1] = unaff_x20[1] + _Var3;
  }
  return;
}



/* Address: 0x100baa15c | FUN_100baa15c */

void FUN_100baa15c(void)

{
  undefined8 *unaff_x20;
  
  _swift_bridgeObjectRelease(*unaff_x20);
  *unaff_x20 = PTR___swiftEmptyArrayStorage_100eae0d8;
  unaff_x20[1] = 0;
  return;
}



/* Address: 0x100baa180 | FUN_100baa180 */

undefined1  [16] FUN_100baa180(undefined8 param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  
  uVar2 = 0x22736d657469227b;
  uVar4 = 0xea00000000005b3a;
  FUN_100b6ac38();
  _swift_bridgeObjectRetain(param_1);
  uVar3 = 0x2c;
  FUN_100b6ac38(0x2c,0xe100000000000000);
  FUN_100b6f4f0();
  _swift_bridgeObjectRetain(param_1);
  FUN_100b6d4e0(uVar2,uVar4);
  FUN_100baa4dc(param_1,uVar3);
  _swift_release(uVar3);
  _swift_bridgeObjectRelease_n(param_1,2);
  FUN_10003bf2c(uVar2,uVar4);
  uVar3 = 0x7d5d;
  puVar5 = &SUB_e200000000000000;
  FUN_100b6ac38(0x7d5d,&SUB_e200000000000000);
  FUN_100b6d4e0(uVar2,uVar4);
  FUN_100baa348(uVar3,puVar5);
  FUN_10003bf2c(uVar3,puVar5);
  FUN_10003bf2c(uVar2,uVar4);
  auVar1._8_8_ = uVar4;
  auVar1._0_8_ = uVar2;
  return auVar1;
}



/* Address: 0x100baa290 | FUN_100baa290 */

void FUN_100baa290(void)

{
  FUN_100baa0a8();
  return;
}



/* Address: 0x100baa2a4 | thunk_FUN_100baa15c */

void thunk_FUN_100baa15c(void)

{
  FUN_100baa15c();
  return;
}



/* Address: 0x100baa2a8 | FUN_100baa2a8 */

void FUN_100baa2a8(void)

{
  undefined8 *unaff_x20;
  
  FUN_1005f4d50(*unaff_x20);
  return;
}



/* Address: 0x100baa2b0 | FUN_100baa2b0 */

void FUN_100baa2b0(void)

{
  undefined8 *unaff_x20;
  
  FUN_100baa180(*unaff_x20);
  return;
}



/* Address: 0x100baa2b8 | FUN_100baa2b8 */

void FUN_100baa2b8(__DataStorage *param_1,long param_2,__DataStorage *param_3)

{
  _Representation _Var1;
  code *pcVar2;
  UnsafeRawBufferPointer contentsOf;
  __DataStorage *p_Var3;
  long lVar4;
  
  contentsOf.unknown = param_1;
  Foundation::__DataStorage::_get__bytes(param_3,param_1);
  p_Var3 = (__DataStorage *)0x0;
  if ((__DataStorage *)contentsOf.unknown != (__DataStorage *)0x0) {
    p_Var3 = (__DataStorage *)
             Foundation::__DataStorage::get__offset(param_3,(__DataStorage *)contentsOf.unknown);
    if (SBORROW8((long)param_1,(long)p_Var3)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100baa348);
      (*pcVar2)();
    }
    contentsOf.unknown = contentsOf.unknown + ((long)param_1 - (long)p_Var3);
  }
  if (!SBORROW8(param_2,(long)param_1)) {
    lVar4 = Foundation::__DataStorage::get__length(param_3,p_Var3);
    if (param_2 - (long)param_1 <= lVar4) {
      lVar4 = param_2 - (long)param_1;
    }
    _Var1.value = 0;
    if (contentsOf.unknown != (undefined *)0x0) {
      _Var1.value = (char)lVar4 + (char)contentsOf.unknown;
    }
    Foundation::Data::_Representation::append(contentsOf,_Var1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100baa344);
  (*pcVar2)();
}



/* Address: 0x100baa348 | FUN_100baa348 */

void FUN_100baa348(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined *local_60;
  undefined *puStack_58;
  
  local_60 = PTR___type_metadata_for_Foundation_Data_100ea7300;
  puStack_58 = 
  PTR___protocol_witness_table_for_Foundation_Data___Foundation_ContiguousBytes_in_Foundation_100ea72f0
  ;
  puVar1 = &local_78;
  local_78 = param_1;
  uStack_70 = param_2;
  FUN_100004640();
                    /* WARNING: Could not recover jumptable at 0x000100baa3ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)*(int *)(&DAT_100baa4cc + ((ulong)puVar1[1] >> 0x3e) * 4) + 0x100baa3a0))();
  return;
}



/* Address: 0x100baa4dc | FUN_100baa4dc */

void FUN_100baa4dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 *unaff_x20;
  undefined8 auStack_130 [2];
  undefined1 auStack_120 [48];
  undefined1 *local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined1 auStack_98 [24];
  undefined8 local_80;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  puVar1 = &DAT_101045890;
  FUN_100b6730c();
  uVar4 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar1 = &DAT_101046740;
  FUN_100b6730c();
  lVar5 = *(long *)(*(long *)(puVar1 + -8) + 0x40);
  puVar1 = &DAT_101045898;
  FUN_100b6730c();
  lVar6 = *(long *)(*(long *)(puVar1 + -8) + 0x40);
  local_e0 = param_1;
  uStack_d8 = param_2;
  local_d0 = param_1;
  uStack_c8 = param_2;
  _swift_bridgeObjectRetain(param_1);
  _swift_retain(param_2);
  puVar1 = &DAT_101046748;
  FUN_100b6730c(&DAT_101046748);
  puVar2 = &DAT_101044a90;
  FUN_100b6730c(&DAT_101044a90);
  puVar3 = &local_c0;
  _swift_dynamicCast(puVar3,&local_e0,puVar1,puVar2,6);
  if ((int)puVar3 == 0) {
    local_a0 = 0;
    uStack_b8 = 0;
    local_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    local_f0 = auStack_120 + uVar4 * -2;
    FUN_100b74780(&local_c0,&DAT_101044a98);
                    /* WARNING: Could not recover jumptable at 0x000100baa6ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)*(int *)(&DAT_100baabb0 + ((ulong)unaff_x20[1] >> 0x3e) * 4) + 0x100baa69c))
              (*unaff_x20,0);
    return;
  }
  FUN_100076508(&local_c0,auStack_98);
  FUN_100004640(auStack_98,local_80);
  *(undefined8 **)
   (auStack_120 + uVar4 * -2 +
   ((-(lVar5 + 0xfU & 0xfffffffffffffff0) - uVar4) - (lVar6 + 0xfU & 0xfffffffffffffff0)) + -0x10) =
       unaff_x20;
  Foundation::ContiguousBytes::_withUnsafeBytes();
  FUN_100004594(auStack_98);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100baac10 | FUN_100baac10 */

void FUN_100baac10(long param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  Iterator IVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_58;
  
  puVar4 = &DAT_101045898;
  FUN_100b6730c();
  lVar6 = -(*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = (undefined8 *)(&stack0xffffffffffffffa0 + lVar6);
  if (param_2 == 0) {
    lVar11 = 0;
    lVar10 = 0;
  }
  else {
    if (SBORROW8(param_3 - param_2,param_4)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100baaddc);
      (*pcVar3)();
    }
    lVar10 = param_2 + param_4;
    lVar11 = lVar10 + ((param_3 - param_2) - param_4);
  }
  puVar5 = &DAT_100f39998;
  _swift_allocObject(&DAT_100f39998,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = param_6;
  *(undefined8 *)(puVar5 + 0x18) = param_7;
  if (lVar10 == 0) {
    puVar7 = &DAT_101046740;
    FUN_100b6730c();
    iVar1 = *(int *)(puVar7 + 0x30);
    *puVar9 = param_6;
    *(undefined8 *)((long)&uStack_58 + lVar6) = 0;
    iVar2 = *(int *)(puVar4 + 0x2c);
    IVar8 = Foundation::Data::Iterator::typeMetadataAccessor();
    _swift_bridgeObjectRetain(param_6);
    _swift_retain(param_7);
    FUN_1000c9ffc((undefined1 *)((long)puVar9 + (long)iVar2),1,1,IVar8.unknown);
    iVar2 = *(int *)(puVar4 + 0x34);
    *(undefined8 *)((long)puVar9 + (long)iVar2) = 0;
    ((undefined8 *)((long)puVar9 + (long)iVar2))[1] = 0;
    *(undefined1 *)((long)puVar9 + (long)*(int *)(puVar4 + 0x38)) = 0;
    *(undefined8 *)((long)puVar9 + (long)*(int *)(puVar4 + 0x30)) = param_7;
    FUN_100b86bc4(puVar9,param_1);
    _swift_bridgeObjectRetain_n(param_6,2);
    _swift_retain_n(param_7,2);
    _swift_bridgeObjectRelease(param_6);
    _swift_release(puVar5);
    *(undefined8 *)(param_1 + iVar1) = 0;
  }
  else {
    puVar4 = &DAT_101046740;
    FUN_100b6730c();
    iVar1 = *(int *)(puVar4 + 0x30);
    _swift_bridgeObjectRetain_n(param_6,3);
    _swift_retain_n(param_7,3);
    lVar6 = param_1;
    FUN_100b86834(param_1,lVar10,lVar11 - lVar10,param_6,param_7);
    *(long *)(param_1 + iVar1) = lVar6;
    _swift_bridgeObjectRelease(param_6);
    _swift_release(puVar5);
  }
  _swift_release(param_7);
  return;
}



/* Address: 0x100baaddc | FUN_100baaddc */

void FUN_100baaddc(UnsafeRawBufferPointer param_1,_Representation param_2)

{
  Foundation::Data::_Representation::append(param_1,param_2);
  return;
}



/* Address: 0x100baae04 | FUN_100baae04 */

void FUN_100baae04(void)

{
  FUN_100baac10();
  return;
}



/* Address: 0x100baae20 | FUN_100baae20 */

void FUN_100baae20(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_100baae04(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x100baae3c | FUN_100baae3c */

void FUN_100baae3c(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x100baae68 | FUN_100baae68 */

void FUN_100baae68(void)

{
  FUN_100baaddc();
  return;
}



/* Address: 0x100baae7c | thunk_FUN_100ba9f78 */

void thunk_FUN_100ba9f78(void)

{
  thunk_FUN_100ba9f78();
  return;
}



/* Address: 0x100baae80 | FUN_100baae80 */

undefined1 * FUN_100baae80(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_58 [40];
  
  FUN_100076688(param_1,auStack_58);
  puVar1 = auStack_58;
  FUN_100baaedc(puVar1);
  FUN_100004594(param_1);
  return puVar1;
}



/* Address: 0x100baaedc | FUN_100baaedc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x000100baafe8) */
/* WARNING: Removing unreachable block (ram,0x000100bab344) */
/* WARNING: Removing unreachable block (ram,0x000100bab000) */
/* WARNING: Removing unreachable block (ram,0x000100bab064) */
/* WARNING: Removing unreachable block (ram,0x000100bab080) */

ID FUN_100baaedc(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  ID IVar4;
  NSString *pNVar5;
  undefined *puVar6;
  undefined *puVar7;
  NSDictionary *pNVar8;
  long lVar9;
  ID unaff_x20;
  long unaff_x21;
  long lVar10;
  undefined1 auStack_70 [15];
  undefined1 local_61;
  undefined1 local_58;
  undefined7 uStack_57;
  
  puVar3 = &DAT_101046778;
  FUN_100b6730c();
  lVar10 = *(long *)(puVar3 + -8);
  lVar9 = *(long *)(lVar10 + 0x40);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  switchD_100bab490::caseD_63();
  Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    _objc_allocWithZone();
    unaff_x20 = _objc_msgSend(unaff_x20,"init");
    local_61 = 0;
    IVar4 = unaff_x20;
    FUN_100b7e4f0();
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (&local_58,&DAT_100f3d290,&local_61,puVar3,&DAT_100f3d290,IVar4);
    lVar2 = CONCAT71(uStack_57,local_58);
    lVar1 = 0;
    if (lVar2 != 1) {
      lVar1 = lVar2;
    }
    _objc_msgSend(unaff_x20,"setBodySize:",lVar1);
    FUN_10001486c(lVar2);
    local_58 = 1;
    puVar6 = puVar3;
    Swift::KeyedDecodingContainer::_decodeIfPresent(&local_58);
    if (puVar6 == (undefined *)0x0) {
      pNVar5 = (NSString *)0x0;
    }
    else {
      pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(puVar6);
    }
    _objc_msgSend(unaff_x20,"setCookies:",pNVar5);
    puVar6 = &DAT_101044b60;
    FUN_100b6730c(&DAT_101044b60);
    local_61 = 2;
    puVar7 = puVar6;
    switchD_100bab490::caseD_25();
    Swift::KeyedDecodingContainer::_decodeIfPresent(&local_58,puVar6,&local_61,puVar3,puVar6,puVar7)
    ;
    lVar1 = CONCAT71(uStack_57,local_58);
    if (lVar1 == 0) {
      pNVar8 = (NSDictionary *)0x0;
    }
    else {
      pNVar8 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(lVar1);
    }
    _objc_msgSend(unaff_x20,"setHeaders:",pNVar8);
    local_58 = 3;
    puVar6 = puVar3;
    Swift::KeyedDecodingContainer::_decodeIfPresent(&local_58);
    if (puVar6 == (undefined *)0x0) {
      pNVar5 = (NSString *)0x0;
    }
    else {
      pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(puVar6);
    }
    _objc_msgSend(unaff_x20,"setFragment:",pNVar5);
    local_58 = 4;
    puVar6 = puVar3;
    Swift::KeyedDecodingContainer::_decodeIfPresent(&local_58);
    if (puVar6 == (undefined *)0x0) {
      pNVar5 = (NSString *)0x0;
    }
    else {
      pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(puVar6);
    }
    _objc_msgSend(unaff_x20,"setMethod:",pNVar5);
    local_58 = 5;
    puVar6 = puVar3;
    Swift::KeyedDecodingContainer::_decodeIfPresent(&local_58);
    if (puVar6 == (undefined *)0x0) {
      pNVar5 = (NSString *)0x0;
    }
    else {
      pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(puVar6);
    }
    _objc_msgSend(unaff_x20,"setQueryString:",pNVar5);
    local_58 = 6;
    puVar6 = puVar3;
    Swift::KeyedDecodingContainer::_decodeIfPresent(&local_58);
    if (puVar6 == (undefined *)0x0) {
      pNVar5 = (NSString *)0x0;
    }
    else {
      pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(puVar6);
    }
    _objc_msgSend(unaff_x20,"setUrl:",pNVar5);
    (**(code **)(lVar10 + 8))(auStack_70 + -(lVar9 + 0xfU & 0xfffffffffffffff0),puVar3);
    FUN_100004594(param_1);
  }
  else {
    FUN_100004594(param_1);
  }
  return unaff_x20;
}



/* Address: 0x100bab3bc | _TtC6Sentry22SentryRequestDecodable::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry22SentryRequestDecodable::init(ID param_1,SEL param_2)

{
  FUN_1001fddc8();
  return param_1;
}



/* Address: 0x100bab3dc | FUN_100bab3dc */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100bab3dc(void)

{
  return ZEXT816(0x100fa2450);
}



/* Address: 0x100bab3fc | FUN_100bab3fc */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100bab430 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ulong FUN_100bab3fc(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  FUN_100b6730c(&DAT_101045018);
  _swift_initStaticObject();
  uVar1 = Swift::_findStringSwitchCase(param_1,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  if (6 < uVar1) {
    uVar1 = 7;
  }
  return uVar1;
}



/* Address: 0x100bab458 | thunk_FUN_100bab3fc */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100bab430 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ulong thunk_FUN_100bab3fc(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  FUN_100b6730c(&DAT_101045018);
  _swift_initStaticObject();
  uVar1 = Swift::_findStringSwitchCase(param_1,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  if (6 < uVar1) {
    uVar1 = 7;
  }
  return uVar1;
}



/* Address: 0x100bab45c | FUN_100bab45c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x000100bab77c) */
/* WARNING: Removing unreachable block (ram,0x000100bab730) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

String FUN_100bab45c(TargetProtocolConformanceDescriptor *param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  undefined *puVar3;
  char *pcVar4;
  void *pvVar5;
  char *pcVar6;
  uint uVar7;
  char *unaff_x19;
  TargetProtocolConformanceDescriptor *unaff_x20;
  code *unaff_x21;
  String SVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  
code_r0x000100bab45c:
  pcVar4 = (char *)0xe900000000000065;
  pTVar2 = (TargetProtocolConformanceDescriptor *)&DAT_7a69735f79646f62;
  pcVar6 = (char *)((ulong)param_1 & 0xff);
  switch(pcVar6) {
  default:
    pcVar4 = &DAT_e700000000000000;
  case (char *)0x48:
  case (char *)0x56:
  case (char *)0x7c:
  case (char *)0x8a:
  case (char *)0xa4:
  case (char *)0xb2:
  case (char *)0xea:
    pTVar2 = (TargetProtocolConformanceDescriptor *)0x6b6f6f63;
  case (char *)0x3e:
  case (char *)0x46:
  case (char *)0x72:
  case (char *)0x7a:
  case (char *)0x9a:
  case (char *)0xa2:
  case (char *)0xc2:
  case (char *)0xca:
  case (char *)0xcc:
  case (char *)0xfa:
    pTVar2 = (TargetProtocolConformanceDescriptor *)
             ((ulong)pTVar2 & 0xffff0000ffffffff | 0x656900000000);
    break;
  case (char *)0x2:
  case (char *)0xb:
    pcVar4 = &DAT_e700000000000000;
    pTVar2 = (TargetProtocolConformanceDescriptor *)0x6568;
  case (char *)0x9:
    pTVar2 = (TargetProtocolConformanceDescriptor *)
             ((ulong)pTVar2 & 0xffffffff0000ffff | 0x64610000);
  case (char *)0xf4:
    pTVar2 = (TargetProtocolConformanceDescriptor *)
             ((ulong)pTVar2 & 0xffff0000ffffffff | 0x726500000000);
    break;
  case (char *)0x3:
  case (char *)0xc:
    pcVar4 = &DAT_e800000000000000;
    pTVar2 = (TargetProtocolConformanceDescriptor *)0x656d67617266;
  case (char *)0x10:
  case (char *)0x5c:
    SVar10.str = (char *)((ulong)pTVar2 & 0xffffffffffff | 0x746e000000000000);
    SVar10.bridgeObject = pcVar4;
    return SVar10;
  case (char *)0x4:
    pcVar4 = &DAT_e600000000000000;
    pTVar2 = (TargetProtocolConformanceDescriptor *)0x656d;
  case (char *)0xd6:
    pTVar2 = (TargetProtocolConformanceDescriptor *)
             ((ulong)pTVar2 & 0xffff00000000ffff | 0x646f68740000);
switchD_100bab490_caseD_7:
    SVar8.bridgeObject = pcVar4;
    SVar8.str = (char *)pTVar2;
    return SVar8;
  case (char *)0x5:
    pcVar4 = (char *)0xec000000676e6972;
  case (char *)0xd0:
  case (char *)0xd8:
  case (char *)0xe0:
    pTVar2 = (TargetProtocolConformanceDescriptor *)0x72657571;
switchD_100bab490_caseD_f:
    SVar11.str = (char *)((ulong)pTVar2 & 0xffffffff | 0x74735f7900000000);
    SVar11.bridgeObject = pcVar4;
    return SVar11;
  case (char *)0x6:
    pcVar4 = (char *)0xe300000000000000;
    pTVar2 = (TargetProtocolConformanceDescriptor *)0x7275;
  case (char *)0x50:
    pTVar2 = (TargetProtocolConformanceDescriptor *)(ulong)((uint)pTVar2 & 0xffff | 0x6c0000);
  case (char *)0x0:
    SVar12.bridgeObject = pcVar4;
    SVar12.str = (char *)pTVar2;
    return SVar12;
  case (char *)0x7:
    goto switchD_100bab490_caseD_7;
  case (char *)0xa:
    break;
  case (char *)0xe:
    goto switchD_100bab490_caseD_e;
  case (char *)0xf:
    goto switchD_100bab490_caseD_f;
  case (char *)0x20:
    goto switchD_100bab490_caseD_20;
  case (char *)0x21:
  case (char *)0x27:
  case (char *)0x2a:
  case (char *)0x2e:
  case (char *)0x35:
  case (char *)0x67:
    goto switchD_100bab490_caseD_21;
  case (char *)0x22:
  case (char *)0x64:
    goto switchD_100bab490_caseD_22;
  case (char *)0x23:
  case (char *)0x2c:
  case (char *)0xac:
    goto switchD_100bab490_caseD_23;
  case (char *)0x24:
    goto switchD_100bab490_caseD_24;
  case (char *)0x25:
  case (char *)0x38:
  case (char *)0x68:
    if (DAT_101046788 != (char *)0x0) {
      SVar22.bridgeObject = (void *)0xe900000000000065;
      SVar22.str = DAT_101046788;
      return SVar22;
    }
    puVar3 = &DAT_101044b60;
    FUN_100b6734c(&DAT_101044b60);
    pcVar4 = PTR__Swift__Swift__Dictionary<undefined,undefined>_>Swift__Decodable_100eabe78;
    _swift_getWitnessTable
              (PTR__Swift__Swift__Dictionary<undefined,undefined>_>Swift__Decodable_100eabe78,puVar3
               ,&stack0xffffffffffffffe0);
    DAT_101046788 = pcVar4;
    SVar23.bridgeObject = puVar3;
    SVar23.str = pcVar4;
    return SVar23;
  case (char *)0x28:
    goto switchD_100bab490_caseD_28;
  case (char *)0x29:
    goto switchD_100bab490_caseD_29;
  case (char *)0x2b:
  case (char *)0x69:
    goto switchD_100bab490_caseD_2b;
  case (char *)0x2f:
    goto switchD_100bab490_caseD_2f;
  case (char *)0x30:
  case (char *)0x61:
    goto switchD_100bab490_caseD_30;
  case (char *)0x31:
  case (char *)0x62:
    goto switchD_100bab490_caseD_31;
  case (char *)0x33:
    goto switchD_100bab490_caseD_33;
  case (char *)0x34:
switchD_100bab490_caseD_34:
    SVar20.bridgeObject = (void *)0xe900000000000065;
    SVar20.str = (char *)pTVar2;
    return SVar20;
  case (char *)0x39:
  case (char *)0x4d:
  case (char *)0x6d:
  case (char *)0x81:
  case (char *)0x95:
  case (char *)0xa9:
  case (char *)0xbd:
  case (char *)0xd1:
  case (char *)0xd9:
  case (char *)0xe1:
  case (char *)0xf5:
    pTVar2 = (TargetProtocolConformanceDescriptor *)
             &TargetProtocolConformanceDescriptor_100c9aff4.Flags;
  case (char *)0x5d:
  case (char *)0x91:
  case (char *)0xb9:
    pTVar2 = (TargetProtocolConformanceDescriptor *)&pTVar2[0xe3].TypeRef;
switchD_100bab490_caseD_f1:
    puVar3 = &DAT_100f39a40;
    _swift_getWitnessTable(pTVar2,&DAT_100f39a40);
    DAT_101046798 = pTVar2;
    SVar28.bridgeObject = puVar3;
    SVar28.str = (char *)pTVar2;
    return SVar28;
  case (char *)0x3a:
  case (char *)0x4e:
  case (char *)0x6e:
  case (char *)0x82:
  case (char *)0x96:
  case (char *)0xaa:
  case (char *)0xbe:
  case (char *)0xd2:
  case (char *)0xda:
  case (char *)0xe2:
  case (char *)0xf6:
    pvVar5 = (void *)(ulong)*(byte *)&unaff_x20->Protocol;
    FUN_100bed41c(&DAT_7a69735f79646f62,pvVar5);
    SVar14.bridgeObject = pvVar5;
    SVar14.str = (char *)pTVar2;
    return SVar14;
  case (char *)0x3c:
  case (char *)0x70:
  case (char *)0xe4:
    SVar29.str = *(char **)(pcVar6 + 0x7a0);
    if (SVar29.str != (char *)0x0) {
      SVar29.bridgeObject = (void *)0xe900000000000065;
      return SVar29;
    }
    pTVar2 = (TargetProtocolConformanceDescriptor *)&DAT_100c9be0c;
    pcVar4 = "";
  case (char *)0x52:
  case (char *)0x86:
  case (char *)0xae:
  case (char *)0xde:
  case (char *)0xe6:
    pcVar4 = pcVar4 + 0xa40;
    _swift_getWitnessTable(pTVar2,pcVar4);
    DAT_1010467a0 = pTVar2;
switchD_100bab490_caseD_dd:
    SVar30.bridgeObject = pcVar4;
    SVar30.str = (char *)pTVar2;
    return SVar30;
  case (char *)0x3d:
  case (char *)0x71:
  case (char *)0x99:
  case (char *)0xc1:
  case (char *)0xf9:
    pTVar2 = (TargetProtocolConformanceDescriptor *)
             CONCAT35(uRam7a69735f79646f67,CONCAT41(_DAT_7a69735f79646f63,DAT_7a69735f79646f62));
    pcVar4 = _DAT_7a69735f79646f6a;
    unaff_x19 = pcVar6;
  case (char *)0xa8:
    FUN_100bab3fc(pTVar2,pcVar4);
    *unaff_x19 = (char)pTVar2;
    SVar15.bridgeObject = pcVar4;
    SVar15.str = (char *)pTVar2;
    return SVar15;
  case (char *)0x51:
    pTVar2 = _DAT_7a69735f79646f8a;
    unaff_x19 = pcVar4;
    unaff_x20 = _DAT_7a69735f79646f8a;
    unaff_x21 = _DAT_7a69735f79646f82;
  case (char *)0x53:
  case (char *)0x87:
  case (char *)0xaf:
  case (char *)0xdf:
  case (char *)0xe7:
    _swift_retain(pTVar2);
    (*unaff_x21)();
    _swift_release(unaff_x20);
    FUN_100b78d38(unaff_x19);
    SVar31.bridgeObject = pcVar4;
    SVar31.str = unaff_x19;
    return SVar31;
  case (char *)0x60:
  case (char *)0x2d:
  case (char *)0x5e:
  case (char *)0x92:
  case (char *)0xba:
  case (char *)0xf2:
    thunk_FUN_100bab3fc();
    *pcVar6 = (char)pTVar2;
switchD_100bab490_caseD_80:
    SVar17.bridgeObject = pcVar4;
    SVar17.str = (char *)pTVar2;
    return SVar17;
  case (char *)0x63:
    pTVar2 = DAT_101046780;
    if (DAT_101046780 != (TargetProtocolConformanceDescriptor *)0x0)
    goto switchD_100bab490_caseD_34;
  case (char *)0x4c:
switchD_100bab490_caseD_22:
switchD_100bab490_caseD_30:
    pTVar2 = &TargetProtocolConformanceDescriptor_100c9befc;
switchD_100bab490_caseD_28:
    pcVar4 = "";
switchD_100bab490_caseD_24:
    pcVar4 = pcVar4 + 0xa40;
switchD_100bab490_caseD_2b:
    _swift_getWitnessTable(pTVar2,pcVar4);
switchD_100bab490_caseD_23:
    pcVar6 = (char *)&DAT_101046000;
switchD_100bab490_caseD_29:
    *(TargetProtocolConformanceDescriptor **)(pcVar6 + 0x780) = pTVar2;
    SVar21.bridgeObject = pcVar4;
    SVar21.str = (char *)pTVar2;
    return SVar21;
  case (char *)0x65:
    goto switchD_100bab490_caseD_65;
  case (char *)0x66:
    switchD_100bab490::caseD_63();
  case (char *)0x26:
switchD_100bab490_caseD_20:
    SVar18 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
    return SVar18;
  case (char *)0x6c:
    switchD_100bab490::caseD_63();
    SVar18 = (extension_Swift)::Swift::CodingKey::get_description();
    return SVar18;
  case (char *)0x80:
    goto switchD_100bab490_caseD_80;
  case (char *)0x84:
  case (char *)0xdc:
    if (DAT_101046790 != (TargetProtocolConformanceDescriptor *)0x0) {
      SVar26.bridgeObject = (void *)0xe900000000000065;
      SVar26.str = (char *)DAT_101046790;
      return SVar26;
    }
    pTVar2 = &TargetProtocolConformanceDescriptor_100c9bed4;
    pcVar4 = "\x01\x02";
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9bed4,&DAT_100f39a40);
    DAT_101046790 = pTVar2;
  case (char *)0xd5:
    SVar27.bridgeObject = pcVar4;
    SVar27.str = (char *)pTVar2;
    return SVar27;
  case (char *)0x85:
  case (char *)0xad:
    goto switchD_100bab490_caseD_85;
  case (char *)0x90:
  case (char *)0xf8:
  case (char *)0x32:
switchD_100bab490_caseD_33:
    unaff_x19 = pcVar6;
switchD_100bab490_caseD_2f:
    FUN_100baae80();
switchD_100bab490_caseD_31:
    if (unaff_x21 == (code *)0x0) {
switchD_100bab490_caseD_21:
      *(TargetProtocolConformanceDescriptor **)unaff_x19 = pTVar2;
    }
switchD_100bab490_caseD_65:
    SVar19.bridgeObject = pcVar4;
    SVar19.str = (char *)pTVar2;
    return SVar19;
  case (char *)0x94:
    SVar16.bridgeObject = (void *)0xe900000000000065;
    SVar16.str = &DAT_7a69735f79646f62;
    return SVar16;
  case (char *)0x98:
    return (String)ZEXT816(0x100f39a40);
  case (char *)0xb8:
    _DAT_7a69735f79646f63 = 0;
    DAT_7a69735f79646f62 = 0x6b;
    SVar25.bridgeObject = (void *)0xe900000000000065;
    SVar25.str = &DAT_7a69735f79646f62;
    return SVar25;
  case (char *)0xbc:
    pcVar6 = (char *)(ulong)*(byte *)&unaff_x20->Protocol;
    FUN_100bec848(pcVar6);
    SVar13.bridgeObject = pcVar4;
    SVar13.str = pcVar6;
    return SVar13;
  case (char *)0xc0:
    uVar7 = 0xc9bda0;
    if ((uint)pcVar6 < 0xff) {
      uVar7 = 1;
    }
    uVar1 = 0;
    if (0xf9 < param_3) {
      uVar1 = uVar7;
    }
                    /* WARNING: Could not recover jumptable at 0x000100bab720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_100bab724 + (ulong)(&BYTE_100c9bdac)[uVar1] * 4))();
    SVar24.bridgeObject = pcVar4;
    SVar24.str = (char *)pTVar2;
    return SVar24;
  case (char *)0xd4:
                    /* WARNING: Could not recover jumptable at 0x000100bab754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_100bab758 +
              (ulong)(byte)pcVar6[(ulong)(byte)pcVar6[0x100c9bda0] * 4 + 0x100bab494] * 4))();
    SVar18.bridgeObject = pcVar4;
    SVar18.str = (char *)pTVar2;
    return SVar18;
  case (char *)0xdd:
  case (char *)0xe5:
    goto switchD_100bab490_caseD_dd;
  case (char *)0xf1:
    goto switchD_100bab490_caseD_f1;
  }
  pTVar2 = (TargetProtocolConformanceDescriptor *)
           ((ulong)pTVar2 & 0xffffffffffff | 0x73000000000000);
switchD_100bab490_caseD_e:
  SVar9.bridgeObject = pcVar4;
  SVar9.str = (char *)pTVar2;
  return SVar9;
switchD_100bab490_caseD_85:
  param_1 = pTVar2;
  goto code_r0x000100bab45c;
}



/* Address: 0x100bab51c | FUN_100bab51c */

void FUN_100bab51c(undefined1 *param_1,undefined1 *param_2)

{
  FUN_100bec228(*param_1,*param_2);
  return;
}



/* Address: 0x100bab528 | switchD_100bab490::caseD_bc */

void switchD_100bab490::caseD_bc(void)

{
  undefined1 *unaff_x20;
  
  FUN_100bec848(*unaff_x20);
  return;
}



/* Address: 0x100bab530 | FUN_100bab530 */

void FUN_100bab530(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  FUN_100becfb4(param_1,*unaff_x20);
  return;
}



/* Address: 0x100bab538 | switchD_100bab490::caseD_3a */

void switchD_100bab490::caseD_3a(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  FUN_100bed41c(param_1,*unaff_x20);
  return;
}



/* Address: 0x100bab540 | FUN_100bab540 */

void FUN_100bab540(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_100bab3fc(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Address: 0x100bab56c | FUN_100bab56c */

void FUN_100bab56c(ulong *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  byte *unaff_x20;
  
  uVar1 = (ulong)*unaff_x20;
  FUN_100bab45c();
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}



/* Address: 0x100bab594 | FUN_100bab594 */

void FUN_100bab594(void)

{
  undefined1 *unaff_x20;
  
  FUN_100bab45c(*unaff_x20);
  return;
}



/* Address: 0x100bab59c | FUN_100bab59c */

void FUN_100bab59c(undefined1 *param_1,undefined1 param_2)

{
  thunk_FUN_100bab3fc();
  *param_1 = param_2;
  return;
}



/* Address: 0x100bab5c0 | switchD_100bab490::caseD_66 */

String switchD_100bab490::caseD_66(void)

{
  String SVar1;
  
  caseD_63();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x100bab5e8 | switchD_100bab490::caseD_6c */

String switchD_100bab490::caseD_6c(void)

{
  String SVar1;
  
  caseD_63();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x100bab610 | FUN_100bab610 */

void FUN_100bab610(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x21;
  
  FUN_100baae80();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}


