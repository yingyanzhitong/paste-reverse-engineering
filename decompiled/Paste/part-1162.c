/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100beef60 | FUN_100beef60 */

void FUN_100beef60(void)

{
  return;
}



/* Address: 0x100beef74 | FUN_100beef74 */

undefined8 FUN_100beef74(void)

{
  return 0x72616c756c6c6563;
}



/* Address: 0x100beef88 | FUN_100beef88 */

undefined1 * FUN_100beef88(void)

{
  return &SUB_00006469;
}



/* Address: 0x100beef9c | FUN_100beef9c */

void FUN_100beef9c(void)

{
  return;
}



/* Address: 0x100beefb0 | FUN_100beefb0 */

void FUN_100beefb0(void)

{
  return;
}



/* Address: 0x100beefbc | FUN_100beefbc */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_100beefbc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_100b84dac(0);
  FUN_100b84a28(param_1,param_2,uVar1);
  _objc_msgSend((ID)&objc::class_t::SentryAsyncLogWrapper,"initializeAsyncLogFile");
  return;
}



/* Address: 0x100bef00c | _TtC6Sentry19SentrySDKLogSupport::configure:diagnosticLevel: */

/* Function Stack Size: 0x1c bytes */

void _TtC6Sentry19SentrySDKLogSupport::configure_diagnosticLevel_
               (ID param_1,SEL param_2,bool param_3,unsigned_long_long param_4)

{
  FUN_100beefbc(param_3,param_4);
  return;
}



/* Address: 0x100bef028 | FUN_100bef028 */

void FUN_100bef028(void)

{
  FUN_100bef058();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"init");
  return;
}



/* Address: 0x100bef058 | FUN_100bef058 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100bef058(void)

{
  return ZEXT816(0x100fa5fc0);
}



/* Address: 0x100bef078 | _TtC6Sentry19SentrySDKLogSupport::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry19SentrySDKLogSupport::init(ID param_1,SEL param_2)

{
  FUN_100bef028();
  return param_1;
}



/* Address: 0x100bef098 | FUN_100bef098 */

void FUN_100bef098(void)

{
  FUN_100bef058();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"dealloc");
  return;
}



/* Address: 0x100bef0c8 | FUN_100bef0c8 */

void FUN_100bef0c8(void)

{
  FUN_100b80068();
  return;
}



/* Address: 0x100bef0f0 | FUN_100bef0f0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100bef0f0(undefined8 param_1)

{
  FUN_100bef0c8(param_1);
  return 0;
}



/* Address: 0x100bef118 | FUN_100bef118 */

void FUN_100bef118(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("Sentry.SentryAutoSessionTrackingIntegration",0x2b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100bef144);
  (*pcVar1)();
}



/* Address: 0x100bef144 | FUN_100bef144 */

void FUN_100bef144(long param_1)

{
  FUN_100bef118();
  _swift_release(*(undefined8 *)(param_1 + DAT_1010489a0));
  return;
}



/* Address: 0x100bef150 | FUN_100bef150 */

void FUN_100bef150(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + DAT_1010489a0));
  return;
}



/* Address: 0x100bef160 | FUN_100bef160 */

void FUN_100bef160(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100bef16c | FUN_100bef16c */

void FUN_100bef16c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Address: 0x100bef178 | FUN_100bef178 */

int FUN_100bef178(ulong *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    iVar1 = -1;
  }
  else if ((param_2 < 0x7fffffff) || ((char)param_1[1] == '\0')) {
    uVar2 = *param_1;
    if (0xfffffffe < uVar2) {
      uVar2 = 0xffffffff;
    }
    iVar1 = (int)uVar2 + -1;
    if (iVar1 < 0) {
      iVar1 = -1;
    }
  }
  else {
    iVar1 = (int)*param_1 + 0x7ffffffe;
  }
  return iVar1 + 1;
}



/* Address: 0x100bef1cc | FUN_100bef1cc */

undefined1  [16] FUN_100bef1cc(void)

{
  return ZEXT816(0x100f3d290);
}



/* Address: 0x100bef1dc | FUN_100bef1dc */

/* WARNING: Removing unreachable block (ram,0x000100bef294) */
/* WARNING: Removing unreachable block (ram,0x000100bef408) */
/* WARNING: Removing unreachable block (ram,0x000100bef24c) */
/* WARNING: Removing unreachable block (ram,0x000100bef38c) */
/* WARNING: Removing unreachable block (ram,0x000100bef270) */
/* WARNING: Removing unreachable block (ram,0x000100bef3e4) */
/* WARNING: Removing unreachable block (ram,0x000100bef2b8) */
/* WARNING: Removing unreachable block (ram,0x000100bef42c) */
/* WARNING: Removing unreachable block (ram,0x000100bef33c) */
/* WARNING: Removing unreachable block (ram,0x000100bef448) */

