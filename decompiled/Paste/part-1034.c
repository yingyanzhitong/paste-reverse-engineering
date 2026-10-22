/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100b2a928 | SentryHubInternal::setCrashWrapper: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryHubInternal::setCrashWrapper_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x30) = param_3;
  return;
}



/* Address: 0x100b2a934 | SentryHubInternal::setInstalledIntegrationNames: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryHubInternal::setInstalledIntegrationNames_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x38) = param_3;
  return;
}



/* Address: 0x100b2a940 | SentryHubInternal::errorsBeforeSession */

/* Function Stack Size: 0x10 bytes */

unsigned_long_long SentryHubInternal::errorsBeforeSession(ID param_1,SEL param_2)

{
  return *(unsigned_long_long *)(param_1 + 0x40);
}



/* Address: 0x100b2a948 | SentryHubInternal::setErrorsBeforeSession: */

/* Function Stack Size: 0x18 bytes */

void SentryHubInternal::setErrorsBeforeSession_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  *(unsigned_long_long *)(param_1 + 0x40) = param_3;
  return;
}



/* Address: 0x100b2a950 | SentryHubInternal::sessionListener */

/* WARNING: Function: _objc_loadWeakRetained replaced with injection: _objc_load_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryHubInternal::sessionListener(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x48);
}



/* Address: 0x100b2a968 | SentryHubInternal::setSessionListener: */

/* WARNING: Function: _objc_storeWeak replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryHubInternal::setSessionListener_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x48) = param_3;
  return;
}



/* Address: 0x100b2a974 | SentryHubInternal::session */

/* Function Stack Size: 0x10 bytes */

ID SentryHubInternal::session(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x50);
}



/* Address: 0x100b2a97c | SentryHubInternal::setSession: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryHubInternal::setSession_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x50) = param_3;
  return;
}



/* Address: 0x100b2a988 | SentryHubInternal::setInstalledIntegrations: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryHubInternal::setInstalledIntegrations_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x58) = param_3;
  return;
}



/* Address: 0x100b2a994 | SentryHubInternal::_swiftLogger */

/* Function Stack Size: 0x10 bytes */

ID SentryHubInternal::_swiftLogger(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x60);
}



/* Address: 0x100b2a99c | SentryHubInternal::.cxx_destruct */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryHubInternal::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  _objc_destroyWeak(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



/* Address: 0x100b2aa34 | SentryNoOpSpan::shared */

/* WARNING: Function: _objc_retainAutoreleaseReturnValue replaced with injection: _objc_retain_fixup
    */
/* Function Stack Size: 0x10 bytes */

ID SentryNoOpSpan::shared(ID param_1,SEL param_2)

{
  undefined *local_38;
  undefined8 local_30;
  code *local_28;
  undefined *puStack_20;
  ID local_18;
  
  local_38 = PTR___NSConcreteStackBlock_100ea82a0;
  local_30 = 0xc0000000;
  local_28 = FUN_100b2aaa8;
  puStack_20 = &DAT_100f34720;
  if (DAT_1010e1de0 != -1) {
    local_18 = param_1;
    _dispatch_once(&DAT_1010e1de0,&local_38);
  }
  return DAT_1010e1dd8;
}



/* Address: 0x100b2aaa8 | FUN_100b2aaa8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b2aaa8(long param_1)

{
  ID self;
  
  self = *(ID *)(param_1 + 0x20);
  _objc_alloc();
  DAT_1010e1dd8 = objc_stub::init(self);
  return 0;
}



/* Address: 0x100b2aad4 | SentryNoOpSpan::init */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryNoOpSpan::init(ID param_1,SEL param_2)

{
  ID self;
  ID IVar1;
  objc_super local_30;
  
  local_30.super_class = &objc::class_t::SentryNoOpSpan;
  local_30.receiver = param_1;
  self = _objc_msgSendSuper2(&local_30,"init");
  if (self != 0) {
    objc_stub::FUN_100c0d040(self,0);
    objc_stub::FUN_100c0cec0(self,&cf___);
    IVar1 = objc_stub::FUN_100c01800((ID)&objc::class_t::SentryId);
    objc_stub::FUN_100c0e480(self,IVar1);
    objc_stub::FUN_100c0d860(self,0);
    IVar1 = objc_stub::FUN_100c01800((ID)&objc::class_t::SentrySpanId);
    objc_stub::FUN_100c0dc80(self,IVar1);
  }
  return self;
}



/* Address: 0x100b2ab9c | SentryNoOpSpan::startChildWithOperation: */

/* Function Stack Size: 0x18 bytes */

ID SentryNoOpSpan::startChildWithOperation_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100c0eae0((ID)&objc::class_t::SentryNoOpSpan);
  return IVar1;
}



