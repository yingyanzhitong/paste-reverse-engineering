/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100b49024 | SentryScope::addCrashReportAttachmentInPath: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryScope::addCrashReportAttachmentInPath_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  class_t *self;
  
  IVar1 = objc_stub::lastPathComponent(param_3);
  IVar1 = objc_stub::isEqualToString_(IVar1,&cf_view_hierarchy_json);
  self = &objc::class_t::SentryAttachment;
  _objc_alloc();
  if ((int)IVar1 == 0) {
    IVar1 = objc_stub::FUN_100c04800((ID)self,param_3);
  }
  else {
    IVar1 = objc_stub::FUN_100c04860
                      ((ID)self,param_3,&cf_view_hierarchy_json,&cf_application_json,1);
  }
  objc_stub::FUN_100bfd400(param_1,IVar1);
  return;
}



/* Address: 0x100b490d0 | SentryScope::clearAttachments */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryScope::clearAttachments(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  _objc_sync_enter();
  objc_stub::FUN_100c08ee0(*(ID *)(param_1 + 0x50));
  _objc_sync_exit(uVar1);
  return;
}



/* Address: 0x100b49124 | SentryScope::attachments */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryScope::attachments(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  ID IVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  _objc_sync_enter();
  IVar2 = objc_stub::copy(*(ID *)(param_1 + 0x50));
  _objc_sync_exit(uVar1);
  return IVar2;
}



/* Address: 0x100b49184 | SentryScope::attributes */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryScope::attributes(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  ID IVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  _objc_sync_enter();
  IVar2 = objc_stub::copy(*(ID *)(param_1 + 0x68));
  _objc_sync_exit(uVar1);
  return IVar2;
}



/* Address: 0x100b491e4 | SentryScope::setAttributeValue:forKey: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void SentryScope::setAttributeValue_forKey_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  int iVar1;
  ID IVar2;
  undefined8 uVar3;
  ID IVar4;
  ID IVar5;
  ID self;
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
  if ((param_4 == 0) || (IVar2 = objc_stub::length(param_4), IVar2 == 0)) {
    iVar1 = 0;
    FUN_100b3a1f0();
    if (iVar1 != 0) {
      FUN_100b3a2b8("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryScope.m",
                    0x20d,&cf_Attribute_skeycannotbenilnorempty);
    }
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x68);
    _objc_sync_enter();
    objc_stub::setObject_forKeyedSubscript_(*(ID *)(param_1 + 0x68),param_3,param_4);
    uStack_108 = 0;
    local_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    local_130 = 0;
    uStack_118 = 0;
    local_120 = (long *)0x0;
    IVar2 = objc_stub::FUN_100c075a0(param_1);
    IVar4 = objc_stub::countByEnumeratingWithState_objects_count_(IVar2,&local_130,auStack_f0,0x10);
    if (IVar4 != 0) {
      lVar6 = *local_120;
      do {
        IVar7 = 0;
        do {
          if (*local_120 != lVar6) {
            _objc_enumerationMutation(IVar2);
          }
          self = *(ID *)(lStack_128 + IVar7 * 8);
          IVar5 = objc_stub::copy(*(ID *)(param_1 + 0x68));
          objc_stub::FUN_100c0a840(self,IVar5);
          IVar7 = IVar7 + 1;
        } while (IVar4 != IVar7);
        IVar4 = objc_stub::countByEnumeratingWithState_objects_count_
                          (IVar2,&local_130,auStack_f0,0x10);
      } while (IVar4 != 0);
    }
    _objc_sync_exit(uVar3);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}



/* Address: 0x100b493c0 | SentryScope::removeAttributeForKey: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryScope::removeAttributeForKey_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  ID self;
  ID IVar2;
  ID IVar3;
  ID self_00;
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
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  _objc_sync_enter();
  objc_stub::removeObjectForKey_(*(ID *)(param_1 + 0x68),param_3);
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (long *)0x0;
  self = objc_stub::FUN_100c075a0(param_1);
  IVar2 = objc_stub::countByEnumeratingWithState_objects_count_(self,&local_130,auStack_e8,0x10);
  if (IVar2 != 0) {
    lVar4 = *local_120;
    do {
      IVar5 = 0;
      do {
        if (*local_120 != lVar4) {
          _objc_enumerationMutation(self);
        }
        self_00 = *(ID *)(lStack_128 + IVar5 * 8);
        IVar3 = objc_stub::copy(*(ID *)(param_1 + 0x68));
        objc_stub::FUN_100c0a840(self_00,IVar3);
        IVar5 = IVar5 + 1;
      } while (IVar2 != IVar5);
      IVar2 = objc_stub::countByEnumeratingWithState_objects_count_(self,&local_130,auStack_e8,0x10)
      ;
    } while (IVar2 != 0);
  }
  _objc_sync_exit(uVar1);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}



/* Address: 0x100b4954c | SentryScope::serialize */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryScope::serialize(ID param_1,SEL param_2)

