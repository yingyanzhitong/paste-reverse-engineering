/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100bd3df0 | FUN_100bd3df0 */

void FUN_100bd3df0(undefined8 param_1,void *param_2,char *param_3,void *param_4)

{
  String SVar1;
  String SVar2;
  
  SVar1.bridgeObject = param_2;
  SVar1.str = (char *)0xd00000000000001b;
  SVar2.bridgeObject = param_4;
  SVar2.str = param_3;
  Swift::String::append(SVar1,SVar2);
  return;
}



/* Address: 0x100bd3dfc | FUN_100bd3dfc */

void FUN_100bd3dfc(void)

{
  _swift_bridgeObjectRetain();
  return;
}



/* Address: 0x100bd3e04 | FUN_100bd3e04 */

void FUN_100bd3e04(void)

{
  FUN_100bd3268();
  return;
}



/* Address: 0x100bd3e0c | FUN_100bd3e0c */

void FUN_100bd3e0c(void)

{
  FUN_100bd3268();
  return;
}



/* Address: 0x100bd3e14 | FUN_100bd3e14 */

void FUN_100bd3e14(undefined8 param_1,undefined8 param_2)

{
  FUN_1000c9ffc(param_1,param_2,1);
  return;
}



/* Address: 0x100bd3e20 | FUN_100bd3e20 */

void FUN_100bd3e20(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x26;
  
  *(undefined8 *)(unaff_x26 + 0x28) = param_1;
  *(undefined8 *)(unaff_x26 + 0x10) = unaff_x20;
  return;
}



/* Address: 0x100bd3e2c | FUN_100bd3e2c */

void FUN_100bd3e2c(void)

{
  return;
}



/* Address: 0x100bd3e38 | FUN_100bd3e38 */

void FUN_100bd3e38(void)

{
  return;
}



/* Address: 0x100bd3e44 | FUN_100bd3e44 */

void FUN_100bd3e44(void)

{
  return;
}



/* Address: 0x100bd3e58 | FUN_100bd3e58 */

void FUN_100bd3e58(undefined8 *param_1)

{
  long in_x9;
  undefined8 unaff_x24;
  
  *param_1 = *(undefined8 *)(in_x9 + -0x100);
  param_1[1] = unaff_x24;
  return;
}



/* Address: 0x100bd3e6c | FUN_100bd3e6c */

void FUN_100bd3e6c(void)

{
  undefined8 unaff_x19;
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -0x130) = unaff_x19;
  return;
}



/* Address: 0x100bd3e80 | FUN_100bd3e80 */

void FUN_100bd3e80(long param_1)

{
  undefined8 *puVar1;
  long unaff_x22;
  undefined8 unaff_x23;
  long unaff_x29;
  
  puVar1 = (undefined8 *)(param_1 + unaff_x22 * 0x10);
  *puVar1 = *(undefined8 *)(unaff_x29 + -0x130);
  puVar1[1] = unaff_x23;
  return;
}



/* Address: 0x100bd3e94 | FUN_100bd3e94 */

void FUN_100bd3e94(void)

{
  return;
}



/* Address: 0x100bd3ea0 | FUN_100bd3ea0 */

void FUN_100bd3ea0(void)

{
  return;
}



/* Address: 0x100bd3eac | FUN_100bd3eac */

void FUN_100bd3eac(void)

{
  long in_x9;
  undefined8 unaff_x19;
  
  *(undefined8 *)(in_x9 + 0x10) = unaff_x19;
  return;
}



/* Address: 0x100bd3ec0 | FUN_100bd3ec0 */

void FUN_100bd3ec0(void)

{
  return;
}



/* Address: 0x100bd3ed4 | FUN_100bd3ed4 */

void FUN_100bd3ed4(undefined8 param_1)

{
  undefined8 unaff_x19;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x10) = unaff_x19;
  return;
}



/* Address: 0x100bd3ee0 | FUN_100bd3ee0 */

void FUN_100bd3ee0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  FUN_100b69e08();
  FUN_100bd4adc(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  FUN_100b56ea0();
  return;
}



/* Address: 0x100bd3f50 | _TtC6Sentry9SentryLog::timestamp */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry9SentryLog::timestamp(ID param_1,SEL param_2)

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
  FUN_100bd3fc8(&stack0xffffffffffffffd0 + -(lVar4 + 0xfU & 0xfffffffffffffff0));
  pNVar3 = Foundation::Date::_bridgeToObjectiveC(DVar2);
  (**(code **)(lVar5 + 8))
            (&stack0xffffffffffffffd0 + -(lVar4 + 0xfU & 0xfffffffffffffff0),DVar1.unknown);
  return (ID)pNVar3;
}



