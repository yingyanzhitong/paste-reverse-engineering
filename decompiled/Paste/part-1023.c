/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100b0f158 | FUN_100b0f158 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b0f158(long param_1,undefined8 param_2)

{
  ID self;
  ID IVar1;
  
  self = *(ID *)(param_1 + 0x20);
  IVar1 = objc_stub::exceptionForError_(*(ID *)(param_1 + 0x28),param_2);
  objc_stub::addObject_(self,IVar1);
  return 0;
}



/* Address: 0x100b0f198 | FUN_100b0f198 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_100b0f198(undefined8 param_1,long param_2)

{
  return *(undefined8 *)(param_2 + 0x28);
}



/* Address: 0x100b0f1c0 | SentryClientInternal::exceptionForError: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryClientInternal::exceptionForError_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  class_t *pcVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  
  IVar1 = objc_stub::userInfo(param_3);
  IVar1 = objc_stub::FUN_100c112a0(IVar1,*(undefined8 *)PTR__NSDebugDescriptionErrorKey_100ea7b90);
  IVar2 = objc_stub::class(param_3);
  _NSStringFromClass();
  IVar2 = objc_stub::containsString_(IVar2,&cf_SwiftNativeNSError);
  if ((int)IVar2 == 0) {
    if (IVar1 == 0) {
LAB_100b0f2c8:
      objc_stub::code(param_3);
      IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_Code__ld);
      goto LAB_100b0f2f8;
    }
LAB_100b0f28c:
    objc_stub::code(param_3);
  }
  else {
    IVar2 = objc_stub::FUN_100c02fa0((ID)&objc::class_t::_TtC6Sentry15SwiftDescriptor,param_3);
    if (IVar1 != 0) goto LAB_100b0f28c;
    if (IVar2 == 0) goto LAB_100b0f2c8;
    objc_stub::code(param_3);
  }
  IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf____Code__ld_);
LAB_100b0f2f8:
  pcVar3 = &objc::class_t::SentryException;
  _objc_alloc();
  IVar2 = objc_stub::domain(param_3);
  IVar1 = objc_stub::FUN_100c051e0((ID)pcVar3,IVar1,IVar2);
  pcVar3 = &objc::class_t::SentryMechanism;
  _objc_alloc();
  IVar2 = objc_stub::FUN_100c04fa0((ID)pcVar3,&cf_NSError);
  pcVar3 = &objc::class_t::SentryMechanismContext;
  _objc_alloc();
  IVar4 = objc_stub::init((ID)pcVar3);
  pcVar3 = &objc::class_t::SentryNSError;
  _objc_alloc();
  IVar5 = objc_stub::domain(param_3);
  IVar6 = objc_stub::code(param_3);
  IVar5 = objc_stub::FUN_100c04000((ID)pcVar3,IVar5,IVar6);
  objc_stub::setError_(IVar4,IVar5);
  objc_stub::FUN_100c0cae0(IVar2,IVar4);
  IVar4 = objc_stub::description(param_3);
  objc_stub::FUN_100c0b4e0(IVar2,IVar4);
  IVar4 = objc_stub::userInfo(param_3);
  FUN_100bcfb78(IVar4);
  objc_stub::setData_(IVar2,IVar4);
  objc_stub::FUN_100c0ca40(IVar1,IVar2);
  return IVar1;
}



/* Address: 0x100b0f498 | SentryClientInternal::captureFatalEvent:withScope: */

/* Function Stack Size: 0x20 bytes */

ID SentryClientInternal::captureFatalEvent_withScope_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100c09f40(param_1,param_3,param_4,0,1);
  return IVar1;
}



/* Address: 0x100b0f4a4 | SentryClientInternal::captureFatalEvent:withSession:withScope: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x28 bytes */

ID SentryClientInternal::captureFatalEvent_withSession_withScope_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100c08020(param_1,param_3,param_5,0,1);
  IVar1 = objc_stub::FUN_100c09fa0(param_1,IVar1,param_4,param_5);
  return IVar1;
}



/* Address: 0x100b0f548 | SentryClientInternal::saveCrashTransaction:withScope: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void SentryClientInternal::saveCrashTransaction_withScope_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  ID IVar2;
  ID self;
  
  IVar1 = objc_stub::FUN_100c08020(param_1,param_3,param_4,0,0);
  if (IVar1 != 0) {
    IVar2 = objc_stub::FUN_100c03060(param_1,param_3,param_4);
    self = objc_stub::FUN_100c10b80(param_1);
    objc_stub::FUN_100c0f840(self,IVar1,IVar2);
  }
  return;
}



/* Address: 0x100b0f618 | SentryClientInternal::captureEvent: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryClientInternal::captureEvent_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  class_t *self;
  
  self = &objc::class_t::SentryScope;
  _objc_alloc();
  IVar1 = objc_stub::init((ID)self);
  IVar1 = objc_stub::FUN_100bfee40(param_1,param_3,IVar1);
  return IVar1;
}



/* Address: 0x100b0f690 | SentryClientInternal::captureEvent:withScope: */

/* Function Stack Size: 0x20 bytes */

ID SentryClientInternal::captureEvent_withScope_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100c09f20(param_1,param_3,param_4,0);
  return IVar1;
}



/* Address: 0x100b0f698 | SentryClientInternal::captureEvent:withScope:additionalEnvelopeItems: */

/* Function Stack Size: 0x28 bytes */

ID SentryClientInternal::captureEvent_withScope_additionalEnvelopeItems_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100c09f60(param_1,param_3,param_4,0,0,param_5);
  return IVar1;
}



/* Address: 0x100b0f6a8 | SentryClientInternal::captureEventIncrementingSessionErrorCount:withScope: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID SentryClientInternal::captureEventIncrementingSessionErrorCount_withScope_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = objc_stub::FUN_100c08000(param_1,param_3,param_4,1);
  if (IVar1 == 0) {
    IVar1 = objc_stub::FUN_100c01800((ID)&objc::class_t::SentryId);
  }
  else {
    IVar2 = objc_stub::FUN_100c0a2a0(param_1);
    if (IVar2 == 0) {
      IVar2 = 0;
    }
    else {
      IVar2 = objc_stub::FUN_100c03860(IVar2);
    }
    IVar1 = objc_stub::FUN_100c09fa0(param_1,IVar1,IVar2,param_4);
  }
  return IVar1;
}



/* Address: 0x100b0f79c | SentryClientInternal::sendEvent:withScope:alwaysAttachStacktrace: */

/* Function Stack Size: 0x24 bytes */

ID SentryClientInternal::sendEvent_withScope_alwaysAttachStacktrace_
             (ID param_1,SEL param_2,ID param_3,ID param_4,bool param_5)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100c09f40(param_1,param_3,param_4,(ulong)param_5,0);
  return IVar1;
}



/* Address: 0x100b0f7a4 | SentryClientInternal::getTraceStateWithEvent:withScope: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID SentryClientInternal::getTraceStateWithEvent_withScope_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  class_t *pcVar2;
  ID IVar3;
  ID IVar4;
  
  IVar1 = objc_stub::class((ID)&objc::class_t::SentryTransaction);
  IVar1 = objc_stub::isKindOfClass_(param_3,IVar1);
  if ((int)IVar1 == 0) {
    IVar1 = objc_stub::FUN_100c0efc0(param_4);
  }
  else {
    IVar1 = objc_stub::FUN_100c108e0(param_3);
  }
  IVar1 = objc_stub::FUN_100c03080((ID)&objc::class_t::SentryTracer,IVar1);
  if (IVar1 == 0) {
    IVar1 = objc_stub::FUN_100c01e20(param_3);
    if (IVar1 == 0) {
      IVar1 = objc_stub::FUN_100c02020(param_3);
      IVar1 = objc_stub::count(IVar1);
      if (IVar1 == 0) {
        return 0;
      }
    }
    pcVar2 = &objc::class_t::SentryTraceContext;
    _objc_alloc();
    IVar1 = objc_stub::FUN_100c084a0(param_4);
    IVar1 = objc_stub::FUN_100c10960(IVar1);
    IVar3 = objc_stub::options(param_1);
    IVar4 = objc_stub::FUN_100c092a0(param_4);
    IVar1 = objc_stub::FUN_100c04de0((ID)pcVar2,IVar1,IVar3,IVar4);
  }
  else {
    pcVar2 = &objc::class_t::SentryTraceContext;
    _objc_alloc();
    IVar1 = objc_stub::FUN_100c04ee0((ID)pcVar2,IVar1,param_4,*(undefined8 *)(param_1 + 0x10));
  }
  return IVar1;
}



/* Address: 0x100b0f988 | SentryClientInternal::sendEvent:withScope:alwaysAttachStacktrace:isFatalEvent: */

