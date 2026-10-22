/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10000df98 | FUN_10000df98 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10000df98(long param_1)

{
  long lVar1;
  NSArray *pNVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [16];
  long local_50;
  undefined1 local_48;
  
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  lVar1 = _TtC5Paste7Toolbar::activeSearchConstraints;
  if (param_1 != 0) {
    uVar4 = *(undefined8 *)(param_1 + _TtC5Paste7Toolbar::activeSearchConstraints);
    FUN_10000ec2c(0,&DAT_100fa86a0,&PTR__OBJC_CLASS___NSLayoutConstraint_100f8d660);
    _swift_bridgeObjectRetain(uVar4);
    pNVar2 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(uVar4);
    NSLayoutConstraint::deactivateConstraints_((ID)&_OBJC_CLASS___NSLayoutConstraint,pNVar2);
    pcVar3 = FUN_10000ecc4;
    local_50 = param_1;
    FUN_1001f960c(FUN_10000ecc4,auStack_60);
    uVar4 = *(undefined8 *)(param_1 + lVar1);
    *(code **)(param_1 + lVar1) = pcVar3;
    _swift_bridgeObjectRelease(uVar4);
    FUN_10000ec2c(0,&DAT_100fa6b90,&PTR__OBJC_CLASS___NSView_100f8d628);
    local_48 = 1;
    uVar4 = 0;
    local_50 = param_1;
    FUN_10000ec2c(0,&DAT_100faa320,&PTR__OBJC_CLASS___CAMediaTimingFunction_100f8d668);
    FUN_10021ccd4();
    FUN_10021cadc(0,1,uVar4,1,thunk_FUN_10000ec20,auStack_60,0,0);
  }
  return;
}



/* Address: 0x10000e0ec | FUN_10000e0ec */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10000e0ec(long param_1)

{
  NSArray *pNVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [16];
  long local_40;
  undefined1 local_38;
  
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + _TtC5Paste7Toolbar::activeSearchConstraints);
    FUN_10000ec2c(0,&DAT_100fa86a0,&PTR__OBJC_CLASS___NSLayoutConstraint_100f8d660);
    _swift_bridgeObjectRetain(uVar2);
    pNVar1 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(uVar2);
    NSLayoutConstraint::deactivateConstraints_((ID)&_OBJC_CLASS___NSLayoutConstraint,pNVar1);
    FUN_10000ec2c(0,&DAT_100fa6b90,&PTR__OBJC_CLASS___NSView_100f8d628);
    local_38 = 0;
    uVar2 = 0;
    local_40 = param_1;
    FUN_10000ec2c(0,&DAT_100faa320,&PTR__OBJC_CLASS___CAMediaTimingFunction_100f8d668);
    FUN_10021ccd4();
    FUN_10021cadc(0,1,uVar2,1,thunk_FUN_10000ec20,auStack_50,0,0);
  }
  return;
}



