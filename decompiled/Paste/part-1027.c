/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100b18fb8 | SentryDefaultThreadInspector::getCurrentThreadsWithStackTrace */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryDefaultThreadInspector::getCurrentThreadsWithStackTrace(ID param_1,SEL param_2)

{
  undefined *self;
  ID self_00;
  ID IVar1;
  long lVar2;
  class_t *self_01;
  ID IVar3;
  ID IVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ID *pIVar8;
  ID IVar9;
  ID *pIVar10;
  ID IStack_560;
  undefined1 *local_558;
  uint local_54c;
  long local_548;
  undefined1 auStack_540 [1232];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  self = &_OBJC_CLASS___NSMutableArray;
  _objc_alloc();
  self_00 = objc_stub::init((ID)self);
  IVar1 = param_1;
  _objc_sync_enter();
  FUN_100b40bac();
  local_548 = 0;
  local_54c = 0;
  FUN_100b512a8(&local_548,&local_54c,0x46);
  if (local_54c != 0) {
    pIVar10 = &IStack_560 + (ulong)local_54c * -0x1f6;
    uVar5 = (ulong)local_54c;
    if (local_54c != 0) {
      uVar7 = 0;
      lVar2 = local_548;
      pIVar8 = pIVar10;
      do {
        uVar6 = (ulong)*(uint *)(lVar2 + uVar7 * 4);
        if (IVar1 == uVar6) {
          *(undefined4 *)(pIVar8 + 0x1f5) = 0;
        }
        else {
          FUN_100b18a48(uVar6,auStack_540,pIVar8 + 1,100);
          *(int *)(pIVar8 + 0x1f5) = (int)uVar6;
          uVar5 = (ulong)local_54c;
          lVar2 = local_548;
        }
        *pIVar8 = (ulong)*(uint *)(lVar2 + uVar7 * 4);
        uVar7 = uVar7 + 1;
        pIVar8 = pIVar8 + 0x1f6;
      } while (uVar7 < uVar5);
    }
    local_558 = (undefined1 *)&IStack_560;
    FUN_100b513c8();
    if (local_54c != 0) {
      uVar5 = 0;
      do {
        self_01 = &objc::class_t::SentryThread;
        _objc_alloc();
        IVar3 = objc_stub::numberWithInt_((ID)&_OBJC_CLASS___NSNumber,uVar5);
        IVar3 = objc_stub::FUN_100c04d20((ID)self_01,IVar3);
        IVar4 = objc_stub::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,(ulong)(uVar5 == 0));
        objc_stub::FUN_100c0c4a0(IVar3,IVar4);
        Hint_Prefetch(pIVar10 + 0x3ec,0,0,0);
        IVar4 = objc_stub::FUN_100c03020(param_1,pIVar10 + 0x3ec,*pIVar10);
        objc_stub::setName_(IVar3,IVar4);
        IVar4 = objc_stub::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,0);
        objc_stub::FUN_100c0b200(IVar3,IVar4);
        IVar9 = *pIVar10;
        IVar4 = objc_stub::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,(ulong)(IVar9 == IVar1));
        objc_stub::FUN_100c0b280(IVar3,IVar4);
        if (IVar9 == IVar1) {
          IVar4 = objc_stub::FUN_100c0f220(param_1);
          IVar4 = objc_stub::FUN_100bfe9c0(IVar4);
          objc_stub::FUN_100c0dd20(IVar3,IVar4);
        }
        else {
          IVar4 = objc_stub::FUN_100c0f220(param_1);
          Hint_Prefetch(pIVar10 + 0x5e1,0,0,0);
          IVar4 = objc_stub::FUN_100bfe9a0
                            (IVar4,pIVar10 + 0x5e1,pIVar10 + 1,(ulong)(uint)pIVar10[0x1f5]);
          objc_stub::FUN_100c0dd20(IVar3,IVar4);
        }
        IVar4 = objc_stub::FUN_100c06760(param_1);
        IVar4 = objc_stub::FUN_100c05aa0(IVar4,*pIVar10);
        if ((int)IVar4 == 0) {
          objc_stub::addObject_(self_00,IVar3);
        }
        else {
          objc_stub::FUN_100c05300(self_00,IVar3,0);
        }
        uVar5 = uVar5 + 1;
        pIVar10 = pIVar10 + 0x1f6;
      } while (uVar5 < local_54c);
    }
  }
  _objc_sync_exit(param_1);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return self_00;
}



/* Address: 0x100b19350 | SentryDefaultThreadInspector::getThreadName: */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryDefaultThreadInspector::getThreadName_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  ID IVar1;
  ID IVar2;
  undefined1 auStack_b8 [128];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ea82f0;
  IVar1 = objc_stub::FUN_100c06760(param_1);
  IVar1 = objc_stub::FUN_100c03040(IVar1,param_3,auStack_b8,0x80);
  if ((int)IVar1 != 0) {
    IVar1 = objc_stub::stringWithCString_encoding_((ID)&_OBJC_CLASS___NSString,auStack_b8,4);
    IVar2 = objc_stub::length(IVar1);
    if (IVar2 != 0) goto LAB_100b193e0;
  }
  IVar2 = 0;
  IVar1 = 0;
LAB_100b193e0:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(IVar2);
  }
  return IVar1;
}



/* Address: 0x100b19418 | SentryDefaultThreadInspector::stacktraceBuilder */

/* Function Stack Size: 0x10 bytes */

ID SentryDefaultThreadInspector::stacktraceBuilder(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x10);
}



/* Address: 0x100b19420 | SentryDefaultThreadInspector::setStacktraceBuilder: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryDefaultThreadInspector::setStacktraceBuilder_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x10) = param_3;
  return;
}



/* Address: 0x100b1942c | SentryDefaultThreadInspector::machineContextWrapper */

/* Function Stack Size: 0x10 bytes */

ID SentryDefaultThreadInspector::machineContextWrapper(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x18);
}



/* Address: 0x100b19434 | SentryDefaultThreadInspector::setMachineContextWrapper: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryDefaultThreadInspector::setMachineContextWrapper_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x18) = param_3;
  return;
}



/* Address: 0x100b19440 | SentryDefaultThreadInspector::symbolicate */

/* Function Stack Size: 0x10 bytes */

bool SentryDefaultThreadInspector::symbolicate(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + 8);
}



/* Address: 0x100b19448 | SentryDefaultThreadInspector::setSymbolicate: */

/* Function Stack Size: 0x14 bytes */

void SentryDefaultThreadInspector::setSymbolicate_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + 8) = (char)param_3;
  return;
}



/* Address: 0x100b19450 | SentryDefaultThreadInspector::.cxx_destruct */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryDefaultThreadInspector::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



