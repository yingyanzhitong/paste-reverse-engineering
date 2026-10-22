/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100bc2704 | _TtC6Sentry9SentryHub::reportFullyDisplayed */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry9SentryHub::reportFullyDisplayed(ID param_1,SEL param_2)

{
  FUN_100bc26ec(param_1);
  return;
}



/* Address: 0x100bc272c | FUN_100bc272c */

void FUN_100bc272c(void)

{
  long unaff_x20;
  
  _objc_msgSend(*(ID *)(unaff_x20 + _TtC6Sentry9SentryHub::helper),"flush:");
  return;
}



/* Address: 0x100bc2744 | _TtC6Sentry9SentryHub::flush: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry9SentryHub::flush_(ID param_1,SEL param_2,double param_3)

{
  FUN_100bc272c(param_3,param_1);
  return;
}



/* Address: 0x100bc277c | FUN_100bc277c */

void FUN_100bc277c(void)

{
  long unaff_x20;
  
  _objc_msgSend(*(ID *)(unaff_x20 + _TtC6Sentry9SentryHub::helper),"close");
  return;
}



/* Address: 0x100bc2794 | _TtC6Sentry9SentryHub::close */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

int _TtC6Sentry9SentryHub::close(int param_1)

{
  FUN_100bc277c(param_1);
  return 0;
}



/* Address: 0x100bc27bc | FUN_100bc27bc */

void FUN_100bc27bc(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("Sentry.SentryHub",0x10,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100bc27e8);
  (*pcVar1)();
}



/* Address: 0x100bc27e8 | _TtC6Sentry9SentryHub::init */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry9SentryHub::init(ID param_1,SEL param_2)

{
  FUN_100bc27bc();
  return 0;
}



/* Address: 0x100bc27f4 | _TtC6Sentry9SentryHub::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry9SentryHub::_cxx_destruct(ID param_1,SEL param_2)

{
  return;
}



/* Address: 0x100bc2804 | FUN_100bc2804 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100bc2804(void)

{
  return ZEXT816(0x100fa3d08);
}



/* Address: 0x100bc2824 | FUN_100bc2824 */

void FUN_100bc2824(undefined8 param_1,undefined8 param_2)

{
  _swift_lookUpClassMethod(param_1,param_2,&TargetClassDescriptor_100ccfa28);
  return;
}



/* Address: 0x100bc2830 | FUN_100bc2830 */

void FUN_100bc2830(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100bc2834. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x20 + 0x58))();
  return;
}



/* Address: 0x100bc2838 | FUN_100bc2838 */

void FUN_100bc2838(void)

{
  long unaff_x20;
  
  __Block_release(*(void **)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x100bc285c | thunk_FUN_100bc2064 */

void thunk_FUN_100bc2064(void)

{
  FUN_100bc2064();
  return;
}



/* Address: 0x100bc2860 | thunk_FUN_100bc2074 */

void thunk_FUN_100bc2074(void)

{
  FUN_100bc2074();
  return;
}



/* Address: 0x100bc2864 | FUN_100bc2864 */

void FUN_100bc2864(undefined8 param_1,SEL param_2)

{
  ID unaff_x20;
  
  _objc_msgSend(unaff_x20,param_2);
  return;
}



/* Address: 0x100bc2874 | FUN_100bc2874 */

void FUN_100bc2874(void)

{
  return;
}



/* Address: 0x100bc2880 | FUN_100bc2880 */

void FUN_100bc2880(void)

{
  (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  return;
}



/* Address: 0x100bc2888 | FUN_100bc2888 */

void FUN_100bc2888(void)

{
  FUN_100bc28a0(&PTR_s_addSubscriber__100f85e48);
  return;
}



/* Address: 0x100bc2894 | FUN_100bc2894 */

void FUN_100bc2894(void)

{
  FUN_100bc28a0(&PTR_s_removeSubscriber__100f85e98);
  return;
}



/* Address: 0x100bc28a0 | FUN_100bc28a0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100bc28a0(undefined8 *param_1)

{
  ID self;
  
  self = _objc_msgSend((ID)&_OBJC_CLASS___MXMetricManager,"sharedManager");
  _objc_msgSend(self,(SEL)*param_1);
  FUN_100b78d38(self);
  return;
}



/* Address: 0x100bc28f0 | FUN_100bc28f0 */

undefined8 FUN_100bc28f0(undefined *param_1,undefined *param_2,long param_3)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *(long *)(param_3 + 0x10);
  if (lVar6 == 0) {
LAB_100bc294c:
    uVar4 = 0;
  }
  else {
    if (*(undefined **)(param_3 + 0x20) != param_1 || *(undefined **)(param_3 + 0x28) != param_2) {
      bVar3 = Swift::_stringCompareWithSmolCheck
                        ((_StringGuts)*(undefined **)(param_3 + 0x20),
                         (_StringGuts)*(undefined **)(param_3 + 0x28),
                         (_StringComparisonResult)(__int8)param_1);
      if (!bVar3) {
        if (lVar6 == 1) goto LAB_100bc294c;
        puVar5 = (undefined8 *)(param_3 + 0x38);
        lVar7 = 1;
        while( true ) {
          lVar1 = lVar7 + 1;
          if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100bc29b4);
            (*pcVar2)();
          }
          if (((undefined *)puVar5[-1] == param_1 && (undefined *)*puVar5 == param_2) ||
             (bVar3 = Swift::_stringCompareWithSmolCheck
                                ((undefined *)puVar5[-1],(undefined *)*puVar5,
                                 (_StringComparisonResult)(__int8)param_1), bVar3)) break;
          lVar7 = lVar7 + 1;
          puVar5 = puVar5 + 2;
          if (lVar1 == lVar6) {
            return 0;
          }
        }
      }
    }
    uVar4 = 1;
  }
  return uVar4;
}



