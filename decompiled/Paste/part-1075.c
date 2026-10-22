/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100b78d50 | FUN_100b78d50 */

void FUN_100b78d50(ID param_1)

{
  long unaff_x25;
  
  _objc_msgSend(param_1,*(SEL *)(unaff_x25 + 0xa60));
  return;
}



/* Address: 0x100b78d58 | FUN_100b78d58 */

void FUN_100b78d58(void)

{
  _swift_retain();
  return;
}



/* Address: 0x100b78d60 | FUN_100b78d60 */

void FUN_100b78d60(undefined8 param_1,SEL param_2)

{
  ID unaff_x21;
  
  _objc_msgSend(unaff_x21,param_2);
  return;
}



/* Address: 0x100b78d68 | FUN_100b78d68 */

void FUN_100b78d68(undefined8 param_1)

{
  undefined8 uVar1;
  long in_x9;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + in_x9);
  *(undefined8 *)(unaff_x20 + in_x9) = param_1;
  FUN_10001486c(uVar1);
  return;
}



/* Address: 0x100b78d78 | FUN_100b78d78 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100b78d78(void)

{
  return;
}



/* Address: 0x100b78d80 | FUN_100b78d80 */

void FUN_100b78d80(void)

{
  return;
}



/* Address: 0x100b78d98 | FUN_100b78d98 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100b78d98(void)

{
  return;
}



/* Address: 0x100b78da0 | FUN_100b78da0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_100b78da0(undefined8 param_1)

{
  return param_1;
}



/* Address: 0x100b78da8 | FUN_100b78da8 */

void FUN_100b78da8(long param_1)

{
  undefined *local_18;
  
  local_18 = PTR___value_witness_table_for_Builtin_UnknownObject_100eabd30 + 0x40;
  _swift_initClassMetadata2(param_1,0,1,&local_18,param_1 + 0x58);
  return;
}



/* Address: 0x100b78dec | FUN_100b78dec */

void FUN_100b78dec(void)

{
  FUN_100bc2894();
  return;
}



/* Address: 0x100b78e14 | FUN_100b78e14 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b78e14(undefined8 param_1)

{
  FUN_100b78dec(param_1);
  return 0;
}



/* Address: 0x100b78e3c | FUN_100b78e3c */

void FUN_100b78e3c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("Sentry.SentryMetricKitIntegration",0x21,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100b78e68);
  (*pcVar1)();
}



/* Address: 0x100b78e68 | FUN_100b78e68 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b78e68(void)

{
  FUN_100b78e3c();
  return 0;
}



/* Address: 0x100b78e74 | FUN_100b78e74 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b78e74(void)

{
  return 0;
}



/* Address: 0x100b78e84 | FUN_100b78e84 */

void FUN_100b78e84(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100b78e90 | FUN_100b78e90 */

void FUN_100b78e90(undefined8 param_1,code *param_2,undefined8 param_3,undefined8 param_4)

{
  (*param_2)(param_4,param_1);
  return;
}



/* Address: 0x100b78ebc | FUN_100b78ebc */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100b78f84 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

Dictionary<undefined,undefined> FUN_100b78ebc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  long local_d8 [3];
  undefined *local_c0;
  undefined *local_38;
  
  puVar2 = &DAT_1010448c8;
  FUN_100b6730c();
  _swift_initStackObject();
  *(undefined8 *)(puVar2 + 0x18) = 4;
  *(undefined8 *)(puVar2 + 0x10) = 2;
  *(undefined1 **)(puVar2 + 0x20) = &DAT_65707974;
  *(undefined1 **)(puVar2 + 0x28) = &DAT_e400000000000000;
  puVar1 = PTR___type_metadata_for_Swift_Int_100eac6f8;
  *(undefined8 *)(puVar2 + 0x30) = *(undefined8 *)(unaff_x20 + _TtC6Sentry16SentryRRWebEvent::type);
  *(undefined **)(puVar2 + 0x48) = puVar1;
  *(undefined1 **)(puVar2 + 0x50) = &DAT_6d617473656d6974;
  *(undefined1 **)(puVar2 + 0x58) = &SUB_e900000000000070;
  FUN_100b7d154(0);
  lVar3 = unaff_x20 + _TtC6Sentry16SentryRRWebEvent::timestamp;
  FUN_100b7cab8();
  *(undefined **)(puVar2 + 0x78) = puVar1;
  *(long *)(puVar2 + 0x60) = lVar3;
  local_38 = (undefined *)
             Swift::Dictionary::_init
                       (lVar3,PTR___type_metadata_for_Swift_String_100eac208,
                        PTR___type_metadata_for_Any_100eae0c0 + 8,
                        PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100eac218
                       );
  local_d8[0] = *(long *)(unaff_x20 + _TtC6Sentry16SentryRRWebEvent::data);
  if (local_d8[0] != 0) {
    puVar2 = &DAT_101044968;
    FUN_100b6730c();
    local_c0 = puVar2;
    _swift_bridgeObjectRetain(local_d8[0]);
    FUN_100b78fe8(local_d8,0x61746164,&DAT_e400000000000000);
  }
  return (Dictionary<undefined,undefined>)local_38;
}



