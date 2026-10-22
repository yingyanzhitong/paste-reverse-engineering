/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100046914 | FUN_100046914 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100046914(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  NSArray *pNVar2;
  ID self;
  MainActor *pMVar3;
  MainActor *pMVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  
  puVar1 = &DAT_100eb1b08;
  _swift_allocObject(&DAT_100eb1b08,0x18,7);
  _swift_unknownObjectWeakInit(puVar1 + 0x10,param_4);
  FUN_100045658(0);
  _objc_allocWithZone();
  _swift_bridgeObjectRetain(param_3);
  FUN_100044ce0(param_1,param_2,param_3,FUN_1000482c0,puVar1);
  puVar1 = &DAT_100fa6b80;
  FUN_1000037f0(&DAT_100fa6b80,&DAT_100c23760);
  _swift_allocObject();
  *(undefined8 *)(puVar1 + 0x18) = 3;
  *(undefined8 *)(puVar1 + 0x10) = 1;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  FUN_10000ec2c(0,&DAT_100fa6b90,&PTR__OBJC_CLASS___NSView_100f8d628);
  pNVar2 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_release(puVar1);
  self = NSStackView::stackViewWithViews_((ID)&_OBJC_CLASS___NSStackView,pNVar2);
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  pMVar4 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  pMVar3 = pMVar4;
  FUN_1000081a8();
  UVar5 = Swift::Actor::get_unownedExecutor();
  UVar6 = UVar5;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar6.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor("Paste/SearchField.swift",0x17,1,0x67,UVar5.unknown,pMVar3)
    ;
  }
  NSStackView::setEdgeInsets_(self,0,0,0,0x4010000000000000);
  _swift_release(pMVar4);
  return self;
}



/* Address: 0x100046acc | FUN_100046acc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100046acc(undefined8 param_1,long param_2)

{
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 != 0) {
    FUN_100046b10(param_1);
    return 0;
  }
  return 0;
}



/* Address: 0x100046b10 | FUN_100046b10 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_100046b10(undefined8 param_1,double param_2,ID param_3)

{
  _CocoaArrayWrapper _Var1;
  long lVar2;
  code *pcVar3;
  ID IVar4;
  ID IVar5;
  _ArrayBuffer _Var6;
  long lVar7;
  ID IVar8;
  ID IVar9;
  ID unaff_x20;
  double extraout_d0;
  double extraout_d0_00;
  double dVar10;
  
  IVar4 = objc_stub::window(unaff_x20);
  if (IVar4 != 0) {
    IVar5 = IVar4;
    FUN_100045c2c();
    FUN_100041f9c();
    objc_stub::makeFirstResponder_(IVar4,IVar5);
  }
  IVar4 = 0;
  FUN_100045c2c();
  FUN_100041f9c();
  objc_stub::locationInWindow(param_3);
  objc_stub::convertPoint_fromView_(IVar4,0);
  lVar2 = _TtC5Paste11SearchField::___lazy_storage___inputView;
  IVar4 = *(ID *)(unaff_x20 + _TtC5Paste11SearchField::___lazy_storage___inputView);
  FUN_100041f9c();
  IVar4 = objc_stub::textLayoutManager(IVar4);
  if (IVar4 == 0) {
    return 0;
  }
  dVar10 = param_2;
  IVar5 = objc_stub::textLayoutFragmentForPosition_(IVar4,extraout_d0,param_2);
  if (IVar5 != 0) {
    _Var6.unknown = (undefined *)objc_stub::textLineFragments(IVar5);
    FUN_10000ec2c(0,&DAT_100fa8808,&PTR__OBJC_CLASS___NSTextLineFragment_100f8d758);
    (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
    if ((ulong)_Var6.unknown >> 0x3e == 0) {
      lVar7 = *(long *)(((ulong)_Var6.unknown & 0xffffffffffffff8) + 0x10);
    }
    else {
      _Var1.unknown = _Var6.unknown & 0xffffffffffffff8;
      if ((undefined *)0x7fffffffffffffff < _Var6.unknown) {
        _Var1.unknown = _Var6.unknown;
      }
      lVar7 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
    }
    if (lVar7 == 0) {
      _swift_bridgeObjectRelease(_Var6.unknown);
    }
    else {
      if (((ulong)_Var6.unknown & 0xc000000000000001) == 0) {
        if (*(long *)(((ulong)_Var6.unknown & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100046e28);
          (*pcVar3)();
        }
        IVar8 = *(ID *)(_Var6.unknown + 0x20);
      }
      else {
        IVar8 = 0;
        Swift::_ArrayBuffer::__getElementSlowPath(0,_Var6);
      }
      _swift_bridgeObjectRelease(_Var6.unknown);
      objc_stub::layoutFragmentFrame(IVar5);
      objc_stub::layoutFragmentFrame(IVar5);
      param_2 = param_2 - dVar10;
      objc_stub::typographicBounds(IVar8);
      IVar8 = objc_stub::characterIndexForPoint_
                        (IVar8,extraout_d0 - extraout_d0_00,param_2 - dVar10);
      IVar9 = objc_stub::documentRange(IVar4);
      IVar9 = objc_stub::location(IVar9);
      IVar5 = objc_stub::rangeInElement(IVar5);
      IVar5 = objc_stub::location(IVar5);
      IVar4 = objc_stub::offsetFromLocation_toLocation_(IVar4,IVar9,IVar5);
      _swift_unknownObjectRelease(IVar9);
      _swift_unknownObjectRelease(IVar5);
      if (SCARRY8(IVar4,IVar8)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100046e24);
        (*pcVar3)();
      }
      IVar5 = *(ID *)(unaff_x20 + lVar2);
      FUN_100041f9c();
      objc_stub::setSelectedRange_(IVar5,IVar4 + IVar8,1);
    }
  }
  return 0;
}



/* Address: 0x100046e28 | FUN_100046e28 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

double FUN_100046e28(ulong param_1)

{
  long lVar1;
  _CocoaArrayWrapper _Var2;
  code *pcVar3;
  ID IVar4;
  ID IVar5;
  _ArrayBuffer _Var6;
  ulong self;
  ID IVar7;
  ulong extraout_x1;
  ulong extraout_x1_00;
  long extraout_x1_01;
  ID unaff_x20;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  double extraout_d0;
  double extraout_d0_00;
  double extraout_d0_01;
  double dVar11;
  
  IVar4 = objc_stub::textContentManager(unaff_x20);
  dVar11 = 0.0;
  if (IVar4 != 0) {
    IVar5 = objc_stub::documentRange(IVar4);
    IVar5 = objc_stub::location(IVar5);
    IVar4 = objc_stub::locationFromLocation_withOffset_(IVar4,IVar5,param_1);
    _swift_unknownObjectRelease(IVar5);
    if (IVar4 != 0) {
      IVar5 = objc_stub::textLayoutFragmentForLocation_(unaff_x20,IVar4);
      if (IVar5 == 0) {
        _swift_unknownObjectRelease(IVar4);
      }
      else {
        _Var6.unknown = (undefined *)objc_stub::textLineFragments(IVar5);
        FUN_10000ec2c(0,&DAT_100fa8808,&PTR__OBJC_CLASS___NSTextLineFragment_100f8d758);
        (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
        if ((ulong)_Var6.unknown >> 0x3e == 0) {
          lVar9 = *(long *)(((ulong)_Var6.unknown & 0xffffffffffffff8) + 0x10);
        }
        else {
          _Var2.unknown = _Var6.unknown & 0xffffffffffffff8;
          if ((undefined *)0x7fffffffffffffff < _Var6.unknown) {
            _Var2.unknown = _Var6.unknown;
          }
          lVar9 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
        }
        if (lVar9 != 0) {
          uVar10 = 0;
          do {
            if (((ulong)_Var6.unknown & 0xc000000000000001) == 0) {
              if (*(ulong *)(((ulong)_Var6.unknown & 0xffffffffffffff8) + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x100046fe0);
                (*pcVar3)();
              }
              self = *(ulong *)(_Var6.unknown + uVar10 * 8 + 0x20);
            }
            else {
              self = uVar10;
              Swift::_ArrayBuffer::__getElementSlowPath(uVar10,_Var6);
            }
            lVar1 = uVar10 + 1;
            if (SCARRY8(uVar10,1)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x100046fdc);
              (*pcVar3)();
            }
            IVar7 = objc_stub::characterRange(self);
            if ((IVar7 <= param_1) && (param_1 - IVar7 < extraout_x1)) goto LAB_100047060;
            uVar10 = uVar10 + 1;
          } while (lVar1 != lVar9);
        }
        _swift_bridgeObjectRelease(_Var6.unknown);
        _Var6.unknown = (undefined *)objc_stub::textLineFragments(IVar5);
        (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
        if ((ulong)_Var6.unknown >> 0x3e == 0) {
          lVar9 = *(long *)(((ulong)_Var6.unknown & 0xffffffffffffff8) + 0x10);
        }
        else {
          _Var2.unknown = _Var6.unknown & 0xffffffffffffff8;
          if ((undefined *)0x7fffffffffffffff < _Var6.unknown) {
            _Var2.unknown = _Var6.unknown;
          }
          lVar9 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
        }
        if (lVar9 == 0) {
          _swift_unknownObjectRelease(IVar4);
          _swift_bridgeObjectRelease(_Var6.unknown);
        }
        else {
          if (((ulong)_Var6.unknown & 0xc000000000000001) == 0) {
            if (*(long *)(((ulong)_Var6.unknown & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x1000471b4);
              (*pcVar3)();
            }
            self = *(ulong *)(_Var6.unknown + 0x20);
          }
          else {
            self = 0;
            Swift::_ArrayBuffer::__getElementSlowPath(0,_Var6);
          }
LAB_100047060:
          _swift_bridgeObjectRelease(_Var6.unknown);
          IVar7 = objc_stub::characterRange(self);
          if (SBORROW8(param_1,IVar7)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100047134);
            (*pcVar3)();
          }
          uVar8 = param_1 - IVar7 & ((long)(param_1 - IVar7) >> 0x3f ^ 0xffffffffffffffffU);
          objc_stub::characterRange(self);
          uVar10 = extraout_x1_00;
          if ((long)uVar8 <= (long)extraout_x1_00) {
            uVar10 = uVar8;
          }
          objc_stub::characterRange(self);
          if ((long)uVar10 < extraout_x1_01) {
            objc_stub::locationForCharacterAtIndex_(self,uVar10);
            dVar11 = extraout_d0;
          }
          else {
            objc_stub::typographicBounds(self);
            dVar11 = extraout_d0_00;
            _CGRectGetWidth();
          }
          objc_stub::glyphOrigin(self);
          dVar11 = dVar11 + extraout_d0_01;
          objc_stub::layoutFragmentFrame(IVar5);
          _CGRectGetMinY();
          objc_stub::glyphOrigin(self);
          objc_stub::typographicBounds(self);
          _CGRectGetWidth();
          objc_stub::typographicBounds(self);
          _CGRectGetHeight();
          _swift_unknownObjectRelease(IVar4);
        }
      }
    }
  }
  return dVar11;
}



/* Address: 0x1000471b4 | _TtC5Paste11SearchField::mouseDown: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC5Paste11SearchField::mouseDown_(ID param_1,SEL param_2,ID param_3)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  ID self;
  ID IVar5;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1000081a8();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor("Paste/SearchField.swift",0x17,1,0x91,UVar3.unknown,pMVar1)
    ;
  }
  self = objc_stub::window(param_1);
  if (self == 0) {
    _swift_release(pMVar2);
  }
  else {
    IVar5 = self;
    FUN_100045c2c();
    FUN_100041f9c();
    objc_stub::makeFirstResponder_(self,IVar5);
    _swift_release(pMVar2);
  }
  return;
}



/* Address: 0x1000472ac | FUN_1000472ac */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000472ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  ID IVar4;
  ID IVar5;
  ID unaff_x20;
  undefined8 extraout_d0;
  undefined8 uVar6;
  double extraout_d0_00;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  _swift_getObjectType();
  IVar4 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffb0,"layout");
  FUN_100045c2c();
  objc_stub::bounds(unaff_x20);
  IVar5 = objc_stub::convertRect_toView_
                    (unaff_x20,
                     *(undefined8 *)
                      (unaff_x20 + _TtC5Paste11SearchField::___lazy_storage___inputView));
  puVar1 = (undefined8 *)(IVar4 + _TtCC5Paste11SearchField9InputView::focusRingBounds);
  *puVar1 = extraout_d0;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  FUN_10004200c();
  uVar9 = *puVar1;
  uVar8 = puVar1[3];
  uVar6 = puVar1[2];
  puVar2 = (undefined8 *)
           (IVar5 + _TtCCC5Paste11SearchField9InputViewP33_88626D17C36931F5670CC3740FF3505016TextViewScroller
                    ::focusRingBounds);
  puVar2[1] = puVar1[1];
  *puVar2 = uVar9;
  puVar2[3] = uVar8;
  puVar2[2] = uVar6;
  objc_stub::bounds(unaff_x20);
  dVar7 = extraout_d0_00;
  _CGRectGetHeight();
  bVar3 = Swift::_stdlib_isOSVersionAtLeast(0x1a,0,0);
  dVar7 = dVar7 * 0.5;
  if ((bVar3 & 1) == 0) {
    dVar7 = 6.0;
  }
  objc_stub::setCornerRadius_curve_
            (unaff_x20,dVar7,*(undefined8 *)PTR__kCACornerCurveCircular_100eaa398);
  return;
}



