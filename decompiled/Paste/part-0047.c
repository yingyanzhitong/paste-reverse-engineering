/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10008d1e4 | FUN_10008d1e4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
FUN_10008d1e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  ID self;
  ID self_00;
  ID unaff_x20;
  double extraout_d0;
  double dVar2;
  undefined8 extraout_d0_00;
  undefined8 uVar3;
  
  objc_stub::focusRingMaskBounds(unaff_x20);
  dVar2 = extraout_d0;
  _CGRectGetHeight();
  bVar1 = Swift::_stdlib_isOSVersionAtLeast(0x1a,0,0);
  dVar2 = dVar2 * 0.5;
  uVar3 = 0x4018000000000000;
  if ((bVar1 & 1) == 0) {
    dVar2 = 6.0;
  }
  objc_stub::focusRingMaskBounds(unaff_x20);
  self = NSBezierPath::bezierPathWithRoundedRect_xRadius_yRadius_
                   ((ID)&_OBJC_CLASS___NSBezierPath,extraout_d0_00,uVar3,param_3,param_4,dVar2,dVar2
                   );
  self_00 = NSColor::blackColor((ID)&_OBJC_CLASS___NSColor);
  NSColor::set(self_00);
  NSBezierPath::fill(self);
  return 0;
}



/* Address: 0x10008d2c8 | _TtCC5Paste15TabBarCellLabelP33_0F41DE770CBB3D48BD1AF75457DFD7ED9TextField::drawFocusRingMask */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtCC5Paste15TabBarCellLabelP33_0F41DE770CBB3D48BD1AF75457DFD7ED9TextField::drawFocusRingMask
               (ID param_1,SEL param_2)

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
              ("Paste/TabBarCellLabel.swift",0x1b,1,0x75,UVar3.unknown,pMVar1);
  }
  FUN_10008d1e4(param_1);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x10008d364 | _TtCC5Paste15TabBarCellLabelP33_0F41DE770CBB3D48BD1AF75457DFD7ED9TextField::intrinsicContentSize */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

CGSize _TtCC5Paste15TabBarCellLabelP33_0F41DE770CBB3D48BD1AF75457DFD7ED9TextField::
       intrinsicContentSize(ID param_1,SEL param_2)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  class_t *pcVar5;
  double extraout_d0;
  double in_d1;
  CGSize CVar6;
  objc_super local_50;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1000081a8();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/TabBarCellLabel.swift",0x1b,1,0x7c,UVar3.unknown,pMVar1);
  }
  pcVar5 = (class_t *)0x0;
  FUN_10008d6b8();
  local_50.receiver = param_1;
  local_50.super_class = pcVar5;
  _objc_msgSendSuper2(&local_50,"intrinsicContentSize");
  objc_stub::sizeThatFits_(param_1,0x7ff0000000000000);
  _swift_release(pMVar2);
  CVar6.field0_0x0 = (double)(long)extraout_d0;
  CVar6.field1_0x8 = in_d1;
  return CVar6;
}



/* Address: 0x10008d44c | _TtCC5Paste15TabBarCellLabelP33_0F41DE770CBB3D48BD1AF75457DFD7ED9TextField::textDidChange: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtCC5Paste15TabBarCellLabelP33_0F41DE770CBB3D48BD1AF75457DFD7ED9TextField::textDidChange_
               (ID param_1,SEL param_2,ID param_3)

{
  char *pcVar1;
  MainActor *pMVar2;
  MainActor *pMVar3;
  UnownedSerialExecutor UVar4;
  NSNotification *pNVar5;
  class_t *pcVar6;
  NSString *pNVar7;
  char *pcVar8;
  void *pvVar9;
  long extraout_x8;
  long lVar10;
  String SVar11;
  Notification NVar12;
  Notification NVar13;
  objc_super local_60;
  
  NVar12 = Foundation::Notification::typeMetadataAccessor();
  pvVar9 = NVar12.syncInProgress.bridgeObject;
  pcVar8 = NVar12.syncInProgress.str;
  pcVar1 = NVar12.pastePaused.str;
  lVar10 = *(long *)(pcVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(undefined8 *)(lVar10 + 0x40),pcVar1,NVar12.pastePaused.bridgeObject);
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  pMVar3 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  pMVar2 = pMVar3;
  FUN_1000081a8();
  UVar4 = Swift::Actor::get_unownedExecutor();
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    pMVar2 = (MainActor *)0x1b;
    pcVar8 = &DAT_00000001;
    pvVar9 = (void *)0x83;
    _swift_task_reportUnexpectedExecutor("Paste/TabBarCellLabel.swift");
  }
  NVar12.pastePaused.bridgeObject = pMVar2;
  NVar12.pastePaused.str = (char *)param_3;
  NVar12.syncInProgress.bridgeObject = pvVar9;
  NVar12.syncInProgress.str = pcVar8;
  NVar12 = Foundation::Notification::__unconditionallyBridgeFromObjectiveC(NVar12);
  NVar13.pastePaused.bridgeObject = NVar12.pastePaused.bridgeObject;
  NVar13.pastePaused.str = (char *)param_1;
  NVar13.syncInProgress = NVar12.syncInProgress;
  pNVar5 = Foundation::Notification::_bridgeToObjectiveC(NVar13);
  pcVar6 = (class_t *)0x0;
  FUN_10008d6b8();
  local_60.receiver = param_1;
  local_60.super_class = pcVar6;
  _objc_msgSendSuper2(&local_60,"textDidChange:",pNVar5);
  pNVar7 = (NSString *)objc_stub::stringValue(param_1);
  if (pNVar7 == (NSString *)0x0) {
    SVar11 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    pNVar7 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(SVar11.bridgeObject);
  }
  objc_stub::setStringValue_(param_1,pNVar7);
  objc_stub::invalidateIntrinsicContentSize(param_1);
  (**(code **)(lVar10 + 8))((long)&local_60 - (extraout_x8 + 0xfU & 0xfffffffffffffff0),pcVar1);
  _swift_release(pMVar3);
  return;
}



/* Address: 0x10008d5d8 | _TtCC5Paste15TabBarCellLabelP33_0F41DE770CBB3D48BD1AF75457DFD7ED9TextField::initWithFrame: */

/* Function Stack Size: 0x30 bytes */

ID _TtCC5Paste15TabBarCellLabelP33_0F41DE770CBB3D48BD1AF75457DFD7ED9TextField::initWithFrame_
             (ID param_1,SEL param_2,CGRect param_3)

{
  FUN_10008d5ec(param_1,param_2,0x5d,"Paste.TextField",0xf,param_3.field1_0x10.field1_0x8);
  return param_1;
}



/* Address: 0x10008d5ec | FUN_10008d5ec */

void FUN_10008d5ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  FUN_1000081a8();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/TabBarCellLabel.swift",0x1b,1,param_3,UVar3.unknown,pMVar2);
  }
  __swift_stdlib_reportUnimplementedInitializer(param_4,param_5,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10008d684);
  (*pcVar1)();
}



/* Address: 0x10008d684 | FUN_10008d684 */

void FUN_10008d684(void)

{
  FUN_10008d6b8();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"dealloc");
  return;
}



/* Address: 0x10008d6b8 | FUN_10008d6b8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10008d6b8(void)

{
  return ZEXT816(0x100f922a0);
}



/* Address: 0x10008d6d8 | FUN_10008d6d8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_10008d6d8(void)

{
  undefined *puVar1;
  
  if (DAT_100fa6c38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &_OBJC_CLASS___NSFont;
  _swift_getObjCClassMetadata();
  DAT_100fa6c38 = puVar1;
  return;
}



/* Address: 0x10008d71c | FUN_10008d71c */

void FUN_10008d71c(void)

