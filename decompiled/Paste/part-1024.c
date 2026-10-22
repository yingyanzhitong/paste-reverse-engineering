/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100b12b60 | SentryClientInternal::setTransportAdapter: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryClientInternal::setTransportAdapter_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x18) = param_3;
  return;
}



/* Address: 0x100b12b6c | SentryClientInternal::debugImageProvider */

/* Function Stack Size: 0x10 bytes */

ID SentryClientInternal::debugImageProvider(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x20);
}



/* Address: 0x100b12b74 | SentryClientInternal::setDebugImageProvider: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryClientInternal::setDebugImageProvider_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x20) = param_3;
  return;
}



/* Address: 0x100b12b80 | SentryClientInternal::random */

/* Function Stack Size: 0x10 bytes */

long __thiscall SentryClientInternal::random(SentryClientInternal *this)

{
  long in_x0;
  
  return *(long *)(in_x0 + 0x28);
}



/* Address: 0x100b12b88 | SentryClientInternal::setRandom: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryClientInternal::setRandom_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x28) = param_3;
  return;
}



/* Address: 0x100b12b94 | SentryClientInternal::locale */

/* Function Stack Size: 0x10 bytes */

ID SentryClientInternal::locale(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x30);
}



/* Address: 0x100b12b9c | SentryClientInternal::setLocale: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryClientInternal::setLocale_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x30) = param_3;
  return;
}



/* Address: 0x100b12ba8 | SentryClientInternal::timezone */

/* Function Stack Size: 0x10 bytes */

ID SentryClientInternal::timezone(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x38);
}



/* Address: 0x100b12bb0 | SentryClientInternal::setTimezone: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryClientInternal::setTimezone_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x38) = param_3;
  return;
}



/* Address: 0x100b12bbc | SentryClientInternal::logScopeApplier */

/* Function Stack Size: 0x10 bytes */

ID SentryClientInternal::logScopeApplier(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x40);
}



/* Address: 0x100b12bc4 | SentryClientInternal::setLogScopeApplier: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryClientInternal::setLogScopeApplier_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x40) = param_3;
  return;
}



/* Address: 0x100b12bd0 | SentryClientInternal::telemetryProcessor */

/* Function Stack Size: 0x10 bytes */

ID SentryClientInternal::telemetryProcessor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x48);
}



/* Address: 0x100b12bd8 | SentryClientInternal::setTelemetryProcessor: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryClientInternal::setTelemetryProcessor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x48) = param_3;
  return;
}



/* Address: 0x100b12be4 | SentryClientInternal::eventContextEnricher */

/* Function Stack Size: 0x10 bytes */

ID SentryClientInternal::eventContextEnricher(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x50);
}



/* Address: 0x100b12bec | SentryClientInternal::setEventContextEnricher: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryClientInternal::setEventContextEnricher_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x50) = param_3;
  return;
}



/* Address: 0x100b12bf8 | SentryClientInternal::dispatchQueueWrapper */

/* Function Stack Size: 0x10 bytes */

ID SentryClientInternal::dispatchQueueWrapper(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x58);
}



/* Address: 0x100b12c00 | SentryClientInternal::setDispatchQueueWrapper: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryClientInternal::setDispatchQueueWrapper_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x58) = param_3;
  return;
}



/* Address: 0x100b12c0c | SentryClientInternal::attachmentProcessors */

/* Function Stack Size: 0x10 bytes */

ID SentryClientInternal::attachmentProcessors(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x60);
}



/* Address: 0x100b12c14 | SentryClientInternal::setAttachmentProcessors: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryClientInternal::setAttachmentProcessors_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x60) = param_3;
  return;
}



/* Address: 0x100b12c20 | SentryClientInternal::threadInspector */

/* Function Stack Size: 0x10 bytes */

ID SentryClientInternal::threadInspector(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x68);
}



/* Address: 0x100b12c28 | SentryClientInternal::setThreadInspector: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryClientInternal::setThreadInspector_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x68) = param_3;
  return;
}



/* Address: 0x100b12c34 | SentryClientInternal::fileManager */

/* Function Stack Size: 0x10 bytes */

ID SentryClientInternal::fileManager(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x70);
}