/* Address: 0x100b19480 | FUN_100b19480 */

void FUN_100b19480(char *param_1,char *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  char *pcVar3;
  ulong uVar4;
  tm local_70;
  time_t tStack_38;
  
  _pthread_mutex_lock((pthread_mutex_t *)&DAT_100ffa500);
  pcVar3 = "";
  if (param_1 != (char *)0x0) {
    pcVar3 = param_1;
  }
  puVar1 = &DAT_1010e19a0;
  ___strlcpy_chk(&DAT_1010e19a0,pcVar3,500,500);
  if (param_1 == (char *)0x0) {
    pcVar3 = "Report store initialized with NULL app name";
    uVar2 = 0xde;
LAB_100b1951c:
    FUN_100b5e930("ERROR",
                  "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/SentryCrashReportStore.c"
                  ,uVar2,pcVar3);
  }
  else if ((undefined *)0x1f3 < puVar1) {
    pcVar3 = "App name is too long; truncating from %zu to %zu bytes";
    uVar2 = 0xe1;
    goto LAB_100b1951c;
  }
  pcVar3 = "";
  if (param_2 != (char *)0x0) {
    pcVar3 = param_2;
  }
  puVar1 = &DAT_1010e1b94;
  ___strlcpy_chk(&DAT_1010e1b94,pcVar3,500,500);
  if (param_2 == (char *)0x0) {
    pcVar3 = "Report store initialized with NULL reports path";
    uVar2 = 0xe7;
  }
  else {
    if (puVar1 < (undefined *)0x1f4) goto LAB_100b19590;
    pcVar3 = "Reports path is too long; truncating from %zu to %zu bytes";
    uVar2 = 0xea;
  }
  FUN_100b5e930("ERROR",
                "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/SentryCrashReportStore.c"
                ,uVar2,pcVar3);
LAB_100b19590:
  FUN_100b17b6c(&DAT_1010e1b94);
  FUN_100b19628();
  _time(&tStack_38);
  _gmtime_r(&tStack_38,&local_70);
  uVar4 = ((long)local_70.tm_sec + (long)local_70.tm_min * 0x3d + (long)local_70.tm_hour * 0xe4c +
           (long)local_70.tm_yday * 0x15720 + (long)local_70.tm_year * 0x1ea8fc0) * 0x800000;
  DAT_1010e1d88 = uVar4 & 0xffffffff00000000;
  DAT_1010e1d90 = (undefined4)uVar4;
  _pthread_mutex_unlock((pthread_mutex_t *)&DAT_100ffa500);
  return;
}



/* Address: 0x100b19628 | FUN_100b19628 */