ID FUN_100bef1dc(long param_1)

{
  __int64 _Var1;
  undefined *self;
  ID unaff_x20;
  long unaff_x21;
  undefined1 auStack_78 [24];
  undefined8 local_60;
  
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_100bef55c(auStack_78);
  Swift::Decoder::_singleValueContainer();
  if (unaff_x21 == 0) {
    FUN_100004640(auStack_78,local_60);
    FUN_100bef55c();
    _Var1 = Swift::SingleValueDecodingContainer::_decode();
    self = &_OBJC_CLASS___NSNumber;
    _objc_allocWithZone();
    unaff_x20 = _objc_msgSend((ID)self,"initWithInteger:",_Var1);
    FUN_100004594(auStack_78);
    FUN_100004594(param_1);
  }
  else {
    FUN_100004594(param_1);
  }
  return unaff_x20;
}



/* Address: 0x100bef4ac | FUN_100bef4ac */

void FUN_100bef4ac(undefined8 *param_1,long param_2)

{
  if (*(long *)(param_2 + 0x10) != 0) {
    FUN_100076688(param_2 + *(long *)(param_2 + 0x10) * 0x28 + -8,param_1);
    return;
  }
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}



/* Address: 0x100bef4d8 | FUN_100bef4d8 */

void FUN_100bef4d8(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x21;
  
  FUN_100bef1dc();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Address: 0x100bef500 | FUN_100bef500 */

undefined8 FUN_100bef500(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_101048a48;
  FUN_100b6730c();
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x100bef540 | FUN_100bef540 */

void FUN_100bef540(void)

{
  return;
}



/* Address: 0x100bef554 | FUN_100bef554 */

void FUN_100bef554(void)

{
  _swift_errorRelease();
  return;
}



/* Address: 0x100bef55c | FUN_100bef55c */

void FUN_100bef55c(void)

{
  return;
}



/* Address: 0x100bef570 | _TtC6Sentry27PlaceholderProcessInfoClass::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry27PlaceholderProcessInfoClass::init(ID param_1,SEL param_2)

{
  FUN_1001fddc8();
  return param_1;
}



/* Address: 0x100bef590 | FUN_100bef590 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

NSString * FUN_100bef590(undefined8 param_1,undefined8 param_2)

{
  NSString *pNVar1;
  
  FUN_100bef5e8(param_1);
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_2);
  return pNVar1;
}



/* Address: 0x100bef5e8 | FUN_100bef5e8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

String FUN_100bef5e8(void)

{
  ID self;
  String SVar1;
  
  self = _objc_msgSend((ID)&_OBJC_CLASS___NSBundle,"mainBundle");
  _objc_msgSend(self,"bundlePath");
  SVar1 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  return SVar1;
}



/* Address: 0x100bef66c | FUN_100bef66c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

NSString * FUN_100bef66c(undefined8 param_1,long param_2)

{
  NSString *pNVar1;
  
  FUN_100bef6d0(param_1);
  if (param_2 == 0) {
    pNVar1 = (NSString *)0x0;
  }
  else {
    pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(param_2);
  }
  return pNVar1;
}



/* Address: 0x100bef6d0 | FUN_100bef6d0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100bef6d0(void)

{
  ID IVar1;
  
  IVar1 = _objc_msgSend((ID)&_OBJC_CLASS___NSBundle,"mainBundle");
  FUN_100bef838(IVar1);
  return;
}



/* Address: 0x100bef700 | FUN_100bef700 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

uint FUN_100bef700(undefined8 param_1)

{
  FUN_100bef734(param_1);
  return (uint)param_1 & 1;
}



/* Address: 0x100bef734 | FUN_100bef734 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

ID FUN_100bef734(undefined8 param_1)

{
  ID IVar1;
  byte *pbVar2;
  ID unaff_x20;
  byte local_71;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long local_38;
  
  FUN_100bef8cc("isiOSAppOnVision");
  _NSSelectorFromString();
  IVar1 = _objc_msgSend(unaff_x20,"respondsToSelector:",param_1);
  if ((int)IVar1 != 0) {
    FUN_100bef8cc();
    IVar1 = _objc_msgSend(unaff_x20,"valueForKey:",IVar1);
    if (IVar1 == 0) {
      uStack_68 = 0;
      local_70 = 0;
      lStack_58 = 0;
      uStack_60 = 0;
    }
    else {
      Swift::__bridgeAnyObjectToAny();
      _swift_unknownObjectRelease(IVar1);
    }
    uStack_48 = uStack_68;
    local_50 = local_70;
    local_38 = lStack_58;
    uStack_40 = uStack_60;
    if (lStack_58 == 0) {
      FUN_100013954(&local_50);
    }
    else {
      pbVar2 = &local_71;
      _swift_dynamicCast(pbVar2,&local_50,PTR___type_metadata_for_Any_100eae0c0 + 8,
                         PTR___type_metadata_for_Swift_Bool_100eac570,6);
      if (((ulong)pbVar2 & 1) != 0) {
        return (ulong)local_71;
      }
    }
    IVar1 = 0;
  }
  return IVar1;
}



/* Address: 0x100bef838 | FUN_100bef838 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

String FUN_100bef838(ID param_1)

{
  ID IVar1;
  String SVar2;
  
  IVar1 = _objc_msgSend(param_1,"executablePath");
  if (IVar1 == 0) {
    SVar2 = (String)ZEXT816(0);
  }
  else {
    SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  return SVar2;
}



/* Address: 0x100bef8ac | FUN_100bef8ac */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100bef8ac(void)

{
  return ZEXT816(0x100fa6070);
}



/* Address: 0x100bef8cc | FUN_100bef8cc */

void FUN_100bef8cc(void)

{
  (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  return;
}



/* Address: 0x100bef8dc | _TtC6Sentry17SentryReplayEvent::replayStartTimestamp */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry17SentryReplayEvent::replayStartTimestamp(ID param_1,SEL param_2)

{
  Date DVar1;
  Date DVar2;
  NSDate *pNVar3;
  long lVar4;
  long lVar5;
  
  DVar1 = Foundation::Date::typeMetadataAccessor();
  lVar5 = *(long *)(DVar1.unknown + -8);
  lVar4 = *(long *)(lVar5 + 0x40);
  DVar2 = DVar1;
  FUN_100bef954(&stack0xffffffffffffffd0 + -(lVar4 + 0xfU & 0xfffffffffffffff0));
  pNVar3 = Foundation::Date::_bridgeToObjectiveC(DVar2);
  (**(code **)(lVar5 + 8))
            (&stack0xffffffffffffffd0 + -(lVar4 + 0xfU & 0xfffffffffffffff0),DVar1.unknown);
  return (ID)pNVar3;
}



/* Address: 0x100bef954 | FUN_100bef954 */

void FUN_100bef954(undefined8 param_1,long param_2)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = _TtC6Sentry17SentryReplayEvent::replayStartTimestamp;
  FUN_100b7982c();
                    /* WARNING: Could not recover jumptable at 0x000100bef994. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_2 + -8) + 0x10))(param_1,unaff_x20 + lVar1,param_2);
  return;
}



/* Address: 0x100bef998 | _TtC6Sentry17SentryReplayEvent::replayType */

/* Function Stack Size: 0x10 bytes */

long_long _TtC6Sentry17SentryReplayEvent::replayType(ID param_1,SEL param_2)

{
  FUN_100bef9b8();
  return param_1;
}



/* Address: 0x100bef9b8 | FUN_100bef9b8 */

undefined8 FUN_100bef9b8(void)

{
  long unaff_x20;
  
  return *(undefined8 *)(unaff_x20 + _TtC6Sentry17SentryReplayEvent::replayType);
}



/* Address: 0x100bef9c8 | _TtC6Sentry17SentryReplayEvent::segmentId */

/* Function Stack Size: 0x10 bytes */

long_long _TtC6Sentry17SentryReplayEvent::segmentId(ID param_1,SEL param_2)

{
  FUN_100bef9e8();
  return param_1;
}



/* Address: 0x100bef9e8 | FUN_100bef9e8 */

undefined8 FUN_100bef9e8(void)

{
  long unaff_x20;
  
  return *(undefined8 *)(unaff_x20 + _TtC6Sentry17SentryReplayEvent::segmentId);
}



/* Address: 0x100bef9f8 | _TtC6Sentry17SentryReplayEvent::urls */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry17SentryReplayEvent::urls(ID param_1,SEL param_2)

{
  NSArray *pNVar1;
  
  FUN_100befa44();
  if (param_1 == 0) {
    pNVar1 = (NSArray *)0x0;
  }
  else {
    pNVar1 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(param_1);
  }
  return (ID)pNVar1;
}



/* Address: 0x100befa44 | FUN_100befa44 */

void FUN_100befa44(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _TtC6Sentry17SentryReplayEvent::urls;
  FUN_100b80d44(unaff_x20 + _TtC6Sentry17SentryReplayEvent::urls,auStack_38,0);
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + lVar1));
  return;
}



/* Address: 0x100befa84 | _TtC6Sentry17SentryReplayEvent::setUrls: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry17SentryReplayEvent::setUrls_(ID param_1,SEL param_2,ID param_3)

{
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  }
  FUN_100befadc(param_3);
  return;
}



/* Address: 0x100befadc | FUN_100befadc */

void FUN_100befadc(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _TtC6Sentry17SentryReplayEvent::urls;
  FUN_100b80d44(unaff_x20 + _TtC6Sentry17SentryReplayEvent::urls,auStack_48,1);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Address: 0x100befb2c | FUN_100befb2c */

void FUN_100befb2c(undefined8 *param_1)

{
  _swift_bridgeObjectRetain(*param_1);
  FUN_100befadc();
  return;
}



/* Address: 0x100befb54 | FUN_100befb54 */

undefined1  [16] FUN_100befb54(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _TtC6Sentry17SentryReplayEvent::urls;
  FUN_100b80d44(unaff_x20 + _TtC6Sentry17SentryReplayEvent::urls,param_1,0x21);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = _swift_endAccess;
  return auVar2;
}



/* Address: 0x100befb90 | FUN_100befb90 */

void FUN_100befb90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_allocWithZone();
  FUN_100befbe8(param_1,param_2,param_3,param_4);
  return;
}



/* Address: 0x100befbe8 | FUN_100befbe8 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100befbe8(ID param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ID IVar2;
  ID IVar3;
  NSString *pNVar4;
  long unaff_x20;
  long lVar5;
  String SVar6;
  
  *(undefined8 *)(unaff_x20 + _TtC6Sentry17SentryReplayEvent::urls) = 0;
  lVar1 = _TtC6Sentry17SentryReplayEvent::replayStartTimestamp;
  IVar2 = param_1;
  FUN_100b7982c();
  lVar5 = *(long *)(IVar2 - 8);
  (**(code **)(lVar5 + 0x10))(unaff_x20 + lVar1,param_2,IVar2);
  *(undefined8 *)(unaff_x20 + _TtC6Sentry17SentryReplayEvent::replayType) = param_3;
  *(undefined8 *)(unaff_x20 + _TtC6Sentry17SentryReplayEvent::segmentId) = param_4;
  FUN_100bf0298();
  IVar3 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffa0,"init");
  pNVar4 = (NSString *)_objc_msgSend(param_1,"sentryIdString");
  if (pNVar4 == (NSString *)0x0) {
    SVar6 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(SVar6.bridgeObject);
  }
  _objc_msgSend((ID)&objc::class_t::SentryEventSwiftHelper,"setEventIdString:event:",pNVar4,IVar3);
  FUN_100bf021c(0x765f79616c706572,0xec0000006f656469,IVar3);
  (**(code **)(lVar5 + 8))(param_2,IVar2);
  return IVar3;
}



/* Address: 0x100befd48 | FUN_100befd48 */

void FUN_100befd48(undefined8 param_1)

{
  if (DAT_101048aa0 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetClassDescriptor_100cd0fa4);
  return;
}



/* Address: 0x100befd80 | _TtC6Sentry17SentryReplayEvent::initWithEventId:replayStartTimestamp:replayType:segmentId: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x30 bytes */

ID _TtC6Sentry17SentryReplayEvent::initWithEventId_replayStartTimestamp_replayType_segmentId_
             (ID param_1,SEL param_2,ID param_3,ID param_4,long_long param_5,long_long param_6)

{
  Date DVar1;
  long lVar2;
  
  DVar1 = Foundation::Date::typeMetadataAccessor();
  lVar2 = *(long *)(*(long *)(DVar1.unknown + -8) + 0x40);
  Foundation::Date::__unconditionallyBridgeFromObjectiveC((Date)param_4);
  FUN_100befbe8(param_3,&stack0xffffffffffffffc0 + -(lVar2 + 0xfU & 0xfffffffffffffff0),param_5,
                param_6);
  return param_3;
}



/* Address: 0x100befe0c | FUN_100befe0c */

void FUN_100befe0c(void)

{
  code *pcVar1;
  String SVar2;
  
  SVar2.bridgeObject = (void *)0x2;
  SVar2.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar2,(StaticString)0xd00000000000001f,0x8000000100dd27b0,
             0xdd27b0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100befe64);
  (*pcVar1)();
}



