/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100b32f74 | SentryBreadcrumb::hash */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

unsigned_long_long SentryBreadcrumb::hash(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  
  IVar1 = objc_stub::FUN_100c06200(param_1);
  IVar2 = objc_stub::FUN_100bff0c0(param_1);
  IVar2 = objc_stub::FUN_100c033c0(IVar2);
  IVar3 = objc_stub::timestamp(param_1);
  IVar3 = objc_stub::FUN_100c033c0(IVar3);
  IVar4 = objc_stub::type(param_1);
  IVar4 = objc_stub::FUN_100c033c0(IVar4);
  IVar5 = objc_stub::FUN_100c07860(param_1);
  IVar5 = objc_stub::FUN_100c033c0(IVar5);
  IVar6 = objc_stub::FUN_100c06ca0(param_1);
  IVar6 = objc_stub::FUN_100c033c0(IVar6);
  IVar7 = objc_stub::data(param_1);
  IVar7 = objc_stub::FUN_100c033c0(IVar7);
  return IVar7 + (IVar6 + (IVar5 + (IVar4 + (IVar3 + (IVar2 + IVar1 * 0x17) * 0x17) * 0x17) * 0x17)
                          * 0x17) * 0x17 + 0xd7a09b9d7;
}



/* Address: 0x100b33094 | SentryBreadcrumb::description */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryBreadcrumb::description(ID param_1,SEL param_2)

{
  ID IVar1;
  
  objc_stub::class(param_1);
  objc_stub::serialize(param_1);
  IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_<__:_p,__>);
  return IVar1;
}



/* Address: 0x100b33114 | SentryBreadcrumb::.cxx_destruct */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryBreadcrumb::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



/* Address: 0x100b33174 | FUN_100b33174 */

void FUN_100b33174(void)

{
  uint uVar1;
  int iVar2;
  ulong uVar4;
  int *piVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  int extraout_w8;
  ulong uVar3;
  
  if (DAT_1010e2c80 == (char *)0x0) {
    FUN_100b5e930("ERROR",
                  "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentrySessionReplaySyncC.c"
                  ,0x36,"There is no path to write replay information");
    return;
  }
  uVar1 = _open(DAT_1010e2c80,0x602);
  uVar3 = (ulong)uVar1;
  if ((int)uVar1 < 1) {
    piVar5 = ___error();
    ppuVar6 = &PTR___tlv_bootstrap_101049280;
    (*(code *)PTR___tlv_bootstrap_101049280)(*piVar5);
    iVar2 = _strerror_r(extraout_w8,(char *)ppuVar6,0x400);
    if (iVar2 != 0) {
      ___error();
      _snprintf((char *)ppuVar6,0x400,"Unknown error %d");
    }
    FUN_100b5e930("ERROR",
                  "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentrySessionReplaySyncC.c"
                  ,0x3e,"Could not open replay info crash for file %s: %s");
    return;
  }
  uVar4 = uVar3;
  FUN_100b176dc(uVar3,&DAT_1010e2c70,4);
  if ((uVar4 & 1) == 0) {
    uVar7 = 0x44;
  }
  else {
    uVar4 = uVar3;
    FUN_100b176dc(uVar3,&DAT_1010e2c78,8);
    if ((uVar4 & 1) != 0) goto LAB_100b332cc;
    uVar7 = 0x4b;
  }
  FUN_100b5e930("ERROR",
                "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentrySessionReplaySyncC.c"
                ,uVar7,"Error writing replay info for crash.");
LAB_100b332cc:
  _close(uVar3);
  return;
}



/* Address: 0x100b332e0 | FUN_100b332e0 */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

cfstringStruct * FUN_100b332e0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined **ppuVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  size_t local_c8;
  undefined1 auStack_c0 [128];
  int local_40;
  undefined4 uStack_3c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ea82f0;
  local_40 = 6;
  local_c8 = 0x80;
  uStack_3c = param_1;
  piVar3 = ___error();
  *piVar3 = 0;
  iVar1 = _sysctl(&local_40,2,auStack_c0,&local_c8,(void *)0x0,0);
  piVar3 = ___error();
  iVar2 = *piVar3;
  if ((iVar2 != 0) && (FUN_100b3a1f0(), (int)piVar3 != 0)) {
    ppuVar4 = &PTR___tlv_bootstrap_101049298;
    (*(code *)PTR___tlv_bootstrap_101049298)();
    iVar2 = _strerror_r(iVar2,(char *)ppuVar4,0x400);
    if (iVar2 != 0) {
      _snprintf((char *)ppuVar4,0x400,"Unknown error %d");
    }
    FUN_100b3a2b8("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryDevice.m",0x40,
                  &cf__sfailedwithcode__d_description__s);
  }
  if (iVar1 == 0) {
    pcVar5 = (cfstringStruct *)
             objc_stub::stringWithUTF8String_((ID)&_OBJC_CLASS___NSString,auStack_c0);
    pcVar6 = pcVar5;
    FUN_100b3a1c0();
    if ((int)pcVar6 != 0) {
      FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryDevice.m",
                    0x55,&cf_Modelnameusing_____);
    }
  }
  else {
    pcVar5 = &cf___;
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_38) {
    return pcVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100b33480 | FUN_100b33480 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

cfstringStruct * FUN_100b33480(ID param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined **ppuVar4;
  cfstringStruct *pcVar5;
  undefined *self;
  size_t local_40;
  int local_34;
  
  local_40 = 4;
  piVar3 = ___error();
  *piVar3 = 0;
  iVar1 = _sysctlbyname("hw.cputype",&local_34,&local_40,(void *)0x0,0);
  piVar3 = ___error();
  iVar2 = *piVar3;
  if ((iVar2 != 0) && (FUN_100b3a1f0(), (int)piVar3 != 0)) {
    ppuVar4 = &PTR___tlv_bootstrap_1010492b0;
    (*(code *)PTR___tlv_bootstrap_1010492b0)();
    iVar2 = _strerror_r(iVar2,(char *)ppuVar4,0x400);
    if (iVar2 != 0) {
      _snprintf((char *)ppuVar4,0x400,"Unknown error %d");
    }
    FUN_100b3a2b8("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryDevice.m",0x6b,
                  &cf__sfailedwithcode__d_description__s);
  }
  if (iVar1 == 0) {
    if (local_34 < 0x1000007) {
      if (local_34 == 7) {
        return &cf_x86;
      }
      if (local_34 == 0xc) {
        return &cf_arm;
      }
    }
    else {
      if (local_34 == 0x1000007) {
        return &cf_x86_64;
      }
      if (local_34 == 0x100000c) {
        return &cf_arm64;
      }
      if (local_34 == 0x200000c) {
        return &cf_arm64_32;
      }
    }
    self = &_OBJC_CLASS___NSMutableString;
    if (param_1 == 0) {
      pcVar5 = &cf_unknownCPUtype__d_;
    }
    else {
      objc_stub::intValue(param_1);
      pcVar5 = &cf_unknownCPUtype__d_andsubtype__d_;
    }
  }
  else {
    if (param_1 == 0) {
      return &cf_noCPUtypeorsubtype;
    }
    self = &_OBJC_CLASS___NSString;
    objc_stub::intValue(param_1);
    pcVar5 = &cf_noCPUtypeforunknownsubtype_d;
  }
  pcVar5 = (cfstringStruct *)objc_stub::stringWithFormat_((ID)self,pcVar5);
  return pcVar5;
}



/* Address: 0x100b33670 | FUN_100b33670 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_100b33670(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  size_t local_40;
  int local_34;
  
  local_40 = 4;
  piVar4 = ___error();
  *piVar4 = 0;
  iVar2 = _sysctlbyname("hw.cpusubtype",&local_34,&local_40,(void *)0x0,0);
  piVar4 = ___error();
  iVar3 = *piVar4;
  if ((iVar3 != 0) && (FUN_100b3a1f0(), (int)piVar4 != 0)) {
    ppuVar5 = &PTR___tlv_bootstrap_1010492c8;
    (*(code *)PTR___tlv_bootstrap_1010492c8)();
    iVar3 = _strerror_r(iVar3,(char *)ppuVar5,0x400);
    if (iVar3 != 0) {
      _snprintf((char *)ppuVar5,0x400,"Unknown error %d");
    }
    FUN_100b3a2b8("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryDevice.m",0x8e,
                  &cf__sfailedwithcode__d_description__s);
  }
  if (iVar2 == 0) {
    uVar1 = local_34 - 1;
    if ((uVar1 < 0xc) && ((0xda7U >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
      puVar6 = (&PTR_cf_armv8_100f349c0)[uVar1];
    }
    else {
      puVar6 = (undefined *)objc_stub::numberWithInt_((ID)&_OBJC_CLASS___NSNumber);
      FUN_100b33480(puVar6);
    }
  }
  else {
    puVar6 = (undefined *)0x0;
    FUN_100b33480(0);
  }
  return puVar6;
}



/* Address: 0x100b337c0 | FUN_100b337c0 */

cfstringStruct * FUN_100b337c0(void)

{
  return &cf_macOS;
}



/* Address: 0x100b337cc | FUN_100b337cc */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID FUN_100b337cc(void)

{
  ID IVar1;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  IVar1 = objc_stub::processInfo((ID)&_OBJC_CLASS___NSProcessInfo);
  if (IVar1 == 0) {
    local_38 = 0;
    uStack_30 = 0;
    local_28 = 0;
  }
  else {
    objc_stub::operatingSystemVersion(IVar1,&local_38);
  }
  IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf__ld__ld__ld);
  return IVar1;
}



