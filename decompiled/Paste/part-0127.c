/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100186db0 | PHPLCrashReportSymbolInfo::endAddress */

/* Function Stack Size: 0x10 bytes */

unsigned_long_long PHPLCrashReportSymbolInfo::endAddress(ID param_1,SEL param_2)

{
  return *(unsigned_long_long *)(param_1 + 0x18);
}



/* Address: 0x100186db8 | PHPLCrashReportSymbolInfo::.cxx_destruct */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void PHPLCrashReportSymbolInfo::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



/* Address: 0x100186dc4 | PHPLCrashReportSystemInfo::initWithOperatingSystem:operatingSystemVersion:architecture:timestamp: */

/* Function Stack Size: 0x28 bytes */

ID PHPLCrashReportSystemInfo::initWithOperatingSystem_operatingSystemVersion_architecture_timestamp_
             (ID param_1,SEL param_2,int param_3,ID param_4,int param_5,ID param_6)

{
  ID IVar1;
  
  IVar1 = initWithOperatingSystem_operatingSystemVersion_operatingSystemBuild_architecture_processorInfo_timestamp_
                    (param_1,param_3,param_4,0,param_5,0,param_6);
  return IVar1;
}



/* Address: 0x100186dd8 | PHPLCrashReportSystemInfo::initWithOperatingSystem:operatingSystemVersion:operatingSystemBuild:architecture:timestamp: */

/* Function Stack Size: 0x30 bytes */

ID PHPLCrashReportSystemInfo::
   initWithOperatingSystem_operatingSystemVersion_operatingSystemBuild_architecture_timestamp_
             (ID param_1,SEL param_2,int param_3,ID param_4,ID param_5,int param_6,ID param_7)

{
  ID IVar1;
  
  IVar1 = initWithOperatingSystem_operatingSystemVersion_operatingSystemBuild_architecture_processorInfo_timestamp_
                    (param_1,param_3,param_4,param_5,param_6,0,param_7);
  return IVar1;
}



/* Address: 0x100186de4 | PHPLCrashReportSystemInfo::initWithOperatingSystem:operatingSystemVersion:operatingSystemBuild:architecture:processorInfo:timestamp: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x38 bytes */

ID PHPLCrashReportSystemInfo::
   initWithOperatingSystem_operatingSystemVersion_operatingSystemBuild_architecture_processorInfo_timestamp_
             (ID param_1,SEL param_2,int param_3,ID param_4,ID param_5,int param_6,ID param_7,
             ID param_8)

{
  ID IVar1;
  ID local_60;
  class_t *pcStack_58;
  
  pcStack_58 = &objc::class_t::PHPLCrashReportSystemInfo;
  local_60 = param_1;
  IVar1 = ::NSObject::init((ID)&local_60,"init");
  if (IVar1 != 0) {
    *(int *)(IVar1 + 8) = param_3;
    *(ID *)(IVar1 + 0x10) = param_4;
    *(ID *)(IVar1 + 0x18) = param_5;
    *(int *)(IVar1 + 0x20) = param_6;
    *(ID *)(IVar1 + 0x30) = param_7;
    *(ID *)(IVar1 + 0x28) = param_8;
  }
  return IVar1;
}



/* Address: 0x100186f08 | PHPLCrashReportSystemInfo::operatingSystem */

/* Function Stack Size: 0x10 bytes */

int PHPLCrashReportSystemInfo::operatingSystem(ID param_1,SEL param_2)

{
  return *(int *)(param_1 + 8);
}



/* Address: 0x100186f10 | PHPLCrashReportSystemInfo::operatingSystemVersion */

/* Function Stack Size: 0x10 bytes */

ID PHPLCrashReportSystemInfo::operatingSystemVersion(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x10);
}



/* Address: 0x100186f18 | PHPLCrashReportSystemInfo::operatingSystemBuild */

/* Function Stack Size: 0x10 bytes */

ID PHPLCrashReportSystemInfo::operatingSystemBuild(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x18);
}



/* Address: 0x100186f20 | PHPLCrashReportSystemInfo::architecture */

/* Function Stack Size: 0x10 bytes */

int PHPLCrashReportSystemInfo::architecture(ID param_1,SEL param_2)

{
  return *(int *)(param_1 + 0x20);
}



/* Address: 0x100186f28 | PHPLCrashReportSystemInfo::timestamp */

/* Function Stack Size: 0x10 bytes */

ID PHPLCrashReportSystemInfo::timestamp(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x28);
}



/* Address: 0x100186f30 | PHPLCrashReportSystemInfo::processorInfo */

/* Function Stack Size: 0x10 bytes */

ID PHPLCrashReportSystemInfo::processorInfo(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x30);
}



/* Address: 0x100186f38 | PHPLCrashReportSystemInfo::.cxx_destruct */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void PHPLCrashReportSystemInfo::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



/* Address: 0x100186f80 | PHPLCrashReportTextFormatter::stringValueForCrashReport:withTextFormat: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x1c bytes */

ID PHPLCrashReportTextFormatter::stringValueForCrashReport_withTextFormat_
             (ID param_1,SEL param_2,ID param_3,int param_4)

{
  cfstringStruct *pcVar1;
  ID self;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  cfstringStruct *self_00;
  ID IVar5;
  ID self_01;
  ulong uVar6;
  bool bVar7;
  ID IVar8;
  int iVar9;
  ID IVar10;
  long lVar11;
  ID local_448;
  ID local_438;
  undefined8 local_430;
  long lStack_428;
  long *local_420;
  undefined8 uStack_418;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 local_3f0;
  long lStack_3e8;
  long *local_3e0;
  undefined8 uStack_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 local_3b0;
  long lStack_3a8;
  long *local_3a0;
  undefined8 uStack_398;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 local_370;
  long lStack_368;
  long *local_360;
  undefined8 uStack_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 local_330;
  long lStack_328;
  long *local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined1 auStack_2f0 [128];
  undefined1 auStack_270 [128];
  undefined1 auStack_1f0 [128];
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  self = NSMutableString::string((ID)&_OBJC_CLASS___NSMutableString,param_3,(ulong)param_4);
  IVar2 = objc_stub::systemInfo(param_3);
  IVar2 = objc_stub::operatingSystem(IVar2);
  if ((4 < (uint)IVar2) || ((0x17U >> (ulong)((uint)IVar2 & 0x1f) & 1) == 0)) {
    IVar2 = objc_stub::systemInfo(param_3);
    objc_stub::operatingSystem(IVar2);
    NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_Unknown__d_);
  }
  uStack_308 = 0;
  local_310 = 0;
  uStack_2f8 = 0;
  uStack_300 = 0;
  lStack_328 = 0;
  local_330 = 0;
  uStack_318 = 0;
  local_320 = (long *)0x0;
  IVar2 = objc_stub::images(param_3);
  IVar3 = objc_stub::countByEnumeratingWithState_objects_count_(IVar2,&local_330,auStack_f0,0x10);
  if (IVar3 != 0) {
    lVar11 = *local_320;
    do {
      IVar10 = 0;
      do {
        if (*local_320 != lVar11) {
          _objc_enumerationMutation(IVar2);
        }
        IVar8 = *(ID *)(lStack_328 + IVar10 * 8);
        IVar4 = objc_stub::codeType(IVar8);
        if (IVar4 != 0) {
          IVar4 = objc_stub::codeType(IVar8);
          IVar4 = objc_stub::typeEncoding(IVar4);
          if ((int)IVar4 == 1) {
            IVar4 = objc_stub::codeType(IVar8);
            IVar4 = objc_stub::type(IVar4);
            if ((long)IVar4 < 0x12) {
              if (IVar4 == 7) {
                bVar7 = 0;
                goto LAB_1001873a0;
              }
              if (IVar4 == 0xc) {
                bVar7 = 0;
                goto LAB_1001873a0;
              }
            }
            else {
              if (IVar4 == 0x12) {
                bVar7 = 0;
                goto LAB_1001873a0;
              }
              if (IVar4 == 0x100000c) {
                bVar7 = 1;
                goto LAB_1001873a0;
              }
              if (IVar4 == 0x1000007) {
                bVar7 = 1;
                goto LAB_1001873a0;
              }
            }
          }
        }
        IVar10 = IVar10 + 1;
      } while (IVar3 != IVar10);
      IVar3 = objc_stub::countByEnumeratingWithState_objects_count_
                        (IVar2,&local_330,auStack_f0,0x10);
    } while (IVar3 != 0);
  }
  IVar2 = objc_stub::systemInfo(param_3);
  IVar2 = objc_stub::processorInfo(IVar2);
  IVar2 = objc_stub::typeEncoding(IVar2);
  if ((int)IVar2 == 1) {
    IVar2 = objc_stub::systemInfo(param_3);
    IVar2 = objc_stub::processorInfo(IVar2);
    IVar2 = objc_stub::type(IVar2);
    if ((long)IVar2 < 0x12) {
      if (IVar2 == 7) {
        bVar7 = 0;
        goto LAB_1001873a0;
      }
      if (IVar2 == 0xc) {
        bVar7 = 0;
        goto LAB_1001873a0;
      }
    }
    else {
      if (IVar2 == 0x12) {
        bVar7 = 0;
        goto LAB_1001873a0;
      }
      if (IVar2 == 0x1000007) {
        bVar7 = 1;
        goto LAB_1001873a0;
      }
      if (IVar2 == 0x100000c) {
        bVar7 = 1;
        goto LAB_1001873a0;
      }
    }
    IVar2 = objc_stub::systemInfo(param_3);
    IVar2 = objc_stub::processorInfo(IVar2);
    objc_stub::type(IVar2);
    IVar2 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_Unknown__llu_);
    if (IVar2 != 0) {
      bVar7 = 1;
      goto LAB_1001873a0;
    }
  }
  bVar7 = 1;
