/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100b3f170 | FUN_100b3f170 */

void FUN_100b3f170(void)

{
  long lVar1;
  undefined8 in_xzr;
  
  lVar1 = DAT_1010e2eb8;
  LOAcquire();
  DAT_1010e2eb8 = in_xzr;
  LORelease();
  if (lVar1 != 0) {
    DAT_1010e2ea8 = lVar1;
  }
  return;
}



/* Address: 0x100b3f190 | FUN_100b3f190 */

void FUN_100b3f190(void)

{
  long lVar1;
  undefined8 in_xzr;
  
  lVar1 = DAT_1010e2ea8;
  LOAcquire();
  DAT_1010e2ea8 = in_xzr;
  LORelease();
  if (lVar1 != 0) {
    if (DAT_1010e2eb8 != 0) {
      FUN_100b3f0f0();
      return;
    }
    DAT_1010e2eb8 = lVar1;
  }
  return;
}



/* Address: 0x100b3f1c0 | FUN_100b3f1c0 */

undefined8 FUN_100b3f1c0(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  ulong uVar3;
  
  if ((((DAT_1010e2ea8 != (long *)0x0) && ((long *)*DAT_1010e2ea8 != (long *)0x0)) &&
      (puVar2 = (undefined8 *)DAT_1010e2ea8[2], puVar2 != (undefined8 *)0x0)) &&
     (uVar3 = (ulong)*(uint *)(DAT_1010e2ea8 + 3), plVar1 = (long *)*DAT_1010e2ea8,
     0 < (int)*(uint *)(DAT_1010e2ea8 + 3))) {
    do {
      if (*plVar1 == param_1) {
        return *puVar2;
      }
      puVar2 = puVar2 + 1;
      uVar3 = uVar3 - 1;
      plVar1 = plVar1 + 1;
    } while (uVar3 != 0);
  }
  return 0;
}



/* Address: 0x100b3f214 | FUN_100b3f214 */

undefined8 FUN_100b3f214(void)

{
  return 0;
}



/* Address: 0x100b3f21c | FUN_100b3f21c */

void FUN_100b3f21c(void)

{
  byte bVar1;
  undefined8 uVar2;
  undefined4 in_wzr;
  undefined4 in_register_000040fc;
  
  LOAcquire();
  LORelease();
  bVar1 = DAT_1010e2ea0 & 1;
  DAT_1010e2ea0 = (char)in_wzr;
  if (bVar1 != 0) {
    DAT_1010e2eb1 = 1;
    _pthread_join(DAT_1010e2ec0,(void **)0x0);
    LOAcquire();
    LORelease();
    uVar2 = CONCAT44(in_register_000040fc,in_wzr);
    FUN_100b3f0f0(DAT_1010e2eb8);
    DAT_1010e2eb8 = uVar2;
    LOAcquire();
    LORelease();
    uVar2 = CONCAT44(in_register_000040fc,in_wzr);
    FUN_100b3f0f0(DAT_1010e2ea8);
    DAT_1010e2ea8 = uVar2;
    DAT_1010e2eb0 = 0;
  }
  return;
}



/* Address: 0x100b3f288 | SentryRequest::init */

/* Function Stack Size: 0x10 bytes */

ID SentryRequest::init(ID param_1,SEL param_2)

{
  ID IVar1;
  objc_super local_20;
  
  local_20.super_class = &objc::class_t::SentryRequest;
  local_20.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_20,"init");
  return IVar1;
}



/* Address: 0x100b3f2bc | SentryRequest::serialize */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryRequest::serialize(ID param_1,SEL param_2)

