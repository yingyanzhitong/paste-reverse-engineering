/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10022c500 | _TtC7PasteUI14CollectionView::layout */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC7PasteUI14CollectionView::layout(ID param_1,SEL param_2)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  char *pcVar4;
  objc_super local_90;
  undefined1 auStack_80 [80];
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1001f7290();
  UVar3 = Swift::Actor::get_unownedExecutor();
  pcVar4 = (char *)UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar4 & 1) == 0) {
    pcVar4 = "PasteUI/CollectionView.swift";
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/CollectionView.swift",0x1c,1,0x7c,UVar3.unknown,pMVar1);
  }
  FUN_10022dac8();
  local_90.receiver = param_1;
  local_90.super_class = (class_t *)pcVar4;
  _objc_msgSendSuper2(&local_90,"layout");
  FUN_10022b4f8(auStack_80);
  FUN_10022ce5c(auStack_80);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x10022c5d4 | FUN_10022c5d4 */

void FUN_10022c5d4(void)

{
  FUN_10022dac8();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"viewDidChangeEffectiveAppearance");
  FUN_100221d34(1);
  return;
}



/* Address: 0x10022c60c | _TtC7PasteUI14CollectionView::viewDidChangeEffectiveAppearance */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC7PasteUI14CollectionView::viewDidChangeEffectiveAppearance(ID param_1,SEL param_2)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  char *pcVar4;
  objc_super local_40;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1001f7290();
  UVar3 = Swift::Actor::get_unownedExecutor();
  pcVar4 = (char *)UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar4 & 1) == 0) {
    pcVar4 = "PasteUI/CollectionView.swift";
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/CollectionView.swift",0x1c,1,0x82,UVar3.unknown,pMVar1);
  }
  FUN_10022dac8();
  local_40.receiver = param_1;
  local_40.super_class = (class_t *)pcVar4;
  _objc_msgSendSuper2(&local_40,"viewDidChangeEffectiveAppearance");
  FUN_100221d34(1);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x10022c6d8 | FUN_10022c6d8 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_10022c6d8(void)

{
  bool bVar1;
  ID IVar2;
  NSObject *pNVar3;
  NSObject *unaff_x20;
  
  IVar2 = objc_stub::window((ID)unaff_x20);
  pNVar3 = (NSObject *)objc_stub::firstResponder(IVar2);
  if (pNVar3 != (NSObject *)0x0) {
    FUN_10000ec2c(0,&DAT_100fb7738,&PTR__OBJC_CLASS___NSResponder_100f8d730);
    bVar1 = (extension_ObjectiveC)::__C::NSObject::___infix(pNVar3,unaff_x20);
    if ((bVar1) && (IVar2 = objc_stub::window((ID)unaff_x20), IVar2 != 0)) {
      objc_stub::selectNextKeyView_(IVar2);
      return 0;
    }
  }
  return 0;
}



/* Address: 0x10022c7c0 | _TtC7PasteUI14CollectionView::insertTab: */

/* Function Stack Size: 0x18 bytes */

void _TtC7PasteUI14CollectionView::insertTab_(ID param_1,SEL param_2,ID param_3)

{
  FUN_10022c8c8();
  return;
}



/* Address: 0x10022c7d0 | FUN_10022c7d0 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_10022c7d0(void)

{
  bool bVar1;
  ID IVar2;
  NSObject *pNVar3;
  NSObject *unaff_x20;
  
  IVar2 = objc_stub::window((ID)unaff_x20);
  pNVar3 = (NSObject *)objc_stub::firstResponder(IVar2);
  if (pNVar3 != (NSObject *)0x0) {
    FUN_10000ec2c(0,&DAT_100fb7738,&PTR__OBJC_CLASS___NSResponder_100f8d730);
    bVar1 = (extension_ObjectiveC)::__C::NSObject::___infix(pNVar3,unaff_x20);
    if ((bVar1) && (IVar2 = objc_stub::window((ID)unaff_x20), IVar2 != 0)) {
      objc_stub::selectPreviousKeyView_(IVar2);
      return 0;
    }
  }
  return 0;
}



/* Address: 0x10022c8b8 | _TtC7PasteUI14CollectionView::insertBacktab: */

/* Function Stack Size: 0x18 bytes */

void _TtC7PasteUI14CollectionView::insertBacktab_(ID param_1,SEL param_2,ID param_3)

{
  FUN_10022c8c8();
  return;
}



/* Address: 0x10022c8c8 | FUN_10022c8c8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10022c8c8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  code *param_5)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1001f7290();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/CollectionView.swift",0x1c,1,param_4,UVar3.unknown,pMVar1);
  }
  if (param_3 == 0) {
    uStack_68 = 0;
    local_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
  }
  else {
    _swift_unknownObjectRetain(param_3);
    Swift::__bridgeAnyObjectToAny();
    _swift_unknownObjectRelease(param_3);
  }
  (*param_5)();
  FUN_100201adc(&local_70);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x10022c9c4 | FUN_10022c9c4 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10022c9c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ID param_5,uint param_6,code *param_7,undefined8 param_8)

{
  double *pdVar1;
  ID IVar2;
  ulong uVar3;
  long unaff_x20;
  ID self;
  double extraout_d0;
  double extraout_d0_00;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auStack_f0 [32];
  double local_d0;
  
  IVar2 = param_5;
  FUN_10022b4f8(auStack_f0);
  dVar6 = 1.5;
  self = *(ID *)(unaff_x20 + _TtC7PasteUI14CollectionView::scrollView);
  FUN_1002292a0();
  IVar2 = objc_stub::contentView(IVar2);
  objc_stub::bounds(IVar2);
  IVar2 = 0;
  dVar7 = dVar6;
  FUN_1002292a0();
  IVar2 = objc_stub::contentView(IVar2);
  objc_stub::bounds(IVar2);
  uVar3 = objc_stub::frame(self);
  pdVar1 = (double *)(unaff_x20 + _TtC7PasteUI14CollectionView::___lazy_storage___contentLayout);
  dVar14 = *pdVar1;
  dVar4 = pdVar1[1];
  dVar12 = pdVar1[2];
  dVar13 = pdVar1[4];
  dVar8 = pdVar1[5];
  dVar9 = pdVar1[6];
  dVar10 = pdVar1[7];
  dVar11 = pdVar1[8];
  dVar5 = dVar8;
  _CGRectGetHeight(dVar8,dVar9,dVar10,dVar11);
  dVar4 = dVar4 + (dVar13 + (dVar5 - (dVar14 + dVar12))) * (double)(long)param_5;
  _CGRectGetHeight(dVar8,dVar9,dVar10,dVar11);
  dVar8 = dVar8 - (dVar14 + dVar12);
  dVar5 = dVar4;
  _CGRectGetMaxX(dVar4,dVar12,dVar8,dVar8);
  dVar9 = extraout_d0_00;
  _CGRectGetMaxX(extraout_d0_00,dVar7,param_3);
  if (dVar5 <= dVar9) {
    dVar5 = dVar4;
    _CGRectGetMinX(dVar4,dVar12,dVar8,dVar8);
    dVar9 = extraout_d0_00;
    _CGRectGetMinX(extraout_d0_00,dVar7,param_3,param_4);
    dVar10 = extraout_d0;
    if (dVar5 < dVar9) {
      dVar10 = dVar4 - (local_d0 * 1.5 + pdVar1[4]);
      dVar6 = dVar12;
    }
  }
  else {
    dVar5 = extraout_d0_00;
    _CGRectGetWidth(extraout_d0_00,dVar7,param_3,param_4);
    dVar11 = *pdVar1;
    dVar6 = pdVar1[2];
    dVar10 = pdVar1[4];
    dVar9 = pdVar1[5];
    _CGRectGetHeight(dVar9,pdVar1[6],pdVar1[7],pdVar1[8]);
    dVar10 = dVar4 - ((dVar5 - (dVar10 + (dVar9 - (dVar11 + dVar6)))) - local_d0 * 1.5);
    dVar6 = dVar12;
  }
  _CGRectIntersectsRect(dVar4,dVar12,dVar8,dVar8,extraout_d0_00,dVar7,param_3,param_4);
  if ((uVar3 & 1) == 0) {
    FUN_100229d4c(dVar10,dVar6,param_6 & 1,param_7,param_8);
  }
  else {
    FUN_100229d4c(dVar10,dVar6,param_6 & 1,0,0);
    if (param_7 != (code *)0x0) {
      (*param_7)(1);
    }
  }
  return;
}



/* Address: 0x10022ccb0 | FUN_10022ccb0 */

void FUN_10022ccb0(undefined8 param_1)

{
  FUN_100229d4c(param_1,0,0);
  return;
}



/* Address: 0x10022cce0 | FUN_10022cce0 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10022cce0(double param_1,ID param_2)

{
  ID IVar1;
  long unaff_x20;
  long lVar2;
  double extraout_d0;
  double dVar3;
  double local_c0;
  double dStack_b8;
  double local_b0;
  double local_a0;
  double dStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
  IVar1 = param_2;
  FUN_10022b4f8(&local_c0);
  dVar3 = dStack_98;
  _CGRectGetHeight(dStack_98,local_90,uStack_88,local_80);
  dVar3 = dStack_b8 + (local_a0 + (dVar3 - (local_c0 + local_b0))) * (double)(long)param_2;
  _CGRectGetHeight(dStack_98,local_90,uStack_88,local_80);
  dStack_98 = dStack_98 - (local_c0 + local_b0);
  _CGRectGetMinX(dVar3,local_b0,dStack_98,dStack_98);
  dVar3 = dVar3 - param_1;
  lVar2 = *(long *)(unaff_x20 + _TtC7PasteUI14CollectionView::scrollView);
  FUN_1002292a0();
  IVar1 = objc_stub::contentView(IVar1);
  objc_stub::bounds(IVar1);
  if ((extraout_d0 == dVar3) && (param_1 == 0.0)) {
    return 0;
  }
  IVar1 = objc_stub::contentView
                    (*(ID *)(lVar2 + _TtCC7PasteUI14CollectionView10ScrollView::
                                     ___lazy_storage___scrollView));
  objc_stub::bounds(IVar1);
  objc_stub::setBounds_(IVar1,dVar3,0);
  return 0;
}



/* Address: 0x10022ce5c | FUN_10022ce5c */

