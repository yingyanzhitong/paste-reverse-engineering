/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10022a240 | FUN_10022a240 */

void FUN_10022a240(void)

{
  FUN_10022a2dc();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"dealloc");
  return;
}



/* Address: 0x10022a270 | _TtCC7PasteUI14CollectionView10ScrollView::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtCC7PasteUI14CollectionView10ScrollView::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_release(*(undefined8 *)(param_1 + onScroll + 8));
  _swift_release(*(undefined8 *)(param_1 + scrollAnimator));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + cancellables));
  return;
}



/* Address: 0x10022a2dc | FUN_10022a2dc */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10022a2dc(void)

{
  return ZEXT816(0x100f96918);
}



/* Address: 0x10022a2fc | FUN_10022a2fc */

void FUN_10022a2fc(void)

{
  long unaff_x20;
  
  _swift_unknownObjectWeakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x10022a320 | FUN_10022a320 */

void FUN_10022a320(void)

{
  FUN_100229b04();
  return;
}



/* Address: 0x10022a328 | FUN_10022a328 */

void FUN_10022a328(void)

{
  FUN_100229c70();
  return;
}



/* Address: 0x10022a330 | FUN_10022a330 */

void FUN_10022a330(void)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined *puVar5;
  long unaff_x20;
  String SVar6;
  
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
  lVar4 = 0;
  FUN_1001f6328();
  _swift_allocObject();
  puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1001f350c();
  *(undefined **)(lVar4 + 0x10) = puVar5;
  *(undefined8 *)(lVar4 + 0x20) = 0;
  *(undefined8 *)(lVar4 + 0x18) = 0;
  *(undefined8 *)(lVar4 + 0x30) = 0;
  *(undefined8 *)(lVar4 + 0x28) = 0;
  *(undefined8 *)(lVar4 + 0x38) = 0;
  *(long *)(unaff_x20 + lVar2) = lVar4;
  *(undefined **)(unaff_x20 + _TtCC7PasteUI14CollectionView10ScrollView::cancellables) =
       PTR___swiftEmptySetSingleton_100eae0e8;
  SVar6.bridgeObject = (void *)0x2;
  SVar6.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar6,(StaticString)0xd000000000000025,0x8000000100d8dc00,
             0xd9ea50);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10022a430);
  (*pcVar3)();
}



/* Address: 0x10022a430 | FUN_10022a430 */

void FUN_10022a430(void)

{
  FUN_10022a054();
  return;
}



/* Address: 0x10022a438 | FUN_10022a438 */

void FUN_10022a438(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1001f6860(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x10022a440 | FUN_10022a440 */

void FUN_10022a440(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x10022a450 | FUN_10022a450 */

void FUN_10022a450(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x10022a474 | FUN_10022a474 */

void FUN_10022a474(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1001f67c0(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x10022a47c | thunk_FUN_10022a450 */

void thunk_FUN_10022a450(void)

{
  FUN_10022a450();
  return;
}



/* Address: 0x10022a480 | FUN_10022a480 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10022a480(void)

{
  code *pcVar1;
  ID self;
  ID unaff_x20;
  double dVar2;
  double dVar3;
  double local_b0;
  double dStack_a8;
  double local_a0;
  double local_90;
  double dStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  
  FUN_10022b4f8(&local_b0);
  if (SBORROW8(local_68,1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10022a5b4);
    (*pcVar1)();
  }
  dVar2 = dStack_88;
  _CGRectGetHeight(dStack_88,local_80,uStack_78,local_70);
  dVar3 = dStack_88;
  _CGRectGetHeight(dStack_88,local_80,uStack_78,local_70);
  dVar3 = dVar3 - (local_b0 + local_a0);
  _CGRectGetMaxX(dStack_a8 + (local_90 + (dVar2 - (local_b0 + local_a0))) * (double)(local_68 + -1),
                 local_a0,dVar3,dVar3);
  _CGRectGetHeight(dStack_88,local_80);
  self = objc_stub::bounds(unaff_x20);
  FUN_100229234();
  objc_stub::frame(self);
  objc_stub::setFrame_(self);
  return 0;
}



/* Address: 0x10022a5b4 | FUN_10022a5b4 */

undefined1  [16] FUN_10022a5b4(long param_1)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  
  uVar6 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar8 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar8 = ~(-1L << (uVar6 & 0x3f));
  }
  uVar8 = uVar8 & *(ulong *)(param_1 + 0x40);
  if (uVar8 == 0) {
    lVar9 = 0;
    uVar6 = uVar6 + 0x3f >> 6;
    lVar10 = 0;
    do {
      if (uVar6 - 1 == lVar10) {
        return ZEXT816(1) << 0x40;
      }
      lVar7 = lVar10 + 1;
      uVar8 = *(ulong *)(param_1 + 0x48 + lVar10 * 8);
      lVar9 = lVar9 + -0x40;
      lVar10 = lVar7;
    } while (uVar8 == 0);
    uVar4 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
    uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
    uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
    uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
    uVar8 = uVar8 - 1 & uVar8;
    lVar9 = LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) - lVar9;
  }
  else {
    lVar7 = 0;
    uVar4 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
    uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
    uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
    uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
    lVar9 = LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20);
    uVar8 = uVar8 - 1 & uVar8;
    uVar6 = uVar6 + 0x3f >> 6;
  }
  uVar4 = *(ulong *)(*(long *)(param_1 + 0x30) + lVar9 * 8);
  uVar1 = uVar4;
  while( true ) {
    while (uVar5 = uVar1, uVar11 = uVar4, uVar8 != 0) {
      uVar4 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
      uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 - 1 & uVar8;
      uVar4 = *(ulong *)(*(long *)(param_1 + 0x30) + LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) * 8 +
                        lVar7 * 0x200);
      uVar1 = uVar4;
      if ((long)uVar11 <= (long)uVar4) {
        uVar4 = uVar11;
        uVar1 = uVar5;
      }
    }
    bVar3 = SCARRY8(lVar7,1);
    lVar7 = lVar7 + 1;
    if (bVar3) break;
    if ((long)uVar6 <= lVar7) {
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar5;
      return auVar12;
    }
    uVar8 = ((ulong *)(param_1 + 0x40))[lVar7];
    uVar4 = uVar11;
    uVar1 = uVar5;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10022a6c4);
  (*pcVar2)();
}



/* Address: 0x10022a6c4 | FUN_10022a6c4 */

void FUN_10022a6c4(void)

{
  FUN_10022a778(&_TtC7PasteUI14CollectionView::dataSource);
  return;
}



/* Address: 0x10022a6d0 | FUN_10022a6d0 */

void FUN_10022a6d0(undefined8 param_1,undefined8 param_2)

{
  FUN_10022a7cc(param_1,param_2,&_TtC7PasteUI14CollectionView::dataSource);
  return;
}



/* Address: 0x10022a6dc | FUN_10022a6dc */

undefined1  [16] FUN_10022a6dc(undefined8 *param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auVar5 [16];
  
  puVar2 = &DAT_00000038;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    puVar2 = _malloc(0x38);
  }
  else {
    _swift_coroFrameAlloc(0x38,0x7f04);
  }
  *param_1 = puVar2;
  lVar1 = _TtC7PasteUI14CollectionView::dataSource;
  *(long *)(puVar2 + 0x28) = unaff_x20;
  *(long *)(puVar2 + 0x30) = lVar1;
  lVar1 = unaff_x20 + lVar1;
  _swift_beginAccess(lVar1,puVar2,0x21,0);
  lVar3 = lVar1;
  _swift_unknownObjectWeakLoadStrong();
  uVar4 = *(undefined8 *)(lVar1 + 8);
  *(long *)(puVar2 + 0x18) = lVar3;
  *(undefined8 *)(puVar2 + 0x20) = uVar4;
  auVar5._8_8_ = puVar2 + 0x18;
  auVar5._0_8_ = thunk_FUN_10022a8bc;
  return auVar5;
}



