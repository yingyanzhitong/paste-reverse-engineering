/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100b55b94 | SentrySwizzle::swizzleInstanceMethod:inClass:newImpFactory:mode:key: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x38 bytes */

bool SentrySwizzle::swizzleInstanceMethod_inClass_newImpFactory_mode_key_
               (ID param_1,SEL param_2,SEL param_3,CLASS param_4,ID param_5,int param_6,
               unsigned_long_long param_7,const_void__ param_8)

{
  ID IVar1;
  unsigned_long_long self;
  ID IVar2;
  CLASS CVar3;
  class_t *self_00;
  CLASS CVar4;
  bool bVar5;
  undefined *local_b8;
  undefined8 local_b0;
  code *local_a8;
  undefined *puStack_a0;
  undefined8 *local_98;
  CLASS CStack_90;
  SEL local_88;
  undefined8 local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  if ((param_6 != 0) && (param_7 == 0)) {
    FUN_100b3a1e0();
    if ((int)param_5 != 0) {
      FUN_100b3a280("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentrySwizzle.m",
                    0x115,&cf_KeymaynotbeNULLifmodeisnotSentrySwizzleModeAlways_);
    }
    return 0;
  }
  IVar1 = param_5;
  FUN_100b55e6c();
  _objc_sync_enter();
  if (param_7 != 0) {
    self = param_7;
    FUN_100b55e9c();
    if (param_6 == 1) {
      IVar2 = objc_stub::FUN_100bffc80(self,param_4);
      if ((IVar2 & 1) != 0) {
LAB_100b55c74:
        bVar5 = 0;
        goto LAB_100b55df0;
      }
    }
    else {
      CVar3 = param_4;
      if (param_6 == 2) {
        while (CVar3 != 0) {
          IVar2 = objc_stub::FUN_100bffc80(self,CVar3);
          if ((IVar2 & 1) != 0) goto LAB_100b55c74;
          _class_getSuperclass();
        }
      }
    }
  }
  CVar3 = param_4;
  _class_getInstanceMethod(param_4,param_3);
  local_98 = &local_80;
  local_80 = 0;
  local_70 = 0x2020000000;
  local_68 = 0;
  local_b8 = PTR___NSConcreteStackBlock_100ea82a0;
  local_b0 = 0xc2000000;
  local_a8 = FUN_100b55fd0;
  puStack_a0 = &DAT_100f35908;
  self_00 = &objc::class_t::SentrySwizzleInfo;
  CStack_90 = param_4;
  local_88 = param_3;
  local_78 = local_98;
  _objc_alloc();
  IVar2 = objc_stub::init((ID)self_00);
  objc_stub::FUN_100c0d900(IVar2,param_3);
  objc_stub::FUN_100c0c260(IVar2,&local_b8);
  (**(code **)(param_5 + 0x10))(param_5,IVar2);
  _method_getTypeEncoding(CVar3);
  _imp_implementationWithBlock(param_5);
  _pthread_mutex_lock((pthread_mutex_t *)&DAT_101042a40);
  CVar4 = param_4;
  _class_replaceMethod(param_4,param_3,param_5,CVar3);
  local_78[3] = CVar4;
  _pthread_mutex_unlock((pthread_mutex_t *)&DAT_101042a40);
  __Block_object_dispose(&local_80,8);
  if (param_7 != 0) {
    FUN_100b55e9c();
    objc_stub::addObject_(param_7,param_4);
  }
  bVar5 = 1;
LAB_100b55df0:
  _objc_sync_exit(IVar1);
  return bVar5;
}



/* Address: 0x100b55e6c | FUN_100b55e6c */

/* WARNING: Function: _objc_retainAutoreleaseReturnValue replaced with injection: _objc_retain_fixup
    */

undefined8 FUN_100b55e6c(void)

{
  if (DAT_1010e30a0 != -1) {
    FUN_100b56040();
  }
  return DAT_1010e3098;
}