void FUN_10022ce5c(undefined8 param_1,double param_2,double param_3,double param_4,double *param_5)

{
  double *pdVar1;
  code *pcVar2;
  double dVar3;
  ID unaff_x20;
  double dVar4;
  double extraout_d0;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  long local_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double local_88;
  double dStack_80;
  double local_78;
  double local_70;
  
  dVar8 = *param_5;
  dVar9 = param_5[1];
  dVar6 = param_5[2];
  dVar7 = param_5[3];
  dVar4 = param_5[4];
  objc_stub::bounds(unaff_x20);
  dVar3 = *(double *)(unaff_x20 + _TtC7PasteUI14CollectionView::cellCount);
  local_b8 = dVar8;
  dStack_b0 = dVar9;
  local_a8 = dVar6;
  dStack_a0 = dVar7;
  local_98 = dVar4;
  local_88 = param_2;
  dStack_80 = param_3;
  local_78 = param_4;
  local_70 = dVar3;
  FUN_10022b4f8(&local_108);
  pdVar1 = (double *)(unaff_x20 + _TtC7PasteUI14CollectionView::___lazy_storage___contentLayout);
  *pdVar1 = dVar8;
  pdVar1[1] = dVar9;
  pdVar1[2] = dVar6;
  pdVar1[3] = dVar7;
  pdVar1[4] = dVar4;
  pdVar1[5] = extraout_d0;
  pdVar1[6] = param_2;
  pdVar1[7] = param_3;
  pdVar1[8] = param_4;
  pdVar1[9] = dVar3;
  *(undefined1 *)(pdVar1 + 10) = 0;
  if (SBORROW8((long)dVar3,1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10022d084);
    (*pcVar2)();
  }
  dVar5 = extraout_d0;
  _CGRectGetHeight(extraout_d0,param_2,param_3,param_4);
  dVar9 = dVar9 + (dVar4 + (dVar5 - (dVar8 + dVar6))) * (double)((long)dVar3 + -1);
  dVar3 = extraout_d0;
  _CGRectGetHeight(extraout_d0,param_2,param_3,param_4);
  dVar3 = dVar3 - (dVar8 + dVar6);
  _CGRectGetMaxX(dVar9,dVar6,dVar3,dVar3);
  _CGRectGetHeight(extraout_d0,param_2,param_3,param_4);
  if (!SBORROW8(local_c0,1)) {
    dVar3 = dStack_e0;
    _CGRectGetHeight(dStack_e0,local_d8,uStack_d0,local_c8);
    dVar4 = dStack_100 + (local_e8 + (dVar3 - (local_108 + local_f8))) * (double)(local_c0 + -1);
    dVar3 = dStack_e0;
    _CGRectGetHeight(dStack_e0,local_d8,uStack_d0,local_c8);
    dVar3 = dVar3 - (local_108 + local_f8);
    _CGRectGetMaxX(dVar4,local_f8,dVar3,dVar3);
    _CGRectGetHeight(dStack_e0,local_d8,uStack_d0,local_c8);
    if (dVar7 + dVar9 <= dStack_f0 + dVar4) {
      FUN_10022d088(&local_108,&local_b8);
      FUN_10022a480();
    }
    else {
      FUN_10022a480();
      FUN_10022d088(&local_108,&local_b8);
    }
    FUN_100222298();
    FUN_100221d34(0);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10022d088);
  (*pcVar2)();
}



/* Address: 0x10022d088 | FUN_10022d088 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10022d088(double *param_1,double *param_2)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  undefined1 *puVar4;
  long unaff_x20;
  long lVar5;
  ID IVar6;
  double dVar7;
  double dVar8;
  double extraout_d0;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 auStack_98 [24];
  
  lVar1 = _TtC7PasteUI14CollectionView::visibleCells;
  puVar4 = auStack_98;
  _swift_beginAccess(unaff_x20 + _TtC7PasteUI14CollectionView::visibleCells,puVar4,0,0);
  uVar3 = (uint)puVar4;
  IVar6 = *(ulong *)(unaff_x20 + lVar1);
  uVar2 = IVar6;
  _swift_bridgeObjectRetain();
  FUN_10022a5b4();
  _swift_bridgeObjectRelease();
  if ((uVar3 & 0xff) != 1 && 0 < (long)uVar2) {
    dVar16 = *param_1;
    dVar7 = param_1[1];
    dVar19 = param_1[2];
    dVar14 = param_1[4];
    dVar9 = param_1[5];
    dVar10 = param_1[6];
    dVar11 = param_1[7];
    dVar12 = param_1[8];
    dVar8 = dVar9;
    _CGRectGetHeight(dVar9,dVar10,dVar11,dVar12);
    _CGRectGetHeight(dVar9,dVar10,dVar11,dVar12);
    dVar17 = *param_2;
    dVar18 = param_2[1];
    dVar20 = param_2[2];
    dVar15 = param_2[4];
    dVar11 = param_2[5];
    dVar10 = param_2[6];
    dVar12 = param_2[7];
    dVar13 = param_2[8];
    dVar9 = dVar11;
    _CGRectGetHeight(dVar11,dVar10,dVar12,dVar13);
    _CGRectGetHeight(dVar11,dVar10,dVar12,dVar13);
    lVar5 = *(long *)(unaff_x20 + _TtC7PasteUI14CollectionView::scrollView);
    FUN_1002292a0();
    IVar6 = objc_stub::contentView(IVar6);
    objc_stub::bounds(IVar6);
    lVar1 = _TtCC7PasteUI14CollectionView10ScrollView::shouldSilenceScrollingEvents;
    IVar6 = 0;
    *(undefined1 *)(lVar5 + _TtCC7PasteUI14CollectionView10ScrollView::shouldSilenceScrollingEvents)
         = 1;
    FUN_1002292a0();
    IVar6 = objc_stub::contentView(IVar6);
    objc_stub::bounds(IVar6);
    objc_stub::setBounds_
              (IVar6,((dVar18 + (dVar15 + (dVar9 - (dVar17 + dVar20))) * (double)uVar2) -
                     (dVar7 + (dVar14 + (dVar8 - (dVar16 + dVar19))) * (double)uVar2)) + extraout_d0
               ,dVar10 + 0.0);
    *(undefined1 *)(lVar5 + lVar1) = 0;
  }
  return;
}



/* Address: 0x10022d288 | FUN_10022d288 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ulong FUN_10022d288(void)

{
  undefined8 *puVar1;
  long lVar2;
  char cVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  bool bVar8;
  byte bVar9;
  ID IVar10;
  long lVar11;
  undefined8 uVar12;
  long unaff_x20;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  
  FUN_10022dac8();
  IVar10 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff90,"resignFirstResponder");
  lVar6 = _TtC7PasteUI14CollectionView::isFirstResponder;
  *(byte *)(unaff_x20 + _TtC7PasteUI14CollectionView::isFirstResponder) = (byte)IVar10 ^ 1;
  lVar11 = _TtC7PasteUI14CollectionView::visibleCells;
  _swift_beginAccess(unaff_x20 + _TtC7PasteUI14CollectionView::visibleCells,auStack_88,0,0);
  lVar5 = _TtC7PasteUI14CollectionView::dimmingMode;
  lVar11 = *(long *)(unaff_x20 + lVar11);
  uVar13 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar15 = uVar15 & *(ulong *)(lVar11 + 0x40);
  _swift_bridgeObjectRetain();
  _swift_beginAccess(unaff_x20 + lVar5,auStack_a0,0,0);
  lVar14 = 0;
  while( true ) {
    for (; uVar15 != 0; uVar15 = uVar15 - 1 & uVar15) {
      cVar3 = *(char *)(unaff_x20 + lVar5);
      if (cVar3 == '\0') {
        bVar9 = *(byte *)(unaff_x20 + lVar6) ^ 1;
      }
      else {
        bVar9 = cVar3 != '\x01';
      }
      uVar4 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
      uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      puVar1 = (undefined8 *)
               (*(long *)(lVar11 + 0x38) + LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) * 0x10 +
               lVar14 * 0x400);
      uVar12 = *puVar1;
      lVar2 = puVar1[1];
      _swift_getObjectType(uVar12);
      (**(code **)(lVar2 + 0x28))(bVar9 & 1,uVar12,lVar2);
    }
    bVar8 = SCARRY8(lVar14,1);
    lVar14 = lVar14 + 1;
    if (bVar8) break;
    if ((long)(uVar13 + 0x3f >> 6) <= lVar14) {
      _swift_release(lVar11);
      return IVar10 & 0xffffffff;
    }
    uVar15 = ((ulong *)(lVar11 + 0x40))[lVar14];
  }
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10022d438);
  (*pcVar7)();
}



/* Address: 0x10022d438 | _TtC7PasteUI14CollectionView::resignFirstResponder */

/* Function Stack Size: 0x10 bytes */

bool _TtC7PasteUI14CollectionView::resignFirstResponder(ID param_1,SEL param_2)

{
  bool bVar1;
  
  bVar1 = (bool)param_1;
  FUN_10022d604(bVar1,param_2,0xd7,FUN_10022d288);
  return bVar1;
}



