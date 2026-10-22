/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100b5bfc0 | SentryFileManagerHelper::handleEnvelopesLimit */

/* Function Stack Size: 0x10 bytes */

ID SentryFileManagerHelper::handleEnvelopesLimit(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x68);
}



/* Address: 0x100b5bfc8 | SentryFileManagerHelper::setHandleEnvelopesLimit: */

/* WARNING: Function: _objc_setProperty_nonatomic_copy replaced with injection:
   _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryFileManagerHelper::setHandleEnvelopesLimit_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  *(ID *)(param_1 + 0x68) = param_3;
  return;
}



/* Address: 0x100b5bfd0 | SentryFileManagerHelper::currentSessionFilePath */

/* Function Stack Size: 0x10 bytes */

ID SentryFileManagerHelper::currentSessionFilePath(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x70);
}



/* Address: 0x100b5bfd8 | SentryFileManagerHelper::setCurrentSessionFilePath: */

/* WARNING: Function: _objc_setProperty_nonatomic_copy replaced with injection:
   _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryFileManagerHelper::setCurrentSessionFilePath_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x70) = param_3;
  return;
}



/* Address: 0x100b5bfe0 | SentryFileManagerHelper::crashedSessionFilePath */

/* Function Stack Size: 0x10 bytes */

ID SentryFileManagerHelper::crashedSessionFilePath(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x78);
}



/* Address: 0x100b5bfe8 | SentryFileManagerHelper::setCrashedSessionFilePath: */

/* WARNING: Function: _objc_setProperty_nonatomic_copy replaced with injection:
   _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryFileManagerHelper::setCrashedSessionFilePath_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x78) = param_3;
  return;
}



/* Address: 0x100b5bff0 | SentryFileManagerHelper::abnormalSessionFilePath */

/* Function Stack Size: 0x10 bytes */

ID SentryFileManagerHelper::abnormalSessionFilePath(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x80);
}



/* Address: 0x100b5bff8 | SentryFileManagerHelper::setAbnormalSessionFilePath: */

/* WARNING: Function: _objc_setProperty_nonatomic_copy replaced with injection:
   _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryFileManagerHelper::setAbnormalSessionFilePath_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x80) = param_3;
  return;
}



/* Address: 0x100b5c000 | SentryFileManagerHelper::lastInForegroundFilePath */

/* Function Stack Size: 0x10 bytes */

ID SentryFileManagerHelper::lastInForegroundFilePath(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x88);
}



/* Address: 0x100b5c008 | SentryFileManagerHelper::setLastInForegroundFilePath: */

/* WARNING: Function: _objc_setProperty_nonatomic_copy replaced with injection:
   _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryFileManagerHelper::setLastInForegroundFilePath_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x88) = param_3;
  return;
}



/* Address: 0x100b5c010 | SentryFileManagerHelper::previousAppStateFilePath */

/* Function Stack Size: 0x10 bytes */

ID SentryFileManagerHelper::previousAppStateFilePath(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x90);
}



/* Address: 0x100b5c018 | SentryFileManagerHelper::setPreviousAppStateFilePath: */

/* WARNING: Function: _objc_setProperty_nonatomic_copy replaced with injection:
   _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryFileManagerHelper::setPreviousAppStateFilePath_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x90) = param_3;
  return;
}



/* Address: 0x100b5c020 | SentryFileManagerHelper::currentFileCounter */

/* Function Stack Size: 0x10 bytes */

unsigned_long_long SentryFileManagerHelper::currentFileCounter(ID param_1,SEL param_2)

{
  return *(unsigned_long_long *)(param_1 + 0x98);
}



/* Address: 0x100b5c028 | SentryFileManagerHelper::setCurrentFileCounter: */

/* Function Stack Size: 0x18 bytes */

void SentryFileManagerHelper::setCurrentFileCounter_
               (ID param_1,SEL param_2,unsigned_long_long param_3)

{
  *(unsigned_long_long *)(param_1 + 0x98) = param_3;
  return;
}



/* Address: 0x100b5c030 | SentryFileManagerHelper::.cxx_destruct */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryFileManagerHelper::_cxx_destruct(ID param_1,SEL param_2)

