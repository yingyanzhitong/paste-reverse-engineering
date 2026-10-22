/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100040f90 | FUN_100040f90 */

void FUN_100040f90(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x000100040fbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100040fc0 | FUN_100040fc0 */

void FUN_100040fc0(undefined8 param_1)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
  *(undefined8 *)(unaff_x22 + 0x48) = unaff_x20;
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  *(MainActor **)(unaff_x22 + 0x50) = pMVar2;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  *(MainActor **)(unaff_x22 + 0x58) = pMVar2;
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  *(undefined8 **)(unaff_x22 + 0x60) = puVar3;
  UVar4 = Swift::Actor::get_unownedExecutor();
  *(undefined **)(unaff_x22 + 0x68) = UVar4.unknown;
  *(undefined8 **)(unaff_x22 + 0x70) = puVar3;
  _swift_task_switch(FUN_100041058,UVar4.unknown,puVar3);
  return;
}



/* Address: 0x100041058 | FUN_100041058 */

void FUN_100041058(MainActor *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  MainActor *pMVar1;
  UnownedSerialExecutor UVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x60);
  pMVar1 = *(MainActor **)(unaff_x22 + 0x50);
  puVar4 = *(undefined8 **)(unaff_x22 + 0x40);
  *(undefined8 *)(unaff_x22 + 0x78) =
       *(undefined8 *)(*(long *)(unaff_x22 + 0x48) + _TtC5Paste9SearchBar::viewModel);
  FUN_1002f7f98();
  *(MainActor **)(unaff_x22 + 0x80) = param_1;
  *(undefined8 *)(unaff_x22 + 0x88) = param_2;
  *(undefined8 *)(unaff_x22 + 0x90) = param_3;
  *(undefined1 *)(unaff_x22 + 0x31) = param_4;
  *(undefined8 *)(unaff_x22 + 0x98) = *puVar4;
  pMVar1 = Swift::MainActor::get_shared(pMVar1,param_1);
  *(MainActor **)(unaff_x22 + 0xa0) = pMVar1;
  UVar2 = Swift::Actor::get_unownedExecutor();
  _swift_task_switch(FUN_1000410ec,UVar2.unknown,uVar3);
  return;
}



/* Address: 0x1000410ec | FUN_1000410ec */

void FUN_1000410ec(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar5 = *(undefined1 *)(unaff_x22 + 0x31);
  _swift_release(*(undefined8 *)(unaff_x22 + 0xa0));
  FUN_1000da768(unaff_x22 + 0x38);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar6 = uVar4;
  FUN_1002df190(uVar4,uVar2,uVar3,uVar5,uVar1);
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar6;
  FUN_100008320(uVar4,uVar2,uVar3,uVar5);
  _swift_release(uVar7);
  _swift_task_switch(FUN_100041190,*(undefined8 *)(unaff_x22 + 0x68),
                     *(undefined8 *)(unaff_x22 + 0x70));
  return;
}



