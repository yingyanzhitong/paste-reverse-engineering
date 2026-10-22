/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1003b1e9c | FUN_1003b1e9c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001003b1f04 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1003b1e9c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long extraout_x8;
  
  lVar1 = 0;
  FUN_1003b2fc0();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  FUN_10006313c(param_2,&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  Combine::Published::init(param_1,lVar1,lVar1);
  FUN_1000629fc(param_2);
  return;
}



/* Address: 0x1003b1f24 | FUN_1003b1f24 */

void FUN_1003b1f24(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  puVar1 = &DAT_100c44548;
  _swift_getKeyPath(&DAT_100c44548);
  puVar2 = &DAT_100c44570;
  _swift_getKeyPath(&DAT_100c44570);
  Combine::Published::_get_subscript(param_1,uVar3,puVar1,puVar2);
  _swift_release(puVar1);
  _swift_release(puVar2);
  return;
}



/* Address: 0x1003b1f8c | thunk_FUN_1003b1f24 */

void thunk_FUN_1003b1f24(void)

{
  FUN_1003b1f24();
  return;
}



/* Address: 0x1003b1f90 | FUN_1003b1f90 */

void FUN_1003b1f90(Published *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long extraout_x8;
  undefined8 uVar4;
  
  lVar1 = 0;
  FUN_1003b2fc0();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  uVar4 = *param_2;
  puVar2 = &DAT_100c44548;
  _swift_getKeyPath(&DAT_100c44548);
  puVar3 = &DAT_100c44570;
  _swift_getKeyPath(&DAT_100c44570);
  FUN_10006313c(param_1,&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  _swift_retain(uVar4);
  Combine::Published::_set_subscript
            (param_1,&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),uVar4,
             puVar2,puVar3);
  FUN_1003b2054();
  return;
}



/* Address: 0x1003b204c | thunk_FUN_1003b1f90 */

void thunk_FUN_1003b1f90(void)

{
  FUN_1003b1f90();
  return;
}



/* Address: 0x1003b2050 | thunk_FUN_1003a98e4 */

void thunk_FUN_1003a98e4(void)

{
  FUN_1003a98e4();
  return;
}



/* Address: 0x1003b2054 | FUN_1003b2054 */

void FUN_1003b2054(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long extraout_x8;
  undefined1 *puVar5;
  String SVar6;
  String SVar7;
  undefined1 auStack_90 [8];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  undefined8 local_60;
  long lStack_58;
  
  lVar2 = 0;
  FUN_1003b2fc0();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar5 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_1000da768(auStack_78);
  FUN_100004640(auStack_78,local_60);
  local_88 = 0;
  uStack_80 = 0xe000000000000000;
  SVar6.bridgeObject = (void *)0xed0000203a737574;
  SVar6.str = (char *)0x61747320636e7953;
  SVar7.bridgeObject = param_4;
  SVar7.str = param_3;
  Swift::String::append(SVar6,SVar7);
  puVar3 = &DAT_100c44548;
  _swift_getKeyPath(&DAT_100c44548);
  puVar4 = &DAT_100c44570;
  _swift_getKeyPath(&DAT_100c44570);
  Combine::Published::_get_subscript(puVar5);
  _swift_release(puVar3);
  _swift_release(puVar4);
  Swift::__print_unlocked
            (puVar5,&local_88,lVar2,
             PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
             PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
            );
  FUN_1000629fc(puVar5);
  uVar1 = uStack_80;
  (**(code **)(lStack_58 + 0x30))
            (0x636e7973,&DAT_e400000000000000,local_88,uStack_80,local_60,lStack_58);
  _swift_bridgeObjectRelease(uVar1);
  FUN_100004594(auStack_78);
  return;
}



/* Address: 0x1003b21c4 | FUN_1003b21c4 */

void FUN_1003b21c4(void)

{
  FUN_1003b21e0(&_TtC9PasteCore10SyncEngine::_status,&DAT_100fbe480,&DAT_100c40548);
  return;
}



/* Address: 0x1003b21e0 | FUN_1003b21e0 */

void FUN_1003b21e0(long *param_1,Published param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(unaff_x20 + *param_1,auStack_58,0x21,0);
  FUN_1000037f0(param_2.unknown,param_3);
  Combine::Published::_get_projectedValue(param_2);
  _swift_endAccess(auStack_58);
  return;
}



/* Address: 0x1003b2254 | FUN_1003b2254 */

void FUN_1003b2254(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                  Published param_5,undefined8 param_6)

{
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(*param_1 + *param_4,auStack_58,0x21,0);
  FUN_1000037f0(param_5.unknown,param_6);
  Combine::Published::_get_projectedValue(param_5);
  _swift_endAccess(auStack_58);
  return;
}



/* Address: 0x1003b22cc | FUN_1003b22cc */

void FUN_1003b22cc(undefined8 param_1,long *param_2)

{
  long lVar1;
  long extraout_x8;
  long extraout_x12;
  long lVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [24];
  
  FUN_1000037f0(&DAT_100fc2470,&DAT_100c44690);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar2 = *param_2;
  (**(code **)(extraout_x8 + 0x10))(auStack_50 + -extraout_x12,param_1);
  lVar1 = _TtC9PasteCore10SyncEngine::_status;
  _swift_beginAccess(lVar2 + _TtC9PasteCore10SyncEngine::_status,auStack_48,0x21,0);
  FUN_1000037f0(&DAT_100fbe480,&DAT_100c40548);
  Combine::Published::_set_projectedValue
            ((Published *)(lVar2 + lVar1),(Publisher)(auStack_50 + -extraout_x12));
  _swift_endAccess(auStack_48);
  return;
}



/* Address: 0x1003b2398 | FUN_1003b2398 */

void FUN_1003b2398(undefined8 param_1,long param_2)

{
  param_2 = param_2 + 0x10;
  _swift_weakLoadStrong();
  if (param_2 != 0) {
    FUN_1003a92d0();
    _swift_release(param_2);
    return;
  }
  return;
}



/* Address: 0x1003b23d4 | FUN_1003b23d4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003b23d4(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar4 = _TtC9PasteCore10SyncEngine::_isAvailable;
  puVar5 = &DAT_100fbe488;
  FUN_1000037f0(&DAT_100fbe488,&DAT_100c40550);
  (**(code **)(*(long *)(puVar5 + -8) + 8))(unaff_x20 + lVar4,puVar5);
  puVar1 = (undefined8 *)(unaff_x20 + _TtC9PasteCore10SyncEngine::_isEnabled);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  uVar6 = puVar1[2];
  uVar7 = puVar1[4];
  _swift_release(puVar1[6]);
  _swift_release(uVar7);
  _swift_release(uVar6);
  _swift_release(uVar3);
  _swift_release(uVar2);
  lVar4 = _TtC9PasteCore10SyncEngine::_status;
  puVar5 = &DAT_100fbe480;
  FUN_1000037f0(&DAT_100fbe480,&DAT_100c40548);
  (**(code **)(*(long *)(puVar5 + -8) + 8))(unaff_x20 + lVar4,puVar5);
  _swift_bridgeObjectRelease
            (*(undefined8 *)(unaff_x20 + _TtC9PasteCore10SyncEngine::activeSyncScopes));
  _swift_release(*(undefined8 *)(unaff_x20 + _TtC9PasteCore10SyncEngine::logger));
  _swift_release(*(undefined8 *)(unaff_x20 + _TtC9PasteCore10SyncEngine::telemetry));
  _swift_release(*(undefined8 *)(unaff_x20 + _TtC9PasteCore10SyncEngine::analytics));
  _swift_release(*(undefined8 *)(unaff_x20 + _TtC9PasteCore10SyncEngine::undoManager));
  FUN_100004594(unaff_x20 + _TtC9PasteCore10SyncEngine::persistentStack);
  _swift_release(*(undefined8 *)(unaff_x20 + _TtC9PasteCore10SyncEngine::conflictResolver));
  _swift_release(*(undefined8 *)(unaff_x20 + _TtC9PasteCore10SyncEngine::privateSyncEngine));
  _swift_release(*(undefined8 *)(unaff_x20 + _TtC9PasteCore10SyncEngine::sharedSyncEngine));
  _swift_release(*(undefined8 *)(unaff_x20 + _TtC9PasteCore10SyncEngine::contextChangesTask));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + _TtC9PasteCore10SyncEngine::cancellables));
  _swift_bridgeObjectRelease
            (*(undefined8 *)(unaff_x20 + _TtC9PasteCore10SyncEngine::syncNudgeCompletions));
  return;
}



/* Address: 0x1003b2590 | FUN_1003b2590 */

