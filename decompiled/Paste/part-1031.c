/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100b23b64 | SentrySpanContext::.cxx_destruct */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void SentrySpanContext::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



/* Address: 0x100b23bc4 | SentryFrame::init */

/* Function Stack Size: 0x10 bytes */

ID SentryFrame::init(ID param_1,SEL param_2)

{
  ID IVar1;
  objc_super local_20;
  
  local_20.super_class = &objc::class_t::SentryFrame;
  local_20.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_20,"init");
  return IVar1;
}



/* Address: 0x100b23bf8 | SentryFrame::serialize */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryFrame::serialize(ID param_1,SEL param_2)

{
  undefined *self;
  ID self_00;
  ID IVar1;
  
  self = &_OBJC_CLASS___NSMutableDictionary;
  _objc_alloc();
  self_00 = objc_stub::init((ID)self);
  IVar1 = objc_stub::FUN_100c0fdc0(param_1);
  objc_stub::setValue_forKey_(self_00,IVar1,&cf_symbol_addr);
  IVar1 = objc_stub::FUN_100c02460(param_1);
  objc_stub::setValue_forKey_(self_00,IVar1,&cf_filename);
  IVar1 = objc_stub::FUN_100c02ae0(param_1);
  objc_stub::setValue_forKey_(self_00,IVar1,&cf_function);
  IVar1 = objc_stub::FUN_100c06e40(param_1);
  objc_stub::setValue_forKey_(self_00,IVar1,&cf_module);
  IVar1 = objc_stub::FUN_100c06280(param_1);
  objc_stub::setValue_forKey_(self_00,IVar1,&cf_lineno);
  IVar1 = objc_stub::FUN_100bff7c0(param_1);
  objc_stub::setValue_forKey_(self_00,IVar1,&cf_colno);
  IVar1 = objc_stub::package(param_1);
  objc_stub::setValue_forKey_(self_00,IVar1,&cf_package);
  IVar1 = objc_stub::FUN_100c035e0(param_1);
  objc_stub::setValue_forKey_(self_00,IVar1,&cf_image_addr);
  IVar1 = objc_stub::FUN_100c05460(param_1);
  objc_stub::setValue_forKey_(self_00,IVar1,&cf_instruction_addr);
  IVar1 = objc_stub::FUN_100c07e00(param_1);
  objc_stub::setValue_forKey_(self_00,IVar1,&cf_platform);
  IVar1 = objc_stub::FUN_100bffe40(param_1);
  objc_stub::setValue_forKey_(self_00,IVar1,&cf_context_line);
  IVar1 = objc_stub::FUN_100c07f40(param_1);
  objc_stub::setValue_forKey_(self_00,IVar1,&cf_pre_context);
  IVar1 = objc_stub::FUN_100c07920(param_1);
  objc_stub::setValue_forKey_(self_00,IVar1,&cf_parent_index);
  IVar1 = objc_stub::FUN_100c09860(param_1);
  objc_stub::setValue_forKey_(self_00,IVar1,&cf_sample_count);
  IVar1 = objc_stub::FUN_100c07ec0(param_1);
  objc_stub::setValue_forKey_(self_00,IVar1,&cf_post_context);
  IVar1 = objc_stub::FUN_100c11320(param_1);
  FUN_100bcfb78(IVar1);
  objc_stub::setValue_forKey_(self_00,IVar1,&cf_vars);
  IVar1 = objc_stub::FUN_100c037e0(param_1);
  objc_stub::FUN_100c0ab60((ID)&objc::class_t::SentryDictionary,IVar1,&cf_in_app,self_00);
  IVar1 = objc_stub::FUN_100c0f180(param_1);
  objc_stub::FUN_100c0ab60((ID)&objc::class_t::SentryDictionary,IVar1,&cf_stack_start,self_00);
  return self_00;
}



/* Address: 0x100b23fc8 | SentryFrame::symbolAddress */

/* Function Stack Size: 0x10 bytes */

ID SentryFrame::symbolAddress(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 8);
}



/* Address: 0x100b23fd0 | SentryFrame::setSymbolAddress: */

/* WARNING: Function: _objc_setProperty_nonatomic_copy replaced with injection:
   _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryFrame::setSymbolAddress_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 8) = param_3;
  return;
}



/* Address: 0x100b23fd8 | SentryFrame::fileName */

/* Function Stack Size: 0x10 bytes */

ID SentryFrame::fileName(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x10);
}



/* Address: 0x100b23fe0 | SentryFrame::setFileName: */

/* WARNING: Function: _objc_setProperty_nonatomic_copy replaced with injection:
   _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryFrame::setFileName_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x10) = param_3;
  return;
}



/* Address: 0x100b23fe8 | SentryFrame::function */

/* Function Stack Size: 0x10 bytes */

ID SentryFrame::function(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x18);
}



/* Address: 0x100b23ff0 | SentryFrame::setFunction: */

/* WARNING: Function: _objc_setProperty_nonatomic_copy replaced with injection:
   _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryFrame::setFunction_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x18) = param_3;
  return;
}



/* Address: 0x100b23ff8 | SentryFrame::module */

/* Function Stack Size: 0x10 bytes */

ID SentryFrame::module(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x20);
}



/* Address: 0x100b24000 | SentryFrame::setModule: */

/* WARNING: Function: _objc_setProperty_nonatomic_copy replaced with injection:
   _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryFrame::setModule_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x20) = param_3;
  return;
}



/* Address: 0x100b24008 | SentryFrame::package */

/* Function Stack Size: 0x10 bytes */

ID SentryFrame::package(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x28);
}



/* Address: 0x100b24010 | SentryFrame::setPackage: */

/* WARNING: Function: _objc_setProperty_nonatomic_copy replaced with injection:
   _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryFrame::setPackage_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x28) = param_3;
  return;
}



/* Address: 0x100b24018 | SentryFrame::imageAddress */

/* Function Stack Size: 0x10 bytes */

ID SentryFrame::imageAddress(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x30);
}



/* Address: 0x100b24020 | SentryFrame::setImageAddress: */

/* WARNING: Function: _objc_setProperty_nonatomic_copy replaced with injection:
   _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryFrame::setImageAddress_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x30) = param_3;
  return;
}



/* Address: 0x100b24028 | SentryFrame::platform */

