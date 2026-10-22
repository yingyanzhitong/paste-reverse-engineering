/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1001215e4 | FUN_1001215e4 */

void FUN_1001215e4(long param_1)

{
  long lVar1;
  char *pcVar2;
  undefined8 uVar3;
  long unaff_x20;
  String SVar4;
  String separator;
  undefined1 auStack_48 [24];
  
  if ((param_1 != 0) && (DAT_101057340 == '\x01')) {
    pcVar2 = &DAT_100fae660;
    FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
    _swift_allocObject();
    pcVar2[0x18] = '\x02';
    pcVar2[0x19] = '\0';
    pcVar2[0x1a] = '\0';
    pcVar2[0x1b] = '\0';
    pcVar2[0x1c] = '\0';
    pcVar2[0x1d] = '\0';
    pcVar2[0x1e] = '\0';
    pcVar2[0x1f] = '\0';
    pcVar2[0x10] = '\x01';
    pcVar2[0x11] = '\0';
    pcVar2[0x12] = '\0';
    pcVar2[0x13] = '\0';
    pcVar2[0x14] = '\0';
    pcVar2[0x15] = '\0';
    pcVar2[0x16] = '\0';
    pcVar2[0x17] = '\0';
    *(undefined **)(pcVar2 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
    pcVar2[0x20] = 'O';
    pcVar2[0x21] = '\0';
    pcVar2[0x22] = '\0';
    pcVar2[0x23] = '\0';
    pcVar2[0x24] = '\0';
    pcVar2[0x25] = '\0';
    pcVar2[0x26] = '\0';
    pcVar2[0x27] = -0x30;
    pcVar2[0x28] = '\x10';
    pcVar2[0x29] = '$';
    pcVar2[0x2a] = -0x27;
    pcVar2[0x2b] = '\0';
    pcVar2[0x2c] = '\x01';
    pcVar2[0x2d] = '\0';
    pcVar2[0x2e] = '\0';
    pcVar2[0x2f] = -0x80;
    SVar4.bridgeObject = (void *)0x20;
    SVar4.str = pcVar2;
    separator.bridgeObject = (void *)0xa;
    separator.str = (char *)0xe100000000000000;
    Swift::_print(SVar4,separator);
    _swift_release(pcVar2);
  }
  lVar1 = PostHogConfig::evaluationContexts;
  _swift_beginAccess(unaff_x20 + PostHogConfig::evaluationContexts,auStack_48,1,0);
  uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
  *(long *)(unaff_x20 + lVar1) = param_1;
  _swift_bridgeObjectRelease(uVar3);
  return;
}



/* Address: 0x1001216c0 | FUN_1001216c0 */

undefined1  [16] FUN_1001216c0(undefined8 *param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auVar3 [16];
  
  puVar2 = &DAT_00000030;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    puVar2 = _malloc(0x30);
  }
  else {
    _swift_coroFrameAlloc(0x30,0xb4f9);
  }
  *param_1 = puVar2;
  lVar1 = PostHogConfig::evaluationContexts;
  *(long *)(puVar2 + 0x20) = unaff_x20;
  *(long *)(puVar2 + 0x28) = lVar1;
  _swift_beginAccess(unaff_x20 + lVar1,puVar2,1,0);
  *(undefined8 *)(puVar2 + 0x18) = *(undefined8 *)(unaff_x20 + lVar1);
  _swift_bridgeObjectRetain();
  auVar3._8_8_ = puVar2 + 0x18;
  auVar3._0_8_ = FUN_100121748;
  return auVar3;
}



/* Address: 0x100121748 | FUN_100121748 */