LAB_1001873a0:
  IVar2 = objc_stub::hasMachineInfo(param_3);
  if ((int)IVar2 != 0) {
    IVar2 = objc_stub::machineInfo(param_3);
    IVar2 = objc_stub::modelName(IVar2);
    if (IVar2 != 0) {
      IVar2 = objc_stub::machineInfo(param_3);
      objc_stub::modelName(IVar2);
    }
  }
  IVar2 = objc_stub::uuidRef(param_3);
  if (IVar2 != 0) {
    IVar2 = objc_stub::uuidRef(param_3);
    _CFUUIDCreateString(0,IVar2);
  }
  NSMutableString::appendFormat_(self,&cf_IncidentIdentifier___);
  NSMutableString::appendFormat_(self,&cf_HardwareModel___);
  IVar2 = objc_stub::hasProcessInfo(param_3);
  if ((int)IVar2 != 0) {
    IVar2 = objc_stub::processInfo(param_3);
    IVar2 = objc_stub::processName(IVar2);
    if (IVar2 != 0) {
      IVar2 = objc_stub::processInfo(param_3);
      objc_stub::processName(IVar2);
    }
    IVar2 = objc_stub::processInfo(param_3);
    IVar2 = objc_stub::processID(IVar2);
    IVar2 = NSNumber::numberWithUnsignedInteger_((ID)&_OBJC_CLASS___NSNumber,IVar2);
    NSNumber::stringValue(IVar2);
    IVar2 = objc_stub::processInfo(param_3);
    IVar2 = objc_stub::processPath(IVar2);
    if (IVar2 != 0) {
      IVar2 = objc_stub::processInfo(param_3);
      objc_stub::processPath(IVar2);
    }
    IVar2 = objc_stub::processInfo(param_3);
    IVar2 = objc_stub::parentProcessName(IVar2);
    if (IVar2 != 0) {
      IVar2 = objc_stub::processInfo(param_3);
      objc_stub::parentProcessName(IVar2);
    }
    IVar2 = objc_stub::processInfo(param_3);
    IVar2 = objc_stub::parentProcessID(IVar2);
    IVar2 = NSNumber::numberWithUnsignedInteger_((ID)&_OBJC_CLASS___NSNumber,IVar2);
    NSNumber::stringValue(IVar2);
  }
  IVar2 = objc_stub::applicationInfo(param_3);
  objc_stub::applicationVersion(IVar2);
  IVar2 = objc_stub::applicationInfo(param_3);
  IVar2 = objc_stub::applicationMarketingVersion(IVar2);
  if (IVar2 != 0) {
    IVar2 = objc_stub::applicationInfo(param_3);
    objc_stub::applicationMarketingVersion(IVar2);
    IVar2 = objc_stub::applicationInfo(param_3);
    objc_stub::applicationVersion(IVar2);
    NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_______);
  }
  NSMutableString::appendFormat_(self,&cf_Process_______);
  NSMutableString::appendFormat_(self,&cf_Path___);
  IVar2 = objc_stub::applicationInfo(param_3);
  objc_stub::applicationIdentifier(IVar2);
  NSMutableString::appendFormat_(self,&cf_Identifier___);
  NSMutableString::appendFormat_(self,&cf_Version___);
  NSMutableString::appendFormat_(self,&cf_CodeType___);
  NSMutableString::appendFormat_(self,&cf_ParentProcess_______);
  NSMutableString::appendString_(self,&cf_newline_s_);
  IVar2 = objc_stub::systemInfo(param_3);
  IVar2 = objc_stub::operatingSystemBuild(IVar2);
  if (IVar2 != 0) {
    IVar2 = objc_stub::systemInfo(param_3);
    objc_stub::operatingSystemBuild(IVar2);
  }
  IVar2 = objc_stub::systemInfo(param_3);
  objc_stub::timestamp(IVar2);
  NSMutableString::appendFormat_(self,&cf_Date_Time___);
  IVar2 = objc_stub::systemInfo(param_3);
  objc_stub::operatingSystemVersion(IVar2);
  NSMutableString::appendFormat_(self,&cf_OSVersion_________);
  NSMutableString::appendFormat_(self,&cf_ReportVersion_104);
  NSMutableString::appendString_(self,&cf_newline_s_);
  IVar2 = objc_stub::signalInfo(param_3);
  objc_stub::name(IVar2);
  NSMutableString::appendFormat_(self,&cf_ExceptionType___);
  IVar2 = objc_stub::signalInfo(param_3);
  objc_stub::code(IVar2);
  IVar2 = objc_stub::signalInfo(param_3);
  objc_stub::address(IVar2);
  NSMutableString::appendFormat_(self,&cf_ExceptionCodes___at0x_llx);
  uStack_348 = 0;
  local_350 = 0;
  uStack_338 = 0;
  uStack_340 = 0;
  lStack_368 = 0;
  local_370 = 0;
  uStack_358 = 0;
  local_360 = (long *)0x0;
  IVar2 = objc_stub::threads(param_3);
  IVar3 = objc_stub::countByEnumeratingWithState_objects_count_(IVar2,&local_370,auStack_170,0x10);
  if (IVar3 != 0) {
    lVar11 = *local_360;
    do {
      IVar10 = 0;
      do {
        if (*local_360 != lVar11) {
          _objc_enumerationMutation(IVar2);
        }
        IVar8 = *(ID *)(lStack_368 + IVar10 * 8);
        IVar4 = objc_stub::crashed(IVar8);
        if ((int)IVar4 != 0) {
          objc_stub::threadNumber(IVar8);
          NSMutableString::appendFormat_(self,&cf_CrashedThread__ld);
          goto LAB_100187b28;
        }
        IVar10 = IVar10 + 1;
      } while (IVar3 != IVar10);
      IVar3 = objc_stub::countByEnumeratingWithState_objects_count_
                        (IVar2,&local_370,auStack_170,0x10);
    } while (IVar3 != 0);
  }
