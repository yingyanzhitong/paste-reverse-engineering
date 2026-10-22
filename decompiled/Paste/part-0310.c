/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1003e4574 | FUN_1003e4574 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1003e4574(void)

{
  return ZEXT816(0x100f9ae70);
}



/* Address: 0x1003e4594 | FUN_1003e4594 */

void FUN_1003e4594(void)

{
  long unaff_x20;
  
  _swift_unknownObjectWeakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x1003e45b8 | FUN_1003e45b8 */

void FUN_1003e45b8(void)

{
  FUN_1003e42b0();
  return;
}



/* Address: 0x1003e45d8 | FUN_1003e45d8 */

void FUN_1003e45d8(void)

{
  FUN_1003e42b0();
  return;
}



/* Address: 0x1003e45f8 | FUN_1003e45f8 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

ID FUN_1003e45f8(ID param_1,undefined8 param_2,char *param_3,void *param_4)

{
  code *pcVar1;
  ID IVar2;
  NSString *pNVar3;
  ID self;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *self_00;
  ID IVar6;
  double extraout_d0;
  double dVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  void *pvStack_68;
  
  _swift_getObjectType();
  dVar7 = 0.0;
  IVar2 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffa0,"initWithFrame:",0,0,0,0);
  objc_stub::size(param_1);
  if (0x7fefffffffffffff < (ulong)ABS(extraout_d0)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1003e48e4);
    (*pcVar1)();
  }
  if (extraout_d0 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1003e48e8);
    (*pcVar1)();
  }
  if (9.223372036854776e+18 <= extraout_d0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1003e48ec);
    (*pcVar1)();
  }
  SVar8 = Swift::CustomStringConvertible::get_description();
  SVar9.bridgeObject = (void *)0xa400000000000000;
  SVar9.str = (char *)0x2097c320;
  SVar10.bridgeObject = param_4;
  SVar10.str = param_3;
  Swift::String::append(SVar9,SVar10);
  if ((ulong)ABS(dVar7) < 0x7ff0000000000000) {
    if (dVar7 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1003e48f4);
      (*pcVar1)();
    }
    if (dVar7 < 9.223372036854776e+18) {
      SVar9 = Swift::CustomStringConvertible::get_description();
      SVar11.bridgeObject = param_4;
      SVar11.str = param_3;
      Swift::String::append(SVar9,SVar11);
      _swift_bridgeObjectRelease(SVar9.bridgeObject);
      pvStack_68 = SVar8.bridgeObject;
      pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(pvStack_68);
      self = objc_stub::labelWithString_((ID)&_OBJC_CLASS___NSTextField,pNVar3);
      FUN_1003e2ca0(0);
      IVar6 = self;
      FUN_1001ff928();
      objc_stub::setFont_(self,IVar6);
      puVar4 = (undefined8 *)0x0;
      FUN_1001fe19c();
      objc_stub::setTextColor_(self,*puVar4);
      objc_stub::setEditable_(self,0);
      objc_stub::setSelectable_(self,0);
      objc_stub::setBordered_(self,0);
      objc_stub::setDrawsBackground_(self,0);
      puVar5 = &DAT_100fc3e80;
      FUN_1000037f0(&DAT_100fc3e80,&DAT_100c45d50);
      _swift_initStackObject();
      *(undefined8 *)(puVar5 + 0x18) = 5;
      *(undefined8 *)(puVar5 + 0x10) = 2;
      *(ID *)(puVar5 + 0x20) = self;
      self_00 = &_OBJC_CLASS___NSView;
      _objc_allocWithZone();
      IVar6 = objc_stub::init((ID)self_00);
      objc_stub::setContentHuggingPriority_forOrientation_(IVar6,0x437a0000,0);
      objc_stub::setContentCompressionResistancePriority_forOrientation_(IVar6,0x437a0000,0);
      *(ID *)(puVar5 + 0x28) = IVar6;
      FUN_100201b9c(puVar5);
      _swift_setDeallocating(puVar5);
      _swift_arrayDestroy(puVar5 + 0x20,*(undefined8 *)(puVar5 + 0x10),
                          PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8);
      return IVar2;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1003e48f8);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003e48f0);
  (*pcVar1)();
}



/* Address: 0x1003e48f8 | _TtCC11PasteCoreUI20ImageItemContentView17FooterContentView::initWithCoder: */

/* Function Stack Size: 0x18 bytes */

ID _TtCC11PasteCoreUI20ImageItemContentView17FooterContentView::initWithCoder_
             (ID param_1,SEL param_2,ID param_3)

{
  code *pcVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  String SVar5;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  FUN_1003d0b5c();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteCoreUI/ImageItemContentView.Footer.swift",0x2d,1,0x24,UVar3.unknown,pMVar2);
  }
  SVar5.bridgeObject = (void *)0x2;
  SVar5.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar5,(StaticString)0xd000000000000025,0x8000000100d8dc00,
             0xda56b0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003e49ac);
  (*pcVar1)();
}



/* Address: 0x1003e49ac | _TtCC11PasteCoreUI20ImageItemContentView17FooterContentView::initWithFrame: */

/* Function Stack Size: 0x30 bytes */

ID _TtCC11PasteCoreUI20ImageItemContentView17FooterContentView::initWithFrame_
             (ID param_1,SEL param_2,CGRect param_3)

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
              ("PasteCoreUI/ImageItemContentView.Footer.swift",0x2d,1,9,UVar3.unknown,pMVar2);
  }
  __swift_stdlib_reportUnimplementedInitializer
            ("PasteCoreUI.FooterContentView",0x1d,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003e4a34);
  (*pcVar1)();
}



/* Address: 0x1003e4a34 | FUN_1003e4a34 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1003e4a34(void)

{
  return ZEXT816(0x100f9af30);
}



/* Address: 0x1003e4a54 | FUN_1003e4a54 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

undefined8 FUN_1003e4a54(long param_1)

{
  long lVar1;
  long lVar2;
  Task TVar3;
  TaskPriority TVar4;
  MainActor *pMVar5;
  MainActor *this;
  MainActor *pMVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ID IVar9;
  undefined *puVar10;
  long extraout_x8;
  undefined8 uVar11;
  ID unaff_x20;
  undefined *puVar12;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [24];
  
  _swift_getObjectType();
  puVar12 = &DAT_100fc3610;
  FUN_1000037f0(&DAT_100fc3610,&DAT_100c45d70);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_1003e4fe0();
  lVar1 = _TtC7PasteUI17ZoomableImageView::image;
  _swift_beginAccess(puVar12 + _TtC7PasteUI17ZoomableImageView::image,auStack_88,0,0);
  if (*(long *)(puVar12 + lVar1) != 0) {
    lVar1 = 0;
    FUN_100207054((double)param_1);
    lVar2 = 0;
    if (lVar1 != 0) {
      FUN_1003bec68();
      FUN_1003beb34();
      if ((lVar2 != 0) && (FUN_100207054((double)param_1), lVar2 != 0)) {
        FUN_1003beb78();
      }
      FUN_100240a64(lVar1);
      FUN_1003e597c(0);
      lVar1 = _TtC11PasteCoreUI20ImageItemContentView::pendingCommitTask;
      puVar12 = *(undefined **)
                 (unaff_x20 + _TtC11PasteCoreUI20ImageItemContentView::pendingCommitTask);
      if (puVar12 != (undefined *)0x0) {
        TVar3.unknown = puVar12;
        _swift_retain();
        Swift::Task::cancel(TVar3);
        _swift_release(puVar12);
      }
      TVar4 = Swift::TaskPriority::typeMetadataAccessor();
      (**(code **)(*(long *)(TVar4.unknown + -8) + 0x38))
                (auStack_90 + -extraout_x8,1,1,TVar4.unknown);
      pMVar5 = (MainActor *)&DAT_100ed0610;
      _swift_allocObject(&DAT_100ed0610,0x18,7);
      _swift_unknownObjectWeakInit(pMVar5 + 0x10);
      this = Swift::MainActor::typeMetadataAccessor();
      puVar12 = PTR_typeMetadataAccessor_100eaec10;
      pMVar6 = pMVar5;
      _swift_retain();
      pMVar6 = Swift::MainActor::get_shared(this,pMVar6);
      puVar7 = &DAT_100fc31a8;
      FUN_100003a00(&DAT_100fc31a8,puVar12,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
      puVar12 = &DAT_100ed0638;
      _swift_allocObject(&DAT_100ed0638,0x28,7);
      *(MainActor **)(puVar12 + 0x10) = pMVar6;
      *(undefined8 **)(puVar12 + 0x18) = puVar7;
      *(MainActor **)(puVar12 + 0x20) = pMVar5;
      _swift_release(pMVar5);
      uVar8 = 0;
      FUN_1003e6364(0,0,auStack_90 + -extraout_x8,&DAT_100c46218,puVar12);
      uVar11 = *(undefined8 *)(unaff_x20 + lVar1);
      *(undefined8 *)(unaff_x20 + lVar1) = uVar8;
      _swift_release(uVar11);
      IVar9 = objc_stub::undoManager(unaff_x20);
      if (IVar9 != 0) {
        puVar12 = &DAT_100ed0610;
        _swift_allocObject(&DAT_100ed0610,0x18,7);
        _swift_unknownObjectWeakInit(puVar12 + 0x10);
        puVar10 = &DAT_100ed0660;
        _swift_allocObject(&DAT_100ed0660,0x20,7);
        *(undefined **)(puVar10 + 0x10) = puVar12;
        *(long *)(puVar10 + 0x18) = param_1;
        (extension_Foundation)::__C::NSUndoManager::_registerUndo();
        _swift_release(puVar10);
      }
    }
  }
  return 0;
}



/* Address: 0x1003e4d78 | FUN_1003e4d78 */

