/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100bad7b8 | thunk_FUN_100bad774 */

void thunk_FUN_100bad774(void)

{
  FUN_100bad774();
  return;
}



/* Address: 0x100bad7bc | thunk_FUN_100bad6e0 */

void thunk_FUN_100bad6e0(void)

{
  FUN_100bad6e0();
  return;
}



/* Address: 0x100bad7c0 | thunk_FUN_100bad6e0 */

void thunk_FUN_100bad6e0(void)

{
  FUN_100bad6e0();
  return;
}



/* Address: 0x100bad7c4 | thunk_FUN_100bad6e0 */

void thunk_FUN_100bad6e0(void)

{
  FUN_100bad6e0();
  return;
}



/* Address: 0x100bad7c8 | thunk_FUN_100bad6e0 */

void thunk_FUN_100bad6e0(void)

{
  FUN_100bad6e0();
  return;
}



/* Address: 0x100bad7cc | thunk_FUN_100bad6e0 */

void thunk_FUN_100bad6e0(void)

{
  FUN_100bad6e0();
  return;
}



/* Address: 0x100bad7d0 | thunk_FUN_100403f54 */

void thunk_FUN_100403f54(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100403ff0(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100bad7d4 | FUN_100bad7d4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100bad7d4(void)

{
  return 0;
}



/* Address: 0x100bad7e0 | FUN_100bad7e0 */

void FUN_100bad7e0(ID param_1,SEL param_2)

{
  _objc_msgSend(param_1,param_2);
  return;
}



/* Address: 0x100bad7ec | FUN_100bad7ec */

void FUN_100bad7ec(void)

{
  return;
}



/* Address: 0x100bad800 | FUN_100bad800 */

void FUN_100bad800(void)

{
  (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  return;
}



/* Address: 0x100bad810 | FUN_100bad810 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

undefined8 FUN_100bad810(undefined8 param_1)

{
  return param_1;
}



/* Address: 0x100bad818 | FUN_100bad818 */

void FUN_100bad818(void)

{
  void *unaff_x20;
  
  __Block_release(unaff_x20);
  return;
}



/* Address: 0x100bad824 | FUN_100bad824 */

void FUN_100bad824(void)

{
  (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  return;
}



/* Address: 0x100bad834 | FUN_100bad834 */

void FUN_100bad834(void)

{
  (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  return;
}



/* Address: 0x100bad844 | FUN_100bad844 */

void FUN_100bad844(void)

{
  FUN_100b75404();
  return;
}



/* Address: 0x100bad84c | FUN_100bad84c */

void FUN_100bad84c(void)

{
  _swift_retain();
  return;
}



/* Address: 0x100bad85c | FUN_100bad85c */

void FUN_100bad85c(void)

{
  FUN_100b78b14(0);
  return;
}



/* Address: 0x100bad864 | FUN_100bad864 */

undefined8 FUN_100bad864(void)

{
  return 5;
}



/* Address: 0x100bad87c | FUN_100bad87c */

void FUN_100bad87c(void)

{
  _swift_release();
  return;
}



/* Address: 0x100bad884 | FUN_100bad884 */

void FUN_100bad884(ID param_1,SEL param_2)

{
  _objc_msgSend(param_1,param_2);
  return;
}



/* Address: 0x100bad890 | FUN_100bad890 */

void FUN_100bad890(ID param_1,SEL param_2)

{
  _objc_msgSend(param_1,param_2);
  return;
}



/* Address: 0x100bad89c | FUN_100bad89c */

void FUN_100bad89c(void)

{
  long unaff_x20;
  long unaff_x21;
  
  _swift_unknownObjectRetain(*(undefined8 *)(unaff_x20 + unaff_x21));
  return;
}



/* Address: 0x100bad8a8 | FUN_100bad8a8 */

void FUN_100bad8a8(undefined8 param_1,undefined8 param_2)

{
  _swift_beginAccess(param_1,param_2,0x21,0);
  return;
}



/* Address: 0x100bad8b4 | FUN_100bad8b4 */

void FUN_100bad8b4(void)

{
  return;
}



/* Address: 0x100bad8c8 | FUN_100bad8c8 */

void FUN_100bad8c8(void)

{
  return;
}



/* Address: 0x100bad8dc | FUN_100bad8dc */

void FUN_100bad8dc(void)

{
  return;
}



/* Address: 0x100bad8e8 | FUN_100bad8e8 */

void FUN_100bad8e8(void)

{
  return;
}



/* Address: 0x100bad8fc | FUN_100bad8fc */

undefined1  [16] FUN_100bad8fc(long param_1,ulong param_2,long param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  if (*(long *)(param_3 + 0x10) != 0) {
    FUN_100b6cb98();
    bVar1 = (param_2 & 1) == 0;
    if (bVar1) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(*(long *)(param_3 + 0x38) + param_1 * 8);
    }
    auVar3[8] = bVar1;
    auVar3._0_8_ = uVar2;
    auVar3._9_7_ = 0;
    return auVar3;
  }
  return ZEXT816(1) << 0x40;
}



/* Address: 0x100bad94c | FUN_100bad94c */

void FUN_100bad94c(undefined8 param_1,long param_2,ulong param_3)

{
  Date DVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((*(long *)(param_3 + 0x10) == 0) || (uVar2 = param_3, FUN_100b6cc14(), (uVar2 & 1) == 0)) {
    DVar1 = Foundation::Date::typeMetadataAccessor();
    uVar3 = 1;
  }
  else {
    lVar4 = *(long *)(param_3 + 0x38);
    DVar1 = Foundation::Date::typeMetadataAccessor();
    (**(code **)(*(long *)(DVar1.unknown + -8) + 0x10))
              (param_1,lVar4 + *(long *)(*(long *)(DVar1.unknown + -8) + 0x48) * param_2,
               DVar1.unknown);
    uVar3 = 0;
  }
  FUN_1000c9ffc(param_1,uVar3,1,DVar1.unknown);
  return;
}



/* Address: 0x100bad9e0 | thunk_FUN_100bad9e4 */

undefined1  [16] thunk_FUN_100bad9e4(long param_1,ulong param_2,long param_3)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  
  if (*(long *)(param_3 + 0x10) == 0) {
    uVar3 = 0;
    uVar5 = 0;
    uVar4 = 1;
  }
  else {
    FUN_100b6cb98();
    bVar2 = (param_2 & 1) == 0;
    if (bVar2) {
      uVar3 = 0;
      uVar5 = 0;
    }
    else {
      puVar1 = (undefined8 *)(*(long *)(param_3 + 0x38) + param_1 * 0x10);
      uVar3 = *puVar1;
      uVar5 = (uint)*(byte *)(puVar1 + 1);
    }
    uVar4 = (uint)bVar2;
  }
  auVar6._8_4_ = uVar5 | uVar4 << 8;
  auVar6._0_8_ = uVar3;
  auVar6._12_4_ = 0;
  return auVar6;
}



/* Address: 0x100bad9e4 | FUN_100bad9e4 */

undefined1  [16] FUN_100bad9e4(long param_1,ulong param_2,long param_3)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  
  if (*(long *)(param_3 + 0x10) == 0) {
    uVar3 = 0;
    uVar5 = 0;
    uVar4 = 1;
  }
  else {
    FUN_100b6cb98();
    bVar2 = (param_2 & 1) == 0;
    if (bVar2) {
      uVar3 = 0;
      uVar5 = 0;
    }
    else {
      puVar1 = (undefined8 *)(*(long *)(param_3 + 0x38) + param_1 * 0x10);
      uVar3 = *puVar1;
      uVar5 = (uint)*(byte *)(puVar1 + 1);
    }
    uVar4 = (uint)bVar2;
  }
  auVar6._8_4_ = uVar5 | uVar4 << 8;
  auVar6._0_8_ = uVar3;
  auVar6._12_4_ = 0;
  return auVar6;
}



/* Address: 0x100bada50 | FUN_100bada50 */

void FUN_100bada50(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  Date DVar2;
  long unaff_x20;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  
  puVar1 = &DAT_101044980;
  FUN_100b6730c();
  puVar3 = auStack_60 + -(*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(lVar5 + 0x10);
  _os_unfair_lock_lock(uVar4);
  FUN_100bad8a8(lVar5 + 0x18,auStack_58);
  DVar2 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar2.unknown + -8) + 0x10))(puVar3,param_2,DVar2.unknown);
  FUN_1000c9ffc(puVar3,0,1,DVar2.unknown);
  FUN_100b79078(puVar3,param_1);
  _swift_endAccess(auStack_58);
  _os_unfair_lock_unlock(uVar4);
  return;
}



