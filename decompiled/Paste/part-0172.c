/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100208e50 | FUN_100208e50 */

undefined8 FUN_100208e50(void)

{
  return 0x4036000000000000;
}



/* Address: 0x100208e58 | FUN_100208e58 */

undefined8 FUN_100208e58(void)

{
  return 0x4064000000000000;
}



/* Address: 0x100208e64 | FUN_100208e64 */

undefined1  [16] FUN_100208e64(void)

{
  return ZEXT816(0x100ec0fb0);
}



/* Address: 0x100208e74 | FUN_100208e74 */

undefined1  [16] FUN_100208e74(void)

{
  return ZEXT816(0x100ec0fd0);
}



/* Address: 0x100208e84 | FUN_100208e84 */

undefined1  [16] FUN_100208e84(void)

{
  return ZEXT816(0x100ec0ff0);
}



/* Address: 0x100208e94 | FUN_100208e94 */

undefined1  [16] FUN_100208e94(void)

{
  return ZEXT816(0x100ec1010);
}



/* Address: 0x100208ea4 | FUN_100208ea4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_100208ea4(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _TtC7PasteUI18GradientEffectView::startingColor;
  _swift_beginAccess(unaff_x20 + _TtC7PasteUI18GradientEffectView::startingColor,auStack_38,0,0);
  return *(undefined8 *)(unaff_x20 + lVar1);
}



/* Address: 0x100208ee4 | FUN_100208ee4 */

void FUN_100208ee4(undefined8 param_1)

{
  FUN_100208f80(param_1,&_TtC7PasteUI18GradientEffectView::startingColor);
  return;
}



/* Address: 0x100208ef0 | FUN_100208ef0 */