void FUN_1003b2590(void)

{
  FUN_1003b23d4();
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1003b25b4 | thunk_FUN_1003a994c */

void thunk_FUN_1003a994c(void)

{
  FUN_1003a994c();
  return;
}



/* Address: 0x1003b25b8 | FUN_1003b25b8 */

void FUN_1003b25b8(void)

{
  FUN_1003b2254();
  return;
}



/* Address: 0x1003b25e4 | thunk_FUN_1003b1874 */

void thunk_FUN_1003b1874(void)

{
  FUN_1003b1874();
  return;
}



/* Address: 0x1003b25e8 | thunk_FUN_1003a9970 */

void thunk_FUN_1003a9970(void)

{
  FUN_1003a9970();
  return;
}



/* Address: 0x1003b25ec | thunk_FUN_1003a9a64 */

void thunk_FUN_1003a9a64(void)

{
  FUN_1003a9a64();
  return;
}



/* Address: 0x1003b25f0 | FUN_1003b25f0 */

void FUN_1003b25f0(void)

{
  FUN_1003b2254();
  return;
}



/* Address: 0x1003b261c | thunk_FUN_1003b22cc */

void thunk_FUN_1003b22cc(void)

{
  FUN_1003b22cc();
  return;
}



/* Address: 0x1003b2620 | FUN_1003b2620 */

void FUN_1003b2620(void)

{
  FUN_1003b2628(0);
  return;
}



/* Address: 0x1003b2628 | FUN_1003b2628 */

void FUN_1003b2628(undefined8 param_1)

{
  if (DAT_100fc2340 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetClassDescriptor_100cad568);
  return;
}



/* Address: 0x1003b2660 | FUN_1003b2660 */

void FUN_1003b2660(long param_1,ulong param_2)

{
  long lVar1;
  long local_c0;
  undefined *puStack_b8;
  long local_b0;
  undefined *puStack_a8;
  undefined *local_a0;
  undefined *puStack_98;
  undefined *local_90;
  undefined *puStack_88;
  undefined *local_80;
  undefined *puStack_78;
  undefined *local_70;
  undefined *puStack_68;
  undefined *local_60;
  undefined *puStack_58;
  undefined *local_50;
  undefined *puStack_48;
  undefined *local_40;
  undefined *puStack_38;
  undefined *local_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  FUN_1003b2748();
  if (param_2 < 0x40) {
    local_c0 = *(long *)(lVar1 + -8) + 0x40;
    puStack_b8 = &DAT_100c44630;
    lVar1 = 0x13f;
    FUN_1003b2798();
    if (param_2 < 0x40) {
      local_b0 = *(long *)(lVar1 + -8) + 0x40;
      puStack_a8 = PTR___value_witness_table_for_Builtin_BridgeObject_100eabd38 + 0x40;
      local_a0 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
      puStack_78 = PTR___value_witness_table_for_Builtin_UnknownObject_100eabd30 + 0x40;
      local_80 = &DAT_100c44648;
      puStack_68 = &DAT_100c44660;
      local_60 = &DAT_100c44660;
      puStack_58 = &DAT_100c44660;
      local_50 = &DAT_100c44660;
      puStack_38 = &DAT_100c44678;
      puStack_28 = &DAT_100c44678;
      puStack_98 = local_a0;
      local_90 = local_a0;
      puStack_88 = local_a0;
      local_70 = local_a0;
      puStack_48 = puStack_a8;
      local_40 = puStack_78;
      local_30 = puStack_a8;
      _swift_updateClassMetadata2(param_1,0x100,0x14,&local_c0,param_1 + 0x50);
    }
  }
  return;
}



/* Address: 0x1003b2748 | FUN_1003b2748 */

void FUN_1003b2748(void)

{
  Published PVar1;
  undefined *puVar2;
  
  if (DAT_100fc2350 != (undefined *)0x0) {
    return;
  }
  puVar2 = PTR___type_metadata_for_Swift_Bool_100eac570;
  PVar1 = Combine::Published::typeMetadataAccessor();
  if (puVar2 != (undefined *)0x0) {
    return;
  }
  DAT_100fc2350 = PVar1.unknown;
  return;
}



/* Address: 0x1003b2798 | FUN_1003b2798 */

void FUN_1003b2798(void)

{
  long lVar1;
  Published PVar2;
  
  if (DAT_100fc2358.unknown == (undefined *)0x0) {
    lVar1 = 0xff;
    FUN_1003b2fc0();
    PVar2 = Combine::Published::typeMetadataAccessor();
    if (lVar1 == 0) {
      DAT_100fc2358 = PVar2;
    }
  }
  return;
}



/* Address: 0x1003b27ec | FUN_1003b27ec */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001003b2864) */

undefined8 FUN_1003b27ec(void)

{
  long *plVar1;
  JSONEncoder *pJVar2;
  Serialization SVar3;
  char *pcVar4;
  Data DVar5;
  undefined *puVar6;
  NSData *pNVar7;
  NSString *pNVar8;
  _StringGuts _Var9;
  void *in_x3;
  String SVar10;
  String SVar11;
  ID local_50 [2];
  
  pJVar2 = Foundation::JSONEncoder::typeMetadataAccessor();
  _swift_allocObject(pJVar2,*(undefined4 *)(pJVar2 + 0x30),*(undefined2 *)(pJVar2 + 0x34));
  pJVar2 = Foundation::JSONEncoder::init(pJVar2);
  SVar3 = CloudKit::CKSyncEngine::State::Serialization::typeMetadataAccessor();
  pcVar4 = &DAT_100fc2488;
  FUN_1003b2ef0(&DAT_100fc2488,
                PTR_CloudKit__CloudKit__CKSyncEngine__State__Serialization_>Swift__Encodable_100ea9448
               );
  DVar5 = Foundation::JSONEncoder::_encode(pJVar2);
  _swift_release(pJVar2);
  if (DAT_100fbe470 != -1) {
    _swift_once(&DAT_100fbe470,FUN_1002fd274);
  }
  plVar1 = DAT_101057968;
  puVar6 = &DAT_100c446a0;
  _swift_getKeyPath(&DAT_100c446a0);
  (**(code **)(*plVar1 + 0x98))(local_50);
  _swift_release(puVar6);
  _Var9.unknown = SVar3.unknown;
  pNVar7 = Foundation::Data::_bridgeToObjectiveC(DVar5);
  Swift::_StringGuts::grow(0x14,_Var9);
  _swift_bridgeObjectRelease(0xe000000000000000);
  SVar10 = Swift::CustomStringConvertible::get_description();
  SVar11.bridgeObject = in_x3;
  SVar11.str = pcVar4;
  Swift::String::append(SVar10,SVar11);
  _swift_bridgeObjectRelease(SVar10.bridgeObject);
  pNVar8 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(0x8000000100da4f40);
  objc_stub::setObject_forKey_(local_50[0],pNVar7,pNVar8);
  FUN_10003bf2c(DVar5.unknown,SVar3.unknown);
  return 0;
}



/* Address: 0x1003b29d4 | FUN_1003b29d4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003b29d4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long *plVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  NSString *pNVar6;
  ID self;
  UnsafeContinuation<undefined,undefined> continuation;
  long lVar7;
  long unaff_x22;
  long lVar8;
  String function;
  
  *(undefined8 *)(unaff_x22 + 0xa8) = param_1;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_2;
  puVar3 = &DAT_100fc01c8;
  FUN_1000037f0(&DAT_100fc01c8,&DAT_100c41f48);
  lVar8 = *(long *)(puVar3 + -8);
  uVar4 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xb8) = uVar4;
  if (DAT_100fbe470 != -1) {
    _swift_once(&DAT_100fbe470,FUN_1002fd274);
  }
  plVar2 = DAT_101057968;
  puVar5 = &DAT_100c446c8;
  _swift_getKeyPath(&DAT_100c446c8);
  (**(code **)(*plVar2 + 0x98))(unaff_x22 + 0x90);
  _swift_release(puVar5);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
  pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(uVar1);
  self = CKContainer::containerWithIdentifier_((ID)&_OBJC_CLASS___CKContainer,pNVar6);
  *(ID *)(unaff_x22 + 0xc0) = self;
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0xa0;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_1003b2bd0;
  continuation.unknown = (undefined *)(unaff_x22 + 0x10);
  _swift_continuation_init(continuation.unknown,1);
  *(undefined **)(unaff_x22 + 0x88) = puVar3;
  lVar7 = unaff_x22 + 0x70;
  FUN_10000cbb0(lVar7);
  FUN_1002fc1ec(0);
  FUN_1000037f0(&DAT_100fc1bb0,&DAT_100c422e0);
  function.bridgeObject = (void *)0x8000000100da1040;
  function.str = (char *)0xd000000000000026;
  Swift::CheckedContinuation::init(continuation,function);
  (**(code **)(lVar8 + 0x20))(lVar7,uVar4,puVar3);
  *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_100ea82a0;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
  *(code **)(unaff_x22 + 0x60) = FUN_1003b1114;
  *(undefined **)(unaff_x22 + 0x68) = &DAT_100ece8c0;
  CKContainer::accountStatusWithCompletionHandler_(self);
  (**(code **)(lVar8 + 8))(lVar7,puVar3);
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}



/* Address: 0x1003b2bd0 | FUN_1003b2bd0 */