{
  long unaff_x20;
  
  FUN_10008c5d0(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x10008d724 | FUN_10008d724 */

void FUN_10008d724(undefined8 *param_1,undefined8 param_2)

{
  FUN_1002fd468();
  *param_1 = param_2;
  return;
}



/* Address: 0x10008d748 | thunk_FUN_10019b694 */

void thunk_FUN_10019b694(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fb3cc8;
  FUN_1000037f0(&DAT_100fb3cc8,&DAT_100c31d10);
  FUN_1000d80e0(param_1,"PasteTelemetry/DI+PasteTelemetry.swift",0x26,2,0xd,0x13,FUN_10019b6f0,0,
                puVar1);
  return;
}



/* Address: 0x10008d74c | FUN_10008d74c */

void FUN_10008d74c(undefined8 *param_1,undefined8 param_2)

{
  FUN_1002fd3ac();
  *param_1 = param_2;
  return;
}



/* Address: 0x10008d770 | FUN_10008d770 */

void FUN_10008d770(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1000ae3cc(0);
  FUN_1000d80e0(param_1,"Paste/DI+App.swift",0x12,2,0x4a,0x13,FUN_10000963c,0,uVar1);
  return;
}



/* Address: 0x10008d7c0 | thunk_FUN_1002fd448 */

void thunk_FUN_1002fd448(void)

{
  FUN_1002fd448();
  return;
}



/* Address: 0x10008d7c4 | thunk_FUN_1001965a8 */

void thunk_FUN_1001965a8(void)

{
  FUN_1001965a8();
  return;
}



/* Address: 0x10008d7c8 | FUN_10008d7c8 */

undefined8 FUN_10008d7c8(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_b8 [24];
  undefined8 local_a0 [4];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  puVar1 = (undefined8 *)(unaff_x20 + _TtC5Paste11AppDelegate::_lastLaunchedVersion);
  _swift_beginAccess(puVar1,auStack_b8,0,0);
  uVar5 = puVar1[1];
  uVar3 = *puVar1;
  uStack_68 = puVar1[3];
  uVar6 = puVar1[2];
  uStack_58 = puVar1[5];
  uVar4 = puVar1[4];
  uVar2 = puVar1[6];
  local_80 = uVar3;
  uStack_78 = uVar5;
  local_70 = uVar6;
  local_60 = uVar4;
  local_50 = uVar2;
  _swift_retain(uVar3);
  _swift_retain(uVar5);
  _swift_retain(uVar6);
  _swift_retain(uVar4);
  _swift_retain(uVar2);
  FUN_1000037f0(&DAT_100faa8b0,&DAT_100c28168);
  FUN_1002ca7e0(local_a0);
  _swift_release(uVar2);
  _swift_release(uVar4);
  _swift_release(uVar6);
  _swift_release(uVar5);
  _swift_release(uVar3);
  return local_a0[0];
}



/* Address: 0x10008d8b8 | FUN_10008d8b8 */

void FUN_10008d8b8(undefined8 *param_1,undefined8 param_2)

{
  FUN_10046e5d8();
  *param_1 = param_2;
  return;
}



/* Address: 0x10008d8dc | FUN_10008d8dc */

void FUN_10008d8dc(undefined8 *param_1,undefined8 param_2)

{
  FUN_100af264c();
  *param_1 = param_2;
  return;
}



/* Address: 0x10008d900 | FUN_10008d900 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10008d900(void)

{
  bool bVar1;
  undefined *puVar2;
  ID IVar3;
  TaskPriority TVar4;
  MainActor *pMVar5;
  undefined8 *puVar6;
  long extraout_x8;
  MainActor *unaff_x20;
  
  puVar2 = &DAT_100faa890;
  FUN_1000037f0(&DAT_100faa890,&DAT_100c22f68);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  IVar3 = NSAppleEventManager::sharedAppleEventManager((ID)&_OBJC_CLASS___NSAppleEventManager);
  IVar3 = NSAppleEventManager::currentAppleEvent(IVar3);
  if ((IVar3 == 0) ||
     (IVar3 = NSAppleEventManager::paramDescriptorForKeyword_(IVar3,0x70726474), IVar3 == 0)) {
    bVar1 = false;
  }
  else {
    IVar3 = NSAppleEventManager::enumCodeValue(IVar3);
    bVar1 = (int)IVar3 == 0x6c676974;
  }
  TVar4 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar4.unknown + -8) + 0x38))
            (&stack0xffffffffffffffc0 + -extraout_x8,1,1,TVar4.unknown);
  pMVar5 = Swift::MainActor::typeMetadataAccessor();
  puVar2 = PTR_typeMetadataAccessor_100eaec10;
  pMVar5 = Swift::MainActor::get_shared(pMVar5,unaff_x20);
  puVar6 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar2,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  puVar2 = &DAT_100eb3628;
  _swift_allocObject(&DAT_100eb3628,0x30,7);
  *(MainActor **)(puVar2 + 0x10) = pMVar5;
  *(undefined8 **)(puVar2 + 0x18) = puVar6;
  puVar2[0x20] = bVar1;
  *(MainActor **)(puVar2 + 0x28) = unaff_x20;
  FUN_1000645b0(0,0,&stack0xffffffffffffffc0 + -extraout_x8,&DAT_100c28150,puVar2);
  _swift_release();
  return;
}



/* Address: 0x10008daa8 | FUN_10008daa8 */

void FUN_10008daa8(void)

{
  undefined *puVar1;
  ContinuousClock CVar2;
  ulong uVar3;
  MainActor *pMVar4;
  undefined8 *puVar5;
  UnownedSerialExecutor UVar6;
  undefined1 in_w3;
  undefined8 in_x4;
  long lVar7;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = in_x4;
  *(undefined1 *)(unaff_x22 + 0x88) = in_w3;
  CVar2 = Swift::ContinuousClock::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x48) = CVar2.unknown;
  lVar7 = *(long *)(CVar2.unknown + -8);
  *(long *)(unaff_x22 + 0x50) = lVar7;
  uVar3 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x58) = uVar3;
  pMVar4 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar4 = Swift::MainActor::get_shared(pMVar4,pMVar4);
  *(MainActor **)(unaff_x22 + 0x60) = pMVar4;
  puVar5 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar6 = Swift::Actor::get_unownedExecutor();
  *(undefined **)(unaff_x22 + 0x68) = UVar6.unknown;
  *(undefined8 **)(unaff_x22 + 0x70) = puVar5;
  _swift_task_switch(FUN_10008db64,UVar6.unknown,puVar5);
  return;
}



/* Address: 0x10008db64 | FUN_10008db64 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10008db64(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  NSError *pNVar4;
  ID IVar5;
  long *plVar6;
  long unaff_x22;
  
  if (*(char *)(unaff_x22 + 0x88) == '\x01') {
    (extension_Swift)::Swift::Clock::_get_continuous();
    plVar6 = (long *)0x80;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x78) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_10008dd58;
    FUN_100091764(5000000000000000000,0,0,0,1);
    return;
  }
  FUN_10008e1dc();
  FUN_1000da768(unaff_x22 + 0x10);
  lVar3 = *(long *)(unaff_x22 + 0x28);
  lVar1 = *(long *)(unaff_x22 + 0x30);
  FUN_100004640(unaff_x22 + 0x10,lVar3);
  (**(code **)(lVar1 + 8))(lVar3,lVar1);
  if (lVar3 != 0) {
    _swift_release(*(undefined8 *)(unaff_x22 + 0x60));
    FUN_100004594(unaff_x22 + 0x10);
    if (*(ID *)PTR__NSApp_100ea8fa0 != 0) {
      objc_stub::activateIgnoringOtherApps_(*(ID *)PTR__NSApp_100ea8fa0,1);
      _swift_errorRetain(lVar3);
      pNVar4 = Foundation::__convertErrorToNSError();
      IVar5 = NSAlert::alertWithError_((ID)&_OBJC_CLASS___NSAlert,pNVar4);
      _swift_errorRelease(lVar3);
      NSAlert::runModal(IVar5);
      IVar5 = NSApplication::sharedApplication((ID)&_OBJC_CLASS___NSApplication);
      NSApplication::terminate_(IVar5,0);
      _swift_errorRelease(lVar3);
      _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010008dd10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10008dd58);
    (*pcVar2)();
  }
  FUN_100004594(unaff_x22 + 0x10);
  plVar6 = (long *)0x2e0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x80) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_10008e0c0;
  FUN_10008e390();
  return;
}



/* Address: 0x10008dd58 | FUN_10008dd58 */

void FUN_10008dd58(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0x78));
  if (unaff_x20 == 0) {
    (**(code **)(*(long *)(lVar4 + 0x50) + 8))
              (*(undefined8 *)(lVar4 + 0x58),*(undefined8 *)(lVar4 + 0x48));
    uVar2 = *(undefined8 *)(lVar4 + 0x68);
    uVar3 = *(undefined8 *)(lVar4 + 0x70);
    pcVar1 = FUN_10008ddc8;
  }
  else {
    _swift_errorRelease();
    uVar2 = *(undefined8 *)(lVar4 + 0x68);
    uVar3 = *(undefined8 *)(lVar4 + 0x70);
    pcVar1 = FUN_10008df3c;
  }
  _swift_task_switch(pcVar1,uVar2,uVar3);
  return;
}



/* Address: 0x10008ddc8 | FUN_10008ddc8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10008ddc8(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  NSError *pNVar4;
  ID IVar5;
  long *plVar6;
  long unaff_x22;
  
  FUN_10008e1dc();
  FUN_1000da768(unaff_x22 + 0x10);
  lVar3 = *(long *)(unaff_x22 + 0x28);
  lVar1 = *(long *)(unaff_x22 + 0x30);
  FUN_100004640(unaff_x22 + 0x10,lVar3);
  (**(code **)(lVar1 + 8))(lVar3,lVar1);
  if (lVar3 == 0) {
    FUN_100004594(unaff_x22 + 0x10);
    plVar6 = (long *)0x2e0;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x80) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_10008e0c0;
    FUN_10008e390();
    return;
  }
  _swift_release(*(undefined8 *)(unaff_x22 + 0x60));
  FUN_100004594(unaff_x22 + 0x10);
  if (*(ID *)PTR__NSApp_100ea8fa0 != 0) {
    objc_stub::activateIgnoringOtherApps_(*(ID *)PTR__NSApp_100ea8fa0,1);
    _swift_errorRetain(lVar3);
    pNVar4 = Foundation::__convertErrorToNSError();
    IVar5 = NSAlert::alertWithError_((ID)&_OBJC_CLASS___NSAlert,pNVar4);
    _swift_errorRelease(lVar3);
    NSAlert::runModal(IVar5);
    IVar5 = NSApplication::sharedApplication((ID)&_OBJC_CLASS___NSApplication);
    NSApplication::terminate_(IVar5,0);
    _swift_errorRelease(lVar3);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010008def4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10008df3c);
  (*pcVar2)();
}



/* Address: 0x10008df3c | FUN_10008df3c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10008df3c(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  NSError *pNVar4;
  ID IVar5;
  long *plVar6;
  long unaff_x22;
  
  (**(code **)(*(long *)(unaff_x22 + 0x50) + 8))
            (*(undefined8 *)(unaff_x22 + 0x58),*(undefined8 *)(unaff_x22 + 0x48));
  FUN_10008e1dc();
  FUN_1000da768(unaff_x22 + 0x10);
  lVar3 = *(long *)(unaff_x22 + 0x28);
  lVar1 = *(long *)(unaff_x22 + 0x30);
  FUN_100004640(unaff_x22 + 0x10,lVar3);
  (**(code **)(lVar1 + 8))(lVar3,lVar1);
  if (lVar3 == 0) {
    FUN_100004594(unaff_x22 + 0x10);
    plVar6 = (long *)0x2e0;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x80) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_10008e0c0;
    FUN_10008e390();
    return;
  }
  _swift_release(*(undefined8 *)(unaff_x22 + 0x60));
  FUN_100004594(unaff_x22 + 0x10);
  if (*(ID *)PTR__NSApp_100ea8fa0 != 0) {
    objc_stub::activateIgnoringOtherApps_(*(ID *)PTR__NSApp_100ea8fa0,1);
    _swift_errorRetain(lVar3);
    pNVar4 = Foundation::__convertErrorToNSError();
    IVar5 = NSAlert::alertWithError_((ID)&_OBJC_CLASS___NSAlert,pNVar4);
    _swift_errorRelease(lVar3);
    NSAlert::runModal(IVar5);
    IVar5 = NSApplication::sharedApplication((ID)&_OBJC_CLASS___NSApplication);
    NSApplication::terminate_(IVar5,0);
    _swift_errorRelease(lVar3);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010008e078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10008e0c0);
  (*pcVar2)();
}



/* Address: 0x10008e0c0 | FUN_10008e0c0 */