/* Address: 0x100b55e9c | FUN_100b55e9c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID FUN_100b55e9c(ID param_1)

{
  ID self;
  ID IVar1;
  ID IVar2;
  undefined *self_00;
  
  self = param_1;
  FUN_100b55e6c();
  IVar1 = objc_stub::FUN_100c11300((ID)&_OBJC_CLASS___NSValue,param_1);
  IVar2 = objc_stub::objectForKey_(self,IVar1);
  if (IVar2 == 0) {
    self_00 = &_OBJC_CLASS___NSMutableSet;
    _objc_alloc();
    IVar2 = objc_stub::init((ID)self_00);
    objc_stub::setObject_forKey_(self,IVar2,IVar1);
  }
  return IVar2;
}



/* Address: 0x100b55f40 | SentrySwizzle::swizzleClassMethod:inClass:newImpFactory: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x28 bytes */

void SentrySwizzle::swizzleClassMethod_inClass_newImpFactory_
               (ID param_1,SEL param_2,SEL param_3,CLASS param_4,ID param_5,undefined4 param_6)

{
  _object_getClass(param_4);
  objc_stub::swizzleInstanceMethod_inClass_newImpFactory_mode_key_
            (param_1,param_3,param_4,param_5,0,0);
  return;
}



/* Address: 0x100b55fa0 | FUN_100b55fa0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b55fa0(void)

{
  undefined *self;
  
  self = &_OBJC_CLASS___NSMutableDictionary;
  _objc_alloc();
  DAT_1010e3098 = objc_stub::init((ID)self);
  return 0;
}



/* Address: 0x100b55fd0 | FUN_100b55fd0 */

long FUN_100b55fd0(long param_1)

{
  long lVar1;
  
  _pthread_mutex_lock((pthread_mutex_t *)&DAT_101042a40);
  lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18);
  _pthread_mutex_unlock((pthread_mutex_t *)&DAT_101042a40);
  if (lVar1 != 0) {
    return lVar1;
  }
  lVar1 = *(long *)(param_1 + 0x28);
  _class_getSuperclass(lVar1);
  _class_getInstanceMethod();
  _method_getImplementation();
  return lVar1;
}



/* Address: 0x100b56040 | FUN_100b56040 */

void FUN_100b56040(void)

{
  _dispatch_once(&DAT_1010e30a0,&PTR___NSConcreteGlobalBlock_100f358e8);
  return;
}



/* Address: 0x100b56054 | FUN_100b56054 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID FUN_100b56054(long param_1)

{
  ID IVar1;
  undefined8 uVar2;
  
  if (param_1 == 1) {
    uVar2 = 1;
  }
  else {
    if (param_1 != 2) {
      return 0;
    }
    uVar2 = 0;
  }
  IVar1 = objc_stub::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,uVar2);
  return IVar1;
}



/* Address: 0x100b5609c | SentryStacktraceBuilder::initWithCrashStackEntryMapper: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryStacktraceBuilder::initWithCrashStackEntryMapper_(ID param_1,SEL param_2,ID param_3)

{
  ID self;
  objc_super local_30;
  
  local_30.super_class = &objc::class_t::SentryStacktraceBuilder;
  local_30.receiver = param_1;
  self = _objc_msgSendSuper2(&local_30,"init");
  if (self != 0) {
    objc_stub::FUN_100c0b1c0(self,param_3);
  }
  return self;
}



/* Address: 0x100b56108 | SentryStacktraceBuilder::retrieveStacktraceFromCursor: */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x370 bytes */

ID SentryStacktraceBuilder::retrieveStacktraceFromCursor_
             (ID param_1,undefined8 param_2,long *param_3)

{
  ID IVar1;
  long *plVar2;
  ID IVar3;
  ID IVar4;
  undefined1 auStack_3b0 [864];
  
  IVar1 = objc_stub::array((ID)&_OBJC_CLASS___NSMutableArray);
  plVar2 = param_3;
  (*(code *)param_3[7])();
  if ((int)plVar2 != 0) {
    IVar4 = 0;
    do {
      while (*param_3 != -0x4d3) {
        IVar4 = objc_stub::FUN_100c00340(param_1);
        _memcpy(auStack_3b0,param_3,0x360);
        IVar4 = objc_stub::FUN_100c069c0(IVar4,auStack_3b0);
        objc_stub::addObject_(IVar1,IVar4);
        plVar2 = param_3;
        (*(code *)param_3[7])();
        if (((ulong)plVar2 & 1) == 0) goto LAB_100b56228;
      }
      if (IVar4 != 0) {
        IVar3 = objc_stub::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,1);
        objc_stub::FUN_100c0dd00(IVar4,IVar3);
      }
      plVar2 = param_3;
      (*(code *)param_3[7])();
    } while (((ulong)plVar2 & 1) != 0);
  }
