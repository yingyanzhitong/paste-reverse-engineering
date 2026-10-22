/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100b4f3ec | FUN_100b4f3ec */

bool FUN_100b4f3ec(ID param_1)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100c098c0(param_1);
  return IVar1 != 1;
}



/* Address: 0x100b4f408 | FUN_100b4f408 */

void FUN_100b4f408(ID param_1,undefined8 param_2)

{
  objc_stub::dispatchAsyncWithBlock_(param_1,param_2);
  return;
}



/* Address: 0x100b4f410 | FUN_100b4f410 */

void FUN_100b4f410(ID param_1,undefined8 param_2)

{
  objc_stub::FUN_100c01380(param_1,param_2);
  return;
}



/* Address: 0x100b4f418 | FUN_100b4f418 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b4f418(undefined8 param_1)

{
  ID IVar1;
  
  IVar1 = objc_stub::sharedInstance((ID)&objc::class_t::_TtC6Sentry25SentryDependencyContainer);
  IVar1 = objc_stub::FUN_100c071c0(IVar1);
  objc_stub::FUN_100c07ee0(IVar1,param_1);
  return 0;
}



/* Address: 0x100b4f488 | FUN_100b4f488 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID FUN_100b4f488(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ID IVar1;
  undefined *local_68;
  undefined8 local_60;
  code *local_58;
  undefined *puStack_50;
  undefined8 local_48;
  
  IVar1 = objc_stub::sharedInstance((ID)&objc::class_t::_TtC6Sentry25SentryDependencyContainer);
  IVar1 = objc_stub::FUN_100c106c0(IVar1);
  local_68 = PTR___NSConcreteStackBlock_100ea82a0;
  local_60 = 0xc2000000;
  local_58 = FUN_100b4f574;
  puStack_50 = &DAT_100f34e90;
  local_48 = param_3;
  IVar1 = objc_stub::scheduledTimerWithTimeInterval_repeats_block_(IVar1,param_1,param_2,&local_68);
  return IVar1;
}



/* Address: 0x100b4f574 | FUN_100b4f574 */