{
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
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



/* Address: 0x100b5c114 | FUN_100b5c114 */

void FUN_100b5c114(void)

{
  _dispatch_once(&DAT_1010e30b0,&PTR___NSConcreteGlobalBlock_100f35b58);
  return;
}



/* Address: 0x100b5c128 | FUN_100b5c128 */

void FUN_100b5c128(void)

{
  _dispatch_once(&DAT_1010e30c0,&PTR___NSConcreteGlobalBlock_100f35b78);
  return;
}



/* Address: 0x100b5c13c | FUN_100b5c13c */

void FUN_100b5c13c(void)

{
  _dispatch_once(&DAT_1010e30c8,&PTR___NSConcreteGlobalBlock_100f35b98);
  return;
}



/* Address: 0x100b5c150 | FUN_100b5c150 */

undefined * FUN_100b5c150(long param_1)

{
  if (param_1 - 1U < 10) {
    return (&PTR_s_EXC_BAD_ACCESS_100f35bb8)[param_1 - 1U];
  }
  return (undefined *)0x0;
}



/* Address: 0x100b5c174 | FUN_100b5c174 */

char * FUN_100b5c174(long param_1)

{
  if (param_1 < 0x101) {
    switch(param_1) {
    case 0:
      return "KERN_SUCCESS";
    case 1:
      return "KERN_INVALID_ADDRESS";
    case 2:
      return "KERN_PROTECTION_FAILURE";
    case 3:
      return "KERN_NO_SPACE";
    case 4:
      return "KERN_INVALID_ARGUMENT";
    case 5:
      return "KERN_FAILURE";
    case 6:
      return "KERN_RESOURCE_SHORTAGE";
    case 7:
      return "KERN_NOT_RECEIVER";
    case 8:
      return "KERN_NO_ACCESS";
    case 9:
      return "KERN_MEMORY_FAILURE";
    case 10:
      return "KERN_MEMORY_ERROR";
    case 0xb:
      return "KERN_ALREADY_IN_SET";
    case 0xc:
      return "KERN_NOT_IN_SET";
    case 0xd:
      return "KERN_NAME_EXISTS";
    case 0xe:
      return "KERN_ABORTED";
    case 0xf:
      return "KERN_INVALID_NAME";
    case 0x10:
      return "KERN_INVALID_TASK";
    case 0x11:
      return "KERN_INVALID_RIGHT";
    case 0x12:
      return "KERN_INVALID_VALUE";
    case 0x13:
      return "KERN_UREFS_OVERFLOW";
    case 0x14:
      return "KERN_INVALID_CAPABILITY";
    case 0x15:
      return "KERN_RIGHT_EXISTS";
    case 0x16:
      return "KERN_INVALID_HOST";
    case 0x17:
      return "KERN_MEMORY_PRESENT";
    case 0x18:
      return "KERN_MEMORY_DATA_MOVED";
    case 0x19:
      return "KERN_MEMORY_RESTART_COPY";
    case 0x1a:
      return "KERN_INVALID_PROCESSOR_SET";
    case 0x1b:
      return "KERN_POLICY_LIMIT";
    case 0x1c:
      return "KERN_INVALID_POLICY";
    case 0x1d:
      return "KERN_INVALID_OBJECT";
    case 0x1e:
      return "KERN_ALREADY_WAITING";
    case 0x1f:
      return "KERN_DEFAULT_SET";
    case 0x20:
      return "KERN_EXCEPTION_PROTECTED";
    case 0x21:
      return "KERN_INVALID_LEDGER";
    case 0x22:
      return "KERN_INVALID_MEMORY_CONTROL";
    case 0x23:
      return "KERN_INVALID_SECURITY";
    case 0x24:
      return "KERN_NOT_DEPRESSED";
    case 0x25:
      return "KERN_TERMINATED";
    case 0x26:
      return "KERN_LOCK_SET_DESTROYED";
    case 0x27:
      return "KERN_LOCK_UNSTABLE";
    case 0x28:
      return "KERN_LOCK_OWNED";
    case 0x29:
      return "KERN_LOCK_OWNED_SELF";
    case 0x2a:
      return "KERN_SEMAPHORE_DESTROYED";
    case 0x2b:
      return "KERN_RPC_SERVER_TERMINATED";
    case 0x2c:
      return "KERN_RPC_TERMINATE_ORPHAN";
    case 0x2d:
      return "KERN_RPC_CONTINUE_ORPHAN";
    case 0x2e:
      return "KERN_NOT_SUPPORTED";
    case 0x2f:
      return "KERN_NODE_DOWN";
    case 0x30:
      return "KERN_NOT_WAITING";
    case 0x31:
      return "KERN_OPERATION_TIMED_OUT";
    case 0x32:
      return "KERN_CODESIGN_ERROR";
    }
  }
  else if (param_1 < 0x103) {
    if (param_1 == 0x101) {
      return "EXC_ARM_DA_ALIGN";
    }
    if (param_1 == 0x102) {
      return "EXC_ARM_DA_DEBUG";
    }
  }
  else {
    if (param_1 == 0x103) {
      return "EXC_ARM_SP_ALIGN";
    }
    if (param_1 == 0x104) {
      return "EXC_ARM_SWP";
    }
    if (param_1 == 0x105) {
      return "EXC_ARM_PAC_FAIL";
    }
  }
  return (char *)0x0;
}



/* Address: 0x100b5c474 | FUN_100b5c474 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID FUN_100b5c474(ID param_1,ID param_2)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  long lVar4;
  ID IVar5;
  ID self;
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
  IVar1 = objc_stub::length(param_2);
  while ((IVar1 != 0 && (IVar1 = objc_stub::characterAtIndex_(param_2,0), (int)IVar1 == 0x2f))) {
    param_2 = objc_stub::substringFromIndex_(param_2,1);
    IVar1 = objc_stub::length(param_2);
  }
  IVar1 = objc_stub::FUN_100bff8e0(param_2,&cf__);
  lStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (long *)0x0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  IVar2 = objc_stub::countByEnumeratingWithState_objects_count_(IVar1,&local_130,auStack_f0,0x10);
  if (IVar2 != 0) {
    lVar4 = *local_120;
    do {
      IVar5 = 0;
      do {
        if (*local_120 != lVar4) {
          _objc_enumerationMutation(IVar1);
        }
        self = *(ID *)(lStack_128 + IVar5 * 8);
        IVar3 = objc_stub::respondsToSelector_(param_1,"objectForKey:");
        if ((int)IVar3 == 0) {
          IVar3 = objc_stub::respondsToSelector_(param_1,"objectAtIndex:");
          if (((int)IVar3 != 0) &&
             (IVar3 = objc_stub::respondsToSelector_(self,"intValue"), (int)IVar3 != 0)) {
            IVar3 = objc_stub::class((ID)&_OBJC_CLASS___NSString);
            IVar3 = objc_stub::isKindOfClass_(self,IVar3);
            if (((int)IVar3 == 0) ||
               ((IVar3 = objc_stub::length(self), IVar3 == 0 ||
                (IVar3 = objc_stub::characterAtIndex_(self,0), (int)IVar3 - 0x30U < 10)))) {
              IVar3 = objc_stub::intValue(self);
              param_1 = objc_stub::objectAtIndex_(param_1,(long)(int)IVar3);
              goto LAB_100b5c6d0;
            }
          }
          param_1 = 0;
          goto LAB_100b5c750;
        }
        param_1 = objc_stub::objectForKey_(param_1,self);
LAB_100b5c6d0:
        if (param_1 == 0) goto LAB_100b5c750;
        IVar5 = IVar5 + 1;
      } while (IVar2 != IVar5);
      IVar2 = objc_stub::countByEnumeratingWithState_objects_count_
                        (IVar1,&local_130,auStack_f0,0x10);
    } while (IVar2 != 0);
  }
LAB_100b5c750:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_70) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}



/* Address: 0x100b5c7c8 | FUN_100b5c7c8 */

void FUN_100b5c7c8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  
  puVar3 = DAT_1010e30d0;
  if (0 < *(int *)(DAT_1010e30d0 + 1)) {
    lVar4 = 0;
    do {
      lVar1 = *(long *)puVar3[lVar4 + 2];
      if ((lVar1 != 0) && (lVar2 = ((long *)puVar3[lVar4 + 2])[1], lVar2 != 0)) {
        (**(code **)(param_1 + 0x68))(param_1,lVar1,lVar2,1);
        puVar3 = DAT_1010e30d0;
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(puVar3 + 1));
  }
  if ((code *)*puVar3 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100b5c848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar3)(param_1);
    return;
  }
  return;
}



