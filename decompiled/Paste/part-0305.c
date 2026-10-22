/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1003d5ab8 | FUN_1003d5ab8 */

void FUN_1003d5ab8(void)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  ID IVar4;
  long unaff_x20;
  String SVar5;
  
  lVar1 = _TtCC11PasteCoreUI8ItemCell8LockView::backgroundView;
  puVar3 = &_OBJC_CLASS___NSVisualEffectView;
  _objc_allocWithZone();
  IVar4 = objc_stub::init((ID)puVar3);
  objc_stub::setBlendingMode_(IVar4,1);
  objc_stub::setMaterial_(IVar4,5);
  objc_stub::setState_(IVar4,1);
  *(ID *)(unaff_x20 + lVar1) = IVar4;
  lVar1 = _TtCC11PasteCoreUI8ItemCell8LockView::imageView;
  puVar3 = &_OBJC_CLASS___NSImageView;
  _objc_allocWithZone();
  IVar4 = objc_stub::init((ID)puVar3);
  FUN_1003d5310();
  *(ID *)(unaff_x20 + lVar1) = IVar4;
  SVar5.bridgeObject = (void *)0x2;
  SVar5.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar5,(StaticString)0xd000000000000025,0x8000000100d8dc00,
             0xda52f0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1003d5b7c);
  (*pcVar2)();
}



/* Address: 0x1003d5b7c | FUN_1003d5b7c */

void FUN_1003d5b7c(void)

{
  long unaff_x20;
  
  FUN_1003d56a0(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1003d5b84 | FUN_1003d5b84 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1003d5b84(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ID self;
  long unaff_x20;
  ulong *self_00;
  
  self = *(ID *)(unaff_x20 + _TtCC11PasteCoreUI8ItemCell11OverlayView::materialView);
  puVar1 = (undefined8 *)(unaff_x20 + _TtCC11PasteCoreUI8ItemCell11OverlayView::background);
  if (*(char *)(puVar1 + 1) == '\x01') {
    uVar2 = 0xc;
  }
  else {
    uVar2 = *puVar1;
  }
  objc_stub::setMaterial_(self,uVar2);
  objc_stub::setHidden_(self,(ulong)(*(char *)(puVar1 + 1) != '\0'));
  objc_stub::setHidden_(self,(ulong)(*(char *)(puVar1 + 1) == '\x01'));
  self_00 = *(ulong **)(unaff_x20 + _TtCC11PasteCoreUI8ItemCell11OverlayView::colorView);
  if (*(char *)(puVar1 + 1) == '\x01') {
    uVar2 = *puVar1;
  }
  else {
    uVar2 = 0;
  }
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *self_00) + 0x60))(uVar2);
  objc_stub::setHidden_((ID)self_00,(ulong)(*(char *)(puVar1 + 1) != '\x01'));
  return;
}



/* Address: 0x1003d5c60 | FUN_1003d5c60 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1003d5c60(void)

{
  ID *pIVar1;
  long lVar2;
  ID IVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined1 auStack_a0 [16];
  ID local_90;
  
  pIVar1 = (ID *)(unaff_x20 + _TtCC11PasteCoreUI8ItemCell11OverlayView::background);
  IVar3 = objc_stub::clearColor((ID)&_OBJC_CLASS___NSColor);
  *pIVar1 = IVar3;
  *(undefined1 *)(pIVar1 + 1) = 1;
  lVar2 = _TtCC11PasteCoreUI8ItemCell11OverlayView::colorView;
  IVar3 = 0;
  FUN_100236364();
  _objc_allocWithZone();
  IVar3 = objc_stub::init(IVar3);
  *(ID *)(unaff_x20 + lVar2) = IVar3;
  lVar2 = _TtCC11PasteCoreUI8ItemCell11OverlayView::materialView;
  puVar4 = &_OBJC_CLASS___NSVisualEffectView;
  _objc_allocWithZone();
  IVar3 = objc_stub::init((ID)puVar4);
  objc_stub::setBlendingMode_(IVar3,1);
  *(ID *)(unaff_x20 + lVar2) = IVar3;
  FUN_1003d61e8();
  IVar3 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffb0,"initWithFrame:",0,0,0,0);
  puVar4 = &DAT_100fc3e80;
  FUN_1000037f0(&DAT_100fc3e80,&DAT_100c45d50);
  _swift_initStackObject();
  *(undefined8 *)(puVar4 + 0x18) = 5;
  *(undefined8 *)(puVar4 + 0x10) = 2;
  *(undefined8 *)(puVar4 + 0x20) =
       *(undefined8 *)(IVar3 + _TtCC11PasteCoreUI8ItemCell11OverlayView::materialView);
  *(undefined8 *)(puVar4 + 0x28) =
       *(undefined8 *)(IVar3 + _TtCC11PasteCoreUI8ItemCell11OverlayView::colorView);
  local_90 = IVar3;
  FUN_1001fa150(puVar4,FUN_1003d63f4,auStack_a0);
  _swift_bridgeObjectRelease();
  _swift_setDeallocating(puVar4);
  _swift_arrayDestroy(puVar4 + 0x20,*(undefined8 *)(puVar4 + 0x10),
                      PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8);
  FUN_1003d5b84();
  return IVar3;
}



/* Address: 0x1003d5de4 | FUN_1003d5de4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_1003d5de4(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 **ppuVar4;
  undefined8 **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *local_98 [3];
  undefined8 *local_80;
  undefined **ppuStack_78;
  
  puVar1 = param_1;
  FUN_1003d61e8();
  ppuStack_78 = &PTR_PTR_100ec00e8;
  puVar2 = param_1;
  local_98[0] = param_1;
  local_80 = puVar1;
  FUN_1001f9774();
  uVar9 = *puVar2;
  uVar10 = puVar2[1];
  uVar11 = puVar2[2];
  uVar12 = puVar2[3];
  uVar3 = 0;
  FUN_1003d63fc(0);
  ppuVar4 = local_98;
  FUN_1001f97b4(uVar9,uVar10,uVar11,uVar12,ppuVar4,uVar3,&PTR_PTR_100ec00e8);
  FUN_100004594(local_98);
  ppuStack_78 = &PTR_PTR_100ec00e8;
  uVar9 = *puVar2;
  uVar10 = puVar2[1];
  uVar11 = puVar2[2];
  uVar12 = puVar2[3];
  uVar3 = 0;
  local_98[0] = param_1;
  local_80 = puVar1;
  FUN_100236364(0);
  ppuVar5 = local_98;
  FUN_1001f97b4(uVar9,uVar10,uVar11,uVar12,ppuVar5,uVar3,&PTR_PTR_100ec00e8);
  FUN_100004594(local_98);
  puVar6 = &DAT_100fc3b00;
  FUN_1000037f0(&DAT_100fc3b00,&DAT_100c45590);
  _swift_initStackObject();
  *(undefined8 *)(puVar6 + 0x18) = 4;
  *(undefined8 *)(puVar6 + 0x10) = 2;
  puVar7 = &DAT_100fc3e70;
  FUN_1000037f0(&DAT_100fc3e70,&DAT_100c45d60);
  *(undefined **)(puVar6 + 0x38) = puVar7;
  *(undefined ***)(puVar6 + 0x40) = &PTR_PTR_100ec00b8;
  *(undefined8 ***)(puVar6 + 0x20) = ppuVar4;
  *(undefined **)(puVar6 + 0x60) = puVar7;
  *(undefined ***)(puVar6 + 0x68) = &PTR_PTR_100ec00b8;
  *(undefined8 ***)(puVar6 + 0x48) = ppuVar5;
  puVar8 = puVar6;
  FUN_1001f8d60(puVar6);
  _swift_setDeallocating(puVar6);
  uVar3 = *(undefined8 *)(puVar6 + 0x10);
  puVar7 = &DAT_100fc3b10;
  FUN_1000037f0(&DAT_100fc3b10,&DAT_100c455a0);
  _swift_arrayDestroy(puVar6 + 0x20,uVar3,puVar7);
  return puVar8;
}



/* Address: 0x1003d5f9c | _TtCC11PasteCoreUI8ItemCell11OverlayView::init */

