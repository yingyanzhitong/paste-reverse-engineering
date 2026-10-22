/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100be2a00 | FUN_100be2a00 */

void FUN_100be2a00(ulong *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  __int64 _Var5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  undefined1 auStack_a0 [24];
  undefined8 local_88;
  ulong uStack_80;
  long *local_70;
  ulong uStack_68;
  
  uVar8 = *param_1;
  uVar11 = uVar8;
  _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
  if ((((int)uVar11 == 0) || ((long)uVar8 < 0)) || ((uVar8 >> 0x3e & 1) != 0)) {
    FUN_100baff4c();
  }
  uVar11 = *(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10);
  plVar1 = (long *)((uVar8 & 0xffffffffffffff8) + 0x20);
  local_70 = plVar1;
  uStack_68 = uVar11;
  _Var5 = Swift::_minimumMergeRunLength(uVar11);
  if (_Var5 < (long)uVar11) {
    uVar14 = uVar11 >> 1;
    FUN_100be328c();
    local_88 = param_2;
    uStack_80 = uVar11 >> 1;
    FUN_100be32e4(&local_88,auStack_a0,&local_70,_Var5);
    *(undefined8 *)((uVar14 & 0xffffffffffffff8) + 0x10) = 0;
    _swift_bridgeObjectRelease(uVar14);
  }
  else if (1 < uVar11) {
    lVar7 = -1;
    uVar14 = 1;
    plVar13 = plVar1;
    do {
      lVar9 = plVar1[uVar14];
      lVar12 = lVar7;
      plVar15 = plVar13;
      do {
        lVar2 = SentryBinaryImageInfo::address;
        lVar6 = *plVar15;
        _swift_beginAccess(lVar9 + SentryBinaryImageInfo::address,&local_88,0,0);
        lVar3 = SentryBinaryImageInfo::address;
        uVar10 = *(ulong *)(lVar9 + lVar2);
        _swift_beginAccess(lVar6 + SentryBinaryImageInfo::address,auStack_a0,0,0);
        if (uVar10 <= *(ulong *)(lVar6 + lVar3)) break;
        lVar2 = *plVar15;
        lVar9 = plVar15[1];
        *plVar15 = lVar9;
        plVar15[1] = lVar2;
        bVar4 = lVar12 != -1;
        lVar12 = lVar12 + 1;
        plVar15 = plVar15 + -1;
      } while (bVar4);
      uVar14 = uVar14 + 1;
      plVar13 = plVar13 + 1;
      lVar7 = lVar7 + -1;
    } while (uVar14 != uVar11);
  }
  *param_1 = uVar8;
  return;
}



/* Address: 0x100be2b8c | _TtC6Sentry24SentryDebugImageProvider::getDebugImagesForImageAddressesFromCache: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC6Sentry24SentryDebugImageProvider::getDebugImagesForImageAddressesFromCache_
             (ID param_1,SEL param_2,ID param_3)

{
  Set<undefined> SVar1;
  Set<undefined> SVar2;
  NSArray *pNVar3;
  
  SVar1 = (extension_Foundation)::Swift::Set::__unconditionallyBridgeFromObjectiveC();
  SVar2 = SVar1;
  FUN_100be27dc(SVar1.unknown);
  _swift_bridgeObjectRelease(SVar1.unknown);
  FUN_100b673ec(0,&DAT_101044940,&PTR_SentryDebugMeta_100f8e020);
  pNVar3 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(SVar2.unknown);
  return (ID)pNVar3;
}



/* Address: 0x100be2c2c | FUN_100be2c2c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_100be2c2c(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ID self;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar3 = *(long *)(unaff_x20 + _TtC6Sentry24SentryDebugImageProvider::binaryImageCache);
  self = *(ID *)(lVar3 + SentryBinaryImageCache::lock);
  _objc_msgSend(self,"lock");
  lVar2 = SentryBinaryImageCache::cache;
  FUN_100b78ca0(lVar3 + SentryBinaryImageCache::cache,auStack_48);
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (*(undefined **)(lVar3 + lVar2) != (undefined *)0x0) {
    puVar1 = *(undefined **)(lVar3 + lVar2);
  }
  _swift_bridgeObjectRetain();
  _objc_msgSend(self,"unlock");
  uVar4 = 0;
  FUN_10021b704(0);
  puVar5 = puVar1;
  FUN_100be2108(puVar1,uVar4);
  _swift_bridgeObjectRelease(puVar1);
  return puVar5;
}



/* Address: 0x100be2cfc | _TtC6Sentry24SentryDebugImageProvider::getDebugImagesFromCache */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry24SentryDebugImageProvider::getDebugImagesFromCache(ID param_1,SEL param_2)

{
  NSArray *pNVar1;
  
  FUN_100be2c2c(param_1);
  FUN_100b673ec(0,&DAT_101044940,&PTR_SentryDebugMeta_100f8e020);
  pNVar1 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_1);
  return (ID)pNVar1;
}