/* Function Stack Size: 0x10 bytes */

ID SentryFrame::platform(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x38);
}



/* Address: 0x100b24030 | SentryFrame::setPlatform: */

/* WARNING: Function: _objc_setProperty_nonatomic_copy replaced with injection:
   _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryFrame::setPlatform_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x38) = param_3;
  return;
}



/* Address: 0x100b24038 | SentryFrame::instructionAddress */

/* Function Stack Size: 0x10 bytes */

ID SentryFrame::instructionAddress(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x40);
}



/* Address: 0x100b24040 | SentryFrame::setInstructionAddress: */

/* WARNING: Function: _objc_setProperty_nonatomic_copy replaced with injection:
   _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryFrame::setInstructionAddress_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x40) = param_3;
  return;
}



/* Address: 0x100b24048 | SentryFrame::lineNumber */

/* Function Stack Size: 0x10 bytes */

ID SentryFrame::lineNumber(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x48);
}



/* Address: 0x100b24050 | SentryFrame::setLineNumber: */

/* WARNING: Function: _objc_setProperty_nonatomic_copy replaced with injection:
   _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryFrame::setLineNumber_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x48) = param_3;
  return;
}



/* Address: 0x100b24058 | SentryFrame::columnNumber */

/* Function Stack Size: 0x10 bytes */

ID SentryFrame::columnNumber(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x50);
}



/* Address: 0x100b24060 | SentryFrame::setColumnNumber: */

/* WARNING: Function: _objc_setProperty_nonatomic_copy replaced with injection:
   _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryFrame::setColumnNumber_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x50) = param_3;
  return;
}



/* Address: 0x100b24068 | SentryFrame::contextLine */

/* Function Stack Size: 0x10 bytes */

ID SentryFrame::contextLine(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x58);
}



/* Address: 0x100b24070 | SentryFrame::setContextLine: */

/* WARNING: Function: _objc_setProperty_nonatomic_copy replaced with injection:
   _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryFrame::setContextLine_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x58) = param_3;
  return;
}



/* Address: 0x100b24078 | SentryFrame::parentIndex */

/* Function Stack Size: 0x10 bytes */

ID SentryFrame::parentIndex(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x60);
}



/* Address: 0x100b24080 | SentryFrame::setParentIndex: */

/* WARNING: Function: _objc_setProperty_nonatomic_copy replaced with injection:
   _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryFrame::setParentIndex_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x60) = param_3;
  return;
}



/* Address: 0x100b24088 | SentryFrame::sampleCount */

/* Function Stack Size: 0x10 bytes */

ID SentryFrame::sampleCount(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x68);
}



/* Address: 0x100b24090 | SentryFrame::setSampleCount: */

/* WARNING: Function: _objc_setProperty_nonatomic_copy replaced with injection:
   _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryFrame::setSampleCount_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x68) = param_3;
  return;
}



/* Address: 0x100b24098 | SentryFrame::preContext */

/* Function Stack Size: 0x10 bytes */

ID SentryFrame::preContext(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x70);
}



/* Address: 0x100b240a0 | SentryFrame::setPreContext: */

/* WARNING: Function: _objc_setProperty_nonatomic_copy replaced with injection:
   _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryFrame::setPreContext_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x70) = param_3;
  return;
}



/* Address: 0x100b240a8 | SentryFrame::postContext */

/* Function Stack Size: 0x10 bytes */

ID SentryFrame::postContext(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x78);
}



/* Address: 0x100b240b0 | SentryFrame::setPostContext: */

/* WARNING: Function: _objc_setProperty_nonatomic_copy replaced with injection:
   _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryFrame::setPostContext_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x78) = param_3;
  return;
}



/* Address: 0x100b240b8 | SentryFrame::inApp */

/* Function Stack Size: 0x10 bytes */

ID SentryFrame::inApp(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x80);
}



/* Address: 0x100b240c0 | SentryFrame::setInApp: */

/* WARNING: Function: _objc_setProperty_nonatomic_copy replaced with injection:
   _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryFrame::setInApp_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x80) = param_3;
  return;
}



/* Address: 0x100b240c8 | SentryFrame::stackStart */

/* Function Stack Size: 0x10 bytes */

ID SentryFrame::stackStart(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x88);
}



/* Address: 0x100b240d0 | SentryFrame::setStackStart: */

/* WARNING: Function: _objc_setProperty_nonatomic_copy replaced with injection:
   _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryFrame::setStackStart_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x88) = param_3;
  return;
}



/* Address: 0x100b240d8 | SentryFrame::vars */

/* Function Stack Size: 0x10 bytes */

ID SentryFrame::vars(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x90);
}



/* Address: 0x100b240e0 | SentryFrame::setVars: */

/* WARNING: Function: _objc_setProperty_nonatomic_copy replaced with injection:
   _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryFrame::setVars_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x90) = param_3;
  return;
}



/* Address: 0x100b240e8 | SentryFrame::.cxx_destruct */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryFrame::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
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



/* Address: 0x100b241d8 | SentryNetworkTracker::sharedInstance */

/* WARNING: Function: _objc_retainAutoreleaseReturnValue replaced with injection: _objc_retain_fixup
    */
/* Function Stack Size: 0x10 bytes */

ID SentryNetworkTracker::sharedInstance(ID param_1,SEL param_2)

{
  undefined *local_38;
  undefined8 local_30;
  code *local_28;
  undefined *puStack_20;
  ID local_18;
  
  local_38 = PTR___NSConcreteStackBlock_100ea82a0;
  local_30 = 0xc0000000;
  local_28 = FUN_100b2424c;
  puStack_20 = &DAT_100f34720;
  if (DAT_1010e1da8 != -1) {
    local_18 = param_1;
    _dispatch_once(&DAT_1010e1da8,&local_38);
  }
  return DAT_1010e1da0;
}



/* Address: 0x100b2424c | FUN_100b2424c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b2424c(long param_1)

{
  ID self;
  
  self = *(ID *)(param_1 + 0x20);
  _objc_alloc();
  DAT_1010e1da0 = objc_stub::init(self);
  return 0;
}



/* Address: 0x100b24278 | SentryNetworkTracker::init */

/* Function Stack Size: 0x10 bytes */

