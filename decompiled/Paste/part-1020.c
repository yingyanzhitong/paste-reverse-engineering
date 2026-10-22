/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100b08758 | FUN_100b08758 */

void FUN_100b08758(long param_1)

{
  *(undefined1 *)(param_1 + 0x79) = 0;
  return;
}



/* Address: 0x100b08760 | FUN_100b08760 */

void FUN_100b08760(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ModifiedContent MVar3;
  TupleView TVar4;
  
  puVar2 = &DAT_100ffa1c8;
  FUN_100005c24(&DAT_100ffa1c8,&DAT_100c97490);
  MVar3 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  _swift_getTupleTypeMetadata3
            (0xff,puVar2,PTR___type_metadata_for_SwiftUI_Spacer_100eab8f8,MVar3.unknown,0,0);
  TVar4 = SwiftUI::TupleView::typeMetadataAccessor();
  puVar1 = PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_100eabb30;
  _swift_getWitnessTable
            (PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_100eabb30,TVar4.unknown);
  SwiftUI::HStack::typeMetadataAccessor();
  MVar3 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  puVar2 = &DAT_100ffa1c0;
  FUN_100005c24(&DAT_100ffa1c0,&DAT_100c97488);
  _swift_getTupleTypeMetadata2(0xff,MVar3.unknown,puVar2,0,0);
  TVar4 = SwiftUI::TupleView::typeMetadataAccessor();
  _swift_getWitnessTable(puVar1,TVar4.unknown);
  return;
}



/* Address: 0x100b08854 | FUN_100b08854 */

void FUN_100b08854(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_40;
  undefined *puStack_38;
  
  puVar1 = &DAT_100ff99b8;
  FUN_100005c24(&DAT_100ff99b8,&DAT_100c96690);
  puVar2 = &DAT_100ffa298;
  FUN_100016eac(&DAT_100ffa298,&DAT_100ff99b8,&DAT_100c96690,
                PTR_SwiftUI__SwiftUI__VStack<undefined>_>SwiftUI__View_100eab938);
  local_40 = puVar1;
  puStack_38 = puVar2;
  _swift_getOpaqueTypeConformance2(&local_40,&DAT_100ccc4e0,1);
  return;
}



/* Address: 0x100b088d0 | thunk_FUN_100b056b8 */

void thunk_FUN_100b056b8(void)

{
  thunk_FUN_100b056b8();
  return;
}



/* Address: 0x100b088d4 | thunk_FUN_100b056b8 */

void thunk_FUN_100b056b8(void)

{
  thunk_FUN_100b056b8();
  return;
}



/* Address: 0x100b088d8 | thunk_FUN_100b056b8 */

void thunk_FUN_100b056b8(void)

{
  thunk_FUN_100b056b8();
  return;
}



/* Address: 0x100b088dc | FUN_100b088dc */

void FUN_100b088dc(void)

{
  FUN_1000abcec(&DAT_100c97588,&DAT_100c975b0);
  return;
}



/* Address: 0x100b088f0 | FUN_100b088f0 */

void FUN_100b088f0(void)

{
  FUN_1000078b4();
  return;
}



/* Address: 0x100b08904 | FUN_100b08904 */

void FUN_100b08904(void)

{
  FUN_1000f1224();
  return;
}



/* Address: 0x100b08918 | FUN_100b08918 */

void FUN_100b08918(void)

{
  FUN_1000abcec(&DAT_100c975d0,&DAT_100c975f8);
  return;
}



/* Address: 0x100b0892c | FUN_100b0892c */

void FUN_100b0892c(void)

{
  FUN_1000078b4();
  return;
}



/* Address: 0x100b08940 | FUN_100b08940 */

void FUN_100b08940(void)

{
  FUN_1000f1224();
  return;
}



/* Address: 0x100b08954 | FUN_100b08954 */