/* Address: 0x100be2d60 | FUN_100be2d60 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100be2d60(undefined *param_1,undefined *param_2)

{
  _CocoaArrayWrapper _Var1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  
  if ((ulong)param_1 >> 0x3e == 0) {
    lVar10 = *(long *)(((ulong)param_1 & 0xffffffffffffff8) + 0x10);
    puVar8 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    _Var1.unknown = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if ((long)param_1 < 0) {
      _Var1.unknown = param_1;
    }
    lVar10 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
    puVar8 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  PTR___swiftEmptyArrayStorage_100eae0d8 = puVar8;
  if (lVar10 != 0) {
    if (lVar10 < 1) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100be2ef0);
      (*pcVar5)();
    }
    _swift_bridgeObjectRetain(param_1);
    lVar11 = 0;
    puVar8 = PTR___swiftEmptyArrayStorage_100eae0d8;
    do {
      if (((ulong)param_1 & 0xc000000000000001) == 0) {
        lVar6 = *(long *)(param_1 + lVar11 * 8 + 0x20);
        puVar9 = param_2;
      }
      else {
        lVar6 = lVar11;
        puVar9 = param_1;
        FUN_100b6d718();
      }
      FUN_100be3ec0();
      param_2 = puVar9;
      if (puVar9 != (undefined *)0x0) {
        puVar7 = puVar8;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((ulong)puVar7 & 1) == 0) {
          param_2 = (undefined *)(*(long *)(puVar8 + 0x10) + 1);
          puVar8 = (undefined *)0x0;
          FUN_100be3f44();
        }
        uVar2 = *(ulong *)(puVar8 + 0x10);
        if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar2) {
          puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
          param_2 = (undefined *)(uVar2 + 1);
          FUN_100be3f44();
        }
        *(undefined **)(puVar8 + 0x10) = (undefined *)(uVar2 + 1);
        *(long *)(puVar8 + uVar2 * 0x10 + 0x20) = lVar6;
        *(undefined **)(puVar8 + uVar2 * 0x10 + 0x28) = puVar9;
      }
      lVar11 = lVar11 + 1;
    } while (lVar10 != lVar11);
    _swift_bridgeObjectRelease(param_1);
  }
  lVar10 = *(long *)(puVar8 + 0x10);
  if (lVar10 != 0) {
    puVar12 = (undefined8 *)(puVar8 + 0x28);
    do {
      uVar3 = puVar12[-1];
      uVar4 = *puVar12;
      _swift_bridgeObjectRetain(uVar4);
      FUN_10007253c(auStack_70,uVar3,uVar4);
      _swift_bridgeObjectRelease(local_68);
      puVar12 = puVar12 + 2;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  _swift_bridgeObjectRelease(puVar8);
  return;
}



/* Address: 0x100be2ef0 | FUN_100be2ef0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100be2ef0(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  class_t *self;
  ID self_00;
  NSString *pNVar3;
  undefined *self_01;
  ID IVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  _swift_getObjectType();
  self = &objc::class_t::SentryDebugMeta;
  _objc_allocWithZone();
  self_00 = _objc_msgSend((ID)self,"init");
  lVar6 = param_1 + SentryBinaryImageInfo::uuid;
  FUN_100b78ca0(lVar6,auStack_58);
  lVar6 = *(long *)(lVar6 + 8);
  if (lVar6 == 0) {
    pNVar3 = (NSString *)0x0;
  }
  else {
    _swift_bridgeObjectRetain(lVar6);
    pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(lVar6);
  }
  _objc_msgSend(self_00,"setDebugID:",pNVar3);
  FUN_100bae080(0x6f6863616d,&DAT_e500000000000000,self_00);
  lVar6 = SentryBinaryImageInfo::vmAddress;
  FUN_100b78ca0(param_1 + SentryBinaryImageInfo::vmAddress,auStack_70);
  if (*(long *)(param_1 + lVar6) == 0) {
    uVar5 = 0;
  }
  else {
    FUN_100be30e8();
    FUN_100bae0a4();
    uVar5 = *(undefined8 *)(param_1 + lVar6);
  }
  _objc_msgSend(self_00,"setImageVmAddressRaw:",uVar5);
  lVar6 = SentryBinaryImageInfo::address;
  FUN_100b78ca0(param_1 + SentryBinaryImageInfo::address,auStack_88);
  FUN_100be30e8(*(undefined8 *)(param_1 + lVar6));
  FUN_100bae098();
  _objc_msgSend(self_00,"setImageAddressRaw:",*(undefined8 *)(param_1 + lVar6));
  lVar6 = SentryBinaryImageInfo::size;
  FUN_100b78ca0(param_1 + SentryBinaryImageInfo::size,auStack_a0);
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  self_01 = &_OBJC_CLASS___NSNumber;
  _objc_allocWithZone();
  IVar4 = _objc_msgSend((ID)self_01,"initWithUnsignedLongLong:",uVar5);
  _objc_msgSend(self_00,"setImageSize:",IVar4);
  puVar1 = (undefined8 *)(param_1 + SentryBinaryImageInfo::name);
  FUN_100b78ca0(puVar1,auStack_b8);
  uVar5 = *puVar1;
  uVar2 = puVar1[1];
  _swift_bridgeObjectRetain(uVar2);
  FUN_100be3e70(uVar5,uVar2,self_00);
  return self_00;
}



/* Address: 0x100be30e8 | FUN_100be30e8 */

String FUN_100be30e8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  String SVar3;
  
  puVar2 = &DAT_1010458c8;
  FUN_100b6730c();
  _swift_allocObject();
  *(undefined8 *)(puVar2 + 0x18) = 2;
  *(undefined8 *)(puVar2 + 0x10) = 1;
  puVar1 = PTR___protocol_witness_table_for_Swift_UInt64___Swift_CVarArg_in_Swift_100eadec8;
  *(undefined **)(puVar2 + 0x38) = PTR___type_metadata_for_Swift_UInt64_100eade90;
  *(undefined **)(puVar2 + 0x40) = puVar1;
  *(undefined8 *)(puVar2 + 0x20) = param_1;
  SVar3 = (extension_Foundation)::Swift::String::_init();
  return SVar3;
}



/* Address: 0x100be315c | FUN_100be315c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100be315c(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = _TtC6Sentry24SentryDebugImageProvider::binaryImageCache;
  if (DAT_101042e28 != -1) {
    _swift_once(&DAT_101042e28,FUN_100bb4830);
  }
  *(undefined8 *)(unaff_x20 + lVar1) = DAT_101046d58;
  FUN_100be31e4();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffc0,"init");
  FUN_100b69e90();
  return;
}



/* Address: 0x100be31e4 | FUN_100be31e4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100be31e4(void)

{
  return ZEXT816(0x100fa53d8);
}



/* Address: 0x100be3204 | _TtC6Sentry24SentryDebugImageProvider::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry24SentryDebugImageProvider::init(ID param_1,SEL param_2)

{
  FUN_100be315c();
  return param_1;
}



/* Address: 0x100be3224 | FUN_100be3224 */

void FUN_100be3224(void)

{
  FUN_100be31e4();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"dealloc");
  return;
}



/* Address: 0x100be3254 | _TtC6Sentry24SentryDebugImageProvider::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry24SentryDebugImageProvider::_cxx_destruct(ID param_1,SEL param_2)

{
  return;
}



/* Address: 0x100be3264 | FUN_100be3264 */

void FUN_100be3264(undefined8 param_1,undefined8 param_2)

{
  _swift_lookUpClassMethod(param_1,param_2,&TargetClassDescriptor_100cd0800);
  return;
}



/* Address: 0x100be3270 | FUN_100be3270 */

void FUN_100be3270(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100be3288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0x70))();
  return;
}



/* Address: 0x100be328c | FUN_100be328c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100be32b4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100be328c(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  _ArrayBuffer<undefined> _Var3;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100be32e4);
    (*pcVar1)();
  }
  if (param_1 != 0) {
    uVar2 = 0;
    FUN_100baf3ec(0);
    _Var3 = Swift::Array<undefined>::_allocateBufferUninitialized(uVar2,uVar2);
    *(long *)(((ulong)_Var3.unknown & 0xffffffffffffff8) + 0x10) = param_1;
  }
  return;
}



/* Address: 0x100be32e4 | FUN_100be32e4 */

