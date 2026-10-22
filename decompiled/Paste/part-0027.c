/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10004a168 | FUN_10004a168 */

void FUN_10004a168(undefined8 param_1,undefined8 param_2)

{
  Swift::MainActor::typeMetadataAccessor();
  FUN_1000582d0(FUN_10004baac,param_2,"Paste/FilterSuggestionsMenuScroller.swift",0x29,2,0x48);
  return;
}



/* Address: 0x10004a1c8 | FUN_10004a1c8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10004a1c8(long param_1)

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
              ("Paste/FilterSuggestionsMenuScroller.swift",0x29,1,0x48,UVar3.unknown,pMVar1);
  }
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 == 0) {
    _swift_release(pMVar2);
  }
  else {
    FUN_10004a288();
    _swift_release(pMVar2);
  }
  return;
}



/* Address: 0x10004a288 | FUN_10004a288 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10004a288(undefined8 param_1,double param_2)

{
  long lVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *self;
  ID IVar4;
  ID self_00;
  ulong uVar5;
  long unaff_x20;
  double extraout_d0;
  double dVar6;
  double extraout_d0_00;
  double dVar7;
  double extraout_d0_01;
  double extraout_d0_02;
  
  puVar3 = &_TtC5Paste29FilterSuggestionsMenuScroller::___lazy_storage___upScrollIndicator;
  FUN_1000494d4(&_TtC5Paste29FilterSuggestionsMenuScroller::___lazy_storage___upScrollIndicator,
                FUN_10020cb54,FUN_10004baf4,FUN_10004bafc);
  self = puVar3;
  FUN_1000493ec();
  IVar4 = objc_stub::documentView((ID)self);
  if (IVar4 == 0) {
    uVar5 = 1;
  }
  else {
    objc_stub::documentVisibleRect((ID)self);
    dVar6 = extraout_d0;
    _CGRectGetMaxY();
    objc_stub::bounds(IVar4);
    dVar7 = extraout_d0_00;
    _CGRectGetHeight();
    uVar5 = (ulong)(dVar7 <= dVar6);
  }
  objc_stub::setHidden_((ID)puVar3,uVar5);
  puVar3 = &_TtC5Paste29FilterSuggestionsMenuScroller::___lazy_storage___downScrollIndicator;
  FUN_1000494d4(&_TtC5Paste29FilterSuggestionsMenuScroller::___lazy_storage___downScrollIndicator,
                FUN_10020caa0,FUN_10004bac4,FUN_10004bacc);
  lVar1 = _TtC5Paste29FilterSuggestionsMenuScroller::___lazy_storage___scrollView;
  objc_stub::documentVisibleRect
            (*(ID *)(unaff_x20 +
                    _TtC5Paste29FilterSuggestionsMenuScroller::___lazy_storage___scrollView));
  objc_stub::setHidden_((ID)puVar3,(ulong)(param_2 <= 0.0));
  IVar4 = *(ID *)(unaff_x20 + lVar1);
  self_00 = objc_stub::documentView(IVar4);
  if (self_00 == 0) {
    bVar2 = false;
  }
  else {
    objc_stub::documentVisibleRect(IVar4);
    dVar6 = extraout_d0_01;
    _CGRectGetMaxY();
    objc_stub::bounds(self_00);
    dVar7 = extraout_d0_02;
    _CGRectGetHeight();
    bVar2 = dVar6 < dVar7;
  }
  objc_stub::documentVisibleRect(*(ID *)(unaff_x20 + lVar1));
  FUN_10004a994(bVar2,0.0 < param_2);
  return;
}



/* Address: 0x10004a418 | _TtC5Paste29FilterSuggestionsMenuScroller::initWithCoder: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC5Paste29FilterSuggestionsMenuScroller::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  char *pcVar4;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1000081a8();
  UVar3 = Swift::Actor::get_unownedExecutor();
  pcVar4 = (char *)UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar4 & 1) == 0) {
    pcVar4 = "Paste/FilterSuggestionsMenuScroller.swift";
    _swift_task_reportUnexpectedExecutor
              ("Paste/FilterSuggestionsMenuScroller.swift",0x29,1,0x4f,UVar3.unknown,pMVar1);
  }
  FUN_10004bb1c();
  _swift_release(pMVar2);
  return (ID)pcVar4;
}



/* Address: 0x10004a4c4 | FUN_10004a4c4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10004a4c4(void)

{
  ID self;
  long unaff_x20;
  long lVar1;
  
  _swift_getObjectType();
  lVar1 = *(long *)(unaff_x20 + _TtC5Paste29FilterSuggestionsMenuScroller::scrollObserver);
  if (lVar1 != 0) {
    _swift_unknownObjectRetain(lVar1);
    self = NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
    NSNotificationCenter::removeObserver_(self,lVar1);
    _swift_unknownObjectRelease(lVar1);
  }
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffc0,"dealloc");
  return;
}



/* Address: 0x10004a560 | _TtC5Paste29FilterSuggestionsMenuScroller::dealloc */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC5Paste29FilterSuggestionsMenuScroller::dealloc(ID param_1,SEL param_2)

{
  class_t *pcVar1;
  ID self;
  long lVar2;
  objc_super local_40;
  
  pcVar1 = (class_t *)param_1;
  _swift_getObjectType();
  lVar2 = *(long *)(param_1 + scrollObserver);
  if (lVar2 != 0) {
    _swift_unknownObjectRetain(lVar2);
    self = NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
    NSNotificationCenter::removeObserver_(self,lVar2);
    _swift_unknownObjectRelease(lVar2);
  }
  local_40.receiver = param_1;
  local_40.super_class = pcVar1;
  _objc_msgSendSuper2(&local_40,"dealloc");
  return;
}



/* Address: 0x10004a610 | _TtC5Paste29FilterSuggestionsMenuScroller::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC5Paste29FilterSuggestionsMenuScroller::_cxx_destruct(ID param_1,SEL param_2)

{
  FUN_100004550(*(undefined8 *)(param_1 + onTopIndicatorHovered),
                ((undefined8 *)(param_1 + onTopIndicatorHovered))[1]);
  FUN_100004550(*(undefined8 *)(param_1 + onBottomIndicatorHovered),
                ((undefined8 *)(param_1 + onBottomIndicatorHovered))[1]);
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + scrollObserver));
  return;
}



/* Address: 0x10004a6a0 | _TtC5Paste29FilterSuggestionsMenuScroller::fittingSize */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

CGSize _TtC5Paste29FilterSuggestionsMenuScroller::fittingSize(ID param_1,SEL param_2)

{
  class_t *pcVar1;
  MainActor *pMVar2;
  MainActor *pMVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  ID IVar6;
  double in_d0;
  double in_d1;
  CGSize CVar7;
  objc_super local_60;
  
  pcVar1 = (class_t *)param_1;
  _swift_getObjectType();
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  pMVar3 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  pMVar2 = pMVar3;
  FUN_1000081a8();
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/FilterSuggestionsMenuScroller.swift",0x29,1,0x59,UVar4.unknown,pMVar2);
  }
  local_60.receiver = param_1;
  local_60.super_class = pcVar1;
  IVar6 = _objc_msgSendSuper2(&local_60,"fittingSize");
  FUN_1000493ec();
  IVar6 = objc_stub::documentView(IVar6);
  if (IVar6 == 0) {
    _swift_release(pMVar3);
    in_d1 = 0.0;
  }
  else {
    objc_stub::fittingSize(IVar6);
    _swift_release(pMVar3);
  }
  CVar7.field1_0x8 = in_d1;
  CVar7.field0_0x0 = in_d0;
  return CVar7;
}



/* Address: 0x10004a7d0 | _TtC5Paste29FilterSuggestionsMenuScroller::viewDidMoveToWindow */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC5Paste29FilterSuggestionsMenuScroller::viewDidMoveToWindow(ID param_1,SEL param_2)

{
  class_t *pcVar1;
  MainActor *pMVar2;
  MainActor *pMVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  ID IVar6;
  objc_super local_50;
  
  pcVar1 = (class_t *)param_1;
  _swift_getObjectType();
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  pMVar3 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  pMVar2 = pMVar3;
  FUN_1000081a8();
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/FilterSuggestionsMenuScroller.swift",0x29,1,0x60,UVar4.unknown,pMVar2);
  }
  local_50.receiver = param_1;
  local_50.super_class = pcVar1;
  _objc_msgSendSuper2(&local_50,"viewDidMoveToWindow");
  IVar6 = objc_stub::window(param_1);
  if (IVar6 != 0) {
    objc_stub::layoutSubtreeIfNeeded(param_1);
    FUN_10004a288();
  }
  _swift_release(pMVar3);
  return;
}



/* Address: 0x10004a8c0 | _TtC5Paste29FilterSuggestionsMenuScroller::layout */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC5Paste29FilterSuggestionsMenuScroller::layout(ID param_1,SEL param_2)

{
  class_t *pcVar1;
  MainActor *pMVar2;
  MainActor *pMVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  objc_super local_50;
  
  pcVar1 = (class_t *)param_1;
  _swift_getObjectType();
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  pMVar3 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  pMVar2 = pMVar3;
  FUN_1000081a8();
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/FilterSuggestionsMenuScroller.swift",0x29,1,0x68,UVar4.unknown,pMVar2);
  }
  local_50.receiver = param_1;
  local_50.super_class = pcVar1;
  _objc_msgSendSuper2(&local_50,"layout");
  FUN_10004a288();
  _swift_release(pMVar3);
  return;
}