undefined1  [16] FUN_100208ef0(long param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  *(long *)(param_1 + 0x18) = unaff_x20;
  lVar1 = _TtC7PasteUI18GradientEffectView::startingColor;
  _swift_beginAccess(unaff_x20 + _TtC7PasteUI18GradientEffectView::startingColor,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = thunk_FUN_100209160;
  return auVar2;
}



/* Address: 0x100208f34 | FUN_100208f34 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_100208f34(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _TtC7PasteUI18GradientEffectView::endingColor;
  _swift_beginAccess(unaff_x20 + _TtC7PasteUI18GradientEffectView::endingColor,auStack_38,0,0);
  return *(undefined8 *)(unaff_x20 + lVar1);
}



/* Address: 0x100208f74 | FUN_100208f74 */

void FUN_100208f74(undefined8 param_1)

{
  FUN_100208f80(param_1,&_TtC7PasteUI18GradientEffectView::endingColor);
  return;
}



/* Address: 0x100208f80 | FUN_100208f80 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined8 FUN_100208f80(undefined8 param_1,long *param_2)

{
  long unaff_x20;
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_2;
  _swift_beginAccess(unaff_x20 + lVar1,auStack_48,1,0);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  CATransaction::begin((ID)&_OBJC_CLASS___CATransaction);
  CATransaction::setDisableActions_((ID)&_OBJC_CLASS___CATransaction,1);
  FUN_100209984();
  CATransaction::commit((ID)&_OBJC_CLASS___CATransaction);
  return 0;
}



/* Address: 0x100209018 | FUN_100209018 */

undefined1  [16] FUN_100209018(long param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  *(long *)(param_1 + 0x18) = unaff_x20;
  lVar1 = _TtC7PasteUI18GradientEffectView::endingColor;
  _swift_beginAccess(unaff_x20 + _TtC7PasteUI18GradientEffectView::endingColor,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = thunk_FUN_100209160;
  return auVar2;
}



/* Address: 0x10020905c | thunk_FUN_100209160 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void thunk_FUN_100209160(long param_1,SEL param_2)

{
  SEL op;
  undefined8 uVar1;
  
  op = param_2;
  _swift_endAccess();
  if (((ulong)param_2 & 1) != 0) {
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  CATransaction::begin((ID)&_OBJC_CLASS___CATransaction,op);
  CATransaction::setDisableActions_((ID)&_OBJC_CLASS___CATransaction,op,1);
  FUN_100209984(uVar1);
  CATransaction::commit((ID)&_OBJC_CLASS___CATransaction,op);
  return;
}



/* Address: 0x100209060 | FUN_100209060 */

undefined8 FUN_100209060(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _TtC7PasteUI18GradientEffectView::angle;
  _swift_beginAccess(unaff_x20 + _TtC7PasteUI18GradientEffectView::angle,auStack_38,0,0);
  return *(undefined8 *)(unaff_x20 + lVar1);
}



/* Address: 0x1002090a0 | FUN_1002090a0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_1002090a0(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _TtC7PasteUI18GradientEffectView::angle;
  _swift_beginAccess(unaff_x20 + _TtC7PasteUI18GradientEffectView::angle,auStack_48,1,0);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  CATransaction::begin((ID)&_OBJC_CLASS___CATransaction);
  CATransaction::setDisableActions_((ID)&_OBJC_CLASS___CATransaction,1);
  FUN_100209984();
  CATransaction::commit((ID)&_OBJC_CLASS___CATransaction);
  return;
}



/* Address: 0x10020911c | FUN_10020911c */

undefined1  [16] FUN_10020911c(long param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  *(long *)(param_1 + 0x18) = unaff_x20;
  lVar1 = _TtC7PasteUI18GradientEffectView::angle;
  _swift_beginAccess(unaff_x20 + _TtC7PasteUI18GradientEffectView::angle,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = thunk_FUN_100209160;
  return auVar2;
}



/* Address: 0x100209160 | FUN_100209160 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_100209160(long param_1,ulong param_2)

{
  undefined8 uVar1;
  
  _swift_endAccess();
  if ((param_2 & 1) != 0) {
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  CATransaction::begin((ID)&_OBJC_CLASS___CATransaction);
  CATransaction::setDisableActions_((ID)&_OBJC_CLASS___CATransaction,1);
  FUN_100209984(uVar1);
  CATransaction::commit((ID)&_OBJC_CLASS___CATransaction);
  return;
}



/* Address: 0x1002091c4 | FUN_1002091c4 */

void FUN_1002091c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_allocWithZone();
  FUN_100209214(param_1,param_2,param_3);
  return;
}



/* Address: 0x100209214 | FUN_100209214 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100209214(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ID IVar2;
  undefined *self;
  ID self_00;
  long unaff_x20;
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  
  _swift_getObjectType();
  lVar1 = _TtC7PasteUI18GradientEffectView::startingColor;
  IVar2 = NSColor::whiteColor((ID)&_OBJC_CLASS___NSColor);
  *(ID *)(unaff_x20 + lVar1) = IVar2;
  lVar1 = _TtC7PasteUI18GradientEffectView::endingColor;
  IVar2 = NSColor::blackColor((ID)&_OBJC_CLASS___NSColor);
  *(ID *)(unaff_x20 + lVar1) = IVar2;
  *(undefined8 *)(unaff_x20 + _TtC7PasteUI18GradientEffectView::angle) = 0;
  lVar1 = _TtC7PasteUI18GradientEffectView::gradientLayer;
  self = &_OBJC_CLASS___CAGradientLayer;
  _objc_allocWithZone();
  IVar2 = objc_stub::init((ID)self);
  *(ID *)(unaff_x20 + lVar1) = IVar2;
  IVar2 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff80,"initWithFrame:",0,0,0,0);
  lVar1 = _TtC7PasteUI18GradientEffectView::startingColor;
  _swift_beginAccess(IVar2 + _TtC7PasteUI18GradientEffectView::startingColor,auStack_98,1,0);
  *(undefined8 *)(IVar2 + lVar1) = param_2;
  lVar1 = _TtC7PasteUI18GradientEffectView::endingColor;
  _swift_beginAccess(IVar2 + _TtC7PasteUI18GradientEffectView::endingColor,auStack_b0,1,0);
  *(undefined8 *)(IVar2 + lVar1) = param_3;
  lVar1 = _TtC7PasteUI18GradientEffectView::angle;
  _swift_beginAccess(IVar2 + _TtC7PasteUI18GradientEffectView::angle,auStack_c8,1,0);
  *(undefined8 *)(IVar2 + lVar1) = param_1;
  objc_stub::setWantsLayer_(IVar2,1);
  self_00 = objc_stub::layer(IVar2);
  if (self_00 != 0) {
    objc_stub::addSublayer_
              (self_00,*(undefined8 *)(IVar2 + _TtC7PasteUI18GradientEffectView::gradientLayer));
  }
  objc_stub::setClipsToBounds_(IVar2,1);
  CATransaction::begin((ID)&_OBJC_CLASS___CATransaction);
  CATransaction::setDisableActions_((ID)&_OBJC_CLASS___CATransaction,1);
  FUN_100209984(IVar2);
  CATransaction::commit((ID)&_OBJC_CLASS___CATransaction);
  return IVar2;
}



/* Address: 0x100209434 | _TtC7PasteUI18GradientEffectView::initWithCoder: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC7PasteUI18GradientEffectView::initWithCoder_(ID param_1,SEL param_2,ID param_3)

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
              ("PasteUI/GradientEffectView.swift",0x20,1,0x42,UVar3.unknown,pMVar1);
  }
  FUN_100209c48();
  _swift_release(pMVar2);
  return param_3;
}



/* Address: 0x1002094e0 | _TtC7PasteUI18GradientEffectView::isFlipped */

/* Function Stack Size: 0x10 bytes */

bool _TtC7PasteUI18GradientEffectView::isFlipped(ID param_1,SEL param_2)

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
              ("PasteUI/GradientEffectView.swift",0x20,1,0x4e,UVar3.unknown,pMVar1);
  }
  _swift_release(pMVar2);
  return 1;
}