/* Address: 0x100b2aba8 | SentryNoOpSpan::startChildWithOperation:description: */

/* Function Stack Size: 0x20 bytes */

ID SentryNoOpSpan::startChildWithOperation_description_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100c0eae0((ID)&objc::class_t::SentryNoOpSpan);
  return IVar1;
}



/* Address: 0x100b2abb4 | SentryNoOpSpan::setDataValue:forKey: */

/* Function Stack Size: 0x20 bytes */

void SentryNoOpSpan::setDataValue_forKey_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  return;
}



/* Address: 0x100b2abb8 | SentryNoOpSpan::removeDataForKey: */

/* Function Stack Size: 0x18 bytes */

void SentryNoOpSpan::removeDataForKey_(ID param_1,SEL param_2,ID param_3)

{
  return;
}



/* Address: 0x100b2abbc | SentryNoOpSpan::data */

/* Function Stack Size: 0x10 bytes */

ID SentryNoOpSpan::data(ID param_1,SEL param_2)

{
  return 0;
}



/* Address: 0x100b2abc4 | SentryNoOpSpan::setTagValue:forKey: */

/* Function Stack Size: 0x20 bytes */

void SentryNoOpSpan::setTagValue_forKey_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  return;
}



/* Address: 0x100b2abc8 | SentryNoOpSpan::removeTagForKey: */

/* Function Stack Size: 0x18 bytes */

void SentryNoOpSpan::removeTagForKey_(ID param_1,SEL param_2,ID param_3)

{
  return;
}



/* Address: 0x100b2abcc | SentryNoOpSpan::setMeasurement:value: */

/* Function Stack Size: 0x20 bytes */

void SentryNoOpSpan::setMeasurement_value_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  return;
}



/* Address: 0x100b2abd0 | SentryNoOpSpan::setMeasurement:value:unit: */

/* Function Stack Size: 0x28 bytes */

void SentryNoOpSpan::setMeasurement_value_unit_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  return;
}



/* Address: 0x100b2abd4 | SentryNoOpSpan::tags */

/* WARNING: Function: _objc_retainAutoreleaseReturnValue replaced with injection: _objc_retain_fixup
    */
/* Function Stack Size: 0x10 bytes */

ID SentryNoOpSpan::tags(ID param_1,SEL param_2)

{
  return *(ID *)PTR____NSDictionary0___100ea9b08;
}



/* Address: 0x100b2abe4 | SentryNoOpSpan::isFinished */

/* Function Stack Size: 0x10 bytes */

bool SentryNoOpSpan::isFinished(ID param_1,SEL param_2)

{
  return 0;
}



/* Address: 0x100b2abec | SentryNoOpSpan::finish */

/* Function Stack Size: 0x10 bytes */

void SentryNoOpSpan::finish(ID param_1,SEL param_2)

{
  return;
}



/* Address: 0x100b2abf0 | SentryNoOpSpan::finishWithStatus: */

/* Function Stack Size: 0x18 bytes */

void SentryNoOpSpan::finishWithStatus_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  return;
}



/* Address: 0x100b2abf4 | SentryNoOpSpan::toTraceHeader */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryNoOpSpan::toTraceHeader(ID param_1,SEL param_2)

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



/* Address: 0x100b2ac84 | SentryNoOpSpan::serialize */

/* WARNING: Function: _objc_retainAutoreleaseReturnValue replaced with injection: _objc_retain_fixup
    */
/* Function Stack Size: 0x10 bytes */

ID SentryNoOpSpan::serialize(ID param_1,SEL param_2)

{
  return *(ID *)PTR____NSDictionary0___100ea9b08;
}



/* Address: 0x100b2ac94 | SentryNoOpSpan::context */

/* Function Stack Size: 0x10 bytes */

ID SentryNoOpSpan::context(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_context);
}



/* Address: 0x100b2aca4 | SentryNoOpSpan::.cxx_destruct */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryNoOpSpan::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_context) = 0;
  return;
}



/* Address: 0x100b2acb8 | FUN_100b2acb8 */

void FUN_100b2acb8(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  FUN_100b18a18(param_1,FUN_100b2ad08,FUN_100b2ad34);
  param_1[8] = param_3;
  *(undefined4 *)(param_1 + 9) = param_2;
  param_1[0xc] = *param_1;
  return;
}



/* Address: 0x100b2ad08 | FUN_100b2ad08 */

void FUN_100b2ad08(long param_1)

