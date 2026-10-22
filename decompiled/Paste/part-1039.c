/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100b369bc | SentryHttpTransport::recordLostLogBytes:reason: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void SentryHttpTransport::recordLostLogBytes_reason_
               (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = objc_stub::FUN_100c065e0((ID)&objc::class_t::_TtC6Sentry23SentryEnvelopeItemTypes);
  IVar2 = objc_stub::type(param_3);
  IVar1 = objc_stub::isEqualToString_(IVar1,IVar2);
  if ((int)IVar1 != 0) {
    IVar1 = objc_stub::data(param_3);
    IVar1 = objc_stub::length(IVar1);
    objc_stub::recordLostEvent_reason_quantity_(param_1,0xf,param_4,IVar1);
  }
  return;
}



/* Address: 0x100b36a84 | SentryHttpTransport::recordLostTraceMetricBytes:reason: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void SentryHttpTransport::recordLostTraceMetricBytes_reason_
               (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = objc_stub::FUN_100c10980((ID)&objc::class_t::_TtC6Sentry23SentryEnvelopeItemTypes);
  IVar2 = objc_stub::type(param_3);
  IVar1 = objc_stub::isEqualToString_(IVar1,IVar2);
  if ((int)IVar1 != 0) {
    IVar1 = objc_stub::data(param_3);
    IVar1 = objc_stub::length(IVar1);
    objc_stub::recordLostEvent_reason_quantity_(param_1,0x10,param_4,IVar1);
  }
  return;
}



/* Address: 0x100b36b4c | SentryHttpTransport::recordLostSpans:reason: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void SentryHttpTransport::recordLostSpans_reason_
               (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = objc_stub::FUN_100c10a80((ID)&objc::class_t::_TtC6Sentry23SentryEnvelopeItemTypes);
  IVar2 = objc_stub::type(param_3);
  IVar1 = objc_stub::isEqualToString_(IVar1,IVar2);
  if (((int)IVar1 != 0) && (IVar1 = objc_stub::data(param_3), IVar1 != 0)) {
    IVar1 = objc_stub::data(param_3);
    IVar1 = objc_stub::FUN_100c01100((ID)&objc::class_t::SentrySerialization,IVar1);
    if (IVar1 != 0) {
      IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_spans);
      if (IVar1 == 0) {
        IVar1 = objc_stub::array((ID)&_OBJC_CLASS___NSArray);
      }
      IVar1 = objc_stub::count(IVar1);
      objc_stub::recordLostEvent_reason_quantity_(param_1,0xb,param_4,IVar1 + 1);
    }
  }
  return;
}



/* Address: 0x100b36cb0 | SentryHttpTransport::cachedEnvelopeSendDelay */

/* Function Stack Size: 0x10 bytes */

double SentryHttpTransport::cachedEnvelopeSendDelay(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + 0x10);
}



/* Address: 0x100b36cb8 | SentryHttpTransport::fileManager */

/* Function Stack Size: 0x10 bytes */

ID SentryHttpTransport::fileManager(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x18);
}



/* Address: 0x100b36cc0 | SentryHttpTransport::setFileManager: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryHttpTransport::setFileManager_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x18) = param_3;
  return;
}



/* Address: 0x100b36ccc | SentryHttpTransport::requestManager */

/* Function Stack Size: 0x10 bytes */

ID SentryHttpTransport::requestManager(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x20);
}



/* Address: 0x100b36cd4 | SentryHttpTransport::setRequestManager: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryHttpTransport::setRequestManager_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x20) = param_3;
  return;
}



/* Address: 0x100b36ce0 | SentryHttpTransport::requestBuilder */

/* Function Stack Size: 0x10 bytes */

ID SentryHttpTransport::requestBuilder(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x28);
}



/* Address: 0x100b36ce8 | SentryHttpTransport::setRequestBuilder: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryHttpTransport::setRequestBuilder_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x28) = param_3;
  return;
}



/* Address: 0x100b36cf4 | SentryHttpTransport::dsn */