/* Address: 0x100bc29b4 | FUN_100bc29b4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_100bc29b4(long param_1)

{
  _CocoaArrayWrapper _Var1;
  code *pcVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  ulong uVar14;
  __int64 _Var15;
  __int64 _Var16;
  ulong uVar17;
  
  lVar8 = *(long *)(param_1 + 0x10);
  puVar10 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (lVar8 != 0) {
    _swift_bridgeObjectRetain();
    lVar11 = 0;
    puVar10 = PTR___swiftEmptyArrayStorage_100eae0d8;
    do {
      puVar12 = *(undefined **)(param_1 + lVar11 * 0x10 + 0x28);
      puVar4 = puVar12;
      _swift_bridgeObjectRetain();
      FUN_100ba8830();
      _swift_bridgeObjectRelease(puVar12);
      uVar14 = (ulong)puVar4 >> 0x3e;
      if (uVar14 == 0) {
        _Var15 = *(__int64 *)((undefined *)((ulong)puVar4 & 0xffffffffffffff8) + 0x10);
      }
      else {
        _Var1.unknown = (undefined *)((ulong)puVar4 & 0xffffffffffffff8);
        if (((ulong)puVar4 & 0x8000000000000000) != 0) {
          _Var1.unknown = puVar4;
        }
        _Var15 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
      }
      uVar17 = (ulong)puVar10 >> 0x3e;
      if (uVar17 == 0) {
        lVar5 = *(long *)((undefined *)((ulong)puVar10 & 0xffffffffffffff8) + 0x10);
      }
      else {
        _Var1.unknown = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
        if (((ulong)puVar10 & 0x8000000000000000) != 0) {
          _Var1.unknown = puVar10;
        }
        lVar5 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
      }
      lVar13 = lVar5 + _Var15;
      if (SCARRY8(lVar5,_Var15)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100bc2c18);
        (*pcVar2)();
      }
      puVar12 = puVar10;
      _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
      uVar3 = 0;
      if (uVar17 == 0) {
        uVar3 = (uint)puVar12;
      }
      puVar12 = (undefined *)(ulong)uVar3;
      if ((uVar3 != 1) ||
         (uVar9 = (ulong)puVar10 & 0xffffffffffffff8, (long)(*(ulong *)(uVar9 + 0x18) >> 1) < lVar13
         )) {
        if (uVar17 == 0) {
          lVar5 = *(long *)((undefined *)((ulong)puVar10 & 0xffffffffffffff8) + 0x10);
        }
        else {
          _Var1.unknown = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
          if (((ulong)puVar10 & 0x8000000000000000) != 0) {
            _Var1.unknown = puVar10;
          }
          lVar5 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
        }
        if (lVar5 <= lVar13) {
          lVar5 = lVar13;
        }
        FUN_100b6ea6c(puVar12,lVar5,1,puVar10);
        uVar9 = (ulong)puVar12 & 0xffffffffffffff8;
        puVar10 = puVar12;
      }
      lVar5 = *(long *)(uVar9 + 0x10);
      uVar17 = *(ulong *)(uVar9 + 0x18);
      if (uVar14 == 0) {
        _Var16 = *(__int64 *)((undefined *)((ulong)puVar4 & 0xffffffffffffff8) + 0x10);
        if (_Var16 == 0) goto LAB_100bc2b1c;
LAB_100bc2ab8:
        if ((long)((uVar17 >> 1) - lVar5) < _Var15) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100bc2c20);
          (*pcVar2)();
        }
        lVar5 = uVar9 + lVar5 * 8 + 0x20;
        if (uVar14 == 0) {
          uVar6 = 0;
          FUN_100b673ec(0,&DAT_101044940,&PTR_SentryDebugMeta_100f8e020);
          _swift_arrayInitWithCopy(lVar5,((ulong)puVar4 & 0xffffffffffffff8) + 0x20,_Var15,uVar6);
        }
        else {
          if (_Var16 < 1) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100bc2c28);
            (*pcVar2)();
          }
          lVar13 = 0;
          do {
            if (((ulong)puVar4 & 0xc000000000000001) == 0) {
              lVar7 = *(long *)(puVar4 + lVar13 * 8 + 0x20);
            }
            else {
              lVar7 = lVar13;
              FUN_100b6d828(lVar13,puVar4);
            }
            *(long *)(lVar5 + lVar13 * 8) = lVar7;
            lVar13 = lVar13 + 1;
          } while (_Var16 != lVar13);
        }
        if (0 < _Var15) {
          if (SCARRY8(*(long *)(uVar9 + 0x10),_Var15)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100bc2c24);
            (*pcVar2)();
          }
          *(long *)(uVar9 + 0x10) = *(long *)(uVar9 + 0x10) + _Var15;
        }
      }
      else {
        _Var1.unknown = (undefined *)((ulong)puVar4 & 0xffffffffffffff8);
        if (((ulong)puVar4 & 0x8000000000000000) != 0) {
          _Var1.unknown = puVar4;
        }
        _Var16 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
        if (_Var16 != 0) goto LAB_100bc2ab8;
LAB_100bc2b1c:
        if (0 < _Var15) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100bc2c1c);
          (*pcVar2)();
        }
      }
      lVar11 = lVar11 + 1;
      _swift_bridgeObjectRelease(puVar4);
    } while (lVar11 != lVar8);
    _swift_bridgeObjectRelease(param_1);
  }
  return puVar10;
}



/* Address: 0x100bc2c28 | FUN_100bc2c28 */

undefined * FUN_100bc2c28(long param_1,code *param_2)

{
  ulong uVar1;
  undefined1 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_100b69690(0,0,0);
  lVar5 = *(long *)(param_1 + 0x10);
  _swift_bridgeObjectRetain(param_1);
  puVar6 = (undefined8 *)(param_1 + 0x28);
  for (lVar7 = 0; lVar5 != lVar7; lVar7 = lVar7 + 1) {
    uVar8 = *puVar6;
    uVar2 = *(undefined1 *)(puVar6 + -1);
    _swift_bridgeObjectRetain(uVar8);
    lVar4 = lVar7;
    (*param_2)(lVar7,uVar2,uVar8);
    _swift_bridgeObjectRelease(uVar8);
    uVar1 = *(ulong *)(puVar3 + 0x10);
    if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar1) {
      FUN_100b69690(1 < *(ulong *)(puVar3 + 0x18),uVar1 + 1,1);
    }
    *(ulong *)(puVar3 + 0x10) = uVar1 + 1;
    *(long *)(puVar3 + uVar1 * 8 + 0x20) = lVar4;
    puVar6 = puVar6 + 2;
  }
  _swift_bridgeObjectRelease(param_1);
  return puVar3;
}