{
  undefined *self;
  ID self_00;
  ID IVar1;
  ID IVar2;
  undefined8 uVar3;
  
  self = &_OBJC_CLASS___NSMutableDictionary;
  _objc_alloc();
  self_00 = objc_stub::init((ID)self);
  IVar1 = objc_stub::FUN_100c10160(param_1);
  IVar1 = objc_stub::count(IVar1);
  if (IVar1 != 0) {
    IVar1 = objc_stub::FUN_100c10160(param_1);
    objc_stub::setValue_forKey_(self_00,IVar1,&cf_tags);
  }
  IVar1 = objc_stub::FUN_100c022a0(param_1);
  IVar1 = objc_stub::count(IVar1);
  if (IVar1 != 0) {
    IVar1 = objc_stub::FUN_100c022a0(param_1);
    objc_stub::setValue_forKey_(self_00,IVar1,&cf_extra);
  }
  IVar2 = objc_stub::FUN_100c0efc0(param_1);
  IVar1 = 0;
  if (IVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    _objc_sync_enter();
    IVar1 = objc_stub::FUN_100c0efc0(param_1);
    _objc_sync_exit(uVar3);
  }
  IVar1 = objc_stub::FUN_100bfea20(param_1,IVar1);
  objc_stub::setObject_forKeyedSubscript_(self_00,IVar1,&cf_traceContext);
  IVar1 = objc_stub::FUN_100bffe20(param_1);
  IVar1 = objc_stub::mutableCopy(IVar1);
  IVar2 = objc_stub::count(IVar1);
  if (IVar2 != 0) {
    objc_stub::setValue_forKey_(self_00,IVar1,&cf_context);
  }
  IVar1 = objc_stub::FUN_100c11180(param_1);
  IVar1 = objc_stub::serialize(IVar1);
  objc_stub::setValue_forKey_(self_00,IVar1,&cf_user);
  IVar1 = objc_stub::FUN_100c01540(param_1);
  objc_stub::setValue_forKey_(self_00,IVar1,&cf_dist);
  IVar1 = objc_stub::FUN_100c01de0(param_1);
  objc_stub::setValue_forKey_(self_00,IVar1,&cf_environment);
  IVar1 = objc_stub::FUN_100c092a0(param_1);
  objc_stub::setValue_forKey_(self_00,IVar1,&cf_replay_id);
  IVar1 = objc_stub::FUN_100c02600(param_1);
  IVar1 = objc_stub::count(IVar1);
  if (IVar1 != 0) {
    IVar1 = objc_stub::FUN_100c02600(param_1);
    objc_stub::setValue_forKey_(self_00,IVar1,&cf_fingerprint);
  }
  IVar1 = objc_stub::FUN_100c06220(param_1);
  if (IVar1 != 0) {
    FUN_100b425e0();
    objc_stub::setValue_forKey_(self_00,IVar1,&cf_level);
  }
  IVar1 = objc_stub::FUN_100c0a160(param_1);
  IVar2 = objc_stub::count(IVar1);
  if (IVar2 != 0) {
    objc_stub::setValue_forKey_(self_00,IVar1,&cf_breadcrumbs);
  }
  IVar1 = objc_stub::FUN_100bfe2a0(param_1);
  IVar1 = objc_stub::count(IVar1);
  if (IVar1 != 0) {
    IVar1 = objc_stub::FUN_100bfe2a0(param_1);
    objc_stub::setValue_forKey_(self_00,IVar1,&cf_attributes);
  }
  return self_00;
}



/* Address: 0x100b4992c | SentryScope::serializeBreadcrumbs */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryScope::serializeBreadcrumbs(ID param_1,SEL param_2)