/* Address: 0x100041190 | FUN_100041190 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100041190(void)

{
  code *pcVar1;
  ulong uVar2;
  char cVar3;
  undefined *puVar4;
  bool bVar5;
  Task TVar6;
  MainActor *pMVar7;
  UnownedSerialExecutor UVar8;
  undefined *puVar9;
  undefined *puVar10;
  ID self;
  MainActor *pMVar11;
  ID IVar12;
  UnownedSerialExecutor UVar13;
  char *pcVar14;
  long lVar15;
  MainActor *pMVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  long lVar19;
  long unaff_x22;
  undefined8 uVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 extraout_d0;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  MainActor *local_98;
  
  TVar6.unknown = *(undefined **)(unaff_x22 + 0x58);
  _swift_release();
  bVar5 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar6);
  puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar21 = *(long *)(unaff_x22 + 0xa8);
  if ((bVar5) || (lVar19 = *(long *)(lVar21 + 0x10), lVar19 == 0)) {
    lVar19 = *(long *)(unaff_x22 + 0x48);
    _swift_bridgeObjectRelease(lVar21);
    lVar21 = _TtC5Paste9SearchBar::filterSuggestionsMenu;
    IVar12 = *(ID *)(lVar19 + _TtC5Paste9SearchBar::filterSuggestionsMenu);
    if (IVar12 != 0) {
      FUN_10005a17c();
      self = objc_stub::parentWindow(IVar12);
      objc_stub::removeChildWindow_(self,IVar12);
      objc_stub::orderOut_(IVar12,0);
    }
    *(undefined8 *)(lVar19 + lVar21) = 0;
  }
  else {
    lVar15 = *(long *)(unaff_x22 + 0x40);
    FUN_1000717e0(0,lVar19,0);
    uVar17 = *(undefined8 *)(lVar15 + 0x10);
    uVar31 = *(undefined8 *)(lVar15 + 0x18);
    pcVar14 = (char *)(lVar21 + 0x38);
    pcVar1 = *(code **)(lVar15 + 0x20);
    uVar30 = *(undefined8 *)(lVar15 + 0x28);
    do {
      uVar22 = *(undefined8 *)(unaff_x22 + 0x60);
      pMVar16 = *(MainActor **)(unaff_x22 + 0x50);
      pMVar11 = *(MainActor **)(pcVar14 + -0x18);
      uVar29 = *(undefined8 *)(pcVar14 + -0x10);
      uVar24 = *(undefined8 *)(pcVar14 + -8);
      cVar3 = *pcVar14;
      pMVar7 = pMVar11;
      FUN_100041d74(pMVar11,uVar29,uVar24,cVar3);
      pMVar7 = Swift::MainActor::get_shared(pMVar16,pMVar7);
      UVar8 = Swift::Actor::get_unownedExecutor();
      UVar13 = UVar8;
      _swift_task_isCurrentExecutor();
      if (((ulong)UVar13.unknown & 1) == 0) {
        _swift_task_reportUnexpectedExecutor
                  ("Paste/SearchBar.swift",0x15,1,0xd2,UVar8.unknown,uVar22);
      }
      if (cVar3 == '\x01') {
        local_98 = pMVar11;
        FUN_1000546e0(pMVar11,uVar29,uVar24);
      }
      else {
        local_98 = (MainActor *)0x0;
      }
      uVar23 = *(undefined8 *)(unaff_x22 + 0x98);
      uVar20 = *(undefined8 *)(unaff_x22 + 0x48);
      puVar18 = *(undefined8 **)(unaff_x22 + 0x40);
      pMVar16 = pMVar11;
      uVar22 = uVar29;
      FUN_1002dc9b8(pMVar11,uVar29,uVar24,cVar3);
      puVar9 = &DAT_100eb1a00;
      _swift_allocObject(&DAT_100eb1a00,0x18,7);
      _swift_unknownObjectWeakInit(puVar9 + 0x10,uVar20);
      puVar10 = &DAT_100eb1a50;
      _swift_allocObject(&DAT_100eb1a50,0x68,7);
      uVar27 = puVar18[3];
      uVar26 = puVar18[2];
      uVar25 = puVar18[5];
      uVar20 = puVar18[4];
      uVar28 = *puVar18;
      *(undefined8 *)(puVar10 + 0x18) = puVar18[1];
      *(undefined8 *)(puVar10 + 0x10) = uVar28;
      *(undefined8 *)(puVar10 + 0x28) = uVar27;
      *(undefined8 *)(puVar10 + 0x20) = uVar26;
      *(undefined8 *)(puVar10 + 0x38) = uVar25;
      *(undefined8 *)(puVar10 + 0x30) = uVar20;
      *(MainActor **)(puVar10 + 0x40) = pMVar11;
      *(undefined8 *)(puVar10 + 0x48) = uVar29;
      *(undefined8 *)(puVar10 + 0x50) = uVar24;
      puVar10[0x58] = cVar3;
      *(undefined **)(puVar10 + 0x60) = puVar9;
      _swift_bridgeObjectRetain_n(uVar31,2);
      _swift_bridgeObjectRetain(uVar23);
      _swift_retain(uVar30);
      _swift_release(pMVar7);
      uVar2 = *(ulong *)(puVar4 + 0x10);
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar2) {
        FUN_1000717e0(1 < *(ulong *)(puVar4 + 0x18),uVar2 + 1,1);
      }
      pcVar14 = pcVar14 + 0x20;
      *(ulong *)(puVar4 + 0x10) = uVar2 + 1;
      *(MainActor **)(puVar4 + uVar2 * 0x38 + 0x20) = local_98;
      *(MainActor **)(puVar4 + uVar2 * 0x38 + 0x28) = pMVar16;
      *(undefined8 *)(puVar4 + uVar2 * 0x38 + 0x30) = uVar22;
      *(undefined8 *)(puVar4 + uVar2 * 0x38 + 0x38) = uVar17;
      *(undefined8 *)(puVar4 + uVar2 * 0x38 + 0x40) = uVar31;
      *(code **)(puVar4 + uVar2 * 0x38 + 0x48) = FUN_100041de0;
      *(undefined **)(puVar4 + uVar2 * 0x38 + 0x50) = puVar10;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    pMVar11 = *(MainActor **)(unaff_x22 + 0xa8);
    lVar19 = *(long *)(unaff_x22 + 0x48);
    _swift_bridgeObjectRelease();
    lVar21 = _TtC5Paste9SearchBar::filterSuggestionsMenu;
    if (*(long *)(lVar19 + _TtC5Paste9SearchBar::filterSuggestionsMenu) == 0) {
      IVar12 = 0;
      FUN_10005a374();
      _objc_allocWithZone();
      IVar12 = objc_stub::init(IVar12);
      *(ID *)(lVar19 + lVar21) = IVar12;
      pMVar11 = (MainActor *)0x0;
    }
    (*pcVar1)(unaff_x22 + 0x10);
    if (*(char *)(unaff_x22 + 0x30) == '\x01') {
      _swift_release(puVar4);
    }
    else {
      uVar17 = *(undefined8 *)(unaff_x22 + 0x60);
      uVar30 = *(undefined8 *)(unaff_x22 + 0x20);
      uVar29 = *(undefined8 *)(unaff_x22 + 0x28);
      uVar22 = *(undefined8 *)(unaff_x22 + 0x10);
      uVar31 = *(undefined8 *)(unaff_x22 + 0x18);
      pMVar11 = Swift::MainActor::get_shared(*(MainActor **)(unaff_x22 + 0x50),pMVar11);
      UVar13 = Swift::Actor::get_unownedExecutor();
      pcVar14 = (char *)UVar13;
      _swift_task_isCurrentExecutor();
      if (((ulong)pcVar14 & 1) == 0) {
        pcVar14 = "Paste/SearchBar.swift";
        _swift_task_reportUnexpectedExecutor
                  ("Paste/SearchBar.swift",0x15,1,0xe1,UVar13.unknown,uVar17);
      }
      uVar17 = *(undefined8 *)(unaff_x22 + 0x48);
      FUN_10003e7d0();
      objc_stub::convertRect_toView_((ID)pcVar14,uVar22,uVar31,uVar30,uVar29,uVar17);
      _swift_release(pMVar11);
      if (*(long *)(lVar19 + lVar21) != 0) {
        uVar17 = *(undefined8 *)(unaff_x22 + 0x48);
        puVar9 = &DAT_100eb1a00;
        _swift_allocObject(&DAT_100eb1a00,0x18,7);
        _swift_unknownObjectWeakInit(puVar9 + 0x10,uVar17);
        _swift_retain(puVar9);
        FUN_100059c6c(extraout_d0,uVar31,uVar30,uVar29,puVar4,uVar17,FUN_100041df8,puVar9);
        _swift_release_n(puVar9,2);
      }
      _swift_release(puVar4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000100041470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10004160c | FUN_10004160c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10004160c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  code *pcVar1;
  long lVar2;
  
  FUN_1002dcca4(param_2,param_3,param_4,param_5,param_1[1],0,*param_1);
  param_6 = param_6 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_6 == 0) {
    _swift_bridgeObjectRelease(param_2);
    return;
  }
  lVar2 = *(long *)(param_6 + _TtC5Paste9SearchBar::inputCoordinator);
  _swift_retain(lVar2);
  if (lVar2 != 0) {
    FUN_1002f7744(param_2,0);
    _swift_bridgeObjectRelease(param_2);
    _swift_release(lVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1000416b4);
  (*pcVar1)();
}



/* Address: 0x1000416b4 | FUN_1000416b4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1000416b4(long param_1)

{
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    uStack_38 = 0;
    local_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    uStack_48 = 0;
    local_50 = 0;
    FUN_1000403f4(&local_50);
    return 0;
  }
  return 0;
}



/* Address: 0x10004170c | FUN_10004170c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

undefined8 FUN_10004170c(long param_1)

{
  long lVar1;
  ID IVar2;
  ID IVar3;
  
  lVar1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + _TtC5Paste9SearchBar::filterBrowserPopover) = 0;
  }
  IVar2 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (((IVar2 != 0) && (*(char *)(IVar2 + _TtC5Paste9SearchBar::isActive) == '\x01')) &&
     ((*(long *)(IVar2 + _TtC5Paste9SearchBar::filterBrowserPopover) == 0 ||
      ((*(byte *)(*(long *)(IVar2 + _TtC5Paste9SearchBar::filterBrowserPopover) +
                 _TtC5Paste20FilterBrowserPopover::isDisplayed) & 1) == 0)))) {
    FUN_10003e7d0();
    IVar2 = objc_stub::window(IVar2);
    if (IVar2 != 0) {
      IVar3 = IVar2;
      FUN_100045c2c();
      FUN_100041f9c();
      objc_stub::makeFirstResponder_(IVar2,IVar3);
    }
  }
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 == 0) {
    return 0;
  }
  FUN_10003e7d0();
  FUN_1000457cc(0);
  return 0;
}



/* Address: 0x100041860 | FUN_100041860 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100041860(undefined8 param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 == 0) {
    return;
  }
  lVar2 = *(long *)(param_2 + _TtC5Paste9SearchBar::inputCoordinator);
  _swift_retain(lVar2);
  if (lVar2 != 0) {
    FUN_1002f7744(param_1,0);
    _swift_release(lVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1000418d8);
  (*pcVar1)();
}



/* Address: 0x1000418d8 | _TtC5Paste9SearchBar::initWithFrame: */

