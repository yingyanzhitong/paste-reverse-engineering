/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100bc6430 | FUN_100bc6430 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100bc6430(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  NSArray *pNVar1;
  void *aBlock;
  code *pcVar2;
  undefined *local_70;
  undefined8 local_68;
  code *local_60;
  undefined *puStack_58;
  undefined8 local_50;
  undefined8 local_48;
  
  pNVar1 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  local_70 = PTR___NSConcreteStackBlock_100ea82a0;
  local_68 = 0x42000000;
  local_60 = thunk_FUN_100bc64f4;
  puStack_58 = &DAT_100f3b050;
  local_50 = param_2;
  local_48 = param_3;
  aBlock = __Block_copy(&local_70);
  pcVar2 = *(code **)(param_4 + 0x10);
  _swift_retain(param_3);
  (*pcVar2)(param_4,pNVar1,aBlock);
  __Block_release(aBlock);
  _swift_release(local_48);
  return;
}



/* Address: 0x100bc64f0 | thunk_FUN_100bc64f4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void thunk_FUN_100bc64f4(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  }
  _swift_retain(uVar2);
  (*pcVar1)(param_2,param_3,param_4);
  _swift_release(uVar2);
  _swift_bridgeObjectRelease(param_2);
  return;
}



/* Address: 0x100bc64f4 | FUN_100bc64f4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100bc64f4(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  }
  _swift_retain(uVar2);
  (*pcVar1)(param_2,param_3,param_4);
  _swift_release(uVar2);
  _swift_bridgeObjectRelease(param_2);
  return;
}



/* Address: 0x100bc6588 | FUN_100bc6588 */

void FUN_100bc6588(void)

{
  code *pcVar1;
  
  FUN_100b9b7dc("Sentry.SentryCrashReportFilterSwift",0x23,"init()");
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100bc65ac);
  (*pcVar1)();
}



/* Address: 0x100bc65ac | _TtC6Sentry28SentryCrashReportFilterSwift::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry28SentryCrashReportFilterSwift::init(ID param_1,SEL param_2)

{
  ID IVar1;
  
  FUN_100bc6588();
  IVar1 = *(ID *)(param_1 + filter + 8);
  _swift_release();
  return IVar1;
}



/* Address: 0x100bc65b8 | _TtC6Sentry28SentryCrashReportFilterSwift::.cxx_destruct */

/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry28SentryCrashReportFilterSwift::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_release(*(undefined8 *)(param_1 + filter + 8));
  return;
}



/* Address: 0x100bc65cc | FUN_100bc65cc */

void FUN_100bc65cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  puVar1 = (undefined8 *)
           (*(long *)(unaff_x20 +
                     _TtC6SentryP33_B8D2F6651A22453E16449C93F5F352FA23CrashReportFilterBridge::
                     filter) + _TtC6Sentry28SentryCrashReportFilterSwift::filter);
  pcVar2 = (code *)*puVar1;
  uVar3 = puVar1[1];
  _swift_retain(uVar3);
  (*pcVar2)(param_1,param_2,param_3);
  _swift_release(uVar3);
  return;
}



/* Address: 0x100bc6638 | _TtC6SentryP33_B8D2F6651A22453E16449C93F5F352FA23CrashReportFilterBridge::filterReports:onCompletion: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void _TtC6SentryP33_B8D2F6651A22453E16449C93F5F352FA23CrashReportFilterBridge::
     filterReports_onCompletion_(ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)

{
  void *pvVar1;
  undefined *puVar2;
  
  pvVar1 = __Block_copy((void *)param_4);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  puVar2 = &DAT_100f3b010;
  _swift_allocObject(&DAT_100f3b010,0x18,7);
  *(void **)(puVar2 + 0x10) = pvVar1;
  FUN_100bc65cc(param_3,thunk_FUN_100b836dc,puVar2);
  _swift_bridgeObjectRelease(param_3);
  _swift_release(puVar2);
  return;
}



/* Address: 0x100bc66d4 | FUN_100bc66d4 */