/* Address: 0x1000473b4 | _TtC5Paste11SearchField::layout */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC5Paste11SearchField::layout(ID param_1,SEL param_2)

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
    _swift_task_reportUnexpectedExecutor("Paste/SearchField.swift",0x17,1,0x95,UVar3.unknown,pMVar1)
    ;
  }
  FUN_1000472ac(param_1);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x100047450 | FUN_100047450 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

ID FUN_100047450(undefined8 param_1)

{
  bool bVar1;
  uint uVar2;
  ID IVar3;
  NSObject *pNVar4;
  NSObject *pNVar5;
  long lVar6;
  long lVar7;
  objc_super *super;
  code *pcVar9;
  ID unaff_x20;
  undefined8 uVar10;
  undefined8 uVar8;
  
  _swift_getObjectType();
  IVar3 = objc_stub::window(unaff_x20);
  pNVar4 = (NSObject *)objc_stub::firstResponder(IVar3);
  pNVar5 = (NSObject *)0x0;
  FUN_100045c2c();
  FUN_100041f9c();
  if (pNVar4 != (NSObject *)0x0) {
    FUN_10000ec2c(0,&DAT_100fa8820,&PTR__OBJC_CLASS___NSResponder_100f8d730);
    bVar1 = (extension_ObjectiveC)::__C::NSObject::___infix(pNVar4,pNVar5);
    lVar6 = 0;
    if (bVar1) {
      FUN_1001e7d18();
      lVar7 = 0x7a;
      FUN_1001e94d4(0x7a,0xe100000000000000);
      if ((lVar7 == lVar6) &&
         (lVar7 = _TtC5Paste11SearchField::onUndo, pNVar5 == (NSObject *)0x100000)) {
LAB_1000475ac:
        pcVar9 = *(code **)(unaff_x20 + lVar7);
        if (pcVar9 != (code *)0x0) {
          uVar10 = ((undefined8 *)(unaff_x20 + lVar7))[1];
          uVar8 = uVar10;
          _swift_retain(uVar10);
          uVar2 = (uint)uVar8;
          (*pcVar9)();
          FUN_100004550(pcVar9,uVar10);
          return (ulong)(uVar2 & 1);
        }
        return 0;
      }
      lVar7 = 0x7a;
      FUN_1001e94d4(0x7a,0xe100000000000000);
      super = (objc_super *)&stack0xffffffffffffffa0;
      if ((lVar7 == lVar6) &&
         (super = (objc_super *)&stack0xffffffffffffffa0, lVar7 = _TtC5Paste11SearchField::onRedo,
         pNVar5 == (NSObject *)0x120000)) goto LAB_1000475ac;
      goto LAB_100047568;
    }
  }
  super = (objc_super *)&stack0xffffffffffffffb0;
LAB_100047568:
  IVar3 = _objc_msgSendSuper2(super,"performKeyEquivalent:",param_1);
  return IVar3;
}



/* Address: 0x1000475fc | _TtC5Paste11SearchField::performKeyEquivalent: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

bool _TtC5Paste11SearchField::performKeyEquivalent_(ID param_1,SEL param_2,ID param_3)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  uint uVar5;
  
  uVar5 = (uint)param_3;
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1000081a8();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor("Paste/SearchField.swift",0x17,1,0x9c,UVar3.unknown,pMVar1)
    ;
  }
  FUN_100047450();
  _swift_release(pMVar2);
  return uVar5 & 1;
}



/* Address: 0x1000476c8 | _TtC5Paste11SearchField::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC5Paste11SearchField::init(ID param_1,SEL param_2)

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
    _swift_task_reportUnexpectedExecutor("Paste/SearchField.swift",0x17,1,8,UVar3.unknown,pMVar2);
  }
  __swift_stdlib_reportUnimplementedInitializer("Paste.SearchField",0x11,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100047750);
  (*pcVar1)();
}



/* Address: 0x100047750 | FUN_100047750 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100047750(void)

{
  long unaff_x20;
  
  FUN_100004550(*(undefined8 *)(unaff_x20 + _TtC5Paste11SearchField::onShowFilters),
                ((undefined8 *)(unaff_x20 + _TtC5Paste11SearchField::onShowFilters))[1]);
  FUN_100004550(*(undefined8 *)(unaff_x20 + _TtC5Paste11SearchField::onTextShouldChange),
                ((undefined8 *)(unaff_x20 + _TtC5Paste11SearchField::onTextShouldChange))[1]);
  FUN_100004550(*(undefined8 *)(unaff_x20 + _TtC5Paste11SearchField::onSelectionChange),
                ((undefined8 *)(unaff_x20 + _TtC5Paste11SearchField::onSelectionChange))[1]);
  FUN_100004550(*(undefined8 *)(unaff_x20 + _TtC5Paste11SearchField::onEndEditing),
                ((undefined8 *)(unaff_x20 + _TtC5Paste11SearchField::onEndEditing))[1]);
  FUN_100004550(*(undefined8 *)(unaff_x20 + _TtC5Paste11SearchField::onEnter),
                ((undefined8 *)(unaff_x20 + _TtC5Paste11SearchField::onEnter))[1]);
  FUN_100004550(*(undefined8 *)(unaff_x20 + _TtC5Paste11SearchField::onCancel),
                ((undefined8 *)(unaff_x20 + _TtC5Paste11SearchField::onCancel))[1]);
  FUN_100004550(*(undefined8 *)(unaff_x20 + _TtC5Paste11SearchField::onClear),
                ((undefined8 *)(unaff_x20 + _TtC5Paste11SearchField::onClear))[1]);
  FUN_100004550(*(undefined8 *)(unaff_x20 + _TtC5Paste11SearchField::onUndo),
                ((undefined8 *)(unaff_x20 + _TtC5Paste11SearchField::onUndo))[1]);
  FUN_100004550(*(undefined8 *)(unaff_x20 + _TtC5Paste11SearchField::onRedo),
                ((undefined8 *)(unaff_x20 + _TtC5Paste11SearchField::onRedo))[1]);
  return 0;
}



/* Address: 0x100047840 | _TtC5Paste11SearchField::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC5Paste11SearchField::_cxx_destruct(ID param_1,SEL param_2)

{
  FUN_100004550(*(undefined8 *)(param_1 + onShowFilters),
                ((undefined8 *)(param_1 + onShowFilters))[1]);
  FUN_100004550(*(undefined8 *)(param_1 + onTextShouldChange),
                ((undefined8 *)(param_1 + onTextShouldChange))[1]);
  FUN_100004550(*(undefined8 *)(param_1 + onSelectionChange),
                ((undefined8 *)(param_1 + onSelectionChange))[1]);
  FUN_100004550(*(undefined8 *)(param_1 + onEndEditing),((undefined8 *)(param_1 + onEndEditing))[1])
  ;
  FUN_100004550(*(undefined8 *)(param_1 + onEnter),((undefined8 *)(param_1 + onEnter))[1]);
  FUN_100004550(*(undefined8 *)(param_1 + onCancel),((undefined8 *)(param_1 + onCancel))[1]);
  FUN_100004550(*(undefined8 *)(param_1 + onClear),((undefined8 *)(param_1 + onClear))[1]);
  FUN_100004550(*(undefined8 *)(param_1 + onUndo),((undefined8 *)(param_1 + onUndo))[1]);
  FUN_100004550(*(undefined8 *)(param_1 + onRedo),((undefined8 *)(param_1 + onRedo))[1]);
  return;
}



/* Address: 0x10004793c | FUN_10004793c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10004793c(void)

{
  return ZEXT816(0x100f90980);
}



/* Address: 0x10004795c | FUN_10004795c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

uint FUN_10004795c(ID param_1,ID param_2,long param_3,char *param_4,undefined *param_5)

{
  ID IVar1;
  Iterator IVar2;
  MainActor *this;
  Iterator IVar3;
  MainActor *pMVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  void *pvVar7;
  ID IVar8;
  undefined *puVar9;
  NSString *pNVar10;
  long lVar11;
  long lVar12;
  void *pvVar13;
  undefined *puVar14;
  long extraout_x1;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  uint uVar18;
  long unaff_x20;
  code *pcVar19;
  int iVar20;
  undefined8 uVar21;
  String SVar22;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  String local_a0;
  undefined8 local_90;
  ulong uStack_88;
  char *local_78;
  undefined *puStack_70;
  
  IVar1 = objc_stub::textStorage(param_1);
  if (IVar1 == 0) {
    uVar18 = 0;
  }
  else {
    local_78 = (char *)0x0;
    if (param_5 != (undefined *)0x0) {
      local_78 = param_4;
    }
    puVar9 = (undefined *)0xe000000000000000;
    if (param_5 != (undefined *)0x0) {
      puVar9 = param_5;
    }
    uVar16 = (ulong)puVar9 & 0x2000000000000000;
    uVar15 = (ulong)local_78 & 0xffffffffffff;
    uVar17 = (ulong)puVar9 >> 0x38 & 0xf;
    local_a0.bridgeObject = puVar9;
    local_a0.str = local_78;
    uStack_88 = uVar15;
    if (uVar16 != 0) {
      uStack_88 = uVar17;
    }
    local_90 = 0;
    lVar11 = 2;
    puStack_70 = puVar9;
    _swift_bridgeObjectRetain_n(param_5);
    IVar2.unknown = puVar9;
    _swift_bridgeObjectRetain();
    Swift::String::Iterator::_next(IVar2);
    if (lVar11 != 0) {
      this = Swift::MainActor::typeMetadataAccessor();
      IVar3.unknown = this;
      do {
        IVar3.unknown = Swift::MainActor::get_shared(this,IVar3.unknown);
        pMVar4 = (MainActor *)IVar3.unknown;
        FUN_1000081a8();
        UVar5 = Swift::Actor::get_unownedExecutor();
        UVar6 = UVar5;
        _swift_task_isCurrentExecutor();
        if (((ulong)UVar6.unknown & 1) == 0) {
          _swift_task_reportUnexpectedExecutor
                    ("Paste/SearchField.swift",0x17,1,0xb3,UVar5.unknown,pMVar4);
        }
        lVar12 = lVar11;
        FUN_1000482c8();
        if (((ulong)IVar2.unknown & 0xff00000000) == 0x100000000) {
                    /* WARNING: Does not return */
          pcVar19 = (code *)SoftwareBreakpoint(1,0x100047d8c);
          (*pcVar19)();
        }
        _swift_bridgeObjectRelease(lVar11);
        iVar20 = (int)IVar2.unknown;
        if (((iVar20 - 10U < 4) || (iVar20 - 0x2028U < 2)) || (iVar20 == 0x85)) {
          _swift_release(IVar3.unknown);
          _swift_bridgeObjectRelease(puVar9);
          pvVar7 = local_a0.bridgeObject;
          _swift_bridgeObjectRelease();
          local_a0.bridgeObject = (void *)0xe100000000000000;
          local_a0.str = (char *)0xa;
          local_b0 = 0x20;
          uStack_a8 = 0xe100000000000000;
          FUN_100008378();
          puVar14 = PTR___type_metadata_for_Swift_String_100eac208;
          local_a0 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                               (&local_a0,&local_b0,0,0,0,1,
                                PTR___type_metadata_for_Swift_String_100eac208,
                                PTR___type_metadata_for_Swift_String_100eac208,
                                PTR___type_metadata_for_Swift_String_100eac208,pvVar7,pvVar7,pvVar7)
          ;
          pvVar13 = local_a0.bridgeObject;
          local_b0 = 0xd;
          uStack_a8 = 0xe100000000000000;
          local_c0 = 0x20;
          uStack_b8 = 0xe100000000000000;
          SVar22 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                             (&local_b0,&local_c0,0,0,0,1,puVar14,puVar14,puVar14,pvVar7,pvVar7,
                              pvVar7);
          puVar14 = SVar22.bridgeObject;
          _swift_bridgeObjectRelease(puVar9);
          _swift_bridgeObjectRelease(pvVar13);
          uVar16 = (ulong)puVar14 & 0x2000000000000000;
          uVar15 = (ulong)SVar22.str & 0xffffffffffff;
          uVar17 = (ulong)puVar14 >> 0x38 & 0xf;
          goto LAB_100047bc4;
        }
        _swift_release();
        Swift::String::Iterator::_next(IVar3);
        lVar11 = lVar12;
        IVar2.unknown = IVar3.unknown;
      } while (lVar12 != 0);
    }
    _swift_bridgeObjectRelease(puVar9);
    _swift_bridgeObjectRelease(local_a0.bridgeObject);
    puVar14 = puVar9;