/* Function Stack Size: 0x30 bytes */

ID _TtC5Paste9SearchBar::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

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
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor("Paste/SearchBar.swift",0x15,1,8,UVar4.unknown,puVar3);
  }
  __swift_stdlib_reportUnimplementedInitializer("Paste.SearchBar",0xf,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100041980);
  (*pcVar2)();
}



/* Address: 0x100041980 | _TtC5Paste9SearchBar::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC5Paste9SearchBar::_cxx_destruct(ID param_1,SEL param_2)

{
  FUN_100004550(*(undefined8 *)(param_1 + onActivate),((undefined8 *)(param_1 + onActivate))[1]);
  FUN_100004550(*(undefined8 *)(param_1 + onDismiss),((undefined8 *)(param_1 + onDismiss))[1]);
  FUN_100004550(*(undefined8 *)(param_1 + onResignKey),((undefined8 *)(param_1 + onResignKey))[1]);
  _swift_release(*(undefined8 *)(param_1 + inputCoordinator));
  _swift_release(*(undefined8 *)(param_1 + viewModel));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + cancellables));
  _swift_release(*(undefined8 *)(param_1 + suggestionsTask));
  return;
}



/* Address: 0x100041a54 | FUN_100041a54 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100041a54(void)

{
  return ZEXT816(0x100f90528);
}



/* Address: 0x100041a74 | FUN_100041a74 */

void FUN_100041a74(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  puVar1 = &DAT_100c25548;
  _swift_getKeyPath(&DAT_100c25548);
  puVar2 = &DAT_100c25570;
  _swift_getKeyPath(&DAT_100c25570);
  Combine::Published::_get_subscript(param_1,uVar3,puVar1,puVar2);
  _swift_release(puVar1);
  _swift_release(puVar2);
  return;
}