/* Address: 0x100b12c3c | SentryClientInternal::setFileManager: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryClientInternal::setFileManager_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x70) = param_3;
  return;
}



/* Address: 0x100b12c48 | SentryClientInternal::sessionDelegate */

/* WARNING: Function: _objc_loadWeakRetained replaced with injection: _objc_load_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryClientInternal::sessionDelegate(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x78);
}



/* Address: 0x100b12c60 | SentryClientInternal::setSessionDelegate: */

/* WARNING: Function: _objc_storeWeak replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryClientInternal::setSessionDelegate_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x78) = param_3;
  return;
}



/* Address: 0x100b12c6c | SentryClientInternal::.cxx_destruct */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryClientInternal::_cxx_destruct(ID param_1,SEL param_2)

{
  _objc_destroyWeak(param_1 + 0x78);
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
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



/* Address: 0x100b12d28 | SentryCrashDefaultMachineContextWrapper::load */

/* Function Stack Size: 0x10 bytes */

void SentryCrashDefaultMachineContextWrapper::load(ID param_1,SEL param_2)

{
  mach_port_t mVar1;
  pthread_t p_Var2;
  
  p_Var2 = _pthread_self();
  mVar1 = _pthread_mach_thread_np(p_Var2);
  DAT_1010583a0 = (ulong)mVar1;
  return;
}



/* Address: 0x100b12d4c | SentryCrashDefaultMachineContextWrapper::fillContextForCurrentThread: */

void SentryCrashDefaultMachineContextWrapper::fillContextForCurrentThread_
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_100b40bac();
  FUN_100b5100c(param_1,param_3,1);
  return;
}



/* Address: 0x100b12d74 | SentryCrashDefaultMachineContextWrapper::getThreadCount: */

void SentryCrashDefaultMachineContextWrapper::getThreadCount_
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_100b514fc(param_3);
  return;
}



/* Address: 0x100b12d7c | SentryCrashDefaultMachineContextWrapper::getThread:withIndex: */

void SentryCrashDefaultMachineContextWrapper::getThread_withIndex_
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_100b51504(param_3,param_4);
  return;
}



/* Address: 0x100b12d88 | SentryCrashDefaultMachineContextWrapper::getThreadName:andBuffer:andBufLength: */

/* Function Stack Size: 0x24 bytes */

bool SentryCrashDefaultMachineContextWrapper::getThreadName_andBuffer_andBufLength_
               (ID param_1,SEL param_2,unsigned_long_long param_3,char *param_4,int param_5)

{
  FUN_100b40be4(param_3,param_4,param_5);
  return (bool)param_3;
}



/* Address: 0x100b12d98 | SentryCrashDefaultMachineContextWrapper::isMainThread: */

/* Function Stack Size: 0x18 bytes */

bool SentryCrashDefaultMachineContextWrapper::isMainThread_
               (ID param_1,SEL param_2,unsigned_long_long param_3)

{
  return (bool)(DAT_1010583a0 == param_3);
}



/* Address: 0x100b12dac | FUN_100b12dac */

undefined4 FUN_100b12dac(char *param_1)

{
  int iVar1;
  int *piVar2;
  undefined **ppuVar3;
  int extraout_w8;
  size_t local_30;
  undefined4 local_24;
  
  local_24 = 0;
  local_30 = 4;
  iVar1 = _sysctlbyname(param_1,&local_24,&local_30,(void *)0x0,0);
  if (iVar1 != 0) {
    piVar2 = ___error();
    ppuVar3 = &PTR___tlv_bootstrap_101048ec0;
    (*(code *)PTR___tlv_bootstrap_101048ec0)(*piVar2);
    iVar1 = _strerror_r(extraout_w8,(char *)ppuVar3,0x400);
    if (iVar1 != 0) {
      ___error();
      _snprintf((char *)ppuVar3,0x400,"Unknown error %d");
    }
    FUN_100b5e930("ERROR",
                  "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Tools/SentryCrashSysCtl.c"
                  ,0x47,"Could not get %s value for %s: %s");
    local_24 = 0;
  }
  return local_24;
}



/* Address: 0x100b12e80 | FUN_100b12e80 */

undefined8 FUN_100b12e80(char *param_1)