/* Function Stack Size: 0x10 bytes */

ID _TtCC11PasteCoreUI8ItemCell11OverlayView::init(ID param_1,SEL param_2)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  char *pcVar4;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1003d0b5c();
  UVar3 = Swift::Actor::get_unownedExecutor();
  pcVar4 = (char *)UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar4 & 1) == 0) {
    pcVar4 = "PasteCoreUI/ItemCell.OverlayView.swift";
    _swift_task_reportUnexpectedExecutor
              ("PasteCoreUI/ItemCell.OverlayView.swift",0x26,1,0x16,UVar3.unknown,pMVar1);
  }
  FUN_1003d5c60();
  _swift_release(pMVar2);
  return (ID)pcVar4;
}



/* Address: 0x1003d6034 | _TtCC11PasteCoreUI8ItemCell11OverlayView::initWithCoder: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtCC11PasteCoreUI8ItemCell11OverlayView::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1003d0b5c();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteCoreUI/ItemCell.OverlayView.swift",0x26,1,0x21,UVar3.unknown,pMVar1);
  }
  FUN_1003d6320();
  _swift_release(pMVar2);
  return param_3;
}



/* Address: 0x1003d60e0 | _TtCC11PasteCoreUI8ItemCell11OverlayView::initWithFrame: */

/* Function Stack Size: 0x30 bytes */

ID _TtCC11PasteCoreUI8ItemCell11OverlayView::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  code *pcVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  FUN_1003d0b5c();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteCoreUI/ItemCell.OverlayView.swift",0x26,1,10,UVar3.unknown,pMVar2);
  }
  __swift_stdlib_reportUnimplementedInitializer("PasteCoreUI.OverlayView",0x17,"init(frame:)",0xc,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003d6168);
  (*pcVar1)();
}



/* Address: 0x1003d6168 | FUN_1003d6168 */

void FUN_1003d6168(void)

{
  FUN_1003d61e8();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"dealloc");
  return;
}



/* Address: 0x1003d6198 | _TtCC11PasteCoreUI8ItemCell11OverlayView::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtCC11PasteCoreUI8ItemCell11OverlayView::_cxx_destruct(ID param_1,SEL param_2)

{
  FUN_1003cd63c(*(undefined8 *)(param_1 + background),
                *(undefined1 *)((undefined8 *)(param_1 + background) + 1));
  return;
}



/* Address: 0x1003d61e8 | FUN_1003d61e8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1003d61e8(void)

{
  return ZEXT816(0x100f99888);
}



/* Address: 0x1003d6208 | FUN_1003d6208 */

undefined8 * FUN_1003d6208(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  FUN_1003d624c(uVar2,uVar1);
  *param_1 = uVar2;
  *(undefined1 *)(param_1 + 1) = uVar1;
  return param_1;
}



/* Address: 0x1003d624c | FUN_1003d624c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_1003d624c(undefined8 param_1,char param_2)

{
  if (param_2 == '\x01') {
    return param_1;
  }
  return param_1;
}



/* Address: 0x1003d6260 | FUN_1003d6260 */

void FUN_1003d6260(undefined8 *param_1)

{
  FUN_1003cd63c(*param_1,*(undefined1 *)(param_1 + 1));
  return;
}



/* Address: 0x1003d6270 | FUN_1003d6270 */

undefined8 * FUN_1003d6270(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  FUN_1003d624c(uVar4,uVar1);
  uVar3 = *param_1;
  *param_1 = uVar4;
  uVar2 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar1;
  FUN_1003cd63c(uVar3,uVar2);
  return param_1;
}



/* Address: 0x1003d62c0 | FUN_1003d62c0 */

void FUN_1003d62c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = uVar1;
  return;
}



/* Address: 0x1003d62d4 | FUN_1003d62d4 */

undefined8 * FUN_1003d62d4(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined1 *)(param_2 + 1);
  uVar3 = *param_1;
  *param_1 = *param_2;
  uVar2 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar1;
  FUN_1003cd63c(uVar3,uVar2);
  return param_1;
}



/* Address: 0x1003d6310 | FUN_1003d6310 */

undefined1  [16] FUN_1003d6310(void)

{
  return ZEXT816(0x100ed0050);
}



/* Address: 0x1003d6320 | FUN_1003d6320 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_1003d6320(void)

{
  ID *pIVar1;
  long lVar2;
  code *pcVar3;
  ID IVar4;
  undefined *self;
  long unaff_x20;
  String SVar5;
  
  pIVar1 = (ID *)(unaff_x20 + _TtCC11PasteCoreUI8ItemCell11OverlayView::background);
  IVar4 = objc_stub::clearColor((ID)&_OBJC_CLASS___NSColor);
  *pIVar1 = IVar4;
  *(undefined1 *)(pIVar1 + 1) = 1;
  lVar2 = _TtCC11PasteCoreUI8ItemCell11OverlayView::colorView;
  IVar4 = 0;
  FUN_100236364();
  _objc_allocWithZone();
  IVar4 = objc_stub::init(IVar4);
  *(ID *)(unaff_x20 + lVar2) = IVar4;
  lVar2 = _TtCC11PasteCoreUI8ItemCell11OverlayView::materialView;
  self = &_OBJC_CLASS___NSVisualEffectView;
  _objc_allocWithZone();
  IVar4 = objc_stub::init((ID)self);
  objc_stub::setBlendingMode_(IVar4,1);
  *(ID *)(unaff_x20 + lVar2) = IVar4;
  SVar5.bridgeObject = (void *)0x2;
  SVar5.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar5,(StaticString)0xd000000000000025,0x8000000100d8dc00,
             0xda5340);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1003d63f4);
  (*pcVar3)();
}



/* Address: 0x1003d63f4 | FUN_1003d63f4 */

