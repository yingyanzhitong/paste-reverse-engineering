/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100058024 | FUN_100058024 */

void FUN_100058024(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fa9228 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fa9230;
  FUN_100005c24(&DAT_100fa9230,&DAT_100c260a0);
  puVar2 = &DAT_100fa9160;
  FUN_100016eac(&DAT_100fa9160,&DAT_100fa9150,&DAT_100c25ed0,
                &TargetProtocolConformanceDescriptor_100c254b8);
  puVar3 = puVar2;
  FUN_100057dd4();
  puVar4 = PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100eaadd8;
  local_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100eaadd8
             ,puVar1,&local_30);
  DAT_100fa9228 = puVar4;
  return;
}



/* Address: 0x1000580bc | thunk_FUN_100057e6c */

void thunk_FUN_100057e6c(void)

{
  FUN_100057e6c();
  return;
}



/* Address: 0x1000580c0 | thunk_FUN_10005594c */

void thunk_FUN_10005594c(void)

{
  FUN_10005594c();
  return;
}



/* Address: 0x1000580c4 | FUN_1000580c4 */

void FUN_1000580c4(void)

{
  FUN_100058118();
  return;
}



/* Address: 0x1000580e0 | FUN_1000580e0 */

void FUN_1000580e0(void)

{
  FUN_100058118();
  return;
}



/* Address: 0x1000580fc | FUN_1000580fc */

void FUN_1000580fc(void)

{
  FUN_100058118();
  return;
}



/* Address: 0x100058118 | FUN_100058118 */

undefined *
FUN_100058118(MainActor *param_1,StaticString param_2,char *param_3,void *param_4,undefined8 param_5
             ,undefined8 param_6,ulong param_7)

{
  code *pcVar1;
  MainActor *pMVar2;
  ulong uVar3;
  _StringGuts _Var4;
  char *pcVar5;
  MainActor *unaff_x20;
  long unaff_x21;
  String SVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  StaticString local_70;
  __uint64 _Stack_68;
  
  _Var4.unknown = param_2.unknown;
  pcVar5 = param_3;
  pMVar2 = Swift::MainActor::get_shared(unaff_x20,param_1);
  _swift_release();
  _swift_task_getMainExecutor();
  _swift_task_isCurrentExecutor();
  if (((ulong)pMVar2 & 1) == 0) {
    local_70.unknown = (undefined *)0x0;
    _Stack_68 = 0xe000000000000000;
    Swift::_StringGuts::grow(0x42,_Var4);
    SVar6.bridgeObject = (void *)0x8000000100d8eb40;
    SVar6.str = (char *)0xd00000000000003f;
    SVar9.bridgeObject = param_4;
    SVar9.str = pcVar5;
    Swift::String::append(SVar6,SVar9);
    SVar6 = Swift::__typeName(SUB81(unaff_x20,0));
    SVar10.bridgeObject = param_4;
    SVar10.str = pcVar5;
    Swift::String::append(SVar6,SVar10);
    _swift_bridgeObjectRelease(SVar6.bridgeObject);
    SVar7.bridgeObject = (void *)0xe100000000000000;
    SVar7.str = (char *)0x2e;
    SVar11.bridgeObject = param_4;
    SVar11.str = pcVar5;
    Swift::String::append(SVar7,SVar11);
    SVar8.bridgeObject = (void *)0x2;
    SVar8.str = (char *)0xb;
    Swift::_assertionFailure((StaticString)0x100d8deb0,SVar8,local_70,_Stack_68,(__uint32)param_3);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1000582d0);
    (*pcVar1)();
  }
  _swift_allocObject(param_7,0x20,7);
  *(MainActor **)(param_7 + 0x10) = param_1;
  *(undefined **)(param_7 + 0x18) = param_2.unknown;
  (*(code *)param_1)(&local_70);
  if (unaff_x21 == 0) {
    uVar3 = param_7;
    _swift_isEscapingClosureAtFileLocation(param_7,"",0,0,0,0);
    _swift_release(param_7);
    param_2.unknown = local_70.unknown;
    if ((uVar3 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100058234);
      (*pcVar1)();
    }
  }
  else {
    uVar3 = param_7;
    _swift_isEscapingClosureAtFileLocation(param_7,"",0,0,0,0);
    _swift_release(param_7);
    if ((uVar3 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1000581d4);
      (*pcVar1)();
    }
  }
  return param_2.unknown;
}



/* Address: 0x1000582d0 | FUN_1000582d0 */

void FUN_1000582d0(undefined8 param_1,MainActor *param_2,undefined *param_3,char *param_4,
                  void *param_5)

{
  code *pcVar1;
  MainActor *pMVar2;
  undefined *puVar3;
  undefined *puVar4;
  _StringGuts _Var5;
  char *pcVar6;
  MainActor *unaff_x20;
  long unaff_x21;
  String SVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  
  _Var5.unknown = param_3;
  pcVar6 = param_4;
  pMVar2 = Swift::MainActor::get_shared(unaff_x20,param_2);
  _swift_release();
  _swift_task_getMainExecutor();
  _swift_task_isCurrentExecutor();
  if (((ulong)pMVar2 & 1) == 0) {
    Swift::_StringGuts::grow(0x42,_Var5);
    SVar7.bridgeObject = (void *)0x8000000100d8eb40;
    SVar7.str = (char *)0xd00000000000003f;
    SVar10.bridgeObject = param_5;
    SVar10.str = pcVar6;
    Swift::String::append(SVar7,SVar10);
    SVar7 = Swift::__typeName(SUB81(unaff_x20,0));
    SVar11.bridgeObject = param_5;
    SVar11.str = pcVar6;
    Swift::String::append(SVar7,SVar11);
    _swift_bridgeObjectRelease(SVar7.bridgeObject);
    SVar8.bridgeObject = (void *)0xe100000000000000;
    SVar8.str = (char *)0x2e;
    SVar12.bridgeObject = param_5;
    SVar12.str = pcVar6;
    Swift::String::append(SVar8,SVar12);
    SVar9.bridgeObject = (void *)0x2;
    SVar9.str = (char *)0xb;
    Swift::_assertionFailure
              ((StaticString)0x100d8deb0,SVar9,(StaticString)0x0,0xe000000000000000,
               (__uint32)param_4);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100058458);
    (*pcVar1)();
  }
  puVar3 = &DAT_100eb2158;
  _swift_allocObject(&DAT_100eb2158,0x20,7);
  *(MainActor **)(puVar3 + 0x10) = param_2;
  *(undefined **)(puVar3 + 0x18) = param_3;
  (*(code *)param_2)(param_1);
  puVar4 = puVar3;
  _swift_isEscapingClosureAtFileLocation(puVar3,"",0,0,0,0);
  _swift_release(puVar3);
  if (unaff_x21 == 0) {
    if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1000583bc);
      (*pcVar1)();
    }
  }
  else if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100058390);
    (*pcVar1)();
  }
  return;
}



/* Address: 0x100058458 | FUN_100058458 */

void FUN_100058458(long param_1,undefined8 param_2,undefined8 param_3)