void FUN_100be32e4(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  undefined8 uVar15;
  ulong uVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  long unaff_x21;
  long lVar20;
  long *plVar21;
  long *plVar22;
  long lVar23;
  long *plVar24;
  long lVar25;
  undefined8 *puVar26;
  long lVar27;
  size_t sVar28;
  long *plVar29;
  long *plVar30;
  size_t sVar31;
  long lVar32;
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  undefined *local_58;
  
  local_58 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar27 = param_3[1];
  if (0 < lVar27) {
    lVar23 = 0;
    do {
      lVar12 = SentryBinaryImageInfo::address;
      lVar19 = lVar23 + 1;
      if (lVar19 < lVar27) {
        lVar25 = *param_3;
        lVar18 = *(long *)(lVar25 + lVar19 * 8);
        lVar20 = *(long *)(lVar25 + lVar23 * 8);
        _swift_beginAccess(lVar18 + SentryBinaryImageInfo::address,auStack_110,0,0);
        lVar19 = SentryBinaryImageInfo::address;
        uVar8 = *(ulong *)(lVar18 + lVar12);
        _swift_beginAccess(lVar20 + SentryBinaryImageInfo::address,auStack_128,0,0);
        uVar9 = *(ulong *)(lVar20 + lVar19);
        lVar12 = lVar23 + 2;
        puVar26 = (undefined8 *)(lVar25 + lVar23 * 8);
        lVar19 = lVar12;
        if (lVar12 < lVar27) {
          plVar21 = puVar26 + 2;
          do {
            lVar20 = SentryBinaryImageInfo::address;
            lVar18 = plVar21[-1];
            lVar19 = *plVar21;
            _swift_beginAccess(lVar19 + SentryBinaryImageInfo::address,auStack_140,0,0);
            lVar1 = SentryBinaryImageInfo::address;
            uVar16 = *(ulong *)(lVar19 + lVar20);
            _swift_beginAccess(lVar18 + SentryBinaryImageInfo::address,auStack_158,0,0);
            lVar19 = lVar12;
            if (uVar9 < uVar8 == uVar16 <= *(ulong *)(lVar18 + lVar1)) break;
            lVar12 = lVar12 + 1;
            plVar21 = plVar21 + 1;
            lVar19 = lVar27;
          } while (lVar12 < lVar27);
        }
        if (uVar9 < uVar8) {
          if (lVar19 < lVar23) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100be3984);
            (*pcVar3)();
          }
          if (lVar23 < lVar19) {
            puVar10 = (undefined8 *)(lVar25 + lVar19 * 8);
            lVar12 = lVar19;
            lVar27 = lVar23;
            do {
              puVar10 = puVar10 + -1;
              lVar12 = lVar12 + -1;
              if (lVar27 != lVar12) {
                if (lVar25 == 0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x100be3994);
                  (*pcVar3)();
                }
                uVar15 = *puVar26;
                *puVar26 = *puVar10;
                *puVar10 = uVar15;
              }
              lVar27 = lVar27 + 1;
              puVar26 = puVar26 + 1;
            } while (lVar27 < lVar12);
          }
        }
      }
      lVar27 = param_3[1];
      lVar12 = lVar19;
      if (lVar19 < lVar27) {
        if (SBORROW8(lVar19,lVar23)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100be3980);
          (*pcVar3)();
        }
        if (lVar19 - lVar23 < param_4) {
          if (SCARRY8(lVar23,param_4)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100be3988);
            (*pcVar3)();
          }
          lVar18 = lVar23 + param_4;
          if (lVar27 <= lVar23 + param_4) {
            lVar18 = lVar27;
          }
          if (lVar18 < lVar23) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100be398c);
            (*pcVar3)();
          }
          if (lVar19 != lVar18) {
            lVar27 = *param_3;
            plVar21 = (long *)(lVar27 + lVar19 * 8 + -8);
            lVar20 = lVar23 - lVar19;
            do {
              lVar25 = *(long *)(lVar27 + lVar19 * 8);
              lVar12 = lVar20;
              plVar24 = plVar21;
              do {
                lVar1 = SentryBinaryImageInfo::address;
                lVar32 = *plVar24;
                _swift_beginAccess(lVar25 + SentryBinaryImageInfo::address,auStack_e0,0,0);
                lVar2 = SentryBinaryImageInfo::address;
                uVar8 = *(ulong *)(lVar25 + lVar1);
                _swift_beginAccess(lVar32 + SentryBinaryImageInfo::address,auStack_f8,0,0);
                if (uVar8 <= *(ulong *)(lVar32 + lVar2)) break;
                if (lVar27 == 0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x100be3990);
                  (*pcVar3)();
                }
                lVar1 = *plVar24;
                lVar25 = plVar24[1];
                *plVar24 = lVar25;
                plVar24[1] = lVar1;
                bVar4 = lVar12 != -1;
                lVar12 = lVar12 + 1;
                plVar24 = plVar24 + -1;
              } while (bVar4);
              lVar19 = lVar19 + 1;
              plVar21 = plVar21 + 1;
              lVar20 = lVar20 + -1;
              lVar12 = lVar18;
            } while (lVar19 != lVar18);
          }
        }
      }
      puVar7 = local_58;
      if (lVar12 < lVar23) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100be397c);
        (*pcVar3)();
      }
      puVar5 = local_58;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar6 = puVar7;
      if (((ulong)puVar5 & 1) == 0) {
        puVar6 = (undefined *)0x0;
        FUN_100b6e948(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7);
      }
      uVar8 = *(ulong *)(puVar6 + 0x10);
      puVar7 = puVar6;
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar8) {
        puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
        FUN_100b6e948(puVar7,uVar8 + 1,1,puVar6);
      }
      *(ulong *)(puVar7 + 0x10) = uVar8 + 1;
      *(long *)(puVar7 + uVar8 * 0x10 + 0x20) = lVar23;
      *(long *)(puVar7 + uVar8 * 0x10 + 0x28) = lVar12;
      local_58 = puVar7;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100be399c);
        (*pcVar3)();
      }
      FUN_100be39a0(&local_58,*param_1,param_3);
      puVar7 = local_58;
      if (unaff_x21 != 0) goto LAB_100be3944;
      lVar27 = param_3[1];
      lVar23 = lVar12;
    } while (lVar12 < lVar27);
  }
  param_1 = (long *)*param_1;
  if (param_1 == (long *)0x0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100be39a0);
    (*pcVar3)();
  }
  uVar8 = *(ulong *)(local_58 + 0x10);
  puVar7 = local_58;
  if (1 < uVar8) {
    do {
      lVar27 = *param_3;
      if (lVar27 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100be3998);
        (*pcVar3)();
      }
      lVar18 = *(long *)(puVar7 + uVar8 * 0x10);
      lVar12 = uVar8 - 1;
      lVar23 = *(long *)(puVar7 + lVar12 * 0x10 + 0x20);
      lVar19 = *(long *)(puVar7 + lVar12 * 0x10 + 0x28);
      plVar24 = (long *)(lVar27 + lVar18 * 8);
      lVar25 = lVar23 * 8;
      plVar17 = (long *)(lVar27 + lVar23 * 8);
      lVar20 = lVar19 * 8;
      plVar22 = (long *)(lVar27 + lVar19 * 8);
      sVar28 = lVar25 + lVar18 * -8;
      sVar31 = lVar20 + lVar23 * -8;
      plVar21 = param_1;
      if ((long)sVar28 < (long)sVar31) {
        if (plVar24 != param_1 || plVar17 <= param_1) {
          _memmove(param_1,plVar24,sVar28);
        }
        plVar14 = param_1 + (lVar23 - lVar18);
        plVar11 = plVar24;
        plVar13 = param_1;
        if ((lVar20 + lVar23 * -8 != 0 && lVar25 <= lVar20) && 0 < (long)sVar28) {
          do {
            lVar27 = SentryBinaryImageInfo::address;
            lVar20 = *plVar17;
            lVar25 = *plVar13;
            _swift_beginAccess(lVar20 + SentryBinaryImageInfo::address,auStack_b0,0,0);
            lVar23 = SentryBinaryImageInfo::address;
            uVar9 = *(ulong *)(lVar20 + lVar27);
            _swift_beginAccess(lVar25 + SentryBinaryImageInfo::address,auStack_c8,0,0);
            if (*(ulong *)(lVar25 + lVar23) < uVar9) {
              plVar11 = plVar17;
              plVar17 = plVar17 + 1;
              plVar21 = plVar13;
            }
            else {
              plVar21 = plVar13 + 1;
              plVar11 = plVar13;
            }
            if (plVar24 != plVar11) {
              *plVar24 = *plVar11;
            }
            plVar24 = plVar24 + 1;
            plVar11 = plVar24;
          } while ((plVar21 < plVar14) && (plVar13 = plVar21, plVar17 < plVar22));
        }
      }
      else {
        if (plVar17 != param_1 || plVar22 <= param_1) {
          _memmove(param_1,plVar17,sVar31);
        }
        plVar14 = param_1 + (lVar19 - lVar23);
        plVar13 = plVar14;
        plVar11 = plVar17;
        if ((lVar25 + lVar18 * -8 != 0 && lVar18 * 8 <= lVar25) && 0 < (long)sVar31) {
          do {
            lVar27 = SentryBinaryImageInfo::address;
            plVar14 = plVar13 + -1;
            lVar20 = *plVar14;
            plVar29 = plVar17 + -1;
            lVar25 = *plVar29;
            _swift_beginAccess(lVar20 + SentryBinaryImageInfo::address,auStack_80,0,0);
            lVar23 = SentryBinaryImageInfo::address;
            uVar9 = *(ulong *)(lVar20 + lVar27);
            _swift_beginAccess(lVar25 + SentryBinaryImageInfo::address,auStack_98,0,0);
            plVar11 = plVar17;
            plVar30 = plVar14;
            if (*(ulong *)(lVar25 + lVar23) < uVar9) {
              plVar14 = plVar13;
              plVar11 = plVar29;
              plVar30 = plVar29;
              plVar13 = plVar17;
            }
            if (plVar22 != plVar13) {
              plVar22[-1] = *plVar30;
            }
          } while ((plVar24 < plVar11) &&
                  (plVar13 = plVar14, plVar17 = plVar11, plVar22 = plVar22 + -1, param_1 < plVar14))
          ;
        }
      }
      lVar27 = ((long)plVar14 - (long)plVar21) / 8;
      if (plVar11 != plVar21 || plVar21 + lVar27 <= plVar11) {
        _memmove(plVar11,plVar21,lVar27 << 3);
      }
      if (lVar19 < lVar18) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100be3970);
        (*pcVar3)();
      }
      puVar5 = puVar7;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((ulong)puVar5 & 1) == 0) {
        FUN_10009a958();
      }
      uVar9 = *(ulong *)(puVar7 + 0x10);
      if ((long)uVar9 <= (long)(uVar8 - 2)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100be3974);
        (*pcVar3)();
      }
      *(long *)(puVar7 + uVar8 * 0x10) = lVar18;
      *(long *)((long)(puVar7 + uVar8 * 0x10) + 8) = lVar19;
      lVar27 = uVar9 - uVar8;
      if (uVar9 < uVar8) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100be3978);
        (*pcVar3)();
      }
      uVar8 = uVar9 - 1;
      _memmove(puVar7 + lVar12 * 0x10 + 0x20,puVar7 + lVar12 * 0x10 + 0x30,lVar27 * 0x10);
      *(ulong *)(puVar7 + 0x10) = uVar8;
    } while (2 < uVar9);
  }