undefined8 FUN_100b08954(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 local_48 [3];
  
  puVar1 = &DAT_100c97618;
  _swift_getKeyPath(&DAT_100c97618);
  puVar2 = &DAT_100c97640;
  _swift_getKeyPath(&DAT_100c97640);
  Combine::Published::_get_subscript(local_48);
  _swift_release(puVar1);
  _swift_release(puVar2);
  return local_48[0];
}



/* Address: 0x100b089c8 | FUN_100b089c8 */

void FUN_100b089c8(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  puVar1 = &DAT_100c97618;
  _swift_getKeyPath(&DAT_100c97618);
  puVar2 = &DAT_100c97640;
  _swift_getKeyPath(&DAT_100c97640);
  Combine::Published::_get_subscript(param_1,uVar3,puVar1,puVar2);
  _swift_release(puVar1);
  _swift_release(puVar2);
  return;
}



/* Address: 0x100b08a30 | FUN_100b08a30 */

void FUN_100b08a30(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  Published *pPVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *(undefined1 *)(param_1 + 2);
  uVar6 = *param_2;
  pPVar4 = (Published *)&DAT_100c97618;
  _swift_getKeyPath(&DAT_100c97618);
  puVar5 = &DAT_100c97640;
  _swift_getKeyPath(&DAT_100c97640);
  local_58 = uVar1;
  uStack_50 = uVar2;
  local_48 = uVar3;
  _swift_retain(uVar6);
  Combine::Published::_set_subscript(pPVar4,&local_58,uVar6,pPVar4,puVar5);
  return;
}



/* Address: 0x100b08ab0 | FUN_100b08ab0 */

void FUN_100b08ab0(void)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined1 local_68;
  undefined7 uStack_67;
  undefined8 uStack_60;
  undefined1 local_58;
  
  pcVar1 = *(code **)(unaff_x20 + _TtC15PasteOnboarding14SetupViewModel::onComplete);
  puVar4 = &DAT_100c97588;
  _swift_getKeyPath(&DAT_100c97588);
  puVar5 = &DAT_100c975b0;
  _swift_getKeyPath(&DAT_100c975b0);
  Combine::Published::_get_subscript(&local_68);
  _swift_release(puVar4);
  _swift_release(puVar5);
  uVar2 = local_68;
  puVar4 = &DAT_100c975d0;
  _swift_getKeyPath(&DAT_100c975d0);
  puVar5 = &DAT_100c975f8;
  _swift_getKeyPath(&DAT_100c975f8);
  Combine::Published::_get_subscript(&local_68);
  _swift_release(puVar4);
  _swift_release(puVar5);
  uVar3 = local_68;
  puVar4 = &DAT_100c97618;
  _swift_getKeyPath(&DAT_100c97618);
  puVar5 = &DAT_100c97640;
  _swift_getKeyPath(&DAT_100c97640);
  Combine::Published::_get_subscript(&local_68);
  _swift_release(puVar4);
  _swift_release(puVar5);
  (*pcVar1)(uVar2,uVar3,CONCAT71(uStack_67,local_68),uStack_60,local_58);
  (**(code **)(unaff_x20 + _TtC15PasteOnboarding14SetupViewModel::next))();
  return;
}



/* Address: 0x100b08bf8 | FUN_100b08bf8 */

