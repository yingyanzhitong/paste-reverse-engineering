/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100b2126c | SentryCrashReportFilterStringToData::filterReports:onCompletion: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void SentryCrashReportFilterStringToData::filterReports_onCompletion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,uint param_5)

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
  IVar1 = objc_stub::count(param_3,param_3,param_4,(ulong)param_5);
  IVar1 = objc_stub::arrayWithCapacity_((ID)&_OBJC_CLASS___NSMutableArray,IVar1);
  lStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (long *)0x0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  IVar2 = objc_stub::countByEnumeratingWithState_objects_count_(param_3,&local_130,auStack_e8,0x10);
  if (IVar2 != 0) {
    lVar4 = *local_120;
    do {
      IVar5 = 0;
      do {
        if (*local_120 != lVar4) {
          _objc_enumerationMutation(param_3);
        }
        IVar3 = objc_stub::dataUsingEncoding_(*(ID *)(lStack_128 + IVar5 * 8),4);
        if (IVar3 == 0) {
          IVar2 = objc_stub::class(param_1);
          IVar2 = objc_stub::description(IVar2);
          FUN_100b52f54(IVar2,0,&cf_CouldnotconvertreporttoUTF_8);
          if (param_4 != 0) {
            (**(code **)(param_4 + 0x10))(param_4,IVar1,0,IVar2);
          }
          goto LAB_100b21424;
        }
        objc_stub::addObject_(IVar1,IVar3);
        IVar5 = IVar5 + 1;
      } while (IVar2 != IVar5);
      IVar2 = objc_stub::countByEnumeratingWithState_objects_count_
                        (param_3,&local_130,auStack_e8,0x10);
    } while (IVar2 != 0);
  }
  if (param_4 != 0) {
    (**(code **)(param_4 + 0x10))(param_4,IVar1,1,0);
  }
LAB_100b21424:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}



/* Address: 0x100b21478 | SentryCrashDoctorParam::className */

/* Function Stack Size: 0x10 bytes */

ID SentryCrashDoctorParam::className(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x10);
}



/* Address: 0x100b21480 | SentryCrashDoctorParam::setClassName: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryCrashDoctorParam::setClassName_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x10) = param_3;
  return;
}



/* Address: 0x100b2148c | SentryCrashDoctorParam::previousClassName */

/* Function Stack Size: 0x10 bytes */

ID SentryCrashDoctorParam::previousClassName(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x18);
}



/* Address: 0x100b21494 | SentryCrashDoctorParam::setPreviousClassName: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryCrashDoctorParam::setPreviousClassName_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x18) = param_3;
  return;
}



/* Address: 0x100b214a0 | SentryCrashDoctorParam::isInstance */

/* Function Stack Size: 0x10 bytes */

bool SentryCrashDoctorParam::isInstance(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + 8);
}



/* Address: 0x100b214a8 | SentryCrashDoctorParam::setIsInstance: */

/* Function Stack Size: 0x14 bytes */

void SentryCrashDoctorParam::setIsInstance_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + 8) = (char)param_3;
  return;
}



/* Address: 0x100b214b0 | SentryCrashDoctorParam::address */

/* Function Stack Size: 0x10 bytes */

unsigned_long_long SentryCrashDoctorParam::address(ID param_1,SEL param_2)

{
  return *(unsigned_long_long *)(param_1 + 0x20);
}



/* Address: 0x100b214b8 | SentryCrashDoctorParam::setAddress: */

/* Function Stack Size: 0x18 bytes */

void SentryCrashDoctorParam::setAddress_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  *(unsigned_long_long *)(param_1 + 0x20) = param_3;
  return;
}



/* Address: 0x100b214c0 | SentryCrashDoctorParam::value */

/* Function Stack Size: 0x10 bytes */

ID SentryCrashDoctorParam::value(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x28);
}



/* Address: 0x100b214c8 | SentryCrashDoctorParam::setValue: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryCrashDoctorParam::setValue_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x28) = param_3;
  return;
}



/* Address: 0x100b214d4 | SentryCrashDoctorParam::type */

/* Function Stack Size: 0x10 bytes */

ID SentryCrashDoctorParam::type(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x30);
}



/* Address: 0x100b214dc | SentryCrashDoctorParam::setType: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryCrashDoctorParam::setType_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x30) = param_3;
  return;
}



/* Address: 0x100b214e8 | SentryCrashDoctorParam::.cxx_destruct */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryCrashDoctorParam::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



