/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10010b1ec | _TtC7PostHog16PostHogLogRecord::setSpanId: */

/* Function Stack Size: 0x18 bytes */

void _TtC7PostHog16PostHogLogRecord::setSpanId_(ID param_1,SEL param_2,ID param_3)

{
  FUN_10010b598();
  return;
}



/* Address: 0x10010b1f8 | FUN_10010b1f8 */

void FUN_10010b1f8(undefined8 param_1,undefined8 param_2)

{
  FUN_10010b61c(param_1,param_2,&_TtC7PostHog16PostHogLogRecord::spanId);
  return;
}



/* Address: 0x10010b204 | FUN_10010b204 */

undefined1  [16] FUN_10010b204(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _TtC7PostHog16PostHogLogRecord::spanId;
  _swift_beginAccess(unaff_x20 + _TtC7PostHog16PostHogLogRecord::spanId,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = _swift_endAccess;
  return auVar2;
}



/* Address: 0x10010b244 | _TtC7PostHog16PostHogLogRecord::traceFlags */

/* WARNING: Function: _objc_retainAutoreleaseReturnValue replaced with injection: _objc_retain_fixup
    */
/* Function Stack Size: 0x10 bytes */

ID _TtC7PostHog16PostHogLogRecord::traceFlags(ID param_1,SEL param_2)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = traceFlags;
  _swift_beginAccess(param_1 + traceFlags,auStack_38,0,0);
  return *(ID *)(param_1 + lVar1);
}



/* Address: 0x10010b28c | FUN_10010b28c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_10010b28c(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _TtC7PostHog16PostHogLogRecord::traceFlags;
  _swift_beginAccess(unaff_x20 + _TtC7PostHog16PostHogLogRecord::traceFlags,auStack_38,0,0);
  return *(undefined8 *)(unaff_x20 + lVar1);
}



/* Address: 0x10010b2d8 | _TtC7PostHog16PostHogLogRecord::setTraceFlags: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC7PostHog16PostHogLogRecord::setTraceFlags_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = traceFlags;
  _swift_beginAccess(param_1 + traceFlags,auStack_48,1,0);
  *(ID *)(param_1 + lVar1) = param_3;
  return;
}



/* Address: 0x10010b33c | FUN_10010b33c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10010b33c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _TtC7PostHog16PostHogLogRecord::traceFlags;
  _swift_beginAccess(unaff_x20 + _TtC7PostHog16PostHogLogRecord::traceFlags,auStack_48,1,0);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  return 0;
}



/* Address: 0x10010b390 | FUN_10010b390 */