/* Function Stack Size: 0x28 bytes */

ID SentryClientInternal::sendEvent_withScope_alwaysAttachStacktrace_isFatalEvent_
             (ID param_1,SEL param_2,ID param_3,ID param_4,bool param_5,bool param_6)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100c09f60
                    (param_1,param_3,param_4,(ulong)param_5,(ulong)param_6,
                     *(undefined8 *)PTR____NSArray0___100ea9b00);
  return IVar1;
}



/* Address: 0x100b0f998 | SentryClientInternal::sendEvent:withScope:alwaysAttachStacktrace:isFatalEvent:additionalEnvelopeItems: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x30 bytes */

ID SentryClientInternal::
   sendEvent_withScope_alwaysAttachStacktrace_isFatalEvent_additionalEnvelopeItems_
             (ID param_1,SEL param_2,ID param_3,ID param_4,bool param_5,bool param_6,ID param_7)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID self;
  
  IVar1 = objc_stub::FUN_100c08020(param_1,param_3,param_4,(ulong)param_5,(ulong)param_6);
  if (IVar1 == 0) {
    IVar1 = objc_stub::FUN_100c01800((ID)&objc::class_t::SentryId);
  }
  else {
    IVar2 = objc_stub::FUN_100c03060(param_1,param_3,param_4);
    IVar3 = objc_stub::attachments(param_4);
    IVar3 = objc_stub::FUN_100c081a0(param_1,IVar1,IVar3);
    self = objc_stub::FUN_100c10b80(param_1);
    objc_stub::FUN_100c09f00(self,IVar1,IVar2,IVar3,param_7);
    IVar1 = objc_stub::FUN_100c01f00(IVar1);
  }
  return IVar1;
}



/* Address: 0x100b0fb10 | SentryClientInternal::sendEvent:withSession:withScope: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x28 bytes */

ID SentryClientInternal::sendEvent_withSession_withScope_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  int iVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  
  if (param_3 == 0) {
    IVar2 = objc_stub::FUN_100c01800((ID)&objc::class_t::SentryId);
    return IVar2;
  }
  IVar2 = objc_stub::attachments(param_5);
  IVar2 = objc_stub::FUN_100c081a0(param_1,param_3,IVar2);
  IVar3 = objc_stub::FUN_100c058a0(param_3);
  if ((int)IVar3 != 0) {
    IVar3 = objc_stub::FUN_100bffe20(param_3);
    IVar3 = objc_stub::objectForKeyedSubscript_(IVar3,&cf_replay);
    if (IVar3 != 0) {
      IVar3 = objc_stub::FUN_100bffe20(param_3);
      IVar3 = objc_stub::objectForKeyedSubscript_(IVar3,&cf_replay);
      IVar4 = objc_stub::class((ID)&_OBJC_CLASS___NSDictionary);
      IVar3 = objc_stub::isKindOfClass_(IVar3,IVar4);
      if ((int)IVar3 != 0) {
        IVar3 = objc_stub::FUN_100bffe20(param_3);
        IVar3 = objc_stub::objectForKeyedSubscript_(IVar3,&cf_replay);
        IVar3 = objc_stub::objectForKeyedSubscript_(IVar3,&cf_replay_id);
        objc_stub::FUN_100c0d640(param_5,IVar3);
      }
    }
  }
  IVar3 = objc_stub::FUN_100c03060(param_1,param_3,param_5);
  if (param_4 == 0) {
    IVar4 = objc_stub::FUN_100c10b80(param_1);
    objc_stub::FUN_100c09ee0(IVar4,param_3,IVar3,IVar2);
    IVar2 = objc_stub::FUN_100c01f00(param_3);
    return IVar2;
  }
  IVar4 = objc_stub::FUN_100c08e20(param_4);
  if (IVar4 != 0) {
    IVar4 = objc_stub::FUN_100c08e20(param_4);
    IVar4 = objc_stub::length(IVar4);
    if (IVar4 != 0) {
      IVar4 = objc_stub::FUN_100c10b80(param_1);
      objc_stub::FUN_100c09f80(IVar4,param_3,param_4,IVar3,IVar2);
      goto LAB_100b0fda8;
    }
  }
  iVar1 = 0;
  FUN_100b3a1c0();
  if (iVar1 != 0) {
    FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryClient.m",0x200
                  ,&cf_Sessionhasnoreleasename_Won_tsendit_);
  }
  IVar4 = objc_stub::FUN_100c10b80(param_1);
  objc_stub::FUN_100c09ee0(IVar4,param_3,IVar3,IVar2);
LAB_100b0fda8:
  IVar2 = objc_stub::FUN_100c01f00(param_3);
  return IVar2;
}



/* Address: 0x100b0fe58 | SentryClientInternal::captureSession: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryClientInternal::captureSession_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  ID IVar2;
  class_t *pcVar3;
  ID IVar4;
  
  IVar2 = objc_stub::FUN_100c08e20(param_3);
  if (IVar2 != 0) {
    IVar2 = objc_stub::FUN_100c08e20(param_3);
    IVar2 = objc_stub::length(IVar2);
    if (IVar2 != 0) {
      pcVar3 = &objc::class_t::_TtC6Sentry18SentryEnvelopeItem;
      _objc_alloc();
      IVar2 = objc_stub::FUN_100c04b40((ID)pcVar3,param_3);
      pcVar3 = &objc::class_t::_TtC6Sentry14SentryEnvelope;
      _objc_alloc();
      IVar4 = objc_stub::FUN_100c01800((ID)&objc::class_t::_TtC6Sentry20SentryEnvelopeHeader);
      IVar2 = objc_stub::FUN_100c042e0((ID)pcVar3,IVar4,IVar2);
      objc_stub::captureEnvelope_(param_1,IVar2);
      return;
    }
  }
  iVar1 = 0;
  FUN_100b3a1c0();
  if (iVar1 != 0) {
    FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryClient.m",0x211
                  ,&cf_Sessionhasnoreleasename_Won_tsendit_);
  }
  return;
}



/* Address: 0x100b0ff74 | SentryClientInternal::captureReplayEvent:replayRecording:video:withScope: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x30 bytes */

void SentryClientInternal::captureReplayEvent_replayRecording_video_withScope_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6)

