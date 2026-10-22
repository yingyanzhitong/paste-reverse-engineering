/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1002260d0 | FUN_1002260d0 */

void FUN_1002260d0(undefined8 param_1,undefined8 param_2)

{
  FUN_100227808(param_2);
  return;
}



/* Address: 0x1002260d8 | FUN_1002260d8 */

void FUN_1002260d8(void)

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
  puVar4 = &DAT_100fb6f30;
  FUN_100003a00(&DAT_100fb6f30,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar5 = Swift::Actor::get_unownedExecutor();
  UVar6 = UVar5;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar6.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/CollectionView+Dragging.swift",0x25,1,0x26,UVar5.unknown,puVar4);
  }
  if (*(ID *)PTR__NSApp_100ea8fa0 != 0) {
    objc_stub::activateIgnoringOtherApps_(*(ID *)PTR__NSApp_100ea8fa0,1);
    _swift_release(pMVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10022618c);
  (*pcVar2)();
}



/* Address: 0x10022618c | _TtC7PasteUI14CollectionView::draggingSession:endedAtPoint:operation: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x30 bytes */

void _TtC7PasteUI14CollectionView::draggingSession_endedAtPoint_operation_
               (ID param_1,SEL param_2,ID param_3,CGPoint param_4,unsigned_long_long param_5)

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
              ("PasteUI/CollectionView+Dragging.swift",0x25,1,0x21,UVar4.unknown,puVar3);
  }
  FUN_100227808(param_4.field0_0x0);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x10022628c | FUN_10022628c */

undefined8 FUN_10022628c(ulong param_1)

{
  undefined8 uVar1;
  ulong *unaff_x20;
  
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0x1f8))();
  uVar1 = 0x10;
  if ((param_1 & 1) == 0) {
    uVar1 = 0;
  }
  return uVar1;
}



/* Address: 0x1002262c4 | _TtC7PasteUI14CollectionView::draggingEntered: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

unsigned_long_long _TtC7PasteUI14CollectionView::draggingEntered_(ID param_1,SEL param_2,ID param_3)

{
  unsigned_long_long uVar1;
  undefined *puVar2;
  MainActor *pMVar3;
  undefined8 *puVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  puVar2 = PTR_typeMetadataAccessor_100eaec10;
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  puVar4 = &DAT_100fb6f30;
  FUN_100003a00(&DAT_100fb6f30,puVar2,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar5 = Swift::Actor::get_unownedExecutor();
  UVar6 = UVar5;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar6.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/CollectionView+Dragging.swift",0x25,1,0x2b,UVar5.unknown,puVar4);
  }
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *(ulong *)param_1) + 0x1f8))();
  _swift_release(pMVar3);
  uVar1 = 0x10;
  if ((param_1 & 1) == 0) {
    uVar1 = 0;
  }
  return uVar1;
}



/* Address: 0x1002263b0 | FUN_1002263b0 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1002263b0(undefined8 param_1,double param_2,ID param_3)

{
  bool bVar1;
  ID IVar2;
  undefined8 uVar3;
  ulong *unaff_x20;
  long lVar4;
  double extraout_d0;
  double dVar5;
  double extraout_d0_00;
  double extraout_d0_01;
  double dVar6;
  
  IVar2 = param_3;
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0x1f8))();
  if ((IVar2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    IVar2 = objc_stub::draggingLocation(param_3);
    FUN_100226504();
    dVar5 = extraout_d0;
    FUN_100226764();
    lVar4 = *(long *)((long)unaff_x20 + _TtC7PasteUI14CollectionView::scrollView);
    FUN_1002292a0();
    IVar2 = objc_stub::contentView(IVar2);
    objc_stub::bounds(IVar2);
    IVar2 = 0;
    dVar6 = param_2;
    FUN_1002292a0();
    IVar2 = objc_stub::contentView(IVar2);
    objc_stub::bounds(IVar2);
    bVar1 = false;
    if ((extraout_d0_01 == dVar5 + extraout_d0_00) && (bVar1 = false, !NAN(dVar6) && !NAN(param_2)))
    {
      bVar1 = dVar6 == param_2;
    }
    if (!bVar1) {
      IVar2 = objc_stub::contentView
                        (*(ID *)(lVar4 + _TtCC7PasteUI14CollectionView10ScrollView::
                                         ___lazy_storage___scrollView));
      objc_stub::bounds(IVar2);
      objc_stub::setBounds_(IVar2,dVar5 + extraout_d0_00,param_2 + 0.0);
    }
    uVar3 = 0x10;
  }
  return uVar3;
}



/* Address: 0x100226504 | FUN_100226504 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100226504(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4)

{
  ID IVar1;
  ID unaff_x20;
  double extraout_d0;
  double extraout_d0_00;
  double extraout_d0_01;
  double dVar2;
  double extraout_d0_02;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  double local_d0 [2];
  double local_c0;
  
  objc_stub::convertPoint_fromView_(unaff_x20,0);
  IVar1 = 1;
  FUN_100226d60();
  if (IVar1 != 0) {
    IVar1 = objc_stub::frame(IVar1);
    dVar3 = param_2;
    FUN_1002292a0();
    IVar1 = objc_stub::contentView(IVar1);
    objc_stub::bounds(IVar1);
    dVar2 = extraout_d0_00;
    _CGRectOffset(extraout_d0_00,param_2,param_3,param_4,-extraout_d0_01,-dVar3,0);
    IVar1 = objc_stub::bounds(unaff_x20);
    dVar3 = extraout_d0_02;
    _CGRectGetHeight();
    FUN_10022b4f8(local_d0);
    dVar4 = dVar2;
    _CGRectGetMidX(dVar2,param_2,param_3,param_4);
    if (dVar4 <= extraout_d0) {
      _CGRectGetMaxX(dVar2,param_2,param_3,param_4);
      dVar4 = *(double *)
               (unaff_x20 + _TtC7PasteUI14CollectionView::___lazy_storage___contentLayout + 0x20);
      dVar5 = 0.5;
    }
    else {
      _CGRectGetMinX(dVar2,param_2,param_3,param_4);
      dVar4 = *(double *)
               (unaff_x20 + _TtC7PasteUI14CollectionView::___lazy_storage___contentLayout + 0x20);
      dVar5 = -0.5;
    }
    uVar6 = *(undefined8 *)
             (unaff_x20 + _TtC7PasteUI14CollectionView::___lazy_storage___contentLayout + 0x10);
    FUN_10022b7fc();
    objc_stub::setFrame_
              (IVar1,dVar2 + dVar4 * dVar5 + -2.0,uVar6,0x4010000000000000,
               dVar3 - (local_d0[0] + local_c0));
    objc_stub::setCornerRadius_curve_
              (*(ID *)(unaff_x20 + _TtC7PasteUI14CollectionView::___lazy_storage___draggingCursor),
               0x4000000000000000,*(undefined8 *)PTR__kCACornerCurveCircular_100eaa398);
  }
  IVar1 = 0;
  FUN_10022b7fc();
  IVar1 = objc_stub::superview(IVar1);
  if (IVar1 != 0) {
    return 0;
  }
  IVar1 = objc_stub::addSubview_
                    (unaff_x20,
                     *(undefined8 *)
                      (unaff_x20 + _TtC7PasteUI14CollectionView::___lazy_storage___draggingCursor));
  return IVar1;
}



/* Address: 0x100226764 | FUN_100226764 */

double FUN_100226764(double param_1)

{
  ID unaff_x20;
  double extraout_d0;
  double extraout_d0_00;
  double extraout_d0_01;
  double dVar1;
  double dVar2;
  
  objc_stub::bounds(unaff_x20);
  dVar2 = extraout_d0;
  _CGRectGetMinX();
  objc_stub::bounds(unaff_x20);
  if (param_1 <= dVar2 + 30.0) {
    dVar2 = extraout_d0_00;
    _CGRectGetMinX();
    dVar2 = param_1 - dVar2;
    dVar1 = -1.0;
  }
  else {
    dVar2 = extraout_d0_00;
    _CGRectGetMaxX();
    if (param_1 < dVar2 + -30.0) {
      return 0.0;
    }
    objc_stub::bounds(unaff_x20,0);
    dVar2 = extraout_d0_01;
    _CGRectGetMaxX();
    dVar2 = dVar2 - param_1;
    dVar1 = 1.0;
  }
  return dVar1 * ((30.0 - dVar2) / 30.0) * 15.0;
}



