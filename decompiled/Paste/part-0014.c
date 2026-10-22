/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10002358c | _TtC5PasteP33_57C9F60CD5BFD66172B46B652E0868F711ColorPicker::initWithFrame: */

/* Function Stack Size: 0x30 bytes */

ID _TtC5PasteP33_57C9F60CD5BFD66172B46B652E0868F711ColorPicker::initWithFrame_
             (ID param_1,SEL param_2,CGRect param_3)

{
  FUN_100024160(param_1,param_2,0x48,"Paste.ColorPicker",0x11,param_3.field1_0x10.field1_0x8);
  return param_1;
}



/* Address: 0x1000235a0 | _TtC5PasteP33_57C9F60CD5BFD66172B46B652E0868F711ColorPicker::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC5PasteP33_57C9F60CD5BFD66172B46B652E0868F711ColorPicker::_cxx_destruct
               (ID param_1,SEL param_2)

{
  _swift_release(*(undefined8 *)(param_1 + onSelect + 8));
  return;
}



/* Address: 0x1000235dc | FUN_1000235dc */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1000235dc(void)

{
  return ZEXT816(0x100f8fa20);
}



/* Address: 0x1000235fc | FUN_1000235fc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

undefined8 FUN_1000235fc(void)

{
  char cVar1;
  long lVar2;
  ID IVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long unaff_x20;
  ulong *puVar6;
  
  puVar4 = &_TtC5PasteP33_57C9F60CD5BFD66172B46B652E0868F715ColorPickerCell::
            ___lazy_storage___selectionView;
  FUN_100023790();
  objc_stub::setAlphaValue_((ID)puVar4,0x3fe3333333333333);
  lVar2 = _TtC5PasteP33_57C9F60CD5BFD66172B46B652E0868F715ColorPickerCell::
          ___lazy_storage___selectionView;
  if (*(char *)(unaff_x20 +
               _TtC5PasteP33_57C9F60CD5BFD66172B46B652E0868F715ColorPickerCell::isSelected) ==
      '\x01') {
    puVar6 = *(ulong **)
              (unaff_x20 +
              _TtC5PasteP33_57C9F60CD5BFD66172B46B652E0868F715ColorPickerCell::
              ___lazy_storage___selectionView);
    IVar3 = NSColor::textBackgroundColor((ID)&_OBJC_CLASS___NSColor);
    (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *puVar6) + 0x60))(IVar3);
    puVar4 = *(undefined8 **)(unaff_x20 + lVar2);
  }
  else {
    cVar1 = *(char *)(unaff_x20 +
                     _TtC5PasteP33_57C9F60CD5BFD66172B46B652E0868F715ColorPickerCell::isHovered);
    puVar6 = *(ulong **)
              (unaff_x20 +
              _TtC5PasteP33_57C9F60CD5BFD66172B46B652E0868F715ColorPickerCell::
              ___lazy_storage___selectionView);
    IVar3 = NSColor::clearColor((ID)&_OBJC_CLASS___NSColor);
    (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *puVar6) + 0x60))(IVar3);
    puVar4 = *(undefined8 **)(unaff_x20 + lVar2);
    if (cVar1 != '\x01') {
      IVar3 = NSColor::clearColor((ID)&_OBJC_CLASS___NSColor);
      objc_stub::setBorderColor_((ID)puVar4,IVar3);
      return 0;
    }
  }
  puVar5 = puVar4;
  FUN_1001fef10();
  objc_stub::setBorderColor_((ID)puVar4,*puVar5);
  return 0;
}



/* Address: 0x100023790 | FUN_100023790 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100023790(long *param_1)

{
  ID self;
  long lVar1;
  long unaff_x20;
  
  lVar1 = *param_1;
  self = *(ID *)(unaff_x20 + lVar1);
  if (self == 0) {
    FUN_100236364();
    _objc_allocWithZone();
    self = objc_stub::init(self);
    *(ID *)(unaff_x20 + lVar1) = self;
  }
  return self;
}



/* Address: 0x1000237f4 | FUN_1000237f4 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

ID FUN_1000237f4(undefined8 param_1)

{
  ID IVar1;
  ulong *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long unaff_x20;
  undefined1 auStack_a0 [16];
  ID local_90;
  
  _swift_getObjectType();
  *(undefined1 *)
   (unaff_x20 + _TtC5PasteP33_57C9F60CD5BFD66172B46B652E0868F715ColorPickerCell::isSelected) = 0;
  *(undefined1 *)
   (unaff_x20 + _TtC5PasteP33_57C9F60CD5BFD66172B46B652E0868F715ColorPickerCell::isHovered) = 0;
  puVar2 = (ulong *)&_TtC5PasteP33_57C9F60CD5BFD66172B46B652E0868F715ColorPickerCell::
                     ___lazy_storage___colorIndicator;
  *(undefined8 *)
   (unaff_x20 +
   _TtC5PasteP33_57C9F60CD5BFD66172B46B652E0868F715ColorPickerCell::___lazy_storage___colorIndicator
   ) = 0;
  puVar4 = &_TtC5PasteP33_57C9F60CD5BFD66172B46B652E0868F715ColorPickerCell::
            ___lazy_storage___selectionView;
  *(undefined8 *)
   (unaff_x20 +
   _TtC5PasteP33_57C9F60CD5BFD66172B46B652E0868F715ColorPickerCell::___lazy_storage___selectionView)
       = 0;
  *(char *)(unaff_x20 + _TtC5PasteP33_57C9F60CD5BFD66172B46B652E0868F715ColorPickerCell::color) =
       (char)param_1;
  IVar1 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffb0,"initWithFrame:",0,0,0,0);
  FUN_100023790();
  FUN_1003de9a0(param_1);
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *puVar2) + 0x60))();
  puVar3 = &DAT_100fa6b80;
  FUN_1000037f0(&DAT_100fa6b80,&DAT_100c23760);
  _swift_initStackObject();
  *(undefined8 *)(puVar3 + 0x18) = 5;
  *(undefined8 *)(puVar3 + 0x10) = 2;
  FUN_100023790();
  *(undefined8 **)(puVar3 + 0x20) = puVar4;
  *(undefined8 *)(puVar3 + 0x28) =
       *(undefined8 *)
        (IVar1 + _TtC5PasteP33_57C9F60CD5BFD66172B46B652E0868F715ColorPickerCell::
                 ___lazy_storage___colorIndicator);
  local_90 = IVar1;
  FUN_1001fa150(puVar3,FUN_100024428,auStack_a0);
  _swift_bridgeObjectRelease();
  _swift_setDeallocating(puVar3);
  _swift_arrayDestroy(puVar3 + 0x20,*(undefined8 *)(puVar3 + 0x10),
                      PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8);
  FUN_1000235fc();
  return IVar1;
}



/* Address: 0x10002397c | FUN_10002397c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_10002397c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 **ppuVar5;
  undefined8 **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *local_a0 [3];
  undefined8 *local_88;
  undefined **ppuStack_80;
  undefined8 *local_78;
  
  puVar1 = param_1;
  _swift_getObjectType();
  puVar2 = &_TtC5PasteP33_57C9F60CD5BFD66172B46B652E0868F715ColorPickerCell::
            ___lazy_storage___selectionView;
  FUN_100023790();
  ppuStack_80 = &PTR_PTR_100ec00e8;
  puVar3 = param_1;
  local_a0[0] = param_1;
  local_88 = puVar1;
  local_78 = puVar2;
  FUN_1001f9774();
  uVar10 = *puVar3;
  uVar11 = puVar3[1];
  uVar12 = puVar3[2];
  uVar13 = puVar3[3];
  uVar4 = 0;
  FUN_100236364(0);
  ppuVar5 = local_a0;
  FUN_1001f97b4(uVar10,uVar11,uVar12,uVar13,ppuVar5,uVar4,&PTR_PTR_100ec00e8);
  FUN_100004594(local_a0);
  puVar2 = &_TtC5PasteP33_57C9F60CD5BFD66172B46B652E0868F715ColorPickerCell::
            ___lazy_storage___colorIndicator;
  FUN_100023790();
  ppuStack_80 = &PTR_PTR_100ec00e8;
  ppuVar6 = local_a0;
  local_a0[0] = param_1;
  local_88 = puVar1;
  local_78 = puVar2;
  FUN_1001f97b4(0x4010000000000000,0x4010000000000000,0x4010000000000000,0x4010000000000000,ppuVar6,
                uVar4,&PTR_PTR_100ec00e8);
  FUN_100004594(local_a0);
  puVar7 = &DAT_100fa8830;
  FUN_1000037f0(&DAT_100fa8830,&DAT_100c24a20);
  _swift_initStackObject();
  *(undefined8 *)(puVar7 + 0x18) = 4;
  *(undefined8 *)(puVar7 + 0x10) = 2;
  puVar8 = &DAT_100fa8840;
  FUN_1000037f0(&DAT_100fa8840,&DAT_100c237d0);
  *(undefined **)(puVar7 + 0x38) = puVar8;
  *(undefined ***)(puVar7 + 0x40) = &PTR_PTR_100ec00b8;
  *(undefined8 ***)(puVar7 + 0x20) = ppuVar5;
  *(undefined **)(puVar7 + 0x60) = puVar8;
  *(undefined ***)(puVar7 + 0x68) = &PTR_PTR_100ec00b8;
  *(undefined8 ***)(puVar7 + 0x48) = ppuVar6;
  puVar9 = puVar7;
  FUN_1001f8d60(puVar7);
  _swift_setDeallocating(puVar7);
  uVar4 = *(undefined8 *)(puVar7 + 0x10);
  puVar8 = &DAT_100fa6bc0;
  FUN_1000037f0(&DAT_100fa6bc0,&DAT_100c24a30);
  _swift_arrayDestroy(puVar7 + 0x20,uVar4,puVar8);
  return puVar9;
}



/* Address: 0x100023b4c | _TtC5PasteP33_57C9F60CD5BFD66172B46B652E0868F715ColorPickerCell::initWithCoder: */