void FUN_1003b2bd0(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar4 + 0xa8);
  uVar3 = *(undefined8 *)(lVar4 + 0xb0);
  lVar5 = *(long *)(lVar4 + 0x30);
  *(long *)(lVar4 + 200) = lVar5;
  FUN_1000da368(uVar1,uVar3);
  if (lVar5 == 0) {
    pcVar2 = FUN_1003b2c34;
  }
  else {
    pcVar2 = FUN_1003b2c80;
  }
  _swift_task_switch(pcVar2,uVar1,uVar3);
  return;
}



/* Address: 0x1003b2c34 | FUN_1003b2c34 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003b2c34(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0xa0);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xb8));
                    /* WARNING: Could not recover jumptable at 0x0001003b2c7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(lVar1 == 1);
  return;
}



/* Address: 0x1003b2c80 | FUN_1003b2c80 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003b2c80(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb8);
  _swift_willThrow();
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001003b2cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Address: 0x1003b2cd4 | FUN_1003b2cd4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1003b2cd4(undefined8 param_1,code *param_2,char *param_3,void *param_4)

{
  long *plVar1;
  ID self;
  undefined *puVar2;
  NSString *pNVar3;
  undefined *puVar4;
  undefined *extraout_x1;
  _StringGuts _Var5;
  code *pcVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  ID local_68;
  
  if (DAT_100fbe470 != -1) {
    param_2 = FUN_1002fd274;
    _swift_once(&DAT_100fbe470);
  }
  plVar1 = DAT_101057968;
  puVar4 = &DAT_100c446a0;
  puVar2 = puVar4;
  _swift_getKeyPath(&DAT_100c446a0);
  pcVar6 = *(code **)(*plVar1 + 0x98);
  (*pcVar6)(&local_68);
  _swift_release(puVar2);
  self = local_68;
  Swift::_StringGuts::grow(0x14,(_StringGuts)param_2);
  _swift_bridgeObjectRelease(0xe000000000000000);
  SVar7 = Swift::CustomStringConvertible::get_description();
  SVar8.bridgeObject = param_4;
  SVar8.str = param_3;
  Swift::String::append(SVar7,SVar8);
  _swift_bridgeObjectRelease(SVar7.bridgeObject);
  pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(0x8000000100da4f40);
  objc_stub::removeObjectForKey_(self);
  _Var5.unknown = extraout_x1;
  _swift_getKeyPath(&DAT_100c446a0);
  (*pcVar6)(&local_68);
  _swift_release(puVar4);
  Swift::_StringGuts::grow(0x14,_Var5);
  _swift_bridgeObjectRelease(0xe000000000000000);
  SVar7 = Swift::CustomStringConvertible::get_description();
  SVar9.bridgeObject = param_4;
  SVar9.str = (char *)pNVar3;
  Swift::String::append(SVar7,SVar9);
  _swift_bridgeObjectRelease(SVar7.bridgeObject);
  pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(0x8000000100da4f40);
  objc_stub::removeObjectForKey_(local_68,pNVar3);
  return 0;
}



/* Address: 0x1003b2ec8 | FUN_1003b2ec8 */

void FUN_1003b2ec8(long param_1,long param_2)

{
  FUN_10000cbfc(param_2 + 0x20,param_1 + 0x20);
  return;
}



/* Address: 0x1003b2ed8 | FUN_1003b2ed8 */

void FUN_1003b2ed8(long param_1)

{
  FUN_100004594(param_1 + 0x20);
  return;
}



/* Address: 0x1003b2ef0 | FUN_1003b2ef0 */

void FUN_1003b2ef0(long *param_1,long param_2)

{
  Serialization SVar1;
  
  if (*param_1 == 0) {
    SVar1 = CloudKit::CKSyncEngine::State::Serialization::typeMetadataAccessor();
    _swift_getWitnessTable(param_2,SVar1.unknown);
    *param_1 = param_2;
  }
  return;
}



/* Address: 0x1003b2f30 | thunk_FUN_1003a98e4 */

void thunk_FUN_1003a98e4(void)

{
  thunk_FUN_1003a98e4();
  return;
}



/* Address: 0x1003b2f34 | thunk_FUN_1003a994c */

void thunk_FUN_1003a994c(void)

{
  thunk_FUN_1003a994c();
  return;
}



/* Address: 0x1003b2f38 | FUN_1003b2f38 */

bool FUN_1003b2f38(void)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  
  lVar1 = 0;
  FUN_1003b2fc0();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_10006313c();
  puVar2 = puVar3;
  _swift_getEnumCaseMultiPayload(puVar3,lVar1);
  FUN_1000629fc(puVar3);
  return (int)puVar2 == 2;
}



/* Address: 0x1003b2fc0 | FUN_1003b2fc0 */

void FUN_1003b2fc0(undefined8 param_1)

{
  if (DAT_100fc2500 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetEnumDescriptor_100cad5b0);
  return;
}



/* Address: 0x1003b2ff8 | FUN_1003b2ff8 */

ID FUN_1003b2ff8(void)

{
  undefined *self;
  ID self_00;
  
  self = &_OBJC_CLASS___NSRelativeDateTimeFormatter;
  _objc_allocWithZone();
  self_00 = objc_stub::init((ID)self);
  objc_stub::setDateTimeStyle_(self_00,1);
  return self_00;
}



