/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100b7f804 | FUN_100b7f804 */

void FUN_100b7f804(undefined8 param_1,undefined8 param_2)

{
  _swift_lookUpClassMethod(param_1,param_2,&TargetClassDescriptor_100ccdb50);
  return;
}



/* Address: 0x100b7f810 | FUN_100b7f810 */

void FUN_100b7f810(void)

{
  FUN_100b7eea0();
  return;
}



/* Address: 0x100b7f81c | FUN_100b7f81c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Type propagation algorithm not settling */

void FUN_100b7f81c(long param_1,ulong param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  Dictionary<undefined,undefined> DVar3;
  long lVar4;
  undefined *puVar5;
  long *plVar6;
  ulong uVar7;
  long unaff_x20;
  long local_88 [5];
  undefined1 auStack_60 [32];
  
  puVar2 = (undefined8 *)_objc_msgSend(*(ID *)(unaff_x20 + 0x10),"infoDictionary");
  puVar1 = PTR___type_metadata_for_Any_100eae0c0;
  if (puVar2 == (undefined8 *)0x0) {
    FUN_100b7fac0();
    _swift_allocError(&DAT_100f3bd18,puVar2,0,0);
    puVar2[1] = 0;
    *puVar2 = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    puVar2[5] = 0;
    puVar2[4] = 0;
    puVar2[6] = 0;
    *(undefined1 *)(puVar2 + 7) = 2;
    _swift_willThrow();
    return;
  }
  DVar3 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  if (*(long *)(DVar3.unknown + 0x10) == 0) {
    local_88[2] = 0;
    local_88[1] = 0;
    local_88[4] = 0;
    local_88[3] = 0;
  }
  else {
    _swift_bridgeObjectRetain(param_2);
    _swift_bridgeObjectRetain(DVar3.unknown);
    lVar4 = param_1;
    uVar7 = param_2;
    FUN_100071370(param_1);
    if ((uVar7 & 1) != 0) {
      FUN_10000cbfc(*(long *)(DVar3.unknown + 0x38) + lVar4 * 0x20,local_88 + 1);
      _swift_bridgeObjectRelease(param_2);
      _swift_bridgeObjectRelease_n(DVar3.unknown,2);
      if (local_88[4] != 0) {
        FUN_100011080(local_88 + 1,auStack_60);
        FUN_10000cbfc(auStack_60,local_88 + 1);
        puVar5 = &DAT_101044968;
        FUN_100b6730c();
        plVar6 = local_88;
        _swift_dynamicCast(plVar6,local_88 + 1,puVar1 + 8,puVar5,6);
        if (((ulong)plVar6 & 1) == 0) {
          FUN_100b7fac0();
          _swift_allocError(&DAT_100f3bd18,plVar6,0,0);
          *plVar6 = param_1;
          plVar6[1] = param_2;
          FUN_10000cbfc(auStack_60,plVar6 + 2);
          plVar6[6] = (long)puVar5;
          *(undefined1 *)(plVar6 + 7) = 1;
          _swift_willThrow();
          _swift_bridgeObjectRetain(param_2);
          FUN_100004594(auStack_60);
          return;
        }
        FUN_100004594(auStack_60);
        return;
      }
      goto LAB_100b7f9a4;
    }
    _swift_bridgeObjectRelease(DVar3.unknown);
    local_88[2] = 0;
    local_88[1] = 0;
    local_88[4] = 0;
    local_88[3] = 0;
    _swift_bridgeObjectRelease(param_2);
  }
  _swift_bridgeObjectRelease(DVar3.unknown);
LAB_100b7f9a4:
  FUN_100013954(local_88 + 1);
  return;
}



/* Address: 0x100b7fa24 | FUN_100b7fa24 */

void FUN_100b7fa24(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x21;
  
  puVar1 = param_1;
  FUN_100b7f81c();
  if ((unaff_x21 == 0) && (puVar1 == (undefined8 *)0x0)) {
    FUN_100b7fac0();
    _swift_allocError(&DAT_100f3bd18,puVar1,0,0);
    *puVar1 = param_1;
    puVar1[1] = param_2;
    *(undefined1 *)(puVar1 + 7) = 0;
    _swift_willThrow();
    _swift_bridgeObjectRetain(param_2);
  }
  return;
}



/* Address: 0x100b7faa0 | FUN_100b7faa0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100b7faa0(void)

{
  return ZEXT816(0x1010453f0);
}



/* Address: 0x100b7fac0 | FUN_100b7fac0 */

void FUN_100b7fac0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101045450 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9e218;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9e218,&DAT_100f3bd18);
  DAT_101045450 = pTVar1;
  return;
}



/* Address: 0x100b7fb00 | FUN_100b7fb00 */

void FUN_100b7fb00(void)

{
  DAT_101045458 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  return;
}



/* Address: 0x100b7fb34 | FUN_100b7fb34 */

void FUN_100b7fb34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long extraout_x8;
  long extraout_x9;
  long unaff_x20;
  long lVar2;
  long lVar3;
  
  FUN_100b6fd78();
  FUN_100b6730c(&DAT_101044980);
  FUN_100b7ef70();
  lVar3 = extraout_x9 - extraout_x8;
  lVar2 = lVar3 - extraout_x8;
  FUN_100b6730c(&DAT_101045530);
  _swift_allocObject();
  uVar1 = 0;
  FUN_100b8863c();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  FUN_100b7982c();
  FUN_1000c9ffc(lVar2,1,1,uVar1);
  FUN_1000057b8(lVar2,lVar3);
  FUN_100b6730c();
  _swift_allocObject();
  FUN_100b88630();
  FUN_10004e7d4(lVar2);
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x38) = param_1;
  *(undefined8 *)(unaff_x20 + 0x40) = param_4;
  *(undefined8 *)(unaff_x20 + 0x48) = param_5;
  *(long *)(unaff_x20 + 0x28) = lVar3;
  *(undefined8 *)(unaff_x20 + 0x30) = param_6;
  return;
}