/* Address: 0x100b21530 | SentryCrashDoctorFunctionCall::descriptionForObjCCall */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryCrashDoctorFunctionCall::descriptionForObjCCall(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  int iVar4;
  ulong uVar5;
  
  IVar1 = objc_stub::name(param_1);
  IVar1 = objc_stub::isEqualToString_(IVar1,&cf_objc_msgSend);
  if ((int)IVar1 == 0) {
    IVar1 = 0;
  }
  else {
    IVar1 = objc_stub::FUN_100c07900(param_1);
    IVar1 = objc_stub::objectAtIndex_(IVar1,0);
    IVar2 = objc_stub::FUN_100c08100(IVar1);
    if (IVar2 == 0) {
      objc_stub::FUN_100bff340(IVar1);
    }
    IVar1 = objc_stub::FUN_100c07900(param_1);
    IVar1 = objc_stub::objectAtIndex_(IVar1,1);
    IVar2 = objc_stub::type(IVar1);
    IVar2 = objc_stub::isEqualToString_(IVar2,&cf_string);
    if ((int)IVar2 == 0) {
      IVar1 = 0;
    }
    else {
      IVar1 = objc_stub::value(IVar1);
      IVar1 = objc_stub::FUN_100bff8e0(IVar1,&cf__);
      IVar2 = objc_stub::count(IVar1);
      objc_stub::objectAtIndex_(IVar1,0);
      IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSMutableString,&cf_______);
      iVar4 = (int)IVar2;
      if (1 < iVar4) {
        uVar5 = 0;
        do {
          objc_stub::appendString_(IVar1,&cf__);
          if (uVar5 < 2) {
            IVar2 = objc_stub::FUN_100c07900(param_1);
            IVar2 = objc_stub::objectAtIndex_(IVar2,uVar5 + 2);
            IVar3 = objc_stub::value(IVar2);
            if (IVar3 == 0) {
              IVar3 = objc_stub::FUN_100c08100(IVar2);
              if (IVar3 == 0) {
                IVar3 = objc_stub::FUN_100bff340(IVar2);
                if (IVar3 == 0) {
                  objc_stub::appendString_(IVar1,&cf__);
                }
                else {
                  objc_stub::FUN_100bff340(IVar2);
                  objc_stub::FUN_100c059c0(IVar2);
                  objc_stub::appendFormat_(IVar1,&cf_______);
                }
              }
              else {
                IVar2 = objc_stub::FUN_100c08100(IVar2);
                objc_stub::appendString_(IVar1,IVar2);
              }
            }
            else {
              IVar3 = objc_stub::type(IVar2);
              IVar3 = objc_stub::isEqualToString_(IVar3,&cf_string);
              IVar2 = objc_stub::value(IVar2);
              if ((int)IVar3 == 0) {
                objc_stub::appendString_(IVar1,IVar2);
              }
              else {
                objc_stub::appendFormat_(IVar1,&cf_____);
              }
            }
          }
          else {
            objc_stub::appendString_(IVar1,&cf__);
          }
          if ((long)uVar5 < (long)(iVar4 + -2)) {
            objc_stub::appendString_(IVar1,&cf_space_s_);
          }
          uVar5 = uVar5 + 1;
        } while (iVar4 - 1 != uVar5);
      }
      objc_stub::appendString_(IVar1,&cf__);
    }
  }
  return IVar1;
}



/* Address: 0x100b2192c | SentryCrashDoctorFunctionCall::descriptionWithParamCount: */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x14 bytes */

ID SentryCrashDoctorFunctionCall::descriptionWithParamCount_(ID param_1,SEL param_2,int param_3)

{
  ulong uVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ulong uVar5;
  
  IVar2 = objc_stub::FUN_100c01080(param_1);
  if (IVar2 == 0) {
    IVar2 = objc_stub::FUN_100c07900(param_1);
    IVar2 = objc_stub::count(IVar2);
    if ((int)IVar2 < (int)param_3) {
      IVar2 = objc_stub::FUN_100c07900(param_1);
      IVar2 = objc_stub::count(IVar2);
      param_3 = (int)IVar2;
    }
    IVar2 = objc_stub::string((ID)&_OBJC_CLASS___NSMutableString);
    objc_stub::name(param_1);
    objc_stub::appendFormat_(IVar2,&cf_Function___);
    if (0 < (int)param_3) {
      uVar5 = 0;
      do {
        IVar3 = objc_stub::FUN_100c07900(param_1);
        IVar3 = objc_stub::objectAtIndex_(IVar3,uVar5);
        uVar1 = uVar5 + 1;
        objc_stub::appendFormat_(IVar2,&cf_Param_d_);
        IVar4 = objc_stub::FUN_100bff340(IVar3);
        if (IVar4 != 0) {
          objc_stub::FUN_100bff340(IVar3);
          objc_stub::FUN_100c059c0(IVar3);
          objc_stub::appendFormat_(IVar2,&cf_______);
        }
        IVar4 = objc_stub::value(IVar3);
        if (IVar4 != 0) {
          objc_stub::value(IVar3);
          objc_stub::appendFormat_(IVar2,&cf___);
        }
        IVar4 = objc_stub::FUN_100c08100(IVar3);
        if (IVar4 != 0) {
          objc_stub::FUN_100c08100(IVar3);
          objc_stub::appendFormat_(IVar2,&cf__was___);
        }
        if (uVar5 < param_3 - 1) {
          objc_stub::appendString_(IVar2,&cf_newline_s_);
        }
        uVar5 = uVar1;
      } while (uVar1 != param_3);
    }
  }
  return IVar2;
}



/* Address: 0x100b21bd8 | SentryCrashDoctorFunctionCall::name */

/* Function Stack Size: 0x10 bytes */

ID SentryCrashDoctorFunctionCall::name(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 8);
}



/* Address: 0x100b21be0 | SentryCrashDoctorFunctionCall::setName: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryCrashDoctorFunctionCall::setName_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 8) = param_3;
  return;
}



/* Address: 0x100b21bec | SentryCrashDoctorFunctionCall::params */

/* Function Stack Size: 0x10 bytes */

ID SentryCrashDoctorFunctionCall::params(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x10);
}



/* Address: 0x100b21bf4 | SentryCrashDoctorFunctionCall::setParams: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryCrashDoctorFunctionCall::setParams_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x10) = param_3;
  return;
}



/* Address: 0x100b21c00 | SentryCrashDoctorFunctionCall::.cxx_destruct */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryCrashDoctorFunctionCall::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



/* Address: 0x100b21c30 | SentryCrashDoctor::doctor */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryCrashDoctor::doctor(ID param_1,SEL param_2)