LAB_100047bc4:
    if (uVar16 != 0) {
      uVar15 = uVar17;
    }
    if ((uVar15 == 0) && (param_3 == 1)) {
      IVar8 = objc_stub::attribute_atIndex_effectiveRange_
                        (IVar1,*(undefined8 *)PTR__NSAttachmentAttributeName_100ea9000,param_2,0);
      if (IVar8 == 0) {
        local_a0 = (String)ZEXT816(0);
        uStack_88 = 0;
        local_90 = 0;
        FUN_100013954(&local_a0);
      }
      else {
        Swift::__bridgeAnyObjectToAny();
        _swift_unknownObjectRelease(IVar8);
        FUN_100013954(&local_a0);
        IVar8 = objc_stub::selectedRange(param_1);
        if ((IVar8 != param_2) || (extraout_x1 != 1)) {
          objc_stub::setSelectedRange_(param_1,param_2,1);
          _swift_bridgeObjectRelease(puVar14);
          uVar18 = 0;
          goto LAB_100047d60;
        }
      }
    }
    puVar9 = &_OBJC_CLASS___NSMutableAttributedString;
    _objc_allocWithZone();
    IVar8 = objc_stub::initWithAttributedString_((ID)puVar9,IVar1);
    pNVar10 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    objc_stub::replaceCharactersInRange_withString_(IVar8,param_2,param_3,pNVar10);
    pNVar10 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    IVar1 = objc_stub::length((ID)pNVar10);
    if (SCARRY8(param_2,IVar1)) {
                    /* WARNING: Does not return */
      pcVar19 = (code *)SoftwareBreakpoint(1,0x100047d88);
      (*pcVar19)();
    }
    pcVar19 = *(code **)(unaff_x20 + _TtC5Paste11SearchField::onTextShouldChange);
    if (pcVar19 == (code *)0x0) {
      _swift_bridgeObjectRelease(puVar14);
      uVar18 = 1;
    }
    else {
      uVar21 = ((undefined8 *)(unaff_x20 + _TtC5Paste11SearchField::onTextShouldChange))[1];
      _swift_retain(uVar21);
      (*pcVar19)(IVar8,param_2 + IVar1,0);
      uVar18 = (uint)IVar8;
      FUN_100004550(pcVar19,uVar21);
      _swift_bridgeObjectRelease(puVar14);
    }
  }
LAB_100047d60:
  return uVar18 & 1;
}



/* Address: 0x100047d8c | _TtC5Paste11SearchField::textView:shouldChangeTextInRange:replacementString: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x30 bytes */

bool __thiscall
_TtC5Paste11SearchField::textView_shouldChangeTextInRange_replacementString_
          (_TtC5Paste11SearchField *this,ID param_1,SEL param_2,ID param_3,_NSRange param_4,
          ID param_5)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  String SVar5;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1000081a8();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor("Paste/SearchField.swift",0x17,1,0xad,UVar3.unknown,pMVar1)
    ;
  }
  if (param_5 == 0) {
    SVar5 = (String)(ZEXT816(0) << 0x40);
  }
  else {
    SVar5 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  FUN_10004795c(param_3,param_4.field0_0x0,param_4.field1_0x8,SVar5.str,SVar5.bridgeObject);
  _swift_release(pMVar2);
  _swift_bridgeObjectRelease(SVar5.bridgeObject);
  return (uint)param_3 & 1;
}