LAB_100187b28:
  NSMutableString::appendString_(self,&cf_newline_s_);
  IVar2 = objc_stub::hasExceptionInfo(param_3);
  if ((int)IVar2 != 0) {
    NSMutableString::appendFormat_(self,&cf_ApplicationSpecificInformation_);
    IVar2 = objc_stub::exceptionInfo(param_3);
    objc_stub::exceptionName(IVar2);
    IVar2 = objc_stub::exceptionInfo(param_3);
    objc_stub::exceptionReason(IVar2);
    NSMutableString::appendFormat_(self,&cf____Terminatingappduetouncaughtexception_____reason_____)
    ;
    NSMutableString::appendString_(self,&cf_newline_s_);
  }
  IVar2 = objc_stub::exceptionInfo(param_3);
  if (IVar2 != 0) {
    IVar2 = objc_stub::exceptionInfo(param_3);
    IVar2 = objc_stub::stackFrames(IVar2);
    if (IVar2 != 0) {
      IVar2 = objc_stub::exceptionInfo(param_3);
      IVar2 = objc_stub::stackFrames(IVar2);
      IVar2 = objc_stub::count(IVar2);
      if (IVar2 != 0) {
        IVar2 = objc_stub::exceptionInfo(param_3);
        NSMutableString::appendString_(self,&cf_LastExceptionBacktrace_);
        IVar3 = objc_stub::stackFrames(IVar2);
        IVar3 = objc_stub::count(IVar3);
        if (IVar3 != 0) {
          uVar6 = 0;
          do {
            IVar3 = objc_stub::stackFrames(IVar2);
            IVar3 = objc_stub::objectAtIndex_(IVar3,uVar6);
            IVar3 = formatStackFrame_frameIndex_report_lp64_(param_1,IVar3,uVar6,param_3,bVar7);
            NSMutableString::appendString_(self,IVar3);
            uVar6 = uVar6 + 1;
            IVar3 = objc_stub::stackFrames(IVar2);
            IVar3 = objc_stub::count(IVar3);
          } while (uVar6 < IVar3);
        }
        NSMutableString::appendString_(self,&cf_newline_s_);
      }
    }
  }
  uStack_388 = 0;
  local_390 = 0;
  uStack_378 = 0;
  uStack_380 = 0;
  lStack_3a8 = 0;
  local_3b0 = 0;
  uStack_398 = 0;
  local_3a0 = (long *)0x0;
  IVar2 = objc_stub::threads(param_3);
  IVar3 = objc_stub::countByEnumeratingWithState_objects_count_(IVar2,&local_3b0,auStack_1f0,0x10);
  if (IVar3 != 0) {
    lVar11 = *local_3a0;
    local_438 = 0;
    do {
      IVar10 = 0;
      do {
        if (*local_3a0 != lVar11) {
          _objc_enumerationMutation(IVar2);
        }
        IVar8 = *(ID *)(lStack_3a8 + IVar10 * 8);
        IVar4 = objc_stub::crashed(IVar8);
        objc_stub::threadNumber(IVar8);
        if ((int)IVar4 == 0) {
          NSMutableString::appendFormat_(self,&cf_Thread_ld_);
        }
        else {
          NSMutableString::appendFormat_(self,&cf_Thread_ldCrashed_);
          local_438 = IVar8;
        }
        IVar4 = objc_stub::stackFrames(IVar8);
        IVar4 = objc_stub::count(IVar4);
        if (IVar4 != 0) {
          uVar6 = 0;
          do {
            IVar4 = objc_stub::stackFrames(IVar8);
            IVar4 = objc_stub::objectAtIndex_(IVar4,uVar6);
            IVar4 = formatStackFrame_frameIndex_report_lp64_(param_1,IVar4,uVar6,param_3,bVar7);
            NSMutableString::appendString_(self,IVar4);
            uVar6 = uVar6 + 1;
            IVar4 = objc_stub::stackFrames(IVar8);
            IVar4 = objc_stub::count(IVar4);
          } while (uVar6 < IVar4);
        }
        NSMutableString::appendString_(self,&cf_newline_s_);
        objc_stub::threadNumber(IVar8);
        IVar10 = IVar10 + 1;
      } while (IVar10 != IVar3);
      IVar3 = objc_stub::countByEnumeratingWithState_objects_count_
                        (IVar2,&local_3b0,auStack_1f0,0x10);
    } while (IVar3 != 0);
    if (local_438 != 0) {
      objc_stub::threadNumber(local_438);
      NSMutableString::appendFormat_(self,&cf_Thread_ldcrashedwith__ThreadState_);
      uStack_3c8 = 0;
      local_3d0 = 0;
      uStack_3b8 = 0;
      uStack_3c0 = 0;
      lStack_3e8 = 0;
      local_3f0 = 0;
      uStack_3d8 = 0;
      local_3e0 = (long *)0x0;
      IVar2 = objc_stub::registers(local_438);
      local_448 = objc_stub::countByEnumeratingWithState_objects_count_
                            (IVar2,&local_3f0,auStack_270,0x10);
      if (local_448 != 0) {
        iVar9 = 0;
        lVar11 = *local_3e0;
        pcVar1 = &cf__6s_0x_08llx;
        if (bVar7 != 0) {
          pcVar1 = &cf__6s_0x_016llx;
        }
        do {
          IVar3 = 0;
          do {
            if (*local_3e0 != lVar11) {
              _objc_enumerationMutation(IVar2);
            }
            IVar4 = *(ID *)(lStack_3e8 + IVar3 * 8);
            self_00 = (cfstringStruct *)objc_stub::registerName(IVar4);
            IVar10 = objc_stub::machineInfo(param_3);
            if (IVar10 != 0) {
              IVar10 = objc_stub::machineInfo(param_3);
              IVar10 = objc_stub::processorInfo(IVar10);
              IVar10 = objc_stub::typeEncoding(IVar10);
              if ((int)IVar10 == 1) {
                IVar10 = objc_stub::machineInfo(param_3);
                IVar10 = objc_stub::processorInfo(IVar10);
                IVar10 = objc_stub::type(IVar10);
                if (((IVar10 & 0xffffff) == 0xc) &&
                   (IVar10 = objc_stub::isEqual_((ID)self_00,&cf_r12), (int)IVar10 != 0)) {
                  self_00 = &cf_ip;
                }
              }
            }
            _objc_retainAutorelease();
            objc_stub::UTF8String((ID)self_00);
            objc_stub::registerValue(IVar4);
            NSMutableString::appendFormat_(self,pcVar1);
            iVar9 = iVar9 + 1;
            if (iVar9 == 4) {
              NSMutableString::appendString_(self,&cf_newline_s_);
              iVar9 = 0;
            }
            IVar3 = IVar3 + 1;
          } while (local_448 != IVar3);
          local_448 = objc_stub::countByEnumeratingWithState_objects_count_
                                (IVar2,&local_3f0,auStack_270,0x10);
        } while (local_448 != 0);
        if (iVar9 != 0) {
          NSMutableString::appendString_(self,&cf_newline_s_);
        }
      }
      NSMutableString::appendString_(self,&cf_newline_s_);
    }
  }
  NSMutableString::appendString_(self,&cf_BinaryImages_);
  uStack_408 = 0;
  local_410 = 0;
  uStack_3f8 = 0;
  uStack_400 = 0;
  lStack_428 = 0;
  local_430 = 0;
  uStack_418 = 0;
  local_420 = (long *)0x0;
  IVar2 = objc_stub::images(param_3);
  IVar2 = objc_stub::sortedArrayUsingFunction_context_(IVar2,FUN_100188638,0);
  IVar3 = objc_stub::countByEnumeratingWithState_objects_count_(IVar2,&local_430,auStack_2f0,0x10);
  if (IVar3 != 0) {
    IVar10 = 0;
    lVar11 = *local_420;
    pcVar1 = &cf__10_llx__10_llx______<__>__;
    if (bVar7 != 0) {
      pcVar1 = &cf__18_llx__18_llx______<__>__;
    }
    do {
      IVar4 = 0;
      do {
        if (*local_420 != lVar11) {
          _objc_enumerationMutation(IVar2);
        }
        self_01 = *(ID *)(lStack_428 + IVar4 * 8);
        IVar8 = objc_stub::imageBaseAddress(self_01);
        if (IVar10 != IVar8) {
          IVar10 = objc_stub::hasImageUUID(self_01);
          if ((int)IVar10 != 0) {
            objc_stub::imageUUID(self_01);
          }
          IVar10 = objc_stub::codeType(self_01);
          if (IVar10 != 0) {
            IVar10 = objc_stub::codeType(self_01);
            IVar10 = objc_stub::typeEncoding(IVar10);
            if ((int)IVar10 == 1) {
              IVar10 = objc_stub::codeType(self_01);
              IVar10 = objc_stub::type(IVar10);
              if ((long)IVar10 < 0x12) {
                if ((IVar10 != 7) && (IVar10 == 0xc)) {
                  IVar10 = objc_stub::codeType(self_01);
                  objc_stub::subtype(IVar10);
                }
              }
              else if (((IVar10 != 0x12) && (IVar10 != 0x1000007)) && (IVar10 == 0x100000c)) {
                IVar10 = objc_stub::codeType(self_01);
                objc_stub::subtype(IVar10);
              }
            }
          }
          IVar10 = objc_stub::imageName(self_01);
          IVar5 = objc_stub::processInfo(param_3);
          IVar5 = objc_stub::processPath(IVar5);
          objc_stub::isEqual_(IVar10,IVar5);
          objc_stub::imageBaseAddress(self_01);
          objc_stub::imageBaseAddress(self_01);
          objc_stub::imageSize(self_01);
          IVar10 = objc_stub::imageName(self_01);
          objc_stub::lastPathComponent(IVar10);
          objc_stub::imageName(self_01);
          NSMutableString::appendFormat_(self,pcVar1);
          IVar10 = IVar8;
        }
        IVar4 = IVar4 + 1;
      } while (IVar3 != IVar4);
      IVar3 = objc_stub::countByEnumeratingWithState_objects_count_
                        (IVar2,&local_430,auStack_2f0,0x10);
    } while (IVar3 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_70) {
    return self;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}



/* Address: 0x100188638 | FUN_100188638 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ulong FUN_100188638(ID param_1,ID param_2)

{
  ID IVar1;
  ID IVar2;
  ulong uVar3;
  
  IVar1 = objc_stub::imageBaseAddress(param_1);
  IVar2 = objc_stub::imageBaseAddress(param_2);
  uVar3 = (ulong)(IVar2 < IVar1);
  if (IVar1 < IVar2) {
    uVar3 = 0xffffffffffffffff;
  }
  return uVar3;
}



/* Address: 0x100188694 | PHPLCrashReportTextFormatter::initWithTextFormat:stringEncoding: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x1c bytes */

ID PHPLCrashReportTextFormatter::initWithTextFormat_stringEncoding_
             (ID param_1,SEL param_2,int param_3,unsigned_long_long param_4)

{
  ID IVar1;
  ID local_40;
  class_t *pcStack_38;
  
  pcStack_38 = &objc::class_t::PHPLCrashReportTextFormatter;
  local_40 = param_1;
  IVar1 = ::NSObject::init((ID)&local_40,"init");
  if (IVar1 != 0) {
    *(int *)(IVar1 + 8) = param_3;
    *(unsigned_long_long *)(IVar1 + 0x10) = param_4;
  }
  return IVar1;
}



/* Address: 0x100188704 | PHPLCrashReportTextFormatter::formatReport:error: */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID PHPLCrashReportTextFormatter::formatReport_error_(ID param_1,SEL param_2,ID param_3,ID *param_4)

{
  ID IVar1;
  
  IVar1 = stringValueForCrashReport_withTextFormat_
                    ((ID)&objc::class_t::PHPLCrashReportTextFormatter,param_3,*(int *)(param_1 + 8))
  ;
  IVar1 = objc_stub::dataUsingEncoding_allowLossyConversion_
                    (IVar1,*(undefined8 *)(param_1 + 0x10),1);
  return IVar1;
}



/* Address: 0x100188760 | PHPLCrashReportTextFormatter::formatStackFrame:frameIndex:report:lp64: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x2c bytes */

ID PHPLCrashReportTextFormatter::formatStackFrame_frameIndex_report_lp64_
             (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4,ID param_5,bool param_6)

{
  ID IVar1;
  ID IVar2;
  cfstringStruct *self;
  undefined *puVar3;
  undefined4 local_80;
  ID local_7c;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  IVar1 = objc_stub::instructionPointer(param_3);
  IVar1 = objc_stub::imageForAddress_(param_5,IVar1);
  if (IVar1 == 0) {
    IVar1 = objc_stub::instructionPointer(param_3);
    if ((IVar1 != 0) &&
       (puVar3 = PTR___os_log_default_100ea8350,
       _os_log_type_enabled(PTR___os_log_default_100ea8350,0), (int)puVar3 != 0)) {
      local_7c = objc_stub::instructionPointer(param_3);
      local_80 = 0x8000100;
      __os_log_impl(0x100000000,PTR___os_log_default_100ea8350,0,
                    "[PLCrashReporter] Cannot find image for 0x%llx",&local_80,0xc);
    }
    self = &cf____;
  }
  else {
    IVar2 = objc_stub::imageName(IVar1);
    self = (cfstringStruct *)objc_stub::lastPathComponent(IVar2);
    objc_stub::imageBaseAddress(IVar1);
    objc_stub::instructionPointer(param_3);
    objc_stub::imageBaseAddress(IVar1);
  }
  IVar1 = objc_stub::symbolInfo(param_3);
  if (IVar1 == 0) {
    NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_0x_llx__lld);
  }
  else {
    IVar1 = objc_stub::symbolInfo(param_3);
    IVar2 = objc_stub::symbolName(IVar1);
    IVar1 = objc_stub::rangeOfString_(IVar2,&cf__);
    if ((IVar1 == 0) && (IVar1 = objc_stub::length(IVar2), 1 < IVar1)) {
      IVar1 = objc_stub::systemInfo(param_5);
      IVar1 = objc_stub::operatingSystem(IVar1);
      if (((uint)IVar1 < 5) && ((uint)IVar1 != 3)) {
        objc_stub::substringFromIndex_(IVar2,1);
      }
      else {
        puVar3 = PTR___os_log_default_100ea8350;
        _os_log_type_enabled(PTR___os_log_default_100ea8350,0);
        if ((int)puVar3 != 0) {
          _objc_retainAutorelease();
          local_7c = objc_stub::UTF8String(IVar2);
          local_80 = 0x8200102;
          __os_log_impl(0x100000000,PTR___os_log_default_100ea8350,0,
                        "[PLCrashReporter] Symbol \"%s\" prefix rules are unknown for this OS!",
                        &local_80,0xc);
        }
      }
    }
    objc_stub::instructionPointer(param_3);
    IVar1 = objc_stub::symbolInfo(param_3);
    objc_stub::startAddress(IVar1);
    NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_____lld);
  }
  _objc_retainAutorelease();
  objc_stub::cStringUsingEncoding_((ID)self,10);
  objc_stub::instructionPointer(param_3);
  IVar1 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf___4ld__35S0x_0_llx__);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_68) {
    return IVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}