{
  long extraout_x8;
  undefined1 *puVar1;
  long lVar2;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  long local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined1 *puStack_48;
  
  lVar2 = *(long *)(param_1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar2 + 0x40));
  puVar1 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar2 + 0x10))(puVar1);
  Swift::MainActor::typeMetadataAccessor();
  local_60 = param_1;
  uStack_58 = param_2;
  local_50 = param_3;
  puStack_48 = puVar1;
  FUN_1000582d0(FUN_100058818,auStack_70,"Paste/CreateItemRoute.swift",0x1b,2,0xf);
  (**(code **)(lVar2 + 8))(puVar1,param_1);
  return;
}



/* Address: 0x100058520 | FUN_100058520 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100058520(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  MainActor *pMVar2;
  MainActor *pMVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  ID IVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ID *pIVar9;
  undefined *puVar10;
  undefined8 uVar11;
  ID *pIVar12;
  ID *pIVar13;
  undefined *puVar14;
  ID *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d0;
  undefined **local_c8;
  undefined **ppuStack_c0;
  undefined1 auStack_b8 [24];
  ID local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined **local_80;
  undefined8 local_70;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  pMVar3 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  pMVar2 = pMVar3;
  FUN_1000081a8();
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/CreateItemRoute.swift",0x1b,1,0xf,UVar4.unknown,pMVar2);
  }
  IVar6 = 0;
  FUN_10004ee4c();
  _objc_allocWithZone();
  IVar6 = objc_stub::init(IVar6);
  objc_stub::setAnimationBehavior_(IVar6,3);
  uVar7 = 0;
  FUN_1001ae6a8();
  _objc_allocWithZone();
  FUN_1001ae04c();
  puVar1 = (undefined8 *)(IVar6 + _TtC12PasteRouting16WindowTransition::onPresented);
  _swift_beginAccess(puVar1,auStack_b8,1,0);
  uVar8 = *puVar1;
  uVar11 = puVar1[1];
  *puVar1 = FUN_100058834;
  puVar1[1] = 0;
  FUN_100004550(uVar8,uVar11);
  local_80 = &PTR_PTR_100ebe110;
  uVar8 = 0;
  local_a0 = IVar6;
  local_88 = uVar7;
  FUN_1001adc9c();
  _swift_allocObject();
  pIVar9 = &local_a0;
  FUN_1001ad514();
  puVar14 = &DAT_100c260c0;
  _swift_getKeyPath(&DAT_100c260c0);
  puVar10 = puVar14;
  FUN_100009bac();
  FUN_1002cb7e0(&local_a0,puVar14,puVar10);
  FUN_1000037f0(&DAT_100fa8320,&DAT_100c25378);
  FUN_1002ca7e0(&local_e8);
  pIVar12 = local_e8;
  local_c8 = &PTR_PTR_100eb20c0;
  ppuStack_c0 = &PTR_PTR_100ebe100;
  uVar11 = 0;
  local_e8 = pIVar9;
  local_d0 = uVar8;
  FUN_1003b8084(0);
  _swift_allocObject();
  FUN_1003b7394(pIVar12,uStack_e0,&local_e8,uVar11);
  FUN_10008bd30(0);
  _objc_allocWithZone();
  _swift_retain(pIVar9);
  pIVar13 = pIVar12;
  _swift_retain(pIVar12);
  FUN_10008ad54();
  puVar14 = &_OBJC_CLASS___NSViewController;
  _objc_allocWithZone();
  IVar6 = objc_stub::init((ID)puVar14);
  objc_stub::setView_(IVar6,pIVar13);
  (**(code **)(*pIVar9 + 0x68))(IVar6);
  local_c8 = &PTR_PTR_100ebe0e8;
  local_e8 = pIVar9;
  local_d0 = uVar8;
  _swift_retain(pIVar9);
  FUN_1001ad32c(&local_e8,param_2,param_4);
  _swift_release(local_a0);
  _swift_release(local_98);
  _swift_release(local_90);
  _swift_release(local_80);
  _swift_release(pIVar9);
  _swift_release(pIVar12);
  _swift_release(local_70);
  FUN_100004594(&local_e8);
  _swift_release(pMVar3);
  return;
}



/* Address: 0x100058818 | FUN_100058818 */

void FUN_100058818(void)

