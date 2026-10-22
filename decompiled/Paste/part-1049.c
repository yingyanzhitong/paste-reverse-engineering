/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100b4d060 | SentryMetricProfiler::copyMetricProfilerData */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryMetricProfiler::copyMetricProfilerData(ID param_1,SEL param_2)

{
  ID self;
  ID IVar1;
  
  self = objc_stub::dictionary((ID)&_OBJC_CLASS___NSMutableDictionary);
  _objc_sync_enter();
  IVar1 = objc_stub::copy(*(ID *)(param_1 + 0x18));
  objc_stub::setObject_forKeyedSubscript_(self,IVar1,&cf_memory_footprint);
  IVar1 = objc_stub::copy(*(ID *)(param_1 + 0x10));
  objc_stub::setObject_forKeyedSubscript_(self,IVar1,&cf_cpu_usage);
  IVar1 = objc_stub::copy(*(ID *)(param_1 + 0x28));
  objc_stub::setObject_forKeyedSubscript_(self,IVar1,&cf_cpu_energy_usage);
  _objc_sync_exit(param_1);
  return self;
}



/* Address: 0x100b4d14c | SentryMetricProfiler::clear */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

int __thiscall SentryMetricProfiler::clear(SentryMetricProfiler *this)

{
  ID in_x0;
  
  _objc_sync_enter();
  objc_stub::FUN_100bff420(in_x0);
  _objc_sync_exit();
  return 0;
}



/* Address: 0x100b4d198 | SentryMetricProfiler::clearNotThreadSafe */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryMetricProfiler::clearNotThreadSafe(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined8 uVar2;
  
  IVar1 = objc_stub::array((ID)&_OBJC_CLASS___NSMutableArray);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(ID *)(param_1 + 0x10) = IVar1;
  IVar1 = objc_stub::array((ID)&_OBJC_CLASS___NSMutableArray,uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(ID *)(param_1 + 0x18) = IVar1;
  IVar1 = objc_stub::array((ID)&_OBJC_CLASS___NSMutableArray,uVar2);
  *(ID *)(param_1 + 0x28) = IVar1;
  return;
}



/* Address: 0x100b4d214 | SentryMetricProfiler::registerSampler */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryMetricProfiler::registerSampler(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *local_70;
  undefined8 local_68;
  code *local_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  IVar1 = objc_stub::sharedInstance((ID)&objc::class_t::_TtC6Sentry25SentryDependencyContainer);
  IVar1 = objc_stub::FUN_100c01400(IVar1);
  puVar2 = PTR___dispatch_queue_attr_concurrent_100ea8318;
  _dispatch_queue_attr_make_with_qos_class(PTR___dispatch_queue_attr_concurrent_100ea8318,0x11,0);
  local_70 = PTR___NSConcreteStackBlock_100ea82a0;
  local_68 = 0xc2000000;
  local_60 = FUN_100b4d364;
  puStack_58 = &DAT_100f34938;
  _objc_copyWeak(auStack_50,auStack_48);
  IVar1 = objc_stub::FUN_100c0ef80
                    (IVar1,100000000,50000000,"io.sentry.metric-profiler",puVar2,&local_70);
  uVar3 = *(undefined8 *)(param_1 + 8);
  *(ID *)(param_1 + 8) = IVar1;
  _objc_destroyWeak(uVar3,auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Address: 0x100b4d364 | FUN_100b4d364 */

/* WARNING: Function: _objc_loadWeakRetained replaced with injection: _objc_load_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b4d364(long param_1)

{
  objc_stub::recordMetrics(*(ID *)(param_1 + 0x20));
  return 0;
}



/* Address: 0x100b4d390 | SentryMetricProfiler::recordMemoryFootprint */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryMetricProfiler::recordMemoryFootprint(ID param_1,SEL param_2)

{
  int iVar1;
  ID IVar2;
  ID self;
  long local_48;
  
  IVar2 = objc_stub::FUN_100c10120(param_1);
  local_48 = 0;
  IVar2 = objc_stub::FUN_100c06be0(IVar2,&local_48);
  iVar1 = 0;
  if (local_48 == 0) {
    _objc_sync_enter();
    self = *(ID *)(param_1 + 0x18);
    IVar2 = objc_stub::numberWithUnsignedLongLong_((ID)&_OBJC_CLASS___NSNumber,IVar2);
    IVar2 = objc_stub::FUN_100c06d60(param_1,IVar2);
    objc_stub::addObject_(self,IVar2);
    _objc_sync_exit(param_1);
  }
  else {
    FUN_100b3a1f0();
    if (iVar1 != 0) {
      FUN_100b3a2b8("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryMetricProfiler.m"
                    ,0x11a,&cf_Failedtoreadmemoryfootprint___);
    }
  }
  return;
}



/* Address: 0x100b4d4b4 | SentryMetricProfiler::recordCPUsage */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryMetricProfiler::recordCPUsage(ID param_1,SEL param_2)

{
  int iVar1;
  ID IVar2;
  ID self;
  long local_48;
  
  IVar2 = objc_stub::FUN_100c10120(param_1);
  local_48 = 0;
  IVar2 = objc_stub::FUN_100c00200(IVar2,&local_48);
  iVar1 = 0;
  if (local_48 == 0) {
    if (IVar2 != 0) {
      _objc_sync_enter();
      self = *(ID *)(param_1 + 0x10);
      IVar2 = objc_stub::FUN_100c06d60(param_1,IVar2);
      objc_stub::addObject_(self,IVar2);
      _objc_sync_exit(param_1);
    }
  }
  else {
    FUN_100b3a1f0();
    if (iVar1 != 0) {
      FUN_100b3a2b8("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryMetricProfiler.m"
                    ,0x129,&cf_FailedtoreadCPUusages___);
    }
  }
  return;
}



/* Address: 0x100b4d5c8 | SentryMetricProfiler::recordEnergyUsageEstimate */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryMetricProfiler::recordEnergyUsageEstimate(ID param_1,SEL param_2)

{
  int iVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID *pIVar5;
  ID self;
  long local_48;
  
  IVar2 = objc_stub::FUN_100c10120(param_1);
  local_48 = 0;
  IVar2 = objc_stub::FUN_100c001c0(IVar2,&local_48);
  iVar1 = 0;
  if (local_48 == 0) {
    pIVar5 = (ID *)(param_1 + 0x20);
    if (*pIVar5 == 0) {
      *pIVar5 = IVar2;
    }
    else {
      IVar3 = objc_stub::unsignedIntegerValue(IVar2);
      IVar4 = objc_stub::unsignedIntegerValue(*(ID *)(param_1 + 0x20));
      *pIVar5 = IVar2;
      _objc_sync_enter();
      self = *(ID *)(param_1 + 0x28);
      IVar2 = objc_stub::numberWithUnsignedInteger_((ID)&_OBJC_CLASS___NSNumber,IVar3 - IVar4);
      IVar2 = objc_stub::FUN_100c06d60(param_1,IVar2);
      objc_stub::addObject_(self,IVar2);
      _objc_sync_exit(param_1);
    }
  }
  else {
    FUN_100b3a1f0();
    if (iVar1 != 0) {
      FUN_100b3a2b8("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryMetricProfiler.m"
                    ,0x13d,&cf_FailedtoreadCPUenergyusage___);
    }
  }
  return;
}



/* Address: 0x100b4d73c | SentryMetricProfiler::metricReadingForValue: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryMetricProfiler::metricReadingForValue_(ID param_1,SEL param_2,ID param_3)

{
  ID self;
  ID IVar1;
  ID IVar2;
  class_t *self_00;
  
  self_00 = &objc::class_t::SentryMetricReading;
  _objc_alloc();
  self = objc_stub::init((ID)self_00);
  objc_stub::FUN_100c0e840(self,param_3);
  IVar1 = objc_stub::sharedInstance((ID)&objc::class_t::_TtC6Sentry25SentryDependencyContainer);
  IVar1 = objc_stub::FUN_100c00ac0(IVar1);
  IVar2 = objc_stub::FUN_100c100e0(IVar1);
  objc_stub::FUN_100c0a3a0(self,IVar2);
  IVar1 = objc_stub::date(IVar1);
  objc_stub::timeIntervalSince1970(IVar1);
  objc_stub::FUN_100c0a380(self);
  return self;
}



/* Address: 0x100b4d808 | SentryMetricProfiler::systemWrapper */

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryMetricProfiler::systemWrapper(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x38);
}



/* Address: 0x100b4d814 | SentryMetricProfiler::setSystemWrapper: */

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryMetricProfiler::setSystemWrapper_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x38) = param_3;
  return;
}