/* Address: 0x100188af8 | PHPLCrashReportThreadInfo::initWithThreadNumber:stackFrames:crashed:registers: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x2c bytes */

ID PHPLCrashReportThreadInfo::initWithThreadNumber_stackFrames_crashed_registers_
             (ID param_1,SEL param_2,long_long param_3,ID param_4,bool param_5,ID param_6)

{
  ID IVar1;
  ID local_50;
  class_t *pcStack_48;
  
  pcStack_48 = &objc::class_t::PHPLCrashReportThreadInfo;
  local_50 = param_1;
  IVar1 = ::NSObject::init((ID)&local_50,"init");
  if (IVar1 != 0) {
    *(long_long *)(IVar1 + 8) = param_3;
    *(ID *)(IVar1 + 0x10) = param_4;
    *(char *)(IVar1 + 0x18) = (char)param_5;
    *(ID *)(IVar1 + 0x20) = param_6;
  }
  return IVar1;
}



/* Address: 0x100188bc4 | PHPLCrashReportThreadInfo::threadNumber */

/* Function Stack Size: 0x10 bytes */

long_long PHPLCrashReportThreadInfo::threadNumber(ID param_1,SEL param_2)

{
  return *(long_long *)(param_1 + 8);
}



/* Address: 0x100188bcc | PHPLCrashReportThreadInfo::stackFrames */

/* Function Stack Size: 0x10 bytes */

ID PHPLCrashReportThreadInfo::stackFrames(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x10);
}



/* Address: 0x100188bd4 | PHPLCrashReportThreadInfo::crashed */

/* Function Stack Size: 0x10 bytes */

bool PHPLCrashReportThreadInfo::crashed(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + 0x18);
}



/* Address: 0x100188bdc | PHPLCrashReportThreadInfo::registers */

/* Function Stack Size: 0x10 bytes */

ID PHPLCrashReportThreadInfo::registers(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x20);
}



/* Address: 0x100188be4 | PHPLCrashReportThreadInfo::.cxx_destruct */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void PHPLCrashReportThreadInfo::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



/* Address: 0x100188c14 | PHPLCrashReporter::initialize */

/* Function Stack Size: 0x10 bytes */

void PHPLCrashReporter::initialize(ID param_1,SEL param_2)

{
  class_t *pcVar1;
  ID IVar2;
  
  _objc_opt_class();
  pcVar1 = &objc::class_t::PHPLCrashReporter;
  _objc_opt_class(&objc::class_t::PHPLCrashReporter);
  IVar2 = objc_stub::isEqual_(param_1,pcVar1);
  if ((int)IVar2 != 0) {
    FUN_10017c054(&DAT_101060b90,*(undefined4 *)PTR__mach_task_self__100ea8778);
    __dyld_register_func_for_add_image(FUN_100188c88);
    __dyld_register_func_for_remove_image(FUN_100188d5c);
    return;
  }
  return;
}



/* Address: 0x100188c88 | FUN_100188c88 */