{
  long unaff_x20;
  
  FUN_100058520(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x100058834 | FUN_100058834 */

void FUN_100058834(ID param_1)

{
  code *pcVar1;
  
  if (*(ID *)PTR__NSApp_100ea8fa0 != 0) {
    objc_stub::activateIgnoringOtherApps_(*(ID *)PTR__NSApp_100ea8fa0,1);
    objc_stub::center(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100058870);
  (*pcVar1)();
}



/* Address: 0x100058870 | FUN_100058870 */

void FUN_100058870(undefined8 param_1,undefined8 param_2)

{
  FUN_100058458(param_1,param_2,&PTR_PTR_100ebe0c0);
  return;
}



/* Address: 0x10005887c | FUN_10005887c */

void FUN_10005887c(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x10005888c | thunk_FUN_1000b0718 */

void thunk_FUN_1000b0718(void)

{
  FUN_1000b0718();
  return;
}



/* Address: 0x100058890 | thunk_FUN_10005887c */

void thunk_FUN_10005887c(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x100058894 | thunk_FUN_10005887c */

void thunk_FUN_10005887c(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x100058898 | thunk_FUN_10005887c */

void thunk_FUN_10005887c(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x10005889c | FUN_10005889c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

ID FUN_10005889c(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  ID self;
  NSArray *pNVar7;
  Published PVar8;
  AnyCancellable *this;
  __int64 _Var9;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar10;
  ID self_00;
  undefined1 auStack_d0 [8];
  ID local_c8;
  long local_c0;
  undefined *local_b8;
  long local_b0;
  long local_a8;
  undefined *local_a0;
  undefined1 auStack_98 [24];
  
  _swift_getObjectType();
  puVar3 = &DAT_100fa9278;
  FUN_1000037f0(&DAT_100fa9278,&DAT_100c26110);
  local_c0 = *(long *)(puVar3 + -8);
  local_b8 = puVar3;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_c0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100fa9280;
  FUN_1000037f0(&DAT_100fa9280,&DAT_100c26118);
  local_a8 = *(long *)(puVar3 + -8);
  local_a0 = puVar3;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_a8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = _TtC5Paste24SettingsWindowController::viewModel;
  local_b0 = (long)(auStack_d0 + -extraout_x8) - extraout_x8_00;
  uVar2 = 0;
  FUN_1000af5d4();
  _swift_allocObject();
  FUN_1000ae644();
  *(undefined8 *)(unaff_x20 + lVar10) = uVar2;
  lVar10 = _TtC5Paste24SettingsWindowController::splitViewController;
  puVar3 = &_OBJC_CLASS___NSSplitViewController;
  _objc_allocWithZone();
  IVar4 = objc_stub::init((ID)puVar3);
  *(ID *)(unaff_x20 + lVar10) = IVar4;
  puVar3 = PTR___swiftEmptySetSingleton_100eae0e8;
  if (((ulong)PTR___swiftEmptyArrayStorage_100eae0d8 >> 0x3e != 0) &&
     (_Var9 = Swift::_CocoaArrayWrapper::get_endIndex
                        ((_CocoaArrayWrapper)PTR___swiftEmptyArrayStorage_100eae0d8),
     puVar3 = PTR___swiftEmptySetSingleton_100eae0e8, _Var9 != 0)) {
    puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_10001a4b0();
  }
  *(undefined **)(unaff_x20 + _TtC5Paste24SettingsWindowController::cancellables) = puVar3;
  FUN_10000ec2c(0,&DAT_100fa6f50,&PTR__OBJC_CLASS___NSWindow_100f8d6c8);
  IVar4 = 0x8007;
  FUN_10021da68(0x8007,3);
  puVar3 = &_OBJC_CLASS___NSToolbar;
  _objc_allocWithZone();
  IVar5 = objc_stub::init((ID)puVar3);
  objc_stub::setToolbar_(IVar4,IVar5);
  objc_stub::setTitlebarAppearsTransparent_(IVar4,1);
  IVar5 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff80,"initWithWindow:",IVar4);
  IVar4 = IVar5;
  FUN_100058d74();
  IVar6 = 0;
  FUN_10002b020();
  _objc_allocWithZone();
  IVar6 = objc_stub::init(IVar6);
  self = NSSplitViewItem::splitViewItemWithViewController_((ID)&_OBJC_CLASS___NSSplitViewItem,IVar6)
  ;
  NSSplitViewItem::setMinimumThickness_(self,0x407b800000000000);
  NSSplitViewItem::setMaximumThickness_(self,0x407b800000000000);
  lVar10 = _TtC5Paste24SettingsWindowController::splitViewController;
  self_00 = *(ID *)(IVar5 + _TtC5Paste24SettingsWindowController::splitViewController);
  puVar3 = &DAT_100fa6b80;
  FUN_1000037f0(&DAT_100fa6b80,&DAT_100c23760);
  _swift_allocObject();
  *(undefined8 *)(puVar3 + 0x18) = 5;
  *(undefined8 *)(puVar3 + 0x10) = 2;
  *(ID *)(puVar3 + 0x20) = IVar4;
  *(ID *)(puVar3 + 0x28) = self;
  FUN_10000ec2c(0,&DAT_100fa9288,&PTR__OBJC_CLASS___NSSplitViewItem_100f8d7c8);
  local_c8 = IVar4;
  pNVar7 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_release(puVar3);
  objc_stub::setSplitViewItems_(self_00,pNVar7);
  objc_stub::setContentViewController_(IVar5,*(undefined8 *)(IVar5 + lVar10));
  lVar10 = *(long *)(IVar5 + _TtC5Paste24SettingsWindowController::viewModel);
  _swift_beginAccess(lVar10 + _TtC5Paste17SettingsViewModel::_selectedPane,auStack_98,0x21,0);
  _swift_retain(lVar10);
  PVar8.unknown = &DAT_100fa9290;
  FUN_1000037f0(&DAT_100fa9290,&DAT_100c26128);
  Combine::Published::_get_projectedValue(PVar8);
  _swift_endAccess(auStack_98);
  _swift_release(lVar10);
  FUN_1000037f0(&DAT_100fa9298,&DAT_100c26130);
  FUN_100016eac(&DAT_100fa92a0,&DAT_100fa9278,&DAT_100c26110,
                PTR__Combine__Publisher_>Combine__Publisher_100ea98d0);
  lVar10 = local_b0;
  puVar3 = local_b8;
  (extension_Combine)::Combine::Publisher::_compactMap();
  (**(code **)(local_c0 + 8))(auStack_d0 + -extraout_x8,puVar3);
  puVar3 = &DAT_100eb2188;
  _swift_allocObject(&DAT_100eb2188,0x18,7);
  *(ID *)(puVar3 + 0x10) = IVar6;
  FUN_100016eac(&DAT_100fa92a8,&DAT_100fa9280,&DAT_100c26118,
                PTR_Combine__Combine__Publishers__CompactMap<undefined,undefined>_>Combine__Publisher_100ea9628
               );
  puVar1 = local_a0;
  this = (extension_Combine)::Combine::Publisher::_sink();
  _swift_release(puVar3);
  (**(code **)(local_a8 + 8))(lVar10,puVar1);
  lVar10 = _TtC5Paste24SettingsWindowController::cancellables;
  _swift_beginAccess(IVar5 + _TtC5Paste24SettingsWindowController::cancellables,auStack_98,0x21,0);
  Combine::AnyCancellable::store(this,(undefined *)(IVar5 + lVar10));
  _swift_endAccess(auStack_98);
  _swift_release(this);
  return IVar5;
}



/* Address: 0x100058d74 | FUN_100058d74 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100058e38 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ID FUN_100058d74(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ObservedObject<undefined> OVar5;
  NSHostingController *pNVar6;
  undefined1 *puVar7;
  ID self;
  long extraout_x8;
  long extraout_x12;
  undefined8 *puVar8;
  long unaff_x20;
  undefined8 uVar9;
  
  lVar2 = 0;
  FUN_100026b40();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar7 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar8 = (undefined8 *)(puVar7 + -extraout_x12);
  uVar9 = *(undefined8 *)
           (*(long *)(unaff_x20 + _TtC5Paste24SettingsWindowController::viewModel) +
           _TtC5Paste17SettingsViewModel::sidebarViewModel);
  uVar3 = 0;
  FUN_100055770();
  puVar4 = &DAT_100fa7920;
  FUN_100003a00(&DAT_100fa7920,FUN_100055770,&TargetProtocolConformanceDescriptor_100c25cc8);
  _swift_retain(uVar9);
  OVar5 = SwiftUI::ObservedObject::init(puVar4,uVar3,puVar4);
  *puVar8 = OVar5.unknown;
  puVar8[1] = uVar3;
  iVar1 = *(int *)(lVar2 + 0x14);
  puVar4 = &DAT_100c26140;
  _swift_getKeyPath();
  *(undefined **)((long)puVar8 + (long)iVar1) = puVar4;
  puVar4 = &DAT_100fa7858;
  FUN_1000037f0(&DAT_100fa7858,&DAT_100c26170);
  _swift_storeEnumTagMultiPayload((undefined1 *)((long)puVar8 + (long)iVar1),puVar4,0);
  FUN_1000288d8(puVar8,puVar7);
  pNVar6 = (NSHostingController *)&DAT_100fa92b8;
  FUN_1000037f0(&DAT_100fa92b8,&DAT_100c26178);
  _objc_allocWithZone();
  SwiftUI::NSHostingController::_init(pNVar6,puVar7);
  self = NSSplitViewItem::sidebarWithViewController_((ID)&_OBJC_CLASS___NSSplitViewItem,puVar7);
  NSSplitViewItem::setCanCollapse_(self,0);
  NSSplitViewItem::setMinimumThickness_(self,0x4069000000000000);
  NSSplitViewItem::setMaximumThickness_(self,0x4069000000000000);
  FUN_100059568(puVar8);
  return self;
}



/* Address: 0x100058f24 | FUN_100058f24 */

void FUN_100058f24(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/SettingsWindowController.swift",0x24,1,0x1e,UVar4.unknown,puVar3);
  }
  FUN_1000594f4(param_2,param_1);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x100058fd8 | FUN_100058fd8 */

void FUN_100058fd8(undefined8 param_1)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/SettingsWindowController.swift",0x24,1,0x1f,UVar4.unknown,puVar3);
  }
  FUN_10002ac88(param_1);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x100059090 | _TtC5Paste24SettingsWindowController::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC5Paste24SettingsWindowController::init(ID param_1,SEL param_2)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  char *pcVar5;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  pcVar5 = (char *)UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar5 & 1) == 0) {
    pcVar5 = "Paste/SettingsWindowController.swift";
    _swift_task_reportUnexpectedExecutor
              ("Paste/SettingsWindowController.swift",0x24,1,10,UVar4.unknown,puVar3);
  }
  FUN_10005889c();
  _swift_release(pMVar2);
  return (ID)pcVar5;
}



/* Address: 0x10005914c | _TtC5Paste24SettingsWindowController::initWithCoder: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC5Paste24SettingsWindowController::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/SettingsWindowController.swift",0x24,1,0x26,UVar4.unknown,puVar3);
  }
  FUN_1000593dc();
  _swift_release(pMVar2);
  return param_3;
}



/* Address: 0x100059214 | _TtC5Paste24SettingsWindowController::initWithWindow: */

/* Function Stack Size: 0x18 bytes */

ID _TtC5Paste24SettingsWindowController::initWithWindow_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  code *pcVar2;
  MainActor *this;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  
  this = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  Swift::MainActor::get_shared(this,this);
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/SettingsWindowController.swift",0x24,1,5,UVar4.unknown,puVar3);
  }
  __swift_stdlib_reportUnimplementedInitializer
            ("Paste.SettingsWindowController",0x1e,"init(window:)",0xd,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1000592bc);
  (*pcVar2)();
}



