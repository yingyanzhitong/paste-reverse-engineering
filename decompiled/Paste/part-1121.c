/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100bb49c4 | SentryDependencies::.cxx_destruct */

/* Function Stack Size: 0x10 bytes */

void SentryDependencies::_cxx_destruct(ID param_1,SEL param_2)

{
  return;
}



/* Address: 0x100bb49c8 | FUN_100bb49c8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100bb49c8(void)

{
  return ZEXT816(0x100fa2d00);
}



/* Address: 0x100bb49e8 | FUN_100bb49e8 */

void FUN_100bb49e8(void)

{
  return;
}



/* Address: 0x100bb49fc | FUN_100bb49fc */

void FUN_100bb49fc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_getObjectType();
  *(undefined8 *)(unaff_x20 + _TtC6Sentry22SentryANRStoppedResult::minDuration) = param_1;
  *(undefined8 *)(unaff_x20 + _TtC6Sentry22SentryANRStoppedResult::maxDuration) = param_2;
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffd0,"init");
  return;
}



/* Address: 0x100bb4a58 | FUN_100bb4a58 */

void FUN_100bb4a58(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("Sentry.SentryANRStoppedResult",0x1d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100bb4a84);
  (*pcVar1)();
}



/* Address: 0x100bb4a84 | _TtC6Sentry22SentryANRStoppedResult::init */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry22SentryANRStoppedResult::init(ID param_1,SEL param_2)

{
  FUN_100bb4a58();
  return 0x100fa2db0;
}



/* Address: 0x100bb4a90 | FUN_100bb4a90 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100bb4a90(void)

{
  return ZEXT816(0x100fa2db0);
}



/* Address: 0x100bb4ab0 | FUN_100bb4ab0 */

void FUN_100bb4ab0(undefined8 param_1,undefined8 param_2)

{
  _swift_lookUpClassMethod(param_1,param_2,&TargetClassDescriptor_100ccf234);
  return;
}



/* Address: 0x100bb4abc | thunk_FUN_100bb51d4 */

void thunk_FUN_100bb51d4(void)

{
  FUN_100bb51d4();
  return;
}



/* Address: 0x100bb4ac0 | FUN_100bb4ac0 */

undefined * FUN_100bb4ac0(void)

{
  undefined *puVar1;
  long unaff_x20;
  
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (*(undefined **)(unaff_x20 + _TtC6Sentry14SentryFeedback::attachments) != (undefined *)0x0) {
    puVar1 = *(undefined **)(unaff_x20 + _TtC6Sentry14SentryFeedback::attachments);
  }
  _swift_bridgeObjectRetain();
  return puVar1;
}



/* Address: 0x100bb4afc | FUN_100bb4afc */

undefined1  [16] FUN_100bb4afc(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  if (param_1 == 0) {
    uVar2 = 0x746567646977;
  }
  else {
    if (param_1 != 1) {
      FUN_100bb5928(&DAT_100f3a598,param_2,param_3,PTR___type_metadata_for_Swift_Int_100eac6f8);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100bb4b54);
      (*pcVar1)();
    }
    uVar2 = 0x6d6f74737563;
  }
  auVar3._8_8_ = &DAT_e600000000000000;
  auVar3._0_8_ = uVar2;
  return auVar3;
}



/* Address: 0x100bb4b54 | _TtC6Sentry14SentryFeedback::name */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry14SentryFeedback::name(ID param_1,SEL param_2)

{
  FUN_100bb4bac(param_1,param_2,FUN_100bb4b60);
  return param_1;
}



/* Address: 0x100bb4b60 | FUN_100bb4b60 */

void FUN_100bb4b60(void)

{
  FUN_100b707f4(_TtC6Sentry14SentryFeedback::name);
  FUN_100b56e88();
  return;
}



/* Address: 0x100bb4b88 | _TtC6Sentry14SentryFeedback::setName: */

/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry14SentryFeedback::setName_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100b98804();
  return;
}



/* Address: 0x100bb4b94 | FUN_100bb4b94 */

void FUN_100bb4b94(void)

{
  FUN_100bb58f0(_TtC6Sentry14SentryFeedback::name);
  return;
}



