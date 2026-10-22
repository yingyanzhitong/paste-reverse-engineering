/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100be618c | FUN_100be618c */

void FUN_100be618c(void)

{
  undefined1 *unaff_x20;
  
  FUN_100bec8fc(*unaff_x20);
  return;
}



/* Address: 0x100be6194 | FUN_100be6194 */

void FUN_100be6194(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  FUN_100bec9b4(param_1,*unaff_x20);
  return;
}



/* Address: 0x100be619c | FUN_100be619c */

void FUN_100be619c(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  FUN_100bed664(param_1,*unaff_x20);
  return;
}



/* Address: 0x100be61a4 | FUN_100be61a4 */

void FUN_100be61a4(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_100be60c4(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Address: 0x100be61d0 | FUN_100be61d0 */

void FUN_100be61d0(ulong *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  byte *unaff_x20;
  
  uVar1 = (ulong)*unaff_x20;
  FUN_100be6120();
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}



/* Address: 0x100be61f8 | FUN_100be61f8 */

void FUN_100be61f8(void)

{
  undefined1 *unaff_x20;
  
  FUN_100be6120(*unaff_x20);
  return;
}



/* Address: 0x100be6200 | FUN_100be6200 */

void FUN_100be6200(undefined1 *param_1,undefined1 param_2)

{
  FUN_100be60c4();
  *param_1 = param_2;
  return;
}



/* Address: 0x100be6224 | FUN_100be6224 */

String FUN_100be6224(void)

{
  String SVar1;
  
  FUN_100be6324();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x100be624c | FUN_100be624c */

String FUN_100be624c(void)

{
  String SVar1;
  
  FUN_100be6324();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x100be6274 | FUN_100be6274 */

void FUN_100be6274(undefined8 param_1,undefined1 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 local_39;
  undefined1 local_38 [8];
  
  puVar1 = &DAT_101045580;
  FUN_100b6730c(&DAT_101045580);
  puVar2 = &DAT_101048538;
  local_39 = param_2;
  FUN_100b6730c(&DAT_101048538);
  puVar3 = puVar2;
  switchD_100b81688::caseD_d8();
  Swift::KeyedDecodingContainer::_decodeIfPresent(local_38,puVar1,&local_39,puVar2,puVar1,puVar3);
  return;
}



/* Address: 0x100be62fc | FUN_100be62fc */

void FUN_100be62fc(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x21;
  
  FUN_100be5d20();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Address: 0x100be6324 | FUN_100be6324 */

void FUN_100be6324(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101048540 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9f1b0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9f1b0,&DAT_100f3ca00);
  DAT_101048540 = pTVar1;
  return;
}



/* Address: 0x100be6364 | FUN_100be6364 */

void FUN_100be6364(void)

{
  long unaff_x20;
  
  FUN_100be6274(*(undefined8 *)(unaff_x20 + 0x10),0);
  return;
}



/* Address: 0x100be6380 | FUN_100be6380 */

void FUN_100be6380(void)

{
  long unaff_x20;
  
  FUN_100be6274(*(undefined8 *)(unaff_x20 + 0x10),1);
  return;
}



/* Address: 0x100be639c | FUN_100be639c */

void FUN_100be639c(char *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 2;
  if (0xfffeff < param_3 + 2) {
    uVar2 = 4;
  }
  if (param_3 + 2 >> 8 < 0xff) {
    uVar2 = 1;
  }
  uVar1 = 0;
  if (0xfd < param_3) {
    uVar1 = uVar2;
  }
  if (param_2 < 0xfe) {
                    /* WARNING: Could not recover jumptable at 0x000100be63e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_100be63e8 + (ulong)(byte)(&DAT_100c9f065)[uVar1] * 4))();
    return;
  }
  *param_1 = (char)param_2 + '\x02';
                    /* WARNING: Could not recover jumptable at 0x000100be6418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_100be641c + (ulong)(byte)(&UNK_100c9f060)[uVar1] * 4))();
  return;
}



/* Address: 0x100be6458 | FUN_100be6458 */

undefined1  [16] FUN_100be6458(void)

{
  return ZEXT816(0x100f3ca00);
}



/* Address: 0x100be6468 | thunk_FUN_100be646c */

void thunk_FUN_100be646c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101048550 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9f188;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9f188,&DAT_100f3ca00);
  DAT_101048550 = pTVar1;
  return;
}



/* Address: 0x100be646c | FUN_100be646c */

void FUN_100be646c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101048550 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9f188;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9f188,&DAT_100f3ca00);
  DAT_101048550 = pTVar1;
  return;
}



/* Address: 0x100be64ac | thunk_FUN_100be64b0 */

void thunk_FUN_100be64b0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101048558 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9f0e8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9f0e8,&DAT_100f3ca00);
  DAT_101048558 = pTVar1;
  return;
}