/* Address: 0x10022d448 | FUN_10022d448 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ulong FUN_10022d448(void)

{
  undefined8 *puVar1;
  long lVar2;
  char cVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  bool bVar8;
  byte bVar9;
  ID IVar10;
  long lVar11;
  undefined8 uVar12;
  long unaff_x20;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  
  FUN_10022dac8();
  IVar10 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff90,"becomeFirstResponder");
  lVar6 = _TtC7PasteUI14CollectionView::isFirstResponder;
  *(char *)(unaff_x20 + _TtC7PasteUI14CollectionView::isFirstResponder) = (char)IVar10;
  lVar11 = _TtC7PasteUI14CollectionView::visibleCells;
  _swift_beginAccess(unaff_x20 + _TtC7PasteUI14CollectionView::visibleCells,auStack_88,0,0);
  lVar5 = _TtC7PasteUI14CollectionView::dimmingMode;
  lVar11 = *(long *)(unaff_x20 + lVar11);
  uVar13 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar15 = uVar15 & *(ulong *)(lVar11 + 0x40);
  _swift_bridgeObjectRetain();
  _swift_beginAccess(unaff_x20 + lVar5,auStack_a0,0,0);
  lVar14 = 0;
  while( true ) {
    for (; uVar15 != 0; uVar15 = uVar15 - 1 & uVar15) {
      cVar3 = *(char *)(unaff_x20 + lVar5);
      if (cVar3 == '\0') {
        bVar9 = *(byte *)(unaff_x20 + lVar6) ^ 1;
      }
      else {
        bVar9 = cVar3 != '\x01';
      }
      uVar4 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
      uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      puVar1 = (undefined8 *)
               (*(long *)(lVar11 + 0x38) + LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) * 0x10 +
               lVar14 * 0x400);
      uVar12 = *puVar1;
      lVar2 = puVar1[1];
      _swift_getObjectType(uVar12);
      (**(code **)(lVar2 + 0x28))(bVar9 & 1,uVar12,lVar2);
    }
    bVar8 = SCARRY8(lVar14,1);
    lVar14 = lVar14 + 1;
    if (bVar8) break;
    if ((long)(uVar13 + 0x3f >> 6) <= lVar14) {
      _swift_release(lVar11);
      return IVar10 & 0xffffffff;
    }
    uVar15 = ((ulong *)(lVar11 + 0x40))[lVar14];
  }
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10022d5f4);
  (*pcVar7)();
}



/* Address: 0x10022d5f4 | _TtC7PasteUI14CollectionView::becomeFirstResponder */

/* Function Stack Size: 0x10 bytes */

bool _TtC7PasteUI14CollectionView::becomeFirstResponder(ID param_1,SEL param_2)

{
  bool bVar1;
  
  bVar1 = (bool)param_1;
  FUN_10022d604(bVar1,param_2,0xe0,FUN_10022d448);
  return bVar1;
}



/* Address: 0x10022d604 | FUN_10022d604 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

uint FUN_10022d604(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

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
              ("PasteUI/CollectionView.swift",0x1c,1,param_3,UVar3.unknown,pMVar1);
  }
  (*param_4)(param_1);
  _swift_release(pMVar2);
  return (uint)param_1 & 1;
}



/* Address: 0x10022d6bc | FUN_10022d6bc */

void FUN_10022d6bc(void)

{
  FUN_10022dac8();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"dealloc");
  return;
}



/* Address: 0x10022d6ec | _TtC7PasteUI14CollectionView::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC7PasteUI14CollectionView::_cxx_destruct(ID param_1,SEL param_2)

{
  FUN_1001683a4(param_1 + dataSource);
  FUN_1001683a4(param_1 + delegate);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + ___lazy_storage___cellSelectionManager));
  _swift_release(*(undefined8 *)(param_1 + ___lazy_storage___cellTransitionManager));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + visibleCells));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + reusableCellQueueByIdentifier));
  _swift_unknownObjectWeakDestroy(param_1 + draggingSession);
  return;
}



/* Address: 0x10022d7b4 | FUN_10022d7b4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10022d7b4(long param_1)

{
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    FUN_100221d34(0);
    return 0;
  }
  return 0;
}



/* Address: 0x10022d7f4 | FUN_10022d7f4 */

code * FUN_10022d7f4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  void *pvVar1;
  undefined8 uVar2;
  void *pvVar3;
  long lVar4;
  undefined8 *unaff_x20;
  
  pvVar1 = (void *)0x50;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    pvVar1 = _malloc(0x50);
  }
  else {
    _swift_coroFrameAlloc(0x50,0xefb9);
  }
  *param_1 = pvVar1;
  uVar2 = *unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native(uVar2);
  pvVar3 = pvVar1;
  FUN_10022daa4();
  *(void **)((long)pvVar1 + 0x40) = pvVar3;
  lVar4 = (long)pvVar1 + 0x20;
  FUN_10022d8c8(lVar4,param_2,param_3,uVar2);
  *(long *)((long)pvVar1 + 0x48) = lVar4;
  return FUN_10022d88c;
}



/* Address: 0x10022d88c | FUN_10022d88c */

void FUN_10022d88c(undefined8 *param_1)

{
  code *pcVar1;
  void *pvVar2;
  
  pvVar2 = (void *)*param_1;
  pcVar1 = *(code **)((long)pvVar2 + 0x40);
  (**(code **)((long)pvVar2 + 0x48))((long)pvVar2 + 0x20,0);
  (*pcVar1)(pvVar2,0);
  _free(pvVar2);
  return;
}



/* Address: 0x10022d8c8 | FUN_10022d8c8 */

undefined1  [16] FUN_10022d8c8(undefined8 *param_1,long param_2,ulong param_3,uint param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  undefined1 auVar10 [16];
  
  puVar3 = (undefined8 *)&DAT_00000030;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    puVar3 = _malloc(0x30);
  }
  else {
    _swift_coroFrameAlloc(0x30,0x5345);
  }
  *param_1 = puVar3;
  puVar3[2] = param_3;
  puVar3[3] = unaff_x20;
  puVar3[1] = param_2;
  lVar9 = *unaff_x20;
  lVar4 = param_2;
  uVar5 = param_3;
  FUN_100071370();
  *(byte *)(puVar3 + 5) = (byte)uVar5 & 1;
  lVar6 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar5 & 1;
  lVar1 = lVar6 + uVar8;
  if (SCARRY8(lVar6,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10022d9c0);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar1) {
    FUN_100203834(lVar1,param_4 & 1);
    FUN_100071370();
    lVar4 = param_2;
    if (((uint)uVar5 & 1) != ((uint)param_3 & 1)) {
      Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10022d9a0);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    FUN_1001f5aec();
    puVar3[4] = lVar4;
    goto joined_r0x00010022d9d4;
  }
  puVar3[4] = lVar4;
joined_r0x00010022d9d4:
  if ((uVar5 & 1) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(*(long *)(*unaff_x20 + 0x38) + lVar4 * 8);
  }
  *puVar3 = uVar7;
  auVar10._8_8_ = puVar3;
  auVar10._0_8_ = FUN_10022da04;
  return auVar10;
}



/* Address: 0x10022da04 | FUN_10022da04 */

void FUN_10022da04(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  plVar1 = (long *)*param_1;
  lVar2 = *plVar1;
  if (lVar2 == 0) {
    if ((*(byte *)(plVar1 + 5) & 1) != 0) {
      lVar3 = plVar1[4];
      lVar4 = *(long *)plVar1[3];
      FUN_10000caac(*(long *)(lVar4 + 0x30) + lVar3 * 0x10);
      FUN_100172164(lVar3,lVar4);
    }
  }
  else if ((*(byte *)(plVar1 + 5) & 1) == 0) {
    lVar3 = plVar1[2];
    FUN_10016fc7c(plVar1[4],plVar1[1],lVar3,lVar2);
    _swift_bridgeObjectRetain(lVar3);
  }
  else {
    *(long *)(*(long *)(*(long *)plVar1[3] + 0x38) + plVar1[4] * 8) = lVar2;
  }
  lVar3 = *plVar1;
  _swift_bridgeObjectRetain(lVar2);
  _swift_bridgeObjectRelease(lVar3);
  _free(plVar1);
  return;
}



/* Address: 0x10022daa4 | FUN_10022daa4 */

undefined1  [16] FUN_10022daa4(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  undefined1 auVar1 [16];
  
  *param_1 = *unaff_x20;
  param_1[1] = unaff_x20;
  auVar1._8_8_ = param_1;
  auVar1._0_8_ = FUN_10022dabc;
  return auVar1;
}



/* Address: 0x10022dabc | FUN_10022dabc */

void FUN_10022dabc(undefined8 *param_1)

{
  *(undefined8 *)param_1[1] = *param_1;
  return;
}



/* Address: 0x10022dac8 | FUN_10022dac8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10022dac8(void)

{
  return ZEXT816(0x100f96b18);
}



/* Address: 0x10022dae8 | FUN_10022dae8 */

void FUN_10022dae8(void)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  ID IVar6;
  long unaff_x20;
  String SVar7;
  
  lVar1 = unaff_x20 + _TtC7PasteUI14CollectionView::dataSource;
  *(undefined8 *)(lVar1 + 8) = 0;
  _swift_unknownObjectWeakInit(lVar1,0);
  lVar1 = unaff_x20 + _TtC7PasteUI14CollectionView::delegate;
  *(undefined8 *)(lVar1 + 8) = 0;
  _swift_unknownObjectWeakInit(lVar1,0);
  *(undefined8 *)(unaff_x20 + _TtC7PasteUI14CollectionView::emptyPlaceholderView) = 0;
  *(undefined1 *)(unaff_x20 + _TtC7PasteUI14CollectionView::dimmingMode) = 0;
  *(undefined8 *)(unaff_x20 + _TtC7PasteUI14CollectionView::cellCount) = 0;
  puVar2 = (undefined8 *)
           (unaff_x20 + _TtC7PasteUI14CollectionView::___lazy_storage___cellSelectionManager);
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 3) = 0;
  *(undefined8 *)(unaff_x20 + _TtC7PasteUI14CollectionView::___lazy_storage___cellTransitionManager)
       = 0;
  *(undefined1 *)(unaff_x20 + _TtC7PasteUI14CollectionView::isFirstResponder) = 0;
  puVar2 = (undefined8 *)(unaff_x20 + _TtC7PasteUI14CollectionView::___lazy_storage___contentLayout)
  ;
  puVar2[1] = 0;
  *puVar2 = 0;
  puVar2[3] = 0;
  puVar2[2] = 0;
  puVar2[5] = 0;
  puVar2[4] = 0;
  puVar2[7] = 0;
  puVar2[6] = 0;
  puVar2[9] = 0;
  puVar2[8] = 0;
  *(undefined1 *)(puVar2 + 10) = 1;
  lVar1 = _TtC7PasteUI14CollectionView::visibleCells;
  puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1001f3988();
  *(undefined **)(unaff_x20 + lVar1) = puVar4;
  lVar1 = _TtC7PasteUI14CollectionView::reusableCellQueueByIdentifier;
  FUN_1001f3a9c();
  *(undefined **)(unaff_x20 + lVar1) = puVar5;
  lVar1 = _TtC7PasteUI14CollectionView::scrollView;
  IVar6 = 0;
  FUN_10022a2dc();
  _objc_allocWithZone();
  IVar6 = objc_stub::initWithFrame_(IVar6,0,0,0,0);
  *(ID *)(unaff_x20 + lVar1) = IVar6;
  *(undefined1 *)(unaff_x20 + _TtC7PasteUI14CollectionView::isReorderingEnabled) = 1;
  puVar2 = (undefined8 *)(unaff_x20 + _TtC7PasteUI14CollectionView::initialDragLocation);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined1 *)(puVar2 + 2) = 1;
  *(undefined8 *)(unaff_x20 + _TtC7PasteUI14CollectionView::dragWaitTimer) = 0;
  _swift_unknownObjectWeakInit(unaff_x20 + _TtC7PasteUI14CollectionView::draggingSession,0);
  *(undefined8 *)(unaff_x20 + _TtC7PasteUI14CollectionView::___lazy_storage___draggingCursor) = 0;
  SVar7.bridgeObject = (void *)0x2;
  SVar7.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar7,(StaticString)0xd000000000000025,0x8000000100d8dc00,
             0xd9ea80);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10022dc98);
  (*pcVar3)();
}