void FUN_10008e0c0(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x80));
  _swift_task_switch(FUN_10008e104,*(undefined8 *)(lVar1 + 0x68),*(undefined8 *)(lVar1 + 0x70));
  return;
}



/* Address: 0x10008e104 | FUN_10008e104 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_10008e104(void)

{
  ID IVar1;
  NSString *pNVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  IVar1 = *(ID *)(unaff_x22 + 0x60);
  lVar3 = *(long *)(unaff_x22 + 0x40);
  _swift_release();
  *(undefined1 *)(lVar3 + _TtC5Paste11AppDelegate::isInitialized) = 1;
  FUN_1000b07f0();
  FUN_1000da768(unaff_x22 + 0x38);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x38);
  FUN_1000ae2bc();
  if (IVar1 != 0) {
    pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    objc_stub::setBool_forKey_(IVar1,1,pNVar2);
  }
  _swift_release(uVar4);
  IVar1 = NSApplication::sharedApplication((ID)&_OBJC_CLASS___NSApplication);
  NSApplication::registerForRemoteNotifications(IVar1);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010008e1d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10008e1dc | FUN_10008e1dc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_10008e1dc(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_d0 [24];
  undefined8 local_b8;
  long lStack_b0;
  
  FUN_1002cd5ac();
  _swift_beginAccess();
  FUN_1002cda88(*param_1);
  IVar3 = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
  FUN_100afdaa8(IVar3);
  FUN_10004eebc(0);
  FUN_10009b1f0();
  FUN_10009d0b8();
  FUN_1000919e8();
  puVar4 = &DAT_100c281d8;
  _swift_getKeyPath(&DAT_100c281d8);
  puVar5 = &DAT_100faa8d8;
  FUN_1000037f0(&DAT_100faa8d8,&DAT_100c28208);
  _swift_initStackObject();
  FUN_1000da6e0(puVar4,puVar5);
  FUN_1000da768(auStack_d0);
  lVar2 = lStack_b0;
  uVar1 = local_b8;
  FUN_100004640(auStack_d0,local_b8);
  (**(code **)(lVar2 + 0x18))(uVar1,lVar2);
  _swift_release(puVar4);
  FUN_100004594(auStack_d0);
  FUN_100035cb0();
  FUN_10007d0e0();
  FUN_100090734();
  FUN_1000da768(auStack_d0);
  FUN_100004640(auStack_d0,local_b8);
  puVar4 = &DAT_100eb36a0;
  _swift_allocObject(&DAT_100eb36a0,0x18,7);
  _swift_unknownObjectWeakInit(puVar4 + 0x10);
  _swift_retain(puVar4);
  FUN_1000d4db8(FUN_10009249c,puVar4,local_b8,lStack_b0);
  _swift_release_n(puVar4,2);
  FUN_100004594(auStack_d0);
  return;
}



/* Address: 0x10008e390 | FUN_10008e390 */

void FUN_10008e390(void)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x2b0) = unaff_x20;
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  *(MainActor **)(unaff_x22 + 0x2b8) = pMVar2;
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  *(undefined **)(unaff_x22 + 0x2c0) = UVar4.unknown;
  *(undefined8 **)(unaff_x22 + 0x2c8) = puVar3;
  _swift_task_switch(FUN_10008e424,UVar4.unknown,puVar3);
  return;
}



/* Address: 0x10008e424 | FUN_10008e424 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10008e424(void)

{
  bool bVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  ID IVar5;
  undefined *puVar6;
  ulong uVar7;
  long *plVar8;
  long extraout_x1;
  long extraout_x1_00;
  undefined8 *puVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  long unaff_x22;
  undefined8 *puVar15;
  ID IVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  code *pcVar21;
  undefined8 *puVar22;
  undefined8 uVar23;
  
  lVar13 = *(long *)(unaff_x22 + 0x2b0);
  IVar5 = NSAppleEventManager::sharedAppleEventManager((ID)&_OBJC_CLASS___NSAppleEventManager);
  NSAppleEventManager::setEventHandler_andSelector_forEventClass_andEventID_
            (IVar5,lVar13,"handleEvent:with:",0x4755524c,0x4755524c);
  puVar22 = (undefined8 *)(lVar13 + _TtC5Paste11AppDelegate::_lastLaunchedVersion);
  puVar9 = (undefined8 *)0x0;
  uVar10 = 0;
  _swift_beginAccess(puVar22,unaff_x22 + 0x278);
  uVar11 = puVar22[6];
  uVar19 = puVar22[3];
  uVar17 = puVar22[2];
  uVar12 = puVar22[5];
  uVar14 = puVar22[4];
  uVar23 = *puVar22;
  *(undefined8 *)(unaff_x22 + 0x70) = puVar22[1];
  *(undefined8 *)(unaff_x22 + 0x68) = uVar23;
  *(undefined8 *)(unaff_x22 + 0x80) = uVar19;
  *(undefined8 *)(unaff_x22 + 0x78) = uVar17;
  *(undefined8 *)(unaff_x22 + 0x90) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x88) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x98) = uVar11;
  uVar14 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x88);
  _swift_retain(uVar14);
  _swift_retain(uVar12);
  _swift_retain(uVar17);
  _swift_retain(uVar19);
  _swift_retain(uVar11);
  puVar6 = &DAT_100faa8b0;
  FUN_1000037f0(&DAT_100faa8b0,&DAT_100c28168);
  FUN_1002ca7e0(unaff_x22 + 0x218);
  _swift_release(uVar14);
  _swift_release(uVar12);
  _swift_release(uVar17);
  _swift_release(uVar19);
  _swift_release(uVar11);
  cVar2 = *(char *)(unaff_x22 + 0x230);
  if (cVar2 == '\x01') {
    puVar22 = (undefined8 *)(unaff_x22 + 0x1f0);
    FUN_1000da768(puVar22);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x208);
    lVar18 = *(long *)(unaff_x22 + 0x210);
    puVar9 = puVar22;
    FUN_100004640(puVar22,uVar12);
    FUN_1001931ec();
    uVar14 = *puVar9;
    lVar13 = puVar9[1];
    puVar15 = (undefined8 *)puVar9[2];
    pcVar21 = *(code **)(lVar18 + 0x18);
    _swift_bridgeObjectRetain(lVar13);
    _swift_bridgeObjectRetain(puVar15);
    puVar9 = puVar15;
    (*pcVar21)(uVar14,lVar13,puVar15,uVar12,lVar18);
    bVar1 = false;
  }
  else {
    lVar18 = *(long *)(unaff_x22 + 0x218);
    lVar20 = *(long *)(unaff_x22 + 0x220);
    IVar5 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle);
    lVar13 = extraout_x1;
    FUN_1000f50ac();
    if ((uVar10 & 0xff) == 1) {
                    /* WARNING: Does not return */
      pcVar21 = (code *)SoftwareBreakpoint(1,0x10008ea9c);
      (*pcVar21)();
    }
    bVar1 = lVar18 <= (long)IVar5 && lVar20 < lVar13;
    uVar12 = puVar22[1];
    uVar14 = *puVar22;
    uVar17 = puVar22[3];
    uVar11 = puVar22[2];
    uVar23 = puVar22[5];
    uVar19 = puVar22[4];
    *(undefined8 *)(unaff_x22 + 0xd0) = puVar22[6];
    *(undefined8 *)(unaff_x22 + 0xb8) = uVar17;
    *(undefined8 *)(unaff_x22 + 0xb0) = uVar11;
    *(undefined8 *)(unaff_x22 + 200) = uVar23;
    *(undefined8 *)(unaff_x22 + 0xc0) = uVar19;
    *(undefined8 *)(unaff_x22 + 0xa8) = uVar12;
    *(undefined8 *)(unaff_x22 + 0xa0) = uVar14;
    uVar14 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar12 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar11 = *(undefined8 *)(unaff_x22 + 0xb0);
    uVar17 = *(undefined8 *)(unaff_x22 + 0xc0);
    puVar22 = *(undefined8 **)(unaff_x22 + 0xd0);
    _swift_retain(uVar14);
    _swift_retain(uVar12);
    _swift_retain(uVar11);
    _swift_retain(uVar17);
    _swift_retain(puVar22);
    FUN_1002ca7e0(unaff_x22 + 0x238,puVar6);
    _swift_release(uVar14);
    _swift_release(uVar12);
    _swift_release(uVar11);
    _swift_release(uVar17);
    _swift_release();
    if (*(char *)(unaff_x22 + 0x250) == '\x01') goto LAB_10008e7c0;
    IVar16 = *(ID *)(unaff_x22 + 0x238);
    lVar18 = *(long *)(unaff_x22 + 0x240);
    puVar15 = *(undefined8 **)(unaff_x22 + 0x248);
    IVar5 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle);
    lVar13 = extraout_x1_00;
    FUN_1000f50ac();
    puVar22 = (undefined8 *)0x0;
    if ((uVar10 & 0xff) == 1) {
                    /* WARNING: Does not return */
      pcVar21 = (code *)SoftwareBreakpoint(1,0x10008eaa0);
      (*pcVar21)();
    }
    bVar3 = SBORROW8(IVar16,IVar5);
    bVar4 = (long)(IVar16 - IVar5) < 0;
    if (IVar16 == IVar5) {
      bVar3 = SBORROW8(lVar18,lVar13);
      bVar4 = lVar18 - lVar13 < 0;
      if (lVar18 == lVar13) {
        bVar3 = SBORROW8((long)puVar15,(long)puVar9);
        bVar4 = (long)puVar15 - (long)puVar9 < 0;
      }
    }
    if (bVar4 == bVar3) goto LAB_10008e7c0;
    puVar22 = (undefined8 *)(unaff_x22 + 0x1c8);
    FUN_1000da768(puVar22);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x1e0);
    lVar20 = *(long *)(unaff_x22 + 0x1e8);
    FUN_100004640(puVar22,uVar14);
    FUN_1000f4a7c(IVar16,lVar18,puVar15);
    lVar13 = lVar18;
    FUN_10019336c();
    _swift_bridgeObjectRelease(lVar18);
    puVar9 = puVar15;
    (**(code **)(lVar20 + 0x18))(IVar16,lVar13,puVar15,uVar14,lVar20);
  }
  _swift_bridgeObjectRelease(lVar13);
  _swift_bridgeObjectRelease(puVar15);
  FUN_100004594();