LAB_100be3944:
  _swift_bridgeObjectRelease(puVar7);
  return;
}



/* Address: 0x100be39a0 | FUN_100be39a0 */

undefined8 FUN_100be39a0(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long unaff_x21;
  
  lVar8 = *param_1;
  uVar9 = *(ulong *)(lVar8 + 0x10);
  do {
    if (uVar9 < 2) {
      return 1;
    }
    lVar6 = uVar9 - 1;
    plVar1 = (long *)(lVar8 + uVar9 * 0x10);
    if (uVar9 < 4) {
      if (uVar9 == 3) {
        bVar5 = SBORROW8(*(long *)(lVar8 + 0x28),*(long *)(lVar8 + 0x20));
        lVar10 = *(long *)(lVar8 + 0x28) - *(long *)(lVar8 + 0x20);
LAB_100be3a34:
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100be3b08);
          (*pcVar4)();
        }
        lVar11 = plVar1[1] - *plVar1;
        if (SBORROW8(plVar1[1],*plVar1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100be3b14);
          (*pcVar4)();
        }
        plVar1 = (long *)(lVar8 + 0x20 + lVar6 * 0x10);
        lVar7 = *plVar1;
        lVar2 = plVar1[1];
        lVar3 = lVar2 - lVar7;
        if (SBORROW8(lVar2,lVar7)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100be3b20);
          (*pcVar4)();
        }
        if (SCARRY8(lVar11,lVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100be3b24);
          (*pcVar4)();
        }
        bVar5 = false;
        if (lVar10 <= lVar11 + lVar3) {
          lVar7 = uVar9 - 2;
          if (lVar3 <= lVar10) {
            lVar7 = lVar6;
          }
          goto LAB_100be3ac4;
        }
      }
      else {
        bVar5 = SBORROW8(plVar1[1],*plVar1);
        lVar11 = plVar1[1] - *plVar1;
      }
      if (bVar5) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100be3b10);
        (*pcVar4)();
      }
      lVar8 = lVar8 + lVar6 * 0x10;
      lVar10 = *(long *)(lVar8 + 0x20);
      lVar8 = *(long *)(lVar8 + 0x28);
      if (SBORROW8(lVar8,lVar10)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100be3b1c);
        (*pcVar4)();
      }
      lVar7 = lVar6;
      if (lVar8 - lVar10 < lVar11) {
        return 1;
      }
    }
    else {
      lVar11 = lVar8 + 0x20 + uVar9 * 0x10;
      if (SBORROW8(*(long *)(lVar11 + -0x38),*(long *)(lVar11 + -0x40))) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100be3b00);
        (*pcVar4)();
      }
      lVar10 = *(long *)(lVar11 + -0x28) - *(long *)(lVar11 + -0x30);
      if (SBORROW8(*(long *)(lVar11 + -0x28),*(long *)(lVar11 + -0x30))) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100be3b04);
        (*pcVar4)();
      }
      lVar7 = plVar1[1] - *plVar1;
      if (SBORROW8(plVar1[1],*plVar1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100be3b0c);
        (*pcVar4)();
      }
      if (SCARRY8(lVar10,lVar7)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100be3b18);
        (*pcVar4)();
      }
      bVar5 = false;
      if (lVar10 + lVar7 < *(long *)(lVar11 + -0x38) - *(long *)(lVar11 + -0x40))
      goto LAB_100be3a34;
      plVar1 = (long *)(lVar8 + 0x20 + lVar6 * 0x10);
      lVar8 = *plVar1;
      lVar11 = plVar1[1];
      if (SBORROW8(lVar11,lVar8)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100be3b28);
        (*pcVar4)();
      }
      lVar7 = uVar9 - 2;
      if (lVar11 - lVar8 <= lVar10) {
        lVar7 = lVar6;
      }
    }
LAB_100be3ac4:
    FUN_100be3b28(param_1,lVar7,param_2,param_3);
    if (unaff_x21 != 0) {
      return 1;
    }
    lVar8 = *param_1;
    uVar9 = *(ulong *)(lVar8 + 0x10);
  } while( true );
}



/* Address: 0x100be3b28 | FUN_100be3b28 */