/* Address: 0x100befe64 | _TtC6Sentry17SentryReplayEvent::init */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry17SentryReplayEvent::init(ID param_1,SEL param_2)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  Dictionary<undefined,undefined> DVar4;
  undefined *puVar5;
  Date DVar6;
  long unaff_x20;
  char *pcVar7;
  undefined1 auStack_a0 [24];
  String SStack_88;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  FUN_100befe0c();
  FUN_100bf0298();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff98,"serialize");
  puVar1 = PTR___type_metadata_for_Swift_String_100eac208;
  DVar4 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  lVar2 = urls;
  FUN_100b80d44(unaff_x20 + urls,auStack_a0,0);
  pcVar7 = *(char **)(unaff_x20 + lVar2);
  if (pcVar7 == (char *)0x0) {
    puVar5 = (undefined *)0x0;
    SStack_88.bridgeObject = (void *)0x0;
    uStack_78 = 0;
  }
  else {
    puVar5 = &DAT_101044808;
    FUN_100b6730c();
  }
  puStack_70 = puVar5;
  SStack_88.str = pcVar7;
  _swift_bridgeObjectRetain(pcVar7);
  DVar6.unknown = (undefined *)&SStack_88;
  FUN_100b78fe8(DVar6.unknown,0x736c7275,&DAT_e400000000000000);
  SStack_88.str = (char *)Foundation::Date::get_timeIntervalSince1970(DVar6);
  puStack_70 = PTR___type_metadata_for_Swift_Double_100eac5d0;
  FUN_100b78fe8(&SStack_88,0xd000000000000016,0x8000000100dd2680);
  _objc_msgSend((ID)&objc::class_t::SentryEventSwiftHelper,"getEventIdString:");
  SStack_88 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  puStack_70 = puVar1;
  FUN_100b78fe8(&SStack_88,0x695f79616c706572,0xe900000000000064);
  puStack_70 = PTR___type_metadata_for_Swift_Int_100eac6f8;
  SStack_88.str = *(char **)(unaff_x20 + segmentId);
  FUN_100b78fe8(&SStack_88,0x5f746e656d676573,0xea00000000006469);
  SStack_88.str = *(char **)(unaff_x20 + replayType);
  if (SStack_88.str == (char *)0x1) {
    SStack_88.bridgeObject = &DAT_e600000000000000;
    SStack_88.str = (char *)0x726566667562;
  }
  else {
    if (SStack_88.str != (char *)0x0) {
      Swift::__diagnoseUnexpectedEnumCaseValue
                (&DAT_100f3ce08,&SStack_88,&DAT_100f3ce08,
                 PTR___type_metadata_for_Swift_Int_100eac6f8);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100bf00d8);
      (*pcVar3)();
    }
    SStack_88.bridgeObject = &DAT_e700000000000000;
    SStack_88.str = (char *)0x6e6f6973736573;
  }
  puStack_70 = puVar1;
  FUN_100b78fe8(&SStack_88,0x745f79616c706572,0xeb00000000657079);
  return (ID)DVar4.unknown;
}



