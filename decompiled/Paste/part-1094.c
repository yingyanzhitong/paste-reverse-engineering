/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100b91e30 | SentryOptions::setEnableAutoBreadcrumbTracking: */

/* Function Stack Size: 0x14 bytes */

void SentryOptions::setEnableAutoBreadcrumbTracking_(ID param_1,SEL param_2,bool param_3)

{
  FUN_100b91e54(param_3);
  return;
}



/* Address: 0x100b91e54 | FUN_100b91e54 */

void FUN_100b91e54(void)

{
  long lVar1;
  undefined1 unaff_w19;
  long unaff_x20;
  
  FUN_100b78d24();
  lVar1 = SentryOptions::enableAutoBreadcrumbTracking;
  FUN_100b78c6c();
  *(undefined1 *)(unaff_x20 + lVar1) = unaff_w19;
  FUN_100b78c90();
  return;
}



/* Address: 0x100b91e80 | FUN_100b91e80 */

void FUN_100b91e80(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = SentryOptions::enableAutoBreadcrumbTracking;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100b91eac | SentryOptions::enablePropagateTraceparent */

/* Function Stack Size: 0x10 bytes */

bool SentryOptions::enablePropagateTraceparent(ID param_1,SEL param_2)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  FUN_100b91ed0();
  return uVar1 & 1;
}



/* Address: 0x100b91ed0 | FUN_100b91ed0 */

void FUN_100b91ed0(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = SentryOptions::enablePropagateTraceparent;
  FUN_100b78c58();
  FUN_100b6f9fc(*(undefined1 *)(unaff_x20 + lVar1));
  return;
}



/* Address: 0x100b91ef8 | SentryOptions::setEnablePropagateTraceparent: */

/* Function Stack Size: 0x14 bytes */

void SentryOptions::setEnablePropagateTraceparent_(ID param_1,SEL param_2,bool param_3)

{
  FUN_100b91f1c(param_3);
  return;
}



/* Address: 0x100b91f1c | FUN_100b91f1c */

void FUN_100b91f1c(void)

{
  long lVar1;
  undefined1 unaff_w19;
  long unaff_x20;
  
  FUN_100b78d24();
  lVar1 = SentryOptions::enablePropagateTraceparent;
  FUN_100b78c6c();
  *(undefined1 *)(unaff_x20 + lVar1) = unaff_w19;
  FUN_100b78c90();
  return;
}



/* Address: 0x100b91f48 | FUN_100b91f48 */

void FUN_100b91f48(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = SentryOptions::enablePropagateTraceparent;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100b91f74 | FUN_100b91f74 */

/* WARNING: Removing unreachable block (ram,0x000100b91fb0) */

void FUN_100b91f74(void)

{
  undefined8 uVar1;
  
  _objc_allocWithZone(&_OBJC_CLASS___NSRegularExpression);
  uVar1 = 0x2a2e;
  FUN_100b935e4(0x2a2e,&SUB_e200000000000000,1);
  DAT_101058438 = uVar1;
  return;
}



/* Address: 0x100b91fd8 | SentryOptions::tracePropagationTargets */

/* Function Stack Size: 0x10 bytes */

ID SentryOptions::tracePropagationTargets(ID param_1,SEL param_2)

{
  FUN_100b91ff0(param_1,param_2,FUN_100b9202c,PTR___type_metadata_for_Any_100eae0c0 + 8);
  return param_1;
}



/* Address: 0x100b91ff0 | FUN_100b91ff0 */

void FUN_100b91ff0(undefined8 param_1,undefined8 param_2,code *param_3)

{
  NSArray *pNVar1;
  
  (*param_3)();
  pNVar1 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_1);
  FUN_100b94114(pNVar1);
  return;
}



/* Address: 0x100b9202c | FUN_100b9202c */

void FUN_100b9202c(void)

{
  FUN_100b92498(&SentryOptions::tracePropagationTargets);
  return;
}



/* Address: 0x100b92038 | SentryOptions::setTracePropagationTargets: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryOptions::setTracePropagationTargets_(ID param_1,SEL param_2,ID param_3)

{
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  FUN_100b92088(param_3);
  return;
}



/* Address: 0x100b92088 | FUN_100b92088 */

void FUN_100b92088(undefined8 param_1)

{
  FUN_100b92524(param_1,&SentryOptions::tracePropagationTargets,FUN_100b920c4);
  return;
}



/* Address: 0x100b9209c | FUN_100b9209c */

