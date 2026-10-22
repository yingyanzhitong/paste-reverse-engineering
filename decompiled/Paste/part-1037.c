/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100b30b88 | SentrySpanInternal::removeTagForKey: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentrySpanInternal::removeTagForKey_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_sync_enter();
  objc_stub::removeObjectForKey_(*(ID *)(param_1 + 0x10),param_3);
  _objc_sync_exit(uVar1);
  return;
}



/* Address: 0x100b30bfc | SentrySpanInternal::setMeasurement:value: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void SentrySpanInternal::setMeasurement_value_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID self;
  
  self = objc_stub::FUN_100c109c0(param_1);
  objc_stub::FUN_100c0ca00(self,param_3,param_4);
  return;
}



/* Address: 0x100b30c70 | SentrySpanInternal::setMeasurement:value:unit: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x28 bytes */

void SentrySpanInternal::setMeasurement_value_unit_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  ID self;
  
  self = objc_stub::FUN_100c109c0(param_1);
  objc_stub::FUN_100c0ca20(self,param_3,param_4,param_5);
  return;
}



/* Address: 0x100b30d00 | SentrySpanInternal::tags */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentrySpanInternal::tags(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  ID IVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_sync_enter();
  IVar2 = objc_stub::copy(*(ID *)(param_1 + 0x10));
  _objc_sync_exit(uVar1);
  return IVar2;
}



/* Address: 0x100b30d60 | SentrySpanInternal::addFeatureFlagWithName:result: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x1c bytes */

void SentrySpanInternal::addFeatureFlagWithName_result_
               (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  undefined8 uVar1;
  ID self;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_sync_enter();
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    self = objc_stub::FUN_100c02300(param_1);
    objc_stub::FUN_100bfd9a0(self,param_3,(ulong)param_4);
  }
  _objc_sync_exit(uVar1);
  return;
}



/* Address: 0x100b30dfc | SentrySpanInternal::isFinished */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

bool SentrySpanInternal::isFinished(ID param_1,SEL param_2)

{
  byte bVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  _objc_sync_enter();
  bVar1 = *(byte *)(param_1 + 0x20);
  _objc_sync_exit(uVar2);
  return (bool)bVar1;
}



/* Address: 0x100b30e40 | SentrySpanInternal::finish */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SentrySpanInternal::finish(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = param_1;
  FUN_100b3a1c0();
  if ((int)IVar1 != 0) {
    IVar1 = objc_stub::spanId(param_1);
    objc_stub::FUN_100c0a0a0(IVar1);
    FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentrySpanInternal.m"
                  ,0xfe,&cf_Attemptingtofinishspanwithid__);
  }
  objc_stub::finishWithStatus_(param_1,1);
  return;
}



/* Address: 0x100b30ecc | SentrySpanInternal::finishWithStatus: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_loadWeakRetained replaced with injection: _objc_load_fixup */
/* Function Stack Size: 0x18 bytes */

void SentrySpanInternal::finishWithStatus_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  int iVar1;
  undefined8 uVar2;
  ID IVar3;
  
  objc_stub::FUN_100c0f7c0(param_1);
  objc_stub::FUN_100c0de40(param_1,param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  _objc_sync_enter();
  *(undefined1 *)(param_1 + 0x20) = 1;
  _objc_sync_exit(uVar2);
  IVar3 = objc_stub::timestamp(param_1);
  if (IVar3 == 0) {
    IVar3 = objc_stub::sharedInstance((ID)&objc::class_t::_TtC6Sentry25SentryDependencyContainer);
    IVar3 = objc_stub::FUN_100c00ac0(IVar3);
    IVar3 = objc_stub::date(IVar3);
    objc_stub::setTimestamp_(param_1,IVar3);
    iVar1 = 0;
    FUN_100b3a1c0();
    if (iVar1 != 0) {
      objc_stub::timestamp(param_1);
      IVar3 = objc_stub::sharedInstance((ID)&objc::class_t::_TtC6Sentry25SentryDependencyContainer);
      IVar3 = objc_stub::FUN_100c00ac0(IVar3);
      objc_stub::FUN_100c100e0(IVar3);
      FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentrySpanInternal.m"
                    ,0x10e,&cf_Settingspantimestamp___atsystemtime_llu);
    }
  }
  IVar3 = objc_stub::FUN_100c109c0(param_1);
  iVar1 = 0;
  FUN_100b3a1c0();
  if (IVar3 == 0) {
    if (iVar1 == 0) {
      return;
    }
    IVar3 = objc_stub::spanId(param_1);
    objc_stub::FUN_100c0a0a0(IVar3);
    FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentrySpanInternal.m"
                  ,0x131,&cf_Notracerassociatedwithspanwithid__);
  }
  else {
    if (iVar1 != 0) {
      objc_stub::FUN_100c0a0a0(*(ID *)(param_1 + 0x40));
      IVar3 = objc_stub::FUN_100c10960(*(ID *)(param_1 + 0x88));
      objc_stub::FUN_100c0a000(IVar3);
      IVar3 = objc_stub::FUN_100c083c0(*(ID *)(param_1 + 0x88));
      objc_stub::FUN_100c0a000(IVar3);
      FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentrySpanInternal.m"
                    ,0x137,&cf_Markingspan__asfinishedintracer___profileReferenceId___);
    }
    IVar3 = objc_stub::FUN_100c109c0(param_1);
    objc_stub::FUN_100c0f020(IVar3,param_1);
  }
  return;
}