{
  int iVar1;
  int *piVar2;
  undefined **ppuVar3;
  int extraout_w8;
  size_t local_30;
  undefined8 local_28;
  
  local_28 = 0;
  local_30 = 8;
  iVar1 = _sysctlbyname(param_1,&local_28,&local_30,(void *)0x0,0);
  if (iVar1 != 0) {
    piVar2 = ___error();
    ppuVar3 = &PTR___tlv_bootstrap_101048ed8;
    (*(code *)PTR___tlv_bootstrap_101048ed8)(*piVar2);
    iVar1 = _strerror_r(extraout_w8,(char *)ppuVar3,0x400);
    if (iVar1 != 0) {
      ___error();
      _snprintf((char *)ppuVar3,0x400,"Unknown error %d");
    }
    FUN_100b5e930("ERROR",
                  "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Tools/SentryCrashSysCtl.c"
                  ,0x8c,"Could not get %s value for %s: %s");
    local_28 = 0;
  }
  return local_28;
}



/* Address: 0x100b12f54 | FUN_100b12f54 */

ulong FUN_100b12f54(char *param_1,void *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  undefined **ppuVar3;
  int extraout_w8;
  ulong local_28;
  
  local_28 = 0;
  if (param_2 != (void *)0x0) {
    local_28 = (long)param_3;
  }
  iVar1 = _sysctlbyname(param_1,param_2,&local_28,(void *)0x0,0);
  if (iVar1 == 0) {
    local_28 = local_28 & 0xffffffff;
  }
  else {
    piVar2 = ___error();
    ppuVar3 = &PTR___tlv_bootstrap_101048ef0;
    (*(code *)PTR___tlv_bootstrap_101048ef0)(*piVar2);
    iVar1 = _strerror_r(extraout_w8,(char *)ppuVar3,0x400);
    if (iVar1 != 0) {
      ___error();
      _snprintf((char *)ppuVar3,0x400,"Unknown error %d");
    }
    FUN_100b5e930("ERROR",
                  "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Tools/SentryCrashSysCtl.c"
                  ,0xa2,"Could not get %s value for %s: %s");
    local_28 = 0;
  }
  return local_28;
}



/* Address: 0x100b13028 | FUN_100b13028 */

