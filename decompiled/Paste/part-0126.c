/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100186160 | FUN_100186160 */

void FUN_100186160(undefined8 *param_1)

{
  if ((undefined *)*param_1 == &DAT_100ebb320) {
    FUN_10018b7cc();
    return;
  }
  FUN_10018ff8c();
  if ((undefined *)*param_1 == &DAT_100ebb320) {
    FUN_10018c0d0();
    return;
  }
  FUN_10018ffb4();
  if ((undefined *)*param_1 == &DAT_100ebb320) {
    FUN_10018cbd8();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10018ffdc();
}



/* Address: 0x100186184 | FUN_100186184 */

void FUN_100186184(undefined8 *param_1)

{
  if ((undefined *)*param_1 == &DAT_100ebb320) {
    FUN_10018c0d0();
    return;
  }
  FUN_10018ffb4();
  if ((undefined *)*param_1 == &DAT_100ebb320) {
    FUN_10018cbd8();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10018ffdc();
}



/* Address: 0x1001861a8 | FUN_1001861a8 */

void FUN_1001861a8(undefined8 *param_1)

{
  if ((undefined *)*param_1 == &DAT_100ebb320) {
    FUN_10018cbd8();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10018ffdc();
}



/* Address: 0x1001861cc | FUN_1001861cc */

void FUN_1001861cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_10018daa0(&DAT_100ebb320,param_1,param_2,param_3);
  return;
}



/* Address: 0x1001861e4 | FUN_1001861e4 */

void FUN_1001861e4(undefined8 *param_1)

{
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  if ((undefined *)*param_1 == &DAT_100ebb320) {
    FUN_10018eb34();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_100190004();
}



/* Address: 0x100186210 | PHPLCrashReportApplicationInfo::initWithApplicationIdentifier:applicationVersion:applicationMarketingVersion: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x28 bytes */

ID PHPLCrashReportApplicationInfo::
   initWithApplicationIdentifier_applicationVersion_applicationMarketingVersion_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  ID IVar1;
  ID local_40;
  class_t *pcStack_38;
  
  pcStack_38 = &objc::class_t::PHPLCrashReportApplicationInfo;
  local_40 = param_1;
  IVar1 = ::NSObject::init((ID)&local_40,"init");
  if (IVar1 != 0) {
    *(ID *)(IVar1 + 8) = param_3;
    *(ID *)(IVar1 + 0x10) = param_4;
    *(ID *)(IVar1 + 0x18) = param_5;
  }
  return IVar1;
}



/* Address: 0x1001862ec | PHPLCrashReportApplicationInfo::applicationIdentifier */

/* Function Stack Size: 0x10 bytes */

ID PHPLCrashReportApplicationInfo::applicationIdentifier(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 8);
}



/* Address: 0x1001862f4 | PHPLCrashReportApplicationInfo::applicationVersion */

/* Function Stack Size: 0x10 bytes */

ID PHPLCrashReportApplicationInfo::applicationVersion(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x10);
}



/* Address: 0x1001862fc | PHPLCrashReportApplicationInfo::applicationMarketingVersion */

/* Function Stack Size: 0x10 bytes */

ID PHPLCrashReportApplicationInfo::applicationMarketingVersion(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x18);
}



/* Address: 0x100186304 | PHPLCrashReportApplicationInfo::.cxx_destruct */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void PHPLCrashReportApplicationInfo::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



/* Address: 0x100186340 | PHPLCrashReportBinaryImageInfo::initWithCodeType:baseAddress:size:name:uuid: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x38 bytes */

ID PHPLCrashReportBinaryImageInfo::initWithCodeType_baseAddress_size_name_uuid_
             (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4,
             unsigned_long_long param_5,ID param_6,ID param_7)

