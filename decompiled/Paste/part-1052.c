/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100b53ad4 | SentryCrashReportSink::setDispatchQueue: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryCrashReportSink::setDispatchQueue_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x18) = param_3;
  return;
}



/* Address: 0x100b53ae0 | SentryCrashReportSink::.cxx_destruct */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryCrashReportSink::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



/* Address: 0x100b53b1c | SentryTraceContext::initWithTraceId:publicKey:releaseName:environment:transaction:sampleRate:sampled:replayId: */

/* Function Stack Size: 0x50 bytes */

ID SentryTraceContext::
   initWithTraceId_publicKey_releaseName_environment_transaction_sampleRate_sampled_replayId_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,ID param_7,
             ID param_8,ID param_9,ID param_10)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100c04e00(param_1);
  return IVar1;
}



/* Address: 0x100b53b44 | SentryTraceContext::initWithTraceId:publicKey:releaseName:environment:transaction:sampleRate:sampleRand:sampled:replayId: */

/* Function Stack Size: 0x58 bytes */

ID SentryTraceContext::
   initWithTraceId_publicKey_releaseName_environment_transaction_sampleRate_sampleRand_sampled_replayId_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,ID param_7,
             ID param_8,ID param_9,ID param_10,ID param_11)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100c04e00(param_1);
  return IVar1;
}



/* Address: 0x100b53b70 | SentryTraceContext::initWithTraceId:publicKey:releaseName:environment:transaction:sampleRate:sampleRand:sampled:replayId:orgId: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x60 bytes */

ID SentryTraceContext::
   initWithTraceId_publicKey_releaseName_environment_transaction_sampleRate_sampleRand_sampled_replayId_orgId_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,ID param_7,
             ID param_8,ID param_9,ID param_10,ID param_11,ID param_12)

{
  ID IVar1;
  objc_super local_70;
  
  local_70.super_class = &objc::class_t::SentryTraceContext;
  local_70.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_70,"init");
  if (IVar1 != 0) {
    *(ID *)(IVar1 + 8) = param_3;
    *(ID *)(IVar1 + 0x10) = param_4;
    *(ID *)(IVar1 + 0x20) = param_6;
    *(ID *)(IVar1 + 0x18) = param_5;
    *(ID *)(IVar1 + 0x28) = param_7;
    *(ID *)(IVar1 + 0x38) = param_9;
    *(ID *)(IVar1 + 0x30) = param_8;
    *(ID *)(IVar1 + 0x40) = param_10;
    *(ID *)(IVar1 + 0x48) = param_11;
    *(ID *)(IVar1 + 0x50) = param_12;
  }
  return IVar1;
}



/* Address: 0x100b53d64 | SentryTraceContext::initWithScope:options: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

ID SentryTraceContext::initWithScope_options_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100c0efc0(param_3);
  IVar1 = objc_stub::FUN_100c03080((ID)&objc::class_t::SentryTracer,IVar1);
  if (IVar1 == 0) {
    IVar1 = 0;
  }
  else {
    IVar1 = objc_stub::FUN_100c04ee0(param_1,IVar1,param_3,param_4);
  }
  return IVar1;
}



/* Address: 0x100b53e3c | SentryTraceContext::initWithTracer:scope:options: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x28 bytes */

ID SentryTraceContext::initWithTracer_scope_options_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  ID IVar8;
  ID local_90;
  cfstringStruct *local_70;
  ID local_68;
  
  IVar1 = objc_stub::FUN_100c10960(param_3);
  IVar2 = 0;
  if (IVar1 != 0) {
    IVar2 = objc_stub::FUN_100c07a60(param_5);
    if (IVar2 == 0) {
      IVar2 = 0;
    }
    else {
      IVar2 = objc_stub::FUN_100c10ac0(param_3);
      IVar2 = objc_stub::sampleRand(IVar2);
      if (IVar2 == 0) {
        local_68 = 0;
      }
      else {
        objc_stub::doubleValue(IVar2);
        local_68 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf__f);
      }
      IVar2 = objc_stub::FUN_100c10ac0(param_3);
      IVar2 = objc_stub::sampleRate(IVar2);
      if (IVar2 == 0) {
        local_90 = 0;
      }
      else {
        objc_stub::doubleValue(IVar2);
        local_90 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf__f);
      }
      IVar2 = objc_stub::FUN_100c098c0(param_3);
      if (IVar2 == 0) {
        local_70 = (cfstringStruct *)0x0;
      }
      else {
        IVar2 = objc_stub::FUN_100c098c0(param_3);
        local_70 = &cf_true;
        if (IVar2 != 1) {
          local_70 = &cf_false;
        }
      }
      IVar1 = objc_stub::FUN_100c10960(param_3);
      IVar2 = IVar1;
      IVar3 = objc_stub::FUN_100c07a60(param_5);
      IVar3 = objc_stub::FUN_100c10fe0(IVar3);
      IVar3 = objc_stub::FUN_100c11060(IVar3);
      IVar4 = objc_stub::FUN_100c08e20(param_5);
      IVar5 = objc_stub::environment(param_5);
      IVar6 = objc_stub::FUN_100c10ac0(param_3);
      IVar6 = objc_stub::name(IVar6);
      IVar7 = objc_stub::FUN_100c092a0(param_4);
      IVar8 = objc_stub::FUN_100c017c0(param_5);
      IVar2 = objc_stub::FUN_100c04e00
                        (param_1,IVar1,IVar3,IVar4,IVar5,IVar6,local_90,local_68,local_70,IVar7,
                         IVar8,IVar2,param_4);
    }
  }
  return IVar2;
}