void FUN_100121748(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  void *pvVar3;
  long lVar4;
  String SVar5;
  String separator;
  
  pvVar3 = (void *)*param_1;
  lVar4 = *(long *)((long)pvVar3 + 0x18);
  if ((param_2 & 1) == 0) {
    if ((lVar4 != 0) && (DAT_101057340 == '\x01')) {
      pcVar2 = &DAT_100fae660;
      FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
      _swift_allocObject();
      pcVar2[0x18] = '\x02';
      pcVar2[0x19] = '\0';
      pcVar2[0x1a] = '\0';
      pcVar2[0x1b] = '\0';
      pcVar2[0x1c] = '\0';
      pcVar2[0x1d] = '\0';
      pcVar2[0x1e] = '\0';
      pcVar2[0x1f] = '\0';
      pcVar2[0x10] = '\x01';
      pcVar2[0x11] = '\0';
      pcVar2[0x12] = '\0';
      pcVar2[0x13] = '\0';
      pcVar2[0x14] = '\0';
      pcVar2[0x15] = '\0';
      pcVar2[0x16] = '\0';
      pcVar2[0x17] = '\0';
      *(undefined **)(pcVar2 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
      pcVar2[0x20] = 'O';
      pcVar2[0x21] = '\0';
      pcVar2[0x22] = '\0';
      pcVar2[0x23] = '\0';
      pcVar2[0x24] = '\0';
      pcVar2[0x25] = '\0';
      pcVar2[0x26] = '\0';
      pcVar2[0x27] = -0x30;
      pcVar2[0x28] = '\x10';
      pcVar2[0x29] = '$';
      pcVar2[0x2a] = -0x27;
      pcVar2[0x2b] = '\0';
      pcVar2[0x2c] = '\x01';
      pcVar2[0x2d] = '\0';
      pcVar2[0x2e] = '\0';
      pcVar2[0x2f] = -0x80;
      SVar5.bridgeObject = (void *)0x20;
      SVar5.str = pcVar2;
      separator.bridgeObject = (void *)0xa;
      separator.str = (char *)0xe100000000000000;
      Swift::_print(SVar5,separator);
      _swift_release(pcVar2);
    }
    uVar1 = *(undefined8 *)(*(long *)((long)pvVar3 + 0x20) + *(long *)((long)pvVar3 + 0x28));
    *(long *)(*(long *)((long)pvVar3 + 0x20) + *(long *)((long)pvVar3 + 0x28)) = lVar4;
  }
  else {
    _swift_bridgeObjectRetain(lVar4);
    FUN_1001215e4();
    uVar1 = *(undefined8 *)((long)pvVar3 + 0x18);
  }
  _swift_bridgeObjectRelease(uVar1);
  _free(pvVar3);
  return;
}



/* Address: 0x10012182c | PostHogConfig::appGroupIdentifier */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID PostHogConfig::appGroupIdentifier(ID param_1,SEL param_2)

{
  NSString *pNVar1;
  long lVar2;
  undefined1 auStack_38 [24];
  
  lVar2 = param_1 + appGroupIdentifier;
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



/* Address: 0x1001218a4 | FUN_1001218a4 */

undefined1  [16] FUN_1001218a4(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + PostHogConfig::appGroupIdentifier);
  _swift_beginAccess(pauVar1,auStack_38,0,0);
  auVar2 = *pauVar1;
  _swift_bridgeObjectRetain(*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Address: 0x1001218f8 | PostHogConfig::setAppGroupIdentifier: */

/* Function Stack Size: 0x18 bytes */

void PostHogConfig::setAppGroupIdentifier_(ID param_1,SEL param_2,ID param_3)

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
  pSVar1 = (String *)(param_1 + appGroupIdentifier);
  _swift_beginAccess(pSVar1,auStack_48,1,0);
  *pSVar1 = SVar2;
  _swift_bridgeObjectRelease(pSVar1->bridgeObject);
  return;
}



/* Address: 0x100121970 | FUN_100121970 */

void FUN_100121970(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + PostHogConfig::appGroupIdentifier);
  _swift_beginAccess(puVar1,auStack_48,1,0);
  uVar2 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Address: 0x1001219cc | FUN_1001219cc */

undefined1  [16] FUN_1001219cc(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = PostHogConfig::appGroupIdentifier;
  _swift_beginAccess(unaff_x20 + PostHogConfig::appGroupIdentifier,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = _swift_endAccess;
  return auVar2;
}



/* Address: 0x100121a0c | PostHogConfig::snapshotEndpoint */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID PostHogConfig::snapshotEndpoint(ID param_1,SEL param_2)

{
  long lVar1;
  undefined8 uVar2;
  NSString *pNVar3;
  undefined1 auStack_38 [24];
  
  lVar1 = param_1 + snapshotEndpoint;
  _swift_beginAccess(lVar1,auStack_38,0,0);
  uVar2 = *(undefined8 *)(lVar1 + 8);
  _swift_bridgeObjectRetain(uVar2);
  pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(uVar2);
  return (ID)pNVar3;
}



/* Address: 0x100121a74 | FUN_100121a74 */

undefined1  [16] FUN_100121a74(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + PostHogConfig::snapshotEndpoint);
  _swift_beginAccess(pauVar1,auStack_38,0,0);
  auVar2 = *pauVar1;
  _swift_bridgeObjectRetain(*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Address: 0x100121ac8 | PostHogConfig::setSnapshotEndpoint: */

/* Function Stack Size: 0x18 bytes */

void PostHogConfig::setSnapshotEndpoint_(ID param_1,SEL param_2,ID param_3)

{
  String *pSVar1;
  String SVar2;
  undefined1 auStack_48 [24];
  
  SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pSVar1 = (String *)(param_1 + snapshotEndpoint);
  _swift_beginAccess(pSVar1,auStack_48,1,0);
  *pSVar1 = SVar2;
  _swift_bridgeObjectRelease(pSVar1->bridgeObject);
  return;
}



/* Address: 0x100121b30 | FUN_100121b30 */

void FUN_100121b30(undefined8 param_1,undefined8 param_2)

{
  FUN_100121b44(param_1,param_2,&PostHogConfig::snapshotEndpoint,
                PTR__swift_bridgeObjectRelease_100eae160);
  return;
}



/* Address: 0x100121b44 | FUN_100121b44 */

void FUN_100121b44(undefined8 param_1,undefined8 param_2,long *param_3,code *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + *param_3);
  _swift_beginAccess(puVar1,auStack_48,1,0);
  uVar2 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  (*param_4)(uVar2);
  return;
}



/* Address: 0x100121ba0 | FUN_100121ba0 */

undefined1  [16] FUN_100121ba0(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = PostHogConfig::snapshotEndpoint;
  _swift_beginAccess(unaff_x20 + PostHogConfig::snapshotEndpoint,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = _swift_endAccess;
  return auVar2;
}



/* Address: 0x100121be0 | FUN_100121be0 */

undefined * FUN_100121be0(void)

{
  return &DAT_100eb8080;
}



/* Address: 0x100121bec | FUN_100121bec */

undefined1  [16] FUN_100121bec(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x8000000100d922e0;
  auVar1._0_8_ = 0xd000000000000018;
  return auVar1;
}



/* Address: 0x100121c08 | PostHogConfig::errorTrackingConfig */

/* WARNING: Function: _objc_retainAutoreleaseReturnValue replaced with injection: _objc_retain_fixup
    */
/* Function Stack Size: 0x10 bytes */

ID PostHogConfig::errorTrackingConfig(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + errorTrackingConfig);
}



/* Address: 0x100121c18 | FUN_100121c18 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_100121c18(void)

{
  long unaff_x20;
  
  return *(undefined8 *)(unaff_x20 + PostHogConfig::errorTrackingConfig);
}



/* Address: 0x100121c28 | PostHogConfig::logs */

/* WARNING: Function: _objc_retainAutoreleaseReturnValue replaced with injection: _objc_retain_fixup
    */
/* Function Stack Size: 0x10 bytes */

ID PostHogConfig::logs(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + logs);
}



/* Address: 0x100121c38 | FUN_100121c38 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_100121c38(void)

{
  long unaff_x20;
  
  return *(undefined8 *)(unaff_x20 + PostHogConfig::logs);
}



/* Address: 0x100121c48 | PostHogConfig::surveys */

/* Function Stack Size: 0x10 bytes */

bool PostHogConfig::surveys(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + _surveys);
}



/* Address: 0x100121c58 | FUN_100121c58 */

undefined1 FUN_100121c58(void)

{
  long unaff_x20;
  
  return *(undefined1 *)(unaff_x20 + PostHogConfig::_surveys);
}



/* Address: 0x100121c68 | PostHogConfig::setSurveys: */

/* Function Stack Size: 0x14 bytes */

void PostHogConfig::setSurveys_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + _surveys) = (char)param_3;
  return;
}



/* Address: 0x100121c78 | FUN_100121c78 */

void FUN_100121c78(undefined1 param_1)

{
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + PostHogConfig::_surveys) = param_1;
  return;
}



/* Address: 0x100121c88 | FUN_100121c88 */

code * FUN_100121c88(long *param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = PostHogConfig::_surveys;
  *param_1 = unaff_x20;
  param_1[1] = lVar1;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(unaff_x20 + lVar1);
  return FUN_1001046a4;
}



/* Address: 0x100121cac | PostHogConfig::surveysConfig */

/* WARNING: Function: _objc_retainAutoreleaseReturnValue replaced with injection: _objc_retain_fixup
    */
/* Function Stack Size: 0x10 bytes */

ID PostHogConfig::surveysConfig(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + _surveysConfig);
}



/* Address: 0x100121cbc | FUN_100121cbc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_100121cbc(void)

{
  long unaff_x20;
  
  return *(undefined8 *)(unaff_x20 + PostHogConfig::_surveysConfig);
}



/* Address: 0x100121ccc | PostHogConfig::setSurveysConfig: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void PostHogConfig::setSurveysConfig_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + _surveysConfig) = param_3;
  return;
}



/* Address: 0x100121d00 | FUN_100121d00 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100121d00(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + PostHogConfig::_surveysConfig) = param_1;
  return 0;
}



/* Address: 0x100121d18 | FUN_100121d18 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100121d18(undefined8 *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = PostHogConfig::_surveysConfig;
  param_1[2] = PostHogConfig::_surveysConfig;
  *param_1 = *(undefined8 *)(unaff_x20 + lVar1);
  param_1[1] = unaff_x20;
  auVar2._8_8_ = param_1;
  auVar2._0_8_ = FUN_100121d5c;
  return auVar2;
}



/* Address: 0x100121d5c | FUN_100121d5c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100121d5c(undefined8 *param_1)

{
  *(undefined8 *)(param_1[1] + param_1[2]) = *param_1;
  return 0;
}



/* Address: 0x100121da4 | PostHogConfig::urlSessionConfiguration */