/* Address: 0x100209564 | FUN_100209564 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_100209564(void)

{
  ID unaff_x20;
  ID self;
  
  _swift_getObjectType();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffc0,"layout");
  CATransaction::begin((ID)&_OBJC_CLASS___CATransaction);
  CATransaction::setDisableActions_((ID)&_OBJC_CLASS___CATransaction,1);
  self = *(ID *)(unaff_x20 + _TtC7PasteUI18GradientEffectView::gradientLayer);
  objc_stub::bounds(unaff_x20);
  objc_stub::setFrame_(self);
  CATransaction::commit((ID)&_OBJC_CLASS___CATransaction);
  return;
}



/* Address: 0x1002095ec | _TtC7PasteUI18GradientEffectView::layout */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC7PasteUI18GradientEffectView::layout(ID param_1,SEL param_2)

{
  class_t *pcVar1;
  MainActor *pMVar2;
  MainActor *pMVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  ID self;
  objc_super local_50;
  
  pcVar1 = (class_t *)param_1;
  _swift_getObjectType();
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  pMVar3 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  pMVar2 = pMVar3;
  FUN_1001f7290();
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/GradientEffectView.swift",0x20,1,0x50,UVar4.unknown,pMVar2);
  }
  local_50.receiver = param_1;
  local_50.super_class = pcVar1;
  _objc_msgSendSuper2(&local_50,"layout");
  CATransaction::begin((ID)&_OBJC_CLASS___CATransaction);
  CATransaction::setDisableActions_((ID)&_OBJC_CLASS___CATransaction,1);
  self = *(ID *)(param_1 + gradientLayer);
  objc_stub::bounds(param_1);
  objc_stub::setFrame_(self);
  CATransaction::commit((ID)&_OBJC_CLASS___CATransaction);
  _swift_release(pMVar3);
  return;
}