void FUN_100b4f574(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100b4f57c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Address: 0x100b4f580 | FUN_100b4f580 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID FUN_100b4f580(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5)

{
  ID IVar1;
  
  IVar1 = objc_stub::sharedInstance((ID)&objc::class_t::_TtC6Sentry25SentryDependencyContainer);
  IVar1 = objc_stub::FUN_100c106c0(IVar1);
  IVar1 = objc_stub::scheduledTimerWithTimeInterval_target_selector_userInfo_repeats_
                    (IVar1,param_1,param_2,param_3,param_4,param_5);
  return IVar1;
}



/* Address: 0x100b4f64c | FUN_100b4f64c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b4f64c(ID param_1)

{
  int iVar1;
  ID IVar2;
  class_t *pcVar3;
  ID IVar4;
  
  IVar2 = objc_stub::FUN_100bffa20(param_1);
  iVar1 = 0;
  if (IVar2 == 0) {
    FUN_100b3a1c0();
    if (iVar1 != 0) {
      FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/Profiling/SentryProfilingSwiftHelpers.m"
                    ,0xd6,&cf_ContinuousprofilingV2configurationnotsetbySDKconsumer_nothingtodohere_
                   );
    }
  }
  else {
    pcVar3 = &objc::class_t::_TtC6Sentry20SentryProfileOptions;
    _objc_alloc();
    IVar2 = objc_stub::init((ID)pcVar3);
    objc_stub::FUN_100c0d380(param_1,IVar2);
    IVar4 = objc_stub::FUN_100bffa20(param_1);
    (**(code **)(IVar4 + 0x10))(IVar4,IVar2);
    IVar4 = objc_stub::lifecycle(IVar2);
    if ((IVar4 == 1) && (IVar4 = objc_stub::FUN_100c05d60(param_1), (IVar4 & 1) == 0)) {
      FUN_100b3a1e0();
      if ((int)IVar4 != 0) {
        FUN_100b3a280("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/Profiling/SentryProfilingSwiftHelpers.m"
                      ,0xe0,&cf_Tracingmustbeenabledinordertoconfigureprofilingwithtracelifecycle_);
      }
    }
    else {
      FUN_100b43c58();
      if (IVar4 == 0) {
        pcVar3 = &objc::class_t::SentryProfileConfiguration;
        _objc_alloc();
        objc_stub::FUN_100c04920((ID)pcVar3,IVar2);
        FUN_100b43d24();
      }
      iVar1 = 0;
      FUN_100b43d88();
      FUN_100b3a1c0();
      if (iVar1 != 0) {
        objc_stub::profiling(param_1);
        objc_stub::lifecycle(IVar2);
        objc_stub::FUN_100c0a2e0(IVar2);
        objc_stub::FUN_100c08320(IVar2);
        FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/Profiling/SentryProfilingSwiftHelpers.m"
                      ,0xf4,&
                            cf_Configuredprofilingoptions_<__:_lifecycle:__sessionSampleRate:__2fprofileAppStarts:___
                     );
      }
    }
  }
  return 0;
}



/* Address: 0x100b4f828 | FUN_100b4f828 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b4f828(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ID self;
  undefined *local_68;
  undefined8 local_60;
  code *local_58;
  undefined *puStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  uVar1 = param_2;
  FUN_100b43c58();
  FUN_100b4f64c(param_1);
  self = objc_stub::dispatchQueueWrapper((ID)&objc::class_t::SentryDependencyContainerSwiftHelper);
  local_68 = PTR___NSConcreteStackBlock_100ea82a0;
  local_60 = 0xc2000000;
  local_58 = FUN_100b4f934;
  puStack_50 = &DAT_100f348d8;
  local_48 = uVar1;
  local_40 = param_2;
  local_38 = param_1;
  objc_stub::dispatchAsyncWithBlock_(self,&local_68);
  return 0;
}



/* Address: 0x100b4f934 | FUN_100b4f934 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100b4f934(long param_1)

{
  int iVar1;
  ID IVar2;
  
  IVar2 = objc_stub::isProfilingThisLaunch(*(ID *)(param_1 + 0x20));
  if ((int)IVar2 != 0) {
    IVar2 = objc_stub::profileOptions(*(ID *)(param_1 + 0x20));
    if (IVar2 != 0) {
      IVar2 = objc_stub::profileOptions(*(ID *)(param_1 + 0x20));
      IVar2 = objc_stub::lifecycle(IVar2);
      iVar1 = 0;
      if (IVar2 != 1) {
        FUN_100b3a1c0();
        if (iVar1 != 0) {
          FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/Profiling/SentryProfilingSwiftHelpers.m"
                        ,0x119,&
                               cf_Continuousmanuallaunchprofilesaren_tstoppedoncallstoSentrySDK_start_notstoppingprofile_
                       );
        }
        goto LAB_100b4f9c4;
      }
    }
    iVar1 = 0;
    FUN_100b3a1c0();
    if (iVar1 != 0) {
      FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/Profiling/SentryProfilingSwiftHelpers.m"
                    ,0x120,&
                           cf_StoppinglaunchprofileinSentrySDK_startbecausethereisnotimetodisplaytrackertostopit_
                   );
    }
    FUN_100b0dde4(*(undefined8 *)(param_1 + 0x28));
  }
LAB_100b4f9c4:
  FUN_100b0da88(*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Address: 0x100b4f9fc | SentryGeo::initWithDictionary: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryGeo::initWithDictionary_(ID param_1,SEL param_2,ID param_3)

{
  ID self;
  ID IVar1;
  ID IVar2;
  objc_super local_50;
  
  local_50.super_class = &objc::class_t::SentryGeo;
  local_50.receiver = param_1;
  self = _objc_msgSendSuper2(&local_50,"init");
  if (self != 0) {
    IVar1 = objc_stub::objectForKeyedSubscript_(param_3,&cf_city);
    IVar2 = objc_stub::class((ID)&_OBJC_CLASS___NSString);
    IVar2 = objc_stub::isKindOfClass_(IVar1,IVar2);
    if ((int)IVar2 != 0) {
      objc_stub::FUN_100c0ade0(self,IVar1);
    }
    IVar1 = objc_stub::objectForKeyedSubscript_(param_3,&cf_country_code);
    IVar2 = objc_stub::class((ID)&_OBJC_CLASS___NSString);
    IVar2 = objc_stub::isKindOfClass_(IVar1,IVar2);
    if ((int)IVar2 != 0) {
      objc_stub::FUN_100c0b180(self,IVar1);
    }
    IVar1 = objc_stub::objectForKeyedSubscript_(param_3,&cf_region);
    IVar2 = objc_stub::class((ID)&_OBJC_CLASS___NSString);
    IVar2 = objc_stub::isKindOfClass_(IVar1,IVar2);
    if ((int)IVar2 != 0) {
      objc_stub::FUN_100c0d5c0(self,IVar1);
    }
  }
  return self;
}



/* Address: 0x100b4fb48 | SentryGeo::copyWithZone: */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryGeo::copyWithZone_(ID param_1,SEL param_2,_NSZone *param_3)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = objc_stub::class(param_1);
  IVar1 = objc_stub::FUN_100bfdb40(IVar1,param_3);
  IVar1 = objc_stub::init(IVar1);
  if (IVar1 != 0) {
    IVar2 = objc_stub::FUN_100bff300(param_1);
    objc_stub::FUN_100c0ade0(IVar1,IVar2);
    IVar2 = objc_stub::FUN_100c001a0(param_1);
    objc_stub::FUN_100c0b180(IVar1,IVar2);
    IVar2 = objc_stub::FUN_100c08c00(param_1);
    objc_stub::FUN_100c0d5c0(IVar1,IVar2);
  }
  return IVar1;
}



/* Address: 0x100b4fc04 | SentryGeo::serialize */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryGeo::serialize(ID param_1,SEL param_2)

{
  undefined *self;
  ID self_00;
  ID IVar1;
  
  self = &_OBJC_CLASS___NSMutableDictionary;
  _objc_alloc();
  self_00 = objc_stub::init((ID)self);
  IVar1 = objc_stub::FUN_100bff300(param_1);
  if (IVar1 != 0) {
    IVar1 = objc_stub::FUN_100bff300(param_1);
    objc_stub::setValue_forKey_(self_00,IVar1,&cf_city);
  }
  IVar1 = objc_stub::FUN_100c001a0(param_1);
  if (IVar1 != 0) {
    IVar1 = objc_stub::FUN_100c001a0(param_1);
    objc_stub::setValue_forKey_(self_00,IVar1,&cf_country_code);
  }
  IVar1 = objc_stub::FUN_100c08c00(param_1);
  if (IVar1 != 0) {
    IVar1 = objc_stub::FUN_100c08c00(param_1);
    objc_stub::setValue_forKey_(self_00,IVar1,&cf_region);
  }
  return self_00;
}