/* Address: 0x1000592bc | FUN_1000592bc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000592bc(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + _TtC5Paste24SettingsWindowController::viewModel));
  _swift_bridgeObjectRelease
            (*(undefined8 *)(unaff_x20 + _TtC5Paste24SettingsWindowController::cancellables));
  return;
}



/* Address: 0x1000592f8 | _TtC5Paste24SettingsWindowController::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC5Paste24SettingsWindowController::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_release(*(undefined8 *)(param_1 + viewModel));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + cancellables));
  return;
}



/* Address: 0x100059340 | FUN_100059340 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100059340(void)

{
  return ZEXT816(0x100f910a8);
}



/* Address: 0x100059360 | FUN_100059360 */

void FUN_100059360(undefined8 param_1,EnvironmentValues *param_2)

{
  ControlActiveState CVar1;
  undefined7 extraout_var;
  long extraout_x8;
  long extraout_x12;
  
  CVar1 = SwiftUI::ControlActiveState::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(undefined8 *)(*(long *)(CONCAT71(extraout_var,CVar1.value) + -8) + 0x40));
  (**(code **)(extraout_x12 + 0x10))
            (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_1);
  SwiftUI::EnvironmentValues::set_controlActiveState
            (param_2,(ControlActiveState)
                     (__int8)(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0))
            );
  return;
}



/* Address: 0x1000593dc | FUN_1000593dc */

void FUN_1000593dc(void)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ID IVar5;
  __int64 _Var6;
  long unaff_x20;
  String SVar7;
  
  lVar1 = _TtC5Paste24SettingsWindowController::viewModel;
  uVar3 = 0;
  FUN_1000af5d4();
  _swift_allocObject();
  FUN_1000ae644();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar3;
  lVar1 = _TtC5Paste24SettingsWindowController::splitViewController;
  puVar4 = &_OBJC_CLASS___NSSplitViewController;
  _objc_allocWithZone();
  IVar5 = objc_stub::init((ID)puVar4);
  *(ID *)(unaff_x20 + lVar1) = IVar5;
  puVar4 = PTR___swiftEmptySetSingleton_100eae0e8;
  if (((ulong)PTR___swiftEmptyArrayStorage_100eae0d8 >> 0x3e != 0) &&
     (_Var6 = Swift::_CocoaArrayWrapper::get_endIndex
                        ((_CocoaArrayWrapper)PTR___swiftEmptyArrayStorage_100eae0d8),
     puVar4 = PTR___swiftEmptySetSingleton_100eae0e8, _Var6 != 0)) {
    puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_10001a4b0();
  }
  *(undefined **)(unaff_x20 + _TtC5Paste24SettingsWindowController::cancellables) = puVar4;
  SVar7.bridgeObject = (void *)0x2;
  SVar7.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar7,(StaticString)0xd000000000000025,0x8000000100d8dc00,
             0xd8ebb0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1000594c8);
  (*pcVar2)();
}



/* Address: 0x1000594c8 | FUN_1000594c8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000594c8(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x1000594ec | FUN_1000594ec */

void FUN_1000594ec(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100058fd8(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1000594f4 | FUN_1000594f4 */

undefined8 FUN_1000594f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fa92b0;
  FUN_1000037f0(&DAT_100fa92b0,&DAT_100c26138);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x100059544 | FUN_100059544 */

void FUN_100059544(EnvironmentValues param_1)

{
  SwiftUI::EnvironmentValues::get_controlActiveState(param_1);
  return;
}



/* Address: 0x100059564 | thunk_FUN_100059360 */

void thunk_FUN_100059360(void)

{
  FUN_100059360();
  return;
}



/* Address: 0x100059568 | FUN_100059568 */

undefined8 FUN_100059568(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_100026b40();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Address: 0x1000595a4 | thunk_FUN_100059638 */

void thunk_FUN_100059638(void)

{
  FUN_100059638();
  return;
}



/* Address: 0x1000595a8 | FUN_1000595a8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1000595a8(void)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1000081a8();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/SettingsRoute.swift",0x19,1,0x18,UVar3.unknown,pMVar1);
  }
  DAT_100fa92c0 = 0;
  _swift_release(pMVar2);
  return 0;
}



/* Address: 0x100059638 | FUN_100059638 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100059638(void)

{
  code *pcVar1;
  ID IVar2;
  ID IVar3;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (*(ID *)PTR__NSApp_100ea8fa0 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100059768);
    (*pcVar1)();
  }
  objc_stub::activate(*(ID *)PTR__NSApp_100ea8fa0);
  if (DAT_100fa92c0 != 0) {
    IVar2 = objc_stub::window(DAT_100fa92c0);
    if (IVar2 != 0) {
      FUN_1001adce8();
    }
    return 0;
  }
  IVar2 = DAT_100fa92c0;
  FUN_100059340();
  _objc_allocWithZone();
  IVar3 = objc_stub::init(IVar2);
  IVar2 = DAT_100fa92c0;
  DAT_100fa92c0 = IVar3;
  if (IVar3 != 0) {
    uStack_48 = 0;
    local_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    FUN_100217e4c(IVar2,&local_50,FUN_1000595a8,0);
    FUN_100013954(&local_50);
    if (DAT_100fa92c0 != 0) {
      IVar2 = objc_stub::window(DAT_100fa92c0);
      objc_stub::center(IVar2);
      if ((DAT_100fa92c0 != 0) && (IVar2 = objc_stub::window(DAT_100fa92c0), IVar2 != 0)) {
        FUN_1001adce8();
      }
    }
  }
  return 0;
}



/* Address: 0x100059768 | FUN_100059768 */

ulong FUN_100059768(ulong param_1,long param_2,long param_3)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  lVar6 = param_2;
  FUN_100059b20();
  uVar4 = param_1;
  if (lVar6 < 1) {
    uVar4 = param_1 - 1;
    if ((long)param_1 < 1) {
      lVar6 = *(long *)(param_2 + 0x10);
      if (lVar6 == 0) {
        uVar4 = 0xffffffffffffffff;
      }
      else {
        lVar5 = 0;
        plVar7 = (long *)(param_2 + 0x20);
        do {
          bVar3 = SCARRY8(lVar5,*plVar7);
          lVar5 = lVar5 + *plVar7;
          if (bVar3) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100059868);
            (*pcVar2)();
          }
          lVar6 = lVar6 + -1;
          plVar7 = plVar7 + 1;
        } while (lVar6 != 0);
        uVar4 = lVar5 - 1;
        if (SBORROW8(lVar5,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100059864);
          (*pcVar2)();
        }
      }
      return uVar4;
    }
    if (*(ulong *)(param_2 + 0x10) < param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10005986c);
      (*pcVar2)();
    }
    lVar6 = *(long *)(param_2 + uVar4 * 8 + 0x20);
    if (SCARRY8(lVar6,param_3)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100059870);
      (*pcVar2)();
    }
    lVar5 = lVar6 + param_3 + -1;
    if (SBORROW8(lVar6 + param_3,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100059874);
      (*pcVar2)();
    }
    if (param_3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100059878);
      (*pcVar2)();
    }
    if (lVar5 == -0x8000000000000000 && param_3 == -1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100059884);
      (*pcVar2)();
    }
    if ((lVar6 == -0x8000000000000000) && (param_3 == -1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100059888);
      (*pcVar2)();
    }
    lVar1 = 0;
    if (param_3 != 0) {
      lVar1 = lVar6 / param_3;
    }
    lVar6 = lVar6 - lVar1 * param_3;
    lVar1 = param_3;
    if (lVar6 != 0) {
      lVar1 = lVar6;
    }
    if (SBORROW8(lVar1,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10005987c);
      (*pcVar2)();
    }
    lVar6 = 0;
    if (param_3 != 0) {
      lVar6 = lVar5 / param_3;
    }
    if (SBORROW8(lVar6,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100059880);
      (*pcVar2)();
    }
  }
  FUN_100059ba4();
  return uVar4;
}