void FUN_1003e4d78(void)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = unaff_x20;
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  *(MainActor **)(unaff_x22 + 0x30) = pMVar2;
  puVar3 = &DAT_100fc31a8;
  FUN_100003a00(&DAT_100fc31a8,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  *(undefined **)(unaff_x22 + 0x38) = UVar4.unknown;
  *(undefined8 **)(unaff_x22 + 0x40) = puVar3;
  _swift_task_switch(FUN_1003e4e08,UVar4.unknown,puVar3);
  return;
}



/* Address: 0x1003e4e08 | FUN_1003e4e08 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003e4e08(long param_1)

{
  long *plVar1;
  long lVar2;
  long unaff_x22;
  
  FUN_1003e4fe0();
  lVar2 = _TtC7PasteUI17ZoomableImageView::image;
  _swift_beginAccess(param_1 + _TtC7PasteUI17ZoomableImageView::image,unaff_x22 + 0x10,0,0);
  lVar2 = *(long *)(param_1 + lVar2);
  *(long *)(unaff_x22 + 0x48) = lVar2;
  if (lVar2 != 0) {
    plVar1 = (long *)0x60;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x50) = plVar1;
    *plVar1 = unaff_x22;
    plVar1[1] = (long)FUN_1003e4edc;
    FUN_1003be520(lVar2);
    return;
  }
  _swift_release(*(undefined8 *)(unaff_x22 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x0001003e4ed8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Address: 0x1003e4edc | FUN_1003e4edc */

void FUN_1003e4edc(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x58) = param_1;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x50));
  _swift_task_switch(FUN_1003e4f28,*(undefined8 *)(lVar1 + 0x38),*(undefined8 *)(lVar1 + 0x40));
  return;
}



/* Address: 0x1003e4f28 | FUN_1003e4f28 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003e4f28(void)

{
  long unaff_x22;
  long lVar1;
  
  lVar1 = *(long *)(unaff_x22 + 0x58);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x30));
  if (lVar1 != 0) {
    FUN_100240a64(*(undefined8 *)(unaff_x22 + 0x58));
    FUN_1003e597c(0);
  }
                    /* WARNING: Could not recover jumptable at 0x0001003e4fdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(lVar1 != 0);
  return;
}



/* Address: 0x1003e4fe0 | FUN_1003e4fe0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1003e4fe0(void)

{
  long lVar1;
  ID self;
  long unaff_x20;
  
  lVar1 = _TtC11PasteCoreUI20ImageItemContentView::___lazy_storage___zoomableImageView;
  self = *(ID *)(unaff_x20 +
                _TtC11PasteCoreUI20ImageItemContentView::___lazy_storage___zoomableImageView);
  if (self == 0) {
    FUN_100241da8();
    _objc_allocWithZone();
    self = objc_stub::init(self);
    *(ID *)(unaff_x20 + lVar1) = self;
  }
  return self;
}



/* Address: 0x1003e5048 | FUN_1003e5048 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

ID FUN_1003e5048(void)

{
  long lVar1;
  ID IVar2;
  ID IVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _TtC11PasteCoreUI20ImageItemContentView::___lazy_storage___editToolbar;
  IVar3 = *(ID *)(unaff_x20 + _TtC11PasteCoreUI20ImageItemContentView::___lazy_storage___editToolbar
                 );
  IVar2 = IVar3;
  if (IVar3 == 1) {
    IVar2 = 0;
    FUN_1003e4574();
    _objc_allocWithZone();
    IVar2 = objc_stub::init(IVar2);
    FUN_1003e50c8();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(ID *)(unaff_x20 + lVar1) = IVar2;
    FUN_10001486c(uVar4);
  }
  FUN_10001487c(IVar3);
  return IVar2;
}



/* Address: 0x1003e50c8 | FUN_1003e50c8 */

void FUN_1003e50c8(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar5 = &DAT_100ed0610;
  puVar4 = puVar5;
  _swift_allocObject(&DAT_100ed0610,0x18,7);
  _swift_unknownObjectWeakInit(puVar4 + 0x10,param_2);
  puVar1 = (undefined8 *)
           (param_1 + _TtCC11PasteCoreUI20ImageItemContentView11EditButtons::onRotateRight);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = FUN_1003e75e4;
  puVar1[1] = puVar4;
  _swift_retain(puVar4);
  FUN_100004550(uVar2,uVar3);
  _swift_release(puVar4);
  _swift_allocObject(&DAT_100ed0610,0x18,7);
  _swift_unknownObjectWeakInit(puVar5 + 0x10,param_2);
  puVar1 = (undefined8 *)
           (param_1 + _TtCC11PasteCoreUI20ImageItemContentView11EditButtons::onRotateLeft);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = FUN_1003e7604;
  puVar1[1] = puVar5;
  _swift_retain(puVar5);
  FUN_100004550(uVar2,uVar3);
  _swift_release(puVar5);
  return;
}