/* Address: 0x100b33854 | FUN_100b33854 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID FUN_100b33854(void)

{
  ID self;
  ID IVar1;
  ID IVar2;
  
  self = 0x1b;
  FUN_100b332e0();
  IVar1 = objc_stub::length(self);
  IVar2 = IVar1;
  FUN_100b3a1c0();
  if (IVar1 == 0) {
    if ((int)IVar2 != 0) {
      FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryDevice.m",
                    0xd5,&cf_ModelnamefromHW_PRODUCTwasempty_);
    }
    self = 2;
    FUN_100b332e0(2);
  }
  else if ((int)IVar2 != 0) {
    FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryDevice.m",0xd2,
                  &cf_ModelnameusingHW_PRODUCT___);
  }
  return self;
}



/* Address: 0x100b33900 | FUN_100b33900 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID FUN_100b33900(void)

{
  ID IVar1;
  
  IVar1 = objc_stub::processInfo((ID)&_OBJC_CLASS___NSProcessInfo);
  IVar1 = objc_stub::environment(IVar1);
  IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_SIMULATOR_MODEL_IDENTIFIER);
  return IVar1;
}



/* Address: 0x100b33974 | FUN_100b33974 */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

cfstringStruct * FUN_100b33974(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined **ppuVar4;
  cfstringStruct *pcVar5;
  size_t local_68;
  int local_60 [2];
  undefined1 auStack_58 [32];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ea82f0;
  local_68 = 0x20;
  local_60[0] = 1;
  local_60[1] = 0x41;
  piVar3 = ___error();
  *piVar3 = 0;
  iVar1 = _sysctl(local_60,2,auStack_58,&local_68,(void *)0x0,0);
  piVar3 = ___error();
  iVar2 = *piVar3;
  if ((iVar2 != 0) && (FUN_100b3a1f0(), (int)piVar3 != 0)) {
    ppuVar4 = &PTR___tlv_bootstrap_1010492e0;
    (*(code *)PTR___tlv_bootstrap_1010492e0)();
    iVar2 = _strerror_r(iVar2,(char *)ppuVar4,0x400);
    if (iVar2 != 0) {
      _snprintf((char *)ppuVar4,0x400,"Unknown error %d");
    }
    FUN_100b3a2b8("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryDevice.m",0xee,
                  &cf__sfailedwithcode__d_description__s);
  }
  if (iVar1 == 0) {
    pcVar5 = (cfstringStruct *)
             objc_stub::stringWithUTF8String_((ID)&_OBJC_CLASS___NSString,auStack_58);
  }
  else {
    pcVar5 = &cf___;
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_38) {
    return pcVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100b33aa8 | FUN_100b33aa8 */

undefined8 FUN_100b33aa8(void)

{
  return 0;
}



/* Address: 0x100b33ab0 | SentryTransaction::initWithTrace:children: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

ID SentryTransaction::initWithTrace_children_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID self;
  ID IVar1;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::SentryTransaction;
  local_40.receiver = param_1;
  self = _objc_msgSendSuper2(&local_40,"init");
  if (self != 0) {
    IVar1 = objc_stub::timestamp(param_3);
    objc_stub::setTimestamp_(self,IVar1);
    IVar1 = objc_stub::FUN_100c0f4e0(param_3);
    objc_stub::FUN_100c0de00(self,IVar1);
    objc_stub::FUN_100c0e440(self,param_3);
    objc_stub::FUN_100c0dca0(self,param_4);
    IVar1 = objc_stub::FUN_100c10a80((ID)&objc::class_t::_TtC6Sentry23SentryEnvelopeItemTypes);
    objc_stub::FUN_100c0e600(self,IVar1);
  }
  return self;
}



/* Address: 0x100b33bc4 | SentryTransaction::tags */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryTransaction::tags(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  objc_super local_50;
  objc_super local_40;
  
  IVar2 = objc_stub::FUN_100c108e0(param_1);
  if (IVar2 == 0) {
    local_40.super_class = &objc::class_t::SentryTransaction;
    local_40.receiver = param_1;
    IVar2 = _objc_msgSendSuper2(&local_40,"tags");
  }
  else {
    local_50.super_class = &objc::class_t::SentryTransaction;
    local_50.receiver = param_1;
    IVar3 = _objc_msgSendSuper2(&local_50,"tags");
    puVar1 = PTR____NSDictionary0___100ea9b08;
    IVar2 = *(ID *)PTR____NSDictionary0___100ea9b08;
    if (IVar3 != 0) {
      IVar2 = IVar3;
    }
    IVar3 = objc_stub::FUN_100c108e0(param_1);
    IVar4 = objc_stub::FUN_100c10160(IVar3);
    IVar3 = *(ID *)puVar1;
    if (IVar4 != 0) {
      IVar3 = IVar4;
    }
    IVar2 = objc_stub::FUN_100c01280((ID)&_OBJC_CLASS___NSMutableDictionary,IVar2);
    objc_stub::addEntriesFromDictionary_(IVar2,IVar3);
  }
  return IVar2;
}



/* Address: 0x100b33cfc | SentryTransaction::setTags: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryTransaction::setTags_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID self;
  undefined8 uVar4;
  long lVar5;
  ID IVar6;
  undefined8 local_210;
  long lStack_208;
  long *local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  objc_super local_1d0;
  undefined8 local_1c0;
  long lStack_1b8;
  long *local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  objc_super local_180;
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  IVar1 = objc_stub::FUN_100c108e0(param_1);
  if (IVar1 == 0) {
    local_180.super_class = &objc::class_t::SentryTransaction;
    local_180.receiver = param_1;
    _objc_msgSendSuper2(&local_180,"setTags:",param_3);
  }
  else {
    IVar1 = objc_stub::FUN_100c108e0(param_1);
    IVar1 = objc_stub::FUN_100c10160(IVar1);
    uStack_198 = 0;
    local_1a0 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    lStack_1b8 = 0;
    local_1c0 = 0;
    uStack_1a8 = 0;
    local_1b0 = (long *)0x0;
    IVar1 = objc_stub::FUN_100bfdac0(IVar1);
    IVar2 = objc_stub::countByEnumeratingWithState_objects_count_(IVar1,&local_1c0,auStack_f0,0x10);
    if (IVar2 != 0) {
      lVar5 = *local_1b0;
      do {
        IVar6 = 0;
        do {
          if (*local_1b0 != lVar5) {
            _objc_enumerationMutation(IVar1);
          }
          uVar4 = *(undefined8 *)(lStack_1b8 + IVar6 * 8);
          IVar3 = objc_stub::FUN_100c108e0(param_1);
          objc_stub::FUN_100c09200(IVar3,uVar4);
          IVar6 = IVar6 + 1;
        } while (IVar2 != IVar6);
        IVar2 = objc_stub::countByEnumeratingWithState_objects_count_
                          (IVar1,&local_1c0,auStack_f0,0x10);
      } while (IVar2 != 0);
    }
    local_1d0.super_class = &objc::class_t::SentryTransaction;
    local_1d0.receiver = param_1;
    _objc_msgSendSuper2(&local_1d0,"setTags:",0);
    if (param_3 != 0) {
      uStack_1e8 = 0;
      local_1f0 = 0;
      uStack_1d8 = 0;
      uStack_1e0 = 0;
      lStack_208 = 0;
      local_210 = 0;
      uStack_1f8 = 0;
      local_200 = (long *)0x0;
      IVar1 = objc_stub::FUN_100bfdac0(param_3);
      IVar2 = objc_stub::countByEnumeratingWithState_objects_count_
                        (IVar1,&local_210,auStack_170,0x10);
      if (IVar2 != 0) {
        lVar5 = *local_200;
        do {
          IVar6 = 0;
          do {
            if (*local_200 != lVar5) {
              _objc_enumerationMutation(IVar1);
            }
            uVar4 = *(undefined8 *)(lStack_208 + IVar6 * 8);
            IVar3 = objc_stub::objectForKeyedSubscript_(param_3,uVar4);
            if (IVar3 != 0) {
              self = objc_stub::FUN_100c108e0(param_1);
              objc_stub::setTagValue_forKey_(self,IVar3,uVar4);
            }
            IVar6 = IVar6 + 1;
          } while (IVar2 != IVar6);
          IVar2 = objc_stub::countByEnumeratingWithState_objects_count_
                            (IVar1,&local_210,auStack_170,0x10);
        } while (IVar2 != 0);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}



/* Address: 0x100b33fb0 | SentryTransaction::serialize */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryTransaction::serialize(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  long lVar7;
  ID IVar8;
  undefined8 uVar9;
  undefined8 local_210;
  long lStack_208;
  long *local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  long lStack_1c8;
  long *local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  objc_super local_190;
  cfstringStruct *local_180;
  ID local_178;
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  puVar1 = &_OBJC_CLASS___NSMutableDictionary;
  _objc_alloc();
  local_190.super_class = &objc::class_t::SentryTransaction;
  local_190.receiver = param_1;
  IVar2 = _objc_msgSendSuper2(&local_190,"serialize");
  IVar2 = objc_stub::initWithDictionary_((ID)puVar1,IVar2);
  puVar1 = &_OBJC_CLASS___NSMutableArray;
  _objc_alloc();
  IVar3 = objc_stub::init((ID)puVar1);
  lStack_1c8 = 0;
  local_1d0 = 0;
  uStack_1b8 = 0;
  local_1c0 = (long *)0x0;
  uStack_1a8 = 0;
  local_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  IVar4 = objc_stub::FUN_100c0f0a0(param_1);
  IVar5 = objc_stub::countByEnumeratingWithState_objects_count_(IVar4,&local_1d0,auStack_f0,0x10);
  if (IVar5 != 0) {
    lVar7 = *local_1c0;
    do {
      IVar8 = 0;
      do {
        if (*local_1c0 != lVar7) {
          _objc_enumerationMutation(IVar4);
        }
        IVar6 = objc_stub::serialize(*(ID *)(lStack_1c8 + IVar8 * 8));
        objc_stub::addObject_(IVar3,IVar6);
        IVar8 = IVar8 + 1;
      } while (IVar5 != IVar8);
      IVar5 = objc_stub::countByEnumeratingWithState_objects_count_
                        (IVar4,&local_1d0,auStack_f0,0x10);
    } while (IVar5 != 0);
  }
  objc_stub::setObject_forKeyedSubscript_(IVar2,IVar3,&cf_spans);
  puVar1 = &_OBJC_CLASS___NSMutableDictionary;
  _objc_alloc();
  IVar3 = objc_stub::init((ID)puVar1);
  IVar4 = objc_stub::objectForKeyedSubscript_(IVar2,&cf_contexts);
  if (IVar4 != 0) {
    IVar4 = objc_stub::objectForKeyedSubscript_(IVar2,&cf_contexts);
    IVar5 = objc_stub::class((ID)&_OBJC_CLASS___NSDictionary);
    IVar4 = objc_stub::isKindOfClass_(IVar4,IVar5);
    if ((int)IVar4 != 0) {
      IVar4 = objc_stub::objectForKeyedSubscript_(IVar2,&cf_contexts);
      objc_stub::addEntriesFromDictionary_(IVar3,IVar4);
    }
  }
  IVar4 = objc_stub::dictionary((ID)&_OBJC_CLASS___NSMutableDictionary);
  IVar5 = objc_stub::FUN_100c108e0(param_1);
  IVar5 = objc_stub::FUN_100c08380(IVar5);
  objc_stub::setObject_forKeyedSubscript_(IVar4,IVar5,&cf_profiler_id);
  objc_stub::setObject_forKeyedSubscript_(IVar3,IVar4,&cf_profile);
  IVar4 = objc_stub::FUN_100c108e0(param_1);
  IVar4 = objc_stub::serialize(IVar4);
  objc_stub::setObject_forKeyedSubscript_(IVar3,IVar4,&cf_trace);
  objc_stub::setValue_forKey_(IVar2,IVar3,&cf_contexts);
  IVar3 = objc_stub::FUN_100c108e0(param_1);
  IVar3 = objc_stub::FUN_100c10160(IVar3);
  FUN_100bcfb78();
  IVar3 = objc_stub::mutableCopy(IVar3);
  IVar4 = objc_stub::objectForKeyedSubscript_(IVar2,&cf_tags);
  if (IVar4 == 0) {
LAB_100b343c8:
    objc_stub::setObject_forKeyedSubscript_(IVar2,IVar3,&cf_tags);
  }
  else {
    IVar4 = objc_stub::objectForKeyedSubscript_(IVar2,&cf_tags);
    IVar5 = objc_stub::class((ID)&_OBJC_CLASS___NSDictionary);
    IVar4 = objc_stub::isKindOfClass_(IVar4,IVar5);
    if ((int)IVar4 == 0) goto LAB_100b343c8;
    puVar1 = &_OBJC_CLASS___NSMutableDictionary;
    _objc_alloc();
    IVar4 = objc_stub::init((ID)puVar1);
    IVar5 = objc_stub::objectForKeyedSubscript_(IVar2,&cf_tags);
    objc_stub::addEntriesFromDictionary_(IVar4,IVar5);
    objc_stub::addEntriesFromDictionary_(IVar4,IVar3);
    objc_stub::setObject_forKeyedSubscript_(IVar2,IVar4,&cf_tags);
  }
  IVar3 = objc_stub::FUN_100c108e0(param_1);
  IVar3 = objc_stub::data(IVar3);
  FUN_100bcfb78();
  IVar4 = objc_stub::objectForKeyedSubscript_(IVar2,&cf_extra);
  if (IVar4 != 0) {
    IVar4 = objc_stub::objectForKeyedSubscript_(IVar2,&cf_extra);
    IVar5 = objc_stub::class((ID)&_OBJC_CLASS___NSDictionary);
    IVar4 = objc_stub::isKindOfClass_(IVar4,IVar5);
    if ((int)IVar4 != 0) {
      puVar1 = &_OBJC_CLASS___NSMutableDictionary;
      _objc_alloc();
      IVar4 = objc_stub::init((ID)puVar1);
      IVar5 = objc_stub::objectForKeyedSubscript_(IVar2,&cf_extra);
      objc_stub::addEntriesFromDictionary_(IVar4,IVar5);
      objc_stub::addEntriesFromDictionary_(IVar4,IVar3);
      objc_stub::setObject_forKeyedSubscript_(IVar2,IVar4,&cf_extra);
      goto LAB_100b3450c;
    }
  }
  objc_stub::setObject_forKeyedSubscript_(IVar2,IVar3,&cf_extra);
LAB_100b3450c:
  IVar3 = objc_stub::FUN_100c108e0(param_1);
  IVar3 = objc_stub::FUN_100c06ba0(IVar3);
  IVar3 = objc_stub::count(IVar3);
  if (IVar3 != 0) {
    IVar3 = objc_stub::dictionary((ID)&_OBJC_CLASS___NSMutableDictionary);
    lStack_208 = 0;
    local_210 = 0;
    uStack_1f8 = 0;
    local_200 = (long *)0x0;
    uStack_1e8 = 0;
    local_1f0 = 0;
    uStack_1d8 = 0;
    uStack_1e0 = 0;
    IVar4 = objc_stub::FUN_100c108e0(param_1);
    IVar4 = objc_stub::FUN_100c06ba0(IVar4);
    IVar4 = objc_stub::FUN_100bfdac0(IVar4);
    IVar5 = objc_stub::countByEnumeratingWithState_objects_count_(IVar4,&local_210,auStack_170,0x10)
    ;
    if (IVar5 != 0) {
      lVar7 = *local_200;
      do {
        IVar8 = 0;
        do {
          if (*local_200 != lVar7) {
            _objc_enumerationMutation(IVar4);
          }
          uVar9 = *(undefined8 *)(lStack_208 + IVar8 * 8);
          IVar6 = objc_stub::FUN_100c108e0(param_1);
          IVar6 = objc_stub::FUN_100c06ba0(IVar6);
          IVar6 = objc_stub::objectForKeyedSubscript_(IVar6,uVar9);
          IVar6 = objc_stub::serialize(IVar6);
          objc_stub::setObject_forKeyedSubscript_(IVar3,IVar6,uVar9);
          IVar8 = IVar8 + 1;
        } while (IVar5 != IVar8);
        IVar5 = objc_stub::countByEnumeratingWithState_objects_count_
                          (IVar4,&local_210,auStack_170,0x10);
      } while (IVar5 != 0);
    }
    objc_stub::setObject_forKeyedSubscript_(IVar2,IVar3,&cf_measurements);
  }
  IVar3 = objc_stub::FUN_100c108e0(param_1);
  if (IVar3 != 0) {
    IVar3 = objc_stub::FUN_100c108e0(param_1);
    IVar3 = objc_stub::FUN_100c10ac0(IVar3);
    IVar3 = objc_stub::name(IVar3);
    objc_stub::setObject_forKeyedSubscript_(IVar2,IVar3,&cf_transaction);
    local_180 = &cf_source;
    IVar3 = objc_stub::FUN_100c108e0(param_1);
    IVar3 = objc_stub::FUN_100c10ac0(IVar3);
    IVar3 = objc_stub::FUN_100c070e0(IVar3);
    local_178 = objc_stub::FUN_100c0f9e0(param_1,IVar3);
    IVar3 = objc_stub::FUN_100c012c0((ID)&_OBJC_CLASS___NSDictionary,&local_178,&local_180,1);
    objc_stub::setObject_forKeyedSubscript_(IVar2,IVar3,&cf_transaction_info);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_70) {
    return IVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}



/* Address: 0x100b34880 | SentryTransaction::stringForNameSource: */

/* Function Stack Size: 0x18 bytes */

ID SentryTransaction::stringForNameSource_(ID param_1,SEL param_2,long_long param_3)

{
  if (param_3 - 1 < 5) {
    return (ID)(&PTR_cf_url_100f34a20)[param_3 - 1];
  }
  return 0x100f41b28;
}



/* Address: 0x100b348a8 | SentryTransaction::trace */

/* Function Stack Size: 0x10 bytes */

void SentryTransaction::trace(uint param_1)

{
  return;
}



/* Address: 0x100b348b8 | SentryTransaction::setTrace: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryTransaction::setTrace_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_trace) = param_3;
  return;
}



/* Address: 0x100b348cc | SentryTransaction::viewNames */

/* Function Stack Size: 0x10 bytes */

ID SentryTransaction::viewNames(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_viewNames);
}



/* Address: 0x100b348dc | SentryTransaction::setViewNames: */

/* WARNING: Function: _objc_setProperty_nonatomic_copy replaced with injection:
   _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryTransaction::setViewNames_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_viewNames) = param_3;
  return;
}



/* Address: 0x100b348e8 | SentryTransaction::spans */

/* Function Stack Size: 0x10 bytes */

ID SentryTransaction::spans(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_spans);
}



/* Address: 0x100b348f8 | SentryTransaction::setSpans: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryTransaction::setSpans_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_spans) = param_3;
  return;
}



/* Address: 0x100b3490c | SentryTransaction::.cxx_destruct */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryTransaction::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_spans) = 0;
  *(undefined8 *)(param_1 + (long)_viewNames) = 0;
  *(undefined8 *)(param_1 + (long)_trace) = 0;
  return;
}