/* Function Stack Size: 0x10 bytes */

ID SentryHttpTransport::dsn(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x30);
}



/* Address: 0x100b36cfc | SentryHttpTransport::setDsn: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryHttpTransport::setDsn_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x30) = param_3;
  return;
}



/* Address: 0x100b36d08 | SentryHttpTransport::sendClientReports */

/* Function Stack Size: 0x10 bytes */

bool SentryHttpTransport::sendClientReports(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + 8);
}



/* Address: 0x100b36d10 | SentryHttpTransport::setSendClientReports: */

/* Function Stack Size: 0x14 bytes */

void SentryHttpTransport::setSendClientReports_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + 8) = (char)param_3;
  return;
}



/* Address: 0x100b36d18 | SentryHttpTransport::rateLimits */

/* Function Stack Size: 0x10 bytes */

ID SentryHttpTransport::rateLimits(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x38);
}



/* Address: 0x100b36d20 | SentryHttpTransport::setRateLimits: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryHttpTransport::setRateLimits_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x38) = param_3;
  return;
}



/* Address: 0x100b36d2c | SentryHttpTransport::envelopeRateLimit */

/* Function Stack Size: 0x10 bytes */

ID SentryHttpTransport::envelopeRateLimit(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x40);
}



/* Address: 0x100b36d34 | SentryHttpTransport::setEnvelopeRateLimit: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryHttpTransport::setEnvelopeRateLimit_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x40) = param_3;
  return;
}



/* Address: 0x100b36d40 | SentryHttpTransport::dispatchQueue */

/* Function Stack Size: 0x10 bytes */

ID SentryHttpTransport::dispatchQueue(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x48);
}



/* Address: 0x100b36d48 | SentryHttpTransport::setDispatchQueue: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryHttpTransport::setDispatchQueue_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x48) = param_3;
  return;
}



/* Address: 0x100b36d54 | SentryHttpTransport::dispatchGroup */

/* Function Stack Size: 0x10 bytes */

ID SentryHttpTransport::dispatchGroup(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x50);
}



/* Address: 0x100b36d5c | SentryHttpTransport::setDispatchGroup: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryHttpTransport::setDispatchGroup_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x50) = param_3;
  return;
}



/* Address: 0x100b36d68 | SentryHttpTransport::dateProvider */

/* Function Stack Size: 0x10 bytes */

ID SentryHttpTransport::dateProvider(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x58);
}



/* Address: 0x100b36d70 | SentryHttpTransport::setDateProvider: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryHttpTransport::setDateProvider_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x58) = param_3;
  return;
}



/* Address: 0x100b36d7c | SentryHttpTransport::reachability */

/* Function Stack Size: 0x10 bytes */

ID SentryHttpTransport::reachability(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x60);
}



/* Address: 0x100b36d84 | SentryHttpTransport::setReachability: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryHttpTransport::setReachability_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x60) = param_3;
  return;
}



/* Address: 0x100b36d90 | SentryHttpTransport::discardedEvents */

/* Function Stack Size: 0x10 bytes */

ID SentryHttpTransport::discardedEvents(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x68);
}



/* Address: 0x100b36d98 | SentryHttpTransport::setDiscardedEvents: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryHttpTransport::setDiscardedEvents_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x68) = param_3;
  return;
}



/* Address: 0x100b36da4 | SentryHttpTransport::notStoredEnvelopes */

/* Function Stack Size: 0x10 bytes */

ID SentryHttpTransport::notStoredEnvelopes(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x70);
}



/* Address: 0x100b36dac | SentryHttpTransport::setNotStoredEnvelopes: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryHttpTransport::setNotStoredEnvelopes_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x70) = param_3;
  return;
}



/* Address: 0x100b36db8 | SentryHttpTransport::isSending */

/* Function Stack Size: 0x10 bytes */

