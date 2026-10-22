/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100b602c4 | SentryEvent::setLevel: */

/* Function Stack Size: 0x18 bytes */

void SentryEvent::setLevel_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  *(unsigned_long_long *)(param_1 + 0x38) = param_3;
  return;
}



/* Address: 0x100b602cc | SentryEvent::platform */

/* Function Stack Size: 0x10 bytes */

ID SentryEvent::platform(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x40);
}



/* Address: 0x100b602d4 | SentryEvent::setPlatform: */

/* WARNING: Function: _objc_setProperty_nonatomic_copy replaced with injection:
   _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryEvent::setPlatform_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x40) = param_3;
  return;
}



/* Address: 0x100b602dc | SentryEvent::logger */

/* Function Stack Size: 0x10 bytes */

ID SentryEvent::logger(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x48);
}



/* Address: 0x100b602e4 | SentryEvent::setLogger: */

/* WARNING: Function: _objc_setProperty_nonatomic_copy replaced with injection:
   _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryEvent::setLogger_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x48) = param_3;
  return;
}



/* Address: 0x100b602ec | SentryEvent::serverName */

/* Function Stack Size: 0x10 bytes */

ID SentryEvent::serverName(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x50);
}



/* Address: 0x100b602f4 | SentryEvent::setServerName: */

/* WARNING: Function: _objc_setProperty_nonatomic_copy replaced with injection:
   _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryEvent::setServerName_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x50) = param_3;
  return;
}



/* Address: 0x100b602fc | SentryEvent::releaseName */

/* Function Stack Size: 0x10 bytes */

ID SentryEvent::releaseName(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x58);
}



/* Address: 0x100b60304 | SentryEvent::setReleaseName: */

/* WARNING: Function: _objc_setProperty_nonatomic_copy replaced with injection:
   _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryEvent::setReleaseName_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x58) = param_3;
  return;
}



/* Address: 0x100b6030c | SentryEvent::dist */

/* Function Stack Size: 0x10 bytes */

ID SentryEvent::dist(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x60);
}



/* Address: 0x100b60314 | SentryEvent::setDist: */

/* WARNING: Function: _objc_setProperty_nonatomic_copy replaced with injection:
   _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryEvent::setDist_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x60) = param_3;
  return;
}



/* Address: 0x100b6031c | SentryEvent::environment */

/* Function Stack Size: 0x10 bytes */

ID SentryEvent::environment(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x68);
}



/* Address: 0x100b60324 | SentryEvent::setEnvironment: */

/* WARNING: Function: _objc_setProperty_nonatomic_copy replaced with injection:
   _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryEvent::setEnvironment_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x68) = param_3;
  return;
}



/* Address: 0x100b6032c | SentryEvent::transaction */

/* Function Stack Size: 0x10 bytes */

ID SentryEvent::transaction(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x70);
}



/* Address: 0x100b60334 | SentryEvent::setTransaction: */

/* WARNING: Function: _objc_setProperty_nonatomic_copy replaced with injection:
   _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryEvent::setTransaction_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x70) = param_3;
  return;
}



/* Address: 0x100b6033c | SentryEvent::type */

/* Function Stack Size: 0x10 bytes */

ID SentryEvent::type(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x78);
}



/* Address: 0x100b60344 | SentryEvent::setType: */

/* WARNING: Function: _objc_setProperty_nonatomic_copy replaced with injection:
   _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryEvent::setType_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x78) = param_3;
  return;
}



/* Address: 0x100b6034c | SentryEvent::tags */

/* Function Stack Size: 0x10 bytes */

ID SentryEvent::tags(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x80);
}



/* Address: 0x100b60354 | SentryEvent::setTags: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryEvent::setTags_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x80) = param_3;
  return;
}



/* Address: 0x100b60360 | SentryEvent::extra */

/* Function Stack Size: 0x10 bytes */

ID SentryEvent::extra(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x88);
}



/* Address: 0x100b60368 | SentryEvent::setExtra: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryEvent::setExtra_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x88) = param_3;
  return;
}



/* Address: 0x100b60374 | SentryEvent::sdk */