{
  int iVar1;
  ID IVar2;
  ID IVar3;
  class_t *pcVar4;
  ID IVar5;
  ID local_60;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_100ea82f0;
  IVar2 = objc_stub::FUN_100c08000(param_1,param_3,param_6,0);
  if (IVar2 == 0) {
    FUN_100b3a1c0();
    if ((int)IVar2 != 0) {
      FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryClient.m",
                    0x226,&cf_Thereplayeventwasfilteredoutinprepareevent_Thereplaywasdiscarded_);
    }
  }
  else {
    IVar3 = objc_stub::class((ID)&objc::class_t::_TtC6Sentry17SentryReplayEvent);
    IVar3 = objc_stub::isKindOfClass_(IVar2,IVar3);
    iVar1 = (int)IVar3;
    if ((IVar3 & 1) == 0) {
      FUN_100b3a1f0();
      if (iVar1 != 0) {
        FUN_100b3a2b8("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryClient.m",
                      0x22e,&
                            cf_Theeventpreprocessordidn_tupdatethereplayeventinplace_Thereplaywasdiscarded_
                     );
      }
    }
    else {
      pcVar4 = &objc::class_t::_TtC6Sentry18SentryEnvelopeItem;
      _objc_alloc();
      IVar3 = objc_stub::FUN_100c04a80((ID)pcVar4,IVar2,param_4,param_5);
      if (IVar3 == 0) {
        FUN_100b3a1f0();
        if ((int)IVar3 != 0) {
          FUN_100b3a2b8("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryClient.m"
                        ,0x239,&
                               cf_TheSessionReplaysegmentwillnotbesenttoSentrybecauseanEnvelopeItemcouldnotbecreated_
                       );
        }
        objc_stub::recordLostEvent_reason_quantity_(param_1,9,7,1);
      }
      else {
        pcVar4 = &objc::class_t::_TtC6Sentry20SentryEnvelopeHeader;
        _objc_alloc();
        IVar5 = objc_stub::FUN_100c01f00(IVar2);
        IVar2 = objc_stub::FUN_100c09ca0(IVar2);
        IVar2 = objc_stub::FUN_100c04300((ID)pcVar4,IVar5,IVar2);
        pcVar4 = &objc::class_t::_TtC6Sentry14SentryEnvelope;
        _objc_alloc();
        local_60 = IVar3;
        IVar3 = objc_stub::arrayWithObjects_count_((ID)&_OBJC_CLASS___NSArray,&local_60,1);
        IVar2 = objc_stub::FUN_100c042c0((ID)pcVar4,IVar2,IVar3);
        objc_stub::captureEnvelope_(param_1,IVar2);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}



/* Address: 0x100b101cc | SentryClientInternal::captureEnvelope: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryClientInternal::captureEnvelope_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100c05720(param_1);
  if ((int)IVar1 == 0) {
    IVar1 = objc_stub::FUN_100c10b80(param_1);
    objc_stub::FUN_100c09ea0(IVar1,param_3);
  }
  else {
    objc_stub::FUN_100c06600(param_1);
  }
  return;
}



/* Address: 0x100b10234 | SentryClientInternal::captureFeedback:withScope: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void SentryClientInternal::captureFeedback_withScope_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  
  IVar1 = objc_stub::serialize(param_3);
  IVar2 = objc_stub::FUN_100c01f00(param_3);
  IVar2 = objc_stub::FUN_100c0a000(IVar2);
  IVar3 = objc_stub::FUN_100bfe1a0(param_3);
  objc_stub::FUN_100bff020(param_1,IVar1,IVar2,IVar3,param_4);
  return;
}



/* Address: 0x100b10310 | SentryClientInternal::captureSerializedFeedback:withEventId:attachments:scope: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x30 bytes */

void SentryClientInternal::captureSerializedFeedback_withEventId_attachments_scope_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6)

{
  long lVar1;
  ID IVar2;
  class_t *pcVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  
  IVar2 = objc_stub::FUN_100c05720(param_1);
  if ((int)IVar2 == 0) {
    pcVar3 = &objc::class_t::SentryEvent;
    _objc_alloc();
    IVar2 = objc_stub::init((ID)pcVar3);
    pcVar3 = &objc::class_t::SentryId;
    _objc_alloc();
    IVar4 = objc_stub::FUN_100c05120((ID)pcVar3,param_4);
    objc_stub::FUN_100c0b9c0(IVar2,IVar4);
    IVar4 = objc_stub::FUN_100c02320((ID)&objc::class_t::_TtC6Sentry23SentryEnvelopeItemTypes);
    objc_stub::FUN_100c0e600(IVar2,IVar4);
    IVar4 = objc_stub::FUN_100c0efc0(param_6);
    IVar5 = objc_stub::FUN_100c092a0(param_6);
    lVar1 = 1;
    if (IVar4 != 0) {
      lVar1 = 2;
    }
    if (IVar5 != 0) {
      lVar1 = lVar1 + 1;
    }
    IVar4 = objc_stub::dictionaryWithCapacity_((ID)&_OBJC_CLASS___NSMutableDictionary,lVar1);
    objc_stub::setObject_forKeyedSubscript_(IVar4,param_3,&cf_feedback);
    IVar5 = objc_stub::FUN_100c092a0(param_6);
    if (IVar5 != 0) {
      IVar5 = objc_stub::dictionaryWithCapacity_((ID)&_OBJC_CLASS___NSMutableDictionary,1);
      IVar6 = objc_stub::FUN_100c092a0(param_6);
      objc_stub::setObject_forKeyedSubscript_(IVar5,IVar6,&cf_replay_id);
      objc_stub::setObject_forKeyedSubscript_(IVar4,IVar5,&cf_replay);
    }
    objc_stub::FUN_100c0b0e0(IVar2,IVar4);
    IVar2 = objc_stub::FUN_100c08000(param_1,IVar2,param_6,0);
    IVar4 = objc_stub::FUN_100c03060(param_1,IVar2,param_6);
    IVar5 = objc_stub::attachments(param_6);
    IVar5 = objc_stub::FUN_100c081a0(param_1,IVar2,IVar5);
    IVar5 = objc_stub::FUN_100bfdfc0(IVar5,param_5);
    IVar6 = objc_stub::FUN_100c10b80(param_1);
    objc_stub::FUN_100c09f00(IVar6,IVar2,IVar4,IVar5,*(undefined8 *)PTR____NSArray0___100ea9b00);
  }
  else {
    objc_stub::FUN_100c06600(param_1);
  }
  return;
}



/* Address: 0x100b10628 | SentryClientInternal::storeEnvelope: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_unsafeClaimAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryClientInternal::storeEnvelope_(ID param_1,SEL param_2,ID param_3)

{
  ID self;
  
  self = objc_stub::fileManager(param_1);
  objc_stub::storeEnvelope_(self,param_3);
  return;
}



/* Address: 0x100b10680 | SentryClientInternal::recordLostEvent:reason: */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void SentryClientInternal::recordLostEvent_reason_
               (ID param_1,SEL param_2,unsigned_long_long param_3,unsigned_long_long param_4)

{
  ID self;
  
  self = objc_stub::FUN_100c10b80(param_1);
  objc_stub::recordLostEvent_reason_(self,param_3,param_4);
  return;
}



/* Address: 0x100b106c8 | SentryClientInternal::recordLostEvent:reason:quantity: */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x28 bytes */

void SentryClientInternal::recordLostEvent_reason_quantity_
               (ID param_1,SEL param_2,unsigned_long_long param_3,unsigned_long_long param_4,
               unsigned_long_long param_5)

{
  ID self;
  
  self = objc_stub::FUN_100c10b80(param_1);
  objc_stub::recordLostEvent_reason_quantity_(self,param_3,param_4,param_5);
  return;
}



/* Address: 0x100b10718 | SentryClientInternal::prepareEvent:withScope:alwaysAttachStacktrace: */

/* Function Stack Size: 0x24 bytes */

ID SentryClientInternal::prepareEvent_withScope_alwaysAttachStacktrace_
             (ID param_1,SEL param_2,ID param_3,ID param_4,bool param_5)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100c08020(param_1,param_3,param_4,(ulong)param_5,0);
  return IVar1;
}



/* Address: 0x100b10720 | SentryClientInternal::flush: */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryClientInternal::flush_(ID param_1,SEL param_2,double param_3)

{
  ID IVar1;
  double extraout_d0;
  double dVar2;
  
  IVar1 = objc_stub::FUN_100c101a0(param_1);
  objc_stub::FUN_100c02a00(IVar1);
  dVar2 = param_3 - extraout_d0;
  if (dVar2 <= 0.0) {
    dVar2 = 0.0;
  }
  IVar1 = objc_stub::FUN_100c10b80(param_1);
  objc_stub::FUN_100c028c0(IVar1,dVar2);
  return;
}



/* Address: 0x100b10794 | SentryClientInternal::close */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

int SentryClientInternal::close(int param_1)