void FUN_100b19628(ulong param_1)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  undefined8 uVar3;
  long lVar4;
  undefined8 auStack_280 [4];
  undefined8 uStack_260;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  FUN_100b197ec();
  if (DAT_100ffa540 < (int)param_1) {
    (*(code *)PTR____chkstk_darwin_100ea82c0)((param_1 & 0xffffffff) * 8 + 0xf & 0xffffffff0);
    lVar1 = -extraout_x8;
    lVar2 = (long)&uStack_260 + lVar1;
    FUN_100b198e4();
    if (DAT_100ffa540 < (int)lVar2) {
      lVar4 = 0;
      do {
        uVar3 = *(undefined8 *)((long)&uStack_260 + lVar1 + lVar4 * 8);
        *(undefined **)((long)auStack_280 + lVar1 + 8) = &DAT_1010e19a0;
        *(undefined8 *)((long)auStack_280 + lVar1 + 0x10) = uVar3;
        *(undefined **)((long)auStack_280 + lVar1) = &DAT_1010e1b94;
        _snprintf((char *)((long)&uStack_260 + 4),500,"%s/%s-report-%016llx.json");
        FUN_100b17fcc((long)&uStack_260 + 4,1);
        lVar4 = lVar4 + 1;
      } while (lVar4 < (long)(int)lVar2 - (long)DAT_100ffa540);
    }
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x100b19754 | FUN_100b19754 */

void FUN_100b19754(char *param_1)

{
  LOAcquire();
  DAT_1010e1d90 = DAT_1010e1d90 + 1;
  LORelease();
  _snprintf(param_1,500,"%s/%s-report-%016llx.json");
  return;
}



/* Address: 0x100b197b0 | FUN_100b197b0 */

int FUN_100b197b0(ID param_1,SEL param_2)

{
  int iVar1;
  
  iVar1 = _pthread_mutex_lock((pthread_mutex_t *)&DAT_100ffa500);
  FUN_100b197ec();
  _pthread_mutex_unlock((pthread_mutex_t *)&DAT_100ffa500);
  return iVar1;
}



/* Address: 0x100b197ec | FUN_100b197ec */

int FUN_100b197ec(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  
  puVar1 = &DAT_1010e1b94;
  _opendir();
  if (puVar1 == (undefined *)0x0) {
    FUN_100b5e930("ERROR",
                  "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/SentryCrashReportStore.c"
                  ,0x7e,"Could not open directory %s");
    iVar3 = 0;
  }
  else {
    puVar2 = puVar1;
    _readdir();
    iVar3 = 0;
    while (puVar2 != (undefined *)0x0) {
      if (puVar2[0x14] != '\x04') {
        puVar2 = puVar2 + 0x15;
        FUN_100b19be8();
        if (0 < (long)puVar2) {
          iVar3 = iVar3 + 1;
        }
      }
      puVar2 = puVar1;
      _readdir();
    }
    _closedir(puVar1);
  }
  return iVar3;
}



/* Address: 0x100b19890 | FUN_100b19890 */

undefined8 FUN_100b19890(undefined8 param_1,undefined8 param_2)

{
  _pthread_mutex_lock((pthread_mutex_t *)&DAT_100ffa500);
  FUN_100b198e4(param_1,param_2);
  _pthread_mutex_unlock((pthread_mutex_t *)&DAT_100ffa500);
  return param_1;
}



/* Address: 0x100b198e4 | FUN_100b198e4 */

int FUN_100b198e4(void *param_1,uint param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  
  puVar1 = &DAT_1010e1b94;
  _opendir();
  if (puVar1 == (undefined *)0x0) {
    FUN_100b5e930("ERROR",
                  "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/SentryCrashReportStore.c"
                  ,0x95,"Could not open directory %s");
    iVar3 = 0;
  }
  else {
    puVar2 = puVar1;
    _readdir();
    iVar3 = 0;
    if (puVar2 != (undefined *)0x0 && 0 < (int)param_2) {
      do {
        puVar2 = puVar2 + 0x15;
        FUN_100b19be8();
        if (0 < (long)puVar2) {
          *(undefined **)((long)param_1 + (long)iVar3 * 8) = puVar2;
          iVar3 = iVar3 + 1;
        }
        puVar2 = puVar1;
        _readdir();
      } while ((puVar2 != (undefined *)0x0) && (iVar3 < (int)param_2));
    }
    _qsort(param_1,(ulong)param_2,8,(int *)FUN_100b19c9c);
    _closedir(puVar1);
  }
  return iVar3;
}



/* Address: 0x100b199bc | FUN_100b199bc */

void FUN_100b199bc(void)

{
  undefined8 local_238;
  char acStack_22c [500];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ea82f0;
  _pthread_mutex_lock((pthread_mutex_t *)&DAT_100ffa500);
  _snprintf(acStack_22c,500,"%s/%s-report-%016llx.json");
  FUN_100b178d4(acStack_22c,&local_238,0,2000000);
  _pthread_mutex_unlock((pthread_mutex_t *)&DAT_100ffa500);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(local_238);
}



/* Address: 0x100b19a74 | FUN_100b19a74 */

void FUN_100b19a74(undefined8 param_1,char *param_2)

{
  _snprintf(param_2,500,"%s/%s-report-%016llx-attachments");
  return;
}



/* Address: 0x100b19ab8 | FUN_100b19ab8 */

void FUN_100b19ab8(char *param_1,char *param_2)

{
  _strrchr(param_1,0x2f);
  FUN_100b19be8();
  _snprintf(param_2,500,"%s/%s-report-%016llx-attachments");
  return;
}



/* Address: 0x100b19b20 | FUN_100b19b20 */

void FUN_100b19b20(ID param_1,SEL param_2)

{
  _pthread_mutex_lock((pthread_mutex_t *)&DAT_100ffa500);
  FUN_100b18098(&DAT_1010e1b94);
  _pthread_mutex_unlock((pthread_mutex_t *)&DAT_100ffa500);
  return;
}



/* Address: 0x100b19b58 | FUN_100b19b58 */

void FUN_100b19b58(void)

{
  char acStack_21c [500];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100ea82f0;
  _snprintf(acStack_21c,500,"%s/%s-report-%016llx.json");
  FUN_100b17fcc(acStack_21c,1);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100b19bdc | FUN_100b19bdc */

void FUN_100b19bdc(undefined4 param_1)

{
  DAT_100ffa540 = param_1;
  return;
}



/* Address: 0x100b19be8 | FUN_100b19be8 */

ulonglong FUN_100b19be8(char *param_1)

{
  int iVar1;
  size_t sVar2;
  ulonglong uVar3;
  char *local_38;
  
  sVar2 = _strlen(&DAT_1010e19a0);
  iVar1 = _strncmp(param_1,&DAT_1010e19a0,sVar2);
  if (iVar1 == 0) {
    param_1 = param_1 + sVar2;
    iVar1 = _strncmp(param_1,"-report-",8);
    if (iVar1 == 0) {
      local_38 = (char *)0x0;
      uVar3 = _strtoull(param_1 + 8,&local_38,0x10);
      if (local_38 != param_1 + 8) {
        iVar1 = _strcmp(local_38,".json");
        if (iVar1 == 0) {
          return uVar3;
        }
        return 0;
      }
    }
  }
  return 0;
}



/* Address: 0x100b19c9c | FUN_100b19c9c */

uint FUN_100b19c9c(long *param_1,long *param_2)

{
  uint uVar1;
  
  uVar1 = (uint)(*param_1 != *param_2);
  if (*param_1 < *param_2) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* Address: 0x100b19cb4 | SentryTransportAdapter::initWithTransports:options: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

ID SentryTransportAdapter::initWithTransports_options_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID self;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::SentryTransportAdapter;
  local_40.receiver = param_1;
  self = _objc_msgSendSuper2(&local_40,"init");
  if (self != 0) {
    objc_stub::FUN_100c0e5a0(self,param_3);
    objc_stub::FUN_100c0cf00(self,param_4);
  }
  return self;
}



/* Address: 0x100b19d4c | SentryTransportAdapter::sendEvent:session:attachments: */

/* Function Stack Size: 0x28 bytes */

void SentryTransportAdapter::sendEvent_session_attachments_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  objc_stub::FUN_100c09f80(param_1,param_3,param_4,0,param_5);
  return;
}



/* Address: 0x100b19d58 | SentryTransportAdapter::sendEvent:traceContext:attachments: */

/* Function Stack Size: 0x28 bytes */

void SentryTransportAdapter::sendEvent_traceContext_attachments_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  objc_stub::FUN_100c09f00(param_1);
  return;
}



/* Address: 0x100b19d68 | SentryTransportAdapter::sendEvent:traceContext:attachments:additionalEnvelopeItems: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x30 bytes */

void SentryTransportAdapter::sendEvent_traceContext_attachments_additionalEnvelopeItems_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6)

{
  ID IVar1;
  class_t *pcVar2;
  ID IVar3;
  
  IVar1 = objc_stub::FUN_100bfe940(param_1,param_3,param_5);
  objc_stub::FUN_100bfd740(IVar1,param_6);
  pcVar2 = &objc::class_t::_TtC6Sentry20SentryEnvelopeHeader;
  _objc_alloc();
  IVar3 = objc_stub::FUN_100c01f00(param_3);
  IVar3 = objc_stub::FUN_100c04340((ID)pcVar2,IVar3,param_4);
  pcVar2 = &objc::class_t::_TtC6Sentry14SentryEnvelope;
  _objc_alloc();
  IVar1 = objc_stub::FUN_100c042c0((ID)pcVar2,IVar3,IVar1);
  objc_stub::FUN_100c09ea0(param_1,IVar1);
  return;
}



/* Address: 0x100b19e7c | SentryTransportAdapter::sendEvent:withSession:traceContext:attachments: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x30 bytes */

void SentryTransportAdapter::sendEvent_withSession_traceContext_attachments_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6)

{
  ID IVar1;
  class_t *pcVar2;
  ID IVar3;
  
  IVar1 = objc_stub::FUN_100bfe940(param_1,param_3,param_6);
  pcVar2 = &objc::class_t::_TtC6Sentry18SentryEnvelopeItem;
  _objc_alloc();
  IVar3 = objc_stub::FUN_100c04b40((ID)pcVar2,param_4);
  objc_stub::addObject_(IVar1,IVar3);
  pcVar2 = &objc::class_t::_TtC6Sentry20SentryEnvelopeHeader;
  _objc_alloc();
  IVar3 = objc_stub::FUN_100c01f00(param_3);
  IVar3 = objc_stub::FUN_100c04340((ID)pcVar2,IVar3,param_5);
  pcVar2 = &objc::class_t::_TtC6Sentry14SentryEnvelope;
  _objc_alloc();
  IVar1 = objc_stub::FUN_100c042c0((ID)pcVar2,IVar3,IVar1);
  objc_stub::FUN_100c09ea0(param_1,IVar1);
  return;
}