/* Address: 0x100b311ac | SentrySpanInternal::toTraceHeader */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentrySpanInternal::toTraceHeader(ID param_1,SEL param_2)

{
  class_t *self;
  ID IVar1;
  ID IVar2;
  ID IVar3;
  
  self = &objc::class_t::SentryTraceHeader;
  _objc_alloc();
  IVar1 = objc_stub::FUN_100c10960(param_1);
  IVar2 = objc_stub::spanId(param_1);
  IVar3 = objc_stub::FUN_100c098c0(param_1);
  IVar1 = objc_stub::FUN_100c04ea0((ID)self,IVar1,IVar2,IVar3);
  return IVar1;
}



/* Address: 0x100b3123c | SentrySpanInternal::baggageHttpHeader */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentrySpanInternal::baggageHttpHeader(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100c109c0(param_1);
  IVar1 = objc_stub::FUN_100c10900(IVar1);
  IVar1 = objc_stub::FUN_100c10760(IVar1);
  IVar1 = objc_stub::FUN_100c10780(IVar1,0);
  return IVar1;
}



/* Address: 0x100b312bc | SentrySpanInternal::traceContext */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentrySpanInternal::traceContext(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100c109c0(param_1);
  IVar1 = objc_stub::FUN_100c10900(IVar1);
  return IVar1;
}