/* Address: 0x1003e51b4 | FUN_1003e51b4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_1003e51b4(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  ID IVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  ID unaff_x20;
  long lVar8;
  long lVar9;
  undefined1 auStack_58 [24];
  
  _swift_getObjectType();
  lVar9 = _TtC11PasteCoreUI20ImageItemContentView::editingConfiguration;
  lVar3 = unaff_x20 + _TtC11PasteCoreUI20ImageItemContentView::editingConfiguration;
  puVar6 = auStack_58;
  _swift_beginAccess(lVar3,puVar6,0x20,0);
  lVar8 = *(long *)(unaff_x20 + lVar9);
  if ((*(long *)(lVar8 + 0x10) == 0) || (FUN_1003dec78(), ((ulong)puVar6 & 1) == 0)) {
    _swift_endAccess(auStack_58);
  }
  else {
    lVar8 = *(long *)(*(long *)(lVar8 + 0x38) + lVar3 * 8);
    _swift_endAccess(auStack_58);
    lVar3 = lVar8 + 1;
    if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1003e53a0);
      (*pcVar1)();
    }
    lVar8 = 0;
    if (lVar3 < 4) {
      lVar8 = lVar3;
    }
    _swift_beginAccess(unaff_x20 + lVar9,auStack_58,0x21,0);
    uVar2 = *(undefined8 *)(unaff_x20 + lVar9);
    _swift_isUniquelyReferenced_nonNull_native(uVar2);
    uVar7 = *(undefined8 *)(unaff_x20 + lVar9);
    *(undefined8 *)(unaff_x20 + lVar9) = 0x8000000000000000;
    FUN_1003e6d58(lVar8,uVar2);
    *(undefined8 *)(unaff_x20 + lVar9) = uVar7;
    _swift_endAccess(auStack_58);
    FUN_1003bec68();
    FUN_1003e4fe0();
    lVar3 = _TtC7PasteUI17ZoomableImageView::image;
    lVar9 = *(long *)(unaff_x20 +
                     _TtC11PasteCoreUI20ImageItemContentView::___lazy_storage___zoomableImageView);
    _swift_beginAccess(lVar9 + _TtC7PasteUI17ZoomableImageView::image,auStack_58,0,0);
    lVar3 = *(long *)(lVar9 + lVar3);
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_100207054(0xc056800000000000,lVar3);
    }
    FUN_100240a64(lVar3);
    FUN_1003e597c(0);
    IVar4 = objc_stub::undoManager(unaff_x20);
    if (IVar4 != 0) {
      puVar5 = &DAT_100ed0610;
      _swift_allocObject(&DAT_100ed0610,0x18,7);
      _swift_unknownObjectWeakInit(puVar5 + 0x10);
      (extension_Foundation)::__C::NSUndoManager::_registerUndo();
      _swift_release(puVar5);
    }
  }
  return;
}



/* Address: 0x1003e53a0 | FUN_1003e53a0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_1003e53a0(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  ID IVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  ID unaff_x20;
  long lVar8;
  long lVar9;
  undefined1 auStack_58 [24];
  
  _swift_getObjectType();
  lVar9 = _TtC11PasteCoreUI20ImageItemContentView::editingConfiguration;
  lVar3 = unaff_x20 + _TtC11PasteCoreUI20ImageItemContentView::editingConfiguration;
  puVar6 = auStack_58;
  _swift_beginAccess(lVar3,puVar6,0x20,0);
  lVar8 = *(long *)(unaff_x20 + lVar9);
  if ((*(long *)(lVar8 + 0x10) == 0) || (FUN_1003dec78(), ((ulong)puVar6 & 1) == 0)) {
    _swift_endAccess(auStack_58);
  }
  else {
    lVar8 = *(long *)(*(long *)(lVar8 + 0x38) + lVar3 * 8);
    _swift_endAccess(auStack_58);
    lVar3 = lVar8 + -1;
    if (SBORROW8(lVar8,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1003e5590);
      (*pcVar1)();
    }
    lVar8 = 3;
    if (-1 < lVar3) {
      lVar8 = lVar3;
    }
    _swift_beginAccess(unaff_x20 + lVar9,auStack_58,0x21,0);
    uVar2 = *(undefined8 *)(unaff_x20 + lVar9);
    _swift_isUniquelyReferenced_nonNull_native(uVar2);
    uVar7 = *(undefined8 *)(unaff_x20 + lVar9);
    *(undefined8 *)(unaff_x20 + lVar9) = 0x8000000000000000;
    FUN_1003e6d58(lVar8,uVar2);
    *(undefined8 *)(unaff_x20 + lVar9) = uVar7;
    _swift_endAccess(auStack_58);
    FUN_1003bec68();
    FUN_1003e4fe0();
    lVar3 = _TtC7PasteUI17ZoomableImageView::image;
    lVar9 = *(long *)(unaff_x20 +
                     _TtC11PasteCoreUI20ImageItemContentView::___lazy_storage___zoomableImageView);
    _swift_beginAccess(lVar9 + _TtC7PasteUI17ZoomableImageView::image,auStack_58,0,0);
    lVar3 = *(long *)(lVar9 + lVar3);
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_100207054(0x4056800000000000,lVar3);
    }
    FUN_100240a64(lVar3);
    FUN_1003e597c(0);
    IVar4 = objc_stub::undoManager(unaff_x20);
    if (IVar4 != 0) {
      puVar5 = &DAT_100ed0610;
      _swift_allocObject(&DAT_100ed0610,0x18,7);
      _swift_unknownObjectWeakInit(puVar5 + 0x10);
      (extension_Foundation)::__C::NSUndoManager::_registerUndo();
      _swift_release(puVar5);
    }
  }
  return;
}



/* Address: 0x1003e5590 | FUN_1003e5590 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1003e5590(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  ID IVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined1 auStack_b0 [16];
  ID local_a0;
  
  _swift_getObjectType();
  lVar2 = _TtC11PasteCoreUI20ImageItemContentView::footer;
  uVar3 = 0;
  FUN_1003df434();
  _objc_allocWithZone();
  FUN_1003df4b8();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC11PasteCoreUI20ImageItemContentView::onCanCommitEditing);
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar2 = _TtC11PasteCoreUI20ImageItemContentView::checkerboardView;
  IVar4 = 0;
  FUN_1001fe13c();
  _objc_allocWithZone();
  IVar4 = objc_stub::init(IVar4);
  *(ID *)(unaff_x20 + lVar2) = IVar4;
  *(undefined8 *)
   (unaff_x20 + _TtC11PasteCoreUI20ImageItemContentView::___lazy_storage___zoomableImageView) = 0;
  *(undefined8 *)
   (unaff_x20 + _TtC11PasteCoreUI20ImageItemContentView::___lazy_storage___editToolbar) = 1;
  lVar2 = _TtC11PasteCoreUI20ImageItemContentView::editingConfiguration;
  puVar5 = &DAT_100fc3c80;
  FUN_1000037f0(&DAT_100fc3c80,&DAT_100c461f0);
  _swift_initStaticObject();
  FUN_1003cdc40();
  *(undefined **)(unaff_x20 + lVar2) = puVar5;
  *(undefined8 *)(unaff_x20 + _TtC11PasteCoreUI20ImageItemContentView::pendingCommitTask) = 0;
  *(undefined8 *)(unaff_x20 + _TtC11PasteCoreUI20ImageItemContentView::viewModel) = param_1;
  _swift_retain(param_1);
  IVar4 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffa0,"initWithFrame:",0,0,0,0);
  puVar5 = &DAT_100fc3e80;
  FUN_1000037f0(&DAT_100fc3e80,&DAT_100c45d50);
  _swift_initStackObject();
  *(undefined8 *)(puVar5 + 0x18) = 5;
  *(undefined8 *)(puVar5 + 0x10) = 2;
  uVar3 = *(undefined8 *)(IVar4 + _TtC11PasteCoreUI20ImageItemContentView::checkerboardView);
  *(undefined8 *)(puVar5 + 0x20) = uVar3;
  FUN_1003e4fe0();
  *(undefined8 *)(puVar5 + 0x28) = uVar3;
  local_a0 = IVar4;
  FUN_1001fa150(puVar5,FUN_1003e79d4,auStack_b0);
  _swift_bridgeObjectRelease();
  _swift_setDeallocating(puVar5);
  _swift_arrayDestroy(puVar5 + 0x20,*(undefined8 *)(puVar5 + 0x10),
                      PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8);
  FUN_1003bd9cc(*(undefined8 *)
                 (IVar4 + _TtC11PasteCoreUI20ImageItemContentView::
                          ___lazy_storage___zoomableImageView));
  FUN_100240a64();
  FUN_100240be8(0);
  FUN_1003e597c(0);
  _swift_release(param_1);
  return IVar4;
}



/* Address: 0x1003e57b8 | FUN_1003e57b8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_1003e57b8(undefined8 *param_1)

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
  _swift_getObjectType();
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
  FUN_1001fe13c(0);
  ppuVar4 = local_98;
  FUN_1001f97b4(uVar9,uVar10,uVar11,uVar12,ppuVar4,uVar3,&PTR_PTR_100ec00e8);
  FUN_100004594();
  FUN_1003e4fe0();
  ppuStack_78 = &PTR_PTR_100ec00e8;
  uVar9 = *puVar2;
  uVar10 = puVar2[1];
  uVar11 = puVar2[2];
  uVar12 = puVar2[3];
  uVar3 = 0;
  local_98[0] = param_1;
  local_80 = puVar1;
  FUN_100241da8(0);
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



/* Address: 0x1003e597c | FUN_1003e597c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003e597c(long param_1)

{
  ulong uVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  MainActor *pMVar5;
  undefined8 *puVar6;
  UnownedSerialExecutor UVar7;
  UnownedSerialExecutor UVar8;
  ulong uVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined8 uVar11;
  code *pcVar12;
  ulong uVar13;
  long lVar14;
  ulong *puVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  FUN_1003e4fe0();
  lVar4 = _TtC7PasteUI17ZoomableImageView::image;
  _swift_beginAccess(param_1 + _TtC7PasteUI17ZoomableImageView::image,auStack_78,0,0);
  if (*(long *)(param_1 + lVar4) != 0) {
    FUN_1003e4a34(0);
    _objc_allocWithZone();
    FUN_1003e45f8();
    FUN_1003df0b0();
    puVar6 = (undefined8 *)(unaff_x20 + _TtC11PasteCoreUI20ImageItemContentView::onCanCommitEditing)
    ;
    _swift_beginAccess(puVar6,auStack_90,0,0);
    lVar4 = _TtC11PasteCoreUI20ImageItemContentView::editingConfiguration;
    pcVar12 = (code *)*puVar6;
    if (pcVar12 != (code *)0x0) {
      uVar10 = puVar6[1];
      _swift_beginAccess(unaff_x20 + _TtC11PasteCoreUI20ImageItemContentView::editingConfiguration,
                         auStack_a8,0,0);
      lVar4 = *(long *)(unaff_x20 + lVar4);
      puVar15 = (ulong *)(lVar4 + 0x40);
      uVar9 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
      uVar18 = 0xffffffffffffffff;
      if (-uVar9 < 0x40) {
        uVar18 = ~(-1L << (-uVar9 & 0x3f));
      }
      uVar18 = uVar18 & *puVar15;
      _swift_bridgeObjectRetain_n(lVar4,2);
      thunk_FUN_100011128(pcVar12,uVar10);
      lVar16 = 0;
      uVar1 = uVar18;
      lVar2 = lVar16;
      do {
        while (lVar17 = lVar2, uVar13 = uVar1, uVar18 == 0) {
          bVar3 = SCARRY8(lVar16,1);
          lVar16 = lVar16 + 1;
          if (bVar3) {
                    /* WARNING: Does not return */
            pcVar12 = (code *)SoftwareBreakpoint(1,0x1003e5c28);
            (*pcVar12)();
          }
          if ((long)(0x3f - uVar9 >> 6) <= lVar16) {
            uVar13 = 0;
            uVar11 = 0;
            goto LAB_1003e5ba8;
          }
          uVar1 = uVar13;
          lVar2 = lVar17;
          uVar18 = puVar15[lVar16];
        }
        uVar1 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
        uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
        uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
        uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
        lVar14 = *(long *)(*(long *)(lVar4 + 0x38) + LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) * 8 +
                          lVar16 * 0x200);
        pMVar5 = Swift::MainActor::typeMetadataAccessor();
        pMVar5 = Swift::MainActor::get_shared(pMVar5,pMVar5);
        puVar6 = &DAT_100fc31a8;
        FUN_100003a00(&DAT_100fc31a8,PTR_typeMetadataAccessor_100eaec10,
                      PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
        UVar7 = Swift::Actor::get_unownedExecutor();
        UVar8 = UVar7;
        _swift_task_isCurrentExecutor();
        if (((ulong)UVar8.unknown & 1) == 0) {
          _swift_task_reportUnexpectedExecutor
                    ("PasteCoreUI/ImageItemContentView.swift",0x26,1,0xa1,UVar7.unknown,puVar6);
        }
        uVar18 = uVar18 - 1 & uVar18;
        _swift_release(pMVar5);
        uVar1 = uVar18;
        lVar2 = lVar16;
      } while (lVar14 == 0);
      uVar11 = 1;