/* Address: 0x100b5c85c | SentryCrashInstallation::init */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryCrashInstallation::init(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)PTR__NSInternalInconsistencyException_100ea9ac8;
  objc_stub::class(param_1);
  objc_stub::raise_format_
            ((ID)&_OBJC_CLASS___NSException,uVar1,
             &
             cf___doesnotsupportinit_SubclassesmustcallinitWithMaxReportFieldCount_requiredProperties_
            );
  return 0;
}



/* Address: 0x100b5c8c4 | SentryCrashInstallation::initWithRequiredProperties: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryCrashInstallation::initWithRequiredProperties_(ID param_1,SEL param_2,ID param_3)

{
  ID self;
  ID IVar1;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::SentryCrashInstallation;
  local_40.receiver = param_1;
  self = _objc_msgSendSuper2(&local_40,"init");
  if (self != 0) {
    IVar1 = objc_stub::dataWithLength_((ID)&_OBJC_CLASS___NSMutableData,0xfb0);
    objc_stub::FUN_100c0b1a0(self,IVar1);
    IVar1 = objc_stub::dictionary((ID)&_OBJC_CLASS___NSMutableDictionary);
    objc_stub::FUN_100c0bbe0(self,IVar1);
    objc_stub::FUN_100c0d720(self,param_3);
  }
  return self;
}



/* Address: 0x100b5c994 | SentryCrashInstallation::dealloc */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryCrashInstallation::dealloc(ID param_1,SEL param_2)

{
  ID IVar1;
  ID self;
  ID IVar2;
  objc_super local_40;
  
  IVar1 = objc_stub::FUN_100bfe900(param_1);
  self = objc_stub::crashReporter(IVar1);
  _objc_sync_enter();
  IVar1 = DAT_1010e30d0;
  IVar2 = objc_stub::FUN_100c00220(param_1);
  if (IVar1 == IVar2) {
    DAT_1010e30d0 = 0;
    objc_stub::FUN_100c09160(self);
  }
  _objc_sync_exit(self);
  local_40.super_class = &objc::class_t::SentryCrashInstallation;
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"dealloc");
  return;
}



/* Address: 0x100b5ca64 | SentryCrashInstallation::crashHandlerData */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

AnonymousStructure4 * SentryCrashInstallation::crashHandlerData(ID param_1,SEL param_2)

{
  ID self;
  AnonymousStructure4 *pAVar1;
  
  self = objc_stub::FUN_100c00240(param_1);
  _objc_retainAutorelease();
  pAVar1 = (AnonymousStructure4 *)objc_stub::mutableBytes(self);
  return pAVar1;
}



/* Address: 0x100b5caa4 | SentryCrashInstallation::g_crashHandlerData */

/* Function Stack Size: 0x10 bytes */

AnonymousStructure4 * SentryCrashInstallation::g_crashHandlerData(ID param_1,SEL param_2)

{
  return DAT_1010e30d0;
}



/* Address: 0x100b5cab0 | SentryCrashInstallation::validateProperties */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryCrashInstallation::validateProperties(ID param_1,SEL param_2)