/* Address: 0x100be64b0 | FUN_100be64b0 */

void FUN_100be64b0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101048558 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9f0e8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9f0e8,&DAT_100f3ca00);
  DAT_101048558 = pTVar1;
  return;
}



/* Address: 0x100be64f0 | thunk_FUN_100be64f4 */

void thunk_FUN_100be64f4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101048560 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9f0c0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9f0c0,&DAT_100f3ca00);
  DAT_101048560 = pTVar1;
  return;
}



/* Address: 0x100be64f4 | FUN_100be64f4 */

void FUN_100be64f4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101048560 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9f0c0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9f0c0,&DAT_100f3ca00);
  DAT_101048560 = pTVar1;
  return;
}



/* Address: 0x100be6534 | FUN_100be6534 */

void FUN_100be6534(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *local_30;
  long local_28;
  
  local_30 = PTR___value_witness_table_for_Builtin_RawPointer_100eabd60 + 0x40;
  uVar2 = *(ulong *)(param_1 + 0x50);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    local_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initClassMetadata2(param_1,0,2,&local_30,param_1 + 0x58);
  }
  return;
}



/* Address: 0x100be65b4 | FUN_100be65b4 */

undefined1  [16] FUN_100be65b4(long param_1,long param_2,ulong param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auStack_58 [24];
  
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  _os_unfair_lock_lock(uVar4);
  FUN_100be67c8(param_1 + 0x18);
  lVar3 = *(long *)(param_1 + 0x18);
  if (*(long *)(lVar3 + 0x10) == 0) {
    uVar5 = 0;
    uVar6 = 0;
  }
  else {
    _swift_bridgeObjectRetain(param_3);
    _swift_bridgeObjectRetain(lVar3);
    uVar2 = param_3;
    FUN_100071370();
    if ((uVar2 & 1) == 0) {
      uVar5 = 0;
      uVar6 = 0;
    }
    else {
      puVar1 = (undefined8 *)(*(long *)(lVar3 + 0x38) + param_2 * 0x10);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      _swift_bridgeObjectRetain(uVar6);
    }
    _swift_bridgeObjectRelease(param_3);
    _swift_bridgeObjectRelease(lVar3);
  }
  _swift_endAccess(auStack_58);
  _os_unfair_lock_unlock(uVar4);
  _swift_bridgeObjectRelease(param_3);
  auVar7._8_8_ = uVar6;
  auVar7._0_8_ = uVar5;
  return auVar7;
}



/* Address: 0x100be6694 | FUN_100be6694 */

void FUN_100be6694(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_78 [24];
  undefined1 local_60 [16];
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _os_unfair_lock_lock(uVar1);
  FUN_100be67c8(param_1 + 0x18);
  FUN_100bcc1b8(local_60,param_1 + 0x18,param_2,param_3,param_4,param_5);
  _swift_endAccess(auStack_78);
  _os_unfair_lock_unlock(uVar1);
  _swift_bridgeObjectRelease(param_3);
  return;
}



/* Address: 0x100be6744 | FUN_100be6744 */

void FUN_100be6744(void)

{
  long lVar1;
  long *unaff_x20;
  
  lVar1 = *unaff_x20;
  _swift_slowDealloc(unaff_x20[2],0xffffffffffffffff,0xffffffffffffffff);
  (**(code **)(*(long *)(*(long *)(lVar1 + 0x50) + -8) + 8))
            ((long)unaff_x20 + *(long *)(*unaff_x20 + 0x60));
  return;
}



/* Address: 0x100be6790 | FUN_100be6790 */

void FUN_100be6790(void)

