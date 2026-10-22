/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10010d2cc | FUN_10010d2cc */

void FUN_10010d2cc(void)

{
  FUN_10010d45c();
  return;
}



/* Address: 0x10010d2d4 | _TtC7PostHog13PostHogLogger::warnWithBody:attributes: */

/* Function Stack Size: 0x20 bytes */

void _TtC7PostHog13PostHogLogger::warnWithBody_attributes_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  FUN_10010d50c();
  return;
}



/* Address: 0x10010d2dc | FUN_10010d2dc */

void FUN_10010d2dc(undefined8 param_1,undefined8 param_2)

{
  FUN_10010d304(param_1,param_2,4);
  return;
}



/* Address: 0x10010d2e4 | _TtC7PostHog13PostHogLogger::errorWithBody: */

/* Function Stack Size: 0x18 bytes */

void _TtC7PostHog13PostHogLogger::errorWithBody_(ID param_1,SEL param_2,ID param_3)

{
  FUN_10010d3a0();
  return;
}



/* Address: 0x10010d2ec | FUN_10010d2ec */

void FUN_10010d2ec(void)

{
  FUN_10010d45c();
  return;
}



/* Address: 0x10010d2f4 | _TtC7PostHog13PostHogLogger::errorWithBody:attributes: */

/* Function Stack Size: 0x20 bytes */

void _TtC7PostHog13PostHogLogger::errorWithBody_attributes_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  FUN_10010d50c();
  return;
}



/* Address: 0x10010d2fc | FUN_10010d2fc */

void FUN_10010d2fc(undefined8 param_1,undefined8 param_2)

{
  FUN_10010d304(param_1,param_2,5);
  return;
}



/* Address: 0x10010d304 | FUN_10010d304 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10010d304(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _TtC7PostHog13PostHogLogger::sdk;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    FUN_100146ff4(param_1,param_2,param_3,0,0,0,0,0,0,1);
    return 0;
  }
  return 0;
}



/* Address: 0x10010d398 | _TtC7PostHog13PostHogLogger::fatalWithBody: */

/* Function Stack Size: 0x18 bytes */

void _TtC7PostHog13PostHogLogger::fatalWithBody_(ID param_1,SEL param_2,ID param_3)

{
  FUN_10010d3a0();
  return;
}



/* Address: 0x10010d3a0 | FUN_10010d3a0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10010d3a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  String SVar1;
  
  SVar1 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  param_1 = param_1 + _TtC7PostHog13PostHogLogger::sdk;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    FUN_100146ff4(SVar1.str,SVar1.bridgeObject,param_4,0,0,0,0,0,0,1);
  }
  _swift_bridgeObjectRelease(SVar1.bridgeObject);
  return;
}



/* Address: 0x10010d454 | FUN_10010d454 */

void FUN_10010d454(void)

{
  FUN_10010d45c();
  return;
}



/* Address: 0x10010d45c | FUN_10010d45c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
FUN_10010d45c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _TtC7PostHog13PostHogLogger::sdk;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    FUN_100146ff4(param_1,param_2,param_4,param_3,0,0,0,0,0,1);
    return 0;
  }
  return 0;
}



/* Address: 0x10010d504 | _TtC7PostHog13PostHogLogger::fatalWithBody:attributes: */

/* Function Stack Size: 0x20 bytes */

void _TtC7PostHog13PostHogLogger::fatalWithBody_attributes_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  FUN_10010d50c();
  return;
}



/* Address: 0x10010d50c | FUN_10010d50c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10010d50c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  Dictionary<undefined,undefined> DVar1;
  String SVar2;
  
  SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  DVar1.unknown = (undefined *)0x0;
  if (param_4 != 0) {
    DVar1 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  }
  param_1 = param_1 + _TtC7PostHog13PostHogLogger::sdk;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    FUN_100146ff4(SVar2.str,SVar2.bridgeObject,param_5,DVar1.unknown,0,0,0,0,0,1);
  }
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  _swift_bridgeObjectRelease(DVar1.unknown);
  return;
}



/* Address: 0x10010d5f8 | _TtC7PostHog13PostHogLogger::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC7PostHog13PostHogLogger::init(ID param_1,SEL param_2)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("PostHog.PostHogLogger",0x15,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10010d624);
  (*pcVar1)();
}



/* Address: 0x10010d624 | _TtC7PostHog13PostHogLogger::.cxx_destruct */