{
  byte bVar1;
  ID IVar2;
  ID IVar3;
  void *pvVar4;
  byte *pbVar5;
  undefined *self;
  char *pcVar6;
  size_t sVar7;
  ID local_60;
  class_t *pcStack_58;
  
  pcStack_58 = &objc::class_t::PHPLCrashReportBinaryImageInfo;
  local_60 = param_1;
  IVar2 = ::NSObject::init((ID)&local_60,"init");
  if (IVar2 != 0) {
    *(unsigned_long_long *)(IVar2 + 0x10) = param_4;
    *(unsigned_long_long *)(IVar2 + 0x18) = param_5;
    *(ID *)(IVar2 + 0x20) = param_6;
    *(ID *)(IVar2 + 8) = param_3;
    if (param_7 != 0) {
      *(undefined1 *)(IVar2 + 0x28) = 1;
      IVar3 = objc_stub::length(param_7);
      sVar7 = IVar3 << 1;
      pvVar4 = _malloc(sVar7);
      _objc_retainAutorelease();
      pbVar5 = (byte *)objc_stub::bytes(param_7);
      if (IVar3 != 0) {
        pcVar6 = (char *)((long)pvVar4 + 1);
        do {
          bVar1 = *pbVar5;
          pcVar6[-1] = "0123456789abcdef"[bVar1 >> 4];
          *pcVar6 = "0123456789abcdef"[(ulong)bVar1 & 0xf];
          IVar3 = IVar3 - 1;
          pbVar5 = pbVar5 + 1;
          pcVar6 = pcVar6 + 2;
        } while (IVar3 != 0);
      }
      self = &_OBJC_CLASS___NSString;
      _objc_alloc();
      IVar3 = objc_stub::initWithBytesNoCopy_length_encoding_freeWhenDone_
                        ((ID)self,pvVar4,sVar7,1,1);
      *(ID *)(IVar2 + 0x30) = IVar3;
    }
  }
  return IVar2;
}



/* Address: 0x1001864bc | PHPLCrashReportBinaryImageInfo::codeType */

/* Function Stack Size: 0x10 bytes */

ID PHPLCrashReportBinaryImageInfo::codeType(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 8);
}



/* Address: 0x1001864c4 | PHPLCrashReportBinaryImageInfo::imageBaseAddress */

/* Function Stack Size: 0x10 bytes */

unsigned_long_long PHPLCrashReportBinaryImageInfo::imageBaseAddress(ID param_1,SEL param_2)

{
  return *(unsigned_long_long *)(param_1 + 0x10);
}



/* Address: 0x1001864cc | PHPLCrashReportBinaryImageInfo::imageSize */

/* Function Stack Size: 0x10 bytes */

unsigned_long_long PHPLCrashReportBinaryImageInfo::imageSize(ID param_1,SEL param_2)

{
  return *(unsigned_long_long *)(param_1 + 0x18);
}



/* Address: 0x1001864d4 | PHPLCrashReportBinaryImageInfo::imageName */

/* Function Stack Size: 0x10 bytes */

ID PHPLCrashReportBinaryImageInfo::imageName(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x20);
}



/* Address: 0x1001864dc | PHPLCrashReportBinaryImageInfo::hasImageUUID */

/* Function Stack Size: 0x10 bytes */

bool PHPLCrashReportBinaryImageInfo::hasImageUUID(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + 0x28);
}



/* Address: 0x1001864e4 | PHPLCrashReportBinaryImageInfo::imageUUID */

/* Function Stack Size: 0x10 bytes */

ID PHPLCrashReportBinaryImageInfo::imageUUID(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x30);
}



/* Address: 0x1001864ec | PHPLCrashReportBinaryImageInfo::.cxx_destruct */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void PHPLCrashReportBinaryImageInfo::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



/* Address: 0x100186528 | PHPLCrashReportExceptionInfo::initWithExceptionName:reason: */

/* Function Stack Size: 0x20 bytes */

ID PHPLCrashReportExceptionInfo::initWithExceptionName_reason_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  
  IVar1 = initWithExceptionName_reason_stackFrames_(param_1,param_3,param_4,0);
  return IVar1;
}



/* Address: 0x100186530 | PHPLCrashReportExceptionInfo::initWithExceptionName:reason:stackFrames: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x28 bytes */