/* Address: 0x100befe70 | FUN_100befe70 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined * FUN_100befe70(void)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  Dictionary<undefined,undefined> DVar4;
  undefined *puVar5;
  Date DVar6;
  long unaff_x20;
  char *pcVar7;
  undefined1 auStack_90 [24];
  String local_78;
  undefined8 uStack_68;
  undefined *local_60;
  
  FUN_100bf0298();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffa8,"serialize");
  puVar1 = PTR___type_metadata_for_Swift_String_100eac208;
  DVar4 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  lVar2 = _TtC6Sentry17SentryReplayEvent::urls;
  FUN_100b80d44(unaff_x20 + _TtC6Sentry17SentryReplayEvent::urls,auStack_90,0);
  pcVar7 = *(char **)(unaff_x20 + lVar2);
  if (pcVar7 == (char *)0x0) {
    puVar5 = (undefined *)0x0;
    local_78.bridgeObject = (void *)0x0;
    uStack_68 = 0;
  }
  else {
    puVar5 = &DAT_101044808;
    FUN_100b6730c();
  }
  local_60 = puVar5;
  local_78.str = pcVar7;
  _swift_bridgeObjectRetain(pcVar7);
  DVar6.unknown = (undefined *)&local_78;
  FUN_100b78fe8(DVar6.unknown,0x736c7275,&DAT_e400000000000000);
  local_78.str = (char *)Foundation::Date::get_timeIntervalSince1970(DVar6);
  local_60 = PTR___type_metadata_for_Swift_Double_100eac5d0;
  FUN_100b78fe8(&local_78,0xd000000000000016,0x8000000100dd2680);
  _objc_msgSend((ID)&objc::class_t::SentryEventSwiftHelper,"getEventIdString:");
  local_78 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  local_60 = puVar1;
  FUN_100b78fe8(&local_78,0x695f79616c706572,0xe900000000000064);
  local_60 = PTR___type_metadata_for_Swift_Int_100eac6f8;
  local_78.str = *(char **)(unaff_x20 + _TtC6Sentry17SentryReplayEvent::segmentId);
  FUN_100b78fe8(&local_78,0x5f746e656d676573,0xea00000000006469);
  local_78.str = *(char **)(unaff_x20 + _TtC6Sentry17SentryReplayEvent::replayType);
  if (local_78.str == (char *)0x1) {
    local_78.bridgeObject = &DAT_e600000000000000;
    local_78.str = (char *)0x726566667562;
  }
  else {
    if (local_78.str != (char *)0x0) {
      Swift::__diagnoseUnexpectedEnumCaseValue
                (&DAT_100f3ce08,&local_78,&DAT_100f3ce08,PTR___type_metadata_for_Swift_Int_100eac6f8
                );
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100bf00d8);
      (*pcVar3)();
    }
    local_78.bridgeObject = &DAT_e700000000000000;
    local_78.str = (char *)0x6e6f6973736573;
  }
  local_60 = puVar1;
  FUN_100b78fe8(&local_78,0x745f79616c706572,0xeb00000000657079);
  return DVar4.unknown;
}



/* Address: 0x100bf00d8 | _TtC6Sentry17SentryReplayEvent::serialize */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry17SentryReplayEvent::serialize(ID param_1,SEL param_2)

