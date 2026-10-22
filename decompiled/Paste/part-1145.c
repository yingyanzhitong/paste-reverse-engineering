/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100bd67a8 | FUN_100bd67a8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100bd67a8(void)

{
  return 0;
}



/* Address: 0x100bd67b8 | FUN_100bd67b8 */

void FUN_100bd67b8(void)

{
  long unaff_x19;
  
                    /* WARNING: Could not recover jumptable at 0x000100bd67c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x19 + 8))();
  return;
}



/* Address: 0x100bd67c8 | FUN_100bd67c8 */

void FUN_100bd67c8(void)

{
  return;
}



/* Address: 0x100bd67d8 | FUN_100bd67d8 */

void FUN_100bd67d8(void)

{
  return;
}



/* Address: 0x100bd67e8 | FUN_100bd67e8 */

void FUN_100bd67e8(undefined8 param_1,undefined8 param_2,_NativeDictionary param_3)

{
  bool unaff_w25;
  __int64 unaff_x26;
  
  Swift::_NativeDictionary::ensureUnique(unaff_w25,unaff_x26,param_3);
  return;
}



/* Address: 0x100bd67f4 | FUN_100bd67f4 */

void FUN_100bd67f4(void)

{
  FUN_100071370();
  return;
}



/* Address: 0x100bd6800 | FUN_100bd6800 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_100bd6800(void)

{
  long unaff_x19;
  long unaff_x20;
  
  return *(undefined8 *)(unaff_x20 + unaff_x19);
}



/* Address: 0x100bd680c | FUN_100bd680c */

void FUN_100bd680c(code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x000100bd6814. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x100bd6818 | FUN_100bd6818 */

void FUN_100bd6818(void)

{
  FUN_100071370();
  return;
}



/* Address: 0x100bd6824 | FUN_100bd6824 */

void FUN_100bd6824(void)

{
  FUN_100071370();
  return;
}



/* Address: 0x100bd6830 | FUN_100bd6830 */

void FUN_100bd6830(void)

{
  Swift::KeyedEncodingContainer::_encode();
  return;
}



/* Address: 0x100bd683c | FUN_100bd683c */

void FUN_100bd683c(void)

{
  _swift_endAccess(&stack0x00000008);
  return;
}



/* Address: 0x100bd6844 | FUN_100bd6844 */

void FUN_100bd6844(void)

{
  return;
}



/* Address: 0x100bd6850 | FUN_100bd6850 */

undefined1  [16] FUN_100bd6850(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined1 auVar4 [16];
  undefined8 local_18;
  
  pcVar3 = "com.apple.intents-service";
  uVar2 = 0xd00000000000001d;
  switch(param_1) {
  case 0:
    break;
  case 1:
    pcVar3 = "com.apple.ui-services";
    uVar2 = 0xd000000000000019;
    break;
  case 2:
    pcVar3 = "com.apple.share-services";
    uVar2 = 0xd000000000000015;
    break;
  case 3:
    pcVar3 = " hang tracking for extension: ";
    uVar2 = 0xd000000000000018;
    break;
  case 4:
    pcVar3 = "ngTrackingIntegration.swift";
    uVar2 = 0xd000000000000023;
    break;
  default:
    local_18 = param_1;
    Swift::__diagnoseUnexpectedEnumCaseValue
              (&DAT_100f3bf80,&local_18,&DAT_100f3bf80,PTR___type_metadata_for_Swift_Int_100eac6f8);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100bd6914);
    (*pcVar1)();
  }
  auVar4._8_8_ = (ulong)pcVar3 | 0x8000000000000000;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Address: 0x100bd6914 | thunk_FUN_100bd6918 */

void thunk_FUN_100bd6918(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101047e70 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9e4f8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9e4f8,&DAT_100f3bf80);
  DAT_101047e70 = pTVar1;
  return;
}



/* Address: 0x100bd6918 | FUN_100bd6918 */

void FUN_100bd6918(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101047e70 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9e4f8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9e4f8,&DAT_100f3bf80);
  DAT_101047e70 = pTVar1;
  return;
}



/* Address: 0x100bd6958 | FUN_100bd6958 */

undefined1  [16] FUN_100bd6958(void)

{
  return ZEXT816(0x100f3bf80);
}