{
  undefined *self;
  ID self_00;
  ID IVar1;
  
  self = &_OBJC_CLASS___NSMutableDictionary;
  _objc_alloc();
  self_00 = objc_stub::init((ID)self);
  _objc_sync_enter();
  IVar1 = objc_stub::FUN_100bfe760(param_1);
  if (IVar1 != 0) {
    IVar1 = objc_stub::FUN_100bfe760(param_1);
    IVar1 = objc_stub::intValue(IVar1);
    if ((int)IVar1 != 0) {
      IVar1 = objc_stub::FUN_100bfe760(param_1);
      objc_stub::setValue_forKey_(self_00,IVar1,&cf_body_size);
    }
  }
  IVar1 = objc_stub::FUN_100bfffe0(param_1);
  objc_stub::setValue_forKey_(self_00,IVar1,&cf_cookies);
  IVar1 = objc_stub::FUN_100c02a40(param_1);
  objc_stub::setValue_forKey_(self_00,IVar1,&cf_fragment);
  IVar1 = objc_stub::FUN_100c03400(param_1);
  if (IVar1 != 0) {
    IVar1 = objc_stub::FUN_100c03400(param_1);
    FUN_100bcfb78(IVar1);
    objc_stub::setValue_forKey_(self_00,IVar1,&cf_headers);
  }
  IVar1 = objc_stub::FUN_100c06d00(param_1);
  objc_stub::setValue_forKey_(self_00,IVar1,&cf_method);
  IVar1 = objc_stub::FUN_100c08580(param_1);
  objc_stub::setValue_forKey_(self_00,IVar1,&cf_query_string);
  IVar1 = objc_stub::FUN_100c10fe0(param_1);
  objc_stub::setValue_forKey_(self_00,IVar1,&cf_url);
  _objc_sync_exit(param_1);
  return self_00;
}



/* Address: 0x100b3f500 | SentryRequest::bodySize */

/* Function Stack Size: 0x10 bytes */

ID SentryRequest::bodySize(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 8);
}



/* Address: 0x100b3f508 | SentryRequest::setBodySize: */

/* WARNING: Function: _objc_setProperty_nonatomic_copy replaced with injection:
   _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryRequest::setBodySize_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 8) = param_3;
  return;
}



/* Address: 0x100b3f510 | SentryRequest::cookies */

/* Function Stack Size: 0x10 bytes */

ID SentryRequest::cookies(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x10);
}



/* Address: 0x100b3f518 | SentryRequest::setCookies: */

/* WARNING: Function: _objc_setProperty_nonatomic_copy replaced with injection:
   _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryRequest::setCookies_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x10) = param_3;
  return;
}



/* Address: 0x100b3f520 | SentryRequest::headers */

/* Function Stack Size: 0x10 bytes */

ID SentryRequest::headers(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x18);
}



/* Address: 0x100b3f528 | SentryRequest::setHeaders: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryRequest::setHeaders_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x18) = param_3;
  return;
}



/* Address: 0x100b3f534 | SentryRequest::fragment */

/* Function Stack Size: 0x10 bytes */

ID SentryRequest::fragment(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x20);
}



/* Address: 0x100b3f53c | SentryRequest::setFragment: */

/* WARNING: Function: _objc_setProperty_nonatomic_copy replaced with injection:
   _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryRequest::setFragment_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x20) = param_3;
  return;
}



/* Address: 0x100b3f544 | SentryRequest::method */

/* Function Stack Size: 0x10 bytes */

ID SentryRequest::method(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x28);
}



/* Address: 0x100b3f54c | SentryRequest::setMethod: */

/* WARNING: Function: _objc_setProperty_nonatomic_copy replaced with injection:
   _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryRequest::setMethod_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x28) = param_3;
  return;
}



/* Address: 0x100b3f554 | SentryRequest::queryString */

/* Function Stack Size: 0x10 bytes */

ID SentryRequest::queryString(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x30);
}



/* Address: 0x100b3f55c | SentryRequest::setQueryString: */

/* WARNING: Function: _objc_setProperty_nonatomic_copy replaced with injection:
   _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryRequest::setQueryString_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x30) = param_3;
  return;
}



/* Address: 0x100b3f564 | SentryRequest::url */

/* Function Stack Size: 0x10 bytes */

ID SentryRequest::url(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x38);
}



/* Address: 0x100b3f56c | SentryRequest::setUrl: */

/* WARNING: Function: _objc_setProperty_nonatomic_copy replaced with injection:
   _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryRequest::setUrl_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x38) = param_3;
  return;
}



/* Address: 0x100b3f574 | SentryRequest::.cxx_destruct */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryRequest::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



