/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100bbef94 | FUN_100bbef94 */

void FUN_100bbef94(void)

{
  long unaff_x29;
  
                    /* WARNING: Could not recover jumptable at 0x000100bbefa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x29 + -0x60) + 8))();
  return;
}



/* Address: 0x100bbefa8 | FUN_100bbefa8 */

void FUN_100bbefa8(void)

{
  FUN_100b6730c();
  return;
}



/* Address: 0x100bbefb0 | FUN_100bbefb0 */

void FUN_100bbefb0(void)

{
  return;
}



/* Address: 0x100bbefbc | FUN_100bbefbc */

void FUN_100bbefbc(void)

{
  return;
}



/* Address: 0x100bbefd4 | FUN_100bbefd4 */

void FUN_100bbefd4(long param_1)

{
  undefined1 in_w9;
  
  *(undefined1 *)(param_1 + 0x10) = in_w9;
  return;
}



/* Address: 0x100bbefdc | FUN_100bbefdc */

void FUN_100bbefdc(void)

{
  undefined8 *unaff_x19;
  undefined8 in_stack_00000020;
  
  *unaff_x19 = in_stack_00000020;
  unaff_x19[1] = 0;
  return;
}



/* Address: 0x100bbefe8 | FUN_100bbefe8 */

void FUN_100bbefe8(void)

{
  long unaff_x29;
  
  *(undefined1 *)(unaff_x29 + -0x48) = 1;
  return;
}



/* Address: 0x100bbeff4 | FUN_100bbeff4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_100bbeff4(undefined8 param_1)

{
  _objc_msgSend((ID)&_OBJC_CLASS___NSThread,"sleepForTimeInterval:",param_1);
  return;
}



/* Address: 0x100bbf028 | _TtC6Sentry19SentryThreadWrapper::sleepForTimeInterval: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry19SentryThreadWrapper::sleepForTimeInterval_(ID param_1,SEL param_2,double param_3)

{
  FUN_100bbeff4(param_3,param_1);
  return;
}



/* Address: 0x100bbf060 | _TtC6Sentry19SentryThreadWrapper::threadStarted: */

/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry19SentryThreadWrapper::threadStarted_(ID param_1,SEL param_2,ID param_3)

{
  UUID UVar1;
  long lVar2;
  long lVar3;
  
  UVar1 = Foundation::UUID::typeMetadataAccessor();
  lVar3 = *(long *)(UVar1.unknown + -8);
  lVar2 = *(long *)(lVar3 + 0x40);
  Foundation::UUID::__unconditionallyBridgeFromObjectiveC((UUID)param_3);
  (**(code **)(lVar3 + 8))
            (&stack0xffffffffffffffd0 + -(lVar2 + 0xfU & 0xfffffffffffffff0),UVar1.unknown);
  return;
}



/* Address: 0x100bbf064 | FUN_100bbf064 */

void FUN_100bbf064(ID param_1,SEL param_2,ID param_3)

{
  UUID UVar1;
  long lVar2;
  long lVar3;
  
  UVar1 = Foundation::UUID::typeMetadataAccessor();
  lVar3 = *(long *)(UVar1.unknown + -8);
  lVar2 = *(long *)(lVar3 + 0x40);
  Foundation::UUID::__unconditionallyBridgeFromObjectiveC((UUID)param_3);
  (**(code **)(lVar3 + 8))
            (&stack0xffffffffffffffd0 + -(lVar2 + 0xfU & 0xfffffffffffffff0),UVar1.unknown);
  return;
}



/* Address: 0x100bbf0d0 | FUN_100bbf0d0 */

void FUN_100bbf0d0(void)

{
  FUN_100bbf100();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"init");
  return;
}



/* Address: 0x100bbf100 | FUN_100bbf100 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100bbf100(void)

{
  return ZEXT816(0x100fa3840);
}



/* Address: 0x100bbf120 | _TtC6Sentry19SentryThreadWrapper::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry19SentryThreadWrapper::init(ID param_1,SEL param_2)

{
  FUN_100bbf0d0();
  return param_1;
}



/* Address: 0x100bbf140 | FUN_100bbf140 */

