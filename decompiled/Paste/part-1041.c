/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100b3a0a8 | FUN_100b3a0a8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

undefined8
FUN_100b3a0a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  ID IVar1;
  undefined *self;
  
  self = &_OBJC_CLASS___NSString;
  _objc_alloc();
  objc_stub::FUN_100c04240((ID)self,param_4,param_5);
  IVar1 = objc_stub::stringWithUTF8String_((ID)&_OBJC_CLASS___NSString,param_2);
  IVar1 = objc_stub::lastPathComponent(IVar1);
  objc_stub::FUN_100c0f960(IVar1);
  IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
  objc_stub::FUN_100c06660((ID)&objc::class_t::_TtC6Sentry12SentrySDKLog,IVar1,param_1);
  return 0;
}



/* Address: 0x100b3a1c0 | FUN_100b3a1c0 */

void FUN_100b3a1c0(void)

{
  objc_stub::FUN_100c114e0((ID)&objc::class_t::_TtC6Sentry12SentrySDKLog,1);
  return;
}



/* Address: 0x100b3a1d0 | FUN_100b3a1d0 */

void FUN_100b3a1d0(void)

{
  objc_stub::FUN_100c114e0((ID)&objc::class_t::_TtC6Sentry12SentrySDKLog,2);
  return;
}



/* Address: 0x100b3a1e0 | FUN_100b3a1e0 */

void FUN_100b3a1e0(void)

{
  objc_stub::FUN_100c114e0((ID)&objc::class_t::_TtC6Sentry12SentrySDKLog,3);
  return;
}



/* Address: 0x100b3a1f0 | FUN_100b3a1f0 */

void FUN_100b3a1f0(void)

{
  objc_stub::FUN_100c114e0((ID)&objc::class_t::_TtC6Sentry12SentrySDKLog,4);
  return;
}



/* Address: 0x100b3a200 | FUN_100b3a200 */

void FUN_100b3a200(void)

{
  objc_stub::FUN_100c114e0((ID)&objc::class_t::_TtC6Sentry12SentrySDKLog,5);
  return;
}



/* Address: 0x100b3a210 | FUN_100b3a210 */

void FUN_100b3a210(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_100b3a0a8(1,param_1,param_2,param_3,&stack0x00000000);
  return;
}



/* Address: 0x100b3a248 | FUN_100b3a248 */

void FUN_100b3a248(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_100b3a0a8(2,param_1,param_2,param_3,&stack0x00000000);
  return;
}



/* Address: 0x100b3a280 | FUN_100b3a280 */

void FUN_100b3a280(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_100b3a0a8(3,param_1,param_2,param_3,&stack0x00000000);
  return;
}



/* Address: 0x100b3a2b8 | FUN_100b3a2b8 */

void FUN_100b3a2b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_100b3a0a8(4,param_1,param_2,param_3,&stack0x00000000);
  return;
}



/* Address: 0x100b3a2f0 | FUN_100b3a2f0 */

void FUN_100b3a2f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_100b3a0a8(5,param_1,param_2,param_3,&stack0x00000000);
  return;
}



/* Address: 0x100b3a328 | SentryCrashReportConverter::initWithReport:inAppLogic: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

ID SentryCrashReportConverter::initWithReport_inAppLogic_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  ID self;
  ID IVar2;
  undefined *self_00;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  objc_super local_70;
  
  local_70.super_class = &objc::class_t::SentryCrashReportConverter;
  local_70.receiver = param_1;
  self = _objc_msgSendSuper2(&local_70,"init");
  if (self != 0) {
    objc_stub::FUN_100c0d660(self,param_3);
    objc_stub::FUN_100c0c2a0(self,param_4);
    IVar2 = objc_stub::objectForKeyedSubscript_(param_3,&cf_user);
    puVar1 = PTR____NSDictionary0___100ea9b08;
    if (IVar2 == 0) {
      IVar2 = *(ID *)PTR____NSDictionary0___100ea9b08;
    }
    self_00 = &_OBJC_CLASS___NSMutableDictionary;
    _objc_alloc();
    IVar3 = objc_stub::initWithDictionary_((ID)self_00,IVar2);
    IVar4 = objc_stub::objectForKeyedSubscript_(param_3,&cf_sentry_sdk_scope);
    IVar2 = *(ID *)puVar1;
    if (IVar4 != 0) {
      IVar2 = IVar4;
    }
    objc_stub::addEntriesFromDictionary_(IVar3,IVar2);
    objc_stub::removeObjectForKey_(IVar3,&cf_sentry_sdk_scope);
    objc_stub::FUN_100c0e700(self,IVar3);
    IVar2 = objc_stub::objectForKeyedSubscript_(param_3,&cf_recrash_report);
    IVar3 = objc_stub::class((ID)&_OBJC_CLASS___NSDictionary);
    IVar3 = objc_stub::isKindOfClass_(IVar2,IVar3);
    if ((int)IVar3 == 0) {
      IVar2 = 0;
    }
    IVar4 = objc_stub::objectForKeyedSubscript_(IVar2,&cf_crash);
    IVar3 = param_3;
    if (IVar4 != 0) {
      IVar3 = IVar2;
    }
    IVar4 = objc_stub::objectForKeyedSubscript_(IVar3,&cf_crash);
    IVar5 = objc_stub::objectForKeyedSubscript_(IVar2,&cf_binary_images);
    IVar3 = param_3;
    if (IVar5 != 0) {
      IVar3 = IVar2;
    }
    IVar2 = objc_stub::objectForKeyedSubscript_(IVar3,&cf_binary_images);
    objc_stub::FUN_100c0aac0(self,IVar2);
    IVar2 = objc_stub::objectForKeyedSubscript_(IVar4,&cf_diagnosis);
    objc_stub::FUN_100c0b540(self,IVar2);
    IVar2 = objc_stub::objectForKeyedSubscript_(IVar4,&cf_error);
    objc_stub::FUN_100c0ba00(self,IVar2);
    IVar2 = objc_stub::objectForKeyedSubscript_(IVar4,&cf_threads);
    objc_stub::FUN_100c039e0(self,IVar2);
    IVar2 = objc_stub::objectForKeyedSubscript_(param_3,&cf_system);
    objc_stub::FUN_100c0dfa0(self,IVar2);
    IVar2 = objc_stub::FUN_100c0ff40(self);
    IVar2 = objc_stub::objectForKeyedSubscript_(IVar2,&cf_application_stats);
    if (IVar2 != 0) {
      IVar2 = objc_stub::FUN_100c0ff40(self);
      IVar2 = objc_stub::objectForKeyedSubscript_(IVar2,&cf_application_stats);
      objc_stub::FUN_100c0a720(self,IVar2);
    }
  }
  return self;
}



/* Address: 0x100b3a6b8 | SentryCrashReportConverter::initThreads: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryCrashReportConverter::initThreads_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ulong uVar2;
  
  if (param_3 != 0) {
    IVar1 = objc_stub::class((ID)&_OBJC_CLASS___NSArray);
    IVar1 = objc_stub::isKindOfClass_(param_3,IVar1);
    if ((int)IVar1 != 0) {
      IVar1 = objc_stub::FUN_100c07fa0
                        ((ID)&_OBJC_CLASS___NSPredicate,&PTR___NSConcreteGlobalBlock_100f34ba8);
      IVar1 = objc_stub::FUN_100c025a0(param_3,IVar1);
      objc_stub::FUN_100c0e240(param_1,IVar1);
      IVar1 = objc_stub::threads(param_1);
      IVar1 = objc_stub::count(IVar1);
      if (IVar1 != 0) {
        uVar2 = 0;
        do {
          IVar1 = objc_stub::threads(param_1);
          IVar1 = objc_stub::FUN_100c07480(IVar1,uVar2);
          IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_crashed);
          IVar1 = objc_stub::boolValue(IVar1);
          if ((int)IVar1 != 0) {
            objc_stub::FUN_100c0b240(param_1,uVar2);
            return;
          }
          uVar2 = uVar2 + 1;
          IVar1 = objc_stub::threads(param_1);
          IVar1 = objc_stub::count(IVar1);
        } while (uVar2 < IVar1);
      }
    }
  }
  return;
}



/* Address: 0x100b3a850 | FUN_100b3a850 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100b3a850(undefined8 param_1,ID param_2)

{
  ID IVar1;
  
  IVar1 = NSDictionary::class((ID)&_OBJC_CLASS___NSDictionary);
  IVar1 = objc_stub::isKindOfClass_(param_2,IVar1);
  return IVar1;
}



/* Address: 0x100b3a8a0 | SentryCrashReportConverter::convertReportToEvent */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryCrashReportConverter::convertReportToEvent(ID param_1,SEL param_2)