LAB_1003e5ba8:
      _swift_bridgeObjectRelease(lVar4);
      FUN_10000c650(lVar4,puVar15,~uVar9,lVar17,uVar13);
      (*pcVar12)(uVar11);
      FUN_100004550(pcVar12,uVar10);
    }
  }
  return;
}



/* Address: 0x1003e5c28 | _TtC11PasteCoreUI20ImageItemContentView::initWithCoder: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC11PasteCoreUI20ImageItemContentView::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fc31a8;
  FUN_100003a00(&DAT_100fc31a8,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteCoreUI/ImageItemContentView.swift",0x26,1,0x2d,UVar4.unknown,puVar3);
  }
  FUN_1003e766c();
  _swift_release(pMVar2);
  return param_3;
}



/* Address: 0x1003e5cf0 | FUN_1003e5cf0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1003e5cf0(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  FUN_1003bec68();
  FUN_1003e4fe0();
  FUN_1003bd9cc();
  FUN_100240a64();
  FUN_100240be8(0);
  lVar1 = _TtC11PasteCoreUI20ImageItemContentView::editingConfiguration;
  _swift_beginAccess(unaff_x20 + _TtC11PasteCoreUI20ImageItemContentView::editingConfiguration,
                     auStack_48,0x21,0);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  _swift_isUniquelyReferenced_nonNull_native(uVar2);
  uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = 0x8000000000000000;
  FUN_1003e6d58(0,uVar2);
  *(undefined8 *)(unaff_x20 + lVar1) = uVar3;
  _swift_endAccess(auStack_48);
  FUN_1003e597c();
  return;
}



/* Address: 0x1003e5dd4 | FUN_1003e5dd4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003e5dd4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  FUN_1003bec68();
  FUN_1003e4fe0();
  lVar1 = _TtC7PasteUI17ZoomableImageView::image;
  _swift_beginAccess(param_1 + _TtC7PasteUI17ZoomableImageView::image,auStack_58,0,0);
  FUN_1003bde74(*(undefined8 *)(param_1 + lVar1));
  FUN_100240be8(0);
  lVar1 = _TtC11PasteCoreUI20ImageItemContentView::editingConfiguration;
  _swift_beginAccess(unaff_x20 + _TtC11PasteCoreUI20ImageItemContentView::editingConfiguration,
                     auStack_70,0x21,0);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  _swift_isUniquelyReferenced_nonNull_native(uVar2);
  uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = 0x8000000000000000;
  FUN_1003e6d58(0,uVar2);
  *(undefined8 *)(unaff_x20 + lVar1) = uVar3;
  _swift_endAccess(auStack_70);
  FUN_1003e597c();
  return;
}



/* Address: 0x1003e5ef4 | FUN_1003e5ef4 */

void FUN_1003e5ef4(void)

{
  undefined *puVar1;
  ContinuousClock CVar2;
  ulong uVar3;
  MainActor *pMVar4;
  undefined8 *puVar5;
  UnownedSerialExecutor UVar6;
  undefined8 in_x3;
  long lVar7;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = in_x3;
  CVar2 = Swift::ContinuousClock::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x30) = CVar2.unknown;
  lVar7 = *(long *)(CVar2.unknown + -8);
  *(long *)(unaff_x22 + 0x38) = lVar7;
  uVar3 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x40) = uVar3;
  pMVar4 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  *(MainActor **)(unaff_x22 + 0x48) = pMVar4;
  pMVar4 = Swift::MainActor::get_shared(pMVar4,pMVar4);
  *(MainActor **)(unaff_x22 + 0x50) = pMVar4;
  puVar5 = &DAT_100fc31a8;
  FUN_100003a00(&DAT_100fc31a8,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  *(undefined8 **)(unaff_x22 + 0x58) = puVar5;
  UVar6 = Swift::Actor::get_unownedExecutor();
  *(undefined **)(unaff_x22 + 0x60) = UVar6.unknown;
  *(undefined8 **)(unaff_x22 + 0x68) = puVar5;
  _swift_task_switch(FUN_1003e5fb4,UVar6.unknown,puVar5);
  return;
}