void FUN_100b08bf8(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  code *pcVar3;
  
  lVar1 = _TtC15PasteOnboarding14SetupViewModel::_activationShortcut;
  puVar2 = &DAT_100ff9ff0;
  FUN_1000037f0(&DAT_100ff9ff0,&DAT_100c97150);
  (**(code **)(*(long *)(puVar2 + -8) + 8))(unaff_x20 + lVar1,puVar2);
  lVar1 = _TtC15PasteOnboarding14SetupViewModel::_openAtLoginIsEnabled;
  puVar2 = &DAT_100ffa398;
  FUN_1000037f0(&DAT_100ffa398,&DAT_100c97580);
  pcVar3 = *(code **)(*(long *)(puVar2 + -8) + 8);
  (*pcVar3)(unaff_x20 + lVar1,puVar2);
  (*pcVar3)(unaff_x20 + _TtC15PasteOnboarding14SetupViewModel::_syncIsEnabled,puVar2);
  _swift_release(*(undefined8 *)(unaff_x20 + _TtC15PasteOnboarding14SetupViewModel::next + 8));
  _swift_release(*(undefined8 *)(unaff_x20 + _TtC15PasteOnboarding14SetupViewModel::onComplete + 8))
  ;
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100b08cc8 | FUN_100b08cc8 */

void FUN_100b08cc8(void)

{
  FUN_100b08cd0(0);
  return;
}



/* Address: 0x100b08cd0 | FUN_100b08cd0 */

void FUN_100b08cd0(undefined8 param_1)

{
  if (DAT_100ffa2e0 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetClassDescriptor_100ccca38);
  return;
}



/* Address: 0x100b08d08 | FUN_100b08d08 */

void FUN_100b08d08(long param_1,ulong param_2)

{
  long lVar1;
  long local_48;
  long local_40;
  long lStack_38;
  undefined *local_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  FUN_100b08da0();
  if (param_2 < 0x40) {
    local_48 = *(long *)(lVar1 + -8) + 0x40;
    lVar1 = 0x13f;
    FUN_100b08e00();
    if (param_2 < 0x40) {
      local_40 = *(long *)(lVar1 + -8) + 0x40;
      local_30 = PTR___value_witness_table_for_____>____100eae0d0 + 0x40;
      lStack_38 = local_40;
      puStack_28 = local_30;
      _swift_updateClassMetadata2(param_1,0x100,5,&local_48,param_1 + 0x50);
    }
  }
  return;
}



/* Address: 0x100b08da0 | FUN_100b08da0 */

void FUN_100b08da0(void)

{
  undefined *puVar1;
  Published PVar2;
  
  if (DAT_100ffa2f0.unknown == (undefined *)0x0) {
    puVar1 = &DAT_100ff9fe8;
    FUN_100005c24(&DAT_100ff9fe8,&DAT_100c97148);
    PVar2 = Combine::Published::typeMetadataAccessor();
    if (puVar1 == (undefined *)0x0) {
      DAT_100ffa2f0 = PVar2;
    }
  }
  return;
}



/* Address: 0x100b08e00 | FUN_100b08e00 */

void FUN_100b08e00(void)

{
  Published PVar1;
  undefined *puVar2;
  
  if (DAT_100ffa2f8 != (undefined *)0x0) {
    return;
  }
  puVar2 = PTR___type_metadata_for_Swift_Bool_100eac570;
  PVar1 = Combine::Published::typeMetadataAccessor();
  if (puVar2 != (undefined *)0x0) {
    return;
  }
  DAT_100ffa2f8 = PVar1.unknown;
  return;
}



/* Address: 0x100b08e50 | FUN_100b08e50 */

void FUN_100b08e50(void)

{
  FUN_1000078b4();
  return;
}



/* Address: 0x100b08e74 | FUN_100b08e74 */

void FUN_100b08e74(void)

{
  FUN_1000f1224();
  return;
}



/* Address: 0x100b08e98 | FUN_100b08e98 */

void FUN_100b08e98(void)

{
  FUN_1000078b4();
  return;
}



/* Address: 0x100b08ebc | FUN_100b08ebc */

void FUN_100b08ebc(void)

{
  FUN_1000f1224();
  return;
}



/* Address: 0x100b08ee0 | thunk_FUN_100b089c8 */

void thunk_FUN_100b089c8(void)

{
  FUN_100b089c8();
  return;
}



/* Address: 0x100b08ee4 | thunk_FUN_100b08a30 */

void thunk_FUN_100b08a30(void)

{
  FUN_100b08a30();
  return;
}



/* Address: 0x100b08ee8 | SentryMessage::initWithFormatted: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryMessage::initWithFormatted_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::SentryMessage;
  local_40.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_40,"init");
  if (IVar1 != 0) {
    *(ID *)(IVar1 + 8) = param_3;
  }
  return IVar1;
}



/* Address: 0x100b08f60 | SentryMessage::setMessage: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryMessage::setMessage_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x10) = param_3;
  return;
}



/* Address: 0x100b08f6c | SentryMessage::serialize */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryMessage::serialize(ID param_1,SEL param_2)

{
  undefined *self;
  ID self_00;
  ID IVar1;
  
  self = &_OBJC_CLASS___NSMutableDictionary;
  _objc_alloc();
  self_00 = objc_stub::init((ID)self);
  IVar1 = objc_stub::FUN_100c029e0(param_1);
  objc_stub::setValue_forKey_(self_00,IVar1,&cf_formatted);
  IVar1 = objc_stub::FUN_100c06ca0(param_1);
  objc_stub::setValue_forKey_(self_00,IVar1,&cf_message);
  IVar1 = objc_stub::FUN_100c07900(param_1);
  objc_stub::setValue_forKey_(self_00,IVar1,&cf_params);
  return self_00;
}



/* Address: 0x100b09038 | SentryMessage::description */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryMessage::description(ID param_1,SEL param_2)

{
  ID IVar1;
  
  objc_stub::class(param_1);
  objc_stub::serialize(param_1);
  IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_<__:_p,__>);
  return IVar1;
}



