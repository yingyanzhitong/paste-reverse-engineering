/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100221554 | _TtC7PasteUI20BackgroundEffectView::initWithFrame: */

/* Function Stack Size: 0x30 bytes */

ID _TtC7PasteUI20BackgroundEffectView::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

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
              ("PasteUI/BackgroundEffectView.swift",0x22,1,0x10,UVar3.unknown,pMVar2);
  }
  __swift_stdlib_reportUnimplementedInitializer
            ("PasteUI.BackgroundEffectView",0x1c,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1002215dc);
  (*pcVar1)();
}



/* Address: 0x1002215dc | _TtC7PasteUI20BackgroundEffectView::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC7PasteUI20BackgroundEffectView::_cxx_destruct(ID param_1,SEL param_2)

{
  return;
}



/* Address: 0x1002215ec | thunk_FUN_100211c08 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined *
thunk_FUN_100211c08(undefined8 param_1,undefined8 param_2,double param_3,double param_4,ID param_5,
                   ID param_6)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  
  puVar1 = &DAT_100fb7040;
  FUN_1000037f0(&DAT_100fb7040,&DAT_100c34f70);
  _swift_allocObject();
  *(undefined8 *)(puVar1 + 0x18) = 9;
  *(undefined8 *)(puVar1 + 0x10) = 4;
  IVar2 = objc_stub::topAnchor(param_6);
  IVar3 = objc_stub::topAnchor(param_5);
  IVar2 = objc_stub::constraintEqualToAnchor_constant_(IVar2,param_1,IVar3);
  *(ID *)(puVar1 + 0x20) = IVar2;
  IVar2 = objc_stub::leadingAnchor(param_6);
  IVar3 = objc_stub::leadingAnchor(param_5);
  IVar2 = objc_stub::constraintEqualToAnchor_constant_(IVar2,param_2,IVar3);
  *(ID *)(puVar1 + 0x28) = IVar2;
  IVar2 = objc_stub::bottomAnchor(param_6);
  IVar3 = objc_stub::bottomAnchor(param_5);
  IVar2 = objc_stub::constraintEqualToAnchor_constant_(IVar2,-param_3,IVar3);
  *(ID *)(puVar1 + 0x30) = IVar2;
  IVar2 = objc_stub::trailingAnchor(param_6);
  IVar3 = objc_stub::trailingAnchor(param_5);
  IVar2 = objc_stub::constraintEqualToAnchor_constant_(IVar2,-param_4,IVar3);
  *(ID *)(puVar1 + 0x38) = IVar2;
  return puVar1;
}



/* Address: 0x1002215f0 | FUN_1002215f0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1002215f0(void)

{
  return ZEXT816(0x100f96858);
}



/* Address: 0x100221610 | FUN_100221610 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_100221610(long param_1)

{
  long *plVar1;
  long lVar2;
  double dVar3;
  code *pcVar4;
  long lVar5;
  code *pcVar6;
  long lVar7;
  ID IVar8;
  undefined *puVar9;
  undefined *puVar10;
  void *aBlock;
  undefined *puVar11;
  long lVar12;
  ID self;
  long lVar13;
  long lVar14;
  ID unaff_x20;
  undefined8 uVar15;
  byte bVar16;
  undefined *puVar17;
  double dVar18;
  double dVar19;
  undefined1 auVar20 [16];
  String SVar21;
  undefined1 auStack_130 [24];
  ID local_118;
  long local_110;
  undefined1 auStack_108 [24];
  undefined *local_f0;
  double local_e8;
  code *local_e0;
  undefined *puStack_d8;
  code *local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  
  lVar2 = unaff_x20 + _TtC7PasteUI14CollectionView::dataSource;
  _swift_beginAccess(lVar2,auStack_108,0,0);
  lVar7 = lVar2;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar7 == 0) {
    SVar21.bridgeObject = (void *)0x2;
    SVar21.str = (char *)0xb;
    Swift::_assertionFailure
              ((StaticString)0x100d8deb0,SVar21,(StaticString)0xd00000000000002b,0x8000000100d9e930,
               0xd9e920);
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x100221a68);
    (*pcVar6)();
  }
  uVar15 = *(undefined8 *)(lVar2 + 8);
  local_118 = 0;
  local_110 = 0;
  IVar8 = objc_stub::effectiveAppearance(unaff_x20);
  puVar9 = &DAT_100ec27a8;
  _swift_allocObject(&DAT_100ec27a8,0x38,7);
  *(ID **)(puVar9 + 0x10) = &local_118;
  *(long *)(puVar9 + 0x18) = lVar7;
  *(undefined8 *)(puVar9 + 0x20) = uVar15;
  *(ID *)(puVar9 + 0x28) = unaff_x20;
  *(long *)(puVar9 + 0x30) = param_1;
  puVar10 = &DAT_100ec27d0;
  _swift_allocObject(&DAT_100ec27d0,0x20,7);
  *(code **)(puVar10 + 0x10) = FUN_100222dd4;
  *(undefined **)(puVar10 + 0x18) = puVar9;
  local_d0 = FUN_100209b34;
  local_f0 = PTR___NSConcreteStackBlock_100ea82a0;
  local_e8 = 5.47077039858234e-315;
  local_e0 = FUN_1000d5218;
  puStack_d8 = &DAT_100ec27e8;
  local_c8 = puVar10;
  aBlock = __Block_copy(&local_f0);
  puVar11 = local_c8;
  _swift_retain(puVar10);
  _swift_unknownObjectRetain(lVar7);
  _swift_release(puVar11);
  objc_stub::performAsCurrentDrawingAppearance_(IVar8,aBlock);
  __Block_release(aBlock);
  puVar11 = puVar10;
  _swift_isEscapingClosureAtFileLocation(puVar10,"",0x92,0xb,0x3f,1);
  _swift_release(puVar10);
  lVar12 = local_110;
  IVar8 = local_118;
  lVar2 = _TtC7PasteUI14CollectionView::dimmingMode;
  if (((ulong)puVar11 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x100221a04);
    (*pcVar6)();
  }
  if (local_118 == 0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x100221a08);
    (*pcVar6)();
  }
  _swift_beginAccess(unaff_x20 + _TtC7PasteUI14CollectionView::dimmingMode,auStack_130,0,0);
  if (*(char *)(unaff_x20 + lVar2) == '\0') {
    bVar16 = *(byte *)(unaff_x20 + _TtC7PasteUI14CollectionView::isFirstResponder) ^ 1;
  }
  else if (*(char *)(unaff_x20 + lVar2) == '\x01') {
    bVar16 = 0;
  }
  else {
    bVar16 = 1;
  }
  _swift_getObjectType(IVar8);
  (**(code **)(lVar12 + 0x28))(bVar16 & 1,IVar8,lVar12);
  lVar2 = local_110;
  IVar8 = local_118;
  lVar12 = 0;
  if (local_118 == 0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x100221a0c);
    (*pcVar6)();
  }
  FUN_10022b1cc();
  lVar14 = 0x20;
  lVar5 = *(long *)(lVar12 + 0x10);
  do {
    lVar13 = lVar5;
    if (lVar13 == 0) break;
    plVar1 = (long *)(lVar12 + lVar14);
    lVar14 = lVar14 + 8;
    lVar5 = lVar13 + -1;
  } while (*plVar1 != param_1);
  _swift_getObjectType(IVar8);
  _swift_bridgeObjectRelease(lVar12);
  (**(code **)(lVar2 + 0x10))(lVar13 != 0,IVar8,lVar2);
  IVar8 = local_118;
  if (local_118 == 0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x100221a10);
    (*pcVar6)();
  }
  FUN_10022b4f8(&local_f0);
  puVar11 = local_c8;
  pcVar4 = local_d0;
  pcVar6 = local_e0;
  dVar3 = local_e8;
  puVar10 = local_f0;
  puVar17 = local_c8;
  _CGRectGetHeight(local_c8,local_c0,uStack_b8,local_b0);
  dVar19 = (double)puVar10 + (double)pcVar6;
  _CGRectGetHeight(puVar11,local_c0,uStack_b8,local_b0);
  dVar18 = (double)puVar11 - dVar19;
  objc_stub::setFrame_
            (IVar8,dVar3 + ((double)pcVar4 + ((double)puVar17 - dVar19)) * (double)param_1,pcVar6,
             dVar18,dVar18);
  if (local_118 == 0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x100221a14);
    (*pcVar6)();
  }
  objc_stub::setWantsLayer_(local_118,1);
  IVar8 = local_118;
  if (local_118 == 0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x100221a18);
    (*pcVar6)();
  }
  self = local_118;
  FUN_100229234();
  objc_stub::addSubview_(self,IVar8);
  lVar2 = local_110;
  IVar8 = local_118;
  if (local_118 != 0) {
    _swift_unknownObjectRelease(lVar7);
    _swift_release(puVar9);
    auVar20._8_8_ = lVar2;
    auVar20._0_8_ = IVar8;
    return auVar20;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x100221a1c);
  (*pcVar6)();
}



/* Address: 0x100221a68 | FUN_100221a68 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
FUN_100221a68(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5)

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
              ("PasteUI/CollectionView+Cells.swift",0x22,1,0xb,UVar3.unknown,pMVar1);
  }
  _swift_getObjectType(param_2);
  (**(code **)(param_3 + 8))(param_4,param_5,param_2,param_3);
  *param_1 = param_4;
  param_1[1] = param_5;
  _swift_release(pMVar2);
  return 0;
}



/* Address: 0x100221b40 | FUN_100221b40 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100221b40(ID param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  ID IVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  void *pvVar8;
  undefined8 uVar9;
  long unaff_x20;
  long lVar10;
  undefined *puVar11;
  String SVar12;
  undefined1 auStack_90 [24];
  ID local_78;
  undefined8 uStack_70;
  
  IVar3 = param_1;
  _swift_getObjectType();
  puVar11 = &DAT_100fb7580;
  local_78 = IVar3;
  uStack_70 = param_2;
  FUN_1000037f0(&DAT_100fb7580,&DAT_100c36c30);
  SVar12 = Swift::String::_init(&local_78,puVar11);
  lVar2 = _TtC7PasteUI14CollectionView::reusableCellQueueByIdentifier;
  pvVar8 = SVar12.bridgeObject;
  pcVar4 = SVar12.str;
  _swift_beginAccess(unaff_x20 + _TtC7PasteUI14CollectionView::reusableCellQueueByIdentifier,
                     &local_78,0,0);
  lVar10 = *(long *)(unaff_x20 + lVar2);
  puVar11 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (*(long *)(lVar10 + 0x10) != 0) {
    _swift_bridgeObjectRetain_n(lVar10,2);
    FUN_100071370();
    if (((ulong)SVar12.bridgeObject & 1) == 0) {
      _swift_bridgeObjectRelease_n(lVar10,2);
      puVar11 = PTR___swiftEmptyArrayStorage_100eae0d8;
    }
    else {
      puVar11 = *(undefined **)(*(long *)(lVar10 + 0x38) + (long)SVar12.str * 8);
      _swift_bridgeObjectRetain(puVar11);
      _swift_bridgeObjectRelease_n(lVar10,2);
      if (2 < *(ulong *)(puVar11 + 0x10)) {
        _swift_bridgeObjectRelease(pvVar8);
        goto LAB_100221ccc;
      }
    }
  }
  puVar5 = puVar11;
  _swift_isUniquelyReferenced_nonNull_native();
  puVar7 = puVar11;
  if (((ulong)puVar5 & 1) == 0) {
    puVar7 = (undefined *)0x0;
    FUN_100200a4c(0,*(long *)(puVar11 + 0x10) + 1,1,puVar11);
  }
  uVar1 = *(ulong *)(puVar7 + 0x10);
  puVar11 = puVar7;
  if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
    puVar11 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
    FUN_100200a4c(puVar11,uVar1 + 1,1,puVar7);
  }
  *(ulong *)(puVar11 + 0x10) = uVar1 + 1;
  *(ID *)(puVar11 + uVar1 * 0x10 + 0x20) = param_1;
  *(undefined8 *)(puVar11 + uVar1 * 0x10 + 0x28) = param_2;
  _swift_beginAccess(unaff_x20 + lVar2,auStack_90,0x21,0);
  _swift_bridgeObjectRetain(puVar11);
  uVar6 = *(undefined8 *)(unaff_x20 + lVar2);
  _swift_isUniquelyReferenced_nonNull_native(uVar6);
  uVar9 = *(undefined8 *)(unaff_x20 + lVar2);
  *(undefined8 *)(unaff_x20 + lVar2) = 0x8000000000000000;
  FUN_100203000(puVar11,pcVar4,pvVar8,uVar6);
  _swift_bridgeObjectRelease(pvVar8);
  *(undefined8 *)(unaff_x20 + lVar2) = uVar9;
  _swift_endAccess(auStack_90);
  objc_stub::prepareForReuse(param_1);
LAB_100221ccc:
  _swift_bridgeObjectRelease(puVar11);
  return;
}



/* Address: 0x100221d34 | FUN_100221d34 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Type propagation algorithm not settling */