{
  ID IVar1;
  ID self;
  ID IVar2;
  ID IVar3;
  long lVar4;
  ID IVar5;
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
  IVar1 = objc_stub::string((ID)&_OBJC_CLASS___NSMutableString);
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (long *)0x0;
  self = objc_stub::FUN_100c09480(param_1);
  IVar2 = objc_stub::countByEnumeratingWithState_objects_count_(self,&local_130,auStack_f0,0x10);
  if (IVar2 != 0) {
    lVar4 = *local_120;
    do {
      IVar5 = 0;
      do {
        if (*local_120 != lVar4) {
          _objc_enumerationMutation(self);
        }
        IVar3 = objc_stub::FUN_100c112a0(param_1,*(undefined8 *)(lStack_128 + IVar5 * 8));
        if (IVar3 == 0) {
          IVar3 = objc_stub::length(IVar1);
          if (IVar3 != 0) {
            objc_stub::appendString_(IVar1,&cf__);
          }
          objc_stub::appendFormat_(IVar1,&cf_______);
        }
        IVar5 = IVar5 + 1;
      } while (IVar2 != IVar5);
      IVar2 = objc_stub::countByEnumeratingWithState_objects_count_(self,&local_130,auStack_f0,0x10)
      ;
    } while (IVar2 != 0);
  }
  IVar1 = objc_stub::length(IVar1);
  if (IVar1 == 0) {
    IVar1 = 0;
  }
  else {
    IVar1 = objc_stub::class(param_1);
    IVar1 = objc_stub::description(IVar1);
    FUN_100b52f54(IVar1,0,&cf_Installationpropertiesfailedvalidation___);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return IVar1;
}



/* Address: 0x100b5ccac | FUN_100b5ccac */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

ID FUN_100b5ccac(_Unwind_Exception *param_1,undefined8 param_2,ID param_3)

{
  ID IVar1;
  
  __Unwind_Resume(param_1);
  IVar1 = objc_stub::length(param_3);
  if ((IVar1 != 0) &&
     ((IVar1 = objc_stub::length(param_3), IVar1 == 0 ||
      (IVar1 = objc_stub::characterAtIndex_(param_3,0), (int)IVar1 != 0x2f)))) {
    param_3 = objc_stub::stringByAppendingString_(0x100f44f48,param_3);
  }
  return param_3;
}



/* Address: 0x100b5ccb0 | SentryCrashInstallation::makeKeyPath: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryCrashInstallation::makeKeyPath_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = objc_stub::length(param_3);
  if ((IVar1 != 0) &&
     ((IVar1 = objc_stub::length(param_3), IVar1 == 0 ||
      (IVar1 = objc_stub::characterAtIndex_(param_3,0), (int)IVar1 != 0x2f)))) {
    param_3 = objc_stub::stringByAppendingString_(0x100f44f48,param_3);
  }
  return param_3;
}



/* Address: 0x100b5cd30 | SentryCrashInstallation::makeKeyPaths: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryCrashInstallation::makeKeyPaths_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  long lVar4;
  ID IVar5;
  undefined8 local_130;
  long lStack_128;
  long *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  IVar1 = objc_stub::count(param_3);
  IVar2 = param_3;
  if (IVar1 != 0) {
    IVar2 = objc_stub::count(param_3);
    IVar2 = objc_stub::arrayWithCapacity_((ID)&_OBJC_CLASS___NSMutableArray,IVar2);
    lStack_128 = 0;
    local_130 = 0;
    uStack_118 = 0;
    local_120 = (long *)0x0;
    uStack_108 = 0;
    local_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    IVar1 = objc_stub::countByEnumeratingWithState_objects_count_
                      (param_3,&local_130,auStack_e8,0x10);
    if (IVar1 != 0) {
      lVar4 = *local_120;
      do {
        IVar5 = 0;
        do {
          if (*local_120 != lVar4) {
            _objc_enumerationMutation(param_3);
          }
          IVar3 = objc_stub::FUN_100c068e0(param_1,*(undefined8 *)(lStack_128 + IVar5 * 8));
          objc_stub::addObject_(IVar2,IVar3);
          IVar5 = IVar5 + 1;
        } while (IVar1 != IVar5);
        IVar1 = objc_stub::countByEnumeratingWithState_objects_count_
                          (param_3,&local_130,auStack_e8,0x10);
      } while (IVar1 != 0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return IVar2;
}



/* Address: 0x100b5ceac | SentryCrashInstallation::setBridgeObject: */

/* Function Stack Size: 0x18 bytes */

ID __objc_msgSend_stub SentryCrashInstallation::setBridgeObject_(ID self,...)

{
  (*(code *)PTR__objc_msgSend_100ea81a8)(self,"setBridge:");
  return self;
}



/* Address: 0x100b5ceb0 | SentryCrashInstallation::install: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryCrashInstallation::install_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100bfe900(param_1);
  IVar1 = objc_stub::crashReporter(IVar1);
  _objc_sync_enter();
  objc_stub::FUN_100c0aa80(IVar1,param_3);
  DAT_1010e30d0 = objc_stub::FUN_100c00220(param_1);
  objc_stub::FUN_100c0ea80(IVar1);
  objc_stub::FUN_100c05360(IVar1);
  _objc_sync_exit(IVar1);
  return;
}



/* Address: 0x100b5cf78 | SentryCrashInstallation::uninstall */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryCrashInstallation::uninstall(ID param_1,SEL param_2)

{
  ID IVar1;
  ID self;
  ID IVar2;
  
  IVar1 = objc_stub::FUN_100bfe900(param_1);
  self = objc_stub::crashReporter(IVar1);
  _objc_sync_enter();
  IVar1 = DAT_1010e30d0;
  IVar2 = objc_stub::FUN_100c00220(param_1);
  if (IVar1 == IVar2) {
    DAT_1010e30d0 = 0;
    objc_stub::FUN_100c09160(self);
  }
  objc_stub::FUN_100c10d80(self);
  _objc_sync_exit(self);
  return;
}



/* Address: 0x100b5d028 | SentryCrashInstallation::sendAllReportsWithCompletion: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryCrashInstallation::sendAllReportsWithCompletion_
               (ID param_1,SEL param_2,ID param_3,uint param_4)

{
  ID IVar1;
  ID IVar2;
  class_t *self;
  undefined *local_68;
  undefined8 local_60;
  code *local_58;
  undefined *puStack_50;
  ID local_48;
  
  IVar1 = objc_stub::FUN_100c11240(param_1,param_3,(ulong)param_4);
  if (IVar1 == 0) {
    IVar1 = objc_stub::FUN_100c0edc0(param_1);
    if (IVar1 == 0) {
      IVar1 = objc_stub::class(param_1);
      IVar1 = objc_stub::description(IVar1);
      FUN_100b52f54(IVar1,0,&cf_Sinkwasnil_subclassesmustimplementmethod_sink__);
      (**(code **)(param_3 + 0x10))(param_3,0,0,IVar1);
    }
    else {
      IVar1 = objc_stub::filterWithFilters_
                        ((ID)&objc::class_t::SentryCrashReportFilterPipeline,IVar1);
      IVar2 = objc_stub::FUN_100bfe900(param_1);
      IVar2 = objc_stub::crashReporter(IVar2);
      self = &objc::class_t::_TtC6Sentry28SentryCrashReportFilterSwift;
      _objc_alloc();
      local_68 = PTR___NSConcreteStackBlock_100ea82a0;
      local_60 = 0xc2000000;
      local_58 = FUN_100b5d20c;
      puStack_50 = &DAT_100f35c08;
      local_48 = IVar1;
      IVar1 = objc_stub::FUN_100c041c0((ID)self,&local_68);
      objc_stub::FUN_100c0db60(IVar2,IVar1);
      objc_stub::FUN_100c09e40(IVar2,param_3);
    }
  }
  else if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3,0,0,IVar1);
  }
  return;
}



/* Address: 0x100b5d20c | FUN_100b5d20c */

void FUN_100b5d20c(long param_1,undefined8 param_2,undefined8 param_3)

{
  objc_stub::filterReports_onCompletion_(*(ID *)(param_1 + 0x20),param_2,param_3);
  return;
}



/* Address: 0x100b5d21c | SentryCrashInstallation::sink */

/* Function Stack Size: 0x10 bytes */

ID SentryCrashInstallation::sink(ID param_1,SEL param_2)

{
  return 0;
}



/* Address: 0x100b5d224 | SentryCrashInstallation::nextFieldIndex */

/* Function Stack Size: 0x10 bytes */

int SentryCrashInstallation::nextFieldIndex(ID param_1,SEL param_2)

{
  return *(int *)(param_1 + 8);
}



/* Address: 0x100b5d22c | SentryCrashInstallation::setNextFieldIndex: */

/* Function Stack Size: 0x14 bytes */

void SentryCrashInstallation::setNextFieldIndex_(ID param_1,SEL param_2,int param_3)

{
  *(int *)(param_1 + 8) = param_3;
  return;
}



/* Address: 0x100b5d234 | SentryCrashInstallation::crashHandlerDataBacking */

/* Function Stack Size: 0x10 bytes */

ID SentryCrashInstallation::crashHandlerDataBacking(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x10);
}