/* Address: 0x100b31300 | SentrySpanInternal::serialize */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentrySpanInternal::serialize(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined8 uVar2;
  ID IVar3;
  ID IVar4;
  undefined *self;
  ID self_00;
  ID IVar5;
  ID IVar6;
  long lVar7;
  ID IVar8;
  undefined8 local_180;
  long lStack_178;
  long *local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 auStack_140 [128];
  cfstringStruct *local_c0;
  cfstringStruct *pcStack_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  ID local_90;
  ID local_88;
  ID local_80;
  ID local_78;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  local_98 = &cf_trace;
  local_c0 = &cf_type;
  pcStack_b8 = &cf_span_id;
  IVar1 = objc_stub::spanId(param_1);
  local_90 = objc_stub::FUN_100c0a0a0(IVar1);
  local_b0 = &cf_trace_id;
  IVar1 = objc_stub::FUN_100c10960(param_1);
  local_88 = objc_stub::FUN_100c0a000(IVar1);
  local_a8 = &cf_op;
  local_80 = objc_stub::operation(param_1);
  local_a0 = &cf_origin;
  local_78 = objc_stub::FUN_100c07860(param_1);
  IVar1 = objc_stub::FUN_100c012c0((ID)&_OBJC_CLASS___NSDictionary,&local_98,&local_c0,5);
  IVar1 = objc_stub::mutableCopy(IVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_sync_enter();
  IVar3 = objc_stub::count(*(ID *)(param_1 + 0x10));
  if (IVar3 != 0) {
    IVar3 = objc_stub::copy(*(ID *)(param_1 + 0x10));
    objc_stub::setObject_forKeyedSubscript_(IVar1,IVar3,&cf_tags);
  }
  _objc_sync_exit(uVar2);
  IVar3 = objc_stub::FUN_100c098c0(param_1);
  if (IVar3 != 0) {
    IVar3 = objc_stub::FUN_100c098c0(param_1);
    FUN_100b56054();
    objc_stub::setValue_forKey_(IVar1,IVar3,&cf_sampled);
  }
  IVar3 = objc_stub::spanDescription(param_1);
  if (IVar3 != 0) {
    IVar3 = objc_stub::spanDescription(param_1);
    objc_stub::setValue_forKey_(IVar1,IVar3,&cf_description);
  }
  IVar3 = objc_stub::FUN_100c079e0(param_1);
  if (IVar3 != 0) {
    IVar3 = objc_stub::FUN_100c079e0(param_1);
    IVar3 = objc_stub::FUN_100c0a0a0(IVar3);
    objc_stub::setValue_forKey_(IVar1,IVar3,&cf_parent_span_id);
  }
  IVar3 = objc_stub::status(param_1);
  if (IVar3 != 0) {
    IVar3 = objc_stub::status(param_1);
    FUN_100b16920();
    objc_stub::setValue_forKey_(IVar1,IVar3,&cf_status);
  }
  IVar3 = objc_stub::timestamp(param_1);
  objc_stub::timeIntervalSince1970(IVar3);
  IVar3 = objc_stub::numberWithDouble_((ID)&_OBJC_CLASS___NSNumber);
  objc_stub::setValue_forKey_(IVar1,IVar3,&cf_timestamp);
  IVar3 = objc_stub::FUN_100c0f4e0(param_1);
  objc_stub::timeIntervalSince1970(IVar3);
  IVar3 = objc_stub::numberWithDouble_((ID)&_OBJC_CLASS___NSNumber);
  objc_stub::setValue_forKey_(IVar1,IVar3,&cf_start_timestamp);
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_sync_enter();
  IVar3 = objc_stub::mutableCopy(*(ID *)(param_1 + 8));
  IVar4 = objc_stub::FUN_100c02300(param_1);
  IVar4 = objc_stub::FUN_100c0a1a0(IVar4);
  objc_stub::addEntriesFromDictionary_(IVar3,IVar4);
  IVar4 = objc_stub::frames(param_1);
  if (IVar4 != 0) {
    IVar4 = objc_stub::frames(param_1);
    IVar4 = objc_stub::count(IVar4);
    if (IVar4 != 0) {
      self = &_OBJC_CLASS___NSMutableArray;
      _objc_alloc();
      IVar4 = objc_stub::frames(param_1);
      IVar4 = objc_stub::count(IVar4);
      IVar4 = objc_stub::FUN_100c03c60((ID)self,IVar4);
      uStack_158 = 0;
      local_160 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      lStack_178 = 0;
      local_180 = 0;
      uStack_168 = 0;
      local_170 = (long *)0x0;
      self_00 = objc_stub::frames(param_1);
      IVar5 = objc_stub::countByEnumeratingWithState_objects_count_
                        (self_00,&local_180,auStack_140,0x10);
      if (IVar5 != 0) {
        lVar7 = *local_170;
        do {
          IVar8 = 0;
          do {
            if (*local_170 != lVar7) {
              _objc_enumerationMutation(self_00);
            }
            IVar6 = objc_stub::serialize(*(ID *)(lStack_178 + IVar8 * 8));
            objc_stub::addObject_(IVar4,IVar6);
            IVar8 = IVar8 + 1;
          } while (IVar5 != IVar8);
          IVar5 = objc_stub::countByEnumeratingWithState_objects_count_
                            (self_00,&local_180,auStack_140,0x10);
        } while (IVar5 != 0);
      }
      objc_stub::setObject_forKeyedSubscript_(IVar3,IVar4,&cf_call_stack);
    }
  }
  IVar4 = objc_stub::count(IVar3);
  if (IVar4 != 0) {
    IVar3 = objc_stub::copy(IVar3);
    FUN_100bcfb78();
    objc_stub::setObject_forKeyedSubscript_(IVar1,IVar3,&cf_data);
  }
  _objc_sync_exit(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_sync_enter();
  IVar3 = objc_stub::count(*(ID *)(param_1 + 0x10));
  if (IVar3 != 0) {
    IVar3 = objc_stub::copy(*(ID *)(param_1 + 0x10));
    objc_stub::setObject_forKeyedSubscript_(IVar1,IVar3,&cf_tags);
  }
  _objc_sync_exit(uVar2);
  IVar3 = 0;
  if (*(long *)(param_1 + 0xa0) != 0) {
    IVar3 = objc_stub::setObject_forKeyedSubscript_(IVar1,*(long *)(param_1 + 0xa0),&cf_profiler_id)
    ;
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_70) {
    return IVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(IVar3);
}



/* Address: 0x100b3199c | SentrySpanInternal::traceId */

/* Function Stack Size: 0x10 bytes */

ID SentrySpanInternal::traceId(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x38);
}



/* Address: 0x100b319a4 | SentrySpanInternal::setTraceId: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentrySpanInternal::setTraceId_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x38) = param_3;
  return;
}



/* Address: 0x100b319b0 | SentrySpanInternal::spanId */

/* Function Stack Size: 0x10 bytes */

ID SentrySpanInternal::spanId(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x40);
}



/* Address: 0x100b319b8 | SentrySpanInternal::setSpanId: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentrySpanInternal::setSpanId_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x40) = param_3;
  return;
}



/* Address: 0x100b319c4 | SentrySpanInternal::parentSpanId */

/* Function Stack Size: 0x10 bytes */

ID SentrySpanInternal::parentSpanId(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x48);
}



/* Address: 0x100b319cc | SentrySpanInternal::setParentSpanId: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentrySpanInternal::setParentSpanId_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x48) = param_3;
  return;
}



/* Address: 0x100b319d8 | SentrySpanInternal::sampled */

/* Function Stack Size: 0x10 bytes */

unsigned_long_long SentrySpanInternal::sampled(ID param_1,SEL param_2)

{
  return *(unsigned_long_long *)(param_1 + 0x50);
}



/* Address: 0x100b319e0 | SentrySpanInternal::setSampled: */

/* Function Stack Size: 0x18 bytes */

void SentrySpanInternal::setSampled_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  *(unsigned_long_long *)(param_1 + 0x50) = param_3;
  return;
}



/* Address: 0x100b319e8 | SentrySpanInternal::operation */

/* Function Stack Size: 0x10 bytes */