void FUN_100188c88(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 local_60 [4];
  undefined4 local_40;
  char *local_3c;
  undefined2 local_34;
  undefined8 local_32;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar1 = param_1;
  _dladdr(param_1,local_60);
  if ((int)uVar1 == 0) {
    puVar2 = PTR___os_log_default_100ea8350;
    _os_log_type_enabled(PTR___os_log_default_100ea8350,0);
    if ((int)puVar2 != 0) {
      local_40 = 0x8200202;
      local_3c = "image_add_callback";
      local_34 = 0x800;
      local_32 = param_1;
      __os_log_impl(0x100000000,PTR___os_log_default_100ea8350,0,
                    "[PLCrashReporter] %s: dladdr(%p, ...) failed",&local_40,0x16);
    }
  }
  else {
    FUN_10017c164(&DAT_101060b90,param_1,local_60[0]);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100188d5c | FUN_100188d5c */

void FUN_100188d5c(undefined8 param_1)

{
  FUN_10017c268(&DAT_101060b90,param_1);
  return;
}



/* Address: 0x100188d6c | PHPLCrashReporter::sharedReporter */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID PHPLCrashReporter::sharedReporter(ID param_1,SEL param_2)

{
  if (DAT_101060ba8 != -1) {
    FUN_10019002c();
  }
  return DAT_101060ba0;
}



/* Address: 0x100188db0 | FUN_100188db0 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100188db0(undefined8 param_1)

{
  class_t *self;
  ID IVar1;
  ID IVar2;
  
  if (DAT_101060ba0 != 0) {
    return param_1;
  }
  self = &objc::class_t::PHPLCrashReporter;
  _objc_alloc();
  IVar1 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle);
  IVar2 = PHPLCrashReporterConfig::defaultConfiguration((ID)&objc::class_t::PHPLCrashReporterConfig)
  ;
  DAT_101060ba0 = objc_stub::initWithBundle_configuration_((ID)self,IVar1,IVar2);
  return 0;
}



/* Address: 0x100188e58 | PHPLCrashReporter::init */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

ID PHPLCrashReporter::init(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = PHPLCrashReporterConfig::defaultConfiguration((ID)&objc::class_t::PHPLCrashReporterConfig)
  ;
  IVar1 = initWithConfiguration_(param_1,IVar1);
  return IVar1;
}



/* Address: 0x100188ea8 | PHPLCrashReporter::initWithConfiguration: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID PHPLCrashReporter::initWithConfiguration_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle);
  IVar1 = initWithBundle_configuration_(param_1,IVar1,param_3);
  return IVar1;
}



/* Address: 0x100188f1c | PHPLCrashReporter::hasPendingCrashReport */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

bool PHPLCrashReporter::hasPendingCrashReport(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
  IVar2 = crashReportPath(param_1);
  IVar1 = NSFileManager::fileExistsAtPath_(IVar1,IVar2);
  return (bool)IVar1;
}



/* Address: 0x100188f90 | PHPLCrashReporter::loadPendingCrashReportData */

/* Function Stack Size: 0x10 bytes */

ID PHPLCrashReporter::loadPendingCrashReportData(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = loadPendingCrashReportDataAndReturnError_(param_1,(ID *)0x0);
  return IVar1;
}



/* Address: 0x100188f98 | PHPLCrashReporter::loadPendingCrashReportDataAndReturnError: */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID PHPLCrashReporter::loadPendingCrashReportDataAndReturnError_(ID param_1,SEL param_2,ID *param_3)

{
  ID IVar1;
  
  IVar1 = crashReportPath(param_1);
  IVar1 = NSData::dataWithContentsOfFile_options_error_((ID)&_OBJC_CLASS___NSData,IVar1,1,param_3);
  return IVar1;
}



/* Address: 0x100189000 | PHPLCrashReporter::purgePendingCrashReport */

/* Function Stack Size: 0x10 bytes */

bool PHPLCrashReporter::purgePendingCrashReport(ID param_1,SEL param_2)

{
  bool bVar1;
  
  bVar1 = purgePendingCrashReportAndReturnError_(param_1,(ID *)0x0);
  return bVar1;
}



/* Address: 0x100189008 | PHPLCrashReporter::purgePendingCrashReportAndReturnError: */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

bool PHPLCrashReporter::purgePendingCrashReportAndReturnError_(ID param_1,SEL param_2,ID *param_3)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
  IVar2 = crashReportPath(param_1);
  IVar1 = NSFileManager::removeItemAtPath_error_(IVar1,IVar2,param_3);
  return (bool)IVar1;
}



/* Address: 0x100189084 | PHPLCrashReporter::enableCrashReporter */

/* Function Stack Size: 0x10 bytes */

bool PHPLCrashReporter::enableCrashReporter(ID param_1,SEL param_2)

{
  bool bVar1;
  
  bVar1 = enableCrashReporterAndReturnError_(param_1,(ID *)0x0);
  return bVar1;
}



/* Address: 0x10018908c | PHPLCrashReporter::enableCrashReporterAndReturnError: */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Function Stack Size: 0x18 bytes */

bool PHPLCrashReporter::enableCrashReporterAndReturnError_(ID param_1,SEL param_2,ID *param_3)

{
  bool bVar1;
  int iVar2;
  bool bVar3;
  ID IVar4;
  char *pcVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  pthread_mutex_t local_150;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  local_150.__opaque[0x30] = '\0';
  local_150.__opaque[0x31] = '\0';
  local_150.__opaque[0x32] = '\0';
  local_150.__opaque[0x33] = '\0';
  local_150.__opaque[0x34] = '\0';
  local_150.__opaque[0x35] = '\0';
  local_150.__opaque[0x36] = '\0';
  local_150.__opaque[0x37] = '\0';
  local_150.__opaque[0x28] = '\0';
  local_150.__opaque[0x29] = '\0';
  local_150.__opaque[0x2a] = '\0';
  local_150.__opaque[0x2b] = '\0';
  local_150.__opaque[0x2c] = '\0';
  local_150.__opaque[0x2d] = '\0';
  local_150.__opaque[0x2e] = '\0';
  local_150.__opaque[0x2f] = '\0';
  local_150.__opaque[0x20] = '\0';
  local_150.__opaque[0x21] = '\0';
  local_150.__opaque[0x22] = '\0';
  local_150.__opaque[0x23] = '\0';
  local_150.__opaque[0x24] = '\0';
  local_150.__opaque[0x25] = '\0';
  local_150.__opaque[0x26] = '\0';
  local_150.__opaque[0x27] = '\0';
  local_150.__opaque[0x18] = '\0';
  local_150.__opaque[0x19] = '\0';
  local_150.__opaque[0x1a] = '\0';
  local_150.__opaque[0x1b] = '\0';
  local_150.__opaque[0x1c] = '\0';
  local_150.__opaque[0x1d] = '\0';
  local_150.__opaque[0x1e] = '\0';
  local_150.__opaque[0x1f] = '\0';
  local_150.__opaque[0x10] = '\0';
  local_150.__opaque[0x11] = '\0';
  local_150.__opaque[0x12] = '\0';
  local_150.__opaque[0x13] = '\0';
  local_150.__opaque[0x14] = '\0';
  local_150.__opaque[0x15] = '\0';
  local_150.__opaque[0x16] = '\0';
  local_150.__opaque[0x17] = '\0';
  local_150.__opaque[8] = '\0';
  local_150.__opaque[9] = '\0';
  local_150.__opaque[10] = '\0';
  local_150.__opaque[0xb] = '\0';
  local_150.__opaque[0xc] = '\0';
  local_150.__opaque[0xd] = '\0';
  local_150.__opaque[0xe] = '\0';
  local_150.__opaque[0xf] = '\0';
  local_150.__opaque[0] = '\0';
  local_150.__opaque[1] = '\0';
  local_150.__opaque[2] = '\0';
  local_150.__opaque[3] = '\0';
  local_150.__opaque[4] = '\0';
  local_150.__opaque[5] = '\0';
  local_150.__opaque[6] = '\0';
  local_150.__opaque[7] = '\0';
  local_150.__sig = 0x32aaaba7;
  _pthread_mutex_lock(&local_150);
  if (DAT_101060bb0 == '\x01') {
    _pthread_mutex_unlock(&local_150);
    FUN_10018a734(param_3,3,&cf_APLCrashReporterinstancehasalreadybeenenabled,0);
    goto LAB_10018911c;
  }
  DAT_101060bb0 = '\x01';
  _pthread_mutex_unlock(&local_150);
  if (*(char *)(param_1 + 0x10) == '\x01') {
    NSException::raise_format_
              ((ID)&_OBJC_CLASS___NSException,PTR_cf_PLCrashReporterException_100fb3068,
               &cf_Thecrashreporterhasalreadybeenenabled);
  }
  bVar1 = populateCrashReportDirectoryAndReturnError_(param_1,param_3);
  bVar3 = 0;
  if (bVar1 == 0) {
LAB_1001893d8:
    if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_68) {
      return bVar3;
    }
  }
  else {
    IVar4 = crashReportPath(param_1);
    _objc_retainAutorelease();
    pcVar5 = (char *)objc_stub::UTF8String(IVar4);
    DAT_101060cc8 = _strdup(pcVar5);
    lVar6 = *(long *)(param_1 + 0x28);
    if (lVar6 == 0) {
      FUN_100190068(0);
    }
    else {
      lVar7 = *(long *)(param_1 + 0x30);
      if (lVar7 != 0) {
        uVar8 = *(undefined8 *)(param_1 + 0x38);
        IVar4 = objc_stub::symbolicationStrategy(*(ID *)(param_1 + 8));
        iVar2 = mapToAsyncSymbolicationStrategy_(param_1,IVar4);
        FUN_100180bc0(&DAT_101060bb8,lVar6,lVar7,uVar8,iVar2,0);
        IVar4 = customData(param_1);
        if (IVar4 != 0) {
          IVar4 = customData(param_1);
          FUN_100181204(&DAT_101060bb8,IVar4);
        }
        IVar4 = objc_stub::signalHandlerType(*(ID *)(param_1 + 8));
        if (IVar4 == 1) {
          IVar4 = PHPLCrashSignalHandler::sharedHandler((ID)&objc::class_t::PHPLCrashSignalHandler);
          bVar3 = PHPLCrashSignalHandler::registerHandlerForSignal_callback_context_error_
                            (IVar4,6,(undefined4 *)FUN_10018941c,&DAT_101060bb8,param_3);
          if (bVar3 != 0) {
            IVar4 = enableMachExceptionServerWithPreviousPortSet_callback_context_error_
                              (param_1,(ID *)(param_1 + 0x20),(undefined4 *)FUN_1001894ec,
                               &DAT_101060bb8,param_3);
            *(ID *)(param_1 + 0x18) = IVar4;
            if (*(long *)(param_1 + 0x18) != 0) {
              if (*(ID *)(param_1 + 0x20) == 0) {
                local_70 = 0;
                uStack_88 = 0;
                local_90 = 0;
                uStack_78 = 0;
                uStack_80 = 0;
                uStack_a8 = 0;
                local_b0 = 0;
                uStack_98 = 0;
                uStack_a0 = 0;
                uStack_c8 = 0;
                local_d0 = 0;
                uStack_b8 = 0;
                uStack_c0 = 0;
                uStack_e8 = 0;
                local_f0 = 0;
                uStack_d8 = 0;
                uStack_e0 = 0;
                uStack_108 = 0;
                local_110 = 0;
                uStack_f8 = 0;
                uStack_100 = 0;
                local_150.__opaque[0x20] = '\0';
                local_150.__opaque[0x21] = '\0';
                local_150.__opaque[0x22] = '\0';
                local_150.__opaque[0x23] = '\0';
                local_150.__opaque[0x24] = '\0';
                local_150.__opaque[0x25] = '\0';
                local_150.__opaque[0x26] = '\0';
                local_150.__opaque[0x27] = '\0';
                local_150.__opaque[0x18] = '\0';
                local_150.__opaque[0x19] = '\0';
                local_150.__opaque[0x1a] = '\0';
                local_150.__opaque[0x1b] = '\0';
                local_150.__opaque[0x1c] = '\0';
                local_150.__opaque[0x1d] = '\0';
                local_150.__opaque[0x1e] = '\0';
                local_150.__opaque[0x1f] = '\0';
                local_150.__opaque[0x30] = '\0';
                local_150.__opaque[0x31] = '\0';
                local_150.__opaque[0x32] = '\0';
                local_150.__opaque[0x33] = '\0';
                local_150.__opaque[0x34] = '\0';
                local_150.__opaque[0x35] = '\0';
                local_150.__opaque[0x36] = '\0';
                local_150.__opaque[0x37] = '\0';
                local_150.__opaque[0x28] = '\0';
                local_150.__opaque[0x29] = '\0';
                local_150.__opaque[0x2a] = '\0';
                local_150.__opaque[0x2b] = '\0';
                local_150.__opaque[0x2c] = '\0';
                local_150.__opaque[0x2d] = '\0';
                local_150.__opaque[0x2e] = '\0';
                local_150.__opaque[0x2f] = '\0';
                local_150.__opaque[0] = '\0';
                local_150.__opaque[1] = '\0';
                local_150.__opaque[2] = '\0';
                local_150.__opaque[3] = '\0';
                local_150.__opaque[4] = '\0';
                local_150.__opaque[5] = '\0';
                local_150.__opaque[6] = '\0';
                local_150.__opaque[7] = '\0';
                local_150.__sig = 0;
                local_150.__opaque[0x10] = '\0';
                local_150.__opaque[0x11] = '\0';
                local_150.__opaque[0x12] = '\0';
                local_150.__opaque[0x13] = '\0';
                local_150.__opaque[0x14] = '\0';
                local_150.__opaque[0x15] = '\0';
                local_150.__opaque[0x16] = '\0';
                local_150.__opaque[0x17] = '\0';
                local_150.__opaque[8] = '\0';
                local_150.__opaque[9] = '\0';
                local_150.__opaque[10] = '\0';
                local_150.__opaque[0xb] = '\0';
                local_150.__opaque[0xc] = '\0';
                local_150.__opaque[0xd] = '\0';
                local_150.__opaque[0xe] = '\0';
                local_150.__opaque[0xf] = '\0';
              }
              else {
                objc_stub::asyncSafeRepresentation(*(ID *)(param_1 + 0x20),&local_150);
              }
              uRam0000000101060da0 = uStack_88;
              _DAT_101060d98 = local_90;
              uRam0000000101060db0 = uStack_78;
              _DAT_101060da8 = uStack_80;
              DAT_101060db8 = local_70;
              uRam0000000101060d60 = uStack_c8;
              _DAT_101060d58 = local_d0;
              uRam0000000101060d70 = uStack_b8;
              _DAT_101060d68 = uStack_c0;
              uRam0000000101060d80 = uStack_a8;
              _DAT_101060d78 = local_b0;
              uRam0000000101060d90 = uStack_98;
              _DAT_101060d88 = uStack_a0;
              uRam0000000101060d20 = uStack_108;
              _DAT_101060d18 = local_110;
              uRam0000000101060d30 = uStack_f8;
              _DAT_101060d28 = uStack_100;
              uRam0000000101060d40 = uStack_e8;
              _DAT_101060d38 = local_f0;
              uRam0000000101060d50 = uStack_d8;
              _DAT_101060d48 = uStack_e0;
              uRam0000000101060ce0._0_1_ = local_150.__opaque[0];
              uRam0000000101060ce0._1_1_ = local_150.__opaque[1];
              uRam0000000101060ce0._2_1_ = local_150.__opaque[2];
              uRam0000000101060ce0._3_1_ = local_150.__opaque[3];
              uRam0000000101060ce0._4_1_ = local_150.__opaque[4];
              uRam0000000101060ce0._5_1_ = local_150.__opaque[5];
              uRam0000000101060ce0._6_1_ = local_150.__opaque[6];
              uRam0000000101060ce0._7_1_ = local_150.__opaque[7];
              _DAT_101060cd8 = local_150.__sig;
              uRam0000000101060cf0._0_1_ = local_150.__opaque[0x10];
              uRam0000000101060cf0._1_1_ = local_150.__opaque[0x11];
              uRam0000000101060cf0._2_1_ = local_150.__opaque[0x12];
              uRam0000000101060cf0._3_1_ = local_150.__opaque[0x13];
              uRam0000000101060cf0._4_1_ = local_150.__opaque[0x14];
              uRam0000000101060cf0._5_1_ = local_150.__opaque[0x15];
              uRam0000000101060cf0._6_1_ = local_150.__opaque[0x16];
              uRam0000000101060cf0._7_1_ = local_150.__opaque[0x17];
              DAT_101060ce8 = local_150.__opaque[8];
              DAT_101060ce8_1._0_1_ = local_150.__opaque[9];
              DAT_101060ce8_1._1_1_ = local_150.__opaque[10];
              DAT_101060ce8_1._2_1_ = local_150.__opaque[0xb];
              DAT_101060ce8_1._3_1_ = local_150.__opaque[0xc];
              DAT_101060ce8_1._4_1_ = local_150.__opaque[0xd];
              DAT_101060ce8_1._5_1_ = local_150.__opaque[0xe];
              DAT_101060ce8_1._6_1_ = local_150.__opaque[0xf];
              uRam0000000101060d00._0_1_ = local_150.__opaque[0x20];
              uRam0000000101060d00._1_1_ = local_150.__opaque[0x21];
              uRam0000000101060d00._2_1_ = local_150.__opaque[0x22];
              uRam0000000101060d00._3_1_ = local_150.__opaque[0x23];
              uRam0000000101060d00._4_1_ = local_150.__opaque[0x24];
              uRam0000000101060d00._5_1_ = local_150.__opaque[0x25];
              uRam0000000101060d00._6_1_ = local_150.__opaque[0x26];
              uRam0000000101060d00._7_1_ = local_150.__opaque[0x27];
              DAT_101060cf8 = local_150.__opaque[0x18];
              DAT_101060cf8_1._0_1_ = local_150.__opaque[0x19];
              DAT_101060cf8_1._1_1_ = local_150.__opaque[0x1a];
              DAT_101060cf8_1._2_1_ = local_150.__opaque[0x1b];
              DAT_101060cf8_1._3_1_ = local_150.__opaque[0x1c];
              DAT_101060cf8_1._4_1_ = local_150.__opaque[0x1d];
              DAT_101060cf8_1._5_1_ = local_150.__opaque[0x1e];
              DAT_101060cf8_1._6_1_ = local_150.__opaque[0x1f];
              uRam0000000101060d10._0_1_ = local_150.__opaque[0x30];
              uRam0000000101060d10._1_1_ = local_150.__opaque[0x31];
              uRam0000000101060d10._2_1_ = local_150.__opaque[0x32];
              uRam0000000101060d10._3_1_ = local_150.__opaque[0x33];
              uRam0000000101060d10._4_1_ = local_150.__opaque[0x34];
              uRam0000000101060d10._5_1_ = local_150.__opaque[0x35];
              uRam0000000101060d10._6_1_ = local_150.__opaque[0x36];
              uRam0000000101060d10._7_1_ = local_150.__opaque[0x37];
              DAT_101060d08 = local_150.__opaque[0x28];
              DAT_101060d08_1._0_1_ = local_150.__opaque[0x29];
              DAT_101060d08_1._1_1_ = local_150.__opaque[0x2a];
              DAT_101060d08_1._2_1_ = local_150.__opaque[0x2b];
              DAT_101060d08_1._3_1_ = local_150.__opaque[0x2c];
              DAT_101060d08_1._4_1_ = local_150.__opaque[0x2d];
              DAT_101060d08_1._5_1_ = local_150.__opaque[0x2e];
              DAT_101060d08_1._6_1_ = local_150.__opaque[0x2f];
              goto LAB_1001893b8;
            }
          }
LAB_10018911c:
          bVar3 = 0;
        }
        else {
          if (IVar4 == 0) {
            lVar6 = 0;
            do {
              IVar4 = PHPLCrashSignalHandler::sharedHandler
                                ((ID)&objc::class_t::PHPLCrashSignalHandler);
              bVar3 = PHPLCrashSignalHandler::registerHandlerForSignal_callback_context_error_
                                (IVar4,(&DAT_100c30d34)[lVar6],(undefined4 *)FUN_10018941c,
                                 &DAT_101060bb8,param_3);
              if ((bVar3 & 1) == 0) goto LAB_10018911c;
              lVar6 = lVar6 + 1;
            } while (lVar6 != 6);
          }
LAB_1001893b8:
          IVar4 = objc_stub::shouldRegisterUncaughtExceptionHandler(*(ID *)(param_1 + 8));
          if ((int)IVar4 != 0) {
            _NSSetUncaughtExceptionHandler(FUN_100189600);
          }
          bVar3 = 1;
          *(undefined1 *)(param_1 + 0x10) = 1;
        }
        goto LAB_1001893d8;
      }
    }
    FUN_100190040();
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x10018941c | FUN_10018941c */

undefined8 FUN_10018941c(undefined8 param_1,undefined4 *param_2,long param_3,undefined8 param_4)

{
  __sigaction_u *p_Var1;
  long lVar2;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined1 *puStack_180;
  undefined8 local_178;
  __sigaction_u local_170;
  undefined8 uStack_168;
  
  lVar2 = 0;
  do {
    local_170.__sa_handler = (_func_333 *)0x0;
    uStack_168 = 0;
    _sigaction(*(int *)((long)&DAT_100c30d34 + lVar2),(sigaction *)&local_170,(sigaction *)0x0);
    lVar2 = lVar2 + 4;
  } while (lVar2 != 0x18);
  p_Var1 = &local_170;
  FUN_10017f5f8(p_Var1,*(undefined8 *)(param_3 + 0x30));
  local_190 = *param_2;
  uStack_18c = param_2[2];
  local_188 = *(undefined8 *)(param_2 + 6);
  local_178 = 0;
  puStack_180 = (undefined1 *)&local_190;
  FUN_100174fb8();
  FUN_10018a4ec(param_4,p_Var1,&local_170,&puStack_180);
  if (((int)param_4 == 0) && (DAT_101060dd0 != (code *)0x0)) {
    (*DAT_101060dd0)(param_2,param_3,DAT_101060dc8);
  }
  return 0;
}



/* Address: 0x1001894ec | FUN_1001894ec */

void FUN_1001894ec(int param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_460 [816];
  undefined1 auStack_130 [40];
  undefined8 local_108;
  undefined1 *local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 **local_e8;
  undefined4 local_e0 [2];
  undefined4 local_d8;
  undefined8 local_c8;
  undefined4 local_78 [2];
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 *puStack_50;
  undefined4 *local_48;
  
  FUN_100183d40();
  if ((param_1 != 0) &&
     (uVar2 = param_3, FUN_10017c9f0(param_3,param_4,param_5,0xffffffff,local_e0), (int)uVar2 != 0))
  {
    local_60 = local_e0[0];
    uStack_5c = local_d8;
    puStack_50 = &local_60;
    local_78[0] = (undefined4)param_3;
    local_68 = (undefined4)param_5;
    local_48 = local_78;
    local_58 = local_c8;
    uStack_ec = 0;
    local_e8 = &puStack_50;
    iVar1 = 0x18a5e0;
    local_f8 = param_6;
    local_f0 = param_2;
    local_70 = param_4;
    FUN_10017fe9c(FUN_10018a5e0,&local_f8);
    if ((iVar1 == 0) && (DAT_101060dd0 != (code *)0x0)) {
      FUN_1001751ec(auStack_460,0,0x330);
      FUN_1001751ec(auStack_130,0,0x38);
      local_108 = 0x330;
      local_100 = auStack_460;
      (*DAT_101060dd0)(local_e0,auStack_130,DAT_101060dc8);
    }
  }
  return;
}



/* Address: 0x100189600 | FUN_100189600 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100189600(undefined8 param_1)

{
  if (DAT_101060dc0 != '\0') {
    return 0;
  }
  DAT_101060dc0 = 1;
                    /* WARNING: Subroutine does not return */
  FUN_100190090(param_1);
}



/* Address: 0x100189644 | PHPLCrashReporter::generateLiveReportWithThread: */

/* Function Stack Size: 0x14 bytes */

ID PHPLCrashReporter::generateLiveReportWithThread_(ID param_1,SEL param_2,unsigned_int param_3)

{
  ID IVar1;
  
  IVar1 = generateLiveReportWithThread_error_(param_1,param_3,(ID *)0x0);
  return IVar1;
}



/* Address: 0x10018964c | PHPLCrashReporter::generateLiveReportWithThread:error: */

/* Function Stack Size: 0x1c bytes */

ID PHPLCrashReporter::generateLiveReportWithThread_error_
             (ID param_1,SEL param_2,unsigned_int param_3,ID *param_4)

{
  ID IVar1;
  
  IVar1 = generateLiveReportWithThread_exception_error_(param_1,param_3,0,param_4);
  return IVar1;
}



/* Address: 0x100189658 | PHPLCrashReporter::generateLiveReportWithThread:exception:error: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x24 bytes */

ID PHPLCrashReporter::generateLiveReportWithThread_exception_error_
             (ID param_1,SEL param_2,unsigned_int param_3,ID param_4,ID *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  unsigned_int uVar5;
  ID IVar6;
  char *pcVar7;
  undefined1 *puVar8;
  code *pcVar9;
  undefined *puVar10;
  int *piVar11;
  char *pcVar12;
  undefined8 uVar13;
  undefined8 *local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 **local_2b0;
  undefined1 auStack_2a0 [288];
  undefined1 auStack_180 [272];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  IVar6 = param_4;
  _NSTemporaryDirectory();
  IVar6 = objc_stub::stringByAppendingPathComponent_(IVar6,&cf_live_crash_report_XXXXXX);
  _objc_retainAutorelease();
  pcVar7 = (char *)objc_stub::fileSystemRepresentation(IVar6);
  pcVar7 = _strdup(pcVar7);
  iVar3 = _mkstemp(pcVar7);
  if (iVar3 < 0) {
    piVar11 = ___error();
    iVar3 = *piVar11;
    IVar6 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle);
    IVar6 = NSBundle::localizedStringForKey_value_table_
                      (IVar6,&cf_Failedtocreatetemporarypath,&cf___,0);
    FUN_10018a88c(param_5,iVar3,IVar6);
    _free(pcVar7);
    IVar6 = 0;
    goto LAB_1001899e0;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar13 = *(undefined8 *)(param_1 + 0x38);
  IVar6 = objc_stub::symbolicationStrategy(*(ID *)(param_1 + 8));
  iVar4 = mapToAsyncSymbolicationStrategy_(param_1,IVar6);
  FUN_100180bc0(auStack_180,uVar1,uVar2,uVar13,iVar4,1);
  IVar6 = objc_stub::maxReportBytes(*(ID *)(param_1 + 8));
  FUN_100175270(auStack_2a0,iVar3,IVar6);
  IVar6 = customData(param_1);
  if (IVar6 != 0) {
    IVar6 = customData(param_1);
    FUN_100181204(auStack_180,IVar6);
  }
  uVar5 = 0;
  if (param_4 != 0) {
    puVar8 = auStack_180;
    FUN_100180fe0(puVar8,param_4);
    uVar5 = (unsigned_int)puVar8;
  }
  local_2d0 = 0x200000005;
  local_2e0 = &local_2d0;
  uStack_2d8 = 0;
  FUN_100174fb8();
  if (param_3 == uVar5) {
    local_2c0 = auStack_180;
    uStack_2b8 = auStack_2a0;
    local_2b0 = &local_2e0;
    pcVar9 = FUN_100189a94;
    FUN_10017fe9c(FUN_100189a94,&local_2c0);
  }
  else {
    pcVar9 = (code *)auStack_180;
    FUN_100181374(pcVar9,param_3,&DAT_101060b90,auStack_2a0,&local_2e0,0);
  }
  FUN_100181280(auStack_180);
  FUN_100175350(auStack_2a0);
  FUN_10017539c(auStack_2a0);
  if ((int)pcVar9 == 0) {
    IVar6 = NSString::stringWithUTF8String_((ID)&_OBJC_CLASS___NSString,pcVar7);
    IVar6 = NSData::dataWithContentsOfFile_options_error_
                      ((ID)&_OBJC_CLASS___NSData,IVar6,10,param_5);
    if (IVar6 == 0) {
      IVar6 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle);
      IVar6 = NSBundle::localizedStringForKey_value_table_
                        (IVar6,&cf_Unabletoopenlivecrashreportforreading,&cf___,0);
      FUN_10018a734(param_5,0,IVar6,0);
      goto LAB_100189914;
    }
  }
  else {
    puVar10 = PTR___os_log_default_100ea8350;
    _os_log_type_enabled(PTR___os_log_default_100ea8350,0);
    if ((int)puVar10 != 0) {
      FUN_100174f54();
      local_2c0._0_4_ = 0x8200102;
      local_2c0._4_4_ = SUB84(pcVar9,0);
      uStack_2b8._0_4_ = (undefined4)((ulong)pcVar9 >> 0x20);
      __os_log_impl(0x100000000,PTR___os_log_default_100ea8350,0,
                    "[PLCrashReporter] Write failed with error %s",&local_2c0,0xc);
    }
    FUN_10018a734(param_5,0,&cf_Failedtowritethecrashreporttodisk,0);
LAB_100189914:
    IVar6 = 0;
  }
  FUN_100181288(auStack_180);
  iVar3 = _unlink(pcVar7);
  if (iVar3 != 0) {
    puVar10 = PTR___os_log_default_100ea8350;
    _os_log_type_enabled(PTR___os_log_default_100ea8350,0);
    if ((int)puVar10 != 0) {
      piVar11 = ___error();
      pcVar12 = _strerror(*piVar11);
      local_2c0._0_4_ = 0x8200102;
      local_2c0._4_4_ = SUB84(pcVar12,0);
      uStack_2b8._0_4_ = (undefined4)((ulong)pcVar12 >> 0x20);
      __os_log_impl(0x100000000,PTR___os_log_default_100ea8350,0,
                    "[PLCrashReporter] Failure occured deleting live crash report: %s",&local_2c0,
                    0xc);
    }
  }
  _free(pcVar7);
LAB_1001899e0:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_70) {
    return IVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}



