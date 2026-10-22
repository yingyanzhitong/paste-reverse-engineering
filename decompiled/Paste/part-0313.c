/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1003ecff4 | FUN_1003ecff4 */

void FUN_1003ecff4(void)

{
  long unaff_x20;
  
  FUN_1003ecb0c(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1003ecffc | thunk_FUN_1003ed158 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID thunk_FUN_1003ed158(double param_1,ulong param_2,ID param_3)

{
  undefined4 uVar1;
  CGPathFillRule CVar2;
  undefined7 extraout_var;
  ID IVar4;
  ID IVar5;
  undefined *self;
  ID self_00;
  ID IVar6;
  undefined8 uVar7;
  long extraout_x8;
  long lVar8;
  long lVar9;
  code *pcVar10;
  code *pcVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  ID IStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  long lVar3;
  
  CVar2 = CoreGraphics::CGPathFillRule::typeMetadataAccessor();
  lVar3 = CONCAT71(extraout_var,CVar2.value);
  lVar9 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar9 + 0x40));
  lVar8 = (long)&IStack_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  dVar15 = param_1 * 1.45;
  if ((param_2 & 1) == 0) {
    dVar15 = param_1;
  }
  IVar4 = objc_stub::CGColor(param_3);
  IVar5 = IVar4;
  FUN_1003ed004(0x3fc999999999999a);
  dVar12 = 0.0;
  _CGRectGetHeight(0,0,dVar15,param_1);
  self = &_OBJC_CLASS___NSImage;
  _objc_allocWithZone();
  self_00 = objc_stub::initWithSize_((ID)self,dVar15,param_1);
  objc_stub::FUN_100c065c0(self_00,0);
  IVar6 = objc_stub::currentContext((ID)&_OBJC_CLASS___NSGraphicsContext);
  if ((IVar6 == 0) || (IVar6 = objc_stub::CGContext(IVar6), IVar6 == 0)) {
    objc_stub::unlockFocus(self_00);
  }
  else {
    dVar12 = dVar12 * 0.05;
    _CGContextSetAllowsAntialiasing(IVar6,1);
    _CGContextSetShouldAntialias(IVar6,1);
    _CGContextSaveGState(IVar6);
    dVar13 = 0.0;
    _CGRectGetHeight(0,0,dVar15,param_1);
    dVar13 = dVar13 - dVar12;
    dVar16 = dVar12 * 0.5 + 0.0;
    uVar7 = 0;
    _CGPathCreateWithEllipseInRect(dVar16,dVar16,dVar13,dVar13);
    _CGContextAddPath(IVar6,uVar7);
    _CGContextSetFillColorWithColor(IVar6,IVar4);
    uStack_ac = *(undefined4 *)
                 PTR___enum_case_for_CoreGraphics_CGPathFillRule_winding_CoreGraphics_CGPathFillRule_Type___>_CoreGraphics_CGPathFillRule_100eaf238
    ;
    pcVar11 = *(code **)(lVar9 + 0x68);
    (*pcVar11)(lVar8,uStack_ac,lVar3);
    (extension_in_CoreGraphics):__C.CGContextRef.fillPath(using:_CoreGraphics.CGPathFillRule)_->_()
    ::_fillPath((CGPathFillRule)(__int8)lVar8);
    pcVar10 = *(code **)(lVar9 + 8);
    (*pcVar10)(lVar8,lVar3);
    uStack_a8 = uVar7;
    _CGContextAddPath(IVar6,uVar7);
    _CGContextSetStrokeColorWithColor(IVar6,IVar5);
    _CGContextSetLineWidth(dVar12,IVar6);
    _CGContextStrokePath(IVar6);
    dVar14 = 0.0;
    _CGRectGetWidth(0,0,dVar15,param_1);
    if (dVar13 < dVar14) {
      dVar14 = 0.0;
      _CGRectGetWidth(0,0,dVar15,param_1);
      uVar7 = 0;
      _CGPathCreateWithEllipseInRect(dVar14 - (dVar12 * 0.5 + dVar13),dVar16,dVar13,dVar13);
      dVar15 = dVar16;
      uStack_b8 = uVar7;
      _CGRectGetWidth(dVar16,dVar16,dVar13,dVar13);
      dVar15 = dVar15 * 1.3;
      dVar14 = dVar16;
      _CGRectGetMidX(dVar16,dVar16,dVar13,dVar13);
      _CGRectGetMidY(dVar16,dVar16,dVar13,dVar13);
      uVar7 = 0;
      _CGPathCreateWithEllipseInRect(dVar14 - dVar15 * 0.5,dVar16 - dVar15 * 0.5,dVar15,dVar15,0);
      uVar1 = uStack_ac;
      IStack_c0 = IVar5;
      (*pcVar11)(lVar8,uStack_ac,lVar3);
      (extension_in_CoreGraphics):__C.CGPathRef.subtracting(_:___C.CGPathRef,using:_CoreGraphics.CGPathFillRule)_->___C.CGPathRef
      ::_subtracting(uVar7,lVar8);
      (*pcVar10)(lVar8,lVar3);
      _CGContextAddPath(IVar6,uVar7);
      _CGContextSetFillColorWithColor(IVar6,IVar4);
      (*pcVar11)(lVar8,uVar1,lVar3);
      IVar5 = IStack_c0;
      (extension_in_CoreGraphics):__C.CGContextRef.fillPath(using:_CoreGraphics.CGPathFillRule)_->_()
      ::_fillPath((CGPathFillRule)(__int8)lVar8);
      (*pcVar10)(lVar8,lVar3);
      _CGContextAddPath(IVar6,uVar7);
      _CGContextSetStrokeColorWithColor(IVar6,IVar5);
      _CGContextSetLineWidth(dVar12,IVar6);
      _CGContextStrokePath(IVar6);
    }
    _CGContextRestoreGState(IVar6);
    objc_stub::unlockFocus(self_00);
  }
  return self_00;
}