/* Address: 0x100bb4ba0 | _TtC6Sentry14SentryFeedback::email */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry14SentryFeedback::email(ID param_1,SEL param_2)

{
  FUN_100bb4bac(param_1,param_2,FUN_100bb4bec);
  return param_1;
}



/* Address: 0x100bb4bac | FUN_100bb4bac */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

NSString * FUN_100bb4bac(undefined8 param_1,long param_2,code *param_3)

{
  NSString *pNVar1;
  
  (*param_3)();
  if (param_2 == 0) {
    pNVar1 = (NSString *)0x0;
  }
  else {
    pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    FUN_100b6f838();
  }
  return pNVar1;
}



/* Address: 0x100bb4bec | FUN_100bb4bec */

void FUN_100bb4bec(void)

{
  FUN_100b707f4(_TtC6Sentry14SentryFeedback::email);
  FUN_100b56e88();
  return;
}



/* Address: 0x100bb4c14 | _TtC6Sentry14SentryFeedback::setEmail: */

/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry14SentryFeedback::setEmail_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100b98804();
  return;
}



/* Address: 0x100bb4c20 | FUN_100bb4c20 */

void FUN_100bb4c20(void)

{
  FUN_100bb58f0(_TtC6Sentry14SentryFeedback::email);
  return;
}



/* Address: 0x100bb4c2c | _TtC6Sentry14SentryFeedback::message */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry14SentryFeedback::message(ID param_1,SEL param_2)

{
  NSString *pNVar1;
  
  FUN_100bb4c64();
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_2);
  return (ID)pNVar1;
}



/* Address: 0x100bb4c64 | FUN_100bb4c64 */

void FUN_100bb4c64(void)

{
  FUN_100b707f4(_TtC6Sentry14SentryFeedback::message);
  FUN_100b56e88();
  return;
}



/* Address: 0x100bb4c8c | _TtC6Sentry14SentryFeedback::setMessage: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry14SentryFeedback::setMessage_(ID param_1,SEL param_2,ID param_3)

{
  String SVar1;
  
  SVar1 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  FUN_100bb4ce0(SVar1.str,SVar1.bridgeObject);
  return;
}



/* Address: 0x100bb4ce0 | FUN_100bb4ce0 */

void FUN_100bb4ce0(void)

{
  FUN_100bb58f0(_TtC6Sentry14SentryFeedback::message);
  return;
}



/* Address: 0x100bb4cec | _TtC6Sentry14SentryFeedback::source */

/* Function Stack Size: 0x10 bytes */

long_long _TtC6Sentry14SentryFeedback::source(ID param_1,SEL param_2)

{
  FUN_100bb4d0c();
  return param_1;
}



/* Address: 0x100bb4d0c | FUN_100bb4d0c */

undefined8 FUN_100bb4d0c(void)

{
  long unaff_x20;
  
  return *(undefined8 *)(unaff_x20 + _TtC6Sentry14SentryFeedback::source);
}



/* Address: 0x100bb4d1c | _TtC6Sentry14SentryFeedback::setSource: */

/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry14SentryFeedback::setSource_(ID param_1,SEL param_2,long_long param_3)

{
  FUN_100bb4d40(param_3);
  return;
}



/* Address: 0x100bb4d40 | FUN_100bb4d40 */

void FUN_100bb4d40(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _TtC6Sentry14SentryFeedback::source) = param_1;
  return;
}



/* Address: 0x100bb4d50 | _TtC6Sentry14SentryFeedback::eventId */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry14SentryFeedback::eventId(ID param_1,SEL param_2)

{
  FUN_100bb4d70();
  return param_1;
}



/* Address: 0x100bb4d70 | FUN_100bb4d70 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_100bb4d70(void)

{
  long unaff_x20;
  
  return *(undefined8 *)(unaff_x20 + _TtC6Sentry14SentryFeedback::eventId);
}



/* Address: 0x100bb4d80 | _TtC6Sentry14SentryFeedback::associatedEventId */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry14SentryFeedback::associatedEventId(ID param_1,SEL param_2)