/* Address: 0x1002096f8 | FUN_1002096f8 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002096f8(void)

{
  code *pcVar1;
  ID self;
  undefined *puVar2;
  undefined *puVar3;
  void *aBlock;
  undefined *puVar4;
  ID unaff_x20;
  undefined *local_70;
  undefined8 local_68;
  code *local_60;
  undefined *puStack_58;
  code *local_50;
  undefined *local_48;
  
  self = objc_stub::effectiveAppearance(unaff_x20);
  puVar2 = &DAT_100ec1030;
  _swift_allocObject(&DAT_100ec1030,0x18,7);
  *(ID *)(puVar2 + 0x10) = unaff_x20;
  puVar3 = &DAT_100ec1058;
  _swift_allocObject(&DAT_100ec1058,0x20,7);
  *(code **)(puVar3 + 0x10) = FUN_100209b1c;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  local_50 = FUN_100209b34;
  local_70 = PTR___NSConcreteStackBlock_100ea82a0;
  local_68 = 0x42000000;
  local_60 = FUN_1000d5218;
  puStack_58 = &DAT_100ec1070;
  local_48 = puVar3;
  aBlock = __Block_copy(&local_70);
  puVar4 = local_48;
  _swift_retain(puVar3);
  _swift_release(puVar4);
  objc_stub::performAsCurrentDrawingAppearance_(self,aBlock);
  __Block_release(aBlock);
  puVar4 = puVar3;
  _swift_isEscapingClosureAtFileLocation(puVar3,"",0x7c,0x57,0x3f,1);
  _swift_release(puVar2);
  _swift_release(puVar3);
  if (((ulong)puVar4 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100209838);
  (*pcVar1)();
}



/* Address: 0x100209838 | FUN_100209838 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_100209838(undefined8 param_1)

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
              ("PasteUI/GradientEffectView.swift",0x20,1,0x57,UVar3.unknown,pMVar1);
  }
  CATransaction::begin((ID)&_OBJC_CLASS___CATransaction);
  CATransaction::setDisableActions_((ID)&_OBJC_CLASS___CATransaction,1);
  FUN_100209984(param_1);
  CATransaction::commit((ID)&_OBJC_CLASS___CATransaction);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x1002098e8 | _TtC7PasteUI18GradientEffectView::viewDidChangeEffectiveAppearance */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC7PasteUI18GradientEffectView::viewDidChangeEffectiveAppearance(ID param_1,SEL param_2)

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
              ("PasteUI/GradientEffectView.swift",0x20,1,0x56,UVar3.unknown,pMVar1);
  }
  FUN_1002096f8(param_1);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x100209984 | FUN_100209984 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100209984(long param_1)

{
  long lVar1;
  undefined *puVar2;
  ID IVar3;
  undefined8 uVar4;
  NSArray *pNVar5;
  ID self;
  undefined1 auStack_108 [128];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  self = *(ID *)(param_1 + _TtC7PasteUI18GradientEffectView::gradientLayer);
  puVar2 = &DAT_100fb64d0;
  FUN_1000037f0(&DAT_100fb64d0,&DAT_100c355b8);
  _swift_allocObject();
  *(undefined8 *)(puVar2 + 0x18) = 4;
  *(undefined8 *)(puVar2 + 0x10) = 2;
  lVar1 = _TtC7PasteUI18GradientEffectView::startingColor;
  _swift_beginAccess(param_1 + _TtC7PasteUI18GradientEffectView::startingColor,auStack_58,0,0);
  IVar3 = objc_stub::CGColor(*(ID *)(param_1 + lVar1));
  uVar4 = 0;
  FUN_1001f40c8();
  *(undefined8 *)(puVar2 + 0x38) = uVar4;
  *(ID *)(puVar2 + 0x20) = IVar3;
  lVar1 = _TtC7PasteUI18GradientEffectView::endingColor;
  _swift_beginAccess(param_1 + _TtC7PasteUI18GradientEffectView::endingColor,auStack_70,0,0);
  IVar3 = objc_stub::CGColor(*(ID *)(param_1 + lVar1));
  *(undefined8 *)(puVar2 + 0x58) = uVar4;
  *(ID *)(puVar2 + 0x40) = IVar3;
  pNVar5 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_release(puVar2);
  objc_stub::setColors_(self,pNVar5);
  lVar1 = _TtC7PasteUI18GradientEffectView::angle;
  _swift_beginAccess(param_1 + _TtC7PasteUI18GradientEffectView::angle,auStack_88,0,0);
  _CATransform3DMakeRotation
            (auStack_108,*(double *)(param_1 + lVar1) * 0.017453292519943295,0,0,0x3ff0000000000000)
  ;
  objc_stub::setTransform_(self,auStack_108);
  return;
}



/* Address: 0x100209af8 | FUN_100209af8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100209af8(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x100209b1c | FUN_100209b1c */

void FUN_100209b1c(void)