/* Address: 0x10022a768 | thunk_FUN_10022a8bc */

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



/* Address: 0x10022a76c | FUN_10022a76c */

void FUN_10022a76c(void)

{
  FUN_10022a778(&_TtC7PasteUI14CollectionView::delegate);
  return;
}



/* Address: 0x10022a778 | FUN_10022a778 */

void FUN_10022a778(long *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_1;
  _swift_beginAccess(unaff_x20 + lVar1,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(unaff_x20 + lVar1);
  return;
}



/* Address: 0x10022a7c0 | FUN_10022a7c0 */

void FUN_10022a7c0(undefined8 param_1,undefined8 param_2)

{
  FUN_10022a7cc(param_1,param_2,&_TtC7PasteUI14CollectionView::delegate);
  return;
}



/* Address: 0x10022a7cc | FUN_10022a7cc */

void FUN_10022a7cc(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = unaff_x20 + *param_3;
  _swift_beginAccess(lVar1,auStack_48,1,0);
  *(undefined8 *)(lVar1 + 8) = param_2;
  _swift_unknownObjectWeakAssign(lVar1,param_1);
  _swift_unknownObjectRelease(param_1);
  return;
}



/* Address: 0x10022a830 | FUN_10022a830 */

undefined1  [16] FUN_10022a830(undefined8 *param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auVar5 [16];
  
  puVar2 = &DAT_00000038;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    puVar2 = _malloc(0x38);
  }
  else {
    _swift_coroFrameAlloc(0x38,0x6282);
  }
  *param_1 = puVar2;
  lVar1 = _TtC7PasteUI14CollectionView::delegate;
  *(long *)(puVar2 + 0x28) = unaff_x20;
  *(long *)(puVar2 + 0x30) = lVar1;
  lVar1 = unaff_x20 + lVar1;
  _swift_beginAccess(lVar1,puVar2,0x21,0);
  lVar3 = lVar1;
  _swift_unknownObjectWeakLoadStrong();
  uVar4 = *(undefined8 *)(lVar1 + 8);
  *(long *)(puVar2 + 0x18) = lVar3;
  *(undefined8 *)(puVar2 + 0x20) = uVar4;
  auVar5._8_8_ = puVar2 + 0x18;
  auVar5._0_8_ = thunk_FUN_10022a8bc;
  return auVar5;
}



/* Address: 0x10022a8bc | FUN_10022a8bc */

void FUN_10022a8bc(undefined8 *param_1,ulong param_2)

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



/* Address: 0x10022a930 | thunk_FUN_10022b1cc */

undefined * thunk_FUN_10022b1cc(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar1 = (undefined8 *)
           (unaff_x20 + _TtC7PasteUI14CollectionView::___lazy_storage___cellSelectionManager);
  puVar3 = (undefined *)*puVar1;
  if (puVar3 == (undefined *)0x0) {
    *puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *(undefined1 *)(puVar1 + 3) = 1;
    puVar3 = puVar2;
  }
  _swift_bridgeObjectRetain();
  return puVar3;
}