void FUN_1003d63f4(void)

{
  long unaff_x20;
  
  FUN_1003d5de4(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1003d63fc | FUN_1003d63fc */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_1003d63fc(void)

{
  undefined *puVar1;
  
  if (DAT_100fc3560 != (undefined *)0x0) {
    return;
  }
  puVar1 = &_OBJC_CLASS___NSVisualEffectView;
  _swift_getObjCClassMetadata();
  DAT_100fc3560 = puVar1;
  return;
}



/* Address: 0x1003d6440 | thunk_FUN_1003d6208 */

void thunk_FUN_1003d6208(void)

{
  FUN_1003d6208();
  return;
}



/* Address: 0x1003d6444 | FUN_1003d6444 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_1003d6444(void)

{
  long lVar1;
  uint uVar2;
  ID IVar3;
  NSString *pNVar4;
  ulong uVar5;
  ulong extraout_x1;
  long unaff_x20;
  void *pvVar6;
  undefined8 uVar7;
  ID self;
  code *pcVar8;
  String SVar9;
  
  self = *(ID *)(unaff_x20 + _TtCC11PasteCoreUI8ItemCell21ShortcutIndicatorView::textColor);
  IVar3 = objc_stub::colorWithAlphaComponent_(self,0x3fe4cccccccccccd);
  FUN_1000f65ec(IVar3);
  IVar3 = *(ID *)(unaff_x20 +
                 _TtCC11PasteCoreUI8ItemCell21ShortcutIndicatorView::quickPasteIndicator);
  objc_stub::setTextColor_(IVar3,self);
  lVar1 = unaff_x20 + _TtCC11PasteCoreUI8ItemCell21ShortcutIndicatorView::quickPasteIndex;
  if (*(char *)(lVar1 + 8) == '\x01') {
    pvVar6 = (void *)0xe000000000000000;
  }
  else {
    FUN_1003d780c();
    SVar9 = (extension_Swift)::Swift::BinaryInteger::get_description();
    pvVar6 = SVar9.bridgeObject;
  }
  pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(pvVar6);
  objc_stub::setText_(IVar3);
  if (*(char *)(unaff_x20 + _TtCC11PasteCoreUI8ItemCell21ShortcutIndicatorView::isEnabled) == '\x01'
     ) {
    pcVar8 = *(code **)(unaff_x20 +
                       _TtCC11PasteCoreUI8ItemCell21ShortcutIndicatorView::userSettingsProvider);
    if (pcVar8 != (code *)0x0) {
      uVar7 = ((undefined8 *)
              (unaff_x20 + _TtCC11PasteCoreUI8ItemCell21ShortcutIndicatorView::userSettingsProvider)
              )[1];
      uVar5 = extraout_x1;
      _swift_retain(uVar7);
      (*pcVar8)();
      FUN_100004550(pcVar8,uVar7);
      IVar3 = objc_stub::modifierFlags((ID)&_OBJC_CLASS___NSEvent);
      FUN_100208674((uVar5 & (IVar3 ^ 0xffffffffffffffff)) == 0);
      if (((ulong)pNVar4 & (IVar3 ^ 0xffffffffffffffff)) == 0) {
        uVar5 = (ulong)(*(char *)(lVar1 + 8) != '\x01');
      }
      else {
        uVar5 = 0;
      }
      FUN_100208674();
      FUN_100208658();
      uVar2 = (uint)uVar5;
      if ((uVar5 & 1) == 0) {
        FUN_100208658();
      }
      else {
        uVar2 = 1;
      }
      goto LAB_1003d65b8;
    }
  }
  uVar2 = 0;
LAB_1003d65b8:
  FUN_100208674(uVar2 & 1);
  return;
}



/* Address: 0x1003d660c | FUN_1003d660c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1003d660c(void)

{
  long lVar1;
  ID self;
  undefined *puVar2;
  long unaff_x20;
  
  lVar1 = _TtCC11PasteCoreUI8ItemCell21ShortcutIndicatorView::___lazy_storage___stackView;
  self = *(ID *)(unaff_x20 +
                _TtCC11PasteCoreUI8ItemCell21ShortcutIndicatorView::___lazy_storage___stackView);
  if (self == 0) {
    puVar2 = &_OBJC_CLASS___NSStackView;
    _objc_allocWithZone();
    self = objc_stub::init((ID)puVar2);
    puVar2 = &DAT_100fc3e80;
    FUN_1000037f0(&DAT_100fc3e80,&DAT_100c45d50);
    _swift_initStackObject();
    *(undefined8 *)(puVar2 + 0x18) = 5;
    *(undefined8 *)(puVar2 + 0x10) = 2;
    *(undefined8 *)(puVar2 + 0x20) =
         *(undefined8 *)
          (unaff_x20 + _TtCC11PasteCoreUI8ItemCell21ShortcutIndicatorView::plainTextIndicator);
    *(undefined8 *)(puVar2 + 0x28) =
         *(undefined8 *)
          (unaff_x20 + _TtCC11PasteCoreUI8ItemCell21ShortcutIndicatorView::quickPasteIndicator);
    FUN_100201b9c(puVar2);
    _swift_setDeallocating(puVar2);
    _swift_arrayDestroy(puVar2 + 0x20,*(undefined8 *)(puVar2 + 0x10),
                        PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8);
    FUN_1000f668c(0);
    objc_stub::setSpacing_(self,0x4010000000000000);
    *(ID *)(unaff_x20 + lVar1) = self;
  }
  return self;
}



/* Address: 0x1003d6730 | FUN_1003d6730 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1003d6730(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  long lVar4;
  ID IVar5;
  NSString *pNVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  void *aBlock;
  ID IVar10;
  ID IVar11;
  undefined8 *unaff_x20;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined1 auStack_e8 [24];
  undefined *local_d0;
  undefined8 uStack_c8;
  code *local_c0;
  undefined *puStack_b8;
  code *local_b0;
  undefined *local_a8;
  
  puVar12 = unaff_x20;
  _swift_getObjectType();
  puVar1 = (undefined8 *)
           ((long)unaff_x20 + _TtCC11PasteCoreUI8ItemCell21ShortcutIndicatorView::quickPasteIndex);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined1 *)((long)unaff_x20 + _TtCC11PasteCoreUI8ItemCell21ShortcutIndicatorView::isEnabled) =
       1;
  puVar1 = (undefined8 *)
           ((long)unaff_x20 +
           _TtCC11PasteCoreUI8ItemCell21ShortcutIndicatorView::userSettingsProvider);
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar4 = _TtCC11PasteCoreUI8ItemCell21ShortcutIndicatorView::textColor;
  FUN_1001fe19c();
  puVar12 = (undefined8 *)*puVar12;
  *(undefined8 **)((long)unaff_x20 + lVar4) = puVar12;
  lVar4 = _TtCC11PasteCoreUI8ItemCell21ShortcutIndicatorView::plainTextIndicator;
  FUN_10000ec2c(0,&DAT_100fc32c8,&PTR__OBJC_CLASS___NSImageView_100f8d6a0);
  FUN_10020d9f8();
  uVar7 = *puVar12;
  uVar2 = puVar12[1];
  uVar13 = *(undefined8 *)PTR__NSFontTextStyleFootnote_100ea9070;
  _swift_bridgeObjectRetain(uVar2);
  IVar5 = objc_stub::configurationWithTextStyle_
                    ((ID)&_OBJC_CLASS___NSImageSymbolConfiguration,uVar13);
  FUN_10020dce0(uVar7,uVar2,IVar5);
  *(undefined8 *)((long)unaff_x20 + lVar4) = uVar7;
  lVar4 = _TtCC11PasteCoreUI8ItemCell21ShortcutIndicatorView::quickPasteIndicator;
  pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar5 = objc_stub::labelWithString_((ID)&_OBJC_CLASS___NSTextField,pNVar6);
  uVar7 = 0;
  FUN_10000ec2c(0,&DAT_100fc3e90,&PTR__OBJC_CLASS___NSFont_100f8d678);
  FUN_1001ff934();
  objc_stub::setFont_(IVar5,uVar7);
  *(ID *)((long)unaff_x20 + lVar4) = IVar5;
  *(undefined8 *)
   ((long)unaff_x20 +
   _TtCC11PasteCoreUI8ItemCell21ShortcutIndicatorView::___lazy_storage___stackView) = 0;
  puVar1 = (undefined8 *)
           ((long)unaff_x20 +
           _TtCC11PasteCoreUI8ItemCell21ShortcutIndicatorView::modifierFlagsMonitor);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  IVar5 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff90,"init");
  puVar12 = (undefined8 *)
            objc_stub::setCornerRadius_curve_
                      (IVar5,0x4010000000000000,*(undefined8 *)PTR__kCACornerCurveCircular_100eaa398
                      );
  FUN_100219bc4();
  puVar1 = (undefined8 *)(IVar5 + _TtCC11PasteCoreUI8ItemCell11OverlayView::background);
  uVar7 = *puVar1;
  *puVar1 = *puVar12;
  uVar3 = *(undefined1 *)(puVar1 + 1);
  *(undefined1 *)(puVar1 + 1) = 1;
  FUN_1003cd63c(uVar7,uVar3);
  FUN_1003d5b84();
  puVar8 = &DAT_100fc3e80;
  FUN_1000037f0(&DAT_100fc3e80,&DAT_100c45d50);
  _swift_initStackObject();
  *(undefined8 *)(puVar8 + 0x18) = 3;
  *(undefined8 *)(puVar8 + 0x10) = 1;
  puVar9 = puVar8;
  FUN_1003d660c();
  *(undefined **)(puVar8 + 0x20) = puVar9;
  local_c0 = (code *)IVar5;
  FUN_1001fa150(puVar8,FUN_1003d7598,&local_d0);
  _swift_bridgeObjectRelease();
  _swift_setDeallocating(puVar8);
  _swift_arrayDestroy(puVar8 + 0x20,*(undefined8 *)(puVar8 + 0x10),
                      PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8);
  puVar8 = &DAT_100ed0078;
  _swift_allocObject(&DAT_100ed0078,0x18,7);
  _swift_unknownObjectWeakInit(puVar8 + 0x10,IVar5);
  local_b0 = FUN_1003d75c4;
  local_d0 = PTR___NSConcreteStackBlock_100ea82a0;
  uStack_c8 = 0x42000000;
  local_c0 = FUN_100059c14;
  puStack_b8 = &DAT_100ed0090;
  local_a8 = puVar8;
  aBlock = __Block_copy(&local_d0);
  _swift_release(local_a8);
  IVar10 = objc_stub::addLocalMonitorForEventsMatchingMask_handler_
                     ((ID)&_OBJC_CLASS___NSEvent,0x1000,aBlock);
  __Block_release(aBlock);
  if (IVar10 == 0) {
    uStack_c8 = 0;
    local_d0 = (undefined *)0x0;
    puStack_b8 = (undefined *)0x0;
    local_c0 = (code *)0x0;
  }
  else {
    Swift::__bridgeAnyObjectToAny();
    _swift_unknownObjectRelease(IVar10);
  }
  lVar4 = _TtCC11PasteCoreUI8ItemCell21ShortcutIndicatorView::modifierFlagsMonitor;
  _swift_beginAccess(IVar5 + _TtCC11PasteCoreUI8ItemCell21ShortcutIndicatorView::
                             modifierFlagsMonitor,auStack_e8,0x21,0);
  FUN_1003d75e8(&local_d0,IVar5 + lVar4);
  _swift_endAccess(auStack_e8);
  IVar10 = objc_stub::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  uVar7 = *(undefined8 *)PTR__NSWindowDidBecomeKeyNotification_100ea9148;
  IVar11 = objc_stub::window(IVar5);
  objc_stub::addObserver_selector_name_object_
            (IVar10,IVar5,"windowDidBecomeKeyWithNotification:",uVar7,IVar11);
  FUN_1003d6444(0);
  return IVar5;
}



/* Address: 0x1003d6b64 | FUN_1003d6b64 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

undefined * FUN_1003d6b64(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  ID IVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long local_70 [3];
  long local_58;
  undefined **ppuStack_50;
  long local_48;
  
  lVar1 = param_1;
  _swift_getObjectType();
  lVar2 = lVar1;
  FUN_1003d660c();
  ppuStack_50 = &PTR_PTR_100ec00e8;
  uVar3 = 0;
  local_70[0] = param_1;
  local_58 = lVar1;
  local_48 = lVar2;
  FUN_10000ec2c(0,&DAT_100fc3500,&PTR__OBJC_CLASS___NSStackView_100f8d698);
  plVar4 = local_70;
  FUN_1001f97b4(0x3fe0000000000000,0x4010000000000000,0x3fe0000000000000,0x4010000000000000,plVar4,
                uVar3,&PTR_PTR_100ec00e8);
  FUN_100004594(local_70);
  IVar5 = objc_stub::heightAnchor
                    (*(ID *)(param_1 +
                            _TtCC11PasteCoreUI8ItemCell21ShortcutIndicatorView::
                            ___lazy_storage___stackView));
  IVar5 = objc_stub::constraintEqualToConstant_(IVar5,0x4032000000000000);
  puVar6 = &DAT_100fc3b00;
  FUN_1000037f0(&DAT_100fc3b00,&DAT_100c45590);
  _swift_initStackObject();
  *(undefined8 *)(puVar6 + 0x18) = 4;
  *(undefined8 *)(puVar6 + 0x10) = 2;
  puVar7 = &DAT_100fc3e70;
  FUN_1000037f0(&DAT_100fc3e70,&DAT_100c45d60);
  *(undefined **)(puVar6 + 0x38) = puVar7;
  *(undefined ***)(puVar6 + 0x40) = &PTR_PTR_100ec00b8;
  *(long **)(puVar6 + 0x20) = plVar4;
  uVar3 = 0;
  FUN_10000ec2c(0,&DAT_100fc32d0,&PTR__OBJC_CLASS___NSLayoutConstraint_100f8d660);
  *(undefined8 *)(puVar6 + 0x60) = uVar3;
  *(undefined ***)(puVar6 + 0x68) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar6 + 0x48) = IVar5;
  puVar8 = puVar6;
  FUN_1001f8d60(puVar6);
  _swift_setDeallocating(puVar6);
  uVar3 = *(undefined8 *)(puVar6 + 0x10);
  puVar7 = &DAT_100fc3b10;
  FUN_1000037f0(&DAT_100fc3b10,&DAT_100c455a0);
  _swift_arrayDestroy(puVar6 + 0x20,uVar3,puVar7);
  return puVar8;
}



/* Address: 0x1003d6d10 | FUN_1003d6d10 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_1003d6d10(undefined8 param_1,long param_2)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1003d0b5c();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteCoreUI/ItemCell.ShortcutIndicatorView.swift",0x30,1,0x29,UVar3.unknown,pMVar1);
  }
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 == 0) {
    _swift_release(pMVar2);
  }
  else {
    FUN_1003d6444();
    _swift_release(pMVar2);
  }
  return param_1;
}



/* Address: 0x1003d6dd8 | _TtCC11PasteCoreUI8ItemCell21ShortcutIndicatorView::init */

/* Function Stack Size: 0x10 bytes */

ID _TtCC11PasteCoreUI8ItemCell21ShortcutIndicatorView::init(ID param_1,SEL param_2)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  char *pcVar4;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1003d0b5c();
  UVar3 = Swift::Actor::get_unownedExecutor();
  pcVar4 = (char *)UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar4 & 1) == 0) {
    pcVar4 = "PasteCoreUI/ItemCell.ShortcutIndicatorView.swift";
    _swift_task_reportUnexpectedExecutor
              ("PasteCoreUI/ItemCell.ShortcutIndicatorView.swift",0x30,1,0x1d,UVar3.unknown,pMVar1);
  }
  FUN_1003d6730();
  _swift_release(pMVar2);
  return (ID)pcVar4;
}