{
  int iVar1;
  ulong self;
  ID self_00;
  
  self = (ulong)(uint)param_1;
  *(undefined1 *)(self + 8) = 0;
  self_00 = objc_stub::options(self);
  objc_stub::FUN_100c0ed20(self_00);
  objc_stub::FUN_100c028c0(self);
  iVar1 = 0;
  FUN_100b3a1c0();
  if (iVar1 != 0) {
    iVar1 = 0xdbcf9b;
    FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryClient.m",0x2b0
                  ,&cf_ClosedtheClient_);
    return iVar1;
  }
  return 0;
}



/* Address: 0x100b10800 | SentryClientInternal::prepareEvent:withScope:alwaysAttachStacktrace:isFatalEvent: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x28 bytes */

ID SentryClientInternal::prepareEvent_withScope_alwaysAttachStacktrace_isFatalEvent_
             (ID param_1,SEL param_2,ID param_3,ID param_4,bool param_5,bool param_6)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  ID IVar6;
  ID IVar7;
  ID IVar8;
  ID IVar9;
  uint uVar10;
  long lVar11;
  ID IVar12;
  undefined8 uVar13;
  uint uVar14;
  uint uVar15;
  undefined8 local_140;
  long lStack_138;
  long *local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  ID local_f8;
  undefined1 auStack_f0 [128];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  if (param_3 == 0) {
    param_3 = 0;
    goto LAB_100b1148c;
  }
  IVar6 = objc_stub::FUN_100c05720(param_1);
  if ((int)IVar6 != 0) {
    objc_stub::FUN_100c06600(param_1);
LAB_100b10870:
    param_3 = 0;
    goto LAB_100b1148c;
  }
  IVar6 = objc_stub::type(param_3);
  if (IVar6 == 0) {
    uVar10 = 1;
  }
  else {
    IVar6 = objc_stub::type(param_3);
    IVar7 = objc_stub::FUN_100c10a80((ID)&objc::class_t::_TtC6Sentry23SentryEnvelopeItemTypes);
    IVar6 = objc_stub::isEqualToString_(IVar6,IVar7);
    uVar10 = (uint)IVar6 ^ 1;
  }
  IVar6 = objc_stub::type(param_3);
  if (IVar6 == 0) {
    uVar15 = 1;
  }
  else {
    IVar6 = objc_stub::type(param_3);
    IVar7 = objc_stub::FUN_100c092c0((ID)&objc::class_t::_TtC6Sentry23SentryEnvelopeItemTypes);
    IVar6 = objc_stub::isEqualToString_(IVar6,IVar7);
    uVar15 = (uint)IVar6 ^ 1;
  }
  IVar6 = objc_stub::type(param_3);
  if (IVar6 == 0) {
    uVar14 = 1;
  }
  else {
    IVar6 = objc_stub::type(param_3);
    IVar7 = objc_stub::FUN_100c02320((ID)&objc::class_t::_TtC6Sentry23SentryEnvelopeItemTypes);
    IVar6 = objc_stub::isEqualToString_(IVar6,IVar7);
    uVar14 = (uint)IVar6 ^ 1;
  }
  uVar1 = uVar10 & uVar15 & uVar14;
  if (uVar1 == 1) {
    IVar6 = objc_stub::options(param_1);
    IVar6 = objc_stub::sampleRate(IVar6);
    IVar6 = objc_stub::FUN_100c05c40(param_1,IVar6);
    iVar5 = 0;
    if ((int)IVar6 != 0) {
      FUN_100b3a1c0();
      if (iVar5 != 0) {
        FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryClient.m",
                      0x2cc,&cf_Eventgotsampled_willnotsendtheevent);
      }
      objc_stub::recordLostEvent_reason_(param_1,2,2);
      goto LAB_100b10870;
    }
  }
  IVar6 = objc_stub::mainBundle((ID)&_OBJC_CLASS___NSBundle);
  IVar6 = objc_stub::infoDictionary(IVar6);
  if ((IVar6 != 0) && (IVar7 = objc_stub::FUN_100c01520(param_3), IVar7 == 0)) {
    IVar6 = objc_stub::objectForKeyedSubscript_(IVar6,&cf_CFBundleVersion);
    objc_stub::FUN_100c0b660(param_3,IVar6);
  }
  IVar6 = objc_stub::options(param_1);
  IVar6 = objc_stub::FUN_100c08e20(IVar6);
  IVar7 = objc_stub::FUN_100c08e20(param_3);
  if ((IVar7 == 0) && (IVar6 != 0)) {
    objc_stub::FUN_100c0d600(param_3,IVar6);
  }
  IVar6 = objc_stub::options(param_1);
  IVar6 = objc_stub::FUN_100c01520(IVar6);
  if (IVar6 != 0) {
    objc_stub::FUN_100c0b660(param_3,IVar6);
  }
  objc_stub::FUN_100c0d880(param_1,param_3);
  if (uVar1 != 0) {
    if ((param_5 & 1) == 0) {
      IVar6 = objc_stub::options(param_1);
      IVar6 = objc_stub::FUN_100bfe120(IVar6);
      if ((IVar6 & 1) == 0) {
        IVar6 = objc_stub::FUN_100c02020(param_3);
        if (IVar6 == 0) {
          bVar3 = false;
        }
        else {
          IVar6 = objc_stub::FUN_100c02020(param_3);
          IVar6 = objc_stub::count(IVar6);
          bVar3 = IVar6 != 0;
        }
      }
      else {
        bVar3 = true;
      }
    }
    else {
      bVar3 = true;
    }
    IVar6 = objc_stub::threads(param_3);
    if (IVar6 == 0) {
      bVar4 = false;
    }
    else {
      IVar6 = objc_stub::threads(param_3);
      IVar6 = objc_stub::count(IVar6);
      bVar4 = IVar6 != 0;
    }
    if (((param_6 & 1) == 0 && !(bool)(bVar3 ^ 1U)) && (!bVar4)) {
      IVar6 = objc_stub::FUN_100bfe100(param_3);
      if (IVar6 == 0) {
        IVar6 = objc_stub::options(param_1);
        IVar6 = objc_stub::FUN_100bfe0e0(IVar6);
        if ((IVar6 & 1) != 0) goto LAB_100b10ce0;
LAB_100b10d2c:
        IVar6 = objc_stub::FUN_100c10520(param_1);
        IVar6 = objc_stub::FUN_100c02d00(IVar6);
      }
      else {
        IVar6 = objc_stub::FUN_100bfe100(param_3);
        IVar6 = objc_stub::boolValue(IVar6);
        if ((int)IVar6 == 0) goto LAB_100b10d2c;
LAB_100b10ce0:
        IVar6 = objc_stub::FUN_100c10520(param_1);
        IVar6 = objc_stub::FUN_100c02d20(IVar6);
      }
      objc_stub::FUN_100c0e240(param_3,IVar6);
    }
    IVar6 = objc_stub::FUN_100c00be0(param_3);
    if (IVar6 == 0) {
      bVar4 = false;
    }
    else {
      IVar6 = objc_stub::FUN_100c00be0(param_3);
      IVar6 = objc_stub::count(IVar6);
      bVar4 = IVar6 != 0;
    }
    if ((((param_6 & 1) == 0 && !(bool)(bVar3 ^ 1U)) && !bVar4) &&
       (IVar6 = objc_stub::threads(param_3), IVar6 != 0)) {
      IVar6 = objc_stub::FUN_100c00bc0(param_1);
      IVar7 = objc_stub::threads(param_3);
      IVar6 = objc_stub::FUN_100c02d80(IVar6,IVar7);
      objc_stub::FUN_100c0b480(param_3,IVar6);
    }
  }
  if ((param_6 & 1) == 0) {
    IVar6 = objc_stub::options(param_1);
    IVar6 = objc_stub::FUN_100c06a60(IVar6);
    param_3 = objc_stub::FUN_100bfdf00(param_4,param_3,IVar6);
  }
  if ((uVar15 & 1) == 0) {
    objc_stub::FUN_100c0ac20(param_3,0);
  }
  IVar6 = objc_stub::FUN_100c05e00(param_1,param_3,(ulong)param_6);
  if ((int)IVar6 == 0) {
    if ((param_6 & 1) == 0) {
      objc_stub::FUN_100bfdec0(param_1,param_3);
      objc_stub::FUN_100bfdea0(param_1,param_3);
    }
  }
  else {
    objc_stub::FUN_100c08fa0(param_1,param_3);
  }
  IVar6 = objc_stub::environment(param_3);
  if (IVar6 == 0) {
    IVar6 = objc_stub::options(param_1);
    IVar6 = objc_stub::environment(IVar6);
    objc_stub::FUN_100c0b900(param_3,IVar6);
  }
  objc_stub::FUN_100c0e740(param_1,param_3);
  IVar6 = objc_stub::type(param_3);
  if (IVar6 == 0) {
LAB_100b11018:
    bVar3 = false;
LAB_100b1101c:
    local_f8 = 0;
    if (param_3 == 0) goto LAB_100b1148c;
    bVar2 = false;
    bVar4 = false;
    if (bVar3) goto LAB_100b11030;
  }
  else {
    IVar6 = objc_stub::type(param_3);
    IVar7 = objc_stub::FUN_100c10a80((ID)&objc::class_t::_TtC6Sentry23SentryEnvelopeItemTypes);
    IVar6 = objc_stub::isEqualToString_(IVar6,IVar7);
    if ((IVar6 & 1) == 0) goto LAB_100b11018;
    IVar6 = objc_stub::class((ID)&objc::class_t::SentryTransaction);
    IVar6 = objc_stub::isKindOfClass_(param_3,IVar6);
    if ((IVar6 & 1) == 0) {
      bVar3 = true;
      goto LAB_100b1101c;
    }
    IVar6 = objc_stub::FUN_100c0f0a0(param_3);
    local_f8 = objc_stub::count(IVar6);
    if (param_3 == 0) goto LAB_100b1148c;
    bVar2 = true;
LAB_100b11030:
    IVar6 = objc_stub::options(param_1);
    IVar6 = objc_stub::FUN_100bfe4c0(IVar6);
    if (IVar6 == 0) {
      bVar4 = true;
    }
    else {
      IVar6 = objc_stub::array((ID)&_OBJC_CLASS___NSMutableArray);
      lStack_138 = 0;
      local_140 = 0;
      uStack_128 = 0;
      local_130 = (long *)0x0;
      uStack_118 = 0;
      local_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      IVar7 = objc_stub::FUN_100c0f0a0(param_3);
      IVar8 = objc_stub::countByEnumeratingWithState_objects_count_
                        (IVar7,&local_140,auStack_f0,0x10);
      if (IVar8 != 0) {
        lVar11 = *local_130;
        do {
          IVar12 = 0;
          do {
            if (*local_130 != lVar11) {
              _objc_enumerationMutation(IVar7);
            }
            uVar13 = *(undefined8 *)(lStack_138 + IVar12 * 8);
            IVar9 = objc_stub::options(param_1);
            IVar9 = objc_stub::FUN_100bfe4c0(IVar9);
            (**(code **)(IVar9 + 0x10))(IVar9,uVar13);
            if (IVar9 != 0) {
              objc_stub::addObject_(IVar6,IVar9);
            }
            IVar12 = IVar12 + 1;
          } while (IVar8 != IVar12);
          IVar8 = objc_stub::countByEnumeratingWithState_objects_count_
                            (IVar7,&local_140,auStack_f0,0x10);
        } while (IVar8 != 0);
      }
      objc_stub::FUN_100c0dca0(param_3,IVar6);
      if (bVar2) {
        objc_stub::FUN_100c08b20(param_1,param_3,0,&local_f8);
      }
      bVar4 = true;
    }
  }
  if (uVar14 == 0) {
LAB_100b112a4:
    param_3 = objc_stub::FUN_100bfec40(param_1,param_3);
    if (param_3 != 0) {
      if (bVar2) {
        objc_stub::FUN_100c08b20(param_1,param_3,1,&local_f8);
      }
      if ((param_6 != 0) &&
         (IVar6 = objc_stub::FUN_100c060c0((ID)&objc::class_t::SentrySDKInternal), (IVar6 & 1) == 0)
         ) {
        objc_stub::FUN_100c0c620((ID)&objc::class_t::SentrySDKInternal,1);
        IVar6 = objc_stub::options(param_1);
        IVar6 = objc_stub::FUN_100c07640(IVar6);
        if (IVar6 != 0) {
          IVar6 = objc_stub::options(param_1);
          IVar6 = objc_stub::FUN_100c07640(IVar6);
          (**(code **)(IVar6 + 0x10))(IVar6,param_3);
        }
        IVar6 = objc_stub::options(param_1);
        IVar6 = objc_stub::onLastRunStatusDetermined(IVar6);
        if (IVar6 != 0) {
          IVar6 = objc_stub::options(param_1);
          IVar6 = objc_stub::onLastRunStatusDetermined(IVar6);
          (**(code **)(IVar6 + 0x10))(IVar6,2,param_3);
        }
      }
      goto LAB_100b1148c;
    }
    objc_stub::FUN_100c089c0(param_1,(ulong)uVar10,1);
    if (bVar4) {
      uVar13 = 1;
LAB_100b11454:
      objc_stub::FUN_100c08a60(param_1,uVar13,local_f8 + 1);
    }
  }
  else {
    IVar6 = objc_stub::options(param_1);
    IVar6 = objc_stub::FUN_100bfe480(IVar6);
    if (IVar6 == 0) goto LAB_100b112a4;
    IVar6 = objc_stub::options(param_1);
    IVar6 = objc_stub::FUN_100bfe480(IVar6);
    (**(code **)(IVar6 + 0x10))(IVar6,param_3);
    if (IVar6 != 0) {
      param_3 = IVar6;
      if (bVar2) {
        objc_stub::FUN_100c08b20(param_1,IVar6,0,&local_f8);
      }
      goto LAB_100b112a4;
    }
    objc_stub::FUN_100c089c0(param_1,(ulong)uVar10,0);
    if (bVar4) {
      uVar13 = 0;
      goto LAB_100b11454;
    }
  }
  param_3 = 0;