/* Address: 0x100bd6968 | FUN_100bd6968 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100bd6968(void)

{
  long lVar1;
  code *pcVar2;
  ID self;
  ulong uVar3;
  undefined8 uVar4;
  long unaff_x20;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auStack_78 [24];
  
  self = _objc_msgSend((ID)&_OBJC_CLASS___NSNotificationCenter,"defaultCenter");
  lVar1 = _TtC6Sentry23SentryBreadcrumbTracker::notificationObservers;
  FUN_100b80d44(unaff_x20 + _TtC6Sentry23SentryBreadcrumbTracker::notificationObservers,auStack_78,1
               );
  uVar5 = *(ulong *)(unaff_x20 + lVar1);
  uVar3 = uVar5;
  thunk_FUN_100b6cd50();
  if (uVar3 != 0) {
    if ((long)uVar3 < 1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100bd6aa4);
      (*pcVar2)();
    }
    _swift_bridgeObjectRetain(uVar5);
    uVar6 = 0;
    do {
      if ((uVar5 & 0xc000000000000001) == 0) {
        uVar7 = *(ulong *)(uVar5 + uVar6 * 8 + 0x20);
        _swift_unknownObjectRetain(uVar7);
      }
      else {
        uVar7 = uVar6;
        FUN_100b6d72c(uVar6,uVar5);
      }
      uVar6 = uVar6 + 1;
      _objc_msgSend(self,"removeObserver:",uVar7);
      _swift_unknownObjectRelease(uVar7);
    } while (uVar3 != uVar6);
    _swift_bridgeObjectRelease(uVar5);
  }
  uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined **)(unaff_x20 + lVar1) = PTR___swiftEmptyArrayStorage_100eae0d8;
  _swift_bridgeObjectRelease(uVar4);
  _swift_unknownObjectWeakAssign(unaff_x20 + _TtC6Sentry23SentryBreadcrumbTracker::delegate,0);
  FUN_100bd6d90(FUN_100bd751c);
  FUN_100b6faa8();
  return;
}



/* Address: 0x100bd6aa4 | FUN_100bd6aa4 */

void FUN_100bd6aa4(undefined1 param_1)

{
  long unaff_x20;
  
  _swift_getObjectType();
  _swift_unknownObjectWeakInit(unaff_x20 + _TtC6Sentry23SentryBreadcrumbTracker::delegate,0);
  *(undefined **)(unaff_x20 + _TtC6Sentry23SentryBreadcrumbTracker::notificationObservers) =
       PTR___swiftEmptyArrayStorage_100eae0d8;
  *(undefined1 *)(unaff_x20 + _TtC6Sentry23SentryBreadcrumbTracker::reportAccessibilityIdentifier) =
       param_1;
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffc0,"init");
  return;
}



/* Address: 0x100bd6b24 | _TtC6Sentry23SentryBreadcrumbTracker::initReportAccessibilityIdentifier: */

/* Function Stack Size: 0x14 bytes */

ID _TtC6Sentry23SentryBreadcrumbTracker::initReportAccessibilityIdentifier_
             (ID param_1,SEL param_2,bool param_3)

{
  ID IVar1;
  
  IVar1 = (ID)param_3;
  FUN_100bd6aa4();
  return IVar1;
}



/* Address: 0x100bd6b48 | FUN_100bd6b48 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100bd6b48(void)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  _swift_getObjectType();
  lVar1 = 0;
  FUN_100b78b14();
  FUN_100b75404();
  FUN_100b80d44(lVar1 + _TtC6Sentry25SentryDependencyContainer::reachability,auStack_48,0);
  FUN_100b6f868();
  FUN_100bd751c();
  FUN_100b6fce4();
  FUN_100b6faa8();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffa8,"dealloc");
  return;
}



/* Address: 0x100bd6bf0 | _TtC6Sentry23SentryBreadcrumbTracker::dealloc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry23SentryBreadcrumbTracker::dealloc(ID param_1,SEL param_2)

{
  FUN_100bd6b48(param_1);
  return;
}



/* Address: 0x100bd6c14 | _TtC6Sentry23SentryBreadcrumbTracker::.cxx_destruct */

/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry23SentryBreadcrumbTracker::_cxx_destruct(ID param_1,SEL param_2)

{
  FUN_1001683a4(param_1 + delegate);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + notificationObservers));
  return;
}



