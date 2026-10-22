/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100ba7734 | FUN_100ba7734 */

void FUN_100ba7734(void)

{
  FUN_100ba7c04();
  FUN_100ba7c14();
  FUN_100ba7758();
  FUN_100b56e60();
  return;
}



/* Address: 0x100ba7758 | FUN_100ba7758 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100ba7758(undefined8 param_1)

{
  ID unaff_x19;
  
  FUN_100ba7c38();
  _objc_allocWithZone();
  FUN_100ba7c4c();
  FUN_100ba7c24();
  _objc_msgSend(unaff_x19,"initWithHeader:singleItem:",param_1);
  FUN_100ba7c58();
  FUN_100b6fa78();
  FUN_100b5e408();
  return;
}



/* Address: 0x100ba77b4 | _TtC6Sentry14SentryEnvelope::initWithId:singleItem: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID _TtC6Sentry14SentryEnvelope::initWithId_singleItem_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  FUN_100ba7758(param_3,param_4);
  return param_3;
}



/* Address: 0x100ba7800 | FUN_100ba7800 */

void FUN_100ba7800(void)

{
  FUN_100ba7c04();
  FUN_100ba7c14();
  FUN_100ba7824();
  FUN_100b56e60();
  return;
}



/* Address: 0x100ba7824 | FUN_100ba7824 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100ba7824(long param_1,undefined8 param_2)

{
  long lVar1;
  NSArray *pNVar2;
  ID IVar3;
  ID unaff_x20;
  
  lVar1 = param_1;
  FUN_100b936cc();
  _swift_allocObject();
  *(undefined8 *)(lVar1 + 0x18) = 3;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  *(undefined8 *)(lVar1 + 0x20) = param_2;
  FUN_100bdb954(0);
  pNVar2 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(lVar1);
  IVar3 = _objc_msgSend(unaff_x20,"initWithHeader:items:",param_1,pNVar2);
  FUN_100b6fa78();
  FUN_100b5e408(IVar3);
  return;
}



/* Address: 0x100ba78e0 | _TtC6Sentry14SentryEnvelope::initWithHeader:singleItem: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID _TtC6Sentry14SentryEnvelope::initWithHeader_singleItem_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  FUN_100ba7824(param_3,param_4);
  return param_3;
}



/* Address: 0x100ba7928 | FUN_100ba7928 */

void FUN_100ba7928(void)

{
  FUN_100ba7c04();
  FUN_100ba7c14();
  FUN_100ba794c();
  FUN_100b56e60();
  return;
}



/* Address: 0x100ba794c | FUN_100ba794c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100ba794c(undefined8 param_1)

{
  NSArray *pNVar1;
  ID unaff_x19;
  
  FUN_100ba7c38();
  _objc_allocWithZone();
  FUN_100ba7c4c();
  FUN_100ba7c24();
  FUN_100bdb954(0);
  pNVar1 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease();
  _objc_msgSend(unaff_x19,"initWithHeader:items:",param_1,pNVar1);
  FUN_100ba7c58();
  FUN_100b6fa78(0);
  FUN_100b5e408();
  return;
}



/* Address: 0x100ba79c8 | _TtC6Sentry14SentryEnvelope::initWithId:items: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID _TtC6Sentry14SentryEnvelope::initWithId_items_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  FUN_100bdb954(0);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  FUN_100ba794c(param_3,param_4);
  return param_3;
}



/* Address: 0x100ba7a24 | FUN_100ba7a24 */

void FUN_100ba7a24(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_getObjectType();
  *(undefined8 *)(unaff_x20 + _TtC6Sentry14SentryEnvelope::header) = param_1;
  *(undefined8 *)(unaff_x20 + _TtC6Sentry14SentryEnvelope::items) = param_2;
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffc0,"init");
  return;
}



/* Address: 0x100ba7a88 | _TtC6Sentry14SentryEnvelope::initWithHeader:items: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID _TtC6Sentry14SentryEnvelope::initWithHeader_items_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  FUN_100bdb954(0);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  FUN_100ba7a24(param_3,param_4);
  return param_3;
}



/* Address: 0x100ba7ae0 | _TtC6Sentry14SentryEnvelope::header */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry14SentryEnvelope::header(ID param_1,SEL param_2)