/* Address: 0x100bd3fc8 | FUN_100bd3fc8 */

void FUN_100bd3fc8(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _TtC6Sentry9SentryLog::timestamp;
  FUN_100b78ca0(unaff_x20 + _TtC6Sentry9SentryLog::timestamp,auStack_48);
  FUN_100b7982c();
  FUN_100bd6844();
  (**(code **)(extraout_x8 + 0x10))(param_1,unaff_x20 + lVar1);
  FUN_100b78c90();
  return;
}



/* Address: 0x100bd4014 | _TtC6Sentry9SentryLog::setTimestamp: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry9SentryLog::setTimestamp_(ID param_1,SEL param_2,ID param_3)

{
  Date DVar1;
  long lVar2;
  
  DVar1 = Foundation::Date::typeMetadataAccessor();
  lVar2 = *(long *)(*(long *)(DVar1.unknown + -8) + 0x40);
  Foundation::Date::__unconditionallyBridgeFromObjectiveC((Date)param_3);
  FUN_100bd408c(&stack0xffffffffffffffd0 + -(lVar2 + 0xfU & 0xfffffffffffffff0));
  return;
}



/* Address: 0x100bd408c | FUN_100bd408c */

void FUN_100bd408c(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _TtC6Sentry9SentryLog::timestamp;
  FUN_100bad8a8(unaff_x20 + _TtC6Sentry9SentryLog::timestamp,auStack_48);
  FUN_100b7982c();
  FUN_100bd6844();
  (**(code **)(extraout_x8 + 0x28))(unaff_x20 + lVar1,param_1);
  FUN_100bd683c();
  FUN_100b78c90();
  return;
}



/* Address: 0x100bd40dc | FUN_100bd40dc */