/* Address: 0x100bd6c4c | FUN_100bd6c4c */

void FUN_100bd6c4c(void)

{
  undefined8 uVar1;
  ID self;
  long unaff_x20;
  
  FUN_100bd762c(0);
  uVar1 = 2;
  FUN_100bd7260(2,0x64657472617473,&DAT_e700000000000000);
  FUN_100bd7498(0x6775626564,&DAT_e500000000000000,uVar1,&PTR_s_setType__100f8a588);
  FUN_100bd7498(0xd000000000000013,0x8000000100dd0ea0,uVar1,&PTR_s_setMessage__100f89eb0);
  self = unaff_x20 + _TtC6Sentry23SentryBreadcrumbTracker::delegate;
  _swift_unknownObjectWeakLoadStrong();
  if (self != 0) {
    _objc_msgSend(self,"addBreadcrumb:",uVar1);
    FUN_100b6faa8();
    _swift_unknownObjectRelease(self);
    return;
  }
  FUN_100b78d38(uVar1);
  return;
}



/* Address: 0x100bd6d20 | FUN_100bd6d20 */

void FUN_100bd6d20(void)

{
  FUN_100bd6d90(FUN_100bd7694);
  return;
}



/* Address: 0x100bd6d2c | _TtC6Sentry23SentryBreadcrumbTracker::startWithDelegate: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry23SentryBreadcrumbTracker::startWithDelegate_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = param_3;
  _swift_getObjectType(param_3);
  _swift_unknownObjectRetain(param_3);
  FUN_100bd79cc(param_3,param_1,IVar1);
  _swift_unknownObjectRelease(param_3);
  return;
}



/* Address: 0x100bd6d90 | FUN_100bd6d90 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100bd6d90(code *param_1)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = 0;
  FUN_100b78b14();
  FUN_100b75404();
  FUN_100b80d44(lVar1 + _TtC6Sentry25SentryDependencyContainer::reachability,auStack_48,0);
  FUN_100b6f868();
  (*param_1)();
  FUN_100b6fce4();
  FUN_100b78c90();
  return;
}



/* Address: 0x100bd6e04 | _TtC6Sentry23SentryBreadcrumbTracker::stop */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry23SentryBreadcrumbTracker::stop(ID param_1,SEL param_2)

{
  FUN_100bd6968(param_1);
  return;
}