{
  class_t *self;
  ID self_00;
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  ID IVar4;
  
  self = &objc::class_t::SentryEvent;
  _objc_alloc();
  self_00 = objc_stub::FUN_100c044a0((ID)self,5);
  IVar1 = objc_stub::FUN_100c092e0(param_1);
  IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_report);
  IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_timestamp);
  IVar2 = objc_stub::class((ID)&_OBJC_CLASS___NSNumber);
  IVar1 = objc_stub::isKindOfClass_(IVar1,IVar2);
  if ((int)IVar1 == 0) {
    IVar1 = objc_stub::FUN_100c092e0(param_1);
    IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_report);
    IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_timestamp);
    IVar2 = objc_stub::class((ID)&_OBJC_CLASS___NSString);
    IVar1 = objc_stub::isKindOfClass_(IVar1,IVar2);
    if ((int)IVar1 != 0) {
      IVar1 = objc_stub::FUN_100c092e0(param_1);
      IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_report);
      IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_timestamp);
      FUN_100b40378(IVar1);
      objc_stub::setTimestamp_(self_00,IVar1);
    }
  }
  else {
    IVar1 = objc_stub::FUN_100c092e0(param_1);
    IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_report);
    IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_timestamp);
    IVar1 = objc_stub::integerValue(IVar1);
    IVar1 = objc_stub::dateWithTimeIntervalSince1970_((ID)&_OBJC_CLASS___NSDate,(double)(long)IVar1)
    ;
    objc_stub::setTimestamp_(self_00,IVar1);
  }
  IVar1 = objc_stub::FUN_100bfffa0(param_1);
  objc_stub::FUN_100c0e240(self_00,IVar1);
  IVar1 = objc_stub::threads(self_00);
  IVar1 = objc_stub::FUN_100c00c00(param_1,IVar1);
  objc_stub::FUN_100c0b480(self_00,IVar1);
  IVar1 = objc_stub::FUN_100bffee0(param_1);
  objc_stub::FUN_100c0ba20(self_00,IVar1);
  IVar1 = objc_stub::FUN_100c11080(param_1);
  IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_dist);
  objc_stub::FUN_100c0b660(self_00,IVar1);
  IVar1 = objc_stub::FUN_100c11080(param_1);
  IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_environment);
  objc_stub::FUN_100c0b900(self_00,IVar1);
  puVar3 = &_OBJC_CLASS___NSMutableDictionary;
  _objc_alloc();
  IVar1 = objc_stub::FUN_100c11080(param_1);
  IVar2 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_context);
  IVar1 = *(ID *)PTR____NSDictionary0___100ea9b08;
  if (IVar2 != 0) {
    IVar1 = IVar2;
  }
  IVar1 = objc_stub::initWithDictionary_((ID)puVar3,IVar1);
  IVar2 = objc_stub::FUN_100c11080(param_1);
  IVar2 = objc_stub::objectForKeyedSubscript_(IVar2,&cf_traceContext);
  if (IVar2 != 0) {
    IVar2 = objc_stub::FUN_100c11080(param_1);
    IVar2 = objc_stub::objectForKeyedSubscript_(IVar2,&cf_traceContext);
    objc_stub::setObject_forKeyedSubscript_(IVar1,IVar2,&cf_trace);
  }
  IVar2 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_app);
  if (IVar2 == 0) {
    puVar3 = &_OBJC_CLASS___NSMutableDictionary;
    _objc_alloc();
    IVar2 = objc_stub::init((ID)puVar3);
  }
  else {
    IVar2 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_app);
    IVar2 = objc_stub::mutableCopy(IVar2);
  }
  IVar4 = objc_stub::FUN_100bfde60(param_1);
  IVar4 = objc_stub::objectForKeyedSubscript_(IVar4,&cf_application_in_foreground);
  objc_stub::setObject_forKeyedSubscript_(IVar2,IVar4,&cf_in_foreground);
  IVar4 = objc_stub::FUN_100bfde60(param_1);
  IVar4 = objc_stub::objectForKeyedSubscript_(IVar4,&cf_application_active);
  objc_stub::setObject_forKeyedSubscript_(IVar2,IVar4,&cf_is_active);
  objc_stub::setObject_forKeyedSubscript_(IVar1,IVar2,&cf_app);
  objc_stub::FUN_100bfd6e0(param_1,IVar1);
  objc_stub::FUN_100c0b0e0(self_00,IVar1);
  IVar1 = objc_stub::FUN_100c11080(param_1);
  IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_extra);
  objc_stub::FUN_100c0baa0(self_00,IVar1);
  IVar1 = objc_stub::FUN_100c11080(param_1);
  IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_tags);
  objc_stub::FUN_100c0e040(self_00,IVar1);
  IVar1 = objc_stub::FUN_100bfffc0(param_1);
  objc_stub::FUN_100c0e6e0(self_00,IVar1);
  IVar1 = objc_stub::FUN_100bffec0(param_1);
  objc_stub::FUN_100c0ac20(self_00,IVar1);
  IVar1 = objc_stub::FUN_100c11080(param_1);
  IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_release);
  objc_stub::FUN_100c0d600(self_00,IVar1);
  IVar1 = objc_stub::FUN_100c08e20(self_00);
  if ((((IVar1 == 0) &&
       (IVar1 = objc_stub::objectForKeyedSubscript_(IVar2,&cf_app_identifier), IVar1 != 0)) &&
      (IVar1 = objc_stub::objectForKeyedSubscript_(IVar2,&cf_app_version), IVar1 != 0)) &&
     (IVar1 = objc_stub::objectForKeyedSubscript_(IVar2,&cf_app_build), IVar1 != 0)) {
    objc_stub::objectForKeyedSubscript_(IVar2,&cf_app_identifier);
    objc_stub::objectForKeyedSubscript_(IVar2,&cf_app_version);
    objc_stub::objectForKeyedSubscript_(IVar2,&cf_app_build);
    IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_________);
    objc_stub::FUN_100c0d600(self_00,IVar1);
  }
  IVar1 = objc_stub::FUN_100c01520(self_00);
  if ((IVar1 == 0) && (IVar1 = objc_stub::objectForKeyedSubscript_(IVar2,&cf_app_build), IVar1 != 0)
     ) {
    IVar1 = objc_stub::objectForKeyedSubscript_(IVar2,&cf_app_build);
    objc_stub::FUN_100c0b660(self_00,IVar1);
  }
  return self_00;
}



/* Address: 0x100b3b1a4 | SentryCrashReportConverter::convertUser */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryCrashReportConverter::convertUser(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  class_t *self;
  ID IVar3;
  
  IVar1 = objc_stub::FUN_100c11080(param_1);
  IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_user);
  if (IVar1 == 0) {
    IVar1 = 0;
  }
  else {
    IVar1 = objc_stub::FUN_100c11080(param_1);
    IVar2 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_user);
    self = &objc::class_t::SentryUser;
    _objc_alloc();
    IVar1 = objc_stub::init((ID)self);
    IVar3 = objc_stub::objectForKeyedSubscript_(IVar2,&cf_id);
    objc_stub::FUN_100c0e720(IVar1,IVar3);
    IVar3 = objc_stub::objectForKeyedSubscript_(IVar2,&cf_email);
    objc_stub::FUN_100c0b800(IVar1,IVar3);
    IVar3 = objc_stub::objectForKeyedSubscript_(IVar2,&cf_username);
    objc_stub::FUN_100c0e7c0(IVar1,IVar3);
    IVar2 = objc_stub::objectForKeyedSubscript_(IVar2,&cf_data);
    objc_stub::setData_(IVar1,IVar2);
  }
  return IVar1;
}