/* Address: 0x100b34960 | SentryMechanismContext::init */

/* Function Stack Size: 0x10 bytes */

ID SentryMechanismContext::init(ID param_1,SEL param_2)

{
  ID IVar1;
  objc_super local_20;
  
  local_20.super_class = &objc::class_t::SentryMechanismContext;
  local_20.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_20,"init");
  return IVar1;
}



/* Address: 0x100b34994 | SentryMechanismContext::serialize */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryMechanismContext::serialize(ID param_1,SEL param_2)

{
  undefined *self;
  ID self_00;
  ID IVar1;
  
  self = &_OBJC_CLASS___NSMutableDictionary;
  _objc_alloc();
  self_00 = objc_stub::init((ID)self);
  IVar1 = objc_stub::FUN_100c0ed60(param_1);
  FUN_100bcfb78(IVar1);
  objc_stub::setObject_forKeyedSubscript_(self_00,IVar1,&cf_signal);
  IVar1 = objc_stub::FUN_100c06720(param_1);
  FUN_100bcfb78(IVar1);
  objc_stub::setObject_forKeyedSubscript_(self_00,IVar1,&cf_mach_exception);
  IVar1 = objc_stub::FUN_100c01e20(param_1);
  IVar1 = objc_stub::serialize(IVar1);
  objc_stub::setObject_forKeyedSubscript_(self_00,IVar1,&cf_ns_error);
  return self_00;
}