/* Address: 0x100059888 | FUN_100059888 */

ulong FUN_100059888(ulong param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar8 = param_2;
  lVar9 = param_3;
  FUN_100059b20();
  if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100059a0c);
    (*pcVar3)();
  }
  if (*(ulong *)(param_2 + 0x10) <= param_1) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100059a10);
    (*pcVar3)();
  }
  lVar10 = *(long *)(param_2 + 0x20 + param_1 * 8);
  if (SCARRY8(lVar10,param_3)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100059a14);
    (*pcVar3)();
  }
  lVar2 = lVar10 + param_3 + -1;
  if (SBORROW8(lVar10 + param_3,1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100059a18);
    (*pcVar3)();
  }
  if (param_3 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100059a1c);
    (*pcVar3)();
  }
  if (lVar2 == -0x8000000000000000 && param_3 == -1) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100059a24);
    (*pcVar3)();
  }
  if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100059a20);
    (*pcVar3)();
  }
  lVar1 = 0;
  if (param_3 != 0) {
    lVar1 = lVar2 / param_3;
  }
  if (lVar8 + 1 < lVar1) {
    _swift_bridgeObjectRetain(param_2);
    uVar5 = param_1;
    FUN_100059ba4(param_1,lVar8 + 1,lVar9,param_2,param_3);
    uVar7 = *(ulong *)(param_2 + 0x10);
    uVar6 = uVar7;
    if (param_1 + 1 <= uVar7) {
      uVar6 = param_1 + 1;
    }
    if (uVar7 == 0) {
      _swift_unknownObjectRelease(param_2);
      if ((long)uVar5 < 0) {
        return uVar5;
      }
    }
    else {
      lVar9 = 0;
      lVar8 = 0x20;
      do {
        bVar4 = SCARRY8(lVar9,*(long *)(param_2 + lVar8));
        lVar9 = lVar9 + *(long *)(param_2 + lVar8);
        if (bVar4) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100059a08);
          (*pcVar3)();
        }
        lVar8 = lVar8 + 8;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
      _swift_unknownObjectRelease(param_2);
      if ((long)uVar5 < lVar9) {
        return uVar5;
      }
    }
    lVar8 = lVar10 + -1;
    if (SBORROW8(lVar10,1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100059a28);
      (*pcVar3)();
    }
    if ((lVar8 == -0x8000000000000000) && (param_3 == -1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100059a30);
      (*pcVar3)();
    }
    lVar9 = 0;
    if (param_3 != 0) {
      lVar9 = lVar8 / param_3;
    }
    lVar8 = lVar8 - lVar9 * param_3;
  }
  else {
    param_1 = param_1 + 1;
    if (*(ulong *)(param_2 + 0x10) <= param_1) {
      return 0;
    }
    lVar10 = *(long *)(param_2 + 0x20 + param_1 * 8);
    lVar8 = lVar10 + -1;
    if (SBORROW8(lVar10,1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100059a2c);
      (*pcVar3)();
    }
    if (lVar9 <= lVar8) {
      lVar8 = lVar9;
    }
    lVar9 = 0;
  }
  FUN_100059ba4(param_1,lVar9,lVar8,param_2,param_3);
  return param_1;
}



/* Address: 0x100059a30 | FUN_100059a30 */

long FUN_100059a30(long param_1,long param_2)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  if (SBORROW8(param_1,1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100059ab4);
    (*pcVar1)();
  }
  lVar3 = *(long *)(param_2 + 0x10);
  if (lVar3 != 0) {
    lVar5 = 0;
    plVar4 = (long *)(param_2 + 0x20);
    lVar6 = lVar3;
    do {
      bVar2 = SCARRY8(lVar5,*plVar4);
      lVar5 = lVar5 + *plVar4;
      if (bVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100059aac);
        (*pcVar1)();
      }
      lVar6 = lVar6 + -1;
      plVar4 = plVar4 + 1;
    } while (lVar6 != 0);
    lVar6 = param_1 + -1 + lVar5;
    if (SCARRY8(param_1 + -1,lVar5)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100059ab8);
      (*pcVar1)();
    }
    lVar5 = 0;
    plVar4 = (long *)(param_2 + 0x20);
    do {
      bVar2 = SCARRY8(lVar5,*plVar4);
      lVar5 = lVar5 + *plVar4;
      if (bVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100059ab0);
        (*pcVar1)();
      }
      lVar3 = lVar3 + -1;
      plVar4 = plVar4 + 1;
    } while (lVar3 != 0);
    if (lVar5 != 0) {
      if ((lVar6 == -0x8000000000000000) && (lVar5 == -1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100059abc);
        (*pcVar1)();
      }
      lVar3 = 0;
      if (lVar5 != 0) {
        lVar3 = lVar6 / lVar5;
      }
      return lVar6 - lVar3 * lVar5;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100059ac0);
  (*pcVar1)();
}



/* Address: 0x100059ac0 | FUN_100059ac0 */

