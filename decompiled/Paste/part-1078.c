/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100b7cdd4 | FUN_100b7cdd4 */

void FUN_100b7cdd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  Date DVar1;
  long lVar2;
  undefined *puVar3;
  NSComparisonResult NVar4;
  Date DVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x9;
  long extraout_x9_00;
  Date DVar6;
  undefined *puVar7;
  Date DVar8;
  long lVar9;
  long lVar10;
  
  puVar7 = &DAT_101044980;
  FUN_100b6730c();
  FUN_100b6f9e0(*(undefined8 *)(*(long *)(puVar7 + -8) + 0x40));
  DVar6.unknown = (undefined *)(extraout_x9 - extraout_x8);
  lVar9 = (long)DVar6.unknown - extraout_x8;
  DVar1 = Foundation::Date::typeMetadataAccessor();
  lVar10 = *(long *)(DVar1.unknown + -8);
  FUN_100b6f9e0(*(undefined8 *)(lVar10 + 0x40));
  DVar8.unknown = (undefined *)(extraout_x9_00 - extraout_x8_00);
  puVar7 = DVar8.unknown + -extraout_x8_00;
  FUN_1000057b8(param_2,lVar9);
  lVar2 = lVar9;
  FUN_1000c9ff0(lVar9,1,DVar1.unknown);
  if ((int)lVar2 == 1) {
    FUN_10004e7d4(lVar9);
    FUN_1000057b8(param_3,param_1);
  }
  else {
    FUN_100b7d188(puVar7,lVar9);
    FUN_1000057b8(param_3,DVar6.unknown);
    puVar3 = DVar6.unknown;
    FUN_1000c9ff0(DVar6.unknown,1,DVar1.unknown);
    DVar5.unknown = puVar7;
    if ((int)puVar3 == 1) {
      FUN_10004e7d4(DVar6.unknown);
    }
    else {
      FUN_100b7d188(DVar8.unknown);
      NVar4 = Foundation::Date::compare(DVar8,DVar6);
      if (NVar4.unknown != &DAT_00000001) {
        DVar5.unknown = DVar8.unknown;
        DVar8.unknown = puVar7;
      }
      (**(code **)(lVar10 + 8))(DVar8.unknown,DVar1.unknown);
    }
    FUN_100b7d188(param_1,DVar5.unknown);
    FUN_1000c9ffc(param_1,0,1,DVar1.unknown);
  }
  return;
}



/* Address: 0x100b7cf48 | _TtC6Sentry14SentryDateUtil::getMaximumDate:andOther: */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID _TtC6Sentry14SentryDateUtil::getMaximumDate_andOther_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  Date DVar1;
  Date DVar2;
  ulong uVar3;
  undefined1 *puVar4;
  NSDate *pNVar5;
  undefined *puVar6;
  long lVar7;
  
  puVar6 = &DAT_101044980;
  FUN_100b6730c();
  uVar3 = *(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar4 = &stack0xffffffffffffffc0 + -uVar3;
  lVar7 = (long)puVar4 - uVar3;
  puVar6 = (undefined *)(lVar7 - uVar3);
  if (param_3 == 0) {
    DVar1 = Foundation::Date::typeMetadataAccessor();
  }
  else {
    Foundation::Date::__unconditionallyBridgeFromObjectiveC((Date)param_3);
    DVar1 = Foundation::Date::typeMetadataAccessor();
  }
  FUN_1000c9ffc(lVar7,param_3 == 0,1,DVar1.unknown);
  if (param_4 != 0) {
    Foundation::Date::__unconditionallyBridgeFromObjectiveC((Date)param_4);
  }
  DVar2 = Foundation::Date::typeMetadataAccessor();
  FUN_1000c9ffc(puVar4,param_4 == 0,1,DVar2.unknown);
  FUN_100b7cdd4(puVar6,lVar7,puVar4);
  FUN_10004e7d4(puVar4);
  FUN_10004e7d4(lVar7);
  DVar1.unknown = puVar6;
  FUN_1000c9ff0(puVar6,1,DVar2.unknown);
  pNVar5 = (NSDate *)0x0;
  if ((int)DVar1.unknown != 1) {
    pNVar5 = Foundation::Date::_bridgeToObjectiveC(DVar1);
    (**(code **)(*(long *)(DVar2.unknown + -8) + 8))(puVar6,DVar2.unknown);
  }
  return (ID)pNVar5;
}



/* Address: 0x100b7d090 | _TtC6Sentry14SentryDateUtil::millisecondsSince1970: */

/* Function Stack Size: 0x18 bytes */

long_long _TtC6Sentry14SentryDateUtil::millisecondsSince1970_(ID param_1,SEL param_2,ID param_3)

{
  Date DVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  
  DVar1 = Foundation::Date::typeMetadataAccessor();
  lVar4 = *(long *)(DVar1.unknown + -8);
  lVar3 = *(long *)(lVar4 + 0x40);
  Foundation::Date::__unconditionallyBridgeFromObjectiveC((Date)param_3);
  puVar2 = &stack0xffffffffffffffd0 + -(lVar3 + 0xfU & 0xfffffffffffffff0);
  FUN_100b7cab8();
  (**(code **)(lVar4 + 8))
            (&stack0xffffffffffffffd0 + -(lVar3 + 0xfU & 0xfffffffffffffff0),DVar1.unknown);
  return (long_long)puVar2;
}



/* Address: 0x100b7d10c | FUN_100b7d10c */

void FUN_100b7d10c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("Sentry.SentryDateUtil",0x15,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100b7d138);
  (*pcVar1)();
}



/* Address: 0x100b7d138 | _TtC6Sentry14SentryDateUtil::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry14SentryDateUtil::init(ID param_1,SEL param_2)

{
  ID IVar1;
  
  FUN_100b7d10c();
  IVar1 = *(ID *)(param_1 + currentDateProvider);
  _swift_unknownObjectRelease();
  return IVar1;
}



/* Address: 0x100b7d144 | _TtC6Sentry14SentryDateUtil::.cxx_destruct */

/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry14SentryDateUtil::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + currentDateProvider));
  return;
}