/* WARNING: Function: _objc_retainAutoreleaseReturnValue replaced with injection: _objc_retain_fixup
    */
/* Function Stack Size: 0x10 bytes */

ID PostHogConfig::urlSessionConfiguration(ID param_1,SEL param_2)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = urlSessionConfiguration;
  _swift_beginAccess(param_1 + urlSessionConfiguration,auStack_38,0,0);
  return *(ID *)(param_1 + lVar1);
}



/* Address: 0x100121dec | FUN_100121dec */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_100121dec(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = PostHogConfig::urlSessionConfiguration;
  _swift_beginAccess(unaff_x20 + PostHogConfig::urlSessionConfiguration,auStack_38,0,0);
  return *(undefined8 *)(unaff_x20 + lVar1);
}



/* Address: 0x100121e38 | PostHogConfig::setUrlSessionConfiguration: */

/* Function Stack Size: 0x18 bytes */

void PostHogConfig::setUrlSessionConfiguration_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100121e44();
  return;
}



/* Address: 0x100121e44 | FUN_100121e44 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100121e44(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  return 0;
}



/* Address: 0x100121ea4 | FUN_100121ea4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100121ea4(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = PostHogConfig::urlSessionConfiguration;
  _swift_beginAccess(unaff_x20 + PostHogConfig::urlSessionConfiguration,auStack_48,1,0);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  return 0;
}



/* Address: 0x100121ef8 | FUN_100121ef8 */

undefined1  [16] FUN_100121ef8(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = PostHogConfig::urlSessionConfiguration;
  _swift_beginAccess(unaff_x20 + PostHogConfig::urlSessionConfiguration,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = _swift_endAccess;
  return auVar2;
}



/* Address: 0x100121f38 | PostHogConfig::requestHeaders */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID PostHogConfig::requestHeaders(ID param_1,SEL param_2)

{
  NSDictionary *pNVar1;
  long lVar2;
  undefined1 auStack_38 [24];
  
  lVar2 = requestHeaders;
  _swift_beginAccess(param_1 + requestHeaders,auStack_38,0,0);
  lVar2 = *(long *)(param_1 + lVar2);
  if (lVar2 == 0) {
    pNVar1 = (NSDictionary *)0x0;
  }
  else {
    _swift_bridgeObjectRetain(lVar2);
    pNVar1 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(lVar2);
  }
  return (ID)pNVar1;
}



/* Address: 0x100121fb8 | FUN_100121fb8 */

void FUN_100121fb8(void)

{
  FUN_100104af0(&PostHogConfig::requestHeaders);
  return;
}



/* Address: 0x100121fc4 | PostHogConfig::setRequestHeaders: */

/* Function Stack Size: 0x18 bytes */

void PostHogConfig::setRequestHeaders_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  Dictionary<undefined,undefined> DVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    DVar2.unknown = (undefined *)0x0;
  }
  else {
    DVar2 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  }
  lVar1 = requestHeaders;
  _swift_beginAccess(param_1 + requestHeaders,auStack_48,1,0);
  uVar3 = *(undefined8 *)(param_1 + lVar1);
  *(undefined **)(param_1 + lVar1) = DVar2.unknown;
  _swift_bridgeObjectRelease(uVar3);
  return;
}



/* Address: 0x100122044 | FUN_100122044 */

void FUN_100122044(undefined8 param_1)

{
  FUN_1001220f0(param_1,&PostHogConfig::requestHeaders,PTR__swift_bridgeObjectRelease_100eae160);
  return;
}



/* Address: 0x100122058 | FUN_100122058 */