void FUN_100221d34(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ID *pIVar1;
  ulong uVar2;
  undefined8 ******ppppppuVar3;
  long lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  undefined8 *******pppppppuVar8;
  undefined8 *******pppppppuVar9;
  ID IVar10;
  undefined8 *******pppppppuVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  long unaff_x20;
  ID self;
  long lVar15;
  undefined8 *******pppppppuVar16;
  undefined8 ******ppppppuVar17;
  undefined8 *****pppppuVar18;
  undefined8 *****pppppuVar19;
  long lVar20;
  undefined8 extraout_d0;
  undefined8 *******local_108;
  undefined8 *******local_f8 [3];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [88];
  
  lVar4 = _TtC7PasteUI14CollectionView::visibleCells;
  _swift_beginAccess(unaff_x20 + _TtC7PasteUI14CollectionView::visibleCells,auStack_e0,0,0);
  pppppppuVar8 = *(undefined8 ********)(unaff_x20 + lVar4);
  _swift_bridgeObjectRetain();
  FUN_100222180();
  pppppppuVar9 = pppppppuVar8;
  FUN_10022b4f8(auStack_c8);
  self = *(ID *)(unaff_x20 + _TtC7PasteUI14CollectionView::scrollView);
  FUN_1002292a0();
  IVar10 = objc_stub::contentView((ID)pppppppuVar9);
  objc_stub::bounds(IVar10);
  local_108 = (undefined8 *******)objc_stub::frame(self);
  FUN_100233494(extraout_d0,param_2);
  pppppppuVar16 = local_108;
  pppppppuVar9 = pppppppuVar8;
  FUN_1001af400();
  if (((ulong)pppppppuVar16 & 1) == 0) {
    if ((param_3 & 1) == 0) {
      if ((undefined8 ******)((ulong)pppppppuVar8[2] >> 3) < local_108[2]) {
        _swift_bridgeObjectRetain(pppppppuVar8);
        pppppppuVar16 = local_108;
        pppppppuVar9 = pppppppuVar8;
        FUN_100222550();
      }
      else {
        local_f8[0] = pppppppuVar8;
        _swift_bridgeObjectRetain(pppppppuVar8);
        FUN_100222444(local_108);
        pppppppuVar16 = local_f8[0];
      }
      if ((undefined8 ******)((ulong)local_108[2] >> 3) < pppppppuVar8[2]) {
        pppppppuVar11 = pppppppuVar8;
        FUN_100222550();
        _swift_bridgeObjectRelease(pppppppuVar8);
        pppppppuVar9 = local_108;
        pppppppuVar8 = pppppppuVar16;
        local_108 = pppppppuVar11;
      }
      else {
        local_f8[0] = local_108;
        FUN_100222444(pppppppuVar8);
        _swift_bridgeObjectRelease(pppppppuVar8);
        local_108 = local_f8[0];
        pppppppuVar8 = pppppppuVar16;
      }
    }
  }
  else if ((param_3 & 1) == 0) {
    _swift_bridgeObjectRelease(pppppppuVar8);
    _swift_bridgeObjectRelease(local_108);
    return;
  }
  lVar20 = 0;
  uVar14 = 1L << ((ulong)*(byte *)(pppppppuVar8 + 4) & 0x3f);
  uVar2 = 0xffffffffffffffff;
  if ((*(byte *)(pppppppuVar8 + 4) & 0x3f) < 6) {
    uVar2 = ~(-1L << (uVar14 & 0x3f));
  }
  ppppppuVar17 = (undefined8 ******)(uVar2 & (ulong)pppppppuVar8[7]);
  while( true ) {
    while (ppppppuVar3 = ppppppuVar17, ppppppuVar3 != (undefined8 ******)0x0) {
      ppppppuVar17 = (undefined8 ******)((long)ppppppuVar3 - 1U & (ulong)ppppppuVar3);
      lVar15 = *(long *)(unaff_x20 + lVar4);
      if (*(long *)(lVar15 + 0x10) != 0) {
        uVar2 = ((ulong)ppppppuVar3 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                ((ulong)ppppppuVar3 & 0x5555555555555555) << 1;
        uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
        uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
        uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
        pppppuVar19 = pppppppuVar8[6][LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) + lVar20 * 0x40];
        pppppuVar18 = pppppuVar19;
        FUN_100071340();
        if (((ulong)pppppppuVar9 & 1) != 0) {
          pIVar1 = (ID *)(*(long *)(lVar15 + 0x38) + (long)pppppuVar18 * 0x10);
          IVar10 = *pIVar1;
          FUN_100221b40(IVar10,pIVar1[1]);
          objc_stub::removeFromSuperview(IVar10);
          pppppppuVar9 = local_f8;
          _swift_beginAccess(unaff_x20 + lVar4,pppppppuVar9,0x21,0);
          FUN_100071340();
          if (((ulong)pppppppuVar9 & 1) != 0) {
            iVar7 = (int)*(undefined8 *)(unaff_x20 + lVar4);
            _swift_isUniquelyReferenced_nonNull_native();
            pppppppuVar16 = *(undefined8 ********)(unaff_x20 + lVar4);
            *(undefined8 *)(unaff_x20 + lVar4) = 0x8000000000000000;
            if (iVar7 == 0) {
              FUN_1001f5c5c();
            }
            pppppppuVar9 = pppppppuVar16;
            FUN_1001f60f0(pppppuVar19);
            *(undefined8 ********)(unaff_x20 + lVar4) = pppppppuVar16;
          }
          _swift_endAccess(local_f8);
        }
      }
    }
    bVar6 = SCARRY8(lVar20,1);
    lVar20 = lVar20 + 1;
    if (bVar6) break;
    if ((long)(uVar14 + 0x3f >> 6) <= lVar20) {
      _swift_release(pppppppuVar8);
      lVar15 = _TtC7PasteUI14CollectionView::cellCount;
      lVar20 = 0;
      uVar14 = 1L << ((ulong)*(byte *)(local_108 + 4) & 0x3f);
      uVar2 = 0xffffffffffffffff;
      if ((*(byte *)(local_108 + 4) & 0x3f) < 6) {
        uVar2 = ~(-1L << (uVar14 & 0x3f));
      }
      ppppppuVar17 = (undefined8 ******)(uVar2 & (ulong)local_108[7]);
      while( true ) {
        while (ppppppuVar17 != (undefined8 ******)0x0) {
          uVar2 = ((ulong)ppppppuVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                  ((ulong)ppppppuVar17 & 0x5555555555555555) << 1;
          uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
          uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
          uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
          ppppppuVar17 = (undefined8 ******)((long)ppppppuVar17 - 1U & (ulong)ppppppuVar17);
          pppppuVar18 = local_108[6][LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) + lVar20 * 0x40];
          if ((long)pppppuVar18 < *(long *)(unaff_x20 + lVar15)) {
            pppppuVar19 = pppppuVar18;
            FUN_100221610(pppppuVar18);
            _swift_beginAccess(unaff_x20 + lVar4,local_f8,0x21,0);
            uVar12 = *(undefined8 *)(unaff_x20 + lVar4);
            _swift_isUniquelyReferenced_nonNull_native(uVar12);
            uVar13 = *(undefined8 *)(unaff_x20 + lVar4);
            *(undefined8 *)(unaff_x20 + lVar4) = 0x8000000000000000;
            FUN_100203150(pppppuVar19,pppppppuVar9,pppppuVar18,uVar12);
            *(undefined8 *)(unaff_x20 + lVar4) = uVar13;
            _swift_endAccess(local_f8);
          }
        }
        bVar6 = SCARRY8(lVar20,1);
        lVar20 = lVar20 + 1;
        if (bVar6) break;
        if ((long)(uVar14 + 0x3f >> 6) <= lVar20) {
          _swift_release(local_108);
          return;
        }
        ppppppuVar17 = (local_108 + 7)[lVar20];
      }
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10022217c);
      (*pcVar5)();
    }
    ppppppuVar17 = (pppppppuVar8 + 7)[lVar20];
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x100222178);
  (*pcVar5)();
}



/* Address: 0x10022217c | thunk_FUN_100222180 */

undefined * thunk_FUN_100222180(long param_1)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auStack_60 [8];
  undefined *puStack_58;
  
  puStack_58 = (undefined *)Swift::Set::init(*(__int64 *)(param_1 + 0x10));
  lVar6 = 0;
  puVar5 = (ulong *)(param_1 + 0x40);
  uVar7 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar8 = 0xffffffffffffffff;
  if (-uVar7 < 0x40) {
    uVar8 = ~(-1L << (-uVar7 & 0x3f));
  }
  uVar8 = uVar8 & *puVar5;
  lVar1 = lVar6;
  while( true ) {
    for (; uVar8 != 0; uVar8 = uVar8 - 1 & uVar8) {
      uVar2 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
      uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      FUN_100233a50(auStack_60,
                    *(undefined8 *)
                     (*(long *)(param_1 + 0x30) + LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) * 8 +
                     lVar1 * 0x200));
      lVar6 = lVar1;
    }
    bVar4 = SCARRY8(lVar1,1);
    lVar1 = lVar1 + 1;
    if (bVar4) break;
    if ((long)(0x3f - uVar7 >> 6) <= lVar1) {
      FUN_10000c650(param_1,puVar5,~uVar7,lVar6,0);
      return puStack_58;
    }
    uVar8 = puVar5[lVar1];
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100222298);
  (*pcVar3)();
}



/* Address: 0x100222180 | FUN_100222180 */

undefined * FUN_100222180(long param_1)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auStack_60 [8];
  undefined *local_58;
  
  local_58 = (undefined *)Swift::Set::init(*(__int64 *)(param_1 + 0x10));
  lVar6 = 0;
  puVar5 = (ulong *)(param_1 + 0x40);
  uVar7 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar8 = 0xffffffffffffffff;
  if (-uVar7 < 0x40) {
    uVar8 = ~(-1L << (-uVar7 & 0x3f));
  }
  uVar8 = uVar8 & *puVar5;
  lVar1 = lVar6;
  while( true ) {
    for (; uVar8 != 0; uVar8 = uVar8 - 1 & uVar8) {
      uVar2 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
      uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      FUN_100233a50(auStack_60,
                    *(undefined8 *)
                     (*(long *)(param_1 + 0x30) + LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) * 8 +
                     lVar1 * 0x200));
      lVar6 = lVar1;
    }
    bVar4 = SCARRY8(lVar1,1);
    lVar1 = lVar1 + 1;
    if (bVar4) break;
    if ((long)(0x3f - uVar7 >> 6) <= lVar1) {
      FUN_10000c650(param_1,puVar5,~uVar7,lVar6,0);
      return local_58;
    }
    uVar8 = puVar5[lVar1];
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100222298);
  (*pcVar3)();
}



/* Address: 0x100222298 | FUN_100222298 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100222298(void)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  bool bVar8;
  ID self;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long unaff_x20;
  long lVar12;
  ulong uVar13;
  double dVar14;
  double dVar15;
  long lVar16;
  double dVar17;
  undefined1 auStack_f8 [24];
  double local_e0;
  double dStack_d8;
  double local_d0;
  double local_c0;
  double dStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  
  lVar11 = _TtC7PasteUI14CollectionView::visibleCells;
  _swift_beginAccess(unaff_x20 + _TtC7PasteUI14CollectionView::visibleCells,auStack_f8,0,0);
  lVar11 = *(long *)(unaff_x20 + lVar11);
  uVar10 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
  uVar13 = 0xffffffffffffffff;
  if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
    uVar13 = ~(-1L << (uVar10 & 0x3f));
  }
  uVar13 = uVar13 & *(ulong *)(lVar11 + 0x40);
  _swift_bridgeObjectRetain(lVar11);
  lVar12 = 0;
  while( true ) {
    for (; uVar13 != 0; uVar13 = uVar13 - 1 & uVar13) {
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | lVar12 << 6;
      self = *(ID *)(*(long *)(lVar11 + 0x38) + uVar9 * 0x10);
      lVar16 = *(long *)(*(long *)(lVar11 + 0x30) + uVar9 * 8);
      FUN_10022b4f8(&local_e0);
      uVar6 = local_a0;
      uVar5 = uStack_a8;
      uVar4 = local_b0;
      dVar15 = dStack_b8;
      dVar3 = local_c0;
      dVar2 = local_d0;
      dVar1 = dStack_d8;
      dVar17 = local_e0;
      dVar14 = dStack_b8;
      _CGRectGetHeight(dStack_b8,local_b0,uStack_a8,local_a0);
      dVar17 = dVar17 + dVar2;
      _CGRectGetHeight(dVar15,uVar4,uVar5,uVar6);
      dVar15 = dVar15 - dVar17;
      objc_stub::setFrame_
                (self,dVar1 + (dVar3 + (dVar14 - dVar17)) * (double)lVar16,dVar2,dVar15,dVar15);
    }
    bVar8 = SCARRY8(lVar12,1);
    lVar12 = lVar12 + 1;
    if (bVar8) break;
    if ((long)(uVar10 + 0x3f >> 6) <= lVar12) {
      _swift_release(lVar11);
      return;
    }
    uVar13 = ((ulong *)(lVar11 + 0x40))[lVar12];
  }
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x100222444);
  (*pcVar7)();
}



/* Address: 0x100222444 | FUN_100222444 */

void FUN_100222444(long param_1)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  long *unaff_x20;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  
  if (*(long *)(*unaff_x20 + 0x10) == 0) {
    return;
  }
  puVar5 = (ulong *)(param_1 + 0x38);
  uVar7 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar8 = 0xffffffffffffffff;
  if (-uVar7 < 0x40) {
    uVar8 = ~(-1L << (-uVar7 & 0x3f));
  }
  uVar8 = uVar8 & *puVar5;
  _swift_bridgeObjectRetain();
  lVar6 = 0;
  lVar1 = lVar6;
  while( true ) {
    for (; uVar8 != 0; uVar8 = uVar8 - 1 & uVar8) {
      uVar2 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
      uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      FUN_100222b54(*(undefined8 *)
                     (*(long *)(param_1 + 0x30) + LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) * 8 +
                     lVar1 * 0x200));
      lVar6 = lVar1;
    }
    bVar4 = SCARRY8(lVar1,1);
    lVar1 = lVar1 + 1;
    if (bVar4) break;
    if ((long)(0x3f - uVar7 >> 6) <= lVar1) {
      FUN_10000c650(param_1,puVar5,~uVar7,lVar6,0);
      return;
    }
    uVar8 = puVar5[lVar1];
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100222550);
  (*pcVar3)();
}



/* Address: 0x100222550 | FUN_100222550 */

/* WARNING: Removing unreachable block (ram,0x000100222838) */
/* WARNING: Removing unreachable block (ram,0x000100222848) */

undefined * FUN_100222550(long param_1,undefined *param_2,Hasher param_3)