/* Address: 0x100bc2d44 | FUN_100bc2d44 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long FUN_100bc2d44(undefined8 param_1,undefined1 param_2,undefined1 param_3)

{
  long lVar1;
  long lVar2;
  Locale LVar3;
  undefined *self;
  ID self_00;
  Locale LVar4;
  NSLocale *pNVar5;
  long extraout_x8;
  long extraout_x9;
  long unaff_x20;
  long lVar6;
  String identifier;
  
  lVar2 = unaff_x20;
  _swift_getObjectType();
  LVar3 = Foundation::Locale::typeMetadataAccessor();
  lVar6 = *(long *)(LVar3.unknown + -8);
  FUN_100b6f9e0(*(undefined8 *)(lVar6 + 0x40));
  *(undefined1 *)(unaff_x20 + _TtC6Sentry15SentryMXManager::disableCrashDiagnostics) = param_3;
  *(undefined8 *)(unaff_x20 + _TtC6Sentry15SentryMXManager::inAppLogic) = param_1;
  *(undefined1 *)(unaff_x20 + _TtC6Sentry15SentryMXManager::attachDiagnosticAsAttachment) = param_2;
  self = &_OBJC_CLASS___NSMeasurementFormatter;
  _objc_allocWithZone();
  self_00 = _objc_msgSend((ID)self,"init");
  lVar1 = _TtC6Sentry15SentryMXManager::measurementFormatter;
  *(ID *)(unaff_x20 + _TtC6Sentry15SentryMXManager::measurementFormatter) = self_00;
  identifier.bridgeObject = &DAT_e500000000000000;
  identifier.str = (char *)0x53555f6e65;
  LVar4 = Foundation::Locale::init(identifier);
  pNVar5 = Foundation::Locale::_bridgeToObjectiveC(LVar4);
  (**(code **)(lVar6 + 8))(extraout_x9 - extraout_x8,LVar3.unknown);
  _objc_msgSend(self_00,"setLocale:",pNVar5);
  FUN_100b7ca38();
  _objc_msgSend(*(ID *)(unaff_x20 + lVar1),"setUnitOptions:",1);
  FUN_100b6fce4();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff90,"init");
  FUN_100b6f82c();
  return lVar2;
}



/* Address: 0x100bc2eb0 | FUN_100bc2eb0 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100bc2eb0(ulong param_1)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  code *pcVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  Date DVar7;
  undefined **ppuVar8;
  undefined **self;
  char *pcVar9;
  Date DVar10;
  Measurement MVar11;
  _StringGuts _Var12;
  undefined *puVar13;
  char *pcVar14;
  char *pcVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  long lVar18;
  long extraout_x8;
  long lVar19;
  long extraout_x8_00;
  undefined **ppuVar20;
  char *extraout_x8_01;
  undefined *extraout_x8_02;
  undefined *extraout_x8_03;
  long extraout_x8_04;
  undefined *extraout_x8_05;
  undefined *extraout_x8_06;
  _CocoaArrayWrapper _Var21;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  long extraout_x9_03;
  long extraout_x9_04;
  long extraout_x9_05;
  undefined *extraout_x10;
  undefined8 extraout_x10_00;
  undefined **ppuVar22;
  long unaff_x20;
  undefined *puVar23;
  long lVar24;
  undefined **ppuVar25;
  undefined **ppuVar26;
  long lVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  String SVar33;
  String SVar34;
  String SVar35;
  String SVar36;
  String SVar37;
  String SVar38;
  String SVar39;
  undefined *local_78;
  char *pcStack_70;
  
  puVar6 = &DAT_101047568;
  FUN_100b6730c();
  lVar18 = *(long *)(puVar6 + -8);
  FUN_100b6f9e0(*(undefined8 *)(lVar18 + 0x40));
  DVar7 = Foundation::Date::typeMetadataAccessor();
  lVar19 = *(long *)(DVar7.unknown + -8);
  FUN_100b6f9e0(*(undefined8 *)(lVar19 + 0x40));
  ppuVar20 = (undefined **)(extraout_x9_00 - extraout_x8_00);
  if (param_1 >> 0x3e == 0) {
    ppuVar22 = *(undefined ***)(((ulong)extraout_x10 & 0xffffffffffffff8) + 0x10);
    lVar3 = _TtC6Sentry15SentryMXManager::disableCrashDiagnostics;
  }
  else {
    _Var21.unknown = extraout_x10 & 0xffffffffffffff8;
    if ((long)extraout_x10 < 0) {
      _Var21.unknown = extraout_x10;
    }
    ppuVar22 = (undefined **)Swift::_CocoaArrayWrapper::get_endIndex(_Var21);
    lVar3 = _TtC6Sentry15SentryMXManager::disableCrashDiagnostics;
  }
  _TtC6Sentry15SentryMXManager::disableCrashDiagnostics = lVar3;
  if (ppuVar22 != (undefined **)0x0) {
    if ((long)ppuVar22 < 1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100bc37a4);
      (*pcVar4)();
    }
    FUN_100bc48fc("MachException Type:");
    _swift_bridgeObjectRetain(extraout_x10_00);
    ppuVar8 = (undefined **)0x0;
    ppuVar5 = ppuVar20;
    do {
      if (((ulong)extraout_x10 & 0xc000000000000001) == 0) {
        self = *(undefined ***)(extraout_x10 + (long)ppuVar8 * 8 + 0x20);
      }
      else {
        self = ppuVar8;
        FUN_100b6da60(ppuVar8,extraout_x10_00);
      }
      ppuVar17 = &PTR_s_crashDiagnostics_100f85e60;
      pcVar15 = &DAT_1010449c8;
      ppuVar16 = &PTR__OBJC_CLASS___MXCrashDiagnostic_100f8e198;
      ppuVar26 = self;
      FUN_100bc4430();
      if (ppuVar26 != (undefined **)0x0) {
        FUN_100bc48b8();
        if (extraout_x9_01 == 0) {
          lVar24 = *(long *)(extraout_x8_02 + 0x10);
        }
        else {
          _Var21.unknown = (undefined *)ppuVar22;
          if (-1 < (long)ppuVar22) {
            _Var21.unknown = extraout_x8_02;
          }
          lVar24 = Swift::_CocoaArrayWrapper::get_endIndex(_Var21);
        }
        if (lVar24 != 0) {
          bVar2 = *(byte *)(unaff_x20 + lVar3);
          FUN_100b86d54();
          lVar27 = 4;
          while( true ) {
            if (((ulong)ppuVar22 & 0xc000000000000001) == 0) {
              puVar23 = ppuVar22[lVar27];
            }
            else {
              puVar23 = (undefined *)(lVar27 + -4);
              ppuVar17 = ppuVar22;
              FUN_100b6dab0();
            }
            if (SCARRY8(lVar27 + -4,1)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x100bc3770);
              (*pcVar4)();
            }
            if ((bVar2 & 1) == 0) {
              FUN_100b7c9a8();
              Swift::_StringGuts::grow(0x27,(_StringGuts)ppuVar17);
              FUN_100b7ca7c();
              local_78 = (undefined *)0xd000000000000013;
              pcVar14 = "exceptionType";
              pcStack_70 = extraout_x8_01;
              FUN_100bb5eb4();
              pcVar9 = &DAT_101047588;
              FUN_100b6730c();
              FUN_100bc48c8();
              SVar32.bridgeObject = pcVar14;
              SVar32.str = pcVar9;
              SVar33.bridgeObject = ppuVar16;
              SVar33.str = pcVar15;
              Swift::String::append(SVar32,SVar33);
              _swift_bridgeObjectRelease(pcVar14);
              pcVar9 = (char *)0x3a65646f4320;
              SVar28.bridgeObject = &DAT_e600000000000000;
              SVar28.str = (char *)0x3a65646f4320;
              SVar34.bridgeObject = ppuVar16;
              SVar34.str = pcVar15;
              Swift::String::append(SVar28,SVar34);
              pcVar14 = "exceptionCode";
              FUN_100bb5eb4();
              FUN_100bc48c8();
              SVar29.bridgeObject = pcVar14;
              SVar29.str = pcVar9;
              SVar35.bridgeObject = ppuVar16;
              SVar35.str = pcVar15;
              Swift::String::append(SVar29,SVar35);
              _swift_bridgeObjectRelease(pcVar14);
              pcVar9 = (char *)0x3a6c616e67695320;
              SVar30.bridgeObject = &DAT_e800000000000000;
              SVar30.str = (char *)0x3a6c616e67695320;
              SVar36.bridgeObject = ppuVar16;
              SVar36.str = pcVar15;
              Swift::String::append(SVar30,SVar36);
              pcVar14 = "signal";
              FUN_100bb5eb4();
              FUN_100bc48c8();
              SVar31.bridgeObject = pcVar14;
              SVar31.str = pcVar9;
              SVar37.bridgeObject = ppuVar16;
              SVar37.str = pcVar15;
              Swift::String::append(SVar31,SVar37);
              _swift_bridgeObjectRelease(pcVar14);
              pcVar9 = pcStack_70;
              puVar13 = local_78;
              DVar10.unknown = (undefined *)_objc_msgSend((ID)self,"timeStampBegin");
              Foundation::Date::__unconditionallyBridgeFromObjectiveC(DVar10);
              FUN_100bc48d4(0);
              *(undefined1 *)(ppuVar5 + 1) = 0;
              *ppuVar5 = puVar23;
              ppuVar16 = (undefined **)0xd000000000000011;
              pcVar15 = pcVar9;
              FUN_100bc4510(0,puVar13,pcVar9,0xd000000000000011,0x8000000100c9d220,
                            0xd000000000000011,0x8000000100c9d220,ppuVar20);
              ppuVar5 = ppuVar5 + 4;
              _swift_bridgeObjectRelease(pcVar9);
              ppuVar17 = (undefined **)DVar7;
              (**(code **)(lVar19 + 8))(ppuVar20);
            }
            if (lVar27 + -3 == lVar24) break;
            lVar27 = lVar27 + 1;
          }
          FUN_100b6f838(0);
        }
        FUN_100b6f838();
      }
      ppuVar17 = &PTR__OBJC_CLASS___MXDiskWriteExceptionDiagnostic_100f8e1a0;
      ppuVar16 = self;
      FUN_100bc4430(self,&PTR_s_diskWriteExceptionDiagnostics_100f85e68,&DAT_1010449d0);
      if (ppuVar16 != (undefined **)0x0) {
        FUN_100bc48b8();
        if (extraout_x9_02 == 0) {
          ppuVar26 = *(undefined ***)(extraout_x8_03 + 0x10);
        }
        else {
          _Var21.unknown = (undefined *)ppuVar22;
          if (-1 < (long)ppuVar22) {
            _Var21.unknown = extraout_x8_03;
          }
          ppuVar26 = (undefined **)Swift::_CocoaArrayWrapper::get_endIndex(_Var21);
          ppuVar16 = ppuVar26;
        }
        if (ppuVar26 != (undefined **)0x0) {
          if ((long)ppuVar26 < 1) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100bc3778);
            (*pcVar4)();
          }
          FUN_100bc491c();
          FUN_100b86d54();
          ppuVar25 = (undefined **)0x0;
          do {
            if (((ulong)ppuVar22 & 0xc000000000000001) == 0) {
              FUN_100bc4914(ppuVar22 + (long)ppuVar25);
            }
            else {
              ppuVar16 = ppuVar25;
              FUN_100b6da9c(ppuVar25,ppuVar22);
            }
            ppuVar25 = (undefined **)((long)ppuVar25 + 1);
            MVar11.unknown = (undefined *)_objc_msgSend((ID)ppuVar16,"totalWritesCaused");
            _Var12.unknown = &DAT_101047578;
            FUN_100b6730c();
            lVar24 = *(long *)(_Var12.unknown + -8);
            FUN_100b6f9e0(*(undefined8 *)(lVar24 + 0x40));
            ppuVar16 = &PTR__OBJC_CLASS___NSUnitInformationStorage_100f8e228;
            FUN_100b673ec(0,&DAT_101047580);
            Foundation::Measurement::__unconditionallyBridgeFromObjectiveC(MVar11);
            FUN_100b6f868();
            SVar32 = (extension_Foundation)::__C::NSMeasurementFormatter::_string
                               ((undefined *)(extraout_x9_03 - extraout_x8_04));
            (**(code **)(lVar24 + 8))((undefined *)(extraout_x9_03 - extraout_x8_04));
            FUN_100b7c9a8();
            Swift::_StringGuts::grow(0x29,_Var12);
            FUN_100b7ca7c();
            local_78 = (undefined *)0xd000000000000027;
            pcStack_70 = (char *)0x8000000100dcfe90;
            SVar38.bridgeObject = ppuVar17;
            SVar38.str = (char *)ppuVar16;
            Swift::String::append(SVar32,SVar38);
            FUN_100b6f980();
            DVar10.unknown = (undefined *)_objc_msgSend((ID)self,"timeStampBegin");
            Foundation::Date::__unconditionallyBridgeFromObjectiveC(DVar10);
            FUN_100b6fce4();
            FUN_100bc48d4();
            *(undefined1 *)((long)ppuVar5 + 8) = 0;
            ppuVar17 = (undefined **)0xd000000000000014;
            FUN_100bc48e4("T@\"SentryScope\",N,R");
            FUN_100bc4510();
            ppuVar5 = (undefined **)((long)ppuVar5 + 0x20);
            FUN_100b6f980();
            ppuVar16 = ppuVar20;
            (**(code **)(lVar19 + 8))(ppuVar20,DVar7.unknown);
            FUN_100b7ca38();
          } while (ppuVar26 != ppuVar25);
          FUN_100b6f838();
        }
        FUN_100b6f838();
      }
      ppuVar17 = self;
      FUN_100bc4430(self,&PTR_s_cpuExceptionDiagnostics_100f85e58,&DAT_1010449d8,
                    &PTR__OBJC_CLASS___MXCPUExceptionDiagnostic_100f8e1a8);
      if (ppuVar17 != (undefined **)0x0) {
        FUN_100bc48b8();
        if (extraout_x9_04 == 0) {
          lVar24 = *(long *)(extraout_x8_05 + 0x10);
        }
        else {
          _Var21.unknown = (undefined *)ppuVar22;
          if (-1 < (long)ppuVar22) {
            _Var21.unknown = extraout_x8_05;
          }
          lVar24 = Swift::_CocoaArrayWrapper::get_endIndex(_Var21);
        }
        if (lVar24 != 0) {
          FUN_100b86d54();
          lVar27 = 4;
          do {
            puVar23 = (undefined *)(lVar27 + -4);
            if (((ulong)ppuVar22 & 0xc000000000000001) == 0) {
              puVar13 = ppuVar22[lVar27];
            }
            else {
              puVar13 = puVar23;
              FUN_100b6da88(puVar23,ppuVar22);
            }
            lVar1 = lVar27 + -3;
            if (SCARRY8((long)puVar23,1)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x100bc3774);
              (*pcVar4)();
            }
            local_78 = puVar13;
            FUN_100bc37a4(&local_78,unaff_x20,self);
            FUN_100b7ca38();
            lVar27 = lVar27 + 1;
          } while (lVar1 != lVar24);
          FUN_100b6f838();
        }
        FUN_100b6f838();
      }
      ppuVar17 = &PTR__OBJC_CLASS___MXHangDiagnostic_100f8e1b0;
      ppuVar16 = self;
      FUN_100bc4430(self,&PTR_s_hangDiagnostics_100f85e80,&DAT_1010449e0);
      if (ppuVar16 != (undefined **)0x0) {
        FUN_100bc48b8();
        if (extraout_x9_05 == 0) {
          ppuVar26 = *(undefined ***)(extraout_x8_06 + 0x10);
        }
        else {
          _Var21.unknown = (undefined *)ppuVar22;
          if (-1 < (long)ppuVar22) {
            _Var21.unknown = extraout_x8_06;
          }
          ppuVar26 = (undefined **)Swift::_CocoaArrayWrapper::get_endIndex(_Var21);
          ppuVar16 = ppuVar26;
        }
        if (ppuVar26 == (undefined **)0x0) {
          FUN_100b6f838(0);
        }
        else {
          if ((long)ppuVar26 < 1) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100bc377c);
            (*pcVar4)();
          }
          FUN_100bc491c();
          FUN_100b86d54();
          ppuVar25 = (undefined **)0x0;
          do {
            if (((ulong)ppuVar22 & 0xc000000000000001) == 0) {
              FUN_100bc4914(ppuVar22 + (long)ppuVar25);
            }
            else {
              ppuVar16 = ppuVar25;
              FUN_100b6da74(ppuVar25,ppuVar22);
            }
            ppuVar25 = (undefined **)((long)ppuVar25 + 1);
            MVar11.unknown = (undefined *)_objc_msgSend((ID)ppuVar16,"hangDuration");
            ppuVar16 = &PTR__OBJC_CLASS___NSUnitDuration_100f8e220;
            FUN_100b673ec(0,&DAT_101047570);
            Foundation::Measurement::__unconditionallyBridgeFromObjectiveC(MVar11);
            FUN_100b6f868();
            SVar32 = (extension_Foundation)::__C::NSMeasurementFormatter::_string
                               ((undefined *)(extraout_x9 - extraout_x8));
            _Var12.unknown = puVar6;
            (**(code **)(lVar18 + 8))((undefined *)(extraout_x9 - extraout_x8));
            FUN_100b7c9a8();
            Swift::_StringGuts::grow(0x20,_Var12);
            FUN_100b7ca7c();
            local_78 = (undefined *)0xd00000000000001e;
            pcStack_70 = (char *)0x8000000100dcfe70;
            SVar39.bridgeObject = ppuVar17;
            SVar39.str = (char *)ppuVar16;
            Swift::String::append(SVar32,SVar39);
            _swift_bridgeObjectRelease(SVar32.bridgeObject);
            DVar10.unknown = (undefined *)_objc_msgSend((ID)self,"timeStampBegin");
            Foundation::Date::__unconditionallyBridgeFromObjectiveC(DVar10);
            FUN_100b6fce4();
            ppuVar17 = (undefined **)0xd000000000000010;
            FUN_100bc48d4();
            *(undefined1 *)((long)ppuVar5 + 8) = 1;
            FUN_100bc48e4("mx_cpu_exception");
            FUN_100bc4510();
            ppuVar5 = (undefined **)((long)ppuVar5 + 0x20);
            FUN_100b6f980();
            ppuVar16 = ppuVar20;
            (**(code **)(lVar19 + 8))(ppuVar20,DVar7.unknown);
            FUN_100b7ca38();
          } while (ppuVar26 != ppuVar25);
          _swift_bridgeObjectRelease_n(ppuVar22,2);
        }
      }
      ppuVar8 = (undefined **)((long)ppuVar8 + 1);
    } while (ppuVar8 != ppuVar22);
    _swift_bridgeObjectRelease(extraout_x10_00);
  }
  FUN_100b56ea0();
  return;
}



/* Address: 0x100bc37a4 | FUN_100bc37a4 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100bc37a4(ID *param_1,undefined8 param_2,ID param_3,void *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  _StringGuts _Var3;
  Measurement MVar4;
  Date DVar5;
  undefined **ppuVar6;
  undefined1 *puVar7;
  long lVar8;
  ID self;
  code *pcVar9;
  Measurement<undefined> from;
  String SVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  ID IStack_c0;
  undefined1 auStack_b8 [8];
  undefined8 auStack_b0 [2];
  undefined1 auStack_a0 [8];
  char *local_98;
  undefined8 local_90;
  ID local_88;
  long local_80;
  undefined *puStack_78;
  undefined8 local_70;
  undefined8 local_68;
  
  local_90 = param_2;
  local_88 = param_3;
  puStack_78 = (undefined *)Foundation::Date::typeMetadataAccessor();
  local_80 = *(long *)(puStack_78 + -8);
  puVar7 = auStack_a0 + -(*(long *)(local_80 + 0x40) + 0xfU & 0xfffffffffffffff0);
  _Var3.unknown = &DAT_101047568;
  FUN_100b6730c();
  lVar8 = *(long *)(_Var3.unknown + -8);
  from.unknown = puVar7 + -(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  self = *param_1;
  MVar4.unknown = (undefined *)_objc_msgSend(self,"totalCPUTime");
  ppuVar6 = &PTR__OBJC_CLASS___NSUnitDuration_100f8e220;
  FUN_100b673ec(0,&DAT_101047570);
  Foundation::Measurement::__unconditionallyBridgeFromObjectiveC(MVar4);
  SVar10 = (extension_Foundation)::__C::NSMeasurementFormatter::_string(from);
  SVar11.bridgeObject = SVar10.bridgeObject;
  local_98 = SVar10.str;
  pcVar9 = *(code **)(lVar8 + 8);
  (*pcVar9)(from.unknown,_Var3.unknown);
  MVar4.unknown = (undefined *)_objc_msgSend(self,"totalSampledTime");
  Foundation::Measurement::__unconditionallyBridgeFromObjectiveC(MVar4);
  SVar10 = (extension_Foundation)::__C::NSMeasurementFormatter::_string(from);
  (*pcVar9)(from.unknown);
  local_70 = 0;
  local_68 = 0xe000000000000000;
  Swift::_StringGuts::grow(0x32,_Var3);
  _swift_bridgeObjectRelease(local_68);
  local_70 = 0xd00000000000001c;
  local_68 = 0x8000000100dcff20;
  SVar11.str = local_98;
  SVar13.bridgeObject = param_4;
  SVar13.str = (char *)ppuVar6;
  Swift::String::append(SVar11,SVar13);
  _swift_bridgeObjectRelease(SVar11.bridgeObject);
  SVar12.bridgeObject = (void *)0x8000000100dcff40;
  SVar12.str = (char *)0xd000000000000012;
  SVar14.bridgeObject = param_4;
  SVar14.str = (char *)ppuVar6;
  Swift::String::append(SVar12,SVar14);
  SVar15.bridgeObject = param_4;
  SVar15.str = (char *)ppuVar6;
  Swift::String::append(SVar10,SVar15);
  _swift_bridgeObjectRelease(SVar10.bridgeObject);
  uVar2 = local_68;
  uVar1 = local_70;
  DVar5.unknown = (undefined *)_objc_msgSend(local_88,"timeStampBegin");
  Foundation::Date::__unconditionallyBridgeFromObjectiveC(DVar5);
  *(undefined8 *)(from.unknown + -0x10) = local_90;
  from.unknown[-0x18] = 0;
  *(ID *)(from.unknown + -0x20) = self;
  FUN_100bc4510(1,uVar1,uVar2,0x637845555043584d,0xee006e6f69747065,0xd000000000000010,
                0x8000000100dcfd90,puVar7);
  _swift_bridgeObjectRelease(uVar2);
  (**(code **)(local_80 + 8))(puVar7,puStack_78);
  return;
}



/* Address: 0x100bc3a48 | _TtC6Sentry15SentryMXManager::didReceiveDiagnosticPayloads: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry15SentryMXManager::didReceiveDiagnosticPayloads_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100b673ec(0,&DAT_1010449e8,&PTR__OBJC_CLASS___MXDiagnosticPayload_100f8e1b8);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  FUN_100bc2eb0(param_3);
  _swift_bridgeObjectRelease(param_3);
  return;
}



/* Address: 0x100bc3ab0 | FUN_100bc3ab0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100bc3ab0(ulong param_1,undefined *param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,uint param_7)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ID self;
  ulong uVar8;
  long unaff_x20;
  ID IVar9;
  undefined *puVar10;
  long lVar11;
  undefined *local_90;
  undefined1 auStack_88 [8];
  undefined8 local_80;
  undefined *local_78;
  undefined *local_70;
  
  _swift_bridgeObjectRetain(param_3);
  puVar3 = param_3;
  FUN_100bc29b4();
  _swift_bridgeObjectRelease(param_3);
  local_70 = PTR___swiftEmptySetSingleton_100eae0e8;
  puVar4 = puVar3;
  thunk_FUN_100b6cd50();
  puVar6 = puVar3;
  _swift_bridgeObjectRetain();
  local_90 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar10 = (undefined *)0x0;
  while (puVar4 != puVar10) {
    if (((ulong)puVar3 & 0xc000000000000001) == 0) {
      if (*(undefined **)(((ulong)puVar3 & 0xffffffffffffff8) + 0x10) <= puVar10) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100bc3ecc);
        (*pcVar2)();
      }
      FUN_100bc4914(puVar3 + (long)puVar10 * 8);
      puVar7 = puVar6;
      puVar6 = param_2;
    }
    else {
      puVar7 = puVar10;
      puVar6 = puVar3;
      FUN_100b6d828(puVar10,puVar3);
    }
    if (SCARRY8((long)puVar10,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100bc3ec8);
      (*pcVar2)();
    }
    param_2 = puVar7;
    FUN_100bc43cc(puVar7);
    puVar5 = auStack_88;
    FUN_100b70c74(puVar5,param_2,puVar6);
    _swift_bridgeObjectRelease(local_80);
    if (((ulong)puVar5 & 1) == 0) {
      puVar6 = (undefined *)0x0;
      puVar10 = puVar10 + 1;
    }
    else {
      puVar6 = local_90;
      _swift_isUniquelyReferenced_nonNull_native();
      local_78 = local_90;
      if (((ulong)puVar6 & 1) == 0) {
        param_2 = (undefined *)(*(long *)(local_90 + 0x10) + 1);
        puVar6 = (undefined *)0x0;
        FUN_100b6965c(0,param_2,1);
      }
      uVar8 = *(ulong *)(local_78 + 0x10);
      puVar1 = (undefined *)(uVar8 + 1);
      if (*(ulong *)(local_78 + 0x18) >> 1 <= uVar8) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(local_78 + 0x18));
        param_2 = puVar1;
        FUN_100b6965c(puVar6,puVar1,1);
      }
      *(undefined **)(local_78 + 0x10) = puVar1;
      *(undefined **)(local_78 + uVar8 * 8 + 0x20) = puVar7;
      puVar10 = puVar10 + 1;
      local_90 = local_78;
    }
  }
  FUN_100b6f8ec();
  FUN_100b6f8ec();
  FUN_100b6f838();
  if ((param_7 & 1) == 0) {
    FUN_100bc4894(*(undefined8 *)(unaff_x20 + _TtC6Sentry15SentryMXManager::inAppLogic));
  }
  else {
    FUN_100bc4894(*(undefined8 *)(unaff_x20 + _TtC6Sentry15SentryMXManager::inAppLogic));
  }
  FUN_100bc2c28();
  _swift_bridgeObjectRelease(param_3);
  puVar3 = puVar6;
  thunk_FUN_100b6cd50();
  if (puVar3 == (undefined *)0x0) {
    self = 0;
  }
  else {
    _swift_bridgeObjectRetain_n(puVar6,2);
    lVar11 = 4;
    do {
      IVar9 = lVar11 - 4;
      if (((ulong)puVar6 & 0xc000000000000001) == 0) {
        self = *(ID *)(puVar6 + lVar11 * 8);
      }
      else {
        self = IVar9;
        FUN_100b6dad8(IVar9,puVar6);
      }
      puVar4 = (undefined *)(lVar11 + -3);
      if (SCARRY8(IVar9,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100bc3ed0);
        (*pcVar2)();
      }
      IVar9 = _objc_msgSend(self,"crashed");
      if (IVar9 != 0) {
        IVar9 = _objc_msgSend(IVar9,"boolValue");
        FUN_100b6fce4();
        if ((int)IVar9 != 0) {
          FUN_100b9411c();
          goto LAB_100bc3d9c;
        }
      }
      FUN_100b6f934();
      lVar11 = lVar11 + 1;
    } while (puVar4 != puVar3);
    FUN_100b9411c();
    if (((ulong)puVar6 & 0xc000000000000001) == 0) {
      if (*(long *)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100bc3f04);
        (*pcVar2)();
      }
      self = *(ID *)(puVar6 + 0x20);
    }
    else {
      _swift_bridgeObjectRetain(puVar6);
      FUN_100b6dad8(0,puVar6);
      FUN_100bc4908();
    }
  }
LAB_100bc3d9c:
  FUN_100bc449c(local_90,param_1,&DAT_101044940,&PTR_SentryDebugMeta_100f8e020,
                &PTR_s_setDebugMeta__100f89928);
  FUN_100bc449c(puVar6,param_1,&DAT_101044928,&PTR_SentryThread_100f8de78,
                &PTR_s_setThreads__100f8a498);
  if (self != 0) {
    uVar8 = param_1;
    FUN_100bc4430(param_1,&PTR_s_exceptions_100f87410,&DAT_101044a20,&PTR_SentryException_100f8dde0)
    ;
    if (uVar8 != 0) {
      if ((uVar8 & 0xc000000000000001) == 0) {
        if (*(long *)((uVar8 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100bc3ee4);
          (*pcVar2)();
        }
      }
      else {
        FUN_100b6dac4(0,uVar8);
      }
      _swift_bridgeObjectRelease(uVar8);
      FUN_100b78ce8();
      FUN_100bc48ac();
      FUN_100b6fce4();
      FUN_100b78ce8();
      FUN_100bc48ac();
      FUN_100b6faa8();
      FUN_100b6f868();
    }
    FUN_100b6faa8();
  }
  FUN_100bc3f04(param_1,param_5,param_6);
  FUN_100b6f934();
  FUN_100b56ea0();
  return;
}



/* Address: 0x100bc3f04 | FUN_100bc3f04 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

undefined * FUN_100bc3f04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + _TtC6Sentry15SentryMXManager::attachDiagnosticAsAttachment) == '\x01') {
    FUN_100bad754(0);
    puVar1 = &DAT_100f3ae08;
    _swift_allocObject(&DAT_100f3ae08,0x20,7);
    *(undefined8 *)(puVar1 + 0x10) = param_2;
    *(undefined8 *)(puVar1 + 0x18) = param_3;
    FUN_100b6d4e0(param_2,param_3);
    FUN_100bac008(param_1,FUN_100bc4888,puVar1);
    _swift_release(puVar1);
    return puVar1;
  }
  _objc_msgSend((ID)&objc::class_t::SentrySDKInternal,"captureEvent:",param_1);
  return (undefined *)0x0;
}



/* Address: 0x100bc3fd4 | FUN_100bc3fd4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100bc3fd4(ID param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_allocWithZone(&objc::class_t::SentryAttachment);
  FUN_100b6d4e0(param_2,param_3);
  FUN_100bc42e8(param_2,param_3,0xd000000000000018,0x8000000100dcff00);
  _objc_msgSend(param_1,"addAttachment:",param_2);
  return 0;
}



/* Address: 0x100bc4068 | FUN_100bc4068 */