LAB_10008e7c0:
  FUN_1000da768(unaff_x22 + 0x290);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x290);
  FUN_1000ae064();
  _swift_release(uVar14);
  if (((ulong)puVar22 & 1) == 0) {
    lVar13 = unaff_x22 + 0xd8;
    FUN_1000da768(lVar13);
    uVar14 = *(undefined8 *)(unaff_x22 + 0xf0);
    lVar18 = *(long *)(unaff_x22 + 0xf8);
    FUN_100004640(lVar13,uVar14);
    FUN_1000da768(unaff_x22 + 0x100);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x118);
    lVar20 = *(long *)(unaff_x22 + 0x120);
    FUN_100004640(unaff_x22 + 0x100,uVar12);
    (**(code **)(lVar20 + 8))(uVar12,lVar20);
    uVar7 = (ulong)((uint)uVar12 & 1);
    FUN_1001932a0(uVar7);
    FUN_100004594(unaff_x22 + 0x100);
    (**(code **)(lVar18 + 0x18))(uVar7,lVar20,puVar9,uVar14,lVar18);
    _swift_bridgeObjectRelease(lVar20);
  }
  else {
    lVar13 = unaff_x22 + 0x178;
    FUN_1000da768(lVar13);
    uVar14 = *(undefined8 *)(unaff_x22 + 400);
    lVar18 = *(long *)(unaff_x22 + 0x198);
    FUN_100004640(lVar13,uVar14);
    FUN_1000da768(unaff_x22 + 0x1a0);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x1b8);
    lVar20 = *(long *)(unaff_x22 + 0x1c0);
    FUN_100004640(unaff_x22 + 0x1a0,uVar12);
    (**(code **)(lVar20 + 8))(uVar12,lVar20);
    puVar22 = (undefined8 *)&DAT_100faa8b8;
    FUN_1000037f0(&DAT_100faa8b8,&DAT_100c281b8);
    _swift_initStackObject();
    puVar22[3] = 2;
    puVar22[2] = 1;
    puVar9 = puVar22;
    FUN_10019497c();
    uVar11 = puVar9[1];
    puVar22[4] = *puVar9;
    puVar22[5] = uVar11;
    puVar22[9] = PTR___type_metadata_for_Swift_Bool_100eac570;
    puVar22[10] = &PTR_PTR_100ebcc70;
    *(byte *)(puVar22 + 6) = (byte)uVar12 & 1;
    _swift_bridgeObjectRetain();
    puVar9 = puVar22;
    FUN_100010850(puVar22);
    _swift_setDeallocating(puVar22);
    FUN_100005808(puVar22 + 4,&DAT_100faa8c0,&DAT_100c237f0);
    FUN_100004594(unaff_x22 + 0x1a0);
    (**(code **)(lVar18 + 0x18))(0x616c65725f707061,0xee00646568636e75,puVar9,uVar14,lVar18);
  }
  _swift_bridgeObjectRelease(puVar9);
  FUN_100004594(lVar13);
  FUN_1000da768(unaff_x22 + 0x128);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x140);
  lVar13 = *(long *)(unaff_x22 + 0x148);
  FUN_100004640(unaff_x22 + 0x128,uVar14);
  (**(code **)(lVar13 + 0x28))(FUN_100090eec,0,uVar14,lVar13);
  FUN_100004594(unaff_x22 + 0x128);
  plVar8 = (long *)0x230;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x2d0) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_10008eaa0;
  FUN_1000a3024(cVar2 == '\x01',bVar1);
  return;
}



/* Address: 0x10008eaa0 | FUN_10008eaa0 */

void FUN_10008eaa0(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x2d0));
  _swift_task_switch(FUN_10008eae8,*(undefined8 *)(lVar1 + 0x2c0),*(undefined8 *)(lVar1 + 0x2c8));
  return;
}



/* Address: 0x10008eae8 | FUN_10008eae8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x00010008ebcc) */

void FUN_10008eae8(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  long lVar1;
  code *pcVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 extraout_x1;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x2b8));
  IVar3 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle);
  uVar6 = extraout_x1;
  FUN_1000f50ac();
  if ((param_4 & 0xff) == 1) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10008ecb0);
    (*pcVar2)();
  }
  uVar7 = *(undefined8 *)(unaff_x22 + 0x2b0);
  puVar4 = &DAT_100c28170;
  _swift_getKeyPath(&DAT_100c28170);
  puVar5 = &DAT_100c28198;
  _swift_getKeyPath(&DAT_100c28198);
  *(ID *)(unaff_x22 + 600) = IVar3;
  *(undefined8 *)(unaff_x22 + 0x260) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x268) = param_3;
  *(char *)(unaff_x22 + 0x270) = (char)param_4;
  FUN_1002cb5a0(unaff_x22 + 600,uVar7,puVar4,puVar5);
  FUN_100357d14(FUN_100091150,0,PTR___type_metadata_for____100eae0c8 + 8);
  FUN_1000da768(unaff_x22 + 0x298);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x298);
  FUN_1003769b0();
  _swift_release(uVar6);
  FUN_1000da768(unaff_x22 + 0x2a0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x2a0);
  FUN_10037ad40();
  _swift_release(uVar6);
  FUN_1000da768(unaff_x22 + 0x2a8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x2a8);
  FUN_1003a4c78(0,0);
  _swift_release(uVar6);
  FUN_1000da768(unaff_x22 + 0x150);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x168);
  lVar1 = *(long *)(unaff_x22 + 0x170);
  FUN_100004640(unaff_x22 + 0x150,uVar6);
  (**(code **)(lVar1 + 0x28))(uVar6,lVar1);
  FUN_100004594(unaff_x22 + 0x150);
                    /* WARNING: Could not recover jumptable at 0x00010008eca8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10008ecb0 | _TtC5Paste11AppDelegate::applicationDidFinishLaunching: */

/* Function Stack Size: 0x18 bytes */

void _TtC5Paste11AppDelegate::applicationDidFinishLaunching_(ID param_1,SEL param_2,ID param_3)

{
  FUN_10008f34c();
  return;
}



/* Address: 0x10008ecc0 | FUN_10008ecc0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10008ecc0(void)

{
  undefined *puVar1;
  NSString *pNVar2;
  TaskPriority TVar3;
  undefined8 uVar4;
  long extraout_x8;
  undefined1 *puVar5;
  undefined1 auStack_50 [8];
  undefined8 local_48;
  
  puVar1 = &DAT_100faa890;
  FUN_1000037f0(&DAT_100faa890,&DAT_100c22f68);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = auStack_50 + -extraout_x8;
  FUN_1000da768(&local_48);
  uVar4 = local_48;
  FUN_1000ae2bc();
  if (puVar1 != (undefined *)0x0) {
    pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    objc_stub::setBool_forKey_((ID)puVar1,0,pNVar2);
  }
  _swift_release(uVar4);
  FUN_1000da768(&local_48);
  TVar3 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar3.unknown + -8) + 0x38))(puVar5,1,1,TVar3.unknown);
  puVar1 = &DAT_100eb35b0;
  _swift_allocObject(&DAT_100eb35b0,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined8 *)(puVar1 + 0x20) = local_48;
  _swift_retain(local_48);
  uVar4 = 0;
  FUN_10008f0f0(0,0,puVar5,&DAT_100c28130,puVar1);
  _swift_release(local_48);
  _swift_release(uVar4);
  FUN_100005808(puVar5,&DAT_100faa890,&DAT_100c22f68);
  return;
}



/* Address: 0x10008ee34 | FUN_10008ee34 */