{
  ID IVar1;
  
  _objc_alloc();
  IVar1 = objc_stub::init(param_1);
  return IVar1;
}



/* Address: 0x100b21c48 | SentryCrashDoctor::recrashReport: */

/* Function Stack Size: 0x18 bytes */

ID SentryCrashDoctor::recrashReport_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = objc_stub::objectForKey_(param_3,&cf_recrash_report);
  return IVar1;
}



/* Address: 0x100b21c58 | SentryCrashDoctor::systemReport: */

/* Function Stack Size: 0x18 bytes */

ID SentryCrashDoctor::systemReport_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = objc_stub::objectForKey_(param_3,&cf_system);
  return IVar1;
}



/* Address: 0x100b21c68 | SentryCrashDoctor::crashReport: */

/* Function Stack Size: 0x18 bytes */

ID SentryCrashDoctor::crashReport_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = objc_stub::objectForKey_(param_3,&cf_crash);
  return IVar1;
}



/* Address: 0x100b21c78 | SentryCrashDoctor::infoReport: */

/* Function Stack Size: 0x18 bytes */

ID SentryCrashDoctor::infoReport_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = objc_stub::objectForKey_(param_3,&cf_report);
  return IVar1;
}



/* Address: 0x100b21c88 | SentryCrashDoctor::errorReport: */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryCrashDoctor::errorReport_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100c002c0(param_1);
  IVar1 = objc_stub::objectForKey_(IVar1,&cf_error);
  return IVar1;
}



/* Address: 0x100b21cd4 | SentryCrashDoctor::cpuFamily: */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

int SentryCrashDoctor::cpuFamily_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  int iVar3;
  
  IVar1 = objc_stub::FUN_100c100a0(param_1);
  IVar1 = objc_stub::objectForKey_(IVar1,&cf_cpu_arch);
  IVar2 = objc_stub::rangeOfString_(IVar1,&cf_arm);
  if (IVar2 == 0) {
    iVar3 = 1;
  }
  else {
    IVar2 = objc_stub::rangeOfString_(IVar1,&cf_i);
    if ((IVar2 == 0) && (IVar2 = objc_stub::rangeOfString_(IVar1,&cf_86), IVar2 == 2)) {
      iVar3 = 2;
    }
    else {
      IVar1 = objc_stub::FUN_100c086c0(IVar1,&cf_x86_64,1);
      iVar3 = 0;
      if (IVar1 != 0x7fffffffffffffff) {
        iVar3 = 3;
      }
    }
  }
  return iVar3;
}



/* Address: 0x100b21da0 | SentryCrashDoctor::registerNameForFamily:paramIndex: */

/* Function Stack Size: 0x18 bytes */

ID SentryCrashDoctor::registerNameForFamily_paramIndex_
             (ID param_1,SEL param_2,int param_3,int param_4)

{
  undefined **ppuVar1;
  
  if (param_3 == 3) {
    if (3 < param_4) {
      return 0;
    }
    ppuVar1 = &PTR_cf_rdi_100f34628;
  }
  else if (param_3 == 2) {
    if (3 < param_4) {
      return 0;
    }
    ppuVar1 = &PTR_cf_edi_100f34608;
  }
  else {
    if ((param_3 != 1) || (3 < param_4)) {
      return 0;
    }
    ppuVar1 = &PTR_cf_r0_100f345e8;
  }
  return (ID)ppuVar1[(int)param_4];
}



/* Address: 0x100b21e00 | SentryCrashDoctor::mainExecutableNameForReport: */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryCrashDoctor::mainExecutableNameForReport_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100c03940(param_1);
  IVar1 = objc_stub::objectForKey_(IVar1,&cf_process_name);
  return IVar1;
}



/* Address: 0x100b21e4c | SentryCrashDoctor::crashedThreadReport: */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryCrashDoctor::crashedThreadReport_(ID param_1,SEL param_2,ID param_3)

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
  IVar1 = objc_stub::FUN_100c002c0(param_1);
  self = objc_stub::objectForKey_(IVar1,&cf_crashed_thread);
  if (self == 0) {
    uStack_108 = 0;
    local_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    local_130 = 0;
    uStack_118 = 0;
    local_120 = (long *)0x0;
    IVar1 = objc_stub::objectForKey_(IVar1,&cf_threads);
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
          IVar3 = objc_stub::objectForKey_(self,&cf_crashed);
          IVar3 = objc_stub::boolValue(IVar3);
          if ((IVar3 & 1) != 0) goto LAB_100b21fa4;
          IVar5 = IVar5 + 1;
        } while (IVar2 != IVar5);
        IVar2 = objc_stub::countByEnumeratingWithState_objects_count_
                          (IVar1,&local_130,auStack_f0,0x10);
      } while (IVar2 != 0);
    }
    self = 0;
  }
LAB_100b21fa4:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return self;
}



/* Address: 0x100b21ff4 | SentryCrashDoctor::backtraceFromThreadReport: */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryCrashDoctor::backtraceFromThreadReport_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = objc_stub::objectForKey_(param_3,&cf_backtrace);
  IVar1 = objc_stub::objectForKey_(IVar1,&cf_contents);
  return IVar1;
}



/* Address: 0x100b2204c | SentryCrashDoctor::basicRegistersFromThreadReport: */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryCrashDoctor::basicRegistersFromThreadReport_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = objc_stub::objectForKey_(param_3,&cf_registers);
  IVar1 = objc_stub::objectForKey_(IVar1,&cf_basic);
  return IVar1;
}