/* Address: 0x100b3b31c | SentryCrashReportConverter::convertBreadcrumbs */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryCrashReportConverter::convertBreadcrumbs(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  undefined *self;
  ID self_00;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  cfstringStruct *pcVar5;
  ID IVar6;
  class_t *self_01;
  ID IVar7;
  ID IVar8;
  ID IVar9;
  long lVar10;
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
  IVar2 = objc_stub::FUN_100c11080(param_1);
  IVar2 = objc_stub::objectForKeyedSubscript_(IVar2,&cf_breadcrumbs);
  if (IVar2 != 0) {
    IVar2 = objc_stub::FUN_100c11080(param_1);
    IVar2 = objc_stub::objectForKeyedSubscript_(IVar2,&cf_breadcrumbs);
    uStack_108 = 0;
    local_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    local_130 = 0;
    uStack_118 = 0;
    local_120 = (long *)0x0;
    IVar3 = objc_stub::countByEnumeratingWithState_objects_count_(IVar2,&local_130,auStack_f0,0x10);
    if (IVar3 != 0) {
      lVar10 = *local_120;
      do {
        IVar8 = 0;
        do {
          if (*local_120 != lVar10) {
            _objc_enumerationMutation(IVar2);
          }
          IVar9 = *(ID *)(lStack_128 + IVar8 * 8);
          IVar4 = objc_stub::objectForKeyedSubscript_(IVar9,&cf_level);
          IVar4 = objc_stub::FUN_100c0a020(param_1,IVar4);
          pcVar5 = (cfstringStruct *)objc_stub::objectForKeyedSubscript_(IVar9,&cf_category);
          pcVar1 = &cf_default;
          if (pcVar5 != (cfstringStruct *)0x0) {
            pcVar1 = pcVar5;
          }
          IVar6 = objc_stub::objectForKeyedSubscript_(IVar9,&cf_data);
          self_01 = &objc::class_t::SentryBreadcrumb;
          _objc_alloc();
          if (IVar6 == 0) {
            IVar4 = objc_stub::FUN_100c044c0((ID)self_01,IVar4,pcVar1);
          }
          else {
            IVar4 = objc_stub::FUN_100c044e0((ID)self_01,IVar4,pcVar1,IVar6);
          }
          IVar6 = objc_stub::objectForKeyedSubscript_(IVar9,&cf_message);
          objc_stub::setMessage_(IVar4,IVar6);
          IVar6 = objc_stub::objectForKeyedSubscript_(IVar9,&cf_type);
          objc_stub::FUN_100c0e600(IVar4,IVar6);
          IVar6 = objc_stub::objectForKeyedSubscript_(IVar9,&cf_origin);
          objc_stub::FUN_100c0cf40(IVar4,IVar6);
          IVar6 = objc_stub::objectForKeyedSubscript_(IVar9,&cf_timestamp);
          IVar7 = objc_stub::class((ID)&_OBJC_CLASS___NSString);
          IVar6 = objc_stub::isKindOfClass_(IVar6,IVar7);
          if ((int)IVar6 != 0) {
            IVar9 = objc_stub::objectForKeyedSubscript_(IVar9,&cf_timestamp);
            FUN_100b40378(IVar9);
            objc_stub::setTimestamp_(IVar4,IVar9);
          }
          objc_stub::addObject_(self_00,IVar4);
          IVar8 = IVar8 + 1;
        } while (IVar3 != IVar8);
        IVar3 = objc_stub::countByEnumeratingWithState_objects_count_
                          (IVar2,&local_130,auStack_f0,0x10);
      } while (IVar3 != 0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return self_00;
}



/* Address: 0x100b3b6a4 | SentryCrashReportConverter::sentryLevelFromString: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

unsigned_long_long
SentryCrashReportConverter::sentryLevelFromString_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  unsigned_long_long uVar2;
  
  IVar1 = objc_stub::isEqualToString_(param_3,&cf_fatal);
  if ((IVar1 & 1) == 0) {
    IVar1 = objc_stub::isEqualToString_(param_3,&cf_warning);
    if ((IVar1 & 1) == 0) {
      IVar1 = objc_stub::isEqualToString_(param_3,&cf_info);
      if (((IVar1 & 1) == 0) &&
         (IVar1 = objc_stub::isEqualToString_(param_3,&cf_log), (IVar1 & 1) == 0)) {
        IVar1 = objc_stub::isEqualToString_(param_3,&cf_debug);
        if ((IVar1 & 1) == 0) {
          objc_stub::isEqualToString_(param_3,&cf_error);
          uVar2 = 4;
        }
        else {
          uVar2 = 1;
        }
      }
      else {
        uVar2 = 2;
      }
    }
    else {
      uVar2 = 3;
    }
  }
  else {
    uVar2 = 5;
  }
  return uVar2;
}



/* Address: 0x100b3b768 | SentryCrashReportConverter::rawStackTraceForThreadIndex: */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryCrashReportConverter::rawStackTraceForThreadIndex_
             (ID param_1,SEL param_2,long_long param_3)

{
  ID IVar1;
  
  IVar1 = objc_stub::threads(param_1);
  IVar1 = objc_stub::FUN_100c07480(IVar1,param_3);
  IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_backtrace);
  IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_contents);
  return IVar1;
}



/* Address: 0x100b3b800 | SentryCrashReportConverter::registersForThreadIndex: */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryCrashReportConverter::registersForThreadIndex_(ID param_1,SEL param_2,long_long param_3)

{
  ID IVar1;
  undefined *self;
  ID self_00;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  long lVar5;
  ID IVar6;
  undefined8 uVar7;
  undefined8 local_150;
  long lStack_148;
  long *local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_108 [133];
  char acStack_83 [19];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  IVar1 = objc_stub::threads(param_1);
  IVar1 = objc_stub::FUN_100c07480(IVar1,param_3);
  self = &_OBJC_CLASS___NSMutableDictionary;
  _objc_alloc();
  self_00 = objc_stub::init((ID)self);
  lStack_148 = 0;
  local_150 = 0;
  uStack_138 = 0;
  local_140 = (long *)0x0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  IVar2 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_registers);
  IVar2 = objc_stub::objectForKeyedSubscript_(IVar2,&cf_basic);
  IVar2 = objc_stub::FUN_100bfdac0(IVar2);
  IVar3 = objc_stub::countByEnumeratingWithState_objects_count_(IVar2,&local_150,auStack_108,0x10);
  if (IVar3 != 0) {
    lVar5 = *local_140;
    do {
      IVar6 = 0;
      do {
        if (*local_140 != lVar5) {
          _objc_enumerationMutation(IVar2);
        }
        uVar7 = *(undefined8 *)(lStack_148 + IVar6 * 8);
        IVar4 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_registers);
        IVar4 = objc_stub::objectForKeyedSubscript_(IVar4,&cf_basic);
        IVar4 = objc_stub::objectForKeyedSubscript_(IVar4,uVar7);
        objc_stub::unsignedLongLongValue(IVar4);
        _snprintf(acStack_83,0x13,"0x%016llx");
        IVar4 = objc_stub::stringWithCString_encoding_((ID)&_OBJC_CLASS___NSString,acStack_83,1);
        objc_stub::setValue_forKey_(self_00,IVar4,uVar7);
        IVar6 = IVar6 + 1;
      } while (IVar3 != IVar6);
      IVar3 = objc_stub::countByEnumeratingWithState_objects_count_
                        (IVar2,&local_150,auStack_108,0x10);
    } while (IVar3 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_70) {
    return self_00;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}



/* Address: 0x100b3ba4c | SentryCrashReportConverter::binaryImageForAddress: */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryCrashReportConverter::binaryImageForAddress_
             (ID param_1,SEL param_2,unsigned_long_long param_3)

{
  ID self;
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID self_00;
  long lVar5;
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
  self = objc_stub::FUN_100bfe6a0(param_1);
  IVar1 = objc_stub::countByEnumeratingWithState_objects_count_(self,&local_130,auStack_f0,0x10);
  if (IVar1 != 0) {
    lVar5 = *local_120;
    do {
      IVar4 = 0;
      do {
        if (*local_120 != lVar5) {
          _objc_enumerationMutation(self);
        }
        self_00 = *(ID *)(lStack_128 + IVar4 * 8);
        IVar2 = objc_stub::objectForKeyedSubscript_(self_00,&cf_image_addr);
        IVar2 = objc_stub::unsignedLongLongValue(IVar2);
        IVar3 = objc_stub::objectForKeyedSubscript_(self_00,&cf_image_size);
        IVar3 = objc_stub::unsignedLongLongValue(IVar3);
        if ((param_3 >= IVar2 && param_3 <= IVar3 + IVar2) &&
            (param_3 < IVar2 || IVar3 + IVar2 != param_3)) goto LAB_100b3bb8c;
        IVar4 = IVar4 + 1;
      } while (IVar1 != IVar4);
      IVar1 = objc_stub::countByEnumeratingWithState_objects_count_(self,&local_130,auStack_f0,0x10)
      ;
    } while (IVar1 != 0);
  }
  self_00 = 0;
LAB_100b3bb8c:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_70) {
    return self_00;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}



/* Address: 0x100b3bbd4 | SentryCrashReportConverter::threadAtIndex: */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryCrashReportConverter::threadAtIndex_(ID param_1,SEL param_2,long_long param_3)

{
  int iVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  class_t *self;
  ID IVar5;
  ulong uVar6;
  
  IVar2 = objc_stub::threads(param_1);
  IVar2 = objc_stub::count(IVar2);
  if (param_3 < IVar2) {
    IVar2 = objc_stub::threads(param_1);
    IVar3 = objc_stub::FUN_100c07480(IVar2,param_3);
    IVar4 = objc_stub::objectForKeyedSubscript_(IVar3,&cf_index);
    if (IVar4 != 0) {
      IVar2 = objc_stub::class((ID)&_OBJC_CLASS___NSNumber);
      IVar2 = objc_stub::isKindOfClass_(IVar4,IVar2);
      iVar1 = (int)IVar2;
      if ((IVar2 & 1) == 0) {
        FUN_100b3a1f0();
        if (iVar1 != 0) {
          FUN_100b3a2b8("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryCrashReportConverter.m"
                        ,0x121,&cf_Threadindexisnotanumber___);
        }
        return 0;
      }
    }
    self = &objc::class_t::SentryThread;
    _objc_alloc();
    IVar2 = objc_stub::FUN_100c04d20((ID)self,IVar4);
    IVar5 = objc_stub::FUN_100c0f1a0(param_1,param_3);
    objc_stub::FUN_100c0dd20(IVar2,IVar5);
    IVar5 = objc_stub::FUN_100c0f200(IVar2);
    IVar5 = objc_stub::frames(IVar5);
    IVar5 = objc_stub::count(IVar5);
    if (IVar5 == 0) {
      objc_stub::FUN_100c0dd20(IVar2,0);
    }
    IVar5 = objc_stub::objectForKeyedSubscript_(IVar3,&cf_crashed);
    objc_stub::FUN_100c0b200(IVar2,IVar5);
    IVar5 = objc_stub::objectForKeyedSubscript_(IVar3,&cf_current_thread);
    objc_stub::FUN_100c0b280(IVar2,IVar5);
    IVar5 = objc_stub::objectForKeyedSubscript_(IVar3,&cf_name);
    objc_stub::setName_(IVar2,IVar5);
    if (IVar4 == 0) {
      uVar6 = 0;
    }
    else {
      IVar4 = objc_stub::intValue(IVar4);
      uVar6 = (ulong)((int)IVar4 == 0);
    }
    IVar4 = objc_stub::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,uVar6);
    objc_stub::FUN_100c0c4a0(IVar2,IVar4);
    IVar4 = objc_stub::name(IVar2);
    if (IVar4 == 0) {
      IVar3 = objc_stub::objectForKeyedSubscript_(IVar3,&cf_dispatch_queue);
      objc_stub::setName_(IVar2,IVar3);
    }
  }
  else {
    IVar2 = 0;
  }
  return IVar2;
}



/* Address: 0x100b3bea4 | SentryCrashReportConverter::stackFrameAtIndex:inThreadIndex: */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID SentryCrashReportConverter::stackFrameAtIndex_inThreadIndex_
             (ID param_1,SEL param_2,long_long param_3,long_long param_4)

{
  ID IVar1;
  ID IVar2;
  class_t *self;
  ID self_00;
  char acStack_6b [19];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_100ea82f0;
  IVar1 = objc_stub::FUN_100c087c0(param_1,param_4);
  IVar1 = objc_stub::FUN_100c07480(IVar1,param_3);
  IVar2 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_instruction_addr);
  IVar2 = objc_stub::unsignedLongLongValue(IVar2);
  IVar2 = objc_stub::FUN_100bfe680(param_1,IVar2);
  self = &objc::class_t::SentryFrame;
  _objc_alloc();
  self_00 = objc_stub::init((ID)self);
  IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_instruction_addr);
  objc_stub::unsignedLongLongValue(IVar1);
  _snprintf(acStack_6b,0x13,"0x%016llx");
  IVar1 = objc_stub::stringWithCString_encoding_((ID)&_OBJC_CLASS___NSString,acStack_6b,1);
  objc_stub::FUN_100c0c3c0(self_00,IVar1);
  IVar1 = objc_stub::objectForKeyedSubscript_(IVar2,&cf_image_addr);
  objc_stub::unsignedLongLongValue(IVar1);
  _snprintf(acStack_6b,0x13,"0x%016llx");
  IVar1 = objc_stub::stringWithCString_encoding_((ID)&_OBJC_CLASS___NSString,acStack_6b,1);
  objc_stub::FUN_100c0c180(self_00,IVar1);
  IVar1 = objc_stub::objectForKeyedSubscript_(IVar2,&cf_name);
  objc_stub::FUN_100c0cf80(self_00,IVar1);
  IVar1 = objc_stub::FUN_100c03820(param_1);
  IVar2 = objc_stub::objectForKeyedSubscript_(IVar2,&cf_name);
  IVar1 = objc_stub::FUN_100c05940(IVar1,IVar2);
  IVar1 = objc_stub::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,IVar1);
  objc_stub::FUN_100c0c280(self_00,IVar1);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_58) {
    return self_00;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}



/* Address: 0x100b3c140 | SentryCrashReportConverter::stackFramesForThreadIndex: */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryCrashReportConverter::stackFramesForThreadIndex_(ID param_1,SEL param_2,long_long param_3)