void FUN_100bd40dc(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = _TtC6Sentry9SentryLog::timestamp;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100bd4108 | _TtC6Sentry9SentryLog::traceId */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry9SentryLog::traceId(ID param_1,SEL param_2)

{
  FUN_100bd4128();
  return param_1;
}



/* Address: 0x100bd4128 | FUN_100bd4128 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_100bd4128(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = _TtC6Sentry9SentryLog::traceId;
  FUN_100b78c58();
  return *(undefined8 *)(unaff_x20 + lVar1);
}



/* Address: 0x100bd4158 | _TtC6Sentry9SentryLog::setTraceId: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry9SentryLog::setTraceId_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100bd419c(param_3);
  return;
}



/* Address: 0x100bd419c | FUN_100bd419c */

void FUN_100bd419c(void)

{
  FUN_100b78d24();
  FUN_100b78c6c();
  FUN_100b78cbc();
  FUN_100b78c90();
  return;
}



/* Address: 0x100bd41c8 | FUN_100bd41c8 */

void FUN_100bd41c8(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = _TtC6Sentry9SentryLog::traceId;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100bd41f4 | _TtC6Sentry9SentryLog::spanId */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry9SentryLog::spanId(ID param_1,SEL param_2)

{
  FUN_100bd4214();
  return param_1;
}



/* Address: 0x100bd4214 | FUN_100bd4214 */

void FUN_100bd4214(void)

{
  undefined8 uVar1;
  
  uVar1 = _TtC6Sentry9SentryLog::spanId;
  FUN_100b78c58();
  FUN_100bd6800();
  FUN_100b6f9fc(uVar1);
  return;
}



/* Address: 0x100bd4240 | _TtC6Sentry9SentryLog::setSpanId: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry9SentryLog::setSpanId_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100bd4280(param_3);
  return;
}



/* Address: 0x100bd4280 | FUN_100bd4280 */

void FUN_100bd4280(void)

{
  FUN_100b78d24();
  FUN_100b78c6c();
  FUN_100b78cbc();
  FUN_100b78c90();
  return;
}



/* Address: 0x100bd42ac | FUN_100bd42ac */

void FUN_100bd42ac(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = _TtC6Sentry9SentryLog::spanId;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100bd42d8 | _TtC6Sentry9SentryLog::level */

/* Function Stack Size: 0x10 bytes */

long_long _TtC6Sentry9SentryLog::level(ID param_1,SEL param_2)

{
  FUN_100bd42f8();
  return param_1;
}



/* Address: 0x100bd42f8 | FUN_100bd42f8 */

void FUN_100bd42f8(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = _TtC6Sentry9SentryLog::level;
  FUN_100b78c58();
  FUN_100b6f9fc(*(undefined8 *)(unaff_x20 + lVar1));
  return;
}



/* Address: 0x100bd4320 | _TtC6Sentry9SentryLog::setLevel: */

/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry9SentryLog::setLevel_(ID param_1,SEL param_2,long_long param_3)

{
  FUN_100bd4344(param_3);
  return;
}



/* Address: 0x100bd4344 | FUN_100bd4344 */

void FUN_100bd4344(void)

{
  long lVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_100b78d24();
  lVar1 = _TtC6Sentry9SentryLog::level;
  FUN_100b78c6c();
  *(undefined8 *)(unaff_x20 + lVar1) = unaff_x19;
  FUN_100b78c90();
  return;
}



/* Address: 0x100bd4370 | FUN_100bd4370 */

void FUN_100bd4370(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = _TtC6Sentry9SentryLog::level;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100bd439c | _TtC6Sentry9SentryLog::body */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry9SentryLog::body(ID param_1,SEL param_2)

{
  NSString *pNVar1;
  
  FUN_100bd43d4();
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_2);
  return (ID)pNVar1;
}



/* Address: 0x100bd43d4 | FUN_100bd43d4 */

undefined1  [16] FUN_100bd43d4(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + _TtC6Sentry9SentryLog::body);
  FUN_100b78ca0(pauVar1,auStack_38);
  auVar2 = *pauVar1;
  FUN_100b86d54();
  return auVar2;
}



/* Address: 0x100bd441c | _TtC6Sentry9SentryLog::setBody: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry9SentryLog::setBody_(ID param_1,SEL param_2,ID param_3)

{
  String SVar1;
  
  SVar1 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  FUN_100bd4470(SVar1.str,SVar1.bridgeObject);
  return;
}



/* Address: 0x100bd4470 | FUN_100bd4470 */

void FUN_100bd4470(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _TtC6Sentry9SentryLog::body);
  FUN_100b80d38(puVar1,auStack_48);
  uVar2 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  _swift_bridgeObjectRelease(uVar2);
  FUN_100b78c90();
  return;
}



/* Address: 0x100bd44b8 | FUN_100bd44b8 */

void FUN_100bd44b8(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = _TtC6Sentry9SentryLog::body;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100bd44e4 | _TtC6Sentry9SentryLog::attributes */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry9SentryLog::attributes(ID param_1,SEL param_2)

{
  NSDictionary *pNVar1;
  
  FUN_100bd453c();
  FUN_100b69598(0);
  pNVar1 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_1);
  return (ID)pNVar1;
}



/* Address: 0x100bd453c | FUN_100bd453c */

void FUN_100bd453c(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = _TtC6Sentry9SentryLog::attributes;
  FUN_100b78c58();
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + lVar1));
  FUN_100b6f9fc();
  return;
}



/* Address: 0x100bd4568 | _TtC6Sentry9SentryLog::setAttributes: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry9SentryLog::setAttributes_(ID param_1,SEL param_2,ID param_3)

{
  Dictionary<undefined,undefined> DVar1;
  
  FUN_100b69598(0);
  DVar1 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  FUN_100bd45c8(DVar1.unknown);
  return;
}



/* Address: 0x100bd45c8 | FUN_100bd45c8 */

void FUN_100bd45c8(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_100b78d24();
  lVar1 = _TtC6Sentry9SentryLog::attributes;
  FUN_100b78c6c();
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = unaff_x19;
  _swift_bridgeObjectRelease(uVar2);
  FUN_100b78c90();
  return;
}



/* Address: 0x100bd45fc | FUN_100bd45fc */