/* Address: 0x1003ed000 | thunk_FUN_1003ed58c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID thunk_FUN_1003ed58c(ID param_1)

{
  undefined4 uVar1;
  CGPathFillRule CVar2;
  undefined7 extraout_var;
  ID *pIVar4;
  ID *pIVar5;
  ID IVar6;
  undefined *self;
  ID IVar7;
  ID IVar8;
  undefined8 uVar9;
  long extraout_x8;
  long lVar10;
  code *pcVar11;
  undefined1 *puVar12;
  code *pcVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 auStack_e0 [8];
  undefined8 uStack_d8;
  undefined4 uStack_cc;
  ID IStack_c8;
  ID *pIStack_c0;
  ID IStack_b8;
  undefined8 uStack_b0;
  ID IStack_a8;
  long lVar3;
  
  CVar2 = CoreGraphics::CGPathFillRule::typeMetadataAccessor();
  lVar3 = CONCAT71(extraout_var,CVar2.value);
  lVar10 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar10 + 0x40));
  puVar12 = auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  pIVar4 = (ID *)objc_stub::CGColor(param_1);
  pIVar5 = pIVar4;
  FUN_1001fe25c();
  IVar6 = *pIVar5;
  IStack_a8 = IVar6;
  FUN_1003ed004(0x3fc999999999999a);
  dVar14 = 0.0;
  _CGRectGetHeight(0,0,0x4067333333333333,0x4060000000000000);
  self = &_OBJC_CLASS___NSImage;
  _objc_allocWithZone();
  IVar7 = objc_stub::initWithSize_((ID)self,0x4070000000000000,0x4070000000000000);
  objc_stub::FUN_100c065c0(IVar7,0);
  IVar8 = objc_stub::currentContext((ID)&_OBJC_CLASS___NSGraphicsContext);
  if ((IVar8 == 0) || (IVar8 = objc_stub::CGContext(IVar8), IVar8 == 0)) {
    objc_stub::unlockFocus(IVar7);
  }
  else {
    dVar14 = dVar14 * 0.05;
    IStack_c8 = IVar7;
    _CGContextSetAllowsAntialiasing(IVar8,1);
    _CGContextSetShouldAntialias(IVar8,1);
    IVar7 = IStack_a8;
    objc_stub::setFill(IStack_a8);
    _CGContextFillRect(0,0,0x4070000000000000,0x4070000000000000,IVar8);
    uVar9 = 0;
    _CGPathCreateWithRoundedRect
              (0,0,0x4070000000000000,0x4070000000000000,0x4050000000000000,0x4050000000000000);
    uStack_b0 = uVar9;
    _CGContextAddPath(IVar8);
    IVar7 = objc_stub::CGColor(IVar7);
    _CGContextSetFillColorWithColor(IVar8,IVar7);
    uVar1 = *(undefined4 *)
             PTR___enum_case_for_CoreGraphics_CGPathFillRule_winding_CoreGraphics_CGPathFillRule_Type___>_CoreGraphics_CGPathFillRule_100eaf238
    ;
    pcVar13 = *(code **)(lVar10 + 0x68);
    (*pcVar13)(puVar12,uVar1,lVar3);
    CVar2.value = (__int8)puVar12;
    (extension_in_CoreGraphics):__C.CGContextRef.fillPath(using:_CoreGraphics.CGPathFillRule)_->_()
    ::_fillPath(CVar2);
    pcVar11 = *(code **)(lVar10 + 8);
    (*pcVar11)(puVar12,lVar3);
    (*pcVar13)(puVar12,uVar1,lVar3);
    (extension_in_CoreGraphics):__C.CGContextRef.clip(using:_CoreGraphics.CGPathFillRule)_->_()::
    _clip(CVar2);
    (*pcVar11)(puVar12,lVar3);
    _CGContextSaveGState(IVar8);
    dVar15 = 0.0;
    _CGRectGetWidth(0,0,0x4070000000000000,0x4070000000000000);
    dVar16 = 0.0;
    _CGRectGetWidth(0,0,0x4067333333333333,0x4060000000000000);
    dVar19 = dVar15 * 0.5 - dVar16 * 0.5;
    dVar15 = 0.0;
    _CGRectGetHeight(0,0,0x4070000000000000,0x4070000000000000);
    dVar16 = 0.0;
    _CGRectGetHeight(0,0,0x4067333333333333,0x4060000000000000);
    dVar18 = dVar15 * 0.5 - dVar16 * 0.5;
    dVar15 = 0.0;
    _CGRectGetHeight(0,0,0x4070000000000000,0x4070000000000000);
    dVar17 = (dVar15 - dVar14) - (dVar18 + dVar18);
    dVar20 = dVar14 * 0.5;
    dVar16 = dVar20 + dVar19;
    dVar18 = dVar20 + dVar18;
    uVar9 = 0;
    _CGPathCreateWithEllipseInRect(dVar16,dVar18,dVar17,dVar17,0);
    _CGContextAddPath(IVar8,uVar9);
    pIStack_c0 = pIVar4;
    _CGContextSetFillColorWithColor(IVar8,pIVar4);
    uStack_cc = uVar1;
    (*pcVar13)(puVar12,uVar1,lVar3);
    (extension_in_CoreGraphics):__C.CGContextRef.fillPath(using:_CoreGraphics.CGPathFillRule)_->_()
    ::_fillPath(CVar2);
    (*pcVar11)(puVar12,lVar3);
    _CGContextAddPath(IVar8,uVar9);
    IStack_b8 = IVar6;
    _CGContextSetStrokeColorWithColor(IVar8,IVar6);
    _CGContextSetLineWidth(dVar14,IVar8);
    _CGContextStrokePath(IVar8);
    dVar15 = 0.0;
    _CGRectGetWidth(0,0,0x4070000000000000,0x4070000000000000);
    if (dVar17 < dVar15) {
      dVar15 = 0.0;
      _CGRectGetWidth(0,0,0x4070000000000000,0x4070000000000000);
      uVar9 = 0;
      _CGPathCreateWithEllipseInRect((dVar15 - (dVar20 + dVar17)) - dVar19,dVar18,dVar17,dVar17);
      dVar15 = dVar16;
      uStack_d8 = uVar9;
      _CGRectGetWidth(dVar16,dVar18,dVar17,dVar17);
      dVar15 = dVar15 * 1.3;
      dVar19 = dVar16;
      _CGRectGetMidX(dVar16,dVar18,dVar17,dVar17);
      _CGRectGetMidY(dVar16,dVar18,dVar17,dVar17);
      uVar9 = 0;
      _CGPathCreateWithEllipseInRect(dVar19 - dVar15 * 0.5,dVar16 - dVar15 * 0.5,dVar15,dVar15,0);
      uVar1 = uStack_cc;
      (*pcVar13)(puVar12,uStack_cc,lVar3);
      (extension_in_CoreGraphics):__C.CGPathRef.subtracting(_:___C.CGPathRef,using:_CoreGraphics.CGPathFillRule)_->___C.CGPathRef
      ::_subtracting(uVar9,puVar12);
      (*pcVar11)(puVar12,lVar3);
      _CGContextAddPath(IVar8,uVar9);
      _CGContextSetFillColorWithColor(IVar8,pIStack_c0);
      (*pcVar13)(puVar12,uVar1,lVar3);
      (extension_in_CoreGraphics):__C.CGContextRef.fillPath(using:_CoreGraphics.CGPathFillRule)_->_()
      ::_fillPath(CVar2);
      (*pcVar11)(puVar12,lVar3);
      _CGContextAddPath(IVar8,uVar9);
      _CGContextSetStrokeColorWithColor(IVar8,IStack_b8);
      _CGContextSetLineWidth(dVar14,IVar8);
      _CGContextStrokePath(IVar8);
    }
    _CGContextRestoreGState(IVar8);
    IVar7 = IStack_c8;
    objc_stub::unlockFocus(IStack_c8);
  }
  return IVar7;
}



/* Address: 0x1003ed004 | FUN_1003ed004 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

long FUN_1003ed004(double param_1)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  double local_70;
  double dStack_68;
  double local_60;
  undefined8 uStack_58;
  
  bVar1 = false;
  bVar2 = true;
  if (0.0 <= param_1) {
    bVar1 = false;
    bVar2 = true;
    if (!NAN(param_1)) {
      bVar1 = param_1 == 1.0;
      bVar2 = 1.0 <= param_1;
    }
  }
  if (!bVar2 || bVar1) {
    lVar3 = *(long *)PTR__kCGColorSpaceSRGB_100ea9ca8;
    _CGColorSpaceCreateWithName();
    if (((lVar3 != 0) && (lVar4 = lVar3, _CGColorCreateCopyByMatchingToColorSpace(), lVar4 != 0)) &&
       ((extension_in_CoreGraphics):__C.CGColorRef.components.getter_:_[CoreGraphics.CGFloat]?::
        _get_components(), lVar4 != 0)) {
      if (*(ulong *)(lVar4 + 0x10) < 3) {
        _swift_bridgeObjectRelease(lVar4);
      }
      else {
        uVar8 = 0x3ff0000000000000;
        param_1 = 1.0 - param_1;
        dVar7 = *(double *)(lVar4 + 0x28);
        dVar5 = *(double *)(lVar4 + 0x20);
        dVar6 = *(double *)(lVar4 + 0x30);
        if (*(ulong *)(lVar4 + 0x10) != 3) {
          uVar8 = *(undefined8 *)(lVar4 + 0x38);
        }
        _swift_bridgeObjectRelease(lVar4);
        local_70 = dVar5 * param_1;
        dStack_68 = dVar7 * param_1;
        local_60 = param_1 * dVar6;
        uStack_58 = uVar8;
        _CGColorCreate(lVar3,&local_70);
        if (lVar3 != 0) {
          return lVar3;
        }
      }
    }
  }
  return unaff_x20;
}



/* Address: 0x1003ed158 | FUN_1003ed158 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1003ed158(double param_1,ulong param_2,ID param_3)

{
  undefined4 uVar1;
  CGPathFillRule CVar2;
  undefined7 extraout_var;
  ID IVar4;
  ID IVar5;
  undefined *self;
  ID self_00;
  ID IVar6;
  undefined8 uVar7;
  long extraout_x8;
  long lVar8;
  long lVar9;
  code *pcVar10;
  code *pcVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  ID local_c0;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  long lVar3;
  
  CVar2 = CoreGraphics::CGPathFillRule::typeMetadataAccessor();
  lVar3 = CONCAT71(extraout_var,CVar2.value);
  lVar9 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar9 + 0x40));
  lVar8 = (long)&local_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  dVar15 = param_1 * 1.45;
  if ((param_2 & 1) == 0) {
    dVar15 = param_1;
  }
  IVar4 = objc_stub::CGColor(param_3);
  IVar5 = IVar4;
  FUN_1003ed004(0x3fc999999999999a);
  dVar12 = 0.0;
  _CGRectGetHeight(0,0,dVar15,param_1);
  self = &_OBJC_CLASS___NSImage;
  _objc_allocWithZone();
  self_00 = objc_stub::initWithSize_((ID)self,dVar15,param_1);
  objc_stub::FUN_100c065c0(self_00,0);
  IVar6 = objc_stub::currentContext((ID)&_OBJC_CLASS___NSGraphicsContext);
  if ((IVar6 == 0) || (IVar6 = objc_stub::CGContext(IVar6), IVar6 == 0)) {
    objc_stub::unlockFocus(self_00);
  }
  else {
    dVar12 = dVar12 * 0.05;
    _CGContextSetAllowsAntialiasing(IVar6,1);
    _CGContextSetShouldAntialias(IVar6,1);
    _CGContextSaveGState(IVar6);
    dVar13 = 0.0;
    _CGRectGetHeight(0,0,dVar15,param_1);
    dVar13 = dVar13 - dVar12;
    dVar16 = dVar12 * 0.5 + 0.0;
    uVar7 = 0;
    _CGPathCreateWithEllipseInRect(dVar16,dVar16,dVar13,dVar13);
    _CGContextAddPath(IVar6,uVar7);
    _CGContextSetFillColorWithColor(IVar6,IVar4);
    local_ac = *(undefined4 *)
                PTR___enum_case_for_CoreGraphics_CGPathFillRule_winding_CoreGraphics_CGPathFillRule_Type___>_CoreGraphics_CGPathFillRule_100eaf238
    ;
    pcVar11 = *(code **)(lVar9 + 0x68);
    (*pcVar11)(lVar8,local_ac,lVar3);
    (extension_in_CoreGraphics):__C.CGContextRef.fillPath(using:_CoreGraphics.CGPathFillRule)_->_()
    ::_fillPath((CGPathFillRule)(__int8)lVar8);
    pcVar10 = *(code **)(lVar9 + 8);
    (*pcVar10)(lVar8,lVar3);
    local_a8 = uVar7;
    _CGContextAddPath(IVar6,uVar7);
    _CGContextSetStrokeColorWithColor(IVar6,IVar5);
    _CGContextSetLineWidth(dVar12,IVar6);
    _CGContextStrokePath(IVar6);
    dVar14 = 0.0;
    _CGRectGetWidth(0,0,dVar15,param_1);
    if (dVar13 < dVar14) {
      dVar14 = 0.0;
      _CGRectGetWidth(0,0,dVar15,param_1);
      uVar7 = 0;
      _CGPathCreateWithEllipseInRect(dVar14 - (dVar12 * 0.5 + dVar13),dVar16,dVar13,dVar13);
      dVar15 = dVar16;
      local_b8 = uVar7;
      _CGRectGetWidth(dVar16,dVar16,dVar13,dVar13);
      dVar15 = dVar15 * 1.3;
      dVar14 = dVar16;
      _CGRectGetMidX(dVar16,dVar16,dVar13,dVar13);
      _CGRectGetMidY(dVar16,dVar16,dVar13,dVar13);
      uVar7 = 0;
      _CGPathCreateWithEllipseInRect(dVar14 - dVar15 * 0.5,dVar16 - dVar15 * 0.5,dVar15,dVar15,0);
      uVar1 = local_ac;
      local_c0 = IVar5;
      (*pcVar11)(lVar8,local_ac,lVar3);
      (extension_in_CoreGraphics):__C.CGPathRef.subtracting(_:___C.CGPathRef,using:_CoreGraphics.CGPathFillRule)_->___C.CGPathRef
      ::_subtracting(uVar7,lVar8);
      (*pcVar10)(lVar8,lVar3);
      _CGContextAddPath(IVar6,uVar7);
      _CGContextSetFillColorWithColor(IVar6,IVar4);
      (*pcVar11)(lVar8,uVar1,lVar3);
      IVar5 = local_c0;
      (extension_in_CoreGraphics):__C.CGContextRef.fillPath(using:_CoreGraphics.CGPathFillRule)_->_()
      ::_fillPath((CGPathFillRule)(__int8)lVar8);
      (*pcVar10)(lVar8,lVar3);
      _CGContextAddPath(IVar6,uVar7);
      _CGContextSetStrokeColorWithColor(IVar6,IVar5);
      _CGContextSetLineWidth(dVar12,IVar6);
      _CGContextStrokePath(IVar6);
    }
    _CGContextRestoreGState(IVar6);
    objc_stub::unlockFocus(self_00);
  }
  return self_00;
}



/* Address: 0x1003ed58c | FUN_1003ed58c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1003ed58c(ID param_1)

{
  undefined4 uVar1;
  CGPathFillRule CVar2;
  undefined7 extraout_var;
  ID *pIVar4;
  ID *pIVar5;
  ID IVar6;
  undefined *self;
  ID IVar7;
  ID IVar8;
  undefined8 uVar9;
  long extraout_x8;
  long lVar10;
  code *pcVar11;
  undefined1 *puVar12;
  code *pcVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 auStack_e0 [8];
  undefined8 local_d8;
  undefined4 local_cc;
  ID local_c8;
  ID *local_c0;
  ID local_b8;
  undefined8 local_b0;
  ID local_a8;
  long lVar3;
  
  CVar2 = CoreGraphics::CGPathFillRule::typeMetadataAccessor();
  lVar3 = CONCAT71(extraout_var,CVar2.value);
  lVar10 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar10 + 0x40));
  puVar12 = auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  pIVar4 = (ID *)objc_stub::CGColor(param_1);
  pIVar5 = pIVar4;
  FUN_1001fe25c();
  IVar6 = *pIVar5;
  local_a8 = IVar6;
  FUN_1003ed004(0x3fc999999999999a);
  dVar14 = 0.0;
  _CGRectGetHeight(0,0,0x4067333333333333,0x4060000000000000);
  self = &_OBJC_CLASS___NSImage;
  _objc_allocWithZone();
  IVar7 = objc_stub::initWithSize_((ID)self,0x4070000000000000,0x4070000000000000);
  objc_stub::FUN_100c065c0(IVar7,0);
  IVar8 = objc_stub::currentContext((ID)&_OBJC_CLASS___NSGraphicsContext);
  if ((IVar8 == 0) || (IVar8 = objc_stub::CGContext(IVar8), IVar8 == 0)) {
    objc_stub::unlockFocus(IVar7);
  }
  else {
    dVar14 = dVar14 * 0.05;
    local_c8 = IVar7;
    _CGContextSetAllowsAntialiasing(IVar8,1);
    _CGContextSetShouldAntialias(IVar8,1);
    IVar7 = local_a8;
    objc_stub::setFill(local_a8);
    _CGContextFillRect(0,0,0x4070000000000000,0x4070000000000000,IVar8);
    uVar9 = 0;
    _CGPathCreateWithRoundedRect
              (0,0,0x4070000000000000,0x4070000000000000,0x4050000000000000,0x4050000000000000);
    local_b0 = uVar9;
    _CGContextAddPath(IVar8);
    IVar7 = objc_stub::CGColor(IVar7);
    _CGContextSetFillColorWithColor(IVar8,IVar7);
    uVar1 = *(undefined4 *)
             PTR___enum_case_for_CoreGraphics_CGPathFillRule_winding_CoreGraphics_CGPathFillRule_Type___>_CoreGraphics_CGPathFillRule_100eaf238
    ;
    pcVar13 = *(code **)(lVar10 + 0x68);
    (*pcVar13)(puVar12,uVar1,lVar3);
    CVar2.value = (__int8)puVar12;
    (extension_in_CoreGraphics):__C.CGContextRef.fillPath(using:_CoreGraphics.CGPathFillRule)_->_()
    ::_fillPath(CVar2);
    pcVar11 = *(code **)(lVar10 + 8);
    (*pcVar11)(puVar12,lVar3);
    (*pcVar13)(puVar12,uVar1,lVar3);
    (extension_in_CoreGraphics):__C.CGContextRef.clip(using:_CoreGraphics.CGPathFillRule)_->_()::
    _clip(CVar2);
    (*pcVar11)(puVar12,lVar3);
    _CGContextSaveGState(IVar8);
    dVar15 = 0.0;
    _CGRectGetWidth(0,0,0x4070000000000000,0x4070000000000000);
    dVar16 = 0.0;
    _CGRectGetWidth(0,0,0x4067333333333333,0x4060000000000000);
    dVar19 = dVar15 * 0.5 - dVar16 * 0.5;
    dVar15 = 0.0;
    _CGRectGetHeight(0,0,0x4070000000000000,0x4070000000000000);
    dVar16 = 0.0;
    _CGRectGetHeight(0,0,0x4067333333333333,0x4060000000000000);
    dVar18 = dVar15 * 0.5 - dVar16 * 0.5;
    dVar15 = 0.0;
    _CGRectGetHeight(0,0,0x4070000000000000,0x4070000000000000);
    dVar17 = (dVar15 - dVar14) - (dVar18 + dVar18);
    dVar20 = dVar14 * 0.5;
    dVar16 = dVar20 + dVar19;
    dVar18 = dVar20 + dVar18;
    uVar9 = 0;
    _CGPathCreateWithEllipseInRect(dVar16,dVar18,dVar17,dVar17,0);
    _CGContextAddPath(IVar8,uVar9);
    local_c0 = pIVar4;
    _CGContextSetFillColorWithColor(IVar8,pIVar4);
    local_cc = uVar1;
    (*pcVar13)(puVar12,uVar1,lVar3);
    (extension_in_CoreGraphics):__C.CGContextRef.fillPath(using:_CoreGraphics.CGPathFillRule)_->_()
    ::_fillPath(CVar2);
    (*pcVar11)(puVar12,lVar3);
    _CGContextAddPath(IVar8,uVar9);
    local_b8 = IVar6;
    _CGContextSetStrokeColorWithColor(IVar8,IVar6);
    _CGContextSetLineWidth(dVar14,IVar8);
    _CGContextStrokePath(IVar8);
    dVar15 = 0.0;
    _CGRectGetWidth(0,0,0x4070000000000000,0x4070000000000000);
    if (dVar17 < dVar15) {
      dVar15 = 0.0;
      _CGRectGetWidth(0,0,0x4070000000000000,0x4070000000000000);
      uVar9 = 0;
      _CGPathCreateWithEllipseInRect((dVar15 - (dVar20 + dVar17)) - dVar19,dVar18,dVar17,dVar17);
      dVar15 = dVar16;
      local_d8 = uVar9;
      _CGRectGetWidth(dVar16,dVar18,dVar17,dVar17);
      dVar15 = dVar15 * 1.3;
      dVar19 = dVar16;
      _CGRectGetMidX(dVar16,dVar18,dVar17,dVar17);
      _CGRectGetMidY(dVar16,dVar18,dVar17,dVar17);
      uVar9 = 0;
      _CGPathCreateWithEllipseInRect(dVar19 - dVar15 * 0.5,dVar16 - dVar15 * 0.5,dVar15,dVar15,0);
      uVar1 = local_cc;
      (*pcVar13)(puVar12,local_cc,lVar3);
      (extension_in_CoreGraphics):__C.CGPathRef.subtracting(_:___C.CGPathRef,using:_CoreGraphics.CGPathFillRule)_->___C.CGPathRef
      ::_subtracting(uVar9,puVar12);
      (*pcVar11)(puVar12,lVar3);
      _CGContextAddPath(IVar8,uVar9);
      _CGContextSetFillColorWithColor(IVar8,local_c0);
      (*pcVar13)(puVar12,uVar1,lVar3);
      (extension_in_CoreGraphics):__C.CGContextRef.fillPath(using:_CoreGraphics.CGPathFillRule)_->_()
      ::_fillPath(CVar2);
      (*pcVar11)(puVar12,lVar3);
      _CGContextAddPath(IVar8,uVar9);
      _CGContextSetStrokeColorWithColor(IVar8,local_b8);
      _CGContextSetLineWidth(dVar14,IVar8);
      _CGContextStrokePath(IVar8);
    }
    _CGContextRestoreGState(IVar8);
    IVar7 = local_c8;
    objc_stub::unlockFocus(local_c8);
  }
  return IVar7;
}



/* Address: 0x1003edb5c | FUN_1003edb5c */

undefined1  [16] FUN_1003edb5c(void)

{
  return ZEXT816(0x100ed0a58);
}