/* Address: 0x1002267f8 | _TtC7PasteUI14CollectionView::draggingUpdated: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

unsigned_long_long _TtC7PasteUI14CollectionView::draggingUpdated_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  ID IVar6;
  
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
              ("PasteUI/CollectionView+Dragging.swift",0x25,1,0x2f,UVar4.unknown,puVar3);
  }
  _swift_unknownObjectRetain(param_3);
  IVar6 = param_3;
  FUN_1002263b0();
  _swift_release(pMVar2);
  _swift_unknownObjectRelease(param_3);
  return IVar6;
}



/* Address: 0x1002268dc | FUN_1002268dc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1002268dc(ID param_1)

{
  FUN_10022b7fc();
  objc_stub::removeFromSuperview(param_1);
  return 0;
}



/* Address: 0x100226904 | _TtC7PasteUI14CollectionView::draggingEnded: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC7PasteUI14CollectionView::draggingEnded_(ID param_1,SEL param_2,ID param_3)

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
              ("PasteUI/CollectionView+Dragging.swift",0x25,1,0x3c,UVar4.unknown,puVar3);
  }
  FUN_10022b7fc();
  objc_stub::removeFromSuperview(param_1);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x1002269d4 | FUN_1002269d4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

bool FUN_1002269d4(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  ID param_5)

{
  code *pcVar1;
  bool bVar2;
  MainActor *self;
  long lVar3;
  MainActor *pMVar4;
  undefined8 *puVar5;
  UnownedSerialExecutor UVar6;
  UnownedSerialExecutor UVar7;
  ID IVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  MainActor *pMVar13;
  long lVar14;
  ID unaff_x20;
  ulong uVar15;
  ulong uVar16;
  ulong *puVar17;
  long lVar18;
  double extraout_d0;
  double extraout_d0_00;
  double extraout_d0_01;
  double dVar19;
  double dVar20;
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [32];
  
  IVar8 = param_5;
  FUN_10022b7fc();
  objc_stub::removeFromSuperview(IVar8);
  objc_stub::draggingLocation(param_5);
  objc_stub::convertPoint_fromView_(unaff_x20,0);
  self = (MainActor *)&DAT_00000001;
  FUN_100226d60();
  lVar3 = _TtC7PasteUI14CollectionView::visibleCells;
  if (self != (MainActor *)0x0) {
    _swift_beginAccess(unaff_x20 + _TtC7PasteUI14CollectionView::visibleCells,auStack_c0,0,0);
    lVar3 = *(long *)(unaff_x20 + lVar3);
    puVar17 = (ulong *)(lVar3 + 0x40);
    uVar12 = -1L << ((ulong)*(byte *)(lVar3 + 0x20) & 0x3f);
    uVar15 = 0xffffffffffffffff;
    if (-uVar12 < 0x40) {
      uVar15 = ~(-1L << (-uVar12 & 0x3f));
    }
    uVar15 = uVar15 & *puVar17;
    _swift_bridgeObjectRetain_n(lVar3,2);
    lVar18 = 0;
    lVar9 = lVar18;
    uVar16 = uVar15;
    while( true ) {
      while (uVar15 == 0) {
        bVar2 = SCARRY8(lVar18,1);
        lVar18 = lVar18 + 1;
        if (bVar2) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100226d30);
          (*pcVar1)();
        }
        if ((long)(0x3f - uVar12 >> 6) <= lVar18) {
          _swift_bridgeObjectRelease(lVar3);
          FUN_10000c650(lVar3,puVar17,~uVar12,lVar9,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100226d5c);
          (*pcVar1)();
        }
        uVar15 = puVar17[lVar18];
      }
      uVar10 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | lVar18 << 6;
      lVar11 = *(long *)(*(long *)(lVar3 + 0x30) + uVar10 * 8);
      pMVar13 = *(MainActor **)(*(long *)(lVar3 + 0x38) + uVar10 * 0x10);
      pMVar4 = Swift::MainActor::typeMetadataAccessor();
      pMVar4 = Swift::MainActor::get_shared(pMVar4,pMVar13);
      puVar5 = &DAT_100fb6f30;
      FUN_100003a00(&DAT_100fb6f30,PTR_typeMetadataAccessor_100eaec10,
                    PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
      UVar6 = Swift::Actor::get_unownedExecutor();
      UVar7 = UVar6;
      _swift_task_isCurrentExecutor();
      if (((ulong)UVar7.unknown & 1) == 0) {
        _swift_task_reportUnexpectedExecutor
                  ("PasteUI/CollectionView+Dragging.swift",0x25,1,0x46,UVar6.unknown,puVar5);
      }
      _swift_release(pMVar4);
      if (pMVar13 == self) break;
      uVar15 = uVar15 - 1 & uVar15;
      lVar9 = lVar18;
      uVar16 = uVar15;
    }
    _swift_bridgeObjectRelease(lVar3);
    FUN_10000c650(lVar3,puVar17,~uVar12,lVar9,uVar16);
    IVar8 = objc_stub::frame((ID)self);
    dVar20 = param_2;
    FUN_1002292a0();
    IVar8 = objc_stub::contentView(IVar8);
    objc_stub::bounds(IVar8);
    dVar19 = extraout_d0_00;
    _CGRectOffset(extraout_d0_00,param_2,param_3,param_4,-extraout_d0_01,-dVar20,0);
    _CGRectGetMidX();
    if ((dVar19 <= extraout_d0) && (bVar2 = SCARRY8(lVar11,1), lVar11 = lVar11 + 1, bVar2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100226d60);
      (*pcVar1)();
    }
    lVar3 = unaff_x20 + _TtC7PasteUI14CollectionView::delegate;
    _swift_beginAccess(lVar3,auStack_d8,0,0);
    lVar18 = lVar3;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar18 != 0) {
      lVar14 = *(long *)(lVar3 + 8);
      lVar3 = lVar18;
      _swift_getObjectType();
      lVar9 = lVar3;
      FUN_10022b1cc();
      (**(code **)(lVar14 + 0x28))(unaff_x20,lVar9,lVar11,lVar3,lVar14);
      _swift_unknownObjectRelease(lVar18);
      _swift_bridgeObjectRelease(lVar9);
    }
  }
  return self != (MainActor *)0x0;
}



/* Address: 0x100226d60 | FUN_100226d60 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16]
FUN_100226d60(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,uint param_5)

{
  code *pcVar1;
  bool bVar2;
  MainActor *pMVar3;
  undefined8 *puVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  ID IVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long unaff_x20;
  undefined8 uVar12;
  ulong *puVar13;
  long lVar14;
  MainActor *self;
  long lVar15;
  long lVar16;
  undefined8 extraout_d0;
  undefined8 uVar17;
  double extraout_d0_00;
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [88];
  
  lVar14 = _TtC7PasteUI14CollectionView::visibleCells;
  _swift_beginAccess(unaff_x20 + _TtC7PasteUI14CollectionView::visibleCells,auStack_110,0,0);
  lVar14 = *(long *)(unaff_x20 + lVar14);
  puVar13 = (ulong *)(lVar14 + 0x40);
  uVar9 = -1L << ((ulong)*(byte *)(lVar14 + 0x20) & 0x3f);
  uVar10 = 0xffffffffffffffff;
  if (-uVar9 < 0x40) {
    uVar10 = ~(-1L << (-uVar9 & 0x3f));
  }
  uVar10 = uVar10 & *puVar13;
  _swift_bridgeObjectRetain_n(lVar14,2);
  lVar15 = 0;
  lVar16 = lVar15;
  uVar11 = uVar10;
  while( true ) {
    while (uVar10 != 0) {
      uVar8 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      puVar4 = (undefined8 *)
               (*(long *)(lVar14 + 0x38) + LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) * 0x10 +
               lVar15 * 0x400);
      self = (MainActor *)*puVar4;
      uVar12 = puVar4[1];
      pMVar3 = Swift::MainActor::typeMetadataAccessor();
      pMVar3 = Swift::MainActor::get_shared(pMVar3,self);
      puVar4 = &DAT_100fb6f30;
      FUN_100003a00(&DAT_100fb6f30,PTR_typeMetadataAccessor_100eaec10,
                    PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
      UVar5 = Swift::Actor::get_unownedExecutor();
      UVar6 = UVar5;
      _swift_task_isCurrentExecutor();
      if (((ulong)UVar6.unknown & 1) == 0) {
        _swift_task_reportUnexpectedExecutor
                  ("PasteUI/CollectionView+Dragging.swift",0x25,1,0x8e,UVar5.unknown,puVar4);
      }
      IVar7 = objc_stub::frame((ID)self);
      if ((param_5 & 1) != 0) {
        FUN_10022b4f8(auStack_f8);
      }
      uVar17 = extraout_d0;
      _CGRectInset();
      dVar18 = param_2;
      FUN_1002292a0();
      IVar7 = objc_stub::contentView(IVar7);
      objc_stub::bounds(IVar7);
      uVar8 = 0;
      _CGRectOffset(uVar17,param_2,param_3,param_4,-extraout_d0_00,-dVar18);
      _CGRectContainsPoint();
      _swift_release(pMVar3);
      if ((uVar8 & 1) != 0) {
        _swift_bridgeObjectRelease(lVar14);
        goto LAB_100226fec;
      }
      uVar10 = uVar10 - 1 & uVar10;
      lVar16 = lVar15;
      uVar11 = uVar10;
    }
    bVar2 = SCARRY8(lVar15,1);
    lVar15 = lVar15 + 1;
    if (bVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100227058);
      (*pcVar1)();
    }
    if ((long)(0x3f - uVar9 >> 6) <= lVar15) break;
    uVar10 = puVar13[lVar15];
  }
  _swift_bridgeObjectRelease(lVar14);
  uVar11 = 0;
  self = (MainActor *)0x0;
  uVar12 = 0;
LAB_100226fec:
  FUN_10000c650(lVar14,puVar13,~uVar9,lVar16,uVar11);
  auVar19._8_8_ = uVar12;
  auVar19._0_8_ = self;
  return auVar19;
}



/* Address: 0x100227058 | _TtC7PasteUI14CollectionView::performDragOperation: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

bool _TtC7PasteUI14CollectionView::performDragOperation_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  ID IVar6;
  
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
              ("PasteUI/CollectionView+Dragging.swift",0x25,1,0x40,UVar4.unknown,puVar3);
  }
  _swift_unknownObjectRetain(param_3);
  IVar6 = param_3;
  FUN_1002269d4();
  _swift_release(pMVar2);
  _swift_unknownObjectRelease(param_3);
  return (uint)IVar6 & 1;
}



/* Address: 0x10022713c | FUN_10022713c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10022713c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  MainActor *pMVar1;
  undefined8 *puVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  undefined *puVar5;
  ID self;
  ID IVar6;
  double dVar7;
  double extraout_d0;
  double dVar8;
  double dVar9;
  double dVar10;
  double local_e0;
  double dStack_d8;
  double local_d0;
  double local_c0;
  double dStack_b8;
  double local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  puVar5 = PTR_typeMetadataAccessor_100eaec10;
  pMVar1 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  puVar2 = &DAT_100fb6f30;
  FUN_100003a00(&DAT_100fb6f30,puVar5,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/CollectionView+Dragging.swift",0x25,1,0x55,UVar3.unknown,puVar2);
  }
  puVar5 = &_OBJC_CLASS___NSDraggingItem;
  _objc_allocWithZone();
  self = objc_stub::initWithPasteboardWriter_((ID)puVar5,param_2);
  IVar6 = self;
  FUN_10022b4f8(&local_e0);
  dVar7 = dStack_b8;
  _CGRectGetHeight(dStack_b8,local_b0,uStack_a8,local_a0);
  dVar10 = dStack_d8 + (local_c0 + (dVar7 - (local_e0 + local_d0))) * (double)param_1;
  _CGRectGetHeight(dStack_b8,local_b0,uStack_a8,local_a0);
  dVar9 = dStack_b8 - (local_e0 + local_d0);
  FUN_1002292a0();
  IVar6 = objc_stub::contentView(IVar6);
  objc_stub::bounds(IVar6);
  dVar7 = local_d0;
  dVar8 = dVar9;
  _CGRectOffset(dVar10,local_d0,dVar9,dVar9,-extraout_d0,-local_b0,0);
  FUN_100227360(param_1,*(long *)(param_4 + 0x10) == 1);
  objc_stub::setDraggingFrame_contents_(self,dVar10,dVar7,dVar9,dVar8,param_1);
  _swift_release(pMVar1);
  return self;
}



/* Address: 0x100227360 | FUN_100227360 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100227360(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                long param_5,ulong param_6)

{
  ID *pIVar1;
  ID IVar2;
  uint uVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  undefined *self;
  ID IVar8;
  undefined1 *puVar9;
  long unaff_x20;
  long lVar10;
  code *pcVar11;
  undefined8 extraout_d0;
  undefined8 uVar12;
  undefined1 auStack_88 [24];
  
  lVar10 = _TtC7PasteUI14CollectionView::visibleCells;
  puVar9 = auStack_88;
  _swift_beginAccess(unaff_x20 + _TtC7PasteUI14CollectionView::visibleCells,puVar9,0,0);
  lVar10 = *(long *)(unaff_x20 + lVar10);
  if ((*(long *)(lVar10 + 0x10) == 0) || (FUN_100071340(), ((ulong)puVar9 & 1) == 0)) {
    IVar6 = 0;
  }
  else {
    pIVar1 = (ID *)(*(long *)(lVar10 + 0x38) + param_5 * 0x10);
    IVar8 = *pIVar1;
    IVar2 = pIVar1[1];
    IVar4 = IVar8;
    _swift_getObjectType(IVar8);
    IVar5 = IVar4;
    (**(code **)(IVar2 + 8))(IVar4,IVar2);
    IVar6 = objc_stub::layer(IVar8);
    if (IVar6 == 0) {
      uVar12 = 0x3f800000;
    }
    else {
      objc_stub::opacity(IVar6);
      uVar12 = extraout_d0;
    }
    pcVar11 = *(code **)(IVar2 + 0x10);
    (*pcVar11)(0,IVar4,IVar2);
    IVar6 = objc_stub::layer(IVar8);
    if (IVar6 != 0) {
      uVar3 = 0x3f4ccccd;
      if ((param_6 & 1) == 0) {
        uVar3 = 0x3f800000;
      }
      objc_stub::setOpacity_(IVar6,(ulong)uVar3);
    }
    objc_stub::bounds(IVar8);
    IVar7 = objc_stub::bitmapImageRepForCachingDisplayInRect_(IVar8);
    objc_stub::bounds(IVar8);
    if (IVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x10022756c);
      (*pcVar11)();
    }
    objc_stub::cacheDisplayInRect_toBitmapImageRep_(IVar8,IVar7);
    objc_stub::bounds(IVar8);
    self = &_OBJC_CLASS___NSImage;
    _objc_allocWithZone();
    IVar6 = objc_stub::initWithSize_((ID)self,param_3,param_4);
    objc_stub::addRepresentation_(IVar6,IVar7);
    (*pcVar11)((uint)IVar5 & 1,IVar4,IVar2);
    IVar8 = objc_stub::layer(IVar8);
    objc_stub::setOpacity_(IVar8,uVar12);
  }
  return IVar6;
}



/* Address: 0x10022756c | FUN_10022756c */