/* Address: 0x100b4d81c | SentryMetricProfiler::.cxx_destruct */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryMetricProfiler::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



/* Address: 0x100b4d87c | FUN_100b4d87c */

void FUN_100b4d87c(time_t param_1,char *param_2)

{
  tm local_60;
  time_t local_28;
  
  local_60.tm_zone = (char *)0x0;
  local_60.tm_wday = 0;
  local_60.tm_yday = 0;
  local_60.tm_mon = 0;
  local_60.tm_year = 0;
  local_60.tm_gmtoff = 0;
  local_60.tm_isdst = 0;
  local_60._36_4_ = 0;
  local_60.tm_hour = 0;
  local_60.tm_mday = 0;
  local_60.tm_sec = 0;
  local_60.tm_min = 0;
  local_28 = param_1;
  _gmtime_r(&local_28,&local_60);
  _snprintf(param_2,0x15,"%04d-%02d-%02dT%02d:%02d:%02dZ");
  return;
}



/* Address: 0x100b4d8f4 | FUN_100b4d8f4 */

long FUN_100b4d8f4(void)

{
  uint *puVar1;
  long local_58;
  uint local_4c [15];
  
  puVar1 = local_4c;
  FUN_100b4e19c(puVar1,&local_58);
  local_58 = local_58 * (ulong)local_4c[0];
  if ((int)puVar1 == 0) {
    local_58 = 0;
  }
  return local_58;
}



/* Address: 0x100b4d92c | FUN_100b4d92c */

undefined8 FUN_100b4d92c(void)

{
  return 0;
}



/* Address: 0x100b4d934 | FUN_100b4d934 */

undefined ** FUN_100b4d934(void)

{
  return &PTR_FUN_100ffa990;
}



