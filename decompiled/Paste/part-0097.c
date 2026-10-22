/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10011f11c | FUN_10011f11c */

void FUN_10011f11c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = PostHogConfig::maxQueueSize;
  _swift_beginAccess(unaff_x20 + PostHogConfig::maxQueueSize,auStack_48,1,0);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  return;
}



/* Address: 0x10011f168 | FUN_10011f168 */

undefined1  [16] FUN_10011f168(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = PostHogConfig::maxQueueSize;
  _swift_beginAccess(unaff_x20 + PostHogConfig::maxQueueSize,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = _swift_endAccess;
  return auVar2;
}



/* Address: 0x10011f1a8 | PostHogConfig::maxBatchSize */

/* Function Stack Size: 0x10 bytes */

long_long PostHogConfig::maxBatchSize(ID param_1,SEL param_2)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = maxBatchSize;
  _swift_beginAccess(param_1 + maxBatchSize,auStack_38,0,0);
  return *(long_long *)(param_1 + lVar1);
}



/* Address: 0x10011f1ec | FUN_10011f1ec */

undefined8 FUN_10011f1ec(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = PostHogConfig::maxBatchSize;
  _swift_beginAccess(unaff_x20 + PostHogConfig::maxBatchSize,auStack_38,0,0);
  return *(undefined8 *)(unaff_x20 + lVar1);
}



/* Address: 0x10011f22c | PostHogConfig::setMaxBatchSize: */

/* Function Stack Size: 0x18 bytes */

void PostHogConfig::setMaxBatchSize_(ID param_1,SEL param_2,long_long param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = maxBatchSize;
  _swift_beginAccess(param_1 + maxBatchSize,auStack_48,1,0);
  *(long_long *)(param_1 + lVar1) = param_3;
  return;
}



/* Address: 0x10011f27c | FUN_10011f27c */

void FUN_10011f27c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = PostHogConfig::maxBatchSize;
  _swift_beginAccess(unaff_x20 + PostHogConfig::maxBatchSize,auStack_48,1,0);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  return;
}



/* Address: 0x10011f2c8 | FUN_10011f2c8 */

undefined1  [16] FUN_10011f2c8(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = PostHogConfig::maxBatchSize;
  _swift_beginAccess(unaff_x20 + PostHogConfig::maxBatchSize,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = _swift_endAccess;
  return auVar2;
}



/* Address: 0x10011f308 | PostHogConfig::flushIntervalSeconds */

/* Function Stack Size: 0x10 bytes */

double PostHogConfig::flushIntervalSeconds(ID param_1,SEL param_2)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = flushIntervalSeconds;
  _swift_beginAccess(param_1 + flushIntervalSeconds,auStack_38,0,0);
  return *(double *)(param_1 + lVar1);
}



/* Address: 0x10011f34c | FUN_10011f34c */

undefined8 FUN_10011f34c(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = PostHogConfig::flushIntervalSeconds;
  _swift_beginAccess(unaff_x20 + PostHogConfig::flushIntervalSeconds,auStack_38,0,0);
  return *(undefined8 *)(unaff_x20 + lVar1);
}



/* Address: 0x10011f38c | PostHogConfig::setFlushIntervalSeconds: */

/* Function Stack Size: 0x18 bytes */

void PostHogConfig::setFlushIntervalSeconds_(ID param_1,SEL param_2,double param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = flushIntervalSeconds;
  _swift_beginAccess(param_1 + flushIntervalSeconds,auStack_48,1,0);
  *(double *)(param_1 + lVar1) = param_3;
  return;
}



/* Address: 0x10011f3dc | FUN_10011f3dc */

void FUN_10011f3dc(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = PostHogConfig::flushIntervalSeconds;
  _swift_beginAccess(unaff_x20 + PostHogConfig::flushIntervalSeconds,auStack_48,1,0);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  return;
}



/* Address: 0x10011f428 | FUN_10011f428 */