/* Address: 0x100041adc | FUN_100041adc */

void FUN_100041adc(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  Published *pPVar4;
  undefined8 local_38;
  
  uVar3 = *param_1;
  pPVar4 = (Published *)*param_2;
  puVar1 = &DAT_100c25548;
  _swift_getKeyPath(&DAT_100c25548);
  puVar2 = &DAT_100c25570;
  _swift_getKeyPath(&DAT_100c25570);
  local_38 = uVar3;
  _swift_bridgeObjectRetain(uVar3);
  _swift_retain(pPVar4);
  Combine::Published::_set_subscript(pPVar4,&local_38,pPVar4,puVar1,puVar2);
  return;
}



/* Address: 0x100041b54 | FUN_100041b54 */

void FUN_100041b54(void)

{
  long unaff_x20;
  
  FUN_10003faf0(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100041b5c | FUN_100041b5c */

void FUN_100041b5c(void)

{
  long unaff_x20;
  
  _swift_unknownObjectWeakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x100041b80 | FUN_100041b80 */

void FUN_100041b80(void)

{
  FUN_10003ff40();
  return;
}



/* Address: 0x100041b88 | FUN_100041b88 */

void FUN_100041b88(void)

{
  long unaff_x20;
  
  FUN_100040054(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100041b90 | thunk_FUN_100041a74 */

void thunk_FUN_100041a74(void)

{
  FUN_100041a74();
  return;
}



/* Address: 0x100041b94 | thunk_FUN_100041adc */

void thunk_FUN_100041adc(void)

{
  FUN_100041adc();
  return;
}



/* Address: 0x100041b98 | FUN_100041b98 */

void FUN_100041b98(void)

{
  FUN_10003e61c();
  return;
}



/* Address: 0x100041ba0 | FUN_100041ba0 */

void FUN_100041ba0(void)

{
  FUN_1000401ec();
  return;
}



/* Address: 0x100041ba8 | FUN_100041ba8 */

void FUN_100041ba8(void)

{
  FUN_100040284();
  return;
}



/* Address: 0x100041bb0 | FUN_100041bb0 */

void FUN_100041bb0(void)

{
  FUN_1000403b0();
  return;
}



/* Address: 0x100041bb8 | FUN_100041bb8 */

void FUN_100041bb8(void)

{
  FUN_1000406ac();
  return;
}



/* Address: 0x100041bc0 | FUN_100041bc0 */

void FUN_100041bc0(void)

{
  FUN_1000407f8();
  return;
}



/* Address: 0x100041bc8 | FUN_100041bc8 */

void FUN_100041bc8(void)

{
  FUN_100040990();
  return;
}



/* Address: 0x100041bd0 | FUN_100041bd0 */

void FUN_100041bd0(void)

{
  FUN_100040a24();
  return;
}



/* Address: 0x100041bd8 | FUN_100041bd8 */

void FUN_100041bd8(void)

{
  FUN_100040aa4();
  return;
}



/* Address: 0x100041be0 | FUN_100041be0 */

void FUN_100041be0(void)

{
  FUN_100040ae8();
  return;
}



/* Address: 0x100041be8 | FUN_100041be8 */

void FUN_100041be8(void)

{
  FUN_100040b70();
  return;
}



/* Address: 0x100041bf0 | FUN_100041bf0 */

void FUN_100041bf0(void)

{
  FUN_100040c64();
  return;
}



/* Address: 0x100041bf8 | FUN_100041bf8 */

void FUN_100041bf8(void)

{
  FUN_100040cc8();
  return;
}



/* Address: 0x100041c00 | FUN_100041c00 */

uint FUN_100041c00(void)

{
  uint unaff_w20;
  
  FUN_100040dc8();
  return unaff_w20 & 1;
}



/* Address: 0x100041c24 | FUN_100041c24 */

uint FUN_100041c24(void)

{
  uint unaff_w20;
  
  FUN_100040dc8();
  return unaff_w20 & 1;
}



/* Address: 0x100041c48 | FUN_100041c48 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100041c48(undefined8 param_1,undefined8 param_2)

{
  (*_DAT_10130b410)(param_2,param_1);
  return param_2;
}



/* Address: 0x100041c84 | FUN_100041c84 */

void FUN_100041c84(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x50));
  _swift_deallocObject();
  return;
}



/* Address: 0x100041cc8 | FUN_100041cc8 */

void FUN_100041cc8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x50;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100008284;
  FUN_100040e34(plVar3,param_1,uVar1,uVar2,uVar4,unaff_x20 + 0x28);
  return;
}



/* Address: 0x100041d40 | FUN_100041d40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100041d40(undefined8 param_1)

{
  (*_DAT_10130b408)();
  return param_1;
}



/* Address: 0x100041d74 | FUN_100041d74 */

void FUN_100041d74(undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if (param_4 != '\x01') {
    param_3 = param_1;
  }
  _swift_bridgeObjectRetain(param_3);
  return;
}



/* Address: 0x100041d84 | FUN_100041d84 */

void FUN_100041d84(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x38));
  FUN_100041dd0(*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined1 *)(unaff_x20 + 0x58));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x60));
  _swift_deallocObject();
  return;
}



/* Address: 0x100041dd0 | FUN_100041dd0 */