/* Address: 0x100badb24 | FUN_100badb24 */

void FUN_100badb24(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(lVar2 + 0x10);
  _os_unfair_lock_lock(uVar1);
  FUN_100bad8a8(lVar2 + 0x18,auStack_48);
  FUN_100bad94c(param_1,param_2,*(undefined8 *)(lVar2 + 0x18));
  _swift_endAccess(auStack_48);
  _os_unfair_lock_unlock(uVar1);
  return;
}



/* Address: 0x100badb90 | FUN_100badb90 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100badb90(void)

{
  return ZEXT816(0x101046840);
}



/* Address: 0x100badbb0 | thunk_FUN_100bad9e4 */

undefined1  [16] thunk_FUN_100bad9e4(long param_1,ulong param_2,long param_3)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  
  if (*(long *)(param_3 + 0x10) == 0) {
    uVar3 = 0;
    uVar5 = 0;
    uVar4 = 1;
  }
  else {
    FUN_100b6cb98();
    bVar2 = (param_2 & 1) == 0;
    if (bVar2) {
      uVar3 = 0;
      uVar5 = 0;
    }
    else {
      puVar1 = (undefined8 *)(*(long *)(param_3 + 0x38) + param_1 * 0x10);
      uVar3 = *puVar1;
      uVar5 = (uint)*(byte *)(puVar1 + 1);
    }
    uVar4 = (uint)bVar2;
  }
  auVar6._8_4_ = uVar5 | uVar4 << 8;
  auVar6._0_8_ = uVar3;
  auVar6._12_4_ = 0;
  return auVar6;
}