ID SentryNetworkTracker::init(ID param_1,SEL param_2)

{
  ID IVar1;
  objc_super local_20;
  
  local_20.super_class = &objc::class_t::SentryNetworkTracker;
  local_20.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_20,"init");
  if (IVar1 != 0) {
    *(undefined4 *)(IVar1 + 8) = 0;
  }
  return IVar1;
}



/* Address: 0x100b242b4 | SentryNetworkTracker::enableNetworkTracking */

/* Function Stack Size: 0x10 bytes */

void SentryNetworkTracker::enableNetworkTracking(ID param_1,SEL param_2)

{
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}



/* Address: 0x100b242c0 | SentryNetworkTracker::enableNetworkBreadcrumbs */

/* Function Stack Size: 0x10 bytes */

void SentryNetworkTracker::enableNetworkBreadcrumbs(ID param_1,SEL param_2)

{
  *(undefined1 *)(param_1 + 9) = 1;
  return;
}



/* Address: 0x100b242cc | SentryNetworkTracker::enableCaptureFailedRequests */

/* Function Stack Size: 0x10 bytes */

void SentryNetworkTracker::enableCaptureFailedRequests(ID param_1,SEL param_2)

{
  *(undefined1 *)(param_1 + 10) = 1;
  return;
}



/* Address: 0x100b242d8 | SentryNetworkTracker::enableGraphQLOperationTracking */

/* Function Stack Size: 0x10 bytes */

void SentryNetworkTracker::enableGraphQLOperationTracking(ID param_1,SEL param_2)

{
  *(undefined1 *)(param_1 + 0xb) = 1;
  return;
}



/* Address: 0x100b242e4 | SentryNetworkTracker::disable */

/* Function Stack Size: 0x10 bytes */

void SentryNetworkTracker::disable(ID param_1,SEL param_2)

{
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}



