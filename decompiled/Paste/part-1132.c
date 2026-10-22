/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100bc1084 | FUN_100bc1084 */

void FUN_100bc1084(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100bc109c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0x78))();
  return;
}



/* Address: 0x100bc10a0 | FUN_100bc10a0 */

void FUN_100bc10a0(undefined8 param_1,undefined8 param_2)

{
  _objc_allocWithZone();
  FUN_100bc10d8(param_1,param_2);
  FUN_100b56e60();
  return;
}



/* Address: 0x100bc10d8 | FUN_100bc10d8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100bc10d8(long param_1,undefined8 param_2)

{
  ID IVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  _swift_getObjectType();
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _TtC6Sentry12SentryClient::helper);
  }
  FUN_100b673ec(0,&DAT_1010474e8,&PTR_SentryHubInternal_100f8dfc8);
  FUN_100bc11cc(uVar2,param_2);
  *(undefined8 *)(unaff_x20 + _TtC6Sentry9SentryHub::helper) = uVar2;
  FUN_100b6fce4();
  IVar1 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffa0,"init");
  return IVar1;
}



/* Address: 0x100bc11cc | FUN_100bc11cc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100bc11cc(undefined8 param_1,undefined8 param_2)

{
  ID IVar1;
  ID unaff_x20;
  
  _swift_getObjCClassFromMetadata();
  _objc_allocWithZone();
  IVar1 = _objc_msgSend(unaff_x20,"initWithClient:andScope:",param_1,param_2);
  return IVar1;
}



/* Address: 0x100bc122c | _TtC6Sentry9SentryHub::initWithClient:andScope: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID _TtC6Sentry9SentryHub::initWithClient_andScope_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  FUN_100bc10d8(param_3,param_4);
  return param_3;
}



/* Address: 0x100bc1278 | FUN_100bc1278 */

void FUN_100bc1278(void)

{
  long unaff_x20;
  
  _objc_msgSend(*(ID *)(unaff_x20 + _TtC6Sentry9SentryHub::helper),"startSession");
  return;
}



/* Address: 0x100bc1290 | _TtC6Sentry9SentryHub::startSession */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry9SentryHub::startSession(ID param_1,SEL param_2)

{
  FUN_100bc1278(param_1);
  return;
}



/* Address: 0x100bc12b8 | FUN_100bc12b8 */

void FUN_100bc12b8(void)

{
  long unaff_x20;
  
  _objc_msgSend(*(ID *)(unaff_x20 + _TtC6Sentry9SentryHub::helper),"endSession");
  return;
}



/* Address: 0x100bc12d0 | _TtC6Sentry9SentryHub::endSession */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry9SentryHub::endSession(ID param_1,SEL param_2)

{
  FUN_100bc12b8(param_1);
  return;
}