/* Address: 0x100b7d154 | FUN_100b7d154 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100b7d154(void)

{
  return ZEXT816(0x100f9ff88);
}



/* Address: 0x100b7d174 | FUN_100b7d174 */

void FUN_100b7d174(undefined8 param_1,undefined8 param_2)

{
  _swift_lookUpClassMethod(param_1,param_2,&TargetClassDescriptor_100ccd908);
  return;
}



/* Address: 0x100b7d180 | FUN_100b7d180 */

void FUN_100b7d180(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100b7d184. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x20 + 0x58))();
  return;
}



/* Address: 0x100b7d188 | FUN_100b7d188 */

void FUN_100b7d188(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x000100b7d18c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x100b7d190 | FUN_100b7d190 */

void FUN_100b7d190(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  FUN_100b7d424(unaff_x20 +
                _TtC6Sentry27SentryDefaultAppHangTracker::runLoopDelayTrackerObserverToken);
  _swift_release(*(undefined8 *)(unaff_x20 + _TtC6Sentry27SentryDefaultAppHangTracker::observers));
  return;
}



/* Address: 0x100b7d1cc | FUN_100b7d1cc */

void FUN_100b7d1cc(void)

{
  FUN_100b7d190();
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100b7d1f0 | FUN_100b7d1f0 */

void FUN_100b7d1f0(void)

{
  FUN_100b7d1f8(0);
  return;
}



/* Address: 0x100b7d1f8 | FUN_100b7d1f8 */

void FUN_100b7d1f8(undefined8 param_1)

{
  if (DAT_101045118 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetClassDescriptor_100ccd944);
  return;
}



/* Address: 0x100b7d230 | FUN_100b7d230 */

void FUN_100b7d230(long param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *local_38;
  long local_30;
  undefined *puStack_28;
  
  puVar1 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
  lVar2 = 0x13f;
  local_38 = puVar1;
  FUN_100b7d2ac();
  if (param_2 < 0x40) {
    local_30 = *(long *)(lVar2 + -8) + 0x40;
    puStack_28 = puVar1;
    _swift_updateClassMetadata2(param_1,0x100,3,&local_38,param_1 + 0x50);
  }
  return;
}



/* Address: 0x100b7d2ac | FUN_100b7d2ac */

void FUN_100b7d2ac(void)

{
  Optional OVar1;
  UUID UVar2;
  undefined7 extraout_var;
  
  if (DAT_101045128 == 0) {
    UVar2 = Foundation::UUID::typeMetadataAccessor();
    OVar1 = Swift::Optional::typeMetadataAccessor();
    if (UVar2.unknown == (undefined *)0x0) {
      DAT_101045128 = CONCAT71(extraout_var,OVar1.value);
    }
  }
  return;
}



/* Address: 0x100b7d300 | FUN_100b7d300 */

undefined8 * FUN_100b7d300(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  _swift_retain();
  return param_1;
}



/* Address: 0x100b7d33c | FUN_100b7d33c */

undefined8 * FUN_100b7d33c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar1 = param_2[2];
  uVar2 = param_1[2];
  param_1[1] = param_2[1];
  param_1[2] = uVar1;
  _swift_retain();
  _swift_release(uVar2);
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  return param_1;
}



/* Address: 0x100b7d390 | FUN_100b7d390 */

undefined8 * FUN_100b7d390(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar1 = param_1[2];
  uVar2 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  _swift_release(uVar1);
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  return param_1;
}



/* Address: 0x100b7d3d4 | FUN_100b7d3d4 */

int FUN_100b7d3d4(int *param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    iVar1 = -1;
  }
  else if ((param_2 < 0) && (*(char *)((long)param_1 + 0x19) != '\0')) {
    iVar1 = *param_1 + 0x7fffffff;
  }
  else {
    uVar2 = *(ulong *)(param_1 + 2);
    if (0xfffffffe < uVar2) {
      uVar2 = 0xffffffff;
    }
    iVar1 = (int)uVar2;
  }
  return iVar1 + 1;
}



/* Address: 0x100b7d414 | FUN_100b7d414 */

undefined1  [16] FUN_100b7d414(void)

{
  return ZEXT816(0x100f373c8);
}



/* Address: 0x100b7d424 | FUN_100b7d424 */

undefined8 FUN_100b7d424(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_1010451b8;
  FUN_100b6730c();
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x100b7d464 | _TtC6Sentry24SentryPropagationContext::traceId */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry24SentryPropagationContext::traceId(ID param_1,SEL param_2)

{
  FUN_100b7d484();
  return param_1;
}



/* Address: 0x100b7d484 | FUN_100b7d484 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_100b7d484(void)

{
  long unaff_x20;
  
  return *(undefined8 *)(unaff_x20 + _TtC6Sentry24SentryPropagationContext::traceId);
}



/* Address: 0x100b7d494 | _TtC6Sentry24SentryPropagationContext::traceHeader */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry24SentryPropagationContext::traceHeader(ID param_1,SEL param_2)

{
  FUN_100b7d4c8();
  return param_1;
}



/* Address: 0x100b7d4c8 | FUN_100b7d4c8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100b7d4c8(void)

{
  long unaff_x20;
  
  FUN_100b7d520(0);
  FUN_100b7dc4c(*(undefined8 *)(unaff_x20 + _TtC6Sentry24SentryPropagationContext::traceId));
  FUN_100b7d55c();
  FUN_100b56e60();
  return;
}



/* Address: 0x100b7d520 | FUN_100b7d520 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_100b7d520(void)

{
  class_t *pcVar1;
  
  if (DAT_1010451c8 == (class_t *)0x0) {
    pcVar1 = &objc::class_t::SentryTraceHeader;
    _swift_getObjCClassMetadata();
    DAT_1010451c8 = pcVar1;
  }
  return;
}



/* Address: 0x100b7d55c | FUN_100b7d55c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100b7d55c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ID IVar1;
  ID unaff_x20;
  
  _swift_getObjCClassFromMetadata();
  _objc_allocWithZone();
  IVar1 = _objc_msgSend(unaff_x20,"initWithTraceId:spanId:sampled:",param_1,param_2,param_3);
  return IVar1;
}



/* Address: 0x100b7d5c4 | FUN_100b7d5c4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100b7d5c4(class_t *param_1)

{
  class_t *pcVar1;
  ID IVar2;
  class_t *self;
  ID unaff_x21;
  objc_super local_40;
  
  FUN_100b69e00();
  pcVar1 = &objc::class_t::SentryId;
  _objc_allocWithZone();
  FUN_100b7dc4c();
  IVar2 = _objc_msgSend(unaff_x21,"init");
  *(ID *)((long)&pcVar1->isa + _TtC6Sentry24SentryPropagationContext::traceId) = IVar2;
  self = &objc::class_t::SentrySpanId;
  _objc_allocWithZone();
  IVar2 = _objc_msgSend((ID)self,"init");
  *(ID *)((long)&pcVar1->isa + _TtC6Sentry24SentryPropagationContext::spanId) = IVar2;
  local_40.receiver = (ID)pcVar1;
  local_40.super_class = param_1;
  _objc_msgSendSuper2(&local_40,"init");
  FUN_100b69e90();
  return;
}



/* Address: 0x100b7d650 | _TtC6Sentry24SentryPropagationContext::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry24SentryPropagationContext::init(ID param_1,SEL param_2)

{
  FUN_100b7d5c4();
  return param_1;
}



/* Address: 0x100b7d670 | FUN_100b7d670 */

void FUN_100b7d670(undefined8 param_1,undefined8 param_2)

{
  _objc_allocWithZone();
  FUN_100b7d6a8(param_1,param_2);
  FUN_100b56e60();
  return;
}



/* Address: 0x100b7d6a8 | FUN_100b7d6a8 */

void FUN_100b7d6a8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_100b69e00();
  *(undefined8 *)(unaff_x20 + _TtC6Sentry24SentryPropagationContext::traceId) = param_1;
  *(undefined8 *)(unaff_x20 + _TtC6Sentry24SentryPropagationContext::spanId) = param_2;
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffc0,"init");
  FUN_100b69e90();
  return;
}