/* Address: 0x100b242ec | SentryNetworkTracker::urlSessionTaskResume: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryNetworkTracker::urlSessionTaskResume_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  class_t *self;
  
  IVar2 = objc_stub::state(param_3);
  if ((IVar2 & 0xfffffffffffffffe) == 2) {
    return;
  }
  IVar2 = objc_stub::FUN_100c05d00(param_1,param_3);
  if ((int)IVar2 == 0) {
    return;
  }
  IVar2 = objc_stub::options((ID)&objc::class_t::SentrySDKInternal);
  if (IVar2 == 0) {
    return;
  }
  IVar3 = objc_stub::currentRequest(param_3);
  IVar4 = objc_stub::URL(IVar3);
  if (IVar4 == 0) {
    return;
  }
  IVar2 = objc_stub::FUN_100c07a60(IVar2);
  IVar2 = objc_stub::FUN_100c10fe0(IVar2);
  if ((IVar2 != 0) && (IVar5 = objc_stub::FUN_100c03480(IVar2), IVar5 != 0)) {
    IVar5 = objc_stub::path(IVar2);
    IVar5 = objc_stub::length(IVar5);
    if (IVar5 != 0) {
      IVar5 = objc_stub::FUN_100c03480(IVar4);
      IVar6 = objc_stub::FUN_100c03480(IVar2);
      IVar5 = objc_stub::isEqualToString_(IVar5,IVar6);
      if ((int)IVar5 != 0) {
        IVar5 = objc_stub::path(IVar4);
        IVar2 = objc_stub::path(IVar2);
        IVar2 = objc_stub::containsString_(IVar5,IVar2);
        if ((IVar2 & 1) != 0) {
          return;
        }
      }
    }
  }
  IVar2 = objc_stub::FUN_100c05b00(param_1);
  if (((int)IVar2 != 0) &&
     (IVar2 = param_3,
     _objc_getAssociatedObject(param_3,&PTR_cf_SENTRY_NETWORK_REQUEST_START_DATE_100f34710),
     IVar2 == 0)) {
    IVar2 = objc_stub::date((ID)&_OBJC_CLASS___NSDate);
    _objc_setAssociatedObject(param_3,&PTR_cf_SENTRY_NETWORK_REQUEST_START_DATE_100f34710,IVar2,1);
  }
  IVar2 = objc_stub::FUN_100c05b20(param_1);
  if ((IVar2 & 1) == 0) {
    objc_stub::FUN_100bfd940(param_1,param_3);
    return;
  }
  self = &objc::class_t::_TtC6Sentry12UrlSanitized;
  _objc_alloc();
  IVar4 = objc_stub::initWithURL_((ID)self,IVar4);
  _objc_sync_enter();
  IVar2 = param_3;
  _objc_getAssociatedObject(param_3,&PTR_cf_SENTRY_NETWORK_REQUEST_TRACKER_SPAN_100f34708);
  if (IVar2 == 0) {
    IVar2 = objc_stub::currentHub((ID)&objc::class_t::SentrySDKInternal);
    IVar2 = objc_stub::scope(IVar2);
    IVar2 = objc_stub::FUN_100c0efc0(IVar2);
    if (IVar2 == 0) {
      iVar1 = 0;
    }
    else {
      objc_stub::FUN_100bfcec0(IVar3);
      objc_stub::FUN_100c09940(IVar4);
      IVar5 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_____);
      IVar5 = objc_stub::startChildWithOperation_description_(IVar2,&cf_http_client,IVar5);
      objc_stub::FUN_100c0cf40(IVar5,&cf_auto_http_ns_url_session);
      IVar3 = objc_stub::FUN_100bfcec0(IVar3);
      objc_stub::setDataValue_forKey_(IVar5,IVar3,&cf_http_request_method);
      IVar3 = objc_stub::FUN_100c09940(IVar4);
      objc_stub::setDataValue_forKey_(IVar5,IVar3,&cf_url);
      objc_stub::setDataValue_forKey_(IVar5,&cf_fetch,&cf_type);
      IVar3 = objc_stub::FUN_100c08560(IVar4);
      if (IVar3 != 0) {
        IVar3 = objc_stub::FUN_100c08560(IVar4);
        IVar3 = objc_stub::count(IVar3);
        if (IVar3 != 0) {
          IVar3 = objc_stub::FUN_100c08540(IVar4);
          objc_stub::setDataValue_forKey_(IVar5,IVar3,&cf_http_query);
        }
      }
      IVar3 = objc_stub::FUN_100c02a40(IVar4);
      if (IVar3 != 0) {
        IVar3 = objc_stub::FUN_100c02a40(IVar4);
        objc_stub::setDataValue_forKey_(IVar5,IVar3,&cf_http_fragment);
      }
      iVar1 = 0;
      if (IVar5 != 0) {
        IVar3 = objc_stub::class((ID)&objc::class_t::SentryNoOpSpan);
        IVar3 = objc_stub::isKindOfClass_(IVar5,IVar3);
        iVar1 = (int)IVar3;
        if (iVar1 == 0) {
          IVar2 = objc_stub::FUN_100c03080((ID)&objc::class_t::SentryTracer,IVar2);
          IVar2 = objc_stub::FUN_100c10900(IVar2);
          IVar2 = objc_stub::FUN_100c10760(IVar2);
          IVar3 = objc_stub::FUN_100c107c0(IVar5);
          IVar4 = objc_stub::options((ID)&objc::class_t::SentrySDKInternal);
          IVar4 = objc_stub::FUN_100c018a0(IVar4);
          IVar6 = objc_stub::options((ID)&objc::class_t::SentrySDKInternal);
          IVar6 = objc_stub::FUN_100c109a0(IVar6);
          objc_stub::FUN_100bfd460
                    ((ID)&objc::class_t::SentryTracePropagation,IVar2,IVar3,IVar4 & 0xffffffff,IVar6
                     ,param_3);
          iVar1 = 0;
          FUN_100b3a1c0();
          if (iVar1 != 0) {
            objc_stub::description(IVar5);
            FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryNetworkTracker.m"
                          ,0xe4,&
                                cf_SentryNetworkTrackerautomaticallystartedHTTPspanforsessionTask___
                         );
          }
          _objc_setAssociatedObject
                    (param_3,&PTR_cf_SENTRY_NETWORK_REQUEST_TRACKER_SPAN_100f34708,IVar5,1);
          goto LAB_100b24994;
        }
      }
    }
    FUN_100b3a1c0();
    if (iVar1 != 0) {
      FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryNetworkTracker.m"
                    ,0xd4,&cf_Notransactionboundtoscope_Won_ttracknetworkoperation_);
    }
    objc_stub::FUN_100bfd940(param_1,param_3);
  }
LAB_100b24994:
  _objc_sync_exit(param_3);
  return;
}



/* Address: 0x100b24a18 | SentryNetworkTracker::addTraceWithoutTransactionToTask: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryNetworkTracker::addTraceWithoutTransactionToTask_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  class_t *self;
  ID IVar4;
  
  IVar1 = objc_stub::currentHub((ID)&objc::class_t::SentrySDKInternal);
  IVar1 = objc_stub::scope(IVar1);
  IVar2 = objc_stub::FUN_100c0efc0(IVar1);
  IVar3 = objc_stub::FUN_100c03080((ID)&objc::class_t::SentryTracer,IVar2);
  if (IVar2 == 0 || IVar3 == 0) {
    IVar2 = objc_stub::FUN_100c084a0(IVar1);
    self = &objc::class_t::SentryTraceContext;
    _objc_alloc();
    IVar3 = objc_stub::FUN_100c10960(IVar2);
    IVar4 = objc_stub::currentHub((ID)&objc::class_t::SentrySDKInternal);
    IVar4 = objc_stub::FUN_100bff480(IVar4);
    IVar4 = objc_stub::options(IVar4);
    IVar1 = objc_stub::FUN_100c092a0(IVar1);
    IVar1 = objc_stub::FUN_100c04de0((ID)self,IVar3,IVar4,IVar1);
    IVar1 = objc_stub::FUN_100c10760(IVar1);
    IVar2 = objc_stub::FUN_100c10940(IVar2);
    IVar3 = objc_stub::options((ID)&objc::class_t::SentrySDKInternal);
    IVar3 = objc_stub::FUN_100c018a0(IVar3);
    IVar4 = objc_stub::options((ID)&objc::class_t::SentrySDKInternal);
    IVar4 = objc_stub::FUN_100c109a0(IVar4);
    objc_stub::FUN_100bfd460
              ((ID)&objc::class_t::SentryTracePropagation,IVar1,IVar2,IVar3,IVar4,param_3);
  }
  else {
    IVar1 = objc_stub::FUN_100c10900(IVar3);
    IVar1 = objc_stub::FUN_100c10760(IVar1);
    IVar2 = objc_stub::FUN_100c107c0(IVar2);
    IVar3 = objc_stub::options((ID)&objc::class_t::SentrySDKInternal);
    IVar3 = objc_stub::FUN_100c018a0(IVar3);
    IVar4 = objc_stub::options((ID)&objc::class_t::SentrySDKInternal);
    IVar4 = objc_stub::FUN_100c109a0(IVar4);
    objc_stub::FUN_100bfd460
              ((ID)&objc::class_t::SentryTracePropagation,IVar1,IVar2,IVar3,IVar4,param_3);
  }
  return;
}



/* Address: 0x100b24d28 | SentryNetworkTracker::urlSessionTask:setState: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void SentryNetworkTracker::urlSessionTask_setState_
               (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  int iVar1;
  ID IVar2;
  ID self;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  
  IVar2 = objc_stub::FUN_100c05b20(param_1);
  if ((((IVar2 & 1) == 0) && (IVar2 = objc_stub::FUN_100c05b00(param_1), (IVar2 & 1) == 0)) &&
     (IVar2 = objc_stub::FUN_100c05680(param_1), (int)IVar2 == 0)) {
    return;
  }
  IVar2 = objc_stub::FUN_100c05d00(param_1,param_3);
  if ((int)IVar2 == 0) {
    return;
  }
  IVar2 = objc_stub::options((ID)&objc::class_t::SentrySDKInternal);
  if (param_4 < 2) {
    return;
  }
  if (IVar2 == 0) {
    return;
  }
  self = objc_stub::currentRequest(param_3);
  IVar3 = objc_stub::URL(self);
  if (IVar3 == 0) {
    return;
  }
  IVar4 = objc_stub::FUN_100c07a60(IVar2);
  IVar4 = objc_stub::FUN_100c10fe0(IVar4);
  IVar5 = objc_stub::FUN_100c03480(IVar3);
  IVar6 = objc_stub::FUN_100c03480(IVar4);
  IVar5 = objc_stub::isEqualToString_(IVar5,IVar6);
  if ((IVar5 & 1) != 0) {
    IVar3 = objc_stub::path(IVar3);
    IVar4 = objc_stub::path(IVar4);
    IVar3 = objc_stub::containsString_(IVar3,IVar4);
    if ((IVar3 & 1) != 0) {
      return;
    }
  }
  _objc_sync_enter();
  IVar3 = param_3;
  _objc_getAssociatedObject(param_3,&PTR_cf_SENTRY_NETWORK_REQUEST_TRACKER_SPAN_100f34708);
  _objc_setAssociatedObject(param_3,&PTR_cf_SENTRY_NETWORK_REQUEST_TRACKER_SPAN_100f34708,0,1);
  _objc_sync_exit(param_3);
  IVar4 = objc_stub::state(param_3);
  if ((IVar4 == 0) || (IVar4 = objc_stub::state(param_3), IVar4 == 1)) {
    objc_stub::FUN_100bfef00(param_1,param_3,self,IVar2);
    objc_stub::FUN_100bfd4a0(param_1,param_3,self,IVar2);
    IVar2 = objc_stub::FUN_100c09540(param_3);
    IVar2 = objc_stub::FUN_100c11000(param_1,IVar2);
    if ((IVar2 != 0xffffffffffffffff) && (IVar3 != 0)) {
      IVar2 = objc_stub::numberWithInteger_((ID)&_OBJC_CLASS___NSNumber,IVar2);
      objc_stub::setDataValue_forKey_(IVar3,IVar2,&cf_http_response_status_code);
      goto LAB_100b24fdc;
    }
  }
  if (IVar3 == 0) {
    return;
  }
LAB_100b24fdc:
  IVar2 = objc_stub::FUN_100c0f6c0(param_1,param_3,param_4);
  IVar2 = objc_stub::finishWithStatus_(IVar3,IVar2);
  iVar1 = (int)IVar2;
  FUN_100b3a1c0();
  if (iVar1 != 0) {
    FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryNetworkTracker.m"
                  ,0x15a,&cf_SentryNetworkTrackerfinishedHTTPspanforsessionTask);
  }
  return;
}



/* Address: 0x100b2507c | SentryNetworkTracker::captureFailedRequests:currentRequest:options: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_unsafeClaimAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x28 bytes */