undefined * FUN_10022756c(long param_1,_ArrayBuffer param_2,code *param_3)

{
  _CocoaArrayWrapper _Var1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  ContiguousArray CVar5;
  _ArrayBuffer _Var6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  ContiguousArray CVar13;
  undefined *puVar14;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  uVar7 = (ulong)param_2.unknown >> 0x3e;
  _Var6.unknown = param_2.unknown;
  if (uVar7 == 0) {
    puVar10 = *(undefined **)(((ulong)param_2.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = param_2.unknown & 0xffffffffffffff8;
    if (((ulong)param_2.unknown & 0x8000000000000000) != 0) {
      _Var1.unknown = param_2.unknown;
    }
    puVar10 = (undefined *)Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar12 = puVar10;
  if ((long)puVar8 <= (long)puVar10) {
    puVar12 = puVar8;
  }
  Swift::ContiguousArray::_reserveCapacity((__int64)puVar12,(ContiguousArray)_Var6.unknown);
  if ((long)puVar12 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100227808);
    (*pcVar3)();
  }
  if (puVar12 != (undefined *)0x0) {
    puVar14 = (undefined *)0x0;
    puVar11 = param_2.unknown & 0xffffffffffffff8;
    _Var1.unknown = puVar11;
    if (((ulong)param_2.unknown & 0x8000000000000000) != 0) {
      _Var1.unknown = param_2.unknown;
    }
    do {
      if (puVar8 == puVar14) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1002277dc);
        (*pcVar3)();
      }
      uVar9 = *(undefined8 *)(param_1 + 0x20 + (long)puVar14 * 8);
      if (uVar7 == 0) {
        puVar4 = *(undefined **)(puVar11 + 0x10);
      }
      else {
        puVar4 = (undefined *)Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
      }
      if (puVar14 == puVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1002277e0);
        (*pcVar3)();
      }
      if (((ulong)param_2.unknown & 0xc000000000000001) == 0) {
        if (*(undefined **)(puVar11 + 0x10) <= puVar14) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1002277ec);
          (*pcVar3)();
        }
                    /* WARNING: Load size is inaccurate */
        CVar13.unknown = param_2.unknown[(long)puVar14 * 8 + 0x20];
        _swift_unknownObjectRetain(CVar13.unknown);
      }
      else {
        CVar13.unknown = puVar14;
        Swift::_ArrayBuffer::__getElementSlowPath((__int64)puVar14,param_2);
      }
      puVar14 = puVar14 + 1;
      CVar5.unknown = CVar13.unknown;
      (*param_3)(uVar9);
      _swift_unknownObjectRelease();
      Swift::ContiguousArray::__makeUniqueAndReserveCapacityIfNotUnique(CVar13);
                    /* WARNING: Load size is inaccurate */
      CVar13.unknown = puVar2[0x10];
      Swift::ContiguousArray::__reserveCapacityAssumingUniqueBuffer((__int64)CVar13.unknown,CVar5);
      Swift::ContiguousArray::__appendElementAssumeUniqueAndCapacity(CVar13.unknown,uVar9);
      Swift::ContiguousArray::__endMutation(CVar13);
    } while (puVar12 != puVar14);
  }
  if ((long)puVar10 < (long)puVar8) {
    puVar10 = param_2.unknown & 0xffffffffffffff8;
    _Var1.unknown = puVar10;
    if (((ulong)param_2.unknown & 0x8000000000000000) != 0) {
      _Var1.unknown = param_2.unknown;
    }
    do {
      if ((long)puVar8 <= (long)puVar12) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1002277e4);
        (*pcVar3)();
      }
      uVar9 = *(undefined8 *)(param_1 + 0x20 + (long)puVar12 * 8);
      if (uVar7 == 0) {
        puVar14 = *(undefined **)(puVar10 + 0x10);
      }
      else {
        puVar14 = (undefined *)Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
      }
      if (puVar12 == puVar14) {
        return puVar2;
      }
      if (((ulong)param_2.unknown & 0xc000000000000001) == 0) {
        if (*(undefined **)(puVar10 + 0x10) <= puVar12) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1002277e8);
          (*pcVar3)();
        }
                    /* WARNING: Load size is inaccurate */
        CVar13.unknown = param_2.unknown[(long)puVar12 * 8 + 0x20];
        _swift_unknownObjectRetain(CVar13.unknown);
      }
      else {
        CVar13.unknown = puVar12;
        Swift::_ArrayBuffer::__getElementSlowPath((__int64)puVar12,param_2);
      }
      puVar12 = puVar12 + 1;
      CVar5.unknown = CVar13.unknown;
      (*param_3)(uVar9);
      _swift_unknownObjectRelease();
      Swift::ContiguousArray::__makeUniqueAndReserveCapacityIfNotUnique(CVar13);
                    /* WARNING: Load size is inaccurate */
      CVar13.unknown = puVar2[0x10];
      Swift::ContiguousArray::__reserveCapacityAssumingUniqueBuffer((__int64)CVar13.unknown,CVar5);
      Swift::ContiguousArray::__appendElementAssumeUniqueAndCapacity(CVar13.unknown,uVar9);
      Swift::ContiguousArray::__endMutation(CVar13);
    } while (puVar8 != puVar12);
  }
  return puVar2;
}



/* Address: 0x100227808 | FUN_100227808 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100227808(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  DispatchWorkItemFlags DVar3;
  long lVar4;
  ID IVar5;
  OS_dispatch_queue *pOVar6;
  DispatchTime DVar7;
  DispatchQoS aBlock;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  ID unaff_x20;
  DispatchWorkItemFlags flags;
  DispatchQoS qos;
  long lVar11;
  DispatchTime DVar12;
  long lVar13;
  undefined1 auStack_f0 [8];
  code *local_e8;
  undefined *local_e0;
  long local_d8;
  undefined *puStack_d0;
  long local_c8;
  undefined *local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  code *local_a8;
  undefined *puStack_a0;
  code *local_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [24];
  
  DVar3 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_c8 = *(long *)(DVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_c8 + 0x40));
  flags.unknown = auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puStack_d0 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_d8 = *(long *)(puStack_d0 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_d8 + 0x40));
  qos.unknown = flags.unknown + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_e0 = (undefined *)Dispatch::DispatchTime::typeMetadataAccessor();
  lVar11 = *(long *)(local_e0 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar11 + 0x40));
  DVar12.unknown = qos.unknown + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar13 = unaff_x20 + _TtC7PasteUI14CollectionView::delegate;
  _swift_beginAccess(lVar13,auStack_88,0,0);
  lVar4 = lVar13;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar4 != 0) {
    lVar13 = *(long *)(lVar13 + 8);
    _swift_getObjectType();
    (**(code **)(lVar13 + 0x38))(param_1,param_2);
    _swift_unknownObjectRelease(lVar4);
  }
  IVar5 = objc_stub::window(unaff_x20);
  if (IVar5 != 0) {
    IVar5 = objc_stub::frame(IVar5);
    iVar2 = (int)IVar5;
    _CGRectContainsPoint();
    if (iVar2 != 0) {
      pOVar6 = (OS_dispatch_queue *)0x0;
      FUN_10000ec2c(0,&DAT_100fb7600,&PTR__OBJC_CLASS___OS_dispatch_queue_100f8d6e8);
      DVar7.unknown = (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar6);
      Dispatch::DispatchTime::now(DVar7);
      Dispatch::__infix(DVar12,1.0);
      puVar1 = local_e0;
      local_e8 = *(code **)(lVar11 + 8);
      (*local_e8)(DVar12.unknown,local_e0);
      local_98 = FUN_1002260d8;
      uStack_90 = 0;
      local_b8 = PTR___NSConcreteStackBlock_100ea82a0;
      local_b0 = 0x42000000;
      local_a8 = FUN_100030410;
      puStack_a0 = &DAT_100ec2978;
      aBlock.unknown = __Block_copy(&local_b8);
      Dispatch::DispatchQoS::get_unspecified(aBlock);
      local_c0 = PTR___swiftEmptyArrayStorage_100eae0d8;
      puVar8 = &DAT_100fb7588;
      FUN_100003a00(&DAT_100fb7588,PTR_typeMetadataAccessor_100eae670,
                    PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_100eae680);
      puVar9 = &DAT_100fb7610;
      FUN_1000037f0(&DAT_100fb7610,&DAT_100c36c38);
      puVar10 = puVar9;
      FUN_100225b20();
      Swift::SetAlgebra::_init(flags.unknown,&local_c0,puVar9,puVar10,DVar3.unknown,puVar8);
      (extension_Dispatch)::__C::OS_dispatch_queue::_asyncAfter
                ((DispatchTime)(DVar12.unknown + -extraout_x12),qos,flags);
      __Block_release(aBlock.unknown);
      (**(code **)(local_c8 + 8))(flags.unknown,DVar3.unknown);
      (**(code **)(local_d8 + 8))(qos.unknown,puStack_d0);
      (*local_e8)(DVar12.unknown + -extraout_x12,puVar1);
    }
  }
  return;
}



/* Address: 0x100227b30 | FUN_100227b30 */