/* Address: 0x100b7d6fc | _TtC6Sentry24SentryPropagationContext::initWithTraceId:spanId: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID _TtC6Sentry24SentryPropagationContext::initWithTraceId_spanId_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  FUN_100b7d6a8(param_3,param_4);
  return param_3;
}



/* Address: 0x100b7d744 | FUN_100b7d744 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100b7d840 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100b7d744(void)

{
  undefined *puVar1;
  ID self;
  long unaff_x20;
  String SVar2;
  
  puVar1 = &DAT_101044b18;
  FUN_100b6730c();
  _swift_initStackObject();
  *(undefined8 *)(puVar1 + 0x18) = 4;
  *(undefined8 *)(puVar1 + 0x10) = 2;
  *(undefined8 *)(puVar1 + 0x20) = 0x64695f6e617073;
  *(undefined1 **)(puVar1 + 0x28) = &DAT_e700000000000000;
  _objc_msgSend(*(ID *)(unaff_x20 + _TtC6Sentry24SentryPropagationContext::spanId),
                "sentrySpanIdString");
  SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  *(String *)(puVar1 + 0x30) = SVar2;
  *(undefined8 *)(puVar1 + 0x40) = 0x64695f6563617274;
  *(undefined1 **)(puVar1 + 0x48) = &DAT_e800000000000000;
  self = *(ID *)(unaff_x20 + _TtC6Sentry24SentryPropagationContext::traceId);
  _objc_msgSend(self,"sentryIdString");
  SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  *(String *)(puVar1 + 0x50) = SVar2;
  Swift::Dictionary::_init
            (self,PTR___type_metadata_for_Swift_String_100eac208,
             PTR___type_metadata_for_Swift_String_100eac208,
             PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100eac218);
  return;
}



/* Address: 0x100b7d85c | _TtC6Sentry24SentryPropagationContext::traceContextForEvent */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry24SentryPropagationContext::traceContextForEvent(ID param_1,SEL param_2)

{
  NSDictionary *pNVar1;
  
  FUN_100b7d744(param_1);
  pNVar1 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_1);
  return (ID)pNVar1;
}



/* Address: 0x100b7d8b8 | FUN_100b7d8b8 */

undefined8 FUN_100b7d8b8(undefined *param_1,char *param_2,undefined *param_3)

