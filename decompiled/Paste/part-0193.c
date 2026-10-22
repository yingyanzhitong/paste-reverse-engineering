/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100236730 | _TtC7PasteUI8LazyMenu::menuHasKeyEquivalent:forEvent:target:action: */

/* Function Stack Size: 0x30 bytes */

bool _TtC7PasteUI8LazyMenu::menuHasKeyEquivalent_forEvent_target_action_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID *param_5,SEL *param_6)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1001f7290();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor("PasteUI/LazyMenu.swift",0x16,1,0x1e,UVar3.unknown,pMVar1);
  }
  _swift_release(pMVar2);
  return 0;
}



/* Address: 0x1002367b4 | FUN_1002367b4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1002367b4(undefined8 param_1,undefined8 param_2)

{
  NSString *pNVar1;
  ID IVar2;
  ID unaff_x20;
  
  _objc_allocWithZone();
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_2);
  IVar2 = objc_stub::initWithTitle_(unaff_x20,pNVar1);
  return IVar2;
}



/* Address: 0x10023681c | _TtC7PasteUI8LazyMenu::initWithTitle: */

/* Function Stack Size: 0x18 bytes */

ID _TtC7PasteUI8LazyMenu::initWithTitle_(ID param_1,SEL param_2,ID param_3)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("PasteUI.LazyMenu",0x10,"init(title:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100236848);
  (*pcVar1)();
}



/* Address: 0x100236848 | FUN_100236848 */

void FUN_100236848(void)

{
  FUN_100236550();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"dealloc");
  return;
}



/* Address: 0x100236878 | _TtC7PasteUI8LazyMenu::.cxx_destruct */

/* Function Stack Size: 0x10 bytes */

void _TtC7PasteUI8LazyMenu::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_release(*(undefined8 *)(param_1 + populate + 8));
  return;
}



/* Address: 0x10023688c | _TtC7PasteUI27NoShiftHorizontalScrollView::isCompatibleWithResponsiveScrolling */

/* Function Stack Size: 0x10 bytes */

bool _TtC7PasteUI27NoShiftHorizontalScrollView::isCompatibleWithResponsiveScrolling
               (ID param_1,SEL param_2)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1001f7290();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/NoShiftHorizontalScrollView.swift",0x29,1,0xe,UVar3.unknown,pMVar1);
  }
  _swift_release(pMVar2);
  return 1;
}



/* Address: 0x100236910 | FUN_100236910 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100236910(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_100236978();
  if (lVar1 == 0) {
    lVar1 = param_1;
  }
  FUN_100236a6c();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffc0,"scrollWheel:",lVar1);
  return 0;
}



/* Address: 0x100236978 | FUN_100236978 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100236978(void)

{
  code *pcVar1;
  ID IVar2;
  ID unaff_x20;
  double extraout_d0;
  double extraout_d0_00;
  double extraout_d0_01;
  
  objc_stub::scrollingDeltaX(unaff_x20);
  if (((extraout_d0 == 0.0) && (objc_stub::scrollingDeltaY(unaff_x20), extraout_d0_00 != 0.0)) &&
     (IVar2 = objc_stub::CGEvent(unaff_x20), IVar2 != 0)) {
    objc_stub::scrollingDeltaY(unaff_x20);
    if (0x7fefffffffffffff < (ulong)ABS(extraout_d0_01)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100236a64);
      (*pcVar1)();
    }
    if (extraout_d0_01 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100236a68);
      (*pcVar1)();
    }
    if (9.223372036854776e+18 <= extraout_d0_01) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100236a6c);
      (*pcVar1)();
    }
    _CGEventSetIntegerValueField(IVar2,0xc,(long)extraout_d0_01);
    _CGEventSetIntegerValueField(IVar2,0xb,0);
    NSEvent::eventWithCGEvent_((ID)&_OBJC_CLASS___NSEvent,IVar2);
  }
  return;
}



/* Address: 0x100236a6c | FUN_100236a6c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100236a6c(void)

{
  return ZEXT816(0x100f96fd0);
}



/* Address: 0x100236a8c | _TtC7PasteUI27NoShiftHorizontalScrollView::scrollWheel: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC7PasteUI27NoShiftHorizontalScrollView::scrollWheel_(ID param_1,SEL param_2,ID param_3)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  class_t *pcVar5;
  class_t *pcVar6;
  objc_super local_50;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1001f7290();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/NoShiftHorizontalScrollView.swift",0x29,1,0x10,UVar3.unknown,pMVar1);
  }
  pcVar5 = (class_t *)param_1;
  FUN_100236978();
  if (pcVar5 == (class_t *)0x0) {
    pcVar5 = (class_t *)param_3;
  }
  pcVar6 = pcVar5;
  FUN_100236a6c();
  local_50.receiver = param_1;
  local_50.super_class = pcVar6;
  _objc_msgSendSuper2(&local_50,"scrollWheel:",pcVar5);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x100236b88 | FUN_100236b88 */

void FUN_100236b88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_100236a6c();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffc0,"initWithFrame:",param_1,param_2,
                      param_3,param_4);
  return;
}



/* Address: 0x100236be8 | _TtC7PasteUI27NoShiftHorizontalScrollView::initWithFrame: */

/* Function Stack Size: 0x30 bytes */

ID _TtC7PasteUI27NoShiftHorizontalScrollView::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  char *pcVar4;
  ID IVar5;
  objc_super local_60;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1001f7290();
  UVar3 = Swift::Actor::get_unownedExecutor();
  pcVar4 = (char *)UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar4 & 1) == 0) {
    pcVar4 = "PasteUI/NoShiftHorizontalScrollView.swift";
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/NoShiftHorizontalScrollView.swift",0x29,1,0xb,UVar3.unknown,pMVar1);
  }
  FUN_100236a6c();
  local_60.receiver = param_1;
  local_60.super_class = (class_t *)pcVar4;
  IVar5 = _objc_msgSendSuper2(&local_60,"initWithFrame:");
  _swift_release(pMVar2);
  return IVar5;
}



/* Address: 0x100236cc4 | FUN_100236cc4 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100236cc4(undefined8 param_1)

{
  ID IVar1;
  
  FUN_100236a6c();
  IVar1 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffc0,"initWithCoder:",param_1);
  return IVar1;
}



/* Address: 0x100236d30 | _TtC7PasteUI27NoShiftHorizontalScrollView::initWithCoder: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC7PasteUI27NoShiftHorizontalScrollView::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  char *pcVar4;
  ID IVar5;
  objc_super local_50;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1001f7290();
  UVar3 = Swift::Actor::get_unownedExecutor();
  pcVar4 = (char *)UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar4 & 1) == 0) {
    pcVar4 = "PasteUI/NoShiftHorizontalScrollView.swift";
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/NoShiftHorizontalScrollView.swift",0x29,1,0xb,UVar3.unknown,pMVar1);
  }
  FUN_100236a6c();
  local_50.receiver = param_1;
  local_50.super_class = (class_t *)pcVar4;
  IVar5 = _objc_msgSendSuper2(&local_50,"initWithCoder:",param_3);
  _swift_release(pMVar2);
  return IVar5;
}



/* Address: 0x100236e18 | FUN_100236e18 */

void FUN_100236e18(void)

{
  FUN_100236a6c();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"dealloc");
  return;
}