void SentryNetworkTracker::captureFailedRequests_currentRequest_options_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  int iVar1;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  class_t *pcVar7;
  ID IVar8;
  ID IVar9;
  undefined *puVar10;
  undefined8 uVar11;
  cfstringStruct *pcVar12;
  long lVar13;
  ID IVar14;
  ID self;
  undefined8 local_150;
  long lStack_148;
  long *local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  cfstringStruct *local_108;
  ID IStack_100;
  ID local_f8;
  undefined1 auStack_f0 [128];
  long local_70;
  ID IVar2;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  IVar2 = objc_stub::FUN_100c05680(param_1);
  iVar1 = (int)IVar2;
  if ((IVar2 & 1) == 0) {
    FUN_100b3a1c0();
    if (iVar1 == 0) goto LAB_100b25418;
    pcVar12 = &cf_captureFailedRequestsEnabledisdisabled_notcapturingHTTPClienterrors_;
    uVar11 = 0x163;
  }
  else {
    if (param_4 != 0) {
      IVar2 = objc_stub::FUN_100c09540(param_3);
      iVar1 = 0;
      if (IVar2 != 0) {
        IVar2 = objc_stub::FUN_100c09540(param_3);
        IVar3 = objc_stub::class((ID)&_OBJC_CLASS___NSHTTPURLResponse);
        IVar2 = objc_stub::isKindOfClass_(IVar2,IVar3);
        iVar1 = 0;
        if ((IVar2 & 1) != 0) {
          IVar2 = objc_stub::FUN_100c09540(param_3);
          IVar3 = objc_stub::statusCode(IVar2);
          IVar3 = objc_stub::numberWithInteger_((ID)&_OBJC_CLASS___NSNumber,IVar3);
          IVar4 = objc_stub::statusCode(IVar2);
          IVar4 = objc_stub::FUN_100bffca0(param_1,IVar4);
          iVar1 = (int)IVar4;
          if ((IVar4 & 1) == 0) {
            FUN_100b3a1c0();
            if (iVar1 == 0) goto LAB_100b25418;
            pcVar12 = &
                      cf_Responsestatuscodeisn_twithintheallowedranges_notcapturingHTTPClienterrors_
            ;
            uVar11 = 0x177;
          }
          else {
            IVar5 = objc_stub::URL(param_4);
            IVar6 = objc_stub::FUN_100c022e0(param_5);
            IVar4 = *(ID *)PTR____NSArray0___100ea9b00;
            if (IVar6 != 0) {
              IVar4 = IVar6;
            }
            IVar4 = objc_stub::FUN_100c05ce0((ID)&objc::class_t::SentryTracePropagation,IVar5,IVar4)
            ;
            iVar1 = 0;
            if ((IVar4 & 1) != 0) {
              objc_stub::statusCode(IVar2);
              IVar4 = objc_stub::stringWithFormat_
                                ((ID)&_OBJC_CLASS___NSString,&cf_HTTPClientErrorwithstatuscode__ld);
              pcVar7 = &objc::class_t::SentryEvent;
              _objc_alloc();
              IVar5 = objc_stub::FUN_100c044a0((ID)pcVar7,4);
              IVar6 = objc_stub::currentHub((ID)&objc::class_t::SentrySDKInternal);
              IVar6 = objc_stub::getClient(IVar6);
              IVar6 = objc_stub::FUN_100c10520(IVar6);
              IVar6 = objc_stub::FUN_100c02d00(IVar6);
              pcVar7 = &objc::class_t::SentryException;
              _objc_alloc();
              IVar4 = objc_stub::FUN_100c051e0((ID)pcVar7,IVar4,&cf_HTTPClientError);
              pcVar7 = &objc::class_t::SentryMechanism;
              _objc_alloc();
              IVar8 = objc_stub::FUN_100c04fa0((ID)pcVar7,&cf_HTTPClientError);
              objc_stub::FUN_100c0ca40(IVar4,IVar8);
              uStack_128 = 0;
              local_130 = 0;
              uStack_118 = 0;
              uStack_120 = 0;
              lStack_148 = 0;
              local_150 = 0;
              uStack_138 = 0;
              local_140 = (long *)0x0;
              IVar8 = objc_stub::countByEnumeratingWithState_objects_count_
                                (IVar6,&local_150,auStack_f0,0x10);
              if (IVar8 != 0) {
                lVar13 = *local_140;
                do {
                  IVar14 = 0;
                  do {
                    if (*local_140 != lVar13) {
                      _objc_enumerationMutation(IVar6);
                    }
                    self = *(ID *)(lStack_148 + IVar14 * 8);
                    IVar9 = objc_stub::FUN_100c00580(self);
                    IVar9 = objc_stub::boolValue(IVar9);
                    if ((int)IVar9 != 0) {
                      IVar6 = objc_stub::FUN_100c0f200(self);
                      IVar8 = objc_stub::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,1);
                      objc_stub::FUN_100c0dba0(IVar6,IVar8);
                      objc_stub::FUN_100c0dd20(IVar4,IVar6);
                      goto LAB_100b25508;
                    }
                    IVar14 = IVar14 + 1;
                  } while (IVar8 != IVar14);
                  IVar8 = objc_stub::countByEnumeratingWithState_objects_count_
                                    (IVar6,&local_150,auStack_f0,0x10);
                } while (IVar8 != 0);
              }
LAB_100b25508:
              pcVar7 = &objc::class_t::SentryRequest;
              _objc_alloc();
              IVar6 = objc_stub::init((ID)pcVar7);
              pcVar7 = &objc::class_t::_TtC6Sentry12UrlSanitized;
              _objc_alloc();
              IVar8 = objc_stub::URL(param_4);
              IVar8 = objc_stub::initWithURL_((ID)pcVar7,IVar8);
              IVar14 = objc_stub::FUN_100c09940(IVar8);
              objc_stub::FUN_100c0e6c0(IVar6,IVar14);
              IVar14 = objc_stub::FUN_100bfcec0(param_4);
              objc_stub::FUN_100c0cb20(IVar6,IVar14);
              IVar14 = objc_stub::FUN_100c02a40(IVar8);
              objc_stub::FUN_100c0bda0(IVar6,IVar14);
              IVar8 = objc_stub::FUN_100c08540(IVar8);
              objc_stub::FUN_100c0d420(IVar6,IVar8);
              IVar8 = objc_stub::FUN_100c00180(param_3);
              IVar8 = objc_stub::numberWithLongLong_((ID)&_OBJC_CLASS___NSNumber,IVar8);
              objc_stub::FUN_100c0ab20(IVar6,IVar8);
              IVar8 = objc_stub::FUN_100bfda60(param_4);
              if (IVar8 != 0) {
                IVar8 = objc_stub::FUN_100bfda60(param_4);
                IVar8 = objc_stub::copy(IVar8);
                IVar8 = objc_stub::FUN_100c09920
                                  ((ID)&objc::class_t::_TtC6Sentry19HTTPHeaderSanitizer,IVar8);
                objc_stub::FUN_100c0bfe0(IVar6,IVar8);
              }
              local_f8 = IVar4;
              IVar4 = objc_stub::arrayWithObjects_count_((ID)&_OBJC_CLASS___NSArray,&local_f8,1);
              objc_stub::FUN_100c0ba20(IVar5,IVar4);
              objc_stub::FUN_100c0d6a0(IVar5,IVar6);
              puVar10 = &_OBJC_CLASS___NSMutableDictionary;
              _objc_alloc();
              IVar4 = objc_stub::init((ID)puVar10);
              puVar10 = &_OBJC_CLASS___NSMutableDictionary;
              _objc_alloc();
              IVar6 = objc_stub::init((ID)puVar10);
              objc_stub::setValue_forKey_(IVar6,IVar3,&cf_status_code);
              IVar3 = objc_stub::FUN_100bfda80(IVar2);
              if (IVar3 != 0) {
                IVar2 = objc_stub::FUN_100bfda80(IVar2);
                IVar2 = objc_stub::FUN_100c09920
                                  ((ID)&objc::class_t::_TtC6Sentry19HTTPHeaderSanitizer,IVar2);
                objc_stub::setValue_forKey_(IVar6,IVar2,&cf_headers);
              }
              IVar2 = objc_stub::FUN_100c00160(param_3);
              if (IVar2 != 0) {
                IVar2 = objc_stub::FUN_100c00160(param_3);
                IVar2 = objc_stub::numberWithLongLong_((ID)&_OBJC_CLASS___NSNumber,IVar2);
                objc_stub::setValue_forKey_(IVar6,IVar2,&cf_body_size);
              }
              objc_stub::setObject_forKeyedSubscript_(IVar4,IVar6,&cf_response);
              IVar2 = objc_stub::FUN_100c05900(param_1);
              if (((int)IVar2 != 0) &&
                 (IVar2 = objc_stub::FUN_100c02e40
                                    ((ID)&objc::class_t::_TtC6Sentry20URLSessionTaskHelper,param_3),
                 IVar2 != 0)) {
                local_108 = &cf_operation_name;
                IStack_100 = IVar2;
                IVar2 = objc_stub::FUN_100c012c0
                                  ((ID)&_OBJC_CLASS___NSDictionary,&IStack_100,&local_108,1);
                objc_stub::setObject_forKeyedSubscript_(IVar4,IVar2,&cf_graphql);
              }
              objc_stub::FUN_100c0b0e0(IVar5,IVar4);
              IVar2 = objc_stub::currentHub((ID)&objc::class_t::SentrySDKInternal);
              objc_stub::FUN_100bfee20(IVar2,IVar5);
              goto LAB_100b25418;
            }
            FUN_100b3a1c0();
            if (iVar1 == 0) goto LAB_100b25418;
            pcVar12 = &cf_Requesturlisn_twithintherequesttargets_notcapturingHTTPClienterrors_;
            uVar11 = 0x17e;
          }
          FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryNetworkTracker.m"
                        ,uVar11,pcVar12);
          goto LAB_100b25418;
        }
        FUN_100b3a1c0();
        if (iVar1 == 0) goto LAB_100b25418;
        pcVar12 = &cf_Responseisn_taknowntype_notcapturingHTTPClienterrors_;
        uVar11 = 0x16f;
        goto LAB_100b25414;
      }
    }
    FUN_100b3a1c0();
    if (iVar1 == 0) goto LAB_100b25418;
    pcVar12 = &cf_RequestorResponsearenull_notcapturingHTTPClienterrors_;
    uVar11 = 0x168;
  }