{
  NSDictionary *pNVar1;
  
  FUN_100befe70(param_1);
  pNVar1 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_1);
  return (ID)pNVar1;
}



/* Address: 0x100bf013c | FUN_100bf013c */

void FUN_100bf013c(undefined8 param_1)

{
  ID unaff_x20;
  
  _objc_allocWithZone();
  _objc_msgSend(unaff_x20,"initWithLevel:",param_1);
  return;
}



/* Address: 0x100bf016c | FUN_100bf016c */

void FUN_100bf016c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("Sentry.SentryReplayEvent",0x18,"init(level:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100bf0198);
  (*pcVar1)();
}



/* Address: 0x100bf0198 | _TtC6Sentry17SentryReplayEvent::initWithLevel: */

/* Function Stack Size: 0x18 bytes */

ID _TtC6Sentry17SentryReplayEvent::initWithLevel_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  ID IVar1;
  
  FUN_100bf016c();
  FUN_100bf0298();
  IVar1 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffd0,"dealloc");
  return IVar1;
}



/* Address: 0x100bf01a4 | FUN_100bf01a4 */

void FUN_100bf01a4(void)

{
  FUN_100bf0298();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"dealloc");
  return;
}



/* Address: 0x100bf01d4 | _TtC6Sentry17SentryReplayEvent::.cxx_destruct */

/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry17SentryReplayEvent::_cxx_destruct(ID param_1,SEL param_2)

{
  long lVar1;
  ID IVar2;
  
  lVar1 = replayStartTimestamp;
  IVar2 = param_1;
  FUN_100b7982c();
  (**(code **)(*(long *)(IVar2 - 8) + 8))(param_1 + lVar1,IVar2);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + urls));
  return;
}



/* Address: 0x100bf021c | FUN_100bf021c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100bf021c(undefined8 param_1,undefined8 param_2,ID param_3)

{
  NSString *pNVar1;
  
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_2);
  _objc_msgSend(param_3,"setType:",pNVar1);
  return 0;
}



/* Address: 0x100bf026c | FUN_100bf026c */

void FUN_100bf026c(undefined8 *param_1,undefined8 param_2)

{
  FUN_100befa44();
  *param_1 = param_2;
  return;
}