/* Address: 0x100b3f5e0 | SentryMsgPackSerializer::serializeDictionaryToMessagePack:intoFile: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

bool SentryMsgPackSerializer::serializeDictionaryToMessagePack_intoFile_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  uint uVar1;
  undefined *self;
  ID self_00;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  long lVar5;
  ulong uVar6;
  bool bVar7;
  ID IVar8;
  long lVar9;
  undefined1 local_549;
  uint local_548;
  undefined1 local_542;
  undefined1 local_541;
  undefined8 local_540;
  long lStack_538;
  long *local_530;
  undefined8 uStack_528;
  undefined8 local_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  byte local_4f1;
  undefined1 auStack_4f0 [1024];
  undefined1 auStack_f0 [128];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  self = &_OBJC_CLASS___NSOutputStream;
  _objc_alloc();
  self_00 = objc_stub::FUN_100c050e0((ID)self,param_4,0);
  objc_stub::FUN_100c076a0(self_00);
  IVar2 = objc_stub::count(param_3);
  local_4f1 = (byte)IVar2 | 0x80;
  objc_stub::FUN_100c115a0(self_00,&local_4f1,1);
  lStack_538 = 0;
  local_540 = 0;
  uStack_528 = 0;
  local_530 = (long *)0x0;
  uStack_518 = 0;
  local_520 = 0;
  uStack_508 = 0;
  uStack_510 = 0;
  IVar2 = objc_stub::countByEnumeratingWithState_objects_count_(param_3,&local_540,auStack_f0,0x10);
  if (IVar2 != 0) {
    uVar6 = 0;
    lVar9 = *local_530;
    lVar5 = lVar9;
    do {
      if (lVar5 != lVar9) {
        _objc_enumerationMutation(param_3);
      }
      IVar8 = *(ID *)(lStack_538 + uVar6 * 8);
      IVar3 = objc_stub::objectForKeyedSubscript_(param_3,IVar8);
      IVar4 = objc_stub::dataUsingEncoding_(IVar8,4);
      local_541 = 0xd9;
      IVar8 = objc_stub::length(IVar4);
      local_542 = (undefined1)IVar8;
      objc_stub::FUN_100c115a0(self_00,&local_541,1);
      objc_stub::FUN_100c115a0(self_00,&local_542,1);
      IVar8 = IVar4;
      _objc_retainAutorelease();
      IVar8 = objc_stub::bytes(IVar8);
      IVar4 = objc_stub::length(IVar4);
      objc_stub::FUN_100c115a0(self_00,IVar8,IVar4);
      IVar8 = objc_stub::FUN_100c0f8c0(IVar3);
      if ((long)IVar8 < 1) {
        FUN_100b3a1c0();
        if ((int)IVar8 != 0) {
          FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryMsgPackSerializer.m"
                        ,0x22,&cf_DataforMessagePackdictionaryhasnocontent_Input___);
        }
LAB_100b3f890:
        bVar7 = 0;
        goto LAB_100b3f8cc;
      }
      local_548 = (uint)IVar8;
      local_549 = 0xc6;
      objc_stub::FUN_100c115a0(self_00,&local_549,1);
      uVar1 = (local_548 & 0xff00ff00) >> 8 | (local_548 & 0xff00ff) << 8;
      local_548 = uVar1 >> 0x10 | uVar1 << 0x10;
      objc_stub::FUN_100c115a0(self_00,&local_548,4);
      IVar8 = objc_stub::FUN_100bfe080(IVar3);
      objc_stub::FUN_100c076a0(IVar8);
      IVar3 = objc_stub::FUN_100c03220(IVar8);
      if ((int)IVar3 != 0) {
        do {
          IVar3 = objc_stub::FUN_100c08820(IVar8,auStack_4f0,0x400);
          if ((long)IVar3 < 1) {
            if ((long)IVar3 < 0) {
              FUN_100b3a1c0();
              if ((int)IVar3 != 0) {
                FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryMsgPackSerializer.m"
                              ,0x3a,&cf_Errorreadingbytesfrominputstream_Input_____li);
              }
              objc_stub::close(IVar8);
              objc_stub::close(self_00);
              goto LAB_100b3f890;
            }
          }
          else {
            objc_stub::FUN_100c115a0(self_00,auStack_4f0,IVar3);
          }
          IVar3 = objc_stub::FUN_100c03220(IVar8);
        } while ((IVar3 & 1) != 0);
      }
      objc_stub::close(IVar8);
      uVar6 = uVar6 + 1;
      if (IVar2 <= uVar6) {
        IVar2 = objc_stub::countByEnumeratingWithState_objects_count_
                          (param_3,&local_540,auStack_f0,0x10);
        if (IVar2 == 0) break;
        uVar6 = 0;
      }
      lVar5 = *local_530;
    } while( true );
  }
  objc_stub::close(self_00);
  bVar7 = 1;
LAB_100b3f8cc:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_70) {
    return bVar7;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}



/* Address: 0x100b3f94c | FUN_100b3f94c */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID FUN_100b3f94c(undefined8 param_1)