{
  FUN_100bb4da0();
  return param_1;
}



/* Address: 0x100bb4da0 | FUN_100bb4da0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_100bb4da0(void)

{
  long unaff_x20;
  
  return *(undefined8 *)(unaff_x20 + _TtC6Sentry14SentryFeedback::associatedEventId);
}



/* Address: 0x100bb4dd0 | _TtC6Sentry14SentryFeedback::setAssociatedEventId: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry14SentryFeedback::setAssociatedEventId_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100bb4e10(param_3);
  return;
}



/* Address: 0x100bb4e10 | FUN_100bb4e10 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100bb4e10(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _TtC6Sentry14SentryFeedback::associatedEventId) = param_1;
  return 0;
}



/* Address: 0x100bb4e28 | FUN_100bb4e28 */

void FUN_100bb4e28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  _objc_allocWithZone();
  FUN_100bb4ec0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  return;
}



/* Address: 0x100bb4ec0 | FUN_100bb4ec0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100bb4ec0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  class_t *self;
  ID IVar5;
  undefined8 uVar6;
  long unaff_x20;
  
  _swift_getObjectType();
  puVar1 = (undefined8 *)(unaff_x20 + _TtC6Sentry14SentryFeedback::name);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar2 = (undefined8 *)(unaff_x20 + _TtC6Sentry14SentryFeedback::email);
  *puVar2 = 0;
  puVar2[1] = 0;
  lVar3 = _TtC6Sentry14SentryFeedback::attachments;
  *(undefined8 *)(unaff_x20 + _TtC6Sentry14SentryFeedback::attachments) = 0;
  lVar4 = _TtC6Sentry14SentryFeedback::associatedEventId;
  *(undefined8 *)(unaff_x20 + _TtC6Sentry14SentryFeedback::associatedEventId) = 0;
  self = &objc::class_t::SentryId;
  _objc_allocWithZone();
  IVar5 = _objc_msgSend((ID)self,"init");
  *(ID *)(unaff_x20 + _TtC6Sentry14SentryFeedback::eventId) = IVar5;
  uVar6 = puVar1[1];
  *puVar1 = param_3;
  puVar1[1] = param_4;
  _swift_bridgeObjectRelease(uVar6);
  uVar6 = puVar2[1];
  *puVar2 = param_5;
  puVar2[1] = param_6;
  _swift_bridgeObjectRelease(uVar6);
  puVar1 = (undefined8 *)(unaff_x20 + _TtC6Sentry14SentryFeedback::message);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _TtC6Sentry14SentryFeedback::source) = param_7;
  *(undefined8 *)(unaff_x20 + lVar4) = param_8;
  *(undefined8 *)(unaff_x20 + lVar3) = param_9;
  FUN_100b6f838(0);
  IVar5 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff90,"init");
  return IVar5;
}



/* Address: 0x100bb5038 | _TtC6Sentry14SentryFeedback::initWithMessage:name:email:source:associatedEventId:attachments: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x40 bytes */

ID _TtC6Sentry14SentryFeedback::initWithMessage_name_email_source_associatedEventId_attachments_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,long_long param_6,ID param_7,
             ID param_8)

{
  char *pcVar1;
  void *pvVar2;
  String SVar3;
  String SVar4;
  String SVar5;
  
  SVar3 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  SVar5.bridgeObject = SVar3.bridgeObject;
  SVar5.str = (char *)param_4;
  pcVar1 = SVar3.str;
  if (param_4 == 0) {
    pvVar2 = (void *)0x0;
    SVar4 = (String)ZEXT816(0);
  }
  else {
    SVar4 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    pvVar2 = SVar4.bridgeObject;
    SVar5 = SVar4;
  }
  if (param_5 == 0) {
    SVar4.bridgeObject = pvVar2;
    SVar4.str = SVar5.str;
    SVar5 = (String)ZEXT816(0);
  }
  else {
    SVar5 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  if (param_8 != 0) {
    FUN_100bad6e8(0);
    (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  }
  FUN_100bb4ec0(pcVar1,SVar3.bridgeObject,SVar4.str,SVar4.bridgeObject,SVar5.str,SVar5.bridgeObject,
                param_6,param_7,param_8);
  return (ID)pcVar1;
}



/* Address: 0x100bb5128 | FUN_100bb5128 */

void FUN_100bb5128(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("Sentry.SentryFeedback",0x15,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100bb5154);
  (*pcVar1)();
}



/* Address: 0x100bb5154 | _TtC6Sentry14SentryFeedback::init */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry14SentryFeedback::init(ID param_1,SEL param_2)

{
  FUN_100bb5128();
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + name + 8));
  FUN_100b9403c(email);
  FUN_100b9403c(message);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + attachments));
  return 0;
}