void FUN_100227b30(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10022713c(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18))
  ;
  return;
}



/* Address: 0x100227b38 | FUN_100227b38 */

void FUN_100227b38(long param_1,long param_2)

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



/* Address: 0x100227b4c | FUN_100227b4c */

void FUN_100227b4c(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x100227b54 | FUN_100227b54 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100227b54(ID param_1)

{
  uint uVar1;
  code *pcVar2;
  ID IVar3;
  objc_super *super;
  ID IVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  long unaff_x20;
  
  super = (objc_super *)&stack0xffffffffffffffb0;
  IVar3 = param_1;
  FUN_1002348a8();
  uVar1 = (uint)IVar3 & 0xff;
  if (uVar1 == 4) {
    FUN_10022dac8();
    super = (objc_super *)&stack0xffffffffffffffc0;
    goto LAB_100227b98;
  }
  IVar4 = objc_stub::modifierFlags(param_1);
  uVar7 = (uint)IVar4 >> 0x14 & 1;
  if ((IVar4 & 0x20000) != 0) {
    uVar7 = 2;
  }
  if (uVar1 != 1 && (IVar3 & 0xff) != 0) {
    if (uVar1 == 2) {
      uVar7 = 0;
      if ((IVar4 & 0x20000) != 0) {
        uVar7 = 2;
      }
      lVar5 = 0;
    }
    else {
      lVar5 = *(long *)(unaff_x20 + _TtC7PasteUI14CollectionView::cellCount) + -1;
      if (SBORROW8(*(long *)(unaff_x20 + _TtC7PasteUI14CollectionView::cellCount),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100227cc0);
        (*pcVar2)();
      }
      uVar7 = 0;
      if ((IVar4 & 0x20000) != 0) {
        uVar7 = 2;
      }
    }
    uVar6 = 0;
    goto LAB_100227c94;
  }
  if ((IVar3 & 0xff) == 0) {
    if (uVar7 == 1) {
LAB_100227c24:
      FUN_10022dac8();
LAB_100227b98:
      _objc_msgSendSuper2(super,"keyDown:",param_1);
      return;
    }
    FUN_10022b1cc();
    if (*(long *)(IVar4 + 0x10) == 0) {
LAB_100227ca8:
      _swift_bridgeObjectRelease();
      return;
    }
    lVar8 = *(long *)(IVar4 + *(long *)(IVar4 + 0x10) * 8 + 0x18);
    _swift_bridgeObjectRelease();
    lVar5 = lVar8 + 1;
    if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100227c04);
      (*pcVar2)();
    }
  }
  else {
    if (uVar7 == 1) goto LAB_100227c24;
    FUN_10022b1cc();
    if (*(long *)(IVar4 + 0x10) == 0) goto LAB_100227ca8;
    lVar8 = *(long *)(IVar4 + *(long *)(IVar4 + 0x10) * 8 + 0x18);
    _swift_bridgeObjectRelease();
    lVar5 = lVar8 + -1;
    if (SBORROW8(lVar8,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100227cc4);
      (*pcVar2)();
    }
  }
  uVar6 = 1;
LAB_100227c94:
  FUN_100228c78(lVar5,uVar7,uVar6);
  return;
}



/* Address: 0x100227cc4 | _TtC7PasteUI14CollectionView::keyDown: */

/* Function Stack Size: 0x18 bytes */

void _TtC7PasteUI14CollectionView::keyDown_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100228498();
  return;
}



/* Address: 0x100227cd4 | FUN_100227cd4 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100227cd4(undefined8 param_1,double param_2,ID param_3)

{
  ID IVar1;
  long lVar2;
  uint extraout_w1;
  uint uVar3;
  ID unaff_x20;
  ID IVar4;
  long lVar5;
  double extraout_d0;
  double extraout_d0_00;
  double dVar6;
  undefined1 auStack_88 [24];
  
  objc_stub::locationInWindow(param_3);
  IVar1 = objc_stub::convertPoint_fromView_(unaff_x20,0);
  IVar4 = *(ID *)(unaff_x20 + _TtC7PasteUI14CollectionView::scrollView);
  dVar6 = param_2;
  FUN_1002292a0();
  IVar1 = objc_stub::contentView(IVar1);
  objc_stub::bounds(IVar1);
  IVar1 = objc_stub::frame(IVar4);
  uVar3 = extraout_w1;
  FUN_100228568(extraout_d0 + extraout_d0_00,param_2 + dVar6);
  if (((uVar3 & 0xff) == 1) || (IVar4 = objc_stub::clickCount(param_3), 2 < (long)IVar4)) {
    FUN_10022dac8();
    _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff90,"mouseDown:",param_3);
  }
  else {
    IVar4 = objc_stub::modifierFlags(param_3);
    if (((uint)IVar4 >> 0x12 & 1) != 0) {
      objc_stub::rightMouseDown_(unaff_x20,param_3);
      return;
    }
    IVar4 = objc_stub::clickCount(param_3);
    if (IVar4 == 1) {
      FUN_100227ea8(IVar1,param_3);
    }
    IVar4 = objc_stub::clickCount(param_3);
    if (IVar4 == 2) {
      FUN_100228a50(IVar1);
    }
    lVar5 = unaff_x20 + _TtC7PasteUI14CollectionView::delegate;
    _swift_beginAccess(lVar5,auStack_88,0,0);
    lVar2 = lVar5;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar2 != 0) {
      lVar5 = *(long *)(lVar5 + 8);
      _swift_getObjectType();
      (**(code **)(lVar5 + 0x18))();
      _swift_unknownObjectRelease(lVar2);
    }
  }
  return;
}



/* Address: 0x100227ea8 | FUN_100227ea8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long FUN_100227ea8(undefined8 param_1,undefined8 param_2,long param_3,ID param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  code *pcVar3;
  ID IVar4;
  MainActor *this;
  MainActor *pMVar5;
  MainActor *pMVar6;
  UnownedSerialExecutor UVar7;
  UnownedSerialExecutor UVar8;
  undefined *puVar9;
  undefined *puVar10;
  void *aBlock;
  long lVar11;
  ID unaff_x20;
  ulong uVar12;
  ulong uVar13;
  undefined8 extraout_d0;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  objc_stub::locationInWindow(param_4);
  objc_stub::convertPoint_fromView_(unaff_x20,0);
  puVar1 = (undefined8 *)(unaff_x20 + _TtC7PasteUI14CollectionView::initialDragLocation);
  *puVar1 = extraout_d0;
  puVar1[1] = param_2;
  *(undefined1 *)(puVar1 + 2) = 0;
  IVar4 = objc_stub::modifierFlags(param_4);
  uVar2 = (uint)IVar4 >> 0x14 & 1;
  if ((IVar4 & 0x20000) != 0) {
    uVar2 = 2;
  }
  FUN_10022b1cc();
  uVar13 = *(ulong *)(IVar4 + 0x10);
  if (uVar13 != 0) {
    this = Swift::MainActor::typeMetadataAccessor();
    uVar12 = 0;
    pMVar5 = this;
    do {
      if (*(ulong *)(IVar4 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100228118);
        (*pcVar3)();
      }
      lVar11 = *(long *)(IVar4 + uVar12 * 8 + 0x20);
      pMVar5 = Swift::MainActor::get_shared(this,pMVar5);
      pMVar6 = pMVar5;
      FUN_1001f7290();
      UVar7 = Swift::Actor::get_unownedExecutor();
      UVar8 = UVar7;
      _swift_task_isCurrentExecutor();
      if (((ulong)UVar8.unknown & 1) == 0) {
        _swift_task_reportUnexpectedExecutor
                  ("PasteUI/CollectionView+Input.swift",0x22,1,0x5d,UVar7.unknown,pMVar6);
      }
      _swift_release();
      if (lVar11 == param_3) {
        _swift_bridgeObjectRelease(IVar4);
        if (uVar2 == 0) {
          puVar9 = &DAT_100ec29b0;
          _swift_allocObject(&DAT_100ec29b0,0x18,7);
          _swift_unknownObjectWeakInit(puVar9 + 0x10,unaff_x20);
          puVar10 = &DAT_100ec29d8;
          _swift_allocObject(&DAT_100ec29d8,0x21,7);
          *(undefined **)(puVar10 + 0x10) = puVar9;
          *(long *)(puVar10 + 0x18) = param_3;
          puVar10[0x20] = 0;
          local_70 = FUN_100228b64;
          local_90 = PTR___NSConcreteStackBlock_100ea82a0;
          local_88 = 0x42000000;
          local_80 = FUN_100136224;
          puStack_78 = &DAT_100ec29f0;
          local_68 = puVar10;
          aBlock = __Block_copy(&local_90);
          _swift_release(local_68);
          IVar4 = NSTimer::scheduledTimerWithTimeInterval_repeats_block_
                            ((ID)&_OBJC_CLASS___NSTimer,0x3fdccccccccccccd,0,aBlock);
          __Block_release(aBlock);
          *(ID *)(unaff_x20 + _TtC7PasteUI14CollectionView::dragWaitTimer) = IVar4;
          return 0;
        }
        goto LAB_100227fdc;
      }
      uVar12 = uVar12 + 1;
    } while (uVar13 != uVar12);
  }
  _swift_bridgeObjectRelease(IVar4);
LAB_100227fdc:
  FUN_100228c78(param_3,uVar2,1);
  return param_3;
}



/* Address: 0x100228118 | _TtC7PasteUI14CollectionView::mouseDown: */

/* Function Stack Size: 0x18 bytes */

void _TtC7PasteUI14CollectionView::mouseDown_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100228498();
  return;
}