void FUN_100bc66d4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("Sentry.CrashReportFilterBridge",0x1e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100bc6700);
  (*pcVar1)();
}



/* Address: 0x100bc6700 | _TtC6SentryP33_B8D2F6651A22453E16449C93F5F352FA23CrashReportFilterBridge::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC6SentryP33_B8D2F6651A22453E16449C93F5F352FA23CrashReportFilterBridge::init
             (ID param_1,SEL param_2)

{
  FUN_100bc66d4();
  return param_1;
}



/* Address: 0x100bc6720 | _TtC6SentryP33_B8D2F6651A22453E16449C93F5F352FA23CrashReportFilterBridge::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC6SentryP33_B8D2F6651A22453E16449C93F5F352FA23CrashReportFilterBridge::_cxx_destruct
               (ID param_1,SEL param_2)

{
  return;
}



/* Address: 0x100bc6730 | FUN_100bc6730 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100bc6730(void)

{
  long unaff_x20;
  undefined8 unaff_x21;
  
  FUN_100bc7550();
  _objc_allocWithZone(&objc::class_t::SentryCrash);
  FUN_100bc72dc();
  *(undefined8 *)(unaff_x20 + _TtC6Sentry16SentryCrashSwift::sentryCrash) = unaff_x21;
  FUN_100b69e10(0,"init");
  return;
}



/* Address: 0x100bc67b8 | _TtC6Sentry16SentryCrashSwift::crashedLastLaunch */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

bool _TtC6Sentry16SentryCrashSwift::crashedLastLaunch(ID param_1,SEL param_2)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  FUN_100bc6224();
  return uVar1 & 1;
}



/* Address: 0x100bc67ec | _TtC6Sentry16SentryCrashSwift::activeDurationSinceLastCrash */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

double _TtC6Sentry16SentryCrashSwift::activeDurationSinceLastCrash(ID param_1,SEL param_2)

{
  double in_d0;
  
  FUN_100bc624c(param_1);
  return in_d0;
}



/* Address: 0x100bc6828 | FUN_100bc6828 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100bc6828(long param_1)

{
  class_t *pcVar1;
  class_t *pcVar2;
  ID IVar3;
  long unaff_x20;
  objc_super local_40;
  
  if (param_1 != 0) {
    pcVar1 = (class_t *)0x0;
    FUN_100bc73a4();
    pcVar2 = pcVar1;
    _objc_allocWithZone();
    *(long *)((long)&pcVar2->isa +
             _TtC6SentryP33_B8D2F6651A22453E16449C93F5F352FA23CrashReportFilterBridge::filter) =
         param_1;
    local_40.receiver = (ID)pcVar2;
    local_40.super_class = pcVar1;
    IVar3 = _objc_msgSendSuper2(&local_40,"init");
    FUN_100bc7544(IVar3,"setSink:");
    FUN_100b6faa8();
    return 0;
  }
  IVar3 = _objc_msgSend(*(ID *)(unaff_x20 + _TtC6Sentry16SentryCrashSwift::sentryCrash),"setSink:",0
                       );
  return IVar3;
}



/* Address: 0x100bc68f0 | _TtC6Sentry16SentryCrashSwift::setSink: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry16SentryCrashSwift::setSink_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100bc6828(param_3);
  return;
}



/* Address: 0x100bc6944 | FUN_100bc6944 */

void FUN_100bc6944(void)

{
  long unaff_x20;
  
  _objc_msgSend(*(ID *)(unaff_x20 + _TtC6Sentry16SentryCrashSwift::sentryCrash),"setOnCrash:",
                FUN_100b5c7c8);
  return;
}



/* Address: 0x100bc6964 | _TtC6Sentry16SentryCrashSwift::setupOnCrash */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry16SentryCrashSwift::setupOnCrash(ID param_1,SEL param_2)

{
  FUN_100bc6944(param_1);
  return;
}



/* Address: 0x100bc698c | FUN_100bc698c */

void FUN_100bc698c(void)