{
  ID IVar1;
  ID self;
  ID IVar2;
  ID self_00;
  ID IVar3;
  
  IVar1 = objc_stub::FUN_100c087c0(param_1);
  IVar1 = objc_stub::count(IVar1);
  if (IVar1 == 0) {
    IVar1 = *(ID *)PTR____NSArray0___100ea9b00;
  }
  else {
    self = objc_stub::arrayWithCapacity_((ID)&_OBJC_CLASS___NSMutableArray,IVar1);
    IVar3 = 0;
    self_00 = 0;
    do {
      IVar2 = objc_stub::FUN_100c087c0(param_1,param_3);
      IVar2 = objc_stub::FUN_100c07480(IVar2,IVar3);
      IVar2 = objc_stub::objectForKeyedSubscript_(IVar2,&cf_instruction_addr);
      IVar2 = objc_stub::unsignedLongLongValue(IVar2);
      if (IVar2 == 0xfffffffffffffb2d) {
        if (self_00 != 0) {
          IVar2 = objc_stub::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,1);
          objc_stub::FUN_100c0dd00(self_00,IVar2);
        }
      }
      else {
        self_00 = objc_stub::FUN_100c0f0e0(param_1,IVar3,param_3);
        objc_stub::addObject_(self,self_00);
      }
      IVar3 = IVar3 + 1;
    } while (IVar1 != IVar3);
    IVar1 = objc_stub::FUN_100c09660(self);
    IVar1 = objc_stub::FUN_100bfdae0(IVar1);
  }
  return IVar1;
}



/* Address: 0x100b3c30c | SentryCrashReportConverter::stackTraceForThreadIndex: */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryCrashReportConverter::stackTraceForThreadIndex_(ID param_1,SEL param_2,long_long param_3)

{
  ID IVar1;
  class_t *self;
  ID IVar2;
  
  IVar1 = objc_stub::FUN_100c0f120(param_1);
  self = &objc::class_t::SentryStacktrace;
  _objc_alloc();
  IVar2 = objc_stub::FUN_100c08de0(param_1,param_3);
  IVar1 = objc_stub::FUN_100c042a0((ID)self,IVar1,IVar2);
  objc_stub::FUN_100c02860(IVar1);
  return IVar1;
}



/* Address: 0x100b3c39c | SentryCrashReportConverter::crashedThread */

/* Function Stack Size: 0x10 bytes */

ID SentryCrashReportConverter::crashedThread(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100c00400(param_1);
  IVar1 = objc_stub::FUN_100c10460(param_1,IVar1);
  return IVar1;
}



/* Address: 0x100b3c3c4 | SentryCrashReportConverter::debugMetaFromBinaryImageDictionary: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryCrashReportConverter::debugMetaFromBinaryImageDictionary_
             (ID param_1,SEL param_2,ID param_3)

{
  class_t *self;
  ID self_00;
  ID IVar1;
  char acStack_5b [19];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  self = &objc::class_t::SentryDebugMeta;
  _objc_alloc();
  self_00 = objc_stub::init((ID)self);
  IVar1 = objc_stub::objectForKeyedSubscript_(param_3,&cf_uuid);
  objc_stub::FUN_100c0b440(self_00,IVar1);
  objc_stub::FUN_100c0e600(self_00,&cf_macho);
  IVar1 = objc_stub::objectForKeyedSubscript_(param_3,&cf_image_vmaddr);
  IVar1 = objc_stub::integerValue(IVar1);
  if (0 < (long)IVar1) {
    IVar1 = objc_stub::objectForKeyedSubscript_(param_3,&cf_image_vmaddr);
    objc_stub::unsignedLongLongValue(IVar1);
    _snprintf(acStack_5b,0x13,"0x%016llx");
    IVar1 = objc_stub::stringWithCString_encoding_((ID)&_OBJC_CLASS___NSString,acStack_5b,1);
    objc_stub::FUN_100c0c240(self_00,IVar1);
  }
  IVar1 = objc_stub::objectForKeyedSubscript_(param_3,&cf_image_addr);
  objc_stub::unsignedLongLongValue(IVar1);
  _snprintf(acStack_5b,0x13,"0x%016llx");
  IVar1 = objc_stub::stringWithCString_encoding_((ID)&_OBJC_CLASS___NSString,acStack_5b,1);
  objc_stub::FUN_100c0c180(self_00,IVar1);
  IVar1 = objc_stub::objectForKeyedSubscript_(param_3,&cf_image_size);
  objc_stub::FUN_100c0c220(self_00,IVar1);
  IVar1 = objc_stub::objectForKeyedSubscript_(param_3,&cf_name);
  objc_stub::FUN_100c0aee0(self_00,IVar1);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_48) {
    return self_00;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}



/* Address: 0x100b3c604 | SentryCrashReportConverter::debugMetaForThreads: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryCrashReportConverter::debugMetaForThreads_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ID self;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  long lVar6;
  ID IVar7;
  long lVar8;
  ID IVar9;
  undefined8 local_2d0;
  long lStack_2c8;
  long *local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  long lStack_288;
  long *local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 local_250;
  long lStack_248;
  long *local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined1 auStack_208 [128];
  undefined1 auStack_188 [128];
  undefined1 auStack_108 [133];
  char acStack_83 [19];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  puVar1 = &_OBJC_CLASS___NSMutableSet;
  _objc_alloc();
  self = objc_stub::init((ID)puVar1);
  lStack_248 = 0;
  local_250 = 0;
  uStack_238 = 0;
  local_240 = (long *)0x0;
  uStack_228 = 0;
  local_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  IVar2 = objc_stub::countByEnumeratingWithState_objects_count_(param_3,&local_250,auStack_108,0x10)
  ;
  if (IVar2 != 0) {
    lVar6 = *local_240;
    do {
      IVar7 = 0;
      do {
        if (*local_240 != lVar6) {
          _objc_enumerationMutation(param_3);
        }
        lStack_288 = 0;
        local_290 = 0;
        uStack_278 = 0;
        local_280 = (long *)0x0;
        uStack_268 = 0;
        local_270 = 0;
        uStack_258 = 0;
        uStack_260 = 0;
        IVar3 = objc_stub::FUN_100c0f200(*(ID *)(lStack_248 + IVar7 * 8));
        IVar3 = objc_stub::frames(IVar3);
        IVar4 = objc_stub::countByEnumeratingWithState_objects_count_
                          (IVar3,&local_290,auStack_188,0x10);
        if (IVar4 != 0) {
          lVar8 = *local_280;
          do {
            IVar9 = 0;
            do {
              if (*local_280 != lVar8) {
                _objc_enumerationMutation(IVar3);
              }
              IVar5 = objc_stub::FUN_100c035e0(*(ID *)(lStack_288 + IVar9 * 8));
              if (IVar5 != 0) {
                objc_stub::addObject_(self,IVar5);
              }
              IVar9 = IVar9 + 1;
            } while (IVar4 != IVar9);
            IVar4 = objc_stub::countByEnumeratingWithState_objects_count_
                              (IVar3,&local_290,auStack_188,0x10);
          } while (IVar4 != 0);
        }
        IVar7 = IVar7 + 1;
      } while (IVar7 != IVar2);
      IVar2 = objc_stub::countByEnumeratingWithState_objects_count_
                        (param_3,&local_250,auStack_108,0x10);
    } while (IVar2 != 0);
  }
  puVar1 = &_OBJC_CLASS___NSMutableArray;
  _objc_alloc();
  IVar2 = objc_stub::init((ID)puVar1);
  lStack_2c8 = 0;
  local_2d0 = 0;
  uStack_2b8 = 0;
  local_2c0 = (long *)0x0;
  uStack_2a8 = 0;
  local_2b0 = 0;
  uStack_298 = 0;
  uStack_2a0 = 0;
  IVar7 = objc_stub::FUN_100bfe6a0(param_1);
  IVar3 = objc_stub::countByEnumeratingWithState_objects_count_(IVar7,&local_2d0,auStack_208,0x10);
  if (IVar3 != 0) {
    lVar6 = *local_2c0;
    do {
      IVar4 = 0;
      do {
        if (*local_2c0 != lVar6) {
          _objc_enumerationMutation(IVar7);
        }
        IVar5 = *(ID *)(lStack_2c8 + IVar4 * 8);
        IVar9 = objc_stub::objectForKeyedSubscript_(IVar5,&cf_image_addr);
        objc_stub::unsignedLongLongValue(IVar9);
        _snprintf(acStack_83,0x13,"0x%016llx");
        IVar9 = objc_stub::stringWithCString_encoding_((ID)&_OBJC_CLASS___NSString,acStack_83,1);
        IVar9 = objc_stub::FUN_100bffc80(self,IVar9);
        if ((int)IVar9 != 0) {
          IVar9 = objc_stub::FUN_100c00c20(param_1,IVar5);
          objc_stub::addObject_(IVar2,IVar9);
        }
        IVar4 = IVar4 + 1;
      } while (IVar3 != IVar4);
      IVar3 = objc_stub::countByEnumeratingWithState_objects_count_
                        (IVar7,&local_2d0,auStack_208,0x10);
    } while (IVar3 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_70) {
    return IVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}



/* Address: 0x100b3c95c | SentryCrashReportConverter::convertExceptions */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryCrashReportConverter::convertExceptions(ID param_1,SEL param_2)