/* Address: 0x100b34aa8 | SentryMechanismContext::signal */

/* Function Stack Size: 0x10 bytes */

void SentryMechanismContext::signal(int param_1)

{
  return;
}



/* Address: 0x100b34ab0 | SentryMechanismContext::setSignal: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryMechanismContext::setSignal_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 8) = param_3;
  return;
}



/* Address: 0x100b34abc | SentryMechanismContext::machException */

/* Function Stack Size: 0x10 bytes */

ID SentryMechanismContext::machException(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x10);
}



/* Address: 0x100b34ac4 | SentryMechanismContext::setMachException: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryMechanismContext::setMachException_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x10) = param_3;
  return;
}



/* Address: 0x100b34ad0 | SentryMechanismContext::error */

/* Function Stack Size: 0x10 bytes */

ID SentryMechanismContext::error(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x18);
}



/* Address: 0x100b34ad8 | SentryMechanismContext::setError: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryMechanismContext::setError_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x18) = param_3;
  return;
}



/* Address: 0x100b34ae4 | SentryMechanismContext::.cxx_destruct */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryMechanismContext::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



/* Address: 0x100b34b20 | SentryTraceHeader::initWithTraceId:spanId:sampled: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x28 bytes */

ID SentryTraceHeader::initWithTraceId_spanId_sampled_
             (ID param_1,SEL param_2,ID param_3,ID param_4,unsigned_long_long param_5)

