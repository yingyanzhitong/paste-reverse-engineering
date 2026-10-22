/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10018a628 | PHPLCrashReporterConfig::initWithSignalHandlerType:symbolicationStrategy: */

/* Function Stack Size: 0x20 bytes */

ID PHPLCrashReporterConfig::initWithSignalHandlerType_symbolicationStrategy_
             (ID param_1,SEL param_2,unsigned_long_long param_3,unsigned_long_long param_4)

{
  ID IVar1;
  
  IVar1 = initWithSignalHandlerType_symbolicationStrategy_shouldRegisterUncaughtExceptionHandler_
                    (param_1,param_3,param_4,1);
  return IVar1;
}



/* Address: 0x10018a630 | PHPLCrashReporterConfig::initWithSignalHandlerType:symbolicationStrategy:basePath: */

/* Function Stack Size: 0x28 bytes */

ID PHPLCrashReporterConfig::initWithSignalHandlerType_symbolicationStrategy_basePath_
             (ID param_1,SEL param_2,unsigned_long_long param_3,unsigned_long_long param_4,
             ID param_5)

{
  ID IVar1;
  
  IVar1 = initWithSignalHandlerType_symbolicationStrategy_shouldRegisterUncaughtExceptionHandler_basePath_
                    (param_1,param_3,param_4,1,param_5);
  return IVar1;
}



/* Address: 0x10018a63c | PHPLCrashReporterConfig::initWithSignalHandlerType:symbolicationStrategy:shouldRegisterUncaughtExceptionHandler: */

/* Function Stack Size: 0x24 bytes */

ID PHPLCrashReporterConfig::
   initWithSignalHandlerType_symbolicationStrategy_shouldRegisterUncaughtExceptionHandler_
             (ID param_1,SEL param_2,unsigned_long_long param_3,unsigned_long_long param_4,
             bool param_5)

{
  ID IVar1;
  
  IVar1 = initWithSignalHandlerType_symbolicationStrategy_shouldRegisterUncaughtExceptionHandler_basePath_maxReportBytes_
                    (param_1,param_3,param_4,param_5,0,0x100000);
  return IVar1;
}



/* Address: 0x10018a648 | PHPLCrashReporterConfig::initWithSignalHandlerType:symbolicationStrategy:shouldRegisterUncaughtExceptionHandler:basePath: */

/* Function Stack Size: 0x2c bytes */

ID PHPLCrashReporterConfig::
   initWithSignalHandlerType_symbolicationStrategy_shouldRegisterUncaughtExceptionHandler_basePath_
             (ID param_1,SEL param_2,unsigned_long_long param_3,unsigned_long_long param_4,
             bool param_5,ID param_6)

{
  ID IVar1;
  
  IVar1 = initWithSignalHandlerType_symbolicationStrategy_shouldRegisterUncaughtExceptionHandler_basePath_maxReportBytes_
                    (param_1,param_3,param_4,param_5,param_6,0x100000);
  return IVar1;
}



/* Address: 0x10018a650 | PHPLCrashReporterConfig::initWithSignalHandlerType:symbolicationStrategy:shouldRegisterUncaughtExceptionHandler:basePath:maxReportBytes: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x34 bytes */

ID PHPLCrashReporterConfig::
   initWithSignalHandlerType_symbolicationStrategy_shouldRegisterUncaughtExceptionHandler_basePath_maxReportBytes_
             (ID param_1,SEL param_2,unsigned_long_long param_3,unsigned_long_long param_4,
             bool param_5,ID param_6,unsigned_long_long param_7)

{
  ID IVar1;
  ID local_50;
  class_t *pcStack_48;
  
  pcStack_48 = &objc::class_t::PHPLCrashReporterConfig;
  local_50 = param_1;
  IVar1 = ::NSObject::init((ID)&local_50,"init");
  if (IVar1 != 0) {
    *(unsigned_long_long *)(IVar1 + 8) = param_3;
    *(unsigned_long_long *)(IVar1 + 0x10) = param_4;
    *(char *)(IVar1 + 0x18) = (char)param_5;
    *(ID *)(IVar1 + 0x28) = param_6;
    *(unsigned_long_long *)(IVar1 + 0x20) = param_7;
  }
  return IVar1;
}



/* Address: 0x10018a700 | PHPLCrashReporterConfig::signalHandlerType */

/* Function Stack Size: 0x10 bytes */

unsigned_long_long PHPLCrashReporterConfig::signalHandlerType(ID param_1,SEL param_2)

{
  return *(unsigned_long_long *)(param_1 + 8);
}



/* Address: 0x10018a708 | PHPLCrashReporterConfig::symbolicationStrategy */

/* Function Stack Size: 0x10 bytes */

unsigned_long_long PHPLCrashReporterConfig::symbolicationStrategy(ID param_1,SEL param_2)

{
  return *(unsigned_long_long *)(param_1 + 0x10);
}



/* Address: 0x10018a710 | PHPLCrashReporterConfig::shouldRegisterUncaughtExceptionHandler */

/* Function Stack Size: 0x10 bytes */

bool PHPLCrashReporterConfig::shouldRegisterUncaughtExceptionHandler(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + 0x18);
}



/* Address: 0x10018a718 | PHPLCrashReporterConfig::maxReportBytes */

/* Function Stack Size: 0x10 bytes */

unsigned_long_long PHPLCrashReporterConfig::maxReportBytes(ID param_1,SEL param_2)

{
  return *(unsigned_long_long *)(param_1 + 0x20);
}



/* Address: 0x10018a720 | PHPLCrashReporterConfig::basePath */

/* Function Stack Size: 0x10 bytes */

ID PHPLCrashReporterConfig::basePath(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x28);
}



/* Address: 0x10018a728 | PHPLCrashReporterConfig::.cxx_destruct */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void PHPLCrashReporterConfig::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



/* Address: 0x10018a734 | FUN_10018a734 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autorelease replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10018a734(ID *param_1,ulong param_2,undefined8 param_3,long param_4)

{
  ID IVar1;
  
  if (param_1 != (ID *)0x0) {
    IVar1 = NSMutableDictionary::dictionaryWithObjectsAndKeys_
                      ((ID)&_OBJC_CLASS___NSMutableDictionary,param_3);
    if (param_4 != 0) {
      NSMutableDictionary::setObject_forKey_
                (IVar1,param_4,*(undefined8 *)PTR__NSUnderlyingErrorKey_100ea7c80);
    }
    IVar1 = NSError::errorWithDomain_code_userInfo_
                      ((ID)&_OBJC_CLASS___NSError,PTR_cf_PLCrashReporterErrorDomain_100fb3070,
                       param_2 & 0xffffffff,IVar1);
    *param_1 = IVar1;
  }
  return 0;
}



/* Address: 0x10018a7fc | FUN_10018a7fc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10018a7fc(undefined8 param_1,int param_2,undefined8 param_3)

{
  ID IVar1;
  
  IVar1 = NSError::errorWithDomain_code_userInfo_
                    ((ID)&_OBJC_CLASS___NSError,*(undefined8 *)PTR__NSMachErrorDomain_100ea7c20,
                     (long)param_2,0);
  FUN_10018a734(param_1,1,param_3,IVar1);
  return 0;
}



/* Address: 0x10018a88c | FUN_10018a88c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10018a88c(undefined8 param_1,int param_2,undefined8 param_3)

{
  ID IVar1;
  
  IVar1 = NSError::errorWithDomain_code_userInfo_
                    ((ID)&_OBJC_CLASS___NSError,*(undefined8 *)PTR__NSPOSIXErrorDomain_100ea7c28,
                     (long)param_2,0);
  FUN_10018a734(param_1,1,param_3,IVar1);
  return 0;
}



/* Address: 0x10018a91c | FUN_10018a91c */

void FUN_10018a91c(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10018a954();
  if ((uVar1 & 1) != 0) {
    return;
  }
  _raise((int)param_1);
  return;
}



/* Address: 0x10018a954 | FUN_10018a954 */

undefined8 FUN_10018a954(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  code **ppcVar3;
  code *pcVar4;
  undefined8 *puVar5;
  code *local_50;
  undefined8 *puStack_48;
  
  ppcVar3 = &local_50;
  FUN_10018abc8();
  iVar1 = DAT_101060e00;
  LOAcquire();
  DAT_101060e00 = DAT_101060e00 + 1;
  LORelease();
  FUN_10018abc8(iVar1);
  if (param_4 == 0) {
    puVar5 = &DAT_101060df0;
  }
  else {
    puVar5 = (undefined8 *)(param_4 + 0x18);
  }
  puVar5 = (undefined8 *)*puVar5;
  FUN_10018abc8();
  if (puVar5 == (undefined8 *)0x0) {
    param_1 = 0;
  }
  else {
    if (puVar5[3] == 0) {
      pcVar4 = (code *)*puVar5;
      uVar2 = puVar5[1];
      ppcVar3 = (code **)0x0;
    }
    else {
      local_50 = FUN_10018a954;
      pcVar4 = (code *)*puVar5;
      uVar2 = puVar5[1];
      puStack_48 = puVar5;
    }
    (*pcVar4)(param_1,param_2,param_3,uVar2,ppcVar3);
    FUN_10018abc8();
  }
  LOAcquire();
  DAT_101060e00 = DAT_101060e00 + -1;
  LORelease();
  return param_1;
}



/* Address: 0x10018aa30 | FUN_10018aa30 */

void FUN_10018aa30(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010018aa48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*param_1)(param_2,param_3,param_4,param_1[1]);
    return;
  }
  return;
}



/* Address: 0x10018aa50 | PHPLCrashSignalHandler::initialize */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void PHPLCrashSignalHandler::initialize(ID param_1,SEL param_2)

{
  class_t *pcVar1;
  class_t *pcVar2;
  
  pcVar1 = (class_t *)param_1;
  _objc_opt_class();
  pcVar2 = &objc::class_t::PHPLCrashSignalHandler;
  _objc_opt_class();
  if (pcVar1 != pcVar2) {
    return;
  }
  _objc_alloc_init();
  DAT_101060dd8 = param_1;
  return;
}



/* Address: 0x10018aaac | PHPLCrashSignalHandler::sharedHandler */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID PHPLCrashSignalHandler::sharedHandler(ID param_1,SEL param_2)

{
  return DAT_101060dd8;
}



/* Address: 0x10018aad8 | PHPLCrashSignalHandler::resetHandlers */

/* Function Stack Size: 0x10 bytes */

void PHPLCrashSignalHandler::resetHandlers(ID param_1,SEL param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  FUN_10018abc8();
  lVar3 = 0;
  LOAcquire();
  DAT_101060e28 = DAT_101060e28 + 1;
  LORelease();
  while( true ) {
    FUN_10018abc8();
    lVar1 = DAT_101060e18;
    if (lVar3 != 0) {
      lVar1 = *(long *)(lVar3 + 0x20);
    }
    lVar3 = lVar1;
    if (lVar3 == 0) break;
    FUN_10018abc8();
    FUN_10018abf0(&DAT_101060e10,lVar3);
  }
  lVar3 = 0;
  FUN_10018abc8();
  LOAcquire();
  uVar2 = CONCAT44(1,DAT_101060e28);
  LORelease();
  DAT_101060e28 = DAT_101060e28 + -1;
  FUN_10018abc8(uVar2);
  LOAcquire();
  DAT_101060e00 = DAT_101060e00 + 1;
  LORelease();
  while( true ) {
    FUN_10018abc8();
    lVar1 = DAT_101060df0;
    if (lVar3 != 0) {
      lVar1 = *(long *)(lVar3 + 0x18);
    }
    lVar3 = lVar1;
    if (lVar3 == 0) break;
    FUN_10018abc8();
    FUN_10018ace8(&DAT_101060de8,lVar3);
  }
  FUN_10018abc8();
  LOAcquire();
  DAT_101060e00 = DAT_101060e00 + -1;
  LORelease();
  return;
}



/* Address: 0x10018abc8 | FUN_10018abc8 */

void FUN_10018abc8(void)

{
  if ((DAT_101060de0 & 1) != 0) {
    return;
  }
  FUN_1001900d4();
  return;
}



/* Address: 0x10018abf0 | FUN_10018abf0 */

void FUN_10018abf0(long param_1,void *param_2)

{
  void *pvVar1;
  void *pvVar2;
  long *plVar3;
  
  _os_unfair_lock_lock();
  plVar3 = (long *)(param_1 + 8);
  while( true ) {
    pvVar1 = (void *)*plVar3;
    if (pvVar1 == (void *)0x0 || param_2 == pvVar1) break;
    plVar3 = (long *)((long)pvVar1 + 0x20);
  }
  if (pvVar1 != (void *)0x0) {
    plVar3 = (long *)(param_1 + 8);
    if (pvVar1 == (void *)*plVar3) {
      pvVar2 = (void *)*plVar3;
      if (pvVar2 == pvVar1) {
        *plVar3 = *(long *)((long)pvVar1 + 0x20);
        pvVar2 = pvVar1;
      }
    }
    else {
      plVar3 = (long *)(*(long *)((long)pvVar1 + 0x18) + 0x20);
      pvVar2 = (void *)*plVar3;
      if (pvVar2 == pvVar1) {
        *plVar3 = *(long *)((long)pvVar1 + 0x20);
        pvVar2 = pvVar1;
      }
    }
    if (*(long *)((long)pvVar2 + 0x20) == 0) {
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)((long)pvVar2 + 0x18);
    }
    else {
      *(undefined8 *)(*(long *)((long)pvVar2 + 0x20) + 0x18) = *(undefined8 *)((long)pvVar2 + 0x18);
    }
    if (*(int *)(param_1 + 0x18) < 1) {
      _free(pvVar2);
    }
    else {
      *(undefined8 *)((long)pvVar2 + 0x18) = 0;
      *(undefined8 *)((long)pvVar2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
      if (*(long *)(param_1 + 0x20) != 0) {
        *(void **)(*(long *)(param_1 + 0x20) + 0x18) = pvVar2;
      }
      *(void **)(param_1 + 0x20) = pvVar2;
    }
  }
  _os_unfair_lock_unlock(param_1);
  return;
}



/* Address: 0x10018ace8 | FUN_10018ace8 */

void FUN_10018ace8(long param_1,void *param_2)

{
  void *pvVar1;
  void *pvVar2;
  long *plVar3;
  long lVar4;
  
  _os_unfair_lock_lock();
  plVar3 = (long *)(param_1 + 8);
  while( true ) {
    pvVar1 = (void *)*plVar3;
    if (pvVar1 == (void *)0x0 || param_2 == pvVar1) break;
    plVar3 = (long *)((long)pvVar1 + 0x18);
  }
  if (pvVar1 != (void *)0x0) {
    plVar3 = (long *)(param_1 + 8);
    if (pvVar1 == (void *)*plVar3) {
      pvVar2 = (void *)*plVar3;
      if (pvVar2 == pvVar1) {
        *plVar3 = *(long *)((long)pvVar1 + 0x18);
        pvVar2 = pvVar1;
      }
    }
    else {
      plVar3 = (long *)(*(long *)((long)pvVar1 + 0x10) + 0x18);
      pvVar2 = (void *)*plVar3;
      if (pvVar2 == pvVar1) {
        *plVar3 = *(long *)((long)pvVar1 + 0x18);
        pvVar2 = pvVar1;
      }
    }
    lVar4 = param_1;
    if (*(long *)((long)pvVar2 + 0x18) != 0) {
      lVar4 = *(long *)((long)pvVar2 + 0x18);
    }
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)((long)pvVar2 + 0x10);
    if (*(int *)(param_1 + 0x18) < 1) {
      _free(pvVar2);
    }
    else {
      *(undefined8 *)((long)pvVar2 + 0x10) = 0;
      *(undefined8 *)((long)pvVar2 + 0x18) = *(undefined8 *)(param_1 + 0x20);
      if (*(long *)(param_1 + 0x20) != 0) {
        *(void **)(*(long *)(param_1 + 0x20) + 0x10) = pvVar2;
      }
      *(void **)(param_1 + 0x20) = pvVar2;
    }
  }
  _os_unfair_lock_unlock(param_1);
  return;
}



/* Address: 0x10018addc | PHPLCrashSignalHandler::init */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

ID PHPLCrashSignalHandler::init(ID param_1,SEL param_2)

{
  ID IVar1;
  void *pvVar2;
  ID local_30;
  class_t *pcStack_28;
  
  pcStack_28 = &objc::class_t::PHPLCrashSignalHandler;
  local_30 = param_1;
  IVar1 = ::NSObject::init((ID)&local_30,"init");
  if (IVar1 != 0) {
    *(undefined8 *)(IVar1 + 0x10) = 0x10000;
    pvVar2 = _malloc(0x10000);
    *(void **)(IVar1 + 8) = pvVar2;
    *(undefined4 *)(IVar1 + 0x18) = 0;
    if (pvVar2 != (void *)0x0) {
      return IVar1;
    }
  }
  return 0;
}



/* Address: 0x10018ae5c | PHPLCrashSignalHandler::registerHandlerWithSignal:error: */

/* Function Stack Size: 0x1c bytes */

bool PHPLCrashSignalHandler::registerHandlerWithSignal_error_
               (ID param_1,SEL param_2,int param_3,ID *param_4)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  int *piVar4;
  cfstringStruct *pcVar5;
  ulong uVar6;
  uint *puVar7;
  int local_88;
  undefined8 local_84;
  undefined8 uStack_7c;
  int local_74;
  sigaction local_70;
  sigaction local_60;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  sigset_t sStack_40;
  int iStack_3c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ea82f0;
  _pthread_mutex_lock((pthread_mutex_t *)&DAT_100fb3140);
  iVar2 = _sigaltstack((stack_t *)(param_1 + 8),(stack_t *)0x0);
  if (iVar2 < 0) {
    piVar4 = ___error();
    iVar2 = *piVar4;
    pcVar5 = &cf_Couldnotinitializealternativesignalstack;
LAB_10018af8c:
    FUN_10018a88c(param_4,iVar2,pcVar5);
    bVar3 = 0;
  }
  else {
    FUN_10018abc8();
    FUN_10018b100(&DAT_101060de8,FUN_10018b00c,0);
    FUN_10018abc8();
    puVar7 = (uint *)0x0;
    LOAcquire();
    uVar6 = CONCAT44(1,DAT_101060e28);
    LORelease();
    DAT_101060e28 = DAT_101060e28 + 1;
    do {
      FUN_10018abc8(uVar6);
      puVar1 = DAT_101060e18;
      if (puVar7 != (uint *)0x0) {
        puVar1 = *(uint **)(puVar7 + 8);
      }
      puVar7 = puVar1;
      if (puVar7 == (uint *)0x0) {
        FUN_10018abc8();
        LOAcquire();
        DAT_101060e28 = DAT_101060e28 + -1;
        LORelease();
        local_60.sa_mask = 0;
        local_60.sa_flags = 0x41;
        local_60.__sigaction_u.__sa_handler = FUN_10018a91c;
        iVar2 = _sigaction(param_3,&local_60,&local_70);
        if (iVar2 == 0) {
          sStack_40 = local_70.sa_mask;
          iStack_3c = local_70.sa_flags;
          local_48 = local_70.__sigaction_u._0_4_;
          uStack_44 = local_70.__sigaction_u._4_4_;
          FUN_10018abc8();
          uStack_7c = CONCAT44(sStack_40,uStack_44);
          local_84 = CONCAT44(local_48,uStack_4c);
          local_74 = iStack_3c;
          local_88 = param_3;
          FUN_10018b1ac(&DAT_101060e10,&local_88);
          goto LAB_10018afcc;
        }
        piVar4 = ___error();
        iVar2 = *piVar4;
        pcVar5 = &cf_Failedtoregistersignalhandler;
        goto LAB_10018af8c;
      }
      uVar6 = (ulong)*puVar7;
    } while (*puVar7 != param_3);
    FUN_10018abc8();
    LOAcquire();
    DAT_101060e28 = DAT_101060e28 + -1;
    LORelease();
LAB_10018afcc:
    _pthread_mutex_unlock((pthread_mutex_t *)&DAT_100fb3140);
    bVar3 = 1;
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return bVar3;
}



/* Address: 0x10018b00c | FUN_10018b00c */

undefined8
FUN_10018b00c(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  int iVar1;
  int *piVar2;
  ulong uVar3;
  code *pcVar4;
  undefined8 uVar5;
  int *piVar6;
  
  if ((param_5 != (undefined8 *)0x0) &&
     (uVar3 = param_1, (*(code *)*param_5)(param_1,param_2,param_3,param_5[1]), (uVar3 & 1) != 0)) {
    return 1;
  }
  FUN_10018abc8();
  piVar6 = (int *)0x0;
  LOAcquire();
  LORelease();
  iVar1 = DAT_101060e28;
  DAT_101060e28 = DAT_101060e28 + 1;
  do {
    FUN_10018abc8(iVar1);
    piVar2 = DAT_101060e18;
    if (piVar6 != (int *)0x0) {
      piVar2 = *(int **)(piVar6 + 8);
    }
    piVar6 = piVar2;
    if (piVar6 == (int *)0x0) goto LAB_10018b0b4;
    iVar1 = *piVar6;
  } while (iVar1 != (int)param_1);
  pcVar4 = *(code **)(piVar6 + 2);
  if ((*(byte *)(piVar6 + 5) >> 6 & 1) == 0) {
    if (pcVar4 != (code *)&DAT_00000001) {
      if (pcVar4 == (code *)0x0) {
LAB_10018b0b4:
        uVar5 = 0;
        goto LAB_10018b0dc;
      }
      (*pcVar4)(param_1);
    }
  }
  else {
    (*pcVar4)(param_1,param_2,param_3);
  }
  uVar5 = 1;
LAB_10018b0dc:
  FUN_10018abc8();
  LOAcquire();
  LORelease();
  DAT_101060e28 = DAT_101060e28 + -1;
  return uVar5;
}



/* Address: 0x10018b100 | FUN_10018b100 */

void FUN_10018b100(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  
  _os_unfair_lock_lock();
  puVar2 = *(undefined8 **)(param_1 + 0x20);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = _malloc(0x20);
    *puVar2 = param_2;
    puVar2[1] = param_3;
    puVar2[2] = 0;
    puVar2[3] = 0;
  }
  else {
    *puVar2 = param_2;
    puVar2[1] = param_3;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  }
  DataMemoryBarrier(2,3);
  if (*(long *)(param_1 + 0x10) == 0) {
    *(undefined8 **)(param_1 + 0x10) = puVar2;
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 == 0) {
      *(long *)(param_1 + 8) = (long)puVar2;
    }
  }
  else {
    plVar1 = (long *)(*(long *)(param_1 + 0x10) + 0x18);
    if (*plVar1 == 0) {
      *plVar1 = (long)puVar2;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    puVar2[2] = lVar3;
    *(undefined8 **)(param_1 + 0x10) = puVar2;
  }
  _os_unfair_lock_unlock(lVar3,param_1);
  return;
}



/* Address: 0x10018b1ac | FUN_10018b1ac */

void FUN_10018b1ac(long param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  _os_unfair_lock_lock();
  puVar2 = *(undefined8 **)(param_1 + 0x20);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = _malloc(0x28);
    uVar3 = *param_2;
    puVar2[1] = param_2[1];
    *puVar2 = uVar3;
    puVar2[2] = param_2[2];
    puVar2[3] = 0;
    puVar2[4] = 0;
  }
  else {
    uVar5 = *param_2;
    uVar3 = param_2[2];
    puVar2[1] = param_2[1];
    *puVar2 = uVar5;
    puVar2[2] = uVar3;
    puVar2[3] = 0;
    puVar2[4] = 0;
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  }
  DataMemoryBarrier(2,3);
  if (*(long *)(param_1 + 0x10) == 0) {
    *(undefined8 **)(param_1 + 0x10) = puVar2;
    lVar4 = *(long *)(param_1 + 8);
    if (lVar4 == 0) {
      *(long *)(param_1 + 8) = (long)puVar2;
    }
  }
  else {
    plVar1 = (long *)(*(long *)(param_1 + 0x10) + 0x20);
    if (*plVar1 == 0) {
      *plVar1 = (long)puVar2;
    }
    lVar4 = *(long *)(param_1 + 0x10);
    puVar2[3] = lVar4;
    *(undefined8 **)(param_1 + 0x10) = puVar2;
  }
  _os_unfair_lock_unlock(lVar4,param_1);
  return;
}



/* Address: 0x10018b25c | PHPLCrashSignalHandler::registerHandlerForSignal:callback:context:error: */

/* Function Stack Size: 0x2c bytes */