/* Address: 0x100236e48 | FUN_100236e48 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100236e48(undefined8 param_1)

{
  undefined *puVar1;
  code *pcVar2;
  MainActor *pMVar3;
  undefined8 *puVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  undefined *puVar7;
  ID IVar8;
  undefined *puVar9;
  undefined *puVar10;
  void *aBlock;
  undefined *puVar11;
  void *aBlock_00;
  undefined *local_c0;
  undefined8 local_b8;
  code *local_b0;
  undefined *puStack_a8;
  code *local_a0;
  undefined *local_98;
  undefined1 auStack_90 [16];
  undefined8 local_80;
  
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  puVar7 = PTR_typeMetadataAccessor_100eaec10;
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  puVar4 = &DAT_100fb6f30;
  FUN_100003a00(&DAT_100fb6f30,puVar7,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar5 = Swift::Actor::get_unownedExecutor();
  UVar6 = UVar5;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar6.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/OSDPresenter.macOS.swift",0x20,1,0x15,UVar5.unknown,puVar4);
  }
  puVar7 = &DAT_100ec3328;
  local_80 = param_1;
  _swift_allocObject(&DAT_100ec3328,0x18,7);
  *(undefined8 *)(puVar7 + 0x10) = param_1;
  IVar8 = CAMediaTimingFunction::functionWithName_
                    ((ID)&_OBJC_CLASS___CAMediaTimingFunction,
                     *(undefined8 *)PTR__kCAMediaTimingFunctionEaseOut_100eaa3c0);
  puVar9 = &DAT_100ec3350;
  _swift_allocObject(&DAT_100ec3350,0x38,7);
  *(undefined8 *)(puVar9 + 0x10) = 0x3fe0000000000000;
  puVar9[0x18] = 0;
  *(ID *)(puVar9 + 0x20) = IVar8;
  *(code **)(puVar9 + 0x28) = FUN_10023792c;
  *(undefined1 **)(puVar9 + 0x30) = auStack_90;
  puVar10 = &DAT_100ec3378;
  _swift_allocObject(&DAT_100ec3378,0x20,7);
  *(code **)(puVar10 + 0x10) = FUN_100208b84;
  *(undefined **)(puVar10 + 0x18) = puVar9;
  puVar1 = PTR___NSConcreteStackBlock_100ea82a0;
  local_a0 = FUN_1000e8174;
  local_c0 = PTR___NSConcreteStackBlock_100ea82a0;
  local_b8 = 0x42000000;
  local_b0 = FUN_1000f7788;
  puStack_a8 = &DAT_100ec3390;
  local_98 = puVar10;
  aBlock = __Block_copy(&local_c0);
  puVar11 = local_98;
  _swift_retain(puVar10);
  _swift_release(puVar11);
  puVar11 = &DAT_100ec33c8;
  _swift_allocObject(&DAT_100ec33c8,0x20,7);
  *(code **)(puVar11 + 0x10) = FUN_100237964;
  *(undefined **)(puVar11 + 0x18) = puVar7;
  local_a0 = FUN_100208bf0;
  local_c0 = puVar1;
  local_b8 = 0x42000000;
  local_b0 = FUN_100030410;
  puStack_a8 = &DAT_100ec33e0;
  local_98 = puVar11;
  aBlock_00 = __Block_copy(&local_c0);
  puVar11 = local_98;
  _swift_retain(puVar7);
  _swift_release(puVar11);
  NSAnimationContext::runAnimationGroup_completionHandler_
            ((ID)&_OBJC_CLASS___NSAnimationContext,aBlock,aBlock_00);
  _swift_release(puVar7);
  __Block_release(aBlock_00);
  __Block_release(aBlock);
  puVar7 = puVar10;
  _swift_isEscapingClosureAtFileLocation(puVar10,"",0x84,0x1c,0x2e,1);
  _swift_release(puVar10);
  _swift_release(pMVar3);
  _swift_release(puVar9);
  if (((ulong)puVar7 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100237110);
  (*pcVar2)();
}



/* Address: 0x100237110 | FUN_100237110 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100237110(void)

{
  return ZEXT816(0x100fb7988);
}



/* Address: 0x100237130 | FUN_100237130 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

ID FUN_100237130(undefined8 *param_1)

{
  undefined *puVar1;
  ID self;
  ID IVar2;
  NSHostingView *pNVar3;
  undefined8 *self_00;
  _ArrayBuffer _Var4;
  MainActor *pMVar5;
  undefined8 *puVar6;
  UnownedSerialExecutor UVar7;
  UnownedSerialExecutor UVar8;
  ID IVar9;
  undefined *puVar10;
  undefined *puVar11;
  NSArray *pNVar12;
  undefined8 *self_01;
  undefined1 auStack_f0 [64];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  puVar1 = &_OBJC_CLASS___NSVisualEffectView;
  _objc_allocWithZone();
  self = objc_stub::init((ID)puVar1);
  objc_stub::setWantsLayer_(self,1);
  IVar2 = objc_stub::layer(self);
  if (IVar2 != 0) {
    objc_stub::setCornerRadius_(IVar2,0x4034000000000000);
  }
  objc_stub::setMaterial_(self,0xd);
  objc_stub::setBlendingMode_(self,0);
  objc_stub::setState_(self,1);
  objc_stub::setAutoresizingMask_(self,0x12);
  uStack_a8 = param_1[1];
  local_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_88 = param_1[5];
  local_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  pNVar3 = (NSHostingView *)&DAT_100fb79e0;
  FUN_1000037f0(&DAT_100fb79e0,&DAT_100c36ff8);
  _objc_allocWithZone();
  FUN_1002379d0(param_1,auStack_f0);
  self_00 = &local_b0;
  SwiftUI::NSHostingView::_init(pNVar3);
  puVar1 = &DAT_100fb7040;
  FUN_1000037f0(&DAT_100fb7040,&DAT_100c34f70);
  _Var4.unknown = puVar1;
  _swift_initStackObject();
  *(undefined8 *)(_Var4.unknown + 0x18) = 3;
  *(undefined8 *)(_Var4.unknown + 0x10) = 1;
  *(undefined8 **)(_Var4.unknown + 0x20) = self_00;
  self_01 = self_00;
  if (((ulong)_Var4.unknown & 0xc000000000000001) != 0) {
    self_01 = (undefined8 *)0x0;
    Swift::_ArrayBuffer::__getElementSlowPath(0,_Var4);
  }
  pMVar5 = Swift::MainActor::typeMetadataAccessor();
  puVar10 = PTR_typeMetadataAccessor_100eaec10;
  pMVar5 = Swift::MainActor::get_shared(pMVar5,pMVar5);
  puVar6 = &DAT_100fb6f30;
  FUN_100003a00(&DAT_100fb6f30,puVar10,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar7 = Swift::Actor::get_unownedExecutor();
  UVar8 = UVar7;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar8.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/NSView+LayoutBuilder.swift",0x22,1,0x15,UVar7.unknown,puVar6);
  }
  objc_stub::addSubview_(self,self_01);
  objc_stub::setTranslatesAutoresizingMaskIntoConstraints_((ID)self_01,0);
  _swift_release(pMVar5);
  if (DAT_100fb6230 != -1) {
    _swift_once(&DAT_100fb6230,FUN_1001f9ff4);
  }
  IVar2 = self;
  FUN_100211c08(DAT_101057750,DAT_101057758,DAT_101057760,DAT_101057768,self,self_00);
  _swift_allocObject(puVar1,0x30,7);
  *(undefined8 *)(puVar1 + 0x18) = 5;
  *(undefined8 *)(puVar1 + 0x10) = 2;
  IVar9 = objc_stub::widthAnchor((ID)self_00);
  IVar9 = objc_stub::constraintEqualToConstant_(IVar9,0x4069000000000000);
  *(ID *)(puVar1 + 0x20) = IVar9;
  IVar9 = objc_stub::heightAnchor((ID)self_00);
  IVar9 = objc_stub::constraintEqualToConstant_(IVar9,0x4069000000000000);
  *(ID *)(puVar1 + 0x28) = IVar9;
  puVar10 = &DAT_100fb7ad0;
  FUN_1000037f0(&DAT_100fb7ad0,&DAT_100c36620);
  _swift_initStackObject();
  *(undefined8 *)(puVar10 + 0x18) = 4;
  *(undefined8 *)(puVar10 + 0x10) = 2;
  puVar11 = &DAT_100fb7050;
  FUN_1000037f0(&DAT_100fb7050,&DAT_100c366b0);
  *(undefined **)(puVar10 + 0x38) = puVar11;
  *(undefined ***)(puVar10 + 0x40) = &PTR_PTR_100ec00b8;
  *(ID *)(puVar10 + 0x20) = IVar2;
  *(undefined **)(puVar10 + 0x60) = puVar11;
  *(undefined ***)(puVar10 + 0x68) = &PTR_PTR_100ec00b8;
  *(undefined **)(puVar10 + 0x48) = puVar1;
  puVar11 = puVar10;
  thunk_FUN_1001f9238(puVar10);
  _swift_setDeallocating(puVar10);
  puVar1 = &DAT_100fb6f00;
  FUN_1000037f0(&DAT_100fb6f00,&DAT_100c36de0);
  _swift_arrayDestroy(puVar10 + 0x20,2,puVar1);
  FUN_10000ec2c(0,&DAT_100fb7ae0,&PTR__OBJC_CLASS___NSLayoutConstraint_100f8d660);
  pNVar12 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  NSLayoutConstraint::activateConstraints_((ID)&_OBJC_CLASS___NSLayoutConstraint,pNVar12);
  _swift_bridgeObjectRelease(puVar11);
  _swift_setDeallocating(_Var4.unknown);
  _swift_arrayDestroy(_Var4.unknown + 0x20,*(undefined8 *)(_Var4.unknown + 0x10),
                      PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8);
  puVar1 = &_OBJC_CLASS___NSWindow;
  _objc_allocWithZone();
  IVar2 = objc_stub::initWithContentRect_styleMask_backing_defer_((ID)puVar1,0,0,0,0,0,2,0);
  objc_stub::setLevel_(IVar2,1000);
  IVar9 = NSColor::clearColor((ID)&_OBJC_CLASS___NSColor);
  objc_stub::setBackgroundColor_(IVar2,IVar9);
  objc_stub::setContentView_(IVar2,self);
  objc_stub::layoutIfNeeded(IVar2);
  return IVar2;
}



/* Address: 0x1002375c0 | FUN_1002375c0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1002375c0(DispatchQoS param_1)

{
  DispatchWorkItemFlags DVar1;
  DispatchTime DVar2;
  ID self;
  OS_dispatch_queue *pOVar3;
  DispatchTime DVar4;
  undefined *puVar5;
  void *aBlock;
  undefined *puVar6;
  undefined *puVar7;
  long extraout_x8;
  DispatchWorkItemFlags flags;
  long extraout_x8_00;
  DispatchQoS qos;
  long extraout_x8_01;
  long extraout_x12;
  long lVar8;
  DispatchTime DVar9;
  undefined8 extraout_d0;
  double extraout_d0_00;
  double dVar10;
  undefined1 auStack_d0 [8];
  code *local_c8;
  long local_c0;
  undefined *puStack_b8;
  long local_b0;
  undefined *local_a8;
  undefined *local_a0;
  undefined8 local_98;
  code *local_90;
  undefined *puStack_88;
  code *local_80;
  undefined *local_78;
  
  DVar1 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_b0 = *(long *)(DVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_b0 + 0x40));
  flags.unknown = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puStack_b8 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_c0 = *(long *)(puStack_b8 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_c0 + 0x40));
  qos.unknown = flags.unknown + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  DVar2 = Dispatch::DispatchTime::typeMetadataAccessor();
  lVar8 = *(long *)(DVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar8 + 0x40));
  DVar9.unknown = qos.unknown + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  FUN_100237130();
  objc_stub::center((ID)param_1.unknown);
  self = NSScreen::mainScreen((ID)&_OBJC_CLASS___NSScreen);
  if (self != 0) {
    objc_stub::frame((ID)param_1.unknown);
    NSScreen::frame(self);
    dVar10 = extraout_d0_00;
    _CGRectGetMinY();
    objc_stub::setFrameOrigin_((ID)param_1.unknown,extraout_d0,dVar10 + 140.0);
  }
  objc_stub::orderFrontRegardless((ID)param_1.unknown);
  pOVar3 = (OS_dispatch_queue *)0x0;
  FUN_10000ec2c(0,&DAT_100fb7600,&PTR__OBJC_CLASS___OS_dispatch_queue_100f8d6e8);
  DVar4.unknown = (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar3);
  Dispatch::DispatchTime::now(DVar4);
  Dispatch::__infix(DVar9,1.0);
  local_c8 = *(code **)(lVar8 + 8);
  (*local_c8)(DVar9.unknown,DVar2.unknown);
  puVar5 = &DAT_100ec32d8;
  _swift_allocObject(&DAT_100ec32d8,0x18,7);
  *(undefined **)(puVar5 + 0x10) = param_1.unknown;
  local_80 = FUN_100237908;
  local_a0 = PTR___NSConcreteStackBlock_100ea82a0;
  local_98 = 0x42000000;
  local_90 = FUN_100030410;
  puStack_88 = &DAT_100ec32f0;
  local_78 = puVar5;
  aBlock = __Block_copy(&local_a0);
  Dispatch::DispatchQoS::get_unspecified(param_1);
  local_a8 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar5 = &DAT_100fb7588;
  FUN_100003a00(&DAT_100fb7588,PTR_typeMetadataAccessor_100eae670,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_100eae680);
  puVar6 = &DAT_100fb7610;
  FUN_1000037f0(&DAT_100fb7610,&DAT_100c36c38);
  puVar7 = puVar6;
  FUN_100225b20();
  Swift::SetAlgebra::_init(flags.unknown,&local_a8,puVar6,puVar7,DVar1.unknown,puVar5);
  (extension_Dispatch)::__C::OS_dispatch_queue::_asyncAfter
            ((DispatchTime)(DVar9.unknown + -extraout_x12),qos,flags);
  __Block_release(aBlock);
  (**(code **)(local_b0 + 8))(flags.unknown,DVar1.unknown);
  (**(code **)(local_c0 + 8))(qos.unknown,puStack_b8);
  (*local_c8)(DVar9.unknown + -extraout_x12,DVar2.unknown);
  _swift_release(local_78);
  return;
}



/* Address: 0x1002378e4 | FUN_1002378e4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002378e4(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x100237908 | FUN_100237908 */