/* Address: 0x100047ea4 | _TtC5Paste11SearchField::textViewDidChangeSelection: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC5Paste11SearchField::textViewDidChangeSelection_(ID param_1,SEL param_2,ID param_3)

{
  char *pcVar1;
  MainActor *pMVar2;
  MainActor *pMVar3;
  UnownedSerialExecutor UVar4;
  code *self;
  ID IVar5;
  undefined8 extraout_x1;
  char *pcVar6;
  void *pvVar7;
  long extraout_x8;
  code *pcVar8;
  undefined8 uVar9;
  long lVar10;
  Notification NVar11;
  
  NVar11 = Foundation::Notification::typeMetadataAccessor();
  pvVar7 = NVar11.syncInProgress.bridgeObject;
  pcVar6 = NVar11.syncInProgress.str;
  pcVar1 = NVar11.pastePaused.str;
  lVar10 = *(long *)(pcVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(undefined8 *)(lVar10 + 0x40),pcVar1,NVar11.pastePaused.bridgeObject);
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  pMVar3 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  pMVar2 = pMVar3;
  FUN_1000081a8();
  UVar4 = Swift::Actor::get_unownedExecutor();
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    pMVar2 = (MainActor *)0x17;
    pcVar6 = &DAT_00000001;
    pvVar7 = (void *)0xd2;
    _swift_task_reportUnexpectedExecutor("Paste/SearchField.swift");
  }
  NVar11.pastePaused.bridgeObject = pMVar2;
  NVar11.pastePaused.str = (char *)param_3;
  NVar11.syncInProgress.bridgeObject = pvVar7;
  NVar11.syncInProgress.str = pcVar6;
  NVar11 = Foundation::Notification::__unconditionallyBridgeFromObjectiveC(NVar11);
  pcVar8 = *(code **)(param_1 + onSelectionChange);
  if (pcVar8 == (code *)0x0) {
    (**(code **)(lVar10 + 8))
              (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),pcVar1,
               NVar11.syncInProgress.str,NVar11.syncInProgress.bridgeObject);
    _swift_release(pMVar3);
  }
  else {
    uVar9 = ((undefined8 *)(param_1 + onSelectionChange))[1];
    self = pcVar8;
    FUN_100011128(pcVar8,uVar9);
    FUN_100045c2c();
    FUN_100041f9c();
    IVar5 = objc_stub::selectedRange((ID)self);
    (*pcVar8)(IVar5,extraout_x1);
    FUN_100004550(pcVar8,uVar9);
    (**(code **)(lVar10 + 8))
              (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),pcVar1);
    _swift_release(pMVar3);
  }
  return;
}



/* Address: 0x100048058 | _TtC5Paste11SearchField::textView:doCommandBySelector: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

bool _TtC5Paste11SearchField::textView_doCommandBySelector_
               (ID param_1,SEL param_2,ID param_3,SEL param_4)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  uint uVar5;
  
  uVar5 = (uint)param_4;
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1000081a8();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor("Paste/SearchField.swift",0x17,1,0xd6,UVar3.unknown,pMVar1)
    ;
  }
  FUN_10004867c();
  _swift_release(pMVar2);
  return uVar5 & 1;
}



/* Address: 0x100048128 | _TtC5Paste11SearchField::textDidEndEditing: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC5Paste11SearchField::textDidEndEditing_(ID param_1,SEL param_2,ID param_3)

{
  char *pcVar1;
  MainActor *pMVar2;
  MainActor *pMVar3;
  UnownedSerialExecutor UVar4;
  char *pcVar5;
  void *pvVar6;
  long extraout_x8;
  undefined8 uVar7;
  code *pcVar8;
  long lVar9;
  Notification NVar10;
  
  NVar10 = Foundation::Notification::typeMetadataAccessor();
  pvVar6 = NVar10.syncInProgress.bridgeObject;
  pcVar5 = NVar10.syncInProgress.str;
  pcVar1 = NVar10.pastePaused.str;
  lVar9 = *(long *)(pcVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(undefined8 *)(lVar9 + 0x40),pcVar1,NVar10.pastePaused.bridgeObject);
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  pMVar3 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  pMVar2 = pMVar3;
  FUN_1000081a8();
  UVar4 = Swift::Actor::get_unownedExecutor();
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    pMVar2 = (MainActor *)0x17;
    pcVar5 = &DAT_00000001;
    pvVar6 = (void *)0xe4;
    _swift_task_reportUnexpectedExecutor("Paste/SearchField.swift");
  }
  NVar10.pastePaused.bridgeObject = pMVar2;
  NVar10.pastePaused.str = (char *)param_3;
  NVar10.syncInProgress.bridgeObject = pvVar6;
  NVar10.syncInProgress.str = pcVar5;
  NVar10 = Foundation::Notification::__unconditionallyBridgeFromObjectiveC(NVar10);
  pcVar8 = *(code **)(param_1 + onEndEditing);
  if (pcVar8 == (code *)0x0) {
    (**(code **)(lVar9 + 8))
              (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),pcVar1,
               NVar10.syncInProgress.str,NVar10.syncInProgress.bridgeObject);
    _swift_release(pMVar3);
  }
  else {
    uVar7 = ((undefined8 *)(param_1 + onEndEditing))[1];
    FUN_100011128(pcVar8,uVar7);
    (*pcVar8)();
    FUN_100004550(pcVar8,uVar7);
    (**(code **)(lVar9 + 8))
              (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),pcVar1);
    _swift_release(pMVar3);
  }
  return;
}



/* Address: 0x100048294 | FUN_100048294 */

void FUN_100048294(void)

{
  long unaff_x20;
  
  _swift_unknownObjectWeakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x1000482b8 | FUN_1000482b8 */

void FUN_1000482b8(void)

{
  FUN_100045e54();
  return;
}



/* Address: 0x1000482c0 | FUN_1000482c0 */

void FUN_1000482c0(void)

{
  FUN_100046acc();
  return;
}



/* Address: 0x1000482c8 | FUN_1000482c8 */

ulong FUN_1000482c8(_StringGuts param_1,ulong param_2)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  Scalar SVar4;
  UnsafeBufferPointer<__int8> UVar5;
  uint uVar6;
  ulong uVar7;
  tuple2_conflict9 tVar8;
  undefined8 local_40;
  ulong uStack_38;
  
  uVar7 = (ulong)param_1.unknown & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar7 = param_2 >> 0x38 & 0xf;
  }
  if (uVar7 == 0) {
    SVar4.unknown = (undefined *)0x0;
    uVar7 = 0x100000000;
  }
  else {
    uVar7 = 0;
    FUN_10004847c(0xf,param_1.unknown,param_2);
    if ((param_2 >> 0x3c & 1) == 0) {
      uVar7 = uVar7 >> 0x10;
      if ((param_2 >> 0x3d & 1) == 0) {
        if (((ulong)param_1.unknown >> 0x3c & 1) == 0) {
          UVar5 = Swift::_StringObject::get_sharedUTF8(param_1.unknown);
        }
        else {
          UVar5.unknown = (undefined *)((param_2 & 0xfffffffffffffff) + 0x20);
        }
        pbVar1 = UVar5.unknown + uVar7;
        uVar3 = (uint)*pbVar1;
        SVar4.unknown = (undefined *)(ulong)uVar3;
        if ((char)*pbVar1 < '\0') {
          uVar6 = (uint)LZCOUNT(uVar3 << 0x18 ^ 0xffffffff);
          if (uVar6 < 3) {
            if (uVar6 != 1) {
              SVar4.unknown = (undefined *)(ulong)(pbVar1[1] & 0x3f | (uVar3 & 0x1f) << 6);
            }
          }
          else {
            if (uVar6 == 3) {
              bVar2 = pbVar1[2];
              uVar3 = (uVar3 & 0xf) << 0xc | (pbVar1[1] & 0x3f) << 6;
            }
            else {
              bVar2 = pbVar1[3];
              uVar3 = (uVar3 & 0xf) << 0x12 | (pbVar1[1] & 0x3f) << 0xc | (pbVar1[2] & 0x3f) << 6;
            }
            SVar4.unknown = (undefined *)(ulong)(uVar3 | bVar2 & 0x3f);
          }
        }
      }
      else {
        local_40 = param_1.unknown;
        uStack_38 = param_2 & 0xffffffffffffff;
        uVar3 = (uint)*(byte *)((long)&local_40 + uVar7);
        SVar4.unknown = (undefined *)(ulong)uVar3;
        if ((char)*(byte *)((long)&local_40 + uVar7) < '\0') {
          uVar6 = (uint)LZCOUNT(uVar3 << 0x18 ^ 0xffffffff);
          if (uVar6 < 3) {
            if (uVar6 != 1) {
              SVar4.unknown =
                   (undefined *)
                   (ulong)(*(byte *)((long)&local_40 + uVar7 + 1) & 0x3f | (uVar3 & 0x1f) << 6);
            }
          }
          else {
            if (uVar6 == 3) {
              bVar2 = *(byte *)((long)&local_40 + uVar7 + 2);
              uVar3 = (uVar3 & 0xf) << 0xc | (*(byte *)((long)&local_40 + uVar7 + 1) & 0x3f) << 6;
            }
            else {
              bVar2 = *(byte *)((long)&local_40 + uVar7 + 3);
              uVar3 = (uVar3 & 0xf) << 0x12 | (*(byte *)((long)&local_40 + uVar7 + 1) & 0x3f) << 0xc
                      | (*(byte *)((long)&local_40 + uVar7 + 2) & 0x3f) << 6;
            }
            SVar4.unknown = (undefined *)(ulong)(uVar3 | bVar2 & 0x3f);
          }
        }
      }
    }
    else {
      tVar8 = Swift::_StringGuts::foreignErrorCorrectedScalar
                        ((Index)(uVar7 & 0xffffffffffff0000),param_1);
      SVar4 = tVar8._.unknown;
    }
    uVar7 = 0;
  }
  return uVar7 | (ulong)SVar4.unknown & 0xffffffff;
}



/* Address: 0x10004847c | FUN_10004847c */

void FUN_10004847c(ulong param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  code *pcVar2;
  uint uVar3;
  
  uVar3 = (uint)(param_2 >> 0x3b) & 1;
  if ((param_3 & 0x1000000000000000) == 0) {
    uVar3 = 1;
  }
  if (((param_1 & 1) == 0) || ((param_1 & 0xc) == 4L << (ulong)uVar3)) {
    FUN_100048510();
    if ((param_1 & 1) == 0) {
      FUN_10004857c();
    }
  }
  else {
    uVar1 = param_2 & 0xffffffffffff;
    if ((param_3 & 0x2000000000000000) != 0) {
      uVar1 = param_3 >> 0x38 & 0xf;
    }
    if (uVar1 <= param_1 >> 0x10) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1000484cc);
      (*pcVar2)();
    }
  }
  return;
}



/* Address: 0x100048510 | FUN_100048510 */

void FUN_100048510(ulong param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  code *pcVar2;
  uint uVar3;
  
  uVar3 = (uint)(param_2 >> 0x3b) & 1;
  if ((param_3 & 0x1000000000000000) == 0) {
    uVar3 = 1;
  }
  if ((param_1 & 0xc) == 4L << uVar3) {
    FUN_1000740a8();
  }
  uVar1 = param_2 & 0xffffffffffff;
  if ((param_3 & 0x2000000000000000) != 0) {
    uVar1 = param_3 >> 0x38 & 0xf;
  }
  if (param_1 >> 0x10 < uVar1) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10004857c);
  (*pcVar2)();
}



/* Address: 0x10004857c | FUN_10004857c */

Index FUN_10004857c(Index param_1,_StringGuts param_2,ulong param_3)

{
  ulong uVar1;
  char cVar2;
  Index IVar3;
  UnsafeBufferPointer<__int8> UVar4;
  undefined8 local_28;
  undefined *local_20;
  ulong uStack_18;
  
  if ((((ulong)param_1.cmsgPointer.unknown & 0xc000) == 0) &&
     ((undefined *)0xffff < (ulong)param_1.cmsgPointer.unknown)) {
    local_28 = (ulong)param_1.cmsgPointer.unknown >> 0x10;
    if ((param_3 >> 0x3c & 1) == 0) {
      if ((param_3 >> 0x3d & 1) == 0) {
        if (((ulong)param_2.unknown >> 0x3c & 1) == 0) {
          UVar4 = Swift::_StringObject::get_sharedUTF8(param_2.unknown);
          if (local_28 == param_3) goto LAB_100048614;
        }
        else {
          UVar4.unknown = (undefined *)((param_3 & 0xfffffffffffffff) + 0x20);
          if (local_28 == ((ulong)param_2.unknown & 0xffffffffffff)) goto LAB_100048614;
        }
        cVar2 = UVar4.unknown[local_28];
        while (cVar2 < -0x40) {
          cVar2 = UVar4.unknown[local_28 - 1];
          local_28 = local_28 - 1;
        }
      }
      else {
        local_20 = param_2.unknown;
        uStack_18 = param_3 & 0xffffffffffffff;
        if (local_28 != (param_3 >> 0x38 & 0xf)) {
          cVar2 = *(char *)((long)&local_20 + local_28);
          while (cVar2 < -0x40) {
            cVar2 = *(char *)((long)&local_28 + local_28 + 7);
            local_28 = local_28 - 1;
          }
        }
      }
LAB_100048614:
      return (Index)(local_28 << 0x10);
    }
    uVar1 = (ulong)param_2.unknown & 0xffffffffffff;
    if ((param_3 & 0x2000000000000000) != 0) {
      uVar1 = param_3 >> 0x38 & 0xf;
    }
    if (local_28 != uVar1) {
      IVar3 = Swift::_StringGuts::foreignScalarAlign(param_1,param_2);
      return (Index)IVar3.cmsgPointer.unknown;
    }
  }
  else {
    param_1.cmsgPointer.unknown =
         (UnsafeMutablePointer)((ulong)param_1.cmsgPointer.unknown & 0xffffffffffff0000);
  }
  return (Index)param_1.cmsgPointer.unknown;
}



