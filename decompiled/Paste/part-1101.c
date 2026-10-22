/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100b98374 | thunk_FUN_100b98378 */

void thunk_FUN_100b98378(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101045ff8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9b35c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9b35c,&DAT_100f38ea0);
  DAT_101045ff8 = pTVar1;
  return;
}



/* Address: 0x100b98378 | FUN_100b98378 */

void FUN_100b98378(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101045ff8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9b35c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9b35c,&DAT_100f38ea0);
  DAT_101045ff8 = pTVar1;
  return;
}



/* Address: 0x100b983b8 | FUN_100b983b8 */

void FUN_100b983b8(void)

{
  FUN_100b98184();
  return;
}



/* Address: 0x100b983cc | FUN_100b983cc */

int FUN_100b983cc(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0xffffffff;
  }
  else if ((param_2 < 0xfe) || (*(char *)((long)param_1 + 9) == '\0')) {
    uVar1 = *(byte *)(param_1 + 2) ^ 0xff;
    if (*(byte *)(param_1 + 2) < 3) {
      uVar1 = 0xffffffff;
    }
  }
  else {
    uVar1 = *param_1 + 0xfd;
  }
  return uVar1 + 1;
}



/* Address: 0x100b9840c | FUN_100b9840c */

undefined1  [16] FUN_100b9840c(void)

{
  return ZEXT816(0x100f38ea0);
}



/* Address: 0x100b9841c | FUN_100b9841c */

void FUN_100b9841c(char *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 2;
  if (0xfffeff < param_3 + 1) {
    uVar2 = 4;
  }
  if (param_3 + 1 >> 8 < 0xff) {
    uVar2 = 1;
  }
  uVar1 = 0;
  if (0xfe < param_3) {
    uVar1 = uVar2;
  }
  if (param_2 < 0xff) {
                    /* WARNING: Could not recover jumptable at 0x000100b98464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_100b98468 + (ulong)(byte)(&DAT_100c9b355)[uVar1] * 4))();
    return;
  }
  *param_1 = (char)param_2 + '\x01';
                    /* WARNING: Could not recover jumptable at 0x000100b98498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_100b9849c + (ulong)(byte)(&DAT_100c9b350)[uVar1] * 4))();
  return;
}



/* Address: 0x100b984d8 | FUN_100b984d8 */

undefined1  [16] FUN_100b984d8(void)

{
  return ZEXT816(0x100f38f30);
}



/* Address: 0x100b984e8 | thunk_FUN_100b984ec */

void thunk_FUN_100b984ec(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101046000 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9b4e4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9b4e4,&DAT_100f38f30);
  DAT_101046000 = pTVar1;
  return;
}



/* Address: 0x100b984ec | FUN_100b984ec */

void FUN_100b984ec(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101046000 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9b4e4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9b4e4,&DAT_100f38f30);
  DAT_101046000 = pTVar1;
  return;
}



/* Address: 0x100b9852c | thunk_FUN_100b98530 */

void thunk_FUN_100b98530(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101046008 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9b444;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9b444,&DAT_100f38f30);
  DAT_101046008 = pTVar1;
  return;
}



/* Address: 0x100b98530 | FUN_100b98530 */

void FUN_100b98530(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101046008 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9b444;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9b444,&DAT_100f38f30);
  DAT_101046008 = pTVar1;
  return;
}



/* Address: 0x100b98570 | thunk_FUN_100b98574 */

void thunk_FUN_100b98574(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101046010 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9b41c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9b41c,&DAT_100f38f30);
  DAT_101046010 = pTVar1;
  return;
}



/* Address: 0x100b98574 | FUN_100b98574 */

void FUN_100b98574(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101046010 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9b41c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9b41c,&DAT_100f38f30);
  DAT_101046010 = pTVar1;
  return;
}



/* Address: 0x100b985b4 | FUN_100b985b4 */

void FUN_100b985b4(void)