undefined1  [16] FUN_10011f428(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = PostHogConfig::flushIntervalSeconds;
  _swift_beginAccess(unaff_x20 + PostHogConfig::flushIntervalSeconds,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = _swift_endAccess;
  return auVar2;
}



/* Address: 0x10011f468 | PostHogConfig::maxRetries */

/* Function Stack Size: 0x10 bytes */

long_long PostHogConfig::maxRetries(ID param_1,SEL param_2)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = maxRetries;
  _swift_beginAccess(param_1 + maxRetries,auStack_38,0,0);
  return *(long_long *)(param_1 + lVar1);
}



/* Address: 0x10011f4ac | FUN_10011f4ac */

undefined8 FUN_10011f4ac(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = PostHogConfig::maxRetries;
  _swift_beginAccess(unaff_x20 + PostHogConfig::maxRetries,auStack_38,0,0);
  return *(undefined8 *)(unaff_x20 + lVar1);
}



/* Address: 0x10011f4ec | PostHogConfig::setMaxRetries: */

/* Function Stack Size: 0x18 bytes */

void PostHogConfig::setMaxRetries_(ID param_1,SEL param_2,long_long param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = maxRetries;
  _swift_beginAccess(param_1 + maxRetries,auStack_48,1,0);
  *(long_long *)(param_1 + lVar1) = param_3;
  return;
}



/* Address: 0x10011f53c | FUN_10011f53c */

void FUN_10011f53c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = PostHogConfig::maxRetries;
  _swift_beginAccess(unaff_x20 + PostHogConfig::maxRetries,auStack_48,1,0);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  return;
}



/* Address: 0x10011f588 | FUN_10011f588 */

undefined1  [16] FUN_10011f588(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = PostHogConfig::maxRetries;
  _swift_beginAccess(unaff_x20 + PostHogConfig::maxRetries,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = _swift_endAccess;
  return auVar2;
}



/* Address: 0x10011f5c8 | PostHogConfig::featureFlagRequestMaxRetries */

/* Function Stack Size: 0x10 bytes */

long_long PostHogConfig::featureFlagRequestMaxRetries(ID param_1,SEL param_2)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = featureFlagRequestMaxRetries;
  _swift_beginAccess(param_1 + featureFlagRequestMaxRetries,auStack_38,0,0);
  return *(long_long *)(param_1 + lVar1);
}



/* Address: 0x10011f60c | FUN_10011f60c */

undefined8 FUN_10011f60c(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = PostHogConfig::featureFlagRequestMaxRetries;
  _swift_beginAccess(unaff_x20 + PostHogConfig::featureFlagRequestMaxRetries,auStack_38,0,0);
  return *(undefined8 *)(unaff_x20 + lVar1);
}



/* Address: 0x10011f64c | PostHogConfig::setFeatureFlagRequestMaxRetries: */

/* Function Stack Size: 0x18 bytes */

void PostHogConfig::setFeatureFlagRequestMaxRetries_(ID param_1,SEL param_2,long_long param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = featureFlagRequestMaxRetries;
  _swift_beginAccess(param_1 + featureFlagRequestMaxRetries,auStack_48,1,0);
  *(long_long *)(param_1 + lVar1) = param_3;
  return;
}



/* Address: 0x10011f69c | FUN_10011f69c */

void FUN_10011f69c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = PostHogConfig::featureFlagRequestMaxRetries;
  _swift_beginAccess(unaff_x20 + PostHogConfig::featureFlagRequestMaxRetries,auStack_48,1,0);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  return;
}



/* Address: 0x10011f6e8 | FUN_10011f6e8 */

undefined1  [16] FUN_10011f6e8(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = PostHogConfig::featureFlagRequestMaxRetries;
  _swift_beginAccess(unaff_x20 + PostHogConfig::featureFlagRequestMaxRetries,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = _swift_endAccess;
  return auVar2;
}



/* Address: 0x10011f728 | PostHogConfig::dataMode */

/* Function Stack Size: 0x10 bytes */

long_long PostHogConfig::dataMode(ID param_1,SEL param_2)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = dataMode;
  _swift_beginAccess(param_1 + dataMode,auStack_38,0,0);
  return *(long_long *)(param_1 + lVar1);
}