/* Address: 0x1003edb6c | FUN_1003edb6c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001003edd8c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1003edb6c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,HorizontalAlignment param_6)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  HorizontalAlignment HVar4;
  MainActor *this;
  MainActor *pMVar5;
  MainActor *pMVar6;
  UnownedSerialExecutor UVar7;
  UnownedSerialExecutor UVar8;
  Set SVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  MainActor *pMVar16;
  undefined8 uVar17;
  
  HVar4 = SwiftUI::HorizontalAlignment::get_leading(param_6);
  *param_1 = HVar4.unknown;
  param_1[1] = 0x4030000000000000;
  *(undefined1 *)(param_1 + 2) = 0;
  this = Swift::MainActor::typeMetadataAccessor();
  pMVar5 = Swift::MainActor::get_shared(this,this);
  pMVar6 = pMVar5;
  FUN_1003d0b5c();
  pMVar16 = pMVar6;
  UVar7 = Swift::Actor::get_unownedExecutor();
  UVar8 = UVar7;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar8.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteCoreUI/SWCollaborationParticipantsView.swift",0x31,1,0xe,UVar7.unknown,pMVar16)
    ;
  }
  HVar4.unknown = &DAT_100fc3fb8;
  FUN_1000037f0(&DAT_100fc3fb8,&DAT_100c463c0);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(HVar4.unknown + 0x2c));
  HVar4 = SwiftUI::HorizontalAlignment::get_leading(HVar4);
  *puVar1 = HVar4.unknown;
  puVar1[1] = 0x4020000000000000;
  *(undefined1 *)(puVar1 + 2) = 0;
  SVar9.unknown = Swift::MainActor::get_shared(this,HVar4.unknown);
  UVar7 = Swift::Actor::get_unownedExecutor();
  UVar8 = UVar7;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar8.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteCoreUI/SWCollaborationParticipantsView.swift",0x31,1,0xf,UVar7.unknown,pMVar6);
  }
  puVar10 = &DAT_100fc3fc0;
  FUN_1000037f0(&DAT_100fc3fc0,&DAT_100c463c8);
  iVar3 = *(int *)(puVar10 + 0x2c);
  puVar10 = &DAT_100c463d0;
  _swift_getKeyPath(&DAT_100c463d0);
  puVar11 = &DAT_100ed0a78;
  _swift_allocObject(&DAT_100ed0a78,0x18,7);
  *(undefined **)(puVar11 + 0x10) = param_6.unknown;
  _swift_bridgeObjectRetain_n(param_6.unknown,2);
  puVar12 = &DAT_100fc3fc8;
  FUN_1000037f0(&DAT_100fc3fc8,&DAT_100c463f0);
  puVar13 = &DAT_100fc3fd0;
  FUN_1000037f0(&DAT_100fc3fd0,&DAT_100c463f8);
  puVar14 = &DAT_100fc3fd8;
  FUN_100016eac(&DAT_100fc3fd8,&DAT_100fc3fc8,&DAT_100c463f0,
                PTR_Swift__Swift__Array<undefined>_>Swift__RandomAccessCollection_100eac540);
  puVar15 = puVar14;
  FUN_1003ee188();
  FUN_100016eac(&DAT_100fc3fe8,&DAT_100fc3fd0,&DAT_100c463f8,
                PTR_SwiftUI__SwiftUI__HStack<undefined>_>SwiftUI__View_100eab8b0);
  (extension_SwiftUI)::SwiftUI::ForEach::_init
            ((long)puVar1 + (long)iVar3,puVar15,puVar10,FUN_1003ee180,puVar11,puVar12,puVar13,
             puVar14,puVar15);
  _swift_release(pMVar5);
  _swift_release();
  SVar9 = SwiftUI::Edge::Set::get_vertical(SVar9);
  uVar17 = 0x4020000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar9.unknown);
  puVar10 = &DAT_100fc3ff0;
  FUN_1000037f0(&DAT_100fc3ff0,&DAT_100c46408);
  puVar2 = (undefined1 *)((long)param_1 + (long)*(int *)(puVar10 + 0x24));
  *puVar2 = (char)SVar9.unknown;
  *(undefined8 *)(puVar2 + 8) = uVar17;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  puVar2[0x28] = 0;
  return;
}



/* Address: 0x1003ede18 | FUN_1003ede18 */

void FUN_1003ede18(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  char cVar4;
  MainActor *pMVar5;
  MainActor *pMVar6;
  UnownedSerialExecutor UVar7;
  char *pcVar8;
  uint uVar9;
  undefined1 auStack_580 [224];
  undefined7 uStack_4a0;
  undefined1 local_499;
  undefined7 uStack_498;
  undefined1 uStack_491;
  undefined7 uStack_490;
  undefined8 local_3d9;
  undefined *local_3d0;
  undefined8 uStack_3c8;
  undefined1 uStack_3c0;
  undefined7 uStack_3bf;
  undefined1 uStack_3b8;
  undefined7 uStack_3b7;
  undefined1 local_3b0;
  undefined7 uStack_3af;
  undefined1 uStack_3a8;
  undefined7 uStack_3a7;
  undefined1 uStack_3a0;
  undefined7 uStack_39f;
  undefined1 uStack_398;
  undefined7 uStack_397;
  undefined1 local_390;
  undefined7 uStack_38f;
  undefined1 uStack_388;
  undefined7 uStack_387;
  undefined1 uStack_380;
  undefined7 uStack_37f;
  undefined1 uStack_378;
  undefined7 uStack_377;
  undefined1 local_370;
  undefined7 uStack_36f;
  undefined1 uStack_368;
  undefined7 uStack_367;
  undefined1 uStack_360;
  undefined7 uStack_35f;
  undefined1 uStack_358;
  undefined7 uStack_357;
  undefined1 local_350;
  undefined7 uStack_34f;
  undefined1 uStack_348;
  undefined7 uStack_347;
  undefined1 uStack_340;
  undefined7 uStack_33f;
  undefined1 uStack_338;
  undefined7 uStack_337;
  undefined1 local_330;
  undefined7 uStack_32f;
  undefined1 uStack_328;
  undefined7 uStack_327;
  undefined1 uStack_320;
  undefined7 uStack_31f;
  undefined1 uStack_318;
  undefined7 uStack_317;
  undefined8 local_310;
  undefined *local_300;
  undefined8 uStack_2f8;
  undefined *local_230;
  undefined8 uStack_228;
  undefined1 local_220;
  undefined7 local_21f;
  undefined1 uStack_218;
  undefined7 uStack_217;
  undefined1 uStack_210;
  undefined7 local_20f;
  undefined1 uStack_208;
  undefined7 uStack_207;
  undefined1 uStack_200;
  undefined7 local_1ff;
  undefined1 uStack_1f8;
  undefined7 uStack_1f7;
  undefined1 uStack_1f0;
  undefined7 local_1ef;
  undefined1 uStack_1e8;
  undefined7 uStack_1e7;
  undefined1 uStack_1e0;
  undefined7 local_1df;
  undefined1 uStack_1d8;
  undefined7 uStack_1d7;
  undefined1 uStack_1d0;
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
  undefined7 local_18f;
  undefined1 uStack_188;
  undefined7 uStack_187;
  undefined1 uStack_180;
  undefined7 local_17f;
  undefined1 uStack_178;
  undefined7 uStack_177;
  undefined1 uStack_170;
  undefined7 local_16f;
  undefined1 uStack_168;
  undefined7 uStack_167;
  undefined1 uStack_160;
  undefined7 uStack_15f;
  undefined8 uStack_158;
  undefined *local_150;
  undefined8 uStack_148;
  undefined1 local_140;
  undefined7 uStack_13f;
  undefined1 uStack_138;
  undefined7 uStack_137;
  undefined1 local_130;
  undefined7 uStack_12f;
  undefined1 uStack_128;
  undefined7 uStack_127;
  undefined1 local_120;
  undefined7 uStack_11f;
  undefined1 uStack_118;
  undefined7 uStack_117;
  undefined1 local_110;
  undefined7 uStack_10f;
  undefined1 uStack_108;
  undefined7 uStack_107;
  undefined1 local_100;
  undefined7 uStack_ff;
  undefined1 uStack_f8;
  undefined7 uStack_f7;
  undefined1 local_f0;
  undefined7 uStack_ef;
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  undefined1 local_e0;
  undefined7 uStack_df;
  undefined1 uStack_d8;
  undefined7 uStack_d7;
  undefined1 local_d0;
  undefined7 uStack_cf;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined1 local_c0;
  undefined7 uStack_bf;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined1 local_b0;
  undefined7 uStack_af;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  undefined1 local_a0;
  undefined7 uStack_9f;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 local_90;
  undefined7 uStack_8f;
  undefined8 uStack_78;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  bVar3 = *(byte *)(param_2 + 2);
  cVar4 = *(char *)((long)param_2 + 0x11);
  pMVar5 = Swift::MainActor::typeMetadataAccessor();
  pMVar6 = Swift::MainActor::get_shared(pMVar5,pMVar5);
  pMVar5 = pMVar6;
  FUN_1003d0b5c();
  UVar7 = Swift::Actor::get_unownedExecutor();
  pcVar8 = (char *)UVar7;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar8 & 1) == 0) {
    pcVar8 = "PasteCoreUI/SWCollaborationParticipantsView.swift";
    _swift_task_reportUnexpectedExecutor
              ("PasteCoreUI/SWCollaborationParticipantsView.swift",0x31,1,0x10,UVar7.unknown,pMVar5)
    ;
  }
  local_230 = (undefined *)SwiftUI::VerticalAlignment::get_center((VerticalAlignment)pcVar8);
  uVar9 = 0x100;
  if (cVar4 == '\0') {
    uVar9 = 0;
  }
  FUN_1003ee200(&local_150,param_3,uVar1,uVar2,uVar9 | bVar3);
  uStack_328 = uStack_a8;
  uStack_327 = uStack_a7;
  local_330 = local_b0;
  uStack_32f = uStack_af;
  uStack_318 = uStack_98;
  uStack_317 = uStack_97;
  uStack_320 = local_a0;
  uStack_31f = uStack_9f;
  uStack_368 = uStack_e8;
  uStack_367 = uStack_e7;
  local_370 = local_f0;
  uStack_36f = uStack_ef;
  uStack_358 = uStack_d8;
  uStack_357 = uStack_d7;
  uStack_360 = local_e0;
  uStack_35f = uStack_df;
  uStack_338 = uStack_b8;
  uStack_337 = uStack_b7;
  uStack_340 = local_c0;
  uStack_33f = uStack_bf;
  uStack_348 = uStack_c8;
  uStack_347 = uStack_c7;
  local_350 = local_d0;
  uStack_34f = uStack_cf;
  uStack_3a8 = uStack_128;
  uStack_3a7 = uStack_127;
  local_3b0 = local_130;
  uStack_3af = uStack_12f;
  uStack_398 = uStack_118;
  uStack_397 = uStack_117;
  uStack_3a0 = local_120;
  uStack_39f = uStack_11f;
  uStack_378 = uStack_f8;
  uStack_377 = uStack_f7;
  uStack_380 = local_100;
  uStack_37f = uStack_ff;
  uStack_388 = uStack_108;
  uStack_387 = uStack_107;
  local_390 = local_110;
  uStack_38f = uStack_10f;
  uStack_3b8 = uStack_138;
  uStack_3b7 = uStack_137;
  uStack_3c0 = local_140;
  uStack_3bf = uStack_13f;
  uStack_3c8 = uStack_148;
  local_3d0 = local_150;
  local_310 = CONCAT71(uStack_8f,local_90);
  uStack_2f8 = uStack_148;
  local_300 = local_150;
  FUN_100011090(&local_3d0,&local_230,&DAT_100fc4010,&DAT_100c46498);
  FUN_100005808(&local_300,&DAT_100fc4010,&DAT_100c46498);
  local_3d9 = local_310;
  uStack_491 = (undefined1)uStack_3c8;
  uStack_490 = (undefined7)((ulong)uStack_3c8 >> 8);
  local_499 = SUB81(local_3d0,0);
  uStack_498 = (undefined7)((ulong)local_3d0 >> 8);
  uStack_187 = uStack_33f;
  uStack_180 = uStack_338;
  local_18f = uStack_347;
  uStack_188 = uStack_340;
  uStack_177 = uStack_32f;
  uStack_170 = uStack_328;
  local_17f = uStack_337;
  uStack_178 = local_330;
  uStack_167 = uStack_31f;
  local_16f = uStack_327;
  uStack_168 = uStack_320;
  uStack_158 = local_310;
  uStack_160 = uStack_318;
  uStack_15f = uStack_317;
  uStack_1c7 = uStack_37f;
  uStack_1c0 = uStack_378;
  local_1cf = uStack_387;
  uStack_1c8 = uStack_380;
  uStack_1b7 = uStack_36f;
  uStack_1b0 = uStack_368;
  local_1bf = uStack_377;
  uStack_1b8 = local_370;
  uStack_1a7 = uStack_35f;
  uStack_1a0 = uStack_358;
  local_1af = uStack_367;
  uStack_1a8 = uStack_360;
  uStack_197 = uStack_34f;
  uStack_190 = uStack_348;
  local_19f = uStack_357;
  uStack_198 = local_350;
  uStack_207 = uStack_3bf;
  uStack_200 = uStack_3b8;
  local_20f = uStack_490;
  uStack_208 = uStack_3c0;
  uStack_1f7 = uStack_3af;
  uStack_1f0 = uStack_3a8;
  local_1ff = uStack_3b7;
  uStack_1f8 = local_3b0;
  uStack_1e7 = uStack_39f;
  uStack_1e0 = uStack_398;
  local_1ef = uStack_3a7;
  uStack_1e8 = uStack_3a0;
  uStack_1d7 = uStack_38f;
  uStack_1d0 = uStack_388;
  local_1df = uStack_397;
  uStack_1d8 = local_390;
  uStack_217 = uStack_498;
  uStack_210 = uStack_491;
  local_21f = uStack_4a0;
  uStack_218 = local_499;
  uStack_78 = local_310;
  uStack_12f = uStack_490;
  uStack_228 = 0x4030000000000000;
  local_220 = 0;
  uStack_148 = 0x4030000000000000;
  local_140 = 0;
  uStack_137 = uStack_498;
  local_130 = uStack_491;
  uStack_138 = local_499;
  local_150 = local_230;
  FUN_100011090(&local_230,auStack_580,&DAT_100fc3fd0,&DAT_100c463f8);
  FUN_100005808(&local_150,&DAT_100fc3fd0,&DAT_100c463f8);
  _swift_release(pMVar6);
  param_1[0x15] = CONCAT71(uStack_187,uStack_188);
  param_1[0x14] = CONCAT71(local_18f,uStack_190);
  param_1[0x17] = CONCAT71(uStack_177,uStack_178);
  param_1[0x16] = CONCAT71(local_17f,uStack_180);
  param_1[0x19] = CONCAT71(uStack_167,uStack_168);
  param_1[0x18] = CONCAT71(local_16f,uStack_170);
  param_1[0x1b] = uStack_158;
  param_1[0x1a] = CONCAT71(uStack_15f,uStack_160);
  param_1[0xd] = CONCAT71(uStack_1c7,uStack_1c8);
  param_1[0xc] = CONCAT71(local_1cf,uStack_1d0);
  param_1[0xf] = CONCAT71(uStack_1b7,uStack_1b8);
  param_1[0xe] = CONCAT71(local_1bf,uStack_1c0);
  param_1[0x11] = CONCAT71(uStack_1a7,uStack_1a8);
  param_1[0x10] = CONCAT71(local_1af,uStack_1b0);
  param_1[0x13] = CONCAT71(uStack_197,uStack_198);
  param_1[0x12] = CONCAT71(local_19f,uStack_1a0);
  param_1[5] = CONCAT71(uStack_207,uStack_208);
  param_1[4] = CONCAT71(local_20f,uStack_210);
  param_1[7] = CONCAT71(uStack_1f7,uStack_1f8);
  param_1[6] = CONCAT71(local_1ff,uStack_200);
  param_1[9] = CONCAT71(uStack_1e7,uStack_1e8);
  param_1[8] = CONCAT71(local_1ef,uStack_1f0);
  param_1[0xb] = CONCAT71(uStack_1d7,uStack_1d8);
  param_1[10] = CONCAT71(local_1df,uStack_1e0);
  param_1[1] = uStack_228;
  *param_1 = local_230;
  param_1[3] = CONCAT71(uStack_217,uStack_218);
  param_1[2] = CONCAT71(local_21f,local_220);
  return;
}