{
  undefined *self;
  ID IVar1;
  
  self = &_OBJC_CLASS___NSInputStream;
  _objc_alloc();
  IVar1 = objc_stub::initWithURL_((ID)self,param_1);
  return IVar1;
}



/* Address: 0x100b3f97c | FUN_100b3f97c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100b3f97c(ID param_1)

{
  int iVar1;
  ID IVar2;
  ID IVar3;
  undefined8 local_48;
  
  IVar2 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
  IVar3 = objc_stub::path(param_1);
  local_48 = 0;
  IVar2 = NSFileManager::attributesOfItemAtPath_error_(IVar2,IVar3,&local_48);
  iVar1 = 0;
  if (IVar2 == 0) {
    FUN_100b3a1c0();
    if (iVar1 != 0) {
      FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryMsgPackSerializer.m"
                    ,0x5e,&cf_Couldnotreadfileattributes_File______);
    }
    IVar2 = 0xffffffffffffffff;
  }
  else {
    IVar2 = NSFileManager::objectForKeyedSubscript_(IVar2,*(undefined8 *)PTR__NSFileSize_100ea7bc8);
    IVar2 = NSFileManager::unsignedIntegerValue(IVar2);
  }
  return IVar2;
}



/* Address: 0x100b3fa8c | FUN_100b3fa8c */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID FUN_100b3fa8c(undefined8 param_1)

{
  undefined *self;
  ID IVar1;
  
  self = &_OBJC_CLASS___NSInputStream;
  _objc_alloc();
  IVar1 = objc_stub::initWithData_((ID)self,param_1);
  return IVar1;
}



/* Address: 0x100b3fabc | objc_stub::length */

ID __objc_msgSend_stub objc_stub::length(ID self,...)

{
  ID IVar1;
  
  IVar1 = length(self);
  return IVar1;
}



/* Address: 0x100b3fac0 | PrivateSentrySDKOnly::storeEnvelope: */

/* Function Stack Size: 0x18 bytes */

void PrivateSentrySDKOnly::storeEnvelope_(ID param_1,SEL param_2,ID param_3)

{
  objc_stub::storeEnvelope_((ID)&objc::class_t::SentrySDKInternal);
  return;
}



/* Address: 0x100b3facc | PrivateSentrySDKOnly::captureEnvelope: */

/* Function Stack Size: 0x18 bytes */

void PrivateSentrySDKOnly::captureEnvelope_(ID param_1,SEL param_2,ID param_3)

{
  objc_stub::captureEnvelope_((ID)&objc::class_t::SentrySDKInternal);
  return;
}



/* Address: 0x100b3fad8 | PrivateSentrySDKOnly::envelopeWithData: */

/* Function Stack Size: 0x18 bytes */

ID PrivateSentrySDKOnly::envelopeWithData_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100c01d80((ID)&objc::class_t::_TtC6Sentry24SentrySerializationSwift);
  return IVar1;
}



/* Address: 0x100b3fae4 | PrivateSentrySDKOnly::appStartMeasurement */