long FUN_100059ac0(long param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar1 = param_1 + 1;
  if (SCARRY8(param_1,1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100059b18);
    (*pcVar2)();
  }
  lVar5 = *(long *)(param_2 + 0x10);
  if (lVar5 != 0) {
    lVar4 = 0;
    plVar6 = (long *)(param_2 + 0x20);
    do {
      bVar3 = SCARRY8(lVar4,*plVar6);
      lVar4 = lVar4 + *plVar6;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100059b14);
        (*pcVar2)();
      }
      lVar5 = lVar5 + -1;
      plVar6 = plVar6 + 1;
    } while (lVar5 != 0);
    if (lVar4 != 0) {
      if ((lVar1 == -0x8000000000000000) && (lVar4 == -1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100059b1c);
        (*pcVar2)();
      }
      lVar5 = 0;
      if (lVar4 != 0) {
        lVar5 = lVar1 / lVar4;
      }
      return lVar1 - lVar5 * lVar4;
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100059b20);
  (*pcVar2)();
}



/* Address: 0x100059b20 | FUN_100059b20 */

long FUN_100059b20(long param_1,long param_2,long param_3)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = 0;
  lVar1 = 0;
  do {
    lVar4 = lVar1;
    lVar3 = lVar5;
    if (*(long *)(param_2 + 0x10) == lVar3) {
      return 0;
    }
    lVar5 = *(long *)(param_2 + 0x20 + lVar3 * 8);
    lVar1 = lVar4 + lVar5;
    if (SCARRY8(lVar4,lVar5)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100059b98);
      (*pcVar2)();
    }
    lVar5 = lVar3 + 1;
  } while (lVar1 <= param_1);
  if (SBORROW8(param_1,lVar4)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100059b9c);
    (*pcVar2)();
  }
  if (param_3 != 0) {
    if ((param_1 - lVar4 == -0x8000000000000000) && (param_3 == -1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100059ba4);
      (*pcVar2)();
    }
    return lVar3;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100059ba0);
  (*pcVar2)();
}



/* Address: 0x100059ba4 | FUN_100059ba4 */

long FUN_100059ba4(ulong param_1,long param_2,long param_3,long param_4,long param_5)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  
  lVar3 = param_2 * param_5;
  if (SUB168(SEXT816(param_2) * SEXT816(param_5),8) != lVar3 >> 0x3f) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100059c08);
    (*pcVar1)();
  }
  if (SCARRY8(lVar3,param_3)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100059c0c);
    (*pcVar1)();
  }
  if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100059c10);
    (*pcVar1)();
  }
  lVar4 = 0;
  uVar5 = *(ulong *)(param_4 + 0x10);
  if (param_1 <= *(ulong *)(param_4 + 0x10)) {
    uVar5 = param_1;
  }
  if ((param_1 != 0) && (uVar5 != 0)) {
    lVar4 = 0;
    plVar6 = (long *)(param_4 + 0x20);
    do {
      bVar2 = SCARRY8(lVar4,*plVar6);
      lVar4 = lVar4 + *plVar6;
      if (bVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100059c04);
        (*pcVar1)();
      }
      uVar5 = uVar5 - 1;
      plVar6 = plVar6 + 1;
    } while (uVar5 != 0);
  }
  if (!SCARRY8(lVar4,lVar3 + param_3)) {
    return lVar4 + lVar3 + param_3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100059c14);
  (*pcVar1)();
}



/* Address: 0x100059c14 | FUN_100059c14 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

undefined8 FUN_100059c14(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _swift_retain(uVar2);
  (*pcVar1)(param_2);
  _swift_release(uVar2);
  return param_2;
}



/* Address: 0x100059c6c | FUN_100059c6c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
FUN_100059c6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long unaff_x20;
  
  lVar4 = _TtC5Paste21FilterSuggestionsMenu::suggestionsView;
  lVar5 = *(long *)(unaff_x20 + _TtC5Paste21FilterSuggestionsMenu::suggestionsView);
  if (lVar5 == 0) {
    FUN_1000304e4();
    _objc_allocWithZone();
    puVar6 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_10002ebe4();
    FUN_10004afac(0);
    _objc_allocWithZone();
    puVar7 = puVar6;
    FUN_1000496ac();
    puVar9 = &DAT_100eb21c8;
    puVar8 = puVar9;
    _swift_allocObject(&DAT_100eb21c8,0x18,7);
    _swift_unknownObjectWeakInit(puVar8 + 0x10,puVar6);
    puVar1 = (undefined8 *)
             (puVar7 + _TtC5Paste29FilterSuggestionsMenuScroller::onTopIndicatorHovered);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    *puVar1 = FUN_10005aa84;
    puVar1[1] = puVar8;
    _swift_retain(puVar8);
    FUN_100004550(uVar2,uVar3);
    _swift_release(puVar8);
    _swift_allocObject(&DAT_100eb21c8,0x18,7);
    _swift_unknownObjectWeakInit(puVar9 + 0x10,puVar6);
    puVar1 = (undefined8 *)
             (puVar7 + _TtC5Paste29FilterSuggestionsMenuScroller::onBottomIndicatorHovered);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    *puVar1 = FUN_10005abc8;
    puVar1[1] = puVar9;
    _swift_retain(puVar9);
    FUN_100004550(uVar2,uVar3);
    _swift_release(puVar9);
    *(undefined **)(unaff_x20 + lVar4) = puVar6;
    *(undefined **)(unaff_x20 + _TtC5Paste21FilterSuggestionsMenu::suggestionsScrollView) = puVar7;
    lVar5 = *(long *)(unaff_x20 + lVar4);
    if (lVar5 == 0) goto LAB_100059e64;
  }
  puVar1 = (undefined8 *)(lVar5 + _TtC5Paste21FilterSuggestionsList::onEscapePressed);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = param_7;
  puVar1[1] = param_8;
  FUN_100004550(uVar2,uVar3);
  _swift_retain(param_8);
  if (*(long *)(unaff_x20 + lVar4) != 0) {
    FUN_10002ee40(param_5);
  }
LAB_100059e64:
  if (*(long *)(unaff_x20 + _TtC5Paste21FilterSuggestionsMenu::suggestionsScrollView) != 0) {
    FUN_10005ad00(param_1,param_2,param_3,param_4,
                  *(long *)(unaff_x20 + _TtC5Paste21FilterSuggestionsMenu::suggestionsScrollView),
                  param_6);
    return 0;
  }
  return 0;
}



/* Address: 0x100059f04 | FUN_100059f04 */

void FUN_100059f04(long param_1,char *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  void *pvVar3;
  char *pcVar4;
  void *pvVar5;
  long extraout_x8;
  long lVar6;
  Notification NVar7;
  Notification NVar8;
  
  NVar7 = Foundation::Notification::typeMetadataAccessor();
  pvVar5 = NVar7.syncInProgress.bridgeObject;
  pcVar4 = NVar7.syncInProgress.str;
  pvVar3 = NVar7.pastePaused.bridgeObject;
  lVar6 = *(long *)(NVar7.pastePaused.str + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar6 + 0x40));
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  NVar8.pastePaused.bridgeObject = pvVar3;
  NVar8.pastePaused.str = param_2;
  NVar8.syncInProgress.bridgeObject = pvVar5;
  NVar8.syncInProgress.str = pcVar4;
  NVar8 = Foundation::Notification::__unconditionallyBridgeFromObjectiveC(NVar8);
  _swift_retain(uVar2,NVar8.pastePaused.bridgeObject,NVar8.syncInProgress.str,
                NVar8.syncInProgress.bridgeObject);
  (*pcVar1)(&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  _swift_release(uVar2);
  (**(code **)(lVar6 + 8))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             NVar7.pastePaused.str);
  return;
}