void FUN_100041dd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if (param_4 != '\x01') {
    param_3 = param_1;
  }
  _swift_bridgeObjectRelease(param_3);
  return;
}



/* Address: 0x100041de0 | FUN_100041de0 */

void FUN_100041de0(void)

{
  long unaff_x20;
  
  FUN_10004160c(unaff_x20 + 0x10,*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48)
                ,*(undefined8 *)(unaff_x20 + 0x50),*(undefined1 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Address: 0x100041df8 | FUN_100041df8 */

void FUN_100041df8(void)

{
  FUN_1000416b4();
  return;
}



/* Address: 0x100041e00 | FUN_100041e00 */

void FUN_100041e00(void)

{
  FUN_10004170c();
  return;
}



/* Address: 0x100041e08 | FUN_100041e08 */

void FUN_100041e08(void)

{
  FUN_100041860();
  return;
}



/* Address: 0x100041e10 | FUN_100041e10 */

void FUN_100041e10(void)

{
  FUN_100008b84();
  return;
}



/* Address: 0x100041e18 | FUN_100041e18 */

undefined8 FUN_100041e18(undefined8 param_1)

{
  FUN_100030640();
  return param_1;
}



/* Address: 0x100041e4c | FUN_100041e4c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100041e4c(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x100041e70 | FUN_100041e70 */

void FUN_100041e70(void)

{
  FUN_100046914();
  return;
}



/* Address: 0x100041e78 | FUN_100041e78 */

void FUN_100041e78(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  __int64 _Var3;
  undefined *puVar4;
  long unaff_x20;
  String SVar5;
  
  *(undefined1 *)(unaff_x20 + _TtC5Paste9SearchBar::isActive) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC5Paste9SearchBar::onActivate);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC5Paste9SearchBar::onDismiss);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC5Paste9SearchBar::onResignKey);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _TtC5Paste9SearchBar::inputCoordinator) = 0;
  puVar4 = PTR___swiftEmptySetSingleton_100eae0e8;
  if (((ulong)PTR___swiftEmptyArrayStorage_100eae0d8 >> 0x3e != 0) &&
     (_Var3 = Swift::_CocoaArrayWrapper::get_endIndex
                        ((_CocoaArrayWrapper)PTR___swiftEmptyArrayStorage_100eae0d8),
     puVar4 = PTR___swiftEmptySetSingleton_100eae0e8, _Var3 != 0)) {
    puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_10001a4b0();
  }
  *(undefined **)(unaff_x20 + _TtC5Paste9SearchBar::cancellables) = puVar4;
  *(undefined8 *)(unaff_x20 + _TtC5Paste9SearchBar::suggestionsTask) = 0;
  *(undefined8 *)(unaff_x20 + _TtC5Paste9SearchBar::filterSuggestionsMenu) = 0;
  *(undefined8 *)(unaff_x20 + _TtC5Paste9SearchBar::filterBrowserPopover) = 0;
  *(undefined8 *)(unaff_x20 + _TtC5Paste9SearchBar::___lazy_storage___searchButton) = 0;
  *(undefined8 *)(unaff_x20 + _TtC5Paste9SearchBar::___lazy_storage___searchField) = 0;
  SVar5.bridgeObject = (void *)0x2;
  SVar5.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar5,(StaticString)0xd000000000000025,0x8000000100d8dc00,
             0xd8e700);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100041f98);
  (*pcVar2)();
}



/* Address: 0x100041f98 | thunk_FUN_100041b5c */

void thunk_FUN_100041b5c(void)

{
  FUN_100041b5c();
  return;
}