{
  FUN_100b18a08();
  *(undefined1 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  return;
}



/* Address: 0x100b2ad34 | FUN_100b2ad34 */

void FUN_100b2ad34(long *param_1)

{
  int iVar1;
  long lVar2;
  
  if ((int)param_1[9] <= (int)param_1[5]) {
    *(undefined1 *)((long)param_1 + 0x2c) = 1;
    return;
  }
  if ((int)param_1[5] == 0 && param_1[0xc] == 0) {
    lVar2 = param_1[8];
    FUN_100b26370();
    param_1[0xc] = lVar2;
  }
  else {
    if ((param_1[0xd] == 0) && ((*(byte *)(param_1 + 0xe) & 1) == 0)) {
      lVar2 = param_1[8];
      FUN_100b26378();
      param_1[0xd] = lVar2;
      if (lVar2 != 0) goto LAB_100b2adec;
    }
    lVar2 = param_1[10];
    if (lVar2 == 0) {
      if ((*(byte *)(param_1 + 0xe) & 1) != 0) {
        return;
      }
      lVar2 = param_1[8];
      FUN_100b26360();
      param_1[10] = lVar2;
      *(undefined1 *)(param_1 + 0xe) = 1;
    }
    iVar1 = (int)lVar2;
    FUN_100b5d620();
    if (iVar1 == 0) {
      return;
    }
    if (param_1[10] == 0) {
      return;
    }
    lVar2 = param_1[0xb];
    if (lVar2 == 0) {
      return;
    }
  }
LAB_100b2adec:
  FUN_100b26574();
  *param_1 = lVar2;
  *(int *)(param_1 + 5) = (int)param_1[5] + 1;
  return;
}



/* Address: 0x100b2ae18 | ___cxa_throw */

void ___cxa_throw(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  code *pcVar2;
  
  uVar1 = param_1;
  FUN_100b16c44();
  if ((uVar1 & 1) == 0) {
    FUN_100b2ae7c();
  }
  if (DAT_1010e1de8 == (code *)0x0) {
    pcVar2 = (code *)0xffffffffffffffff;
    _dlsym(0xffffffffffffffff,"__cxa_throw");
    DAT_1010e1de8 = pcVar2;
  }
  (*DAT_1010e1de8)(param_1,param_2,param_3);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100b2ae7c);
  (*pcVar2)();
}



/* Address: 0x100b2ae7c | FUN_100b2ae7c */

void FUN_100b2ae7c(undefined8 param_1,ulong param_2)

{
  FUN_100b2af8c();
  if (((param_2 & 1) == 0) && (DAT_1010e1df0 == '\x01')) {
    FUN_100b2b938(&DAT_1010e1df8,2);
  }
  return;
}



/* Address: 0x100b2aeb8 | FUN_100b2aeb8 */

void FUN_100b2aeb8(void)

{
  FUN_100b16948(FUN_100b2ae7c);
  return;
}



/* Address: 0x100b2aec4 | FUN_100b2aec4 */

undefined ** FUN_100b2aec4(void)

{
  return &PTR_FUN_100ffa6c8;
}



/* Address: 0x100b2aed0 | FUN_100b2aed0 */

void FUN_100b2aed0(uint param_1)

{
  byte bVar1;
  code *pcVar2;
  
  if (DAT_1010e2160 != param_1) {
    bVar1 = (byte)param_1;
    DAT_1010e2160 = bVar1;
    if (param_1 == 0) {
      __ZSt13set_terminatePFvvE(DAT_1010e2158);
      DAT_1010e2158 = (code *)0x0;
      FUN_100b16ba4();
      FUN_100b18a18(&DAT_1010e1df8,0,0);
      DAT_1010e1df0 = bVar1;
    }
    else {
      if ((DAT_1010e2186 & 1) == 0) {
        DAT_1010e2186 = 1;
        FUN_100b18a18(&DAT_1010e1df8,0,0);
      }
      FUN_100b34cd4(&DAT_1010e2161);
      pcVar2 = FUN_100b2b010;
      __ZSt13set_terminatePFvvE();
      DAT_1010e1df0 = bVar1;
      DAT_1010e2158 = pcVar2;
    }
  }
  return;
}



/* Address: 0x100b2af80 | FUN_100b2af80 */

undefined1 FUN_100b2af80(void)

{
  return DAT_1010e2160;
}



/* Address: 0x100b2af8c | FUN_100b2af8c */