ID PHPLCrashReportExceptionInfo::initWithExceptionName_reason_stackFrames_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  ID IVar1;
  ID local_40;
  class_t *pcStack_38;
  
  pcStack_38 = &objc::class_t::PHPLCrashReportExceptionInfo;
  local_40 = param_1;
  IVar1 = ::NSObject::init((ID)&local_40,"init");
  if (IVar1 != 0) {
    *(ID *)(IVar1 + 8) = param_3;
    *(ID *)(IVar1 + 0x10) = param_4;
    *(ID *)(IVar1 + 0x18) = param_5;
  }
  return IVar1;
}



/* Address: 0x10018660c | PHPLCrashReportExceptionInfo::exceptionName */

/* Function Stack Size: 0x10 bytes */

ID PHPLCrashReportExceptionInfo::exceptionName(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 8);
}



/* Address: 0x100186614 | PHPLCrashReportExceptionInfo::exceptionReason */

/* Function Stack Size: 0x10 bytes */

ID PHPLCrashReportExceptionInfo::exceptionReason(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x10);
}



/* Address: 0x10018661c | PHPLCrashReportExceptionInfo::stackFrames */

/* Function Stack Size: 0x10 bytes */

ID PHPLCrashReportExceptionInfo::stackFrames(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x18);
}



/* Address: 0x100186624 | PHPLCrashReportExceptionInfo::.cxx_destruct */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void PHPLCrashReportExceptionInfo::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



/* Address: 0x100186660 | PHPLCrashReportMachExceptionInfo::initWithType:codes: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

ID PHPLCrashReportMachExceptionInfo::initWithType_codes_
             (ID param_1,SEL param_2,unsigned_long_long param_3,ID param_4)

{
  ID IVar1;
  ID local_40;
  class_t *pcStack_38;
  
  pcStack_38 = &objc::class_t::PHPLCrashReportMachExceptionInfo;
  local_40 = param_1;
  IVar1 = ::NSObject::init((ID)&local_40,"init");
  if (IVar1 != 0) {
    *(unsigned_long_long *)(IVar1 + 8) = param_3;
    *(ID *)(IVar1 + 0x10) = param_4;
  }
  return IVar1;
}



/* Address: 0x1001866f4 | PHPLCrashReportMachExceptionInfo::type */

/* Function Stack Size: 0x10 bytes */

unsigned_long_long PHPLCrashReportMachExceptionInfo::type(ID param_1,SEL param_2)

{
  return *(unsigned_long_long *)(param_1 + 8);
}



/* Address: 0x1001866fc | PHPLCrashReportMachExceptionInfo::codes */

/* Function Stack Size: 0x10 bytes */

ID PHPLCrashReportMachExceptionInfo::codes(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x10);
}



/* Address: 0x100186704 | PHPLCrashReportMachExceptionInfo::.cxx_destruct */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void PHPLCrashReportMachExceptionInfo::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



/* Address: 0x100186710 | PHPLCrashReportMachineInfo::initWithModelName:processorInfo:processorCount:logicalProcessorCount: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x30 bytes */

ID PHPLCrashReportMachineInfo::initWithModelName_processorInfo_processorCount_logicalProcessorCount_
             (ID param_1,SEL param_2,ID param_3,ID param_4,unsigned_long_long param_5,
             unsigned_long_long param_6)

{
  ID IVar1;
  ID local_50;
  class_t *pcStack_48;
  
  pcStack_48 = &objc::class_t::PHPLCrashReportMachineInfo;
  local_50 = param_1;
  IVar1 = ::NSObject::init((ID)&local_50,"init");
  if (IVar1 != 0) {
    *(ID *)(IVar1 + 8) = param_3;
    *(ID *)(IVar1 + 0x10) = param_4;
    *(unsigned_long_long *)(IVar1 + 0x18) = param_5;
    *(unsigned_long_long *)(IVar1 + 0x20) = param_6;
  }
  return IVar1;
}



/* Address: 0x1001867d8 | PHPLCrashReportMachineInfo::modelName */

/* Function Stack Size: 0x10 bytes */

ID PHPLCrashReportMachineInfo::modelName(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 8);
}



/* Address: 0x1001867e0 | PHPLCrashReportMachineInfo::processorInfo */

/* Function Stack Size: 0x10 bytes */