/* Address: 0x100bc12f8 | FUN_100bc12f8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100bc12f8(Date param_1)

{
  NSDate *self;
  char *op;
  
  self = Foundation::Date::_bridgeToObjectiveC(param_1);
  op = "endSessionWithTimestamp:";
  FUN_100bc2874();
  _objc_msgSend((ID)self,op);
  return 0;
}



/* Address: 0x100bc133c | _TtC6Sentry9SentryHub::endSessionWithTimestamp: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry9SentryHub::endSessionWithTimestamp_(ID param_1,SEL param_2,ID param_3)

{
  Date DVar1;
  long lVar2;
  long lVar3;
  
  DVar1 = Foundation::Date::typeMetadataAccessor();
  lVar3 = *(long *)(DVar1.unknown + -8);
  lVar2 = *(long *)(lVar3 + 0x40);
  Foundation::Date::__unconditionallyBridgeFromObjectiveC((Date)param_3);
  FUN_100bc12f8(&stack0xffffffffffffffc0 + -(lVar2 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(lVar3 + 8))
            (&stack0xffffffffffffffc0 + -(lVar2 + 0xfU & 0xfffffffffffffff0),DVar1.unknown);
  return;
}



/* Address: 0x100bc13d0 | FUN_100bc13d0 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

ID FUN_100bc13d0(undefined8 param_1)

{
  ID IVar1;
  long unaff_x20;
  
  IVar1 = _objc_msgSend(*(ID *)(unaff_x20 + _TtC6Sentry9SentryHub::helper),"captureEvent:",param_1);
  return IVar1;
}



/* Address: 0x100bc1400 | _TtC6Sentry9SentryHub::captureEvent: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC6Sentry9SentryHub::captureEvent_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100bc13d0();
  return param_3;
}



/* Address: 0x100bc145c | FUN_100bc145c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

ID FUN_100bc145c(undefined8 param_1,undefined8 param_2)

{
  ID IVar1;
  long unaff_x20;
  
  IVar1 = _objc_msgSend(*(ID *)(unaff_x20 + _TtC6Sentry9SentryHub::helper),"captureEvent:withScope:"
                        ,param_1,param_2);
  return IVar1;
}



/* Address: 0x100bc1490 | _TtC6Sentry9SentryHub::captureEvent:withScope: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID _TtC6Sentry9SentryHub::captureEvent_withScope_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  FUN_100bc145c(param_3,param_4);
  return param_3;
}



/* Address: 0x100bc1508 | FUN_100bc1508 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100bc1508(undefined8 param_1)

{
  NSString *pNVar1;
  ID IVar2;
  ID unaff_x20;
  
  FUN_100bc2880(_TtC6Sentry9SentryHub::helper);
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar2 = _objc_msgSend(unaff_x20,"startTransactionWithName:operation:",param_1,pNVar1);
  FUN_100b6fce4();
  FUN_100b56e60(IVar2);
  return;
}



/* Address: 0x100bc157c | _TtC6Sentry9SentryHub::startTransactionWithName:operation: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID _TtC6Sentry9SentryHub::startTransactionWithName_operation_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  char *pcVar1;
  String SVar2;
  String SVar3;
  
  SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pcVar1 = SVar2.str;
  SVar3 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  FUN_100bc1508(pcVar1,SVar2.bridgeObject,SVar3.str,SVar3.bridgeObject);
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  _swift_bridgeObjectRelease(SVar3.bridgeObject);
  return (ID)pcVar1;
}



/* Address: 0x100bc160c | FUN_100bc160c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100bc160c(undefined8 param_1)

{
  NSString *pNVar1;
  ID IVar2;
  uint in_w4;
  ID unaff_x20;
  
  FUN_100bc2880(_TtC6Sentry9SentryHub::helper);
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar2 = _objc_msgSend(unaff_x20,"startTransactionWithName:operation:bindToScope:",param_1,pNVar1,
                        (ulong)(in_w4 & 1));
  FUN_100b6f934(0);
  return IVar2;
}



/* Address: 0x100bc1698 | _TtC6Sentry9SentryHub::startTransactionWithName:operation:bindToScope: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x24 bytes */

ID _TtC6Sentry9SentryHub::startTransactionWithName_operation_bindToScope_
             (ID param_1,SEL param_2,ID param_3,ID param_4,bool param_5)

{
  char *pcVar1;
  String SVar2;
  String SVar3;
  
  SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pcVar1 = SVar2.str;
  SVar3 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  FUN_100bc160c(pcVar1,SVar2.bridgeObject,SVar3.str,SVar3.bridgeObject,param_5);
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  _swift_bridgeObjectRelease(SVar3.bridgeObject);
  return (ID)pcVar1;
}



/* Address: 0x100bc1734 | FUN_100bc1734 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

ID FUN_100bc1734(undefined8 param_1)

{
  ID IVar1;
  long unaff_x20;
  
  IVar1 = _objc_msgSend(*(ID *)(unaff_x20 + _TtC6Sentry9SentryHub::helper),
                        "startTransactionWithContext:",param_1);
  return IVar1;
}



/* Address: 0x100bc1764 | _TtC6Sentry9SentryHub::startTransactionWithContext: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC6Sentry9SentryHub::startTransactionWithContext_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100bc1734();
  return param_3;
}



/* Address: 0x100bc17c0 | FUN_100bc17c0 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

ID FUN_100bc17c0(undefined8 param_1,uint param_2)

{
  ID IVar1;
  long unaff_x20;
  
  IVar1 = _objc_msgSend(*(ID *)(unaff_x20 + _TtC6Sentry9SentryHub::helper),
                        "startTransactionWithContext:bindToScope:",param_1,(ulong)(param_2 & 1));
  return IVar1;
}



/* Address: 0x100bc17f8 | _TtC6Sentry9SentryHub::startTransactionWithContext:bindToScope: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x1c bytes */