undefined8 FUN_100b2af8c(undefined8 *param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  
  if ((param_1 != (undefined8 *)0x0) &&
     ((undefined *)*param_1 == PTR__objc_ehtype_vtable_100ea8160 + 0x10)) {
    pcVar3 = (char *)param_1[2];
    while( true ) {
      if (pcVar3 == (char *)0x0) {
        return 0;
      }
      pcVar2 = pcVar3;
      _class_getName();
      if ((pcVar2 != (char *)0x0) && (iVar1 = _strcmp(pcVar2,"NSException"), iVar1 == 0)) break;
      _class_getSuperclass();
    }
    return 1;
  }
  return 0;
}



/* Address: 0x100b2b010 | FUN_100b2b010 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b2b010(long *param_1)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  undefined1 *puVar4;
  long local_918;
  undefined4 local_90c;
  undefined8 local_908;
  undefined8 local_900 [154];
  undefined1 local_430 [1000];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  ___cxa_current_exception_type();
  if (param_1 == (long *)0x0) {
    bVar2 = false;
    uVar3 = 0;
  }
  else {
    uVar3 = param_1[1];
    bVar2 = (undefined *)*param_1 == PTR__objc_ehtype_vtable_100ea8160 + 0x10;
    FUN_100b2af8c();
    if (((ulong)param_1 & 1) != 0) goto LAB_100b2b16c;
    uVar3 = uVar3 & 0x7fffffffffffffff;
  }
  local_908 = 0;
  local_90c = 0;
  FUN_100b26c88(0,&local_908,&local_90c);
  uRam00000001010e2330 = 0;
  _DAT_1010e2328 = 0;
  uRam00000001010e2340 = 0;
  _DAT_1010e2338 = 0;
  uRam00000001010e2310 = 0;
  _DAT_1010e2308 = 0;
  uRam00000001010e2320 = 0;
  _DAT_1010e2318 = 0;
  uRam00000001010e22f0 = 0;
  _DAT_1010e22e8 = 0;
  uRam00000001010e2300 = 0;
  _DAT_1010e22f8 = 0;
  uRam00000001010e22d0 = 0;
  _DAT_1010e22c8 = 0;
  uRam00000001010e22e0 = 0;
  _DAT_1010e22d8 = 0;
  uRam00000001010e22b0 = 0;
  _DAT_1010e22a8 = 0;
  uRam00000001010e22c0 = 0;
  _DAT_1010e22b8 = 0;
  uRam00000001010e2290 = 0;
  _DAT_1010e2288 = 0;
  uRam00000001010e22a0 = 0;
  _DAT_1010e2298 = 0;
  uRam00000001010e2270 = 0;
  _DAT_1010e2268 = 0;
  uRam00000001010e2280 = 0;
  _DAT_1010e2278 = 0;
  uRam00000001010e2250 = 0;
  _DAT_1010e2248 = 0;
  uRam00000001010e2260 = 0;
  _DAT_1010e2258 = 0;
  uRam00000001010e2230 = 0;
  _DAT_1010e2228 = 0;
  uRam00000001010e2240 = 0;
  _DAT_1010e2238 = 0;
  uRam00000001010e2210 = 0;
  _DAT_1010e2208 = 0;
  uRam00000001010e2220 = 0;
  _DAT_1010e2218 = 0;
  DAT_1010e21f0 = 0;
  _DAT_1010e21e8 = 0;
  uRam00000001010e2200 = 0;
  _DAT_1010e21f8 = 0;
  uRam00000001010e21d0 = 0;
  _DAT_1010e21c8 = 0;
  uRam00000001010e21e0 = 0;
  _DAT_1010e21d8 = 0;
  DAT_1010e21b0 = 0;
  _DAT_1010e21a8 = 0;
  DAT_1010e21c0 = (undefined *)0x0;
  DAT_1010e21b8 = (undefined1 *)0x0;
  uRam00000001010e2190 = 0;
  DAT_1010e2188 = (undefined *)0x0;
  uRam00000001010e21a0 = 0;
  DAT_1010e2198 = (undefined8 *)0x0;
  local_430[0] = 0;
  __ZSt17current_exceptionv(&local_918);
  local_900[0] = 0;
  __ZNSt13exception_ptrD1Ev(local_900);
  if (local_918 == 0) {
    FUN_100b2b938(&DAT_1010e1df8,0);
    puVar4 = local_430;
  }
  else {
    if (!bVar2) {
      DAT_1010e1df0 = 0;
      ___cxa_rethrow();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100b2b1c4);
      (*pcVar1)();
    }
    puVar4 = (undefined1 *)0x0;
  }
  FUN_100b40bac();
  FUN_100b5100c();
  _DAT_1010e21a8 = CONCAT44(DAT_1010e21a8_4,4);
  DAT_1010e2188 = &DAT_1010e2161;
  uRam00000001010e2190._0_4_ = (uint)(uint3)uRam00000001010e2190;
  DAT_1010e21c0 = &DAT_1010e1df8;
  DAT_1010e2198 = local_900;
  DAT_1010e21b0 = uVar3;
  DAT_1010e21b8 = puVar4;
  DAT_1010e21f0 = uVar3;
  FUN_100b26d44(&DAT_1010e2188);
  FUN_100b513c8(local_908,local_90c);
  __ZNSt13exception_ptrD1Ev(&local_918);
LAB_100b2b16c:
  if (DAT_1010e2158 != (code *)0x0) {
    (*DAT_1010e2158)();
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100b2b3f8 | SentryTraceProfiler::startWithTracer: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

bool SentryTraceProfiler::startWithTracer_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  bool bVar2;
  ID IVar3;
  class_t *self;
  undefined8 uVar4;
  
  __ZNSt3__15mutex4lockEv(&DAT_100ffa6e8);
  IVar3 = objc_stub::FUN_100c05c20(DAT_1010e2348);
  bVar1 = (bool)IVar3;
  if (bVar1 == 0) {
    self = &objc::class_t::SentryProfiler;
    _objc_alloc();
    DAT_1010e2348 = objc_stub::FUN_100c04540((ID)self,0);
    uVar4 = 0;
    if (DAT_1010e2348 != 0) {
      FUN_100b4f3a8();
      objc_stub::FUN_100c0d320(DAT_1010e2348,uVar4);
      FUN_100b427bc(DAT_1010e2348,param_3);
      __ZNSt3__15mutex6unlockEv(&DAT_100ffa6e8);
      objc_stub::FUN_100c09aa0(param_1);
      return 1;
    }
    FUN_100b3a1e0();
    if ((int)uVar4 != 0) {
      FUN_100b3a280("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/Profiling/SentryTraceProfiler.mm"
                    ,0x30,&cf_Traceprofilerwasunabletobeinitialized_willnotproceed_);
    }
  }
  else {
    bVar2 = bVar1;
    FUN_100b3a1c0();
    if (bVar2 != 0) {
      FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/Profiling/SentryTraceProfiler.mm"
                    ,0x25,&cf_Atraceprofilerisalreadyrunning_);
    }
    FUN_100b427bc(DAT_1010e2348,param_3);
    IVar3 = objc_stub::FUN_100c06d40(DAT_1010e2348);
    objc_stub::recordMetrics(IVar3);
  }
  __ZNSt3__15mutex6unlockEv(&DAT_100ffa6e8);
  return bVar1;
}



/* Address: 0x100b2b594 | SentryTraceProfiler::isCurrentlyProfiling */