undefined8 FUN_100be3b28(ulong *param_1,ulong param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  code *pcVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x21;
  ulong uVar7;
  long lVar8;
  
  uVar3 = param_2 - 1;
  if (SBORROW8(param_2,1)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100be3c00);
    (*pcVar4)();
  }
  if ((long)uVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100be3c04);
    (*pcVar4)();
  }
  uVar7 = *param_1;
  if (*(ulong *)(uVar7 + 0x10) <= uVar3) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100be3c08);
    (*pcVar4)();
  }
  if (param_2 < *(ulong *)(uVar7 + 0x10)) {
    lVar6 = *param_4;
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100be3c28);
      (*pcVar4)();
    }
    lVar8 = *(long *)(uVar7 + 0x20 + uVar3 * 0x10);
    plVar1 = (long *)(uVar7 + 0x20 + param_2 * 0x10);
    lVar2 = plVar1[1];
    FUN_100be3c28(lVar6 + lVar8 * 8,lVar6 + *plVar1 * 8,lVar6 + lVar2 * 8,param_3);
    if (unaff_x21 == 0) {
      if (lVar2 < lVar8) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100be3c10);
        (*pcVar4)();
      }
      uVar5 = uVar7;
      _swift_isUniquelyReferenced_nonNull_native();
      if ((uVar5 & 1) == 0) {
        FUN_10009a958();
      }
      if (*(ulong *)(uVar7 + 0x10) <= uVar3) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100be3c24);
        (*pcVar4)();
      }
      lVar6 = uVar7 + uVar3 * 0x10;
      *(long *)(lVar6 + 0x20) = lVar8;
      *(long *)(lVar6 + 0x28) = lVar2;
      *param_1 = uVar7;
      FUN_100bae238(param_2);
    }
    return 1;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x100be3c0c);
  (*pcVar4)();
}



/* Address: 0x100be3c28 | FUN_100be3c28 */

undefined8 FUN_100be3c28(long *param_1,long *param_2,long *param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar1 = ((long)param_2 - (long)param_1) / 8;
  lVar2 = ((long)param_3 - (long)param_2) / 8;
  plVar7 = param_4;
  if (lVar1 < lVar2) {
    thunk_FUN_100b693f4(param_1,lVar1,param_4);
    plVar8 = param_4 + lVar1;
    plVar6 = param_1;
    if (param_2 < param_3 && 7 < (long)param_2 - (long)param_1) {
      do {
        lVar1 = SentryBinaryImageInfo::address;
        lVar9 = *param_2;
        lVar12 = *param_4;
        _swift_beginAccess(lVar9 + SentryBinaryImageInfo::address,auStack_78,0,0);
        lVar2 = SentryBinaryImageInfo::address;
        uVar10 = *(ulong *)(lVar9 + lVar1);
        _swift_beginAccess(lVar12 + SentryBinaryImageInfo::address,auStack_90,0,0);
        if (*(ulong *)(lVar12 + lVar2) < uVar10) {
          plVar6 = param_2;
          plVar7 = param_4;
          param_2 = param_2 + 1;
        }
        else {
          plVar7 = param_4 + 1;
          plVar6 = param_4;
        }
        if (param_1 != plVar6) {
          *param_1 = *plVar6;
        }
        plVar6 = param_1 + 1;
        param_4 = plVar7;
        param_1 = plVar6;
      } while (plVar7 < plVar8 && param_2 < param_3);
    }
  }
  else {
    thunk_FUN_100b693f4(param_2,lVar2,param_4);
    plVar8 = param_4 + lVar2;
    plVar6 = param_2;
    if (param_1 < param_2 && 7 < (long)param_3 - (long)param_2) {
      do {
        lVar1 = SentryBinaryImageInfo::address;
        plVar6 = plVar8 + -1;
        lVar12 = *plVar6;
        plVar11 = param_2 + -1;
        lVar9 = *plVar11;
        _swift_beginAccess(lVar12 + SentryBinaryImageInfo::address,auStack_78,0,0);
        lVar2 = SentryBinaryImageInfo::address;
        uVar10 = *(ulong *)(lVar12 + lVar1);
        _swift_beginAccess(lVar9 + SentryBinaryImageInfo::address,auStack_90,0,0);
        plVar4 = plVar6;
        plVar5 = param_2;
        plVar3 = plVar8;
        if (*(ulong *)(lVar9 + lVar2) < uVar10) {
          plVar6 = plVar11;
          plVar4 = plVar8;
          plVar5 = plVar11;
          plVar3 = param_2;
        }
        param_2 = plVar5;
        plVar8 = plVar4;
        if (param_3 != plVar3) {
          param_3[-1] = *plVar6;
        }
        plVar6 = param_2;
        param_3 = param_3 + -1;
      } while ((param_2 > param_1 && param_4 <= plVar8) && (param_2 <= param_1 || plVar8 != param_4)
              );
    }
  }
  lVar1 = ((long)plVar8 - (long)plVar7) / 8;
  if (plVar6 != plVar7 || plVar7 + lVar1 <= plVar6) {
    _memmove(plVar6,plVar7,lVar1 << 3);
  }
  return 1;
}



/* Address: 0x100be3e70 | FUN_100be3e70 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100be3e70(undefined8 param_1,undefined8 param_2,ID param_3)

{
  NSString *pNVar1;
  
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_2);
  _objc_msgSend(param_3,"setCodeFile:",pNVar1);
  return 0;
}



/* Address: 0x100be3ec0 | FUN_100be3ec0 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

String FUN_100be3ec0(ID param_1)

{
  ID IVar1;
  String SVar2;
  
  IVar1 = _objc_msgSend(param_1,"imageAddress");
  if (IVar1 == 0) {
    SVar2 = (String)ZEXT816(0);
  }
  else {
    SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  return SVar2;
}



/* Address: 0x100be3f24 | FUN_100be3f24 */

void FUN_100be3f24(long param_1)

{
  FUN_100071b08(0,*(undefined8 *)(param_1 + 0x10),0,param_1);
  return;
}



/* Address: 0x100be3f38 | FUN_100be3f38 */

void FUN_100be3f38(void)

{
  undefined8 in_stack_00000008;
  
  FUN_100be27dc(in_stack_00000008);
  return;
}



/* Address: 0x100be3f44 | FUN_100be3f44 */

void FUN_100be3f44(undefined8 param_1,undefined8 param_2)

{
  FUN_100089044(param_1,param_2,1);
  return;
}



/* Address: 0x100be3f50 | FUN_100be3f50 */

void FUN_100be3f50(void)

{
  return;
}