LAB_100b56228:
  IVar1 = objc_stub::FUN_100bfea00((ID)&objc::class_t::SentryStacktraceBuilder,IVar1);
  return IVar1;
}



/* Address: 0x100b5626c | SentryStacktraceBuilder::buildStackTraceFromStackEntries:amount: */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x1c bytes */

ID SentryStacktraceBuilder::buildStackTraceFromStackEntries_amount_
             (ID param_1,SEL param_2,AnonymousStructure0 *param_3,unsigned_int param_4)

{
  undefined *self;
  ID IVar1;
  ID IVar2;
  ulong uVar3;
  ID IVar4;
  unsigned_long_long uVar5;
  char **ppcVar6;
  unsigned_long_long local_a8;
  char *local_a0;
  unsigned_long_long uStack_98;
  char *local_90;
  unsigned_long_long uStack_88;
  char *local_80;
  unsigned_long_long uStack_78;
  char *pcStack_70;
  unsigned_long_long uStack_68;
  
  uVar3 = (ulong)param_4;
  self = &_OBJC_CLASS___NSMutableArray;
  _objc_alloc();
  IVar1 = objc_stub::FUN_100c03c60((ID)self,uVar3);
  if (param_4 != 0) {
    IVar4 = 0;
    ppcVar6 = &param_3->field1_0x8;
    do {
      uVar5 = ((AnonymousStructure0 *)(ppcVar6 + -1))->field0_0x0;
      uStack_78 = (unsigned_long_long)ppcVar6[1];
      local_80 = *ppcVar6;
      uStack_68 = (unsigned_long_long)ppcVar6[3];
      pcStack_70 = ppcVar6[2];
      if (uVar5 == 0xfffffffffffffb2d) {
        if (IVar4 != 0) {
          IVar2 = objc_stub::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,1);
          objc_stub::FUN_100c0dd00(IVar4,IVar2);
        }
      }
      else {
        IVar4 = objc_stub::FUN_100c00340(param_1);
        uStack_98 = uStack_78;
        local_a0 = local_80;
        uStack_88 = uStack_68;
        local_90 = pcStack_70;
        local_a8 = uVar5;
        IVar4 = objc_stub::FUN_100c09fe0(IVar4,&local_a8);
        objc_stub::addObject_(IVar1,IVar4);
      }
      ppcVar6 = ppcVar6 + 5;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  IVar1 = objc_stub::FUN_100bfea00((ID)&objc::class_t::SentryStacktraceBuilder,IVar1);
  return IVar1;
}



/* Address: 0x100b563cc | SentryStacktraceBuilder::buildStacktraceForThread:context: */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID SentryStacktraceBuilder::buildStacktraceForThread_context_
             (ID param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ID IVar1;
  undefined1 auStack_6f0 [864];
  undefined1 auStack_390 [864];
  
  FUN_100b5100c(param_3,param_4,0);
  FUN_100b2acb8(auStack_390,100,param_4);
  _memcpy(auStack_6f0,auStack_390,0x360);
  IVar1 = objc_stub::FUN_100c09640(param_1,auStack_6f0);
  return IVar1;
}



/* Address: 0x100b56440 | SentryStacktraceBuilder::buildStacktraceForCurrentThread */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryStacktraceBuilder::buildStacktraceForCurrentThread(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined1 auStack_6e0 [864];
  undefined1 auStack_380 [864];
  
  FUN_100b2b938(auStack_380,0);
  _memcpy(auStack_6e0,auStack_380,0x360);
  IVar1 = objc_stub::FUN_100c09640(param_1,auStack_6e0);
  return IVar1;
}



/* Address: 0x100b56494 | SentryStacktraceBuilder::buildStacktraceForCurrentThreadAsyncUnsafe */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryStacktraceBuilder::buildStacktraceForCurrentThreadAsyncUnsafe(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined1 auStack_6e0 [864];
  undefined1 auStack_380 [864];
  
  IVar1 = param_1;
  FUN_100b3a1c0();
  if ((int)IVar1 != 0) {
    FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryStacktraceBuilder.m"
                  ,0x5c,&cf_Buildingasync_unsafestacktrace___);
  }
  FUN_100b2b938(auStack_380,0);
  _memcpy(auStack_6e0,auStack_380,0x360);
  IVar1 = objc_stub::FUN_100c09640(param_1,auStack_6e0);
  return IVar1;
}