/* Address: 0x100b4fd24 | SentryGeo::isEqual: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

bool SentryGeo::isEqual_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  bool bVar2;
  
  if (param_3 == param_1) {
    bVar2 = 1;
  }
  else {
    if (param_3 != 0) {
      IVar1 = objc_stub::class((ID)&objc::class_t::SentryGeo);
      IVar1 = objc_stub::isKindOfClass_(param_3,IVar1);
      if ((int)IVar1 != 0) {
        IVar1 = objc_stub::FUN_100c05820(param_1,param_3);
        return (bool)IVar1;
      }
    }
    bVar2 = 0;
  }
  return bVar2;
}



/* Address: 0x100b4fda0 | SentryGeo::isEqualToGeo: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

bool SentryGeo::isEqualToGeo_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  bool bVar3;
  
  if (param_1 == param_3) {
    bVar3 = 1;
  }
  else if (param_3 == 0) {
    bVar3 = 0;
  }
  else {
    IVar1 = objc_stub::FUN_100bff300(param_3);
    IVar2 = objc_stub::FUN_100bff300(param_1);
    if (IVar2 != IVar1) {
      IVar2 = objc_stub::FUN_100bff300(param_1);
      IVar1 = objc_stub::isEqualToString_(IVar2,IVar1);
      if ((int)IVar1 == 0) {
        return 0;
      }
    }
    IVar1 = objc_stub::FUN_100c001a0(param_3);
    IVar2 = objc_stub::FUN_100c001a0(param_1);
    if (IVar2 != IVar1) {
      IVar2 = objc_stub::FUN_100c001a0(param_1);
      IVar1 = objc_stub::isEqualToString_(IVar2,IVar1);
      if ((int)IVar1 == 0) {
        return 0;
      }
    }
    IVar1 = objc_stub::FUN_100c08c00(param_3);
    IVar2 = objc_stub::FUN_100c08c00(param_1);
    if (IVar2 == IVar1) {
      bVar3 = 1;
    }
    else {
      IVar2 = objc_stub::FUN_100c08c00(param_1);
      IVar1 = objc_stub::isEqualToString_(IVar2,IVar1);
      bVar3 = (bool)IVar1;
    }
  }
  return bVar3;
}



/* Address: 0x100b4ff70 | SentryGeo::hash */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

unsigned_long_long SentryGeo::hash(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  
  IVar1 = objc_stub::FUN_100bff300(param_1);
  IVar1 = objc_stub::FUN_100c033c0(IVar1);
  IVar2 = objc_stub::FUN_100c001a0(param_1);
  IVar2 = objc_stub::FUN_100c033c0(IVar2);
  IVar3 = objc_stub::FUN_100c08c00(param_1);
  IVar3 = objc_stub::FUN_100c033c0(IVar3);
  return IVar3 + (IVar2 + IVar1 * 0x17) * 0x17 + 0x327f7;
}



/* Address: 0x100b50008 | SentryGeo::city */

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryGeo::city(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 8);
}



/* Address: 0x100b50014 | SentryGeo::setCity: */

/* WARNING: Function: _objc_setProperty_atomic_copy replaced with injection: _objc_setProperty_fixup
    */
/* Function Stack Size: 0x18 bytes */

void SentryGeo::setCity_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 8) = param_3;
  return;
}



/* Address: 0x100b5001c | SentryGeo::countryCode */

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryGeo::countryCode(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x10);
}



/* Address: 0x100b50028 | SentryGeo::setCountryCode: */

/* WARNING: Function: _objc_setProperty_atomic_copy replaced with injection: _objc_setProperty_fixup
    */
/* Function Stack Size: 0x18 bytes */

void SentryGeo::setCountryCode_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x10) = param_3;
  return;
}



/* Address: 0x100b50030 | SentryGeo::region */

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryGeo::region(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x18);
}



/* Address: 0x100b5003c | SentryGeo::setRegion: */

/* WARNING: Function: _objc_setProperty_atomic_copy replaced with injection: _objc_setProperty_fixup
    */
/* Function Stack Size: 0x18 bytes */

void SentryGeo::setRegion_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x18) = param_3;
  return;
}



/* Address: 0x100b50044 | SentryGeo::.cxx_destruct */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryGeo::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



