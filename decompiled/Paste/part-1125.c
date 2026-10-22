/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100bb89c0 | FUN_100bb89c0 */

void FUN_100bb89c0(void)

{
  FUN_100b94100();
  (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  FUN_100b94108();
  FUN_100b94114();
  return;
}



/* Address: 0x100bb89f0 | FUN_100bb89f0 */

void FUN_100bb89f0(void)

{
  FUN_100bbb48c(_TtC6Sentry19SentryReplayOptions::_networkResponseHeaders);
  return;
}



/* Address: 0x100bb89fc | _TtC6Sentry19SentryReplayOptions::setNetworkResponseHeaders: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry19SentryReplayOptions::setNetworkResponseHeaders_(ID param_1,SEL param_2,ID param_3)

{
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  FUN_100bb8a48(param_3);
  return;
}



/* Address: 0x100bb8a48 | FUN_100bb8a48 */

void FUN_100bb8a48(undefined8 param_1)

{
  FUN_100bb8a5c(param_1,&DAT_101043de8,FUN_100bb8b90);
  return;
}



/* Address: 0x100bb8a5c | FUN_100bb8a5c */

void FUN_100bb8a5c(undefined8 param_1,undefined8 param_2,code *UNRECOVERED_JUMPTABLE)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _swift_getObjectType();
  puVar1 = &DAT_101044958;
  FUN_100b6730c(&DAT_101044958);
  _swift_initStaticObject();
  uVar2 = param_1;
  FUN_100bb86e8(param_1,puVar1);
  _swift_bridgeObjectRelease(param_1);
                    /* WARNING: Could not recover jumptable at 0x000100bb8ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar2);
  return;
}



/* Address: 0x100bb8ad4 | FUN_100bb8ad4 */

void FUN_100bb8ad4(undefined8 *param_1)

{
  _swift_bridgeObjectRetain(*param_1);
  FUN_100bb8a48();
  return;
}



/* Address: 0x100bb8afc | FUN_100bb8afc */

void FUN_100bb8afc(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + _TtC6Sentry19SentryReplayOptions::_networkResponseHeaders);
  param_1[1] = unaff_x20;
  _swift_bridgeObjectRetain();
  FUN_100b56e88(FUN_100bb8b38,param_1);
  return;
}



/* Address: 0x100bb8b38 | FUN_100bb8b38 */

void FUN_100bb8b38(undefined8 param_1,undefined8 param_2)

{
  FUN_100bb8b44(param_1,param_2,FUN_100bb8a48);
  return;
}



/* Address: 0x100bb8b44 | FUN_100bb8b44 */

void FUN_100bb8b44(undefined8 *param_1,uint param_2,code *param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  if ((param_2 & 1) != 0) {
    _swift_bridgeObjectRetain(uVar1);
    (*param_3)();
    FUN_100bbb43c(uVar1);
    return;
  }
  (*param_3)(uVar1);
  return;
}



/* Address: 0x100bb8b90 | FUN_100bb8b90 */

void FUN_100bb8b90(void)

{
  FUN_100bbb37c();
  return;
}



/* Address: 0x100bb8b9c | _TtC6Sentry19SentryReplayOptions::replayBitRate */

/* Function Stack Size: 0x10 bytes */

long_long _TtC6Sentry19SentryReplayOptions::replayBitRate(ID param_1,SEL param_2)

{
  FUN_100bb8bbc();
  return param_1;
}



/* Address: 0x100bb8bbc | FUN_100bb8bbc */

void FUN_100bb8bbc(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = _TtC6Sentry19SentryReplayOptions::quality;
  FUN_100b78c58();
  lVar3 = *(long *)(unaff_x20 + lVar1) * 20000;
  if (SUB168(SEXT816(*(long *)(unaff_x20 + lVar1)) * SEXT816(20000),8) != lVar3 >> 0x3f) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100bb8c08);
    (*pcVar2)();
  }
  if (!SCARRY8(lVar3,20000)) {
    FUN_100b6f9fc(lVar3 + 20000);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100bb8c0c);
  (*pcVar2)();
}



/* Address: 0x100bb8c0c | _TtC6Sentry19SentryReplayOptions::sizeScale */

/* Function Stack Size: 0x10 bytes */

float _TtC6Sentry19SentryReplayOptions::sizeScale(ID param_1,SEL param_2)

{
  float in_s0;
  
  FUN_100bb8c2c();
  return in_s0;
}



/* Address: 0x100bb8c2c | FUN_100bb8c2c */

void FUN_100bb8c2c(void)

{
  long lVar1;
  long unaff_x20;
  undefined4 uVar2;
  
  lVar1 = _TtC6Sentry19SentryReplayOptions::quality;
  FUN_100b78c58();
  uVar2 = 0x3f4ccccd;
  if (*(long *)(unaff_x20 + lVar1) != 0) {
    uVar2 = 0x3f800000;
  }
  FUN_100b6f9fc(uVar2);
  return;
}



/* Address: 0x100bb8c68 | _TtC6Sentry19SentryReplayOptions::frameRate */

/* Function Stack Size: 0x10 bytes */

unsigned_long_long _TtC6Sentry19SentryReplayOptions::frameRate(ID param_1,SEL param_2)

{
  FUN_100bb8c88();
  return param_1;
}



/* Address: 0x100bb8c88 | FUN_100bb8c88 */

void FUN_100bb8c88(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = _TtC6Sentry19SentryReplayOptions::frameRate;
  FUN_100b78c58();
  FUN_100b6f9fc(*(undefined8 *)(unaff_x20 + lVar1));
  return;
}



/* Address: 0x100bb8cb0 | _TtC6Sentry19SentryReplayOptions::setFrameRate: */

/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry19SentryReplayOptions::setFrameRate_
               (ID param_1,SEL param_2,unsigned_long_long param_3)

{
  FUN_100bb8cd4(param_3);
  return;
}



/* Address: 0x100bb8cd4 | FUN_100bb8cd4 */

void FUN_100bb8cd4(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = _TtC6Sentry19SentryReplayOptions::frameRate;
  FUN_100b78c6c();
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  FUN_100bb8d08();
  FUN_100b78c90();
  return;
}



/* Address: 0x100bb8d08 | FUN_100bb8d08 */

void FUN_100bb8d08(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _TtC6Sentry19SentryReplayOptions::frameRate;
  _swift_beginAccess(unaff_x20 + _TtC6Sentry19SentryReplayOptions::frameRate,auStack_38,1,0);
  if (*(long *)(unaff_x20 + lVar1) == 0) {
    *(undefined8 *)(unaff_x20 + lVar1) = 1;
  }
  return;
}