/* Address: 0x100b541b0 | SentryTraceContext::initWithTraceId:options:replayId: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x28 bytes */

ID SentryTraceContext::initWithTraceId_options_replayId_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  class_t *self;
  
  self = &objc::class_t::SentryTraceContext;
  _objc_alloc();
  IVar1 = objc_stub::FUN_100c07a60(param_4);
  IVar1 = objc_stub::FUN_100c10fe0(IVar1);
  IVar1 = objc_stub::FUN_100c11060(IVar1);
  IVar2 = objc_stub::FUN_100c08e20(param_4);
  IVar3 = objc_stub::environment(param_4);
  IVar4 = objc_stub::FUN_100c017c0(param_4);
  IVar1 = objc_stub::FUN_100c04e00((ID)self,param_3,IVar1,IVar2,IVar3,0,0,0,0,param_5,IVar4);
  return IVar1;
}



/* Address: 0x100b54324 | SentryTraceContext::initWithDict: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryTraceContext::initWithDict_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  ID IVar2;
  ID IVar3;
  class_t *self;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  ID IVar8;
  ID IVar9;
  ID IVar10;
  ID IVar11;
  ID IVar12;
  
  IVar2 = objc_stub::objectForKeyedSubscript_(param_3,&cf_trace_id);
  iVar1 = 0;
  if (IVar2 != 0) {
    IVar3 = objc_stub::class((ID)&_OBJC_CLASS___NSString);
    IVar3 = objc_stub::isKindOfClass_(IVar2,IVar3);
    iVar1 = (int)IVar3;
    if ((IVar3 & 1) != 0) {
      self = &objc::class_t::SentryId;
      _objc_alloc();
      IVar2 = objc_stub::FUN_100c05120((ID)self,IVar2);
      IVar3 = objc_stub::objectForKeyedSubscript_(param_3,&cf_public_key);
      if (IVar2 == 0) {
        return 0;
      }
      if (IVar3 == 0) {
        return 0;
      }
      IVar4 = objc_stub::objectForKeyedSubscript_(param_3,&cf_release);
      IVar5 = objc_stub::objectForKeyedSubscript_(param_3,&cf_environment);
      IVar6 = objc_stub::objectForKeyedSubscript_(param_3,&cf_transaction);
      IVar7 = objc_stub::objectForKeyedSubscript_(param_3,&cf_sample_rate);
      IVar8 = objc_stub::objectForKeyedSubscript_(param_3,&cf_sample_rand);
      IVar12 = IVar8;
      IVar9 = objc_stub::objectForKeyedSubscript_(param_3,&cf_sampled);
      IVar10 = objc_stub::objectForKeyedSubscript_(param_3,&cf_replay_id);
      IVar11 = objc_stub::objectForKeyedSubscript_(param_3,&cf_org_id);
      IVar2 = objc_stub::FUN_100c04e00
                        (param_1,IVar2,IVar3,IVar4,IVar5,IVar6,IVar7,IVar8,IVar9,IVar10,IVar11,
                         IVar12);
      return IVar2;
    }
  }
  FUN_100b3a1f0();
  if (iVar1 != 0) {
    FUN_100b3a2b8("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryTraceContext.m"
                  ,0x9b,&cf_Invalidtrace_id___);
  }
  return 0;
}



/* Address: 0x100b545a8 | SentryTraceContext::toBaggage */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryTraceContext::toBaggage(ID param_1,SEL param_2)

{
  class_t *self;
  ID IVar1;
  
  self = &objc::class_t::SentryBaggage;
  _objc_alloc();
  IVar1 = objc_stub::FUN_100c04e00
                    ((ID)self,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                     *(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                     *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                     *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                     *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50));
  return IVar1;
}



/* Address: 0x100b545f8 | SentryTraceContext::serialize */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryTraceContext::serialize(ID param_1,SEL param_2)