/* Address: 0x10011f76c | FUN_10011f76c */

undefined8 FUN_10011f76c(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = PostHogConfig::dataMode;
  _swift_beginAccess(unaff_x20 + PostHogConfig::dataMode,auStack_38,0,0);
  return *(undefined8 *)(unaff_x20 + lVar1);
}



/* Address: 0x10011f7ac | PostHogConfig::setDataMode: */

/* Function Stack Size: 0x18 bytes */

void PostHogConfig::setDataMode_(ID param_1,SEL param_2,long_long param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = dataMode;
  _swift_beginAccess(param_1 + dataMode,auStack_48,1,0);
  *(long_long *)(param_1 + lVar1) = param_3;
  return;
}



/* Address: 0x10011f7fc | FUN_10011f7fc */

void FUN_10011f7fc(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = PostHogConfig::dataMode;
  _swift_beginAccess(unaff_x20 + PostHogConfig::dataMode,auStack_48,1,0);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  return;
}



/* Address: 0x10011f848 | FUN_10011f848 */

undefined1  [16] FUN_10011f848(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = PostHogConfig::dataMode;
  _swift_beginAccess(unaff_x20 + PostHogConfig::dataMode,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = _swift_endAccess;
  return auVar2;
}



/* Address: 0x10011f888 | PostHogConfig::sendFeatureFlagEvent */

/* Function Stack Size: 0x10 bytes */

bool PostHogConfig::sendFeatureFlagEvent(ID param_1,SEL param_2)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = sendFeatureFlagEvent;
  _swift_beginAccess(param_1 + sendFeatureFlagEvent,auStack_38,0,0);
  return (bool)*(byte *)(param_1 + lVar1);
}



/* Address: 0x10011f8cc | FUN_10011f8cc */

undefined1 FUN_10011f8cc(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = PostHogConfig::sendFeatureFlagEvent;
  _swift_beginAccess(unaff_x20 + PostHogConfig::sendFeatureFlagEvent,auStack_38,0,0);
  return *(undefined1 *)(unaff_x20 + lVar1);
}



/* Address: 0x10011f90c | PostHogConfig::setSendFeatureFlagEvent: */

/* Function Stack Size: 0x14 bytes */

void PostHogConfig::setSendFeatureFlagEvent_(ID param_1,SEL param_2,bool param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = sendFeatureFlagEvent;
  _swift_beginAccess(param_1 + sendFeatureFlagEvent,auStack_48,1,0);
  *(char *)(param_1 + lVar1) = (char)param_3;
  return;
}



/* Address: 0x10011f95c | FUN_10011f95c */

void FUN_10011f95c(undefined1 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = PostHogConfig::sendFeatureFlagEvent;
  _swift_beginAccess(unaff_x20 + PostHogConfig::sendFeatureFlagEvent,auStack_48,1,0);
  *(undefined1 *)(unaff_x20 + lVar1) = param_1;
  return;
}



/* Address: 0x10011f9a8 | FUN_10011f9a8 */

undefined1  [16] FUN_10011f9a8(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = PostHogConfig::sendFeatureFlagEvent;
  _swift_beginAccess(unaff_x20 + PostHogConfig::sendFeatureFlagEvent,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = _swift_endAccess;
  return auVar2;
}



/* Address: 0x10011f9e8 | PostHogConfig::preloadFeatureFlags */

/* Function Stack Size: 0x10 bytes */

bool PostHogConfig::preloadFeatureFlags(ID param_1,SEL param_2)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = preloadFeatureFlags;
  _swift_beginAccess(param_1 + preloadFeatureFlags,auStack_38,0,0);
  return (bool)*(byte *)(param_1 + lVar1);
}



/* Address: 0x10011fa2c | FUN_10011fa2c */

undefined1 FUN_10011fa2c(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = PostHogConfig::preloadFeatureFlags;
  _swift_beginAccess(unaff_x20 + PostHogConfig::preloadFeatureFlags,auStack_38,0,0);
  return *(undefined1 *)(unaff_x20 + lVar1);
}



/* Address: 0x10011fa6c | PostHogConfig::setPreloadFeatureFlags: */