/* Function Stack Size: 0x18 bytes */

ID _TtC5PasteP33_57C9F60CD5BFD66172B46B652E0868F715ColorPickerCell::initWithCoder_
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
              ("Paste/TabBarCellMenu.swift",0x1a,1,0xa7,UVar3.unknown,pMVar2);
  }
  *(undefined1 *)(param_1 + isSelected) = 0;
  *(undefined1 *)(param_1 + isHovered) = 0;
  *(undefined8 *)(param_1 + ___lazy_storage___colorIndicator) = 0;
  *(undefined8 *)(param_1 + ___lazy_storage___selectionView) = 0;
  SVar5.bridgeObject = (void *)0x2;
  SVar5.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar5,(StaticString)0xd000000000000025,0x8000000100d8dc00,
             0xd8e0a0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100023c38);
  (*pcVar1)();
}



/* Address: 0x100023c38 | _TtC5PasteP33_57C9F60CD5BFD66172B46B652E0868F715ColorPickerCell::intrinsicContentSize */

/* Function Stack Size: 0x10 bytes */

CGSize _TtC5PasteP33_57C9F60CD5BFD66172B46B652E0868F715ColorPickerCell::intrinsicContentSize
                 (ID param_1,SEL param_2)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  CGSize CVar5;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1000081a8();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/TabBarCellMenu.swift",0x1a,1,0xab,UVar3.unknown,pMVar1);
  }
  _swift_release(pMVar2);
  CVar5.field1_0x8 = 22.0;
  CVar5.field0_0x0 = 22.0;
  return CVar5;
}



/* Address: 0x100023cc0 | FUN_100023cc0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_100023cc0(void)

{
  undefined8 *puVar1;
  ID self;
  ID unaff_x20;
  undefined8 uVar2;
  double extraout_d0;
  double dVar3;
  double extraout_d0_00;
  
  _swift_getObjectType();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffb0,"layout");
  puVar1 = &_TtC5PasteP33_57C9F60CD5BFD66172B46B652E0868F715ColorPickerCell::
            ___lazy_storage___selectionView;
  FUN_100023790();
  objc_stub::setBorderWidth_((ID)puVar1,0x3ff0000000000000);
  self = *(ID *)(unaff_x20 +
                _TtC5PasteP33_57C9F60CD5BFD66172B46B652E0868F715ColorPickerCell::
                ___lazy_storage___selectionView);
  objc_stub::bounds(unaff_x20);
  dVar3 = extraout_d0;
  _CGRectGetHeight();
  uVar2 = *(undefined8 *)PTR__kCACornerCurveCircular_100eaa398;
  objc_stub::setCornerRadius_curve_(self,dVar3 * 0.5,uVar2);
  puVar1 = &_TtC5PasteP33_57C9F60CD5BFD66172B46B652E0868F715ColorPickerCell::
            ___lazy_storage___colorIndicator;
  FUN_100023790();
  objc_stub::bounds(unaff_x20);
  dVar3 = extraout_d0_00;
  _CGRectGetHeight();
  objc_stub::setCornerRadius_curve_((ID)puVar1,(dVar3 + -8.0) * 0.5,uVar2);
  return 0;
}



/* Address: 0x100023db0 | _TtC5PasteP33_57C9F60CD5BFD66172B46B652E0868F715ColorPickerCell::layout */

/* Function Stack Size: 0x10 bytes */

void _TtC5PasteP33_57C9F60CD5BFD66172B46B652E0868F715ColorPickerCell::layout(ID param_1,SEL param_2)

{
  FUN_100023fd0(param_1,param_2,0xaf,FUN_100023cc0);
  return;
}