{
  undefined *puVar1;
  code *pcVar2;
  bool bVar3;
  byte bVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  ulong uVar8;
  long extraout_x8;
  ulong uVar9;
  long lVar10;
  ulong *puVar11;
  undefined1 *puVar12;
  __uint64 _Var13;
  ulong uVar14;
  undefined auStack_d0 [8];
  undefined *local_c8 [3];
  undefined *local_b0;
  ulong uStack_a8;
  long *local_a0;
  long local_90;
  ulong *puStack_88;
  ulong local_80;
  long lStack_78;
  ulong local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  if (*(long *)(param_2 + 0x10) != 0) {
    lVar10 = 0;
    puVar11 = (ulong *)(param_1 + 0x38);
    uVar9 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
    uVar14 = 0xffffffffffffffff;
    if (-uVar9 < 0x40) {
      uVar14 = ~(-1L << (-uVar9 & 0x3f));
    }
    uVar14 = uVar14 & *puVar11;
    puVar1 = param_2 + 0x38;
    do {
      while (uVar14 != 0) {
        uVar5 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
        uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
        uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
        uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
        uVar14 = uVar14 - 1 & uVar14;
        _Var13 = *(__uint64 *)
                  (*(long *)(param_1 + 0x30) + LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) * 8 +
                  lVar10 * 0x200);
        local_90 = param_1;
        puStack_88 = puVar11;
        local_80 = ~uVar9;
        lStack_78 = lVar10;
        local_70 = uVar14;
        uVar5 = Swift::Hasher::_hash(*(__int64 *)(param_2 + 0x28),_Var13,param_3);
        uVar8 = -1L << ((ulong)(byte)param_2[0x20] & 0x3f);
        uVar5 = uVar5 & (uVar8 ^ 0xffffffffffffffff);
        if ((*(ulong *)(puVar1 + (uVar5 >> 6) * 8) >> (uVar5 & 0x3f) & 1) != 0) {
          do {
            if (*(__uint64 *)(*(long *)(param_2 + 0x30) + uVar5 * 8) == _Var13) {
              uVar14 = 0x3f - uVar8 >> 6;
              local_a0 = &local_90;
              puVar12 = (undefined1 *)(uVar14 * 8);
              local_b0 = param_2;
              uStack_a8 = uVar5;
              if (uVar14 < 0x81) {
                _swift_bridgeObjectRetain(param_1);
LAB_1002226c0:
                puVar7 = puVar12;
                if (uVar14 == 0 || puVar12 == &DAT_00000001) {
                  puVar7 = &DAT_00000001;
                }
                (*(code *)PTR____chkstk_darwin_100ea82c0)
                          ((ulong)(puVar7 + 0xf) & 0x3ffffffffffffff0);
                puVar6 = auStack_d0 + -extraout_x8;
                _memcpy(puVar6,puVar1,(size_t)puVar12);
                FUN_100222e10(puVar6,uVar14,param_2,uVar5,&local_90);
                local_c8[0] = puVar6;
              }
              else {
                bVar4 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xc,3,0,0xf,4,0);
                _swift_bridgeObjectRetain(param_1);
                if (((bVar4 & 1) != 0) &&
                   (puVar7 = puVar12, _swift_stdlib_isStackAllocationSafe(puVar12,8),
                   ((ulong)puVar7 & 1) != 0)) goto LAB_1002226c0;
                puVar7 = puVar12;
                _swift_slowAlloc(puVar12,0xffffffffffffffff);
                if (puVar7 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x100222838);
                  (*pcVar2)();
                }
                _memcpy(puVar7,puVar1,(size_t)puVar12);
                FUN_10022332c(local_c8,puVar7,uVar14);
                _swift_slowDealloc(puVar7,0xffffffffffffffff,0xffffffffffffffff);
              }
              _swift_release(param_2);
              FUN_10000c650(local_90,puStack_88,local_80,lStack_78,local_70);
              param_2 = local_c8[0];
              goto LAB_100222760;
            }
            uVar5 = uVar5 + 1 & ~uVar8;
          } while ((*(ulong *)(puVar1 + (uVar5 >> 6) * 8) >> (uVar5 & 0x3f) & 1) != 0);
        }
      }
      bVar3 = SCARRY8(lVar10,1);
      lVar10 = lVar10 + 1;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1002227a0);
        (*pcVar2)();
      }
      if ((long)(0x3f - uVar9 >> 6) <= lVar10) goto LAB_100222744;
      uVar14 = puVar11[lVar10];
    } while( true );
  }
  _swift_release(param_2);
  param_2 = PTR___swiftEmptySetSingleton_100eae0e8;
LAB_100222760:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_68) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
LAB_100222744:
  _swift_bridgeObjectRetain(param_1);
  FUN_10000c650();
  goto LAB_100222760;
}



/* Address: 0x100222894 | FUN_100222894 */

/* WARNING: Removing unreachable block (ram,0x000100222af8) */
/* WARNING: Removing unreachable block (ram,0x000100222b08) */

undefined * FUN_100222894(long param_1,undefined *param_2,Hasher param_3)

{
  undefined *puVar1;
  code *pcVar2;
  byte bVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  long extraout_x8;
  __int64 seed;
  __uint64 _Var7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined auStack_c0 [8];
  ulong local_b8;
  long local_a8;
  long local_a0;
  undefined *local_98 [3];
  undefined *local_80;
  ulong uStack_78;
  long *local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  if (*(long *)(param_2 + 0x10) == 0) {
    _swift_release(param_2);
    puVar5 = PTR___swiftEmptySetSingleton_100eae0e8;
  }
  else {
    lVar9 = *(long *)(param_1 + 0x10);
    puVar5 = param_2;
    local_a8 = param_1;
    if (lVar9 != 0) {
      lVar10 = 0;
      puVar1 = param_2 + 0x38;
      seed = *(__int64 *)(param_2 + 0x28);
      local_b8 = -1L << ((ulong)(byte)param_2[0x20] & 0x3f);
      uVar11 = ~local_b8;
      do {
        _Var7 = *(__uint64 *)(param_1 + 0x20 + lVar10 * 8);
        lVar10 = lVar10 + 1;
        uVar4 = Swift::Hasher::_hash(seed,_Var7,param_3);
        uVar4 = uVar4 & uVar11;
        if ((*(ulong *)(puVar1 + (uVar4 >> 6) * 8) >> (uVar4 & 0x3f) & 1) != 0) {
          do {
            if (*(__uint64 *)(*(long *)(param_2 + 0x30) + uVar4 * 8) == _Var7) {
              uVar11 = 0x3f - local_b8 >> 6;
              local_70 = &local_a8;
              puVar8 = (undefined1 *)(uVar11 * 8);
              local_a0 = lVar10;
              local_80 = param_2;
              uStack_78 = uVar4;
              if (uVar11 < 0x81) {
                _swift_bridgeObjectRetain(param_1);
LAB_1002229ac:
                puVar6 = puVar8;
                if (uVar11 == 0 || puVar8 == &DAT_00000001) {
                  puVar6 = &DAT_00000001;
                }
                (*(code *)PTR____chkstk_darwin_100ea82c0)
                          ((ulong)(puVar6 + 0xf) & 0x3ffffffffffffff0);
                puVar5 = auStack_c0 + -extraout_x8;
                _memcpy(puVar5,puVar1,(size_t)puVar8);
                FUN_100222fc8(puVar5,uVar11,param_2,uVar4,&local_a8);
              }
              else {
                bVar3 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xc,3,0,0xf,4,0);
                _swift_bridgeObjectRetain(param_1);
                if (((bVar3 & 1) != 0) &&
                   (puVar6 = puVar8, _swift_stdlib_isStackAllocationSafe(puVar8,8),
                   ((ulong)puVar6 & 1) != 0)) goto LAB_1002229ac;
                puVar6 = puVar8;
                _swift_slowAlloc(puVar8,0xffffffffffffffff);
                if (puVar6 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x100222af8);
                  (*pcVar2)();
                }
                _memcpy(puVar6,puVar1,(size_t)puVar8);
                FUN_10022335c(local_98,puVar6,uVar11);
                _swift_slowDealloc(puVar6,0xffffffffffffffff,0xffffffffffffffff);
                puVar5 = local_98[0];
              }
              _swift_release(param_2);
              _swift_bridgeObjectRelease(local_a8);
              goto LAB_100222a24;
            }
            uVar4 = uVar4 + 1 & uVar11;
          } while ((*(ulong *)(puVar1 + (uVar4 >> 6) * 8) >> (uVar4 & 0x3f) & 1) != 0);
        }
      } while (lVar10 != lVar9);
    }
  }
LAB_100222a24:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_68) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100222b54 | FUN_100222b54 */

undefined1  [16] FUN_100222b54(__uint64 param_1,undefined8 param_2,Hasher param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong *unaff_x20;
  ulong uVar5;
  undefined1 auVar6 [16];
  
  uVar5 = *unaff_x20;
  uVar1 = Swift::Hasher::_hash(*(__int64 *)(uVar5 + 0x28),param_1,param_3);
  uVar4 = -1L << ((ulong)*(byte *)(uVar5 + 0x20) & 0x3f);
  uVar1 = uVar1 & (uVar4 ^ 0xffffffffffffffff);
  if ((*(ulong *)(uVar5 + 0x38 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0) {
    do {
      if (*(__uint64 *)(*(long *)(uVar5 + 0x30) + uVar1 * 8) == param_1) {
        uVar4 = *unaff_x20;
        _swift_isUniquelyReferenced_nonNull_native();
        uVar5 = *unaff_x20;
        if ((uVar4 & 1) == 0) {
          FUN_10023429c();
        }
        uVar2 = *(undefined8 *)(*(long *)(uVar5 + 0x30) + uVar1 * 8);
        FUN_100222c3c(uVar1);
        uVar3 = 0;
        *unaff_x20 = uVar5;
        goto LAB_100222c14;
      }
      uVar1 = uVar1 + 1 & ~uVar4;
    } while ((*(ulong *)(uVar5 + 0x38 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0);
  }
  uVar2 = 0;
  uVar3 = 1;
LAB_100222c14:
  auVar6._8_8_ = uVar3;
  auVar6._0_8_ = uVar2;
  return auVar6;
}



/* Address: 0x100222c3c | FUN_100222c3c */

void FUN_100222c3c(Bucket param_1)

{
  _HashTable _Var1;
  __uint64 *p_Var2;
  __uint64 *p_Var3;
  long lVar4;
  code *pcVar5;
  Bucket BVar6;
  Hasher HVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  
  lVar9 = *unaff_x20;
  _Var1.unknown = (undefined *)(lVar9 + 0x38);
  uVar8 = -1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
  uVar11 = param_1.offset + 1U & (uVar8 ^ 0xffffffffffffffff);
  uVar12 = 1L << (uVar11 & 0x3f);
  if ((uVar12 & *(ulong *)(_Var1.unknown + (uVar11 >> 6) * 8)) == 0) {
    uVar8 = (ulong)param_1.offset >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(_Var1.unknown + uVar8) =
         *(ulong *)(_Var1.unknown + uVar8) & (-1L << (param_1.offset & 0x3fU)) - 1U;
  }
  else {
    puVar10 = (undefined *)~uVar8;
    HVar7.unknown = puVar10;
    BVar6 = Swift::_HashTable::previousHole(param_1,_Var1);
    if ((*(ulong *)(_Var1.unknown + (uVar11 >> 6) * 8) & uVar12) != 0) {
      uVar8 = BVar6.offset + 1U & (ulong)puVar10;
      do {
        lVar4 = *(long *)(lVar9 + 0x30);
        p_Var2 = (__uint64 *)(lVar4 + uVar11 * 8);
        uVar12 = Swift::Hasher::_hash(*(__int64 *)(lVar9 + 0x28),*p_Var2,HVar7);
        uVar12 = uVar12 & (ulong)puVar10;
        if (param_1.offset < (long)uVar8) {
          if (uVar8 <= uVar12 || (long)uVar12 <= param_1.offset) {
LAB_100222d14:
            p_Var3 = (__uint64 *)(lVar4 + param_1.offset * 8);
            if ((param_1.offset != uVar11) || (p_Var2 + 1 <= p_Var3)) {
              *p_Var3 = *p_Var2;
              param_1.offset = uVar11;
            }
          }
        }
        else if (uVar8 <= uVar12 && (long)uVar12 <= param_1.offset) goto LAB_100222d14;
        uVar11 = uVar11 + 1 & (ulong)puVar10;
      } while ((*(ulong *)(_Var1.unknown + (uVar11 >> 6) * 8) >> (uVar11 & 0x3f) & 1) != 0);
    }
    uVar8 = (ulong)param_1.offset >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(_Var1.unknown + uVar8) =
         (-1L << (param_1.offset & 0x3fU)) - 1U & *(ulong *)(_Var1.unknown + uVar8);
  }
  if (!SBORROW8(*(long *)(lVar9 + 0x10),1)) {
    *(long *)(lVar9 + 0x10) = *(long *)(lVar9 + 0x10) + -1;
    *(int *)(lVar9 + 0x24) = *(int *)(lVar9 + 0x24) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x100222da8);
  (*pcVar5)();
}



/* Address: 0x100222da8 | FUN_100222da8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100222da8(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x100222dd4 | FUN_100222dd4 */

void FUN_100222dd4(void)

{
  long unaff_x20;
  
  FUN_100221a68(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Address: 0x100222de4 | FUN_100222de4 */

void FUN_100222de4(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x100222df4 | FUN_100222df4 */

void FUN_100222df4(long param_1,long param_2)

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



/* Address: 0x100222e08 | FUN_100222e08 */

void FUN_100222e08(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x100222e10 | FUN_100222e10 */

void FUN_100222e10(long param_1,undefined8 param_2,undefined *param_3,ulong param_4,long *param_5)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  Hasher HVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  __uint64 _Var12;
  
  lVar5 = *(long *)(param_3 + 0x10);
  uVar7 = param_4 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(param_1 + uVar7) = *(ulong *)(param_1 + uVar7) & (-1L << (param_4 & 0x3f)) - 1U;
  lVar5 = lVar5 + -1;
  HVar4.unknown = param_3;
LAB_100222e88:
  do {
    do {
      lVar1 = param_5[3];
      uVar7 = param_5[4];
      lVar8 = lVar1;
      if (uVar7 == 0) {
        uVar6 = param_5[2] + 0x40U >> 6;
        lVar11 = lVar1;
        do {
          lVar8 = lVar11 + 1;
          if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100222fc4);
            (*pcVar2)();
          }
          if ((long)uVar6 <= lVar8) {
            if ((long)uVar6 <= lVar1 + 1) {
              uVar6 = lVar1 + 1;
            }
            param_5[3] = uVar6 - 1;
            param_5[4] = 0;
            _swift_retain(param_3);
            FUN_100223144(param_1,param_2,lVar5,param_3);
            return;
          }
          uVar7 = *(ulong *)(param_5[1] + lVar8 * 8);
          lVar11 = lVar11 + 1;
        } while (uVar7 == 0);
      }
      uVar6 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      _Var12 = *(__uint64 *)
                (*(long *)(*param_5 + 0x30) + LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) * 8 +
                lVar8 * 0x200);
      param_5[3] = lVar8;
      param_5[4] = uVar7 - 1 & uVar7;
      uVar7 = Swift::Hasher::_hash(*(__int64 *)(param_3 + 0x28),_Var12,HVar4);
      uVar10 = -1L << ((ulong)(byte)param_3[0x20] & 0x3f);
      uVar7 = uVar7 & (uVar10 ^ 0xffffffffffffffff);
      uVar6 = uVar7 >> 6;
      uVar9 = 1L << (uVar7 & 0x3f);
    } while ((uVar9 & *(ulong *)(param_3 + uVar6 * 8 + 0x38)) == 0);
    if (*(__uint64 *)(*(long *)(param_3 + 0x30) + uVar7 * 8) != _Var12) {
      do {
        uVar7 = uVar7 + 1 & ~uVar10;
        uVar6 = uVar7 >> 6;
        uVar9 = 1L << (uVar7 & 0x3f);
        if ((uVar9 & *(ulong *)(param_3 + uVar6 * 8 + 0x38)) == 0) goto LAB_100222e88;
      } while (*(__uint64 *)(*(long *)(param_3 + 0x30) + uVar7 * 8) != _Var12);
    }
    uVar7 = *(ulong *)(param_1 + uVar6 * 8);
    *(ulong *)(param_1 + uVar6 * 8) = uVar7 & (uVar9 ^ 0xffffffffffffffff);
    if ((uVar7 & uVar9) != 0) {
      bVar3 = SBORROW8(lVar5,1);
      lVar5 = lVar5 + -1;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100222fc8);
        (*pcVar2)();
      }
      if (lVar5 == 0) {
        return;
      }
    }
  } while( true );
}



/* Address: 0x100222fc8 | FUN_100222fc8 */

void FUN_100222fc8(long param_1,undefined8 param_2,undefined *param_3,ulong param_4,long *param_5)

{
  code *pcVar1;
  bool bVar2;
  Hasher HVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  __uint64 _Var10;
  
  lVar4 = *(long *)(param_3 + 0x10);
  uVar6 = param_4 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(param_1 + uVar6) = *(ulong *)(param_1 + uVar6) & (-1L << (param_4 & 0x3f)) - 1U;
  lVar4 = lVar4 + -1;
  lVar5 = *param_5;
  uVar6 = param_5[1];
  uVar8 = *(ulong *)(lVar5 + 0x10);
  HVar3.unknown = param_3;
  if (uVar6 != uVar8) {
    do {
      if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10022313c);
        (*pcVar1)();
      }
      if (uVar8 <= uVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100223140);
        (*pcVar1)();
      }
      _Var10 = *(__uint64 *)(lVar5 + uVar6 * 8 + 0x20);
      param_5[1] = uVar6 + 1;
      uVar6 = Swift::Hasher::_hash(*(__int64 *)(param_3 + 0x28),_Var10,HVar3);
      uVar9 = -1L << ((ulong)(byte)param_3[0x20] & 0x3f);
      uVar6 = uVar6 & (uVar9 ^ 0xffffffffffffffff);
      uVar8 = uVar6 >> 6;
      uVar7 = 1L << (uVar6 & 0x3f);
      if ((uVar7 & *(ulong *)(param_3 + uVar8 * 8 + 0x38)) != 0) {
        if (*(__uint64 *)(*(long *)(param_3 + 0x30) + uVar6 * 8) != _Var10) {
          do {
            uVar6 = uVar6 + 1 & ~uVar9;
            uVar8 = uVar6 >> 6;
            uVar7 = 1L << (uVar6 & 0x3f);
            if ((uVar7 & *(ulong *)(param_3 + uVar8 * 8 + 0x38)) == 0) goto LAB_100223078;
          } while (*(__uint64 *)(*(long *)(param_3 + 0x30) + uVar6 * 8) != _Var10);
        }
        uVar6 = *(ulong *)(param_1 + uVar8 * 8);
        *(ulong *)(param_1 + uVar8 * 8) = uVar6 & (uVar7 ^ 0xffffffffffffffff);
        if ((uVar6 & uVar7) != 0) {
          bVar2 = SBORROW8(lVar4,1);
          lVar4 = lVar4 + -1;
          if (bVar2) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100223144);
            (*pcVar1)();
          }
          if (lVar4 == 0) {
            return;
          }
        }
      }