/* Address: 0x100bd6e2c | FUN_100bd6e2c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100bd6e2c(void)

{
  undefined *puVar1;
  long lVar2;
  void *pvVar3;
  void *pvVar4;
  ID IVar5;
  ID IVar6;
  char *op;
  undefined **op_00;
  ulong uVar7;
  long unaff_x20;
  long lVar8;
  undefined *local_a0;
  undefined8 local_98;
  code *local_80;
  void *local_78;
  
  op_00 = &local_a0;
  op = "defaultCenter";
  pvVar3 = (void *)_objc_msgSend((ID)&_OBJC_CLASS___NSNotificationCenter,"defaultCenter");
  FUN_100bd7aec();
  pvVar4 = pvVar3;
  FUN_100bd7b14();
  puVar1 = PTR___NSConcreteStackBlock_100ea82a0;
  local_80 = FUN_100bd7a60;
  local_a0 = PTR___NSConcreteStackBlock_100ea82a0;
  local_98 = 0x42000000;
  local_78 = pvVar3;
  FUN_100bd7b20(&UNK_100f3c038);
  pvVar3 = local_78;
  _swift_release();
  FUN_100bd7afc();
  IVar5 = _objc_msgSend((ID)pvVar3,op);
  __Block_release(pvVar4);
  FUN_100b6f868();
  lVar2 = _TtC6Sentry23SentryBreadcrumbTracker::notificationObservers;
  FUN_100b80d44(unaff_x20 + _TtC6Sentry23SentryBreadcrumbTracker::notificationObservers,&local_a0,
                0x21);
  _swift_unknownObjectRetain(IVar5);
  FUN_100b93998();
  pvVar3 = *(void **)((*(ulong *)(unaff_x20 + lVar2) & 0xffffffffffffff8) + 0x10);
  pvVar4 = pvVar3;
  FUN_100b93bfc();
  uVar7 = *(ulong *)(unaff_x20 + lVar2) & 0xffffffffffffff8;
  *(long *)(uVar7 + 0x10) = (long)pvVar3 + 1;
  *(ID *)(uVar7 + (long)pvVar3 * 8 + 0x20) = IVar5;
  FUN_100bd7b2c();
  FUN_100bd7aec();
  pvVar3 = pvVar4;
  FUN_100bd7b14();
  local_80 = FUN_100bd7aa0;
  local_a0 = puVar1;
  local_98 = 0x42000000;
  local_78 = pvVar4;
  FUN_100bd7b20(&UNK_100f3c060);
  pvVar4 = local_78;
  _swift_release();
  FUN_100bd7afc();
  IVar6 = _objc_msgSend((ID)pvVar4,(SEL)op_00);
  __Block_release(pvVar3);
  FUN_100b6f868();
  FUN_100b80d44(unaff_x20 + lVar2,&local_a0,0x21);
  _swift_unknownObjectRetain(IVar6);
  FUN_100b93998();
  lVar8 = *(long *)((*(ulong *)(unaff_x20 + lVar2) & 0xffffffffffffff8) + 0x10);
  FUN_100b93bfc(lVar8);
  uVar7 = *(ulong *)(unaff_x20 + lVar2) & 0xffffffffffffff8;
  *(long *)(uVar7 + 0x10) = lVar8 + 1;
  *(ID *)(uVar7 + lVar8 * 8 + 0x20) = IVar6;
  FUN_100bd7b2c();
  _swift_unknownObjectRelease(IVar6);
  _swift_unknownObjectRelease(IVar5);
  return;
}



/* Address: 0x100bd7078 | FUN_100bd7078 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100bd7078(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                ID param_5)

{
  NSString *pNVar1;
  NSString *pNVar2;
  ID self;
  long unaff_x20;
  
  FUN_100bd762c(0);
  _swift_bridgeObjectRetain(param_4);
  FUN_100bd7260(param_5,param_3,param_4);
  FUN_100bd74e0(param_1,param_2,param_5);
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _objc_msgSend(param_5,"setDataValue:forKey:",pNVar1,pNVar2);
  self = unaff_x20 + _TtC6Sentry23SentryBreadcrumbTracker::delegate;
  _swift_unknownObjectWeakLoadStrong();
  if (self != 0) {
    _objc_msgSend(self,"addBreadcrumb:",param_5);
    _swift_unknownObjectRelease(self);
    return self;
  }
  return 0;
}



/* Address: 0x100bd71bc | FUN_100bd71bc */

void FUN_100bd71bc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_48 [24];
  
  FUN_100b80d44(param_2 + 0x10,auStack_48,0);
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 != 0) {
    FUN_100bd7078(0x697461676976616e,0xea00000000006e6f,0x6566696c2e707061,0xed0000656c637963,2,
                  0x6574617473,&DAT_e500000000000000,param_3,param_4);
    FUN_100b6f868();
  }
  FUN_100b78c90();
  return;
}



/* Address: 0x100bd7260 | FUN_100bd7260 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100bd7260(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  NSString *pNVar1;
  ID IVar2;
  ID unaff_x20;
  
  _swift_getObjCClassFromMetadata();
  _objc_allocWithZone();
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_3);
  IVar2 = _objc_msgSend(unaff_x20,"initWithLevel:category:",param_1,pNVar1);
  return IVar2;
}



/* Address: 0x100bd72dc | FUN_100bd72dc */

void FUN_100bd72dc(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("Sentry.SentryBreadcrumbTracker",0x1e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100bd7308);
  (*pcVar1)();
}



/* Address: 0x100bd7308 | _TtC6Sentry23SentryBreadcrumbTracker::init */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

ID __thiscall
_TtC6Sentry23SentryBreadcrumbTracker::init
          (_TtC6Sentry23SentryBreadcrumbTracker *this,ID param_1,SEL param_2)

{
  ID self;
  NSString *pNVar1;
  NSString *pNVar2;
  _TtC6Sentry23SentryBreadcrumbTracker *self_00;
  
  FUN_100bd72dc();
  FUN_100bd762c(0);
  self = 2;
  FUN_100bd7260(2,0xd000000000000013,0x8000000100dd0ce0);
  FUN_100bd7498(0x697463656e6e6f63,0xec00000079746976,self,&PTR_s_setType__100f8a588);
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _objc_msgSend(self,"setDataValue:forKey:",pNVar1,pNVar2);
  FUN_100b6fce4(0);
  self_00 = this + delegate;
  _swift_unknownObjectWeakLoadStrong();
  if (self_00 != (_TtC6Sentry23SentryBreadcrumbTracker *)0x0) {
    _objc_msgSend((ID)self_00,"addBreadcrumb:",self);
    FUN_100b6f868();
    _swift_unknownObjectRelease();
    return (ID)self_00;
  }
  return 0;
}