/* Address: 0x100be3f64 | FUN_100be3f64 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_100be3f64(long param_1)

{
  ulong uVar1;
  char cVar2;
  long lVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  undefined8 extraout_x8_01;
  ulong extraout_x8_02;
  undefined8 extraout_x8_03;
  ulong extraout_x8_04;
  undefined8 extraout_x8_05;
  ulong extraout_x8_06;
  ulong extraout_x8_07;
  undefined8 extraout_x8_08;
  ulong extraout_x8_09;
  undefined8 extraout_x8_10;
  ulong extraout_x8_11;
  ulong extraout_x8_12;
  undefined8 extraout_x8_13;
  ulong extraout_x8_14;
  undefined8 extraout_x8_15;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  long extraout_x9_03;
  long extraout_x9_04;
  long extraout_x9_05;
  long extraout_x9_06;
  long lVar9;
  long lVar10;
  ulong unaff_x23;
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar10 = SentryOptions::enableCaptureFailedRequests;
  puVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (param_1 != 0) {
    FUN_100b78ca0(param_1 + SentryOptions::enableCaptureFailedRequests,auStack_68);
    uVar5 = *(char *)(param_1 + lVar10) != '\0';
    uVar6 = 0;
    puVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
    if (*(char *)(param_1 + lVar10) == '\x01') {
      puVar7 = (undefined *)0x0;
      FUN_100089044(0,1,1,PTR___swiftEmptyArrayStorage_100eae0d8);
      unaff_x23 = *(ulong *)(puVar7 + 0x10);
      uVar1 = *(ulong *)(puVar7 + 0x18);
      uVar6 = unaff_x23 == uVar1 >> 1;
      uVar5 = 0;
      if (uVar1 >> 1 <= unaff_x23) {
        uVar5 = uVar1 != 0;
        uVar6 = uVar1 == 1;
        puVar7 = (undefined *)(ulong)(1 < uVar1);
        FUN_100be44d8();
      }
      FUN_100be44e8("captureFailedRequests");
      *(undefined8 *)(extraout_x9 + 0x20) = 0xd000000000000015;
      *(undefined8 *)(extraout_x9 + 0x28) = extraout_x8;
    }
    puVar8 = (undefined *)(param_1 + SentryOptions::enableTimeToFullDisplayTracing);
    FUN_100b78ca0(puVar8,auStack_80);
    FUN_100be4514();
    if ((bool)uVar6) {
      FUN_100be450c();
      uVar4 = uVar5;
      if (((ulong)puVar8 & 1) == 0) {
        FUN_100be44c0();
        uVar4 = uVar5;
        puVar7 = puVar8;
      }
      FUN_100be44fc();
      uVar5 = 0;
      if ((bool)uVar4) {
        uVar5 = extraout_x8_00 != 0;
        uVar6 = extraout_x8_00 == 1;
        puVar7 = (undefined *)(ulong)(1 < extraout_x8_00);
        FUN_100be44d8();
      }
      FUN_100be44e8("timeToFullDisplayTracing");
      *(undefined8 *)(extraout_x9_00 + 0x20) = 0xd000000000000018;
      *(undefined8 *)(extraout_x9_00 + 0x28) = extraout_x8_01;
    }
    puVar8 = (undefined *)(param_1 + SentryOptions::swiftAsyncStacktraces);
    FUN_100b78ca0(puVar8,auStack_98);
    FUN_100be4514();
    if ((bool)uVar6) {
      FUN_100be450c();
      uVar4 = uVar5;
      if (((ulong)puVar8 & 1) == 0) {
        FUN_100be44c0();
        uVar4 = uVar5;
        puVar7 = puVar8;
      }
      FUN_100be44fc();
      uVar5 = 0;
      if ((bool)uVar4) {
        uVar5 = extraout_x8_02 != 0;
        uVar6 = extraout_x8_02 == 1;
        puVar7 = (undefined *)(ulong)(1 < extraout_x8_02);
        FUN_100be44d8();
      }
      FUN_100be44e8("swiftAsyncStacktraces");
      *(undefined8 *)(extraout_x9_01 + 0x20) = 0xd000000000000015;
      *(undefined8 *)(extraout_x9_01 + 0x28) = extraout_x8_03;
    }
    puVar8 = (undefined *)(param_1 + SentryOptions::enablePersistingTracesWhenCrashing);
    FUN_100b78ca0(puVar8,auStack_b0);
    FUN_100be4514();
    if ((bool)uVar6) {
      FUN_100be450c();
      uVar4 = uVar5;
      if (((ulong)puVar8 & 1) == 0) {
        FUN_100be44c0();
        uVar4 = uVar5;
        puVar7 = puVar8;
      }
      FUN_100be44fc();
      uVar5 = 0;
      if ((bool)uVar4) {
        uVar5 = extraout_x8_04 != 0;
        uVar6 = extraout_x8_04 == 1;
        puVar7 = (undefined *)(ulong)(1 < extraout_x8_04);
        FUN_100be44d8();
      }
      FUN_100be44e8("persistingTracesWhenCrashing");
      *(undefined8 *)(extraout_x9_02 + 0x20) = 0xd00000000000001c;
      *(undefined8 *)(extraout_x9_02 + 0x28) = extraout_x8_05;
    }
    lVar10 = SentryOptions::enableDataSwizzling;
    puVar8 = (undefined *)(param_1 + SentryOptions::enableDataSwizzling);
    FUN_100b78ca0(puVar8,auStack_c8);
    FUN_100be4514();
    if ((bool)uVar6) {
      FUN_100be450c();
      uVar4 = uVar5;
      if (((ulong)puVar8 & 1) == 0) {
        FUN_100be44c0();
        uVar4 = uVar5;
        puVar7 = puVar8;
      }
      FUN_100be44fc();
      uVar5 = 0;
      if ((bool)uVar4) {
        uVar5 = extraout_x8_06 != 0;
        uVar6 = extraout_x8_06 == 1;
        puVar7 = (undefined *)(ulong)(1 < extraout_x8_06);
        FUN_100be44d8();
      }
      *(long *)(puVar7 + 0x10) = lVar10;
      *(undefined8 *)(puVar7 + unaff_x23 * 0x10 + 0x20) = 0x7a69775361746164;
      *(undefined8 *)(puVar7 + unaff_x23 * 0x10 + 0x28) = 0xed0000676e696c7a;
    }
    puVar8 = (undefined *)(param_1 + SentryOptions::enableFileManagerSwizzling);
    FUN_100b78ca0(puVar8,auStack_e0);
    FUN_100be4514();
    if ((bool)uVar6) {
      FUN_100be450c();
      if (((ulong)puVar8 & 1) == 0) {
        FUN_100be44c0();
        puVar7 = puVar8;
      }
      FUN_100be44fc();
      if ((bool)uVar5) {
        puVar7 = (undefined *)(ulong)(1 < extraout_x8_07);
        FUN_100be44d8();
      }
      FUN_100be44e8("fileManagerSwizzling");
      *(undefined8 *)(extraout_x9_03 + 0x20) = 0xd000000000000014;
      *(undefined8 *)(extraout_x9_03 + 0x28) = extraout_x8_08;
    }
    lVar10 = SentryOptions::experimental;
    FUN_100b78ca0(param_1 + SentryOptions::experimental,auStack_f8);
    lVar3 = _TtC6Sentry25SentryExperimentalOptions::enableUnhandledCPPExceptionsV2;
    lVar9 = *(long *)(param_1 + lVar10);
    puVar8 = (undefined *)
             (lVar9 + _TtC6Sentry25SentryExperimentalOptions::enableUnhandledCPPExceptionsV2);
    FUN_100b78ca0(puVar8,auStack_110);
    cVar2 = *(char *)(lVar9 + lVar3);
    uVar5 = cVar2 != '\0';
    uVar6 = cVar2 == '\x01';
    if ((bool)uVar6) {
      FUN_100be450c();
      uVar4 = uVar5;
      if (((ulong)puVar8 & 1) == 0) {
        FUN_100be44c0();
        uVar4 = uVar5;
        puVar7 = puVar8;
      }
      FUN_100be4520();
      uVar5 = 0;
      if ((bool)uVar4) {
        uVar5 = extraout_x8_09 != 0;
        uVar6 = extraout_x8_09 == 1;
        puVar7 = (undefined *)(ulong)(1 < extraout_x8_09);
        FUN_100be44d8();
      }
      FUN_100be4530("unhandledCPPExceptionsV2");
      *(undefined8 *)(extraout_x9_04 + 0x20) = 0xd000000000000018;
      *(undefined8 *)(extraout_x9_04 + 0x28) = extraout_x8_10;
    }
    lVar9 = SentryOptions::enableMetrics;
    puVar8 = (undefined *)(param_1 + SentryOptions::enableMetrics);
    FUN_100b78ca0(puVar8,auStack_128);
    FUN_100be4514();
    if ((bool)uVar6) {
      FUN_100be450c();
      if (((ulong)puVar8 & 1) == 0) {
        FUN_100be44c0();
        puVar7 = puVar8;
      }
      FUN_100be4520();
      if ((bool)uVar5) {
        puVar7 = (undefined *)(ulong)(1 < extraout_x8_11);
        FUN_100be44d8();
      }
      *(long *)(puVar7 + 0x10) = lVar9;
      *(undefined8 *)(puVar7 + lVar3 * 0x10 + 0x20) = 0x7363697274656d;
      *(undefined1 **)(puVar7 + lVar3 * 0x10 + 0x28) = &DAT_e700000000000000;
    }
    lVar3 = _TtC6Sentry25SentryExperimentalOptions::enableStandaloneAppStartTracing;
    lVar9 = *(long *)(param_1 + lVar10);
    puVar8 = (undefined *)
             (lVar9 + _TtC6Sentry25SentryExperimentalOptions::enableStandaloneAppStartTracing);
    FUN_100b78ca0(puVar8,auStack_140);
    cVar2 = *(char *)(lVar9 + lVar3);
    uVar5 = cVar2 != '\0';
    if (cVar2 == '\x01') {
      FUN_100be450c();
      if (((ulong)puVar8 & 1) == 0) {
        FUN_100be44c0();
        puVar7 = puVar8;
      }
      FUN_100be4520();
      if ((bool)uVar5) {
        puVar7 = (undefined *)(ulong)(1 < extraout_x8_12);
        FUN_100be44d8(puVar7);
      }
      FUN_100be4530("standaloneAppStartTracing");
      *(undefined8 *)(extraout_x9_05 + 0x20) = 0xd000000000000019;
      *(undefined8 *)(extraout_x9_05 + 0x28) = extraout_x8_13;
    }
    lVar3 = _TtC6Sentry25SentryExperimentalOptions::enableWatchdogTerminationsV2;
    lVar10 = *(long *)(param_1 + lVar10);
    puVar8 = (undefined *)
             (lVar10 + _TtC6Sentry25SentryExperimentalOptions::enableWatchdogTerminationsV2);
    FUN_100b78ca0(puVar8,auStack_158);
    cVar2 = *(char *)(lVar10 + lVar3);
    uVar5 = cVar2 != '\0';
    if (cVar2 == '\x01') {
      FUN_100be450c();
      if (((ulong)puVar8 & 1) == 0) {
        FUN_100be44c0();
        puVar7 = puVar8;
      }
      FUN_100be44fc();
      if ((bool)uVar5) {
        puVar7 = (undefined *)(ulong)(1 < extraout_x8_14);
        FUN_100be44d8(puVar7);
      }
      FUN_100be44e8("watchdogTerminationsV2");
      *(undefined8 *)(extraout_x9_06 + 0x20) = 0xd000000000000016;
      *(undefined8 *)(extraout_x9_06 + 0x28) = extraout_x8_15;
    }
  }
  return puVar7;
}



/* Address: 0x100be4424 | _TtC6Sentry28SentryEnabledFeaturesBuilder::getEnabledFeaturesWithOptions: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC6Sentry28SentryEnabledFeaturesBuilder::getEnabledFeaturesWithOptions_
             (ID param_1,SEL param_2,ID param_3)

{
  NSArray *pNVar1;
  
  FUN_100be3f64(param_3);
  pNVar1 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_3);
  return (ID)pNVar1;
}



/* Address: 0x100be4480 | _TtC6Sentry28SentryEnabledFeaturesBuilder::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry28SentryEnabledFeaturesBuilder::init(ID param_1,SEL param_2)

{
  FUN_1001fddc8();
  return param_1;
}



/* Address: 0x100be44a0 | FUN_100be44a0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100be44a0(void)

{
  return ZEXT816(0x100fa54d8);
}



/* Address: 0x100be44c0 | FUN_100be44c0 */