/* Function Stack Size: 0x10 bytes */

void _TtC7PostHog13PostHogLogger::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_unknownObjectWeakDestroy(param_1 + sdk);
  return;
}



/* Address: 0x10010d634 | FUN_10010d634 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10010d634(void)

{
  return ZEXT816(0x100f93320);
}



/* Address: 0x10010d654 | _TtC7PostHog17PostHogLogsConfig::flushIntervalSeconds */

/* Function Stack Size: 0x10 bytes */

double _TtC7PostHog17PostHogLogsConfig::flushIntervalSeconds(ID param_1,SEL param_2)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = flushIntervalSeconds;
  _swift_beginAccess(param_1 + flushIntervalSeconds,auStack_38,0,0);
  return *(double *)(param_1 + lVar1);
}



/* Address: 0x10010d698 | FUN_10010d698 */

undefined8 FUN_10010d698(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _TtC7PostHog17PostHogLogsConfig::flushIntervalSeconds;
  _swift_beginAccess(unaff_x20 + _TtC7PostHog17PostHogLogsConfig::flushIntervalSeconds,auStack_38,0,
                     0);
  return *(undefined8 *)(unaff_x20 + lVar1);
}



/* Address: 0x10010d6d8 | _TtC7PostHog17PostHogLogsConfig::setFlushIntervalSeconds: */

/* Function Stack Size: 0x18 bytes */

void _TtC7PostHog17PostHogLogsConfig::setFlushIntervalSeconds_
               (ID param_1,SEL param_2,double param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = flushIntervalSeconds;
  _swift_beginAccess(param_1 + flushIntervalSeconds,auStack_48,1,0);
  *(double *)(param_1 + lVar1) = param_3;
  return;
}



/* Address: 0x10010d728 | FUN_10010d728 */

void FUN_10010d728(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _TtC7PostHog17PostHogLogsConfig::flushIntervalSeconds;
  _swift_beginAccess(unaff_x20 + _TtC7PostHog17PostHogLogsConfig::flushIntervalSeconds,auStack_48,1,
                     0);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  return;
}



/* Address: 0x10010d774 | FUN_10010d774 */

undefined1  [16] FUN_10010d774(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _TtC7PostHog17PostHogLogsConfig::flushIntervalSeconds;
  _swift_beginAccess(unaff_x20 + _TtC7PostHog17PostHogLogsConfig::flushIntervalSeconds,param_1,0x21,
                     0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = _swift_endAccess;
  return auVar2;
}



/* Address: 0x10010d7b4 | _TtC7PostHog17PostHogLogsConfig::maxBufferSize */

/* Function Stack Size: 0x10 bytes */

long_long _TtC7PostHog17PostHogLogsConfig::maxBufferSize(ID param_1,SEL param_2)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = maxBufferSize;
  _swift_beginAccess(param_1 + maxBufferSize,auStack_38,0,0);
  return *(long_long *)(param_1 + lVar1);
}



/* Address: 0x10010d7f8 | FUN_10010d7f8 */

undefined8 FUN_10010d7f8(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _TtC7PostHog17PostHogLogsConfig::maxBufferSize;
  _swift_beginAccess(unaff_x20 + _TtC7PostHog17PostHogLogsConfig::maxBufferSize,auStack_38,0,0);
  return *(undefined8 *)(unaff_x20 + lVar1);
}



/* Address: 0x10010d838 | _TtC7PostHog17PostHogLogsConfig::setMaxBufferSize: */

/* Function Stack Size: 0x18 bytes */