/* Address: 0x100b50080 | SentryUser::initWithDictionary: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryUser::initWithDictionary_(ID param_1,SEL param_2,ID param_3)

{
  ID self;
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  class_t *self_00;
  ID self_01;
  ID IVar7;
  long lVar8;
  uint uVar9;
  undefined8 local_140;
  long lStack_138;
  long *local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  objc_super local_100;
  undefined1 auStack_f0 [128];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  local_100.super_class = &objc::class_t::SentryUser;
  local_100.receiver = param_1;
  self = _objc_msgSendSuper2(&local_100,"init");
  if (self != 0) {
    IVar1 = objc_stub::dictionary((ID)&_OBJC_CLASS___NSMutableDictionary);
    lStack_138 = 0;
    local_140 = 0;
    uStack_128 = 0;
    local_130 = (long *)0x0;
    uStack_118 = 0;
    local_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    IVar2 = objc_stub::countByEnumeratingWithState_objects_count_
                      (param_3,&local_140,auStack_f0,0x10);
    if (IVar2 != 0) {
      lVar8 = *local_130;
      do {
        IVar7 = 0;
        do {
          if (*local_130 != lVar8) {
            _objc_enumerationMutation(param_3);
          }
          self_01 = *(ID *)(lStack_138 + IVar7 * 8);
          IVar3 = objc_stub::FUN_100c112a0(param_3,self_01);
          if (IVar3 != 0) {
            IVar4 = objc_stub::class((ID)&_OBJC_CLASS___NSString);
            IVar4 = objc_stub::isKindOfClass_(IVar3,IVar4);
            IVar5 = objc_stub::class((ID)&_OBJC_CLASS___NSDictionary);
            IVar5 = objc_stub::isKindOfClass_(IVar3,IVar5);
            IVar6 = objc_stub::isEqualToString_(self_01,&cf_id);
            uVar9 = (uint)IVar4;
            if ((int)IVar6 == 0 || uVar9 == 0) {
              IVar4 = objc_stub::isEqualToString_(self_01,&cf_email);
              if (((uint)IVar4 & uVar9) == 1) {
                objc_stub::FUN_100c0b800(self,IVar3);
              }
              else {
                IVar4 = objc_stub::isEqualToString_(self_01,&cf_username);
                if (((uint)IVar4 & uVar9) == 1) {
                  objc_stub::FUN_100c0e7c0(self,IVar3);
                }
                else {
                  IVar4 = objc_stub::isEqualToString_(self_01,&cf_ip_address);
                  if (((uint)IVar4 & uVar9) == 1) {
                    objc_stub::FUN_100c0c420(self,IVar3);
                  }
                  else {
                    IVar4 = objc_stub::isEqualToString_(self_01,&cf_data);
                    if (((uint)IVar4 & (uint)IVar5) == 1) {
                      objc_stub::setData_(self,IVar3);
                    }
                    else {
                      IVar4 = objc_stub::isEqualToString_(self_01,&cf_geo);
                      if (((uint)IVar4 & (uint)IVar5) == 1) {
                        self_00 = &objc::class_t::SentryGeo;
                        _objc_alloc();
                        IVar3 = objc_stub::initWithDictionary_((ID)self_00,IVar3);
                        objc_stub::FUN_100c0bec0(self,IVar3);
                      }
                      else {
                        objc_stub::setObject_forKeyedSubscript_(IVar1,IVar3,self_01);
                      }
                    }
                  }
                }
              }
            }
            else {
              objc_stub::FUN_100c0e720(self,IVar3);
            }
          }
          IVar7 = IVar7 + 1;
        } while (IVar2 != IVar7);
        IVar2 = objc_stub::countByEnumeratingWithState_objects_count_
                          (param_3,&local_140,auStack_f0,0x10);
      } while (IVar2 != 0);
    }
    IVar2 = objc_stub::count(IVar1);
    if (IVar2 != 0) {
      IVar1 = objc_stub::copy(IVar1);
      objc_stub::FUN_100c0e6a0(self,IVar1);
    }
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_70) {
    return self;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}



/* Address: 0x100b503a4 | SentryUser::initWithUserId: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryUser::initWithUserId_(ID param_1,SEL param_2,ID param_3)

{
  ID self;
  objc_super local_30;
  
  local_30.super_class = &objc::class_t::SentryUser;
  local_30.receiver = param_1;
  self = _objc_msgSendSuper2(&local_30,"init");
  if (self != 0) {
    objc_stub::FUN_100c0e720(self,param_3);
  }
  return self;
}



/* Address: 0x100b50410 | SentryUser::init */

/* Function Stack Size: 0x10 bytes */

ID SentryUser::init(ID param_1,SEL param_2)

{
  ID IVar1;
  objc_super local_20;
  
  local_20.super_class = &objc::class_t::SentryUser;
  local_20.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_20,"init");
  return IVar1;
}



/* Address: 0x100b50444 | SentryUser::copyWithZone: */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryUser::copyWithZone_(ID param_1,SEL param_2,_NSZone *param_3)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = objc_stub::FUN_100bfdb40((ID)&objc::class_t::SentryUser);
  IVar1 = objc_stub::init(IVar1);
  if (IVar1 != 0) {
    IVar2 = objc_stub::FUN_100c110c0(param_1);
    objc_stub::FUN_100c0e720(IVar1,IVar2);
    IVar2 = objc_stub::FUN_100c017e0(param_1);
    objc_stub::FUN_100c0b800(IVar1,IVar2);
    IVar2 = objc_stub::FUN_100c111a0(param_1);
    objc_stub::FUN_100c0e7c0(IVar1,IVar2);
    IVar2 = objc_stub::FUN_100c055e0(param_1);
    objc_stub::FUN_100c0c420(IVar1,IVar2);
    IVar2 = objc_stub::name(param_1);
    objc_stub::setName_(IVar1,IVar2);
    IVar2 = objc_stub::FUN_100c02c00(param_1);
    IVar2 = objc_stub::copy(IVar2);
    objc_stub::FUN_100c0bec0(IVar1,IVar2);
    IVar2 = objc_stub::data(param_1);
    IVar2 = objc_stub::copy(IVar2);
    objc_stub::setData_(IVar1,IVar2);
    IVar2 = objc_stub::FUN_100c10e00(param_1);
    IVar2 = objc_stub::copy(IVar2);
    objc_stub::FUN_100c0e6a0(IVar1,IVar2);
  }
  return IVar1;
}



/* Address: 0x100b505f4 | SentryUser::serialize */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryUser::serialize(ID param_1,SEL param_2)