/* Address: 0x10004867c | FUN_10004867c */

undefined8
FUN_10004867c(UnsafeMutablePointer param_1,undefined8 param_2,UnsafeMutablePointer param_3,
             __int64 param_4,UnsafeMutablePointer param_5,__int64 param_6)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uVar4;
  Selector SVar5;
  Selector SVar6;
  Selector SVar7;
  Selector SVar8;
  Selector SVar9;
  Selector SVar10;
  
  SVar5.eventsCapacity = (__int64)"insertNewline:";
  SVar5.events.unknown = param_1.unknown;
  SVar7.eventsCapacity = param_4;
  SVar7.events.unknown = param_3.unknown;
  SVar9.eventsCapacity = param_6;
  SVar9.events.unknown = param_5.unknown;
  bVar2 = ObjectiveC::Selector::___infix(SVar5,SVar7,SVar9);
  if (bVar2) {
    pcVar3 = *(code **)(unaff_x20 + _TtC5Paste11SearchField::onEnter);
    lVar1 = _TtC5Paste11SearchField::onEnter;
  }
  else {
    SVar6.eventsCapacity = (__int64)"cancelOperation:";
    SVar6.events.unknown = param_1.unknown;
    SVar8.eventsCapacity = param_4;
    SVar8.events.unknown = param_3.unknown;
    SVar10.eventsCapacity = param_6;
    SVar10.events.unknown = param_5.unknown;
    bVar2 = ObjectiveC::Selector::___infix(SVar6,SVar8,SVar10);
    if (!bVar2) {
      return 0;
    }
    pcVar3 = *(code **)(unaff_x20 + _TtC5Paste11SearchField::onCancel);
    lVar1 = _TtC5Paste11SearchField::onCancel;
  }
  if (pcVar3 != (code *)0x0) {
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1 + 8);
    _swift_retain(uVar4);
    (*pcVar3)();
    FUN_100004550(pcVar3,uVar4);
  }
  return 1;
}



/* Address: 0x10004870c | FUN_10004870c */

void FUN_10004870c(void)

{
  long unaff_x20;
  
  FUN_10004639c(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100048714 | FUN_100048714 */

void FUN_100048714(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long extraout_x8;
  long lVar3;
  undefined1 auStack_90 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  puVar1 = &DAT_100fa88c0;
  FUN_1000037f0(&DAT_100fa88c0,&DAT_100c25650);
  lVar3 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100eb1b30;
  _swift_allocObject(&DAT_100eb1b30,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  local_80 = param_2;
  uStack_78 = param_3;
  local_70 = param_4;
  _swift_retain(param_2);
  _swift_retain(param_4);
  FUN_1000037f0(&DAT_100fa88c8,&DAT_100c25658);
  FUN_100048b68();
  SwiftUI::Button::_init();
  FUN_100016eac(&DAT_100fa88d8,&DAT_100fa88c0,&DAT_100c25650,
                PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_100eab888);
  FUN_100048c70();
  (extension_SwiftUI)::SwiftUI::View::_buttonStyle(param_1);
  (**(code **)(lVar3 + 8))(auStack_90 + -extraout_x8,puVar1);
  return;
}



/* Address: 0x10004887c | FUN_10004887c */

void FUN_10004887c(undefined8 param_1,code *param_2)

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
    _swift_task_reportUnexpectedExecutor("Paste/SocialButton.swift",0x18,1,0xd,UVar4.unknown,puVar3)
    ;
  }
  (*param_2)();
  _swift_release(pMVar2);
  return;
}



/* Address: 0x100048930 | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  FUN_100049040();
  return;
}



/* Address: 0x100048934 | FUN_100048934 */

void FUN_100048934(void)

{
  long unaff_x20;
  
  FUN_10004887c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x100048940 | FUN_100048940 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100048940(undefined8 *param_1)

{
  undefined4 uVar1;
  ResizingMode RVar2;
  TemplateRenderingMode TVar3;
  undefined7 extraout_var;
  undefined *puVar5;
  MainActor *pMVar6;
  undefined8 *puVar7;
  UnownedSerialExecutor UVar8;
  UnownedSerialExecutor UVar9;
  undefined7 extraout_var_00;
  Image IVar11;
  EdgeInsets capInsets;
  Color CVar12;
  long extraout_x8;
  long extraout_x8_00;
  Image IVar13;
  long lVar14;
  long lVar15;
  undefined *puVar4;
  long lVar10;
  
  RVar2 = SwiftUI::Image::ResizingMode::typeMetadataAccessor();
  puVar4 = (undefined *)CONCAT71(extraout_var,RVar2.value);
  lVar14 = *(long *)(puVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar14 + 0x40));
  capInsets.unknown = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_100fa79f8;
  FUN_1000037f0(&DAT_100fa79f8,&DAT_100c25750);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  IVar13.unknown = capInsets.unknown + -extraout_x8_00;
  pMVar6 = Swift::MainActor::typeMetadataAccessor();
  puVar5 = PTR_typeMetadataAccessor_100eaec10;
  pMVar6 = Swift::MainActor::get_shared(pMVar6,pMVar6);
  puVar7 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar5,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar8 = Swift::Actor::get_unownedExecutor();
  UVar9 = UVar8;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar9.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor("Paste/SocialButton.swift",0x18,1,0xf,UVar8.unknown,puVar7)
    ;
  }
  uVar1 = *(undefined4 *)
           PTR___enum_case_for_SwiftUI_Image_TemplateRenderingMode_template_SwiftUI_Image_TemplateRenderingMode_Type___>_SwiftUI_Image_TemplateRenderingMode_100eab770
  ;
  TVar3 = SwiftUI::Image::TemplateRenderingMode::typeMetadataAccessor();
  lVar10 = CONCAT71(extraout_var_00,TVar3.value);
  lVar15 = *(long *)(lVar10 + -8);
  (**(code **)(lVar15 + 0x68))(IVar13.unknown,uVar1,lVar10);
  (**(code **)(lVar15 + 0x38))(IVar13.unknown,0,1,lVar10);
  IVar11 = SwiftUI::Image::_renderingMode(IVar13);
  FUN_10004906c(IVar13.unknown);
  IVar13.unknown = puVar4;
  (**(code **)(lVar14 + 0x68))
            (capInsets.unknown,
             *(undefined4 *)
              PTR___enum_case_for_SwiftUI_Image_ResizingMode_stretch_SwiftUI_Image_ResizingMode_Type___>_SwiftUI_Image_ResizingMode_100eab750
            );
  IVar13 = SwiftUI::Image::resizable(capInsets,(ResizingMode)(__int8)IVar11.unknown,IVar13);
  _swift_release(IVar11.unknown);
  (**(code **)(lVar14 + 8))(capInsets.unknown,puVar4);
  FUN_1001fe19c();
  CVar12 = SwiftUI::Color::init(*(NSColor **)capInsets.unknown);
  puVar5 = &DAT_100c25758;
  _swift_getKeyPath();
  _swift_release(pMVar6);
  *param_1 = IVar13.unknown;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 2) = 1;
  param_1[3] = puVar5;
  param_1[4] = CVar12.unknown;
  return;
}



/* Address: 0x100048b5c | FUN_100048b5c */

void FUN_100048b5c(void)

{
  long unaff_x20;
  
  FUN_100048940(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x100048b68 | FUN_100048b68 */

void FUN_100048b68(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fa88d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fa88c8;
  FUN_100005c24(&DAT_100fa88c8,&DAT_100c25658);
  puVar2 = puVar1;
  FUN_100048c00();
  puVar3 = &DAT_100fa73c8;
  FUN_100016eac(&DAT_100fa73c8,&DAT_100fa73d0,&DAT_100c241e0,
                PTR_SwiftUI__SwiftUI___EnvironmentKeyWritingModifier<undefined>_>SwiftUI__ViewModifier_100eab0e0
               );
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fa88d0 = puVar4;
  return;
}



/* Address: 0x100048c00 | FUN_100048c00 */

void FUN_100048c00(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_20;
  undefined *puStack_18;
  
  if (DAT_100fa7ce8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fa7cf0;
  FUN_100005c24(&DAT_100fa7cf0,&DAT_100c25660);
  local_20 = PTR___protocol_witness_table_for_SwiftUI_Image___SwiftUI_View_in_SwiftUI_100eab7a8;
  puStack_18 = 
  PTR___protocol_witness_table_for_SwiftUI__AspectRatioLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaac88
  ;
  puVar2 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_20);
  DAT_100fa7ce8 = puVar2;
  return;
}



/* Address: 0x100048c70 | FUN_100048c70 */

void FUN_100048c70(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fa88e0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c256f4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c256f4,&DAT_100eb1bd8);
  DAT_100fa88e0 = pTVar1;
  return;
}



/* Address: 0x100048cb0 | FUN_100048cb0 */

void FUN_100048cb0(undefined8 param_1)

{
  _swift_getOpaqueTypeConformance2(param_1,&DAT_100ca0ea4,1);
  return;
}



/* Address: 0x100048cc0 | FUN_100048cc0 */

void FUN_100048cc0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long extraout_x8;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_90 [16];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  puVar1 = &DAT_100fa88c0;
  FUN_1000037f0(&DAT_100fa88c0,&DAT_100c25650);
  lVar4 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100eb1bf8;
  _swift_allocObject(&DAT_100eb1bf8,0x28,7);
  local_80 = *unaff_x20;
  *(undefined8 *)(puVar2 + 0x18) = unaff_x20[1];
  *(undefined8 *)(puVar2 + 0x10) = local_80;
  uVar3 = unaff_x20[2];
  uStack_70 = unaff_x20[2];
  local_78 = unaff_x20[1];
  *(undefined8 *)(puVar2 + 0x20) = uVar3;
  _swift_retain(local_80);
  _swift_retain(uVar3);
  FUN_1000037f0(&DAT_100fa88c8,&DAT_100c25658);
  FUN_100048b68();
  SwiftUI::Button::_init();
  FUN_100016eac(&DAT_100fa88d8,&DAT_100fa88c0,&DAT_100c25650,
                PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_100eab888);
  FUN_100048c70();
  (extension_SwiftUI)::SwiftUI::View::_buttonStyle(param_1);
  (**(code **)(lVar4 + 8))(auStack_90 + -extraout_x8,puVar1);
  return;
}