{
  undefined *self;
  ID self_00;
  ID self_01;
  ID IVar1;
  ID IVar2;
  long lVar3;
  ID IVar4;
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
  self = &_OBJC_CLASS___NSMutableArray;
  _objc_alloc();
  self_00 = objc_stub::init((ID)self);
  self_01 = objc_stub::FUN_100bfe8a0(param_1);
  lStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  local_110 = (long *)0x0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  IVar1 = objc_stub::countByEnumeratingWithState_objects_count_(self_01,&local_120,auStack_d8,0x10);
  if (IVar1 != 0) {
    lVar3 = *local_110;
    do {
      IVar4 = 0;
      do {
        if (*local_110 != lVar3) {
          _objc_enumerationMutation(self_01);
        }
        IVar2 = objc_stub::serialize(*(ID *)(lStack_118 + IVar4 * 8));
        objc_stub::addObject_(self_00,IVar2);
        IVar4 = IVar4 + 1;
      } while (IVar1 != IVar4);
      IVar1 = objc_stub::countByEnumeratingWithState_objects_count_
                        (self_01,&local_120,auStack_d8,0x10);
    } while (IVar1 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_58) {
    return self_00;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}



/* Address: 0x100b49a64 | SentryScope::applyToSession: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryScope::applyToSession_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100c01de0(param_1);
  if (IVar1 != 0) {
    objc_stub::FUN_100c0b900(param_3,IVar1);
  }
  return;
}



/* Address: 0x100b49abc | SentryScope::applyToEvent:maxBreadcrumb: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID SentryScope::applyToEvent_maxBreadcrumb_
             (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4)

{
  int iVar1;
  ID IVar2;
  undefined *puVar3;
  ID IVar4;
  undefined8 uVar5;
  ID IVar6;
  ID IVar7;
  
  if (param_3 != 0) {
    IVar2 = objc_stub::FUN_100c058a0(param_3);
    iVar1 = (int)IVar2;
    if (iVar1 == 0) {
      IVar2 = objc_stub::FUN_100c10160(param_3);
      if (IVar2 == 0) {
        IVar2 = objc_stub::FUN_100c10160(param_1);
      }
      else {
        puVar3 = &_OBJC_CLASS___NSMutableDictionary;
        _objc_alloc();
        IVar2 = objc_stub::init((ID)puVar3);
        IVar4 = objc_stub::FUN_100c10160(param_1);
        objc_stub::addEntriesFromDictionary_(IVar2,IVar4);
        IVar4 = objc_stub::FUN_100c10160(param_3);
        objc_stub::addEntriesFromDictionary_(IVar2,IVar4);
      }
      objc_stub::FUN_100c0e040(param_3,IVar2);
      IVar2 = objc_stub::FUN_100c020c0(param_3);
      if (IVar2 == 0) {
        IVar2 = objc_stub::FUN_100c022a0(param_1);
      }
      else {
        puVar3 = &_OBJC_CLASS___NSMutableDictionary;
        _objc_alloc();
        IVar2 = objc_stub::init((ID)puVar3);
        IVar4 = objc_stub::FUN_100c022a0(param_1);
        objc_stub::addEntriesFromDictionary_(IVar2,IVar4);
        IVar4 = objc_stub::FUN_100c020c0(param_3);
        objc_stub::addEntriesFromDictionary_(IVar2,IVar4);
      }
      objc_stub::FUN_100c0baa0(param_3,IVar2);
      IVar2 = objc_stub::FUN_100c02600(param_1);
      IVar4 = objc_stub::count(IVar2);
      if ((IVar4 != 0) && (IVar4 = objc_stub::FUN_100c025e0(param_3), IVar4 == 0)) {
        objc_stub::FUN_100c0bc60(param_3,IVar2);
      }
      IVar2 = objc_stub::FUN_100bfe8a0(param_3);
      if (IVar2 == 0) {
        IVar4 = objc_stub::FUN_100bfe8a0(param_1);
        IVar2 = objc_stub::count(IVar4);
        if (param_4 <= IVar2) {
          IVar2 = param_4;
        }
        IVar2 = objc_stub::FUN_100c0fbe0(IVar4,0,IVar2);
        objc_stub::FUN_100c0ac20(param_3,IVar2);
      }
      IVar2 = objc_stub::FUN_100c11180(param_1);
      IVar2 = objc_stub::copy(IVar2);
      if (IVar2 != 0) {
        objc_stub::FUN_100c0e6e0(param_3,IVar2);
      }
      IVar2 = objc_stub::FUN_100c01540(param_1);
      if ((IVar2 != 0) && (IVar4 = objc_stub::FUN_100c01520(param_3), IVar4 == 0)) {
        objc_stub::FUN_100c0b660(param_3,IVar2);
      }
      IVar2 = objc_stub::FUN_100c01de0(param_1);
      if ((IVar2 != 0) && (IVar4 = objc_stub::environment(param_3), IVar4 == 0)) {
        objc_stub::FUN_100c0b900(param_3,IVar2);
      }
      IVar2 = objc_stub::FUN_100c06220(param_1);
      if (IVar2 != 0) {
        objc_stub::setLevel_(param_3,IVar2);
      }
      IVar4 = objc_stub::FUN_100c0efc0(param_1);
      IVar2 = 0;
      if (IVar4 != 0) {
        uVar5 = *(undefined8 *)(param_1 + 8);
        _objc_sync_enter();
        IVar2 = objc_stub::FUN_100c0efc0(param_1);
        _objc_sync_exit(uVar5);
        if (IVar2 != 0) {
          IVar4 = objc_stub::type(param_3);
          IVar6 = objc_stub::FUN_100c10a80((ID)&objc::class_t::_TtC6Sentry23SentryEnvelopeItemTypes)
          ;
          IVar4 = objc_stub::isEqualToString_(IVar4,IVar6);
          if ((IVar4 & 1) == 0) {
            IVar4 = objc_stub::class((ID)&objc::class_t::SentryTracer);
            IVar4 = objc_stub::isKindOfClass_(IVar2,IVar4);
            if ((int)IVar4 != 0) {
              IVar4 = objc_stub::FUN_100c10ac0(IVar2);
              IVar4 = objc_stub::name(IVar4);
              objc_stub::FUN_100c0e4c0(param_3,IVar4);
            }
          }
        }
      }
      IVar4 = objc_stub::FUN_100bffe20(param_1);
      IVar4 = objc_stub::mutableCopy(IVar4);
      IVar6 = objc_stub::type(param_3);
      if (IVar6 != 0) {
        IVar6 = objc_stub::type(param_3);
        IVar7 = objc_stub::FUN_100c01ea0((ID)&objc::class_t::_TtC6Sentry23SentryEnvelopeItemTypes);
        IVar6 = objc_stub::isEqualToString_(IVar6,IVar7);
        if ((IVar6 & 1) == 0) {
          objc_stub::removeObjectForKey_(IVar4,&cf_flags);
        }
      }
      IVar6 = objc_stub::FUN_100bffe20(param_3);
      if (IVar6 != 0) {
        IVar6 = objc_stub::FUN_100bffe20(param_3);
        objc_stub::mergeEntriesFromDictionary_intoDictionary_
                  ((ID)&objc::class_t::SentryDictionary,IVar6,IVar4);
      }
      IVar2 = objc_stub::FUN_100bfea20(param_1,IVar2);
      objc_stub::setObject_forKeyedSubscript_(IVar4,IVar2,&cf_trace);
      objc_stub::FUN_100c0b0e0(param_3,IVar4);
    }
    else {
      FUN_100b3a1e0();
      if (iVar1 != 0) {
        FUN_100b3a280("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryScope.m",
                      0x277,&
                            cf_Won_tapplyscopetoacrashevent_Thisisnotallowedascrasheventsarefromapreviousrunoftheappandthecurrentscopemighthavedifferentdatathanthescopethatwasactiveduringthecrash_
                     );
      }
    }
  }
  return param_3;
}



/* Address: 0x100b4a0e4 | SentryScope::addScopeObserver: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryScope::addScopeObserver_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  ID IVar2;
  undefined8 uVar3;
  
  IVar2 = objc_stub::respondsToSelector_(param_3,"setTraceContext:");
  iVar1 = 0;
  if ((int)IVar2 != 0) {
    IVar2 = objc_stub::respondsToSelector_(param_3,"setUser:");
    iVar1 = 0;
    if ((int)IVar2 != 0) {
      IVar2 = objc_stub::respondsToSelector_(param_3,"setTags:");
      iVar1 = 0;
      if ((int)IVar2 != 0) {
        IVar2 = objc_stub::respondsToSelector_(param_3,"setExtras:");
        iVar1 = 0;
        if ((int)IVar2 != 0) {
          IVar2 = objc_stub::respondsToSelector_(param_3,"setContext:");
          iVar1 = 0;
          if ((int)IVar2 != 0) {
            IVar2 = objc_stub::respondsToSelector_(param_3,"setDist:");
            iVar1 = 0;
            if ((int)IVar2 != 0) {
              IVar2 = objc_stub::respondsToSelector_(param_3,"setEnvironment:");
              iVar1 = 0;
              if ((int)IVar2 != 0) {
                IVar2 = objc_stub::respondsToSelector_(param_3,"setFingerprint:");
                iVar1 = 0;
                if ((int)IVar2 != 0) {
                  IVar2 = objc_stub::respondsToSelector_(param_3,"setLevel:");
                  iVar1 = 0;
                  if ((int)IVar2 != 0) {
                    IVar2 = objc_stub::respondsToSelector_(param_3,"setFingerprint:");
                    iVar1 = 0;
                    if ((int)IVar2 != 0) {
                      IVar2 = objc_stub::respondsToSelector_(param_3,"setAttributes:");
                      iVar1 = 0;
                      if ((int)IVar2 != 0) {
                        IVar2 = objc_stub::respondsToSelector_(param_3,"addSerializedBreadcrumb:");
                        iVar1 = 0;
                        if ((int)IVar2 != 0) {
                          IVar2 = objc_stub::respondsToSelector_(param_3,"clearBreadcrumbs");
                          iVar1 = 0;
                          if ((int)IVar2 != 0) {
                            IVar2 = objc_stub::respondsToSelector_(param_3,"clear");
                            iVar1 = (int)IVar2;
                            if ((IVar2 & 1) != 0) {
                              uVar3 = *(undefined8 *)(param_1 + 0x10);
                              _objc_sync_enter();
                              IVar2 = objc_stub::FUN_100c075c0(param_1);
                              objc_stub::addObject_(IVar2,param_3);
                              _objc_sync_exit(uVar3);
                              return;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_100b3a1e0();
  if (iVar1 != 0) {
    FUN_100b3a280("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryScope.m",0x2f1,
                  &cf_ObservermustbeaninstanceconformingtoSentryScopeObserverprotocol);
  }
  return;
}



/* Address: 0x100b4a2a8 | SentryScope::updateFeatureFlagsContextLocked */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryScope::updateFeatureFlagsContextLocked(ID param_1,SEL param_2)

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
  undefined1 auStack_e8 [128];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  IVar1 = objc_stub::FUN_100c0a180(*(ID *)(param_1 + 0x20));
  IVar2 = objc_stub::count(IVar1);
  if (IVar2 == 0) {
    objc_stub::removeObjectForKey_(*(ID *)(param_1 + 0x98),&cf_flags);
  }
  else {
    objc_stub::setObject_forKeyedSubscript_(*(ID *)(param_1 + 0x98),IVar1,&cf_flags);
  }
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (long *)0x0;
  IVar1 = objc_stub::FUN_100c075a0(param_1);
  IVar2 = objc_stub::countByEnumeratingWithState_objects_count_(IVar1,&local_130,auStack_e8,0x10);
  if (IVar2 != 0) {
    lVar4 = *local_120;
    do {
      IVar5 = 0;
      do {
        if (*local_120 != lVar4) {
          _objc_enumerationMutation(IVar1);
        }
        self = *(ID *)(lStack_128 + IVar5 * 8);
        IVar3 = objc_stub::copy(*(ID *)(param_1 + 0x98));
        objc_stub::FUN_100c0b0e0(self,IVar3);
        IVar5 = IVar5 + 1;
      } while (IVar2 != IVar5);
      IVar2 = objc_stub::countByEnumeratingWithState_objects_count_
                        (IVar1,&local_130,auStack_e8,0x10);
    } while (IVar2 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}



/* Address: 0x100b4a418 | SentryScope::addFeatureFlagWithName:result: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x1c bytes */

void SentryScope::addFeatureFlagWithName_result_(ID param_1,SEL param_2,ID param_3,bool param_4)

{
  undefined8 uVar1;
  ID IVar2;
  ID self;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_sync_enter();
  self = *(ID *)(param_1 + 0x28);
  IVar2 = objc_stub::class((ID)&objc::class_t::SentrySpanInternal);
  IVar2 = objc_stub::isKindOfClass_(self,IVar2);
  if ((int)IVar2 == 0) {
    IVar2 = 0;
  }
  else {
    IVar2 = *(ID *)(param_1 + 0x28);
  }
  _objc_sync_exit(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  _objc_sync_enter();
  objc_stub::FUN_100bfd9a0(*(ID *)(param_1 + 0x20),param_3,(ulong)param_4);
  objc_stub::FUN_100c10f20(param_1);
  _objc_sync_exit(uVar1);
  objc_stub::FUN_100bfd600(IVar2,param_3,(ulong)param_4);
  return;
}



/* Address: 0x100b4a514 | SentryScope::clearFeatureFlags */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryScope::clearFeatureFlags(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  _objc_sync_enter();
  objc_stub::FUN_100c08e60(*(ID *)(param_1 + 0x20));
  objc_stub::FUN_100c10f20(param_1);
  _objc_sync_exit(uVar1);
  return;
}



/* Address: 0x100b4a570 | SentryScope::observerSnapshot */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryScope::observerSnapshot(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  ID IVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_sync_enter();
  IVar2 = objc_stub::FUN_100c075c0(param_1);
  IVar2 = objc_stub::copy(IVar2);
  _objc_sync_exit(uVar1);
  return IVar2;
}



/* Address: 0x100b4a5f0 | SentryScope::buildTraceContext: */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryScope::buildTraceContext_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  
  if (param_3 == 0) {
    IVar1 = objc_stub::FUN_100c084a0(param_1);
    IVar1 = objc_stub::FUN_100c10920(IVar1);
  }
  else {
    IVar1 = objc_stub::serialize(param_3);
    IVar2 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_status);
    if (IVar2 == 0) {
      IVar1 = objc_stub::mutableCopy(IVar1);
      objc_stub::setObject_forKeyedSubscript_(IVar1,&cf_ok,&cf_status);
    }
  }
  return IVar1;
}



/* Address: 0x100b4a6a4 | SentryScope::propagationContextTraceId */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryScope::propagationContextTraceId(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100c084a0(param_1);
  IVar1 = objc_stub::FUN_100c10960(IVar1);
  return IVar1;
}



/* Address: 0x100b4a6e8 | SentryScope::replayId */

/* Function Stack Size: 0x10 bytes */

ID SentryScope::replayId(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x38);
}



/* Address: 0x100b4a6f0 | SentryScope::setReplayId: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryScope::setReplayId_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x38) = param_3;
  return;
}



/* Address: 0x100b4a6fc | SentryScope::maxBreadcrumbs */

/* Function Stack Size: 0x10 bytes */

unsigned_long_long SentryScope::maxBreadcrumbs(ID param_1,SEL param_2)

{
  return *(unsigned_long_long *)(param_1 + 0x40);
}



/* Address: 0x100b4a704 | SentryScope::setMaxBreadcrumbs: */

/* Function Stack Size: 0x18 bytes */

void SentryScope::setMaxBreadcrumbs_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  *(unsigned_long_long *)(param_1 + 0x40) = param_3;
  return;
}



