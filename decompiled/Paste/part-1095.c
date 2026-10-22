/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100b92af4 | FUN_100b92af4 */

void FUN_100b92af4(undefined8 param_1)

{
  String SVar1;
  
  SVar1 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  FUN_10021b704(SVar1.str,SVar1.bridgeObject);
  FUN_100b940c0();
  FUN_100b78d38(param_1);
  return;
}



/* Address: 0x100b92b30 | FUN_100b92b30 */

void FUN_100b92b30(undefined8 param_1,undefined8 param_2)

{
  FUN_100b92dd4(param_1,param_2,&SentryOptions::cacheDirectoryPath,
                PTR__swift_bridgeObjectRelease_100eae160);
  return;
}



/* Address: 0x100b92b44 | FUN_100b92b44 */

void FUN_100b92b44(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = SentryOptions::cacheDirectoryPath;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100b92b70 | SentryOptions::enableSpotlight */

/* Function Stack Size: 0x10 bytes */

bool SentryOptions::enableSpotlight(ID param_1,SEL param_2)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  FUN_100b92b94();
  return uVar1 & 1;
}



/* Address: 0x100b92b94 | FUN_100b92b94 */

void FUN_100b92b94(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = SentryOptions::enableSpotlight;
  FUN_100b78c58();
  FUN_100b6f9fc(*(undefined1 *)(unaff_x20 + lVar1));
  return;
}



/* Address: 0x100b92bbc | SentryOptions::setEnableSpotlight: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x14 bytes */

void SentryOptions::setEnableSpotlight_(ID param_1,SEL param_2,bool param_3)

{
  FUN_100b92bec(param_3);
  return;
}



/* Address: 0x100b92bec | FUN_100b92bec */

void FUN_100b92bec(undefined1 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = SentryOptions::enableSpotlight;
  FUN_100b78c6c();
  *(undefined1 *)(unaff_x20 + lVar1) = param_1;
  FUN_100b92c74();
  FUN_100b78c90();
  return;
}



/* Address: 0x100b92c20 | FUN_100b92c20 */

void FUN_100b92c20(undefined1 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = SentryOptions::enableSpotlight;
  lVar2 = *param_2;
  _swift_beginAccess(lVar2 + SentryOptions::enableSpotlight,auStack_48,0,0);
  *param_1 = *(undefined1 *)(lVar2 + lVar1);
  return;
}



/* Address: 0x100b92c74 | FUN_100b92c74 */

void FUN_100b92c74(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = SentryOptions::enableSpotlight;
  FUN_100b78c58();
  if (*(char *)(unaff_x20 + lVar1) == '\x01') {
    FUN_100b84dac(0);
    FUN_100b84df8(3,0xd000000000000062,0x8000000100dcc7b0,0xd000000000000048,0x8000000100dcc820,
                  0x285);
  }
  return;
}



/* Address: 0x100b92cf8 | FUN_100b92cf8 */

void FUN_100b92cf8(long param_1)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  *(long *)(param_1 + 0x18) = unaff_x20;
  lVar1 = SentryOptions::enableSpotlight;
  FUN_100b78c80();
  FUN_100b56e88(FUN_100b92d28,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100b92d28 | FUN_100b92d28 */

void FUN_100b92d28(undefined8 param_1,undefined8 param_2)

{
  FUN_100b92d34(param_1,param_2,FUN_100b92c74);
  return;
}



/* Address: 0x100b92d34 | FUN_100b92d34 */

void FUN_100b92d34(undefined8 param_1,ulong param_2,code *param_3)

{
  _swift_endAccess();
  if ((param_2 & 1) == 0) {
    (*param_3)();
  }
  FUN_100b56e60();
  return;
}



/* Address: 0x100b92d68 | SentryOptions::spotlightUrl */

/* Function Stack Size: 0x10 bytes */

ID SentryOptions::spotlightUrl(ID param_1,SEL param_2)

{
  FUN_100b92ab4(param_1,param_2,FUN_100b92d74);
  return param_1;
}



/* Address: 0x100b92d74 | FUN_100b92d74 */

void FUN_100b92d74(void)

{
  FUN_100b92d80(&SentryOptions::spotlightUrl);
  return;
}



/* Address: 0x100b92d80 | FUN_100b92d80 */

void FUN_100b92d80(long *param_1)

{
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  FUN_100b78ca0(unaff_x20 + *param_1,auStack_38);
  FUN_100b940e0();
  FUN_100b6fbdc();
  FUN_100b6f9fc();
  return;
}



/* Address: 0x100b92db4 | SentryOptions::setSpotlightUrl: */

/* Function Stack Size: 0x18 bytes */

void SentryOptions::setSpotlightUrl_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100b92af4();
  return;
}