{
  ID IVar1;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  ID IStack_48;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ea82f0;
  local_58 = &cf_trace_id;
  IStack_48 = objc_stub::FUN_100c0a000(*(ID *)(param_1 + 8));
  local_50 = &cf_public_key;
  local_40 = *(undefined8 *)(param_1 + 0x10);
  IVar1 = objc_stub::FUN_100c012c0((ID)&_OBJC_CLASS___NSDictionary,&IStack_48,&local_58,2);
  IVar1 = objc_stub::mutableCopy(IVar1);
  if (*(long *)(param_1 + 0x18) != 0) {
    objc_stub::setValue_forKey_(IVar1,*(long *)(param_1 + 0x18),&cf_release);
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    objc_stub::setValue_forKey_(IVar1,*(long *)(param_1 + 0x20),&cf_environment);
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    objc_stub::setValue_forKey_(IVar1,*(long *)(param_1 + 0x28),&cf_transaction);
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    objc_stub::setValue_forKey_(IVar1,*(long *)(param_1 + 0x38),&cf_sample_rand);
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    objc_stub::setValue_forKey_(IVar1,*(long *)(param_1 + 0x30),&cf_sample_rate);
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    objc_stub::setValue_forKey_(IVar1,*(long *)(param_1 + 0x40),&cf_sampled);
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    objc_stub::setValue_forKey_(IVar1,*(long *)(param_1 + 0x48),&cf_replay_id);
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    objc_stub::setValue_forKey_(IVar1,*(long *)(param_1 + 0x50),&cf_org_id);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_38) {
    return IVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100b54784 | SentryTraceContext::traceId */

/* Function Stack Size: 0x10 bytes */

ID SentryTraceContext::traceId(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 8);
}



/* Address: 0x100b5478c | SentryTraceContext::publicKey */

/* Function Stack Size: 0x10 bytes */

ID SentryTraceContext::publicKey(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x10);
}



/* Address: 0x100b54794 | SentryTraceContext::releaseName */

/* Function Stack Size: 0x10 bytes */

ID SentryTraceContext::releaseName(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x18);
}



/* Address: 0x100b5479c | SentryTraceContext::environment */

/* Function Stack Size: 0x10 bytes */

ID SentryTraceContext::environment(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x20);
}



/* Address: 0x100b547a4 | SentryTraceContext::transaction */

/* Function Stack Size: 0x10 bytes */

ID SentryTraceContext::transaction(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x28);
}



/* Address: 0x100b547ac | SentryTraceContext::sampleRate */

/* Function Stack Size: 0x10 bytes */

ID SentryTraceContext::sampleRate(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x30);
}



/* Address: 0x100b547b4 | SentryTraceContext::sampleRand */

/* Function Stack Size: 0x10 bytes */

ID SentryTraceContext::sampleRand(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x38);
}



/* Address: 0x100b547bc | SentryTraceContext::sampled */

/* Function Stack Size: 0x10 bytes */

ID SentryTraceContext::sampled(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x40);
}



/* Address: 0x100b547c4 | SentryTraceContext::replayId */

/* Function Stack Size: 0x10 bytes */

ID SentryTraceContext::replayId(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x48);
}



/* Address: 0x100b547cc | SentryTraceContext::orgId */

/* Function Stack Size: 0x10 bytes */

ID SentryTraceContext::orgId(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x50);
}



/* Address: 0x100b547d4 | SentryTraceContext::.cxx_destruct */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryTraceContext::_cxx_destruct(ID param_1,SEL param_2)