/* Function Stack Size: 0x10 bytes */

ID PrivateSentrySDKOnly::appStartMeasurement(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100c02c60((ID)&objc::class_t::SentrySDKInternal);
  return IVar1;
}



/* Address: 0x100b3faf0 | PrivateSentrySDKOnly::appStartMeasurementWithSpans */

/* Function Stack Size: 0x10 bytes */

ID PrivateSentrySDKOnly::appStartMeasurementWithSpans(ID param_1,SEL param_2)

{
  return 0;
}



/* Address: 0x100b3faf8 | PrivateSentrySDKOnly::installationID */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID PrivateSentrySDKOnly::installationID(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = objc_stub::options(param_1);
  IVar1 = objc_stub::FUN_100bfeb80(IVar1);
  IVar1 = objc_stub::FUN_100c03540((ID)&objc::class_t::_TtC6Sentry18SentryInstallation,IVar1);
  return IVar1;
}



/* Address: 0x100b3fb6c | PrivateSentrySDKOnly::options */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID PrivateSentrySDKOnly::options(ID param_1,SEL param_2)

{
  ID IVar1;
  class_t *self;
  
  IVar1 = objc_stub::currentHub((ID)&objc::class_t::SentrySDKInternal);
  IVar1 = objc_stub::FUN_100bff480(IVar1);
  IVar1 = objc_stub::options(IVar1);
  if (IVar1 == 0) {
    self = &objc::class_t::SentryOptions;
    _objc_alloc();
    IVar1 = objc_stub::init((ID)self);
  }
  return IVar1;
}



/* Address: 0x100b3fc04 | PrivateSentrySDKOnly::onAppStartMeasurementAvailable */

/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID PrivateSentrySDKOnly::onAppStartMeasurementAvailable(ID param_1,SEL param_2)

{
  return DAT_1010e2ec8;
}



/* Address: 0x100b3fc20 | PrivateSentrySDKOnly::setOnAppStartMeasurementAvailable: */

/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void PrivateSentrySDKOnly::setOnAppStartMeasurementAvailable_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  DAT_1010e2ec8 = param_3;
  return;
}



/* Address: 0x100b3fc48 | PrivateSentrySDKOnly::appStartMeasurementHybridSDKMode */

/* Function Stack Size: 0x10 bytes */

bool PrivateSentrySDKOnly::appStartMeasurementHybridSDKMode(ID param_1,SEL param_2)

{
  return (bool)DAT_1010e2ed0;
}



/* Address: 0x100b3fc54 | PrivateSentrySDKOnly::setAppStartMeasurementHybridSDKMode: */

/* Function Stack Size: 0x14 bytes */

void PrivateSentrySDKOnly::setAppStartMeasurementHybridSDKMode_(ID param_1,SEL param_2,bool param_3)

{
  DAT_1010e2ed0 = (char)param_3;
  return;
}



/* Address: 0x100b3fc60 | PrivateSentrySDKOnly::setSdkName:andVersionString: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void PrivateSentrySDKOnly::setSdkName_andVersionString_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  objc_stub::FUN_100c0d8a0((ID)&objc::class_t::SentryMeta,param_3);
  objc_stub::FUN_100c0e8e0((ID)&objc::class_t::SentryMeta,param_4);
  return;
}



/* Address: 0x100b3fcb4 | PrivateSentrySDKOnly::setSdkName: */

/* Function Stack Size: 0x18 bytes */

void PrivateSentrySDKOnly::setSdkName_(ID param_1,SEL param_2,ID param_3)

{
  objc_stub::FUN_100c0d8a0((ID)&objc::class_t::SentryMeta);
  return;
}



/* Address: 0x100b3fcc0 | PrivateSentrySDKOnly::getSdkName */

/* Function Stack Size: 0x10 bytes */

ID PrivateSentrySDKOnly::getSdkName(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100c09cc0((ID)&objc::class_t::SentryMeta);
  return IVar1;
}



/* Address: 0x100b3fccc | PrivateSentrySDKOnly::getSdkVersionString */

/* Function Stack Size: 0x10 bytes */