{
  long unaff_x20;
  
  _objc_msgSend(*(ID *)(unaff_x20 + _TtC6Sentry16SentryCrashSwift::sentryCrash),"setOnCrash:",0);
  return;
}



/* Address: 0x100bc69a8 | _TtC6Sentry16SentryCrashSwift::removeOnCrash */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry16SentryCrashSwift::removeOnCrash(ID param_1,SEL param_2)

{
  FUN_100bc698c(param_1);
  return;
}



/* Address: 0x100bc69d0 | _TtC6Sentry16SentryCrashSwift::uncaughtExceptionHandler */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

undefined4 * _TtC6Sentry16SentryCrashSwift::uncaughtExceptionHandler(ID param_1,SEL param_2)

{
  FUN_100bc6a04();
  return (undefined4 *)param_1;
}



/* Address: 0x100bc6a04 | FUN_100bc6a04 */

void FUN_100bc6a04(void)

{
  long unaff_x20;
  
  _objc_msgSend(*(ID *)(unaff_x20 + _TtC6Sentry16SentryCrashSwift::sentryCrash),
                "uncaughtExceptionHandler");
  return;
}



/* Address: 0x100bc6a1c | _TtC6Sentry16SentryCrashSwift::setUncaughtExceptionHandler: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry16SentryCrashSwift::setUncaughtExceptionHandler_
               (ID param_1,SEL param_2,undefined4 *param_3)

{
  FUN_100bc6a4c(param_3);
  return;
}



/* Address: 0x100bc6a4c | FUN_100bc6a4c */

void FUN_100bc6a4c(undefined8 param_1)

{
  long unaff_x20;
  
  _objc_msgSend(*(ID *)(unaff_x20 + _TtC6Sentry16SentryCrashSwift::sentryCrash),
                "setUncaughtExceptionHandler:",param_1);
  return;
}



/* Address: 0x100bc6a68 | FUN_100bc6a68 */

void FUN_100bc6a68(ID *param_1)

{
  ID IVar1;
  long unaff_x20;
  
  IVar1 = *(ID *)(unaff_x20 + _TtC6Sentry16SentryCrashSwift::sentryCrash);
  param_1[1] = IVar1;
  IVar1 = _objc_msgSend(IVar1,"uncaughtExceptionHandler");
  *param_1 = IVar1;
  FUN_100b56e88(FUN_100bc6aac,param_1);
  return;
}



/* Address: 0x100bc6aac | FUN_100bc6aac */

void FUN_100bc6aac(undefined8 *param_1)

{
  _objc_msgSend(param_1[1],"setUncaughtExceptionHandler:",*param_1);
  return;
}



/* Address: 0x100bc6ac0 | _TtC6Sentry16SentryCrashSwift::setBridge: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry16SentryCrashSwift::setBridge_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100bc6328(param_3);
  return;
}



/* Address: 0x100bc6b10 | _TtC6Sentry16SentryCrashSwift::basePath */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry16SentryCrashSwift::basePath(ID param_1,SEL param_2)

{
  NSString *pNVar1;
  
  FUN_100bc6b68(param_1);
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_2);
  return (ID)pNVar1;
}



/* Address: 0x100bc6b68 | FUN_100bc6b68 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

String FUN_100bc6b68(void)

{
  long unaff_x20;
  String SVar1;
  
  _objc_msgSend(*(ID *)(unaff_x20 + _TtC6Sentry16SentryCrashSwift::sentryCrash),"basePath");
  SVar1 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  FUN_100b6faa8();
  return SVar1;
}



/* Address: 0x100bc6bc4 | _TtC6Sentry16SentryCrashSwift::setBasePath: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry16SentryCrashSwift::setBasePath_(ID param_1,SEL param_2,ID param_3)

{
  String SVar1;
  
  SVar1 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  FUN_100bc6c18(SVar1.str,SVar1.bridgeObject);
  return;
}



/* Address: 0x100bc6c18 | FUN_100bc6c18 */