/* Address: 0x1003ee15c | FUN_1003ee15c */

void FUN_1003ee15c(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x1003ee180 | FUN_1003ee180 */

void FUN_1003ee180(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1003ede18(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1003ee188 | FUN_1003ee188 */

void FUN_1003ee188(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_18;
  
  if (DAT_100fc3fe0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fc39b0;
  FUN_100005c24(&DAT_100fc39b0,&DAT_100c46400);
  local_18 = PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100eac218;
  puVar2 = 
  PTR__Swift__protocol_conformance_descriptor_for_<A_where_A:_Swift_Hashable>_A____Swift_Hashable_in_Swift_>Swift__Hashable_100eae0a0
  ;
  _swift_getWitnessTable
            (PTR__Swift__protocol_conformance_descriptor_for_<A_where_A:_Swift_Hashable>_A____Swift_Hashable_in_Swift_>Swift__Hashable_100eae0a0
             ,puVar1,&local_18);
  DAT_100fc3fe0 = puVar2;
  return;
}



/* Address: 0x1003ee1f0 | FUN_1003ee1f0 */

void FUN_1003ee1f0(undefined8 param_1)

{
  _swift_getOpaqueTypeConformance2(param_1,&DAT_100caea64,1);
  return;
}



/* Address: 0x1003ee200 | FUN_1003ee200 */

void FUN_1003ee200(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  char *pcVar4;
  Alignment AVar5;
  HorizontalAlignment HVar6;
  MainActor *pMVar7;
  undefined1 auStack_5e0 [112];
  undefined *local_570;
  MainActor *pMStack_568;
  undefined *puStack_560;
  undefined8 uStack_558;
  undefined8 local_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 local_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 local_510;
  undefined8 uStack_508;
  undefined *puStack_500;
  undefined8 uStack_4f8;
  undefined8 local_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 local_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 local_4b0;
  undefined7 uStack_4a0;
  undefined1 local_499;
  undefined7 uStack_498;
  undefined1 uStack_491;
  undefined7 uStack_490;
  undefined1 local_489;
  undefined7 uStack_488;
  undefined1 uStack_481;
  undefined7 uStack_480;
  undefined1 local_479;
  undefined7 uStack_478;
  undefined1 uStack_471;
  undefined7 uStack_470;
  undefined1 local_469;
  undefined7 uStack_468;
  undefined1 uStack_461;
  undefined7 uStack_460;
  undefined1 uStack_459;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined *local_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 local_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined *local_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined *local_370;
  MainActor *pMStack_368;
  undefined *local_360;
  undefined8 uStack_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined *local_300;
  MainActor *local_2f8;
  undefined *local_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined1 local_290 [64];
  undefined *local_250;
  undefined8 uStack_248;
  undefined1 local_240;
  undefined7 uStack_23f;
  undefined1 uStack_238;
  undefined7 uStack_237;
  undefined1 uStack_230;
  undefined7 local_22f;
  undefined1 uStack_228;
  undefined7 uStack_227;
  undefined1 uStack_220;
  undefined7 local_21f;
  undefined1 uStack_218;
  undefined7 uStack_217;
  undefined1 uStack_210;
  undefined7 local_20f;
  undefined1 uStack_208;
  undefined7 uStack_207;
  undefined1 uStack_200;
  undefined7 uStack_1ff;
  undefined *local_1f8;
  undefined8 local_1f0;
  undefined1 local_1e8;
  undefined8 local_1e7;
  undefined8 uStack_1df;
  undefined8 local_1d7;
  undefined8 uStack_1cf;
  undefined8 local_1c7;
  undefined8 uStack_1bf;
  undefined8 local_1b7;
  undefined7 uStack_1af;
  undefined1 uStack_1a8;
  undefined7 uStack_1a7;
  undefined *local_1a0;
  MainActor *pMStack_198;
  undefined *local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined *local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined *local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1003d0b5c();
  UVar3 = Swift::Actor::get_unownedExecutor();
  pcVar4 = (char *)UVar3;
  pMVar7 = pMVar1;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar4 & 1) == 0) {
    pcVar4 = "PasteCoreUI/SWCollaborationParticipantsView.swift";
    pMVar7 = (MainActor *)0x31;
    _swift_task_reportUnexpectedExecutor
              ("PasteCoreUI/SWCollaborationParticipantsView.swift",0x31,1,0x11,UVar3.unknown,pMVar1)
    ;
  }
  AVar5 = SwiftUI::Alignment::get_center((Alignment)pcVar4);
  FUN_1003ee5f0(&local_1a0,param_2,param_3,param_4,param_5 & 0x1ff);
  uStack_408 = uStack_178;
  local_410 = local_180;
  uStack_3f8 = uStack_168;
  uStack_400 = local_170;
  uStack_3e8 = uStack_158;
  local_3f0 = local_160;
  uStack_3d8 = uStack_148;
  uStack_3e0 = local_150;
  uStack_428 = pMStack_198;
  local_430 = local_1a0;
  uStack_418 = uStack_188;
  uStack_420 = local_190;
  uStack_3a8 = uStack_178;
  local_3b0 = local_180;
  uStack_398 = uStack_168;
  uStack_3a0 = local_170;
  uStack_388 = uStack_158;
  local_390 = local_160;
  uStack_378 = uStack_148;
  uStack_380 = local_150;
  uStack_3c8 = pMStack_198;
  local_3d0 = local_1a0;
  uStack_3b8 = uStack_188;
  uStack_3c0 = local_190;
  FUN_100011090(&local_430,&local_300,&DAT_100fc4018,&DAT_100c464a0);
  FUN_100005808(&local_3d0,&DAT_100fc4018,&DAT_100c464a0);
  uStack_2c8 = uStack_408;
  local_2d0 = local_410;
  uStack_2b8 = uStack_3f8;
  uStack_2c0 = uStack_400;
  uStack_2a8 = uStack_3e8;
  local_2b0 = local_3f0;
  uStack_298 = uStack_3d8;
  uStack_2a0 = uStack_3e0;
  uStack_2e8 = uStack_428;
  local_2f0 = local_430;
  uStack_2d8 = uStack_418;
  uStack_2e0 = uStack_420;
  uStack_358 = uStack_428;
  local_360 = local_430;
  uStack_348 = uStack_418;
  local_350 = uStack_420;
  uStack_318 = uStack_3e8;
  local_320 = local_3f0;
  uStack_308 = uStack_3d8;
  local_310 = uStack_3e0;
  uStack_338 = uStack_408;
  local_340 = local_410;
  uStack_328 = uStack_3f8;
  local_330 = uStack_400;
  local_370 = AVar5.unknown;
  pMStack_368 = pMVar7;
  local_300 = AVar5.unknown;
  local_2f8 = pMVar7;
  FUN_100011090(&local_370,&local_1a0,&DAT_100fc4020,&DAT_100c464a8);
  HVar6.unknown = (undefined *)&local_300;
  FUN_100005808(HVar6.unknown,&DAT_100fc4020,&DAT_100c464a8);
  HVar6 = SwiftUI::HorizontalAlignment::get_leading(HVar6);
  FUN_1003ee904(local_290,param_2,param_3,param_4,param_5 & 0x1ff);
  uStack_481 = (undefined1)local_290._24_8_;
  uStack_480 = SUB87(local_290._24_8_,1);
  local_489 = (undefined1)local_290._16_8_;
  uStack_488 = SUB87(local_290._16_8_,1);
  uStack_491 = (undefined1)local_290._8_8_;
  uStack_490 = SUB87(local_290._8_8_,1);
  local_499 = (undefined1)local_290._0_8_;
  uStack_498 = SUB87(local_290._0_8_,1);
  uStack_471 = (undefined1)local_290._40_8_;
  uStack_470 = SUB87(local_290._40_8_,1);
  local_479 = (undefined1)local_290._32_8_;
  uStack_478 = SUB87(local_290._32_8_,1);
  uStack_461 = (undefined1)local_290._56_8_;
  uStack_460 = SUB87(local_290._56_8_,1);
  local_469 = (undefined1)local_290._48_8_;
  uStack_468 = SUB87(local_290._48_8_,1);
  uStack_227 = uStack_488;
  uStack_220 = uStack_481;
  local_22f = uStack_490;
  uStack_228 = local_489;
  uStack_1cf = CONCAT17(uStack_481,uStack_488);
  local_1d7 = CONCAT17(local_489,uStack_490);
  uStack_1bf = CONCAT17(uStack_471,uStack_478);
  local_1c7 = CONCAT17(local_479,uStack_480);
  uStack_217 = uStack_478;
  uStack_210 = uStack_471;
  local_21f = uStack_480;
  uStack_218 = local_479;
  local_1b7 = CONCAT17(local_469,uStack_470);
  uStack_207 = uStack_468;
  local_20f = uStack_470;
  uStack_208 = local_469;
  uStack_1df = CONCAT17(uStack_491,uStack_498);
  local_1e7 = CONCAT17(local_499,uStack_4a0);
  uStack_237 = uStack_498;
  uStack_230 = uStack_491;
  uStack_23f = uStack_4a0;
  uStack_238 = local_499;
  uStack_1af = uStack_468;
  uStack_248 = 0x4010000000000000;
  local_240 = 0;
  local_1f0 = 0x4010000000000000;
  local_1e8 = 0;
  local_250 = HVar6.unknown;
  uStack_200 = uStack_461;
  uStack_1ff = uStack_460;
  local_1f8 = HVar6.unknown;
  uStack_1a8 = uStack_461;
  uStack_1a7 = uStack_460;
  FUN_100011090(&local_250,&local_1a0,&DAT_100fc4028,&DAT_100c464b0);
  FUN_100005808(&local_1f8,&DAT_100fc4028,&DAT_100c464b0);
  uStack_458 = uStack_328;
  uStack_460 = (undefined7)local_330;
  uStack_459 = (undefined1)((ulong)local_330 >> 0x38);
  uStack_448 = uStack_318;
  uStack_450 = local_320;
  uStack_438 = uStack_308;
  local_440 = local_310;
  uStack_498 = SUB87(pMStack_368,0);
  uStack_491 = (undefined1)((ulong)pMStack_368 >> 0x38);
  uStack_4a0 = SUB87(local_370,0);
  local_499 = (undefined1)((ulong)local_370 >> 0x38);
  uStack_488 = (undefined7)uStack_358;
  uStack_481 = (undefined1)((ulong)uStack_358 >> 0x38);
  uStack_490 = SUB87(local_360,0);
  local_489 = (undefined1)((ulong)local_360 >> 0x38);
  uStack_478 = (undefined7)uStack_348;
  uStack_471 = (undefined1)((ulong)uStack_348 >> 0x38);
  uStack_480 = (undefined7)local_350;
  local_479 = (undefined1)((ulong)local_350 >> 0x38);
  uStack_468 = (undefined7)uStack_338;
  uStack_461 = (undefined1)((ulong)uStack_338 >> 0x38);
  uStack_470 = (undefined7)local_340;
  local_469 = (undefined1)((ulong)local_340 >> 0x38);
  uStack_b8 = CONCAT71(uStack_237,uStack_238);
  uStack_c0 = CONCAT71(uStack_23f,local_240);
  uStack_c8 = uStack_248;
  local_d0 = local_250;
  uStack_98 = CONCAT71(uStack_217,uStack_218);
  local_a0 = CONCAT71(local_21f,uStack_220);
  uStack_88 = CONCAT71(uStack_207,uStack_208);
  uStack_90 = CONCAT71(local_20f,uStack_210);
  uStack_e8 = CONCAT71(uStack_207,uStack_208);
  local_f0 = CONCAT71(local_20f,uStack_210);
  uStack_a8 = CONCAT71(uStack_227,uStack_228);
  local_b0 = CONCAT71(local_22f,uStack_230);
  uStack_108 = CONCAT71(uStack_227,uStack_228);
  local_110 = CONCAT71(local_22f,uStack_230);
  uStack_4d8 = CONCAT71(uStack_227,uStack_228);
  uStack_4e0 = CONCAT71(local_22f,uStack_230);
  uStack_188 = uStack_358;
  local_190 = local_360;
  pMStack_198 = pMStack_368;
  local_1a0 = local_370;
  uStack_138 = uStack_308;
  local_140 = local_310;
  uStack_148 = uStack_318;
  local_150 = local_320;
  uStack_158 = uStack_328;
  local_160 = local_330;
  uStack_178 = uStack_348;
  local_180 = local_350;
  uStack_168 = uStack_338;
  local_170 = local_340;
  pMStack_568 = pMStack_368;
  local_570 = local_370;
  uStack_558 = uStack_358;
  puStack_560 = local_360;
  uStack_528 = uStack_328;
  local_530 = local_330;
  uStack_518 = uStack_318;
  uStack_520 = local_320;
  local_80 = CONCAT71(uStack_1ff,uStack_200);
  local_e0 = CONCAT71(uStack_1ff,uStack_200);
  uStack_548 = uStack_348;
  local_550 = local_350;
  uStack_538 = uStack_338;
  uStack_540 = local_340;
  uStack_118 = CONCAT71(uStack_237,uStack_238);
  local_120 = CONCAT71(uStack_23f,local_240);
  uStack_4e8 = CONCAT71(uStack_237,uStack_238);
  local_4f0 = CONCAT71(uStack_23f,local_240);
  uStack_128 = uStack_248;
  local_130 = local_250;
  uStack_f8 = CONCAT71(uStack_217,uStack_218);
  local_100 = CONCAT71(local_21f,uStack_220);
  uStack_508 = uStack_308;
  local_510 = local_310;
  uStack_4f8 = uStack_248;
  puStack_500 = local_250;
  uStack_4c8 = CONCAT71(uStack_217,uStack_218);
  local_4d0 = CONCAT71(local_21f,uStack_220);
  uStack_4b8 = CONCAT71(uStack_207,uStack_208);
  uStack_4c0 = CONCAT71(local_20f,uStack_210);
  local_4b0 = CONCAT71(uStack_1ff,uStack_200);
  param_1[5] = uStack_348;
  param_1[4] = local_350;
  param_1[7] = uStack_338;
  param_1[6] = local_340;
  param_1[1] = pMStack_368;
  *param_1 = local_370;
  param_1[3] = uStack_358;
  param_1[2] = local_360;
  param_1[0xd] = uStack_308;
  param_1[0xc] = local_310;
  param_1[0xf] = uStack_248;
  param_1[0xe] = local_250;
  param_1[9] = uStack_328;
  param_1[8] = local_330;
  param_1[0xb] = uStack_318;
  param_1[10] = local_320;
  param_1[0x18] = local_4b0;
  param_1[0x15] = uStack_4c8;
  param_1[0x14] = local_4d0;
  param_1[0x17] = uStack_4b8;
  param_1[0x16] = uStack_4c0;
  param_1[0x11] = uStack_4e8;
  param_1[0x10] = local_4f0;
  param_1[0x13] = uStack_4d8;
  param_1[0x12] = uStack_4e0;
  FUN_100011090(&local_1a0,auStack_5e0,&DAT_100fc4020,&DAT_100c464a8);
  FUN_100011090(&local_130,auStack_5e0,&DAT_100fc4028,&DAT_100c464b0);
  FUN_100005808(&local_d0,&DAT_100fc4028,&DAT_100c464b0);
  FUN_100005808(&uStack_4a0,&DAT_100fc4020,&DAT_100c464a8);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x1003ee5f0 | FUN_1003ee5f0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001003ee77c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1003ee5f0(undefined8 *param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  NSColor *pNVar5;
  Color CVar6;
  Text TVar7;
  Font FVar8;
  Text TVar9;
  undefined8 *puVar10;
  Text TVar11;
  undefined *puVar12;
  Text TVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined1 auStack_1e0 [64];
  undefined6 uStack_1a0;
  undefined2 local_19a;
  undefined6 uStack_198;
  undefined2 uStack_192;
  undefined6 uStack_190;
  undefined2 local_18a;
  undefined6 uStack_188;
  undefined2 uStack_182;
  undefined6 uStack_180;
  undefined2 local_17a;
  undefined6 uStack_178;
  undefined2 uStack_172;
  undefined6 uStack_170;
  undefined2 uStack_16a;
  undefined8 uStack_168;
  undefined *local_160;
  undefined2 uStack_158;
  undefined6 uStack_156;
  undefined2 uStack_150;
  undefined6 uStack_14e;
  undefined2 uStack_148;
  undefined6 local_146;
  undefined2 uStack_140;
  undefined6 uStack_13e;
  undefined2 uStack_138;
  undefined6 local_136;
  undefined2 uStack_130;
  undefined6 uStack_12e;
  undefined2 uStack_128;
  undefined6 uStack_126;
  undefined *puStack_120;
  undefined2 local_118;
  undefined8 local_116;
  undefined8 uStack_10e;
  undefined8 local_106;
  undefined8 uStack_fe;
  undefined8 local_f6;
  undefined6 uStack_ee;
  undefined2 uStack_e8;
  undefined6 uStack_e6;
  undefined *local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1003d0b5c();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteCoreUI/SWCollaborationParticipantsView.swift",0x31,1,0x13,UVar3.unknown,pMVar1)
    ;
  }
  pNVar5 = (NSColor *)objc_stub::FUN_100c0ffc0((ID)&_OBJC_CLASS___NSColor);
  CVar6 = SwiftUI::Color::init(pNVar5);
  SwiftUI::Alignment::get_center((Alignment)CVar6.unknown);
  SwiftUI::_FrameLayout::_init((Alignment)0x4042000000000000);
  uStack_192 = (undefined2)uStack_98;
  uStack_190 = (undefined6)((ulong)uStack_98 >> 0x10);
  local_19a = (undefined2)local_a0;
  uStack_198 = (undefined6)((ulong)local_a0 >> 0x10);
  uStack_182 = (undefined2)uStack_88;
  uStack_180 = (undefined6)((ulong)uStack_88 >> 0x10);
  local_18a = (undefined2)uStack_90;
  uStack_188 = (undefined6)((ulong)uStack_90 >> 0x10);
  uStack_172 = (undefined2)uStack_78;
  uStack_170 = (undefined6)((ulong)uStack_78 >> 0x10);
  local_17a = (undefined2)local_80;
  uStack_178 = (undefined6)((ulong)local_80 >> 0x10);
  uStack_14e = uStack_198;
  uStack_148 = uStack_192;
  uStack_156 = uStack_1a0;
  uStack_150 = local_19a;
  uStack_10e = CONCAT26(uStack_192,uStack_198);
  local_116 = CONCAT26(local_19a,uStack_1a0);
  uStack_fe = CONCAT26(uStack_182,uStack_188);
  local_106 = CONCAT26(local_18a,uStack_190);
  uStack_13e = uStack_188;
  uStack_138 = uStack_182;
  local_146 = uStack_190;
  uStack_140 = local_18a;
  local_f6 = CONCAT26(local_17a,uStack_180);
  uStack_12e = uStack_178;
  local_136 = uStack_180;
  uStack_130 = local_17a;
  uStack_158 = 0x100;
  local_118 = 0x100;
  uStack_ee = uStack_178;
  uStack_e8 = uStack_172;
  puVar10 = (undefined8 *)&DAT_100c464b8;
  local_160 = CVar6.unknown;
  uStack_128 = uStack_172;
  uStack_126 = uStack_170;
  puStack_120 = CVar6.unknown;
  uStack_e6 = uStack_170;
  FUN_100011090(&local_160,&local_e0,&DAT_100fc4040);
  FUN_100005808(&puStack_120,&DAT_100fc4040,&DAT_100c464b8);
  FUN_1003ef104(param_3,param_4,param_5);
  local_e0 = param_3;
  uStack_d8 = param_4;
  FUN_1003eec98();
  puVar12 = PTR___type_metadata_for_Swift_String_100eac208;
  TVar7 = SwiftUI::Text::_init(param_3,PTR___type_metadata_for_Swift_String_100eac208,param_3);
  FVar8 = SwiftUI::Font::get_subheadline(TVar7.unknown);
  TVar13 = TVar7;
  puVar14 = puVar12;
  puVar15 = param_3;
  TVar9 = SwiftUI::Text::_font(FVar8.unknown);
  _swift_release(FVar8.unknown);
  FUN_100016d74(TVar7.unknown,puVar12,param_3);
  _swift_bridgeObjectRelease();
  FUN_1001fe25c();
  CVar6 = SwiftUI::Color::init((NSColor *)*puVar10);
  local_e0 = CVar6.unknown;
  FUN_1003ef554();
  TVar7 = TVar9;
  puVar12 = TVar13.unknown;
  puVar16 = puVar14;
  TVar11 = SwiftUI::Text::_foregroundStyle();
  FUN_100016d74(TVar9.unknown,TVar13.unknown,puVar14);
  _swift_release(CVar6.unknown);
  _swift_bridgeObjectRelease(puVar15);
  uStack_d8 = CONCAT62(uStack_156,uStack_158);
  uStack_c8 = CONCAT62(local_146,uStack_148);
  uStack_d0 = CONCAT62(uStack_14e,uStack_150);
  uStack_198 = (undefined6)uStack_d8;
  uStack_192 = (undefined2)((uint6)uStack_156 >> 0x20);
  uStack_1a0 = SUB86(local_160,0);
  local_19a = (undefined2)((ulong)local_160 >> 0x30);
  uStack_188 = (undefined6)uStack_c8;
  uStack_182 = (undefined2)((uint6)local_146 >> 0x20);
  uStack_190 = (undefined6)uStack_d0;
  local_18a = (undefined2)((uint6)uStack_14e >> 0x20);
  uStack_b8 = CONCAT62(local_136,uStack_138);
  local_c0 = CONCAT62(uStack_13e,uStack_140);
  uStack_168 = CONCAT62(uStack_126,uStack_128);
  uStack_b0 = CONCAT62(uStack_12e,uStack_130);
  uStack_178 = (undefined6)uStack_b8;
  uStack_172 = (undefined2)((uint6)local_136 >> 0x20);
  uStack_180 = (undefined6)local_c0;
  local_17a = (undefined2)((uint6)uStack_13e >> 0x20);
  uStack_170 = (undefined6)uStack_b0;
  uStack_16a = (undefined2)((uint6)uStack_12e >> 0x20);
  local_e0 = local_160;
  param_1[1] = uStack_d8;
  *param_1 = local_160;
  param_1[3] = uStack_c8;
  param_1[2] = uStack_d0;
  param_1[5] = uStack_b8;
  param_1[4] = local_c0;
  param_1[7] = uStack_168;
  param_1[6] = uStack_b0;
  param_1[8] = TVar11.unknown;
  param_1[9] = TVar7.unknown;
  *(char *)(param_1 + 10) = (char)puVar12;
  param_1[0xb] = puVar16;
  uStack_a8 = uStack_168;
  FUN_100011090(&local_e0,auStack_1e0,&DAT_100fc4040,&DAT_100c464b8);
  FUN_100016d5c(TVar11.unknown,TVar7.unknown,puVar12);
  _swift_bridgeObjectRetain(puVar16);
  FUN_100016d74(TVar11.unknown,TVar7.unknown,puVar12);
  _swift_bridgeObjectRelease(puVar16);
  FUN_100005808(&uStack_1a0,&DAT_100fc4040,&DAT_100c464b8);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x1003ee904 | FUN_1003ee904 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001003eea80 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1003ee904(undefined8 *param_1,undefined8 param_2,ulong param_3,char *param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  MainActor *pMVar2;
  MainActor *pMVar3;
  UnownedSerialExecutor UVar4;
  char *pcVar5;
  Text TVar6;
  Font FVar7;
  Text TVar8;
  Text TVar9;
  Text TVar10;
  HierarchicalShapeStyle HVar11;
  Text TVar12;
  undefined *puVar13;
  Text TVar14;
  undefined *puVar15;
  char *pcVar16;
  undefined *puVar17;
  char *pcVar18;
  undefined *puVar19;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  pMVar3 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  pMVar2 = pMVar3;
  FUN_1003d0b5c();
  UVar4 = Swift::Actor::get_unownedExecutor();
  pcVar5 = (char *)UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar5 & 1) == 0) {
    pcVar5 = "PasteCoreUI/SWCollaborationParticipantsView.swift";
    param_5 = 0x1d;
    _swift_task_reportUnexpectedExecutor
              ("PasteCoreUI/SWCollaborationParticipantsView.swift",0x31,1,0x1d,UVar4.unknown,pMVar2)
    ;
  }
  if (param_4 != (char *)0x0) {
    uVar1 = param_3 & 0xffffffffffff;
    if (((ulong)param_4 & 0x2000000000000000) != 0) {
      uVar1 = (ulong)param_4 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      _swift_bridgeObjectRetain();
      pcVar5 = param_4;
    }
  }
  FUN_1003eec98();
  puVar15 = PTR___type_metadata_for_Swift_String_100eac208;
  puVar13 = PTR___type_metadata_for_Swift_String_100eac208;
  pcVar16 = pcVar5;
  TVar6 = SwiftUI::Text::_init();
  FVar7 = SwiftUI::Font::get_body(TVar6.unknown);
  TVar14 = TVar6;
  puVar17 = puVar13;
  pcVar18 = pcVar16;
  TVar8 = SwiftUI::Text::_font(FVar7.unknown);
  HVar11.unknown = pcVar18;
  _swift_release(FVar7.unknown);
  FUN_100016d74(TVar6.unknown,puVar13,pcVar16);
  _swift_bridgeObjectRelease(param_5);
  FUN_1003260c0();
  TVar9 = SwiftUI::Text::_init(TVar8.unknown,puVar15,pcVar5);
  FVar7 = SwiftUI::Font::get_caption(TVar9.unknown);
  TVar6 = TVar9;
  puVar13 = puVar15;
  pcVar16 = pcVar5;
  TVar10 = SwiftUI::Text::_font(FVar7.unknown);
  _swift_release(FVar7.unknown);
  FUN_100016d74(TVar9.unknown,puVar15,pcVar5);
  _swift_bridgeObjectRelease();
  SwiftUI::HierarchicalShapeStyle::get_secondary(HVar11);
  FUN_1003eecd8();
  TVar9 = TVar10;
  puVar15 = TVar6.unknown;
  puVar19 = puVar13;
  TVar12 = SwiftUI::Text::_foregroundStyle();
  FUN_100016d74(TVar10.unknown,TVar6.unknown,puVar13);
  _swift_bridgeObjectRelease(pcVar16);
  *param_1 = TVar8.unknown;
  param_1[1] = TVar14.unknown;
  *(char *)(param_1 + 2) = (char)puVar17;
  param_1[3] = pcVar18;
  param_1[4] = TVar12.unknown;
  param_1[5] = TVar9.unknown;
  *(char *)(param_1 + 6) = (char)puVar15;
  param_1[7] = puVar19;
  FUN_100016d5c(TVar8.unknown,TVar14.unknown,(ulong)puVar17 & 0xffffffff);
  _swift_bridgeObjectRetain(pcVar18);
  FUN_100016d5c(TVar12.unknown,TVar9.unknown,puVar15);
  _swift_bridgeObjectRetain(puVar19);
  FUN_100016d74(TVar12.unknown,TVar9.unknown,puVar15);
  _swift_bridgeObjectRelease(puVar19);
  FUN_100016d74(TVar8.unknown,TVar14.unknown,(ulong)puVar17 & 0xffffffff);
  _swift_release(pMVar3);
  _swift_bridgeObjectRelease(pcVar18);
  return;
}



/* Address: 0x1003eebe4 | FUN_1003eebe4 */

void FUN_1003eebe4(void)

{
  undefined8 *unaff_x20;
  
  FUN_1003edb6c(*unaff_x20);
  return;
}



/* Address: 0x1003eebec | FUN_1003eebec */

undefined1  [16] FUN_1003eebec(void)

{
  return ZEXT816(0x100ed0aa0);
}



/* Address: 0x1003eebfc | thunk_FUN_1003eec00 */

void thunk_FUN_1003eec00(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_30;
  undefined *puStack_28;
  
  if (DAT_100fc3ff8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fc3ff0;
  FUN_100005c24(&DAT_100fc3ff0,&DAT_100c46408);
  puVar2 = &DAT_100fc4000;
  FUN_100016eac(&DAT_100fc4000,&DAT_100fc4008,&DAT_100c46490,
                PTR_SwiftUI__SwiftUI__VStack<undefined>_>SwiftUI__View_100eab938);
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__PaddingLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa8c8
  ;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  puStack_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&puStack_30);
  DAT_100fc3ff8 = puVar3;
  return;
}



/* Address: 0x1003eec00 | FUN_1003eec00 */

void FUN_1003eec00(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fc3ff8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fc3ff0;
  FUN_100005c24(&DAT_100fc3ff0,&DAT_100c46408);
  puVar2 = &DAT_100fc4000;
  FUN_100016eac(&DAT_100fc4000,&DAT_100fc4008,&DAT_100c46490,
                PTR_SwiftUI__SwiftUI__VStack<undefined>_>SwiftUI__View_100eab938);
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__PaddingLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa8c8
  ;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fc3ff8 = puVar3;
  return;
}



/* Address: 0x1003eec98 | FUN_1003eec98 */

void FUN_1003eec98(void)

{
  undefined *puVar1;
  
  if (DAT_100fc4030 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Swift__Swift__String_>Swift__StringProtocol_100eac258;
  _swift_getWitnessTable
            (PTR_Swift__Swift__String_>Swift__StringProtocol_100eac258,
             PTR___type_metadata_for_Swift_String_100eac208);
  DAT_100fc4030 = puVar1;
  return;
}



/* Address: 0x1003eecd8 | FUN_1003eecd8 */

void FUN_1003eecd8(void)

{
  undefined *puVar1;
  
  if (DAT_100fc4038 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_SwiftUI__SwiftUI__HierarchicalShapeStyle_>SwiftUI__ShapeStyle_100eaaee0;
  _swift_getWitnessTable
            (PTR_SwiftUI__SwiftUI__HierarchicalShapeStyle_>SwiftUI__ShapeStyle_100eaaee0,
             PTR___type_metadata_for_SwiftUI_HierarchicalShapeStyle_100eaaef0);
  DAT_100fc4038 = puVar1;
  return;
}



/* Address: 0x1003eed18 | FUN_1003eed18 */

UnsafeMutablePointer
FUN_1003eed18(long param_1,ulong param_2,code *param_3,undefined8 param_4,char *param_5,
             void *param_6)

{
  long *plVar1;
  code *pcVar2;
  ulong uVar3;
  Index after;
  Substring SVar4;
  undefined *puVar5;
  undefined *puVar6;
  Index IVar7;
  void *pvVar9;
  uint uVar10;
  ulong uVar11;
  Index IVar12;
  long unaff_x21;
  ulong uVar13;
  Character CVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  undefined *local_80;
  char *pcVar8;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1003ef09c);
    (*pcVar2)();
  }
  uVar11 = (ulong)param_6 >> 0x38 & 0xf;
  uVar10 = (uint)((ulong)param_5 >> 0x20);
  if (param_1 != 0) {
    uVar13 = (ulong)param_5 & 0xffffffffffff;
    if (((ulong)param_6 & 0x2000000000000000) != 0) {
      uVar13 = uVar11;
    }
    if (uVar13 != 0) {
      uVar10 = uVar10 >> 0x1b & 1;
      if (((ulong)param_6 & 0x1000000000000000) == 0) {
        uVar10 = 1;
      }
      uVar11 = 7;
      if (uVar10 == 0) {
        uVar11 = 0xb;
      }
      SVar20.str = (char *)(uVar11 | uVar13 << 0x10);
      uVar13 = uVar13 * 4;
      IVar12.cmsgPointer.unknown = (UnsafeMutablePointer)(undefined *)0xf;
      local_80 = PTR___swiftEmptyArrayStorage_100eae0d8;
LAB_1003eeda0:
      uVar11 = (ulong)IVar12.cmsgPointer.unknown >> 0xe;
      after.cmsgPointer.unknown = IVar12.cmsgPointer.unknown;
      if (uVar11 != uVar13) {
        do {
          SVar15.bridgeObject = param_6;
          SVar15.str = param_5;
          CVar14 = Swift::String::get_subscript(after,SVar15);
          uVar3 = 0;
          (*param_3)();
          if (unaff_x21 != 0) {
            _swift_bridgeObjectRelease(local_80);
            _swift_bridgeObjectRelease(param_6);
            _swift_bridgeObjectRelease(CVar14.bridgeObject);
            return (UnsafeMutablePointer)after.cmsgPointer.unknown.unknown;
          }
          _swift_bridgeObjectRelease(CVar14.bridgeObject);
          if ((uVar3 & 1) == 0) {
            SVar16.bridgeObject = param_6;
            SVar16.str = param_5;
            after = Swift::String::index(after,SVar16);
          }
          else {
            if (((ulong)IVar12.cmsgPointer.unknown >> 0xe != uVar11) || ((param_2 & 1) == 0))
            goto LAB_1003eee5c;
            SVar17.bridgeObject = param_6;
            SVar17.str = param_5;
            after = Swift::String::index(after,SVar17);
            IVar12 = after;
          }
          uVar11 = (ulong)after.cmsgPointer.unknown >> 0xe;
          if (uVar11 == uVar13) break;
        } while( true );
      }
      goto LAB_1003eefe8;
    }
  }
  uVar13 = (ulong)param_5 & 0xffffffffffff;
  if (((ulong)param_6 & 0x2000000000000000) != 0) {
    uVar13 = uVar11;
  }
  if ((uVar13 == 0) && ((param_2 & 1) != 0)) {
    _swift_bridgeObjectRelease(param_6);
    return (UnsafeMutablePointer)PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  uVar10 = uVar10 >> 0x1b & 1;
  if (((ulong)param_6 & 0x1000000000000000) == 0) {
    uVar10 = 1;
  }
  uVar11 = 7;
  if (uVar10 == 0) {
    uVar11 = 0xb;
  }
  SVar20.str = (char *)(uVar11 | uVar13 << 0x10);
  SVar20.bridgeObject = param_5;
  pvVar9 = param_6;
  SVar4 = Swift::String::get_subscript((Range<Index>)0xf,SVar20);
  puVar6 = (undefined *)0x0;
  FUN_1003f9824(0,1,1,PTR___swiftEmptyArrayStorage_100eae0d8);
  uVar11 = *(ulong *)(puVar6 + 0x10);
  local_80 = puVar6;
  if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar11) {
    local_80 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
    FUN_1003f9824(local_80,uVar11 + 1,1,puVar6);
  }
  *(ulong *)(local_80 + 0x10) = uVar11 + 1;
  *(undefined **)(local_80 + uVar11 * 0x20 + 0x20) = SVar4.unknown;
  *(char **)(local_80 + uVar11 * 0x20 + 0x28) = SVar20.str;
  *(char **)(local_80 + uVar11 * 0x20 + 0x30) = param_5;
  *(void **)(local_80 + uVar11 * 0x20 + 0x38) = pvVar9;
LAB_1003eeffc:
  _swift_bridgeObjectRelease(param_6);
  return (UnsafeMutablePointer)local_80;
LAB_1003eee5c:
  if (uVar11 < (ulong)IVar12.cmsgPointer.unknown >> 0xe) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1003ef104);
    (*pcVar2)();
  }
  SVar18.bridgeObject = param_5;
  SVar18.str = (char *)after.cmsgPointer.unknown;
  IVar7.cmsgPointer.unknown = after.cmsgPointer.unknown;
  pcVar8 = param_5;
  pvVar9 = param_6;
  SVar4 = Swift::String::get_subscript((Range<Index>)IVar12.cmsgPointer.unknown,SVar18);
  puVar6 = local_80;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar6 & 1) == 0) {
    plVar1 = (long *)(local_80 + 0x10);
    local_80 = (undefined *)0x0;
    FUN_1003f9824(0,*plVar1 + 1,1);
  }
  uVar11 = *(ulong *)(local_80 + 0x10);
  if (*(ulong *)(local_80 + 0x18) >> 1 <= uVar11) {
    puVar6 = (undefined *)(ulong)(1 < *(ulong *)(local_80 + 0x18));
    FUN_1003f9824(puVar6,uVar11 + 1,1,local_80);
    local_80 = puVar6;
  }
  *(ulong *)(local_80 + 0x10) = uVar11 + 1;
  *(undefined **)(local_80 + uVar11 * 0x20 + 0x20) = SVar4.unknown;
  *(UnsafeMutablePointer *)(local_80 + uVar11 * 0x20 + 0x28) = IVar7.cmsgPointer.unknown;
  *(char **)(local_80 + uVar11 * 0x20 + 0x30) = pcVar8;
  *(void **)(local_80 + uVar11 * 0x20 + 0x38) = pvVar9;
  SVar19.bridgeObject = param_6;
  SVar19.str = param_5;
  IVar12 = Swift::String::index(after,SVar19);
  if (*(long *)(local_80 + 0x10) == param_1) goto LAB_1003eefe8;
  goto LAB_1003eeda0;