/* Address: 0x100b4a70c | SentryScope::currentBreadcrumbIndex */

/* Function Stack Size: 0x10 bytes */

unsigned_long_long SentryScope::currentBreadcrumbIndex(ID param_1,SEL param_2)

{
  return *(unsigned_long_long *)(param_1 + 0x48);
}



/* Address: 0x100b4a714 | SentryScope::setCurrentBreadcrumbIndex: */

/* Function Stack Size: 0x18 bytes */

void SentryScope::setCurrentBreadcrumbIndex_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  *(unsigned_long_long *)(param_1 + 0x48) = param_3;
  return;
}



/* Address: 0x100b4a71c | SentryScope::attachmentArray */

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryScope::attachmentArray(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x50);
}



/* Address: 0x100b4a728 | SentryScope::setAttachmentArray: */

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryScope::setAttachmentArray_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x50) = param_3;
  return;
}



/* Address: 0x100b4a730 | SentryScope::observers */

/* Function Stack Size: 0x10 bytes */

ID SentryScope::observers(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x58);
}



/* Address: 0x100b4a738 | SentryScope::setObservers: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryScope::setObservers_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x58) = param_3;
  return;
}



/* Address: 0x100b4a744 | SentryScope::breadcrumbArray */

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryScope::breadcrumbArray(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x60);
}