/* Address: 0x100b19fb4 | SentryTransportAdapter::storeEvent:traceContext: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void SentryTransportAdapter::storeEvent_traceContext_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  class_t *pcVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  long lVar5;
  ID IVar6;
  undefined8 local_130;
  long lStack_128;
  long *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  ID local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  pcVar1 = &objc::class_t::_TtC6Sentry18SentryEnvelopeItem;
  _objc_alloc();
  IVar2 = objc_stub::FUN_100c04120((ID)pcVar1,param_3);
  pcVar1 = &objc::class_t::_TtC6Sentry20SentryEnvelopeHeader;
  _objc_alloc();
  IVar3 = objc_stub::FUN_100c01f00(param_3);
  IVar3 = objc_stub::FUN_100c04340((ID)pcVar1,IVar3,param_4);
  pcVar1 = &objc::class_t::_TtC6Sentry14SentryEnvelope;
  _objc_alloc();
  local_70 = IVar2;
  IVar2 = objc_stub::arrayWithObjects_count_((ID)&_OBJC_CLASS___NSArray,&local_70,1);
  IVar2 = objc_stub::FUN_100c042c0((ID)pcVar1,IVar3,IVar2);
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (long *)0x0;
  IVar3 = objc_stub::FUN_100c10ba0(param_1);
  IVar4 = objc_stub::countByEnumeratingWithState_objects_count_(IVar3,&local_130,auStack_f0,0x10);
  if (IVar4 != 0) {
    lVar5 = *local_120;
    do {
      IVar6 = 0;
      do {
        if (*local_120 != lVar5) {
          _objc_enumerationMutation(IVar3);
        }
        objc_stub::storeEnvelope_(*(ID *)(lStack_128 + IVar6 * 8),IVar2);
        IVar6 = IVar6 + 1;
      } while (IVar4 != IVar6);
      IVar4 = objc_stub::countByEnumeratingWithState_objects_count_
                        (IVar3,&local_130,auStack_f0,0x10);
    } while (IVar4 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}



/* Address: 0x100b1a1ac | SentryTransportAdapter::sendEnvelope: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryTransportAdapter::sendEnvelope_(ID param_1,SEL param_2,ID param_3)

{
  ID self;
  ID IVar1;
  long lVar2;
  ID IVar3;
  undefined8 local_110;
  long lStack_108;
  long *local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  local_100 = (long *)0x0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  self = objc_stub::FUN_100c10ba0(param_1);
  IVar1 = objc_stub::countByEnumeratingWithState_objects_count_(self,&local_110,auStack_c8,0x10);
  if (IVar1 != 0) {
    lVar2 = *local_100;
    do {
      IVar3 = 0;
      do {
        if (*local_100 != lVar2) {
          _objc_enumerationMutation(self);
        }
        objc_stub::FUN_100c09ea0(*(ID *)(lStack_108 + IVar3 * 8),param_3);
        IVar3 = IVar3 + 1;
      } while (IVar1 != IVar3);
      IVar1 = objc_stub::countByEnumeratingWithState_objects_count_(self,&local_110,auStack_c8,0x10)
      ;
    } while (IVar1 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}



/* Address: 0x100b1a2bc | SentryTransportAdapter::recordLostEvent:reason: */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void SentryTransportAdapter::recordLostEvent_reason_
               (ID param_1,SEL param_2,unsigned_long_long param_3,unsigned_long_long param_4)