/* Address: 0x10022a934 | FUN_10022a934 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_10022a934(ID param_1)

{
  long lVar1;
  _ArrayBuffer _Var2;
  MainActor *pMVar3;
  MainActor *pMVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  undefined *puVar7;
  undefined *puVar8;
  NSArray *pNVar9;
  ID unaff_x20;
  ID IVar10;
  undefined1 auStack_78 [24];
  
  objc_stub::removeFromSuperview(param_1);
  lVar1 = _TtC7PasteUI14CollectionView::emptyPlaceholderView;
  _swift_beginAccess(unaff_x20 + _TtC7PasteUI14CollectionView::emptyPlaceholderView,auStack_78,0,0);
  IVar10 = *(ID *)(unaff_x20 + lVar1);
  if (IVar10 != 0) {
    _Var2.unknown = &DAT_100fb7040;
    FUN_1000037f0(&DAT_100fb7040,&DAT_100c34f70);
    _swift_initStackObject();
    *(undefined8 *)(_Var2.unknown + 0x18) = 3;
    *(undefined8 *)(_Var2.unknown + 0x10) = 1;
    *(ID *)(_Var2.unknown + 0x20) = IVar10;
    if (((ulong)_Var2.unknown & 0xc000000000000001) != 0) {
      IVar10 = 0;
      Swift::_ArrayBuffer::__getElementSlowPath(0,_Var2);
    }
    pMVar3 = Swift::MainActor::typeMetadataAccessor();
    pMVar4 = Swift::MainActor::get_shared(pMVar3,pMVar3);
    pMVar3 = pMVar4;
    FUN_1001f7290();
    UVar5 = Swift::Actor::get_unownedExecutor();
    UVar6 = UVar5;
    _swift_task_isCurrentExecutor();
    if (((ulong)UVar6.unknown & 1) == 0) {
      _swift_task_reportUnexpectedExecutor
                ("PasteUI/NSView+LayoutBuilder.swift",0x22,1,0x15,UVar5.unknown,pMVar3);
    }
    objc_stub::addSubview_(unaff_x20,IVar10);
    objc_stub::setTranslatesAutoresizingMaskIntoConstraints_(IVar10,0);
    _swift_release(pMVar4);
    if (DAT_100fb6230 != -1) {
      _swift_once(&DAT_100fb6230,FUN_1001f9ff4);
    }
    IVar10 = unaff_x20;
    thunk_FUN_100211c08(DAT_101057750,DAT_101057758,DAT_101057760,DAT_101057768);
    puVar7 = &DAT_100fb7ad0;
    FUN_1000037f0(&DAT_100fb7ad0,&DAT_100c36620);
    _swift_initStackObject();
    *(undefined8 *)(puVar7 + 0x18) = 2;
    *(undefined8 *)(puVar7 + 0x10) = 1;
    puVar8 = &DAT_100fb7050;
    FUN_1000037f0(&DAT_100fb7050,&DAT_100c366b0);
    *(undefined **)(puVar7 + 0x38) = puVar8;
    *(undefined ***)(puVar7 + 0x40) = &PTR_PTR_100ec00b8;
    *(ID *)(puVar7 + 0x20) = IVar10;
    puVar8 = puVar7;
    thunk_FUN_1001f9238(puVar7);
    _swift_setDeallocating(puVar7);
    FUN_100004594(puVar7 + 0x20);
    FUN_10000ec2c(0,&DAT_100fb7ae0,&PTR__OBJC_CLASS___NSLayoutConstraint_100f8d660);
    pNVar9 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
    NSLayoutConstraint::activateConstraints_((ID)&_OBJC_CLASS___NSLayoutConstraint,pNVar9);
    _swift_bridgeObjectRelease(puVar8);
    _swift_setDeallocating(_Var2.unknown);
    _swift_arrayDestroy(_Var2.unknown + 0x20,*(undefined8 *)(_Var2.unknown + 0x10),
                        PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8);
    IVar10 = *(ID *)(unaff_x20 + lVar1);
    if (IVar10 != 0) {
      objc_stub::setHidden_
                (IVar10,(ulong)(*(long *)(unaff_x20 + _TtC7PasteUI14CollectionView::cellCount) != 0)
                );
    }
  }
  return;
}



/* Address: 0x10022abf0 | FUN_10022abf0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_10022abf0(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _TtC7PasteUI14CollectionView::emptyPlaceholderView;
  _swift_beginAccess(unaff_x20 + _TtC7PasteUI14CollectionView::emptyPlaceholderView,auStack_38,0,0);
  return *(undefined8 *)(unaff_x20 + lVar1);
}



/* Address: 0x10022ac3c | FUN_10022ac3c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10022ac3c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _TtC7PasteUI14CollectionView::emptyPlaceholderView;
  _swift_beginAccess(unaff_x20 + _TtC7PasteUI14CollectionView::emptyPlaceholderView,auStack_48,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  FUN_10022a934(uVar2);
  return 0;
}



/* Address: 0x10022acb0 | FUN_10022acb0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10022acb0(undefined8 *param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auVar3 [16];
  
  puVar2 = &DAT_00000030;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    puVar2 = _malloc(0x30);
  }
  else {
    _swift_coroFrameAlloc(0x30,0x79cc);
  }
  *param_1 = puVar2;
  lVar1 = _TtC7PasteUI14CollectionView::emptyPlaceholderView;
  *(long *)(puVar2 + 0x20) = unaff_x20;
  *(long *)(puVar2 + 0x28) = lVar1;
  _swift_beginAccess(unaff_x20 + lVar1,puVar2,1,0);
  *(undefined8 *)(puVar2 + 0x18) = *(undefined8 *)(unaff_x20 + lVar1);
  auVar3._8_8_ = puVar2 + 0x18;
  auVar3._0_8_ = FUN_10022ad38;
  return auVar3;
}



/* Address: 0x10022ad38 | FUN_10022ad38 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10022ad38(undefined8 *param_1,ulong param_2)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = (void *)*param_1;
  uVar2 = *(undefined8 *)(*(long *)((long)pvVar1 + 0x20) + *(long *)((long)pvVar1 + 0x28));
  *(undefined8 *)(*(long *)((long)pvVar1 + 0x20) + *(long *)((long)pvVar1 + 0x28)) =
       *(undefined8 *)((long)pvVar1 + 0x18);
  if ((param_2 & 1) == 0) {
    FUN_10022a934(uVar2);
  }
  else {
    FUN_10022a934(uVar2);
  }
  _free(pvVar1);
  return;
}



/* Address: 0x10022add0 | FUN_10022add0 */

undefined1 FUN_10022add0(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _TtC7PasteUI14CollectionView::dimmingMode;
  _swift_beginAccess(unaff_x20 + _TtC7PasteUI14CollectionView::dimmingMode,auStack_38,0,0);
  return *(undefined1 *)(unaff_x20 + lVar1);
}