/* Address: 0x10022dc98 | FUN_10022dc98 */

void FUN_10022dc98(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _TtC7PasteUI14CollectionView::visibleCells;
  lVar2 = *param_2;
  _swift_beginAccess(lVar2 + _TtC7PasteUI14CollectionView::visibleCells,auStack_48,0,0);
  *param_1 = *(undefined8 *)(lVar2 + lVar1);
  _swift_bridgeObjectRetain();
  return;
}



/* Address: 0x10022dcf0 | thunk_FUN_10022b604 */

void thunk_FUN_10022b604(void)

{
  FUN_10022b604();
  return;
}



/* Address: 0x10022dcf4 | FUN_10022dcf4 */

void FUN_10022dcf4(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _TtC7PasteUI14CollectionView::draggingSession;
  lVar2 = *param_2;
  _swift_beginAccess(lVar2 + _TtC7PasteUI14CollectionView::draggingSession,auStack_48,0,0);
  lVar2 = lVar2 + lVar1;
  _swift_unknownObjectWeakLoadStrong();
  *param_1 = lVar2;
  return;
}



/* Address: 0x10022dd4c | FUN_10022dd4c */

void FUN_10022dd4c(undefined8 *param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_48 [24];
  
  lVar1 = _TtC7PasteUI14CollectionView::draggingSession;
  uVar2 = *param_1;
  lVar3 = *param_2;
  _swift_beginAccess(lVar3 + _TtC7PasteUI14CollectionView::draggingSession,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(lVar3 + lVar1,uVar2);
  return;
}



/* Address: 0x10022dda4 | FUN_10022dda4 */

void FUN_10022dda4(void)

{
  long unaff_x20;
  
  _swift_unknownObjectWeakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x10022ddc8 | FUN_10022ddc8 */

void FUN_10022ddc8(void)

{
  FUN_10022d7b4();
  return;
}



/* Address: 0x10022ddd0 | FUN_10022ddd0 */

void FUN_10022ddd0(void)

{
  FUN_10022b358();
  return;
}



/* Address: 0x10022ddd8 | FUN_10022ddd8 */

void FUN_10022ddd8(void)

{
  FUN_10022b3b4();
  return;
}



/* Address: 0x10022dde0 | FUN_10022dde0 */

void FUN_10022dde0(void)

{
  FUN_10022b448();
  return;
}



/* Address: 0x10022dde8 | thunk_FUN_10022a8bc */

void thunk_FUN_10022a8bc(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  pvVar2 = (void *)*param_1;
  uVar3 = *(undefined8 *)((long)pvVar2 + 0x18);
  lVar1 = *(long *)((long)pvVar2 + 0x28) + *(long *)((long)pvVar2 + 0x30);
  *(undefined8 *)(lVar1 + 8) = *(undefined8 *)((long)pvVar2 + 0x20);
  _swift_unknownObjectWeakAssign(lVar1,uVar3);
  if ((param_2 & 1) == 0) {
    _swift_endAccess(pvVar2);
    _swift_unknownObjectRelease(uVar3);
  }
  else {
    _swift_unknownObjectRelease(*(undefined8 *)((long)pvVar2 + 0x18));
    _swift_endAccess(pvVar2);
  }
  _free(pvVar2);
  return;
}



/* Address: 0x10022ddec | FUN_10022ddec */

undefined8 * FUN_10022ddec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Address: 0x10022de28 | FUN_10022de28 */

undefined8 * FUN_10022de28(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[1] = param_2[1];
  uVar1 = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  param_1[2] = uVar1;
  return param_1;
}



/* Address: 0x10022de84 | FUN_10022de84 */

void FUN_10022de84(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar3 = *(undefined8 *)((long)param_2 + 9);
  *(undefined8 *)((long)param_1 + 0x11) = *(undefined8 *)((long)param_2 + 0x11);
  *(undefined8 *)((long)param_1 + 9) = uVar3;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x10022de98 | FUN_10022de98 */

undefined8 * FUN_10022de98(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_2[2];
  param_1[1] = param_2[1];
  param_1[2] = uVar1;
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  return param_1;
}



/* Address: 0x10022dedc | FUN_10022dedc */

int FUN_10022dedc(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x19) != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x10022df24 | FUN_10022df24 */

void FUN_10022df24(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    param_1[1] = 0;
    param_1[2] = 0;
    *(undefined1 *)(param_1 + 3) = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    if (param_3 < 0) {
      *(undefined1 *)((long)param_1 + 0x19) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)((long)param_1 + 0x19) = 0;
    }
    if (param_2 != 0) {
      *param_1 = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x10022df68 | FUN_10022df68 */

undefined1  [16] FUN_10022df68(void)

{
  return ZEXT816(0x100ec2be8);
}



/* Address: 0x10022df78 | FUN_10022df78 */

void FUN_10022df78(ulong param_1,char param_2)

{
  undefined **ppuVar1;
  Set<undefined> SVar2;
  code *pcVar3;
  bool bVar4;
  undefined *puVar5;
  ulong uVar6;
  Set<undefined> SVar7;
  ulong uVar8;
  Hasher HVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong *unaff_x20;
  ulong uVar17;
  __int64 minimumCapacity;
  undefined *puVar18;
  long lVar19;
  undefined8 *puVar20;
  ulong uVar21;
  __uint64 _Var22;
  ulong uVar23;
  undefined *local_98;
  undefined *local_90 [4];
  undefined1 auStack_70 [8];
  undefined *local_68;
  
  if ((-1 < (long)param_1) && ((long)param_1 < (long)unaff_x20[1])) {
    if (param_2 == '\0') {
      puVar5 = &DAT_100fb6488;
      FUN_1000037f0(&DAT_100fb6488,&DAT_100c35590);
      _swift_allocObject();
      *(undefined8 *)(puVar5 + 0x18) = 2;
      *(undefined8 *)(puVar5 + 0x10) = 1;
      *(ulong *)(puVar5 + 0x20) = param_1;
      _swift_bridgeObjectRelease(*unaff_x20);
      *unaff_x20 = (ulong)puVar5;
      unaff_x20[2] = param_1;
      *(undefined1 *)(unaff_x20 + 3) = 0;
    }
    else if (param_2 == '\x01') {
      uVar17 = *unaff_x20;
      lVar19 = *(long *)(uVar17 + 0x10);
      if (lVar19 != 0) {
        lVar14 = 0;
        do {
          if (*(ulong *)(uVar17 + 0x20 + lVar14 * 8) == param_1) {
            if (lVar19 == 1) {
              return;
            }
            FUN_10022e5b4(lVar14);
            lVar19 = *(long *)(*unaff_x20 + 0x10);
            if (lVar19 == 0) {
              uVar17 = 0;
            }
            else {
              uVar17 = *(ulong *)(*unaff_x20 + lVar19 * 8 + 0x18);
            }
            unaff_x20[2] = uVar17;
            *(bool *)(unaff_x20 + 3) = lVar19 == 0;
            return;
          }
          lVar14 = lVar14 + 1;
        } while (lVar19 != lVar14);
      }
      uVar13 = uVar17;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar12 = uVar17;
      if ((uVar13 & 1) == 0) {
        uVar12 = 0;
        FUN_100200d9c(0,lVar19 + 1,1,uVar17);
      }
      uVar17 = *(ulong *)(uVar12 + 0x10);
      uVar13 = uVar12;
      if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar17) {
        uVar13 = (ulong)(1 < *(ulong *)(uVar12 + 0x18));
        FUN_100200d9c(uVar13,uVar17 + 1,1,uVar12);
      }
      *(ulong *)(uVar13 + 0x10) = uVar17 + 1;
      *(ulong *)(uVar13 + uVar17 * 8 + 0x20) = param_1;
      *unaff_x20 = uVar13;
      unaff_x20[2] = param_1;
      *(undefined1 *)(unaff_x20 + 3) = 0;
    }
    else if ((char)unaff_x20[3] != '\x01') {
      uVar13 = unaff_x20[2];
      uVar17 = uVar13;
      if ((long)param_1 <= (long)uVar13) {
        uVar17 = param_1;
      }
      uVar12 = uVar13;
      if ((long)uVar13 <= (long)param_1) {
        uVar12 = param_1;
      }
      uVar6 = *unaff_x20;
      uVar21 = uVar6;
      FUN_1001b7c4c();
      uVar15 = *(ulong *)(uVar21 + 0x10);
      if (uVar15 != 0) {
        uVar23 = 0;
        local_98 = PTR___swiftEmptyArrayStorage_100eae0d8;
LAB_10022e0ec:
        if (*(ulong *)(uVar21 + 0x10) <= uVar23) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10022e554);
          (*pcVar3)();
        }
        lVar14 = *(long *)(uVar21 + 0x20 + uVar23 * 8);
        minimumCapacity = *(__int64 *)(lVar14 + 0x10);
        _swift_bridgeObjectRetain(lVar14);
        local_68 = (undefined *)Swift::Set::init(minimumCapacity);
        lVar19 = *(long *)(lVar14 + 0x10);
        SVar2 = (Set<undefined>)local_68;
        HVar9.unknown =
             PTR___protocol_witness_table_for_Swift_Int___Swift_Hashable_in_Swift_100eac708;
        if (lVar19 != 0) {
          puVar20 = (undefined8 *)(lVar14 + 0x20);
          do {
            FUN_100233a50(auStack_70,*puVar20);
            lVar19 = lVar19 + -1;
            puVar20 = puVar20 + 1;
            SVar2.unknown = local_68;
            HVar9.unknown =
                 PTR___protocol_witness_table_for_Swift_Int___Swift_Hashable_in_Swift_100eac708;
          } while (lVar19 != 0);
        }
        PTR___protocol_witness_table_for_Swift_Int___Swift_Hashable_in_Swift_100eac708 =
             HVar9.unknown;
        local_68 = SVar2.unknown;
        if (SBORROW8(uVar12,uVar17)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10022e558);
          (*pcVar3)();
        }
        if (SCARRY8(uVar12 - uVar17,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10022e55c);
          (*pcVar3)();
        }
        uVar23 = uVar23 + 1;
        SVar7 = Swift::Set::init((uVar12 - uVar17) + 1);
        _Var22 = uVar17;
        do {
          uVar8 = Swift::Hasher::_hash(*(__int64 *)(SVar7.unknown + 0x28),_Var22,HVar9);
          uVar16 = -1L << ((ulong)(byte)SVar7.unknown[0x20] & 0x3f);
          uVar8 = uVar8 & (uVar16 ^ 0xffffffffffffffff);
          if ((*(ulong *)(SVar7.unknown + (uVar8 >> 6) * 8 + 0x38) >> (uVar8 & 0x3f) & 1) != 0) {
            do {
              if (*(__uint64 *)(*(long *)(SVar7.unknown + 0x30) + uVar8 * 8) == _Var22)
              goto LAB_10022e210;
              uVar8 = uVar8 + 1 & ~uVar16;
            } while ((*(ulong *)(SVar7.unknown + (uVar8 >> 6) * 8 + 0x38) >> (uVar8 & 0x3f) & 1) !=
                     0);
          }
          HVar9.unknown = SVar7.unknown;
          _swift_isUniquelyReferenced_nonNull_native();
          local_68 = SVar7.unknown;
          FUN_100233c54(_Var22,uVar8);
          SVar7.unknown = local_68;
LAB_10022e210:
          if (_Var22 == uVar12) goto LAB_10022e224;
          bVar4 = SCARRY8(_Var22,1);
          _Var22 = _Var22 + 1;
          if (bVar4) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10022e4d0);
            (*pcVar3)();
          }
        } while( true );
      }
      local_98 = PTR___swiftEmptyArrayStorage_100eae0d8;
LAB_10022e310:
      _swift_bridgeObjectRelease(uVar21);
      uVar21 = *(ulong *)(local_98 + 0x10);
      puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
      if (uVar21 != 0) {
        uVar15 = 0;
        puVar18 = PTR___swiftEmptyArrayStorage_100eae0d8;
        do {
          if (*(ulong *)(local_98 + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10022e548);
            (*pcVar3)();
          }
          lVar19 = *(long *)(local_98 + uVar15 * 8 + 0x20);
          uVar23 = *(ulong *)(lVar19 + 0x10);
          lVar14 = *(long *)(puVar18 + 0x10);
          if (SCARRY8(lVar14,uVar23)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10022e54c);
            (*pcVar3)();
          }
          _swift_bridgeObjectRetain(lVar19);
          puVar5 = puVar18;
          _swift_isUniquelyReferenced_nonNull_native();
          if (((int)puVar5 == 0) ||
             (uVar8 = *(ulong *)(puVar18 + 0x18) >> 1, (long)uVar8 < (long)(lVar14 + uVar23))) {
            FUN_100200d9c();
            uVar8 = *(ulong *)(puVar5 + 0x18) >> 1;
            puVar18 = puVar5;
            if (*(long *)(lVar19 + 0x10) != 0) goto LAB_10022e3cc;
LAB_10022e338:
            _swift_bridgeObjectRelease(lVar19);
            puVar5 = puVar18;
            if (uVar23 != 0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10022e550);
              (*pcVar3)();
            }
          }
          else {
            puVar5 = puVar18;
            if (*(long *)(lVar19 + 0x10) == 0) goto LAB_10022e338;
LAB_10022e3cc:
            if (uVar8 - *(long *)(puVar5 + 0x10) < uVar23) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10022e560);
              (*pcVar3)();
            }
            _memcpy(puVar5 + *(long *)(puVar5 + 0x10) * 8 + 0x20,(void *)(lVar19 + 0x20),uVar23 << 3
                   );
            _swift_bridgeObjectRelease(lVar19);
            if (uVar23 != 0) {
              if (SCARRY8(*(long *)(puVar5 + 0x10),uVar23)) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x10022e564);
                (*pcVar3)();
              }
              *(ulong *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + uVar23;
            }
          }
          uVar15 = uVar15 + 1;
          puVar18 = puVar5;
        } while (uVar21 != uVar15);
      }
      _swift_release();
      lVar19 = uVar12 - uVar17;
      if ((long)uVar13 < (long)param_1) {
        if (SBORROW8(uVar12,uVar17)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10022e5a4);
          (*pcVar3)();
        }
        ppuVar1 = (undefined **)(lVar19 + 1);
        if (SCARRY8(lVar19,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10022e5ac);
          (*pcVar3)();
        }
        if (ppuVar1 != (undefined **)0x0) {
          ppuVar11 = ppuVar1;
          FUN_100230758(ppuVar1,0);
          ppuVar10 = local_90;
          FUN_10022e850(ppuVar10,ppuVar11 + 4,ppuVar1,uVar17,uVar12);
          if (ppuVar10 != ppuVar1) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10022e5b4);
            (*pcVar3)();
          }
        }
      }
      else {
        if (SBORROW8(uVar12,uVar17)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10022e5a8);
          (*pcVar3)();
        }
        ppuVar1 = (undefined **)(lVar19 + 1);
        if (SCARRY8(lVar19,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10022e5b0);
          (*pcVar3)();
        }
        ppuVar10 = (undefined **)PTR___swiftEmptyArrayStorage_100eae0d8;
        if (ppuVar1 != (undefined **)0x0) {
          ppuVar10 = ppuVar1;
          FUN_100230758(ppuVar1,0);
          ppuVar11 = local_90;
          FUN_10022e850(ppuVar11,ppuVar10 + 4,ppuVar1,uVar17,uVar12);
          if (ppuVar11 != ppuVar1) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10022e4cc);
            (*pcVar3)();
          }
        }
        FUN_10022e780(ppuVar10);
      }
      local_90[0] = puVar5;
      FUN_100230950();
      _swift_bridgeObjectRelease(uVar6);
      *unaff_x20 = (ulong)local_90[0];
    }
  }
  return;