void FUN_100237908(void)

{
  long unaff_x20;
  
  FUN_100236e48(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100237910 | FUN_100237910 */

void FUN_100237910(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  _swift_retain(uVar1);
  return;
}



/* Address: 0x100237924 | FUN_100237924 */

void FUN_100237924(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x10023792c | FUN_10023792c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10023792c(void)

{
  ID self;
  long unaff_x20;
  
  self = objc_stub::animator(*(ID *)(unaff_x20 + 0x10));
  objc_stub::setAlphaValue_(self,0);
  return 0;
}



/* Address: 0x100237964 | FUN_100237964 */

void FUN_100237964(void)

{
  long unaff_x20;
  
  objc_stub::orderOut_(*(ID *)(unaff_x20 + 0x10),0);
  return;
}



/* Address: 0x100237970 | FUN_100237970 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100237970(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x100237994 | FUN_100237994 */

void FUN_100237994(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x1002379a4 | FUN_1002379a4 */

void FUN_1002379a4(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  }
  _swift_deallocObject();
  return;
}



/* Address: 0x1002379d0 | FUN_1002379d0 */

undefined8 FUN_1002379d0(undefined8 param_1,undefined8 param_2)

{
  FUN_100237a6c(param_2,param_1);
  return param_2;
}



/* Address: 0x100237a0c | thunk_FUN_1002378e4 */

void thunk_FUN_1002378e4(void)

{
  FUN_1002378e4();
  return;
}



/* Address: 0x100237a10 | thunk_FUN_100237910 */

void thunk_FUN_100237910(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  _swift_retain(uVar1);
  return;
}



/* Address: 0x100237a14 | thunk_FUN_100237910 */

void thunk_FUN_100237910(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  _swift_retain(uVar1);
  return;
}



/* Address: 0x100237a18 | thunk_FUN_100237924 */

void thunk_FUN_100237924(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x100237a1c | thunk_FUN_100237924 */

void thunk_FUN_100237924(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x100237a20 | FUN_100237a20 */

void FUN_100237a20(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x28));
  if (*(long *)(param_1 + 0x30) != 0) {
    _swift_release(*(undefined8 *)(param_1 + 0x38));
    return;
  }
  return;
}



/* Address: 0x100237a6c | FUN_100237a6c */

undefined8 * FUN_100237a6c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  uVar1 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  lVar3 = param_2[6];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar1);
  if (lVar3 == 0) {
    lVar3 = param_2[6];
    param_1[7] = param_2[7];
    param_1[6] = lVar3;
  }
  else {
    uVar2 = param_2[7];
    param_1[6] = lVar3;
    param_1[7] = uVar2;
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x100237af0 | FUN_100237af0 */

undefined8 * FUN_100237af0(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar3 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  param_1[2] = param_2[2];
  uVar3 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  param_1[4] = param_2[4];
  uVar3 = param_1[5];
  param_1[5] = param_2[5];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  lVar1 = param_2[6];
  if (param_1[6] == 0) {
    if (lVar1 != 0) {
      uVar3 = param_2[7];
      param_1[6] = lVar1;
      param_1[7] = uVar3;
      _swift_retain();
      return param_1;
    }
  }
  else {
    if (lVar1 != 0) {
      uVar3 = param_2[7];
      uVar2 = param_1[7];
      param_1[6] = lVar1;
      param_1[7] = uVar3;
      _swift_retain();
      _swift_release(uVar2);
      return param_1;
    }
    _swift_release(param_1[7]);
  }
  lVar1 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = lVar1;
  return param_1;
}



/* Address: 0x100237bd4 | FUN_100237bd4 */

void FUN_100237bd4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar5 = param_2[4];
  uVar7 = param_2[7];
  uVar6 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar5;
  param_1[7] = uVar7;
  param_1[6] = uVar6;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  return;
}



/* Address: 0x100237be8 | FUN_100237be8 */

undefined8 * FUN_100237be8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[3];
  uVar1 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[5];
  uVar1 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  lVar3 = param_2[6];
  if (param_1[6] == 0) {
    if (lVar3 != 0) {
      uVar2 = param_2[7];
      param_1[6] = lVar3;
      param_1[7] = uVar2;
      return param_1;
    }
  }
  else {
    if (lVar3 != 0) {
      uVar1 = param_2[7];
      uVar2 = param_1[7];
      param_1[6] = lVar3;
      param_1[7] = uVar1;
      _swift_release(uVar2);
      return param_1;
    }
    _swift_release(param_1[7]);
  }
  lVar3 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = lVar3;
  return param_1;
}



/* Address: 0x100237c90 | FUN_100237c90 */

int FUN_100237c90(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x100237cd8 | FUN_100237cd8 */

void FUN_100237cd8(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 8) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 8) = 0;
    }
    if (param_2 != 0) {
      param_1[1] = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x100237d28 | FUN_100237d28 */

undefined1  [16] FUN_100237d28(void)

{
  return ZEXT816(0x100ec3470);
}



/* Address: 0x100237d38 | FUN_100237d38 */

void FUN_100237d38(undefined8 param_1)

{
  _swift_getOpaqueTypeConformance2(param_1,&DAT_100ca92f0,1);
  return;
}



/* Address: 0x100237d48 | FUN_100237d48 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100237fd0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100237d48(undefined8 *param_1,HorizontalAlignment param_2)

{
  HorizontalAlignment HVar1;
  Color CVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 *unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined7 local_638;
  undefined1 uStack_631;
  undefined7 uStack_630;
  undefined1 uStack_629;
  undefined7 uStack_628;
  undefined1 local_621;
  undefined7 uStack_620;
  undefined1 uStack_619;
  undefined7 uStack_618;
  undefined1 local_611;
  undefined7 uStack_610;
  undefined1 uStack_609;
  undefined7 uStack_608;
  undefined1 local_601;
  undefined7 uStack_600;
  undefined1 uStack_5f9;
  undefined7 uStack_5f8;
  undefined1 local_5f1;
  undefined7 uStack_5f0;
  undefined1 uStack_5e9;
  undefined7 uStack_5e8;
  undefined1 local_5e1;
  undefined7 uStack_5e0;
  undefined1 uStack_5d9;
  undefined7 uStack_5d8;
  undefined1 local_5d1;
  undefined7 uStack_5d0;
  undefined1 uStack_5c9;
  undefined7 uStack_5c8;
  undefined *local_590;
  undefined8 uStack_588;
  undefined8 local_580;
  undefined8 uStack_578;
  undefined8 local_570;
  undefined8 uStack_568;
  undefined8 local_560;
  undefined8 uStack_558;
  undefined8 local_550;
  undefined8 uStack_548;
  undefined8 local_540;
  undefined8 uStack_538;
  undefined8 local_530;
  undefined8 uStack_528;
  undefined8 local_520;
  undefined8 uStack_518;
  undefined8 local_510;
  undefined *puStack_508;
  undefined *local_500;
  undefined *local_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 local_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined *puStack_480;
  undefined8 uStack_478;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined *local_410;
  undefined8 uStack_408;
  undefined1 local_400;
  undefined7 local_3ff;
  undefined1 uStack_3f8;
  undefined7 uStack_3f7;
  undefined1 uStack_3f0;
  undefined7 local_3ef;
  undefined1 uStack_3e8;
  undefined7 uStack_3e7;
  undefined1 uStack_3e0;
  undefined7 local_3df;
  undefined1 uStack_3d8;
  undefined7 uStack_3d7;
  undefined1 uStack_3d0;
  undefined7 local_3cf;
  undefined1 uStack_3c8;
  undefined7 uStack_3c7;
  undefined1 uStack_3c0;
  undefined7 local_3bf;
  undefined1 uStack_3b8;
  undefined7 uStack_3b7;
  undefined1 uStack_3b0;
  undefined7 local_3af;
  undefined1 uStack_3a8;
  undefined7 uStack_3a7;
  undefined1 uStack_3a0;
  undefined7 local_39f;
  undefined1 uStack_398;
  undefined7 uStack_397;
  undefined1 uStack_390;
  undefined7 uStack_38f;
  undefined *local_388;
  undefined8 local_380;
  undefined1 local_378;
  undefined8 local_377;
  undefined8 uStack_36f;
  undefined8 local_367;
  undefined8 uStack_35f;
  undefined8 local_357;
  undefined8 uStack_34f;
  undefined8 local_347;
  undefined8 uStack_33f;
  undefined8 local_337;
  undefined8 uStack_32f;
  undefined8 local_327;
  undefined8 uStack_31f;
  undefined8 local_317;
  undefined7 uStack_30f;
  undefined1 uStack_308;
  undefined7 uStack_307;
  undefined *local_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined *puStack_278;
  undefined *local_270;
  undefined *local_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined *local_1d8;
  undefined *local_1d0;
  undefined *local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined *puStack_138;
  undefined *local_130;
  undefined *local_128;
  undefined8 local_120;
  undefined *local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined *puStack_88;
  undefined *local_80;
  undefined *puStack_78;
  undefined8 local_70;
  
  HVar1 = SwiftUI::HorizontalAlignment::get_center(param_2);
  FUN_10023815c(&local_110);
  uStack_4a8 = uStack_c8;
  local_4b0 = local_d0;
  uStack_498 = uStack_b8;
  uStack_4a0 = uStack_c0;
  uStack_4e8 = uStack_108;
  local_4f0 = local_110;
  uStack_4d8 = uStack_f8;
  uStack_4e0 = uStack_100;
  uStack_4c8 = uStack_e8;
  local_4d0 = local_f0;
  uStack_4b8 = uStack_d8;
  uStack_4c0 = uStack_e0;
  uStack_488 = uStack_a8;
  local_490 = local_b0;
  uStack_478 = uStack_108;
  puStack_480 = local_110;
  uStack_468 = uStack_f8;
  local_470 = uStack_100;
  uStack_458 = uStack_e8;
  uStack_460 = local_f0;
  uStack_448 = uStack_d8;
  local_450 = uStack_e0;
  uStack_438 = uStack_c8;
  uStack_440 = local_d0;
  uStack_428 = uStack_b8;
  local_430 = uStack_c0;
  uStack_418 = uStack_a8;
  uStack_420 = local_b0;
  FUN_100011090(&local_4f0,&local_1c0,&DAT_100fb79e8,&DAT_100c37060);
  CVar2.unknown = (undefined *)&puStack_480;
  FUN_100005808(CVar2.unknown,&DAT_100fb79e8,&DAT_100c37060);
  uStack_5f9 = (undefined1)uStack_4b8;
  uStack_5f8 = (undefined7)((ulong)uStack_4b8 >> 8);
  local_601 = (undefined1)uStack_4c0;
  uStack_600 = (undefined7)((ulong)uStack_4c0 >> 8);
  uStack_5e9 = (undefined1)uStack_4a8;
  uStack_5e8 = (undefined7)((ulong)uStack_4a8 >> 8);
  local_5f1 = (undefined1)local_4b0;
  uStack_5f0 = (undefined7)((ulong)local_4b0 >> 8);
  uStack_5d9 = (undefined1)uStack_498;
  uStack_5d8 = (undefined7)((ulong)uStack_498 >> 8);
  local_5e1 = (undefined1)uStack_4a0;
  uStack_5e0 = (undefined7)((ulong)uStack_4a0 >> 8);
  uStack_5c9 = (undefined1)uStack_488;
  uStack_5c8 = (undefined7)((ulong)uStack_488 >> 8);
  local_5d1 = (undefined1)local_490;
  uStack_5d0 = (undefined7)((ulong)local_490 >> 8);
  uStack_629 = (undefined1)uStack_4e8;
  uStack_628 = (undefined7)((ulong)uStack_4e8 >> 8);
  uStack_631 = SUB81(local_4f0,0);
  uStack_630 = (undefined7)((ulong)local_4f0 >> 8);
  uStack_619 = (undefined1)uStack_4d8;
  uStack_618 = (undefined7)((ulong)uStack_4d8 >> 8);
  local_621 = (undefined1)uStack_4e0;
  uStack_620 = (undefined7)((ulong)uStack_4e0 >> 8);
  uStack_609 = (undefined1)uStack_4c8;
  uStack_608 = (undefined7)((ulong)uStack_4c8 >> 8);
  local_611 = (undefined1)local_4d0;
  uStack_610 = (undefined7)((ulong)local_4d0 >> 8);
  CVar2 = SwiftUI::Color::get_secondary(CVar2);
  uStack_3b7 = uStack_5f0;
  uStack_3b0 = uStack_5e9;
  local_3bf = uStack_5f8;
  uStack_3b8 = local_5f1;
  uStack_3a7 = uStack_5e0;
  uStack_3a0 = uStack_5d9;
  local_3af = uStack_5e8;
  uStack_3a8 = local_5e1;
  uStack_397 = uStack_5d0;
  local_39f = uStack_5d8;
  uStack_398 = local_5d1;
  uStack_3f7 = uStack_630;
  uStack_3f0 = uStack_629;
  local_3ff = local_638;
  uStack_3f8 = uStack_631;
  uStack_3e7 = uStack_620;
  uStack_3e0 = uStack_619;
  local_3ef = uStack_628;
  uStack_3e8 = local_621;
  uStack_3d7 = uStack_610;
  uStack_3d0 = uStack_609;
  local_3df = uStack_618;
  uStack_3d8 = local_611;
  uStack_408 = 0x4030000000000000;
  local_400 = 0;
  uStack_390 = uStack_5c9;
  uStack_38f = uStack_5c8;
  uStack_3c7 = uStack_600;
  uStack_3c0 = uStack_5f9;
  local_3cf = uStack_608;
  uStack_3c8 = local_601;
  puVar3 = &DAT_100c37068;
  local_410 = HVar1.unknown;
  _swift_getKeyPath();
  uStack_158 = CONCAT71(uStack_3a7,uStack_3a8);
  local_160 = CONCAT71(local_3af,uStack_3b0);
  uStack_148 = CONCAT71(uStack_397,uStack_398);
  uStack_150 = CONCAT71(local_39f,uStack_3a0);
  uStack_198 = CONCAT71(uStack_3e7,uStack_3e8);
  local_1a0 = CONCAT71(local_3ef,uStack_3f0);
  uStack_188 = CONCAT71(uStack_3d7,uStack_3d8);
  uStack_190 = CONCAT71(local_3df,uStack_3e0);
  uStack_178 = CONCAT71(uStack_3c7,uStack_3c8);
  local_180 = CONCAT71(local_3cf,uStack_3d0);
  uStack_168 = CONCAT71(uStack_3b7,uStack_3b8);
  uStack_170 = CONCAT71(local_3bf,uStack_3c0);
  uStack_1a8 = CONCAT71(uStack_3f7,uStack_3f8);
  uStack_1b0 = CONCAT71(local_3ff,local_400);
  uStack_1b8 = uStack_408;
  local_1c0 = local_410;
  uStack_32f = CONCAT17(uStack_5e9,uStack_5f0);
  local_337 = CONCAT17(local_5f1,uStack_5f8);
  uStack_31f = CONCAT17(uStack_5d9,uStack_5e0);
  local_327 = CONCAT17(local_5e1,uStack_5e8);
  local_317 = CONCAT17(local_5d1,uStack_5d8);
  uStack_30f = uStack_5d0;
  uStack_36f = CONCAT17(uStack_629,uStack_630);
  local_377 = CONCAT17(uStack_631,local_638);
  uStack_35f = CONCAT17(uStack_619,uStack_620);
  local_367 = CONCAT17(local_621,uStack_628);
  uStack_34f = CONCAT17(uStack_609,uStack_610);
  local_357 = CONCAT17(local_611,uStack_618);
  uStack_33f = CONCAT17(uStack_5f9,uStack_600);
  local_347 = CONCAT17(local_601,uStack_608);
  local_140 = CONCAT71(uStack_38f,uStack_390);
  local_380 = 0x4030000000000000;
  local_378 = 0;
  uStack_308 = uStack_5c9;
  uStack_307 = uStack_5c8;
  local_388 = HVar1.unknown;
  FUN_100011090(&local_410,&local_110,&DAT_100fb79f0,&DAT_100c37098);
  FUN_100005808(&local_388,&DAT_100fb79f0,&DAT_100c37098);
  puVar4 = &DAT_100ec34a0;
  _swift_allocObject(&DAT_100ec34a0,0x50,7);
  uVar7 = *unaff_x20;
  uVar9 = unaff_x20[3];
  uVar8 = unaff_x20[2];
  *(undefined8 *)(puVar4 + 0x18) = unaff_x20[1];
  *(undefined8 *)(puVar4 + 0x10) = uVar7;
  *(undefined8 *)(puVar4 + 0x28) = uVar9;
  *(undefined8 *)(puVar4 + 0x20) = uVar8;
  uVar7 = unaff_x20[4];
  uVar9 = unaff_x20[7];
  uVar8 = unaff_x20[6];
  *(undefined8 *)(puVar4 + 0x38) = unaff_x20[5];
  *(undefined8 *)(puVar4 + 0x30) = uVar7;
  *(undefined8 *)(puVar4 + 0x48) = uVar9;
  *(undefined8 *)(puVar4 + 0x40) = uVar8;
  uStack_298 = uStack_158;
  local_2a0 = local_160;
  uStack_288 = uStack_148;
  uStack_290 = uStack_150;
  uStack_2d8 = uStack_198;
  local_2e0 = local_1a0;
  uStack_2c8 = uStack_188;
  uStack_2d0 = uStack_190;
  uStack_2b8 = uStack_178;
  local_2c0 = local_180;
  uStack_2a8 = uStack_168;
  uStack_2b0 = uStack_170;
  uStack_2f8 = uStack_1b8;
  local_300 = local_1c0;
  uStack_2e8 = uStack_1a8;
  uStack_2f0 = uStack_1b0;
  local_280 = local_140;
  lVar5 = 0;
  puStack_278 = puVar3;
  local_270 = CVar2.unknown;
  FUN_10021e6dc();
  lVar6 = lVar5;
  _swift_allocObject();
  *(undefined8 *)(lVar6 + 0x30) = 0;
  *(undefined8 *)(lVar6 + 0x28) = 0;
  *(undefined8 *)(lVar6 + 0x40) = 0;
  *(undefined8 *)(lVar6 + 0x38) = 0;
  *(undefined8 *)(lVar6 + 0x10) = 2;
  *(code **)(lVar6 + 0x18) = FUN_100238bb4;
  *(undefined **)(lVar6 + 0x20) = puVar4;
  local_638 = (undefined7)lVar6;
  uStack_631 = (undefined1)((ulong)lVar6 >> 0x38);
  FUN_1002379d0();
  SwiftUI::State::init(&local_110,lVar6,lVar5);
  uVar7 = uStack_108;
  puVar4 = local_110;
  uStack_528 = uStack_298;
  local_530 = local_2a0;
  uStack_518 = uStack_288;
  local_520 = uStack_290;
  puStack_508 = puStack_278;
  local_510 = local_280;
  local_500 = local_270;
  uStack_568 = uStack_2d8;
  local_570 = local_2e0;
  uStack_558 = uStack_2c8;
  local_560 = uStack_2d0;
  uStack_548 = uStack_2b8;
  local_550 = local_2c0;
  uStack_538 = uStack_2a8;
  local_540 = uStack_2b0;
  uStack_588 = uStack_2f8;
  local_590 = local_300;
  uStack_578 = uStack_2e8;
  local_580 = uStack_2f0;
  uStack_1f8 = uStack_158;
  local_200 = local_160;
  uStack_1e8 = uStack_148;
  uStack_1f0 = uStack_150;
  uStack_238 = uStack_198;
  local_240 = local_1a0;
  uStack_228 = uStack_188;
  uStack_230 = uStack_190;
  uStack_218 = uStack_178;
  local_220 = local_180;
  uStack_208 = uStack_168;
  uStack_210 = uStack_170;
  uStack_258 = uStack_1b8;
  local_260 = local_1c0;
  uStack_248 = uStack_1a8;
  uStack_250 = uStack_1b0;
  local_1e0 = local_140;
  local_1d8 = puVar3;
  local_1d0 = CVar2.unknown;
  FUN_100011090(&local_300,&local_110,&DAT_100fb79f8,&DAT_100c370a0);
  FUN_100005808(&local_260,&DAT_100fb79f8,&DAT_100c370a0);
  uStack_158 = uStack_528;
  local_160 = local_530;
  uStack_148 = uStack_518;
  uStack_150 = local_520;
  puStack_138 = puStack_508;
  local_140 = local_510;
  uStack_198 = uStack_568;
  local_1a0 = local_570;
  uStack_188 = uStack_558;
  uStack_190 = local_560;
  uStack_178 = uStack_548;
  local_180 = local_550;
  uStack_168 = uStack_538;
  uStack_170 = local_540;
  uStack_1b8 = uStack_588;
  local_1c0 = local_590;
  uStack_1a8 = uStack_578;
  uStack_1b0 = local_580;
  uStack_a8 = uStack_528;
  local_b0 = local_530;
  uStack_98 = uStack_518;
  uStack_a0 = local_520;
  puStack_88 = puStack_508;
  local_90 = local_510;
  uStack_e8 = uStack_568;
  local_f0 = local_570;
  uStack_d8 = uStack_558;
  uStack_e0 = local_560;
  uStack_c8 = uStack_548;
  local_d0 = local_550;
  uStack_b8 = uStack_538;
  uStack_c0 = local_540;
  local_130 = local_500;
  local_128 = local_110;
  local_120 = uStack_108;
  uStack_108 = uStack_588;
  local_110 = local_590;
  uStack_f8 = uStack_578;
  uStack_100 = local_580;
  local_80 = local_500;
  puStack_78 = puVar4;
  local_70 = uVar7;
  FUN_100011090(&local_1c0,&local_638,&DAT_100fb7a00,&DAT_100c370a8);
  FUN_100005808(&local_110,&DAT_100fb7a00,&DAT_100c370a8);
  param_1[0x11] = puStack_138;
  param_1[0x10] = local_140;
  param_1[0x13] = local_128;
  param_1[0x12] = local_130;
  param_1[0x14] = local_120;
  param_1[9] = uStack_178;
  param_1[8] = local_180;
  param_1[0xb] = uStack_168;
  param_1[10] = uStack_170;
  param_1[0xd] = uStack_158;
  param_1[0xc] = local_160;
  param_1[0xf] = uStack_148;
  param_1[0xe] = uStack_150;
  param_1[1] = uStack_1b8;
  *param_1 = local_1c0;
  param_1[3] = uStack_1a8;
  param_1[2] = uStack_1b0;
  param_1[5] = uStack_198;
  param_1[4] = local_1a0;
  param_1[7] = uStack_188;
  param_1[6] = uStack_190;
  return;
}



/* Address: 0x10023815c | FUN_10023815c */

void FUN_10023815c(undefined8 *param_1,String *param_2)

{
  undefined4 uVar1;
  String systemName;
  TemplateRenderingMode TVar2;
  Design DVar3;
  undefined *puVar4;
  MainActor *pMVar5;
  undefined8 *puVar6;
  UnownedSerialExecutor UVar7;
  UnownedSerialExecutor UVar8;
  Image IVar9;
  undefined7 extraout_var;
  Image IVar11;
  undefined7 extraout_var_00;
  Font FVar12;
  HorizontalAlignment HVar13;
  HorizontalAlignment HVar14;
  long extraout_x8;
  long extraout_x8_00;
  long lVar15;
  Image IVar16;
  undefined1 *puVar17;
  undefined1 auStack_290 [8];
  String *local_288;
  MainActor *local_280;
  undefined1 auStack_278 [88];
  undefined1 local_220 [64];
  undefined *local_1e0;
  undefined8 uStack_1d8;
  undefined1 local_1d0;
  undefined7 local_1cf;
  undefined1 uStack_1c8;
  undefined7 uStack_1c7;
  undefined1 uStack_1c0;
  undefined7 local_1bf;
  undefined1 uStack_1b8;
  undefined7 uStack_1b7;
  undefined1 uStack_1b0;
  undefined7 local_1af;
  undefined1 uStack_1a8;
  undefined7 uStack_1a7;
  undefined1 uStack_1a0;
  undefined7 local_19f;
  undefined1 uStack_198;
  undefined7 uStack_197;
  undefined1 uStack_190;
  undefined7 uStack_18f;
  undefined *puStack_188;
  undefined8 local_180;
  undefined1 local_178;
  undefined8 local_177;
  undefined8 uStack_16f;
  undefined8 local_167;
  undefined8 uStack_15f;
  undefined8 local_157;
  undefined8 uStack_14f;
  undefined8 local_147;
  undefined7 uStack_13f;
  undefined1 uStack_138;
  undefined7 uStack_137;
  undefined7 uStack_130;
  undefined1 local_129;
  undefined7 uStack_128;
  undefined1 uStack_121;
  undefined7 uStack_120;
  undefined1 local_119;
  undefined7 uStack_118;
  undefined1 uStack_111;
  undefined7 uStack_110;
  undefined1 local_109;
  undefined7 uStack_108;
  undefined1 uStack_101;
  undefined7 uStack_100;
  undefined1 local_f9;
  undefined7 uStack_f8;
  undefined1 uStack_f1;
  undefined7 uStack_f0;
  undefined1 uStack_e9;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined *local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long lVar10;
  
  puVar4 = &DAT_100fb6248;
  FUN_1000037f0(&DAT_100fb6248,&DAT_100c35100);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar17 = auStack_290 + -extraout_x8;
  puVar4 = &DAT_100fb7a08;
  FUN_1000037f0(&DAT_100fb7a08,&DAT_100c370b0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  IVar16.unknown = puVar17 + -extraout_x8_00;
  pMVar5 = Swift::MainActor::typeMetadataAccessor();
  puVar4 = PTR_typeMetadataAccessor_100eaec10;
  pMVar5 = Swift::MainActor::get_shared(pMVar5,pMVar5);
  puVar6 = &DAT_100fb6f30;
  FUN_100003a00(&DAT_100fb6f30,puVar4,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_280 = pMVar5;
  UVar7 = Swift::Actor::get_unownedExecutor();
  UVar8 = UVar7;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar8.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/OSDView.macOS.swift",0x1b,1,0xb,UVar7.unknown,puVar6);
  }
  systemName = *param_2;
  _swift_bridgeObjectRetain(param_2->bridgeObject);
  IVar9 = SwiftUI::Image::init(systemName);
  uVar1 = *(undefined4 *)
           PTR___enum_case_for_SwiftUI_Image_TemplateRenderingMode_template_SwiftUI_Image_TemplateRenderingMode_Type___>_SwiftUI_Image_TemplateRenderingMode_100eab770
  ;
  TVar2 = SwiftUI::Image::TemplateRenderingMode::typeMetadataAccessor();
  lVar10 = CONCAT71(extraout_var,TVar2.value);
  lVar15 = *(long *)(lVar10 + -8);
  local_288 = param_2;
  (**(code **)(lVar15 + 0x68))(IVar16.unknown,uVar1,lVar10);
  (**(code **)(lVar15 + 0x38))(IVar16.unknown,0,1,lVar10);
  IVar11 = SwiftUI::Image::_renderingMode(IVar16);
  _swift_release(IVar9.unknown);
  FUN_100005808(IVar16.unknown,&DAT_100fb7a08,&DAT_100c370b0);
  DVar3 = SwiftUI::Font::Design::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var_00,DVar3.value) + -8) + 0x38))
            (puVar17,1,1,CONCAT71(extraout_var_00,DVar3.value));
  FVar12 = SwiftUI::Font::_system((CGFloat)0x0,(Font)0x1);
  FUN_100005808(puVar17,&DAT_100fb6248,&DAT_100c35100);
  HVar13.unknown = &DAT_100c370b8;
  _swift_getKeyPath();
  HVar14 = SwiftUI::HorizontalAlignment::get_center(HVar13);
  FUN_10023851c(local_220,local_288);
  uStack_111 = (undefined1)local_220._24_8_;
  uStack_110 = SUB87(local_220._24_8_,1);
  local_119 = (undefined1)local_220._16_8_;
  uStack_118 = SUB87(local_220._16_8_,1);
  uStack_121 = (undefined1)local_220._8_8_;
  uStack_120 = SUB87(local_220._8_8_,1);
  local_129 = (undefined1)local_220._0_8_;
  uStack_128 = SUB87(local_220._0_8_,1);
  uStack_101 = (undefined1)local_220._40_8_;
  uStack_100 = SUB87(local_220._40_8_,1);
  local_109 = (undefined1)local_220._32_8_;
  uStack_108 = SUB87(local_220._32_8_,1);
  uStack_f1 = (undefined1)local_220._56_8_;
  uStack_f0 = SUB87(local_220._56_8_,1);
  local_f9 = (undefined1)local_220._48_8_;
  uStack_f8 = SUB87(local_220._48_8_,1);
  uStack_16f = CONCAT17(uStack_121,uStack_128);
  local_177 = CONCAT17(local_129,uStack_130);
  uStack_1b7 = uStack_118;
  uStack_1b0 = uStack_111;
  local_1bf = uStack_120;
  uStack_1b8 = local_119;
  uStack_15f = CONCAT17(uStack_111,uStack_118);
  local_167 = CONCAT17(local_119,uStack_120);
  uStack_1a7 = uStack_108;
  uStack_1a0 = uStack_101;
  local_1af = uStack_110;
  uStack_1a8 = local_109;
  uStack_14f = CONCAT17(uStack_101,uStack_108);
  local_157 = CONCAT17(local_109,uStack_110);
  uStack_197 = uStack_f8;
  local_19f = uStack_100;
  uStack_198 = local_f9;
  uStack_1c7 = uStack_128;
  uStack_1c0 = uStack_121;
  local_1cf = uStack_130;
  uStack_1c8 = local_129;
  local_147 = CONCAT17(local_f9,uStack_100);
  uStack_13f = uStack_f8;
  uStack_1d8 = 0x4010000000000000;
  local_1d0 = 0;
  local_180 = 0x4010000000000000;
  local_178 = 0;
  local_1e0 = HVar14.unknown;
  uStack_190 = uStack_f1;
  uStack_18f = uStack_f0;
  puStack_188 = HVar14.unknown;
  uStack_138 = uStack_f1;
  uStack_137 = uStack_f0;
  FUN_100011090(&local_1e0,&local_d0,&DAT_100fb7a10,&DAT_100c370e8);
  FUN_100005808(&puStack_188,&DAT_100fb7a10,&DAT_100c370e8);
  uStack_e8 = CONCAT71(uStack_197,uStack_198);
  local_90 = CONCAT71(local_19f,uStack_1a0);
  uStack_b8 = CONCAT71(uStack_1c7,uStack_1c8);
  uStack_c0 = CONCAT71(local_1cf,local_1d0);
  uStack_c8 = uStack_1d8;
  local_d0 = local_1e0;
  uStack_128 = (undefined7)uStack_1d8;
  uStack_121 = (undefined1)((ulong)uStack_1d8 >> 0x38);
  uStack_130 = SUB87(local_1e0,0);
  local_129 = (undefined1)((ulong)local_1e0 >> 0x38);
  uStack_118 = (undefined7)uStack_b8;
  uStack_111 = (undefined1)((uint7)uStack_1c7 >> 0x30);
  uStack_120 = (undefined7)uStack_c0;
  local_119 = (undefined1)((uint7)local_1cf >> 0x30);
  uStack_98 = CONCAT71(uStack_1a7,uStack_1a8);
  uStack_a0 = CONCAT71(local_1af,uStack_1b0);
  uStack_a8 = CONCAT71(uStack_1b7,uStack_1b8);
  local_b0 = CONCAT71(local_1bf,uStack_1c0);
  uStack_f8 = (undefined7)uStack_98;
  uStack_f1 = (undefined1)((uint7)uStack_1a7 >> 0x30);
  uStack_100 = (undefined7)uStack_a0;
  local_f9 = (undefined1)((uint7)local_1af >> 0x30);
  uStack_f0 = (undefined7)local_90;
  uStack_e9 = (undefined1)((uint7)local_19f >> 0x30);
  uStack_108 = (undefined7)uStack_a8;
  uStack_101 = (undefined1)((uint7)uStack_1b7 >> 0x30);
  uStack_110 = (undefined7)local_b0;
  local_109 = (undefined1)((uint7)local_1bf >> 0x30);
  local_e0 = CONCAT71(uStack_18f,uStack_190);
  *param_1 = IVar11.unknown;
  param_1[1] = HVar13.unknown;
  param_1[2] = FVar12.unknown;
  param_1[0xd] = CONCAT71(uStack_18f,uStack_190);
  param_1[8] = CONCAT71(uStack_1b7,uStack_1b8);
  param_1[7] = CONCAT71(local_1bf,uStack_1c0);
  param_1[10] = CONCAT71(uStack_1a7,uStack_1a8);
  param_1[9] = CONCAT71(local_1af,uStack_1b0);
  param_1[6] = CONCAT71(uStack_1c7,uStack_1c8);
  param_1[5] = CONCAT71(local_1cf,local_1d0);
  param_1[4] = uStack_1d8;
  param_1[3] = local_1e0;
  param_1[0xc] = CONCAT71(uStack_197,uStack_198);
  param_1[0xb] = CONCAT71(local_19f,uStack_1a0);
  uStack_88 = uStack_e8;
  local_80 = local_e0;
  _swift_retain(IVar11.unknown);
  _swift_retain(HVar13.unknown);
  _swift_retain(FVar12.unknown);
  FUN_100011090(&uStack_130,auStack_278,&DAT_100fb7a10,&DAT_100c370e8);
  FUN_100005808(&local_d0,&DAT_100fb7a10,&DAT_100c370e8);
  _swift_release(local_280);
  _swift_release(FVar12.unknown);
  _swift_release(HVar13.unknown);
  _swift_release(IVar11.unknown);
  return;
}