/* Address: 0x10000e210 | FUN_10000e210 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10000e210(long param_1)

{
  ID IVar1;
  
  IVar1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (IVar1 != 0) {
    IVar1 = objc_stub::window(IVar1);
    if (IVar1 != 0) {
      objc_stub::makeFirstResponder_(IVar1,0);
      return 0;
    }
  }
  return 0;
}



/* Address: 0x10000e270 | FUN_10000e270 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1 FUN_10000e270(long param_1)

{
  undefined1 uVar1;
  
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    FUN_10000cd7c();
    uVar1 = *(undefined1 *)(param_1 + _TtC5Paste9SearchBar::isActive);
  }
  return uVar1;
}



/* Address: 0x10000e2d4 | FUN_10000e2d4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

MainActor * FUN_10000e2d4(undefined8 param_1,long param_2)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  long lVar5;
  NSArray *pNVar6;
  undefined8 uVar7;
  undefined1 auStack_60 [16];
  long local_50;
  undefined1 local_48;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1000081a8();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor("Paste/Toolbar.swift",0x13,1,0x3f,UVar3.unknown,pMVar1);
  }
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 != 0) {
    lVar5 = param_2;
    FUN_10000cd7c();
    if ((*(byte *)(lVar5 + _TtC5Paste9SearchBar::isActive) & 1) != 0) {
      uVar7 = *(undefined8 *)(param_2 + _TtC5Paste7Toolbar::activeSearchConstraints);
      FUN_10000ec2c(0,&DAT_100fa86a0,&PTR__OBJC_CLASS___NSLayoutConstraint_100f8d660);
      _swift_bridgeObjectRetain(uVar7);
      pNVar6 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(uVar7);
      NSLayoutConstraint::deactivateConstraints_((ID)&_OBJC_CLASS___NSLayoutConstraint,pNVar6);
      FUN_10000ec2c(0,&DAT_100fa6b90,&PTR__OBJC_CLASS___NSView_100f8d628);
      local_48 = 0;
      uVar7 = 0;
      local_50 = param_2;
      FUN_10000ec2c(0,&DAT_100faa320,&PTR__OBJC_CLASS___CAMediaTimingFunction_100f8d668);
      FUN_10021ccd4();
      FUN_10021cadc(0,1,uVar7,1,thunk_FUN_10000ec20,auStack_60,0,0);
      _swift_release(pMVar2);
      return (MainActor *)0x0;
    }
    _swift_release(pMVar2);
    return (MainActor *)0x0;
  }
  _swift_release(pMVar2);
  return pMVar2;
}



/* Address: 0x10000e4c8 | FUN_10000e4c8 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_10000e4c8(ID param_1)

{
  long lVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  IVar2 = param_1;
  FUN_10000cd7c();
  IVar2 = objc_stub::centerXAnchor(IVar2);
  IVar3 = objc_stub::centerXAnchor(param_1);
  IVar3 = objc_stub::constraintEqualToAnchor_(IVar2,IVar3);
  lVar1 = _TtC5Paste7Toolbar::___lazy_storage___searchBar;
  IVar2 = objc_stub::widthAnchor(*(ID *)(param_1 + _TtC5Paste7Toolbar::___lazy_storage___searchBar))
  ;
  IVar4 = objc_stub::constraintGreaterThanOrEqualToConstant_(IVar2,0x4079000000000000);
  IVar2 = objc_stub::widthAnchor(*(ID *)(param_1 + lVar1));
  IVar5 = objc_stub::widthAnchor(param_1);
  IVar5 = objc_stub::constraintGreaterThanOrEqualToAnchor_multiplier_
                    (IVar2,0x3fd0000000000000,IVar5);
  IVar2 = IVar5;
  FUN_10000ce94();
  IVar2 = objc_stub::trailingAnchor(IVar2);
  IVar6 = 0;
  FUN_10000ce08();
  IVar6 = objc_stub::trailingAnchor(IVar6);
  IVar2 = objc_stub::constraintEqualToAnchor_(IVar2,IVar6);
  puVar7 = &DAT_100fa8830;
  FUN_1000037f0(&DAT_100fa8830,&DAT_100c24a20);
  _swift_initStackObject();
  *(undefined8 *)(puVar7 + 0x18) = 8;
  *(undefined8 *)(puVar7 + 0x10) = 4;
  uVar8 = 0;
  FUN_10000ec2c(0,&DAT_100fa86a0,&PTR__OBJC_CLASS___NSLayoutConstraint_100f8d660);
  *(undefined8 *)(puVar7 + 0x38) = uVar8;
  *(undefined ***)(puVar7 + 0x40) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar7 + 0x20) = IVar3;
  *(undefined8 *)(puVar7 + 0x60) = uVar8;
  *(undefined ***)(puVar7 + 0x68) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar7 + 0x48) = IVar4;
  *(undefined8 *)(puVar7 + 0x88) = uVar8;
  *(undefined ***)(puVar7 + 0x90) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar7 + 0x70) = IVar5;
  *(undefined8 *)(puVar7 + 0xb0) = uVar8;
  *(undefined ***)(puVar7 + 0xb8) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar7 + 0x98) = IVar2;
  puVar9 = puVar7;
  FUN_1001f8d60(puVar7);
  _swift_setDeallocating(puVar7);
  uVar8 = *(undefined8 *)(puVar7 + 0x10);
  puVar10 = &DAT_100fa6bc0;
  FUN_1000037f0(&DAT_100fa6bc0,&DAT_100c24a30);
  _swift_arrayDestroy(puVar7 + 0x20,uVar8,puVar10);
  return puVar9;
}



/* Address: 0x10000e74c | FUN_10000e74c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10000e74c(ID param_1,uint param_2)

{
  long lVar1;
  ID IVar2;
  
  IVar2 = param_1;
  FUN_10000cd7c();
  *(char *)(IVar2 + _TtC5Paste9SearchBar::isActive) = (char)param_2;
  FUN_10003e350();
  lVar1 = 0;
  FUN_10000ce08();
  *(char *)(lVar1 + _TtC5Paste6TabBar::isCollapsed) = (char)param_2;
  FUN_100095228();
  IVar2 = 0;
  FUN_10000ce94();
  objc_stub::setHidden_(IVar2,(ulong)(param_2 & 1));
  objc_stub::layoutSubtreeIfNeeded(param_1);
  return;
}



/* Address: 0x10000e7e4 | _TtC5Paste7Toolbar::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC5Paste7Toolbar::init(ID param_1,SEL param_2)

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
    _swift_task_reportUnexpectedExecutor("Paste/Toolbar.swift",0x13,1,7,UVar3.unknown,pMVar2);
  }
  __swift_stdlib_reportUnimplementedInitializer("Paste.Toolbar",0xd,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10000e86c);
  (*pcVar1)();
}



/* Address: 0x10000e86c | _TtC5Paste7Toolbar::initWithFrame: */

/* Function Stack Size: 0x30 bytes */

ID _TtC5Paste7Toolbar::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

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
    _swift_task_reportUnexpectedExecutor("Paste/Toolbar.swift",0x13,1,7,UVar3.unknown,pMVar2);
  }
  __swift_stdlib_reportUnimplementedInitializer("Paste.Toolbar",0xd,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10000e8f4);
  (*pcVar1)();
}



/* Address: 0x10000e8f4 | FUN_10000e8f4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10000e8f4(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + _TtC5Paste7Toolbar::viewModel));
  _swift_bridgeObjectRelease
            (*(undefined8 *)(unaff_x20 + _TtC5Paste7Toolbar::activeSearchConstraints));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + _TtC5Paste7Toolbar::cancellables));
  return;
}



/* Address: 0x10000e980 | FUN_10000e980 */

void FUN_10000e980(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"dealloc");
  return;
}



/* Address: 0x10000e9b4 | _TtC5Paste7Toolbar::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC5Paste7Toolbar::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_release(*(undefined8 *)(param_1 + viewModel));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + activeSearchConstraints));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + cancellables));
  return;
}



/* Address: 0x10000ea4c | FUN_10000ea4c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10000ea4c(void)

{
  return ZEXT816(0x100f8ef70);
}



/* Address: 0x10000ea6c | _TtC5Paste7Toolbar::confinementRectForMenu:onScreen: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

CGRect _TtC5Paste7Toolbar::confinementRectForMenu_onScreen_
                 (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  ID self;
  double extraout_d0;
  double extraout_d0_00;
  double in_d1;
  undefined8 in_d2;
  double in_d3;
  double dVar5;
  double dVar6;
  double dVar7;
  CGRect CVar8;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1000081a8();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor("Paste/Toolbar.swift",0x13,1,0x74,UVar3.unknown,pMVar1);
  }
  if (param_4 == 0) {
    _swift_release(pMVar2);
    dVar6 = 0.0;
    in_d1 = 0.0;
    dVar7 = 0.0;
    in_d3 = 0.0;
  }
  else {
    self = objc_stub::frame(param_4);
    dVar6 = in_d1;
    dVar5 = in_d3;
    FUN_10000d050();
    objc_stub::frame(self);
    dVar7 = extraout_d0_00;
    _CGRectGetMaxX(extraout_d0_00,dVar6,in_d2,dVar5,0);
    _swift_release(pMVar2);
    dVar6 = extraout_d0;
  }
  CVar8.field0_0x0.field1_0x8 = in_d1;
  CVar8.field0_0x0.field0_0x0 = dVar6;
  CVar8.field1_0x10.field1_0x8 = in_d3;
  CVar8.field1_0x10.field0_0x0 = dVar7;
  return CVar8;
}



/* Address: 0x10000ebd4 | FUN_10000ebd4 */