void _TtC7PostHog17PostHogLogsConfig::setMaxBufferSize_(ID param_1,SEL param_2,long_long param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = maxBufferSize;
  _swift_beginAccess(param_1 + maxBufferSize,auStack_48,1,0);
  *(long_long *)(param_1 + lVar1) = param_3;
  return;
}



/* Address: 0x10010d888 | FUN_10010d888 */

void FUN_10010d888(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _TtC7PostHog17PostHogLogsConfig::maxBufferSize;
  _swift_beginAccess(unaff_x20 + _TtC7PostHog17PostHogLogsConfig::maxBufferSize,auStack_48,1,0);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  return;
}



/* Address: 0x10010d8d4 | FUN_10010d8d4 */

undefined1  [16] FUN_10010d8d4(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _TtC7PostHog17PostHogLogsConfig::maxBufferSize;
  _swift_beginAccess(unaff_x20 + _TtC7PostHog17PostHogLogsConfig::maxBufferSize,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = _swift_endAccess;
  return auVar2;
}



/* Address: 0x10010d914 | _TtC7PostHog17PostHogLogsConfig::flushAt */

/* Function Stack Size: 0x10 bytes */

long_long _TtC7PostHog17PostHogLogsConfig::flushAt(ID param_1,SEL param_2)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = flushAt;
  _swift_beginAccess(param_1 + flushAt,auStack_38,0,0);
  return *(long_long *)(param_1 + lVar1);
}



/* Address: 0x10010d958 | FUN_10010d958 */

undefined8 FUN_10010d958(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _TtC7PostHog17PostHogLogsConfig::flushAt;
  _swift_beginAccess(unaff_x20 + _TtC7PostHog17PostHogLogsConfig::flushAt,auStack_38,0,0);
  return *(undefined8 *)(unaff_x20 + lVar1);
}



/* Address: 0x10010d998 | _TtC7PostHog17PostHogLogsConfig::setFlushAt: */

/* Function Stack Size: 0x18 bytes */

void _TtC7PostHog17PostHogLogsConfig::setFlushAt_(ID param_1,SEL param_2,long_long param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = flushAt;
  _swift_beginAccess(param_1 + flushAt,auStack_48,1,0);
  *(long_long *)(param_1 + lVar1) = param_3;
  return;
}



/* Address: 0x10010d9e8 | FUN_10010d9e8 */

void FUN_10010d9e8(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _TtC7PostHog17PostHogLogsConfig::flushAt;
  _swift_beginAccess(unaff_x20 + _TtC7PostHog17PostHogLogsConfig::flushAt,auStack_48,1,0);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  return;
}



/* Address: 0x10010da34 | FUN_10010da34 */

undefined1  [16] FUN_10010da34(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _TtC7PostHog17PostHogLogsConfig::flushAt;
  _swift_beginAccess(unaff_x20 + _TtC7PostHog17PostHogLogsConfig::flushAt,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = _swift_endAccess;
  return auVar2;
}



/* Address: 0x10010da74 | _TtC7PostHog17PostHogLogsConfig::maxBatchSize */

/* Function Stack Size: 0x10 bytes */

long_long _TtC7PostHog17PostHogLogsConfig::maxBatchSize(ID param_1,SEL param_2)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = maxBatchSize;
  _swift_beginAccess(param_1 + maxBatchSize,auStack_38,0,0);
  return *(long_long *)(param_1 + lVar1);
}



/* Address: 0x10010dab8 | FUN_10010dab8 */

undefined8 FUN_10010dab8(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _TtC7PostHog17PostHogLogsConfig::maxBatchSize;
  _swift_beginAccess(unaff_x20 + _TtC7PostHog17PostHogLogsConfig::maxBatchSize,auStack_38,0,0);
  return *(undefined8 *)(unaff_x20 + lVar1);
}



/* Address: 0x10010daf8 | _TtC7PostHog17PostHogLogsConfig::setMaxBatchSize: */