/* Address: 0x10023851c | FUN_10023851c */

void FUN_10023851c(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  char *param_5)

{
  MainActor *pMVar1;
  undefined8 *puVar2;
  UnownedSerialExecutor UVar3;
  char *pcVar4;
  Text TVar5;
  Font FVar6;
  Text TVar7;
  Font FVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  ulong uVar11;
  char *pcVar12;
  Font FVar13;
  char *pcVar14;
  long lVar15;
  Text TVar16;
  ulong uVar17;
  ulong uVar18;
  undefined1 *puVar19;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  puVar9 = PTR_typeMetadataAccessor_100eaec10;
  pMVar1 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  puVar2 = &DAT_100fb6f30;
  puVar10 = PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18;
  FUN_100003a00(&DAT_100fb6f30,puVar9);
  UVar3 = Swift::Actor::get_unownedExecutor();
  pcVar4 = (char *)UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar4 & 1) == 0) {
    pcVar4 = "PasteUI/OSDView.macOS.swift";
    puVar10 = &DAT_00000001;
    param_5 = (char *)0x10;
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/OSDView.macOS.swift",0x1b,1,0x10,UVar3.unknown,puVar2);
  }
  lVar15 = *(long *)(param_2 + 0x18);
  if (lVar15 == 0) {
    TVar16.unknown = (undefined *)0x0;
    uVar17 = 0;
    pcVar14 = (char *)0x0;
    uVar18 = *(ulong *)(param_2 + 0x28);
    TVar7.unknown = (undefined *)0x0;
    pcVar12 = param_5;
  }
  else {
    FUN_1002054c0();
    _swift_bridgeObjectRetain(lVar15);
    puVar9 = PTR___type_metadata_for_Swift_String_100eac208;
    TVar5 = SwiftUI::Text::_init();
    FVar6 = SwiftUI::Font::get_title(TVar5.unknown);
    TVar16 = TVar5;
    puVar10 = puVar9;
    pcVar14 = pcVar4;
    TVar7 = SwiftUI::Text::_font(FVar6.unknown);
    pcVar12 = pcVar14;
    _swift_release(FVar6.unknown);
    FUN_100016d74(TVar5.unknown,puVar9,pcVar4);
    _swift_bridgeObjectRelease(param_5);
    uVar17 = (ulong)puVar10 & 0xff;
    FUN_100016d5c(TVar7.unknown,TVar16.unknown);
    _swift_bridgeObjectRetain(pcVar14);
    uVar18 = *(ulong *)(param_2 + 0x28);
  }
  if (uVar18 == 0) {
    TVar5.unknown = (undefined *)0x0;
    uVar18 = 0;
    puVar19 = (undefined1 *)0x0;
    FVar6.unknown = (undefined *)0x0;
  }
  else {
    FVar13.unknown = *(undefined **)(param_2 + 0x20);
    _swift_bridgeObjectRetain(uVar18);
    FUN_1002045e8();
    FVar8 = SwiftUI::Font::get_body(FVar13);
    FVar6.unknown = FVar13.unknown;
    uVar11 = uVar18;
    puVar19 = puVar10;
    TVar5 = SwiftUI::Text::_font(FVar8.unknown);
    _swift_release(FVar8.unknown);
    FUN_100016d74(FVar13.unknown,uVar18,puVar10);
    _swift_bridgeObjectRelease(pcVar12);
    uVar18 = uVar11 & 0xff;
    FUN_100016d5c(TVar5.unknown,FVar6.unknown,uVar11);
    _swift_bridgeObjectRetain(puVar19);
  }
  FUN_100020200(TVar7.unknown,TVar16.unknown,uVar17,pcVar14);
  FUN_100020200(TVar5.unknown,FVar6.unknown,uVar18,puVar19);
  FUN_10002022c(TVar7.unknown,TVar16.unknown,uVar17,pcVar14);
  FUN_10002022c(TVar5.unknown,FVar6.unknown,uVar18,puVar19);
  *param_1 = TVar7.unknown;
  param_1[1] = TVar16.unknown;
  param_1[2] = uVar17;
  param_1[3] = pcVar14;
  param_1[4] = TVar5.unknown;
  param_1[5] = FVar6.unknown;
  param_1[6] = uVar18;
  param_1[7] = puVar19;
  FUN_10002022c(TVar5.unknown,FVar6.unknown,uVar18,puVar19);
  FUN_10002022c(TVar7.unknown,TVar16.unknown,uVar17,pcVar14);
  _swift_release(pMVar1);
  return;
}