/* Address: 0x100badbb4 | FUN_100badbb4 */

void FUN_100badbb4(void)

{
  FUN_100be2c2c();
  return;
}



/* Address: 0x100badbd4 | FUN_100badbd4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_100badbd4(long param_1)

{
  undefined8 *puVar1;
  _CocoaArrayWrapper _Var2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  long lVar7;
  class_t *self;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ID IVar11;
  NSString *pNVar12;
  undefined *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  long unaff_x20;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  ID IVar22;
  String SVar23;
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  lVar5 = SentryBinaryImageCache::cache;
  lVar4 = SentryBinaryImageCache::lock;
  lVar20 = *(long *)(param_1 + 0x10);
  puVar13 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (lVar20 != 0) {
    lVar16 = *(long *)(unaff_x20 + 8);
    lVar7 = param_1;
    _swift_bridgeObjectRetain();
    lVar21 = 0x20;
    puVar13 = PTR___swiftEmptyArrayStorage_100eae0d8;
    puVar10 = PTR___type_metadata_for_Swift_UInt64_100eade90;
    do {
      uVar18 = *(ulong *)(param_1 + lVar21);
      IVar22 = *(ID *)(lVar16 + lVar4);
      uVar14 = 0;
      _objc_msgSend(IVar22,"lock");
      FUN_100baf948();
      if ((uVar14 & 1) == 0) {
        _swift_beginAccess(lVar16 + lVar5,auStack_f8,0x20,0);
        uVar14 = *(ulong *)(lVar16 + lVar5);
        if (uVar14 == 0) {
          _swift_endAccess(auStack_f8);
          uVar18 = 0;
          puVar10 = PTR___type_metadata_for_Swift_UInt64_100eade90;
        }
        else {
          if ((uVar14 & 0xc000000000000001) == 0) {
            if ((long)uVar18 < 0) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100bae07c);
              (*pcVar6)();
            }
            if (*(ulong *)((uVar14 & 0xffffffffffffff8) + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100bae080);
              (*pcVar6)();
            }
            uVar18 = *(ulong *)(uVar14 + uVar18 * 8 + 0x20);
          }
          else {
            FUN_100b6d94c();
          }
          puVar10 = PTR___type_metadata_for_Swift_UInt64_100eade90;
          _swift_endAccess(auStack_f8);
        }
      }
      else {
        uVar18 = 0;
      }
      _objc_msgSend(IVar22,"unlock");
      if (uVar18 != 0) {
        self = &objc::class_t::SentryDebugMeta;
        _objc_allocWithZone();
        IVar22 = _objc_msgSend((ID)self,"init");
        puVar8 = &DAT_1010458c8;
        FUN_100b6730c();
        puVar9 = puVar8;
        FUN_100bae22c();
        *(undefined8 *)(puVar9 + 0x18) = 2;
        *(undefined8 *)(puVar9 + 0x10) = 1;
        lVar19 = SentryBinaryImageInfo::address;
        FUN_100b78ca0(uVar18 + SentryBinaryImageInfo::address,auStack_80);
        uVar15 = *(undefined8 *)(uVar18 + lVar19);
        *(undefined **)(puVar9 + 0x38) = puVar10;
        puVar3 = PTR___protocol_witness_table_for_Swift_UInt64___Swift_CVarArg_in_Swift_100eadec8;
        *(undefined **)(puVar9 + 0x40) =
             PTR___protocol_witness_table_for_Swift_UInt64___Swift_CVarArg_in_Swift_100eadec8;
        *(undefined8 *)(puVar9 + 0x20) = uVar15;
        SVar23 = (extension_Foundation)::Swift::String::_init();
        FUN_100bae0b0(SVar23.str,SVar23.bridgeObject,IVar22,&PTR_s_setImageAddress__100f89c68);
        _objc_msgSend(IVar22,"setImageAddressRaw:",*(undefined8 *)(uVar18 + lVar19));
        lVar19 = SentryBinaryImageInfo::vmAddress;
        FUN_100b78ca0(uVar18 + SentryBinaryImageInfo::vmAddress,auStack_98);
        lVar17 = *(long *)(uVar18 + lVar19);
        if (lVar17 == 0) {
          uVar15 = 0;
        }
        else {
          FUN_100bae22c();
          *(undefined8 *)(puVar8 + 0x18) = 2;
          *(undefined8 *)(puVar8 + 0x10) = 1;
          *(undefined **)(puVar8 + 0x38) = puVar10;
          *(undefined **)(puVar8 + 0x40) = puVar3;
          *(long *)(puVar8 + 0x20) = lVar17;
          SVar23 = (extension_Foundation)::Swift::String::_init();
          FUN_100bae0b0(SVar23.str,SVar23.bridgeObject,IVar22,&PTR_s_setImageVmAddress__100f89c98);
          uVar15 = *(undefined8 *)(uVar18 + lVar19);
        }
        _objc_msgSend(IVar22,"setImageVmAddressRaw:",uVar15);
        lVar19 = SentryBinaryImageInfo::size;
        FUN_100b78ca0(uVar18 + SentryBinaryImageInfo::size,auStack_b0);
        uVar15 = *(undefined8 *)(uVar18 + lVar19);
        puVar10 = &_OBJC_CLASS___NSNumber;
        _objc_allocWithZone();
        IVar11 = _objc_msgSend((ID)puVar10,"initWithUnsignedLongLong:",uVar15);
        _objc_msgSend(IVar22,"setImageSize:",IVar11);
        lVar19 = uVar18 + SentryBinaryImageInfo::name;
        FUN_100b78ca0(lVar19,auStack_c8);
        uVar15 = *(undefined8 *)(lVar19 + 8);
        _swift_bridgeObjectRetain(uVar15);
        pNVar12 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        _swift_bridgeObjectRelease(uVar15);
        _objc_msgSend(IVar22,"setCodeFile:",pNVar12);
        FUN_100bae0b0(0x6f6863616d,&DAT_e500000000000000,IVar22,&PTR_s_setType__100f8a588);
        puVar1 = (undefined8 *)(uVar18 + SentryBinaryImageInfo::uuid);
        FUN_100b78ca0(puVar1,auStack_e0);
        lVar19 = puVar1[1];
        if (lVar19 != 0) {
          uVar15 = *puVar1;
          _swift_bridgeObjectRetain(lVar19);
          FUN_100bae0b0(uVar15,lVar19,IVar22,&PTR_s_setDebugID__100f89918);
        }
        puVar10 = puVar13;
        _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
        if ((((int)puVar10 == 0) || ((long)puVar13 < 0)) || (((ulong)puVar13 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar13 >> 0x3e == 0) {
            lVar19 = *(long *)(((ulong)puVar13 & 0xffffffffffffff8) + 0x10);
          }
          else {
            _Var2.unknown = (undefined *)((ulong)puVar13 & 0xffffffffffffff8);
            if ((long)puVar13 < 0) {
              _Var2.unknown = puVar13;
            }
            lVar19 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
          }
          puVar13 = (undefined *)0x0;
          FUN_100bae220(0,lVar19 + 1);
        }
        uVar18 = (ulong)puVar13 & 0xffffffffffffff8;
        uVar14 = *(ulong *)(uVar18 + 0x10);
        if (*(ulong *)(uVar18 + 0x18) >> 1 <= uVar14) {
          puVar13 = (undefined *)(ulong)(1 < *(ulong *)(uVar18 + 0x18));
          FUN_100bae220(puVar13,uVar14 + 1);
          uVar18 = (ulong)puVar13 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar18 + 0x10) = uVar14 + 1;
        *(ID *)(uVar18 + uVar14 * 8 + 0x20) = IVar22;
        param_1 = lVar7;
        puVar10 = PTR___type_metadata_for_Swift_UInt64_100eade90;
      }
      lVar21 = lVar21 + 8;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    _swift_bridgeObjectRelease(param_1);
  }
  return puVar13;
}



/* Address: 0x100bae080 | FUN_100bae080 */