/* Address: 0x100b78fe8 | FUN_100b78fe8 */

void FUN_100b78fe8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_50 [32];
  
  if (*(long *)(param_1 + 0x18) == 0) {
    FUN_100b74780(param_1,&DAT_101044760);
    FUN_100b791e0(auStack_50,param_2,param_3);
    _swift_bridgeObjectRelease(param_3);
    FUN_100b74780(auStack_50,&DAT_101044760);
  }
  else {
    FUN_100011080(param_1,auStack_50);
    FUN_100bd5758(auStack_50,param_2,param_3);
    _swift_bridgeObjectRelease(param_3);
  }
  return;
}



/* Address: 0x100b79078 | FUN_100b79078 */

void FUN_100b79078(undefined8 param_1,_NativeDictionary param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *unaff_x20;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined8 local_60;
  undefined1 auStack_58 [8];
  
  puVar2 = &DAT_101044980;
  FUN_100b6730c();
  puVar6 = auStack_58 +
           (-8 - (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  FUN_100b7982c();
  lVar5 = *(long *)(puVar2 + -8);
  lVar7 = (long)puVar6 - (*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar3 = param_1;
  FUN_1000c9ff0(param_1,1,puVar2);
  if ((int)uVar3 == 1) {
    uVar4 = 0;
    FUN_100b74780(param_1);
    FUN_100b6cc14();
    bVar1 = (uVar4 & 1) == 0;
    if (!bVar1) {
      _swift_isUniquelyReferenced_nonNull_native(*unaff_x20);
      local_60 = *unaff_x20;
      FUN_100b6730c(&DAT_101044fb8);
      Swift::_NativeDictionary::uncheckedRemove((Bucket)auStack_58,SUB81(puVar6,0),param_2);
      *unaff_x20 = local_60;
    }
    FUN_1000c9ffc(puVar6,bVar1,1,puVar2);
    FUN_100b74780(puVar6,&DAT_101044980);
  }
  else {
    (**(code **)(lVar5 + 0x20))(lVar7,param_1,puVar2);
    FUN_100bd59c0(lVar7,param_2.unknown);
  }
  return;
}



/* Address: 0x100b791e0 | FUN_100b791e0 */

void FUN_100b791e0(undefined8 *param_1,_NativeDictionary param_2,ulong param_3)

{
  undefined8 *unaff_x20;
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined8 local_48;
  
  uVar1 = *unaff_x20;
  _swift_bridgeObjectRetain(uVar1);
  FUN_100071370();
  _swift_bridgeObjectRelease(uVar1);
  if ((param_3 & 1) == 0) {
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  else {
    _swift_isUniquelyReferenced_nonNull_native(*unaff_x20);
    uVar1 = *unaff_x20;
    FUN_100b6730c(&DAT_101044768);
    Swift::_NativeDictionary::uncheckedRemove((Bucket)auStack_50,SUB81(param_1,0),param_2);
    _swift_bridgeObjectRelease(local_48);
    *unaff_x20 = uVar1;
  }
  return;
}



/* Address: 0x100b792a8 | FUN_100b792a8 */

undefined1  [16] FUN_100b792a8(ulong param_1)

{
  undefined1 auVar1 [16];
  
  if ((param_1 < 6) && ((1L << (param_1 & 0x3f) & 0x39U) != 0)) {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = param_1;
    return auVar1;
  }
  return ZEXT816(1) << 0x40;
}



/* Address: 0x100b792d8 | FUN_100b792d8 */

void FUN_100b792d8(void)

{
  undefined8 *unaff_x20;
  
  FUN_100beeb28(*unaff_x20);
  return;
}



/* Address: 0x100b792e0 | FUN_100b792e0 */

void FUN_100b792e0(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  thunk_FUN_100bed29c(param_1,*unaff_x20);
  return;
}



/* Address: 0x100b792e8 | FUN_100b792e8 */

void FUN_100b792e8(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  thunk_FUN_100bed4dc(param_1,*unaff_x20);
  return;
}



/* Address: 0x100b792f0 | FUN_100b792f0 */

void FUN_100b792f0(undefined8 *param_1,undefined8 *param_2,byte param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_100b792a8();
  *param_1 = uVar1;
  *(byte *)(param_1 + 1) = param_3 & 1;
  return;
}



/* Address: 0x100b79320 | _TtC6Sentry16SentryRRWebEvent::type */

/* Function Stack Size: 0x10 bytes */

long_long _TtC6Sentry16SentryRRWebEvent::type(ID param_1,SEL param_2)

{
  FUN_100b79340();
  return param_1;
}



/* Address: 0x100b79340 | FUN_100b79340 */

undefined8 FUN_100b79340(void)

{
  long unaff_x20;
  
  return *(undefined8 *)(unaff_x20 + _TtC6Sentry16SentryRRWebEvent::type);
}



/* Address: 0x100b79350 | _TtC6Sentry16SentryRRWebEvent::timestamp */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry16SentryRRWebEvent::timestamp(ID param_1,SEL param_2)

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
  FUN_100b793c8(&stack0xffffffffffffffd0 + -(lVar4 + 0xfU & 0xfffffffffffffff0));
  pNVar3 = Foundation::Date::_bridgeToObjectiveC(DVar2);
  (**(code **)(lVar5 + 8))
            (&stack0xffffffffffffffd0 + -(lVar4 + 0xfU & 0xfffffffffffffff0),DVar1.unknown);
  return (ID)pNVar3;
}



/* Address: 0x100b793c8 | FUN_100b793c8 */

void FUN_100b793c8(undefined8 param_1,long param_2)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = _TtC6Sentry16SentryRRWebEvent::timestamp;
  FUN_100b7982c();
                    /* WARNING: Could not recover jumptable at 0x000100b79408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_2 + -8) + 0x10))(param_1,unaff_x20 + lVar1,param_2);
  return;
}



/* Address: 0x100b7940c | _TtC6Sentry16SentryRRWebEvent::data */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry16SentryRRWebEvent::data(ID param_1,SEL param_2)

{
  NSDictionary *pNVar1;
  
  FUN_100b7946c();
  if (param_1 == 0) {
    pNVar1 = (NSDictionary *)0x0;
  }
  else {
    pNVar1 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(param_1);
  }
  return (ID)pNVar1;
}



/* Address: 0x100b7946c | FUN_100b7946c */

void FUN_100b7946c(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + _TtC6Sentry16SentryRRWebEvent::data));
  return;
}



/* Address: 0x100b7947c | FUN_100b7947c */

ID FUN_100b7947c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ID IVar2;
  long unaff_x20;
  long lVar3;
  
  *(long *)(unaff_x20 + _TtC6Sentry16SentryRRWebEvent::type) = param_1;
  lVar1 = _TtC6Sentry16SentryRRWebEvent::timestamp;
  FUN_100b7982c();
  lVar3 = *(long *)(param_1 + -8);
  (**(code **)(lVar3 + 0x10))(unaff_x20 + lVar1,param_2,param_1);
  *(undefined8 *)(unaff_x20 + _TtC6Sentry16SentryRRWebEvent::data) = param_3;
  FUN_100b796a4();
  IVar2 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffb0,"init");
  (**(code **)(lVar3 + 8))(param_2,param_1);
  return IVar2;
}