undefined1  [16] FUN_100122058(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = PostHogConfig::requestHeaders;
  _swift_beginAccess(unaff_x20 + PostHogConfig::requestHeaders,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = _swift_endAccess;
  return auVar2;
}



/* Address: 0x100122098 | FUN_100122098 */

void FUN_100122098(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = PostHogConfig::storageManager;
  _swift_beginAccess(unaff_x20 + PostHogConfig::storageManager,auStack_38,0,0);
  _swift_retain(*(undefined8 *)(unaff_x20 + lVar1));
  return;
}



/* Address: 0x1001220dc | FUN_1001220dc */

void FUN_1001220dc(undefined8 param_1)

{
  FUN_1001220f0(param_1,&PostHogConfig::storageManager,PTR__swift_release_100eae3e8);
  return;
}



/* Address: 0x1001220f0 | FUN_1001220f0 */

void FUN_1001220f0(undefined8 param_1,long *param_2,code *param_3)

{
  undefined8 uVar1;
  long unaff_x20;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *param_2;
  _swift_beginAccess(unaff_x20 + lVar2,auStack_48,1,0);
  uVar1 = *(undefined8 *)(unaff_x20 + lVar2);
  *(undefined8 *)(unaff_x20 + lVar2) = param_1;
  (*param_3)(uVar1);
  return;
}



/* Address: 0x100122144 | FUN_100122144 */

undefined1  [16] FUN_100122144(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = PostHogConfig::storageManager;
  _swift_beginAccess(unaff_x20 + PostHogConfig::storageManager,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = _swift_endAccess;
  return auVar2;
}



/* Address: 0x100122184 | FUN_100122184 */

void FUN_100122184(undefined8 param_1,undefined8 param_2)

{
  _objc_allocWithZone();
  FUN_1001221c4(param_1,param_2);
  return;
}



/* Address: 0x1001221c4 | FUN_1001221c4 */

void FUN_1001221c4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined *puVar3;
  CharacterSet CVar4;
  ID IVar5;
  undefined *self;
  CharacterSet CVar6;
  URL UVar7;
  undefined1 *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  String SVar12;
  
  puVar3 = &DAT_100fae670;
  FUN_1000f7830(&DAT_100fae670,&DAT_100c2e0e8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = &stack0xffffffffffffff80 + -extraout_x8;
  CVar4 = Foundation::CharacterSet::typeMetadataAccessor();
  lVar11 = *(long *)(CVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar11 + 0x40));
  *(undefined8 *)(unaff_x20 + PostHogConfig::flushAt) = 0x14;
  *(undefined8 *)(unaff_x20 + PostHogConfig::maxQueueSize) = 1000;
  *(undefined8 *)(unaff_x20 + PostHogConfig::maxBatchSize) = 0x32;
  *(undefined8 *)(unaff_x20 + PostHogConfig::flushIntervalSeconds) = 0x403e000000000000;
  *(undefined8 *)(unaff_x20 + PostHogConfig::maxRetries) = 3;
  *(undefined8 *)(unaff_x20 + PostHogConfig::featureFlagRequestMaxRetries) = 1;
  *(undefined8 *)(unaff_x20 + PostHogConfig::dataMode) = 2;
  *(undefined1 *)(unaff_x20 + PostHogConfig::sendFeatureFlagEvent) = 1;
  *(undefined1 *)(unaff_x20 + PostHogConfig::preloadFeatureFlags) = 1;
  *(undefined1 *)(unaff_x20 + PostHogConfig::captureApplicationLifecycleEvents) = 1;
  *(undefined1 *)(unaff_x20 + PostHogConfig::captureScreenViews) = 1;
  *(undefined1 *)(unaff_x20 + PostHogConfig::enableSwizzling) = 1;
  *(undefined1 *)(unaff_x20 + PostHogConfig::capturePushNotificationSubscriptions) = 1;
  *(undefined1 *)(unaff_x20 + PostHogConfig::capturePushNotificationOpened) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + PostHogConfig::pushIdentityProvider);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(unaff_x20 + PostHogConfig::debug) = 0;
  *(undefined1 *)(unaff_x20 + PostHogConfig::optOut) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + PostHogConfig::getAnonymousId);
  *puVar1 = FUN_100120a8c;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + PostHogConfig::bootstrap) = 0;
  *(undefined1 *)(unaff_x20 + PostHogConfig::reuseAnonymousId) = 0;
  *(undefined8 *)(unaff_x20 + PostHogConfig::_propertiesSanitizer) = 0;
  *(undefined8 *)(unaff_x20 + PostHogConfig::personProfiles) = 2;
  *(undefined1 *)(unaff_x20 + PostHogConfig::setDefaultPersonProperties) = 1;
  *(undefined8 *)(unaff_x20 + PostHogConfig::evaluationContexts) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + PostHogConfig::appGroupIdentifier);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + PostHogConfig::snapshotEndpoint);
  *puVar1 = 0x2f732f;
  puVar1[1] = 0xe300000000000000;
  lVar10 = PostHogConfig::errorTrackingConfig;
  IVar5 = 0;
  FUN_100104fc0();
  _objc_allocWithZone();
  IVar5 = objc_stub::init(IVar5);
  *(ID *)(unaff_x20 + lVar10) = IVar5;
  lVar10 = PostHogConfig::logs;
  IVar5 = 0;
  FUN_100110400();
  _objc_allocWithZone();
  IVar5 = objc_stub::init(IVar5);
  *(ID *)(unaff_x20 + lVar10) = IVar5;
  *(undefined8 *)(unaff_x20 + PostHogConfig::urlSessionConfiguration) = 0;
  *(undefined8 *)(unaff_x20 + PostHogConfig::requestHeaders) = 0;
  *(undefined1 *)(unaff_x20 + PostHogConfig::disableReachabilityForTesting) = 0;
  *(undefined1 *)(unaff_x20 + PostHogConfig::disableQueueTimerForTesting) = 0;
  *(undefined1 *)(unaff_x20 + PostHogConfig::disableFlushOnBackgroundForTesting) = 0;
  *(undefined1 *)(unaff_x20 + PostHogConfig::disableRemoteConfigForTesting) = 0;
  *(undefined8 *)(unaff_x20 + PostHogConfig::storageManager) = 0;
  *(undefined1 *)(unaff_x20 + PostHogConfig::_surveys) = 1;
  lVar10 = PostHogConfig::_surveysConfig;
  IVar5 = 0;
  FUN_10016aa88();
  _objc_allocWithZone();
  IVar5 = objc_stub::init(IVar5);
  *(ID *)(unaff_x20 + lVar10) = IVar5;
  lVar10 = PostHogConfig::beforeSend;
  puVar3 = &DAT_100fae2c8;
  FUN_1000f7830(&DAT_100fae2c8,&DAT_100c2db70);
  _swift_allocObject();
  self = &_OBJC_CLASS___NSLock;
  _objc_allocWithZone();
  CVar6.unknown = (undefined *)objc_stub::init(self);
  *(undefined **)(puVar3 + 0x10) = CVar6.unknown;
  *(code **)(puVar3 + 0x18) = FUN_1000f8134;
  *(undefined8 *)(puVar3 + 0x20) = 0;
  *(undefined **)(unaff_x20 + lVar10) = puVar3;
  Foundation::CharacterSet::get_whitespacesAndNewlines(CVar6);
  FUN_1001013b8();
  SVar12 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters
                     ((CharacterSet)(puVar9 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0)));
  (**(code **)(lVar11 + 8))(puVar9 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0),CVar4.unknown);
  _swift_bridgeObjectRelease(param_2);
  *(String *)(unaff_x20 + PostHogConfig::projectToken) = SVar12;
  Foundation::URL::_init();
  UVar7 = Foundation::URL::typeMetadataAccessor();
  lVar10 = *(long *)(UVar7.unknown + -8);
  puVar8 = puVar9;
  (**(code **)(lVar10 + 0x30))(puVar9,1,UVar7.unknown);
  if ((int)puVar8 != 1) {
    (**(code **)(lVar10 + 0x20))(unaff_x20 + PostHogConfig::host,puVar9,UVar7.unknown);
    FUN_100123b5c();
    _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff80,"init");
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1001225e0);
  (*pcVar2)();
}



/* Address: 0x1001225e0 | PostHogConfig::projectToken: */

/* Function Stack Size: 0x18 bytes */

ID PostHogConfig::projectToken_(ID param_1,SEL param_2,ID param_3)

{
  char *pcVar1;
  String SVar2;
  
  SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pcVar1 = SVar2.str;
  FUN_1001221c4(pcVar1,SVar2.bridgeObject);
  return (ID)pcVar1;
}



/* Address: 0x100122608 | FUN_100122608 */

void FUN_100122608(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_allocWithZone();
  FUN_100122660(param_1,param_2,param_3,param_4);
  return;
}



/* Address: 0x100122660 | FUN_100122660 */