/* Address: 0x10004a994 | FUN_10004a994 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined8
FUN_10004a994(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulong param_5,ulong param_6)

{
  ulong self;
  ID self_00;
  undefined *puVar1;
  ID self_01;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  double extraout_d0;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  self = param_5;
  FUN_1000493ec();
  self_00 = objc_stub::layer(self);
  if (self_00 != 0) {
    objc_stub::bounds(*(ID *)(unaff_x20 +
                             _TtC5Paste29FilterSuggestionsMenuScroller::___lazy_storage___scrollView
                             ));
    if (((param_5 & 1) == 0) && ((param_6 & 1) == 0)) {
      objc_stub::setMask_(self_00,0);
      return 0;
    }
    puVar1 = &_OBJC_CLASS___CALayer;
    _objc_allocWithZone();
    self_01 = objc_stub::init((ID)puVar1);
    objc_stub::setFrame_(self_01,extraout_d0,param_2,param_3,param_4);
    dVar8 = 18.0;
    if ((param_5 & 1) == 0) {
      dVar8 = 0.0;
    }
    dVar9 = 18.0;
    if ((param_6 & 1) == 0) {
      dVar9 = 0.0;
    }
    puVar1 = &_OBJC_CLASS___CALayer;
    _objc_allocWithZone();
    IVar2 = objc_stub::init((ID)puVar1);
    dVar6 = extraout_d0;
    _CGRectGetWidth(extraout_d0,param_2,param_3,param_4);
    dVar7 = extraout_d0;
    _CGRectGetHeight(extraout_d0,param_2,param_3,param_4);
    objc_stub::setFrame_(IVar2,0,dVar8,dVar6,(dVar7 - dVar8) - dVar9);
    IVar3 = NSColor::whiteColor((ID)&_OBJC_CLASS___NSColor);
    IVar3 = NSColor::CGColor(IVar3);
    objc_stub::setBackgroundColor_(IVar2,IVar3);
    objc_stub::addSublayer_(self_01,IVar2);
    puVar1 = PTR___type_metadata_for_Swift_AnyObject_100eae0b8;
    if ((param_5 & 1) != 0) {
      puVar4 = &DAT_100fa6b80;
      FUN_1000037f0(&DAT_100fa6b80,&DAT_100c23760);
      _swift_initStackObject();
      *(undefined8 *)(puVar4 + 0x18) = 5;
      *(undefined8 *)(puVar4 + 0x10) = 2;
      IVar2 = NSColor::clearColor((ID)&_OBJC_CLASS___NSColor);
      *(ID *)(puVar4 + 0x20) = IVar2;
      IVar2 = NSColor::whiteColor((ID)&_OBJC_CLASS___NSColor);
      *(ID *)(puVar4 + 0x28) = IVar2;
      puVar5 = puVar4;
      FUN_10004ad10(0,extraout_d0,param_2,param_3,param_4,0x4032000000000000,puVar4);
      _swift_setDeallocating(puVar4);
      _swift_arrayDestroy(puVar4 + 0x20,*(undefined8 *)(puVar4 + 0x10),puVar1 + 8);
      objc_stub::addSublayer_(self_01,puVar5);
    }
    if ((param_6 & 1) != 0) {
      puVar4 = &DAT_100fa6b80;
      FUN_1000037f0(&DAT_100fa6b80,&DAT_100c23760);
      _swift_initStackObject();
      *(undefined8 *)(puVar4 + 0x18) = 5;
      *(undefined8 *)(puVar4 + 0x10) = 2;
      IVar2 = NSColor::whiteColor((ID)&_OBJC_CLASS___NSColor);
      *(ID *)(puVar4 + 0x20) = IVar2;
      IVar2 = NSColor::clearColor((ID)&_OBJC_CLASS___NSColor);
      *(ID *)(puVar4 + 0x28) = IVar2;
      dVar8 = extraout_d0;
      _CGRectGetHeight(extraout_d0,param_2,param_3,param_4);
      puVar5 = puVar4;
      FUN_10004ad10(dVar8 + -18.0,extraout_d0,param_2,param_3,param_4,0x4032000000000000,puVar4);
      _swift_setDeallocating(puVar4);
      _swift_arrayDestroy(puVar4 + 0x20,*(undefined8 *)(puVar4 + 0x10),puVar1 + 8);
      objc_stub::addSublayer_(self_01,puVar5);
    }
    objc_stub::setMask_(self_00,self_01);
  }
  return 0;
}



/* Address: 0x10004ad10 | FUN_10004ad10 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

ID FUN_10004ad10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,_ArrayBuffer param_7)

{
  _CocoaArrayWrapper _Var1;
  ulong uVar2;
  code *pcVar3;
  undefined *puVar4;
  ID self;
  MainActor *this;
  MainActor *self_00;
  MainActor *pMVar5;
  MainActor *pMVar6;
  UnownedSerialExecutor UVar7;
  UnownedSerialExecutor UVar8;
  ID IVar9;
  undefined8 uVar10;
  NSArray *pNVar11;
  MainActor *pMVar12;
  MainActor *pMVar13;
  ID local_b8 [3];
  undefined8 local_a0;
  undefined *local_98;
  
  puVar4 = &_OBJC_CLASS___CAGradientLayer;
  _objc_allocWithZone();
  self = objc_stub::init((ID)puVar4);
  _CGRectGetWidth(param_2,param_3,param_4,param_5);
  objc_stub::setFrame_(self,0,param_1,param_2,param_6);
  if ((ulong)param_7.unknown >> 0x3e == 0) {
    pMVar12 = *(MainActor **)(((ulong)param_7.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = param_7.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < param_7.unknown) {
      _Var1.unknown = param_7.unknown;
    }
    pMVar12 = (MainActor *)Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (pMVar12 != (MainActor *)0x0) {
    local_98 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_1000717c4(0,(ulong)pMVar12 & ((long)pMVar12 >> 0x3f ^ 0xffffffffffffffffU),0);
    puVar4 = local_98;
    if ((long)pMVar12 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10004af98);
      (*pcVar3)();
    }
    this = Swift::MainActor::typeMetadataAccessor();
    pMVar13 = (MainActor *)0x0;
    do {
      if (((ulong)param_7.unknown & 0xc000000000000001) == 0) {
        self_00 = *(MainActor **)(param_7.unknown + (long)pMVar13 * 8 + 0x20);
      }
      else {
        self_00 = pMVar13;
        Swift::_ArrayBuffer::__getElementSlowPath((__int64)pMVar13,param_7);
      }
      pMVar5 = Swift::MainActor::get_shared(this,self_00);
      pMVar6 = pMVar5;
      FUN_1000081a8();
      UVar7 = Swift::Actor::get_unownedExecutor();
      UVar8 = UVar7;
      _swift_task_isCurrentExecutor();
      if (((ulong)UVar8.unknown & 1) == 0) {
        _swift_task_reportUnexpectedExecutor
                  ("Paste/FilterSuggestionsMenuScroller.swift",0x29,1,0x88,UVar7.unknown,pMVar6);
      }
      IVar9 = objc_stub::CGColor((ID)self_00);
      uVar10 = 0;
      FUN_100003b44();
      local_a0 = uVar10;
      _swift_release(pMVar5);
      uVar2 = *(ulong *)(puVar4 + 0x10);
      local_b8[0] = IVar9;
      local_98 = puVar4;
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar2) {
        FUN_1000717c4(1 < *(ulong *)(puVar4 + 0x18),uVar2 + 1,1);
      }
      puVar4 = local_98;
      pMVar13 = pMVar13 + 1;
      *(ulong *)(local_98 + 0x10) = uVar2 + 1;
      FUN_100011080(local_b8,local_98 + uVar2 * 0x20 + 0x20);
    } while (pMVar12 != pMVar13);
  }
  pNVar11 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(puVar4);
  objc_stub::setColors_(self,pNVar11);
  objc_stub::setStartPoint_(self,0x3fe0000000000000,0);
  objc_stub::setEndPoint_(self,0x3fe0000000000000,0x3ff0000000000000);
  return self;
}



/* Address: 0x10004af98 | _TtC5Paste29FilterSuggestionsMenuScroller::initWithFrame: */

/* Function Stack Size: 0x30 bytes */

ID _TtC5Paste29FilterSuggestionsMenuScroller::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  FUN_10004b92c(param_1,param_2,6,"Paste.FilterSuggestionsMenuScroller",0x23,
                param_3.field1_0x10.field1_0x8);
  return param_1;
}



/* Address: 0x10004afac | FUN_10004afac */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10004afac(void)

{
  return ZEXT816(0x100f90ac8);
}



/* Address: 0x10004afcc | FUN_10004afcc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10004afcc(void)

{
  long lVar1;
  ID IVar2;
  undefined *self;
  long unaff_x20;
  
  lVar1 = _TtC5PasteP33_440D5F9337F1EB13F5FFF548CA40181515ScrollIndicator::
          ___lazy_storage___imageView;
  IVar2 = *(ID *)(unaff_x20 +
                 _TtC5PasteP33_440D5F9337F1EB13F5FFF548CA40181515ScrollIndicator::
                 ___lazy_storage___imageView);
  if (IVar2 == 0) {
    self = &_OBJC_CLASS___NSImageView;
    _objc_allocWithZone();
    IVar2 = objc_stub::init((ID)self);
    *(ID *)(unaff_x20 + lVar1) = IVar2;
  }
  return IVar2;
}



/* Address: 0x10004b038 | FUN_10004b038 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10004b038(ID param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined1 auStack_a0 [16];
  ID local_90;
  
  _swift_getObjectType();
  *(undefined8 *)
   (unaff_x20 +
   _TtC5PasteP33_440D5F9337F1EB13F5FFF548CA40181515ScrollIndicator::___lazy_storage___imageView) = 0
  ;
  *(undefined8 *)
   (unaff_x20 + _TtC5PasteP33_440D5F9337F1EB13F5FFF548CA40181515ScrollIndicator::trackingArea) = 0;
  *(undefined8 *)
   (unaff_x20 + _TtC5PasteP33_440D5F9337F1EB13F5FFF548CA40181515ScrollIndicator::scrollTimer) = 0;
  *(undefined1 *)
   (unaff_x20 + _TtC5PasteP33_440D5F9337F1EB13F5FFF548CA40181515ScrollIndicator::isMouseInside) = 0;
  puVar1 = (undefined8 *)
           (unaff_x20 + _TtC5PasteP33_440D5F9337F1EB13F5FFF548CA40181515ScrollIndicator::canScroll);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)
           (unaff_x20 + _TtC5PasteP33_440D5F9337F1EB13F5FFF548CA40181515ScrollIndicator::onScroll);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  _swift_retain(param_4);
  _swift_retain(param_6);
  IVar4 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff80,"initWithFrame:",0,0,0,0);
  IVar5 = NSImageSymbolConfiguration::configurationWithPointSize_weight_
                    ((ID)&_OBJC_CLASS___NSImageSymbolConfiguration,0x4028000000000000,
                     *(undefined8 *)PTR__NSFontWeightMedium_100ea90b0);
  IVar7 = IVar5;
  FUN_10004afcc();
  FUN_10000ec2c(0,&DAT_100fa8680,&PTR__OBJC_CLASS___NSImage_100f8d6b8);
  _swift_bridgeObjectRetain(param_2);
  IVar6 = param_1;
  FUN_1000f653c(param_1,param_2);
  if (IVar6 == 0) {
    _swift_bridgeObjectRelease(param_2);
    param_1 = 0xd000000000000013;
    FUN_1000f653c(0xd000000000000013,0x8000000100d8de20);
    if (param_1 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10004b2e0);
      (*pcVar3)();
    }
  }
  else {
    FUN_1000f653c(param_1,param_2);
    if (param_1 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10004b1a4);
      (*pcVar3)();
    }
  }
  IVar6 = objc_stub::imageWithSymbolConfiguration_(param_1,IVar5);
  objc_stub::setImage_(IVar7,IVar6);
  lVar2 = _TtC5PasteP33_440D5F9337F1EB13F5FFF548CA40181515ScrollIndicator::
          ___lazy_storage___imageView;
  IVar6 = *(ID *)(IVar4 + _TtC5PasteP33_440D5F9337F1EB13F5FFF548CA40181515ScrollIndicator::
                          ___lazy_storage___imageView);
  IVar7 = NSColor::secondaryLabelColor((ID)&_OBJC_CLASS___NSColor);
  objc_stub::setContentTintColor_(IVar6,IVar7);
  uVar8 = *(undefined8 *)(IVar4 + lVar2);
  local_90 = IVar4;
  FUN_1001fa09c(uVar8,FUN_10004baec,auStack_a0);
  _swift_release(param_4);
  _swift_release(param_6);
  _swift_bridgeObjectRelease(uVar8);
  return IVar4;
}



/* Address: 0x10004b2e0 | FUN_10004b2e0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_10004b2e0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long local_70 [3];
  long local_58;
  undefined **ppuStack_50;
  long local_48;
  
  lVar1 = param_1;
  _swift_getObjectType();
  lVar2 = lVar1;
  FUN_10004afcc();
  ppuStack_50 = &PTR_PTR_100ec00e8;
  uVar3 = 0;
  local_70[0] = param_1;
  local_58 = lVar1;
  local_48 = lVar2;
  FUN_10000ec2c(0,&DAT_100fa8850,&PTR__OBJC_CLASS___NSImageView_100f8d6a0);
  plVar4 = local_70;
  FUN_1001f9a0c(0,0,plVar4,uVar3,&PTR_PTR_100ec00e8);
  FUN_100004594(local_70);
  local_70[0] = *(long *)(param_1 +
                         _TtC5PasteP33_440D5F9337F1EB13F5FFF548CA40181515ScrollIndicator::
                         ___lazy_storage___imageView);
  FUN_1001f9e3c(0x4028000000000000,0x4028000000000000,uVar3,&PTR_PTR_100ec00e8);
  puVar5 = &DAT_100fa8830;
  FUN_1000037f0(&DAT_100fa8830,&DAT_100c24a20);
  _swift_initStackObject();
  *(undefined8 *)(puVar5 + 0x18) = 4;
  *(undefined8 *)(puVar5 + 0x10) = 2;
  puVar6 = &DAT_100fa8840;
  FUN_1000037f0(&DAT_100fa8840,&DAT_100c237d0);
  *(undefined **)(puVar5 + 0x38) = puVar6;
  *(undefined ***)(puVar5 + 0x40) = &PTR_PTR_100ec00b8;
  *(long **)(puVar5 + 0x20) = plVar4;
  *(undefined **)(puVar5 + 0x60) = puVar6;
  *(undefined ***)(puVar5 + 0x68) = &PTR_PTR_100ec00b8;
  *(undefined8 *)(puVar5 + 0x48) = uVar3;
  puVar7 = puVar5;
  FUN_1001f8d60(puVar5);
  _swift_setDeallocating(puVar5);
  uVar3 = *(undefined8 *)(puVar5 + 0x10);
  puVar6 = &DAT_100fa6bc0;
  FUN_1000037f0(&DAT_100fa6bc0,&DAT_100c24a30);
  _swift_arrayDestroy(puVar5 + 0x20,uVar3,puVar6);
  return puVar7;
}



/* Address: 0x10004b458 | _TtC5PasteP33_440D5F9337F1EB13F5FFF548CA40181515ScrollIndicator::initWithCoder: */