/* Function Stack Size: 0x10 bytes */

bool SentryTraceProfiler::isCurrentlyProfiling(ID param_1,SEL param_2)

{
  ID IVar1;
  
  __ZNSt3__15mutex4lockEv(&DAT_100ffa6e8);
  IVar1 = objc_stub::FUN_100c05c20(DAT_1010e2348);
  __ZNSt3__15mutex6unlockEv(&DAT_100ffa6e8);
  return (bool)IVar1;
}



/* Address: 0x100b2b5f0 | SentryTraceProfiler::recordMetrics */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryTraceProfiler::recordMetrics(ID param_1,SEL param_2)

{
  int iVar1;
  ID IVar2;
  
  __ZNSt3__15mutex4lockEv(&DAT_100ffa6e8);
  IVar2 = objc_stub::FUN_100c05c20(DAT_1010e2348);
  iVar1 = (int)IVar2;
  if ((IVar2 & 1) == 0) {
    FUN_100b3a1c0();
    if (iVar1 != 0) {
      FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/Profiling/SentryTraceProfiler.mm"
                    ,0x47,&cf_Notraceprofileriscurrentlyrunning_);
    }
  }
  else {
    IVar2 = objc_stub::FUN_100c06d40(DAT_1010e2348);
    objc_stub::recordMetrics(IVar2);
  }
  __ZNSt3__15mutex6unlockEv(&DAT_100ffa6e8);
  return;
}



/* Address: 0x100b2b698 | SentryTraceProfiler::scheduleTimeoutTimer */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryTraceProfiler::scheduleTimeoutTimer(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *local_48;
  undefined8 local_40;
  code *local_38;
  undefined *puStack_30;
  ID local_28;
  
  IVar1 = objc_stub::dispatchQueueWrapper((ID)&objc::class_t::SentryDependencyContainerSwiftHelper);
  local_48 = PTR___NSConcreteStackBlock_100ea82a0;
  local_40 = 0xc0000000;
  local_38 = FUN_100b2b728;
  puStack_30 = &DAT_100f34720;
  local_28 = param_1;
  FUN_100b4f410(IVar1,&local_48);
  return;
}