{
  ID self;
  ID IVar1;
  long lVar2;
  ID IVar3;
  undefined8 local_120;
  long lStack_118;
  long *local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  local_110 = (long *)0x0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  self = objc_stub::FUN_100c10ba0(param_1);
  IVar1 = objc_stub::countByEnumeratingWithState_objects_count_(self,&local_120,auStack_d8,0x10);
  if (IVar1 != 0) {
    lVar2 = *local_110;
    do {
      IVar3 = 0;
      do {
        if (*local_110 != lVar2) {
          _objc_enumerationMutation(self);
        }
        objc_stub::recordLostEvent_reason_(*(ID *)(lStack_118 + IVar3 * 8),param_3,param_4);
        IVar3 = IVar3 + 1;
      } while (IVar1 != IVar3);
      IVar1 = objc_stub::countByEnumeratingWithState_objects_count_(self,&local_120,auStack_d8,0x10)
      ;
    } while (IVar1 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}



/* Address: 0x100b1a3c4 | SentryTransportAdapter::recordLostEvent:reason:quantity: */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x28 bytes */

void SentryTransportAdapter::recordLostEvent_reason_quantity_
               (ID param_1,SEL param_2,unsigned_long_long param_3,unsigned_long_long param_4,
               unsigned_long_long param_5)

{
  ID self;
  ID IVar1;
  long lVar2;
  ID IVar3;
  undefined8 local_120;
  long lStack_118;
  long *local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  local_110 = (long *)0x0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  self = objc_stub::FUN_100c10ba0(param_1);
  IVar1 = objc_stub::countByEnumeratingWithState_objects_count_(self,&local_120,auStack_d8,0x10);
  if (IVar1 != 0) {
    lVar2 = *local_110;
    do {
      IVar3 = 0;
      do {
        if (*local_110 != lVar2) {
          _objc_enumerationMutation(self);
        }
        objc_stub::recordLostEvent_reason_quantity_
                  (*(ID *)(lStack_118 + IVar3 * 8),param_3,param_4,param_5);
        IVar3 = IVar3 + 1;
      } while (IVar1 != IVar3);
      IVar1 = objc_stub::countByEnumeratingWithState_objects_count_(self,&local_120,auStack_d8,0x10)
      ;
    } while (IVar1 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}



/* Address: 0x100b1a4d4 | SentryTransportAdapter::flush: */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryTransportAdapter::flush_(ID param_1,SEL param_2,double param_3)

{
  ID self;
  ID IVar1;
  long lVar2;
  ID IVar3;
  undefined8 local_120;
  long lStack_118;
  long *local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  local_110 = (long *)0x0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  self = objc_stub::FUN_100c10ba0(param_1);
  IVar1 = objc_stub::countByEnumeratingWithState_objects_count_(self,&local_120,auStack_d8,0x10);
  if (IVar1 != 0) {
    lVar2 = *local_110;
    do {
      IVar3 = 0;
      do {
        if (*local_110 != lVar2) {
          _objc_enumerationMutation(self);
        }
        objc_stub::FUN_100c028c0(*(ID *)(lStack_118 + IVar3 * 8),param_3);
        IVar3 = IVar3 + 1;
      } while (IVar1 != IVar3);
      IVar1 = objc_stub::countByEnumeratingWithState_objects_count_(self,&local_120,auStack_d8,0x10)
      ;
    } while (IVar1 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}



/* Address: 0x100b1a5d4 | SentryTransportAdapter::buildEnvelopeItems:attachments: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID SentryTransportAdapter::buildEnvelopeItems_attachments_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *self;
  ID self_00;
  class_t *pcVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 local_130;
  long lStack_128;
  long *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  self = &_OBJC_CLASS___NSMutableArray;
  _objc_alloc();
  self_00 = objc_stub::init((ID)self);
  pcVar1 = &objc::class_t::_TtC6Sentry18SentryEnvelopeItem;
  _objc_alloc();
  IVar2 = objc_stub::FUN_100c04120((ID)pcVar1,param_3);
  objc_stub::addObject_(self_00,IVar2);
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (long *)0x0;
  IVar2 = objc_stub::countByEnumeratingWithState_objects_count_(param_4,&local_130,auStack_f0,0x10);
  if (IVar2 != 0) {
    lVar6 = *local_120;
    do {
      IVar4 = 0;
      do {
        if (*local_120 != lVar6) {
          _objc_enumerationMutation(param_4);
        }
        uVar5 = *(undefined8 *)(lStack_128 + IVar4 * 8);
        pcVar1 = &objc::class_t::_TtC6Sentry18SentryEnvelopeItem;
        _objc_alloc();
        IVar3 = objc_stub::options(param_1);
        IVar3 = objc_stub::FUN_100c06a40(IVar3);
        IVar3 = objc_stub::FUN_100c03b00((ID)pcVar1,uVar5,IVar3);
        if (IVar3 != 0) {
          objc_stub::addObject_(self_00,IVar3);
        }
        IVar4 = IVar4 + 1;
      } while (IVar2 != IVar4);
      IVar2 = objc_stub::countByEnumeratingWithState_objects_count_
                        (param_4,&local_130,auStack_f0,0x10);
    } while (IVar2 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_70) {
    return self_00;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}



/* Address: 0x100b1a79c | SentryTransportAdapter::transports */

/* Function Stack Size: 0x10 bytes */

ID SentryTransportAdapter::transports(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 8);
}



/* Address: 0x100b1a7a4 | SentryTransportAdapter::setTransports: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryTransportAdapter::setTransports_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 8) = param_3;
  return;
}



/* Address: 0x100b1a7b0 | SentryTransportAdapter::options */

/* Function Stack Size: 0x10 bytes */

ID SentryTransportAdapter::options(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x10);
}



/* Address: 0x100b1a7b8 | SentryTransportAdapter::setOptions: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryTransportAdapter::setOptions_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x10) = param_3;
  return;
}



/* Address: 0x100b1a7c4 | SentryTransportAdapter::.cxx_destruct */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryTransportAdapter::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



/* Address: 0x100b1a7f4 | SentryDefaultTelemetryProcessorTransport::initWithTransportAdapter: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryDefaultTelemetryProcessorTransport::initWithTransportAdapter_
             (ID param_1,SEL param_2,ID param_3)

{
  ID self;
  objc_super local_30;
  
  local_30.super_class = &objc::class_t::SentryDefaultTelemetryProcessorTransport;
  local_30.receiver = param_1;
  self = _objc_msgSendSuper2(&local_30,"init");
  if (self != 0) {
    objc_stub::FUN_100c0e580(self,param_3);
  }
  return self;
}



/* Address: 0x100b1a860 | SentryDefaultTelemetryProcessorTransport::sendEnvelopeWithEnvelope: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryDefaultTelemetryProcessorTransport::sendEnvelopeWithEnvelope_
               (ID param_1,SEL param_2,ID param_3)

{
  ID self;
  
  self = objc_stub::FUN_100c10b80(param_1);
  objc_stub::FUN_100c09ea0(self,param_3);
  return;
}



/* Address: 0x100b1a8b0 | SentryDefaultTelemetryProcessorTransport::transportAdapter */

/* Function Stack Size: 0x10 bytes */

ID SentryDefaultTelemetryProcessorTransport::transportAdapter(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 8);
}



/* Address: 0x100b1a8b8 | SentryDefaultTelemetryProcessorTransport::setTransportAdapter: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryDefaultTelemetryProcessorTransport::setTransportAdapter_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 8) = param_3;
  return;
}



/* Address: 0x100b1a8c4 | SentryDefaultTelemetryProcessorTransport::.cxx_destruct */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryDefaultTelemetryProcessorTransport::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



/* Address: 0x100b1a8d0 | FUN_100b1a8d0 */

void FUN_100b1a8d0(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  char *pcVar1;
  char *******pppppppcVar2;
  char *******pppppppcVar3;
  ulong uVar4;
  int *piVar5;
  char *******pppppppcVar6;
  long *plVar7;
  int *piVar8;
  char *******pppppppcVar9;
  char *******pppppppcVar10;
  char *******pppppppcVar11;
  long lVar12;
  undefined8 *puVar13;
  int iVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  int local_88 [2];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  int local_60;
  char ******local_58;
  ulong uStack_50;
  byte local_41;
  
  uVar15 = param_3;
  FUN_100b4ed6c();
  piVar8 = (int *)*param_2;
  piVar5 = (int *)param_2[1];
  iVar14 = (int)uVar15;
  if (piVar8 == piVar5) {
LAB_100b1a928:
    if (piVar8 != piVar5) {
      *param_1 = *(undefined8 *)(piVar8 + 2);
      if (*(char *)((long)piVar8 + 0x27) < '\0') {
        FUN_100b1abf8(param_1 + 1,*(undefined8 *)(piVar8 + 4),*(undefined8 *)(piVar8 + 6));
      }
      else {
        uVar16 = *(undefined8 *)(piVar8 + 6);
        uVar15 = *(undefined8 *)(piVar8 + 4);
        param_1[3] = *(undefined8 *)(piVar8 + 8);
        param_1[2] = uVar16;
        param_1[1] = uVar15;
      }
      *(int *)(param_1 + 4) = piVar8[10];
      return;
    }
  }
  else {
    do {
      if (*piVar8 == iVar14) goto LAB_100b1a928;
      piVar8 = piVar8 + 0xc;
    } while (piVar8 != piVar5);
  }
  puVar13 = param_1 + 1;
  *puVar13 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_100b4ed74();
  *param_1 = uVar15;
  uVar15 = param_3;
  FUN_100b4eedc();
  *(int *)(param_1 + 4) = (int)uVar15;
  if ((int)uVar15 == -1) {
    return;
  }
  FUN_100b4ed84(&local_58,param_3);
  pppppppcVar6 = (char *******)local_58;
  if (-1 < (char)local_41) {
    uStack_50 = (ulong)local_41;
    pppppppcVar6 = &local_58;
  }
  uVar4 = uStack_50;
  if (8 < uStack_50) {
    uVar4 = 9;
  }
  plVar7 = param_2;
  local_88[0] = iVar14;
  if (uStack_50 == 0) {
LAB_100b1aa94:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(puVar13,&local_58);
    local_80 = *param_1;
    if (*(char *)((long)param_1 + 0x1f) < '\0') {
      FUN_100b1abf8(&local_78,param_1[1],param_1[2]);
    }
    else {
      uStack_70 = param_1[2];
      local_78 = *puVar13;
      local_68 = param_1[3];
    }
    local_60 = *(int *)(param_1 + 4);
    piVar8 = (int *)param_2[1];
    if ((int *)param_2[2] <= piVar8) {
      FUN_100b1ad2c(param_2,local_88);
LAB_100b1ab64:
      param_2[1] = (long)plVar7;
      if (local_68 < 0) {
        __ZdlPv(local_78);
      }
      goto LAB_100b1ab78;
    }
  }
  else {
    pppppppcVar2 = (char *******)((long)pppppppcVar6 + uVar4);
    pppppppcVar9 = pppppppcVar2;
    pppppppcVar11 = pppppppcVar6;
    do {
      pppppppcVar10 = pppppppcVar9;
      if (*(char *)pppppppcVar11 == 'i') {
        lVar12 = 1;
        do {
          pppppppcVar10 = pppppppcVar11;
          if (lVar12 == 9) break;
          pppppppcVar3 = (char *******)((long)pppppppcVar11 + lVar12);
          pppppppcVar10 = pppppppcVar9;
          if (pppppppcVar3 == pppppppcVar2) goto LAB_100b1aa24;
          pcVar1 = "io.sentry" + lVar12;
          lVar12 = lVar12 + 1;
        } while (*(char *)pppppppcVar3 == *pcVar1);
      }
      pppppppcVar11 = (char *******)((long)pppppppcVar11 + 1);
      pppppppcVar9 = pppppppcVar10;
    } while (pppppppcVar11 != pppppppcVar2);
LAB_100b1aa24:
    if ((pppppppcVar10 == pppppppcVar2) || (pppppppcVar10 != pppppppcVar6)) {
      if (0x40 < uStack_50) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc(&local_58,0x40,0)
        ;
      }
      goto LAB_100b1aa94;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *param_1 = 0;
    local_80 = 0;
    if (*(char *)((long)param_1 + 0x1f) < '\0') {
      FUN_100b1abf8(&local_78,param_1[1],param_1[2]);
      local_60 = *(int *)(param_1 + 4);
    }
    else {
      local_60 = 0;
      uStack_70 = param_1[2];
      local_78 = *puVar13;
      local_68 = param_1[3];
    }
    piVar8 = (int *)param_2[1];
    if ((int *)param_2[2] <= piVar8) {
      FUN_100b1ad2c(param_2,local_88);
      goto LAB_100b1ab64;
    }
  }
  *piVar8 = local_88[0];
  *(undefined8 *)(piVar8 + 2) = local_80;
  *(long *)(piVar8 + 8) = local_68;
  *(undefined8 *)(piVar8 + 6) = uStack_70;
  *(undefined8 *)(piVar8 + 4) = local_78;
  uStack_70 = 0;
  local_68 = 0;
  local_78 = 0;
  piVar8[10] = local_60;
  param_2[1] = (long)(piVar8 + 0xc);
LAB_100b1ab78:
  if ((char)local_41 < '\0') {
    __ZdlPv(local_58);
  }
  return;
}



/* Address: 0x100b1abf8 | FUN_100b1abf8 */

void FUN_100b1abf8(ulong *param_1,void *param_2,ulong param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  
  if (param_3 < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)param_3;
    puVar2 = param_1;
  }
  else {
    if (0x7ffffffffffffff7 < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_100b1ac7c(param_1);
    }
    puVar1 = (ulong *)0x19;
    if ((param_3 | 7) != 0x17) {
      puVar1 = (ulong *)((param_3 | 7) + 1);
    }
    puVar2 = puVar1;
    __Znwm();
    param_1[1] = param_3;
    param_1[2] = (ulong)puVar1 | 0x8000000000000000;
    *param_1 = (ulong)puVar2;
  }
  _memmove(puVar2,param_2,param_3 + 1);
  return;
}



/* Address: 0x100b1ac7c | FUN_100b1ac7c */

void FUN_100b1ac7c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_100b1ac90("basic_string");
}



/* Address: 0x100b1ac90 | FUN_100b1ac90 */

void FUN_100b1ac90(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x10;
  ___cxa_allocate_exception(0x10);
  FUN_100b1ace0();
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(uVar1,PTR___ZTISt12length_error_100eaf800,PTR___ZNSt12length_errorD1Ev_100ea6760);
}



/* Address: 0x100b1ace0 | FUN_100b1ace0 */

void FUN_100b1ace0(long *param_1)

{
  __ZNSt11logic_errorC2EPKc();
  *param_1 = (long)(PTR___ZTVSt12length_error_100ea6848 + 0x10);
  return;
}



/* Address: 0x100b1ad04 | FUN_100b1ad04 */

void FUN_100b1ad04(void)

{
  ___cxa_allocate_exception(8);
  __ZNSt20bad_array_new_lengthC1Ev();
                    /* WARNING: Subroutine does not return */
  ___cxa_throw();
}



/* Address: 0x100b1ad2c | FUN_100b1ad2c */

_func_11423 * FUN_100b1ad2c(_Unwind_Exception *param_1,undefined4 *param_2)

{
  ulong uVar1;
  uintptr_t *puVar2;
  uint64_t uVar3;
  _func_11423 *p_Var4;
  uintptr_t *puVar5;
  long lVar6;
  uintptr_t uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  uintptr_t *local_58;
  uintptr_t *puStack_50;
  _func_11423 *local_48;
  uintptr_t *puStack_40;
  uintptr_t *local_38;
  
  lVar8 = (long)((long)param_1->exception_cleanup - param_1->exception_class) >> 4;
  uVar1 = lVar8 * -0x5555555555555555 + 1;
  if (uVar1 < 0x555555555555556) {
    puVar2 = &param_1->private_1;
    lVar6 = (long)(*puVar2 - param_1->exception_class) >> 4;
    uVar9 = lVar6 * 0x5555555555555556;
    if (uVar9 < uVar1 || uVar9 - uVar1 == 0) {
      uVar9 = uVar1;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar6 * -0x5555555555555555)) {
      uVar9 = 0x555555555555555;
    }
    local_38 = puVar2;
    if (uVar9 == 0) {
      puVar5 = (uintptr_t *)0x0;
    }
    else {
      puVar5 = puVar2;
      FUN_100b1ae94();
    }
    puStack_50 = puVar5 + lVar8 * 2;
    puStack_40 = puVar5 + uVar9 * 6;
    *(undefined4 *)puStack_50 = *param_2;
    puStack_50[1] = *(uintptr_t *)(param_2 + 2);
    uVar11 = *(undefined8 *)(param_2 + 6);
    uVar10 = *(undefined8 *)(param_2 + 4);
    puStack_50[4] = *(undefined8 *)(param_2 + 8);
    puStack_50[3] = uVar11;
    puStack_50[2] = uVar10;
    *(undefined8 *)(param_2 + 6) = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 4) = 0;
    *(undefined4 *)(puStack_50 + 5) = param_2[10];
    local_48 = (_func_11423 *)(puStack_50 + 6);
    uVar3 = (long)puStack_50 + (param_1->exception_class - (long)param_1->exception_cleanup);
    local_58 = puVar5;
    FUN_100b1aed8(puVar2,param_1->exception_class,param_1->exception_cleanup,uVar3);
    p_Var4 = local_48;
    local_58 = (uintptr_t *)param_1->exception_class;
    param_1->exception_class = uVar3;
    uVar7 = param_1->private_1;
    param_1->private_1 = (uintptr_t)puStack_40;
    param_1->exception_cleanup = local_48;
    puStack_50 = local_58;
    local_48 = (_func_11423 *)local_58;
    puStack_40 = (uintptr_t *)uVar7;
    FUN_100b1b018(&local_58);
    return p_Var4;
  }
  FUN_100b1ae80();
  FUN_100b1b018(&local_58);
  __Unwind_Resume(param_1);
                    /* WARNING: Subroutine does not return */
  FUN_100b1ac90("vector");
}