LAB_10022e224:
  puVar5 = SVar7.unknown;
  FUN_10022e638(SVar7.unknown,SVar2.unknown);
  _swift_bridgeObjectRelease(SVar2.unknown);
  _swift_bridgeObjectRelease(SVar7.unknown);
  if (((ulong)puVar5 & 1) == 0) {
    _swift_bridgeObjectRelease(lVar14);
  }
  else {
    puVar5 = local_98;
    _swift_isUniquelyReferenced_nonNull_native();
    local_90[0] = local_98;
    if (((ulong)puVar5 & 1) == 0) {
      FUN_10022ff54(0,*(long *)(local_98 + 0x10) + 1,1);
    }
    uVar8 = *(ulong *)(local_90[0] + 0x10);
    if (*(ulong *)(local_90[0] + 0x18) >> 1 <= uVar8) {
      FUN_10022ff54(1 < *(ulong *)(local_90[0] + 0x18),uVar8 + 1,1);
    }
    *(ulong *)(local_90[0] + 0x10) = uVar8 + 1;
    *(long *)(local_90[0] + uVar8 * 8 + 0x20) = lVar14;
    local_98 = local_90[0];
  }
  if (uVar23 == uVar15) goto LAB_10022e310;
  goto LAB_10022e0ec;
}



/* Address: 0x10022e5b4 | FUN_10022e5b4 */

undefined8 FUN_10022e5b4(ulong param_1)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong *unaff_x20;
  undefined8 uVar6;
  long lVar7;
  
  uVar5 = *unaff_x20;
  uVar3 = uVar5;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar3 & 1) == 0) {
    FUN_10021be20();
  }
  if (param_1 < *(ulong *)(uVar5 + 0x10)) {
    lVar7 = *(ulong *)(uVar5 + 0x10) - 1;
    lVar1 = uVar5 + param_1 * 8;
    puVar4 = (undefined8 *)(lVar1 + 0x20);
    uVar6 = *puVar4;
    _memmove(puVar4,(void *)(lVar1 + 0x28),(lVar7 - param_1) * 8);
    *(long *)(uVar5 + 0x10) = lVar7;
    *unaff_x20 = uVar5;
    return uVar6;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10022e638);
  (*pcVar2)();
}



/* Address: 0x10022e638 | FUN_10022e638 */