/* Address: 0x100059fa8 | _TtC5Paste21FilterSuggestionsMenu::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC5Paste21FilterSuggestionsMenu::init(ID param_1,SEL param_2)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  ID IVar5;
  CGRect CVar6;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1000081a8();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/FilterSuggestionsMenu.swift",0x21,1,0x11,UVar3.unknown,pMVar1);
  }
  CVar6.field1_0x10 = (CGSize)ZEXT816(0);
  CVar6.field0_0x0 = (CGPoint)ZEXT816(0);
  IVar5 = initWithContentRect_styleMask_backing_defer_(param_1,CVar6,0,2,0);
  _swift_release(pMVar2);
  return IVar5;
}



/* Address: 0x10005a058 | _TtC5Paste21FilterSuggestionsMenu::initWithContentRect:styleMask:backing:defer: */

/* Function Stack Size: 0x44 bytes */

ID _TtC5Paste21FilterSuggestionsMenu::initWithContentRect_styleMask_backing_defer_
             (ID param_1,SEL param_2,CGRect param_3,unsigned_long_long param_4,
             unsigned_long_long param_5,bool param_6)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  double dVar5;
  
  dVar5 = param_3.field0_0x0.field1_0x8;
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1000081a8();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/FilterSuggestionsMenu.swift",0x21,1,0x15,UVar3.unknown,pMVar1);
  }
  FUN_10005b1cc(dVar5,param_3.field1_0x10.field0_0x0);
  _swift_release(pMVar2);
  return (ID)dVar5;
}



/* Address: 0x10005a138 | FUN_10005a138 */

void FUN_10005a138(void)

{
  _swift_getObjectType();
  FUN_10005a17c();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffd0,"dealloc");
  return;
}



/* Address: 0x10005a17c | FUN_10005a17c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10005a17c(void)

{
  long lVar1;
  undefined1 *puVar2;
  ID self;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_a8 [24];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long local_78;
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [24];
  undefined8 local_38;
  
  lVar1 = _TtC5Paste21FilterSuggestionsMenu::mouseDownMonitor;
  _swift_beginAccess(unaff_x20 + _TtC5Paste21FilterSuggestionsMenu::mouseDownMonitor,auStack_68,0,0)
  ;
  FUN_10001a348(unaff_x20 + lVar1,&local_90);
  if (local_78 == 0) {
    FUN_100013954(&local_90);
  }
  else {
    FUN_100011080(&local_90,auStack_50);
    puVar2 = auStack_50;
    FUN_100004640(puVar2,local_38);
    Swift::__bridgeAnythingToObjectiveC();
    NSEvent::removeMonitor_((ID)&_OBJC_CLASS___NSEvent,puVar2);
    _swift_unknownObjectRelease(puVar2);
    FUN_100004594(auStack_50);
    uStack_88 = 0;
    local_90 = 0;
    local_78 = 0;
    uStack_80 = 0;
    _swift_beginAccess(unaff_x20 + lVar1,auStack_a8,0x21,0);
    FUN_100030590(&local_90,unaff_x20 + lVar1);
    _swift_endAccess(auStack_a8);
  }
  lVar1 = _TtC5Paste21FilterSuggestionsMenu::lostFocusObserver;
  lVar4 = *(long *)(unaff_x20 + _TtC5Paste21FilterSuggestionsMenu::lostFocusObserver);
  if (lVar4 != 0) {
    _swift_unknownObjectRetain(lVar4);
    self = NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
    NSNotificationCenter::removeObserver_(self,lVar4);
    _swift_unknownObjectRelease(lVar4);
    uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined8 *)(unaff_x20 + lVar1) = 0;
    _swift_unknownObjectRelease(uVar3);
  }
  return;
}



/* Address: 0x10005a2c4 | _TtC5Paste21FilterSuggestionsMenu::dealloc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC5Paste21FilterSuggestionsMenu::dealloc(ID param_1,SEL param_2)

{
  class_t *pcVar1;
  objc_super local_40;
  
  pcVar1 = (class_t *)param_1;
  _swift_getObjectType();
  FUN_10005a17c();
  local_40.receiver = param_1;
  local_40.super_class = pcVar1;
  _objc_msgSendSuper2(&local_40,"dealloc");
  return;
}



/* Address: 0x10005a31c | _TtC5Paste21FilterSuggestionsMenu::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC5Paste21FilterSuggestionsMenu::_cxx_destruct(ID param_1,SEL param_2)

{
  FUN_100013954(param_1 + mouseDownMonitor);
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + lostFocusObserver));
  return;
}



/* Address: 0x10005a374 | FUN_10005a374 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10005a374(void)

{
  return ZEXT816(0x100f91238);
}



/* Address: 0x10005a394 | FUN_10005a394 */

void FUN_10005a394(void)