/* Address: 0x100b2b728 | FUN_100b2b728 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100b2b728(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *local_48;
  undefined8 local_40;
  code *local_38;
  undefined *puStack_30;
  undefined8 local_28;
  
  __ZNSt3__15mutex4lockEv(&DAT_100ffa6e8);
  lVar2 = DAT_1010583a8;
  if (DAT_1010583a8 == 0) {
    local_48 = PTR___NSConcreteStackBlock_100ea82a0;
    local_40 = 0xc0000000;
    local_38 = FUN_100b2b7e8;
    puStack_30 = &DAT_100f34720;
    local_28 = *(undefined8 *)(param_1 + 0x20);
    lVar1 = 0;
    FUN_100b4f488(DAT_100ffa6e0,0,&local_48);
    lVar2 = DAT_1010583a8;
    DAT_1010583a8 = lVar1;
  }
  __ZNSt3__15mutex6unlockEv(lVar2,&DAT_100ffa6e8);
  return;
}



/* Address: 0x100b2b7e8 | FUN_100b2b7e8 */

void FUN_100b2b7e8(long param_1)

{
  objc_stub::timeoutTimerExpired(*(ID *)(param_1 + 0x20));
  return;
}



/* Address: 0x100b2b7f0 | SentryTraceProfiler::timeoutTimerExpired */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryTraceProfiler::timeoutTimerExpired(ID param_1,SEL param_2)

{
  int iVar1;
  ID IVar2;
  
  __ZNSt3__15mutex4lockEv(&DAT_100ffa6e8);
  DAT_1010583a8 = 0;
  IVar2 = objc_stub::FUN_100c05c20(DAT_1010e2348);
  iVar1 = (int)IVar2;
  if ((IVar2 & 1) == 0) {
    FUN_100b3a1e0();
    if (iVar1 != 0) {
      FUN_100b3a280("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/Profiling/SentryTraceProfiler.mm"
                    ,0x68,&cf_Currentprofilerisnotrunning_);
    }
  }
  else {
    FUN_100b3a1c0();
    if (iVar1 != 0) {
      FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/Profiling/SentryTraceProfiler.mm"
                    ,0x6c,&cf_Stoppingprofiler__duetotimeout_);
    }
    objc_stub::FUN_100c0f780(DAT_1010e2348,1);
  }
  __ZNSt3__15mutex6unlockEv(&DAT_100ffa6e8);
  return;
}



/* Address: 0x100b2b8b4 | FUN_100b2b8b4 */

void FUN_100b2b8b4(undefined8 param_1)

{
  _objc_autoreleasePoolPush();
  ___cxa_atexit(PTR___ZNSt3__15mutexD1Ev_100ea67a0,&DAT_100ffa6e8,0x100000000);
  _objc_autoreleasePoolPop(param_1);
  return;
}



/* Address: 0x100b2b8f4 | SentryMeta::versionString */

/* WARNING: Function: _objc_retainAutoreleaseReturnValue replaced with injection: _objc_retain_fixup
    */
/* Function Stack Size: 0x10 bytes */

ID SentryMeta::versionString(ID param_1,SEL param_2)

{
  return (ID)PTR_cf_9_24_0_100ffa728;
}



/* Address: 0x100b2b900 | SentryMeta::setVersionString: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryMeta::setVersionString_(ID param_1,SEL param_2,ID param_3)

{
  PTR_cf_9_24_0_100ffa728 = (undefined *)param_3;
  return;
}



/* Address: 0x100b2b910 | SentryMeta::sdkName */

/* WARNING: Function: _objc_retainAutoreleaseReturnValue replaced with injection: _objc_retain_fixup
    */
/* Function Stack Size: 0x10 bytes */

ID SentryMeta::sdkName(ID param_1,SEL param_2)

{
  return (ID)PTR_cf_sentry_cocoa_100ffa730;
}



/* Address: 0x100b2b91c | SentryMeta::setSdkName: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryMeta::setSdkName_(ID param_1,SEL param_2,ID param_3)

{
  PTR_cf_sentry_cocoa_100ffa730 = (undefined *)param_3;
  return;
}



/* Address: 0x100b2b92c | FUN_100b2b92c */

void FUN_100b2b92c(undefined1 param_1)

{
  DAT_1010e2350 = param_1;
  return;
}



/* Address: 0x100b2b938 | FUN_100b2b938 */