{
  cfstringStruct *self;
  ID IVar1;
  cfstringStruct *pcVar2;
  class_t *pcVar3;
  cfstringStruct *pcVar4;
  ID IVar5;
  ID IVar6;
  undefined *self_00;
  ID IVar7;
  long extraout_x1;
  ID local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  IVar1 = objc_stub::FUN_100c01f60(param_1);
  if (IVar1 == 0) {
    IVar1 = 0;
  }
  else {
    IVar1 = objc_stub::FUN_100c01f60(param_1);
    pcVar2 = (cfstringStruct *)objc_stub::objectForKeyedSubscript_(IVar1,&cf_type);
    self = &cf_UnknownException;
    if (pcVar2 != (cfstringStruct *)0x0) {
      self = pcVar2;
    }
    IVar1 = objc_stub::isEqualToString_((ID)self,&cf_nsexception);
    if ((int)IVar1 == 0) {
      IVar1 = objc_stub::isEqualToString_((ID)self,&cf_cpp_exception);
      if ((int)IVar1 == 0) {
        IVar1 = objc_stub::isEqualToString_((ID)self,&cf_mach);
        if ((int)IVar1 == 0) {
          IVar1 = objc_stub::isEqualToString_((ID)self,&cf_signal);
          if ((int)IVar1 == 0) {
            IVar1 = objc_stub::isEqualToString_((ID)self,&cf_user);
            if ((int)IVar1 == 0) {
              pcVar3 = &objc::class_t::SentryException;
              _objc_alloc();
              IVar1 = objc_stub::FUN_100c051e0((ID)pcVar3,&cf_UnknownException,self);
            }
            else {
              IVar1 = objc_stub::FUN_100c01f60(param_1);
              objc_stub::objectForKeyedSubscript_(IVar1,&cf_reason);
              IVar5 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf___);
              pcVar3 = &objc::class_t::SentryException;
              _objc_alloc();
              IVar1 = objc_stub::FUN_100c01f60(param_1);
              IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_user_reported);
              pcVar4 = (cfstringStruct *)objc_stub::objectForKeyedSubscript_(IVar1,&cf_name);
              pcVar2 = &cf_UserReportedException;
              if (pcVar4 != (cfstringStruct *)0x0) {
                pcVar2 = pcVar4;
              }
              IVar1 = objc_stub::FUN_100c051e0((ID)pcVar3,IVar5,pcVar2);
              IVar6 = objc_stub::rangeOfString_(IVar5,&cf__);
              if (IVar6 != 0x7fffffffffffffff) {
                pcVar3 = &objc::class_t::SentryException;
                _objc_alloc();
                IVar1 = objc_stub::length(IVar5);
                IVar1 = objc_stub::substringWithRange_
                                  (IVar5,IVar6 + extraout_x1,IVar1 - (IVar6 + extraout_x1));
                IVar7 = objc_stub::FUN_100c11480((ID)&_OBJC_CLASS___NSCharacterSet);
                IVar1 = objc_stub::FUN_100c0f9a0(IVar1,IVar7);
                IVar5 = objc_stub::substringWithRange_(IVar5,0,IVar6);
                IVar1 = objc_stub::FUN_100c051e0((ID)pcVar3,IVar1,IVar5);
              }
            }
          }
          else {
            pcVar3 = &objc::class_t::SentryException;
            _objc_alloc();
            IVar1 = objc_stub::FUN_100c01f60(param_1);
            IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_signal);
            objc_stub::objectForKeyedSubscript_(IVar1,&cf_signal);
            IVar1 = objc_stub::FUN_100c01f60(param_1);
            IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_signal);
            objc_stub::objectForKeyedSubscript_(IVar1,&cf_code);
            IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_Signal___Code__);
            IVar5 = objc_stub::FUN_100c01f60(param_1);
            IVar5 = objc_stub::objectForKeyedSubscript_(IVar5,&cf_signal);
            pcVar4 = (cfstringStruct *)objc_stub::objectForKeyedSubscript_(IVar5,&cf_name);
            pcVar2 = &cf_SignalException;
            if (pcVar4 != (cfstringStruct *)0x0) {
              pcVar2 = pcVar4;
            }
            IVar1 = objc_stub::FUN_100c051e0((ID)pcVar3,IVar1,pcVar2);
          }
        }
        else {
          pcVar3 = &objc::class_t::SentryException;
          _objc_alloc();
          IVar1 = objc_stub::FUN_100c01f60(param_1);
          IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_mach);
          objc_stub::objectForKeyedSubscript_(IVar1,&cf_exception);
          IVar1 = objc_stub::FUN_100c01f60(param_1);
          IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_mach);
          objc_stub::objectForKeyedSubscript_(IVar1,&cf_code);
          IVar1 = objc_stub::FUN_100c01f60(param_1);
          IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_mach);
          objc_stub::objectForKeyedSubscript_(IVar1,&cf_subcode);
          IVar1 = objc_stub::stringWithFormat_
                            ((ID)&_OBJC_CLASS___NSString,&cf_Exception___Code___Subcode__);
          IVar5 = objc_stub::FUN_100c01f60(param_1);
          IVar5 = objc_stub::objectForKeyedSubscript_(IVar5,&cf_mach);
          pcVar4 = (cfstringStruct *)objc_stub::objectForKeyedSubscript_(IVar5,&cf_exception_name);
          pcVar2 = &cf_MachException;
          if (pcVar4 != (cfstringStruct *)0x0) {
            pcVar2 = pcVar4;
          }
          IVar1 = objc_stub::FUN_100c051e0((ID)pcVar3,IVar1,pcVar2);
        }
      }
      else {
        IVar1 = objc_stub::FUN_100c01f60(param_1);
        IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_cpp_exception);
        objc_stub::objectForKeyedSubscript_(IVar1,&cf_name);
        IVar1 = objc_stub::FUN_100c01f60(param_1);
        objc_stub::objectForKeyedSubscript_(IVar1,&cf_reason);
        IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______);
        pcVar3 = &objc::class_t::SentryException;
        _objc_alloc();
        IVar1 = objc_stub::FUN_100c051e0((ID)pcVar3,IVar1,&cf_C__Exception);
      }
    }
    else {
      IVar1 = objc_stub::FUN_100c07a20(param_1);
    }
    objc_stub::FUN_100c01b60(param_1,IVar1);
    IVar5 = objc_stub::FUN_100c00280(param_1);
    IVar6 = objc_stub::FUN_100c0ea40((ID)&_OBJC_CLASS___NSSet,&cf_mach);
    IVar6 = objc_stub::FUN_100bffc80(IVar6,self);
    if (((int)IVar6 != 0) && (IVar6 = objc_stub::count(IVar5), IVar6 != 0)) {
      IVar6 = objc_stub::firstObject(IVar5);
      objc_stub::FUN_100c0e840(IVar1,IVar6);
    }
    IVar6 = objc_stub::FUN_100c021a0(param_1,self);
    objc_stub::FUN_100c0ca40(IVar1,IVar6);
    IVar6 = objc_stub::FUN_100c0ea40((ID)&_OBJC_CLASS___NSSet,&cf_nsexception);
    IVar6 = objc_stub::FUN_100bffc80(IVar6,self);
    if ((((int)IVar6 != 0) && (IVar6 = objc_stub::FUN_100c06bc0(IVar1), IVar6 != 0)) &&
       (IVar6 = objc_stub::count(IVar5), IVar6 != 0)) {
      IVar6 = objc_stub::FUN_100c06bc0(IVar1);
      IVar6 = objc_stub::data(IVar6);
      IVar6 = objc_stub::mutableCopy(IVar6);
      if (IVar6 == 0) {
        self_00 = &_OBJC_CLASS___NSMutableDictionary;
        _objc_alloc();
        IVar6 = objc_stub::init((ID)self_00);
      }
      objc_stub::setObject_forKeyedSubscript_(IVar6,IVar5,&cf_crash_info_messages);
      IVar5 = objc_stub::FUN_100c06bc0(IVar1);
      objc_stub::setData_(IVar5,IVar6);
    }
    IVar5 = objc_stub::FUN_100c003e0(param_1);
    IVar6 = objc_stub::FUN_100c104e0(IVar5);
    objc_stub::FUN_100c0e1c0(IVar1,IVar6);
    IVar5 = objc_stub::FUN_100c0f200(IVar5);
    objc_stub::FUN_100c0dd20(IVar1,IVar5);
    IVar5 = objc_stub::value(IVar1);
    IVar6 = objc_stub::FUN_100c011e0(param_1);
    if (IVar6 != 0) {
      IVar6 = objc_stub::FUN_100c011e0(param_1);
      IVar6 = objc_stub::length(IVar6);
      if ((IVar6 != 0) && (IVar5 != 0)) {
        IVar6 = objc_stub::FUN_100c011e0(param_1);
        IVar6 = objc_stub::containsString_(IVar6,IVar5);
        if ((IVar6 & 1) == 0) {
          objc_stub::FUN_100c011e0(param_1);
          IVar6 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_>__);
          IVar5 = objc_stub::stringByAppendingString_(IVar5,IVar6);
          objc_stub::FUN_100c0e840(IVar1,IVar5);
        }
      }
    }
    local_70 = IVar1;
    IVar1 = objc_stub::arrayWithObjects_count_((ID)&_OBJC_CLASS___NSArray,&local_70,1);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return IVar1;
}



/* Address: 0x100b3d498 | SentryCrashReportConverter::addNSExceptionUserInfoToContext: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryCrashReportConverter::addNSExceptionUserInfoToContext_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  undefined *self;
  
  IVar1 = objc_stub::FUN_100c01f60(param_1);
  IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_type);
  IVar1 = objc_stub::isEqualToString_(IVar1,&cf_nsexception);
  if ((int)IVar1 != 0) {
    IVar1 = objc_stub::FUN_100c01f60(param_1);
    IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_nsexception);
    IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_userInfo);
    IVar1 = objc_stub::FUN_100bffe60(param_1,IVar1);
    IVar2 = objc_stub::count(IVar1);
    if (IVar2 != 0) {
      IVar2 = objc_stub::objectForKeyedSubscript_(param_3,&cf_userinfo);
      IVar3 = objc_stub::class((ID)&_OBJC_CLASS___NSDictionary);
      IVar2 = objc_stub::isKindOfClass_(IVar2,IVar3);
      if ((int)IVar2 == 0) {
        self = &_OBJC_CLASS___NSMutableDictionary;
        _objc_alloc();
        IVar2 = objc_stub::init((ID)self);
      }
      else {
        IVar2 = objc_stub::objectForKeyedSubscript_(param_3,&cf_userinfo);
        IVar2 = objc_stub::mutableCopy(IVar2);
      }
      objc_stub::addEntriesFromDictionary_(IVar2,IVar1);
      objc_stub::setObject_forKeyedSubscript_(param_3,IVar2,&cf_userinfo);
    }
  }
  return;
}



/* Address: 0x100b3d65c | SentryCrashReportConverter::contextUserInfoFromNSExceptionUserInfo: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryCrashReportConverter::contextUserInfoFromNSExceptionUserInfo_
             (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ID local_68;
  ID local_60;
  cfstringStruct *local_58;
  ID IStack_50;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  IVar1 = objc_stub::class((ID)&_OBJC_CLASS___NSDictionary);
  IVar1 = objc_stub::isKindOfClass_(param_3,IVar1);
  if ((int)IVar1 == 0) {
    IVar1 = objc_stub::class((ID)&_OBJC_CLASS___NSString);
    IVar1 = objc_stub::isKindOfClass_(param_3,IVar1);
    if ((int)IVar1 == 0) {
      param_3 = 0;
    }
    else {
      IVar1 = objc_stub::length(param_3);
      if ((IVar1 == 0) ||
         (IVar1 = objc_stub::isEqualToString_(param_3,&cf__null_), (IVar1 & 1) != 0)) {
        param_3 = 0;
      }
      else {
        local_68 = 0;
        local_60 = 0;
        IVar2 = objc_stub::FUN_100c07a40(param_1,param_3,&local_60,&local_68);
        IVar1 = local_68;
        if ((int)IVar2 == 0) {
          IVar2 = local_68;
          FUN_100b3a1e0();
          if ((int)IVar2 != 0) {
            objc_stub::localizedDescription(IVar1);
            FUN_100b3a280("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryCrashReportConverter.m"
                          ,0x237,&
                                 cf_FailedtoparseNSException_userInfofromcrashreport_Fallingbacktorawstring_Error___
                         );
          }
          local_58 = &cf_NSException_userInfo;
          IStack_50 = param_3;
          param_3 = objc_stub::FUN_100c012c0((ID)&_OBJC_CLASS___NSDictionary,&IStack_50,&local_58,1)
          ;
        }
        else {
          param_3 = local_60;
          FUN_100bcfb78();
        }
      }
    }
  }
  else {
    FUN_100bcfb78();
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return param_3;
}



/* Address: 0x100b3d82c | SentryCrashReportConverter::parseNSExceptionUserInfoString:intoDictionary:error: */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autorelease replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x28 bytes */