/* Address: 0x100b92dc0 | FUN_100b92dc0 */

void FUN_100b92dc0(undefined8 param_1,undefined8 param_2)

{
  FUN_100b92dd4(param_1,param_2,&SentryOptions::spotlightUrl,
                PTR__swift_bridgeObjectRelease_100eae160);
  return;
}



/* Address: 0x100b92dd4 | FUN_100b92dd4 */

void FUN_100b92dd4(undefined8 param_1,undefined8 param_2,undefined8 *param_3,code *param_4)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  FUN_100b94070(*param_3);
  FUN_100b80d38();
  uVar1 = unaff_x20[1];
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  (*param_4)(uVar1);
  FUN_100b78c90();
  return;
}



/* Address: 0x100b92e14 | FUN_100b92e14 */

void FUN_100b92e14(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = SentryOptions::spotlightUrl;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100b92e40 | SentryOptions::strictTraceContinuation */

/* Function Stack Size: 0x10 bytes */

bool SentryOptions::strictTraceContinuation(ID param_1,SEL param_2)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  FUN_100b92e64();
  return uVar1 & 1;
}



/* Address: 0x100b92e64 | FUN_100b92e64 */

void FUN_100b92e64(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = SentryOptions::strictTraceContinuation;
  FUN_100b78c58();
  FUN_100b6f9fc(*(undefined1 *)(unaff_x20 + lVar1));
  return;
}



/* Address: 0x100b92e8c | SentryOptions::setStrictTraceContinuation: */

/* Function Stack Size: 0x14 bytes */

void SentryOptions::setStrictTraceContinuation_(ID param_1,SEL param_2,bool param_3)

{
  FUN_100b92eb0(param_3);
  return;
}



/* Address: 0x100b92eb0 | FUN_100b92eb0 */

void FUN_100b92eb0(void)

{
  long lVar1;
  undefined1 unaff_w19;
  long unaff_x20;
  
  FUN_100b78d24();
  lVar1 = SentryOptions::strictTraceContinuation;
  FUN_100b78c6c();
  *(undefined1 *)(unaff_x20 + lVar1) = unaff_w19;
  FUN_100b78c90();
  return;
}



/* Address: 0x100b92edc | FUN_100b92edc */

void FUN_100b92edc(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = SentryOptions::strictTraceContinuation;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100b92f08 | SentryOptions::orgId */

/* Function Stack Size: 0x10 bytes */

ID SentryOptions::orgId(ID param_1,SEL param_2)

{
  FUN_100b8dda0(param_1,param_2,FUN_100b92f14);
  return param_1;
}



/* Address: 0x100b92f14 | FUN_100b92f14 */

void FUN_100b92f14(void)

{
  FUN_100b92d80(&SentryOptions::orgId);
  return;
}



/* Address: 0x100b92f20 | SentryOptions::setOrgId: */

/* Function Stack Size: 0x18 bytes */

void SentryOptions::setOrgId_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100b8ddec();
  return;
}



/* Address: 0x100b92f2c | FUN_100b92f2c */

void FUN_100b92f2c(undefined8 param_1,undefined8 param_2)

{
  FUN_100b92f38(param_1,param_2,&SentryOptions::orgId);
  return;
}



/* Address: 0x100b92f38 | FUN_100b92f38 */

void FUN_100b92f38(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  FUN_100b94070(*param_3);
  FUN_100b80d38();
  uVar1 = unaff_x20[1];
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  _swift_bridgeObjectRelease(uVar1);
  FUN_100b78c90();
  return;
}



/* Address: 0x100b92f74 | FUN_100b92f74 */