ID _TtC6Sentry9SentryHub::startTransactionWithContext_bindToScope_
             (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  FUN_100bc17c0(param_3,param_4);
  return param_3;
}



/* Address: 0x100bc185c | FUN_100bc185c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100bc185c(undefined8 param_1,uint param_2)

{
  NSDictionary *pNVar1;
  long unaff_x20;
  ID IVar2;
  
  IVar2 = *(ID *)(unaff_x20 + _TtC6Sentry9SentryHub::helper);
  pNVar1 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  IVar2 = _objc_msgSend(IVar2,"startTransactionWithContext:bindToScope:customSamplingContext:",
                        param_1,(ulong)(param_2 & 1),pNVar1);
  FUN_100b6fce4();
  FUN_100b56e60(IVar2);
  return;
}



/* Address: 0x100bc18e4 | _TtC6Sentry9SentryHub::startTransactionWithContext:bindToScope:customSamplingContext: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x24 bytes */

ID _TtC6Sentry9SentryHub::startTransactionWithContext_bindToScope_customSamplingContext_
             (ID param_1,SEL param_2,ID param_3,bool param_4,ID param_5)

{
  Dictionary<undefined,undefined> DVar1;
  
  DVar1 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  FUN_100bc185c(param_3,param_4,DVar1.unknown);
  _swift_bridgeObjectRelease(DVar1.unknown);
  return param_3;
}



/* Address: 0x100bc1988 | FUN_100bc1988 */

void FUN_100bc1988(undefined8 param_1,undefined8 param_2)

{
  FUN_100bc185c(param_1,1,param_2);
  return;
}