{
  Swift::KeyedEncodingContainer::_encode();
  return;
}



/* Address: 0x100b985c4 | FUN_100b985c4 */

void FUN_100b985c4(undefined8 param_1)

{
  FUN_100b69e08();
  FUN_100b991b0(param_1);
  return;
}



/* Address: 0x100b985f0 | _TtC6Sentry14SentryAppState::releaseName */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry14SentryAppState::releaseName(ID param_1,SEL param_2)

{
  FUN_100b98770(param_1,param_2,FUN_100b985fc);
  return param_1;
}



/* Address: 0x100b985fc | FUN_100b985fc */

void FUN_100b985fc(void)

{
  FUN_100b987c0(&_TtC6Sentry14SentryAppState::releaseName);
  return;
}



/* Address: 0x100b98608 | _TtC6Sentry14SentryAppState::setReleaseName: */

/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry14SentryAppState::setReleaseName_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100b98804();
  return;
}



/* Address: 0x100b98614 | FUN_100b98614 */

void FUN_100b98614(undefined8 param_1,undefined8 param_2)

{
  FUN_100b98874(param_1,param_2,&_TtC6Sentry14SentryAppState::releaseName);
  return;
}



/* Address: 0x100b98620 | _TtC6Sentry14SentryAppState::osVersion */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry14SentryAppState::osVersion(ID param_1,SEL param_2)

{
  NSString *pNVar1;
  
  FUN_100b98658();
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_2);
  return (ID)pNVar1;
}



/* Address: 0x100b98658 | FUN_100b98658 */

void FUN_100b98658(void)

{
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  FUN_100b78ca0(unaff_x20 + _TtC6Sentry14SentryAppState::osVersion,auStack_38);
  FUN_100b940e0();
  FUN_100b6f9fc();
  return;
}



/* Address: 0x100b98694 | _TtC6Sentry14SentryAppState::setOsVersion: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry14SentryAppState::setOsVersion_(ID param_1,SEL param_2,ID param_3)

{
  String SVar1;
  
  SVar1 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  FUN_100b986e8(SVar1.str,SVar1.bridgeObject);
  return;
}



/* Address: 0x100b986e8 | FUN_100b986e8 */

void FUN_100b986e8(void)

{
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  FUN_100b80d38(unaff_x20 + _TtC6Sentry14SentryAppState::osVersion,auStack_48);
  FUN_100b9a1e4();
  FUN_100b78c90();
  return;
}



/* Address: 0x100b98728 | FUN_100b98728 */

void FUN_100b98728(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  _swift_bridgeObjectRetain(uVar2);
  FUN_100b986e8(uVar1,uVar2);
  return;
}



/* Address: 0x100b98764 | _TtC6Sentry14SentryAppState::vendorId */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry14SentryAppState::vendorId(ID param_1,SEL param_2)

{
  FUN_100b98770(param_1,param_2,FUN_100b987b4);
  return param_1;
}



/* Address: 0x100b98770 | FUN_100b98770 */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

NSString * FUN_100b98770(undefined8 param_1,long param_2,code *param_3)

{
  NSString *pNVar1;
  
  (*param_3)();
  if (param_2 == 0) {
    pNVar1 = (NSString *)0x0;
  }
  else {
    pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(param_2);
  }
  return pNVar1;
}



/* Address: 0x100b987b4 | FUN_100b987b4 */

void FUN_100b987b4(void)

{
  FUN_100b987c0(&_TtC6Sentry14SentryAppState::vendorId);
  return;
}



/* Address: 0x100b987c0 | FUN_100b987c0 */

void FUN_100b987c0(long *param_1)

{
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  FUN_100b78ca0(unaff_x20 + *param_1,auStack_38);
  FUN_100b940e0();
  FUN_100b6f9fc();
  return;
}



/* Address: 0x100b987f8 | _TtC6Sentry14SentryAppState::setVendorId: */

/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry14SentryAppState::setVendorId_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100b98804();
  return;
}