void FUN_100b92f74(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = SentryOptions::orgId;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100b92fa0 | SentryOptions::effectiveOrgId */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryOptions::effectiveOrgId(ID param_1,SEL param_2)

{
  NSString *pNVar1;
  
  FUN_100b8cc5c(param_1);
  if (param_2 == (SEL)0x0) {
    pNVar1 = (NSString *)0x0;
  }
  else {
    pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(param_2);
  }
  return (ID)pNVar1;
}



/* Address: 0x100b93008 | SentryOptions::experimental */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryOptions::experimental(ID param_1,SEL param_2)

{
  FUN_100b93028();
  return param_1;
}



/* Address: 0x100b93028 | FUN_100b93028 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_100b93028(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = SentryOptions::experimental;
  FUN_100b78c58();
  return *(undefined8 *)(unaff_x20 + lVar1);
}



/* Address: 0x100b93058 | SentryOptions::setExperimental: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryOptions::setExperimental_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100b9309c(param_3);
  return;
}



/* Address: 0x100b9309c | FUN_100b9309c */

void FUN_100b9309c(void)

{
  FUN_100b78d24();
  FUN_100b78c6c();
  FUN_100b78cbc();
  FUN_100b78c90();
  return;
}



/* Address: 0x100b930c8 | FUN_100b930c8 */

void FUN_100b930c8(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = SentryOptions::experimental;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100b930f4 | FUN_100b930f4 */

uint FUN_100b930f4(uint param_1)

{
  FUN_100b8fb54();
  return param_1 & 1;
}



/* Address: 0x100b93118 | SentryOptions::isValidSampleRate: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

bool SentryOptions::isValidSampleRate_(ID param_1,SEL param_2,ID param_3)

{
  uint uVar1;
  
  uVar1 = (uint)param_3;
  FUN_100b930f4();
  return uVar1 & 1;
}



/* Address: 0x100b93150 | FUN_100b93150 */

undefined1  [16] FUN_100b93150(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xea00000000006e6f;
  auVar1._0_8_ = 0x69746375646f7270;
  return auVar1;
}



/* Address: 0x100b9316c | SentryOptions::defaultEnvironment */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryOptions::defaultEnvironment(ID param_1,SEL param_2)

{
  NSString *pNVar1;
  
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(0xea00000000006e6f);
  return (ID)pNVar1;
}



/* Address: 0x100b931b4 | SentryOptions::enableMetrics */

/* Function Stack Size: 0x10 bytes */

bool SentryOptions::enableMetrics(ID param_1,SEL param_2)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  FUN_100b931d8();
  return uVar1 & 1;
}



/* Address: 0x100b931d8 | FUN_100b931d8 */

void FUN_100b931d8(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = SentryOptions::enableMetrics;
  FUN_100b78c58();
  FUN_100b6f9fc(*(undefined1 *)(unaff_x20 + lVar1));
  return;
}



/* Address: 0x100b93200 | SentryOptions::setEnableMetrics: */

/* Function Stack Size: 0x14 bytes */

void SentryOptions::setEnableMetrics_(ID param_1,SEL param_2,bool param_3)

{
  FUN_100b93224(param_3);
  return;
}



/* Address: 0x100b93224 | FUN_100b93224 */

void FUN_100b93224(void)

{
  long lVar1;
  undefined1 unaff_w19;
  long unaff_x20;
  
  FUN_100b78d24();
  lVar1 = SentryOptions::enableMetrics;
  FUN_100b78c6c();
  *(undefined1 *)(unaff_x20 + lVar1) = unaff_w19;
  FUN_100b78c90();
  return;
}



/* Address: 0x100b93250 | FUN_100b93250 */

void FUN_100b93250(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = SentryOptions::enableMetrics;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100b9327c | FUN_100b9327c */

void FUN_100b9327c(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_38 [24];
  
  plVar1 = (long *)(*param_2 + SentryOptions::beforeSendMetric);
  _swift_beginAccess(plVar1,auStack_38,0,0);
  lVar2 = 0;
  if (*plVar1 != 0) {
    lVar2 = plVar1[1];
  }
  *param_1 = *plVar1;
  param_1[1] = lVar2;
  FUN_100011128();
  return;
}



/* Address: 0x100b932d8 | FUN_100b932d8 */

void FUN_100b932d8(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_58 [24];
  
  lVar3 = *param_1;
  lVar5 = param_1[1];
  lVar2 = 0;
  if (lVar3 != 0) {
    lVar2 = lVar5;
  }
  plVar1 = (long *)(*param_2 + SentryOptions::beforeSendMetric);
  _swift_beginAccess(plVar1,auStack_58,1,0);
  lVar4 = *plVar1;
  lVar6 = plVar1[1];
  *plVar1 = lVar3;
  plVar1[1] = lVar2;
  FUN_100011128(lVar3,lVar5);
  FUN_100004550(lVar4,lVar6);
  return;
}



/* Address: 0x100b93358 | FUN_100b93358 */

void FUN_100b93358(void)

{
  FUN_100b9336c(&SentryOptions::beforeSendMetric,FUN_100011128);
  return;
}



/* Address: 0x100b9336c | FUN_100b9336c */

undefined1  [16] FUN_100b9336c(undefined8 *param_1,code *param_2)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  FUN_100b94070(*param_1);
  FUN_100b78ca0();
  auVar1 = *unaff_x20;
  (*param_2)(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Address: 0x100b933bc | FUN_100b933bc */

void FUN_100b933bc(undefined8 param_1,undefined8 param_2)

{
  FUN_100b933d0(param_1,param_2,&SentryOptions::beforeSendMetric,FUN_100004550);
  return;
}



/* Address: 0x100b933d0 | FUN_100b933d0 */

void FUN_100b933d0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,code *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  
  FUN_100b94070(*param_3);
  FUN_100b80d38();
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  (*param_4)(uVar1,uVar2);
  FUN_100b78c90();
  return;
}



/* Address: 0x100b93410 | FUN_100b93410 */

void FUN_100b93410(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = SentryOptions::beforeSendMetric;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100b9343c | SentryOptions::.cxx_destruct */

/* Function Stack Size: 0x10 bytes */

void SentryOptions::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + dsn + 8));
  FUN_100b78cd4(parsedDsn);
  FUN_100b9403c(releaseName);
  FUN_100b9403c(dist);
  FUN_100b9403c(environment);
  FUN_100b94030(beforeSend);
  FUN_100b94030(beforeSendSpan);
  FUN_100b94030(beforeSendLog);
  FUN_100b94030(beforeBreadcrumb);
  FUN_100b94030(beforeCaptureScreenshot);
  FUN_100b94030(beforeCaptureViewHierarchy);
  FUN_100b94030(onCrashedLastRun);
  FUN_100b94030(onLastRunStatusDetermined);
  FUN_100b78cd4(_sampleRate);
  _swift_release(*(undefined8 *)(param_1 + initialScope + 8));
  FUN_100b78cd4(_tracesSampleRate);
  FUN_100b94030(tracesSampler);
  FUN_100b94088(inAppIncludes);
  FUN_1001683a4(param_1 + urlSessionDelegate);
  FUN_100b78cd4(urlSession);
  FUN_100b94088(swizzleClassNameExcludes);
  FUN_100b94030(configureProfiling);
  FUN_100b78cd4(profiling);
  FUN_100b94088(tracePropagationTargets);
  FUN_100b94088(failedRequestStatusCodes);
  FUN_100b94088(failedRequestTargets);
  FUN_100b9403c(cacheDirectoryPath);
  FUN_100b9403c(spotlightUrl);
  FUN_100b9403c(orgId);
  FUN_100b78cd4(experimental);
  FUN_100004550(*(undefined8 *)(param_1 + beforeSendMetric),
                ((undefined8 *)(param_1 + beforeSendMetric))[1]);
  return;
}