{
  char *pcVar1;
  String SVar2;
  long lVar3;
  bool bVar4;
  _StringGuts _Var5;
  _StringGuts _Var6;
  char *pcVar7;
  undefined *puVar8;
  void *pvVar9;
  _StringGuts _Var10;
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
  char *local_68;
  void *local_60;
  
  _Var10.unknown = param_1;
  _Var5.unknown = param_2;
  FUN_100b8cc5c();
  if ((((_Var5.unknown == (undefined *)0x0) || (param_3 == (undefined *)0x0)) ||
      (_Var10.unknown == param_2 && _Var5.unknown == param_3)) ||
     (_Var6.unknown = _Var5.unknown, pcVar7 = param_2, puVar8 = param_3,
     bVar4 = Swift::_stringCompareWithSmolCheck
                       (_Var10,_Var5,(_StringComparisonResult)(__int8)param_2), bVar4)) {
    lVar3 = SentryOptions::strictTraceContinuation;
    pcVar7 = (char *)0x0;
    pvVar9 = (void *)0x0;
    _swift_beginAccess(param_1 + SentryOptions::strictTraceContinuation,&local_68);
    if (param_1[lVar3] != '\x01') {
LAB_100b7d950:
      _swift_bridgeObjectRelease(_Var5.unknown);
      return 1;
    }
    if (_Var5.unknown == (undefined *)0x0) {
      if (param_3 == (undefined *)0x0) {
        return 1;
      }
      _Var10.unknown = (char *)0x6c696e;
    }
    else if (param_3 != (undefined *)0x0) goto LAB_100b7d950;
    pcVar1 = (char *)0x6c696e;
    if (param_3 != (undefined *)0x0) {
      pcVar1 = param_2;
    }
    puVar8 = (undefined *)0xe300000000000000;
    if (param_3 != (undefined *)0x0) {
      puVar8 = param_3;
    }
    _swift_bridgeObjectRetain(param_3);
    SVar11.bridgeObject = puVar8;
    SVar11.str = pcVar1;
    SVar17.bridgeObject = pvVar9;
    SVar17.str = pcVar7;
    Swift::String::append(SVar11,SVar17);
    _swift_bridgeObjectRelease(puVar8);
    SVar12.bridgeObject = &DAT_e700000000000000;
    SVar12.str = (char *)0x203a4b4453202c;
    SVar18.bridgeObject = pvVar9;
    SVar18.str = pcVar7;
    Swift::String::append(SVar12,SVar18);
    _Var6.unknown = (undefined *)0xe300000000000000;
    if (_Var5.unknown != (undefined *)0x0) {
      _Var6.unknown = _Var5.unknown;
    }
    FUN_100b84dac(0);
    SVar13.bridgeObject = _Var6.unknown;
    SVar13.str = _Var10.unknown;
    SVar19.bridgeObject = pvVar9;
    SVar19.str = pcVar7;
    Swift::String::append(SVar13,SVar19);
    _swift_bridgeObjectRelease(_Var6.unknown);
    FUN_100b7dc58();
    SVar20.bridgeObject = pvVar9;
    SVar20.str = pcVar7;
    Swift::String::append((String)(ZEXT816(0xe000000000000000) << 0x40),SVar20);
    FUN_100b6f838();
    FUN_100b7dc30(
                 "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Swift/State/SentryPropagationContext.swift"
                 );
  }
  else {
    FUN_100b84dac(0);
    local_68 = (char *)0x0;
    local_60 = (void *)0xe000000000000000;
    Swift::_StringGuts::grow(0x27,_Var6);
    _swift_bridgeObjectRelease(local_60);
    local_68 = (char *)0xd000000000000013;
    local_60 = (void *)0x8000000100dca660;
    SVar14.bridgeObject = param_3;
    SVar14.str = param_2;
    SVar21.bridgeObject = puVar8;
    SVar21.str = pcVar7;
    Swift::String::append(SVar14,SVar21);
    SVar15.bridgeObject = (void *)0xef203a736e6f6974;
    SVar15.str = (char *)0x706f204b4453202c;
    SVar22.bridgeObject = puVar8;
    SVar22.str = pcVar7;
    Swift::String::append(SVar15,SVar22);
    SVar16.bridgeObject = _Var5.unknown;
    SVar16.str = _Var10.unknown;
    SVar23.bridgeObject = puVar8;
    SVar23.str = pcVar7;
    Swift::String::append(SVar16,SVar23);
    _swift_bridgeObjectRelease(_Var5.unknown);
    FUN_100b7dc58();
    SVar2.bridgeObject = local_60;
    SVar2.str = local_68;
    local_68 = (char *)0xd000000000000031;
    local_60 = (void *)0x8000000100dca620;
    SVar24.bridgeObject = puVar8;
    SVar24.str = pcVar7;
    Swift::String::append(SVar2,SVar24);
    FUN_100b6f838();
    FUN_100b7dc30(
                 "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Swift/State/SentryPropagationContext.swift"
                 );
  }
  FUN_100b84df8();
  FUN_100b6f838();
  return 0;
}



/* Address: 0x100b7db58 | _TtC6Sentry24SentryPropagationContext::shouldContinueTraceWithOptions:baggageOrgId: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

bool _TtC6Sentry24SentryPropagationContext::shouldContinueTraceWithOptions_baggageOrgId_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  String SVar1;
  
  if (param_4 == 0) {
    SVar1 = (String)ZEXT816(0);
  }
  else {
    SVar1 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  FUN_100b7d8b8(param_3,SVar1.str,SVar1.bridgeObject);
  _swift_bridgeObjectRelease(SVar1.bridgeObject);
  return (uint)param_3 & 1;
}



/* Address: 0x100b7dbcc | _TtC6Sentry24SentryPropagationContext::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry24SentryPropagationContext::_cxx_destruct(ID param_1,SEL param_2)

{
  return;
}



/* Address: 0x100b7dc04 | FUN_100b7dc04 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100b7dc04(void)

{
  return ZEXT816(0x100fa0098);
}



/* Address: 0x100b7dc24 | FUN_100b7dc24 */

void FUN_100b7dc24(undefined8 param_1,undefined8 param_2)

{
  _swift_lookUpClassMethod(param_1,param_2,&TargetClassDescriptor_100ccd9b0);
  return;
}



/* Address: 0x100b7dc30 | FUN_100b7dc30 */

undefined8 FUN_100b7dc30(void)

{
  return 1;
}



/* Address: 0x100b7dc4c | FUN_100b7dc4c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100b7dc4c(void)

{
  return;
}



/* Address: 0x100b7dc58 | FUN_100b7dc58 */

void FUN_100b7dc58(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  String SVar1;
  String SVar2;
  
  SVar1.bridgeObject = (void *)0xe100000000000000;
  SVar1.str = (char *)0x29;
  SVar2.bridgeObject = param_4;
  SVar2.str = param_3;
  Swift::String::append(SVar1,SVar2);
  return;
}



/* Address: 0x100b7dc64 | FUN_100b7dc64 */

undefined1 * FUN_100b7dc64(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_58 [40];
  
  FUN_100076688(param_1,auStack_58);
  puVar1 = auStack_58;
  FUN_100b7dcc0(puVar1);
  FUN_100004594(param_1);
  return puVar1;
}



/* Address: 0x100b7dcc0 | FUN_100b7dcc0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x000100b7dff0) */
/* WARNING: Removing unreachable block (ram,0x000100b7dee4) */
/* WARNING: Removing unreachable block (ram,0x000100b7ddbc) */
/* WARNING: Removing unreachable block (ram,0x000100b7e0ac) */
/* WARNING: Removing unreachable block (ram,0x000100b7e008) */
/* WARNING: Removing unreachable block (ram,0x000100b7e00c) */
/* WARNING: Removing unreachable block (ram,0x000100b7dd7c) */