void FUN_10000ebd4(void)

{
  long unaff_x20;
  
  FUN_10000d884(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x10000ebdc | FUN_10000ebdc */

void FUN_10000ebdc(void)

{
  long unaff_x20;
  
  _swift_unknownObjectWeakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x10000ec00 | FUN_10000ec00 */

void FUN_10000ec00(void)

{
  FUN_10000df98();
  return;
}



/* Address: 0x10000ec08 | FUN_10000ec08 */

void FUN_10000ec08(void)

{
  FUN_10000e0ec();
  return;
}



/* Address: 0x10000ec10 | FUN_10000ec10 */

void FUN_10000ec10(void)

{
  FUN_10000e210();
  return;
}



/* Address: 0x10000ec18 | FUN_10000ec18 */

void FUN_10000ec18(void)

{
  FUN_10000e270();
  return;
}



/* Address: 0x10000ec20 | FUN_10000ec20 */

void FUN_10000ec20(void)

{
  long unaff_x20;
  
  FUN_10000e74c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined1 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x10000ec2c | FUN_10000ec2c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_10000ec2c(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  _swift_getObjCClassMetadata();
  *param_2 = lVar1;
  return;
}



/* Address: 0x10000ec6c | FUN_10000ec6c */

void FUN_10000ec6c(void)

{
  FUN_10000e2d4();
  return;
}



/* Address: 0x10000ec74 | FUN_10000ec74 */

void FUN_10000ec74(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fa6ba8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fa6b78;
  FUN_100005c24(&DAT_100fa6b78,&DAT_100c236a0);
  puVar2 = PTR__Combine__Publisher_>Combine__Publisher_100ea98d0;
  _swift_getWitnessTable(PTR__Combine__Publisher_>Combine__Publisher_100ea98d0,puVar1);
  DAT_100fa6ba8 = puVar2;
  return;
}



/* Address: 0x10000ecc4 | FUN_10000ecc4 */

void FUN_10000ecc4(void)

{
  long unaff_x20;
  
  FUN_10000e4c8(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x10000eccc | FUN_10000eccc */

void FUN_10000eccc(void)

{
  FUN_10000d144();
  return;
}



/* Address: 0x10000ecd4 | FUN_10000ecd4 */

void FUN_10000ecd4(void)

{
  FUN_10000cff0();
  return;
}



/* Address: 0x10000ecdc | thunk_FUN_10000ec20 */

void thunk_FUN_10000ec20(void)

{
  long unaff_x20;
  
  FUN_10000e74c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined1 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x10000ece0 | FUN_10000ece0 */

undefined1 FUN_10000ece0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 local_31;
  
  puVar1 = &DAT_100c23768;
  _swift_getKeyPath(&DAT_100c23768);
  puVar2 = &DAT_100c23790;
  _swift_getKeyPath(&DAT_100c23790);
  Invalidating::_get_subscript(&local_31);
  _swift_release(puVar1);
  _swift_release(puVar2);
  return local_31;
}



/* Address: 0x10000ed50 | FUN_10000ed50 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10000ed50(void)

{
  long lVar1;
  ID self;
  NSString *pNVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  lVar1 = _TtC5Paste19FilterSuggestionRow::___lazy_storage___titleLabel;
  self = *(ID *)(unaff_x20 + _TtC5Paste19FilterSuggestionRow::___lazy_storage___titleLabel);
  if (self == 0) {
    pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    self = NSTextField::labelWithString_((ID)&_OBJC_CLASS___NSTextField,pNVar2);
    NSTextField::setLineBreakMode_(self,4);
    NSTextField::setMaximumNumberOfLines_(self,1);
    uVar3 = 0;
    FUN_10000ec2c(0,&DAT_100fa6c38,&PTR__OBJC_CLASS___NSFont_100f8d678);
    FUN_1001ff928();
    NSTextField::setFont_(self,uVar3);
    *(ID *)(unaff_x20 + lVar1) = self;
  }
  return self;
}



/* Address: 0x10000ee38 | FUN_10000ee38 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10000ee38(void)

{
  long lVar1;
  ID self;
  undefined *self_00;
  long unaff_x20;
  long lVar2;
  
  lVar1 = _TtC5Paste19FilterSuggestionRow::___lazy_storage___iconView;
  self = *(ID *)(unaff_x20 + _TtC5Paste19FilterSuggestionRow::___lazy_storage___iconView);
  if (self == 0) {
    self_00 = &_OBJC_CLASS___NSImageView;
    _objc_allocWithZone();
    self = objc_stub::init((ID)self_00);
    objc_stub::setImageScaling_(self,0);
    lVar2 = *(long *)(unaff_x20 + _TtC5Paste19FilterSuggestionRow::item);
    objc_stub::setImage_(self,lVar2);
    objc_stub::setHidden_(self,(ulong)(lVar2 == 0));
    *(ID *)(unaff_x20 + lVar1) = self;
  }
  return self;
}



/* Address: 0x10000eedc | FUN_10000eedc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10000eedc(void)

{
  long lVar1;
  ID self;
  undefined *self_00;
  long unaff_x20;
  
  lVar1 = _TtC5Paste19FilterSuggestionRow::___lazy_storage___stackView;
  self = *(ID *)(unaff_x20 + _TtC5Paste19FilterSuggestionRow::___lazy_storage___stackView);
  if (self == 0) {
    self_00 = &_OBJC_CLASS___NSStackView;
    _objc_allocWithZone();
    self = objc_stub::init((ID)self_00);
    objc_stub::setOrientation_(self,0);
    objc_stub::setAlignment_(self,10);
    objc_stub::setSpacing_(self,0x401c000000000000);
    *(ID *)(unaff_x20 + lVar1) = self;
  }
  return self;
}



/* Address: 0x10000ef70 | FUN_10000ef70 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010000f054 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ID FUN_10000ef70(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  Layout LVar3;
  undefined *puVar4;
  ID self;
  undefined *puVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 uVar7;
  long unaff_x20;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 local_f0 [16];
  ID local_e0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_68;
  
  _swift_getObjectType();
  LVar3 = (extension_AppKit)::__C::NSView::Invalidations::Layout::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar3.cellCount + -8) + 0x40))
  ;
  puVar4 = &DAT_100fa6c40;
  FUN_1000037f0(&DAT_100fa6c40,&DAT_100c23748);
  lVar9 = *(long *)(puVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = _TtC5Paste19FilterSuggestionRow::_isSelected;
  lVar8 = (long)(local_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
  local_f0[0] = 0;
  (extension_AppKit)::__C::NSView::Invalidations::Layout::init();
  Invalidating::_init(lVar8,puVar4,local_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                      PTR___type_metadata_for_Swift_Bool_100eac570,LVar3.cellCount,
                      PTR___protocol_witness_table_for_Swift_Bool___Swift_Equatable_in_Swift_100eac588
                      ,
                      PTR___protocol_witness_table_for__extension_in_AppKit____C_NSView_Invalidations_Layout___AppKit_NSViewInvalidating_in_AppKit_100ea8ed8
                     );
  (**(code **)(lVar9 + 0x20))(unaff_x20 + lVar2,lVar8,puVar4);
  puVar1 = (undefined8 *)(unaff_x20 + _TtC5Paste19FilterSuggestionRow::onMouseEntered);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC5Paste19FilterSuggestionRow::onMouseExited);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _TtC5Paste19FilterSuggestionRow::trackingArea) = 0;
  *(undefined8 *)(unaff_x20 + _TtC5Paste19FilterSuggestionRow::___lazy_storage___iconView) = 0;
  *(undefined8 *)(unaff_x20 + _TtC5Paste19FilterSuggestionRow::___lazy_storage___titleLabel) = 0;
  *(undefined8 *)(unaff_x20 + _TtC5Paste19FilterSuggestionRow::___lazy_storage___stackView) = 0;
  local_68 = *param_1;
  uStack_78 = param_1[2];
  uStack_80 = param_1[1];
  uStack_88 = param_1[4];
  local_90 = param_1[3];
  uVar7 = param_1[6];
  puVar1 = (undefined8 *)(unaff_x20 + _TtC5Paste19FilterSuggestionRow::item);
  uVar6 = *param_1;
  uVar11 = param_1[3];
  uVar10 = param_1[2];
  puVar1[1] = param_1[1];
  *puVar1 = uVar6;
  puVar1[3] = uVar11;
  puVar1[2] = uVar10;
  uVar6 = param_1[4];
  puVar1[5] = param_1[5];
  puVar1[4] = uVar6;
  puVar1[6] = param_1[6];
  FUN_100011090(&local_68,local_f0,&DAT_100fa6c48,&DAT_100c23750);
  FUN_10000ca28(&uStack_80,local_f0);
  FUN_100011090(&local_90,local_f0,&DAT_100fa8170,&DAT_100c24ca0);
  _swift_retain(uVar7);
  self = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff60,"initWithFrame:",0,0,0,0);
  FUN_10000eedc();
  puVar4 = &DAT_100fa6b80;
  FUN_1000037f0(&DAT_100fa6b80,&DAT_100c23760);
  _swift_initStackObject();
  *(undefined8 *)(puVar4 + 0x18) = 5;
  *(undefined8 *)(puVar4 + 0x10) = 2;
  puVar5 = puVar4;
  FUN_10000ee38();
  *(undefined **)(puVar4 + 0x20) = puVar5;
  FUN_10000ed50();
  *(undefined **)(puVar4 + 0x28) = puVar5;
  FUN_100201b9c(puVar4);
  _swift_setDeallocating(puVar4);
  _swift_arrayDestroy(puVar4 + 0x20,*(undefined8 *)(puVar4 + 0x10),
                      PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8);
  uVar6 = *(undefined8 *)(self + _TtC5Paste19FilterSuggestionRow::___lazy_storage___stackView);
  local_e0 = self;
  FUN_1001fa09c(uVar6,FUN_1000102a4,local_f0);
  _swift_bridgeObjectRelease(uVar6);
  objc_stub::setCornerRadius_curve_
            (self,0x401c000000000000,*(undefined8 *)PTR__kCACornerCurveContinuous_100eaa3a0);
  FUN_10000f460();
  FUN_100005808(&local_68,&DAT_100fa6c48,&DAT_100c23750);
  FUN_10000caac(&uStack_80);
  FUN_100005808(&local_90,&DAT_100fa8170,&DAT_100c24ca0);
  _swift_release(uVar7);
  return self;
}



/* Address: 0x10000f2c4 | FUN_10000f2c4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_10000f2c4(undefined8 ***param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  undefined8 uVar3;
  undefined8 ****ppppuVar4;
  undefined8 ****ppppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 ***local_70 [3];
  undefined8 **local_58;
  undefined **ppuStack_50;
  undefined8 **local_48;
  
  pppuVar1 = param_1;
  _swift_getObjectType();
  pppuVar2 = pppuVar1;
  FUN_10000eedc();
  ppuStack_50 = &PTR_PTR_100ec00e8;
  uVar3 = 0;
  local_70[0] = param_1;
  local_58 = pppuVar1;
  local_48 = pppuVar2;
  FUN_10000ec2c(0,&DAT_100fa6c68,&PTR__OBJC_CLASS___NSStackView_100f8d698);
  ppppuVar4 = local_70;
  FUN_1001f97b4(0x4008000000000000,0x4020000000000000,0x4008000000000000,0x4020000000000000,
                ppppuVar4,uVar3,&PTR_PTR_100ec00e8);
  ppppuVar5 = local_70;
  FUN_100004594();
  FUN_10000ee38();
  uVar3 = 0;
  local_70[0] = ppppuVar5;
  FUN_10000ec2c(0,&DAT_100fa8850,&PTR__OBJC_CLASS___NSImageView_100f8d6a0);
  FUN_1001f9e3c(0x4032000000000000,0x4032000000000000);
  puVar6 = &DAT_100fa8830;
  FUN_1000037f0(&DAT_100fa8830,&DAT_100c24a20);
  _swift_initStackObject();
  *(undefined8 *)(puVar6 + 0x18) = 4;
  *(undefined8 *)(puVar6 + 0x10) = 2;
  puVar7 = &DAT_100fa8840;
  FUN_1000037f0(&DAT_100fa8840,&DAT_100c237d0);
  *(undefined **)(puVar6 + 0x38) = puVar7;
  *(undefined ***)(puVar6 + 0x40) = &PTR_PTR_100ec00b8;
  *(undefined8 *****)(puVar6 + 0x20) = ppppuVar4;
  *(undefined **)(puVar6 + 0x60) = puVar7;
  *(undefined ***)(puVar6 + 0x68) = &PTR_PTR_100ec00b8;
  *(undefined8 *)(puVar6 + 0x48) = uVar3;
  puVar8 = puVar6;
  FUN_1001f8d60(puVar6);
  _swift_setDeallocating(puVar6);
  uVar3 = *(undefined8 *)(puVar6 + 0x10);
  puVar7 = &DAT_100fa6bc0;
  FUN_1000037f0(&DAT_100fa6bc0,&DAT_100c24a30);
  _swift_arrayDestroy(puVar6 + 0x20,uVar3,puVar7);
  return puVar8;
}



/* Address: 0x10000f460 | FUN_10000f460 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10000f460(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ID *pIVar7;
  ID IVar8;
  ID IVar9;
  undefined *puVar10;
  ID IVar11;
  long unaff_x20;
  char local_64;
  char local_63;
  char local_62;
  char local_61;
  
  puVar6 = &DAT_100c23768;
  _swift_getKeyPath(&DAT_100c23768);
  pIVar7 = (ID *)&DAT_100c23790;
  _swift_getKeyPath();
  Invalidating::_get_subscript(&local_61);
  _swift_release(puVar6);
  _swift_release();
  if (local_61 == '\x01') {
    FUN_100218d58();
    IVar8 = *pIVar7;
  }
  else {
    IVar8 = NSColor::clearColor((ID)&_OBJC_CLASS___NSColor);
  }
  FUN_1002356a8();
  FUN_10000ee38();
  puVar6 = &DAT_100c23768;
  _swift_getKeyPath(&DAT_100c23768);
  pIVar7 = (ID *)&DAT_100c23790;
  _swift_getKeyPath();
  Invalidating::_get_subscript(&local_62);
  _swift_release(puVar6);
  _swift_release();
  if (local_62 == '\x01') {
    IVar9 = NSColor::whiteColor((ID)&_OBJC_CLASS___NSColor);
  }
  else {
    FUN_1001fe15c();
    IVar9 = *pIVar7;
  }
  objc_stub::setContentTintColor_(IVar8,IVar9);
  IVar8 = 0;
  FUN_10000ed50();
  lVar1 = unaff_x20 + _TtC5Paste19FilterSuggestionRow::item;
  uVar2 = *(undefined8 *)(lVar1 + 8);
  uVar4 = *(undefined8 *)(lVar1 + 0x10);
  uVar3 = *(undefined8 *)(lVar1 + 0x18);
  uVar5 = *(undefined8 *)(lVar1 + 0x20);
  puVar6 = &DAT_100c23768;
  _swift_getKeyPath(&DAT_100c23768);
  pIVar7 = (ID *)&DAT_100c23790;
  _swift_getKeyPath();
  Invalidating::_get_subscript(&local_63);
  _swift_release(puVar6);
  _swift_release();
  if (local_63 == '\x01') {
    IVar9 = NSColor::whiteColor((ID)&_OBJC_CLASS___NSColor);
  }
  else {
    FUN_1001fe15c();
    IVar9 = *pIVar7;
  }
  puVar6 = &DAT_100c23768;
  _swift_getKeyPath(&DAT_100c23768);
  puVar10 = &DAT_100c23790;
  _swift_getKeyPath(&DAT_100c23790);
  Invalidating::_get_subscript(&local_64);
  _swift_release(puVar6);
  _swift_release(puVar10);
  if (local_64 == '\x01') {
    IVar11 = NSColor::whiteColor((ID)&_OBJC_CLASS___NSColor);
    IVar11 = NSColor::colorWithAlphaComponent_(IVar11,0x3fe3333333333333);
  }
  else {
    IVar11 = NSColor::secondaryLabelColor((ID)&_OBJC_CLASS___NSColor);
  }
  FUN_100010984(IVar9,IVar11,uVar2,uVar4,uVar3,uVar5);
  objc_stub::setAttributedStringValue_(IVar8,IVar9);
  return 0;
}



/* Address: 0x10000f738 | _TtC5Paste19FilterSuggestionRow::layout */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC5Paste19FilterSuggestionRow::layout(ID param_1,SEL param_2)

{
  undefined *puVar1;
  class_t *pcVar2;
  MainActor *pMVar3;
  undefined8 *puVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  objc_super local_50;
  
  pcVar2 = (class_t *)param_1;
  _swift_getObjectType();
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  puVar4 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar5 = Swift::Actor::get_unownedExecutor();
  UVar6 = UVar5;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar6.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/FilterSuggestionRow.swift",0x1f,1,0x3f,UVar5.unknown,puVar4);
  }
  local_50.receiver = param_1;
  local_50.super_class = pcVar2;
  _objc_msgSendSuper2(&local_50,"layout");
  FUN_10000f460();
  _swift_release(pMVar3);
  return;
}



/* Address: 0x10000f828 | FUN_10000f828 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
FUN_10000f828(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *self;
  ID IVar2;
  ID unaff_x20;
  undefined8 extraout_d0;
  
  _swift_getObjectType();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffa0,"updateTrackingAreas");
  lVar1 = _TtC5Paste19FilterSuggestionRow::trackingArea;
  if (*(long *)(unaff_x20 + _TtC5Paste19FilterSuggestionRow::trackingArea) != 0) {
    objc_stub::removeTrackingArea_(unaff_x20);
  }
  objc_stub::bounds(unaff_x20);
  self = &_OBJC_CLASS___NSTrackingArea;
  _objc_allocWithZone();
  IVar2 = objc_stub::initWithRect_options_owner_userInfo_
                    ((ID)self,extraout_d0,param_2,param_3,param_4,0x81);
  *(ID *)(unaff_x20 + lVar1) = IVar2;
  if (IVar2 != 0) {
    objc_stub::addTrackingArea_(unaff_x20,IVar2);
  }
  return 0;
}



/* Address: 0x10000f908 | _TtC5Paste19FilterSuggestionRow::updateTrackingAreas */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC5Paste19FilterSuggestionRow::updateTrackingAreas(ID param_1,SEL param_2)

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
              ("Paste/FilterSuggestionRow.swift",0x1f,1,0x4e,UVar4.unknown,puVar3);
  }
  FUN_10000f828(param_1);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x10000f9c8 | _TtC5Paste19FilterSuggestionRow::mouseEntered: */

/* Function Stack Size: 0x18 bytes */

void _TtC5Paste19FilterSuggestionRow::mouseEntered_(ID param_1,SEL param_2,ID param_3)

{
  FUN_10000f9e8();
  return;
}



/* Address: 0x10000f9d8 | _TtC5Paste19FilterSuggestionRow::mouseExited: */

/* Function Stack Size: 0x18 bytes */

void _TtC5Paste19FilterSuggestionRow::mouseExited_(ID param_1,SEL param_2,ID param_3)

{
  FUN_10000f9e8();
  return;
}



/* Address: 0x10000f9e8 | FUN_10000f9e8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10000f9e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  undefined8 uVar6;
  code *pcVar7;
  
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
              ("Paste/FilterSuggestionRow.swift",0x1f,1,param_4,UVar4.unknown,puVar3);
  }
  pcVar7 = *(code **)(param_1 + *param_5);
  if (pcVar7 != (code *)0x0) {
    uVar6 = ((undefined8 *)(param_1 + *param_5))[1];
    FUN_100011128(pcVar7,uVar6);
    (*pcVar7)();
    FUN_100004550(pcVar7,uVar6);
  }
  _swift_release(pMVar2);
  return;
}



/* Address: 0x10000fae4 | _TtC5Paste19FilterSuggestionRow::mouseDown: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC5Paste19FilterSuggestionRow::mouseDown_(ID param_1,SEL param_2,ID param_3)

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
              ("Paste/FilterSuggestionRow.swift",0x1f,1,0x65,UVar4.unknown,puVar3);
  }
  (**(code **)(param_1 + item + 0x28))(param_1);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x10000fbb4 | _TtC5Paste19FilterSuggestionRow::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC5Paste19FilterSuggestionRow::init(ID param_1,SEL param_2)

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
    _swift_task_reportUnexpectedExecutor
              ("Paste/FilterSuggestionRow.swift",0x1f,1,0xc,UVar4.unknown,puVar3);
  }
  __swift_stdlib_reportUnimplementedInitializer("Paste.FilterSuggestionRow",0x19,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10000fc5c);
  (*pcVar2)();
}



/* Address: 0x10000fc5c | _TtC5Paste19FilterSuggestionRow::initWithFrame: */

/* Function Stack Size: 0x30 bytes */

ID _TtC5Paste19FilterSuggestionRow::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

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
    _swift_task_reportUnexpectedExecutor
              ("Paste/FilterSuggestionRow.swift",0x1f,1,0xc,UVar4.unknown,puVar3);
  }
  __swift_stdlib_reportUnimplementedInitializer
            ("Paste.FilterSuggestionRow",0x19,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10000fd04);
  (*pcVar2)();
}



/* Address: 0x10000fd04 | FUN_10000fd04 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10000fd04(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = _TtC5Paste19FilterSuggestionRow::_isSelected;
  puVar2 = &DAT_100fa6c40;
  FUN_1000037f0(&DAT_100fa6c40,&DAT_100c23748);
  (**(code **)(*(long *)(puVar2 + -8) + 8))(unaff_x20 + lVar1,puVar2);
  FUN_100004550(*(undefined8 *)(unaff_x20 + _TtC5Paste19FilterSuggestionRow::onMouseEntered),
                ((undefined8 *)(unaff_x20 + _TtC5Paste19FilterSuggestionRow::onMouseEntered))[1]);
  FUN_100004550(*(undefined8 *)(unaff_x20 + _TtC5Paste19FilterSuggestionRow::onMouseExited),
                ((undefined8 *)(unaff_x20 + _TtC5Paste19FilterSuggestionRow::onMouseExited))[1]);
  lVar1 = unaff_x20 + _TtC5Paste19FilterSuggestionRow::item;
  uVar3 = *(undefined8 *)(lVar1 + 0x10);
  uVar4 = *(undefined8 *)(lVar1 + 0x20);
  _swift_release(*(undefined8 *)(lVar1 + 0x30));
  _swift_bridgeObjectRelease(uVar3);
  _swift_bridgeObjectRelease(uVar4);
  return;
}



/* Address: 0x10000fdf0 | _TtC5Paste19FilterSuggestionRow::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC5Paste19FilterSuggestionRow::_cxx_destruct(ID param_1,SEL param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = _isSelected;
  puVar2 = &DAT_100fa6c40;
  FUN_1000037f0(&DAT_100fa6c40,&DAT_100c23748);
  (**(code **)(*(long *)(puVar2 + -8) + 8))(param_1 + lVar1,puVar2);
  FUN_100004550(*(undefined8 *)(param_1 + onMouseEntered),
                ((undefined8 *)(param_1 + onMouseEntered))[1]);
  FUN_100004550(*(undefined8 *)(param_1 + onMouseExited),
                ((undefined8 *)(param_1 + onMouseExited))[1]);
  lVar1 = param_1 + item;
  uVar3 = *(undefined8 *)(lVar1 + 0x10);
  uVar4 = *(undefined8 *)(lVar1 + 0x20);
  _swift_release(*(undefined8 *)(lVar1 + 0x30));
  _swift_bridgeObjectRelease(uVar3);
  _swift_bridgeObjectRelease(uVar4);
  return;
}



/* Address: 0x10000fee0 | FUN_10000fee0 */

void FUN_10000fee0(void)

{
  FUN_10000fee8(0);
  return;
}



/* Address: 0x10000fee8 | FUN_10000fee8 */

void FUN_10000fee8(undefined8 param_1)

{
  if (DAT_100fa6c20 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetClassDescriptor_100ca01c8);
  return;
}



/* Address: 0x10000ff20 | FUN_10000ff20 */

void FUN_10000ff20(long param_1,ulong param_2)

{
  long lVar1;
  long local_60;
  undefined *puStack_58;
  undefined *local_50;
  undefined *puStack_48;
  undefined *local_40;
  undefined *puStack_38;
  undefined *local_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  FUN_10000ffb0();
  if (param_2 < 0x40) {
    local_60 = *(long *)(lVar1 + -8) + 0x40;
    puStack_58 = &DAT_100c236e8;
    local_50 = &DAT_100c236e8;
    puStack_48 = &DAT_100c23700;
    local_40 = &DAT_100c23700;
    puStack_38 = &DAT_100c23700;
    local_30 = &DAT_100c23700;
    puStack_28 = &DAT_100c23718;
    _swift_updateClassMetadata2(param_1,0x100,8,&local_60,param_1 + 0x78);
  }
  return;
}



/* Address: 0x10000ffb0 | FUN_10000ffb0 */

void FUN_10000ffb0(void)

{
  Invalidating_conflict IVar1;
  undefined **ppuVar2;
  undefined *local_40;
  __int64 _Stack_38;
  undefined *local_30;
  undefined *puStack_28;
  
  ppuVar2 = &local_40;
  if (DAT_100fa6c30.unknown == (undefined *)0x0) {
    _Stack_38 = (__int64)(extension_AppKit)::__C::NSView::Invalidations::Layout::
                         typeMetadataAccessor();
    local_40 = PTR___type_metadata_for_Swift_Bool_100eac570;
    local_30 = PTR___protocol_witness_table_for_Swift_Bool___Swift_Equatable_in_Swift_100eac588;
    puStack_28 = 
    PTR___protocol_witness_table_for__extension_in_AppKit____C_NSView_Invalidations_Layout___AppKit_NSViewInvalidating_in_AppKit_100ea8ed8
    ;
    IVar1 = Invalidating::_typeMetadataAccessor();
    if (ppuVar2 == (undefined **)0x0) {
      DAT_100fa6c30 = IVar1;
    }
  }
  return;
}



/* Address: 0x10001002c | FUN_10001002c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10001002c(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x20));
  _swift_release(*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Address: 0x100010064 | FUN_100010064 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 * FUN_100010064(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  uVar2 = param_2[6];
  uVar3 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar3;
  param_1[6] = uVar2;
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar3);
  _swift_retain(uVar2);
  return param_1;
}



/* Address: 0x1000100d8 | FUN_1000100d8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 * FUN_1000100d8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[3] = param_2[3];
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_1[6];
  uVar1 = param_2[6];
  uVar3 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar3;
  _swift_retain(uVar1);
  _swift_release(uVar2);
  return param_1;
}



/* Address: 0x100010178 | FUN_100010178 */

void FUN_100010178(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar6 = param_2[5];
  uVar5 = param_2[4];
  param_1[6] = param_2[6];
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  param_1[5] = uVar6;
  param_1[4] = uVar5;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x100010194 | FUN_100010194 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 * FUN_100010194(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar2 = param_2[2];
  uVar1 = param_1[2];
  param_1[1] = param_2[1];
  param_1[2] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  param_1[3] = param_2[3];
  _swift_bridgeObjectRelease(param_1[4]);
  uVar1 = param_2[6];
  uVar2 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  uVar2 = param_1[6];
  param_1[6] = uVar1;
  _swift_release(uVar2);
  return param_1;
}



/* Address: 0x100010200 | FUN_100010200 */

int FUN_100010200(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xe] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x100010248 | FUN_100010248 */

void FUN_100010248(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 7) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 7) = 0;
    }
    if (param_2 != 0) {
      param_1[2] = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x100010294 | FUN_100010294 */

undefined1  [16] FUN_100010294(void)

{
  return ZEXT816(0x100eb0270);
}



/* Address: 0x1000102a4 | FUN_1000102a4 */

void FUN_1000102a4(void)

{
  long unaff_x20;
  
  FUN_10000f2c4(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1000102ac | FUN_1000102ac */

void FUN_1000102ac(Range<Index> param_1,void *param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  uint uVar4;
  String SVar5;
  
  uVar1 = (ulong)param_2 & 0xffffffffffff;
  if ((param_3 & 0x2000000000000000) != 0) {
    uVar1 = param_3 >> 0x38 & 0xf;
  }
  if ((ulong)param_1.unknown >> 0xe <= uVar1 << 2) {
    uVar4 = (uint)((ulong)param_2 >> 0x3b) & 1;
    if ((param_3 & 0x1000000000000000) == 0) {
      uVar4 = 1;
    }
    uVar2 = 7;
    if (uVar4 == 0) {
      uVar2 = 0xb;
    }
    SVar5.str = (char *)(uVar2 | uVar1 << 0x10);
    SVar5.bridgeObject = param_2;
    Swift::String::get_subscript(param_1,SVar5);
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1000102f8);
  (*pcVar3)();
}



/* Address: 0x1000102f8 | FUN_1000102f8 */

void FUN_1000102f8(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  bool bVar2;
  undefined *puVar3;
  Index IVar4;
  undefined *puVar5;
  CharacterView CVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  code *pcVar7;
  long lVar8;
  code *pcVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_90 [8];
  undefined *local_88;
  undefined *puStack_80;
  undefined *local_78;
  undefined8 local_70;
  
  puVar3 = &DAT_100fa6c80;
  local_70 = param_1;
  FUN_1000037f0(&DAT_100fa6c80,&DAT_100c237f8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar3 + -8) + 0x40));
  puVar10 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar11 = (long)puVar10 - extraout_x12;
  IVar4 = Foundation::AttributedString::Index::typeMetadataAccessor();
  lVar8 = *(long *)((long)IVar4.cmsgPointer.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar8 + 0x40));
  lVar13 = lVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_100fa6c88;
  FUN_1000037f0(&DAT_100fa6c88,&DAT_100c23800);
  local_78 = puVar5;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = lVar13 - extraout_x8_01;
  CVar6 = Foundation::AttributedString::CharacterView::typeMetadataAccessor();
  puVar5 = &DAT_100fa6c90;
  FUN_100003a00(&DAT_100fa6c90,PTR_typeMetadataAccessor_100ea6e40,
                PTR_Foundation__Foundation__AttributedString__CharacterView_>Swift__Collection_100ea6e58
               );
  local_88 = puVar5;
  puStack_80 = CVar6.unknown;
  Swift::Collection::_get_endIndex();
  puVar5 = &DAT_100fa6c98;
  FUN_100003a00(&DAT_100fa6c98,PTR_typeMetadataAccessor_100ea6e60,
                PTR_Foundation__Foundation__AttributedString__Index_>Swift__Comparable_100ea6e70);
  bVar2 = Swift::Comparable::<__infix(param_2,lVar13,IVar4.cmsgPointer.unknown,puVar5);
  if (bVar2) {
    (**(code **)(lVar8 + 0x10))(lVar11,param_2,IVar4.cmsgPointer.unknown);
    pcVar7 = *(code **)(lVar8 + 0x20);
    (*pcVar7)(lVar11 + *(int *)(puVar3 + 0x30),lVar13,IVar4.cmsgPointer.unknown);
    FUN_100011090(lVar11,puVar10,&DAT_100fa6c80,&DAT_100c237f8);
    iVar1 = *(int *)(puVar3 + 0x30);
    (*pcVar7)(lVar12,puVar10,IVar4.cmsgPointer.unknown);
    pcVar9 = *(code **)(lVar8 + 8);
    (*pcVar9)(puVar10 + iVar1,IVar4.cmsgPointer.unknown);
    FUN_1000110d8(lVar11,puVar10);
    (*pcVar7)(lVar12 + *(int *)(local_78 + 0x24),puVar10 + *(int *)(puVar3 + 0x30),
              IVar4.cmsgPointer.unknown);
    (*pcVar9)(puVar10,IVar4.cmsgPointer.unknown);
    __dispatch_thunk_of_Swift_Collection_subscript_getter____Swift_Range<A_Index>___>_A_SubSequence
              (local_70,lVar12,puStack_80,local_88);
    FUN_100005808(lVar12,&DAT_100fa6c88,&DAT_100c23800);
    return;
  }
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x100010560);
  (*pcVar7)();
}



/* Address: 0x100010560 | FUN_100010560 */

void FUN_100010560(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  puVar1 = &DAT_100c23768;
  _swift_getKeyPath(&DAT_100c23768);
  puVar2 = &DAT_100c23790;
  _swift_getKeyPath(&DAT_100c23790);
  Invalidating::_get_subscript(param_1,uVar3,puVar1,puVar2);
  _swift_release(puVar1);
  _swift_release(puVar2);
  return;
}



/* Address: 0x1000105c8 | thunk_FUN_100010560 */

void thunk_FUN_100010560(void)

{
  FUN_100010560();
  return;
}



/* Address: 0x1000105cc | FUN_1000105cc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1000105cc(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  Invalidating *pIVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 local_31;
  
  uVar1 = *param_1;
  uVar4 = *param_2;
  pIVar2 = (Invalidating *)&DAT_100c23768;
  _swift_getKeyPath(&DAT_100c23768);
  puVar3 = &DAT_100c23790;
  _swift_getKeyPath(&DAT_100c23790);
  local_31 = uVar1;
  Invalidating::_set_subscript(pIVar2,&local_31,uVar4,pIVar2,puVar3);
  return;
}