/* Address: 0x1003d6e70 | FUN_1003d6e70 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003d6e70(void)

{
  long unaff_x20;
  
  FUN_100004550(*(undefined8 *)
                 (unaff_x20 +
                 _TtCC11PasteCoreUI8ItemCell21ShortcutIndicatorView::userSettingsProvider),
                ((undefined8 *)
                (unaff_x20 +
                _TtCC11PasteCoreUI8ItemCell21ShortcutIndicatorView::userSettingsProvider))[1]);
  FUN_100005808(unaff_x20 + _TtCC11PasteCoreUI8ItemCell21ShortcutIndicatorView::modifierFlagsMonitor
                ,&DAT_100fc3430,&DAT_100c45bf8);
  return;
}



/* Address: 0x1003d6ef4 | FUN_1003d6ef4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003d6ef4(class_t *param_1)

{
  long lVar1;
  class_t *pcVar2;
  undefined1 *puVar3;
  ID self;
  objc_super local_98;
  undefined1 auStack_88 [24];
  long local_70;
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [24];
  undefined8 local_38;
  
  pcVar2 = param_1;
  _swift_getObjectType();
  lVar1 = _TtCC11PasteCoreUI8ItemCell21ShortcutIndicatorView::modifierFlagsMonitor;
  _swift_beginAccess((long)&param_1->isa +
                     _TtCC11PasteCoreUI8ItemCell21ShortcutIndicatorView::modifierFlagsMonitor,
                     auStack_68,0,0);
  FUN_100011090((long)&param_1->isa + lVar1,auStack_88,&DAT_100fc3430,&DAT_100c45bf8);
  if (local_70 == 0) {
    FUN_100005808(auStack_88,&DAT_100fc3430,&DAT_100c45bf8);
  }
  else {
    FUN_100011080(auStack_88,auStack_50);
    puVar3 = auStack_50;
    FUN_100004640(puVar3,local_38);
    Swift::__bridgeAnythingToObjectiveC();
    NSEvent::removeMonitor_((ID)&_OBJC_CLASS___NSEvent,puVar3);
    _swift_unknownObjectRelease(puVar3);
    FUN_100004594(auStack_50);
  }
  self = NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  NSNotificationCenter::removeObserver_(self,param_1);
  local_98.receiver = (ID)param_1;
  local_98.super_class = pcVar2;
  _objc_msgSendSuper2(&local_98,"dealloc");
  return;
}



/* Address: 0x1003d7018 | FUN_1003d7018 */