/* Address: 0x100041f9c | FUN_100041f9c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100041f9c(void)

{
  long lVar1;
  ID self;
  long unaff_x20;
  
  lVar1 = _TtCC5Paste11SearchField9InputView::___lazy_storage___textView;
  self = *(ID *)(unaff_x20 + _TtCC5Paste11SearchField9InputView::___lazy_storage___textView);
  if (self == 0) {
    FUN_10004485c();
    _swift_getObjCClassFromMetadata();
    _objc_allocWithZone();
    self = objc_stub::initUsingTextLayoutManager_(self,1);
    *(ID *)(unaff_x20 + lVar1) = self;
  }
  return self;
}



/* Address: 0x10004200c | FUN_10004200c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long FUN_10004200c(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  lVar1 = _TtCC5Paste11SearchField9InputView::___lazy_storage___textViewScroller;
  lVar2 = *(long *)(unaff_x20 +
                   _TtCC5Paste11SearchField9InputView::___lazy_storage___textViewScroller);
  if (lVar2 == 0) {
    FUN_100041f9c();
    uVar3 = 0;
    FUN_100043680(0);
    _objc_allocWithZone();
    FUN_100042edc(lVar2,uVar3);
    *(long *)(unaff_x20 + lVar1) = lVar2;
  }
  return lVar2;
}



/* Address: 0x100042090 | FUN_100042090 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100042090(void)

{
  long lVar1;
  ID IVar2;
  undefined *self;
  long unaff_x20;
  undefined1 auStack_38 [8];
  
  lVar1 = _TtCC5Paste11SearchField9InputView::___lazy_storage___clearButton;
  IVar2 = *(ID *)(unaff_x20 + _TtCC5Paste11SearchField9InputView::___lazy_storage___clearButton);
  if (IVar2 == 0) {
    self = &_OBJC_CLASS___NSButton;
    _objc_allocWithZone();
    IVar2 = objc_stub::init((ID)self);
    _swift_unknownObjectWeakInit(auStack_38);
    FUN_10004212c(IVar2,auStack_38);
    _swift_unknownObjectWeakDestroy(auStack_38);
    *(ID *)(unaff_x20 + lVar1) = IVar2;
  }
  return IVar2;
}



/* Address: 0x10004212c | FUN_10004212c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10004212c(ID param_1,undefined8 param_2)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  plVar3 = (long *)0x0;
  FUN_10000ec2c(0,&DAT_100fa8680,&PTR__OBJC_CLASS___NSImage_100f8d6b8);
  FUN_10020db28();
  lVar5 = *plVar3;
  lVar1 = plVar3[1];
  _swift_bridgeObjectRetain_n(lVar1,2);
  lVar4 = lVar5;
  FUN_1000f653c(lVar5,lVar1);
  if (lVar4 == 0) {
    _swift_bridgeObjectRelease(lVar1);
    lVar5 = -0x2fffffffffffffed;
    FUN_1000f653c(0xd000000000000013,0x8000000100d8de20);
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10004223c);
      (*pcVar2)();
    }
  }
  else {
    FUN_1000f653c(lVar5,lVar1);
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1000421a0);
      (*pcVar2)();
    }
  }
  objc_stub::setImage_(param_1,lVar5);
  objc_stub::setAction_(param_1,"clear");
  _swift_unknownObjectWeakLoadStrong(param_2);
  objc_stub::setTarget_(param_1,param_2);
  objc_stub::setRefusesFirstResponder_(param_1,1);
  objc_stub::setBordered_(param_1,0);
  return;
}



/* Address: 0x10004223c | FUN_10004223c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

ID FUN_10004223c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  ID IVar4;
  undefined *puVar5;
  undefined *puVar6;
  ID IVar7;
  ID self;
  void *pvVar8;
  long unaff_x20;
  ID *self_00;
  undefined8 uVar9;
  String SVar10;
  undefined1 auStack_d0 [16];
  ID local_c0;
  
  _swift_getObjectType();
  puVar1 = (undefined8 *)(unaff_x20 + _TtCC5Paste11SearchField9InputView::onClear);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _TtCC5Paste11SearchField9InputView::focusRingBounds);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  *(undefined8 *)(unaff_x20 + _TtCC5Paste11SearchField9InputView::___lazy_storage___textView) = 0;
  *(undefined8 *)
   (unaff_x20 + _TtCC5Paste11SearchField9InputView::___lazy_storage___textViewScroller) = 0;
  *(undefined8 *)(unaff_x20 + _TtCC5Paste11SearchField9InputView::___lazy_storage___clearButton) = 0
  ;
  *(undefined1 *)(unaff_x20 + _TtCC5Paste11SearchField9InputView::isClearButtonVisible) = 0;
  IVar4 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff80,"initWithFrame:",param_1,
                              param_2,param_3,param_4);
  puVar5 = &DAT_100fa6b80;
  FUN_1000037f0(&DAT_100fa6b80,&DAT_100c23760);
  _swift_initStackObject();
  *(undefined8 *)(puVar5 + 0x18) = 5;
  *(undefined8 *)(puVar5 + 0x10) = 2;
  IVar7 = IVar4;
  FUN_10004200c();
  self_00 = (ID *)(puVar5 + 0x20);
  *self_00 = IVar7;
  FUN_100042090();
  *(ID *)(puVar5 + 0x28) = IVar7;
  puVar6 = puVar5;
  local_c0 = IVar4;
  FUN_1001fa150(puVar5,FUN_100044cd8,auStack_d0);
  _swift_bridgeObjectRelease(puVar6);
  _swift_setDeallocating(puVar5);
  _swift_arrayDestroy(self_00,*(undefined8 *)(puVar5 + 0x10),
                      PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8);
  FUN_100041f9c();
  IVar7 = objc_stub::textStorage((ID)self_00);
  if (IVar7 != 0) {
    objc_stub::setDelegate_(IVar7,IVar4);
  }
  lVar3 = _TtCC5Paste11SearchField9InputView::___lazy_storage___clearButton;
  objc_stub::setEnabled_
            (*(ID *)(IVar4 + _TtCC5Paste11SearchField9InputView::___lazy_storage___clearButton),0);
  objc_stub::setHidden_(*(ID *)(IVar4 + lVar3),1);
  self = objc_stub::setAlphaValue_(*(ID *)(IVar4 + lVar3),0);
  FUN_100042b50();
  FUN_100041f9c();
  IVar7 = self;
  FUN_1000436a0();
  objc_stub::string(self);
  SVar10 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pvVar8 = SVar10.bridgeObject;
  _swift_bridgeObjectRelease(pvVar8);
  uVar2 = (ulong)SVar10.str & 0xffffffffffff;
  if (((ulong)pvVar8 & 0x2000000000000000) != 0) {
    uVar2 = (ulong)pvVar8 >> 0x38 & 0xf;
  }
  objc_stub::setHidden_(IVar7,(ulong)(uVar2 != 0));
  lVar3 = _TtCC5Paste11SearchField9InputView::___lazy_storage___textView;
  IVar7 = objc_stub::textStorage
                    (*(ID *)(IVar4 + _TtCC5Paste11SearchField9InputView::___lazy_storage___textView)
                    );
  if (IVar7 == 0) {
    uVar9 = 0x4000000000000000;
  }
  else {
    IVar7 = objc_stub::containsAttachments(IVar7);
    uVar9 = 0;
    if ((int)IVar7 == 0) {
      uVar9 = 0x4000000000000000;
    }
  }
  objc_stub::setTextContainerInset_(*(ID *)(IVar4 + lVar3),0,uVar9);
  return IVar4;
}



/* Address: 0x1000424e8 | FUN_1000424e8 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_1000424e8(ID param_1)

{
  long lVar1;
  long lVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  undefined8 uVar7;
  ID IVar8;
  ID IVar9;
  ID IVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  
  IVar3 = param_1;
  FUN_10004200c();
  IVar3 = objc_stub::topAnchor(IVar3);
  IVar4 = objc_stub::topAnchor(param_1);
  IVar3 = objc_stub::constraintEqualToAnchor_(IVar3,IVar4);
  lVar1 = _TtCC5Paste11SearchField9InputView::___lazy_storage___textViewScroller;
  IVar4 = objc_stub::leadingAnchor
                    (*(ID *)(param_1 +
                            _TtCC5Paste11SearchField9InputView::___lazy_storage___textViewScroller))
  ;
  IVar5 = objc_stub::leadingAnchor(param_1);
  IVar4 = objc_stub::constraintEqualToAnchor_(IVar4,IVar5);
  IVar5 = objc_stub::bottomAnchor(*(ID *)(param_1 + lVar1));
  IVar6 = objc_stub::bottomAnchor(param_1);
  IVar5 = objc_stub::constraintEqualToAnchor_(IVar5,IVar6);
  FUN_100042090();
  uVar7 = 0;
  FUN_10000ec2c(0,&DAT_100fa8690,&PTR__OBJC_CLASS___NSButton_100f8d6b0);
  FUN_1001f9e3c(0x4030000000000000,0x4030000000000000);
  lVar2 = _TtCC5Paste11SearchField9InputView::___lazy_storage___clearButton;
  IVar6 = objc_stub::centerYAnchor
                    (*(ID *)(param_1 +
                            _TtCC5Paste11SearchField9InputView::___lazy_storage___clearButton));
  IVar8 = objc_stub::centerYAnchor(param_1);
  IVar6 = objc_stub::constraintEqualToAnchor_(IVar6,IVar8);
  IVar8 = objc_stub::leadingAnchor(*(ID *)(param_1 + lVar2));
  IVar9 = objc_stub::trailingAnchor(*(ID *)(param_1 + lVar1));
  IVar8 = objc_stub::constraintEqualToAnchor_constant_(IVar8,0x4010000000000000,IVar9);
  IVar9 = objc_stub::trailingAnchor(*(ID *)(param_1 + lVar2));
  IVar10 = objc_stub::trailingAnchor(param_1);
  IVar9 = objc_stub::constraintEqualToAnchor_(IVar9,IVar10);
  puVar11 = &DAT_100fa8830;
  FUN_1000037f0(&DAT_100fa8830,&DAT_100c24a20);
  _swift_initStackObject();
  *(undefined8 *)(puVar11 + 0x18) = 0xe;
  *(undefined8 *)(puVar11 + 0x10) = 7;
  uVar12 = 0;
  FUN_10000ec2c(0,&DAT_100fa86a0,&PTR__OBJC_CLASS___NSLayoutConstraint_100f8d660);
  *(undefined8 *)(puVar11 + 0x38) = uVar12;
  *(undefined ***)(puVar11 + 0x40) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar11 + 0x20) = IVar3;
  *(undefined8 *)(puVar11 + 0x60) = uVar12;
  *(undefined ***)(puVar11 + 0x68) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar11 + 0x48) = IVar4;
  *(undefined8 *)(puVar11 + 0x88) = uVar12;
  *(undefined ***)(puVar11 + 0x90) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar11 + 0x70) = IVar5;
  puVar13 = &DAT_100fa8840;
  FUN_1000037f0(&DAT_100fa8840,&DAT_100c237d0);
  *(undefined **)(puVar11 + 0xb0) = puVar13;
  *(undefined ***)(puVar11 + 0xb8) = &PTR_PTR_100ec00b8;
  *(undefined8 *)(puVar11 + 0x98) = uVar7;
  *(undefined8 *)(puVar11 + 0xd8) = uVar12;
  *(undefined ***)(puVar11 + 0xe0) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar11 + 0xc0) = IVar6;
  *(undefined8 *)(puVar11 + 0x100) = uVar12;
  *(undefined ***)(puVar11 + 0x108) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar11 + 0xe8) = IVar8;
  *(undefined8 *)(puVar11 + 0x128) = uVar12;
  *(undefined ***)(puVar11 + 0x130) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar11 + 0x110) = IVar9;
  _swift_bridgeObjectRetain();
  puVar14 = puVar11;
  FUN_1001f8d60(puVar11);
  _swift_bridgeObjectRelease(uVar7);
  _swift_setDeallocating(puVar11);
  uVar7 = *(undefined8 *)(puVar11 + 0x10);
  puVar13 = &DAT_100fa6bc0;
  FUN_1000037f0(&DAT_100fa6bc0,&DAT_100c24a30);
  _swift_arrayDestroy(puVar11 + 0x20,uVar7,puVar13);
  return puVar14;
}



/* Address: 0x1000428f8 | _TtCC5Paste11SearchField9InputView::initWithFrame: */

