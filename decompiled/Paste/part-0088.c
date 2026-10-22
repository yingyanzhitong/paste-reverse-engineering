/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1000fe2b8 | FUN_1000fe2b8 */

Set<undefined> FUN_1000fe2b8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long minimumCapacity;
  undefined8 *puVar3;
  undefined1 auStack_58 [8];
  undefined8 local_50;
  undefined *local_48;
  
  minimumCapacity = *(long *)(param_1 + 0x10);
  local_48 = (undefined *)Swift::Set::init(minimumCapacity);
  if (minimumCapacity != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x28);
    do {
      uVar1 = puVar3[-1];
      uVar2 = *puVar3;
      _swift_bridgeObjectRetain(uVar2);
      FUN_10016549c(auStack_58,uVar1,uVar2);
      _swift_bridgeObjectRelease(local_50);
      puVar3 = puVar3 + 2;
      minimumCapacity = minimumCapacity + -1;
    } while (minimumCapacity != 0);
  }
  return (Set<undefined>)local_48;
}



/* Address: 0x1000fe34c | FUN_1000fe34c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1000fe34c(ID param_1)

{
  undefined *puVar1;
  ID IVar2;
  code *pcVar3;
  ID IVar4;
  undefined8 uVar5;
  ID *pIVar6;
  ID IVar7;
  ID IVar8;
  ulong uVar9;
  ulong uVar10;
  ID local_88;
  undefined1 auStack_80 [32];
  
  IVar4 = objc_stub::threads(param_1);
  puVar1 = PTR___type_metadata_for_Any_100eae0c0;
  if (IVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1000fe508);
    (*pcVar3)();
  }
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  uVar9 = *(ulong *)(IVar4 + 0x10);
  if (uVar9 != 0) {
    uVar10 = 0;
    IVar8 = IVar4;
    do {
      IVar8 = IVar8 + 0x20;
      if (*(ulong *)(IVar4 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1000fe504);
        (*pcVar3)();
      }
      FUN_10000cbfc(IVar8,auStack_80);
      uVar5 = 0;
      FUN_10000ec2c(0,&DAT_100fae910,&PTR_PHPLCrashReportThreadInfo_100f8d898);
      pIVar6 = &local_88;
      _swift_dynamicCast(pIVar6,auStack_80,puVar1 + 8,uVar5,6);
      IVar2 = local_88;
      if ((((ulong)pIVar6 & 1) != 0) && (IVar7 = objc_stub::crashed(local_88), (IVar7 & 1) != 0)) {
        _swift_bridgeObjectRelease(IVar4);
        return IVar2;
      }
      uVar10 = uVar10 + 1;
    } while (uVar9 != uVar10);
  }
  _swift_bridgeObjectRelease(IVar4);
  IVar4 = objc_stub::threads(param_1);
  if (IVar4 != 0) {
    (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
    if (*(long *)(IVar4 + 0x10) == 0) {
      _swift_bridgeObjectRelease(IVar4);
      local_88 = 0;
    }
    else {
      FUN_10000cbfc(IVar4 + 0x20,auStack_80);
      _swift_bridgeObjectRelease(IVar4);
      uVar5 = 0;
      FUN_10000ec2c(0,&DAT_100fae910,&PTR_PHPLCrashReportThreadInfo_100f8d898);
      pIVar6 = &local_88;
      _swift_dynamicCast(pIVar6,auStack_80,puVar1 + 8,uVar5,6);
      if ((int)pIVar6 == 0) {
        local_88 = 0;
      }
    }
    return local_88;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1000fe50c);
  (*pcVar3)();
}



/* Address: 0x1000fe50c | FUN_1000fe50c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_1000fe50c(ID param_1,long param_2)

{
  _CocoaArrayWrapper _Var1;
  char *pcVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  bool bVar7;
  ID IVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  ulong uVar12;
  ID IVar13;
  undefined *puVar14;
  undefined8 *puVar15;
  char *pcVar16;
  long lVar17;
  undefined1 uVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  void *pvVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  undefined1 local_dc;
  ID local_d8;
  undefined1 local_c4;
  ID local_c0;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  IVar8 = objc_stub::hasExceptionInfo(param_1);
  if ((((int)IVar8 != 0) && (IVar8 = objc_stub::exceptionInfo(param_1), IVar8 != 0)) &&
     (puVar9 = (undefined *)objc_stub::stackFrames(IVar8), puVar9 != (undefined *)0x0)) {
    (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
    puVar10 = puVar9;
    FUN_1000fd5c8(puVar9,FUN_10010f9cc,&DAT_100faf350,&PTR_PHPLCrashReportStackFrameInfo_100f8d8a0);
    _swift_bridgeObjectRelease(puVar9);
    if (puVar10 != (undefined *)0x0) {
      if ((ulong)puVar10 >> 0x3e == 0) {
        lVar11 = *(long *)((undefined *)((ulong)puVar10 & 0xffffffffffffff8) + 0x10);
      }
      else {
        _Var1.unknown = puVar10;
        if (-1 < (long)puVar10) {
          _Var1.unknown = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
        }
        lVar11 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
      }
      if (lVar11 != 0) goto LAB_1000fe668;
      _swift_bridgeObjectRelease(puVar10);
    }
  }
  IVar8 = param_1;
  FUN_1000fe34c();
  if (IVar8 == 0) {
    return PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  puVar9 = (undefined *)objc_stub::stackFrames(IVar8);
  if (puVar9 != (undefined *)0x0) {
    (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
    puVar10 = puVar9;
    FUN_1000fd5c8(puVar9,FUN_10010f9cc,&DAT_100faf350,&PTR_PHPLCrashReportStackFrameInfo_100f8d8a0);
    _swift_bridgeObjectRelease(puVar9);
    if (puVar10 != (undefined *)0x0) goto LAB_1000fe668;
  }
  puVar10 = PTR___swiftEmptyArrayStorage_100eae0d8;
LAB_1000fe668:
  if ((ulong)puVar10 >> 0x3e == 0) {
    uVar22 = *(ulong *)(((ulong)puVar10 & 0xffffffffffffff8) + 0x10);
    lVar11 = _TtC7PostHog26PostHogErrorTrackingConfig::inAppIncludes;
    lVar4 = _TtC7PostHog26PostHogErrorTrackingConfig::inAppExcludes;
    lVar5 = _TtC7PostHog26PostHogErrorTrackingConfig::inAppByDefault;
  }
  else {
    _Var1.unknown = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar10) {
      _Var1.unknown = puVar10;
    }
    uVar22 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
    lVar11 = _TtC7PostHog26PostHogErrorTrackingConfig::inAppIncludes;
    lVar4 = _TtC7PostHog26PostHogErrorTrackingConfig::inAppExcludes;
    lVar5 = _TtC7PostHog26PostHogErrorTrackingConfig::inAppByDefault;
  }
  _TtC7PostHog26PostHogErrorTrackingConfig::inAppIncludes = lVar11;
  _TtC7PostHog26PostHogErrorTrackingConfig::inAppExcludes = lVar4;
  _TtC7PostHog26PostHogErrorTrackingConfig::inAppByDefault = lVar5;
  if (uVar22 == 0) {
    _swift_bridgeObjectRelease(puVar10);
    return PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  _swift_beginAccess(param_2 + lVar11,auStack_80,0,0);
  _swift_beginAccess(param_2 + lVar4,auStack_98,0,0);
  _swift_beginAccess(param_2 + lVar5,auStack_b0,0,0);
  uVar21 = 0;
  puVar9 = PTR___swiftEmptyArrayStorage_100eae0d8;
LAB_1000fe714:
  if (((ulong)puVar10 & 0xc000000000000001) == 0) {
    if (*(ulong *)(((ulong)puVar10 & 0xffffffffffffff8) + 0x10) <= uVar21) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1000feb30);
      (*pcVar6)();
    }
    uVar12 = *(ulong *)(puVar10 + uVar21 * 8 + 0x20);
  }
  else {
    uVar12 = uVar21;
    FUN_10010eb5c(uVar21,puVar10);
  }
  bVar7 = SCARRY8(uVar21,1);
  uVar21 = uVar21 + 1;
  if (bVar7) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1000feb2c);
    (*pcVar6)();
  }
  IVar8 = objc_stub::instructionPointer(uVar12);
  IVar8 = objc_stub::imageForAddress_(param_1,IVar8);
  if (IVar8 == 0) {
    local_c0 = 0;
    SVar24 = (String)ZEXT816(0);
    local_c4 = 1;
  }
  else {
    local_c0 = objc_stub::imageBaseAddress(IVar8);
    IVar8 = objc_stub::imageName(IVar8);
    if (IVar8 == 0) {
      local_c4 = 0;
      SVar24 = (String)ZEXT816(0);
    }
    else {
      objc_stub::lastPathComponent(IVar8);
      SVar24 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      _swift_bridgeObjectRetain(SVar24.bridgeObject);
      local_c4 = 0;
    }
  }
  pvVar23 = SVar24.bridgeObject;
  IVar8 = objc_stub::symbolInfo(uVar12);
  if (IVar8 == 0) {
    local_d8 = 0;
    SVar28 = (String)ZEXT816(0);
    SVar25 = (String)ZEXT816(0);
    local_dc = 1;
    if (pvVar23 == (void *)0x0) goto LAB_1000fe868;
LAB_1000fe894:
    lVar19 = *(long *)(param_2 + lVar11);
    lVar17 = *(long *)(lVar19 + 0x10);
    _swift_bridgeObjectRetain(lVar19);
    uVar20 = 0xffffffffffffffff;
    puVar15 = (undefined8 *)(lVar19 + 0x28);
    do {
      if (uVar20 - lVar17 == -1) {
        _swift_bridgeObjectRelease(lVar19);
        lVar19 = *(long *)(param_2 + lVar4);
        lVar17 = *(long *)(lVar19 + 0x10);
        _swift_bridgeObjectRetain(lVar19);
        uVar20 = 0xffffffffffffffff;
        puVar15 = (undefined8 *)(lVar19 + 0x28);
        goto LAB_1000fe94c;
      }
      uVar20 = uVar20 + 1;
      if (*(ulong *)(lVar19 + 0x10) <= uVar20) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1000feb24);
        (*pcVar6)();
      }
      pcVar16 = (char *)puVar15[-1];
      pvVar3 = (void *)*puVar15;
      _swift_bridgeObjectRetain(pvVar3);
      SVar26.bridgeObject = pvVar3;
      SVar26.str = pcVar16;
      bVar7 = Swift::String::hasPrefix(SVar26,SVar24);
      _swift_bridgeObjectRelease(pvVar3);
      puVar15 = puVar15 + 2;
    } while (!bVar7);
    _swift_bridgeObjectRelease(lVar19);
    uVar18 = 1;
  }
  else {
    IVar13 = objc_stub::symbolName(IVar8);
    if (IVar13 == 0) {
      SVar25 = (String)ZEXT816(0);
    }
    else {
      SVar25 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    }
    local_d8 = objc_stub::startAddress(IVar8);
    local_dc = 0;
    SVar28 = SVar25;
    if (pvVar23 != (void *)0x0) goto LAB_1000fe894;
LAB_1000fe868:
    uVar18 = 0;
    SVar25 = SVar28;
  }
  goto LAB_1000fea2c;
  while( true ) {
    uVar20 = uVar20 + 1;
    if (*(ulong *)(lVar19 + 0x10) <= uVar20) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1000feb28);
      (*pcVar6)();
    }
    pcVar16 = (char *)puVar15[-1];
    pvVar3 = (void *)*puVar15;
    _swift_bridgeObjectRetain(pvVar3);
    SVar27.bridgeObject = pvVar3;
    SVar27.str = pcVar16;
    bVar7 = Swift::String::hasPrefix(SVar27,SVar24);
    _swift_bridgeObjectRelease(pvVar3);
    puVar15 = puVar15 + 2;
    if (bVar7) break;
LAB_1000fe94c:
    if (uVar20 - lVar17 == -1) {
      _swift_bridgeObjectRelease(lVar19);
      lVar17 = 0x2c;
      pcVar16 = s_Foundation_100faf0a0 + 8;
      goto LAB_1000fe9d4;
    }
  }
  _swift_bridgeObjectRelease(lVar19);
  uVar18 = 0;
  goto LAB_1000fea2c;
  while( true ) {
    pcVar2 = *(char **)(pcVar16 + -8);
    pvVar3 = *(void **)pcVar16;
    _swift_bridgeObjectRetain(pvVar3);
    SVar28.bridgeObject = pvVar3;
    SVar28.str = pcVar2;
    bVar7 = Swift::String::hasPrefix(SVar28,SVar24);
    _swift_bridgeObjectRelease(pvVar3);
    pcVar16 = pcVar16 + 0x10;
    if (bVar7) break;
LAB_1000fe9d4:
    lVar17 = lVar17 + -1;
    if (lVar17 == 0) {
      uVar18 = *(undefined1 *)(param_2 + lVar5);
      goto LAB_1000fea2c;
    }
  }
  uVar18 = 0;
LAB_1000fea2c:
  IVar8 = objc_stub::instructionPointer(uVar12);
  _swift_bridgeObjectRetain(SVar25.bridgeObject);
  _swift_bridgeObjectRetain_n(pvVar23,2);
  puVar14 = puVar9;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar14 & 1) == 0) {
    puVar14 = (undefined *)0x0;
    FUN_100105528(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
    puVar9 = puVar14;
  }
  uVar12 = *(ulong *)(puVar9 + 0x10);
  if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar12) {
    puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
    FUN_100105528(puVar9,uVar12 + 1,1);
  }
  *(ulong *)(puVar9 + 0x10) = uVar12 + 1;
  *(ID *)(puVar9 + uVar12 * 0x58 + 0x20) = IVar8 & 0xfffffffff;
  *(String *)(puVar9 + uVar12 * 0x58 + 0x28) = SVar24;
  *(String *)(puVar9 + uVar12 * 0x58 + 0x38) = SVar24;
  *(ID *)(puVar9 + uVar12 * 0x58 + 0x48) = local_c0;
  puVar9[uVar12 * 0x58 + 0x50] = local_c4;
  puVar9[uVar12 * 0x58 + 0x51] = uVar18;
  *(String *)(puVar9 + uVar12 * 0x58 + 0x58) = SVar25;
  *(ID *)(puVar9 + uVar12 * 0x58 + 0x68) = local_d8;
  puVar9[uVar12 * 0x58 + 0x70] = local_dc;
  _swift_bridgeObjectRelease_n(pvVar23,2);
  _swift_bridgeObjectRelease(SVar25.bridgeObject);
  if (uVar21 == uVar22) {
    _swift_bridgeObjectRelease(puVar10);
    return puVar9;
  }
  goto LAB_1000fe714;
}



/* Address: 0x1000feb90 | FUN_1000feb90 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

String FUN_1000feb90(ID param_1)

{
  ulong uVar1;
  CharacterSet CVar2;
  ID IVar3;
  CharacterSet CVar4;
  undefined *puVar5;
  void *pvVar6;
  long extraout_x8;
  CharacterSet in;
  long lVar7;
  String SVar8;
  String local_60;
  
  CVar2 = Foundation::CharacterSet::typeMetadataAccessor();
  lVar7 = *(long *)(CVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar7 + 0x40));
  in.unknown = (undefined *)((long)&local_60 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  IVar3 = objc_stub::signalInfo(param_1);
  if ((IVar3 != 0) && (IVar3 = objc_stub::crashInfoMessage(IVar3), IVar3 != 0)) {
    local_60 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    puVar5 = local_60.bridgeObject;
    CVar4.unknown = puVar5;
    _swift_bridgeObjectRetain();
    Foundation::CharacterSet::get_whitespacesAndNewlines(CVar4);
    FUN_1001013b8();
    SVar8 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(in);
    pvVar6 = SVar8.bridgeObject;
    (**(code **)(lVar7 + 8))(in.unknown,CVar2.unknown);
    _swift_bridgeObjectRelease(puVar5);
    uVar1 = (ulong)SVar8.str & 0xffffffffffff;
    if (((ulong)pvVar6 & 0x2000000000000000) != 0) {
      uVar1 = (ulong)pvVar6 >> 0x38 & 0xf;
    }
    _swift_bridgeObjectRelease(puVar5);
    if (uVar1 != 0) {
      return SVar8;
    }
    _swift_bridgeObjectRelease(pvVar6);
  }
  return (String)ZEXT816(0);
}



/* Address: 0x1000fece8 | FUN_1000fece8 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

String FUN_1000fece8(void *param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  NSString *pNVar4;
  ID IVar5;
  ID IVar6;
  char *extraout_x1;
  char *pcVar7;
  char *extraout_x1_00;
  void *pvVar8;
  uint uVar9;
  ulong uVar10;
  _NSRange _Var11;
  _NSRange _Var12;
  String SVar13;
  String SVar15;
  String SVar16;
  void *local_80;
  ulong uStack_78;
  undefined8 local_70;
  ulong uStack_68;
  String SVar14;
  
  if (DAT_100fae8c0 != -1) {
    _swift_once(&DAT_100fae8c0,FUN_1000fe0f4);
  }
  IVar5 = DAT_100fae8c8;
  pvVar8 = param_1;
  if ((param_2 & 0x2000000000000000) != 0) {
    pvVar8 = (void *)(param_2 >> 0x38 & 0xf);
  }
  uVar9 = (uint)((ulong)param_1 >> 0x3b) & 1;
  if ((param_2 & 0x1000000000000000) == 0) {
    uVar9 = 1;
  }
  uVar10 = 7;
  if (uVar9 == 0) {
    uVar10 = 0xb;
  }
  uVar10 = uVar10 | (long)pvVar8 << 0x10;
  local_70 = 0xf;
  local_80 = param_1;
  uStack_78 = param_2;
  uStack_68 = uVar10;
  _swift_bridgeObjectRetain(param_2);
  puVar1 = &DAT_100fae8d0;
  FUN_1000f7830(&DAT_100fae8d0,&DAT_100c2e220);
  puVar2 = puVar1;
  FUN_100101368();
  puVar3 = puVar2;
  FUN_1001013b8();
  _Var11 = (extension_Foundation)::__C::_NSRange::_init
                     (&local_70,&local_80,puVar1,PTR___type_metadata_for_Swift_String_100eac208,
                      puVar2,puVar3);
  if (IVar5 != 0) {
    pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    IVar5 = objc_stub::firstMatchInString_options_range_
                      (IVar5,pNVar4,0,_Var11.location,_Var11.length);
    if ((IVar5 != 0) && (IVar6 = objc_stub::numberOfRanges(IVar5), 1 < (long)IVar6)) {
      _Var11.location = (undefined *)objc_stub::rangeAtIndex_(IVar5,1);
      _Var11.length = (__int64)extraout_x1;
      pcVar7 = extraout_x1;
      pvVar8 = param_1;
      (extension_Foundation)::Swift::Range::_init(_Var11);
      if (((uint)pvVar8 & 0xff) != 1) {
        SVar15.bridgeObject = param_1;
        SVar15.str = pcVar7;
        SVar13.str = Swift::String::get_subscript(_Var11.location,SVar15);
        SVar13.bridgeObject = pcVar7;
        SVar13 = Swift::String::__fromSubstring(SVar13);
        _swift_bridgeObjectRelease(param_2);
        return SVar13;
      }
    }
  }
  if (DAT_100fae8e8 != -1) {
    _swift_once(&DAT_100fae8e8,FUN_1000fe168);
  }
  IVar5 = DAT_100fae8f0;
  local_70 = 0xf;
  local_80 = param_1;
  uStack_78 = param_2;
  uStack_68 = uVar10;
  _swift_bridgeObjectRetain(param_2);
  _Var11 = (extension_Foundation)::__C::_NSRange::_init
                     (&local_70,&local_80,puVar1,PTR___type_metadata_for_Swift_String_100eac208,
                      puVar2,puVar3);
  if (IVar5 != 0) {
    pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    IVar5 = objc_stub::firstMatchInString_options_range_
                      (IVar5,pNVar4,0,_Var11.location,_Var11.length);
    if ((IVar5 != 0) && (IVar6 = objc_stub::numberOfRanges(IVar5), 1 < (long)IVar6)) {
      _Var12.location = (undefined *)objc_stub::rangeAtIndex_(IVar5,1);
      _Var12.length = (__int64)extraout_x1_00;
      pcVar7 = extraout_x1_00;
      pvVar8 = param_1;
      (extension_Foundation)::Swift::Range::_init(_Var12);
      if (((uint)pvVar8 & 0xff) != 1) {
        SVar16.bridgeObject = param_1;
        SVar16.str = pcVar7;
        SVar14.str = Swift::String::get_subscript(_Var12.location,SVar16);
        SVar14.bridgeObject = pcVar7;
        SVar13 = Swift::String::__fromSubstring(SVar14);
        _swift_bridgeObjectRelease(param_2);
        return SVar13;
      }
    }
  }
  return (String)ZEXT816(0);
}



/* Address: 0x1000fefd4 | FUN_1000fefd4 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_1000fefd4(ID param_1,undefined8 param_2,undefined8 param_3,void *param_4)

{
  undefined *puVar1;
  ID IVar2;
  char *pcVar3;
  void *pvVar4;
  String SVar5;
  String SVar6;
  String SVar7;
  String SVar8;
  undefined1 auVar9 [16];
  String SVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  char *local_60;
  
  IVar2 = objc_stub::name(param_1);
  if (IVar2 != 0) {
    SVar5 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    pvVar4 = SVar5.bridgeObject;
    IVar2 = objc_stub::code(param_1);
    if (IVar2 != 0) {
      SVar6 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      pcVar3 = &DAT_100fae860;
      FUN_1000f7830(&DAT_100fae860,&DAT_100c2e1c0);
      _swift_allocObject();
      pcVar3[0x18] = '\x02';
      pcVar3[0x19] = '\0';
      pcVar3[0x1a] = '\0';
      pcVar3[0x1b] = '\0';
      pcVar3[0x1c] = '\0';
      pcVar3[0x1d] = '\0';
      pcVar3[0x1e] = '\0';
      pcVar3[0x1f] = '\0';
      pcVar3[0x10] = '\x01';
      pcVar3[0x11] = '\0';
      pcVar3[0x12] = '\0';
      pcVar3[0x13] = '\0';
      pcVar3[0x14] = '\0';
      pcVar3[0x15] = '\0';
      pcVar3[0x16] = '\0';
      pcVar3[0x17] = '\0';
      IVar2 = objc_stub::address(param_1);
      puVar1 = PTR___protocol_witness_table_for_Swift_UInt64___Swift_CVarArg_in_Swift_100eadec8;
      *(undefined **)(pcVar3 + 0x38) = PTR___type_metadata_for_Swift_UInt64_100eade90;
      *(undefined **)(pcVar3 + 0x40) = puVar1;
      *(ID *)(pcVar3 + 0x20) = IVar2;
      SVar7 = (extension_Foundation)::Swift::String::_init();
      Swift::_StringGuts::grow(0x1a,(_StringGuts)SVar7.bridgeObject);
      _swift_bridgeObjectRelease(0xe000000000000000);
      SVar8.bridgeObject = &DAT_e700000000000000;
      SVar8.str = (char *)0x2065646f632820;
      SVar10.bridgeObject = param_4;
      SVar10.str = pcVar3;
      Swift::String::append(SVar8,SVar10);
      SVar11.bridgeObject = param_4;
      SVar11.str = pcVar3;
      Swift::String::append(SVar6,SVar11);
      _swift_bridgeObjectRelease(SVar6.bridgeObject);
      SVar6.bridgeObject = (void *)0xed00002073736572;
      SVar6.str = (char *)0x6464612074612029;
      SVar12.bridgeObject = param_4;
      SVar12.str = pcVar3;
      Swift::String::append(SVar6,SVar12);
      SVar13.bridgeObject = param_4;
      SVar13.str = pcVar3;
      Swift::String::append(SVar7,SVar13);
      _swift_bridgeObjectRelease(SVar7.bridgeObject);
      local_60 = SVar5.str;
      goto LAB_1000ff16c;
    }
    _swift_bridgeObjectRelease(pvVar4);
  }
  local_60 = (char *)0x0;
  pvVar4 = (void *)0x0;
LAB_1000ff16c:
  auVar9._8_8_ = pvVar4;
  auVar9._0_8_ = local_60;
  return auVar9;
}



/* Address: 0x1000ff188 | FUN_1000ff188 */