void FUN_1003d7018(void)

{
  byte bVar1;
  __uint8 _Var2;
  int iVar3;
  MainActor *pMVar4;
  MainActor *pMVar5;
  undefined *puVar6;
  TaskPriority TVar7;
  MainActor *pMVar8;
  TaskPriority TVar9;
  UnownedSerialExecutor UVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  undefined8 unaff_x20;
  undefined1 *puVar13;
  undefined1 *puVar14;
  MainActor *pMVar15;
  ulong uVar16;
  long lVar17;
  undefined1 auStack_a0 [8];
  undefined1 *local_98;
  undefined1 *local_90;
  MainActor *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined *local_70;
  MainActor *pMStack_68;
  
  pMVar4 = Swift::MainActor::typeMetadataAccessor();
  pMVar5 = Swift::MainActor::get_shared(pMVar4,pMVar4);
  pMVar15 = pMVar5;
  FUN_1003d0b5c();
  Swift::Actor::get_unownedExecutor();
  _swift_release(pMVar5);
  bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,4,0,0x12,4,0);
  if ((bVar1 & 1) == 0) {
    iVar3 = _pthread_main_np();
    if (iVar3 == 1) {
      FUN_1003d6ef4();
      return;
    }
    pMVar5 = (MainActor *)&DAT_100ed00c8;
    _swift_allocObject(&DAT_100ed00c8,0x18,7);
    *(undefined8 *)(pMVar5 + 0x10) = unaff_x20;
    puVar6 = &DAT_100fc3610;
    FUN_1000037f0(&DAT_100fc3610,&DAT_100c45d70);
    lVar17 = *(long *)(*(long *)(puVar6 + -8) + 0x40);
    local_90 = auStack_a0;
    (*(code *)PTR____chkstk_darwin_100ea82c0)();
    uVar16 = lVar17 + 0xfU & 0xfffffffffffffff0;
    puVar14 = auStack_a0 + -uVar16;
    TVar7 = Swift::TaskPriority::typeMetadataAccessor();
    lVar17 = *(long *)(TVar7.unknown + -8);
    (**(code **)(lVar17 + 0x38))(puVar14,1,1,TVar7.unknown);
    pMVar8 = pMVar5;
    _swift_retain();
    pMVar4 = Swift::MainActor::get_shared(pMVar4,pMVar8);
    puVar6 = &DAT_100ed00f0;
    _swift_allocObject(&DAT_100ed00f0,0x30,7);
    *(MainActor **)(puVar6 + 0x10) = pMVar4;
    *(MainActor **)(puVar6 + 0x18) = pMVar15;
    *(code **)(puVar6 + 0x20) = FUN_1003d6ef4;
    *(MainActor **)(puVar6 + 0x28) = pMVar5;
    local_98 = puVar14;
    local_88 = pMVar5;
    (*(code *)PTR____chkstk_darwin_100ea82c0)();
    puVar13 = puVar14 + -uVar16;
    FUN_100011090(puVar14,puVar13,&DAT_100fc3610,&DAT_100c45d70);
    TVar9.unknown = puVar13;
    (**(code **)(lVar17 + 0x30))(puVar13,1,TVar7.unknown);
    if ((int)TVar9.unknown == 1) {
      FUN_100005808(puVar13,&DAT_100fc3610,&DAT_100c45d70);
      uVar16 = 0x1000;
    }
    else {
      _Var2 = Swift::TaskPriority::get_rawValue(TVar9);
      (**(code **)(lVar17 + 8))(puVar13,TVar7.unknown);
      uVar16 = (ulong)_Var2 | 0x1000;
    }
    if (pMVar4 == (MainActor *)0x0) {
      UVar10.unknown = (undefined *)0x0;
      pMVar15 = (MainActor *)0x0;
    }
    else {
      _swift_getObjectType(pMVar4);
      _swift_unknownObjectRetain(pMVar4);
      UVar10 = Swift::Actor::get_unownedExecutor();
      _swift_unknownObjectRelease(pMVar4);
    }
    puVar11 = &DAT_100ed0118;
    _swift_allocObject(&DAT_100ed0118,0x20,7);
    *(undefined **)(puVar11 + 0x10) = &DAT_100c45d80;
    *(undefined **)(puVar11 + 0x18) = puVar6;
    if (pMVar15 == (MainActor *)0x0 && UVar10.unknown == (undefined *)0x0) {
      puVar12 = (undefined8 *)0x0;
    }
    else {
      local_80 = 0;
      uStack_78 = 0;
      puVar12 = &local_80;
      local_70 = UVar10.unknown;
      pMStack_68 = pMVar15;
    }
    _swift_task_create(uVar16,puVar12,PTR___type_metadata_for____100eae0c8 + 8,&DAT_100c45d88,
                       puVar11);
    _swift_release();
    FUN_100005808(puVar14,&DAT_100fc3610,&DAT_100c45d70);
    _swift_release(local_88);
  }
  else {
    _swift_task_deinitOnExecutor();
  }
  return;
}