bool SentryHttpTransport::isSending(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 9) & 1;
}



/* Address: 0x100b36dc4 | SentryHttpTransport::setIsSending: */

/* Function Stack Size: 0x14 bytes */

void SentryHttpTransport::setIsSending_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + 9) = (char)param_3;
  return;
}



/* Address: 0x100b36dcc | SentryHttpTransport::isFlushing */

/* Function Stack Size: 0x10 bytes */

bool SentryHttpTransport::isFlushing(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 10) & 1;
}



/* Address: 0x100b36dd8 | SentryHttpTransport::setIsFlushing: */

/* Function Stack Size: 0x14 bytes */

void SentryHttpTransport::setIsFlushing_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + 10) = (char)param_3;
  return;
}



/* Address: 0x100b36de0 | SentryHttpTransport::.cxx_destruct */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryHttpTransport::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



/* Address: 0x100b36e88 | FUN_100b36e88 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */

void FUN_100b36e88(undefined8 param_1)

{
  DAT_1010e2c88 = param_1;
  return;
}



/* Address: 0x100b36e98 | FUN_100b36e98 */

undefined ** FUN_100b36e98(void)

{
  return &PTR_FUN_100ffa920;
}



/* Address: 0x100b36ea4 | FUN_100b36ea4 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

char * FUN_100b36ea4(char *param_1)

{
  uint uVar1;
  int iVar2;
  ID self;
  char *pcVar3;
  
  uVar1 = (uint)param_1;
  if (DAT_1010e2c90 == uVar1) {
    return param_1;
  }
  DAT_1010e2c90 = (byte)param_1;
  FUN_100b3a1c0();
  if (uVar1 != 0) {
    if ((int)param_1 != 0) {
      param_1 = 
      "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Monitors/SentryCrashMonitor_NSException.m"
      ;
      FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Monitors/SentryCrashMonitor_NSException.m"
                    ,0x84,&cf_Backinguporiginalhandler_);
    }
    _NSGetUncaughtExceptionHandler();
    DAT_1010e2c98 = param_1;
    FUN_100b3a1c0();
    if ((int)param_1 != 0) {
      FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Monitors/SentryCrashMonitor_NSException.m"
                    ,0x87,&cf_Settingnewhandler_);
    }
    iVar2 = 0xb36fc8;
    _NSSetUncaughtExceptionHandler();
    if ((DAT_1010e2c88 == 0) && (FUN_100b3a1e0(), iVar2 != 0)) {
      FUN_100b3a280("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Monitors/SentryCrashMonitor_NSException.m"
                    ,0x8b,&cf_Bridgeisnil_uncaughtExceptionHandlerwillnotbesetonthecrashreporter_);
    }
    self = objc_stub::crashReporter(DAT_1010e2c88);
    objc_stub::setUncaughtExceptionHandler_(self,FUN_100b36fc8);
    return (char *)0x0;
  }
  if ((int)param_1 != 0) {
    FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Monitors/SentryCrashMonitor_NSException.m"
                  ,0x8f,&cf_Restoringoriginalhandler_);
  }
  pcVar3 = DAT_1010e2c98;
  _NSSetUncaughtExceptionHandler(DAT_1010e2c98);
  return pcVar3;
}



/* Address: 0x100b36fbc | FUN_100b36fbc */

undefined1 FUN_100b36fbc(void)

{
  return DAT_1010e2c90;
}