/* Function Stack Size: 0x18 bytes */

void _TtC7PostHog17PostHogLogsConfig::setMaxBatchSize_(ID param_1,SEL param_2,long_long param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = maxBatchSize;
  _swift_beginAccess(param_1 + maxBatchSize,auStack_48,1,0);
  *(long_long *)(param_1 + lVar1) = param_3;
  return;
}



/* Address: 0x10010db48 | FUN_10010db48 */

void FUN_10010db48(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _TtC7PostHog17PostHogLogsConfig::maxBatchSize;
  _swift_beginAccess(unaff_x20 + _TtC7PostHog17PostHogLogsConfig::maxBatchSize,auStack_48,1,0);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  return;
}



/* Address: 0x10010db94 | FUN_10010db94 */

undefined1  [16] FUN_10010db94(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _TtC7PostHog17PostHogLogsConfig::maxBatchSize;
  _swift_beginAccess(unaff_x20 + _TtC7PostHog17PostHogLogsConfig::maxBatchSize,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = _swift_endAccess;
  return auVar2;
}



/* Address: 0x10010dbd4 | _TtC7PostHog17PostHogLogsConfig::serviceName */

/* Function Stack Size: 0x10 bytes */

ID _TtC7PostHog17PostHogLogsConfig::serviceName(ID param_1,SEL param_2)

{
  FUN_10010dc50(param_1,param_2,&serviceName);
  return param_1;
}



/* Address: 0x10010dbe0 | FUN_10010dbe0 */

void FUN_10010dbe0(void)

{
  FUN_10010b53c(&_TtC7PostHog17PostHogLogsConfig::serviceName);
  return;
}



/* Address: 0x10010dbec | _TtC7PostHog17PostHogLogsConfig::setServiceName: */

/* Function Stack Size: 0x18 bytes */

void _TtC7PostHog17PostHogLogsConfig::setServiceName_(ID param_1,SEL param_2,ID param_3)

{
  FUN_10010dccc();
  return;
}



/* Address: 0x10010dbf8 | FUN_10010dbf8 */

void FUN_10010dbf8(undefined8 param_1,undefined8 param_2)

{
  FUN_10010b61c(param_1,param_2,&_TtC7PostHog17PostHogLogsConfig::serviceName);
  return;
}



/* Address: 0x10010dc04 | FUN_10010dc04 */

undefined1  [16] FUN_10010dc04(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _TtC7PostHog17PostHogLogsConfig::serviceName;
  _swift_beginAccess(unaff_x20 + _TtC7PostHog17PostHogLogsConfig::serviceName,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = _swift_endAccess;
  return auVar2;
}



/* Address: 0x10010dc44 | _TtC7PostHog17PostHogLogsConfig::serviceVersion */

/* Function Stack Size: 0x10 bytes */

ID _TtC7PostHog17PostHogLogsConfig::serviceVersion(ID param_1,SEL param_2)

{
  FUN_10010dc50(param_1,param_2,&serviceVersion);
  return param_1;
}



/* Address: 0x10010dc50 | FUN_10010dc50 */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

NSString * FUN_10010dc50(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  NSString *pNVar2;
  long lVar3;
  undefined1 auStack_38 [24];
  
  lVar3 = *param_3;
  _swift_beginAccess(param_1 + lVar3,auStack_38,0,0);
  uVar1 = *(undefined8 *)(param_1 + lVar3 + 8);
  _swift_bridgeObjectRetain(uVar1);
  pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(uVar1);
  return pNVar2;
}



/* Address: 0x10010dcb4 | FUN_10010dcb4 */

void FUN_10010dcb4(void)

{
  FUN_10010b53c(&_TtC7PostHog17PostHogLogsConfig::serviceVersion);
  return;
}



/* Address: 0x10010dcc0 | _TtC7PostHog17PostHogLogsConfig::setServiceVersion: */

/* Function Stack Size: 0x18 bytes */

void _TtC7PostHog17PostHogLogsConfig::setServiceVersion_(ID param_1,SEL param_2,ID param_3)

{
  FUN_10010dccc();
  return;
}



/* Address: 0x10010dccc | FUN_10010dccc */

void FUN_10010dccc(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  String *pSVar1;
  String SVar2;
  undefined1 auStack_48 [24];
  
  SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pSVar1 = (String *)(param_1 + *param_4);
  _swift_beginAccess(pSVar1,auStack_48,1,0);
  *pSVar1 = SVar2;
  _swift_bridgeObjectRelease(pSVar1->bridgeObject);
  return;
}



/* Address: 0x10010dd34 | FUN_10010dd34 */

void FUN_10010dd34(undefined8 param_1,undefined8 param_2)

{
  FUN_10010b61c(param_1,param_2,&_TtC7PostHog17PostHogLogsConfig::serviceVersion);
  return;
}



/* Address: 0x10010dd40 | FUN_10010dd40 */

undefined1  [16] FUN_10010dd40(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _TtC7PostHog17PostHogLogsConfig::serviceVersion;
  _swift_beginAccess(unaff_x20 + _TtC7PostHog17PostHogLogsConfig::serviceVersion,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = _swift_endAccess;
  return auVar2;
}



/* Address: 0x10010dd80 | _TtC7PostHog17PostHogLogsConfig::environment */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC7PostHog17PostHogLogsConfig::environment(ID param_1,SEL param_2)

{
  NSString *pNVar1;
  long lVar2;
  undefined1 auStack_38 [24];
  
  lVar2 = param_1 + environment;
  _swift_beginAccess(lVar2,auStack_38,0,0);
  lVar2 = *(long *)(lVar2 + 8);
  if (lVar2 == 0) {
    pNVar1 = (NSString *)0x0;
  }
  else {
    _swift_bridgeObjectRetain(lVar2);
    pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(lVar2);
  }
  return (ID)pNVar1;
}



/* Address: 0x10010ddf8 | FUN_10010ddf8 */

undefined1  [16] FUN_10010ddf8(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + _TtC7PostHog17PostHogLogsConfig::environment);
  _swift_beginAccess(pauVar1,auStack_38,0,0);
  auVar2 = *pauVar1;
  _swift_bridgeObjectRetain(*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Address: 0x10010de4c | _TtC7PostHog17PostHogLogsConfig::setEnvironment: */

/* Function Stack Size: 0x18 bytes */

void _TtC7PostHog17PostHogLogsConfig::setEnvironment_(ID param_1,SEL param_2,ID param_3)

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
  pSVar1 = (String *)(param_1 + environment);
  _swift_beginAccess(pSVar1,auStack_48,1,0);
  *pSVar1 = SVar2;
  _swift_bridgeObjectRelease(pSVar1->bridgeObject);
  return;
}



/* Address: 0x10010dec4 | FUN_10010dec4 */

void FUN_10010dec4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _TtC7PostHog17PostHogLogsConfig::environment);
  _swift_beginAccess(puVar1,auStack_48,1,0);
  uVar2 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Address: 0x10010df20 | FUN_10010df20 */

undefined1  [16] FUN_10010df20(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _TtC7PostHog17PostHogLogsConfig::environment;
  _swift_beginAccess(unaff_x20 + _TtC7PostHog17PostHogLogsConfig::environment,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = _swift_endAccess;
  return auVar2;
}



/* Address: 0x10010df60 | _TtC7PostHog17PostHogLogsConfig::resourceAttributes */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC7PostHog17PostHogLogsConfig::resourceAttributes(ID param_1,SEL param_2)

{
  long lVar1;
  NSDictionary *pNVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  lVar1 = resourceAttributes;
  _swift_beginAccess(param_1 + resourceAttributes,auStack_38,0,0);
  uVar3 = *(undefined8 *)(param_1 + lVar1);
  _swift_bridgeObjectRetain(uVar3);
  pNVar2 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(uVar3);
  return (ID)pNVar2;
}



/* Address: 0x10010dfdc | FUN_10010dfdc */

void FUN_10010dfdc(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _TtC7PostHog17PostHogLogsConfig::resourceAttributes;
  _swift_beginAccess(unaff_x20 + _TtC7PostHog17PostHogLogsConfig::resourceAttributes,auStack_38,0,0)
  ;
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + lVar1));
  return;
}



/* Address: 0x10010e020 | _TtC7PostHog17PostHogLogsConfig::setResourceAttributes: */

/* Function Stack Size: 0x18 bytes */

void _TtC7PostHog17PostHogLogsConfig::setResourceAttributes_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  Dictionary<undefined,undefined> DVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  DVar2 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  lVar1 = resourceAttributes;
  _swift_beginAccess(param_1 + resourceAttributes,auStack_48,1,0);
  uVar3 = *(undefined8 *)(param_1 + lVar1);
  *(undefined **)(param_1 + lVar1) = DVar2.unknown;
  _swift_bridgeObjectRelease(uVar3);
  return;
}