undefined1  [16] FUN_10010b390(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _TtC7PostHog16PostHogLogRecord::traceFlags;
  _swift_beginAccess(unaff_x20 + _TtC7PostHog16PostHogLogRecord::traceFlags,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = _swift_endAccess;
  return auVar2;
}



/* Address: 0x10010b3d0 | _TtC7PostHog16PostHogLogRecord::distinctId */

/* Function Stack Size: 0x10 bytes */

ID _TtC7PostHog16PostHogLogRecord::distinctId(ID param_1,SEL param_2)

{
  FUN_10010b4bc(param_1,param_2,&distinctId);
  return param_1;
}



/* Address: 0x10010b3dc | FUN_10010b3dc */

void FUN_10010b3dc(void)

{
  FUN_10010b53c(&_TtC7PostHog16PostHogLogRecord::distinctId);
  return;
}



/* Address: 0x10010b3e8 | _TtC7PostHog16PostHogLogRecord::setDistinctId: */

/* Function Stack Size: 0x18 bytes */

void _TtC7PostHog16PostHogLogRecord::setDistinctId_(ID param_1,SEL param_2,ID param_3)

{
  FUN_10010b598();
  return;
}



/* Address: 0x10010b3f4 | FUN_10010b3f4 */

void FUN_10010b3f4(undefined8 param_1,undefined8 param_2)

{
  FUN_10010b61c(param_1,param_2,&_TtC7PostHog16PostHogLogRecord::distinctId);
  return;
}



/* Address: 0x10010b400 | FUN_10010b400 */

undefined1  [16] FUN_10010b400(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _TtC7PostHog16PostHogLogRecord::distinctId;
  _swift_beginAccess(unaff_x20 + _TtC7PostHog16PostHogLogRecord::distinctId,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = _swift_endAccess;
  return auVar2;
}



/* Address: 0x10010b440 | _TtC7PostHog16PostHogLogRecord::sessionId */

/* Function Stack Size: 0x10 bytes */

ID _TtC7PostHog16PostHogLogRecord::sessionId(ID param_1,SEL param_2)

{
  FUN_10010b4bc(param_1,param_2,&sessionId);
  return param_1;
}



/* Address: 0x10010b44c | FUN_10010b44c */

void FUN_10010b44c(void)

{
  FUN_10010b53c(&_TtC7PostHog16PostHogLogRecord::sessionId);
  return;
}



/* Address: 0x10010b458 | _TtC7PostHog16PostHogLogRecord::setSessionId: */

/* Function Stack Size: 0x18 bytes */

void _TtC7PostHog16PostHogLogRecord::setSessionId_(ID param_1,SEL param_2,ID param_3)

{
  FUN_10010b598();
  return;
}



/* Address: 0x10010b464 | FUN_10010b464 */

void FUN_10010b464(undefined8 param_1,undefined8 param_2)

{
  FUN_10010b61c(param_1,param_2,&_TtC7PostHog16PostHogLogRecord::sessionId);
  return;
}



/* Address: 0x10010b470 | FUN_10010b470 */

undefined1  [16] FUN_10010b470(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _TtC7PostHog16PostHogLogRecord::sessionId;
  _swift_beginAccess(unaff_x20 + _TtC7PostHog16PostHogLogRecord::sessionId,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = _swift_endAccess;
  return auVar2;
}



/* Address: 0x10010b4b0 | _TtC7PostHog16PostHogLogRecord::screenName */

/* Function Stack Size: 0x10 bytes */

ID _TtC7PostHog16PostHogLogRecord::screenName(ID param_1,SEL param_2)

{
  FUN_10010b4bc(param_1,param_2,&screenName);
  return param_1;
}



/* Address: 0x10010b4bc | FUN_10010b4bc */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

NSString * FUN_10010b4bc(long param_1,undefined8 param_2,long *param_3)

{
  NSString *pNVar1;
  long lVar2;
  undefined1 auStack_38 [24];
  
  lVar2 = *param_3;
  _swift_beginAccess(param_1 + lVar2,auStack_38,0,0);
  lVar2 = *(long *)(param_1 + lVar2 + 8);
  if (lVar2 == 0) {
    pNVar1 = (NSString *)0x0;
  }
  else {
    _swift_bridgeObjectRetain(lVar2);
    pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(lVar2);
  }
  return pNVar1;
}



/* Address: 0x10010b530 | FUN_10010b530 */

void FUN_10010b530(void)

{
  FUN_10010b53c(&_TtC7PostHog16PostHogLogRecord::screenName);
  return;
}



/* Address: 0x10010b53c | FUN_10010b53c */

undefined1  [16] FUN_10010b53c(long *param_1)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + *param_1);
  _swift_beginAccess(pauVar1,auStack_38,0,0);
  auVar2 = *pauVar1;
  _swift_bridgeObjectRetain(*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Address: 0x10010b58c | _TtC7PostHog16PostHogLogRecord::setScreenName: */

/* Function Stack Size: 0x18 bytes */

void _TtC7PostHog16PostHogLogRecord::setScreenName_(ID param_1,SEL param_2,ID param_3)

{
  FUN_10010b598();
  return;
}



/* Address: 0x10010b598 | FUN_10010b598 */

void FUN_10010b598(long param_1,undefined8 param_2,long param_3,long *param_4)

{
  String *pSVar1;
  String SVar2;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    SVar2 = (String)ZEXT816(0);
  }
  else {
    SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  pSVar1 = (String *)(param_1 + *param_4);
  _swift_beginAccess(pSVar1,auStack_48,1,0);
  *pSVar1 = SVar2;
  _swift_bridgeObjectRelease(pSVar1->bridgeObject);
  return;
}



/* Address: 0x10010b610 | FUN_10010b610 */

void FUN_10010b610(undefined8 param_1,undefined8 param_2)

{
  FUN_10010b61c(param_1,param_2,&_TtC7PostHog16PostHogLogRecord::screenName);
  return;
}



/* Address: 0x10010b61c | FUN_10010b61c */

void FUN_10010b61c(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + *param_3);
  _swift_beginAccess(puVar1,auStack_48,1,0);
  uVar2 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Address: 0x10010b674 | FUN_10010b674 */

undefined1  [16] FUN_10010b674(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _TtC7PostHog16PostHogLogRecord::screenName;
  _swift_beginAccess(unaff_x20 + _TtC7PostHog16PostHogLogRecord::screenName,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = _swift_endAccess;
  return auVar2;
}



/* Address: 0x10010b6b4 | _TtC7PostHog16PostHogLogRecord::featureFlagKeys */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC7PostHog16PostHogLogRecord::featureFlagKeys(ID param_1,SEL param_2)

{
  long lVar1;
  NSArray *pNVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  lVar1 = featureFlagKeys;
  _swift_beginAccess(param_1 + featureFlagKeys,auStack_38,0,0);
  uVar3 = *(undefined8 *)(param_1 + lVar1);
  _swift_bridgeObjectRetain(uVar3);
  pNVar2 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(uVar3);
  return (ID)pNVar2;
}



/* Address: 0x10010b71c | FUN_10010b71c */

void FUN_10010b71c(void)

{
  FUN_100104af0(&_TtC7PostHog16PostHogLogRecord::featureFlagKeys);
  return;
}



/* Address: 0x10010b728 | _TtC7PostHog16PostHogLogRecord::setFeatureFlagKeys: */

/* Function Stack Size: 0x18 bytes */

void _TtC7PostHog16PostHogLogRecord::setFeatureFlagKeys_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  lVar1 = featureFlagKeys;
  _swift_beginAccess(param_1 + featureFlagKeys,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(ID *)(param_1 + lVar1) = param_3;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Address: 0x10010b790 | FUN_10010b790 */

void FUN_10010b790(undefined8 param_1)

{
  FUN_100104bb0(param_1,&_TtC7PostHog16PostHogLogRecord::featureFlagKeys);
  return;
}



/* Address: 0x10010b79c | FUN_10010b79c */

undefined1  [16] FUN_10010b79c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _TtC7PostHog16PostHogLogRecord::featureFlagKeys;
  _swift_beginAccess(unaff_x20 + _TtC7PostHog16PostHogLogRecord::featureFlagKeys,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = _swift_endAccess;
  return auVar2;
}



/* Address: 0x10010b7dc | FUN_10010b7dc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_10010b7dc(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined *puVar10;
  long lVar11;
  undefined1 *puVar12;
  undefined1 auStack_198 [24];
  undefined1 auStack_180 [24];
  undefined1 auStack_168 [24];
  undefined1 auStack_150 [24];
  undefined1 auStack_138 [24];
  undefined1 auStack_120 [24];
  undefined *local_108;
  long lStack_100;
  undefined *local_f0;
  long local_e8 [4];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined *local_68;
  
  puVar10 = &DAT_100fae678;
  FUN_1000f7830(&DAT_100fae678,&DAT_100c2e190);
  _swift_allocObject();
  *(undefined8 *)(puVar10 + 0x20) = 0x79646f62;
  *(undefined8 *)(puVar10 + 0x18) = 10;
  *(undefined8 *)(puVar10 + 0x10) = 5;
  *(undefined1 **)(puVar10 + 0x28) = &DAT_e400000000000000;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC7PostHog16PostHogLogRecord::body);
  _swift_beginAccess(puVar1,auStack_80,0,0);
  puVar8 = PTR___type_metadata_for_Swift_String_100eac208;
  uVar2 = puVar1[1];
  *(undefined8 *)(puVar10 + 0x30) = *puVar1;
  *(undefined8 *)(puVar10 + 0x38) = uVar2;
  *(undefined **)(puVar10 + 0x48) = puVar8;
  *(undefined1 **)(puVar10 + 0x50) = &DAT_6c6576656c;
  puVar12 = &DAT_e500000000000000;
  *(undefined1 **)(puVar10 + 0x58) = &DAT_e500000000000000;
  lVar11 = _TtC7PostHog16PostHogLogRecord::level;
  _swift_beginAccess(unaff_x20 + _TtC7PostHog16PostHogLogRecord::level,auStack_98,0,0);
  local_e8[0] = *(long *)(unaff_x20 + lVar11);
  if (local_e8[0] < 3) {
    if (local_e8[0] == 0) {
      uVar9 = 0x6563617274;
    }
    else if (local_e8[0] == 1) {
      uVar9 = 0x6775626564;
    }
    else {
      if (local_e8[0] != 2) {
LAB_10010bf68:
        _swift_bridgeObjectRetain(uVar2);
        Swift::__diagnoseUnexpectedEnumCaseValue
                  (&DAT_100eb7c50,local_e8,&DAT_100eb7c50,
                   PTR___type_metadata_for_Swift_Int_100eac6f8);
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10010bf94);
        (*pcVar5)();
      }
      puVar12 = &DAT_e400000000000000;
      uVar9 = 0x6f666e69;
    }
  }
  else if (local_e8[0] == 3) {
    puVar12 = &DAT_e400000000000000;
    uVar9 = 0x6e726177;
  }
  else if (local_e8[0] == 4) {
    uVar9 = 0x726f727265;
  }
  else {
    if (local_e8[0] != 5) goto LAB_10010bf68;
    uVar9 = 0x6c61746166;
  }
  *(undefined8 *)(puVar10 + 0x60) = uVar9;
  *(undefined1 **)(puVar10 + 0x68) = puVar12;
  *(undefined **)(puVar10 + 0x78) = puVar8;
  *(undefined8 *)(puVar10 + 0x80) = 0x78696e55656d6974;
  uVar9 = *(undefined8 *)(unaff_x20 + _TtC7PostHog16PostHogLogRecord::timeUnixNano);
  uVar3 = ((undefined8 *)(unaff_x20 + _TtC7PostHog16PostHogLogRecord::timeUnixNano))[1];
  *(undefined8 *)(puVar10 + 0x88) = 0xec0000006f6e614e;
  *(undefined8 *)(puVar10 + 0x90) = uVar9;
  *(undefined8 *)(puVar10 + 0x98) = uVar3;
  *(undefined **)(puVar10 + 0xa8) = puVar8;
  *(undefined8 *)(puVar10 + 0xb0) = 0xd000000000000014;
  uVar9 = *(undefined8 *)(unaff_x20 + _TtC7PostHog16PostHogLogRecord::observedTimeUnixNano);
  uVar4 = ((undefined8 *)(unaff_x20 + _TtC7PostHog16PostHogLogRecord::observedTimeUnixNano))[1];
  *(undefined8 *)(puVar10 + 0xb8) = 0x8000000100d91980;
  *(undefined8 *)(puVar10 + 0xc0) = uVar9;
  *(undefined8 *)(puVar10 + 200) = uVar4;
  *(undefined **)(puVar10 + 0xd8) = puVar8;
  *(undefined8 *)(puVar10 + 0xe0) = 0x4665727574616566;
  *(undefined8 *)(puVar10 + 0xe8) = 0xef7379654b67616c;
  lVar11 = _TtC7PostHog16PostHogLogRecord::featureFlagKeys;
  _swift_beginAccess(unaff_x20 + _TtC7PostHog16PostHogLogRecord::featureFlagKeys,auStack_b0,0,0);
  uVar9 = *(undefined8 *)(unaff_x20 + lVar11);
  puVar7 = &DAT_100faf898;
  FUN_1000f7830(&DAT_100faf898,&DAT_100c2eeb0);
  *(undefined **)(puVar10 + 0x108) = puVar7;
  *(undefined8 *)(puVar10 + 0xf0) = uVar9;
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar9);
  puVar6 = puVar10;
  FUN_1000f8154();
  _swift_setDeallocating(puVar10);
  puVar7 = &DAT_100fae490;
  FUN_1000f7830(&DAT_100fae490,&DAT_100c2de60);
  _swift_arrayDestroy(puVar10 + 0x20,5,puVar7);
  _swift_deallocClassInstance(puVar10,0x20,7);
  lVar11 = _TtC7PostHog16PostHogLogRecord::attributes;
  local_68 = puVar6;
  _swift_beginAccess(unaff_x20 + _TtC7PostHog16PostHogLogRecord::attributes,auStack_c8,0,0);
  puVar10 = *(undefined **)(unaff_x20 + lVar11);
  if (*(long *)(puVar10 + 0x10) != 0) {
    puVar7 = puVar10;
    _swift_bridgeObjectRetain();
    FUN_10016ead0();
    _swift_bridgeObjectRelease(puVar10);
    puVar10 = &DAT_100fae898;
    FUN_1000f7830(&DAT_100fae898,&DAT_100c2e4e0);
    if (puVar7 == (undefined *)0x0) {
      puVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
      FUN_1000f8154();
    }
    local_108 = puVar7;
    local_f0 = puVar10;
    if (puVar10 == (undefined *)0x0) {
      FUN_1000faea8(&local_108);
      FUN_10016fcc4(local_e8,0x7475626972747461,0xea00000000007365);
      FUN_1000faea8(local_e8);
    }
    else {
      FUN_100011080(&local_108,local_e8);
      puVar10 = puVar6;
      _swift_isUniquelyReferenced_nonNull_native(puVar6);
      local_108 = puVar6;
      FUN_10016fe74(local_e8,0x7475626972747461,0xea00000000007365,puVar10);
      local_68 = local_108;
    }
  }
  puVar1 = (undefined8 *)(unaff_x20 + _TtC7PostHog16PostHogLogRecord::traceId);
  _swift_beginAccess(puVar1,auStack_120,0,0);
  lVar11 = puVar1[1];
  if (lVar11 != 0) {
    local_108 = (undefined *)*puVar1;
    local_f0 = puVar8;
    lStack_100 = lVar11;
    FUN_100011080(&local_108,local_e8);
    _swift_bridgeObjectRetain(lVar11);
    puVar10 = local_68;
    puVar7 = local_68;
    _swift_isUniquelyReferenced_nonNull_native(local_68);
    local_108 = puVar10;
    FUN_10016fe74(local_e8,0x64496563617274,&DAT_e700000000000000,puVar7);
    local_68 = local_108;
  }
  puVar1 = (undefined8 *)(unaff_x20 + _TtC7PostHog16PostHogLogRecord::spanId);
  _swift_beginAccess(puVar1,auStack_138,0,0);
  lVar11 = puVar1[1];
  if (lVar11 != 0) {
    local_108 = (undefined *)*puVar1;
    local_f0 = puVar8;
    lStack_100 = lVar11;
    FUN_100011080(&local_108,local_e8);
    _swift_bridgeObjectRetain(lVar11);
    puVar10 = local_68;
    puVar7 = local_68;
    _swift_isUniquelyReferenced_nonNull_native(local_68);
    local_108 = puVar10;
    FUN_10016fe74(local_e8,0x64496e617073,&DAT_e600000000000000,puVar7);
    local_68 = local_108;
  }
  lVar11 = _TtC7PostHog16PostHogLogRecord::traceFlags;
  _swift_beginAccess(unaff_x20 + _TtC7PostHog16PostHogLogRecord::traceFlags,auStack_150,0,0);
  puVar10 = *(undefined **)(unaff_x20 + lVar11);
  if (puVar10 != (undefined *)0x0) {
    puVar7 = (undefined *)0x0;
    FUN_100108da8();
    local_108 = puVar10;
    local_f0 = puVar7;
    if (puVar7 == (undefined *)0x0) {
      FUN_1000faea8(&local_108);
      FUN_10016fcc4(local_e8,0x616c466563617274,0xea00000000007367);
      FUN_1000faea8(local_e8);
    }
    else {
      FUN_100011080(&local_108,local_e8);
      puVar10 = local_68;
      puVar7 = local_68;
      _swift_isUniquelyReferenced_nonNull_native(local_68);
      local_108 = puVar10;
      FUN_10016fe74(local_e8,0x616c466563617274,0xea00000000007367,puVar7);
      local_68 = local_108;
    }
  }
  puVar1 = (undefined8 *)(unaff_x20 + _TtC7PostHog16PostHogLogRecord::distinctId);
  _swift_beginAccess(puVar1,auStack_168,0,0);
  lVar11 = puVar1[1];
  if (lVar11 != 0) {
    local_108 = (undefined *)*puVar1;
    local_f0 = puVar8;
    lStack_100 = lVar11;
    FUN_100011080(&local_108,local_e8);
    _swift_bridgeObjectRetain(lVar11);
    puVar10 = local_68;
    puVar7 = local_68;
    _swift_isUniquelyReferenced_nonNull_native(local_68);
    local_108 = puVar10;
    FUN_10016fe74(local_e8,0x74636e6974736964,0xea00000000006449,puVar7);
    local_68 = local_108;
  }
  puVar1 = (undefined8 *)(unaff_x20 + _TtC7PostHog16PostHogLogRecord::sessionId);
  _swift_beginAccess(puVar1,auStack_180,0,0);
  lVar11 = puVar1[1];
  if (lVar11 != 0) {
    local_108 = (undefined *)*puVar1;
    local_f0 = puVar8;
    lStack_100 = lVar11;
    FUN_100011080(&local_108,local_e8);
    _swift_bridgeObjectRetain(lVar11);
    puVar10 = local_68;
    puVar7 = local_68;
    _swift_isUniquelyReferenced_nonNull_native(local_68);
    local_108 = puVar10;
    FUN_10016fe74(local_e8,0x496e6f6973736573,0xe900000000000064,puVar7);
    local_68 = local_108;
  }
  puVar1 = (undefined8 *)(unaff_x20 + _TtC7PostHog16PostHogLogRecord::screenName);
  _swift_beginAccess(puVar1,auStack_198,0,0);
  lVar11 = puVar1[1];
  if (lVar11 != 0) {
    local_108 = (undefined *)*puVar1;
    local_f0 = puVar8;
    lStack_100 = lVar11;
    FUN_100011080(&local_108,local_e8);
    _swift_bridgeObjectRetain(lVar11);
    puVar10 = local_68;
    puVar7 = local_68;
    _swift_isUniquelyReferenced_nonNull_native(local_68);
    local_108 = puVar10;
    FUN_10016fe74(local_e8,0x614e6e6565726373,0xea0000000000656d,puVar7);
    local_68 = local_108;
  }
  lVar11 = ((undefined8 *)(unaff_x20 + _TtC7PostHog16PostHogLogRecord::appState))[1];
  local_108 = local_68;
  if (lVar11 != 0) {
    local_108 = *(undefined **)(unaff_x20 + _TtC7PostHog16PostHogLogRecord::appState);
    local_f0 = puVar8;
    lStack_100 = lVar11;
    FUN_100011080(&local_108,local_e8);
    _swift_bridgeObjectRetain(lVar11);
    puVar10 = local_68;
    puVar8 = local_68;
    _swift_isUniquelyReferenced_nonNull_native(local_68);
    local_108 = puVar10;
    FUN_10016fe74(local_e8,0x6574617453707061,&DAT_e800000000000000,puVar8);
  }
  return local_108;
}



/* Address: 0x10010bf94 | _TtC7PostHog16PostHogLogRecord::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC7PostHog16PostHogLogRecord::init(ID param_1,SEL param_2)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("PostHog.PostHogLogRecord",0x18,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10010bfc0);
  (*pcVar1)();
}



/* Address: 0x10010bfc0 | _TtC7PostHog16PostHogLogRecord::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC7PostHog16PostHogLogRecord::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + body + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + attributes));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + traceId + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + spanId + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + distinctId + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + sessionId + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + screenName + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + appState + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + featureFlagKeys));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + timeUnixNano + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + observedTimeUnixNano + 8));
  return;
}



/* Address: 0x10010c0bc | FUN_10010c0bc */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10010c0bc(void)

{
  return ZEXT816(0x100f93200);
}



/* Address: 0x10010c0dc | FUN_10010c0dc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10010c0dc(class_t *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 *puVar11;
  class_t *pcVar12;
  undefined *puVar13;
  undefined8 uVar14;
  class_t *pcVar15;
  ID IVar16;
  uint uVar17;
  class_t *pcVar18;
  ulong uVar19;
  Cache CVar20;
  class_t *pcVar21;
  undefined8 uVar22;
  class_t *pcVar23;
  class_t *pcVar24;
  class_t *local_1b8;
  class_t *pcStack_1b0;
  class_t *local_1a8;
  class_t *pcStack_1a0;
  class_t *local_198;
  class_t *pcStack_190;
  class_t *local_188;
  class_t *pcStack_180;
  class_t *local_178;
  class_t *local_170;
  class_t *pcStack_168;
  class_t *local_160;
  class_t *pcStack_158;
  class_t *local_148;
  class_t *local_140;
  class_t *local_130;
  objc_super local_110;
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined1 local_a0 [64];
  
  if (param_1->cache == 0) {
    return 0;
  }
  _swift_bridgeObjectRetain();
  lVar10 = 0x79646f62;
  uVar19 = 0;
  FUN_100071370(0x79646f62);
  if ((uVar19 & 1) == 0) {
    _swift_bridgeObjectRelease(param_1);
    return 0;
  }
  FUN_10000cbfc(param_1[1].cache + lVar10 * 0x20,local_a0 + 0x18);
  _swift_bridgeObjectRelease(param_1);
  puVar8 = PTR___type_metadata_for_Any_100eae0c0;
  puVar11 = local_a0;
  _swift_dynamicCast(puVar11,local_a0 + 0x18,PTR___type_metadata_for_Any_100eae0c0 + 8,
                     PTR___type_metadata_for_Swift_String_100eac208,6);
  uVar9 = local_a0._8_8_;
  uVar22 = local_a0._0_8_;
  if (((ulong)puVar11 & 1) == 0) {
    return 0;
  }
  if (param_1->cache == 0) {
LAB_10010c20c:
    pcVar12 = (class_t *)0x6f666e69;
    pcVar21 = (class_t *)&DAT_e400000000000000;
  }
  else {
    _swift_bridgeObjectRetain(param_1);
    puVar11 = &DAT_6c6576656c;
    uVar19 = 0;
    FUN_100071370(&DAT_6c6576656c);
    if ((uVar19 & 1) == 0) {
      _swift_bridgeObjectRelease(param_1);
      goto LAB_10010c20c;
    }
    FUN_10000cbfc(param_1[1].cache + (long)puVar11 * 0x20,local_a0 + 0x18);
    _swift_bridgeObjectRelease(param_1);
    puVar11 = local_a0;
    _swift_dynamicCast(puVar11,local_a0 + 0x18,puVar8 + 8,
                       PTR___type_metadata_for_Swift_String_100eac208,6);
    pcVar12 = (class_t *)local_a0._0_8_;
    pcVar21 = (class_t *)local_a0._8_8_;
    if (((ulong)puVar11 & 1) == 0) goto LAB_10010c20c;
  }
  pcVar18 = pcVar21;
  FUN_10010cb78();
  uVar17 = (uint)pcVar18;
  _swift_bridgeObjectRelease(pcVar21);
  pcVar21 = (class_t *)0x2;
  if ((uVar17 & 0xff) != 1) {
    pcVar21 = pcVar12;
  }
  if (param_1->cache == 0) {
LAB_10010c2cc:
    pcVar12 = (class_t *)PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_1000f8154();
    local_130 = pcVar12;
  }
  else {
    _swift_bridgeObjectRetain(param_1);
    lVar10 = 0x7475626972747461;
    pcVar18 = (class_t *)0xea00000000007365;
    FUN_100071370(0x7475626972747461);
    if (((ulong)pcVar18 & 1) == 0) {
      _swift_bridgeObjectRelease(param_1);
      goto LAB_10010c2cc;
    }
    FUN_10000cbfc(param_1[1].cache + lVar10 * 0x20,local_a0 + 0x18);
    _swift_bridgeObjectRelease(param_1);
    puVar13 = &DAT_100fae898;
    FUN_1000f7830(&DAT_100fae898,&DAT_100c2e4e0);
    pcVar12 = (class_t *)local_a0;
    pcVar18 = (class_t *)(local_a0 + 0x18);
    _swift_dynamicCast(pcVar12,pcVar18,puVar8 + 8,puVar13,6);
    if (((ulong)pcVar12 & 1) == 0) goto LAB_10010c2cc;
    local_130 = (class_t *)local_a0._0_8_;
  }
  if (param_1->cache == 0) {
LAB_10010c358:
    FUN_10016dd00();
    pcVar23 = pcVar18;
    pcVar24 = pcVar12;
  }
  else {
    _swift_bridgeObjectRetain(param_1);
    lVar10 = 0x78696e55656d6974;
    pcVar18 = (class_t *)0xec0000006f6e614e;
    FUN_100071370(0x78696e55656d6974);
    if (((ulong)pcVar18 & 1) == 0) {
      pcVar12 = param_1;
      _swift_bridgeObjectRelease();
      goto LAB_10010c358;
    }
    FUN_10000cbfc(param_1[1].cache + lVar10 * 0x20,local_a0 + 0x18);
    _swift_bridgeObjectRelease(param_1);
    pcVar12 = (class_t *)local_a0;
    pcVar18 = (class_t *)(local_a0 + 0x18);
    _swift_dynamicCast(pcVar12,pcVar18,puVar8 + 8,PTR___type_metadata_for_Swift_String_100eac208,6);
    pcVar23 = (class_t *)local_a0._8_8_;
    pcVar24 = (class_t *)local_a0._0_8_;
    if (((ulong)pcVar12 & 1) == 0) goto LAB_10010c358;
  }
  if (param_1->cache == 0) {
LAB_10010c3e0:
    pcVar12 = pcVar23;
    _swift_bridgeObjectRetain();
    local_148 = pcVar23;
    local_140 = pcVar24;
  }
  else {
    _swift_bridgeObjectRetain(param_1);
    uVar19 = 0;
    lVar10 = -0x2fffffffffffffec;
    FUN_100071370(0xd000000000000014);
    if ((uVar19 & 1) == 0) {
      _swift_bridgeObjectRelease(param_1);
      goto LAB_10010c3e0;
    }
    FUN_10000cbfc(param_1[1].cache + lVar10 * 0x20,local_a0 + 0x18);
    _swift_bridgeObjectRelease(param_1);
    pcVar12 = (class_t *)local_a0;
    _swift_dynamicCast(pcVar12,local_a0 + 0x18,puVar8 + 8,
                       PTR___type_metadata_for_Swift_String_100eac208,6);
    if (((ulong)pcVar12 & 1) == 0) goto LAB_10010c3e0;
    local_148 = (class_t *)local_a0._8_8_;
    local_140 = (class_t *)local_a0._0_8_;
  }
  pcVar18 = (class_t *)PTR___swiftEmptyArrayStorage_100eae0d8;
  if (param_1->cache != 0) {
    _swift_bridgeObjectRetain(param_1);
    lVar10 = 0x4665727574616566;
    uVar19 = 0;
    FUN_100071370(0x4665727574616566);
    if ((uVar19 & 1) == 0) {
      pcVar12 = param_1;
      _swift_bridgeObjectRelease();
      pcVar18 = (class_t *)PTR___swiftEmptyArrayStorage_100eae0d8;
    }
    else {
      FUN_10000cbfc(param_1[1].cache + lVar10 * 0x20,local_a0 + 0x18);
      _swift_bridgeObjectRelease(param_1);
      puVar13 = &DAT_100faf898;
      FUN_1000f7830(&DAT_100faf898,&DAT_100c2eeb0);
      pcVar12 = (class_t *)local_a0;
      _swift_dynamicCast(pcVar12,local_a0 + 0x18,puVar8 + 8,puVar13,6);
      pcVar18 = (class_t *)PTR___swiftEmptyArrayStorage_100eae0d8;
      if (((ulong)pcVar12 & 1) != 0) {
        pcVar18 = (class_t *)local_a0._0_8_;
      }
    }
  }
  if (param_1->cache == 0) {
    local_160 = (class_t *)0x0;
    pcStack_158 = (class_t *)0x0;
LAB_10010c598:
    local_170 = (class_t *)0x0;
    pcStack_168 = (class_t *)0x0;
LAB_10010c59c:
    local_178 = (class_t *)0x0;
    if (param_1->cache != 0) goto LAB_10010c5a8;
LAB_10010c73c:
    local_188 = (class_t *)0x0;
    pcStack_180 = (class_t *)0x0;
LAB_10010c740:
    local_198 = (class_t *)0x0;
    pcStack_190 = (class_t *)0x0;
LAB_10010c744:
    local_1a8 = (class_t *)0x0;
    pcStack_1a0 = (class_t *)0x0;
  }
  else {
    _swift_bridgeObjectRetain(param_1);
    lVar10 = 0x64496563617274;
    uVar19 = 0;
    FUN_100071370(0x64496563617274);
    if ((uVar19 & 1) == 0) {
      pcVar12 = param_1;
      _swift_bridgeObjectRelease();
      local_160 = (class_t *)0x0;
      pcStack_158 = (class_t *)0x0;
      CVar20 = param_1->cache;
    }
    else {
      FUN_10000cbfc(param_1[1].cache + lVar10 * 0x20,local_a0 + 0x18);
      _swift_bridgeObjectRelease(param_1);
      pcVar12 = (class_t *)local_a0;
      _swift_dynamicCast(pcVar12,local_a0 + 0x18,puVar8 + 8,
                         PTR___type_metadata_for_Swift_String_100eac208,6);
      local_160 = (class_t *)local_a0._8_8_;
      pcStack_158 = (class_t *)local_a0._0_8_;
      if ((int)pcVar12 == 0) {
        pcStack_158 = (class_t *)0x0;
        local_160 = (class_t *)0x0;
      }
      CVar20 = param_1->cache;
    }
    if (CVar20 == 0) goto LAB_10010c598;
    _swift_bridgeObjectRetain(param_1);
    lVar10 = 0x64496e617073;
    uVar19 = 0;
    FUN_100071370(0x64496e617073);
    if ((uVar19 & 1) == 0) {
      pcVar12 = param_1;
      _swift_bridgeObjectRelease();
      local_170 = (class_t *)0x0;
      pcStack_168 = (class_t *)0x0;
      if (param_1->cache != 0) goto LAB_10010c6c8;
      goto LAB_10010c59c;
    }
    FUN_10000cbfc(param_1[1].cache + lVar10 * 0x20,local_a0 + 0x18);
    _swift_bridgeObjectRelease(param_1);
    pcVar12 = (class_t *)local_a0;
    _swift_dynamicCast(pcVar12,local_a0 + 0x18,puVar8 + 8,
                       PTR___type_metadata_for_Swift_String_100eac208,6);
    local_170 = (class_t *)local_a0._8_8_;
    pcStack_168 = (class_t *)local_a0._0_8_;
    if ((int)pcVar12 == 0) {
      pcStack_168 = (class_t *)0x0;
      local_170 = (class_t *)0x0;
    }
    if (param_1->cache == 0) goto LAB_10010c59c;
LAB_10010c6c8:
    _swift_bridgeObjectRetain(param_1);
    lVar10 = 0x616c466563617274;
    uVar19 = 0xea00000000007367;
    FUN_100071370(0x616c466563617274);
    if ((uVar19 & 1) == 0) {
      pcVar12 = param_1;
      _swift_bridgeObjectRelease();
      goto LAB_10010c59c;
    }
    FUN_10000cbfc(param_1[1].cache + lVar10 * 0x20,local_a0 + 0x18);
    _swift_bridgeObjectRelease(param_1);
    uVar14 = 0;
    FUN_100108da8(0);
    pcVar12 = (class_t *)local_a0;
    _swift_dynamicCast(pcVar12,local_a0 + 0x18,puVar8 + 8,uVar14,6);
    local_178 = (class_t *)local_a0._0_8_;
    if ((int)pcVar12 == 0) {
      local_178 = (class_t *)0x0;
    }
    if (param_1->cache == 0) goto LAB_10010c73c;
LAB_10010c5a8:
    _swift_bridgeObjectRetain(param_1);
    lVar10 = 0x74636e6974736964;
    uVar19 = 0xea00000000006449;
    FUN_100071370(0x74636e6974736964);
    if ((uVar19 & 1) == 0) {
      pcVar12 = param_1;
      _swift_bridgeObjectRelease();
      local_188 = (class_t *)0x0;
      pcStack_180 = (class_t *)0x0;
      CVar20 = param_1->cache;
    }
    else {
      FUN_10000cbfc(param_1[1].cache + lVar10 * 0x20,local_a0 + 0x18);
      _swift_bridgeObjectRelease(param_1);
      pcVar12 = (class_t *)local_a0;
      _swift_dynamicCast(pcVar12,local_a0 + 0x18,puVar8 + 8,
                         PTR___type_metadata_for_Swift_String_100eac208,6);
      local_188 = (class_t *)local_a0._8_8_;
      pcStack_180 = (class_t *)local_a0._0_8_;
      if ((int)pcVar12 == 0) {
        pcStack_180 = (class_t *)0x0;
        local_188 = (class_t *)0x0;
      }
      CVar20 = param_1->cache;
    }
    if (CVar20 == 0) goto LAB_10010c740;
    _swift_bridgeObjectRetain(param_1);
    lVar10 = 0x496e6f6973736573;
    uVar19 = 0;
    FUN_100071370(0x496e6f6973736573);
    if ((uVar19 & 1) == 0) {
      pcVar12 = param_1;
      _swift_bridgeObjectRelease();
      local_198 = (class_t *)0x0;
      pcStack_190 = (class_t *)0x0;
      if (param_1->cache != 0) goto LAB_10010c9d0;
      goto LAB_10010c744;
    }
    FUN_10000cbfc(param_1[1].cache + lVar10 * 0x20,local_a0 + 0x18);
    _swift_bridgeObjectRelease(param_1);
    pcVar12 = (class_t *)local_a0;
    _swift_dynamicCast(pcVar12,local_a0 + 0x18,puVar8 + 8,
                       PTR___type_metadata_for_Swift_String_100eac208,6);
    local_198 = (class_t *)local_a0._8_8_;
    pcStack_190 = (class_t *)local_a0._0_8_;
    if ((int)pcVar12 == 0) {
      pcStack_190 = (class_t *)0x0;
      local_198 = (class_t *)0x0;
    }
    if (param_1->cache == 0) goto LAB_10010c744;
LAB_10010c9d0:
    _swift_bridgeObjectRetain(param_1);
    lVar10 = 0x614e6e6565726373;
    uVar19 = 0xea0000000000656d;
    FUN_100071370(0x614e6e6565726373);
    if ((uVar19 & 1) == 0) {
      pcVar12 = param_1;
      _swift_bridgeObjectRelease();
      goto LAB_10010c744;
    }
    FUN_10000cbfc(param_1[1].cache + lVar10 * 0x20,local_a0 + 0x18);
    _swift_bridgeObjectRelease(param_1);
    pcVar12 = (class_t *)local_a0;
    _swift_dynamicCast(pcVar12,local_a0 + 0x18,puVar8 + 8,
                       PTR___type_metadata_for_Swift_String_100eac208,6);
    local_1a8 = (class_t *)local_a0._8_8_;
    pcStack_1a0 = (class_t *)local_a0._0_8_;
    if ((int)pcVar12 == 0) {
      pcStack_1a0 = (class_t *)0x0;
      local_1a8 = (class_t *)0x0;
    }
  }
  if (param_1->cache != 0) {
    _swift_bridgeObjectRetain(param_1);
    lVar10 = 0x6574617453707061;
    uVar19 = 0;
    FUN_100071370(0x6574617453707061);
    if ((uVar19 & 1) != 0) {
      FUN_10000cbfc(param_1[1].cache + lVar10 * 0x20,local_a0 + 0x18);
      _swift_bridgeObjectRelease(param_1);
      pcVar12 = (class_t *)local_a0;
      _swift_dynamicCast(pcVar12,local_a0 + 0x18,puVar8 + 8,
                         PTR___type_metadata_for_Swift_String_100eac208,6);
      local_1b8 = (class_t *)local_a0._8_8_;
      pcStack_1b0 = (class_t *)local_a0._0_8_;
      if ((int)pcVar12 == 0) {
        pcStack_1b0 = (class_t *)0x0;
        local_1b8 = (class_t *)0x0;
      }
      goto LAB_10010c7d0;
    }
    _swift_bridgeObjectRelease();
    pcVar12 = param_1;
  }
  local_1b8 = (class_t *)0x0;
  pcStack_1b0 = (class_t *)0x0;
LAB_10010c7d0:
  FUN_10010c0bc();
  pcVar15 = pcVar12;
  _objc_allocWithZone();
  lVar10 = _TtC7PostHog16PostHogLogRecord::traceFlags;
  puVar1 = (undefined8 *)((long)&pcVar15->isa + _TtC7PostHog16PostHogLogRecord::traceId);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar2 = (undefined8 *)((long)&pcVar15->isa + _TtC7PostHog16PostHogLogRecord::spanId);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 *)((long)&pcVar15->isa + _TtC7PostHog16PostHogLogRecord::traceFlags) = 0;
  puVar3 = (undefined8 *)((long)&pcVar15->isa + _TtC7PostHog16PostHogLogRecord::distinctId);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar4 = (undefined8 *)((long)&pcVar15->isa + _TtC7PostHog16PostHogLogRecord::sessionId);
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar5 = (undefined8 *)((long)&pcVar15->isa + _TtC7PostHog16PostHogLogRecord::screenName);
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar6 = (undefined8 *)((long)&pcVar15->isa + _TtC7PostHog16PostHogLogRecord::appState);
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar7 = (undefined8 *)((long)&pcVar15->isa + _TtC7PostHog16PostHogLogRecord::body);
  *puVar7 = uVar22;
  puVar7[1] = uVar9;
  *(class_t **)((long)&pcVar15->isa + _TtC7PostHog16PostHogLogRecord::level) = pcVar21;
  *(class_t **)((long)&pcVar15->isa + _TtC7PostHog16PostHogLogRecord::attributes) = local_130;
  _swift_beginAccess(puVar1,local_a0 + 0x18,1,0);
  *puVar1 = pcStack_158;
  puVar1[1] = local_160;
  _swift_beginAccess(puVar2,local_a0,1,0);
  *puVar2 = pcStack_168;
  puVar2[1] = local_170;
  _swift_beginAccess((undefined1 *)((long)&pcVar15->isa + lVar10),auStack_b8,1,0);
  *(class_t **)((long)&pcVar15->isa + lVar10) = local_178;
  puVar1 = (undefined8 *)((long)&pcVar15->isa + _TtC7PostHog16PostHogLogRecord::timeUnixNano);
  *puVar1 = pcVar24;
  puVar1[1] = pcVar23;
  puVar1 = (undefined8 *)
           ((long)&pcVar15->isa + _TtC7PostHog16PostHogLogRecord::observedTimeUnixNano);
  *puVar1 = local_140;
  puVar1[1] = local_148;
  _swift_beginAccess(puVar3,auStack_d0,1,0);
  uVar22 = puVar3[1];
  *puVar3 = pcStack_180;
  puVar3[1] = local_188;
  _swift_bridgeObjectRelease(uVar22);
  _swift_beginAccess(puVar4,auStack_e8,1,0);
  uVar22 = puVar4[1];
  *puVar4 = pcStack_190;
  puVar4[1] = local_198;
  _swift_bridgeObjectRelease(uVar22);
  _swift_beginAccess(puVar5,auStack_100,1,0);
  uVar22 = puVar5[1];
  *puVar5 = pcStack_1a0;
  puVar5[1] = local_1a8;
  _swift_bridgeObjectRelease(uVar22);
  uVar22 = puVar6[1];
  *puVar6 = pcStack_1b0;
  puVar6[1] = local_1b8;
  _swift_bridgeObjectRelease(uVar22);
  *(class_t **)((long)&pcVar15->isa + _TtC7PostHog16PostHogLogRecord::featureFlagKeys) = pcVar18;
  local_110.receiver = (ID)pcVar15;
  local_110.super_class = pcVar12;
  IVar16 = _objc_msgSendSuper2(&local_110,"init");
  return IVar16;
}



/* Address: 0x10010ca58 | FUN_10010ca58 */

void FUN_10010ca58(void)

{
  FUN_1000f7830(&DAT_100faf8f8,&DAT_100c2e4f0);
  _swift_initStaticObject();
  return;
}



/* Address: 0x10010ca84 | thunk_FUN_10010d1a4 */

void thunk_FUN_10010d1a4(void)

{
  FUN_10010d1a4();
  return;
}



/* Address: 0x10010ca88 | FUN_10010ca88 */

void FUN_10010ca88(undefined8 param_1,Hasher param_2)

{
  Hasher HVar1;
  undefined8 *unaff_x20;
  
  HVar1.unknown = (undefined *)*unaff_x20;
  Swift::Hasher::init(0);
  Swift::Hasher::_combine((__uint64)HVar1.unknown,param_2);
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x10010cacc | FUN_10010cacc */

void FUN_10010cacc(__int64 param_1,Hasher param_2)

{
  Hasher HVar1;
  undefined8 *unaff_x20;
  
  HVar1.unknown = (undefined *)*unaff_x20;
  Swift::Hasher::init(param_1);
  Swift::Hasher::_combine((__uint64)HVar1.unknown,param_2);
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x10010cb0c | FUN_10010cb0c */

void FUN_10010cb0c(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_10010d1a4();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Address: 0x10010cb38 | FUN_10010cb38 */

void FUN_10010cb38(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100faf8f8;
  FUN_1000f7830(&DAT_100faf8f8,&DAT_100c2e4f0);
  _swift_initStaticObject();
  *param_1 = puVar1;
  return;
}



/* Address: 0x10010cb78 | FUN_10010cb78 */

undefined1  [16] FUN_10010cb78(long param_1,undefined8 param_2)

{
  String SVar1;
  String SVar2;
  String SVar3;
  String SVar4;
  String SVar5;
  long lVar6;
  code *pcVar7;
  bool bVar8;
  CharacterSet CVar9;
  CharacterSet CVar10;
  _StringGuts _Var11;
  undefined *puVar12;
  _StringComparisonResult expecting;
  long extraout_x8;
  long lVar13;
  _StringGuts _Var14;
  ulong uVar15;
  CharacterSet in;
  _StringGuts _Var16;
  long lVar17;
  String SVar18;
  String SVar19;
  undefined1 auVar20 [16];
  long local_60;
  undefined8 uStack_58;
  
  _Var14.unknown = (undefined *)0x6563617274;
  CVar9 = Foundation::CharacterSet::typeMetadataAccessor();
  lVar17 = *(long *)(CVar9.unknown + -8);
  CVar10 = CVar9;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar17 + 0x40));
  in.unknown = (undefined *)((long)&local_60 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  local_60 = param_1;
  uStack_58 = param_2;
  Foundation::CharacterSet::get_whitespacesAndNewlines(CVar10);
  FUN_1001013b8();
  SVar18 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(in);
  (**(code **)(lVar17 + 8))(in.unknown,CVar9.unknown);
  SVar19 = Swift::String::lowercased(SVar18);
  puVar12 = SVar19.bridgeObject;
  _swift_bridgeObjectRelease(SVar18.bridgeObject);
  lVar17 = DAT_100faf8c8;
  if (DAT_100faf8c8 < 3) {
    if (DAT_100faf8c8 == 0) {
      _Var16.unknown = &DAT_e500000000000000;
      _Var11.unknown = _Var14.unknown;
    }
    else if (DAT_100faf8c8 == 1) {
      _Var16.unknown = &DAT_e500000000000000;
      _Var11.unknown = (undefined *)0x6775626564;
    }
    else {
      if (DAT_100faf8c8 != 2) goto LAB_10010d180;
      _Var16.unknown = &DAT_e400000000000000;
      _Var11.unknown = (undefined *)0x6f666e69;
    }
  }
  else if (DAT_100faf8c8 == 3) {
    _Var16.unknown = &DAT_e400000000000000;
    _Var11.unknown = (undefined *)0x6e726177;
  }
  else if (DAT_100faf8c8 == 4) {
    _Var16.unknown = &DAT_e500000000000000;
    _Var11.unknown = (undefined *)0x726f727265;
  }
  else {
    if (DAT_100faf8c8 != 5) goto LAB_10010d180;
    _Var16.unknown = &DAT_e500000000000000;
    _Var11.unknown = (undefined *)0x6c61746166;
  }
  SVar18.bridgeObject = _Var16.unknown;
  SVar18.str = _Var11.unknown;
  lVar13 = DAT_100faf8c8;
  if (SVar19 != SVar18) {
    expecting.value = SVar19.str._0_1_;
    bVar8 = Swift::_stringCompareWithSmolCheck(_Var11,_Var16,expecting);
    _swift_bridgeObjectRelease(_Var16.unknown);
    lVar13 = DAT_100faf8d0;
    if (bVar8) {
LAB_10010cd0c:
      lVar13 = lVar17;
      uVar15 = 0;
      goto LAB_10010cea4;
    }
    lVar17 = DAT_100faf8d0;
    if (DAT_100faf8d0 < 3) {
      if (DAT_100faf8d0 == 0) {
        _Var16.unknown = &DAT_e500000000000000;
        _Var11.unknown = _Var14.unknown;
      }
      else if (DAT_100faf8d0 == 1) {
        _Var16.unknown = &DAT_e500000000000000;
        _Var11.unknown = (undefined *)0x6775626564;
      }
      else {
        if (DAT_100faf8d0 != 2) goto LAB_10010d180;
        _Var16.unknown = &DAT_e400000000000000;
        _Var11.unknown = (undefined *)0x6f666e69;
      }
    }
    else if (DAT_100faf8d0 == 3) {
      _Var16.unknown = &DAT_e400000000000000;
      _Var11.unknown = (undefined *)0x6e726177;
    }
    else if (DAT_100faf8d0 == 4) {
      _Var16.unknown = &DAT_e500000000000000;
      _Var11.unknown = (undefined *)0x726f727265;
    }
    else {
      if (DAT_100faf8d0 != 5) goto LAB_10010d180;
      _Var16.unknown = &DAT_e500000000000000;
      _Var11.unknown = (undefined *)0x6c61746166;
    }
    SVar5.bridgeObject = _Var16.unknown;
    SVar5.str = _Var11.unknown;
    if (SVar19 != SVar5) {
      bVar8 = Swift::_stringCompareWithSmolCheck(_Var11,_Var16,expecting);
      _swift_bridgeObjectRelease(_Var16.unknown);
      lVar6 = DAT_100faf8d8;
      lVar17 = lVar13;
      if (bVar8) goto LAB_10010cd0c;
      lVar17 = DAT_100faf8d8;
      if (DAT_100faf8d8 < 3) {
        if (DAT_100faf8d8 == 0) {
          _Var16.unknown = &DAT_e500000000000000;
          _Var11.unknown = _Var14.unknown;
        }
        else if (DAT_100faf8d8 == 1) {
          _Var16.unknown = &DAT_e500000000000000;
          _Var11.unknown = (undefined *)0x6775626564;
        }
        else {
          if (DAT_100faf8d8 != 2) goto LAB_10010d180;
          _Var16.unknown = &DAT_e400000000000000;
          _Var11.unknown = (undefined *)0x6f666e69;
        }
      }
      else if (DAT_100faf8d8 == 3) {
        _Var16.unknown = &DAT_e400000000000000;
        _Var11.unknown = (undefined *)0x6e726177;
      }
      else if (DAT_100faf8d8 == 4) {
        _Var16.unknown = &DAT_e500000000000000;
        _Var11.unknown = (undefined *)0x726f727265;
      }
      else {
        if (DAT_100faf8d8 != 5) goto LAB_10010d180;
        _Var16.unknown = &DAT_e500000000000000;
        _Var11.unknown = (undefined *)0x6c61746166;
      }
      SVar2.bridgeObject = _Var16.unknown;
      SVar2.str = _Var11.unknown;
      lVar13 = DAT_100faf8d8;
      if (SVar19 != SVar2) {
        bVar8 = Swift::_stringCompareWithSmolCheck(_Var11,_Var16,expecting);
        _swift_bridgeObjectRelease(_Var16.unknown);
        lVar13 = DAT_100faf8e0;
        lVar17 = lVar6;
        if (bVar8) goto LAB_10010cd0c;
        lVar17 = DAT_100faf8e0;
        if (DAT_100faf8e0 < 3) {
          if (DAT_100faf8e0 == 0) {
            _Var16.unknown = &DAT_e500000000000000;
            _Var11.unknown = _Var14.unknown;
          }
          else if (DAT_100faf8e0 == 1) {
            _Var16.unknown = &DAT_e500000000000000;
            _Var11.unknown = (undefined *)0x6775626564;
          }
          else {
            if (DAT_100faf8e0 != 2) goto LAB_10010d180;
            _Var16.unknown = &DAT_e400000000000000;
            _Var11.unknown = (undefined *)0x6f666e69;
          }
        }
        else if (DAT_100faf8e0 == 3) {
          _Var16.unknown = &DAT_e400000000000000;
          _Var11.unknown = (undefined *)0x6e726177;
        }
        else if (DAT_100faf8e0 == 4) {
          _Var16.unknown = &DAT_e500000000000000;
          _Var11.unknown = (undefined *)0x726f727265;
        }
        else {
          if (DAT_100faf8e0 != 5) goto LAB_10010d180;
          _Var16.unknown = &DAT_e500000000000000;
          _Var11.unknown = (undefined *)0x6c61746166;
        }
        SVar1.bridgeObject = _Var16.unknown;
        SVar1.str = _Var11.unknown;
        if (SVar19 != SVar1) {
          bVar8 = Swift::_stringCompareWithSmolCheck(_Var11,_Var16,expecting);
          _swift_bridgeObjectRelease(_Var16.unknown);
          lVar6 = DAT_100faf8e8;
          lVar17 = lVar13;
          if (bVar8) goto LAB_10010cd0c;
          lVar17 = DAT_100faf8e8;
          if (DAT_100faf8e8 < 3) {
            if (DAT_100faf8e8 == 0) {
              _Var16.unknown = &DAT_e500000000000000;
              _Var11.unknown = _Var14.unknown;
            }
            else if (DAT_100faf8e8 == 1) {
              _Var16.unknown = &DAT_e500000000000000;
              _Var11.unknown = (undefined *)0x6775626564;
            }
            else {
              if (DAT_100faf8e8 != 2) goto LAB_10010d180;
              _Var16.unknown = &DAT_e400000000000000;
              _Var11.unknown = (undefined *)0x6f666e69;
            }
          }
          else if (DAT_100faf8e8 == 3) {
            _Var16.unknown = &DAT_e400000000000000;
            _Var11.unknown = (undefined *)0x6e726177;
          }
          else if (DAT_100faf8e8 == 4) {
            _Var16.unknown = &DAT_e500000000000000;
            _Var11.unknown = (undefined *)0x726f727265;
          }
          else {
            if (DAT_100faf8e8 != 5) goto LAB_10010d180;
            _Var16.unknown = &DAT_e500000000000000;
            _Var11.unknown = (undefined *)0x6c61746166;
          }
          SVar3.bridgeObject = _Var16.unknown;
          SVar3.str = _Var11.unknown;
          lVar13 = DAT_100faf8e8;
          if (SVar19 != SVar3) {
            bVar8 = Swift::_stringCompareWithSmolCheck(_Var11,_Var16,expecting);
            _swift_bridgeObjectRelease(_Var16.unknown);
            lVar13 = DAT_100faf8f0;
            lVar17 = lVar6;
            if (bVar8) goto LAB_10010cd0c;
            lVar17 = DAT_100faf8f0;
            if (DAT_100faf8f0 < 3) {
              if (DAT_100faf8f0 == 0) {
                _Var16.unknown = &DAT_e500000000000000;
              }
              else if (DAT_100faf8f0 == 1) {
                _Var16.unknown = &DAT_e500000000000000;
                _Var14.unknown = (undefined *)0x6775626564;
              }
              else {
                if (DAT_100faf8f0 != 2) {
LAB_10010d180:
                  local_60 = lVar17;
                  Swift::__diagnoseUnexpectedEnumCaseValue
                            (&DAT_100eb7c50,&local_60,&DAT_100eb7c50,
                             PTR___type_metadata_for_Swift_Int_100eac6f8);
                    /* WARNING: Does not return */
                  pcVar7 = (code *)SoftwareBreakpoint(1,0x10010d1a4);
                  (*pcVar7)();
                }
                _Var16.unknown = &DAT_e400000000000000;
                _Var14.unknown = (undefined *)0x6f666e69;
              }
            }
            else if (DAT_100faf8f0 == 3) {
              _Var16.unknown = &DAT_e400000000000000;
              _Var14.unknown = (undefined *)0x6e726177;
            }
            else if (DAT_100faf8f0 == 4) {
              _Var16.unknown = &DAT_e500000000000000;
              _Var14.unknown = (undefined *)0x726f727265;
            }
            else {
              if (DAT_100faf8f0 != 5) goto LAB_10010d180;
              _Var16.unknown = &DAT_e500000000000000;
              _Var14.unknown = (undefined *)0x6c61746166;
            }
            SVar4.bridgeObject = _Var16.unknown;
            SVar4.str = _Var14.unknown;
            if (SVar19 != SVar4) {
              bVar8 = Swift::_stringCompareWithSmolCheck(_Var14,_Var16,expecting);
              _swift_bridgeObjectRelease(_Var16.unknown);
              if (!bVar8) {
                lVar13 = 0;
              }
              uVar15 = (ulong)((bVar8 ^ 0xffffffff) & 1);
              goto LAB_10010cea4;
            }
          }
        }
      }
    }
  }
  _swift_bridgeObjectRelease(puVar12);
  uVar15 = 0;
  puVar12 = _Var16.unknown;
LAB_10010cea4:
  _swift_bridgeObjectRelease(puVar12);
  auVar20._8_8_ = uVar15;
  auVar20._0_8_ = lVar13;
  return auVar20;
}



/* Address: 0x10010d1a4 | FUN_10010d1a4 */

undefined1  [16] FUN_10010d1a4(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 6) {
    uVar1 = param_1;
  }
  auVar2[8] = 5 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Address: 0x10010d1b4 | thunk_FUN_10010d1b8 */

void thunk_FUN_10010d1b8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100faf900 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2e4f8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2e4f8,&DAT_100eb7c50);
  DAT_100faf900 = pTVar1;
  return;
}



/* Address: 0x10010d1b8 | FUN_10010d1b8 */

void FUN_10010d1b8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100faf900 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2e4f8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2e4f8,&DAT_100eb7c50);
  DAT_100faf900 = pTVar1;
  return;
}



/* Address: 0x10010d1f8 | thunk_FUN_10010d1fc */

void thunk_FUN_10010d1fc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100faf908 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100faf910;
  FUN_1000f8b08(&DAT_100faf910,&DAT_100c2e598);
  puVar2 = PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548;
  _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548,puVar1);
  DAT_100faf908 = puVar2;
  return;
}



/* Address: 0x10010d1fc | FUN_10010d1fc */

void FUN_10010d1fc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100faf908 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100faf910;
  FUN_1000f8b08(&DAT_100faf910,&DAT_100c2e598);
  puVar2 = PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548;
  _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548,puVar1);
  DAT_100faf908 = puVar2;
  return;
}