LAB_100b25414:
  FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryNetworkTracker.m"
                ,uVar11,pcVar12);
LAB_100b25418:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}



/* Address: 0x100b25938 | SentryNetworkTracker::containsStatusCode: */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

bool SentryNetworkTracker::containsStatusCode_(ID param_1,SEL param_2,long_long param_3)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  bool bVar4;
  long lVar5;
  ID IVar6;
  undefined8 local_110;
  long lStack_108;
  long *local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  local_100 = (long *)0x0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  IVar1 = objc_stub::options((ID)&objc::class_t::SentrySDKInternal);
  IVar1 = objc_stub::FUN_100c022c0(IVar1);
  IVar2 = objc_stub::countByEnumeratingWithState_objects_count_(IVar1,&local_110,auStack_c8,0x10);
  if (IVar2 != 0) {
    lVar5 = *local_100;
    do {
      IVar6 = 0;
      do {
        if (*local_100 != lVar5) {
          _objc_enumerationMutation(IVar1);
        }
        IVar3 = objc_stub::FUN_100c05960(*(ID *)(lStack_108 + IVar6 * 8),param_3);
        if ((IVar3 & 1) != 0) {
          bVar4 = 1;
          goto LAB_100b25a28;
        }
        IVar6 = IVar6 + 1;
      } while (IVar2 != IVar6);
      IVar2 = objc_stub::countByEnumeratingWithState_objects_count_
                        (IVar1,&local_110,auStack_c8,0x10);
    } while (IVar2 != 0);
  }
  bVar4 = 0;