/* Address: 0x10010e0a0 | FUN_10010e0a0 */

void FUN_10010e0a0(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _TtC7PostHog17PostHogLogsConfig::resourceAttributes;
  _swift_beginAccess(unaff_x20 + _TtC7PostHog17PostHogLogsConfig::resourceAttributes,auStack_48,1,0)
  ;
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Address: 0x10010e0f4 | FUN_10010e0f4 */

undefined1  [16] FUN_10010e0f4(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _TtC7PostHog17PostHogLogsConfig::resourceAttributes;
  _swift_beginAccess(unaff_x20 + _TtC7PostHog17PostHogLogsConfig::resourceAttributes,param_1,0x21,0)
  ;
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = _swift_endAccess;
  return auVar2;
}



/* Address: 0x10010e134 | _TtC7PostHog17PostHogLogsConfig::rateCapMaxLogs */

/* Function Stack Size: 0x10 bytes */

long_long _TtC7PostHog17PostHogLogsConfig::rateCapMaxLogs(ID param_1,SEL param_2)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = rateCapMaxLogs;
  _swift_beginAccess(param_1 + rateCapMaxLogs,auStack_38,0,0);
  return *(long_long *)(param_1 + lVar1);
}



/* Address: 0x10010e178 | FUN_10010e178 */