/* Address: 0x10022ae10 | FUN_10022ae10 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10022ae10(undefined1 param_1)

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
  undefined8 uVar10;
  ulong uVar11;
  long unaff_x20;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar5 = _TtC7PasteUI14CollectionView::dimmingMode;
  _swift_beginAccess(unaff_x20 + _TtC7PasteUI14CollectionView::dimmingMode,auStack_78,1,0);
  *(undefined1 *)(unaff_x20 + lVar5) = param_1;
  lVar12 = _TtC7PasteUI14CollectionView::visibleCells;
  _swift_beginAccess(unaff_x20 + _TtC7PasteUI14CollectionView::visibleCells,auStack_90,0,0);
  lVar6 = _TtC7PasteUI14CollectionView::isFirstResponder;
  lVar12 = *(long *)(unaff_x20 + lVar12);
  uVar11 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
  uVar13 = 0xffffffffffffffff;
  if ((*(byte *)(lVar12 + 0x20) & 0x3f) < 6) {
    uVar13 = ~(-1L << (uVar11 & 0x3f));
  }
  uVar13 = uVar13 & *(ulong *)(lVar12 + 0x40);
  _swift_bridgeObjectRetain(lVar12);
  lVar14 = 0;
  while( true ) {
    for (; uVar13 != 0; uVar13 = uVar13 - 1 & uVar13) {
      cVar3 = *(char *)(unaff_x20 + lVar5);
      if (cVar3 == '\0') {
        bVar9 = *(byte *)(unaff_x20 + lVar6) ^ 1;
      }
      else {
        bVar9 = cVar3 != '\x01';
      }
      uVar4 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
      uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      puVar1 = (undefined8 *)
               (*(long *)(lVar12 + 0x38) + LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) * 0x10 +
               lVar14 * 0x400);
      uVar10 = *puVar1;
      lVar2 = puVar1[1];
      _swift_getObjectType(uVar10);
      (**(code **)(lVar2 + 0x28))(bVar9 & 1,uVar10,lVar2);
    }
    bVar8 = SCARRY8(lVar14,1);
    lVar14 = lVar14 + 1;
    if (bVar8) break;
    if ((long)(uVar11 + 0x3f >> 6) <= lVar14) {
      _swift_release(lVar12);
      return;
    }
    uVar13 = ((ulong *)(lVar12 + 0x40))[lVar14];
  }
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10022afa0);
  (*pcVar7)();
}



/* Address: 0x10022afa0 | FUN_10022afa0 */

undefined1  [16] FUN_10022afa0(undefined8 *param_1)

{
  long lVar1;
  void *pvVar2;
  long unaff_x20;
  undefined1 auVar3 [16];
  
  pvVar2 = (void *)0x28;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    pvVar2 = _malloc(0x28);
  }
  else {
    _swift_coroFrameAlloc(0x28,0xcb6d);
  }
  *param_1 = pvVar2;
  lVar1 = _TtC7PasteUI14CollectionView::dimmingMode;
  *(long *)((long)pvVar2 + 0x18) = unaff_x20;
  *(long *)((long)pvVar2 + 0x20) = lVar1;
  _swift_beginAccess(unaff_x20 + lVar1,pvVar2,0x21,0);
  auVar3._8_8_ = unaff_x20 + lVar1;
  auVar3._0_8_ = FUN_10022b00c;
  return auVar3;
}



/* Address: 0x10022b00c | FUN_10022b00c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10022b00c(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  long lVar3;
  char cVar4;
  long lVar5;
  code *pcVar6;
  bool bVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  void *pvVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  
  pvVar12 = (void *)*param_1;
  _swift_endAccess(pvVar12);
  lVar8 = _TtC7PasteUI14CollectionView::visibleCells;
  if ((param_2 & 1) == 0) {
    lVar13 = *(long *)((long)pvVar12 + 0x18);
    _swift_beginAccess(lVar13 + _TtC7PasteUI14CollectionView::visibleCells,pvVar12,0,0);
    lVar5 = _TtC7PasteUI14CollectionView::isFirstResponder;
    lVar8 = *(long *)(lVar13 + lVar8);
    lVar10 = -1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
    uVar11 = -lVar10;
    uVar15 = 0xffffffffffffffff;
    if (uVar11 < 0x40) {
      uVar15 = ~(-1L << (uVar11 & 0x3f));
    }
    uVar15 = uVar15 & *(ulong *)(lVar8 + 0x40);
    _swift_bridgeObjectRetain();
    lVar14 = 0;
    while( true ) {
      while (uVar15 != 0) {
        uVar11 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
        uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
        uVar15 = uVar15 - 1 & uVar15;
        puVar1 = (undefined8 *)
                 (*(long *)(lVar8 + 0x38) + LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) * 0x10 +
                 lVar14 * 0x400);
        cVar4 = *(char *)(*(long *)((long)pvVar12 + 0x18) + *(long *)((long)pvVar12 + 0x20));
        uVar9 = *puVar1;
        lVar3 = puVar1[1];
        bVar2 = *(byte *)(lVar13 + lVar5) ^ 1;
        if (cVar4 != '\0') {
          bVar2 = cVar4 != '\x01';
        }
        _swift_getObjectType(uVar9);
        (**(code **)(lVar3 + 0x28))(bVar2 & 1,uVar9,lVar3);
      }
      bVar7 = SCARRY8(lVar14,1);
      lVar14 = lVar14 + 1;
      if (bVar7) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10022b18c);
        (*pcVar6)();
      }
      if ((long)(0x3fU - lVar10 >> 6) <= lVar14) break;
      uVar15 = ((ulong *)(lVar8 + 0x40))[lVar14];
    }
    _swift_release(lVar8);
  }
  _free(pvVar12);
  return;
}



/* Address: 0x10022b18c | FUN_10022b18c */

void FUN_10022b18c(void)

{
  undefined1 local_60 [40];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  FUN_10022b4f8(local_60);
  _CGRectGetHeight(local_38,uStack_30,local_28,uStack_20);
  return;
}



/* Address: 0x10022b1cc | FUN_10022b1cc */

undefined * FUN_10022b1cc(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar1 = (undefined8 *)
           (unaff_x20 + _TtC7PasteUI14CollectionView::___lazy_storage___cellSelectionManager);
  puVar3 = (undefined *)*puVar1;
  if (puVar3 == (undefined *)0x0) {
    *puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *(undefined1 *)(puVar1 + 3) = 1;
    puVar3 = puVar2;
  }
  _swift_bridgeObjectRetain();
  return puVar3;
}



/* Address: 0x10022b248 | FUN_10022b248 */