void FUN_10008ee34(void)

{
  int iVar1;
  long *plVar2;
  long *in_x3;
  int *piVar3;
  long unaff_x22;
  
  piVar3 = *(int **)(*in_x3 + 0x1e8);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100008284;
                    /* WARNING: Could not recover jumptable at 0x00010008ee8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))();
  return;
}



/* Address: 0x10008ee90 | FUN_10008ee90 */

void FUN_10008ee90(char *param_1,void *param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5)

{
  __uint8 _Var1;
  undefined *puVar2;
  TaskPriority TVar3;
  undefined1 *puVar4;
  TaskPriority TVar5;
  UnownedSerialExecutor UVar6;
  ContiguousArray<__int8> CVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  long extraout_x8;
  undefined1 *puVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  String SVar14;
  undefined1 auStack_b0 [8];
  undefined8 local_a8;
  undefined8 *puStack_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined *local_80;
  long lStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined *local_60;
  long lStack_58;
  
  puVar2 = &DAT_100faa890;
  FUN_1000037f0(&DAT_100faa890,&DAT_100c22f68);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = auStack_b0 + -extraout_x8;
  FUN_1000214c4(param_3,puVar10);
  TVar3 = Swift::TaskPriority::typeMetadataAccessor();
  lVar13 = *(long *)(TVar3.unknown + -8);
  puVar4 = puVar10;
  (**(code **)(lVar13 + 0x30))(puVar10,1,TVar3.unknown);
  TVar5.unknown = param_5;
  _swift_retain();
  if ((int)puVar4 == 1) {
    FUN_100005808(puVar10,&DAT_100faa890,&DAT_100c22f68);
    uVar11 = 0x1000;
  }
  else {
    _Var1 = Swift::TaskPriority::get_rawValue(TVar5);
    (**(code **)(lVar13 + 8))(puVar10,TVar3.unknown);
    uVar11 = (ulong)_Var1 | 0x1000;
  }
  lVar13 = *(long *)(param_5 + 0x10);
  lVar12 = *(long *)(param_5 + 0x18);
  _swift_unknownObjectRetain(lVar13);
  _swift_release(param_5);
  if (lVar13 == 0) {
    UVar6.unknown = (undefined *)0x0;
    lVar12 = 0;
  }
  else {
    _swift_getObjectType(lVar13);
    UVar6 = Swift::Actor::get_unownedExecutor();
    _swift_unknownObjectRelease(lVar13);
  }
  if (param_2 == (void *)0x0) {
    puVar2 = &DAT_100eb3650;
    _swift_allocObject(&DAT_100eb3650,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_4;
    *(undefined **)(puVar2 + 0x18) = param_5;
    puVar8 = &DAT_100fa8308;
    FUN_1000037f0(&DAT_100fa8308,&DAT_100c25370);
    if (lVar12 == 0 && UVar6.unknown == (undefined *)0x0) {
      puVar9 = (undefined8 *)0x0;
    }
    else {
      local_70 = 0;
      uStack_68 = 0;
      puVar9 = &local_70;
      local_60 = UVar6.unknown;
      lStack_58 = lVar12;
    }
    _swift_task_create(uVar11,puVar9,puVar8,&DAT_100c281c0,puVar2);
  }
  else {
    SVar14.bridgeObject = param_2;
    SVar14.str = param_1;
    CVar7 = Swift::String::get_utf8CString(SVar14);
    puVar2 = &DAT_100eb3678;
    _swift_allocObject(&DAT_100eb3678,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_4;
    *(undefined **)(puVar2 + 0x18) = param_5;
    _swift_retain(param_5);
    puVar8 = &DAT_100fa8308;
    FUN_1000037f0(&DAT_100fa8308,&DAT_100c25370);
    puStack_a0 = (undefined8 *)0x0;
    if (lVar12 != 0 || UVar6.unknown != (undefined *)0x0) {
      local_90 = 0;
      uStack_88 = 0;
      puStack_a0 = &local_90;
      local_80 = UVar6.unknown;
      lStack_78 = lVar12;
    }
    local_a8 = 7;
    local_98 = CVar7.unknown + 0x20;
    _swift_task_create(uVar11,&local_a8,puVar8,&DAT_100c281c8,puVar2);
    _swift_release(param_5);
    _swift_release(CVar7.unknown);
  }
  return;
}



/* Address: 0x10008f0f0 | FUN_10008f0f0 */

void FUN_10008f0f0(char *param_1,void *param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5)

{
  __uint8 _Var1;
  undefined *puVar2;
  TaskPriority TVar3;
  undefined1 *puVar4;
  TaskPriority TVar5;
  UnownedSerialExecutor UVar6;
  ContiguousArray<__int8> CVar7;
  undefined8 *puVar8;
  long extraout_x8;
  undefined1 *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  String SVar13;
  undefined1 auStack_b0 [8];
  undefined8 local_a8;
  undefined8 *puStack_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined *local_80;
  long lStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined *local_60;
  long lStack_58;
  
  puVar2 = &DAT_100faa890;
  FUN_1000037f0(&DAT_100faa890,&DAT_100c22f68);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = auStack_b0 + -extraout_x8;
  FUN_1000214c4(param_3,puVar9);
  TVar3 = Swift::TaskPriority::typeMetadataAccessor();
  lVar12 = *(long *)(TVar3.unknown + -8);
  puVar4 = puVar9;
  (**(code **)(lVar12 + 0x30))(puVar9,1,TVar3.unknown);
  TVar5.unknown = param_5;
  _swift_retain();
  if ((int)puVar4 == 1) {
    FUN_100005808(puVar9,&DAT_100faa890,&DAT_100c22f68);
    uVar10 = 0x1000;
  }
  else {
    _Var1 = Swift::TaskPriority::get_rawValue(TVar5);
    (**(code **)(lVar12 + 8))(puVar9,TVar3.unknown);
    uVar10 = (ulong)_Var1 | 0x1000;
  }
  lVar12 = *(long *)(param_5 + 0x10);
  lVar11 = *(long *)(param_5 + 0x18);
  _swift_unknownObjectRetain(lVar12);
  _swift_release(param_5);
  if (lVar12 == 0) {
    UVar6.unknown = (undefined *)0x0;
    lVar11 = 0;
  }
  else {
    _swift_getObjectType(lVar12);
    UVar6 = Swift::Actor::get_unownedExecutor();
    _swift_unknownObjectRelease(lVar12);
  }
  if (param_2 == (void *)0x0) {
    puVar2 = &DAT_100eb35d8;
    _swift_allocObject(&DAT_100eb35d8,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_4;
    *(undefined **)(puVar2 + 0x18) = param_5;
    if (lVar11 == 0 && UVar6.unknown == (undefined *)0x0) {
      puVar8 = (undefined8 *)0x0;
    }
    else {
      local_70 = 0;
      uStack_68 = 0;
      puVar8 = &local_70;
      local_60 = UVar6.unknown;
      lStack_58 = lVar11;
    }
    _swift_task_create(uVar10,puVar8,PTR___type_metadata_for____100eae0c8 + 8,&DAT_100c28138,puVar2)
    ;
  }
  else {
    SVar13.bridgeObject = param_2;
    SVar13.str = param_1;
    CVar7 = Swift::String::get_utf8CString(SVar13);
    puVar2 = &DAT_100eb3600;
    _swift_allocObject(&DAT_100eb3600,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_4;
    *(undefined **)(puVar2 + 0x18) = param_5;
    _swift_retain(param_5);
    if (lVar11 == 0 && UVar6.unknown == (undefined *)0x0) {
      puStack_a0 = (undefined8 *)0x0;
    }
    else {
      local_90 = 0;
      uStack_88 = 0;
      puStack_a0 = &local_90;
      local_80 = UVar6.unknown;
      lStack_78 = lVar11;
    }
    local_a8 = 7;
    local_98 = CVar7.unknown + 0x20;
    _swift_task_create(uVar10,&local_a8,PTR___type_metadata_for____100eae0c8 + 8,&DAT_100c28140,
                       puVar2);
    _swift_release(param_5);
    _swift_release(CVar7.unknown);
  }
  return;
}



/* Address: 0x10008f33c | _TtC5Paste11AppDelegate::applicationWillTerminate: */

/* Function Stack Size: 0x18 bytes */

void _TtC5Paste11AppDelegate::applicationWillTerminate_(ID param_1,SEL param_2,ID param_3)

{
  FUN_10008f34c();
  return;
}



/* Address: 0x10008f34c | FUN_10008f34c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10008f34c(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4,code *param_5)

{
  undefined *puVar1;
  char *pcVar2;
  MainActor *pMVar3;
  UnownedSerialExecutor UVar4;
  undefined8 *puVar5;
  char *pcVar6;
  long extraout_x8;
  long lVar8;
  Notification NVar9;
  undefined1 auStack_70 [8];
  void *local_68;
  void *pvVar7;
  
  local_68 = param_4;
  NVar9 = Foundation::Notification::typeMetadataAccessor();
  pvVar7 = NVar9.syncInProgress.bridgeObject;
  pcVar2 = NVar9.pastePaused.str;
  lVar8 = *(long *)(pcVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(undefined8 *)(lVar8 + 0x40),pcVar2,NVar9.pastePaused.bridgeObject,
             NVar9.syncInProgress.str);
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  puVar5 = &DAT_100fa6bb0;
  pcVar6 = PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18;
  FUN_100003a00(&DAT_100fa6bb0,puVar1);
  UVar4 = Swift::Actor::get_unownedExecutor();
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    puVar5 = (undefined8 *)0x17;
    pcVar6 = &DAT_00000001;
    pvVar7 = local_68;
    _swift_task_reportUnexpectedExecutor("Paste/AppDelegate.swift");
  }
  NVar9.pastePaused.bridgeObject = puVar5;
  NVar9.pastePaused.str = param_3;
  NVar9.syncInProgress.bridgeObject = pvVar7;
  NVar9.syncInProgress.str = pcVar6;
  NVar9 = Foundation::Notification::__unconditionallyBridgeFromObjectiveC(NVar9);
  (*param_5)(param_1,NVar9.pastePaused.bridgeObject,NVar9.syncInProgress.str,
             NVar9.syncInProgress.bridgeObject);
  (**(code **)(lVar8 + 8))(auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),pcVar2);
  _swift_release(pMVar3);
  return;
}



/* Address: 0x10008f488 | _TtC5Paste11AppDelegate::applicationShouldHandleReopen:hasVisibleWindows: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x1c bytes */

bool _TtC5Paste11AppDelegate::applicationShouldHandleReopen_hasVisibleWindows_
               (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  undefined *puVar1;
  URL UVar2;
  MainActor *pMVar3;
  undefined8 *puVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  long extraout_x8;
  undefined1 *puVar7;
  long lVar8;
  
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar8 = *(long *)(UVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar8 + 0x40));
  puVar7 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  puVar4 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar5 = Swift::Actor::get_unownedExecutor();
  UVar6 = UVar5;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar6.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor("Paste/AppDelegate.swift",0x17,1,99,UVar5.unknown,puVar4);
  }
  if (*(char *)(param_1 + isInitialized) == '\x01') {
    FUN_1001ac7f0(param_1);
    (**(code **)(lVar8 + 0x10))(puVar7,param_1,UVar2.unknown);
    FUN_1000a1cb0(puVar7);
    (**(code **)(lVar8 + 8))(puVar7,UVar2.unknown);
    _swift_release(pMVar3);
  }
  else {
    _swift_release(pMVar3);
  }
  return 0;
}



/* Address: 0x10008f5ec | FUN_10008f5ec */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10008f5ec(undefined8 *param_1,undefined8 param_2,ID param_3)

{
  char *pcVar1;
  String SVar2;
  undefined1 auStack_78 [24];
  undefined8 local_60;
  long lStack_58;
  
  FUN_1003595f8(auStack_78);
  FUN_100004640(auStack_78,local_60);
  objc_stub::recordName(param_3);
  SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pcVar1 = SVar2.str;
  (**(code **)(lStack_58 + 0x20))(pcVar1,SVar2.bridgeObject,local_60,lStack_58);
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  *param_1 = pcVar1;
  FUN_100004594(auStack_78);
  return;
}



/* Address: 0x10008f6a4 | FUN_10008f6a4 */

void FUN_10008f6a4(void)

{
  undefined *puVar1;
  URL UVar2;
  ulong uVar3;
  MainActor *pMVar4;
  undefined8 *puVar5;
  UnownedSerialExecutor UVar6;
  undefined8 in_x3;
  undefined8 in_x4;
  long lVar7;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = in_x3;
  *(undefined8 *)(unaff_x22 + 0x20) = in_x4;
  UVar2 = Foundation::URL::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x28) = UVar2.unknown;
  lVar7 = *(long *)(UVar2.unknown + -8);
  *(long *)(unaff_x22 + 0x30) = lVar7;
  uVar3 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x38) = uVar3;
  pMVar4 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar4 = Swift::MainActor::get_shared(pMVar4,pMVar4);
  *(MainActor **)(unaff_x22 + 0x40) = pMVar4;
  puVar5 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  *(undefined8 **)(unaff_x22 + 0x48) = puVar5;
  UVar6 = Swift::Actor::get_unownedExecutor();
  _swift_task_switch(FUN_10008f760,UVar6.unknown,puVar5);
  return;
}



/* Address: 0x10008f760 | FUN_10008f760 */

void FUN_10008f760(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
  FUN_1000da768(unaff_x22 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0x10);
  plVar3 = (long *)0x150;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x58) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_10008f7e0;
  FUN_1003ad944(uVar1,uVar2,*(undefined8 *)(unaff_x22 + 0x20));
  return;
}