/* Address: 0x100b4d940 | FUN_100b4d940 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100b4d940(undefined8 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  ID IVar4;
  ID IVar5;
  char *pcVar6;
  time_t tVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  char *pcVar11;
  cfstringStruct *pcVar12;
  void *data;
  class_t *self;
  long lVar13;
  undefined8 local_98;
  undefined8 local_90;
  long local_88;
  uchar local_7c [20];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  if ((((uint)DAT_1010e2fa0 == (uint)param_1) || (DAT_1010e2fa0 = (byte)param_1, (uint)param_1 == 0)
      ) || ((DAT_1010e2fa1 & 1) != 0)) goto LAB_100b4e05c;
  DAT_1010e2fa1 = 1;
  IVar4 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle);
  IVar4 = NSBundle::infoDictionary(IVar4);
  DAT_1010e2fb0 = "macOS";
  IVar5 = NSProcessInfo::processInfo((ID)&_OBJC_CLASS___NSProcessInfo);
  if (IVar5 == 0) {
    local_98 = 0;
    local_90 = 0;
    local_88 = 0;
  }
  else {
    NSProcessInfo::operatingSystemVersion(IVar5,&local_98);
  }
  if (local_88 == 0) {
    pcVar12 = &cf__d__d;
  }
  else {
    pcVar12 = &cf__d__d__d;
  }
  IVar5 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,pcVar12);
  FUN_100b4e27c();
  pcVar11 = "hw.model";
  DAT_1010e2fb8 = IVar5;
  FUN_100b4e29c();
  pcVar6 = "kern.version";
  DAT_1010e2fc0 = pcVar11;
  FUN_100b4e29c();
  pcVar11 = "kern.osversion";
  DAT_1010e2fd0 = pcVar6;
  FUN_100b4e29c();
  iVar3 = 0xdc32cc;
  DAT_1010e2fd8 = pcVar11;
  FUN_100b4e500("MobileSubstrate",0);
  DAT_1010e2fe0 = iVar3 != -1;
  pcVar11 = "kern.boottime";
  FUN_100b13130();
  FUN_100b4e310();
  DAT_1010e2fe8 = pcVar11;
  tVar7 = _time((time_t *)0x0);
  FUN_100b4e310();
  DAT_1010e2ff0 = tVar7;
  FUN_100b4e34c();
  FUN_100b4e27c();
  DAT_1010e2ff8 = tVar7;
  IVar5 = NSBundle::objectForKeyedSubscript_(IVar4,&cf_CFBundleExecutable);
  FUN_100b4e27c();
  DAT_1010e3000 = IVar5;
  IVar5 = NSBundle::objectForKeyedSubscript_(IVar4,&cf_CFBundleIdentifier);
  FUN_100b4e27c();
  DAT_1010e3008 = IVar5;
  IVar5 = NSBundle::objectForKeyedSubscript_(IVar4,&cf_CFBundleName);
  FUN_100b4e27c();
  DAT_1010e3010 = IVar5;
  IVar5 = NSBundle::objectForKeyedSubscript_(IVar4,&cf_CFBundleVersion);
  FUN_100b4e27c();
  DAT_1010e3018 = IVar5;
  IVar4 = NSBundle::objectForKeyedSubscript_(IVar4,&cf_CFBundleShortVersionString);
  FUN_100b4e27c();
  IVar5 = 0;
  DAT_1010e3020 = IVar4;
  FUN_100b4e34c();
  if (IVar5 == 0) {
    uVar10 = 0;
  }
  else {
    IVar4 = IVar5;
    _objc_retainAutorelease();
    puVar8 = (undefined8 *)objc_stub::UTF8String(IVar4);
    FUN_100b4e574(puVar8,1);
    if (puVar8 == (undefined8 *)0x0) {
      IVar4 = objc_stub::lastPathComponent(IVar5);
      _objc_retainAutorelease();
      puVar8 = (undefined8 *)objc_stub::UTF8String(IVar4);
      FUN_100b4e574(puVar8,0);
      uVar10 = 0;
      if (puVar8 == (undefined8 *)0x0) goto LAB_100b4dc80;
    }
    uVar9 = 0;
    _CFUUIDCreateFromUUIDBytes(0,*puVar8,puVar8[1]);
    uVar10 = 0;
    _CFUUIDCreateString(0,uVar9);
    _CFRelease(uVar9);
    FUN_100b4e27c();
  }
LAB_100b4dc80:
  iVar3 = 0xd9538a;
  DAT_1010e3028 = uVar10;
  FUN_100b12dac();
  pcVar11 = "hw.cpusubtype";
  FUN_100b12dac();
  if (iVar3 < 0x1000007) {
    if (iVar3 == 7) {
      pcVar11 = "x86";
    }
    else {
      if (iVar3 == 0xc) {
        uVar1 = (int)pcVar11 - 6;
        if ((uVar1 < 7) && ((0x79U >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
          pcVar11 = (&PTR_s_armv6_100f34e58)[uVar1];
          goto LAB_100b4dd3c;
        }
      }
LAB_100b4dd20:
      FUN_100b2bbf8();
    }
  }
  else if (iVar3 == 0x1000007) {
    pcVar11 = "x86_64";
  }
  else {
    if (iVar3 != 0x100000c) goto LAB_100b4dd20;
    pcVar11 = "arm64";
  }
LAB_100b4dd3c:
  DAT_1010e3030 = pcVar11;
  uVar2 = 0xd9538a;
  FUN_100b12dac();
  DAT_1010e3038._0_4_ = uVar2;
  uVar2 = 0xd95395;
  FUN_100b12dac();
  DAT_1010e3038._4_4_ = uVar2;
  IVar4 = NSProcessInfo::processInfo((ID)&_OBJC_CLASS___NSProcessInfo);
  IVar4 = NSProcessInfo::processName(IVar4);
  FUN_100b4e27c();
  DAT_1010e3040 = IVar4;
  IVar4 = NSProcessInfo::processInfo((ID)&_OBJC_CLASS___NSProcessInfo);
  IVar4 = NSProcessInfo::processIdentifier(IVar4);
  DAT_1010e3048._0_4_ = (undefined4)IVar4;
  DAT_1010e3048._4_4_ = _getppid();
  IVar5 = NSMutableData::dataWithLength_((ID)&_OBJC_CLASS___NSMutableData,6);
  IVar4 = IVar5;
  _objc_retainAutorelease();
  IVar4 = objc_stub::mutableBytes(IVar4);
  FUN_100b1331c("en0",IVar4);
  pcVar12 = &cf_hw_machine;
  FUN_100b4e408();
  IVar4 = objc_stub::dataUsingEncoding_((ID)pcVar12,4);
  NSMutableData::appendData_(IVar5,IVar4);
  pcVar12 = &cf_hw_model;
  FUN_100b4e408();
  IVar4 = objc_stub::dataUsingEncoding_((ID)pcVar12,4);
  NSMutableData::appendData_(IVar5,IVar4);
  IVar4 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle);
  IVar4 = NSBundle::bundleIdentifier(IVar4);
  IVar4 = NSBundle::dataUsingEncoding_(IVar4,4);
  if (IVar4 != 0) {
    NSMutableData::appendData_(IVar5,IVar4);
  }
  IVar4 = IVar5;
  _objc_retainAutorelease();
  data = (void *)objc_stub::bytes(IVar4);
  IVar4 = NSMutableData::length(IVar5);
  _CC_SHA1(data,(CC_LONG)IVar4,local_7c);
  IVar4 = NSMutableString::string((ID)&_OBJC_CLASS___NSMutableString);
  lVar13 = 0;
  do {
    NSMutableString::appendFormat_(IVar4,&cf__02x);
    lVar13 = lVar13 + 1;
  } while (lVar13 != 0x14);
  FUN_100b4e27c();
  self = &objc::class_t::_TtC6Sentry27SentryMobileProvisionParser;
  DAT_1010e3050 = IVar4;
  _objc_alloc();
  IVar4 = objc_stub::init((ID)self);
  IVar5 = objc_stub::hasEmbeddedMobileProvisionProfile(IVar4);
  if ((int)IVar5 == 0) {
    IVar4 = objc_stub::lastPathComponent(0);
    IVar4 = objc_stub::isEqualToString_(IVar4,&cf_sandboxReceipt);
    pcVar11 = "unknown";
    DAT_1010e3058 = "test";
    iVar3 = (int)IVar4;
LAB_100b4e01c:
    if (iVar3 == 0) {
      DAT_1010e3058 = pcVar11;
    }
  }
  else {
    IVar5 = objc_stub::mobileProvisionProfileAllowsDebugging(IVar4);
    if ((IVar5 & 1) == 0) {
      IVar4 = objc_stub::mobileProvisionProfileProvisionsAllDevices(IVar4);
      pcVar11 = "adhoc";
      DAT_1010e3058 = "enterprise";
      iVar3 = (int)IVar4;
      goto LAB_100b4e01c;
    }
    DAT_1010e3058 = "debug";
  }
  pcVar11 = "hw.memsize";
  FUN_100b12e80();
  param_1 = 0;
  DAT_1010e3060 = pcVar11;
LAB_100b4e05c:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(param_1);
  }
  return;
}



/* Address: 0x100b4e098 | FUN_100b4e098 */

undefined1 FUN_100b4e098(void)

{
  return DAT_1010e2fa0;
}



/* Address: 0x100b4e0a4 | FUN_100b4e0a4 */