/* Address: 0x100b56508 | SentryStacktraceBuilder::buildStacktraceFromFrames: */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryStacktraceBuilder::buildStacktraceFromFrames_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  class_t *self;
  
  IVar1 = objc_stub::FUN_100c09080((ID)&objc::class_t::_TtC6Sentry18SentryFrameRemover);
  IVar1 = objc_stub::FUN_100c09660(IVar1);
  IVar1 = objc_stub::FUN_100bfdae0(IVar1);
  self = &objc::class_t::SentryStacktrace;
  _objc_alloc();
  IVar1 = objc_stub::FUN_100c042a0((ID)self,IVar1,*(undefined8 *)PTR____NSDictionary0___100ea9b08);
  return IVar1;
}



/* Address: 0x100b565a0 | SentryStacktraceBuilder::crashStackEntryMapper */

/* Function Stack Size: 0x10 bytes */

ID SentryStacktraceBuilder::crashStackEntryMapper(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 8);
}



/* Address: 0x100b565a8 | SentryStacktraceBuilder::setCrashStackEntryMapper: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryStacktraceBuilder::setCrashStackEntryMapper_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 8) = param_3;
  return;
}



/* Address: 0x100b565b4 | SentryStacktraceBuilder::.cxx_destruct */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryStacktraceBuilder::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



/* Address: 0x100b565c0 | SentryBaggage::initWithTraceId:publicKey:releaseName:environment:transaction:sampleRate:sampled:replayId: */

/* Function Stack Size: 0x50 bytes */

ID SentryBaggage::
   initWithTraceId_publicKey_releaseName_environment_transaction_sampleRate_sampled_replayId_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,ID param_7,
             ID param_8,ID param_9,ID param_10)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100c04e00(param_1);
  return IVar1;
}



/* Address: 0x100b565e8 | SentryBaggage::initWithTraceId:publicKey:releaseName:environment:transaction:sampleRate:sampleRand:sampled:replayId: */

/* Function Stack Size: 0x58 bytes */

ID SentryBaggage::
   initWithTraceId_publicKey_releaseName_environment_transaction_sampleRate_sampleRand_sampled_replayId_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,ID param_7,
             ID param_8,ID param_9,ID param_10,ID param_11)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100c04e00(param_1);
  return IVar1;
}



/* Address: 0x100b56614 | SentryBaggage::initWithTraceId:publicKey:releaseName:environment:transaction:sampleRate:sampleRand:sampled:replayId:orgId: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x60 bytes */

ID SentryBaggage::
   initWithTraceId_publicKey_releaseName_environment_transaction_sampleRate_sampleRand_sampled_replayId_orgId_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,ID param_7,
             ID param_8,ID param_9,ID param_10,ID param_11,ID param_12)

{
  ID IVar1;
  objc_super local_78;
  
  local_78.super_class = &objc::class_t::SentryBaggage;
  local_78.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_78,"init");
  if (IVar1 != 0) {
    *(ID *)(IVar1 + 8) = param_3;
    *(ID *)(IVar1 + 0x10) = param_4;
    *(ID *)(IVar1 + 0x18) = param_5;
    *(ID *)(IVar1 + 0x20) = param_6;
    *(ID *)(IVar1 + 0x28) = param_7;
    *(ID *)(IVar1 + 0x40) = param_8;
    *(ID *)(IVar1 + 0x38) = param_9;
    *(ID *)(IVar1 + 0x48) = param_10;
    *(ID *)(IVar1 + 0x50) = param_11;
    *(ID *)(IVar1 + 0x58) = param_12;
  }
  return IVar1;
}