void FUN_100b9209c(undefined8 *param_1)

{
  _swift_bridgeObjectRetain(*param_1);
  FUN_100b92088();
  return;
}



/* Address: 0x100b920c4 | FUN_100b920c4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100b920c4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  undefined1 local_c8 [8];
  undefined8 local_c0;
  undefined1 auStack_b8 [32];
  undefined1 auStack_98 [32];
  undefined1 auStack_78 [24];
  
  lVar7 = SentryOptions::tracePropagationTargets;
  _swift_beginAccess(unaff_x20 + SentryOptions::tracePropagationTargets,auStack_78,0,0);
  lVar5 = *(long *)(unaff_x20 + lVar7);
  lVar7 = *(long *)(lVar5 + 0x10);
  if (lVar7 != 0) {
    _swift_bridgeObjectRetain(lVar5);
    puVar2 = PTR___type_metadata_for_Any_100eae0c0;
    puVar1 = PTR___type_metadata_for_Swift_String_100eac208;
    lVar6 = lVar5;
    do {
      lVar6 = lVar6 + 0x20;
      FUN_10000cbfc(lVar6,auStack_98);
      FUN_10000cbfc(auStack_98,auStack_b8);
      uVar3 = 0;
      FUN_100b673ec(0,&DAT_101045050,&PTR__OBJC_CLASS___NSRegularExpression_100f8d890);
      puVar4 = local_c8;
      _swift_dynamicCast(puVar4,auStack_b8,puVar2 + 8,uVar3,6);
      if ((int)puVar4 == 0) {
        FUN_10000cbfc(auStack_98,auStack_b8);
        puVar4 = local_c8;
        _swift_dynamicCast(puVar4,auStack_b8,puVar2 + 8,puVar1,6);
        if ((int)puVar4 == 0) {
          FUN_100b84dac(0);
          FUN_100b84df8(3,0xd000000000000060,0x8000000100dcc8d0,0xd000000000000048,
                        0x8000000100dcc820,0x230);
        }
        else {
          _swift_bridgeObjectRelease(local_c0);
        }
      }
      FUN_100004594(auStack_98);
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    _swift_bridgeObjectRelease(lVar5);
  }
  return;
}



/* Address: 0x100b92244 | FUN_100b92244 */

void FUN_100b92244(long param_1)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  *(long *)(param_1 + 0x18) = unaff_x20;
  lVar1 = SentryOptions::tracePropagationTargets;
  FUN_100b78c80();
  FUN_100b56e88(FUN_100b92274,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100b92274 | FUN_100b92274 */

void FUN_100b92274(undefined8 param_1,undefined8 param_2)

{
  FUN_100b92d34(param_1,param_2,FUN_100b920c4);
  return;
}



/* Address: 0x100b92280 | SentryOptions::enableCaptureFailedRequests */

/* Function Stack Size: 0x10 bytes */

bool SentryOptions::enableCaptureFailedRequests(ID param_1,SEL param_2)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  FUN_100b922a4();
  return uVar1 & 1;
}



/* Address: 0x100b922a4 | FUN_100b922a4 */

void FUN_100b922a4(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = SentryOptions::enableCaptureFailedRequests;
  FUN_100b78c58();
  FUN_100b6f9fc(*(undefined1 *)(unaff_x20 + lVar1));
  return;
}



/* Address: 0x100b922cc | SentryOptions::setEnableCaptureFailedRequests: */

/* Function Stack Size: 0x14 bytes */

void SentryOptions::setEnableCaptureFailedRequests_(ID param_1,SEL param_2,bool param_3)

{
  FUN_100b922f0(param_3);
  return;
}



/* Address: 0x100b922f0 | FUN_100b922f0 */

void FUN_100b922f0(void)

{
  long lVar1;
  undefined1 unaff_w19;
  long unaff_x20;
  
  FUN_100b78d24();
  lVar1 = SentryOptions::enableCaptureFailedRequests;
  FUN_100b78c6c();
  *(undefined1 *)(unaff_x20 + lVar1) = unaff_w19;
  FUN_100b78c90();
  return;
}



/* Address: 0x100b9231c | FUN_100b9231c */

void FUN_100b9231c(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = SentryOptions::enableCaptureFailedRequests;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100b92348 | SentryOptions::failedRequestStatusCodes */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryOptions::failedRequestStatusCodes(ID param_1,SEL param_2)

{
  NSArray *pNVar1;
  
  FUN_100b923a0();
  FUN_100b673ec(0,&DAT_101045f08,&PTR_SentryHttpStatusCodeRange_100f8e1e0);
  pNVar1 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_1);
  return (ID)pNVar1;
}