{
  undefined *self;
  ID self_00;
  ID IVar1;
  ID IVar2;
  ID IVar3;
  undefined8 uVar4;
  long lVar5;
  ID IVar6;
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
  self = &_OBJC_CLASS___NSMutableDictionary;
  _objc_alloc();
  self_00 = objc_stub::init((ID)self);
  IVar1 = objc_stub::FUN_100c110c0(param_1);
  objc_stub::setValue_forKey_(self_00,IVar1,&cf_id);
  IVar1 = objc_stub::FUN_100c017e0(param_1);
  objc_stub::setValue_forKey_(self_00,IVar1,&cf_email);
  IVar1 = objc_stub::FUN_100c111a0(param_1);
  objc_stub::setValue_forKey_(self_00,IVar1,&cf_username);
  IVar1 = objc_stub::FUN_100c055e0(param_1);
  objc_stub::setValue_forKey_(self_00,IVar1,&cf_ip_address);
  IVar1 = objc_stub::name(param_1);
  objc_stub::setValue_forKey_(self_00,IVar1,&cf_name);
  IVar1 = objc_stub::FUN_100c02c00(param_1);
  IVar1 = objc_stub::serialize(IVar1);
  objc_stub::setValue_forKey_(self_00,IVar1,&cf_geo);
  IVar1 = objc_stub::data(param_1);
  FUN_100bcfb78(IVar1);
  objc_stub::setValue_forKey_(self_00,IVar1,&cf_data);
  IVar1 = objc_stub::FUN_100c10e00(param_1);
  if (IVar1 != 0) {
    uStack_f8 = 0;
    local_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    lStack_118 = 0;
    local_120 = 0;
    uStack_108 = 0;
    local_110 = (long *)0x0;
    IVar2 = objc_stub::countByEnumeratingWithState_objects_count_(IVar1,&local_120,auStack_d8,0x10);
    if (IVar2 != 0) {
      lVar5 = *local_110;
      do {
        IVar6 = 0;
        do {
          if (*local_110 != lVar5) {
            _objc_enumerationMutation(IVar1);
          }
          uVar4 = *(undefined8 *)(lStack_118 + IVar6 * 8);
          IVar3 = objc_stub::objectForKeyedSubscript_(IVar1,uVar4);
          objc_stub::setValue_forKey_(self_00,IVar3,uVar4);
          IVar6 = IVar6 + 1;
        } while (IVar2 != IVar6);
        IVar2 = objc_stub::countByEnumeratingWithState_objects_count_
                          (IVar1,&local_120,auStack_d8,0x10);
      } while (IVar2 != 0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_58) {
    return self_00;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}



/* Address: 0x100b508c0 | SentryUser::isEqual: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

bool SentryUser::isEqual_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  bool bVar2;
  
  if (param_3 == param_1) {
    bVar2 = 1;
  }
  else {
    if (param_3 != 0) {
      IVar1 = objc_stub::class((ID)&objc::class_t::SentryUser);
      IVar1 = objc_stub::isKindOfClass_(param_3,IVar1);
      if ((int)IVar1 != 0) {
        IVar1 = objc_stub::FUN_100c05860(param_1,param_3);
        return (bool)IVar1;
      }
    }
    bVar2 = 0;
  }
  return bVar2;
}



/* Address: 0x100b5093c | SentryUser::isEqualToUser: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

bool SentryUser::isEqualToUser_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  bool bVar3;
  
  if (param_1 == param_3) {
    bVar3 = 1;
  }
  else if (param_3 == 0) {
    bVar3 = 0;
  }
  else {
    IVar1 = objc_stub::FUN_100c110c0(param_3);
    IVar2 = objc_stub::FUN_100c110c0(param_1);
    if (IVar2 != IVar1) {
      IVar2 = objc_stub::FUN_100c110c0(param_1);
      IVar1 = objc_stub::isEqualToString_(IVar2,IVar1);
      if ((int)IVar1 == 0) {
        return 0;
      }
    }
    IVar1 = objc_stub::FUN_100c017e0(param_3);
    IVar2 = objc_stub::FUN_100c017e0(param_1);
    if (IVar2 != IVar1) {
      IVar2 = objc_stub::FUN_100c017e0(param_1);
      IVar1 = objc_stub::isEqualToString_(IVar2,IVar1);
      if ((int)IVar1 == 0) {
        return 0;
      }
    }
    IVar1 = objc_stub::FUN_100c111a0(param_3);
    IVar2 = objc_stub::FUN_100c111a0(param_1);
    if (IVar2 != IVar1) {
      IVar2 = objc_stub::FUN_100c111a0(param_1);
      IVar1 = objc_stub::isEqualToString_(IVar2,IVar1);
      if ((int)IVar1 == 0) {
        return 0;
      }
    }
    IVar1 = objc_stub::FUN_100c055e0(param_3);
    IVar2 = objc_stub::FUN_100c055e0(param_1);
    if (IVar2 != IVar1) {
      IVar2 = objc_stub::FUN_100c055e0(param_1);
      IVar1 = objc_stub::isEqualToString_(IVar2,IVar1);
      if ((int)IVar1 == 0) {
        return 0;
      }
    }
    IVar1 = objc_stub::name(param_3);
    IVar2 = objc_stub::name(param_1);
    if (IVar2 != IVar1) {
      IVar2 = objc_stub::name(param_1);
      IVar1 = objc_stub::isEqualToString_(IVar2,IVar1);
      if ((int)IVar1 == 0) {
        return 0;
      }
    }
    IVar1 = objc_stub::FUN_100c02c00(param_3);
    IVar2 = objc_stub::FUN_100c02c00(param_1);
    if (IVar2 != IVar1) {
      IVar2 = objc_stub::FUN_100c02c00(param_1);
      IVar1 = objc_stub::FUN_100c05820(IVar2,IVar1);
      if ((int)IVar1 == 0) {
        return 0;
      }
    }
    IVar1 = objc_stub::data(param_3);
    IVar2 = objc_stub::data(param_1);
    if (IVar2 != IVar1) {
      IVar2 = objc_stub::data(param_1);
      IVar1 = objc_stub::FUN_100c05800(IVar2,IVar1);
      if ((int)IVar1 == 0) {
        return 0;
      }
    }
    IVar1 = objc_stub::FUN_100c10e00(param_3);
    IVar2 = objc_stub::FUN_100c10e00(param_1);
    if (IVar2 == IVar1) {
      bVar3 = 1;
    }
    else {
      IVar2 = objc_stub::FUN_100c10e00(param_1);
      IVar1 = objc_stub::FUN_100c05800(IVar2,IVar1);
      bVar3 = (bool)IVar1;
    }
  }
  return bVar3;
}



/* Address: 0x100b50d98 | SentryUser::hash */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

unsigned_long_long SentryUser::hash(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  ID IVar8;
  
  IVar1 = objc_stub::FUN_100c110c0(param_1);
  IVar1 = objc_stub::FUN_100c033c0(IVar1);
  IVar2 = objc_stub::FUN_100c017e0(param_1);
  IVar2 = objc_stub::FUN_100c033c0(IVar2);
  IVar3 = objc_stub::FUN_100c111a0(param_1);
  IVar3 = objc_stub::FUN_100c033c0(IVar3);
  IVar4 = objc_stub::FUN_100c055e0(param_1);
  IVar4 = objc_stub::FUN_100c033c0(IVar4);
  IVar5 = objc_stub::name(param_1);
  IVar5 = objc_stub::FUN_100c033c0(IVar5);
  IVar6 = objc_stub::FUN_100c02c00(param_1);
  IVar6 = objc_stub::FUN_100c033c0(IVar6);
  IVar7 = objc_stub::data(param_1);
  IVar7 = objc_stub::FUN_100c033c0(IVar7);
  IVar8 = objc_stub::FUN_100c10e00(param_1);
  IVar8 = objc_stub::FUN_100c033c0(IVar8);
  return IVar8 + (IVar7 + (IVar6 + (IVar5 + (IVar4 + (IVar3 + (IVar2 + IVar1 * 0x17) * 0x17) * 0x17)
                                            * 0x17) * 0x17) * 0x17) * 0x17 + 0x135f6dfb251;
}



/* Address: 0x100b50eec | SentryUser::userId */

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryUser::userId(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 8);
}



/* Address: 0x100b50ef8 | SentryUser::setUserId: */

/* WARNING: Function: _objc_setProperty_atomic_copy replaced with injection: _objc_setProperty_fixup
    */
/* Function Stack Size: 0x18 bytes */

void SentryUser::setUserId_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 8) = param_3;
  return;
}