LAB_1003eefe8:
  if (((ulong)IVar12.cmsgPointer.unknown >> 0xe != uVar13) || ((param_2 & 1) == 0)) {
    if ((ulong)IVar12.cmsgPointer.unknown >> 0xe <= uVar13) {
      SVar21.bridgeObject = param_5;
      SVar21.str = SVar20.str;
      pvVar9 = param_6;
      SVar4 = Swift::String::get_subscript((Range<Index>)IVar12.cmsgPointer.unknown,SVar21);
      _swift_bridgeObjectRelease(param_6);
      puVar6 = local_80;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar5 = local_80;
      if (((ulong)puVar6 & 1) == 0) {
        puVar5 = (undefined *)0x0;
        FUN_1003f9824(0,*(long *)(local_80 + 0x10) + 1,1,local_80);
      }
      uVar11 = *(ulong *)(puVar5 + 0x10);
      puVar6 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar11) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
        FUN_1003f9824(puVar6,uVar11 + 1,1,puVar5);
      }
      *(ulong *)(puVar6 + 0x10) = uVar11 + 1;
      *(undefined **)(puVar6 + uVar11 * 0x20 + 0x20) = SVar4.unknown;
      *(char **)(puVar6 + uVar11 * 0x20 + 0x28) = SVar20.str;
      *(char **)(puVar6 + uVar11 * 0x20 + 0x30) = param_5;
      *(void **)(puVar6 + uVar11 * 0x20 + 0x38) = pvVar9;
      return (UnsafeMutablePointer)puVar6;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1003ef0c0);
    (*pcVar2)();
  }
  goto LAB_1003eeffc;
}