/* Address: 0x100b5d23c | SentryCrashInstallation::setCrashHandlerDataBacking: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryCrashInstallation::setCrashHandlerDataBacking_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x10) = param_3;
  return;
}



/* Address: 0x100b5d248 | SentryCrashInstallation::fields */

/* Function Stack Size: 0x10 bytes */

ID SentryCrashInstallation::fields(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x18);
}



/* Address: 0x100b5d250 | SentryCrashInstallation::setFields: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryCrashInstallation::setFields_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x18) = param_3;
  return;
}



/* Address: 0x100b5d25c | SentryCrashInstallation::requiredProperties */

/* Function Stack Size: 0x10 bytes */

ID SentryCrashInstallation::requiredProperties(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x20);
}



/* Address: 0x100b5d264 | SentryCrashInstallation::setRequiredProperties: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryCrashInstallation::setRequiredProperties_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x20) = param_3;
  return;
}



/* Address: 0x100b5d270 | SentryCrashInstallation::bridge */

/* Function Stack Size: 0x10 bytes */

ID SentryCrashInstallation::bridge(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x28);
}



/* Address: 0x100b5d278 | SentryCrashInstallation::setBridge: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryCrashInstallation::setBridge_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x28) = param_3;
  return;
}



/* Address: 0x100b5d284 | SentryCrashInstallation::.cxx_destruct */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryCrashInstallation::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



/* Address: 0x100b5d2cc | FUN_100b5d2cc */

int FUN_100b5d2cc(vm_address_t param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  undefined *puVar3;
  kern_return_t kVar4;
  undefined *data;
  ulong size;
  uint uVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  ulong uVar12;
  vm_size_t local_68;
  
  puVar3 = PTR__mach_task_self__100ea8778;
  iVar7 = param_2;
  iVar6 = param_2;
  if (0x2800 < param_2) {
    do {
      uVar5 = 0x2800;
      while (iVar6 = iVar7, 0 < (int)uVar5) {
        uVar2 = uVar5;
        if (0x27ff < uVar5) {
          uVar2 = 0x2800;
        }
        local_68 = 0;
        kVar4 = _vm_read_overwrite(*(vm_map_t *)puVar3,param_1,(ulong)uVar2,0x1010e30d8,&local_68);
        if (kVar4 != 0) {
          local_68._0_4_ = 0;
        }
        uVar5 = uVar5 - uVar2;
        if ((uint)local_68 != uVar2) goto LAB_100b5d390;
      }
      if (uVar5 != 0) break;
      param_1 = param_1 + 0x2800;
      iVar6 = iVar7 + -0x2800;
      bVar1 = 0x5000 < iVar7;
      iVar7 = iVar6;
    } while (bVar1);
  }
LAB_100b5d390:
  local_68 = 0;
  kVar4 = _vm_read_overwrite(*(vm_map_t *)puVar3,param_1,1,0x1010e30d8,&local_68);
  iVar7 = 0;
  if (kVar4 == 0 && (uint)local_68 == 1) {
    uVar12 = 0x2800;
    lVar10 = param_1 + 0x2800;
    data = &DAT_1010e30d8;
    lVar8 = lVar10;
    do {
      local_68 = 0;
      size = uVar12 & 0x7fffffff;
      kVar4 = _vm_read_overwrite(*(vm_map_t *)puVar3,param_1,size,(vm_address_t)data,&local_68);
      iVar11 = (int)uVar12;
      if (kVar4 == 0 && iVar11 == (uint)local_68) {
        iVar7 = iVar7 + iVar11;
        data = data + size;
        param_1 = param_1 + size;
        lVar9 = param_1 + (long)(lVar10 - param_1) / 2;
      }
      else {
        if (iVar11 == 1) break;
        lVar9 = param_1 + (uVar12 >> 1 & 0x3fffffff);
        lVar10 = lVar8;
      }
      uVar12 = lVar9 - param_1;
      lVar8 = lVar9;
    } while (0 < (int)uVar12);
  }
  return (param_2 - iVar6) + iVar7;
}



/* Address: 0x100b5d46c | FUN_100b5d46c */