/* Address: 0x100b79528 | _TtC6Sentry16SentryRRWebEvent::initWithType:timestamp:data: */

/* Function Stack Size: 0x28 bytes */

ID _TtC6Sentry16SentryRRWebEvent::initWithType_timestamp_data_
             (ID param_1,SEL param_2,long_long param_3,ID param_4,ID param_5)

{
  Date DVar1;
  Dictionary<undefined,undefined> DVar2;
  long lVar3;
  
  DVar1 = Foundation::Date::typeMetadataAccessor();
  lVar3 = *(long *)(*(long *)(DVar1.unknown + -8) + 0x40);
  Foundation::Date::__unconditionallyBridgeFromObjectiveC((Date)param_4);
  if (param_5 == 0) {
    DVar2.unknown = (undefined *)0x0;
  }
  else {
    DVar2 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  }
  FUN_100b7947c(param_3,&stack0xffffffffffffffc0 + -(lVar3 + 0xfU & 0xfffffffffffffff0),
                DVar2.unknown);
  return param_3;
}



/* Address: 0x100b795d4 | _TtC6Sentry16SentryRRWebEvent::serialize */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry16SentryRRWebEvent::serialize(ID param_1,SEL param_2)

{
  NSDictionary *pNVar1;
  
  FUN_100b78ebc(param_1);
  pNVar1 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_1);
  return (ID)pNVar1;
}