/* Address: 0x1003e5fb4 | FUN_1003e5fb4 */

void FUN_1003e5fb4(void)

{
  long *plVar1;
  long unaff_x22;
  
  (extension_Swift)::Swift::Clock::_get_continuous();
  plVar1 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x70) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1003e6038;
  FUN_1003e6bb4(400000000000000000,0,0,0,1);
  return;
}



/* Address: 0x1003e6038 | FUN_1003e6038 */

void FUN_1003e6038(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0x70));
  if (unaff_x20 == 0) {
    (**(code **)(*(long *)(lVar4 + 0x38) + 8))
              (*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x30));
    uVar2 = *(undefined8 *)(lVar4 + 0x60);
    uVar3 = *(undefined8 *)(lVar4 + 0x68);
    pcVar1 = FUN_1003e60a8;
  }
  else {
    _swift_errorRelease();
    uVar2 = *(undefined8 *)(lVar4 + 0x60);
    uVar3 = *(undefined8 *)(lVar4 + 0x68);
    pcVar1 = FUN_1003e6108;
  }
  _swift_task_switch(pcVar1,uVar2,uVar3);
  return;
}



/* Address: 0x1003e60a8 | FUN_1003e60a8 */

void FUN_1003e60a8(Task param_1)

{
  bool bVar1;
  long unaff_x22;
  
  bVar1 = (extension_Swift)::Swift::Task::_get_isCancelled(param_1);
  if (bVar1) {
    _swift_release(*(undefined8 *)(unaff_x22 + 0x50));
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x0001003e60e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  _swift_task_switch(FUN_1003e6178,0,0);
  return;
}



/* Address: 0x1003e6108 | FUN_1003e6108 */

void FUN_1003e6108(void)

{
  bool bVar1;
  Task TVar2;
  long unaff_x22;
  
  TVar2.unknown = *(undefined **)(unaff_x22 + 0x40);
  (**(code **)(*(long *)(unaff_x22 + 0x38) + 8))(TVar2.unknown,*(undefined8 *)(unaff_x22 + 0x30));
  bVar1 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar2);
  if (bVar1) {
    _swift_release(*(undefined8 *)(unaff_x22 + 0x50));
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x0001003e6154. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  _swift_task_switch(FUN_1003e6178,0,0);
  return;
}



/* Address: 0x1003e6178 | FUN_1003e6178 */

void FUN_1003e6178(MainActor *param_1)

{
  MainActor *pMVar1;
  UnownedSerialExecutor UVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x58);
  pMVar1 = Swift::MainActor::get_shared(*(MainActor **)(unaff_x22 + 0x48),param_1);
  *(MainActor **)(unaff_x22 + 0x78) = pMVar1;
  UVar2 = Swift::Actor::get_unownedExecutor();
  _swift_task_switch(FUN_1003e61e0,UVar2.unknown,uVar3);
  return;
}



/* Address: 0x1003e61e0 | FUN_1003e61e0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003e61e0(void)

{
  MainActor *pMVar1;
  UnownedSerialExecutor UVar2;
  UnownedSerialExecutor UVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x22;
  MainActor *this;
  long lVar6;
  
  pMVar1 = *(MainActor **)(unaff_x22 + 0x78);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x58);
  this = *(MainActor **)(unaff_x22 + 0x48);
  lVar6 = *(long *)(unaff_x22 + 0x28);
  _swift_release();
  pMVar1 = Swift::MainActor::get_shared(this,pMVar1);
  UVar2 = Swift::Actor::get_unownedExecutor();
  UVar3 = UVar2;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar3.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteCoreUI/ImageItemContentView.swift",0x26,1,0x54,UVar2.unknown,uVar5);
  }
  lVar6 = lVar6 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar6 != 0) {
    lVar4 = *(long *)(lVar6 + _TtC11PasteCoreUI20ImageItemContentView::pendingCommitTask);
    *(undefined8 *)(lVar6 + _TtC11PasteCoreUI20ImageItemContentView::pendingCommitTask) = 0;
    _swift_release();
    FUN_1003e4fe0();
    lVar6 = _TtC7PasteUI17ZoomableImageView::image;
    _swift_beginAccess(lVar4 + _TtC7PasteUI17ZoomableImageView::image,unaff_x22 + 0x10,0,0);
    FUN_1003bde74(*(undefined8 *)(lVar4 + lVar6));
    FUN_1003bed20(0);
  }
  _swift_release(pMVar1);
  _swift_task_switch(FUN_1003e632c,*(undefined8 *)(unaff_x22 + 0x60),
                     *(undefined8 *)(unaff_x22 + 0x68));
  return;
}



/* Address: 0x1003e632c | FUN_1003e632c */

void FUN_1003e632c(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x50));
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x0001003e6360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1003e6364 | FUN_1003e6364 */