/* Function Stack Size: 0x10 bytes */

ID SentryEvent::sdk(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x90);
}



/* Address: 0x100b6037c | SentryEvent::setSdk: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryEvent::setSdk_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x90) = param_3;
  return;
}



/* Address: 0x100b60388 | SentryEvent::modules */

/* Function Stack Size: 0x10 bytes */

ID SentryEvent::modules(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x98);
}



/* Address: 0x100b60390 | SentryEvent::setModules: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryEvent::setModules_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x98) = param_3;
  return;
}



/* Address: 0x100b6039c | SentryEvent::fingerprint */

/* Function Stack Size: 0x10 bytes */

ID SentryEvent::fingerprint(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0xa0);
}



/* Address: 0x100b603a4 | SentryEvent::setFingerprint: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryEvent::setFingerprint_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0xa0) = param_3;
  return;
}



/* Address: 0x100b603b0 | SentryEvent::user */

/* Function Stack Size: 0x10 bytes */

ID SentryEvent::user(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0xa8);
}



/* Address: 0x100b603b8 | SentryEvent::setUser: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryEvent::setUser_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0xa8) = param_3;
  return;
}



/* Address: 0x100b603c4 | SentryEvent::context */

/* Function Stack Size: 0x10 bytes */

ID SentryEvent::context(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0xb0);
}



/* Address: 0x100b603cc | SentryEvent::setContext: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryEvent::setContext_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0xb0) = param_3;
  return;
}



/* Address: 0x100b603d8 | SentryEvent::threads */

/* Function Stack Size: 0x10 bytes */

ID SentryEvent::threads(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0xb8);
}



/* Address: 0x100b603e0 | SentryEvent::setThreads: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryEvent::setThreads_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0xb8) = param_3;
  return;
}



/* Address: 0x100b603ec | SentryEvent::exceptions */

/* Function Stack Size: 0x10 bytes */

ID SentryEvent::exceptions(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0xc0);
}



/* Address: 0x100b603f4 | SentryEvent::setExceptions: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryEvent::setExceptions_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0xc0) = param_3;
  return;
}



/* Address: 0x100b60400 | SentryEvent::stacktrace */

/* Function Stack Size: 0x10 bytes */

ID SentryEvent::stacktrace(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 200);
}



/* Address: 0x100b60408 | SentryEvent::setStacktrace: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryEvent::setStacktrace_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 200) = param_3;
  return;
}



/* Address: 0x100b60414 | SentryEvent::debugMeta */

/* Function Stack Size: 0x10 bytes */

ID SentryEvent::debugMeta(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0xd0);
}



/* Address: 0x100b6041c | SentryEvent::setDebugMeta: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryEvent::setDebugMeta_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0xd0) = param_3;
  return;
}



/* Address: 0x100b60428 | SentryEvent::breadcrumbs */

/* Function Stack Size: 0x10 bytes */

ID SentryEvent::breadcrumbs(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0xd8);
}



/* Address: 0x100b60430 | SentryEvent::setBreadcrumbs: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryEvent::setBreadcrumbs_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0xd8) = param_3;
  return;
}



/* Address: 0x100b6043c | SentryEvent::request */

/* Function Stack Size: 0x10 bytes */

ID SentryEvent::request(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0xe0);
}



/* Address: 0x100b60444 | SentryEvent::setRequest: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryEvent::setRequest_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0xe0) = param_3;
  return;
}



/* Address: 0x100b60450 | SentryEvent::isFatalEvent */

/* Function Stack Size: 0x10 bytes */

bool SentryEvent::isFatalEvent(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + 8);
}



/* Address: 0x100b60458 | SentryEvent::setIsFatalEvent: */

/* Function Stack Size: 0x14 bytes */

void SentryEvent::setIsFatalEvent_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + 8) = (char)param_3;
  return;
}



/* Address: 0x100b60460 | SentryEvent::serializedBreadcrumbs */

/* Function Stack Size: 0x10 bytes */