/* Address: 0x10010d24c | FUN_10010d24c */

undefined1  [16] FUN_10010d24c(void)

{
  return ZEXT816(0x100eb7c50);
}



/* Address: 0x10010d25c | FUN_10010d25c */

void FUN_10010d25c(undefined8 param_1,undefined8 param_2)

{
  FUN_10010d304(param_1,param_2,0);
  return;
}



/* Address: 0x10010d264 | _TtC7PostHog13PostHogLogger::traceWithBody: */

/* Function Stack Size: 0x18 bytes */

void _TtC7PostHog13PostHogLogger::traceWithBody_(ID param_1,SEL param_2,ID param_3)

{
  FUN_10010d3a0();
  return;
}



/* Address: 0x10010d26c | FUN_10010d26c */

void FUN_10010d26c(void)

{
  FUN_10010d45c();
  return;
}



/* Address: 0x10010d274 | _TtC7PostHog13PostHogLogger::traceWithBody:attributes: */

/* Function Stack Size: 0x20 bytes */

void _TtC7PostHog13PostHogLogger::traceWithBody_attributes_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  FUN_10010d50c();
  return;
}



/* Address: 0x10010d27c | FUN_10010d27c */

void FUN_10010d27c(undefined8 param_1,undefined8 param_2)

{
  FUN_10010d304(param_1,param_2,1);
  return;
}