{
  FUN_100be6744();
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100be67b0 | FUN_100be67b0 */

void FUN_100be67b0(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100be67bc | FUN_100be67bc */

void FUN_100be67bc(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100be67c8 | FUN_100be67c8 */

void FUN_100be67c8(undefined8 param_1)

{
  _swift_beginAccess(param_1,&stack0x00000008,0x21,0);
  return;
}



/* Address: 0x100be67d8 | FUN_100be67d8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

ID FUN_100be67d8(undefined8 param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ID IVar2;
  void *aBlock;
  undefined *local_80;
  undefined8 local_78;
  code *local_70;
  undefined *puStack_68;
  undefined8 local_60;
  undefined8 local_58;
  
  IVar2 = _objc_msgSend((ID)&_OBJC_CLASS___NSThread,"isMainThread");
  if ((IVar2 & 1) == 0) {
    FUN_100b84dac(0);
    FUN_100be6d40(
                 "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Swift/Helper/SentryNSTimerFactory.swift"
                 );
    FUN_100be6d2c();
    FUN_100b84df8();
  }
  local_80 = PTR___NSConcreteStackBlock_100ea82a0;
  local_78 = 0x42000000;
  local_70 = FUN_100136224;
  puStack_68 = &DAT_100f3cb90;
  local_60 = param_3;
  local_58 = param_4;
  aBlock = __Block_copy(&local_80);
  uVar1 = local_58;
  _swift_retain(param_4);
  _swift_release(uVar1);
  IVar2 = _objc_msgSend((ID)&_OBJC_CLASS___NSTimer,"scheduledTimerWithTimeInterval:repeats:block:",
                        param_1,(ulong)(param_2 & 1),aBlock);
  __Block_release(aBlock);
  return IVar2;
}



/* Address: 0x100be6904 | FUN_100be6904 */

void FUN_100be6904(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  _swift_retain(uVar1);
  return;
}



/* Address: 0x100be6914 | FUN_100be6914 */

void FUN_100be6914(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x100be691c | _TtC6Sentry20SentryNSTimerFactory::scheduledTimerWithTimeInterval:repeats:block: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x24 bytes */

ID _TtC6Sentry20SentryNSTimerFactory::scheduledTimerWithTimeInterval_repeats_block_
             (ID param_1,SEL param_2,double param_3,bool param_4,ID param_5,undefined4 param_6)

{
  void *pvVar1;
  undefined *puVar2;
  ID IVar3;
  
  IVar3 = (ID)param_4;
  pvVar1 = __Block_copy((void *)param_5);
  puVar2 = &DAT_100f3cbc8;
  _swift_allocObject(&DAT_100f3cbc8,0x18,7);
  *(void **)(puVar2 + 0x10) = pvVar1;
  FUN_100be67d8(param_3,IVar3,FUN_100405dac,puVar2);
  _swift_release(puVar2);
  return IVar3;
}



/* Address: 0x100be69b4 | FUN_100be69b4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

ID FUN_100be69b4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,uint param_5)

{
  ID IVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 auStack_80 [24];
  long local_68;
  
  IVar1 = _objc_msgSend((ID)&_OBJC_CLASS___NSThread,"isMainThread");
  if ((IVar1 & 1) == 0) {
    FUN_100b84dac(0);
    FUN_100be6d40(
                 "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Swift/Helper/SentryNSTimerFactory.swift"
                 );
    FUN_100be6d2c();
    FUN_100b84df8();
  }
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  Swift::__bridgeAnythingToObjectiveC();
  FUN_10001a348(param_4,auStack_80);
  if (local_68 == 0) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    puVar2 = auStack_80;
    FUN_100004640(puVar2,local_68);
    lVar4 = *(long *)(local_68 + -8);
    puVar3 = auStack_80 + -(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar4 + 0x10))(puVar3,puVar2,local_68);
    puVar2 = puVar3;
    Swift::__bridgeAnythingToObjectiveC(puVar3,local_68);
    (**(code **)(lVar4 + 8))(puVar3,local_68);
    FUN_100004594(auStack_80);
  }
  IVar1 = _objc_msgSend((ID)&_OBJC_CLASS___NSTimer,
                        "scheduledTimerWithTimeInterval:target:selector:userInfo:repeats:",param_1,
                        param_2,param_3,puVar2,(ulong)(param_5 & 1));
  _swift_unknownObjectRelease(param_2);
  _swift_unknownObjectRelease(puVar2);
  return IVar1;
}



/* Address: 0x100be6b48 | _TtC6Sentry20SentryNSTimerFactory::scheduledTimerWithTimeInterval:target:selector:userInfo:repeats: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x34 bytes */

ID _TtC6Sentry20SentryNSTimerFactory::
   scheduledTimerWithTimeInterval_target_selector_userInfo_repeats_
             (ID param_1,SEL param_2,double param_3,ID param_4,SEL param_5,ID param_6,bool param_7)

{
  undefined1 *puVar1;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [32];
  
  _swift_unknownObjectRetain(param_4);
  _swift_unknownObjectRetain(param_6);
  Swift::__bridgeAnyObjectToAny();
  _swift_unknownObjectRelease(param_4);
  if (param_6 == 0) {
    uStack_88 = 0;
    local_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    Swift::__bridgeAnyObjectToAny();
    _swift_unknownObjectRelease(param_6);
  }
  puVar1 = auStack_70;
  FUN_100be69b4(param_3,puVar1,param_5,&local_90,param_7);
  FUN_100013954(&local_90);
  FUN_100004594(auStack_70);
  return (ID)puVar1;
}



/* Address: 0x100be6c24 | FUN_100be6c24 */

void FUN_100be6c24(void)

{
  FUN_100be6c54();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"init");
  return;
}



/* Address: 0x100be6c54 | FUN_100be6c54 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100be6c54(void)

{
  return ZEXT816(0x100fa57f0);
}



/* Address: 0x100be6c74 | _TtC6Sentry20SentryNSTimerFactory::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry20SentryNSTimerFactory::init(ID param_1,SEL param_2)

{
  FUN_100be6c24();
  return param_1;
}



/* Address: 0x100be6c94 | FUN_100be6c94 */

void FUN_100be6c94(void)

{
  FUN_100be6c54();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"dealloc");
  return;
}



/* Address: 0x100be6cc4 | FUN_100be6cc4 */

void FUN_100be6cc4(undefined8 param_1,undefined8 param_2)

{
  _swift_lookUpClassMethod(param_1,param_2,&TargetClassDescriptor_100cd0afc);
  return;
}



/* Address: 0x100be6cd0 | FUN_100be6cd0 */

void FUN_100be6cd0(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100be6ce8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0x50))();
  return;
}