/* Address: 0x10008f7e0 | FUN_10008f7e0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10008f7e0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  NSError *pNVar3;
  ID self;
  long unaff_x20;
  long *unaff_x22;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar6 + 0x50);
  uVar5 = *(undefined8 *)(lVar6 + 0x40);
  lVar4 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar6 + 0x58));
  _swift_release(uVar5);
  _swift_release(uVar1);
  if (unaff_x20 == 0) {
    if (param_2 != 0) {
      lVar2 = *(long *)(lVar6 + 0x30);
      uVar1 = *(undefined8 *)(lVar6 + 0x38);
      uVar5 = *(undefined8 *)(lVar6 + 0x28);
      FUN_1001ac4c4(uVar1,param_1,param_2);
      _swift_bridgeObjectRelease(param_2);
      FUN_1000a1cb0(uVar1);
      (**(code **)(lVar2 + 8))(uVar1,uVar5);
    }
  }
  else {
    _swift_errorRetain();
    pNVar3 = Foundation::__convertErrorToNSError();
    self = NSAlert::alertWithError_((ID)&_OBJC_CLASS___NSAlert,pNVar3);
    _swift_errorRelease();
    NSAlert::runModal(self);
    _swift_errorRelease();
  }
  _swift_task_dealloc(*(undefined8 *)(lVar6 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010008f904. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))();
  return;
}



/* Address: 0x10008f908 | _TtC5Paste11AppDelegate::application:userDidAcceptCloudKitShareWithMetadata: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void _TtC5Paste11AppDelegate::application_userDidAcceptCloudKitShareWithMetadata_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

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
    _swift_task_reportUnexpectedExecutor("Paste/AppDelegate.swift",0x17,1,0x6b,UVar4.unknown,puVar3)
    ;
  }
  FUN_100091f3c(param_4);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x10008fa04 | _TtC5Paste11AppDelegate::application:didReceiveRemoteNotification: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void _TtC5Paste11AppDelegate::application_didReceiveRemoteNotification_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  undefined1 *puVar6;
  undefined1 auStack_68 [24];
  undefined8 local_50;
  undefined8 uStack_48;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor("Paste/AppDelegate.swift",0x17,1,0x7d,UVar4.unknown,puVar3)
    ;
  }
  FUN_1000d468c(auStack_68,param_1);
  puVar6 = auStack_68;
  FUN_100004640(puVar6,local_50);
  FUN_1000d4db8(0xd00000000000001c,0x8000000100d8f130,local_50,uStack_48,puVar6);
  FUN_100004594(auStack_68);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x10008fb24 | _TtC5Paste11AppDelegate::application:didFailToRegisterForRemoteNotificationsWithError: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void _TtC5Paste11AppDelegate::application_didFailToRegisterForRemoteNotificationsWithError_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

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
    _swift_task_reportUnexpectedExecutor("Paste/AppDelegate.swift",0x17,1,0x81,UVar4.unknown,puVar3)
    ;
  }
  FUN_100092178(param_4);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x10008fc20 | _TtC5Paste11AppDelegate::application:didRegisterForRemoteNotificationsWithDeviceToken: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void _TtC5Paste11AppDelegate::application_didRegisterForRemoteNotificationsWithDeviceToken_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  Data DVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_68 [24];
  undefined8 local_50;
  undefined8 uStack_48;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  puVar8 = puVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    puVar8 = (undefined8 *)0x17;
    _swift_task_reportUnexpectedExecutor("Paste/AppDelegate.swift",0x17,1,0x85,UVar4.unknown,puVar3)
    ;
  }
  DVar6 = Foundation::Data::__unconditionallyBridgeFromObjectiveC((Data)param_4);
  FUN_1000d468c(auStack_68,0);
  puVar7 = auStack_68;
  FUN_100004640(puVar7,local_50);
  FUN_1000d4db8(0xd000000000000031,0x8000000100d8f0b0,local_50,uStack_48,puVar7);
  FUN_10003bf2c(DVar6.unknown,puVar8);
  FUN_100004594(auStack_68);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x10008fd74 | FUN_10008fd74 */