/* Address: 0x1003ef104 | FUN_1003ef104 */

/* WARNING: Type propagation algorithm not settling */

String FUN_1003ef104(ulong param_1,undefined1 *param_2,char param_3)

{
  ulong uVar1;
  Index IVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  code *pcVar6;
  long lVar7;
  MainActor *pMVar8;
  MainActor *pMVar9;
  UnownedSerialExecutor UVar10;
  UnownedSerialExecutor UVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  MainActor *pMVar15;
  MainActor *pMVar16;
  ulong uVar17;
  undefined8 *puVar18;
  Character CVar19;
  String SVar20;
  undefined *local_90;
  MainActor *pMStack_88;
  undefined **local_80;
  undefined *local_70;
  undefined8 uStack_68;
  
  if (param_2 != (undefined1 *)0x0) {
    uVar1 = param_1 & 0xffffffffffff;
    if (((ulong)param_2 & 0x2000000000000000) != 0) {
      uVar1 = (ulong)param_2 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      _swift_bridgeObjectRetain(param_2);
      goto LAB_1003ef180;
    }
  }
  param_1 = 0x72656e774f;
  if (param_3 != '\0') {
    param_1 = 0x6e776f6e6b6e55;
  }
  param_2 = &DAT_e500000000000000;
  if (param_3 != '\0') {
    param_2 = &DAT_e700000000000000;
  }
LAB_1003ef180:
  local_70 = (undefined *)0x20;
  uStack_68 = 0xe100000000000000;
  local_80 = &local_70;
  lVar7 = 0x7fffffffffffffff;
  FUN_1003eed18(0x7fffffffffffffff,1,FUN_1000f64a4,&local_90,param_1,param_2);
  uVar17 = *(ulong *)(lVar7 + 0x10);
  uVar1 = uVar17;
  if (1 < uVar17) {
    uVar1 = 2;
  }
  puVar14 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar17 != 0) {
    uVar17 = 0;
    do {
      uVar3 = uVar17;
      if (uVar17 <= uVar1) {
        uVar3 = uVar1;
      }
      puVar18 = (undefined8 *)(lVar7 + 0x38 + uVar17 * 0x20);
      uVar17 = uVar17 + 1;
      while( true ) {
        if (uVar17 - uVar3 == 1) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1003ef554);
          (*pcVar6)();
        }
        IVar2.cmsgPointer.unknown =
             (UnsafeMutablePointer)((UnsafeMutablePointer *)(puVar18 + -3))->unknown;
        uVar4 = puVar18[-2];
        pMVar15 = (MainActor *)*puVar18;
        pMVar8 = Swift::MainActor::typeMetadataAccessor();
        pMVar9 = pMVar15;
        _swift_bridgeObjectRetain();
        pMVar8 = Swift::MainActor::get_shared(pMVar8,pMVar9);
        pMVar9 = pMVar8;
        FUN_1003d0b5c();
        UVar10 = Swift::Actor::get_unownedExecutor();
        UVar11 = UVar10;
        _swift_task_isCurrentExecutor();
        if (((ulong)UVar11.unknown & 1) == 0) {
          _swift_task_reportUnexpectedExecutor
                    ("PasteCoreUI/SWCollaborationParticipantsView.swift",0x31,1,0x42,UVar10.unknown,
                     pMVar9);
        }
        if ((uVar4 ^ (ulong)IVar2.cmsgPointer.unknown) >> 0xe != 0) break;
        _swift_release(pMVar8);
        _swift_bridgeObjectRelease(pMVar15);
        uVar17 = uVar17 + 1;
        puVar18 = puVar18 + 4;
        if (uVar17 - uVar1 == 1) goto LAB_1003ef378;
      }
      CVar19 = Swift::Substring::get_subscript(IVar2,(Substring)IVar2.cmsgPointer.unknown);
      SVar20 = Swift::Character::uppercased(CVar19);
      _swift_release(pMVar8);
      _swift_bridgeObjectRelease(CVar19.bridgeObject);
      _swift_bridgeObjectRelease(pMVar15);
      puVar12 = puVar14;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar13 = puVar14;
      if (((ulong)puVar12 & 1) == 0) {
        puVar13 = (undefined *)0x0;
        FUN_1003f9704(0,*(long *)(puVar14 + 0x10) + 1,1,puVar14);
      }
      uVar3 = *(ulong *)(puVar13 + 0x10);
      puVar14 = puVar13;
      if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar3) {
        puVar14 = (undefined *)(ulong)(1 < *(ulong *)(puVar13 + 0x18));
        FUN_1003f9704(puVar14,uVar3 + 1,1,puVar13);
      }
      *(ulong *)(puVar14 + 0x10) = uVar3 + 1;
      *(String *)(puVar14 + uVar3 * 0x10 + 0x20) = SVar20;
    } while (uVar17 != uVar1);
  }