void FUN_100b4e0a4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint *puVar4;
  long lVar5;
  long local_68;
  uint local_60;
  int iStack_5c;
  undefined8 uStack_58;
  
  uVar3 = uRam00000001010e2fc8;
  uVar2 = DAT_1010e2fc0;
  uVar1 = DAT_1010e2fb0;
  if (DAT_1010e2fa0 == '\x01') {
    *(undefined8 *)(param_1 + 0xe8) = DAT_1010e2fb8;
    *(undefined8 *)(param_1 + 0xe0) = uVar1;
    *(undefined8 *)(param_1 + 0xf8) = uVar3;
    *(undefined8 *)(param_1 + 0xf0) = uVar2;
    uVar1 = DAT_1010e2fd0;
    *(undefined8 *)(param_1 + 0x108) = DAT_1010e2fd8;
    *(undefined8 *)(param_1 + 0x100) = uVar1;
    *(undefined1 *)(param_1 + 0x110) = DAT_1010e2fe0;
    uVar1 = DAT_1010e2fe8;
    *(undefined8 *)(param_1 + 0x120) = DAT_1010e2ff0;
    *(undefined8 *)(param_1 + 0x118) = uVar1;
    uVar1 = DAT_1010e2ff8;
    *(undefined8 *)(param_1 + 0x130) = DAT_1010e3000;
    *(undefined8 *)(param_1 + 0x128) = uVar1;
    uVar1 = DAT_1010e3008;
    *(undefined8 *)(param_1 + 0x140) = DAT_1010e3010;
    *(undefined8 *)(param_1 + 0x138) = uVar1;
    uVar1 = DAT_1010e3018;
    *(undefined8 *)(param_1 + 0x150) = DAT_1010e3020;
    *(undefined8 *)(param_1 + 0x148) = uVar1;
    uVar1 = DAT_1010e3028;
    *(undefined8 *)(param_1 + 0x160) = DAT_1010e3030;
    *(undefined8 *)(param_1 + 0x158) = uVar1;
    *(undefined8 *)(param_1 + 0x168) = DAT_1010e3038;
    *(undefined8 *)(param_1 + 0x170) = DAT_1010e3040;
    *(undefined8 *)(param_1 + 0x178) = DAT_1010e3048;
    uVar1 = DAT_1010e3050;
    *(undefined8 *)(param_1 + 0x188) = DAT_1010e3058;
    *(undefined8 *)(param_1 + 0x180) = uVar1;
    *(undefined8 *)(param_1 + 400) = DAT_1010e3060;
    puVar4 = &local_60;
    FUN_100b4e19c(puVar4,&local_68);
    lVar5 = local_68 * (ulong)local_60;
    if ((int)puVar4 == 0) {
      lVar5 = 0;
    }
    *(long *)(param_1 + 0x198) = lVar5;
    puVar4 = &local_60;
    FUN_100b4e19c(puVar4,&local_68);
    lVar5 = 0;
    if ((int)puVar4 != 0) {
      lVar5 = local_68 *
              (ulong)(local_60 + iStack_5c + (int)uStack_58 + (int)((ulong)uStack_58 >> 0x20));
    }
    *(long *)(param_1 + 0x1a0) = lVar5;
  }
  return;
}



/* Address: 0x100b4e19c | FUN_100b4e19c */

bool FUN_100b4e19c(host_info_t param_1,vm_size_t *param_2)

{
  bool bVar1;
  mach_port_t host_priv;
  kern_return_t kVar2;
  kern_return_t kVar3;
  mach_msg_type_number_t local_34;
  
  host_priv = _mach_host_self();
  kVar2 = _host_page_size(host_priv,param_2);
  if (kVar2 == 0) {
    local_34 = 0xf;
    kVar2 = _host_statistics(host_priv,2,param_1,&local_34);
    bVar1 = kVar2 == 0;
    if ((kVar2 != 0) && (kVar3 = kVar2, FUN_100b3a1f0(), kVar3 != 0)) {
      _mach_error_string(kVar2);
      FUN_100b3a2b8("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Monitors/SentryCrashMonitor_System.m"
                    ,0xb9,&cf_host_statistics__s);
    }
  }
  else {
    kVar3 = kVar2;
    FUN_100b3a1f0();
    if (kVar3 != 0) {
      _mach_error_string(kVar2);
      FUN_100b3a2b8("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Monitors/SentryCrashMonitor_System.m"
                    ,0xb2,&cf_host_page_size__s);
    }
    bVar1 = false;
  }
  return bVar1;
}



/* Address: 0x100b4e27c | FUN_100b4e27c */

void FUN_100b4e27c(ID param_1)

{
  char *pcVar1;
  
  if (param_1 != 0) {
    _objc_retainAutorelease();
    pcVar1 = (char *)objc_stub::UTF8String(param_1);
    _strdup(pcVar1);
    return;
  }
  return;
}



/* Address: 0x100b4e29c | FUN_100b4e29c */

void * FUN_100b4e29c(ulong param_1)

{
  ulong uVar1;
  void *pvVar2;
  
  uVar1 = param_1;
  FUN_100b12f54(param_1,0,0);
  if (0 < (int)uVar1) {
    pvVar2 = _malloc(uVar1 & 0xffffffff);
    if (pvVar2 == (void *)0x0) {
      return (void *)0x0;
    }
    FUN_100b12f54(param_1,pvVar2,uVar1);
    if (0 < (int)param_1) {
      return pvVar2;
    }
    _free(pvVar2);
  }
  return (void *)0x0;
}



/* Address: 0x100b4e310 | FUN_100b4e310 */

void * FUN_100b4e310(undefined8 param_1)

{
  void *pvVar1;
  
  pvVar1 = _malloc(0x15);
  if (pvVar1 != (void *)0x0) {
    FUN_100b4d87c(param_1,pvVar1);
  }
  return pvVar1;
}



/* Address: 0x100b4e34c | FUN_100b4e34c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID FUN_100b4e34c(void)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = objc_stub::mainBundle((ID)&_OBJC_CLASS___NSBundle);
  IVar2 = objc_stub::infoDictionary(IVar1);
  IVar1 = objc_stub::bundlePath(IVar1);
  IVar2 = objc_stub::objectForKeyedSubscript_(IVar2,&cf_CFBundleExecutable);
  IVar1 = objc_stub::stringByAppendingPathComponent_(IVar1,IVar2);
  return IVar1;
}



/* Address: 0x100b4e408 | FUN_100b4e408 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

cfstringStruct * FUN_100b4e408(ID param_1)

{
  ulong uVar1;
  ID self;
  ID IVar2;
  ID IVar3;
  cfstringStruct *pcVar4;
  
  IVar3 = param_1;
  _objc_retainAutorelease();
  uVar1 = objc_stub::UTF8String(IVar3);
  FUN_100b12f54(uVar1,0,0);
  if ((int)uVar1 < 1) {
    pcVar4 = &cf___;
  }
  else {
    self = objc_stub::dataWithLength_((ID)&_OBJC_CLASS___NSMutableData,uVar1 & 0xffffffff);
    _objc_retainAutorelease();
    IVar2 = objc_stub::UTF8String(param_1);
    IVar3 = self;
    _objc_retainAutorelease();
    IVar3 = objc_stub::mutableBytes(IVar3);
    FUN_100b12f54(IVar2,IVar3,uVar1);
    if ((int)IVar2 == 0) {
      pcVar4 = (cfstringStruct *)0x0;
    }
    else {
      _objc_retainAutorelease();
      IVar3 = objc_stub::mutableBytes(self);
      pcVar4 = (cfstringStruct *)
               objc_stub::stringWithCString_encoding_((ID)&_OBJC_CLASS___NSString,IVar3,4);
    }
  }
  return pcVar4;
}



/* Address: 0x100b4e500 | FUN_100b4e500 */