undefined1  [16] FUN_1000ff188(long param_1,ulong param_2,char *param_3,void *param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  String SVar5;
  undefined1 auVar6 [16];
  String SVar7;
  
  if (DAT_100faeef8 != -1) {
    param_2 = 0;
    _swift_once(&DAT_100faeef8);
  }
  lVar2 = DAT_100faef00;
  if ((*(long *)(DAT_100faef00 + 0x10) == 0) || (thunk_FUN_10016f9fc(), (param_2 & 1) == 0)) {
    SVar5 = Swift::CustomStringConvertible::get_description();
    SVar7.bridgeObject = param_4;
    SVar7.str = param_3;
    Swift::String::append(SVar5,SVar7);
    _swift_bridgeObjectRelease(SVar5.bridgeObject);
    uVar4 = 0x4e4b4e555f435845;
    uVar3 = 0xec0000005f4e574f;
  }
  else {
    puVar1 = (undefined8 *)(*(long *)(lVar2 + 0x38) + param_1 * 0x10);
    uVar4 = *puVar1;
    uVar3 = puVar1[1];
    _swift_bridgeObjectRetain(uVar3);
  }
  auVar6._8_8_ = uVar3;
  auVar6._0_8_ = uVar4;
  return auVar6;
}



/* Address: 0x1000ff260 | FUN_1000ff260 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1000ff260(ID param_1)

{
  _CocoaArrayWrapper _Var1;
  code *pcVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ID IVar7;
  ID IVar8;
  char *pcVar9;
  __int64 _Var10;
  undefined8 extraout_x1;
  undefined8 uVar11;
  ulong extraout_x1_00;
  ulong uVar12;
  _StringGuts _Var13;
  undefined **ppuVar14;
  ID IVar15;
  bool bVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  undefined1 auVar23 [16];
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  
  IVar3 = objc_stub::type(param_1);
  uVar11 = extraout_x1;
  FUN_1000ff188();
  puVar4 = (undefined *)objc_stub::codes(param_1);
  if (puVar4 == (undefined *)0x0) goto LAB_1000ff5b0;
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  pcVar9 = (char *)&DAT_100faeef0;
  ppuVar14 = &PTR__OBJC_CLASS___NSNumber_100f8d750;
  puVar5 = puVar4;
  FUN_1000fd5c8(puVar4,FUN_10010fa08);
  _swift_bridgeObjectRelease(puVar4);
  if (puVar5 == (undefined *)0x0) goto LAB_1000ff5b0;
  if ((ulong)puVar5 >> 0x3e == 0) {
    lVar6 = *(long *)((undefined *)((ulong)puVar5 & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
    if (((ulong)puVar5 & 0x8000000000000000) != 0) {
      _Var1.unknown = puVar5;
    }
    lVar6 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (lVar6 == 0) {
    _swift_bridgeObjectRelease(puVar5);
    goto LAB_1000ff5b0;
  }
  if (((ulong)puVar5 & 0xc000000000000001) == 0) {
    if (*(long *)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1000ff62c);
      (*pcVar2)();
    }
    IVar7 = objc_stub::longLongValue(*(ID *)(puVar5 + 0x20));
    if (*(ulong *)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10) < 2) goto LAB_1000ff344;
    IVar15 = *(ID *)(puVar5 + 0x28);
LAB_1000ff360:
    _swift_bridgeObjectRelease(puVar5);
    IVar15 = objc_stub::longLongValue(IVar15);
    bVar16 = false;
  }
  else {
    IVar7 = 0;
    FUN_10010eb70(0,puVar5);
    IVar7 = objc_stub::longLongValue(IVar7);
    if ((ulong)puVar5 >> 0x3e == 0) {
      if (1 < *(ulong *)((undefined *)((ulong)puVar5 & 0xffffffffffffff8) + 0x10)) {
LAB_1000ff640:
        IVar15 = 1;
        FUN_10010eb70(1,puVar5);
        goto LAB_1000ff360;
      }
    }
    else {
      _Var1.unknown = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
      if (((ulong)puVar5 & 0x8000000000000000) != 0) {
        _Var1.unknown = puVar5;
      }
      _Var10 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
      if (1 < _Var10) goto LAB_1000ff640;
    }
LAB_1000ff344:
    _swift_bridgeObjectRelease(puVar5);
    IVar15 = 0;
    bVar16 = true;
  }
  if (DAT_100fae920 != -1) {
    _swift_once(&DAT_100fae920,FUN_1000fde70);
  }
  lVar6 = DAT_100fae928;
  IVar8 = objc_stub::type(param_1);
  if ((long)IVar8 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1000ff628);
    (*pcVar2)();
  }
  if ((((*(long *)(lVar6 + 0x10) == 0) ||
       (uVar12 = extraout_x1_00, thunk_FUN_10016f9fc(), (uVar12 & 1) == 0)) ||
      (lVar6 = *(long *)(*(long *)(lVar6 + 0x38) + IVar8 * 8), *(long *)(lVar6 + 0x10) == 0)) ||
     (thunk_FUN_10016f9fc(), (uVar12 & 1) == 0)) {
    SVar19 = Swift::CustomStringConvertible::get_description();
  }
  else {
    SVar19 = *(String *)(*(long *)(lVar6 + 0x38) + IVar7 * 0x10);
    _swift_bridgeObjectRetain();
    SVar17.bridgeObject = &SUB_e200000000000000;
    SVar17.str = (char *)0x2820;
    SVar24.bridgeObject = ppuVar14;
    SVar24.str = pcVar9;
    Swift::String::append(SVar17,SVar24);
    SVar17 = Swift::CustomStringConvertible::get_description();
    SVar25.bridgeObject = ppuVar14;
    SVar25.str = pcVar9;
    Swift::String::append(SVar17,SVar25);
    _swift_bridgeObjectRelease(SVar17.bridgeObject);
    SVar18.bridgeObject = (void *)0xe100000000000000;
    SVar18.str = (char *)0x29;
    SVar26.bridgeObject = ppuVar14;
    SVar26.str = pcVar9;
    Swift::String::append(SVar18,SVar26);
  }
  if (bVar16) {
    SVar20.bridgeObject = &DAT_e700000000000000;
    SVar20.str = (char *)0x2065646f43202c;
    SVar27.bridgeObject = ppuVar14;
    SVar27.str = pcVar9;
    Swift::String::append(SVar20,SVar27);
    SVar28.bridgeObject = ppuVar14;
    SVar28.str = pcVar9;
    Swift::String::append(SVar19,SVar28);
    _Var13.unknown = SVar19.bridgeObject;
  }
  else {
    pcVar9 = &DAT_100fae860;
    FUN_1000f7830(&DAT_100fae860,&DAT_100c2e1c0);
    _swift_allocObject();
    puVar4 = PTR___type_metadata_for_Swift_UInt64_100eade90;
    pcVar9[0x18] = '\x02';
    pcVar9[0x19] = '\0';
    pcVar9[0x1a] = '\0';
    pcVar9[0x1b] = '\0';
    pcVar9[0x1c] = '\0';
    pcVar9[0x1d] = '\0';
    pcVar9[0x1e] = '\0';
    pcVar9[0x1f] = '\0';
    pcVar9[0x10] = '\x01';
    puVar5 = PTR___protocol_witness_table_for_Swift_UInt64___Swift_CVarArg_in_Swift_100eadec8;
    pcVar9[0x11] = '\0';
    pcVar9[0x12] = '\0';
    pcVar9[0x13] = '\0';
    pcVar9[0x14] = '\0';
    pcVar9[0x15] = '\0';
    pcVar9[0x16] = '\0';
    pcVar9[0x17] = '\0';
    *(undefined **)(pcVar9 + 0x38) = puVar4;
    *(undefined **)(pcVar9 + 0x40) = puVar5;
    *(ID *)(pcVar9 + 0x20) = IVar15;
    SVar17 = (extension_Foundation)::Swift::String::_init();
    _Var13.unknown = SVar17.bridgeObject;
    Swift::_StringGuts::grow(0x17,_Var13);
    _swift_bridgeObjectRelease(0xe000000000000000);
    SVar21.bridgeObject = &DAT_e700000000000000;
    SVar21.str = (char *)0x2065646f43202c;
    SVar29.bridgeObject = ppuVar14;
    SVar29.str = pcVar9;
    Swift::String::append(SVar21,SVar29);
    SVar30.bridgeObject = ppuVar14;
    SVar30.str = pcVar9;
    Swift::String::append(SVar19,SVar30);
    SVar22.bridgeObject = (void *)0xea00000000002065;
    SVar22.str = (char *)0x646f63627553202c;
    SVar31.bridgeObject = ppuVar14;
    SVar31.str = pcVar9;
    Swift::String::append(SVar22,SVar31);
    SVar32.bridgeObject = ppuVar14;
    SVar32.str = pcVar9;
    Swift::String::append(SVar17,SVar32);
    _swift_bridgeObjectRelease(SVar19.bridgeObject);
  }
  _swift_bridgeObjectRelease(_Var13.unknown);
LAB_1000ff5b0:
  auVar23._8_8_ = uVar11;
  auVar23._0_8_ = IVar3;
  return auVar23;
}



/* Address: 0x1000ff650 | FUN_1000ff650 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

char * FUN_1000ff650(char *param_1,long param_2)

{
  code *pcVar1;
  char *pcVar2;
  ID IVar3;
  ID IVar4;
  char *pcVar5;
  char *pcVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined1 *extraout_x1;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined *puVar13;
  ulong uVar14;
  char *pcVar15;
  long lVar16;
  undefined8 *puVar17;
  String SVar18;
  char *local_150 [3];
  undefined *local_138;
  String local_130;
  undefined8 local_120;
  undefined *local_118;
  char *local_c8;
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
  undefined1 local_70;
  
  pcVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
  pcVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1000f8154();
  local_c8 = pcVar2;
  IVar3 = objc_stub::hasExceptionInfo((ID)param_1);
  if (((int)IVar3 != 0) && (IVar3 = objc_stub::exceptionInfo((ID)param_1), IVar3 != 0)) {
    IVar4 = objc_stub::exceptionName(IVar3);
    if (IVar4 == 0) {
      local_130 = (String)ZEXT816(0);
      local_118 = (undefined *)0x0;
      local_120 = 0;
      FUN_1000fb4c4(&local_130,&DAT_100fae668,&DAT_100c2e4a0);
      FUN_10016fcc4(&local_c0,&DAT_65707974,&DAT_e400000000000000);
      FUN_1000fb4c4(&local_c0,&DAT_100fae668,&DAT_100c2e4a0);
    }
    else {
      local_130 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      local_120 = 0;
      local_118 = PTR___type_metadata_for_Swift_String_100eac208;
      FUN_100011080(&local_130,&local_c0);
      pcVar15 = pcVar2;
      _swift_isUniquelyReferenced_nonNull_native(pcVar2);
      local_130.str = pcVar2;
      FUN_10016fe74(&local_c0,&DAT_65707974,&DAT_e400000000000000,pcVar15);
      local_c8 = local_130.str;
    }
    IVar3 = objc_stub::exceptionReason(IVar3);
    if (IVar3 == 0) {
      local_130 = (String)ZEXT816(0);
      local_118 = (undefined *)0x0;
      local_120 = 0;
      FUN_1000fb4c4(&local_130,&DAT_100fae668,&DAT_100c2e4a0);
      FUN_10016fcc4(&local_c0,&DAT_65756c6176,&DAT_e500000000000000);
      FUN_1000fb4c4(&local_c0,&DAT_100fae668,&DAT_100c2e4a0);
    }
    else {
      local_130 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      local_120 = 0;
      local_118 = PTR___type_metadata_for_Swift_String_100eac208;
      FUN_100011080(&local_130,&local_c0);
      pcVar2 = local_c8;
      pcVar15 = local_c8;
      _swift_isUniquelyReferenced_nonNull_native(local_c8);
      local_130.str = pcVar2;
      FUN_10016fe74(&local_c0,&DAT_65756c6176,&DAT_e500000000000000,pcVar15);
      local_c8 = local_130.str;
    }
    pcVar2 = &DAT_100fae678;
    FUN_1000f7830(&DAT_100fae678,&DAT_100c2e190);
    _swift_allocObject();
    *(undefined1 **)(pcVar2 + 0x20) = &DAT_65707974;
    pcVar2[0x18] = '\x06';
    pcVar2[0x19] = '\0';
    pcVar2[0x1a] = '\0';
    pcVar2[0x1b] = '\0';
    pcVar2[0x1c] = '\0';
    pcVar2[0x1d] = '\0';
    pcVar2[0x1e] = '\0';
    pcVar2[0x1f] = '\0';
    pcVar2[0x10] = '\x03';
    puVar7 = PTR___type_metadata_for_Swift_String_100eac208;
    pcVar2[0x11] = '\0';
    pcVar2[0x12] = '\0';
    pcVar2[0x13] = '\0';
    pcVar2[0x14] = '\0';
    pcVar2[0x15] = '\0';
    pcVar2[0x16] = '\0';
    pcVar2[0x17] = '\0';
    *(undefined1 **)(pcVar2 + 0x28) = &DAT_e400000000000000;
    pcVar2[0x30] = 'n';
    pcVar2[0x31] = 's';
    pcVar2[0x32] = 'e';
    pcVar2[0x33] = 'x';
    pcVar2[0x34] = 'c';
    pcVar2[0x35] = 'e';
    pcVar2[0x36] = 'p';
    pcVar2[0x37] = 't';
    *(undefined1 **)(pcVar2 + 0x38) = &DAT_eb000000006e6f69;
    *(undefined **)(pcVar2 + 0x48) = puVar7;
    pcVar2[0x50] = 'h';
    pcVar2[0x51] = 'a';
    pcVar2[0x52] = 'n';
    pcVar2[0x53] = 'd';
    pcVar2[0x54] = 'l';
    pcVar2[0x55] = 'e';
    pcVar2[0x56] = 'd';
    pcVar2[0x57] = '\0';
    *(undefined1 **)(pcVar2 + 0x58) = &DAT_e700000000000000;
    puVar7 = PTR___type_metadata_for_Swift_Bool_100eac570;
    pcVar2[0x60] = '\0';
    *(undefined **)(pcVar2 + 0x78) = puVar7;
    pcVar2[0x80] = 's';
    pcVar2[0x81] = 'y';
    pcVar2[0x82] = 'n';
    pcVar2[0x83] = 't';
    pcVar2[0x84] = 'h';
    pcVar2[0x85] = 'e';
    pcVar2[0x86] = 't';
    pcVar2[0x87] = 'i';
    pcVar2[0x88] = 'c';
    pcVar2[0x89] = '\0';
    pcVar2[0x8a] = '\0';
    pcVar2[0x8b] = '\0';
    pcVar2[0x8c] = '\0';
    pcVar2[0x8d] = '\0';
    pcVar2[0x8e] = '\0';
    pcVar2[0x8f] = -0x17;
    *(undefined **)(pcVar2 + 0xa8) = puVar7;
    pcVar2[0x90] = '\0';
    pcVar15 = pcVar2;
    FUN_1000f8154();
    _swift_setDeallocating(pcVar2);
    puVar7 = &DAT_100fae490;
    FUN_1000f7830(&DAT_100fae490,&DAT_100c2de60);
    _swift_arrayDestroy(pcVar2 + 0x20,3,puVar7);
    _swift_deallocClassInstance(pcVar2,0x20,7);
    puVar7 = &DAT_100fae898;
    FUN_1000f7830(&DAT_100fae898,&DAT_100c2e4e0);
    local_118 = puVar7;
    local_130.str = pcVar15;
    if (puVar7 == (undefined *)0x0) {
      FUN_1000fb4c4(&local_130,&DAT_100fae668,&DAT_100c2e4a0);
      FUN_10016fcc4(&local_c0,0x73696e616863656d,0xe90000000000006d);
      FUN_1000fb4c4(&local_c0,&DAT_100fae668,&DAT_100c2e4a0);
      lVar16 = *(long *)(param_2 + 0x10);
    }
    else {
      FUN_100011080(&local_130,&local_c0);
      pcVar2 = local_c8;
      pcVar15 = local_c8;
      _swift_isUniquelyReferenced_nonNull_native(local_c8);
      local_130.str = pcVar2;
      FUN_10016fe74(&local_c0,0x73696e616863656d,0xe90000000000006d,pcVar15);
      lVar16 = *(long *)(param_2 + 0x10);
      local_c8 = local_130.str;
    }
    goto joined_r0x000100100648;
  }
  pcVar5 = (char *)objc_stub::signalInfo((ID)param_1);
  if (pcVar5 == (char *)0x0) {
    pcVar5 = (char *)objc_stub::machExceptionInfo((ID)param_1);
    if (pcVar5 == (char *)0x0) {
      _swift_bridgeObjectRelease(pcVar2);
      return (undefined *)0x0;
    }
    pcVar15 = (char *)objc_stub::type((ID)pcVar5);
    FUN_1000ff188();
    puVar7 = PTR___type_metadata_for_Swift_String_100eac208;
    local_118 = PTR___type_metadata_for_Swift_String_100eac208;
    local_130.str = pcVar15;
    FUN_100011080(&local_130,&local_c0);
    pcVar15 = pcVar2;
    _swift_isUniquelyReferenced_nonNull_native(pcVar2);
    puVar11 = &DAT_65707974;
    local_130.str = pcVar2;
    FUN_10016fe74(&local_c0,&DAT_65707974,&DAT_e400000000000000,pcVar15);
    pcVar2 = local_130.str;
    pcVar15 = pcVar5;
    FUN_1000ff260();
    local_118 = puVar7;
    local_130.str = pcVar15;
    local_130.bridgeObject = puVar11;
    FUN_100011080(&local_130,&local_c0);
    pcVar15 = pcVar2;
    _swift_isUniquelyReferenced_nonNull_native(pcVar2);
    local_130 = (String)CONCAT88(local_130.bridgeObject,pcVar2);
    FUN_10016fe74(&local_c0,&DAT_65756c6176,&DAT_e500000000000000,pcVar15);
    pcVar15 = local_130.str;
    local_c8 = local_130.str;
    pcVar2 = &DAT_100fae678;
    FUN_1000f7830(&DAT_100fae678,&DAT_100c2e190);
    _swift_allocObject();
    *(undefined1 **)(pcVar2 + 0x20) = &DAT_65707974;
    pcVar2[0x18] = '\b';
    pcVar2[0x19] = '\0';
    pcVar2[0x1a] = '\0';
    pcVar2[0x1b] = '\0';
    pcVar2[0x1c] = '\0';
    pcVar2[0x1d] = '\0';
    pcVar2[0x1e] = '\0';
    pcVar2[0x1f] = '\0';
    pcVar2[0x10] = '\x04';
    pcVar2[0x11] = '\0';
    pcVar2[0x12] = '\0';
    pcVar2[0x13] = '\0';
    pcVar2[0x14] = '\0';
    pcVar2[0x15] = '\0';
    pcVar2[0x16] = '\0';
    pcVar2[0x17] = '\0';
    *(undefined1 **)(pcVar2 + 0x28) = &DAT_e400000000000000;
    pcVar2[0x30] = 'm';
    pcVar2[0x31] = 'a';
    pcVar2[0x32] = 'c';
    pcVar2[0x33] = 'h';
    pcVar2[0x34] = '_';
    pcVar2[0x35] = 'e';
    pcVar2[0x36] = 'x';
    pcVar2[0x37] = 'c';
    pcVar2[0x38] = 'e';
    pcVar2[0x39] = 'p';
    pcVar2[0x3a] = 't';
    pcVar2[0x3b] = 'i';
    pcVar2[0x3c] = 'o';
    pcVar2[0x3d] = 'n';
    pcVar2[0x3e] = '\0';
    pcVar2[0x3f] = -0x12;
    *(undefined **)(pcVar2 + 0x48) = puVar7;
    pcVar2[0x50] = 'h';
    puVar7 = PTR___type_metadata_for_Swift_Bool_100eac570;
    pcVar2[0x51] = 'a';
    pcVar2[0x52] = 'n';
    pcVar2[0x53] = 'd';
    pcVar2[0x54] = 'l';
    pcVar2[0x55] = 'e';
    pcVar2[0x56] = 'd';
    pcVar2[0x57] = '\0';
    *(undefined1 **)(pcVar2 + 0x58) = &DAT_e700000000000000;
    pcVar2[0x60] = '\0';
    *(undefined **)(pcVar2 + 0x78) = puVar7;
    pcVar2[0x80] = 's';
    pcVar2[0x81] = 'y';
    pcVar2[0x82] = 'n';
    pcVar2[0x83] = 't';
    pcVar2[0x84] = 'h';
    pcVar2[0x85] = 'e';
    pcVar2[0x86] = 't';
    pcVar2[0x87] = 'i';
    pcVar2[0x88] = 'c';
    pcVar2[0x89] = '\0';
    pcVar2[0x8a] = '\0';
    pcVar2[0x8b] = '\0';
    pcVar2[0x8c] = '\0';
    pcVar2[0x8d] = '\0';
    pcVar2[0x8e] = '\0';
    pcVar2[0x8f] = -0x17;
    pcVar2[0x90] = '\0';
    *(undefined **)(pcVar2 + 0xa8) = puVar7;
    pcVar2[0xb0] = 'm';
    pcVar2[0xb1] = 'e';
    pcVar2[0xb2] = 't';
    pcVar2[0xb3] = 'a';
    pcVar2[0xb4] = '\0';
    pcVar2[0xb5] = '\0';
    pcVar2[0xb6] = '\0';
    pcVar2[0xb7] = '\0';
    *(undefined1 **)(pcVar2 + 0xb8) = &DAT_e400000000000000;
    puVar7 = &DAT_100fae878;
    FUN_1000f7830(&DAT_100fae878,&DAT_100c2e1e8);
    _swift_allocObject();
    *(undefined8 *)(puVar7 + 0x18) = 2;
    *(undefined8 *)(puVar7 + 0x10) = 1;
    *(undefined8 *)(puVar7 + 0x20) = 0x6863616d;
    *(undefined1 **)(puVar7 + 0x28) = &DAT_e400000000000000;
    puVar13 = &DAT_100fae880;
    FUN_1000f7830(&DAT_100fae880,&DAT_100c2e1f0);
    _swift_allocObject();
    *(undefined8 *)(puVar13 + 0x18) = 6;
    *(undefined8 *)(puVar13 + 0x10) = 3;
    *(undefined8 *)(puVar13 + 0x20) = 0x6f69747065637865;
    *(undefined8 *)(puVar13 + 0x28) = 0xe90000000000006e;
    IVar3 = objc_stub::type((ID)pcVar5);
    puVar9 = PTR___type_metadata_for_Swift_UInt64_100eade90;
    *(ID *)(puVar13 + 0x30) = IVar3;
    *(undefined **)(puVar13 + 0x48) = puVar9;
    *(undefined8 *)(puVar13 + 0x50) = 0x65646f63;
    *(undefined1 **)(puVar13 + 0x58) = &DAT_e400000000000000;
    IVar3 = objc_stub::codes((ID)pcVar5);
    if (IVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100100960);
      (*pcVar1)();
    }
    (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
    if (*(long *)(IVar3 + 0x10) == 0) {
      _swift_bridgeObjectRelease(IVar3);
      *(undefined8 *)(puVar13 + 0x68) = 0;
      *(undefined8 *)(puVar13 + 0x60) = 0;
      *(undefined8 *)(puVar13 + 0x78) = 0;
      *(undefined8 *)(puVar13 + 0x70) = 0;
    }
    else {
      FUN_10000cbfc(IVar3 + 0x20,puVar13 + 0x60);
      _swift_bridgeObjectRelease(IVar3);
    }
    *(undefined8 *)(puVar13 + 0x80) = 0x65646f63627573;
    *(undefined1 **)(puVar13 + 0x88) = &DAT_e700000000000000;
    IVar3 = objc_stub::codes((ID)pcVar5);
    if (IVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100100964);
      (*pcVar1)();
    }
    (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
    uVar14 = *(ulong *)(IVar3 + 0x10);
    _swift_bridgeObjectRelease(IVar3);
    if (uVar14 < 2) {
      *(undefined8 *)(puVar13 + 0x98) = 0;
      *(undefined8 *)(puVar13 + 0x90) = 0;
      *(undefined8 *)(puVar13 + 0xa8) = 0;
      *(undefined8 *)(puVar13 + 0xa0) = 0;
    }
    else {
      IVar3 = objc_stub::codes((ID)pcVar5);
      if (IVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100100968);
        (*pcVar1)();
      }
      (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
      if (*(ulong *)(IVar3 + 0x10) < 2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10010095c);
        (*pcVar1)();
      }
      FUN_10000cbfc(IVar3 + 0x40,puVar13 + 0x90);
      _swift_bridgeObjectRelease(IVar3);
    }
    puVar8 = puVar13;
    FUN_1000f8588();
    _swift_setDeallocating(puVar13);
    puVar9 = &DAT_100fae428;
    FUN_1000f7830(&DAT_100fae428,&DAT_100c2ddf8);
    _swift_arrayDestroy(puVar13 + 0x20,3,puVar9);
    _swift_deallocClassInstance(puVar13,0x20,7);
    puVar13 = puVar8;
    FUN_1000fcd90();
    _swift_bridgeObjectRelease(puVar8);
    *(undefined **)(puVar7 + 0x30) = puVar13;
    puVar13 = puVar7;
    FUN_1000f86c8();
    _swift_setDeallocating(puVar7);
    FUN_1000fb4c4(puVar7 + 0x20,&DAT_100fae888,&DAT_100c2e1f8);
    _swift_deallocClassInstance(puVar7,0x20,7);
    puVar9 = puVar13;
    FUN_1000fd098(puVar13,FUN_10017134c);
    _swift_bridgeObjectRelease(puVar13);
    puVar7 = &DAT_100fae890;
    FUN_1000f7830(&DAT_100fae890,&DAT_100c2e860);
    *(undefined **)(pcVar2 + 0xd8) = puVar7;
    *(undefined **)(pcVar2 + 0xc0) = puVar9;
    pcVar5 = pcVar2;
    FUN_1000f8154();
    _swift_setDeallocating(pcVar2);
    puVar7 = &DAT_100fae490;
    FUN_1000f7830(&DAT_100fae490,&DAT_100c2de60);
    _swift_arrayDestroy(pcVar2 + 0x20,4,puVar7);
    _swift_deallocClassInstance(pcVar2,0x20,7);
    puVar7 = &DAT_100fae898;
    FUN_1000f7830(&DAT_100fae898,&DAT_100c2e4e0);
    local_118 = puVar7;
    local_130.str = pcVar5;
    if (puVar7 == (undefined *)0x0) {
      FUN_1000fb4c4(&local_130,&DAT_100fae668,&DAT_100c2e4a0);
      FUN_10016fcc4(&local_c0,0x73696e616863656d,0xe90000000000006d);
      FUN_1000fb4c4(&local_c0,&DAT_100fae668,&DAT_100c2e4a0);
    }
    else {
      FUN_100011080(&local_130,&local_c0);
      pcVar5 = pcVar15;
      _swift_isUniquelyReferenced_nonNull_native(pcVar15);
      local_130.str = pcVar15;
      FUN_10016fe74(&local_c0,0x73696e616863656d,0xe90000000000006d,pcVar5);
      local_c8 = local_130.str;
    }
  }
  else {
    pcVar15 = param_1;
    puVar11 = extraout_x1;
    FUN_1000feb90();
    if (puVar11 == (undefined1 *)0x0) {
LAB_1000ffdcc:
      IVar3 = objc_stub::name((ID)pcVar5);
      if (IVar3 == 0) {
        local_130 = (String)ZEXT816(0);
        local_118 = (undefined *)0x0;
        local_120 = 0;
        puVar12 = &DAT_100fae668;
        FUN_1000fb4c4(&local_130,&DAT_100fae668,&DAT_100c2e4a0);
        FUN_10016fcc4(&local_c0,&DAT_65707974,&DAT_e400000000000000);
        FUN_1000fb4c4(&local_c0,&DAT_100fae668,&DAT_100c2e4a0);
      }
      else {
        local_130 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        local_120 = 0;
        local_118 = PTR___type_metadata_for_Swift_String_100eac208;
        FUN_100011080(&local_130,&local_c0);
        pcVar6 = pcVar2;
        _swift_isUniquelyReferenced_nonNull_native(pcVar2);
        local_130.str = pcVar2;
        puVar12 = &DAT_65707974;
        FUN_10016fe74(&local_c0,&DAT_65707974,&DAT_e400000000000000,pcVar6);
        local_c8 = local_130.str;
      }
      pcVar2 = pcVar5;
      FUN_1000fefd4();
      local_130.str = (char *)0x0;
      if (puVar12 != (undefined1 *)0x0) {
        local_130.str = pcVar2;
      }
      local_118 = (undefined *)0x0;
      if (puVar12 != (undefined1 *)0x0) {
        local_118 = PTR___type_metadata_for_Swift_String_100eac208;
      }
      local_120 = 0;
      local_130.bridgeObject = puVar12;
      if (puVar12 != (undefined1 *)0x0) {
        FUN_100011080(&local_130,&local_c0);
        pcVar2 = local_c8;
        pcVar6 = local_c8;
        _swift_isUniquelyReferenced_nonNull_native(local_c8);
        local_130.str = pcVar2;
        goto LAB_1000ffef8;
      }
      FUN_1000fb4c4(&local_130,&DAT_100fae668,&DAT_100c2e4a0);
      FUN_10016fcc4(&local_c0,&DAT_65756c6176,&DAT_e500000000000000);
      FUN_1000fb4c4(&local_c0,&DAT_100fae668,&DAT_100c2e4a0);
    }
    else {
      _swift_bridgeObjectRetain_n(puVar11,2);
      pcVar6 = pcVar15;
      puVar12 = puVar11;
      FUN_1000fece8();
      _swift_bridgeObjectRelease(puVar11);
      puVar7 = PTR___type_metadata_for_Swift_String_100eac208;
      if (puVar12 == (undefined1 *)0x0) {
        _swift_bridgeObjectRelease(puVar11);
        goto LAB_1000ffdcc;
      }
      local_118 = PTR___type_metadata_for_Swift_String_100eac208;
      local_130.str = pcVar6;
      FUN_100011080(&local_130,&local_c0);
      pcVar6 = pcVar2;
      _swift_isUniquelyReferenced_nonNull_native(pcVar2);
      local_130.str = pcVar2;
      FUN_10016fe74(&local_c0,&DAT_65707974,&DAT_e400000000000000,pcVar6);
      pcVar2 = local_130.str;
      local_118 = puVar7;
      local_130.str = pcVar15;
      local_130.bridgeObject = puVar11;
      FUN_100011080(&local_130,&local_c0);
      pcVar6 = pcVar2;
      _swift_isUniquelyReferenced_nonNull_native(pcVar2);
      local_130.str = pcVar2;
LAB_1000ffef8:
      FUN_10016fe74(&local_c0,&DAT_65756c6176,&DAT_e500000000000000,pcVar6);
      local_c8 = local_130.str;
    }
    puVar7 = &DAT_100fae8a0;
    FUN_1000f7830(&DAT_100fae8a0,&DAT_100c2e200);
    _swift_allocObject();
    *(undefined8 *)(puVar7 + 0x18) = 6;
    *(undefined8 *)(puVar7 + 0x10) = 3;
    *(undefined8 *)(puVar7 + 0x20) = 0x65646f63;
    *(undefined1 **)(puVar7 + 0x28) = &DAT_e400000000000000;
    IVar3 = objc_stub::code((ID)pcVar5);
    if (IVar3 == 0) {
      SVar18 = (String)ZEXT816(0);
      *(undefined8 *)(puVar7 + 0x40) = 0;
      puVar13 = &DAT_00000001;
    }
    else {
      SVar18 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      puVar13 = PTR___type_metadata_for_Swift_String_100eac208;
    }
    *(String *)(puVar7 + 0x30) = SVar18;
    *(undefined **)(puVar7 + 0x48) = puVar13;
    *(undefined8 *)(puVar7 + 0x50) = 0x656d616e;
    *(undefined1 **)(puVar7 + 0x58) = &DAT_e400000000000000;
    IVar3 = objc_stub::name((ID)pcVar5);
    if (IVar3 == 0) {
      SVar18 = (String)ZEXT816(0);
      *(undefined8 *)(puVar7 + 0x70) = 0;
      puVar13 = &DAT_00000001;
    }
    else {
      SVar18 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      puVar13 = PTR___type_metadata_for_Swift_String_100eac208;
    }
    *(String *)(puVar7 + 0x60) = SVar18;
    *(undefined **)(puVar7 + 0x78) = puVar13;
    *(undefined8 *)(puVar7 + 0x80) = 0xd000000000000012;
    *(undefined8 *)(puVar7 + 0x88) = 0x8000000100d90b90;
    puVar12 = PTR___type_metadata_for_Swift_String_100eac208;
    if (puVar11 == (undefined1 *)0x0) {
      pcVar15 = (char *)0x0;
      *(undefined8 *)(puVar7 + 0xa0) = 0;
      puVar12 = &DAT_00000001;
    }
    *(char **)(puVar7 + 0x90) = pcVar15;
    *(undefined1 **)(puVar7 + 0x98) = puVar11;
    *(undefined1 **)(puVar7 + 0xa8) = puVar12;
    puVar9 = puVar7;
    FUN_1000f8550();
    _swift_setDeallocating(puVar7);
    puVar13 = &DAT_100fae410;
    FUN_1000f7830(&DAT_100fae410,&DAT_100c2dde0);
    _swift_arrayDestroy(puVar7 + 0x20,3,puVar13);
    _swift_deallocClassInstance(puVar7,0x20,7);
    puVar13 = puVar9;
    FUN_1000fca74();
    _swift_bridgeObjectRelease(puVar9);
    pcVar5 = &DAT_100fae678;
    FUN_1000f7830(&DAT_100fae678,&DAT_100c2e190);
    _swift_allocObject();
    pcVar5[0x18] = '\b';
    pcVar5[0x19] = '\0';
    pcVar5[0x1a] = '\0';
    pcVar5[0x1b] = '\0';
    pcVar5[0x1c] = '\0';
    pcVar5[0x1d] = '\0';
    pcVar5[0x1e] = '\0';
    pcVar5[0x1f] = '\0';
    pcVar5[0x10] = '\x04';
    pcVar5[0x11] = '\0';
    pcVar5[0x12] = '\0';
    pcVar5[0x13] = '\0';
    pcVar5[0x14] = '\0';
    pcVar5[0x15] = '\0';
    pcVar5[0x16] = '\0';
    pcVar5[0x17] = '\0';
    *(undefined1 **)(pcVar5 + 0x20) = &DAT_65707974;
    puVar7 = PTR___type_metadata_for_Swift_String_100eac208;
    *(undefined1 **)(pcVar5 + 0x28) = &DAT_e400000000000000;
    pcVar5[0x30] = 's';
    pcVar5[0x31] = 'i';
    pcVar5[0x32] = 'g';
    pcVar5[0x33] = 'n';
    pcVar5[0x34] = 'a';
    pcVar5[0x35] = 'l';
    pcVar5[0x36] = '\0';
    pcVar5[0x37] = '\0';
    *(undefined1 **)(pcVar5 + 0x38) = &DAT_e600000000000000;
    *(undefined **)(pcVar5 + 0x48) = puVar7;
    pcVar5[0x50] = 'h';
    puVar7 = PTR___type_metadata_for_Swift_Bool_100eac570;
    pcVar5[0x51] = 'a';
    pcVar5[0x52] = 'n';
    pcVar5[0x53] = 'd';
    pcVar5[0x54] = 'l';
    pcVar5[0x55] = 'e';
    pcVar5[0x56] = 'd';
    pcVar5[0x57] = '\0';
    *(undefined1 **)(pcVar5 + 0x58) = &DAT_e700000000000000;
    pcVar5[0x60] = '\0';
    *(undefined **)(pcVar5 + 0x78) = puVar7;
    pcVar5[0x80] = 's';
    pcVar5[0x81] = 'y';
    pcVar5[0x82] = 'n';
    pcVar5[0x83] = 't';
    pcVar5[0x84] = 'h';
    pcVar5[0x85] = 'e';
    pcVar5[0x86] = 't';
    pcVar5[0x87] = 'i';
    pcVar5[0x88] = 'c';
    pcVar5[0x89] = '\0';
    pcVar5[0x8a] = '\0';
    pcVar5[0x8b] = '\0';
    pcVar5[0x8c] = '\0';
    pcVar5[0x8d] = '\0';
    pcVar5[0x8e] = '\0';
    pcVar5[0x8f] = -0x17;
    pcVar5[0x90] = '\0';
    *(undefined **)(pcVar5 + 0xa8) = puVar7;
    pcVar5[0xb0] = 'm';
    pcVar5[0xb1] = 'e';
    pcVar5[0xb2] = 't';
    pcVar5[0xb3] = 'a';
    pcVar5[0xb4] = '\0';
    pcVar5[0xb5] = '\0';
    pcVar5[0xb6] = '\0';
    pcVar5[0xb7] = '\0';
    *(undefined1 **)(pcVar5 + 0xb8) = &DAT_e400000000000000;
    puVar7 = &DAT_100fae8a8;
    FUN_1000f7830(&DAT_100fae8a8,&DAT_100c2e208);
    _swift_allocObject();
    *(undefined8 *)(puVar7 + 0x18) = 2;
    *(undefined8 *)(puVar7 + 0x10) = 1;
    *(undefined8 *)(puVar7 + 0x20) = 0x6c616e676973;
    *(undefined1 **)(puVar7 + 0x28) = &DAT_e600000000000000;
    *(undefined **)(puVar7 + 0x30) = puVar13;
    puVar13 = puVar7;
    FUN_1000f8574();
    _swift_setDeallocating(puVar7);
    FUN_1000fb4c4(puVar7 + 0x20,&DAT_100fae8b0,&DAT_100c2e210);
    _swift_deallocClassInstance(puVar7,0x20,7);
    puVar9 = puVar13;
    FUN_1000fd098(puVar13,FUN_100171360);
    _swift_bridgeObjectRelease(puVar13);
    puVar7 = &DAT_100fae8b8;
    FUN_1000f7830(&DAT_100fae8b8,&DAT_100c2e218);
    *(undefined **)(pcVar5 + 0xd8) = puVar7;
    *(undefined **)(pcVar5 + 0xc0) = puVar9;
    pcVar2 = pcVar5;
    FUN_1000f8154();
    _swift_setDeallocating(pcVar5);
    puVar7 = &DAT_100fae490;
    FUN_1000f7830(&DAT_100fae490,&DAT_100c2de60);
    _swift_arrayDestroy(pcVar5 + 0x20,4,puVar7);
    _swift_deallocClassInstance(pcVar5,0x20,7);
    puVar7 = &DAT_100fae898;
    FUN_1000f7830(&DAT_100fae898,&DAT_100c2e4e0);
    local_118 = puVar7;
    local_130.str = pcVar2;
    if (puVar7 == (undefined *)0x0) {
      FUN_1000fb4c4(&local_130,&DAT_100fae668,&DAT_100c2e4a0);
      FUN_10016fcc4(&local_c0,0x73696e616863656d,0xe90000000000006d);
      FUN_1000fb4c4(&local_c0,&DAT_100fae668,&DAT_100c2e4a0);
    }
    else {
      FUN_100011080(&local_130,&local_c0);
      pcVar5 = local_c8;
      pcVar2 = local_c8;
      _swift_isUniquelyReferenced_nonNull_native(local_c8);
      local_130.str = pcVar5;
      FUN_10016fe74(&local_c0,0x73696e616863656d,0xe90000000000006d,pcVar2);
      local_c8 = local_130.str;
    }
  }
  lVar16 = *(long *)(param_2 + 0x10);
  pcVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
joined_r0x000100100648:
  if (lVar16 != 0) {
    pcVar2 = &DAT_100fae678;
    FUN_1000f7830(&DAT_100fae678,&DAT_100c2e190);
    _swift_allocObject();
    pcVar2[0x18] = '\x04';
    pcVar2[0x19] = '\0';
    pcVar2[0x1a] = '\0';
    pcVar2[0x1b] = '\0';
    pcVar2[0x1c] = '\0';
    pcVar2[0x1d] = '\0';
    pcVar2[0x1e] = '\0';
    pcVar2[0x1f] = '\0';
    pcVar2[0x10] = '\x02';
    pcVar2[0x11] = '\0';
    pcVar2[0x12] = '\0';
    pcVar2[0x13] = '\0';
    pcVar2[0x14] = '\0';
    pcVar2[0x15] = '\0';
    pcVar2[0x16] = '\0';
    pcVar2[0x17] = '\0';
    pcVar15 = pcVar2 + 0x20;
    pcVar15[0] = 'f';
    pcVar15[1] = 'r';
    pcVar15[2] = 'a';
    pcVar15[3] = 'm';
    pcVar15[4] = 'e';
    pcVar15[5] = 's';
    pcVar15[6] = '\0';
    pcVar15[7] = '\0';
    *(undefined1 **)(pcVar2 + 0x28) = &DAT_e600000000000000;
    local_150[0] = pcVar5;
    FUN_10010f9b0(0,lVar16,0);
    puVar17 = (undefined8 *)(param_2 + lVar16 * 0x58 + -0x38);
    do {
      pcVar5 = local_150[0];
      uStack_98 = puVar17[5];
      local_a0 = puVar17[4];
      uStack_88 = puVar17[7];
      uStack_90 = puVar17[6];
      uStack_78 = puVar17[9];
      local_80 = puVar17[8];
      local_70 = *(undefined1 *)(puVar17 + 10);
      uStack_b8 = puVar17[1];
      local_c0 = *puVar17;
      uStack_a8 = puVar17[3];
      uStack_b0 = puVar17[2];
      puVar10 = &local_c0;
      FUN_1001012f8(puVar10,&local_130);
      FUN_1000fc3a0();
      FUN_100101334(&local_c0);
      uVar14 = *(ulong *)(pcVar5 + 0x10);
      local_150[0] = pcVar5;
      if (*(ulong *)(pcVar5 + 0x18) >> 1 <= uVar14) {
        FUN_10010f9b0(1 < *(ulong *)(pcVar5 + 0x18),uVar14 + 1,1);
      }
      pcVar5 = local_150[0];
      *(ulong *)(local_150[0] + 0x10) = uVar14 + 1;
      *(undefined8 **)(local_150[0] + uVar14 * 8 + 0x20) = puVar10;
      puVar17 = puVar17 + -0xb;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    puVar7 = &DAT_100fae868;
    FUN_1000f7830(&DAT_100fae868,&DAT_100c2e2f0);
    *(char **)(pcVar2 + 0x30) = pcVar5;
    *(undefined **)(pcVar2 + 0x48) = puVar7;
    *(undefined1 **)(pcVar2 + 0x50) = &DAT_65707974;
    *(undefined **)(pcVar2 + 0x78) = PTR___type_metadata_for_Swift_String_100eac208;
    *(undefined1 **)(pcVar2 + 0x58) = &DAT_e400000000000000;
    pcVar2[0x60] = 'r';
    pcVar2[0x61] = 'a';
    pcVar2[0x62] = 'w';
    pcVar2[99] = '\0';
    pcVar2[100] = '\0';
    pcVar2[0x65] = '\0';
    pcVar2[0x66] = '\0';
    pcVar2[0x67] = '\0';
    pcVar2[0x68] = '\0';
    pcVar2[0x69] = '\0';
    pcVar2[0x6a] = '\0';
    pcVar2[0x6b] = '\0';
    pcVar2[0x6c] = '\0';
    pcVar2[0x6d] = '\0';
    pcVar2[0x6e] = '\0';
    pcVar2[0x6f] = -0x1d;
    pcVar5 = pcVar2;
    FUN_1000f8154();
    _swift_setDeallocating(pcVar2);
    puVar7 = &DAT_100fae490;
    FUN_1000f7830(&DAT_100fae490,&DAT_100c2de60);
    _swift_arrayDestroy(pcVar15,2,puVar7);
    _swift_deallocClassInstance(pcVar2,0x20,7);
    puVar7 = &DAT_100fae898;
    FUN_1000f7830(&DAT_100fae898,&DAT_100c2e4e0);
    local_150[0] = pcVar5;
    local_138 = puVar7;
    if (puVar7 == (undefined *)0x0) {
      FUN_1000fb4c4(local_150,&DAT_100fae668,&DAT_100c2e4a0);
      FUN_10016fcc4(&local_130,0x6172746b63617473,0xea00000000006563);
      FUN_1000fb4c4(&local_130,&DAT_100fae668,&DAT_100c2e4a0);
    }
    else {
      FUN_100011080(local_150,&local_130);
      pcVar5 = local_c8;
      pcVar2 = local_c8;
      _swift_isUniquelyReferenced_nonNull_native(local_c8);
      local_150[0] = pcVar5;
      FUN_10016fe74(&local_130,0x6172746b63617473,0xea00000000006563,pcVar2);
      local_c8 = local_150[0];
    }
  }
  FUN_1000fe34c();
  pcVar5 = local_c8;
  if (param_1 != (char *)0x0) {
    local_150[0] = (char *)objc_stub::threadNumber((ID)param_1);
    local_138 = PTR___type_metadata_for_Swift_Int_100eac6f8;
    FUN_100011080(local_150,&local_130);
    pcVar5 = local_c8;
    pcVar2 = local_c8;
    _swift_isUniquelyReferenced_nonNull_native(local_c8);
    local_150[0] = pcVar5;
    FUN_10016fe74(&local_130,0x695f646165726874,0xe900000000000064,pcVar2);
    pcVar5 = local_150[0];
  }
  pcVar2 = pcVar5;
  FUN_1000fd324(pcVar5);
  _swift_bridgeObjectRelease(pcVar5);
  return pcVar2;
}



/* Address: 0x100100968 | FUN_100100968 */