{
  FUN_100ba7b00();
  return param_1;
}



/* Address: 0x100ba7b00 | FUN_100ba7b00 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_100ba7b00(void)

{
  long unaff_x20;
  
  return *(undefined8 *)(unaff_x20 + _TtC6Sentry14SentryEnvelope::header);
}



/* Address: 0x100ba7b10 | _TtC6Sentry14SentryEnvelope::items */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry14SentryEnvelope::items(ID param_1,SEL param_2)

{
  NSArray *pNVar1;
  
  FUN_100ba7b58();
  FUN_100bdb954(0);
  pNVar1 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_1);
  return (ID)pNVar1;
}



/* Address: 0x100ba7b58 | FUN_100ba7b58 */

void FUN_100ba7b58(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + _TtC6Sentry14SentryEnvelope::items));
  return;
}



/* Address: 0x100ba7b68 | FUN_100ba7b68 */

void FUN_100ba7b68(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("Sentry.SentryEnvelope",0x15,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100ba7b94);
  (*pcVar1)();
}



/* Address: 0x100ba7b94 | _TtC6Sentry14SentryEnvelope::init */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry14SentryEnvelope::init(ID param_1,SEL param_2)

{
  ID IVar1;
  
  FUN_100ba7b68();
  IVar1 = *(ID *)(param_1 + items);
  _swift_bridgeObjectRelease();
  return IVar1;
}



/* Address: 0x100ba7ba0 | _TtC6Sentry14SentryEnvelope::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry14SentryEnvelope::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + items));
  return;
}



/* Address: 0x100ba7bd8 | FUN_100ba7bd8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100ba7bd8(void)

{
  return ZEXT816(0x100fa2200);
}



/* Address: 0x100ba7bf8 | FUN_100ba7bf8 */

void FUN_100ba7bf8(undefined8 param_1,undefined8 param_2)

{
  _swift_lookUpClassMethod(param_1,param_2,&TargetClassDescriptor_100ccebe4);
  return;
}



/* Address: 0x100ba7c04 | FUN_100ba7c04 */

void FUN_100ba7c04(void)

{
  _objc_allocWithZone();
  return;
}



/* Address: 0x100ba7c14 | FUN_100ba7c14 */

void FUN_100ba7c14(void)

{
  return;
}



/* Address: 0x100ba7c24 | FUN_100ba7c24 */

void FUN_100ba7c24(void)

{
  FUN_100bbfd8c();
  return;
}



/* Address: 0x100ba7c38 | FUN_100ba7c38 */

void FUN_100ba7c38(void)

{
  FUN_100bc0560(0);
  return;
}



/* Address: 0x100ba7c4c | FUN_100ba7c4c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100ba7c4c(void)

{
  return;
}



/* Address: 0x100ba7c58 | FUN_100ba7c58 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100ba7c58(void)

{
  return 0;
}



/* Address: 0x100ba7c64 | FUN_100ba7c64 */

void FUN_100ba7c64(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_100ba7ce4(param_1);
  return;
}



/* Address: 0x100ba7c94 | _TtC6Sentry16SentryInAppLogic::inAppIncludes */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry16SentryInAppLogic::inAppIncludes(ID param_1,SEL param_2)

{
  NSArray *pNVar1;
  
  FUN_100ba7cd4();
  pNVar1 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_1);
  return (ID)pNVar1;
}



/* Address: 0x100ba7cd4 | FUN_100ba7cd4 */

void FUN_100ba7cd4(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRetain
            (*(undefined8 *)(unaff_x20 + _TtC6Sentry16SentryInAppLogic::inAppIncludes));
  return;
}