/* Address: 0x100bb8d54 | FUN_100bb8d54 */

void FUN_100bb8d54(long param_1)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  *(long *)(param_1 + 0x18) = unaff_x20;
  lVar1 = _TtC6Sentry19SentryReplayOptions::frameRate;
  FUN_100b78c80();
  FUN_100b56e88(FUN_100bb8d84,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100bb8d84 | FUN_100bb8d84 */

void FUN_100bb8d84(undefined8 param_1,ulong param_2)

{
  _swift_endAccess();
  if ((param_2 & 1) == 0) {
    FUN_100bb8d08();
  }
  FUN_100b56e88();
  return;
}



/* Address: 0x100bb8db0 | _TtC6Sentry19SentryReplayOptions::errorReplayDuration */

/* Function Stack Size: 0x10 bytes */

double _TtC6Sentry19SentryReplayOptions::errorReplayDuration(ID param_1,SEL param_2)

{
  double in_d0;
  
  FUN_100bb8dd0();
  return in_d0;
}



/* Address: 0x100bb8dd0 | FUN_100bb8dd0 */

void FUN_100bb8dd0(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = _TtC6Sentry19SentryReplayOptions::errorReplayDuration;
  FUN_100b78c58();
  FUN_100b6f9fc(*(undefined8 *)(unaff_x20 + lVar1));
  return;
}



/* Address: 0x100bb8df8 | _TtC6Sentry19SentryReplayOptions::setErrorReplayDuration: */

/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry19SentryReplayOptions::setErrorReplayDuration_
               (ID param_1,SEL param_2,double param_3)

{
  FUN_100bb8e18();
  return;
}



/* Address: 0x100bb8e18 | FUN_100bb8e18 */

void FUN_100bb8e18(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = _TtC6Sentry19SentryReplayOptions::errorReplayDuration;
  FUN_100b94020(unaff_x20 + _TtC6Sentry19SentryReplayOptions::errorReplayDuration);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  FUN_100b940d0();
  return;
}



/* Address: 0x100bb8e4c | FUN_100bb8e4c */

void FUN_100bb8e4c(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = _TtC6Sentry19SentryReplayOptions::errorReplayDuration;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100bb8e78 | _TtC6Sentry19SentryReplayOptions::sessionSegmentDuration */

/* Function Stack Size: 0x10 bytes */

double _TtC6Sentry19SentryReplayOptions::sessionSegmentDuration(ID param_1,SEL param_2)

{
  double in_d0;
  
  FUN_100bb8e98();
  return in_d0;
}



/* Address: 0x100bb8e98 | FUN_100bb8e98 */

void FUN_100bb8e98(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = _TtC6Sentry19SentryReplayOptions::sessionSegmentDuration;
  FUN_100b78c58();
  FUN_100b6f9fc(*(undefined8 *)(unaff_x20 + lVar1));
  return;
}



/* Address: 0x100bb8ec0 | _TtC6Sentry19SentryReplayOptions::setSessionSegmentDuration: */

/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry19SentryReplayOptions::setSessionSegmentDuration_
               (ID param_1,SEL param_2,double param_3)

{
  FUN_100bb8ee0();
  return;
}



/* Address: 0x100bb8ee0 | FUN_100bb8ee0 */

void FUN_100bb8ee0(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = _TtC6Sentry19SentryReplayOptions::sessionSegmentDuration;
  FUN_100b94020(unaff_x20 + _TtC6Sentry19SentryReplayOptions::sessionSegmentDuration);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  FUN_100b940d0();
  return;
}



/* Address: 0x100bb8f14 | FUN_100bb8f14 */

void FUN_100bb8f14(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = _TtC6Sentry19SentryReplayOptions::sessionSegmentDuration;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100bb8f40 | _TtC6Sentry19SentryReplayOptions::maximumDuration */

/* Function Stack Size: 0x10 bytes */

double _TtC6Sentry19SentryReplayOptions::maximumDuration(ID param_1,SEL param_2)

{
  double in_d0;
  
  FUN_100bb8f60();
  return in_d0;
}



/* Address: 0x100bb8f60 | FUN_100bb8f60 */

void FUN_100bb8f60(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = _TtC6Sentry19SentryReplayOptions::maximumDuration;
  FUN_100b78c58();
  FUN_100b6f9fc(*(undefined8 *)(unaff_x20 + lVar1));
  return;
}



/* Address: 0x100bb8f88 | _TtC6Sentry19SentryReplayOptions::setMaximumDuration: */

/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry19SentryReplayOptions::setMaximumDuration_(ID param_1,SEL param_2,double param_3)

{
  FUN_100bb8fa8();
  return;
}



/* Address: 0x100bb8fa8 | FUN_100bb8fa8 */

void FUN_100bb8fa8(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = _TtC6Sentry19SentryReplayOptions::maximumDuration;
  FUN_100b94020(unaff_x20 + _TtC6Sentry19SentryReplayOptions::maximumDuration);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  FUN_100b940d0();
  return;
}



/* Address: 0x100bb8fdc | FUN_100bb8fdc */

void FUN_100bb8fdc(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = _TtC6Sentry19SentryReplayOptions::maximumDuration;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100bb9008 | _TtC6Sentry19SentryReplayOptions::sdkInfo */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry19SentryReplayOptions::sdkInfo(ID param_1,SEL param_2)

{
  NSDictionary *pNVar1;
  
  FUN_100bb9068();
  if (param_1 == 0) {
    pNVar1 = (NSDictionary *)0x0;
  }
  else {
    pNVar1 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(param_1);
  }
  return (ID)pNVar1;
}



/* Address: 0x100bb9068 | FUN_100bb9068 */

void FUN_100bb9068(void)

{
  FUN_100bbb48c(_TtC6Sentry19SentryReplayOptions::sdkInfo);
  return;
}



/* Address: 0x100bb9074 | _TtC6Sentry19SentryReplayOptions::setSdkInfo: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry19SentryReplayOptions::setSdkInfo_(ID param_1,SEL param_2,ID param_3)

{
  Dictionary<undefined,undefined> DVar1;
  
  if (param_3 == 0) {
    DVar1.unknown = (undefined *)0x0;
  }
  else {
    DVar1 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  }
  FUN_100bb90e4(DVar1.unknown);
  return;
}



/* Address: 0x100bb90e4 | FUN_100bb90e4 */

void FUN_100bb90e4(void)

{
  FUN_100bbb37c();
  return;
}



/* Address: 0x100bb90f0 | _TtC6Sentry19SentryReplayOptions::networkDetailHasUrls */

/* Function Stack Size: 0x10 bytes */

bool _TtC6Sentry19SentryReplayOptions::networkDetailHasUrls(ID param_1,SEL param_2)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  FUN_100bb9114();
  return uVar1 & 1;
}



/* Address: 0x100bb9114 | FUN_100bb9114 */

void FUN_100bb9114(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = _TtC6Sentry19SentryReplayOptions::networkDetailAllowUrls;
  FUN_100b78c58();
  FUN_100b6f9fc(*(long *)(*(long *)(unaff_x20 + lVar1) + 0x10) != 0);
  return;
}



/* Address: 0x100bb9148 | FUN_100bb9148 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100bb9148(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  ID IVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined8 uVar6;
  __int64 _Var7;
  ID IVar8;
  long lVar9;
  long unaff_x20;
  long lVar10;
  long lVar11;
  _NSRange _Var12;
  ID local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  ID local_a8;
  undefined8 uStack_a0;
  byte local_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar9 = _TtC6Sentry19SentryReplayOptions::networkDetailAllowUrls;
  FUN_100b78ca0(unaff_x20 + _TtC6Sentry19SentryReplayOptions::networkDetailAllowUrls,auStack_78);
  lVar11 = _TtC6Sentry19SentryReplayOptions::networkDetailDenyUrls;
  if (*(long *)(*(long *)(unaff_x20 + lVar9) + 0x10) != 0) {
    FUN_100b78ca0(unaff_x20 + _TtC6Sentry19SentryReplayOptions::networkDetailDenyUrls,auStack_90);
    lVar10 = *(long *)(*(long *)(unaff_x20 + lVar11) + 0x10);
    if (lVar10 != 0) {
      lVar11 = *(long *)(unaff_x20 + lVar11) + 0x20;
      _swift_bridgeObjectRetain();
      puVar2 = PTR___type_metadata_for_Swift_String_100eac208;
      do {
        uVar6 = *(undefined8 *)(lVar11 + 0x18);
        lVar1 = *(long *)(lVar11 + 0x20);
        FUN_100004640(lVar11,uVar6);
        (**(code **)(lVar1 + 8))(&local_a8,uVar6,lVar1);
        uVar4 = uStack_a0;
        IVar3 = local_a8;
        if ((local_98 & 1) == 0) {
          local_c8 = local_a8;
          uStack_c0 = uStack_a0;
          local_b8 = param_1;
          uStack_b0 = param_2;
          FUN_100008378();
          bVar5 = (extension_Foundation)::Swift::StringProtocol::_contains
                            (&local_c8,puVar2,puVar2,uVar6,uVar6);
          FUN_100b7a270(IVar3,uVar4,0);
          if (bVar5) goto LAB_100bb9408;
        }
        else {
          FUN_100bbb3dc();
          FUN_100b6730c(&DAT_1010458d0);
          FUN_100bba890();
          FUN_100008378();
          FUN_100bbb494();
          _Var12 = (extension_Foundation)::__C::_NSRange::_init();
          _Var7 = _Var12.location;
          FUN_100bbb448();
          IVar8 = _objc_msgSend(IVar3,"firstMatchInString:options:range:",_Var7,0,_Var12.location,
                                _Var12.length);
          FUN_100b7a270(IVar3,uVar4,1);
          if (IVar8 != 0) {
            FUN_100bbb3d4();
            FUN_100b6f868();
            return 0;
          }
        }
        lVar11 = lVar11 + 0x28;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      FUN_100bbb3d4();
    }
    lVar9 = *(long *)(unaff_x20 + lVar9);
    lVar11 = *(long *)(lVar9 + 0x10);
    if (lVar11 != 0) {
      lVar9 = lVar9 + 0x20;
      _swift_bridgeObjectRetain();
      puVar2 = PTR___type_metadata_for_Swift_String_100eac208;
      do {
        uVar6 = *(undefined8 *)(lVar9 + 0x18);
        lVar10 = *(long *)(lVar9 + 0x20);
        FUN_100004640(lVar9,uVar6);
        (**(code **)(lVar10 + 8))(&local_a8,uVar6,lVar10);
        uVar4 = uStack_a0;
        IVar3 = local_a8;
        if ((local_98 & 1) == 0) {
          local_c8 = local_a8;
          uStack_c0 = uStack_a0;
          local_b8 = param_1;
          uStack_b0 = param_2;
          FUN_100008378();
          bVar5 = (extension_Foundation)::Swift::StringProtocol::_contains
                            (&local_c8,puVar2,puVar2,uVar6,uVar6);
          FUN_100b7a270(IVar3,uVar4,0);
          if (bVar5) {
            FUN_100bbb3d4();
            return 1;
          }
        }
        else {
          FUN_100bbb3dc();
          FUN_100b6730c(&DAT_1010458d0);
          FUN_100bba890();
          FUN_100008378();
          FUN_100bbb494();
          _Var12 = (extension_Foundation)::__C::_NSRange::_init();
          _Var7 = _Var12.location;
          FUN_100bbb448();
          IVar8 = _objc_msgSend(IVar3,"firstMatchInString:options:range:",_Var7,0,_Var12.location,
                                _Var12.length);
          FUN_100b7a270(IVar3,uVar4,1);
          if (IVar8 != 0) {
            FUN_100bbb3d4();
            FUN_100b6f868();
            return 1;
          }
        }
        lVar9 = lVar9 + 0x28;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
LAB_100bb9408:
      FUN_100bbb3d4();
    }
  }
  return 0;
}



/* Address: 0x100bb9454 | _TtC6Sentry19SentryReplayOptions::isNetworkDetailCaptureEnabledFor: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

bool _TtC6Sentry19SentryReplayOptions::isNetworkDetailCaptureEnabledFor_
               (ID param_1,SEL param_2,ID param_3)

{
  char *pcVar1;
  String SVar2;
  
  SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pcVar1 = SVar2.str;
  FUN_100bb9148(pcVar1,SVar2.bridgeObject);
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  return (uint)pcVar1 & 1;
}



/* Address: 0x100bb94bc | FUN_100bb94bc */

undefined8 FUN_100bb94bc(undefined8 param_1)

{
  FUN_100bba8d8();
  _objc_allocWithZone();
  FUN_100bbb400(0x100000000,0x100000000);
  FUN_100bba34c();
  FUN_100bbb480();
  FUN_100bbb3b8();
  return param_1;
}



/* Address: 0x100bb9564 | _TtC6Sentry19SentryReplayOptions::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry19SentryReplayOptions::init(ID param_1,SEL param_2)

{
  FUN_100bb94bc();
  return param_1;
}



/* Address: 0x100bb9584 | FUN_100bb9584 */

void FUN_100bb9584(undefined8 param_1)

{
  FUN_100b69e08();
  FUN_100bb95b0(param_1);
  return;
}



/* Address: 0x100bb95b0 | FUN_100bb95b0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ulong FUN_100bb95b0(undefined4 param_1,undefined8 *param_2,ulong param_3)

{
  undefined8 **ppuVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 **ppuVar8;
  undefined8 **ppuVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  undefined8 unaff_x20;
  undefined8 *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined8 local_180;
  undefined8 *local_f8;
  undefined8 *local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 *local_d0 [4];
  undefined8 local_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long local_88;
  
  puVar11 = PTR___type_metadata_for_Any_100eae0c0;
  puVar4 = param_2;
  if (param_2[2] == 0) {
LAB_100bb964c:
    uVar13 = 0;
    uVar15 = 1;
  }
  else {
    FUN_100bbb32c("sessionSampleRate");
    FUN_100bbb394();
    puVar4 = (undefined8 *)(extraout_x8 + -2);
    FUN_100bbb38c();
    if ((param_3 & 1) == 0) {
      FUN_100b6f860();
      goto LAB_100bb964c;
    }
    FUN_100bbb31c();
    FUN_100b6f860();
    param_3 = 0;
    FUN_100b94080();
    FUN_100bbb304();
    if (((ulong)puVar4 & 1) == 0) goto LAB_100bb964c;
    uVar13 = param_1;
    FUN_100bbb3f0();
    param_1 = uVar13;
    FUN_100b6faa8();
    uVar15 = 0;
  }
  if (param_2[2] == 0) {
LAB_100bb96c8:
    param_1 = 0;
    uVar14 = 1;
  }
  else {
    FUN_100b6fa2c();
    puVar4 = (undefined8 *)0x6d6153726f727265;
    param_3 = 0;
    FUN_100071370();
    if ((param_3 & 1) == 0) {
      FUN_100b6f860();
      goto LAB_100bb96c8;
    }
    FUN_100bbb31c();
    FUN_100b6f860();
    param_3 = 0;
    FUN_100b94080();
    FUN_100bbb304();
    if (((ulong)puVar4 & 1) == 0) goto LAB_100bb96c8;
    FUN_100bbb3f0();
    FUN_100b6faa8();
    uVar14 = 0;
  }
  if (param_2[2] == 0) {
LAB_100bb973c:
    local_dc = 2;
  }
  else {
    FUN_100b6fa2c();
    puVar4 = (undefined8 *)0x546c6c416b73616d;
    param_3 = 0xeb00000000747865;
    FUN_100071370();
    if ((param_3 & 1) == 0) {
      FUN_100b6f860();
      goto LAB_100bb973c;
    }
    FUN_100bbb31c();
    FUN_100b6f860();
    param_3 = 0;
    FUN_100b94080();
    FUN_100bbb304();
    if (((ulong)puVar4 & 1) == 0) goto LAB_100bb973c;
    FUN_100bbb338();
    local_dc = SUB84(puVar4,0);
    FUN_100b6faa8();
  }
  if (param_2[2] == 0) {
LAB_100bb97b0:
    local_e0 = 2;
  }
  else {
    FUN_100b6fa2c();
    puVar4 = (undefined8 *)0x496c6c416b73616d;
    param_3 = 0xed0000736567616d;
    FUN_100071370();
    if ((param_3 & 1) == 0) {
      FUN_100b6f860();
      goto LAB_100bb97b0;
    }
    FUN_100bbb31c();
    FUN_100b6f860();
    param_3 = 0;
    FUN_100b94080();
    FUN_100bbb304();
    if (((ulong)puVar4 & 1) == 0) goto LAB_100bb97b0;
    FUN_100bbb338();
    local_e0 = SUB84(puVar4,0);
    FUN_100b6faa8();
  }
  if (param_2[2] == 0) {
LAB_100bb9864:
    local_e4 = 2;
  }
  else {
    FUN_100bbb32c("enableViewRendererV2");
    FUN_100bbb394();
    puVar4 = (undefined8 *)(extraout_x8_00 + 1);
    FUN_100bbb38c();
    if ((param_3 & 1) == 0) {
      FUN_100b6f860();
LAB_100bb9808:
      if (param_2[2] != 0) {
        FUN_100bbb32c("enableExperimentalViewRenderer");
        FUN_100bbb394();
        puVar4 = (undefined8 *)(extraout_x8_01 + 0xb);
        FUN_100bbb38c();
        if ((param_3 & 1) == 0) {
          FUN_100b6f860();
        }
        else {
          FUN_100bbb31c();
          FUN_100b6f860();
          param_3 = 0;
          FUN_100b94080();
          FUN_100bbb304();
          if (((ulong)puVar4 & 1) != 0) goto LAB_100bb9850;
        }
      }
      goto LAB_100bb9864;
    }
    FUN_100bbb31c();
    FUN_100b6f860();
    param_3 = 0;
    FUN_100b94080();
    FUN_100bbb304();
    if (((ulong)puVar4 & 1) == 0) goto LAB_100bb9808;
LAB_100bb9850:
    FUN_100bbb338();
    local_e4 = SUB84(puVar4,0);
    FUN_100b6faa8();
  }
  if (param_2[2] == 0) {
LAB_100bb98c8:
    local_e8 = 2;
  }
  else {
    FUN_100bbb32c("enableFastViewRendering");
    FUN_100bbb394();
    puVar4 = (undefined8 *)(extraout_x8_02 + 4);
    FUN_100bbb38c();
    if ((param_3 & 1) == 0) {
      FUN_100b6f860();
      goto LAB_100bb98c8;
    }
    FUN_100bbb31c();
    FUN_100b6f860();
    param_3 = 0;
    FUN_100b94080();
    FUN_100bbb304();
    if (((ulong)puVar4 & 1) == 0) goto LAB_100bb98c8;
    FUN_100bbb338();
    local_e8 = SUB84(puVar4,0);
    FUN_100b6faa8();
  }
  if (param_2[2] == 0) {
LAB_100bb9938:
    local_f0 = (undefined8 *)0x0;
  }
  else {
    FUN_100bbb32c("maskedViewClasses");
    FUN_100bbb394();
    puVar4 = (undefined8 *)(extraout_x8_03 + -2);
    FUN_100bbb38c();
    if ((param_3 & 1) == 0) {
      FUN_100b6f860();
      goto LAB_100bb9938;
    }
    FUN_100bbb31c();
    FUN_100b6f860();
    param_3 = 0;
    FUN_100b94080();
    FUN_100bbb304();
    if (((ulong)puVar4 & 1) == 0) goto LAB_100bb9938;
    local_f0 = local_d0[0];
    FUN_100bb75f8();
    puVar4 = local_f0;
    FUN_100b6faa8();
  }
  if (param_2[2] == 0) {
LAB_100bb999c:
    local_f8 = (undefined8 *)0x0;
  }
  else {
    FUN_100bbb32c("unmaskedViewClasses");
    FUN_100bbb348();
    if ((param_3 & 1) == 0) {
      FUN_100b6f860();
      goto LAB_100bb999c;
    }
    FUN_100bbb31c();
    FUN_100b6f860();
    FUN_100b94080();
    FUN_100bbb304();
    if (((ulong)puVar4 & 1) == 0) goto LAB_100bb999c;
    local_f8 = local_d0[0];
    FUN_100bb75f8();
    FUN_100b6faa8();
  }
  if (param_2[2] == 0) {
LAB_100bb9a04:
    puVar4 = (undefined8 *)0x0;
    ppuVar8 = (undefined8 **)&DAT_00000001;
  }
  else {
    FUN_100b6fa2c();
    uVar6 = 0;
    FUN_100071370(0x7974696c617571);
    if ((uVar6 & 1) == 0) {
      FUN_100b6f860();
      goto LAB_100bb9a04;
    }
    FUN_100bbb31c();
    FUN_100b6f860();
    ppuVar8 = local_d0;
    FUN_100b6f878(ppuVar8,&local_a0,puVar11 + 8,PTR___type_metadata_for_Swift_Int_100eac6f8);
    puVar4 = local_d0[0];
    if ((uint)ppuVar8 == 0) {
      puVar4 = (undefined8 *)0x0;
    }
    ppuVar8 = (undefined8 **)(ulong)((uint)ppuVar8 ^ 1);
  }
  FUN_100bb79e8();
  puVar5 = puVar4;
  ppuVar9 = ppuVar8;
  if (param_2[2] != 0) {
    FUN_100b6fa2c();
    puVar5 = (undefined8 *)0x6f666e496b6473;
    ppuVar9 = (undefined8 **)0x0;
    FUN_100071370();
    if (((ulong)ppuVar9 & 1) == 0) {
      FUN_100b6f860();
    }
    else {
      FUN_100bbb31c();
      FUN_100b6f860();
      puVar5 = (undefined8 *)&DAT_101044968;
      FUN_100b6730c();
      FUN_100bbb304();
    }
    if (param_2[2] != 0) {
      FUN_100b6fa2c();
      puVar5 = (undefined8 *)0x0;
      ppuVar9 = (undefined8 **)0xe900000000000065;
      FUN_100071370();
      if (((ulong)ppuVar9 & 1) == 0) {
        FUN_100b6f860();
      }
      else {
        FUN_100bbb31c();
        FUN_100b6f860();
        ppuVar9 = (undefined8 **)0x0;
        FUN_100b94080();
        FUN_100bbb304();
        if (((ulong)puVar5 & 1) != 0) {
          ppuVar9 = (undefined8 **)0x0;
          puVar5 = (undefined8 *)_objc_msgSend((ID)local_d0[0],"unsignedIntegerValue");
          FUN_100b6faa8();
        }
      }
    }
  }
  if (param_2[2] != 0) {
    FUN_100bbb32c("errorReplayDuration");
    FUN_100bbb348();
    if (((ulong)ppuVar9 & 1) == 0) {
      FUN_100b6f860();
    }
    else {
      FUN_100bbb31c();
      FUN_100b6f860();
      ppuVar9 = (undefined8 **)0x0;
      FUN_100b94080();
      FUN_100bbb304();
      if (((ulong)puVar5 & 1) != 0) {
        FUN_100bbb36c();
        FUN_100b6faa8();
      }
    }
  }
  if (param_2[2] != 0) {
    FUN_100bbb32c("sessionSegmentDuration");
    FUN_100bbb358();
    if (((ulong)ppuVar9 & 1) == 0) {
      FUN_100b6f860();
    }
    else {
      FUN_100bbb31c();
      FUN_100b6f860();
      ppuVar9 = (undefined8 **)0x0;
      FUN_100b94080();
      FUN_100bbb304();
      if (((ulong)puVar5 & 1) != 0) {
        FUN_100bbb36c();
        FUN_100b6faa8();
      }
    }
  }
  if (param_2[2] != 0) {
    FUN_100b6fa2c();
    uVar6 = 0x446d756d6978616d;
    ppuVar9 = (undefined8 **)0xef6e6f6974617275;
    FUN_100071370();
    if (((ulong)ppuVar9 & 1) == 0) {
      FUN_100b6f860();
    }
    else {
      FUN_100bbb31c();
      FUN_100b6f860();
      ppuVar9 = (undefined8 **)0x0;
      FUN_100b94080();
      FUN_100bbb304();
      if ((uVar6 & 1) != 0) {
        FUN_100bbb36c();
        FUN_100b6faa8();
      }
    }
  }
  if (param_2[2] != 0) {
    FUN_100bbb32c("excludedViewClasses");
    FUN_100bbb348();
    if (((ulong)ppuVar9 & 1) == 0) {
      FUN_100b6f860();
    }
    else {
      FUN_100bbb31c();
      FUN_100b6f860();
      uVar6 = 0;
      FUN_100b6730c();
      FUN_100bbb304();
      if ((uVar6 & 1) != 0) {
        FUN_100bb7554();
      }
    }
  }
  if (param_2[2] != 0) {
    FUN_100bbb32c("includedViewClasses");
    FUN_100bbb348();
    if (((ulong)ppuVar9 & 1) == 0) {
      FUN_100b6f860();
    }
    else {
      FUN_100bbb31c();
      FUN_100b6f860();
      uVar6 = 0;
      FUN_100b6730c();
      FUN_100bbb304();
      if ((uVar6 & 1) != 0) {
        FUN_100bb7554();
      }
    }
  }
  if (param_2[2] == 0) {
LAB_100bb9d20:
    uStack_98 = 0;
    local_a0 = 0;
    local_88 = 0;
    uStack_90 = 0;
  }
  else {
    FUN_100bbb32c("networkDetailAllowUrls");
    FUN_100bbb358();
    if (((ulong)ppuVar9 & 1) == 0) {
      FUN_100b6f860();
      goto LAB_100bb9d20;
    }
    FUN_100bbb31c();
    FUN_100b6f860();
  }
  FUN_100b7a3bc();
  FUN_100bbb460();
  if (param_2[2] == 0) {
LAB_100bb9d6c:
    uStack_98 = 0;
    local_a0 = 0;
    local_88 = 0;
    uStack_90 = 0;
  }
  else {
    FUN_100bbb32c("networkDetailDenyUrls");
    FUN_100bbb394();
    FUN_100bbb38c(extraout_x8_04 + 2);
    if (((ulong)ppuVar9 & 1) == 0) {
      FUN_100b6f860();
      goto LAB_100bb9d6c;
    }
    FUN_100bbb31c();
    FUN_100b6f860();
  }
  puVar5 = &local_a0;
  FUN_100b7a3bc();
  FUN_100bbb460();
  if (param_2[2] != 0) {
    FUN_100bbb32c("networkCaptureBodies");
    FUN_100bbb394();
    puVar5 = (undefined8 *)(extraout_x8_05 + 1);
    FUN_100bbb38c();
    if (((ulong)ppuVar9 & 1) == 0) {
      FUN_100b6f860();
    }
    else {
      FUN_100bbb31c();
      FUN_100b6f860();
      ppuVar9 = (undefined8 **)0x0;
      FUN_100b94080();
      FUN_100bbb304();
      if (((ulong)puVar5 & 1) != 0) {
        ppuVar9 = (undefined8 **)0x0;
        _objc_msgSend((ID)local_d0[0],"boolValue");
        puVar5 = (undefined8 *)0x0;
      }
    }
  }
  if (param_2[2] != 0) {
    FUN_100bbb32c("networkRequestHeaders");
    FUN_100bbb394();
    puVar5 = (undefined8 *)(extraout_x8_06 + 2);
    FUN_100bbb38c(puVar5);
    if (((ulong)ppuVar9 & 1) == 0) {
      FUN_100b6f860();
    }
    else {
      FUN_100bbb31c();
      FUN_100b6f860();
      puVar5 = (undefined8 *)&DAT_101045048;
      FUN_100b6730c();
      FUN_100bbb304();
      if (((ulong)puVar5 & 1) != 0) {
        lVar12 = local_d0[0][2];
        if (lVar12 == 0) {
          puVar5 = local_d0[0];
          _swift_bridgeObjectRelease(local_d0[0]);
        }
        else {
          FUN_100bbb3a0();
          puVar2 = PTR___type_metadata_for_Swift_String_100eac208;
          puVar10 = (undefined8 *)PTR___swiftEmptyArrayStorage_100eae0d8;
          do {
            FUN_100bbb474();
            FUN_100bbb468();
            puVar5 = &local_b0;
            ppuVar9 = local_d0;
            FUN_100b6f878(puVar5,ppuVar9,puVar11 + 8,puVar2);
            if (((ulong)puVar5 & 1) == 0) {
              local_b0 = 0;
              local_a8 = 0;
            }
            puVar5 = &local_a0;
            FUN_100004594(puVar5);
            lVar3 = local_a8;
            uVar7 = local_b0;
            if (local_a8 != 0) {
              puVar5 = puVar10;
              _swift_isUniquelyReferenced_nonNull_native();
              if (((ulong)puVar5 & 1) == 0) {
                FUN_100bbb41c(puVar10[2]);
                FUN_100089044();
                puVar10 = puVar5;
              }
              uVar6 = puVar10[2];
              ppuVar1 = (undefined8 **)(uVar6 + 1);
              if ((ulong)puVar10[3] >> 1 <= uVar6) {
                puVar5 = (undefined8 *)(ulong)(1 < (ulong)puVar10[3]);
                ppuVar9 = ppuVar1;
                FUN_100089044(puVar5,ppuVar1,1,puVar10);
                puVar10 = puVar5;
              }
              puVar10[2] = ppuVar1;
              puVar10[uVar6 * 2 + 4] = uVar7;
              puVar10[uVar6 * 2 + 5] = lVar3;
              puVar11 = PTR___type_metadata_for_Any_100eae0c0;
            }
            lVar12 = lVar12 + -1;
          } while (lVar12 != 0);
          FUN_100bbb454();
          unaff_x20 = local_180;
          uVar13 = uStack_184;
          uVar15 = local_188;
        }
      }
    }
  }
  if (param_2[2] != 0) {
    FUN_100bbb32c("networkResponseHeaders");
    FUN_100bbb358();
    if (((ulong)ppuVar9 & 1) != 0) {
      FUN_100bbb31c();
      FUN_100b6f860();
      goto LAB_100bb9f44;
    }
    FUN_100b6f860();
  }
  uStack_98 = 0;
  local_a0 = 0;
  local_88 = 0;
  uStack_90 = 0;
LAB_100bb9f44:
  FUN_100b6f860();
  if (local_88 == 0) {
    FUN_100bbb460();
  }
  else {
    puVar5 = (undefined8 *)&DAT_101045048;
    FUN_100b6730c();
    FUN_100bbb304();
    if (((ulong)puVar5 & 1) != 0) {
      lVar12 = local_d0[0][2];
      if (lVar12 == 0) {
        _swift_bridgeObjectRelease(local_d0[0]);
        puVar5 = local_d0[0];
      }
      else {
        FUN_100bbb3a0();
        puVar2 = PTR___type_metadata_for_Swift_String_100eac208;
        puVar10 = (undefined8 *)PTR___swiftEmptyArrayStorage_100eae0d8;
        do {
          FUN_100bbb474();
          FUN_100bbb468();
          puVar5 = &local_b0;
          FUN_100b6f878(puVar5,local_d0,puVar11 + 8,puVar2);
          if (((ulong)puVar5 & 1) == 0) {
            local_b0 = 0;
            local_a8 = 0;
          }
          puVar5 = &local_a0;
          FUN_100004594(puVar5);
          lVar3 = local_a8;
          uVar7 = local_b0;
          if (local_a8 != 0) {
            puVar5 = puVar10;
            _swift_isUniquelyReferenced_nonNull_native();
            if (((ulong)puVar5 & 1) == 0) {
              FUN_100bbb41c(puVar10[2]);
              FUN_100089044();
              puVar10 = puVar5;
            }
            uVar6 = puVar10[2];
            if ((ulong)puVar10[3] >> 1 <= uVar6) {
              puVar5 = (undefined8 *)(ulong)(1 < (ulong)puVar10[3]);
              FUN_100089044(puVar5,uVar6 + 1,1,puVar10);
              puVar10 = puVar5;
            }
            puVar10[2] = uVar6 + 1;
            puVar10[uVar6 * 2 + 4] = uVar7;
            puVar10[uVar6 * 2 + 5] = lVar3;
            puVar11 = PTR___type_metadata_for_Any_100eae0c0;
          }
          lVar12 = lVar12 + -1;
        } while (lVar12 != 0);
        FUN_100bbb454();
        unaff_x20 = local_180;
        uVar13 = uStack_184;
        uVar15 = local_188;
      }
    }
  }
  FUN_100bba8d8();
  _objc_allocWithZone();
  uVar6 = CONCAT44(uVar15,uVar13) & 0xffffffffff;
  local_a0 = CONCAT71((int7)((ulong)local_a0 >> 8),(char)uVar14);
  FUN_100bba34c(puVar5,uVar6,CONCAT44(uVar14,param_1),local_dc,local_e0,local_e4,local_e8,local_f0,
                local_f8,puVar4,(byte)ppuVar8 & 1);
  uVar7 = unaff_x20;
  _swift_getObjectType(unaff_x20);
  FUN_100bbb3b8(unaff_x20,uVar7);
  return uVar6;
}



/* Address: 0x100bba18c | _TtC6Sentry19SentryReplayOptions::initWithDictionary: */

/* Function Stack Size: 0x18 bytes */

ID _TtC6Sentry19SentryReplayOptions::initWithDictionary_(ID param_1,SEL param_2,ID param_3)

{
  Dictionary<undefined,undefined> DVar1;
  
  DVar1 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  FUN_100bb95b0();
  return (ID)DVar1.unknown;
}



/* Address: 0x100bba1d4 | FUN_100bba1d4 */

void FUN_100bba1d4(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  FUN_100b69e08();
  FUN_100bba240(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}



/* Address: 0x100bba240 | FUN_100bba240 */

undefined8 FUN_100bba240(undefined4 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 extraout_x8;
  
  FUN_100bba8d8();
  _objc_allocWithZone();
  FUN_100bbb400(param_3,param_1,param_2);
  FUN_100bba34c();
  FUN_100bbb480();
  FUN_100bbb3b8();
  return extraout_x8;
}



/* Address: 0x100bba31c | _TtC6Sentry19SentryReplayOptions::initWithSessionSampleRate:onErrorSampleRate:maskAllText:maskAllImages:enableViewRendererV2:enableFastViewRendering: */

/* Function Stack Size: 0x28 bytes */

ID _TtC6Sentry19SentryReplayOptions::
   initWithSessionSampleRate_onErrorSampleRate_maskAllText_maskAllImages_enableViewRendererV2_enableFastViewRendering_
             (ID param_1,SEL param_2,float param_3,float param_4,bool param_5,bool param_6,
             bool param_7,bool param_8)

{
  ID IVar1;
  
  IVar1 = (ID)param_5;
  FUN_100bba240(IVar1,param_6,param_7,param_8);
  return IVar1;
}



/* Address: 0x100bba34c | FUN_100bba34c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100bba34c(ulong param_1,ulong param_2,byte param_3,byte param_4,byte param_5,byte param_6,
                  long param_7,long param_8,undefined8 param_9,byte param_10,undefined4 param_11,
                  undefined8 param_12,undefined8 param_13,byte param_14,undefined4 param_15,
                  undefined8 param_16,byte param_17,undefined4 param_18,undefined8 param_19,
                  byte param_20,undefined4 param_21,undefined8 param_22,byte param_23,
                  undefined4 param_24,long param_25,long param_26,long param_27,long param_28,
                  byte param_29,undefined4 param_30,undefined8 param_31,undefined8 param_32)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined4 uVar5;
  
  _swift_getObjectType();
  lVar1 = _TtC6Sentry19SentryReplayOptions::sdkInfo;
  *(undefined8 *)(unaff_x20 + _TtC6Sentry19SentryReplayOptions::sdkInfo) = 0;
  uVar5 = (undefined4)param_1;
  if ((param_1 & 0x100000000) != 0) {
    uVar5 = 0;
  }
  *(undefined4 *)(unaff_x20 + _TtC6Sentry19SentryReplayOptions::sessionSampleRate) = uVar5;
  uVar5 = (int)param_2;
  if ((param_2 & 0x100000000) != 0) {
    uVar5 = 0;
  }
  *(undefined4 *)(unaff_x20 + _TtC6Sentry19SentryReplayOptions::onErrorSampleRate) = uVar5;
  *(byte *)(unaff_x20 + _TtC6Sentry19SentryReplayOptions::maskAllText) = param_3 == 2 | param_3 & 1;
  *(byte *)(unaff_x20 + _TtC6Sentry19SentryReplayOptions::maskAllImages) =
       param_4 == 2 | param_4 & 1;
  *(byte *)(unaff_x20 + _TtC6Sentry19SentryReplayOptions::enableViewRendererV2) =
       param_5 == 2 | param_5 & 1;
  *(byte *)(unaff_x20 + _TtC6Sentry19SentryReplayOptions::enableFastViewRendering) = param_6 & 1;
  if (param_7 == 0) {
    if (DAT_101042e50 != -1) {
      _swift_once(&DAT_101042e50,FUN_100bb77d0);
    }
    param_7 = DAT_101046f90;
    _swift_bridgeObjectRetain(DAT_101046f90);
  }
  *(long *)(unaff_x20 + _TtC6Sentry19SentryReplayOptions::maskedViewClasses) = param_7;
  if (param_8 == 0) {
    if (DAT_101042e58 != -1) {
      _swift_once(&DAT_101042e58,FUN_100bb7800);
    }
    param_8 = DAT_101046f98;
    _swift_bridgeObjectRetain();
  }
  *(long *)(unaff_x20 + _TtC6Sentry19SentryReplayOptions::unmaskedViewClasses) = param_8;
  if ((param_10 & 1) != 0) {
    param_9 = 1;
  }
  *(undefined8 *)(unaff_x20 + _TtC6Sentry19SentryReplayOptions::quality) = param_9;
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = param_12;
  _swift_bridgeObjectRelease(uVar2);
  if ((param_14 & 1) != 0) {
    param_13 = 1;
  }
  *(undefined8 *)(unaff_x20 + _TtC6Sentry19SentryReplayOptions::frameRate) = param_13;
  uVar2 = 0x403e000000000000;
  if ((param_17 & 1) == 0) {
    uVar2 = param_16;
  }
  *(undefined8 *)(unaff_x20 + _TtC6Sentry19SentryReplayOptions::errorReplayDuration) = uVar2;
  uVar2 = 0x4014000000000000;
  if ((param_20 & 1) == 0) {
    uVar2 = param_19;
  }
  *(undefined8 *)(unaff_x20 + _TtC6Sentry19SentryReplayOptions::sessionSegmentDuration) = uVar2;
  uVar2 = 0x40ac200000000000;
  if ((param_23 & 1) == 0) {
    uVar2 = param_22;
  }
  *(undefined8 *)(unaff_x20 + _TtC6Sentry19SentryReplayOptions::maximumDuration) = uVar2;
  if (param_25 == 0) {
    if (DAT_101042e60 != -1) {
      _swift_once(&DAT_101042e60,FUN_100bb7830);
    }
    param_25 = DAT_101046fa0;
    _swift_bridgeObjectRetain(DAT_101046fa0);
  }
  *(long *)(unaff_x20 + _TtC6Sentry19SentryReplayOptions::excludedViewClasses) = param_25;
  if (param_26 == 0) {
    if (DAT_101042e68 != -1) {
      _swift_once(&DAT_101042e68,FUN_100bb7860);
    }
    param_26 = DAT_101046fa8;
    _swift_bridgeObjectRetain(DAT_101046fa8);
  }
  *(long *)(unaff_x20 + _TtC6Sentry19SentryReplayOptions::includedViewClasses) = param_26;
  if (param_27 == 0) {
    if (DAT_101042e70 != -1) {
      _swift_once(&DAT_101042e70,FUN_100bb7890);
    }
    param_27 = DAT_101046fb0;
    _swift_bridgeObjectRetain(DAT_101046fb0);
  }
  *(long *)(unaff_x20 + _TtC6Sentry19SentryReplayOptions::networkDetailAllowUrls) = param_27;
  if (param_28 == 0) {
    if (DAT_101042e78 != -1) {
      _swift_once(&DAT_101042e78,FUN_100bb78c0);
    }
    param_28 = DAT_101046fb8;
    _swift_bridgeObjectRetain(DAT_101046fb8);
  }
  *(long *)(unaff_x20 + _TtC6Sentry19SentryReplayOptions::networkDetailDenyUrls) = param_28;
  *(byte *)(unaff_x20 + _TtC6Sentry19SentryReplayOptions::networkCaptureBodies) =
       param_29 == 2 | param_29 & 1;
  puVar3 = &DAT_101044958;
  FUN_100b6730c(&DAT_101044958);
  puVar4 = puVar3;
  _swift_initStaticObject();
  uVar2 = param_31;
  FUN_100bb86e8(param_31,puVar4);
  _swift_bridgeObjectRelease(param_31);
  *(undefined8 *)(unaff_x20 + _TtC6Sentry19SentryReplayOptions::_networkRequestHeaders) = uVar2;
  _swift_initStaticObject(puVar3,&DAT_101043de8);
  uVar2 = param_32;
  FUN_100bb86e8(param_32,puVar3);
  _swift_bridgeObjectRelease(param_32);
  *(undefined8 *)(unaff_x20 + _TtC6Sentry19SentryReplayOptions::_networkResponseHeaders) = uVar2;
  FUN_100bba8d8();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff88,"init");
  return;
}



/* Address: 0x100bba7d4 | FUN_100bba7d4 */

void FUN_100bba7d4(void)

{
  FUN_100bba8d8();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"dealloc");
  return;
}



/* Address: 0x100bba804 | _TtC6Sentry19SentryReplayOptions::.cxx_destruct */

/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry19SentryReplayOptions::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + maskedViewClasses));
  FUN_100b94088(unmaskedViewClasses);
  FUN_100b94088(excludedViewClasses);
  FUN_100b94088(includedViewClasses);
  FUN_100b94088(networkDetailAllowUrls);
  FUN_100b94088(networkDetailDenyUrls);
  FUN_100b94088(_networkRequestHeaders);
  FUN_100b94088(_networkResponseHeaders);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + sdkInfo));
  return;
}