/* Address: 0x1002387f0 | FUN_1002387f0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1002387f0(undefined8 param_1,DispatchQoS param_2)

{
  DispatchWorkItemFlags DVar1;
  DispatchTime DVar2;
  OS_dispatch_queue *pOVar3;
  undefined *puVar4;
  void *aBlock;
  undefined *puVar5;
  undefined8 *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  DispatchWorkItemFlags flags;
  long lVar7;
  DispatchQoS qos;
  DispatchTime DVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *local_100;
  code *local_f8;
  long local_f0;
  undefined *puStack_e8;
  long local_e0;
  undefined *local_d8 [8];
  undefined *local_98;
  undefined8 local_90;
  code *local_88;
  undefined *puStack_80;
  code *local_78;
  undefined *local_70;
  
  DVar1 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  puVar5 = PTR_typeMetadataAccessor_100eae670;
  local_e0 = *(long *)(DVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_e0 + 0x40));
  flags.unknown = (undefined *)((long)&local_100 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  puStack_e8 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_f0 = *(long *)(puStack_e8 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_f0 + 0x40));
  qos.unknown = flags.unknown + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  DVar2 = Dispatch::DispatchTime::typeMetadataAccessor();
  lVar7 = *(long *)(DVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar7 + 0x40));
  DVar8.unknown = qos.unknown + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  pOVar3 = (OS_dispatch_queue *)0x0;
  FUN_100238bbc();
  local_100 = (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar3);
  Dispatch::DispatchTime::now((DispatchTime)local_100);
  Dispatch::__infix(DVar8,0.1);
  local_f8 = *(code **)(lVar7 + 8);
  (*local_f8)(DVar8.unknown,DVar2.unknown);
  puVar4 = &DAT_100ec34c8;
  _swift_allocObject(&DAT_100ec34c8,0x50,7);
  uVar9 = *(undefined8 *)param_2.unknown;
  uVar11 = *(undefined8 *)((long)param_2.unknown + 0x18);
  uVar10 = *(undefined8 *)((long)param_2.unknown + 0x10);
  *(undefined8 *)(puVar4 + 0x18) = *(undefined8 *)((long)param_2.unknown + 8);
  *(undefined8 *)(puVar4 + 0x10) = uVar9;
  *(undefined8 *)(puVar4 + 0x28) = uVar11;
  *(undefined8 *)(puVar4 + 0x20) = uVar10;
  uVar9 = *(undefined8 *)((long)param_2.unknown + 0x20);
  uVar11 = *(undefined8 *)((long)param_2.unknown + 0x38);
  uVar10 = *(undefined8 *)((long)param_2.unknown + 0x30);
  *(undefined8 *)(puVar4 + 0x38) = *(undefined8 *)((long)param_2.unknown + 0x28);
  *(undefined8 *)(puVar4 + 0x30) = uVar9;
  *(undefined8 *)(puVar4 + 0x48) = uVar11;
  *(undefined8 *)(puVar4 + 0x40) = uVar10;
  local_78 = FUN_100238c44;
  local_98 = PTR___NSConcreteStackBlock_100ea82a0;
  local_90 = 0x42000000;
  local_88 = FUN_100030410;
  puStack_80 = &DAT_100ec34e0;
  local_70 = puVar4;
  aBlock = __Block_copy(&local_98);
  FUN_1002379d0(param_2.unknown,local_d8);
  Dispatch::DispatchQoS::get_unspecified(param_2);
  local_d8[0] = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar4 = &DAT_100fb7588;
  FUN_100003a00(&DAT_100fb7588,puVar5,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_100eae680);
  puVar5 = &DAT_100fb7610;
  FUN_1000037f0(&DAT_100fb7610,&DAT_100c36c38);
  puVar6 = &DAT_100fb7590;
  FUN_100016eac(&DAT_100fb7590,&DAT_100fb7610,&DAT_100c36c38,
                PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530);
  Swift::SetAlgebra::_init(flags.unknown,local_d8,puVar5,puVar6,DVar1.unknown,puVar4);
  (extension_Dispatch)::__C::OS_dispatch_queue::_asyncAfter
            ((DispatchTime)(DVar8.unknown + -extraout_x12),qos,flags);
  __Block_release(aBlock);
  (**(code **)(local_e0 + 8))(flags.unknown,DVar1.unknown);
  (**(code **)(local_f0 + 8))(qos.unknown,puStack_e8);
  (*local_f8)(DVar8.unknown + -extraout_x12,DVar2.unknown);
  _swift_release(local_70);
  return 0;
}



/* Address: 0x100238ab8 | FUN_100238ab8 */