/* Address: 0x100b090b8 | SentryMessage::formatted */

/* Function Stack Size: 0x10 bytes */

ID SentryMessage::formatted(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 8);
}



/* Address: 0x100b090c0 | SentryMessage::message */

/* Function Stack Size: 0x10 bytes */

ID SentryMessage::message(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x10);
}



/* Address: 0x100b090c8 | SentryMessage::params */

/* Function Stack Size: 0x10 bytes */

ID SentryMessage::params(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x18);
}



/* Address: 0x100b090d0 | SentryMessage::setParams: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryMessage::setParams_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x18) = param_3;
  return;
}



/* Address: 0x100b090dc | SentryMessage::.cxx_destruct */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryMessage::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



/* Address: 0x100b09118 | SentryCrashScopeObserver::initWithMaxBreadcrumbs: */

/* Function Stack Size: 0x18 bytes */

ID SentryCrashScopeObserver::initWithMaxBreadcrumbs_(ID param_1,SEL param_2,long_long param_3)

{
  ID IVar1;
  objc_super local_30;
  
  local_30.super_class = &objc::class_t::SentryCrashScopeObserver;
  local_30.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_30,"init");
  if (IVar1 != 0) {
    FUN_100b2c9e8(param_3);
  }
  return IVar1;
}



/* Address: 0x100b0916c | SentryCrashScopeObserver::setUser: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryCrashScopeObserver::setUser_(ID param_1,SEL param_2,ID param_3)

{
  undefined *local_48;
  undefined8 local_40;
  code *local_38;
  undefined *puStack_30;
  ID local_28;
  
  local_48 = PTR___NSConcreteStackBlock_100ea82a0;
  local_40 = 0xc2000000;
  local_38 = FUN_100b091f8;
  puStack_30 = &DAT_100f33f30;
  local_28 = param_3;
  objc_stub::FUN_100c0fe60(param_1,param_3,&local_48,&PTR___NSConcreteGlobalBlock_100f33f80);
  return;
}



/* Address: 0x100b091f8 | FUN_100b091f8 */

void FUN_100b091f8(long param_1)

{
  objc_stub::serialize(*(ID *)(param_1 + 0x20));
  return;
}



/* Address: 0x100b09200 | FUN_100b09200 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_100b09200(undefined8 param_1,long param_2)

{
  return *(undefined8 *)(param_2 + 0x20);
}



/* Address: 0x100b09208 | FUN_100b09208 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b09208(void)

{
  return 0;
}



/* Address: 0x100b09210 | FUN_100b09210 */

void FUN_100b09210(undefined8 param_1,undefined8 param_2)