/* Address: 0x100023dc0 | FUN_100023dc0 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100023dc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  _CocoaArrayWrapper _Var2;
  code *pcVar3;
  _ArrayBuffer _Var4;
  ulong uVar5;
  MainActor *pMVar6;
  MainActor *pMVar7;
  UnownedSerialExecutor UVar8;
  UnownedSerialExecutor UVar9;
  undefined *self;
  ID IVar10;
  ID unaff_x20;
  long lVar11;
  ulong uVar12;
  undefined8 extraout_d0;
  
  _Var4.unknown = (undefined *)objc_stub::trackingAreas(unaff_x20);
  FUN_10000ec2c(0,&DAT_100fa76b8,&PTR__OBJC_CLASS___NSTrackingArea_100f8d6a8);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  if ((ulong)_Var4.unknown >> 0x3e == 0) {
    lVar11 = *(long *)(((ulong)_Var4.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var2.unknown = _Var4.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < _Var4.unknown) {
      _Var2.unknown = _Var4.unknown;
    }
    lVar11 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
  }
  if (lVar11 != 0) {
    uVar12 = 0;
    do {
      if (((ulong)_Var4.unknown & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)_Var4.unknown & 0xffffffffffffff8) + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100023f18);
          (*pcVar3)();
        }
        uVar5 = *(ulong *)(_Var4.unknown + uVar12 * 8 + 0x20);
      }
      else {
        uVar5 = uVar12;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar12,_Var4);
      }
      lVar1 = uVar12 + 1;
      if (SCARRY8(uVar12,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100023f14);
        (*pcVar3)();
      }
      pMVar6 = Swift::MainActor::typeMetadataAccessor();
      pMVar7 = Swift::MainActor::get_shared(pMVar6,pMVar6);
      pMVar6 = pMVar7;
      FUN_1000081a8();
      UVar8 = Swift::Actor::get_unownedExecutor();
      UVar9 = UVar8;
      _swift_task_isCurrentExecutor();
      if (((ulong)UVar9.unknown & 1) == 0) {
        _swift_task_reportUnexpectedExecutor
                  ("Paste/TabBarCellMenu.swift",0x1a,1,0xb8,UVar8.unknown,pMVar6);
      }
      objc_stub::removeTrackingArea_(unaff_x20,uVar5);
      _swift_release(pMVar7);
      uVar12 = uVar12 + 1;
    } while (lVar1 != lVar11);
  }
  _swift_bridgeObjectRelease(_Var4.unknown);
  objc_stub::bounds(unaff_x20);
  self = &_OBJC_CLASS___NSTrackingArea;
  _objc_allocWithZone();
  IVar10 = objc_stub::initWithRect_options_owner_userInfo_
                     ((ID)self,extraout_d0,param_2,param_3,param_4,0x81,unaff_x20,0);
  objc_stub::addTrackingArea_(unaff_x20,IVar10);
  FUN_1000235fc(0);
  return;
}



/* Address: 0x100023fc0 | _TtC5PasteP33_57C9F60CD5BFD66172B46B652E0868F715ColorPickerCell::updateTrackingAreas */

/* Function Stack Size: 0x10 bytes */

void _TtC5PasteP33_57C9F60CD5BFD66172B46B652E0868F715ColorPickerCell::updateTrackingAreas
               (ID param_1,SEL param_2)

{
  FUN_100023fd0(param_1,param_2,0xb7,FUN_100023dc0);
  return;
}



/* Address: 0x100023fd0 | FUN_100023fd0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100023fd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

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
              ("Paste/TabBarCellMenu.swift",0x1a,1,param_3,UVar3.unknown,pMVar1);
  }
  (*param_4)(param_1);
  _swift_release(pMVar2);
  return 0;
}



/* Address: 0x10002407c | _TtC5PasteP33_57C9F60CD5BFD66172B46B652E0868F715ColorPickerCell::mouseEntered: */

/* Function Stack Size: 0x18 bytes */

void _TtC5PasteP33_57C9F60CD5BFD66172B46B652E0868F715ColorPickerCell::mouseEntered_
               (ID param_1,SEL param_2,ID param_3)

{
  FUN_100024094();
  return;
}



/* Address: 0x100024088 | _TtC5PasteP33_57C9F60CD5BFD66172B46B652E0868F715ColorPickerCell::mouseExited: */

/* Function Stack Size: 0x18 bytes */

void _TtC5PasteP33_57C9F60CD5BFD66172B46B652E0868F715ColorPickerCell::mouseExited_
               (ID param_1,SEL param_2,ID param_3)

{
  FUN_100024094();
  return;
}



/* Address: 0x100024094 | FUN_100024094 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
FUN_100024094(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

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
              ("Paste/TabBarCellMenu.swift",0x1a,1,param_4,UVar3.unknown,pMVar1);
  }
  *(undefined1 *)
   (param_1 + _TtC5PasteP33_57C9F60CD5BFD66172B46B652E0868F715ColorPickerCell::isHovered) = param_5;
  FUN_1000235fc(param_1);
  _swift_release(pMVar2);
  return 0;
}



/* Address: 0x10002414c | _TtC5PasteP33_57C9F60CD5BFD66172B46B652E0868F715ColorPickerCell::initWithFrame: */

/* Function Stack Size: 0x30 bytes */

ID _TtC5PasteP33_57C9F60CD5BFD66172B46B652E0868F715ColorPickerCell::initWithFrame_
             (ID param_1,SEL param_2,CGRect param_3)

{
  FUN_100024160(param_1,param_2,0x88,"Paste.ColorPickerCell",0x15,param_3.field1_0x10.field1_0x8);
  return param_1;
}



/* Address: 0x100024160 | FUN_100024160 */

void FUN_100024160(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
              ("Paste/TabBarCellMenu.swift",0x1a,1,param_3,UVar3.unknown,pMVar2);
  }
  __swift_stdlib_reportUnimplementedInitializer(param_4,param_5,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1000241f8);
  (*pcVar1)();
}



/* Address: 0x1000241f8 | _TtC5PasteP33_57C9F60CD5BFD66172B46B652E0868F715ColorPickerCell::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC5PasteP33_57C9F60CD5BFD66172B46B652E0868F715ColorPickerCell::_cxx_destruct
               (ID param_1,SEL param_2)

{
  return;
}



/* Address: 0x100024230 | FUN_100024230 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100024230(void)

{
  return ZEXT816(0x100f8faf0);
}



/* Address: 0x100024250 | FUN_100024250 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100024250(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x100024274 | FUN_100024274 */

void FUN_100024274(void)

{
  FUN_1003c5408(thunk_FUN_100022ad0,0);
  return;
}



/* Address: 0x1000242a0 | FUN_1000242a0 */

void FUN_1000242a0(void)