void FUN_100122660(undefined8 param_1,undefined8 param_2,undefined8 param_3,CharacterSet param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  CharacterSet CVar7;
  ID IVar8;
  undefined *self;
  CharacterSet CVar9;
  long lVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar11;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  long lVar12;
  code *pcVar13;
  code *pcVar14;
  CharacterSet in;
  void *pvVar15;
  String SVar16;
  String SVar17;
  long local_c0;
  undefined8 local_b8;
  undefined *local_b0;
  undefined8 local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  
  puVar6 = &DAT_100fae670;
  local_b8 = param_2;
  local_a8 = param_1;
  FUN_1000f7830(&DAT_100fae670,&DAT_100c2e0e8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar6 + -8) + 0x40));
  lVar11 = (long)&local_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_c0 = lVar11;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar11 = lVar11 - extraout_x12;
  local_88 = lVar11;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar11 = lVar11 - extraout_x12_00;
  local_a0 = lVar11;
  local_b0 = (undefined *)Foundation::URL::typeMetadataAccessor();
  local_98 = *(long *)(local_b0 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_98 + 0x40));
  lVar11 = lVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_90 = lVar11;
  CVar7 = Foundation::CharacterSet::typeMetadataAccessor();
  lVar12 = *(long *)(CVar7.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar12 + 0x40));
  in.unknown = (undefined *)(lVar11 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  *(undefined8 *)(unaff_x20 + PostHogConfig::flushAt) = 0x14;
  *(undefined8 *)(unaff_x20 + PostHogConfig::maxQueueSize) = 1000;
  *(undefined8 *)(unaff_x20 + PostHogConfig::maxBatchSize) = 0x32;
  *(undefined8 *)(unaff_x20 + PostHogConfig::flushIntervalSeconds) = 0x403e000000000000;
  *(undefined8 *)(unaff_x20 + PostHogConfig::maxRetries) = 3;
  *(undefined8 *)(unaff_x20 + PostHogConfig::featureFlagRequestMaxRetries) = 1;
  *(undefined8 *)(unaff_x20 + PostHogConfig::dataMode) = 2;
  *(undefined1 *)(unaff_x20 + PostHogConfig::sendFeatureFlagEvent) = 1;
  *(undefined1 *)(unaff_x20 + PostHogConfig::preloadFeatureFlags) = 1;
  *(undefined1 *)(unaff_x20 + PostHogConfig::captureApplicationLifecycleEvents) = 1;
  *(undefined1 *)(unaff_x20 + PostHogConfig::captureScreenViews) = 1;
  *(undefined1 *)(unaff_x20 + PostHogConfig::enableSwizzling) = 1;
  *(undefined1 *)(unaff_x20 + PostHogConfig::capturePushNotificationSubscriptions) = 1;
  *(undefined1 *)(unaff_x20 + PostHogConfig::capturePushNotificationOpened) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + PostHogConfig::pushIdentityProvider);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(unaff_x20 + PostHogConfig::debug) = 0;
  *(undefined1 *)(unaff_x20 + PostHogConfig::optOut) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + PostHogConfig::getAnonymousId);
  *puVar1 = FUN_100120a8c;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + PostHogConfig::bootstrap) = 0;
  *(undefined1 *)(unaff_x20 + PostHogConfig::reuseAnonymousId) = 0;
  *(undefined8 *)(unaff_x20 + PostHogConfig::_propertiesSanitizer) = 0;
  *(undefined8 *)(unaff_x20 + PostHogConfig::personProfiles) = 2;
  *(undefined1 *)(unaff_x20 + PostHogConfig::setDefaultPersonProperties) = 1;
  *(undefined8 *)(unaff_x20 + PostHogConfig::evaluationContexts) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + PostHogConfig::appGroupIdentifier);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + PostHogConfig::snapshotEndpoint);
  *puVar1 = 0x2f732f;
  puVar1[1] = 0xe300000000000000;
  lVar11 = PostHogConfig::errorTrackingConfig;
  IVar8 = 0;
  FUN_100104fc0();
  _objc_allocWithZone();
  IVar8 = objc_stub::init(IVar8);
  *(ID *)(unaff_x20 + lVar11) = IVar8;
  lVar11 = PostHogConfig::logs;
  IVar8 = 0;
  FUN_100110400();
  _objc_allocWithZone();
  IVar8 = objc_stub::init(IVar8);
  *(ID *)(unaff_x20 + lVar11) = IVar8;
  *(undefined8 *)(unaff_x20 + PostHogConfig::urlSessionConfiguration) = 0;
  *(undefined8 *)(unaff_x20 + PostHogConfig::requestHeaders) = 0;
  *(undefined1 *)(unaff_x20 + PostHogConfig::disableReachabilityForTesting) = 0;
  *(undefined1 *)(unaff_x20 + PostHogConfig::disableQueueTimerForTesting) = 0;
  *(undefined1 *)(unaff_x20 + PostHogConfig::disableFlushOnBackgroundForTesting) = 0;
  *(undefined1 *)(unaff_x20 + PostHogConfig::disableRemoteConfigForTesting) = 0;
  *(undefined8 *)(unaff_x20 + PostHogConfig::storageManager) = 0;
  *(undefined1 *)(unaff_x20 + PostHogConfig::_surveys) = 1;
  lVar11 = PostHogConfig::_surveysConfig;
  IVar8 = 0;
  FUN_10016aa88();
  _objc_allocWithZone();
  IVar8 = objc_stub::init(IVar8);
  *(ID *)(unaff_x20 + lVar11) = IVar8;
  lVar11 = PostHogConfig::beforeSend;
  puVar6 = &DAT_100fae2c8;
  FUN_1000f7830(&DAT_100fae2c8,&DAT_100c2db70);
  _swift_allocObject();
  self = &_OBJC_CLASS___NSLock;
  _objc_allocWithZone();
  CVar9.unknown = (undefined *)objc_stub::init(self);
  *(undefined **)(puVar6 + 0x10) = CVar9.unknown;
  *(code **)(puVar6 + 0x18) = FUN_1000f8134;
  *(undefined8 *)(puVar6 + 0x20) = 0;
  *(undefined **)(unaff_x20 + lVar11) = puVar6;
  Foundation::CharacterSet::get_whitespacesAndNewlines(CVar9);
  FUN_1001013b8();
  SVar16 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(in);
  pvVar15 = SVar16.bridgeObject;
  pcVar13 = *(code **)(lVar12 + 8);
  (*pcVar13)(in.unknown,CVar7.unknown);
  _swift_bridgeObjectRelease();
  uVar3 = local_b8;
  Foundation::CharacterSet::get_whitespacesAndNewlines(param_4);
  SVar17 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(in);
  (*pcVar13)(in.unknown,CVar7.unknown);
  _swift_bridgeObjectRelease(uVar3);
  *(String *)(unaff_x20 + PostHogConfig::projectToken) = SVar17;
  uVar2 = (ulong)SVar16.str & 0xffffffffffff;
  if (((ulong)pvVar15 & 0x2000000000000000) != 0) {
    uVar2 = (ulong)pvVar15 >> 0x38 & 0xf;
  }
  if (uVar2 == 0) {
    _swift_bridgeObjectRelease(pvVar15);
    pvVar15 = (void *)0x8000000100d922e0;
  }
  lVar11 = local_a0;
  Foundation::URL::_init();
  _swift_bridgeObjectRelease(pvVar15);
  lVar5 = local_88;
  FUN_100123b94(lVar11,local_88);
  lVar12 = local_98;
  puVar6 = local_b0;
  pcVar13 = *(code **)(local_98 + 0x30);
  lVar10 = lVar5;
  (*pcVar13)(lVar5,1,local_b0);
  lVar4 = local_90;
  lVar11 = local_c0;
  if ((int)lVar10 == 1) {
    Foundation::URL::_init();
    lVar10 = lVar11;
    (*pcVar13)(lVar11,1,puVar6);
    if ((int)lVar10 == 1) {
                    /* WARNING: Does not return */
      pcVar13 = (code *)SoftwareBreakpoint(1,0x100122c18);
      (*pcVar13)();
    }
    pcVar14 = *(code **)(lVar12 + 0x20);
    (*pcVar14)(lVar4,lVar11,puVar6);
    lVar11 = lVar5;
    (*pcVar13)(lVar5,1,puVar6);
    if ((int)lVar11 != 1) {
      FUN_100123be4(lVar5);
    }
  }
  else {
    pcVar14 = *(code **)(lVar12 + 0x20);
    (*pcVar14)(local_90,lVar5,puVar6);
  }
  (*pcVar14)(unaff_x20 + PostHogConfig::host,lVar4,puVar6);
  FUN_100123b5c();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff80,"init");
  return;
}