LAB_1003ef378:
  _swift_bridgeObjectRelease(lVar7);
  lVar7 = *(long *)(puVar14 + 0x10);
  if (lVar7 == 0) {
    _swift_bridgeObjectRelease(puVar14);
    puVar12 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    local_70 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_1003f9484(0,lVar7,0);
    pMVar15 = Swift::MainActor::typeMetadataAccessor();
    puVar13 = PTR___protocol_witness_table_for_Swift_String___Swift_Sequence_in_Swift_100eac238;
    puVar18 = (undefined8 *)(puVar14 + 0x28);
    do {
      puVar5 = local_70;
      puVar12 = (undefined *)puVar18[-1];
      pMVar9 = (MainActor *)*puVar18;
      pMVar8 = pMVar9;
      _swift_bridgeObjectRetain();
      pMVar16 = Swift::MainActor::get_shared(pMVar15,pMVar8);
      pMVar8 = pMVar16;
      FUN_1003d0b5c();
      UVar10 = Swift::Actor::get_unownedExecutor();
      UVar11 = UVar10;
      _swift_task_isCurrentExecutor();
      if (((ulong)UVar11.unknown & 1) == 0) {
        _swift_task_reportUnexpectedExecutor
                  ("PasteCoreUI/SWCollaborationParticipantsView.swift",0x31,1,0x43,UVar10.unknown,
                   pMVar8);
      }
      local_90 = puVar12;
      pMStack_88 = pMVar9;
      SVar20 = Swift::String::_init
                         (&local_90,PTR___type_metadata_for_Swift_String_100eac208,
                          PTR___protocol_witness_table_for_Swift_String___Swift_LosslessStringConvertible_in_Swift_100eac270
                          ,puVar13);
      _swift_release(pMVar16);
      uVar1 = *(ulong *)(puVar5 + 0x10);
      local_70 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar1) {
        FUN_1003f9484(1 < *(ulong *)(puVar5 + 0x18),uVar1 + 1,1);
      }
      puVar12 = local_70;
      puVar18 = puVar18 + 2;
      *(ulong *)(local_70 + 0x10) = uVar1 + 1;
      *(String *)(local_70 + uVar1 * 0x10 + 0x20) = SVar20;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    _swift_bridgeObjectRelease(puVar14);
  }
  local_90 = puVar12;
  FUN_1000037f0(&DAT_100fc39b8,&DAT_100c46040);
  FUN_100016eac(&DAT_100fc39c0,&DAT_100fc39b8,&DAT_100c46040,
                PTR_Swift__Swift__Array<undefined>_>Swift__BidirectionalCollection_100eac518);
  SVar20 = (extension_Swift)::Swift::BidirectionalCollection::_joined
                     ((String)(ZEXT816(0xe000000000000000) << 0x40));
  _swift_bridgeObjectRelease(puVar12);
  return SVar20;
}



/* Address: 0x1003ef554 | FUN_1003ef554 */

void FUN_1003ef554(void)

{
  undefined *puVar1;
  
  if (DAT_100fc4048 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_SwiftUI__SwiftUI__Color_>SwiftUI__ShapeStyle_100eab700;
  _swift_getWitnessTable
            (PTR_SwiftUI__SwiftUI__Color_>SwiftUI__ShapeStyle_100eab700,
             PTR___type_metadata_for_SwiftUI_Color_100eab718);
  DAT_100fc4048 = puVar1;
  return;
}



/* Address: 0x1003ef594 | FUN_1003ef594 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1003ef594(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *self;
  ID IVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_80 [16];
  ID local_70;
  
  _swift_getObjectType();
  lVar1 = _TtCCCO11PasteCoreUI7Sidecar14CollectionView17CollaborationCell16ParticipantsView::
          imageView;
  self = &_OBJC_CLASS___NSImageView;
  _objc_allocWithZone();
  IVar2 = objc_stub::init((ID)self);
  *(ID *)(unaff_x20 + lVar1) = IVar2;
  *(undefined **)
   (unaff_x20 +
   _TtCCCO11PasteCoreUI7Sidecar14CollectionView17CollaborationCell16ParticipantsView::participants)
       = PTR___swiftEmptyArrayStorage_100eae0d8;
  *(undefined8 *)
   (unaff_x20 +
   _TtCCCO11PasteCoreUI7Sidecar14CollectionView17CollaborationCell16ParticipantsView::iconSize) =
       0x403c000000000000;
  IVar2 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffa0,"initWithFrame:",param_1,
                              param_2,param_3,param_4);
  uVar3 = *(undefined8 *)
           (IVar2 + _TtCCCO11PasteCoreUI7Sidecar14CollectionView17CollaborationCell16ParticipantsView
                    ::imageView);
  local_70 = IVar2;
  FUN_1001fa09c(uVar3,FUN_1003ef9f0,auStack_80);
  _swift_bridgeObjectRelease(uVar3);
  return IVar2;
}



/* Address: 0x1003ef69c | FUN_1003ef69c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_1003ef69c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *local_78 [3];
  undefined8 *local_60;
  undefined **ppuStack_58;
  
  puVar1 = param_1;
  _swift_getObjectType();
  ppuStack_58 = &PTR_PTR_100ec00e8;
  local_78[0] = param_1;
  local_60 = puVar1;
  FUN_1001f9774();
  uVar7 = *param_1;
  uVar8 = param_1[1];
  uVar9 = param_1[2];
  uVar10 = param_1[3];
  uVar2 = 0;
  FUN_1003e3f94(0);
  ppuVar3 = local_78;
  FUN_1001f97b4(uVar7,uVar8,uVar9,uVar10,ppuVar3,uVar2,&PTR_PTR_100ec00e8);
  FUN_100004594(local_78);
  puVar4 = &DAT_100fc3b00;
  FUN_1000037f0(&DAT_100fc3b00,&DAT_100c45590);
  _swift_initStackObject();
  *(undefined8 *)(puVar4 + 0x18) = 2;
  *(undefined8 *)(puVar4 + 0x10) = 1;
  puVar5 = &DAT_100fc3e70;
  FUN_1000037f0(&DAT_100fc3e70,&DAT_100c45d60);
  *(undefined **)(puVar4 + 0x38) = puVar5;
  *(undefined ***)(puVar4 + 0x40) = &PTR_PTR_100ec00b8;
  *(undefined8 ***)(puVar4 + 0x20) = ppuVar3;
  puVar6 = puVar4;
  FUN_1001f8d60(puVar4);
  _swift_setDeallocating(puVar4);
  uVar2 = *(undefined8 *)(puVar4 + 0x10);
  puVar5 = &DAT_100fc3b10;
  FUN_1000037f0(&DAT_100fc3b10,&DAT_100c455a0);
  _swift_arrayDestroy(puVar4 + 0x20,uVar2,puVar5);
  return puVar6;
}



/* Address: 0x1003ef7d4 | _TtCCCO11PasteCoreUI7Sidecar14CollectionView17CollaborationCell16ParticipantsView::initWithFrame: */

/* Function Stack Size: 0x30 bytes */

ID __thiscall
_TtCCCO11PasteCoreUI7Sidecar14CollectionView17CollaborationCell16ParticipantsView::initWithFrame_
          (_TtCCCO11PasteCoreUI7Sidecar14CollectionView17CollaborationCell16ParticipantsView *this,
          ID param_1,SEL param_2,CGRect param_3)

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
    pcVar4 = "PasteCoreUI/Sidecar.CollaborationCell.ParticipantsView.swift";
    _swift_task_reportUnexpectedExecutor
              ("PasteCoreUI/Sidecar.CollaborationCell.ParticipantsView.swift",0x3c,1,0x11,
               UVar3.unknown,pMVar1);
  }
  FUN_1003ef594();
  _swift_release(pMVar2);
  return (ID)pcVar4;
}



/* Address: 0x1003ef89c | _TtCCCO11PasteCoreUI7Sidecar14CollectionView17CollaborationCell16ParticipantsView::initWithCoder: */

/* Function Stack Size: 0x18 bytes */

ID _TtCCCO11PasteCoreUI7Sidecar14CollectionView17CollaborationCell16ParticipantsView::initWithCoder_
             (ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  code *pcVar2;
  MainActor *pMVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  undefined *self;
  ID IVar6;
  String SVar7;
  
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  FUN_1003d0b5c();
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteCoreUI/Sidecar.CollaborationCell.ParticipantsView.swift",0x3c,1,0x1a,
               UVar4.unknown,pMVar3);
  }
  lVar1 = imageView;
  self = &_OBJC_CLASS___NSImageView;
  _objc_allocWithZone();
  IVar6 = objc_stub::init((ID)self);
  *(ID *)(param_1 + lVar1) = IVar6;
  *(undefined **)(param_1 + participants) = PTR___swiftEmptyArrayStorage_100eae0d8;
  *(undefined8 *)(param_1 + iconSize) = 0x403c000000000000;
  SVar7.bridgeObject = (void *)0x2;
  SVar7.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar7,(StaticString)0xd000000000000025,0x8000000100d8dc00,
             0xda58b0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1003ef998);
  (*pcVar2)();
}



/* Address: 0x1003ef998 | _TtCCCO11PasteCoreUI7Sidecar14CollectionView17CollaborationCell16ParticipantsView::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtCCCO11PasteCoreUI7Sidecar14CollectionView17CollaborationCell16ParticipantsView::
     _cxx_destruct(ID param_1,SEL param_2)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + participants));
  return;
}



/* Address: 0x1003ef9d0 | FUN_1003ef9d0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1003ef9d0(void)

{
  return ZEXT816(0x100f9b4e8);
}



/* Address: 0x1003ef9f0 | FUN_1003ef9f0 */

void FUN_1003ef9f0(void)

{
  long unaff_x20;
  
  FUN_1003ef69c(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1003ef9f8 | FUN_1003ef9f8 */

undefined1  [16] FUN_1003ef9f8(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x30);
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 0x38));
  return auVar1;
}



/* Address: 0x1003efa24 | FUN_1003efa24 */

void FUN_1003efa24(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Address: 0x1003efa2c | FUN_1003efa2c */

void FUN_1003efa2c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  param_1[4] = param_6;
  param_1[5] = param_7;
  param_1[6] = param_8;
  param_1[7] = param_9;
  param_1[9] = param_11;
  param_1[8] = param_10;
  param_1[10] = param_12;
  return;
}



/* Address: 0x1003efa50 | FUN_1003efa50 */

void FUN_1003efa50(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_1003efa8c();
  FUN_1000c495c(unaff_x20 + *(int *)(lVar1 + 0x20),param_1,FUN_1003efaa0);
  return;
}



/* Address: 0x1003efa8c | FUN_1003efa8c */

void FUN_1003efa8c(undefined8 param_1)

{
  FUN_1000c99e4(param_1,&DAT_100fc4150,&TargetStructDescriptor_100caeb28);
  return;
}



/* Address: 0x1003efaa0 | FUN_1003efaa0 */

void FUN_1003efaa0(undefined8 param_1)

{
  FUN_1000c99e4(param_1,&DAT_100fc41f8,&TargetStructDescriptor_100caeb50);
  return;
}



/* Address: 0x1003efab4 | FUN_1003efab4 */

void FUN_1003efab4(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_1003efa8c();
  FUN_1003efae4(unaff_x20 + *(int *)(lVar1 + 0x24),param_1);
  return;
}



/* Address: 0x1003efae4 | FUN_1003efae4 */

undefined8 FUN_1003efae4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fc4090;
  FUN_1000037f0(&DAT_100fc4090,&DAT_100c464e0);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1003efb34 | FUN_1003efb34 */

void FUN_1003efb34(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  long lVar1;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  param_1[4] = param_6;
  param_1[5] = param_7;
  param_1[6] = param_8;
  param_1[7] = param_9;
  lVar1 = 0;
  FUN_1003efa8c();
  FUN_1003efb94(param_10,(long)param_1 + (long)*(int *)(lVar1 + 0x20));
  FUN_1003efbd8(param_11,(long)param_1 + (long)*(int *)(lVar1 + 0x24));
  return;
}



/* Address: 0x1003efb94 | FUN_1003efb94 */