/* Address: 0x100bd7314 | FUN_100bd7314 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100bd7314(void)

{
  ID self;
  NSString *pNVar1;
  NSString *pNVar2;
  ID self_00;
  long unaff_x20;
  
  FUN_100bd762c(0);
  self = 2;
  FUN_100bd7260(2,0xd000000000000013,0x8000000100dd0ce0);
  FUN_100bd7498(0x697463656e6e6f63,0xec00000079746976,self,&PTR_s_setType__100f8a588);
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _objc_msgSend(self,"setDataValue:forKey:",pNVar1,pNVar2);
  FUN_100b6fce4(0);
  self_00 = unaff_x20 + _TtC6Sentry23SentryBreadcrumbTracker::delegate;
  _swift_unknownObjectWeakLoadStrong();
  if (self_00 != 0) {
    _objc_msgSend(self_00,"addBreadcrumb:",self);
    FUN_100b6f868();
    _swift_unknownObjectRelease(self_00);
    return self_00;
  }
  return 0;
}



/* Address: 0x100bd7438 | _TtC6Sentry23SentryBreadcrumbTracker::connectivityChanged:typeDescription: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x1c bytes */

void _TtC6Sentry23SentryBreadcrumbTracker::connectivityChanged_typeDescription_
               (ID param_1,SEL param_2,bool param_3,ID param_4)

{
  String SVar1;
  
  SVar1 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  FUN_100bd7314(0,SVar1.str,SVar1.bridgeObject);
  _swift_bridgeObjectRelease(SVar1.bridgeObject);
  return;
}



/* Address: 0x100bd7498 | FUN_100bd7498 */

void FUN_100bd7498(undefined8 param_1,undefined8 param_2,ID param_3,undefined8 *param_4)

{
  NSString *pNVar1;
  
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_2);
  _objc_msgSend(param_3,(SEL)*param_4,pNVar1);
  FUN_100b78d38(pNVar1);
  return;
}



/* Address: 0x100bd74e0 | FUN_100bd74e0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100bd74e0(undefined8 param_1,undefined8 param_2,ID param_3)

{
  NSString *pNVar1;
  
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _objc_msgSend(param_3,"setType:",pNVar1);
  return 0;
}



/* Address: 0x100bd751c | FUN_100bd751c */

void FUN_100bd751c(undefined8 param_1,undefined *param_2,char *param_3,void *param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  _StringGuts _Var3;
  String SVar4;
  String SVar5;
  undefined1 auStack_80 [16];
  undefined8 local_70;
  undefined *puStack_68;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  _Var3.unknown = param_2;
  FUN_100b84dac(0);
  local_50 = 0;
  uStack_48 = 0xe000000000000000;
  Swift::_StringGuts::grow(0x15,_Var3);
  SVar4.bridgeObject = (void *)0x8000000100dd0ec0;
  SVar4.str = (char *)0xd000000000000013;
  SVar5.bridgeObject = param_4;
  SVar5.str = param_3;
  Swift::String::append(SVar4,SVar5);
  puVar2 = &DAT_101047eb8;
  local_58 = param_1;
  FUN_100b6730c(&DAT_101047eb8);
  Swift::__print_unlocked
            (&local_58,&local_50,puVar2,
             PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
             PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
            );
  uVar1 = uStack_48;
  FUN_100b84df8(1,local_50,uStack_48,0xd00000000000005e,0x8000000100dd0da0,0x52);
  _swift_bridgeObjectRelease(uVar1);
  local_70 = param_1;
  puStack_68 = param_2;
  FUN_100bdc17c(FUN_100bd7acc,auStack_80);
  return;
}