void FUN_100bd45fc(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = _TtC6Sentry9SentryLog::attributes;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100bd4628 | _TtC6Sentry9SentryLog::severityNumber */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry9SentryLog::severityNumber(ID param_1,SEL param_2)

{
  FUN_100bd4648();
  return param_1;
}



/* Address: 0x100bd4648 | FUN_100bd4648 */

void FUN_100bd4648(void)

{
  undefined8 uVar1;
  
  uVar1 = _TtC6Sentry9SentryLog::severityNumber;
  FUN_100b78c58();
  FUN_100bd6800();
  FUN_100b6f9fc(uVar1);
  return;
}



/* Address: 0x100bd4674 | _TtC6Sentry9SentryLog::setSeverityNumber: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry9SentryLog::setSeverityNumber_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100bd46b4(param_3);
  return;
}



/* Address: 0x100bd46b4 | FUN_100bd46b4 */

void FUN_100bd46b4(void)

{
  FUN_100b78d24();
  FUN_100b78c6c();
  FUN_100b78cbc();
  FUN_100b78c90();
  return;
}



/* Address: 0x100bd46e0 | FUN_100bd46e0 */

void FUN_100bd46e0(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = _TtC6Sentry9SentryLog::severityNumber;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100bd470c | FUN_100bd470c */

void FUN_100bd470c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_100b69e08();
  FUN_100bd4750(param_1,param_2,param_3);
  return;
}



/* Address: 0x100bd4750 | FUN_100bd4750 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100bd4828 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100bd4750(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  Date DVar2;
  NSDate *pNVar3;
  ID IVar4;
  NSString *pNVar5;
  undefined8 uVar6;
  Dictionary<undefined,undefined> DVar7;
  NSDictionary *pNVar8;
  long extraout_x8;
  long extraout_x9;
  ID unaff_x20;
  long lVar9;
  
  lVar1 = param_1;
  FUN_100b7982c();
  lVar9 = *(long *)(lVar1 + -8);
  FUN_100b6f9e0(*(undefined8 *)(lVar9 + 0x40));
  DVar2 = Foundation::Date::init();
  pNVar3 = Foundation::Date::_bridgeToObjectiveC(DVar2);
  (**(code **)(lVar9 + 8))(extraout_x9 - extraout_x8,lVar1);
  IVar4 = _objc_msgSend((ID)&objc::class_t::SentryId,"empty");
  pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_3);
  uVar6 = 0;
  FUN_100b69598(0);
  DVar7 = Swift::Dictionary::_init
                    (uVar6,PTR___type_metadata_for_Swift_String_100eac208,uVar6,
                     PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100eac218
                    );
  pNVar8 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(DVar7.unknown);
  *(undefined8 *)((extraout_x9 - extraout_x8) + -0x10) = 0;
  _objc_msgSend(unaff_x20,"initWithTimestamp:traceId:spanId:level:body:attributes:severityNumber:",
                pNVar3,IVar4,0,param_1,pNVar5,pNVar8);
  FUN_100bd67a8();
  FUN_100b7ca38(0);
  FUN_100b56ea0(param_1);
  return;
}



/* Address: 0x100bd48a0 | _TtC6Sentry9SentryLog::initWithLevel:body: */

/* Function Stack Size: 0x20 bytes */

ID _TtC6Sentry9SentryLog::initWithLevel_body_(ID param_1,SEL param_2,long_long param_3,ID param_4)

{
  String SVar1;
  
  SVar1 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  FUN_100bd4750(param_3,SVar1.str,SVar1.bridgeObject);
  return param_3;
}



/* Address: 0x100bd48e0 | FUN_100bd48e0 */

void FUN_100bd48e0(void)

{
  FUN_100b69e08();
  FUN_100bd67d8();
  FUN_100bd492c();
  return;
}



/* Address: 0x100bd492c | FUN_100bd492c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100bd492c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  Date DVar2;
  NSDate *pNVar3;
  ID IVar4;
  NSString *pNVar5;
  NSDictionary *pNVar6;
  long extraout_x8;
  long extraout_x9;
  ID unaff_x20;
  long lVar7;
  
  lVar1 = param_1;
  FUN_100b7982c();
  lVar7 = *(long *)(lVar1 + -8);
  FUN_100b6f9e0(*(undefined8 *)(lVar7 + 0x40));
  DVar2 = Foundation::Date::init();
  pNVar3 = Foundation::Date::_bridgeToObjectiveC(DVar2);
  (**(code **)(lVar7 + 8))(extraout_x9 - extraout_x8,lVar1);
  IVar4 = _objc_msgSend((ID)&objc::class_t::SentryId,"empty");
  pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_3);
  FUN_100b69598(0);
  pNVar6 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_4);
  *(undefined8 *)((extraout_x9 - extraout_x8) + -0x10) = 0;
  _objc_msgSend(unaff_x20,"initWithTimestamp:traceId:spanId:level:body:attributes:severityNumber:",
                pNVar3,IVar4,0,param_1,pNVar5,pNVar6);
  FUN_100bd67a8();
  FUN_100b7ca38(0);
  FUN_100b56ea0(param_1);
  return;
}



/* Address: 0x100bd4a5c | _TtC6Sentry9SentryLog::initWithLevel:body:attributes: */

/* Function Stack Size: 0x28 bytes */

ID _TtC6Sentry9SentryLog::initWithLevel_body_attributes_
             (ID param_1,SEL param_2,long_long param_3,ID param_4,ID param_5)

{
  Dictionary<undefined,undefined> DVar1;
  String SVar2;
  
  SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  FUN_100b69598(0);
  DVar1 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  FUN_100bd492c(param_3,SVar2.str,SVar2.bridgeObject,DVar1.unknown);
  return param_3;
}



/* Address: 0x100bd4adc | FUN_100bd4adc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100bd4adc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,ID param_8)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *self;
  ID IVar5;
  undefined8 uVar6;
  long extraout_x8;
  long unaff_x20;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  uVar6 = param_3;
  _swift_getObjectType();
  lVar3 = _TtC6Sentry9SentryLog::spanId;
  *(undefined8 *)(unaff_x20 + _TtC6Sentry9SentryLog::spanId) = 0;
  lVar4 = _TtC6Sentry9SentryLog::severityNumber;
  *(undefined8 *)(unaff_x20 + _TtC6Sentry9SentryLog::severityNumber) = 0;
  lVar2 = _TtC6Sentry9SentryLog::timestamp;
  FUN_100b7982c();
  FUN_100bd6844();
  (**(code **)(extraout_x8 + 0x10))(unaff_x20 + lVar2,param_1);
  *(undefined8 *)(unaff_x20 + _TtC6Sentry9SentryLog::traceId) = param_2;
  FUN_100b80d38(unaff_x20 + lVar3,auStack_78);
  *(undefined8 *)(unaff_x20 + lVar3) = param_3;
  *(undefined8 *)(unaff_x20 + _TtC6Sentry9SentryLog::level) = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC6Sentry9SentryLog::body);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  *(undefined8 *)(unaff_x20 + _TtC6Sentry9SentryLog::attributes) = param_7;
  if (param_8 == 0) {
    FUN_100bbb7cc(param_4);
    self = &_OBJC_CLASS___NSNumber;
    _objc_allocWithZone();
    param_8 = _objc_msgSend((ID)self,"initWithInteger:",param_4);
  }
  FUN_100b80d38(unaff_x20 + lVar4,auStack_90);
  *(ID *)(unaff_x20 + lVar4) = param_8;
  IVar5 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff60,"init");
  FUN_100b7ca38(0);
  (**(code **)(extraout_x8 + 8))(param_1,uVar6);
  return IVar5;
}



/* Address: 0x100bd4c9c | _TtC6Sentry9SentryLog::initWithTimestamp:traceId:spanId:level:body:attributes:severityNumber: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x48 bytes */

ID _TtC6Sentry9SentryLog::initWithTimestamp_traceId_spanId_level_body_attributes_severityNumber_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,long_long param_6,ID param_7,
             ID param_8,ID param_9)