/* Function Stack Size: 0x30 bytes */

ID _TtCC5Paste11SearchField9InputView::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  FUN_100044728(param_1,param_2,0x1f,FUN_10004223c,param_3.field1_0x10.field0_0x0,
                param_3.field1_0x10.field1_0x8);
  return param_1;
}



/* Address: 0x100042908 | _TtCC5Paste11SearchField9InputView::initWithCoder: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtCC5Paste11SearchField9InputView::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  char *pcVar5;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  pcVar5 = (char *)UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar5 & 1) == 0) {
    pcVar5 = "Paste/SearchField.InputView.swift";
    _swift_task_reportUnexpectedExecutor
              ("Paste/SearchField.InputView.swift",0x21,1,0x37,UVar4.unknown,puVar3);
  }
  FUN_10004493c();
  _swift_release(pMVar2);
  return (ID)pcVar5;
}



/* Address: 0x1000429d0 | FUN_1000429d0 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

code * FUN_1000429d0(void)

{
  ID self;
  ID IVar1;
  code *pcVar2;
  ID unaff_x20;
  undefined8 uVar3;
  
  self = objc_stub::window(unaff_x20);
  if (self != 0) {
    IVar1 = self;
    FUN_100041f9c();
    objc_stub::makeFirstResponder_(self,IVar1);
  }
  pcVar2 = *(code **)(unaff_x20 + _TtCC5Paste11SearchField9InputView::onClear);
  if (pcVar2 != (code *)0x0) {
    uVar3 = ((undefined8 *)(unaff_x20 + _TtCC5Paste11SearchField9InputView::onClear))[1];
    _swift_retain(uVar3);
    (*pcVar2)();
    FUN_100004550(pcVar2,uVar3);
    return pcVar2;
  }
  return (code *)0x0;
}



/* Address: 0x100042a68 | _TtCC5Paste11SearchField9InputView::clear */