/* Address: 0x100b36fc8 | FUN_100b36fc8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b36fc8(ID param_1)

{
  int iVar1;
  undefined1 *puVar2;
  ID IVar3;
  undefined1 auStack_8c0 [868];
  undefined4 local_55c;
  undefined8 local_558;
  undefined1 auStack_54d [1232];
  undefined1 auStack_7d [37];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_100ea82f0;
  IVar3 = param_1;
  FUN_100b3a1c0();
  if ((int)IVar3 != 0) {
    FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Monitors/SentryCrashMonitor_NSException.m"
                  ,0x42,&cf_Trappedexception__);
  }
  if (DAT_1010e2c90 == '\x01') {
    local_558 = 0;
    local_55c = 0;
    iVar1 = 0;
    FUN_100b26c88(0,&local_558,&local_55c);
    FUN_100b3a1c0();
    if (iVar1 != 0) {
      FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Monitors/SentryCrashMonitor_NSException.m"
                    ,0x4a,&cf_Fillingoutcontext_);
    }
    FUN_100b34cd4(auStack_7d);
    FUN_100b40bac();
    FUN_100b5100c();
    puVar2 = auStack_8c0;
    FUN_100b4e8e4(puVar2,param_1);
    _DAT_1010e2cb8 = 0;
    DAT_1010e2cd0 = 0;
    DAT_1010e2cc8 = 0;
    uRam00000001010e2ce0 = 0;
    DAT_1010e2cd8 = (undefined1 *)0x0;
    uRam00000001010e2cf0 = 0;
    _DAT_1010e2ce8 = 0;
    DAT_1010e2d00 = 0;
    DAT_1010e2cf8 = 0;
    uRam00000001010e2d10 = 0;
    _DAT_1010e2d08 = 0;
    uRam00000001010e2d20 = 0;
    _DAT_1010e2d18 = 0;
    uRam00000001010e2d30 = 0;
    _DAT_1010e2d28 = 0;
    uRam00000001010e2d40 = 0;
    _DAT_1010e2d38 = 0;
    uRam00000001010e2d50 = 0;
    _DAT_1010e2d48 = 0;
    uRam00000001010e2d60 = 0;
    _DAT_1010e2d58 = 0;
    uRam00000001010e2d70 = 0;
    _DAT_1010e2d68 = 0;
    uRam00000001010e2d80 = 0;
    _DAT_1010e2d78 = 0;
    uRam00000001010e2d90 = 0;
    _DAT_1010e2d88 = 0;
    uRam00000001010e2da0 = 0;
    _DAT_1010e2d98 = 0;
    DAT_1010e2e58 = 0;
    _DAT_1010e2ca8 = 0;
    uRam00000001010e2db0 = 0;
    _DAT_1010e2da8 = 0;
    uRam00000001010e2dc0 = 0;
    _DAT_1010e2db8 = 0;
    uRam00000001010e2dd0 = 0;
    _DAT_1010e2dc8 = 0;
    uRam00000001010e2de0 = 0;
    _DAT_1010e2dd8 = 0;
    uRam00000001010e2df0 = 0;
    _DAT_1010e2de8 = 0;
    uRam00000001010e2e00 = 0;
    _DAT_1010e2df8 = 0;
    uRam00000001010e2e10 = 0;
    _DAT_1010e2e08 = 0;
    uRam00000001010e2e20 = 0;
    _DAT_1010e2e18 = 0;
    uRam00000001010e2e30 = 0;
    _DAT_1010e2e28 = 0;
    uRam00000001010e2e40 = 0;
    _DAT_1010e2e38 = 0;
    uRam00000001010e2e50 = 0;
    _DAT_1010e2e48 = 0;
    _DAT_1010e2cc0 = 8;
    DAT_1010e2ca0 = auStack_7d;
    DAT_1010e2cb0 = auStack_54d;
    IVar3 = objc_stub::name(param_1);
    _objc_retainAutorelease();
    DAT_1010e2cf8 = objc_stub::UTF8String(IVar3);
    objc_stub::userInfo(param_1);
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf___);
    _objc_retainAutorelease();
    DAT_1010e2d00 = objc_stub::UTF8String(IVar3);
    DAT_1010e2cc8 = DAT_1010e2cf8;
    IVar3 = objc_stub::reason(param_1);
    _objc_retainAutorelease();
    DAT_1010e2cd0 = objc_stub::UTF8String(IVar3);
    iVar1 = 0;
    DAT_1010e2cd8 = auStack_8c0;
    FUN_100b3a1c0();
    if (iVar1 != 0) {
      FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Monitors/SentryCrashMonitor_NSException.m"
                    ,0x61,&cf_Callingmaincrashhandler_);
    }
    iVar1 = 0x10e2ca0;
    FUN_100b26d44();
    if (puVar2 != (undefined1 *)0x0) {
      _free(puVar2);
      iVar1 = (int)puVar2;
    }
    if (DAT_1010e2c98 != (code *)0x0) {
      FUN_100b3a1c0();
      if (iVar1 != 0) {
        FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Monitors/SentryCrashMonitor_NSException.m"
                      ,0x68,&cf_Callingoriginalexceptionhandler_);
      }
      (*DAT_1010e2c98)(param_1);
    }
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}



/* Address: 0x100b37288 | SentrySwizzleWrapperHelper::swizzleInstanceMethod:inClass:mode:key:factory: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x38 bytes */