undefined * FUN_10022b248(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  
  lVar1 = _TtC7PasteUI14CollectionView::___lazy_storage___cellTransitionManager;
  puVar2 = *(undefined **)
            (unaff_x20 + _TtC7PasteUI14CollectionView::___lazy_storage___cellTransitionManager);
  puVar5 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar2 = &DAT_100ec2b68;
    puVar3 = puVar2;
    _swift_allocObject(&DAT_100ec2b68,0x18,7);
    _swift_unknownObjectWeakInit(puVar3 + 0x10);
    puVar4 = puVar2;
    _swift_allocObject(&DAT_100ec2b68,0x18,7);
    _swift_unknownObjectWeakInit(puVar4 + 0x10);
    _swift_allocObject(&DAT_100ec2b68,0x18,7);
    _swift_unknownObjectWeakInit(puVar2 + 0x10);
    puVar5 = &DAT_100fb7768;
    FUN_1000037f0(&DAT_100fb7768,&DAT_100c36cc8);
    _swift_allocObject();
    *(code **)(puVar5 + 0x10) = FUN_10022ddd0;
    *(undefined **)(puVar5 + 0x18) = puVar3;
    *(code **)(puVar5 + 0x20) = FUN_10022ddd8;
    *(undefined **)(puVar5 + 0x28) = puVar4;
    *(code **)(puVar5 + 0x30) = FUN_10022dde0;
    *(undefined **)(puVar5 + 0x38) = puVar2;
    uVar6 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar5;
    _swift_retain();
    _swift_release(uVar6);
    puVar2 = (undefined *)0x0;
  }
  _swift_retain(puVar2);
  return puVar5;
}



/* Address: 0x10022b358 | FUN_10022b358 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10022b358(ID param_1,long param_2)

{
  undefined *self;
  ID IVar1;
  
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 != 0) {
    FUN_100221610(param_1);
    return param_1;
  }
  self = &_OBJC_CLASS___NSView;
  _objc_allocWithZone();
  IVar1 = objc_stub::init((ID)self);
  return IVar1;
}



/* Address: 0x10022b3b4 | FUN_10022b3b4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10022b3b4(ID param_1,long param_2)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = param_1;
  _swift_getObjectType();
  _swift_conformsToProtocol2();
  IVar2 = IVar1;
  if (IVar1 != 0 && param_1 != 0) {
    param_2 = param_2 + 0x10;
    _swift_unknownObjectWeakLoadStrong();
    IVar2 = 0;
    if (param_2 != 0) {
      FUN_100221b40(param_1,IVar1);
      objc_stub::removeFromSuperview(param_1);
      return 0;
    }
  }
  return IVar2;
}



/* Address: 0x10022b448 | FUN_10022b448 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long FUN_10022b448(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  _swift_getObjectType();
  _swift_conformsToProtocol2();
  lVar2 = lVar1;
  if (lVar1 != 0 && param_1 != 0) {
    param_3 = param_3 + 0x10;
    _swift_unknownObjectWeakLoadStrong();
    lVar2 = 0;
    if (param_3 != 0) {
      FUN_100221b40(param_1,lVar1);
      FUN_100221610(param_2);
      return 0;
    }
  }
  return lVar2;
}



/* Address: 0x10022b4f8 | FUN_10022b4f8 */

void FUN_10022b4f8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ID unaff_x20;
  undefined8 extraout_d0;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = (undefined8 *)(unaff_x20 + _TtC7PasteUI14CollectionView::___lazy_storage___contentLayout)
  ;
  if (*(char *)(puVar1 + 10) == '\x01') {
    objc_stub::bounds(unaff_x20);
    uVar2 = *(undefined8 *)(unaff_x20 + _TtC7PasteUI14CollectionView::cellCount);
    uVar4 = 0;
    uVar5 = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[4] = 0;
    puVar1[5] = extraout_d0;
    puVar1[6] = param_3;
    puVar1[7] = param_4;
    puVar1[8] = param_5;
    puVar1[9] = uVar2;
    *(undefined1 *)(puVar1 + 10) = 0;
    uVar6 = 0;
    uVar7 = 0;
    uVar8 = 0;
    uVar3 = extraout_d0;
  }
  else {
    uVar2 = puVar1[9];
    param_4 = puVar1[7];
    param_5 = puVar1[8];
    uVar3 = puVar1[5];
    param_3 = puVar1[6];
    uVar6 = puVar1[4];
    uVar5 = puVar1[1];
    uVar4 = *puVar1;
    uVar8 = puVar1[3];
    uVar7 = puVar1[2];
  }
  param_1[1] = uVar5;
  *param_1 = uVar4;
  param_1[3] = uVar8;
  param_1[2] = uVar7;
  param_1[4] = uVar6;
  param_1[5] = uVar3;
  param_1[6] = param_3;
  param_1[7] = param_4;
  param_1[8] = param_5;
  param_1[9] = uVar2;
  return;
}



/* Address: 0x10022b598 | FUN_10022b598 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10022b598(ID param_1)

{
  ID self;
  
  FUN_1002292a0();
  self = objc_stub::contentView(param_1);
  objc_stub::bounds(self);
  return 0;
}



/* Address: 0x10022b604 | FUN_10022b604 */

void FUN_10022b604(undefined8 *param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_48 [24];
  
  lVar1 = _TtC7PasteUI14CollectionView::visibleCells;
  uVar2 = *param_1;
  lVar4 = *param_2;
  _swift_beginAccess(lVar4 + _TtC7PasteUI14CollectionView::visibleCells,auStack_48,1,0);
  uVar3 = *(undefined8 *)(lVar4 + lVar1);
  *(undefined8 *)(lVar4 + lVar1) = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRelease(uVar3);
  return;
}



/* Address: 0x10022b668 | FUN_10022b668 */

void FUN_10022b668(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _TtC7PasteUI14CollectionView::visibleCells;
  _swift_beginAccess(unaff_x20 + _TtC7PasteUI14CollectionView::visibleCells,auStack_38,0,0);
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + lVar1));
  return;
}



/* Address: 0x10022b6ac | FUN_10022b6ac */