void FUN_100bae080(void)

{
  FUN_100bae0b0();
  return;
}



/* Address: 0x100bae08c | FUN_100bae08c */

void FUN_100bae08c(void)

{
  FUN_100bae0b0();
  return;
}



/* Address: 0x100bae098 | FUN_100bae098 */

void FUN_100bae098(void)

{
  FUN_100bae0b0();
  return;
}



/* Address: 0x100bae0a4 | FUN_100bae0a4 */

void FUN_100bae0a4(void)

{
  FUN_100bae0b0();
  return;
}



/* Address: 0x100bae0b0 | FUN_100bae0b0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100bae0b0(undefined8 param_1,undefined8 param_2,ID param_3,undefined8 *param_4)

{
  NSString *pNVar1;
  
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_2);
  _objc_msgSend(param_3,(SEL)*param_4,pNVar1);
  return 0;
}



/* Address: 0x100bae100 | FUN_100bae100 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 * FUN_100bae100(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  return param_1;
}



/* Address: 0x100bae134 | FUN_100bae134 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 * FUN_100bae134(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  return param_1;
}



/* Address: 0x100bae190 | FUN_100bae190 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 * FUN_100bae190(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  return param_1;
}



/* Address: 0x100bae1cc | FUN_100bae1cc */

int FUN_100bae1cc(ulong *param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    iVar1 = -1;
  }
  else if ((param_2 < 0) && ((char)param_1[2] != '\0')) {
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



/* Address: 0x100bae20c | FUN_100bae20c */

undefined1  [16] FUN_100bae20c(void)

{
  return ZEXT816(0x100f39d58);
}



/* Address: 0x100bae21c | thunk_FUN_100bae100 */

void thunk_FUN_100bae100(void)

{
  FUN_100bae100();
  return;
}



/* Address: 0x100bae220 | FUN_100bae220 */

void FUN_100bae220(undefined8 param_1,undefined8 param_2)

{
  FUN_100b6ea6c(param_1,param_2,1);
  return;
}



/* Address: 0x100bae22c | FUN_100bae22c */

void FUN_100bae22c(undefined8 param_1)

{
  _swift_allocObject(param_1,0x48,7);
  return;
}



/* Address: 0x100bae238 | FUN_100bae238 */

undefined1  [16] FUN_100bae238(ulong param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  code *pcVar3;
  long unaff_x19;
  long *unaff_x20;
  ulong unaff_x21;
  long lVar4;
  
  FUN_100bb01ec();
  if ((param_1 & 1) == 0) {
    FUN_100baff38();
  }
  if (unaff_x21 < *(ulong *)(unaff_x19 + 0x10)) {
    lVar4 = *(ulong *)(unaff_x19 + 0x10) - 1;
    lVar1 = unaff_x19 + unaff_x21 * 0x10;
    auVar2 = *(undefined1 (*) [16])(lVar1 + 0x20);
    FUN_100b69414(lVar1 + 0x30,lVar4 - unaff_x21);
    *(long *)(unaff_x19 + 0x10) = lVar4;
    *unaff_x20 = unaff_x19;
    return auVar2;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100bae2b0);
  (*pcVar3)();
}



/* Address: 0x100bae2b0 | FUN_100bae2b0 */

undefined8 FUN_100bae2b0(ulong param_1)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  ulong *unaff_x20;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  uVar3 = *unaff_x20;
  uVar5 = uVar3;
  _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
  if ((((int)uVar5 == 0) || ((long)uVar3 < 0)) || ((uVar3 >> 0x3e & 1) != 0)) {
    FUN_100baff4c();
  }
  uVar5 = uVar3 & 0xffffffffffffff8;
  if (param_1 < *(ulong *)(uVar5 + 0x10)) {
    lVar6 = *(ulong *)(uVar5 + 0x10) - 1;
    lVar1 = uVar5 + param_1 * 8;
    uVar4 = *(undefined8 *)(lVar1 + 0x20);
    thunk_FUN_100b693f4(lVar1 + 0x28,lVar6 - param_1);
    *(long *)(uVar5 + 0x10) = lVar6;
    *unaff_x20 = uVar3;
    return uVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100bae338);
  (*pcVar2)();
}