bool SentrySwizzleWrapperHelper::swizzleInstanceMethod_inClass_mode_key_factory_
               (ID param_1,SEL param_2,SEL param_3,CLASS param_4,unsigned_long_long param_5,
               const_void__ param_6,ID param_7,uint param_8)

{
  ID IVar1;
  undefined *local_68;
  undefined8 local_60;
  code *local_58;
  undefined *puStack_50;
  ID local_48;
  
  local_68 = PTR___NSConcreteStackBlock_100ea82a0;
  local_60 = 0xc2000000;
  local_58 = FUN_100b37344;
  puStack_50 = &DAT_100f34b08;
  local_48 = param_7;
  IVar1 = objc_stub::swizzleInstanceMethod_inClass_newImpFactory_mode_key_
                    ((ID)&objc::class_t::SentrySwizzle,param_3,param_4,&local_68,param_5,param_6,
                     (ulong)param_8);
  return (bool)IVar1;
}



/* Address: 0x100b37344 | FUN_100b37344 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

long FUN_100b37344(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *local_58;
  undefined8 local_50;
  code *local_48;
  undefined *puStack_40;
  undefined8 local_38;
  
  local_58 = PTR___NSConcreteStackBlock_100ea82a0;
  local_50 = 0xc2000000;
  local_48 = FUN_100b373f4;
  puStack_40 = &DAT_100f34ad8;
  lVar1 = *(long *)(param_1 + 0x20);
  local_38 = param_2;
  (**(code **)(lVar1 + 0x10))(lVar1,&local_58);
  return lVar1;
}



/* Address: 0x100b373f4 | FUN_100b373f4 */

void FUN_100b373f4(long param_1)

{
  objc_stub::getOriginalImplementation(*(ID *)(param_1 + 0x20));
  return;
}