void FUN_100bbf140(void)

{
  FUN_100bbf100();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"dealloc");
  return;
}



/* Address: 0x100bbf170 | FUN_100bbf170 */

void FUN_100bbf170(undefined8 param_1,undefined8 param_2)

{
  _swift_lookUpClassMethod(param_1,param_2,&TargetClassDescriptor_100ccf888);
  return;
}



/* Address: 0x100bbf17c | FUN_100bbf17c */

void FUN_100bbf17c(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100bbf194. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0x50))();
  return;
}



/* Address: 0x100bbf198 | FUN_100bbf198 */

void FUN_100bbf198(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100bbf1b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0x58))();
  return;
}



/* Address: 0x100bbf1b4 | FUN_100bbf1b4 */

void FUN_100bbf1b4(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100bbf1cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0x60))();
  return;
}



/* Address: 0x100bbf1d0 | _TtC6Sentry19SentryThreadWrapper::threadFinished: */

/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry19SentryThreadWrapper::threadFinished_(ID param_1,SEL param_2,ID param_3)

{
  UUID UVar1;
  long lVar2;
  long lVar3;
  
  UVar1 = Foundation::UUID::typeMetadataAccessor();
  lVar3 = *(long *)(UVar1.unknown + -8);
  lVar2 = *(long *)(lVar3 + 0x40);
  Foundation::UUID::__unconditionallyBridgeFromObjectiveC((UUID)param_3);
  (**(code **)(lVar3 + 8))
            (&stack0xffffffffffffffd0 + -(lVar2 + 0xfU & 0xfffffffffffffff0),UVar1.unknown);
  return;
}



/* Address: 0x100bbf1d4 | FUN_100bbf1d4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100bbf1d4(undefined8 param_1,ulong param_2,ulong param_3)

{
  Date DVar1;
  ulong uVar2;
  ID IVar3;
  Date DVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  
  DVar1 = Foundation::Date::typeMetadataAccessor();
  lVar6 = *(long *)(DVar1.unknown + -8);
  lVar5 = *(long *)(lVar6 + 0x40);
  if (param_3 != 0) {
    uVar2 = param_2 & 0xffffffffffff;
    if ((param_3 & 0x2000000000000000) != 0) {
      uVar2 = param_3 >> 0x38 & 0xf;
    }
    if (uVar2 != 0) {
      FUN_100bbf358(0);
      _swift_bridgeObjectRetain(param_3);
      uVar2 = param_2;
      FUN_100bbf394(param_2,param_3);
      IVar3 = _objc_msgSend(uVar2,"integerValue");
      if (IVar3 == 0) {
        FUN_100be10c0(param_1,param_2,param_3);
      }
      else {
        DVar4.unknown =
             (undefined *)
             _objc_msgSend(*(ID *)(unaff_x20 + SentryRetryAfterHeaderParser::currentDateProvider),
                           "date");
        Foundation::Date::__unconditionallyBridgeFromObjectiveC(DVar4);
        Foundation::Date::addingTimeInterval((double)(long)IVar3,(Date)0x0);
        (**(code **)(lVar6 + 8))
                  (&stack0xffffffffffffffa0 + -(lVar5 + 0xfU & 0xfffffffffffffff0),DVar1.unknown);
        FUN_1000c9ffc(param_1,0,1,DVar1.unknown);
      }
      return;
    }
  }
  FUN_1000c9ffc(param_1,1,1,DVar1.unknown);
  return;
}



/* Address: 0x100bbf358 | FUN_100bbf358 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_100bbf358(void)

{
  undefined *puVar1;
  
  if (DAT_1010473b0 == (undefined *)0x0) {
    puVar1 = &_OBJC_CLASS___NSString;
    _swift_getObjCClassMetadata();
    DAT_1010473b0 = puVar1;
  }
  return;
}



/* Address: 0x100bbf394 | FUN_100bbf394 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100bbf394(undefined8 param_1,undefined8 param_2)

{
  NSString *pNVar1;
  ID IVar2;
  ID unaff_x20;
  
  _swift_getObjCClassFromMetadata();
  _objc_allocWithZone();
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_2);
  IVar2 = _objc_msgSend(unaff_x20,"initWithString:",pNVar1);
  return IVar2;
}



/* Address: 0x100bbf408 | SentryRetryAfterHeaderParser::parse: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryRetryAfterHeaderParser::parse_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  Date DVar2;
  Date DVar3;
  undefined1 *puVar4;
  NSDate *pNVar5;
  String SVar6;
  
  puVar1 = &DAT_101044980;
  FUN_100b6730c();
  puVar4 = &stack0xffffffffffffffd0 +
           -(*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  if (param_3 == 0) {
    SVar6 = (String)(ZEXT816(0) << 0x40);
  }
  else {
    SVar6 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  FUN_100bbf1d4(puVar4,SVar6.str,SVar6.bridgeObject);
  _swift_bridgeObjectRelease(SVar6.bridgeObject);
  DVar2 = Foundation::Date::typeMetadataAccessor();
  DVar3.unknown = puVar4;
  FUN_1000c9ff0(puVar4,1,DVar2.unknown);
  pNVar5 = (NSDate *)0x0;
  if ((int)DVar3.unknown != 1) {
    pNVar5 = Foundation::Date::_bridgeToObjectiveC(DVar3);
    (**(code **)(*(long *)(DVar2.unknown + -8) + 8))(puVar4,DVar2.unknown);
  }
  return (ID)pNVar5;
}



/* Address: 0x100bbf4f0 | FUN_100bbf4f0 */