undefined8 FUN_10022e638(long param_1,long param_2,Hasher param_3)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  __uint64 _Var7;
  long lVar8;
  ulong uVar9;
  
  if ((*(ulong *)(param_2 + 0x10) != 0) && (*(ulong *)(param_1 + 0x10) != 0)) {
    lVar8 = 0;
    lVar1 = param_1;
    if (*(ulong *)(param_1 + 0x10) <= *(ulong *)(param_2 + 0x10)) {
      lVar1 = param_2;
      param_2 = param_1;
    }
    uVar5 = 1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
    uVar9 = 0xffffffffffffffff;
    if ((*(byte *)(param_2 + 0x20) & 0x3f) < 6) {
      uVar9 = ~(-1L << (uVar5 & 0x3f));
    }
    uVar9 = uVar9 & *(ulong *)(param_2 + 0x38);
    while( true ) {
      while (uVar4 = uVar9, uVar4 != 0) {
        uVar9 = uVar4 - 1 & uVar4;
        if (*(long *)(lVar1 + 0x10) != 0) {
          uVar4 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
          uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
          uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
          uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
          _Var7 = *(__uint64 *)
                   (*(long *)(param_2 + 0x30) + LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) * 8 +
                   lVar8 * 0x200);
          uVar4 = Swift::Hasher::_hash(*(__int64 *)(lVar1 + 0x28),_Var7,param_3);
          uVar6 = -1L << ((ulong)*(byte *)(lVar1 + 0x20) & 0x3f);
          uVar4 = uVar4 & (uVar6 ^ 0xffffffffffffffff);
          if ((*(ulong *)(lVar1 + 0x38 + (uVar4 >> 6) * 8) >> (uVar4 & 0x3f) & 1) != 0) {
            do {
              if (*(__uint64 *)(*(long *)(lVar1 + 0x30) + uVar4 * 8) == _Var7) {
                return 0;
              }
              uVar4 = uVar4 + 1 & ~uVar6;
            } while ((*(ulong *)(lVar1 + 0x38 + (uVar4 >> 6) * 8) >> (uVar4 & 0x3f) & 1) != 0);
          }
        }
      }
      bVar3 = SCARRY8(lVar8,1);
      lVar8 = lVar8 + 1;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10022e780);
        (*pcVar2)();
      }
      if ((long)(uVar5 + 0x3f >> 6) <= lVar8) break;
      uVar9 = ((ulong *)(param_2 + 0x38))[lVar8];
    }
  }
  return 1;
}



/* Address: 0x10022e780 | FUN_10022e780 */

ulong FUN_10022e780(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  if (1 < uVar2) {
    uVar3 = uVar2 >> 1;
    lVar4 = uVar2 + 3;
    lVar5 = 4;
    do {
      if (lVar5 != lVar4) {
        if (*(ulong *)(param_1 + 0x10) <= lVar5 - 4U) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10022e848);
          (*pcVar1)();
        }
        if (*(ulong *)(param_1 + 0x10) <= lVar4 - 4U) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10022e84c);
          (*pcVar1)();
        }
        uVar6 = *(undefined8 *)(param_1 + lVar5 * 8);
        uVar7 = *(undefined8 *)(param_1 + lVar4 * 8);
        uVar2 = param_1;
        _swift_isUniquelyReferenced_nonNull_native();
        if ((uVar2 & 1) == 0) {
          FUN_10021be20();
        }
        *(undefined8 *)(param_1 + lVar5 * 8) = uVar7;
        if (*(ulong *)(param_1 + 0x10) <= lVar4 - 4U) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10022e850);
          (*pcVar1)();
        }
        *(undefined8 *)(param_1 + lVar4 * 8) = uVar6;
      }
      lVar4 = lVar4 + -1;
      lVar5 = lVar5 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return param_1;
}



/* Address: 0x10022e850 | FUN_10022e850 */

long FUN_10022e850(long *param_1,long *param_2,long param_3,long param_4,long param_5)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  undefined1 uVar4;
  long lVar5;
  long lVar6;
  
  lVar3 = param_4;
  if (param_2 == (long *)0x0) {
    uVar4 = 0;
    param_3 = 0;
  }
  else if (param_3 == 0) {
    uVar4 = 0;
  }
  else {
    if (param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10022e8ec);
      (*pcVar1)();
    }
    if (param_4 == param_5) {
      param_3 = 1;
    }
    else {
      lVar5 = -1;
      plVar2 = param_2;
      lVar6 = param_4;
      do {
        lVar3 = lVar6 + 1;
        if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10022e8e8);
          (*pcVar1)();
        }
        param_2 = plVar2 + 1;
        *plVar2 = lVar6;
        if (param_3 + lVar5 == 0) {
          uVar4 = 0;
          goto LAB_10022e8d0;
        }
        lVar5 = lVar5 + -1;
        lVar6 = lVar6 + 1;
        plVar2 = param_2;
      } while (lVar3 != param_5);
      param_3 = -lVar5;
    }
    *param_2 = lVar3;
    uVar4 = 1;
    lVar3 = 0;
  }
LAB_10022e8d0:
  *param_1 = param_4;
  param_1[1] = param_5;
  param_1[2] = lVar3;
  *(undefined1 *)(param_1 + 3) = uVar4;
  return param_3;
}



/* Address: 0x10022e8ec | FUN_10022e8ec */

void FUN_10022e8ec(ulong *param_1)

{
  __int64 _Var1;
  ContiguousArray CVar2;
  _ContiguousArrayBuffer<undefined> _Var3;
  ulong uVar4;
  ulong minimumCapacity;
  ulong uVar5;
  undefined *local_68;
  ulong uStack_60;
  undefined1 auStack_58 [8];
  long local_50;
  ulong uStack_48;
  
  uVar4 = *param_1;
  uVar5 = uVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar5 & 1) == 0) {
    FUN_100232844();
  }
  uVar5 = *(ulong *)(uVar4 + 0x10);
  local_50 = uVar4 + 0x20;
  uStack_48 = uVar5;
  _Var1 = Swift::_minimumMergeRunLength(uVar5);
  if (_Var1 < (long)uVar5) {
    minimumCapacity = uVar5 >> 1;
    _Var3.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
    if (1 < uVar5) {
      CVar2.unknown = &DAT_100fb7800;
      FUN_1000037f0(&DAT_100fb7800,&DAT_100c36d90);
      _Var3 = Swift::ContiguousArray::_allocateBufferUninitialized(minimumCapacity,CVar2);
      *(ulong *)(_Var3.unknown + 0x10) = minimumCapacity;
    }
    local_68 = _Var3.unknown + 0x20;
    uStack_60 = minimumCapacity;
    FUN_100230a40(&local_68,auStack_58,&local_50,_Var1);
    *(undefined8 *)(_Var3.unknown + 0x10) = 0;
    _swift_release(_Var3.unknown);
  }
  else if (uVar5 != 0) {
    FUN_100231680(0,uVar5,1,&local_50);
  }
  *param_1 = uVar4;
  return;
}



/* Address: 0x10022e9f8 | FUN_10022e9f8 */

void FUN_10022e9f8(ulong *param_1)

{
  __int64 _Var1;
  _ContiguousArrayBuffer<undefined> _Var2;
  ulong uVar3;
  ulong uVar4;
  ulong minimumCapacity;
  undefined *local_68;
  ulong uStack_60;
  undefined1 auStack_58 [8];
  long local_50;
  ulong uStack_48;
  
  uVar3 = *param_1;
  uVar4 = uVar3;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar4 & 1) == 0) {
    FUN_100232858();
  }
  uVar4 = *(ulong *)(uVar3 + 0x10);
  local_50 = uVar3 + 0x20;
  uStack_48 = uVar4;
  _Var1 = Swift::_minimumMergeRunLength(uVar4);
  if (_Var1 < (long)uVar4) {
    minimumCapacity = uVar4 >> 1;
    _Var2.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
    if (1 < uVar4) {
      _Var2 = Swift::ContiguousArray::_allocateBufferUninitialized
                        (minimumCapacity,(ContiguousArray)0x100ec2de0);
      *(ulong *)(_Var2.unknown + 0x10) = minimumCapacity;
    }
    local_68 = _Var2.unknown + 0x20;
    uStack_60 = minimumCapacity;
    FUN_100231044(&local_68,auStack_58,&local_50,_Var1);
    *(undefined8 *)(_Var2.unknown + 0x10) = 0;
    _swift_release(_Var2.unknown);
  }
  else if (uVar4 != 0) {
    FUN_1002317e4(0,uVar4,1,&local_50);
  }
  *param_1 = uVar3;
  return;
}



/* Address: 0x10022eaf4 | FUN_10022eaf4 */

undefined * FUN_10022eaf4(long param_1)

{
  _HashTable _Var1;
  ulong uVar2;
  int iVar3;
  undefined *puVar4;
  code *pcVar5;
  Bucket BVar6;
  MainActor *this;
  MainActor *pMVar7;
  UnownedSerialExecutor UVar8;
  UnownedSerialExecutor UVar9;
  ulong *puVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  MainActor *pMVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  
  puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar11 = *(long *)(param_1 + 0x10);
  if (lVar11 != 0) {
    FUN_10022ff00(0,lVar11,0);
    _Var1.unknown = (undefined *)(param_1 + 0x38);
    BVar6 = Swift::_HashTable::get_startBucket(_Var1);
    this = Swift::MainActor::typeMetadataAccessor();
    lVar15 = 0;
    pMVar7 = this;
    do {
      if ((ulong)BVar6.offset >> ((ulong)*(byte *)(param_1 + 0x20) & 0x3f) != 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10022ed54);
        (*pcVar5)();
      }
      uVar16 = (ulong)BVar6.offset >> 6;
      uVar17 = 1L << (BVar6.offset & 0x3fU);
      if ((*(ulong *)(_Var1.unknown + uVar16 * 8) & uVar17) == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10022ed58);
        (*pcVar5)();
      }
      iVar3 = *(int *)(param_1 + 0x24);
      uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x30) + BVar6.offset * 8);
      pMVar7 = Swift::MainActor::get_shared(this,pMVar7);
      pMVar14 = pMVar7;
      FUN_1001f7290();
      UVar8 = Swift::Actor::get_unownedExecutor();
      UVar9 = UVar8;
      _swift_task_isCurrentExecutor();
      if (((ulong)UVar9.unknown & 1) == 0) {
        _swift_task_reportUnexpectedExecutor
                  ("PasteUI/CollectionView.CellTransitionManager.swift",0x32,1,0x56,UVar8.unknown,
                   pMVar14);
      }
      _swift_release();
      uVar2 = *(ulong *)(puVar4 + 0x10);
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar2) {
        pMVar7 = (MainActor *)(ulong)(1 < *(ulong *)(puVar4 + 0x18));
        FUN_10022ff00(pMVar7,uVar2 + 1,1);
      }
      *(ulong *)(puVar4 + 0x10) = uVar2 + 1;
      puVar4[uVar2 * 0x18 + 0x20] = 0;
      *(undefined8 *)(puVar4 + uVar2 * 0x18 + 0x28) = uVar12;
      *(undefined8 *)(puVar4 + uVar2 * 0x18 + 0x30) = uVar12;
      pMVar14 = (MainActor *)(1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f));
      if (pMVar14 <= (ulong)BVar6.offset) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10022ed5c);
        (*pcVar5)();
      }
      if ((*(ulong *)(_Var1.unknown + uVar16 * 8) & uVar17) == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10022ed60);
        (*pcVar5)();
      }
      if (iVar3 != *(int *)(param_1 + 0x24)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10022ed64);
        (*pcVar5)();
      }
      uVar17 = *(ulong *)(_Var1.unknown + uVar16 * 8) & -2L << (BVar6.offset & 0x3fU);
      if (uVar17 == 0) {
        lVar13 = uVar16 << 6;
        puVar10 = (ulong *)(param_1 + 0x40 + uVar16 * 8);
        do {
          uVar16 = uVar16 + 1;
          if ((ulong)(pMVar14 + 0x3f) >> 6 <= uVar16) {
            FUN_10000cae0(BVar6.offset,iVar3,0);
            pMVar7 = (MainActor *)BVar6.offset;
            goto LAB_10022eb94;
          }
          uVar17 = *puVar10;
          lVar13 = lVar13 + 0x40;
          puVar10 = puVar10 + 1;
        } while (uVar17 == 0);
        FUN_10000cae0(BVar6.offset,iVar3,0);
        uVar16 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
        uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
        uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
        uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
        pMVar14 = (MainActor *)(LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) + lVar13);
        pMVar7 = (MainActor *)BVar6.offset;
      }
      else {
        uVar16 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
        uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
        uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
        uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
        pMVar14 = (MainActor *)
                  (LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) | BVar6.offset & 0x7fffffffffffffc0U);
      }