bool SentryCrashReportConverter::parseNSExceptionUserInfoString_intoDictionary_error_
               (ID param_1,SEL param_2,ID param_3,ID *param_4,ID *param_5)

{
  ID IVar1;
  ID self;
  bool bVar2;
  ID local_80;
  undefined8 local_78;
  ID IStack_70;
  undefined8 local_68;
  cfstringStruct *pcStack_60;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_100ea82f0;
  IVar1 = objc_stub::dataUsingEncoding_(param_3,4);
  if (IVar1 == 0) {
    if (param_5 == (ID *)0x0) {
      bVar2 = 0;
    }
    else {
      local_68 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_100ea7c10;
      pcStack_60 = &cf_CouldnotencodeNSException_userInfostringasUTF_8_;
      IVar1 = objc_stub::FUN_100c012c0((ID)&_OBJC_CLASS___NSDictionary,&pcStack_60,&local_68,1);
      IVar1 = objc_stub::errorWithDomain_code_userInfo_
                        ((ID)&_OBJC_CLASS___NSError,&cf_io_sentry_SentryCrashReportConverter,1,IVar1
                        );
      bVar2 = 0;
      *param_5 = IVar1;
    }
  }
  else {
    local_80 = 0;
    self = objc_stub::propertyListWithData_options_format_error_
                     ((ID)&_OBJC_CLASS___NSPropertyListSerialization,IVar1,0,0,&local_80);
    IVar1 = local_80;
    if (local_80 == 0) {
      IVar1 = objc_stub::class((ID)&_OBJC_CLASS___NSDictionary);
      IVar1 = objc_stub::isKindOfClass_(self,IVar1);
      if ((IVar1 & 1) != 0) {
        _objc_retainAutorelease(self);
        *param_4 = self;
        bVar2 = 1;
        goto LAB_100b3da6c;
      }
      if (param_5 != (ID *)0x0) {
        objc_stub::class(self);
        _NSStringFromClass();
        IStack_70 = objc_stub::stringWithFormat_
                              ((ID)&_OBJC_CLASS___NSString,
                               &cf_ParsedNSException_userInfois__insteadofNSDictionary_);
        local_78 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_100ea7c10;
        IVar1 = objc_stub::FUN_100c012c0((ID)&_OBJC_CLASS___NSDictionary,&IStack_70,&local_78,1);
        IVar1 = objc_stub::errorWithDomain_code_userInfo_
                          ((ID)&_OBJC_CLASS___NSError,&cf_io_sentry_SentryCrashReportConverter,2,
                           IVar1);
        *param_5 = IVar1;
      }
    }
    else if (param_5 != (ID *)0x0) {
      _objc_retainAutorelease(local_80);
      bVar2 = 0;
      *param_5 = IVar1;
      goto LAB_100b3da6c;
    }
    bVar2 = 0;
  }
LAB_100b3da6c:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_58) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}



/* Address: 0x100b3dab0 | SentryCrashReportConverter::parseNSException */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryCrashReportConverter::parseNSException(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  ID IVar2;
  ID IVar3;
  cfstringStruct *pcVar4;
  class_t *self;
  
  IVar2 = objc_stub::FUN_100c01f60(param_1);
  IVar2 = objc_stub::objectForKeyedSubscript_(IVar2,&cf_nsexception);
  IVar2 = objc_stub::objectForKeyedSubscript_(IVar2,&cf_reason);
  IVar3 = objc_stub::FUN_100c01f60(param_1);
  if (IVar2 == 0) {
    IVar3 = objc_stub::objectForKeyedSubscript_(IVar3,&cf_reason);
    IVar2 = 0;
    if (IVar3 != 0) {
      IVar2 = objc_stub::FUN_100c01f60(param_1);
      IVar2 = objc_stub::objectForKeyedSubscript_(IVar2,&cf_reason);
    }
  }
  else {
    IVar2 = objc_stub::objectForKeyedSubscript_(IVar3,&cf_nsexception);
    IVar2 = objc_stub::objectForKeyedSubscript_(IVar2,&cf_reason);
  }
  IVar3 = objc_stub::FUN_100c01f60(param_1);
  IVar3 = objc_stub::objectForKeyedSubscript_(IVar3,&cf_nsexception);
  pcVar4 = (cfstringStruct *)objc_stub::objectForKeyedSubscript_(IVar3,&cf_name);
  pcVar1 = &cf_NSException;
  if (pcVar4 != (cfstringStruct *)0x0) {
    pcVar1 = pcVar4;
  }
  self = &objc::class_t::SentryException;
  _objc_alloc();
  IVar2 = objc_stub::FUN_100c051e0((ID)self,IVar2,pcVar1);
  return IVar2;
}



/* Address: 0x100b3dc8c | SentryCrashReportConverter::isStackOverflowThread: */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

bool SentryCrashReportConverter::isStackOverflowThread_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  bool bVar3;
  
  IVar1 = objc_stub::objectForKeyedSubscript_(param_3,&cf_stack);
  IVar2 = objc_stub::class((ID)&_OBJC_CLASS___NSDictionary);
  IVar2 = objc_stub::isKindOfClass_(IVar1,IVar2);
  if ((int)IVar2 == 0) {
    bVar3 = 0;
  }
  else {
    IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_overflow);
    IVar2 = objc_stub::respondsToSelector_(IVar1,"boolValue");
    if ((int)IVar2 == 0) {
      bVar3 = 0;
    }
    else {
      IVar1 = objc_stub::boolValue(IVar1);
      bVar3 = (bool)IVar1;
    }
  }
  return bVar3;
}



/* Address: 0x100b3dd40 | SentryCrashReportConverter::enhanceValueFromNotableAddresses: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryCrashReportConverter::enhanceValueFromNotableAddresses_
               (ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  ID IVar2;
  ID IVar3;
  undefined *self;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  long lVar8;
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
  IVar2 = objc_stub::threads(param_1);
  IVar2 = objc_stub::count(IVar2);
  if ((IVar2 != 0) && (IVar2 = objc_stub::FUN_100c00400(param_1), -1 < (long)IVar2)) {
    IVar2 = objc_stub::FUN_100c00400(param_1);
    IVar3 = objc_stub::threads(param_1);
    IVar3 = objc_stub::count(IVar3);
    if ((long)IVar2 < (long)IVar3) {
      IVar2 = objc_stub::threads(param_1);
      IVar3 = objc_stub::FUN_100c00400(param_1);
      IVar2 = objc_stub::FUN_100c07480(IVar2,IVar3);
      IVar3 = objc_stub::FUN_100c05cc0(param_1,IVar2);
      iVar1 = (int)IVar3;
      if (iVar1 == 0) {
        IVar2 = objc_stub::objectForKeyedSubscript_(IVar2,&cf_notable_addresses);
        self = &_OBJC_CLASS___NSMutableOrderedSet;
        _objc_alloc();
        IVar3 = objc_stub::init((ID)self);
        if (IVar2 != 0) {
          uStack_108 = 0;
          local_110 = 0;
          uStack_f8 = 0;
          uStack_100 = 0;
          lStack_128 = 0;
          local_130 = 0;
          uStack_118 = 0;
          local_120 = (long *)0x0;
          IVar4 = objc_stub::countByEnumeratingWithState_objects_count_
                            (IVar2,&local_130,auStack_f0,0x10);
          if (IVar4 != 0) {
            lVar8 = *local_120;
            do {
              IVar7 = 0;
              do {
                if (*local_120 != lVar8) {
                  _objc_enumerationMutation(IVar2);
                }
                IVar5 = objc_stub::objectForKeyedSubscript_
                                  (IVar2,*(undefined8 *)(lStack_128 + IVar7 * 8));
                IVar6 = objc_stub::objectForKeyedSubscript_(IVar5,&cf_type);
                IVar6 = objc_stub::isEqualToString_(IVar6,&cf_string);
                if (((int)IVar6 != 0) &&
                   (IVar6 = objc_stub::objectForKeyedSubscript_(IVar5,&cf_value), IVar6 != 0)) {
                  IVar6 = objc_stub::objectForKeyedSubscript_(IVar5,&cf_value);
                  IVar6 = objc_stub::FUN_100bff8e0(IVar6,&cf__);
                  IVar6 = objc_stub::count(IVar6);
                  if (IVar6 < 3) {
                    IVar5 = objc_stub::objectForKeyedSubscript_(IVar5,&cf_value);
                    objc_stub::addObject_(IVar3,IVar5);
                  }
                }
                IVar7 = IVar7 + 1;
              } while (IVar4 != IVar7);
              IVar4 = objc_stub::countByEnumeratingWithState_objects_count_
                                (IVar2,&local_130,auStack_f0,0x10);
            } while (IVar4 != 0);
          }
        }
        IVar2 = objc_stub::count(IVar3);
        if (IVar2 != 0) {
          IVar2 = objc_stub::array(IVar3);
          IVar2 = objc_stub::FUN_100c0ef40(IVar2,"localizedCaseInsensitiveCompare:");
          IVar2 = objc_stub::FUN_100bff8a0(IVar2,&cf_>);
          objc_stub::FUN_100c0e840(param_3,IVar2);
        }
      }
      else {
        FUN_100b3a1c0();
        if (iVar1 != 0) {
          FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryCrashReportConverter.m"
                        ,0x28e,&
                               cf_Skippingnotableaddressexceptionvalueenhancementbecausecrashedthreadstack_overflowistrue
                       );
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}



/* Address: 0x100b3e12c | SentryCrashReportConverter::crashInfoMessagesFromBinaryImages */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryCrashReportConverter::crashInfoMessagesFromBinaryImages(ID param_1,SEL param_2)