/* Address: 0x100bb5160 | _TtC6Sentry14SentryFeedback::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry14SentryFeedback::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + name + 8));
  FUN_100b9403c(email);
  FUN_100b9403c(message);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + attachments));
  return;
}



/* Address: 0x100bb51d4 | FUN_100bb51d4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_100bb51d4(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  __int64 minimumCapacity;
  undefined *puVar3;
  long lVar4;
  code *pcVar5;
  char *pcVar6;
  long unaff_x20;
  String SVar7;
  String local_78;
  undefined *local_60;
  undefined *local_58;
  
  lVar4 = _TtC6Sentry14SentryFeedback::associatedEventId;
  puVar3 = PTR___type_metadata_for_Swift_String_100eac208;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC6Sentry14SentryFeedback::name);
  puVar2 = (undefined8 *)(unaff_x20 + _TtC6Sentry14SentryFeedback::email);
  minimumCapacity = 2;
  if (puVar1[1] != 0) {
    minimumCapacity = 3;
  }
  if (puVar2[1] != 0) {
    minimumCapacity = minimumCapacity + 1;
  }
  if (*(long *)(unaff_x20 + _TtC6Sentry14SentryFeedback::associatedEventId) != 0) {
    minimumCapacity = minimumCapacity + 1;
  }
  local_58 = (undefined *)Swift::Dictionary::init(minimumCapacity);
  local_60 = puVar3;
  local_78 = *(String *)(unaff_x20 + _TtC6Sentry14SentryFeedback::message);
  _swift_bridgeObjectRetain();
  FUN_100bb5934();
  FUN_100b78fe8();
  if (puVar1[1] != 0) {
    FUN_100bb5904(*puVar1);
    FUN_100bb5934();
    FUN_100bb5920();
  }
  if (puVar2[1] != 0) {
    FUN_100bb5904(*puVar2);
    FUN_100bb5934();
    FUN_100b78fe8();
  }
  if (*(ID *)(unaff_x20 + lVar4) != 0) {
    _objc_msgSend(*(ID *)(unaff_x20 + lVar4),"sentryIdString");
    SVar7 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    FUN_100b6f868();
    local_60 = puVar3;
    local_78 = SVar7;
    FUN_100b78fe8(&local_78,0xd000000000000013,0x8000000100dcee00);
  }
  pcVar6 = *(char **)(unaff_x20 + _TtC6Sentry14SentryFeedback::source);
  if (pcVar6 == (char *)0x0) {
    local_78.str = (char *)0x746567646977;
  }
  else {
    if (pcVar6 != (char *)0x1) {
      local_78.str = pcVar6;
      FUN_100bb5928(&DAT_100f3a598);
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100bb53f0);
      (*pcVar5)();
    }
    local_78.str = (char *)0x6d6f74737563;
  }
  local_60 = puVar3;
  local_78.bridgeObject = &DAT_e600000000000000;
  FUN_100bb5934(0,0x656372756f73);
  FUN_100b78fe8();
  return local_58;
}



/* Address: 0x100bb53f0 | thunk_FUN_100bb53f4 */

void thunk_FUN_100bb53f4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101046e18 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9c610;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9c610,&DAT_100f3a598);
  DAT_101046e18 = pTVar1;
  return;
}



/* Address: 0x100bb53f4 | FUN_100bb53f4 */

void FUN_100bb53f4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101046e18 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9c610;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9c610,&DAT_100f3a598);
  DAT_101046e18 = pTVar1;
  return;
}