/* Address: 0x100b4a750 | SentryScope::setBreadcrumbArray: */

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryScope::setBreadcrumbArray_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x60) = param_3;
  return;
}



/* Address: 0x100b4a758 | SentryScope::attributesDictionary */

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryScope::attributesDictionary(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x68);
}



/* Address: 0x100b4a764 | SentryScope::setAttributesDictionary: */

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryScope::setAttributesDictionary_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x68) = param_3;
  return;
}



/* Address: 0x100b4a76c | SentryScope::environmentString */

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryScope::environmentString(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x70);
}



/* Address: 0x100b4a778 | SentryScope::setEnvironmentString: */

/* WARNING: Function: _objc_setProperty_atomic_copy replaced with injection: _objc_setProperty_fixup
    */
/* Function Stack Size: 0x18 bytes */

void SentryScope::setEnvironmentString_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x70) = param_3;
  return;
}



/* Address: 0x100b4a780 | SentryScope::distString */

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryScope::distString(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x78);
}



/* Address: 0x100b4a78c | SentryScope::setDistString: */

/* WARNING: Function: _objc_setProperty_atomic_copy replaced with injection: _objc_setProperty_fixup
    */
/* Function Stack Size: 0x18 bytes */

void SentryScope::setDistString_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x78) = param_3;
  return;
}