/* Address: 0x100b935e4 | FUN_100b935e4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

ID FUN_100b935e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  NSString *pNVar1;
  ID IVar2;
  ID unaff_x20;
  undefined8 local_50;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_2);
  local_50 = 0;
  IVar2 = _objc_msgSend(unaff_x20,"initWithPattern:options:error:",pNVar1,param_3,&local_50);
  if (IVar2 == 0) {
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return IVar2;
}



/* Address: 0x100b936cc | FUN_100b936cc */

void FUN_100b936cc(ulong param_1)

{
  long lVar1;
  undefined *puVar2;
  
  FUN_100b94004();
  puVar2 = &DAT_101045f20;
  if ((param_1 & 1) != 0) {
    lVar1 = 0;
    FUN_100bdb954();
    if (lVar1 != 0) {
      puVar2 = &DAT_101045ee0;
    }
  }
  FUN_100b94068(puVar2);
  return;
}



/* Address: 0x100b9370c | FUN_100b9370c */

void FUN_100b9370c(ulong param_1)

{
  long lVar1;
  undefined *puVar2;
  
  FUN_100b94004();
  puVar2 = &DAT_101045f10;
  if ((param_1 & 1) != 0) {
    lVar1 = 0;
    FUN_100b69598();
    if (lVar1 != 0) {
      puVar2 = &DAT_101045ee0;
    }
  }
  FUN_100b94068(puVar2);
  return;
}