undefined1  [16] FUN_10022b6ac(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _TtC7PasteUI14CollectionView::reusableCellQueueByIdentifier;
  _swift_beginAccess(unaff_x20 + _TtC7PasteUI14CollectionView::reusableCellQueueByIdentifier,param_1
                     ,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = _swift_endAccess;
  return auVar2;
}



/* Address: 0x10022b6ec | FUN_10022b6ec */

undefined1 FUN_10022b6ec(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _TtC7PasteUI14CollectionView::isReorderingEnabled;
  _swift_beginAccess(unaff_x20 + _TtC7PasteUI14CollectionView::isReorderingEnabled,auStack_38,0,0);
  return *(undefined1 *)(unaff_x20 + lVar1);
}



/* Address: 0x10022b72c | FUN_10022b72c */

void FUN_10022b72c(undefined1 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _TtC7PasteUI14CollectionView::isReorderingEnabled;
  _swift_beginAccess(unaff_x20 + _TtC7PasteUI14CollectionView::isReorderingEnabled,auStack_48,1,0);
  *(undefined1 *)(unaff_x20 + lVar1) = param_1;
  return;
}



/* Address: 0x10022b778 | FUN_10022b778 */

undefined1  [16] FUN_10022b778(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _TtC7PasteUI14CollectionView::isReorderingEnabled;
  _swift_beginAccess(unaff_x20 + _TtC7PasteUI14CollectionView::isReorderingEnabled,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = _swift_endAccess;
  return auVar2;
}



/* Address: 0x10022b7b8 | FUN_10022b7b8 */

void FUN_10022b7b8(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _TtC7PasteUI14CollectionView::draggingSession;
  _swift_beginAccess(unaff_x20 + _TtC7PasteUI14CollectionView::draggingSession,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(unaff_x20 + lVar1);
  return;
}



/* Address: 0x10022b7fc | FUN_10022b7fc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ulong * FUN_10022b7fc(void)

{
  long lVar1;
  ulong *self;
  ID IVar2;
  long unaff_x20;
  
  lVar1 = _TtC7PasteUI14CollectionView::___lazy_storage___draggingCursor;
  self = *(ulong **)(unaff_x20 + _TtC7PasteUI14CollectionView::___lazy_storage___draggingCursor);
  if (self == (ulong *)0x0) {
    FUN_100236364();
    _objc_allocWithZone();
    self = (ulong *)objc_stub::init((ID)self);
    IVar2 = NSColor::keyboardFocusIndicatorColor((ID)&_OBJC_CLASS___NSColor);
    (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *self) + 0x60))(IVar2);
    *(ulong **)(unaff_x20 + lVar1) = self;
  }
  return self;
}



/* Address: 0x10022b8a4 | FUN_10022b8a4 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10022b8a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ID IVar5;
  long unaff_x20;
  
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
  puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1001f3988();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  lVar1 = _TtC7PasteUI14CollectionView::reusableCellQueueByIdentifier;
  FUN_1001f3a9c();
  *(undefined **)(unaff_x20 + lVar1) = puVar4;
  lVar1 = _TtC7PasteUI14CollectionView::scrollView;
  IVar5 = 0;
  FUN_10022a2dc();
  _objc_allocWithZone();
  IVar5 = objc_stub::initWithFrame_(IVar5,0,0,0,0);
  *(ID *)(unaff_x20 + lVar1) = IVar5;
  *(undefined1 *)(unaff_x20 + _TtC7PasteUI14CollectionView::isReorderingEnabled) = 1;
  puVar2 = (undefined8 *)(unaff_x20 + _TtC7PasteUI14CollectionView::initialDragLocation);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined1 *)(puVar2 + 2) = 1;
  *(undefined8 *)(unaff_x20 + _TtC7PasteUI14CollectionView::dragWaitTimer) = 0;
  _swift_unknownObjectWeakInit(unaff_x20 + _TtC7PasteUI14CollectionView::draggingSession,0);
  *(undefined8 *)(unaff_x20 + _TtC7PasteUI14CollectionView::___lazy_storage___draggingCursor) = 0;
  FUN_10022dac8();
  IVar5 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffa0,"initWithFrame:",param_1,
                              param_2,param_3,param_4);
  FUN_10022ba80();
  return IVar5;
}



/* Address: 0x10022ba80 | FUN_10022ba80 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_10022ba80(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  _ArrayBuffer _Var4;
  MainActor *pMVar5;
  MainActor *pMVar6;
  UnownedSerialExecutor UVar7;
  UnownedSerialExecutor UVar8;
  undefined *puVar9;
  NSArray *pNVar10;
  ID unaff_x20;
  ID self;
  
  self = *(ID *)(unaff_x20 + _TtC7PasteUI14CollectionView::scrollView);
  puVar2 = &DAT_100ec2b68;
  _swift_allocObject(&DAT_100ec2b68,0x18,7);
  _swift_unknownObjectWeakInit(puVar2 + 0x10);
  puVar1 = (undefined8 *)(self + _TtCC7PasteUI14CollectionView10ScrollView::onScroll);
  uVar3 = puVar1[1];
  *puVar1 = FUN_10022ddc8;
  puVar1[1] = puVar2;
  _swift_release(uVar3);
  _Var4.unknown = &DAT_100fb7040;
  FUN_1000037f0(&DAT_100fb7040,&DAT_100c34f70);
  _swift_initStackObject();
  *(undefined8 *)(_Var4.unknown + 0x18) = 3;
  *(undefined8 *)(_Var4.unknown + 0x10) = 1;
  *(ID *)(_Var4.unknown + 0x20) = self;
  if (((ulong)_Var4.unknown & 0xc000000000000001) != 0) {
    self = 0;
    Swift::_ArrayBuffer::__getElementSlowPath(0,_Var4);
  }
  pMVar5 = Swift::MainActor::typeMetadataAccessor();
  pMVar6 = Swift::MainActor::get_shared(pMVar5,pMVar5);
  pMVar5 = pMVar6;
  FUN_1001f7290();
  UVar7 = Swift::Actor::get_unownedExecutor();
  UVar8 = UVar7;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar8.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/NSView+LayoutBuilder.swift",0x22,1,0x15,UVar7.unknown,pMVar5);
  }
  objc_stub::addSubview_(unaff_x20,self);
  objc_stub::setTranslatesAutoresizingMaskIntoConstraints_(self,0);
  _swift_release(pMVar6);
  if (DAT_100fb6230 != -1) {
    _swift_once(&DAT_100fb6230,FUN_1001f9ff4);
  }
  FUN_100211c08(DAT_101057750,DAT_101057758,DAT_101057760,DAT_101057768);
  puVar2 = &DAT_100fb7ad0;
  FUN_1000037f0(&DAT_100fb7ad0,&DAT_100c36620);
  _swift_initStackObject();
  *(undefined8 *)(puVar2 + 0x18) = 2;
  *(undefined8 *)(puVar2 + 0x10) = 1;
  puVar9 = &DAT_100fb7050;
  FUN_1000037f0(&DAT_100fb7050,&DAT_100c366b0);
  *(undefined **)(puVar2 + 0x38) = puVar9;
  *(undefined ***)(puVar2 + 0x40) = &PTR_PTR_100ec00b8;
  *(ID *)(puVar2 + 0x20) = unaff_x20;
  puVar9 = puVar2;
  thunk_FUN_1001f9238(puVar2);
  _swift_setDeallocating(puVar2);
  FUN_100004594(puVar2 + 0x20);
  FUN_10000ec2c(0,&DAT_100fb7ae0,&PTR__OBJC_CLASS___NSLayoutConstraint_100f8d660);
  pNVar10 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  NSLayoutConstraint::activateConstraints_((ID)&_OBJC_CLASS___NSLayoutConstraint,pNVar10);
  _swift_bridgeObjectRelease(puVar9);
  _swift_setDeallocating(_Var4.unknown);
  _swift_arrayDestroy(_Var4.unknown + 0x20,*(undefined8 *)(_Var4.unknown + 0x10),
                      PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8);
  return;
}



/* Address: 0x10022bd20 | _TtC7PasteUI14CollectionView::initWithFrame: */

/* Function Stack Size: 0x30 bytes */

ID __thiscall
_TtC7PasteUI14CollectionView::initWithFrame_
          (_TtC7PasteUI14CollectionView *this,ID param_1,SEL param_2,CGRect param_3)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  char *pcVar4;
  
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
              ("PasteUI/CollectionView.swift",0x1c,1,0x43,UVar3.unknown,pMVar1);
  }
  FUN_10022b8a4();
  _swift_release(pMVar2);
  return (ID)pcVar4;
}



/* Address: 0x10022bde8 | thunk_FUN_10022dae8 */

void thunk_FUN_10022dae8(void)

{
  FUN_10022dae8();
  return;
}



/* Address: 0x10022bdec | _TtC7PasteUI14CollectionView::initWithCoder: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC7PasteUI14CollectionView::initWithCoder_(ID param_1,SEL param_2,ID param_3)

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
              ("PasteUI/CollectionView.swift",0x1c,1,0x49,UVar3.unknown,pMVar1);
  }
  FUN_10022dae8();
  _swift_release(pMVar2);
  return param_3;
}



/* Address: 0x10022be98 | FUN_10022be98 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_10022be98(void)

{
  undefined8 *puVar1;
  ID *pIVar2;
  MainActor *self;
  ulong uVar3;
  code *pcVar4;
  bool bVar5;
  MainActor *pMVar6;
  MainActor *pMVar7;
  UnownedSerialExecutor UVar8;
  UnownedSerialExecutor UVar9;
  undefined8 uVar10;
  undefined *puVar11;
  ID IVar12;
  ID self_00;
  ID IVar13;
  ulong uVar14;
  ulong uVar15;
  long unaff_x20;
  long lVar16;
  long lVar17;
  ulong *puVar18;
  long lVar19;
  long lVar20;
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [88];
  
  lVar16 = _TtC7PasteUI14CollectionView::visibleCells;
  _swift_beginAccess(unaff_x20 + _TtC7PasteUI14CollectionView::visibleCells,auStack_d0,1,0);
  lVar17 = *(long *)(unaff_x20 + lVar16);
  puVar18 = (ulong *)(lVar17 + 0x40);
  uVar14 = -1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if (-uVar14 < 0x40) {
    uVar15 = ~(-1L << (-uVar14 & 0x3f));
  }
  uVar15 = uVar15 & *puVar18;
  _swift_bridgeObjectRetain_n(lVar17,2);
  lVar19 = 0;
  lVar20 = lVar19;
  while( true ) {
    for (; uVar15 != 0; uVar15 = uVar15 - 1 & uVar15) {
      uVar3 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
      uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      puVar1 = (undefined8 *)
               (*(long *)(lVar17 + 0x38) + LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) * 0x10 +
               lVar19 * 0x400);
      self = (MainActor *)*puVar1;
      uVar10 = puVar1[1];
      pMVar6 = Swift::MainActor::typeMetadataAccessor();
      pMVar7 = Swift::MainActor::get_shared(pMVar6,self);
      pMVar6 = pMVar7;
      FUN_1001f7290();
      UVar8 = Swift::Actor::get_unownedExecutor();
      UVar9 = UVar8;
      _swift_task_isCurrentExecutor();
      if (((ulong)UVar9.unknown & 1) == 0) {
        _swift_task_reportUnexpectedExecutor
                  ("PasteUI/CollectionView.swift",0x1c,1,0x4f,UVar8.unknown,pMVar6);
      }
      FUN_100221b40(self,uVar10);
      objc_stub::removeFromSuperview((ID)self);
      _swift_release(pMVar7);
      lVar20 = lVar19;
    }
    bVar5 = SCARRY8(lVar19,1);
    lVar19 = lVar19 + 1;
    if (bVar5) break;
    if ((long)(0x3f - uVar14 >> 6) <= lVar19) {
      _swift_bridgeObjectRelease(lVar17);
      FUN_10000c650(lVar17,puVar18,~uVar14,lVar20,0);
      uVar10 = *(undefined8 *)(unaff_x20 + lVar16);
      *(undefined **)(unaff_x20 + lVar16) = PTR___swiftEmptyDictionarySingleton_100eae0e0;
      _swift_bridgeObjectRelease(uVar10);
      IVar12 = unaff_x20 + _TtC7PasteUI14CollectionView::dataSource;
      _swift_beginAccess(IVar12,auStack_e8,0,0);
      IVar13 = IVar12;
      _swift_unknownObjectWeakLoadStrong();
      if (IVar13 == 0) {
        IVar12 = 0;
      }
      else {
        lVar16 = *(long *)(IVar12 + 8);
        IVar12 = IVar13;
        _swift_getObjectType();
        (**(code **)(lVar16 + 0x10))();
        _swift_unknownObjectRelease(IVar13);
      }
      lVar16 = _TtC7PasteUI14CollectionView::cellCount;
      *(ID *)(unaff_x20 + _TtC7PasteUI14CollectionView::cellCount) = IVar12;
      FUN_10022b1cc();
      _swift_bridgeObjectRelease();
      if ((long)IVar12 < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10022c22c);
        (*pcVar4)();
      }
      if (IVar12 == 0) {
        lVar17 = *(long *)(PTR___swiftEmptyArrayStorage_100eae0d8 + 0x10);
        puVar11 = PTR___swiftEmptyArrayStorage_100eae0d8;
      }
      else {
        puVar11 = &DAT_100fb6488;
        FUN_1000037f0(&DAT_100fb6488,&DAT_100c35590);
        _swift_initStaticObject();
        lVar17 = *(long *)(puVar11 + 0x10);
      }
      if (lVar17 == 0) {
        IVar13 = 0;
      }
      else {
        IVar13 = *(ID *)(puVar11 + lVar17 * 8 + 0x18);
      }
      pIVar2 = (ID *)(unaff_x20 +
                     _TtC7PasteUI14CollectionView::___lazy_storage___cellSelectionManager);
      self_00 = *pIVar2;
      *pIVar2 = (ID)puVar11;
      pIVar2[1] = IVar12;
      pIVar2[2] = IVar13;
      *(bool *)(pIVar2 + 3) = lVar17 == 0;
      _swift_bridgeObjectRelease();
      FUN_100228f6c();
      lVar17 = _TtCC7PasteUI14CollectionView10ScrollView::shouldSilenceScrollingEvents;
      lVar19 = *(long *)(unaff_x20 + _TtC7PasteUI14CollectionView::scrollView);
      *(undefined1 *)
       (lVar19 + _TtCC7PasteUI14CollectionView10ScrollView::shouldSilenceScrollingEvents) = 0;
      FUN_1002292a0();
      IVar12 = objc_stub::contentView(self_00);
      objc_stub::bounds(IVar12);
      objc_stub::setBounds_(IVar12,0,0);
      *(undefined1 *)(lVar19 + lVar17) = 0;
      FUN_10022b4f8(auStack_b8,0);
      FUN_10022ce5c(auStack_b8);
      lVar17 = _TtC7PasteUI14CollectionView::emptyPlaceholderView;
      _swift_beginAccess(unaff_x20 + _TtC7PasteUI14CollectionView::emptyPlaceholderView,auStack_100,
                         0,0);
      if (*(ID *)(unaff_x20 + lVar17) != 0) {
        objc_stub::setHidden_
                  (*(ID *)(unaff_x20 + lVar17),(ulong)(*(long *)(unaff_x20 + lVar16) != 0));
      }
      return;
    }
    uVar15 = puVar18[lVar19];
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10022c228);
  (*pcVar4)();
}



/* Address: 0x10022c22c | FUN_10022c22c */

void FUN_10022c22c(void)

{
  FUN_100221d34(1);
  return;
}



/* Address: 0x10022c234 | FUN_10022c234 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

code * FUN_10022c234(code *param_1,code *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long *plVar2;
  code **ppcVar3;
  code *pcVar4;
  code *self;
  void *pvVar5;
  String SVar6;
  undefined1 auStack_90 [32];
  code *local_70 [4];
  
  pcVar4 = (code *)auStack_90;
  uVar1 = param_4;
  local_70[0] = param_1;
  _swift_getMetatypeMetadata(param_4);
  SVar6 = Swift::String::_init(local_70,uVar1);
  pvVar5 = SVar6.bridgeObject;
  plVar2 = (long *)SVar6.str;
  ppcVar3 = local_70;
  FUN_10022b6ac();
  FUN_10022c370(auStack_90,plVar2,pvVar5);
  if (*plVar2 == 0) {
    (*pcVar4)(auStack_90,0);
    _swift_bridgeObjectRelease(pvVar5);
    (*(code *)ppcVar3)(local_70,0);
  }
  else {
    self = pcVar4;
    FUN_10022c414();
    (*pcVar4)(auStack_90,0);
    (*(code *)ppcVar3)(local_70,0);
    _swift_bridgeObjectRelease(pvVar5);
    if ((self != (code *)0x0) && (_swift_dynamicCastUnknownClass(self,param_4), self != (code *)0x0)
       ) goto LAB_10022c338;
  }
  (*param_2)();
  self = param_1;
LAB_10022c338:
  objc_stub::setAlphaValue_((ID)self,0x3ff0000000000000);
  return self;
}



/* Address: 0x10022c370 | FUN_10022c370 */

code * FUN_10022c370(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = (void *)0x28;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    pvVar1 = _malloc(0x28);
  }
  else {
    _swift_coroFrameAlloc(0x28,0x75b7);
  }
  *param_1 = pvVar1;
  pvVar2 = pvVar1;
  FUN_10022d7f4();
  *(void **)((long)pvVar1 + 0x20) = pvVar2;
  return FUN_10022c3e4;
}