/* Function Stack Size: 0x18 bytes */

ID _TtC5PasteP33_440D5F9337F1EB13F5FFF548CA40181515ScrollIndicator::initWithCoder_
             (ID param_1,SEL param_2,ID param_3)

{
  code *pcVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  String SVar5;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  FUN_1000081a8();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/FilterSuggestionsMenuScroller.swift",0x29,1,0xc0,UVar3.unknown,pMVar2);
  }
  *(undefined8 *)(param_1 + ___lazy_storage___imageView) = 0;
  *(undefined8 *)(param_1 + trackingArea) = 0;
  *(undefined8 *)(param_1 + scrollTimer) = 0;
  *(undefined1 *)(param_1 + isMouseInside) = 0;
  SVar5.bridgeObject = (void *)0x2;
  SVar5.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar5,(StaticString)0xd000000000000025,0x8000000100d8dc00,
             0xd8e830);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10004b544);
  (*pcVar1)();
}



/* Address: 0x10004b544 | FUN_10004b544 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
FUN_10004b544(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *self;
  ID IVar2;
  ID unaff_x20;
  undefined8 extraout_d0;
  
  _swift_getObjectType();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffa0,"updateTrackingAreas");
  lVar1 = _TtC5PasteP33_440D5F9337F1EB13F5FFF548CA40181515ScrollIndicator::trackingArea;
  if (*(long *)(unaff_x20 +
               _TtC5PasteP33_440D5F9337F1EB13F5FFF548CA40181515ScrollIndicator::trackingArea) != 0)
  {
    objc_stub::removeTrackingArea_(unaff_x20);
  }
  objc_stub::bounds(unaff_x20);
  self = &_OBJC_CLASS___NSTrackingArea;
  _objc_allocWithZone();
  IVar2 = objc_stub::initWithRect_options_owner_userInfo_
                    ((ID)self,extraout_d0,param_2,param_3,param_4,0x83);
  *(ID *)(unaff_x20 + lVar1) = IVar2;
  if (IVar2 != 0) {
    objc_stub::addTrackingArea_(unaff_x20,IVar2);
  }
  return 0;
}



/* Address: 0x10004b624 | _TtC5PasteP33_440D5F9337F1EB13F5FFF548CA40181515ScrollIndicator::updateTrackingAreas */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC5PasteP33_440D5F9337F1EB13F5FFF548CA40181515ScrollIndicator::updateTrackingAreas
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
              ("Paste/FilterSuggestionsMenuScroller.swift",0x29,1,0xc4,UVar3.unknown,pMVar1);
  }
  FUN_10004b544(param_1);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x10004b6c0 | _TtC5PasteP33_440D5F9337F1EB13F5FFF548CA40181515ScrollIndicator::mouseEntered: */

/* Function Stack Size: 0x18 bytes */

void _TtC5PasteP33_440D5F9337F1EB13F5FFF548CA40181515ScrollIndicator::mouseEntered_
               (ID param_1,SEL param_2,ID param_3)

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
              ("Paste/FilterSuggestionsMenuScroller.swift",0x29,1,0xd7,UVar3.unknown,pMVar1);
  }
  *(undefined1 *)(param_1 + isMouseInside) = 1;
  _swift_release(pMVar2);
  return;
}



/* Address: 0x10004b750 | FUN_10004b750 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10004b750(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    pcVar1 = *(code **)(param_1 +
                       _TtC5PasteP33_440D5F9337F1EB13F5FFF548CA40181515ScrollIndicator::onScroll);
    uVar2 = ((undefined8 *)
            (param_1 + _TtC5PasteP33_440D5F9337F1EB13F5FFF548CA40181515ScrollIndicator::onScroll))
            [1];
    _swift_retain(uVar2);
    (*pcVar1)(0);
    _swift_release(uVar2);
    return;
  }
  return;
}



/* Address: 0x10004b7b8 | _TtC5PasteP33_440D5F9337F1EB13F5FFF548CA40181515ScrollIndicator::mouseMoved: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC5PasteP33_440D5F9337F1EB13F5FFF548CA40181515ScrollIndicator::mouseMoved_
               (ID param_1,SEL param_2,ID param_3)

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
              ("Paste/FilterSuggestionsMenuScroller.swift",0x29,1,0xdb,UVar3.unknown,pMVar1);
  }
  FUN_10004bbd0(param_1);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x10004b874 | _TtC5PasteP33_440D5F9337F1EB13F5FFF548CA40181515ScrollIndicator::mouseExited: */

/* Function Stack Size: 0x18 bytes */

void _TtC5PasteP33_440D5F9337F1EB13F5FFF548CA40181515ScrollIndicator::mouseExited_
               (ID param_1,SEL param_2,ID param_3)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  undefined8 uVar5;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1000081a8();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/FilterSuggestionsMenuScroller.swift",0x29,1,0xe3,UVar3.unknown,pMVar1);
  }
  *(undefined1 *)(param_1 + isMouseInside) = 0;
  uVar5 = *(undefined8 *)(param_1 + scrollTimer);
  *(undefined8 *)(param_1 + scrollTimer) = 0;
  _swift_release(pMVar2);
  _swift_release(uVar5);
  return;
}



/* Address: 0x10004b918 | _TtC5PasteP33_440D5F9337F1EB13F5FFF548CA40181515ScrollIndicator::initWithFrame: */

/* Function Stack Size: 0x30 bytes */

ID _TtC5PasteP33_440D5F9337F1EB13F5FFF548CA40181515ScrollIndicator::initWithFrame_
             (ID param_1,SEL param_2,CGRect param_3)

{
  FUN_10004b92c(param_1,param_2,0xa7,"Paste.ScrollIndicator",0x15,param_3.field1_0x10.field1_0x8);
  return param_1;
}



/* Address: 0x10004b92c | FUN_10004b92c */

void FUN_10004b92c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
              ("Paste/FilterSuggestionsMenuScroller.swift",0x29,1,param_3,UVar3.unknown,pMVar2);
  }
  __swift_stdlib_reportUnimplementedInitializer(param_4,param_5,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10004b9c4);
  (*pcVar1)();
}



/* Address: 0x10004b9c4 | _TtC5PasteP33_440D5F9337F1EB13F5FFF548CA40181515ScrollIndicator::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC5PasteP33_440D5F9337F1EB13F5FFF548CA40181515ScrollIndicator::_cxx_destruct
               (ID param_1,SEL param_2)

{
  _swift_release(*(undefined8 *)(param_1 + scrollTimer));
  _swift_release(*(undefined8 *)(param_1 + onScroll + 8));
  _swift_release(*(undefined8 *)(param_1 + canScroll + 8));
  return;
}



/* Address: 0x10004ba34 | FUN_10004ba34 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10004ba34(void)

{
  return ZEXT816(0x100f90bb8);
}



/* Address: 0x10004ba54 | FUN_10004ba54 */

void FUN_10004ba54(void)