ID PrivateSentrySDKOnly::getSdkVersionString(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100c11340((ID)&objc::class_t::SentryMeta);
  return IVar1;
}



/* Address: 0x100b3fcd8 | PrivateSentrySDKOnly::addSdkPackage:version: */

/* Function Stack Size: 0x20 bytes */

void PrivateSentrySDKOnly::addSdkPackage_version_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  objc_stub::FUN_100bfd820((ID)&objc::class_t::_TtC6Sentry19SentryExtraPackages);
  return;
}



/* Address: 0x100b3fce4 | PrivateSentrySDKOnly::getExtraContext */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID PrivateSentrySDKOnly::getExtraContext(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = objc_stub::sharedInstance((ID)&objc::class_t::_TtC6Sentry25SentryDependencyContainer);
  IVar1 = objc_stub::FUN_100c020e0(IVar1);
  IVar1 = objc_stub::FUN_100c02e20(IVar1);
  return IVar1;
}



/* Address: 0x100b3fd50 | PrivateSentrySDKOnly::setTrace:spanId: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void PrivateSentrySDKOnly::setTrace_spanId_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID self;
  undefined *local_60;
  undefined8 local_58;
  code *local_50;
  undefined *puStack_48;
  ID local_40;
  ID local_38;
  
  self = objc_stub::currentHub((ID)&objc::class_t::SentrySDKInternal);
  local_60 = PTR___NSConcreteStackBlock_100ea82a0;
  local_58 = 0xc2000000;
  local_50 = FUN_100b3fe28;
  puStack_48 = &DAT_100f34be8;
  local_40 = param_3;
  local_38 = param_4;
  objc_stub::FUN_100bffa40(self,&local_60);
  return;
}



/* Address: 0x100b3fe28 | FUN_100b3fe28 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b3fe28(long param_1,ID param_2)

{
  ID IVar1;
  class_t *self;
  
  self = &objc::class_t::_TtC6Sentry24SentryPropagationContext;
  _objc_alloc();
  IVar1 = objc_stub::initWithTraceId_spanId_
                    ((ID)self,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  objc_stub::setPropagationContext_(param_2,IVar1);
  return 0;
}



/* Address: 0x100b3fe8c | PrivateSentrySDKOnly::startProfilerForTrace: */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

unsigned_long_long PrivateSentrySDKOnly::startProfilerForTrace_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  objc_stub::FUN_100c0f620((ID)&objc::class_t::SentryTraceProfiler);
  IVar1 = objc_stub::sharedInstance((ID)&objc::class_t::_TtC6Sentry25SentryDependencyContainer);
  IVar1 = objc_stub::FUN_100c00ac0(IVar1);
  IVar1 = objc_stub::FUN_100c100e0(IVar1);
  return IVar1;
}



/* Address: 0x100b3fefc | PrivateSentrySDKOnly::collectProfileBetween:and:forTrace: */

/* Function Stack Size: 0x28 bytes */

ID PrivateSentrySDKOnly::collectProfileBetween_and_forTrace_
             (ID param_1,SEL param_2,unsigned_long_long param_3,unsigned_long_long param_4,
             ID param_5)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100bff620((ID)&objc::class_t::SentryProfileCollector);
  return IVar1;
}



/* Address: 0x100b3ff08 | PrivateSentrySDKOnly::discardProfilerForTrace: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void PrivateSentrySDKOnly::discardProfilerForTrace_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = objc_stub::currentHub((ID)&objc::class_t::SentrySDKInternal);
  FUN_100b42a1c(param_3,IVar1);
  return;
}



/* Address: 0x100b3ff60 | PrivateSentrySDKOnly::framesTrackingMeasurementHybridSDKMode */

/* Function Stack Size: 0x10 bytes */

bool PrivateSentrySDKOnly::framesTrackingMeasurementHybridSDKMode(ID param_1,SEL param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  FUN_100b3a1c0();
  if (iVar1 != 0) {
    FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/PrivateSentrySDKOnly.m"
                  ,0xd9,&
                        cf_PrivateSentrySDKOnly_framesTrackingMeasurementHybridSDKModeonlyworkswithUIKitenabled_Ensureyou_reusingtherightconfigurationofSentrythatlinksUIKit_
                 );
  }
  return 0;
}