void FUN_10008fd74(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  _swift_getObjectType();
  lVar2 = _TtC5Paste11AppDelegate::analytics;
  puVar3 = &DAT_100c27e18;
  _swift_getKeyPath();
  puVar4 = &DAT_100faa818;
  FUN_1000037f0(&DAT_100faa818,&DAT_100c27e48);
  _swift_allocObject();
  FUN_1000da6e0(puVar3,puVar4);
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  lVar2 = _TtC5Paste11AppDelegate::telemetry;
  puVar3 = &DAT_100c27e50;
  _swift_getKeyPath();
  puVar4 = &DAT_100fa8360;
  FUN_1000037f0(&DAT_100fa8360,&DAT_100c231b0);
  _swift_allocObject();
  FUN_1000da6e0(puVar3,puVar4);
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  lVar2 = _TtC5Paste11AppDelegate::pasteboardHistoryManager;
  puVar3 = &DAT_100c27e80;
  _swift_getKeyPath();
  puVar4 = &DAT_100fa6688;
  FUN_1000037f0(&DAT_100fa6688,&DAT_100c22eb0);
  _swift_allocObject();
  FUN_1000da6e0(puVar3,puVar4);
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  lVar2 = _TtC5Paste11AppDelegate::syncManager;
  puVar3 = &DAT_100c27eb0;
  _swift_getKeyPath();
  puVar4 = &DAT_100faa820;
  FUN_1000037f0(&DAT_100faa820,&DAT_100c25c10);
  _swift_allocObject();
  FUN_1000da6e0(puVar3,puVar4);
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  lVar2 = _TtC5Paste11AppDelegate::userIdProvider;
  puVar3 = &DAT_100c27ee0;
  _swift_getKeyPath();
  puVar4 = &DAT_100faa828;
  FUN_1000037f0(&DAT_100faa828,&DAT_100c27f10);
  _swift_allocObject();
  FUN_1000da6e0(puVar3,puVar4);
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  lVar2 = _TtC5Paste11AppDelegate::persistentStack;
  puVar3 = &DAT_100c27f18;
  _swift_getKeyPath();
  puVar4 = &DAT_100faa830;
  FUN_1000037f0(&DAT_100faa830,&DAT_100c271b0);
  _swift_allocObject();
  FUN_1000da6e0(puVar3,puVar4);
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  lVar2 = _TtC5Paste11AppDelegate::itemSerializationFormat;
  puVar3 = &DAT_100c27f48;
  _swift_getKeyPath();
  puVar4 = &DAT_100faa838;
  FUN_1000037f0(&DAT_100faa838,&DAT_100c27f78);
  _swift_allocObject();
  FUN_1000da6e0(puVar3,puVar4);
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  lVar2 = _TtC5Paste11AppDelegate::itemPreviewWindowManager;
  puVar3 = &DAT_100c27f80;
  _swift_getKeyPath();
  puVar4 = &DAT_100faa840;
  FUN_1000037f0(&DAT_100faa840,&DAT_100c22d38);
  _swift_allocObject();
  FUN_1000da6e0(puVar3,puVar4);
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  lVar2 = _TtC5Paste11AppDelegate::pasteHelper;
  puVar3 = &DAT_100c27fa8;
  _swift_getKeyPath();
  puVar4 = &DAT_100faa848;
  FUN_1000037f0(&DAT_100faa848,&DAT_100c27fd0);
  _swift_allocObject();
  FUN_1000da6e0(puVar3,puVar4);
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  lVar2 = _TtC5Paste11AppDelegate::logger;
  FUN_1000d4ca4(0);
  _swift_allocObject();
  uVar5 = 0x67656c6544707041;
  FUN_1000d4624(0x67656c6544707041,0xeb00000000657461);
  *(undefined8 *)(unaff_x20 + lVar2) = uVar5;
  lVar2 = _TtC5Paste11AppDelegate::appCoordinator;
  uVar5 = 0;
  FUN_1000a79d4();
  _swift_allocObject();
  FUN_1000a7af8();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar5;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC5Paste11AppDelegate::_lastLaunchedVersion);
  puVar3 = &DAT_100c27fd8;
  _swift_getKeyPath(&DAT_100c27fd8);
  puVar4 = &DAT_100faa850;
  FUN_100091540(&DAT_100faa850,FUN_100091500,
                PTR__Swift__protocol_conformance_descriptor_for_<A_where_A:_Swift_Decodable>_A____Swift_Decodable_in_Swift_>Swift__Decodable_100eae0b0
               );
  puVar6 = &DAT_100faa868;
  FUN_100091540(&DAT_100faa868,FUN_1000915b0,
                PTR__Swift__protocol_conformance_descriptor_for_<A_where_A:_Swift_Encodable>_A____Swift_Encodable_in_Swift_>Swift__Encodable_100eae098
               );
  FUN_1002cb88c(&local_130,puVar3,puVar4,puVar6);
  puVar1[1] = uStack_128;
  *puVar1 = local_130;
  puVar1[3] = uStack_118;
  puVar1[2] = uStack_120;
  puVar1[5] = uStack_108;
  puVar1[4] = local_110;
  puVar1[6] = local_100;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC5Paste11AppDelegate::_isDirectPasteEnabled);
  _swift_getKeyPath(&DAT_100c28008);
  FUN_1002cb7e0(&local_f8);
  puVar1[1] = uStack_f0;
  *puVar1 = local_f8;
  puVar1[3] = uStack_e0;
  puVar1[2] = local_e8;
  puVar1[5] = uStack_d0;
  puVar1[4] = local_d8;
  puVar1[6] = local_c8;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC5Paste11AppDelegate::_isLinkPreviewsEnabled);
  _swift_getKeyPath(&DAT_100c28030);
  FUN_1002cb7e0(&local_c0);
  puVar1[1] = uStack_b8;
  *puVar1 = local_c0;
  puVar1[3] = uStack_a8;
  puVar1[2] = uStack_b0;
  puVar1[5] = uStack_98;
  puVar1[4] = local_a0;
  puVar1[6] = local_90;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC5Paste11AppDelegate::_isMCPEnabled);
  _swift_getKeyPath(&DAT_100c28058);
  FUN_1002cb7e0(&local_88);
  puVar1[1] = uStack_80;
  *puVar1 = local_88;
  puVar1[3] = uStack_70;
  puVar1[2] = uStack_78;
  puVar1[5] = uStack_60;
  puVar1[4] = local_68;
  puVar1[6] = local_58;
  lVar2 = _TtC5Paste11AppDelegate::mcpServer;
  puVar3 = &DAT_100c28088;
  _swift_getKeyPath();
  puVar4 = &DAT_100faa878;
  FUN_1000037f0(&DAT_100faa878,&DAT_100c2a540);
  _swift_allocObject();
  FUN_1000da6e0(puVar3,puVar4);
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  *(undefined8 *)(unaff_x20 + _TtC5Paste11AppDelegate::mcpCancellable) = 0;
  *(undefined1 *)(unaff_x20 + _TtC5Paste11AppDelegate::isInitialized) = 0;
  lVar2 = _TtC5Paste11AppDelegate::handoffController;
  puVar3 = &DAT_100c280b8;
  _swift_getKeyPath();
  puVar4 = &DAT_100faa880;
  FUN_1000037f0(&DAT_100faa880,&DAT_100c29bd0);
  _swift_allocObject();
  FUN_1000da6e0(puVar3,puVar4);
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  lVar2 = _TtC5Paste11AppDelegate::handoffSnapshotBuilder;
  puVar3 = &DAT_100c280e8;
  _swift_getKeyPath();
  puVar4 = &DAT_100faa888;
  FUN_1000037f0(&DAT_100faa888,&DAT_100c28110);
  _swift_allocObject();
  FUN_1000da6e0(puVar3,puVar4);
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  *(undefined8 *)(unaff_x20 + _TtC5Paste11AppDelegate::handoffWiring) = 0;
  *(undefined8 *)(unaff_x20 + _TtC5Paste11AppDelegate::handoffPreviousApp) = 0;
  *(undefined1 *)(unaff_x20 + _TtC5Paste11AppDelegate::isMainPanelOpen) = 0;
  _objc_msgSendSuper2((objc_super *)&stack0xfffffffffffffec0,"init");
  return;
}



/* Address: 0x100090350 | _TtC5Paste11AppDelegate::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC5Paste11AppDelegate::init(ID param_1,SEL param_2)

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
    pcVar5 = "Paste/AppDelegate.swift";
    _swift_task_reportUnexpectedExecutor("Paste/AppDelegate.swift",0x17,1,0x12,UVar4.unknown,puVar3)
    ;
  }
  FUN_10008fd74();
  _swift_release(pMVar2);
  return (ID)pcVar5;
}



/* Address: 0x10009040c | _TtC5Paste11AppDelegate::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC5Paste11AppDelegate::_cxx_destruct(ID param_1,SEL param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _swift_release(*(undefined8 *)(param_1 + analytics));
  _swift_release(*(undefined8 *)(param_1 + telemetry));
  _swift_release(*(undefined8 *)(param_1 + pasteboardHistoryManager));
  _swift_release(*(undefined8 *)(param_1 + syncManager));
  _swift_release(*(undefined8 *)(param_1 + userIdProvider));
  _swift_release(*(undefined8 *)(param_1 + persistentStack));
  _swift_release(*(undefined8 *)(param_1 + itemSerializationFormat));
  _swift_release(*(undefined8 *)(param_1 + itemPreviewWindowManager));
  _swift_release(*(undefined8 *)(param_1 + pasteHelper));
  _swift_release(*(undefined8 *)(param_1 + logger));
  _swift_release(*(undefined8 *)(param_1 + appCoordinator));
  puVar1 = (undefined8 *)(param_1 + _lastLaunchedVersion);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[4];
  _swift_release(puVar1[6]);
  _swift_release(uVar5);
  _swift_release(uVar4);
  _swift_release(uVar3);
  _swift_release(uVar2);
  puVar1 = (undefined8 *)(param_1 + _isDirectPasteEnabled);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[4];
  _swift_release(puVar1[6]);
  _swift_release(uVar5);
  _swift_release(uVar4);
  _swift_release(uVar3);
  _swift_release(uVar2);
  puVar1 = (undefined8 *)(param_1 + _isLinkPreviewsEnabled);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[4];
  _swift_release(puVar1[6]);
  _swift_release(uVar5);
  _swift_release(uVar4);
  _swift_release(uVar3);
  _swift_release(uVar2);
  puVar1 = (undefined8 *)(param_1 + _isMCPEnabled);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[4];
  _swift_release(puVar1[6]);
  _swift_release(uVar5);
  _swift_release(uVar4);
  _swift_release(uVar3);
  _swift_release(uVar2);
  _swift_release(*(undefined8 *)(param_1 + mcpServer));
  _swift_release(*(undefined8 *)(param_1 + mcpCancellable));
  _swift_release(*(undefined8 *)(param_1 + handoffController));
  _swift_release(*(undefined8 *)(param_1 + handoffSnapshotBuilder));
  _swift_release(*(undefined8 *)(param_1 + handoffWiring));
  return;
}



/* Address: 0x100090644 | FUN_100090644 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100090644(void)

{
  return ZEXT816(0x100f92370);
}



/* Address: 0x100090664 | thunk_FUN_1001965a8 */