bool FUN_100b5d46c(vm_address_t param_1,uint param_2)

{
  uint uVar1;
  undefined *puVar2;
  kern_return_t kVar3;
  uint uVar4;
  vm_size_t local_48;
  
  puVar2 = PTR__mach_task_self__100ea8778;
  do {
    uVar4 = param_2;
    if ((int)uVar4 < 1) break;
    uVar1 = uVar4;
    if (0x27ff < uVar4) {
      uVar1 = 0x2800;
    }
    local_48 = 0;
    kVar3 = _vm_read_overwrite(*(vm_map_t *)puVar2,param_1,(ulong)uVar1,0x1010e30d8,&local_48);
    if (kVar3 != 0) {
      local_48._0_4_ = 0;
    }
    param_2 = uVar4 - uVar1;
  } while ((uint)local_48 == uVar1);
  return uVar4 == 0;
}



/* Address: 0x100b5d504 | FUN_100b5d504 */

ulong FUN_100b5d504(vm_address_t param_1,vm_address_t param_2,ulong param_3)

{
  undefined *puVar1;
  kern_return_t kVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  vm_size_t local_68;
  
  puVar1 = PTR__mach_task_self__100ea8778;
  local_68 = 0;
  kVar2 = _vm_read_overwrite(*(vm_map_t *)PTR__mach_task_self__100ea8778,param_1,1,param_2,&local_68
                            );
  if (kVar2 == 0 && (int)local_68 == 1) {
    if (1 < (int)param_3) {
      lVar8 = param_1 + (param_3 & 0xffffffff);
      uVar5 = 0;
      uVar4 = param_3;
      lVar6 = lVar8;
      uVar9 = param_3 & 0xffffffff;
      do {
        param_3 = uVar5;
        local_68 = 0;
        uVar5 = uVar9 & 0x7fffffff;
        kVar2 = _vm_read_overwrite(*(vm_map_t *)puVar1,param_1,uVar5,param_2,&local_68);
        iVar3 = (int)uVar4;
        if (kVar2 == 0 && iVar3 == (int)local_68) {
          param_3 = (ulong)(uint)((int)param_3 + iVar3);
          param_2 = param_2 + uVar5;
          param_1 = param_1 + uVar5;
          lVar7 = param_1 + (long)(lVar8 - param_1) / 2;
        }
        else {
          if (iVar3 == 1) {
            return param_3;
          }
          lVar7 = param_1 + (uVar9 >> 1 & 0x3fffffff);
          lVar8 = lVar6;
        }
        uVar4 = lVar7 - param_1;
        uVar5 = param_3;
        lVar6 = lVar7;
        uVar9 = uVar4;
      } while (0 < (int)uVar4);
    }
  }
  else {
    param_3 = 0;
  }
  return param_3;
}



/* Address: 0x100b5d620 | FUN_100b5d620 */

bool FUN_100b5d620(vm_address_t param_1,vm_address_t param_2,int param_3)

{
  kern_return_t kVar1;
  vm_size_t local_18;
  
  local_18 = 0;
  kVar1 = _vm_read_overwrite(*(vm_map_t *)PTR__mach_task_self__100ea8778,param_1,(long)param_3,
                             param_2,&local_18);
  return kVar1 == 0 && (int)local_18 != 0;
}



/* Address: 0x100b5d66c | FUN_100b5d66c */

ulong FUN_100b5d66c(ulong *param_1)

{
  ulong uVar1;
  
  uVar1 = *param_1;
  if ((uVar1 & 1) != 0) {
    uVar1 = uVar1 & 0xffffffff8;
  }
  return uVar1;
}



/* Address: 0x100b5d680 | FUN_100b5d680 */

undefined8 FUN_100b5d680(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)((*(ulong *)(param_1 + 0x20) & 0x7ffffffffff8) + 8);
  if ((uVar1 & 1) != 0) {
    uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
  }
  return *(undefined8 *)(uVar1 + 0x18);
}



/* Address: 0x100b5d6a0 | FUN_100b5d6a0 */

undefined * FUN_100b5d6a0(ulong *param_1)