{
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



/* Address: 0x100b54864 | FUN_100b54864 */

void FUN_100b54864(code *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  
  if (DAT_101042a08 != 0) {
    uVar1 = DAT_101042a08;
    if (0xfff < DAT_101042a08) {
      uVar1 = 0x1000;
    }
    uVar3 = (ulong)uVar1;
    puVar2 = &DAT_100ffaa10;
    do {
      if (*(int *)(puVar2 + -1) == 1) {
        (*param_1)(puVar2,param_2);
      }
      puVar2 = puVar2 + 9;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}



/* Address: 0x100b548d8 | FUN_100b548d8 */

void FUN_100b548d8(void)

{
  byte bVar1;
  dispatch_queue_t pdVar2;
  
  bVar1 = DAT_101042a20;
  LOAcquire();
  DAT_101042a20 = 1;
  LORelease();
  if ((bVar1 & 1) != 0) {
    return;
  }
  pdVar2 = _dispatch_get_global_queue(0x15,0);
  _dispatch_async(pdVar2,&PTR___NSConcreteGlobalBlock_100f35838);
  return;
}



/* Address: 0x100b54914 | FUN_100b54914 */

void FUN_100b54914(void)

{
  ulong uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  
  iVar4 = 0xdc3eee;
  FUN_100b4e500("/usr/lib/dyld",0);
  if (iVar4 == -1) {
    FUN_100b4e81c();
    bVar2 = DAT_101042a21;
    uVar3 = DAT_101042a08 + 1;
    if (DAT_101042a08 < 0x1000) {
      uVar1 = (ulong)DAT_101042a08;
      uVar5 = DAT_1010583b0;
      DAT_101042a08 = uVar3;
      FUN_100b4e6d8(DAT_1010583b0,"dyld",&DAT_100ffaa10 + uVar1 * 9,0);
      if ((int)uVar5 != 0) {
        (&DAT_100ffaa08)[uVar1 * 0x12] = 1;
        if (DAT_101042a10 != (code *)0x0) {
          (*DAT_101042a10)(&DAT_100ffaa10 + uVar1 * 9);
        }
      }
    }
    else {
      LOAcquire();
      DAT_101042a21 = 1;
      LORelease();
      DAT_101042a08 = uVar3;
      if ((bVar2 & 1) == 0) {
        FUN_100b5e930("ERROR",
                      "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/SentryCrashBinaryImageCache.c"
                      ,0x4b,
                      "Binary image cache reached capacity of %d images. New images will not be tracked."
                     );
      }
    }
  }
  (*(code *)PTR___dyld_register_func_for_add_image_101042a28)(FUN_100b54ab0);
                    /* WARNING: Could not recover jumptable at 0x000100b5496c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___dyld_register_func_for_remove_image_101042a30)(FUN_100b54b80);
  return;
}



/* Address: 0x100b54a20 | FUN_100b54a20 */

void FUN_100b54a20(void)

{
  return;
}



/* Address: 0x100b54a24 | FUN_100b54a24 */

void FUN_100b54a24(code *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  
  DAT_101042a10 = param_1;
  if ((param_1 != (code *)0x0) && (DAT_101042a08 != 0)) {
    uVar1 = DAT_101042a08;
    if (0xfff < DAT_101042a08) {
      uVar1 = 0x1000;
    }
    uVar3 = (ulong)uVar1;
    puVar2 = &DAT_100ffaa10;
    do {
      if (*(int *)(puVar2 + -1) == 1) {
        (*param_1)(puVar2);
      }
      puVar2 = puVar2 + 9;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}



/* Address: 0x100b54aa0 | FUN_100b54aa0 */

void FUN_100b54aa0(undefined8 param_1)

{
  DAT_101042a18 = param_1;
  return;
}



/* Address: 0x100b54ab0 | FUN_100b54ab0 */

void FUN_100b54ab0(undefined8 param_1)

{
  ulong uVar1;
  code *pcVar2;
  byte bVar3;
  uint uVar4;
  undefined8 uVar5;
  long local_40 [4];
  
  uVar5 = param_1;
  _dladdr(param_1,local_40);
  bVar3 = DAT_101042a21;
  if (((int)uVar5 != 0) && (local_40[0] != 0)) {
    uVar4 = DAT_101042a08 + 1;
    if (DAT_101042a08 < 0x1000) {
      uVar1 = (ulong)DAT_101042a08;
      DAT_101042a08 = uVar4;
      FUN_100b4e6d8(param_1,local_40[0],&DAT_100ffaa10 + uVar1 * 9,0);
      pcVar2 = DAT_101042a10;
      if ((int)param_1 != 0) {
        (&DAT_100ffaa08)[uVar1 * 0x12] = 1;
        if (pcVar2 != (code *)0x0) {
          (*pcVar2)(&DAT_100ffaa10 + uVar1 * 9);
        }
      }
    }
    else {
      LOAcquire();
      DAT_101042a21 = 1;
      LORelease();
      DAT_101042a08 = uVar4;
      if ((bVar3 & 1) == 0) {
        FUN_100b5e930("ERROR",
                      "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/SentryCrashBinaryImageCache.c"
                      ,0x4b,
                      "Binary image cache reached capacity of %d images. New images will not be tracked."
                     );
      }
    }
  }
  return;
}



/* Address: 0x100b54b80 | FUN_100b54b80 */

void FUN_100b54b80(long param_1)

{
  uint uVar1;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar2;
  ulong uVar3;
  
  UNRECOVERED_JUMPTABLE = DAT_101042a18;
  if (DAT_101042a08 != 0) {
    uVar1 = DAT_101042a08;
    if (0xfff < DAT_101042a08) {
      uVar1 = 0x1000;
    }
    uVar3 = (ulong)uVar1;
    plVar2 = &DAT_100ffaa10;
    do {
      if (((int)plVar2[-1] == 1) && (*plVar2 == param_1)) {
        *(int *)(plVar2 + -1) = 3;
        if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x000100b54be8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(plVar2);
        return;
      }
      plVar2 = plVar2 + 9;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}



/* Address: 0x100b54bec | FUN_100b54bec */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b54bec(void)

{
  DAT_1010e3088 = NSDate::date((ID)&_OBJC_CLASS___NSDate);
  return 0;
}



/* Address: 0x100b54c20 | SentrySysctlObjC::load */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SentrySysctlObjC::load(ID param_1,SEL param_2)

{
  DAT_1010e3080 = objc_stub::date((ID)&_OBJC_CLASS___NSDate);
  DAT_1010e3090 =
       objc_stub::FUN_100c02c20((ID)&objc::class_t::_TtC6Sentry32SentryDefaultCurrentDateProvider);
  return;
}



/* Address: 0x100b54c6c | SentrySysctlObjC::runtimeInitTimestamp */

/* WARNING: Function: _objc_retainAutoreleaseReturnValue replaced with injection: _objc_retain_fixup
    */
/* Function Stack Size: 0x10 bytes */

ID SentrySysctlObjC::runtimeInitTimestamp(ID param_1,SEL param_2)

{
  return DAT_1010e3080;
}



/* Address: 0x100b54c78 | SentrySysctlObjC::systemBootTimestamp */

/* Function Stack Size: 0x10 bytes */

ID SentrySysctlObjC::systemBootTimestamp(ID param_1,SEL param_2)

{
  long lVar1;
  ID IVar2;
  int iVar3;
  
  lVar1 = 1;
  iVar3 = 0x15;
  FUN_100b13028(1,0x15);
  IVar2 = objc_stub::dateWithTimeIntervalSince1970_
                    ((ID)&_OBJC_CLASS___NSDate,(double)iVar3 / 1000000.0 + (double)lVar1);
  return IVar2;
}



/* Address: 0x100b54cb8 | SentrySysctlObjC::processStartTimestamp */

/* Function Stack Size: 0x10 bytes */

ID SentrySysctlObjC::processStartTimestamp(ID param_1,SEL param_2)

{
  ID IVar1;
  int iVar2;
  
  iVar2 = (int)param_2;
  FUN_100b131f0(param_1,iVar2);
  IVar1 = objc_stub::dateWithTimeIntervalSince1970_
                    ((ID)&_OBJC_CLASS___NSDate,(double)iVar2 / 1000000.0 + (double)(long)param_1);
  return IVar1;
}



/* Address: 0x100b54cf0 | SentrySysctlObjC::runtimeInitSystemTimestamp */

/* Function Stack Size: 0x10 bytes */

unsigned_long_long SentrySysctlObjC::runtimeInitSystemTimestamp(ID param_1,SEL param_2)

{
  return DAT_1010e3090;
}



/* Address: 0x100b54cfc | SentrySysctlObjC::moduleInitializationTimestamp */

/* WARNING: Function: _objc_retainAutoreleaseReturnValue replaced with injection: _objc_retain_fixup
    */
/* Function Stack Size: 0x10 bytes */

ID SentrySysctlObjC::moduleInitializationTimestamp(ID param_1,SEL param_2)

{
  return DAT_1010e3088;
}



/* Address: 0x100b54d08 | SentryProfilerMutableState::init */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryProfilerMutableState::init(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  undefined8 uVar3;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::SentryProfilerMutableState;
  local_40.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_40,"init");
  if (IVar1 != 0) {
    IVar2 = objc_stub::array((ID)&_OBJC_CLASS___NSMutableArray);
    uVar3 = *(undefined8 *)(IVar1 + 8);
    *(ID *)(IVar1 + 8) = IVar2;
    IVar2 = objc_stub::array((ID)&_OBJC_CLASS___NSMutableArray,uVar3);
    uVar3 = *(undefined8 *)(IVar1 + 0x10);
    *(ID *)(IVar1 + 0x10) = IVar2;
    IVar2 = objc_stub::array((ID)&_OBJC_CLASS___NSMutableArray,uVar3);
    uVar3 = *(undefined8 *)(IVar1 + 0x18);
    *(ID *)(IVar1 + 0x18) = IVar2;
    IVar2 = objc_stub::dictionary((ID)&_OBJC_CLASS___NSMutableDictionary,uVar3);
    uVar3 = *(undefined8 *)(IVar1 + 0x20);
    *(ID *)(IVar1 + 0x20) = IVar2;
    IVar2 = objc_stub::dictionary((ID)&_OBJC_CLASS___NSMutableDictionary,uVar3);
    uVar3 = *(undefined8 *)(IVar1 + 0x28);
    *(ID *)(IVar1 + 0x28) = IVar2;
    IVar2 = objc_stub::dictionary((ID)&_OBJC_CLASS___NSMutableDictionary,uVar3);
    *(ID *)(IVar1 + 0x30) = IVar2;
  }
  return IVar1;
}



/* Address: 0x100b54e50 | SentryProfilerMutableState::samples */

/* Function Stack Size: 0x10 bytes */

ID SentryProfilerMutableState::samples(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 8);
}



/* Address: 0x100b54e58 | SentryProfilerMutableState::stacks */

/* Function Stack Size: 0x10 bytes */

ID SentryProfilerMutableState::stacks(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x10);
}



/* Address: 0x100b54e60 | SentryProfilerMutableState::frames */

/* Function Stack Size: 0x10 bytes */

ID SentryProfilerMutableState::frames(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x18);
}



/* Address: 0x100b54e68 | SentryProfilerMutableState::threadMetadata */

/* Function Stack Size: 0x10 bytes */

ID SentryProfilerMutableState::threadMetadata(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x20);
}



/* Address: 0x100b54e70 | SentryProfilerMutableState::frameIndexLookup */

/* Function Stack Size: 0x10 bytes */

ID SentryProfilerMutableState::frameIndexLookup(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x28);
}



/* Address: 0x100b54e78 | SentryProfilerMutableState::stackIndexLookup */

/* Function Stack Size: 0x10 bytes */

ID SentryProfilerMutableState::stackIndexLookup(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x30);
}



/* Address: 0x100b54e80 | SentryProfilerMutableState::.cxx_destruct */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryProfilerMutableState::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



/* Address: 0x100b54ee0 | SentryProfilerState::init */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryProfilerState::init(ID param_1,SEL param_2)

{
  ID IVar1;
  class_t *self;
  ID IVar2;
  undefined *local_68;
  undefined8 local_60;
  code *local_58;
  undefined *puStack_50;
  ID local_48;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::SentryProfilerState;
  local_40.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_40,"init");
  if (IVar1 != 0) {
    self = &objc::class_t::SentryProfilerMutableState;
    _objc_alloc();
    IVar2 = objc_stub::init((ID)self);
    *(ID *)(IVar1 + 8) = IVar2;
    *(undefined4 *)(IVar1 + 0x50) = 0;
    IVar2 = objc_stub::dispatchQueueWrapper
                      ((ID)&objc::class_t::SentryDependencyContainerSwiftHelper);
    local_68 = PTR___NSConcreteStackBlock_100ea82a0;
    local_60 = 0xc2000000;
    local_58 = FUN_100b55000;
    puStack_50 = &DAT_100f35858;
    local_48 = IVar1;
    FUN_100b4f410(IVar2,&local_68);
  }
  return IVar1;
}