LAB_100223078:
      lVar5 = *param_5;
      uVar6 = param_5[1];
      uVar8 = *(ulong *)(lVar5 + 0x10);
    } while (uVar6 != uVar8);
  }
  _swift_retain(param_3);
  FUN_100223144(param_1,param_2,lVar4,param_3);
  return;
}



/* Address: 0x100223144 | FUN_100223144 */

undefined * FUN_100223144(ulong *param_1,long param_2,undefined *param_3,undefined *param_4)

{
  code *pcVar1;
  bool bVar2;
  _SetStorage *this;
  undefined *puVar3;
  ulong uVar4;
  Hasher HVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  __uint64 _Var10;
  long lVar11;
  ulong uVar12;
  
  puVar3 = PTR___swiftEmptySetSingleton_100eae0e8;
  if (param_3 != (undefined *)0x0) {
    if (param_3 == *(undefined **)(param_4 + 0x10)) {
      return param_4;
    }
    this = (_SetStorage *)&DAT_100fb7578;
    HVar5.unknown = param_3;
    FUN_1000037f0(&DAT_100fb7578,&DAT_100c36e70);
    puVar3 = param_3;
    Swift::_SetStorage::_allocate(this,(__int64)param_3);
    if (param_2 < 1) {
      uVar12 = 0;
    }
    else {
      uVar12 = *param_1;
    }
    lVar7 = 0;
    do {
      if (uVar12 == 0) {
        do {
          lVar11 = lVar7 + 1;
          if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100223324);
            (*pcVar1)();
          }
          if (param_2 <= lVar11) goto LAB_1002231bc;
          uVar12 = param_1[lVar11];
          lVar7 = lVar7 + 1;
        } while (uVar12 == 0);
        uVar6 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
        uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
        uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
        uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
        uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
        uVar12 = uVar12 - 1 & uVar12;
      }
      else {
        uVar6 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
        uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
        uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
        uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
        uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
        uVar12 = uVar12 - 1 & uVar12;
        lVar11 = lVar7;
      }
      _Var10 = *(__uint64 *)(*(long *)(param_4 + 0x30) + (LZCOUNT(uVar6) | lVar11 << 6) * 8);
      uVar4 = Swift::Hasher::_hash(*(__int64 *)(puVar3 + 0x28),_Var10,HVar5);
      uVar9 = -1L << ((ulong)(byte)puVar3[0x20] & 0x3f);
      uVar4 = uVar4 & (uVar9 ^ 0xffffffffffffffff);
      uVar8 = uVar4 >> 6;
      uVar6 = -1L << (uVar4 & 0x3f) & (*(ulong *)(puVar3 + uVar8 * 8 + 0x38) ^ 0xffffffffffffffff);
      if (uVar6 == 0) {
        bVar2 = false;
        uVar6 = 0x3f - uVar9 >> 6;
        do {
          uVar4 = uVar8 + 1;
          if ((uVar4 == uVar6) && (bVar2)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100223328);
            (*pcVar1)();
          }
          uVar8 = 0;
          if (uVar4 != uVar6) {
            uVar8 = uVar4;
          }
          bVar2 = (bool)(uVar4 == uVar6 | bVar2);
        } while (*(ulong *)(puVar3 + uVar8 * 8 + 0x38) == 0xffffffffffffffff);
        uVar6 = ~*(ulong *)(puVar3 + uVar8 * 8 + 0x38);
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
      *(ulong *)(puVar3 + uVar8 + 0x38) = 1L << (uVar6 & 0x3f) | *(ulong *)(puVar3 + uVar8 + 0x38);
      *(__uint64 *)(*(long *)(puVar3 + 0x30) + uVar6 * 8) = _Var10;
      *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
      bVar2 = SBORROW8((long)param_3,1);
      param_3 = param_3 + -1;
      if (bVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10022332c);
        (*pcVar1)();
      }
      lVar7 = lVar11;
    } while (param_3 != (undefined *)0x0);
  }
LAB_1002231bc:
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x10022332c | FUN_10022332c */