void FUN_100100968(undefined8 param_1)

{
  FUN_100101414(param_1,PTR___type_metadata_for_Swift_UInt64_100eade90,
                PTR___protocol_witness_table_for_Swift_UInt64___Swift_Hashable_in_Swift_100eade98,
                FUN_1001655e0);
  return;
}



/* Address: 0x100100984 | FUN_100100984 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_100100984(ID param_1,long param_2)

{
  char *pcVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ID IVar7;
  ID *pIVar8;
  ID IVar9;
  ulong uVar10;
  ID IVar11;
  ID IVar12;
  undefined8 *puVar13;
  void *pvVar14;
  Hasher HVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  undefined8 uVar21;
  String SVar22;
  String SVar23;
  undefined8 local_158;
  undefined1 *local_150;
  undefined *local_120;
  ID local_118 [10];
  undefined *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uVar18 = 0;
  uVar19 = *(ulong *)(param_2 + 0x10);
  puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
  do {
    uVar10 = uVar18;
    if (uVar18 <= uVar19) {
      uVar10 = uVar19;
    }
    puVar13 = (undefined8 *)(param_2 + -0x10 + uVar18 * 0x58);
    do {
      if (uVar19 == uVar18) {
        puVar6 = puVar5;
        FUN_100101414(puVar5,PTR___type_metadata_for_Swift_UInt64_100eade90,
                      PTR___protocol_witness_table_for_Swift_UInt64___Swift_Hashable_in_Swift_100eade98
                      ,FUN_1001655e0);
        _swift_bridgeObjectRelease(puVar5);
        if (*(long *)(puVar6 + 0x10) == 0) goto LAB_100100f30;
        IVar7 = objc_stub::images(param_1);
        puVar5 = PTR___type_metadata_for_Any_100eae0c0;
        if (IVar7 == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100100f6c);
          (*pcVar3)();
        }
        (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
        uVar18 = *(ulong *)(IVar7 + 0x10);
        if (uVar18 != 0) {
          uVar19 = 0;
          local_120 = PTR___swiftEmptyArrayStorage_100eae0d8;
          goto LAB_100100b30;
        }
        _swift_bridgeObjectRelease(puVar6);
        _swift_bridgeObjectRelease(IVar7);
        lVar17 = *(long *)(PTR___swiftEmptyArrayStorage_100eae0d8 + 0x10);
        puVar6 = PTR___swiftEmptyArrayStorage_100eae0d8;
        goto joined_r0x000100100f28;
      }
      uVar18 = uVar18 + 1;
      if (uVar10 + 1 == uVar18) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100100f64);
        (*pcVar3)();
      }
      puVar2 = puVar13 + 0xb;
      pcVar1 = (char *)(puVar13 + 0xc);
      puVar13 = puVar2;
    } while (*pcVar1 == '\x01');
    uVar21 = *puVar2;
    puVar6 = puVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    puVar4 = puVar5;
    if (((ulong)puVar6 & 1) == 0) {
      puVar4 = (undefined *)0x0;
      FUN_100105764(0,*(long *)(puVar5 + 0x10) + 1,1,puVar5);
    }
    uVar10 = *(ulong *)(puVar4 + 0x10);
    puVar5 = puVar4;
    if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar10) {
      puVar5 = (undefined *)(ulong)(1 < *(ulong *)(puVar4 + 0x18));
      FUN_100105764(puVar5,uVar10 + 1,1,puVar4);
    }
    *(ulong *)(puVar5 + 0x10) = uVar10 + 1;
    *(undefined8 *)(puVar5 + uVar10 * 8 + 0x20) = uVar21;
  } while( true );
LAB_100100b30:
  if (*(ulong *)(IVar7 + 0x10) <= uVar19) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100100f68);
    (*pcVar3)();
  }
  FUN_10000cbfc(IVar7 + 0x20 + uVar19 * 0x20,&local_c0);
  uVar21 = 0;
  FUN_10000ec2c(0,&DAT_100fae870,&PTR_PHPLCrashReportBinaryImageInfo_100f8d888);
  pIVar8 = local_118;
  HVar15.unknown = puVar5 + 8;
  _swift_dynamicCast(pIVar8,&local_c0,HVar15.unknown,uVar21,6);
  IVar12 = local_118[0];
  if ((((ulong)pIVar8 & 1) != 0) &&
     (IVar9 = objc_stub::imageBaseAddress(local_118[0]), *(long *)(puVar6 + 0x10) != 0)) {
    uVar10 = Swift::Hasher::_hash(*(__int64 *)(puVar6 + 0x28),IVar9,HVar15);
    uVar16 = -1L << ((ulong)(byte)puVar6[0x20] & 0x3f);
    uVar10 = uVar10 & (uVar16 ^ 0xffffffffffffffff);
    if ((*(ulong *)(puVar6 + (uVar10 >> 6) * 8 + 0x38) >> (uVar10 & 0x3f) & 1) != 0) {
      do {
        if (*(ID *)(*(long *)(puVar6 + 0x30) + uVar10 * 8) == IVar9) {
          IVar9 = objc_stub::imageName(IVar12);
          if (IVar9 != 0) {
            SVar22 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
            IVar9 = objc_stub::codeType(IVar12);
            if (IVar9 == 0) {
LAB_100100c8c:
              local_158 = 0;
              local_150 = (undefined1 *)0x0;
            }
            else {
              IVar11 = objc_stub::type(IVar9);
              IVar9 = objc_stub::subtype(IVar9);
              if (IVar11 == 0xc) {
                if (IVar9 == 9) {
                  local_150 = &DAT_e500000000000000;
                  local_158 = 0x37766d7261;
                }
                else if (IVar9 == 0xb) {
                  local_150 = &DAT_e600000000000000;
                  local_158 = 0x7337766d7261;
                }
                else {
                  local_150 = (undefined1 *)0xe300000000000000;
                  local_158 = 0x6d7261;
                }
              }
              else if (IVar11 == 0x1000007) {
                local_150 = &DAT_e600000000000000;
                local_158 = 0x34365f363878;
              }
              else {
                if (IVar11 != 0x100000c) goto LAB_100100c8c;
                local_150 = &DAT_e500000000000000;
                local_158 = 0x34366d7261;
              }
            }
            IVar9 = objc_stub::imageUUID(IVar12);
            if (IVar9 == 0) {
              SVar23 = (String)ZEXT816(0);
            }
            else {
              SVar23 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC
                                 ();
              pvVar14 = SVar23.bridgeObject;
              FUN_10010a008();
              _swift_bridgeObjectRelease(pvVar14);
            }
            IVar9 = objc_stub::imageBaseAddress(IVar12);
            IVar12 = objc_stub::imageSize(IVar12);
            puVar5 = local_120;
            _swift_isUniquelyReferenced_nonNull_native();
            puVar4 = local_120;
            if (((ulong)puVar5 & 1) == 0) {
              puVar4 = (undefined *)0x0;
              FUN_100105648(0,*(long *)(local_120 + 0x10) + 1,1,local_120);
            }
            uVar10 = *(ulong *)(puVar4 + 0x10);
            local_120 = puVar4;
            if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar10) {
              local_120 = (undefined *)(ulong)(1 < *(ulong *)(puVar4 + 0x18));
              FUN_100105648(local_120,uVar10 + 1,1,puVar4);
            }
            *(ulong *)(local_120 + 0x10) = uVar10 + 1;
            *(String *)(local_120 + uVar10 * 0x50 + 0x20) = SVar22;
            *(String *)(local_120 + uVar10 * 0x50 + 0x30) = SVar23;
            *(undefined8 *)(local_120 + uVar10 * 0x50 + 0x40) = 0;
            local_120[uVar10 * 0x50 + 0x48] = 1;
            *(ID *)(local_120 + uVar10 * 0x50 + 0x50) = IVar9;
            *(ID *)(local_120 + uVar10 * 0x50 + 0x58) = IVar12;
            *(undefined8 *)(local_120 + uVar10 * 0x50 + 0x60) = local_158;
            *(undefined1 **)(local_120 + uVar10 * 0x50 + 0x68) = local_150;
            puVar5 = PTR___type_metadata_for_Any_100eae0c0;
          }
          break;
        }
        uVar10 = uVar10 + 1 & ~uVar16;
      } while ((*(ulong *)(puVar6 + (uVar10 >> 6) * 8 + 0x38) >> (uVar10 & 0x3f) & 1) != 0);
    }
  }
  uVar19 = uVar19 + 1;
  if (uVar19 == uVar18) {
    _swift_bridgeObjectRelease(puVar6);
    _swift_bridgeObjectRelease(IVar7);
    lVar17 = *(long *)(local_120 + 0x10);
    puVar6 = local_120;
joined_r0x000100100f28:
    if (lVar17 == 0) {
LAB_100100f30:
      _swift_bridgeObjectRelease(puVar6);
      puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
    }
    else {
      local_c8 = PTR___swiftEmptyArrayStorage_100eae0d8;
      FUN_10010f9b0(0,lVar17,0);
      lVar20 = 0x20;
      do {
        puVar5 = local_c8;
        puVar13 = (undefined8 *)(puVar6 + lVar20);
        uStack_b8 = puVar13[1];
        local_c0 = *puVar13;
        uStack_a8 = puVar13[3];
        local_b0 = puVar13[2];
        uStack_98 = puVar13[5];
        uStack_a0 = puVar13[4];
        uStack_88 = puVar13[7];
        local_90 = puVar13[6];
        uStack_78 = puVar13[9];
        uStack_80 = puVar13[8];
        puVar13 = &local_c0;
        FUN_100101288(puVar13,local_118);
        FUN_1000fbe9c();
        FUN_1001012c4(&local_c0);
        uVar18 = *(ulong *)(puVar5 + 0x10);
        local_c8 = puVar5;
        if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar18) {
          FUN_10010f9b0(1 < *(ulong *)(puVar5 + 0x18),uVar18 + 1,1);
        }
        puVar5 = local_c8;
        *(ulong *)(local_c8 + 0x10) = uVar18 + 1;
        *(undefined8 **)(local_c8 + uVar18 * 8 + 0x20) = puVar13;
        lVar20 = lVar20 + 0x50;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      _swift_bridgeObjectRelease(puVar6);
    }
    return puVar5;
  }
  goto LAB_100100b30;
}



/* Address: 0x100100f6c | FUN_100100f6c */