void FUN_1003e6364(char *param_1,void *param_2,undefined8 param_3,undefined8 param_4,
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
  undefined1 auStack_c0 [8];
  undefined8 local_b8;
  undefined8 *puStack_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined *local_90;
  long lStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined *local_70;
  long lStack_68;
  
  puVar2 = &DAT_100fc3610;
  FUN_1000037f0(&DAT_100fc3610,&DAT_100c45d70);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = auStack_c0 + -extraout_x8;
  FUN_1003e7838(param_3,puVar9);
  TVar3 = Swift::TaskPriority::typeMetadataAccessor();
  lVar12 = *(long *)(TVar3.unknown + -8);
  puVar4 = puVar9;
  (**(code **)(lVar12 + 0x30))(puVar9,1,TVar3.unknown);
  TVar5.unknown = param_5;
  _swift_retain();
  if ((int)puVar4 == 1) {
    FUN_1003e7888(puVar9);
    uVar10 = 0x1c00;
  }
  else {
    _Var1 = Swift::TaskPriority::get_rawValue(TVar5);
    (**(code **)(lVar12 + 8))(puVar9,TVar3.unknown);
    uVar10 = (ulong)_Var1 | 0x1c00;
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
    FUN_1003e7888(param_3);
    puVar2 = &DAT_100ed0688;
    _swift_allocObject(&DAT_100ed0688,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_4;
    *(undefined **)(puVar2 + 0x18) = param_5;
    if (lVar11 == 0 && UVar6.unknown == (undefined *)0x0) {
      puVar8 = (undefined8 *)0x0;
    }
    else {
      local_80 = 0;
      uStack_78 = 0;
      puVar8 = &local_80;
      local_70 = UVar6.unknown;
      lStack_68 = lVar11;
    }
    _swift_task_create(uVar10,puVar8,PTR___type_metadata_for____100eae0c8 + 8,&DAT_100c46228,puVar2)
    ;
  }
  else {
    SVar13.bridgeObject = param_2;
    SVar13.str = param_1;
    CVar7 = Swift::String::get_utf8CString(SVar13);
    _swift_bridgeObjectRelease(param_2);
    puVar2 = &DAT_100ed06b0;
    _swift_allocObject(&DAT_100ed06b0,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_4;
    *(undefined **)(puVar2 + 0x18) = param_5;
    _swift_retain(param_5);
    if (lVar11 == 0 && UVar6.unknown == (undefined *)0x0) {
      puStack_b0 = (undefined8 *)0x0;
    }
    else {
      local_a0 = 0;
      uStack_98 = 0;
      puStack_b0 = &local_a0;
      local_90 = UVar6.unknown;
      lStack_88 = lVar11;
    }
    local_b8 = 7;
    local_a8 = CVar7.unknown + 0x20;
    _swift_task_create(uVar10,&local_b8,PTR___type_metadata_for____100eae0c8 + 8,&DAT_100c46230,
                       puVar2);
    _swift_release(CVar7.unknown);
    FUN_1003e7888(param_3);
    _swift_release(param_5);
  }
  return;
}



/* Address: 0x1003e65c0 | FUN_1003e65c0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

MainActor * FUN_1003e65c0(undefined8 param_1,long param_2,long param_3)

{
  undefined *puVar1;
  code *pcVar2;
  MainActor *pMVar3;
  undefined8 *puVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  puVar4 = &DAT_100fc31a8;
  FUN_100003a00(&DAT_100fc31a8,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar5 = Swift::Actor::get_unownedExecutor();
  UVar6 = UVar5;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar6.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteCoreUI/ImageItemContentView.swift",0x26,1,0x57,UVar5.unknown,puVar4);
  }
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 != 0) {
    if (!SBORROW8(0,param_3)) {
      FUN_1003e4a54(-param_3);
      _swift_release(pMVar3);
      return (MainActor *)0x0;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1003e66ac);
    (*pcVar2)();
  }
  _swift_release(pMVar3);
  return pMVar3;
}



/* Address: 0x1003e66ac | _TtC11PasteCoreUI20ImageItemContentView::initWithFrame: */

/* Function Stack Size: 0x30 bytes */

ID _TtC11PasteCoreUI20ImageItemContentView::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

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
  puVar3 = &DAT_100fc31a8;
  FUN_100003a00(&DAT_100fc31a8,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteCoreUI/ImageItemContentView.swift",0x26,1,10,UVar4.unknown,puVar3);
  }
  __swift_stdlib_reportUnimplementedInitializer
            ("PasteCoreUI.ImageItemContentView",0x20,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1003e6754);
  (*pcVar2)();
}



/* Address: 0x1003e6754 | _TtC11PasteCoreUI20ImageItemContentView::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11PasteCoreUI20ImageItemContentView::_cxx_destruct(ID param_1,SEL param_2)

{
  FUN_100004550(*(undefined8 *)(param_1 + onCanCommitEditing),
                ((undefined8 *)(param_1 + onCanCommitEditing))[1]);
  FUN_10001486c(*(undefined8 *)(param_1 + ___lazy_storage___editToolbar));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + editingConfiguration));
  _swift_release(*(undefined8 *)(param_1 + pendingCommitTask));
  _swift_release(*(undefined8 *)(param_1 + viewModel));
  return;
}



/* Address: 0x1003e67f0 | FUN_1003e67f0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1003e67f0(void)

{
  return ZEXT816(0x100f9afe8);
}



/* Address: 0x1003e6810 | FUN_1003e6810 */

void FUN_1003e6810(void)

{
  return;
}



/* Address: 0x1003e6814 | FUN_1003e6814 */

undefined1  [16] FUN_1003e6814(void)

{
  return ZEXT816(0x100ed0570);
}



/* Address: 0x1003e6824 | thunk_FUN_1003e6828 */

void thunk_FUN_1003e6828(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc3c48 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c46178;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c46178,&DAT_100ed0570);
  DAT_100fc3c48 = pTVar1;
  return;
}



/* Address: 0x1003e6828 | FUN_1003e6828 */

void FUN_1003e6828(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc3c48 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c46178;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c46178,&DAT_100ed0570);
  DAT_100fc3c48 = pTVar1;
  return;
}



/* Address: 0x1003e6868 | FUN_1003e6868 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_1003e6868(void)

{
  long *unaff_x20;
  
  return *(undefined8 *)(*unaff_x20 + _TtC11PasteCoreUI20ImageItemContentView::footer);
}



/* Address: 0x1003e687c | FUN_1003e687c */

undefined1  [16] FUN_1003e687c(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long *unaff_x20;
  undefined1 auStack_38 [24];
  
  pauVar1 = (undefined1 (*) [16])
            (*unaff_x20 + _TtC11PasteCoreUI20ImageItemContentView::onCanCommitEditing);
  _swift_beginAccess(pauVar1,auStack_38,0,0);
  auVar2 = *pauVar1;
  thunk_FUN_100011128(*(undefined8 *)*pauVar1,*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Address: 0x1003e68d8 | FUN_1003e68d8 */

void FUN_1003e68d8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(*unaff_x20 + _TtC11PasteCoreUI20ImageItemContentView::onCanCommitEditing);
  _swift_beginAccess(puVar1,auStack_48,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  FUN_100004550(uVar2,uVar3);
  return;
}



/* Address: 0x1003e6938 | FUN_1003e6938 */

undefined1  [16] FUN_1003e6938(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  undefined1 auVar3 [16];
  
  lVar1 = _TtC11PasteCoreUI20ImageItemContentView::onCanCommitEditing;
  lVar2 = *unaff_x20;
  _swift_beginAccess(lVar2 + _TtC11PasteCoreUI20ImageItemContentView::onCanCommitEditing,param_1,
                     0x21,0);
  auVar3._8_8_ = lVar2 + lVar1;
  auVar3._0_8_ = _swift_endAccess;
  return auVar3;
}



/* Address: 0x1003e697c | FUN_1003e697c */

void FUN_1003e697c(void)

{
  FUN_1003e5048();
  return;
}



/* Address: 0x1003e699c | FUN_1003e699c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1003e699c(void)

{
  FUN_1003e4fe0();
  FUN_100240be8(1);
  return 0;
}



/* Address: 0x1003e69cc | FUN_1003e69cc */

void FUN_1003e69cc(void)

{
  FUN_1003e5cf0();
  return;
}



/* Address: 0x1003e69ec | FUN_1003e69ec */

void FUN_1003e69ec(void)

{
  FUN_1003e5dd4();
  return;
}



/* Address: 0x1003e6a0c | FUN_1003e6a0c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

MainActor * FUN_1003e6a0c(undefined8 param_1,long param_2,undefined8 param_3,code *param_4)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fc31a8;
  FUN_100003a00(&DAT_100fc31a8,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteCoreUI/ImageItemContentView.swift",0x26,1,param_3,UVar4.unknown,puVar3);
  }
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 != 0) {
    (*param_4)();
    _swift_release(pMVar2);
    return (MainActor *)0x0;
  }
  _swift_release(pMVar2);
  return pMVar2;
}



/* Address: 0x1003e6afc | FUN_1003e6afc */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003e6afc(void)

{
  code *pcVar1;
  ID self;
  
  self = objc_stub::mainScreen((ID)&_OBJC_CLASS___NSScreen);
  if (self == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1003e6b94);
    (*pcVar1)();
  }
  objc_stub::frame(self);
  FUN_1003bd740(0);
  return;
}



/* Address: 0x1003e6b94 | FUN_1003e6b94 */

void FUN_1003e6b94(void)

{
  FUN_1003e6afc();
  return;
}



/* Address: 0x1003e6bb4 | FUN_1003e6bb4 */

void FUN_1003e6bb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  Instant IVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = unaff_x20;
  IVar1 = Swift::ContinuousClock::Instant::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x40) = IVar1.unknown;
  lVar4 = *(long *)(IVar1.unknown + -8);
  *(long *)(unaff_x22 + 0x48) = lVar4;
  uVar3 = *(long *)(lVar4 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x50) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x58) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  *(undefined8 *)(unaff_x22 + 0x10) = param_3;
  *(undefined8 *)(unaff_x22 + 0x18) = param_4;
  *(undefined1 *)(unaff_x22 + 0x20) = param_5;
  _swift_task_switch(FUN_1003e6c50,0,0);
  return;
}



/* Address: 0x1003e6c50 | FUN_1003e6c50 */