/* Address: 0x100be6cec | FUN_100be6cec */

void FUN_100be6cec(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100be6d04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0x58))();
  return;
}



/* Address: 0x100be6d08 | FUN_100be6d08 */

void FUN_100be6d08(void)

{
  long unaff_x20;
  
  __Block_release(*(void **)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x100be6d2c | FUN_100be6d2c */

undefined8 FUN_100be6d2c(void)

{
  return 3;
}



/* Address: 0x100be6d40 | FUN_100be6d40 */

void FUN_100be6d40(void)

{
  return;
}



/* Address: 0x100be6d54 | FUN_100be6d54 */

undefined1  [16] FUN_100be6d54(undefined *param_1,undefined *param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined1 auVar8 [16];
  
  lVar4 = *(long *)(param_3 + 0x10);
  if (lVar4 == 0) {
    uVar3 = 1;
    lVar2 = 0;
  }
  else {
    if (*(undefined **)(param_3 + 0x20) != param_1 || *(undefined **)(param_3 + 0x28) != param_2) {
      bVar1 = Swift::_stringCompareWithSmolCheck
                        ((_StringGuts)*(undefined **)(param_3 + 0x20),
                         (_StringGuts)*(undefined **)(param_3 + 0x28),
                         (_StringComparisonResult)(__int8)param_1);
      if (!bVar1) {
        lVar5 = 0;
        puVar6 = (undefined8 *)(param_3 + 0x38);
        lVar7 = 1;
        do {
          uVar3 = (ulong)(lVar4 == lVar7);
          if (lVar4 == lVar7) {
            lVar2 = 0;
            break;
          }
          lVar5 = lVar5 + 1;
          lVar2 = lVar5;
          if ((undefined *)puVar6[-1] == param_1 && (undefined *)*puVar6 == param_2) break;
          bVar1 = Swift::_stringCompareWithSmolCheck
                            ((undefined *)puVar6[-1],(undefined *)*puVar6,
                             (_StringComparisonResult)(__int8)param_1);
          puVar6 = puVar6 + 2;
          lVar2 = lVar7;
          lVar7 = lVar7 + 1;
        } while (!bVar1);
        goto LAB_100be6db8;
      }
    }
    uVar3 = 0;
    lVar2 = 0;
  }
LAB_100be6db8:
  auVar8._8_8_ = uVar3;
  auVar8._0_8_ = lVar2;
  return auVar8;
}



/* Address: 0x100be6e38 | FUN_100be6e38 */

undefined * FUN_100be6e38(undefined8 param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  
  if (param_2 != 0) {
    puVar2 = &DAT_101044958;
    FUN_100b6730c();
    uVar3 = 0;
    _swift_initStaticObject();
    FUN_100be6fa0();
    if ((uVar3 & 1) == 0) {
      if (-1 < (long)puVar2) {
        return puVar2;
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100be6e8c);
      (*pcVar1)();
    }
  }
  return (undefined *)0x4;
}



/* Address: 0x100be6e8c | FUN_100be6e8c */

void FUN_100be6e8c(ulong param_1)

{
  code *pcVar1;
  
  if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100be6ed0);
    (*pcVar1)();
  }
  if (param_1 < DAT_101042f30) {
    FUN_100be6fb0(0x101042f18);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100be6ed4);
  (*pcVar1)();
}