undefined * FUN_100100f6c(undefined *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *local_98;
  undefined1 *puStack_90;
  undefined *local_80;
  undefined1 auStack_78 [32];
  undefined *local_58;
  
  puVar6 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1000f8154();
  local_98 = (undefined *)0x6c61746166;
  puStack_90 = &DAT_e500000000000000;
  local_80 = PTR___type_metadata_for_Swift_String_100eac208;
  FUN_100011080(&local_98,auStack_78);
  puVar3 = puVar2;
  _swift_isUniquelyReferenced_nonNull_native(puVar2);
  local_98 = puVar2;
  FUN_10016fe74(auStack_78,0xd000000000000010,0x8000000100d90b70,puVar3);
  puVar2 = local_98;
  local_58 = local_98;
  puVar3 = param_1;
  FUN_1000fe50c(param_1,param_2);
  puVar4 = param_1;
  FUN_1000ff650(param_1,puVar3);
  if (puVar4 == (undefined *)0x0) {
    if (*(long *)(puVar6 + 0x10) == 0) goto LAB_100101144;
  }
  else {
    puVar5 = (undefined *)0x0;
    FUN_100105864(0,1,1,PTR___swiftEmptyArrayStorage_100eae0d8);
    uVar1 = *(ulong *)(puVar5 + 0x10);
    puVar6 = puVar5;
    if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar1) {
      puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
      FUN_100105864(puVar6,uVar1 + 1,1,puVar5);
    }
    *(ulong *)(puVar6 + 0x10) = uVar1 + 1;
    *(undefined **)(puVar6 + uVar1 * 8 + 0x20) = puVar4;
  }
  puVar4 = &DAT_100fae868;
  FUN_1000f7830(&DAT_100fae868,&DAT_100c2e2f0);
  local_98 = puVar6;
  local_80 = puVar4;
  if (puVar4 == (undefined *)0x0) {
    _swift_bridgeObjectRetain(puVar6);
    FUN_1000fb4c4(&local_98,&DAT_100fae668,&DAT_100c2e4a0);
    FUN_10016fcc4(auStack_78,0x6974706563786524,0xef7473696c5f6e6f);
    FUN_1000fb4c4(auStack_78,&DAT_100fae668,&DAT_100c2e4a0);
  }
  else {
    FUN_100011080(&local_98,auStack_78);
    _swift_bridgeObjectRetain(puVar6);
    puVar4 = puVar2;
    _swift_isUniquelyReferenced_nonNull_native(puVar2);
    local_98 = puVar2;
    FUN_10016fe74(auStack_78,0x6974706563786524,0xef7473696c5f6e6f,puVar4);
    local_58 = local_98;
  }
LAB_100101144:
  FUN_100100984(param_1,puVar3);
  _swift_bridgeObjectRelease(puVar3);
  if (*(long *)(param_1 + 0x10) == 0) {
    _swift_bridgeObjectRelease(puVar6);
  }
  else {
    puVar2 = &DAT_100fae868;
    FUN_1000f7830(&DAT_100fae868,&DAT_100c2e2f0);
    local_98 = param_1;
    local_80 = puVar2;
    if (puVar2 != (undefined *)0x0) {
      FUN_100011080(&local_98,auStack_78);
      puVar2 = local_58;
      puVar3 = local_58;
      _swift_isUniquelyReferenced_nonNull_native(local_58);
      local_98 = puVar2;
      FUN_10016fe74(auStack_78,0x695f677562656424,0xed0000736567616d,puVar3);
      _swift_bridgeObjectRelease(puVar6);
      return local_98;
    }
    FUN_1000fb4c4(&local_98,&DAT_100fae668,&DAT_100c2e4a0);
    FUN_10016fcc4(auStack_78,0x695f677562656424,0xed0000736567616d);
    FUN_1000fb4c4(auStack_78,&DAT_100fae668,&DAT_100c2e4a0);
    param_1 = puVar6;
  }
  _swift_bridgeObjectRelease(param_1);
  return local_58;
}



/* Address: 0x100101288 | FUN_100101288 */

undefined8 FUN_100101288(undefined8 param_1,undefined8 param_2)

{
  FUN_1000fc1f0(param_2,param_1);
  return param_2;
}



/* Address: 0x1001012c4 | FUN_1001012c4 */

undefined8 FUN_1001012c4(undefined8 param_1)

{
  FUN_1000fc1c0();
  return param_1;
}



/* Address: 0x1001012f8 | FUN_1001012f8 */

undefined8 FUN_1001012f8(undefined8 param_1,undefined8 param_2)

{
  FUN_1000fc7c4(param_2,param_1);
  return param_2;
}



/* Address: 0x100101334 | FUN_100101334 */

undefined8 FUN_100101334(undefined8 param_1)

{
  FUN_1000fc794();
  return param_1;
}



/* Address: 0x100101368 | FUN_100101368 */

void FUN_100101368(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fae8d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fae8d0;
  FUN_1000f8b08(&DAT_100fae8d0,&DAT_100c2e220);
  puVar2 = PTR_Swift__Swift__Range<undefined>_>Swift__RangeExpression_100eac950;
  _swift_getWitnessTable
            (PTR_Swift__Swift__Range<undefined>_>Swift__RangeExpression_100eac950,puVar1);
  DAT_100fae8d8 = puVar2;
  return;
}



/* Address: 0x1001013b8 | FUN_1001013b8 */

void FUN_1001013b8(void)

{
  undefined *puVar1;
  
  if (DAT_100fae8e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Swift__Swift__String_>Swift__StringProtocol_100eac258;
  _swift_getWitnessTable
            (PTR_Swift__Swift__String_>Swift__StringProtocol_100eac258,
             PTR___type_metadata_for_Swift_String_100eac208);
  DAT_100fae8e0 = puVar1;
  return;
}



/* Address: 0x1001013f8 | FUN_1001013f8 */

void FUN_1001013f8(undefined8 param_1)

{
  FUN_100101414(param_1,PTR___type_metadata_for_Swift_ObjectIdentifier_100eabfe8,
                PTR___protocol_witness_table_for_Swift_ObjectIdentifier___Swift_Hashable_in_Swift_100eabff0
                ,FUN_1001656b4);
  return;
}



/* Address: 0x100101414 | FUN_100101414 */

Set<undefined> FUN_100101414(long param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  long minimumCapacity;
  undefined8 *puVar1;
  undefined1 auStack_40 [8];
  undefined *local_38;
  
  minimumCapacity = *(long *)(param_1 + 0x10);
  local_38 = (undefined *)Swift::Set::init(minimumCapacity);
  if (minimumCapacity != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x20);
    do {
      (*param_4)(auStack_40,*puVar1);
      minimumCapacity = minimumCapacity + -1;
      puVar1 = puVar1 + 1;
    } while (minimumCapacity != 0);
  }
  return (Set<undefined>)local_38;
}



/* Address: 0x100101478 | FUN_100101478 */

void FUN_100101478(void)

{
  long lVar1;
  undefined *self;
  ID IVar2;
  
  lVar1 = 0;
  FUN_10012b2e0();
  _swift_allocObject();
  self = &_OBJC_CLASS___NSLock;
  _objc_allocWithZone();
  IVar2 = objc_stub::init((ID)self);
  *(ID *)(lVar1 + 0x10) = IVar2;
  *(undefined1 *)(lVar1 + 0x18) = 0;
  DAT_100faf528 = lVar1;
  return;
}