/* Address: 0x100bd762c | FUN_100bd762c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_100bd762c(void)

{
  class_t *pcVar1;
  
  if (DAT_101047b30 == (class_t *)0x0) {
    pcVar1 = &objc::class_t::SentryBreadcrumb;
    _swift_getObjCClassMetadata();
    DAT_101047b30 = pcVar1;
  }
  return;
}



/* Address: 0x100bd7668 | FUN_100bd7668 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100bd7668(void)

{
  return ZEXT816(0x100fa4960);
}



/* Address: 0x100bd7688 | FUN_100bd7688 */

void FUN_100bd7688(undefined8 param_1,undefined8 param_2)

{
  _swift_lookUpClassMethod(param_1,param_2,&TargetClassDescriptor_100cd0210);
  return;
}



/* Address: 0x100bd7694 | FUN_100bd7694 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100bd7694(undefined8 param_1,undefined *param_2,char *param_3,void *param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ID IVar5;
  NWPathMonitor *pNVar6;
  _StringGuts _Var7;
  char *pcVar8;
  char *pcVar9;
  void *pvVar10;
  undefined8 uVar11;
  OS_dispatch_queue *queue;
  ID self;
  String SVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  undefined8 local_78;
  undefined8 local_70;
  char *pcStack_68;
  
  _Var7.unknown = param_2;
  FUN_100b84dac(0);
  local_70 = 0;
  pcStack_68 = (char *)0xe000000000000000;
  Swift::_StringGuts::grow(0x13,_Var7);
  SVar12.bridgeObject = (void *)0x8000000100dd0d80;
  SVar12.str = (char *)0xd000000000000011;
  SVar14.bridgeObject = param_4;
  SVar14.str = param_3;
  Swift::String::append(SVar12,SVar14);
  puVar4 = &DAT_101047eb8;
  local_78 = param_1;
  FUN_100b6730c(&DAT_101047eb8);
  puVar3 = 
  PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
  ;
  puVar2 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
  Swift::__print_unlocked
            (&local_78,&local_70,puVar4,
             PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
             PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
            );
  pcVar8 = pcStack_68;
  pvVar10 = (void *)0xd00000000000005e;
  pcVar9 = pcStack_68;
  FUN_100b84df8(1,local_70,pcStack_68,0xd00000000000005e,0x8000000100dd0da0,0x30);
  _swift_bridgeObjectRelease(pcVar8);
  self = *(ID *)(param_2 + _TtC6Sentry18SentryReachability::observersLock);
  pcVar8 = "lock";
  _objc_msgSend(self,"lock");
  local_70 = 0;
  pcStack_68 = (char *)0xe000000000000000;
  Swift::_StringGuts::grow(0x20,(_StringGuts)pcVar8);
  SVar13.bridgeObject = (void *)0x8000000100dd0e00;
  SVar13.str = (char *)0xd00000000000001e;
  SVar15.bridgeObject = pvVar10;
  SVar15.str = pcVar9;
  Swift::String::append(SVar13,SVar15);
  local_78 = param_1;
  Swift::__print_unlocked(&local_78,&local_70,puVar4,puVar2,puVar3);
  pcVar8 = pcStack_68;
  FUN_100b84df8(1,local_70,pcStack_68,0xd00000000000005e,0x8000000100dd0da0,0x35);
  _swift_bridgeObjectRelease(pcVar8);
  lVar1 = _TtC6Sentry18SentryReachability::reachabilityObservers;
  IVar5 = _objc_msgSend(*(ID *)(param_2 + _TtC6Sentry18SentryReachability::reachabilityObservers),
                        "containsObject:",param_1);
  if ((int)IVar5 == 0) {
    _objc_msgSend(*(ID *)(param_2 + lVar1),"addObject:",param_1);
    IVar5 = _objc_msgSend(*(ID *)(param_2 + lVar1),"count");
    if ((long)IVar5 < 2) {
      param_2[_TtC6Sentry18SentryReachability::currentConnectivity] = 2;
      pNVar6 = Network::NWPathMonitor::typeMetadataAccessor();
      _swift_allocObject(pNVar6,*(undefined4 *)(pNVar6 + 0x30),*(undefined2 *)(pNVar6 + 0x34));
      Network::NWPathMonitor::init(pNVar6);
      FUN_100bed76c();
      lVar1 = _TtC6Sentry18SentryReachability::pathMonitor;
      pNVar6 = *(NWPathMonitor **)(param_2 + _TtC6Sentry18SentryReachability::pathMonitor);
      if (pNVar6 != (NWPathMonitor *)0x0) {
        puVar4 = &DAT_100f3bff8;
        _swift_allocObject(&DAT_100f3bff8,0x18,7);
        *(undefined **)(puVar4 + 0x10) = param_2;
        _swift_retain(pNVar6);
        FUN_100011128(FUN_100bd7a34,puVar4);
        Network::NWPathMonitor::_set_pathUpdateHandler(pNVar6);
        _swift_release(pNVar6);
        _swift_release(puVar4);
        pNVar6 = *(NWPathMonitor **)(param_2 + lVar1);
        if (pNVar6 != (NWPathMonitor *)0x0) {
          queue = *(OS_dispatch_queue **)
                   (param_2 + _TtC6Sentry18SentryReachability::reachabilityQueue);
          _swift_retain(pNVar6);
          Network::NWPathMonitor::start(pNVar6,queue);
          _swift_release(pNVar6);
        }
      }
      goto LAB_100bd78c8;
    }
    pcVar8 = "More than one observer added. Doing nothing.";
    lVar1 = -0x32;
    uVar11 = 0x3f;
  }
  else {
    pcVar8 = "Observer already added. Doing nothing.";
    lVar1 = -0x38;
    uVar11 = 0x38;
  }
  FUN_100b84df8(1,lVar1 + -0x2fffffffffffffa2,(ulong)(pcVar8 + -0x20) | 0x8000000000000000,
                0xd00000000000005e,0x8000000100dd0da0,uVar11);
LAB_100bd78c8:
  _objc_msgSend(self,"unlock");
  return;
}



/* Address: 0x100bd79cc | FUN_100bd79cc */