void thunk_FUN_1001965a8(void)

{
  FUN_1001965a8();
  return;
}



/* Address: 0x100090668 | thunk_FUN_10019b694 */

void thunk_FUN_10019b694(void)

{
  FUN_10019b694();
  return;
}



/* Address: 0x10009066c | FUN_10009066c */

void FUN_10009066c(undefined8 *param_1,undefined8 param_2)

{
  FUN_1002fd468();
  *param_1 = param_2;
  return;
}



/* Address: 0x100090690 | FUN_100090690 */

void FUN_100090690(undefined8 *param_1,undefined8 param_2)

{
  FUN_1002fd3ac();
  *param_1 = param_2;
  return;
}



/* Address: 0x1000906b4 | thunk_FUN_1002fd614 */

void thunk_FUN_1002fd614(void)

{
  FUN_1002fd614();
  return;
}



/* Address: 0x1000906b8 | thunk_FUN_1002fd448 */

void thunk_FUN_1002fd448(void)

{
  FUN_1002fd448();
  return;
}



/* Address: 0x1000906bc | FUN_1000906bc */

void FUN_1000906bc(undefined8 *param_1,undefined8 param_2)

{
  FUN_1002fd6e4();
  *param_1 = param_2;
  return;
}



/* Address: 0x1000906e0 | thunk_FUN_100004214 */

void thunk_FUN_100004214(void)

{
  FUN_100004214();
  return;
}



/* Address: 0x1000906e4 | FUN_1000906e4 */

void FUN_1000906e4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1000ae3cc(0);
  FUN_1000d80e0(param_1,"Paste/DI+App.swift",0x12,2,0x4a,0x13,FUN_10000963c,0,uVar1);
  return;
}



/* Address: 0x100090734 | FUN_100090734 */

void FUN_100090734(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  AnyCancellable *pAVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar1 = (undefined8 *)(unaff_x20 + _TtC5Paste11AppDelegate::_isMCPEnabled);
  uVar8 = puVar1[1];
  uVar6 = *puVar1;
  uVar9 = puVar1[2];
  uVar7 = puVar1[4];
  uVar5 = puVar1[6];
  _swift_retain(uVar6);
  _swift_retain(uVar8);
  _swift_retain(uVar9);
  _swift_retain(uVar7);
  _swift_retain(uVar5);
  puVar2 = &DAT_100faa2f0;
  FUN_1000037f0(&DAT_100faa2f0,&DAT_100c25940);
  FUN_1002cb1ec();
  _swift_release(uVar5);
  _swift_release(uVar7);
  _swift_release(uVar9);
  _swift_release(uVar8);
  _swift_release(uVar6);
  puVar3 = &DAT_100eb36a0;
  _swift_allocObject(&DAT_100eb36a0,0x18,7);
  _swift_unknownObjectWeakInit(puVar3 + 0x10);
  FUN_1000037f0(&DAT_100fa7ab0,&DAT_100c26e30);
  FUN_10004ff44();
  pAVar4 = (extension_Combine)::Combine::Publisher::_sink();
  _swift_release(puVar2);
  _swift_release(puVar3);
  uVar5 = *(undefined8 *)(unaff_x20 + _TtC5Paste11AppDelegate::mcpCancellable);
  *(AnyCancellable **)(unaff_x20 + _TtC5Paste11AppDelegate::mcpCancellable) = pAVar4;
  _swift_release(uVar5);
  return;
}



/* Address: 0x100090898 | FUN_100090898 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100090898(byte *param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  MainActor *pMVar4;
  undefined8 *puVar5;
  UnownedSerialExecutor UVar6;
  UnownedSerialExecutor UVar7;
  undefined *puVar8;
  TaskPriority TVar9;
  long extraout_x8;
  undefined1 *puVar10;
  undefined8 uVar11;
  undefined1 auStack_f0 [12];
  uint local_e4;
  undefined8 local_88 [3];
  undefined8 local_70;
  long lStack_68;
  
  puVar3 = &DAT_100faa890;
  FUN_1000037f0(&DAT_100faa890,&DAT_100c22f68);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = auStack_f0 + -extraout_x8;
  bVar1 = *param_1;
  bVar2 = param_1[1];
  pMVar4 = Swift::MainActor::typeMetadataAccessor();
  puVar3 = PTR_typeMetadataAccessor_100eaec10;
  pMVar4 = Swift::MainActor::get_shared(pMVar4,pMVar4);
  puVar5 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar3,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar6 = Swift::Actor::get_unownedExecutor();
  UVar7 = UVar6;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar7.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor("Paste/AppDelegate.swift",0x17,1,0x8f,UVar6.unknown,puVar5)
    ;
  }
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 != 0) {
    uVar11 = *(undefined8 *)(param_2 + _TtC5Paste11AppDelegate::analytics);
    _swift_retain(uVar11);
    FUN_1000da768(local_88);
    _swift_release(uVar11);
    FUN_100004640(local_88,local_70);
    puVar3 = &DAT_100faa8b8;
    FUN_1000037f0(&DAT_100faa8b8,&DAT_100c281b8);
    _swift_initStackObject();
    local_e4 = (uint)bVar1;
    *(undefined8 *)(puVar3 + 0x18) = 2;
    *(undefined8 *)(puVar3 + 0x10) = 1;
    *(undefined8 *)(puVar3 + 0x20) = 0x62616e655f70636d;
    puVar8 = PTR___type_metadata_for_Swift_Bool_100eac570;
    *(undefined8 *)(puVar3 + 0x28) = 0xeb0000000064656c;
    *(undefined **)(puVar3 + 0x48) = puVar8;
    *(undefined ***)(puVar3 + 0x50) = &PTR_PTR_100ebcc70;
    puVar3[0x30] = bVar2;
    puVar8 = puVar3;
    FUN_100010850();
    _swift_setDeallocating(puVar3);
    FUN_100005808(puVar3 + 0x20,&DAT_100faa8c0,&DAT_100c237f0);
    (**(code **)(lStack_68 + 0x10))(puVar8,local_70,lStack_68);
    _swift_bridgeObjectRelease(puVar8);
    FUN_100004594(local_88);
    uVar11 = *(undefined8 *)(param_2 + _TtC5Paste11AppDelegate::mcpServer);
    _swift_retain(uVar11);
    FUN_1000da768(local_88);
    _swift_release(uVar11);
    TVar9 = Swift::TaskPriority::typeMetadataAccessor();
    (**(code **)(*(long *)(TVar9.unknown + -8) + 0x38))(puVar10,1,1,TVar9.unknown);
    puVar3 = &DAT_100eb36c8;
    _swift_allocObject(&DAT_100eb36c8,0x30,7);
    *(undefined8 *)(puVar3 + 0x10) = 0;
    *(undefined8 *)(puVar3 + 0x18) = 0;
    puVar3[0x20] = (char)local_e4;
    puVar3[0x21] = bVar2;
    *(undefined8 *)(puVar3 + 0x28) = local_88[0];
    _swift_retain(local_88[0]);
    uVar11 = 0;
    FUN_10008ee90(0,0,puVar10,&DAT_100c28218,puVar3);
    _swift_release(local_88[0]);
    _swift_release(uVar11);
    FUN_100005808(puVar10,&DAT_100faa890,&DAT_100c22f68);
    _swift_release(pMVar4);
    return;
  }
  _swift_release(pMVar4);
  return;
}



/* Address: 0x100090b9c | FUN_100090b9c */

void FUN_100090b9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                  long *param_5)

{
  long *plVar1;
  int *piVar2;
  code *pcVar3;
  long unaff_x22;
  code *local_20;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  if ((param_4 >> 8 & 1) == 0) {
    piVar2 = *(int **)(*param_5 + 0x1e8);
    plVar1 = (long *)(ulong)(uint)piVar2[1];
    local_20 = (code *)((long)*piVar2 + (long)piVar2);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x20) = plVar1;
    pcVar3 = FUN_100090c98;
  }
  else {
    piVar2 = *(int **)(*param_5 + 0x1e0);
    plVar1 = (long *)(ulong)(uint)piVar2[1];
    local_20 = (code *)((long)*piVar2 + (long)piVar2);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x18) = plVar1;
    pcVar3 = FUN_100090c28;
  }
  *plVar1 = unaff_x22;
  plVar1[1] = (long)pcVar3;
                    /* WARNING: Could not recover jumptable at 0x000100090c24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*local_20)();
  return;
}