/* Address: 0x100b220a4 | SentryCrashDoctor::isInvalidAddress: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

bool SentryCrashDoctor::isInvalidAddress_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ID IVar2;
  
  IVar2 = objc_stub::objectForKey_(param_3,&cf_mach);
  if (IVar2 == 0) {
    IVar2 = objc_stub::objectForKey_(param_3,&cf_signal);
    IVar2 = objc_stub::objectForKey_(IVar2,&cf_name);
    IVar2 = objc_stub::isEqualToString_(IVar2,&cf_SIGSEGV);
    bVar1 = (bool)IVar2;
  }
  else {
    IVar2 = objc_stub::objectForKey_(IVar2,&cf_exception_name);
    IVar2 = objc_stub::isEqualToString_(IVar2,&cf_EXC_BAD_ACCESS);
    bVar1 = (bool)IVar2;
  }
  return bVar1;
}



/* Address: 0x100b2218c | SentryCrashDoctor::isMathError: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

bool SentryCrashDoctor::isMathError_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ID IVar2;
  
  IVar2 = objc_stub::objectForKey_(param_3,&cf_mach);
  if (IVar2 == 0) {
    IVar2 = objc_stub::objectForKey_(param_3,&cf_signal);
    IVar2 = objc_stub::objectForKey_(IVar2,&cf_name);
    IVar2 = objc_stub::isEqualToString_(IVar2,&cf_SIGFPE);
    bVar1 = (bool)IVar2;
  }
  else {
    IVar2 = objc_stub::objectForKey_(IVar2,&cf_exception_name);
    IVar2 = objc_stub::isEqualToString_(IVar2,&cf_EXC_ARITHMETIC);
    bVar1 = (bool)IVar2;
  }
  return bVar1;
}



/* Address: 0x100b22274 | SentryCrashDoctor::isMemoryCorruption: */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

bool SentryCrashDoctor::isMemoryCorruption_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  bool bVar4;
  ID IVar5;
  long lVar6;
  ID IVar7;
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
  IVar1 = objc_stub::FUN_100c00420(param_1);
  IVar1 = objc_stub::objectForKey_(IVar1,&cf_notable_addresses);
  lStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (long *)0x0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  IVar1 = objc_stub::FUN_100c074a0(IVar1);
  IVar2 = objc_stub::countByEnumeratingWithState_objects_count_(IVar1,&local_130,auStack_f0,0x10);
  if (IVar2 == 0) {
    bVar4 = 0;
  }
  else {
    lVar6 = *local_120;
    do {
      IVar7 = 0;
      do {
        if (*local_120 != lVar6) {
          _objc_enumerationMutation(IVar1);
        }
        IVar5 = *(ID *)(lStack_128 + IVar7 * 8);
        IVar3 = objc_stub::objectForKey_(IVar5,&cf_type);
        IVar3 = objc_stub::isEqualToString_(IVar3,&cf_string);
        if ((int)IVar3 != 0) {
          IVar3 = objc_stub::objectForKey_(IVar5,&cf_value);
          IVar5 = objc_stub::rangeOfString_(IVar3,&cf_autoreleasepoolpage);
          if (((IVar5 != 0x7fffffffffffffff) &&
              (IVar5 = objc_stub::rangeOfString_(IVar3,&cf_corrupted), IVar5 != 0x7fffffffffffffff))
             || (IVar3 = objc_stub::rangeOfString_(IVar3,&cf_incorrectchecksumforfreedobject),
                IVar3 != 0x7fffffffffffffff)) {
            bVar4 = 1;
            goto LAB_100b2242c;
          }
        }
        IVar7 = IVar7 + 1;
      } while (IVar2 != IVar7);
      IVar2 = objc_stub::countByEnumeratingWithState_objects_count_
                        (IVar1,&local_130,auStack_f0,0x10);
    } while (IVar2 != 0);
    bVar4 = 0;
  }
LAB_100b2242c:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return bVar4;
}



/* Address: 0x100b22484 | SentryCrashDoctor::wasProgramTerminationRequested: */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

bool SentryCrashDoctor::wasProgramTerminationRequested_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = objc_stub::objectForKeyedSubscript_(param_3,&cf_signal);
  IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_signal);
  IVar1 = objc_stub::intValue(IVar1);
  return (bool)((int)IVar1 == 0xf);
}