/* Address: 0x100228128 | FUN_100228128 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_100228128(undefined8 param_1,double param_2,ID param_3)

{
  code *pcVar1;
  ID IVar2;
  MainActor *this;
  MainActor *pMVar3;
  MainActor *pMVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  long lVar7;
  uint extraout_w1;
  uint uVar8;
  undefined1 *puVar9;
  ulong uVar10;
  ID unaff_x20;
  ID IVar11;
  long lVar12;
  ID IVar13;
  ulong uVar14;
  double extraout_d0;
  double extraout_d0_00;
  double dVar15;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  
  objc_stub::locationInWindow(param_3);
  IVar2 = objc_stub::convertPoint_fromView_(unaff_x20,0);
  IVar11 = *(ID *)(unaff_x20 + _TtC7PasteUI14CollectionView::scrollView);
  dVar15 = param_2;
  FUN_1002292a0();
  IVar2 = objc_stub::contentView(IVar2);
  objc_stub::bounds(IVar2);
  IVar2 = objc_stub::frame(IVar11);
  uVar8 = extraout_w1;
  FUN_100228568(extraout_d0 + extraout_d0_00,param_2 + dVar15);
  if ((uVar8 & 0xff) == 1) {
    FUN_10022dac8();
    _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff70,"rightMouseDown:",param_3);
  }
  else {
    IVar11 = IVar2;
    FUN_10022b1cc();
    uVar14 = *(ulong *)(IVar11 + 0x10);
    if (uVar14 != 0) {
      this = Swift::MainActor::typeMetadataAccessor();
      uVar10 = 0;
      pMVar3 = this;
      do {
        if (*(ulong *)(IVar11 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1002283c8);
          (*pcVar1)();
        }
        IVar13 = *(ID *)(IVar11 + uVar10 * 8 + 0x20);
        pMVar3 = Swift::MainActor::get_shared(this,pMVar3);
        pMVar4 = pMVar3;
        FUN_1001f7290();
        UVar5 = Swift::Actor::get_unownedExecutor();
        UVar6 = UVar5;
        _swift_task_isCurrentExecutor();
        if (((ulong)UVar6.unknown & 1) == 0) {
          _swift_task_reportUnexpectedExecutor
                    ("PasteUI/CollectionView+Input.swift",0x22,1,0x34,UVar5.unknown,pMVar4);
        }
        _swift_release();
        if (IVar13 == IVar2) {
          _swift_bridgeObjectRelease(IVar11);
          goto LAB_1002282d0;
        }
        uVar10 = uVar10 + 1;
      } while (uVar14 != uVar10);
    }
    _swift_bridgeObjectRelease(IVar11);
    FUN_100228c78(IVar2,0,1);
LAB_1002282d0:
    lVar12 = unaff_x20 + _TtC7PasteUI14CollectionView::delegate;
    _swift_beginAccess(lVar12,auStack_a8,0,0);
    lVar7 = lVar12;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar7 != 0) {
      lVar12 = *(long *)(lVar12 + 8);
      _swift_getObjectType();
      IVar11 = unaff_x20;
      (**(code **)(lVar12 + 8))();
      _swift_unknownObjectRelease(lVar7);
      lVar12 = _TtC7PasteUI14CollectionView::visibleCells;
      if (IVar11 != 0) {
        puVar9 = auStack_c0;
        _swift_beginAccess(unaff_x20 + _TtC7PasteUI14CollectionView::visibleCells,puVar9,0,0);
        lVar12 = *(long *)(unaff_x20 + lVar12);
        if ((*(long *)(lVar12 + 0x10) != 0) && (FUN_100071340(), ((ulong)puVar9 & 1) != 0)) {
          NSMenu::popUpContextMenu_withEvent_forView_
                    ((ID)&_OBJC_CLASS___NSMenu,IVar11,param_3,
                     *(undefined8 *)(*(long *)(lVar12 + 0x38) + IVar2 * 0x10));
        }
      }
    }
  }
  return;
}



/* Address: 0x1002283c8 | _TtC7PasteUI14CollectionView::rightMouseDown: */

/* Function Stack Size: 0x18 bytes */

void _TtC7PasteUI14CollectionView::rightMouseDown_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100228498();
  return;
}



/* Address: 0x1002283d8 | FUN_1002283d8 */

void FUN_1002283d8(undefined8 param_1,double param_2,ID param_3)

{
  double *pdVar1;
  ID IVar2;
  ID unaff_x20;
  long lVar3;
  double extraout_d0;
  double dVar4;
  double dVar5;
  
  pdVar1 = (double *)(unaff_x20 + _TtC7PasteUI14CollectionView::initialDragLocation);
  if (*(char *)(pdVar1 + 2) != '\x01') {
    dVar5 = *pdVar1;
    dVar4 = pdVar1[1];
    objc_stub::invalidate(*(ID *)(unaff_x20 + _TtC7PasteUI14CollectionView::dragWaitTimer));
    objc_stub::locationInWindow(param_3);
    IVar2 = objc_stub::convertPoint_fromView_(unaff_x20,0);
    dVar5 = dVar5 - extraout_d0;
    _hypot(dVar5,dVar4 - param_2);
    if (3.0 < dVar5) {
      FUN_10022b1cc();
      lVar3 = *(long *)(IVar2 + 0x10);
      _swift_bridgeObjectRelease();
      if (lVar3 != 0) {
        FUN_100225b80(param_3);
        *pdVar1 = 0.0;
        pdVar1[1] = 0.0;
        *(undefined1 *)(pdVar1 + 2) = 1;
      }
    }
  }
  return;
}



/* Address: 0x100228488 | _TtC7PasteUI14CollectionView::mouseDragged: */

/* Function Stack Size: 0x18 bytes */

void _TtC7PasteUI14CollectionView::mouseDragged_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100228498();
  return;
}



/* Address: 0x100228498 | FUN_100228498 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
FUN_100228498(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             code *param_5)

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
              ("PasteUI/CollectionView+Input.swift",0x22,1,param_4,UVar3.unknown,pMVar1);
  }
  (*param_5)(param_3);
  _swift_release(pMVar2);
  return 0;
}



/* Address: 0x100228568 | FUN_100228568 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_100228568(void)

{
  code *pcVar1;
  bool bVar2;
  MainActor *pMVar3;
  MainActor *pMVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long unaff_x20;
  MainActor *self;
  ulong *puVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  undefined1 auVar17 [16];
  undefined1 auStack_88 [24];
  
  lVar11 = _TtC7PasteUI14CollectionView::visibleCells;
  _swift_beginAccess(unaff_x20 + _TtC7PasteUI14CollectionView::visibleCells,auStack_88,0,0);
  lVar11 = *(long *)(unaff_x20 + lVar11);
  puVar12 = (ulong *)(lVar11 + 0x40);
  uVar10 = -1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if (-uVar10 < 0x40) {
    uVar15 = ~(-1L << (-uVar10 & 0x3f));
  }
  uVar15 = uVar15 & *puVar12;
  _swift_bridgeObjectRetain_n(lVar11,2);
  lVar13 = 0;
  uVar16 = uVar15;
  lVar14 = lVar13;
  while( true ) {
    while (uVar15 != 0) {
      uVar8 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar13 << 6;
      uVar9 = *(undefined8 *)(*(long *)(lVar11 + 0x30) + uVar8 * 8);
      self = *(MainActor **)(*(long *)(lVar11 + 0x38) + uVar8 * 0x10);
      pMVar3 = Swift::MainActor::typeMetadataAccessor();
      pMVar4 = Swift::MainActor::get_shared(pMVar3,self);
      pMVar3 = pMVar4;
      FUN_1001f7290();
      UVar5 = Swift::Actor::get_unownedExecutor();
      UVar6 = UVar5;
      _swift_task_isCurrentExecutor();
      if (((ulong)UVar6.unknown & 1) == 0) {
        _swift_task_reportUnexpectedExecutor
                  ("PasteUI/CollectionView+Input.swift",0x22,1,0x54,UVar5.unknown,pMVar3);
      }
      uVar8 = objc_stub::frame((ID)self);
      _CGRectContainsPoint();
      _swift_release(pMVar4);
      if ((uVar8 & 1) != 0) {
        _swift_bridgeObjectRelease(lVar11);
        FUN_10000c650(lVar11,puVar12,~uVar10,lVar14,uVar16);
        uVar7 = 0;
        goto LAB_100228718;
      }
      uVar15 = uVar15 - 1 & uVar15;
      uVar16 = uVar15;
      lVar14 = lVar13;
    }
    bVar2 = SCARRY8(lVar13,1);
    lVar13 = lVar13 + 1;
    if (bVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100228778);
      (*pcVar1)();
    }
    if ((long)(0x3f - uVar10 >> 6) <= lVar13) break;
    uVar15 = puVar12[lVar13];
  }
  _swift_bridgeObjectRelease(lVar11);
  FUN_10000c650(lVar11,puVar12,~uVar10,lVar14,0);
  uVar9 = 0;
  uVar7 = 1;
LAB_100228718:
  auVar17._8_8_ = uVar7;
  auVar17._0_8_ = uVar9;
  return auVar17;
}



/* Address: 0x100228778 | FUN_100228778 */

void FUN_100228778(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  MainActor *pMVar1;
  undefined1 auStack_60 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 local_40;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  local_50 = param_2;
  uStack_48 = param_3;
  local_40 = param_4;
  FUN_1002288c8(FUN_100228b8c,auStack_60,"PasteUI/CollectionView+Input.swift",0x22,2,0x5f,pMVar1);
  return;
}



/* Address: 0x1002287ec | FUN_1002287ec */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002287ec(long param_1,undefined8 param_2,undefined8 param_3)

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
              ("PasteUI/CollectionView+Input.swift",0x22,1,0x5f,UVar3.unknown,pMVar1);
  }
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 == 0) {
    _swift_release(pMVar2);
  }
  else {
    FUN_100228c78(param_2,param_3,1);
    _swift_release(pMVar2);
  }
  return;
}



/* Address: 0x1002288c8 | FUN_1002288c8 */

void FUN_1002288c8(undefined8 param_1,MainActor *param_2,undefined *param_3,char *param_4,
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
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100228a50);
    (*pcVar1)();
  }
  puVar3 = &DAT_100ec2a28;
  _swift_allocObject(&DAT_100ec2a28,0x20,7);
  *(MainActor **)(puVar3 + 0x10) = param_2;
  *(undefined **)(puVar3 + 0x18) = param_3;
  (*(code *)param_2)(param_1);
  puVar4 = puVar3;
  _swift_isEscapingClosureAtFileLocation(puVar3,"",0,0,0,0);
  _swift_release(puVar3);
  if (unaff_x21 == 0) {
    if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1002289b4);
      (*pcVar1)();
    }
  }
  else if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100228988);
    (*pcVar1)();
  }
  return;
}



/* Address: 0x100228a50 | FUN_100228a50 */