/* Address: 0x100b50f00 | SentryUser::email */

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryUser::email(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x10);
}



/* Address: 0x100b50f0c | SentryUser::setEmail: */

/* WARNING: Function: _objc_setProperty_atomic_copy replaced with injection: _objc_setProperty_fixup
    */
/* Function Stack Size: 0x18 bytes */

void SentryUser::setEmail_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x10) = param_3;
  return;
}



/* Address: 0x100b50f14 | SentryUser::username */

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryUser::username(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x18);
}



/* Address: 0x100b50f20 | SentryUser::setUsername: */

/* WARNING: Function: _objc_setProperty_atomic_copy replaced with injection: _objc_setProperty_fixup
    */
/* Function Stack Size: 0x18 bytes */

void SentryUser::setUsername_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x18) = param_3;
  return;
}



/* Address: 0x100b50f28 | SentryUser::ipAddress */

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryUser::ipAddress(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x20);
}



/* Address: 0x100b50f34 | SentryUser::setIpAddress: */

/* WARNING: Function: _objc_setProperty_atomic_copy replaced with injection: _objc_setProperty_fixup
    */
/* Function Stack Size: 0x18 bytes */

void SentryUser::setIpAddress_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x20) = param_3;
  return;
}



/* Address: 0x100b50f3c | SentryUser::name */

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryUser::name(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x28);
}



/* Address: 0x100b50f48 | SentryUser::setName: */

/* WARNING: Function: _objc_setProperty_atomic_copy replaced with injection: _objc_setProperty_fixup
    */
/* Function Stack Size: 0x18 bytes */

void SentryUser::setName_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x28) = param_3;
  return;
}



/* Address: 0x100b50f50 | SentryUser::geo */

/* Function Stack Size: 0x10 bytes */

ID SentryUser::geo(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x30);
}



/* Address: 0x100b50f58 | SentryUser::setGeo: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryUser::setGeo_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x30) = param_3;
  return;
}



/* Address: 0x100b50f64 | SentryUser::data */

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryUser::data(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x38);
}



/* Address: 0x100b50f70 | SentryUser::setData: */

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryUser::setData_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x38) = param_3;
  return;
}



/* Address: 0x100b50f78 | SentryUser::unknown */

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryUser::unknown(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x40);
}



/* Address: 0x100b50f84 | SentryUser::setUnknown: */

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryUser::setUnknown_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x40) = param_3;
  return;
}



/* Address: 0x100b50f8c | SentryUser::.cxx_destruct */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryUser::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



/* Address: 0x100b51004 | FUN_100b51004 */

undefined4 FUN_100b51004(undefined4 *param_1)

{
  return *param_1;
}



/* Address: 0x100b5100c | FUN_100b5100c */

undefined8 FUN_100b5100c(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;
  ulong uVar2;
  undefined1 auStack_390 [44];
  undefined1 local_364;
  code *local_358;
  
  puVar1 = param_2;
  _bzero(param_2,0x4d0);
  *param_2 = (int)param_1;
  FUN_100b40bac();
  *(char *)(param_2 + 0x66) = (char)param_3;
  *(undefined1 *)((long)param_2 + 0x19b) = 0;
  *(bool *)((long)param_2 + 0x199) = puVar1 == param_1;
  if (puVar1 == param_1) {
    if (param_3 == 0) {
      return 1;
    }
  }
  else {
    FUN_100b26380(param_2);
    if ((*(byte *)(param_2 + 0x66) & 1) == 0) {
      return 1;
    }
  }
  FUN_100b2acb8(auStack_390,0x96,param_2);
  do {
    uVar2 = 0;
    (*local_358)();
  } while ((uVar2 & 1) != 0);
  *(undefined1 *)((long)param_2 + 0x19a) = local_364;
  FUN_100b510e0(param_2);
  return 1;
}



/* Address: 0x100b510b8 | FUN_100b510b8 */