/* Address: 0x100b4a794 | SentryScope::extraDictionary */

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryScope::extraDictionary(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x80);
}



/* Address: 0x100b4a7a0 | SentryScope::setExtraDictionary: */

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryScope::setExtraDictionary_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x80) = param_3;
  return;
}



/* Address: 0x100b4a7a8 | SentryScope::fingerprintArray */

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryScope::fingerprintArray(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x88);
}



/* Address: 0x100b4a7b4 | SentryScope::setFingerprintArray: */

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryScope::setFingerprintArray_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x88) = param_3;
  return;
}



/* Address: 0x100b4a7bc | SentryScope::levelEnum */

/* Function Stack Size: 0x10 bytes */

unsigned_long_long SentryScope::levelEnum(ID param_1,SEL param_2)

{
  return *(unsigned_long_long *)(param_1 + 0x90);
}



/* Address: 0x100b4a7c4 | SentryScope::setLevelEnum: */

/* Function Stack Size: 0x18 bytes */

void SentryScope::setLevelEnum_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  *(unsigned_long_long *)(param_1 + 0x90) = param_3;
  return;
}



/* Address: 0x100b4a7cc | SentryScope::contextDictionary */

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryScope::contextDictionary(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x98);
}



/* Address: 0x100b4a7d8 | SentryScope::setContextDictionary: */

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryScope::setContextDictionary_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x98) = param_3;
  return;
}



/* Address: 0x100b4a7e0 | SentryScope::tagDictionary */

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryScope::tagDictionary(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0xa0);
}



/* Address: 0x100b4a7ec | SentryScope::setTagDictionary: */

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryScope::setTagDictionary_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0xa0) = param_3;
  return;
}



/* Address: 0x100b4a7f4 | SentryScope::userObject */

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryScope::userObject(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0xa8);
}



/* Address: 0x100b4a800 | SentryScope::setUserObject: */

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryScope::setUserObject_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0xa8) = param_3;
  return;
}



/* Address: 0x100b4a808 | SentryScope::currentScreen */

/* Function Stack Size: 0x10 bytes */

ID SentryScope::currentScreen(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0xb0);
}



/* Address: 0x100b4a810 | SentryScope::.cxx_destruct */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryScope::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



/* Address: 0x100b4a90c | SentryCrashJSONCodec::codecWithEncodeOptions:decodeOptions: */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryCrashJSONCodec::codecWithEncodeOptions_decodeOptions_
             (ID param_1,SEL param_2,int param_3,int param_4)

{
  ID IVar1;
  
  _objc_alloc();
  IVar1 = objc_stub::FUN_100c04080(param_1,(ulong)param_3,(ulong)param_4);
  return IVar1;
}



/* Address: 0x100b4a93c | SentryCrashJSONCodec::initWithEncodeOptions:decodeOptions: */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryCrashJSONCodec::initWithEncodeOptions_decodeOptions_
             (ID param_1,SEL param_2,int param_3,int param_4)