/* Address: 0x100b9374c | FUN_100b9374c */

void FUN_100b9374c(ulong param_1)

{
  undefined *puVar1;
  
  FUN_100b94004();
  puVar1 = &DAT_101045ee8;
  if ((param_1 & 1) != 0) {
    FUN_100b94080();
    if (param_1 != 0) {
      puVar1 = &DAT_101045ee0;
    }
  }
  FUN_100b94068(puVar1);
  return;
}



/* Address: 0x100b93798 | FUN_100b93798 */

void FUN_100b93798(void)

{
  byte bVar1;
  long lVar2;
  undefined *puVar3;
  
  bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xd,0,0,0x10,0,0);
  puVar3 = &DAT_101045f30;
  if ((bVar1 & 1) != 0) {
    lVar2 = 0;
    FUN_100b673ec(0,&DAT_101045f08,&PTR_SentryHttpStatusCodeRange_100f8e1e0);
    if (lVar2 != 0) {
      puVar3 = &DAT_101045ee0;
    }
  }
  FUN_100b6730c(puVar3);
  return;
}



/* Address: 0x100b93804 | FUN_100b93804 */

void FUN_100b93804(ulong param_1)

{
  long lVar1;
  undefined *puVar2;
  
  FUN_100b94004();
  puVar2 = &DAT_101045f28;
  if ((param_1 & 1) != 0) {
    lVar1 = 0;
    FUN_100b85d38();
    if (lVar1 != 0) {
      puVar2 = &DAT_101045ee0;
    }
  }
  FUN_100b94068(puVar2);
  return;
}



/* Address: 0x100b93844 | FUN_100b93844 */

void FUN_100b93844(void)

{
  FUN_100b6730c(&DAT_101045ed0);
  return;
}



/* Address: 0x100b93850 | FUN_100b93850 */

void FUN_100b93850(ulong param_1)

{
  undefined *puVar1;
  
  FUN_100b94004();
  puVar1 = &DAT_101045ef8;
  if ((param_1 & 1) != 0) {
    FUN_100b94080();
    if (param_1 != 0) {
      puVar1 = &DAT_101045ee0;
    }
  }
  FUN_100b94068(puVar1);
  return;
}



/* Address: 0x100b9389c | FUN_100b9389c */

void FUN_100b9389c(ulong param_1)

{
  undefined *puVar1;
  
  FUN_100b94004();
  puVar1 = &DAT_101045ef0;
  if ((param_1 & 1) != 0) {
    FUN_100b94080();
    if (param_1 != 0) {
      puVar1 = &DAT_101045ee0;
    }
  }
  FUN_100b94068(puVar1);
  return;
}



/* Address: 0x100b938e8 | FUN_100b938e8 */

void FUN_100b938e8(ulong param_1)

{
  long lVar1;
  undefined *puVar2;
  
  FUN_100b94004();
  puVar2 = &DAT_101045f00;
  if ((param_1 & 1) != 0) {
    lVar1 = 0;
    FUN_100baf3ec();
    if (lVar1 != 0) {
      puVar2 = &DAT_101045ee0;
    }
  }
  FUN_100b94068(puVar2);
  return;
}



/* Address: 0x100b93928 | FUN_100b93928 */

void FUN_100b93928(ulong param_1)

{
  undefined *puVar1;
  
  FUN_100b94004();
  puVar1 = &DAT_101045ed8;
  if ((param_1 & 1) != 0) {
    FUN_100b94080();
    if (param_1 != 0) {
      puVar1 = &DAT_101045ee0;
    }
  }
  FUN_100b94068(puVar1);
  return;
}