{
  ID IVar1;
  objc_super local_50;
  
  local_50.super_class = &objc::class_t::SentryTraceHeader;
  local_50.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_50,"init");
  if (IVar1 != 0) {
    *(ID *)(IVar1 + 8) = param_3;
    *(ID *)(IVar1 + 0x10) = param_4;
    *(unsigned_long_long *)(IVar1 + 0x18) = param_5;
  }
  return IVar1;
}



/* Address: 0x100b34bcc | SentryTraceHeader::value */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryTraceHeader::value(ID param_1,SEL param_2)

{
  ID IVar1;
  cfstringStruct *pcVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x18);
  objc_stub::FUN_100c0a000(*(ID *)(param_1 + 8));
  objc_stub::FUN_100c0a0a0(*(ID *)(param_1 + 0x10));
  if (lVar3 == 0) {
    pcVar2 = &cf______;
  }
  else {
    pcVar2 = &cf________i;
  }
  IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,pcVar2);
  return IVar1;
}



/* Address: 0x100b34c8c | SentryTraceHeader::traceId */

/* Function Stack Size: 0x10 bytes */

ID SentryTraceHeader::traceId(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 8);
}



/* Address: 0x100b34c94 | SentryTraceHeader::spanId */

/* Function Stack Size: 0x10 bytes */

ID SentryTraceHeader::spanId(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x10);
}



/* Address: 0x100b34c9c | SentryTraceHeader::sampled */

/* Function Stack Size: 0x10 bytes */

unsigned_long_long SentryTraceHeader::sampled(ID param_1,SEL param_2)

{
  return *(unsigned_long_long *)(param_1 + 0x18);
}



/* Address: 0x100b34ca4 | SentryTraceHeader::.cxx_destruct */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryTraceHeader::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



/* Address: 0x100b34cd4 | FUN_100b34cd4 */

void FUN_100b34cd4(char *param_1)

{
  uchar local_38 [16];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100ea82f0;
  _uuid_generate(local_38);
  _snprintf(param_1,0x25,"%02X%02X%02X%02X-%02X%02X-%02X%02X-%02X%02X-%02X%02X%02X%02X%02X%02X");
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100b34da0 | SentryHttpTransport::initWithDsn:sendClientReports:cachedEnvelopeSendDelay:dateProvider:fileManager:requestManager:requestBuilder:rateLimits:envelopeRateLimit:dispatchQueueWrapper:reachability: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x64 bytes */

ID SentryHttpTransport::
   initWithDsn_sendClientReports_cachedEnvelopeSendDelay_dateProvider_fileManager_requestManager_requestBuilder_rateLimits_envelopeRateLimit_dispatchQueueWrapper_reachability_
             (ID param_1,SEL param_2,ID param_3,bool param_4,double param_5,ID param_6,ID param_7,
             ID param_8,ID param_9,ID param_10,ID param_11,ID param_12,ID param_13)

{
  ID self;
  dispatch_group_t pdVar1;
  undefined *puVar2;
  ID IVar3;
  undefined *local_b0;
  undefined8 local_a8;
  code *local_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  objc_super local_80;
  
  local_80.super_class = &objc::class_t::SentryHttpTransport;
  local_80.receiver = param_1;
  self = _objc_msgSendSuper2(&local_80,"init");
  if (self != 0) {
    objc_stub::FUN_100c0b760(self,param_3);
    objc_stub::FUN_100c0d920(self,param_4);
    *(double *)(self + 0x10) = param_5;
    objc_stub::FUN_100c0d700(self,param_8);
    objc_stub::FUN_100c0d6c0(self,param_9);
    objc_stub::FUN_100c0bc00(self,param_7);
    objc_stub::FUN_100c0d480(self,param_10);
    objc_stub::FUN_100c0b8c0(self,param_11);
    objc_stub::FUN_100c0b5e0(self,param_12);
    objc_stub::FUN_100c0b3e0(self,param_6);
    pdVar1 = _dispatch_group_create();
    objc_stub::FUN_100c0b5c0(self,pdVar1);
    objc_stub::FUN_100c0d580(self,param_13);
    *(undefined2 *)(self + 9) = 0;
    puVar2 = &_OBJC_CLASS___NSMutableDictionary;
    _objc_alloc();
    IVar3 = objc_stub::init((ID)puVar2);
    objc_stub::FUN_100c0b5a0(self,IVar3);
    puVar2 = &_OBJC_CLASS___NSMutableArray;
    _objc_alloc();
    IVar3 = objc_stub::init((ID)puVar2);
    objc_stub::FUN_100c0cd20(self,IVar3);
    IVar3 = objc_stub::FUN_100c01d60(self);
    objc_stub::setDelegate_(IVar3,self);
    _objc_initWeak(auStack_88,self);
    IVar3 = objc_stub::fileManager(self);
    local_b0 = PTR___NSConcreteStackBlock_100ea82a0;
    local_a8 = 0xc2000000;
    local_a0 = FUN_100b350d8;
    puStack_98 = &DAT_100f34a48;
    _objc_copyWeak(auStack_90,auStack_88);
    objc_stub::FUN_100c0b8a0(IVar3,&local_b0);
    objc_stub::sendAllCachedEnvelopes(self);
    IVar3 = objc_stub::FUN_100c08800(self);
    objc_stub::FUN_100bfd760(IVar3,self);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_88);
  }
  return self;
}



/* Address: 0x100b350d8 | FUN_100b350d8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_loadWeakRetained replaced with injection: _objc_load_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b350d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  objc_stub::envelopeItemDeleted_withCategory_(*(ID *)(param_1 + 0x20),param_2,param_3);
  return 0;
}



/* Address: 0x100b35130 | SentryHttpTransport::connectivityChanged:typeDescription: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x1c bytes */

void SentryHttpTransport::connectivityChanged_typeDescription_
               (ID param_1,SEL param_2,bool param_3,ID param_4)

{
  int iVar1;
  
  iVar1 = (int)param_4;
  FUN_100b3a1c0();
  if (param_3 == 0) {
    if (iVar1 != 0) {
      FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryHttpTransport.m"
                    ,0x66,&cf_Lostinternetconnection_);
    }
  }
  else {
    if (iVar1 != 0) {
      FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryHttpTransport.m"
                    ,99,&cf_Internetconnectionisback_);
    }
    objc_stub::sendAllCachedEnvelopes(param_1);
  }
  return;
}



/* Address: 0x100b351b4 | SentryHttpTransport::dealloc */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryHttpTransport::dealloc(ID param_1,SEL param_2)

{
  ID self;
  objc_super local_30;
  
  self = objc_stub::FUN_100c08800(param_1);
  objc_stub::removeObserver_(self,param_1);
  local_30.super_class = &objc::class_t::SentryHttpTransport;
  local_30.receiver = param_1;
  _objc_msgSendSuper2(&local_30,"dealloc");
  return;
}



/* Address: 0x100b35214 | SentryHttpTransport::sendEnvelope: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryHttpTransport::sendEnvelope_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  ID IVar2;
  ID IVar3;
  undefined *local_68;
  undefined8 local_60;
  code *local_58;
  undefined *puStack_50;
  ID local_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  IVar2 = objc_stub::FUN_100c01d60(param_1);
  IVar2 = objc_stub::FUN_100c091c0(IVar2,param_3);
  IVar3 = objc_stub::items(IVar2);
  IVar3 = objc_stub::count(IVar3);
  iVar1 = 0;
  if (IVar3 == 0) {
    FUN_100b3a1e0();
    if (iVar1 != 0) {
      FUN_100b3a280("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryHttpTransport.m"
                    ,0x74,&cf_RateLimitisactiveforallenvelopeitems_);
    }
  }
  else {
    IVar2 = objc_stub::FUN_100bfd520(param_1,IVar2);
    _objc_initWeak(auStack_38,param_1);
    IVar3 = objc_stub::FUN_100c01440(param_1);
    local_68 = PTR___NSConcreteStackBlock_100ea82a0;
    local_60 = 0xc2000000;
    local_58 = FUN_100b353b4;
    puStack_50 = &DAT_100f34a78;
    _objc_copyWeak(auStack_40,auStack_38);
    local_48 = IVar2;
    objc_stub::dispatchAsyncWithBlock_(IVar3,&local_68);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Address: 0x100b353b4 | FUN_100b353b4 */