/* Address: 0x100bb5434 | FUN_100bb5434 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100bb5434(void)

{
  return ZEXT816(0x100fa2e78);
}



/* Address: 0x100bb5454 | FUN_100bb5454 */

void FUN_100bb5454(undefined8 param_1,undefined8 param_2)

{
  _swift_lookUpClassMethod(param_1,param_2,&TargetClassDescriptor_100ccf270);
  return;
}



/* Address: 0x100bb5460 | FUN_100bb5460 */

void FUN_100bb5460(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100bb546c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x20 + 0x88))();
  return;
}



/* Address: 0x100bb5470 | FUN_100bb5470 */

undefined1  [16] FUN_100bb5470(void)

{
  return ZEXT816(0x100f3a598);
}



/* Address: 0x100bb5480 | _TtC6Sentry14SentryFeedback::serialize */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry14SentryFeedback::serialize(ID param_1,SEL param_2)

{
  FUN_100bb5848(param_1,param_2,thunk_FUN_100bb51d4);
  return param_1;
}



/* Address: 0x100bb548c | FUN_100bb548c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_100bb548c(void)

{
  undefined8 uVar1;
  ulong uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  long unaff_x20;
  ulong uVar10;
  undefined *local_d8 [3];
  undefined *local_c0;
  undefined8 local_68;
  
  puVar4 = &DAT_1010448c8;
  FUN_100b6730c();
  _swift_initStackObject();
  *(undefined8 *)(puVar4 + 0x18) = 2;
  *(undefined8 *)(puVar4 + 0x10) = 1;
  *(undefined8 *)(puVar4 + 0x20) = 0x6567617373656d;
  *(undefined1 **)(puVar4 + 0x28) = &DAT_e700000000000000;
  uVar1 = *(undefined8 *)(unaff_x20 + _TtC6Sentry14SentryFeedback::message);
  uVar5 = ((undefined8 *)(unaff_x20 + _TtC6Sentry14SentryFeedback::message))[1];
  *(undefined **)(puVar4 + 0x48) = PTR___type_metadata_for_Swift_String_100eac208;
  *(undefined8 *)(puVar4 + 0x30) = uVar1;
  *(undefined8 *)(puVar4 + 0x38) = uVar5;
  _swift_bridgeObjectRetain();
  FUN_100bb5910(PTR___type_metadata_for_Any_100eae0c0);
  local_68 = uVar5;
  if (((undefined8 *)(unaff_x20 + _TtC6Sentry14SentryFeedback::name))[1] != 0) {
    FUN_100bb5904(*(undefined8 *)(unaff_x20 + _TtC6Sentry14SentryFeedback::name));
    FUN_100bb5920(local_d8,0x656d616e);
  }
  if (((undefined8 *)(unaff_x20 + _TtC6Sentry14SentryFeedback::email))[1] != 0) {
    FUN_100bb5904(*(undefined8 *)(unaff_x20 + _TtC6Sentry14SentryFeedback::email));
    FUN_100b78fe8(local_d8,0x6c69616d65,&DAT_e500000000000000);
  }
  uVar9 = *(ulong *)(unaff_x20 + _TtC6Sentry14SentryFeedback::attachments);
  if (uVar9 != 0) {
    uVar6 = uVar9;
    thunk_FUN_100b6cd50();
    puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
    if (uVar6 != 0) {
      local_d8[0] = PTR___swiftEmptyArrayStorage_100eae0d8;
      _swift_bridgeObjectRetain(uVar9);
      FUN_100b69614(0,uVar6 & ((long)uVar6 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100bb56d4);
        (*pcVar3)();
      }
      uVar10 = 0;
      do {
        puVar4 = local_d8[0];
        if ((uVar9 & 0xc000000000000001) == 0) {
          uVar7 = *(ulong *)(uVar9 + uVar10 * 8 + 0x20);
        }
        else {
          uVar7 = uVar10;
          FUN_100b6da4c(uVar10,uVar9);
        }
        FUN_100bb56d4();
        FUN_100b6f868();
        uVar2 = *(ulong *)(puVar4 + 0x10);
        local_d8[0] = puVar4;
        if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar2) {
          FUN_100b69614(1 < *(ulong *)(puVar4 + 0x18),uVar2 + 1,1);
        }
        puVar4 = local_d8[0];
        uVar10 = uVar10 + 1;
        *(ulong *)(local_d8[0] + 0x10) = uVar2 + 1;
        *(ulong *)(local_d8[0] + uVar2 * 8 + 0x20) = uVar7;
      } while (uVar6 != uVar10);
      FUN_100b6f838();
    }
    puVar8 = &DAT_101045338;
    FUN_100b6730c();
    local_d8[0] = puVar4;
    local_c0 = puVar8;
    FUN_100b78fe8(local_d8,0x656d686361747461,0xeb0000000073746e);
  }
  return local_68;
}



/* Address: 0x100bb56d4 | FUN_100bb56d4 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100bb56d4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  void *pvVar4;
  void *pvVar5;
  long lVar6;
  ID unaff_x20;
  String SVar7;
  undefined1 local_b8 [8];
  void *pvStack_b0;
  undefined *local_a0;
  undefined8 local_48;
  
  puVar2 = &DAT_1010448c8;
  FUN_100b6730c();
  _swift_initStackObject();
  *(undefined8 *)(puVar2 + 0x18) = 2;
  *(undefined8 *)(puVar2 + 0x10) = 1;
  *(undefined8 *)(puVar2 + 0x20) = 0x656d616e656c6966;
  *(undefined1 **)(puVar2 + 0x28) = &DAT_e800000000000000;
  _objc_msgSend(unaff_x20,"filename");
  SVar7 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  puVar1 = PTR___type_metadata_for_Swift_String_100eac208;
  pvVar4 = SVar7.bridgeObject;
  uVar3 = 0;
  *(undefined **)(puVar2 + 0x48) = PTR___type_metadata_for_Swift_String_100eac208;
  *(String *)(puVar2 + 0x30) = SVar7;
  FUN_100bb5910(PTR___type_metadata_for_Any_100eae0c0);
  local_48 = uVar3;
  FUN_100bdb848();
  pvVar5 = pvVar4;
  if ((ulong)pvVar4 >> 0x3c < 0xf) {
    local_a0 = PTR___type_metadata_for_Foundation_Data_100ea7300;
    pvVar5 = (void *)0x61746164;
    pvStack_b0 = pvVar4;
    FUN_100bb5920(local_b8);
  }
  FUN_100bdb89c();
  lVar6 = 0;
  if (pvVar5 != (void *)0x0) {
    local_a0 = puVar1;
    lVar6 = 0x68746170;
    pvStack_b0 = pvVar5;
    FUN_100bb5920(local_b8);
  }
  FUN_100bdb8a8();
  if (lVar6 != 0) {
    local_a0 = puVar1;
    pvStack_b0 = (void *)lVar6;
    FUN_100b78fe8(local_b8,0x54746e65746e6f63,0xeb00000000657079);
  }
  return local_48;
}



/* Address: 0x100bb583c | _TtC6Sentry14SentryFeedback::dataDictionary */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry14SentryFeedback::dataDictionary(ID param_1,SEL param_2)