undefined8 FUN_1003efb94(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1003efaa0();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Address: 0x1003efbd8 | FUN_1003efbd8 */

undefined8 FUN_1003efbd8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fc4090;
  FUN_1000037f0(&DAT_100fc4090,&DAT_100c464e0);
  (**(code **)(*(long *)(puVar1 + -8) + 0x20))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1003efc28 | FUN_1003efc28 */

undefined1  [16] FUN_1003efc28(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  byte bVar5;
  undefined1 *puVar6;
  byte *unaff_x20;
  undefined1 auVar7 [16];
  
  bVar5 = *unaff_x20;
  puVar3 = (undefined1 *)0xed00006e6f697463;
  puVar1 = (undefined1 *)0x417972616d697270;
  if (bVar5 != 4) {
    puVar3 = (undefined1 *)0xef6e6f6974634179;
    puVar1 = (undefined1 *)0x7261646e6f636573;
  }
  puVar4 = &DAT_eb000000006e6f69;
  puVar6 = (undefined1 *)0x7470697263736564;
  if (bVar5 != 3) {
    puVar4 = puVar3;
    puVar6 = puVar1;
  }
  puVar3 = (undefined1 *)0x6c6f626d7973;
  if (bVar5 != 1) {
    puVar3 = (undefined1 *)0x656c746974;
  }
  puVar1 = &DAT_e600000000000000;
  if (bVar5 != 1) {
    puVar1 = &DAT_e500000000000000;
  }
  puVar2 = &SUB_00006469;
  if (bVar5 != 0) {
    puVar2 = puVar3;
  }
  puVar3 = &SUB_e200000000000000;
  if (bVar5 != 0) {
    puVar3 = puVar1;
  }
  if (bVar5 < 3) {
    puVar4 = puVar3;
    puVar6 = puVar2;
  }
  auVar7._8_8_ = puVar4;
  auVar7._0_8_ = puVar6;
  return auVar7;
}



/* Address: 0x1003efcf0 | FUN_1003efcf0 */

void FUN_1003efcf0(undefined1 *param_1,undefined1 param_2)

{
  FUN_1003f20a8();
  *param_1 = param_2;
  return;
}



/* Address: 0x1003efd14 | FUN_1003efd14 */

void FUN_1003efd14(undefined1 *param_1)

{
  *param_1 = 6;
  return;
}



/* Address: 0x1003efd20 | FUN_1003efd20 */

String FUN_1003efd20(void)

{
  String SVar1;
  
  FUN_1003eff8c();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x1003efd48 | FUN_1003efd48 */

String FUN_1003efd48(void)

{
  String SVar1;
  
  FUN_1003eff8c();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x1003efd70 | FUN_1003efd70 */

void FUN_1003efd70(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar6;
  undefined1 local_56;
  undefined1 local_55;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar2 = &DAT_100fc4098;
  FUN_1000037f0(&DAT_100fc4098,&DAT_100c464e8);
  lVar6 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_1003eff8c();
  Swift::Encoder::_container();
  uVar4 = *unaff_x20;
  local_51 = 0;
  Swift::KeyedEncodingContainer::_encode(uVar4,unaff_x20[1],&local_51,puVar2);
  if (unaff_x21 == 0) {
    local_52 = 1;
    FUN_1003effcc();
    Swift::KeyedEncodingContainer::_encode(unaff_x20 + 2,&local_52,puVar2,&DAT_100ec16c8,uVar4);
    local_53 = 2;
    Swift::KeyedEncodingContainer::_encode(unaff_x20[4],unaff_x20[5],&local_53,puVar2);
    local_54 = 3;
    Swift::KeyedEncodingContainer::_encodeIfPresent(unaff_x20[6],unaff_x20[7],&local_54,puVar2);
    lVar3 = 0;
    FUN_1003efa8c();
    iVar1 = *(int *)(lVar3 + 0x20);
    local_55 = 4;
    uVar4 = 0;
    FUN_1003efaa0(0);
    puVar5 = &DAT_100fc40b0;
    FUN_100003a00(&DAT_100fc40b0,FUN_1003efaa0,&TargetProtocolConformanceDescriptor_100c465d8);
    Swift::KeyedEncodingContainer::_encode
              ((long)unaff_x20 + (long)iVar1,&local_55,puVar2,uVar4,puVar5);
    local_56 = 5;
    Swift::KeyedEncodingContainer::_encodeIfPresent
              ((long)unaff_x20 + (long)*(int *)(lVar3 + 0x24),&local_56,puVar2,uVar4,puVar5);
  }
  (**(code **)(lVar6 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,puVar2);
  return;
}



/* Address: 0x1003eff8c | FUN_1003eff8c */

void FUN_1003eff8c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc40a0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4685c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4685c,&DAT_100ed0d08);
  DAT_100fc40a0 = pTVar1;
  return;
}



/* Address: 0x1003effcc | FUN_1003effcc */

void FUN_1003effcc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc40a8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c36150;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c36150,&DAT_100ec16c8);
  DAT_100fc40a8 = pTVar1;
  return;
}



/* Address: 0x1003f000c | FUN_1003f000c */

/* WARNING: Removing unreachable block (ram,0x0001003f026c) */
/* WARNING: Removing unreachable block (ram,0x0001003f0218) */
/* WARNING: Removing unreachable block (ram,0x0001003f02b0) */
/* WARNING: Removing unreachable block (ram,0x0001003f01a0) */
/* WARNING: Removing unreachable block (ram,0x0001003f0324) */
/* WARNING: Removing unreachable block (ram,0x0001003f0380) */
/* WARNING: Removing unreachable block (ram,0x0001003f0398) */
/* WARNING: Removing unreachable block (ram,0x0001003f03cc) */
/* WARNING: Removing unreachable block (ram,0x0001003f03b8) */
/* WARNING: Removing unreachable block (ram,0x0001003f03bc) */
/* WARNING: Removing unreachable block (ram,0x0001003f03c8) */
/* WARNING: Removing unreachable block (ram,0x0001003f03d8) */
/* WARNING: Removing unreachable block (ram,0x0001003f03dc) */

void FUN_1003f000c(undefined8 param_1,long param_2)

{
  void *pvVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar6;
  long unaff_x21;
  String *pSVar7;
  long lVar8;
  String SVar9;
  String SStack_b0;
  char *local_a0;
  void *local_98;
  String local_90;
  void *local_78;
  char local_70;
  undefined7 uStack_6f;
  void *pvStack_68;
  undefined1 local_51;
  
  puVar2 = &DAT_100fc4090;
  local_a0 = (char *)param_1;
  FUN_1000037f0(&DAT_100fc4090,&DAT_100c464e0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  local_98 = (void *)((long)&SStack_b0 - extraout_x8);
  FUN_1003efaa0();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar8 = ((long)&SStack_b0 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100fc40b8;
  FUN_1000037f0(&DAT_100fc40b8,&DAT_100c464f0);
  lVar6 = *(long *)(puVar2 + -8);
  local_90.bridgeObject = puVar2;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  FUN_1003efa8c();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  pSVar7 = (String *)((lVar8 - extraout_x8_01) - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  local_78 = (void *)param_2;
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_1003eff8c();
  local_90.str = (char *)(lVar8 - extraout_x8_01);
  Swift::Decoder::_container();
  pvVar1 = local_98;
  if (unaff_x21 == 0) {
    local_70 = '\0';
    SVar9 = Swift::KeyedDecodingContainer::_decode(&local_70,local_90.bridgeObject);
    pcVar5 = SVar9.str;
    *pSVar7 = SVar9;
    local_51 = 1;
    FUN_1003f0444();
    Swift::KeyedDecodingContainer::_decode
              (&local_70,&DAT_100ec16c8,&local_51,local_90.bridgeObject,&DAT_100ec16c8,pcVar5);
    pSVar7[1].str = (char *)CONCAT71(uStack_6f,local_70);
    pSVar7[1].bridgeObject = pvStack_68;
    local_70 = '\x02';
    SVar9 = Swift::KeyedDecodingContainer::_decode(&local_70,local_90.bridgeObject);
    pSVar7[2] = SVar9;
    local_70 = '\x03';
    pcVar5 = &local_70;
    puVar2 = local_90.bridgeObject;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    pSVar7[3].str = pcVar5;
    pSVar7[3].bridgeObject = puVar2;
    local_70 = '\x04';
    puVar2 = &DAT_100fc40c8;
    FUN_100003a00(&DAT_100fc40c8,FUN_1003efaa0,&TargetProtocolConformanceDescriptor_100c465b0);
    Swift::KeyedDecodingContainer::_decode(lVar8,lVar3,&local_70,local_90.bridgeObject,lVar3,puVar2)
    ;
    FUN_1003efb94(lVar8,(long)&pSVar7->str + (long)*(int *)(lVar4 + 0x20));
    pcVar5 = local_90.str;
    local_70 = '\x05';
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (pvVar1,lVar3,&local_70,local_90.bridgeObject,lVar3,puVar2);
    (**(code **)(lVar6 + 8))(pcVar5,local_90.bridgeObject);
    FUN_1003efbd8(pvVar1,(long)&pSVar7->str + (long)*(int *)(lVar4 + 0x24));
    FUN_1000c495c(pSVar7,local_a0,FUN_1003efa8c);
    FUN_100004594(local_78);
    FUN_10005241c(pSVar7,FUN_1003efa8c);
  }
  else {
    FUN_100004594(local_78);
  }
  return;
}



/* Address: 0x1003f0444 | FUN_1003f0444 */

void FUN_1003f0444(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc40c0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c36128;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c36128,&DAT_100ec16c8);
  DAT_100fc40c0 = pTVar1;
  return;
}



/* Address: 0x1003f0484 | FUN_1003f0484 */

void FUN_1003f0484(void)

{
  FUN_1003f000c();
  return;
}



/* Address: 0x1003f0498 | FUN_1003f0498 */

void FUN_1003f0498(void)

{
  FUN_1003efd70();
  return;
}



/* Address: 0x1003f04ac | FUN_1003f04ac */

void FUN_1003f04ac(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  URL UVar3;
  long unaff_x20;
  
  lVar2 = 0;
  FUN_1003efaa0();
  iVar1 = *(int *)(lVar2 + 0x18);
  UVar3 = Foundation::URL::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x0001003f04f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(UVar3.unknown + -8) + 0x10))(param_1,unaff_x20 + iVar1,UVar3.unknown);
  return;
}



/* Address: 0x1003f04f8 | FUN_1003f04f8 */

void FUN_1003f04f8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  long lVar2;
  URL UVar3;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  lVar2 = 0;
  FUN_1003efaa0();
  iVar1 = *(int *)(lVar2 + 0x18);
  UVar3 = Foundation::URL::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x0001003f054c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(UVar3.unknown + -8) + 0x20))
            ((long)param_1 + (long)iVar1,param_6,UVar3.unknown);
  return;
}



/* Address: 0x1003f0550 | FUN_1003f0550 */

undefined1  [16] FUN_1003f0550(void)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  char cVar5;
  char *unaff_x20;
  undefined1 auVar6 [16];
  
  cVar5 = *unaff_x20;
  uVar1 = 0x656c746974;
  if (cVar5 != '\x01') {
    uVar1 = 0x6c7275;
  }
  puVar2 = &DAT_e500000000000000;
  if (cVar5 != '\x01') {
    puVar2 = (undefined1 *)0xe300000000000000;
  }
  uVar3 = 0x6c6f626d7973;
  if (cVar5 != '\0') {
    uVar3 = uVar1;
  }
  puVar4 = &DAT_e600000000000000;
  if (cVar5 != '\0') {
    puVar4 = puVar2;
  }
  auVar6._8_8_ = puVar4;
  auVar6._0_8_ = uVar3;
  return auVar6;
}



/* Address: 0x1003f059c | FUN_1003f059c */

void FUN_1003f059c(undefined1 *param_1,undefined1 param_2)

{
  FUN_1003f22a4();
  *param_1 = param_2;
  return;
}



/* Address: 0x1003f05c0 | FUN_1003f05c0 */

String FUN_1003f05c0(void)

{
  String SVar1;
  
  FUN_1003f07c8();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x1003f05e8 | FUN_1003f05e8 */

String FUN_1003f05e8(void)

{
  String SVar1;
  
  FUN_1003f07c8();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x1003f0610 | FUN_1003f0610 */

/* WARNING: Removing unreachable block (ram,0x0001003f0720) */

void FUN_1003f0610(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  URL UVar4;
  undefined *puVar5;
  long extraout_x8;
  long unaff_x20;
  long unaff_x21;
  long lVar6;
  undefined1 auStack_60 [13];
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar2 = &DAT_100fc40d0;
  FUN_1000037f0(&DAT_100fc40d0,&DAT_100c464f8);
  lVar6 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_1003f07c8();
  Swift::Encoder::_container();
  local_51 = 0;
  FUN_1003effcc();
  Swift::KeyedEncodingContainer::_encodeIfPresent();
  if (unaff_x21 == 0) {
    local_52 = 1;
    Swift::KeyedEncodingContainer::_encodeIfPresent
              (*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),&local_52,puVar2)
    ;
    lVar3 = 0;
    FUN_1003efaa0();
    iVar1 = *(int *)(lVar3 + 0x18);
    local_53 = 2;
    UVar4 = Foundation::URL::typeMetadataAccessor();
    puVar5 = &DAT_100fc40e0;
    FUN_100003a00(&DAT_100fc40e0,PTR_typeMetadataAccessor_100ea71a8,
                  PTR_Foundation__Foundation__URL_>Swift__Encodable_100ea71b8);
    Swift::KeyedEncodingContainer::_encode(unaff_x20 + iVar1,&local_53,puVar2,UVar4.unknown,puVar5);
    (**(code **)(lVar6 + 8))(auStack_60 + -extraout_x8,puVar2);
  }
  else {
    (**(code **)(lVar6 + 8))(auStack_60 + -extraout_x8,puVar2);
  }
  return;
}



/* Address: 0x1003f07c8 | FUN_1003f07c8 */

void FUN_1003f07c8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc40d8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4680c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4680c,&DAT_100ed0c78);
  DAT_100fc40d8 = pTVar1;
  return;
}



/* Address: 0x1003f0808 | FUN_1003f0808 */

/* WARNING: Removing unreachable block (ram,0x0001003f09e8) */
/* WARNING: Removing unreachable block (ram,0x0001003f0a70) */
/* WARNING: Removing unreachable block (ram,0x0001003f0a84) */
/* WARNING: Removing unreachable block (ram,0x0001003f097c) */

void FUN_1003f0808(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  KeyedDecodingContainer<undefined> KVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 *puVar8;
  long unaff_x21;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *apuStack_c0 [3];
  long local_a8 [2];
  undefined *local_98;
  long local_90;
  undefined *local_88;
  undefined1 local_70;
  undefined7 uStack_6f;
  undefined8 uStack_68;
  undefined1 local_51;
  
  local_a8[1] = param_1;
  local_98 = (undefined *)Foundation::URL::typeMetadataAccessor();
  lVar9 = *(long *)(local_98 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar9 + 0x40));
  lVar10 = (long)apuStack_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100fc40e8;
  FUN_1000037f0(&DAT_100fc40e8,&DAT_100c46500);
  lVar11 = *(long *)(puVar2 + -8);
  local_88 = puVar2;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  FUN_1003efaa0();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar8 = (undefined8 *)((lVar10 - extraout_x8_00) - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_1003f07c8();
  local_90 = lVar10 - extraout_x8_00;
  KVar4 = Swift::Decoder::_container();
  puVar2 = local_98;
  if (unaff_x21 == 0) {
    local_51 = 0;
    local_a8[0] = lVar3;
    FUN_1003f0444();
    puVar1 = local_88;
    lVar3 = local_90;
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (&local_70,&DAT_100ec16c8,&local_51,local_88,&DAT_100ec16c8,KVar4.unknown);
    puVar8[1] = uStack_68;
    *puVar8 = CONCAT71(uStack_6f,local_70);
    local_70 = 1;
    puVar5 = &local_70;
    puVar7 = puVar1;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    puVar8[2] = puVar5;
    puVar8[3] = puVar7;
    local_70 = 2;
    puVar6 = &DAT_100fc40f0;
    apuStack_c0[2] = puVar7;
    FUN_100003a00(&DAT_100fc40f0,PTR_typeMetadataAccessor_100ea71a8,
                  PTR_Foundation__Foundation__URL_>Swift__Decodable_100ea71d0);
    apuStack_c0[1] = (undefined *)puVar8;
    Swift::KeyedDecodingContainer::_decode(lVar10,puVar2,&local_70,puVar1,puVar2,puVar6);
    (**(code **)(lVar11 + 8))(lVar3,puVar1);
    puVar6 = apuStack_c0[1];
    (**(code **)(lVar9 + 0x20))
              ((long)apuStack_c0[1] + (long)*(int *)(local_a8[0] + 0x18),lVar10,puVar2);
    FUN_1000c495c(puVar6,local_a8[1],FUN_1003efaa0);
    FUN_100004594(param_2);
    FUN_10005241c(puVar6,FUN_1003efaa0);
  }
  else {
    FUN_100004594(param_2);
  }
  return;
}