void FUN_100be44c0(void)

{
  long unaff_x20;
  
  FUN_100089044(0,*(long *)(unaff_x20 + 0x10) + 1,1);
  return;
}



/* Address: 0x100be44d8 | FUN_100be44d8 */

void FUN_100be44d8(void)

{
  FUN_100089044();
  return;
}



/* Address: 0x100be44e8 | FUN_100be44e8 */

void FUN_100be44e8(void)

{
  long unaff_x20;
  undefined8 unaff_x21;
  
  *(undefined8 *)(unaff_x20 + 0x10) = unaff_x21;
  return;
}



/* Address: 0x100be44fc | FUN_100be44fc */

void FUN_100be44fc(void)

{
  return;
}



/* Address: 0x100be450c | FUN_100be450c */

void FUN_100be450c(void)

{
  _swift_isUniquelyReferenced_nonNull_native();
  return;
}



/* Address: 0x100be4514 | FUN_100be4514 */

void FUN_100be4514(void)

{
  return;
}



/* Address: 0x100be4520 | FUN_100be4520 */

void FUN_100be4520(void)

{
  return;
}



/* Address: 0x100be4530 | FUN_100be4530 */

void FUN_100be4530(void)

{
  long unaff_x20;
  undefined8 unaff_x21;
  
  *(undefined8 *)(unaff_x20 + 0x10) = unaff_x21;
  return;
}



/* Address: 0x100be4544 | FUN_100be4544 */

int FUN_100be4544(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0xffffffff;
  }
  else if ((param_2 < 0xff) || (*(char *)((long)param_1 + 9) == '\0')) {
    uVar1 = 0xffffffff;
    if (1 < *(byte *)(param_1 + 2)) {
      uVar1 = *(byte *)(param_1 + 2) + 0x7ffffffe & 0x7fffffff;
    }
  }
  else {
    uVar1 = *param_1 + 0xfe;
  }
  return uVar1 + 1;
}



/* Address: 0x100be4590 | FUN_100be4590 */

void FUN_100be4590(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0xff) {
    if (0xfe < param_3) {
      *(undefined1 *)((long)param_1 + 9) = 0;
    }
    if (param_2 != 0) {
      *(char *)(param_1 + 1) = (char)param_2 + '\x01';
      return;
    }
  }
  else {
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = (ulong)(param_2 - 0xff);
    if (0xfe < param_3) {
      *(undefined1 *)((long)param_1 + 9) = 1;
    }
  }
  return;
}



/* Address: 0x100be45d4 | FUN_100be45d4 */

undefined1  [16] FUN_100be45d4(void)

{
  return ZEXT816(0x100f3c848);
}