/* Address: 0x1003b3030 | FUN_1003b3030 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_1003b3030(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  CancellationError CVar1;
  LocalizedStringResource LVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  char *pcVar6;
  void *pvVar7;
  char **ppcVar8;
  char *pcVar9;
  int iVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  char *pcVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  undefined1 auVar20 [16];
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  long local_a0 [2];
  char *local_90;
  String local_88;
  char *local_78;
  undefined1 local_70 [24];
  undefined1 auStack_58 [8];
  void *pvVar10;
  
  CVar1 = Swift::CancellationError::typeMetadataAccessor();
  lVar15 = *(long *)(CVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar15 + 0x40));
  lVar13 = (long)local_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  LVar2 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar2.unknown + -8) + 0x40));
  LVar2.unknown = (undefined *)(lVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  puVar3 = &DAT_100fbe6e8;
  FUN_1000037f0(&DAT_100fbe6e8,&DAT_100c43250);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  pcVar12 = LVar2.unknown + -extraout_x8_01;
  lVar4 = 0;
  FUN_1003b2fc0();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  plVar14 = (long *)(pcVar12 + -(extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  FUN_10006313c();
  plVar5 = plVar14;
  _swift_getEnumCaseMultiPayload(plVar14,lVar4);
  iVar11 = (int)plVar5;
  pcVar6 = (char *)0x0;
  pvVar7 = (void *)0x0;
  if (iVar11 < 3) {
    if (iVar11 == 0) {
      pcVar9 = pcVar12;
      FUN_100354148(plVar14);
      pcVar6 = pcVar12;
      FUN_1003b33f8();
      FUN_1001e3ad4(LVar2.unknown);
      local_88 = (extension_Foundation)::Swift::String::init(LVar2);
      SVar18.bridgeObject = (void *)0xe100000000000000;
      SVar18.str = (char *)0x20;
      SVar21.bridgeObject = param_4;
      SVar21.str = param_3;
      Swift::String::append(SVar18,SVar21);
      SVar16.bridgeObject = pcVar9;
      SVar16.str = pcVar6;
      SVar22.bridgeObject = param_4;
      SVar22.str = param_3;
      Swift::String::append(SVar16,SVar22);
      _swift_bridgeObjectRelease(pcVar9);
      pcVar6 = local_88.str;
      pvVar7 = local_88.bridgeObject;
      FUN_100378618(pcVar12);
    }
    else {
      if (iVar11 == 1) {
        pcVar12 = (char *)*plVar14;
        local_88.str = pcVar12;
        _swift_errorRetain(pcVar12);
        pcVar6 = &DAT_100fc1bb0;
        FUN_1000037f0(&DAT_100fc1bb0,&DAT_100c422e0);
        lVar4 = lVar13;
        _swift_dynamicCast(lVar13,&local_88,pcVar6,CVar1.unknown,6);
        if ((int)lVar4 != 0) {
          (**(code **)(lVar15 + 8))(lVar13,CVar1.unknown);
          _swift_errorRelease(pcVar12);
          pcVar6 = (char *)0x0;
          pvVar7 = (void *)0xe000000000000000;
          goto LAB_1003b33dc;
        }
        _swift_getErrorValue(pcVar12,auStack_58,local_70);
        SVar18 = (extension_Foundation)::Swift::Error::get_localizedDescription();
        pvVar10 = SVar18.bridgeObject;
        local_88.str = pcVar12;
        _swift_errorRetain(pcVar12);
        pvVar7 = (void *)0x0;
        FUN_1002fbb58();
        ppcVar8 = &local_78;
        _swift_dynamicCast(ppcVar8,&local_88,pcVar6,pvVar7,6);
        pcVar9 = local_78;
        if (((ulong)ppcVar8 & 1) != 0) {
          local_88.str = local_78;
          FUN_1003b0fd8();
          (extension_Foundation)::Foundation::_BridgedStoredNSError::_get_code();
          if (local_78 + -3 < (char *)0x2) {
            FUN_1001e3954(LVar2.unknown);
          }
          else if (local_78 == (char *)0x24) {
            FUN_1001e37d4(LVar2.unknown);
          }
          else if (local_78 == (char *)0x19) {
            FUN_1001e3654(LVar2.unknown);
          }
          else {
            local_90 = pcVar9;
            (extension_Foundation)::Foundation::_BridgedStoredNSError::_get_code();
            local_a0[0] = local_a0[1];
            SVar18 = Swift::CustomStringConvertible::get_description();
            thunk_FUN_1001e7164(LVar2.unknown,SVar18.str);
            _swift_bridgeObjectRelease(SVar18.bridgeObject);
          }
          SVar18 = (extension_Foundation)::Swift::String::init(LVar2);
          _swift_bridgeObjectRelease(pvVar10);
        }
        FUN_1001c4cf4(LVar2.unknown);
        local_88 = (extension_Foundation)::Swift::String::init(LVar2);
        SVar19.bridgeObject = &SUB_e200000000000000;
        SVar19.str = (char *)0x203a;
        SVar24.bridgeObject = pvVar7;
        SVar24.str = pcVar6;
        Swift::String::append(SVar19,SVar24);
        SVar25.bridgeObject = pvVar7;
        SVar25.str = pcVar6;
        Swift::String::append(SVar18,SVar25);
        _swift_errorRelease(pcVar12);
        _swift_bridgeObjectRelease(SVar18.bridgeObject);
      }
      else {
        FUN_1001e3f54(LVar2.unknown,0,0);
        local_88 = (extension_Foundation)::Swift::String::init(LVar2);
        SVar17.bridgeObject = (void *)0xe300000000000000;
        SVar17.str = (char *)0x2e2e2e;
        SVar23.bridgeObject = param_4;
        SVar23.str = param_3;
        Swift::String::append(SVar17,SVar23);
      }
      pcVar6 = local_88.str;
      pvVar7 = local_88.bridgeObject;
    }
  }
LAB_1003b33dc:
  auVar20._8_8_ = pvVar7;
  auVar20._0_8_ = pcVar6;
  return auVar20;
}



/* Address: 0x1003b33f8 | FUN_1003b33f8 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

String FUN_1003b33f8(undefined8 param_1)

{
  LocalizedStringResource LVar1;
  Date DVar2;
  Date DVar3;
  ID self;
  long extraout_x8;
  long extraout_x8_00;
  undefined *puVar4;
  long lVar5;
  double dVar6;
  String SVar7;
  
  LVar1 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar1.unknown + -8) + 0x40));
  LVar1.unknown = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100fbe6e8;
  FUN_1000037f0(&DAT_100fbe6e8,&DAT_100c43250);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = LVar1.unknown + -extraout_x8_00;
  FUN_100364a64(param_1,puVar4);
  DVar2 = Foundation::Date::typeMetadataAccessor();
  lVar5 = *(long *)(DVar2.unknown + -8);
  DVar3.unknown = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,DVar2.unknown);
  if ((int)DVar3.unknown == 1) {
    FUN_100378618(puVar4);
    FUN_1001e3c54(LVar1.unknown);
    SVar7 = (extension_Foundation)::Swift::String::init(LVar1);
  }
  else {
    dVar6 = Foundation::Date::get_timeIntervalSinceNow(DVar3);
    (**(code **)(lVar5 + 8))(puVar4,DVar2.unknown);
    puVar4 = &_OBJC_CLASS___NSRelativeDateTimeFormatter;
    _objc_allocWithZone();
    self = objc_stub::init((ID)puVar4);
    objc_stub::setDateTimeStyle_(self,1);
    objc_stub::FUN_100c064e0(self,dVar6);
    SVar7 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  return SVar7;
}



/* Address: 0x1003b3560 | FUN_1003b3560 */

long * FUN_1003b3560(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  Date DVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_3 + -8);
  uVar1 = *(uint *)(lVar7 + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    plVar4 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    if ((int)plVar4 == 1) {
      lVar7 = *param_2;
      _swift_errorRetain(lVar7);
      *param_1 = lVar7;
      uVar5 = 1;
    }
    else {
      if ((int)plVar4 != 0) {
        plVar4 = _memcpy(param_1,param_2,*(size_t *)(lVar7 + 0x40));
        return plVar4;
      }
      DVar2 = Foundation::Date::typeMetadataAccessor();
      lVar7 = *(long *)(DVar2.unknown + -8);
      plVar4 = param_2;
      (**(code **)(lVar7 + 0x30))(param_2,1,DVar2.unknown);
      if ((int)plVar4 == 0) {
        (**(code **)(lVar7 + 0x10))(param_1,param_2,DVar2.unknown);
        (**(code **)(lVar7 + 0x38))(param_1,0,1,DVar2.unknown);
      }
      else {
        puVar3 = &DAT_100fbe6e8;
        FUN_1000037f0(&DAT_100fbe6e8,&DAT_100c43250);
        _memcpy(param_1,param_2,*(size_t *)(*(long *)(puVar3 + -8) + 0x40));
      }
      uVar5 = 0;
    }
    _swift_storeEnumTagMultiPayload(param_1,param_3,uVar5);
  }
  else {
    lVar7 = *param_2;
    *param_1 = lVar7;
    uVar6 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar7 + (uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x1003b36ac | FUN_1003b36ac */

void FUN_1003b36ac(undefined8 *param_1)

{
  undefined8 *puVar1;
  Date DVar2;
  long lVar3;
  
  puVar1 = param_1;
  _swift_getEnumCaseMultiPayload();
  if ((int)puVar1 == 1) {
    _swift_errorRelease(*param_1);
    return;
  }
  if ((int)puVar1 == 0) {
    DVar2 = Foundation::Date::typeMetadataAccessor();
    lVar3 = *(long *)(DVar2.unknown + -8);
    puVar1 = param_1;
    (**(code **)(lVar3 + 0x30))(param_1,1,DVar2.unknown);
    if ((int)puVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001003b3734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar3 + 8))(param_1,DVar2.unknown);
      return;
    }
  }
  return;
}



/* Address: 0x1003b3738 | FUN_1003b3738 */