ID FUN_100b7dcc0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  NSString *pNVar4;
  NSString *pNVar5;
  ID self;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long lVar9;
  ID unaff_x20;
  long unaff_x21;
  long lVar10;
  String SVar11;
  String SVar12;
  char *local_70;
  undefined1 local_61;
  undefined1 local_58;
  undefined7 uStack_57;
  
  puVar3 = &DAT_101045228;
  FUN_100b6730c();
  lVar10 = *(long *)(puVar3 + -8);
  lVar9 = *(long *)(lVar10 + 0x40);
  self = *(ID *)(param_1 + 0x18);
  FUN_100004640(param_1,self);
  switchD_100b7e2ec::caseD_14();
  Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    local_58 = 0;
    SVar11 = Swift::KeyedDecodingContainer::_decode(&local_58,puVar3);
    local_58 = 1;
    SVar12 = Swift::KeyedDecodingContainer::_decode(&local_58,puVar3);
    local_70 = SVar12.str;
    _objc_allocWithZone();
    pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(SVar11.bridgeObject);
    pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(SVar12.bridgeObject);
    self = _objc_msgSend(unaff_x20,"initWithValue:type:",pNVar4,pNVar5);
    uVar6 = 0;
    FUN_100bc8f90(0);
    local_61 = 2;
    puVar7 = &DAT_101045238;
    FUN_100003a00(&DAT_101045238,FUN_100bc8f90,&BYTE_100c9d6e4);
    Swift::KeyedDecodingContainer::_decodeIfPresent(&local_58,uVar6,&local_61,puVar3,uVar6,puVar7);
    _objc_msgSend(self,"setMechanism:",CONCAT71(uStack_57,local_58));
    local_58 = 3;
    puVar7 = puVar3;
    Swift::KeyedDecodingContainer::_decodeIfPresent(&local_58);
    if (puVar7 == (undefined *)0x0) {
      pNVar4 = (NSString *)0x0;
    }
    else {
      pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(puVar7);
    }
    _objc_msgSend(self,"setModule:",pNVar4);
    uVar6 = 0;
    local_61 = 4;
    FUN_100b7e4f0(0);
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (&local_58,&DAT_100f3d290,&local_61,puVar3,&DAT_100f3d290,uVar6);
    lVar2 = CONCAT71(uStack_57,local_58);
    lVar1 = 0;
    if (lVar2 != 1) {
      lVar1 = lVar2;
    }
    _objc_msgSend(self,"setThreadId:",lVar1);
    FUN_10001486c(lVar2);
    uVar6 = 0;
    FUN_100bc4e30(0);
    local_61 = 5;
    puVar8 = &DAT_101045248;
    FUN_100003a00(&DAT_101045248,FUN_100bc4e30,&TargetProtocolConformanceDescriptor_100c9d37c);
    Swift::KeyedDecodingContainer::_decodeIfPresent(&local_58,uVar6,&local_61,puVar3,uVar6,puVar8);
    _objc_msgSend(self,"setStacktrace:",CONCAT71(uStack_57,local_58));
    (**(code **)(lVar10 + 8))((long)&local_70 - (lVar9 + 0xfU & 0xfffffffffffffff0),puVar3);
    FUN_100004594(param_1);
  }
  else {
    FUN_100004594(param_1);
  }
  return self;
}



/* Address: 0x100b7e104 | FUN_100b7e104 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100b7e104(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  NSString *pNVar1;
  NSString *pNVar2;
  ID IVar3;
  
  _swift_getObjectType();
  if (param_2 == 0) {
    pNVar1 = (NSString *)0x0;
  }
  else {
    pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(param_2);
  }
  if (param_4 == 0) {
    pNVar2 = (NSString *)0x0;
  }
  else {
    pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(param_4);
  }
  IVar3 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffb0,"initWithValue:type:",pNVar1,
                              pNVar2);
  return IVar3;
}



/* Address: 0x100b7e1cc | _TtC6Sentry18ExceptionDecodable::initWithValue:type: */

/* Function Stack Size: 0x20 bytes */