/* Address: 0x100b373fc | FUN_100b373fc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID FUN_100b373fc(undefined8 param_1,ID param_2,undefined8 param_3,undefined8 param_4,ID param_5)

{
  class_t *self;
  ID self_00;
  ID IVar1;
  ID IVar2;
  ID self_01;
  
  self = &objc::class_t::_TtC6Sentry12SentrySample;
  _objc_alloc();
  self_00 = objc_stub::init((ID)self);
  objc_stub::FUN_100c0a3c0(self_00,param_3);
  objc_stub::FUN_100c0a380(self_00,param_1);
  objc_stub::FUN_100c0e1a0(self_00,param_4);
  IVar1 = objc_stub::FUN_100bff8a0(param_2,&cf__);
  IVar2 = objc_stub::FUN_100c0f160(param_5);
  IVar2 = objc_stub::objectForKeyedSubscript_(IVar2,IVar1);
  if (IVar2 == 0) {
    IVar2 = objc_stub::FUN_100c0f1e0(param_5);
    IVar2 = objc_stub::count(IVar2);
    IVar2 = objc_stub::numberWithUnsignedInteger_((ID)&_OBJC_CLASS___NSNumber,IVar2);
    objc_stub::FUN_100c0dce0(self_00,IVar2);
    self_01 = objc_stub::FUN_100c0f160(param_5);
    objc_stub::setObject_forKeyedSubscript_(self_01,IVar2,IVar1);
    IVar1 = objc_stub::FUN_100c0f1e0(param_5);
    objc_stub::addObject_(IVar1,param_2);
  }
  else {
    objc_stub::FUN_100c0dce0(self_00,IVar2);
  }
  return self_00;
}



/* Address: 0x100b375b0 | SentrySDKInternal::initialize */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SentrySDKInternal::initialize(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  ID IVar3;
  
  IVar1 = objc_stub::class((ID)&objc::class_t::SentrySDKInternal);
  if (IVar1 == param_1) {
    puVar2 = &_OBJC_CLASS___NSObject;
    _objc_alloc();
    IVar3 = objc_stub::init((ID)puVar2);
    IVar1 = DAT_1010e2e68;
    puVar2 = &_OBJC_CLASS___NSObject;
    DAT_1010e2e68 = IVar3;
    _objc_alloc(IVar1);
    DAT_1010e2e70 = objc_stub::init((ID)puVar2);
    DAT_1010e2e78 = 0;
    DAT_1010e2e80 = 0;
  }
  return;
}



/* Address: 0x100b37634 | SentrySDKInternal::currentHub */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentrySDKInternal::currentHub(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  ID IVar2;
  class_t *self;
  
  uVar1 = DAT_1010e2e70;
  _objc_sync_enter();
  if (DAT_1010e2e88 == 0) {
    self = &objc::class_t::SentryHubInternal;
    _objc_alloc();
    DAT_1010e2e88 = objc_stub::initWithClient_andScope_((ID)self,0,0);
  }
  IVar2 = DAT_1010e2e88;
  _objc_sync_exit(uVar1);
  return IVar2;
}



/* Address: 0x100b376c8 | SentrySDKInternal::options */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentrySDKInternal::options(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = objc_stub::sharedInstance((ID)&objc::class_t::_TtC6Sentry25SentryDependencyContainer);
  IVar1 = objc_stub::FUN_100c0f460(IVar1);
  return IVar1;
}



/* Address: 0x100b37714 | SentrySDKInternal::setCurrentHub: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentrySDKInternal::setCurrentHub_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  
  uVar1 = DAT_1010e2e70;
  _objc_sync_enter();
  DAT_1010e2e88 = param_3;
  _objc_sync_exit(uVar1);
  return;
}



/* Address: 0x100b37788 | SentrySDKInternal::setStartOptions: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentrySDKInternal::setStartOptions_(ID param_1,SEL param_2,ID param_3)

{
  ID self;
  
  self = objc_stub::sharedInstance((ID)&objc::class_t::_TtC6Sentry25SentryDependencyContainer);
  objc_stub::FUN_100c0dda0(self,param_3);
  return;
}



/* Address: 0x100b377dc | SentrySDKInternal::span */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentrySDKInternal::span(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  ID IVar2;
  
  uVar1 = DAT_1010e2e70;
  _objc_sync_enter();
  IVar2 = DAT_1010e2e88;
  _objc_sync_exit(uVar1);
  IVar2 = objc_stub::scope(IVar2);
  IVar2 = objc_stub::FUN_100c0efc0(IVar2);
  return IVar2;
}



/* Address: 0x100b37864 | SentrySDKInternal::isEnabled */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

bool SentrySDKInternal::isEnabled(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  ID IVar2;
  bool bVar3;
  
  uVar1 = DAT_1010e2e70;
  _objc_sync_enter();
  IVar2 = DAT_1010e2e88;
  _objc_sync_exit(uVar1);
  if (IVar2 == 0) {
    bVar3 = 0;
  }
  else {
    IVar2 = objc_stub::getClient(IVar2);
    bVar3 = (bool)(IVar2 != 0);
  }
  return bVar3;
}