byte FUN_100b510b8(long param_1)

{
  byte bVar1;
  
  if (*(char *)(param_1 + 0x199) == '\x01') {
    bVar1 = *(byte *)(param_1 + 0x19b);
  }
  else {
    bVar1 = 1;
  }
  return bVar1 & 1;
}



/* Address: 0x100b510d8 | FUN_100b510d8 */

undefined1 FUN_100b510d8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x198);
}



/* Address: 0x100b510e0 | FUN_100b510e0 */

void FUN_100b510e0(thread_act_t *param_1)

{
  task_t target_task;
  thread_act_t tVar1;
  thread_act_t tVar2;
  bool bVar3;
  kern_return_t error_value;
  vm_size_t size;
  uint uVar4;
  ulong uVar5;
  thread_act_array_t ptVar6;
  thread_act_t *ptVar7;
  uint local_3c;
  thread_act_array_t local_38;
  
  target_task = *(task_t *)PTR__mach_task_self__100ea8778;
  error_value = _task_threads(target_task,&local_38,&local_3c);
  if (error_value != 0) {
    _mach_error_string(error_value);
    FUN_100b5e930("ERROR",
                  "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Tools/SentryCrashMachineContext.c"
                  ,0x46,"task_threads: %s");
    return;
  }
  uVar5 = (ulong)local_3c;
  if ((int)local_3c < 0x65) {
    uVar4 = local_3c;
    if ((int)local_3c < 1) goto LAB_100b511c8;
  }
  else {
    FUN_100b5e930("ERROR",
                  "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Tools/SentryCrashMachineContext.c"
                  ,0x4e,"Thread count %d is higher than maximum of %d");
    uVar5 = 100;
  }
  uVar4 = (uint)uVar5;
  bVar3 = false;
  tVar1 = *param_1;
  ptVar6 = local_38;
  ptVar7 = param_1 + 1;
  do {
    tVar2 = *ptVar6;
    *ptVar7 = tVar2;
    bVar3 = (bool)(tVar2 == tVar1 | bVar3);
    uVar5 = uVar5 - 1;
    ptVar6 = ptVar6 + 1;
    ptVar7 = ptVar7 + 1;
  } while (uVar5 != 0);
  if (!bVar3) {
    (param_1 + 1)[uVar4 - 1] = tVar1;
  }
LAB_100b511c8:
  param_1[0x65] = uVar4;
  if (local_3c == 0) {
    size = 0;
  }
  else {
    uVar5 = 0;
    do {
      _mach_port_deallocate(target_task,local_38[uVar5]);
      uVar5 = uVar5 + 1;
    } while (uVar5 < local_3c);
    size = (ulong)local_3c << 2;
  }
  _vm_deallocate(target_task,(vm_address_t)local_38,size);
  return;
}



/* Address: 0x100b51224 | FUN_100b51224 */

undefined8 FUN_100b51224(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  ulong uVar3;
  undefined1 auStack_380 [44];
  undefined1 local_354;
  code *local_348;
  void *pvVar2;
  
  pvVar2 = _memcpy(param_2 + 0x68,*(void **)(param_1 + 0x30),0x330);
  uVar1 = SUB84(pvVar2,0);
  FUN_100b40bac();
  *param_2 = uVar1;
  *(undefined1 *)(param_2 + 0x66) = 1;
  *(undefined1 *)((long)param_2 + 0x19b) = 1;
  FUN_100b2acb8(auStack_380,0x96,param_2);
  do {
    uVar3 = 0;
    (*local_348)();
  } while ((uVar3 & 1) != 0);
  *(undefined1 *)((long)param_2 + 0x19a) = local_354;
  FUN_100b510e0(param_2);
  return 1;
}



/* Address: 0x100b512a0 | FUN_100b512a0 */

void FUN_100b512a0(undefined8 param_1,undefined8 param_2)

{
  FUN_100b512a8(param_1,param_2,0xffffffff);
  return;
}



/* Address: 0x100b512a8 | FUN_100b512a8 */

void FUN_100b512a8(thread_act_array_t *param_1,mach_msg_type_number_t *param_2,uint param_3)