void FUN_100b2b938(long param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  
  if (DAT_1010e2350 == '\x01') {
    iVar1 = 1;
    FUN_100bf158c(1,0xc,0,0);
    if (iVar1 != 0) {
      uVar3 = param_1 + 0x50;
      _backtrace_async(uVar3,0x61,0);
      goto LAB_100b2b99c;
    }
  }
  uVar2 = _backtrace((void **)(param_1 + 0x50),0x61);
  uVar3 = (ulong)uVar2;
LAB_100b2b99c:
  FUN_100b528d0(param_1,param_1 + 0x50,uVar3,param_2 + 1);
  return;
}



/* Address: 0x100b2b9b4 | FUN_100b2b9b4 */

void FUN_100b2b9b4(void)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  undefined **ppuVar4;
  int extraout_w8;
  size_t local_2c8;
  int local_2c0 [3];
  pid_t local_2b4;
  undefined1 auStack_2b0 [32];
  undefined4 local_290;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100ea82f0;
  local_290 = 0;
  local_2c8 = 0x288;
  local_2c0[0] = 1;
  local_2c0[1] = 0xe;
  local_2c0[2] = 1;
  local_2b4 = _getpid();
  iVar2 = _sysctl(local_2c0,4,auStack_2b0,&local_2c8,(void *)0x0,0);
  if (iVar2 == 0) {
    bVar1 = local_290._1_1_ >> 3 & 1;
  }
  else {
    piVar3 = ___error();
    ppuVar4 = &PTR___tlv_bootstrap_101049238;
    (*(code *)PTR___tlv_bootstrap_101049238)(*piVar3);
    iVar2 = _strerror_r(extraout_w8,(char *)ppuVar4,0x400);
    if (iVar2 != 0) {
      ___error();
      _snprintf((char *)ppuVar4,0x400,"Unknown error %d");
    }
    FUN_100b5e930("ERROR",
                  "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Tools/SentryCrashDebug.c"
                  ,0x3c,"sysctl: %s");
    bVar1 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(bVar1);
}



/* Address: 0x100b2bacc | FUN_100b2bacc */

void FUN_100b2bacc(byte *param_1,long param_2)

{
  bool bVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  bool bVar6;
  int iVar7;
  
  iVar7 = 4;
  puVar5 = (undefined1 *)(param_2 + 4);
  do {
    puVar4 = puVar5;
    puVar4[-4] = *(undefined1 *)
                  ((long)&TargetResilientWitness_100c8f1bc.Implementation + (ulong)(*param_1 >> 4));
    pbVar2 = param_1 + 1;
    puVar4[-3] = *(undefined1 *)
                  ((long)&TargetResilientWitness_100c8f1bc.Implementation + ((ulong)*param_1 & 0xf))
    ;
    iVar7 = iVar7 + -1;
    param_1 = pbVar2;
    puVar5 = puVar4 + 2;
  } while (iVar7 != 0);
  puVar4[-2] = 0x2d;
  bVar1 = true;
  do {
    bVar6 = bVar1;
    puVar4 = puVar5;
    puVar4[-3] = *(undefined1 *)
                  ((long)&TargetResilientWitness_100c8f1bc.Implementation + (ulong)(*pbVar2 >> 4));
    pbVar3 = pbVar2 + 1;
    puVar4[-2] = *(undefined1 *)
                  ((long)&TargetResilientWitness_100c8f1bc.Implementation + ((ulong)*pbVar2 & 0xf));
    pbVar2 = pbVar3;
    puVar5 = puVar4 + 2;
    bVar1 = false;
  } while (bVar6);
  puVar4[-1] = 0x2d;
  bVar1 = true;
  do {
    bVar6 = bVar1;
    puVar4 = puVar5;
    puVar4[-2] = *(undefined1 *)
                  ((long)&TargetResilientWitness_100c8f1bc.Implementation + (ulong)(*pbVar3 >> 4));
    pbVar2 = pbVar3 + 1;
    puVar4[-1] = *(undefined1 *)
                  ((long)&TargetResilientWitness_100c8f1bc.Implementation + ((ulong)*pbVar3 & 0xf));
    pbVar3 = pbVar2;
    puVar5 = puVar4 + 2;
    bVar1 = false;
  } while (bVar6);
  *puVar4 = 0x2d;
  bVar1 = true;
  do {
    bVar6 = bVar1;
    puVar4 = puVar5;
    puVar4[-1] = *(undefined1 *)
                  ((long)&TargetResilientWitness_100c8f1bc.Implementation + (ulong)(*pbVar2 >> 4));
    pbVar3 = pbVar2 + 1;
    puVar5 = puVar4 + 2;
    *puVar4 = *(undefined1 *)
               ((long)&TargetResilientWitness_100c8f1bc.Implementation + ((ulong)*pbVar2 & 0xf));
    pbVar2 = pbVar3;
    bVar1 = false;
  } while (bVar6);
  puVar4[1] = 0x2d;
  iVar7 = 6;
  do {
    *puVar5 = *(undefined1 *)
               ((long)&TargetResilientWitness_100c8f1bc.Implementation + (ulong)(*pbVar3 >> 4));
    puVar5[1] = *(undefined1 *)
                 ((long)&TargetResilientWitness_100c8f1bc.Implementation + ((ulong)*pbVar3 & 0xf));
    puVar5 = puVar5 + 2;
    iVar7 = iVar7 + -1;
    pbVar3 = pbVar3 + 1;
  } while (iVar7 != 0);
  *puVar5 = 0;
  return;
}