void FUN_100bbf4f0(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("Sentry.RetryAfterHeaderParser",0x1d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100bbf51c);
  (*pcVar1)();
}



/* Address: 0x100bbf51c | SentryRetryAfterHeaderParser::init */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryRetryAfterHeaderParser::init(ID param_1,SEL param_2)

{
  ID IVar1;
  
  FUN_100bbf4f0();
  IVar1 = *(ID *)(param_1 + currentDateProvider);
  _swift_unknownObjectRelease();
  return IVar1;
}



/* Address: 0x100bbf528 | SentryRetryAfterHeaderParser::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryRetryAfterHeaderParser::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + currentDateProvider));
  return;
}



/* Address: 0x100bbf560 | FUN_100bbf560 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100bbf560(void)

{
  return ZEXT816(0x100fa3908);
}



/* Address: 0x100bbf580 | FUN_100bbf580 */

void FUN_100bbf580(undefined8 param_1,undefined8 param_2)

{
  _swift_lookUpClassMethod(param_1,param_2,&TargetClassDescriptor_100ccf8d4);
  return;
}



/* Address: 0x100bbf58c | _TtC6Sentry12UrlSanitized::SENSITIVE_DATA_SUBSTITUTE */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry12UrlSanitized::SENSITIVE_DATA_SUBSTITUTE(ID param_1,SEL param_2)

{
  NSString *pNVar1;
  
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(0xea00000000005d64);
  return (ID)pNVar1;
}



/* Address: 0x100bbf5d4 | FUN_100bbf5d4 */

void FUN_100bbf5d4(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  _objc_allocWithZone();
  lVar1 = _TtC6Sentry12UrlSanitized::wrapped;
  lVar2 = unaff_x20;
  FUN_100b7c984();
  FUN_100bbfd4c(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x10),unaff_x20 + lVar1);
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffb0,"init");
  FUN_100bbfd30();
  FUN_100b81bd8();
  return;
}



/* Address: 0x100bbf640 | FUN_100bbf640 */

void FUN_100bbf640(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = unaff_x20;
  _swift_getObjectType();
  lVar1 = _TtC6Sentry12UrlSanitized::wrapped;
  FUN_100b7c984();
  FUN_100bbfd4c(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x10),unaff_x20 + lVar1);
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffb0,"init");
  FUN_100bbfd30();
  FUN_100b81bd8();
  return;
}



/* Address: 0x100bbf6ac | _TtC6Sentry12UrlSanitized::initWithURL: */

/* Function Stack Size: 0x18 bytes */

ID _TtC6Sentry12UrlSanitized::initWithURL_(ID param_1,SEL param_2,ID param_3)