{
  long unaff_x20;
  
  FUN_100049a3c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x10004ba5c | FUN_10004ba5c */

void FUN_10004ba5c(void)

{
  long unaff_x20;
  
  FUN_100049cbc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x10004ba64 | FUN_10004ba64 */

void FUN_10004ba64(void)

{
  long unaff_x20;
  
  _swift_unknownObjectWeakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x10004ba88 | FUN_10004ba88 */

void FUN_10004ba88(void)

{
  FUN_10004a168();
  return;
}



/* Address: 0x10004ba90 | FUN_10004ba90 */

void FUN_10004ba90(long param_1,long param_2)

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



/* Address: 0x10004baa4 | FUN_10004baa4 */

void FUN_10004baa4(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x10004baac | FUN_10004baac */

void FUN_10004baac(void)

{
  FUN_10004a1c8();
  return;
}



/* Address: 0x10004bac4 | FUN_10004bac4 */

void FUN_10004bac4(void)

{
  FUN_1000495d8();
  return;
}



/* Address: 0x10004bacc | FUN_10004bacc */

void FUN_10004bacc(void)

{
  FUN_100013e74();
  return;
}



/* Address: 0x10004baec | FUN_10004baec */

void FUN_10004baec(void)

{
  long unaff_x20;
  
  FUN_10004b2e0(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x10004baf4 | FUN_10004baf4 */

void FUN_10004baf4(void)

{
  FUN_10004934c();
  return;
}



/* Address: 0x10004bafc | FUN_10004bafc */

void FUN_10004bafc(void)

{
  FUN_100013e74();
  return;
}



/* Address: 0x10004bb1c | FUN_10004bb1c */

void FUN_10004bb1c(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  long unaff_x20;
  String SVar3;
  
  puVar1 = (undefined8 *)
           (unaff_x20 + _TtC5Paste29FilterSuggestionsMenuScroller::onTopIndicatorHovered);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)
           (unaff_x20 + _TtC5Paste29FilterSuggestionsMenuScroller::onBottomIndicatorHovered);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _TtC5Paste29FilterSuggestionsMenuScroller::scrollObserver) = 0;
  *(undefined8 *)
   (unaff_x20 + _TtC5Paste29FilterSuggestionsMenuScroller::___lazy_storage___upScrollIndicator) = 0;
  *(undefined8 *)
   (unaff_x20 + _TtC5Paste29FilterSuggestionsMenuScroller::___lazy_storage___downScrollIndicator) =
       0;
  *(undefined8 *)
   (unaff_x20 + _TtC5Paste29FilterSuggestionsMenuScroller::___lazy_storage___backgroundView) = 0;
  *(undefined8 *)
   (unaff_x20 + _TtC5Paste29FilterSuggestionsMenuScroller::___lazy_storage___scrollView) = 0;
  SVar3.bridgeObject = (void *)0x2;
  SVar3.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar3,(StaticString)0xd000000000000025,0x8000000100d8dc00,
             0xd8e830);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10004bbd0);
  (*pcVar2)();
}



/* Address: 0x10004bbd0 | FUN_10004bbd0 */

void FUN_10004bbd0(ulong param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  if ((*(char *)(unaff_x20 +
                _TtC5PasteP33_440D5F9337F1EB13F5FFF548CA40181515ScrollIndicator::isMouseInside) ==
       '\x01') &&
     ((**(code **)(unaff_x20 +
                  _TtC5PasteP33_440D5F9337F1EB13F5FFF548CA40181515ScrollIndicator::canScroll))(),
     lVar1 = _TtC5PasteP33_440D5F9337F1EB13F5FFF548CA40181515ScrollIndicator::scrollTimer,
     (param_1 & 1) != 0)) {
    if (*(long *)(unaff_x20 +
                 _TtC5PasteP33_440D5F9337F1EB13F5FFF548CA40181515ScrollIndicator::scrollTimer) == 0)
    {
      puVar2 = &DAT_100eb1cd0;
      _swift_allocObject(&DAT_100eb1cd0,0x18,7);
      _swift_unknownObjectWeakInit(puVar2 + 0x10);
      uVar3 = 0;
      FUN_100385b1c(0);
      _swift_allocObject();
      uVar4 = 1;
      FUN_100385984(0x3fb3333333333333,1,FUN_10004bcac,puVar2,uVar3);
      uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
      *(undefined8 *)(unaff_x20 + lVar1) = uVar4;
      _swift_release(uVar3);
      return;
    }
  }
  return;
}



/* Address: 0x10004bcac | FUN_10004bcac */

void FUN_10004bcac(void)

{
  FUN_10004b750();
  return;
}



/* Address: 0x10004bcb4 | thunk_FUN_10004ba64 */

void thunk_FUN_10004ba64(void)

{
  FUN_10004ba64();
  return;
}



/* Address: 0x10004bcb8 | FUN_10004bcb8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long * FUN_10004bcb8(void)

{
  long lVar1;
  code *pcVar2;
  byte bVar3;
  undefined8 uVar4;
  LocalizedStringResource LVar5;
  char *pcVar6;
  undefined8 *puVar7;
  char *pcVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  void *pvVar13;
  void *pvVar14;
  long unaff_x20;
  char *pcVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  String SVar22;
  String SVar23;
  long alStack_100 [4];
  undefined1 auStack_e0 [8];
  char *local_d8;
  String local_d0;
  char *local_c0;
  void *pvStack_b8;
  long local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  uVar4 = 0;
  FUN_10000ec2c(0,&DAT_100fa8ac0,&PTR__OBJC_CLASS___NSMenu_100f8d780);
  FUN_10021b6e8();
  LVar5 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  lVar17 = *(long *)(*(long *)(LVar5.unknown + -8) + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar1 = -(lVar17 + 0xfU & 0xfffffffffffffff0);
  LVar5.unknown = auStack_e0 + lVar1;
  FUN_1001c0488(LVar5.unknown);
  SVar22 = (extension_Foundation)::Swift::String::init(LVar5);
  pcVar6 = SVar22.str;
  puVar7 = (undefined8 *)0x0;
  FUN_10000ec2c(0,&DAT_100fa8680,&PTR__OBJC_CLASS___NSImage_100f8d6b8);
  FUN_10020d1fc();
  pcVar15 = (char *)*puVar7;
  uVar18 = puVar7[1];
  _swift_bridgeObjectRetain_n(uVar18,2);
  pcVar8 = pcVar15;
  FUN_1000f653c(pcVar15,uVar18);
  if (pcVar8 == (char *)0x0) {
    _swift_bridgeObjectRelease(uVar18);
    pcVar15 = (char *)0xd000000000000013;
    FUN_1000f653c(0xd000000000000013,0x8000000100d8de20);
    if (pcVar15 == (char *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10004c6a4);
      (*pcVar2)();
    }
  }
  else {
    FUN_1000f653c(pcVar15,uVar18);
    if (pcVar15 == (char *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10004bdac);
      (*pcVar2)();
    }
  }
  bVar3 = Swift::_stdlib_isOSVersionAtLeast(0x1a,0,0);
  if ((bVar3 & 1) == 0) {
    pcVar15 = (char *)0x0;
  }
  _swift_retain();
  *(long *)((long)alStack_100 + lVar1 + 8) = unaff_x20;
  *(undefined8 *)((long)alStack_100 + lVar1 + 0x10) = uVar4;
  *(code **)((long)alStack_100 + lVar1) = FUN_10004e59c;
  pvVar14 = (void *)0x0;
  FUN_10021bafc(pcVar6,SVar22.bridgeObject,pcVar15,0,0,0xe000000000000000,0,0);
  _swift_bridgeObjectRelease(SVar22.bridgeObject);
  _swift_release();
  FUN_10021b7b4();
  uVar20 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_88 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar21 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_78 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar18 = *(undefined8 *)(unaff_x20 + 0x40);
  local_d8 = pcVar6;
  local_a0 = uVar4;
  uStack_98 = uVar20;
  local_90 = uVar21;
  local_80 = uVar19;
  local_70 = uVar18;
  _swift_retain(uVar4);
  _swift_retain(uVar20);
  _swift_retain(uVar21);
  _swift_retain(uVar19);
  _swift_retain(uVar18);
  FUN_1000037f0(&DAT_100fa8320,&DAT_100c25378);
  FUN_1002ca7e0(&local_d0);
  _swift_release(uVar18);
  _swift_release(uVar19);
  _swift_release(uVar21);
  _swift_release(uVar20);
  _swift_release(uVar4);
  if (local_d0.bridgeObject != (void *)0x0) {
    local_c0 = local_d0.str;
    pvStack_b8 = local_d0.bridgeObject;
    pcVar15 = &DAT_100fa81f0;
    FUN_1000037f0(&DAT_100fa81f0,&DAT_100c2ae00);
    FUN_100357f60(&local_a8,FUN_10004e630,&local_d0);
    _swift_bridgeObjectRelease();
    if ((local_a8 != 0) && (FUN_100328f38(), ((ulong)local_d0.bridgeObject & 1) != 0)) {
      (*(code *)PTR____chkstk_darwin_100ea82c0)(0);
      FUN_1001c5518(LVar5.unknown + -(lVar17 + 0xfU & 0xfffffffffffffff0));
      SVar22 = (extension_Foundation)::Swift::String::init
                         ((LocalizedStringResource)
                          (LVar5.unknown + -(lVar17 + 0xfU & 0xfffffffffffffff0)));
      pcVar6 = SVar22.str;
      pcVar8 = pcVar6;
      FUN_10020d948();
      pcVar15 = *(char **)pcVar8;
      uVar18 = *(undefined8 *)(pcVar8 + 8);
      _swift_bridgeObjectRetain_n(uVar18,2);
      pcVar8 = pcVar15;
      FUN_1000f653c(pcVar15,uVar18);
      if (pcVar8 == (char *)0x0) {
        _swift_bridgeObjectRelease(uVar18);
        pcVar15 = (char *)0xd000000000000013;
        FUN_1000f653c(0xd000000000000013,0x8000000100d8de20);
        if (pcVar15 == (char *)0x0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10004c6bc);
          (*pcVar2)();
        }
      }
      else {
        FUN_1000f653c(pcVar15,uVar18);
        if (pcVar15 == (char *)0x0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10004bff8);
          (*pcVar2)();
        }
      }
      if ((bVar3 & 1) == 0) {
        pcVar15 = (char *)0x0;
      }
      _swift_retain();
      pcVar8 = local_d8;
      *(long *)((long)alStack_100 + lVar1 + 8) = unaff_x20;
      *(char **)((long)alStack_100 + lVar1 + 0x10) = pcVar8;
      *(code **)((long)alStack_100 + lVar1) = FUN_10004e638;
      pvVar14 = (void *)0x0;
      FUN_10021bafc(pcVar6,SVar22.bridgeObject,pcVar15,0,0x6e,0xe100000000000000,0x100000,0);
      _swift_bridgeObjectRelease(SVar22.bridgeObject);
      _swift_release();
      local_d8 = pcVar6;
    }
  }
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  FUN_1001c64a4(LVar5.unknown + -(lVar17 + 0xfU & 0xfffffffffffffff0));
  local_d0 = (extension_Foundation)::Swift::String::init
                       ((LocalizedStringResource)
                        (LVar5.unknown + -(lVar17 + 0xfU & 0xfffffffffffffff0)));
  plVar12 = local_d0.bridgeObject;
  _swift_bridgeObjectRetain(plVar12);
  SVar22.bridgeObject = (void *)0xe300000000000000;
  SVar22.str = (char *)0x2e2e2e;
  SVar23.bridgeObject = pvVar14;
  SVar23.str = pcVar15;
  Swift::String::append(SVar22,SVar23);
  _swift_bridgeObjectRelease();
  pcVar15 = local_d0.str;
  pvVar14 = local_d0.bridgeObject;
  FUN_10020d064();
  lVar16 = *plVar12;
  lVar11 = plVar12[1];
  _swift_bridgeObjectRetain_n(lVar11,2);
  lVar9 = lVar16;
  FUN_1000f653c(lVar16,lVar11);
  if (lVar9 == 0) {
    _swift_bridgeObjectRelease(lVar11);
    lVar16 = -0x2fffffffffffffed;
    FUN_1000f653c(0xd000000000000013,0x8000000100d8de20);
    if (lVar16 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10004c6a8);
      (*pcVar2)();
    }
  }
  else {
    FUN_1000f653c(lVar16,lVar11);
    if (lVar16 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10004c158);
      (*pcVar2)();
    }
  }
  if ((bVar3 & 1) == 0) {
    lVar16 = 0;
  }
  _swift_retain();
  pcVar8 = local_d8;
  *(long *)((long)alStack_100 + lVar1 + 8) = unaff_x20;
  *(char **)((long)alStack_100 + lVar1 + 0x10) = pcVar8;
  *(code **)((long)alStack_100 + lVar1) = FUN_10004e5c8;
  FUN_10021bafc(pcVar15,pvVar14,lVar16,0,0x2c,0xe100000000000000,0x100000,0);
  _swift_bridgeObjectRelease(pvVar14);
  _swift_release();
  FUN_10021b7b4(pcVar15);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(0);
  FUN_1001c5198(LVar5.unknown + -(lVar17 + 0xfU & 0xfffffffffffffff0));
  SVar22 = (extension_Foundation)::Swift::String::init
                     ((LocalizedStringResource)
                      (LVar5.unknown + -(lVar17 + 0xfU & 0xfffffffffffffff0)));
  plVar10 = (long *)SVar22.str;
  plVar12 = plVar10;
  FUN_10020d770();
  lVar16 = *plVar12;
  lVar11 = plVar12[1];
  _swift_bridgeObjectRetain_n(lVar11,2);
  lVar9 = lVar16;
  FUN_1000f653c(lVar16,lVar11);
  if (lVar9 == 0) {
    _swift_bridgeObjectRelease(lVar11);
    lVar16 = -0x2fffffffffffffed;
    FUN_1000f653c(0xd000000000000013,0x8000000100d8de20);
    if (lVar16 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10004c6ac);
      (*pcVar2)();
    }
  }
  else {
    FUN_1000f653c(lVar16,lVar11);
    if (lVar16 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10004c298);
      (*pcVar2)();
    }
  }
  if ((bVar3 & 1) == 0) {
    lVar16 = 0;
  }
  lVar11 = lVar16;
  FUN_10004d380();
  FUN_10021b998(plVar10,SVar22.bridgeObject,lVar16,lVar11,pcVar15);
  _swift_bridgeObjectRelease(SVar22.bridgeObject);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(0);
  FUN_1001c56b8(LVar5.unknown + -(lVar17 + 0xfU & 0xfffffffffffffff0));
  SVar22 = (extension_Foundation)::Swift::String::init
                     ((LocalizedStringResource)
                      (LVar5.unknown + -(lVar17 + 0xfU & 0xfffffffffffffff0)));
  pvVar14 = SVar22.bridgeObject;
  plVar12 = (long *)SVar22.str;
  FUN_10020c8d8();
  lVar16 = *plVar12;
  lVar11 = plVar12[1];
  _swift_bridgeObjectRetain_n(lVar11,2);
  lVar9 = lVar16;
  FUN_1000f653c(lVar16,lVar11);
  if (lVar9 == 0) {
    _swift_bridgeObjectRelease(lVar11);
    lVar16 = -0x2fffffffffffffed;
    FUN_1000f653c(0xd000000000000013,0x8000000100d8de20);
    if (lVar16 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10004c6b0);
      (*pcVar2)();
    }
  }
  else {
    FUN_1000f653c(lVar16,lVar11);
    if (lVar16 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10004c3a8);
      (*pcVar2)();
    }
  }
  if ((bVar3 & 1) == 0) {
    lVar16 = 0;
  }
  _swift_retain();
  *(long *)((long)alStack_100 + lVar1 + 8) = unaff_x20;
  *(long **)((long)alStack_100 + lVar1 + 0x10) = plVar10;
  *(code **)((long)alStack_100 + lVar1) = FUN_10004e610;
  FUN_10021bafc(SVar22.str,pvVar14,lVar16,0,0,0xe000000000000000,0,0);
  pvVar13 = SVar22.bridgeObject;
  pcVar15 = SVar22.str;
  _swift_bridgeObjectRelease(pvVar14);
  _swift_release();
  FUN_10021b7b4(pcVar15);
  uVar18 = 0;
  FUN_1000da768(&local_d0);
  plVar12 = (long *)local_d0.str;
  FUN_1000050c0();
  _swift_release();
  FUN_10020d5b8();
  lVar16 = *plVar12;
  lVar11 = plVar12[1];
  _swift_bridgeObjectRetain_n(lVar11,2);
  lVar9 = lVar16;
  FUN_1000f653c(lVar16,lVar11);
  if (lVar9 == 0) {
    _swift_bridgeObjectRelease(lVar11);
    lVar16 = -0x2fffffffffffffed;
    FUN_1000f653c(0xd000000000000013,0x8000000100d8de20);
    if (lVar16 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10004c6b4);
      (*pcVar2)();
    }
  }
  else {
    FUN_1000f653c(lVar16,lVar11);
    if (lVar16 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10004c4cc);
      (*pcVar2)();
    }
  }
  if ((bVar3 & 1) == 0) {
    lVar16 = 0;
  }
  lVar11 = lVar16;
  FUN_10004c6bc();
  FUN_10021b998(uVar18,pvVar13,lVar16,lVar11,pcVar15);
  _swift_bridgeObjectRelease(pvVar13);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(0);
  FUN_1001c6180(LVar5.unknown + -(lVar17 + 0xfU & 0xfffffffffffffff0));
  SVar22 = (extension_Foundation)::Swift::String::init
                     ((LocalizedStringResource)
                      (LVar5.unknown + -(lVar17 + 0xfU & 0xfffffffffffffff0)));
  plVar10 = (long *)SVar22.str;
  plVar12 = plVar10;
  FUN_10020dad4();
  lVar17 = *plVar12;
  lVar16 = plVar12[1];
  _swift_bridgeObjectRetain_n(lVar16,2);
  lVar11 = lVar17;
  FUN_1000f653c(lVar17,lVar16);
  if (lVar11 == 0) {
    _swift_bridgeObjectRelease(lVar16);
    lVar17 = -0x2fffffffffffffed;
    FUN_1000f653c(0xd000000000000013,0x8000000100d8de20);
    if (lVar17 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10004c6b8);
      (*pcVar2)();
    }
  }
  else {
    FUN_1000f653c(lVar17,lVar16);
    if (lVar17 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10004c5dc);
      (*pcVar2)();
    }
  }
  if ((bVar3 & 1) == 0) {
    lVar17 = 0;
  }
  *(char **)((long)alStack_100 + lVar1 + 8) = "terminate:";
  *(undefined8 *)((long)alStack_100 + lVar1 + 0x10) = uVar18;
  *(undefined8 *)((long)alStack_100 + lVar1) = 0;
  FUN_10021bce0(plVar10,SVar22.bridgeObject,lVar17,0,0x71,0xe100000000000000,0x100000,0);
  _swift_bridgeObjectRelease(SVar22.bridgeObject);
  return plVar10;
}



/* Address: 0x10004c6bc | FUN_10004c6bc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

char * FUN_10004c6bc(void)

{
  code *pcVar1;
  byte bVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined *puVar6;
  ID IVar7;
  LocalizedStringResource LVar8;
  long lVar9;
  char *pcVar10;
  void *pvVar11;
  void *pvVar12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long lVar13;
  String SVar14;
  undefined auStack_70 [8];
  undefined8 local_68;
  
  puVar6 = &DAT_100fa8ac0;
  uVar3 = 0;
  FUN_10000ec2c(0,&DAT_100fa8ac0,&PTR__OBJC_CLASS___NSMenu_100f8d780);
  FUN_10021b6e8();
  FUN_1000da768(&local_68);
  FUN_100005af4();
  _swift_release(local_68);
  plVar4 = (long *)0x0;
  FUN_10000ec2c(0,&DAT_100fa8680,&PTR__OBJC_CLASS___NSImage_100f8d6b8);
  FUN_10020d5b8();
  lVar13 = *plVar4;
  lVar9 = plVar4[1];
  _swift_bridgeObjectRetain_n(lVar9,2);
  lVar5 = lVar13;
  FUN_1000f653c(lVar13,lVar9);
  if (lVar5 == 0) {
    _swift_bridgeObjectRelease(lVar9);
    lVar13 = -0x2fffffffffffffed;
    FUN_1000f653c(0xd000000000000013,0x8000000100d8de20);
    if (lVar13 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10004d214);
      (*pcVar1)();
    }
  }
  else {
    FUN_1000f653c(lVar13,lVar9);
    if (lVar13 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10004c780);
      (*pcVar1)();
    }
  }
  bVar2 = Swift::_stdlib_isOSVersionAtLeast(0x1a,0,0);
  if ((bVar2 & 1) == 0) {
    lVar13 = 0;
  }
  _swift_retain();
  FUN_10021bafc(uVar3,puVar6,lVar13,0,0x74,0xe100000000000000,0x100000,0,FUN_10004e718);
  _swift_bridgeObjectRelease(puVar6);
  _swift_release();
  FUN_10021b7b4();
  puVar6 = &_OBJC_CLASS___NSDateComponentsFormatter;
  _objc_allocWithZone();
  IVar7 = objc_stub::init((ID)puVar6);
  objc_stub::setUnitsStyle_(IVar7,1);
  objc_stub::setAllowedUnits_(IVar7,0x60);
  IVar7 = objc_stub::stringFromTimeInterval_(IVar7,0x408c200000000000);
  if (IVar7 == 0) {
    LVar8 = Foundation::LocalizedStringResource::typeMetadataAccessor();
    (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar8.unknown + -8) + 0x40))
    ;
    LVar8.unknown = auStack_70 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
    FUN_1001c2708(LVar8.unknown);
  }
  else {
    SVar14 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    LVar8 = Foundation::LocalizedStringResource::typeMetadataAccessor();
    (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar8.unknown + -8) + 0x40))
    ;
    LVar8.unknown = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    thunk_FUN_1001e6bc8(LVar8.unknown,SVar14.str,SVar14.bridgeObject);
    _swift_bridgeObjectRelease(SVar14.bridgeObject);
  }
  SVar14 = (extension_Foundation)::Swift::String::init(LVar8);
  pvVar11 = SVar14.bridgeObject;
  lVar9 = 0xf;
  pvVar12 = pvVar11;
  FUN_10020db50();
  _swift_bridgeObjectRetain(pvVar12);
  lVar13 = lVar9;
  FUN_1000f653c(lVar9,pvVar12);
  if (lVar13 == 0) {
    _swift_bridgeObjectRelease(pvVar12);
    lVar9 = -0x2fffffffffffffed;
    FUN_1000f653c(0xd000000000000013,0x8000000100d8de20);
    if (lVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10004d218);
      (*pcVar1)();
    }
  }
  else {
    FUN_1000f653c(lVar9,pvVar12);
    if (lVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10004c998);
      (*pcVar1)();
    }
  }
  if ((bVar2 & 1) == 0) {
    lVar9 = 0;
  }
  _swift_retain();
  FUN_10021bafc(SVar14.str,pvVar11,lVar9,0,0,0xe000000000000000,0,0,FUN_10004e720);
  _swift_bridgeObjectRelease(pvVar11);
  _swift_release();
  puVar6 = &_OBJC_CLASS___NSDateComponentsFormatter;
  _objc_allocWithZone();
  IVar7 = objc_stub::init((ID)puVar6);
  objc_stub::setUnitsStyle_(IVar7,1);
  objc_stub::setAllowedUnits_(IVar7,0x60);
  IVar7 = objc_stub::stringFromTimeInterval_(IVar7,0x409c200000000000);
  if (IVar7 == 0) {
    LVar8 = Foundation::LocalizedStringResource::typeMetadataAccessor();
    (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar8.unknown + -8) + 0x40))
    ;
    LVar8.unknown = auStack_70 + -(extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
    FUN_1001c2708(LVar8.unknown);
  }
  else {
    SVar14 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    LVar8 = Foundation::LocalizedStringResource::typeMetadataAccessor();
    (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar8.unknown + -8) + 0x40))
    ;
    LVar8.unknown = auStack_70 + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
    thunk_FUN_1001e6bc8(LVar8.unknown,SVar14.str,SVar14.bridgeObject);
    _swift_bridgeObjectRelease(SVar14.bridgeObject);
  }
  SVar14 = (extension_Foundation)::Swift::String::init(LVar8);
  pvVar11 = SVar14.bridgeObject;
  lVar9 = 0x1e;
  pvVar12 = pvVar11;
  FUN_10020db50();
  _swift_bridgeObjectRetain(pvVar12);
  lVar13 = lVar9;
  FUN_1000f653c(lVar9,pvVar12);
  if (lVar13 == 0) {
    _swift_bridgeObjectRelease(pvVar12);
    lVar9 = -0x2fffffffffffffed;
    FUN_1000f653c(0xd000000000000013,0x8000000100d8de20);
    if (lVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10004d21c);
      (*pcVar1)();
    }
  }
  else {
    FUN_1000f653c(lVar9,pvVar12);
    if (lVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10004cb84);
      (*pcVar1)();
    }
  }
  if ((bVar2 & 1) == 0) {
    lVar9 = 0;
  }
  _swift_retain();
  FUN_10021bafc(SVar14.str,pvVar11,lVar9,0,0,0xe000000000000000,0,0,FUN_10004e744);
  _swift_bridgeObjectRelease(pvVar11);
  _swift_release();
  puVar6 = &_OBJC_CLASS___NSDateComponentsFormatter;
  _objc_allocWithZone();
  IVar7 = objc_stub::init((ID)puVar6);
  objc_stub::setUnitsStyle_(IVar7,1);
  objc_stub::setAllowedUnits_(IVar7,0x60);
  IVar7 = objc_stub::stringFromTimeInterval_(IVar7,0x40ac200000000000);
  if (IVar7 == 0) {
    LVar8 = Foundation::LocalizedStringResource::typeMetadataAccessor();
    (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar8.unknown + -8) + 0x40))
    ;
    LVar8.unknown = auStack_70 + -(extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
    FUN_1001c2708(LVar8.unknown);
  }
  else {
    SVar14 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    LVar8 = Foundation::LocalizedStringResource::typeMetadataAccessor();
    (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar8.unknown + -8) + 0x40))
    ;
    LVar8.unknown = auStack_70 + -(extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
    thunk_FUN_1001e6bc8(LVar8.unknown,SVar14.str,SVar14.bridgeObject);
    _swift_bridgeObjectRelease(SVar14.bridgeObject);
  }
  SVar14 = (extension_Foundation)::Swift::String::init(LVar8);
  pvVar11 = SVar14.bridgeObject;
  lVar9 = 1;
  pvVar12 = pvVar11;
  FUN_10020db50();
  _swift_bridgeObjectRetain(pvVar12);
  lVar13 = lVar9;
  FUN_1000f653c(lVar9,pvVar12);
  if (lVar13 == 0) {
    _swift_bridgeObjectRelease(pvVar12);
    lVar9 = -0x2fffffffffffffed;
    FUN_1000f653c(0xd000000000000013,0x8000000100d8de20);
    if (lVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10004d220);
      (*pcVar1)();
    }
  }
  else {
    FUN_1000f653c(lVar9,pvVar12);
    if (lVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10004cd70);
      (*pcVar1)();
    }
  }
  if ((bVar2 & 1) == 0) {
    lVar9 = 0;
  }
  _swift_retain();
  FUN_10021bafc(SVar14.str,pvVar11,lVar9,0,0,0xe000000000000000,0,0,FUN_10004e768);
  _swift_bridgeObjectRelease(pvVar11);
  _swift_release();
  puVar6 = &_OBJC_CLASS___NSDateComponentsFormatter;
  _objc_allocWithZone();
  IVar7 = objc_stub::init((ID)puVar6);
  objc_stub::setUnitsStyle_(IVar7,1);
  objc_stub::setAllowedUnits_(IVar7,0x60);
  IVar7 = objc_stub::stringFromTimeInterval_(IVar7,0x40c5180000000000);
  if (IVar7 == 0) {
    LVar8 = Foundation::LocalizedStringResource::typeMetadataAccessor();
    (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar8.unknown + -8) + 0x40))
    ;
    LVar8.unknown = auStack_70 + -(extraout_x8_06 + 0xfU & 0xfffffffffffffff0);
    FUN_1001c2708(LVar8.unknown);
  }
  else {
    SVar14 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    LVar8 = Foundation::LocalizedStringResource::typeMetadataAccessor();
    (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar8.unknown + -8) + 0x40))
    ;
    LVar8.unknown = auStack_70 + -(extraout_x8_05 + 0xfU & 0xfffffffffffffff0);
    thunk_FUN_1001e6bc8(LVar8.unknown,SVar14.str,SVar14.bridgeObject);
    _swift_bridgeObjectRelease(SVar14.bridgeObject);
  }
  SVar14 = (extension_Foundation)::Swift::String::init(LVar8);
  pvVar11 = SVar14.bridgeObject;
  lVar9 = 3;
  pvVar12 = pvVar11;
  FUN_10020db50();
  _swift_bridgeObjectRetain(pvVar12);
  lVar13 = lVar9;
  FUN_1000f653c(lVar9,pvVar12);
  if (lVar13 == 0) {
    _swift_bridgeObjectRelease(pvVar12);
    lVar9 = -0x2fffffffffffffed;
    FUN_1000f653c(0xd000000000000013,0x8000000100d8de20);
    if (lVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10004d224);
      (*pcVar1)();
    }
  }
  else {
    FUN_1000f653c(lVar9,pvVar12);
    if (lVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10004cf5c);
      (*pcVar1)();
    }
  }
  if ((bVar2 & 1) == 0) {
    lVar9 = 0;
  }
  _swift_retain();
  FUN_10021bafc(SVar14.str,pvVar11,lVar9,0,0,0xe000000000000000,0,0,FUN_10004e78c);
  _swift_bridgeObjectRelease(pvVar11);
  _swift_release();
  puVar6 = &_OBJC_CLASS___NSDateComponentsFormatter;
  _objc_allocWithZone();
  IVar7 = objc_stub::init((ID)puVar6);
  objc_stub::setUnitsStyle_(IVar7,1);
  objc_stub::setAllowedUnits_(IVar7,0x60);
  IVar7 = objc_stub::stringFromTimeInterval_(IVar7,0x40dc200000000000);
  if (IVar7 == 0) {
    LVar8 = Foundation::LocalizedStringResource::typeMetadataAccessor();
    (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar8.unknown + -8) + 0x40))
    ;
    LVar8.unknown = auStack_70 + -(extraout_x8_08 + 0xfU & 0xfffffffffffffff0);
    FUN_1001c2708(LVar8.unknown);
  }
  else {
    SVar14 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    LVar8 = Foundation::LocalizedStringResource::typeMetadataAccessor();
    (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar8.unknown + -8) + 0x40))
    ;
    LVar8.unknown = auStack_70 + -(extraout_x8_07 + 0xfU & 0xfffffffffffffff0);
    thunk_FUN_1001e6bc8(LVar8.unknown,SVar14.str,SVar14.bridgeObject);
    _swift_bridgeObjectRelease(SVar14.bridgeObject);
  }
  SVar14 = (extension_Foundation)::Swift::String::init(LVar8);
  pvVar11 = SVar14.bridgeObject;
  pcVar10 = SVar14.str;
  lVar9 = 8;
  pvVar12 = pvVar11;
  FUN_10020db50();
  _swift_bridgeObjectRetain(pvVar12);
  lVar13 = lVar9;
  FUN_1000f653c(lVar9,pvVar12);
  if (lVar13 == 0) {
    _swift_bridgeObjectRelease(pvVar12);
    lVar9 = -0x2fffffffffffffed;
    FUN_1000f653c(0xd000000000000013,0x8000000100d8de20);
    if (lVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10004d228);
      (*pcVar1)();
    }
  }
  else {
    FUN_1000f653c(lVar9,pvVar12);
    if (lVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10004d148);
      (*pcVar1)();
    }
  }
  if ((bVar2 & 1) == 0) {
    lVar9 = 0;
  }
  _swift_retain();
  FUN_10021bafc(pcVar10,pvVar11,lVar9,0,0,0xe000000000000000,0,0,FUN_10004e7b0);
  _swift_bridgeObjectRelease(pvVar11);
  _swift_release();
  return pcVar10;
}



/* Address: 0x10004d228 | FUN_10004d228 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10004d228(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_c0;
  ulong local_b8;
  undefined8 local_b0;
  ulong uStack_a8;
  long local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uStack_78 = *(undefined8 *)(param_1 + 0x28);
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  uStack_68 = *(undefined8 *)(param_1 + 0x38);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  local_90 = uVar4;
  uStack_88 = uVar6;
  local_80 = uVar7;
  local_70 = uVar5;
  local_60 = uVar2;
  _swift_retain(uVar4);
  _swift_retain(uVar6);
  _swift_retain(uVar7);
  _swift_retain(uVar5);
  _swift_retain(uVar2);
  FUN_1000037f0(&DAT_100fa8320,&DAT_100c25378);
  FUN_1002ca7e0(&local_c0);
  _swift_release(uVar2);
  _swift_release(uVar5);
  _swift_release(uVar7);
  _swift_release(uVar6);
  _swift_release(uVar4);
  if (local_b8 != 0) {
    local_b0 = local_c0;
    uStack_a8 = local_b8;
    puVar1 = &DAT_100fa81f0;
    FUN_1000037f0(&DAT_100fa81f0,&DAT_100c2ae00);
    FUN_100357f60(&local_98,thunk_FUN_10004e630,&local_c0,puVar1);
    _swift_bridgeObjectRelease();
    if ((local_98 != 0) && (FUN_100328f38(), (local_b8 & 1) != 0)) {
      uVar2 = *(undefined8 *)(param_1 + 0x80);
      lVar3 = *(long *)(param_1 + 0xa0);
      FUN_100004640(param_1 + 0x68,uVar2);
      (**(code **)(lVar3 + 8))(uVar2,lVar3);
    }
  }
  return;
}



/* Address: 0x10004d380 | FUN_10004d380 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long * FUN_10004d380(void)

{
  long lVar1;
  char cVar2;
  long lVar3;
  code *pcVar4;
  byte bVar5;
  undefined8 uVar6;
  LocalizedStringResource LVar7;
  char *pcVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  undefined8 unaff_x20;
  long lVar13;
  long lVar14;
  String SVar15;
  undefined8 auStack_a0 [4];
  undefined1 auStack_80 [24];
  long local_68;
  
  uVar6 = 0;
  FUN_10000ec2c(0,&DAT_100fa8ac0,&PTR__OBJC_CLASS___NSMenu_100f8d780);
  FUN_10021b6e8();
  LVar7 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  lVar14 = *(long *)(*(long *)(LVar7.unknown + -8) + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar3 = -(lVar14 + 0xfU & 0xfffffffffffffff0);
  LVar7.unknown = auStack_80 + lVar3;
  FUN_1001c5018(LVar7.unknown);
  SVar15 = (extension_Foundation)::Swift::String::init(LVar7);
  pcVar8 = SVar15.str;
  plVar9 = (long *)0x0;
  FUN_10000ec2c(0,&DAT_100fa8680,&PTR__OBJC_CLASS___NSImage_100f8d6b8);
  FUN_10020cfc8();
  lVar13 = *plVar9;
  lVar1 = plVar9[1];
  _swift_bridgeObjectRetain_n(lVar1,2);
  lVar10 = lVar13;
  FUN_1000f653c(lVar13,lVar1);
  if (lVar10 == 0) {
    _swift_bridgeObjectRelease(lVar1);
    lVar13 = -0x2fffffffffffffed;
    FUN_1000f653c(0xd000000000000013,0x8000000100d8de20);
    if (lVar13 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10004dcf4);
      (*pcVar4)();
    }
  }
  else {
    FUN_1000f653c(lVar13,lVar1);
    if (lVar13 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10004d474);
      (*pcVar4)();
    }
  }
  bVar5 = Swift::_stdlib_isOSVersionAtLeast(0x1a,0,0);
  if ((bVar5 & 1) == 0) {
    lVar13 = 0;
  }
  _swift_retain();
  *(undefined8 *)((long)auStack_a0 + lVar3 + 8) = unaff_x20;
  *(undefined8 *)((long)auStack_a0 + lVar3 + 0x10) = uVar6;
  *(code **)((long)auStack_a0 + lVar3) = FUN_10004e824;
  FUN_10021bafc(pcVar8,SVar15.bridgeObject,lVar13,0,0,0xe000000000000000,0,0);
  _swift_bridgeObjectRelease(SVar15.bridgeObject);
  _swift_release();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(0);
  FUN_1001c5338(LVar7.unknown + -(lVar14 + 0xfU & 0xfffffffffffffff0));
  SVar15 = (extension_Foundation)::Swift::String::init
                     ((LocalizedStringResource)
                      (LVar7.unknown + -(lVar14 + 0xfU & 0xfffffffffffffff0)));
  plVar11 = (long *)SVar15.str;
  plVar9 = plVar11;
  FUN_10020d284();
  lVar13 = *plVar9;
  lVar1 = plVar9[1];
  _swift_bridgeObjectRetain_n(lVar1,2);
  lVar10 = lVar13;
  FUN_1000f653c(lVar13,lVar1);
  if (lVar10 == 0) {
    _swift_bridgeObjectRelease(lVar1);
    lVar13 = -0x2fffffffffffffed;
    FUN_1000f653c(0xd000000000000013,0x8000000100d8de20);
    if (lVar13 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10004dcf8);
      (*pcVar4)();
    }
  }
  else {
    FUN_1000f653c(lVar13,lVar1);
    if (lVar13 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10004d5b8);
      (*pcVar4)();
    }
  }
  if ((bVar5 & 1) == 0) {
    lVar13 = 0;
  }
  _swift_retain();
  *(undefined8 *)((long)auStack_a0 + lVar3 + 8) = unaff_x20;
  *(char **)((long)auStack_a0 + lVar3 + 0x10) = pcVar8;
  *(code **)((long)auStack_a0 + lVar3) = FUN_10004e844;
  FUN_10021bafc(plVar11,SVar15.bridgeObject,lVar13,0,0,0xe000000000000000,0,0);
  _swift_bridgeObjectRelease(SVar15.bridgeObject);
  _swift_release();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(0);
  FUN_1001c51b8(LVar7.unknown + -(lVar14 + 0xfU & 0xfffffffffffffff0));
  SVar15 = (extension_Foundation)::Swift::String::init
                     ((LocalizedStringResource)
                      (LVar7.unknown + -(lVar14 + 0xfU & 0xfffffffffffffff0)));
  plVar12 = (long *)SVar15.str;
  plVar9 = plVar12;
  FUN_10020d324();
  lVar13 = *plVar9;
  lVar1 = plVar9[1];
  _swift_bridgeObjectRetain_n(lVar1,2);
  lVar10 = lVar13;
  FUN_1000f653c(lVar13,lVar1);
  if (lVar10 == 0) {
    _swift_bridgeObjectRelease(lVar1);
    lVar13 = -0x2fffffffffffffed;
    FUN_1000f653c(0xd000000000000013,0x8000000100d8de20);
    if (lVar13 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10004dcfc);
      (*pcVar4)();
    }
  }
  else {
    FUN_1000f653c(lVar13,lVar1);
    if (lVar13 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10004d6e8);
      (*pcVar4)();
    }
  }
  if ((bVar5 & 1) == 0) {
    lVar13 = 0;
  }
  _swift_retain();
  *(undefined8 *)((long)auStack_a0 + lVar3 + 8) = unaff_x20;
  *(long **)((long)auStack_a0 + lVar3 + 0x10) = plVar11;
  *(code **)((long)auStack_a0 + lVar3) = FUN_10004e864;
  FUN_10021bafc(plVar12,SVar15.bridgeObject,lVar13,0,0,0xe000000000000000,0,0);
  _swift_bridgeObjectRelease(SVar15.bridgeObject);
  _swift_release();
  FUN_10021b7b4();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(0);
  FUN_1001c6000(LVar7.unknown + -(lVar14 + 0xfU & 0xfffffffffffffff0));
  SVar15 = (extension_Foundation)::Swift::String::init
                     ((LocalizedStringResource)
                      (LVar7.unknown + -(lVar14 + 0xfU & 0xfffffffffffffff0)));
  plVar11 = (long *)SVar15.str;
  plVar9 = plVar11;
  FUN_10020c6ec();
  lVar13 = *plVar9;
  lVar1 = plVar9[1];
  _swift_bridgeObjectRetain_n(lVar1,2);
  lVar10 = lVar13;
  FUN_1000f653c(lVar13,lVar1);
  if (lVar10 == 0) {
    _swift_bridgeObjectRelease(lVar1);
    lVar13 = -0x2fffffffffffffed;
    FUN_1000f653c(0xd000000000000013,0x8000000100d8de20);
    if (lVar13 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10004dd00);
      (*pcVar4)();
    }
  }
  else {
    FUN_1000f653c(lVar13,lVar1);
    if (lVar13 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10004d82c);
      (*pcVar4)();
    }
  }
  if ((bVar5 & 1) == 0) {
    lVar13 = 0;
  }
  _swift_retain();
  *(undefined8 *)((long)auStack_a0 + lVar3 + 8) = unaff_x20;
  *(long **)((long)auStack_a0 + lVar3 + 0x10) = plVar12;
  *(code **)((long)auStack_a0 + lVar3) = FUN_10004e884;
  FUN_10021bafc(plVar11,SVar15.bridgeObject,lVar13,0,0,0xe000000000000000,0,0);
  _swift_bridgeObjectRelease(SVar15.bridgeObject);
  _swift_release();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(0);
  FUN_1001c4d18(LVar7.unknown + -(lVar14 + 0xfU & 0xfffffffffffffff0));
  SVar15 = (extension_Foundation)::Swift::String::init
                     ((LocalizedStringResource)
                      (LVar7.unknown + -(lVar14 + 0xfU & 0xfffffffffffffff0)));
  plVar12 = (long *)SVar15.str;
  plVar9 = plVar12;
  FUN_10020d354();
  lVar13 = *plVar9;
  lVar1 = plVar9[1];
  _swift_bridgeObjectRetain_n(lVar1,2);
  lVar10 = lVar13;
  FUN_1000f653c(lVar13,lVar1);
  if (lVar10 == 0) {
    _swift_bridgeObjectRelease(lVar1);
    lVar13 = -0x2fffffffffffffed;
    FUN_1000f653c(0xd000000000000013,0x8000000100d8de20);
    if (lVar13 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10004dd04);
      (*pcVar4)();
    }
  }
  else {
    FUN_1000f653c(lVar13,lVar1);
    if (lVar13 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10004d95c);
      (*pcVar4)();
    }
  }
  if ((bVar5 & 1) == 0) {
    lVar13 = 0;
  }
  _swift_retain();
  *(undefined8 *)((long)auStack_a0 + lVar3 + 8) = unaff_x20;
  *(long **)((long)auStack_a0 + lVar3 + 0x10) = plVar11;
  *(code **)((long)auStack_a0 + lVar3) = FUN_10004e8a4;
  FUN_10021bafc(plVar12,SVar15.bridgeObject,lVar13,0,0,0xe000000000000000,0,0);
  _swift_bridgeObjectRelease(SVar15.bridgeObject);
  _swift_release();
  FUN_10021b7b4();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(0);
  FUN_1001c46ac(LVar7.unknown + -(lVar14 + 0xfU & 0xfffffffffffffff0));
  SVar15 = (extension_Foundation)::Swift::String::init
                     ((LocalizedStringResource)
                      (LVar7.unknown + -(lVar14 + 0xfU & 0xfffffffffffffff0)));
  plVar11 = (long *)SVar15.str;
  plVar9 = plVar11;
  FUN_10020d520();
  lVar13 = *plVar9;
  lVar1 = plVar9[1];
  _swift_bridgeObjectRetain_n(lVar1,2);
  lVar10 = lVar13;
  FUN_1000f653c(lVar13,lVar1);
  if (lVar10 == 0) {
    _swift_bridgeObjectRelease(lVar1);
    lVar13 = -0x2fffffffffffffed;
    FUN_1000f653c(0xd000000000000013,0x8000000100d8de20);
    if (lVar13 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10004dd08);
      (*pcVar4)();
    }
  }
  else {
    FUN_1000f653c(lVar13,lVar1);
    if (lVar13 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10004daa0);
      (*pcVar4)();
    }
  }
  if ((bVar5 & 1) == 0) {
    lVar13 = 0;
  }
  _swift_retain();
  *(undefined8 *)((long)auStack_a0 + lVar3 + 8) = unaff_x20;
  *(long **)((long)auStack_a0 + lVar3 + 0x10) = plVar12;
  *(code **)((long)auStack_a0 + lVar3) = FUN_10004e8c4;
  FUN_10021bafc(plVar11,SVar15.bridgeObject,lVar13,0,0,0xe000000000000000,0,0);
  _swift_bridgeObjectRelease(SVar15.bridgeObject);
  _swift_release();
  FUN_10021b7b4();
  FUN_1000da768(&local_68,0);
  _swift_beginAccess(local_68 + 0x10,auStack_80,0,0);
  cVar2 = *(char *)(local_68 + 0x10);
  _swift_release(local_68);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  if (cVar2 == '\x01') {
    FUN_1001be088();
  }
  else {
    FUN_1001bdd88(LVar7.unknown + -(lVar14 + 0xfU & 0xfffffffffffffff0));
  }
  SVar15 = (extension_Foundation)::Swift::String::init
                     ((LocalizedStringResource)
                      (LVar7.unknown + -(lVar14 + 0xfU & 0xfffffffffffffff0)));
  plVar12 = (long *)SVar15.str;
  plVar9 = plVar12;
  FUN_10020d2d0();
  lVar13 = *plVar9;
  lVar1 = plVar9[1];
  _swift_bridgeObjectRetain_n(lVar1,2);
  lVar10 = lVar13;
  FUN_1000f653c(lVar13,lVar1);
  if (lVar10 == 0) {
    _swift_bridgeObjectRelease(lVar1);
    lVar13 = -0x2fffffffffffffed;
    FUN_1000f653c(0xd000000000000013,0x8000000100d8de20);
    if (lVar13 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10004dd0c);
      (*pcVar4)();
    }
  }
  else {
    FUN_1000f653c(lVar13,lVar1);
    if (lVar13 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10004dc24);
      (*pcVar4)();
    }
  }
  if ((bVar5 & 1) == 0) {
    lVar13 = 0;
  }
  _swift_retain();
  *(undefined8 *)((long)auStack_a0 + lVar3 + 8) = unaff_x20;
  *(long **)((long)auStack_a0 + lVar3 + 0x10) = plVar11;
  *(code **)((long)auStack_a0 + lVar3) = FUN_10004e8e4;
  FUN_10021bafc(plVar12,SVar15.bridgeObject,lVar13,0,0,0xe000000000000000,0,0);
  _swift_bridgeObjectRelease(SVar15.bridgeObject);
  _swift_release();
  return plVar12;
}



/* Address: 0x10004dd0c | FUN_10004dd0c */

void FUN_10004dd0c(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  Date DVar5;
  long extraout_x8;
  undefined1 *puVar6;
  undefined1 auStack_50 [7];
  char local_49;
  undefined8 local_48;
  
  puVar3 = &DAT_100fa6660;
  FUN_1000037f0(&DAT_100fa6660,&DAT_100c22e18);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_50 + -extraout_x8;
  FUN_1000da768(&local_48);
  uVar1 = local_48;
  puVar3 = &DAT_100c25818;
  _swift_getKeyPath(&DAT_100c25818);
  puVar4 = &DAT_100c25840;
  _swift_getKeyPath(&DAT_100c25840);
  Combine::Published::_get_subscript(&local_49,uVar1,puVar3,puVar4);
  _swift_release(puVar3);
  _swift_release(puVar4);
  _swift_release(uVar1);
  if (local_49 == '\x01') {
    FUN_1000da768(&local_48);
    FUN_100005388();
    _swift_release(local_48);
  }
  else {
    if (*(ID *)PTR__NSApp_100ea8fa0 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10004de60);
      (*pcVar2)();
    }
    objc_stub::deactivate(*(ID *)PTR__NSApp_100ea8fa0);
    FUN_1000da768(&local_48);
    DVar5 = Foundation::Date::typeMetadataAccessor();
    (**(code **)(*(long *)(DVar5.unknown + -8) + 0x38))(puVar6,1,1,DVar5.unknown);
    FUN_100004b40(puVar6);
    _swift_release(local_48);
    FUN_10004e7d4(puVar6);
  }
  return;
}



/* Address: 0x10004de60 | FUN_10004de60 */

void FUN_10004de60(double param_1)

{
  Date DVar1;
  Date DVar2;
  long extraout_x8;
  long extraout_x8_00;
  long lVar3;
  long lVar4;
  undefined1 auStack_60 [8];
  undefined8 local_58;
  
  DVar1 = Foundation::Date::typeMetadataAccessor();
  lVar4 = *(long *)(DVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar4 + 0x40));
  DVar2.unknown = &DAT_100fa6660;
  FUN_1000037f0(&DAT_100fa6660,&DAT_100c22e18);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(DVar2.unknown + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = (long)(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
  FUN_1000da768(&local_58);
  DVar2 = Foundation::Date::get_now(DVar2);
  Foundation::Date::addingTimeInterval(param_1,DVar2);
  (**(code **)(lVar4 + 8))(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),DVar1.unknown);
  (**(code **)(lVar4 + 0x38))(lVar3,0,1,DVar1.unknown);
  FUN_100004b40(lVar3);
  _swift_release(local_58);
  FUN_10004e7d4(lVar3);
  return;
}



/* Address: 0x10004df80 | FUN_10004df80 */

void FUN_10004df80(long param_1,code *param_2)

{
  code *pcVar1;
  URL UVar2;
  long extraout_x8;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar6 = *(long *)(UVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar6 + 0x40));
  puVar3 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if (*(ID *)PTR__NSApp_100ea8fa0 != 0) {
    objc_stub::deactivate(*(ID *)PTR__NSApp_100ea8fa0);
    uVar4 = *(undefined8 *)(param_1 + 0x80);
    lVar5 = *(long *)(param_1 + 0xa8);
    param_1 = param_1 + 0x68;
    FUN_100004640(param_1,uVar4);
    (*param_2)();
    (**(code **)(lVar6 + 0x10))(puVar3,param_1,UVar2.unknown);
    (**(code **)(lVar5 + 8))(puVar3,uVar4,lVar5);
    (**(code **)(lVar6 + 8))(puVar3,UVar2.unknown);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10004e064);
  (*pcVar1)();
}