/* Address: 0x100b56808 | SentryBaggage::toHTTPHeaderWithOriginalBaggage: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryBaggage::toHTTPHeaderWithOriginalBaggage_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined *self;
  ID IVar2;
  
  IVar1 = objc_stub::mutableCopy(param_3);
  if (IVar1 == 0) {
    self = &_OBJC_CLASS___NSMutableDictionary;
    _objc_alloc();
    IVar1 = objc_stub::init((ID)self);
  }
  IVar2 = objc_stub::FUN_100c0a000(*(ID *)(param_1 + 8));
  objc_stub::setValue_forKey_(IVar1,IVar2,&cf_sentry_trace_id);
  objc_stub::setValue_forKey_(IVar1,*(undefined8 *)(param_1 + 0x10),&cf_sentry_public_key);
  if (*(long *)(param_1 + 0x18) != 0) {
    objc_stub::setValue_forKey_(IVar1,*(long *)(param_1 + 0x18),&cf_sentry_release);
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    objc_stub::setValue_forKey_(IVar1,*(long *)(param_1 + 0x20),&cf_sentry_environment);
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    objc_stub::setValue_forKey_(IVar1,*(long *)(param_1 + 0x28),&cf_sentry_transaction);
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    objc_stub::setValue_forKey_(IVar1,*(long *)(param_1 + 0x38),&cf_sentry_sample_rand);
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    objc_stub::setValue_forKey_(IVar1,*(long *)(param_1 + 0x40),&cf_sentry_sample_rate);
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    objc_stub::setValue_forKey_(IVar1,*(long *)(param_1 + 0x48),&cf_sentry_sampled);
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    objc_stub::setValue_forKey_(IVar1,*(long *)(param_1 + 0x50),&cf_sentry_replay_id);
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    objc_stub::setValue_forKey_(IVar1,*(long *)(param_1 + 0x58),&cf_sentry_org_id);
  }
  IVar1 = objc_stub::FUN_100c01980
                    ((ID)&objc::class_t::_TtC6Sentry26SentryBaggageSerialization,IVar1);
  return IVar1;
}



/* Address: 0x100b56990 | SentryBaggage::traceId */

/* Function Stack Size: 0x10 bytes */

ID SentryBaggage::traceId(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 8);
}



/* Address: 0x100b56998 | SentryBaggage::publicKey */

/* Function Stack Size: 0x10 bytes */

ID SentryBaggage::publicKey(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x10);
}



/* Address: 0x100b569a0 | SentryBaggage::releaseName */

/* Function Stack Size: 0x10 bytes */

ID SentryBaggage::releaseName(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x18);
}



/* Address: 0x100b569a8 | SentryBaggage::environment */

/* Function Stack Size: 0x10 bytes */

ID SentryBaggage::environment(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x20);
}



/* Address: 0x100b569b0 | SentryBaggage::transaction */

/* Function Stack Size: 0x10 bytes */

ID SentryBaggage::transaction(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x28);
}



/* Address: 0x100b569b8 | SentryBaggage::userId */

/* Function Stack Size: 0x10 bytes */

ID SentryBaggage::userId(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x30);
}



/* Address: 0x100b569c0 | SentryBaggage::sampleRand */

/* Function Stack Size: 0x10 bytes */

ID SentryBaggage::sampleRand(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x38);
}



/* Address: 0x100b569c8 | SentryBaggage::sampleRate */

/* Function Stack Size: 0x10 bytes */

ID SentryBaggage::sampleRate(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x40);
}



/* Address: 0x100b569d0 | SentryBaggage::sampled */

/* Function Stack Size: 0x10 bytes */

ID SentryBaggage::sampled(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x48);
}



/* Address: 0x100b569d8 | SentryBaggage::setSampled: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryBaggage::setSampled_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x48) = param_3;
  return;
}



/* Address: 0x100b569e4 | SentryBaggage::replayId */

/* Function Stack Size: 0x10 bytes */

ID SentryBaggage::replayId(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x50);
}



/* Address: 0x100b569ec | SentryBaggage::setReplayId: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryBaggage::setReplayId_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x50) = param_3;
  return;
}



/* Address: 0x100b569f8 | SentryBaggage::orgId */

/* Function Stack Size: 0x10 bytes */

ID SentryBaggage::orgId(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x58);
}



/* Address: 0x100b56a00 | SentryBaggage::.cxx_destruct */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryBaggage::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
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



/* Address: 0x100b56a9c | FUN_100b56a9c */

char * FUN_100b56a9c(int param_1)

{
  if (param_1 - 1U < 5) {
    return (&PTR_s_Invalid_character_100f35988)[param_1 - 1U];
  }
  return "(unknown error)";
}



/* Address: 0x100b56ac4 | thunk_FUN_100b56ac8 */

void thunk_FUN_100b56ac8(undefined8 *param_1,long param_2,int param_3)