/* Address: 0x100122c18 | PostHogConfig::projectToken:host: */

/* Function Stack Size: 0x20 bytes */

ID PostHogConfig::projectToken_host_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  FUN_100123060();
  return param_1;
}



/* Address: 0x100122c24 | FUN_100122c24 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100122c24(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  NSString *pNVar2;
  ID IVar3;
  ID unaff_x20;
  String SVar4;
  String separator;
  
  _objc_allocWithZone();
  if (DAT_101057340 == '\x01') {
    pcVar1 = &DAT_100fae660;
    FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
    _swift_allocObject();
    pcVar1[0x18] = '\x02';
    pcVar1[0x19] = '\0';
    pcVar1[0x1a] = '\0';
    pcVar1[0x1b] = '\0';
    pcVar1[0x1c] = '\0';
    pcVar1[0x1d] = '\0';
    pcVar1[0x1e] = '\0';
    pcVar1[0x1f] = '\0';
    pcVar1[0x10] = '\x01';
    pcVar1[0x11] = '\0';
    pcVar1[0x12] = '\0';
    pcVar1[0x13] = '\0';
    pcVar1[0x14] = '\0';
    pcVar1[0x15] = '\0';
    pcVar1[0x16] = '\0';
    pcVar1[0x17] = '\0';
    *(undefined **)(pcVar1 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
    pcVar1[0x20] = 'g';
    pcVar1[0x21] = '\0';
    pcVar1[0x22] = '\0';
    pcVar1[0x23] = '\0';
    pcVar1[0x24] = '\0';
    pcVar1[0x25] = '\0';
    pcVar1[0x26] = '\0';
    pcVar1[0x27] = -0x30;
    pcVar1[0x28] = '`';
    pcVar1[0x29] = '$';
    pcVar1[0x2a] = -0x27;
    pcVar1[0x2b] = '\0';
    pcVar1[0x2c] = '\x01';
    pcVar1[0x2d] = '\0';
    pcVar1[0x2e] = '\0';
    pcVar1[0x2f] = -0x80;
    SVar4.bridgeObject = (void *)0x20;
    SVar4.str = pcVar1;
    separator.bridgeObject = (void *)0xa;
    separator.str = (char *)0xe100000000000000;
    Swift::_print(SVar4,separator);
    _swift_release(pcVar1);
  }
  pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_2);
  IVar3 = objc_stub::projectToken_(unaff_x20,pNVar2);
  return IVar3;
}



/* Address: 0x100122d10 | FUN_100122d10 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100122d10(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  NSString *pNVar2;
  ID IVar3;
  ID unaff_x20;
  String SVar4;
  String separator;
  
  if (DAT_101057340 == '\x01') {
    pcVar1 = &DAT_100fae660;
    FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
    _swift_allocObject();
    pcVar1[0x18] = '\x02';
    pcVar1[0x19] = '\0';
    pcVar1[0x1a] = '\0';
    pcVar1[0x1b] = '\0';
    pcVar1[0x1c] = '\0';
    pcVar1[0x1d] = '\0';
    pcVar1[0x1e] = '\0';
    pcVar1[0x1f] = '\0';
    pcVar1[0x10] = '\x01';
    pcVar1[0x11] = '\0';
    pcVar1[0x12] = '\0';
    pcVar1[0x13] = '\0';
    pcVar1[0x14] = '\0';
    pcVar1[0x15] = '\0';
    pcVar1[0x16] = '\0';
    pcVar1[0x17] = '\0';
    *(undefined **)(pcVar1 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
    pcVar1[0x20] = 'g';
    pcVar1[0x21] = '\0';
    pcVar1[0x22] = '\0';
    pcVar1[0x23] = '\0';
    pcVar1[0x24] = '\0';
    pcVar1[0x25] = '\0';
    pcVar1[0x26] = '\0';
    pcVar1[0x27] = -0x30;
    pcVar1[0x28] = '`';
    pcVar1[0x29] = '$';
    pcVar1[0x2a] = -0x27;
    pcVar1[0x2b] = '\0';
    pcVar1[0x2c] = '\x01';
    pcVar1[0x2d] = '\0';
    pcVar1[0x2e] = '\0';
    pcVar1[0x2f] = -0x80;
    SVar4.bridgeObject = (void *)0x20;
    SVar4.str = pcVar1;
    separator.bridgeObject = (void *)0xa;
    separator.str = (char *)0xe100000000000000;
    Swift::_print(SVar4,separator);
    _swift_release(pcVar1);
  }
  pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_2);
  IVar3 = objc_stub::projectToken_(unaff_x20,pNVar2);
  return IVar3;
}



/* Address: 0x100122df4 | PostHogConfig::apiKey: */

/* Function Stack Size: 0x18 bytes */

ID PostHogConfig::apiKey_(ID param_1,SEL param_2,ID param_3)

{
  char *pcVar1;
  String SVar2;
  
  SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pcVar1 = SVar2.str;
  FUN_100122d10(pcVar1,SVar2.bridgeObject);
  return (ID)pcVar1;
}