ID SentrySpanInternal::operation(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x58);
}



/* Address: 0x100b319f0 | SentrySpanInternal::setOperation: */

/* WARNING: Function: _objc_setProperty_nonatomic_copy replaced with injection:
   _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void SentrySpanInternal::setOperation_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x58) = param_3;
  return;
}



/* Address: 0x100b319f8 | SentrySpanInternal::spanDescription */

/* Function Stack Size: 0x10 bytes */

ID SentrySpanInternal::spanDescription(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x60);
}



/* Address: 0x100b31a00 | SentrySpanInternal::setSpanDescription: */

/* WARNING: Function: _objc_setProperty_nonatomic_copy replaced with injection:
   _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void SentrySpanInternal::setSpanDescription_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x60) = param_3;
  return;
}



/* Address: 0x100b31a08 | SentrySpanInternal::origin */

/* Function Stack Size: 0x10 bytes */

ID SentrySpanInternal::origin(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x68);
}



/* Address: 0x100b31a10 | SentrySpanInternal::setOrigin: */

/* WARNING: Function: _objc_setProperty_nonatomic_copy replaced with injection:
   _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void SentrySpanInternal::setOrigin_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x68) = param_3;
  return;
}



/* Address: 0x100b31a18 | SentrySpanInternal::status */

/* Function Stack Size: 0x10 bytes */

unsigned_long_long SentrySpanInternal::status(ID param_1,SEL param_2)

{
  return *(unsigned_long_long *)(param_1 + 0x70);
}



/* Address: 0x100b31a20 | SentrySpanInternal::setStatus: */

/* Function Stack Size: 0x18 bytes */

void SentrySpanInternal::setStatus_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  *(unsigned_long_long *)(param_1 + 0x70) = param_3;
  return;
}



/* Address: 0x100b31a28 | SentrySpanInternal::timestamp */

/* Function Stack Size: 0x10 bytes */

ID SentrySpanInternal::timestamp(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x78);
}



/* Address: 0x100b31a30 | SentrySpanInternal::setTimestamp: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentrySpanInternal::setTimestamp_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x78) = param_3;
  return;
}



/* Address: 0x100b31a3c | SentrySpanInternal::startTimestamp */

/* Function Stack Size: 0x10 bytes */

ID SentrySpanInternal::startTimestamp(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x80);
}



/* Address: 0x100b31a44 | SentrySpanInternal::setStartTimestamp: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentrySpanInternal::setStartTimestamp_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x80) = param_3;
  return;
}



/* Address: 0x100b31a50 | SentrySpanInternal::tracer */

/* WARNING: Function: _objc_loadWeakRetained replaced with injection: _objc_load_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentrySpanInternal::tracer(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x88);
}



/* Address: 0x100b31a68 | SentrySpanInternal::frames */

/* Function Stack Size: 0x10 bytes */

ID SentrySpanInternal::frames(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x90);
}



/* Address: 0x100b31a70 | SentrySpanInternal::setFrames: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentrySpanInternal::setFrames_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x90) = param_3;
  return;
}



/* Address: 0x100b31a7c | SentrySpanInternal::featureFlagBuffer */

/* Function Stack Size: 0x10 bytes */

ID SentrySpanInternal::featureFlagBuffer(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x98);
}



/* Address: 0x100b31a84 | SentrySpanInternal::setFeatureFlagBuffer: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentrySpanInternal::setFeatureFlagBuffer_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x98) = param_3;
  return;
}



/* Address: 0x100b31a90 | SentrySpanInternal::profileSessionID */

/* Function Stack Size: 0x10 bytes */

ID SentrySpanInternal::profileSessionID(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0xa0);
}



/* Address: 0x100b31a98 | SentrySpanInternal::setProfileSessionID: */