LAB_100b1148c:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return param_3;
}



/* Address: 0x100b114d4 | SentryClientInternal::recordPartiallyDroppedSpans:withReason:withCurrentSpanCount: */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x28 bytes */

void SentryClientInternal::recordPartiallyDroppedSpans_withReason_withCurrentSpanCount_
               (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4,
               unsigned_long_long *param_5)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100c0f0a0(param_3);
  IVar1 = objc_stub::count(IVar1);
  if (*param_5 - IVar1 != 0) {
    objc_stub::FUN_100c08a60(param_1,param_4,*param_5 - IVar1);
  }
  *param_5 = IVar1;
  return;
}



/* Address: 0x100b11548 | SentryClientInternal::isSampled: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

bool SentryClientInternal::isSampled_(ID param_1,SEL param_2,ID param_3)

{
  ID self;
  bool bVar1;
  double extraout_d0;
  double extraout_d0_00;
  
  if (param_3 == 0) {
    bVar1 = 0;
  }
  else {
    self = objc_stub::FUN_100c08620(param_1);
    objc_stub::FUN_100c07140(self);
    objc_stub::doubleValue(param_3);
    bVar1 = (bool)(extraout_d0_00 < extraout_d0);
  }
  return bVar1;
}



/* Address: 0x100b115d0 | SentryClientInternal::isDisabled */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

bool SentryClientInternal::isDisabled(ID param_1,SEL param_2)

{
  ID IVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 8) == '\x01') {
    IVar1 = objc_stub::options(param_1);
    IVar1 = objc_stub::FUN_100c01920(IVar1);
    if ((int)IVar1 == 0) {
      bVar2 = 1;
    }
    else {
      IVar1 = objc_stub::options(param_1);
      IVar1 = objc_stub::FUN_100c07a60(IVar1);
      bVar2 = (bool)(IVar1 == 0);
    }
  }
  else {
    bVar2 = 1;
  }
  return bVar2;
}