/* Address: 0x100122e1c | FUN_100122e1c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100122e1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  NSString *pNVar2;
  NSString *pNVar3;
  ID IVar4;
  ID unaff_x20;
  String SVar5;
  String separator;
  
  _objc_allocWithZone();
  if (DAT_101057340 == '\x01') {
    pcVar1 = &DAT_100fae660;
    FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
    _swift_allocObject();
    pcVar1[0x18] = '\x02';
    pcVar1[0x19] = '\0';
    pcVar1[0x1a] = '\0';
    pcVar1[0x1b] = '\0';
    pcVar1[0x1c] = '\0';
    pcVar1[0x1d] = '\0';
    pcVar1[0x1e] = '\0';
    pcVar1[0x1f] = '\0';
    pcVar1[0x10] = '\x01';
    pcVar1[0x11] = '\0';
    pcVar1[0x12] = '\0';
    pcVar1[0x13] = '\0';
    pcVar1[0x14] = '\0';
    pcVar1[0x15] = '\0';
    pcVar1[0x16] = '\0';
    pcVar1[0x17] = '\0';
    *(undefined **)(pcVar1 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
    pcVar1[0x20] = 'g';
    pcVar1[0x21] = '\0';
    pcVar1[0x22] = '\0';
    pcVar1[0x23] = '\0';
    pcVar1[0x24] = '\0';
    pcVar1[0x25] = '\0';
    pcVar1[0x26] = '\0';
    pcVar1[0x27] = -0x30;
    pcVar1[0x28] = '`';
    pcVar1[0x29] = '$';
    pcVar1[0x2a] = -0x27;
    pcVar1[0x2b] = '\0';
    pcVar1[0x2c] = '\x01';
    pcVar1[0x2d] = '\0';
    pcVar1[0x2e] = '\0';
    pcVar1[0x2f] = -0x80;
    SVar5.bridgeObject = (void *)0x20;
    SVar5.str = pcVar1;
    separator.bridgeObject = (void *)0xa;
    separator.str = (char *)0xe100000000000000;
    Swift::_print(SVar5,separator);
    _swift_release(pcVar1);
  }
  pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_2);
  pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_4);
  IVar4 = objc_stub::projectToken_host_(unaff_x20,pNVar2,pNVar3);
  return IVar4;
}



/* Address: 0x100122f3c | FUN_100122f3c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100122f3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  NSString *pNVar2;
  NSString *pNVar3;
  ID IVar4;
  ID unaff_x20;
  String SVar5;
  String separator;
  
  if (DAT_101057340 == '\x01') {
    pcVar1 = &DAT_100fae660;
    FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
    _swift_allocObject();
    pcVar1[0x18] = '\x02';
    pcVar1[0x19] = '\0';
    pcVar1[0x1a] = '\0';
    pcVar1[0x1b] = '\0';
    pcVar1[0x1c] = '\0';
    pcVar1[0x1d] = '\0';
    pcVar1[0x1e] = '\0';
    pcVar1[0x1f] = '\0';
    pcVar1[0x10] = '\x01';
    pcVar1[0x11] = '\0';
    pcVar1[0x12] = '\0';
    pcVar1[0x13] = '\0';
    pcVar1[0x14] = '\0';
    pcVar1[0x15] = '\0';
    pcVar1[0x16] = '\0';
    pcVar1[0x17] = '\0';
    *(undefined **)(pcVar1 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
    pcVar1[0x20] = 'g';
    pcVar1[0x21] = '\0';
    pcVar1[0x22] = '\0';
    pcVar1[0x23] = '\0';
    pcVar1[0x24] = '\0';
    pcVar1[0x25] = '\0';
    pcVar1[0x26] = '\0';
    pcVar1[0x27] = -0x30;
    pcVar1[0x28] = '`';
    pcVar1[0x29] = '$';
    pcVar1[0x2a] = -0x27;
    pcVar1[0x2b] = '\0';
    pcVar1[0x2c] = '\x01';
    pcVar1[0x2d] = '\0';
    pcVar1[0x2e] = '\0';
    pcVar1[0x2f] = -0x80;
    SVar5.bridgeObject = (void *)0x20;
    SVar5.str = pcVar1;
    separator.bridgeObject = (void *)0xa;
    separator.str = (char *)0xe100000000000000;
    Swift::_print(SVar5,separator);
    _swift_release(pcVar1);
  }
  pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_2);
  pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_4);
  IVar4 = objc_stub::projectToken_host_(unaff_x20,pNVar2,pNVar3);
  return IVar4;
}



/* Address: 0x100123054 | PostHogConfig::apiKey:host: */

/* Function Stack Size: 0x20 bytes */

ID PostHogConfig::apiKey_host_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  FUN_100123060();
  return param_1;
}



/* Address: 0x100123060 | FUN_100123060 */

void FUN_100123060(void)

{
  code *in_x4;
  String SVar1;
  String SVar2;
  
  SVar1 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  (*in_x4)(SVar1.str,SVar1.bridgeObject,SVar2.str,SVar2.bridgeObject);
  return;
}



/* Address: 0x1001230c4 | FUN_1001230c4 */

undefined * FUN_1001230c4(void)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  puVar6 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (*(char *)(*(long *)(unaff_x20 + PostHogConfig::errorTrackingConfig) +
               _TtC7PostHog26PostHogErrorTrackingConfig::_autoCapture) == '\x01') {
    lVar3 = 0;
    FUN_10010378c();
    _swift_allocObject();
    _swift_unknownObjectWeakInit(lVar3 + 0x10,0);
    *(undefined8 *)(lVar3 + 0x38) = 0;
    *(undefined8 *)(lVar3 + 0x30) = 0;
    *(undefined8 *)(lVar3 + 0x28) = 0;
    *(undefined8 *)(lVar3 + 0x20) = 0;
    *(undefined8 *)(lVar3 + 0x18) = 0;
    puVar4 = (undefined *)0x0;
    FUN_100105994(0,1,1,PTR___swiftEmptyArrayStorage_100eae0d8);
    uVar1 = *(ulong *)(puVar4 + 0x10);
    puVar6 = puVar4;
    if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar1) {
      puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar4 + 0x18));
      FUN_100105994(puVar6,uVar1 + 1,1,puVar4);
    }
    *(ulong *)(puVar6 + 0x10) = uVar1 + 1;
    *(long *)(puVar6 + uVar1 * 0x10 + 0x20) = lVar3;
    *(undefined ***)(puVar6 + uVar1 * 0x10 + 0x28) = &PTR_PTR_100eb7a98;
  }
  lVar3 = PostHogConfig::captureScreenViews;
  _swift_beginAccess(unaff_x20 + PostHogConfig::captureScreenViews,auStack_58,0,0);
  if (*(char *)(unaff_x20 + lVar3) == '\x01') {
    lVar3 = 0;
    FUN_100168fd0();
    _swift_allocObject();
    _swift_unknownObjectWeakInit(lVar3 + 0x10,0);
    puVar4 = puVar6;
    _swift_isUniquelyReferenced_nonNull_native();
    puVar5 = puVar6;
    if (((ulong)puVar4 & 1) == 0) {
      puVar5 = (undefined *)0x0;
      FUN_100105994(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
    }
    uVar1 = *(ulong *)(puVar5 + 0x10);
    puVar6 = puVar5;
    if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar1) {
      puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
      FUN_100105994(puVar6,uVar1 + 1,1,puVar5);
    }
    *(ulong *)(puVar6 + 0x10) = uVar1 + 1;
    *(long *)(puVar6 + uVar1 * 0x10 + 0x20) = lVar3;
    *(undefined ***)(puVar6 + uVar1 * 0x10 + 0x28) = &PTR_PTR_100eb9708;
  }
  lVar3 = PostHogConfig::captureApplicationLifecycleEvents;
  _swift_beginAccess(unaff_x20 + PostHogConfig::captureApplicationLifecycleEvents,auStack_70,0,0);
  if (*(char *)(unaff_x20 + lVar3) == '\x01') {
    lVar3 = 0;
    FUN_1000fae80();
    _swift_allocObject();
    _swift_unknownObjectWeakInit(lVar3 + 0x10,0);
    *(undefined2 *)(lVar3 + 0x18) = 0x101;
    *(undefined8 *)(lVar3 + 0x28) = 0;
    *(undefined8 *)(lVar3 + 0x30) = 0;
    *(undefined8 *)(lVar3 + 0x20) = 0;
    puVar4 = puVar6;
    _swift_isUniquelyReferenced_nonNull_native();
    puVar5 = puVar6;
    if (((ulong)puVar4 & 1) == 0) {
      puVar5 = (undefined *)0x0;
      FUN_100105994(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
    }
    uVar1 = *(ulong *)(puVar5 + 0x10);
    puVar6 = puVar5;
    if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar1) {
      puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
      FUN_100105994(puVar6,uVar1 + 1,1,puVar5);
    }
    *(ulong *)(puVar6 + 0x10) = uVar1 + 1;
    *(long *)(puVar6 + uVar1 * 0x10 + 0x20) = lVar3;
    *(undefined ***)(puVar6 + uVar1 * 0x10 + 0x28) = &PTR_PTR_100eb7540;
  }
  bVar2 = Swift::_stdlib_isOSVersionAtLeast(0xb,0,0);
  lVar3 = PostHogConfig::capturePushNotificationOpened;
  if (((bVar2 & 1) != 0) &&
     (_swift_beginAccess(unaff_x20 + PostHogConfig::capturePushNotificationOpened,auStack_88,0,0),
     *(char *)(unaff_x20 + lVar3) == '\x01')) {
    lVar3 = 0;
    FUN_10015e19c();
    _swift_allocObject();
    _swift_unknownObjectWeakInit(lVar3 + 0x10,0);
    *(undefined8 *)(lVar3 + 0x18) = 0;
    puVar4 = puVar6;
    _swift_isUniquelyReferenced_nonNull_native();
    puVar5 = puVar6;
    if (((ulong)puVar4 & 1) == 0) {
      puVar5 = (undefined *)0x0;
      FUN_100105994(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
    }
    uVar1 = *(ulong *)(puVar5 + 0x10);
    puVar6 = puVar5;
    if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar1) {
      puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
      FUN_100105994(puVar6,uVar1 + 1,1,puVar5);
    }
    *(ulong *)(puVar6 + 0x10) = uVar1 + 1;
    *(long *)(puVar6 + uVar1 * 0x10 + 0x20) = lVar3;
    *(undefined ***)(puVar6 + uVar1 * 0x10 + 0x28) = &PTR_PTR_100eb9008;
  }
  return puVar6;
}