ID SentryEvent::serializedBreadcrumbs(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0xe8);
}



/* Address: 0x100b60468 | SentryEvent::setSerializedBreadcrumbs: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryEvent::setSerializedBreadcrumbs_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0xe8) = param_3;
  return;
}



/* Address: 0x100b60474 | SentryEvent::attachAllThreadsOverride */

/* Function Stack Size: 0x10 bytes */

ID SentryEvent::attachAllThreadsOverride(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0xf0);
}



/* Address: 0x100b6047c | SentryEvent::setAttachAllThreadsOverride: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryEvent::setAttachAllThreadsOverride_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0xf0) = param_3;
  return;
}



/* Address: 0x100b60488 | SentryEvent::startSystemTime */

/* Function Stack Size: 0x10 bytes */

unsigned_long_long SentryEvent::startSystemTime(ID param_1,SEL param_2)

{
  return *(unsigned_long_long *)(param_1 + 0xf8);
}



/* Address: 0x100b60490 | SentryEvent::setStartSystemTime: */

/* Function Stack Size: 0x18 bytes */

void SentryEvent::setStartSystemTime_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  *(unsigned_long_long *)(param_1 + 0xf8) = param_3;
  return;
}



/* Address: 0x100b60498 | SentryEvent::endSystemTime */

/* Function Stack Size: 0x10 bytes */

unsigned_long_long SentryEvent::endSystemTime(ID param_1,SEL param_2)

{
  return *(unsigned_long_long *)(param_1 + 0x100);
}



/* Address: 0x100b604a0 | SentryEvent::setEndSystemTime: */

/* Function Stack Size: 0x18 bytes */

void SentryEvent::setEndSystemTime_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  *(unsigned_long_long *)(param_1 + 0x100) = param_3;
  return;
}



/* Address: 0x100b604a8 | SentryEvent::.cxx_destruct */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryEvent::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



/* Address: 0x100b60610 | SentryCrashExceptionApplication::reportException: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryCrashExceptionApplication::reportException_(ID param_1,SEL param_2,ID param_3)

{
  objc_super local_40;
  
  objc_stub::FUN_100bffa00((ID)&objc::class_t::SentryUncaughtNSExceptions);
  objc_stub::reportException_((ID)&objc::class_t::SentryNSExceptionCaptureHelper,param_3);
  local_40.super_class = &objc::class_t::SentryCrashExceptionApplication;
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"reportException:",param_3);
  objc_stub::reportExceptionDidFinish((ID)&objc::class_t::SentryNSExceptionCaptureHelper);
  return;
}



/* Address: 0x100b60698 | SentryCrashExceptionApplication::_crashOnException: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryCrashExceptionApplication::_crashOnException_(ID param_1,SEL param_2,ID param_3)

{
  objc_super local_40;
  
  objc_stub::crashOnException_((ID)&objc::class_t::SentryNSExceptionCaptureHelper,param_3);
  local_40.super_class = &objc::class_t::SentryCrashExceptionApplication;
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"_crashOnException:",param_3);
  return;
}



/* Address: 0x100b6070c | FUN_100b6070c */