undefined8 FUN_10010e178(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _TtC7PostHog17PostHogLogsConfig::rateCapMaxLogs;
  _swift_beginAccess(unaff_x20 + _TtC7PostHog17PostHogLogsConfig::rateCapMaxLogs,auStack_38,0,0);
  return *(undefined8 *)(unaff_x20 + lVar1);
}



/* Address: 0x10010e1b8 | _TtC7PostHog17PostHogLogsConfig::setRateCapMaxLogs: */

/* Function Stack Size: 0x18 bytes */

void _TtC7PostHog17PostHogLogsConfig::setRateCapMaxLogs_(ID param_1,SEL param_2,long_long param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = rateCapMaxLogs;
  _swift_beginAccess(param_1 + rateCapMaxLogs,auStack_48,1,0);
  *(long_long *)(param_1 + lVar1) = param_3;
  return;
}



/* Address: 0x10010e208 | FUN_10010e208 */

void FUN_10010e208(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _TtC7PostHog17PostHogLogsConfig::rateCapMaxLogs;
  _swift_beginAccess(unaff_x20 + _TtC7PostHog17PostHogLogsConfig::rateCapMaxLogs,auStack_48,1,0);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  return;
}



/* Address: 0x10010e254 | FUN_10010e254 */

undefined1  [16] FUN_10010e254(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _TtC7PostHog17PostHogLogsConfig::rateCapMaxLogs;
  _swift_beginAccess(unaff_x20 + _TtC7PostHog17PostHogLogsConfig::rateCapMaxLogs,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = _swift_endAccess;
  return auVar2;
}