{
  long unaff_x20;
  
  _swift_unknownObjectWeakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x10005a3b8 | FUN_10005a3b8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10005a3b8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  void *pvVar4;
  ID IVar5;
  ID IVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined1 auStack_a8 [24];
  undefined *local_90;
  undefined8 uStack_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  FUN_10005a17c();
  puVar2 = &DAT_100eb21f0;
  _swift_allocObject(&DAT_100eb21f0,0x18,7);
  _swift_unknownObjectWeakInit(puVar2 + 0x10);
  puVar3 = &DAT_100eb2218;
  _swift_allocObject(&DAT_100eb2218,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_2;
  puVar2 = PTR___NSConcreteStackBlock_100ea82a0;
  local_70 = FUN_10005b188;
  local_90 = PTR___NSConcreteStackBlock_100ea82a0;
  uStack_88 = 0x42000000;
  local_80 = FUN_100059c14;
  puStack_78 = &DAT_100eb2230;
  local_68 = puVar3;
  pvVar4 = __Block_copy(&local_90);
  _swift_release(local_68);
  IVar5 = NSEvent::addLocalMonitorForEventsMatchingMask_handler_
                    ((ID)&_OBJC_CLASS___NSEvent,0x200000a,pvVar4);
  __Block_release(pvVar4);
  if (IVar5 == 0) {
    uStack_88 = 0;
    local_90 = (undefined *)0x0;
    puStack_78 = (undefined *)0x0;
    local_80 = (code *)0x0;
  }
  else {
    Swift::__bridgeAnyObjectToAny();
    _swift_unknownObjectRelease(IVar5);
  }
  lVar1 = _TtC5Paste21FilterSuggestionsMenu::mouseDownMonitor;
  _swift_beginAccess(unaff_x20 + _TtC5Paste21FilterSuggestionsMenu::mouseDownMonitor,auStack_a8,0x21
                     ,0);
  FUN_100030590(&local_90,unaff_x20 + lVar1);
  _swift_endAccess(auStack_a8);
  IVar5 = NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  uVar7 = *(undefined8 *)PTR__NSWindowDidResignKeyNotification_100ea9158;
  IVar6 = NSOperationQueue::mainQueue((ID)&_OBJC_CLASS___NSOperationQueue);
  puVar3 = &DAT_100eb21f0;
  _swift_allocObject(&DAT_100eb21f0,0x18,7);
  _swift_unknownObjectWeakInit(puVar3 + 0x10);
  local_70 = FUN_10005b1ac;
  local_90 = puVar2;
  uStack_88 = 0x42000000;
  local_80 = FUN_100059f04;
  puStack_78 = &DAT_100eb2258;
  local_68 = puVar3;
  pvVar4 = __Block_copy(&local_90);
  _swift_release(local_68);
  IVar5 = NSNotificationCenter::addObserverForName_object_queue_usingBlock_
                    (IVar5,uVar7,param_1,IVar6,pvVar4);
  __Block_release(pvVar4);
  uVar7 = *(undefined8 *)(unaff_x20 + _TtC5Paste21FilterSuggestionsMenu::lostFocusObserver);
  *(ID *)(unaff_x20 + _TtC5Paste21FilterSuggestionsMenu::lostFocusObserver) = IVar5;
  _swift_unknownObjectRelease(uVar7);
  return;
}



/* Address: 0x10005a618 | FUN_10005a618 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10005a618(ID param_1,long param_2,ID param_3)

{
  undefined8 *puVar1;
  bool bVar2;
  MainActor *pMVar3;
  MainActor *pMVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  NSObject *pNVar7;
  NSObject *pNVar8;
  ulong uVar9;
  code *pcVar10;
  undefined8 uVar11;
  
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  pMVar4 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  pMVar3 = pMVar4;
  FUN_1000081a8();
  UVar5 = Swift::Actor::get_unownedExecutor();
  UVar6 = UVar5;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar6.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/FilterSuggestionsMenu.swift",0x21,1,0x68,UVar5.unknown,pMVar3);
  }
  pNVar7 = (NSObject *)objc_stub::window(param_1);
  pNVar8 = (NSObject *)(param_2 + 0x10);
  _swift_unknownObjectWeakLoadStrong();
  if (pNVar7 == (NSObject *)0x0) {
    if (pNVar8 == (NSObject *)0x0) goto LAB_10005a888;
  }
  else if (pNVar8 != (NSObject *)0x0) {
    FUN_10000ec2c(0,&DAT_100fa6f50,&PTR__OBJC_CLASS___NSWindow_100f8d6c8);
    bVar2 = (extension_ObjectiveC)::__C::NSObject::___infix(pNVar7,pNVar8);
    if (bVar2) goto LAB_10005a888;
  }
  pNVar8 = (NSObject *)objc_stub::window(param_1);
  if ((pNVar8 != (NSObject *)0x0) &&
     (pNVar7 = (NSObject *)objc_stub::window(param_3), pNVar7 != (NSObject *)0x0)) {
    FUN_10000ec2c(0,&DAT_100fa6f50,&PTR__OBJC_CLASS___NSWindow_100f8d6c8);
    bVar2 = (extension_ObjectiveC)::__C::NSObject::___infix(pNVar8,pNVar7);
    if (bVar2) {
      objc_stub::locationInWindow(param_1);
      objc_stub::convertPoint_fromView_(param_3,0);
      uVar9 = objc_stub::bounds(param_3);
      _CGRectContainsPoint();
      if ((uVar9 & 1) != 0) goto LAB_10005a888;
    }
  }
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if ((param_2 != 0) &&
     (*(long *)(param_2 + _TtC5Paste21FilterSuggestionsMenu::suggestionsView) != 0)) {
    puVar1 = (undefined8 *)
             (*(long *)(param_2 + _TtC5Paste21FilterSuggestionsMenu::suggestionsView) +
             _TtC5Paste21FilterSuggestionsList::onEscapePressed);
    pcVar10 = (code *)*puVar1;
    if (pcVar10 != (code *)0x0) {
      uVar11 = puVar1[1];
      FUN_100011128(pcVar10,uVar11);
      (*pcVar10)(0);
      FUN_100004550(pcVar10,uVar11);
    }
  }
LAB_10005a888:
  _swift_release(pMVar4);
  return param_1;
}



/* Address: 0x10005a8b8 | FUN_10005a8b8 */

void FUN_10005a8b8(undefined8 param_1,undefined8 param_2)

{
  Swift::MainActor::typeMetadataAccessor();
  FUN_1000582d0(FUN_10005b1b4,param_2,"Paste/FilterSuggestionsMenu.swift",0x21,2,0x80);
  return;
}



/* Address: 0x10005a918 | FUN_10005a918 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10005a918(long param_1)

{
  undefined8 *puVar1;
  MainActor *pMVar2;
  MainActor *pMVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  code *pcVar6;
  undefined8 uVar7;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  pMVar3 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  pMVar2 = pMVar3;
  FUN_1000081a8();
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/FilterSuggestionsMenu.swift",0x21,1,0x80,UVar4.unknown,pMVar2);
  }
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    if (*(long *)(param_1 + _TtC5Paste21FilterSuggestionsMenu::suggestionsView) == 0) {
      _swift_release(pMVar3);
      return;
    }
    puVar1 = (undefined8 *)
             (*(long *)(param_1 + _TtC5Paste21FilterSuggestionsMenu::suggestionsView) +
             _TtC5Paste21FilterSuggestionsList::onEscapePressed);
    pcVar6 = (code *)*puVar1;
    if (pcVar6 == (code *)0x0) {
      _swift_release(pMVar3);
      return;
    }
    uVar7 = puVar1[1];
    FUN_100011128(pcVar6,uVar7);
    (*pcVar6)(0);
    FUN_100004550(pcVar6,uVar7);
  }
  _swift_release(pMVar3);
  return;
}



/* Address: 0x10005aa48 | FUN_10005aa48 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10005aa48(long param_1)

{
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    FUN_10002fe24();
    return 0;
  }
  return 0;
}



/* Address: 0x10005aa84 | FUN_10005aa84 */

void FUN_10005aa84(void)

{
  FUN_10005aa48();
  return;
}



/* Address: 0x10005aa8c | FUN_10005aa8c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
FUN_10005aa8c(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  ID IVar1;
  ID IVar2;
  double extraout_d0;
  double dVar3;
  double dVar4;
  
  IVar1 = param_5 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (IVar1 != 0) {
    IVar1 = objc_stub::enclosingScrollView(IVar1);
    if (IVar1 != 0) {
      IVar2 = objc_stub::documentVisibleRect(IVar1);
      dVar4 = param_2;
      FUN_10002eae8();
      if (IVar2 == 0) {
        dVar4 = param_2;
        if (param_2 < 0.0) {
          dVar4 = 0.0;
        }
      }
      else {
        objc_stub::bounds(IVar2);
        dVar3 = extraout_d0;
        _CGRectGetHeight(extraout_d0,dVar4,param_3,param_4,0);
        dVar4 = 0.0;
        if (0.0 <= param_2 - dVar3) {
          dVar4 = param_2 - dVar3;
        }
      }
      IVar2 = objc_stub::documentView(IVar1);
      if (IVar2 != 0) {
        objc_stub::scrollPoint_(IVar2,0,dVar4);
      }
      IVar2 = objc_stub::contentView(IVar1);
      objc_stub::reflectScrolledClipView_(IVar1,IVar2);
    }
    return 0;
  }
  return 0;
}



/* Address: 0x10005abc8 | FUN_10005abc8 */

void FUN_10005abc8(void)

{
  FUN_10005aa8c();
  return;
}