/* WARNING: Function: _objc_loadWeakRetained replaced with injection: _objc_load_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b353b4(long param_1)

{
  int iVar1;
  ID IVar2;
  ID self;
  
  IVar2 = objc_stub::fileManager(*(ID *)(param_1 + 0x28));
  IVar2 = objc_stub::storeEnvelope_(IVar2,*(undefined8 *)(param_1 + 0x20));
  iVar1 = 0;
  if (IVar2 == 0) {
    FUN_100b3a1c0();
    if (iVar1 != 0) {
      FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryHttpTransport.m"
                    ,0x81,&cf_Couldnotstoreenvelope_Scheduleforsending_);
    }
    IVar2 = objc_stub::notStoredEnvelopes(*(ID *)(param_1 + 0x28));
    _objc_sync_enter(IVar2);
    self = objc_stub::notStoredEnvelopes(*(ID *)(param_1 + 0x28));
    objc_stub::addObject_(self,*(undefined8 *)(param_1 + 0x20));
    _objc_sync_exit(IVar2);
  }
  objc_stub::sendAllCachedEnvelopes(*(ID *)(param_1 + 0x28));
  return 0;
}



/* Address: 0x100b354e4 | FUN_100b354e4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100b354e4(long param_1,long param_2)

{
  _objc_copyWeak(param_1 + 0x28,param_2 + 0x28);
  return;
}



/* Address: 0x100b35514 | SentryHttpTransport::storeEnvelope: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_unsafeClaimAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryHttpTransport::storeEnvelope_(ID param_1,SEL param_2,ID param_3)

{
  ID self;
  
  self = objc_stub::fileManager(param_1);
  objc_stub::storeEnvelope_(self,param_3);
  return;
}



/* Address: 0x100b3556c | SentryHttpTransport::recordLostEvent:reason: */

/* Function Stack Size: 0x20 bytes */

void SentryHttpTransport::recordLostEvent_reason_
               (ID param_1,SEL param_2,unsigned_long_long param_3,unsigned_long_long param_4)

{
  objc_stub::recordLostEvent_reason_quantity_(param_1,param_3,param_4,1);
  return;
}



/* Address: 0x100b35574 | SentryHttpTransport::recordLostEvent:reason:quantity: */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x28 bytes */

void SentryHttpTransport::recordLostEvent_reason_quantity_
               (ID param_1,SEL param_2,unsigned_long_long param_3,unsigned_long_long param_4,
               unsigned_long_long param_5)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  class_t *self;
  ID self_00;
  
  IVar1 = objc_stub::FUN_100c09e60(param_1);
  if ((int)IVar1 != 0) {
    objc_stub::FUN_100c070a0((ID)&objc::class_t::SentryDataCategoryMapper,param_3);
    FUN_100b6090c();
    IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______);
    IVar2 = objc_stub::FUN_100c01340(param_1);
    _objc_sync_enter();
    IVar3 = objc_stub::FUN_100c01340(param_1);
    IVar3 = objc_stub::objectForKeyedSubscript_(IVar3,IVar1);
    if (IVar3 != 0) {
      IVar3 = objc_stub::FUN_100c08520(IVar3);
      param_5 = IVar3 + param_5;
    }
    self = &objc::class_t::_TtC6Sentry20SentryDiscardedEvent;
    _objc_alloc();
    FUN_100b6090c(param_4);
    IVar3 = objc_stub::FUN_100c070a0((ID)&objc::class_t::SentryDataCategoryMapper,param_3);
    IVar3 = objc_stub::FUN_100c049c0((ID)self,param_4,IVar3,param_5);
    self_00 = objc_stub::FUN_100c01340(param_1);
    objc_stub::setObject_forKeyedSubscript_(self_00,IVar3,IVar1);
    _objc_sync_exit(IVar2);
    return;
  }
  return;
}



/* Address: 0x100b35770 | SentryHttpTransport::flush: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

long_long SentryHttpTransport::flush_(ID param_1,SEL param_2,double param_3)

{
  int iVar1;
  dispatch_time_t timeout;
  long_long lVar2;
  dispatch_group_t pdVar3;
  ID IVar4;
  long lVar5;
  undefined *local_58;
  undefined8 local_50;
  code *local_48;
  undefined *puStack_40;
  ID local_38;
  
  timeout = _dispatch_time(0,(long)(param_3 * 1000000000.0));
  IVar4 = param_1;
  _objc_sync_enter();
  iVar1 = (int)IVar4;
  if (*(char *)(param_1 + 10) == '\x01') {
    FUN_100b3a1c0();
    if (iVar1 != 0) {
      FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryHttpTransport.m"
                    ,0xbf,&cf_Alreadyflushing_);
    }
    _objc_sync_exit(param_1);
    lVar2 = 2;
  }
  else {
    FUN_100b3a1c0();
    if (iVar1 != 0) {
      FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryHttpTransport.m"
                    ,0xc3,&cf_Startflushing_);
    }
    *(undefined1 *)(param_1 + 10) = 1;
    pdVar3 = (dispatch_group_t)objc_stub::FUN_100c01420(param_1);
    _dispatch_group_enter(pdVar3);
    _objc_sync_exit(param_1);
    IVar4 = objc_stub::FUN_100c01440(param_1);
    local_58 = PTR___NSConcreteStackBlock_100ea82a0;
    local_50 = 0xc2000000;
    local_48 = FUN_100b3594c;
    puStack_40 = &DAT_100f341a0;
    local_38 = param_1;
    objc_stub::dispatchAsyncWithBlock_(IVar4,&local_58);
    pdVar3 = (dispatch_group_t)objc_stub::FUN_100c01420(param_1);
    lVar5 = _dispatch_group_wait(pdVar3,timeout);
    IVar4 = objc_stub::FUN_100c0f760(param_1);
    iVar1 = (int)IVar4;
    if (lVar5 == 0) {
      FUN_100b3a1c0();
      if (iVar1 != 0) {
        FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryHttpTransport.m"
                      ,0xde,&cf_Finishedflushing_);
      }
      lVar2 = 0;
    }
    else {
      FUN_100b3a1e0();
      if (iVar1 != 0) {
        FUN_100b3a280("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryHttpTransport.m"
                      ,0xe1,&cf_Flushingtimedout_);
      }
      lVar2 = 1;
    }
  }
  return lVar2;
}



/* Address: 0x100b3594c | FUN_100b3594c */

void FUN_100b3594c(long param_1)

{
  objc_stub::sendAllCachedEnvelopes(*(ID *)(param_1 + 0x20));
  return;
}



/* Address: 0x100b35954 | SentryHttpTransport::stopFlushing */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryHttpTransport::stopFlushing(ID param_1,SEL param_2)

{
  int iVar1;
  dispatch_group_t group;
  ID IVar2;
  
  IVar2 = param_1;
  _objc_sync_enter();
  iVar1 = (int)IVar2;
  if (*(char *)(param_1 + 10) == '\x01') {
    FUN_100b3a1c0();
    if (iVar1 != 0) {
      FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryHttpTransport.m"
                    ,0xea,&cf_Stopflushing_);
    }
    *(undefined1 *)(param_1 + 10) = 0;
    group = (dispatch_group_t)objc_stub::FUN_100c01420(param_1);
    _dispatch_group_leave(group);
  }
  _objc_sync_exit(param_1);
  return;
}