void FUN_100b13028(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined **ppuVar3;
  int extraout_w8;
  size_t local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  int local_40;
  undefined4 uStack_3c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ea82f0;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0x10;
  local_40 = param_1;
  uStack_3c = param_2;
  iVar1 = _sysctl(&local_40,2,&local_50,&local_58,(void *)0x0,0);
  if (iVar1 != 0) {
    piVar2 = ___error();
    ppuVar3 = &PTR___tlv_bootstrap_101048f08;
    (*(code *)PTR___tlv_bootstrap_101048f08)(*piVar2);
    iVar1 = _strerror_r(extraout_w8,(char *)ppuVar3,0x400);
    if (iVar1 != 0) {
      ___error();
      _snprintf((char *)ppuVar3,0x400,"Unknown error %d");
    }
    FUN_100b5e930("ERROR",
                  "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Tools/SentryCrashSysCtl.c"
                  ,0xb0,"Could not get timeval value for %d,%d: %s");
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(local_50,uStack_48);
}



/* Address: 0x100b13130 | FUN_100b13130 */

undefined1  [16] FUN_100b13130(char *param_1)

{
  undefined1 auVar1 [16];
  int iVar2;
  int *piVar3;
  undefined **ppuVar4;
  int extraout_w8;
  size_t local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  local_38 = 0x10;
  iVar2 = _sysctlbyname(param_1,&local_30,&local_38,(void *)0x0,0);
  if (iVar2 != 0) {
    piVar3 = ___error();
    ppuVar4 = &PTR___tlv_bootstrap_101048f20;
    (*(code *)PTR___tlv_bootstrap_101048f20)(*piVar3);
    iVar2 = _strerror_r(extraout_w8,(char *)ppuVar4,0x400);
    if (iVar2 != 0) {
      ___error();
      _snprintf((char *)ppuVar4,0x400,"Unknown error %d");
    }
    FUN_100b5e930("ERROR",
                  "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Tools/SentryCrashSysCtl.c"
                  ,0xbe,"Could not get timeval value for %s: %s");
  }
  auVar1._8_8_ = uStack_28;
  auVar1._0_8_ = local_30;
  return auVar1;
}



/* Address: 0x100b131f0 | FUN_100b131f0 */

void FUN_100b131f0(void)

{
  int iVar1;
  int *piVar2;
  undefined **ppuVar3;
  int extraout_w8;
  size_t local_2e0 [2];
  int aiStack_2d0 [3];
  pid_t local_2c4;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ea82f0;
  local_2e0[1] = 4;
  _sysctlnametomib("kern.proc.pid",aiStack_2d0,local_2e0 + 1);
  local_2c4 = _getpid();
  local_2e0[0] = 0x288;
  iVar1 = _sysctl(aiStack_2d0,4,&local_2c0,local_2e0,(void *)0x0,0);
  if (iVar1 != 0) {
    piVar2 = ___error();
    ppuVar3 = &PTR___tlv_bootstrap_101048f38;
    (*(code *)PTR___tlv_bootstrap_101048f38)(*piVar2);
    iVar1 = _strerror_r(extraout_w8,(char *)ppuVar3,0x400);
    if (iVar1 != 0) {
      ___error();
      _snprintf((char *)ppuVar3,0x400,"Unknown error %d");
    }
    FUN_100b5e930("ERROR",
                  "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Tools/SentryCrashSysCtl.c"
                  ,0xd2,"Could not get current process start time: %s");
    uStack_2b8 = 0;
    local_2c0 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(local_2c0,uStack_2b8);
  }
  return;
}



/* Address: 0x100b1331c | FUN_100b1331c */

void FUN_100b1331c(char *param_1,undefined4 *param_2)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  undefined **ppuVar4;
  void *pvVar5;
  undefined8 uVar6;
  char *pcVar7;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  size_t local_58;
  int local_50 [6];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ea82f0;
  local_50[2] = 0;
  local_50[3] = 0x12;
  local_50[0] = 4;
  local_50[1] = 0x11;
  local_50[4] = 3;
  local_50[5] = _if_nametoindex(param_1);
  if (local_50[5] == 0) {
    piVar3 = ___error();
    ppuVar4 = &PTR___tlv_bootstrap_101048f50;
    (*(code *)PTR___tlv_bootstrap_101048f50)(*piVar3);
    iVar2 = _strerror_r(extraout_w8_00,(char *)ppuVar4,0x400);
    if (iVar2 != 0) {
      ___error();
      _snprintf((char *)ppuVar4,0x400,"Unknown error %d");
    }
    pcVar7 = "Could not get interface index for %s: %s";
    uVar6 = 0xf1;
LAB_100b1346c:
    FUN_100b5e930("ERROR",
                  "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Tools/SentryCrashSysCtl.c"
                  ,uVar6,pcVar7);
  }
  else {
    iVar2 = _sysctl(local_50,6,(void *)0x0,&local_58,(void *)0x0,0);
    if (iVar2 != 0) {
      piVar3 = ___error();
      ppuVar4 = &PTR___tlv_bootstrap_101048f68;
      (*(code *)PTR___tlv_bootstrap_101048f68)(*piVar3);
      iVar2 = _strerror_r(extraout_w8,(char *)ppuVar4,0x400);
      if (iVar2 != 0) {
        ___error();
        _snprintf((char *)ppuVar4,0x400,"Unknown error %d");
      }
      pcVar7 = "Could not get interface data for %s: %s";
      uVar6 = 0xf8;
      goto LAB_100b1346c;
    }
    pvVar5 = _malloc(local_58);
    if (pvVar5 == (void *)0x0) {
      pcVar7 = "Out of memory";
      uVar6 = 0xfe;
      goto LAB_100b1346c;
    }
    iVar2 = _sysctl(local_50,6,pvVar5,&local_58,(void *)0x0,0);
    if (iVar2 == 0) {
      bVar1 = *(byte *)((long)pvVar5 + 0x75);
      *param_2 = *(undefined4 *)((long)pvVar5 + (ulong)bVar1 + 0x78);
      *(undefined2 *)(param_2 + 1) = *(undefined2 *)((long)pvVar5 + (ulong)bVar1 + 0x7c);
      _free(pvVar5);
      uVar6 = 1;
      goto LAB_100b13474;
    }
    piVar3 = ___error();
    ppuVar4 = &PTR___tlv_bootstrap_101048f80;
    (*(code *)PTR___tlv_bootstrap_101048f80)(*piVar3);
    iVar2 = _strerror_r(extraout_w8_01,(char *)ppuVar4,0x400);
    if (iVar2 != 0) {
      ___error();
      _snprintf((char *)ppuVar4,0x400,"Unknown error %d");
    }
    FUN_100b5e930("ERROR",
                  "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Tools/SentryCrashSysCtl.c"
                  ,0x104,"Could not get interface data for %s: %s");
    _free(pvVar5);
  }
  uVar6 = 0;
LAB_100b13474:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar6);
}