void FUN_100bc4068(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("Sentry.SentryMXManager",0x16,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100bc4094);
  (*pcVar1)();
}



/* Address: 0x100bc4094 | _TtC6Sentry15SentryMXManager::init */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry15SentryMXManager::init(ID param_1,SEL param_2)

{
  FUN_100bc4068();
  return 0;
}



/* Address: 0x100bc40a0 | _TtC6Sentry15SentryMXManager::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry15SentryMXManager::_cxx_destruct(ID param_1,SEL param_2)

{
  return;
}



/* Address: 0x100bc40d8 | FUN_100bc40d8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

uint FUN_100bc40d8(void)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ID self;
  ID IVar4;
  undefined *puVar5;
  undefined *puVar6;
  char *pcVar7;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  ulong extraout_x9;
  undefined8 extraout_x9_00;
  ulong extraout_x9_01;
  ulong unaff_x20;
  uint uVar8;
  String SVar9;
  
  uVar2 = unaff_x20;
  FUN_100bc4430();
  if (uVar2 != 0) {
    uVar3 = uVar2;
    thunk_FUN_100b6cd50();
    if (uVar3 == 0) {
      FUN_100b6f838();
    }
    else {
      if ((uVar2 & 0xc000000000000001) == 0) {
        if (*(long *)((uVar2 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100bc42b4);
          (*pcVar1)();
        }
        self = *(ID *)(uVar2 + 0x20);
      }
      else {
        self = 0;
        FUN_100b6dac4(0,uVar2);
      }
      FUN_100b6f838();
      IVar4 = _objc_msgSend(self,"mechanism");
      FUN_100b6f82c(IVar4);
      if (uVar2 != 0) {
        FUN_100bc4430();
        if (unaff_x20 != 0) {
          thunk_FUN_100b6cd50();
          FUN_100bc4908();
          if (self == 1) {
            puVar5 = &DAT_101044958;
            FUN_100b6730c();
            _swift_initStackObject();
            *(undefined8 *)(puVar5 + 0x18) = 8;
            *(undefined8 *)(puVar5 + 0x10) = 4;
            puVar6 = puVar5;
            FUN_100bc48fc("MXCrashDiagnostic");
            *(undefined8 *)(puVar6 + 0x20) = 0xd000000000000011;
            *(undefined8 *)(puVar6 + 0x28) = extraout_x8;
            FUN_100bc48fc("mx_disk_write_exception");
            *(ulong *)(puVar6 + 0x30) = extraout_x9 | 7;
            *(undefined8 *)(puVar6 + 0x38) = extraout_x8_00;
            FUN_100bc48fc("mx_cpu_exception");
            *(undefined8 *)(puVar6 + 0x40) = extraout_x9_00;
            *(undefined8 *)(puVar6 + 0x48) = extraout_x8_01;
            FUN_100bc48fc("mx_hang_diagnostic");
            *(ulong *)(puVar6 + 0x50) = extraout_x9_01 | 2;
            *(undefined8 *)(puVar6 + 0x58) = extraout_x8_02;
            FUN_100b78ce8();
            SVar9 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
            pcVar7 = SVar9.str;
            FUN_100b6f934();
            FUN_100bc28f0(pcVar7,SVar9.bridgeObject,puVar5);
            uVar8 = (uint)pcVar7;
            FUN_100b6f8ec();
            FUN_100b6faa8();
            _swift_setDeallocating(puVar5);
            FUN_100bc43a4();
            _swift_deallocClassInstance();
            goto LAB_100bc4284;
          }
        }
        FUN_100b6faa8();
      }
    }
  }
  uVar8 = 0;
LAB_100bc4284:
  return uVar8 & 1;
}



/* Address: 0x100bc42b4 | SentryEvent::isMetricKitEvent */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