/* Address: 0x100b3ff94 | PrivateSentrySDKOnly::setFramesTrackingMeasurementHybridSDKMode: */

/* Function Stack Size: 0x14 bytes */

void PrivateSentrySDKOnly::setFramesTrackingMeasurementHybridSDKMode_
               (ID param_1,SEL param_2,bool param_3)

{
  FUN_100b3a1c0(param_1,param_2,param_3);
  if ((int)param_1 != 0) {
    FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/PrivateSentrySDKOnly.m"
                  ,0xe5,&
                        cf_PrivateSentrySDKOnly_framesTrackingMeasurementHybridSDKModeonlyworkswithUIKitenabled_Ensureyou_reusingtherightconfigurationofSentrythatlinksUIKit_
                 );
    return;
  }
  return;
}



/* Address: 0x100b3ffc8 | PrivateSentrySDKOnly::isFramesTrackingRunning */

/* Function Stack Size: 0x10 bytes */

bool PrivateSentrySDKOnly::isFramesTrackingRunning(ID param_1,SEL param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  FUN_100b3a1c0();
  if (iVar1 != 0) {
    FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/PrivateSentrySDKOnly.m"
                  ,0xf0,&
                        cf_PrivateSentrySDKOnly_isFramesTrackingRunningonlyworkswithUIKitenabled_Ensureyou_reusingtherightconfigurationofSentrythatlinksUIKit_
                 );
  }
  return 0;
}



/* Address: 0x100b3fffc | PrivateSentrySDKOnly::currentScreenFrames */

/* Function Stack Size: 0x10 bytes */

ID PrivateSentrySDKOnly::currentScreenFrames(ID param_1,SEL param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  FUN_100b3a1c0();
  if (iVar1 != 0) {
    FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/PrivateSentrySDKOnly.m"
                  ,0xfc,&
                        cf_PrivateSentrySDKOnly_currentScreenFramesonlyworkswithUIKitenabled_Ensureyou_reusingtherightconfigurationofSentrythatlinksUIKit_
                 );
  }
  return 0;
}



/* Address: 0x100b40030 | PrivateSentrySDKOnly::captureScreenshots */

/* Function Stack Size: 0x10 bytes */

ID PrivateSentrySDKOnly::captureScreenshots(ID param_1,SEL param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  FUN_100b3a1c0();
  if (iVar1 != 0) {
    FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/PrivateSentrySDKOnly.m"
                  ,0x10f,&
                         cf_PrivateSentrySDKOnly_captureScreenshotsonlyworkswithUIKitenabled_Ensureyou_reusingtherightconfigurationofSentrythatlinksUIKit_
                 );
  }
  return 0;
}



/* Address: 0x100b40064 | PrivateSentrySDKOnly::captureViewHierarchy */

/* Function Stack Size: 0x10 bytes */

ID PrivateSentrySDKOnly::captureViewHierarchy(ID param_1,SEL param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  FUN_100b3a1c0();
  if (iVar1 != 0) {
    FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/PrivateSentrySDKOnly.m"
                  ,0x129,&
                         cf_PrivateSentrySDKOnly_captureViewHierarchyonlyworkswithUIKitenabled_Ensureyou_reusingtherightconfigurationofSentrythatlinksUIKit_
                 );
  }
  return 0;
}