ID PHPLCrashReportMachineInfo::processorInfo(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x10);
}



/* Address: 0x1001867e8 | PHPLCrashReportMachineInfo::processorCount */

/* Function Stack Size: 0x10 bytes */

unsigned_long_long PHPLCrashReportMachineInfo::processorCount(ID param_1,SEL param_2)

{
  return *(unsigned_long_long *)(param_1 + 0x18);
}



/* Address: 0x1001867f0 | PHPLCrashReportMachineInfo::logicalProcessorCount */

/* Function Stack Size: 0x10 bytes */

unsigned_long_long PHPLCrashReportMachineInfo::logicalProcessorCount(ID param_1,SEL param_2)

{
  return *(unsigned_long_long *)(param_1 + 0x20);
}



/* Address: 0x1001867f8 | PHPLCrashReportMachineInfo::.cxx_destruct */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void PHPLCrashReportMachineInfo::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



/* Address: 0x100186828 | PHPLCrashReportProcessInfo::initWithProcessName:processID:processPath:processStartTime:parentProcessName:parentProcessID:native: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x44 bytes */

ID PHPLCrashReportProcessInfo::
   initWithProcessName_processID_processPath_processStartTime_parentProcessName_parentProcessID_native_
             (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4,ID param_5,ID param_6,
             ID param_7,unsigned_long_long param_8,bool param_9)

{
  ID IVar1;
  ID local_60;
  class_t *pcStack_58;
  
  pcStack_58 = &objc::class_t::PHPLCrashReportProcessInfo;
  local_60 = param_1;
  IVar1 = ::NSObject::init((ID)&local_60,"init");
  if (IVar1 != 0) {
    *(ID *)(IVar1 + 8) = param_3;
    *(unsigned_long_long *)(IVar1 + 0x10) = param_4;
    *(ID *)(IVar1 + 0x18) = param_5;
    *(ID *)(IVar1 + 0x20) = param_6;
    *(ID *)(IVar1 + 0x28) = param_7;
    *(unsigned_long_long *)(IVar1 + 0x30) = param_8;
    *(undefined1 *)(IVar1 + 0x38) = (undefined1)param_9;
  }
  return IVar1;
}



/* Address: 0x100186954 | PHPLCrashReportProcessInfo::processName */

/* Function Stack Size: 0x10 bytes */

ID PHPLCrashReportProcessInfo::processName(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 8);
}



/* Address: 0x10018695c | PHPLCrashReportProcessInfo::processID */

/* Function Stack Size: 0x10 bytes */

unsigned_long_long PHPLCrashReportProcessInfo::processID(ID param_1,SEL param_2)

{
  return *(unsigned_long_long *)(param_1 + 0x10);
}



/* Address: 0x100186964 | PHPLCrashReportProcessInfo::processPath */

/* Function Stack Size: 0x10 bytes */

ID PHPLCrashReportProcessInfo::processPath(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x18);
}



/* Address: 0x10018696c | PHPLCrashReportProcessInfo::processStartTime */

/* Function Stack Size: 0x10 bytes */

ID PHPLCrashReportProcessInfo::processStartTime(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x20);
}



/* Address: 0x100186974 | PHPLCrashReportProcessInfo::parentProcessName */

/* Function Stack Size: 0x10 bytes */

ID PHPLCrashReportProcessInfo::parentProcessName(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x28);
}



/* Address: 0x10018697c | PHPLCrashReportProcessInfo::parentProcessID */

/* Function Stack Size: 0x10 bytes */

unsigned_long_long PHPLCrashReportProcessInfo::parentProcessID(ID param_1,SEL param_2)

{
  return *(unsigned_long_long *)(param_1 + 0x30);
}



/* Address: 0x100186984 | PHPLCrashReportProcessInfo::native */

/* Function Stack Size: 0x10 bytes */

bool PHPLCrashReportProcessInfo::native(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + 0x38);
}



/* Address: 0x10018698c | PHPLCrashReportProcessInfo::.cxx_destruct */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void PHPLCrashReportProcessInfo::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