/* Function Stack Size: 0x14 bytes */

void PostHogConfig::setPreloadFeatureFlags_(ID param_1,SEL param_2,bool param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = preloadFeatureFlags;
  _swift_beginAccess(param_1 + preloadFeatureFlags,auStack_48,1,0);
  *(char *)(param_1 + lVar1) = (char)param_3;
  return;
}



/* Address: 0x10011fabc | FUN_10011fabc */

void FUN_10011fabc(undefined1 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = PostHogConfig::preloadFeatureFlags;
  _swift_beginAccess(unaff_x20 + PostHogConfig::preloadFeatureFlags,auStack_48,1,0);
  *(undefined1 *)(unaff_x20 + lVar1) = param_1;
  return;
}



/* Address: 0x10011fb08 | FUN_10011fb08 */

undefined1  [16] FUN_10011fb08(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = PostHogConfig::preloadFeatureFlags;
  _swift_beginAccess(unaff_x20 + PostHogConfig::preloadFeatureFlags,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = _swift_endAccess;
  return auVar2;
}



/* Address: 0x10011fb48 | PostHogConfig::remoteConfig */

/* Function Stack Size: 0x10 bytes */

bool PostHogConfig::remoteConfig(ID param_1,SEL param_2)

{
  return 1;
}



/* Address: 0x10011fb50 | PostHogConfig::setRemoteConfig: */

/* Function Stack Size: 0x14 bytes */

void PostHogConfig::setRemoteConfig_(ID param_1,SEL param_2,bool param_3)

{
  FUN_100123abc(param_3);
  return;
}



/* Address: 0x10011fb58 | thunk_FUN_100123abc */

void thunk_FUN_100123abc(void)

{
  FUN_100123abc();
  return;
}



/* Address: 0x10011fb5c | FUN_10011fb5c */

undefined1  [16] FUN_10011fb5c(undefined1 *param_1)

{
  undefined1 auVar1 [16];
  
  *param_1 = 1;
  auVar1._8_8_ = param_1;
  auVar1._0_8_ = FUN_10011fb74;
  return auVar1;
}



/* Address: 0x10011fb74 | FUN_10011fb74 */

void FUN_10011fb74(byte *param_1,ulong param_2)

{
  char *pcVar1;
  String SVar2;
  String separator;
  
  if ((param_2 & 1) == 0) {
    if (((*param_1 & 1) == 0) && ((DAT_101057340 & 1) != 0)) goto LAB_10011fba4;
  }
  else if (((*param_1 & 1) == 0) && (DAT_101057340 == 1)) {
LAB_10011fba4:
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
    pcVar1[0x20] = 'b';
    pcVar1[0x21] = '\0';
    pcVar1[0x22] = '\0';
    pcVar1[0x23] = '\0';
    pcVar1[0x24] = '\0';
    pcVar1[0x25] = '\0';
    pcVar1[0x26] = '\0';
    pcVar1[0x27] = -0x30;
    pcVar1[0x28] = -0x60;
    pcVar1[0x29] = '#';
    pcVar1[0x2a] = -0x27;
    pcVar1[0x2b] = '\0';
    pcVar1[0x2c] = '\x01';
    pcVar1[0x2d] = '\0';
    pcVar1[0x2e] = '\0';
    pcVar1[0x2f] = -0x80;
    SVar2.bridgeObject = (void *)0x20;
    SVar2.str = pcVar1;
    separator.bridgeObject = (void *)0xa;
    separator.str = (char *)0xe100000000000000;
    Swift::_print(SVar2,separator);
    _swift_release(pcVar1);
    return;
  }
  return;
}



/* Address: 0x10011fc30 | PostHogConfig::captureApplicationLifecycleEvents */

/* Function Stack Size: 0x10 bytes */

bool PostHogConfig::captureApplicationLifecycleEvents(ID param_1,SEL param_2)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = captureApplicationLifecycleEvents;
  _swift_beginAccess(param_1 + captureApplicationLifecycleEvents,auStack_38,0,0);
  return (bool)*(byte *)(param_1 + lVar1);
}