LAB_100b25a28:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_48) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}



/* Address: 0x100b25a68 | SentryNetworkTracker::addBreadcrumbForSessionTask:currentRequest:options: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x28 bytes */

void SentryNetworkTracker::addBreadcrumbForSessionTask_currentRequest_options_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  class_t *pcVar4;
  ID IVar5;
  undefined *self;
  ID self_00;
  ID IVar6;
  
  IVar1 = objc_stub::FUN_100c05b00(param_1);
  if ((int)IVar1 != 0) {
    IVar1 = param_3;
    _objc_getAssociatedObject(param_3,&PTR_cf_SENTRY_NETWORK_REQUEST_TRACKER_BREADCRUMB_100f34718);
    if (IVar1 != 0) {
      IVar2 = objc_stub::class((ID)&_OBJC_CLASS___NSNumber);
      IVar2 = objc_stub::isKindOfClass_(IVar1,IVar2);
      if (((int)IVar2 != 0) && (IVar1 = objc_stub::boolValue(IVar1), (IVar1 & 1) != 0)) {
        return;
      }
    }
    IVar1 = param_3;
    _objc_getAssociatedObject(param_3,&PTR_cf_SENTRY_NETWORK_REQUEST_START_DATE_100f34710);
    IVar2 = objc_stub::FUN_100c09540(param_3);
    IVar2 = objc_stub::FUN_100c11000(param_1,IVar2);
    IVar3 = objc_stub::FUN_100c02ca0(param_1,param_3,IVar2);
    pcVar4 = &objc::class_t::_TtC6Sentry12UrlSanitized;
    _objc_alloc();
    IVar5 = objc_stub::URL(param_4);
    IVar5 = objc_stub::initWithURL_((ID)pcVar4,IVar5);
    self = &_OBJC_CLASS___NSMutableDictionary;
    _objc_alloc();
    self_00 = objc_stub::init((ID)self);
    IVar6 = objc_stub::FUN_100c09940(IVar5);
    objc_stub::setObject_forKeyedSubscript_(self_00,IVar6,&cf_url);
    IVar6 = objc_stub::FUN_100bfcec0(param_4);
    objc_stub::setObject_forKeyedSubscript_(self_00,IVar6,&cf_method);
    objc_stub::setObject_forKeyedSubscript_(self_00,IVar1,&cf_request_start);
    IVar1 = objc_stub::FUN_100c00180(param_3);
    IVar1 = objc_stub::numberWithLongLong_((ID)&_OBJC_CLASS___NSNumber,IVar1);
    objc_stub::setObject_forKeyedSubscript_(self_00,IVar1,&cf_request_body_size);
    IVar1 = objc_stub::FUN_100c00160(param_3);
    IVar1 = objc_stub::numberWithLongLong_((ID)&_OBJC_CLASS___NSNumber,IVar1);
    objc_stub::setObject_forKeyedSubscript_(self_00,IVar1,&cf_response_body_size);
    if (IVar2 != 0xffffffffffffffff) {
      IVar1 = objc_stub::numberWithInteger_((ID)&_OBJC_CLASS___NSNumber,IVar2);
      objc_stub::setObject_forKeyedSubscript_(self_00,IVar1,&cf_status_code);
      IVar1 = objc_stub::localizedStringForStatusCode_((ID)&_OBJC_CLASS___NSHTTPURLResponse,IVar2);
      objc_stub::setObject_forKeyedSubscript_(self_00,IVar1,&cf_reason);
      IVar1 = objc_stub::FUN_100c05900(param_1);
      if ((int)IVar1 != 0) {
        IVar1 = objc_stub::FUN_100c02e40
                          ((ID)&objc::class_t::_TtC6Sentry20URLSessionTaskHelper,param_3);
        objc_stub::setObject_forKeyedSubscript_(self_00,IVar1,&cf_graphql_operation_name);
      }
    }
    IVar1 = objc_stub::FUN_100c08540(IVar5);
    if (IVar1 != 0) {
      IVar1 = objc_stub::FUN_100c08540(IVar5);
      objc_stub::setObject_forKeyedSubscript_(self_00,IVar1,&cf_http_query);
    }
    IVar1 = objc_stub::FUN_100c02a40(IVar5);
    if (IVar1 != 0) {
      IVar1 = objc_stub::FUN_100c02a40(IVar5);
      objc_stub::setObject_forKeyedSubscript_(self_00,IVar1,&cf_http_fragment);
    }
    pcVar4 = &objc::class_t::SentryBreadcrumb;
    _objc_alloc();
    IVar1 = objc_stub::FUN_100c044e0((ID)pcVar4,IVar3,&cf_http,self_00);
    objc_stub::FUN_100c0e600(IVar1,&cf_http);
    objc_stub::FUN_100bfd480((ID)&objc::class_t::SentrySDKInternal,IVar1);
    IVar1 = objc_stub::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,1);
    _objc_setAssociatedObject
              (param_3,&PTR_cf_SENTRY_NETWORK_REQUEST_TRACKER_BREADCRUMB_100f34718,IVar1,1);
  }
  return;
}