/* Address: 0x100b359e8 | SentryHttpTransport::envelopeItemDropped:withCategory: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void SentryHttpTransport::envelopeItemDropped_withCategory_
               (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4)

{
  ID IVar1;
  
  IVar1 = param_3;
  FUN_100b3a1e0();
  if ((int)IVar1 != 0) {
    objc_stub::FUN_100c070a0((ID)&objc::class_t::SentryDataCategoryMapper,param_4);
    FUN_100b3a280("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryHttpTransport.m"
                  ,0xf8,&cf_Envelopeitemdroppedduetoexceedingratelimit_Category___);
  }
  objc_stub::recordLostEvent_reason_(param_1,param_4,6);
  objc_stub::FUN_100c08a80(param_1,param_3,6);
  objc_stub::FUN_100c08a40(param_1,param_3,6);
  objc_stub::FUN_100c08aa0(param_1,param_3,6);
  return;
}



/* Address: 0x100b35ab0 | SentryHttpTransport::envelopeItemDeleted:withCategory: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void SentryHttpTransport::envelopeItemDeleted_withCategory_
               (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4)

{
  objc_stub::recordLostEvent_reason_(param_1,param_4,5);
  objc_stub::FUN_100c08a80(param_1,param_3,5);
  objc_stub::FUN_100c08a40(param_1,param_3,5);
  objc_stub::FUN_100c08aa0(param_1,param_3,5);
  return;
}



/* Address: 0x100b35b28 | SentryHttpTransport::addClientReportTo: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryHttpTransport::addClientReportTo_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ID self;
  class_t *pcVar3;
  undefined *self_00;
  
  IVar1 = objc_stub::FUN_100c09e60(param_1);
  if ((IVar1 & 1) != 0) {
    IVar1 = objc_stub::FUN_100c01340(param_1);
    _objc_sync_enter();
    IVar2 = objc_stub::FUN_100c01340(param_1);
    IVar2 = objc_stub::count(IVar2);
    if (IVar2 == 0) {
      _objc_sync_exit(IVar1);
    }
    else {
      IVar2 = objc_stub::FUN_100c01340(param_1);
      IVar2 = objc_stub::FUN_100bfdb20(IVar2);
      self = objc_stub::FUN_100c01340(param_1);
      objc_stub::FUN_100c08ee0(self);
      _objc_sync_exit(IVar1);
      pcVar3 = &objc::class_t::_TtC6Sentry18SentryClientReport;
      _objc_alloc();
      IVar1 = objc_stub::FUN_100c00ac0(param_1);
      IVar1 = objc_stub::FUN_100c03fc0((ID)pcVar3,IVar2,IVar1);
      pcVar3 = &objc::class_t::_TtC6Sentry18SentryEnvelopeItem;
      _objc_alloc();
      IVar1 = objc_stub::FUN_100c03cc0((ID)pcVar3,IVar1);
      self_00 = &_OBJC_CLASS___NSMutableArray;
      _objc_alloc();
      IVar2 = objc_stub::items(param_3);
      IVar2 = objc_stub::FUN_100c03ac0((ID)self_00,IVar2);
      objc_stub::addObject_(IVar2,IVar1);
      pcVar3 = &objc::class_t::_TtC6Sentry14SentryEnvelope;
      _objc_alloc();
      IVar1 = objc_stub::FUN_100c033e0(param_3);
      param_3 = objc_stub::FUN_100c042c0((ID)pcVar3,IVar1,IVar2);
    }
  }
  return param_3;
}



/* Address: 0x100b35d5c | SentryHttpTransport::sendAllCachedEnvelopes */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryHttpTransport::sendAllCachedEnvelopes(ID param_1,SEL param_2)

{
  int iVar1;
  ulong uVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  undefined8 uVar7;
  cfstringStruct *pcVar8;
  long local_58;
  
  IVar3 = param_1;
  FUN_100b3a1c0();
  if ((int)IVar3 != 0) {
    FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryHttpTransport.m"
                  ,0x12a,&cf_sendAllCachedEnvelopesstart_);
  }
  _objc_sync_enter();
  uVar2 = objc_stub::FUN_100c05c60(param_1);
  if ((int)uVar2 == 0) {
    IVar3 = objc_stub::FUN_100c09440(param_1);
    IVar3 = objc_stub::FUN_100c05c00(IVar3);
    iVar1 = 0;
    if ((IVar3 & 1) != 0) {
      objc_stub::FUN_100c0c4e0(param_1,1);
      _objc_sync_exit(param_1);
      IVar3 = objc_stub::notStoredEnvelopes(param_1);
      _objc_sync_enter();
      IVar4 = objc_stub::notStoredEnvelopes(param_1);
      IVar4 = objc_stub::count(IVar4);
      if (IVar4 == 0) {
        IVar4 = 0;
      }
      else {
        IVar4 = objc_stub::notStoredEnvelopes(param_1);
        IVar4 = objc_stub::FUN_100c07480(IVar4,0);
        IVar5 = objc_stub::notStoredEnvelopes(param_1);
        objc_stub::FUN_100c090c0(IVar5,0);
      }
      _objc_sync_exit(IVar3);
      if (IVar4 == 0) {
        IVar3 = objc_stub::fileManager(param_1);
        IVar3 = objc_stub::FUN_100c02f00(IVar3);
        iVar1 = 0;
        if (IVar3 == 0) {
          FUN_100b3a1c0();
          if (iVar1 != 0) {
            FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryHttpTransport.m"
                          ,0x145,&cf_Noenvelopeslefttosend_);
          }
          objc_stub::finishedSending(param_1);
          return;
        }
        IVar5 = objc_stub::path(IVar3);
        IVar3 = objc_stub::FUN_100bffda0(IVar3);
        IVar4 = objc_stub::FUN_100c01d80
                          ((ID)&objc::class_t::_TtC6Sentry24SentrySerializationSwift,IVar3);
        iVar1 = 0;
        if (IVar4 == 0) {
          FUN_100b3a1c0();
          if (iVar1 != 0) {
            FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryHttpTransport.m"
                          ,0x14e,&cf_Envelopecontainednodeserializabledata_);
          }
          objc_stub::deleteEnvelopeAndSendNext_(param_1,IVar5);
          return;
        }
      }
      else {
        IVar5 = 0;
      }
      IVar3 = objc_stub::FUN_100c01d60(param_1);
      IVar3 = objc_stub::FUN_100c091c0(IVar3,IVar4);
      IVar4 = objc_stub::items(IVar3);
      IVar4 = objc_stub::count(IVar4);
      iVar1 = 0;
      if (IVar4 == 0) {
        FUN_100b3a1c0();
        if (iVar1 != 0) {
          FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryHttpTransport.m"
                        ,0x156,&cf_Envelopehadnorate_limiteditems_nothingtosend_);
        }
        objc_stub::deleteEnvelopeAndSendNext_(param_1,IVar5);
      }
      else {
        IVar4 = objc_stub::FUN_100c00ac0(param_1);
        IVar4 = objc_stub::date(IVar4);
        IVar6 = objc_stub::FUN_100c033e0(IVar3);
        objc_stub::FUN_100c0d940(IVar6,IVar4);
        IVar4 = objc_stub::FUN_100c09420(param_1);
        IVar6 = objc_stub::FUN_100c01760(param_1);
        local_58 = 0;
        IVar4 = objc_stub::FUN_100c004c0(IVar4,IVar3,IVar6,&local_58);
        iVar1 = 0;
        if ((IVar4 == 0) || (local_58 != 0)) {
          if ((local_58 != 0) && (FUN_100b3a200(), iVar1 != 0)) {
            FUN_100b3a2f0("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryHttpTransport.m"
                          ,0x165,&cf_Failedtobuildrequesttosendenvelope____);
          }
          IVar3 = objc_stub::items(IVar3);
          objc_stub::recordLostEventFor_(param_1,IVar3);
          objc_stub::deleteEnvelopeAndSendNext_(param_1,IVar5);
        }
        else {
          objc_stub::FUN_100c09ec0(param_1,IVar3,IVar5,IVar4);
        }
      }
      return;
    }
    FUN_100b3a1c0();
    if (iVar1 == 0) goto LAB_100b35ecc;
    pcVar8 = &cf_Requestmanagernotready_;
    uVar7 = 0x132;
  }
  else {
    FUN_100b3a1c0();
    if ((uVar2 & 1) == 0) goto LAB_100b35ecc;
    pcVar8 = &cf_Alreadysending_;
    uVar7 = 0x12e;
  }
  FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryHttpTransport.m",
                uVar7,pcVar8);