/* Address: 0x1001014c8 | FUN_1001014c8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1001014c8(long param_1)

{
  byte bVar1;
  char cVar2;
  class_t *pcVar3;
  ID IVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined8 unaff_x20;
  long lVar9;
  long lVar10;
  ID IVar11;
  String SVar12;
  String SVar13;
  String separator;
  String separator_00;
  
  lVar10 = _TtC7PostHog10PostHogSDK::remoteConfig;
  lVar9 = *(long *)(param_1 + _TtC7PostHog10PostHogSDK::remoteConfig);
  if (lVar9 == 0) goto LAB_100101714;
  IVar11 = *(ID *)(lVar9 + 0x108);
  _swift_retain(lVar9);
  objc_stub::lock(IVar11);
  bVar1 = *(byte *)(lVar9 + 0x129);
  objc_stub::unlock(IVar11);
  _swift_release(lVar9);
  if ((bVar1 & 1) == 0) {
    lVar9 = *(long *)(param_1 + lVar10);
    if (lVar9 == 0) goto LAB_100101714;
    IVar11 = *(ID *)(lVar9 + 0x108);
    _swift_retain(lVar9);
    objc_stub::lock(IVar11);
    cVar2 = *(char *)(lVar9 + 0x128);
    objc_stub::unlock(IVar11);
    _swift_release(lVar9);
    if ((cVar2 != '\x01') || (lVar9 = *(long *)(param_1 + lVar10), lVar9 == 0)) goto LAB_100101714;
    IVar11 = *(ID *)(lVar9 + 0x108);
    _swift_retain(lVar9);
    objc_stub::lock(IVar11);
    puVar5 = &DAT_100c2e300;
    _swift_getKeyPath();
    puVar6 = puVar5;
    FUN_10012fef0();
    _swift_release(puVar5);
    objc_stub::unlock(IVar11);
    _swift_release(lVar9);
    if (puVar6 == (undefined *)0x0) goto LAB_100101714;
    _swift_bridgeObjectRelease(puVar6);
    lVar9 = *(long *)(param_1 + lVar10);
  }
  else {
    lVar9 = *(long *)(param_1 + lVar10);
  }
  if (lVar9 != 0) {
    IVar11 = *(ID *)(lVar9 + 0xe8);
    _swift_retain(lVar9);
    objc_stub::lock(IVar11);
    bVar1 = *(byte *)(lVar9 + 0xf0);
    objc_stub::unlock(IVar11);
    _swift_release(lVar9);
    if ((bVar1 & 1) == 0) {
      pcVar3 = &objc::class_t::PHPLCrashReporterConfig;
      _objc_allocWithZone();
      IVar11 = objc_stub::
               initWithSignalHandlerType_symbolicationStrategy_shouldRegisterUncaughtExceptionHandler_
                         ((ID)pcVar3,1,0,1);
      pcVar3 = &objc::class_t::PHPLCrashReporter;
      _objc_allocWithZone();
      IVar11 = objc_stub::initWithConfiguration_((ID)pcVar3,IVar11);
      if (IVar11 == 0) {
        if ((DAT_101057340 & 1) != 0) {
          pcVar8 = &DAT_100fae660;
          FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
          _swift_allocObject();
          pcVar8[0x18] = '\x02';
          pcVar8[0x19] = '\0';
          pcVar8[0x1a] = '\0';
          pcVar8[0x1b] = '\0';
          pcVar8[0x1c] = '\0';
          pcVar8[0x1d] = '\0';
          pcVar8[0x1e] = '\0';
          pcVar8[0x1f] = '\0';
          pcVar8[0x10] = '\x01';
          pcVar8[0x11] = '\0';
          pcVar8[0x12] = '\0';
          pcVar8[0x13] = '\0';
          pcVar8[0x14] = '\0';
          pcVar8[0x15] = '\0';
          pcVar8[0x16] = '\0';
          pcVar8[0x17] = '\0';
          *(undefined **)(pcVar8 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
          pcVar8[0x20] = '5';
          pcVar8[0x21] = '\0';
          pcVar8[0x22] = '\0';
          pcVar8[0x23] = '\0';
          pcVar8[0x24] = '\0';
          pcVar8[0x25] = '\0';
          pcVar8[0x26] = '\0';
          pcVar8[0x27] = -0x30;
          pcVar8[0x28] = -0x70;
          pcVar8[0x29] = '\x16';
          pcVar8[0x2a] = -0x27;
          pcVar8[0x2b] = '\0';
          pcVar8[0x2c] = '\x01';
          pcVar8[0x2d] = '\0';
          pcVar8[0x2e] = '\0';
          pcVar8[0x2f] = -0x80;
          SVar13.bridgeObject = (void *)0x20;
          SVar13.str = pcVar8;
          separator_00.bridgeObject = (void *)0xa;
          separator_00.str = (char *)0xe100000000000000;
          Swift::_print(SVar13,separator_00);
          _swift_release(pcVar8);
        }
      }
      else {
        IVar4 = objc_stub::hasPendingCrashReport(IVar11);
        if ((IVar4 & 1) != 0) {
          if (DAT_101057340 == 1) {
            pcVar8 = &DAT_100fae660;
            FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
            _swift_allocObject();
            pcVar8[0x18] = '\x02';
            pcVar8[0x19] = '\0';
            pcVar8[0x1a] = '\0';
            pcVar8[0x1b] = '\0';
            pcVar8[0x1c] = '\0';
            pcVar8[0x1d] = '\0';
            pcVar8[0x1e] = '\0';
            pcVar8[0x1f] = '\0';
            pcVar8[0x10] = '\x01';
            pcVar8[0x11] = '\0';
            pcVar8[0x12] = '\0';
            pcVar8[0x13] = '\0';
            pcVar8[0x14] = '\0';
            pcVar8[0x15] = '\0';
            pcVar8[0x16] = '\0';
            pcVar8[0x17] = '\0';
            *(undefined **)(pcVar8 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
            pcVar8[0x20] = 'M';
            pcVar8[0x21] = '\0';
            pcVar8[0x22] = '\0';
            pcVar8[0x23] = '\0';
            pcVar8[0x24] = '\0';
            pcVar8[0x25] = '\0';
            pcVar8[0x26] = '\0';
            pcVar8[0x27] = -0x30;
            pcVar8[0x28] = -0x30;
            pcVar8[0x29] = '\x16';
            pcVar8[0x2a] = -0x27;
            pcVar8[0x2b] = '\0';
            pcVar8[0x2c] = '\x01';
            pcVar8[0x2d] = '\0';
            pcVar8[0x2e] = '\0';
            pcVar8[0x2f] = -0x80;
            SVar12.bridgeObject = (void *)0x20;
            SVar12.str = pcVar8;
            separator.bridgeObject = (void *)0xa;
            separator.str = (char *)0xe100000000000000;
            Swift::_print(SVar12,separator);
            _swift_release(pcVar8);
          }
          objc_stub::purgePendingCrashReport(IVar11);
        }
      }
      lVar10 = *(long *)(param_1 + lVar10);
      if (lVar10 != 0) {
        IVar11 = *(ID *)(lVar10 + 0x108);
        _swift_retain(lVar10);
        objc_stub::lock(IVar11);
        bVar1 = *(byte *)(lVar10 + 0x128);
        objc_stub::unlock(IVar11);
        _swift_release(lVar10);
        if ((bVar1 & 1) == 0) {
          FUN_100102030(param_1);
          return 1;
        }
      }
      return 1;
    }
  }
LAB_100101714:
  uVar7 = DAT_100faf518;
  DAT_100faf518 = 0;
  _swift_release(uVar7);
  if (DAT_100faf520 != -1) {
    _swift_once(&DAT_100faf520,FUN_100101478);
  }
  lVar10 = DAT_100faf528;
  IVar11 = *(ID *)(DAT_100faf528 + 0x10);
  objc_stub::lock(IVar11);
  if ((*(byte *)(lVar10 + 0x18) & 1) == 0) {
    *(undefined1 *)(lVar10 + 0x18) = 1;
    objc_stub::unlock(IVar11);
    FUN_100101898(unaff_x20,param_1);
    uVar7 = 3;
  }
  else {
    objc_stub::unlock(IVar11);
    uVar7 = 0;
  }
  return uVar7;
}



/* Address: 0x100101898 | FUN_100101898 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

long FUN_100101898(long param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  class_t *pcVar3;
  ID IVar4;
  ID IVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  char *pcVar10;
  undefined8 uVar11;
  long lVar12;
  code *pcVar13;
  String SVar14;
  String SVar15;
  String separator;
  String separator_00;
  
  pcVar3 = &objc::class_t::PHPLCrashReporterConfig;
  _objc_allocWithZone();
  IVar4 = objc_stub::
          initWithSignalHandlerType_symbolicationStrategy_shouldRegisterUncaughtExceptionHandler_
                    ((ID)pcVar3,1,0,1);
  pcVar3 = &objc::class_t::PHPLCrashReporter;
  _objc_allocWithZone();
  IVar4 = objc_stub::initWithConfiguration_((ID)pcVar3,IVar4);
  if (IVar4 != 0) {
    *(ID *)(param_1 + 0x18) = IVar4;
    _swift_unknownObjectWeakAssign(param_1 + 0x10,param_2);
    IVar5 = objc_stub::hasPendingCrashReport(IVar4);
    if ((IVar5 & 1) != 0) {
      if (DAT_101057340 == '\x01') {
        pcVar10 = &DAT_100fae660;
        FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
        _swift_allocObject();
        pcVar10[0x18] = '\x02';
        pcVar10[0x19] = '\0';
        pcVar10[0x1a] = '\0';
        pcVar10[0x1b] = '\0';
        pcVar10[0x1c] = '\0';
        pcVar10[0x1d] = '\0';
        pcVar10[0x1e] = '\0';
        pcVar10[0x1f] = '\0';
        pcVar10[0x10] = '\x01';
        pcVar10[0x11] = '\0';
        pcVar10[0x12] = '\0';
        pcVar10[0x13] = '\0';
        pcVar10[0x14] = '\0';
        pcVar10[0x15] = '\0';
        pcVar10[0x16] = '\0';
        pcVar10[0x17] = '\0';
        *(undefined **)(pcVar10 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
        pcVar10[0x20] = '3';
        pcVar10[0x21] = '\0';
        pcVar10[0x22] = '\0';
        pcVar10[0x23] = '\0';
        pcVar10[0x24] = '\0';
        pcVar10[0x25] = '\0';
        pcVar10[0x26] = '\0';
        pcVar10[0x27] = -0x30;
        pcVar10[0x28] = ' ';
        pcVar10[0x29] = '\x17';
        pcVar10[0x2a] = -0x27;
        pcVar10[0x2b] = '\0';
        pcVar10[0x2c] = '\x01';
        pcVar10[0x2d] = '\0';
        pcVar10[0x2e] = '\0';
        pcVar10[0x2f] = -0x80;
        SVar14.bridgeObject = (void *)0x20;
        SVar14.str = pcVar10;
        separator.bridgeObject = (void *)0xa;
        separator.str = (char *)0xe100000000000000;
        Swift::_print(SVar14,separator);
        _swift_release(pcVar10);
      }
      FUN_1001021c0();
    }
    FUN_1001041f4(IVar4);
    puVar6 = &DAT_100eb7b00;
    _swift_allocObject(&DAT_100eb7b00,0x18,7);
    *(ID *)(puVar6 + 0x10) = IVar4;
    lVar7 = 0;
    FUN_100108c6c();
    _swift_allocObject();
    puVar8 = &_OBJC_CLASS___NSLock;
    _objc_allocWithZone();
    IVar4 = objc_stub::init((ID)puVar8);
    *(ID *)(lVar7 + 0x10) = IVar4;
    puVar8 = PTR___swiftEmptyArrayStorage_100eae0d8;
    puVar9 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_1000f8154();
    *(undefined **)(lVar7 + 0x28) = puVar9;
    *(undefined **)(lVar7 + 0x30) = puVar8;
    *(code **)(lVar7 + 0x18) = FUN_10010457c;
    *(undefined **)(lVar7 + 0x20) = puVar6;
    uVar11 = *(undefined8 *)(param_1 + 0x20);
    *(long *)(param_1 + 0x20) = lVar7;
    _swift_retain_n(lVar7,2);
    _swift_release(uVar11);
    puVar6 = &DAT_100eb7b28;
    puVar8 = puVar6;
    _swift_allocObject(&DAT_100eb7b28,0x18,7);
    _swift_weakInit(puVar8 + 0x10,lVar7);
    pcVar13 = FUN_1001045d4;
    FUN_1000f9f34(FUN_1001045d4,puVar8);
    _swift_release(puVar8);
    uVar11 = *(undefined8 *)(param_1 + 0x28);
    *(code **)(param_1 + 0x28) = pcVar13;
    _swift_release(uVar11);
    _swift_allocObject(&DAT_100eb7b28,0x18,7);
    _swift_weakInit(puVar6 + 0x10,lVar7);
    _swift_release(lVar7);
    pcVar13 = FUN_1001045dc;
    FUN_1000fa130(FUN_1001045dc,puVar6);
    _swift_release(puVar6);
    uVar11 = *(undefined8 *)(param_1 + 0x30);
    *(code **)(param_1 + 0x30) = pcVar13;
    _swift_release(uVar11);
    lVar2 = _TtC7PostHog10PostHogSDK::remoteConfig;
    lVar12 = *(long *)(param_2 + _TtC7PostHog10PostHogSDK::remoteConfig);
    if (lVar12 != 0) {
      IVar4 = *(ID *)(lVar12 + 0x108);
      _swift_retain(lVar12);
      objc_stub::lock(IVar4);
      bVar1 = *(byte *)(lVar12 + 0x128);
      objc_stub::unlock(IVar4);
      _swift_release(lVar12);
      if ((bVar1 & 1) == 0) {
        if (*(long *)(param_2 + lVar2) == 0) {
          _swift_release(lVar7);
          pcVar13 = (code *)0x0;
        }
        else {
          uVar11 = *(undefined8 *)(*(long *)(param_2 + lVar2) + 0x198);
          puVar6 = &DAT_100eb7b50;
          _swift_allocObject(&DAT_100eb7b50,0x18,7);
          _swift_weakInit(puVar6 + 0x10,param_1);
          puVar8 = &DAT_100eb7b78;
          _swift_allocObject(&DAT_100eb7b78,0x18,7);
          _swift_unknownObjectWeakInit(puVar8 + 0x10,param_2);
          puVar9 = &DAT_100eb7ba0;
          _swift_allocObject(&DAT_100eb7ba0,0x20,7);
          *(undefined **)(puVar9 + 0x10) = puVar6;
          *(undefined **)(puVar9 + 0x18) = puVar8;
          _swift_retain(uVar11);
          pcVar13 = FUN_100104634;
          FUN_1000f9d38(FUN_100104634,puVar9);
          _swift_release(uVar11);
          _swift_release(puVar9);
          _swift_release(lVar7);
        }
        lVar7 = *(long *)(param_1 + 0x38);
        *(code **)(param_1 + 0x38) = pcVar13;
      }
    }
    _swift_release(lVar7);
    return lVar7;
  }
  if (DAT_101057340 == '\x01') {
    pcVar10 = &DAT_100fae660;
    FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
    _swift_allocObject();
    pcVar10[0x18] = '\x02';
    pcVar10[0x19] = '\0';
    pcVar10[0x1a] = '\0';
    pcVar10[0x1b] = '\0';
    pcVar10[0x1c] = '\0';
    pcVar10[0x1d] = '\0';
    pcVar10[0x1e] = '\0';
    pcVar10[0x1f] = '\0';
    pcVar10[0x10] = '\x01';
    pcVar10[0x11] = '\0';
    pcVar10[0x12] = '\0';
    pcVar10[0x13] = '\0';
    pcVar10[0x14] = '\0';
    pcVar10[0x15] = '\0';
    pcVar10[0x16] = '\0';
    pcVar10[0x17] = '\0';
    *(undefined **)(pcVar10 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
    pcVar10[0x20] = '5';
    pcVar10[0x21] = '\0';
    pcVar10[0x22] = '\0';
    pcVar10[0x23] = '\0';
    pcVar10[0x24] = '\0';
    pcVar10[0x25] = '\0';
    pcVar10[0x26] = '\0';
    pcVar10[0x27] = -0x30;
    pcVar10[0x28] = -0x70;
    pcVar10[0x29] = '\x16';
    pcVar10[0x2a] = -0x27;
    pcVar10[0x2b] = '\0';
    pcVar10[0x2c] = '\x01';
    pcVar10[0x2d] = '\0';
    pcVar10[0x2e] = '\0';
    pcVar10[0x2f] = -0x80;
    SVar15.bridgeObject = (void *)0x20;
    SVar15.str = pcVar10;
    separator_00.bridgeObject = (void *)0xa;
    separator_00.str = (char *)0xe100000000000000;
    Swift::_print(SVar15,separator_00);
    _swift_release(pcVar10);
  }
  return 0;
}



/* Address: 0x100101d08 | FUN_100101d08 */

void FUN_100101d08(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  ID self;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  uVar1 = *param_1;
  _swift_beginAccess(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  _swift_weakLoadStrong();
  if (param_2 != 0) {
    self = *(ID *)(param_2 + 0x10);
    objc_stub::lock(self);
    uVar2 = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_2 + 0x28) = uVar1;
    _swift_bridgeObjectRetain(uVar1);
    _swift_bridgeObjectRelease(uVar2);
    FUN_100108964();
    objc_stub::unlock(self);
    _swift_release(param_2);
  }
  return;
}



/* Address: 0x100101d94 | FUN_100101d94 */

void FUN_100101d94(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  ID self;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  uVar1 = *param_1;
  _swift_beginAccess(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  _swift_weakLoadStrong();
  if (param_2 != 0) {
    self = *(ID *)(param_2 + 0x10);
    objc_stub::lock(self);
    uVar2 = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_2 + 0x30) = uVar1;
    _swift_bridgeObjectRetain(uVar1);
    _swift_bridgeObjectRelease(uVar2);
    FUN_100108964();
    objc_stub::unlock(self);
    _swift_release(param_2);
  }
  return;
}



/* Address: 0x100101e20 | FUN_100101e20 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100101e20(undefined8 param_1,long param_2,long param_3)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  ID self;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  _swift_weakLoadStrong();
  if (param_2 != 0) {
    _swift_beginAccess(param_3 + 0x10,auStack_70,0,0);
    param_3 = param_3 + 0x10;
    _swift_unknownObjectWeakLoadStrong();
    if (param_3 == 0) {
      _swift_release(param_2);
    }
    else {
      uVar2 = *(undefined8 *)(param_2 + 0x38);
      *(undefined8 *)(param_2 + 0x38) = 0;
      _swift_release(uVar2);
      lVar3 = *(long *)(param_3 + _TtC7PostHog10PostHogSDK::remoteConfig);
      if (lVar3 != 0) {
        self = *(ID *)(lVar3 + 0xe8);
        _swift_retain(lVar3);
        objc_stub::lock(self);
        bVar1 = *(byte *)(lVar3 + 0xf0);
        objc_stub::unlock(self);
        _swift_release(lVar3);
        if ((bVar1 & 1) == 0) {
          _swift_retain(param_2);
          FUN_1001037f4();
          _swift_release_n(param_2,2);
          return;
        }
      }
      _swift_release(param_2);
    }
  }
  return;
}



/* Address: 0x100101f30 | FUN_100101f30 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100101f30(long param_1)

{
  long lVar1;
  long lVar2;
  ID self;
  long unaff_x20;
  
  lVar2 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  lVar1 = DAT_100faf528;
  if (DAT_100faf520 != -1) {
    _swift_once(&DAT_100faf520,FUN_100101478);
    lVar1 = DAT_100faf528;
  }
  DAT_100faf528 = lVar1;
  if ((lVar2 == 0) || (lVar2 == param_1)) {
    FUN_100101fd0();
    self = *(ID *)(lVar1 + 0x10);
    objc_stub::lock(self);
    *(undefined1 *)(lVar1 + 0x18) = 0;
    objc_stub::unlock(self);
  }
  return 0;
}



/* Address: 0x100101fd0 | FUN_100101fd0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100101fd0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  _swift_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _swift_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  _swift_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  _swift_release(uVar1);
  *(undefined8 *)(param_1 + 0x18) = 0;
  _swift_unknownObjectWeakAssign(param_1 + 0x10,0);
  return;
}



/* Address: 0x100102030 | FUN_100102030 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100102030(long param_1)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (*(long *)(param_1 + _TtC7PostHog10PostHogSDK::remoteConfig) == 0) {
    pcVar2 = (code *)0x0;
  }
  else {
    uVar4 = *unaff_x20;
    uVar3 = *(undefined8 *)(*(long *)(param_1 + _TtC7PostHog10PostHogSDK::remoteConfig) + 0x198);
    puVar1 = &DAT_100eb7ad8;
    _swift_allocObject(&DAT_100eb7ad8,0x28,7);
    *(long *)(puVar1 + 0x10) = param_1;
    *(undefined8 **)(puVar1 + 0x18) = unaff_x20;
    *(undefined8 *)(puVar1 + 0x20) = uVar4;
    _swift_retain(uVar3);
    _swift_retain();
    pcVar2 = FUN_1001041e0;
    FUN_1000f9d38(FUN_1001041e0,puVar1);
    _swift_release(uVar3);
    _swift_release(puVar1);
  }
  uVar3 = DAT_100faf518;
  DAT_100faf518 = pcVar2;
  _swift_release(uVar3);
  return;
}



/* Address: 0x1001020ec | FUN_1001020ec */

void FUN_1001020ec(undefined8 param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  ID IVar4;
  
  uVar2 = DAT_100faf518;
  DAT_100faf518 = 0;
  _swift_release(uVar2);
  lVar3 = *(long *)(param_2 + _TtC7PostHog10PostHogSDK::remoteConfig);
  if (lVar3 != 0) {
    IVar4 = *(ID *)(lVar3 + 0xe8);
    _swift_retain(lVar3);
    objc_stub::lock(IVar4);
    cVar1 = *(char *)(lVar3 + 0xf0);
    objc_stub::unlock(IVar4);
    _swift_release(lVar3);
    if (cVar1 == '\x01') {
      IVar4 = *(ID *)(param_2 + _TtC7PostHog10PostHogSDK::setupLock);
      objc_stub::lock(IVar4);
      FUN_100151770(param_3,&PTR_PTR_100eb7a98,param_2);
      objc_stub::unlock(IVar4);
      return;
    }
  }
  return;
}



/* Address: 0x1001021c0 | FUN_1001021c0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x000100103734) */

void FUN_1001021c0(void)