void FUN_100bc6c18(undefined8 param_1,undefined8 param_2)

{
  NSString *pNVar1;
  
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_2);
  FUN_100bc7544();
  FUN_100b78d38(pNVar1);
  return;
}



/* Address: 0x100bc6c60 | FUN_100bc6c60 */

void FUN_100bc6c60(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  _swift_bridgeObjectRetain(uVar2);
  FUN_100bc6c18(uVar1,uVar2);
  return;
}



/* Address: 0x100bc6c9c | FUN_100bc6c9c */

void FUN_100bc6c9c(long *param_1,long param_2)

{
  long *plVar1;
  long unaff_x20;
  
  param_1[2] = unaff_x20;
  plVar1 = param_1;
  FUN_100bc6b68();
  *param_1 = (long)plVar1;
  param_1[1] = param_2;
  FUN_100b56e88(FUN_100bc6ccc,param_1);
  return;
}



/* Address: 0x100bc6ccc | FUN_100bc6ccc */

void FUN_100bc6ccc(long param_1,uint param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  if ((param_2 & 1) != 0) {
    _swift_bridgeObjectRetain(uVar1);
    FUN_100bc7560();
    _swift_bridgeObjectRelease(uVar1);
    return;
  }
  FUN_100bc7560();
  return;
}



/* Address: 0x100bc6d1c | FUN_100bc6d1c */

void FUN_100bc6d1c(void)

{
  long unaff_x20;
  
  _objc_msgSend(*(ID *)(unaff_x20 + _TtC6Sentry16SentryCrashSwift::sentryCrash),"install");
  return;
}



/* Address: 0x100bc6d34 | _TtC6Sentry16SentryCrashSwift::install */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry16SentryCrashSwift::install(ID param_1,SEL param_2)

{
  FUN_100bc6d1c(param_1);
  return;
}



/* Address: 0x100bc6d5c | FUN_100bc6d5c */

void FUN_100bc6d5c(void)

{
  long unaff_x20;
  
  _objc_msgSend(*(ID *)(unaff_x20 + _TtC6Sentry16SentryCrashSwift::sentryCrash),"uninstall");
  return;
}



/* Address: 0x100bc6d74 | _TtC6Sentry16SentryCrashSwift::uninstall */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry16SentryCrashSwift::uninstall(ID param_1,SEL param_2)

{
  FUN_100bc6d5c(param_1);
  return;
}



/* Address: 0x100bc6d9c | _TtC6Sentry16SentryCrashSwift::systemInfo */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry16SentryCrashSwift::systemInfo(ID param_1,SEL param_2)

{
  NSDictionary *pNVar1;
  
  FUN_100bc61bc();
  if (param_1 == 0) {
    pNVar1 = (NSDictionary *)0x0;
  }
  else {
    pNVar1 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(param_1);
  }
  return (ID)pNVar1;
}



/* Address: 0x100bc6e0c | _TtC6Sentry16SentryCrashSwift::userInfo */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry16SentryCrashSwift::userInfo(ID param_1,SEL param_2)

{
  NSDictionary *pNVar1;
  
  FUN_100bc6e70(param_1);
  pNVar1 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_1);
  return (ID)pNVar1;
}



/* Address: 0x100bc6e70 | FUN_100bc6e70 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100bc6f08 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

Dictionary<undefined,undefined> FUN_100bc6e70(void)

{
  ID IVar1;
  Dictionary<undefined,undefined> DVar2;
  long unaff_x20;
  
  IVar1 = _objc_msgSend(*(ID *)(unaff_x20 + _TtC6Sentry16SentryCrashSwift::sentryCrash),"userInfo");
  if (IVar1 != 0) {
    DVar2 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
    FUN_100b6faa8();
    return (Dictionary<undefined,undefined>)DVar2.unknown;
  }
  DVar2 = Swift::Dictionary::_init
                    (0,PTR___type_metadata_for_Swift_AnyHashable_100eacdb0,
                     PTR___type_metadata_for_Any_100eae0c0 + 8,
                     PTR___protocol_witness_table_for_Swift_AnyHashable___Swift_Hashable_in_Swift_100eacdb8
                    );
  return (Dictionary<undefined,undefined>)DVar2.unknown;
}



/* Address: 0x100bc6f0c | _TtC6Sentry16SentryCrashSwift::setUserInfo: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry16SentryCrashSwift::setUserInfo_(ID param_1,SEL param_2,ID param_3)

{
  Dictionary<undefined,undefined> DVar1;
  
  DVar1 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  FUN_100bc6344(DVar1.unknown);
  return;
}



/* Address: 0x100bc6f70 | FUN_100bc6f70 */