/* Address: 0x100b923a0 | FUN_100b923a0 */

void FUN_100b923a0(void)

{
  FUN_100b92498(&SentryOptions::failedRequestStatusCodes);
  return;
}



/* Address: 0x100b923ac | SentryOptions::setFailedRequestStatusCodes: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryOptions::setFailedRequestStatusCodes_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100b673ec(0,&DAT_101045f08,&PTR_SentryHttpStatusCodeRange_100f8e1e0);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  FUN_100b9240c(param_3);
  return;
}



/* Address: 0x100b9240c | FUN_100b9240c */

void FUN_100b9240c(undefined8 param_1)

{
  FUN_100b92418(param_1,&SentryOptions::failedRequestStatusCodes);
  return;
}



/* Address: 0x100b92418 | FUN_100b92418 */

void FUN_100b92418(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  long lVar2;
  
  FUN_100b78d24();
  lVar2 = *param_2;
  FUN_100b78c6c();
  uVar1 = *(undefined8 *)(unaff_x20 + lVar2);
  *(undefined8 *)(unaff_x20 + lVar2) = unaff_x19;
  _swift_bridgeObjectRelease(uVar1);
  FUN_100b78c90();
  return;
}



/* Address: 0x100b92448 | FUN_100b92448 */

void FUN_100b92448(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = SentryOptions::failedRequestStatusCodes;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100b92474 | SentryOptions::failedRequestTargets */

/* Function Stack Size: 0x10 bytes */

ID SentryOptions::failedRequestTargets(ID param_1,SEL param_2)

{
  FUN_100b91ff0(param_1,param_2,FUN_100b9248c,PTR___type_metadata_for_Any_100eae0c0 + 8);
  return param_1;
}



/* Address: 0x100b9248c | FUN_100b9248c */

void FUN_100b9248c(void)

{
  FUN_100b92498(&SentryOptions::failedRequestTargets);
  return;
}



/* Address: 0x100b92498 | FUN_100b92498 */

void FUN_100b92498(long *param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *param_1;
  FUN_100b78c58();
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + lVar1));
  FUN_100b6f9fc();
  return;
}



/* Address: 0x100b924c0 | SentryOptions::setFailedRequestTargets: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryOptions::setFailedRequestTargets_(ID param_1,SEL param_2,ID param_3)

{
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  FUN_100b92510(param_3);
  return;
}



/* Address: 0x100b92510 | FUN_100b92510 */

void FUN_100b92510(undefined8 param_1)

{
  FUN_100b92524(param_1,&SentryOptions::failedRequestTargets,FUN_100b925cc);
  return;
}



/* Address: 0x100b92524 | FUN_100b92524 */

void FUN_100b92524(undefined8 param_1,long *param_2,code *param_3)

{
  undefined8 uVar1;
  long unaff_x20;
  long lVar2;
  
  lVar2 = *param_2;
  FUN_100b94020(unaff_x20 + lVar2);
  uVar1 = *(undefined8 *)(unaff_x20 + lVar2);
  *(undefined8 *)(unaff_x20 + lVar2) = param_1;
  _swift_bridgeObjectRelease(uVar1);
  (*param_3)();
  FUN_100b78c90();
  return;
}



/* Address: 0x100b92564 | FUN_100b92564 */

void FUN_100b92564(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_2;
  lVar2 = *param_5;
  FUN_100b78ca0(lVar1 + lVar2,auStack_48);
  *param_1 = *(undefined8 *)(lVar1 + lVar2);
  _swift_bridgeObjectRetain();
  FUN_100b78c90();
  return;
}



/* Address: 0x100b925a4 | FUN_100b925a4 */

void FUN_100b925a4(undefined8 *param_1)

{
  _swift_bridgeObjectRetain(*param_1);
  FUN_100b92510();
  return;
}