char * FUN_100b4e500(char *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  
  if (param_1 != (char *)0x0) {
    pcVar3 = param_1;
    __dyld_image_count();
    if ((uint)pcVar3 != 0) {
      pcVar5 = (char *)0x0;
      do {
        pcVar4 = pcVar5;
        __dyld_get_image_name();
        if (param_2 == 0) {
          pcVar4 = _strstr(pcVar4,param_1);
          if (pcVar4 != (char *)0x0) {
            return pcVar5;
          }
        }
        else {
          iVar2 = _strcmp(pcVar4,param_1);
          if (iVar2 == 0) {
            return pcVar5;
          }
        }
        uVar1 = (int)pcVar5 + 1;
        pcVar5 = (char *)(ulong)uVar1;
      } while ((uint)pcVar3 != uVar1);
    }
  }
  return (char *)0xffffffff;
}



/* Address: 0x100b4e574 | FUN_100b4e574 */

void FUN_100b4e574(int *param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  FUN_100b4e500();
  if ((int)param_1 == -1) {
    return;
  }
  __dyld_get_image_header();
  if (param_1 == (int *)0x0) {
    return;
  }
  iVar3 = *param_1;
  lVar2 = 0x1c;
  if (iVar3 < -0x1120532) {
    if (iVar3 == -0x31051202) goto LAB_100b4e5f4;
    iVar1 = -0x30051202;
  }
  else {
    if (iVar3 == -0x1120532) goto LAB_100b4e5f4;
    iVar1 = -0x1120531;
  }
  if (iVar3 != iVar1) {
    return;
  }
  lVar2 = 0x20;
LAB_100b4e5f4:
  iVar3 = param_1[4];
  if (iVar3 != 0) {
    param_1 = (int *)((long)param_1 + lVar2);
    do {
      if (*param_1 == 0x1b) {
        return;
      }
      param_1 = (int *)((long)param_1 + (ulong)(uint)param_1[1]);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}



/* Address: 0x100b4e630 | thunk_FUN_100b4e634 */

void thunk_FUN_100b4e634(mach_header_64 *param_1,long param_2)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  long lVar4;
  ulong uStack_28;
  
  uStack_28 = 0;
  puVar2 = (uint *)_getsectiondata(param_1,"__DATA","__crash_info",&uStack_28);
  if ((((puVar2 != (uint *)0x0) && (0x27 < uStack_28)) &&
      (puVar3 = puVar2, FUN_100b5d46c(puVar2,0x28), (int)puVar3 != 0)) &&
     (((*puVar2 & 0xfffffffe) == 4 &&
      ((lVar4 = *(long *)(puVar2 + 2), lVar4 != 0 || (*(long *)(puVar2 + 8) != 0)))))) {
    FUN_100b4e888();
    if ((int)lVar4 != 0) {
      *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(puVar2 + 2);
    }
    iVar1 = (int)*(undefined8 *)(puVar2 + 8);
    FUN_100b4e888();
    if (iVar1 != 0) {
      *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(puVar2 + 8);
    }
  }
  return;
}



/* Address: 0x100b4e634 | FUN_100b4e634 */

void FUN_100b4e634(mach_header_64 *param_1,long param_2)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  long lVar4;
  ulong local_28;
  
  local_28 = 0;
  puVar2 = (uint *)_getsectiondata(param_1,"__DATA","__crash_info",&local_28);
  if ((((puVar2 != (uint *)0x0) && (0x27 < local_28)) &&
      (puVar3 = puVar2, FUN_100b5d46c(puVar2,0x28), (int)puVar3 != 0)) &&
     (((*puVar2 & 0xfffffffe) == 4 &&
      ((lVar4 = *(long *)(puVar2 + 2), lVar4 != 0 || (*(long *)(puVar2 + 8) != 0)))))) {
    FUN_100b4e888();
    if ((int)lVar4 != 0) {
      *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(puVar2 + 2);
    }
    iVar1 = (int)*(undefined8 *)(puVar2 + 8);
    FUN_100b4e888();
    if (iVar1 != 0) {
      *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(puVar2 + 8);
    }
  }
  return;
}



/* Address: 0x100b4e6d8 | FUN_100b4e6d8 */

undefined8 FUN_100b4e6d8(int *param_1,undefined8 param_2,undefined8 *param_3,ulong param_4)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  undefined8 local_60;
  undefined8 uStack_58;
  
  iVar4 = *param_1;
  lVar2 = 0x1c;
  if (iVar4 < -0x1120532) {
    if (iVar4 == -0x31051202) goto LAB_100b4e760;
    iVar1 = -0x30051202;
  }
  else {
    if (iVar4 == -0x1120532) goto LAB_100b4e760;
    iVar1 = -0x1120531;
  }
  if (iVar4 != iVar1) {
    return 0;
  }
  lVar2 = 0x20;
LAB_100b4e760:
  iVar4 = param_1[4];
  if (iVar4 == 0) {
    piVar3 = (int *)0x0;
    uStack_58 = 0;
    local_60 = 0;
  }
  else {
    piVar3 = (int *)0x0;
    piVar5 = (int *)((long)param_1 + lVar2);
    uStack_58 = 0;
    local_60 = 0;
    do {
      if (*piVar5 == 0x1b) {
        piVar3 = piVar5 + 2;
      }
      else if ((*piVar5 == 0x19) && (iVar1 = _strcmp((char *)(piVar5 + 2),"__TEXT"), iVar1 == 0)) {
        uStack_58 = *(undefined8 *)(piVar5 + 8);
        local_60 = *(undefined8 *)(piVar5 + 6);
      }
      piVar5 = (int *)((long)piVar5 + (ulong)(uint)piVar5[1]);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  *param_3 = param_1;
  param_3[2] = uStack_58;
  param_3[1] = local_60;
  param_3[3] = param_2;
  param_3[4] = piVar3;
  param_3[5] = *(undefined8 *)(param_1 + 1);
  if ((param_4 & 1) != 0) {
    FUN_100b4e634(param_1,param_3);
  }
  return 1;
}



/* Address: 0x100b4e81c | FUN_100b4e81c */

void FUN_100b4e81c(void)

{
  kern_return_t kVar1;
  mach_msg_type_number_t local_3c;
  long local_38 [3];
  
  if (DAT_1010583b0 == 0) {
    local_3c = 5;
    kVar1 = _task_info(*(task_name_t *)PTR__mach_task_self__100ea8778,0x11,(task_info_t)local_38,
                       &local_3c);
    if ((kVar1 == 0 && local_38[0] != 0) && (*(long *)(local_38[0] + 0x20) != 0)) {
      DAT_1010583b0 = *(long *)(local_38[0] + 0x20);
    }
  }
  return;
}



/* Address: 0x100b4e888 | FUN_100b4e888 */

bool FUN_100b4e888(char *param_1)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  ulong uVar4;
  
  bVar2 = false;
  if (param_1 != (char *)0x0) {
    pcVar3 = param_1;
    FUN_100b5d2cc(param_1,0x401);
    if ((int)pcVar3 < 1) {
      bVar2 = false;
    }
    else {
      uVar4 = (ulong)pcVar3 & 0xffffffff;
      do {
        uVar4 = uVar4 - 1;
        cVar1 = *param_1;
        bVar2 = cVar1 == '\0';
        param_1 = param_1 + 1;
      } while (cVar1 != '\0' && uVar4 != 0);
    }
  }
  return bVar2;
}