bool SentryEvent::isMetricKitEvent(ID param_1,SEL param_2)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  FUN_100bc40d8();
  return uVar1 & 1;
}



/* Address: 0x100bc42e8 | FUN_100bc42e8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100bc42e8(Data param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  NSData *pNVar1;
  NSString *pNVar2;
  ID IVar3;
  ID unaff_x20;
  
  pNVar1 = Foundation::Data::_bridgeToObjectiveC(param_1);
  pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_4);
  IVar3 = _objc_msgSend(unaff_x20,"initWithData:filename:",pNVar1,pNVar2);
  FUN_10003bf2c(param_1.unknown,param_2);
  return IVar3;
}



/* Address: 0x100bc437c | thunk_FUN_100bc4380 */

void thunk_FUN_100bc4380(ulong param_1,uint param_2,ulong param_3)

{
  code *pcVar1;
  
  if ((param_2 & 1) != 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100bc43a0);
      (*pcVar1)();
    }
    if (*(ulong *)((param_3 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100bc43a4);
      (*pcVar1)();
    }
  }
  return;
}



/* Address: 0x100bc4380 | FUN_100bc4380 */

void FUN_100bc4380(ulong param_1,uint param_2,ulong param_3)

{
  code *pcVar1;
  
  if ((param_2 & 1) != 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100bc43a0);
      (*pcVar1)();
    }
    if (*(ulong *)((param_3 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100bc43a4);
      (*pcVar1)();
    }
  }
  return;
}