{
  FUN_100b2c874(param_2);
  return;
}



/* Address: 0x100b09218 | SentryCrashScopeObserver::setDist: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryCrashScopeObserver::setDist_(ID param_1,SEL param_2,ID param_3)

{
  undefined *local_48;
  undefined8 local_40;
  code *local_38;
  undefined *puStack_30;
  ID local_28;
  
  local_48 = PTR___NSConcreteStackBlock_100ea82a0;
  local_40 = 0xc2000000;
  local_38 = FUN_100b092a4;
  puStack_30 = &DAT_100f33fa0;
  local_28 = param_3;
  objc_stub::FUN_100c0fe60(param_1,param_3,&local_48,&PTR___NSConcreteGlobalBlock_100f33fd0);
  return;
}



/* Address: 0x100b092a4 | FUN_100b092a4 */

/* WARNING: Function: _objc_retainAutoreleaseReturnValue replaced with injection: _objc_retain_fixup
    */

undefined8 FUN_100b092a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Address: 0x100b092ac | FUN_100b092ac */

void FUN_100b092ac(undefined8 param_1,undefined8 param_2)

{
  FUN_100b2c8c0(param_2);
  return;
}



/* Address: 0x100b092b4 | SentryCrashScopeObserver::setEnvironment: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryCrashScopeObserver::setEnvironment_(ID param_1,SEL param_2,ID param_3)

{
  undefined *local_48;
  undefined8 local_40;
  code *local_38;
  undefined *puStack_30;
  ID local_28;
  
  local_48 = PTR___NSConcreteStackBlock_100ea82a0;
  local_40 = 0xc2000000;
  local_38 = FUN_100b09340;
  puStack_30 = &DAT_100f33fa0;
  local_28 = param_3;
  objc_stub::FUN_100c0fe60(param_1,param_3,&local_48,&PTR___NSConcreteGlobalBlock_100f33ff0);
  return;
}



/* Address: 0x100b09340 | FUN_100b09340 */

/* WARNING: Function: _objc_retainAutoreleaseReturnValue replaced with injection: _objc_retain_fixup
    */