LAB_10022eb94:
      lVar15 = lVar15 + 1;
      BVar6.offset = (__int64)pMVar14;
    } while (lVar15 != lVar11);
  }
  return puVar4;
}



/* Address: 0x10022ed64 | FUN_10022ed64 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010022ee20 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined4
FUN_10022ed64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             Dictionary param_5,long param_6,long param_7,undefined8 param_8,Hasher param_9,
             undefined8 param_10)

{
  undefined8 uVar1;
  byte bVar2;
  char cVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined *puVar7;
  Set<undefined> SVar8;
  long lVar9;
  Set<undefined> SVar10;
  MainActor *pMVar11;
  MainActor *pMVar12;
  UnownedSerialExecutor UVar13;
  UnownedSerialExecutor UVar14;
  ulong uVar15;
  long lVar16;
  undefined *puVar17;
  MainActor *pMVar18;
  uint uVar19;
  Keys *__return_storage_ptr__;
  ulong uVar20;
  byte *pbVar21;
  ulong uVar22;
  ulong uVar23;
  MainActor *pMVar24;
  undefined8 *unaff_x20;
  undefined8 *puVar25;
  ulong uVar26;
  __uint64 _Var27;
  undefined4 local_b4;
  
  puVar17 = PTR___protocol_witness_table_for_Swift_Int___Swift_Hashable_in_Swift_100eac708;
  puVar4 = PTR___type_metadata_for_Swift_Int_100eac6f8;
  Swift::Dictionary::_get_keys((Keys *)*unaff_x20,param_5);
  uVar6 = 0;
  Swift::Dictionary::Keys::typeMetadataAccessor(__return_storage_ptr__);
  puVar7 = PTR__Swift__Keys_>Swift__Sequence_100eabdd0;
  _swift_getWitnessTable(PTR__Swift__Keys_>Swift__Sequence_100eabdd0,uVar6);
  SVar8 = Swift::Set::_init(puVar7,puVar4,uVar6,puVar17,puVar7);
  lVar9 = *(long *)(param_6 + 0x18);
  lVar16 = *(long *)(param_6 + 0x20);
  FUN_100004640(param_6,lVar9);
  (**(code **)(lVar16 + 0x18))(param_1,param_2,param_3,param_4,lVar9,lVar16);
  SVar10 = SVar8;
  FUN_10022eaf4(SVar8.unknown);
  FUN_1001b2a0c(param_7,param_8,param_9.unknown,param_10,SVar10.unknown);
  _swift_bridgeObjectRelease(SVar10.unknown);
  FUN_100232b30(param_7,lVar9);
  FUN_100230858();
  _swift_bridgeObjectRelease(SVar8.unknown);
  uVar20 = *(ulong *)(param_7 + 0x10);
  if (uVar20 == 0) {
    local_b4 = 0;
  }
  else {
    pMVar11 = Swift::MainActor::typeMetadataAccessor();
    uVar26 = 0;
    pMVar12 = pMVar11;
    do {
      if (*(ulong *)(param_7 + 0x10) <= uVar26) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10022f3d8);
        (*pcVar5)();
      }
      pbVar21 = (byte *)(param_7 + 0x20 + uVar26 * 0x18);
      bVar2 = *pbVar21;
      _Var27 = *(__uint64 *)(pbVar21 + 0x10);
      pMVar12 = Swift::MainActor::get_shared(pMVar11,pMVar12);
      pMVar24 = pMVar12;
      FUN_1001f7290();
      UVar13 = Swift::Actor::get_unownedExecutor();
      UVar14 = UVar13;
      _swift_task_isCurrentExecutor();
      if (((ulong)UVar14.unknown & 1) == 0) {
        param_9.unknown = &DAT_00000001;
        _swift_task_reportUnexpectedExecutor
                  ("PasteUI/CollectionView.CellTransitionManager.swift",0x32,1,0x38,UVar13.unknown,
                   pMVar24);
      }
      if (*(long *)(lVar9 + 0x10) != 0) {
        uVar15 = Swift::Hasher::_hash(*(__int64 *)(lVar9 + 0x28),_Var27,param_9);
        uVar22 = -1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
        uVar15 = uVar15 & (uVar22 ^ 0xffffffffffffffff);
        if ((*(ulong *)(lVar9 + 0x38 + (uVar15 >> 6) * 8) >> (uVar15 & 0x3f) & 1) != 0) {
          do {
            if (*(__uint64 *)(*(long *)(lVar9 + 0x30) + uVar15 * 8) == _Var27) {
              _swift_release();
              if (((uint)(bVar2 < 5) & 0x16U >> (ulong)(bVar2 & 0x1f)) == 0) goto LAB_10022eef4;
              local_b4 = 1;
              goto LAB_10022f010;
            }
            uVar15 = uVar15 + 1 & ~uVar22;
          } while ((*(ulong *)(lVar9 + 0x38 + (uVar15 >> 6) * 8) >> (uVar15 & 0x3f) & 1) != 0);
        }
      }
      _swift_release();
LAB_10022eef4:
      uVar26 = uVar26 + 1;
    } while (uVar26 != uVar20);
    local_b4 = 0;
  }
LAB_10022f010:
  lVar16 = param_7;
  FUN_10022f464(param_7,param_5.unknown,lVar9,param_6);
  _swift_bridgeObjectRelease(lVar9);
  _swift_bridgeObjectRelease(param_7);
  puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
  uVar20 = *(ulong *)(lVar16 + 0x10);
  if (uVar20 != 0) {
    uVar26 = 0;
    do {
      puVar25 = (undefined8 *)(lVar16 + 0x38 + uVar26 * 0x20);
      uVar15 = uVar26;
      while( true ) {
        if (*(ulong *)(lVar16 + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10022f3cc);
          (*pcVar5)();
        }
        cVar3 = *(char *)(puVar25 + -3);
        uVar6 = puVar25[-2];
        uVar1 = puVar25[-1];
        pMVar24 = (MainActor *)*puVar25;
        pMVar12 = Swift::MainActor::typeMetadataAccessor();
        pMVar11 = Swift::MainActor::get_shared(pMVar12,pMVar24);
        pMVar12 = pMVar11;
        FUN_1001f7290();
        UVar13 = Swift::Actor::get_unownedExecutor();
        UVar14 = UVar13;
        _swift_task_isCurrentExecutor();
        if (((ulong)UVar14.unknown & 1) == 0) {
          _swift_task_reportUnexpectedExecutor
                    ("PasteUI/CollectionView.CellTransitionManager.swift",0x32,1,0x47,UVar13.unknown
                     ,pMVar12);
        }
        _swift_release(pMVar11);
        if (cVar3 != '\x01') break;
        uVar15 = uVar15 + 1;
        puVar25 = puVar25 + 4;
        if (uVar20 == uVar15) goto LAB_10022f1b8;
      }
      puVar17 = puVar4;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((ulong)puVar17 & 1) == 0) {
        FUN_10022ff38(0,*(long *)(puVar4 + 0x10) + 1,1);
      }
      uVar22 = *(ulong *)(puVar4 + 0x10);
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar22) {
        FUN_10022ff38(1 < *(ulong *)(puVar4 + 0x18),uVar22 + 1,1);
      }
      *(ulong *)(puVar4 + 0x10) = uVar22 + 1;
      puVar4[uVar22 * 0x20 + 0x20] = cVar3;
      uVar26 = uVar15 + 1;
      *(undefined8 *)(puVar4 + uVar22 * 0x20 + 0x28) = uVar6;
      *(undefined8 *)(puVar4 + uVar22 * 0x20 + 0x30) = uVar1;
      *(MainActor **)(puVar4 + uVar22 * 0x20 + 0x38) = pMVar24;
    } while (uVar20 - 1 != uVar15);
  }
LAB_10022f1b8:
  puVar17 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1001f3884();
  uVar20 = *(ulong *)(puVar4 + 0x10);
  if (uVar20 != 0) {
    uVar26 = 0;
    puVar25 = (undefined8 *)(puVar4 + 0x38);
    do {
      if (*(ulong *)(puVar4 + 0x10) <= uVar26) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10022f3d0);
        (*pcVar5)();
      }
      uVar15 = puVar25[-1];
      pMVar12 = (MainActor *)*puVar25;
      pMVar11 = Swift::MainActor::typeMetadataAccessor();
      pMVar18 = Swift::MainActor::get_shared(pMVar11,pMVar12);
      pMVar24 = pMVar18;
      FUN_1001f7290();
      UVar13 = Swift::Actor::get_unownedExecutor();
      UVar14 = UVar13;
      pMVar11 = pMVar24;
      _swift_task_isCurrentExecutor();
      if (((ulong)UVar14.unknown & 1) == 0) {
        pMVar11 = (MainActor *)0x0;
        _swift_task_reportUnexpectedExecutor
                  ("PasteUI/CollectionView.CellTransitionManager.swift",0x32,1,0x48,UVar13.unknown,
                   pMVar24);
      }
      puVar7 = puVar17;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar19 = (uint)puVar7;
      uVar22 = uVar15;
      FUN_100071340();
      uVar23 = (ulong)~(uint)pMVar11 & 1;
      if (SCARRY8(*(long *)(puVar17 + 0x10),uVar23)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10022f3d4);
        (*pcVar5)();
      }
      if (*(long *)(puVar17 + 0x18) < (long)(*(long *)(puVar17 + 0x10) + uVar23)) {
        FUN_100203d3c();
        uVar22 = uVar15;
        FUN_100071340();
        if (((uint)pMVar11 & 1) != (uVar19 & 1)) {
          Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10022f3ec);
          (*pcVar5)();
        }
joined_r0x00010022f388:
        if (((ulong)pMVar11 & 1) != 0) goto LAB_10022f1e4;
LAB_10022f32c:
        *(ulong *)(puVar17 + (uVar22 >> 6) * 8 + 0x40) =
             *(ulong *)(puVar17 + (uVar22 >> 6) * 8 + 0x40) | 1L << (uVar22 & 0x3f);
        *(ulong *)(*(long *)(puVar17 + 0x30) + uVar22 * 8) = uVar15;
        *(MainActor **)(*(long *)(puVar17 + 0x38) + uVar22 * 8) = pMVar12;
        if (SCARRY8(*(long *)(puVar17 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10022f3dc);
          (*pcVar5)();
        }
        *(long *)(puVar17 + 0x10) = *(long *)(puVar17 + 0x10) + 1;
        _swift_release(pMVar18);
      }
      else {
        if (((ulong)puVar7 & 1) == 0) {
          FUN_1001f5dc0();
          goto joined_r0x00010022f388;
        }
        if (((ulong)pMVar11 & 1) == 0) goto LAB_10022f32c;
LAB_10022f1e4:
        *(MainActor **)(*(long *)(puVar17 + 0x38) + uVar22 * 8) = pMVar12;
        _swift_release(pMVar18);
      }
      uVar26 = uVar26 + 1;
      puVar25 = puVar25 + 4;
    } while (uVar20 != uVar26);
  }
  _swift_release();
  return local_b4;
}



/* Address: 0x10022f3ec | FUN_10022f3ec */