/* Address: 0x100b1359c | SentryNSError::initWithDomain:code: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

ID SentryNSError::initWithDomain_code_(ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  ID IVar1;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::SentryNSError;
  local_40.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_40,"init");
  if (IVar1 != 0) {
    *(ID *)(IVar1 + 8) = param_3;
    *(long_long *)(IVar1 + 0x10) = param_4;
  }
  return IVar1;
}



/* Address: 0x100b1361c | SentryNSError::serialize */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryNSError::serialize(ID param_1,SEL param_2)

{
  ID IVar1;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  ID IStack_48;
  ID local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ea82f0;
  local_58 = &cf_domain;
  IStack_48 = objc_stub::domain(param_1);
  local_50 = &cf_code;
  IVar1 = objc_stub::code(param_1);
  local_40 = objc_stub::numberWithInteger_((ID)&_OBJC_CLASS___NSNumber,IVar1);
  IVar1 = objc_stub::FUN_100c012c0((ID)&_OBJC_CLASS___NSDictionary,&IStack_48,&local_58,2);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_38) {
    return IVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}



/* Address: 0x100b13700 | SentryNSError::domain */

/* Function Stack Size: 0x10 bytes */

ID SentryNSError::domain(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 8);
}



/* Address: 0x100b13708 | SentryNSError::setDomain: */

/* WARNING: Function: _objc_setProperty_nonatomic_copy replaced with injection:
   _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryNSError::setDomain_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 8) = param_3;
  return;
}



/* Address: 0x100b13710 | SentryNSError::code */

/* Function Stack Size: 0x10 bytes */

long_long SentryNSError::code(ID param_1,SEL param_2)

{
  return *(long_long *)(param_1 + 0x10);
}



/* Address: 0x100b13718 | SentryNSError::setCode: */

/* Function Stack Size: 0x18 bytes */

void SentryNSError::setCode_(ID param_1,SEL param_2,long_long param_3)

{
  *(long_long *)(param_1 + 0x10) = param_3;
  return;
}



/* Address: 0x100b13720 | SentryNSError::.cxx_destruct */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryNSError::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



/* Address: 0x100b1372c | SentryNSExceptionCaptureHelper::reportException: */

/* Function Stack Size: 0x18 bytes */

void SentryNSExceptionCaptureHelper::reportException_(ID param_1,SEL param_2,ID param_3)

{
  DAT_1010e1970 = 1;
  objc_stub::FUN_100bfeea0(param_1);
  return;
}



/* Address: 0x100b1373c | SentryNSExceptionCaptureHelper::reportExceptionDidFinish */

/* Function Stack Size: 0x10 bytes */

void SentryNSExceptionCaptureHelper::reportExceptionDidFinish(ID param_1,SEL param_2)

{
  DAT_1010e1970 = 0;
  return;
}



/* Address: 0x100b13748 | SentryNSExceptionCaptureHelper::crashOnException: */

/* Function Stack Size: 0x18 bytes */

void SentryNSExceptionCaptureHelper::crashOnException_(ID param_1,SEL param_2,ID param_3)

{
  if ((DAT_1010e1970 & 1) != 0) {
    return;
  }
  objc_stub::FUN_100bfeea0(param_1);
  return;
}