/* Address: 0x1003d7348 | _TtCC11PasteCoreUI8ItemCell21ShortcutIndicatorView::dealloc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtCC11PasteCoreUI8ItemCell21ShortcutIndicatorView::dealloc(ID param_1,SEL param_2)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1003d0b5c();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteCoreUI/ItemCell.ShortcutIndicatorView.swift",0x30,1,0x3c,UVar3.unknown,pMVar1);
  }
  FUN_1003d7018(param_1);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x1003d73dc | _TtCC11PasteCoreUI8ItemCell21ShortcutIndicatorView::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtCC11PasteCoreUI8ItemCell21ShortcutIndicatorView::_cxx_destruct(ID param_1,SEL param_2)

{
  FUN_100004550(*(undefined8 *)(param_1 + userSettingsProvider),
                ((undefined8 *)(param_1 + userSettingsProvider))[1]);
  FUN_100005808(param_1 + modifierFlagsMonitor,&DAT_100fc3430,&DAT_100c45bf8);
  return;
}



/* Address: 0x1003d746c | _TtCC11PasteCoreUI8ItemCell21ShortcutIndicatorView::windowDidBecomeKeyWithNotification: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtCC11PasteCoreUI8ItemCell21ShortcutIndicatorView::windowDidBecomeKeyWithNotification_
               (ID param_1,SEL param_2,ID param_3)

{
  char *pcVar1;
  MainActor *pMVar2;
  MainActor *pMVar3;
  UnownedSerialExecutor UVar4;
  char *pcVar5;
  void *pvVar6;
  long extraout_x8;
  long lVar7;
  Notification NVar8;
  
  NVar8 = Foundation::Notification::typeMetadataAccessor();
  pvVar6 = NVar8.syncInProgress.bridgeObject;
  pcVar5 = NVar8.syncInProgress.str;
  pcVar1 = NVar8.pastePaused.str;
  lVar7 = *(long *)(pcVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(undefined8 *)(lVar7 + 0x40),pcVar1,NVar8.pastePaused.bridgeObject);
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  pMVar3 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  pMVar2 = pMVar3;
  FUN_1003d0b5c();
  UVar4 = Swift::Actor::get_unownedExecutor();
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    pMVar2 = (MainActor *)&DAT_00000030;
    pcVar5 = &DAT_00000001;
    pvVar6 = (void *)0x44;
    _swift_task_reportUnexpectedExecutor("PasteCoreUI/ItemCell.ShortcutIndicatorView.swift");
  }
  NVar8.pastePaused.bridgeObject = pMVar2;
  NVar8.pastePaused.str = (char *)param_3;
  NVar8.syncInProgress.bridgeObject = pvVar6;
  NVar8.syncInProgress.str = pcVar5;
  NVar8 = Foundation::Notification::__unconditionallyBridgeFromObjectiveC(NVar8);
  FUN_1003d6444(param_1,NVar8.pastePaused.bridgeObject,NVar8.syncInProgress.str,
                NVar8.syncInProgress.bridgeObject);
  (**(code **)(lVar7 + 8))
            (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),pcVar1);
  _swift_release(pMVar3);
  return;
}



/* Address: 0x1003d7578 | FUN_1003d7578 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1003d7578(void)

{
  return ZEXT816(0x100f99970);
}



/* Address: 0x1003d7598 | FUN_1003d7598 */