void FUN_100238ab8(long param_1)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fb6f30;
  FUN_100003a00(&DAT_100fb6f30,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/OSDView.macOS.swift",0x1b,1,0x1e,UVar4.unknown,puVar3);
  }
  if (*(code **)(param_1 + 0x30) != (code *)0x0) {
    (**(code **)(param_1 + 0x30))();
  }
  _swift_release(pMVar2);
  return;
}



/* Address: 0x100238b70 | FUN_100238b70 */

void FUN_100238b70(void)

{
  FUN_100237d48();
  return;
}



/* Address: 0x100238ba8 | thunk_FUN_10009ccb8 */

void thunk_FUN_10009ccb8(void)

{
  FUN_10009ccb8();
  return;
}



/* Address: 0x100238bac | thunk_FUN_10009cd08 */

void thunk_FUN_10009cd08(void)

{
  FUN_10009cd08();
  return;
}



/* Address: 0x100238bb0 | thunk_FUN_100238c00 */

void thunk_FUN_100238c00(void)

{
  FUN_100238c00();
  return;
}



/* Address: 0x100238bb4 | FUN_100238bb4 */

void FUN_100238bb4(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1002387f0(param_1,unaff_x20 + 0x10);
  return;
}



/* Address: 0x100238bbc | FUN_100238bbc */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_100238bbc(void)