/* Address: 0x100bc43a4 | FUN_100bc43a4 */

void FUN_100bc43a4(void)

{
  long unaff_x20;
  
  _swift_arrayDestroy(unaff_x20 + 0x20,*(undefined8 *)(unaff_x20 + 0x10),
                      PTR___type_metadata_for_Swift_String_100eac208);
  return;
}



/* Address: 0x100bc43cc | FUN_100bc43cc */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

String FUN_100bc43cc(ID param_1)

{
  ID IVar1;
  String SVar2;
  
  IVar1 = _objc_msgSend(param_1,"debugID");
  if (IVar1 == 0) {
    SVar2 = (String)ZEXT816(0);
  }
  else {
    SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  return SVar2;
}



/* Address: 0x100bc4430 | FUN_100bc4430 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

undefined8 FUN_100bc4430(ID param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  ID IVar1;
  
  IVar1 = _objc_msgSend(param_1,(SEL)*param_2);
  if (IVar1 == 0) {
    param_4 = 0;
  }
  else {
    FUN_100b673ec(0,param_3,param_4);
    (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
    FUN_100b6f82c();
  }
  return param_4;
}



/* Address: 0x100bc449c | FUN_100bc449c */

void FUN_100bc449c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  NSArray *pNVar1;
  
  FUN_100b673ec(0,param_3,param_4);
  pNVar1 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  FUN_100b6f980();
  FUN_100bc48ac();
  FUN_100b78d38(pNVar1);
  return;
}