/* Address: 0x1001869d4 | PHPLCrashReportProcessorInfo::initWithTypeEncoding:type:subtype: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x24 bytes */

ID PHPLCrashReportProcessorInfo::initWithTypeEncoding_type_subtype_
             (ID param_1,SEL param_2,int param_3,unsigned_long_long param_4,
             unsigned_long_long param_5)

{
  ID IVar1;
  ID local_40;
  class_t *pcStack_38;
  
  pcStack_38 = &objc::class_t::PHPLCrashReportProcessorInfo;
  local_40 = param_1;
  IVar1 = ::NSObject::init((ID)&local_40,"init");
  if (IVar1 != 0) {
    *(int *)(IVar1 + 8) = param_3;
    *(unsigned_long_long *)(IVar1 + 0x10) = param_4;
    *(unsigned_long_long *)(IVar1 + 0x18) = param_5;
  }
  return IVar1;
}



/* Address: 0x100186a48 | PHPLCrashReportProcessorInfo::typeEncoding */

/* Function Stack Size: 0x10 bytes */

int PHPLCrashReportProcessorInfo::typeEncoding(ID param_1,SEL param_2)

{
  return *(int *)(param_1 + 8);
}



/* Address: 0x100186a50 | PHPLCrashReportProcessorInfo::type */

/* Function Stack Size: 0x10 bytes */

unsigned_long_long PHPLCrashReportProcessorInfo::type(ID param_1,SEL param_2)

{
  return *(unsigned_long_long *)(param_1 + 0x10);
}



/* Address: 0x100186a58 | PHPLCrashReportProcessorInfo::subtype */

/* Function Stack Size: 0x10 bytes */

unsigned_long_long PHPLCrashReportProcessorInfo::subtype(ID param_1,SEL param_2)

{
  return *(unsigned_long_long *)(param_1 + 0x18);
}



/* Address: 0x100186a60 | PHPLCrashReportRegisterInfo::initWithRegisterName:registerValue: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

ID PHPLCrashReportRegisterInfo::initWithRegisterName_registerValue_
             (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4)

{
  ID IVar1;
  ID local_40;
  class_t *pcStack_38;
  
  pcStack_38 = &objc::class_t::PHPLCrashReportRegisterInfo;
  local_40 = param_1;
  IVar1 = ::NSObject::init((ID)&local_40,"init");
  if (IVar1 != 0) {
    *(ID *)(IVar1 + 8) = param_3;
    *(unsigned_long_long *)(IVar1 + 0x10) = param_4;
  }
  return IVar1;
}



/* Address: 0x100186af4 | PHPLCrashReportRegisterInfo::registerName */

/* Function Stack Size: 0x10 bytes */

ID PHPLCrashReportRegisterInfo::registerName(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 8);
}



/* Address: 0x100186afc | PHPLCrashReportRegisterInfo::registerValue */

/* Function Stack Size: 0x10 bytes */

unsigned_long_long PHPLCrashReportRegisterInfo::registerValue(ID param_1,SEL param_2)

{
  return *(unsigned_long_long *)(param_1 + 0x10);
}



/* Address: 0x100186b04 | PHPLCrashReportRegisterInfo::.cxx_destruct */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void PHPLCrashReportRegisterInfo::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



/* Address: 0x100186b10 | PHPLCrashReportSignalInfo::initWithSignalName:code:address:crashInfoMessage: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x30 bytes */

ID PHPLCrashReportSignalInfo::initWithSignalName_code_address_crashInfoMessage_
             (ID param_1,SEL param_2,ID param_3,ID param_4,unsigned_long_long param_5,ID param_6)

{
  ID IVar1;
  ID local_50;
  class_t *pcStack_48;
  
  pcStack_48 = &objc::class_t::PHPLCrashReportSignalInfo;
  local_50 = param_1;
  IVar1 = ::NSObject::init((ID)&local_50,"init");
  if (IVar1 != 0) {
    *(ID *)(IVar1 + 8) = param_3;
    *(ID *)(IVar1 + 0x10) = param_4;
    *(unsigned_long_long *)(IVar1 + 0x18) = param_5;
    *(ID *)(IVar1 + 0x20) = param_6;
  }
  return IVar1;
}