/* Address: 0x100b55000 | FUN_100b55000 */

void FUN_100b55000(long param_1)

{
  objc_stub::cacheMainThreadID(*(ID *)(param_1 + 0x20));
  return;
}



/* Address: 0x100b55008 | FUN_100b55008 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_100b55008(undefined8 param_1,long param_2)

{
  return *(undefined8 *)(param_2 + 0x20);
}



/* Address: 0x100b55010 | FUN_100b55010 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b55010(void)

{
  return 0;
}



/* Address: 0x100b55018 | SentryProfilerState::mutate: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryProfilerState::mutate_(ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  __ZNSt3__15mutex4lockEv(param_1 + 0x10,param_2,param_3,param_4);
  (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(param_1 + 8));
  __ZNSt3__15mutex6unlockEv(param_1 + 0x10);
  return;
}



/* Address: 0x100b55090 | SentryProfilerState::clear */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

int __thiscall SentryProfilerState::clear(SentryProfilerState *this)

{
  int iVar1;
  long in_x0;
  class_t *self;
  ID IVar2;
  undefined8 uVar3;
  
  __ZNSt3__15mutex4lockEv(in_x0 + 0x10);
  self = &objc::class_t::SentryProfilerMutableState;
  _objc_alloc();
  IVar2 = objc_stub::init((ID)self);
  uVar3 = *(undefined8 *)(in_x0 + 8);
  *(ID *)(in_x0 + 8) = IVar2;
  iVar1 = (int)in_x0 + 0x10;
  __ZNSt3__15mutex6unlockEv(uVar3);
  return iVar1;
}