ID _TtC6Sentry18ExceptionDecodable::initWithValue_type_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  char *pcVar1;
  String SVar2;
  String SVar3;
  
  if (param_3 == 0) {
    SVar2 = (String)ZEXT816(0);
  }
  else {
    SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  if (param_4 == 0) {
    SVar3 = (String)ZEXT816(0);
  }
  else {
    SVar3 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  pcVar1 = SVar2.str;
  FUN_100b7e104(pcVar1,SVar2.bridgeObject,SVar3.str,SVar3.bridgeObject);
  return (ID)pcVar1;
}



/* Address: 0x100b7e240 | FUN_100b7e240 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100b7e240(void)

{
  return ZEXT816(0x100fa0160);
}



/* Address: 0x100b7e260 | FUN_100b7e260 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100b7e294 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ulong FUN_100b7e260(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  FUN_100b6730c(&DAT_101045018);
  _swift_initStaticObject();
  uVar1 = Swift::_findStringSwitchCase(param_1,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  if (5 < uVar1) {
    uVar1 = 6;
  }
  return uVar1;
}



/* Address: 0x100b7e2bc | thunk_FUN_100b7e260 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100b7e294 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ulong thunk_FUN_100b7e260(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  FUN_100b6730c(&DAT_101045018);
  _swift_initStaticObject();
  uVar1 = Swift::_findStringSwitchCase(param_1,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  if (5 < uVar1) {
    uVar1 = 6;
  }
  return uVar1;
}



/* Address: 0x100b7e2c0 | FUN_100b7e2c0 */

/* WARNING: Removing unreachable block (ram,0x000100b7e53c) */
/* WARNING: Removing unreachable block (ram,0x000100b7e550) */
/* WARNING: Removing unreachable block (ram,0x000100b7e55c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

String FUN_100b7e2c0(ulong param_1)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  char *pcVar2;
  undefined **ppuVar3;
  void *pvVar4;
  undefined *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  byte *pbVar8;
  ulong uVar9;
  ulong in_x12;
  undefined8 *unaff_x19;
  byte *unaff_x20;
  long unaff_x21;
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
  
  ppuVar3 = (undefined **)&DAT_e500000000000000;
  pTVar1 = (TargetProtocolConformanceDescriptor *)&DAT_65756c6176;
  puVar7 = (undefined8 *)(param_1 & 0xff);
  pbVar8 = &switchD_100b7e2ec::switchdataD_100c9a0d0;
  uVar9 = (ulong)*(byte *)(puVar7 + 0x2019341a);
  switch(puVar7) {
  case (undefined8 *)0x0:
    goto switchD_100b7e2ec_caseD_0;
  default:
    ppuVar3 = (undefined **)&DAT_e400000000000000;
  case (undefined8 *)0x34:
  case (undefined8 *)0x42:
  case (undefined8 *)0x68:
  case (undefined8 *)0x76:
  case (undefined8 *)0x90:
  case (undefined8 *)0x9e:
  case (undefined8 *)0xd6:
    pTVar1 = (TargetProtocolConformanceDescriptor *)0x7974;
  case (undefined8 *)0xf9:
    pTVar1 = (TargetProtocolConformanceDescriptor *)(ulong)((uint)pTVar1 & 0xffff | 0x65700000);
switchD_100b7e2ec_caseD_2a:
    SVar10.bridgeObject = ppuVar3;
    SVar10.str = (char *)pTVar1;
    return SVar10;
  case (undefined8 *)0x2:
    puVar7 = (undefined8 *)&DAT_00000009;
  case (undefined8 *)0x8:
    pbVar8 = (byte *)0xe900000000000064;
  case (undefined8 *)0x9:
    ppuVar3 = (undefined **)((ulong)pbVar8 | (ulong)puVar7);
  case (undefined8 *)0xd:
    pTVar1 = (TargetProtocolConformanceDescriptor *)0x656d;
switchD_100b7e2ec_caseD_b:
    SVar12.str = (char *)((ulong)pTVar1 & 0xffff00000000ffff | 0x73696e6168630000);
    SVar12.bridgeObject = ppuVar3;
    return SVar12;
  case (undefined8 *)0x3:
  case (undefined8 *)0xf:
    ppuVar3 = (undefined **)&DAT_e600000000000000;
  case (undefined8 *)0xf4:
  case (undefined8 *)0xfc:
    SVar13.bridgeObject = ppuVar3;
    SVar13.str = (char *)0x656c75646f6d;
    return SVar13;
  case (undefined8 *)0x4:
  case (undefined8 *)0xf0:
    pTVar1 = (TargetProtocolConformanceDescriptor *)0x646165726874;
  case (undefined8 *)0xc2:
    pTVar1 = (TargetProtocolConformanceDescriptor *)((ulong)pTVar1 | 0x695f000000000000);
  case (undefined8 *)0xfa:
    ppuVar3 = (undefined **)0x64;
  case (undefined8 *)0x6:
    ppuVar3 = (undefined **)((ulong)ppuVar3 & 0xffffffffffff | 0xe900000000000000);
switchD_100b7e2ec_caseD_a:
    SVar11.bridgeObject = ppuVar3;
    SVar11.str = (char *)pTVar1;
    return SVar11;
  case (undefined8 *)0x5:
    ppuVar3 = (undefined **)0xea00000000006563;
  case (undefined8 *)0xe:
    pTVar1 = (TargetProtocolConformanceDescriptor *)0x6172746b63617473;
switchD_100b7e2ec_caseD_0:
    SVar14.bridgeObject = ppuVar3;
    SVar14.str = (char *)pTVar1;
    return SVar14;
  case (undefined8 *)0xa:
    goto switchD_100b7e2ec_caseD_a;
  case (undefined8 *)0xb:
    goto switchD_100b7e2ec_caseD_b;
  case (undefined8 *)0x10:
  case (undefined8 *)0x94:
    goto switchD_100b7e2ec_caseD_10;
  case (undefined8 *)0x13:
  case (undefined8 *)0x1a:
  case (undefined8 *)0x21:
  case (undefined8 *)0x53:
    goto switchD_100b7e2ec_caseD_13;
  case (undefined8 *)0x14:
    pTVar1 = DAT_101045230;
    if (DAT_101045230 != (TargetProtocolConformanceDescriptor *)0x0)
    goto switchD_100b7e2ec_caseD_55;
  case (undefined8 *)0x15:
    pTVar1 = &TargetProtocolConformanceDescriptor_100c9a218;
  case (undefined8 *)0x11:
    ppuVar3 = &PTR_PTR_100f37000;
  case (undefined8 *)0x54:
    ppuVar3 = ppuVar3 + 0x8e;
    _swift_getWitnessTable(pTVar1,ppuVar3);
    puVar7 = &DAT_101045000;
switchD_100b7e2ec_caseD_3c:
    puVar7[0x46] = pTVar1;
    SVar23.bridgeObject = ppuVar3;
    SVar23.str = (char *)pTVar1;
    return SVar23;
  case (undefined8 *)0x17:
  case (undefined8 *)0x1c:
  case (undefined8 *)0x4d:
    goto switchD_100b7e2ec_caseD_17;
  case (undefined8 *)0x19:
  case (undefined8 *)0x4a:
  case (undefined8 *)0x7c:
  case (undefined8 *)0x7e:
  case (undefined8 *)0xa6:
  case (undefined8 *)0xde:
    goto switchD_100b7e2ec_caseD_19;
  case (undefined8 *)0x1f:
    goto switchD_100b7e2ec_caseD_1f;
  case (undefined8 *)0x20:
  case (undefined8 *)0xe4:
    goto switchD_100b7e2ec_caseD_20;
  case (undefined8 *)0x26:
  case (undefined8 *)0x3a:
  case (undefined8 *)0x5a:
  case (undefined8 *)0x6e:
  case (undefined8 *)0x82:
  case (undefined8 *)0x96:
  case (undefined8 *)0xaa:
  case (undefined8 *)0xbe:
  case (undefined8 *)0xc6:
  case (undefined8 *)0xce:
  case (undefined8 *)0xe2:
  case (undefined8 *)0xf6:
  case (undefined8 *)0xfe:
    unaff_x19 = puVar7;
  case (undefined8 *)0xbc:
  case (undefined8 *)0xc4:
  case (undefined8 *)0xcc:
    pcVar2 = (char *)CONCAT35(uRam00000065756c617b,
                              CONCAT23(uRam00000065756c6179,
                                       CONCAT12(uRam00000065756c6178,
                                                CONCAT11(DAT_65756c6177,DAT_65756c6176))));
    pvVar4 = _DAT_65756c617e;
    FUN_100b7e260(pcVar2,_DAT_65756c617e);
    *(char *)unaff_x19 = (char)pcVar2;
    SVar16.bridgeObject = pvVar4;
    SVar16.str = pcVar2;
    return SVar16;
  case (undefined8 *)0x28:
  case (undefined8 *)0x5c:
    goto switchD_100b7e2ec_caseD_28;
  case (undefined8 *)0x2a:
  case (undefined8 *)0x32:
  case (undefined8 *)0x5e:
  case (undefined8 *)0x66:
  case (undefined8 *)0x86:
  case (undefined8 *)0x8e:
  case (undefined8 *)0xae:
  case (undefined8 *)0xb6:
  case (undefined8 *)0xb8:
  case (undefined8 *)0xe6:
  case (undefined8 *)0xee:
    goto switchD_100b7e2ec_caseD_2a;
  case (undefined8 *)0x38:
    SVar24.str = (char *)puVar7[0x48];
    if (SVar24.str != (char *)0x0) {
      SVar24.bridgeObject = &DAT_e500000000000000;
      return SVar24;
    }
    pTVar1 = &TargetProtocolConformanceDescriptor_100c9fb6c;
    ppuVar3 = (undefined **)&DAT_100f3d290;
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9fb6c,&DAT_100f3d290);
    puVar7 = &DAT_101045240;
  case (undefined8 *)0x24:
    *puVar7 = pTVar1;
    SVar25.bridgeObject = ppuVar3;
    SVar25.str = (char *)pTVar1;
    return SVar25;
  case (undefined8 *)0x3c:
    goto switchD_100b7e2ec_caseD_3c;
  case (undefined8 *)0x3d:
  case (undefined8 *)0x4c:
  case (undefined8 *)0x71:
    goto switchD_100b7e2ec_caseD_3d;
  case (undefined8 *)0x3e:
  case (undefined8 *)0x72:
  case (undefined8 *)0x9a:
  case (undefined8 *)0xca:
  case (undefined8 *)0xd2:
    ppuVar3 = (undefined **)&DAT_100f37470;
    _swift_getWitnessTable(&DAT_65756c6176,&DAT_100f37470);
  case (undefined8 *)0xc1:
    DAT_101045250 = pTVar1;
switchD_100b7e2ec_caseD_28:
    SVar29.bridgeObject = ppuVar3;
    SVar29.str = (char *)pTVar1;
    return SVar29;
  case (undefined8 *)0x3f:
  case (undefined8 *)0x73:
  case (undefined8 *)0x9b:
  case (undefined8 *)0xcb:
  case (undefined8 *)0xd3:
    goto switchD_100b7e2ec_caseD_3f;
  case (undefined8 *)0x48:
    SVar30.str = (char *)puVar7[0x4b];
    if (SVar30.str != (char *)0x0) {
      SVar30.bridgeObject = &DAT_e500000000000000;
      return SVar30;
    }
  case (undefined8 *)0xc8:
    pTVar1 = (TargetProtocolConformanceDescriptor *)&DAT_100c9a150;
switchD_100b7e2ec_caseD_3f:
    puVar5 = &DAT_100f37470;
    _swift_getWitnessTable(pTVar1,&DAT_100f37470);
    DAT_101045258 = pTVar1;
    SVar31.bridgeObject = puVar5;
    SVar31.str = (char *)pTVar1;
    return SVar31;
  case (undefined8 *)0x49:
    DAT_65756c6177 = 0xd0;
  case (undefined8 *)0x25:
  case (undefined8 *)0x39:
  case (undefined8 *)0x59:
  case (undefined8 *)0x6d:
  case (undefined8 *)0x7d:
  case (undefined8 *)0x81:
  case (undefined8 *)0x95:
  case (undefined8 *)0xa5:
  case (undefined8 *)0xa9:
  case (undefined8 *)0xbd:
  case (undefined8 *)0xc5:
  case (undefined8 *)0xcd:
  case (undefined8 *)0xdd:
  case (undefined8 *)0xe1:
  case (undefined8 *)0xf5:
  case (undefined8 *)0xfd:
    SVar28.bridgeObject = &DAT_e500000000000000;
    SVar28.str = &DAT_65756c6176;
    return SVar28;
  case (undefined8 *)0x51:
  case (undefined8 *)0x16:
  case (undefined8 *)0x4f:
  case (undefined8 *)0x58:
    FUN_100b7dc64();
    unaff_x19 = puVar7;
    if (unaff_x21 == 0) {
switchD_100b7e2ec_caseD_20:
      *unaff_x19 = pTVar1;
    }
  case (undefined8 *)0x18:
  case (undefined8 *)0x50:
switchD_100b7e2ec_caseD_17:
    SVar21.bridgeObject = ppuVar3;
    SVar21.str = (char *)pTVar1;
    return SVar21;
  case (undefined8 *)0x52:
    FUN_10044b1e8();
    *(char *)puVar7 = (char)pTVar1;
  case (undefined8 *)0x80:
    SVar19.bridgeObject = ppuVar3;
    SVar19.str = (char *)pTVar1;
    return SVar19;
  case (undefined8 *)0x55:
switchD_100b7e2ec_caseD_55:
    SVar22.bridgeObject = &DAT_e500000000000000;
    SVar22.str = (char *)pTVar1;
    return SVar22;
  case (undefined8 *)0x6c:
    switchD_100b7e2ec::caseD_14();
  case (undefined8 *)0x1e:
switchD_100b7e2ec_caseD_1f:
  case (undefined8 *)0x12:
  case (undefined8 *)0x1b:
  case (undefined8 *)0x1d:
  case (undefined8 *)0x4e:
switchD_100b7e2ec_caseD_13:
    SVar20 = (extension_Swift)::Swift::CodingKey::get_description();
    return SVar20;
  case (undefined8 *)0x70:
  case (undefined8 *)0xd0:
    ppuVar3 = (undefined **)(ulong)DAT_e500000000000000;
  case (undefined8 *)0xe0:
    pcVar2 = (char *)(ulong)DAT_65756c6176;
    FUN_100beb934(pcVar2,ppuVar3);
    SVar15.bridgeObject = ppuVar3;
    SVar15.str = pcVar2;
    return SVar15;
  case (undefined8 *)0x84:
    uVar9 = 0x100b7e638;
    in_x12 = (ulong)*(byte *)((long)puVar7 + 0x100c9a0d6);
  case (undefined8 *)0x98:
                    /* WARNING: Could not recover jumptable at 0x000100b7e634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(uVar9 + in_x12 * 4))();
    SVar27.bridgeObject = ppuVar3;
    SVar27.str = (char *)pTVar1;
    return SVar27;
  case (undefined8 *)0xa4:
    if ((int)puVar7 == 4) {
      uVar6 = CONCAT22(uRam00000065756c6179,CONCAT11(uRam00000065756c6178,DAT_65756c6177));
joined_r0x000100b7e588:
      if (uVar6 == 0) goto LAB_100b7e5a4;
    }
    else {
      if ((int)puVar7 != 2) {
        uVar6 = (uint)DAT_65756c6177;
        goto joined_r0x000100b7e588;
      }
      uVar6 = (uint)CONCAT11(uRam00000065756c6178,DAT_65756c6177);
      if (CONCAT11(uRam00000065756c6178,DAT_65756c6177) == 0) goto LAB_100b7e5a4;
    }
    puVar7 = (undefined8 *)(ulong)(((uint)DAT_65756c6176 | uVar6 << 8) - 6);
    break;
  case (undefined8 *)0xa8:
    goto switchD_100b7e2ec_caseD_a8;
  case (undefined8 *)0xac:
    break;
  case (undefined8 *)0xc0:
LAB_100b7e5a4:
    uVar6 = DAT_65756c6176 - 6;
    if (DAT_65756c6176 < 6) {
      uVar6 = 0xffffffff;
    }
    puVar7 = (undefined8 *)(ulong)uVar6;
    break;
  case (undefined8 *)0xc9:
  case (undefined8 *)0x99:
  case (undefined8 *)0xd1:
switchD_100b7e2ec_caseD_3d:
    unaff_x19 = puVar7;
switchD_100b7e2ec_caseD_19:
    thunk_FUN_100b7e260();
switchD_100b7e2ec_caseD_10:
    *(char *)unaff_x19 = (char)pTVar1;
    SVar18.bridgeObject = ppuVar3;
    SVar18.str = (char *)pTVar1;
    return SVar18;
  case (undefined8 *)0xdc:
    SVar20.bridgeObject = &DAT_e500000000000000;
    SVar20.str = &DAT_65756c6176;
    return SVar20;
  case (undefined8 *)0xf8:
    unaff_x19 = puVar7;
  case (undefined8 *)0x29:
  case (undefined8 *)0x5d:
  case (undefined8 *)0x85:
  case (undefined8 *)0xad:
  case (undefined8 *)0xe5:
    pTVar1 = (TargetProtocolConformanceDescriptor *)(ulong)*unaff_x20;
switchD_100b7e2ec_caseD_a8:
    FUN_100b7e2c0();
    *unaff_x19 = pTVar1;
    unaff_x19[1] = ppuVar3;
    SVar17.bridgeObject = ppuVar3;
    SVar17.str = (char *)pTVar1;
    return SVar17;
  }
  SVar26.str = (char *)(ulong)((int)puVar7 + 1);
  SVar26.bridgeObject = &DAT_e500000000000000;
  return SVar26;
}



/* Address: 0x100b7e370 | switchD_100b7e2ec::caseD_70 */

void switchD_100b7e2ec::caseD_70(undefined1 *param_1,undefined1 *param_2)

{
  FUN_100beb934(*param_1,*param_2);
  return;
}



/* Address: 0x100b7e37c | FUN_100b7e37c */

void FUN_100b7e37c(void)

{
  undefined1 *unaff_x20;
  
  FUN_100bec800(*unaff_x20);
  return;
}



/* Address: 0x100b7e384 | FUN_100b7e384 */

void FUN_100b7e384(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  switchD_100beca4c::caseD_5a(param_1,*unaff_x20);
  return;
}



/* Address: 0x100b7e38c | FUN_100b7e38c */

void FUN_100b7e38c(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  FUN_100bed5a0(param_1,*unaff_x20);
  return;
}



/* Address: 0x100b7e394 | switchD_100b7e2ec::caseD_26 */

void switchD_100b7e2ec::caseD_26(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_100b7e260(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Address: 0x100b7e3c0 | FUN_100b7e3c0 */

void FUN_100b7e3c0(ulong *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  byte *unaff_x20;
  
  uVar1 = (ulong)*unaff_x20;
  FUN_100b7e2c0();
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}



/* Address: 0x100b7e3e8 | FUN_100b7e3e8 */

void FUN_100b7e3e8(void)

{
  undefined1 *unaff_x20;
  
  FUN_100b7e2c0(*unaff_x20);
  return;
}



/* Address: 0x100b7e3f0 | FUN_100b7e3f0 */

void FUN_100b7e3f0(undefined1 *param_1,undefined1 param_2)

{
  thunk_FUN_100b7e260();
  *param_1 = param_2;
  return;
}



/* Address: 0x100b7e414 | FUN_100b7e414 */

void FUN_100b7e414(undefined1 *param_1,undefined1 param_2)

{
  FUN_10044b1e8();
  *param_1 = param_2;
  return;
}



/* Address: 0x100b7e438 | FUN_100b7e438 */

String FUN_100b7e438(void)

{
  String SVar1;
  
  switchD_100b7e2ec::caseD_14();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x100b7e460 | FUN_100b7e460 */

String FUN_100b7e460(void)

{
  String SVar1;
  
  switchD_100b7e2ec::caseD_14();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x100b7e488 | FUN_100b7e488 */

void FUN_100b7e488(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x21;
  
  FUN_100b7dc64();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Address: 0x100b7e4b0 | switchD_100b7e2ec::caseD_14 */

void switchD_100b7e2ec::caseD_14(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101045230 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9a218;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9a218,&DAT_100f37470);
  DAT_101045230 = pTVar1;
  return;
}