void FUN_10022332c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  long unaff_x21;
  
  FUN_100222e10(param_2,param_3,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Address: 0x10022335c | FUN_10022335c */

void FUN_10022335c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  long unaff_x21;
  
  FUN_100222fc8(param_2,param_3,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Address: 0x10022338c | FUN_10022338c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10022338c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100ec2820;
  _swift_allocObject(&DAT_100ec2820,0x18,7);
  _swift_unknownObjectWeakInit(puVar1 + 0x10,param_1);
  _swift_retain(puVar1);
  FUN_1001b8d88(param_2,FUN_1002234d8,puVar1);
  _swift_release(puVar1);
  return param_2;
}



/* Address: 0x10022340c | FUN_10022340c */

void FUN_10022340c(void)

{
  long unaff_x20;
  
  _swift_unknownObjectWeakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x100223430 | FUN_100223430 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
FUN_100223430(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,uint param_5,
             code *param_6,undefined8 param_7,long param_8)

{
  param_8 = param_8 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_8 != 0) {
    (*param_6)();
    if (param_1 == 0) {
      FUN_10022be98();
    }
    else {
      FUN_1002234e0(param_1,param_2,param_3,param_4,param_5 & 1);
    }
    return 0;
  }
  return 0;
}



/* Address: 0x1002234d8 | FUN_1002234d8 */

void FUN_1002234d8(void)

{
  FUN_100223430();
  return;
}



/* Address: 0x1002234e0 | FUN_1002234e0 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002234e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,undefined8 param_7,undefined8 param_8,uint param_9)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ID IVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ID unaff_x20;
  ID IVar14;
  ID self;
  undefined8 extraout_d0;
  undefined8 extraout_d0_00;
  undefined1 auStack_168 [24];
  undefined1 auStack_150 [24];
  undefined1 auStack_138 [24];
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  
  lVar2 = _TtC7PasteUI14CollectionView::cellCount;
  lVar11 = *(long *)(param_6 + 0x10) - *(long *)(param_5 + 0x10);
  if (SCARRY8(*(long *)(unaff_x20 + _TtC7PasteUI14CollectionView::cellCount),lVar11)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10022381c);
    (*pcVar3)();
  }
  *(long *)(unaff_x20 + _TtC7PasteUI14CollectionView::cellCount) =
       *(long *)(unaff_x20 + _TtC7PasteUI14CollectionView::cellCount) + lVar11;
  puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1001f3a9c();
  lVar11 = _TtC7PasteUI14CollectionView::reusableCellQueueByIdentifier;
  _swift_beginAccess(unaff_x20 + _TtC7PasteUI14CollectionView::reusableCellQueueByIdentifier,
                     auStack_138,1,0);
  uVar5 = *(undefined8 *)(unaff_x20 + lVar11);
  *(undefined **)(unaff_x20 + lVar11) = puVar4;
  _swift_bridgeObjectRelease(uVar5);
  FUN_10022b4f8(&local_120);
  objc_stub::bounds(unaff_x20);
  uVar5 = *(undefined8 *)(unaff_x20 + lVar2);
  puVar10 = (undefined8 *)
            (unaff_x20 + _TtC7PasteUI14CollectionView::___lazy_storage___contentLayout);
  puVar10[1] = uStack_118;
  *puVar10 = local_120;
  puVar10[3] = uStack_108;
  puVar10[2] = uStack_110;
  puVar10[4] = local_100;
  puVar10[5] = extraout_d0;
  puVar10[6] = param_2;
  puVar10[7] = param_3;
  puVar10[8] = param_4;
  puVar10[9] = uVar5;
  *(undefined1 *)(puVar10 + 10) = 0;
  FUN_10022a480();
  lVar8 = param_5;
  FUN_100223820(param_5,param_6,param_7,param_8);
  FUN_10022b248();
  lVar11 = _TtC7PasteUI14CollectionView::visibleCells;
  _swift_beginAccess(unaff_x20 + _TtC7PasteUI14CollectionView::visibleCells,auStack_150,1,0);
  IVar14 = *(ID *)(unaff_x20 + lVar11);
  IVar6 = IVar14;
  _swift_bridgeObjectRetain();
  FUN_1002239b0();
  _swift_bridgeObjectRelease();
  self = *(ID *)(unaff_x20 + _TtC7PasteUI14CollectionView::scrollView);
  FUN_1002292a0();
  IVar14 = objc_stub::contentView(IVar14);
  objc_stub::bounds(IVar14);
  objc_stub::frame(self);
  uStack_a8 = puVar10[5];
  local_b0 = puVar10[4];
  uStack_98 = puVar10[7];
  uStack_a0 = puVar10[6];
  uStack_88 = puVar10[9];
  local_90 = puVar10[8];
  uStack_c8 = puVar10[1];
  local_d0 = *puVar10;
  uStack_b8 = puVar10[3];
  uStack_c0 = puVar10[2];
  puVar10 = &local_d0;
  IVar14 = IVar6;
  FUN_100224448(extraout_d0_00,param_2,IVar6,puVar10,param_5,param_6,param_7,param_8,lVar8);
  _swift_release(lVar8);
  _swift_bridgeObjectRelease(IVar6);
  uVar7 = (ulong)((uint)IVar14 & 1);
  FUN_100223c28(uVar7,puVar10,param_5,param_9 & 1);
  _swift_bridgeObjectRelease(param_5);
  _swift_bridgeObjectRelease(puVar10);
  lVar8 = *(long *)(unaff_x20 + lVar11);
  *(ulong *)(unaff_x20 + lVar11) = uVar7;
  _swift_bridgeObjectRelease();
  FUN_10022b1cc();
  lVar11 = lVar8;
  FUN_1002258ac();
  _swift_bridgeObjectRelease(lVar8);
  lVar8 = lVar11;
  FUN_100223f2c();
  _swift_bridgeObjectRelease(lVar11);
  lVar11 = *(long *)(unaff_x20 + lVar2);
  lVar12 = *(long *)(lVar8 + 0x10);
  if (lVar12 <= lVar11) {
    if (lVar12 == 0) {
      lVar13 = 0;
    }
    else {
      lVar13 = *(long *)(lVar8 + lVar12 * 8 + 0x18);
    }
    plVar1 = (long *)(unaff_x20 +
                     _TtC7PasteUI14CollectionView::___lazy_storage___cellSelectionManager);
    lVar9 = *plVar1;
    *plVar1 = lVar8;
    plVar1[1] = lVar11;
    plVar1[2] = lVar13;
    *(bool *)(plVar1 + 3) = lVar12 == 0;
    _swift_bridgeObjectRelease(lVar9);
    FUN_100228f6c();
    lVar11 = _TtC7PasteUI14CollectionView::emptyPlaceholderView;
    _swift_beginAccess(unaff_x20 + _TtC7PasteUI14CollectionView::emptyPlaceholderView,auStack_168,0,
                       0);
    if (*(ID *)(unaff_x20 + lVar11) != 0) {
      objc_stub::setHidden_(*(ID *)(unaff_x20 + lVar11),(ulong)(*(long *)(unaff_x20 + lVar2) != 0));
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100223820);
  (*pcVar3)();
}



/* Address: 0x100223820 | FUN_100223820 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
FUN_100223820(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ID IVar2;
  uint uVar3;
  undefined1 *puVar4;
  long unaff_x20;
  long lVar5;
  ID IVar6;
  double dVar7;
  double extraout_d0;
  double dVar8;
  double dVar9;
  undefined1 auStack_d8 [24];
  double local_c0 [2];
  double local_b0;
  double local_a0;
  double dStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
  lVar1 = _TtC7PasteUI14CollectionView::visibleCells;
  puVar4 = auStack_d8;
  _swift_beginAccess(unaff_x20 + _TtC7PasteUI14CollectionView::visibleCells,puVar4,0,0);
  uVar3 = (uint)puVar4;
  IVar6 = *(ID *)(unaff_x20 + lVar1);
  IVar2 = IVar6;
  _swift_bridgeObjectRetain();
  FUN_10022a5b4();
  _swift_bridgeObjectRelease(IVar6);
  IVar6 = 0;
  if ((uVar3 & 0xff) != 1) {
    IVar6 = IVar2;
  }
  FUN_1001b0150(IVar6,param_1,param_2,param_3,param_4);
  dVar9 = (double)(long)IVar6;
  FUN_10022b4f8(local_c0);
  _CGRectGetHeight(dStack_98,local_90,uStack_88,local_80);
  dVar8 = local_c0[0] + local_b0;
  dVar7 = dStack_98 - dVar8;
  lVar5 = *(long *)(unaff_x20 + _TtC7PasteUI14CollectionView::scrollView);
  FUN_1002292a0();
  IVar6 = objc_stub::contentView(IVar6);
  objc_stub::bounds(IVar6);
  lVar1 = _TtCC7PasteUI14CollectionView10ScrollView::shouldSilenceScrollingEvents;
  IVar6 = 0;
  *(undefined1 *)(lVar5 + _TtCC7PasteUI14CollectionView10ScrollView::shouldSilenceScrollingEvents) =
       1;
  FUN_1002292a0();
  IVar6 = objc_stub::contentView(IVar6);
  objc_stub::bounds(IVar6);
  objc_stub::setBounds_(IVar6,(local_a0 + dVar7) * dVar9 + extraout_d0,dVar8 + 0.0);
  *(undefined1 *)(lVar5 + lVar1) = 0;
  return 0;
}



/* Address: 0x1002239b0 | FUN_1002239b0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_1002239b0(long param_1)

{
  undefined8 *puVar1;
  __uint64 _Var2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  _DictionaryStorage *this;
  Hasher HVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *capacity;
  undefined *puVar13;
  ulong uVar14;
  long lVar15;
  undefined8 local_80;
  undefined8 uStack_78;
  __uint64 local_70;
  long local_68;
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar13 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fb5ea8;
    FUN_1000037f0(&DAT_100fb5ea8,&DAT_100c34838);
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    puVar13 = capacity;
  }
  uVar11 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar14 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar14 = ~(-1L << (uVar11 & 0x3f));
  }
  uVar14 = uVar14 & *(ulong *)(param_1 + 0x40);
  _swift_bridgeObjectRetain(param_1);
  lVar15 = 0;
  while( true ) {
    for (; uVar14 != 0; uVar14 = uVar14 - 1 & uVar14) {
      uVar9 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | lVar15 << 6;
      local_70 = *(__uint64 *)(*(long *)(param_1 + 0x30) + uVar9 * 8);
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x38) + uVar9 * 0x10);
      uStack_78 = puVar1[1];
      local_80 = *puVar1;
      HVar6.unknown = &DAT_100fb6480;
      FUN_1000037f0(&DAT_100fb6480,&DAT_100c35588);
      uVar7 = 0;
      FUN_10000ec2c(0,&DAT_100fb64d8,&PTR__OBJC_CLASS___NSView_100f8d628);
      _swift_dynamicCast(&local_68,&local_80,HVar6.unknown,uVar7,7);
      lVar3 = local_68;
      _Var2 = local_70;
      if (local_68 == 0) {
        _swift_release(param_1);
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100223c28);
        (*pcVar4)();
      }
      uVar8 = Swift::Hasher::_hash(*(__int64 *)(puVar13 + 0x28),local_70,HVar6);
      uVar12 = -1L << ((ulong)(byte)puVar13[0x20] & 0x3f);
      uVar8 = uVar8 & (uVar12 ^ 0xffffffffffffffff);
      uVar10 = uVar8 >> 6;
      uVar9 = -1L << (uVar8 & 0x3f) & (*(ulong *)(puVar13 + uVar10 * 8 + 0x40) ^ 0xffffffffffffffff)
      ;
      if (uVar9 == 0) {
        bVar5 = false;
        uVar9 = 0x3f - uVar12 >> 6;
        do {
          uVar8 = uVar10 + 1;
          if ((uVar8 == uVar9) && (bVar5)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100223c14);
            (*pcVar4)();
          }
          uVar10 = 0;
          if (uVar8 != uVar9) {
            uVar10 = uVar8;
          }
          bVar5 = (bool)(uVar8 == uVar9 | bVar5);
        } while (*(ulong *)(puVar13 + uVar10 * 8 + 0x40) == 0xffffffffffffffff);
        uVar9 = ~*(ulong *)(puVar13 + uVar10 * 8 + 0x40);
        uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
        uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
        uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar10 << 6;
      }
      else {
        uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
        uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
        uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar8 & 0x7fffffffffffffc0;
      }
      uVar10 = uVar9 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar13 + uVar10 + 0x40) =
           1L << (uVar9 & 0x3f) | *(ulong *)(puVar13 + uVar10 + 0x40);
      *(__uint64 *)(*(long *)(puVar13 + 0x30) + uVar9 * 8) = _Var2;
      *(long *)(*(long *)(puVar13 + 0x38) + uVar9 * 8) = lVar3;
      *(long *)(puVar13 + 0x10) = *(long *)(puVar13 + 0x10) + 1;
    }
    bVar5 = SCARRY8(lVar15,1);
    lVar15 = lVar15 + 1;
    if (bVar5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100223c10);
      (*pcVar4)();
    }
    if ((long)(uVar11 + 0x3f >> 6) <= lVar15) break;
    uVar14 = ((ulong *)(param_1 + 0x40))[lVar15];
  }
  _swift_release(param_1);
  return puVar13;
}



/* Address: 0x100223c28 | FUN_100223c28 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100223c28(byte param_1,undefined8 param_2,long param_3,ulong param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  ID IVar4;
  undefined *puVar5;
  undefined *puVar6;
  void *aBlock;
  undefined *puVar7;
  void *aBlock_00;
  undefined8 unaff_x20;
  undefined8 uVar8;
  undefined *local_d0;
  undefined8 local_c8;
  code *local_c0;
  undefined *puStack_b8;
  code *local_b0;
  undefined *local_a8;
  undefined1 auStack_a0 [16];
  byte local_90;
  undefined8 local_88;
  long lStack_80;
  
  puVar3 = &DAT_100ec2848;
  local_90 = param_1;
  local_88 = param_2;
  lStack_80 = param_3;
  _swift_allocObject(&DAT_100ec2848,0x30,7);
  puVar3[0x10] = param_1;
  *(undefined8 *)(puVar3 + 0x18) = param_2;
  *(long *)(puVar3 + 0x20) = param_3;
  *(undefined8 *)(puVar3 + 0x28) = unaff_x20;
  uVar8 = *(undefined8 *)PTR__kCAMediaTimingFunctionEaseOut_100eaa3c0;
  _swift_bridgeObjectRetain_n(param_2,2);
  _swift_bridgeObjectRetain_n(param_3,2);
  IVar4 = CAMediaTimingFunction::functionWithName_((ID)&_OBJC_CLASS___CAMediaTimingFunction,uVar8);
  if (((param_1 & 1) == 0) || ((param_4 & 1) == 0)) {
    FUN_100225504(param_2);
    FUN_100225620(param_2);
    _swift_bridgeObjectRelease(param_3);
    _swift_bridgeObjectRelease(param_2);
    _swift_release(puVar3);
  }
  else {
    _swift_bridgeObjectRelease(param_3);
    _swift_bridgeObjectRelease(param_2);
    puVar5 = &DAT_100ec2870;
    _swift_allocObject(&DAT_100ec2870,0x38,7);
    *(undefined8 *)(puVar5 + 0x10) = 0;
    puVar5[0x18] = 1;
    *(ID *)(puVar5 + 0x20) = IVar4;
    *(code **)(puVar5 + 0x28) = FUN_100225a2c;
    *(undefined1 **)(puVar5 + 0x30) = auStack_a0;
    puVar6 = &DAT_100ec2898;
    _swift_allocObject(&DAT_100ec2898,0x20,7);
    *(code **)(puVar6 + 0x10) = FUN_100208b84;
    *(undefined **)(puVar6 + 0x18) = puVar5;
    puVar1 = PTR___NSConcreteStackBlock_100ea82a0;
    local_b0 = FUN_1000e8174;
    local_d0 = PTR___NSConcreteStackBlock_100ea82a0;
    local_c8 = 0x42000000;
    local_c0 = FUN_1000f7788;
    puStack_b8 = &DAT_100ec28b0;
    local_a8 = puVar6;
    aBlock = __Block_copy(&local_d0);
    puVar7 = local_a8;
    _swift_retain(puVar6);
    _swift_release(puVar7);
    puVar7 = &DAT_100ec28e8;
    _swift_allocObject(&DAT_100ec28e8,0x20,7);
    *(code **)(puVar7 + 0x10) = FUN_100225a6c;
    *(undefined **)(puVar7 + 0x18) = puVar3;
    local_b0 = FUN_100208bf0;
    local_d0 = puVar1;
    local_c8 = 0x42000000;
    local_c0 = FUN_100030410;
    puStack_b8 = &DAT_100ec2900;
    local_a8 = puVar7;
    aBlock_00 = __Block_copy(&local_d0);
    puVar7 = local_a8;
    _swift_retain(puVar3);
    _swift_release(puVar7);
    NSAnimationContext::runAnimationGroup_completionHandler_
              ((ID)&_OBJC_CLASS___NSAnimationContext,aBlock,aBlock_00);
    _swift_release(puVar3);
    __Block_release(aBlock_00);
    __Block_release(aBlock);
    puVar3 = puVar6;
    _swift_isEscapingClosureAtFileLocation(puVar6,"",0x84,0x1c,0x2e,1);
    _swift_release(puVar6);
    _swift_release(puVar5);
    if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100223eb0);
      (*pcVar2)();
    }
  }
  FUN_100224230();
  if (param_3 == 0) {
    FUN_1001f3988(PTR___swiftEmptyArrayStorage_100eae0d8);
  }
  return;
}



/* Address: 0x100223f2c | FUN_100223f2c */

undefined * FUN_100223f2c(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  undefined *puVar5;
  code *pcVar6;
  MainActor *this;
  MainActor *pMVar7;
  undefined8 *puVar8;
  UnownedSerialExecutor UVar9;
  UnownedSerialExecutor UVar10;
  long unaff_x20;
  undefined *puVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  
  lVar13 = _TtC7PasteUI14CollectionView::cellCount;
  puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar16 = *(long *)(param_1 + 0x10);
  if (lVar16 != 0) {
    this = Swift::MainActor::typeMetadataAccessor();
    plVar12 = (long *)(param_1 + 0x30);
    pMVar7 = this;
    do {
      cVar4 = (char)plVar12[-2];
      lVar2 = plVar12[-1];
      lVar3 = *plVar12;
      pMVar7 = Swift::MainActor::get_shared(this,pMVar7);
      puVar8 = &DAT_100fb6f30;
      FUN_100003a00(&DAT_100fb6f30,PTR_typeMetadataAccessor_100eaec10,
                    PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
      UVar9 = Swift::Actor::get_unownedExecutor();
      UVar10 = UVar9;
      _swift_task_isCurrentExecutor();
      if (((ulong)UVar10.unknown & 1) == 0) {
        _swift_task_reportUnexpectedExecutor
                  ("PasteUI/CollectionView+Changeset.swift",0x26,1,0x6c,UVar9.unknown,puVar8);
      }
      if ((cVar4 == '\x02') || (cVar4 == '\x01')) {
        _swift_release();
      }
      else {
        lVar17 = *(long *)(unaff_x20 + lVar13);
        _swift_release();
        if (lVar17 < 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10022417c);
          (*pcVar6)();
        }
        if ((-1 < lVar3) && (lVar3 < lVar17)) {
          pMVar7 = (MainActor *)puVar5;
          _swift_isUniquelyReferenced_nonNull_native();
          if (((ulong)pMVar7 & 1) == 0) {
            pMVar7 = (MainActor *)0x0;
            FUN_10022ff00(0,*(long *)(puVar5 + 0x10) + 1,1);
          }
          uVar14 = *(ulong *)(puVar5 + 0x10);
          if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar14) {
            pMVar7 = (MainActor *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
            FUN_10022ff00(pMVar7,uVar14 + 1,1);
          }
          *(ulong *)(puVar5 + 0x10) = uVar14 + 1;
          puVar5[uVar14 * 0x18 + 0x20] = cVar4;
          *(long *)(puVar5 + uVar14 * 0x18 + 0x28) = lVar2;
          *(long *)(puVar5 + uVar14 * 0x18 + 0x30) = lVar3;
        }
      }
      plVar12 = plVar12 + 3;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
  }
  puVar11 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar16 = *(long *)(puVar5 + 0x10);
  if (lVar16 == 0) {
    _swift_release(puVar5);
    puVar11 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    FUN_10022ff1c(0,lVar16,0);
    lVar13 = 0x30;
    uVar14 = *(ulong *)(puVar11 + 0x10);
    do {
      uVar15 = *(undefined8 *)(puVar5 + lVar13);
      uVar1 = uVar14 + 1;
      if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar14) {
        FUN_10022ff1c(1 < *(ulong *)(puVar11 + 0x18),uVar1,1);
      }
      *(ulong *)(puVar11 + 0x10) = uVar1;
      *(undefined8 *)(puVar11 + uVar14 * 8 + 0x20) = uVar15;
      lVar13 = lVar13 + 0x18;
      lVar16 = lVar16 + -1;
      uVar14 = uVar1;
    } while (lVar16 != 0);
    _swift_release(puVar5);
  }
  return puVar11;
}



/* Address: 0x10022417c | FUN_10022417c */

void FUN_10022417c(void)

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
              ("PasteUI/CollectionView+Changeset.swift",0x26,1,0x51,UVar4.unknown,puVar3);
  }
  FUN_100221d34(0);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x100224230 | FUN_100224230 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_100224230(long param_1,undefined8 param_2,Hasher param_3)