bool PHPLCrashSignalHandler::registerHandlerForSignal_callback_context_error_
               (ID param_1,SEL param_2,int param_3,undefined4 *param_4,void *param_5,ID *param_6)

{
  bool bVar1;
  
  bVar1 = registerHandlerWithSignal_error_(param_1,param_3,param_6);
  if (bVar1 != 0) {
    FUN_10018abc8();
    FUN_10018b2b0(&DAT_101060de8,param_4,param_5);
  }
  return bVar1;
}



/* Address: 0x10018b2b0 | FUN_10018b2b0 */

void FUN_10018b2b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  
  _os_unfair_lock_lock();
  puVar1 = *(undefined8 **)(param_1 + 0x20);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = _malloc(0x20);
    *puVar1 = param_2;
    puVar1[1] = param_3;
    puVar1[2] = 0;
    puVar1[3] = 0;
  }
  else {
    *puVar1 = param_2;
    puVar1[1] = param_3;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  }
  DataMemoryBarrier(2,3);
  if (*(long *)(param_1 + 0x10) == 0) {
    *(undefined8 **)(param_1 + 0x10) = puVar1;
    plVar2 = *(long **)(param_1 + 8);
    if (plVar2 == (long *)0x0) {
      *(undefined8 **)(param_1 + 8) = puVar1;
    }
  }
  else {
    plVar2 = (long *)(param_1 + 8);
    puVar1[3] = *plVar2;
    puVar1[2] = 0;
    *(undefined8 **)(*plVar2 + 0x10) = puVar1;
    DataMemoryBarrier(2,3);
    if (*plVar2 == puVar1[3]) {
      *plVar2 = (long)puVar1;
    }
  }
  _os_unfair_lock_unlock(plVar2,param_1);
  return;
}



/* Address: 0x10018b36c | FUN_10018b36c */

void FUN_10018b36c(long param_1)

{
  FUN_10018b3f8(param_1 + 0x28);
  FUN_10018b394(param_1);
  return;
}



/* Address: 0x10018b394 | FUN_10018b394 */

long FUN_10018b394(long param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (*(long *)(param_1 + 8) != 0) {
    pvVar1 = *(void **)(param_1 + 8);
    while (pvVar1 != (void *)0x0) {
      pvVar2 = *(void **)((long)pvVar1 + 0x18);
      _free(pvVar1);
      pvVar1 = pvVar2;
    }
  }
  pvVar1 = *(void **)(param_1 + 0x20);
  while (pvVar1 != (void *)0x0) {
    pvVar2 = *(void **)((long)pvVar1 + 0x18);
    _free(pvVar1);
    pvVar1 = pvVar2;
  }
  return param_1;
}



/* Address: 0x10018b3f8 | FUN_10018b3f8 */

long FUN_10018b3f8(long param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (*(long *)(param_1 + 8) != 0) {
    pvVar1 = *(void **)(param_1 + 8);
    while (pvVar1 != (void *)0x0) {
      pvVar2 = *(void **)((long)pvVar1 + 0x20);
      _free(pvVar1);
      pvVar1 = pvVar2;
    }
  }
  pvVar1 = *(void **)(param_1 + 0x20);
  while (pvVar1 != (void *)0x0) {
    pvVar2 = *(void **)((long)pvVar1 + 0x20);
    _free(pvVar1);
    pvVar1 = pvVar2;
  }
  return param_1;
}



/* Address: 0x10018b45c | FUN_10018b45c */

void * FUN_10018b45c(char *param_1)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  size_t local_28;
  
  pvVar3 = (void *)0x0;
  local_28 = 0;
  do {
    iVar1 = _sysctlbyname(param_1,(void *)0x0,&local_28,(void *)0x0,0);
    if (iVar1 == -1) break;
    if (pvVar3 != (void *)0x0) {
      _free(pvVar3);
    }
    pvVar3 = _malloc(local_28);
    iVar1 = _sysctlbyname(param_1,pvVar3,&local_28,(void *)0x0,0);
    if (iVar1 != -1) {
      return pvVar3;
    }
    piVar2 = ___error();
  } while (*piVar2 == 0xc);
  piVar2 = ___error();
  iVar1 = *piVar2;
  if (pvVar3 != (void *)0x0) {
    _free(pvVar3);
  }
  piVar2 = ___error();
  *piVar2 = iVar1;
  return (void *)0x0;
}



/* Address: 0x10018b514 | FUN_10018b514 */

bool FUN_10018b514(char *param_1,void *param_2)

{
  int iVar1;
  size_t local_18;
  
  local_18 = 4;
  iVar1 = _sysctlbyname(param_1,param_2,&local_18,(void *)0x0,0);
  return iVar1 == 0;
}



/* Address: 0x10018b54c | FUN_10018b54c */

ulong FUN_10018b54c(char *param_1,ulong param_2)

{
  byte bVar1;
  char *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (((param_2 < 3) || (*param_1 != -0x11)) || (param_1[1] != -0x45)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 3;
    if (param_1[2] != -0x41) {
      uVar3 = 0;
    }
  }
  do {
    if (param_2 <= uVar3) {
      return uVar3;
    }
    bVar1 = param_1[uVar3];
    if (bVar1 == 0) {
      return uVar3;
    }
    if ((char)bVar1 < '\0') {
      if ((bVar1 & 0xe0) == 0xc0) {
        uVar4 = 1;
      }
      else if ((bVar1 & 0xf0) == 0xe0) {
        uVar4 = 2;
      }
      else {
        if ((bVar1 & 0xf8) != 0xf0) {
          return uVar3;
        }
        uVar4 = 3;
      }
      uVar5 = uVar4;
      pcVar2 = param_1;
      if (param_2 + ~uVar3 < uVar4) {
        return uVar3;
      }
      do {
        if (-0x41 < (pcVar2 + 1)[uVar3]) {
          return uVar3;
        }
        uVar5 = uVar5 - 1;
        pcVar2 = pcVar2 + 1;
      } while (uVar5 != 0);
      uVar3 = uVar4 + uVar3;
    }
    uVar3 = uVar3 + 1;
  } while( true );
}



/* Address: 0x10018b61c | FUN_10018b61c */

void FUN_10018b61c(char *param_1)

{
  size_t sVar1;
  
  sVar1 = _strlen(param_1);
  FUN_10018b54c(param_1,sVar1);
  return;
}



/* Address: 0x10018b644 | FUN_10018b644 */

undefined4
FUN_10018b644(long *param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
             long param_6)