/* Address: 0x100b224f8 | SentryCrashDoctor::lastFunctionCall: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryCrashDoctor::lastFunctionCall_(ID param_1,SEL param_2,ID param_3)

{
  class_t *pcVar1;
  ID self;
  ID IVar2;
  ID self_00;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  ID self_01;
  ID IVar6;
  ID IVar7;
  ID IVar8;
  ID IVar9;
  undefined8 uVar10;
  long lVar11;
  ID IVar12;
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
  pcVar1 = &objc::class_t::SentryCrashDoctorFunctionCall;
  _objc_alloc();
  self = objc_stub::init((ID)pcVar1);
  IVar2 = objc_stub::FUN_100c00420(param_1,param_3);
  self_00 = objc_stub::objectForKey_(IVar2,&cf_notable_addresses);
  IVar3 = objc_stub::FUN_100c001e0(param_1,param_3);
  IVar2 = objc_stub::FUN_100bfe400(param_1,IVar2);
  IVar4 = objc_stub::FUN_100c08d40(param_1,IVar3,0);
  objc_stub::FUN_100c08d40(param_1,IVar3,1);
  objc_stub::FUN_100c08d40(param_1,IVar3,2);
  objc_stub::FUN_100c08d40(param_1,IVar3,3);
  IVar3 = objc_stub::FUN_100bfe040((ID)&_OBJC_CLASS___NSArray,IVar4);
  IVar4 = objc_stub::arrayWithCapacity_((ID)&_OBJC_CLASS___NSMutableArray,4);
  lStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (long *)0x0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  IVar5 = objc_stub::countByEnumeratingWithState_objects_count_(IVar3,&local_130,auStack_f0,0x10);
  if (IVar5 != 0) {
    lVar11 = *local_120;
    do {
      IVar12 = 0;
      do {
        if (*local_120 != lVar11) {
          _objc_enumerationMutation(IVar3);
        }
        uVar10 = *(undefined8 *)(lStack_128 + IVar12 * 8);
        pcVar1 = &objc::class_t::SentryCrashDoctorParam;
        _objc_alloc();
        self_01 = objc_stub::init((ID)pcVar1);
        IVar6 = objc_stub::objectForKey_(IVar2,uVar10);
        IVar6 = objc_stub::unsignedLongLongValue(IVar6);
        objc_stub::FUN_100c0a440(self_01,IVar6);
        IVar6 = objc_stub::objectForKey_(self_00,uVar10);
        if (IVar6 == 0) {
          objc_stub::address(self_01);
          IVar6 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf__p);
          objc_stub::FUN_100c0e840(self_01,IVar6);
        }
        else {
          IVar7 = objc_stub::objectForKey_(IVar6,&cf_type);
          objc_stub::FUN_100c0e600(self_01,IVar7);
          IVar7 = objc_stub::objectForKey_(IVar6,&cf_class);
          IVar8 = objc_stub::objectForKey_(IVar6,&cf_last_deallocated_obj);
          IVar6 = objc_stub::objectForKey_(IVar6,&cf_value);
          IVar9 = objc_stub::type(self_01);
          IVar9 = objc_stub::isEqualToString_(IVar9,&cf_string);
          if ((int)IVar9 == 0) {
            IVar6 = objc_stub::type(self_01);
            IVar6 = objc_stub::isEqualToString_(IVar6,&cf_objc_object);
            if ((int)IVar6 == 0) {
              IVar6 = objc_stub::type(self_01);
              IVar6 = objc_stub::isEqualToString_(IVar6,&cf_objc_class);
              if ((int)IVar6 == 0) goto LAB_100b228c8;
              objc_stub::FUN_100c0ae00(self_01,IVar7);
              uVar10 = 0;
            }
            else {
              objc_stub::FUN_100c0ae00(self_01,IVar7);
              uVar10 = 1;
            }
            objc_stub::FUN_100c0c480(self_01,uVar10);
          }
          else {
            objc_stub::FUN_100c0e840(self_01,IVar6);
          }
LAB_100b228c8:
          objc_stub::FUN_100c0d280(self_01,IVar8);
        }
        objc_stub::addObject_(IVar4,self_01);
        IVar12 = IVar12 + 1;
      } while (IVar5 != IVar12);
      IVar5 = objc_stub::countByEnumeratingWithState_objects_count_
                        (IVar3,&local_130,auStack_f0,0x10);
    } while (IVar5 != 0);
  }
  objc_stub::FUN_100c0cfa0(self,IVar4);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_70) {
    return self;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}



/* Address: 0x100b229c0 | SentryCrashDoctor::zombieCall: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryCrashDoctor::zombieCall_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined8 uVar2;
  
  IVar1 = objc_stub::name(param_3);
  IVar1 = objc_stub::isEqualToString_(IVar1,&cf_objc_msgSend);
  if ((int)IVar1 == 0) {
LAB_100b22a98:
    IVar1 = objc_stub::name(param_3);
    IVar1 = objc_stub::isEqualToString_(IVar1,&cf_objc_retain);
    if ((IVar1 & 1) != 0) {
      IVar1 = objc_stub::FUN_100c07900(param_3);
      IVar1 = objc_stub::count(IVar1);
      if (IVar1 != 0) {
        IVar1 = objc_stub::FUN_100c07900(param_3);
        IVar1 = objc_stub::objectAtIndex_(IVar1,0);
        IVar1 = objc_stub::FUN_100c08100(IVar1);
        if (IVar1 != 0) {
          uVar2 = 1;
          goto LAB_100b22b40;
        }
      }
    }
    IVar1 = 0;
  }
  else {
    IVar1 = objc_stub::FUN_100c07900(param_3);
    IVar1 = objc_stub::count(IVar1);
    if (IVar1 == 0) goto LAB_100b22a98;
    IVar1 = objc_stub::FUN_100c07900(param_3);
    IVar1 = objc_stub::objectAtIndex_(IVar1,0);
    IVar1 = objc_stub::FUN_100c08100(IVar1);
    if (IVar1 == 0) goto LAB_100b22a98;
    uVar2 = 4;
LAB_100b22b40:
    IVar1 = objc_stub::FUN_100c010e0(param_3,uVar2);
  }
  return IVar1;
}



/* Address: 0x100b22b88 | SentryCrashDoctor::isStackOverflow: */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

bool SentryCrashDoctor::isStackOverflow_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = objc_stub::objectForKey_(param_3,&cf_stack);
  IVar1 = objc_stub::objectForKey_(IVar1,&cf_overflow);
  IVar1 = objc_stub::boolValue(IVar1);
  return (bool)IVar1;
}