/* Address: 0x100ba7ce4 | FUN_100ba7ce4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100ba7ce4(long param_1)

{
  ulong uVar1;
  long unaff_x20;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  String SVar5;
  
  _swift_getObjectType();
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    FUN_100b678c0();
    puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    FUN_100071750(0,lVar3,0);
    puVar4 = (undefined8 *)(param_1 + 0x28);
    do {
      SVar5.bridgeObject = (void *)*puVar4;
      SVar5.str = (char *)puVar4[-1];
      SVar5 = Swift::String::lowercased(SVar5);
      uVar1 = *(ulong *)(puVar2 + 0x10);
      if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar1) {
        FUN_100071750(1 < *(ulong *)(puVar2 + 0x18),uVar1 + 1,1);
      }
      *(ulong *)(puVar2 + 0x10) = uVar1 + 1;
      *(String *)(puVar2 + uVar1 * 0x10 + 0x20) = SVar5;
      puVar4 = puVar4 + 2;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    FUN_100b678c0();
  }
  *(undefined **)(unaff_x20 + _TtC6Sentry16SentryInAppLogic::inAppIncludes) = puVar2;
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff88,"init");
  return;
}



/* Address: 0x100ba7e14 | _TtC6Sentry16SentryInAppLogic::initWithInAppIncludes: */

/* Function Stack Size: 0x18 bytes */

ID _TtC6Sentry16SentryInAppLogic::initWithInAppIncludes_(ID param_1,SEL param_2,ID param_3)

{
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  FUN_100ba7ce4();
  return param_3;
}



/* Address: 0x100ba7e44 | FUN_100ba7e44 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100ba7e44(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  NSString *self;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  long unaff_x20;
  ulong uVar6;
  long lVar7;
  String SVar8;
  
  if (param_2 != 0) {
    self = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _objc_msgSend((ID)self,"lastPathComponent");
    SVar8 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    SVar8 = Swift::String::lowercased(SVar8);
    FUN_100ba827c(SVar8.str,SVar8.bridgeObject);
    lVar5 = *(long *)(unaff_x20 + _TtC6Sentry16SentryInAppLogic::inAppIncludes);
    lVar7 = *(long *)(lVar5 + 0x10);
    if (lVar7 != 0) {
      uVar6 = *(ulong *)(lVar5 + 0x20);
      uVar1 = *(undefined8 *)(lVar5 + 0x28);
      _swift_bridgeObjectRetain(lVar5);
      _swift_bridgeObjectRetain(uVar1);
      FUN_100ba8270(uVar6,uVar1);
      _swift_bridgeObjectRelease(uVar1);
      if ((uVar6 & 1) == 0) {
        uVar6 = 0;
        puVar4 = (undefined8 *)(lVar5 + 0x38);
        do {
          if (lVar7 - 1U == uVar6) {
            FUN_100b678c0();
            goto LAB_100ba7f6c;
          }
          uVar6 = uVar6 + 1;
          if (*(ulong *)(lVar5 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100ba7f90);
            (*pcVar2)();
          }
          uVar3 = puVar4[-1];
          uVar1 = *puVar4;
          _swift_bridgeObjectRetain(uVar1);
          FUN_100ba8270(uVar3,uVar1);
          _swift_bridgeObjectRelease(uVar1);
          puVar4 = puVar4 + 2;
        } while ((uVar3 & 1) == 0);
      }
      FUN_100b678c0();
      _swift_bridgeObjectRelease(lVar5);
      return 1;
    }
LAB_100ba7f6c:
    _swift_bridgeObjectRelease();
  }
  return 0;
}



/* Address: 0x100ba7f90 | _TtC6Sentry16SentryInAppLogic::isInApp: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

bool _TtC6Sentry16SentryInAppLogic::isInApp_(ID param_1,SEL param_2,ID param_3)

{
  char *pcVar1;
  String SVar2;
  
  if (param_3 == 0) {
    SVar2 = (String)ZEXT816(0);
  }
  else {
    SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  pcVar1 = SVar2.str;
  FUN_100ba7e44(pcVar1,SVar2.bridgeObject);
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  return (uint)pcVar1 & 1;
}



/* Address: 0x100ba8004 | FUN_100ba8004 */

uint FUN_100ba8004(Encoding param_1)