int * FUN_100b6070c(long param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 == 0) {
    FUN_100b5e930("ERROR",
                  "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Tools/SentryCrashMach-O.c"
                  ,0x3e,"Header is NULL");
  }
  else {
    iVar2 = *(int *)(param_1 + 0x10);
    if (iVar2 != 0) {
      piVar1 = (int *)(param_1 + 0x20);
      do {
        if (*piVar1 == param_2) {
          return piVar1;
        }
        piVar1 = (int *)((long)piVar1 + (ulong)(uint)piVar1[1]);
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return (int *)0x0;
}



/* Address: 0x100b60770 | FUN_100b60770 */

int * FUN_100b60770(long param_1,char *param_2)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  
  if (param_1 == 0) {
    pcVar3 = "Header is NULL";
    uVar2 = 0x57;
  }
  else {
    if (param_2 != (char *)0x0) {
      iVar5 = *(int *)(param_1 + 0x10);
      if (iVar5 == 0) {
        return (int *)0x0;
      }
      piVar4 = (int *)(param_1 + 0x20);
      while ((*piVar4 != 0x19 || (iVar1 = _strncmp((char *)(piVar4 + 2),param_2,0x10), iVar1 != 0)))
      {
        piVar4 = (int *)((long)piVar4 + (ulong)(uint)piVar4[1]);
        iVar5 = iVar5 + -1;
        if (iVar5 == 0) {
          return (int *)0x0;
        }
      }
      return piVar4;
    }
    pcVar3 = "Segment name is NULL";
    uVar2 = 0x5c;
  }
  FUN_100b5e930("ERROR",
                "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Tools/SentryCrashMach-O.c"
                ,uVar2,pcVar3);
  return (int *)0x0;
}



/* Address: 0x100b60824 | FUN_100b60824 */

long FUN_100b60824(long param_1,uint param_2)

{
  ulong uVar1;
  
  if (param_1 == 0) {
    FUN_100b5e930("ERROR",
                  "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Tools/SentryCrashMach-O.c"
                  ,0x79,"Segment is NULL");
  }
  else {
    uVar1 = (ulong)*(uint *)(param_1 + 0x40);
    if (*(uint *)(param_1 + 0x40) != 0) {
      param_1 = param_1 + 0x48;
      do {
        if (*(byte *)(param_1 + 0x40) == param_2) {
          return param_1;
        }
        param_1 = param_1 + 0x50;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
  }
  return 0;
}



/* Address: 0x100b60884 | FUN_100b60884 */

int FUN_100b60884(vm_address_t param_1)

{
  kern_return_t error_value;
  int local_4c [9];
  mach_msg_type_number_t local_28;
  mach_port_t mStack_24;
  vm_address_t local_20;
  vm_size_t vStack_18;
  
  vStack_18 = 0;
  local_28 = 9;
  local_20 = param_1;
  error_value = _vm_region_64(*(vm_map_t *)PTR__mach_task_self__100ea8778,&local_20,&vStack_18,9,
                              local_4c,&local_28,&mStack_24);
  if (error_value != 0) {
    _mach_error_string(error_value);
    FUN_100b5e930("ERROR",
                  "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Tools/SentryCrashMach-O.c"
                  ,0xa8,"Failed to get protection for section: %s");
    local_4c[0] = 1;
  }
  return local_4c[0];
}



/* Address: 0x100b6090c | FUN_100b6090c */

cfstringStruct * FUN_100b6090c(long param_1)

{
  if (param_1 - 1U < 8) {
    return (cfstringStruct *)(&PTR_cf_event_processor_100f35db8)[param_1 - 1U];
  }
  return &cf_before_send;
}



/* Address: 0x100b60934 | FUN_100b60934 */

undefined * FUN_100b60934(int param_1)

{
  undefined **ppuVar1;
  long lVar2;
  
  ppuVar1 = &PTR_s_SIGABRT_100f35e00;
  lVar2 = 9;
  do {
    if (*(int *)(ppuVar1 + -1) == param_1) {
      return *ppuVar1;
    }
    ppuVar1 = ppuVar1 + 4;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return (undefined *)0x0;
}



/* Address: 0x100b60968 | FUN_100b60968 */

undefined8 FUN_100b60968(int param_1,int param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  
  lVar1 = 0;
  do {
    if (((&DAT_100f35df8)[lVar1 * 8] == param_1) &&
       (uVar2 = (ulong)(uint)(&DAT_100f35e10)[lVar1 * 8], 0 < (int)(&DAT_100f35e10)[lVar1 * 8])) {
      puVar3 = (undefined8 *)((&DAT_100f35e08)[lVar1 * 4] + 8);
      do {
        if (*(int *)(puVar3 + -1) == param_2) {
          return *puVar3;
        }
        puVar3 = puVar3 + 2;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    lVar1 = lVar1 + 1;
  } while (lVar1 != 9);
  return 0;
}



/* Address: 0x100b609cc | FUN_100b609cc */

undefined * FUN_100b609cc(void)

{
  return &DAT_100c985fc;
}