/* Address: 0x100189a94 | FUN_100189a94 */

void FUN_100189a94(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = param_1;
  FUN_100174fb8();
  FUN_100181374(uVar2,uVar1,&DAT_101060b90,param_2[1],param_2[2],param_1);
  return;
}



/* Address: 0x100189adc | PHPLCrashReporter::generateLiveReport */

/* Function Stack Size: 0x10 bytes */

ID PHPLCrashReporter::generateLiveReport(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = generateLiveReportAndReturnError_(param_1,(ID *)0x0);
  return IVar1;
}



/* Address: 0x100189ae4 | PHPLCrashReporter::generateLiveReportAndReturnError: */

/* Function Stack Size: 0x18 bytes */

ID PHPLCrashReporter::generateLiveReportAndReturnError_(ID param_1,SEL param_2,ID *param_3)

{
  ID IVar1;
  
  IVar1 = generateLiveReportWithException_error_(param_1,0,param_3);
  return IVar1;
}



/* Address: 0x100189af0 | PHPLCrashReporter::generateLiveReportWithException:error: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID PHPLCrashReporter::generateLiveReportWithException_error_
             (ID param_1,SEL param_2,ID param_3,ID *param_4)

{
  ID IVar1;
  
  IVar1 = param_3;
  FUN_100174fb8();
  IVar1 = generateLiveReportWithThread_exception_error_(param_1,(unsigned_int)IVar1,param_3,param_4)
  ;
  return IVar1;
}



/* Address: 0x100189b54 | PHPLCrashReporter::setCrashCallbacks: */