/* Address: 0x100b4e8e4 | FUN_100b4e8e4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void * FUN_100b4e8e4(undefined8 param_1,ID param_2)

{
  ID self;
  ID IVar1;
  void *pvVar2;
  ID IVar3;
  ID IVar4;
  
  self = objc_stub::callStackReturnAddresses(param_2);
  IVar1 = objc_stub::count(self);
  if (IVar1 == 0) {
    FUN_100b3a1c0();
    if ((int)IVar1 != 0) {
      FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Monitors/SentryCrashMonitor_NSException_StackCursor.m"
                    ,0x2c,&cf_callStackReturnAddressesisempty_capturingcurrentthreadstacktrace);
    }
    FUN_100b2b938(param_1,0);
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = _malloc(IVar1 << 3);
    if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_100b4e9e8();
    }
    IVar4 = 0;
    do {
      IVar3 = objc_stub::FUN_100c07480(self,IVar4);
      IVar3 = objc_stub::unsignedLongLongValue(IVar3);
      *(ID *)((long)pvVar2 + IVar4 * 8) = IVar3;
      IVar4 = IVar4 + 1;
    } while (IVar1 != IVar4);
    FUN_100b528d0(param_1,pvVar2,IVar1,0);
  }
  return pvVar2;
}



/* Address: 0x100b4e9e8 | FUN_100b4e9e8 */

void FUN_100b4e9e8(void)

{
                    /* WARNING: Subroutine does not return */
  ___assert_rtn("sentrycrashcm_nsexception_initStackCursor",
                "SentryCrashMonitor_NSException_StackCursor.m",0x32,"callstack != NULL");
}



/* Address: 0x100b4ea10 | FUN_100b4ea10 */

mach_port_name_t * FUN_100b4ea10(mach_port_name_t *param_1)

{
  kern_return_t kVar1;
  
  if ((char)param_1[1] == '\x01') {
    kVar1 = _mach_port_deallocate(*(ipc_space_t *)PTR__mach_task_self__100ea8778,*param_1);
    if (kVar1 != 0) {
      FUN_100b57c64();
      FUN_100b5e930("ERROR",
                    "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryThreadHandle.cpp"
                    ,0x21,"%s failed with kern return code: %d, description: %s");
    }
  }
  return param_1;
}



/* Address: 0x100b4ea9c | thunk_FUN_100b4ea10 */

mach_port_name_t * thunk_FUN_100b4ea10(mach_port_name_t *param_1)

{
  kern_return_t kVar1;
  
  if ((char)param_1[1] == '\x01') {
    kVar1 = _mach_port_deallocate(*(ipc_space_t *)PTR__mach_task_self__100ea8778,*param_1);
    if (kVar1 != 0) {
      FUN_100b57c64();
      FUN_100b5e930("ERROR",
                    "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryThreadHandle.cpp"
                    ,0x21,"%s failed with kern return code: %d, description: %s");
    }
  }
  return param_1;
}



/* Address: 0x100b4eaa0 | FUN_100b4eaa0 */

void FUN_100b4eaa0(undefined8 *param_1)

{
  mach_port_t mVar1;
  pthread_t p_Var2;
  mach_port_t *pmVar3;
  
  p_Var2 = _pthread_self();
  mVar1 = _pthread_mach_thread_np(p_Var2);
  pmVar3 = (mach_port_t *)0x10;
  __Znwm();
  *pmVar3 = mVar1;
  *(undefined1 *)(pmVar3 + 1) = 0;
  pmVar3[2] = 0;
  pmVar3[3] = 0;
  *param_1 = pmVar3;
  return;
}



/* Address: 0x100b4eae4 | FUN_100b4eae4 */