/* Address: 0x100bc1994 | _TtC6Sentry9SentryHub::startTransactionWithContext:customSamplingContext: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID _TtC6Sentry9SentryHub::startTransactionWithContext_customSamplingContext_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  Dictionary<undefined,undefined> DVar1;
  
  DVar1 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  FUN_100bc1988(param_3,DVar1.unknown);
  _swift_bridgeObjectRelease(DVar1.unknown);
  return param_3;
}



/* Address: 0x100bc1a2c | FUN_100bc1a2c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

ID FUN_100bc1a2c(void)

{
  NSError *self;
  ID IVar1;
  char *op;
  
  self = Foundation::__convertErrorToNSError();
  op = "captureError:";
  FUN_100bc2874();
  IVar1 = _objc_msgSend((ID)self,op);
  FUN_100b6f868();
  return IVar1;
}



/* Address: 0x100bc1a7c | _TtC6Sentry9SentryHub::captureError: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC6Sentry9SentryHub::captureError_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100bc1a2c();
  return param_3;
}



/* Address: 0x100bc1ad8 | FUN_100bc1ad8 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100bc1ad8(void)

{
  NSError *pNVar1;
  
  pNVar1 = Foundation::__convertErrorToNSError();
  FUN_100bc2864(pNVar1,"captureError:withScope:");
  FUN_100b6f934();
  FUN_100b56e60(pNVar1);
  return;
}



/* Address: 0x100bc1b28 | _TtC6Sentry9SentryHub::captureError:withScope: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID _TtC6Sentry9SentryHub::captureError_withScope_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  FUN_100bc1ad8(param_3,param_4);
  return param_3;
}



/* Address: 0x100bc1ba0 | FUN_100bc1ba0 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

ID FUN_100bc1ba0(undefined8 param_1)

{
  ID IVar1;
  long unaff_x20;
  
  IVar1 = _objc_msgSend(*(ID *)(unaff_x20 + _TtC6Sentry9SentryHub::helper),"captureException:",
                        param_1);
  return IVar1;
}



/* Address: 0x100bc1bd0 | _TtC6Sentry9SentryHub::captureException: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC6Sentry9SentryHub::captureException_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100bc1ba0();
  return param_3;
}



/* Address: 0x100bc1c2c | FUN_100bc1c2c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

ID FUN_100bc1c2c(undefined8 param_1,undefined8 param_2)

{
  ID IVar1;
  long unaff_x20;
  
  IVar1 = _objc_msgSend(*(ID *)(unaff_x20 + _TtC6Sentry9SentryHub::helper),
                        "captureException:withScope:",param_1,param_2);
  return IVar1;
}



/* Address: 0x100bc1c60 | _TtC6Sentry9SentryHub::captureException:withScope: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID _TtC6Sentry9SentryHub::captureException_withScope_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  FUN_100bc1c2c(param_3,param_4);
  return param_3;
}



/* Address: 0x100bc1cd8 | FUN_100bc1cd8 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

ID FUN_100bc1cd8(void)

{
  NSString *self;
  ID IVar1;
  char *op;
  
  self = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  op = "captureMessage:";
  FUN_100bc2874();
  IVar1 = _objc_msgSend((ID)self,op);
  FUN_100b6f868();
  return IVar1;
}



/* Address: 0x100bc1d28 | _TtC6Sentry9SentryHub::captureMessage: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC6Sentry9SentryHub::captureMessage_(ID param_1,SEL param_2,ID param_3)

{
  char *pcVar1;
  String SVar2;
  
  SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pcVar1 = SVar2.str;
  FUN_100bc1cd8(pcVar1,SVar2.bridgeObject);
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  return (ID)pcVar1;
}



/* Address: 0x100bc1d90 | FUN_100bc1d90 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100bc1d90(undefined8 param_1)

{
  FUN_100bc2880(_TtC6Sentry9SentryHub::helper);
  FUN_100bc2864();
  FUN_100b6f934();
  FUN_100b56e60(param_1);
  return;
}



/* Address: 0x100bc1ddc | _TtC6Sentry9SentryHub::captureMessage:withScope: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID _TtC6Sentry9SentryHub::captureMessage_withScope_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  char *pcVar1;
  String SVar2;
  
  SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pcVar1 = SVar2.str;
  FUN_100bc1d90(pcVar1,SVar2.bridgeObject,param_4);
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  return (ID)pcVar1;
}



/* Address: 0x100bc1e5c | FUN_100bc1e5c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100bc1e5c(long param_1)

{
  long lVar1;
  long lVar2;
  NSDictionary *pNVar3;
  NSString *pNVar4;
  NSString *pNVar5;
  NSArray *pNVar6;
  ID self;
  long unaff_x20;
  String SVar7;
  
  self = *(ID *)(unaff_x20 + _TtC6Sentry9SentryHub::helper);
  lVar1 = param_1;
  FUN_100bb51d4();
  lVar2 = lVar1;
  FUN_100b6c58c();
  _swift_bridgeObjectRelease(lVar1);
  pNVar3 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(lVar2);
  pNVar4 = (NSString *)
           _objc_msgSend(*(ID *)(param_1 + _TtC6Sentry14SentryFeedback::eventId),"sentryIdString");
  pNVar5 = pNVar4;
  if (pNVar4 == (NSString *)0x0) {
    SVar7 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    pNVar4 = SVar7.bridgeObject;
    pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(pNVar4);
  }
  FUN_100bb4ac0();
  FUN_100b673ec(0,&DAT_1010449f8,&PTR_SentryAttachment_100f8e0d8);
  pNVar6 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(pNVar4);
  _objc_msgSend(self,"captureSerializedFeedback:withEventId:attachments:",pNVar3,pNVar5,pNVar6);
  FUN_100b6f934();
  FUN_100b6fce4();
  return 0;
}



/* Address: 0x100bc1f84 | _TtC6Sentry9SentryHub::captureFeedback: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry9SentryHub::captureFeedback_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100bc1e5c(param_3);
  return;
}



/* Address: 0x100bc1fd4 | FUN_100bc1fd4 */

void FUN_100bc1fd4(void *param_1,undefined8 param_2)

{
  long unaff_x20;
  ID self;
  
  self = *(ID *)(unaff_x20 + _TtC6Sentry9SentryHub::helper);
  FUN_100b97e5c(switchD_100bab490::caseD_51);
  _swift_retain(param_2);
  _swift_release(param_2);
  _objc_msgSend(self,"configureScope:",param_1);
  __Block_release(param_1);
  FUN_100b56ee0();
  return;
}