/* Address: 0x100b1ae80 | FUN_100b1ae80 */

void FUN_100b1ae80(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_100b1ac90("vector");
}



/* Address: 0x100b1ae94 | FUN_100b1ae94 */

void FUN_100b1ae94(undefined8 param_1,ulong param_2)

{
  if (param_2 < 0x555555555555556) {
    __Znwm(param_2 * 0x30);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_100b1ad04();
}



/* Address: 0x100b1aed8 | FUN_100b1aed8 */

void FUN_100b1aed8(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_50;
  undefined4 **ppuStack_48;
  undefined4 **local_40;
  undefined1 local_38;
  undefined4 *local_30;
  undefined4 *local_28;
  
  ppuStack_48 = &local_30;
  local_40 = &local_28;
  local_28 = param_4;
  puVar1 = param_2;
  local_50 = param_1;
  local_30 = param_4;
  if (param_2 == param_3) {
    local_38 = 1;
  }
  else {
    do {
      *local_28 = *puVar1;
      *(undefined8 *)(local_28 + 2) = *(undefined8 *)(puVar1 + 2);
      uVar3 = *(undefined8 *)(puVar1 + 6);
      uVar2 = *(undefined8 *)(puVar1 + 4);
      *(undefined8 *)(local_28 + 8) = *(undefined8 *)(puVar1 + 8);
      *(undefined8 *)(local_28 + 6) = uVar3;
      *(undefined8 *)(local_28 + 4) = uVar2;
      *(undefined8 *)(puVar1 + 6) = 0;
      *(undefined8 *)(puVar1 + 8) = 0;
      *(undefined8 *)(puVar1 + 4) = 0;
      local_28[10] = puVar1[10];
      puVar1 = puVar1 + 0xc;
      local_28 = local_28 + 0xc;
    } while (puVar1 != param_3);
    local_38 = 1;
    for (; param_2 != param_3; param_2 = param_2 + 0xc) {
      if (*(char *)((long)param_2 + 0x27) < '\0') {
        __ZdlPv(*(undefined8 *)(param_2 + 4));
      }
    }
  }
  FUN_100b1afa0(&local_50);
  return;
}



/* Address: 0x100b1afa0 | FUN_100b1afa0 */

long FUN_100b1afa0(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_100b1afd4(param_1);
  }
  return param_1;
}