void FUN_10022f3ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  return;
}



/* Address: 0x10022f450 | FUN_10022f450 */

void FUN_10022f450(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  return;
}



/* Address: 0x10022f464 | FUN_10022f464 */

undefined * FUN_10022f464(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined1 auVar2 [8];
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 unaff_x20;
  long lVar9;
  undefined8 *puVar10;
  undefined1 local_98 [8];
  undefined8 uStack_90;
  undefined8 local_88;
  long local_80;
  undefined1 local_78 [8];
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar9 = *(long *)(param_1 + 0x10);
  puVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (lVar9 != 0) {
    puVar10 = (undefined8 *)(param_1 + 0x28);
    do {
      local_78[0] = *(undefined1 *)(puVar10 + -1);
      uStack_68 = puVar10[1];
      local_70 = *puVar10;
      FUN_10022f5d0(local_98,local_78,param_2,param_3,unaff_x20,param_4);
      lVar5 = local_80;
      uVar4 = local_88;
      uVar3 = uStack_90;
      auVar2 = local_98;
      if (local_80 != 0) {
        puVar6 = puVar7;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar8 = puVar7;
        if (((ulong)puVar6 & 1) == 0) {
          puVar8 = (undefined *)0x0;
          FUN_100200c94(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7);
        }
        uVar1 = *(ulong *)(puVar8 + 0x10);
        puVar7 = puVar8;
        if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar1) {
          puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
          FUN_100200c94(puVar7,uVar1 + 1,1,puVar8);
        }
        *(ulong *)(puVar7 + 0x10) = uVar1 + 1;
        puVar7[uVar1 * 0x20 + 0x20] = auVar2[0];
        *(undefined8 *)(puVar7 + uVar1 * 0x20 + 0x28) = uVar3;
        *(undefined8 *)(puVar7 + uVar1 * 0x20 + 0x30) = uVar4;
        *(long *)(puVar7 + uVar1 * 0x20 + 0x38) = lVar5;
      }
      puVar10 = puVar10 + 3;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  return puVar7;
}



/* Address: 0x10022f584 | FUN_10022f584 */

undefined1  [16] FUN_10022f584(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = *(ulong *)(param_1 + 0x20);
    lVar4 = *(long *)(param_1 + 0x10) + -1;
    if (lVar4 != 0) {
      uVar2 = uVar1;
      puVar3 = (ulong *)(param_1 + 0x28);
      uVar5 = uVar1;
      do {
        uVar6 = *puVar3;
        uVar1 = uVar6;
        if ((long)uVar6 <= (long)uVar5) {
          uVar1 = uVar2;
        }
        if ((long)uVar5 <= (long)uVar6) {
          uVar5 = uVar6;
        }
        lVar4 = lVar4 + -1;
        uVar2 = uVar1;
        puVar3 = puVar3 + 1;
      } while (lVar4 != 0);
    }
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar1;
    return auVar7;
  }
  return ZEXT816(1) << 0x40;
}



/* Address: 0x10022f5d0 | FUN_10022f5d0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10022f5d0(ulong *param_1,byte *param_2,undefined8 param_3,undefined8 param_4,long *param_5,
                  long param_6)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  byte bVar4;
  MainActor *pMVar5;
  MainActor *pMVar6;
  UnownedSerialExecutor UVar7;
  UnownedSerialExecutor UVar8;
  ulong uVar9;
  long lVar10;
  ulong local_68;
  ID local_58;
  
  lVar10 = *param_5;
  bVar4 = *param_2;
  uVar1 = *(ulong *)(param_2 + 8);
  uVar3 = *(ulong *)(param_2 + 0x10);
  pMVar5 = Swift::MainActor::typeMetadataAccessor();
  pMVar6 = Swift::MainActor::get_shared(pMVar5,pMVar5);
  pMVar5 = pMVar6;
  FUN_1001f7290();
  UVar7 = Swift::Actor::get_unownedExecutor();
  UVar8 = UVar7;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar8.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/CollectionView.CellTransitionManager.swift",0x32,1,0x7a,UVar7.unknown,pMVar5
              );
  }
  if (bVar4 < 3) {
    if (bVar4 < 2) {
LAB_10022f7ac:
      local_68 = uVar1;
      Swift::Dictionary::_get_subscript
                (&local_58,&local_68,param_3,PTR___type_metadata_for_Swift_Int_100eac6f8,
                 *(undefined8 *)(lVar10 + 0x50),
                 PTR___protocol_witness_table_for_Swift_Int___Swift_Hashable_in_Swift_100eac708);
      _swift_release(pMVar6);
      if (local_58 != 0) {
        *param_1 = (ulong)bVar4;
        param_1[1] = uVar1;
        goto LAB_10022f7ec;
      }
    }
    else {
      uVar9 = uVar3;
      FUN_10020834c(uVar3,param_4);
      if ((uVar9 & 1) != 0) {
        uVar9 = uVar3;
        (*(code *)param_5[2])();
        uVar2 = *(undefined8 *)(param_6 + 0x18);
        lVar10 = *(long *)(param_6 + 0x20);
        FUN_100004640(param_6,uVar2);
        (**(code **)(lVar10 + 0x10))(uVar1,uVar2,lVar10);
        objc_stub::setFrame_(uVar9);
        objc_stub::setAlphaValue_(uVar9,0);
        _swift_release(pMVar6);
        *param_1 = 2;
        param_1[1] = uVar1;
        param_1[2] = uVar3;
        param_1[3] = uVar9;
        return;
      }
LAB_10022f7f8:
      _swift_release(pMVar6);
    }
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  else {
    if (bVar4 != 3) goto LAB_10022f7ac;
    local_68 = uVar1;
    Swift::Dictionary::_get_subscript
              (&local_58,&local_68,param_3,PTR___type_metadata_for_Swift_Int_100eac6f8,
               *(undefined8 *)(lVar10 + 0x50),
               PTR___protocol_witness_table_for_Swift_Int___Swift_Hashable_in_Swift_100eac708);
    if (local_58 == 0) goto LAB_10022f7f8;
    (*(code *)param_5[6])(local_58,uVar3);
    uVar2 = *(undefined8 *)(param_6 + 0x18);
    lVar10 = *(long *)(param_6 + 0x20);
    FUN_100004640(param_6,uVar2);
    (**(code **)(lVar10 + 0x10))(uVar1,uVar2,lVar10);
    objc_stub::setFrame_(local_58);
    _swift_release(pMVar6);
    *param_1 = 3;
    param_1[1] = uVar1;
LAB_10022f7ec:
    param_1[2] = uVar3;
    param_1[3] = local_58;
  }
  return;
}



/* Address: 0x10022f82c | FUN_10022f82c */

void FUN_10022f82c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x38));
  return;
}



/* Address: 0x10022f858 | FUN_10022f858 */

void FUN_10022f858(void)

{
  FUN_10022f82c();
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x10022f878 | FUN_10022f878 */

uint FUN_10022f878(uint param_1)

{
  return param_1 & 1;
}



/* Address: 0x10022f880 | FUN_10022f880 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_10022f880(void)

{
  undefined8 in_x3;
  
  return in_x3;
}