/* Address: 0x100b22bf8 | SentryCrashDoctor::diagnoseCrash: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryCrashDoctor::diagnoseCrash_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  cfstringStruct *pcVar3;
  ID IVar4;
  
  IVar1 = objc_stub::FUN_100c00420(param_1,param_3);
  IVar2 = objc_stub::FUN_100c01e40(param_1,param_3);
  IVar1 = objc_stub::FUN_100c05ca0(param_1,IVar1);
  if ((int)IVar1 == 0) {
    IVar1 = objc_stub::objectForKey_(IVar2,&cf_type);
    IVar1 = objc_stub::isEqualToString_(IVar1,&cf_nsexception);
    if ((int)IVar1 == 0) {
      IVar1 = objc_stub::FUN_100c05ae0(param_1,param_3);
      if ((IVar1 & 1) == 0) {
        IVar1 = objc_stub::FUN_100c05ac0(param_1,IVar2);
        if ((IVar1 & 1) == 0) {
          IVar1 = objc_stub::FUN_100c06040(param_1,param_3);
          IVar1 = objc_stub::FUN_100c11660(param_1,IVar1);
          if (IVar1 == 0) {
            IVar1 = objc_stub::FUN_100c059e0(param_1,IVar2);
            if ((int)IVar1 == 0) {
              IVar2 = objc_stub::FUN_100c11400(param_1,IVar2);
              pcVar3 = &cf_GracefulOSterminationrequested_;
              if ((int)IVar2 == 0) {
                pcVar3 = (cfstringStruct *)0x0;
              }
            }
            else {
              IVar1 = objc_stub::objectForKey_(IVar2,&cf_address);
              IVar1 = objc_stub::unsignedLongLongValue(IVar1);
              if (IVar1 == 0) {
                pcVar3 = &cf_Attemptedtodereferencenullpointer_;
              }
              else {
                IVar2 = objc_stub::objectForKeyedSubscript_(IVar2,&cf_mach);
                IVar2 = objc_stub::objectForKeyedSubscript_(IVar2,&cf_code_name);
                if (IVar2 == 0) {
                  pcVar3 = (cfstringStruct *)
                           objc_stub::stringWithFormat_
                                     ((ID)&_OBJC_CLASS___NSString,
                                      &cf_Attemptedtodereferencegarbagepointerat_p_);
                }
                else {
                  pcVar3 = (cfstringStruct *)
                           objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf___at_p_);
                }
              }
            }
          }
          else {
            pcVar3 = (cfstringStruct *)
                     objc_stub::stringWithFormat_
                               ((ID)&_OBJC_CLASS___NSString,&cf_Possiblezombieincall___);
          }
        }
        else {
          pcVar3 = &cf_Matherror_usuallycausedfromdivisionby0__;
        }
      }
      else {
        pcVar3 = &cf_Roguememorywritehascorruptedmemory_;
      }
    }
    else {
      IVar1 = objc_stub::objectForKey_(IVar2,&cf_nsexception);
      objc_stub::objectForKey_(IVar1,&cf_name);
      IVar4 = objc_stub::objectForKey_(IVar1,&cf_reason);
      if (IVar4 != 0) {
        IVar2 = IVar1;
      }
      objc_stub::objectForKey_(IVar2,&cf_reason);
      pcVar3 = (cfstringStruct *)
               objc_stub::stringWithFormat_
                         ((ID)&_OBJC_CLASS___NSString,&cf_Applicationthrewexception_____);
    }
  }
  else {
    pcVar3 = (cfstringStruct *)
             objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_Stackoverflow);
  }
  return (ID)pcVar3;
}



/* Address: 0x100b22ff0 | SentryCoreDataSwizzlingHelper::swizzleWithTracker: */

/* WARNING: Function: _objc_storeWeak replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryCoreDataSwizzlingHelper::swizzleWithTracker_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  ID IVar3;
  undefined *local_a0;
  undefined8 local_98;
  code *local_90;
  undefined *puStack_88;
  cfstringStruct *local_80;
  undefined *local_78;
  undefined8 local_70;
  code *local_68;
  undefined *puStack_60;
  cfstringStruct *local_58;
  
  pcVar2 = &cf_executeFetchRequest_error_;
  DAT_1010e1d98 = param_3;
  _NSSelectorFromString();
  IVar3 = objc_stub::class((ID)&_OBJC_CLASS___NSManagedObjectContext);
  IVar3 = objc_stub::class(IVar3);
  puVar1 = PTR___NSConcreteStackBlock_100ea82a0;
  local_78 = PTR___NSConcreteStackBlock_100ea82a0;
  local_70 = 0xc0000000;
  local_68 = FUN_100b23100;
  puStack_60 = &DAT_100f34390;
  local_58 = pcVar2;
  objc_stub::swizzleInstanceMethod_inClass_newImpFactory_mode_key_
            ((ID)&objc::class_t::SentrySwizzle,pcVar2,IVar3,&local_78,2,pcVar2);
  pcVar2 = &cf_save_;
  _NSSelectorFromString();
  IVar3 = objc_stub::class((ID)&_OBJC_CLASS___NSManagedObjectContext);
  IVar3 = objc_stub::class(IVar3);
  local_a0 = puVar1;
  local_98 = 0xc0000000;
  local_90 = FUN_100b23300;
  puStack_88 = &DAT_100f34390;
  local_80 = pcVar2;
  objc_stub::swizzleInstanceMethod_inClass_newImpFactory_mode_key_
            ((ID)&objc::class_t::SentrySwizzle,pcVar2,IVar3,&local_a0,2,pcVar2);
  return;
}



/* Address: 0x100b23100 | FUN_100b23100 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

undefined1 * FUN_100b23100(void)

{
  undefined1 local_50 [48];
  
  return local_50;
}



/* Address: 0x100b23188 | FUN_100b23188 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_loadWeakRetained replaced with injection: _objc_load_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID FUN_100b23188(long param_1,ID param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined *local_78;
  undefined8 local_70;
  code *local_68;
  undefined *puStack_60;
  undefined8 local_58;
  ID IStack_50;
  undefined8 local_48;
  
  if (DAT_1010e1d98 == 0) {
    pcVar1 = (code *)objc_stub::getOriginalImplementation(*(ID *)(param_1 + 0x20));
    (*pcVar1)(param_2,*(undefined8 *)(param_1 + 0x28),param_3,param_4);
  }
  else {
    local_78 = PTR___NSConcreteStackBlock_100ea82a0;
    local_70 = 0xc2000000;
    local_68 = FUN_100b23294;
    puStack_60 = &DAT_100f34648;
    local_58 = *(undefined8 *)(param_1 + 0x20);
    local_48 = *(undefined8 *)(param_1 + 0x28);
    IStack_50 = param_2;
    param_2 = objc_stub::managedObjectContext_executeFetchRequest_error_originalImp_
                        (DAT_1010e1d98,param_2,param_3,param_4,&local_78);
  }
  return param_2;
}



/* Address: 0x100b23294 | FUN_100b23294 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

undefined8 FUN_100b23294(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = (code *)objc_stub::getOriginalImplementation(*(ID *)(param_1 + 0x20));
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  (*pcVar1)(uVar2,*(undefined8 *)(param_1 + 0x30),param_2,param_3);
  return uVar2;
}



/* Address: 0x100b23300 | FUN_100b23300 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

undefined1 * FUN_100b23300(void)

{
  undefined1 local_50 [48];
  
  return local_50;
}



/* Address: 0x100b23388 | FUN_100b23388 */