/* Address: 0x100b925cc | FUN_100b925cc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100b925cc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  undefined1 local_c8 [8];
  undefined8 local_c0;
  undefined1 auStack_b8 [32];
  undefined1 auStack_98 [32];
  undefined1 auStack_78 [24];
  
  lVar7 = SentryOptions::failedRequestTargets;
  _swift_beginAccess(unaff_x20 + SentryOptions::failedRequestTargets,auStack_78,0,0);
  lVar5 = *(long *)(unaff_x20 + lVar7);
  lVar7 = *(long *)(lVar5 + 0x10);
  if (lVar7 != 0) {
    _swift_bridgeObjectRetain(lVar5);
    puVar2 = PTR___type_metadata_for_Any_100eae0c0;
    puVar1 = PTR___type_metadata_for_Swift_String_100eac208;
    lVar6 = lVar5;
    do {
      lVar6 = lVar6 + 0x20;
      FUN_10000cbfc(lVar6,auStack_98);
      FUN_10000cbfc(auStack_98,auStack_b8);
      uVar3 = 0;
      FUN_100b673ec(0,&DAT_101045050,&PTR__OBJC_CLASS___NSRegularExpression_100f8d890);
      puVar4 = local_c8;
      _swift_dynamicCast(puVar4,auStack_b8,puVar2 + 8,uVar3,6);
      if ((int)puVar4 == 0) {
        FUN_10000cbfc(auStack_98,auStack_b8);
        puVar4 = local_c8;
        _swift_dynamicCast(puVar4,auStack_b8,puVar2 + 8,puVar1,6);
        if ((int)puVar4 == 0) {
          FUN_100b84dac(0);
          FUN_100b84df8(3,0xd00000000000005d,0x8000000100dcc870,0xd000000000000048,
                        0x8000000100dcc820,0x24b);
        }
        else {
          _swift_bridgeObjectRelease(local_c0);
        }
      }
      FUN_100004594(auStack_98);
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    _swift_bridgeObjectRelease(lVar5);
  }
  return;
}



/* Address: 0x100b9274c | FUN_100b9274c */

void FUN_100b9274c(long param_1)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  *(long *)(param_1 + 0x18) = unaff_x20;
  lVar1 = SentryOptions::failedRequestTargets;
  FUN_100b78c80();
  FUN_100b56e88(FUN_100b9277c,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100b9277c | FUN_100b9277c */

void FUN_100b9277c(undefined8 param_1,undefined8 param_2)

{
  FUN_100b92d34(param_1,param_2,FUN_100b925cc);
  return;
}



/* Address: 0x100b92788 | SentryOptions::enableMetricKit */

/* Function Stack Size: 0x10 bytes */

bool SentryOptions::enableMetricKit(ID param_1,SEL param_2)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  FUN_100b927ac();
  return uVar1 & 1;
}



/* Address: 0x100b927ac | FUN_100b927ac */

void FUN_100b927ac(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = SentryOptions::enableMetricKit;
  FUN_100b78c58();
  FUN_100b6f9fc(*(undefined1 *)(unaff_x20 + lVar1));
  return;
}



/* Address: 0x100b927d4 | SentryOptions::setEnableMetricKit: */

/* Function Stack Size: 0x14 bytes */

void SentryOptions::setEnableMetricKit_(ID param_1,SEL param_2,bool param_3)

{
  FUN_100b927f8(param_3);
  return;
}



/* Address: 0x100b927f8 | FUN_100b927f8 */

void FUN_100b927f8(void)

{
  long lVar1;
  undefined1 unaff_w19;
  long unaff_x20;
  
  FUN_100b78d24();
  lVar1 = SentryOptions::enableMetricKit;
  FUN_100b78c6c();
  *(undefined1 *)(unaff_x20 + lVar1) = unaff_w19;
  FUN_100b78c90();
  return;
}



/* Address: 0x100b92824 | FUN_100b92824 */

void FUN_100b92824(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = SentryOptions::enableMetricKit;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100b92850 | SentryOptions::enableMetricKitRawPayload */

/* Function Stack Size: 0x10 bytes */

bool SentryOptions::enableMetricKitRawPayload(ID param_1,SEL param_2)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  FUN_100b92874();
  return uVar1 & 1;
}



/* Address: 0x100b92874 | FUN_100b92874 */

void FUN_100b92874(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = SentryOptions::enableMetricKitRawPayload;
  FUN_100b78c58();
  FUN_100b6f9fc(*(undefined1 *)(unaff_x20 + lVar1));
  return;
}



/* Address: 0x100b9289c | SentryOptions::setEnableMetricKitRawPayload: */

/* Function Stack Size: 0x14 bytes */

void SentryOptions::setEnableMetricKitRawPayload_(ID param_1,SEL param_2,bool param_3)

{
  FUN_100b928c0(param_3);
  return;
}



/* Address: 0x100b928c0 | FUN_100b928c0 */

void FUN_100b928c0(void)