/* Address: 0x100b1afd0 | thunk_FUN_100b15fd4 */

void thunk_FUN_100b15fd4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_100b15fd4();
}



/* Address: 0x100b1afd4 | FUN_100b1afd4 */

/* WARNING: Removing unreachable block (ram,0x000100b1affc) */

void FUN_100b1afd4(long param_1)

{
  long lVar1;
  
  for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != **(long **)(param_1 + 8); lVar1 = lVar1 + -0x30
      ) {
  }
  return;
}



/* Address: 0x100b1b018 | FUN_100b1b018 */

long * FUN_100b1b018(long *param_1)

{
  FUN_100b1b04c(param_1,param_1[1]);
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Address: 0x100b1b04c | FUN_100b1b04c */

/* WARNING: Removing unreachable block (ram,0x000100b1b07c) */

void FUN_100b1b04c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -0x30;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Address: 0x100b1b0a0 | FUN_100b1b0a0 */

undefined8 FUN_100b1b0a0(void)

{
  return 0;
}



/* Address: 0x100b1b0a8 | SentryANRTrackerV1::initWithTimeoutInterval: */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryANRTrackerV1::initWithTimeoutInterval_(ID param_1,SEL param_2,double param_3)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  
  IVar1 = objc_stub::sharedInstance((ID)&objc::class_t::_TtC6Sentry25SentryDependencyContainer);
  IVar1 = objc_stub::crashWrapper(IVar1);
  IVar2 = objc_stub::sharedInstance((ID)&objc::class_t::_TtC6Sentry25SentryDependencyContainer);
  IVar2 = objc_stub::dispatchQueueWrapper(IVar2);
  IVar3 = objc_stub::sharedInstance((ID)&objc::class_t::_TtC6Sentry25SentryDependencyContainer);
  IVar3 = objc_stub::FUN_100c105a0(IVar3);
  IVar1 = objc_stub::FUN_100c04d60(param_1,param_3,IVar1,IVar2,IVar3);
  return IVar1;
}



/* Address: 0x100b1b1a8 | SentryANRTrackerV1::initWithTimeoutInterval:crashWrapper:dispatchQueueWrapper:threadWrapper: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x30 bytes */