{
  Encoding EVar1;
  uint uVar2;
  
  EVar1 = Encoding::_typeMetadataAccessor();
  EVar1.unknown =
       &stack0xffffffffffffffd0 +
       -(*(long *)(*(long *)(EVar1.unknown + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_getObjCClassFromMetadata();
  _class_getImageName();
  if (param_1.unknown == (undefined *)0x0) {
    uVar2 = 0;
  }
  else {
    Encoding::_get_utf8(param_1);
    (extension_Foundation)::Swift::String::_init((UnsafePointer<__int8>)param_1.unknown,EVar1);
    uVar2 = (uint)param_1.unknown;
    FUN_100ba7e44();
    _swift_bridgeObjectRelease(EVar1.unknown);
  }
  return uVar2 & 1;
}



/* Address: 0x100ba8098 | _TtC6Sentry16SentryInAppLogic::isClassInApp: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

bool _TtC6Sentry16SentryInAppLogic::isClassInApp_(ID param_1,SEL param_2,CLASS param_3)

{
  uint uVar1;
  
  uVar1 = (uint)param_3;
  _swift_getObjCClassMetadata();
  FUN_100ba8004();
  return uVar1 & 1;
}



/* Address: 0x100ba80e8 | FUN_100ba80e8 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

uint FUN_100ba80e8(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  NSString *self;
  char *pcVar1;
  String SVar2;
  
  self = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _objc_msgSend((ID)self,"lastPathComponent");
  SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  SVar2 = Swift::String::lowercased(SVar2);
  FUN_100ba827c(SVar2.str,SVar2.bridgeObject);
  SVar2.bridgeObject = param_4;
  SVar2.str = param_3;
  SVar2 = Swift::String::lowercased(SVar2);
  pcVar1 = SVar2.str;
  FUN_100ba8270(pcVar1);
  FUN_100b678c0();
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  return (uint)pcVar1 & 1;
}



/* Address: 0x100ba8190 | _TtC6Sentry16SentryInAppLogic::isImageNameInApp:inAppInclude: */

/* Function Stack Size: 0x20 bytes */

bool _TtC6Sentry16SentryInAppLogic::isImageNameInApp_inAppInclude_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  char *pcVar1;
  String SVar2;
  String SVar3;
  
  SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pcVar1 = SVar2.str;
  SVar3 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  FUN_100ba80e8(pcVar1,SVar2.bridgeObject,SVar3.str,SVar3.bridgeObject);
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  _swift_bridgeObjectRelease(SVar3.bridgeObject);
  return (uint)pcVar1 & 1;
}



/* Address: 0x100ba81fc | FUN_100ba81fc */

void FUN_100ba81fc(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("Sentry.SentryInAppLogic",0x17,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100ba8228);
  (*pcVar1)();
}



/* Address: 0x100ba8228 | _TtC6Sentry16SentryInAppLogic::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry16SentryInAppLogic::init(ID param_1,SEL param_2)

{
  ID IVar1;
  
  FUN_100ba81fc();
  IVar1 = *(ID *)(param_1 + inAppIncludes);
  _swift_bridgeObjectRelease();
  return IVar1;
}



/* Address: 0x100ba8234 | _TtC6Sentry16SentryInAppLogic::.cxx_destruct */

/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry16SentryInAppLogic::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + inAppIncludes));
  return;
}



/* Address: 0x100ba8244 | FUN_100ba8244 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100ba8244(void)

{
  return ZEXT816(0x100fa22c8);
}



/* Address: 0x100ba8264 | FUN_100ba8264 */

void FUN_100ba8264(undefined8 param_1,undefined8 param_2)

{
  _swift_lookUpClassMethod(param_1,param_2,&TargetClassDescriptor_100ccec20);
  return;
}



/* Address: 0x100ba8270 | FUN_100ba8270 */

void FUN_100ba8270(char *param_1,void *param_2)

{
  char *unaff_x21;
  void *unaff_x22;
  String SVar1;
  String SVar2;
  
  SVar1.bridgeObject = param_2;
  SVar1.str = param_1;
  SVar2.bridgeObject = unaff_x22;
  SVar2.str = unaff_x21;
  Swift::String::hasPrefix(SVar1,SVar2);
  return;
}



/* Address: 0x100ba827c | FUN_100ba827c */