/* Address: 0x100b7fc38 | FUN_100b7fc38 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100b7fc38(void)

{
  long unaff_x20;
  
  FUN_100b7fca4();
  _objc_msgSend(*(ID *)(unaff_x20 + 0x48),"removeObserver:name:object:");
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Address: 0x100b7fca4 | FUN_100b7fca4 */

void FUN_100b7fca4(void)

{
  ID self;
  long unaff_x20;
  
  self = *(ID *)(unaff_x20 + 0x48);
  FUN_100b80d24();
  if (DAT_101042db8 != -1) {
    _swift_once(&DAT_101042db8,FUN_100b7fb00);
  }
  FUN_100b80d24();
  FUN_100b80d24();
  _objc_msgSend(self,"removeObserver:name:object:");
  return;
}



/* Address: 0x100b7fd3c | FUN_100b7fd3c */

void FUN_100b7fd3c(void)

{
  FUN_100b7fc38();
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100b7fd5c | FUN_100b7fd5c */

void FUN_100b7fd5c(void)

{
  code *self;
  ID IVar1;
  long unaff_x20;
  
  self = FUN_100b8011c;
  FUN_100bb0798(FUN_100b8011c,0);
  FUN_100b80d54();
  FUN_100b80d70();
  if (DAT_101042db8 != -1) {
    self = (code *)&DAT_101042db8;
    _swift_once(&DAT_101042db8,FUN_100b7fb00);
  }
  FUN_100b80d54();
  FUN_100b80d70();
  FUN_100b80d54();
  FUN_100b80d70();
  FUN_100b80d54();
  FUN_100b80d70();
  (**(code **)(unaff_x20 + 0x18))();
  if (self != (code *)0x0) {
    IVar1 = _objc_msgSend((ID)self,"mainThread_isActive");
    _swift_unknownObjectRelease(self);
    if ((int)IVar1 != 0) {
      FUN_100b7fe6c();
      return;
    }
  }
  return;
}



/* Address: 0x100b7fe6c | FUN_100b7fe6c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100b7fe6c(void)

{
  undefined8 uVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long unaff_x30;
  undefined1 auStack_20 [8];
  undefined1 auStack_18 [24];
  
  FUN_100b6fd78();
  FUN_100b7982c();
  lVar9 = *(long *)(unaff_x30 + -8);
  lVar8 = *(long *)(lVar9 + 0x40);
  FUN_100b80d80(auStack_20);
  lVar6 = *(long *)(unaff_x20 + 0x10);
  _os_unfair_lock_lock(*(undefined8 *)(lVar6 + 0x10));
  FUN_100b80d44(lVar6 + 0x18,auStack_18,0x21);
  if (*(char *)(lVar6 + 0x18) == '\x01') {
    FUN_100b84dac(0);
    FUN_100b84df8(1,0xd000000000000044,0x8000000100dcaac0,0xd000000000000064,0x8000000100dcab10,0x92
                 );
    FUN_100b80dc4();
    FUN_100b80d78();
  }
  else {
    *(undefined1 *)(lVar6 + 0x18) = 1;
    FUN_100b80dc4();
    FUN_100b80d78();
    uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
    IVar2 = _objc_msgSend(*(ID *)(unaff_x20 + 0x40),"date");
    FUN_100b80da8(IVar2);
    plVar7 = *(long **)(unaff_x20 + 0x28);
    lVar6 = plVar7[2];
    _os_unfair_lock_lock(lVar6);
    lVar10 = *(long *)(*plVar7 + 0x60);
    FUN_100b80d44((long)plVar7 + lVar10,auStack_18,0x21);
    FUN_10004e7d4((long)plVar7 + lVar10);
    FUN_100b80db0((long)plVar7 + lVar10,1);
    FUN_100b80dc4();
    _os_unfair_lock_unlock(lVar6);
    puVar3 = &DAT_100f377b0;
    _swift_allocObject(&DAT_100f377b0,0x18,7);
    _swift_weakInit(puVar3 + 0x10);
    FUN_100b80d4c(*(undefined8 *)(lVar9 + 0x10));
    uVar5 = (ulong)*(byte *)(lVar9 + 0x50) + 0x18 &
            ((ulong)*(byte *)(lVar9 + 0x50) ^ 0xffffffffffffffff);
    uVar11 = lVar8 + uVar5 + 7 & 0xfffffffffffffff8;
    puVar4 = &DAT_100f377d8;
    FUN_100b80dbc(&DAT_100f377d8,uVar11 + 8);
    *(undefined **)(puVar4 + 0x10) = puVar3;
    FUN_100b80d4c(*(undefined8 *)(lVar9 + 0x20),puVar4 + uVar5);
    *(undefined8 *)(puVar4 + uVar11) = uVar1;
    _swift_retain(puVar3);
    FUN_100bb0798(FUN_100b80c98,puVar4);
    _swift_release(puVar4);
    FUN_100b80d64(*(undefined8 *)(lVar9 + 8));
    _swift_release(puVar3);
  }
  FUN_100b56ea0();
  return;
}



/* Address: 0x100b80068 | FUN_100b80068 */

void FUN_100b80068(void)

{
  undefined8 uVar1;
  long unaff_x20;
  long lVar2;
  undefined1 auStack_38 [24];
  
  FUN_100bb07e0(FUN_100b800d0,0);
  FUN_100b7fca4();
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(lVar2 + 0x10);
  _os_unfair_lock_lock(uVar1);
  FUN_100b80d38(lVar2 + 0x18,auStack_38);
  *(undefined1 *)(lVar2 + 0x18) = 0;
  _os_unfair_lock_unlock(uVar1);
  return;
}



/* Address: 0x100b800d0 | FUN_100b800d0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b800d0(void)

{
  ID IVar1;
  
  IVar1 = SentrySDKInternal::currentHub((ID)&objc::class_t::SentrySDKInternal,"currentHub");
  SentrySDKInternal::endSession(IVar1,"endSession");
  return 0;
}



/* Address: 0x100b8011c | FUN_100b8011c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100b8011c(void)

{
  undefined *puVar1;
  Date DVar2;
  Date DVar3;
  ID self;
  ulong uVar4;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  NSDate *pNVar8;
  
  puVar1 = &DAT_101044980;
  FUN_100b6730c();
  uVar4 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar6 = &stack0xffffffffffffffc0 + -uVar4;
  lVar7 = (long)puVar6 - uVar4;
  lVar5 = lVar7 - uVar4;
  DVar2.unknown =
       (undefined *)
       SentryDependencyContainerSwiftHelper::readTimestampLastInForeground
                 ((ID)&objc::class_t::SentryDependencyContainerSwiftHelper,
                  "readTimestampLastInForeground");
  if (DVar2.unknown == (undefined *)0x0) {
    DVar3 = Foundation::Date::typeMetadataAccessor();
  }
  else {
    Foundation::Date::__unconditionallyBridgeFromObjectiveC(DVar2);
    DVar3 = Foundation::Date::typeMetadataAccessor();
  }
  FUN_1000c9ffc(lVar7,DVar2.unknown == (undefined *)0x0,1,DVar3.unknown);
  FUN_100b80cd8(lVar7,lVar5);
  Foundation::Date::typeMetadataAccessor();
  lVar7 = lVar5;
  FUN_1000c9ff0(lVar5,1,DVar3.unknown);
  if ((int)lVar7 != 1) {
    SentryDependencyContainerSwiftHelper::deleteTimestampLastInForeground
              ((ID)&objc::class_t::SentryDependencyContainerSwiftHelper,
               "deleteTimestampLastInForeground");
  }
  self = SentrySDKInternal::currentHub((ID)&objc::class_t::SentrySDKInternal,"currentHub");
  FUN_1000057b8(lVar5,puVar6);
  DVar2.unknown = puVar6;
  FUN_1000c9ff0(puVar6,1,DVar3.unknown);
  if ((int)DVar2.unknown == 1) {
    pNVar8 = (NSDate *)0x0;
  }
  else {
    pNVar8 = Foundation::Date::_bridgeToObjectiveC(DVar2);
    (**(code **)(*(long *)(DVar3.unknown + -8) + 8))(puVar6,DVar3.unknown);
  }
  _objc_msgSend(self,"closeCachedSessionWithTimestamp:",pNVar8);
  FUN_10004e7d4(lVar5);
  return;
}



/* Address: 0x100b802c8 | thunk_FUN_100b7fe6c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void thunk_FUN_100b7fe6c(void)

{
  undefined8 uVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long unaff_x20;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long unaff_x30;
  undefined1 auStack_20 [8];
  undefined1 auStack_18 [24];
  
  FUN_100b6fd78();
  FUN_100b7982c();
  lVar9 = *(long *)(unaff_x30 + -8);
  lVar8 = *(long *)(lVar9 + 0x40);
  FUN_100b80d80(auStack_20);
  lVar6 = *(long *)(unaff_x20 + 0x10);
  _os_unfair_lock_lock(*(undefined8 *)(lVar6 + 0x10));
  FUN_100b80d44(lVar6 + 0x18,auStack_18,0x21);
  if (*(char *)(lVar6 + 0x18) == '\x01') {
    FUN_100b84dac(0);
    FUN_100b84df8(1,0xd000000000000044,0x8000000100dcaac0,0xd000000000000064,0x8000000100dcab10,0x92
                 );
    FUN_100b80dc4();
    FUN_100b80d78();
  }
  else {
    *(undefined1 *)(lVar6 + 0x18) = 1;
    FUN_100b80dc4();
    FUN_100b80d78();
    uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
    IVar2 = _objc_msgSend(*(ID *)(unaff_x20 + 0x40),"date");
    FUN_100b80da8(IVar2);
    plVar7 = *(long **)(unaff_x20 + 0x28);
    lVar6 = plVar7[2];
    _os_unfair_lock_lock(lVar6);
    lVar10 = *(long *)(*plVar7 + 0x60);
    FUN_100b80d44((long)plVar7 + lVar10,auStack_18,0x21);
    FUN_10004e7d4((long)plVar7 + lVar10);
    FUN_100b80db0((long)plVar7 + lVar10,1);
    FUN_100b80dc4();
    _os_unfair_lock_unlock(lVar6);
    puVar3 = &DAT_100f377b0;
    _swift_allocObject(&DAT_100f377b0,0x18,7);
    _swift_weakInit(puVar3 + 0x10);
    FUN_100b80d4c(*(undefined8 *)(lVar9 + 0x10));
    uVar5 = (ulong)*(byte *)(lVar9 + 0x50) + 0x18 &
            ((ulong)*(byte *)(lVar9 + 0x50) ^ 0xffffffffffffffff);
    uVar11 = lVar8 + uVar5 + 7 & 0xfffffffffffffff8;
    puVar4 = &DAT_100f377d8;
    FUN_100b80dbc(&DAT_100f377d8,uVar11 + 8);
    *(undefined **)(puVar4 + 0x10) = puVar3;
    FUN_100b80d4c(*(undefined8 *)(lVar9 + 0x20),puVar4 + uVar5);
    *(undefined8 *)(puVar4 + uVar11) = uVar1;
    _swift_retain(puVar3);
    FUN_100bb0798(FUN_100b80c98,puVar4);
    _swift_release(puVar4);
    FUN_100b80d64(*(undefined8 *)(lVar9 + 8));
    _swift_release(puVar3);
  }
  FUN_100b56ea0();
  return;
}



/* Address: 0x100b802cc | _TtC6Sentry14SessionTracker::didBecomeActive */

/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry14SessionTracker::didBecomeActive(ID param_1,SEL param_2)

{
  FUN_100b80b04(param_1,param_2,thunk_FUN_100b7fe6c);
  return;
}



/* Address: 0x100b802d8 | FUN_100b802d8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100b802d8(long param_1,undefined8 param_2,long param_3)

{
  ID self;
  Date DVar1;
  undefined *puVar2;
  Date DVar3;
  NSDate *pNVar4;
  _StringGuts _Var5;
  char *pcVar6;
  void *pvVar7;
  ulong uVar8;
  long lVar9;
  Date DVar10;
  long lVar11;
  Date DVar12;
  long lVar13;
  double dVar14;
  double dVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  class_t *local_d0;
  ID local_c8;
  undefined8 local_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  
  DVar1 = Foundation::Date::typeMetadataAccessor();
  lVar11 = *(long *)(DVar1.unknown + -8);
  DVar10.unknown =
       (undefined *)((long)&local_d0 - (*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0));
  puVar2 = &DAT_101044980;
  FUN_100b6730c();
  uVar8 = *(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  DVar12.unknown = DVar10.unknown + -uVar8;
  lVar13 = (long)DVar12.unknown - uVar8;
  lVar9 = lVar13 - uVar8;
  _swift_beginAccess(param_1 + 0x10,auStack_98,0,0);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 != 0) {
    local_c8 = _objc_msgSend((ID)&objc::class_t::SentrySDKInternal,"currentHub");
    local_d0 = &objc::class_t::SentryDependencyContainerSwiftHelper;
    DVar3.unknown =
         (undefined *)
         _objc_msgSend((ID)&objc::class_t::SentryDependencyContainerSwiftHelper,
                       "readTimestampLastInForeground");
    if (DVar3.unknown != (undefined *)0x0) {
      Foundation::Date::__unconditionallyBridgeFromObjectiveC(DVar3);
    }
    FUN_1000c9ffc(lVar13,DVar3.unknown == (undefined *)0x0,1,DVar1.unknown);
    FUN_100b80cd8(lVar13,lVar9);
    FUN_1000057b8(lVar9,DVar12.unknown);
    puVar2 = DVar12.unknown;
    FUN_1000c9ff0(DVar12.unknown,1,DVar1.unknown);
    if ((int)puVar2 == 1) {
      FUN_10004e7d4(DVar12.unknown);
      FUN_100b84dac(0);
      FUN_100b84df8(1,0xd000000000000045,0x8000000100dcab80,0xd000000000000064,0x8000000100dcab10,
                    0xb8);
      _objc_msgSend(local_c8,"startSession");
      FUN_100b806f0();
    }
    else {
      (**(code **)(lVar11 + 0x20))(DVar10.unknown,DVar12.unknown,DVar1.unknown);
      dVar14 = Foundation::Date::timeIntervalSince(DVar10,DVar12);
      lVar13 = SentryOptions::sessionTrackingIntervalMillis;
      _Var5.unknown = auStack_b0;
      pcVar6 = (char *)0x0;
      pvVar7 = (void *)0x0;
      _swift_beginAccess(param_3 + SentryOptions::sessionTrackingIntervalMillis);
      dVar15 = (double)NEON_ucvtf(*(undefined8 *)(param_3 + lVar13));
      FUN_100b84dac(0);
      if (dVar15 <= dVar14 * 1000.0) {
        local_c0 = 0;
        puStack_b8 = (undefined *)0xe000000000000000;
        Swift::_StringGuts::grow(0x41,_Var5);
        SVar18.bridgeObject = (void *)0x8000000100dcabd0;
        SVar18.str = (char *)0xd00000000000001e;
        SVar22.bridgeObject = pvVar7;
        SVar22.str = pcVar6;
        Swift::String::append(SVar18,SVar22);
        pcVar6 = 
        PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
        ;
        double::_write((undefined *)&local_c0,dVar14);
        SVar19.bridgeObject = (void *)0x8000000100dcac20;
        SVar19.str = (char *)0xd000000000000021;
        SVar23.bridgeObject = pvVar7;
        SVar23.str = pcVar6;
        Swift::String::append(SVar19,SVar23);
        DVar12.unknown = puStack_b8;
        FUN_100b84df8(1,local_c0,puStack_b8,0xd000000000000064,0x8000000100dcab10,0xae);
        _swift_bridgeObjectRelease();
        pNVar4 = Foundation::Date::_bridgeToObjectiveC(DVar12);
        self = local_c8;
        _objc_msgSend(local_c8,"endSessionWithTimestamp:",pNVar4);
        _objc_msgSend(self,"startSession");
        FUN_100b806f0();
      }
      else {
        local_c0 = 0;
        puStack_b8 = (undefined *)0xe000000000000000;
        Swift::_StringGuts::grow(0x45,_Var5);
        SVar16.bridgeObject = (void *)0x8000000100dcabd0;
        SVar16.str = (char *)0xd00000000000001e;
        SVar20.bridgeObject = pvVar7;
        SVar20.str = pcVar6;
        Swift::String::append(SVar16,SVar20);
        pcVar6 = 
        PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
        ;
        double::_write((undefined *)&local_c0,dVar14);
        SVar17.bridgeObject = (void *)0x8000000100dcabf0;
        SVar17.str = (char *)0xd000000000000025;
        SVar21.bridgeObject = pvVar7;
        SVar21.str = pcVar6;
        Swift::String::append(SVar17,SVar21);
        puVar2 = puStack_b8;
        FUN_100b84df8(1,local_c0,puStack_b8,0xd000000000000064,0x8000000100dcab10,0xb3);
        _swift_bridgeObjectRelease(puVar2);
      }
      (**(code **)(lVar11 + 8))(DVar10.unknown,DVar1.unknown);
    }
    _objc_msgSend((ID)local_d0,"deleteTimestampLastInForeground");
    _swift_release(param_1);
    FUN_10004e7d4(lVar9);
  }
  return;
}



/* Address: 0x100b806f0 | FUN_100b806f0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_100b806f0(void)

{
  ID IVar1;
  
  IVar1 = _objc_msgSend((ID)&objc::class_t::SentryDependencyContainerSwiftHelper,
                        "hasProfilingOptions");
  if ((int)IVar1 != 0) {
    FUN_100b43d88();
    return;
  }
  return;
}



/* Address: 0x100b80724 | FUN_100b80724 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100b80724(void)

{
  ID IVar1;
  undefined *puVar2;
  long unaff_x20;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long unaff_x30;
  undefined1 auStack_30 [24];
  undefined1 auStack_18 [24];
  
  FUN_100b6fd78();
  FUN_100b7982c();
  lVar3 = *(long *)(unaff_x30 + -8);
  lVar4 = *(long *)(lVar3 + 0x40);
  FUN_100b80d80(auStack_30);
  IVar1 = _objc_msgSend(*(ID *)(unaff_x20 + 0x40),"date");
  FUN_100b80da8(IVar1);
  lVar5 = *(long *)(unaff_x20 + 0x10);
  FUN_100b80d9c(0);
  FUN_100b80d38(lVar5 + 0x18,auStack_18);
  *(undefined1 *)(lVar5 + 0x18) = 0;
  FUN_100b80d78();
  plVar6 = *(long **)(unaff_x20 + 0x28);
  FUN_100b80d9c();
  lVar5 = *(long *)(*plVar6 + 0x60);
  FUN_100b80d44((long)plVar6 + lVar5,auStack_30,0x21);
  FUN_10004e7d4((long)plVar6 + lVar5);
  FUN_100b80dcc((long)plVar6 + lVar5);
  FUN_100b80db0((long)plVar6 + lVar5,0);
  _swift_endAccess(auStack_30);
  FUN_100b80d78();
  FUN_100b80dcc();
  uVar7 = (ulong)*(byte *)(lVar3 + 0x50) + 0x10 &
          ((ulong)*(byte *)(lVar3 + 0x50) ^ 0xffffffffffffffff);
  puVar2 = &DAT_100f37788;
  FUN_100b80dbc(&DAT_100f37788,uVar7 + lVar4);
  FUN_100b80d4c(*(undefined8 *)(lVar3 + 0x20),puVar2 + uVar7);
  FUN_100bb0798(FUN_100b80bb4,puVar2);
  _swift_release(puVar2);
  FUN_100b80d64(*(undefined8 *)(lVar3 + 8));
  FUN_100b56ea0();
  return;
}



/* Address: 0x100b80850 | FUN_100b80850 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b80850(void)

{
  NSDate *pNVar1;
  
  pNVar1 = Foundation::Date::_bridgeToObjectiveC
                     ((Date)&objc::class_t::SentryDependencyContainerSwiftHelper);
  SentryDependencyContainerSwiftHelper::storeTimestampLastInForeground_
            ((ID)&objc::class_t::SentryDependencyContainerSwiftHelper,
             "storeTimestampLastInForeground:",(ID)pNVar1);
  return 0;
}



/* Address: 0x100b8089c | _TtC6Sentry14SessionTracker::willResignActive */

/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry14SessionTracker::willResignActive(ID param_1,SEL param_2)

{
  FUN_100b80b04(param_1,param_2,FUN_100b80724);
  return;
}



/* Address: 0x100b808a8 | FUN_100b808a8 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100b808a8(void)

{
  ID IVar1;
  undefined *puVar2;
  long extraout_x8;
  ulong uVar3;
  long extraout_x9;
  long unaff_x20;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  long unaff_x30;
  undefined1 auStack_40 [8];
  long local_38;
  undefined1 auStack_30 [24];
  undefined1 auStack_18 [24];
  
  FUN_100b6fd78();
  FUN_100b7982c();
  lVar11 = *(long *)(unaff_x30 + -8);
  local_38 = *(long *)(lVar11 + 0x40);
  uVar3 = local_38 + 0xfU & 0xfffffffffffffff0;
  puVar10 = auStack_40 + -uVar3;
  lVar6 = (long)puVar10 - uVar3;
  FUN_100b6730c(&DAT_101044980);
  FUN_100b7ef70();
  lVar8 = extraout_x9 - extraout_x8;
  lVar7 = lVar8 - extraout_x8;
  plVar4 = *(long **)(unaff_x20 + 0x28);
  lVar9 = plVar4[2];
  _os_unfair_lock_lock(lVar9);
  lVar12 = *(long *)(*plVar4 + 0x60);
  FUN_100b80d38((long)plVar4 + lVar12,auStack_18);
  FUN_1000057b8((long)plVar4 + lVar12,lVar7);
  _os_unfair_lock_unlock(lVar9);
  FUN_1000057b8(lVar7,lVar8);
  lVar9 = lVar8;
  FUN_1000c9ff0(lVar8,1,unaff_x30);
  if ((int)lVar9 == 1) {
    IVar1 = _objc_msgSend(*(ID *)(unaff_x20 + 0x40),"date");
    FUN_100b80da8(IVar1);
    lVar9 = lVar8;
    FUN_1000c9ff0(lVar8,1,unaff_x30);
    if ((int)lVar9 != 1) {
      FUN_10004e7d4(lVar8);
    }
  }
  else {
    FUN_100b80d4c(*(undefined8 *)(lVar11 + 0x20),lVar6,lVar8);
  }
  FUN_100b80d4c(*(undefined8 *)(lVar11 + 0x10),puVar10,lVar6);
  uVar3 = (ulong)*(byte *)(lVar11 + 0x50) + 0x10 &
          ((ulong)*(byte *)(lVar11 + 0x50) ^ 0xffffffffffffffff);
  puVar2 = &DAT_100f37760;
  FUN_100b80dbc(&DAT_100f37760,uVar3 + local_38);
  FUN_100b80d4c(*(undefined8 *)(lVar11 + 0x20),puVar2 + uVar3,puVar10);
  FUN_100bb07e0(FUN_100b80b54,puVar2);
  _swift_release(puVar2);
  lVar9 = *(long *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(lVar9 + 0x10);
  _os_unfair_lock_lock(uVar5);
  FUN_100b80d38(lVar9 + 0x18,auStack_30);
  *(undefined1 *)(lVar9 + 0x18) = 0;
  _os_unfair_lock_unlock(uVar5);
  FUN_100b80d64(*(undefined8 *)(lVar11 + 8));
  FUN_10004e7d4(lVar7);
  FUN_100b56ea0();
  return;
}



/* Address: 0x100b80a78 | FUN_100b80a78 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100b80a78(void)

{
  Date self;
  NSDate *pNVar1;
  
  self.unknown = (undefined *)
                 SentrySDKInternal::currentHub((ID)&objc::class_t::SentrySDKInternal,"currentHub");
  pNVar1 = Foundation::Date::_bridgeToObjectiveC(self);
  _objc_msgSend((ID)self.unknown,"endSessionWithTimestamp:",pNVar1);
  SentryDependencyContainerSwiftHelper::deleteTimestampLastInForeground
            ((ID)&objc::class_t::SentryDependencyContainerSwiftHelper,
             "deleteTimestampLastInForeground");
  return;
}



/* Address: 0x100b80af8 | _TtC6Sentry14SessionTracker::willTerminate */

/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry14SessionTracker::willTerminate(ID param_1,SEL param_2)

{
  FUN_100b80b04(param_1,param_2,FUN_100b808a8);
  return;
}



/* Address: 0x100b80b04 | FUN_100b80b04 */

void FUN_100b80b04(undefined8 param_1,undefined8 param_2,code *param_3)

{
  _swift_retain();
  (*param_3)();
  _swift_release(param_1);
  return;
}



/* Address: 0x100b80b30 | FUN_100b80b30 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100b80b30(void)

{
  return ZEXT816(0x1010454a0);
}



/* Address: 0x100b80b50 | thunk_FUN_100b80b60 */

void thunk_FUN_100b80b60(void)

{
  FUN_100b80b60();
  return;
}



/* Address: 0x100b80b54 | FUN_100b80b54 */

void FUN_100b80b54(void)

{
  FUN_100b80bc0(FUN_100b80a78);
  return;
}



/* Address: 0x100b80b60 | FUN_100b80b60 */

void FUN_100b80b60(long param_1)

{
  ulong uVar1;
  long unaff_x20;
  
  FUN_100b7982c();
  uVar1 = (ulong)*(byte *)(*(long *)(param_1 + -8) + 0x50);
  (**(code **)(*(long *)(param_1 + -8) + 8))
            (unaff_x20 + (uVar1 + 0x10 & (uVar1 ^ 0xffffffffffffffff)),param_1);
  _swift_deallocObject();
  return;
}



/* Address: 0x100b80bb4 | FUN_100b80bb4 */

void FUN_100b80bb4(void)

{
  FUN_100b80bc0(FUN_100b80850);
  return;
}



/* Address: 0x100b80bc0 | FUN_100b80bc0 */

void FUN_100b80bc0(code *param_1)

{
  code *pcVar1;
  long unaff_x20;
  
  pcVar1 = param_1;
  FUN_100b7982c();
  (*param_1)(unaff_x20 +
             ((ulong)*(byte *)(*(long *)(pcVar1 + -8) + 0x50) + 0x10 &
             ((ulong)*(byte *)(*(long *)(pcVar1 + -8) + 0x50) ^ 0xffffffffffffffff)));
  return;
}



/* Address: 0x100b80bf8 | FUN_100b80bf8 */

void FUN_100b80bf8(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x100b80c1c | FUN_100b80c1c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100b80c1c(long param_1)

{
  long unaff_x20;
  long lVar1;
  ulong uVar2;
  
  FUN_100b7982c();
  lVar1 = *(long *)(param_1 + -8);
  uVar2 = (ulong)*(byte *)(lVar1 + 0x50);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  (**(code **)(lVar1 + 8))(unaff_x20 + (uVar2 + 0x18 & (uVar2 ^ 0xffffffffffffffff)),param_1);
  _swift_deallocObject();
  return;
}



/* Address: 0x100b80c98 | FUN_100b80c98 */

void FUN_100b80c98(long param_1)

{
  ulong uVar1;
  long unaff_x20;
  
  FUN_100b7982c();
  uVar1 = (ulong)*(byte *)(*(long *)(param_1 + -8) + 0x50);
  uVar1 = uVar1 + 0x18 & (uVar1 ^ 0xffffffffffffffff);
  FUN_100b802d8(*(undefined8 *)(unaff_x20 + 0x10),unaff_x20 + uVar1,
                *(undefined8 *)
                 (unaff_x20 +
                 (*(long *)(*(long *)(param_1 + -8) + 0x40) + uVar1 + 7 & 0xfffffffffffffff8)));
  return;
}



/* Address: 0x100b80cd8 | FUN_100b80cd8 */

undefined8 FUN_100b80cd8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_101044980;
  FUN_100b6730c();
  (**(code **)(*(long *)(puVar1 + -8) + 0x20))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x100b80d20 | thunk_FUN_100b80b60 */

void thunk_FUN_100b80b60(void)

{
  FUN_100b80b60();
  return;
}



/* Address: 0x100b80d24 | FUN_100b80d24 */

void FUN_100b80d24(void)

{
  ID unaff_x19;
  long unaff_x21;
  
  _objc_msgSend(unaff_x19,*(SEL *)(unaff_x21 + 0x58));
  return;
}



/* Address: 0x100b80d38 | FUN_100b80d38 */

void FUN_100b80d38(undefined8 param_1,undefined8 param_2)

{
  _swift_beginAccess(param_1,param_2,1,0);
  return;
}



/* Address: 0x100b80d44 | FUN_100b80d44 */

void FUN_100b80d44(void)

{
  _swift_beginAccess();
  return;
}



/* Address: 0x100b80d4c | FUN_100b80d4c */

void FUN_100b80d4c(code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x000100b80d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x100b80d54 | FUN_100b80d54 */

void FUN_100b80d54(void)

{
  return;
}



/* Address: 0x100b80d64 | FUN_100b80d64 */

void FUN_100b80d64(code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x000100b80d6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x100b80d70 | FUN_100b80d70 */

void FUN_100b80d70(ID param_1,SEL param_2)

{
  _objc_msgSend(param_1,param_2);
  return;
}



/* Address: 0x100b80d78 | FUN_100b80d78 */

void FUN_100b80d78(void)

{
  _os_unfair_lock_unlock();
  return;
}



/* Address: 0x100b80d80 | FUN_100b80d80 */

void FUN_100b80d80(void)

{
  return;
}



/* Address: 0x100b80d9c | FUN_100b80d9c */

void FUN_100b80d9c(void)

{
  long unaff_x26;
  
  _os_unfair_lock_lock(*(undefined8 *)(unaff_x26 + 0x10));
  return;
}



/* Address: 0x100b80da8 | FUN_100b80da8 */

void FUN_100b80da8(Date param_1)

{
  Foundation::Date::__unconditionallyBridgeFromObjectiveC(param_1);
  return;
}



/* Address: 0x100b80db0 | FUN_100b80db0 */

void FUN_100b80db0(undefined8 param_1,undefined8 param_2)

{
  FUN_1000c9ffc(param_1,param_2,1);
  return;
}



/* Address: 0x100b80dbc | FUN_100b80dbc */

void FUN_100b80dbc(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  _swift_allocObject(param_2,param_3,param_1 | 7);
  return;
}



/* Address: 0x100b80dc4 | FUN_100b80dc4 */

void FUN_100b80dc4(void)

{
  long unaff_x29;
  
  _swift_endAccess(unaff_x29 + -0x68);
  return;
}



/* Address: 0x100b80dcc | FUN_100b80dcc */

void FUN_100b80dcc(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x000100b80dd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x100b80dd8 | FUN_100b80dd8 */

undefined1 * FUN_100b80dd8(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_58 [40];
  
  FUN_100076688(param_1,auStack_58);
  puVar1 = auStack_58;
  FUN_100b80e34(puVar1);
  FUN_100004594(param_1);
  return puVar1;
}



/* Address: 0x100b80e34 | FUN_100b80e34 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x000100b8111c) */
/* WARNING: Removing unreachable block (ram,0x000100b81278) */
/* WARNING: Removing unreachable block (ram,0x000100b80f78) */

undefined * FUN_100b80e34(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  char *pcVar3;
  undefined8 uVar4;
  code *pcVar5;
  NSString *pNVar6;
  NSDictionary *pNVar7;
  undefined *self;
  Date DVar8;
  undefined *puVar9;
  Date DVar10;
  long lVar11;
  ID unaff_x20;
  NSDate *pNVar12;
  long unaff_x21;
  long lVar13;
  long lVar14;
  String SVar15;
  long alStack_a0 [2];
  undefined auStack_90 [8];
  char *local_88;
  long local_80;
  undefined *local_78;
  long local_70;
  undefined1 local_56;
  undefined1 local_55;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar2 = &DAT_101044980;
  FUN_100b6730c();
  lVar11 = *(long *)(*(long *)(puVar2 + -8) + 0x40);
  puVar2 = &DAT_101045568;
  FUN_100b6730c();
  lVar13 = *(long *)(puVar2 + -8);
  lVar14 = (long)(auStack_90 + -(lVar11 + 0xfU & 0xfffffffffffffff0)) -
           (*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_100b818d4();
  Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    local_51 = 0;
    local_78 = auStack_90 + -(lVar11 + 0xfU & 0xfffffffffffffff0);
    local_70 = lVar13;
    SVar15 = Swift::KeyedDecodingContainer::_decode(&local_51,puVar2);
    pcVar3 = SVar15.str;
    uVar4 = 0;
    FUN_100be6f80(0);
    FUN_100be6e38(pcVar3,SVar15.bridgeObject,uVar4);
    _swift_bridgeObjectRelease(SVar15.bridgeObject);
    local_52 = 1;
    SVar15 = Swift::KeyedDecodingContainer::_decode(&local_52,puVar2);
    local_88 = pcVar3;
    local_80 = param_1;
    *(long *)(lVar14 + -0x10) = lVar14;
    pcVar5 = FUN_100b81914;
    FUN_100bd03e0();
    if (pcVar5 == (code *)0x0) {
      _objc_allocWithZone();
      pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(SVar15.bridgeObject);
      self = (undefined *)_objc_msgSend(unaff_x20,"initWithLevel:category:",local_88,pNVar6);
    }
    else {
      _objc_allocWithZone();
      pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(SVar15.bridgeObject);
      pNVar7 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(pcVar5);
      self = (undefined *)
             _objc_msgSend(unaff_x20,"initWithLevel:category:data:",local_88,pNVar6,pNVar7);
    }
    DVar8 = Foundation::Date::typeMetadataAccessor();
    local_53 = 2;
    puVar9 = &DAT_101045578;
    FUN_100003a00(&DAT_101045578,PTR_typeMetadataAccessor_100ea7480,
                  PTR_Foundation__Foundation__Date_>Swift__Decodable_100ea74a8);
    puVar1 = local_78;
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (local_78,DVar8.unknown,&local_53,puVar2,DVar8.unknown,puVar9);
    DVar10.unknown = puVar1;
    FUN_1000c9ff0(puVar1,1,DVar8.unknown);
    lVar11 = local_80;
    if ((int)DVar10.unknown == 1) {
      pNVar12 = (NSDate *)0x0;
    }
    else {
      pNVar12 = Foundation::Date::_bridgeToObjectiveC(DVar10);
      (**(code **)(*(long *)(DVar8.unknown + -8) + 8))(puVar1,DVar8.unknown);
    }
    _objc_msgSend((ID)self,"setTimestamp:",pNVar12);
    local_54 = 3;
    puVar9 = puVar2;
    Swift::KeyedDecodingContainer::_decodeIfPresent(&local_54);
    lVar13 = local_70;
    if (puVar9 == (undefined *)0x0) {
      pNVar6 = (NSString *)0x0;
    }
    else {
      pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(puVar9);
    }
    _objc_msgSend((ID)self,"setType:",pNVar6);
    local_55 = 4;
    puVar9 = puVar2;
    Swift::KeyedDecodingContainer::_decodeIfPresent(&local_55);
    if (puVar9 == (undefined *)0x0) {
      pNVar6 = (NSString *)0x0;
    }
    else {
      pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(puVar9);
    }
    _objc_msgSend((ID)self,"setMessage:",pNVar6);
    local_56 = 6;
    puVar9 = puVar2;
    Swift::KeyedDecodingContainer::_decodeIfPresent(&local_56);
    if (puVar9 == (undefined *)0x0) {
      pNVar6 = (NSString *)0x0;
    }
    else {
      pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(puVar9);
    }
    _objc_msgSend((ID)self,"setOrigin:",pNVar6);
    (**(code **)(lVar13 + 8))(lVar14,puVar2);
    FUN_100004594(lVar11);
  }
  else {
    FUN_100004594(param_1);
    self = puVar2;
  }
  return self;
}



/* Address: 0x100b812f8 | FUN_100b812f8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100b812f8(undefined8 param_1,undefined8 param_2)

{
  ID IVar1;
  
  FUN_100b69e00();
  (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  FUN_100b81c04();
  IVar1 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffb0,"initWithLevel:category:",
                              param_1,param_2);
  FUN_100b81bd8(IVar1);
  return;
}



/* Address: 0x100b81368 | _TtC6Sentry19BreadcrumbDecodable::initWithLevel:category: */

/* Function Stack Size: 0x20 bytes */

ID _TtC6Sentry19BreadcrumbDecodable::initWithLevel_category_
             (ID param_1,SEL param_2,unsigned_long_long param_3,ID param_4)

{
  String SVar1;
  
  SVar1 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  FUN_100b812f8(param_3,SVar1.str,SVar1.bridgeObject);
  return param_3;
}



/* Address: 0x100b813a8 | FUN_100b813a8 */

void FUN_100b813a8(void)

{
  FUN_100b69e00();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"init");
  return;
}



/* Address: 0x100b813d8 | _TtC6Sentry19BreadcrumbDecodable::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry19BreadcrumbDecodable::init(ID param_1,SEL param_2)

{
  FUN_100b813a8();
  return param_1;
}



/* Address: 0x100b813f8 | FUN_100b813f8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100b813f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  NSString *pNVar1;
  
  FUN_100b69e00();
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_3);
  FUN_100b81bec(PTR___type_metadata_for_Any_100eae0c0);
  FUN_100b81c04();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffb0,"initWithLevel:category:data:",param_1,
                      pNVar1,param_3);
  FUN_100b81bf8();
  FUN_100b81bd8(param_4);
  return;
}



/* Address: 0x100b81498 | _TtC6Sentry19BreadcrumbDecodable::initWithLevel:category:data: */

/* Function Stack Size: 0x28 bytes */

ID _TtC6Sentry19BreadcrumbDecodable::initWithLevel_category_data_
             (ID param_1,SEL param_2,unsigned_long_long param_3,ID param_4,ID param_5)

{
  Dictionary<undefined,undefined> DVar1;
  String SVar2;
  
  SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  DVar1 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  FUN_100b813f8(param_3,SVar2.str,SVar2.bridgeObject,DVar1.unknown);
  return param_3;
}



/* Address: 0x100b81518 | FUN_100b81518 */

undefined8 FUN_100b81518(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_100b69e00();
  FUN_100b81bec(PTR___type_metadata_for_Any_100eae0c0);
  _swift_bridgeObjectRelease(param_1);
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffc0,"initWithDictionary:",uVar1);
  FUN_100b81bf8();
  return param_1;
}



/* Address: 0x100b81594 | _TtC6Sentry19BreadcrumbDecodable::initWithDictionary: */

/* Function Stack Size: 0x18 bytes */

ID _TtC6Sentry19BreadcrumbDecodable::initWithDictionary_(ID param_1,SEL param_2,ID param_3)

{
  Dictionary<undefined,undefined> DVar1;
  
  DVar1 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  FUN_100b81518();
  return (ID)DVar1.unknown;
}



/* Address: 0x100b815dc | FUN_100b815dc */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100b815dc(void)

{
  return ZEXT816(0x100fa03a8);
}