/* Address: 0x100b40098 | PrivateSentrySDKOnly::userWithDictionary: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID PrivateSentrySDKOnly::userWithDictionary_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  class_t *self;
  
  self = &objc::class_t::SentryUser;
  _objc_alloc();
  IVar1 = objc_stub::initWithDictionary_((ID)self,param_3);
  return IVar1;
}



/* Address: 0x100b400e4 | PrivateSentrySDKOnly::breadcrumbWithDictionary: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID PrivateSentrySDKOnly::breadcrumbWithDictionary_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  class_t *self;
  
  self = &objc::class_t::SentryBreadcrumb;
  _objc_alloc();
  IVar1 = objc_stub::initWithDictionary_((ID)self,param_3);
  return IVar1;
}



/* Address: 0x100b40130 | PrivateSentrySDKOnly::optionsWithDictionary:didFailWithError: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID PrivateSentrySDKOnly::optionsWithDictionary_didFailWithError_
             (ID param_1,SEL param_2,ID param_3,ID *param_4)

{
  ID IVar1;
  class_t *self;
  
  self = &objc::class_t::SentryOptions;
  _objc_alloc();
  IVar1 = objc_stub::FUN_100c03fa0((ID)self,param_3,param_4);
  return IVar1;
}



/* Address: 0x100b4018c | PrivateSentrySDKOnly::setLogOutput: */

/* Function Stack Size: 0x18 bytes */

void PrivateSentrySDKOnly::setLogOutput_(ID param_1,SEL param_2,ID param_3,uint param_4)

{
  objc_stub::FUN_100c0cf60((ID)&objc::class_t::_TtC6Sentry12SentrySDKLog,param_3,(ulong)param_4);
  return;
}



/* Address: 0x100b40198 | PrivateSentrySDKOnly::ignoreNextSignal: */

/* Function Stack Size: 0x14 bytes */

void PrivateSentrySDKOnly::ignoreNextSignal_(ID param_1,SEL param_2,int param_3)

{
  FUN_100b2bf08(param_3);
  return;
}



/* Address: 0x100b401a0 | FUN_100b401a0 */

/* WARNING: Function: _objc_retainAutoreleaseReturnValue replaced with injection: _objc_retain_fixup
    */

undefined8 FUN_100b401a0(void)

{
  if (DAT_1010e2ee0 != -1) {
    FUN_100b40480();
  }
  return DAT_1010e2ed8;
}



/* Address: 0x100b401d0 | FUN_100b401d0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100b401d0(void)

{
  undefined *self;
  ID IVar1;
  ID IVar2;
  
  self = &_OBJC_CLASS___NSDateFormatter;
  _objc_alloc();
  IVar1 = objc_stub::init((ID)self);
  DAT_1010e2ed8 = IVar1;
  IVar2 = NSLocale::localeWithLocaleIdentifier_((ID)&_OBJC_CLASS___NSLocale,&cf_en_US_POSIX);
  objc_stub::setLocale_(IVar1,IVar2);
  IVar1 = NSTimeZone::timeZoneWithAbbreviation_((ID)&_OBJC_CLASS___NSTimeZone,&cf_UTC);
  objc_stub::setTimeZone_(DAT_1010e2ed8,IVar1);
  objc_stub::setDateFormat_(DAT_1010e2ed8,&cf_yyyy_MM_dd_T_HH_mm_ss_Z_);
  return;
}



/* Address: 0x100b4028c | FUN_100b4028c */

/* WARNING: Function: _objc_retainAutoreleaseReturnValue replaced with injection: _objc_retain_fixup
    */

undefined8 FUN_100b4028c(void)

{
  if (DAT_1010e2ef0 != -1) {
    FUN_100b40494();
  }
  return DAT_1010e2ee8;
}



/* Address: 0x100b402bc | FUN_100b402bc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100b402bc(void)

{
  undefined *self;
  ID IVar1;
  ID IVar2;
  
  self = &_OBJC_CLASS___NSDateFormatter;
  _objc_alloc();
  IVar1 = objc_stub::init((ID)self);
  DAT_1010e2ee8 = IVar1;
  IVar2 = NSLocale::localeWithLocaleIdentifier_((ID)&_OBJC_CLASS___NSLocale,&cf_en_US_POSIX);
  objc_stub::setLocale_(IVar1,IVar2);
  IVar1 = NSTimeZone::timeZoneWithAbbreviation_((ID)&_OBJC_CLASS___NSTimeZone,&cf_UTC);
  objc_stub::setTimeZone_(DAT_1010e2ee8,IVar1);
  objc_stub::setDateFormat_(DAT_1010e2ee8,&cf_yyyy_MM_dd_T_HH_mm_ss_SSS_Z_);
  return;
}