/* Address: 0x100b98804 | FUN_100b98804 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b98804(undefined8 param_1,undefined8 param_2,long param_3,code *param_4)

{
  String SVar1;
  
  if (param_3 == 0) {
    SVar1 = (String)ZEXT816(0);
  }
  else {
    SVar1 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  (*param_4)(SVar1.str,SVar1.bridgeObject);
  return 0;
}



/* Address: 0x100b98868 | FUN_100b98868 */

void FUN_100b98868(undefined8 param_1,undefined8 param_2)

{
  FUN_100b98874(param_1,param_2,&_TtC6Sentry14SentryAppState::vendorId);
  return;
}



/* Address: 0x100b98874 | FUN_100b98874 */

void FUN_100b98874(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  FUN_100b80d38(unaff_x20 + *param_3,auStack_48);
  FUN_100b9a1e4();
  FUN_100b78c90();
  return;
}



/* Address: 0x100b988b0 | FUN_100b988b0 */

void FUN_100b988b0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *in_x4;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  _swift_bridgeObjectRetain(uVar2);
  (*in_x4)(uVar1,uVar2);
  return;
}



/* Address: 0x100b988f0 | _TtC6Sentry14SentryAppState::isDebugging */

/* Function Stack Size: 0x10 bytes */

bool _TtC6Sentry14SentryAppState::isDebugging(ID param_1,SEL param_2)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  FUN_100b98914();
  return uVar1 & 1;
}



/* Address: 0x100b98914 | FUN_100b98914 */

void FUN_100b98914(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _TtC6Sentry14SentryAppState::isDebugging;
  FUN_100b78ca0(unaff_x20 + _TtC6Sentry14SentryAppState::isDebugging,auStack_38);
  FUN_100b6f9fc(*(undefined1 *)(unaff_x20 + lVar1));
  return;
}



/* Address: 0x100b98944 | _TtC6Sentry14SentryAppState::setIsDebugging: */

/* Function Stack Size: 0x14 bytes */

void _TtC6Sentry14SentryAppState::setIsDebugging_(ID param_1,SEL param_2,bool param_3)

{
  FUN_100b98968(param_3);
  return;
}



/* Address: 0x100b98968 | FUN_100b98968 */

void FUN_100b98968(void)

{
  long lVar1;
  undefined1 unaff_w19;
  long unaff_x20;
  
  FUN_100b78d24();
  lVar1 = _TtC6Sentry14SentryAppState::isDebugging;
  FUN_100b78c6c();
  *(undefined1 *)(unaff_x20 + lVar1) = unaff_w19;
  FUN_100b78c90();
  return;
}



/* Address: 0x100b98994 | _TtC6Sentry14SentryAppState::systemBootTimestamp */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry14SentryAppState::systemBootTimestamp(ID param_1,SEL param_2)

{
  Date DVar1;
  Date DVar2;
  NSDate *pNVar3;
  long lVar4;
  long lVar5;
  
  DVar1 = Foundation::Date::typeMetadataAccessor();
  lVar5 = *(long *)(DVar1.unknown + -8);
  lVar4 = *(long *)(lVar5 + 0x40);
  DVar2 = DVar1;
  FUN_100b98a0c(&stack0xffffffffffffffd0 + -(lVar4 + 0xfU & 0xfffffffffffffff0));
  pNVar3 = Foundation::Date::_bridgeToObjectiveC(DVar2);
  (**(code **)(lVar5 + 8))
            (&stack0xffffffffffffffd0 + -(lVar4 + 0xfU & 0xfffffffffffffff0),DVar1.unknown);
  return (ID)pNVar3;
}



/* Address: 0x100b98a0c | FUN_100b98a0c */

void FUN_100b98a0c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _TtC6Sentry14SentryAppState::systemBootTimestamp;
  lVar2 = unaff_x20 + _TtC6Sentry14SentryAppState::systemBootTimestamp;
  FUN_100b78ca0(lVar2,auStack_48);
  FUN_100b7982c();
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,unaff_x20 + lVar1,lVar2);
  FUN_100b78c90();
  return;
}