/* Address: 0x100bc44f0 | FUN_100bc44f0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100bc44f0(void)

{
  return ZEXT816(0x100fa3dc8);
}



/* Address: 0x100bc4510 | FUN_100bc4510 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x000100bc45bc) */

undefined8
FUN_100bc4510(uint param_1,ID param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
             ID param_6,undefined8 param_7,undefined8 param_8,ID param_9,byte param_10)

{
  undefined8 uVar1;
  ID IVar2;
  Data DVar3;
  Data DVar4;
  class_t *self;
  Date self_00;
  NSDate *pNVar5;
  undefined *self_01;
  NSNumber *this;
  NSNumber *pNVar6;
  char *pcVar7;
  char *pcVar8;
  Data unaff_x19;
  
  IVar2 = _objc_msgSend(param_9,"callStackTree");
  pcVar7 = "JSONRepresentation";
  IVar2 = _objc_msgSend(IVar2,"JSONRepresentation");
  FUN_100b6f82c(IVar2);
  DVar3 = Foundation::Data::__unconditionallyBridgeFromObjectiveC(unaff_x19);
  FUN_100b6faa8();
  DVar4 = DVar3;
  pcVar8 = pcVar7;
  FUN_100b88bc0();
  FUN_10003bf2c(DVar3.unknown,pcVar7);
  uVar1 = 3;
  if ((param_1 & 1) == 0) {
    uVar1 = 4;
  }
  self = &objc::class_t::SentryEvent;
  _objc_allocWithZone();
  self_00.unknown = (undefined *)_objc_msgSend((ID)self,"initWithLevel:",uVar1);
  pNVar5 = Foundation::Date::_bridgeToObjectiveC(self_00);
  _objc_msgSend((ID)self_00.unknown,"setTimestamp:",pNVar5);
  FUN_100b6faa8();
  _objc_allocWithZone(&objc::class_t::SentryException);
  _swift_bridgeObjectRetain(param_5);
  _swift_bridgeObjectRetain(param_3);
  FUN_100bc8964(param_2,param_3,param_4,param_5);
  FUN_100b673ec(0,&DAT_101047590,&PTR_SentryMechanism_100f8ddf0);
  _swift_bridgeObjectRetain(param_7);
  FUN_100bc8144(param_6,param_7);
  self_01 = &_OBJC_CLASS___NSNumber;
  _objc_allocWithZone();
  IVar2 = _objc_msgSend((ID)self_01,"initWithBool:",(ulong)(param_1 & 1));
  _objc_msgSend(param_6,"setHandled:",IVar2);
  FUN_100b6fce4();
  this = (NSNumber *)0x0;
  FUN_100b673ec(0,&DAT_100fa87f8,&PTR__OBJC_CLASS___NSNumber_100f8d750);
  pNVar6 = (extension_Foundation)::__C::NSNumber::__allocating_init(this,true);
  _objc_msgSend(param_6,"setSynthetic:",pNVar6);
  FUN_100b6f868();
  IVar2 = _objc_msgSend(param_2,"setMechanism:",param_6);
  FUN_100b93928();
  _swift_allocObject();
  *(undefined8 *)(IVar2 + 0x18) = 3;
  *(undefined8 *)(IVar2 + 0x10) = 1;
  *(ID *)(IVar2 + 0x20) = param_2;
  FUN_100bc449c(IVar2,self_00.unknown,&DAT_101044a20,&PTR_SentryException_100f8dde0,
                &PTR_s_setExceptions__100f89a90);
  pcVar7 = "JSONRepresentation";
  DVar3.unknown = (undefined *)_objc_msgSend(param_9,"JSONRepresentation");
  DVar3 = Foundation::Data::__unconditionallyBridgeFromObjectiveC(DVar3);
  FUN_100b6f868();
  FUN_100bc3ab0(self_00.unknown,(ulong)(param_1 & 1),DVar4.unknown,(uint)pcVar8 & 1,DVar3.unknown,
                pcVar7,param_10 & 1);
  FUN_10003bf2c(DVar3.unknown,pcVar7);
  FUN_100b6f980();
  FUN_100b6faa8(0);
  return 0;
}



/* Address: 0x100bc4844 | FUN_100bc4844 */

void FUN_100bc4844(void)

{
  FUN_100ba8aa8();
  return;
}



/* Address: 0x100bc4850 | FUN_100bc4850 */

void FUN_100bc4850(void)

{
  FUN_100ba9658();
  return;
}



/* Address: 0x100bc4864 | FUN_100bc4864 */

void FUN_100bc4864(void)