{
  undefined *self;
  ID self_00;
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID self_01;
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
  self = &_OBJC_CLASS___NSMutableArray;
  _objc_alloc();
  self_00 = objc_stub::init((ID)self);
  IVar1 = objc_stub::FUN_100c07fa0
                    ((ID)&_OBJC_CLASS___NSPredicate,&PTR___NSConcreteGlobalBlock_100f34bc8);
  IVar2 = objc_stub::FUN_100bfe6a0(param_1);
  IVar1 = objc_stub::FUN_100c025a0(IVar2,IVar1);
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (long *)0x0;
  IVar2 = objc_stub::countByEnumeratingWithState_objects_count_(IVar1,&local_130,auStack_f0,0x10);
  if (IVar2 != 0) {
    lVar4 = *local_120;
    do {
      IVar5 = 0;
      do {
        if (*local_120 != lVar4) {
          _objc_enumerationMutation(IVar1);
        }
        self_01 = *(ID *)(lStack_128 + IVar5 * 8);
        IVar3 = objc_stub::objectForKeyedSubscript_(self_01,&cf_crash_info_message);
        if (IVar3 != 0) {
          IVar3 = objc_stub::objectForKeyedSubscript_(self_01,&cf_crash_info_message);
          objc_stub::addObject_(self_00,IVar3);
        }
        IVar3 = objc_stub::objectForKeyedSubscript_(self_01,&cf_crash_info_message2);
        if (IVar3 != 0) {
          IVar3 = objc_stub::objectForKeyedSubscript_(self_01,&cf_crash_info_message2);
          objc_stub::addObject_(self_00,IVar3);
        }
        IVar5 = IVar5 + 1;
      } while (IVar2 != IVar5);
      IVar2 = objc_stub::countByEnumeratingWithState_objects_count_
                        (IVar1,&local_130,auStack_f0,0x10);
    } while (IVar2 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_70) {
    return self_00;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}



/* Address: 0x100b3e348 | FUN_100b3e348 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100b3e348(undefined8 param_1,ID param_2)

{
  ID IVar1;
  
  IVar1 = objc_stub::objectForKeyedSubscript_(param_2,&cf_name);
  IVar1 = objc_stub::containsString_(IVar1,&cf_libswiftCore_dylib);
  return IVar1;
}



/* Address: 0x100b3e398 | SentryCrashReportConverter::extractMechanismOfType: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryCrashReportConverter::extractMechanismOfType_(ID param_1,SEL param_2,ID param_3)

{
  ID self;
  ID IVar1;
  undefined *puVar2;
  ID IVar3;
  ID IVar4;
  class_t *pcVar5;
  cfstringStruct *local_90;
  ID local_88;
  char acStack_7b [19];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  pcVar5 = &objc::class_t::SentryMechanism;
  _objc_alloc();
  self = objc_stub::FUN_100c04fa0((ID)pcVar5,param_3);
  IVar1 = objc_stub::FUN_100c01f60(param_1);
  IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_mach);
  if (IVar1 != 0) {
    IVar1 = objc_stub::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,0);
    objc_stub::FUN_100c0bf40(self,IVar1);
    pcVar5 = &objc::class_t::SentryMechanismContext;
    _objc_alloc();
    IVar1 = objc_stub::init((ID)pcVar5);
    puVar2 = &_OBJC_CLASS___NSMutableDictionary;
    _objc_alloc();
    IVar3 = objc_stub::init((ID)puVar2);
    IVar4 = objc_stub::FUN_100c01f60(param_1);
    IVar4 = objc_stub::objectForKeyedSubscript_(IVar4,&cf_mach);
    IVar4 = objc_stub::objectForKeyedSubscript_(IVar4,&cf_exception_name);
    objc_stub::setValue_forKey_(IVar3,IVar4,&cf_name);
    IVar4 = objc_stub::FUN_100c01f60(param_1);
    IVar4 = objc_stub::objectForKeyedSubscript_(IVar4,&cf_mach);
    IVar4 = objc_stub::objectForKeyedSubscript_(IVar4,&cf_exception);
    objc_stub::setValue_forKey_(IVar3,IVar4,&cf_exception);
    IVar4 = objc_stub::FUN_100c01f60(param_1);
    IVar4 = objc_stub::objectForKeyedSubscript_(IVar4,&cf_mach);
    IVar4 = objc_stub::objectForKeyedSubscript_(IVar4,&cf_subcode);
    objc_stub::setValue_forKey_(IVar3,IVar4,&cf_subcode);
    IVar4 = objc_stub::FUN_100c01f60(param_1);
    IVar4 = objc_stub::objectForKeyedSubscript_(IVar4,&cf_mach);
    IVar4 = objc_stub::objectForKeyedSubscript_(IVar4,&cf_code);
    objc_stub::setValue_forKey_(IVar3,IVar4,&cf_code);
    objc_stub::FUN_100c0c7c0(IVar1,IVar3);
    IVar3 = objc_stub::FUN_100c01f60(param_1);
    IVar3 = objc_stub::objectForKeyedSubscript_(IVar3,&cf_signal);
    if (IVar3 != 0) {
      puVar2 = &_OBJC_CLASS___NSMutableDictionary;
      _objc_alloc();
      IVar3 = objc_stub::init((ID)puVar2);
      IVar4 = objc_stub::FUN_100c01f60(param_1);
      IVar4 = objc_stub::objectForKeyedSubscript_(IVar4,&cf_signal);
      IVar4 = objc_stub::objectForKeyedSubscript_(IVar4,&cf_signal);
      objc_stub::setValue_forKey_(IVar3,IVar4,&cf_number);
      IVar4 = objc_stub::FUN_100c01f60(param_1);
      IVar4 = objc_stub::objectForKeyedSubscript_(IVar4,&cf_signal);
      IVar4 = objc_stub::objectForKeyedSubscript_(IVar4,&cf_code);
      objc_stub::setValue_forKey_(IVar3,IVar4,&cf_code);
      IVar4 = objc_stub::FUN_100c01f60(param_1);
      IVar4 = objc_stub::objectForKeyedSubscript_(IVar4,&cf_signal);
      IVar4 = objc_stub::objectForKeyedSubscript_(IVar4,&cf_code_name);
      objc_stub::setValue_forKey_(IVar3,IVar4,&cf_code_name);
      IVar4 = objc_stub::FUN_100c01f60(param_1);
      IVar4 = objc_stub::objectForKeyedSubscript_(IVar4,&cf_signal);
      IVar4 = objc_stub::objectForKeyedSubscript_(IVar4,&cf_name);
      objc_stub::setValue_forKey_(IVar3,IVar4,&cf_name);
      objc_stub::FUN_100c0db40(IVar1,IVar3);
    }
    objc_stub::FUN_100c0cae0(self,IVar1);
    IVar1 = objc_stub::FUN_100c01f60(param_1);
    IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_address);
    if (IVar1 != 0) {
      IVar1 = objc_stub::FUN_100c01f60(param_1);
      IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_address);
      IVar1 = objc_stub::integerValue(IVar1);
      if (0 < (long)IVar1) {
        local_90 = &cf_relevant_address;
        IVar1 = objc_stub::FUN_100c01f60(param_1);
        IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_address);
        objc_stub::unsignedLongLongValue(IVar1);
        _snprintf(acStack_7b,0x13,"0x%016llx");
        local_88 = objc_stub::stringWithCString_encoding_((ID)&_OBJC_CLASS___NSString,acStack_7b,1);
        IVar1 = objc_stub::FUN_100c012c0((ID)&_OBJC_CLASS___NSDictionary,&local_88,&local_90,1);
        objc_stub::setData_(self,IVar1);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return self;
}



/* Address: 0x100b3ea20 | SentryCrashReportConverter::convertThreads */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryCrashReportConverter::convertThreads(ID param_1,SEL param_2)

{
  undefined *self;
  ID self_00;
  ID IVar1;
  ID IVar2;
  long lVar3;
  
  self = &_OBJC_CLASS___NSMutableArray;
  _objc_alloc();
  self_00 = objc_stub::init((ID)self);
  IVar1 = objc_stub::threads(param_1);
  IVar1 = objc_stub::count(IVar1);
  if (0 < (long)IVar1) {
    lVar3 = 0;
    do {
      IVar1 = objc_stub::FUN_100c10460(param_1,lVar3);
      if ((IVar1 != 0) && (IVar2 = objc_stub::FUN_100c0f200(IVar1), IVar2 != 0)) {
        objc_stub::addObject_(self_00,IVar1);
      }
      lVar3 = lVar3 + 1;
      IVar1 = objc_stub::threads(param_1);
      IVar1 = objc_stub::count(IVar1);
    } while (lVar3 < (long)IVar1);
  }
  return self_00;
}



/* Address: 0x100b3eb10 | SentryCrashReportConverter::userContext */

/* Function Stack Size: 0x10 bytes */

ID SentryCrashReportConverter::userContext(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 8);
}



/* Address: 0x100b3eb18 | SentryCrashReportConverter::setUserContext: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryCrashReportConverter::setUserContext_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 8) = param_3;
  return;
}



/* Address: 0x100b3eb24 | SentryCrashReportConverter::report */

/* Function Stack Size: 0x10 bytes */

ID SentryCrashReportConverter::report(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x10);
}



/* Address: 0x100b3eb2c | SentryCrashReportConverter::setReport: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryCrashReportConverter::setReport_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x10) = param_3;
  return;
}



/* Address: 0x100b3eb38 | SentryCrashReportConverter::crashedThreadIndex */

/* Function Stack Size: 0x10 bytes */

long_long SentryCrashReportConverter::crashedThreadIndex(ID param_1,SEL param_2)

{
  return *(long_long *)(param_1 + 0x18);
}



/* Address: 0x100b3eb40 | SentryCrashReportConverter::setCrashedThreadIndex: */

/* Function Stack Size: 0x18 bytes */

void SentryCrashReportConverter::setCrashedThreadIndex_(ID param_1,SEL param_2,long_long param_3)

{
  *(long_long *)(param_1 + 0x18) = param_3;
  return;
}



/* Address: 0x100b3eb48 | SentryCrashReportConverter::exceptionContext */

/* Function Stack Size: 0x10 bytes */