{
  Date DVar1;
  Dictionary<undefined,undefined> DVar2;
  undefined1 *puVar3;
  String SVar4;
  
  DVar1 = Foundation::Date::typeMetadataAccessor();
  puVar3 = &stack0xffffffffffffffa0 +
           -(*(long *)(*(long *)(DVar1.unknown + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  Foundation::Date::__unconditionallyBridgeFromObjectiveC((Date)param_3);
  SVar4 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  FUN_100b69598(0);
  DVar2 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  FUN_100bd4adc(puVar3,param_4,param_5,param_6,SVar4.str,SVar4.bridgeObject,DVar2.unknown,param_9);
  return (ID)puVar3;
}



/* Address: 0x100bd4da0 | FUN_100bd4da0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100bd4da0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  if (param_1 == 0) {
    FUN_100bad8a8(unaff_x20 + _TtC6Sentry9SentryLog::attributes,auStack_58);
    FUN_100bd5da8(param_2,param_3);
    FUN_100bd683c();
  }
  else {
    FUN_100bad8a8(unaff_x20 + _TtC6Sentry9SentryLog::attributes,auStack_58);
    FUN_100b86d54();
    FUN_100bd5914(param_1,param_2,param_3);
    FUN_100bd683c();
    FUN_100b6f838();
  }
  return;
}



/* Address: 0x100bd4e50 | _TtC6Sentry9SentryLog::setAttribute:forKey: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void _TtC6Sentry9SentryLog::setAttribute_forKey_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  String SVar1;
  
  SVar1 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  FUN_100bd4da0(param_3,SVar1.str,SVar1.bridgeObject);
  _swift_bridgeObjectRelease(SVar1.bridgeObject);
  return;
}



/* Address: 0x100bd4ecc | FUN_100bd4ecc */

void FUN_100bd4ecc(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("Sentry.SentryLog",0x10,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100bd4ef8);
  (*pcVar1)();
}