{
  byte bVar1;
  long lVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  long lVar9;
  byte abStack_270 [512];
  long lStack_70;
  
  iVar8 = 0;
  lStack_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  while (iVar8 < param_3) {
    lVar9 = (long)param_3 - (long)iVar8;
    pbVar7 = (byte *)(param_2 + iVar8);
    pbVar6 = pbVar7;
    if ((int)lVar9 < 0x101) {
      pbVar5 = pbVar7 + lVar9;
      pbVar3 = abStack_270;
      pbVar4 = abStack_270;
      if (0 < (int)lVar9) goto LAB_100b56b50;
    }
    else {
      pbVar5 = pbVar7 + 0x100;
      lVar9 = 0x100;
      pbVar3 = abStack_270;
LAB_100b56b50:
      do {
        bVar1 = *pbVar6;
        pbVar4 = pbVar3;
        if (((bVar1 == 0x22) || (bVar1 == 0x5c)) || (bVar1 < 0x20)) break;
        pbVar4 = pbVar3 + 1;
        *pbVar3 = bVar1;
        pbVar6 = pbVar6 + 1;
        pbVar3 = pbVar4;
      } while (pbVar6 < pbVar5);
    }
    if (pbVar6 < pbVar5) {
      pbVar7 = pbVar7 + (lVar9 - (long)pbVar6);
      pbVar5 = pbVar4;
      do {
        bVar1 = *pbVar6;
        if (bVar1 < 0xc) {
          if (bVar1 == 8) {
            pbVar4 = pbVar5 + 2;
            pbVar5[0] = 0x5c;
            pbVar5[1] = 0x62;
          }
          else if (bVar1 == 9) {
            pbVar4 = pbVar5 + 2;
            pbVar5[0] = 0x5c;
            pbVar5[1] = 0x74;
          }
          else {
            if (bVar1 != 10) goto LAB_100b56c0c;
            pbVar4 = pbVar5 + 2;
            pbVar5[0] = 0x5c;
            pbVar5[1] = 0x6e;
          }
        }
        else if (bVar1 < 0x22) {
          if (bVar1 == 0xc) {
            pbVar4 = pbVar5 + 2;
            pbVar5[0] = 0x5c;
            pbVar5[1] = 0x66;
          }
          else {
            if (bVar1 != 0xd) goto LAB_100b56c0c;
            pbVar4 = pbVar5 + 2;
            pbVar5[0] = 0x5c;
            pbVar5[1] = 0x72;
          }
        }
        else if ((bVar1 == 0x5c) || (bVar1 == 0x22)) {
          *pbVar5 = 0x5c;
          pbVar5[1] = bVar1;
          pbVar4 = pbVar5 + 2;
        }
        else {
LAB_100b56c0c:
          if (bVar1 < 0x20) goto LAB_100b56c6c;
          pbVar4 = pbVar5 + 1;
          *pbVar5 = bVar1;
        }
        pbVar6 = pbVar6 + 1;
        pbVar7 = pbVar7 + -1;
        pbVar5 = pbVar4;
      } while (pbVar7 != (byte *)0x0);
    }
    lVar2 = (long)pbVar4 - (long)(int)((long)pbVar4 - (long)abStack_270);
    (*(code *)*param_1)(lVar2,(long)pbVar4 - (long)abStack_270,param_1[1]);
    iVar8 = (int)lVar9 + iVar8;
    if ((int)lVar2 != 0) break;
  }
LAB_100b56c6c:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != lStack_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x100b56ac8 | FUN_100b56ac8 */

void FUN_100b56ac8(undefined8 *param_1,long param_2,int param_3)

{
  byte bVar1;
  long lVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  long lVar9;
  byte abStack_270 [512];
  long local_70;
  
  iVar8 = 0;
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  while (iVar8 < param_3) {
    lVar9 = (long)param_3 - (long)iVar8;
    pbVar7 = (byte *)(param_2 + iVar8);
    pbVar6 = pbVar7;
    if ((int)lVar9 < 0x101) {
      pbVar5 = pbVar7 + lVar9;
      pbVar3 = abStack_270;
      pbVar4 = abStack_270;
      if (0 < (int)lVar9) goto LAB_100b56b50;
    }
    else {
      pbVar5 = pbVar7 + 0x100;
      lVar9 = 0x100;
      pbVar3 = abStack_270;
LAB_100b56b50:
      do {
        bVar1 = *pbVar6;
        pbVar4 = pbVar3;
        if (((bVar1 == 0x22) || (bVar1 == 0x5c)) || (bVar1 < 0x20)) break;
        pbVar4 = pbVar3 + 1;
        *pbVar3 = bVar1;
        pbVar6 = pbVar6 + 1;
        pbVar3 = pbVar4;
      } while (pbVar6 < pbVar5);
    }
    if (pbVar6 < pbVar5) {
      pbVar7 = pbVar7 + (lVar9 - (long)pbVar6);
      pbVar5 = pbVar4;
      do {
        bVar1 = *pbVar6;
        if (bVar1 < 0xc) {
          if (bVar1 == 8) {
            pbVar4 = pbVar5 + 2;
            pbVar5[0] = 0x5c;
            pbVar5[1] = 0x62;
          }
          else if (bVar1 == 9) {
            pbVar4 = pbVar5 + 2;
            pbVar5[0] = 0x5c;
            pbVar5[1] = 0x74;
          }
          else {
            if (bVar1 != 10) goto LAB_100b56c0c;
            pbVar4 = pbVar5 + 2;
            pbVar5[0] = 0x5c;
            pbVar5[1] = 0x6e;
          }
        }
        else if (bVar1 < 0x22) {
          if (bVar1 == 0xc) {
            pbVar4 = pbVar5 + 2;
            pbVar5[0] = 0x5c;
            pbVar5[1] = 0x66;
          }
          else {
            if (bVar1 != 0xd) goto LAB_100b56c0c;
            pbVar4 = pbVar5 + 2;
            pbVar5[0] = 0x5c;
            pbVar5[1] = 0x72;
          }
        }
        else if ((bVar1 == 0x5c) || (bVar1 == 0x22)) {
          *pbVar5 = 0x5c;
          pbVar5[1] = bVar1;
          pbVar4 = pbVar5 + 2;
        }
        else {
LAB_100b56c0c:
          if (bVar1 < 0x20) goto LAB_100b56c6c;
          pbVar4 = pbVar5 + 1;
          *pbVar5 = bVar1;
        }
        pbVar6 = pbVar6 + 1;
        pbVar7 = pbVar7 + -1;
        pbVar5 = pbVar4;
      } while (pbVar7 != (byte *)0x0);
    }
    lVar2 = (long)pbVar4 - (long)(int)((long)pbVar4 - (long)abStack_270);
    (*(code *)*param_1)(lVar2,(long)pbVar4 - (long)abStack_270,param_1[1]);
    iVar8 = (int)lVar9 + iVar8;
    if ((int)lVar2 != 0) break;
  }
LAB_100b56c6c:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x100b56cb0 | FUN_100b56cb0 */

void FUN_100b56cb0(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100b56cc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_1)("\"",1,param_1[1]);
  return;
}



/* Address: 0x100b56cc4 | FUN_100b56cc4 */

undefined1 * FUN_100b56cc4(undefined8 *param_1,byte *param_2,int param_3)

{
  byte *pbVar1;
  undefined1 *puVar2;
  undefined1 local_32;
  undefined1 local_31;
  
  if (param_3 < 1) {
    return (undefined1 *)0x0;
  }
  pbVar1 = param_2 + param_3;
  do {
    local_32 = (&DAT_100c97d70)[*param_2 >> 4];
    local_31 = (&DAT_100c97d70)[(ulong)*param_2 & 0xf];
    puVar2 = &local_32;
    (*(code *)*param_1)(puVar2,2,param_1[1]);
    if ((int)puVar2 != 0) {
      return puVar2;
    }
    param_2 = param_2 + 1;
  } while (param_2 < pbVar1);
  return (undefined1 *)0x0;
}



/* Address: 0x100b56d50 | FUN_100b56d50 */

void FUN_100b56d50(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100b56d60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_1)("\"",1,param_1[1]);
  return;
}