/* Address: 0x10004e064 | FUN_10004e064 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

undefined8 FUN_10004e064(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  long lVar4;
  code *pcVar5;
  LocalizedStringResource LVar6;
  undefined *self;
  ID IVar7;
  NSString *pNVar8;
  long lVar9;
  undefined8 *puVar10;
  long extraout_x8;
  String SVar11;
  undefined1 auStack_60 [24];
  long local_48;
  
  LVar6 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar6.unknown + -8) + 0x40));
  LVar6.unknown = auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_1000da768(&local_48);
  lVar9 = local_48;
  _swift_beginAccess(local_48 + 0x10,auStack_60,0,0);
  cVar3 = *(char *)(lVar9 + 0x10);
  _swift_release(lVar9);
  self = &_OBJC_CLASS___NSAlert;
  _objc_allocWithZone();
  IVar7 = objc_stub::init((ID)self);
  if (cVar3 == '\x01') {
    FUN_1001be088();
    SVar11 = (extension_Foundation)::Swift::String::init(LVar6);
    pNVar8 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(SVar11.bridgeObject);
    objc_stub::setMessageText_(IVar7,pNVar8);
    FUN_1001bdf08(LVar6.unknown,0);
    SVar11 = (extension_Foundation)::Swift::String::init(LVar6);
    pNVar8 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(SVar11.bridgeObject);
    objc_stub::setInformativeText_(IVar7,pNVar8);
    FUN_1001bda88(LVar6.unknown,0);
    SVar11 = (extension_Foundation)::Swift::String::init(LVar6);
    pNVar8 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(SVar11.bridgeObject);
    objc_stub::addButtonWithTitle_(IVar7,pNVar8);
    FUN_1001c0788(LVar6.unknown,0);
    SVar11 = (extension_Foundation)::Swift::String::init(LVar6);
    pNVar8 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(SVar11.bridgeObject);
    objc_stub::addButtonWithTitle_(IVar7,pNVar8);
    if (*(ID *)PTR__NSApp_100ea8fa0 == 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10004e468);
      (*pcVar5)();
    }
    objc_stub::activateIgnoringOtherApps_(*(ID *)PTR__NSApp_100ea8fa0,1);
    IVar7 = objc_stub::runModal(IVar7);
    if (IVar7 == 1000) {
      FUN_1000da768(&local_48);
      lVar9 = local_48;
      FUN_1002fe72c(0);
      _swift_release();
      FUN_1000da768(&local_48);
      lVar4 = local_48;
      FUN_1002fef28();
      _swift_release(lVar4);
      if (lVar9 != 0) {
        puVar10 = (undefined8 *)0x0;
        FUN_1000da768(&local_48);
        FUN_10020c980();
        uVar1 = *puVar10;
        uVar2 = puVar10[1];
        _swift_bridgeObjectRetain(uVar2);
        FUN_1001c482c(LVar6.unknown);
        SVar11 = (extension_Foundation)::Swift::String::init(LVar6);
        FUN_10020b084(uVar1,uVar2,SVar11.str,SVar11.bridgeObject,0,0,0,0);
        _swift_release(local_48);
        _swift_bridgeObjectRelease(uVar2);
        _swift_bridgeObjectRelease(SVar11.bridgeObject);
      }
    }
  }
  else {
    FUN_1001bdd88(LVar6.unknown);
    SVar11 = (extension_Foundation)::Swift::String::init(LVar6);
    pNVar8 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(SVar11.bridgeObject);
    objc_stub::setMessageText_(IVar7,pNVar8);
    FUN_1001bdc08(LVar6.unknown,0);
    SVar11 = (extension_Foundation)::Swift::String::init(LVar6);
    pNVar8 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(SVar11.bridgeObject);
    objc_stub::setInformativeText_(IVar7,pNVar8);
    FUN_1001c3188(LVar6.unknown,0);
    SVar11 = (extension_Foundation)::Swift::String::init(LVar6);
    pNVar8 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(SVar11.bridgeObject);
    objc_stub::addButtonWithTitle_(IVar7,pNVar8);
    FUN_1001c0788(LVar6.unknown,0);
    SVar11 = (extension_Foundation)::Swift::String::init(LVar6);
    pNVar8 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(SVar11.bridgeObject);
    objc_stub::addButtonWithTitle_(IVar7,pNVar8);
    if (*(ID *)PTR__NSApp_100ea8fa0 == 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10004e46c);
      (*pcVar5)();
    }
    objc_stub::activateIgnoringOtherApps_(*(ID *)PTR__NSApp_100ea8fa0,1);
    IVar7 = objc_stub::runModal(IVar7);
    if (IVar7 == 1000) {
      FUN_1000da768(&local_48);
      FUN_1002fe72c(1);
      _swift_release(local_48);
      FUN_10004e8ec();
    }
  }
  return 0;
}



/* Address: 0x10004e46c | FUN_10004e46c */