/* Address: 0x100bba890 | FUN_100bba890 */

void FUN_100bba890(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_1010458d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_1010458d0;
  FUN_100b6734c(&DAT_1010458d0);
  puVar2 = PTR_Swift__Swift__PartialRangeFrom<undefined>_>Swift__RangeExpression_100ead200;
  _swift_getWitnessTable
            (PTR_Swift__Swift__PartialRangeFrom<undefined>_>Swift__RangeExpression_100ead200,puVar1)
  ;
  DAT_1010458d8 = puVar2;
  return;
}



/* Address: 0x100bba8d8 | FUN_100bba8d8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100bba8d8(void)

{
  return ZEXT816(0x100fa30c8);
}



/* Address: 0x100bba8f8 | thunk_FUN_100bba8fc */

void thunk_FUN_100bba8fc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101047068 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9c940;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9c940,&DAT_100f3a930);
  DAT_101047068 = pTVar1;
  return;
}



/* Address: 0x100bba8fc | FUN_100bba8fc */

void FUN_100bba8fc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101047068 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9c940;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9c940,&DAT_100f3a930);
  DAT_101047068 = pTVar1;
  return;
}



/* Address: 0x100bba93c | FUN_100bba93c */

void FUN_100bba93c(undefined4 param_1)

{
  undefined4 *unaff_x19;
  
  FUN_100b9a128();
  FUN_100bb7a28();
  *unaff_x19 = param_1;
  FUN_100b56e88();
  return;
}



/* Address: 0x100bba958 | FUN_100bba958 */

void FUN_100bba958(undefined4 *param_1)

{
  FUN_100bb7a74(*param_1);
  FUN_100b56e88();
  return;
}



/* Address: 0x100bba978 | FUN_100bba978 */

void FUN_100bba978(undefined4 param_1)

{
  undefined4 *unaff_x19;
  
  FUN_100b9a128();
  FUN_100bb7af4();
  *unaff_x19 = param_1;
  FUN_100b56e88();
  return;
}



/* Address: 0x100bba994 | FUN_100bba994 */

void FUN_100bba994(undefined4 *param_1)

{
  FUN_100bb7b40(*param_1);
  FUN_100b56e88();
  return;
}



/* Address: 0x100bba9b4 | FUN_100bba9b4 */

void FUN_100bba9b4(void)

{
  FUN_100b9a128();
  FUN_100bb7bc4();
  FUN_100b9a1d8();
  FUN_100b56e88();
  return;
}