/* Address: 0x10010d284 | _TtC7PostHog13PostHogLogger::debugWithBody: */

/* Function Stack Size: 0x18 bytes */

void _TtC7PostHog13PostHogLogger::debugWithBody_(ID param_1,SEL param_2,ID param_3)

{
  FUN_10010d3a0();
  return;
}



/* Address: 0x10010d28c | FUN_10010d28c */

void FUN_10010d28c(void)

{
  FUN_10010d45c();
  return;
}



/* Address: 0x10010d294 | _TtC7PostHog13PostHogLogger::debugWithBody:attributes: */

/* Function Stack Size: 0x20 bytes */

void _TtC7PostHog13PostHogLogger::debugWithBody_attributes_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  FUN_10010d50c();
  return;
}



/* Address: 0x10010d29c | FUN_10010d29c */

void FUN_10010d29c(undefined8 param_1,undefined8 param_2)

{
  FUN_10010d304(param_1,param_2,2);
  return;
}



/* Address: 0x10010d2a4 | _TtC7PostHog13PostHogLogger::infoWithBody: */

/* Function Stack Size: 0x18 bytes */

void _TtC7PostHog13PostHogLogger::infoWithBody_(ID param_1,SEL param_2,ID param_3)

{
  FUN_10010d3a0();
  return;
}



/* Address: 0x10010d2ac | FUN_10010d2ac */

void FUN_10010d2ac(void)

{
  FUN_10010d45c();
  return;
}



/* Address: 0x10010d2b4 | _TtC7PostHog13PostHogLogger::infoWithBody:attributes: */

/* Function Stack Size: 0x20 bytes */

void _TtC7PostHog13PostHogLogger::infoWithBody_attributes_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  FUN_10010d50c();
  return;
}



/* Address: 0x10010d2bc | FUN_10010d2bc */

void FUN_10010d2bc(undefined8 param_1,undefined8 param_2)

{
  FUN_10010d304(param_1,param_2,3);
  return;
}



/* Address: 0x10010d2c4 | _TtC7PostHog13PostHogLogger::warnWithBody: */

/* Function Stack Size: 0x18 bytes */

void _TtC7PostHog13PostHogLogger::warnWithBody_(ID param_1,SEL param_2,ID param_3)

{
  FUN_10010d3a0();
  return;
}