/* Address: 0x100b79638 | FUN_100b79638 */

void FUN_100b79638(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("Sentry.SentryRRWebEvent",0x17,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100b79664);
  (*pcVar1)();
}



/* Address: 0x100b79664 | _TtC6Sentry16SentryRRWebEvent::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry16SentryRRWebEvent::init(ID param_1,SEL param_2)

{
  ID IVar1;
  
  FUN_100b79638();
  FUN_100b796a4();
  IVar1 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffd0,"dealloc");
  return IVar1;
}



/* Address: 0x100b79670 | FUN_100b79670 */

void FUN_100b79670(void)

{
  FUN_100b796a4();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"dealloc");
  return;
}



/* Address: 0x100b796a4 | FUN_100b796a4 */

void FUN_100b796a4(undefined8 param_1)

{
  if (DAT_101044fa0 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetClassDescriptor_100ccd6ec);
  return;
}



/* Address: 0x100b796dc | _TtC6Sentry16SentryRRWebEvent::.cxx_destruct */

/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry16SentryRRWebEvent::_cxx_destruct(ID param_1,SEL param_2)

{
  long lVar1;
  ID IVar2;
  
  lVar1 = timestamp;
  IVar2 = param_1;
  FUN_100b7982c();
  (**(code **)(*(long *)(IVar2 - 8) + 8))(param_1 + lVar1,IVar2);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + data));
  return;
}



/* Address: 0x100b79724 | FUN_100b79724 */

void FUN_100b79724(void)

{
  FUN_100b796a4(0);
  return;
}



/* Address: 0x100b7972c | FUN_100b7972c */

undefined1  [16] FUN_100b7972c(Date param_1,ulong param_2)

{
  Date DVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined *local_38;
  long local_30;
  undefined *puStack_28;
  
  local_38 = PTR___value_witness_table_for_Builtin_Int64_100eabd48 + 0x40;
  DVar1 = Foundation::Date::typeMetadataAccessor();
  if (param_2 < 0x40) {
    local_30 = *(long *)(DVar1.unknown + -8) + 0x40;
    puStack_28 = &DAT_100c99c48;
    uVar2 = 0x100;
    _swift_updateClassMetadata2(param_1.unknown,0x100,3,&local_38,param_1.unknown + 0x50);
    if (param_1.unknown == (undefined *)0x0) {
      param_1.unknown = (undefined *)0x0;
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0x3f;
    param_1 = DVar1;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = param_1.unknown;
  return auVar3;
}



/* Address: 0x100b797b0 | FUN_100b797b0 */

void FUN_100b797b0(undefined8 param_1,undefined8 param_2)

{
  _swift_lookUpClassMethod(param_1,param_2,&TargetClassDescriptor_100ccd6ec);
  return;
}



/* Address: 0x100b797bc | FUN_100b797bc */

void FUN_100b797bc(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100b797d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0x70))();
  return;
}