/* Address: 0x100186bfc | PHPLCrashReportSignalInfo::name */

/* Function Stack Size: 0x10 bytes */

ID PHPLCrashReportSignalInfo::name(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 8);
}



/* Address: 0x100186c04 | PHPLCrashReportSignalInfo::code */

/* Function Stack Size: 0x10 bytes */

ID PHPLCrashReportSignalInfo::code(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x10);
}



/* Address: 0x100186c0c | PHPLCrashReportSignalInfo::address */

/* Function Stack Size: 0x10 bytes */

unsigned_long_long PHPLCrashReportSignalInfo::address(ID param_1,SEL param_2)

{
  return *(unsigned_long_long *)(param_1 + 0x18);
}



/* Address: 0x100186c14 | PHPLCrashReportSignalInfo::crashInfoMessage */

/* Function Stack Size: 0x10 bytes */

ID PHPLCrashReportSignalInfo::crashInfoMessage(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x20);
}



/* Address: 0x100186c1c | PHPLCrashReportSignalInfo::.cxx_destruct */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void PHPLCrashReportSignalInfo::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



/* Address: 0x100186c58 | PHPLCrashReportStackFrameInfo::initWithInstructionPointer:symbolInfo: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

ID PHPLCrashReportStackFrameInfo::initWithInstructionPointer_symbolInfo_
             (ID param_1,SEL param_2,unsigned_long_long param_3,ID param_4)

{
  ID IVar1;
  ID local_40;
  class_t *pcStack_38;
  
  pcStack_38 = &objc::class_t::PHPLCrashReportStackFrameInfo;
  local_40 = param_1;
  IVar1 = ::NSObject::init((ID)&local_40,"init");
  if (IVar1 != 0) {
    *(unsigned_long_long *)(IVar1 + 8) = param_3;
    *(ID *)(IVar1 + 0x10) = param_4;
  }
  return IVar1;
}



/* Address: 0x100186cec | PHPLCrashReportStackFrameInfo::instructionPointer */

/* Function Stack Size: 0x10 bytes */

unsigned_long_long PHPLCrashReportStackFrameInfo::instructionPointer(ID param_1,SEL param_2)

{
  return *(unsigned_long_long *)(param_1 + 8);
}



/* Address: 0x100186cf4 | PHPLCrashReportStackFrameInfo::symbolInfo */

/* Function Stack Size: 0x10 bytes */

ID PHPLCrashReportStackFrameInfo::symbolInfo(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x10);
}



/* Address: 0x100186cfc | PHPLCrashReportStackFrameInfo::.cxx_destruct */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void PHPLCrashReportStackFrameInfo::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



/* Address: 0x100186d08 | PHPLCrashReportSymbolInfo::initWithSymbolName:startAddress:endAddress: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x28 bytes */

ID PHPLCrashReportSymbolInfo::initWithSymbolName_startAddress_endAddress_
             (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4,
             unsigned_long_long param_5)

{
  ID IVar1;
  ID local_40;
  class_t *pcStack_38;
  
  pcStack_38 = &objc::class_t::PHPLCrashReportSymbolInfo;
  local_40 = param_1;
  IVar1 = ::NSObject::init((ID)&local_40,"init");
  if (IVar1 != 0) {
    *(ID *)(IVar1 + 8) = param_3;
    *(unsigned_long_long *)(IVar1 + 0x10) = param_4;
    *(unsigned_long_long *)(IVar1 + 0x18) = param_5;
  }
  return IVar1;
}



/* Address: 0x100186da0 | PHPLCrashReportSymbolInfo::symbolName */

/* Function Stack Size: 0x10 bytes */

ID PHPLCrashReportSymbolInfo::symbolName(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 8);
}



/* Address: 0x100186da8 | PHPLCrashReportSymbolInfo::startAddress */

/* Function Stack Size: 0x10 bytes */

unsigned_long_long PHPLCrashReportSymbolInfo::startAddress(ID param_1,SEL param_2)

{
  return *(unsigned_long_long *)(param_1 + 0x10);
}