void FUN_100b4eae4(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *****pppppuVar2;
  mach_port_name_t name;
  undefined *puVar3;
  mach_port_name_t *pmVar4;
  code *pcVar5;
  kern_return_t kVar6;
  undefined8 ****ppppuVar7;
  undefined8 *****pppppuVar8;
  size_t sVar9;
  vm_size_t size;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  mach_port_name_t *local_b8;
  thread_act_array_t local_b0;
  mach_msg_type_number_t local_a4;
  undefined8 ****local_a0;
  undefined8 ****ppppuStack_98;
  undefined8 ****local_90;
  undefined8 ****local_88;
  undefined8 ****local_80;
  undefined8 ****local_78;
  undefined8 ****ppppuStack_70;
  undefined8 ****local_68;
  
  local_a0 = (undefined8 *****)0x0;
  ppppuStack_98 = (undefined8 *****)0x0;
  local_90 = (undefined8 *****)0x0;
  local_a4 = 0;
  local_b0 = (thread_act_array_t)0x0;
  FUN_100b4eaa0(&local_b8);
  puVar3 = PTR__mach_task_self__100ea8778;
  kVar6 = _task_threads(*(task_t *)PTR__mach_task_self__100ea8778,&local_b0,&local_a4);
  pmVar4 = local_b8;
  if (kVar6 == 0) {
    if (local_a4 == 0) {
      size = 0;
    }
    else {
      uVar14 = 0;
      do {
        name = local_b0[uVar14];
        if (name == *pmVar4) {
          kVar6 = _mach_port_deallocate(*(ipc_space_t *)puVar3,name);
          if (kVar6 != 0) {
            FUN_100b57c64();
            FUN_100b5e930("ERROR",
                          "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryThreadHandle.cpp"
                          ,0x4f,"%s failed with kern return code: %d, description: %s");
          }
        }
        else {
          ppppuVar7 = (undefined8 ****)0x10;
          __Znwm();
          *(mach_port_name_t *)ppppuVar7 = name;
          *(undefined1 *)((long)ppppuVar7 + 4) = 1;
          ppppuVar7[1] = (undefined8 ***)0x0;
          if (ppppuStack_98 < local_90) {
            *ppppuStack_98 = ppppuVar7;
            ppppuStack_98 = ppppuStack_98 + 1;
          }
          else {
            sVar9 = (long)ppppuStack_98 - (long)local_a0;
            lVar13 = (long)sVar9 >> 3;
            uVar1 = lVar13 + 1;
            if (uVar1 >> 0x3d != 0) {
              FUN_100b1ae80(&local_a0);
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x100b4ed64);
              (*pcVar5)();
            }
            uVar11 = (long)local_90 - (long)local_a0 >> 2;
            if (uVar11 <= uVar1) {
              uVar11 = uVar1;
            }
            if (0x7ffffffffffffff7 < (ulong)((long)local_90 - (long)local_a0)) {
              uVar11 = 0x1fffffffffffffff;
            }
            local_68 = &local_90;
            if (uVar11 == 0) {
              pppppuVar8 = (undefined8 *****)0x0;
              lVar10 = lVar13;
            }
            else {
              pppppuVar8 = &local_90;
              FUN_100b40b78();
              sVar9 = (long)ppppuStack_98 - (long)local_a0;
              lVar10 = (long)sVar9 >> 3;
            }
            pppppuVar2 = pppppuVar8 + lVar13;
            *pppppuVar2 = ppppuVar7;
            _memcpy(pppppuVar2 + -lVar10,local_a0,sVar9);
            local_88 = local_a0;
            local_78 = local_a0;
            ppppuStack_70 = local_90;
            local_80 = local_a0;
            local_a0 = pppppuVar2 + -lVar10;
            ppppuStack_98 = pppppuVar2 + 1;
            local_90 = pppppuVar8 + uVar11;
            FUN_100b4f120(&local_88);
            ppppuStack_98 = pppppuVar2 + 1;
          }
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 < local_a4);
      size = (ulong)local_a4 << 2;
    }
    kVar6 = _vm_deallocate(*(vm_map_t *)puVar3,(vm_address_t)local_b0,size);
    if (kVar6 == 0) goto LAB_100b4ed0c;
    uVar12 = 0x53;
  }
  else {
    uVar12 = 0x46;
  }
  FUN_100b57c64();
  FUN_100b5e930("ERROR",
                "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryThreadHandle.cpp"
                ,uVar12,"%s failed with kern return code: %d, description: %s");
LAB_100b4ed0c:
  ppppuVar7 = local_90;
  param_1[1] = ppppuStack_98;
  *param_1 = local_a0;
  ppppuStack_98 = (undefined8 ****)0x0;
  local_90 = (undefined8 ****)0x0;
  local_a0 = (undefined8 ****)0x0;
  param_1[2] = ppppuVar7;
  param_1[3] = local_b8;
  local_88 = &local_a0;
  FUN_100b40ab8(&local_88);
  return;
}



/* Address: 0x100b4ed6c | FUN_100b4ed6c */

undefined4 FUN_100b4ed6c(undefined4 *param_1)

{
  return *param_1;
}



/* Address: 0x100b4ed74 | FUN_100b4ed74 */

undefined4 FUN_100b4ed74(undefined4 param_1)

{
  return param_1;
}



/* Address: 0x100b4ed7c | FUN_100b4ed7c */

undefined4 FUN_100b4ed7c(undefined4 *param_1)

{
  return *param_1;
}



/* Address: 0x100b4ed84 | FUN_100b4ed84 */

void FUN_100b4ed84(undefined8 *param_1,pthread_t param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined **ppuVar4;
  char acStack_78 [64];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ea82f0;
  FUN_100b4eea8();
  if (param_2 != (pthread_t)0x0) {
    piVar3 = ___error();
    *piVar3 = 0;
    iVar1 = _pthread_getname_np(param_2,acStack_78,0x40);
    piVar3 = ___error();
    iVar2 = *piVar3;
    if (iVar2 != 0) {
      ppuVar4 = &PTR___tlv_bootstrap_101049328;
      (*(code *)PTR___tlv_bootstrap_101049328)();
      iVar2 = _strerror_r(iVar2,(char *)ppuVar4,0x400);
      if (iVar2 != 0) {
        _snprintf((char *)ppuVar4,0x400,"Unknown error %d");
      }
      FUN_100b5e930("ERROR",
                    "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryThreadHandle.cpp"
                    ,0x72,"%s failed with code: %d, description: %s");
    }
    if (iVar1 == 0) {
      FUN_100b4f170(param_1,acStack_78);
      goto LAB_100b4ee6c;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
LAB_100b4ee6c:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100b4eea8 | FUN_100b4eea8 */

void FUN_100b4eea8(mach_port_t *param_1)

{
  pthread_t p_Var1;
  
  if (*(long *)(param_1 + 2) == 0) {
    p_Var1 = _pthread_from_mach_thread_np(*param_1);
    *(pthread_t *)(param_1 + 2) = p_Var1;
  }
  return;
}



/* Address: 0x100b4eedc | FUN_100b4eedc */

int FUN_100b4eedc(pthread_t param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined **ppuVar4;
  sched_param local_38;
  
  FUN_100b4eea8();
  if (param_1 == (pthread_t)0x0) {
    local_38.sched_priority = -1;
  }
  else {
    piVar3 = ___error();
    *piVar3 = 0;
    iVar1 = _pthread_getschedparam(param_1,(int *)0x0,&local_38);
    piVar3 = ___error();
    iVar2 = *piVar3;
    if (iVar2 != 0) {
      ppuVar4 = &PTR___tlv_bootstrap_101049340;
      (*(code *)PTR___tlv_bootstrap_101049340)();
      iVar2 = _strerror_r(iVar2,(char *)ppuVar4,0x400);
      if (iVar2 != 0) {
        _snprintf((char *)ppuVar4,0x400,"Unknown error %d");
      }
      FUN_100b5e930("ERROR",
                    "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryThreadHandle.cpp"
                    ,0x81,"%s failed with code: %d, description: %s");
    }
    if (iVar1 != 0) {
      local_38.sched_priority = -1;
    }
  }
  return local_38.sched_priority;
}



/* Address: 0x100b4efc0 | FUN_100b4efc0 */

byte FUN_100b4efc0(thread_act_t *param_1)

{
  kern_return_t kVar1;
  integer_t aiStack_4c [6];
  int local_34;
  byte local_30;
  mach_msg_type_number_t local_24;
  
  if (*param_1 != 0) {
    local_24 = 10;
    kVar1 = _thread_info(*param_1,3,aiStack_4c,&local_24);
    if (kVar1 == 0) {
      if (local_34 == 1) {
        return local_30 >> 1 & 1;
      }
      return 1;
    }
    if (kVar1 != 0x10000003) {
      FUN_100b57c64();
      FUN_100b5e930("ERROR",
                    "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryThreadHandle.cpp"
                    ,0xc2,"%s failed with kern return code: %d, description: %s");
    }
  }
  return 1;
}



/* Address: 0x100b4f06c | thunk_FUN_100b15fd4 */

void thunk_FUN_100b15fd4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_100b15fd4();
}



/* Address: 0x100b4f070 | FUN_100b4f070 */

undefined1  [16] FUN_100b4f070(pthread_t param_1)

{
  void *pvVar1;
  size_t sVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  FUN_100b4eea8();
  if (param_1 == (pthread_t)0x0) {
    pvVar1 = (void *)0x0;
    lVar3 = 0;
  }
  else {
    pvVar1 = _pthread_get_stackaddr_np(param_1);
    sVar2 = _pthread_get_stacksize_np(param_1);
    lVar3 = (long)pvVar1 - sVar2;
  }
  auVar4._8_8_ = lVar3;
  auVar4._0_8_ = pvVar1;
  return auVar4;
}



/* Address: 0x100b4f0b8 | thunk_FUN_100b15fd4 */

void thunk_FUN_100b15fd4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_100b15fd4();
}



/* Address: 0x100b4f0bc | FUN_100b4f0bc */

bool FUN_100b4f0bc(thread_act_t *param_1)

{
  bool bVar1;
  kern_return_t kVar2;
  
  bVar1 = false;
  if (*param_1 != 0) {
    kVar2 = _thread_suspend(*param_1);
    bVar1 = kVar2 == 0;
  }
  return bVar1;
}



/* Address: 0x100b4f0e0 | thunk_FUN_100b15fd4 */

void thunk_FUN_100b15fd4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_100b15fd4();
}