undefined8 * FUN_1003b3738(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  Date DVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar3 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  if ((int)puVar3 == 1) {
    uVar4 = *param_2;
    _swift_errorRetain(uVar4);
    *param_1 = uVar4;
    uVar4 = 1;
  }
  else {
    if ((int)puVar3 != 0) {
      puVar3 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
      return puVar3;
    }
    DVar1 = Foundation::Date::typeMetadataAccessor();
    lVar5 = *(long *)(DVar1.unknown + -8);
    puVar3 = param_2;
    (**(code **)(lVar5 + 0x30))(param_2,1,DVar1.unknown);
    if ((int)puVar3 == 0) {
      (**(code **)(lVar5 + 0x10))(param_1,param_2,DVar1.unknown);
      (**(code **)(lVar5 + 0x38))(param_1,0,1,DVar1.unknown);
    }
    else {
      puVar2 = &DAT_100fbe6e8;
      FUN_1000037f0(&DAT_100fbe6e8,&DAT_100c43250);
      _memcpy(param_1,param_2,*(size_t *)(*(long *)(puVar2 + -8) + 0x40));
    }
    uVar4 = 0;
  }
  _swift_storeEnumTagMultiPayload(param_1,param_3,uVar4);
  return param_1;
}



/* Address: 0x1003b385c | FUN_1003b385c */

undefined8 * FUN_1003b385c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  Date DVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  if (param_1 != param_2) {
    FUN_1000629fc(param_1);
    puVar3 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    if ((int)puVar3 == 1) {
      uVar4 = *param_2;
      _swift_errorRetain(uVar4);
      *param_1 = uVar4;
      uVar4 = 1;
    }
    else {
      if ((int)puVar3 != 0) {
        puVar3 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
        return puVar3;
      }
      DVar1 = Foundation::Date::typeMetadataAccessor();
      lVar5 = *(long *)(DVar1.unknown + -8);
      puVar3 = param_2;
      (**(code **)(lVar5 + 0x30))(param_2,1,DVar1.unknown);
      if ((int)puVar3 == 0) {
        (**(code **)(lVar5 + 0x10))(param_1,param_2,DVar1.unknown);
        (**(code **)(lVar5 + 0x38))(param_1,0,1,DVar1.unknown);
      }
      else {
        puVar2 = &DAT_100fbe6e8;
        FUN_1000037f0(&DAT_100fbe6e8,&DAT_100c43250);
        _memcpy(param_1,param_2,*(size_t *)(*(long *)(puVar2 + -8) + 0x40));
      }
      uVar4 = 0;
    }
    _swift_storeEnumTagMultiPayload(param_1,param_3,uVar4);
  }
  return param_1;
}



/* Address: 0x1003b3990 | FUN_1003b3990 */

void * FUN_1003b3990(void *param_1,void *param_2,long param_3)

{
  void *pvVar1;
  Date DVar2;
  undefined *puVar3;
  long lVar4;
  
  pvVar1 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  if ((int)pvVar1 != 0) {
    pvVar1 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
    return pvVar1;
  }
  DVar2 = Foundation::Date::typeMetadataAccessor();
  lVar4 = *(long *)(DVar2.unknown + -8);
  pvVar1 = param_2;
  (**(code **)(lVar4 + 0x30))(param_2,1,DVar2.unknown);
  if ((int)pvVar1 == 0) {
    (**(code **)(lVar4 + 0x20))(param_1,param_2,DVar2.unknown);
    (**(code **)(lVar4 + 0x38))(param_1,0,1,DVar2.unknown);
  }
  else {
    puVar3 = &DAT_100fbe6e8;
    FUN_1000037f0(&DAT_100fbe6e8,&DAT_100c43250);
    _memcpy(param_1,param_2,*(size_t *)(*(long *)(puVar3 + -8) + 0x40));
  }
  _swift_storeEnumTagMultiPayload(param_1,param_3,0);
  return param_1;
}



/* Address: 0x1003b3a8c | FUN_1003b3a8c */

void * FUN_1003b3a8c(void *param_1,void *param_2,long param_3)

{
  void *pvVar1;
  Date DVar2;
  undefined *puVar3;
  long lVar4;
  
  if (param_1 != param_2) {
    FUN_1000629fc(param_1);
    pvVar1 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    if ((int)pvVar1 != 0) {
      pvVar1 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
      return pvVar1;
    }
    DVar2 = Foundation::Date::typeMetadataAccessor();
    lVar4 = *(long *)(DVar2.unknown + -8);
    pvVar1 = param_2;
    (**(code **)(lVar4 + 0x30))(param_2,1,DVar2.unknown);
    if ((int)pvVar1 == 0) {
      (**(code **)(lVar4 + 0x20))(param_1,param_2,DVar2.unknown);
      (**(code **)(lVar4 + 0x38))(param_1,0,1,DVar2.unknown);
    }
    else {
      puVar3 = &DAT_100fbe6e8;
      FUN_1000037f0(&DAT_100fbe6e8,&DAT_100c43250);
      _memcpy(param_1,param_2,*(size_t *)(*(long *)(puVar3 + -8) + 0x40));
    }
    _swift_storeEnumTagMultiPayload(param_1,param_3,0);
  }
  return param_1;
}



/* Address: 0x1003b3b98 | FUN_1003b3b98 */

void FUN_1003b3b98(undefined8 param_1,ulong param_2)

{
  long lVar1;
  long local_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  FUN_1003760dc();
  if (param_2 < 0x40) {
    local_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = &DAT_100c44708;
    _swift_initEnumMetadataMultiPayload(param_1,0x100,2,&local_30);
  }
  return;
}



/* Address: 0x1003b3c04 | FUN_1003b3c04 */

undefined * FUN_1003b3c04(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_80 [80];
  
  puVar3 = auStack_80;
  puVar1 = &DAT_100fc1bf0;
  FUN_1000037f0(&DAT_100fc1bf0,&DAT_100c40ad0);
  _swift_initStackObject();
  *(undefined8 *)(puVar1 + 0x18) = 6;
  *(undefined8 *)(puVar1 + 0x10) = 3;
  puVar2 = puVar1;
  (**(code **)(unaff_x20 + 0x78))();
  *(undefined **)(puVar1 + 0x20) = puVar2;
  *(undefined1 **)(puVar1 + 0x28) = puVar3;
  *(undefined8 *)(puVar1 + 0x30) = 0x4164657461657263;
  *(undefined8 *)(puVar1 + 0x38) = 0xe900000000000074;
  *(undefined8 *)(puVar1 + 0x40) = 0x4164657461647075;
  *(undefined8 *)(puVar1 + 0x48) = 0xe900000000000074;
  puVar2 = puVar1;
  FUN_1002fc6c0(puVar1);
  _swift_setDeallocating(puVar1);
  _swift_arrayDestroy(puVar1 + 0x20,3,PTR___type_metadata_for_Swift_String_100eac208);
  return puVar2;
}



/* Address: 0x1003b3cc8 | FUN_1003b3cc8 */

undefined * FUN_1003b3cc8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = &DAT_100fc1bf0;
  FUN_1000037f0(&DAT_100fc1bf0,&DAT_100c40ad0);
  _swift_initStaticObject();
  puVar2 = puVar1;
  FUN_1002fc6c0();
  FUN_10000caac(puVar1 + 0x20);
  return puVar2;
}