/* WARNING: Function: _objc_loadWeakRetained replaced with injection: _objc_load_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100b23388(long param_1,ID param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined *local_68;
  undefined8 local_60;
  code *local_58;
  undefined *puStack_50;
  undefined8 local_48;
  ID IStack_40;
  undefined8 local_38;
  
  if (DAT_1010e1d98 == 0) {
    pcVar1 = (code *)objc_stub::getOriginalImplementation(*(ID *)(param_1 + 0x20));
    (*pcVar1)(param_2,*(undefined8 *)(param_1 + 0x28),param_3);
  }
  else {
    local_68 = PTR___NSConcreteStackBlock_100ea82a0;
    local_60 = 0xc2000000;
    local_58 = FUN_100b23460;
    puStack_50 = &DAT_100f346a8;
    local_48 = *(undefined8 *)(param_1 + 0x20);
    local_38 = *(undefined8 *)(param_1 + 0x28);
    IStack_40 = param_2;
    param_2 = objc_stub::managedObjectContext_save_originalImp_
                        (DAT_1010e1d98,param_2,param_3,&local_68);
  }
  return param_2;
}



/* Address: 0x100b23460 | FUN_100b23460 */

void FUN_100b23460(long param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)objc_stub::getOriginalImplementation(*(ID *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x000100b23490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),param_2);
  return;
}



/* Address: 0x100b23494 | SentryCoreDataSwizzlingHelper::stop */

/* WARNING: Function: _objc_storeWeak replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryCoreDataSwizzlingHelper::stop(ID param_1,SEL param_2)

{
  DAT_1010e1d98 = 0;
  return;
}



/* Address: 0x100b234a4 | SentrySpanContext::initWithOperation: */

/* Function Stack Size: 0x18 bytes */

ID SentrySpanContext::initWithOperation_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100c04720(param_1,param_3,0);
  return IVar1;
}



/* Address: 0x100b234ac | SentrySpanContext::initWithOperation:sampled: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

ID SentrySpanContext::initWithOperation_sampled_
             (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4)

{
  ID IVar1;
  ID IVar2;
  class_t *pcVar3;
  
  pcVar3 = &objc::class_t::SentryId;
  _objc_alloc();
  IVar1 = objc_stub::init((ID)pcVar3);
  pcVar3 = &objc::class_t::SentrySpanId;
  _objc_alloc();
  IVar2 = objc_stub::init((ID)pcVar3);
  IVar1 = objc_stub::FUN_100c04e40(param_1,IVar1,IVar2,0,param_3,param_4);
  return IVar1;
}



/* Address: 0x100b23550 | SentrySpanContext::initWithTraceId:spanId:parentId:operation:sampled: */

/* Function Stack Size: 0x38 bytes */

ID SentrySpanContext::initWithTraceId_spanId_parentId_operation_sampled_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,
             unsigned_long_long param_7)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100c04e80(param_1);
  return IVar1;
}



/* Address: 0x100b2355c | SentrySpanContext::initWithTraceId:spanId:parentId:operation:spanDescription:sampled: */

/* Function Stack Size: 0x40 bytes */

ID SentrySpanContext::initWithTraceId_spanId_parentId_operation_spanDescription_sampled_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,ID param_7,
             unsigned_long_long param_8)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100c04e60(param_1);
  return IVar1;
}



/* Address: 0x100b2358c | SentrySpanContext::initWithOperation:origin:sampled: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x28 bytes */

ID SentrySpanContext::initWithOperation_origin_sampled_
             (ID param_1,SEL param_2,ID param_3,ID param_4,unsigned_long_long param_5)

{
  ID IVar1;
  ID IVar2;
  class_t *pcVar3;
  
  pcVar3 = &objc::class_t::SentryId;
  _objc_alloc();
  IVar1 = objc_stub::init((ID)pcVar3);
  pcVar3 = &objc::class_t::SentrySpanId;
  _objc_alloc();
  IVar2 = objc_stub::init((ID)pcVar3);
  IVar1 = objc_stub::FUN_100c04e60(param_1,IVar1,IVar2,0,param_3,0,param_4,param_5);
  return IVar1;
}