void FUN_1003d7598(void)

{
  long unaff_x20;
  
  FUN_1003d6b64(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1003d75a0 | FUN_1003d75a0 */

void FUN_1003d75a0(void)

{
  long unaff_x20;
  
  _swift_unknownObjectWeakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x1003d75c4 | FUN_1003d75c4 */

void FUN_1003d75c4(void)

{
  FUN_1003d6d10();
  return;
}



/* Address: 0x1003d75cc | FUN_1003d75cc */

void FUN_1003d75cc(long param_1,long param_2)

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



/* Address: 0x1003d75e0 | FUN_1003d75e0 */

void FUN_1003d75e0(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x1003d75e8 | FUN_1003d75e8 */

undefined8 FUN_1003d75e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fc3430;
  FUN_1000037f0(&DAT_100fc3430,&DAT_100c45bf8);
  (**(code **)(*(long *)(puVar1 + -8) + 0x28))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1003d7638 | FUN_1003d7638 */

void FUN_1003d7638(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x1003d765c | FUN_1003d765c */

void FUN_1003d765c(void)

{
  MainActor *pMVar1;
  UnownedSerialExecutor UVar2;
  undefined8 in_x3;
  undefined8 in_x4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = in_x3;
  *(undefined8 *)(unaff_x22 + 0x18) = in_x4;
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar1 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  *(MainActor **)(unaff_x22 + 0x20) = pMVar1;
  FUN_1003d0b5c();
  UVar2 = Swift::Actor::get_unownedExecutor();
  _swift_task_switch(FUN_1001f1a6c,UVar2.unknown,pMVar1);
  return;
}



/* Address: 0x1003d76c8 | FUN_1003d76c8 */

void FUN_1003d76c8(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x1003d76f4 | FUN_1003d76f4 */

void FUN_1003d76f4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)&DAT_00000030;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_100008284;
  FUN_1003d765c(plVar5,param_1,uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Address: 0x1003d7778 | FUN_1003d7778 */

void FUN_1003d7778(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x1003d779c | FUN_1003d779c */

void FUN_1003d779c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100008284;
  FUN_10007493c(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Address: 0x1003d780c | FUN_1003d780c */

void FUN_1003d780c(void)

{
  undefined *puVar1;
  
  if (DAT_100fc3618 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Swift____int64_>Swift__BinaryInteger_100eac738;
  _swift_getWitnessTable
            (PTR_Swift____int64_>Swift__BinaryInteger_100eac738,
             PTR___type_metadata_for_Swift_Int_100eac6f8);
  DAT_100fc3618 = puVar1;
  return;
}



/* Address: 0x1003d784c | FUN_1003d784c */

int FUN_1003d784c(byte *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (param_1[0x18] != 0)) {
    return *(int *)param_1 + 0xff;
  }
  uVar1 = 0xffffffff;
  if (1 < *param_1) {
    uVar1 = *param_1 + 0x7ffffffe & 0x7fffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x1003d78a0 | FUN_1003d78a0 */

void FUN_1003d78a0(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0xff) {
    if (0xfe < param_3) {
      *(char *)(param_1 + 3) = '\0';
    }
    if (param_2 != 0) {
      *(char *)param_1 = (char)param_2 + '\x01';
      return;
    }
  }
  else {
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = (ulong)(param_2 - 0xff);
    if (0xfe < param_3) {
      *(char *)(param_1 + 3) = '\x01';
    }
  }
  return;
}



/* Address: 0x1003d78e4 | FUN_1003d78e4 */

undefined1  [16] FUN_1003d78e4(void)

{
  return ZEXT816(0x100ed01a0);
}



/* Address: 0x1003d78f4 | FUN_1003d78f4 */

undefined1 FUN_1003d78f4(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _TtC11PasteCoreUI8BaseCell::isSelected;
  _swift_beginAccess(unaff_x20 + _TtC11PasteCoreUI8BaseCell::isSelected,auStack_38,0,0);
  return *(undefined1 *)(unaff_x20 + lVar1);
}



/* Address: 0x1003d7938 | FUN_1003d7938 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003d7938(ulong param_1)

{
  char cVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  FUN_1003f27f4();
  lVar4 = _TtC11PasteCoreUI8BaseCell::isSelected;
  lVar3 = *(long *)(unaff_x20 + _TtC11PasteCoreUI8ItemCell::headerView);
  if (*(char *)(unaff_x20 + _TtC11PasteCoreUI8ItemCell::isEditable) == '\x01') {
    param_1 = unaff_x20 + _TtC11PasteCoreUI8BaseCell::isSelected;
    _swift_beginAccess(param_1,auStack_48,0,0);
    bVar2 = *(byte *)(unaff_x20 + lVar4);
  }
  else {
    bVar2 = 0;
  }
  lVar4 = *(long *)(lVar3 + _TtCC11PasteCoreUI8ItemCell10HeaderView::titleLabel);
  cVar1 = *(char *)(lVar4 + _TtCCC11PasteCoreUI8ItemCell10HeaderView10TitleLabel::isEditable);
  *(byte *)(lVar4 + _TtCCC11PasteCoreUI8ItemCell10HeaderView10TitleLabel::isEditable) = bVar2;
  if ((cVar1 == '\x01') && ((bVar2 & 1) == 0)) {
    FUN_1003d1cc0();
    FUN_10023b3e0();
    if ((param_1 & 1) != 0) {
      FUN_1003d1dbc(0);
    }
  }
  return;
}



/* Address: 0x1003d7a04 | FUN_1003d7a04 */

code * FUN_1003d7a04(undefined8 *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 unaff_x20;
  
  puVar1 = &DAT_00000030;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    puVar1 = _malloc(0x30);
  }
  else {
    _swift_coroFrameAlloc(0x30,0xdbc3);
  }
  *param_1 = puVar1;
  *(undefined8 *)(puVar1 + 0x20) = unaff_x20;
  puVar2 = puVar1;
  FUN_1003f2800();
  *(undefined1 **)(puVar1 + 0x28) = puVar2;
  return FUN_1003d7a64;
}



/* Address: 0x1003d7a64 | FUN_1003d7a64 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003d7a64(undefined8 *param_1,ulong param_2)

{
  char cVar1;
  void *pvVar2;
  byte bVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  pvVar4 = (void *)*param_1;
  pvVar2 = pvVar4;
  (**(code **)((long)pvVar4 + 0x28))(pvVar4,0);
  lVar7 = _TtC11PasteCoreUI8BaseCell::isSelected;
  if ((param_2 & 1) == 0) {
    lVar6 = *(long *)((long)pvVar4 + 0x20);
    lVar5 = *(long *)(lVar6 + _TtC11PasteCoreUI8ItemCell::headerView);
    if (*(char *)(lVar6 + _TtC11PasteCoreUI8ItemCell::isEditable) == '\x01') {
      pvVar2 = (void *)(lVar6 + _TtC11PasteCoreUI8BaseCell::isSelected);
      _swift_beginAccess(pvVar2,pvVar4,0,0);
      bVar3 = *(byte *)(lVar6 + lVar7);
    }
    else {
      bVar3 = 0;
    }
    lVar7 = *(long *)(lVar5 + _TtCC11PasteCoreUI8ItemCell10HeaderView::titleLabel);
    cVar1 = *(char *)(lVar7 + _TtCCC11PasteCoreUI8ItemCell10HeaderView10TitleLabel::isEditable);
    *(byte *)(lVar7 + _TtCCC11PasteCoreUI8ItemCell10HeaderView10TitleLabel::isEditable) = bVar3;
    if ((cVar1 == '\x01') && ((bVar3 & 1) == 0)) {
      FUN_1003d1cc0();
      FUN_10023b3e0();
      if (((ulong)pvVar2 & 1) != 0) {
        FUN_1003d1dbc(0);
      }
    }
  }
  _free(pvVar4);
  return;
}



/* Address: 0x1003d7b4c | FUN_1003d7b4c */

undefined1 FUN_1003d7b4c(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _TtC11PasteCoreUI8BaseCell::isDimmed;
  _swift_beginAccess(unaff_x20 + _TtC11PasteCoreUI8BaseCell::isDimmed,auStack_38,0,0);
  return *(undefined1 *)(unaff_x20 + lVar1);
}



/* Address: 0x1003d7b90 | FUN_1003d7b90 */

void FUN_1003d7b90(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  FUN_1003f2888();
  lVar1 = _TtC11PasteCoreUI8BaseCell::isDimmed;
  lVar2 = *(long *)(unaff_x20 + _TtC11PasteCoreUI8ItemCell::shortcutView);
  _swift_beginAccess(unaff_x20 + _TtC11PasteCoreUI8BaseCell::isDimmed,auStack_48,0,0);
  *(byte *)(lVar2 + _TtCC11PasteCoreUI8ItemCell21ShortcutIndicatorView::isEnabled) =
       (*(byte *)(unaff_x20 + lVar1) ^ 0xff) & 1;
  FUN_1003d6444();
  return;
}



/* Address: 0x1003d7c0c | FUN_1003d7c0c */

code * FUN_1003d7c0c(undefined8 *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 unaff_x20;
  
  puVar1 = &DAT_00000030;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    puVar1 = _malloc(0x30);
  }
  else {
    _swift_coroFrameAlloc(0x30,0x12b5);
  }
  *param_1 = puVar1;
  *(undefined8 *)(puVar1 + 0x20) = unaff_x20;
  puVar2 = puVar1;
  FUN_1003f298c();
  *(undefined1 **)(puVar1 + 0x28) = puVar2;
  return FUN_1003d7c6c;
}



/* Address: 0x1003d7c6c | FUN_1003d7c6c */

void FUN_1003d7c6c(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  
  pvVar2 = (void *)*param_1;
  (**(code **)((long)pvVar2 + 0x28))(pvVar2,0);
  lVar1 = _TtC11PasteCoreUI8BaseCell::isDimmed;
  if ((param_2 & 1) == 0) {
    lVar4 = *(long *)((long)pvVar2 + 0x20);
    lVar3 = *(long *)(lVar4 + _TtC11PasteCoreUI8ItemCell::shortcutView);
    _swift_beginAccess(lVar4 + _TtC11PasteCoreUI8BaseCell::isDimmed,pvVar2,0,0);
    *(byte *)(lVar3 + _TtCC11PasteCoreUI8ItemCell21ShortcutIndicatorView::isEnabled) =
         (*(byte *)(lVar4 + lVar1) ^ 0xff) & 1;
    FUN_1003d6444();
  }
  _free(pvVar2);
  return;
}



/* Address: 0x1003d7cfc | FUN_1003d7cfc */

undefined1 FUN_1003d7cfc(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _TtC11PasteCoreUI8ItemCell::isCompactContentFullsize;
  _swift_beginAccess(unaff_x20 + _TtC11PasteCoreUI8ItemCell::isCompactContentFullsize,auStack_38,0,0
                    );
  return *(undefined1 *)(unaff_x20 + lVar1);
}



/* Address: 0x1003d7d3c | FUN_1003d7d3c */

void FUN_1003d7d3c(undefined1 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _TtC11PasteCoreUI8ItemCell::isCompactContentFullsize;
  _swift_beginAccess(unaff_x20 + _TtC11PasteCoreUI8ItemCell::isCompactContentFullsize,auStack_48,1,0
                    );
  *(undefined1 *)(unaff_x20 + lVar1) = param_1;
  return;
}



/* Address: 0x1003d7d88 | FUN_1003d7d88 */

undefined1  [16] FUN_1003d7d88(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _TtC11PasteCoreUI8ItemCell::isCompactContentFullsize;
  _swift_beginAccess(unaff_x20 + _TtC11PasteCoreUI8ItemCell::isCompactContentFullsize,param_1,0x21,0
                    );
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = _swift_endAccess;
  return auVar2;
}



/* Address: 0x1003d7dc8 | FUN_1003d7dc8 */

undefined1 FUN_1003d7dc8(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _TtC11PasteCoreUI8ItemCell::preferredCompactHeaderStyle;
  _swift_beginAccess(unaff_x20 + _TtC11PasteCoreUI8ItemCell::preferredCompactHeaderStyle,auStack_38,
                     0,0);
  return *(undefined1 *)(unaff_x20 + lVar1);
}



/* Address: 0x1003d7e08 | FUN_1003d7e08 */

void FUN_1003d7e08(undefined1 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _TtC11PasteCoreUI8ItemCell::preferredCompactHeaderStyle;
  _swift_beginAccess(unaff_x20 + _TtC11PasteCoreUI8ItemCell::preferredCompactHeaderStyle,auStack_48,
                     1,0);
  *(undefined1 *)(unaff_x20 + lVar1) = param_1;
  return;
}