void FUN_100bc6f70(undefined8 *param_1)

{
  _swift_bridgeObjectRetain(*param_1);
  FUN_100bc6344();
  return;
}



/* Address: 0x100bc6f98 | FUN_100bc6f98 */

void FUN_100bc6f98(long *param_1)

{
  long *plVar1;
  long unaff_x20;
  
  param_1[1] = unaff_x20;
  plVar1 = param_1;
  FUN_100bc6e70();
  *param_1 = (long)plVar1;
  FUN_100b56e88(FUN_100bc6fc8,param_1);
  return;
}



/* Address: 0x100bc6fc8 | FUN_100bc6fc8 */

void FUN_100bc6fc8(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  if ((param_2 & 1) != 0) {
    _swift_bridgeObjectRetain(uVar1);
    FUN_100bc7340();
    _swift_bridgeObjectRelease(uVar1);
    return;
  }
  FUN_100bc7340(uVar1,*(undefined8 *)(param_1[1] + _TtC6Sentry16SentryCrashSwift::sentryCrash));
  return;
}



/* Address: 0x100bc701c | FUN_100bc701c */

void FUN_100bc701c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  void *aBlock;
  undefined *local_60;
  undefined8 local_58;
  code *local_50;
  undefined *puStack_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_60 = PTR___NSConcreteStackBlock_100ea82a0;
  local_58 = 0x42000000;
  local_50 = thunk_FUN_100bc64f4;
  puStack_48 = &DAT_100f3af70;
  local_40 = param_1;
  local_38 = param_2;
  aBlock = __Block_copy(&local_60);
  uVar1 = local_38;
  _swift_retain(param_2);
  _swift_release(uVar1);
  FUN_100bc7544();
  __Block_release(aBlock);
  return;
}



/* Address: 0x100bc70b8 | _TtC6Sentry16SentryCrashSwift::sendAllReportsWithCompletion: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry16SentryCrashSwift::sendAllReportsWithCompletion_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  void *pvVar1;
  undefined *puVar2;
  
  pvVar1 = __Block_copy((void *)param_3);
  puVar2 = &DAT_100f3afe8;
  _swift_allocObject(&DAT_100f3afe8,0x18,7);
  *(void **)(puVar2 + 0x10) = pvVar1;
  FUN_100bc701c(FUN_100b836dc,puVar2);
  _swift_release(puVar2);
  return;
}



/* Address: 0x100bc712c | _TtC6Sentry16SentryCrashSwift::monitoring */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

unsigned_int _TtC6Sentry16SentryCrashSwift::monitoring(ID param_1,SEL param_2)

{
  unsigned_int uVar1;
  
  uVar1 = (unsigned_int)param_1;
  FUN_100bc7160();
  return uVar1;
}



/* Address: 0x100bc7160 | FUN_100bc7160 */

void FUN_100bc7160(void)

{
  long unaff_x20;
  
  _objc_msgSend(*(ID *)(unaff_x20 + _TtC6Sentry16SentryCrashSwift::sentryCrash),"monitoring");
  return;
}



/* Address: 0x100bc7178 | _TtC6Sentry16SentryCrashSwift::introspectMemory */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

bool _TtC6Sentry16SentryCrashSwift::introspectMemory(ID param_1,SEL param_2)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  FUN_100bc6264();
  return uVar1 & 1;
}