/* Address: 0x100b1375c | SentryNSExceptionCaptureHelper::captureException: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryNSExceptionCaptureHelper::captureException_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  code *pcVar3;
  
  IVar1 = objc_stub::sharedInstance((ID)&objc::class_t::_TtC6Sentry25SentryDependencyContainer);
  IVar1 = objc_stub::crashReporter(IVar1);
  IVar2 = objc_stub::FUN_100c10d20(IVar1);
  if ((param_3 != 0) && (IVar2 != 0)) {
    pcVar3 = (code *)objc_stub::FUN_100c10d20(IVar1);
    (*pcVar3)(param_3);
  }
  return;
}



/* Address: 0x100b137e8 | SentryFileIOTrackerHelper::initWithThreadInspector: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryFileIOTrackerHelper::initWithThreadInspector_
             (ID param_1,SEL param_2,ID param_3,uint param_4)

{
  ID self;
  objc_super local_30;
  
  local_30.super_class = &objc::class_t::SentryFileIOTrackerHelper;
  local_30.receiver = param_1;
  self = _objc_msgSendSuper2(&local_30,"init",param_3,(ulong)param_4);
  if (self != 0) {
    objc_stub::FUN_100c0dd60(self,param_3);
  }
  return self;
}



/* Address: 0x100b13854 | SentryFileIOTrackerHelper::enable */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryFileIOTrackerHelper::enable(ID param_1,SEL param_2)

{
  _objc_sync_enter();
  objc_stub::FUN_100c0c440(param_1,1);
  _objc_sync_exit(param_1);
  return;
}



/* Address: 0x100b138a4 | SentryFileIOTrackerHelper::disable */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryFileIOTrackerHelper::disable(ID param_1,SEL param_2)

{
  _objc_sync_enter();
  objc_stub::FUN_100c0c440(param_1,0);
  _objc_sync_exit(param_1);
  return;
}



/* Address: 0x100b138f4 | SentryFileIOTrackerHelper::measureNSData:writeToFile:atomically:origin:processDirectoryPath:method: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x3c bytes */

bool SentryFileIOTrackerHelper::
     measureNSData_writeToFile_atomically_origin_processDirectoryPath_method_
               (ID param_1,SEL param_2,ID param_3,ID param_4,bool param_5,ID param_6,ID param_7,
               ID param_8,undefined4 param_9)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = objc_stub::FUN_100c0f520(param_1,param_3,param_4,param_6,param_7);
  (**(code **)(param_8 + 0x10))(param_8,param_4,param_5);
  if (IVar1 != 0) {
    IVar2 = objc_stub::length(param_3);
    IVar2 = objc_stub::numberWithUnsignedInteger_((ID)&_OBJC_CLASS___NSNumber,IVar2);
    objc_stub::FUN_100c02720(param_1,IVar2,IVar1);
  }
  return (bool)param_8;
}



/* Address: 0x100b13a04 | SentryFileIOTrackerHelper::measureNSData:writeToFile:options:origin:processDirectoryPath:error:method: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x48 bytes */

bool SentryFileIOTrackerHelper::
     measureNSData_writeToFile_options_origin_processDirectoryPath_error_method_
               (ID param_1,SEL param_2,ID param_3,ID param_4,unsigned_long_long param_5,ID param_6,
               ID param_7,ID *param_8,ID param_9,undefined4 param_10)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = objc_stub::FUN_100c0f520(param_1,param_3,param_4,param_6,param_7);
  (**(code **)(param_9 + 0x10))(param_9,param_4,param_5,param_8);
  if (IVar1 != 0) {
    IVar2 = objc_stub::length(param_3);
    IVar2 = objc_stub::numberWithUnsignedInteger_((ID)&_OBJC_CLASS___NSNumber,IVar2);
    objc_stub::FUN_100c02720(param_1,IVar2,IVar1);
  }
  return (bool)param_9;
}



/* Address: 0x100b13b1c | SentryFileIOTrackerHelper::measureNSDataFromFile:origin:processDirectoryPath:method: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x30 bytes */

void SentryFileIOTrackerHelper::measureNSDataFromFile_origin_processDirectoryPath_method_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,uint param_7)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100c0f500(param_1,param_3,param_4,&cf_file_read,param_5,(ulong)param_7);
  (**(code **)(param_6 + 0x10))(param_6);
  if (IVar1 != 0) {
    objc_stub::FUN_100c02720(param_1,param_6,IVar1);
  }
  objc_stub::FUN_100c01b20(param_1);
  return;
}



/* Address: 0x100b13bd8 | SentryFileIOTrackerHelper::measureNSDataFromURL:origin:processDirectoryPath:method: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_unsafeClaimAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x30 bytes */