{
  long unaff_x20;
  
  FUN_100209838(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100209b24 | FUN_100209b24 */

void FUN_100209b24(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x100209b34 | FUN_100209b34 */

void FUN_100209b34(void)

{
  long unaff_x20;
  
  FUN_10009df20(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100209b3c | FUN_100209b3c */

void FUN_100209b3c(long param_1,long param_2)

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



/* Address: 0x100209b50 | FUN_100209b50 */

void FUN_100209b50(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x100209b58 | _TtC7PasteUI18GradientEffectView::initWithFrame: */

/* Function Stack Size: 0x30 bytes */

ID _TtC7PasteUI18GradientEffectView::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  code *pcVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  FUN_1001f7290();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/GradientEffectView.swift",0x20,1,0xc,UVar3.unknown,pMVar2);
  }
  __swift_stdlib_reportUnimplementedInitializer
            ("PasteUI.GradientEffectView",0x1a,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100209be0);
  (*pcVar1)();
}



/* Address: 0x100209be0 | _TtC7PasteUI18GradientEffectView::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC7PasteUI18GradientEffectView::_cxx_destruct(ID param_1,SEL param_2)

{
  return;
}



/* Address: 0x100209c28 | FUN_100209c28 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100209c28(void)

{
  return ZEXT816(0x100f960d0);
}



/* Address: 0x100209c48 | FUN_100209c48 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100209c48(void)

{
  long lVar1;
  code *pcVar2;
  ID IVar3;
  undefined *self;
  long unaff_x20;
  String SVar4;
  
  lVar1 = _TtC7PasteUI18GradientEffectView::startingColor;
  IVar3 = NSColor::whiteColor((ID)&_OBJC_CLASS___NSColor);
  *(ID *)(unaff_x20 + lVar1) = IVar3;
  lVar1 = _TtC7PasteUI18GradientEffectView::endingColor;
  IVar3 = NSColor::blackColor((ID)&_OBJC_CLASS___NSColor);
  *(ID *)(unaff_x20 + lVar1) = IVar3;
  *(undefined8 *)(unaff_x20 + _TtC7PasteUI18GradientEffectView::angle) = 0;
  lVar1 = _TtC7PasteUI18GradientEffectView::gradientLayer;
  self = &_OBJC_CLASS___CAGradientLayer;
  _objc_allocWithZone();
  IVar3 = objc_stub::init((ID)self);
  *(ID *)(unaff_x20 + lVar1) = IVar3;
  SVar4.bridgeObject = (void *)0x2;
  SVar4.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar4,(StaticString)0xd000000000000025,0x8000000100d8dc00,
             0xd9e020);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100209d14);
  (*pcVar2)();
}



/* Address: 0x100209d14 | thunk_FUN_100209160 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void thunk_FUN_100209160(long param_1,SEL param_2)

{
  SEL op;
  undefined8 uVar1;
  
  op = param_2;
  _swift_endAccess();
  if (((ulong)param_2 & 1) != 0) {
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  CATransaction::begin((ID)&_OBJC_CLASS___CATransaction,op);
  CATransaction::setDisableActions_((ID)&_OBJC_CLASS___CATransaction,op,1);
  FUN_100209984(uVar1);
  CATransaction::commit((ID)&_OBJC_CLASS___CATransaction,op);
  return;
}



/* Address: 0x100209d18 | FUN_100209d18 */

void FUN_100209d18(undefined8 param_1)

{
  FUN_10020a674();
  _swift_initStaticObject();
  DAT_1010577f8 = param_1;
  return;
}



/* Address: 0x100209d40 | FUN_100209d40 */

void FUN_100209d40(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x18) = 0xd000000000000010;
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0x8000000100d9de20;
  *(undefined8 *)(unaff_x20 + 0x28) = param_1;
  *(undefined8 *)(unaff_x20 + 0x30) = param_2;
  *(undefined1 *)(unaff_x20 + 0x38) = param_3;
  return;
}



/* Address: 0x100209da4 | FUN_100209da4 */

undefined8 * FUN_100209da4(void)

{
  if (DAT_100fb66a0 != -1) {
    _swift_once(&DAT_100fb66a0,FUN_100209d18);
  }
  return &DAT_1010577f8;
}



/* Address: 0x100209de4 | FUN_100209de4 */

void FUN_100209de4(void)

{
  _swift_initStaticObject();
  return;
}



/* Address: 0x100209df4 | FUN_100209df4 */

void FUN_100209df4(undefined8 param_1)

{
  FUN_10020a674();
  _swift_initStaticObject();
  DAT_101057800 = param_1;
  return;
}



/* Address: 0x100209e1c | FUN_100209e1c */

undefined8 * FUN_100209e1c(void)

{
  if (DAT_100fb66f0 != -1) {
    _swift_once(&DAT_100fb66f0,FUN_100209df4);
  }
  return &DAT_101057800;
}



/* Address: 0x100209e5c | FUN_100209e5c */

void FUN_100209e5c(void)

{
  _swift_initStaticObject();
  return;
}



/* Address: 0x100209e6c | FUN_100209e6c */

void FUN_100209e6c(undefined8 param_1)

{
  FUN_10020a674();
  _swift_initStaticObject();
  DAT_101057808 = param_1;
  return;
}



/* Address: 0x100209e94 | FUN_100209e94 */

undefined8 * FUN_100209e94(void)

{
  if (DAT_100fb6740 != -1) {
    _swift_once(&DAT_100fb6740,FUN_100209e6c);
  }
  return &DAT_101057808;
}



/* Address: 0x100209ed4 | FUN_100209ed4 */

void FUN_100209ed4(void)

{
  _swift_initStaticObject();
  return;
}



/* Address: 0x100209ee4 | FUN_100209ee4 */

void FUN_100209ee4(undefined8 param_1)

{
  FUN_10020a674();
  _swift_initStaticObject();
  DAT_101057810 = param_1;
  return;
}



/* Address: 0x100209f0c | FUN_100209f0c */

undefined8 * FUN_100209f0c(void)

{
  if (DAT_100fb6790 != -1) {
    _swift_once(&DAT_100fb6790,FUN_100209ee4);
  }
  return &DAT_101057810;
}



/* Address: 0x100209f4c | FUN_100209f4c */

void FUN_100209f4c(void)

{
  _swift_initStaticObject();
  return;
}



/* Address: 0x100209f5c | FUN_100209f5c */

void FUN_100209f5c(undefined8 param_1)

{
  FUN_10020a674();
  _swift_initStaticObject();
  DAT_101057818 = param_1;
  return;
}



/* Address: 0x100209f84 | FUN_100209f84 */

undefined8 * FUN_100209f84(void)

{
  if (DAT_100fb67e0 != -1) {
    _swift_once(&DAT_100fb67e0,FUN_100209f5c);
  }
  return &DAT_101057818;
}



/* Address: 0x100209fc4 | FUN_100209fc4 */

void FUN_100209fc4(void)

{
  _swift_initStaticObject();
  return;
}



/* Address: 0x100209fd4 | FUN_100209fd4 */

void FUN_100209fd4(undefined8 param_1)

{
  FUN_10020a674();
  _swift_initStaticObject();
  DAT_101057820 = param_1;
  return;
}



/* Address: 0x100209ffc | FUN_100209ffc */

undefined8 * FUN_100209ffc(void)

{
  if (DAT_100fb6830 != -1) {
    _swift_once(&DAT_100fb6830,FUN_100209fd4);
  }
  return &DAT_101057820;
}



/* Address: 0x10020a03c | FUN_10020a03c */

void FUN_10020a03c(void)

{
  _swift_initStaticObject();
  return;
}



/* Address: 0x10020a04c | FUN_10020a04c */

void FUN_10020a04c(undefined8 param_1)

{
  FUN_10020a674();
  _swift_initStaticObject();
  DAT_101057828 = param_1;
  return;
}



/* Address: 0x10020a074 | FUN_10020a074 */

undefined8 * FUN_10020a074(void)

{
  if (DAT_100fb6880 != -1) {
    _swift_once(&DAT_100fb6880,FUN_10020a04c);
  }
  return &DAT_101057828;
}



/* Address: 0x10020a0b4 | FUN_10020a0b4 */

void FUN_10020a0b4(void)

{
  _swift_initStaticObject();
  return;
}



/* Address: 0x10020a0c4 | FUN_10020a0c4 */

void FUN_10020a0c4(undefined8 param_1)

{
  FUN_10020a674();
  _swift_initStaticObject();
  DAT_101057830 = param_1;
  return;
}



/* Address: 0x10020a0ec | FUN_10020a0ec */

undefined8 * FUN_10020a0ec(void)

{
  if (DAT_100fb68d0 != -1) {
    _swift_once(&DAT_100fb68d0,FUN_10020a0c4);
  }
  return &DAT_101057830;
}



/* Address: 0x10020a12c | FUN_10020a12c */

void FUN_10020a12c(void)

{
  _swift_initStaticObject();
  return;
}