{
  task_t target_task;
  uint target_act;
  kern_return_t kVar1;
  thread_act_array_t *pptVar2;
  ulong uVar3;
  ulong uVar4;
  
  target_task = *(task_t *)PTR__mach_task_self__100ea8778;
  pptVar2 = param_1;
  FUN_100b40bac();
  kVar1 = _task_threads(target_task,param_1,param_2);
  if (kVar1 == 0) {
    if (param_3 < *param_2) {
      *param_2 = 0;
    }
    else if (*param_2 != 0) {
      uVar4 = 0;
      do {
        target_act = (*param_1)[uVar4];
        uVar3 = (ulong)target_act;
        if (((target_act != (uint)pptVar2) && (FUN_100b2c014(), (uVar3 & 1) == 0)) &&
           (kVar1 = _thread_suspend(target_act), kVar1 != 0)) {
          _mach_error_string(kVar1);
          FUN_100b5e930("ERROR",
                        "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Tools/SentryCrashMachineContext.c"
                        ,0xc0,"thread_suspend (%08x): %s");
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < *param_2);
    }
  }
  else {
    _mach_error_string(kVar1);
    FUN_100b5e930("ERROR",
                  "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Tools/SentryCrashMachineContext.c"
                  ,0xb0,"task_threads: %s");
  }
  return;
}



/* Address: 0x100b513c8 | FUN_100b513c8 */

void FUN_100b513c8(uint *param_1,uint param_2)

{
  ipc_space_t task;
  uint target_act;
  kern_return_t error_value;
  uint *puVar1;
  uint *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  uint *puVar6;
  
  task = *(ipc_space_t *)PTR__mach_task_self__100ea8778;
  puVar1 = param_1;
  FUN_100b40bac();
  if ((param_1 != (uint *)0x0) && (param_2 != 0)) {
    uVar4 = (ulong)param_2;
    uVar5 = uVar4;
    puVar6 = param_1;
    do {
      target_act = *puVar6;
      uVar3 = (ulong)target_act;
      if (((target_act != (uint)puVar1) && (FUN_100b2c014(), (uVar3 & 1) == 0)) &&
         (error_value = _thread_resume(target_act), error_value != 0)) {
        _mach_error_string(error_value);
        FUN_100b5e930("ERROR",
                      "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Tools/SentryCrashMachineContext.c"
                      ,0xde,"thread_resume (%08x): %s");
      }
      uVar5 = uVar5 - 1;
      uVar3 = uVar4;
      puVar2 = param_1;
      puVar6 = puVar6 + 1;
    } while (uVar5 != 0);
    do {
      _mach_port_deallocate(task,*puVar2);
      uVar3 = uVar3 - 1;
      puVar2 = puVar2 + 1;
    } while (uVar3 != 0);
    _vm_deallocate(task,(vm_address_t)param_1,uVar4 << 2);
    return;
  }
  FUN_100b5e930("ERROR",
                "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Tools/SentryCrashMachineContext.c"
                ,0xd4,"we should call sentrycrashmc_suspendEnvironment() first");
  return;
}



/* Address: 0x100b514fc | FUN_100b514fc */

undefined4 FUN_100b514fc(long param_1)

{
  return *(undefined4 *)(param_1 + 0x194);
}



/* Address: 0x100b51504 | FUN_100b51504 */

undefined4 FUN_100b51504(long param_1,int param_2)

{
  return *(undefined4 *)(param_1 + (long)param_2 * 4 + 4);
}



/* Address: 0x100b51510 | FUN_100b51510 */

ulong FUN_100b51510(long param_1,ulong param_2)

{
  ulong uVar1;
  
  if (0 < (int)*(uint *)(param_1 + 0x194)) {
    uVar1 = 0;
    do {
      if (*(uint *)(param_1 + 4 + uVar1 * 4) == param_2) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
    } while (*(uint *)(param_1 + 0x194) != uVar1);
  }
  return 0xffffffff;
}



/* Address: 0x100b51548 | FUN_100b51548 */

byte FUN_100b51548(long param_1)

{
  byte bVar1;
  
  if ((*(char *)(param_1 + 0x199) == '\x01') && (*(char *)(param_1 + 0x19b) != '\x01')) {
    bVar1 = 0;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x198);
  }
  return bVar1 & 1;
}



/* Address: 0x100b51574 | SentryCrashStackEntryMapper::initWithInAppLogic: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryCrashStackEntryMapper::initWithInAppLogic_(ID param_1,SEL param_2,ID param_3)

{
  ID self;
  objc_super local_30;
  
  local_30.super_class = &objc::class_t::SentryCrashStackEntryMapper;
  local_30.receiver = param_1;
  self = _objc_msgSendSuper2(&local_30,"init");
  if (self != 0) {
    objc_stub::FUN_100c0c2a0(self,param_3);
  }
  return self;
}



/* Address: 0x100b515e0 | SentryCrashStackEntryMapper::sentryCrashStackEntryToSentryFrame: */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x38 bytes */

ID SentryCrashStackEntryMapper::sentryCrashStackEntryToSentryFrame_
             (ID param_1,SEL param_2,AnonymousStructure0 param_3)

{
  class_t *self;
  ID self_00;
  ID IVar1;
  ID IVar2;
  char acStack_6b [19];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_100ea82f0;
  self = &objc::class_t::SentryFrame;
  _objc_alloc();
  self_00 = objc_stub::init((ID)self);
  _snprintf(acStack_6b,0x13,"0x%016llx");
  IVar1 = objc_stub::stringWithCString_encoding_((ID)&_OBJC_CLASS___NSString,acStack_6b,1);
  objc_stub::FUN_100c0c3c0(self_00,IVar1);
  IVar1 = objc_stub::sharedInstance((ID)&objc::class_t::_TtC6Sentry25SentryDependencyContainer);
  IVar1 = objc_stub::binaryImageCache(IVar1);
  IVar1 = objc_stub::FUN_100c03620(IVar1,*(undefined8 *)param_3.field0_0x0);
  objc_stub::address(IVar1);
  _snprintf(acStack_6b,0x13,"0x%016llx");
  IVar2 = objc_stub::stringWithCString_encoding_((ID)&_OBJC_CLASS___NSString,acStack_6b,1);
  objc_stub::FUN_100c0c180(self_00,IVar2);
  IVar2 = objc_stub::name(IVar1);
  objc_stub::FUN_100c0cf80(self_00,IVar2);
  IVar2 = objc_stub::FUN_100c03820(param_1);
  IVar1 = objc_stub::name(IVar1);
  IVar1 = objc_stub::FUN_100c05940(IVar2,IVar1);
  IVar1 = objc_stub::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,IVar1);
  objc_stub::FUN_100c0c280(self_00,IVar1);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_58) {
    return self_00;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}



/* Address: 0x100b517f8 | SentryCrashStackEntryMapper::mapStackEntryWithCursor: */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x370 bytes */

ID SentryCrashStackEntryMapper::mapStackEntryWithCursor_
             (ID param_1,undefined8 param_2,undefined8 *param_3)

{
  ID IVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  uStack_38 = param_3[1];
  local_40 = *param_3;
  uStack_28 = param_3[3];
  uStack_30 = param_3[2];
  local_20 = param_3[4];
  IVar1 = objc_stub::FUN_100c09fe0(param_1,&local_40);
  return IVar1;
}