void SentryFileIOTrackerHelper::measureNSDataFromURL_origin_processDirectoryPath_method_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,
               undefined4 param_7)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100c09b20(param_3);
  IVar1 = objc_stub::isEqualToString_(IVar1,*(undefined8 *)PTR__NSURLFileScheme_100ea7c78);
  if ((IVar1 & 1) == 0) {
    (**(code **)(param_6 + 0x10))(param_6);
  }
  else {
    IVar1 = objc_stub::path(param_3);
    IVar1 = objc_stub::FUN_100c0f500(param_1,IVar1,param_4,&cf_file_read,param_5);
    (**(code **)(param_6 + 0x10))(param_6);
    if (IVar1 != 0) {
      objc_stub::FUN_100c02720(param_1,param_6,IVar1);
    }
    objc_stub::FUN_100c01b20(param_1);
  }
  return;
}



/* Address: 0x100b13d3c | SentryFileIOTrackerHelper::measureNSFileManagerCreateFileAtPath:data:attributes:origin:processDirectoryPath:method: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x40 bytes */

bool SentryFileIOTrackerHelper::
     measureNSFileManagerCreateFileAtPath_data_attributes_origin_processDirectoryPath_method_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,ID param_7,
               ID param_8,undefined4 param_9)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = objc_stub::FUN_100c0f520(param_1,param_4,param_3,param_6,param_7);
  (**(code **)(param_8 + 0x10))(param_8,param_3,param_4,param_5);
  if (IVar1 != 0) {
    IVar2 = objc_stub::length(param_4);
    IVar2 = objc_stub::numberWithUnsignedInteger_((ID)&_OBJC_CLASS___NSNumber,IVar2);
    objc_stub::FUN_100c02720(param_1,IVar2,IVar1);
  }
  return (bool)param_8;
}



/* Address: 0x100b13e64 | SentryFileIOTrackerHelper::spanForPath:origin:operation:processDirectoryPath: */

/* Function Stack Size: 0x30 bytes */

ID SentryFileIOTrackerHelper::spanForPath_origin_operation_processDirectoryPath_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100c0f040(param_1);
  return IVar1;
}



/* Address: 0x100b13e6c | SentryFileIOTrackerHelper::spanForPath:origin:operation:processDirectoryPath:size: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x38 bytes */

ID SentryFileIOTrackerHelper::spanForPath_origin_operation_processDirectoryPath_size_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,
             unsigned_long_long param_7)

{
  int iVar1;
  ID IVar2;
  ID IVar3;
  
  _objc_sync_enter();
  IVar2 = objc_stub::isEnabled(param_1);
  _objc_sync_exit(param_1);
  if (((int)IVar2 == 0) || (IVar2 = objc_stub::FUN_100c035a0(param_1,param_3), (IVar2 & 1) != 0)) {
    IVar2 = 0;
  }
  else {
    IVar2 = objc_stub::FUN_100c10b20(param_1,param_3,param_7);
    IVar3 = objc_stub::currentHub((ID)&objc::class_t::SentrySDKInternal);
    IVar3 = objc_stub::scope(IVar3);
    IVar3 = objc_stub::FUN_100c0efc0(IVar3);
    iVar1 = 0;
    if (IVar3 == 0) {
      FUN_100b3a1c0();
      if (iVar1 != 0) {
        FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryFileIOTrackerHelper.m"
                      ,0xc3,&cf_Notransactionboundtoscope_Won_ttrackfileIOoperation_);
      }
      IVar2 = 0;
    }
    else {
      IVar2 = objc_stub::startChildWithOperation_description_(IVar3,param_5,IVar2);
      if (IVar2 == 0) {
        IVar3 = IVar2;
        FUN_100b3a1c0();
        if ((int)IVar3 != 0) {
          FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryFileIOTrackerHelper.m"
                        ,0xca,&cf_Notransactionboundtoscope_Won_ttrackfileIOoperation_);
        }
      }
      else {
        objc_stub::FUN_100c0cf40(IVar2,param_4);
        IVar3 = objc_stub::setDataValue_forKey_(IVar2,param_3,&cf_file_path);
        iVar1 = (int)IVar3;
        if (param_7 != 0) {
          IVar3 = objc_stub::numberWithUnsignedInteger_((ID)&_OBJC_CLASS___NSNumber,param_7);
          objc_stub::setDataValue_forKey_(IVar2,IVar3,&cf_file_size);
          iVar1 = 0;
        }
        FUN_100b3a1c0();
        if (iVar1 != 0) {
          objc_stub::description(IVar2);
          FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryFileIOTrackerHelper.m"
                        ,0xd7,&
                              cf_Automaticallystartedanewspanwithdescription____operation____origin___
                       );
        }
        objc_stub::FUN_100c06880(param_1,IVar2,param_6);
      }
    }
  }
  return IVar2;
}