{
  ID self;
  ID IVar1;
  void *pvVar2;
  undefined8 *puVar3;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::SentryCrashJSONCodec;
  local_40.receiver = param_1;
  self = _objc_msgSendSuper2(&local_40,"init");
  if (self != 0) {
    IVar1 = objc_stub::array((ID)&_OBJC_CLASS___NSMutableArray);
    objc_stub::FUN_100c0afa0(self,IVar1);
    pvVar2 = _malloc(0x50);
    objc_stub::FUN_100c0ad00(self,pvVar2);
    IVar1 = objc_stub::FUN_100bfeca0(self);
    if (IVar1 == 0) {
      _NSLog(&cf_Couldnotallocatecallbacks);
      self = 0;
    }
    else {
      IVar1 = objc_stub::FUN_100bfeca0(self);
      *(code **)(IVar1 + 0x38) = FUN_100b4ab00;
      IVar1 = objc_stub::FUN_100bfeca0(self);
      *(code **)(IVar1 + 0x30) = FUN_100b4ab90;
      puVar3 = (undefined8 *)objc_stub::FUN_100bfeca0(self);
      *puVar3 = FUN_100b4ac20;
      IVar1 = objc_stub::FUN_100bfeca0(self);
      *(code **)(IVar1 + 0x40) = FUN_100b4acb8;
      IVar1 = objc_stub::FUN_100bfeca0(self);
      *(code **)(IVar1 + 0x48) = FUN_100b4ad70;
      IVar1 = objc_stub::FUN_100bfeca0(self);
      *(code **)(IVar1 + 8) = FUN_100b4ad78;
      IVar1 = objc_stub::FUN_100bfeca0(self);
      *(code **)(IVar1 + 0x10) = FUN_100b4ae18;
      IVar1 = objc_stub::FUN_100bfeca0(self);
      *(code **)(IVar1 + 0x18) = FUN_100b4aeb0;
      IVar1 = objc_stub::FUN_100bfeca0(self);
      *(code **)(IVar1 + 0x20) = FUN_100b4af48;
      IVar1 = objc_stub::FUN_100bfeca0(self);
      *(code **)(IVar1 + 0x28) = FUN_100b4b04c;
      objc_stub::FUN_100c0d1e0(self,(ulong)(param_3 & 1));
      objc_stub::FUN_100c0dbe0(self,(ulong)(param_3 >> 1 & 1));
      objc_stub::FUN_100c0c120(self,(ulong)(param_4 & 1));
      objc_stub::FUN_100c0c140(self,(ulong)(param_4 >> 1 & 1));
    }
  }
  return self;
}



/* Address: 0x100b4ab00 | FUN_100b4ab00 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b4ab00(long param_1,undefined8 param_2)

{
  ID IVar1;
  ID IVar2;
  
  if (param_1 == 0) {
    IVar1 = 0;
  }
  else {
    IVar1 = NSString::stringWithCString_encoding_((ID)&_OBJC_CLASS___NSString,param_1,4);
  }
  IVar2 = NSMutableArray::array((ID)&_OBJC_CLASS___NSMutableArray);
  FUN_100b4bc8c(param_2,IVar1,IVar2);
  return param_2;
}



/* Address: 0x100b4ab90 | FUN_100b4ab90 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b4ab90(long param_1,undefined8 param_2)

{
  ID IVar1;
  ID IVar2;
  
  if (param_1 == 0) {
    IVar1 = 0;
  }
  else {
    IVar1 = NSString::stringWithCString_encoding_((ID)&_OBJC_CLASS___NSString,param_1,4);
  }
  IVar2 = NSMutableDictionary::dictionary((ID)&_OBJC_CLASS___NSMutableDictionary);
  FUN_100b4bc8c(param_2,IVar1,IVar2);
  return param_2;
}



/* Address: 0x100b4ac20 | FUN_100b4ac20 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b4ac20(long param_1,undefined8 param_2,undefined8 param_3)

{
  ID IVar1;
  ID IVar2;
  
  if (param_1 == 0) {
    IVar1 = 0;
  }
  else {
    IVar1 = NSString::stringWithCString_encoding_((ID)&_OBJC_CLASS___NSString,param_1,4);
  }
  IVar2 = NSNumber::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,param_2);
  FUN_100b4bb8c(param_3,IVar1,IVar2);
  return param_3;
}



/* Address: 0x100b4acb8 | FUN_100b4acb8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_unsafeClaimAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

undefined8 FUN_100b4acb8(ID param_1)

{
  ID IVar1;
  cfstringStruct *pcVar2;
  undefined8 uVar3;
  
  IVar1 = objc_stub::count(*(ID *)(param_1 + 0x20));
  if (IVar1 == 0) {
    pcVar2 = &cf_SentryCrashJSONCodecObjC;
    FUN_100b52f54(&cf_SentryCrashJSONCodecObjC,0,&cf_Alreadyatthetoplevel_nocontainerlefttoend);
    objc_stub::setError_(param_1,pcVar2);
    uVar3 = 5;
  }
  else {
    objc_stub::removeLastObject(*(ID *)(param_1 + 0x20));
    IVar1 = objc_stub::count(*(ID *)(param_1 + 0x20));
    if (IVar1 == 0) {
      uVar3 = 0;
      *(undefined8 *)(param_1 + 0x18) = 0;
    }
    else {
      IVar1 = objc_stub::objectAtIndex_(*(ID *)(param_1 + 0x20),IVar1 - 1);
      uVar3 = 0;
      *(ID *)(param_1 + 0x18) = IVar1;
    }
  }
  return uVar3;
}



/* Address: 0x100b4ad70 | FUN_100b4ad70 */

undefined8 FUN_100b4ad70(void)

{
  return 0;
}