void FUN_100ba827c(void)

{
  _swift_bridgeObjectRelease();
  return;
}



/* Address: 0x100ba828c | thunk_FUN_100be778c */

void thunk_FUN_100be778c(undefined8 param_1,ulong param_2)

{
  Foundation::JSONDecoder::DateDecodingStrategy::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x000100be77f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_100be77f8 + (ulong)(byte)(&DAT_100c9f480)[param_2 >> 0x3e] * 4))();
  return;
}



/* Address: 0x100ba8290 | _TtC6Sentry25SentryExperimentalOptions::enableUnhandledCPPExceptionsV2 */

/* Function Stack Size: 0x10 bytes */

bool _TtC6Sentry25SentryExperimentalOptions::enableUnhandledCPPExceptionsV2(ID param_1,SEL param_2)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  FUN_100ba82b4();
  return uVar1 & 1;
}



/* Address: 0x100ba82b4 | FUN_100ba82b4 */

void FUN_100ba82b4(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = _TtC6Sentry25SentryExperimentalOptions::enableUnhandledCPPExceptionsV2;
  FUN_100b78c58();
  FUN_100b6f9fc(*(undefined1 *)(unaff_x20 + lVar1));
  return;
}



/* Address: 0x100ba82dc | _TtC6Sentry25SentryExperimentalOptions::setEnableUnhandledCPPExceptionsV2: */

/* Function Stack Size: 0x14 bytes */

void _TtC6Sentry25SentryExperimentalOptions::setEnableUnhandledCPPExceptionsV2_
               (ID param_1,SEL param_2,bool param_3)

{
  FUN_100ba8300(param_3);
  return;
}



/* Address: 0x100ba8300 | FUN_100ba8300 */

void FUN_100ba8300(undefined1 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = _TtC6Sentry25SentryExperimentalOptions::enableUnhandledCPPExceptionsV2;
  FUN_100b78c6c();
  *(undefined1 *)(unaff_x20 + lVar1) = param_1;
  FUN_100b78c90();
  return;
}



/* Address: 0x100ba8330 | FUN_100ba8330 */

void FUN_100ba8330(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = _TtC6Sentry25SentryExperimentalOptions::enableUnhandledCPPExceptionsV2;
  FUN_100b78c80(param_1,param_1);
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100ba8360 | _TtC6Sentry25SentryExperimentalOptions::enableWatchdogTerminationsV2 */

/* Function Stack Size: 0x10 bytes */

bool _TtC6Sentry25SentryExperimentalOptions::enableWatchdogTerminationsV2(ID param_1,SEL param_2)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  FUN_100ba8384();
  return uVar1 & 1;
}



/* Address: 0x100ba8384 | FUN_100ba8384 */

void FUN_100ba8384(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = _TtC6Sentry25SentryExperimentalOptions::enableWatchdogTerminationsV2;
  FUN_100b78c58();
  FUN_100b6f9fc(*(undefined1 *)(unaff_x20 + lVar1));
  return;
}



/* Address: 0x100ba83ac | _TtC6Sentry25SentryExperimentalOptions::setEnableWatchdogTerminationsV2: */

/* Function Stack Size: 0x14 bytes */

void _TtC6Sentry25SentryExperimentalOptions::setEnableWatchdogTerminationsV2_
               (ID param_1,SEL param_2,bool param_3)

{
  FUN_100ba83d0(param_3);
  return;
}



/* Address: 0x100ba83d0 | FUN_100ba83d0 */

void FUN_100ba83d0(undefined1 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = _TtC6Sentry25SentryExperimentalOptions::enableWatchdogTerminationsV2;
  FUN_100b78c6c();
  *(undefined1 *)(unaff_x20 + lVar1) = param_1;
  FUN_100b78c90();
  return;
}



/* Address: 0x100ba8400 | FUN_100ba8400 */

void FUN_100ba8400(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = _TtC6Sentry25SentryExperimentalOptions::enableWatchdogTerminationsV2;
  FUN_100b78c80(param_1,param_1);
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100ba8430 | _TtC6Sentry25SentryExperimentalOptions::enableStandaloneAppStartTracing */

/* Function Stack Size: 0x10 bytes */

bool _TtC6Sentry25SentryExperimentalOptions::enableStandaloneAppStartTracing(ID param_1,SEL param_2)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  FUN_100ba8454();
  return uVar1 & 1;
}