/* Address: 0x100b1411c | SentryFileIOTrackerHelper::mainThreadExtraInfo:processDirectoryPath: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void SentryFileIOTrackerHelper::mainThreadExtraInfo_processDirectoryPath_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  ID IVar2;
  undefined *local_78;
  undefined8 local_70;
  code *local_68;
  undefined *puStack_60;
  ID local_58;
  
  IVar1 = objc_stub::isMainThread((ID)&_OBJC_CLASS___NSThread);
  IVar2 = objc_stub::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,IVar1);
  objc_stub::setDataValue_forKey_(param_3,IVar2,&cf_blocked_main_thread);
  if ((int)IVar1 != 0) {
    IVar1 = objc_stub::FUN_100c0f260(param_1);
    (**(code **)(IVar1 + 0x10))();
    IVar1 = objc_stub::frames(IVar1);
    local_78 = PTR___NSConcreteStackBlock_100ea82a0;
    local_70 = 0xc2000000;
    local_68 = FUN_100b14300;
    puStack_60 = &DAT_100f34330;
    local_58 = param_4;
    IVar2 = objc_stub::FUN_100c07fa0((ID)&_OBJC_CLASS___NSPredicate,&local_78);
    IVar1 = objc_stub::FUN_100c025a0(IVar1,IVar2);
    IVar2 = objc_stub::count(IVar1);
    if (IVar2 < 2) {
      IVar1 = objc_stub::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,0);
      objc_stub::setDataValue_forKey_(param_3,IVar1,&cf_blocked_main_thread);
    }
    else {
      objc_stub::FUN_100c0bea0(param_3,IVar1);
    }
  }
  return;
}



/* Address: 0x100b14300 | FUN_100b14300 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100b14300(long param_1,ID param_2)

{
  ID IVar1;
  
  IVar1 = objc_stub::package(param_2);
  IVar1 = objc_stub::hasPrefix_(IVar1,*(undefined8 *)(param_1 + 0x20));
  return IVar1;
}



/* Address: 0x100b14348 | SentryFileIOTrackerHelper::startTrackingWritingNSData:filePath:origin:processDirectoryPath: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x30 bytes */

ID SentryFileIOTrackerHelper::startTrackingWritingNSData_filePath_origin_processDirectoryPath_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6)

{
  ID IVar1;
  
  IVar1 = objc_stub::length(param_3);
  IVar1 = objc_stub::FUN_100c0f040(param_1,param_4,param_5,&cf_file_write,param_6,IVar1);
  return IVar1;
}



/* Address: 0x100b143fc | SentryFileIOTrackerHelper::startTrackingReadingFilePath:origin:operation:processDirectoryPath: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x30 bytes */

ID SentryFileIOTrackerHelper::startTrackingReadingFilePath_origin_operation_processDirectoryPath_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  
  IVar1 = objc_stub::currentThread((ID)&_OBJC_CLASS___NSThread);
  IVar1 = objc_stub::FUN_100c10480(IVar1);
  IVar1 = objc_stub::objectForKey_(IVar1,&cf_SENTRY_TRACKING_COUNTER_KEY);
  IVar2 = objc_stub::currentThread((ID)&_OBJC_CLASS___NSThread);
  IVar2 = objc_stub::FUN_100c10480(IVar2);
  IVar3 = objc_stub::intValue(IVar1);
  IVar3 = objc_stub::numberWithInt_((ID)&_OBJC_CLASS___NSNumber,(ulong)((int)IVar3 + 1));
  objc_stub::setObject_forKey_(IVar2,IVar3,&cf_SENTRY_TRACKING_COUNTER_KEY);
  if (IVar1 == 0) {
    IVar1 = objc_stub::FUN_100c0f040(param_1,param_3,param_4,param_5,param_6,0);
  }
  else {
    IVar1 = 0;
  }
  return IVar1;
}