/* Address: 0x100b56d64 | FUN_100b56d64 */

void FUN_100b56d64(undefined8 *param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4)

{
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *param_1 = param_3;
  param_1[1] = param_4;
  *(undefined1 *)((long)param_1 + 0xdd) = param_2;
  *(undefined1 *)((long)param_1 + 0xdc) = 1;
  return;
}



/* Address: 0x100b56d98 | FUN_100b56d98 */

long FUN_100b56d98(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (((*(byte *)((long)param_1 + 0x25) & 1) == 0) && (*(int *)(lVar1 + 0x10) < 3)) {
    lVar1 = 0;
  }
  else {
    FUN_100bf33a4();
  }
  (*(code *)param_1[5])(param_1);
  return lVar1;
}



/* Address: 0x100b56dec | FUN_100b56dec */

undefined8 FUN_100b56dec(void)

{
  return 0;
}



/* Address: 0x100b56df4 | FUN_100b56df4 */

void FUN_100b56df4(void)

{
  return;
}



/* Address: 0x100b56df8 | FUN_100b56df8 */

void FUN_100b56df8(uint param_1,long *param_2)

{
  long local_28;
  
  if (param_1 < 0x80) {
    *(char *)*param_2 = (char)param_1;
    local_28 = 1;
  }
  else {
    FUN_100b57bc0(param_1,param_2,&local_28);
  }
  *param_2 = *param_2 + local_28;
  return;
}