void FUN_1003e6c50(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
  lVar3 = *(long *)(unaff_x22 + 0x48);
  Swift::ContinuousClock::typeMetadataAccessor();
  FUN_100003a00(&DAT_100fc3c88,PTR_typeMetadataAccessor_100eaef18,
                PTR_Swift__Swift__ContinuousClock_>Swift__Clock_100eaef28);
  Swift::Clock::_get_now();
  FUN_100003a00(&DAT_100fc3c90,PTR_typeMetadataAccessor_100eaeef0,
                PTR_Swift__Swift__ContinuousClock__Instant_>Swift__InstantProtocol_100eaef08);
  Swift::InstantProtocol::_advanced();
  pcVar5 = *(code **)(lVar3 + 8);
  *(code **)(unaff_x22 + 0x60) = pcVar5;
  (*pcVar5)(uVar1,uVar2);
  plVar4 = (long *)(ulong)*(uint *)(PTR__sleep_100eaefe8 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x68) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_100091908;
  Swift::Clock::_sleep();
  return;
}



/* Address: 0x1003e6d58 | FUN_1003e6d58 */

void FUN_1003e6d58(ulong param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar8 = *unaff_x20;
  uVar2 = param_1;
  uVar5 = param_2;
  FUN_1003dec78();
  lVar6 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)uVar5 & 1;
  uVar3 = lVar6 + uVar7;
  if (SCARRY8(lVar6,uVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1003e6df8);
    (*pcVar1)();
  }
  if (*(long *)(lVar8 + 0x18) < (long)uVar3) {
    uVar4 = (uint)param_2 & 1;
    FUN_1003e70f8();
    FUN_1003dec78();
    uVar2 = uVar3;
    if (((uint)uVar5 & 1) != (uVar4 & 1)) {
      Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1003e6ddc);
      (*pcVar1)();
    }
  }
  else if ((param_2 & 1) == 0) {
    FUN_1003e6e5c();
    lVar6 = *unaff_x20;
    goto joined_r0x0001003e6e0c;
  }
  lVar6 = *unaff_x20;
joined_r0x0001003e6e0c:
  if ((uVar5 & 1) == 0) {
    lVar8 = lVar6 + (uVar2 >> 6) * 8;
    *(ulong *)(lVar8 + 0x40) = *(ulong *)(lVar8 + 0x40) | 1L << (uVar2 & 0x3f);
    *(ulong *)(*(long *)(lVar6 + 0x38) + uVar2 * 8) = param_1;
    if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1003e6e5c);
      (*pcVar1)();
    }
    *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
  }
  else {
    *(ulong *)(*(long *)(lVar6 + 0x38) + uVar2 * 8) = param_1;
  }
  return;
}



/* Address: 0x1003e6e5c | FUN_1003e6e5c */

void FUN_1003e6e5c(void)

{
  __RawDictionaryStorage *p_Var1;
  code *pcVar2;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  
  this = (_DictionaryStorage *)&DAT_100fc31a0;
  FUN_1000037f0(&DAT_100fc31a0,&DAT_100c45580);
  original = (__RawDictionaryStorage *)*unaff_x20;
  p_Var3 = original;
  Swift::_DictionaryStorage::_copy(this,original);
  if (*(long *)(original + 0x10) != 0) {
    p_Var1 = original + 0x40;
    uVar4 = (1L << ((ulong)(byte)p_Var3[0x20] & 0x3f)) + 0x3fU >> 6;
    if (p_Var3 != original || p_Var1 + uVar4 * 8 <= p_Var3 + 0x40) {
      _memmove(p_Var3 + 0x40,p_Var1,uVar4 << 3);
    }
    lVar5 = 0;
    *(undefined8 *)(p_Var3 + 0x10) = *(undefined8 *)(original + 0x10);
    uVar6 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
    uVar4 = 0xffffffffffffffff;
    if (((byte)original[0x20] & 0x3f) < 6) {
      uVar4 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar4 = uVar4 & *(ulong *)(original + 0x40);
    do {
      lVar7 = lVar5;
      if (uVar4 == 0) {
        do {
          lVar5 = lVar7 + 1;
          if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1003e6f9c);
            (*pcVar2)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar5) goto LAB_1003e6f7c;
          uVar4 = *(ulong *)(p_Var1 + lVar5 * 8);
          lVar7 = lVar7 + 1;
        } while (uVar4 == 0);
        uVar8 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar4 = uVar4 - 1 & uVar4;
        uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar5 * 0x40;
      }
      else {
        uVar8 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar4 = uVar4 - 1 & uVar4;
        uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar5 << 6;
      }
      *(undefined8 *)(*(long *)(p_Var3 + 0x38) + uVar8 * 8) =
           *(undefined8 *)(*(long *)(original + 0x38) + uVar8 * 8);
    } while( true );
  }
LAB_1003e6f7c:
  _swift_release(original);
  *unaff_x20 = (long)p_Var3;
  return;
}



/* Address: 0x1003e6f9c | FUN_1003e6f9c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1003e6f9c(void)

{
  __RawDictionaryStorage *p_Var1;
  long lVar2;
  code *pcVar3;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  long lVar9;
  
  this = (_DictionaryStorage *)&DAT_100fc31b8;
  FUN_1000037f0(&DAT_100fc31b8,&DAT_100c455a8);
  original = (__RawDictionaryStorage *)*unaff_x20;
  p_Var4 = original;
  Swift::_DictionaryStorage::_copy(this,original);
  if (*(long *)(original + 0x10) != 0) {
    p_Var1 = original + 0x40;
    uVar6 = (1L << ((ulong)(byte)p_Var4[0x20] & 0x3f)) + 0x3fU >> 6;
    if (p_Var4 != original || p_Var1 + uVar6 * 8 <= p_Var4 + 0x40) {
      _memmove(p_Var4 + 0x40,p_Var1,uVar6 << 3);
    }
    lVar9 = 0;
    *(undefined8 *)(p_Var4 + 0x10) = *(undefined8 *)(original + 0x10);
    uVar7 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
    uVar6 = 0xffffffffffffffff;
    if (((byte)original[0x20] & 0x3f) < 6) {
      uVar6 = ~(-1L << (uVar7 & 0x3f));
    }
    uVar6 = uVar6 & *(ulong *)(original + 0x40);
    if (uVar6 == 0) goto LAB_1003e7078;
    do {
      uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar6 = uVar6 - 1 & uVar6;
      while( true ) {
        uVar8 = LZCOUNT(uVar8) | lVar9 << 6;
        uVar5 = *(undefined8 *)(*(long *)(original + 0x38) + uVar8 * 8);
        *(undefined8 *)(*(long *)(p_Var4 + 0x30) + uVar8 * 8) =
             *(undefined8 *)(*(long *)(original + 0x30) + uVar8 * 8);
        *(undefined8 *)(*(long *)(p_Var4 + 0x38) + uVar8 * 8) = uVar5;
        if (uVar6 != 0) break;
LAB_1003e7078:
        do {
          lVar2 = lVar9 + 1;
          if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1003e70f8);
            (*pcVar3)();
          }
          if ((long)(uVar7 + 0x3f >> 6) <= lVar2) goto LAB_1003e70d0;
          uVar6 = *(ulong *)(p_Var1 + lVar2 * 8);
          lVar9 = lVar9 + 1;
        } while (uVar6 == 0);
        uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
        uVar6 = uVar6 - 1 & uVar6;
        lVar9 = lVar2;
      }
    } while( true );
  }
LAB_1003e70d0:
  _swift_release(original);
  *unaff_x20 = (long)p_Var4;
  return;
}



/* Address: 0x1003e70f8 | FUN_1003e70f8 */

void FUN_1003e70f8(undefined *param_1,bool param_2)