/* Address: 0x1003b3d18 | FUN_1003b3d18 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_1003b3d18(ulong param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  ID IVar2;
  Dictionary<undefined,undefined> DVar3;
  undefined8 uVar4;
  ulong uVar5;
  ID unaff_x20;
  long unaff_x21;
  
  IVar2 = unaff_x20;
  _swift_getObjectType();
  (**(code **)(IVar2 + 0x60))();
  uVar1 = param_1;
  FUN_100052458(param_1,param_2,IVar2);
  _swift_bridgeObjectRelease(IVar2);
  if ((uVar1 & 1) != 0) {
    IVar2 = objc_stub::entity(unaff_x20);
    objc_stub::FUN_100c08e00(IVar2);
    FUN_10000ec2c(0,&DAT_100fc2158,&PTR__OBJC_CLASS___NSRelationshipDescription_100f8dc20);
    DVar3 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
    if (*(long *)(DVar3.unknown + 0x10) != 0) {
      _swift_bridgeObjectRetain(DVar3.unknown);
      uVar1 = param_1;
      uVar5 = param_2;
      FUN_100071370();
      if ((uVar5 & 1) != 0) {
        uVar4 = *(undefined8 *)(*(long *)(DVar3.unknown + 0x38) + uVar1 * 8);
        _swift_bridgeObjectRelease_n(DVar3.unknown,2);
        FUN_1003b4c14(uVar4,param_1,param_2,param_3);
        goto joined_r0x0001003b3f38;
      }
      _swift_bridgeObjectRelease(DVar3.unknown);
    }
    _swift_bridgeObjectRelease(DVar3.unknown);
    IVar2 = objc_stub::entity(unaff_x20);
    objc_stub::FUN_100bfe2e0(IVar2);
    FUN_10000ec2c(0,&DAT_100fc0450,&PTR__OBJC_CLASS___NSAttributeDescription_100f8dbb8);
    DVar3 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
    if (*(long *)(DVar3.unknown + 0x10) == 0) {
      _swift_bridgeObjectRelease(DVar3.unknown);
    }
    else {
      _swift_bridgeObjectRetain(DVar3.unknown);
      uVar1 = param_1;
      uVar5 = param_2;
      FUN_100071370();
      if ((uVar5 & 1) != 0) {
        uVar4 = *(undefined8 *)(*(long *)(DVar3.unknown + 0x38) + uVar1 * 8);
        _swift_bridgeObjectRelease_n(DVar3.unknown,2);
        FUN_1003b4edc(uVar4,param_1,param_2);
joined_r0x0001003b3f38:
        if (unaff_x21 == 0) {
          return uVar4;
        }
        return 0;
      }
      _swift_bridgeObjectRelease_n(DVar3.unknown,2);
    }
  }
  return 0;
}



/* Address: 0x1003b3f7c | FUN_1003b3f7c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1003b3f7c(undefined8 param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ID IVar2;
  Dictionary<undefined,undefined> DVar3;
  ID unaff_x20;
  
  IVar2 = unaff_x20;
  _swift_getObjectType();
  (**(code **)(IVar2 + 0x60))();
  uVar1 = param_2;
  FUN_100052458(param_2,param_3,IVar2);
  _swift_bridgeObjectRelease(IVar2);
  if ((uVar1 & 1) != 0) {
    IVar2 = objc_stub::entity(unaff_x20);
    objc_stub::FUN_100c08e00(IVar2);
    FUN_10000ec2c(0,&DAT_100fc2158,&PTR__OBJC_CLASS___NSRelationshipDescription_100f8dc20);
    DVar3 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
    if (*(long *)(DVar3.unknown + 0x10) == 0) {
      _swift_bridgeObjectRelease(DVar3.unknown);
    }
    else {
      uVar1 = param_3;
      FUN_100071370(param_2);
      _swift_bridgeObjectRelease(DVar3.unknown);
      if ((uVar1 & 1) != 0) {
        FUN_1003b5270(param_1,param_2,param_3);
        return param_1;
      }
    }
    IVar2 = objc_stub::entity(unaff_x20);
    objc_stub::FUN_100bfe2e0(IVar2);
    FUN_10000ec2c(0,&DAT_100fc0450,&PTR__OBJC_CLASS___NSAttributeDescription_100f8dbb8);
    DVar3 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
    if (*(long *)(DVar3.unknown + 0x10) == 0) {
      _swift_bridgeObjectRelease(DVar3.unknown);
    }
    else {
      uVar1 = param_3;
      FUN_100071370(param_2);
      _swift_bridgeObjectRelease(DVar3.unknown);
      if ((uVar1 & 1) != 0) {
        FUN_1003b5b30(param_1,param_2,param_3);
        return param_1;
      }
    }
  }
  return 0;
}



/* Address: 0x1003b4160 | FUN_1003b4160 */

void FUN_1003b4160(void)

{
  code *pcVar1;
  String SVar2;
  
  SVar2.bridgeObject = (void *)0x2;
  SVar2.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar2,(StaticString)0xd000000000000012,0x8000000100da4fd0,
             0xda4fc0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003b41b8);
  (*pcVar1)();
}



/* Address: 0x1003b41b8 | FUN_1003b41b8 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_1003b41b8(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  URL UVar2;
  CharacterSet CVar3;
  NSString *pNVar4;
  ID IVar5;
  CharacterSet CVar6;
  URL UVar7;
  String *pSVar8;
  void *pvVar9;
  long lVar10;
  long extraout_x8;
  long extraout_x8_00;
  ID unaff_x20;
  long lVar11;
  CharacterSet in;
  String SVar12;
  undefined1 auVar13 [16];
  String SStack_c0;
  undefined *local_b0;
  NSString *pNStack_a8;
  undefined *local_a0;
  NSString *pNStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined *local_80;
  NSString *pNStack_78;
  undefined8 uStack_70;
  long local_68;
  
  IVar5 = unaff_x20;
  _swift_getObjectType();
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar10 = *(long *)(UVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar10 + 0x40));
  pSVar8 = (String *)((long)&SStack_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  CVar3 = Foundation::CharacterSet::typeMetadataAccessor();
  lVar11 = *(long *)(CVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar11 + 0x40));
  in.unknown = (undefined *)((long)pSVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(IVar5 + 0x78))();
  pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_2);
  IVar5 = objc_stub::FUN_100c112a0(unaff_x20,pNVar4);
  if (IVar5 == 0) {
    pNStack_98 = (NSString *)0x0;
    local_a0 = (undefined *)0x0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    Swift::__bridgeAnyObjectToAny();
    _swift_unknownObjectRelease(IVar5);
  }
  pNStack_78 = pNStack_98;
  local_80 = local_a0;
  local_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    FUN_100005808(&local_80,&DAT_100fbe6f0,&DAT_100c42750);
  }
  else {
    CVar6.unknown = (undefined *)&local_b0;
    _swift_dynamicCast(CVar6.unknown,&local_80,PTR___type_metadata_for_Any_100eae0c0 + 8,
                       PTR___type_metadata_for_Swift_String_100eac208,6);
    if (((ulong)CVar6.unknown & 1) != 0) {
      local_80 = local_b0;
      pNStack_78 = pNStack_a8;
      SStack_c0.bridgeObject = (void *)UVar2;
      Foundation::CharacterSet::get_whitespacesAndNewlines(CVar6);
      FUN_10030cce0();
      SVar12 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(in);
      pvVar9 = SVar12.bridgeObject;
      (**(code **)(lVar11 + 8))(in.unknown,CVar3.unknown);
      _swift_bridgeObjectRelease(pvVar9);
      uVar1 = (ulong)SVar12.str & 0xffffffffffff;
      if (((ulong)pvVar9 & 0x2000000000000000) != 0) {
        uVar1 = (ulong)pvVar9 >> 0x38 & 0xf;
      }
      pNVar4 = pNStack_a8;
      UVar2.unknown = local_b0;
      if (uVar1 != 0) goto LAB_1003b4418;
      _swift_bridgeObjectRelease(pNStack_a8);
      UVar2.unknown = SStack_c0.bridgeObject;
    }
  }
  IVar5 = objc_stub::objectID(unaff_x20);
  UVar7.unknown = (undefined *)objc_stub::URIRepresentation(IVar5);
  Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar7);
  SVar12 = Foundation::URL::get_absoluteString((URL)0x0);
  (**(code **)(lVar10 + 8))(pSVar8,UVar2.unknown);
  FUN_1003b65d8();
  _swift_allocError(&DAT_100ece970,pSVar8,0,0);
  *pSVar8 = SVar12;
  _swift_willThrow();
LAB_1003b4418:
  auVar13._8_8_ = pNVar4;
  auVar13._0_8_ = UVar2.unknown;
  return auVar13;
}



/* Address: 0x1003b4444 | FUN_1003b4444 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001003b4704) */
/* WARNING: Removing unreachable block (ram,0x0001003b44d4) */

ID FUN_1003b4444(void)