/* WARNING: Function: _objc_setProperty_nonatomic_copy replaced with injection:
   _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void SentrySpanInternal::setProfileSessionID_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0xa0) = param_3;
  return;
}



/* Address: 0x100b31aa0 | SentrySpanInternal::.cxx_destruct */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void SentrySpanInternal::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  _objc_destroyWeak(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



/* Address: 0x100b31b68 | SentryBreadcrumb::setLevel: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryBreadcrumb::setLevel_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  _objc_sync_enter();
  *(unsigned_long_long *)(param_1 + 0x10) = param_3;
  _objc_sync_exit(param_1);
  return;
}



/* Address: 0x100b31ba0 | SentryBreadcrumb::level */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

unsigned_long_long SentryBreadcrumb::level(ID param_1,SEL param_2)

{
  unsigned_long_long uVar1;
  
  _objc_sync_enter();
  uVar1 = *(unsigned_long_long *)(param_1 + 0x10);
  _objc_sync_exit(param_1);
  return uVar1;
}



/* Address: 0x100b31bdc | SentryBreadcrumb::setCategory: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryBreadcrumb::setCategory_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined8 uVar2;
  
  _objc_sync_enter();
  IVar1 = objc_stub::copy(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(ID *)(param_1 + 0x18) = IVar1;
  _objc_sync_exit(uVar2,param_1);
  return;
}



/* Address: 0x100b31c54 | SentryBreadcrumb::category */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryBreadcrumb::category(ID param_1,SEL param_2)

{
  ID IVar1;
  
  _objc_sync_enter();
  IVar1 = *(ID *)(param_1 + 0x18);
  _objc_sync_exit(param_1);
  return IVar1;
}



/* Address: 0x100b31c98 | SentryBreadcrumb::setTimestamp: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryBreadcrumb::setTimestamp_(ID param_1,SEL param_2,ID param_3)

{
  _objc_sync_enter();
  *(ID *)(param_1 + 0x20) = param_3;
  _objc_sync_exit(param_1);
  return;
}



/* Address: 0x100b31ce8 | SentryBreadcrumb::timestamp */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryBreadcrumb::timestamp(ID param_1,SEL param_2)

{
  ID IVar1;
  
  _objc_sync_enter();
  IVar1 = *(ID *)(param_1 + 0x20);
  _objc_sync_exit(param_1);
  return IVar1;
}



/* Address: 0x100b31d2c | SentryBreadcrumb::setType: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryBreadcrumb::setType_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined8 uVar2;
  
  _objc_sync_enter();
  IVar1 = objc_stub::copy(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(ID *)(param_1 + 0x28) = IVar1;
  _objc_sync_exit(uVar2,param_1);
  return;
}



/* Address: 0x100b31da4 | SentryBreadcrumb::type */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryBreadcrumb::type(ID param_1,SEL param_2)

{
  ID IVar1;
  
  _objc_sync_enter();
  IVar1 = *(ID *)(param_1 + 0x28);
  _objc_sync_exit(param_1);
  return IVar1;
}



/* Address: 0x100b31de8 | SentryBreadcrumb::setMessage: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryBreadcrumb::setMessage_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined8 uVar2;
  
  _objc_sync_enter();
  IVar1 = objc_stub::copy(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(ID *)(param_1 + 0x30) = IVar1;
  _objc_sync_exit(uVar2,param_1);
  return;
}



/* Address: 0x100b31e60 | SentryBreadcrumb::message */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryBreadcrumb::message(ID param_1,SEL param_2)

{
  ID IVar1;
  
  _objc_sync_enter();
  IVar1 = *(ID *)(param_1 + 0x30);
  _objc_sync_exit(param_1);
  return IVar1;
}



/* Address: 0x100b31ea4 | SentryBreadcrumb::setOrigin: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryBreadcrumb::setOrigin_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined8 uVar2;
  
  _objc_sync_enter();
  IVar1 = objc_stub::copy(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  *(ID *)(param_1 + 0x38) = IVar1;
  _objc_sync_exit(uVar2,param_1);
  return;
}



/* Address: 0x100b31f1c | SentryBreadcrumb::origin */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryBreadcrumb::origin(ID param_1,SEL param_2)

{
  ID IVar1;
  
  _objc_sync_enter();
  IVar1 = *(ID *)(param_1 + 0x38);
  _objc_sync_exit(param_1);
  return IVar1;
}



/* Address: 0x100b31f60 | SentryBreadcrumb::setData: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryBreadcrumb::setData_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  _objc_sync_enter();
  if (param_3 == 0) {
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    FUN_100b32008();
    IVar1 = objc_stub::mutableCopy(param_3);
    *(ID *)(param_1 + 8) = IVar1;
  }
  _objc_sync_exit(param_1);
  return;
}



/* Address: 0x100b32008 | FUN_100b32008 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID FUN_100b32008(ID param_1)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  undefined8 uVar5;
  long lVar6;
  ID IVar7;
  undefined8 local_1f0;
  long lStack_1e8;
  long *local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  long lStack_1a8;
  long *local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_168 [128];
  undefined1 auStack_e8 [128];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  IVar1 = objc_stub::class((ID)&_OBJC_CLASS___NSDictionary);
  IVar1 = objc_stub::isKindOfClass_(param_1,IVar1);
  if ((int)IVar1 == 0) {
    IVar1 = objc_stub::class((ID)&_OBJC_CLASS___NSArray);
    IVar1 = objc_stub::isKindOfClass_(param_1,IVar1);
    if ((int)IVar1 == 0) goto LAB_100b3228c;
    IVar2 = objc_stub::copy(param_1);
    IVar1 = objc_stub::count(IVar2);
    IVar1 = objc_stub::arrayWithCapacity_((ID)&_OBJC_CLASS___NSMutableArray,IVar1);
    lStack_1e8 = 0;
    local_1f0 = 0;
    uStack_1d8 = 0;
    local_1e0 = (long *)0x0;
    uStack_1c8 = 0;
    local_1d0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    IVar3 = objc_stub::countByEnumeratingWithState_objects_count_(IVar2,&local_1f0,auStack_168,0x10)
    ;
    if (IVar3 != 0) {
      lVar6 = *local_1e0;
      do {
        IVar7 = 0;
        do {
          if (*local_1e0 != lVar6) {
            _objc_enumerationMutation(IVar2);
          }
          uVar5 = *(undefined8 *)(lStack_1e8 + IVar7 * 8);
          FUN_100b32008(uVar5);
          objc_stub::addObject_(IVar1,uVar5);
          IVar7 = IVar7 + 1;
        } while (IVar3 != IVar7);
        IVar3 = objc_stub::countByEnumeratingWithState_objects_count_
                          (IVar2,&local_1f0,auStack_168,0x10);
      } while (IVar3 != 0);
    }
  }
  else {
    IVar2 = objc_stub::copy(param_1);
    IVar1 = objc_stub::count(IVar2);
    IVar1 = objc_stub::dictionaryWithCapacity_((ID)&_OBJC_CLASS___NSMutableDictionary,IVar1);
    lStack_1a8 = 0;
    local_1b0 = 0;
    uStack_198 = 0;
    local_1a0 = (long *)0x0;
    uStack_188 = 0;
    local_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    IVar3 = objc_stub::countByEnumeratingWithState_objects_count_(IVar2,&local_1b0,auStack_e8,0x10);
    if (IVar3 != 0) {
      lVar6 = *local_1a0;
      do {
        IVar7 = 0;
        do {
          if (*local_1a0 != lVar6) {
            _objc_enumerationMutation(IVar2);
          }
          uVar5 = *(undefined8 *)(lStack_1a8 + IVar7 * 8);
          IVar4 = objc_stub::objectForKeyedSubscript_(IVar2,uVar5);
          if (IVar4 != 0) {
            FUN_100b32008(IVar4);
            objc_stub::setObject_forKeyedSubscript_(IVar1,IVar4,uVar5);
          }
          IVar7 = IVar7 + 1;
        } while (IVar3 != IVar7);
        IVar3 = objc_stub::countByEnumeratingWithState_objects_count_
                          (IVar2,&local_1b0,auStack_e8,0x10);
      } while (IVar3 != 0);
    }
  }
  param_1 = objc_stub::copy(IVar1);
LAB_100b3228c:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return param_1;
}



/* Address: 0x100b322d4 | SentryBreadcrumb::data */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryBreadcrumb::data(ID param_1,SEL param_2)

{
  ID IVar1;
  
  _objc_sync_enter();
  IVar1 = objc_stub::copy(*(ID *)(param_1 + 8));
  _objc_sync_exit(param_1);
  return IVar1;
}



/* Address: 0x100b3232c | SentryBreadcrumb::setDataValue:forKey: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void SentryBreadcrumb::setDataValue_forKey_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  undefined *self;
  
  _objc_sync_enter();
  IVar1 = *(ID *)(param_1 + 8);
  if (IVar1 == 0) {
    if (param_3 == 0) goto LAB_100b323a8;
    self = &_OBJC_CLASS___NSMutableDictionary;
    _objc_alloc();
    IVar1 = objc_stub::init((ID)self);
    *(ID *)(param_1 + 8) = IVar1;
    IVar1 = *(ID *)(param_1 + 8);
  }
  objc_stub::setValue_forKey_(IVar1,param_3,param_4);
LAB_100b323a8:
  _objc_sync_exit(param_1);
  return;
}



/* Address: 0x100b323e8 | SentryBreadcrumb::initWithDictionary: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryBreadcrumb::initWithDictionary_(ID param_1,SEL param_2,ID param_3)

{
  ID self;
  ID IVar1;
  ID self_00;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  long lVar6;
  uint uVar7;
  ID IVar8;
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
  local_100.super_class = &objc::class_t::SentryBreadcrumb;
  local_100.receiver = param_1;
  self = _objc_msgSendSuper2(&local_100,"init");
  if (self != 0) {
    uStack_118 = 0;
    local_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    lStack_138 = 0;
    local_140 = 0;
    uStack_128 = 0;
    local_130 = (long *)0x0;
    IVar1 = objc_stub::countByEnumeratingWithState_objects_count_
                      (param_3,&local_140,auStack_f0,0x10);
    if (IVar1 != 0) {
      lVar6 = *local_130;
      do {
        IVar5 = 0;
        do {
          if (*local_130 != lVar6) {
            _objc_enumerationMutation(param_3);
          }
          IVar8 = *(ID *)(lStack_138 + IVar5 * 8);
          self_00 = objc_stub::FUN_100c112a0(param_3,IVar8);
          if (self_00 != 0) {
            IVar2 = objc_stub::class((ID)&_OBJC_CLASS___NSString);
            IVar2 = objc_stub::isKindOfClass_(self_00,IVar2);
            IVar3 = objc_stub::class((ID)&_OBJC_CLASS___NSDictionary);
            IVar3 = objc_stub::isKindOfClass_(self_00,IVar3);
            IVar4 = objc_stub::isEqualToString_(IVar8,&cf_level);
            uVar7 = (uint)IVar2;
            if ((int)IVar4 == 0 || uVar7 == 0) {
              IVar2 = objc_stub::isEqualToString_(IVar8,&cf_timestamp);
              if (((uint)IVar2 & uVar7) == 1) {
                FUN_100b40378(self_00);
                objc_stub::setTimestamp_(self,self_00);
              }
              else {
                IVar2 = objc_stub::isEqualToString_(IVar8,&cf_category);
                if (((uint)IVar2 & uVar7) == 1) {
                  objc_stub::setCategory_(self,self_00);
                }
                else {
                  IVar2 = objc_stub::isEqualToString_(IVar8,&cf_type);
                  if (((uint)IVar2 & uVar7) == 1) {
                    objc_stub::FUN_100c0e600(self,self_00);
                  }
                  else {
                    IVar2 = objc_stub::isEqualToString_(IVar8,&cf_origin);
                    if (((uint)IVar2 & uVar7) == 1) {
                      objc_stub::FUN_100c0cf40(self,self_00);
                    }
                    else {
                      IVar2 = objc_stub::isEqualToString_(IVar8,&cf_message);
                      if (((uint)IVar2 & uVar7) == 1) {
                        objc_stub::setMessage_(self,self_00);
                      }
                      else {
                        IVar8 = objc_stub::isEqualToString_(IVar8,&cf_data);
                        if (((uint)IVar8 & (uint)IVar3) == 1) {
                          objc_stub::setData_(self,self_00);
                        }
                      }
                    }
                  }
                }
              }
            }
            else {
              FUN_100b425d0(self_00);
              objc_stub::setLevel_(self,self_00);
            }
          }
          IVar5 = IVar5 + 1;
        } while (IVar1 != IVar5);
        IVar1 = objc_stub::countByEnumeratingWithState_objects_count_
                          (param_3,&local_140,auStack_f0,0x10);
      } while (IVar1 != 0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_70) {
    return self;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}



/* Address: 0x100b326e0 | SentryBreadcrumb::initWithLevel:category: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

ID SentryBreadcrumb::initWithLevel_category_
             (ID param_1,SEL param_2,unsigned_long_long param_3,ID param_4)

{
  ID self;
  ID IVar1;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::SentryBreadcrumb;
  local_40.receiver = param_1;
  self = _objc_msgSendSuper2(&local_40,"init");
  if (self != 0) {
    objc_stub::setLevel_(self,param_3);
    objc_stub::setCategory_(self,param_4);
    IVar1 = objc_stub::date((ID)&_OBJC_CLASS___NSDate);
    objc_stub::setTimestamp_(self,IVar1);
  }
  return self;
}



/* Address: 0x100b32790 | SentryBreadcrumb::initWithLevel:category:data: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x28 bytes */

ID SentryBreadcrumb::initWithLevel_category_data_
             (ID param_1,SEL param_2,unsigned_long_long param_3,ID param_4,ID param_5)

{
  ID IVar1;
  undefined *self;
  ID IVar2;
  
  IVar1 = objc_stub::FUN_100c044c0(param_1,param_3,param_4);
  if (IVar1 != 0) {
    self = &_OBJC_CLASS___NSMutableDictionary;
    _objc_alloc();
    IVar2 = objc_stub::initWithDictionary_((ID)self,param_5);
    *(ID *)(IVar1 + 8) = IVar2;
  }
  return IVar1;
}



/* Address: 0x100b32810 | SentryBreadcrumb::init */

/* Function Stack Size: 0x10 bytes */

ID SentryBreadcrumb::init(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100c044c0(param_1,2,&cf_default);
  return IVar1;
}



/* Address: 0x100b32820 | SentryBreadcrumb::snapshotCopy */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryBreadcrumb::snapshotCopy(ID param_1,SEL param_2)

{
  class_t *self;
  ID IVar1;
  ID IVar2;
  undefined8 uVar3;
  
  self = &objc::class_t::SentryBreadcrumb;
  _objc_alloc();
  IVar1 = objc_stub::init((ID)self);
  _objc_sync_enter();
  *(undefined8 *)(IVar1 + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(IVar1 + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(IVar1 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(IVar1 + 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(IVar1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(IVar1 + 0x38) = *(undefined8 *)(param_1 + 0x38);
  IVar2 = objc_stub::mutableCopy(*(ID *)(param_1 + 8));
  uVar3 = *(undefined8 *)(IVar1 + 8);
  *(ID *)(IVar1 + 8) = IVar2;
  _objc_sync_exit(uVar3,param_1);
  return IVar1;
}



/* Address: 0x100b328e4 | SentryBreadcrumb::serialize */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryBreadcrumb::serialize(ID param_1,SEL param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ID self;
  undefined *self_00;
  ID self_01;
  ID IVar6;
  undefined8 uVar7;
  
  _objc_sync_enter();
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  self = objc_stub::copy(*(ID *)(param_1 + 8));
  _objc_sync_exit(param_1);
  self_00 = &_OBJC_CLASS___NSMutableDictionary;
  _objc_alloc();
  self_01 = objc_stub::init((ID)self_00);
  FUN_100b425e0(uVar7);
  objc_stub::setValue_forKey_(self_01,uVar7,&cf_level);
  if (lVar1 != 0) {
    FUN_100b40420(lVar1);
    objc_stub::setValue_forKey_(self_01,lVar1,&cf_timestamp);
  }
  objc_stub::setValue_forKey_(self_01,uVar2,&cf_category);
  objc_stub::setValue_forKey_(self_01,uVar3,&cf_type);
  objc_stub::setValue_forKey_(self_01,uVar4,&cf_origin);
  objc_stub::setValue_forKey_(self_01,uVar5,&cf_message);
  IVar6 = objc_stub::count(self);
  if (IVar6 != 0) {
    FUN_100bcfb78(self);
    objc_stub::setValue_forKey_(self_01,self,&cf_data);
  }
  return self_01;
}



/* Address: 0x100b32ac8 | SentryBreadcrumb::isEqual: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

bool SentryBreadcrumb::isEqual_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  bool bVar2;
  
  if (param_3 == param_1) {
    bVar2 = 1;
  }
  else {
    if (param_3 != 0) {
      IVar1 = objc_stub::class((ID)&objc::class_t::SentryBreadcrumb);
      IVar1 = objc_stub::isKindOfClass_(param_3,IVar1);
      if ((int)IVar1 != 0) {
        IVar1 = objc_stub::FUN_100c057c0(param_1,param_3);
        return (bool)IVar1;
      }
    }
    bVar2 = 0;
  }
  return bVar2;
}



/* Address: 0x100b32b44 | SentryBreadcrumb::isEqualToBreadcrumb: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

bool SentryBreadcrumb::isEqualToBreadcrumb_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  uint uVar3;
  
  if (param_1 == param_3) {
    uVar3 = 1;
    goto LAB_100b32eac;
  }
  if (param_3 != 0) {
    IVar1 = objc_stub::FUN_100c06200(param_1);
    IVar2 = objc_stub::FUN_100c06200(param_3);
    if (IVar1 == IVar2) {
      IVar1 = objc_stub::FUN_100bff0c0(param_1);
      IVar2 = objc_stub::FUN_100bff0c0(param_3);
      if (IVar1 != IVar2) {
        IVar1 = objc_stub::FUN_100bff0c0(param_1);
        IVar2 = objc_stub::FUN_100bff0c0(param_3);
        IVar1 = objc_stub::isEqualToString_(IVar1,IVar2);
        if ((int)IVar1 == 0) goto LAB_100b32ea8;
      }
      IVar1 = objc_stub::timestamp(param_1);
      IVar2 = objc_stub::timestamp(param_3);
      if (IVar1 != IVar2) {
        IVar1 = objc_stub::timestamp(param_1);
        IVar2 = objc_stub::timestamp(param_3);
        IVar1 = objc_stub::FUN_100c057e0(IVar1,IVar2);
        if ((int)IVar1 == 0) goto LAB_100b32ea8;
      }
      IVar1 = objc_stub::type(param_1);
      IVar2 = objc_stub::type(param_3);
      if (IVar1 != IVar2) {
        IVar1 = objc_stub::type(param_1);
        IVar2 = objc_stub::type(param_3);
        IVar1 = objc_stub::isEqualToString_(IVar1,IVar2);
        if ((int)IVar1 == 0) goto LAB_100b32ea8;
      }
      IVar1 = objc_stub::FUN_100c07860(param_1);
      IVar2 = objc_stub::FUN_100c07860(param_3);
      if (IVar1 != IVar2) {
        IVar1 = objc_stub::FUN_100c07860(param_1);
        IVar2 = objc_stub::FUN_100c07860(param_3);
        IVar1 = objc_stub::isEqualToString_(IVar1,IVar2);
        if ((int)IVar1 == 0) goto LAB_100b32ea8;
      }
      IVar1 = objc_stub::FUN_100c06ca0(param_1);
      IVar2 = objc_stub::FUN_100c06ca0(param_3);
      if (IVar1 != IVar2) {
        IVar1 = objc_stub::FUN_100c06ca0(param_1);
        IVar2 = objc_stub::FUN_100c06ca0(param_3);
        IVar1 = objc_stub::isEqualToString_(IVar1,IVar2);
        if ((int)IVar1 == 0) goto LAB_100b32ea8;
      }
      IVar1 = objc_stub::data(param_1);
      IVar2 = objc_stub::data(param_3);
      if (IVar1 == IVar2) {
        uVar3 = 1;
      }
      else {
        IVar1 = objc_stub::data(param_1);
        IVar2 = objc_stub::data(param_3);
        IVar1 = objc_stub::FUN_100c05800(IVar1,IVar2);
        uVar3 = (uint)IVar1;
      }
      goto LAB_100b32eac;
    }
  }
LAB_100b32ea8:
  uVar3 = 0;
LAB_100b32eac:
  return uVar3 & 1;
}