undefined8 FUN_100b09340(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Address: 0x100b09348 | FUN_100b09348 */

void FUN_100b09348(undefined8 param_1,undefined8 param_2)

{
  FUN_100b2c8e4(param_2);
  return;
}



/* Address: 0x100b09350 | SentryCrashScopeObserver::setContext: */

/* Function Stack Size: 0x18 bytes */

void SentryCrashScopeObserver::setContext_(ID param_1,SEL param_2,ID param_3)

{
  objc_stub::FUN_100c0fe80(param_1,param_3,&PTR___NSConcreteGlobalBlock_100f34010);
  return;
}



/* Address: 0x100b0935c | FUN_100b0935c */

void FUN_100b0935c(undefined8 param_1,undefined8 param_2)

{
  FUN_100b2c8cc(param_2);
  return;
}



/* Address: 0x100b09364 | SentryCrashScopeObserver::setTraceContext: */

/* Function Stack Size: 0x18 bytes */

void SentryCrashScopeObserver::setTraceContext_(ID param_1,SEL param_2,ID param_3)

{
  objc_stub::FUN_100c0fe80(param_1,param_3,&PTR___NSConcreteGlobalBlock_100f34030);
  return;
}



/* Address: 0x100b09370 | FUN_100b09370 */

void FUN_100b09370(undefined8 param_1,undefined8 param_2)

{
  FUN_100b2c8d8(param_2);
  return;
}



/* Address: 0x100b09378 | SentryCrashScopeObserver::setExtras: */

/* Function Stack Size: 0x18 bytes */

void SentryCrashScopeObserver::setExtras_(ID param_1,SEL param_2,ID param_3)

{
  objc_stub::FUN_100c0fe80(param_1,param_3,&PTR___NSConcreteGlobalBlock_100f34050);
  return;
}



/* Address: 0x100b09384 | FUN_100b09384 */

void FUN_100b09384(undefined8 param_1,undefined8 param_2)

{
  FUN_100b2c8fc(param_2);
  return;
}



/* Address: 0x100b0938c | SentryCrashScopeObserver::setTags: */

/* Function Stack Size: 0x18 bytes */

void SentryCrashScopeObserver::setTags_(ID param_1,SEL param_2,ID param_3)

{
  objc_stub::FUN_100c0fe80(param_1,param_3,&PTR___NSConcreteGlobalBlock_100f34070);
  return;
}



/* Address: 0x100b09398 | FUN_100b09398 */

void FUN_100b09398(undefined8 param_1,undefined8 param_2)

{
  FUN_100b2c8f0(param_2);
  return;
}



/* Address: 0x100b093a0 | SentryCrashScopeObserver::setFingerprint: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryCrashScopeObserver::setFingerprint_(ID param_1,SEL param_2,ID param_3)

{
  undefined *local_48;
  undefined8 local_40;
  code *local_38;
  undefined *puStack_30;
  ID local_28;
  
  local_48 = PTR___NSConcreteStackBlock_100ea82a0;
  local_40 = 0xc2000000;
  local_38 = FUN_100b0942c;
  puStack_30 = &DAT_100f34090;
  local_28 = param_3;
  objc_stub::FUN_100c0fe60(param_1,param_3,&local_48,&PTR___NSConcreteGlobalBlock_100f340c0);
  return;
}



/* Address: 0x100b0942c | FUN_100b0942c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

undefined8 FUN_100b0942c(long param_1)

{
  ID IVar1;
  undefined8 uVar2;
  
  IVar1 = objc_stub::count(*(ID *)(param_1 + 0x20));
  uVar2 = 0;
  if (IVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
  }
  return uVar2;
}



/* Address: 0x100b0945c | FUN_100b0945c */

void FUN_100b0945c(undefined8 param_1,undefined8 param_2)

{
  FUN_100b2c908(param_2);
  return;
}



/* Address: 0x100b09464 | SentryCrashScopeObserver::setLevel: */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryCrashScopeObserver::setLevel_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  ID self;
  
  if (param_3 != 0) {
    FUN_100b425e0(param_3);
    self = objc_stub::FUN_100c107a0(param_1,param_3);
    _objc_retainAutorelease();
    objc_stub::bytes(self);
    FUN_100b2c914();
    return;
  }
  FUN_100b2c914(0);
  return;
}



/* Address: 0x100b094d0 | SentryCrashScopeObserver::setAttributes: */

/* Function Stack Size: 0x18 bytes */

void SentryCrashScopeObserver::setAttributes_(ID param_1,SEL param_2,ID param_3)

{
  return;
}



/* Address: 0x100b094d4 | SentryCrashScopeObserver::addSerializedBreadcrumb: */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryCrashScopeObserver::addSerializedBreadcrumb_(ID param_1,SEL param_2,ID param_3)

{
  ID self;
  
  self = objc_stub::FUN_100c107a0(param_1);
  if (self != 0) {
    _objc_retainAutorelease();
    objc_stub::bytes(self);
    FUN_100b2c920();
  }
  return;
}



/* Address: 0x100b09514 | SentryCrashScopeObserver::clearBreadcrumbs */

/* Function Stack Size: 0x10 bytes */

void SentryCrashScopeObserver::clearBreadcrumbs(ID param_1,SEL param_2)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  
  if (DAT_1010e2c30 != 0 && 0 < DAT_1010e2c38) {
    lVar3 = 0;
    lVar2 = DAT_1010e2c38;
    do {
      pvVar1 = *(void **)(DAT_1010e2c30 + lVar3 * 8);
      *(undefined8 *)(DAT_1010e2c30 + lVar3 * 8) = 0;
      if (pvVar1 != (void *)0x0) {
        _free(pvVar1);
        lVar2 = DAT_1010e2c38;
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < lVar2);
    DAT_1010e2c40 = 0;
  }
  return;
}