{
  FUN_100bb5848(param_1,param_2,FUN_100bb548c);
  return param_1;
}



/* Address: 0x100bb5848 | FUN_100bb5848 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

NSDictionary * FUN_100bb5848(undefined8 param_1,undefined8 param_2,code *param_3)

{
  NSDictionary *pNVar1;
  
  (*param_3)(param_1);
  FUN_100b6f868();
  pNVar1 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  FUN_100b6f838();
  return pNVar1;
}



/* Address: 0x100bb58a8 | _TtC6Sentry14SentryFeedback::attachmentsForEnvelope */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry14SentryFeedback::attachmentsForEnvelope(ID param_1,SEL param_2)

{
  NSArray *pNVar1;
  
  FUN_100bb4ac0();
  FUN_100bad6e8(0);
  pNVar1 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_1);
  return (ID)pNVar1;
}



/* Address: 0x100bb58f0 | FUN_100bb58f0 */

void FUN_100bb58f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(unaff_x20 + param_1);
  uVar2 = puVar1[1];
  *puVar1 = param_2;
  puVar1[1] = param_3;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Address: 0x100bb5904 | FUN_100bb5904 */

void FUN_100bb5904(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  
  uStack0000000000000008 = param_1;
  uStack0000000000000010 = param_2;
  _swift_bridgeObjectRetain();
  return;
}