/* Address: 0x10011fc74 | FUN_10011fc74 */

undefined1 FUN_10011fc74(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = PostHogConfig::captureApplicationLifecycleEvents;
  _swift_beginAccess(unaff_x20 + PostHogConfig::captureApplicationLifecycleEvents,auStack_38,0,0);
  return *(undefined1 *)(unaff_x20 + lVar1);
}



/* Address: 0x10011fcb4 | PostHogConfig::setCaptureApplicationLifecycleEvents: */

/* Function Stack Size: 0x14 bytes */

void PostHogConfig::setCaptureApplicationLifecycleEvents_(ID param_1,SEL param_2,bool param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = captureApplicationLifecycleEvents;
  _swift_beginAccess(param_1 + captureApplicationLifecycleEvents,auStack_48,1,0);
  *(char *)(param_1 + lVar1) = (char)param_3;
  return;
}



/* Address: 0x10011fd04 | FUN_10011fd04 */

void FUN_10011fd04(undefined1 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = PostHogConfig::captureApplicationLifecycleEvents;
  _swift_beginAccess(unaff_x20 + PostHogConfig::captureApplicationLifecycleEvents,auStack_48,1,0);
  *(undefined1 *)(unaff_x20 + lVar1) = param_1;
  return;
}



/* Address: 0x10011fd50 | FUN_10011fd50 */

undefined1  [16] FUN_10011fd50(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = PostHogConfig::captureApplicationLifecycleEvents;
  _swift_beginAccess(unaff_x20 + PostHogConfig::captureApplicationLifecycleEvents,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = _swift_endAccess;
  return auVar2;
}



/* Address: 0x10011fd90 | PostHogConfig::captureScreenViews */

/* Function Stack Size: 0x10 bytes */

bool PostHogConfig::captureScreenViews(ID param_1,SEL param_2)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = captureScreenViews;
  _swift_beginAccess(param_1 + captureScreenViews,auStack_38,0,0);
  return (bool)*(byte *)(param_1 + lVar1);
}



/* Address: 0x10011fdd4 | FUN_10011fdd4 */

undefined1 FUN_10011fdd4(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = PostHogConfig::captureScreenViews;
  _swift_beginAccess(unaff_x20 + PostHogConfig::captureScreenViews,auStack_38,0,0);
  return *(undefined1 *)(unaff_x20 + lVar1);
}



/* Address: 0x10011fe14 | PostHogConfig::setCaptureScreenViews: */

/* Function Stack Size: 0x14 bytes */

void PostHogConfig::setCaptureScreenViews_(ID param_1,SEL param_2,bool param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = captureScreenViews;
  _swift_beginAccess(param_1 + captureScreenViews,auStack_48,1,0);
  *(char *)(param_1 + lVar1) = (char)param_3;
  return;
}



/* Address: 0x10011fe64 | FUN_10011fe64 */

void FUN_10011fe64(undefined1 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = PostHogConfig::captureScreenViews;
  _swift_beginAccess(unaff_x20 + PostHogConfig::captureScreenViews,auStack_48,1,0);
  *(undefined1 *)(unaff_x20 + lVar1) = param_1;
  return;
}



/* Address: 0x10011feb0 | FUN_10011feb0 */

undefined1  [16] FUN_10011feb0(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = PostHogConfig::captureScreenViews;
  _swift_beginAccess(unaff_x20 + PostHogConfig::captureScreenViews,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = _swift_endAccess;
  return auVar2;
}



/* Address: 0x10011fef0 | PostHogConfig::enableSwizzling */

/* Function Stack Size: 0x10 bytes */

bool PostHogConfig::enableSwizzling(ID param_1,SEL param_2)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = enableSwizzling;
  _swift_beginAccess(param_1 + enableSwizzling,auStack_38,0,0);
  return (bool)*(byte *)(param_1 + lVar1);
}



/* Address: 0x10011ff34 | FUN_10011ff34 */

undefined1 FUN_10011ff34(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = PostHogConfig::enableSwizzling;
  _swift_beginAccess(unaff_x20 + PostHogConfig::enableSwizzling,auStack_38,0,0);
  return *(undefined1 *)(unaff_x20 + lVar1);
}