{
  ID IVar1;
  ID self;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **self_00;
  Data DVar5;
  Data DVar6;
  undefined *puVar7;
  ID IVar8;
  ID IVar9;
  undefined8 extraout_x1;
  ID unaff_x20;
  String SVar10;
  String SVar11;
  undefined *local_90 [3];
  undefined *local_78;
  
  IVar8 = unaff_x20;
  _swift_getObjectType();
  IVar1 = objc_stub::managedObjectContext(unaff_x20);
  if (IVar1 != 0) {
    FUN_10038fef4(0);
    self = objc_stub::objectID(unaff_x20);
    IVar9 = IVar1;
    FUN_10038efa8();
    uVar2 = 0;
    if (self != 0) {
      FUN_1003b41b8();
      FUN_100394ee8();
      SVar10 = Swift::__typeName(SUB81(IVar8,0));
      objc_stub::cloudKitZoneOwnerName(self);
      SVar11 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      puVar7 = &DAT_100fbef68;
      FUN_1000037f0(&DAT_100fbef68,&DAT_100c44740);
      _swift_initStackObject();
      *(undefined8 *)(puVar7 + 0x18) = 6;
      *(undefined8 *)(puVar7 + 0x10) = 3;
      *(undefined8 *)(puVar7 + 0x20) = 0x6f636552746f6f72;
      *(undefined8 *)(puVar7 + 0x28) = 0xee00656d614e6472;
      *(undefined8 *)(puVar7 + 0x30) = uVar2;
      *(ID *)(puVar7 + 0x38) = IVar9;
      *(undefined8 *)(puVar7 + 0x40) = 0x6f636552746f6f72;
      *(undefined8 *)(puVar7 + 0x48) = 0xee00657079546472;
      *(String *)(puVar7 + 0x50) = SVar10;
      *(undefined8 *)(puVar7 + 0x60) = 0xd000000000000010;
      *(undefined8 *)(puVar7 + 0x68) = 0x8000000100da2ca0;
      *(String *)(puVar7 + 0x70) = SVar11;
      _swift_bridgeObjectRetain(IVar9);
      _swift_bridgeObjectRetain(SVar10.bridgeObject);
      _swift_bridgeObjectRetain(SVar11.bridgeObject);
      puVar3 = puVar7;
      FUN_1003c92b8();
      _swift_setDeallocating(puVar7);
      puVar4 = &DAT_100fbef70;
      FUN_1000037f0(&DAT_100fbef70,&DAT_100c40b10);
      _swift_arrayDestroy(puVar7 + 0x20,3,puVar4);
      puVar7 = &DAT_100fbef78;
      FUN_1000037f0(&DAT_100fbef78,&DAT_100c44750);
      self_00 = local_90;
      local_90[0] = puVar3;
      local_78 = puVar7;
      FUN_100328ba8(self_00,0,IVar1);
      _swift_bridgeObjectRelease(IVar9);
      _swift_bridgeObjectRelease(SVar10.bridgeObject);
      _swift_bridgeObjectRelease(SVar11.bridgeObject);
      FUN_100004594(local_90);
      if (self_00 != (undefined **)0x0) {
        DVar5.unknown = (undefined *)objc_stub::shareRecordData((ID)self_00);
        uVar2 = extraout_x1;
        DVar6 = Foundation::Data::__unconditionallyBridgeFromObjectiveC(DVar5);
        _objc_allocWithZone(&_OBJC_CLASS___NSKeyedUnarchiver);
        FUN_1001037b4(DVar6.unknown,uVar2);
        DVar5 = DVar6;
        FUN_1003b09f8(DVar6.unknown,uVar2);
        FUN_10003bf2c(DVar6.unknown,uVar2);
        objc_stub::setRequiresSecureCoding_((ID)DVar5.unknown,1);
        puVar7 = &_OBJC_CLASS___CKShare;
        _objc_allocWithZone();
        IVar8 = objc_stub::initWithCoder_((ID)puVar7,DVar5.unknown);
        objc_stub::finishDecoding((ID)DVar5.unknown);
        FUN_10003bf2c(DVar6.unknown,uVar2);
        return IVar8;
      }
    }
  }
  return 0;
}



/* Address: 0x1003b4784 | FUN_1003b4784 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1003b4784(void)

{
  Date DVar1;
  Date DVar2;
  NSDate *pNVar3;
  NSString *pNVar4;
  long extraout_x8;
  ID unaff_x20;
  long lVar5;
  
  DVar1 = Foundation::Date::typeMetadataAccessor();
  lVar5 = *(long *)(DVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar5 + 0x40));
  FUN_1003b4868();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffb0,"awakeFromInsert");
  DVar2 = Foundation::Date::init();
  pNVar3 = Foundation::Date::_bridgeToObjectiveC(DVar2);
  (**(code **)(lVar5 + 8))
            (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),DVar1.unknown);
  pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  objc_stub::setPrimitiveValue_forKey_(unaff_x20,pNVar3,pNVar4);
  return 0;
}



/* Address: 0x1003b4868 | FUN_1003b4868 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1003b4868(void)

{
  return ZEXT816(0x100f98690);
}



/* Address: 0x1003b4888 | _TtC9PasteCore21SyncableManagedObject::awakeFromInsert */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC9PasteCore21SyncableManagedObject::awakeFromInsert(ID param_1,SEL param_2)

{
  Date DVar1;
  Date DVar2;
  NSDate *pNVar3;
  NSString *pNVar4;
  long extraout_x8;
  long lVar5;
  objc_super local_50;
  
  DVar1 = Foundation::Date::typeMetadataAccessor();
  lVar5 = *(long *)(DVar1.unknown + -8);
  DVar2 = DVar1;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar5 + 0x40));
  FUN_1003b4868();
  local_50.receiver = param_1;
  local_50.super_class = (class_t *)DVar2.unknown;
  _objc_msgSendSuper2(&local_50,"awakeFromInsert");
  DVar2 = Foundation::Date::init();
  pNVar3 = Foundation::Date::_bridgeToObjectiveC(DVar2);
  (**(code **)(lVar5 + 8))
            ((long)&local_50 - (extraout_x8 + 0xfU & 0xfffffffffffffff0),DVar1.unknown);
  pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  objc_stub::setPrimitiveValue_forKey_(param_1,pNVar3,pNVar4);
  return;
}



/* Address: 0x1003b4984 | FUN_1003b4984 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003b4984(void)

{
  bool bVar1;
  Date DVar2;
  ID IVar3;
  Dictionary<undefined,undefined> DVar4;
  Date DVar5;
  NSDate *pNVar6;
  NSString *pNVar7;
  _StringGuts _Var8;
  long extraout_x8;
  ID unaff_x20;
  long lVar9;
  long lVar10;
  String SVar11;
  
  DVar2 = Foundation::Date::typeMetadataAccessor();
  lVar10 = *(long *)(DVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar10 + 0x40));
  IVar3 = objc_stub::managedObjectContext(unaff_x20);
  if ((IVar3 == 0) || (IVar3 = objc_stub::transactionAuthor(IVar3), IVar3 == 0)) {
    bVar1 = false;
  }
  else {
    SVar11 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    _Var8.unknown = SVar11.bridgeObject;
    if ((SVar11.str == (undefined *)0x6c707041636e7973) &&
       (_Var8.unknown == (undefined *)0xe900000000000079)) {
      _swift_bridgeObjectRelease(0xe900000000000079);
      objc_stub::FUN_100c059a0(unaff_x20);
      goto LAB_1003b4b5c;
    }
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)SVar11.str,_Var8,(_StringComparisonResult)0x73);
    _swift_bridgeObjectRelease(_Var8.unknown);
  }
  IVar3 = objc_stub::FUN_100c059a0(unaff_x20);
  if (((IVar3 & 1) == 0) && (bVar1 == false)) {
    objc_stub::changedValues(unaff_x20);
    DVar4 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
    lVar9 = *(long *)(DVar4.unknown + 0x10);
    _swift_bridgeObjectRelease();
    if (lVar9 != 0) {
      DVar5 = Foundation::Date::init();
      pNVar6 = Foundation::Date::_bridgeToObjectiveC(DVar5);
      (**(code **)(lVar10 + 8))
                (&stack0xffffffffffffff90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),DVar2.unknown
                );
      pNVar7 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      objc_stub::setPrimitiveValue_forKey_(unaff_x20,pNVar6,pNVar7);
    }
  }
LAB_1003b4b5c:
  FUN_1003b4868();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff90,"willSave");
  return;
}



/* Address: 0x1003b4b94 | _TtC9PasteCore21SyncableManagedObject::willSave */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC9PasteCore21SyncableManagedObject::willSave(ID param_1,SEL param_2)

{
  FUN_1003b4984(param_1);
  return;
}



/* Address: 0x1003b4bbc | FUN_1003b4bbc */

void FUN_1003b4bbc(void)

{
  code *pcVar1;
  String SVar2;
  
  SVar2.bridgeObject = (void *)0x2;
  SVar2.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar2,(StaticString)0xd000000000000012,0x8000000100da4fd0,
             0xda4fc0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003b4c14);
  (*pcVar1)();
}