/* Address: 0x10022c3e4 | FUN_10022c3e4 */

void FUN_10022c3e4(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  (**(code **)((long)pvVar1 + 0x20))(pvVar1,0);
  _free(pvVar1);
  return;
}



/* Address: 0x10022c414 | FUN_10022c414 */

undefined1  [16] FUN_10022c414(void)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  ulong *unaff_x20;
  undefined1 auVar8 [16];
  
  uVar7 = *unaff_x20;
  if (*(long *)(uVar7 + 0x10) == 0) {
    uVar4 = 0;
    uVar5 = 0;
  }
  else {
    uVar3 = uVar7;
    _swift_isUniquelyReferenced_nonNull_native();
    if ((uVar3 & 1) == 0) {
      FUN_10021be34();
      lVar6 = *(long *)(uVar7 + 0x10);
    }
    else {
      lVar6 = *(long *)(uVar7 + 0x10);
    }
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10022c484);
      (*pcVar2)();
    }
    lVar1 = uVar7 + (lVar6 + -1) * 0x10;
    uVar4 = *(undefined8 *)(lVar1 + 0x20);
    uVar5 = *(undefined8 *)(lVar1 + 0x28);
    *(long *)(uVar7 + 0x10) = lVar6 + -1;
    *unaff_x20 = uVar7;
  }
  auVar8._8_8_ = uVar5;
  auVar8._0_8_ = uVar4;
  return auVar8;
}



/* Address: 0x10022c484 | FUN_10022c484 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10022c484(ID param_1)

{
  ID self;
  
  self = param_1;
  FUN_100229234();
  objc_stub::addSubview_(self,param_1);
  return 0;
}



/* Address: 0x10022c4c0 | FUN_10022c4c0 */

void FUN_10022c4c0(void)

{
  undefined1 auStack_60 [80];
  
  FUN_10022dac8();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff90,"layout");
  FUN_10022b4f8(auStack_60);
  FUN_10022ce5c(auStack_60);
  return;
}