/* Address: 0x100b11668 | SentryClientInternal::logDisabledMessage */

/* Function Stack Size: 0x10 bytes */

void SentryClientInternal::logDisabledMessage(ID param_1,SEL param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  FUN_100b3a1c0();
  if (iVar1 != 0) {
    FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryClient.m",0x3ab
                  ,&cf_SDKdisabledornoDSNset_Won_tdoanything_);
    return;
  }
  return;
}



/* Address: 0x100b1169c | SentryClientInternal::callEventProcessors: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryClientInternal::callEventProcessors_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  ID IVar2;
  
  IVar2 = objc_stub::sharedInstance((ID)&objc::class_t::_TtC6Sentry25SentryDependencyContainer);
  IVar2 = objc_stub::FUN_100c030c0(IVar2);
  IVar2 = objc_stub::FUN_100c09300(IVar2,param_3);
  iVar1 = 0;
  if ((IVar2 == 0) && (FUN_100b3a1c0(), iVar1 != 0)) {
    FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryClient.m",0x3b6
                  ,&cf_SentryScopecallEventProcessors_Aneventprocessordecidedtoremovethisevent_);
  }
  return IVar2;
}



/* Address: 0x100b1174c | SentryClientInternal::setSdk: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryClientInternal::setSdk_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100c09ca0(param_3);
  if (IVar1 == 0) {
    IVar1 = objc_stub::options(param_1);
    IVar1 = objc_stub::FUN_100c077c0((ID)&objc::class_t::_TtC6Sentry17SentrySdkInfoObjC,IVar1);
    objc_stub::FUN_100c0d880(param_3,IVar1);
  }
  return;
}



/* Address: 0x100b117e8 | SentryClientInternal::setUserInfo:withEvent: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void SentryClientInternal::setUserInfo_withEvent_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  undefined *self;
  
  if (((param_3 != 0) && (param_4 != 0)) && (IVar1 = objc_stub::count(param_3), IVar1 != 0)) {
    IVar1 = objc_stub::FUN_100bffe20(param_4);
    if (IVar1 == 0) {
      self = &_OBJC_CLASS___NSMutableDictionary;
      _objc_alloc();
      IVar1 = objc_stub::init((ID)self);
      objc_stub::FUN_100c0b0e0(param_4,IVar1);
    }
    else {
      IVar1 = objc_stub::FUN_100bffe20(param_4);
      IVar1 = objc_stub::mutableCopy(IVar1);
    }
    FUN_100bcfb78(param_3);
    objc_stub::setValue_forKey_(IVar1,param_3,&cf_userinfo);
  }
  return;
}



/* Address: 0x100b118e0 | SentryClientInternal::setUserIdIfNoUserSet: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryClientInternal::setUserIdIfNoUserSet_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  class_t *self;
  ID IVar2;
  
  IVar1 = objc_stub::FUN_100c11060(param_3);
  if (IVar1 == 0) {
    self = &objc::class_t::SentryUser;
    _objc_alloc();
    IVar1 = objc_stub::init((ID)self);
    IVar2 = objc_stub::options(param_1);
    IVar2 = objc_stub::FUN_100bfeb80(IVar2);
    IVar2 = objc_stub::FUN_100c03540((ID)&objc::class_t::_TtC6Sentry18SentryInstallation,IVar2);
    objc_stub::FUN_100c0e720(IVar1,IVar2);
    objc_stub::FUN_100c0e6e0(param_3,IVar1);
  }
  return;
}



/* Address: 0x100b119c4 | SentryClientInternal::isWatchdogTermination:isFatalEvent: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x1c bytes */

bool SentryClientInternal::isWatchdogTermination_isFatalEvent_
               (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  ID IVar1;
  ID IVar2;
  
  if ((param_4 != 0) && (IVar1 = objc_stub::FUN_100c02020(param_3), IVar1 != 0)) {
    IVar1 = objc_stub::FUN_100c02020(param_3);
    IVar1 = objc_stub::count(IVar1);
    if (IVar1 == 1) {
      IVar1 = objc_stub::FUN_100c02020(param_3);
      IVar1 = objc_stub::FUN_100c07480(IVar1,0);
      IVar2 = objc_stub::FUN_100c06bc0(IVar1);
      if (IVar2 != 0) {
        IVar1 = objc_stub::FUN_100c06bc0(IVar1);
        IVar1 = objc_stub::type(IVar1);
        IVar2 = objc_stub::FUN_100bfcf00
                          ((ID)&objc::class_t::_TtC6Sentry34SentryWatchdogTerminationConstants);
        IVar1 = objc_stub::isEqualToString_(IVar1,IVar2);
        return (bool)IVar1;
      }
      return 0;
    }
  }
  return 0;
}



/* Address: 0x100b11b2c | SentryClientInternal::applyCultureContextToEvent: */

/* Function Stack Size: 0x18 bytes */

void SentryClientInternal::applyCultureContextToEvent_(ID param_1,SEL param_2,ID param_3)

{
  undefined *local_38;
  undefined8 local_30;
  code *local_28;
  undefined *puStack_20;
  ID local_18;
  
  local_38 = PTR___NSConcreteStackBlock_100ea82a0;
  local_30 = 0xc2000000;
  local_28 = FUN_100b11b84;
  puStack_20 = &DAT_100f34240;
  local_18 = param_1;
  objc_stub::FUN_100c06e20(param_1,param_3,&cf_culture,&local_38);
  return;
}