/* Address: 0x100b98a5c | _TtC6Sentry14SentryAppState::setSystemBootTimestamp: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry14SentryAppState::setSystemBootTimestamp_(ID param_1,SEL param_2,ID param_3)

{
  Date DVar1;
  long lVar2;
  
  DVar1 = Foundation::Date::typeMetadataAccessor();
  lVar2 = *(long *)(*(long *)(DVar1.unknown + -8) + 0x40);
  Foundation::Date::__unconditionallyBridgeFromObjectiveC((Date)param_3);
  FUN_100b98ad4(&stack0xffffffffffffffd0 + -(lVar2 + 0xfU & 0xfffffffffffffff0));
  return;
}



/* Address: 0x100b98ad4 | FUN_100b98ad4 */

void FUN_100b98ad4(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _TtC6Sentry14SentryAppState::systemBootTimestamp;
  lVar2 = unaff_x20 + _TtC6Sentry14SentryAppState::systemBootTimestamp;
  _swift_beginAccess(lVar2,auStack_48,0x21,0);
  FUN_100b7982c();
  (**(code **)(*(long *)(lVar2 + -8) + 0x28))(unaff_x20 + lVar1,param_1,lVar2);
  _swift_endAccess(auStack_48);
  FUN_100b78c90();
  return;
}



/* Address: 0x100b98b34 | FUN_100b98b34 */

void FUN_100b98b34(undefined8 param_1)

{
  Date DVar1;
  long lVar2;
  
  DVar1 = Foundation::Date::typeMetadataAccessor();
  lVar2 = *(long *)(*(long *)(DVar1.unknown + -8) + 0x40);
  (**(code **)(*(long *)(DVar1.unknown + -8) + 0x10))
            (&stack0xffffffffffffffd0 + -(lVar2 + 0xfU & 0xfffffffffffffff0),param_1,DVar1.unknown);
  FUN_100b98ad4(&stack0xffffffffffffffd0 + -(lVar2 + 0xfU & 0xfffffffffffffff0));
  return;
}



/* Address: 0x100b98ba4 | _TtC6Sentry14SentryAppState::isActive */

/* Function Stack Size: 0x10 bytes */

bool _TtC6Sentry14SentryAppState::isActive(ID param_1,SEL param_2)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  FUN_100b98bc8();
  return uVar1 & 1;
}



/* Address: 0x100b98bc8 | FUN_100b98bc8 */

void FUN_100b98bc8(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _TtC6Sentry14SentryAppState::isActive;
  FUN_100b78ca0(unaff_x20 + _TtC6Sentry14SentryAppState::isActive,auStack_38);
  FUN_100b6f9fc(*(undefined1 *)(unaff_x20 + lVar1));
  return;
}



/* Address: 0x100b98bf8 | _TtC6Sentry14SentryAppState::setIsActive: */

/* Function Stack Size: 0x14 bytes */

void _TtC6Sentry14SentryAppState::setIsActive_(ID param_1,SEL param_2,bool param_3)

{
  FUN_100b98c1c(param_3);
  return;
}



/* Address: 0x100b98c1c | FUN_100b98c1c */

void FUN_100b98c1c(void)

{
  long lVar1;
  undefined1 unaff_w19;
  long unaff_x20;
  
  FUN_100b78d24();
  lVar1 = _TtC6Sentry14SentryAppState::isActive;
  FUN_100b78c6c();
  *(undefined1 *)(unaff_x20 + lVar1) = unaff_w19;
  FUN_100b78c90();
  return;
}



/* Address: 0x100b98c48 | FUN_100b98c48 */