LAB_100b35ecc:
  _objc_sync_exit(param_1);
  return;
}



/* Address: 0x100b3622c | SentryHttpTransport::deleteEnvelopeAndSendNext: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryHttpTransport::deleteEnvelopeAndSendNext_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined *local_70;
  undefined8 local_68;
  code *local_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  IVar1 = param_3;
  FUN_100b3a1c0();
  if ((int)IVar1 != 0) {
    FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryHttpTransport.m"
                  ,0x171,&cf_Deletingenvelopeandsendingnext_);
  }
  if (param_3 != 0) {
    IVar1 = objc_stub::fileManager(param_1);
    objc_stub::FUN_100c08fc0(IVar1,param_3);
  }
  _objc_sync_enter();
  objc_stub::FUN_100c0c4e0(param_1,0);
  _objc_sync_exit(param_1);
  _objc_initWeak(auStack_48,param_1);
  local_70 = PTR___NSConcreteStackBlock_100ea82a0;
  local_68 = 0xc2000000;
  local_60 = FUN_100b363b0;
  puStack_58 = &DAT_100f34938;
  _objc_copyWeak(auStack_50,auStack_48);
  IVar1 = objc_stub::FUN_100c01440(param_1);
  objc_stub::FUN_100bfec00(param_1);
  objc_stub::FUN_100c01360(IVar1,&local_70);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Address: 0x100b363b0 | FUN_100b363b0 */

/* WARNING: Function: _objc_loadWeakRetained replaced with injection: _objc_load_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b363b0(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    objc_stub::sendAllCachedEnvelopes(*(ID *)(param_1 + 0x20));
    return 0;
  }
  return 0;
}



/* Address: 0x100b36400 | SentryHttpTransport::sendEnvelope:envelopePath:request: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x28 bytes */

void SentryHttpTransport::sendEnvelope_envelopePath_request_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  ID self;
  undefined *local_88;
  undefined8 local_80;
  code *local_78;
  undefined *puStack_70;
  ID local_68;
  ID local_60;
  ID local_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  self = objc_stub::FUN_100c09440(param_1);
  local_88 = PTR___NSConcreteStackBlock_100ea82a0;
  local_80 = 0xc2000000;
  local_78 = FUN_100b36568;
  puStack_70 = &DAT_100f34aa8;
  _objc_copyWeak(auStack_50,auStack_48);
  local_68 = param_3;
  local_60 = param_5;
  local_58 = param_4;
  objc_stub::FUN_100bfd880(self,param_5,&local_88);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Address: 0x100b36568 | FUN_100b36568 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_loadWeakRetained replaced with injection: _objc_load_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

undefined8 FUN_100b36568(long param_1,ID param_2,long param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  ID IVar4;
  ID IVar5;
  
  iVar3 = 0;
  if (*(long *)(param_1 + 0x38) == 0) {
    FUN_100b3a1c0();
    if (iVar3 != 0) {
      FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryHttpTransport.m"
                    ,0x18c,&cf_WeakSelfisnil_Notdoinganything_);
    }
  }
  else if (param_2 == 0) {
    FUN_100b3a1c0();
    if (iVar3 != 0) {
      FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryHttpTransport.m"
                    ,0x196,&
                           cf_Responseisnil_Stoppingsendingandnotdeletingenvelope_Willretrysendingenvelopelater_
                   );
    }
    objc_stub::finishedSending(*(ID *)(param_1 + 0x38));
  }
  else {
    if ((param_3 != 0) && (FUN_100b3a1c0(), iVar3 != 0)) {
      FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryHttpTransport.m"
                    ,0x1a2,&
                           cf_Responseisnotnil_WeonlycareabouttheresponseandassumetheenvelopearrivedatSentry_Ignoringtheerror___
                   );
    }
    IVar4 = objc_stub::rateLimits(*(ID *)(param_1 + 0x38));
    objc_stub::update_(IVar4,param_2);
    iVar3 = 0;
    FUN_100b3a1c0();
    if (iVar3 != 0) {
      objc_stub::statusCode(param_2);
      FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryHttpTransport.m"
                    ,0x1a7,&cf_Receivedresponsestatuscode__li);
    }
    IVar4 = objc_stub::statusCode(param_2);
    objc_stub::logHttpResponseErrorWithStatusCode_envelope_request_
              ((ID)&objc::class_t::SentryHttpTransportHttpStatusCodeLogger,IVar4,
               *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
    IVar4 = objc_stub::statusCode(param_2);
    if ((long)IVar4 < 200) {
      bVar1 = false;
    }
    else {
      IVar4 = objc_stub::statusCode(param_2);
      bVar1 = (long)IVar4 < 300;
    }
    IVar4 = objc_stub::statusCode(param_2);
    IVar5 = objc_stub::statusCode(param_2);
    if ((long)IVar4 < 400) {
      bVar2 = false;
    }
    else {
      bVar2 = (long)IVar5 < 600;
      IVar4 = objc_stub::statusCode(param_2);
      if (((long)IVar5 < 600) && (IVar4 != 0x1ad)) {
        IVar4 = *(ID *)(param_1 + 0x38);
        IVar5 = objc_stub::items(*(ID *)(param_1 + 0x20));
        objc_stub::recordLostEventFor_(IVar4,IVar5);
        bVar2 = true;
      }
    }
    if (bVar1 || bVar2) {
      objc_stub::deleteEnvelopeAndSendNext_(*(ID *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x30))
      ;
    }
    else {
      objc_stub::finishedSending(*(ID *)(param_1 + 0x38));
    }
  }
  return 0;
}



/* Address: 0x100b367c8 | SentryHttpTransport::finishedSending */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryHttpTransport::finishedSending(ID param_1,SEL param_2)

{
  _objc_sync_enter();
  objc_stub::FUN_100c0c4e0(param_1,0);
  objc_stub::FUN_100c0f760(param_1);
  _objc_sync_exit(param_1);
  return;
}



/* Address: 0x100b36820 | SentryHttpTransport::recordLostEventFor: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryHttpTransport::recordLostEventFor_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID self;
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
  lStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (long *)0x0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  IVar1 = objc_stub::countByEnumeratingWithState_objects_count_(param_3,&local_130,auStack_f0,0x10);
  if (IVar1 != 0) {
    lVar4 = *local_120;
    do {
      IVar5 = 0;
      do {
        if (*local_120 != lVar4) {
          _objc_enumerationMutation(param_3);
        }
        self = *(ID *)(lStack_128 + IVar5 * 8);
        IVar2 = objc_stub::type(self);
        IVar3 = objc_stub::FUN_100bff4a0((ID)&objc::class_t::_TtC6Sentry23SentryEnvelopeItemTypes);
        IVar3 = objc_stub::isEqualToString_(IVar2,IVar3);
        if ((IVar3 & 1) == 0) {
          IVar2 = objc_stub::FUN_100bff0e0((ID)&objc::class_t::SentryDataCategoryMapper,IVar2);
          objc_stub::recordLostEvent_reason_(param_1,IVar2,8);
          objc_stub::FUN_100c08a80(param_1,self,8);
          objc_stub::FUN_100c08a40(param_1,self,8);
          objc_stub::FUN_100c08aa0(param_1,self,8);
        }
        IVar5 = IVar5 + 1;
      } while (IVar1 != IVar5);
      IVar1 = objc_stub::countByEnumeratingWithState_objects_count_
                        (param_3,&local_130,auStack_f0,0x10);
    } while (IVar1 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}