/* Address: 0x100b2bbf8 | FUN_100b2bbf8 */

undefined8 FUN_100b2bbf8(void)

{
  return 0;
}



/* Address: 0x100b2bc00 | FUN_100b2bc00 */

bool FUN_100b2bc00(thread_act_t param_1,thread_state_t param_2,thread_state_flavor_t param_3,
                  mach_msg_type_number_t param_4)

{
  kern_return_t error_value;
  mach_msg_type_number_t local_24;
  
  local_24 = param_4;
  error_value = _thread_get_state(param_1,param_3,param_2,&local_24);
  if (error_value != 0) {
    _mach_error_string(error_value);
    FUN_100b5e930("ERROR",
                  "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Tools/SentryCrashCPU.c"
                  ,0x3a,"thread_get_state: %s");
  }
  return error_value == 0;
}



/* Address: 0x100b2bc74 | FUN_100b2bc74 */

void FUN_100b2bc74(undefined8 param_1)

{
  char acStack_22c [500];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ea82f0;
  if (DAT_1010e2358 != '\x01') {
    DAT_1010e2358 = '\x01';
    _snprintf(acStack_22c,500,"%s/Reports");
    FUN_100b17b6c(acStack_22c);
    FUN_100b19480(param_1,acStack_22c);
    _snprintf(acStack_22c,500,"%s/Data");
    FUN_100b17b6c(acStack_22c);
    _snprintf(acStack_22c,500,"%s/Data/CrashState.json");
    FUN_100b40f9c(acStack_22c);
    FUN_100b3ec58(0x3c);
    FUN_100b26b78(FUN_100b2bd90);
    if (DAT_1010e2358 == '\x01') {
      FUN_100b26b84(DAT_100ffa738);
      FUN_100b26c7c();
    }
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x100b2bd90 | FUN_100b2bd90 */

void FUN_100b2bd90(long param_1)

{
  undefined1 *puVar1;
  byte bVar2;
  undefined1 auStack_22c [500];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ea82f0;
  FUN_100b416d0();
  if (*(char *)(param_1 + 10) == '\x01') {
    FUN_100b09780(param_1,&DAT_1010e2378);
  }
  else {
    FUN_100b19754(auStack_22c);
    ___strlcpy_chk(&DAT_1010e2378,auStack_22c,500,500);
    FUN_100b0a54c(param_1,auStack_22c);
    FUN_100b33174();
  }
  bVar2 = *(byte *)(param_1 + 10);
  if (((bVar2 & 1) == 0) &&
     (bVar2 = 0, DAT_1010e2360 != (code *)0x0 || DAT_1010e2368 != (code *)0x0)) {
    FUN_100b19ab8(&DAT_1010e2378,auStack_22c);
    puVar1 = auStack_22c;
    FUN_100b17d80(puVar1,500);
    if ((int)puVar1 != 0) {
      if (DAT_1010e2360 != (code *)0x0) {
        (*DAT_1010e2360)(auStack_22c);
      }
      if (DAT_1010e2368 != (code *)0x0) {
        (*DAT_1010e2368)(auStack_22c);
      }
    }
    bVar2 = *(byte *)(param_1 + 10);
  }
  if (((bVar2 & 1) == 0) && (DAT_1010e2370 != (code *)0x0)) {
    (*DAT_1010e2370)();
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100b2beb4 | FUN_100b2beb4 */

void FUN_100b2beb4(undefined4 param_1)

{
  DAT_100ffa738 = param_1;
  if (DAT_1010e2358 == '\x01') {
    FUN_100b26b84();
    FUN_100b26c7c();
    return;
  }
  return;
}



/* Address: 0x100b2bee4 | FUN_100b2bee4 */

void FUN_100b2bee4(void)

{
  FUN_100b26b78(0);
  FUN_100b26e1c();
  DAT_1010e2358 = 0;
  FUN_100b3f21c();
  return;
}