void FUN_100bd79cc(undefined8 param_1,long param_2)

{
  _swift_unknownObjectWeakAssign(param_2 + _TtC6Sentry23SentryBreadcrumbTracker::delegate,param_1);
  FUN_100bd6c4c();
  FUN_100bd6e2c();
  FUN_100bd6d90(FUN_100bd7694);
  return;
}



/* Address: 0x100bd7a10 | FUN_100bd7a10 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100bd7a10(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x100bd7a34 | FUN_100bd7a34 */

void FUN_100bd7a34(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100bed78c(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100bd7a3c | FUN_100bd7a3c */

void FUN_100bd7a3c(void)

{
  long unaff_x20;
  
  _swift_unknownObjectWeakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x100bd7a60 | FUN_100bd7a60 */

void FUN_100bd7a60(void)

{
  FUN_100bd71bc();
  return;
}



/* Address: 0x100bd7a88 | FUN_100bd7a88 */

void FUN_100bd7a88(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  _swift_retain(uVar1);
  return;
}



/* Address: 0x100bd7a98 | FUN_100bd7a98 */

void FUN_100bd7a98(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x100bd7aa0 | FUN_100bd7aa0 */

void FUN_100bd7aa0(void)

{
  FUN_100bd71bc();
  return;
}



/* Address: 0x100bd7acc | FUN_100bd7acc */

void FUN_100bd7acc(void)

{
  long unaff_x20;
  
  FUN_100bed7bc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100bd7ae4 | thunk_FUN_100bd7a88 */

void thunk_FUN_100bd7a88(void)

{
  FUN_100bd7a88();
  return;
}



/* Address: 0x100bd7ae8 | thunk_FUN_100bd7a98 */

void thunk_FUN_100bd7a98(void)

{
  FUN_100bd7a98();
  return;
}



/* Address: 0x100bd7aec | FUN_100bd7aec */

void FUN_100bd7aec(void)

{
  _swift_allocObject();
  return;
}



/* Address: 0x100bd7afc | FUN_100bd7afc */

void FUN_100bd7afc(void)

{
  return;
}



/* Address: 0x100bd7b14 | FUN_100bd7b14 */

void FUN_100bd7b14(long param_1)

{
  _swift_unknownObjectWeakInit(param_1 + 0x10);
  return;
}



/* Address: 0x100bd7b20 | FUN_100bd7b20 */

void FUN_100bd7b20(undefined8 param_1)

{
  undefined8 uStack0000000000000018;
  
  uStack0000000000000018 = param_1;
  __Block_copy(&stack0x00000000);
  return;
}



/* Address: 0x100bd7b2c | FUN_100bd7b2c */

void FUN_100bd7b2c(void)

{
  undefined8 in_x9;
  long unaff_x19;
  long unaff_x25;
  
  *(undefined8 *)(unaff_x19 + unaff_x25) = in_x9;
  _swift_endAccess();
  return;
}



/* Address: 0x100bd7b38 | FUN_100bd7b38 */

void FUN_100bd7b38(code *param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  long param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  __int64 _Var5;
  ContiguousArray<undefined> CVar6;
  ContiguousArray CVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  long lVar10;
  long extraout_x8;
  long lVar11;
  long extraout_x8_00;
  long extraout_x9;
  long extraout_x9_00;
  undefined8 unaff_x20;
  long unaff_x21;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined *local_88 [5];
  
  lVar10 = *(long *)(param_5 + -8);
  lVar4 = param_6;
  FUN_100bc8078();
  lVar11 = extraout_x9 - extraout_x8;
  lVar3 = 0;
  _swift_getAssociatedTypeWitness(0,*(undefined8 *)(lVar4 + 8));
  lVar13 = *(long *)(lVar3 + -8);
  lVar12 = lVar11 - (*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100bc8078(*(undefined8 *)(param_4 + -8));
  lVar3 = extraout_x9_00 - extraout_x8_00;
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_6,param_3,
             PTR___protocol_requirements_base_descriptor_for_Swift_Collection_100eac828,
             PTR___associated_type_descriptor_for_Swift_Collection_Index_100eabcf0);
  lVar4 = lVar3 - (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  _Var5 = Swift::Collection::get_count();
  if (_Var5 == 0) {
    Swift::Array<undefined>::_allocateUninitialized(0,param_4);
  }
  else {
    CVar6 = Swift::ContiguousArray::init();
    CVar7 = Swift::ContiguousArray::typeMetadataAccessor();
    Swift::ContiguousArray::reserveCapacity(_Var5,CVar7);
    Swift::Collection::_get_startIndex();
    if (_Var5 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100bd7dec);
      (*pcVar2)();
    }
    lVar14 = 0;
    do {
      lVar1 = lVar14 + 1;
      if (SCARRY8(lVar14,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100bd7de8);
        (*pcVar2)();
      }
      ppuVar8 = local_88;
      __dispatch_thunk_of_Swift_Collection_subscript_read____A_Index___>_A_Element
                (ppuVar8,lVar4,param_3,param_6);
      (**(code **)(lVar13 + 0x10))(lVar12);
      (*(code *)ppuVar8)(local_88,0);
      (*param_1)(lVar3,lVar12,lVar11);
      if (unaff_x21 != 0) {
        FUN_100bd8924();
        FUN_100bd8934();
        _swift_release(CVar6.unknown);
        (**(code **)(lVar10 + 0x20))(param_8,lVar11,param_5);
        return;
      }
      FUN_100bd8924();
      Swift::ContiguousArray::append(lVar3,CVar7.unknown);
      Swift::Collection::_formIndex();
      lVar14 = lVar14 + 1;
    } while (lVar1 != _Var5);
    Swift::__expectEnd(unaff_x20,lVar4,param_3,param_6);
    FUN_100bd8934();
    puVar9 = PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__Sequence_100ead130;
    local_88[0] = CVar6.unknown;
    _swift_getWitnessTable
              (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__Sequence_100ead130,CVar7.unknown
              );
    Swift::Array<undefined>::_init(local_88,param_4,CVar7.unknown,puVar9);
  }
  return;
}



/* Address: 0x100bd7dec | FUN_100bd7dec */

void FUN_100bd7dec(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  *(undefined1 *)(param_1 + 2) = 0;
  _swift_bridgeObjectRetain(param_3);
  return;
}



/* Address: 0x100bd7dfc | FUN_100bd7dfc */

void FUN_100bd7dfc(void)

{
  undefined8 *unaff_x20;
  
  FUN_100bd7dec(*unaff_x20,unaff_x20[1]);
  return;
}



/* Address: 0x100bd7e04 | FUN_100bd7e04 */

void FUN_100bd7e04(ulong *param_1,ulong param_2)

{
  *param_1 = param_2 & 1;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Address: 0x100bd7e18 | FUN_100bd7e18 */

void FUN_100bd7e18(void)

{
  undefined1 *unaff_x20;
  
  FUN_100bd7e04(*unaff_x20);
  return;
}