void FUN_100228a50(long param_1,undefined8 param_2,long param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long extraout_x1;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  puVar2 = (undefined *)
           objc_stub::invalidate(*(ID *)(unaff_x20 + _TtC7PasteUI14CollectionView::dragWaitTimer));
  lVar4 = extraout_x1;
  FUN_10022b1cc();
  if ((-1 < param_1) && (param_1 < lVar4)) {
    puVar3 = &DAT_100fb6488;
    FUN_1000037f0(&DAT_100fb6488,&DAT_100c35590);
    _swift_allocObject();
    *(undefined8 *)(puVar3 + 0x18) = 2;
    *(undefined8 *)(puVar3 + 0x10) = 1;
    _swift_bridgeObjectRelease(puVar2);
    param_4 = 0;
    *(long *)(puVar3 + 0x20) = param_1;
    puVar2 = puVar3;
    param_3 = param_1;
  }
  puVar1 = (undefined8 *)
           (unaff_x20 + _TtC7PasteUI14CollectionView::___lazy_storage___cellSelectionManager);
  uVar5 = *puVar1;
  *puVar1 = puVar2;
  puVar1[1] = lVar4;
  puVar1[2] = param_3;
  *(undefined1 *)(puVar1 + 3) = param_4;
  _swift_bridgeObjectRelease(uVar5);
  FUN_100228f6c();
  return;
}



/* Address: 0x100228b1c | FUN_100228b1c */

void FUN_100228b1c(void)