/* Address: 0x100b25ec0 | SentryNetworkTracker::urlResponseStatusCode: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

long_long SentryNetworkTracker::urlResponseStatusCode_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  if (param_3 != 0) {
    IVar1 = objc_stub::class((ID)&_OBJC_CLASS___NSHTTPURLResponse);
    IVar1 = objc_stub::isKindOfClass_(param_3,IVar1);
    if ((int)IVar1 != 0) {
      IVar1 = objc_stub::statusCode(param_3);
      return IVar1;
    }
  }
  return 0xffffffffffffffff;
}



/* Address: 0x100b25f24 | SentryNetworkTracker::statusForSessionTask:state: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

unsigned_long_long
SentryNetworkTracker::statusForSessionTask_state_
          (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  ID IVar1;
  
  if (param_4 == 2) {
    IVar1 = 0xc;
  }
  else if (param_4 == 3) {
    IVar1 = objc_stub::FUN_100c01e20(param_3);
    if (IVar1 == 0) {
      IVar1 = objc_stub::FUN_100c09540(param_3);
      IVar1 = objc_stub::FUN_100c11000(param_1,IVar1);
      IVar1 = objc_stub::FUN_100c0f080(param_1,IVar1);
    }
    else {
      IVar1 = 0xb;
    }
  }
  else {
    IVar1 = 0;
  }
  return IVar1;
}



/* Address: 0x100b25fe4 | SentryNetworkTracker::isTaskSupported: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

bool SentryNetworkTracker::isTaskSupported_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = objc_stub::class((ID)&_OBJC_CLASS___NSURLSessionDataTask);
  IVar1 = objc_stub::isKindOfClass_(param_3,IVar1);
  if ((IVar1 & 1) == 0) {
    IVar1 = objc_stub::class((ID)&_OBJC_CLASS___NSURLSessionDownloadTask);
    IVar1 = objc_stub::isKindOfClass_(param_3,IVar1);
    if ((IVar1 & 1) == 0) {
      IVar1 = objc_stub::class((ID)&_OBJC_CLASS___NSURLSessionUploadTask);
      IVar1 = objc_stub::isKindOfClass_(param_3,IVar1);
      return (bool)IVar1;
    }
  }
  return 1;
}



/* Address: 0x100b26070 | SentryNetworkTracker::spanStatusForHttpResponseStatusCode: */

/* Function Stack Size: 0x18 bytes */

unsigned_long_long
SentryNetworkTracker::spanStatusForHttpResponseStatusCode_(ID param_1,SEL param_2,long_long param_3)

{
  if (param_3 - 200 < 100) {
    return 1;
  }
  if ((long)param_3 < 0x1ad) {
    if ((long)param_3 < 0x193) {
      if (param_3 == 400) {
        return 7;
      }
      if (param_3 == 0x191) {
        return 3;
      }
    }
    else {
      if (param_3 == 0x193) {
        return 4;
      }
      if (param_3 == 0x194) {
        return 5;
      }
      if (param_3 == 0x199) {
        return 0xf;
      }
    }
  }
  else if ((long)param_3 < 0x1f5) {
    if (param_3 == 0x1ad) {
      return 6;
    }
    if (param_3 == 500) {
      return 10;
    }
  }
  else {
    if (param_3 == 0x1f5) {
      return 8;
    }
    if (param_3 == 0x1f7) {
      return 9;
    }
    if (param_3 == 0x1f8) {
      return 2;
    }
  }
  return 0;
}



/* Address: 0x100b26144 | SentryNetworkTracker::getBreadcrumbLevel:responseStatusCode: */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

unsigned_long_long
SentryNetworkTracker::getBreadcrumbLevel_responseStatusCode_
          (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  unsigned_long_long uVar1;
  unsigned_long_long uVar2;
  ID IVar3;
  
  uVar1 = 4;
  if (99 < param_4 - 500) {
    uVar1 = 2;
  }
  uVar2 = 3;
  if (99 < param_4 - 400) {
    uVar2 = uVar1;
  }
  IVar3 = objc_stub::FUN_100c01e20(param_3);
  if (IVar3 != 0) {
    uVar2 = 4;
  }
  return uVar2;
}



/* Address: 0x100b261a8 | SentryNetworkTracker::isNetworkTrackingEnabled */

/* Function Stack Size: 0x10 bytes */

bool SentryNetworkTracker::isNetworkTrackingEnabled(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + 8);
}



/* Address: 0x100b261b0 | SentryNetworkTracker::setIsNetworkTrackingEnabled: */

/* Function Stack Size: 0x14 bytes */

void SentryNetworkTracker::setIsNetworkTrackingEnabled_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + 8) = (char)param_3;
  return;
}



/* Address: 0x100b261b8 | SentryNetworkTracker::isNetworkBreadcrumbEnabled */

/* Function Stack Size: 0x10 bytes */

bool SentryNetworkTracker::isNetworkBreadcrumbEnabled(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + 9);
}



/* Address: 0x100b261c0 | SentryNetworkTracker::setIsNetworkBreadcrumbEnabled: */

/* Function Stack Size: 0x14 bytes */

void SentryNetworkTracker::setIsNetworkBreadcrumbEnabled_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + 9) = (char)param_3;
  return;
}



/* Address: 0x100b261c8 | SentryNetworkTracker::isCaptureFailedRequestsEnabled */

/* Function Stack Size: 0x10 bytes */

bool SentryNetworkTracker::isCaptureFailedRequestsEnabled(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + 10);
}