/* Address: 0x100ba8454 | FUN_100ba8454 */

void FUN_100ba8454(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = _TtC6Sentry25SentryExperimentalOptions::enableStandaloneAppStartTracing;
  FUN_100b78c58();
  FUN_100b6f9fc(*(undefined1 *)(unaff_x20 + lVar1));
  return;
}



/* Address: 0x100ba847c | _TtC6Sentry25SentryExperimentalOptions::setEnableStandaloneAppStartTracing: */

/* Function Stack Size: 0x14 bytes */

void _TtC6Sentry25SentryExperimentalOptions::setEnableStandaloneAppStartTracing_
               (ID param_1,SEL param_2,bool param_3)

{
  FUN_100ba84a0(param_3);
  return;
}



/* Address: 0x100ba84a0 | FUN_100ba84a0 */

void FUN_100ba84a0(undefined1 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = _TtC6Sentry25SentryExperimentalOptions::enableStandaloneAppStartTracing;
  FUN_100b78c6c();
  *(undefined1 *)(unaff_x20 + lVar1) = param_1;
  FUN_100b78c90();
  return;
}



/* Address: 0x100ba84d0 | FUN_100ba84d0 */

void FUN_100ba84d0(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = _TtC6Sentry25SentryExperimentalOptions::enableStandaloneAppStartTracing;
  FUN_100b78c80(param_1,param_1);
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100ba8500 | FUN_100ba8500 */

void FUN_100ba8500(void)

{
  long unaff_x20;
  
  _swift_getObjectType();
  *(undefined1 *)
   (unaff_x20 + _TtC6Sentry25SentryExperimentalOptions::enableUnhandledCPPExceptionsV2) = 0;
  *(undefined1 *)(unaff_x20 + _TtC6Sentry25SentryExperimentalOptions::enableWatchdogTerminationsV2)
       = 0;
  *(undefined1 *)
   (unaff_x20 + _TtC6Sentry25SentryExperimentalOptions::enableStandaloneAppStartTracing) = 0;
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"init");
  return;
}



/* Address: 0x100ba8558 | _TtC6Sentry25SentryExperimentalOptions::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry25SentryExperimentalOptions::init(ID param_1,SEL param_2)

{
  FUN_100ba8500();
  return param_1;
}



/* Address: 0x100ba8578 | FUN_100ba8578 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100ba8578(void)

{
  return ZEXT816(0x100fa2388);
}



/* Address: 0x100ba8598 | FUN_100ba8598 */

undefined * FUN_100ba8598(code *param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  long unaff_x21;
  long lVar6;
  undefined8 *puVar7;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar6 = *(long *)(param_3 + 0x10);
  if (lVar6 != 0) {
    FUN_100b696f8(0,lVar6,0);
    puVar7 = (undefined8 *)(param_3 + 0x28);
    do {
      local_80 = puVar7[-1];
      uVar2 = *puVar7;
      uStack_78 = uVar2;
      _swift_bridgeObjectRetain(uVar2);
      (*param_1)(&local_70,&local_80);
      if (unaff_x21 != 0) {
        _swift_release(puVar3);
        _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100ba86b8);
        (*pcVar5)();
      }
      _swift_bridgeObjectRelease(uVar2);
      uVar4 = uStack_68;
      uVar2 = local_70;
      uVar1 = *(ulong *)(puVar3 + 0x10);
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar1) {
        FUN_100b696f8(1 < *(ulong *)(puVar3 + 0x18),uVar1 + 1,1);
      }
      *(ulong *)(puVar3 + 0x10) = uVar1 + 1;
      *(undefined8 *)(puVar3 + uVar1 * 0x10 + 0x20) = uVar2;
      *(undefined8 *)(puVar3 + uVar1 * 0x10 + 0x28) = uVar4;
      puVar7 = puVar7 + 2;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return puVar3;
}