/* Address: 0x100bae338 | FUN_100bae338 */

undefined8 FUN_100bae338(ulong param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x19;
  long *unaff_x20;
  ulong unaff_x21;
  undefined8 uVar3;
  long lVar4;
  
  FUN_100bb01ec();
  if ((param_1 & 1) == 0) {
    FUN_100baff9c();
  }
  if (unaff_x21 < *(ulong *)(unaff_x19 + 0x10)) {
    lVar4 = *(ulong *)(unaff_x19 + 0x10) - 1;
    lVar2 = unaff_x19 + unaff_x21 * 0x18;
    uVar3 = *(undefined8 *)(lVar2 + 0x20);
    FUN_100b69520(lVar2 + 0x38,lVar4 - unaff_x21);
    *(long *)(unaff_x19 + 0x10) = lVar4;
    *unaff_x20 = unaff_x19;
    return uVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100bae3c0);
  (*pcVar1)();
}



/* Address: 0x100bae3c0 | FUN_100bae3c0 */

void FUN_100bae3c0(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_x20 + SentryBinaryImageCache::lock);
  uVar1 = param_1;
  FUN_10021b704();
  FUN_100bb5d14(uVar2,uVar1,param_1);
  return;
}



/* Address: 0x100bae410 | SentryBinaryImageInfo::name */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryBinaryImageInfo::name(ID param_1,SEL param_2)