void FUN_10004e46c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_68 [24];
  undefined8 local_50;
  long lStack_48;
  
  FUN_1003595f8(auStack_68);
  FUN_100004640(auStack_68,local_50);
  (**(code **)(lStack_48 + 0x20))(param_3,param_4,local_50,lStack_48);
  *param_1 = param_3;
  FUN_100004594(auStack_68);
  return;
}



/* Address: 0x10004e4ec | FUN_10004e4ec */

void FUN_10004e4ec(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x30);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_release(uVar4);
  _swift_release(uVar3);
  _swift_release(uVar2);
  _swift_release(uVar1);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x48));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x50));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x58));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x60));
  FUN_100004594(unaff_x20 + 0x68);
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x10004e57c | FUN_10004e57c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10004e57c(void)

{
  return ZEXT816(0x100fa8a38);
}



/* Address: 0x10004e59c | FUN_10004e59c */

void FUN_10004e59c(void)

{
  long unaff_x20;
  
  FUN_100004640(unaff_x20 + 0x68,*(undefined8 *)(unaff_x20 + 0x80));
  FUN_1000a0df0();
  return;
}



/* Address: 0x10004e5c8 | FUN_10004e5c8 */

void FUN_10004e5c8(void)

{
  undefined8 uVar1;
  long unaff_x20;
  long lVar2;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x80);
  lVar2 = *(long *)(unaff_x20 + 0x98);
  FUN_100004640(unaff_x20 + 0x68,uVar1);
  (**(code **)(lVar2 + 8))(uVar1,lVar2);
  return;
}