/* Address: 0x100b11b84 | FUN_100b11b84 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b11b84(long param_1,ID param_2)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = objc_stub::locale(*(ID *)(param_1 + 0x20));
  IVar2 = objc_stub::locale(*(ID *)(param_1 + 0x20));
  IVar2 = objc_stub::calendarIdentifier(IVar2);
  IVar1 = objc_stub::localizedStringForCalendarIdentifier_(IVar1,IVar2);
  objc_stub::setObject_forKeyedSubscript_(param_2,IVar1,&cf_calendar);
  IVar1 = objc_stub::locale(*(ID *)(param_1 + 0x20));
  IVar2 = objc_stub::locale(*(ID *)(param_1 + 0x20));
  IVar2 = objc_stub::localeIdentifier(IVar2);
  IVar1 = objc_stub::localizedStringForLocaleIdentifier_(IVar1,IVar2);
  objc_stub::setObject_forKeyedSubscript_(param_2,IVar1,&cf_display_name);
  IVar1 = objc_stub::locale(*(ID *)(param_1 + 0x20));
  IVar1 = objc_stub::localeIdentifier(IVar1);
  objc_stub::setObject_forKeyedSubscript_(param_2,IVar1,&cf_locale);
  IVar1 = objc_stub::timeIs24HourFormat((ID)&objc::class_t::_TtC6Sentry12SentryLocale);
  IVar1 = NSNumber::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,IVar1);
  objc_stub::setObject_forKeyedSubscript_(param_2,IVar1,&cf_is_24_hour_format);
  IVar1 = objc_stub::timezone(*(ID *)(param_1 + 0x20));
  IVar1 = objc_stub::name(IVar1);
  objc_stub::setObject_forKeyedSubscript_(param_2,IVar1,&cf_timezone);
  return 0;
}



/* Address: 0x100b11da4 | SentryClientInternal::applyExtraDeviceContextToEvent: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryClientInternal::applyExtraDeviceContextToEvent_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ID IVar2;
  undefined *local_a0;
  undefined8 local_98;
  code *local_90;
  undefined *puStack_88;
  ID local_80;
  undefined *local_78;
  undefined8 local_70;
  code *local_68;
  undefined *puStack_60;
  ID local_58;
  
  IVar2 = objc_stub::sharedInstance((ID)&objc::class_t::_TtC6Sentry25SentryDependencyContainer);
  IVar2 = objc_stub::FUN_100c020e0(IVar2);
  IVar2 = objc_stub::FUN_100c02e20(IVar2);
  puVar1 = PTR___NSConcreteStackBlock_100ea82a0;
  local_78 = PTR___NSConcreteStackBlock_100ea82a0;
  local_70 = 0xc2000000;
  local_68 = FUN_100b11ee8;
  puStack_60 = &DAT_100f34240;
  local_58 = IVar2;
  objc_stub::FUN_100c06e20(param_1,param_3,&cf_device,&local_78);
  local_a0 = puVar1;
  local_98 = 0xc2000000;
  local_90 = FUN_100b11fd0;
  puStack_88 = &DAT_100f34240;
  local_80 = IVar2;
  objc_stub::FUN_100c06e20(param_1,param_3,&cf_app,&local_a0);
  return;
}



/* Address: 0x100b11ee8 | FUN_100b11ee8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b11ee8(long param_1,ID param_2)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = objc_stub::objectForKeyedSubscript_(*(ID *)(param_1 + 0x20),&cf_device);
  if (IVar1 != 0) {
    IVar1 = objc_stub::objectForKeyedSubscript_(*(ID *)(param_1 + 0x20),&cf_device);
    IVar2 = NSDictionary::class((ID)&_OBJC_CLASS___NSDictionary);
    IVar1 = objc_stub::isKindOfClass_(IVar1,IVar2);
    if ((int)IVar1 != 0) {
      IVar2 = objc_stub::objectForKeyedSubscript_(*(ID *)(param_1 + 0x20),&cf_device);
      IVar1 = *(ID *)PTR____NSDictionary0___100ea9b08;
      if (IVar2 != 0) {
        IVar1 = IVar2;
      }
      objc_stub::addEntriesFromDictionary_(param_2,IVar1);
    }
  }
  return 0;
}



/* Address: 0x100b11fd0 | FUN_100b11fd0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b11fd0(long param_1,ID param_2)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = objc_stub::objectForKeyedSubscript_(*(ID *)(param_1 + 0x20),&cf_app);
  if (IVar1 != 0) {
    IVar1 = objc_stub::objectForKeyedSubscript_(*(ID *)(param_1 + 0x20),&cf_app);
    IVar2 = NSDictionary::class((ID)&_OBJC_CLASS___NSDictionary);
    IVar1 = objc_stub::isKindOfClass_(IVar1,IVar2);
    if ((int)IVar1 != 0) {
      IVar2 = objc_stub::objectForKeyedSubscript_(*(ID *)(param_1 + 0x20),&cf_app);
      IVar1 = *(ID *)PTR____NSDictionary0___100ea9b08;
      if (IVar2 != 0) {
        IVar1 = IVar2;
      }
      objc_stub::addEntriesFromDictionary_(param_2,IVar1);
    }
  }
  return 0;
}



/* Address: 0x100b120b8 | SentryClientInternal::removeExtraDeviceContextFromEvent: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryClientInternal::removeExtraDeviceContextFromEvent_(ID param_1,SEL param_2,ID param_3)

{
  objc_stub::FUN_100c06e20(param_1,param_3,&cf_device,&PTR___NSConcreteGlobalBlock_100f34290);
  objc_stub::FUN_100c06e20(param_1,param_3,&cf_app,&PTR___NSConcreteGlobalBlock_100f342b0);
  return;
}



/* Address: 0x100b1211c | FUN_100b1211c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b1211c(undefined8 param_1,ID param_2)

{
  objc_stub::removeObjectForKey_(param_2,&cf_free_memory);
  objc_stub::removeObjectForKey_(param_2,&cf_orientation);
  objc_stub::removeObjectForKey_(param_2,&cf_charging);
  objc_stub::removeObjectForKey_(param_2,&cf_battery_level);
  objc_stub::removeObjectForKey_(param_2,&cf_thermal_state);
  return 0;
}



/* Address: 0x100b12190 | FUN_100b12190 */

void FUN_100b12190(undefined8 param_1,ID param_2)

{
  objc_stub::removeObjectForKey_(param_2,&cf_app_memory);
  return;
}



/* Address: 0x100b121a0 | SentryClientInternal::modifyContext:key:block: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x28 bytes */

void SentryClientInternal::modifyContext_key_block_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,undefined4 param_6)

{
  ID IVar1;
  undefined *puVar2;
  ID IVar3;
  ID IVar4;
  
  IVar1 = objc_stub::FUN_100bffe20(param_3);
  if (IVar1 == 0) {
    return;
  }
  IVar1 = objc_stub::FUN_100bffe20(param_3);
  IVar1 = objc_stub::count(IVar1);
  if (IVar1 == 0) {
    return;
  }
  puVar2 = &_OBJC_CLASS___NSMutableDictionary;
  _objc_alloc();
  IVar1 = objc_stub::FUN_100bffe20(param_3);
  IVar1 = objc_stub::initWithDictionary_((ID)puVar2,IVar1);
  IVar3 = objc_stub::FUN_100bffe20(param_3);
  IVar3 = objc_stub::objectForKeyedSubscript_(IVar3,param_4);
  if (IVar3 != 0) {
    IVar3 = objc_stub::FUN_100bffe20(param_3);
    IVar3 = objc_stub::objectForKeyedSubscript_(IVar3,param_4);
    IVar4 = objc_stub::class((ID)&_OBJC_CLASS___NSDictionary);
    IVar3 = objc_stub::isKindOfClass_(IVar3,IVar4);
    if ((int)IVar3 != 0) {
      puVar2 = &_OBJC_CLASS___NSMutableDictionary;
      _objc_alloc();
      IVar3 = objc_stub::objectForKeyedSubscript_(IVar1,param_4);
      IVar3 = objc_stub::initWithDictionary_((ID)puVar2,IVar3);
      goto LAB_100b12344;
    }
  }
  IVar3 = objc_stub::dictionary((ID)&_OBJC_CLASS___NSMutableDictionary);
LAB_100b12344:
  (**(code **)(param_5 + 0x10))(param_5,IVar3);
  objc_stub::setObject_forKeyedSubscript_(IVar1,IVar3,param_4);
  objc_stub::FUN_100c0b0e0(param_3,IVar1);
  return;
}



/* Address: 0x100b123c0 | SentryClientInternal::recordLost:reason: */

/* Function Stack Size: 0x1c bytes */

void SentryClientInternal::recordLost_reason_
               (ID param_1,SEL param_2,bool param_3,unsigned_long_long param_4)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  if (param_3 == 0) {
    uVar1 = 4;
  }
  objc_stub::recordLostEvent_reason_(param_1,uVar1);
  return;
}



/* Address: 0x100b123d4 | SentryClientInternal::recordLostSpanWithReason:quantity: */

/* Function Stack Size: 0x20 bytes */

void SentryClientInternal::recordLostSpanWithReason_quantity_
               (ID param_1,SEL param_2,unsigned_long_long param_3,unsigned_long_long param_4)

{
  objc_stub::recordLostEvent_reason_quantity_(param_1,0xb,param_3,param_4);
  return;
}