/* Function Stack Size: 0x10 bytes */

int _TtCC5Paste11SearchField9InputView::clear(void)

{
  int in_w0;
  undefined8 in_x1;
  
  FUN_100043508(in_w0,in_x1,0x3b,FUN_1000429d0);
  return in_w0;
}



/* Address: 0x100042a78 | _TtCC5Paste11SearchField9InputView::textStorage:didProcessEditing:range:changeInLength: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x38 bytes */

void _TtCC5Paste11SearchField9InputView::textStorage_didProcessEditing_range_changeInLength_
               (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4,_NSRange param_5,
               long_long param_6)

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
    _swift_task_reportUnexpectedExecutor
              ("Paste/SearchField.InputView.swift",0x21,1,0x40,UVar4.unknown,puVar3);
  }
  FUN_1000449e8(param_1);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x100042b50 | FUN_100042b50 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100042b50(ID param_1)

{
  ulong uVar1;
  void *self;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  void *pvVar5;
  long unaff_x20;
  String SVar6;
  undefined1 auStack_60 [16];
  
  FUN_100041f9c();
  objc_stub::string(param_1);
  SVar6 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pvVar5 = SVar6.bridgeObject;
  self = pvVar5;
  _swift_bridgeObjectRelease();
  uVar1 = (ulong)SVar6.str & 0xffffffffffff;
  if (((ulong)pvVar5 & 0x2000000000000000) != 0) {
    uVar1 = (ulong)pvVar5 >> 0x38 & 0xf;
  }
  if ((bool)*(char *)(unaff_x20 + _TtCC5Paste11SearchField9InputView::isClearButtonVisible) !=
      (uVar1 != 0)) {
    *(bool *)(unaff_x20 + _TtCC5Paste11SearchField9InputView::isClearButtonVisible) = uVar1 != 0;
    FUN_100042090();
    objc_stub::setEnabled_((ID)self,(ulong)(uVar1 != 0));
    if (uVar1 == 0) {
      FUN_10000ec2c(0,&DAT_100fa6b90,&PTR__OBJC_CLASS___NSView_100f8d628);
      puVar3 = &DAT_100eb1ad0;
      _swift_allocObject(&DAT_100eb1ad0,0x18,7);
      _swift_unknownObjectWeakInit(puVar3 + 0x10);
      FUN_10000ec2c(0,&DAT_100faa320,&PTR__OBJC_CLASS___CAMediaTimingFunction_100f8d668);
      puVar4 = puVar3;
      _swift_retain(puVar3);
      FUN_10021ccd4();
      FUN_10021cadc(0x3fbeb851eb851eb8,0,puVar4,1,FUN_100044ca4,auStack_60,FUN_100044cd0,puVar3);
      _swift_release_n(puVar3,2);
    }
    else {
      objc_stub::setHidden_
                (*(ID *)(unaff_x20 +
                        _TtCC5Paste11SearchField9InputView::___lazy_storage___clearButton),0);
      FUN_10000ec2c(0,&DAT_100fa6b90,&PTR__OBJC_CLASS___NSView_100f8d628);
      uVar2 = 0;
      FUN_10000ec2c(0,&DAT_100faa320,&PTR__OBJC_CLASS___CAMediaTimingFunction_100f8d668);
      FUN_10021ccd4();
      FUN_10021cadc(0x3fbeb851eb851eb8,0,uVar2,1,FUN_100044c9c,auStack_60,0,0);
    }
  }
  return;
}