/* Address: 0x100be6ed4 | FUN_100be6ed4 */

void FUN_100be6ed4(void)

{
  undefined8 *unaff_x20;
  
  FUN_100be6e8c(*unaff_x20);
  return;
}



/* Address: 0x100be6edc | _TtC6Sentry17SentryLevelHelper::nameForLevel: */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC6Sentry17SentryLevelHelper::nameForLevel_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  NSString *pNVar1;
  
  FUN_100be6e8c(param_3);
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_2);
  return (ID)pNVar1;
}



/* Address: 0x100be6f14 | _TtC6Sentry17SentryLevelHelper::levelForName: */

/* Function Stack Size: 0x18 bytes */

unsigned_long_long _TtC6Sentry17SentryLevelHelper::levelForName_(ID param_1,SEL param_2,ID param_3)

{
  char *pcVar1;
  String SVar2;
  
  if (param_3 == 0) {
    SVar2 = (String)ZEXT816(0);
  }
  else {
    SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  pcVar1 = SVar2.str;
  FUN_100be6e38(pcVar1,SVar2.bridgeObject);
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  return (unsigned_long_long)pcVar1;
}



/* Address: 0x100be6f60 | _TtC6Sentry17SentryLevelHelper::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry17SentryLevelHelper::init(ID param_1,SEL param_2)

{
  FUN_1001fddc8();
  return param_1;
}



/* Address: 0x100be6f80 | FUN_100be6f80 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100be6f80(void)

{
  return ZEXT816(0x100fa58b0);
}



/* Address: 0x100be6fa0 | FUN_100be6fa0 */

void FUN_100be6fa0(void)

{
  FUN_100be6d54();
  return;
}



/* Address: 0x100be6fb0 | FUN_100be6fb0 */

void FUN_100be6fb0(long param_1,long param_2)

{
  _swift_bridgeObjectRetain(*(undefined8 *)(param_1 + param_2 * 0x10 + 0x30));
  return;
}



/* Address: 0x100be6fc0 | FUN_100be6fc0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_100be6fc0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar2 = SentryOptions::enableSwizzling;
  FUN_100b78ca0(param_1 + SentryOptions::enableSwizzling,auStack_48);
  lVar1 = SentryOptions::enableDataSwizzling;
  if (*(char *)(param_1 + lVar2) == '\x01') {
    FUN_100b78ca0(param_1 + SentryOptions::enableDataSwizzling,auStack_60);
    if (*(char *)(param_1 + lVar1) == '\x01') {
      _objc_msgSend((ID)&objc::class_t::SentryNSDataSwizzlingHelper,"swizzleWithTracker:",param_2);
      return;
    }
    FUN_100b84dac(0);
    FUN_100be7110("ataSwizzling.swift");
  }
  else {
    FUN_100b84dac(0);
    FUN_100be7110("tryNSDataSwizzling");
  }
  FUN_100b84df8();
  return;
}



/* Address: 0x100be70d0 | _TtC6Sentry21SentryNSDataSwizzling::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry21SentryNSDataSwizzling::init(ID param_1,SEL param_2)

{
  FUN_1001fddc8();
  return param_1;
}



/* Address: 0x100be70f0 | FUN_100be70f0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100be70f0(void)

{
  return ZEXT816(0x100fa5960);
}



/* Address: 0x100be7110 | FUN_100be7110 */

undefined8 FUN_100be7110(void)

{
  return 1;
}



/* Address: 0x100be7128 | FUN_100be7128 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100be7128(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  *param_1 = unaff_x20;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Address: 0x100be713c | FUN_100be713c */

void FUN_100be713c(void)

{
  FUN_100be7128();
  return;
}



/* Address: 0x100be715c | _TtC6Sentry28PlaceholderSentryApplication::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry28PlaceholderSentryApplication::init(ID param_1,SEL param_2)

{
  FUN_1001fddc8();
  return param_1;
}



/* Address: 0x100be717c | FUN_100be717c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

uint FUN_100be717c(undefined8 param_1)

{
  FUN_100be71b0(param_1);
  return (uint)param_1 & 1;
}