/* Address: 0x10004e610 | FUN_10004e610 */

void FUN_10004e610(void)

{
  FUN_10004df80();
  return;
}



/* Address: 0x10004e630 | FUN_10004e630 */

void FUN_10004e630(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10004e46c(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x10004e638 | FUN_10004e638 */

void FUN_10004e638(void)

{
  FUN_10004d228();
  return;
}



/* Address: 0x10004e640 | FUN_10004e640 */

void FUN_10004e640(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  puVar1 = &DAT_100c25818;
  _swift_getKeyPath(&DAT_100c25818);
  puVar2 = &DAT_100c25840;
  _swift_getKeyPath(&DAT_100c25840);
  Combine::Published::_get_subscript(param_1,uVar3,puVar1,puVar2);
  _swift_release(puVar1);
  _swift_release(puVar2);
  return;
}



/* Address: 0x10004e6a8 | FUN_10004e6a8 */

void FUN_10004e6a8(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  Published *pPVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 local_31;
  
  uVar1 = *param_1;
  uVar4 = *param_2;
  pPVar2 = (Published *)&DAT_100c25818;
  _swift_getKeyPath(&DAT_100c25818);
  puVar3 = &DAT_100c25840;
  _swift_getKeyPath(&DAT_100c25840);
  local_31 = uVar1;
  _swift_retain(uVar4);
  Combine::Published::_set_subscript(pPVar2,&local_31,uVar4,pPVar2,puVar3);
  return;
}



/* Address: 0x10004e718 | FUN_10004e718 */

void FUN_10004e718(void)

{
  FUN_10004dd0c();
  return;
}



/* Address: 0x10004e720 | FUN_10004e720 */

void FUN_10004e720(void)

{
  FUN_10004de60(0x408c200000000000);
  return;
}