/* Address: 0x100b4ad78 | FUN_100b4ad78 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b4ad78(undefined8 param_1,long param_2,undefined8 param_3)

{
  ID IVar1;
  ID IVar2;
  
  if (param_2 == 0) {
    IVar1 = 0;
  }
  else {
    IVar1 = NSString::stringWithCString_encoding_((ID)&_OBJC_CLASS___NSString,param_2,4);
  }
  IVar2 = NSNumber::numberWithDouble_((ID)&_OBJC_CLASS___NSNumber,param_1);
  FUN_100b4bb8c(param_3,IVar1,IVar2);
  return param_3;
}



/* Address: 0x100b4ae18 | FUN_100b4ae18 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b4ae18(long param_1,undefined8 param_2,undefined8 param_3)

{
  ID IVar1;
  ID IVar2;
  
  if (param_1 == 0) {
    IVar1 = 0;
  }
  else {
    IVar1 = NSString::stringWithCString_encoding_((ID)&_OBJC_CLASS___NSString,param_1,4);
  }
  IVar2 = NSNumber::numberWithLongLong_((ID)&_OBJC_CLASS___NSNumber,param_2);
  FUN_100b4bb8c(param_3,IVar1,IVar2);
  return param_3;
}



/* Address: 0x100b4aeb0 | FUN_100b4aeb0 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b4aeb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  ID IVar1;
  ID IVar2;
  
  if (param_1 == 0) {
    IVar1 = 0;
  }
  else {
    IVar1 = NSString::stringWithCString_encoding_((ID)&_OBJC_CLASS___NSString,param_1,4);
  }
  IVar2 = NSNumber::numberWithUnsignedLongLong_((ID)&_OBJC_CLASS___NSNumber,param_2);
  FUN_100b4bb8c(param_3,IVar1,IVar2);
  return param_3;
}



/* Address: 0x100b4af48 | FUN_100b4af48 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long FUN_100b4af48(long param_1,long param_2)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  
  if (param_1 == 0) {
    IVar1 = 0;
  }
  else {
    IVar1 = NSString::stringWithCString_encoding_((ID)&_OBJC_CLASS___NSString,param_1,4);
  }
  if (*(char *)(param_2 + 10) == '\x01') {
    IVar3 = *(ID *)(param_2 + 0x18);
    IVar2 = NSArray::class((ID)&_OBJC_CLASS___NSArray);
    IVar2 = objc_stub::isKindOfClass_(IVar3,IVar2);
    if ((IVar2 & 1) == 0) goto LAB_100b4afc0;
LAB_100b4afec:
    param_2 = 0;
  }
  else {
LAB_100b4afc0:
    if (*(char *)(param_2 + 0xb) == '\x01') {
      IVar3 = *(ID *)(param_2 + 0x18);
      IVar2 = NSDictionary::class((ID)&_OBJC_CLASS___NSDictionary);
      IVar2 = objc_stub::isKindOfClass_(IVar3,IVar2);
      if ((IVar2 & 1) != 0) goto LAB_100b4afec;
    }
    IVar2 = NSNull::null((ID)&_OBJC_CLASS___NSNull);
    FUN_100b4bb8c(param_2,IVar1,IVar2);
  }
  return param_2;
}



/* Address: 0x100b4b04c | FUN_100b4b04c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b4b04c(long param_1,undefined8 param_2,undefined8 param_3)

{
  ID IVar1;
  ID IVar2;
  
  if (param_1 == 0) {
    IVar1 = 0;
  }
  else {
    IVar1 = NSString::stringWithCString_encoding_((ID)&_OBJC_CLASS___NSString,param_1,4);
  }
  IVar2 = NSString::stringWithCString_encoding_((ID)&_OBJC_CLASS___NSString,param_2,4);
  FUN_100b4bb8c(param_3,IVar1,IVar2);
  return param_3;
}



/* Address: 0x100b4b0e4 | SentryCrashJSONCodec::dealloc */

/* Function Stack Size: 0x10 bytes */

void SentryCrashJSONCodec::dealloc(ID param_1,SEL param_2)

{
  void *pvVar1;
  objc_super local_30;
  
  pvVar1 = (void *)objc_stub::FUN_100bfeca0(param_1);
  _free(pvVar1);
  local_30.super_class = &objc::class_t::SentryCrashJSONCodec;
  local_30.receiver = param_1;
  _objc_msgSendSuper2(&local_30,"dealloc");
  return;
}



/* Address: 0x100b4b12c | SentryCrashJSONCodec::encode:options:error: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autorelease replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x24 bytes */

ID SentryCrashJSONCodec::encode_options_error_
             (ID param_1,SEL param_2,ID param_3,int param_4,ID *param_5)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  undefined1 auStack_128 [224];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  IVar1 = objc_stub::data((ID)&_OBJC_CLASS___NSMutableData);
  FUN_100b56d64(auStack_128,param_4 & 1,FUN_100b4b24c,IVar1);
  IVar2 = objc_stub::FUN_100bff5e0(param_1,(ulong)param_4,0);
  IVar3 = IVar2;
  FUN_100b4b274(IVar2,param_3,0,auStack_128);
  if (param_5 != (ID *)0x0) {
    IVar2 = objc_stub::FUN_100c01e20(IVar2);
    *param_5 = IVar2;
  }
  if ((int)IVar3 != 0) {
    IVar1 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_48) {
    return IVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}



/* Address: 0x100b4b24c | FUN_100b4b24c */

undefined8 FUN_100b4b24c(undefined8 param_1,uint param_2,ID param_3)

{
  objc_stub::appendBytes_length_(param_3,param_1,(ulong)param_2);
  return 0;
}