{
  ulong uVar1;
  undefined **ppuVar2;
  
  if (((ulong)param_1 & 1) == 0) {
    uVar1 = *param_1;
    if ((uVar1 & 1) != 0) {
      uVar1 = uVar1 & 0xffffffff8;
    }
    uVar1 = *(ulong *)((*(ulong *)(uVar1 + 0x20) & 0x7ffffffffff8) + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    ppuVar2 = (undefined **)(uVar1 + 0x18);
  }
  else {
    uVar1 = (ulong)param_1 >> 1 & 7;
    if ((0xb3UL >> uVar1 & 1) != 0) {
      return (undefined *)0x0;
    }
    ppuVar2 = &PTR_s_NSAtom_100f35c38 + uVar1 * 6;
  }
  return *ppuVar2;
}



/* Address: 0x100b5d704 | FUN_100b5d704 */

ulong FUN_100b5d704(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  lVar1 = param_1;
  FUN_100b5d46c(param_1,0x28);
  if ((int)lVar1 != 0) {
    uVar3 = *(ulong *)(param_1 + 0x20) & 0x7ffffffffff8;
    uVar2 = uVar3;
    FUN_100b5d46c(uVar3,0x20);
    if ((int)uVar2 != 0) {
      if ((*(ulong *)(uVar3 + 8) & 1) != 0) {
        uVar2 = *(ulong *)(uVar3 + 8) & 0xfffffffffffffffe;
        FUN_100b5d46c(uVar2,0xb0);
        if ((int)uVar2 == 0) {
          return 0;
        }
      }
      uVar2 = *(ulong *)((*(ulong *)(param_1 + 0x20) & 0x7ffffffffff8) + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      FUN_100b5d46c(uVar2,0x48);
      return uVar2;
    }
  }
  return 0;
}



/* Address: 0x100b5d788 | FUN_100b5d788 */

long FUN_100b5d788(long param_1)

{
  bool bVar1;
  long lVar2;
  byte *pbVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  
  iVar5 = 0x13;
  lVar6 = param_1;
  do {
    pbVar3 = *(byte **)((*(ulong *)(lVar6 + 0x20) & 0x7ffffffffff8) + 8);
    if (((ulong)pbVar3 & 1) != 0) {
      pbVar3 = *(byte **)((ulong)pbVar3 & 0xfffffffffffffffe);
    }
    if ((*pbVar3 >> 1 & 1) != 0) {
      return param_1;
    }
    lVar4 = *(long *)(lVar6 + 8);
    lVar2 = lVar4;
    FUN_100b5d704();
    bVar1 = iVar5 != 0;
    iVar5 = iVar5 + -1;
    if ((int)lVar2 == 0) {
      return 0;
    }
    param_1 = lVar6;
    lVar6 = lVar4;
  } while (bVar1);
  return 0;
}



/* Address: 0x100b5d800 | FUN_100b5d800 */

ulong FUN_100b5d800(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  uint *puVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  
  if (param_2 != 0) {
    uVar3 = *(ulong *)((*(ulong *)(param_1 + 0x20) & 0x7ffffffffff8) + 8);
    uVar4 = uVar3;
    if ((uVar3 & 1) != 0) {
      uVar4 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    if ((*(long *)(uVar4 + 0x30) != 0) &&
       (uVar1 = *(uint *)(*(long *)(uVar4 + 0x30) + 4), uVar1 != 0)) {
      if ((int)param_3 <= (int)uVar1) {
        uVar1 = param_3;
      }
      if ((uVar3 & 1) != 0) {
        uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
      }
      if (0 < (int)uVar1) {
        uVar4 = 0;
        uVar2 = **(uint **)(uVar3 + 0x30);
        puVar5 = *(uint **)(uVar3 + 0x30) + 2;
        puVar6 = (undefined4 *)(param_2 + 0x10);
        do {
          uVar7 = *(undefined8 *)(puVar5 + 2);
          *(undefined8 *)(puVar6 + -2) = *(undefined8 *)(puVar5 + 4);
          *(undefined8 *)(puVar6 + -4) = uVar7;
          *puVar6 = (int)uVar4;
          uVar4 = uVar4 + 1;
          puVar5 = (uint *)((long)puVar5 + (ulong)uVar2);
          puVar6 = puVar6 + 6;
        } while (uVar1 != uVar4);
      }
      return (ulong)uVar1;
    }
  }
  return 0;
}



/* Address: 0x100b5d890 | FUN_100b5d890 */

long FUN_100b5d890(ulong *param_1,int param_2,ulong *param_3)

{
  long lVar1;
  ulong uVar2;
  uint *puVar3;
  
  if (((ulong)param_1 & 1) != 0) {
    if (((ulong)param_1 & 0xe) == 6) {
      uVar2 = (long)param_1 >> 8;
    }
    else {
      if (((ulong)param_1 & 0xe) != 0xc) {
        return 0;
      }
      uVar2 = (ulong)param_1 & 0xfffffffffffffff0;
    }
    *param_3 = uVar2;
    return 1;
  }
  uVar2 = *param_1;
  if ((uVar2 & 1) != 0) {
    uVar2 = uVar2 & 0xffffffff8;
  }
  uVar2 = *(ulong *)((*(ulong *)(uVar2 + 0x20) & 0x7ffffffffff8) + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  puVar3 = *(uint **)(uVar2 + 0x30);
  if ((int)puVar3[1] <= param_2) {
    return 0;
  }
  lVar1 = (long)**(int **)((long)puVar3 + (ulong)*puVar3 * (long)param_2 + 8) + (long)param_1;
  FUN_100b5d620(lVar1,param_3,*(undefined4 *)((long)puVar3 + (ulong)*puVar3 * (long)param_2 + 0x24))
  ;
  return lVar1;
}



/* Address: 0x100b5d928 | FUN_100b5d928 */

ulong FUN_100b5d928(ulong param_1)

{
  return param_1 >> 4;
}



/* Address: 0x100b5d930 | FUN_100b5d930 */

void FUN_100b5d930(ulong *param_1)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  
  if (((param_1 != (ulong *)0x0) && (((ulong)param_1 & 1) == 0)) &&
     (puVar2 = param_1, FUN_100b5d46c(param_1,0x28), (int)puVar2 != 0)) {
    uVar3 = *param_1;
    if ((uVar3 & 1) != 0) {
      uVar3 = uVar3 & 0xffffffff8;
    }
    FUN_100b5d46c(uVar3,0x28);
    if ((int)uVar3 != 0) {
      uVar1 = (uint)*param_1;
      if ((*param_1 & 1) != 0) {
        uVar1 = uVar1 & 0xfffffff8;
      }
      FUN_100b5da28();
      if ((uVar1 != 0) && (puVar2 = param_1, FUN_100b5da28(), (int)puVar2 != 0)) {
        uVar3 = *param_1;
        if ((uVar3 & 1) != 0) {
          uVar3 = uVar3 & 0xffffffff8;
        }
        FUN_100b5d788();
        if (uVar3 != 0) {
          uVar3 = *(ulong *)((*(ulong *)(uVar3 + 0x20) & 0x7ffffffffff8) + 8);
          if ((uVar3 & 1) != 0) {
            uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
          }
          if (*(char **)(uVar3 + 0x18) != (char *)0x0) {
            _strcmp(*(char **)(uVar3 + 0x18),"NSBlock");
          }
        }
      }
    }
  }
  return;
}



/* Address: 0x100b5da28 | FUN_100b5da28 */

void FUN_100b5da28(long param_1)

{
  int iVar1;
  long lVar2;
  uint *puVar3;
  long lVar4;
  undefined8 uVar5;
  byte *pbVar6;
  ulong uVar7;
  uint *puVar8;
  byte *pbVar9;
  uint uVar10;
  undefined8 local_d0;
  int local_c8;
  byte *local_c0;
  undefined1 auStack_ac [100];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar2 = param_1;
  FUN_100b5d46c(param_1,0x28);
  if (((int)lVar2 != 0) && (lVar2 = param_1, FUN_100b5d704(), (int)lVar2 != 0)) {
    uVar7 = *(ulong *)((*(ulong *)(param_1 + 0x20) & 0x7ffffffffff8) + 8);
    if ((uVar7 & 1) != 0) {
      uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
    }
    iVar1 = (int)*(undefined8 *)(uVar7 + 0x18);
    FUN_100b5e0a4();
    if (iVar1 != 0) {
      uVar7 = *(ulong *)((*(ulong *)(param_1 + 0x20) & 0x7ffffffffff8) + 8);
      if ((uVar7 & 1) != 0) {
        uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
      }
      puVar8 = *(uint **)(uVar7 + 0x30);
      if ((((puVar8 != (uint *)0x0) &&
           (puVar3 = puVar8, FUN_100b5d46c(puVar8,0x28), (int)puVar3 != 0)) && (puVar8[1] != 0)) &&
         (puVar8[1] != 1)) {
        lVar2 = (long)puVar8 + (ulong)*puVar8 + 8;
        uVar10 = 1;
        while ((lVar4 = lVar2, FUN_100b5d620(lVar2,&local_d0,0x20), (int)lVar4 != 0 &&
               (lVar4 = lVar2, FUN_100b5d46c(lVar2,*puVar8), (int)lVar4 != 0))) {
          uVar5 = local_d0;
          FUN_100b5d46c(local_d0,4);
          if (((int)uVar5 == 0) ||
             ((iVar1 = local_c8, FUN_100b5e0a4(), pbVar9 = local_c0, iVar1 == 0 ||
              ((byte *)0xffffffffffffff9b < local_c0)))) break;
          pbVar6 = local_c0;
          FUN_100b5d504(local_c0,auStack_ac,100);
          if (((int)pbVar6 == 0) ||
             (((int)pbVar6 < 1 || ((*(uint *)(&DAT_100c981fc + (ulong)*pbVar9 * 4) & 7) == 0))))
          break;
          uVar7 = (ulong)pbVar6 & 0xffffffff;
          while ((ulong)*pbVar9 != 0 || (*(uint *)(&DAT_100c981fc + (ulong)*pbVar9 * 4) & 7) != 0) {
            uVar7 = uVar7 - 1;
            pbVar9 = pbVar9 + 1;
            if (uVar7 == 0) goto LAB_100b5dad4;
          }
          lVar2 = lVar2 + (ulong)*puVar8;
          uVar10 = uVar10 + 1;
          if (puVar8[1] <= uVar10) break;
        }
      }
    }
  }
LAB_100b5dad4:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100b5dbe0 | FUN_100b5dbe0 */

uint FUN_100b5dbe0(ulong param_1)

{
  byte bVar1;
  byte *pbVar2;
  
  if ((param_1 & 0xf) == 5) {
    return (uint)param_1 >> 4 & 0xf;
  }
  bVar1 = *(byte *)(param_1 + 8);
  if ((bVar1 & 5) == 4) {
    pbVar2 = (byte *)(param_1 + 0x10);
    if ((bVar1 & 0x60) != 0) {
      pbVar2 = *(byte **)pbVar2;
    }
    return (uint)*pbVar2;
  }
  if ((bVar1 & 0x60) != 0) {
    return *(uint *)(param_1 + 0x18);
  }
  return *(uint *)(param_1 + 0x10);
}



/* Address: 0x100b5dc34 | FUN_100b5dc34 */

void FUN_100b5dc34(ulong param_1,byte *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  byte *pbVar6;
  
  uVar4 = param_1 >> 8;
  uVar3 = param_1 >> 4 & 0xf;
  uVar2 = (uint)uVar3;
  uVar1 = uVar2;
  if (param_3 <= (int)uVar2) {
    uVar1 = param_3 - 1;
  }
  uVar5 = (ulong)uVar1;
  if (uVar2 < 8) {
    pbVar6 = param_2;
    if (0 < (int)uVar1) {
      do {
        *pbVar6 = (byte)uVar4 & 0x7f;
        uVar4 = uVar4 >> 8;
        uVar5 = uVar5 - 1;
        pbVar6 = pbVar6 + 1;
      } while (uVar5 != 0);
    }
  }
  else if (uVar2 < 10) {
    if (0 < (int)uVar1) {
      uVar2 = uVar2 * 6;
      pbVar6 = param_2;
      do {
        uVar2 = uVar2 - 6;
        *pbVar6 = "eilotrm.apdnsIc ufkMShjTRxgC4013bDNvwyUL2O856P-B79AFKEWV_zGJ/HYX"
                  [uVar4 >> ((ulong)uVar2 & 0x3f) & 0x3f];
        uVar5 = uVar5 - 1;
        pbVar6 = pbVar6 + 1;
      } while (uVar5 != 0);
    }
  }
  else if (uVar2 < 0xc) {
    if (0 < (int)uVar1) {
      uVar2 = uVar2 * 5;
      pbVar6 = param_2;
      do {
        uVar2 = uVar2 - 5;
        *pbVar6 = "eilotrm.apdnsIc ufkMShjTRxgC4013bDNvwyUL2O856P-B79AFKEWV_zGJ/HYX"
                  [uVar4 >> ((ulong)uVar2 & 0x3f) & 0x1f];
        uVar5 = uVar5 - 1;
        pbVar6 = pbVar6 + 1;
      } while (uVar5 != 0);
    }
  }
  else {
    *param_2 = 0;
  }
  param_2[uVar3] = 0;
  return;
}