/* Address: 0x100b378e4 | SentrySDKInternal::lastRunStatusCalled */

/* Function Stack Size: 0x10 bytes */

bool SentrySDKInternal::lastRunStatusCalled(ID param_1,SEL param_2)

{
  return (bool)DAT_1010e2e90;
}



/* Address: 0x100b378f0 | SentrySDKInternal::setLastRunStatusCalled: */

/* Function Stack Size: 0x14 bytes */

void SentrySDKInternal::setLastRunStatusCalled_(ID param_1,SEL param_2,bool param_3)

{
  DAT_1010e2e90 = (char)param_3;
  return;
}



/* Address: 0x100b378fc | SentrySDKInternal::crashReporterInstalled */

/* Function Stack Size: 0x10 bytes */

bool SentrySDKInternal::crashReporterInstalled(ID param_1,SEL param_2)

{
  return (bool)DAT_1010e2e91;
}



/* Address: 0x100b37908 | SentrySDKInternal::setCrashReporterInstalled: */

/* Function Stack Size: 0x14 bytes */

void SentrySDKInternal::setCrashReporterInstalled_(ID param_1,SEL param_2,bool param_3)

{
  DAT_1010e2e91 = (char)param_3;
  return;
}



/* Address: 0x100b37914 | SentrySDKInternal::fatalDetected */

/* Function Stack Size: 0x10 bytes */

bool SentrySDKInternal::fatalDetected(ID param_1,SEL param_2)

{
  return (bool)DAT_1010e2e92;
}



/* Address: 0x100b37920 | SentrySDKInternal::setFatalDetected: */

/* Function Stack Size: 0x14 bytes */

void SentrySDKInternal::setFatalDetected_(ID param_1,SEL param_2,bool param_3)

{
  DAT_1010e2e92 = (char)param_3;
  return;
}



/* Address: 0x100b3792c | SentrySDKInternal::setAppStartMeasurement: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

void SentrySDKInternal::setAppStartMeasurement_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  ID IVar2;
  
  uVar1 = DAT_1010e2e68;
  _objc_sync_enter();
  DAT_1010e2e98 = param_3;
  _objc_sync_exit(uVar1);
  IVar2 = objc_stub::FUN_100c07620((ID)&objc::class_t::PrivateSentrySDKOnly);
  if (IVar2 != 0) {
    IVar2 = objc_stub::FUN_100c07620((ID)&objc::class_t::PrivateSentrySDKOnly);
    (**(code **)(IVar2 + 0x10))(IVar2,param_3);
  }
  return;
}



/* Address: 0x100b379dc | SentrySDKInternal::getAppStartMeasurement */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentrySDKInternal::getAppStartMeasurement(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  ID IVar2;
  
  uVar1 = DAT_1010e2e68;
  _objc_sync_enter();
  IVar2 = DAT_1010e2e98;
  _objc_sync_exit(uVar1);
  return IVar2;
}



/* Address: 0x100b37a2c | SentrySDKInternal::startInvocations */

/* Function Stack Size: 0x10 bytes */

unsigned_long_long SentrySDKInternal::startInvocations(ID param_1,SEL param_2)

{
  return DAT_1010e2e78;
}



/* Address: 0x100b37a38 | SentrySDKInternal::setStartInvocations: */

/* Function Stack Size: 0x18 bytes */

void SentrySDKInternal::setStartInvocations_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  DAT_1010e2e78 = param_3;
  return;
}



/* Address: 0x100b37a44 | SentrySDKInternal::startTimestamp */

/* WARNING: Function: _objc_retainAutoreleaseReturnValue replaced with injection: _objc_retain_fixup
    */
/* Function Stack Size: 0x10 bytes */

ID SentrySDKInternal::startTimestamp(ID param_1,SEL param_2)

{
  return DAT_1010e2e60;
}