/* Address: 0x100b56e50 | FUN_100b56e50 */

void FUN_100b56e50(void)

{
  long unaff_x19;
  
                    /* WARNING: Could not recover jumptable at 0x000100b56e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x19 + 0x28))();
  return;
}



/* Address: 0x100b56e60 | FUN_100b56e60 */

void FUN_100b56e60(void)

{
  return;
}



/* Address: 0x100b56e6c | FUN_100b56e6c */

uint FUN_100b56e6c(ulong param_1)

{
  long unaff_x22;
  
  return *(uint *)(unaff_x22 + (param_1 & 0xffffffff) * 4 + 0x3c) & 0x4000;
}



/* Address: 0x100b56e7c | FUN_100b56e7c */

void FUN_100b56e7c(void)

{
  FUN_100bf2d64();
  return;
}



/* Address: 0x100b56e88 | FUN_100b56e88 */

void FUN_100b56e88(void)

{
  return;
}



/* Address: 0x100b56e90 | FUN_100b56e90 */

void FUN_100b56e90(__darwin_ct_rune_t param_1)

{
  ___maskrune(param_1,0x4000);
  return;
}



/* Address: 0x100b56e98 | FUN_100b56e98 */

void FUN_100b56e98(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x000100b56e9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x100b56ea0 | FUN_100b56ea0 */

void FUN_100b56ea0(void)

{
  return;
}



/* Address: 0x100b56eb8 | FUN_100b56eb8 */

void FUN_100b56eb8(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x000100b56ec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x100b56ec4 | FUN_100b56ec4 */

void FUN_100b56ec4(code *UNRECOVERED_JUMPTABLE,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100b56ec8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2,1);
  return;
}



/* Address: 0x100b56ecc | FUN_100b56ecc */

void FUN_100b56ecc(void)

{
  FUN_100bf2d64();
  return;
}



/* Address: 0x100b56ed4 | FUN_100b56ed4 */

void FUN_100b56ed4(void)

{
  long *unaff_x19;
  long unaff_x20;
  
  *unaff_x19 = unaff_x20 + 1;
  return;
}



/* Address: 0x100b56ee0 | FUN_100b56ee0 */

void FUN_100b56ee0(void)

{
  return;
}



/* Address: 0x100b56ef0 | FUN_100b56ef0 */

undefined1  [16] FUN_100b56ef0(undefined8 param_1)

{
  undefined8 *unaff_x19;
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = *unaff_x19;
  auVar1._8_8_ = param_1;
  return auVar1;
}



/* Address: 0x100b56efc | FUN_100b56efc */

void FUN_100b56efc(void)

{
  undefined8 *unaff_x19;
  
                    /* WARNING: Could not recover jumptable at 0x000100b56f08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*unaff_x19)(&stack0x00000013);
  return;
}



/* Address: 0x100b56f0c | FUN_100b56f0c */

void FUN_100b56f0c(undefined8 param_1,undefined8 param_2,char *param_3)

{
  _snprintf(&stack0x00000013,0x15,param_3);
  return;
}



/* Address: 0x100b56f18 | FUN_100b56f18 */

void FUN_100b56f18(code *UNRECOVERED_JUMPTABLE,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100b56f1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2,4);
  return;
}