/* Address: 0x100bc2064 | FUN_100bc2064 */

void FUN_100bc2064(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  _swift_retain(uVar1);
  return;
}



/* Address: 0x100bc2074 | FUN_100bc2074 */

void FUN_100bc2074(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x100bc207c | _TtC6Sentry9SentryHub::configureScope: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry9SentryHub::configureScope_(ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  void *pvVar1;
  undefined *puVar2;
  
  pvVar1 = __Block_copy((void *)param_3);
  puVar2 = &DAT_100f3ada0;
  _swift_allocObject(&DAT_100f3ada0,0x18,7);
  *(void **)(puVar2 + 0x10) = pvVar1;
  FUN_100bc1fd4(FUN_100405dac,puVar2);
  _swift_release(puVar2);
  return;
}



/* Address: 0x100bc20f0 | FUN_100bc20f0 */

void FUN_100bc20f0(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined *aBlock;
  long unaff_x20;
  ID self;
  
  self = *(ID *)(unaff_x20 + _TtC6Sentry9SentryHub::helper);
  puVar1 = &DAT_100f3ad50;
  _swift_allocObject(&DAT_100f3ad50,0x21,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  puVar1[0x20] = param_3;
  aBlock = puVar1;
  FUN_100b97e5c(switchD_100bab490::caseD_51);
  _swift_bridgeObjectRetain(param_2);
  _swift_release(puVar1);
  _objc_msgSend(self,"configureScope:",aBlock);
  __Block_release(aBlock);
  FUN_100b56ee0();
  return;
}



/* Address: 0x100bc21ac | FUN_100bc21ac */

void FUN_100bc21ac(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x100bc21d0 | FUN_100bc21d0 */

void FUN_100bc21d0(undefined8 param_1)

{
  long unaff_x20;
  
  _objc_msgSend(*(ID *)(unaff_x20 + _TtC6Sentry9SentryHub::helper),"addBreadcrumb:",param_1);
  return;
}



/* Address: 0x100bc21ec | _TtC6Sentry9SentryHub::addBreadcrumb: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry9SentryHub::addBreadcrumb_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100bc21d0(param_3);
  return;
}



/* Address: 0x100bc223c | FUN_100bc223c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100bc223c(void)

{
  ID IVar1;
  class_t *pcVar2;
  class_t *pcVar3;
  long unaff_x20;
  objc_super local_30;
  
  IVar1 = _objc_msgSend(*(ID *)(unaff_x20 + _TtC6Sentry9SentryHub::helper),"getClient");
  if (IVar1 != 0) {
    pcVar2 = (class_t *)0x0;
    FUN_100be51b4();
    pcVar3 = pcVar2;
    _objc_allocWithZone();
    *(ID *)((long)&pcVar3->isa + _TtC6Sentry12SentryClient::helper) = IVar1;
    local_30.receiver = (ID)pcVar3;
    local_30.super_class = pcVar2;
    _objc_msgSendSuper2(&local_30,"init");
  }
  return;
}



/* Address: 0x100bc22b8 | _TtC6Sentry9SentryHub::getClient */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry9SentryHub::getClient(ID param_1,SEL param_2)

{
  FUN_100bc223c();
  return param_1;
}



/* Address: 0x100bc22ec | _TtC6Sentry9SentryHub::scope */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry9SentryHub::scope(ID param_1,SEL param_2)

{
  FUN_100bc2320();
  return param_1;
}



/* Address: 0x100bc2320 | FUN_100bc2320 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

ID FUN_100bc2320(void)

{
  ID IVar1;
  long unaff_x20;
  
  IVar1 = _objc_msgSend(*(ID *)(unaff_x20 + _TtC6Sentry9SentryHub::helper),"scope");
  return IVar1;
}



/* Address: 0x100bc234c | _TtC6Sentry9SentryHub::logger */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry9SentryHub::logger(ID param_1,SEL param_2)

{
  FUN_100bc2380();
  return param_1;
}



/* Address: 0x100bc2380 | FUN_100bc2380 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100bc2380(void)

{
  long lVar1;
  ID IVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined1 auStack_48 [24];
  
  IVar2 = _objc_msgSend(*(ID *)(unaff_x20 + _TtC6Sentry9SentryHub::helper),"_swiftLogger");
  uVar3 = 0;
  FUN_100b82e0c(0);
  _swift_dynamicCastClass(IVar2,uVar3);
  if (IVar2 == 0) {
    FUN_100b6f868();
    FUN_100b84dac(0);
    FUN_100b84df8(5,0xd000000000000044,0x8000000100dcde50,0xd00000000000004a,0x8000000100dcfcb0,0xd4
                 );
    lVar4 = 0;
    FUN_100b78b14();
    FUN_100b75404();
    lVar1 = _TtC6Sentry25SentryDependencyContainer::dateProvider;
    _swift_beginAccess(lVar4 + _TtC6Sentry25SentryDependencyContainer::dateProvider,auStack_48,0,0);
    uVar5 = *(undefined8 *)(lVar4 + lVar1);
    _swift_unknownObjectRetain(uVar5);
    FUN_100b6f868();
    _objc_allocWithZone(uVar3);
    FUN_100b825d0(uVar5);
  }
  return;
}



/* Address: 0x100bc2490 | FUN_100bc2490 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100bc2490(long param_1)

{
  ID self;
  char *op;
  
  if (param_1 == 0) {
    self = 0;
  }
  else {
    self = *(ID *)(param_1 + _TtC6Sentry12SentryClient::helper);
  }
  op = "bindClient:";
  FUN_100bc2874();
  _objc_msgSend(self,op);
  return 0;
}



/* Address: 0x100bc24ec | _TtC6Sentry9SentryHub::bindClient: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry9SentryHub::bindClient_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100bc2490(param_3);
  return;
}



/* Address: 0x100bc2540 | FUN_100bc2540 */

ID FUN_100bc2540(void)

{
  NSString *self;
  ID IVar1;
  char *op;
  
  self = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  op = "hasIntegration:";
  FUN_100bc2874();
  IVar1 = _objc_msgSend((ID)self,op);
  FUN_100b6f868();
  return IVar1;
}



/* Address: 0x100bc2588 | _TtC6Sentry9SentryHub::hasIntegration: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

bool _TtC6Sentry9SentryHub::hasIntegration_(ID param_1,SEL param_2,ID param_3)

{
  char *pcVar1;
  String SVar2;
  
  SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pcVar1 = SVar2.str;
  FUN_100bc2540(pcVar1,SVar2.bridgeObject);
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  return (uint)pcVar1 & 1;
}



/* Address: 0x100bc25f0 | FUN_100bc25f0 */

void FUN_100bc25f0(undefined8 param_1)

{
  ID self;
  long unaff_x20;
  
  self = *(ID *)(unaff_x20 + _TtC6Sentry9SentryHub::helper);
  _swift_getObjCClassFromMetadata();
  _objc_msgSend(self,"isIntegrationInstalled:",param_1);
  return;
}



/* Address: 0x100bc262c | _TtC6Sentry9SentryHub::isIntegrationInstalled: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

bool _TtC6Sentry9SentryHub::isIntegrationInstalled_(ID param_1,SEL param_2,CLASS param_3)

{
  uint uVar1;
  
  uVar1 = (uint)param_3;
  _swift_getObjCClassMetadata();
  FUN_100bc25f0();
  return uVar1 & 1;
}



/* Address: 0x100bc267c | FUN_100bc267c */

void FUN_100bc267c(undefined8 param_1)

{
  long unaff_x20;
  
  _objc_msgSend(*(ID *)(unaff_x20 + _TtC6Sentry9SentryHub::helper),"setUser:",param_1);
  return;
}



/* Address: 0x100bc2698 | _TtC6Sentry9SentryHub::setUser: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry9SentryHub::setUser_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100bc267c(param_3);
  return;
}



/* Address: 0x100bc26ec | FUN_100bc26ec */

void FUN_100bc26ec(void)

{
  long unaff_x20;
  
  _objc_msgSend(*(ID *)(unaff_x20 + _TtC6Sentry9SentryHub::helper),"reportFullyDisplayed");
  return;
}