/* Address: 0x100b37a50 | SentrySDKInternal::setStartTimestamp: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentrySDKInternal::setStartTimestamp_(ID param_1,SEL param_2,ID param_3)

{
  DAT_1010e2e60 = param_3;
  return;
}



/* Address: 0x100b37a60 | SentrySDKInternal::startWithOptions: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentrySDKInternal::startWithOptions_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  ID IVar2;
  ID IVar3;
  class_t *pcVar4;
  ID IVar5;
  undefined *local_78;
  undefined8 local_70;
  code *local_68;
  undefined *puStack_60;
  ID local_58;
  ID local_50;
  ID local_48;
  
  IVar2 = objc_stub::debug(param_3);
  IVar3 = objc_stub::FUN_100c01200(param_3);
  IVar2 = objc_stub::FUN_100bff9e0((ID)&objc::class_t::_TtC6Sentry19SentrySDKLogSupport,IVar2,IVar3)
  ;
  iVar1 = (int)IVar2;
  FUN_100b3a1c0();
  if (iVar1 != 0) {
    FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentrySDKInternal.m",
                  0xe2,&cf_StartingSDK___);
  }
  objc_stub::class((ID)&objc::class_t::SentryCrashExceptionApplication);
  objc_stub::class((ID)&objc::class_t::_TtC6Sentry28PlaceholderSentryApplication);
  objc_stub::class((ID)&objc::class_t::_TtC6Sentry27PlaceholderProcessInfoClass);
  DAT_1010e2e78 = DAT_1010e2e78 + 1;
  IVar2 = objc_stub::sharedInstance((ID)&objc::class_t::_TtC6Sentry25SentryDependencyContainer);
  IVar2 = objc_stub::FUN_100c00ac0(IVar2);
  DAT_1010e2e60 = objc_stub::date(IVar2);
  pcVar4 = &objc::class_t::SentryClientInternal;
  _objc_alloc();
  IVar2 = objc_stub::FUN_100c04740((ID)pcVar4,param_3);
  IVar3 = objc_stub::fileManager(IVar2);
  objc_stub::FUN_100c06f40(IVar3);
  IVar3 = objc_stub::fileManager(IVar2);
  objc_stub::FUN_100c06f60(IVar3);
  IVar3 = objc_stub::sharedInstance((ID)&objc::class_t::_TtC6Sentry25SentryDependencyContainer);
  IVar3 = objc_stub::FUN_100c09b80(IVar3);
  objc_stub::FUN_100c06f20(IVar3);
  IVar5 = objc_stub::FUN_100c052a0(param_3);
  pcVar4 = &objc::class_t::SentryScope;
  _objc_alloc();
  IVar3 = objc_stub::FUN_100c06a60(param_3);
  IVar3 = objc_stub::FUN_100c04520((ID)pcVar4,IVar3);
  (**(code **)(IVar5 + 0x10))(IVar5,IVar3);
  iVar1 = 0;
  FUN_100b3a1c0();
  if (iVar1 != 0) {
    FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentrySDKInternal.m",
                  0xfe,&cf_Dispatchinginitworkrequiredtorunonmainthread_);
  }
  IVar3 = objc_stub::sharedInstance((ID)&objc::class_t::_TtC6Sentry25SentryDependencyContainer);
  IVar3 = objc_stub::dispatchQueueWrapper(IVar3);
  local_78 = PTR___NSConcreteStackBlock_100ea82a0;
  local_70 = 0xc2000000;
  local_68 = FUN_100b37d94;
  puStack_60 = &DAT_100f348d8;
  local_58 = IVar2;
  local_50 = IVar5;
  local_48 = param_3;
  objc_stub::FUN_100c01380(IVar3,&local_78);
  iVar1 = 0;
  FUN_100b3a1c0();
  if (iVar1 != 0) {
    objc_stub::FUN_100c11340((ID)&objc::class_t::SentryMeta);
    FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentrySDKInternal.m",
                  0x123,&cf_SDKinitialized_Version___);
  }
  return;
}