/* Function Stack Size: 0x18 bytes */

void PHPLCrashReporter::setCrashCallbacks_(ID param_1,SEL param_2,PLCrashReporterCallbacks *param_3)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    NSException::raise_format_
              ((ID)&_OBJC_CLASS___NSException,PTR_cf_PLCrashReporterException_100fb3068,
               &cf_Thecrashreporterhasalreadybeenenabled);
  }
  if (param_3->field0_0x0 == 0) {
    DAT_101060dc8 = *(undefined8 *)((long)&param_3->field1_0x2 + 6);
    DAT_101060dd0 = *(undefined8 *)((long)&param_3->field2_0xa + 6);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1001900ac();
}



/* Address: 0x100189bbc | PHPLCrashReporter::setCustomData: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void PHPLCrashReporter::setCustomData_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x48) = param_3;
  FUN_100181204(&DAT_101060bb8,param_3);
  return;
}



/* Address: 0x100189c18 | PHPLCrashReporter::crashReportPath */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID PHPLCrashReporter::crashReportPath(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = crashReportDirectory(param_1);
  IVar1 = objc_stub::stringByAppendingPathComponent_(IVar1,&cf_live_report_plcrash);
  return IVar1;
}



/* Address: 0x100189c64 | PHPLCrashReporter::customData */

/* Function Stack Size: 0x10 bytes */

ID PHPLCrashReporter::customData(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x48);
}



/* Address: 0x100189c6c | PHPLCrashReporter::.cxx_destruct */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void PHPLCrashReporter::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



/* Address: 0x100189ce4 | PHPLCrashReporter::initWithApplicationIdentifier:appVersion:appMarketingVersion:configuration: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x30 bytes */

ID PHPLCrashReporter::initWithApplicationIdentifier_appVersion_appMarketingVersion_configuration_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID local_60;
  class_t *pcStack_58;
  
  pcStack_58 = &objc::class_t::PHPLCrashReporter;
  local_60 = param_1;
  IVar1 = ::NSObject::init((ID)&local_60,"init");
  if (IVar1 != 0) {
    *(ID *)(IVar1 + 8) = param_6;
    *(ID *)(IVar1 + 0x28) = param_3;
    *(ID *)(IVar1 + 0x30) = param_4;
    *(ID *)(IVar1 + 0x38) = param_5;
    IVar2 = objc_stub::stringByReplacingOccurrencesOfString_withString_(param_3,&cf__,&cf__);
    IVar3 = objc_stub::basePath(*(ID *)(IVar1 + 8));
    if (IVar3 == 0) {
      IVar3 = 0xd;
      _NSSearchPathForDirectoriesInDomains(0xd,1,1);
      IVar3 = objc_stub::objectAtIndex_(IVar3,0);
    }
    IVar3 = objc_stub::stringByAppendingPathComponent_
                      (IVar3,&cf_com_plausiblelabs_crashreporter_data);
    IVar2 = objc_stub::stringByAppendingPathComponent_(IVar3,IVar2);
    *(ID *)(IVar1 + 0x40) = IVar2;
  }
  return IVar1;
}