{
  NSString *pNVar1;
  
  FUN_100bae448();
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_2);
  return (ID)pNVar1;
}



/* Address: 0x100bae448 | FUN_100bae448 */

void FUN_100bae448(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + SentryBinaryImageInfo::name);
  FUN_100b78ca0(puVar1,auStack_38);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  FUN_100b86d54();
  FUN_100b6f9fc(uVar2,uVar3);
  return;
}



/* Address: 0x100bae488 | SentryBinaryImageInfo::setName: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryBinaryImageInfo::setName_(ID param_1,SEL param_2,ID param_3)

{
  String SVar1;
  
  SVar1 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  FUN_100bae4dc(SVar1.str,SVar1.bridgeObject);
  return;
}



/* Address: 0x100bae4dc | FUN_100bae4dc */

void FUN_100bae4dc(void)

{
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  FUN_100b80d38(unaff_x20 + SentryBinaryImageInfo::name,auStack_48);
  FUN_100b9a1e4();
  FUN_100b78c90();
  return;
}



/* Address: 0x100bae51c | FUN_100bae51c */

void FUN_100bae51c(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = SentryBinaryImageInfo::name;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100bae548 | SentryBinaryImageInfo::uuid */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryBinaryImageInfo::uuid(ID param_1,SEL param_2)

{
  NSString *pNVar1;
  
  FUN_100bae58c();
  if (param_2 == (SEL)0x0) {
    pNVar1 = (NSString *)0x0;
  }
  else {
    pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(param_2);
  }
  return (ID)pNVar1;
}



/* Address: 0x100bae58c | FUN_100bae58c */

void FUN_100bae58c(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + SentryBinaryImageInfo::uuid);
  FUN_100b78ca0(puVar1,auStack_38);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  FUN_100b86d54();
  FUN_100b6f9fc(uVar2,uVar3);
  return;
}



/* Address: 0x100bae5cc | SentryBinaryImageInfo::setUuid: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryBinaryImageInfo::setUuid_(ID param_1,SEL param_2,ID param_3)

{
  String SVar1;
  
  if (param_3 == 0) {
    SVar1 = (String)ZEXT816(0);
  }
  else {
    SVar1 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  FUN_100bae630(SVar1.str,SVar1.bridgeObject);
  return;
}



/* Address: 0x100bae630 | FUN_100bae630 */

void FUN_100bae630(void)

{
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  FUN_100b80d38(unaff_x20 + SentryBinaryImageInfo::uuid,auStack_48);
  FUN_100b9a1e4();
  FUN_100b78c90();
  return;
}