/* Address: 0x100b4f0e4 | FUN_100b4f0e4 */

bool FUN_100b4f0e4(thread_act_t *param_1)

{
  bool bVar1;
  kern_return_t kVar2;
  
  bVar1 = false;
  if (*param_1 != 0) {
    kVar2 = _thread_resume(*param_1);
    bVar1 = kVar2 == 0;
  }
  return bVar1;
}



/* Address: 0x100b4f10c | FUN_100b4f10c */

bool FUN_100b4f10c(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Address: 0x100b4f120 | FUN_100b4f120 */

long * FUN_100b4f120(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -8;
    FUN_100b40a90(lVar2 + -8,0);
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Address: 0x100b4f170 | FUN_100b4f170 */

ulong * FUN_100b4f170(ulong *param_1,char *param_2)

{
  ulong *puVar1;
  size_t sVar2;
  ulong *puVar3;
  
  sVar2 = _strlen(param_2);
  if (0x7ffffffffffffff7 < sVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_100b1ac7c(param_1);
  }
  if (sVar2 < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)sVar2;
    puVar3 = param_1;
    if (sVar2 == 0) goto LAB_100b4f1f4;
  }
  else {
    puVar1 = (ulong *)0x19;
    if ((sVar2 | 7) != 0x17) {
      puVar1 = (ulong *)((sVar2 | 7) + 1);
    }
    puVar3 = puVar1;
    __Znwm();
    param_1[1] = sVar2;
    param_1[2] = (ulong)puVar1 | 0x8000000000000000;
    *param_1 = (ulong)puVar3;
  }
  _memmove(puVar3,param_2,sVar2);
LAB_100b4f1f4:
  *(undefined1 *)((long)puVar3 + sVar2) = 0;
  return param_1;
}



/* Address: 0x100b4f218 | FUN_100b4f218 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100b4f218(ID param_1)

{
  ID IVar1;
  
  IVar1 = objc_stub::options(param_1);
  IVar1 = objc_stub::FUN_100c056c0(IVar1);
  return IVar1;
}



/* Address: 0x100b4f254 | FUN_100b4f254 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100b4f254(ID param_1)

{
  ID IVar1;
  
  IVar1 = objc_stub::options(param_1);
  IVar1 = objc_stub::FUN_100c05b80(IVar1);
  return IVar1;
}



/* Address: 0x100b4f290 | FUN_100b4f290 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID FUN_100b4f290(ID param_1)

{
  ID IVar1;
  
  IVar1 = objc_stub::options(param_1);
  IVar1 = objc_stub::profiling(IVar1);
  return IVar1;
}



/* Address: 0x100b4f2d4 | objc_stub::thunk_FUN_100c0a000 */

ID __objc_msgSend_stub objc_stub::thunk_FUN_100c0a000(ID self,...)

{
  (*(code *)PTR__objc_msgSend_100ea81a8)(self,"sentryIdString");
  return self;
}



/* Address: 0x100b4f2d8 | FUN_100b4f2d8 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID FUN_100b4f2d8(void)

{
  ID IVar1;
  
  IVar1 = objc_stub::sharedInstance((ID)&objc::class_t::_TtC6Sentry25SentryDependencyContainer);
  IVar1 = objc_stub::FUN_100c00ac0(IVar1);
  IVar1 = objc_stub::date(IVar1);
  return IVar1;
}



/* Address: 0x100b4f344 | FUN_100b4f344 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100b4f344(void)

{
  ID IVar1;
  
  IVar1 = objc_stub::sharedInstance((ID)&objc::class_t::_TtC6Sentry25SentryDependencyContainer);
  IVar1 = objc_stub::FUN_100c00ac0(IVar1);
  IVar1 = objc_stub::FUN_100c100e0(IVar1);
  return IVar1;
}



/* Address: 0x100b4f3a8 | FUN_100b4f3a8 */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID FUN_100b4f3a8(void)

{
  class_t *self;
  ID IVar1;
  
  self = &objc::class_t::SentryId;
  _objc_alloc();
  IVar1 = objc_stub::init((ID)self);
  return IVar1;
}



/* Address: 0x100b4f3c8 | FUN_100b4f3c8 */

bool FUN_100b4f3c8(ID param_1)

{
  ID IVar1;
  
  IVar1 = objc_stub::lifecycle(param_1);
  return IVar1 == 1;
}



/* Address: 0x100b4f3e4 | objc_stub::thunk_FUN_100c079e0 */

ID __objc_msgSend_stub objc_stub::thunk_FUN_100c079e0(ID self,...)

{
  (*(code *)PTR__objc_msgSend_100ea81a8)(self,"parentSpanId");
  return self;
}



/* Address: 0x100b4f3e8 | objc_stub::thunk_FUN_100c10960 */

ID __objc_msgSend_stub objc_stub::thunk_FUN_100c10960(ID self,...)

{
  (*(code *)PTR__objc_msgSend_100ea81a8)(self,"traceId");
  return self;
}