/* Address: 0x100b797d8 | FUN_100b797d8 */

undefined1  [16] FUN_100b797d8(void)

{
  return ZEXT816(0x100f37080);
}



/* Address: 0x100b797e8 | thunk_FUN_100b797ec */

void thunk_FUN_100b797ec(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101044fb0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c99cf0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c99cf0,&DAT_100f37080);
  DAT_101044fb0 = pTVar1;
  return;
}



/* Address: 0x100b797ec | FUN_100b797ec */

void FUN_100b797ec(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101044fb0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c99cf0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c99cf0,&DAT_100f37080);
  DAT_101044fb0 = pTVar1;
  return;
}



/* Address: 0x100b7982c | FUN_100b7982c */

void FUN_100b7982c(void)

{
  Foundation::Date::typeMetadataAccessor();
  return;
}



/* Address: 0x100b79834 | FUN_100b79834 */

undefined1 * FUN_100b79834(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_58 [40];
  
  FUN_100076688(param_1,auStack_58);
  puVar1 = auStack_58;
  FUN_100b79890(puVar1);
  FUN_100004594(param_1);
  return puVar1;
}



/* Address: 0x100b79890 | FUN_100b79890 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x000100b79a0c) */
/* WARNING: Removing unreachable block (ram,0x000100b79ab8) */
/* WARNING: Removing unreachable block (ram,0x000100b79ac8) */
/* WARNING: Removing unreachable block (ram,0x000100b7994c) */

ID FUN_100b79890(long param_1)

{
  undefined *puVar1;
  NSString *pNVar2;
  undefined *puVar3;
  undefined *puVar4;
  NSArray *pNVar5;
  long lVar6;
  ID unaff_x20;
  long unaff_x21;
  long lVar7;
  String SVar8;
  undefined1 auStack_70 [8];
  long local_68;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar1 = &DAT_101044fe8;
  FUN_100b6730c();
  lVar7 = *(long *)(puVar1 + -8);
  lVar6 = *(long *)(lVar7 + 0x40);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_100b79e24();
  Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    local_51 = 0;
    SVar8 = Swift::KeyedDecodingContainer::_decode(&local_51,puVar1);
    _objc_allocWithZone();
    pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(SVar8.bridgeObject);
    unaff_x20 = _objc_msgSend(unaff_x20,"initWithFormatted:",pNVar2);
    local_52 = 1;
    puVar3 = puVar1;
    Swift::KeyedDecodingContainer::_decodeIfPresent(&local_52);
    if (puVar3 == (undefined *)0x0) {
      pNVar2 = (NSString *)0x0;
    }
    else {
      pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(puVar3);
    }
    _objc_msgSend(unaff_x20,"setMessage:",pNVar2);
    puVar3 = &DAT_101044808;
    FUN_100b6730c(&DAT_101044808);
    local_53 = 2;
    puVar4 = puVar3;
    FUN_100b79e64();
    Swift::KeyedDecodingContainer::_decodeIfPresent(&local_68,puVar3,&local_53,puVar1,puVar3,puVar4)
    ;
    if (local_68 == 0) {
      pNVar5 = (NSArray *)0x0;
    }
    else {
      pNVar5 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(local_68);
    }
    _objc_msgSend(unaff_x20,"setParams:",pNVar5);
    (**(code **)(lVar7 + 8))(auStack_70 + -(lVar6 + 0xfU & 0xfffffffffffffff0),puVar1);
    FUN_100004594(param_1);
  }
  else {
    FUN_100004594(param_1);
  }
  return unaff_x20;
}