{
  long unaff_x20;
  
  _swift_unknownObjectWeakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x100228b40 | FUN_100228b40 */

void FUN_100228b40(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x100228b64 | FUN_100228b64 */

void FUN_100228b64(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100228778(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined1 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x100228b70 | FUN_100228b70 */

void FUN_100228b70(long param_1,long param_2)

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



/* Address: 0x100228b84 | FUN_100228b84 */

void FUN_100228b84(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x100228b8c | FUN_100228b8c */

void FUN_100228b8c(void)

{
  long unaff_x20;
  
  FUN_1002287ec(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined1 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x100228ba8 | FUN_100228ba8 */

void FUN_100228ba8(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x100228bb8 | FUN_100228bb8 */

void FUN_100228bb8(long param_1)

{
  code *pcVar1;
  long lVar2;
  
  lVar2 = param_1;
  FUN_10022b1cc();
  if (*(long *)(lVar2 + 0x10) == 0) {
    _swift_bridgeObjectRelease();
    return;
  }
  lVar2 = *(long *)(lVar2 + *(long *)(lVar2 + 0x10) * 8 + 0x18);
  _swift_bridgeObjectRelease();
  if (!SCARRY8(lVar2,1)) {
    FUN_100228c78(lVar2 + 1,param_1,1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100228c18);
  (*pcVar1)();
}



/* Address: 0x100228c18 | FUN_100228c18 */

void FUN_100228c18(long param_1)

{
  code *pcVar1;
  long lVar2;
  
  lVar2 = param_1;
  FUN_10022b1cc();
  if (*(long *)(lVar2 + 0x10) == 0) {
    _swift_bridgeObjectRelease();
    return;
  }
  lVar2 = *(long *)(lVar2 + *(long *)(lVar2 + 0x10) * 8 + 0x18);
  _swift_bridgeObjectRelease();
  if (!SBORROW8(lVar2,1)) {
    FUN_100228c78(lVar2 + -1,param_1,1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100228c78);
  (*pcVar1)();
}



/* Address: 0x100228c78 | FUN_100228c78 */

void FUN_100228c78(undefined *param_1,undefined8 param_2,uint param_3)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  puVar2 = param_1;
  FUN_10022b1cc();
  puVar3 = &DAT_100fb6488;
  FUN_1000037f0(&DAT_100fb6488,&DAT_100c35590);
  _swift_initStackObject();
  *(undefined8 *)(puVar3 + 0x18) = 2;
  *(undefined8 *)(puVar3 + 0x10) = 1;
  *(undefined **)(puVar3 + 0x20) = param_1;
  if ((*(long *)(puVar2 + 0x10) == 1) &&
     ((puVar2 == puVar3 || (*(undefined **)(puVar2 + 0x20) == param_1)))) {
    _swift_bridgeObjectRelease(puVar2);
    _swift_setDeallocating(puVar3);
  }
  else {
    _swift_bridgeObjectRelease(puVar2);
    _swift_setDeallocating(puVar3);
    plVar1 = (long *)(unaff_x20 +
                     _TtC7PasteUI14CollectionView::___lazy_storage___cellSelectionManager);
    lVar4 = *plVar1;
    lVar6 = plVar1[3];
    lVar9 = plVar1[2];
    lVar8 = plVar1[1];
    _swift_bridgeObjectRetain();
    FUN_10022df78(param_1,param_2);
    lVar5 = *plVar1;
    *plVar1 = lVar4;
    plVar1[2] = lVar9;
    plVar1[1] = lVar8;
    *(char *)(plVar1 + 3) = (char)lVar6;
    _swift_bridgeObjectRelease(lVar5);
    FUN_100228f6c();
    lVar6 = *(long *)(*plVar1 + 0x10);
    if (lVar6 != 0) {
      uVar7 = *(undefined8 *)(*plVar1 + lVar6 * 8 + 0x18);
      puVar3 = &DAT_100ec2a50;
      _swift_allocObject(&DAT_100ec2a50,0x18,7);
      _swift_unknownObjectWeakInit(puVar3 + 0x10);
      puVar2 = &DAT_100ec2a78;
      _swift_allocObject(&DAT_100ec2a78,0x20,7);
      *(undefined **)(puVar2 + 0x10) = puVar3;
      *(undefined **)(puVar2 + 0x18) = param_1;
      _swift_retain(puVar3);
      FUN_10022c9c4(uVar7,param_3 & 1,FUN_100229130,puVar2);
      _swift_release(puVar3);
      _swift_release(puVar2);
    }
  }
  return;
}



/* Address: 0x100228e1c | FUN_100228e1c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100228e1c(ulong param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_58 [24];
  
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 != 0) {
    if ((param_1 & 1) == 0) {
      return 0;
    }
    lVar2 = param_2 + _TtC7PasteUI14CollectionView::delegate;
    _swift_beginAccess(lVar2,auStack_58,0,0);
    lVar1 = lVar2;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar1 != 0) {
      lVar3 = *(long *)(lVar2 + 8);
      lVar2 = lVar1;
      _swift_getObjectType();
      (**(code **)(lVar3 + 0x20))(param_2,param_3,lVar2,lVar3);
      _swift_unknownObjectRelease(lVar1);
    }
  }
  return 0;
}



/* Address: 0x100228ee8 | FUN_100228ee8 */

void FUN_100228ee8(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  
  FUN_10022b1cc();
  if (-1 < param_2) {
    lVar3 = 0;
    FUN_100229138();
    _swift_bridgeObjectRelease(param_1);
    lVar5 = *(long *)(lVar3 + 0x10);
    if (lVar5 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = *(long *)(lVar3 + lVar5 * 8 + 0x18);
    }
    plVar1 = (long *)(unaff_x20 +
                     _TtC7PasteUI14CollectionView::___lazy_storage___cellSelectionManager);
    lVar4 = *plVar1;
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    plVar1[2] = lVar6;
    *(bool *)(plVar1 + 3) = lVar5 == 0;
    _swift_bridgeObjectRelease(lVar4);
    FUN_100228f6c();
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100228f6c);
  (*pcVar2)();
}



/* Address: 0x100228f6c | FUN_100228f6c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100228f6c(void)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  bool bVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long unaff_x20;
  long lVar14;
  long lVar15;
  ulong uVar16;
  undefined1 auStack_78 [24];
  
  lVar14 = _TtC7PasteUI14CollectionView::visibleCells;
  _swift_beginAccess(unaff_x20 + _TtC7PasteUI14CollectionView::visibleCells,auStack_78,0,0);
  lVar14 = *(long *)(unaff_x20 + lVar14);
  uVar11 = 1L << ((ulong)*(byte *)(lVar14 + 0x20) & 0x3f);
  uVar16 = 0xffffffffffffffff;
  if ((*(byte *)(lVar14 + 0x20) & 0x3f) < 6) {
    uVar16 = ~(-1L << (uVar11 & 0x3f));
  }
  uVar16 = uVar16 & *(ulong *)(lVar14 + 0x40);
  lVar8 = lVar14;
  _swift_bridgeObjectRetain();
  lVar13 = 0;
  do {
    while (uVar16 == 0) {
      bVar6 = SCARRY8(lVar13,1);
      lVar13 = lVar13 + 1;
      if (bVar6) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1002290e8);
        (*pcVar5)();
      }
      if ((long)(uVar11 + 0x3f >> 6) <= lVar13) {
        _swift_release(lVar14);
        return;
      }
      uVar16 = ((ulong *)(lVar14 + 0x40))[lVar13];
    }
    uVar9 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
    uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
    uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
    uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
    uVar16 = uVar16 - 1 & uVar16;
    uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | lVar13 << 6;
    lVar15 = *(long *)(*(long *)(lVar14 + 0x30) + uVar9 * 8);
    puVar2 = (undefined8 *)(*(long *)(lVar14 + 0x38) + uVar9 * 0x10);
    uVar7 = *puVar2;
    lVar3 = puVar2[1];
    FUN_10022b1cc();
    lVar12 = 0x20;
    lVar4 = *(long *)(lVar8 + 0x10);
    do {
      lVar10 = lVar4;
      if (lVar10 == 0) break;
      plVar1 = (long *)(lVar8 + lVar12);
      lVar12 = lVar12 + 8;
      lVar4 = lVar10 + -1;
    } while (*plVar1 != lVar15);
    _swift_getObjectType(uVar7);
    _swift_bridgeObjectRelease(lVar8);
    (**(code **)(lVar3 + 0x10))(lVar10 != 0,uVar7,lVar3);
    lVar8 = 0;
  } while( true );
}



/* Address: 0x1002290e8 | FUN_1002290e8 */

void FUN_1002290e8(void)

{
  long unaff_x20;
  
  _swift_unknownObjectWeakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x10022910c | FUN_10022910c */

void FUN_10022910c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x100229130 | FUN_100229130 */

void FUN_100229130(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100228e1c(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100229138 | FUN_100229138 */

undefined * FUN_100229138(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  lVar3 = param_2 - param_1;
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100229234);
    (*pcVar4)();
  }
  if (lVar3 == 0) {
    return PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (0 < lVar3) {
    puVar5 = &DAT_100fb6488;
    FUN_1000037f0(&DAT_100fb6488,&DAT_100c35590);
    _swift_allocObject();
    puVar6 = puVar5;
    _malloc_size();
    puVar1 = puVar6 + -0x19;
    if (0x1f < (long)puVar6) {
      puVar1 = puVar6 + -0x20;
    }
    *(long *)(puVar5 + 0x10) = lVar3;
    *(long *)(puVar5 + 0x18) = ((long)puVar1 >> 3) << 1;
  }
  lVar2 = param_2;
  if (param_2 <= param_1) {
    lVar2 = param_1;
  }
  if (param_1 != param_2) {
    lVar7 = 0;
    do {
      if (param_2 < param_1) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10022922c);
        (*pcVar4)();
      }
      if (lVar2 - param_1 == lVar7) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100229230);
        (*pcVar4)();
      }
      *(long *)(puVar5 + lVar7 * 8 + 0x20) = param_1 + lVar7;
      if (lVar3 + -1 == lVar7) {
        return puVar5;
      }
      lVar7 = lVar7 + 1;
    } while (lVar3 != lVar7);
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x100229228);
  (*pcVar4)();
}



/* Address: 0x100229234 | FUN_100229234 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100229234(void)

{
  long lVar1;
  ID IVar2;
  undefined *self;
  long unaff_x20;
  
  lVar1 = _TtCC7PasteUI14CollectionView10ScrollView::___lazy_storage___documentView;
  IVar2 = *(ID *)(unaff_x20 +
                 _TtCC7PasteUI14CollectionView10ScrollView::___lazy_storage___documentView);
  if (IVar2 == 0) {
    self = &_OBJC_CLASS___NSView;
    _objc_allocWithZone();
    IVar2 = objc_stub::init((ID)self);
    *(ID *)(unaff_x20 + lVar1) = IVar2;
  }
  return IVar2;
}



/* Address: 0x1002292a0 | FUN_1002292a0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1002292a0(void)

{
  long lVar1;
  ID self;
  long unaff_x20;
  
  lVar1 = _TtCC7PasteUI14CollectionView10ScrollView::___lazy_storage___scrollView;
  self = *(ID *)(unaff_x20 + _TtCC7PasteUI14CollectionView10ScrollView::___lazy_storage___scrollView
                );
  if (self == 0) {
    FUN_100236a6c();
    _swift_getObjCClassFromMetadata();
    _objc_allocWithZone();
    self = objc_stub::init(self);
    objc_stub::setVerticalScrollElasticity_(self,1);
    objc_stub::setHorizontalScrollElasticity_(self,2);
    objc_stub::setHasHorizontalScroller_(self,0);
    objc_stub::setDrawsBackground_(self,0);
    *(ID *)(unaff_x20 + lVar1) = self;
  }
  return self;
}



/* Address: 0x100229340 | FUN_100229340 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100229340(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  ID IVar5;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(unaff_x20 + _TtCC7PasteUI14CollectionView10ScrollView::onScroll);
  *puVar1 = FUN_100004520;
  puVar1[1] = 0;
  *(undefined8 *)
   (unaff_x20 + _TtCC7PasteUI14CollectionView10ScrollView::___lazy_storage___documentView) = 0;
  *(undefined8 *)
   (unaff_x20 + _TtCC7PasteUI14CollectionView10ScrollView::___lazy_storage___scrollView) = 0;
  *(undefined8 *)(unaff_x20 + _TtCC7PasteUI14CollectionView10ScrollView::lastScrollTimestamp) = 0;
  *(undefined1 *)
   (unaff_x20 + _TtCC7PasteUI14CollectionView10ScrollView::shouldSilenceScrollingEvents) = 0;
  lVar2 = _TtCC7PasteUI14CollectionView10ScrollView::scrollAnimator;
  lVar3 = 0;
  FUN_1001f6328();
  _swift_allocObject();
  puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1001f350c();
  *(undefined **)(lVar3 + 0x10) = puVar4;
  *(undefined8 *)(lVar3 + 0x20) = 0;
  *(undefined8 *)(lVar3 + 0x18) = 0;
  *(undefined8 *)(lVar3 + 0x30) = 0;
  *(undefined8 *)(lVar3 + 0x28) = 0;
  *(undefined8 *)(lVar3 + 0x38) = 0;
  *(long *)(unaff_x20 + lVar2) = lVar3;
  *(undefined **)(unaff_x20 + _TtCC7PasteUI14CollectionView10ScrollView::cancellables) =
       PTR___swiftEmptySetSingleton_100eae0e8;
  FUN_10022a2dc();
  IVar5 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffa0,"initWithFrame:",param_1,
                              param_2,param_3,param_4);
  FUN_100229620();
  return IVar5;
}



/* Address: 0x10022946c | _TtCC7PasteUI14CollectionView10ScrollView::initWithFrame: */

/* Function Stack Size: 0x30 bytes */

ID __thiscall
_TtCC7PasteUI14CollectionView10ScrollView::initWithFrame_
          (_TtCC7PasteUI14CollectionView10ScrollView *this,ID param_1,SEL param_2,CGRect param_3)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  char *pcVar5;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fb6f30;
  FUN_100003a00(&DAT_100fb6f30,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  pcVar5 = (char *)UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar5 & 1) == 0) {
    pcVar5 = "PasteUI/CollectionView.ScrollView.swift";
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/CollectionView.ScrollView.swift",0x27,1,0x2c,UVar4.unknown,puVar3);
  }
  FUN_100229340();
  _swift_release(pMVar2);
  return (ID)pcVar5;
}



/* Address: 0x100229558 | _TtCC7PasteUI14CollectionView10ScrollView::initWithCoder: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtCC7PasteUI14CollectionView10ScrollView::initWithCoder_(ID param_1,SEL param_2,ID param_3)

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
              ("PasteUI/CollectionView.ScrollView.swift",0x27,1,0x32,UVar4.unknown,puVar3);
  }
  FUN_10022a330();
  _swift_release(pMVar2);
  return param_3;
}



/* Address: 0x100229620 | FUN_100229620 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100229920 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100229620(void)

{
  long lVar1;
  long lVar2;
  Publisher PVar3;
  Publisher self;
  undefined *puVar4;
  _ArrayBuffer _Var5;
  MainActor *pMVar6;
  undefined8 *puVar7;
  UnownedSerialExecutor UVar8;
  UnownedSerialExecutor UVar9;
  undefined *puVar10;
  NSArray *pNVar11;
  AnyCancellable *pAVar12;
  long extraout_x8;
  ID unaff_x20;
  ID IVar13;
  long lVar14;
  code *pcVar15;
  long local_100;
  long local_f8;
  undefined1 auStack_f0 [144];
  
  PVar3 = Publisher::_typeMetadataAccessor();
  local_100 = *(long *)(PVar3.unknown + -8);
  self = PVar3;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_100 + 0x40));
  lVar14 = (long)&local_100 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_1002292a0();
  puVar4 = self.unknown;
  FUN_100229234();
  objc_stub::setDocumentView_((ID)self.unknown,puVar4);
  local_f8 = _TtCC7PasteUI14CollectionView10ScrollView::___lazy_storage___scrollView;
  IVar13 = *(ID *)(unaff_x20 +
                  _TtCC7PasteUI14CollectionView10ScrollView::___lazy_storage___scrollView);
  _Var5.unknown = &DAT_100fb7040;
  FUN_1000037f0(&DAT_100fb7040,&DAT_100c34f70);
  _swift_initStackObject();
  *(undefined8 *)(_Var5.unknown + 0x18) = 3;
  *(undefined8 *)(_Var5.unknown + 0x10) = 1;
  *(ID *)(_Var5.unknown + 0x20) = IVar13;
  if (((ulong)_Var5.unknown & 0xc000000000000001) != 0) {
    IVar13 = 0;
    Swift::_ArrayBuffer::__getElementSlowPath(0,_Var5);
  }
  pMVar6 = Swift::MainActor::typeMetadataAccessor();
  puVar4 = PTR_typeMetadataAccessor_100eaec10;
  pMVar6 = Swift::MainActor::get_shared(pMVar6,pMVar6);
  puVar7 = &DAT_100fb6f30;
  FUN_100003a00(&DAT_100fb6f30,puVar4,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar8 = Swift::Actor::get_unownedExecutor();
  UVar9 = UVar8;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar9.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/NSView+LayoutBuilder.swift",0x22,1,0x15,UVar8.unknown,puVar7);
  }
  objc_stub::addSubview_(unaff_x20,IVar13);
  objc_stub::setTranslatesAutoresizingMaskIntoConstraints_(IVar13,0);
  _swift_release(pMVar6);
  FUN_1002292a0();
  if (DAT_100fb6230 != -1) {
    _swift_once(&DAT_100fb6230,FUN_1001f9ff4);
  }
  IVar13 = unaff_x20;
  FUN_100211c08(DAT_101057750,DAT_101057758,DAT_101057760,DAT_101057768);
  puVar4 = &DAT_100fb7ad0;
  FUN_1000037f0(&DAT_100fb7ad0,&DAT_100c36620);
  _swift_initStackObject();
  *(undefined8 *)(puVar4 + 0x18) = 2;
  *(undefined8 *)(puVar4 + 0x10) = 1;
  puVar10 = &DAT_100fb7050;
  FUN_1000037f0(&DAT_100fb7050,&DAT_100c366b0);
  *(undefined **)(puVar4 + 0x38) = puVar10;
  *(undefined ***)(puVar4 + 0x40) = &PTR_PTR_100ec00b8;
  *(ID *)(puVar4 + 0x20) = IVar13;
  puVar10 = puVar4;
  thunk_FUN_1001f9238(puVar4);
  _swift_setDeallocating(puVar4);
  FUN_100004594(puVar4 + 0x20);
  FUN_1001f91f4(0);
  pNVar11 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  NSLayoutConstraint::activateConstraints_((ID)&_OBJC_CLASS___NSLayoutConstraint,pNVar11);
  _swift_bridgeObjectRelease(puVar10);
  _swift_setDeallocating(_Var5.unknown);
  _swift_arrayDestroy(_Var5.unknown + 0x20,*(undefined8 *)(_Var5.unknown + 0x10),
                      PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8);
  NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  lVar2 = local_f8;
  IVar13 = objc_stub::contentView(*(ID *)(unaff_x20 + local_f8));
  (extension_Foundation)::__C::NSNotificationCenter::_publisher(lVar14,IVar13,IVar13);
  puVar4 = &DAT_100ec2aa0;
  _swift_allocObject(&DAT_100ec2aa0,0x18,7);
  _swift_unknownObjectWeakInit(puVar4 + 0x10);
  FUN_100003a00(&DAT_100fb7678,PTR__typeMetadataAccessor_100ea79b0,
                PTR__Foundation__Publisher_>Combine__Publisher_100ea79a8);
  pAVar12 = (extension_Combine)::Combine::Publisher::_sink();
  _swift_release(puVar4);
  pcVar15 = *(code **)(local_100 + 8);
  (*pcVar15)(lVar14,PVar3.unknown);
  lVar1 = _TtCC7PasteUI14CollectionView10ScrollView::cancellables;
  _swift_beginAccess(unaff_x20 + _TtCC7PasteUI14CollectionView10ScrollView::cancellables,auStack_f0,
                     0x21,0);
  Combine::AnyCancellable::store(pAVar12,(undefined *)(unaff_x20 + lVar1));
  _swift_endAccess(auStack_f0);
  _swift_release(pAVar12);
  NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  (extension_Foundation)::__C::NSNotificationCenter::_publisher
            (lVar14,auStack_f0,*(undefined8 *)(unaff_x20 + lVar2));
  puVar4 = &DAT_100ec2aa0;
  _swift_allocObject(&DAT_100ec2aa0,0x18,7);
  _swift_unknownObjectWeakInit(puVar4 + 0x10);
  pAVar12 = (extension_Combine)::Combine::Publisher::_sink();
  _swift_release(puVar4);
  (*pcVar15)(lVar14,PVar3.unknown);
  _swift_beginAccess(unaff_x20 + lVar1,auStack_f0,0x21,0);
  Combine::AnyCancellable::store(pAVar12,(undefined *)(unaff_x20 + lVar1));
  _swift_endAccess(auStack_f0);
  _swift_release(pAVar12);
  return;
}



/* Address: 0x100229b04 | FUN_100229b04 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

MainActor * FUN_100229b04(undefined8 param_1,long param_2)

{
  code *pcVar1;
  ID IVar2;
  undefined *puVar3;
  MainActor *pMVar4;
  undefined8 *puVar5;
  UnownedSerialExecutor UVar6;
  UnownedSerialExecutor UVar7;
  ID IVar8;
  undefined8 extraout_d0;
  
  pMVar4 = Swift::MainActor::typeMetadataAccessor();
  puVar3 = PTR_typeMetadataAccessor_100eaec10;
  pMVar4 = Swift::MainActor::get_shared(pMVar4,pMVar4);
  puVar5 = &DAT_100fb6f30;
  FUN_100003a00(&DAT_100fb6f30,puVar3,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar6 = Swift::Actor::get_unownedExecutor();
  UVar7 = UVar6;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar7.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/CollectionView.ScrollView.swift",0x27,1,0x3b,UVar6.unknown,puVar5);
  }
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 != 0) {
    if ((*(byte *)(param_2 + _TtCC7PasteUI14CollectionView10ScrollView::shouldSilenceScrollingEvents
                  ) & 1) == 0) {
      pcVar1 = *(code **)(param_2 + _TtCC7PasteUI14CollectionView10ScrollView::onScroll);
      IVar2 = ((undefined8 *)(param_2 + _TtCC7PasteUI14CollectionView10ScrollView::onScroll))[1];
      IVar8 = IVar2;
      _swift_retain();
      FUN_1002292a0();
      IVar8 = objc_stub::contentView(IVar8);
      objc_stub::bounds(IVar8);
      (*pcVar1)(extraout_d0,0);
      _swift_release(pMVar4);
      _swift_release(IVar2);
    }
    else {
      _swift_release(pMVar4);
    }
    return (MainActor *)0x0;
  }
  _swift_release(pMVar4);
  return pMVar4;
}



/* Address: 0x100229c70 | FUN_100229c70 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

MainActor * FUN_100229c70(undefined8 param_1,long param_2)

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
              ("PasteUI/CollectionView.ScrollView.swift",0x27,1,0x3f,UVar4.unknown,puVar3);
  }
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 != 0) {
    FUN_10022a0e8();
    _swift_release(pMVar2);
    return (MainActor *)0x0;
  }
  _swift_release(pMVar2);
  return pMVar2;
}



/* Address: 0x100229d4c | FUN_100229d4c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100229d4c(double param_1,double param_2,ulong param_3,code *param_4,undefined8 param_5)

{
  long lVar1;
  bool bVar2;
  ulong self;
  ID IVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined *puVar7;
  code *pcVar8;
  double extraout_d0;
  double dVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  undefined1 local_e0 [8];
  double dStack_d8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  undefined8 uStack_b8;
  code *local_b0;
  undefined *puStack_a8;
  code *local_a0;
  undefined *puStack_98;
  code *local_90;
  undefined *puStack_88;
  
  self = param_3;
  dVar9 = param_2;
  FUN_1002292a0();
  IVar3 = objc_stub::contentView(self);
  objc_stub::bounds(IVar3);
  bVar2 = false;
  if ((extraout_d0 == param_1) && (bVar2 = false, !NAN(dVar9) && !NAN(param_2))) {
    bVar2 = dVar9 == param_2;
  }
  if (!bVar2) {
    if ((param_3 & 1) != 0) {
      dVar9 = extraout_d0;
      _CACurrentMediaTime(0);
      dVar11 = dVar9 - *(double *)
                        (unaff_x20 + _TtCC7PasteUI14CollectionView10ScrollView::lastScrollTimestamp)
      ;
      dVar12 = (double)NEON_fminnm(dVar11,0x3fd0000000000000);
      *(double *)(unaff_x20 + _TtCC7PasteUI14CollectionView10ScrollView::lastScrollTimestamp) =
           dVar9;
      IVar3 = objc_stub::contentView
                        (*(ID *)(unaff_x20 +
                                _TtCC7PasteUI14CollectionView10ScrollView::
                                ___lazy_storage___scrollView));
      objc_stub::bounds(IVar3);
      if (dVar12 <= 0.1) {
        dVar12 = 0.0;
      }
      puVar4 = &DAT_100ec2aa0;
      _swift_allocObject(&DAT_100ec2aa0,0x18,7);
      _swift_unknownObjectWeakInit(puVar4 + 0x10);
      if (param_4 == (code *)0x0) {
        puVar7 = (undefined *)0x0;
        pcVar8 = FUN_1001f67e4;
      }
      else {
        puVar7 = &DAT_100ec2b18;
        _swift_allocObject(&DAT_100ec2b18,0x20,7);
        *(code **)(puVar7 + 0x10) = param_4;
        *(undefined8 *)(puVar7 + 0x18) = param_5;
        pcVar8 = FUN_10022a474;
      }
      puVar5 = &DAT_100ec2ac8;
      _swift_allocObject(&DAT_100ec2ac8,0x20,7);
      *(code **)(puVar5 + 0x10) = pcVar8;
      *(undefined **)(puVar5 + 0x18) = puVar7;
      dVar9 = dVar12 * 0.005;
      if (dVar12 * 0.005 <= 0.0001) {
        dVar9 = 0.0001;
      }
      puVar7 = &DAT_100ec2af0;
      _swift_allocObject(&DAT_100ec2af0,0x48,7);
      *(undefined8 *)(puVar7 + 0x18) = 0xbfe8000000000000;
      *(undefined8 *)(puVar7 + 0x10) = 0x3ff0000000000000;
      *(undefined8 *)(puVar7 + 0x28) = 0xbffb333333333335;
      *(undefined8 *)(puVar7 + 0x20) = 0x3fe8000000000000;
      uVar10 = 0x4003333333333334;
      *(undefined8 *)(puVar7 + 0x38) = 0x3fd3333333333334;
      *(undefined8 *)(puVar7 + 0x30) = 0x4003333333333334;
      *(double *)(puVar7 + 0x40) = dVar9;
      FUN_100011128(param_4,param_5);
      _CACurrentMediaTime();
      lVar1 = _TtCC7PasteUI14CollectionView10ScrollView::scrollAnimator;
      local_b0 = FUN_1001f6900;
      local_a0 = FUN_10022a438;
      local_90 = FUN_10022a430;
      uVar6 = *(undefined8 *)(unaff_x20 + _TtCC7PasteUI14CollectionView10ScrollView::scrollAnimator)
      ;
      dStack_d8 = dVar11;
      local_d0 = param_1;
      dStack_c8 = param_2;
      local_c0 = dVar12;
      uStack_b8 = uVar10;
      puStack_a8 = puVar7;
      puStack_98 = puVar5;
      puStack_88 = puVar4;
      _swift_retain(uVar6);
      FUN_10020b948(local_e0,0x4f746e65746e6f63,0xed00007465736666);
      _swift_release(uVar6);
      uVar6 = *(undefined8 *)(unaff_x20 + lVar1);
      _swift_retain(uVar6);
      FUN_1001f4d94();
      _swift_release(uVar6);
      FUN_100005808(local_e0,&DAT_100fb6c88,&DAT_100c35ab8);
      return;
    }
    IVar3 = objc_stub::contentView
                      (*(ID *)(unaff_x20 +
                              _TtCC7PasteUI14CollectionView10ScrollView::
                              ___lazy_storage___scrollView));
    objc_stub::bounds(IVar3);
    objc_stub::setBounds_(IVar3,param_1,param_2);
  }
  if (param_4 != (code *)0x0) {
    (*param_4)(1);
  }
  return;
}



/* Address: 0x10022a054 | FUN_10022a054 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10022a054(undefined8 *param_1,long param_2)

{
  ID IVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *param_1;
  uVar3 = param_1[1];
  IVar1 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (IVar1 != 0) {
    FUN_1002292a0();
    IVar1 = objc_stub::contentView(IVar1);
    objc_stub::bounds(IVar1);
    objc_stub::setBounds_(IVar1,uVar2,uVar3);
    return 0;
  }
  return 0;
}



/* Address: 0x10022a0e8 | FUN_10022a0e8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10022a0e8(void)

{
  long lVar1;
  int iVar2;
  long extraout_x8;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long alStack_a0 [3];
  undefined1 auStack_88 [24];
  long local_70;
  
  lVar1 = _TtCC7PasteUI14CollectionView10ScrollView::scrollAnimator;
  lVar3 = *(long *)(unaff_x20 + _TtCC7PasteUI14CollectionView10ScrollView::scrollAnimator);
  _swift_beginAccess(lVar3 + 0x18,alStack_a0,0,0);
  FUN_1001f625c(lVar3 + 0x18,auStack_88);
  if (local_70 == 0) {
    FUN_100005808(auStack_88,&DAT_100fb5f68,&DAT_100c34cd8);
  }
  else {
    FUN_100004640(auStack_88,local_70);
    lVar6 = *(long *)(local_70 + -8);
    (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar6 + 0x40));
    plVar5 = (long *)((long)alStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
    (**(code **)(lVar6 + 0x10))(plVar5);
    _swift_retain(lVar3);
    FUN_100005808(auStack_88,&DAT_100fb5f68,&DAT_100c34cd8);
    iVar2 = (int)*(undefined8 *)(*plVar5 + 0x20);
    _CVDisplayLinkIsRunning();
    _swift_release(lVar3);
    (**(code **)(lVar6 + 8))(plVar5,local_70);
    if (iVar2 != 0) {
      uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
      _swift_retain(uVar4);
      FUN_1001f4af4();
      _swift_release(uVar4);
    }
  }
  return;
}