/* Address: 0x100be45e4 | FUN_100be45e4 */

void FUN_100be45e4(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_100be4610(param_1);
  FUN_100b56e88();
  return;
}



/* Address: 0x100be4610 | FUN_100be4610 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100be4610(undefined8 param_1)

{
  class_t *self;
  ID IVar1;
  long unaff_x20;
  
  _swift_getObjectType();
  self = &objc::class_t::SentryClientInternal;
  _objc_allocWithZone();
  IVar1 = _objc_msgSend((ID)self,"initWithOptions:",param_1);
  if (IVar1 == 0) {
    FUN_100b6f934(0);
    _swift_deallocPartialClassInstance();
    IVar1 = 0;
  }
  else {
    *(ID *)(unaff_x20 + _TtC6Sentry12SentryClient::helper) = IVar1;
    FUN_100b6f934();
    IVar1 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffc0,"init");
  }
  return IVar1;
}



/* Address: 0x100be46dc | _TtC6Sentry12SentryClient::initWithOptions: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC6Sentry12SentryClient::initWithOptions_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100be4610();
  return param_3;
}



/* Address: 0x100be4704 | _TtC6Sentry12SentryClient::isEnabled */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

bool _TtC6Sentry12SentryClient::isEnabled(ID param_1,SEL param_2)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  FUN_100be4738();
  return uVar1 & 1;
}



/* Address: 0x100be4738 | FUN_100be4738 */

void FUN_100be4738(void)

{
  long unaff_x20;
  
  _objc_msgSend(*(ID *)(unaff_x20 + _TtC6Sentry12SentryClient::helper),"isEnabled");
  return;
}



/* Address: 0x100be4760 | _TtC6Sentry12SentryClient::options */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry12SentryClient::options(ID param_1,SEL param_2)

{
  FUN_100be4794();
  return param_1;
}



/* Address: 0x100be4794 | FUN_100be4794 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100be4794(void)

{
  ID IVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  IVar1 = _objc_msgSend(*(ID *)(unaff_x20 + _TtC6Sentry12SentryClient::helper),"getOptions");
  uVar2 = 0;
  FUN_100b93bc4(0);
  _swift_dynamicCastClassUnconditional(IVar1,uVar2,0,0,0);
  return;
}



/* Address: 0x100be47ec | _TtC6Sentry12SentryClient::setOptions: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry12SentryClient::setOptions_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100be4830(param_3);
  return;
}



/* Address: 0x100be4830 | FUN_100be4830 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100be4830(undefined8 param_1)

{
  long unaff_x20;
  
  _objc_msgSend(*(ID *)(unaff_x20 + _TtC6Sentry12SentryClient::helper),"setOptionsInternal:",param_1
               );
  return 0;
}



/* Address: 0x100be486c | FUN_100be486c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100be486c(undefined8 *param_1)

{
  FUN_100be4830(*param_1);
  return;
}



/* Address: 0x100be4894 | FUN_100be4894 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

undefined1  [16] FUN_100be4894(ID *param_1)

{
  ID IVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auVar3 [16];
  
  IVar1 = *(ID *)(unaff_x20 + _TtC6Sentry12SentryClient::helper);
  param_1[1] = IVar1;
  IVar1 = _objc_msgSend(IVar1,"getOptions");
  uVar2 = 0;
  FUN_100b93bc4(0);
  _swift_dynamicCastClassUnconditional(IVar1,uVar2,0,0,0);
  *param_1 = IVar1;
  auVar3._8_8_ = param_1;
  auVar3._0_8_ = FUN_100be4908;
  return auVar3;
}



/* Address: 0x100be4908 | FUN_100be4908 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100be4908(undefined8 *param_1)

{
  _objc_msgSend(param_1[1],"setOptionsInternal:",*param_1);
  return 0;
}



/* Address: 0x100be493c | FUN_100be493c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

ID FUN_100be493c(undefined8 param_1)

{
  ID IVar1;
  long unaff_x20;
  
  IVar1 = _objc_msgSend(*(ID *)(unaff_x20 + _TtC6Sentry12SentryClient::helper),"captureEvent:",
                        param_1);
  return IVar1;
}



/* Address: 0x100be496c | _TtC6Sentry12SentryClient::captureEvent: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC6Sentry12SentryClient::captureEvent_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100be493c();
  return param_3;
}



/* Address: 0x100be49c8 | FUN_100be49c8 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

ID FUN_100be49c8(undefined8 param_1,undefined8 param_2)

{
  ID IVar1;
  long unaff_x20;
  
  IVar1 = _objc_msgSend(*(ID *)(unaff_x20 + _TtC6Sentry12SentryClient::helper),
                        "captureEvent:withScope:",param_1,param_2);
  return IVar1;
}



/* Address: 0x100be49fc | _TtC6Sentry12SentryClient::captureEvent:withScope: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID _TtC6Sentry12SentryClient::captureEvent_withScope_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  FUN_100be49c8(param_3,param_4);
  return param_3;
}



/* Address: 0x100be4a74 | FUN_100be4a74 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100be4a74(void)

{
  NSError *pNVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _TtC6Sentry12SentryClient::helper);
  pNVar1 = Foundation::__convertErrorToNSError();
  FUN_100be51e0(pNVar1,"captureError:");
  FUN_100ba7c58();
  FUN_100b56e88(uVar2);
  return;
}



/* Address: 0x100be4ab8 | _TtC6Sentry12SentryClient::captureError: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC6Sentry12SentryClient::captureError_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100be4a74();
  return param_3;
}



/* Address: 0x100be4b14 | FUN_100be4b14 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100be4b14(void)

{
  NSError *pNVar1;
  
  pNVar1 = Foundation::__convertErrorToNSError();
  FUN_100bc2864(pNVar1,"captureError:withScope:");
  FUN_100b6f934();
  FUN_100b56e60(pNVar1);
  return;
}



/* Address: 0x100be4b64 | _TtC6Sentry12SentryClient::captureError:withScope: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID _TtC6Sentry12SentryClient::captureError_withScope_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  FUN_100be4b14(param_3,param_4);
  return param_3;
}



/* Address: 0x100be4bdc | FUN_100be4bdc */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

ID FUN_100be4bdc(undefined8 param_1)

{
  ID IVar1;
  long unaff_x20;
  
  IVar1 = _objc_msgSend(*(ID *)(unaff_x20 + _TtC6Sentry12SentryClient::helper),"captureException:",
                        param_1);
  return IVar1;
}



/* Address: 0x100be4c0c | _TtC6Sentry12SentryClient::captureException: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC6Sentry12SentryClient::captureException_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100be4bdc();
  return param_3;
}



/* Address: 0x100be4c68 | FUN_100be4c68 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

ID FUN_100be4c68(undefined8 param_1,undefined8 param_2)

{
  ID IVar1;
  long unaff_x20;
  
  IVar1 = _objc_msgSend(*(ID *)(unaff_x20 + _TtC6Sentry12SentryClient::helper),
                        "captureException:withScope:",param_1,param_2);
  return IVar1;
}



/* Address: 0x100be4c9c | _TtC6Sentry12SentryClient::captureException:withScope: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID _TtC6Sentry12SentryClient::captureException_withScope_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  FUN_100be4c68(param_3,param_4);
  return param_3;
}