ID SentryCrashReportConverter::exceptionContext(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x20);
}



/* Address: 0x100b3eb50 | SentryCrashReportConverter::setExceptionContext: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryCrashReportConverter::setExceptionContext_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x20) = param_3;
  return;
}



/* Address: 0x100b3eb5c | SentryCrashReportConverter::binaryImages */

/* Function Stack Size: 0x10 bytes */

ID SentryCrashReportConverter::binaryImages(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x28);
}



/* Address: 0x100b3eb64 | SentryCrashReportConverter::setBinaryImages: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryCrashReportConverter::setBinaryImages_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x28) = param_3;
  return;
}



/* Address: 0x100b3eb70 | SentryCrashReportConverter::threads */

/* Function Stack Size: 0x10 bytes */

ID SentryCrashReportConverter::threads(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x30);
}



/* Address: 0x100b3eb78 | SentryCrashReportConverter::setThreads: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryCrashReportConverter::setThreads_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x30) = param_3;
  return;
}



/* Address: 0x100b3eb84 | SentryCrashReportConverter::systemContext */

/* Function Stack Size: 0x10 bytes */

ID SentryCrashReportConverter::systemContext(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x38);
}



/* Address: 0x100b3eb8c | SentryCrashReportConverter::setSystemContext: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryCrashReportConverter::setSystemContext_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x38) = param_3;
  return;
}



/* Address: 0x100b3eb98 | SentryCrashReportConverter::applicationStats */

/* Function Stack Size: 0x10 bytes */

ID SentryCrashReportConverter::applicationStats(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x40);
}



/* Address: 0x100b3eba0 | SentryCrashReportConverter::setApplicationStats: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryCrashReportConverter::setApplicationStats_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x40) = param_3;
  return;
}



/* Address: 0x100b3ebac | SentryCrashReportConverter::diagnosis */

/* Function Stack Size: 0x10 bytes */

ID SentryCrashReportConverter::diagnosis(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x48);
}



/* Address: 0x100b3ebb4 | SentryCrashReportConverter::setDiagnosis: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryCrashReportConverter::setDiagnosis_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x48) = param_3;
  return;
}



/* Address: 0x100b3ebc0 | SentryCrashReportConverter::inAppLogic */

/* Function Stack Size: 0x10 bytes */

ID SentryCrashReportConverter::inAppLogic(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x50);
}



/* Address: 0x100b3ebc8 | SentryCrashReportConverter::setInAppLogic: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryCrashReportConverter::setInAppLogic_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x50) = param_3;
  return;
}



/* Address: 0x100b3ebd4 | SentryCrashReportConverter::.cxx_destruct */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryCrashReportConverter::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



/* Address: 0x100b3ec58 | FUN_100b3ec58 */

void FUN_100b3ec58(long param_1)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  undefined **ppuVar4;
  long in_xzr;
  pthread_attr_t pStack_88;
  long local_48;
  
  bVar1 = DAT_1010e2ea0;
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  LOAcquire();
  DAT_1010e2ea0 = 1;
  LORelease();
  if ((bVar1 & 1) == 0) {
    DAT_1010e2ea4 = (undefined4)param_1;
    DAT_1010e2ea8 = 0;
    DAT_1010e2eb0 = 0;
    DAT_1010e2eb1 = 0;
    DAT_1010e2eb4 = 4;
    FUN_100b3eddc();
    if (param_1 != 0) {
      DAT_1010e2eb0 = 1;
    }
    DAT_1010e2eb8 = param_1;
    _pthread_attr_init(&pStack_88);
    _pthread_attr_setdetachstate(&pStack_88,1);
    iVar3 = _pthread_create((pthread_t *)&DAT_1010e2ec0,&pStack_88,(void **)FUN_100b3eff0,
                            "SentryCrash Cached Data Monitor");
    if (iVar3 != 0) {
      ppuVar4 = &PTR___tlv_bootstrap_1010492f8;
      (*(code *)PTR___tlv_bootstrap_1010492f8)();
      iVar3 = _strerror_r(iVar3,(char *)ppuVar4,0x400);
      if (iVar3 != 0) {
        _snprintf((char *)ppuVar4,0x400,"Unknown error %d");
      }
      FUN_100b5e930("ERROR",
                    "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/SentryCrashCachedData.c"
                    ,0x106,"pthread_create: %s");
      LOAcquire();
      LORelease();
      lVar2 = in_xzr;
      FUN_100b3f0f0(DAT_1010e2eb8);
      DAT_1010e2eb8 = lVar2;
      DAT_1010e2eb0 = 0;
      DAT_1010e2ea0 = 0;
    }
    _pthread_attr_destroy(&pStack_88);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100b3eddc | FUN_100b3eddc */

undefined8 * FUN_100b3eddc(void)

{
  task_t target_task;
  uint uVar1;
  kern_return_t error_value;
  int iVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  pthread_t p_Var6;
  char *pcVar7;
  vm_size_t size;
  undefined8 *puVar8;
  ulong uVar9;
  thread_act_array_t local_450;
  uint local_444;
  char local_440 [1000];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_100ea82f0;
  target_task = *(task_t *)PTR__mach_task_self__100ea8778;
  error_value = _task_threads(target_task,&local_450,&local_444);
  if (error_value == 0) {
    puVar8 = _calloc(1,0x20);
    uVar1 = local_444;
    if (puVar8 == (undefined8 *)0x0) {
      FUN_100b5e930("ERROR",
                    "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/SentryCrashCachedData.c"
                    ,0x7b,"Failed to allocate thread cache");
    }
    else {
      uVar9 = (ulong)local_444;
      *(uint *)(puVar8 + 3) = local_444;
      pvVar3 = _calloc(uVar9,8);
      *puVar8 = pvVar3;
      pvVar4 = _calloc(uVar9,8);
      puVar8[1] = pvVar4;
      pvVar5 = _calloc(uVar9,8);
      puVar8[2] = pvVar5;
      if ((pvVar3 == (void *)0x0 || pvVar4 == (void *)0x0) || pvVar5 == (void *)0x0) {
        FUN_100b5e930("ERROR",
                      "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/SentryCrashCachedData.c"
                      ,0x89,"Failed to allocate thread cache arrays");
        FUN_100b3f0f0(puVar8);
        puVar8 = (undefined8 *)0x0;
      }
      else if (uVar1 != 0) {
        uVar9 = 0;
        do {
          uVar1 = local_450[uVar9];
          p_Var6 = _pthread_from_mach_thread_np(uVar1);
          *(ulong *)((long)pvVar3 + uVar9 * 8) = (ulong)uVar1;
          *(pthread_t *)((long)pvVar4 + uVar9 * 8) = p_Var6;
          if ((p_Var6 != (pthread_t)0x0) &&
             (iVar2 = _pthread_getname_np(p_Var6,local_440,1000), iVar2 == 0 && local_440[0] != '\0'
             )) {
            pcVar7 = _strdup(local_440);
            *(char **)((long)pvVar5 + uVar9 * 8) = pcVar7;
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < local_444);
      }
    }
    if (local_444 == 0) {
      size = 0;
    }
    else {
      uVar9 = 0;
      do {
        _mach_port_deallocate(target_task,local_450[uVar9]);
        uVar9 = uVar9 + 1;
      } while (uVar9 < local_444);
      size = (ulong)local_444 << 2;
    }
    _vm_deallocate(target_task,(vm_address_t)local_450,size);
  }
  else {
    _mach_error_string(error_value);
    FUN_100b5e930("ERROR",
                  "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/SentryCrashCachedData.c"
                  ,0x71,"task_threads: %s");
    puVar8 = (undefined8 *)0x0;
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_58) {
    return puVar8;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100b3eff0 | FUN_100b3eff0 */

undefined8 FUN_100b3eff0(void)

{
  int iVar1;
  uint uVar2;
  undefined4 extraout_var;
  long lVar4;
  undefined4 extraout_var_00;
  long lVar3;
  
  iVar1 = _usleep(1);
  lVar3 = CONCAT44(extraout_var,iVar1);
  do {
    if ((DAT_1010e2eb1 & 1) != 0) {
      return 0;
    }
    FUN_100b3eddc();
    if (lVar3 != 0) {
      if (DAT_1010e2eb8 == 0) {
        lVar4 = lVar3;
        if ((DAT_1010e2eb0 & 1) == 0) {
          DAT_1010e2eb0 = 1;
          DAT_1010e2eb8 = lVar3;
          goto LAB_100b3f094;
        }
      }
      else {
        DAT_1010e2eb0 = 1;
        lVar4 = DAT_1010e2eb8;
        DAT_1010e2eb8 = lVar3;
      }
      FUN_100b3f0f0();
      lVar3 = lVar4;
    }
LAB_100b3f094:
    iVar1 = DAT_1010e2ea4;
    if (DAT_1010e2eb4 < 1) goto joined_r0x000100b3f0b0;
    iVar1 = 1;
    DAT_1010e2eb4 = DAT_1010e2eb4 + -1;
    do {
      if ((DAT_1010e2eb1 & 1) != 0) break;
      uVar2 = _sleep(1);
      lVar3 = CONCAT44(extraout_var_00,uVar2);
      iVar1 = iVar1 + -1;
joined_r0x000100b3f0b0:
    } while (iVar1 != 0);
  } while( true );
}



/* Address: 0x100b3f0f0 | FUN_100b3f0f0 */

void FUN_100b3f0f0(undefined8 *param_1)

{
  void *pvVar1;
  int iVar2;
  long lVar3;
  
  if (param_1 != (undefined8 *)0x0) {
    pvVar1 = (void *)param_1[2];
    if (pvVar1 != (void *)0x0) {
      iVar2 = *(int *)(param_1 + 3);
      if (0 < iVar2) {
        lVar3 = 0;
        do {
          pvVar1 = *(void **)(param_1[2] + lVar3 * 8);
          if (pvVar1 != (void *)0x0) {
            _free(pvVar1);
            iVar2 = *(int *)(param_1 + 3);
          }
          lVar3 = lVar3 + 1;
        } while (lVar3 < iVar2);
        pvVar1 = (void *)param_1[2];
      }
      _free(pvVar1);
    }
    if ((void *)*param_1 != (void *)0x0) {
      _free((void *)*param_1);
    }
    if ((void *)param_1[1] != (void *)0x0) {
      _free((void *)param_1[1]);
    }
    _free(param_1);
    return;
  }
  return;
}