{
  long unaff_x20;
  
  FUN_10003bf2c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x100bc4888 | FUN_100bc4888 */

void FUN_100bc4888(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100bc3fd4(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100bc4890 | thunk_FUN_100bc4380 */

void thunk_FUN_100bc4380(ulong param_1,uint param_2,ulong param_3)

{
  code *pcVar1;
  
  if ((param_2 & 1) != 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100bc43a0);
      (*pcVar1)();
    }
    if (*(ulong *)((param_3 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100bc43a4);
      (*pcVar1)();
    }
  }
  return;
}



/* Address: 0x100bc4894 | FUN_100bc4894 */

void FUN_100bc4894(undefined8 param_1)

{
  long in_x9;
  long unaff_x29;
  
  *(undefined8 *)(in_x9 + -0x10) = param_1;
  *(byte *)(in_x9 + -8) = (byte)*(undefined4 *)(unaff_x29 + -0x94) & 1;
  _swift_bridgeObjectRetain();
  return;
}



/* Address: 0x100bc48ac | FUN_100bc48ac */

void FUN_100bc48ac(undefined8 param_1,SEL param_2)

{
  ID unaff_x20;
  
  _objc_msgSend(unaff_x20,param_2);
  return;
}



/* Address: 0x100bc48b8 | FUN_100bc48b8 */

void FUN_100bc48b8(void)

{
  return;
}



/* Address: 0x100bc48c8 | FUN_100bc48c8 */

String FUN_100bc48c8(void)

{
  long unaff_x29;
  String SVar1;
  
  SVar1 = Swift::String::_init(unaff_x29 + -0x78);
  return SVar1;
}



/* Address: 0x100bc48d4 | FUN_100bc48d4 */

void FUN_100bc48d4(void)

{
  return;
}



/* Address: 0x100bc48e4 | FUN_100bc48e4 */

undefined8 FUN_100bc48e4(void)

{
  return 1;
}



/* Address: 0x100bc48fc | FUN_100bc48fc */

void FUN_100bc48fc(void)

{
  return;
}



/* Address: 0x100bc4908 | FUN_100bc4908 */

void FUN_100bc4908(void)

{
  _swift_bridgeObjectRelease();
  return;
}



/* Address: 0x100bc4914 | FUN_100bc4914 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_100bc4914(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Address: 0x100bc491c | FUN_100bc491c */

void FUN_100bc491c(void)

{
  return;
}



/* Address: 0x100bc4930 | FUN_100bc4930 */

undefined1 * FUN_100bc4930(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_58 [40];
  
  FUN_100076688(param_1,auStack_58);
  puVar1 = auStack_58;
  FUN_100bc498c(puVar1);
  FUN_100004594(param_1);
  return puVar1;
}



/* Address: 0x100bc498c | FUN_100bc498c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x000100bc4adc) */
/* WARNING: Removing unreachable block (ram,0x000100bc4c50) */
/* WARNING: Removing unreachable block (ram,0x000100bc4a6c) */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100bc4b48 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ID FUN_100bc498c(long param_1)

{
  __ContiguousArrayStorageBase *p_Var1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  NSArray *pNVar5;
  NSDictionary *pNVar6;
  undefined8 uVar7;
  __ContiguousArrayStorageBase *p_Var8;
  long lVar9;
  ID unaff_x20;
  long unaff_x21;
  long lVar10;
  __ContiguousArrayStorageBase *local_70;
  undefined1 local_61;
  __ContiguousArrayStorageBase *local_58;
  
  puVar2 = &DAT_1010475c0;
  FUN_100b6730c();
  lVar10 = *(long *)(puVar2 + -8);
  lVar9 = *(long *)(lVar10 + 0x40);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_100bc5020();
  Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    puVar3 = &DAT_1010475d0;
    FUN_100b6730c(&DAT_1010475d0);
    local_61 = 0;
    puVar4 = puVar3;
    FUN_100bc5060();
    Swift::KeyedDecodingContainer::_decodeIfPresent(&local_58,puVar3,&local_61,puVar2,puVar3,puVar4)
    ;
    p_Var1 = (__ContiguousArrayStorageBase *)PTR___swiftEmptyArrayStorage_100eae0d8;
    if (local_58 != (__ContiguousArrayStorageBase *)0x0) {
      p_Var1 = local_58;
    }
    puVar3 = &DAT_101044b60;
    FUN_100b6730c(&DAT_101044b60);
    local_61 = 1;
    puVar4 = puVar3;
    switchD_100bab490::caseD_25();
    Swift::KeyedDecodingContainer::_decodeIfPresent(&local_58,puVar3,&local_61,puVar2,puVar3,puVar4)
    ;
    local_70 = local_58;
    if (local_58 == (__ContiguousArrayStorageBase *)0x0) {
      local_70 = (__ContiguousArrayStorageBase *)
                 Swift::Dictionary::_init
                           (puVar4,PTR___type_metadata_for_Swift_String_100eac208,
                            PTR___type_metadata_for_Swift_String_100eac208,
                            PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100eac218
                           );
    }
    if ((ulong)p_Var1 >> 0x3e == 0) {
      p_Var8 = p_Var1;
      _swift_bridgeObjectRetain();
      Swift::__ContiguousArrayStorageBase::_get_staticElementType
                ((__ContiguousArrayStorageBase *)((ulong)p_Var1 & 0xffffffffffffff8),p_Var8);
      FUN_100b8633c(0);
      p_Var8 = p_Var1;
    }
    else {
      p_Var8 = (__ContiguousArrayStorageBase *)((ulong)p_Var1 & 0xffffffffffffff8);
      if ((long)p_Var1 < 0) {
        p_Var8 = p_Var1;
      }
      FUN_100b8633c((__ContiguousArrayStorageBase *)((ulong)p_Var1 & 0xffffffffffffff8),0);
      _swift_bridgeObjectRetain(p_Var1);
      Swift::__bridgeCocoaArray();
      _swift_bridgeObjectRelease(p_Var1);
    }
    _swift_bridgeObjectRelease(p_Var1);
    _objc_allocWithZone();
    FUN_100b8633c(0);
    pNVar5 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(p_Var8);
    p_Var1 = local_70;
    pNVar6 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(p_Var1);
    unaff_x20 = _objc_msgSend(unaff_x20,"initWithFrames:registers:",pNVar5,pNVar6);
    uVar7 = 0;
    local_61 = 2;
    FUN_100b7e4f0(0);
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (&local_58,&DAT_100f3d290,&local_61,puVar2,&DAT_100f3d290,uVar7);
    p_Var1 = (__ContiguousArrayStorageBase *)0x0;
    if (local_58 != (__ContiguousArrayStorageBase *)&DAT_00000001) {
      p_Var1 = local_58;
    }
    _objc_msgSend(unaff_x20,"setSnapshot:",p_Var1);
    FUN_10001486c(local_58);
    (**(code **)(lVar10 + 8))((long)&local_70 - (lVar9 + 0xfU & 0xfffffffffffffff0),puVar2);
    FUN_100004594(param_1);
  }
  else {
    FUN_100004594(param_1);
  }
  return unaff_x20;
}



/* Address: 0x100bc4d00 | FUN_100bc4d00 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100bc4d00(undefined8 param_1,undefined8 param_2)

{
  NSArray *pNVar1;
  NSDictionary *pNVar2;
  ID IVar3;
  
  _swift_getObjectType();
  FUN_100b8633c(0);
  pNVar1 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_1);
  pNVar2 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_2);
  IVar3 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffb0,"initWithFrames:registers:",
                              pNVar1,pNVar2);
  return IVar3;
}



/* Address: 0x100bc4dc0 | _TtC6Sentry25SentryStacktraceDecodable::initWithFrames:registers: */

/* Function Stack Size: 0x20 bytes */

ID _TtC6Sentry25SentryStacktraceDecodable::initWithFrames_registers_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  Dictionary<undefined,undefined> DVar1;
  
  FUN_100b8633c(0);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  DVar1 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  FUN_100bc4d00(param_3,DVar1.unknown);
  return param_3;
}



/* Address: 0x100bc4e30 | FUN_100bc4e30 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100bc4e30(void)

{
  return ZEXT816(0x100fa3ea0);
}