/* Address: 0x1003b4c14 | FUN_1003b4c14 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

NSArray * FUN_1003b4c14(ID param_1,undefined8 param_2,undefined8 param_3,ID param_4)

{
  ID IVar1;
  NSString *pNVar2;
  ID IVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  NSArray *pNVar6;
  char *pcVar7;
  CKRecordID *this;
  CKRecordZoneID *zoneID;
  CKRecordID *pCVar8;
  undefined *puVar9;
  ID unaff_x20;
  long unaff_x21;
  String recordName;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long local_58;
  undefined8 local_48;
  
  IVar1 = objc_stub::FUN_100c05d40(param_1);
  if ((int)IVar1 == 0) {
    pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    IVar3 = objc_stub::FUN_100c112a0(unaff_x20,pNVar2);
    IVar1 = 0;
    if (IVar3 == 0) {
      uStack_88 = 0;
      local_90 = 0;
      lStack_78 = 0;
      uStack_80 = 0;
    }
    else {
      Swift::__bridgeAnyObjectToAny();
      _swift_unknownObjectRelease(IVar3);
      IVar1 = IVar3;
    }
    uStack_68 = uStack_88;
    local_70 = local_90;
    local_58 = lStack_78;
    uStack_60 = uStack_80;
    if (lStack_78 != 0) {
      FUN_1003b4868();
      pcVar7 = (char *)&local_48;
      puVar4 = &local_70;
      _swift_dynamicCast(pcVar7,puVar4,PTR___type_metadata_for_Any_100eae0c0 + 8,IVar1,6);
      if (((ulong)pcVar7 & 1) == 0) {
        return (NSArray *)0x0;
      }
      FUN_1003b41b8();
      if (unaff_x21 != 0) {
        return (NSArray *)0x0;
      }
      this = (CKRecordID *)0x0;
      FUN_10000ec2c(0,&DAT_100fbfa88,&PTR__OBJC_CLASS___CKRecordID_100f8db58);
      zoneID = (CKRecordZoneID *)objc_stub::zoneID(param_4);
      recordName.bridgeObject = puVar4;
      recordName.str = pcVar7;
      pCVar8 = (extension_CloudKit)::__C::CKRecordID::__allocating_init(this,recordName,zoneID);
      IVar1 = objc_stub::FUN_100c00fa0(param_1);
      puVar9 = &_OBJC_CLASS___CKReference;
      _objc_allocWithZone();
      pNVar6 = (NSArray *)objc_stub::initWithRecordID_action_((ID)puVar9,pCVar8,(ulong)(IVar1 == 2))
      ;
      return pNVar6;
    }
  }
  else {
    pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    IVar1 = objc_stub::FUN_100c112a0(unaff_x20,pNVar2);
    if (IVar1 == 0) {
      uStack_88 = 0;
      local_90 = 0;
      lStack_78 = 0;
      uStack_80 = 0;
    }
    else {
      Swift::__bridgeAnyObjectToAny();
      _swift_unknownObjectRelease(IVar1);
    }
    uStack_68 = uStack_88;
    local_70 = local_90;
    local_58 = lStack_78;
    uStack_60 = uStack_80;
    if (lStack_78 != 0) {
      puVar9 = &DAT_100fc2568;
      FUN_1000037f0(&DAT_100fc2568,&DAT_100c44770);
      puVar4 = &local_48;
      _swift_dynamicCast(puVar4,&local_70,PTR___type_metadata_for_Any_100eae0c0 + 8,puVar9,6);
      if (((ulong)puVar4 & 1) == 0) {
        return (NSArray *)0x0;
      }
      uVar5 = local_48;
      FUN_1003b6274(local_48,param_4);
      _swift_bridgeObjectRelease(local_48);
      if (unaff_x21 != 0) {
        return (NSArray *)0x0;
      }
      FUN_10000ec2c(0,&DAT_100fc2570,&PTR__OBJC_CLASS___CKReference_100f8db60);
      pNVar6 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(uVar5);
      return pNVar6;
    }
  }
  local_70 = local_90;
  uStack_68 = uStack_88;
  uStack_60 = uStack_80;
  local_58 = lStack_78;
  FUN_100005808(&local_70,&DAT_100fbe6f0,&DAT_100c42750);
  return (NSArray *)0x0;
}



/* Address: 0x1003b4edc | FUN_1003b4edc */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1003b4edc(ID param_1)

{
  ID IVar1;
  NSString *pNVar2;
  ulong uVar3;
  Data DVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 extraout_x1;
  ID unaff_x20;
  Data local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long local_58;
  long local_48;
  
  uVar3 = 0;
  uVar5 = 0;
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  IVar1 = objc_stub::FUN_100bfe200(param_1);
  if (IVar1 == 1000) {
    pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    IVar1 = objc_stub::FUN_100c112a0(unaff_x20,pNVar2);
    if (IVar1 == 0) {
      uStack_88 = 0;
      local_90 = 0;
      lStack_78 = 0;
      uStack_80 = 0;
    }
    else {
      Swift::__bridgeAnyObjectToAny();
      _swift_unknownObjectRelease(IVar1);
    }
    uStack_68 = uStack_88;
    local_70 = local_90;
    local_58 = lStack_78;
    uStack_60 = uStack_80;
    if (lStack_78 != 0) {
      _swift_dynamicCast(&local_a0,&local_70,PTR___type_metadata_for_Any_100eae0c0 + 8,
                         PTR___type_metadata_for_Foundation_Data_100ea7300,6);
      if ((uVar5 & 1) != 0) {
        IVar1 = objc_stub::FUN_100bfdb80(param_1);
        if ((int)IVar1 == 0) {
          Foundation::Data::_bridgeToObjectiveC(local_a0);
          FUN_10003bf2c(local_a0.unknown,uStack_98);
        }
        else {
          FUN_10000ec2c(0,&DAT_100fbee40,&PTR__OBJC_CLASS___CKAsset_100f8db48);
          FUN_10038e594(local_a0.unknown,uStack_98);
        }
      }
      goto LAB_1003b51dc;
    }
  }
  else if (IVar1 == 0x708) {
    pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    IVar1 = objc_stub::FUN_100c112a0(unaff_x20,pNVar2);
    if (IVar1 == 0) {
      uStack_88 = 0;
      local_90 = 0;
      lStack_78 = 0;
      uStack_80 = 0;
    }
    else {
      Swift::__bridgeAnyObjectToAny();
      _swift_unknownObjectRelease(IVar1);
    }
    uStack_68 = uStack_88;
    local_70 = local_90;
    local_58 = lStack_78;
    uStack_60 = uStack_80;
    if (lStack_78 != 0) {
      puVar6 = &DAT_100fc2578;
      FUN_1000037f0(&DAT_100fc2578,&DAT_100c44778);
      _swift_dynamicCast(&local_a0,&local_70,PTR___type_metadata_for_Any_100eae0c0 + 8,puVar6,6);
      if ((uVar3 & 1) != 0) {
        local_70 = 0;
        DVar4.unknown =
             (undefined *)
             objc_stub::FUN_100bfdf40(&_OBJC_CLASS___NSKeyedArchiver,local_a0.unknown,0,&local_70);
        if (DVar4.unknown == (undefined *)0x0) {
          uVar7 = local_70;
          Foundation::__convertNSErrorToError();
          _swift_willThrow(0);
          _swift_unknownObjectRelease(local_a0.unknown);
          _swift_errorRelease(uVar7);
        }
        else {
          uVar7 = extraout_x1;
          DVar4 = Foundation::Data::__unconditionallyBridgeFromObjectiveC(DVar4);
          Foundation::Data::_bridgeToObjectiveC(DVar4);
          _swift_unknownObjectRelease(local_a0.unknown);
          FUN_10003bf2c(DVar4.unknown,uVar7);
        }
      }
      goto LAB_1003b51dc;
    }
  }
  else {
    pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    IVar1 = objc_stub::FUN_100c112a0(unaff_x20,pNVar2);
    if (IVar1 == 0) {
      uStack_88 = 0;
      local_90 = 0;
      lStack_78 = 0;
      uStack_80 = 0;
    }
    else {
      Swift::__bridgeAnyObjectToAny();
      _swift_unknownObjectRelease(IVar1);
    }
    uStack_68 = uStack_88;
    local_70 = local_90;
    local_58 = lStack_78;
    uStack_60 = uStack_80;
    if (lStack_78 != 0) {
      puVar6 = &DAT_100fbee30;
      FUN_1000037f0(&DAT_100fbee30,&DAT_100c43f90);
      _swift_dynamicCast(&local_a0,&local_70,PTR___type_metadata_for_Any_100eae0c0 + 8,puVar6,6);
      goto LAB_1003b51dc;
    }
  }
  local_90 = local_70;
  uStack_88 = uStack_68;
  uStack_80 = uStack_60;
  lStack_78 = local_58;
  FUN_100005808(&local_70,&DAT_100fbe6f0,&DAT_100c42750);
LAB_1003b51dc:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}