/* Address: 0x100b79b50 | FUN_100b79b50 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100b79b50(undefined8 param_1,undefined8 param_2)

{
  NSString *pNVar1;
  ID IVar2;
  
  _swift_getObjectType();
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_2);
  IVar2 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffc0,"initWithFormatted:",pNVar1);
  return IVar2;
}



/* Address: 0x100b79bcc | _TtC6Sentry22SentryMessageDecodable::initWithFormatted: */

/* Function Stack Size: 0x18 bytes */

ID _TtC6Sentry22SentryMessageDecodable::initWithFormatted_(ID param_1,SEL param_2,ID param_3)

{
  char *pcVar1;
  String SVar2;
  
  SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pcVar1 = SVar2.str;
  FUN_100b79b50(pcVar1,SVar2.bridgeObject);
  return (ID)pcVar1;
}



/* Address: 0x100b79bf4 | FUN_100b79bf4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100b79bf4(void)

{
  return ZEXT816(0x100f9fca8);
}



/* Address: 0x100b79c14 | FUN_100b79c14 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100b79c48 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ulong FUN_100b79c14(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  FUN_100b6730c(&DAT_101045018);
  _swift_initStaticObject();
  uVar1 = Swift::_findStringSwitchCase(param_1,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  if (2 < uVar1) {
    uVar1 = 3;
  }
  return uVar1;
}



/* Address: 0x100b79c70 | FUN_100b79c70 */

undefined1  [16] FUN_100b79c70(char param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_1 != '\0') {
    uVar1 = 0x6567617373656d;
    if (param_1 != '\x01') {
      uVar1 = 0x736d61726170;
    }
    puVar2 = &DAT_e700000000000000;
    if (param_1 != '\x01') {
      puVar2 = &DAT_e600000000000000;
    }
    auVar3._8_8_ = puVar2;
    auVar3._0_8_ = uVar1;
    return auVar3;
  }
  auVar4._8_8_ = 0xe900000000000064;
  auVar4._0_8_ = 0x657474616d726f66;
  return auVar4;
}



/* Address: 0x100b79cc8 | FUN_100b79cc8 */

void FUN_100b79cc8(undefined1 *param_1,undefined1 *param_2)

{
  switchD_100bec0c4::caseD_ea(*param_1,*param_2);
  return;
}



/* Address: 0x100b79cd4 | FUN_100b79cd4 */

void FUN_100b79cd4(void)

{
  undefined1 *unaff_x20;
  
  FUN_100bec7f4(*unaff_x20);
  return;
}



/* Address: 0x100b79cdc | FUN_100b79cdc */

void FUN_100b79cdc(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  FUN_100bed0cc(param_1,*unaff_x20);
  return;
}



/* Address: 0x100b79ce4 | FUN_100b79ce4 */

void FUN_100b79ce4(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  FUN_100bed338(param_1,*unaff_x20);
  return;
}



/* Address: 0x100b79cec | FUN_100b79cec */

void FUN_100b79cec(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_100b79c14(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Address: 0x100b79d18 | FUN_100b79d18 */

void FUN_100b79d18(ulong *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  byte *unaff_x20;
  
  uVar1 = (ulong)*unaff_x20;
  FUN_100b79c70();
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}



/* Address: 0x100b79d40 | FUN_100b79d40 */

void FUN_100b79d40(void)

{
  undefined1 *unaff_x20;
  
  FUN_100b79c70(*unaff_x20);
  return;
}



/* Address: 0x100b79d48 | FUN_100b79d48 */

void FUN_100b79d48(undefined1 *param_1,undefined1 param_2)

{
  FUN_100b79c14();
  *param_1 = param_2;
  return;
}



/* Address: 0x100b79d6c | FUN_100b79d6c */

void FUN_100b79d6c(void)

{
  undefined1 *unaff_x20;
  
  FUN_1000dcbb0(*unaff_x20);
  return;
}



/* Address: 0x100b79d88 | FUN_100b79d88 */

void FUN_100b79d88(undefined1 *param_1,undefined1 param_2)

{
  FUN_1000f77f0();
  *param_1 = param_2;
  return;
}