void FUN_100b98c48(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = _TtC6Sentry14SentryAppState::isActive;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100b98c74 | _TtC6Sentry14SentryAppState::wasTerminated */

/* Function Stack Size: 0x10 bytes */

bool _TtC6Sentry14SentryAppState::wasTerminated(ID param_1,SEL param_2)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  FUN_100b98c98();
  return uVar1 & 1;
}



/* Address: 0x100b98c98 | FUN_100b98c98 */

void FUN_100b98c98(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _TtC6Sentry14SentryAppState::wasTerminated;
  FUN_100b78ca0(unaff_x20 + _TtC6Sentry14SentryAppState::wasTerminated,auStack_38);
  FUN_100b6f9fc(*(undefined1 *)(unaff_x20 + lVar1));
  return;
}



/* Address: 0x100b98cc8 | _TtC6Sentry14SentryAppState::setWasTerminated: */

/* Function Stack Size: 0x14 bytes */

void _TtC6Sentry14SentryAppState::setWasTerminated_(ID param_1,SEL param_2,bool param_3)

{
  FUN_100b98cec(param_3);
  return;
}



/* Address: 0x100b98cec | FUN_100b98cec */

void FUN_100b98cec(void)

{
  long lVar1;
  undefined1 unaff_w19;
  long unaff_x20;
  
  FUN_100b78d24();
  lVar1 = _TtC6Sentry14SentryAppState::wasTerminated;
  FUN_100b78c6c();
  *(undefined1 *)(unaff_x20 + lVar1) = unaff_w19;
  FUN_100b78c90();
  return;
}



/* Address: 0x100b98d18 | FUN_100b98d18 */

void FUN_100b98d18(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = _TtC6Sentry14SentryAppState::wasTerminated;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100b98d44 | _TtC6Sentry14SentryAppState::isANROngoing */

/* Function Stack Size: 0x10 bytes */

bool _TtC6Sentry14SentryAppState::isANROngoing(ID param_1,SEL param_2)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  FUN_100b98d68();
  return uVar1 & 1;
}



/* Address: 0x100b98d68 | FUN_100b98d68 */

void FUN_100b98d68(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _TtC6Sentry14SentryAppState::isANROngoing;
  FUN_100b78ca0(unaff_x20 + _TtC6Sentry14SentryAppState::isANROngoing,auStack_38);
  FUN_100b6f9fc(*(undefined1 *)(unaff_x20 + lVar1));
  return;
}



/* Address: 0x100b98d98 | _TtC6Sentry14SentryAppState::setIsANROngoing: */

/* Function Stack Size: 0x14 bytes */

void _TtC6Sentry14SentryAppState::setIsANROngoing_(ID param_1,SEL param_2,bool param_3)

{
  FUN_100b98dbc(param_3);
  return;
}



/* Address: 0x100b98dbc | FUN_100b98dbc */

void FUN_100b98dbc(void)

{
  long lVar1;
  undefined1 unaff_w19;
  long unaff_x20;
  
  FUN_100b78d24();
  lVar1 = _TtC6Sentry14SentryAppState::isANROngoing;
  FUN_100b78c6c();
  *(undefined1 *)(unaff_x20 + lVar1) = unaff_w19;
  FUN_100b78c90();
  return;
}



/* Address: 0x100b98de8 | FUN_100b98de8 */

void FUN_100b98de8(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = _TtC6Sentry14SentryAppState::isANROngoing;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100b98e14 | _TtC6Sentry14SentryAppState::isSDKRunning */

/* Function Stack Size: 0x10 bytes */

bool _TtC6Sentry14SentryAppState::isSDKRunning(ID param_1,SEL param_2)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  FUN_100b98e38();
  return uVar1 & 1;
}



/* Address: 0x100b98e38 | FUN_100b98e38 */

void FUN_100b98e38(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _TtC6Sentry14SentryAppState::isSDKRunning;
  FUN_100b78ca0(unaff_x20 + _TtC6Sentry14SentryAppState::isSDKRunning,auStack_38);
  FUN_100b6f9fc(*(undefined1 *)(unaff_x20 + lVar1));
  return;
}