{
  long unaff_x20;
  
  FUN_100039990(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1000242c8 | FUN_1000242c8 */

void FUN_1000242c8(void)

{
  long unaff_x20;
  
  FUN_1003c4f00(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                thunk_FUN_100022ad0,0);
  return;
}



/* Address: 0x1000242f8 | FUN_1000242f8 */

void FUN_1000242f8(void)

{
  long unaff_x20;
  
  _swift_unknownObjectWeakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x10002431c | FUN_10002431c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10002431c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x100024350 | FUN_100024350 */

void FUN_100024350(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100022b10(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x10002435c | FUN_10002435c */

void FUN_10002435c(void)

{
  long unaff_x20;
  
  FUN_100022ecc(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100024364 | thunk_FUN_100024368 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void thunk_FUN_100024368(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x100024368 | FUN_100024368 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100024368(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x10002439c | FUN_10002439c */

void FUN_10002439c(void)

{
  long unaff_x20;
  
  FUN_10003bc98(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1000243c0 | FUN_1000243c0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000243c0(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x1000243ec | FUN_1000243ec */

void FUN_1000243ec(void)

{
  long unaff_x20;
  undefined8 local_28;
  
  local_28 = *(undefined8 *)(unaff_x20 + 0x18);
  Combine::PassthroughSubject::send
            (*(PassthroughSubject **)
              (*(long *)(unaff_x20 + 0x10) + _TtC5Paste15TabBarViewModel::beginEditingListSubject),
             &local_28);
  return;
}



/* Address: 0x100024428 | FUN_100024428 */

void FUN_100024428(void)

{
  long unaff_x20;
  
  FUN_10002397c(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100024430 | thunk_FUN_1000243c0 */

void thunk_FUN_1000243c0(void)

{
  FUN_1000243c0();
  return;
}



/* Address: 0x100024434 | thunk_FUN_100022ad0 */

void thunk_FUN_100022ad0(undefined8 param_1)

{
  FUN_10000ec2c(0,&DAT_100fa8300,&PTR__OBJC_CLASS___NSAlert_100f8d6f0);
  FUN_1003b6cfc(param_1);
  return;
}



/* Address: 0x100024438 | thunk_FUN_100024368 */

void thunk_FUN_100024368(void)

{
  thunk_FUN_100024368();
  return;
}



/* Address: 0x10002443c | FUN_10002443c */

void FUN_10002443c(void)

{
  _swift_allocateGenericValueMetadata();
  return;
}



/* Address: 0x100024444 | FUN_100024444 */

void FUN_100024444(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x100024474 | FUN_100024474 */

undefined8 * FUN_100024474(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  uVar1 = param_2[5];
  uVar2 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar2;
  param_1[5] = uVar1;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar2);
  _swift_retain(uVar1);
  return param_1;
}



/* Address: 0x1000244d8 | FUN_1000244d8 */

undefined8 * FUN_1000244d8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_1[5];
  uVar1 = param_2[5];
  uVar3 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar3;
  _swift_retain(uVar1);
  _swift_release(uVar2);
  return param_1;
}



/* Address: 0x100024560 | FUN_100024560 */

undefined8 * FUN_100024560(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  _swift_bridgeObjectRelease(param_1[3]);
  uVar1 = param_2[5];
  uVar2 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar2;
  uVar2 = param_1[5];
  param_1[5] = uVar1;
  _swift_release(uVar2);
  return param_1;
}



/* Address: 0x1000245bc | FUN_1000245bc */

void FUN_1000245bc(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1000245c8 | FUN_1000245c8 */

void FUN_1000245c8(undefined8 param_1,long param_2)

{
  undefined8 local_20;
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)(param_2 + 0x18);
  local_20 = *(undefined8 *)(param_2 + 0x10);
  _swift_getOpaqueTypeConformance2(&local_20,&DAT_100ca0790,1);
  return;
}



/* Address: 0x1000245fc | FUN_1000245fc */

void FUN_1000245fc(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  ModifiedContent MVar2;
  TupleView TVar3;
  HStack HVar4;
  HStack HVar5;
  VerticalAlignment alignment;
  long extraout_x8;
  long extraout_x12;
  code *pcVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined1 auStack_90 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  
  puVar1 = &DAT_100fa7740;
  FUN_100005c24(&DAT_100fa7740,&DAT_100c24578);
  uVar7 = *(undefined8 *)(param_2 + 0x10);
  MVar2 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  _swift_getTupleTypeMetadata3
            (0xff,puVar1,PTR___type_metadata_for_SwiftUI_Spacer_100eab8f8,MVar2.unknown,0,0);
  TVar3 = SwiftUI::TupleView::typeMetadataAccessor();
  _swift_getWitnessTable
            (PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_100eabb30,TVar3.unknown);
  HVar4 = SwiftUI::HStack::typeMetadataAccessor();
  lVar10 = *(long *)(HVar4.unknown + -8);
  HVar5 = HVar4;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar10 + 0x40));
  puVar9 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar8 = (long)puVar9 - extraout_x12;
  alignment = SwiftUI::VerticalAlignment::get_top(HVar5.unknown);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  local_80 = uVar7;
  SwiftUI::HStack::_init(alignment);
  puVar1 = PTR_SwiftUI__SwiftUI__HStack<undefined>_>SwiftUI__View_100eab8b0;
  _swift_getWitnessTable
            (PTR_SwiftUI__SwiftUI__HStack<undefined>_>SwiftUI__View_100eab8b0,HVar4.unknown);
  thunk_FUN_10003cc94(lVar8,puVar9,HVar4.unknown,puVar1);
  pcVar6 = *(code **)(lVar10 + 8);
  (*pcVar6)(puVar9,HVar4.unknown);
  thunk_FUN_10003cc94(param_1,lVar8,HVar4.unknown,puVar1);
  (*pcVar6)(lVar8,HVar4.unknown);
  return;
}



/* Address: 0x1000247a0 | FUN_1000247a0 */

void FUN_1000247a0(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ModifiedContent MVar2;
  MainActor *pMVar3;
  MainActor *pMVar4;
  UnownedSerialExecutor UVar5;
  char *pcVar6;
  HorizontalAlignment HVar7;
  Alignment AVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  code *pcVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uStack_2d0;
  undefined1 auStack_2c8 [8];
  undefined8 uStack_2c0;
  undefined1 auStack_2b8 [8];
  long alStack_2b0 [4];
  long local_290;
  undefined8 local_288;
  long local_280;
  MainActor *local_278;
  undefined8 local_270;
  undefined *local_268;
  undefined *puStack_260;
  undefined *local_258;
  undefined7 local_250;
  undefined1 uStack_249;
  undefined7 uStack_248;
  undefined1 uStack_241;
  undefined7 uStack_240;
  undefined1 uStack_239;
  undefined7 uStack_238;
  undefined1 uStack_231;
  undefined7 uStack_230;
  undefined1 local_229;
  undefined7 uStack_228;
  undefined1 uStack_221;
  undefined7 uStack_220;
  undefined1 local_219;
  undefined7 uStack_218;
  undefined1 uStack_211;
  undefined7 uStack_210;
  undefined8 local_1f8;
  undefined1 local_1f0;
  undefined **local_1e8;
  undefined8 *puStack_1e0;
  long local_1d8;
  undefined8 local_1d0;
  undefined *puStack_1c8;
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
  undefined8 local_170;
  undefined1 local_160 [64];
  undefined *local_120;
  undefined8 uStack_118;
  undefined1 local_110;
  undefined7 local_10f;
  undefined1 uStack_108;
  undefined7 uStack_107;
  undefined1 uStack_100;
  undefined7 local_ff;
  undefined1 uStack_f8;
  undefined7 uStack_f7;
  undefined1 uStack_f0;
  undefined7 local_ef;
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  undefined1 uStack_e0;
  undefined7 local_df;
  undefined1 uStack_d8;
  undefined7 uStack_d7;
  undefined1 uStack_d0;
  undefined7 uStack_cf;
  undefined *local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8;
  undefined8 local_b7;
  undefined8 uStack_af;
  undefined8 local_a7;
  undefined8 uStack_9f;
  undefined8 local_97;
  undefined8 uStack_8f;
  undefined8 local_87;
  undefined7 uStack_7f;
  undefined1 uStack_78;
  undefined7 uStack_77;
  
  local_290 = *(long *)(param_3 + -8);
  local_288 = param_4;
  local_270 = param_1;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_290 + 0x40));
  lVar15 = (long)&local_290 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  MVar2 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  local_280 = *(long *)(MVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_280 + 0x40));
  lVar13 = lVar15 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar14 = lVar13 - extraout_x12;
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  pMVar4 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  pMVar3 = pMVar4;
  FUN_1000081a8();
  local_278 = pMVar4;
  UVar5 = Swift::Actor::get_unownedExecutor();
  pcVar6 = (char *)UVar5;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar6 & 1) == 0) {
    pcVar6 = "Paste/SettingsRowView.swift";
    _swift_task_reportUnexpectedExecutor
              ("Paste/SettingsRowView.swift",0x1b,1,0x13,UVar5.unknown,pMVar3);
  }
  HVar7 = SwiftUI::HorizontalAlignment::get_leading((HorizontalAlignment)pcVar6);
  uVar1 = local_288;
  FUN_100024b2c(local_160,param_2,param_3,local_288);
  uStack_231 = (undefined1)local_160._24_8_;
  uStack_230 = SUB87(local_160._24_8_,1);
  uStack_239 = (undefined1)local_160._16_8_;
  uStack_238 = SUB87(local_160._16_8_,1);
  uStack_241 = (undefined1)local_160._8_8_;
  uStack_240 = SUB87(local_160._8_8_,1);
  uStack_249 = (undefined1)local_160._0_8_;
  uStack_248 = SUB87(local_160._0_8_,1);
  uStack_221 = (undefined1)local_160._40_8_;
  uStack_220 = SUB87(local_160._40_8_,1);
  local_229 = (undefined1)local_160._32_8_;
  uStack_228 = SUB87(local_160._32_8_,1);
  uStack_211 = (undefined1)local_160._56_8_;
  uStack_210 = SUB87(local_160._56_8_,1);
  local_219 = (undefined1)local_160._48_8_;
  uStack_218 = SUB87(local_160._48_8_,1);
  uStack_f7 = uStack_238;
  uStack_f0 = uStack_231;
  local_ff = uStack_240;
  uStack_f8 = uStack_239;
  uStack_9f = CONCAT17(uStack_231,uStack_238);
  local_a7 = CONCAT17(uStack_239,uStack_240);
  uStack_8f = CONCAT17(uStack_221,uStack_228);
  local_97 = CONCAT17(local_229,uStack_230);
  uStack_e7 = uStack_228;
  uStack_e0 = uStack_221;
  local_ef = uStack_230;
  uStack_e8 = local_229;
  local_87 = CONCAT17(local_219,uStack_220);
  uStack_d7 = uStack_218;
  local_df = uStack_220;
  uStack_d8 = local_219;
  uStack_af = CONCAT17(uStack_241,uStack_248);
  local_b7 = CONCAT17(uStack_249,local_250);
  uStack_107 = uStack_248;
  uStack_100 = uStack_241;
  local_10f = local_250;
  uStack_108 = uStack_249;
  uStack_7f = uStack_218;
  uStack_118 = 0x4000000000000000;
  local_110 = 0;
  uStack_c0 = 0x4000000000000000;
  local_b8 = 0;
  ppuVar11 = &local_1c0;
  local_120 = HVar7.unknown;
  uStack_d0 = uStack_211;
  uStack_cf = uStack_210;
  local_c8 = HVar7.unknown;
  uStack_78 = uStack_211;
  uStack_77 = uStack_210;
  FUN_100024df8(&local_120);
  AVar8.unknown = (undefined *)&local_c8;
  FUN_100024e48();
  (**(code **)(param_2 + 0x20))(lVar15);
  AVar8 = SwiftUI::Alignment::get_center(AVar8);
  *(long *)(lVar14 + -0x10) = param_3;
  *(undefined8 *)(lVar14 + -8) = uVar1;
  *(undefined **)(lVar14 + -0x20) = AVar8.unknown;
  *(undefined ***)(lVar14 + -0x18) = ppuVar11;
  *(undefined1 *)(lVar14 + -0x28) = 0;
  *(undefined8 *)(lVar14 + -0x30) = 0x4030000000000000;
  *(undefined1 *)(lVar14 + -0x38) = 1;
  *(undefined8 *)(lVar14 + -0x40) = 0;
  (extension_SwiftUI)::SwiftUI::View::_frame((Alignment)0x0);
  (**(code **)(local_290 + 8))(lVar15,param_3);
  local_1d0 = uVar1;
  puStack_1c8 = 
  PTR___protocol_witness_table_for_SwiftUI__FlexFrameLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaaa68
  ;
  puVar9 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             MVar2.unknown,&local_1d0);
  thunk_FUN_10003cc94(lVar14,lVar13,MVar2.unknown,puVar9);
  lVar15 = local_280;
  pcVar12 = *(code **)(local_280 + 8);
  (*pcVar12)(lVar13,MVar2.unknown);
  uStack_198 = CONCAT71(uStack_f7,uStack_f8);
  local_1a0 = CONCAT71(local_ff,uStack_100);
  uStack_188 = CONCAT71(uStack_e7,uStack_e8);
  uStack_190 = CONCAT71(local_ef,uStack_f0);
  uStack_178 = CONCAT71(uStack_d7,uStack_d8);
  local_180 = CONCAT71(local_df,uStack_e0);
  local_170 = CONCAT71(uStack_cf,uStack_d0);
  uStack_1a8 = CONCAT71(uStack_107,uStack_108);
  uStack_1b0 = CONCAT71(local_10f,local_110);
  uStack_1b8 = uStack_118;
  local_1c0 = local_120;
  local_1f8 = 0x4020000000000000;
  local_1f0 = 0;
  puStack_1e0 = &local_1f8;
  local_1e8 = &local_1c0;
  (**(code **)(lVar15 + 0x10))(lVar13,lVar14,MVar2.unknown);
  local_1d8 = lVar13;
  FUN_100024df8(&local_120,&local_250);
  puVar10 = &DAT_100fa7740;
  FUN_1000037f0(&DAT_100fa7740,&DAT_100c24578);
  local_250 = SUB87(puVar10,0);
  uStack_249 = (undefined1)((ulong)puVar10 >> 0x38);
  uStack_248 = SUB87(PTR___type_metadata_for_SwiftUI_Spacer_100eab8f8,0);
  uStack_241 = (undefined1)((ulong)PTR___type_metadata_for_SwiftUI_Spacer_100eab8f8 >> 0x38);
  uStack_240 = SUB87(MVar2.unknown,0);
  uStack_239 = (undefined1)((ulong)MVar2.unknown >> 0x38);
  FUN_100024e90();
  puStack_260 = PTR___protocol_witness_table_for_SwiftUI_Spacer___SwiftUI_View_in_SwiftUI_100eab8e8;
  local_268 = puVar10;
  local_258 = puVar9;
  FUN_10003cad4(local_270,&local_1e8,3,&local_250,&local_268);
  FUN_100024e48(&local_120);
  (*pcVar12)(lVar14,MVar2.unknown);
  (*pcVar12)(lVar13,MVar2.unknown);
  FUN_100024e48(&local_1c0);
  _swift_release(local_278);
  return;
}



/* Address: 0x100024b2c | FUN_100024b2c */

void FUN_100024b2c(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5)

{
  undefined8 uVar1;
  MainActor *pMVar2;
  MainActor *pMVar3;
  UnownedSerialExecutor UVar4;
  char *pcVar5;
  Text TVar6;
  Text TVar7;
  Font FVar8;
  Text TVar9;
  Color CVar10;
  Text TVar11;
  undefined *puVar12;
  undefined *puVar13;
  Text TVar14;
  undefined *puVar15;
  char *pcVar16;
  char *pcVar17;
  ulong uVar18;
  ulong uVar19;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  pMVar3 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  pMVar2 = pMVar3;
  FUN_1000081a8();
  UVar4 = Swift::Actor::get_unownedExecutor();
  pcVar5 = (char *)UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar5 & 1) == 0) {
    pcVar5 = "Paste/SettingsRowView.swift";
    param_5 = (undefined *)0x14;
    _swift_task_reportUnexpectedExecutor
              ("Paste/SettingsRowView.swift",0x1b,1,0x14,UVar4.unknown,pMVar2);
  }
  uVar1 = *(undefined8 *)(param_2 + 8);
  FUN_100008378();
  _swift_bridgeObjectRetain(uVar1);
  puVar12 = PTR___type_metadata_for_Swift_String_100eac208;
  pcVar17 = pcVar5;
  TVar6 = SwiftUI::Text::_init();
  if (*(long *)(param_2 + 0x18) == 0) {
    TVar11.unknown = (undefined *)0x0;
    TVar7.unknown = (undefined *)0x0;
    uVar19 = 0;
    uVar18 = 0;
  }
  else {
    CVar10.unknown = param_5;
    _swift_bridgeObjectRetain();
    puVar13 = PTR___type_metadata_for_Swift_String_100eac208;
    TVar7 = SwiftUI::Text::_init();
    FVar8 = SwiftUI::Font::get_callout(TVar7.unknown);
    TVar14 = TVar7;
    puVar15 = puVar13;
    pcVar16 = pcVar5;
    TVar9 = SwiftUI::Text::_font(FVar8.unknown);
    _swift_release(FVar8.unknown);
    FUN_100016d74(TVar7.unknown,puVar13,pcVar5);
    _swift_bridgeObjectRelease();
    CVar10 = SwiftUI::Color::get_secondary(CVar10);
    TVar7 = TVar9;
    puVar13 = TVar14.unknown;
    uVar18 = (ulong)puVar15 & 0xffffffff;
    TVar11 = SwiftUI::Text::_foregroundColor(CVar10.unknown);
    _swift_release(CVar10.unknown);
    FUN_100016d74(TVar9.unknown,TVar14.unknown,(ulong)puVar15 & 0xffffffff);
    _swift_bridgeObjectRelease(pcVar16);
    uVar19 = (ulong)puVar13 & 0xff;
    pcVar17 = (char *)((ulong)pcVar17 & 0xffffffff);
    FUN_100016d5c(TVar11.unknown,TVar7.unknown,puVar13);
    _swift_bridgeObjectRetain(uVar18);
  }
  FUN_100016d5c(TVar6.unknown,puVar12,pcVar17);
  _swift_bridgeObjectRetain(param_5);
  FUN_100020200(TVar11.unknown,TVar7.unknown,uVar19,uVar18);
  FUN_10002022c(TVar11.unknown,TVar7.unknown,uVar19,uVar18);
  *param_1 = TVar6.unknown;
  param_1[1] = puVar12;
  *(char *)(param_1 + 2) = (char)pcVar17;
  param_1[3] = param_5;
  param_1[4] = TVar11.unknown;
  param_1[5] = TVar7.unknown;
  param_1[6] = uVar19;
  param_1[7] = uVar18;
  FUN_10002022c(TVar11.unknown,TVar7.unknown,uVar19,uVar18);
  FUN_100016d74(TVar6.unknown,puVar12,pcVar17);
  _swift_release(pMVar3);
  _swift_bridgeObjectRelease(param_5);
  return;
}



/* Address: 0x100024db4 | FUN_100024db4 */

void FUN_100024db4(void)

{
  FUN_1000245fc();
  return;
}



/* Address: 0x100024dec | FUN_100024dec */

void FUN_100024dec(void)

{
  long unaff_x20;
  
  FUN_1000247a0(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100024df8 | FUN_100024df8 */

undefined8 FUN_100024df8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fa7740;
  FUN_1000037f0(&DAT_100fa7740,&DAT_100c24578);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x100024e48 | FUN_100024e48 */

undefined8 FUN_100024e48(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fa7740;
  FUN_1000037f0(&DAT_100fa7740,&DAT_100c24578);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x100024e90 | FUN_100024e90 */

void FUN_100024e90(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fa7748 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fa7740;
  FUN_100005c24(&DAT_100fa7740,&DAT_100c24578);
  puVar2 = PTR_SwiftUI__SwiftUI__VStack<undefined>_>SwiftUI__View_100eab938;
  _swift_getWitnessTable(PTR_SwiftUI__SwiftUI__VStack<undefined>_>SwiftUI__View_100eab938,puVar1);
  DAT_100fa7748 = puVar2;
  return;
}



/* Address: 0x100024ee0 | FUN_100024ee0 */

void FUN_100024ee0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_28 = param_2;
  uStack_20 = param_3;
  local_18 = param_4;
  _swift_getGenericMetadata(param_1,&local_28,param_5);
  return;
}



/* Address: 0x100024f0c | FUN_100024f0c */

void FUN_100024f0c(void)

{
  undefined *puVar1;
  ModifiedContent MVar2;
  TupleView TVar3;
  HStack HVar4;
  
  puVar1 = &DAT_100fa7740;
  FUN_100005c24(&DAT_100fa7740,&DAT_100c24578);
  MVar2 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  _swift_getTupleTypeMetadata3
            (0xff,puVar1,PTR___type_metadata_for_SwiftUI_Spacer_100eab8f8,MVar2.unknown,0,0);
  TVar3 = SwiftUI::TupleView::typeMetadataAccessor();
  _swift_getWitnessTable
            (PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_100eabb30,TVar3.unknown);
  HVar4 = SwiftUI::HStack::typeMetadataAccessor();
  _swift_getWitnessTable
            (PTR_SwiftUI__SwiftUI__HStack<undefined>_>SwiftUI__View_100eab8b0,HVar4.unknown);
  return;
}



/* Address: 0x100024fb0 | FUN_100024fb0 */

void FUN_100024fb0(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100c245b0;
  _swift_getKeyPath();
  FUN_1000037f0(&DAT_100fa7758,&DAT_100c245e0);
  _swift_allocObject();
  FUN_1000da6e0();
  DAT_100fa7750 = puVar1;
  return;
}



/* Address: 0x10002500c | FUN_10002500c */

void FUN_10002500c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_100ae5d70();
  _swift_allocObject();
  *param_1 = uVar1;
  return;
}



/* Address: 0x100025040 | FUN_100025040 */

void FUN_100025040(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_10004e57c(0);
  FUN_1000d80e0(param_1,"Paste/DI+App.swift",0x12,2,0x18,0x13,thunk_FUN_100008f9c,0,uVar1);
  return;
}



/* Address: 0x100025090 | FUN_100025090 */

void FUN_100025090(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1000055ec(0);
  FUN_1000d80e0(param_1,"Paste/DI+App.swift",0x12,2,0x24,0x13,FUN_1000090c4,0,uVar1);
  return;
}



/* Address: 0x1000250e0 | FUN_1000250e0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000250e0(void)

{
  undefined *puVar1;
  ID IVar2;
  NSString *pNVar3;
  ID IVar4;
  __int64 _Var5;
  undefined *puVar6;
  char *pcVar7;
  void *in_x3;
  long unaff_x20;
  String SVar8;
  String SVar9;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  puVar6 = PTR___swiftEmptySetSingleton_100eae0e8;
  if (((ulong)puVar1 >> 0x3e != 0) &&
     (_Var5 = Swift::_CocoaArrayWrapper::get_endIndex
                        ((_CocoaArrayWrapper)PTR___swiftEmptyArrayStorage_100eae0d8),
     puVar6 = PTR___swiftEmptySetSingleton_100eae0e8, _Var5 != 0)) {
    puVar6 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_10001a4b0();
  }
  *(undefined **)(unaff_x20 + 0x28) = puVar6;
  *(undefined2 *)(unaff_x20 + 0x30) = 1;
  puVar1 = &DAT_100c24640;
  _swift_getKeyPath();
  puVar6 = &DAT_100fa7840;
  FUN_1000037f0(&DAT_100fa7840,&DAT_100c27c70);
  _swift_allocObject();
  FUN_1000da6e0(puVar1,puVar6);
  *(undefined **)(unaff_x20 + 0x38) = puVar1;
  puVar1 = &DAT_100c24668;
  _swift_getKeyPath();
  puVar6 = &DAT_100fa6950;
  FUN_1000037f0(&DAT_100fa6950,&DAT_100c23208);
  pcVar7 = (char *)0x7;
  _swift_allocObject();
  FUN_1000da6e0(puVar1,puVar6);
  *(undefined **)(unaff_x20 + 0x40) = puVar1;
  _swift_getKeyPath(&DAT_100c24690);
  FUN_1002cb7e0(&local_68);
  *(undefined8 *)(unaff_x20 + 0x50) = uStack_60;
  *(undefined8 *)(unaff_x20 + 0x48) = local_68;
  *(undefined8 *)(unaff_x20 + 0x60) = uStack_50;
  *(undefined8 *)(unaff_x20 + 0x58) = local_58;
  *(undefined8 *)(unaff_x20 + 0x70) = uStack_40;
  *(undefined8 *)(unaff_x20 + 0x68) = local_48;
  *(undefined8 *)(unaff_x20 + 0x78) = local_38;
  IVar2 = NSStatusBar::systemStatusBar((ID)&_OBJC_CLASS___NSStatusBar);
  IVar2 = NSStatusBar::statusItemWithLength_(IVar2,0xc000000000000000);
  *(ID *)(unaff_x20 + 0x20) = IVar2;
  IVar2 = NSStatusBar::button(IVar2);
  if (IVar2 != 0) {
    SVar8 = Swift::CustomStringConvertible::get_description();
    SVar9.bridgeObject = in_x3;
    SVar9.str = pcVar7;
    Swift::String::append(SVar8,SVar9);
    _swift_bridgeObjectRelease(SVar8.bridgeObject);
    pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(0xeb000000002f6d65);
    IVar4 = NSImage::imageNamed_((ID)&_OBJC_CLASS___NSImage,pNVar3);
    NSStatusBar::setImage_(IVar2,IVar4);
  }
  IVar2 = objc_stub::button(*(ID *)(unaff_x20 + 0x20));
  if (IVar2 != 0) {
    objc_stub::setTarget_(IVar2);
  }
  IVar2 = objc_stub::button(*(ID *)(unaff_x20 + 0x20));
  if (IVar2 != 0) {
    objc_stub::setAction_(IVar2,"statusItemAction");
  }
  IVar2 = objc_stub::button(*(ID *)(unaff_x20 + 0x20));
  if (IVar2 != 0) {
    objc_stub::sendActionOn_(IVar2,0x14);
  }
  FUN_1000253a0(0);
  return;
}



/* Address: 0x1000253a0 | FUN_1000253a0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000256e0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1000253a0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  AnyCancellable *pAVar4;
  Published PVar5;
  undefined *puVar6;
  long extraout_x8;
  long lVar7;
  long extraout_x8_00;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long local_e0;
  long local_d8;
  undefined *local_d0;
  long local_c8;
  long local_c0;
  undefined *local_b8 [3];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  local_d0 = (undefined *)Publisher::_typeMetadataAccessor();
  local_c8 = *(long *)(local_d0 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_c8 + 0x40));
  lVar7 = (long)&local_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar1 = &DAT_100fa6670;
  local_d8 = lVar7;
  FUN_1000037f0(&DAT_100fa6670,&DAT_100c28380);
  local_e0 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_e0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x48);
  uStack_88 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x58);
  uStack_78 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x78);
  local_a0 = uVar9;
  uStack_98 = uVar11;
  local_90 = uVar12;
  local_80 = uVar10;
  local_70 = uVar8;
  _swift_retain(uVar9);
  _swift_retain(uVar11);
  _swift_retain(uVar12);
  _swift_retain(uVar10);
  _swift_retain(uVar8);
  puVar2 = &DAT_100faa2f0;
  FUN_1000037f0(&DAT_100faa2f0,&DAT_100c25940);
  FUN_1002cb1ec();
  _swift_release(uVar8);
  _swift_release(uVar10);
  _swift_release(uVar12);
  _swift_release(uVar11);
  _swift_release(uVar9);
  puVar6 = &DAT_100eb0e20;
  puVar3 = puVar6;
  local_b8[0] = puVar2;
  _swift_allocObject(&DAT_100eb0e20,0x18,7);
  _swift_weakInit(puVar3 + 0x10);
  FUN_1000037f0(&DAT_100fa7ab0,&DAT_100c26e30);
  FUN_100016eac(&DAT_100faa8e0,&DAT_100fa7ab0,&DAT_100c26e30,
                PTR_Combine__Combine__AnyPublisher<undefined,undefined>_>Combine__Publisher_100ea9758
               );
  pAVar4 = (extension_Combine)::Combine::Publisher::_sink();
  _swift_release(puVar2);
  _swift_release(puVar3);
  _swift_beginAccess(unaff_x20 + 0x28,local_b8,0x21,0);
  Combine::AnyCancellable::store(pAVar4,(undefined *)(unaff_x20 + 0x28));
  _swift_endAccess(local_b8);
  _swift_release(pAVar4);
  FUN_1000da768(&local_c0);
  _swift_beginAccess(local_c0 + _TtC5Paste17PausePasteManager::_isPaused,local_b8,0x21,0);
  PVar5.unknown = &DAT_100fa6680;
  FUN_1000037f0(&DAT_100fa6680,&DAT_100c28470);
  Combine::Published::_get_projectedValue(PVar5);
  _swift_endAccess(local_b8);
  _swift_release(local_c0);
  _swift_allocObject(&DAT_100eb0e20,0x18,7);
  _swift_weakInit(puVar6 + 0x10);
  FUN_100016eac(&DAT_100fa7848,&DAT_100fa6670,&DAT_100c28380,
                PTR__Combine__Publisher_>Combine__Publisher_100ea98d0);
  pAVar4 = (extension_Combine)::Combine::Publisher::_sink();
  _swift_release(puVar6);
  (**(code **)(local_e0 + 8))(lVar7 - extraout_x8_00,puVar1);
  _swift_beginAccess(unaff_x20 + 0x28,local_b8,0x21,0);
  Combine::AnyCancellable::store(pAVar4,(undefined *)(unaff_x20 + 0x28));
  _swift_endAccess(local_b8);
  _swift_release(pAVar4);
  NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  FUN_10037a6cc();
  lVar7 = local_d8;
  (extension_Foundation)::__C::NSNotificationCenter::_publisher(local_d8,local_b8,0);
  FUN_100003a00(&DAT_100fa6698,PTR__typeMetadataAccessor_100ea79b0,
                PTR__Foundation__Publisher_>Combine__Publisher_100ea79a8);
  _swift_retain();
  puVar1 = local_d0;
  pAVar4 = (extension_Combine)::Combine::Publisher::_sink();
  _swift_release();
  (**(code **)(local_c8 + 8))(lVar7,puVar1);
  _swift_beginAccess(unaff_x20 + 0x28,local_b8,0x21,0);
  Combine::AnyCancellable::store(pAVar4,(undefined *)(unaff_x20 + 0x28));
  _swift_endAccess(local_b8);
  _swift_release(pAVar4);
  return;
}



/* Address: 0x1000257a8 | FUN_1000257a8 */

void FUN_1000257a8(long param_1,long param_2)

{
  MainActor MVar1;
  undefined *puVar2;
  MainActor *pMVar3;
  undefined8 *puVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  MainActor *pMVar7;
  
  MVar1 = *(MainActor *)(param_1 + 1);
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  puVar2 = PTR_typeMetadataAccessor_100eaec10;
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  puVar4 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar2,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar5 = Swift::Actor::get_unownedExecutor();
  UVar6 = UVar5;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar6.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor("Paste/StatusItem.swift",0x16,1,0x2b,UVar5.unknown,puVar4);
  }
  pMVar7 = (MainActor *)(param_2 + 0x10);
  _swift_weakLoadStrong();
  if (pMVar7 != (MainActor *)0x0) {
    pMVar7[0x30] = MVar1;
    objc_stub::setVisible_(*(ID *)(pMVar7 + 0x20),(ulong)(byte)MVar1);
    _swift_release(pMVar3);
    pMVar3 = pMVar7;
  }
  _swift_release(pMVar3);
  return;
}



/* Address: 0x100025880 | FUN_100025880 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100025880(MainActor *param_1,long param_2,undefined8 param_3,undefined1 *param_4)

{
  MainActor MVar1;
  undefined *puVar2;
  MainActor *pMVar3;
  undefined8 *puVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  MainActor *pMVar7;
  ID self;
  NSString *pNVar8;
  ID IVar9;
  char *pcVar10;
  String SVar11;
  String SVar12;
  
  MVar1 = *param_1;
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  puVar2 = PTR_typeMetadataAccessor_100eaec10;
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  puVar4 = &DAT_100fa6bb0;
  pcVar10 = PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18;
  FUN_100003a00(&DAT_100fa6bb0,puVar2);
  UVar5 = Swift::Actor::get_unownedExecutor();
  UVar6 = UVar5;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar6.unknown & 1) == 0) {
    pcVar10 = &DAT_00000001;
    param_4 = &DAT_00000030;
    _swift_task_reportUnexpectedExecutor("Paste/StatusItem.swift",0x16,1,0x30,UVar5.unknown,puVar4);
  }
  pMVar7 = (MainActor *)(param_2 + 0x10);
  _swift_weakLoadStrong();
  if (pMVar7 != (MainActor *)0x0) {
    pMVar7[0x31] = MVar1;
    self = objc_stub::button(*(ID *)(pMVar7 + 0x20));
    if (self != 0) {
      if (((byte)pMVar7[0x31] & 1) == 0) {
        SVar11 = Swift::CustomStringConvertible::get_description();
        SVar12.bridgeObject = param_4;
        SVar12.str = pcVar10;
        Swift::String::append(SVar11,SVar12);
        _swift_bridgeObjectRelease(SVar11.bridgeObject);
        pNVar8 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        _swift_bridgeObjectRelease(0xeb000000002f6d65);
        IVar9 = NSImage::imageNamed_((ID)&_OBJC_CLASS___NSImage,pNVar8);
      }
      else {
        pNVar8 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        IVar9 = NSImage::imageNamed_((ID)&_OBJC_CLASS___NSImage,pNVar8);
      }
      objc_stub::setImage_(self,IVar9);
      _swift_release(pMVar3);
      _swift_release(pMVar7);
      return;
    }
    _swift_release(pMVar3);
    pMVar3 = pMVar7;
  }
  _swift_release(pMVar3);
  return;
}



/* Address: 0x100025a88 | FUN_100025a88 */

void FUN_100025a88(undefined8 param_1,undefined8 param_2)

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
    _swift_task_reportUnexpectedExecutor("Paste/StatusItem.swift",0x16,1,0x34,UVar4.unknown,puVar3);
  }
  FUN_100025b30(1,param_2);
  _swift_release(pMVar2);
  return;
}