/* Address: 0x100048e28 | FUN_100048e28 */

undefined1  [16] FUN_100048e28(void)

{
  return ZEXT816(0x100eb1bb0);
}



/* Address: 0x100048e38 | FUN_100048e38 */

void FUN_100048e38(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_50;
  undefined *puStack_48;
  undefined *local_40;
  undefined *puStack_38;
  
  puVar1 = &DAT_100fa88c0;
  FUN_100005c24(&DAT_100fa88c0,&DAT_100c25650);
  puVar2 = &DAT_100fa88d8;
  FUN_100016eac(&DAT_100fa88d8,&DAT_100fa88c0,&DAT_100c25650,
                PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_100eab888);
  puVar3 = puVar2;
  FUN_100048c70();
  puStack_48 = &DAT_100eb1bd8;
  local_50 = puVar1;
  local_40 = puVar2;
  puStack_38 = puVar3;
  _swift_getOpaqueTypeConformance2
            (&local_50,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_buttonStyle<A_where_A1:_SwiftUI_ButtonStyle>(A1)__>_some>>_100eab3d0
             ,1);
  return;
}



/* Address: 0x100048ec8 | FUN_100048ec8 */

undefined1  [16] FUN_100048ec8(void)

{
  return ZEXT816(0x100eb1bd8);
}



/* Address: 0x100048ed8 | FUN_100048ed8 */

void FUN_100048ed8(undefined8 param_1)

{
  _swift_getOpaqueTypeConformance2(param_1,&DAT_100ca0ef0,1);
  return;
}



/* Address: 0x100048ee8 | FUN_100048ee8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100048ee8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ButtonStyleConfiguration param_6)

{
  undefined1 *puVar1;
  int iVar2;
  bool bVar3;
  undefined7 extraout_var;
  Color CVar5;
  Label LVar6;
  Set _all;
  Set SVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 *puVar4;
  
  bVar3 = SwiftUI::ButtonStyleConfiguration::get_isPressed(param_6);
  puVar4 = (undefined8 *)CONCAT71(extraout_var,bVar3);
  if (bVar3) {
    FUN_1001fe19c();
  }
  else {
    FUN_1001ff0d0();
  }
  CVar5 = SwiftUI::Color::init((NSColor *)*puVar4);
  LVar6 = SwiftUI::ButtonStyleConfiguration::get_label(CVar5.unknown);
  SwiftUI::Alignment::get_center((Alignment)LVar6.unknown);
  SwiftUI::_FrameLayout::_init((Alignment)0x4028000000000000);
  SVar7.unknown = &DAT_100fa88e8;
  FUN_1000037f0(&DAT_100fa88e8,&DAT_100c25730);
  puVar4 = (undefined8 *)(param_1 + *(int *)(SVar7.unknown + 0x24));
  puVar4[1] = uStack_78;
  *puVar4 = local_80;
  puVar4[3] = uStack_68;
  puVar4[2] = uStack_70;
  puVar4[5] = uStack_58;
  puVar4[4] = local_60;
  _all = SwiftUI::Edge::Set::get_all(SVar7);
  uVar9 = 0x4020000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)_all.unknown);
  SVar7.unknown = &DAT_100fa88f0;
  FUN_1000037f0(&DAT_100fa88f0,&DAT_100c25738);
  puVar1 = (undefined1 *)(param_1 + *(int *)(SVar7.unknown + 0x24));
  *puVar1 = (char)_all.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar9;
  *(undefined8 *)(puVar1 + 0x10) = uStack_70;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  SVar7 = SwiftUI::Edge::Set::get_all(SVar7);
  puVar8 = &DAT_100fa88f8;
  FUN_1000037f0(&DAT_100fa88f8,&DAT_100c25740);
  iVar2 = *(int *)(puVar8 + 0x24);
  *(undefined8 *)(param_1 + iVar2) = CVar5.unknown;
  *(char *)((undefined8 *)(param_1 + iVar2) + 1) = (char)SVar7.unknown;
  puVar8 = &DAT_100fa8900;
  FUN_1000037f0(&DAT_100fa8900,&DAT_100c25748);
  *(undefined2 *)(param_1 + *(int *)(puVar8 + 0x24)) = 0x100;
  return;
}



/* Address: 0x10004903c | thunk_FUN_100048ee8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void thunk_FUN_100048ee8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                        undefined8 param_5,ButtonStyleConfiguration param_6)

{
  undefined1 *puVar1;
  int iVar2;
  bool bVar3;
  undefined7 extraout_var;
  Color CVar5;
  Label LVar6;
  Set _all;
  Set SVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 *puVar4;
  
  bVar3 = SwiftUI::ButtonStyleConfiguration::get_isPressed(param_6);
  puVar4 = (undefined8 *)CONCAT71(extraout_var,bVar3);
  if (bVar3) {
    FUN_1001fe19c();
  }
  else {
    FUN_1001ff0d0();
  }
  CVar5 = SwiftUI::Color::init((NSColor *)*puVar4);
  LVar6 = SwiftUI::ButtonStyleConfiguration::get_label(CVar5.unknown);
  SwiftUI::Alignment::get_center((Alignment)LVar6.unknown);
  SwiftUI::_FrameLayout::_init((Alignment)0x4028000000000000);
  SVar7.unknown = &DAT_100fa88e8;
  FUN_1000037f0(&DAT_100fa88e8,&DAT_100c25730);
  puVar4 = (undefined8 *)(param_1 + *(int *)(SVar7.unknown + 0x24));
  puVar4[1] = uStack_78;
  *puVar4 = uStack_80;
  puVar4[3] = uStack_68;
  puVar4[2] = uStack_70;
  puVar4[5] = uStack_58;
  puVar4[4] = uStack_60;
  _all = SwiftUI::Edge::Set::get_all(SVar7);
  uVar9 = 0x4020000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)_all.unknown);
  SVar7.unknown = &DAT_100fa88f0;
  FUN_1000037f0(&DAT_100fa88f0,&DAT_100c25738);
  puVar1 = (undefined1 *)(param_1 + *(int *)(SVar7.unknown + 0x24));
  *puVar1 = (char)_all.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar9;
  *(undefined8 *)(puVar1 + 0x10) = uStack_70;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  SVar7 = SwiftUI::Edge::Set::get_all(SVar7);
  puVar8 = &DAT_100fa88f8;
  FUN_1000037f0(&DAT_100fa88f8,&DAT_100c25740);
  iVar2 = *(int *)(puVar8 + 0x24);
  *(undefined8 *)(param_1 + iVar2) = CVar5.unknown;
  *(char *)((undefined8 *)(param_1 + iVar2) + 1) = (char)SVar7.unknown;
  puVar8 = &DAT_100fa8900;
  FUN_1000037f0(&DAT_100fa8900,&DAT_100c25748);
  *(undefined2 *)(param_1 + *(int *)(puVar8 + 0x24)) = 0x100;
  return;
}



/* Address: 0x100049040 | FUN_100049040 */

void FUN_100049040(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x10004906c | FUN_10004906c */

undefined8 FUN_10004906c(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fa79f8;
  FUN_1000037f0(&DAT_100fa79f8,&DAT_100c25750);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x1000490b4 | FUN_1000490b4 */

void FUN_1000490b4(undefined8 *param_1,EnvironmentValues param_2)

{
  SwiftUI::EnvironmentValues::_get_accentColor(param_2);
  *param_1 = param_2.unknown;
  return;
}



/* Address: 0x1000490dc | FUN_1000490dc */

void FUN_1000490dc(undefined8 *param_1,EnvironmentValues *param_2)

{
  _swift_retain(*param_1);
  SwiftUI::EnvironmentValues::_set_accentColor(param_2);
  return;
}



/* Address: 0x100049104 | thunk_FUN_100049108 */

void thunk_FUN_100049108(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_30;
  undefined *puStack_28;
  
  if (DAT_100fa8908 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fa8900;
  FUN_100005c24(&DAT_100fa8900,&DAT_100c25748);
  puVar2 = puVar1;
  FUN_1000491a0();
  puVar3 = &DAT_100fa8928;
  FUN_100016eac(&DAT_100fa8928,&DAT_100fa8930,&DAT_100c25790,
                PTR_SwiftUI__SwiftUI___ClipEffect<undefined>_>SwiftUI__ViewModifier_100eaa680);
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  puStack_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&puStack_30);
  DAT_100fa8908 = puVar4;
  return;
}



/* Address: 0x100049108 | FUN_100049108 */

void FUN_100049108(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fa8908 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fa8900;
  FUN_100005c24(&DAT_100fa8900,&DAT_100c25748);
  puVar2 = puVar1;
  FUN_1000491a0();
  puVar3 = &DAT_100fa8928;
  FUN_100016eac(&DAT_100fa8928,&DAT_100fa8930,&DAT_100c25790,
                PTR_SwiftUI__SwiftUI___ClipEffect<undefined>_>SwiftUI__ViewModifier_100eaa680);
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fa8908 = puVar4;
  return;
}



/* Address: 0x1000491a0 | FUN_1000491a0 */

void FUN_1000491a0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fa8910 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fa88f8;
  FUN_100005c24(&DAT_100fa88f8,&DAT_100c25740);
  puVar2 = puVar1;
  FUN_100049238();
  puVar3 = &DAT_100fa7de0;
  FUN_100016eac(&DAT_100fa7de0,&DAT_100fa7de8,&DAT_100c24dc0,
                PTR_SwiftUI__SwiftUI___BackgroundStyleModifier<undefined>_>SwiftUI__ViewModifier_100eaafe0
               );
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fa8910 = puVar4;
  return;
}



/* Address: 0x100049238 | FUN_100049238 */

void FUN_100049238(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fa8918 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fa88f0;
  FUN_100005c24(&DAT_100fa88f0,&DAT_100c25738);
  puVar2 = puVar1;
  FUN_1000492b0();
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__PaddingLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa8c8
  ;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fa8918 = puVar3;
  return;
}



/* Address: 0x1000492b0 | FUN_1000492b0 */

void FUN_1000492b0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fa8920 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fa88e8;
  FUN_100005c24(&DAT_100fa88e8,&DAT_100c25730);
  puVar2 = &DAT_100fa7d10;
  FUN_100003a00(&DAT_100fa7d10,PTR_typeMetadataAccessor_100eaaf98,
                PTR_SwiftUI__SwiftUI__ButtonStyleConfiguration__Label_>SwiftUI__View_100eaaf90);
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__FrameLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa6d0;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fa8920 = puVar3;
  return;
}