{
  long *plVar1;
  code *pcVar2;
  bool bVar3;
  _DictionaryStorage *this;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *capacity;
  undefined *puVar10;
  long lVar11;
  __uint64 _Var12;
  long lVar13;
  ulong uVar14;
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar10 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fb5ea0;
    FUN_1000037f0(&DAT_100fb5ea0,&DAT_100c34830);
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    puVar10 = capacity;
  }
  lVar13 = 0;
  uVar8 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar14 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar14 = ~(-1L << (uVar8 & 0x3f));
  }
  uVar14 = uVar14 & *(ulong *)(param_1 + 0x40);
  while( true ) {
    for (; uVar14 != 0; uVar14 = uVar14 - 1 & uVar14) {
      uVar6 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = lVar13 << 9 | LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) << 3;
      _Var12 = *(__uint64 *)(*(long *)(param_1 + 0x30) + uVar6);
      lVar11 = *(long *)(*(long *)(param_1 + 0x38) + uVar6);
      lVar4 = lVar11;
      _swift_getObjectType();
      _swift_conformsToProtocol2();
      if (lVar4 == 0 || lVar11 == 0) {
        _swift_release(puVar10);
        return (undefined *)0x0;
      }
      uVar5 = Swift::Hasher::_hash(*(__int64 *)(puVar10 + 0x28),_Var12,param_3);
      uVar9 = -1L << ((ulong)(byte)puVar10[0x20] & 0x3f);
      uVar5 = uVar5 & (uVar9 ^ 0xffffffffffffffff);
      uVar7 = uVar5 >> 6;
      uVar6 = -1L << (uVar5 & 0x3f) & (*(ulong *)(puVar10 + uVar7 * 8 + 0x40) ^ 0xffffffffffffffff);
      if (uVar6 == 0) {
        bVar3 = false;
        uVar6 = 0x3f - uVar9 >> 6;
        do {
          uVar5 = uVar7 + 1;
          if ((uVar5 == uVar6) && (bVar3)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100224448);
            (*pcVar2)();
          }
          uVar7 = 0;
          if (uVar5 != uVar6) {
            uVar7 = uVar5;
          }
          bVar3 = (bool)(uVar5 == uVar6 | bVar3);
        } while (*(ulong *)(puVar10 + uVar7 * 8 + 0x40) == 0xffffffffffffffff);
        uVar6 = ~*(ulong *)(puVar10 + uVar7 * 8 + 0x40);
        uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
        uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
        uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
        uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
        uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar7 << 6;
      }
      else {
        uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
        uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
        uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
        uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
        uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar5 & 0x7fffffffffffffc0;
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar10 + uVar7 + 0x40) = 1L << (uVar6 & 0x3f) | *(ulong *)(puVar10 + uVar7 + 0x40)
      ;
      *(__uint64 *)(*(long *)(puVar10 + 0x30) + uVar6 * 8) = _Var12;
      plVar1 = (long *)(*(long *)(puVar10 + 0x38) + uVar6 * 0x10);
      *plVar1 = lVar11;
      plVar1[1] = lVar4;
      *(long *)(puVar10 + 0x10) = *(long *)(puVar10 + 0x10) + 1;
    }
    bVar3 = SCARRY8(lVar13,1);
    lVar13 = lVar13 + 1;
    if (bVar3) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100224444);
      (*pcVar2)();
    }
    if ((long)(uVar8 + 0x3f >> 6) <= lVar13) break;
    uVar14 = ((ulong *)(param_1 + 0x40))[lVar13];
  }
  return puVar10;
}



/* Address: 0x100224448 | FUN_100224448 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined4
FUN_100224448(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,double *param_6,long param_7,undefined8 param_8,undefined8 param_9,
             undefined8 param_10,long param_11)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  MainActor *pMVar8;
  MainActor *pMVar9;
  undefined8 *puVar10;
  UnownedSerialExecutor UVar11;
  UnownedSerialExecutor UVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 *puVar18;
  Hasher HVar19;
  ulong uVar20;
  byte *pbVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  uint uVar25;
  byte bVar26;
  __uint64 _Var27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  undefined4 local_dc;
  ID local_d8;
  
  _swift_bridgeObjectRetain();
  lVar5 = param_5;
  thunk_FUN_100222180();
  lVar6 = lVar5;
  FUN_100233494(param_1,param_2,param_3,param_4);
  lVar7 = lVar5;
  FUN_10022eaf4(lVar5);
  FUN_1001b2a0c(param_7,param_8,param_9,param_10,lVar7);
  _swift_bridgeObjectRelease(lVar7);
  lVar7 = param_7;
  FUN_100224e0c(param_7,lVar6);
  _swift_bridgeObjectRetain(param_7);
  FUN_100230858(lVar7);
  _swift_bridgeObjectRelease(param_7);
  _swift_bridgeObjectRelease(lVar5);
  uVar20 = *(ulong *)(param_7 + 0x10);
  if (uVar20 != 0) {
    pMVar8 = Swift::MainActor::typeMetadataAccessor();
    uVar24 = 0;
    pMVar9 = pMVar8;
    do {
      if (*(ulong *)(param_7 + 0x10) <= uVar24) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100224df8);
        (*pcVar4)();
      }
      pbVar21 = (byte *)(param_7 + 0x20 + uVar24 * 0x18);
      bVar26 = *pbVar21;
      _Var27 = *(__uint64 *)(pbVar21 + 0x10);
      pMVar9 = Swift::MainActor::get_shared(pMVar8,pMVar9);
      puVar10 = &DAT_100fb6f30;
      HVar19.unknown = PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18;
      FUN_100003a00(&DAT_100fb6f30,PTR_typeMetadataAccessor_100eaec10);
      UVar11 = Swift::Actor::get_unownedExecutor();
      UVar12 = UVar11;
      _swift_task_isCurrentExecutor();
      if (((ulong)UVar12.unknown & 1) == 0) {
        HVar19.unknown = &DAT_00000001;
        _swift_task_reportUnexpectedExecutor
                  ("PasteUI/CollectionView.CellTransitionManager.swift",0x32,1,0x38,UVar11.unknown,
                   puVar10);
      }
      uVar25 = (uint)bVar26;
      if (*(long *)(lVar6 + 0x10) != 0) {
        uVar13 = Swift::Hasher::_hash(*(__int64 *)(lVar6 + 0x28),_Var27,HVar19);
        uVar22 = -1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f);
        uVar13 = uVar13 & (uVar22 ^ 0xffffffffffffffff);
        if ((*(ulong *)(lVar6 + 0x38 + (uVar13 >> 6) * 8) >> (uVar13 & 0x3f) & 1) != 0) {
          do {
            if (*(__uint64 *)(*(long *)(lVar6 + 0x30) + uVar13 * 8) == _Var27) {
              _swift_release();
              if (((uint)(uVar25 < 5) & 0x16U >> (ulong)(uVar25 & 0x1f)) == 0) goto LAB_10022456c;
              local_dc = 1;
              puVar17 = PTR___swiftEmptyArrayStorage_100eae0d8;
              goto joined_r0x000100224690;
            }
            uVar13 = uVar13 + 1 & ~uVar22;
          } while ((*(ulong *)(lVar6 + 0x38 + (uVar13 >> 6) * 8) >> (uVar13 & 0x3f) & 1) != 0);
        }
      }
      _swift_release();
LAB_10022456c:
      uVar24 = uVar24 + 1;
    } while (uVar24 != uVar20);
  }
  local_dc = 0;
  puVar17 = PTR___swiftEmptyArrayStorage_100eae0d8;
joined_r0x000100224690:
  PTR___swiftEmptyArrayStorage_100eae0d8 = puVar17;
  if (uVar20 != 0) {
    uVar24 = 0;
    do {
      while( true ) {
        if (*(ulong *)(param_7 + 0x10) <= uVar24) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100224de8);
          (*pcVar4)();
        }
        pbVar21 = (byte *)(param_7 + 0x20 + uVar24 * 0x18);
        bVar26 = *pbVar21;
        lVar5 = *(long *)(pbVar21 + 8);
        _Var27 = *(__uint64 *)(pbVar21 + 0x10);
        pMVar9 = Swift::MainActor::typeMetadataAccessor();
        pMVar9 = Swift::MainActor::get_shared(pMVar9,pMVar9);
        puVar10 = &DAT_100fb6f30;
        HVar19.unknown = PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18;
        FUN_100003a00(&DAT_100fb6f30,PTR_typeMetadataAccessor_100eaec10);
        UVar11 = Swift::Actor::get_unownedExecutor();
        UVar12 = UVar11;
        puVar14 = puVar10;
        _swift_task_isCurrentExecutor();
        if (((ulong)UVar12.unknown & 1) == 0) {
          puVar14 = (undefined8 *)0x0;
          HVar19.unknown = &DAT_00000001;
          _swift_task_reportUnexpectedExecutor
                    ("PasteUI/CollectionView.CellTransitionManager.swift",0x32,1,0x7a,UVar11.unknown
                     ,puVar10);
        }
        uVar24 = uVar24 + 1;
        if (2 < bVar26) break;
        if (bVar26 < 2) {
LAB_100224a44:
          if ((*(long *)(param_5 + 0x10) != 0) &&
             (lVar7 = lVar5, FUN_100071340(), ((ulong)puVar14 & 1) != 0)) {
            local_d8 = *(ID *)(*(long *)(param_5 + 0x38) + lVar7 * 8);
            goto LAB_100224b18;
          }
        }
        else if (*(long *)(lVar6 + 0x10) != 0) {
          uVar13 = Swift::Hasher::_hash(*(__int64 *)(lVar6 + 0x28),_Var27,HVar19);
          uVar22 = -1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f);
          uVar13 = uVar13 & (uVar22 ^ 0xffffffffffffffff);
          if ((*(ulong *)(lVar6 + 0x38 + (uVar13 >> 6) * 8) >> (uVar13 & 0x3f) & 1) != 0) {
            do {
              if (*(__uint64 *)(*(long *)(lVar6 + 0x30) + uVar13 * 8) == _Var27) {
                local_d8 = _Var27;
                (**(code **)(param_11 + 0x10))();
                dVar36 = *param_6;
                dVar29 = param_6[1];
                dVar30 = param_6[2];
                dVar35 = param_6[4];
                dVar31 = param_6[5];
                dVar32 = param_6[6];
                dVar33 = param_6[7];
                dVar34 = param_6[8];
                dVar28 = dVar31;
                _CGRectGetHeight(dVar31,dVar32,dVar33,dVar34);
                dVar36 = dVar36 + dVar30;
                _CGRectGetHeight(dVar31,dVar32,dVar33,dVar34);
                dVar31 = dVar31 - dVar36;
                objc_stub::setFrame_
                          (local_d8,dVar29 + (dVar35 + (dVar28 - dVar36)) * (double)lVar5,dVar30,
                           dVar31,dVar31);
                objc_stub::setAlphaValue_(local_d8,0);
                bVar26 = 2;
                goto LAB_100224b18;
              }
              uVar13 = uVar13 + 1 & ~uVar22;
            } while ((*(ulong *)(lVar6 + 0x38 + (uVar13 >> 6) * 8) >> (uVar13 & 0x3f) & 1) != 0);
          }
        }
LAB_10022485c:
        _swift_release(pMVar9);
        if (uVar24 == uVar20) goto LAB_10022469c;
      }
      if (bVar26 != 3) goto LAB_100224a44;
      if ((*(long *)(param_5 + 0x10) == 0) ||
         (lVar7 = lVar5, FUN_100071340(), ((ulong)puVar14 & 1) == 0)) goto LAB_10022485c;
      local_d8 = *(ID *)(*(long *)(param_5 + 0x38) + lVar7 * 8);
      (**(code **)(param_11 + 0x30))(local_d8,_Var27);
      dVar36 = *param_6;
      dVar29 = param_6[1];
      dVar30 = param_6[2];
      dVar35 = param_6[4];
      dVar31 = param_6[5];
      dVar32 = param_6[6];
      dVar33 = param_6[7];
      dVar34 = param_6[8];
      dVar28 = dVar31;
      _CGRectGetHeight(dVar31,dVar32,dVar33,dVar34);
      dVar36 = dVar36 + dVar30;
      _CGRectGetHeight(dVar31,dVar32,dVar33,dVar34);
      dVar31 = dVar31 - dVar36;
      objc_stub::setFrame_
                (local_d8,dVar29 + (dVar35 + (dVar28 - dVar36)) * (double)lVar5,dVar30,dVar31,dVar31
                );
      bVar26 = 3;
LAB_100224b18:
      _swift_release(pMVar9);
      puVar15 = puVar17;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar16 = puVar17;
      if (((ulong)puVar15 & 1) == 0) {
        puVar16 = (undefined *)0x0;
        FUN_100200c94(0,*(long *)(puVar17 + 0x10) + 1,1,puVar17);
      }
      uVar13 = *(ulong *)(puVar16 + 0x10);
      puVar17 = puVar16;
      if (*(ulong *)(puVar16 + 0x18) >> 1 <= uVar13) {
        puVar17 = (undefined *)(ulong)(1 < *(ulong *)(puVar16 + 0x18));
        FUN_100200c94(puVar17,uVar13 + 1,1,puVar16);
      }
      *(ulong *)(puVar17 + 0x10) = uVar13 + 1;
      puVar17[uVar13 * 0x20 + 0x20] = bVar26;
      *(long *)(puVar17 + uVar13 * 0x20 + 0x28) = lVar5;
      *(__uint64 *)(puVar17 + uVar13 * 0x20 + 0x30) = _Var27;
      *(ID *)(puVar17 + uVar13 * 0x20 + 0x38) = local_d8;
    } while (uVar24 != uVar20);
  }
LAB_10022469c:
  _swift_bridgeObjectRelease(lVar6);
  _swift_bridgeObjectRelease(param_7);
  puVar15 = PTR___swiftEmptyArrayStorage_100eae0d8;
  uVar20 = *(ulong *)(puVar17 + 0x10);
  if (uVar20 != 0) {
    uVar24 = 0;
    do {
      puVar10 = (undefined8 *)(puVar17 + uVar24 * 0x20 + 0x38);
      uVar13 = uVar24;
      while( true ) {
        if (*(ulong *)(puVar17 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100224dec);
          (*pcVar4)();
        }
        cVar3 = *(char *)(puVar10 + -3);
        uVar1 = puVar10[-2];
        uVar2 = puVar10[-1];
        pMVar8 = (MainActor *)*puVar10;
        pMVar9 = Swift::MainActor::typeMetadataAccessor();
        pMVar9 = Swift::MainActor::get_shared(pMVar9,pMVar8);
        puVar14 = &DAT_100fb6f30;
        FUN_100003a00(&DAT_100fb6f30,PTR_typeMetadataAccessor_100eaec10,
                      PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
        UVar11 = Swift::Actor::get_unownedExecutor();
        UVar12 = UVar11;
        _swift_task_isCurrentExecutor();
        if (((ulong)UVar12.unknown & 1) == 0) {
          _swift_task_reportUnexpectedExecutor
                    ("PasteUI/CollectionView.CellTransitionManager.swift",0x32,1,0x47,UVar11.unknown
                     ,puVar14);
        }
        _swift_release(pMVar9);
        if (cVar3 != '\x01') break;
        uVar13 = uVar13 + 1;
        puVar10 = puVar10 + 4;
        if (uVar20 == uVar13) goto LAB_100224bb4;
      }
      puVar16 = puVar15;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((ulong)puVar16 & 1) == 0) {
        FUN_10022ff38(0,*(long *)(puVar15 + 0x10) + 1,1);
      }
      uVar22 = *(ulong *)(puVar15 + 0x10);
      if (*(ulong *)(puVar15 + 0x18) >> 1 <= uVar22) {
        FUN_10022ff38(1 < *(ulong *)(puVar15 + 0x18),uVar22 + 1,1);
      }
      *(ulong *)(puVar15 + 0x10) = uVar22 + 1;
      puVar15[uVar22 * 0x20 + 0x20] = cVar3;
      uVar24 = uVar13 + 1;
      *(undefined8 *)(puVar15 + uVar22 * 0x20 + 0x28) = uVar1;
      *(undefined8 *)(puVar15 + uVar22 * 0x20 + 0x30) = uVar2;
      *(MainActor **)(puVar15 + uVar22 * 0x20 + 0x38) = pMVar8;
    } while (uVar20 - 1 != uVar13);
  }
LAB_100224bb4:
  puVar17 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1001f3884();
  uVar20 = *(ulong *)(puVar15 + 0x10);
  if (uVar20 != 0) {
    uVar24 = 0;
    puVar10 = (undefined8 *)(puVar15 + 0x38);
    do {
      if (*(ulong *)(puVar15 + 0x10) <= uVar24) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100224df0);
        (*pcVar4)();
      }
      uVar13 = puVar10[-1];
      pMVar9 = (MainActor *)*puVar10;
      pMVar8 = Swift::MainActor::typeMetadataAccessor();
      pMVar8 = Swift::MainActor::get_shared(pMVar8,pMVar9);
      puVar14 = &DAT_100fb6f30;
      FUN_100003a00(&DAT_100fb6f30,PTR_typeMetadataAccessor_100eaec10,
                    PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
      UVar11 = Swift::Actor::get_unownedExecutor();
      UVar12 = UVar11;
      puVar18 = puVar14;
      _swift_task_isCurrentExecutor();
      if (((ulong)UVar12.unknown & 1) == 0) {
        puVar18 = (undefined8 *)0x0;
        _swift_task_reportUnexpectedExecutor
                  ("PasteUI/CollectionView.CellTransitionManager.swift",0x32,1,0x48,UVar11.unknown,
                   puVar14);
      }
      puVar16 = puVar17;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar25 = (uint)puVar16;
      uVar22 = uVar13;
      FUN_100071340();
      uVar23 = (ulong)~(uint)puVar18 & 1;
      if (SCARRY8(*(long *)(puVar17 + 0x10),uVar23)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100224df4);
        (*pcVar4)();
      }
      if (*(long *)(puVar17 + 0x18) < (long)(*(long *)(puVar17 + 0x10) + uVar23)) {
        FUN_100203d3c();
        uVar22 = uVar13;
        FUN_100071340();
        if (((uint)puVar18 & 1) != (uVar25 & 1)) {
          Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100224e0c);
          (*pcVar4)();
        }
joined_r0x000100224d9c:
        if (((ulong)puVar18 & 1) != 0) goto LAB_100224be0;
LAB_100224d40:
        *(ulong *)(puVar17 + (uVar22 >> 6) * 8 + 0x40) =
             *(ulong *)(puVar17 + (uVar22 >> 6) * 8 + 0x40) | 1L << (uVar22 & 0x3f);
        *(ulong *)(*(long *)(puVar17 + 0x30) + uVar22 * 8) = uVar13;
        *(MainActor **)(*(long *)(puVar17 + 0x38) + uVar22 * 8) = pMVar9;
        if (SCARRY8(*(long *)(puVar17 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100224dfc);
          (*pcVar4)();
        }
        *(long *)(puVar17 + 0x10) = *(long *)(puVar17 + 0x10) + 1;
        _swift_release(pMVar8);
      }
      else {
        if (((ulong)puVar16 & 1) == 0) {
          FUN_1001f5dc0();
          goto joined_r0x000100224d9c;
        }
        if (((ulong)puVar18 & 1) == 0) goto LAB_100224d40;
LAB_100224be0:
        *(MainActor **)(*(long *)(puVar17 + 0x38) + uVar22 * 8) = pMVar9;
        _swift_release(pMVar8);
      }
      uVar24 = uVar24 + 1;
      puVar10 = puVar10 + 4;
    } while (uVar20 != uVar24);
  }
  _swift_release();
  return local_dc;
}



/* Address: 0x100224e0c | FUN_100224e0c */