ID SentryANRTrackerV1::initWithTimeoutInterval_crashWrapper_dispatchQueueWrapper_threadWrapper_
             (ID param_1,SEL param_2,double param_3,ID param_4,ID param_5,ID param_6)

{
  ID self;
  ID IVar1;
  undefined *self_00;
  objc_super local_60;
  
  local_60.super_class = &objc::class_t::SentryANRTrackerV1;
  local_60.receiver = param_1;
  self = _objc_msgSendSuper2(&local_60,"init");
  if (self != 0) {
    objc_stub::FUN_100c0e2a0(self,param_3);
    objc_stub::FUN_100c0b1e0(self,param_4);
    objc_stub::FUN_100c0b600(self,param_5);
    objc_stub::FUN_100c0e220(self,param_6);
    IVar1 = objc_stub::FUN_100c11420((ID)&_OBJC_CLASS___NSHashTable);
    objc_stub::FUN_100c0c760(self,IVar1);
    self_00 = &_OBJC_CLASS___NSObject;
    _objc_alloc();
    IVar1 = objc_stub::init((ID)self_00);
    *(ID *)(self + 8) = IVar1;
    *(undefined8 *)(self + 0x10) = 1;
  }
  return self;
}



/* Address: 0x100b1b2d8 | SentryANRTrackerV1::detectANRs */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryANRTrackerV1::detectANRs(ID param_1,SEL param_2)

{
  int *piVar1;
  int iVar2;
  ID IVar3;
  undefined8 uVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  long lVar8;
  double extraout_d0;
  double extraout_d0_00;
  double extraout_d0_01;
  undefined *local_100;
  undefined8 local_f8;
  code *local_f0;
  undefined *puStack_e8;
  ID local_e0;
  undefined8 *local_d8;
  undefined8 *puStack_d0;
  undefined8 local_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  undefined4 local_90;
  
  IVar3 = objc_stub::FUN_100bfd0e0((ID)&_OBJC_CLASS___NSUUID);
  uVar4 = *(undefined8 *)(param_1 + 8);
  _objc_sync_enter();
  IVar5 = objc_stub::FUN_100c105a0(param_1);
  objc_stub::FUN_100c10580(IVar5,IVar3);
  if (*(long *)(param_1 + 0x10) == 3) {
    IVar5 = objc_stub::currentThread((ID)&_OBJC_CLASS___NSThread);
    objc_stub::setName_(IVar5,&cf_io_sentry_app_hang_tracker);
    *(undefined8 *)(param_1 + 0x10) = 2;
    _objc_sync_exit(uVar4);
    local_a0 = &local_a8;
    local_a8 = 0;
    local_98 = 0x2020000000;
    local_90 = 0;
    local_c0 = &local_c8;
    local_c8 = 0;
    local_b8 = 0x2020000000;
    local_b0 = 0;
    objc_stub::FUN_100c10680(param_1);
    IVar5 = objc_stub::sharedInstance((ID)&objc::class_t::_TtC6Sentry25SentryDependencyContainer);
    IVar5 = objc_stub::FUN_100c00ac0(IVar5);
    uVar4 = *(undefined8 *)(param_1 + 8);
    _objc_sync_enter();
    lVar8 = *(long *)(param_1 + 0x10);
    _objc_sync_exit(uVar4);
    if (lVar8 == 2) {
      do {
        IVar6 = objc_stub::date(IVar5);
        objc_stub::FUN_100c10680(param_1);
        IVar6 = objc_stub::FUN_100c00a80(IVar6);
        piVar1 = (int *)(local_a0 + 3);
        iVar2 = *piVar1;
        *piVar1 = iVar2 + 1;
        IVar7 = objc_stub::dispatchQueueWrapper
                          (param_1,CONCAT44((int)((ulong)piVar1 >> 0x20),iVar2));
        local_100 = PTR___NSConcreteStackBlock_100ea82a0;
        local_f8 = 0xc2000000;
        local_f0 = FUN_100b1b758;
        puStack_e8 = &DAT_100f34460;
        local_e0 = param_1;
        local_d8 = &local_a8;
        puStack_d0 = &local_c8;
        objc_stub::FUN_100c01380(IVar7,&local_100);
        IVar7 = objc_stub::FUN_100c105a0(param_1);
        objc_stub::FUN_100c0ee80(IVar7,extraout_d0 / 5.0);
        IVar7 = objc_stub::date(IVar5);
        objc_stub::FUN_100c10600(IVar7,IVar6);
        IVar6 = objc_stub::FUN_100c10680(param_1);
        iVar2 = (int)IVar6;
        if (extraout_d0_01 <= extraout_d0_00) {
          FUN_100b3a1c0();
          if (iVar2 != 0) {
            FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryANRTrackerV1.m"
                          ,0x7a,&cf_IgnoringANRbecausethedeltaistoobig__f_);
          }
        }
        else if ((4 < *(int *)(local_a0 + 3)) && ((*(byte *)(local_c0 + 3) & 1) == 0)) {
          *(undefined1 *)(local_c0 + 3) = 1;
          IVar6 = objc_stub::crashWrapper(param_1);
          IVar6 = objc_stub::FUN_100c05620(IVar6);
          iVar2 = 0;
          if ((IVar6 & 1) == 0) {
            FUN_100b3a1c0();
            if (iVar2 != 0) {
              FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryANRTrackerV1.m"
                            ,0x86,&cf_IgnoringANRbecausetheappisinthebackground);
            }
          }
          else {
            FUN_100b3a1e0();
            if (iVar2 != 0) {
              FUN_100b3a280("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryANRTrackerV1.m"
                            ,0x8a,&cf_ANRdetected_);
            }
            objc_stub::FUN_100bfcde0(param_1);
          }
        }
        uVar4 = *(undefined8 *)(param_1 + 8);
        _objc_sync_enter();
        lVar8 = *(long *)(param_1 + 0x10);
        _objc_sync_exit(uVar4);
      } while (lVar8 == 2);
    }
    uVar4 = *(undefined8 *)(param_1 + 8);
    _objc_sync_enter();
    *(undefined8 *)(param_1 + 0x10) = 1;
    IVar5 = objc_stub::FUN_100c105a0(param_1);
    objc_stub::FUN_100c104a0(IVar5,IVar3);
    _objc_sync_exit(uVar4);
    __Block_object_dispose(&local_c8,8);
    __Block_object_dispose(&local_a8,8);
  }
  else {
    IVar5 = objc_stub::FUN_100c105a0(param_1);
    objc_stub::FUN_100c104a0(IVar5,IVar3);
    _objc_sync_exit(uVar4);
  }
  return;
}