{
  long lVar1;
  undefined4 uVar2;
  
  param_1[1] = param_2;
  param_1[6] = param_3;
  FUN_100174f78(param_4,param_5,param_1 + 2);
  uVar2 = 5;
  if ((-1 < param_6) && ((int)param_4 != 0)) {
    lVar1 = param_1[2];
    FUN_100174f78(lVar1,param_6,param_1 + 3);
    if ((int)lVar1 != 0) {
      FUN_10017c7bc(param_2,param_1[2],0,param_1[3] - param_1[2]);
      param_1[4] = param_2;
      param_1[5] = param_2 + (param_1[3] - param_1[2]);
      *param_1 = param_2;
      uVar2 = 5;
      if (param_2 != 0) {
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}



/* Address: 0x10018b6dc | FUN_10018b6dc */

char * FUN_10018b6dc(void)

{
  return "1.4.0";
}



/* Address: 0x10018b6e8 | FUN_10018b6e8 */

undefined8 FUN_10018b6e8(void)

{
  return 0xf51e0;
}



/* Address: 0x10018b6f4 | FUN_10018b6f4 */

void FUN_10018b6f4(long param_1,size_t param_2,void *param_3)

{
  ulong uVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  
  uVar5 = *(ulong *)(param_1 + 8);
  lVar4 = *(long *)(param_1 + 0x10);
  uVar1 = lVar4 + param_2;
  if (uVar5 < uVar1) {
    do {
      uVar5 = uVar5 << 1;
    } while (uVar5 < uVar1);
    ppuVar2 = &PTR_FUN_100fb3180;
    if (*(undefined ***)(param_1 + 0x28) != (undefined **)0x0) {
      ppuVar2 = *(undefined ***)(param_1 + 0x28);
    }
    puVar3 = ppuVar2[2];
    (*(code *)*ppuVar2)(puVar3,uVar5);
    if (puVar3 == (undefined *)0x0) {
      return;
    }
    _memcpy(puVar3,*(void **)(param_1 + 0x18),*(size_t *)(param_1 + 0x10));
    if (*(int *)(param_1 + 0x20) == 0) {
      *(undefined4 *)(param_1 + 0x20) = 1;
    }
    else if (*(long *)(param_1 + 0x18) != 0) {
      (*(code *)ppuVar2[1])(ppuVar2[2]);
    }
    *(undefined **)(param_1 + 0x18) = puVar3;
    *(ulong *)(param_1 + 8) = uVar5;
    lVar4 = *(long *)(param_1 + 0x10);
  }
  else {
    puVar3 = *(undefined **)(param_1 + 0x18);
  }
  _memcpy(puVar3 + lVar4,param_3,param_2);
  *(ulong *)(param_1 + 0x10) = uVar1;
  return;
}



/* Address: 0x10018b7cc | FUN_10018b7cc */

long FUN_10018b7cc(undefined8 *param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  size_t sVar10;
  int *piVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong *puVar18;
  ulong uVar19;
  
  piVar11 = (int *)*param_1;
  if (*piVar11 != 0x28aaeef9) {
                    /* WARNING: Subroutine does not return */
    FUN_100190160();
  }
  if (piVar11[0xc] == 0) {
    lVar14 = 0;
  }
  else {
    uVar16 = 0;
    lVar14 = 0;
    do {
      lVar15 = *(long *)(piVar11 + 0xe) + uVar16 * 0x48;
      uVar17 = (ulong)*(uint *)(lVar15 + 0x14);
      uVar19 = (ulong)*(uint *)(lVar15 + 0x18);
      iVar5 = *(int *)(lVar15 + 0xc);
      if (iVar5 == 3 || iVar5 == 1) {
        if ((*(byte *)(lVar15 + 0x30) >> 2 & 1) == 0) {
          if (iVar5 != 3) {
            if (iVar5 != 1) goto LAB_10018b8a4;
            if (*(int *)(lVar15 + 0x10) == 0x10 || *(int *)(lVar15 + 0x10) == 0xe) {
              if ((*(long *)((long)param_1 + uVar19) != 0) &&
                 (*(long *)((long)param_1 + uVar19) != *(long *)(lVar15 + 0x28))) {
LAB_10018b88c:
                FUN_10018bdf8(lVar15,(long)param_1 + uVar19);
                goto LAB_10018bd54;
              }
            }
            else if (*(int *)((long)param_1 + uVar17) != 0) goto LAB_10018b88c;
LAB_10018b984:
            lVar15 = 0;
            goto LAB_10018bd54;
          }
          lVar8 = lVar15;
          FUN_10018f454(lVar15,(long)param_1 + uVar19);
          if ((int)lVar8 != 0) {
LAB_10018b964:
            lVar15 = 0;
            goto LAB_10018bd54;
          }
        }
        else {
          if (*(int *)((long)param_1 + uVar17) != *(int *)(lVar15 + 8)) goto LAB_10018b984;
          if ((*(int *)(lVar15 + 0x10) == 0x10 || *(int *)(lVar15 + 0x10) == 0xe) &&
             ((*(long *)((long)param_1 + uVar19) == 0 ||
              (*(long *)((long)param_1 + uVar19) == *(long *)(lVar15 + 0x28))))) goto LAB_10018b964;
        }
        FUN_10018bdf8(lVar15,(long)param_1 + uVar19);
      }
      else {
        if (iVar5 == 0) goto LAB_10018b88c;
LAB_10018b8a4:
        uVar17 = *(ulong *)((long)param_1 + uVar17);
        if (uVar17 == 0) goto LAB_10018b984;
        uVar6 = *(uint *)(lVar15 + 8);
        lVar8 = 4;
        if (uVar6 >> 0x19 != 0) {
          lVar8 = 5;
        }
        lVar2 = 3;
        if (0x3ffff < uVar6) {
          lVar2 = lVar8;
        }
        lVar8 = 2;
        if (0x7ff < uVar6) {
          lVar8 = lVar2;
        }
        lVar2 = 1;
        if (0xf < uVar6) {
          lVar2 = lVar8;
        }
        uVar6 = *(uint *)(lVar15 + 0x30) & 1;
        uVar4 = uVar17;
        if (uVar6 != 0) {
          uVar4 = 1;
        }
        if (*(uint *)(lVar15 + 0x10) < 0x11) {
          puVar18 = *(ulong **)((long)param_1 + uVar19);
          switch(*(uint *)(lVar15 + 0x10)) {
          case 0:
          case 0xd:
            uVar19 = 0;
            uVar9 = 1;
            do {
              uVar7 = (uint)*puVar18;
              if ((int)uVar7 < 0) {
                lVar15 = 10;
              }
              else if (uVar7 < 0x80) {
                lVar15 = 1;
              }
              else {
                lVar15 = 4;
                if (uVar7 >> 0x1c != 0) {
                  lVar15 = 5;
                }
                lVar8 = 3;
                if (0x1fffff < uVar7) {
                  lVar8 = lVar15;
                }
                lVar15 = 2;
                if (0x3fff < uVar7) {
                  lVar15 = lVar8;
                }
              }
              uVar19 = lVar15 + uVar19;
              bVar1 = uVar9 < uVar17;
              uVar9 = (ulong)((int)uVar9 + 1);
              puVar18 = (ulong *)((long)puVar18 + 4);
            } while (bVar1);
            break;
          case 1:
            uVar19 = 0;
            uVar9 = 1;
            do {
              uVar7 = (uint)*puVar18 << 1 ^ (int)(uint)*puVar18 >> 0x1f;
              if (uVar7 < 0x80) {
                lVar15 = 1;
              }
              else if (uVar7 < 0x4000) {
                lVar15 = 2;
              }
              else if (uVar7 < 0x200000) {
                lVar15 = 3;
              }
              else {
                lVar15 = 4;
                if (uVar7 >> 0x1c != 0) {
                  lVar15 = 5;
                }
              }
              uVar19 = lVar15 + uVar19;
              bVar1 = uVar9 < uVar17;
              uVar9 = (ulong)((int)uVar9 + 1);
              puVar18 = (ulong *)((long)puVar18 + 4);
            } while (bVar1);
            break;
          default:
            uVar19 = uVar17 << 2;
            break;
          case 3:
          case 8:
            uVar19 = 0;
            uVar9 = 1;
            do {
              uVar12 = *puVar18;
              if (uVar12 >> 0x20 == 0) {
                if (uVar12 < 0x80) {
                  lVar8 = 1;
                }
                else {
                  lVar15 = 4;
                  if (uVar12 >> 0x1c != 0) {
                    lVar15 = 5;
                  }
                  lVar3 = 3;
                  if (0x1fffff < uVar12) {
                    lVar3 = lVar15;
                  }
                  lVar8 = 2;
                  if (0x3fff < uVar12) {
                    lVar8 = lVar3;
                  }
                }
              }
              else if (uVar12 >> 0x23 == 0) {
                lVar8 = 5;
              }
              else {
                lVar15 = 9;
                if (0x7fffffffffffffff < uVar12) {
                  lVar15 = 10;
                }
                lVar8 = 8;
                if (uVar12 >> 0x38 != 0) {
                  lVar8 = lVar15;
                }
                lVar15 = 7;
                if (uVar12 >> 0x31 != 0) {
                  lVar15 = lVar8;
                }
                lVar8 = 6;
                if (uVar12 >> 0x2a != 0) {
                  lVar8 = lVar15;
                }
              }
              uVar19 = lVar8 + uVar19;
              bVar1 = uVar9 < uVar17;
              uVar9 = (ulong)((int)uVar9 + 1);
              puVar18 = puVar18 + 1;
            } while (bVar1);
            break;
          case 4:
            uVar19 = 0;
            uVar9 = 1;
            do {
              uVar12 = *puVar18 << 1 ^ (long)*puVar18 >> 0x3f;
              if (uVar12 >> 0x20 == 0) {
                if (uVar12 < 0x80) {
                  lVar15 = 1;
                }
                else if (uVar12 < 0x4000) {
                  lVar15 = 2;
                }
                else if (uVar12 < 0x200000) {
                  lVar15 = 3;
                }
                else {
                  lVar15 = 4;
                  if (uVar12 >> 0x1c != 0) {
                    lVar15 = 5;
                  }
                }
              }
              else if (uVar12 >> 0x23 == 0) {
                lVar15 = 5;
              }
              else if (uVar12 >> 0x2a == 0) {
                lVar15 = 6;
              }
              else if (uVar12 >> 0x31 == 0) {
                lVar15 = 7;
              }
              else if (uVar12 >> 0x38 == 0) {
                lVar15 = 8;
              }
              else {
                lVar15 = 9;
                if (0x7fffffffffffffff < uVar12) {
                  lVar15 = 10;
                }
              }
              uVar19 = lVar15 + uVar19;
              bVar1 = uVar9 < uVar17;
              uVar9 = (ulong)((int)uVar9 + 1);
              puVar18 = puVar18 + 1;
            } while (bVar1);
            break;
          case 5:
          case 9:
          case 0xb:
            uVar19 = uVar17 << 3;
            break;
          case 6:
            uVar19 = 0;
            uVar9 = 1;
            do {
              uVar7 = (uint)*puVar18;
              if (uVar7 < 0x80) {
                lVar15 = 1;
              }
              else {
                lVar15 = 4;
                if (uVar7 >> 0x1c != 0) {
                  lVar15 = 5;
                }
                lVar8 = 3;
                if (0x1fffff < uVar7) {
                  lVar8 = lVar15;
                }
                lVar15 = 2;
                if (0x3fff < uVar7) {
                  lVar15 = lVar8;
                }
              }
              uVar19 = lVar15 + uVar19;
              bVar1 = uVar9 < uVar17;
              uVar9 = (ulong)((int)uVar9 + 1);
              puVar18 = (ulong *)((long)puVar18 + 4);
            } while (bVar1);
            break;
          case 0xc:
            uVar19 = uVar17;
            break;
          case 0xe:
            uVar19 = 0;
            uVar9 = 1;
            do {
              sVar10 = _strlen((char *)*puVar18);
              lVar15 = 4;
              if ((sVar10 >> 0x1c & 0xf) != 0) {
                lVar15 = 5;
              }
              uVar7 = (uint)sVar10;
              lVar8 = 3;
              if (0x1fffff < uVar7) {
                lVar8 = lVar15;
              }
              lVar15 = 2;
              if (0x3fff < uVar7) {
                lVar15 = lVar8;
              }
              lVar8 = 1;
              if (0x7f < uVar7) {
                lVar8 = lVar15;
              }
              uVar19 = sVar10 + uVar19 + lVar8;
              bVar1 = uVar9 < uVar17;
              uVar9 = (ulong)((int)uVar9 + 1);
              puVar18 = puVar18 + 1;
            } while (bVar1);
            break;
          case 0xf:
            uVar19 = 0;
            uVar9 = 1;
            do {
              uVar12 = *puVar18;
              lVar15 = 4;
              if ((uVar12 >> 0x1c & 0xf) != 0) {
                lVar15 = 5;
              }
              uVar7 = (uint)uVar12;
              lVar8 = 3;
              if (0x1fffff < uVar7) {
                lVar8 = lVar15;
              }
              lVar15 = 2;
              if (0x3fff < uVar7) {
                lVar15 = lVar8;
              }
              lVar8 = 1;
              if (0x7f < uVar7) {
                lVar8 = lVar15;
              }
              uVar19 = uVar12 + uVar19 + lVar8;
              bVar1 = uVar9 < uVar17;
              uVar9 = (ulong)((int)uVar9 + 1);
              puVar18 = puVar18 + 2;
            } while (bVar1);
            break;
          case 0x10:
            uVar19 = 0;
            uVar9 = 0;
            uVar12 = 1;
            do {
              uVar9 = puVar18[uVar9];
              FUN_10018b7cc();
              lVar8 = 4;
              if ((uVar9 >> 0x1c & 0xf) != 0) {
                lVar8 = 5;
              }
              uVar6 = (uint)uVar9;
              lVar3 = 3;
              if (0x1fffff < uVar6) {
                lVar3 = lVar8;
              }
              lVar8 = 2;
              if (0x3fff < uVar6) {
                lVar8 = lVar3;
              }
              lVar3 = 1;
              if (0x7f < uVar6) {
                lVar3 = lVar8;
              }
              uVar19 = uVar9 + uVar19 + lVar3;
              bVar1 = uVar12 < uVar17;
              uVar9 = uVar12;
              uVar12 = (ulong)((int)uVar12 + 1);
            } while (bVar1);
            uVar6 = *(uint *)(lVar15 + 0x30) & 1;
          }
        }
        else {
          uVar19 = 0;
        }
        lVar15 = 4;
        if ((uVar19 >> 0x1c & 0xf) != 0) {
          lVar15 = 5;
        }
        uVar7 = (uint)uVar19;
        lVar8 = 3;
        if (0x1fffff < uVar7) {
          lVar8 = lVar15;
        }
        lVar15 = 2;
        if (0x3fff < uVar7) {
          lVar15 = lVar8;
        }
        lVar8 = 1;
        if (0x7f < uVar7) {
          lVar8 = lVar15;
        }
        lVar15 = uVar4 * lVar2;
        if (uVar6 != 0) {
          lVar15 = lVar8 + uVar4 * lVar2;
        }
        lVar15 = lVar15 + uVar19;
      }
LAB_10018bd54:
      lVar14 = lVar15 + lVar14;
      uVar16 = uVar16 + 1;
      piVar11 = (int *)*param_1;
    } while (uVar16 < (uint)piVar11[0xc]);
  }
  uVar16 = (ulong)*(uint *)(param_1 + 1);
  if (*(uint *)(param_1 + 1) != 0) {
    plVar13 = (long *)(param_1[2] + 8);
    do {
      uVar6 = *(uint *)(plVar13 + -1);
      lVar15 = 4;
      if (uVar6 >> 0x19 != 0) {
        lVar15 = 5;
      }
      lVar8 = 3;
      if (0x3ffff < uVar6) {
        lVar8 = lVar15;
      }
      lVar15 = 2;
      if (0x7ff < uVar6) {
        lVar15 = lVar8;
      }
      lVar8 = 1;
      if (0xf < uVar6) {
        lVar8 = lVar15;
      }
      lVar14 = lVar8 + lVar14 + *plVar13;
      uVar16 = uVar16 - 1;
      plVar13 = plVar13 + 3;
    } while (uVar16 != 0);
  }
  return lVar14;
}



/* Address: 0x10018bdf8 | FUN_10018bdf8 */

ulong FUN_10018bdf8(undefined8 *param_1,size_t *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  long lVar3;
  bool bVar4;
  uint uVar5;
  size_t sVar6;
  ulong uVar7;
  int iVar8;
  int *piVar9;
  ulong uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  uint *puVar19;
  long lVar20;
  ulong uVar21;
  byte *pbVar22;
  byte *pbVar23;
  ulong uVar24;
  
  uVar5 = *(uint *)(param_1 + 1);
  uVar24 = 4;
  if (uVar5 >> 0x19 != 0) {
    uVar24 = 5;
  }
  uVar17 = 3;
  if (0x3ffff < uVar5) {
    uVar17 = uVar24;
  }
  uVar24 = 2;
  if (0x7ff < uVar5) {
    uVar24 = uVar17;
  }
  uVar17 = 1;
  if (0xf < uVar5) {
    uVar17 = uVar24;
  }
  switch(*(undefined4 *)(param_1 + 2)) {
  case 0:
  case 0xd:
    uVar5 = (uint)*param_2;
    if ((int)uVar5 < 0) {
      lVar20 = 10;
      goto LAB_10018c09c;
    }
    goto LAB_10018bf48;
  case 1:
    uVar5 = (int)*param_2 << 1 ^ (int)*param_2 >> 0x1f;
    if (0x7f < uVar5) {
      if (uVar5 < 0x4000) {
LAB_10018bf3c:
        lVar20 = 2;
        goto LAB_10018c09c;
      }
      if (uVar5 < 0x200000) {
LAB_10018c074:
        lVar20 = 3;
        goto LAB_10018c09c;
      }
      bVar4 = uVar5 >> 0x1c == 0;
LAB_10018c094:
      lVar20 = 4;
      if (!bVar4) {
        lVar20 = 5;
      }
      goto LAB_10018c09c;
    }
    break;
  case 2:
  case 7:
  case 10:
    return uVar17 + 4;
  case 3:
  case 8:
    uVar24 = *param_2;
    if (uVar24 >> 0x20 != 0) {
      if (uVar24 >> 0x23 != 0) {
        lVar20 = 9;
        if (0x7fffffffffffffff < uVar24) {
          lVar20 = 10;
        }
        lVar14 = 8;
        if (uVar24 >> 0x38 != 0) {
          lVar14 = lVar20;
        }
        lVar3 = 7;
        if (uVar24 >> 0x31 != 0) {
          lVar3 = lVar14;
        }
        lVar20 = 6;
        if (uVar24 >> 0x2a != 0) {
          lVar20 = lVar3;
        }
        goto LAB_10018c09c;
      }
LAB_10018c054:
      lVar20 = 5;
      goto LAB_10018c09c;
    }
    if (uVar24 < 0x80) break;
    lVar20 = 4;
    if (uVar24 >> 0x1c != 0) {
      lVar20 = 5;
    }
    lVar14 = 3;
    if (0x1fffff < uVar24) {
      lVar14 = lVar20;
    }
    bVar4 = 0x3fff < uVar24;
    goto LAB_10018bf7c;
  case 4:
    uVar24 = *param_2 << 1 ^ (long)*param_2 >> 0x3f;
    if (uVar24 >> 0x20 != 0) {
      if (uVar24 >> 0x23 != 0) {
        if (uVar24 >> 0x2a == 0) {
          lVar20 = 6;
        }
        else if (uVar24 >> 0x31 == 0) {
          lVar20 = 7;
        }
        else if (uVar24 >> 0x38 == 0) {
          lVar20 = 8;
        }
        else {
          lVar20 = 9;
          if (0x7fffffffffffffff < uVar24) {
            lVar20 = 10;
          }
        }
        goto LAB_10018c09c;
      }
      goto LAB_10018c054;
    }
    if (0x7f < uVar24) {
      if (uVar24 < 0x4000) goto LAB_10018bf3c;
      if (uVar24 < 0x200000) goto LAB_10018c074;
      bVar4 = uVar24 >> 0x1c == 0;
      goto LAB_10018c094;
    }
    break;
  case 5:
  case 9:
  case 0xb:
    return uVar17 | 8;
  case 6:
    uVar5 = (uint)*param_2;
LAB_10018bf48:
    if (0x7f < uVar5) {
      lVar20 = 4;
      if (uVar5 >> 0x1c != 0) {
        lVar20 = 5;
      }
      lVar14 = 3;
      if (0x1fffff < uVar5) {
        lVar14 = lVar20;
      }
      bVar4 = 0x3fff < uVar5;
LAB_10018bf7c:
      lVar20 = 2;
      if (bVar4) {
        lVar20 = lVar14;
      }
      goto LAB_10018c09c;
    }
    break;
  case 0xc:
    return uVar17 + 1;
  case 0xe:
    sVar6 = 0;
    if ((char *)*param_2 != (char *)0x0) {
      sVar6 = _strlen((char *)*param_2);
LAB_10018bed8:
      uVar5 = (uint)sVar6;
      if (0x7f < uVar5) {
        lVar20 = 4;
        if (uVar5 >> 0x1c != 0) {
          lVar20 = 5;
        }
        lVar14 = 3;
        if (0x1fffff < uVar5) {
          lVar14 = lVar20;
        }
        lVar20 = 2;
        if (0x3fff < uVar5) {
          lVar20 = lVar14;
        }
        goto LAB_10018c040;
      }
    }
    goto LAB_10018bee0;
  case 0xf:
    uVar24 = *param_2;
    lVar20 = 4;
    if ((uVar24 >> 0x1c & 0xf) != 0) {
      lVar20 = 5;
    }
    uVar5 = (uint)uVar24;
    lVar14 = 3;
    if (0x1fffff < uVar5) {
      lVar14 = lVar20;
    }
    lVar20 = 2;
    if (0x3fff < uVar5) {
      lVar20 = lVar14;
    }
    lVar14 = 1;
    if (0x7f < uVar5) {
      lVar14 = lVar20;
    }
    return uVar24 + uVar17 + lVar14;
  case 0x10:
    sVar6 = *param_2;
    if (sVar6 != 0) {
      FUN_10018b7cc();
      goto LAB_10018bed8;
    }
LAB_10018bee0:
    lVar20 = 1;
LAB_10018c040:
    return sVar6 + uVar17 + lVar20;
  default:
    FUN_100190188();
    piVar9 = (int *)*param_1;
    if (*piVar9 != 0x28aaeef9) {
LAB_10018c7a0:
      FUN_1001901ac();
LAB_10018c7a4:
      FUN_100190220();
LAB_10018c7a8:
                    /* WARNING: Subroutine does not return */
      FUN_1001901fc();
    }
    if (piVar9[0xc] == 0) {
      uVar17 = 0;
    }
    else {
      uVar24 = 0;
      uVar17 = 0;
      do {
        uVar21 = *(long *)(piVar9 + 0xe) + uVar24 * 0x48;
        uVar18 = (ulong)*(uint *)(uVar21 + 0x18);
        iVar11 = *(int *)(uVar21 + 0xc);
        if (iVar11 == 0) goto LAB_10018c26c;
        uVar10 = (ulong)*(uint *)(uVar21 + 0x14);
        if (iVar11 == 1 || iVar11 == 3) {
          uVar5 = *(uint *)(uVar21 + 0x30);
          if ((uVar5 >> 2 & 1) == 0) {
            if (iVar11 == 3) {
              uVar10 = uVar21;
              FUN_10018f454(uVar21,(long)param_1 + uVar18);
              if ((int)uVar10 != 0) goto LAB_10018c264;
            }
            else {
              if (iVar11 != 1) goto LAB_10018c180;
              if (*(int *)(uVar21 + 0x10) == 0x10 || *(int *)(uVar21 + 0x10) == 0xe)
              goto LAB_10018c200;
              if (*(int *)((long)param_1 + uVar10) == 0) goto LAB_10018c264;
            }
          }
          else {
            if (*(int *)((long)param_1 + uVar10) != *(int *)(uVar21 + 8)) goto LAB_10018c264;
            if (*(int *)(uVar21 + 0x10) == 0x10 || *(int *)(uVar21 + 0x10) == 0xe) {
LAB_10018c200:
              if ((*(long *)((long)param_1 + uVar18) == 0) ||
                 (*(long *)((long)param_1 + uVar18) == *(long *)(uVar21 + 0x28)))
              goto LAB_10018c264;
            }
          }
LAB_10018c26c:
          FUN_10018c7ac(uVar21,(long)param_1 + uVar18,(long)param_2 + uVar17);
          uVar18 = uVar21;
        }
        else {
          uVar5 = *(uint *)(uVar21 + 0x30);
LAB_10018c180:
          uVar10 = *(ulong *)((long)param_1 + uVar10);
          pbVar2 = (byte *)((long)param_2 + uVar17);
          puVar19 = *(uint **)((long)param_1 + uVar18);
          if ((uVar5 & 1) == 0) {
            if (0x10 < *(uint *)(uVar21 + 0x10)) goto LAB_10018c7a4;
            if (uVar10 == 0) {
LAB_10018c264:
              uVar18 = 0;
            }
            else {
              uVar18 = 0;
              lVar20 = *(long *)(&DAT_100c30e88 + (ulong)*(uint *)(uVar21 + 0x10) * 8);
              uVar16 = 1;
              do {
                uVar7 = uVar21;
                FUN_10018c7ac(uVar21,puVar19,pbVar2 + uVar18);
                uVar18 = uVar7 + uVar18;
                puVar19 = (uint *)((long)puVar19 + lVar20);
                bVar4 = uVar16 < uVar10;
                uVar16 = (ulong)((int)uVar16 + 1);
              } while (bVar4);
            }
          }
          else {
            if (uVar10 == 0) goto LAB_10018c264;
            uVar18 = (ulong)*(uint *)(uVar21 + 8);
            FUN_10018f4c4(uVar18,pbVar2);
            *pbVar2 = *pbVar2 | 2;
            uVar5 = *(uint *)(uVar21 + 0x10);
            if (uVar5 - 2 < 10) {
              iVar11 = *(int *)(&DAT_100c30e60 + (ulong)(uVar5 - 2) * 4);
            }
            else {
              iVar11 = 1;
            }
            uVar15 = iVar11 * (int)uVar10;
            if (uVar15 < 0x80) {
              iVar12 = 1;
            }
            else if (uVar15 < 0x4000) {
              iVar12 = 2;
            }
            else {
              iVar11 = 4;
              if (uVar15 >> 0x1c != 0) {
                iVar11 = 5;
              }
              iVar12 = 3;
              if (0x1fffff < uVar15) {
                iVar12 = iVar11;
              }
            }
            if (0xd < uVar5) goto LAB_10018c7a8;
            uVar15 = iVar12 + (int)uVar18;
            pbVar1 = pbVar2 + uVar15;
            lVar20 = 2;
            uVar21 = 0xfffffffc;
            pbVar23 = pbVar1;
            switch(uVar5) {
            case 0:
            case 0xd:
              uVar21 = 1;
              do {
                uVar5 = *puVar19;
                if ((int)uVar5 < 0) {
                  *pbVar23 = (byte)uVar5 | 0x80;
                  pbVar23[1] = (byte)(uVar5 >> 7) | 0x80;
                  pbVar23[2] = (byte)(uVar5 >> 0xe) | 0x80;
                  pbVar23[3] = (byte)(uVar5 >> 0x15) | 0x80;
                  pbVar23[4] = (byte)((int)uVar5 >> 0x1c);
                  pbVar23[5] = 0xff;
                  pbVar23[6] = 0xff;
                  pbVar23[7] = 0xff;
                  pbVar23[8] = 0xff;
                  lVar20 = 10;
                  pbVar23[9] = 1;
                }
                else {
                  if (uVar5 < 0x80) {
                    lVar14 = 0;
                  }
                  else {
                    *pbVar23 = (byte)uVar5 | 0x80;
                    if (uVar5 < 0x4000) {
                      lVar14 = 1;
                      uVar5 = uVar5 >> 7;
                    }
                    else {
                      pbVar23[1] = (byte)(uVar5 >> 7) | 0x80;
                      if (uVar5 < 0x200000) {
                        lVar14 = 2;
                        uVar5 = uVar5 >> 0xe;
                      }
                      else {
                        pbVar23[2] = (byte)(uVar5 >> 0xe) | 0x80;
                        if (uVar5 >> 0x1c == 0) {
                          lVar14 = 3;
                          uVar5 = uVar5 >> 0x15;
                        }
                        else {
                          pbVar23[3] = (byte)(uVar5 >> 0x15) | 0x80;
                          lVar14 = 4;
                          uVar5 = uVar5 >> 0x1c;
                        }
                      }
                    }
                  }
                  lVar20 = lVar14 + 1;
                  pbVar23[lVar14] = (byte)uVar5;
                }
                pbVar23 = pbVar23 + lVar20;
                bVar4 = uVar21 < uVar10;
                uVar21 = (ulong)((int)uVar21 + 1);
                puVar19 = puVar19 + 1;
              } while (bVar4);
              break;
            case 1:
              uVar21 = 1;
              do {
                uVar5 = *puVar19 << 1 ^ (int)*puVar19 >> 0x1f;
                if (uVar5 < 0x80) {
                  lVar20 = 0;
                }
                else {
                  *pbVar23 = (byte)uVar5 | 0x80;
                  if (uVar5 < 0x4000) {
                    lVar20 = 1;
                    uVar5 = uVar5 >> 7;
                  }
                  else {
                    pbVar23[1] = (byte)(uVar5 >> 7) | 0x80;
                    if (uVar5 < 0x200000) {
                      lVar20 = 2;
                      uVar5 = uVar5 >> 0xe;
                    }
                    else {
                      pbVar23[2] = (byte)(uVar5 >> 0xe) | 0x80;
                      if (uVar5 >> 0x1c == 0) {
                        lVar20 = 3;
                        uVar5 = uVar5 >> 0x15;
                      }
                      else {
                        pbVar23[3] = (byte)(uVar5 >> 0x15) | 0x80;
                        lVar20 = 4;
                        uVar5 = uVar5 >> 0x1c;
                      }
                    }
                  }
                }
                pbVar22 = pbVar23 + lVar20;
                pbVar23 = pbVar22 + 1;
                *pbVar22 = (byte)uVar5;
                bVar4 = uVar21 < uVar10;
                uVar21 = (ulong)((int)uVar21 + 1);
                puVar19 = puVar19 + 1;
              } while (bVar4);
              break;
            case 3:
            case 8:
              uVar21 = 0;
              uVar16 = 1;
              do {
                lVar20 = *(long *)(puVar19 + uVar21 * 2);
                FUN_10018f558(lVar20,pbVar23);
                pbVar23 = pbVar23 + lVar20;
                bVar4 = uVar16 < uVar10;
                uVar21 = uVar16;
                uVar16 = (ulong)((int)uVar16 + 1);
              } while (bVar4);
              break;
            case 4:
              uVar21 = 0;
              uVar16 = 1;
              do {
                uVar21 = *(long *)(puVar19 + uVar21 * 2) << 1 ^
                         *(long *)(puVar19 + uVar21 * 2) >> 0x3f;
                FUN_10018f558(uVar21,pbVar23);
                pbVar23 = pbVar23 + uVar21;
                bVar4 = uVar16 < uVar10;
                uVar21 = uVar16;
                uVar16 = (ulong)((int)uVar16 + 1);
              } while (bVar4);
              break;
            case 5:
            case 9:
            case 0xb:
              lVar20 = 3;
              uVar21 = 0xfffffff8;
            default:
              _memcpy(pbVar1,puVar19,uVar10 << lVar20 & uVar21);
              pbVar23 = pbVar1 + (uVar10 << lVar20);
              break;
            case 6:
              uVar21 = 1;
              do {
                uVar5 = *puVar19;
                if (uVar5 < 0x80) {
                  lVar20 = 0;
                }
                else {
                  *pbVar23 = (byte)uVar5 | 0x80;
                  if (uVar5 < 0x4000) {
                    lVar20 = 1;
                    uVar5 = uVar5 >> 7;
                  }
                  else {
                    pbVar23[1] = (byte)(uVar5 >> 7) | 0x80;
                    if (uVar5 < 0x200000) {
                      lVar20 = 2;
                      uVar5 = uVar5 >> 0xe;
                    }
                    else {
                      pbVar23[2] = (byte)(uVar5 >> 0xe) | 0x80;
                      if (uVar5 >> 0x1c == 0) {
                        lVar20 = 3;
                        uVar5 = uVar5 >> 0x15;
                      }
                      else {
                        pbVar23[3] = (byte)(uVar5 >> 0x15) | 0x80;
                        lVar20 = 4;
                        uVar5 = uVar5 >> 0x1c;
                      }
                    }
                  }
                }
                pbVar22 = pbVar23 + lVar20;
                pbVar23 = pbVar22 + 1;
                *pbVar22 = (byte)uVar5;
                bVar4 = uVar21 < uVar10;
                uVar21 = (ulong)((int)uVar21 + 1);
                puVar19 = puVar19 + 1;
              } while (bVar4);
              break;
            case 0xc:
              uVar21 = 1;
              pbVar22 = pbVar1;
              do {
                pbVar23 = pbVar22 + 1;
                *pbVar22 = *puVar19 != 0;
                bVar4 = uVar21 < uVar10;
                uVar21 = (ulong)((int)uVar21 + 1);
                puVar19 = puVar19 + 1;
                pbVar22 = pbVar23;
              } while (bVar4);
            }
            uVar21 = (long)pbVar23 - (long)pbVar1;
            uVar5 = (uint)uVar21;
            if (uVar5 < 0x80) {
              iVar8 = 1;
            }
            else if (uVar5 < 0x4000) {
              iVar8 = 2;
            }
            else {
              iVar11 = 4;
              if (uVar5 >> 0x1c != 0) {
                iVar11 = 5;
              }
              iVar8 = 3;
              if (0x1fffff < uVar5) {
                iVar8 = iVar11;
              }
            }
            if (iVar12 != iVar8) {
              if (iVar12 + 1 != iVar8) {
                FUN_1001901d4();
                goto LAB_10018c7a0;
              }
              _memmove(pbVar1 + 1,pbVar1,uVar21 & 0xffffffff);
              uVar15 = uVar15 + 1;
            }
            pbVar2 = pbVar2 + uVar18;
            if (uVar5 < 0x80) {
              lVar20 = 0;
              uVar13 = uVar5;
            }
            else {
              *pbVar2 = (byte)uVar21 | 0x80;
              if (uVar5 < 0x4000) {
                lVar20 = 1;
                uVar13 = uVar5 >> 7;
              }
              else {
                pbVar2[1] = (byte)(uVar5 >> 7) | 0x80;
                if (uVar5 < 0x200000) {
                  lVar20 = 2;
                  uVar13 = uVar5 >> 0xe;
                }
                else {
                  pbVar2[2] = (byte)(uVar5 >> 0xe) | 0x80;
                  if (uVar5 >> 0x1c == 0) {
                    lVar20 = 3;
                    uVar13 = uVar5 >> 0x15;
                  }
                  else {
                    pbVar2[3] = (byte)(uVar5 >> 0x15) | 0x80;
                    lVar20 = 4;
                    uVar13 = uVar5 >> 0x1c;
                  }
                }
              }
            }
            pbVar2[lVar20] = (byte)uVar13;
            uVar18 = (ulong)(uVar15 + uVar5);
          }
        }
        uVar17 = uVar18 + uVar17;
        uVar24 = uVar24 + 1;
        piVar9 = (int *)*param_1;
      } while (uVar24 < (uint)piVar9[0xc]);
    }
    if (*(int *)(param_1 + 1) != 0) {
      lVar20 = 0;
      uVar24 = 0;
      do {
        puVar19 = (uint *)(param_1[2] + lVar20);
        pbVar2 = (byte *)((long)param_2 + uVar17);
        uVar21 = (ulong)*puVar19;
        FUN_10018f4c4(uVar21,pbVar2);
        *pbVar2 = *pbVar2 | (byte)puVar19[1];
        _memcpy(pbVar2 + uVar21,*(void **)(puVar19 + 4),*(size_t *)(puVar19 + 2));
        uVar17 = uVar21 + uVar17 + *(long *)(puVar19 + 2);
        uVar24 = uVar24 + 1;
        lVar20 = lVar20 + 0x18;
      } while (uVar24 < *(uint *)(param_1 + 1));
    }
    return uVar17;
  }
  lVar20 = 1;
LAB_10018c09c:
  return lVar20 + uVar17;
}



/* Address: 0x10018c0d0 | FUN_10018c0d0 */

long FUN_10018c0d0(undefined8 *param_1,long param_2)

{
  bool bVar1;
  byte *pbVar2;
  byte *pbVar3;
  ulong uVar4;
  int iVar5;
  int *piVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  uint *puVar17;
  long lVar18;
  ulong uVar19;
  byte *pbVar20;
  byte *pbVar21;
  ulong uVar22;
  
  piVar6 = (int *)*param_1;
  if (*piVar6 != 0x28aaeef9) {
LAB_10018c7a0:
    FUN_1001901ac();
LAB_10018c7a4:
    FUN_100190220();
LAB_10018c7a8:
                    /* WARNING: Subroutine does not return */
    FUN_1001901fc();
  }
  if (piVar6[0xc] == 0) {
    lVar14 = 0;
  }
  else {
    uVar22 = 0;
    lVar14 = 0;
    do {
      uVar19 = *(long *)(piVar6 + 0xe) + uVar22 * 0x48;
      uVar15 = (ulong)*(uint *)(uVar19 + 0x18);
      iVar8 = *(int *)(uVar19 + 0xc);
      if (iVar8 == 0) goto LAB_10018c26c;
      uVar7 = (ulong)*(uint *)(uVar19 + 0x14);
      if (iVar8 == 1 || iVar8 == 3) {
        uVar16 = *(uint *)(uVar19 + 0x30);
        if ((uVar16 >> 2 & 1) == 0) {
          if (iVar8 == 3) {
            uVar7 = uVar19;
            FUN_10018f454(uVar19,(long)param_1 + uVar15);
            if ((int)uVar7 != 0) goto LAB_10018c264;
          }
          else {
            if (iVar8 != 1) goto LAB_10018c180;
            if (*(int *)(uVar19 + 0x10) == 0x10 || *(int *)(uVar19 + 0x10) == 0xe)
            goto LAB_10018c200;
            if (*(int *)((long)param_1 + uVar7) == 0) goto LAB_10018c264;
          }
        }
        else {
          if (*(int *)((long)param_1 + uVar7) != *(int *)(uVar19 + 8)) goto LAB_10018c264;
          if (*(int *)(uVar19 + 0x10) == 0x10 || *(int *)(uVar19 + 0x10) == 0xe) {
LAB_10018c200:
            if ((*(long *)((long)param_1 + uVar15) == 0) ||
               (*(long *)((long)param_1 + uVar15) == *(long *)(uVar19 + 0x28))) goto LAB_10018c264;
          }
        }
LAB_10018c26c:
        FUN_10018c7ac(uVar19,(long)param_1 + uVar15,param_2 + lVar14);
        uVar15 = uVar19;
      }
      else {
        uVar16 = *(uint *)(uVar19 + 0x30);
LAB_10018c180:
        uVar7 = *(ulong *)((long)param_1 + uVar7);
        pbVar3 = (byte *)(param_2 + lVar14);
        puVar17 = *(uint **)((long)param_1 + uVar15);
        if ((uVar16 & 1) == 0) {
          if (0x10 < *(uint *)(uVar19 + 0x10)) goto LAB_10018c7a4;
          if (uVar7 == 0) {
LAB_10018c264:
            uVar15 = 0;
          }
          else {
            uVar15 = 0;
            lVar18 = *(long *)(&DAT_100c30e88 + (ulong)*(uint *)(uVar19 + 0x10) * 8);
            uVar13 = 1;
            do {
              uVar4 = uVar19;
              FUN_10018c7ac(uVar19,puVar17,pbVar3 + uVar15);
              uVar15 = uVar4 + uVar15;
              puVar17 = (uint *)((long)puVar17 + lVar18);
              bVar1 = uVar13 < uVar7;
              uVar13 = (ulong)((int)uVar13 + 1);
            } while (bVar1);
          }
        }
        else {
          if (uVar7 == 0) goto LAB_10018c264;
          uVar15 = (ulong)*(uint *)(uVar19 + 8);
          FUN_10018f4c4(uVar15,pbVar3);
          *pbVar3 = *pbVar3 | 2;
          uVar16 = *(uint *)(uVar19 + 0x10);
          if (uVar16 - 2 < 10) {
            iVar8 = *(int *)(&DAT_100c30e60 + (ulong)(uVar16 - 2) * 4);
          }
          else {
            iVar8 = 1;
          }
          uVar12 = iVar8 * (int)uVar7;
          if (uVar12 < 0x80) {
            iVar9 = 1;
          }
          else if (uVar12 < 0x4000) {
            iVar9 = 2;
          }
          else {
            iVar8 = 4;
            if (uVar12 >> 0x1c != 0) {
              iVar8 = 5;
            }
            iVar9 = 3;
            if (0x1fffff < uVar12) {
              iVar9 = iVar8;
            }
          }
          if (0xd < uVar16) goto LAB_10018c7a8;
          uVar12 = iVar9 + (int)uVar15;
          pbVar2 = pbVar3 + uVar12;
          lVar18 = 2;
          uVar19 = 0xfffffffc;
          pbVar21 = pbVar2;
          switch(uVar16) {
          case 0:
          case 0xd:
            uVar19 = 1;
            do {
              uVar16 = *puVar17;
              if ((int)uVar16 < 0) {
                *pbVar21 = (byte)uVar16 | 0x80;
                pbVar21[1] = (byte)(uVar16 >> 7) | 0x80;
                pbVar21[2] = (byte)(uVar16 >> 0xe) | 0x80;
                pbVar21[3] = (byte)(uVar16 >> 0x15) | 0x80;
                pbVar21[4] = (byte)((int)uVar16 >> 0x1c);
                pbVar21[5] = 0xff;
                pbVar21[6] = 0xff;
                pbVar21[7] = 0xff;
                pbVar21[8] = 0xff;
                lVar18 = 10;
                pbVar21[9] = 1;
              }
              else {
                if (uVar16 < 0x80) {
                  lVar11 = 0;
                }
                else {
                  *pbVar21 = (byte)uVar16 | 0x80;
                  if (uVar16 < 0x4000) {
                    lVar11 = 1;
                    uVar16 = uVar16 >> 7;
                  }
                  else {
                    pbVar21[1] = (byte)(uVar16 >> 7) | 0x80;
                    if (uVar16 < 0x200000) {
                      lVar11 = 2;
                      uVar16 = uVar16 >> 0xe;
                    }
                    else {
                      pbVar21[2] = (byte)(uVar16 >> 0xe) | 0x80;
                      if (uVar16 >> 0x1c == 0) {
                        lVar11 = 3;
                        uVar16 = uVar16 >> 0x15;
                      }
                      else {
                        pbVar21[3] = (byte)(uVar16 >> 0x15) | 0x80;
                        lVar11 = 4;
                        uVar16 = uVar16 >> 0x1c;
                      }
                    }
                  }
                }
                lVar18 = lVar11 + 1;
                pbVar21[lVar11] = (byte)uVar16;
              }
              pbVar21 = pbVar21 + lVar18;
              bVar1 = uVar19 < uVar7;
              uVar19 = (ulong)((int)uVar19 + 1);
              puVar17 = puVar17 + 1;
            } while (bVar1);
            break;
          case 1:
            uVar19 = 1;
            do {
              uVar16 = *puVar17 << 1 ^ (int)*puVar17 >> 0x1f;
              if (uVar16 < 0x80) {
                lVar18 = 0;
              }
              else {
                *pbVar21 = (byte)uVar16 | 0x80;
                if (uVar16 < 0x4000) {
                  lVar18 = 1;
                  uVar16 = uVar16 >> 7;
                }
                else {
                  pbVar21[1] = (byte)(uVar16 >> 7) | 0x80;
                  if (uVar16 < 0x200000) {
                    lVar18 = 2;
                    uVar16 = uVar16 >> 0xe;
                  }
                  else {
                    pbVar21[2] = (byte)(uVar16 >> 0xe) | 0x80;
                    if (uVar16 >> 0x1c == 0) {
                      lVar18 = 3;
                      uVar16 = uVar16 >> 0x15;
                    }
                    else {
                      pbVar21[3] = (byte)(uVar16 >> 0x15) | 0x80;
                      lVar18 = 4;
                      uVar16 = uVar16 >> 0x1c;
                    }
                  }
                }
              }
              pbVar20 = pbVar21 + lVar18;
              pbVar21 = pbVar20 + 1;
              *pbVar20 = (byte)uVar16;
              bVar1 = uVar19 < uVar7;
              uVar19 = (ulong)((int)uVar19 + 1);
              puVar17 = puVar17 + 1;
            } while (bVar1);
            break;
          case 3:
          case 8:
            uVar19 = 0;
            uVar13 = 1;
            do {
              lVar18 = *(long *)(puVar17 + uVar19 * 2);
              FUN_10018f558(lVar18,pbVar21);
              pbVar21 = pbVar21 + lVar18;
              bVar1 = uVar13 < uVar7;
              uVar19 = uVar13;
              uVar13 = (ulong)((int)uVar13 + 1);
            } while (bVar1);
            break;
          case 4:
            uVar19 = 0;
            uVar13 = 1;
            do {
              uVar19 = *(long *)(puVar17 + uVar19 * 2) << 1 ^
                       *(long *)(puVar17 + uVar19 * 2) >> 0x3f;
              FUN_10018f558(uVar19,pbVar21);
              pbVar21 = pbVar21 + uVar19;
              bVar1 = uVar13 < uVar7;
              uVar19 = uVar13;
              uVar13 = (ulong)((int)uVar13 + 1);
            } while (bVar1);
            break;
          case 5:
          case 9:
          case 0xb:
            lVar18 = 3;
            uVar19 = 0xfffffff8;
          default:
            _memcpy(pbVar2,puVar17,uVar7 << lVar18 & uVar19);
            pbVar21 = pbVar2 + (uVar7 << lVar18);
            break;
          case 6:
            uVar19 = 1;
            do {
              uVar16 = *puVar17;
              if (uVar16 < 0x80) {
                lVar18 = 0;
              }
              else {
                *pbVar21 = (byte)uVar16 | 0x80;
                if (uVar16 < 0x4000) {
                  lVar18 = 1;
                  uVar16 = uVar16 >> 7;
                }
                else {
                  pbVar21[1] = (byte)(uVar16 >> 7) | 0x80;
                  if (uVar16 < 0x200000) {
                    lVar18 = 2;
                    uVar16 = uVar16 >> 0xe;
                  }
                  else {
                    pbVar21[2] = (byte)(uVar16 >> 0xe) | 0x80;
                    if (uVar16 >> 0x1c == 0) {
                      lVar18 = 3;
                      uVar16 = uVar16 >> 0x15;
                    }
                    else {
                      pbVar21[3] = (byte)(uVar16 >> 0x15) | 0x80;
                      lVar18 = 4;
                      uVar16 = uVar16 >> 0x1c;
                    }
                  }
                }
              }
              pbVar20 = pbVar21 + lVar18;
              pbVar21 = pbVar20 + 1;
              *pbVar20 = (byte)uVar16;
              bVar1 = uVar19 < uVar7;
              uVar19 = (ulong)((int)uVar19 + 1);
              puVar17 = puVar17 + 1;
            } while (bVar1);
            break;
          case 0xc:
            uVar19 = 1;
            pbVar20 = pbVar2;
            do {
              pbVar21 = pbVar20 + 1;
              *pbVar20 = *puVar17 != 0;
              bVar1 = uVar19 < uVar7;
              uVar19 = (ulong)((int)uVar19 + 1);
              puVar17 = puVar17 + 1;
              pbVar20 = pbVar21;
            } while (bVar1);
          }
          uVar19 = (long)pbVar21 - (long)pbVar2;
          uVar16 = (uint)uVar19;
          if (uVar16 < 0x80) {
            iVar5 = 1;
          }
          else if (uVar16 < 0x4000) {
            iVar5 = 2;
          }
          else {
            iVar8 = 4;
            if (uVar16 >> 0x1c != 0) {
              iVar8 = 5;
            }
            iVar5 = 3;
            if (0x1fffff < uVar16) {
              iVar5 = iVar8;
            }
          }
          if (iVar9 != iVar5) {
            if (iVar9 + 1 != iVar5) {
              FUN_1001901d4();
              goto LAB_10018c7a0;
            }
            _memmove(pbVar2 + 1,pbVar2,uVar19 & 0xffffffff);
            uVar12 = uVar12 + 1;
          }
          pbVar3 = pbVar3 + uVar15;
          if (uVar16 < 0x80) {
            lVar18 = 0;
            uVar10 = uVar16;
          }
          else {
            *pbVar3 = (byte)uVar19 | 0x80;
            if (uVar16 < 0x4000) {
              lVar18 = 1;
              uVar10 = uVar16 >> 7;
            }
            else {
              pbVar3[1] = (byte)(uVar16 >> 7) | 0x80;
              if (uVar16 < 0x200000) {
                lVar18 = 2;
                uVar10 = uVar16 >> 0xe;
              }
              else {
                pbVar3[2] = (byte)(uVar16 >> 0xe) | 0x80;
                if (uVar16 >> 0x1c == 0) {
                  lVar18 = 3;
                  uVar10 = uVar16 >> 0x15;
                }
                else {
                  pbVar3[3] = (byte)(uVar16 >> 0x15) | 0x80;
                  lVar18 = 4;
                  uVar10 = uVar16 >> 0x1c;
                }
              }
            }
          }
          pbVar3[lVar18] = (byte)uVar10;
          uVar15 = (ulong)(uVar12 + uVar16);
        }
      }
      lVar14 = uVar15 + lVar14;
      uVar22 = uVar22 + 1;
      piVar6 = (int *)*param_1;
    } while (uVar22 < (uint)piVar6[0xc]);
  }
  if (*(int *)(param_1 + 1) != 0) {
    lVar18 = 0;
    uVar22 = 0;
    do {
      puVar17 = (uint *)(param_1[2] + lVar18);
      pbVar3 = (byte *)(param_2 + lVar14);
      uVar19 = (ulong)*puVar17;
      FUN_10018f4c4(uVar19,pbVar3);
      *pbVar3 = *pbVar3 | (byte)puVar17[1];
      _memcpy(pbVar3 + uVar19,*(void **)(puVar17 + 4),*(size_t *)(puVar17 + 2));
      lVar14 = uVar19 + lVar14 + *(long *)(puVar17 + 2);
      uVar22 = uVar22 + 1;
      lVar18 = lVar18 + 0x18;
    } while (uVar22 < *(uint *)(param_1 + 1));
  }
  return lVar14;
}



/* Address: 0x10018c7ac | FUN_10018c7ac */

long FUN_10018c7ac(long param_1,size_t *param_2,byte *param_3)

{
  uint *puVar1;
  int iVar2;
  undefined8 *puVar3;
  size_t sVar4;
  ulong uVar5;
  byte *pbVar6;
  size_t sVar7;
  int *piVar8;
  ulong *puVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  ulong uVar17;
  uint uVar18;
  char *pcVar19;
  long lVar20;
  ulong *puVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  int iVar25;
  ulong uVar26;
  ulong uVar27;
  byte abStack_cc [20];
  byte abStack_b8 [5];
  undefined4 uStack_b3;
  undefined1 uStack_af;
  long lStack_a8;
  
  puVar3 = (undefined8 *)(ulong)*(uint *)(param_1 + 8);
  pbVar6 = param_3;
  FUN_10018f4c4();
  switch(*(undefined4 *)(param_1 + 0x10)) {
  case 0:
  case 0xd:
    uVar18 = (uint)*param_2;
    pbVar6 = param_3 + (long)puVar3;
    if ((int)uVar18 < 0) {
      *pbVar6 = (byte)uVar18 | 0x80;
      pbVar6[1] = (byte)(uVar18 >> 7) | 0x80;
      pbVar6[2] = (byte)(uVar18 >> 0xe) | 0x80;
      pbVar6[3] = (byte)(uVar18 >> 0x15) | 0x80;
      pbVar6[4] = (byte)((int)uVar18 >> 0x1c);
      pbVar6[5] = 0xff;
      pbVar6[6] = 0xff;
      pbVar6[7] = 0xff;
      pbVar6[8] = 0xff;
      sVar4 = 10;
      pbVar6[9] = 1;
      break;
    }
    goto LAB_10018c984;
  case 1:
    uVar18 = (uint)*param_2 << 1 ^ (int)(uint)*param_2 >> 0x1f;
    goto LAB_10018c984;
  case 2:
  case 7:
  case 10:
    *param_3 = *param_3 | 5;
    *(uint *)(param_3 + (long)puVar3) = (uint)*param_2;
    sVar4 = 4;
    break;
  case 3:
  case 8:
    sVar4 = *param_2;
    goto LAB_10018c970;
  case 4:
    sVar4 = *param_2 << 1 ^ (long)*param_2 >> 0x3f;
LAB_10018c970:
    FUN_10018f558(sVar4,param_3 + (long)puVar3);
    break;
  case 5:
  case 9:
  case 0xb:
    *param_3 = *param_3 | 1;
    *(size_t *)(param_3 + (long)puVar3) = *param_2;
    sVar4 = 8;
    break;
  case 6:
    uVar18 = (uint)*param_2;
LAB_10018c984:
    param_3 = param_3 + (long)puVar3;
    if (uVar18 < 0x80) {
      uVar14 = 0;
      uVar11 = uVar18;
    }
    else {
      *param_3 = (byte)uVar18 | 0x80;
      uVar11 = uVar18 >> 7;
      if (uVar18 < 0x4000) {
        uVar14 = 1;
      }
      else {
        param_3[1] = (byte)uVar11 | 0x80;
        uVar11 = uVar18 >> 0xe;
        if (uVar18 < 0x200000) {
          uVar14 = 2;
        }
        else {
          param_3[2] = (byte)uVar11 | 0x80;
          uVar11 = uVar18 >> 0x15;
          if (uVar18 >> 0x1c == 0) {
            uVar14 = 3;
          }
          else {
            param_3[3] = (byte)uVar11 | 0x80;
            uVar14 = 4;
            uVar11 = uVar18 >> 0x1c;
          }
        }
      }
    }
    sVar4 = (size_t)(uVar14 + 1);
    param_3[uVar14] = (byte)uVar11;
    break;
  case 0xc:
    param_3[(long)puVar3] = (uint)*param_2 != 0;
    goto LAB_10018ca88;
  case 0xe:
    *param_3 = *param_3 | 2;
    pcVar19 = (char *)*param_2;
    param_3 = param_3 + (long)puVar3;
    if (pcVar19 != (char *)0x0) {
      sVar4 = _strlen(pcVar19);
      uVar18 = (uint)sVar4;
      if (uVar18 < 0x80) {
        uVar11 = 0;
      }
      else {
        *param_3 = (byte)sVar4 | 0x80;
        if (uVar18 < 0x4000) {
          uVar11 = 1;
          uVar18 = uVar18 >> 7;
        }
        else {
          param_3[1] = (byte)(uVar18 >> 7) | 0x80;
          if (uVar18 < 0x200000) {
            uVar11 = 2;
            uVar18 = uVar18 >> 0xe;
          }
          else {
            param_3[2] = (byte)(uVar18 >> 0xe) | 0x80;
            if (uVar18 >> 0x1c == 0) {
              uVar11 = 3;
              uVar18 = uVar18 >> 0x15;
            }
            else {
              param_3[3] = (byte)(uVar18 >> 0x15) | 0x80;
              uVar11 = 4;
              uVar18 = uVar18 >> 0x1c;
            }
          }
        }
      }
      param_3[uVar11] = (byte)uVar18;
      _memcpy(param_3 + (uVar11 + 1),pcVar19,sVar4);
      sVar4 = sVar4 + (uVar11 + 1);
      break;
    }
    *param_3 = 0;
    goto LAB_10018ca88;
  case 0xf:
    *param_3 = *param_3 | 2;
    param_3 = param_3 + (long)puVar3;
    sVar4 = *param_2;
    uVar18 = (uint)sVar4;
    if (uVar18 < 0x80) {
      uVar11 = 0;
    }
    else {
      *param_3 = (byte)sVar4 | 0x80;
      if (uVar18 < 0x4000) {
        uVar11 = 1;
        uVar18 = uVar18 >> 7;
      }
      else {
        param_3[1] = (byte)(uVar18 >> 7) | 0x80;
        if (uVar18 < 0x200000) {
          uVar11 = 2;
          uVar18 = uVar18 >> 0xe;
        }
        else {
          param_3[2] = (byte)(uVar18 >> 0xe) | 0x80;
          if (uVar18 >> 0x1c == 0) {
            uVar11 = 3;
            uVar18 = uVar18 >> 0x15;
          }
          else {
            param_3[3] = (byte)(uVar18 >> 0x15) | 0x80;
            uVar11 = 4;
            uVar18 = uVar18 >> 0x1c;
          }
        }
      }
    }
    param_3[uVar11] = (byte)uVar18;
    _memcpy(param_3 + (uVar11 + 1),(void *)param_2[1],sVar4);
    sVar4 = sVar4 + (uVar11 + 1);
    break;
  case 0x10:
    *param_3 = *param_3 | 2;
    sVar4 = *param_2;
    param_3 = param_3 + (long)puVar3;
    if (sVar4 != 0) {
      FUN_10018c0d0(sVar4,param_3 + 1);
      uVar18 = (uint)sVar4;
      if (uVar18 < 0x80) {
        uVar18 = 0;
        sVar7 = sVar4;
      }
      else {
        uVar11 = uVar18 >> 0x1c;
        lVar20 = 4;
        if (uVar11 != 0) {
          lVar20 = 5;
        }
        lVar23 = 3;
        if (0x1fffff < uVar18) {
          lVar23 = lVar20;
        }
        lVar20 = 2;
        if (0x3fff < uVar18) {
          lVar20 = lVar23;
        }
        _memmove(param_3 + lVar20,param_3 + 1,sVar4);
        *param_3 = (byte)sVar4 | 0x80;
        sVar7 = (size_t)(uVar18 >> 7);
        if (uVar18 < 0x4000) {
          uVar18 = 1;
        }
        else {
          param_3[1] = (byte)(uVar18 >> 7) | 0x80;
          sVar7 = (size_t)(uVar18 >> 0xe);
          if (uVar18 < 0x200000) {
            uVar18 = 2;
          }
          else {
            param_3[2] = (byte)(uVar18 >> 0xe) | 0x80;
            sVar7 = (size_t)(uVar18 >> 0x15);
            if (uVar11 == 0) {
              uVar18 = 3;
            }
            else {
              param_3[3] = (byte)(uVar18 >> 0x15) | 0x80;
              uVar18 = 4;
              sVar7 = (ulong)uVar11;
            }
          }
        }
      }
      param_3[uVar18] = (byte)sVar7;
      sVar4 = sVar4 + (uVar18 + 1);
      break;
    }
    *param_3 = 0;
LAB_10018ca88:
    sVar4 = 1;
    break;
  default:
    FUN_10019022c();
    lStack_a8 = *(long *)PTR____stack_chk_guard_100ea82f0;
    piVar8 = (int *)*puVar3;
    if (*piVar8 == 0x28aaeef9) {
      if (piVar8[0xc] == 0) {
        lVar20 = 0;
      }
      else {
        uVar26 = 0;
        lVar20 = 0;
        do {
          uVar22 = *(long *)(piVar8 + 0xe) + uVar26 * 0x48;
          uVar5 = (ulong)*(uint *)(uVar22 + 0x14);
          uVar24 = (ulong)*(uint *)(uVar22 + 0x18);
          iVar25 = *(int *)(uVar22 + 0xc);
          if (iVar25 == 3 || iVar25 == 1) {
            if ((*(byte *)(uVar22 + 0x30) >> 2 & 1) == 0) {
              if (iVar25 == 3) {
                uVar5 = uVar22;
                FUN_10018f454(uVar22,(long)puVar3 + uVar24);
                if ((int)uVar5 == 0) goto LAB_10018cc90;
              }
              else {
                if (iVar25 != 1) goto LAB_10018cca8;
                if (*(int *)(uVar22 + 0x10) == 0x10 || *(int *)(uVar22 + 0x10) == 0xe)
                goto LAB_10018cd1c;
                if (*(int *)((long)puVar3 + uVar5) != 0) goto LAB_10018cc90;
              }
            }
            else if (*(int *)((long)puVar3 + uVar5) == *(int *)(uVar22 + 8)) {
              if (*(int *)(uVar22 + 0x10) == 0x10 || *(int *)(uVar22 + 0x10) == 0xe) {
LAB_10018cd1c:
                if ((*(long *)((long)puVar3 + uVar24) == 0) ||
                   (*(long *)((long)puVar3 + uVar24) == *(long *)(uVar22 + 0x28)))
                goto LAB_10018cd84;
              }
LAB_10018cc90:
              FUN_10018d53c(uVar22,(long)puVar3 + uVar24,pbVar6);
              uVar24 = uVar22;
              goto LAB_10018d44c;
            }
LAB_10018cd84:
            uVar24 = 0;
          }
          else {
            if (iVar25 == 0) goto LAB_10018cc90;
LAB_10018cca8:
            uVar5 = *(ulong *)((long)puVar3 + uVar5);
            iVar25 = (int)uVar5;
            if (iVar25 == 0) goto LAB_10018cd84;
            puVar21 = *(ulong **)((long)puVar3 + uVar24);
            if ((*(byte *)(uVar22 + 0x30) & 1) == 0) {
              if (0x10 < *(uint *)(uVar22 + 0x10)) goto LAB_10018d52c;
              uVar24 = 0;
              lVar23 = *(long *)(&DAT_100c30e88 + (ulong)*(uint *)(uVar22 + 0x10) * 8);
              do {
                uVar27 = uVar22;
                FUN_10018d53c(uVar22,puVar21,pbVar6);
                uVar24 = (ulong)(uint)((int)uVar24 + (int)uVar27);
                puVar21 = (ulong *)((long)puVar21 + lVar23);
                uVar18 = (int)uVar5 - 1;
                uVar5 = (ulong)uVar18;
              } while (uVar18 != 0);
            }
            else {
              uVar24 = (ulong)*(uint *)(uVar22 + 8);
              FUN_10018f4c4(uVar24,abStack_cc);
              if (0xd < *(uint *)(uVar22 + 0x10)) {
LAB_10018d538:
                    /* WARNING: Subroutine does not return */
                FUN_1001902c4();
              }
              uVar27 = uVar5 & 0xffffffff;
              switch(*(uint *)(uVar22 + 0x10)) {
              case 0:
              case 0xd:
                uVar5 = 0;
                puVar9 = puVar21;
                uVar12 = uVar27;
                do {
                  uVar18 = (uint)*puVar9;
                  if ((int)uVar18 < 0) {
                    iVar15 = 10;
                  }
                  else if (uVar18 < 0x80) {
                    iVar15 = 1;
                  }
                  else {
                    iVar15 = 4;
                    if (uVar18 >> 0x1c != 0) {
                      iVar15 = 5;
                    }
                    iVar16 = 3;
                    if (0x1fffff < uVar18) {
                      iVar16 = iVar15;
                    }
                    iVar15 = 2;
                    if (0x3fff < uVar18) {
                      iVar15 = iVar16;
                    }
                  }
                  uVar5 = (ulong)(uint)(iVar15 + (int)uVar5);
                  uVar12 = uVar12 - 1;
                  puVar9 = (ulong *)((long)puVar9 + 4);
                } while (uVar12 != 0);
                break;
              case 1:
                uVar5 = 0;
                puVar9 = puVar21;
                uVar12 = uVar27;
                do {
                  uVar18 = (uint)*puVar9 << 1 ^ (int)(uint)*puVar9 >> 0x1f;
                  if (uVar18 < 0x80) {
                    iVar15 = 1;
                  }
                  else if (uVar18 < 0x4000) {
                    iVar15 = 2;
                  }
                  else if (uVar18 < 0x200000) {
                    iVar15 = 3;
                  }
                  else {
                    iVar15 = 4;
                    if (uVar18 >> 0x1c != 0) {
                      iVar15 = 5;
                    }
                  }
                  uVar5 = (ulong)(uint)(iVar15 + (int)uVar5);
                  uVar12 = uVar12 - 1;
                  puVar9 = (ulong *)((long)puVar9 + 4);
                } while (uVar12 != 0);
                break;
              default:
                uVar5 = (ulong)(uint)(iVar25 << 2);
                break;
              case 3:
              case 8:
                uVar5 = 0;
                puVar9 = puVar21;
                uVar12 = uVar27;
                do {
                  uVar17 = *puVar9;
                  if (uVar17 >> 0x20 == 0) {
                    if (uVar17 < 0x80) {
                      iVar16 = 1;
                    }
                    else {
                      iVar15 = 4;
                      if (uVar17 >> 0x1c != 0) {
                        iVar15 = 5;
                      }
                      iVar2 = 3;
                      if (0x1fffff < uVar17) {
                        iVar2 = iVar15;
                      }
                      iVar16 = 2;
                      if (0x3fff < uVar17) {
                        iVar16 = iVar2;
                      }
                    }
                  }
                  else if (uVar17 >> 0x23 == 0) {
                    iVar16 = 5;
                  }
                  else {
                    iVar15 = 9;
                    if (0x7fffffffffffffff < uVar17) {
                      iVar15 = 10;
                    }
                    iVar16 = 8;
                    if (uVar17 >> 0x38 != 0) {
                      iVar16 = iVar15;
                    }
                    iVar15 = 7;
                    if (uVar17 >> 0x31 != 0) {
                      iVar15 = iVar16;
                    }
                    iVar16 = 6;
                    if (uVar17 >> 0x2a != 0) {
                      iVar16 = iVar15;
                    }
                  }
                  uVar5 = (ulong)(uint)(iVar16 + (int)uVar5);
                  uVar12 = uVar12 - 1;
                  puVar9 = puVar9 + 1;
                } while (uVar12 != 0);
                break;
              case 4:
                uVar5 = 0;
                puVar9 = puVar21;
                uVar12 = uVar27;
                do {
                  uVar17 = *puVar9 << 1 ^ (long)*puVar9 >> 0x3f;
                  if (uVar17 >> 0x20 == 0) {
                    if (uVar17 < 0x80) {
                      iVar15 = 1;
                    }
                    else if (uVar17 < 0x4000) {
                      iVar15 = 2;
                    }
                    else if (uVar17 < 0x200000) {
                      iVar15 = 3;
                    }
                    else {
                      iVar15 = 4;
                      if (uVar17 >> 0x1c != 0) {
                        iVar15 = 5;
                      }
                    }
                  }
                  else if (uVar17 >> 0x23 == 0) {
                    iVar15 = 5;
                  }
                  else if (uVar17 >> 0x2a == 0) {
                    iVar15 = 6;
                  }
                  else if (uVar17 >> 0x31 == 0) {
                    iVar15 = 7;
                  }
                  else if (uVar17 >> 0x38 == 0) {
                    iVar15 = 8;
                  }
                  else {
                    iVar15 = 9;
                    if (0x7fffffffffffffff < uVar17) {
                      iVar15 = 10;
                    }
                  }
                  uVar5 = (ulong)(uint)(iVar15 + (int)uVar5);
                  uVar12 = uVar12 - 1;
                  puVar9 = puVar9 + 1;
                } while (uVar12 != 0);
                break;
              case 5:
              case 9:
              case 0xb:
                uVar5 = (ulong)(uint)(iVar25 << 3);
                break;
              case 6:
                uVar5 = 0;
                puVar9 = puVar21;
                uVar12 = uVar27;
                do {
                  uVar18 = (uint)*puVar9;
                  if (uVar18 < 0x80) {
                    iVar15 = 1;
                  }
                  else {
                    iVar15 = 4;
                    if (uVar18 >> 0x1c != 0) {
                      iVar15 = 5;
                    }
                    iVar16 = 3;
                    if (0x1fffff < uVar18) {
                      iVar16 = iVar15;
                    }
                    iVar15 = 2;
                    if (0x3fff < uVar18) {
                      iVar15 = iVar16;
                    }
                  }
                  uVar5 = (ulong)(uint)(iVar15 + (int)uVar5);
                  uVar12 = uVar12 - 1;
                  puVar9 = (ulong *)((long)puVar9 + 4);
                } while (uVar12 != 0);
                break;
              case 0xc:
                break;
              }
              abStack_cc[0] = abStack_cc[0] | 2;
              uVar18 = (uint)uVar5;
              if (uVar18 < 0x80) {
                lVar23 = 0;
              }
              else {
                abStack_cc[uVar24] = (byte)uVar5 | 0x80;
                if (uVar18 < 0x4000) {
                  lVar23 = 1;
                  uVar18 = uVar18 >> 7;
                }
                else {
                  abStack_cc[uVar24 + 1] = (byte)(uVar18 >> 7) | 0x80;
                  if (uVar18 < 0x200000) {
                    lVar23 = 2;
                    uVar18 = uVar18 >> 0xe;
                  }
                  else {
                    abStack_cc[uVar24 + 2] = (byte)(uVar18 >> 0xe) | 0x80;
                    if (uVar18 >> 0x1c == 0) {
                      lVar23 = 3;
                      uVar18 = uVar18 >> 0x15;
                    }
                    else {
                      abStack_cc[uVar24 + 3] = (byte)(uVar18 >> 0x15) | 0x80;
                      lVar23 = 4;
                      uVar18 = uVar18 >> 0x1c;
                    }
                  }
                }
              }
              (abStack_cc + uVar24)[lVar23] = (byte)uVar18;
              lVar23 = lVar23 + uVar24 + 1;
              (**(code **)pbVar6)(pbVar6,lVar23,abStack_cc);
              lVar10 = 2;
              switch(*(undefined4 *)(uVar22 + 0x10)) {
              case 0:
              case 0xd:
                uVar22 = 0;
                uVar24 = uVar27;
                do {
                  uVar18 = (uint)*puVar21;
                  if ((int)uVar18 < 0) {
                    abStack_b8[0] = (byte)uVar18 | 0x80;
                    abStack_b8[1] = (byte)(uVar18 >> 7) | 0x80;
                    abStack_b8[2] = (byte)(uVar18 >> 0xe) | 0x80;
                    abStack_b8[3] = (byte)(uVar18 >> 0x15) | 0x80;
                    abStack_b8[4] = (byte)((int)uVar18 >> 0x1c);
                    uStack_b3 = 0xffffffff;
                    lVar10 = 10;
                    uStack_af = 1;
                  }
                  else {
                    if (uVar18 < 0x80) {
                      lVar13 = 0;
                    }
                    else {
                      abStack_b8[0] = (byte)uVar18 | 0x80;
                      if (uVar18 < 0x4000) {
                        lVar13 = 1;
                        uVar18 = uVar18 >> 7;
                      }
                      else {
                        abStack_b8[1] = (byte)(uVar18 >> 7) | 0x80;
                        if (uVar18 < 0x200000) {
                          lVar13 = 2;
                          uVar18 = uVar18 >> 0xe;
                        }
                        else {
                          abStack_b8[2] = (byte)(uVar18 >> 0xe) | 0x80;
                          if (uVar18 >> 0x1c == 0) {
                            lVar13 = 3;
                            uVar18 = uVar18 >> 0x15;
                          }
                          else {
                            abStack_b8[3] = (byte)(uVar18 >> 0x15) | 0x80;
                            lVar13 = 4;
                            uVar18 = uVar18 >> 0x1c;
                          }
                        }
                      }
                    }
                    lVar10 = lVar13 + 1;
                    abStack_b8[lVar13] = (byte)uVar18;
                  }
                  (**(code **)pbVar6)(pbVar6,lVar10,abStack_b8);
                  uVar27 = lVar10 + uVar22;
                  uVar24 = uVar24 - 1;
                  puVar21 = (ulong *)((long)puVar21 + 4);
                  uVar22 = uVar27;
                } while (uVar24 != 0);
                break;
              case 1:
                uVar22 = 0;
                uVar24 = uVar27;
                do {
                  uVar18 = (uint)*puVar21 << 1 ^ (int)(uint)*puVar21 >> 0x1f;
                  if (uVar18 < 0x80) {
                    lVar10 = 0;
                  }
                  else {
                    abStack_b8[0] = (byte)uVar18 | 0x80;
                    if (uVar18 < 0x4000) {
                      lVar10 = 1;
                      uVar18 = uVar18 >> 7;
                    }
                    else {
                      abStack_b8[1] = (byte)(uVar18 >> 7) | 0x80;
                      if (uVar18 < 0x200000) {
                        lVar10 = 2;
                        uVar18 = uVar18 >> 0xe;
                      }
                      else {
                        abStack_b8[2] = (byte)(uVar18 >> 0xe) | 0x80;
                        if (uVar18 >> 0x1c == 0) {
                          lVar10 = 3;
                          uVar18 = uVar18 >> 0x15;
                        }
                        else {
                          abStack_b8[3] = (byte)(uVar18 >> 0x15) | 0x80;
                          lVar10 = 4;
                          uVar18 = uVar18 >> 0x1c;
                        }
                      }
                    }
                  }
                  abStack_b8[lVar10] = (byte)uVar18;
                  (**(code **)pbVar6)(pbVar6,lVar10 + 1,abStack_b8);
                  uVar27 = uVar22 + lVar10 + 1;
                  uVar24 = uVar24 - 1;
                  puVar21 = (ulong *)((long)puVar21 + 4);
                  uVar22 = uVar27;
                } while (uVar24 != 0);
                break;
              case 3:
              case 8:
                uVar22 = 0;
                uVar24 = uVar27;
                do {
                  uVar27 = *puVar21;
                  FUN_10018f558(uVar27,abStack_b8);
                  (**(code **)pbVar6)(pbVar6,uVar27,abStack_b8);
                  uVar27 = uVar27 + uVar22;
                  uVar24 = uVar24 - 1;
                  puVar21 = puVar21 + 1;
                  uVar22 = uVar27;
                } while (uVar24 != 0);
                break;
              case 4:
                uVar22 = 0;
                uVar24 = uVar27;
                do {
                  uVar27 = *puVar21 << 1 ^ (long)*puVar21 >> 0x3f;
                  FUN_10018f558(uVar27,abStack_b8);
                  (**(code **)pbVar6)(pbVar6,uVar27,abStack_b8);
                  uVar27 = uVar27 + uVar22;
                  uVar24 = uVar24 - 1;
                  puVar21 = puVar21 + 1;
                  uVar22 = uVar27;
                } while (uVar24 != 0);
                break;
              case 5:
              case 9:
              case 0xb:
                lVar10 = 3;
              case 2:
              case 7:
              case 10:
                uVar27 = (ulong)(uint)(iVar25 << lVar10);
                (**(code **)pbVar6)(pbVar6,uVar27,puVar21);
                break;
              case 6:
                uVar22 = 0;
                uVar24 = uVar27;
                do {
                  uVar18 = (uint)*puVar21;
                  if (uVar18 < 0x80) {
                    lVar10 = 0;
                  }
                  else {
                    abStack_b8[0] = (byte)uVar18 | 0x80;
                    if (uVar18 < 0x4000) {
                      lVar10 = 1;
                      uVar18 = uVar18 >> 7;
                    }
                    else {
                      abStack_b8[1] = (byte)(uVar18 >> 7) | 0x80;
                      if (uVar18 < 0x200000) {
                        lVar10 = 2;
                        uVar18 = uVar18 >> 0xe;
                      }
                      else {
                        abStack_b8[2] = (byte)(uVar18 >> 0xe) | 0x80;
                        if (uVar18 >> 0x1c == 0) {
                          lVar10 = 3;
                          uVar18 = uVar18 >> 0x15;
                        }
                        else {
                          abStack_b8[3] = (byte)(uVar18 >> 0x15) | 0x80;
                          lVar10 = 4;
                          uVar18 = uVar18 >> 0x1c;
                        }
                      }
                    }
                  }
                  abStack_b8[lVar10] = (byte)uVar18;
                  (**(code **)pbVar6)(pbVar6,lVar10 + 1,abStack_b8);
                  uVar27 = uVar22 + lVar10 + 1;
                  uVar24 = uVar24 - 1;
                  puVar21 = (ulong *)((long)puVar21 + 4);
                  uVar22 = uVar27;
                } while (uVar24 != 0);
                break;
              case 0xc:
                uVar24 = uVar27;
                do {
                  abStack_b8[0] = (uint)*puVar21 != 0;
                  (**(code **)pbVar6)(pbVar6,1,abStack_b8);
                  uVar24 = uVar24 - 1;
                  puVar21 = (ulong *)((long)puVar21 + 4);
                } while (uVar24 != 0);
                break;
              default:
                FUN_1001902a0();
                goto LAB_10018d538;
              }
              if (uVar27 != (uVar5 & 0xffffffff)) {
                FUN_100190278();
                goto LAB_10018d528;
              }
              uVar24 = lVar23 + (uVar5 & 0xffffffff);
            }
          }
LAB_10018d44c:
          lVar20 = uVar24 + lVar20;
          uVar26 = uVar26 + 1;
          piVar8 = (int *)*puVar3;
        } while (uVar26 < (uint)piVar8[0xc]);
      }
      if (*(int *)(puVar3 + 1) != 0) {
        lVar23 = 0;
        uVar26 = 0;
        do {
          puVar1 = (uint *)(puVar3[2] + lVar23);
          uVar5 = (ulong)*puVar1;
          FUN_10018f4c4(uVar5,abStack_cc);
          abStack_cc[0] = abStack_cc[0] | (byte)puVar1[1];
          (**(code **)pbVar6)(pbVar6,uVar5,abStack_cc);
          (**(code **)pbVar6)(pbVar6,*(undefined8 *)(puVar1 + 2),*(undefined8 *)(puVar1 + 4));
          lVar20 = uVar5 + lVar20 + *(long *)(puVar1 + 2);
          uVar26 = uVar26 + 1;
          lVar23 = lVar23 + 0x18;
        } while (uVar26 < *(uint *)(puVar3 + 1));
      }
      if (*(long *)PTR____stack_chk_guard_100ea82f0 == lStack_a8) {
        return lVar20;
      }
    }
    else {
LAB_10018d528:
      FUN_100190250();
LAB_10018d52c:
      FUN_1001902e8();
    }
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return sVar4 + (long)puVar3;
}



/* Address: 0x10018cbd8 | FUN_10018cbd8 */

long FUN_10018cbd8(undefined8 *param_1,undefined8 *param_2)

{
  uint *puVar1;
  int iVar2;
  ulong uVar3;
  int *piVar4;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  ulong *puVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  int iVar17;
  ulong uVar18;
  ulong uVar19;
  uint uVar20;
  byte local_8c [20];
  byte local_78 [5];
  undefined4 local_73;
  undefined1 local_6f;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  piVar4 = (int *)*param_1;
  if (*piVar4 == 0x28aaeef9) {
    if (piVar4[0xc] == 0) {
      lVar12 = 0;
    }
    else {
      uVar18 = 0;
      lVar12 = 0;
      do {
        uVar14 = *(long *)(piVar4 + 0xe) + uVar18 * 0x48;
        uVar3 = (ulong)*(uint *)(uVar14 + 0x14);
        uVar16 = (ulong)*(uint *)(uVar14 + 0x18);
        iVar17 = *(int *)(uVar14 + 0xc);
        if (iVar17 == 3 || iVar17 == 1) {
          if ((*(byte *)(uVar14 + 0x30) >> 2 & 1) == 0) {
            if (iVar17 == 3) {
              uVar3 = uVar14;
              FUN_10018f454(uVar14,(long)param_1 + uVar16);
              if ((int)uVar3 == 0) goto LAB_10018cc90;
            }
            else {
              if (iVar17 != 1) goto LAB_10018cca8;
              if (*(int *)(uVar14 + 0x10) == 0x10 || *(int *)(uVar14 + 0x10) == 0xe)
              goto LAB_10018cd1c;
              if (*(int *)((long)param_1 + uVar3) != 0) goto LAB_10018cc90;
            }
          }
          else if (*(int *)((long)param_1 + uVar3) == *(int *)(uVar14 + 8)) {
            if (*(int *)(uVar14 + 0x10) == 0x10 || *(int *)(uVar14 + 0x10) == 0xe) {
LAB_10018cd1c:
              if ((*(long *)((long)param_1 + uVar16) == 0) ||
                 (*(long *)((long)param_1 + uVar16) == *(long *)(uVar14 + 0x28)))
              goto LAB_10018cd84;
            }
LAB_10018cc90:
            FUN_10018d53c(uVar14,(long)param_1 + uVar16,param_2);
            uVar16 = uVar14;
            goto LAB_10018d44c;
          }
LAB_10018cd84:
          uVar16 = 0;
        }
        else {
          if (iVar17 == 0) goto LAB_10018cc90;
LAB_10018cca8:
          uVar3 = *(ulong *)((long)param_1 + uVar3);
          iVar17 = (int)uVar3;
          if (iVar17 == 0) goto LAB_10018cd84;
          puVar13 = *(ulong **)((long)param_1 + uVar16);
          if ((*(byte *)(uVar14 + 0x30) & 1) == 0) {
            if (0x10 < *(uint *)(uVar14 + 0x10)) goto LAB_10018d52c;
            uVar16 = 0;
            lVar15 = *(long *)(&DAT_100c30e88 + (ulong)*(uint *)(uVar14 + 0x10) * 8);
            do {
              uVar19 = uVar14;
              FUN_10018d53c(uVar14,puVar13,param_2);
              uVar16 = (ulong)(uint)((int)uVar16 + (int)uVar19);
              puVar13 = (ulong *)((long)puVar13 + lVar15);
              uVar20 = (int)uVar3 - 1;
              uVar3 = (ulong)uVar20;
            } while (uVar20 != 0);
          }
          else {
            uVar16 = (ulong)*(uint *)(uVar14 + 8);
            FUN_10018f4c4(uVar16,local_8c);
            if (0xd < *(uint *)(uVar14 + 0x10)) {
LAB_10018d538:
                    /* WARNING: Subroutine does not return */
              FUN_1001902c4();
            }
            uVar19 = uVar3 & 0xffffffff;
            switch(*(uint *)(uVar14 + 0x10)) {
            case 0:
            case 0xd:
              uVar3 = 0;
              puVar5 = puVar13;
              uVar7 = uVar19;
              do {
                uVar20 = (uint)*puVar5;
                if ((int)uVar20 < 0) {
                  iVar9 = 10;
                }
                else if (uVar20 < 0x80) {
                  iVar9 = 1;
                }
                else {
                  iVar9 = 4;
                  if (uVar20 >> 0x1c != 0) {
                    iVar9 = 5;
                  }
                  iVar10 = 3;
                  if (0x1fffff < uVar20) {
                    iVar10 = iVar9;
                  }
                  iVar9 = 2;
                  if (0x3fff < uVar20) {
                    iVar9 = iVar10;
                  }
                }
                uVar3 = (ulong)(uint)(iVar9 + (int)uVar3);
                uVar7 = uVar7 - 1;
                puVar5 = (ulong *)((long)puVar5 + 4);
              } while (uVar7 != 0);
              break;
            case 1:
              uVar3 = 0;
              puVar5 = puVar13;
              uVar7 = uVar19;
              do {
                uVar20 = (uint)*puVar5 << 1 ^ (int)(uint)*puVar5 >> 0x1f;
                if (uVar20 < 0x80) {
                  iVar9 = 1;
                }
                else if (uVar20 < 0x4000) {
                  iVar9 = 2;
                }
                else if (uVar20 < 0x200000) {
                  iVar9 = 3;
                }
                else {
                  iVar9 = 4;
                  if (uVar20 >> 0x1c != 0) {
                    iVar9 = 5;
                  }
                }
                uVar3 = (ulong)(uint)(iVar9 + (int)uVar3);
                uVar7 = uVar7 - 1;
                puVar5 = (ulong *)((long)puVar5 + 4);
              } while (uVar7 != 0);
              break;
            default:
              uVar3 = (ulong)(uint)(iVar17 << 2);
              break;
            case 3:
            case 8:
              uVar3 = 0;
              puVar5 = puVar13;
              uVar7 = uVar19;
              do {
                uVar11 = *puVar5;
                if (uVar11 >> 0x20 == 0) {
                  if (uVar11 < 0x80) {
                    iVar10 = 1;
                  }
                  else {
                    iVar9 = 4;
                    if (uVar11 >> 0x1c != 0) {
                      iVar9 = 5;
                    }
                    iVar2 = 3;
                    if (0x1fffff < uVar11) {
                      iVar2 = iVar9;
                    }
                    iVar10 = 2;
                    if (0x3fff < uVar11) {
                      iVar10 = iVar2;
                    }
                  }
                }
                else if (uVar11 >> 0x23 == 0) {
                  iVar10 = 5;
                }
                else {
                  iVar9 = 9;
                  if (0x7fffffffffffffff < uVar11) {
                    iVar9 = 10;
                  }
                  iVar10 = 8;
                  if (uVar11 >> 0x38 != 0) {
                    iVar10 = iVar9;
                  }
                  iVar9 = 7;
                  if (uVar11 >> 0x31 != 0) {
                    iVar9 = iVar10;
                  }
                  iVar10 = 6;
                  if (uVar11 >> 0x2a != 0) {
                    iVar10 = iVar9;
                  }
                }
                uVar3 = (ulong)(uint)(iVar10 + (int)uVar3);
                uVar7 = uVar7 - 1;
                puVar5 = puVar5 + 1;
              } while (uVar7 != 0);
              break;
            case 4:
              uVar3 = 0;
              puVar5 = puVar13;
              uVar7 = uVar19;
              do {
                uVar11 = *puVar5 << 1 ^ (long)*puVar5 >> 0x3f;
                if (uVar11 >> 0x20 == 0) {
                  if (uVar11 < 0x80) {
                    iVar9 = 1;
                  }
                  else if (uVar11 < 0x4000) {
                    iVar9 = 2;
                  }
                  else if (uVar11 < 0x200000) {
                    iVar9 = 3;
                  }
                  else {
                    iVar9 = 4;
                    if (uVar11 >> 0x1c != 0) {
                      iVar9 = 5;
                    }
                  }
                }
                else if (uVar11 >> 0x23 == 0) {
                  iVar9 = 5;
                }
                else if (uVar11 >> 0x2a == 0) {
                  iVar9 = 6;
                }
                else if (uVar11 >> 0x31 == 0) {
                  iVar9 = 7;
                }
                else if (uVar11 >> 0x38 == 0) {
                  iVar9 = 8;
                }
                else {
                  iVar9 = 9;
                  if (0x7fffffffffffffff < uVar11) {
                    iVar9 = 10;
                  }
                }
                uVar3 = (ulong)(uint)(iVar9 + (int)uVar3);
                uVar7 = uVar7 - 1;
                puVar5 = puVar5 + 1;
              } while (uVar7 != 0);
              break;
            case 5:
            case 9:
            case 0xb:
              uVar3 = (ulong)(uint)(iVar17 << 3);
              break;
            case 6:
              uVar3 = 0;
              puVar5 = puVar13;
              uVar7 = uVar19;
              do {
                uVar20 = (uint)*puVar5;
                if (uVar20 < 0x80) {
                  iVar9 = 1;
                }
                else {
                  iVar9 = 4;
                  if (uVar20 >> 0x1c != 0) {
                    iVar9 = 5;
                  }
                  iVar10 = 3;
                  if (0x1fffff < uVar20) {
                    iVar10 = iVar9;
                  }
                  iVar9 = 2;
                  if (0x3fff < uVar20) {
                    iVar9 = iVar10;
                  }
                }
                uVar3 = (ulong)(uint)(iVar9 + (int)uVar3);
                uVar7 = uVar7 - 1;
                puVar5 = (ulong *)((long)puVar5 + 4);
              } while (uVar7 != 0);
              break;
            case 0xc:
              break;
            }
            local_8c[0] = local_8c[0] | 2;
            uVar20 = (uint)uVar3;
            if (uVar20 < 0x80) {
              lVar15 = 0;
            }
            else {
              local_8c[uVar16] = (byte)uVar3 | 0x80;
              if (uVar20 < 0x4000) {
                lVar15 = 1;
                uVar20 = uVar20 >> 7;
              }
              else {
                local_8c[uVar16 + 1] = (byte)(uVar20 >> 7) | 0x80;
                if (uVar20 < 0x200000) {
                  lVar15 = 2;
                  uVar20 = uVar20 >> 0xe;
                }
                else {
                  local_8c[uVar16 + 2] = (byte)(uVar20 >> 0xe) | 0x80;
                  if (uVar20 >> 0x1c == 0) {
                    lVar15 = 3;
                    uVar20 = uVar20 >> 0x15;
                  }
                  else {
                    local_8c[uVar16 + 3] = (byte)(uVar20 >> 0x15) | 0x80;
                    lVar15 = 4;
                    uVar20 = uVar20 >> 0x1c;
                  }
                }
              }
            }
            (local_8c + uVar16)[lVar15] = (byte)uVar20;
            lVar15 = lVar15 + uVar16 + 1;
            (*(code *)*param_2)(param_2,lVar15,local_8c);
            lVar6 = 2;
            switch(*(undefined4 *)(uVar14 + 0x10)) {
            case 0:
            case 0xd:
              uVar14 = 0;
              uVar16 = uVar19;
              do {
                uVar20 = (uint)*puVar13;
                if ((int)uVar20 < 0) {
                  local_78[0] = (byte)uVar20 | 0x80;
                  local_78[1] = (byte)(uVar20 >> 7) | 0x80;
                  local_78[2] = (byte)(uVar20 >> 0xe) | 0x80;
                  local_78[3] = (byte)(uVar20 >> 0x15) | 0x80;
                  local_78[4] = (byte)((int)uVar20 >> 0x1c);
                  local_73 = 0xffffffff;
                  lVar6 = 10;
                  local_6f = 1;
                }
                else {
                  if (uVar20 < 0x80) {
                    lVar8 = 0;
                  }
                  else {
                    local_78[0] = (byte)uVar20 | 0x80;
                    if (uVar20 < 0x4000) {
                      lVar8 = 1;
                      uVar20 = uVar20 >> 7;
                    }
                    else {
                      local_78[1] = (byte)(uVar20 >> 7) | 0x80;
                      if (uVar20 < 0x200000) {
                        lVar8 = 2;
                        uVar20 = uVar20 >> 0xe;
                      }
                      else {
                        local_78[2] = (byte)(uVar20 >> 0xe) | 0x80;
                        if (uVar20 >> 0x1c == 0) {
                          lVar8 = 3;
                          uVar20 = uVar20 >> 0x15;
                        }
                        else {
                          local_78[3] = (byte)(uVar20 >> 0x15) | 0x80;
                          lVar8 = 4;
                          uVar20 = uVar20 >> 0x1c;
                        }
                      }
                    }
                  }
                  lVar6 = lVar8 + 1;
                  local_78[lVar8] = (byte)uVar20;
                }
                (*(code *)*param_2)(param_2,lVar6,local_78);
                uVar19 = lVar6 + uVar14;
                uVar16 = uVar16 - 1;
                puVar13 = (ulong *)((long)puVar13 + 4);
                uVar14 = uVar19;
              } while (uVar16 != 0);
              break;
            case 1:
              uVar14 = 0;
              uVar16 = uVar19;
              do {
                uVar20 = (uint)*puVar13 << 1 ^ (int)(uint)*puVar13 >> 0x1f;
                if (uVar20 < 0x80) {
                  lVar6 = 0;
                }
                else {
                  local_78[0] = (byte)uVar20 | 0x80;
                  if (uVar20 < 0x4000) {
                    lVar6 = 1;
                    uVar20 = uVar20 >> 7;
                  }
                  else {
                    local_78[1] = (byte)(uVar20 >> 7) | 0x80;
                    if (uVar20 < 0x200000) {
                      lVar6 = 2;
                      uVar20 = uVar20 >> 0xe;
                    }
                    else {
                      local_78[2] = (byte)(uVar20 >> 0xe) | 0x80;
                      if (uVar20 >> 0x1c == 0) {
                        lVar6 = 3;
                        uVar20 = uVar20 >> 0x15;
                      }
                      else {
                        local_78[3] = (byte)(uVar20 >> 0x15) | 0x80;
                        lVar6 = 4;
                        uVar20 = uVar20 >> 0x1c;
                      }
                    }
                  }
                }
                local_78[lVar6] = (byte)uVar20;
                (*(code *)*param_2)(param_2,lVar6 + 1,local_78);
                uVar19 = uVar14 + lVar6 + 1;
                uVar16 = uVar16 - 1;
                puVar13 = (ulong *)((long)puVar13 + 4);
                uVar14 = uVar19;
              } while (uVar16 != 0);
              break;
            case 3:
            case 8:
              uVar14 = 0;
              uVar16 = uVar19;
              do {
                uVar19 = *puVar13;
                FUN_10018f558(uVar19,local_78);
                (*(code *)*param_2)(param_2,uVar19,local_78);
                uVar19 = uVar19 + uVar14;
                uVar16 = uVar16 - 1;
                puVar13 = puVar13 + 1;
                uVar14 = uVar19;
              } while (uVar16 != 0);
              break;
            case 4:
              uVar14 = 0;
              uVar16 = uVar19;
              do {
                uVar19 = *puVar13 << 1 ^ (long)*puVar13 >> 0x3f;
                FUN_10018f558(uVar19,local_78);
                (*(code *)*param_2)(param_2,uVar19,local_78);
                uVar19 = uVar19 + uVar14;
                uVar16 = uVar16 - 1;
                puVar13 = puVar13 + 1;
                uVar14 = uVar19;
              } while (uVar16 != 0);
              break;
            case 5:
            case 9:
            case 0xb:
              lVar6 = 3;
            case 2:
            case 7:
            case 10:
              uVar19 = (ulong)(uint)(iVar17 << lVar6);
              (*(code *)*param_2)(param_2,uVar19,puVar13);
              break;
            case 6:
              uVar14 = 0;
              uVar16 = uVar19;
              do {
                uVar20 = (uint)*puVar13;
                if (uVar20 < 0x80) {
                  lVar6 = 0;
                }
                else {
                  local_78[0] = (byte)uVar20 | 0x80;
                  if (uVar20 < 0x4000) {
                    lVar6 = 1;
                    uVar20 = uVar20 >> 7;
                  }
                  else {
                    local_78[1] = (byte)(uVar20 >> 7) | 0x80;
                    if (uVar20 < 0x200000) {
                      lVar6 = 2;
                      uVar20 = uVar20 >> 0xe;
                    }
                    else {
                      local_78[2] = (byte)(uVar20 >> 0xe) | 0x80;
                      if (uVar20 >> 0x1c == 0) {
                        lVar6 = 3;
                        uVar20 = uVar20 >> 0x15;
                      }
                      else {
                        local_78[3] = (byte)(uVar20 >> 0x15) | 0x80;
                        lVar6 = 4;
                        uVar20 = uVar20 >> 0x1c;
                      }
                    }
                  }
                }
                local_78[lVar6] = (byte)uVar20;
                (*(code *)*param_2)(param_2,lVar6 + 1,local_78);
                uVar19 = uVar14 + lVar6 + 1;
                uVar16 = uVar16 - 1;
                puVar13 = (ulong *)((long)puVar13 + 4);
                uVar14 = uVar19;
              } while (uVar16 != 0);
              break;
            case 0xc:
              uVar16 = uVar19;
              do {
                local_78[0] = (uint)*puVar13 != 0;
                (*(code *)*param_2)(param_2,1,local_78);
                uVar16 = uVar16 - 1;
                puVar13 = (ulong *)((long)puVar13 + 4);
              } while (uVar16 != 0);
              break;
            default:
              FUN_1001902a0();
              goto LAB_10018d538;
            }
            if (uVar19 != (uVar3 & 0xffffffff)) {
              FUN_100190278();
              goto LAB_10018d528;
            }
            uVar16 = lVar15 + (uVar3 & 0xffffffff);
          }
        }
LAB_10018d44c:
        lVar12 = uVar16 + lVar12;
        uVar18 = uVar18 + 1;
        piVar4 = (int *)*param_1;
      } while (uVar18 < (uint)piVar4[0xc]);
    }
    if (*(int *)(param_1 + 1) != 0) {
      lVar15 = 0;
      uVar18 = 0;
      do {
        puVar1 = (uint *)(param_1[2] + lVar15);
        uVar3 = (ulong)*puVar1;
        FUN_10018f4c4(uVar3,local_8c);
        local_8c[0] = local_8c[0] | (byte)puVar1[1];
        (*(code *)*param_2)(param_2,uVar3,local_8c);
        (*(code *)*param_2)(param_2,*(undefined8 *)(puVar1 + 2),*(undefined8 *)(puVar1 + 4));
        lVar12 = uVar3 + lVar12 + *(long *)(puVar1 + 2);
        uVar18 = uVar18 + 1;
        lVar15 = lVar15 + 0x18;
      } while (uVar18 < *(uint *)(param_1 + 1));
    }
    if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_68) {
      return lVar12;
    }
  }
  else {
LAB_10018d528:
    FUN_100190250();
LAB_10018d52c:
    FUN_1001902e8();
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x10018d53c | FUN_10018d53c */

long FUN_10018d53c(long param_1,size_t *param_2,undefined8 *param_3)

{
  byte *pbVar1;
  ulong uVar2;
  char *pcVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  size_t sVar9;
  uint uVar10;
  size_t sVar11;
  undefined1 local_4c [9];
  undefined1 auStack_43 [11];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar2 = (ulong)*(uint *)(param_1 + 8);
  FUN_10018f4c4(uVar2,local_4c);
  switch(*(undefined4 *)(param_1 + 0x10)) {
  case 0:
  case 0xd:
    uVar10 = (uint)*param_2;
    pbVar1 = local_4c + uVar2;
    if ((int)uVar10 < 0) {
      *pbVar1 = (byte)uVar10 | 0x80;
      local_4c[uVar2 + 1] = (byte)(uVar10 >> 7) | 0x80;
      local_4c[uVar2 + 2] = (byte)(uVar10 >> 0xe) | 0x80;
      local_4c[uVar2 + 3] = (byte)(uVar10 >> 0x15) | 0x80;
      local_4c[uVar2 + 4] = (char)((int)uVar10 >> 0x1c);
      *(undefined4 *)(local_4c + uVar2 + 5) = 0xffffffff;
      uVar7 = 10;
      auStack_43[uVar2] = 1;
    }
    else {
      if (uVar10 < 0x80) {
        uVar6 = 0;
        uVar5 = uVar10;
      }
      else {
        *pbVar1 = (byte)uVar10 | 0x80;
        uVar5 = uVar10 >> 7;
        if (uVar10 < 0x4000) {
          uVar6 = 1;
        }
        else {
          local_4c[uVar2 + 1] = (byte)uVar5 | 0x80;
          uVar5 = uVar10 >> 0xe;
          if (uVar10 < 0x200000) {
            uVar6 = 2;
          }
          else {
            local_4c[uVar2 + 2] = (byte)uVar5 | 0x80;
            uVar5 = uVar10 >> 0x15;
            if (uVar10 >> 0x1c == 0) {
              uVar6 = 3;
            }
            else {
              local_4c[uVar2 + 3] = (byte)uVar5 | 0x80;
              uVar6 = 4;
              uVar5 = uVar10 >> 0x1c;
            }
          }
        }
      }
      uVar7 = (ulong)(uVar6 + 1);
      pbVar1[uVar6] = (byte)uVar5;
    }
    lVar8 = uVar7 + uVar2;
    break;
  case 1:
    uVar10 = (uint)*param_2 << 1 ^ (int)(uint)*param_2 >> 0x1f;
    goto LAB_10018d79c;
  case 2:
  case 7:
  case 10:
    local_4c[0] = local_4c[0] | 5;
    *(uint *)(local_4c + uVar2) = (uint)*param_2;
    lVar8 = uVar2 + 4;
    break;
  case 3:
  case 8:
    sVar9 = *param_2;
    goto LAB_10018d784;
  case 4:
    sVar9 = *param_2 << 1 ^ (long)*param_2 >> 0x3f;
LAB_10018d784:
    FUN_10018f558(sVar9,local_4c + uVar2);
    lVar8 = sVar9 + uVar2;
    break;
  case 5:
  case 9:
  case 0xb:
    local_4c[0] = local_4c[0] | 1;
    *(size_t *)(local_4c + uVar2) = *param_2;
    lVar8 = uVar2 + 8;
    break;
  case 6:
    uVar10 = (uint)*param_2;
LAB_10018d79c:
    if (uVar10 < 0x80) {
      uVar6 = 0;
      uVar5 = uVar10;
    }
    else {
      local_4c[uVar2] = (byte)uVar10 | 0x80;
      uVar5 = uVar10 >> 7;
      if (uVar10 < 0x4000) {
        uVar6 = 1;
      }
      else {
        local_4c[uVar2 + 1] = (byte)uVar5 | 0x80;
        uVar5 = uVar10 >> 0xe;
        if (uVar10 < 0x200000) {
          uVar6 = 2;
        }
        else {
          local_4c[uVar2 + 2] = (byte)uVar5 | 0x80;
          uVar5 = uVar10 >> 0x15;
          if (uVar10 >> 0x1c == 0) {
            uVar6 = 3;
          }
          else {
            local_4c[uVar2 + 3] = (byte)uVar5 | 0x80;
            uVar6 = 4;
            uVar5 = uVar10 >> 0x1c;
          }
        }
      }
    }
    (local_4c + uVar2)[uVar6] = (byte)uVar5;
    lVar8 = uVar2 + (uVar6 + 1);
    break;
  case 0xc:
    local_4c[uVar2] = (uint)*param_2 != 0;
LAB_10018d8f0:
    lVar8 = uVar2 + 1;
    break;
  case 0xe:
    pcVar3 = (char *)*param_2;
    if (pcVar3 == (char *)0x0) {
      sVar11 = 0;
      uVar10 = 0;
      uVar5 = 0;
      local_4c[0] = local_4c[0] | 2;
    }
    else {
      sVar11 = _strlen(pcVar3);
      local_4c[0] = local_4c[0] | 2;
      uVar6 = (uint)sVar11;
      if (uVar6 < 0x80) {
        uVar5 = 0;
        uVar10 = uVar6;
      }
      else {
        local_4c[uVar2] = (byte)sVar11 | 0x80;
        uVar7 = sVar11 >> 7 & 0x1ffffff;
        uVar10 = (uint)uVar7;
        if (uVar6 < 0x4000) {
          uVar5 = 1;
        }
        else {
          local_4c[uVar2 + 1] = (byte)uVar7 | 0x80;
          uVar10 = uVar6 >> 0xe;
          if (uVar6 < 0x200000) {
            uVar5 = 2;
          }
          else {
            local_4c[uVar2 + 2] = (byte)uVar10 | 0x80;
            uVar10 = uVar6 >> 0x15;
            if (uVar6 >> 0x1c == 0) {
              uVar5 = 3;
            }
            else {
              local_4c[uVar2 + 3] = (byte)uVar10 | 0x80;
              uVar5 = 4;
              uVar10 = uVar6 >> 0x1c;
            }
          }
        }
      }
    }
    local_4c[uVar5 + uVar2] = (char)uVar10;
    lVar8 = uVar2 + (uVar5 + 1);
    (*(code *)*param_3)(param_3,lVar8,local_4c);
    pcVar4 = (code *)*param_3;
    goto LAB_10018da8c;
  case 0xf:
    sVar11 = *param_2;
    local_4c[0] = local_4c[0] | 2;
    uVar10 = (uint)sVar11;
    if (uVar10 < 0x80) {
      uVar5 = 0;
    }
    else {
      local_4c[uVar2] = (byte)sVar11 | 0x80;
      if (uVar10 < 0x4000) {
        uVar5 = 1;
        uVar10 = uVar10 >> 7;
      }
      else {
        local_4c[uVar2 + 1] = (byte)(uVar10 >> 7) | 0x80;
        if (uVar10 < 0x200000) {
          uVar5 = 2;
          uVar10 = uVar10 >> 0xe;
        }
        else {
          local_4c[uVar2 + 2] = (byte)(uVar10 >> 0xe) | 0x80;
          if (uVar10 >> 0x1c == 0) {
            uVar5 = 3;
            uVar10 = uVar10 >> 0x15;
          }
          else {
            local_4c[uVar2 + 3] = (byte)(uVar10 >> 0x15) | 0x80;
            uVar5 = 4;
            uVar10 = uVar10 >> 0x1c;
          }
        }
      }
    }
    (local_4c + uVar2)[uVar5] = (byte)uVar10;
    lVar8 = uVar2 + (uVar5 + 1);
    (*(code *)*param_3)(param_3,lVar8,local_4c);
    pcVar4 = (code *)*param_3;
    pcVar3 = (char *)param_2[1];
LAB_10018da8c:
    (*pcVar4)(param_3,sVar11,pcVar3);
LAB_10018da90:
    lVar8 = lVar8 + sVar11;
    goto LAB_10018d9b0;
  case 0x10:
    sVar9 = *param_2;
    local_4c[0] = local_4c[0] | 2;
    if (sVar9 == 0) {
      local_4c[uVar2] = 0;
      goto LAB_10018d8f0;
    }
    sVar11 = sVar9;
    FUN_10018b7cc();
    uVar10 = (uint)sVar11;
    if (uVar10 < 0x80) {
      uVar5 = 0;
    }
    else {
      local_4c[uVar2] = (byte)sVar11 | 0x80;
      if (uVar10 < 0x4000) {
        uVar5 = 1;
        uVar10 = uVar10 >> 7;
      }
      else {
        local_4c[uVar2 + 1] = (byte)(uVar10 >> 7) | 0x80;
        if (uVar10 < 0x200000) {
          uVar5 = 2;
          uVar10 = uVar10 >> 0xe;
        }
        else {
          local_4c[uVar2 + 2] = (byte)(uVar10 >> 0xe) | 0x80;
          if (uVar10 >> 0x1c == 0) {
            uVar5 = 3;
            uVar10 = uVar10 >> 0x15;
          }
          else {
            local_4c[uVar2 + 3] = (byte)(uVar10 >> 0x15) | 0x80;
            uVar5 = 4;
            uVar10 = uVar10 >> 0x1c;
          }
        }
      }
    }
    (local_4c + uVar2)[uVar5] = (byte)uVar10;
    lVar8 = uVar2 + (uVar5 + 1);
    (*(code *)*param_3)(param_3,lVar8,local_4c);
    FUN_10018cbd8(sVar9,param_3);
    goto LAB_10018da90;
  default:
                    /* WARNING: Subroutine does not return */
    FUN_1001902f4();
  }
  (*(code *)*param_3)(param_3,lVar8,local_4c);
LAB_10018d9b0:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return lVar8;
}



/* Address: 0x10018daa0 | FUN_10018daa0 */

long * FUN_10018daa0(int *param_1,undefined **param_2,ulong param_3,byte *param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  undefined **ppuVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  byte bVar9;
  byte bVar10;
  bool bVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  undefined *puVar16;
  ulong uVar17;
  uint uVar18;
  long *plVar19;
  long lVar20;
  uint uVar21;
  int iVar22;
  ulong uVar23;
  undefined1 *puVar24;
  code *pcVar25;
  uint uVar26;
  ulong uVar27;
  long lVar28;
  ulong uVar29;
  byte *pbVar30;
  uint *puVar31;
  uint uVar32;
  long lVar33;
  byte *pbVar34;
  uint uVar35;
  undefined4 uVar36;
  undefined8 *puVar37;
  ulong uVar38;
  undefined4 *puVar39;
  size_t sVar40;
  undefined1 **ppuVar41;
  size_t sVar42;
  long lVar43;
  undefined8 uVar44;
  uint local_33c;
  long local_338 [2];
  undefined1 *local_328 [23];
  undefined1 auStack_270 [512];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  if (*param_1 != 0x28aaeef9) {
    FUN_100190318();
LAB_10018eb08:
    FUN_10019034c();
    goto LAB_10018eb0c;
  }
  lVar43 = *(long *)(param_1 + 0xe);
  ppuVar5 = &PTR_FUN_100fb3180;
  if (param_2 != (undefined **)0x0) {
    ppuVar5 = param_2;
  }
  plVar12 = (long *)ppuVar5[2];
  (*(code *)*ppuVar5)(plVar12,*(undefined8 *)(param_1 + 10));
  if (plVar12 != (long *)0x0) {
    local_328[0] = auStack_270;
    uVar2 = param_1[0xc] + 7;
    if (uVar2 < 0x88) {
      plVar13 = local_338;
LAB_10018db54:
      _bzero(plVar13,(ulong)(uVar2 >> 3));
      plVar14 = plVar12;
      if (*(code **)(param_1 + 0x16) == (code *)0x0) {
        _bzero(plVar12,*(size_t *)(param_1 + 10));
        *plVar12 = (long)param_1;
        if (param_1[0xc] != 0) {
          lVar20 = 0;
          uVar27 = 0;
          do {
            lVar33 = *(long *)(param_1 + 0xe) + lVar20;
            puVar37 = *(undefined8 **)(lVar33 + 0x28);
            if ((puVar37 != (undefined8 *)0x0) && (*(int *)(lVar33 + 0xc) != 2)) {
              lVar33 = *(long *)(param_1 + 0xe) + lVar20;
              uVar32 = *(uint *)(lVar33 + 0x10);
              if (uVar32 < 0x11) {
                uVar38 = (ulong)*(uint *)(lVar33 + 0x18);
                switch(uVar32) {
                default:
                  *(undefined4 *)((long)plVar12 + uVar38) = *(undefined4 *)puVar37;
                  break;
                case 3:
                case 4:
                case 5:
                case 8:
                case 9:
                case 0xb:
                  puVar37 = (undefined8 *)*puVar37;
                case 0xe:
                case 0x10:
                  *(undefined8 **)((long)plVar12 + uVar38) = puVar37;
                  break;
                case 0xf:
                  uVar44 = *puVar37;
                  ((undefined8 *)((long)plVar12 + uVar38))[1] = puVar37[1];
                  *(undefined8 *)((long)plVar12 + uVar38) = uVar44;
                }
              }
            }
            uVar27 = uVar27 + 1;
            lVar20 = lVar20 + 0x48;
          } while (uVar27 < (uint)param_1[0xc]);
        }
      }
      else {
        (**(code **)(param_1 + 0x16))();
      }
      uVar32 = 0;
      lVar20 = 0;
      plVar19 = (long *)0x0;
      local_33c = 0;
      do {
        if (param_3 == 0) {
          uVar27 = (ulong)(uint)param_1[0xc];
          if (param_1[0xc] == 0) goto LAB_10018e180;
          uVar38 = 0;
          uVar32 = 1;
          lVar43 = 0x5c;
          goto LAB_10018e0d0;
        }
        uVar27 = param_3;
        if (4 < param_3) {
          uVar27 = 5;
        }
        bVar9 = *param_4;
        if (bVar9 < 8) break;
        uVar18 = bVar9 >> 3 & 0xf;
        if ((char)bVar9 < '\0') {
          if (param_3 == 1) break;
          uVar21 = 4;
          uVar38 = 1;
          while (bVar10 = param_4[uVar38], (char)bVar10 < '\0') {
            uVar18 = (bVar10 & 0x7f) << (ulong)(uVar21 & 0x1f) | uVar18;
            uVar21 = uVar21 + 7;
            uVar38 = uVar38 + 1;
            if (uVar27 == uVar38) goto LAB_10018e9d4;
          }
          uVar18 = (uint)bVar10 << (ulong)(uVar21 & 0x1f) | uVar18;
          uVar27 = (ulong)((int)uVar38 + 1);
          if (lVar43 != 0) goto LAB_10018dc14;
LAB_10018dc34:
          uVar21 = param_1[0x12];
          if (uVar21 != 0) {
            lVar33 = *(long *)(param_1 + 0x14);
            if (uVar21 == 1) {
              uVar26 = 0;
            }
            else {
              uVar26 = 0;
              do {
                uVar35 = uVar26 + (uVar21 >> 1);
                piVar1 = (int *)(lVar33 + (ulong)uVar35 * 8);
                iVar22 = *piVar1;
                if ((int)uVar18 < iVar22) {
                  uVar21 = uVar21 >> 1;
                }
                else {
                  iVar6 = piVar1[1];
                  if ((int)uVar18 <
                      (*(int *)(lVar33 + (ulong)(uVar35 + 1) * 8 + 4) + iVar22) - iVar6) {
                    uVar21 = (uVar18 - iVar22) + iVar6;
                    goto joined_r0x00010018dd30;
                  }
                  uVar21 = uVar26 + uVar21 + ~uVar35;
                  uVar26 = uVar35 + 1;
                }
              } while (1 < uVar21);
              if (uVar21 == 0) goto LAB_10018dd34;
            }
            piVar1 = (int *)(lVar33 + (ulong)uVar26 * 8);
            iVar22 = *piVar1;
            if ((iVar22 <= (int)uVar18) &&
               (iVar6 = piVar1[1],
               (int)uVar18 < (iVar22 - iVar6) + *(int *)(lVar33 + (ulong)(uVar26 + 1) * 8 + 4))) {
              uVar21 = (iVar6 + uVar18) - iVar22;
joined_r0x00010018dd30:
              if (-1 < (int)uVar21) {
                uVar32 = uVar21;
                if (*(long *)(param_1 + 0xe) != 0) {
                  lVar33 = *(long *)(param_1 + 0xe) + (ulong)uVar21 * 0x48;
                  goto LAB_10018dc24;
                }
                lVar43 = 0;
                lVar33 = 0;
                bVar11 = true;
                goto LAB_10018dd40;
              }
            }
          }
LAB_10018dd34:
          lVar33 = 0;
          lVar20 = lVar20 + 1;
          bVar11 = true;
        }
        else {
          uVar27 = 1;
          if (lVar43 == 0) goto LAB_10018dc34;
LAB_10018dc14:
          lVar33 = lVar43;
          if (*(uint *)(lVar43 + 8) != uVar18) goto LAB_10018dc34;
LAB_10018dc24:
          if (*(int *)(lVar33 + 0xc) == 0) {
            *(byte *)((long)plVar13 + (ulong)(uVar32 >> 3)) =
                 *(byte *)((long)plVar13 + (ulong)(uVar32 >> 3)) | (byte)(1 << (ulong)(uVar32 & 7));
          }
          bVar11 = false;
          lVar43 = lVar33;
        }
LAB_10018dd40:
        bVar10 = bVar9 & 7;
        param_4 = param_4 + uVar27;
        param_3 = param_3 - uVar27;
        if (bVar10 < 2) {
          if ((bVar9 & 7) == 0) {
            uVar27 = param_3;
            if (9 < param_3) {
              uVar27 = 10;
            }
            if (param_3 == 0) {
              lVar28 = 0;
            }
            else {
              lVar28 = 0;
              while ((char)param_4[lVar28] < '\0') {
                lVar28 = lVar28 + 1;
                if ((int)uVar27 == (int)lVar28) goto LAB_10018e9d4;
              }
            }
            if ((int)lVar28 == (int)uVar27) break;
            uVar27 = 0;
            uVar38 = (ulong)((int)lVar28 + 1);
          }
          else {
            if ((bVar10 != 1) || (param_3 < 8)) break;
            uVar27 = 0;
            uVar38 = 8;
          }
        }
        else if (bVar10 == 2) {
          uVar27 = param_3;
          if (4 < param_3) {
            uVar27 = 5;
          }
          if (param_3 == 0) break;
          uVar23 = 0;
          uVar29 = 0;
          uVar38 = 0;
          while (uVar38 = ((ulong)param_4[uVar23] & 0x7f) << (uVar29 & 0x3f) | uVar38,
                (char)param_4[uVar23] < '\0') {
            uVar29 = uVar29 + 7;
            uVar23 = uVar23 + 1;
            if (uVar27 == uVar23) goto LAB_10018e9d4;
          }
          if ((uVar27 == uVar23) || (uVar38 >> 0x1f != 0)) break;
          uVar38 = uVar38 + (uVar23 + 1 & 0xffffffff);
          if (param_3 <= uVar38 - 1) break;
          uVar27 = uVar23 + 1 & 0xff;
        }
        else {
          if ((bVar10 != 5) || (param_3 < 4)) break;
          uVar27 = 0;
          uVar38 = 4;
        }
        if ((long *)(1L << ((ulong)(local_33c + 4) & 0x3f)) == plVar19) {
          if (local_33c == 0x16) {
            local_33c = 0x16;
            break;
          }
          uVar21 = local_33c + 1;
          plVar14 = (long *)ppuVar5[2];
          (*(code *)*ppuVar5)(plVar14,0x20L << ((ulong)(local_33c + 5) & 0x3f));
          local_328[uVar21] = (undefined1 *)plVar14;
          local_33c = uVar21;
          if (plVar14 != (long *)0x0) {
            plVar19 = (long *)0x0;
            goto LAB_10018ded4;
          }
          bVar11 = false;
          plVar19 = (long *)0x0;
        }
        else {
          plVar14 = (long *)local_328[local_33c];
LAB_10018ded4:
          puVar31 = (uint *)(plVar14 + (long)plVar19 * 4);
          *puVar31 = uVar18;
          *(byte *)(puVar31 + 1) = bVar10;
          *(char *)((long)puVar31 + 5) = (char)uVar27;
          *(long *)(puVar31 + 2) = lVar33;
          *(ulong *)(puVar31 + 4) = uVar38;
          *(byte **)(puVar31 + 6) = param_4;
          if ((!bVar11) && (*(int *)(lVar33 + 0xc) == 2)) {
            if ((bVar10 == 2) &&
               ((uVar18 = *(uint *)(lVar33 + 0x10), (*(byte *)(lVar33 + 0x30) & 1) != 0 ||
                (2 < uVar18 - 0xe)))) {
              if (0xd < uVar18) break;
              uVar29 = uVar38 - uVar27;
              switch(uVar18) {
              default:
                if (uVar29 != 0) {
                  uVar29 = 0;
                  lVar28 = uVar27 - uVar38;
                  pbVar34 = param_4 + uVar27;
                  do {
                    uVar29 = uVar29 + (*pbVar34 >> 7 ^ 1);
                    bVar11 = lVar28 != -1;
                    lVar28 = lVar28 + 1;
                    pbVar34 = pbVar34 + 1;
                  } while (bVar11);
                }
                break;
              case 2:
              case 7:
              case 10:
                if ((uVar29 & 3) != 0) goto LAB_10018e9d4;
                uVar29 = uVar29 >> 2;
                break;
              case 5:
              case 9:
              case 0xb:
                if ((uVar29 & 7) != 0) goto LAB_10018e9d4;
                uVar29 = uVar29 >> 3;
                break;
              case 0xc:
                break;
              }
            }
            else {
              uVar29 = 1;
            }
            *(ulong *)((long)plVar12 + (ulong)*(uint *)(lVar33 + 0x14)) =
                 *(long *)((long)plVar12 + (ulong)*(uint *)(lVar33 + 0x14)) + uVar29;
          }
          plVar19 = (long *)(ulong)((int)plVar19 + 1);
          param_4 = param_4 + uVar38;
          param_3 = param_3 - uVar38;
          bVar11 = true;
        }
      } while (bVar11);
LAB_10018e9d4:
      (*(code *)ppuVar5[1])(ppuVar5[2],plVar12);
      if (local_33c != 0) {
        uVar27 = 1;
        do {
          if (local_328[uVar27] != (undefined1 *)0x0) {
            (*(code *)ppuVar5[1])(ppuVar5[2]);
          }
          uVar32 = (int)uVar27 + 1;
          uVar27 = (ulong)uVar32;
        } while (uVar32 <= local_33c);
      }
      goto LAB_10018ea0c;
    }
    plVar13 = (long *)ppuVar5[2];
    (*(code *)*ppuVar5)(plVar13,(ulong)(uVar2 >> 3));
    if (plVar13 != (long *)0x0) goto LAB_10018db54;
    pcVar25 = (code *)ppuVar5[1];
    puVar16 = ppuVar5[2];
LAB_10018ea20:
    (*pcVar25)(puVar16,plVar12);
  }
LAB_10018ea24:
  plVar12 = (long *)0x0;
  goto LAB_10018ea28;
switchD_10018e368_caseD_2:
  plVar14 = _memcpy(plVar14,pbVar34,(uVar23 >> lVar20) * lVar43);
  lVar20 = *(long *)((long)plVar12 + uVar29) + (uVar23 >> lVar20);
  goto LAB_10018e964;
LAB_10018e0d0:
  do {
    lVar33 = *(long *)(param_1 + 0xe);
    iVar22 = *(int *)(lVar33 + lVar43 + -0x50);
    if (iVar22 == 0) {
      if ((*(long *)(lVar33 + lVar43 + -0x34) == 0) &&
         ((*(byte *)((long)plVar13 + (uVar38 >> 3)) >> (uVar38 & 7) & 1) == 0)) {
        iVar22 = (uint)uVar27 - uVar32;
        if (uVar32 <= (uint)uVar27 && iVar22 != 0) {
          puVar31 = (uint *)(lVar33 + lVar43);
          do {
            if (puVar31[-2] == 2) {
              *(undefined8 *)((long)plVar12 + (ulong)*puVar31) = 0;
            }
            puVar31 = puVar31 + 0x12;
            iVar22 = iVar22 + -1;
          } while (iVar22 != 0);
        }
        goto LAB_10018eac8;
      }
    }
    else if (iVar22 == 2) {
      uVar18 = *(uint *)(lVar33 + lVar43 + -0x4c);
      if (0x10 < uVar18) {
        FUN_100190340();
LAB_10018eb14:
        FUN_1001903bc();
LAB_10018eb18:
        FUN_1001903a4();
switchD_10018e320_caseD_f:
        FUN_100190374();
switchD_10018e4d8_default:
        FUN_1001903b0();
LAB_10018eb24:
        FUN_100190398();
                    /* WARNING: Could not recover jumptable at 0x00010018eb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)plVar14[0xb])(plVar19);
        return plVar19;
      }
      uVar23 = (ulong)*(uint *)(lVar33 + lVar43 + -0x48);
      uVar29 = *(ulong *)((long)plVar12 + uVar23);
      if (uVar29 != 0) {
        lVar28 = *(long *)(&DAT_100c30e88 + (ulong)uVar18 * 8);
        *(undefined8 *)((long)plVar12 + uVar23) = 0;
        if (*plVar12 == 0) goto LAB_10018eb08;
        plVar14 = (long *)ppuVar5[2];
        (*(code *)*ppuVar5)(plVar14,(uVar29 & 0xffffffff) * lVar28);
        if (plVar14 == (long *)0x0) {
          iVar22 = param_1[0xc] - uVar32;
          if (uVar32 <= (uint)param_1[0xc] && iVar22 != 0) {
            puVar31 = (uint *)(*(long *)(param_1 + 0xe) + lVar43);
            do {
              if (puVar31[-2] == 2) {
                *(undefined8 *)((long)plVar12 + (ulong)*puVar31) = 0;
              }
              puVar31 = puVar31 + 0x12;
              iVar22 = iVar22 + -1;
            } while (iVar22 != 0);
          }
          goto LAB_10018eac8;
        }
        *(long **)((long)plVar12 + (ulong)*(uint *)(lVar33 + lVar43 + -0x44)) = plVar14;
        uVar27 = (ulong)(uint)param_1[0xc];
      }
    }
    uVar38 = uVar38 + 1;
    lVar43 = lVar43 + 0x48;
    uVar32 = uVar32 + 1;
  } while (uVar38 < uVar27);
LAB_10018e180:
  plVar15 = plVar14;
  if (lVar20 != 0) {
    plVar15 = (long *)ppuVar5[2];
    (*(code *)*ppuVar5)(plVar15,lVar20 * 0x18);
    plVar12[2] = (long)plVar15;
    if (plVar15 == (long *)0x0) {
LAB_10018eac8:
      FUN_10018eb34(plVar12,ppuVar5);
      if (local_33c != 0) {
        uVar27 = 1;
        do {
          if (local_328[uVar27] != (undefined1 *)0x0) {
            (*(code *)ppuVar5[1])(ppuVar5[2]);
          }
          uVar32 = (int)uVar27 + 1;
          uVar27 = (ulong)uVar32;
        } while (uVar32 <= local_33c);
      }
LAB_10018ea0c:
      if (0x87 < uVar2) {
        pcVar25 = (code *)ppuVar5[1];
        puVar16 = ppuVar5[2];
        plVar12 = plVar13;
        goto LAB_10018ea20;
      }
      goto LAB_10018ea24;
    }
  }
  uVar32 = 0;
  do {
    uVar18 = (uint)plVar19;
    if (uVar32 != local_33c) {
      uVar18 = (uint)(1L << ((ulong)(uVar32 + 4) & 0x3f));
    }
    if (uVar18 != 0) {
      uVar27 = 0;
      puVar24 = local_328[uVar32];
      plVar14 = plVar15;
      do {
        plVar15 = (long *)(puVar24 + uVar27 * 0x20);
        lVar43 = plVar15[1];
        if (lVar43 == 0) {
          uVar21 = *(uint *)(plVar12 + 1);
          *(uint *)(plVar12 + 1) = uVar21 + 1;
          puVar39 = (undefined4 *)(plVar12[2] + (ulong)uVar21 * 0x18);
          bVar9 = *(byte *)((long)plVar15 + 4);
          *puVar39 = (int)*plVar15;
          puVar39[1] = (uint)bVar9;
          *(long *)(puVar39 + 2) = plVar15[2];
          puVar16 = ppuVar5[2];
          (*(code *)*ppuVar5)();
          *(undefined **)(puVar39 + 4) = puVar16;
          if (puVar16 != (undefined *)0x0) {
            plVar15 = _memcpy(puVar16,(void *)plVar15[3],*(size_t *)(puVar39 + 2));
            goto LAB_10018e594;
          }
          goto LAB_10018eac8;
        }
        plVar4 = (long *)((long)plVar12 + (ulong)*(uint *)(lVar43 + 0x18));
        iVar22 = *(int *)(lVar43 + 0xc);
        if (iVar22 < 2) {
          if (iVar22 == 0) {
            FUN_10018f66c(plVar15,plVar4,ppuVar5,1);
            if ((int)plVar15 != 0) goto LAB_10018e594;
            goto LAB_10018eac8;
          }
          if (iVar22 != 1) goto LAB_10018eb14;
LAB_10018e278:
          if ((*(byte *)(lVar43 + 0x30) >> 2 & 1) == 0) {
            plVar14 = plVar15;
            FUN_10018f66c(plVar15,plVar4,ppuVar5,1);
            if ((int)plVar14 != 0) {
              plVar4 = plVar15 + 1;
              plVar15 = plVar14;
              if (*(uint *)(*plVar4 + 0x14) != 0) {
                *(undefined4 *)((long)plVar12 + (ulong)*(uint *)(*plVar4 + 0x14)) = 1;
              }
              goto LAB_10018e594;
            }
            goto LAB_10018eac8;
          }
          uVar21 = *(uint *)(lVar43 + 0x14);
          iVar22 = *(int *)((long)plVar12 + (ulong)uVar21);
          if (iVar22 != 0) {
            lVar43 = *plVar12;
            uVar26 = *(uint *)(lVar43 + 0x48);
            lVar20 = *(long *)(lVar43 + 0x50);
            if (uVar26 == 1) {
              uVar35 = 0;
            }
            else {
              if (uVar26 == 0) goto LAB_10018eac8;
              uVar35 = 0;
              do {
                uVar3 = uVar35 + (uVar26 >> 1);
                piVar1 = (int *)(lVar20 + (ulong)uVar3 * 8);
                iVar6 = *piVar1;
                if (iVar22 < iVar6) {
                  uVar26 = uVar26 >> 1;
                }
                else {
                  uVar7 = *(uint *)(lVar20 + (ulong)(uVar3 + 1) * 8 + 4);
                  plVar14 = (long *)(ulong)uVar7;
                  iVar8 = piVar1[1];
                  if (iVar22 < (int)((uVar7 + iVar6) - iVar8)) {
                    uVar26 = (iVar22 - iVar6) + iVar8;
                    goto joined_r0x00010018e5a8;
                  }
                  uVar26 = uVar35 + uVar26 + ~uVar3;
                  uVar35 = uVar3 + 1;
                }
              } while (1 < uVar26);
              if (uVar26 == 0) goto LAB_10018eac8;
            }
            piVar1 = (int *)(lVar20 + (ulong)uVar35 * 8);
            iVar6 = *piVar1;
            if ((iVar22 < iVar6) ||
               (iVar8 = piVar1[1],
               (iVar6 - iVar8) + *(int *)(lVar20 + (ulong)(uVar35 + 1) * 8 + 4) <= iVar22))
            goto LAB_10018eac8;
            uVar26 = (iVar8 + iVar22) - iVar6;
joined_r0x00010018e5a8:
            if ((int)uVar26 < 0) goto LAB_10018eac8;
            lVar43 = *(long *)(lVar43 + 0x38) + (ulong)uVar26 * 0x48;
            iVar22 = *(int *)(lVar43 + 0x10);
            sVar40 = 4;
            sVar42 = 0x10;
            switch(iVar22) {
            case 3:
            case 4:
            case 5:
            case 8:
            case 9:
            case 0xb:
            case 0xe:
            case 0x10:
              sVar40 = 8;
            case 0:
            case 1:
            case 2:
            case 6:
            case 7:
            case 10:
            case 0xc:
            case 0xd:
              if (iVar22 == 0x10) {
                lVar20 = *plVar4;
                if ((lVar20 != 0) && (lVar20 != *(long *)(lVar43 + 0x28))) {
                  FUN_10018eb34(lVar20,ppuVar5);
                }
              }
              else {
                sVar42 = sVar40;
                if (iVar22 == 0xf) {
switchD_10018e4d8_caseD_f:
                  sVar40 = sVar42;
                  if ((plVar4[1] != 0) &&
                     ((*(long *)(lVar43 + 0x28) == 0 ||
                      (plVar4[1] != *(long *)(*(long *)(lVar43 + 0x28) + 8))))) {
                    (*(code *)ppuVar5[1])(ppuVar5[2]);
                  }
                }
                else if (((iVar22 == 0xe) && (*plVar4 != 0)) &&
                        (*plVar4 != *(long *)(lVar43 + 0x28))) {
                  (*(code *)ppuVar5[1])(ppuVar5[2]);
                }
              }
              _bzero(plVar4,sVar40);
              break;
            case 0xf:
              goto switchD_10018e4d8_caseD_f;
            default:
              goto switchD_10018e4d8_default;
            }
          }
          plVar14 = plVar15;
          FUN_10018f66c(plVar15,plVar4,ppuVar5,1);
          if ((int)plVar14 == 0) goto LAB_10018eac8;
          *(int *)((long)plVar12 + (ulong)uVar21) = (int)*plVar15;
          plVar15 = plVar14;
        }
        else {
          if (iVar22 != 2) {
            if (iVar22 == 3) goto LAB_10018e278;
            goto LAB_10018eb14;
          }
          if (*(char *)((long)plVar15 + 4) != '\x02') {
            uVar38 = (ulong)*(uint *)(lVar43 + 0x10);
LAB_10018e418:
            if (uVar38 < 0x11) {
              uVar29 = (ulong)*(uint *)(lVar43 + 0x14);
              FUN_10018f66c(plVar15,*plVar4 + *(long *)((long)plVar12 + uVar29) *
                                              *(long *)(&DAT_100c30e88 + uVar38 * 8),ppuVar5,0);
              if ((int)plVar15 != 0) {
                *(long *)((long)plVar12 + uVar29) = *(long *)((long)plVar12 + uVar29) + 1;
                goto LAB_10018e594;
              }
              goto LAB_10018eac8;
            }
            goto LAB_10018eb18;
          }
          uVar38 = (ulong)*(uint *)(lVar43 + 0x10);
          if (((*(byte *)(lVar43 + 0x30) & 1) == 0) && (uVar38 - 0xe < 3)) goto LAB_10018e418;
          if (0x10 < uVar38) goto LAB_10018eb24;
          uVar29 = (ulong)*(uint *)(lVar43 + 0x14);
          lVar43 = 4;
          switch(uVar38) {
          case 3:
          case 4:
          case 5:
          case 8:
          case 9:
          case 0xb:
          case 0xe:
          case 0x10:
            lVar43 = 8;
          default:
            if (0xd < uVar38) goto switchD_10018e320_caseD_f;
            lVar33 = *(long *)((long)plVar12 + uVar29);
            plVar14 = (long *)(*plVar4 + lVar33 * lVar43);
            pbVar34 = (byte *)(plVar15[3] + (ulong)*(byte *)((long)plVar15 + 5));
            uVar23 = plVar15[2] - (ulong)*(byte *)((long)plVar15 + 5);
            lVar20 = 2;
            switch(uVar38) {
            case 0:
            case 0xd:
              if (uVar23 == 0) {
LAB_10018e95c:
                lVar20 = 0;
              }
              else {
                lVar20 = 0;
                do {
                  uVar26 = (uint)uVar23;
                  uVar21 = uVar26;
                  if (9 < uVar26) {
                    uVar21 = 10;
                  }
                  if (uVar26 == 0) {
                    uVar38 = 0;
                  }
                  else {
                    uVar38 = 0;
                    while ((char)pbVar34[uVar38] < '\0') {
                      uVar38 = uVar38 + 1;
                      if (uVar21 == uVar38) goto LAB_10018eac8;
                    }
                  }
                  uVar35 = (uint)uVar38;
                  uVar26 = uVar35 + 1;
                  if ((uVar35 == uVar21) || (0xfffffffe < uVar35)) goto LAB_10018eac8;
                  uVar21 = *pbVar34 & 0x7f;
                  if (((1 < uVar26) &&
                      ((uVar21 = uVar21 | (pbVar34[1] & 0x7f) << 7, uVar26 != 2 &&
                       (uVar21 = uVar21 | (pbVar34[2] & 0x7f) << 0xe, 3 < uVar26)))) &&
                     (uVar21 = uVar21 | (pbVar34[3] & 0x7f) << 0x15, uVar26 != 4)) {
                    uVar21 = uVar21 | (uint)pbVar34[4] << 0x1c;
                  }
                  *(uint *)((long)plVar14 + lVar20 * 4) = uVar21;
                  lVar20 = lVar20 + 1;
                  pbVar34 = pbVar34 + uVar26;
                  uVar23 = uVar23 - uVar26;
                } while (uVar23 != 0);
              }
              break;
            case 1:
              if (uVar23 == 0) goto LAB_10018e95c;
              lVar43 = 0;
              do {
                uVar26 = (uint)uVar23;
                uVar21 = uVar26;
                if (9 < uVar26) {
                  uVar21 = 10;
                }
                if (uVar26 == 0) {
                  uVar38 = 0;
                }
                else {
                  uVar38 = 0;
                  while ((char)pbVar34[uVar38] < '\0') {
                    uVar38 = uVar38 + 1;
                    if (uVar21 == uVar38) goto LAB_10018eac8;
                  }
                }
                uVar35 = (uint)uVar38;
                uVar26 = uVar35 + 1;
                if ((uVar35 == uVar21) || (0xfffffffe < uVar35)) goto LAB_10018eac8;
                uVar21 = *pbVar34 & 0x7f;
                if ((1 < uVar26) &&
                   (((uVar21 = uVar21 | (pbVar34[1] & 0x7f) << 7, uVar26 != 2 &&
                     (uVar21 = uVar21 | (pbVar34[2] & 0x7f) << 0xe, 3 < uVar26)) &&
                    (uVar21 = uVar21 | (pbVar34[3] & 0x7f) << 0x15, uVar26 != 4)))) {
                  uVar21 = uVar21 | (uint)pbVar34[4] << 0x1c;
                }
                lVar20 = lVar43 + 1;
                *(uint *)((long)plVar14 + lVar43 * 4) = -(uVar21 & 1) ^ uVar21 >> 1;
                pbVar34 = pbVar34 + uVar26;
                uVar23 = uVar23 - uVar26;
                lVar43 = lVar20;
              } while (uVar23 != 0);
              break;
            default:
              goto switchD_10018e368_caseD_2;
            case 3:
            case 8:
              if (uVar23 == 0) goto LAB_10018e95c;
              lVar20 = 0;
              do {
                uVar26 = (uint)uVar23;
                uVar21 = uVar26;
                if (9 < uVar26) {
                  uVar21 = 10;
                }
                if (uVar26 == 0) {
                  uVar38 = 0;
                }
                else {
                  uVar38 = 0;
                  while ((char)pbVar34[uVar38] < '\0') {
                    uVar38 = uVar38 + 1;
                    if (uVar21 == uVar38) goto LAB_10018eac8;
                  }
                }
                uVar26 = (uint)uVar38;
                uVar38 = (ulong)(uVar26 + 1);
                if ((uVar26 == uVar21) || (0xfffffffe < uVar26)) goto LAB_10018eac8;
                uVar17 = uVar38;
                FUN_10018f950(uVar38,pbVar34);
                plVar14[lVar20] = uVar17;
                lVar20 = lVar20 + 1;
                pbVar34 = pbVar34 + uVar38;
                uVar23 = uVar23 - uVar38;
              } while (uVar23 != 0);
              break;
            case 4:
              if (uVar23 == 0) goto LAB_10018e95c;
              lVar43 = 0;
              do {
                uVar26 = (uint)uVar23;
                uVar21 = uVar26;
                if (9 < uVar26) {
                  uVar21 = 10;
                }
                if (uVar26 == 0) {
                  uVar38 = 0;
                }
                else {
                  uVar38 = 0;
                  while ((char)pbVar34[uVar38] < '\0') {
                    uVar38 = uVar38 + 1;
                    if (uVar21 == uVar38) goto LAB_10018eac8;
                  }
                }
                uVar26 = (uint)uVar38;
                uVar38 = (ulong)(uVar26 + 1);
                if ((uVar26 == uVar21) || (0xfffffffe < uVar26)) goto LAB_10018eac8;
                uVar17 = uVar38;
                FUN_10018f950(uVar38,pbVar34);
                lVar20 = lVar43 + 1;
                plVar14[lVar43] = -(uVar17 & 1) ^ uVar17 >> 1;
                pbVar34 = pbVar34 + uVar38;
                uVar23 = uVar23 - uVar38;
                lVar43 = lVar20;
              } while (uVar23 != 0);
              break;
            case 5:
            case 9:
            case 0xb:
              lVar20 = 3;
              goto switchD_10018e368_caseD_2;
            case 6:
              if (uVar23 == 0) goto LAB_10018e95c;
              lVar20 = 0;
              do {
                uVar26 = (uint)uVar23;
                uVar21 = uVar26;
                if (9 < uVar26) {
                  uVar21 = 10;
                }
                if (uVar26 == 0) {
                  uVar38 = 0;
                }
                else {
                  uVar38 = 0;
                  while ((char)pbVar34[uVar38] < '\0') {
                    uVar38 = uVar38 + 1;
                    if (uVar21 == uVar38) goto LAB_10018eac8;
                  }
                }
                uVar35 = (uint)uVar38;
                uVar26 = uVar35 + 1;
                if ((uVar35 == uVar21) || (0xfffffffe < uVar35)) goto LAB_10018eac8;
                uVar21 = *pbVar34 & 0x7f;
                if ((1 < uVar26) &&
                   (((uVar21 = uVar21 | (pbVar34[1] & 0x7f) << 7, uVar26 != 2 &&
                     (uVar21 = uVar21 | (pbVar34[2] & 0x7f) << 0xe, 3 < uVar26)) &&
                    (uVar21 = uVar21 | (pbVar34[3] & 0x7f) << 0x15, uVar26 != 4)))) {
                  uVar21 = uVar21 | (uint)pbVar34[4] << 0x1c;
                }
                *(uint *)((long)plVar14 + lVar20 * 4) = uVar21;
                lVar20 = lVar20 + 1;
                pbVar34 = pbVar34 + uVar26;
                uVar23 = uVar23 - uVar26;
              } while (uVar23 != 0);
              break;
            case 0xc:
              if (uVar23 == 0) goto LAB_10018e95c;
              lVar43 = 0;
              do {
                uVar26 = (uint)uVar23;
                uVar21 = uVar26;
                if (9 < uVar26) {
                  uVar21 = 10;
                }
                if (uVar26 == 0) {
                  uVar38 = 0;
                }
                else {
                  uVar38 = 0;
                  while ((char)pbVar34[uVar38] < '\0') {
                    uVar38 = uVar38 + 1;
                    if (uVar21 == uVar38) goto LAB_10018eac8;
                  }
                }
                uVar26 = (uint)uVar38;
                uVar38 = (ulong)(uVar26 + 1);
                if ((uVar26 == uVar21) || (pbVar30 = pbVar34, uVar17 = uVar38, 0xfffffffe < uVar26))
                goto LAB_10018eac8;
                do {
                  if ((*pbVar30 & 0x7f) != 0) {
                    uVar36 = 1;
                    break;
                  }
                  uVar17 = uVar17 - 1;
                  uVar36 = 0;
                  pbVar30 = pbVar30 + 1;
                } while (uVar17 != 0);
                lVar20 = lVar43 + 1;
                *(undefined4 *)((long)plVar14 + lVar43 * 4) = uVar36;
                pbVar34 = pbVar34 + uVar38;
                uVar23 = uVar23 - uVar38;
                lVar43 = lVar20;
              } while (uVar23 != 0);
            }
            lVar20 = lVar20 + lVar33;
LAB_10018e964:
            *(long *)((long)plVar12 + uVar29) = lVar20;
            plVar15 = plVar14;
            break;
          case 0xf:
            goto switchD_10018e320_caseD_f;
          }
        }
LAB_10018e594:
        uVar27 = uVar27 + 1;
        plVar14 = plVar15;
      } while (uVar27 != uVar18);
    }
    uVar32 = uVar32 + 1;
  } while (uVar32 <= local_33c);
  if (local_33c != 0) {
    uVar27 = (ulong)local_33c;
    ppuVar41 = local_328;
    do {
      ppuVar41 = ppuVar41 + 1;
      if (*ppuVar41 != (undefined1 *)0x0) {
        (*(code *)ppuVar5[1])(ppuVar5[2]);
      }
      uVar27 = uVar27 - 1;
    } while (uVar27 != 0);
  }
  if (0x87 < uVar2) {
    (*(code *)ppuVar5[1])(ppuVar5[2],plVar13);
  }
LAB_10018ea28:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_70) {
    return plVar12;
  }
LAB_10018eb0c:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x10018eb28 | FUN_10018eb28 */

void FUN_10018eb28(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010018eb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x58))(param_2);
  return;
}



/* Address: 0x10018eb34 | FUN_10018eb34 */

void FUN_10018eb34(undefined8 *param_1,undefined **param_2)

{
  bool bVar1;
  undefined **ppuVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  code *pcVar7;
  long lVar8;
  uint *puVar9;
  int *piVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  piVar10 = (int *)*param_1;
  if (*piVar10 != 0x28aaeef9) {
                    /* WARNING: Subroutine does not return */
    FUN_1001903e0();
  }
  ppuVar2 = &PTR_FUN_100fb3180;
  if (param_2 != (undefined **)0x0) {
    ppuVar2 = param_2;
  }
  puVar9 = (uint *)(param_1 + 1);
  *param_1 = 0;
  if (piVar10[0xc] != 0) {
    uVar11 = 0;
    do {
      lVar5 = *(long *)(piVar10 + 0xe) + uVar11 * 0x48;
      if (((*(byte *)(lVar5 + 0x30) >> 2 & 1) == 0) ||
         (*(int *)(lVar5 + 8) == *(int *)((long)param_1 + (ulong)*(uint *)(lVar5 + 0x14)))) {
        if (*(int *)(lVar5 + 0xc) == 2) {
          lVar8 = *(long *)((long)param_1 + (ulong)*(uint *)(lVar5 + 0x18));
          if (lVar8 != 0) {
            iVar3 = *(int *)(lVar5 + 0x10);
            uVar12 = *(ulong *)((long)param_1 + (ulong)*(uint *)(lVar5 + 0x14));
            if (iVar3 == 0xe) {
              if (uVar12 != 0) {
                uVar6 = 0;
                uVar13 = 1;
                do {
                  if (*(long *)(lVar8 + uVar6 * 8) != 0) {
                    (*(code *)ppuVar2[1])(ppuVar2[2]);
                  }
                  bVar1 = uVar13 < uVar12;
                  uVar6 = uVar13;
                  uVar13 = (ulong)((int)uVar13 + 1);
                } while (bVar1);
              }
            }
            else if (iVar3 == 0xf) {
              if (uVar12 != 0) {
                uVar6 = 0;
                uVar13 = 1;
                do {
                  if (*(long *)(lVar8 + uVar6 * 0x10 + 8) != 0) {
                    (*(code *)ppuVar2[1])(ppuVar2[2]);
                  }
                  bVar1 = uVar13 < uVar12;
                  uVar6 = uVar13;
                  uVar13 = (ulong)((int)uVar13 + 1);
                } while (bVar1);
              }
            }
            else if (iVar3 == 0x10 && uVar12 != 0) {
              uVar6 = 0;
              uVar13 = 1;
              do {
                FUN_10018eb34(*(undefined8 *)(lVar8 + uVar6 * 8),ppuVar2);
                bVar1 = uVar13 < uVar12;
                uVar6 = uVar13;
                uVar13 = (ulong)((int)uVar13 + 1);
              } while (bVar1);
            }
            pcVar7 = (code *)ppuVar2[1];
            puVar4 = ppuVar2[2];
LAB_10018ed0c:
            (*pcVar7)(puVar4,lVar8);
          }
        }
        else {
          iVar3 = *(int *)(lVar5 + 0x10);
          if (iVar3 == 0x10) {
            lVar8 = *(long *)((long)param_1 + (ulong)*(uint *)(lVar5 + 0x18));
            if ((lVar8 != 0) && (lVar8 != *(long *)(lVar5 + 0x28))) {
              FUN_10018eb34(lVar8,ppuVar2);
            }
          }
          else if (iVar3 == 0xf) {
            lVar8 = *(long *)((long)puVar9 + (ulong)*(uint *)(lVar5 + 0x18));
            if ((lVar8 != 0) &&
               ((*(long *)(lVar5 + 0x28) == 0 || (*(long *)(*(long *)(lVar5 + 0x28) + 8) != lVar8)))
               ) goto LAB_10018ec78;
          }
          else if ((iVar3 == 0xe) &&
                  ((lVar8 = *(long *)((long)param_1 + (ulong)*(uint *)(lVar5 + 0x18)), lVar8 != 0 &&
                   (lVar8 != *(long *)(lVar5 + 0x28))))) {
LAB_10018ec78:
            pcVar7 = (code *)ppuVar2[1];
            puVar4 = ppuVar2[2];
            goto LAB_10018ed0c;
          }
        }
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < (uint)piVar10[0xc]);
  }
  uVar11 = (ulong)*puVar9;
  if (*puVar9 != 0) {
    uVar12 = 0;
    lVar5 = 0x10;
    do {
      if (*(long *)(param_1[2] + lVar5) != 0) {
        (*(code *)ppuVar2[1])(ppuVar2[2]);
        uVar11 = (ulong)*puVar9;
      }
      uVar12 = uVar12 + 1;
      lVar5 = lVar5 + 0x18;
    } while (uVar12 < uVar11);
  }
  if (param_1[2] != 0) {
    (*(code *)ppuVar2[1])(ppuVar2[2]);
  }
                    /* WARNING: Could not recover jumptable at 0x00010018ed88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)ppuVar2[1])(ppuVar2[2],param_1);
  return;
}



/* Address: 0x10018edac | FUN_10018edac */

void FUN_10018edac(undefined8 *param_1)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  
  if ((((param_1 != (undefined8 *)0x0) && (piVar7 = (int *)*param_1, piVar7 != (int *)0x0)) &&
      (*piVar7 == 0x28aaeef9)) && (uVar5 = piVar7[0xc], uVar5 != 0)) {
    uVar12 = 0;
    lVar13 = *(long *)(piVar7 + 0xe);
    do {
      lVar11 = lVar13 + uVar12 * 0x48;
      iVar6 = *(int *)(lVar11 + 0xc);
      iVar4 = *(int *)(lVar11 + 0x10);
      if (((*(byte *)(lVar11 + 0x30) >> 2 & 1) == 0) ||
         (*(int *)(lVar11 + 8) == *(int *)((long)param_1 + (ulong)*(uint *)(lVar11 + 0x14)))) {
        plVar2 = (long *)((long)param_1 + (ulong)*(uint *)(lVar11 + 0x18));
        if (iVar6 == 2) {
          uVar14 = *(ulong *)((long)param_1 + (ulong)*(uint *)(lVar11 + 0x14));
          if ((uVar14 != 0) && (*plVar2 == 0)) {
            return;
          }
          if (iVar4 == 0xe) {
            if (uVar14 != 0) {
              uVar8 = 0;
              uVar10 = 1;
              do {
                if (*(long *)(*plVar2 + uVar8 * 8) == 0) {
                  return;
                }
                bVar1 = uVar10 < uVar14;
                uVar8 = uVar10;
                uVar10 = (ulong)((int)uVar10 + 1);
              } while (bVar1);
            }
          }
          else if (iVar4 == 0xf) {
            if (uVar14 != 0) {
              uVar8 = 1;
              uVar10 = 0;
              do {
                uVar9 = uVar8;
                plVar3 = (long *)(*plVar2 + uVar10 * 0x10);
                if ((*plVar3 != 0) && (plVar3[1] == 0)) {
                  return;
                }
                uVar8 = (ulong)((int)uVar9 + 1);
                uVar10 = uVar9;
              } while (uVar9 < uVar14);
            }
          }
          else if ((iVar4 == 0x10) && (uVar14 != 0)) {
            lVar11 = *plVar2;
            uVar8 = 0;
            uVar10 = 1;
            do {
              iVar6 = (int)*(undefined8 *)(lVar11 + uVar8 * 8);
              FUN_10018edac();
              if (iVar6 == 0) {
                return;
              }
              bVar1 = uVar10 < uVar14;
              uVar8 = uVar10;
              uVar10 = (ulong)((int)uVar10 + 1);
            } while (bVar1);
          }
        }
        else if (iVar4 == 0xe) {
          if (iVar6 == 0 && *plVar2 == 0) {
            return;
          }
        }
        else if (iVar4 == 0xf) {
          if (((iVar6 == 0) || (*(int *)((long)param_1 + (ulong)*(uint *)(lVar11 + 0x14)) == 1)) &&
             ((*plVar2 != 0 && (plVar2[1] == 0)))) {
            return;
          }
        }
        else if (((iVar4 == 0x10) && (lVar11 = *plVar2, iVar6 == 0 || lVar11 != 0)) &&
                (FUN_10018edac(), (int)lVar11 == 0)) {
          return;
        }
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 != uVar5);
  }
  return;
}



/* Address: 0x10018ef8c | FUN_10018ef8c */

void FUN_10018ef8c(long *param_1,int *param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  if ((uint)param_2 < *(uint *)(*param_1 + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00010018efb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)param_1[((ulong)param_2 & 0xffffffff) + 3])(param_1,param_3,param_4,param_5);
    return;
  }
  FUN_100190408();
  if (*param_2 == 0x14159bc3) {
    *param_1 = (long)param_2;
    param_1[1] = (long)FUN_10018ef8c;
    param_1[2] = param_3;
    _bzero(param_1 + 3,(ulong)(uint)param_2[10] << 3);
    return;
  }
  FUN_100190430();
                    /* WARNING: Could not recover jumptable at 0x00010018f004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)param_1[2])();
  return;
}



/* Address: 0x10018efb4 | FUN_10018efb4 */

void FUN_10018efb4(undefined8 *param_1,int *param_2,undefined8 param_3)

{
  FUN_100190408();
  if (*param_2 == 0x14159bc3) {
    *param_1 = param_2;
    param_1[1] = FUN_10018ef8c;
    param_1[2] = param_3;
    _bzero(param_1 + 3,(ulong)(uint)param_2[10] << 3);
    return;
  }
  FUN_100190430();
                    /* WARNING: Could not recover jumptable at 0x00010018f004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)param_1[2])();
  return;
}



/* Address: 0x10018efc0 | FUN_10018efc0 */

void FUN_10018efc0(undefined8 *param_1,int *param_2,undefined8 param_3)

{
  if (*param_2 == 0x14159bc3) {
    *param_1 = param_2;
    param_1[1] = FUN_10018ef8c;
    param_1[2] = param_3;
    _bzero(param_1 + 3,(ulong)(uint)param_2[10] << 3);
    return;
  }
  FUN_100190430();
                    /* WARNING: Could not recover jumptable at 0x00010018f004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)param_1[2])();
  return;
}



/* Address: 0x10018f000 | FUN_10018f000 */

void FUN_10018f000(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010018f004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))();
  return;
}



/* Address: 0x10018f008 | FUN_10018f008 */

long FUN_10018f008(long param_1,char *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  
  if ((param_1 != 0) && (lVar6 = *(long *)(param_1 + 0x40), lVar6 != 0)) {
    uVar7 = *(uint *)(param_1 + 0x38);
    if (uVar7 < 2) {
      uVar9 = 0;
    }
    else {
      uVar9 = 0;
      do {
        uVar8 = (uint)uVar9;
        uVar1 = uVar8 + (uVar7 >> 1);
        iVar4 = _strcmp(*(char **)(lVar6 + (ulong)uVar1 * 0x10),param_2);
        if (iVar4 == 0) {
          lVar5 = *(long *)(param_1 + 0x30);
          uVar7 = *(uint *)(lVar6 + (ulong)uVar1 * 0x10 + 8);
          goto LAB_10018f0c0;
        }
        iVar2 = uVar8 + uVar7;
        uVar7 = uVar7 >> 1;
        if (iVar4 < 0) {
          uVar8 = uVar1 + 1;
          uVar7 = iVar2 + ~uVar1;
        }
        uVar9 = (ulong)uVar8;
      } while (1 < uVar7);
    }
    if (uVar7 != 0) {
      puVar3 = (undefined8 *)(lVar6 + uVar9 * 0x10);
      iVar4 = _strcmp((char *)*puVar3,param_2);
      if (iVar4 == 0) {
        lVar5 = *(long *)(param_1 + 0x30);
        uVar7 = *(uint *)(puVar3 + 1);
LAB_10018f0c0:
        return lVar5 + (ulong)uVar7 * 0x18;
      }
    }
  }
  return 0;
}



/* Address: 0x10018f0dc | FUN_10018f0dc */

long FUN_10018f0dc(long param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  
  uVar6 = *(uint *)(param_1 + 0x48);
  if (uVar6 != 0) {
    lVar5 = *(long *)(param_1 + 0x50);
    if (uVar6 == 1) {
      uVar7 = 0;
    }
    else {
      uVar7 = 0;
      do {
        uVar2 = uVar7 + (uVar6 >> 1);
        piVar1 = (int *)(lVar5 + (ulong)uVar2 * 8);
        iVar3 = *piVar1;
        if (param_2 < iVar3) {
          uVar6 = uVar6 >> 1;
        }
        else {
          iVar4 = piVar1[1];
          if (param_2 < (*(int *)(lVar5 + (ulong)(uVar2 + 1) * 8 + 4) + iVar3) - iVar4) {
            uVar6 = (param_2 - iVar3) + iVar4;
            if ((int)uVar6 < 0) {
              return 0;
            }
            goto LAB_10018f190;
          }
          uVar6 = uVar7 + uVar6 + ~uVar2;
          uVar7 = uVar2 + 1;
        }
      } while (1 < uVar6);
      if (uVar6 == 0) {
        return 0;
      }
    }
    piVar1 = (int *)(lVar5 + (ulong)uVar7 * 8);
    iVar3 = *piVar1;
    if (((iVar3 <= param_2) &&
        (iVar4 = piVar1[1], param_2 < (iVar3 - iVar4) + *(int *)(lVar5 + (ulong)(uVar7 + 1) * 8 + 4)
        )) && (uVar6 = (iVar4 + param_2) - iVar3, -1 < (int)uVar6)) {
LAB_10018f190:
      return *(long *)(param_1 + 0x30) + (ulong)uVar6 * 0x18;
    }
  }
  return 0;
}



/* Address: 0x10018f1b0 | FUN_10018f1b0 */

undefined8 * FUN_10018f1b0(long param_1,char *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  
  if ((param_1 != 0) && (lVar5 = *(long *)(param_1 + 0x40), lVar5 != 0)) {
    uVar6 = *(uint *)(param_1 + 0x30);
    if (uVar6 < 2) {
      uVar8 = 0;
    }
    else {
      uVar8 = 0;
      lVar9 = *(long *)(param_1 + 0x38);
      do {
        uVar7 = (uint)uVar8;
        uVar1 = uVar7 + (uVar6 >> 1);
        puVar4 = (undefined8 *)(lVar9 + (ulong)*(uint *)(lVar5 + (ulong)uVar1 * 4) * 0x48);
        iVar3 = _strcmp((char *)*puVar4,param_2);
        if (iVar3 == 0) {
          return puVar4;
        }
        iVar2 = uVar7 + uVar6;
        uVar6 = uVar6 >> 1;
        if (iVar3 < 0) {
          uVar7 = uVar1 + 1;
          uVar6 = iVar2 + ~uVar1;
        }
        uVar8 = (ulong)uVar7;
      } while (1 < uVar6);
    }
    if (uVar6 != 0) {
      puVar4 = (undefined8 *)
               (*(long *)(param_1 + 0x38) + (ulong)*(uint *)(lVar5 + uVar8 * 4) * 0x48);
      iVar3 = _strcmp((char *)*puVar4,param_2);
      if (iVar3 == 0) {
        return puVar4;
      }
      return (undefined8 *)0x0;
    }
  }
  return (undefined8 *)0x0;
}



/* Address: 0x10018f290 | FUN_10018f290 */

long FUN_10018f290(long param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  
  uVar6 = *(uint *)(param_1 + 0x48);
  if (uVar6 != 0) {
    lVar5 = *(long *)(param_1 + 0x50);
    if (uVar6 == 1) {
      uVar7 = 0;
    }
    else {
      uVar7 = 0;
      do {
        uVar2 = uVar7 + (uVar6 >> 1);
        piVar1 = (int *)(lVar5 + (ulong)uVar2 * 8);
        iVar3 = *piVar1;
        if (param_2 < iVar3) {
          uVar6 = uVar6 >> 1;
        }
        else {
          iVar4 = piVar1[1];
          if (param_2 < (*(int *)(lVar5 + (ulong)(uVar2 + 1) * 8 + 4) + iVar3) - iVar4) {
            uVar6 = (param_2 - iVar3) + iVar4;
            if ((int)uVar6 < 0) {
              return 0;
            }
            goto LAB_10018f344;
          }
          uVar6 = uVar7 + uVar6 + ~uVar2;
          uVar7 = uVar2 + 1;
        }
      } while (1 < uVar6);
      if (uVar6 == 0) {
        return 0;
      }
    }
    piVar1 = (int *)(lVar5 + (ulong)uVar7 * 8);
    iVar3 = *piVar1;
    if (((iVar3 <= param_2) &&
        (iVar4 = piVar1[1], param_2 < (iVar3 - iVar4) + *(int *)(lVar5 + (ulong)(uVar7 + 1) * 8 + 4)
        )) && (uVar6 = (iVar4 + param_2) - iVar3, -1 < (int)uVar6)) {
LAB_10018f344:
      return *(long *)(param_1 + 0x38) + (ulong)uVar6 * 0x48;
    }
  }
  return 0;
}



/* Address: 0x10018f364 | FUN_10018f364 */

undefined8 * FUN_10018f364(long param_1,char *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  
  if ((param_1 != 0) && (lVar5 = *(long *)(param_1 + 0x38), lVar5 != 0)) {
    uVar6 = *(uint *)(param_1 + 0x28);
    if (uVar6 < 2) {
      uVar8 = 0;
    }
    else {
      uVar8 = 0;
      lVar9 = *(long *)(param_1 + 0x30);
      do {
        uVar7 = (uint)uVar8;
        uVar1 = uVar7 + (uVar6 >> 1);
        puVar4 = (undefined8 *)(lVar9 + (ulong)*(uint *)(lVar5 + (ulong)uVar1 * 4) * 0x18);
        iVar3 = _strcmp((char *)*puVar4,param_2);
        if (iVar3 == 0) {
          return puVar4;
        }
        iVar2 = uVar7 + uVar6;
        uVar6 = uVar6 >> 1;
        if (iVar3 < 0) {
          uVar7 = uVar1 + 1;
          uVar6 = iVar2 + ~uVar1;
        }
        uVar8 = (ulong)uVar7;
      } while (1 < uVar6);
    }
    if (uVar6 != 0) {
      puVar4 = (undefined8 *)
               (*(long *)(param_1 + 0x30) + (ulong)*(uint *)(lVar5 + uVar8 * 4) * 0x18);
      iVar3 = _strcmp((char *)*puVar4,param_2);
      if (iVar3 == 0) {
        return puVar4;
      }
      return (undefined8 *)0x0;
    }
  }
  return (undefined8 *)0x0;
}



/* Address: 0x10018f444 | FUN_10018f444 */

void FUN_10018f444(undefined8 param_1,size_t param_2)

{
  _malloc(param_2);
  return;
}



/* Address: 0x10018f44c | FUN_10018f44c */

void FUN_10018f44c(undefined8 param_1,void *param_2)

{
  _free(param_2);
  return;
}



/* Address: 0x10018f454 | FUN_10018f454 */

bool FUN_10018f454(long param_1,double *param_2)

{
  bool bVar1;
  float fVar2;
  
  switch(*(undefined4 *)(param_1 + 0x10)) {
  case 0:
  case 1:
  case 2:
  case 6:
  case 7:
  case 0xc:
  case 0xd:
    fVar2 = *(float *)param_2;
    goto LAB_10018f47c;
  case 3:
  case 4:
  case 5:
  case 8:
  case 9:
  case 0xf:
  case 0x10:
    bVar1 = *param_2 == 0.0;
    break;
  case 10:
    bVar1 = *(float *)param_2 == 0.0;
    break;
  case 0xb:
    bVar1 = *param_2 == 0.0;
    break;
  case 0xe:
    if ((byte *)*param_2 == (byte *)0x0) {
      return true;
    }
    fVar2 = (float)(uint)*(byte *)*param_2;
LAB_10018f47c:
    bVar1 = fVar2 == 0.0;
    break;
  default:
    return true;
  }
  return bVar1;
}



/* Address: 0x10018f4c4 | FUN_10018f4c4 */

ulong FUN_10018f4c4(ulong param_1,byte *param_2)

{
  uint uVar1;
  ulong uVar2;
  byte bVar3;
  
  if ((param_1 >> 0x1d & 7) == 0) {
    uVar1 = (uint)param_1;
    bVar3 = (byte)(uVar1 << 3);
    if (uVar1 < 0x10) {
      uVar1 = 0;
    }
    else {
      *param_2 = bVar3 | 0x80;
      bVar3 = (byte)(uVar1 >> 4);
      if (uVar1 < 0x800) {
        uVar1 = 1;
      }
      else {
        param_2[1] = bVar3 | 0x80;
        bVar3 = (byte)(uVar1 >> 0xb);
        if (uVar1 < 0x40000) {
          uVar1 = 2;
        }
        else {
          param_2[2] = bVar3 | 0x80;
          bVar3 = (byte)(uVar1 >> 0x12);
          if (uVar1 >> 0x19 == 0) {
            uVar1 = 3;
          }
          else {
            param_2[3] = bVar3 | 0x80;
            uVar1 = 4;
            bVar3 = (byte)(param_1 >> 0x18) >> 1;
          }
        }
      }
    }
    param_2[uVar1] = bVar3;
    return (ulong)(uVar1 + 1);
  }
  uVar2 = (param_1 & 0xffffffff) << 3;
  FUN_10018f558(uVar2);
  return uVar2;
}