undefined * FUN_100224e0c(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  char cVar3;
  MainActor *pMVar4;
  MainActor *pMVar5;
  undefined8 *puVar6;
  UnownedSerialExecutor UVar7;
  UnownedSerialExecutor UVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  uint uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  Hasher HVar16;
  char *pcVar17;
  ulong uVar18;
  long lVar19;
  undefined *puVar20;
  undefined *puVar21;
  ulong uVar22;
  long lVar23;
  undefined8 uVar24;
  long lVar25;
  undefined *local_88;
  
  lVar23 = *(long *)(param_1 + 0x10);
  if (lVar23 == 0) {
    local_88 = PTR___swiftEmptyArrayStorage_100eae0d8;
    puVar13 = param_2;
  }
  else {
    pMVar4 = Swift::MainActor::typeMetadataAccessor();
    puVar10 = PTR___swiftEmptyArrayStorage_100eae0d8;
    lVar25 = 0;
    local_88 = PTR___swiftEmptyArrayStorage_100eae0d8;
    pMVar5 = pMVar4;
    do {
      pcVar17 = (char *)(param_1 + 0x20 + lVar25 * 0x18);
      cVar3 = *pcVar17;
      uVar24 = *(undefined8 *)(pcVar17 + 8);
      puVar14 = *(undefined8 **)(pcVar17 + 0x10);
      pMVar5 = Swift::MainActor::get_shared(pMVar4,pMVar5);
      puVar6 = &DAT_100fb6f30;
      HVar16.unknown = PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18;
      FUN_100003a00(&DAT_100fb6f30,PTR_typeMetadataAccessor_100eaec10);
      UVar7 = Swift::Actor::get_unownedExecutor();
      UVar8 = UVar7;
      puVar13 = puVar6;
      _swift_task_isCurrentExecutor();
      if (((ulong)UVar8.unknown & 1) == 0) {
        puVar13 = (undefined8 *)0x32;
        HVar16.unknown = &DAT_00000001;
        _swift_task_reportUnexpectedExecutor
                  ("PasteUI/CollectionView.CellTransitionManager.swift",0x32,1,0x62,UVar7.unknown,
                   puVar6);
      }
      if (param_2[2] != 0) {
        puVar13 = puVar14;
        uVar9 = Swift::Hasher::_hash(param_2[5],(__uint64)puVar14,HVar16);
        uVar18 = -1L << ((ulong)*(byte *)(param_2 + 4) & 0x3f);
        uVar9 = uVar9 & (uVar18 ^ 0xffffffffffffffff);
        if (((ulong)param_2[(uVar9 >> 6) + 7] >> (uVar9 & 0x3f) & 1) != 0) {
          do {
            if (*(undefined8 **)(param_2[6] + uVar9 * 8) == puVar14) {
              _swift_release();
              if (cVar3 != '\x01') {
                pMVar5 = (MainActor *)puVar10;
                _swift_isUniquelyReferenced_nonNull_native();
                if (((ulong)pMVar5 & 1) == 0) {
                  puVar13 = (undefined8 *)(*(long *)(puVar10 + 0x10) + 1);
                  pMVar5 = (MainActor *)0x0;
                  FUN_10022ff00(0,puVar13,1);
                }
                uVar9 = *(ulong *)(puVar10 + 0x10);
                puVar6 = (undefined8 *)(uVar9 + 1);
                if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar9) {
                  pMVar5 = (MainActor *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
                  puVar13 = puVar6;
                  FUN_10022ff00(pMVar5,puVar6,1);
                }
                *(undefined8 **)(puVar10 + 0x10) = puVar6;
                puVar10[uVar9 * 0x18 + 0x20] = cVar3;
                *(undefined8 *)(puVar10 + uVar9 * 0x18 + 0x28) = uVar24;
                *(undefined8 **)(puVar10 + uVar9 * 0x18 + 0x30) = puVar14;
              }
              goto LAB_100224e78;
            }
            uVar9 = uVar9 + 1 & ~uVar18;
          } while (((ulong)param_2[(uVar9 >> 6) + 7] >> (uVar9 & 0x3f) & 1) != 0);
        }
      }
      _swift_release();
LAB_100224e78:
      lVar25 = lVar25 + 1;
    } while (lVar25 != lVar23);
  }
  puVar10 = PTR___swiftEmptyArrayStorage_100eae0d8;
  uVar12 = (uint)puVar13;
  lVar25 = *(long *)(local_88 + 0x10);
  if (lVar25 != 0) {
    pMVar4 = Swift::MainActor::typeMetadataAccessor();
    puVar13 = (undefined8 *)(local_88 + 0x30);
    pMVar5 = pMVar4;
    do {
      cVar3 = *(char *)(puVar13 + -2);
      uVar24 = puVar13[-1];
      uVar2 = *puVar13;
      pMVar5 = Swift::MainActor::get_shared(pMVar4,pMVar5);
      puVar6 = &DAT_100fb6f30;
      FUN_100003a00(&DAT_100fb6f30,PTR_typeMetadataAccessor_100eaec10,
                    PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
      UVar7 = Swift::Actor::get_unownedExecutor();
      UVar8 = UVar7;
      puVar14 = puVar6;
      _swift_task_isCurrentExecutor();
      uVar12 = (uint)puVar14;
      if (((ulong)UVar8.unknown & 1) == 0) {
        uVar12 = 0x32;
        _swift_task_reportUnexpectedExecutor
                  ("PasteUI/CollectionView.CellTransitionManager.swift",0x32,1,100,UVar7.unknown,
                   puVar6);
      }
      _swift_release();
      if (cVar3 != '\x02') {
        pMVar5 = (MainActor *)puVar10;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((ulong)pMVar5 & 1) == 0) {
          lVar19 = *(long *)(puVar10 + 0x10) + 1;
          pMVar5 = (MainActor *)0x0;
          FUN_10022ff00(0,lVar19,1);
          uVar12 = (uint)lVar19;
        }
        uVar9 = *(ulong *)(puVar10 + 0x10);
        lVar19 = uVar9 + 1;
        if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar9) {
          pMVar5 = (MainActor *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
          lVar15 = lVar19;
          FUN_10022ff00(pMVar5,lVar19,1);
          uVar12 = (uint)lVar15;
        }
        *(long *)(puVar10 + 0x10) = lVar19;
        puVar10[uVar9 * 0x18 + 0x20] = cVar3;
        *(undefined8 *)(puVar10 + uVar9 * 0x18 + 0x28) = uVar24;
        *(undefined8 *)(puVar10 + uVar9 * 0x18 + 0x30) = uVar2;
      }
      puVar13 = puVar13 + 3;
      lVar25 = lVar25 + -1;
    } while (lVar25 != 0);
  }
  puVar20 = PTR___swiftEmptyArrayStorage_100eae0d8;
  uVar9 = *(ulong *)(puVar10 + 0x10);
  if (uVar9 == 0) {
    _swift_release(puVar10);
    puVar20 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    uVar18 = uVar9;
    FUN_10022ff1c(0,uVar9,0);
    lVar25 = 0x30;
    uVar22 = *(ulong *)(puVar20 + 0x10);
    do {
      uVar24 = *(undefined8 *)(puVar10 + lVar25);
      uVar1 = uVar22 + 1;
      if (*(ulong *)(puVar20 + 0x18) >> 1 <= uVar22) {
        uVar18 = uVar1;
        FUN_10022ff1c(1 < *(ulong *)(puVar20 + 0x18),uVar1,1);
      }
      uVar12 = (uint)uVar18;
      *(ulong *)(puVar20 + 0x10) = uVar1;
      *(undefined8 *)(puVar20 + uVar22 * 8 + 0x20) = uVar24;
      lVar25 = lVar25 + 0x18;
      uVar9 = uVar9 - 1;
      uVar22 = uVar1;
    } while (uVar9 != 0);
    _swift_release(puVar10);
  }
  puVar10 = puVar20;
  FUN_10022f584();
  _swift_bridgeObjectRelease(puVar20);
  lVar25 = *(long *)(local_88 + 0x10);
  if (lVar25 == 0) {
    _swift_release(local_88);
    puVar20 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    FUN_10022ff1c(0,lVar25,0);
    lVar19 = 0x30;
    uVar9 = *(ulong *)(puVar20 + 0x10);
    do {
      uVar24 = *(undefined8 *)(local_88 + lVar19);
      uVar18 = uVar9 + 1;
      if (*(ulong *)(puVar20 + 0x18) >> 1 <= uVar9) {
        FUN_10022ff1c(1 < *(ulong *)(puVar20 + 0x18),uVar18,1);
      }
      *(ulong *)(puVar20 + 0x10) = uVar18;
      *(undefined8 *)(puVar20 + uVar9 * 8 + 0x20) = uVar24;
      lVar19 = lVar19 + 0x18;
      lVar25 = lVar25 + -1;
      uVar9 = uVar18;
    } while (lVar25 != 0);
    _swift_release(local_88);
  }
  _swift_bridgeObjectRetain(param_2);
  puVar11 = puVar20;
  FUN_100222894(puVar20,param_2);
  _swift_bridgeObjectRelease(puVar20);
  puVar20 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (lVar23 != 0) {
    pMVar4 = Swift::MainActor::typeMetadataAccessor();
    puVar13 = (undefined8 *)(param_1 + 0x30);
    pMVar5 = pMVar4;
    do {
      cVar3 = *(char *)(puVar13 + -2);
      uVar24 = puVar13[-1];
      uVar2 = *puVar13;
      pMVar5 = Swift::MainActor::get_shared(pMVar4,pMVar5);
      puVar6 = &DAT_100fb6f30;
      FUN_100003a00(&DAT_100fb6f30,PTR_typeMetadataAccessor_100eaec10,
                    PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
      UVar7 = Swift::Actor::get_unownedExecutor();
      UVar8 = UVar7;
      _swift_task_isCurrentExecutor();
      if (((ulong)UVar8.unknown & 1) == 0) {
        _swift_task_reportUnexpectedExecutor
                  ("PasteUI/CollectionView.CellTransitionManager.swift",0x32,1,0x66,UVar7.unknown,
                   puVar6);
      }
      _swift_release();
      if (cVar3 == '\x01') {
        pMVar5 = (MainActor *)puVar20;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((ulong)pMVar5 & 1) == 0) {
          pMVar5 = (MainActor *)0x0;
          FUN_10022ff00(0,*(long *)(puVar20 + 0x10) + 1,1);
        }
        uVar9 = *(ulong *)(puVar20 + 0x10);
        if (*(ulong *)(puVar20 + 0x18) >> 1 <= uVar9) {
          pMVar5 = (MainActor *)(ulong)(1 < *(ulong *)(puVar20 + 0x18));
          FUN_10022ff00(pMVar5,uVar9 + 1,1);
        }
        *(ulong *)(puVar20 + 0x10) = uVar9 + 1;
        puVar20[uVar9 * 0x18 + 0x20] = 1;
        *(undefined8 *)(puVar20 + uVar9 * 0x18 + 0x28) = uVar24;
        *(undefined8 *)(puVar20 + uVar9 * 0x18 + 0x30) = uVar2;
      }
      puVar13 = puVar13 + 3;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
  }
  puVar21 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar23 = *(long *)(puVar20 + 0x10);
  if (lVar23 == 0) {
    _swift_release(puVar20);
    puVar21 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    FUN_10022ff1c(0,lVar23,0);
    lVar25 = 0x28;
    uVar9 = *(ulong *)(puVar21 + 0x10);
    do {
      uVar24 = *(undefined8 *)(puVar20 + lVar25);
      uVar18 = uVar9 + 1;
      if (*(ulong *)(puVar21 + 0x18) >> 1 <= uVar9) {
        FUN_10022ff1c(1 < *(ulong *)(puVar21 + 0x18),uVar18,1);
      }
      *(ulong *)(puVar21 + 0x10) = uVar18;
      *(undefined8 *)(puVar21 + uVar9 * 8 + 0x20) = uVar24;
      lVar25 = lVar25 + 0x18;
      lVar23 = lVar23 + -1;
      uVar9 = uVar18;
    } while (lVar23 != 0);
    _swift_release(puVar20);
  }
  puVar20 = (undefined *)0x0;
  if ((uVar12 & 0xff) != 1) {
    puVar20 = puVar10;
  }
  _swift_bridgeObjectRetain(puVar21);
  puVar10 = puVar11;
  FUN_10023286c(puVar11,puVar20,puVar21);
  _swift_release(puVar11);
  _swift_bridgeObjectRelease_n(puVar21,2);
  return puVar10;
}



/* Address: 0x100225504 | FUN_100225504 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long FUN_100225504(long param_1)

{
  ID IVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ID self;
  long lVar7;
  ID *pIVar8;
  double dVar9;
  undefined8 uVar10;
  double dVar11;
  ID IVar12;
  double dVar13;
  double local_d0;
  double dStack_c8;
  double local_c0;
  double local_b0;
  double dStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 != 0) {
    pIVar8 = (ID *)(param_1 + 0x38);
    do {
      IVar1 = pIVar8[-3];
      self = *pIVar8;
      IVar12 = pIVar8[-1];
      FUN_10022b4f8(&local_d0);
      uVar6 = local_90;
      uVar5 = uStack_98;
      uVar10 = local_a0;
      dVar11 = dStack_a8;
      dVar4 = local_b0;
      dVar3 = local_c0;
      dVar2 = dStack_c8;
      dVar13 = local_d0;
      dVar9 = dStack_a8;
      _CGRectGetHeight(dStack_a8,local_a0,uStack_98,local_90);
      dVar13 = dVar13 + dVar3;
      _CGRectGetHeight(dVar11,uVar10,uVar5,uVar6);
      dVar11 = dVar11 - dVar13;
      objc_stub::setFrame_
                (self,dVar2 + (dVar4 + (dVar9 - dVar13)) * (double)(long)IVar12,dVar3,dVar11,dVar11)
      ;
      uVar10 = 0;
      if ((char)IVar1 != '\x01') {
        uVar10 = 0x3ff0000000000000;
      }
      objc_stub::setAlphaValue_(self,uVar10);
      param_1 = 0;
      pIVar8 = pIVar8 + 4;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return param_1;
}



/* Address: 0x100225620 | FUN_100225620 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100225620(long param_1,DispatchQoS param_2)

{
  DispatchWorkItemFlags DVar1;
  ID IVar2;
  OS_dispatch_queue *pOVar3;
  undefined *puVar4;
  void *aBlock;
  undefined *puVar5;
  undefined *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  ID self;
  long lVar7;
  long lVar8;
  DispatchWorkItemFlags qos;
  ID *pIVar9;
  long local_b0;
  undefined *puStack_a8;
  long local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  DVar1 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_a0 = *(long *)(DVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_a0 + 0x40));
  lVar7 = (long)&local_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puStack_a8 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_b0 = *(long *)(puStack_a8 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_b0 + 0x40));
  qos.unknown = (undefined *)(lVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  lVar8 = *(long *)(param_1 + 0x10);
  if (lVar8 != 0) {
    pIVar9 = (ID *)(param_1 + 0x38);
    do {
      self = *pIVar9;
      IVar2 = self;
      _swift_getObjectType();
      _swift_conformsToProtocol2();
      if (IVar2 == 0 || self == 0) {
        return;
      }
      if ((char)pIVar9[-3] == '\x01') {
        FUN_100221b40(self,IVar2);
        objc_stub::removeFromSuperview(self);
      }
      lVar8 = lVar8 + -1;
      pIVar9 = pIVar9 + 4;
    } while (lVar8 != 0);
  }
  pOVar3 = (OS_dispatch_queue *)0x0;
  FUN_10000ec2c(0,&DAT_100fb7600,&PTR__OBJC_CLASS___OS_dispatch_queue_100f8d6e8);
  (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar3);
  puVar4 = &DAT_100ec2938;
  _swift_allocObject(&DAT_100ec2938,0x18,7);
  *(undefined **)(puVar4 + 0x10) = param_2.unknown;
  local_70 = FUN_100225b18;
  local_90 = PTR___NSConcreteStackBlock_100ea82a0;
  local_88 = 0x42000000;
  local_80 = FUN_100030410;
  puStack_78 = &DAT_100ec2950;
  local_68 = puVar4;
  aBlock = __Block_copy(&local_90);
  Dispatch::DispatchQoS::get_unspecified(param_2);
  local_98 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar4 = &DAT_100fb7588;
  FUN_100003a00(&DAT_100fb7588,PTR_typeMetadataAccessor_100eae670,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_100eae680);
  puVar5 = &DAT_100fb7610;
  FUN_1000037f0(&DAT_100fb7610,&DAT_100c36c38);
  puVar6 = puVar5;
  FUN_100225b20();
  Swift::SetAlgebra::_init(lVar7,&local_98,puVar5,puVar6,DVar1.unknown,puVar4);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
  __Block_release(aBlock);
  (**(code **)(local_a0 + 8))(lVar7,DVar1.unknown);
  (**(code **)(local_b0 + 8))(qos.unknown,puStack_a8);
  _swift_release(local_68);
  return;
}



/* Address: 0x1002258ac | FUN_1002258ac */

undefined8
FUN_1002258ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  MainActor *this;
  MainActor *pMVar4;
  undefined8 *puVar5;
  UnownedSerialExecutor UVar6;
  UnownedSerialExecutor UVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar9 = *(long *)(param_1 + 0x10);
  if (lVar9 != 0) {
    FUN_10022ff00(0,lVar9,0);
    this = Swift::MainActor::typeMetadataAccessor();
    puVar3 = PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18;
    pMVar4 = this;
    puVar8 = (undefined8 *)(param_1 + 0x20);
    do {
      uVar10 = *puVar8;
      pMVar4 = Swift::MainActor::get_shared(this,pMVar4);
      puVar5 = &DAT_100fb6f30;
      FUN_100003a00(&DAT_100fb6f30,PTR_typeMetadataAccessor_100eaec10,puVar3);
      UVar6 = Swift::Actor::get_unownedExecutor();
      UVar7 = UVar6;
      _swift_task_isCurrentExecutor();
      if (((ulong)UVar7.unknown & 1) == 0) {
        _swift_task_reportUnexpectedExecutor
                  ("PasteUI/CollectionView+Changeset.swift",0x26,1,0x66,UVar6.unknown,puVar5);
      }
      _swift_release();
      uVar1 = *(ulong *)(puVar2 + 0x10);
      if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar1) {
        pMVar4 = (MainActor *)(ulong)(1 < *(ulong *)(puVar2 + 0x18));
        FUN_10022ff00(pMVar4,uVar1 + 1,1);
      }
      *(ulong *)(puVar2 + 0x10) = uVar1 + 1;
      puVar2[uVar1 * 0x18 + 0x20] = 0;
      *(undefined8 *)(puVar2 + uVar1 * 0x18 + 0x28) = uVar10;
      *(undefined8 *)(puVar2 + uVar1 * 0x18 + 0x30) = uVar10;
      lVar9 = lVar9 + -1;
      puVar8 = puVar8 + 1;
    } while (lVar9 != 0);
  }
  FUN_1001b2a0c(param_2,param_3,param_4,param_5,puVar2);
  _swift_bridgeObjectRelease(puVar2);
  return param_2;
}