/* Address: 0x100b123e4 | SentryClientInternal::addAttachmentProcessor: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryClientInternal::addAttachmentProcessor_(ID param_1,SEL param_2,ID param_3)

{
  ID self;
  
  self = objc_stub::FUN_100bfe140(param_1);
  objc_stub::addObject_(self,param_3);
  return;
}



/* Address: 0x100b12434 | SentryClientInternal::removeAttachmentProcessor: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryClientInternal::removeAttachmentProcessor_(ID param_1,SEL param_2,ID param_3)

{
  ID self;
  
  self = objc_stub::FUN_100bfe140(param_1);
  objc_stub::FUN_100c090a0(self,param_3);
  return;
}



/* Address: 0x100b12484 | SentryClientInternal::processAttachmentsForEvent:attachments: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID SentryClientInternal::processAttachmentsForEvent_attachments_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  ID IVar2;
  long lVar3;
  ID IVar4;
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
  IVar1 = objc_stub::FUN_100bfe140(param_1);
  IVar1 = objc_stub::count(IVar1);
  if (IVar1 != 0) {
    uStack_108 = 0;
    local_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    local_130 = 0;
    uStack_118 = 0;
    local_120 = (long *)0x0;
    IVar1 = objc_stub::FUN_100bfe140(param_1);
    IVar2 = objc_stub::countByEnumeratingWithState_objects_count_(IVar1,&local_130,auStack_e8,0x10);
    if (IVar2 != 0) {
      lVar3 = *local_120;
      do {
        IVar4 = 0;
        do {
          if (*local_120 != lVar3) {
            _objc_enumerationMutation(IVar1);
          }
          param_4 = objc_stub::FUN_100c08180(*(ID *)(lStack_128 + IVar4 * 8),param_4,param_3);
          IVar4 = IVar4 + 1;
        } while (IVar2 != IVar4);
        IVar2 = objc_stub::countByEnumeratingWithState_objects_count_
                          (IVar1,&local_130,auStack_e8,0x10);
      } while (IVar2 != 0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return param_4;
}



/* Address: 0x100b12620 | SentryClientInternal::_swiftCaptureLog:withScope: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

void SentryClientInternal::_swiftCaptureLog_withScope_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  int iVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  
  IVar2 = objc_stub::FUN_100c05720(param_1);
  if ((int)IVar2 == 0) {
    IVar2 = objc_stub::options(param_1);
    IVar2 = objc_stub::FUN_100c01860(IVar2);
    iVar1 = 0;
    if ((IVar2 & 1) == 0) {
      FUN_100b3a1c0();
      if (iVar1 != 0) {
        FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryClient.m",
                      0x493,&cf_Droppinglog_becausetheoptionenableLogsisfalse_);
      }
    }
    else {
      IVar2 = objc_stub::class((ID)&objc::class_t::_TtC6Sentry9SentryLog);
      IVar2 = objc_stub::isKindOfClass_(param_3,IVar2);
      if ((int)IVar2 != 0) {
        IVar2 = objc_stub::FUN_100c06640(param_1);
        IVar3 = objc_stub::FUN_100bfdee0(IVar2,param_4,param_3);
        IVar2 = objc_stub::options(param_1);
        IVar4 = objc_stub::FUN_100bfe4a0(IVar2);
        IVar2 = IVar3;
        if (IVar4 != 0) {
          IVar2 = objc_stub::options(param_1);
          IVar2 = objc_stub::FUN_100bfe4a0(IVar2);
          (**(code **)(IVar2 + 0x10))(IVar2,IVar3);
          iVar1 = 0;
          if (IVar2 == 0) {
            FUN_100b3a1c0();
            if (iVar1 != 0) {
              FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryClient.m"
                            ,0x4a1,&cf_LogdroppedbybeforeSendLogcallback_);
            }
            objc_stub::FUN_100c08960(param_1,IVar3);
            return;
          }
        }
        IVar3 = objc_stub::FUN_100c101a0(param_1);
        objc_stub::FUN_100bfd6c0(IVar3,IVar2);
      }
    }
  }
  else {
    objc_stub::FUN_100c06600(param_1);
  }
  return;
}



/* Address: 0x100b12830 | SentryClientInternal::recordDroppedLogInClientReport: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryClientInternal::recordDroppedLogInClientReport_(ID param_1,SEL param_2,ID param_3)

{
  undefined *local_48;
  undefined8 local_40;
  code *local_38;
  undefined *puStack_30;
  ID local_28;
  
  local_48 = PTR___NSConcreteStackBlock_100ea82a0;
  local_40 = 0xc2000000;
  local_38 = FUN_100b128b8;
  puStack_30 = &DAT_100f342d0;
  local_28 = param_3;
  objc_stub::FUN_100c08940(param_1,0xd,0xf,&local_48);
  return;
}



/* Address: 0x100b128b8 | FUN_100b128b8 */

void FUN_100b128b8(long param_1)

{
  objc_stub::serializedByteCountForLog_
            ((ID)&objc::class_t::_TtC6Sentry21SentryLogClientReport,*(undefined8 *)(param_1 + 0x20))
  ;
  return;
}



/* Address: 0x100b128cc | SentryClientInternal::recordDroppedTraceMetricInClientReport: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryClientInternal::recordDroppedTraceMetricInClientReport_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined *local_48;
  undefined8 local_40;
  code *local_38;
  undefined *puStack_30;
  ID local_28;
  
  local_48 = PTR___NSConcreteStackBlock_100ea82a0;
  local_40 = 0xc2000000;
  local_38 = FUN_100b12954;
  puStack_30 = &DAT_100f342d0;
  local_28 = param_3;
  objc_stub::FUN_100c08940(param_1,0xe,0x10,&local_48);
  return;
}



/* Address: 0x100b12954 | FUN_100b12954 */

void FUN_100b12954(long param_1)

{
  objc_stub::serializedByteCount(*(ID *)(param_1 + 0x20));
  return;
}



/* Address: 0x100b1295c | SentryClientInternal::recordDroppedItemInClientReportWithItemCategory:byteCategory:byteCountBlock: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x28 bytes */

void SentryClientInternal::
     recordDroppedItemInClientReportWithItemCategory_byteCategory_byteCountBlock_
               (ID param_1,SEL param_2,unsigned_long_long param_3,unsigned_long_long param_4,
               ID param_5,undefined4 param_6)

{
  ID self;
  undefined *local_88;
  undefined8 local_80;
  code *local_78;
  undefined *puStack_70;
  ID local_68;
  undefined1 auStack_60 [8];
  unsigned_long_long local_58;
  unsigned_long_long uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  self = objc_stub::dispatchQueueWrapper(param_1);
  local_88 = PTR___NSConcreteStackBlock_100ea82a0;
  local_80 = 0xc2000000;
  local_78 = FUN_100b12a6c;
  puStack_70 = &DAT_100f34300;
  _objc_copyWeak(auStack_60,auStack_48);
  local_68 = param_5;
  local_58 = param_3;
  uStack_50 = param_4;
  objc_stub::dispatchAsyncWithBlock_(self,&local_88);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Address: 0x100b12a6c | FUN_100b12a6c */

/* WARNING: Function: _objc_loadWeakRetained replaced with injection: _objc_load_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b12a6c(long param_1)

{
  ID self;
  long lVar1;
  
  self = *(ID *)(param_1 + 0x28);
  if (self != 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    (**(code **)(lVar1 + 0x10))();
    objc_stub::recordLostEvent_reason_(self,*(undefined8 *)(param_1 + 0x30),0);
    objc_stub::recordLostEvent_reason_quantity_(self,*(undefined8 *)(param_1 + 0x38),0,lVar1);
  }
  return 0;
}



/* Address: 0x100b12ad8 | FUN_100b12ad8 */

void FUN_100b12ad8(long param_1,long param_2)

{
  __Block_object_assign((void *)(param_1 + 0x20),*(void **)(param_2 + 0x20),7);
  _objc_copyWeak(param_1 + 0x28,param_2 + 0x28);
  return;
}



/* Address: 0x100b12b10 | FUN_100b12b10 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b12b10(long param_1)

{
  _objc_destroyWeak(param_1 + 0x28);
  return 0;
}



/* Address: 0x100b12b38 | SentryClientInternal::getTelemetryProcessor */

/* Function Stack Size: 0x10 bytes */

ID __objc_msgSend_stub SentryClientInternal::getTelemetryProcessor(ID self,...)

{
  (*(code *)PTR__objc_msgSend_100ea81a8)(self,"telemetryProcessor");
  return self;
}



/* Address: 0x100b12b3c | SentryClientInternal::isEnabled */

/* Function Stack Size: 0x10 bytes */

bool SentryClientInternal::isEnabled(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + 8);
}



/* Address: 0x100b12b44 | SentryClientInternal::options */

/* Function Stack Size: 0x10 bytes */

ID SentryClientInternal::options(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x10);
}



/* Address: 0x100b12b4c | SentryClientInternal::setOptions: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryClientInternal::setOptions_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x10) = param_3;
  return;
}



/* Address: 0x100b12b58 | SentryClientInternal::transportAdapter */

/* Function Stack Size: 0x10 bytes */

ID SentryClientInternal::transportAdapter(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x18);
}