/* Address: 0x100123414 | FUN_100123414 */

void FUN_100123414(undefined8 param_1)

{
  FUN_10012343c(param_1,&DAT_100eb80a0,FUN_100123c50);
  return;
}



/* Address: 0x100123428 | FUN_100123428 */

void FUN_100123428(undefined8 param_1)

{
  FUN_10012343c(param_1,&UNK_100eb80c8,thunk_FUN_100123c50);
  return;
}



/* Address: 0x10012343c | FUN_10012343c */

void FUN_10012343c(undefined8 param_1,long param_2,undefined8 param_3)

{
  long unaff_x20;
  long lVar1;
  undefined8 uVar2;
  ID self;
  
  lVar1 = *(long *)(unaff_x20 + PostHogConfig::beforeSend);
  _swift_allocObject(param_2,0x18,7);
  *(undefined8 *)(param_2 + 0x10) = param_1;
  self = *(ID *)(lVar1 + 0x10);
  _swift_retain(lVar1);
  _swift_bridgeObjectRetain(param_1);
  objc_stub::lock(self);
  uVar2 = *(undefined8 *)(lVar1 + 0x20);
  *(undefined8 *)(lVar1 + 0x18) = param_3;
  *(long *)(lVar1 + 0x20) = param_2;
  _swift_retain(param_2);
  _swift_release(uVar2);
  objc_stub::unlock(self);
  _swift_release(param_2);
  _swift_release(lVar1);
  return;
}



/* Address: 0x1001234d8 | FUN_1001234d8 */

void FUN_1001234d8(undefined *param_1)

{
  undefined8 *puVar1;
  _CocoaArrayWrapper _Var2;
  undefined *puVar3;
  code *pcVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long unaff_x20;
  ulong uVar9;
  ID self;
  ulong uVar10;
  long *plVar11;
  undefined8 uVar12;
  
  if ((ulong)param_1 >> 0x3e == 0) {
    uVar9 = *(ulong *)(((ulong)param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var2.unknown = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_1) {
      _Var2.unknown = param_1;
    }
    uVar9 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar9 != 0) {
    FUN_10010fa70(0,uVar9 & ((long)uVar9 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100123750);
      (*pcVar4)();
    }
    if (((ulong)param_1 & 0xc000000000000001) == 0) {
      plVar11 = (long *)(param_1 + 0x20);
      do {
        puVar1 = (undefined8 *)(*plVar11 + _TtC7PostHog20BoxedBeforeSendBlock::block);
        puVar7 = &DAT_100eb8140;
        _swift_allocObject(&DAT_100eb8140,0x20,7);
        uVar6 = puVar1[1];
        uVar12 = *puVar1;
        *(undefined8 *)(puVar7 + 0x18) = puVar1[1];
        *(undefined8 *)(puVar7 + 0x10) = uVar12;
        uVar10 = *(ulong *)(puVar3 + 0x10);
        uVar5 = *(ulong *)(puVar3 + 0x18);
        _swift_retain(uVar6);
        if (uVar5 >> 1 <= uVar10) {
          FUN_10010fa70(1 < uVar5,uVar10 + 1,1);
        }
        *(ulong *)(puVar3 + 0x10) = uVar10 + 1;
        *(code **)(puVar3 + uVar10 * 0x10 + 0x20) = thunk_FUN_1001103b0;
        *(undefined **)(puVar3 + uVar10 * 0x10 + 0x28) = puVar7;
        uVar9 = uVar9 - 1;
        plVar11 = plVar11 + 1;
      } while (uVar9 != 0);
    }
    else {
      uVar10 = 0;
      do {
        uVar5 = uVar10;
        FUN_10010f444(uVar10,param_1);
        puVar1 = (undefined8 *)(uVar5 + _TtC7PostHog20BoxedBeforeSendBlock::block);
        puVar7 = &DAT_100eb80f0;
        _swift_allocObject(&DAT_100eb80f0,0x20,7);
        uVar6 = puVar1[1];
        uVar12 = *puVar1;
        *(undefined8 *)(puVar7 + 0x18) = puVar1[1];
        *(undefined8 *)(puVar7 + 0x10) = uVar12;
        _swift_retain(uVar6);
        _swift_unknownObjectRelease(uVar5);
        uVar5 = *(ulong *)(puVar3 + 0x10);
        if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar5) {
          FUN_10010fa70(1 < *(ulong *)(puVar3 + 0x18),uVar5 + 1,1);
        }
        uVar10 = uVar10 + 1;
        *(ulong *)(puVar3 + 0x10) = uVar5 + 1;
        *(code **)(puVar3 + uVar5 * 0x10 + 0x20) = FUN_1001103b0;
        *(undefined **)(puVar3 + uVar5 * 0x10 + 0x28) = puVar7;
      } while (uVar9 != uVar10);
    }
  }
  lVar8 = *(long *)(unaff_x20 + PostHogConfig::beforeSend);
  puVar7 = &DAT_100eb8118;
  _swift_allocObject(&DAT_100eb8118,0x18,7);
  *(undefined **)(puVar7 + 0x10) = puVar3;
  self = *(ID *)(lVar8 + 0x10);
  _swift_retain(lVar8);
  _swift_bridgeObjectRetain(puVar3);
  objc_stub::lock(self);
  uVar6 = *(undefined8 *)(lVar8 + 0x20);
  *(code **)(lVar8 + 0x18) = thunk_FUN_100123c50;
  *(undefined **)(lVar8 + 0x20) = puVar7;
  _swift_retain(puVar7);
  _swift_release(uVar6);
  objc_stub::unlock(self);
  _swift_release(puVar7);
  _swift_release(lVar8);
  _swift_bridgeObjectRelease(puVar3);
  return;
}