/* Address: 0x100225a2c | FUN_100225a2c */

void FUN_100225a2c(void)

{
  long unaff_x20;
  
  FUN_100225504(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x100225a38 | FUN_100225a38 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100225a38(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x100225a6c | FUN_100225a6c */

void FUN_100225a6c(void)

{
  long unaff_x20;
  
  FUN_100225620(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x100225a78 | FUN_100225a78 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100225a78(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x100225a9c | FUN_100225a9c */

void FUN_100225a9c(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x100225aac | FUN_100225aac */

void FUN_100225aac(long param_1,long param_2)

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



/* Address: 0x100225ac0 | FUN_100225ac0 */

void FUN_100225ac0(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x100225ac8 | FUN_100225ac8 */

void FUN_100225ac8(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  }
  _swift_deallocObject();
  return;
}



/* Address: 0x100225af4 | FUN_100225af4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100225af4(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x100225b18 | FUN_100225b18 */

void FUN_100225b18(void)

{
  long unaff_x20;
  
  FUN_10022417c(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100225b20 | FUN_100225b20 */

void FUN_100225b20(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fb7590 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb7610;
  FUN_100005c24(&DAT_100fb7610,&DAT_100c36c38);
  puVar2 = PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530;
  _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530,puVar1);
  DAT_100fb7590 = puVar2;
  return;
}



/* Address: 0x100225b70 | thunk_FUN_100225aac */

void thunk_FUN_100225aac(long param_1,long param_2)

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



/* Address: 0x100225b74 | thunk_FUN_100225aac */

void thunk_FUN_100225aac(long param_1,long param_2)

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



/* Address: 0x100225b78 | thunk_FUN_100225ac0 */

void thunk_FUN_100225ac0(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x100225b7c | thunk_FUN_100225ac0 */

void thunk_FUN_100225ac0(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x100225b80 | FUN_100225b80 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100225b80(ID param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  NSArray *pNVar4;
  ID IVar5;
  ID IVar6;
  ID unaff_x20;
  long lVar7;
  undefined8 uVar8;
  undefined1 auStack_68 [24];
  
  lVar2 = unaff_x20 + _TtC7PasteUI14CollectionView::delegate;
  _swift_beginAccess(lVar2,auStack_68,0,0);
  lVar1 = lVar2;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    lVar7 = *(long *)(lVar2 + 8);
    lVar2 = lVar1;
    _swift_getObjectType();
    FUN_10022b1cc();
    IVar5 = unaff_x20;
    (**(code **)(lVar7 + 0x10))();
    _swift_bridgeObjectRelease(lVar2);
    uVar8 = *(undefined8 *)
             (unaff_x20 + _TtC7PasteUI14CollectionView::___lazy_storage___cellSelectionManager);
    uVar3 = uVar8;
    _swift_bridgeObjectRetain(uVar8);
    FUN_10022756c();
    _swift_bridgeObjectRelease(IVar5);
    _swift_bridgeObjectRelease(uVar8);
    FUN_10000ec2c(0,&DAT_100fb7a70,&PTR__OBJC_CLASS___NSDraggingItem_100f8da60);
    pNVar4 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(uVar3);
    IVar5 = objc_stub::beginDraggingSessionWithItems_event_source_(unaff_x20,pNVar4,param_1);
    IVar6 = objc_stub::modifierFlags(param_1);
    uVar3 = 2;
    if ((IVar6 & 0x40000) != 0) {
      uVar3 = 4;
    }
    objc_stub::setDraggingFormation_(IVar5,uVar3);
    _swift_unknownObjectRelease(lVar1);
  }
  return;
}



/* Address: 0x100225cfc | FUN_100225cfc */

undefined8 FUN_100225cfc(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0x10;
  if (param_2 == 0) {
    uVar1 = 1;
  }
  return uVar1;
}



/* Address: 0x100225d0c | _TtC7PasteUI14CollectionView::draggingSession:sourceOperationMaskForDraggingContext: */

/* Function Stack Size: 0x20 bytes */

unsigned_long_long
_TtC7PasteUI14CollectionView::draggingSession_sourceOperationMaskForDraggingContext_
          (ID param_1,SEL param_2,ID param_3,long_long param_4)

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
              ("PasteUI/CollectionView+Dragging.swift",0x25,1,0x11,UVar5.unknown,puVar4);
  }
  _swift_release(pMVar3);
  uVar1 = 0x10;
  if (param_4 == 0) {
    uVar1 = 1;
  }
  return uVar1;
}



/* Address: 0x100225db8 | FUN_100225db8 */

void FUN_100225db8(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _TtC7PasteUI14CollectionView::draggingSession;
  _swift_beginAccess(unaff_x20 + _TtC7PasteUI14CollectionView::draggingSession,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar1,param_1);
  return;
}



/* Address: 0x100225e10 | _TtC7PasteUI14CollectionView::draggingSession:willBeginAtPoint: */

/* Function Stack Size: 0x28 bytes */

void _TtC7PasteUI14CollectionView::draggingSession_willBeginAtPoint_
               (ID param_1,SEL param_2,ID param_3,CGPoint param_4)

{
  undefined *puVar1;
  long lVar2;
  MainActor *pMVar3;
  undefined8 *puVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  undefined1 auStack_58 [24];
  
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
              ("PasteUI/CollectionView+Dragging.swift",0x25,1,0x19,UVar5.unknown,puVar4);
  }
  lVar2 = draggingSession;
  _swift_beginAccess(param_1 + draggingSession,auStack_58,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar2,param_3);
  _swift_release(pMVar3);
  return;
}



/* Address: 0x100225ef0 | FUN_100225ef0 */

void FUN_100225ef0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar2 = unaff_x20 + _TtC7PasteUI14CollectionView::delegate;
  _swift_beginAccess(lVar2,auStack_58,0,0);
  lVar1 = lVar2;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar2 + 8);
    _swift_getObjectType();
    (**(code **)(lVar2 + 0x30))(param_1,param_2);
    _swift_unknownObjectRelease(lVar1);
  }
  return;
}



/* Address: 0x100225f8c | _TtC7PasteUI14CollectionView::draggingSession:movedToPoint: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x28 bytes */

void _TtC7PasteUI14CollectionView::draggingSession_movedToPoint_
               (ID param_1,SEL param_2,ID param_3,CGPoint param_4)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_68 [24];
  
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
              ("PasteUI/CollectionView+Dragging.swift",0x25,1,0x1d,UVar4.unknown,puVar3);
  }
  lVar7 = param_1 + delegate;
  _swift_beginAccess(lVar7,auStack_68,0,0);
  lVar6 = lVar7;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar6 == 0) {
    _swift_release(pMVar2);
  }
  else {
    lVar8 = *(long *)(lVar7 + 8);
    lVar7 = lVar6;
    _swift_getObjectType();
    (**(code **)(lVar8 + 0x30))(param_1,lVar7,lVar8);
    _swift_release(pMVar2);
    _swift_unknownObjectRelease(lVar6);
  }
  return;
}