/* Address: 0x100b23658 | SentrySpanContext::initWithTraceId:spanId:parentId:operation:spanDescription:origin:sampled: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x48 bytes */

ID SentrySpanContext::initWithTraceId_spanId_parentId_operation_spanDescription_origin_sampled_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,ID param_7,
             ID param_8,unsigned_long_long param_9)

{
  ID IVar1;
  ID *pIVar2;
  objc_super local_70;
  
  local_70.super_class = &objc::class_t::SentrySpanContext;
  local_70.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_70,"init");
  if (IVar1 != 0) {
    *(ID *)(IVar1 + 8) = param_3;
    *(ID *)(IVar1 + 0x10) = param_4;
    *(ID *)(IVar1 + 0x18) = param_5;
    *(unsigned_long_long *)(IVar1 + 0x20) = param_9;
    *(ID *)(IVar1 + 0x28) = param_6;
    *(ID *)(IVar1 + 0x30) = param_7;
    pIVar2 = (ID *)(IVar1 + 0x38);
    *pIVar2 = param_8;
    FUN_100b3a1c0();
    if (param_5 == 0) {
      if ((int)pIVar2 != 0) {
        objc_stub::FUN_100c0a000(param_3);
        objc_stub::FUN_100c0a0a0(param_4);
        FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentrySpanContext.m"
                      ,0x5d,&cf_CreatedrootspancontextwithtraceID___spanID___operation__);
      }
    }
    else if ((int)pIVar2 != 0) {
      objc_stub::FUN_100c0a000(param_3);
      objc_stub::FUN_100c0a0a0(param_4);
      objc_stub::FUN_100c0a0a0(param_5);
      FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentrySpanContext.m"
                    ,0x62,&cf_CreatedspancontextwithtraceID___spanID___parentspanID___operation__);
    }
  }
  return IVar1;
}



/* Address: 0x100b2389c | SentrySpanContext::serialize */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentrySpanContext::serialize(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  cfstringStruct *local_b8;
  cfstringStruct *pcStack_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  ID local_88;
  ID local_80;
  ID local_78;
  ID local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  local_90 = &cf_trace;
  local_b8 = &cf_type;
  pcStack_b0 = &cf_span_id;
  IVar1 = objc_stub::spanId(param_1);
  local_88 = objc_stub::FUN_100c0a0a0(IVar1);
  local_a8 = &cf_trace_id;
  IVar1 = objc_stub::FUN_100c10960(param_1);
  local_80 = objc_stub::FUN_100c0a000(IVar1);
  local_a0 = &cf_op;
  local_78 = objc_stub::operation(param_1);
  local_98 = &cf_origin;
  local_70 = objc_stub::FUN_100c07860(param_1);
  IVar1 = objc_stub::FUN_100c012c0((ID)&_OBJC_CLASS___NSDictionary,&local_90,&local_b8,5);
  IVar1 = objc_stub::mutableCopy(IVar1);
  IVar2 = objc_stub::FUN_100c098c0(param_1);
  if (IVar2 != 0) {
    IVar2 = objc_stub::FUN_100c098c0(param_1);
    FUN_100b56054();
    objc_stub::setValue_forKey_(IVar1,IVar2,&cf_sampled);
  }
  IVar2 = objc_stub::spanDescription(param_1);
  if (IVar2 != 0) {
    IVar2 = objc_stub::spanDescription(param_1);
    objc_stub::setValue_forKey_(IVar1,IVar2,&cf_description);
  }
  IVar2 = objc_stub::FUN_100c079e0(param_1);
  if (IVar2 != 0) {
    IVar2 = objc_stub::FUN_100c079e0(param_1);
    IVar2 = objc_stub::FUN_100c0a0a0(IVar2);
    objc_stub::setValue_forKey_(IVar1,IVar2,&cf_parent_span_id);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_68) {
    return IVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}



/* Address: 0x100b23b24 | SentrySpanContext::traceId */

/* Function Stack Size: 0x10 bytes */

ID SentrySpanContext::traceId(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 8);
}



/* Address: 0x100b23b2c | SentrySpanContext::spanId */

/* Function Stack Size: 0x10 bytes */

ID SentrySpanContext::spanId(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x10);
}



/* Address: 0x100b23b34 | SentrySpanContext::parentSpanId */

/* Function Stack Size: 0x10 bytes */

ID SentrySpanContext::parentSpanId(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x18);
}



/* Address: 0x100b23b3c | SentrySpanContext::sampled */

/* Function Stack Size: 0x10 bytes */

unsigned_long_long SentrySpanContext::sampled(ID param_1,SEL param_2)

{
  return *(unsigned_long_long *)(param_1 + 0x20);
}



/* Address: 0x100b23b44 | SentrySpanContext::operation */

/* Function Stack Size: 0x10 bytes */

ID SentrySpanContext::operation(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x28);
}



/* Address: 0x100b23b4c | SentrySpanContext::spanDescription */

/* Function Stack Size: 0x10 bytes */

ID SentrySpanContext::spanDescription(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x30);
}



/* Address: 0x100b23b54 | SentrySpanContext::origin */

/* Function Stack Size: 0x10 bytes */

ID SentrySpanContext::origin(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x38);
}



/* Address: 0x100b23b5c | SentrySpanContext::setOrigin: */

/* WARNING: Function: _objc_setProperty_nonatomic_copy replaced with injection:
   _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void SentrySpanContext::setOrigin_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x38) = param_3;
  return;
}