{
  long lVar1;
  undefined1 unaff_w19;
  long unaff_x20;
  
  FUN_100b78d24();
  lVar1 = SentryOptions::enableMetricKitRawPayload;
  FUN_100b78c6c();
  *(undefined1 *)(unaff_x20 + lVar1) = unaff_w19;
  FUN_100b78c90();
  return;
}



/* Address: 0x100b928ec | FUN_100b928ec */

void FUN_100b928ec(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = SentryOptions::enableMetricKitRawPayload;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100b92918 | SentryOptions::enableTimeToFullDisplayTracing */

/* Function Stack Size: 0x10 bytes */

bool SentryOptions::enableTimeToFullDisplayTracing(ID param_1,SEL param_2)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  FUN_100b9293c();
  return uVar1 & 1;
}



/* Address: 0x100b9293c | FUN_100b9293c */

void FUN_100b9293c(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = SentryOptions::enableTimeToFullDisplayTracing;
  FUN_100b78c58();
  FUN_100b6f9fc(*(undefined1 *)(unaff_x20 + lVar1));
  return;
}



/* Address: 0x100b92964 | SentryOptions::setEnableTimeToFullDisplayTracing: */

/* Function Stack Size: 0x14 bytes */

void SentryOptions::setEnableTimeToFullDisplayTracing_(ID param_1,SEL param_2,bool param_3)

{
  FUN_100b92988(param_3);
  return;
}



/* Address: 0x100b92988 | FUN_100b92988 */

void FUN_100b92988(void)

{
  long lVar1;
  undefined1 unaff_w19;
  long unaff_x20;
  
  FUN_100b78d24();
  lVar1 = SentryOptions::enableTimeToFullDisplayTracing;
  FUN_100b78c6c();
  *(undefined1 *)(unaff_x20 + lVar1) = unaff_w19;
  FUN_100b78c90();
  return;
}



/* Address: 0x100b929b4 | FUN_100b929b4 */

void FUN_100b929b4(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = SentryOptions::enableTimeToFullDisplayTracing;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100b929e0 | SentryOptions::swiftAsyncStacktraces */

/* Function Stack Size: 0x10 bytes */

bool SentryOptions::swiftAsyncStacktraces(ID param_1,SEL param_2)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  FUN_100b92a04();
  return uVar1 & 1;
}



/* Address: 0x100b92a04 | FUN_100b92a04 */

void FUN_100b92a04(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = SentryOptions::swiftAsyncStacktraces;
  FUN_100b78c58();
  FUN_100b6f9fc(*(undefined1 *)(unaff_x20 + lVar1));
  return;
}



/* Address: 0x100b92a2c | SentryOptions::setSwiftAsyncStacktraces: */

/* Function Stack Size: 0x14 bytes */

void SentryOptions::setSwiftAsyncStacktraces_(ID param_1,SEL param_2,bool param_3)

{
  FUN_100b92a50(param_3);
  return;
}



/* Address: 0x100b92a50 | FUN_100b92a50 */

void FUN_100b92a50(void)

{
  long lVar1;
  undefined1 unaff_w19;
  long unaff_x20;
  
  FUN_100b78d24();
  lVar1 = SentryOptions::swiftAsyncStacktraces;
  FUN_100b78c6c();
  *(undefined1 *)(unaff_x20 + lVar1) = unaff_w19;
  FUN_100b78c90();
  return;
}



/* Address: 0x100b92a7c | FUN_100b92a7c */

void FUN_100b92a7c(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = SentryOptions::swiftAsyncStacktraces;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100b92aa8 | SentryOptions::cacheDirectoryPath */

/* Function Stack Size: 0x10 bytes */

ID SentryOptions::cacheDirectoryPath(ID param_1,SEL param_2)

{
  FUN_100b92ab4(param_1,param_2,FUN_100b92adc);
  return param_1;
}



/* Address: 0x100b92ab4 | FUN_100b92ab4 */

void FUN_100b92ab4(void)

{
  FUN_100b94100();
  (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  FUN_100b94108();
  FUN_100b94114();
  return;
}



/* Address: 0x100b92adc | FUN_100b92adc */

void FUN_100b92adc(void)

{
  FUN_100b92d80(&SentryOptions::cacheDirectoryPath);
  return;
}



/* Address: 0x100b92ae8 | SentryOptions::setCacheDirectoryPath: */

/* Function Stack Size: 0x18 bytes */

void SentryOptions::setCacheDirectoryPath_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100b92af4();
  return;
}