{
  undefined8 *puVar1;
  byte bVar2;
  void *pvVar3;
  bool bVar4;
  Date DVar5;
  undefined *puVar6;
  Data DVar7;
  class_t *self;
  NSData *pNVar8;
  ID self_00;
  undefined *puVar9;
  Data DVar10;
  long lVar11;
  char **ppcVar12;
  char *pcVar13;
  char *pcVar14;
  long lVar15;
  Date DVar16;
  undefined *extraout_x1;
  undefined *extraout_x1_00;
  undefined8 extraout_x1_01;
  _StringGuts _Var17;
  ulong uVar18;
  undefined8 uVar19;
  undefined1 *puVar20;
  char *pcVar21;
  void *in_x3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  ID IVar22;
  long lVar23;
  undefined1 *puVar24;
  long unaff_x20;
  long lVar25;
  long lVar26;
  code *pcVar27;
  char *pcVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  String SVar33;
  String SVar34;
  String SVar35;
  String SVar36;
  String SVar37;
  String SVar38;
  String SVar39;
  String SVar40;
  String SVar41;
  String SVar42;
  String SVar43;
  String SVar44;
  String SVar45;
  String SVar46;
  String separator;
  String SVar47;
  String SVar48;
  String separator_00;
  String separator_01;
  String separator_02;
  String separator_03;
  String separator_04;
  String separator_05;
  String separator_06;
  long local_1b0;
  char *local_1a8;
  char *local_1a0;
  undefined *local_198;
  long local_190;
  undefined1 *local_188;
  ID local_180;
  char *local_178;
  long local_170;
  undefined *local_168;
  undefined *local_160;
  ID local_158;
  long local_150;
  char *local_148;
  undefined1 auStack_138 [24];
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  char *local_c0;
  undefined1 *puStack_b8;
  undefined *local_a8;
  char *local_a0;
  void *pvStack_98;
  undefined8 uStack_90;
  long local_88;
  long local_78;
  
  local_78 = *(long *)PTR____stack_chk_guard_100ea82f0;
  DVar5 = Foundation::Date::typeMetadataAccessor();
  lVar32 = *(long *)(DVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar32 + 0x40));
  lVar31 = (long)&local_1b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar6 = &DAT_100faf508;
  FUN_1000f7830(&DAT_100faf508,&DAT_100c2e2e0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar6 + -8) + 0x40));
  lVar29 = lVar31 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  IVar22 = *(ID *)(unaff_x20 + 0x18);
  if (IVar22 == 0) goto LAB_100103064;
  lVar15 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar15 == 0) goto LAB_100103064;
  local_a0 = (char *)0x0;
  ppcVar12 = &local_a0;
  DVar7.unknown = (undefined *)objc_stub::loadPendingCrashReportDataAndReturnError_(IVar22);
  if (DVar7.unknown == (undefined *)0x0) {
    pcVar28 = local_a0;
    _Var17.unknown = extraout_x1;
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    local_a0 = (char *)0x0;
    pvStack_98 = (void *)0xe000000000000000;
    Swift::_StringGuts::grow(0x1f,_Var17);
    SVar33.bridgeObject = (void *)0x8000000100d91480;
    SVar33.str = (char *)0xd00000000000001d;
    SVar45.bridgeObject = in_x3;
    SVar45.str = (char *)ppcVar12;
    Swift::String::append(SVar33,SVar45);
    puVar6 = &DAT_100faf510;
    local_c0 = pcVar28;
    FUN_1000f7830(&DAT_100faf510,&DAT_100c2e820);
    puVar9 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
    Swift::__print_unlocked
              (&local_c0,&local_a0,puVar6,
               PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
               PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
              );
    pvVar3 = pvStack_98;
    pcVar14 = local_a0;
    if (DAT_101057340 == 1) {
      pcVar13 = &DAT_100fae660;
      FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
      pcVar21 = (char *)0x7;
      _swift_allocObject();
      pcVar13[0x18] = '\x02';
      pcVar13[0x19] = '\0';
      pcVar13[0x1a] = '\0';
      pcVar13[0x1b] = '\0';
      pcVar13[0x1c] = '\0';
      pcVar13[0x1d] = '\0';
      pcVar13[0x1e] = '\0';
      pcVar13[0x1f] = '\0';
      pcVar13[0x10] = '\x01';
      pcVar13[0x11] = '\0';
      pcVar13[0x12] = '\0';
      pcVar13[0x13] = '\0';
      pcVar13[0x14] = '\0';
      pcVar13[0x15] = '\0';
      pcVar13[0x16] = '\0';
      pcVar13[0x17] = '\0';
      local_a0 = (char *)0x676f4874736f505b;
      pvStack_98 = (void *)0xea0000000000205d;
      SVar34.bridgeObject = pvVar3;
      SVar34.str = pcVar14;
      SVar46.bridgeObject = puVar9;
      SVar46.str = pcVar21;
      Swift::String::append(SVar34,SVar46);
      *(undefined **)(pcVar13 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
      *(char **)(pcVar13 + 0x20) = local_a0;
      *(void **)(pcVar13 + 0x28) = pvStack_98;
      SVar35.bridgeObject = (void *)0x20;
      SVar35.str = pcVar13;
      separator.bridgeObject = (void *)0xa;
      separator.str = (char *)0xe100000000000000;
      Swift::_print(SVar35,separator);
      _swift_release(pcVar13);
    }
    _swift_bridgeObjectRelease(pvVar3);
    objc_stub::purgePendingCrashReport(IVar22);
    _swift_errorRelease(pcVar28);
    goto LAB_100103064;
  }
  puVar6 = extraout_x1;
  local_170 = lVar29 - extraout_x12;
  DVar7 = Foundation::Data::__unconditionallyBridgeFromObjectiveC(DVar7);
  objc_stub::purgePendingCrashReport(IVar22);
  self = &objc::class_t::PHPLCrashReport;
  _objc_allocWithZone();
  FUN_1001037b4(DVar7.unknown,puVar6);
  pNVar8 = Foundation::Data::_bridgeToObjectiveC(DVar7);
  local_168 = DVar7.unknown;
  local_160 = puVar6;
  FUN_10003bf2c(DVar7.unknown,puVar6);
  local_a0 = (char *)0x0;
  ppcVar12 = &local_a0;
  self_00 = objc_stub::initWithData_error_((ID)self);
  puVar6 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (self_00 == 0) {
    pcVar28 = local_a0;
    _Var17.unknown = extraout_x1_00;
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    local_a0 = (char *)0x0;
    pvStack_98 = (void *)0xe000000000000000;
    Swift::_StringGuts::grow(0x22,_Var17);
    SVar36.bridgeObject = (void *)0x8000000100d914a0;
    SVar36.str = (char *)0xd000000000000020;
    SVar47.bridgeObject = ppcVar12;
    SVar47.str = (char *)pNVar8;
    Swift::String::append(SVar36,SVar47);
    puVar6 = &DAT_100faf510;
    local_c0 = pcVar28;
    FUN_1000f7830(&DAT_100faf510,&DAT_100c2e820);
    puVar9 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
    Swift::__print_unlocked
              (&local_c0,&local_a0,puVar6,
               PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
               PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
              );
    pvVar3 = pvStack_98;
    pcVar14 = local_a0;
    if ((DAT_101057340 & 1) == 0) {
      _swift_errorRelease(pcVar28);
      _swift_bridgeObjectRelease(pvVar3);
      FUN_10003bf2c(local_168,local_160);
    }
    else {
      pcVar13 = &DAT_100fae660;
      FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
      pcVar21 = (char *)0x7;
      _swift_allocObject();
      pcVar13[0x18] = '\x02';
      pcVar13[0x19] = '\0';
      pcVar13[0x1a] = '\0';
      pcVar13[0x1b] = '\0';
      pcVar13[0x1c] = '\0';
      pcVar13[0x1d] = '\0';
      pcVar13[0x1e] = '\0';
      pcVar13[0x1f] = '\0';
      pcVar13[0x10] = '\x01';
      pcVar13[0x11] = '\0';
      pcVar13[0x12] = '\0';
      pcVar13[0x13] = '\0';
      pcVar13[0x14] = '\0';
      pcVar13[0x15] = '\0';
      pcVar13[0x16] = '\0';
      pcVar13[0x17] = '\0';
      local_a0 = (char *)0x676f4874736f505b;
      pvStack_98 = (void *)0xea0000000000205d;
      SVar37.bridgeObject = pvVar3;
      SVar37.str = pcVar14;
      SVar48.bridgeObject = puVar9;
      SVar48.str = pcVar21;
      Swift::String::append(SVar37,SVar48);
      *(undefined **)(pcVar13 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
      *(char **)(pcVar13 + 0x20) = local_a0;
      *(void **)(pcVar13 + 0x28) = pvStack_98;
      SVar38.bridgeObject = (void *)0x20;
      SVar38.str = pcVar13;
      separator_00.bridgeObject = (void *)0xa;
      separator_00.str = (char *)0xe100000000000000;
      Swift::_print(SVar38,separator_00);
      _swift_errorRelease(pcVar28);
      _swift_bridgeObjectRelease(pvVar3);
      FUN_10003bf2c(local_168,local_160);
      _swift_release(pcVar13);
    }
    goto LAB_100103064;
  }
  puVar9 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1000f8154();
  DVar7.unknown = (undefined *)objc_stub::customData(self_00);
  local_180 = IVar22;
  local_158 = self_00;
  local_150 = lVar15;
  if (DVar7.unknown == (undefined *)0x0) {
    local_178 = puVar6;
    if (*(long *)(puVar9 + 0x10) != 0) goto LAB_100102850;
LAB_1001028e4:
    local_1a8 = (char *)0x0;
    local_188 = (undefined1 *)0x0;
  }
  else {
    uVar19 = extraout_x1_01;
    DVar10 = Foundation::Data::__unconditionallyBridgeFromObjectiveC(DVar7);
    DVar7 = DVar10;
    FUN_10016e98c(DVar10.unknown,uVar19,0);
    if (DVar7.unknown == (undefined *)0x0) {
      FUN_10003bf2c(DVar10.unknown,uVar19);
      lVar11 = *(long *)(puVar9 + 0x10);
      local_178 = PTR___swiftEmptyArrayStorage_100eae0d8;
      self_00 = local_158;
      lVar15 = local_150;
    }
    else {
      _swift_bridgeObjectRelease(puVar9);
      if (*(long *)(DVar7.unknown + 0x10) == 0) {
        FUN_10003bf2c(DVar10.unknown,uVar19);
        local_178 = PTR___swiftEmptyArrayStorage_100eae0d8;
        lVar15 = local_150;
      }
      else {
        _swift_bridgeObjectRetain(DVar7.unknown);
        uVar18 = 0;
        lVar11 = -0x2ffffffffffffff0;
        FUN_100071370(0xd000000000000010);
        lVar15 = local_150;
        if ((uVar18 & 1) == 0) {
          _swift_bridgeObjectRelease(DVar7.unknown);
        }
        else {
          FUN_10000cbfc(*(long *)(DVar7.unknown + 0x38) + lVar11 * 0x20,&local_a0);
          _swift_bridgeObjectRelease(DVar7.unknown);
          puVar6 = &DAT_100fae868;
          FUN_1000f7830(&DAT_100fae868,&DAT_100c2e2f0);
          ppcVar12 = &local_c0;
          _swift_dynamicCast(ppcVar12,&local_a0,PTR___type_metadata_for_Any_100eae0c0 + 8,puVar6,6);
          if (((ulong)ppcVar12 & 1) != 0) {
            local_178 = local_c0;
            FUN_10003bf2c(DVar10.unknown,uVar19);
            goto LAB_100102840;
          }
        }
        FUN_10003bf2c(DVar10.unknown,uVar19);
        local_178 = PTR___swiftEmptyArrayStorage_100eae0d8;
      }
LAB_100102840:
      lVar11 = *(long *)(DVar7.unknown + 0x10);
      puVar9 = DVar7.unknown;
      self_00 = local_158;
    }
    local_158 = self_00;
    if (lVar11 == 0) goto LAB_1001028e4;
LAB_100102850:
    self_00 = local_158;
    _swift_bridgeObjectRetain(puVar9);
    lVar11 = 0x74636e6974736964;
    uVar18 = 0xeb0000000064695f;
    FUN_100071370(0x74636e6974736964);
    if ((uVar18 & 1) == 0) {
      _swift_bridgeObjectRelease(puVar9);
      goto LAB_1001028e4;
    }
    FUN_10000cbfc(*(long *)(puVar9 + 0x38) + lVar11 * 0x20,&local_a0);
    _swift_bridgeObjectRelease(puVar9);
    ppcVar12 = &local_c0;
    _swift_dynamicCast(ppcVar12,&local_a0,PTR___type_metadata_for_Any_100eae0c0 + 8,
                       PTR___type_metadata_for_Swift_String_100eac208,6);
    local_1a8 = local_c0;
    local_188 = puStack_b8;
    if ((int)ppcVar12 == 0) {
      local_1a8 = (char *)0x0;
      local_188 = (undefined1 *)0x0;
    }
  }
  local_198 = puVar9;
  if (*(long *)(puVar9 + 0x10) == 0) {
LAB_10010299c:
    pcVar14 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_1000f8154();
  }
  else {
    _swift_bridgeObjectRetain(puVar9);
    uVar18 = 0;
    lVar11 = -0x2ffffffffffffff0;
    FUN_100071370(0xd000000000000010);
    if ((uVar18 & 1) == 0) {
      _swift_bridgeObjectRelease(puVar9);
      goto LAB_10010299c;
    }
    FUN_10000cbfc(*(long *)(puVar9 + 0x38) + lVar11 * 0x20,&local_a0);
    _swift_bridgeObjectRelease(puVar9);
    puVar6 = &DAT_100fae898;
    FUN_1000f7830(&DAT_100fae898,&DAT_100c2e4e0);
    ppcVar12 = &local_c0;
    _swift_dynamicCast(ppcVar12,&local_a0,PTR___type_metadata_for_Any_100eae0c0 + 8,puVar6,6);
    pcVar14 = local_c0;
    if (((ulong)ppcVar12 & 1) == 0) goto LAB_10010299c;
  }
  local_190 = _TtC7PostHog10PostHogSDK::config;
  FUN_100100f6c(self_00,*(undefined8 *)
                         (*(long *)(lVar15 + _TtC7PostHog10PostHogSDK::config) +
                         PostHogConfig::errorTrackingConfig));
  pcVar28 = pcVar14;
  _swift_isUniquelyReferenced_nonNull_native(pcVar14);
  local_a0 = pcVar14;
  FUN_100103e2c(self_00,FUN_100152dbc,0,pcVar28,&local_a0);
  _swift_bridgeObjectRelease(self_00);
  pcVar28 = local_a0;
  pcVar14 = local_178;
  local_148 = local_a0;
  if (*(long *)(local_a0 + 0x10) == 0) {
LAB_100102ab0:
    pvStack_98 = (void *)0x0;
    local_a0 = (char *)0x0;
    local_88 = 0;
    uStack_90 = 0;
    FUN_1000fb4c4(&local_a0,&DAT_100fae668,&DAT_100c2e4a0);
    lVar15 = local_190;
    if (*(long *)(pcVar14 + 0x10) != 0) {
      puVar6 = &DAT_100fae868;
      FUN_1000f7830(&DAT_100fae868,&DAT_100c2e2f0);
      local_c0 = pcVar14;
      local_a8 = puVar6;
      if (puVar6 == (undefined *)0x0) {
        _swift_bridgeObjectRetain(pcVar14);
        FUN_1000fb4c4(&local_c0,&DAT_100fae668,&DAT_100c2e4a0);
        FUN_10016fcc4(&local_a0,0xd000000000000010,0x8000000100d914f0);
        FUN_1000fb4c4(&local_a0,&DAT_100fae668,&DAT_100c2e4a0);
      }
      else {
        FUN_100011080(&local_c0,&local_a0);
        _swift_bridgeObjectRetain(pcVar14);
        pcVar14 = pcVar28;
        _swift_isUniquelyReferenced_nonNull_native(pcVar28);
        local_c0 = pcVar28;
        FUN_10016fe74(&local_a0,0xd000000000000010,0x8000000100d914f0,pcVar14);
        local_148 = local_c0;
      }
    }
  }
  else {
    _swift_bridgeObjectRetain(local_a0);
    uVar18 = 0;
    lVar15 = -0x2ffffffffffffff0;
    FUN_100071370(0xd000000000000010);
    if ((uVar18 & 1) == 0) {
      _swift_release(pcVar28);
      goto LAB_100102ab0;
    }
    FUN_10000cbfc(*(long *)(pcVar28 + 0x38) + lVar15 * 0x20,&local_a0);
    _swift_release(pcVar28);
    FUN_1000fb4c4(&local_a0,&DAT_100fae668,&DAT_100c2e4a0);
    lVar15 = local_190;
  }
  lVar11 = _TtC7PostHog26PostHogErrorTrackingConfig::ignoredExceptionTypes;
  lVar25 = *(long *)(*(long *)(local_150 + lVar15) + PostHogConfig::errorTrackingConfig);
  _swift_beginAccess(lVar25 + _TtC7PostHog26PostHogErrorTrackingConfig::ignoredExceptionTypes,
                     &local_c0,0,0);
  pcVar14 = local_148;
  lVar11 = *(long *)(lVar25 + lVar11);
  if (*(long *)(lVar11 + 0x10) == 0) {
LAB_100102cfc:
    IVar22 = objc_stub::systemInfo(local_158);
    if ((IVar22 == 0) ||
       (DVar16.unknown = (undefined *)objc_stub::timestamp(IVar22), lVar11 = local_170,
       DVar16.unknown == (undefined *)0x0)) {
      uVar19 = 1;
      lVar11 = local_170;
    }
    else {
      Foundation::Date::__unconditionallyBridgeFromObjectiveC(DVar16);
      uVar19 = 0;
    }
    (**(code **)(lVar32 + 0x38))(lVar11,uVar19,1,DVar5.unknown);
    lVar23 = local_150;
    lVar11 = _TtC7PostHog10PostHogSDK::setupLock;
    local_1a0 = local_148;
    IVar22 = *(ID *)(local_150 + _TtC7PostHog10PostHogSDK::setupLock);
    objc_stub::lock(IVar22);
    lVar25 = _TtC7PostHog10PostHogSDK::enabled;
    bVar2 = *(byte *)(lVar23 + _TtC7PostHog10PostHogSDK::enabled);
    objc_stub::unlock(IVar22);
    lVar30 = PostHogConfig::optOut;
    if ((bVar2 & 1) == 0) {
      if (DAT_101057340 == 1) {
        pcVar14 = &DAT_100fae660;
        FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
        _swift_allocObject();
        pcVar14[0x18] = '\x02';
        pcVar14[0x19] = '\0';
        pcVar14[0x1a] = '\0';
        pcVar14[0x1b] = '\0';
        pcVar14[0x1c] = '\0';
        pcVar14[0x1d] = '\0';
        pcVar14[0x1e] = '\0';
        pcVar14[0x1f] = '\0';
        pcVar14[0x10] = '\x01';
        pcVar14[0x11] = '\0';
        pcVar14[0x12] = '\0';
        pcVar14[0x13] = '\0';
        pcVar14[0x14] = '\0';
        pcVar14[0x15] = '\0';
        pcVar14[0x16] = '\0';
        pcVar14[0x17] = '\0';
        *(undefined **)(pcVar14 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
        pcVar14[0x20] = 'X';
        pcVar14[0x21] = '\0';
        pcVar14[0x22] = '\0';
        pcVar14[0x23] = '\0';
        pcVar14[0x24] = '\0';
        pcVar14[0x25] = '\0';
        pcVar14[0x26] = '\0';
        pcVar14[0x27] = -0x30;
        pcVar14[0x28] = '@';
        pcVar14[0x29] = '\x15';
        pcVar14[0x2a] = -0x27;
        pcVar14[0x2b] = '\0';
        pcVar14[0x2c] = '\x01';
        pcVar14[0x2d] = '\0';
        pcVar14[0x2e] = '\0';
        pcVar14[0x2f] = -0x80;
        SVar41.bridgeObject = (void *)0x20;
        SVar41.str = pcVar14;
        separator_03.bridgeObject = (void *)0xa;
        separator_03.str = (char *)0xe100000000000000;
        Swift::_print(SVar41,separator_03);
        _swift_release(pcVar14);
      }
      _swift_bridgeObjectRelease(local_188);
      puVar9 = local_160;
      pcVar14 = local_1a0;
      puVar6 = local_168;
    }
    else {
      lVar26 = *(long *)(lVar23 + lVar15);
      _swift_beginAccess(lVar26 + PostHogConfig::optOut,auStack_d8,0,0);
      puVar6 = local_168;
      pcVar14 = local_1a0;
      lVar15 = _TtC7PostHog26PostHogErrorTrackingConfig::ignoredExceptionTypes;
      if (*(char *)(lVar26 + lVar30) == '\x01') {
        if (DAT_101057340 == 1) {
          pcVar28 = &DAT_100fae660;
          FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
          _swift_allocObject();
          pcVar28[0x18] = '\x02';
          pcVar28[0x19] = '\0';
          pcVar28[0x1a] = '\0';
          pcVar28[0x1b] = '\0';
          pcVar28[0x1c] = '\0';
          pcVar28[0x1d] = '\0';
          pcVar28[0x1e] = '\0';
          pcVar28[0x1f] = '\0';
          pcVar28[0x10] = '\x01';
          pcVar28[0x11] = '\0';
          pcVar28[0x12] = '\0';
          pcVar28[0x13] = '\0';
          pcVar28[0x14] = '\0';
          pcVar28[0x15] = '\0';
          pcVar28[0x16] = '\0';
          pcVar28[0x17] = '\0';
          *(undefined **)(pcVar28 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
          pcVar28[0x20] = '%';
          pcVar28[0x21] = '\0';
          pcVar28[0x22] = '\0';
          pcVar28[0x23] = '\0';
          pcVar28[0x24] = '\0';
          pcVar28[0x25] = '\0';
          pcVar28[0x26] = '\0';
          pcVar28[0x27] = -0x30;
          pcVar28[0x28] = '\0';
          pcVar28[0x29] = '\x16';
          pcVar28[0x2a] = -0x27;
          pcVar28[0x2b] = '\0';
          pcVar28[0x2c] = '\x01';
          pcVar28[0x2d] = '\0';
          pcVar28[0x2e] = '\0';
          pcVar28[0x2f] = -0x80;
          SVar40.bridgeObject = (void *)0x20;
          SVar40.str = pcVar28;
          separator_02.bridgeObject = (void *)0xa;
          separator_02.str = (char *)0xe100000000000000;
          Swift::_print(SVar40,separator_02);
          _swift_release(pcVar28);
        }
        _swift_bridgeObjectRelease(local_188);
        puVar9 = local_160;
      }
      else {
        lVar30 = *(long *)(lVar23 + _TtC7PostHog10PostHogSDK::queue);
        if (lVar30 == 0) {
          _swift_bridgeObjectRelease(local_188);
          puVar9 = local_160;
          pcVar14 = local_1a0;
          puVar6 = local_168;
        }
        else {
          lVar23 = *(long *)(lVar26 + PostHogConfig::errorTrackingConfig);
          _swift_beginAccess(lVar23 + _TtC7PostHog26PostHogErrorTrackingConfig::
                                      ignoredExceptionTypes,auStack_f0,0,0);
          lVar23 = *(long *)(lVar23 + lVar15);
          lVar15 = *(long *)(lVar23 + 0x10);
          local_1b0 = lVar30;
          _swift_retain(lVar30);
          pcVar14 = local_1a0;
          if (lVar15 != 0) {
            _swift_bridgeObjectRetain(local_1a0);
            _swift_bridgeObjectRetain(lVar23);
            pcVar28 = pcVar14;
            FUN_100103b68(pcVar14,lVar23);
            _swift_bridgeObjectRelease(lVar23);
            _swift_bridgeObjectRelease(pcVar14);
            puVar6 = local_168;
            if (((ulong)pcVar28 & 1) != 0) {
              if (DAT_101057340 == 1) {
                pcVar14 = &DAT_100fae660;
                FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
                _swift_allocObject();
                pcVar14[0x18] = '\x02';
                pcVar14[0x19] = '\0';
                pcVar14[0x1a] = '\0';
                pcVar14[0x1b] = '\0';
                pcVar14[0x1c] = '\0';
                pcVar14[0x1d] = '\0';
                pcVar14[0x1e] = '\0';
                pcVar14[0x1f] = '\0';
                pcVar14[0x10] = '\x01';
                pcVar14[0x11] = '\0';
                pcVar14[0x12] = '\0';
                pcVar14[0x13] = '\0';
                pcVar14[0x14] = '\0';
                pcVar14[0x15] = '\0';
                pcVar14[0x16] = '\0';
                pcVar14[0x17] = '\0';
                *(undefined **)(pcVar14 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
                pcVar14[0x20] = '\\';
                pcVar14[0x21] = '\0';
                pcVar14[0x22] = '\0';
                pcVar14[0x23] = '\0';
                pcVar14[0x24] = '\0';
                pcVar14[0x25] = '\0';
                pcVar14[0x26] = '\0';
                pcVar14[0x27] = -0x30;
                pcVar14[0x28] = -0x60;
                pcVar14[0x29] = '\x15';
                pcVar14[0x2a] = -0x27;
                pcVar14[0x2b] = '\0';
                pcVar14[0x2c] = '\x01';
                pcVar14[0x2d] = '\0';
                pcVar14[0x2e] = '\0';
                pcVar14[0x2f] = -0x80;
                SVar43.bridgeObject = (void *)0x20;
                SVar43.str = pcVar14;
                separator_05.bridgeObject = (void *)0xa;
                separator_05.str = (char *)0xe100000000000000;
                Swift::_print(SVar43,separator_05);
                _swift_release(pcVar14);
              }
              _swift_release(local_1b0);
              _swift_bridgeObjectRelease(local_188);
              puVar9 = local_160;
              pcVar14 = local_1a0;
              goto LAB_100102f64;
            }
          }
          FUN_100104164(local_170,lVar29);
          pcVar27 = *(code **)(lVar32 + 0x30);
          lVar30 = lVar29;
          (*pcVar27)(lVar29,1,DVar5.unknown);
          lVar15 = local_150;
          if ((int)lVar30 == 1) {
            Foundation::Date::init();
            lVar23 = lVar29;
            (*pcVar27)(lVar29,1,DVar5.unknown);
            puVar24 = local_188;
            lVar30 = local_190;
            pcVar28 = local_1a8;
            if ((int)lVar23 != 1) {
              FUN_1000fb4c4(lVar29,&DAT_100faf508,&DAT_100c2e2e0);
            }
          }
          else {
            (**(code **)(lVar32 + 0x20))(lVar31,lVar29,DVar5.unknown);
            puVar24 = local_188;
            pcVar28 = local_1a8;
            lVar30 = local_190;
          }
          puVar9 = local_160;
          pcVar14 = local_1a0;
          puVar20 = puVar24;
          if (puVar24 == (undefined1 *)0x0) {
            IVar22 = *(ID *)(lVar15 + lVar11);
            objc_stub::lock(IVar22);
            bVar2 = *(byte *)(lVar15 + lVar25);
            objc_stub::unlock(IVar22);
            pcVar14 = local_1a0;
            lVar29 = PostHogConfig::storageManager;
            if ((bVar2 & 1) == 0) {
              if (DAT_101057340 == 1) {
                pcVar28 = &DAT_100fae660;
                FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
                _swift_allocObject();
                pcVar28[0x18] = '\x02';
                pcVar28[0x19] = '\0';
                pcVar28[0x1a] = '\0';
                pcVar28[0x1b] = '\0';
                pcVar28[0x1c] = '\0';
                pcVar28[0x1d] = '\0';
                pcVar28[0x1e] = '\0';
                pcVar28[0x1f] = '\0';
                pcVar28[0x10] = '\x01';
                pcVar28[0x11] = '\0';
                pcVar28[0x12] = '\0';
                pcVar28[0x13] = '\0';
                pcVar28[0x14] = '\0';
                pcVar28[0x15] = '\0';
                pcVar28[0x16] = '\0';
                pcVar28[0x17] = '\0';
                *(undefined **)(pcVar28 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
                pcVar28[0x20] = 'X';
                pcVar28[0x21] = '\0';
                pcVar28[0x22] = '\0';
                pcVar28[0x23] = '\0';
                pcVar28[0x24] = '\0';
                pcVar28[0x25] = '\0';
                pcVar28[0x26] = '\0';
                pcVar28[0x27] = -0x30;
                pcVar28[0x28] = '@';
                pcVar28[0x29] = '\x15';
                pcVar28[0x2a] = -0x27;
                pcVar28[0x2b] = '\0';
                pcVar28[0x2c] = '\x01';
                pcVar28[0x2d] = '\0';
                pcVar28[0x2e] = '\0';
                pcVar28[0x2f] = -0x80;
                SVar44.bridgeObject = (void *)0x20;
                SVar44.str = pcVar28;
                separator_06.bridgeObject = (void *)0xa;
                separator_06.str = (char *)0xe100000000000000;
                Swift::_print(SVar44,separator_06);
                _swift_release(pcVar28);
              }
              pcVar28 = (char *)0x0;
            }
            else {
              lVar11 = *(long *)(lVar15 + lVar30);
              puVar20 = auStack_138;
              _swift_beginAccess(lVar11 + PostHogConfig::storageManager,puVar20,0,0);
              pcVar28 = *(char **)(lVar11 + lVar29);
              if (pcVar28 != (char *)0x0) {
                pcVar13 = pcVar28;
                _swift_retain(pcVar28);
                FUN_10015cd34();
                _swift_release(pcVar28);
                puVar24 = local_188;
                pcVar28 = pcVar13;
                puVar9 = local_160;
                goto LAB_100103458;
              }
            }
            puVar24 = local_188;
            puVar9 = local_160;
            puVar20 = (undefined1 *)0xe000000000000000;
          }
LAB_100103458:
          _swift_bridgeObjectRetain(puVar24);
          _swift_bridgeObjectRetain(pcVar14);
          lVar29 = 0x6974706563786524;
          FUN_100149464(0x6974706563786524,0xea00000000006e6f,pcVar28,puVar20,pcVar14,lVar31);
          _swift_bridgeObjectRelease(puVar20);
          if (lVar29 == 0) {
            _swift_bridgeObjectRelease(puVar24);
            _swift_release(local_1b0);
            _swift_bridgeObjectRelease(pcVar14);
            (**(code **)(lVar32 + 8))(lVar31,DVar5.unknown);
            puVar6 = local_168;
          }
          else {
            puVar1 = (undefined8 *)(lVar29 + PostHogEvent::event);
            _swift_beginAccess(puVar1,auStack_108,0,0);
            if ((((undefined *)*puVar1 == (undefined *)0x6f687370616e7324) &&
                ((undefined *)puVar1[1] == (undefined *)0xe900000000000074)) ||
               (bVar4 = Swift::_stringCompareWithSmolCheck
                                  ((undefined *)*puVar1,(undefined *)puVar1[1],
                                   (_StringComparisonResult)0x24), bVar4)) {
              lVar11 = PostHogEvent::properties;
              _swift_beginAccess(lVar29 + PostHogEvent::properties,auStack_120,0,0);
              lVar11 = *(long *)(lVar29 + lVar11);
              if (*(long *)(lVar11 + 0x10) == 0) {
                pvStack_98 = (void *)0x0;
                local_a0 = (char *)0x0;
                local_88 = 0;
                uStack_90 = 0;
                puVar6 = local_168;
              }
              else {
                _swift_bridgeObjectRetain(lVar11);
                lVar25 = 0x6e6f697373657324;
                uVar18 = 0xeb0000000064695f;
                FUN_100071370(0x6e6f697373657324);
                if ((uVar18 & 1) == 0) {
                  pvStack_98 = (void *)0x0;
                  local_a0 = (char *)0x0;
                  local_88 = 0;
                  uStack_90 = 0;
                }
                else {
                  FUN_10000cbfc(*(long *)(lVar11 + 0x38) + lVar25 * 0x20,&local_a0);
                }
                puVar6 = local_168;
                _swift_bridgeObjectRelease(lVar11);
                if (local_88 != 0) {
                  FUN_1000fb4c4(&local_a0,&DAT_100fae668,&DAT_100c2e4a0);
                  lVar15 = *(long *)(lVar15 + _TtC7PostHog10PostHogSDK::replayQueue);
                  if (lVar15 != 0) {
                    _swift_retain(lVar15);
                    FUN_100167d84(lVar29);
                    _swift_release(lVar15);
                  }
                  goto LAB_100103678;
                }
              }
              _swift_bridgeObjectRelease(local_188);
              _swift_release(local_1b0);
              pcVar14 = local_1a0;
              _swift_bridgeObjectRelease(local_1a0);
              (**(code **)(lVar32 + 8))(lVar31,DVar5.unknown);
              FUN_1000fb4c4(&local_a0,&DAT_100fae668,&DAT_100c2e4a0);
            }
            else {
              FUN_100136864(lVar29);
              puVar6 = local_168;
LAB_100103678:
              FUN_1001348c0(lVar29);
              _swift_bridgeObjectRelease(local_188);
              _swift_release(local_1b0);
              pcVar14 = local_1a0;
              _swift_bridgeObjectRelease(local_1a0);
              (**(code **)(lVar32 + 8))(lVar31,DVar5.unknown);
            }
          }
        }
      }
    }
LAB_100102f64:
    if ((DAT_101057340 & 1) == 0) {
      _swift_bridgeObjectRelease(local_178);
    }
    else {
      pcVar28 = &DAT_100fae660;
      FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
      _swift_allocObject();
      pcVar28[0x18] = '\x02';
      pcVar28[0x19] = '\0';
      pcVar28[0x1a] = '\0';
      pcVar28[0x1b] = '\0';
      pcVar28[0x1c] = '\0';
      pcVar28[0x1d] = '\0';
      pcVar28[0x1e] = '\0';
      pcVar28[0x1f] = '\0';
      pcVar28[0x10] = '\x01';
      pcVar28[0x11] = '\0';
      pcVar28[0x12] = '\0';
      pcVar28[0x13] = '\0';
      pcVar28[0x14] = '\0';
      pcVar28[0x15] = '\0';
      pcVar28[0x16] = '\0';
      pcVar28[0x17] = '\0';
      *(undefined **)(pcVar28 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
      pcVar28[0x20] = '-';
      pcVar28[0x21] = '\0';
      pcVar28[0x22] = '\0';
      pcVar28[0x23] = '\0';
      pcVar28[0x24] = '\0';
      pcVar28[0x25] = '\0';
      pcVar28[0x26] = '\0';
      pcVar28[0x27] = -0x30;
      pcVar28[0x28] = '\x10';
      pcVar28[0x29] = '\x15';
      pcVar28[0x2a] = -0x27;
      pcVar28[0x2b] = '\0';
      pcVar28[0x2c] = '\x01';
      pcVar28[0x2d] = '\0';
      pcVar28[0x2e] = '\0';
      pcVar28[0x2f] = -0x80;
      SVar42.bridgeObject = (void *)0x20;
      SVar42.str = pcVar28;
      separator_04.bridgeObject = (void *)0xa;
      separator_04.str = (char *)0xe100000000000000;
      Swift::_print(SVar42,separator_04);
      _swift_bridgeObjectRelease(local_178);
      _swift_release(pcVar28);
    }
    _swift_bridgeObjectRelease(local_198);
    FUN_10003bf2c(puVar6,puVar9);
    FUN_1000fb4c4(local_170,&DAT_100faf508,&DAT_100c2e2e0);
  }
  else {
    _swift_bridgeObjectRetain(lVar11);
    pcVar28 = pcVar14;
    FUN_100103b68(pcVar14,lVar11);
    _swift_bridgeObjectRelease(lVar11);
    if (((ulong)pcVar28 & 1) == 0) goto LAB_100102cfc;
    _swift_bridgeObjectRelease(local_188);
    if (DAT_101057340 == 1) {
      pcVar28 = &DAT_100fae660;
      FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
      _swift_allocObject();
      pcVar28[0x18] = '\x02';
      pcVar28[0x19] = '\0';
      pcVar28[0x1a] = '\0';
      pcVar28[0x1b] = '\0';
      pcVar28[0x1c] = '\0';
      pcVar28[0x1d] = '\0';
      pcVar28[0x1e] = '\0';
      pcVar28[0x1f] = '\0';
      pcVar28[0x10] = '\x01';
      pcVar28[0x11] = '\0';
      pcVar28[0x12] = '\0';
      pcVar28[0x13] = '\0';
      pcVar28[0x14] = '\0';
      pcVar28[0x15] = '\0';
      pcVar28[0x16] = '\0';
      pcVar28[0x17] = '\0';
      *(undefined **)(pcVar28 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
      pcVar28[0x20] = '^';
      pcVar28[0x21] = '\0';
      pcVar28[0x22] = '\0';
      pcVar28[0x23] = '\0';
      pcVar28[0x24] = '\0';
      pcVar28[0x25] = '\0';
      pcVar28[0x26] = '\0';
      pcVar28[0x27] = -0x30;
      pcVar28[0x28] = '0';
      pcVar28[0x29] = '\x16';
      pcVar28[0x2a] = -0x27;
      pcVar28[0x2b] = '\0';
      pcVar28[0x2c] = '\x01';
      pcVar28[0x2d] = '\0';
      pcVar28[0x2e] = '\0';
      pcVar28[0x2f] = -0x80;
      SVar39.bridgeObject = (void *)0x20;
      SVar39.str = pcVar28;
      separator_01.bridgeObject = (void *)0xa;
      separator_01.str = (char *)0xe100000000000000;
      Swift::_print(SVar39,separator_01);
      _swift_bridgeObjectRelease(local_178);
      _swift_bridgeObjectRelease(local_198);
      FUN_10003bf2c(local_168,local_160);
      _swift_bridgeObjectRelease(pcVar14);
      _swift_release(pcVar28);
      goto LAB_100103064;
    }
    _swift_bridgeObjectRelease(local_178);
    _swift_bridgeObjectRelease(local_198);
    FUN_10003bf2c(local_168,local_160);
  }
  _swift_bridgeObjectRelease(pcVar14);
LAB_100103064:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100103740 | FUN_100103740 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100103740(void)

{
  long unaff_x20;
  
  _swift_unknownObjectWeakDestroy(unaff_x20 + 0x10);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x10010378c | FUN_10010378c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10010378c(void)

{
  return ZEXT816(0x100faf398);
}



/* Address: 0x1001037ac | thunk_FUN_1001014c8 */

void thunk_FUN_1001014c8(void)

{
  FUN_1001014c8();
  return;
}



/* Address: 0x1001037b0 | thunk_FUN_100101f30 */

void thunk_FUN_100101f30(void)

{
  FUN_100101f30();
  return;
}



/* Address: 0x1001037b4 | FUN_1001037b4 */

void FUN_1001037b4(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  
  uVar1 = (uint)(param_2 >> 0x3e);
  if (uVar1 != 1) {
    if (uVar1 != 2) {
      return;
    }
    _swift_retain();
  }
  _swift_retain(param_2 & 0x3fffffffffffffff);
  return;
}



/* Address: 0x1001037f4 | FUN_1001037f4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001037f4(long param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  void *pvVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  char *pcVar7;
  undefined8 uVar8;
  _StringGuts extraout_x1;
  char *pcVar9;
  char *pcVar10;
  void *pvVar11;
  long lVar12;
  ID self;
  ID self_00;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined8 uVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String separator;
  char *local_78;
  void *local_70;
  
  self = *(ID *)(param_2 + _TtC7PostHog10PostHogSDK::setupLock);
  objc_stub::lock(self);
  lVar5 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  lVar12 = DAT_100faf528;
  if (DAT_100faf520 != -1) {
    _swift_once(&DAT_100faf520,FUN_100101478);
    lVar12 = DAT_100faf528;
  }
  DAT_100faf528 = lVar12;
  if ((lVar5 == 0) || (lVar5 == param_2)) {
    FUN_100101fd0(param_1);
    self_00 = *(ID *)(lVar12 + 0x10);
    objc_stub::lock(self_00);
    *(undefined1 *)(lVar12 + 0x18) = 0;
    objc_stub::unlock(self_00);
  }
  lVar5 = _TtC7PostHog10PostHogSDK::installedIntegrations;
  pcVar9 = (char *)0x21;
  pvVar11 = (void *)0x0;
  _swift_beginAccess(param_2 + _TtC7PostHog10PostHogSDK::installedIntegrations,&local_78);
  uVar15 = *(ulong *)(param_2 + lVar5);
  uVar6 = *(ulong *)(uVar15 + 0x10);
  if (uVar6 == 0) {
    uVar13 = 0;
  }
  else {
    lVar12 = 0x20;
    uVar16 = 0;
    do {
      uVar14 = uVar16 + 1;
      uVar13 = uVar6;
      if (*(long *)(uVar15 + lVar12) == param_1) {
        if (uVar6 - 1 != uVar16) {
          do {
            lVar12 = lVar12 + 0x10;
            if (uVar6 <= uVar14) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x100103b34);
              (*pcVar4)();
            }
            lVar19 = ((long *)(uVar15 + lVar12))[1];
            lVar17 = *(long *)(uVar15 + lVar12);
            if (lVar17 != param_1) {
              if (uVar14 != uVar16) {
                if (uVar6 <= uVar16) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x100103b38);
                  (*pcVar4)();
                }
                puVar2 = (undefined8 *)(uVar15 + 0x20 + uVar16 * 0x10);
                uVar20 = puVar2[1];
                uVar18 = *puVar2;
                _swift_unknownObjectRetain(uVar18);
                _swift_unknownObjectRetain(lVar17);
                uVar6 = uVar15;
                _swift_isUniquelyReferenced_nonNull_native();
                *(ulong *)(param_2 + lVar5) = uVar15;
                if ((uVar6 & 1) == 0) {
                  FUN_100174974();
                  *(ulong *)(param_2 + lVar5) = uVar15;
                }
                lVar1 = uVar15 + uVar16 * 0x10;
                uVar8 = *(undefined8 *)(lVar1 + 0x20);
                *(long *)(lVar1 + 0x28) = lVar19;
                *(long *)(lVar1 + 0x20) = lVar17;
                _swift_unknownObjectRelease(uVar8);
                *(ulong *)(param_2 + lVar5) = uVar15;
                if (*(ulong *)(uVar15 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x100103b3c);
                  (*pcVar4)();
                }
                uVar8 = *(undefined8 *)(uVar15 + lVar12);
                ((undefined8 *)(uVar15 + lVar12))[1] = uVar20;
                *(undefined8 *)(uVar15 + lVar12) = uVar18;
                _swift_unknownObjectRelease(uVar8);
                *(ulong *)(param_2 + lVar5) = uVar15;
              }
              uVar16 = uVar16 + 1;
            }
            uVar14 = uVar14 + 1;
            uVar6 = *(ulong *)(uVar15 + 0x10);
            uVar13 = uVar14;
          } while (uVar14 != uVar6);
        }
        uVar6 = uVar16;
        if ((long)uVar13 < (long)uVar6) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100103b68);
          (*pcVar4)();
        }
        break;
      }
      lVar12 = lVar12 + 0x10;
      uVar16 = uVar14;
    } while (uVar6 != uVar14);
  }
  FUN_100129c9c(uVar6,uVar13);
  _swift_endAccess(&local_78);
  objc_stub::unlock(self);
  local_78 = (char *)0x0;
  local_70 = (void *)0xe000000000000000;
  Swift::_StringGuts::grow(0x16,extraout_x1);
  _swift_bridgeObjectRelease(local_70);
  local_78 = (char *)0x7461726765746e49;
  local_70 = (void *)0xec000000206e6f69;
  _swift_getObjectType();
  SVar21 = Swift::__typeName(SUB81(param_1,0));
  SVar24.bridgeObject = pvVar11;
  SVar24.str = pcVar9;
  Swift::String::append(SVar21,SVar24);
  _swift_bridgeObjectRelease(SVar21.bridgeObject);
  SVar21.bridgeObject = &DAT_e800000000000000;
  SVar21.str = (char *)0x6465766f6d657220;
  SVar25.bridgeObject = pvVar11;
  SVar25.str = pcVar9;
  Swift::String::append(SVar21,SVar25);
  pvVar3 = local_70;
  pcVar9 = local_78;
  if ((DAT_101057340 & 1) != 0) {
    pcVar7 = &DAT_100fae660;
    FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
    pcVar10 = (char *)0x7;
    _swift_allocObject();
    pcVar7[0x18] = '\x02';
    pcVar7[0x19] = '\0';
    pcVar7[0x1a] = '\0';
    pcVar7[0x1b] = '\0';
    pcVar7[0x1c] = '\0';
    pcVar7[0x1d] = '\0';
    pcVar7[0x1e] = '\0';
    pcVar7[0x1f] = '\0';
    pcVar7[0x10] = '\x01';
    pcVar7[0x11] = '\0';
    pcVar7[0x12] = '\0';
    pcVar7[0x13] = '\0';
    pcVar7[0x14] = '\0';
    pcVar7[0x15] = '\0';
    pcVar7[0x16] = '\0';
    pcVar7[0x17] = '\0';
    local_78 = (char *)0x676f4874736f505b;
    local_70 = (void *)0xea0000000000205d;
    SVar22.bridgeObject = pvVar3;
    SVar22.str = pcVar9;
    SVar26.bridgeObject = pvVar11;
    SVar26.str = pcVar10;
    Swift::String::append(SVar22,SVar26);
    *(undefined **)(pcVar7 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
    *(char **)(pcVar7 + 0x20) = local_78;
    *(void **)(pcVar7 + 0x28) = local_70;
    SVar23.bridgeObject = (void *)0x20;
    SVar23.str = pcVar7;
    separator.bridgeObject = (void *)0xa;
    separator.str = (char *)0xe100000000000000;
    Swift::_print(SVar23,separator);
    _swift_release(pcVar7);
  }
  _swift_bridgeObjectRelease(pvVar3);
  return;
}



/* Address: 0x100103b68 | FUN_100103b68 */

undefined8 FUN_100103b68(long param_1,long param_2)

{
  undefined8 *puVar1;
  _StringGuts _Var2;
  _StringGuts _Var3;
  char *pcVar4;
  char *pcVar5;
  undefined *puVar6;
  code *pcVar7;
  bool bVar8;
  long lVar9;
  undefined *puVar10;
  char **ppcVar11;
  undefined1 *puVar12;
  Hasher into;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined *puVar16;
  ulong uVar17;
  String SVar18;
  undefined1 auStack_b8 [72];
  char *local_70;
  undefined *local_68;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    _swift_bridgeObjectRetain();
    lVar9 = 0x6974706563786524;
    uVar14 = 0xef7473696c5f6e6f;
    FUN_100071370(0x6974706563786524);
    if ((uVar14 & 1) != 0) {
      FUN_10000cbfc(*(long *)(param_1 + 0x38) + lVar9 * 0x20,auStack_b8);
      _swift_bridgeObjectRelease(param_1);
      puVar10 = &DAT_100fae868;
      FUN_1000f7830(&DAT_100fae868,&DAT_100c2e2f0);
      puVar16 = PTR___type_metadata_for_Any_100eae0c0;
      ppcVar11 = &local_70;
      _swift_dynamicCast(ppcVar11,auStack_b8,PTR___type_metadata_for_Any_100eae0c0 + 8,puVar10,6);
      pcVar4 = local_70;
      if (((ulong)ppcVar11 & 1) == 0) {
        return 0;
      }
      param_1 = param_2;
      _swift_bridgeObjectRetain();
      FUN_1000fe2b8();
      _swift_bridgeObjectRelease(param_2);
      uVar14 = *(ulong *)(pcVar4 + 0x10);
      if (uVar14 != 0) {
        uVar17 = 0;
        puVar10 = PTR___type_metadata_for_Swift_String_100eac208;
        do {
          if (*(ulong *)(pcVar4 + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x100103e2c);
            (*pcVar7)();
          }
          lVar9 = *(long *)(pcVar4 + uVar17 * 8 + 0x20);
          if (*(long *)(lVar9 + 0x10) != 0) {
            _swift_bridgeObjectRetain_n(lVar9,2);
            puVar12 = &DAT_65707974;
            uVar13 = 0;
            FUN_100071370(&DAT_65707974);
            if ((uVar13 & 1) == 0) {
              _swift_bridgeObjectRelease_n(lVar9,2);
            }
            else {
              FUN_10000cbfc(*(long *)(lVar9 + 0x38) + (long)puVar12 * 0x20,auStack_b8);
              _swift_bridgeObjectRelease(lVar9);
              ppcVar11 = &local_70;
              _swift_dynamicCast(ppcVar11,auStack_b8,puVar16 + 8,puVar10,6);
              puVar6 = local_68;
              pcVar5 = local_70;
              if (((ulong)ppcVar11 & 1) == 0) {
                _swift_bridgeObjectRelease(lVar9);
              }
              else if (*(long *)(param_1 + 0x10) == 0) {
                _swift_bridgeObjectRelease(lVar9);
                _swift_bridgeObjectRelease(puVar6);
              }
              else {
                Swift::Hasher::init(*(__int64 *)(param_1 + 0x28));
                into.unknown = auStack_b8;
                SVar18.bridgeObject = puVar6;
                SVar18.str = pcVar5;
                Swift::String::hash(into,SVar18);
                uVar13 = Swift::Hasher::_finalize(into);
                uVar15 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
                uVar13 = uVar13 & (uVar15 ^ 0xffffffffffffffff);
                if ((*(ulong *)(param_1 + 0x38 + (uVar13 >> 6) * 8) >> (uVar13 & 0x3f) & 1) != 0) {
                  do {
                    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x30) + uVar13 * 0x10);
                    _Var2.unknown = (undefined *)*puVar1;
                    _Var3.unknown = (undefined *)puVar1[1];
                    if ((_Var2.unknown == pcVar5 && _Var3.unknown == puVar6) ||
                       (bVar8 = Swift::_stringCompareWithSmolCheck
                                          (_Var2,_Var3,(_StringComparisonResult)(__int8)pcVar5),
                       bVar8)) {
                      _swift_bridgeObjectRelease(param_1);
                      _swift_bridgeObjectRelease(pcVar4);
                      _swift_bridgeObjectRelease(puVar6);
                      _swift_bridgeObjectRelease(lVar9);
                      return 1;
                    }
                    uVar13 = uVar13 + 1 & ~uVar15;
                  } while ((*(ulong *)(param_1 + 0x38 + (uVar13 >> 6) * 8) >> (uVar13 & 0x3f) & 1)
                           != 0);
                }
                _swift_bridgeObjectRelease(lVar9);
                _swift_bridgeObjectRelease(puVar6);
                puVar16 = PTR___type_metadata_for_Any_100eae0c0;
                puVar10 = PTR___type_metadata_for_Swift_String_100eac208;
              }
            }
          }
          uVar17 = uVar17 + 1;
        } while (uVar17 != uVar14);
      }
      _swift_bridgeObjectRelease(pcVar4);
    }
    _swift_bridgeObjectRelease(param_1);
  }
  return 0;
}



/* Address: 0x100103e2c | FUN_100103e2c */

void FUN_100103e2c(long param_1,undefined8 param_2,undefined8 param_3,uint param_4,long *param_5)

{
  ulong *puVar1;
  ulong uVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_110 [32];
  undefined1 auStack_f0 [32];
  ulong local_d0;
  ulong local_c8;
  undefined1 auStack_c0 [32];
  long local_a0;
  ulong *puStack_98;
  ulong local_90;
  undefined8 uStack_88;
  ulong local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  uVar6 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  local_90 = ~uVar6;
  puStack_98 = (ulong *)(param_1 + 0x40);
  uVar6 = -uVar6;
  local_80 = 0xffffffffffffffff;
  if (uVar6 < 0x40) {
    local_80 = ~(-1L << (uVar6 & 0x3f));
  }
  uStack_88 = 0;
  local_80 = local_80 & *puStack_98;
  local_a0 = param_1;
  uStack_78 = param_2;
  local_70 = param_3;
  _swift_bridgeObjectRetain();
  _swift_retain(param_3);
  FUN_100131f64(&local_d0);
  uVar2 = local_c8;
  uVar6 = local_d0;
  if (local_c8 == 0) goto LAB_100104120;
  FUN_100011080(auStack_c0,auStack_f0);
  lVar9 = *param_5;
  uVar4 = uVar6;
  uVar5 = uVar2;
  FUN_100071370();
  lVar7 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar5 & 1;
  lVar10 = lVar7 + uVar8;
  if (SCARRY8(lVar7,uVar8)) {
LAB_10010415c:
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100104160);
    (*pcVar3)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar10) {
    FUN_100170ddc(lVar10,param_4 & 1);
    uVar4 = uVar6;
    uVar8 = uVar2;
    FUN_100071370();
    if (((uint)uVar5 & 1) != ((uint)uVar8 & 1)) {
LAB_100103f30:
      Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100103f40);
      (*pcVar3)();
    }
LAB_100103f44:
    if ((uVar5 & 1) != 0) goto LAB_100103f48;
LAB_100103fa0:
    lVar7 = *param_5;
    lVar10 = lVar7 + (uVar4 >> 6) * 8;
    *(ulong *)(lVar10 + 0x40) = *(ulong *)(lVar10 + 0x40) | 1L << (uVar4 & 0x3f);
    puVar1 = (ulong *)(*(long *)(lVar7 + 0x30) + uVar4 * 0x10);
    *puVar1 = uVar6;
    puVar1[1] = uVar2;
    FUN_100011080(auStack_f0,*(long *)(lVar7 + 0x38) + uVar4 * 0x20);
    if (SCARRY8(*(long *)(lVar7 + 0x10),1)) {
LAB_100104160:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100104164);
      (*pcVar3)();
    }
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
  }
  else {
    if ((param_4 & 1) != 0) goto LAB_100103f44;
    FUN_10017057c();
    if ((uVar5 & 1) == 0) goto LAB_100103fa0;
LAB_100103f48:
    lVar10 = *param_5;
    FUN_10000cbfc(auStack_f0,auStack_110);
    _swift_bridgeObjectRelease(uVar2);
    FUN_100004594(auStack_f0);
    lVar10 = *(long *)(lVar10 + 0x38) + uVar4 * 0x20;
    FUN_100004594(lVar10);
    FUN_100011080(auStack_110,lVar10);
  }
  FUN_100131f64(&local_d0);
  uVar6 = local_d0;
  uVar2 = local_c8;
  while (uVar2 != 0) {
    local_d0 = uVar6;
    local_c8 = uVar2;
    FUN_100011080(auStack_c0,auStack_f0);
    lVar9 = *param_5;
    uVar4 = uVar6;
    uVar5 = uVar2;
    FUN_100071370();
    lVar7 = *(long *)(lVar9 + 0x10);
    uVar8 = (ulong)~(uint)uVar5 & 1;
    lVar10 = lVar7 + uVar8;
    if (SCARRY8(lVar7,uVar8)) goto LAB_10010415c;
    if (*(long *)(lVar9 + 0x18) < lVar10) {
      FUN_100170ddc(lVar10,1);
      uVar4 = uVar6;
      uVar8 = uVar2;
      FUN_100071370();
      if (((uint)uVar5 & 1) != ((uint)uVar8 & 1)) goto LAB_100103f30;
    }
    if ((uVar5 & 1) == 0) {
      lVar7 = *param_5;
      lVar10 = lVar7 + (uVar4 >> 6) * 8;
      *(ulong *)(lVar10 + 0x40) = *(ulong *)(lVar10 + 0x40) | 1L << (uVar4 & 0x3f);
      puVar1 = (ulong *)(*(long *)(lVar7 + 0x30) + uVar4 * 0x10);
      *puVar1 = uVar6;
      puVar1[1] = uVar2;
      FUN_100011080(auStack_f0,*(long *)(lVar7 + 0x38) + uVar4 * 0x20);
      if (SCARRY8(*(long *)(lVar7 + 0x10),1)) goto LAB_100104160;
      *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    }
    else {
      lVar10 = *param_5;
      FUN_10000cbfc(auStack_f0,auStack_110);
      _swift_bridgeObjectRelease(uVar2);
      FUN_100004594(auStack_f0);
      lVar10 = *(long *)(lVar10 + 0x38) + uVar4 * 0x20;
      FUN_100004594(lVar10);
      FUN_100011080(auStack_110,lVar10);
    }
    FUN_100131f64(&local_d0);
    uVar6 = local_d0;
    uVar2 = local_c8;
  }
LAB_100104120:
  FUN_10000c650(local_a0,puStack_98,local_90,uStack_88,local_80);
  _swift_release(param_3);
  return;
}



/* Address: 0x100104164 | FUN_100104164 */

undefined8 FUN_100104164(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100faf508;
  FUN_1000f7830(&DAT_100faf508,&DAT_100c2e2e0);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1001041b4 | FUN_1001041b4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001041b4(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x1001041e0 | FUN_1001041e0 */

void FUN_1001041e0(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1001020ec(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1001041ec | thunk_FUN_100131450 */

void thunk_FUN_100131450(void)

{
  FUN_100131450();
  return;
}



/* Address: 0x1001041f0 | thunk_FUN_100131460 */

void thunk_FUN_100131460(void)

{
  FUN_100131460();
  return;
}



/* Address: 0x1001041f4 | FUN_1001041f4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

char * FUN_1001041f4(char *param_1,undefined8 param_2,undefined8 param_3,void *param_4)

{
  char *pcVar1;
  void *pvVar2;
  char *pcVar3;
  ID IVar4;
  undefined *puVar5;
  char *pcVar6;
  undefined *extraout_x1;
  _StringGuts _Var7;
  char **ppcVar8;
  char *pcVar9;
  undefined *puVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  String separator;
  String separator_00;
  String SVar16;
  String SVar17;
  String separator_01;
  char *local_68;
  char *local_60;
  void *local_58;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  pcVar3 = param_1;
  FUN_10010a39c();
  if (((ulong)pcVar3 & 1) == 0) {
    local_60 = (char *)0x0;
    ppcVar8 = &local_60;
    IVar4 = objc_stub::enableCrashReporterAndReturnError_((ID)param_1);
    if ((int)IVar4 == 0) {
      pcVar3 = local_60;
      _Var7.unknown = extraout_x1;
      Foundation::__convertNSErrorToError();
      _swift_willThrow(0);
      local_60 = (char *)0x0;
      local_58 = (void *)0xe000000000000000;
      Swift::_StringGuts::grow(0x26,_Var7);
      SVar13.bridgeObject = (void *)0x8000000100d91760;
      SVar13.str = (char *)0xd000000000000024;
      SVar16.bridgeObject = param_4;
      SVar16.str = (char *)ppcVar8;
      Swift::String::append(SVar13,SVar16);
      puVar5 = &DAT_100faf510;
      local_68 = pcVar3;
      FUN_1000f7830(&DAT_100faf510,&DAT_100c2e820);
      puVar10 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
      Swift::__print_unlocked
                (&local_68,&local_60,puVar5,
                 PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
                 PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
                );
      pvVar2 = local_58;
      pcVar1 = local_60;
      if (DAT_101057340 != '\x01') {
        _swift_bridgeObjectRelease(local_58);
        _swift_errorRelease(pcVar3);
        goto LAB_100104524;
      }
      pcVar6 = &DAT_100fae660;
      FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
      pcVar9 = (char *)0x7;
      _swift_allocObject();
      pcVar6[0x18] = '\x02';
      pcVar6[0x19] = '\0';
      pcVar6[0x1a] = '\0';
      pcVar6[0x1b] = '\0';
      pcVar6[0x1c] = '\0';
      pcVar6[0x1d] = '\0';
      pcVar6[0x1e] = '\0';
      pcVar6[0x1f] = '\0';
      pcVar6[0x10] = '\x01';
      pcVar6[0x11] = '\0';
      pcVar6[0x12] = '\0';
      pcVar6[0x13] = '\0';
      pcVar6[0x14] = '\0';
      pcVar6[0x15] = '\0';
      pcVar6[0x16] = '\0';
      pcVar6[0x17] = '\0';
      local_60 = (char *)0x676f4874736f505b;
      local_58 = (void *)0xea0000000000205d;
      SVar14.bridgeObject = pvVar2;
      SVar14.str = pcVar1;
      SVar17.bridgeObject = puVar10;
      SVar17.str = pcVar9;
      Swift::String::append(SVar14,SVar17);
      *(undefined **)(pcVar6 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
      *(char **)(pcVar6 + 0x20) = local_60;
      *(void **)(pcVar6 + 0x28) = local_58;
      SVar15.bridgeObject = (void *)0x20;
      SVar15.str = pcVar6;
      separator_01.bridgeObject = (void *)0xa;
      separator_01.str = (char *)0xe100000000000000;
      Swift::_print(SVar15,separator_01);
      _swift_bridgeObjectRelease(pvVar2);
      _swift_errorRelease(pcVar3);
      pcVar3 = pcVar6;
    }
    else {
      if (DAT_101057340 != '\x01') {
        if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_48) {
          return local_60;
        }
        goto LAB_100104554;
      }
      pcVar3 = &DAT_100fae660;
      FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
      _swift_allocObject();
      pcVar3[0x18] = '\x02';
      pcVar3[0x19] = '\0';
      pcVar3[0x1a] = '\0';
      pcVar3[0x1b] = '\0';
      pcVar3[0x1c] = '\0';
      pcVar3[0x1d] = '\0';
      pcVar3[0x1e] = '\0';
      pcVar3[0x1f] = '\0';
      pcVar3[0x10] = '\x01';
      pcVar3[0x11] = '\0';
      pcVar3[0x12] = '\0';
      pcVar3[0x13] = '\0';
      pcVar3[0x14] = '\0';
      pcVar3[0x15] = '\0';
      pcVar3[0x16] = '\0';
      pcVar3[0x17] = '\0';
      *(undefined **)(pcVar3 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
      pcVar3[0x20] = '0';
      pcVar3[0x21] = '\0';
      pcVar3[0x22] = '\0';
      pcVar3[0x23] = '\0';
      pcVar3[0x24] = '\0';
      pcVar3[0x25] = '\0';
      pcVar3[0x26] = '\0';
      pcVar3[0x27] = -0x30;
      pcVar3[0x28] = -0x70;
      pcVar3[0x29] = '\x17';
      pcVar3[0x2a] = -0x27;
      pcVar3[0x2b] = '\0';
      pcVar3[0x2c] = '\x01';
      pcVar3[0x2d] = '\0';
      pcVar3[0x2e] = '\0';
      pcVar3[0x2f] = -0x80;
      SVar12.bridgeObject = (void *)0x20;
      SVar12.str = pcVar3;
      separator_00.bridgeObject = (void *)0xa;
      separator_00.str = (char *)0xe100000000000000;
      Swift::_print(SVar12,separator_00);
    }
    _swift_release(pcVar3);
  }
  else if (DAT_101057340 == '\x01') {
    pcVar3 = &DAT_100fae660;
    FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
    _swift_allocObject();
    pcVar3[0x18] = '\x02';
    pcVar3[0x19] = '\0';
    pcVar3[0x1a] = '\0';
    pcVar3[0x1b] = '\0';
    pcVar3[0x1c] = '\0';
    pcVar3[0x1d] = '\0';
    pcVar3[0x1e] = '\0';
    pcVar3[0x1f] = '\0';
    pcVar3[0x10] = '\x01';
    pcVar3[0x11] = '\0';
    pcVar3[0x12] = '\0';
    pcVar3[0x13] = '\0';
    pcVar3[0x14] = '\0';
    pcVar3[0x15] = '\0';
    pcVar3[0x16] = '\0';
    pcVar3[0x17] = '\0';
    *(undefined **)(pcVar3 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
    pcVar3[0x20] = 's';
    pcVar3[0x21] = '\0';
    pcVar3[0x22] = '\0';
    pcVar3[0x23] = '\0';
    pcVar3[0x24] = '\0';
    pcVar3[0x25] = '\0';
    pcVar3[0x26] = '\0';
    pcVar3[0x27] = -0x30;
    pcVar3[0x28] = -0x30;
    pcVar3[0x29] = '\x17';
    pcVar3[0x2a] = -0x27;
    pcVar3[0x2b] = '\0';
    pcVar3[0x2c] = '\x01';
    pcVar3[0x2d] = '\0';
    pcVar3[0x2e] = '\0';
    pcVar3[0x2f] = -0x80;
    SVar11.bridgeObject = (void *)0x20;
    SVar11.str = pcVar3;
    separator.bridgeObject = (void *)0xa;
    separator.str = (char *)0xe100000000000000;
    Swift::_print(SVar11,separator);
    if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_48) {
      _swift_release(pcVar3);
      return pcVar3;
    }
    goto LAB_100104554;
  }
LAB_100104524:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_48) {
    return pcVar3;
  }
LAB_100104554:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100104558 | FUN_100104558 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100104558(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x10010457c | FUN_10010457c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10010457c(Data param_1)

{
  NSData *pNVar1;
  ID self;
  long unaff_x20;
  
  self = *(ID *)(unaff_x20 + 0x10);
  pNVar1 = Foundation::Data::_bridgeToObjectiveC(param_1);
  objc_stub::setCustomData_(self,pNVar1);
  return 0;
}



/* Address: 0x1001045b0 | FUN_1001045b0 */

void FUN_1001045b0(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x1001045d4 | FUN_1001045d4 */

void FUN_1001045d4(void)

{
  FUN_100101d08();
  return;
}



/* Address: 0x1001045dc | FUN_1001045dc */

void FUN_1001045dc(void)

{
  FUN_100101d94();
  return;
}



/* Address: 0x1001045e4 | FUN_1001045e4 */

void FUN_1001045e4(void)

{
  long unaff_x20;
  
  _swift_unknownObjectWeakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x100104608 | FUN_100104608 */

void FUN_100104608(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x100104634 | FUN_100104634 */

void FUN_100104634(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100101e20(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x10010463c | thunk_FUN_1001045b0 */

void thunk_FUN_1001045b0(void)

{
  FUN_1001045b0();
  return;
}



/* Address: 0x100104640 | _TtC7PostHog26PostHogErrorTrackingConfig::autoCapture */

/* Function Stack Size: 0x10 bytes */

bool _TtC7PostHog26PostHogErrorTrackingConfig::autoCapture(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + _autoCapture);
}



/* Address: 0x100104650 | FUN_100104650 */

undefined1 FUN_100104650(void)

{
  long unaff_x20;
  
  return *(undefined1 *)(unaff_x20 + _TtC7PostHog26PostHogErrorTrackingConfig::_autoCapture);
}



/* Address: 0x100104660 | _TtC7PostHog26PostHogErrorTrackingConfig::setAutoCapture: */

/* Function Stack Size: 0x14 bytes */

void _TtC7PostHog26PostHogErrorTrackingConfig::setAutoCapture_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + _autoCapture) = (char)param_3;
  return;
}



/* Address: 0x100104670 | FUN_100104670 */

void FUN_100104670(undefined1 param_1)

{
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + _TtC7PostHog26PostHogErrorTrackingConfig::_autoCapture) = param_1;
  return;
}



/* Address: 0x100104680 | FUN_100104680 */

code * FUN_100104680(long *param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = _TtC7PostHog26PostHogErrorTrackingConfig::_autoCapture;
  *param_1 = unaff_x20;
  param_1[1] = lVar1;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(unaff_x20 + lVar1);
  return FUN_1001046a4;
}



/* Address: 0x1001046a4 | FUN_1001046a4 */

void FUN_1001046a4(long *param_1)

{
  *(char *)(*param_1 + param_1[1]) = (char)param_1[2];
  return;
}



/* Address: 0x1001046b4 | _TtC7PostHog26PostHogErrorTrackingConfig::inAppIncludes */

/* Function Stack Size: 0x10 bytes */

ID _TtC7PostHog26PostHogErrorTrackingConfig::inAppIncludes(ID param_1,SEL param_2)

{
  FUN_100104a80(param_1,param_2,&inAppIncludes);
  return param_1;
}



/* Address: 0x1001046c0 | FUN_1001046c0 */

void FUN_1001046c0(void)

{
  FUN_100104af0(&_TtC7PostHog26PostHogErrorTrackingConfig::inAppIncludes);
  return;
}



/* Address: 0x1001046cc | _TtC7PostHog26PostHogErrorTrackingConfig::setInAppIncludes: */

/* Function Stack Size: 0x18 bytes */

void _TtC7PostHog26PostHogErrorTrackingConfig::setInAppIncludes_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100104b3c();
  return;
}



/* Address: 0x1001046d8 | FUN_1001046d8 */

void FUN_1001046d8(undefined8 param_1)

{
  FUN_100104bb0(param_1,&_TtC7PostHog26PostHogErrorTrackingConfig::inAppIncludes);
  return;
}