/* Address: 0x100049340 | thunk_FUN_100048b5c */

void thunk_FUN_100048b5c(void)

{
  long unaff_x20;
  
  FUN_100048940(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x100049344 | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  FUN_100049040();
  return;
}



/* Address: 0x100049348 | thunk_FUN_100048934 */

void thunk_FUN_100048934(void)

{
  long unaff_x20;
  
  FUN_10004887c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x10004934c | FUN_10004934c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_10004934c(long param_1)

{
  ID self;
  ID self_00;
  
  self = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (self != 0) {
    FUN_1000493ec();
    self_00 = objc_stub::documentView(self);
    if (self_00 != 0) {
      objc_stub::documentVisibleRect(self);
      _CGRectGetMaxY();
      objc_stub::bounds(self_00);
      _CGRectGetHeight();
    }
  }
  return;
}



/* Address: 0x1000493ec | FUN_1000493ec */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1000493ec(void)

{
  long lVar1;
  ID self;
  undefined *self_00;
  ID self_01;
  long unaff_x20;
  
  lVar1 = _TtC5Paste29FilterSuggestionsMenuScroller::___lazy_storage___scrollView;
  self = *(ID *)(unaff_x20 + _TtC5Paste29FilterSuggestionsMenuScroller::___lazy_storage___scrollView
                );
  if (self == 0) {
    self_00 = &_OBJC_CLASS___NSScrollView;
    _objc_allocWithZone();
    self = objc_stub::init((ID)self_00);
    self_01 = objc_stub::contentView(self);
    objc_stub::setPostsBoundsChangedNotifications_(self_01,1);
    objc_stub::setUsesPredominantAxisScrolling_(self,1);
    objc_stub::setHasHorizontalScroller_(self,0);
    objc_stub::setHasVerticalScroller_(self,0);
    objc_stub::setAutohidesScrollers_(self,0);
    objc_stub::setDrawsBackground_(self,0);
    objc_stub::setBorderType_(self,0);
    objc_stub::setWantsLayer_(self,1);
    *(ID *)(unaff_x20 + lVar1) = self;
  }
  return self;
}



/* Address: 0x1000494d4 | FUN_1000494d4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 * FUN_1000494d4(long *param_1,code *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long unaff_x20;
  long lVar6;
  
  lVar6 = *param_1;
  puVar2 = *(undefined8 **)(unaff_x20 + lVar6);
  if (puVar2 == (undefined8 *)0x0) {
    (*param_2)();
    puVar5 = (undefined8 *)*puVar2;
    uVar1 = puVar2[1];
    puVar4 = &DAT_100eb1c80;
    puVar3 = puVar4;
    _swift_allocObject(&DAT_100eb1c80,0x18,7);
    _swift_unknownObjectWeakInit(puVar3 + 0x10);
    _swift_allocObject(&DAT_100eb1c80,0x18,7);
    _swift_unknownObjectWeakInit(puVar4 + 0x10);
    FUN_10004ba34(0);
    _objc_allocWithZone();
    _swift_bridgeObjectRetain(uVar1);
    FUN_10004b038(puVar5,uVar1,param_3,puVar3,param_4,puVar4);
    *(undefined8 **)(unaff_x20 + lVar6) = puVar5;
    puVar2 = puVar5;
  }
  return puVar2;
}



/* Address: 0x1000495d8 | FUN_1000495d8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000495d8(long param_1)

{
  ID self;
  
  self = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (self != 0) {
    FUN_1000493ec();
    objc_stub::documentVisibleRect(self);
  }
  return;
}



/* Address: 0x100049634 | FUN_100049634 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long FUN_100049634(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = _TtC5Paste29FilterSuggestionsMenuScroller::___lazy_storage___backgroundView;
  lVar2 = *(long *)(unaff_x20 +
                   _TtC5Paste29FilterSuggestionsMenuScroller::___lazy_storage___backgroundView);
  if (lVar2 == 0) {
    FUN_1002215f0();
    _objc_allocWithZone();
    lVar2 = 6;
    FUN_100220ffc(0x4024000000000000);
    *(long *)(unaff_x20 + lVar1) = lVar2;
  }
  return lVar2;
}



/* Address: 0x1000496ac | FUN_1000496ac */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

ID FUN_1000496ac(ID param_1)

{
  long lVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  ID IVar6;
  ID IVar7;
  void *aBlock;
  long unaff_x20;
  undefined8 uVar8;
  undefined *local_e0;
  undefined8 local_d8;
  code *local_d0;
  undefined *puStack_c8;
  code *local_c0;
  undefined *local_b8;
  
  _swift_getObjectType();
  puVar5 = (undefined8 *)
           (unaff_x20 + _TtC5Paste29FilterSuggestionsMenuScroller::onTopIndicatorHovered);
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5 = (undefined8 *)
           (unaff_x20 + _TtC5Paste29FilterSuggestionsMenuScroller::onBottomIndicatorHovered);
  *puVar5 = 0;
  puVar5[1] = 0;
  *(undefined8 *)(unaff_x20 + _TtC5Paste29FilterSuggestionsMenuScroller::scrollObserver) = 0;
  puVar5 = &_TtC5Paste29FilterSuggestionsMenuScroller::___lazy_storage___upScrollIndicator;
  *(undefined8 *)
   (unaff_x20 + _TtC5Paste29FilterSuggestionsMenuScroller::___lazy_storage___upScrollIndicator) = 0;
  *(undefined8 *)
   (unaff_x20 + _TtC5Paste29FilterSuggestionsMenuScroller::___lazy_storage___downScrollIndicator) =
       0;
  *(undefined8 *)
   (unaff_x20 + _TtC5Paste29FilterSuggestionsMenuScroller::___lazy_storage___backgroundView) = 0;
  *(undefined8 *)
   (unaff_x20 + _TtC5Paste29FilterSuggestionsMenuScroller::___lazy_storage___scrollView) = 0;
  IVar2 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff90,"initWithFrame:",0,0,0,0);
  IVar3 = objc_stub::setTranslatesAutoresizingMaskIntoConstraints_(param_1,0);
  FUN_1000493ec();
  objc_stub::setDocumentView_(IVar3,param_1);
  uVar8 = 0;
  FUN_100049634(0);
  local_d0 = (code *)IVar2;
  puStack_c8 = (undefined *)param_1;
  FUN_1001fa09c();
  _swift_bridgeObjectRelease(uVar8);
  puVar4 = &DAT_100fa6b80;
  FUN_1000037f0(&DAT_100fa6b80,&DAT_100c23760);
  _swift_initStackObject();
  *(undefined8 *)(puVar4 + 0x18) = 7;
  *(undefined8 *)(puVar4 + 0x10) = 3;
  lVar1 = _TtC5Paste29FilterSuggestionsMenuScroller::___lazy_storage___scrollView;
  *(undefined8 *)(puVar4 + 0x20) =
       *(undefined8 *)
        (IVar2 + _TtC5Paste29FilterSuggestionsMenuScroller::___lazy_storage___scrollView);
  FUN_1000494d4(&_TtC5Paste29FilterSuggestionsMenuScroller::___lazy_storage___upScrollIndicator,
                FUN_10020cb54,FUN_10004baf4,FUN_10004bafc);
  *(undefined8 **)(puVar4 + 0x28) = puVar5;
  puVar5 = &_TtC5Paste29FilterSuggestionsMenuScroller::___lazy_storage___downScrollIndicator;
  FUN_1000494d4(&_TtC5Paste29FilterSuggestionsMenuScroller::___lazy_storage___downScrollIndicator,
                FUN_10020caa0,FUN_10004bac4,FUN_10004bacc);
  *(undefined8 **)(puVar4 + 0x30) = puVar5;
  local_d0 = (code *)IVar2;
  FUN_1001fa150(puVar4,FUN_10004ba5c,&local_e0);
  _swift_bridgeObjectRelease();
  _swift_setDeallocating(puVar4);
  _swift_arrayDestroy(puVar4 + 0x20,*(undefined8 *)(puVar4 + 0x10),
                      PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8);
  IVar3 = NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  uVar8 = *(undefined8 *)PTR__NSViewBoundsDidChangeNotification_100ea9138;
  IVar6 = objc_stub::contentView(*(ID *)(IVar2 + lVar1));
  IVar7 = NSOperationQueue::mainQueue((ID)&_OBJC_CLASS___NSOperationQueue);
  puVar4 = &DAT_100eb1c80;
  _swift_allocObject(&DAT_100eb1c80,0x18,7);
  _swift_unknownObjectWeakInit(puVar4 + 0x10,IVar2);
  local_c0 = FUN_10004ba88;
  local_e0 = PTR___NSConcreteStackBlock_100ea82a0;
  local_d8 = 0x42000000;
  local_d0 = FUN_100059f04;
  puStack_c8 = &DAT_100eb1c98;
  local_b8 = puVar4;
  aBlock = __Block_copy(&local_e0);
  _swift_release(local_b8);
  IVar3 = NSNotificationCenter::addObserverForName_object_queue_usingBlock_
                    (IVar3,uVar8,IVar6,IVar7,aBlock);
  __Block_release(aBlock);
  uVar8 = *(undefined8 *)(IVar2 + _TtC5Paste29FilterSuggestionsMenuScroller::scrollObserver);
  *(ID *)(IVar2 + _TtC5Paste29FilterSuggestionsMenuScroller::scrollObserver) = IVar3;
  _swift_unknownObjectRelease(uVar8);
  FUN_10004a288();
  return IVar2;
}



/* Address: 0x100049a3c | FUN_100049a3c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

undefined * FUN_100049a3c(undefined8 *param_1,ID param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 **ppuVar3;
  undefined8 **ppuVar4;
  undefined8 *puVar5;
  ID IVar6;
  ID IVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *local_a0 [3];
  undefined8 *local_88;
  undefined **ppuStack_80;
  undefined8 *local_78;
  
  puVar5 = param_1;
  FUN_100049634();
  local_78 = puVar5;
  FUN_10004afac();
  ppuStack_80 = &PTR_PTR_100ec00e8;
  puVar1 = param_1;
  local_a0[0] = param_1;
  local_88 = puVar5;
  FUN_1001f9774();
  uVar11 = *puVar1;
  uVar12 = puVar1[1];
  uVar13 = puVar1[2];
  uVar14 = puVar1[3];
  uVar2 = 0;
  FUN_1002215f0(0);
  ppuVar3 = local_a0;
  FUN_1001f97b4(uVar11,uVar12,uVar13,uVar14,ppuVar3,uVar2,&PTR_PTR_100ec00e8);
  ppuVar4 = local_a0;
  FUN_100004594();
  local_78 = (undefined8 *)param_2;
  FUN_1000493ec();
  puVar5 = (undefined8 *)objc_stub::contentView((ID)ppuVar4);
  uVar2 = 0;
  FUN_10000ec2c(0,&DAT_100fa89f0,&PTR__OBJC_CLASS___NSClipView_100f8d778);
  ppuStack_80 = &PTR_PTR_100ec00e8;
  uVar11 = 0;
  local_a0[0] = puVar5;
  local_88 = (undefined8 *)uVar2;
  FUN_10000ec2c(0,&DAT_100fa6b90,&PTR__OBJC_CLASS___NSView_100f8d628);
  ppuVar4 = local_a0;
  FUN_1001f9b74(0,ppuVar4,uVar11,&PTR_PTR_100ec00e8);
  FUN_100004594(local_a0);
  IVar6 = objc_stub::topAnchor(param_2);
  IVar7 = objc_stub::contentView
                    (*(ID *)((long)param_1 +
                            _TtC5Paste29FilterSuggestionsMenuScroller::___lazy_storage___scrollView)
                    );
  IVar7 = objc_stub::topAnchor(IVar7);
  IVar6 = objc_stub::constraintEqualToAnchor_(IVar6,IVar7);
  puVar8 = &DAT_100fa8830;
  FUN_1000037f0(&DAT_100fa8830,&DAT_100c24a20);
  _swift_initStackObject();
  *(undefined8 *)(puVar8 + 0x18) = 6;
  *(undefined8 *)(puVar8 + 0x10) = 3;
  puVar9 = &DAT_100fa8840;
  FUN_1000037f0(&DAT_100fa8840,&DAT_100c237d0);
  *(undefined **)(puVar8 + 0x38) = puVar9;
  *(undefined ***)(puVar8 + 0x40) = &PTR_PTR_100ec00b8;
  *(undefined8 ***)(puVar8 + 0x20) = ppuVar3;
  *(undefined **)(puVar8 + 0x60) = puVar9;
  *(undefined ***)(puVar8 + 0x68) = &PTR_PTR_100ec00b8;
  *(undefined8 ***)(puVar8 + 0x48) = ppuVar4;
  uVar2 = 0;
  FUN_10000ec2c(0,&DAT_100fa86a0,&PTR__OBJC_CLASS___NSLayoutConstraint_100f8d660);
  *(undefined8 *)(puVar8 + 0x88) = uVar2;
  *(undefined ***)(puVar8 + 0x90) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar8 + 0x70) = IVar6;
  puVar10 = puVar8;
  FUN_1001f8d60(puVar8);
  _swift_setDeallocating(puVar8);
  uVar2 = *(undefined8 *)(puVar8 + 0x10);
  puVar9 = &DAT_100fa6bc0;
  FUN_1000037f0(&DAT_100fa6bc0,&DAT_100c24a30);
  _swift_arrayDestroy(puVar8 + 0x20,uVar2,puVar9);
  return puVar10;
}



/* Address: 0x100049cbc | FUN_100049cbc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

undefined * FUN_100049cbc(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ID IVar8;
  ID IVar9;
  undefined8 *puVar10;
  ID IVar11;
  ID IVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 local_b8 [3];
  undefined8 *local_a0;
  undefined **ppuStack_98;
  undefined8 *local_90;
  
  lVar2 = param_1;
  FUN_1000493ec();
  local_90 = (undefined8 *)lVar2;
  FUN_100049634();
  uVar3 = *(undefined8 *)(lVar2 + _TtC7PasteUI20BackgroundEffectView::contentView);
  puVar4 = (undefined8 *)0x0;
  FUN_10000ec2c(0,&DAT_100fa6b90,&PTR__OBJC_CLASS___NSView_100f8d628);
  ppuStack_98 = &PTR_PTR_100ec00e8;
  puVar5 = puVar4;
  local_b8[0] = uVar3;
  local_a0 = puVar4;
  FUN_1001f9774();
  uVar16 = *puVar5;
  uVar17 = puVar5[1];
  uVar18 = puVar5[2];
  uVar19 = puVar5[3];
  uVar3 = 0;
  FUN_10000ec2c(0,&DAT_100fa7b60,&PTR__OBJC_CLASS___NSScrollView_100f8d700);
  puVar6 = local_b8;
  FUN_1001f97b4(uVar16,uVar17,uVar18,uVar19,puVar6,uVar3,&PTR_PTR_100ec00e8);
  FUN_100004594(local_b8);
  puVar5 = &_TtC5Paste29FilterSuggestionsMenuScroller::___lazy_storage___upScrollIndicator;
  FUN_1000494d4(&_TtC5Paste29FilterSuggestionsMenuScroller::___lazy_storage___upScrollIndicator,
                FUN_10020cb54,FUN_10004baf4,FUN_10004bafc);
  lVar1 = _TtC5Paste29FilterSuggestionsMenuScroller::___lazy_storage___backgroundView;
  local_b8[0] = *(undefined8 *)
                 (*(long *)(param_1 +
                           _TtC5Paste29FilterSuggestionsMenuScroller::
                           ___lazy_storage___backgroundView) +
                 _TtC7PasteUI20BackgroundEffectView::contentView);
  ppuStack_98 = &PTR_PTR_100ec00e8;
  uVar3 = 0;
  local_a0 = puVar4;
  local_90 = puVar5;
  FUN_10004ba34(0);
  puVar7 = local_b8;
  FUN_1001f9b74(0,puVar7,uVar3,&PTR_PTR_100ec00e8);
  FUN_100004594(local_b8);
  lVar2 = _TtC5Paste29FilterSuggestionsMenuScroller::___lazy_storage___upScrollIndicator;
  IVar8 = objc_stub::topAnchor
                    (*(ID *)(param_1 +
                            _TtC5Paste29FilterSuggestionsMenuScroller::
                            ___lazy_storage___upScrollIndicator));
  IVar9 = objc_stub::topAnchor
                    (*(ID *)(*(long *)(param_1 + lVar1) +
                            _TtC7PasteUI20BackgroundEffectView::contentView));
  IVar8 = objc_stub::constraintEqualToAnchor_(IVar8,IVar9);
  IVar9 = objc_stub::heightAnchor(*(ID *)(param_1 + lVar2));
  IVar9 = objc_stub::constraintEqualToConstant_(IVar9,0x4032000000000000);
  puVar5 = &_TtC5Paste29FilterSuggestionsMenuScroller::___lazy_storage___downScrollIndicator;
  FUN_1000494d4(&_TtC5Paste29FilterSuggestionsMenuScroller::___lazy_storage___downScrollIndicator,
                FUN_10020caa0,FUN_10004bac4,FUN_10004bacc);
  local_b8[0] = *(undefined8 *)
                 (*(long *)(param_1 + lVar1) + _TtC7PasteUI20BackgroundEffectView::contentView);
  ppuStack_98 = &PTR_PTR_100ec00e8;
  puVar10 = local_b8;
  local_a0 = puVar4;
  local_90 = puVar5;
  FUN_1001f9b74(0,puVar10,uVar3,&PTR_PTR_100ec00e8);
  FUN_100004594(local_b8);
  lVar2 = _TtC5Paste29FilterSuggestionsMenuScroller::___lazy_storage___downScrollIndicator;
  IVar11 = objc_stub::bottomAnchor
                     (*(ID *)(param_1 +
                             _TtC5Paste29FilterSuggestionsMenuScroller::
                             ___lazy_storage___downScrollIndicator));
  IVar12 = objc_stub::bottomAnchor
                     (*(ID *)(*(long *)(param_1 + lVar1) +
                             _TtC7PasteUI20BackgroundEffectView::contentView));
  IVar11 = objc_stub::constraintEqualToAnchor_(IVar11,IVar12);
  IVar12 = objc_stub::heightAnchor(*(ID *)(param_1 + lVar2));
  IVar12 = objc_stub::constraintEqualToConstant_(IVar12,0x4032000000000000);
  puVar13 = &DAT_100fa8830;
  FUN_1000037f0(&DAT_100fa8830,&DAT_100c24a20);
  _swift_initStackObject();
  *(undefined8 *)(puVar13 + 0x18) = 0xe;
  *(undefined8 *)(puVar13 + 0x10) = 7;
  puVar14 = &DAT_100fa8840;
  FUN_1000037f0(&DAT_100fa8840,&DAT_100c237d0);
  *(undefined **)(puVar13 + 0x38) = puVar14;
  *(undefined ***)(puVar13 + 0x40) = &PTR_PTR_100ec00b8;
  *(undefined8 **)(puVar13 + 0x20) = puVar6;
  *(undefined **)(puVar13 + 0x60) = puVar14;
  *(undefined ***)(puVar13 + 0x68) = &PTR_PTR_100ec00b8;
  *(undefined8 **)(puVar13 + 0x48) = puVar7;
  uVar3 = 0;
  FUN_10000ec2c(0,&DAT_100fa86a0,&PTR__OBJC_CLASS___NSLayoutConstraint_100f8d660);
  *(undefined8 *)(puVar13 + 0x88) = uVar3;
  *(undefined ***)(puVar13 + 0x90) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar13 + 0x70) = IVar8;
  *(undefined8 *)(puVar13 + 0xb0) = uVar3;
  *(undefined ***)(puVar13 + 0xb8) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar13 + 0x98) = IVar9;
  *(undefined **)(puVar13 + 0xd8) = puVar14;
  *(undefined ***)(puVar13 + 0xe0) = &PTR_PTR_100ec00b8;
  *(undefined8 **)(puVar13 + 0xc0) = puVar10;
  *(undefined8 *)(puVar13 + 0x100) = uVar3;
  *(undefined ***)(puVar13 + 0x108) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar13 + 0xe8) = IVar11;
  *(undefined8 *)(puVar13 + 0x128) = uVar3;
  *(undefined ***)(puVar13 + 0x130) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar13 + 0x110) = IVar12;
  _swift_bridgeObjectRetain(puVar6);
  _swift_bridgeObjectRetain(puVar7);
  _swift_bridgeObjectRetain(puVar10);
  puVar15 = puVar13;
  FUN_1001f8d60(puVar13);
  _swift_bridgeObjectRelease(puVar6);
  _swift_bridgeObjectRelease(puVar7);
  _swift_bridgeObjectRelease(puVar10);
  _swift_setDeallocating(puVar13);
  uVar3 = *(undefined8 *)(puVar13 + 0x10);
  puVar14 = &DAT_100fa6bc0;
  FUN_1000037f0(&DAT_100fa6bc0,&DAT_100c24a30);
  _swift_arrayDestroy(puVar13 + 0x20,uVar3,puVar14);
  return puVar15;
}