/* Address: 0x100b98e68 | _TtC6Sentry14SentryAppState::setIsSDKRunning: */

/* Function Stack Size: 0x14 bytes */

void _TtC6Sentry14SentryAppState::setIsSDKRunning_(ID param_1,SEL param_2,bool param_3)

{
  FUN_100b98e8c(param_3);
  return;
}



/* Address: 0x100b98e8c | FUN_100b98e8c */

void FUN_100b98e8c(void)

{
  long lVar1;
  undefined1 unaff_w19;
  long unaff_x20;
  
  FUN_100b78d24();
  lVar1 = _TtC6Sentry14SentryAppState::isSDKRunning;
  FUN_100b78c6c();
  *(undefined1 *)(unaff_x20 + lVar1) = unaff_w19;
  FUN_100b78c90();
  return;
}



/* Address: 0x100b98eb8 | FUN_100b98eb8 */

void FUN_100b98eb8(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = _TtC6Sentry14SentryAppState::isSDKRunning;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100b98ee4 | FUN_100b98ee4 */

void FUN_100b98ee4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  FUN_100b6fd78();
  FUN_100b69e08();
  FUN_100b98f4c(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  FUN_100b56ea0();
  return;
}



/* Address: 0x100b98f4c | FUN_100b98f4c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100b98f4c(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ID IVar6;
  long lVar7;
  Date unaff_x20;
  long lVar8;
  double dVar9;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_4c;
  undefined8 local_48;
  undefined1 auStack_30 [24];
  undefined1 auStack_18 [24];
  
  FUN_100b6fd78();
  lVar5 = param_1;
  local_60 = param_5;
  uStack_58 = param_6;
  local_4c = param_7;
  local_48 = param_8;
  FUN_100b7982c();
  lVar8 = *(long *)(lVar5 + -8);
  lVar7 = *(long *)(lVar8 + 0x40);
  plVar1 = (long *)(unaff_x20.unknown + _TtC6Sentry14SentryAppState::releaseName);
  *plVar1 = 0;
  plVar1[1] = 0;
  puVar2 = (undefined8 *)(unaff_x20.unknown + _TtC6Sentry14SentryAppState::vendorId);
  *puVar2 = 0;
  puVar2[1] = 0;
  FUN_100b80d38(plVar1,auStack_18);
  *plVar1 = param_1;
  plVar1[1] = param_2;
  puVar3 = (undefined8 *)(unaff_x20.unknown + _TtC6Sentry14SentryAppState::osVersion);
  *puVar3 = param_3;
  puVar3[1] = param_4;
  FUN_100b80d38(puVar2,auStack_30);
  uVar4 = local_48;
  *puVar2 = local_60;
  puVar2[1] = uStack_58;
  unaff_x20.unknown[_TtC6Sentry14SentryAppState::isDebugging] = (char)local_4c;
  dVar9 = Foundation::Date::get_timeIntervalSince1970(unaff_x20);
  Foundation::Date::init((double)(long)dVar9);
  (**(code **)(lVar8 + 0x20))
            (unaff_x20.unknown + _TtC6Sentry14SentryAppState::systemBootTimestamp,
             (long)&local_60 - (lVar7 + 0xfU & 0xfffffffffffffff0),lVar5);
  unaff_x20.unknown[_TtC6Sentry14SentryAppState::isActive] = 0;
  unaff_x20.unknown[_TtC6Sentry14SentryAppState::wasTerminated] = 0;
  unaff_x20.unknown[_TtC6Sentry14SentryAppState::isANROngoing] = 0;
  unaff_x20.unknown[_TtC6Sentry14SentryAppState::isSDKRunning] = 1;
  FUN_100b6f934();
  FUN_100b99ea0();
  IVar6 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffc0,"init");
  (**(code **)(lVar8 + 8))(uVar4,lVar5);
  FUN_100b56ea0(IVar6);
  return;
}