{
  undefined *puVar1;
  
  if (DAT_100fb7600 != (undefined *)0x0) {
    return;
  }
  puVar1 = &_OBJC_CLASS___OS_dispatch_queue;
  _swift_getObjCClassMetadata();
  DAT_100fb7600 = puVar1;
  return;
}



/* Address: 0x100238c00 | FUN_100238c00 */

void FUN_100238c00(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x38));
  if (*(long *)(unaff_x20 + 0x40) != 0) {
    _swift_release(*(undefined8 *)(unaff_x20 + 0x48));
  }
  _swift_deallocObject();
  return;
}



/* Address: 0x100238c44 | FUN_100238c44 */

void FUN_100238c44(void)

{
  long unaff_x20;
  
  FUN_100238ab8(unaff_x20 + 0x10);
  return;
}



/* Address: 0x100238c4c | FUN_100238c4c */

void FUN_100238c4c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  _swift_retain(uVar1);
  return;
}



/* Address: 0x100238c60 | FUN_100238c60 */

void FUN_100238c60(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x100238c68 | thunk_FUN_10009cc68 */

void thunk_FUN_10009cc68(void)

{
  FUN_10009cc68();
  return;
}



/* Address: 0x100238c6c | thunk_FUN_10009cc90 */

void thunk_FUN_10009cc90(void)

{
  FUN_10009cc90();
  return;
}



/* Address: 0x100238c70 | thunk_FUN_100238c74 */

void thunk_FUN_100238c74(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_30;
  undefined *puStack_28;
  
  if (DAT_100fb7a18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb7a00;
  FUN_100005c24(&DAT_100fb7a00,&DAT_100c370a8);
  puVar2 = puVar1;
  FUN_100238cec();
  puVar3 = puVar2;
  FUN_100220248();
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  puStack_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&puStack_30);
  DAT_100fb7a18 = puVar4;
  return;
}



/* Address: 0x100238c74 | FUN_100238c74 */

void FUN_100238c74(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fb7a18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb7a00;
  FUN_100005c24(&DAT_100fb7a00,&DAT_100c370a8);
  puVar2 = puVar1;
  FUN_100238cec();
  puVar3 = puVar2;
  FUN_100220248();
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fb7a18 = puVar4;
  return;
}



/* Address: 0x100238cec | FUN_100238cec */

void FUN_100238cec(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *local_30;
  undefined8 *puStack_28;
  
  if (DAT_100fb7a20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb79f8;
  FUN_100005c24(&DAT_100fb79f8,&DAT_100c370a0);
  puVar2 = &DAT_100fb7a28;
  FUN_100016eac(&DAT_100fb7a28,&DAT_100fb79f0,&DAT_100c37098,
                PTR_SwiftUI__SwiftUI__VStack<undefined>_>SwiftUI__View_100eab938);
  puVar3 = &DAT_100fb6390;
  FUN_100016eac(&DAT_100fb6390,&DAT_100fb6398,&DAT_100c35418,
                PTR_SwiftUI__SwiftUI___EnvironmentKeyWritingModifier<undefined>_>SwiftUI__ViewModifier_100eab0e0
               );
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fb7a20 = puVar4;
  return;
}



/* Address: 0x100238da4 | thunk_FUN_100238c00 */

void thunk_FUN_100238c00(void)

{
  FUN_100238c00();
  return;
}