/* Address: 0x10011ff74 | PostHogConfig::setEnableSwizzling: */

/* Function Stack Size: 0x14 bytes */

void PostHogConfig::setEnableSwizzling_(ID param_1,SEL param_2,bool param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = enableSwizzling;
  _swift_beginAccess(param_1 + enableSwizzling,auStack_48,1,0);
  *(char *)(param_1 + lVar1) = (char)param_3;
  return;
}



/* Address: 0x10011ffc4 | FUN_10011ffc4 */

void FUN_10011ffc4(undefined1 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = PostHogConfig::enableSwizzling;
  _swift_beginAccess(unaff_x20 + PostHogConfig::enableSwizzling,auStack_48,1,0);
  *(undefined1 *)(unaff_x20 + lVar1) = param_1;
  return;
}



/* Address: 0x100120010 | FUN_100120010 */

undefined1  [16] FUN_100120010(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = PostHogConfig::enableSwizzling;
  _swift_beginAccess(unaff_x20 + PostHogConfig::enableSwizzling,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = _swift_endAccess;
  return auVar2;
}



/* Address: 0x100120050 | PostHogConfig::capturePushNotificationSubscriptions */

/* Function Stack Size: 0x10 bytes */

bool PostHogConfig::capturePushNotificationSubscriptions(ID param_1,SEL param_2)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = capturePushNotificationSubscriptions;
  _swift_beginAccess(param_1 + capturePushNotificationSubscriptions,auStack_38,0,0);
  return (bool)*(byte *)(param_1 + lVar1);
}



/* Address: 0x100120094 | FUN_100120094 */

undefined1 FUN_100120094(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = PostHogConfig::capturePushNotificationSubscriptions;
  _swift_beginAccess(unaff_x20 + PostHogConfig::capturePushNotificationSubscriptions,auStack_38,0,0)
  ;
  return *(undefined1 *)(unaff_x20 + lVar1);
}



/* Address: 0x1001200d4 | PostHogConfig::setCapturePushNotificationSubscriptions: */

/* Function Stack Size: 0x14 bytes */

void PostHogConfig::setCapturePushNotificationSubscriptions_(ID param_1,SEL param_2,bool param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = capturePushNotificationSubscriptions;
  _swift_beginAccess(param_1 + capturePushNotificationSubscriptions,auStack_48,1,0);
  *(char *)(param_1 + lVar1) = (char)param_3;
  return;
}



/* Address: 0x100120124 | FUN_100120124 */

void FUN_100120124(undefined1 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = PostHogConfig::capturePushNotificationSubscriptions;
  _swift_beginAccess(unaff_x20 + PostHogConfig::capturePushNotificationSubscriptions,auStack_48,1,0)
  ;
  *(undefined1 *)(unaff_x20 + lVar1) = param_1;
  return;
}



/* Address: 0x100120170 | FUN_100120170 */

undefined1  [16] FUN_100120170(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = PostHogConfig::capturePushNotificationSubscriptions;
  _swift_beginAccess(unaff_x20 + PostHogConfig::capturePushNotificationSubscriptions,param_1,0x21,0)
  ;
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = _swift_endAccess;
  return auVar2;
}



/* Address: 0x1001201b0 | PostHogConfig::capturePushNotificationOpened */

/* Function Stack Size: 0x10 bytes */

bool PostHogConfig::capturePushNotificationOpened(ID param_1,SEL param_2)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = capturePushNotificationOpened;
  _swift_beginAccess(param_1 + capturePushNotificationOpened,auStack_38,0,0);
  return (bool)*(byte *)(param_1 + lVar1);
}



/* Address: 0x1001201f4 | FUN_1001201f4 */

undefined1 FUN_1001201f4(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = PostHogConfig::capturePushNotificationOpened;
  _swift_beginAccess(unaff_x20 + PostHogConfig::capturePushNotificationOpened,auStack_38,0,0);
  return *(undefined1 *)(unaff_x20 + lVar1);
}