/* Address: 0x100bb5910 | FUN_100bb5910 */

void FUN_100bb5910(void)

{
  Swift::Dictionary::_init();
  return;
}



/* Address: 0x100bb5920 | FUN_100bb5920 */

void FUN_100bb5920(undefined8 param_1,undefined8 param_2)

{
  FUN_100b78fe8(param_1,param_2,&DAT_e400000000000000);
  return;
}



/* Address: 0x100bb5928 | FUN_100bb5928 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100bb5930 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100bb5928(undefined8 param_1)

{
  Swift::__diagnoseUnexpectedEnumCaseValue(param_1,&stack0x00000008,param_1);
  return;
}



/* Address: 0x100bb5934 | FUN_100bb5934 */

undefined1 * FUN_100bb5934(void)

{
  return &stack0x00000008;
}



/* Address: 0x100bb5940 | FUN_100bb5940 */

void FUN_100bb5940(ID param_1)

{
  long unaff_x21;
  undefined1 local_28 [8];
  
  _objc_msgSend(param_1,"lock");
  FUN_100bb5f28(local_28);
  FUN_100bdd7f0();
  FUN_100bb5f1c();
  if (unaff_x21 == 0) {
    FUN_100bb5ea8();
    FUN_100b6f868();
  }
  else {
    FUN_100bb5ea8();
    FUN_100b6f868();
  }
  FUN_100bb5f10();
  return;
}



/* Address: 0x100bb59a0 | FUN_100bb59a0 */

void FUN_100bb59a0(ID param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  _objc_msgSend(param_1,"lock");
  lVar1 = SentryBinaryImageCache::cache;
  _swift_beginAccess(param_2 + SentryBinaryImageCache::cache,auStack_48,1,0);
  if (*(long *)(param_2 + lVar1) == 0) {
    FUN_100b84dac(0);
    FUN_100b84df8(1,0xd000000000000039,0x8000000100dcee20,0xd000000000000063,0x8000000100dce0f0,0x42
                 );
  }
  else {
    FUN_100b54a24(0);
    FUN_100b54aa0(0);
    uVar2 = *(undefined8 *)(param_2 + lVar1);
    *(undefined8 *)(param_2 + lVar1) = 0;
    _swift_bridgeObjectRelease(uVar2);
  }
  FUN_100bb5eb4();
  FUN_100b6fce4();
  return;
}



/* Address: 0x100bb5a88 | FUN_100bb5a88 */

void FUN_100bb5a88(ID param_1)

{
  code *pcVar1;
  char *pcVar2;
  long lVar3;
  code *unaff_x25;
  undefined1 auStack_70 [32];
  
  FUN_100bb5ef4();
  pcVar2 = "lock";
  pcVar1 = (code *)_objc_msgSend(param_1,"lock");
  FUN_10021b704();
  FUN_100bb5ed0();
  lVar3 = *(long *)pcVar2;
  _swift_unknownObjectRetain(lVar3);
  (*pcVar1)(auStack_70,0);
  FUN_100b7ca38();
  if (lVar3 == 0) {
    (*unaff_x25)(auStack_70);
    FUN_100bb5ebc();
    _swift_unknownObjectRetain();
    FUN_100bb5ee4();
    FUN_100b6fbcc();
  }
  FUN_100bb5eb4();
  FUN_100bad87c();
  FUN_100b7ca38();
  FUN_100bb5f28();
  return;
}



/* Address: 0x100bb5b3c | FUN_100bb5b3c */

void FUN_100bb5b3c(void)

{
  FUN_100bb5c3c();
  return;
}



/* Address: 0x100bb5b50 | FUN_100bb5b50 */

void FUN_100bb5b50(void)

{
  FUN_100bb5b64();
  return;
}