/* Address: 0x100189ec0 | PHPLCrashReporter::initWithBundle:configuration: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

ID PHPLCrashReporter::initWithBundle_configuration_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  ID IVar2;
  cfstringStruct *pcVar3;
  char *pcVar4;
  undefined *puVar5;
  uint local_60;
  char *local_5c;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  IVar1 = objc_stub::bundleIdentifier(param_3);
  IVar2 = objc_stub::infoDictionary(param_3);
  pcVar3 = (cfstringStruct *)
           objc_stub::objectForKey_(IVar2,*(undefined8 *)PTR__kCFBundleVersionKey_100ea9b30);
  IVar2 = objc_stub::infoDictionary(param_3);
  IVar2 = objc_stub::objectForKey_(IVar2,&cf_CFBundleShortVersionString);
  puVar5 = PTR___os_log_default_100ea8350;
  if (IVar1 == 0) {
    pcVar4 = _getprogname();
    if (pcVar4 == (char *)0x0) {
      NSException::raise_format_
                ((ID)&_OBJC_CLASS___NSException,PTR_cf_PLCrashReporterException_100fb3068,
                 &cf_Cannotdetermineprocessidentifierorprocessname);
      IVar1 = 0;
      goto LAB_10018a088;
    }
    puVar5 = PTR___os_log_default_100ea8350;
    _os_log_type_enabled(PTR___os_log_default_100ea8350,0);
    if ((int)puVar5 != 0) {
      local_60 = 0x8200102;
      local_5c = pcVar4;
      __os_log_impl(0x100000000,PTR___os_log_default_100ea8350,0,
                    "[PLCrashReporter] Warning -- bundle identifier, using process name %s",
                    &local_60,0xc);
    }
    IVar1 = NSString::stringWithUTF8String_((ID)&_OBJC_CLASS___NSString,pcVar4);
    puVar5 = PTR___os_log_default_100ea8350;
  }
  PTR___os_log_default_100ea8350 = puVar5;
  if (pcVar3 == (cfstringStruct *)0x0) {
    _os_log_type_enabled(puVar5,0);
    if ((int)puVar5 != 0) {
      local_60 = local_60 & 0xffff0000;
      __os_log_impl(0x100000000,PTR___os_log_default_100ea8350,0,
                    "[PLCrashReporter] Warning -- bundle version unavailable",&local_60,2);
    }
    pcVar3 = &cf___;
  }
  IVar1 = initWithApplicationIdentifier_appVersion_appMarketingVersion_configuration_
                    (param_1,IVar1,(ID)pcVar3,IVar2,param_4);
LAB_10018a088:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return IVar1;
}



/* Address: 0x10018a104 | PHPLCrashReporter::enableMachExceptionServerWithPreviousPortSet:callback:context:error: */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x30 bytes */

ID PHPLCrashReporter::enableMachExceptionServerWithPreviousPortSet_callback_context_error_
             (ID param_1,SEL param_2,ID *param_3,undefined4 *param_4,void *param_5,ID *param_6)

{
  ID IVar1;
  class_t *self;
  ID IVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  ulong local_68;
  
  IVar1 = PHPLCrashHostInfo::currentHostInfo((ID)&objc::class_t::PHPLCrashHostInfo);
  if (IVar1 == 0) {
    uVar4 = 0x6e;
  }
  else {
    PHPLCrashHostInfo::darwinVersion(IVar1);
    uVar3 = 0x106e;
    if (local_68 < 0xd) {
      uVar3 = 0x6e;
    }
    uVar4 = (ulong)uVar3;
  }
  self = &objc::class_t::PHPLCrashMachExceptionServer;
  _objc_alloc();
  local_70 = 0;
  IVar1 = objc_stub::initWithCallBack_context_error_((ID)self,param_4,param_5,&local_70);
  if (IVar1 == 0) {
    FUN_10018a734(param_6,1,&cf_FailedtoinstantiatetheMachexceptionserver_,local_70);
    IVar1 = 0;
  }
  else {
    local_78 = local_70;
    IVar2 = objc_stub::exceptionPortWithMask_error_(IVar1,uVar4,&local_78);
    if (IVar2 == 0) {
      FUN_10018a734(param_6,1,&cf_FailedtoinstantiatetheMachexceptionport_,local_78);
      IVar1 = 0;
    }
    else {
      local_80 = local_78;
      IVar2 = objc_stub::registerForTask_previousPortSet_error_
                        (IVar2,(ulong)*(uint *)PTR__mach_task_self__100ea8778,param_3,&local_80);
      if ((IVar2 & 1) == 0) {
        FUN_10018a734(param_6,1,&cf_Failedtosetthetargettask_smachexceptionports_,local_80);
        IVar1 = 0;
      }
    }
  }
  return IVar1;
}



/* Address: 0x10018a2d4 | PHPLCrashReporter::mapToAsyncSymbolicationStrategy: */

/* Function Stack Size: 0x18 bytes */

int PHPLCrashReporter::mapToAsyncSymbolicationStrategy_
              (ID param_1,SEL param_2,unsigned_long_long param_3)

{
  return (uint)param_3 & 3;
}



/* Address: 0x10018a2dc | PHPLCrashReporter::populateCrashReportDirectoryAndReturnError: */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

bool PHPLCrashReporter::populateCrashReportDirectoryAndReturnError_
               (ID param_1,SEL param_2,ID *param_3)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  uint uVar4;
  
  IVar1 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
  IVar2 = NSNumber::numberWithUnsignedLong_((ID)&_OBJC_CLASS___NSNumber,0x1ed);
  IVar2 = NSDictionary::dictionaryWithObject_forKey_
                    ((ID)&_OBJC_CLASS___NSDictionary,IVar2,
                     *(undefined8 *)PTR__NSFilePosixPermissions_100ea7bc0);
  IVar3 = crashReportDirectory(param_1);
  IVar3 = NSFileManager::fileExistsAtPath_(IVar1,IVar3);
  if ((int)IVar3 == 0) {
    IVar3 = crashReportDirectory(param_1);
    IVar3 = NSFileManager::createDirectoryAtPath_withIntermediateDirectories_attributes_error_
                      (IVar1,IVar3,1,IVar2,param_3);
    if ((int)IVar3 == 0) {
      uVar4 = 0;
      goto LAB_10018a44c;
    }
  }
  IVar3 = queuedCrashReportDirectory(param_1);
  IVar3 = NSFileManager::fileExistsAtPath_(IVar1,IVar3);
  if ((IVar3 & 1) == 0) {
    IVar3 = queuedCrashReportDirectory(param_1);
    IVar1 = NSFileManager::createDirectoryAtPath_withIntermediateDirectories_attributes_error_
                      (IVar1,IVar3,1,IVar2,param_3);
    uVar4 = (uint)IVar1;
  }
  else {
    uVar4 = 1;
  }
LAB_10018a44c:
  return uVar4 & 1;
}



/* Address: 0x10018a478 | PHPLCrashReporter::crashReportDirectory */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID PHPLCrashReporter::crashReportDirectory(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x40);
}



/* Address: 0x10018a4a0 | PHPLCrashReporter::queuedCrashReportDirectory */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID PHPLCrashReporter::queuedCrashReportDirectory(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = crashReportDirectory(param_1);
  IVar1 = objc_stub::stringByAppendingPathComponent_(IVar1,&cf_queued_reports);
  return IVar1;
}



/* Address: 0x10018a4ec | FUN_10018a4ec */

void FUN_10018a4ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined1 auStack_168 [288];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar6 = 0x1a4;
  iVar1 = _open(*(char **)(param_1 + 0x110),0x602);
  if (-1 < iVar1) {
    FUN_100175270(auStack_168,iVar1,*(undefined8 *)(param_1 + 0x118));
    lVar4 = param_1;
    FUN_100181374(param_1,param_2,&DAT_101060b90,auStack_168,param_4,param_3,param_7,param_8,uVar6);
    FUN_100181280();
    if ((int)param_1 == 0) {
      uVar2 = (uint)auStack_168;
      FUN_100175350();
      uVar3 = (uint)auStack_168;
      FUN_10017539c();
      uVar5 = (undefined4)lVar4;
      if ((uVar2 & uVar3) == 0) {
        uVar5 = 6;
      }
      goto LAB_10018a5ac;
    }
    FUN_10017539c(auStack_168);
  }
  uVar5 = 6;
LAB_10018a5ac:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(uVar5);
  }
  return;
}



/* Address: 0x10018a5e0 | FUN_10018a5e0 */

void FUN_10018a5e0(undefined8 param_1,undefined8 *param_2)

{
  FUN_10018a4ec(*param_2,*(undefined4 *)(param_2 + 1),param_1,param_2[2]);
  return;
}



/* Address: 0x10018a5f8 | PHPLCrashReporterConfig::defaultConfiguration */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID PHPLCrashReporterConfig::defaultConfiguration(ID param_1,SEL param_2)

{
  _objc_alloc_init();
  return param_1;
}



/* Address: 0x10018a60c | PHPLCrashReporterConfig::init */

/* Function Stack Size: 0x10 bytes */

ID PHPLCrashReporterConfig::init(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = initWithSignalHandlerType_symbolicationStrategy_(param_1,0,0);
  return IVar1;
}



/* Address: 0x10018a618 | PHPLCrashReporterConfig::initWithBasePath: */

/* Function Stack Size: 0x18 bytes */

ID PHPLCrashReporterConfig::initWithBasePath_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = initWithSignalHandlerType_symbolicationStrategy_basePath_(param_1,0,0,param_3);
  return IVar1;
}