/* Address: 0x100b550ec | SentryProfilerState::cacheMainThreadID */

/* Function Stack Size: 0x10 bytes */

void SentryProfilerState::cacheMainThreadID(ID param_1,SEL param_2)

{
  mach_port_t mVar1;
  pthread_t p_Var2;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x10);
  p_Var2 = _pthread_self();
  mVar1 = _pthread_mach_thread_np(p_Var2);
  if (mVar1 - 1 < 0xfffffffe) {
    *(mach_port_t *)(param_1 + 0x50) = mVar1;
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 0x10);
  return;
}



/* Address: 0x100b55140 | SentryProfilerState::appendBacktrace: */

/* Function Stack Size: 0x18 bytes */

void SentryProfilerState::appendBacktrace_(ID param_1,SEL param_2,const_void__ param_3)

{
  undefined *local_40;
  undefined8 local_38;
  code *local_30;
  undefined *puStack_28;
  ID local_20;
  const_void__ pvStack_18;
  
  local_40 = PTR___NSConcreteStackBlock_100ea82a0;
  local_38 = 0xc2000000;
  local_30 = FUN_100b55194;
  puStack_28 = &DAT_100f35888;
  local_20 = param_1;
  pvStack_18 = param_3;
  objc_stub::FUN_100c07040(param_1,&local_40);
  return;
}