/* Address: 0x100bc71ac | _TtC6Sentry16SentryCrashSwift::setIntrospectMemory: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x14 bytes */

void _TtC6Sentry16SentryCrashSwift::setIntrospectMemory_(ID param_1,SEL param_2,bool param_3)

{
  FUN_100bc628c(param_3);
  return;
}



/* Address: 0x100bc71dc | FUN_100bc71dc */

void FUN_100bc71dc(ID *param_1)

{
  ID IVar1;
  long unaff_x20;
  
  IVar1 = *(ID *)(unaff_x20 + _TtC6Sentry16SentryCrashSwift::sentryCrash);
  *param_1 = IVar1;
  IVar1 = _objc_msgSend(IVar1,"introspectMemory");
  *(char *)(param_1 + 1) = (char)IVar1;
  FUN_100b56e88(FUN_100bc7220,param_1 + 1);
  return;
}



/* Address: 0x100bc7220 | FUN_100bc7220 */

void FUN_100bc7220(ID *param_1)

{
  _objc_msgSend(*param_1,"setIntrospectMemory:",(ulong)(byte)param_1[1]);
  return;
}



/* Address: 0x100bc7238 | FUN_100bc7238 */

bool FUN_100bc7238(void)

{
  ID IVar1;
  long unaff_x20;
  
  IVar1 = _objc_msgSend(*(ID *)(unaff_x20 + _TtC6Sentry16SentryCrashSwift::sentryCrash),"onCrash");
  return IVar1 != 0;
}



/* Address: 0x100bc7268 | _TtC6Sentry16SentryCrashSwift::hasOnCrash */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

bool _TtC6Sentry16SentryCrashSwift::hasOnCrash(ID param_1,SEL param_2)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  FUN_100bc7238();
  return uVar1 & 1;
}



/* Address: 0x100bc729c | FUN_100bc729c */

void FUN_100bc729c(void)

{
  code *pcVar1;
  
  FUN_100b9b7dc("Sentry.SentryCrashSwift",0x17,"init()");
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100bc72c0);
  (*pcVar1)();
}



/* Address: 0x100bc72c0 | _TtC6Sentry16SentryCrashSwift::init */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry16SentryCrashSwift::init(ID param_1,SEL param_2)

{
  FUN_100bc729c();
  return 0;
}



/* Address: 0x100bc72cc | _TtC6Sentry16SentryCrashSwift::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry16SentryCrashSwift::_cxx_destruct(ID param_1,SEL param_2)

{
  return;
}



/* Address: 0x100bc72dc | FUN_100bc72dc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100bc72dc(undefined8 param_1,long param_2)

{
  NSString *pNVar1;
  ID IVar2;
  ID unaff_x20;
  
  if (param_2 == 0) {
    pNVar1 = (NSString *)0x0;
  }
  else {
    pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(param_2);
  }
  IVar2 = _objc_msgSend(unaff_x20,"initWithBasePath:",pNVar1);
  return IVar2;
}



/* Address: 0x100bc7340 | FUN_100bc7340 */

void FUN_100bc7340(undefined8 param_1,ID param_2)

{
  NSDictionary *pNVar1;
  
  pNVar1 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_1);
  _objc_msgSend(param_2,"setUserInfo:",pNVar1);
  FUN_100b78d38(pNVar1);
  return;
}



/* Address: 0x100bc73a4 | FUN_100bc73a4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100bc73a4(void)

{
  return ZEXT816(0x100fa41a0);
}



/* Address: 0x100bc73c4 | FUN_100bc73c4 */

void FUN_100bc73c4(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  _swift_retain(uVar1);
  return;
}



/* Address: 0x100bc73d4 | FUN_100bc73d4 */

void FUN_100bc73d4(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x100bc73dc | FUN_100bc73dc */

void FUN_100bc73dc(undefined8 param_1)

{
  undefined8 *unaff_x19;
  
  FUN_100b78d0c();
  FUN_100bc6a04();
  *unaff_x19 = param_1;
  FUN_100b56e88();
  return;
}