{
  URL UVar1;
  undefined1 *puVar2;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  puVar2 = &stack0xffffffffffffffd0 +
           -(*(long *)(*(long *)(UVar1.unknown + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  Foundation::URL::__unconditionallyBridgeFromObjectiveC((URL)param_3);
  FUN_100bbf640();
  return (ID)puVar2;
}



/* Address: 0x100bbf710 | _TtC6Sentry12UrlSanitized::sanitizedUrl */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry12UrlSanitized::sanitizedUrl(ID param_1,SEL param_2)

{
  FUN_100bbf938(param_1,param_2,thunk_FUN_100bbf9a8);
  return param_1;
}



/* Address: 0x100bbf71c | FUN_100bbf71c */

void FUN_100bbf71c(undefined8 param_1)

{
  URLComponents UVar1;
  URLComponents UVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  char unaff_w20;
  URLComponents *this;
  undefined *puVar6;
  long lVar7;
  code *pcVar8;
  
  puVar6 = &DAT_1010473f8;
  FUN_100b6730c();
  puVar4 = &stack0xffffffffffffffc0 +
           -(*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  UVar1 = Foundation::URLComponents::typeMetadataAccessor();
  lVar7 = *(long *)(UVar1.unknown + -8);
  this = (URLComponents *)(puVar4 + -(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0));
  Foundation::URLComponents::_init((bool)(unaff_w20 + (char)_TtC6Sentry12UrlSanitized::wrapped));
  puVar5 = puVar4;
  FUN_1000c9ff0(puVar4,1,UVar1.unknown);
  if ((int)puVar5 == 1) {
    FUN_100bbf870(puVar4);
    uVar3 = 1;
  }
  else {
    puVar6 = (undefined *)0x657265746c69465b;
    pcVar8 = *(code **)(lVar7 + 0x20);
    UVar2.unknown = (undefined *)this;
    (*pcVar8)(this,puVar4,UVar1.unknown);
    Foundation::URLComponents::_get_user(UVar2);
    UVar2.unknown = puVar4;
    puVar5 = puVar4;
    _swift_bridgeObjectRelease();
    if (puVar4 != (undefined1 *)0x0) {
      puVar5 = (undefined1 *)0xea00000000005d64;
      Foundation::URLComponents::_set_user(this);
      UVar2.unknown = puVar6;
    }
    Foundation::URLComponents::_get_password(UVar2);
    _swift_bridgeObjectRelease(puVar5);
    if (puVar5 != (undefined1 *)0x0) {
      Foundation::URLComponents::_set_password(this);
    }
    (*pcVar8)(param_1,this,UVar1.unknown);
    uVar3 = 0;
  }
  FUN_1000c9ffc(param_1,uVar3,1,UVar1.unknown);
  return;
}



/* Address: 0x100bbf870 | FUN_100bbf870 */

undefined8 FUN_100bbf870(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_1010473f8;
  FUN_100b6730c();
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x100bbf8b0 | FUN_100bbf8b0 */

undefined1  [16] FUN_100bbf8b0(URLComponents param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auVar3 [16];
  
  Foundation::URLComponents::_get_string(param_1);
  if (param_2 != (undefined *)0x0) {
    puVar1 = param_1.unknown;
    FUN_100008378();
    puVar2 = PTR___type_metadata_for_Swift_String_100eac208;
    (extension_Foundation)::Swift::StringProtocol::_get_removingPercentEncoding();
    if (puVar1 != (undefined *)0x0) {
      _swift_bridgeObjectRelease(param_2);
      param_1.unknown = puVar2;
      param_2 = puVar1;
    }
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1.unknown;
  return auVar3;
}



/* Address: 0x100bbf92c | _TtC6Sentry12UrlSanitized::sanitizedBaseUrl */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry12UrlSanitized::sanitizedBaseUrl(ID param_1,SEL param_2)

{
  FUN_100bbf938(param_1,param_2,thunk_FUN_100bbf9a8);
  return param_1;
}



/* Address: 0x100bbf938 | FUN_100bbf938 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

NSString * FUN_100bbf938(undefined8 param_1,long param_2,code *param_3)

{
  NSString *pNVar1;
  
  (*param_3)(param_1);
  if (param_2 == 0) {
    pNVar1 = (NSString *)0x0;
  }
  else {
    pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(param_2);
  }
  return pNVar1;
}



/* Address: 0x100bbf9a4 | thunk_FUN_100bbf9a8 */

undefined1  [16] thunk_FUN_100bbf9a8(void)

{
  undefined *puVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x9;
  URLComponents *pUVar3;
  undefined8 uVar4;
  URLComponents *this;
  long lVar5;
  long lVar6;
  undefined1 auVar7 [16];
  
  puVar1 = &DAT_1010473f8;
  FUN_100b6730c();
  FUN_100b7ef70();
  lVar5 = extraout_x9 - extraout_x8;
  FUN_100bbfd44();
  lVar6 = *(long *)(puVar1 + -8);
  this = (URLComponents *)(lVar5 - (*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0));
  FUN_100bbf71c(lVar5);
  lVar2 = lVar5;
  FUN_1000c9ff0(lVar5,1,puVar1);
  if ((int)lVar2 == 1) {
    FUN_100bbf870(lVar5);
    pUVar3 = (URLComponents *)0x0;
    uVar4 = 0;
  }
  else {
    (**(code **)(lVar6 + 0x20))(this,lVar5,puVar1);
    pUVar3 = this;
    Foundation::URLComponents::_set_queryItems(this);
    uVar4 = 0;
    Foundation::URLComponents::_set_fragment(pUVar3);
    pUVar3 = this;
    FUN_100bbf8b0(this);
    (**(code **)(lVar6 + 8))(this,puVar1);
  }
  auVar7._8_8_ = uVar4;
  auVar7._0_8_ = pUVar3;
  return auVar7;
}



/* Address: 0x100bbf9a8 | FUN_100bbf9a8 */

undefined1  [16] FUN_100bbf9a8(void)

{
  undefined *puVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x9;
  URLComponents *pUVar3;
  undefined8 uVar4;
  URLComponents *this;
  long lVar5;
  long lVar6;
  undefined1 auVar7 [16];
  
  puVar1 = &DAT_1010473f8;
  FUN_100b6730c();
  FUN_100b7ef70();
  lVar5 = extraout_x9 - extraout_x8;
  FUN_100bbfd44();
  lVar6 = *(long *)(puVar1 + -8);
  this = (URLComponents *)(lVar5 - (*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0));
  FUN_100bbf71c(lVar5);
  lVar2 = lVar5;
  FUN_1000c9ff0(lVar5,1,puVar1);
  if ((int)lVar2 == 1) {
    FUN_100bbf870(lVar5);
    pUVar3 = (URLComponents *)0x0;
    uVar4 = 0;
  }
  else {
    (**(code **)(lVar6 + 0x20))(this,lVar5,puVar1);
    pUVar3 = this;
    Foundation::URLComponents::_set_queryItems(this);
    uVar4 = 0;
    Foundation::URLComponents::_set_fragment(pUVar3);
    pUVar3 = this;
    FUN_100bbf8b0(this);
    (**(code **)(lVar6 + 8))(this,puVar1);
  }
  auVar7._8_8_ = uVar4;
  auVar7._0_8_ = pUVar3;
  return auVar7;
}



/* Address: 0x100bbfaa0 | _TtC6Sentry12UrlSanitized::query */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry12UrlSanitized::query(ID param_1,SEL param_2)

{
  FUN_100bbf938(param_1,param_2,FUN_100bbfaac);
  return param_1;
}



/* Address: 0x100bbfaac | FUN_100bbfaac */

void FUN_100bbfaac(void)

{
  FUN_100bbfbc8(PTR__get_query_100ea6cd0);
  return;
}



/* Address: 0x100bbfab8 | _TtC6Sentry12UrlSanitized::queryItems */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry12UrlSanitized::queryItems(ID param_1,SEL param_2)

{
  NSArray *pNVar1;
  
  FUN_100bbfb18();
  if (param_1 == 0) {
    pNVar1 = (NSArray *)0x0;
  }
  else {
    Foundation::URLQueryItem::typeMetadataAccessor();
    pNVar1 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(param_1);
  }
  return (ID)pNVar1;
}



/* Address: 0x100bbfb18 | FUN_100bbfb18 */

undefined * FUN_100bbfb18(void)

{
  undefined *puVar1;
  long extraout_x8;
  long extraout_x9;
  undefined *puVar2;
  URLComponents UVar3;
  
  puVar1 = &DAT_1010473f8;
  FUN_100b6730c();
  FUN_100b7ef70();
  puVar2 = (undefined *)(extraout_x9 - extraout_x8);
  FUN_100bbf71c(puVar2);
  FUN_100bbfd44();
  UVar3.unknown = puVar2;
  FUN_1000c9ff0(puVar2,1,puVar1);
  if ((int)UVar3.unknown == 1) {
    FUN_100bbf870(puVar2);
    UVar3.unknown = (undefined *)0x0;
  }
  else {
    Foundation::URLComponents::_get_queryItems(UVar3);
    (**(code **)(*(long *)(puVar1 + -8) + 8))(puVar2,puVar1);
  }
  return UVar3.unknown;
}



/* Address: 0x100bbfbb0 | _TtC6Sentry12UrlSanitized::fragment */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry12UrlSanitized::fragment(ID param_1,SEL param_2)

{
  FUN_100bbf938(param_1,param_2,FUN_100bbfbbc);
  return param_1;
}



/* Address: 0x100bbfbbc | FUN_100bbfbbc */

void FUN_100bbfbbc(void)

{
  FUN_100bbfbc8(PTR__get_fragment_100ea6d00);
  return;
}



/* Address: 0x100bbfbc8 | FUN_100bbfbc8 */

undefined1  [16] FUN_100bbfbc8(code *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long extraout_x8;
  long extraout_x9;
  long lVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  puVar1 = &DAT_1010473f8;
  FUN_100b6730c();
  FUN_100b7ef70();
  lVar4 = extraout_x9 - extraout_x8;
  FUN_100bbf71c(lVar4);
  FUN_100bbfd44();
  uVar2 = 1;
  lVar3 = lVar4;
  FUN_1000c9ff0(lVar4,1,puVar1);
  if ((int)lVar3 == 1) {
    FUN_100bbf870(lVar4);
    lVar3 = 0;
    uVar2 = 0;
  }
  else {
    (*param_1)();
    (**(code **)(*(long *)(puVar1 + -8) + 8))(lVar4,puVar1);
  }
  auVar5._8_8_ = uVar2;
  auVar5._0_8_ = lVar3;
  return auVar5;
}



/* Address: 0x100bbfc70 | FUN_100bbfc70 */

void FUN_100bbfc70(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("Sentry.UrlSanitized",0x13,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100bbfc9c);
  (*pcVar1)();
}



/* Address: 0x100bbfc9c | _TtC6Sentry12UrlSanitized::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry12UrlSanitized::init(ID param_1,SEL param_2)

{
  long lVar1;
  ID IVar2;
  ID IVar3;
  
  FUN_100bbfc70();
  lVar1 = wrapped;
  IVar2 = param_1;
  FUN_100b7c984();
  IVar3 = param_1 + lVar1;
                    /* WARNING: Could not recover jumptable at 0x000100bbfcdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(IVar2 - 8) + 8))(IVar3,IVar2);
  return IVar3;
}



/* Address: 0x100bbfca8 | _TtC6Sentry12UrlSanitized::.cxx_destruct */

/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry12UrlSanitized::_cxx_destruct(ID param_1,SEL param_2)

{
  long lVar1;
  ID IVar2;
  
  lVar1 = wrapped;
  IVar2 = param_1;
  FUN_100b7c984();
                    /* WARNING: Could not recover jumptable at 0x000100bbfcdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(IVar2 - 8) + 8))(param_1 + lVar1,IVar2);
  return;
}



/* Address: 0x100bbfce0 | FUN_100bbfce0 */

void FUN_100bbfce0(void)

{
  FUN_100bbfce8(0);
  return;
}



/* Address: 0x100bbfce8 | FUN_100bbfce8 */

void FUN_100bbfce8(undefined8 param_1)

{
  if (DAT_101047428 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetClassDescriptor_100ccf910);
  return;
}



/* Address: 0x100bbfd20 | FUN_100bbfd20 */

void FUN_100bbfd20(undefined8 param_1,undefined8 param_2)

{
  _swift_lookUpClassMethod(param_1,param_2,&TargetClassDescriptor_100ccf910);
  return;
}



/* Address: 0x100bbfd2c | thunk_FUN_100bbf9a8 */

undefined1  [16] thunk_FUN_100bbf9a8(void)

{
  undefined *puVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x9;
  URLComponents *pUVar3;
  undefined8 uVar4;
  URLComponents *this;
  long lVar5;
  long lVar6;
  undefined1 auVar7 [16];
  
  puVar1 = &DAT_1010473f8;
  FUN_100b6730c();
  FUN_100b7ef70();
  lVar5 = extraout_x9 - extraout_x8;
  FUN_100bbfd44();
  lVar6 = *(long *)(puVar1 + -8);
  this = (URLComponents *)(lVar5 - (*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0));
  FUN_100bbf71c(lVar5);
  lVar2 = lVar5;
  FUN_1000c9ff0(lVar5,1,puVar1);
  if ((int)lVar2 == 1) {
    FUN_100bbf870(lVar5);
    pUVar3 = (URLComponents *)0x0;
    uVar4 = 0;
  }
  else {
    (**(code **)(lVar6 + 0x20))(this,lVar5,puVar1);
    pUVar3 = this;
    Foundation::URLComponents::_set_queryItems(this);
    uVar4 = 0;
    Foundation::URLComponents::_set_fragment(pUVar3);
    pUVar3 = this;
    FUN_100bbf8b0(this);
    (**(code **)(lVar6 + 8))(this,puVar1);
  }
  auVar7._8_8_ = uVar4;
  auVar7._0_8_ = pUVar3;
  return auVar7;
}



/* Address: 0x100bbfd30 | FUN_100bbfd30 */

void FUN_100bbfd30(void)

{
  long unaff_x24;
  
                    /* WARNING: Could not recover jumptable at 0x000100bbfd40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x24 + 8))();
  return;
}



/* Address: 0x100bbfd44 | FUN_100bbfd44 */

void FUN_100bbfd44(void)

{
  Foundation::URLComponents::typeMetadataAccessor();
  return;
}



/* Address: 0x100bbfd4c | FUN_100bbfd4c */

void FUN_100bbfd4c(code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x000100bbfd54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x100bbfd58 | FUN_100bbfd58 */

void FUN_100bbfd58(undefined8 param_1,undefined8 param_2)

{
  FUN_100b69e08();
  FUN_100bbfd8c(param_1,param_2);
  FUN_100b56e60();
  return;
}



/* Address: 0x100bbfd8c | FUN_100bbfd8c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100bbfd8c(undefined8 param_1)

{
  ID self;
  ID self_00;
  ID IVar1;
  long lVar2;
  undefined8 *unaff_x20;
  undefined8 unaff_x22;
  
  FUN_100bc06b4();
  self = _objc_msgSend((ID)&objc::class_t::SentrySDKInternal,"currentHub");
  self_00 = _objc_msgSend(self,"getClient");
  FUN_100b6f868();
  if (self_00 != 0) {
    IVar1 = _objc_msgSend(self_00,"getOptions");
    FUN_100bc0704(IVar1);
    if (self != 0) {
      lVar2 = 0;
      FUN_100b93bc4();
      FUN_100bc06f8();
      if (lVar2 != 0) {
        FUN_100bc06e0();
        FUN_100bc06ec();
        FUN_100bc06a4();
        FUN_100b97e4c();
        FUN_100bc0628(self_00 + SentryOptions::sendDefaultPii);
        FUN_100bc0690();
        FUN_100b97e4c();
        goto LAB_100bbfe6c;
      }
      FUN_100b6f868();
    }
  }
  FUN_100bc06c4(PTR___swiftEmptyArrayStorage_100eae0d8);
LAB_100bbfe6c:
  FUN_100bc0638();
  _objc_allocWithZone(param_1);
  FUN_100bbff04();
  FUN_100b6f960();
  FUN_100bc067c(*unaff_x20);
  FUN_100bc0664(unaff_x22);
  return;
}



/* Address: 0x100bbfeb8 | _TtC6Sentry20SentryEnvelopeHeader::initWithId:traceContext: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID _TtC6Sentry20SentryEnvelopeHeader::initWithId_traceContext_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  FUN_100bbfd8c(param_3,param_4);
  return param_3;
}



/* Address: 0x100bbff04 | FUN_100bbff04 */

void FUN_100bbff04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  Date DVar3;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  FUN_100bc06b4();
  lVar2 = _TtC6Sentry20SentryEnvelopeHeader::sentAt;
  DVar3 = Foundation::Date::typeMetadataAccessor();
  FUN_1000c9ffc(unaff_x20 + lVar2,1,1,DVar3.unknown);
  *(undefined8 *)(unaff_x20 + _TtC6Sentry20SentryEnvelopeHeader::eventId) = unaff_x22;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC6Sentry20SentryEnvelopeHeader::sdkInfo);
  uVar4 = *unaff_x21;
  uVar6 = unaff_x21[3];
  uVar5 = unaff_x21[2];
  puVar1[1] = unaff_x21[1];
  *puVar1 = uVar4;
  puVar1[3] = uVar6;
  puVar1[2] = uVar5;
  uVar4 = unaff_x21[4];
  puVar1[5] = unaff_x21[5];
  puVar1[4] = uVar4;
  uVar4 = *(undefined8 *)((long)unaff_x21 + 0x29);
  *(undefined8 *)((long)puVar1 + 0x31) = *(undefined8 *)((long)unaff_x21 + 0x31);
  *(undefined8 *)((long)puVar1 + 0x29) = uVar4;
  *(undefined8 *)(unaff_x20 + _TtC6Sentry20SentryEnvelopeHeader::traceContext) = param_3;
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffb0,"init");
  return;
}



/* Address: 0x100bbffb4 | FUN_100bbffb4 */

void FUN_100bbffb4(undefined8 param_1,undefined8 param_2)

{
  FUN_100b69e08();
  FUN_100bbffe8(param_1,param_2);
  FUN_100b56e60();
  return;
}



/* Address: 0x100bbffe8 | FUN_100bbffe8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100bbffe8(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  ID self;
  ID self_00;
  ID IVar2;
  long lVar3;
  undefined8 *unaff_x20;
  undefined1 auStack_d0 [64];
  undefined1 auStack_90 [64];
  
  uVar1 = param_1;
  FUN_100b6f960();
  if (param_2 == 0) {
    self = _objc_msgSend((ID)&objc::class_t::SentrySDKInternal,"currentHub");
    self_00 = _objc_msgSend(self,"getClient");
    FUN_100b6f868();
    if (self_00 != 0) {
      IVar2 = _objc_msgSend(self_00,"getOptions");
      FUN_100bc0704(IVar2);
      if (self != 0) {
        lVar3 = 0;
        FUN_100b93bc4();
        FUN_100bc06f8();
        if (lVar3 != 0) {
          FUN_100bc06e0();
          FUN_100bc06ec();
          FUN_100bc06a4();
          FUN_100b97e4c();
          FUN_100bc0628(self_00 + SentryOptions::sendDefaultPii);
          FUN_100bc0690();
          goto LAB_100bc010c;
        }
        FUN_100b6f868();
      }
    }
    FUN_100bc06c4(PTR___swiftEmptyArrayStorage_100eae0d8);
  }
  else {
    FUN_100be7ea8(auStack_d0,param_2);
  }
LAB_100bc010c:
  FUN_100bc0638();
  _objc_allocWithZone(uVar1);
  FUN_100bbff04(param_1,auStack_90,0);
  FUN_100b6f960();
  FUN_100bc067c(*unaff_x20);
  FUN_100bc0664(param_1);
  return;
}