/* Address: 0x100b55194 | FUN_100b55194 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100b55194(long param_1,ID param_2)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  ID self;
  ulong *puVar8;
  ulong *puVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  char acStack_7b [19];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  iVar2 = _snprintf((char *)0x0,0,"%llu");
  pcVar3 = _malloc((long)(iVar2 + 1));
  _snprintf(pcVar3,(long)(iVar2 + 1),"%llu");
  IVar4 = NSString::stringWithCString_encoding_((ID)&_OBJC_CLASS___NSString,pcVar3,1);
  _free(pcVar3);
  IVar5 = objc_stub::threadMetadata(param_2);
  IVar5 = objc_stub::objectForKeyedSubscript_(IVar5,IVar4);
  if (IVar5 == 0) {
    IVar5 = NSMutableDictionary::dictionary((ID)&_OBJC_CLASS___NSMutableDictionary);
    IVar6 = objc_stub::threadMetadata(param_2);
    objc_stub::setObject_forKeyedSubscript_(IVar6,IVar5,IVar4);
  }
  IVar4 = NSMutableDictionary::objectForKeyedSubscript_(IVar5,&cf_name);
  if (IVar4 != 0) goto LAB_100b55344;
  puVar9 = *(ulong **)(param_1 + 0x28);
  puVar8 = puVar9 + 1;
  if (*(char *)((long)puVar9 + 0x1f) < '\0') {
    if (puVar9[2] != 0) {
      puVar8 = (ulong *)*puVar8;
      goto LAB_100b55310;
    }
  }
  else if (*(char *)((long)puVar9 + 0x1f) != '\0') {
LAB_100b55310:
    IVar4 = NSString::stringWithUTF8String_((ID)&_OBJC_CLASS___NSString,puVar8);
    NSMutableDictionary::setObject_forKeyedSubscript_(IVar5,IVar4,&cf_name);
    goto LAB_100b55344;
  }
  uVar1 = *(uint *)(*(long *)(param_1 + 0x20) + 0x50);
  if ((uVar1 != 0) && (*puVar9 == (ulong)uVar1)) {
    NSMutableDictionary::setObject_forKeyedSubscript_(IVar5,&cf_main,&cf_name);
  }
LAB_100b55344:
  if ((*(int *)(*(long *)(param_1 + 0x28) + 0x20) != -1) &&
     (IVar4 = NSMutableDictionary::objectForKeyedSubscript_(IVar5,&cf_priority), IVar4 == 0)) {
    IVar4 = NSNumber::numberWithInt_
                      ((ID)&_OBJC_CLASS___NSNumber,
                       (ulong)*(uint *)(*(long *)(param_1 + 0x28) + 0x20));
    NSMutableDictionary::setObject_forKeyedSubscript_(IVar5,IVar4,&cf_priority);
  }
  IVar5 = NSMutableArray::array((ID)&_OBJC_CLASS___NSMutableArray);
  lVar10 = *(long *)(param_1 + 0x28);
  IVar4 = IVar5;
  if (*(long *)(lVar10 + 0x38) != *(long *)(lVar10 + 0x30)) {
    uVar12 = 0;
    do {
      _snprintf(acStack_7b,0x13,"0x%016llx");
      IVar4 = NSString::stringWithCString_encoding_((ID)&_OBJC_CLASS___NSString,acStack_7b,1);
      IVar6 = objc_stub::frameIndexLookup(param_2);
      IVar6 = objc_stub::objectForKeyedSubscript_(IVar6,IVar4);
      if (IVar6 == 0) {
        IVar6 = NSMutableDictionary::dictionary((ID)&_OBJC_CLASS___NSMutableDictionary);
        NSMutableDictionary::setObject_forKeyedSubscript_(IVar6,IVar4,&cf_instruction_addr);
        IVar7 = objc_stub::frames(param_2);
        IVar7 = objc_stub::count(IVar7);
        IVar7 = NSNumber::numberWithUnsignedInteger_((ID)&_OBJC_CLASS___NSNumber,IVar7);
        NSMutableArray::addObject_(IVar5,IVar7);
        self = objc_stub::frameIndexLookup(param_2);
        objc_stub::setObject_forKeyedSubscript_(self,IVar7,IVar4);
        IVar4 = objc_stub::frames(param_2);
        objc_stub::addObject_(IVar4,IVar6);
      }
      else {
        NSMutableArray::addObject_(IVar5,IVar6);
      }
      IVar4 = 0;
      uVar12 = uVar12 + 1;
      lVar10 = *(long *)(param_1 + 0x28);
    } while (uVar12 < (ulong)(*(long *)(lVar10 + 0x38) - *(long *)(lVar10 + 0x30) >> 3));
  }
  uVar11 = *(undefined8 *)(lVar10 + 0x28);
  FUN_100b4f2d8();
  objc_stub::timeIntervalSince1970(IVar4);
  FUN_100b373fc(IVar5,uVar11,**(undefined8 **)(param_1 + 0x28),param_2);
  IVar4 = objc_stub::samples(param_2);
  objc_stub::addObject_(IVar4,IVar5);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}



/* Address: 0x100b557a0 | SentryProfilerState::copyProfilingData */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryProfilerState::copyProfilingData(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID self;
  undefined *local_d0;
  undefined8 local_c8;
  code *local_c0;
  undefined *puStack_b8;
  ID local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *pcStack_a0;
  cfstringStruct *local_98;
  cfstringStruct *pcStack_90;
  ID local_88;
  ID IStack_80;
  ID local_78;
  ID IStack_70;
  cfstringStruct *local_68;
  ID local_60;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_100ea82f0;
  __ZNSt3__15mutex4lockEv(param_1 + 0x10);
  IVar1 = objc_stub::samples(*(ID *)(param_1 + 8));
  IVar1 = objc_stub::copy(IVar1);
  IVar2 = objc_stub::FUN_100c0f1e0(*(ID *)(param_1 + 8));
  IVar2 = objc_stub::copy(IVar2);
  IVar3 = objc_stub::frames(*(ID *)(param_1 + 8));
  IVar3 = objc_stub::copy(IVar3);
  IVar4 = objc_stub::dictionary((ID)&_OBJC_CLASS___NSMutableDictionary);
  self = objc_stub::threadMetadata(*(ID *)(param_1 + 8));
  local_d0 = PTR___NSConcreteStackBlock_100ea82a0;
  local_c8 = 0xc2000000;
  local_c0 = FUN_100b55a54;
  puStack_b8 = &DAT_100f358b8;
  local_b0 = IVar4;
  objc_stub::FUN_100c01ca0(self,&local_d0);
  local_68 = &cf_profile;
  local_a8 = &cf_samples;
  pcStack_a0 = &cf_stacks;
  local_98 = &cf_frames;
  pcStack_90 = &cf_thread_metadata;
  local_88 = IVar1;
  IStack_80 = IVar2;
  local_78 = IVar3;
  IStack_70 = IVar4;
  local_60 = objc_stub::FUN_100c012c0((ID)&_OBJC_CLASS___NSDictionary,&local_88,&local_a8,4);
  IVar1 = objc_stub::FUN_100c012c0((ID)&_OBJC_CLASS___NSDictionary,&local_60,&local_68,1);
  __ZNSt3__15mutex6unlockEv(param_1 + 0x10);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_58) {
    return IVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100b55a54 | FUN_100b55a54 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b55a54(long param_1,undefined8 param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = objc_stub::copy(param_3);
  objc_stub::setObject_forKeyedSubscript_(*(ID *)(param_1 + 0x20),IVar1,param_2);
  return 0;
}



/* Address: 0x100b55ad4 | SentryProfilerState::.cxx_destruct */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryProfilerState::_cxx_destruct(ID param_1,SEL param_2)

{
  __ZNSt3__15mutexD1Ev(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



/* Address: 0x100b55b00 | SentryProfilerState::.cxx_construct */

/* Function Stack Size: 0x10 bytes */

ID SentryProfilerState::_cxx_construct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 0x10) = 0x32aaaba7;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  return param_1;
}



/* Address: 0x100b55b24 | SentrySwizzleInfo::getOriginalImplementation */

/* Function Stack Size: 0x10 bytes */

undefined4 * SentrySwizzleInfo::getOriginalImplementation(ID param_1,SEL param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x10);
  if (puVar1 != (undefined4 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100b55b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(puVar1 + 4))();
    return puVar1;
  }
  FUN_100b3a1f0();
  if ((int)puVar1 != 0) {
    FUN_100b3a2b8("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentrySwizzle.m",0x19
                  ,&cf__impProviderBlockcan_tbemissing);
  }
  return (undefined4 *)0x0;
}



/* Address: 0x100b55b68 | SentrySwizzleInfo::selector */

/* Function Stack Size: 0x10 bytes */

SEL SentrySwizzleInfo::selector(ID param_1,SEL param_2)

{
  return *(SEL *)(param_1 + 8);
}



/* Address: 0x100b55b70 | SentrySwizzleInfo::setSelector: */

/* Function Stack Size: 0x18 bytes */

void SentrySwizzleInfo::setSelector_(ID param_1,SEL param_2,SEL param_3)

{
  *(SEL *)(param_1 + 8) = param_3;
  return;
}



/* Address: 0x100b55b78 | SentrySwizzleInfo::impProviderBlock */

/* Function Stack Size: 0x10 bytes */

ID SentrySwizzleInfo::impProviderBlock(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x10);
}



/* Address: 0x100b55b80 | SentrySwizzleInfo::setImpProviderBlock: */

/* WARNING: Function: _objc_setProperty_nonatomic_copy replaced with injection:
   _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void SentrySwizzleInfo::setImpProviderBlock_(ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  *(ID *)(param_1 + 0x10) = param_3;
  return;
}



/* Address: 0x100b55b88 | SentrySwizzleInfo::.cxx_destruct */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void SentrySwizzleInfo::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}