{
  bool bVar1;
  code *pcVar2;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var3;
  Hasher HVar4;
  ulong uVar5;
  Hasher capacity;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  undefined8 uVar12;
  __RawDictionaryStorage *p_Var13;
  long lVar14;
  
  original = (__RawDictionaryStorage *)*unaff_x20;
  capacity.unknown = *(undefined **)(original + 0x18);
  if ((long)*(undefined **)(original + 0x18) <= (long)param_1) {
    capacity.unknown = param_1;
  }
  this = (_DictionaryStorage *)&DAT_100fc31a0;
  FUN_1000037f0(&DAT_100fc31a0,&DAT_100c45580);
  p_Var3 = original;
  Swift::_DictionaryStorage::_resize(this,original,(__int64)capacity.unknown,param_2);
  if (*(long *)(original + 0x10) == 0) {
LAB_1003e7328:
    _swift_release(original);
    *unaff_x20 = (long)p_Var3;
    return;
  }
  p_Var13 = original + 0x40;
  uVar9 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar11 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar11 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar11 = uVar11 & *(ulong *)p_Var13;
  lVar7 = 0;
  do {
    if (uVar11 == 0) {
      do {
        lVar14 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1003e7358);
          (*pcVar2)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar14) {
          if ((param_2 & 1U) != 0) {
            uVar11 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
            if (((byte)original[0x20] & 0x3f) < 6) {
              *(long *)p_Var13 = -1L << (uVar11 & 0x3f);
            }
            else {
              _bzero(p_Var13,uVar11 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(original + 0x10) = 0;
          }
          goto LAB_1003e7328;
        }
        uVar11 = *(ulong *)(p_Var13 + lVar14 * 8);
        lVar7 = lVar7 + 1;
      } while (uVar11 == 0);
      uVar6 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar11 = uVar11 - 1 & uVar11;
    }
    else {
      uVar6 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar11 = uVar11 - 1 & uVar11;
      lVar14 = lVar7;
    }
    uVar12 = *(undefined8 *)(*(long *)(original + 0x38) + (LZCOUNT(uVar6) | lVar14 << 6) * 8);
    Swift::Hasher::init(*(__int64 *)(p_Var3 + 0x28));
    HVar4.unknown = (undefined *)0x0;
    Swift::Hasher::_combine(0,capacity);
    uVar5 = Swift::Hasher::_finalize(HVar4);
    uVar10 = -1L << ((ulong)(byte)p_Var3[0x20] & 0x3f);
    uVar5 = uVar5 & (uVar10 ^ 0xffffffffffffffff);
    uVar8 = uVar5 >> 6;
    uVar6 = -1L << (uVar5 & 0x3f) & (*(ulong *)(p_Var3 + uVar8 * 8 + 0x40) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      bVar1 = false;
      uVar6 = 0x3f - uVar10 >> 6;
      do {
        uVar5 = uVar8 + 1;
        if ((uVar5 == uVar6) && (bVar1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1003e735c);
          (*pcVar2)();
        }
        uVar8 = 0;
        if (uVar5 != uVar6) {
          uVar8 = uVar5;
        }
        bVar1 = (bool)(uVar5 == uVar6 | bVar1);
      } while (*(ulong *)(p_Var3 + uVar8 * 8 + 0x40) == 0xffffffffffffffff);
      uVar6 = ~*(ulong *)(p_Var3 + uVar8 * 8 + 0x40);
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar8 << 6;
    }
    else {
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar5 & 0x7fffffffffffffc0;
    }
    uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var3 + uVar8 + 0x40) = 1L << (uVar6 & 0x3f) | *(ulong *)(p_Var3 + uVar8 + 0x40);
    *(undefined8 *)(*(long *)(p_Var3 + 0x38) + uVar6 * 8) = uVar12;
    *(long *)(p_Var3 + 0x10) = *(long *)(p_Var3 + 0x10) + 1;
    lVar7 = lVar14;
  } while( true );
}



/* Address: 0x1003e735c | FUN_1003e735c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1003e735c(long param_1,undefined *param_2)

{
  __int64 capacity;
  bool bVar1;
  code *pcVar2;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var3;
  ulong uVar4;
  Hasher HVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  __RawDictionaryStorage *p_Var11;
  undefined8 uVar12;
  __uint64 _Var13;
  long lVar14;
  ulong uVar15;
  
  original = (__RawDictionaryStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_DictionaryStorage *)&DAT_100fc31b8;
  FUN_1000037f0(&DAT_100fc31b8,&DAT_100c455a8);
  p_Var3 = original;
  HVar5.unknown = param_2;
  Swift::_DictionaryStorage::_resize(this,original,capacity,SUB81(param_2,0));
  if (*(long *)(original + 0x10) == 0) {
LAB_1003e758c:
    _swift_release(original);
    *unaff_x20 = (long)p_Var3;
    return;
  }
  p_Var11 = original + 0x40;
  uVar9 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar15 = uVar15 & *(ulong *)p_Var11;
  lVar7 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar14 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1003e75bc);
          (*pcVar2)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar14) {
          if (((ulong)param_2 & 1) != 0) {
            uVar15 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
            if (((byte)original[0x20] & 0x3f) < 6) {
              *(long *)p_Var11 = -1L << (uVar15 & 0x3f);
            }
            else {
              _bzero(p_Var11,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(original + 0x10) = 0;
          }
          goto LAB_1003e758c;
        }
        uVar15 = *(ulong *)(p_Var11 + lVar14 * 8);
        lVar7 = lVar7 + 1;
      } while (uVar15 == 0);
      uVar6 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar6 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar14 = lVar7;
    }
    uVar6 = LZCOUNT(uVar6) | lVar14 << 6;
    _Var13 = *(__uint64 *)(*(long *)(original + 0x30) + uVar6 * 8);
    uVar12 = *(undefined8 *)(*(long *)(original + 0x38) + uVar6 * 8);
    uVar4 = Swift::Hasher::_hash(*(__int64 *)(p_Var3 + 0x28),_Var13,HVar5);
    uVar10 = -1L << ((ulong)(byte)p_Var3[0x20] & 0x3f);
    uVar4 = uVar4 & (uVar10 ^ 0xffffffffffffffff);
    uVar8 = uVar4 >> 6;
    uVar6 = -1L << (uVar4 & 0x3f) & (*(ulong *)(p_Var3 + uVar8 * 8 + 0x40) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      bVar1 = false;
      uVar6 = 0x3f - uVar10 >> 6;
      do {
        uVar4 = uVar8 + 1;
        if ((uVar4 == uVar6) && (bVar1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1003e75c0);
          (*pcVar2)();
        }
        uVar8 = 0;
        if (uVar4 != uVar6) {
          uVar8 = uVar4;
        }
        bVar1 = (bool)(uVar4 == uVar6 | bVar1);
      } while (*(ulong *)(p_Var3 + uVar8 * 8 + 0x40) == 0xffffffffffffffff);
      uVar6 = ~*(ulong *)(p_Var3 + uVar8 * 8 + 0x40);
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar8 << 6;
    }
    else {
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar4 & 0x7fffffffffffffc0;
    }
    uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var3 + uVar8 + 0x40) = 1L << (uVar6 & 0x3f) | *(ulong *)(p_Var3 + uVar8 + 0x40);
    *(__uint64 *)(*(long *)(p_Var3 + 0x30) + uVar6 * 8) = _Var13;
    *(undefined8 *)(*(long *)(p_Var3 + 0x38) + uVar6 * 8) = uVar12;
    *(long *)(p_Var3 + 0x10) = *(long *)(p_Var3 + 0x10) + 1;
    lVar7 = lVar14;
  } while( true );
}



/* Address: 0x1003e75c0 | FUN_1003e75c0 */

void FUN_1003e75c0(void)

{
  long unaff_x20;
  
  _swift_unknownObjectWeakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x1003e75e4 | FUN_1003e75e4 */

void FUN_1003e75e4(void)

{
  FUN_10007abf4();
  return;
}



/* Address: 0x1003e7604 | FUN_1003e7604 */

void FUN_1003e7604(void)

{
  FUN_10007abf4();
  return;
}



/* Address: 0x1003e7624 | FUN_1003e7624 */

void FUN_1003e7624(void)

{
  FUN_1003e6a0c();
  return;
}



/* Address: 0x1003e7648 | FUN_1003e7648 */

void FUN_1003e7648(void)

{
  FUN_1003e6a0c();
  return;
}


