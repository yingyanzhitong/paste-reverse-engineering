/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1000785d8 | FUN_1000785d8 */

void FUN_1000785d8(void)

{
  long unaff_x20;
  
  FUN_10007836c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1000785e0 | FUN_1000785e0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1000785e0(ID param_1)

{
  byte bVar1;
  long lVar2;
  byte bVar3;
  ID IVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  lVar2 = _TtC5Paste10TabBarCell::isCollapsed;
  *(char *)(unaff_x20 + _TtC5Paste10TabBarCell::isCollapsed) = (char)param_1;
  FUN_100078aa4();
  bVar1 = *(byte *)(unaff_x20 + lVar2);
  bVar3 = Swift::_stdlib_isOSVersionAtLeast(0x1a,0,0);
  objc_stub::setActive_(param_1,(ulong)((bVar3 & bVar1) & 1));
  IVar4 = 0;
  FUN_1000789dc();
  objc_stub::setActive_(IVar4,(ulong)((*(byte *)(unaff_x20 + lVar2) ^ 0xffffffff) & 1));
  IVar4 = 0;
  FUN_100078734();
  uVar5 = 0;
  if (*(char *)(unaff_x20 + lVar2) == '\0') {
    uVar5 = 0x3ff0000000000000;
  }
  objc_stub::setAlphaValue_(IVar4,uVar5);
  return 0;
}



/* Address: 0x100078684 | FUN_100078684 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

class_t * FUN_100078684(void)

{
  undefined2 uVar1;
  long lVar2;
  class_t *pcVar3;
  class_t *pcVar4;
  long unaff_x20;
  objc_super local_40;
  
  lVar2 = _TtC5Paste10TabBarCell::___lazy_storage___icon;
  pcVar3 = *(class_t **)(unaff_x20 + _TtC5Paste10TabBarCell::___lazy_storage___icon);
  if (pcVar3 == (class_t *)0x0) {
    uVar1 = *(undefined2 *)(unaff_x20 + _TtC5Paste10TabBarCell::iconType);
    FUN_100017564();
    pcVar4 = pcVar3;
    _objc_allocWithZone();
    *(undefined2 *)((long)&pcVar4->isa + _TtC5Paste14TabBarCellIcon::type) = uVar1;
    local_40.receiver = (ID)pcVar4;
    local_40.super_class = pcVar3;
    pcVar3 = (class_t *)_objc_msgSendSuper2(&local_40,"initWithFrame:",0,0,0,0);
    *(class_t **)(unaff_x20 + lVar2) = pcVar3;
  }
  return pcVar3;
}



/* Address: 0x100078734 | FUN_100078734 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1 * FUN_100078734(void)

{
  long lVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_38 [8];
  
  lVar1 = _TtC5Paste10TabBarCell::___lazy_storage___label;
  puVar2 = *(undefined1 **)(unaff_x20 + _TtC5Paste10TabBarCell::___lazy_storage___label);
  if (puVar2 == (undefined1 *)0x0) {
    _swift_unknownObjectWeakInit(auStack_38);
    puVar2 = auStack_38;
    FUN_1000787bc();
    _swift_unknownObjectWeakDestroy(auStack_38);
    *(undefined1 **)(unaff_x20 + lVar1) = puVar2;
  }
  return puVar2;
}



/* Address: 0x1000787bc | FUN_1000787bc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

long FUN_1000787bc(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  undefined *puVar7;
  String SVar8;
  
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    lVar6 = *(long *)(param_1 + _TtC5Paste10TabBarCell::title);
    lVar3 = ((long *)(param_1 + _TtC5Paste10TabBarCell::title))[1];
    FUN_10008cd3c(0);
    _objc_allocWithZone();
    _swift_bridgeObjectRetain(lVar3);
    FUN_10008c440(lVar6,lVar3);
    puVar7 = &DAT_100eb2de0;
    _swift_allocObject(&DAT_100eb2de0,0x18,7);
    *(long *)(puVar7 + 0x10) = param_1;
    puVar1 = (undefined8 *)(lVar6 + _TtC5Paste15TabBarCellLabel::onBeginEditing);
    uVar2 = *puVar1;
    uVar4 = puVar1[1];
    *puVar1 = FUN_10007a494;
    puVar1[1] = puVar7;
    FUN_100004550(uVar2,uVar4);
    puVar7 = &DAT_100eb2e08;
    _swift_allocObject(&DAT_100eb2e08,0x18,7);
    *(long *)(puVar7 + 0x10) = param_1;
    puVar1 = (undefined8 *)(lVar6 + _TtC5Paste15TabBarCellLabel::onCancelEditing);
    uVar2 = *puVar1;
    uVar4 = puVar1[1];
    *puVar1 = FUN_10007a4c4;
    puVar1[1] = puVar7;
    FUN_100004550(uVar2,uVar4);
    puVar7 = &DAT_100eb2e30;
    _swift_allocObject(&DAT_100eb2e30,0x18,7);
    *(long *)(puVar7 + 0x10) = param_1;
    puVar1 = (undefined8 *)(lVar6 + _TtC5Paste15TabBarCellLabel::onCommitEditing);
    uVar2 = *puVar1;
    uVar4 = puVar1[1];
    *puVar1 = FUN_10007a4f0;
    puVar1[1] = puVar7;
    FUN_100004550(uVar2,uVar4);
    return lVar6;
  }
  SVar8.bridgeObject = (void *)0x2;
  SVar8.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar8,(StaticString)0xd000000000000016,0x8000000100d8ede0,
             0xd8ede0);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10007895c);
  (*pcVar5)();
}



/* Address: 0x10007895c | FUN_10007895c */

void FUN_10007895c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  
  *(undefined1 *)(param_3 + _TtC5Paste10TabBarCell::isEditing) = 0;
  FUN_10007a078();
  pcVar2 = *(code **)(param_3 + _TtC5Paste10TabBarCell::onCommitEditing);
  if (pcVar2 != (code *)0x0) {
    uVar1 = ((undefined8 *)(param_3 + _TtC5Paste10TabBarCell::onCommitEditing))[1];
    _swift_retain(uVar1);
    (*pcVar2)(param_1,param_2);
    FUN_100004550(pcVar2,uVar1);
    return;
  }
  return;
}



/* Address: 0x1000789dc | FUN_1000789dc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1000789dc(void)

{
  long lVar1;
  ID IVar2;
  ID IVar3;
  ID unaff_x20;
  
  lVar1 = _TtC5Paste10TabBarCell::___lazy_storage___labelTrailingConstraint;
  IVar2 = *(ID *)(unaff_x20 + _TtC5Paste10TabBarCell::___lazy_storage___labelTrailingConstraint);
  if (IVar2 == 0) {
    FUN_100078734();
    IVar2 = objc_stub::trailingAnchor(IVar2);
    IVar3 = objc_stub::trailingAnchor(unaff_x20);
    IVar2 = objc_stub::constraintEqualToAnchor_constant_(IVar2,0xc020000000000000,IVar3);
    *(ID *)(unaff_x20 + lVar1) = IVar2;
  }
  return IVar2;
}



/* Address: 0x100078aa4 | FUN_100078aa4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100078aa4(void)

{
  long lVar1;
  ID IVar2;
  ID IVar3;
  ID unaff_x20;
  
  lVar1 = _TtC5Paste10TabBarCell::___lazy_storage___compactWidthConstraint;
  IVar2 = *(ID *)(unaff_x20 + _TtC5Paste10TabBarCell::___lazy_storage___compactWidthConstraint);
  if (IVar2 == 0) {
    IVar2 = objc_stub::widthAnchor(unaff_x20);
    IVar3 = objc_stub::heightAnchor(unaff_x20);
    IVar2 = objc_stub::constraintEqualToAnchor_multiplier_(IVar2,0x3ff0000000000000,IVar3);
    *(ID *)(unaff_x20 + lVar1) = IVar2;
  }
  return IVar2;
}



/* Address: 0x100078b60 | FUN_100078b60 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100078b60(undefined8 param_1,undefined8 param_2,undefined2 param_3)

{
  ID self;
  undefined *puVar1;
  ID IVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  NSArray *pNVar5;
  long unaff_x20;
  undefined1 auStack_90 [16];
  ID local_80;
  
  *(undefined1 *)(unaff_x20 + _TtC5Paste10TabBarCell::isEnabled) = 0;
  *(undefined1 *)(unaff_x20 + _TtC5Paste10TabBarCell::isSelected) = 0;
  *(undefined1 *)(unaff_x20 + _TtC5Paste10TabBarCell::isCollapsed) = 0;
  puVar3 = (undefined8 *)(unaff_x20 + _TtC5Paste10TabBarCell::onSelect);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3 = (undefined8 *)(unaff_x20 + _TtC5Paste10TabBarCell::onCommitEditing);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3 = (undefined8 *)(unaff_x20 + _TtC5Paste10TabBarCell::onPerformDragOperation);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3 = (undefined8 *)(unaff_x20 + _TtC5Paste10TabBarCell::onCanPerformDragOperation);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3 = (undefined8 *)(unaff_x20 + _TtC5Paste10TabBarCell::menuProvider);
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(unaff_x20 + _TtC5Paste10TabBarCell::isEditing) = 0;
  *(undefined1 *)(unaff_x20 + _TtC5Paste10TabBarCell::isHovered) = 0;
  *(undefined1 *)(unaff_x20 + _TtC5Paste10TabBarCell::isPressed) = 0;
  *(undefined1 *)(unaff_x20 + _TtC5Paste10TabBarCell::isDragDestination) = 0;
  *(undefined8 *)(unaff_x20 + _TtC5Paste10TabBarCell::trackingArea) = 0;
  *(undefined8 *)(unaff_x20 + _TtC5Paste10TabBarCell::___lazy_storage___icon) = 0;
  *(undefined8 *)(unaff_x20 + _TtC5Paste10TabBarCell::___lazy_storage___label) = 0;
  *(undefined8 *)(unaff_x20 + _TtC5Paste10TabBarCell::___lazy_storage___labelTrailingConstraint) = 0
  ;
  *(undefined8 *)(unaff_x20 + _TtC5Paste10TabBarCell::___lazy_storage___compactWidthConstraint) = 0;
  puVar3 = (undefined8 *)(unaff_x20 + _TtC5Paste10TabBarCell::title);
  *puVar3 = param_1;
  puVar3[1] = param_2;
  *(undefined2 *)(unaff_x20 + _TtC5Paste10TabBarCell::iconType) = param_3;
  FUN_10007a448();
  self = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffc0,"init");
  puVar1 = &DAT_100fa6b80;
  FUN_1000037f0(&DAT_100fa6b80,&DAT_100c23760);
  _swift_initStackObject();
  *(undefined8 *)(puVar1 + 0x18) = 5;
  *(undefined8 *)(puVar1 + 0x10) = 2;
  IVar2 = self;
  FUN_100078684();
  *(ID *)(puVar1 + 0x20) = IVar2;
  FUN_100078734();
  *(ID *)(puVar1 + 0x28) = IVar2;
  local_80 = self;
  FUN_1001fa150(puVar1,FUN_10007a468,auStack_90);
  _swift_bridgeObjectRelease();
  _swift_setDeallocating(puVar1);
  _swift_arrayDestroy(puVar1 + 0x20,*(undefined8 *)(puVar1 + 0x10),
                      PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8);
  puVar3 = (undefined8 *)&DAT_100fa9948;
  FUN_1000037f0(&DAT_100fa9948,&DAT_100c26f48);
  _swift_allocObject();
  puVar3[3] = 2;
  puVar3[2] = 1;
  puVar4 = puVar3;
  FUN_1003ca14c();
  puVar3[4] = *puVar4;
  FUN_100003b30(0);
  pNVar5 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_release(puVar3);
  objc_stub::registerForDraggedTypes_(self,pNVar5);
  return self;
}



/* Address: 0x100078db0 | FUN_100078db0 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_100078db0(ID param_1)

{
  long lVar1;
  long lVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  undefined8 uVar8;
  ID *pIVar9;
  ID IVar10;
  ID IVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  ID local_98 [3];
  ID local_80;
  undefined **ppuStack_78;
  ID local_70;
  
  IVar3 = param_1;
  FUN_100078684();
  IVar3 = objc_stub::centerYAnchor(IVar3);
  IVar4 = objc_stub::centerYAnchor(param_1);
  IVar5 = objc_stub::constraintEqualToAnchor_(IVar3,IVar4);
  lVar1 = _TtC5Paste10TabBarCell::___lazy_storage___icon;
  IVar3 = objc_stub::leadingAnchor
                    (*(ID *)(param_1 + _TtC5Paste10TabBarCell::___lazy_storage___icon));
  IVar4 = objc_stub::leadingAnchor(param_1);
  IVar6 = objc_stub::constraintEqualToAnchor_constant_(IVar3,0x4020000000000000,IVar4);
  IVar3 = objc_stub::trailingAnchor(*(ID *)(param_1 + lVar1));
  IVar4 = objc_stub::trailingAnchor(param_1);
  IVar7 = objc_stub::constraintLessThanOrEqualToAnchor_constant_(IVar3,0xc020000000000000,IVar4);
  IVar3 = IVar7;
  FUN_100078734();
  local_70 = IVar3;
  FUN_10007a448();
  ppuStack_78 = &PTR_PTR_100ec00e8;
  uVar8 = 0;
  local_98[0] = param_1;
  local_80 = IVar3;
  FUN_10008cd3c(0);
  pIVar9 = local_98;
  FUN_1001f9cd8(0x4018000000000000,pIVar9,uVar8,&PTR_PTR_100ec00e8);
  FUN_100004594(local_98);
  lVar2 = _TtC5Paste10TabBarCell::___lazy_storage___label;
  IVar3 = objc_stub::widthAnchor(*(ID *)(param_1 + _TtC5Paste10TabBarCell::___lazy_storage___label))
  ;
  IVar10 = objc_stub::constraintLessThanOrEqualToConstant_(IVar3,0x4069000000000000);
  IVar3 = objc_stub::leadingAnchor(*(ID *)(param_1 + lVar2));
  IVar4 = objc_stub::trailingAnchor(*(ID *)(param_1 + lVar1));
  IVar11 = objc_stub::constraintEqualToAnchor_constant_(IVar3,0x4010000000000000,IVar4);
  IVar3 = IVar11;
  FUN_1000789dc();
  IVar4 = IVar3;
  FUN_100078aa4();
  puVar12 = &DAT_100fa8830;
  FUN_1000037f0(&DAT_100fa8830,&DAT_100c24a20);
  _swift_initStackObject();
  *(undefined8 *)(puVar12 + 0x18) = 0x10;
  *(undefined8 *)(puVar12 + 0x10) = 8;
  uVar8 = 0;
  FUN_10000ec2c(0,&DAT_100fa86a0,&PTR__OBJC_CLASS___NSLayoutConstraint_100f8d660);
  *(undefined8 *)(puVar12 + 0x38) = uVar8;
  *(undefined ***)(puVar12 + 0x40) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar12 + 0x20) = IVar5;
  *(undefined8 *)(puVar12 + 0x60) = uVar8;
  *(undefined ***)(puVar12 + 0x68) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar12 + 0x48) = IVar6;
  *(undefined8 *)(puVar12 + 0x88) = uVar8;
  *(undefined ***)(puVar12 + 0x90) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar12 + 0x70) = IVar7;
  puVar13 = &DAT_100fa8840;
  FUN_1000037f0(&DAT_100fa8840,&DAT_100c237d0);
  *(undefined **)(puVar12 + 0xb0) = puVar13;
  *(undefined ***)(puVar12 + 0xb8) = &PTR_PTR_100ec00b8;
  *(ID **)(puVar12 + 0x98) = pIVar9;
  *(undefined8 *)(puVar12 + 0xd8) = uVar8;
  *(undefined ***)(puVar12 + 0xe0) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar12 + 0xc0) = IVar10;
  *(undefined8 *)(puVar12 + 0x100) = uVar8;
  *(undefined ***)(puVar12 + 0x108) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar12 + 0xe8) = IVar11;
  *(undefined8 *)(puVar12 + 0x128) = uVar8;
  *(undefined ***)(puVar12 + 0x130) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar12 + 0x110) = IVar3;
  *(undefined8 *)(puVar12 + 0x150) = uVar8;
  *(undefined ***)(puVar12 + 0x158) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar12 + 0x138) = IVar4;
  _swift_bridgeObjectRetain();
  puVar14 = puVar12;
  FUN_1001f8d60(puVar12);
  _swift_bridgeObjectRelease(pIVar9);
  _swift_setDeallocating(puVar12);
  uVar8 = *(undefined8 *)(puVar12 + 0x10);
  puVar13 = &DAT_100fa6bc0;
  FUN_1000037f0(&DAT_100fa6bc0,&DAT_100c24a30);
  _swift_arrayDestroy(puVar12 + 0x20,uVar8,puVar13);
  return puVar14;
}



/* Address: 0x1000791a0 | FUN_1000791a0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8
FUN_1000791a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  byte bVar2;
  ID IVar3;
  ID unaff_x20;
  undefined8 extraout_d0;
  double extraout_d0_00;
  double dVar4;
  
  FUN_10007a448();
  IVar3 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffc0,"layout");
  FUN_100078734();
  objc_stub::bounds(unaff_x20);
  objc_stub::convertRect_toView_
            (unaff_x20,*(undefined8 *)(unaff_x20 + _TtC5Paste10TabBarCell::___lazy_storage___label))
  ;
  puVar1 = (undefined8 *)
           (*(long *)(IVar3 + _TtC5Paste15TabBarCellLabel::textField) +
           _TtCC5Paste15TabBarCellLabelP33_0F41DE770CBB3D48BD1AF75457DFD7ED9TextField::
           focusRingBounds);
  *puVar1 = extraout_d0;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  objc_stub::bounds(unaff_x20);
  dVar4 = extraout_d0_00;
  _CGRectGetHeight();
  bVar2 = Swift::_stdlib_isOSVersionAtLeast(0x1a,0,0);
  dVar4 = dVar4 * 0.5;
  puVar1 = (undefined8 *)PTR__kCACornerCurveContinuous_100eaa3a0;
  if ((bVar2 & 1) == 0) {
    dVar4 = 6.0;
    puVar1 = (undefined8 *)PTR__kCACornerCurveCircular_100eaa398;
  }
  objc_stub::setCornerRadius_curve_(unaff_x20,dVar4,*puVar1);
  return 0;
}



/* Address: 0x100079298 | _TtC5Paste10TabBarCell::layout */

/* Function Stack Size: 0x10 bytes */

void _TtC5Paste10TabBarCell::layout(ID param_1,SEL param_2)

{
  FUN_100079af8(param_1,param_2,0x58,FUN_1000791a0);
  return;
}



/* Address: 0x1000792a8 | _TtC5Paste10TabBarCell::draggingEntered: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

unsigned_long_long _TtC5Paste10TabBarCell::draggingEntered_(ID param_1,SEL param_2,ID param_3)

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
    _swift_task_reportUnexpectedExecutor("Paste/TabBarCell.swift",0x16,1,0x5e,UVar3.unknown,pMVar1);
  }
  _swift_unknownObjectRetain(param_3);
  FUN_10007a4f8();
  _swift_release(pMVar2);
  _swift_unknownObjectRelease(param_3);
  return param_1;
}



/* Address: 0x10007936c | _TtC5Paste10TabBarCell::draggingExited: */

/* Function Stack Size: 0x18 bytes */

void _TtC5Paste10TabBarCell::draggingExited_(ID param_1,SEL param_2,ID param_3)

{
  FUN_10007937c();
  return;
}



/* Address: 0x100079374 | _TtC5Paste10TabBarCell::draggingEnded: */

/* Function Stack Size: 0x18 bytes */

void _TtC5Paste10TabBarCell::draggingEnded_(ID param_1,SEL param_2,ID param_3)

{
  FUN_10007937c();
  return;
}



/* Address: 0x10007937c | FUN_10007937c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10007937c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
              ("Paste/TabBarCell.swift",0x16,1,param_4,UVar3.unknown,pMVar1);
  }
  *(undefined1 *)(param_1 + _TtC5Paste10TabBarCell::isDragDestination) = 0;
  FUN_10007a078(param_1);
  _swift_release(pMVar2);
  return 0;
}



/* Address: 0x100079430 | FUN_100079430 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_100079430(ID param_1)

{
  long *plVar1;
  ulong uVar2;
  _CocoaArrayWrapper _Var3;
  ID IVar4;
  _ArrayBuffer _Var5;
  ulong self;
  MainActor *pMVar6;
  MainActor *pMVar7;
  UnownedSerialExecutor UVar8;
  char *pcVar9;
  undefined *puVar10;
  code *pcVar11;
  undefined *puVar12;
  long unaff_x20;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  String SVar16;
  undefined *local_68;
  
  pcVar11 = *(code **)(unaff_x20 + _TtC5Paste10TabBarCell::onPerformDragOperation);
  if (pcVar11 == (code *)0x0) {
    return 0;
  }
  uVar13 = ((undefined8 *)(unaff_x20 + _TtC5Paste10TabBarCell::onPerformDragOperation))[1];
  _swift_retain(uVar13);
  IVar4 = objc_stub::draggingPasteboard(param_1);
  _Var5.unknown = (undefined *)objc_stub::pasteboardItems(IVar4);
  if (_Var5.unknown == (undefined *)0x0) goto LAB_1000796f4;
  FUN_10000ec2c(0,&DAT_100fa9bb8,&PTR__OBJC_CLASS___NSPasteboardItem_100f8d7d0);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  puVar12 = _Var5.unknown & 0xffffffffffffff8;
  if ((ulong)_Var5.unknown >> 0x3e == 0) {
    uVar14 = *(ulong *)(puVar12 + 0x10);
    if (uVar14 == 0) goto LAB_1000796a0;
LAB_1000794ec:
    local_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
    uVar15 = 0;
    do {
      while( true ) {
        if (((ulong)_Var5.unknown & 0xc000000000000001) == 0) {
          if (*(ulong *)(puVar12 + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
            pcVar11 = (code *)SoftwareBreakpoint(1,0x10007968c);
            (*pcVar11)();
          }
          self = *(ulong *)(_Var5.unknown + uVar15 * 8 + 0x20);
        }
        else {
          self = uVar15;
          Swift::_ArrayBuffer::__getElementSlowPath(uVar15,_Var5);
        }
        uVar2 = uVar15 + 1;
        if (SCARRY8(uVar15,1)) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x100079688);
          (*pcVar11)();
        }
        pMVar6 = Swift::MainActor::typeMetadataAccessor();
        pMVar7 = Swift::MainActor::get_shared(pMVar6,pMVar6);
        pMVar6 = pMVar7;
        FUN_1000081a8();
        UVar8 = Swift::Actor::get_unownedExecutor();
        pcVar9 = (char *)UVar8;
        _swift_task_isCurrentExecutor();
        if (((ulong)pcVar9 & 1) == 0) {
          pcVar9 = "Paste/TabBarCell.swift";
          _swift_task_reportUnexpectedExecutor
                    ("Paste/TabBarCell.swift",0x16,1,0x6f,UVar8.unknown,pMVar6);
        }
        FUN_1003ca14c();
        IVar4 = objc_stub::stringForType_(self,*(undefined8 *)pcVar9);
        if (IVar4 != 0) break;
        _swift_release(pMVar7);
        uVar15 = uVar15 + 1;
        if (uVar2 == uVar14) goto LAB_1000796ac;
      }
      SVar16 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      _swift_release(pMVar7);
      puVar10 = local_68;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((ulong)puVar10 & 1) == 0) {
        plVar1 = (long *)(local_68 + 0x10);
        local_68 = (undefined *)0x0;
        FUN_100089044(0,*plVar1 + 1,1);
      }
      uVar15 = *(ulong *)(local_68 + 0x10);
      if (*(ulong *)(local_68 + 0x18) >> 1 <= uVar15) {
        puVar10 = (undefined *)(ulong)(1 < *(ulong *)(local_68 + 0x18));
        FUN_100089044(puVar10,uVar15 + 1,1,local_68);
        local_68 = puVar10;
      }
      *(ulong *)(local_68 + 0x10) = uVar15 + 1;
      *(String *)(local_68 + uVar15 * 0x10 + 0x20) = SVar16;
      uVar15 = uVar2;
    } while (uVar2 != uVar14);
  }
  else {
    _Var3.unknown = puVar12;
    if ((undefined *)0x7fffffffffffffff < _Var5.unknown) {
      _Var3.unknown = _Var5.unknown;
    }
    uVar14 = Swift::_CocoaArrayWrapper::get_endIndex(_Var3);
    if (uVar14 != 0) goto LAB_1000794ec;
LAB_1000796a0:
    local_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
LAB_1000796ac:
  _swift_bridgeObjectRelease(_Var5.unknown);
  if (*(long *)(local_68 + 0x10) != 0) {
    (*pcVar11)(local_68);
    FUN_100004550(pcVar11,uVar13);
    _swift_bridgeObjectRelease(local_68);
    return 1;
  }
  _swift_bridgeObjectRelease(local_68);
LAB_1000796f4:
  FUN_100004550(pcVar11,uVar13);
  return 0;
}



/* Address: 0x10007971c | _TtC5Paste10TabBarCell::performDragOperation: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

bool _TtC5Paste10TabBarCell::performDragOperation_(ID param_1,SEL param_2,ID param_3)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  ID IVar5;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1000081a8();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor("Paste/TabBarCell.swift",0x16,1,0x6c,UVar3.unknown,pMVar1);
  }
  _swift_unknownObjectRetain(param_3);
  IVar5 = param_3;
  FUN_100079430();
  _swift_release(pMVar2);
  _swift_unknownObjectRelease(param_3);
  return (uint)IVar5 & 1;
}



/* Address: 0x1000797e4 | _TtC5Paste10TabBarCell::menuForEvent: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC5Paste10TabBarCell::menuForEvent_(ID param_1,SEL param_2,ID param_3)

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
    _swift_task_reportUnexpectedExecutor("Paste/TabBarCell.swift",0x16,1,0x7a,UVar3.unknown,pMVar1);
  }
  FUN_10007a578();
  _swift_release(pMVar2);
  return param_1;
}



/* Address: 0x1000798ac | _TtC5Paste10TabBarCell::removeFromSuperview */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC5Paste10TabBarCell::removeFromSuperview(ID param_1,SEL param_2)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  class_t *pcVar5;
  objc_super local_40;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1000081a8();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor("Paste/TabBarCell.swift",0x16,1,0x84,UVar3.unknown,pMVar1);
  }
  FUN_100078734();
  FUN_10008c834();
  pcVar5 = (class_t *)0x0;
  FUN_10007a448();
  local_40.receiver = param_1;
  local_40.super_class = pcVar5;
  _objc_msgSendSuper2(&local_40,"removeFromSuperview");
  _swift_release(pMVar2);
  return;
}



/* Address: 0x100079980 | FUN_100079980 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_100079980(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 uVar3;
  undefined *self;
  ID IVar4;
  ID unaff_x20;
  undefined8 extraout_d0;
  undefined8 extraout_d0_00;
  undefined8 extraout_d0_01;
  undefined8 uVar5;
  
  FUN_10007a448();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffa0,"updateTrackingAreas");
  lVar1 = _TtC5Paste10TabBarCell::trackingArea;
  if (*(long *)(unaff_x20 + _TtC5Paste10TabBarCell::trackingArea) != 0) {
    objc_stub::removeTrackingArea_(unaff_x20);
  }
  objc_stub::bounds(unaff_x20);
  self = &_OBJC_CLASS___NSTrackingArea;
  _objc_allocWithZone();
  IVar4 = objc_stub::initWithRect_options_owner_userInfo_
                    ((ID)self,extraout_d0,param_2,param_3,param_4,0x21);
  *(ID *)(unaff_x20 + lVar1) = IVar4;
  if (IVar4 != 0) {
    objc_stub::addTrackingArea_(unaff_x20,IVar4);
    IVar4 = NSEvent::pressedMouseButtons((ID)&_OBJC_CLASS___NSEvent);
    if (IVar4 == 0) {
      objc_stub::bounds(unaff_x20);
      uVar5 = param_2;
      NSEvent::mouseLocation((ID)&_OBJC_CLASS___NSEvent);
      IVar4 = objc_stub::convertPoint_fromView_(unaff_x20,0);
      uVar3 = (undefined1)IVar4;
      _CGRectContainsPoint(extraout_d0_00,param_2,param_3,param_4,extraout_d0_01,uVar5);
    }
    else {
      uVar3 = 0;
    }
    *(undefined1 *)(unaff_x20 + _TtC5Paste10TabBarCell::isHovered) = uVar3;
    FUN_10007a078();
    *(undefined1 *)(unaff_x20 + _TtC5Paste10TabBarCell::isPressed) = 0;
    FUN_10007a078();
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100079ae8);
  (*pcVar2)();
}



/* Address: 0x100079ae8 | _TtC5Paste10TabBarCell::updateTrackingAreas */

/* Function Stack Size: 0x10 bytes */

void _TtC5Paste10TabBarCell::updateTrackingAreas(ID param_1,SEL param_2)

{
  FUN_100079af8(param_1,param_2,0x8b,FUN_100079980);
  return;
}



/* Address: 0x100079af8 | FUN_100079af8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100079af8(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

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
              ("Paste/TabBarCell.swift",0x16,1,param_3,UVar3.unknown,pMVar1);
  }
  (*param_4)(param_1);
  _swift_release(pMVar2);
  return 0;
}



/* Address: 0x100079ba4 | _TtC5Paste10TabBarCell::mouseEntered: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC5Paste10TabBarCell::mouseEntered_(ID param_1,SEL param_2,ID param_3)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  char *pcVar4;
  objc_super local_50;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1000081a8();
  UVar3 = Swift::Actor::get_unownedExecutor();
  pcVar4 = (char *)UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar4 & 1) == 0) {
    pcVar4 = "Paste/TabBarCell.swift";
    _swift_task_reportUnexpectedExecutor("Paste/TabBarCell.swift",0x16,1,0x9a,UVar3.unknown,pMVar1);
  }
  FUN_10007a448();
  local_50.receiver = param_1;
  local_50.super_class = (class_t *)pcVar4;
  _objc_msgSendSuper2(&local_50,"mouseEntered:",param_3);
  *(undefined1 *)(param_1 + isHovered) = 1;
  FUN_10007a078();
  _swift_release(pMVar2);
  return;
}



/* Address: 0x100079ca0 | _TtC5Paste10TabBarCell::mouseExited: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC5Paste10TabBarCell::mouseExited_(ID param_1,SEL param_2,ID param_3)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  char *pcVar4;
  objc_super local_50;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1000081a8();
  UVar3 = Swift::Actor::get_unownedExecutor();
  pcVar4 = (char *)UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar4 & 1) == 0) {
    pcVar4 = "Paste/TabBarCell.swift";
    _swift_task_reportUnexpectedExecutor("Paste/TabBarCell.swift",0x16,1,0x9f,UVar3.unknown,pMVar1);
  }
  FUN_10007a448();
  local_50.receiver = param_1;
  local_50.super_class = (class_t *)pcVar4;
  _objc_msgSendSuper2(&local_50,"mouseExited:",param_3);
  *(undefined1 *)(param_1 + isHovered) = 0;
  FUN_10007a078();
  *(undefined1 *)(param_1 + isPressed) = 0;
  FUN_10007a078();
  _swift_release(pMVar2);
  return;
}



/* Address: 0x100079da8 | FUN_100079da8 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100079da8(ID param_1)

{
  long lVar1;
  ID IVar2;
  ID IVar3;
  ID unaff_x20;
  
  lVar1 = _TtC5Paste10TabBarCell::isCollapsed;
  IVar2 = param_1;
  if ((*(byte *)(unaff_x20 + _TtC5Paste10TabBarCell::isEditing) & 1) == 0) {
    if ((((*(byte *)(unaff_x20 + _TtC5Paste10TabBarCell::isCollapsed) & 1) == 0) &&
        (IVar2 = objc_stub::modifierFlags(param_1), ((uint)IVar2 >> 0x12 & 1) != 0)) &&
       (IVar3 = objc_stub::menuForEvent_(unaff_x20,param_1), IVar2 = 0, IVar3 != 0)) {
      NSMenu::popUpContextMenu_withEvent_forView_((ID)&_OBJC_CLASS___NSMenu,IVar3,param_1);
      return 0;
    }
    *(undefined1 *)(unaff_x20 + _TtC5Paste10TabBarCell::isPressed) = 1;
    FUN_10007a078();
    if ((*(byte *)(unaff_x20 + lVar1) & 1) == 0) {
      FUN_10007a448();
      IVar2 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffc0,"mouseDown:",param_1);
    }
  }
  return IVar2;
}



/* Address: 0x100079e88 | _TtC5Paste10TabBarCell::mouseDown: */

/* Function Stack Size: 0x18 bytes */

void _TtC5Paste10TabBarCell::mouseDown_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100079fa8();
  return;
}



/* Address: 0x100079e98 | FUN_100079e98 */

void FUN_100079e98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ID param_5)

{
  int iVar1;
  code *pcVar3;
  ID unaff_x20;
  undefined8 uVar4;
  undefined8 extraout_d0;
  undefined8 extraout_d0_00;
  ID IVar2;
  
  if ((*(byte *)(unaff_x20 + _TtC5Paste10TabBarCell::isEditing) & 1) == 0) {
    *(undefined1 *)(unaff_x20 + _TtC5Paste10TabBarCell::isPressed) = 0;
    FUN_10007a078();
    objc_stub::bounds(unaff_x20);
    uVar4 = param_2;
    objc_stub::locationInWindow(param_5);
    IVar2 = objc_stub::convertPoint_fromView_(unaff_x20,0);
    iVar1 = (int)IVar2;
    _CGRectContainsPoint(extraout_d0,param_2,param_3,param_4,extraout_d0_00,uVar4);
    if (iVar1 == 0) {
      FUN_10007a448();
      _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffb0,"mouseUp:",param_5);
    }
    else {
      pcVar3 = *(code **)(unaff_x20 + _TtC5Paste10TabBarCell::onSelect);
      if (pcVar3 != (code *)0x0) {
        uVar4 = ((undefined8 *)(unaff_x20 + _TtC5Paste10TabBarCell::onSelect))[1];
        _swift_retain(uVar4);
        (*pcVar3)();
        FUN_100004550(pcVar3,uVar4);
        return;
      }
    }
  }
  return;
}



/* Address: 0x100079f98 | _TtC5Paste10TabBarCell::mouseUp: */

/* Function Stack Size: 0x18 bytes */

void _TtC5Paste10TabBarCell::mouseUp_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100079fa8();
  return;
}



/* Address: 0x100079fa8 | FUN_100079fa8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
FUN_100079fa8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             code *param_5)

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
              ("Paste/TabBarCell.swift",0x16,1,param_4,UVar3.unknown,pMVar1);
  }
  (*param_5)(param_3);
  _swift_release(pMVar2);
  return 0;
}



/* Address: 0x10007a078 | FUN_10007a078 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_10007a078(ID *param_1)

{
  ID IVar1;
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + _TtC5Paste10TabBarCell::isEditing) == '\x01') {
LAB_10007a098:
    FUN_1001fe1dc();
  }
  else {
    if (*(char *)(unaff_x20 + _TtC5Paste10TabBarCell::isPressed) == '\x01') {
      FUN_1001ff0d0();
      IVar1 = objc_stub::colorWithAlphaComponent_(*param_1,0x3fc3333333333333);
      goto LAB_10007a128;
    }
    if (((*(char *)(unaff_x20 + _TtC5Paste10TabBarCell::isSelected) != '\x01') ||
        (*(char *)(unaff_x20 + _TtC5Paste10TabBarCell::isCollapsed) == '\x01')) &&
       (*(char *)(unaff_x20 + _TtC5Paste10TabBarCell::isDragDestination) != '\x01')) {
      if (*(char *)(unaff_x20 + _TtC5Paste10TabBarCell::isHovered) != '\x01') {
        IVar1 = 0;
        goto LAB_10007a128;
      }
      goto LAB_10007a098;
    }
    FUN_1001ff0d0();
  }
  IVar1 = *param_1;
LAB_10007a128:
  FUN_1002356a8(IVar1);
  return;
}



/* Address: 0x10007a154 | _TtC5Paste10TabBarCell::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC5Paste10TabBarCell::init(ID param_1,SEL param_2)

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
    _swift_task_reportUnexpectedExecutor("Paste/TabBarCell.swift",0x16,1,4,UVar3.unknown,pMVar2);
  }
  __swift_stdlib_reportUnimplementedInitializer("Paste.TabBarCell",0x10,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10007a1dc);
  (*pcVar1)();
}



/* Address: 0x10007a1dc | _TtC5Paste10TabBarCell::initWithFrame: */

/* Function Stack Size: 0x30 bytes */

ID _TtC5Paste10TabBarCell::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

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
    _swift_task_reportUnexpectedExecutor("Paste/TabBarCell.swift",0x16,1,4,UVar3.unknown,pMVar2);
  }
  __swift_stdlib_reportUnimplementedInitializer("Paste.TabBarCell",0x10,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10007a264);
  (*pcVar1)();
}



/* Address: 0x10007a264 | FUN_10007a264 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10007a264(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + _TtC5Paste10TabBarCell::title + 8));
  FUN_100004550(*(undefined8 *)(unaff_x20 + _TtC5Paste10TabBarCell::onSelect),
                ((undefined8 *)(unaff_x20 + _TtC5Paste10TabBarCell::onSelect))[1]);
  FUN_100004550(*(undefined8 *)(unaff_x20 + _TtC5Paste10TabBarCell::onCommitEditing),
                ((undefined8 *)(unaff_x20 + _TtC5Paste10TabBarCell::onCommitEditing))[1]);
  FUN_100004550(*(undefined8 *)(unaff_x20 + _TtC5Paste10TabBarCell::onPerformDragOperation),
                ((undefined8 *)(unaff_x20 + _TtC5Paste10TabBarCell::onPerformDragOperation))[1]);
  FUN_100004550(*(undefined8 *)(unaff_x20 + _TtC5Paste10TabBarCell::onCanPerformDragOperation),
                ((undefined8 *)(unaff_x20 + _TtC5Paste10TabBarCell::onCanPerformDragOperation))[1]);
  FUN_100004550(*(undefined8 *)(unaff_x20 + _TtC5Paste10TabBarCell::menuProvider),
                ((undefined8 *)(unaff_x20 + _TtC5Paste10TabBarCell::menuProvider))[1]);
  return 0;
}



/* Address: 0x10007a338 | FUN_10007a338 */

void FUN_10007a338(void)

{
  FUN_10007a448();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"dealloc");
  return;
}



/* Address: 0x10007a368 | _TtC5Paste10TabBarCell::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC5Paste10TabBarCell::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + title + 8));
  FUN_100004550(*(undefined8 *)(param_1 + onSelect),((undefined8 *)(param_1 + onSelect))[1]);
  FUN_100004550(*(undefined8 *)(param_1 + onCommitEditing),
                ((undefined8 *)(param_1 + onCommitEditing))[1]);
  FUN_100004550(*(undefined8 *)(param_1 + onPerformDragOperation),
                ((undefined8 *)(param_1 + onPerformDragOperation))[1]);
  FUN_100004550(*(undefined8 *)(param_1 + onCanPerformDragOperation),
                ((undefined8 *)(param_1 + onCanPerformDragOperation))[1]);
  FUN_100004550(*(undefined8 *)(param_1 + menuProvider),((undefined8 *)(param_1 + menuProvider))[1])
  ;
  return;
}



/* Address: 0x10007a448 | FUN_10007a448 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10007a448(void)

{
  return ZEXT816(0x100f91920);
}



/* Address: 0x10007a468 | FUN_10007a468 */

void FUN_10007a468(void)

{
  long unaff_x20;
  
  FUN_100078db0(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x10007a470 | FUN_10007a470 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10007a470(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x10007a494 | FUN_10007a494 */

void FUN_10007a494(void)

{
  long unaff_x20;
  
  *(undefined1 *)(*(long *)(unaff_x20 + 0x10) + _TtC5Paste10TabBarCell::isEditing) = 1;
  FUN_10007a078();
  return;
}



/* Address: 0x10007a4c4 | FUN_10007a4c4 */

void FUN_10007a4c4(void)

{
  long unaff_x20;
  
  *(undefined1 *)(*(long *)(unaff_x20 + 0x10) + _TtC5Paste10TabBarCell::isEditing) = 0;
  FUN_10007a078();
  return;
}



/* Address: 0x10007a4f0 | FUN_10007a4f0 */

void FUN_10007a4f0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10007895c(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x10007a4f8 | FUN_10007a4f8 */

undefined1 FUN_10007a4f8(void)

{
  long lVar1;
  undefined8 uVar2;
  byte bVar3;
  long unaff_x20;
  code *pcVar4;
  undefined8 uVar5;
  
  pcVar4 = *(code **)(unaff_x20 + _TtC5Paste10TabBarCell::onCanPerformDragOperation);
  if (pcVar4 == (code *)0x0) {
    bVar3 = 0;
  }
  else {
    uVar5 = ((undefined8 *)(unaff_x20 + _TtC5Paste10TabBarCell::onCanPerformDragOperation))[1];
    uVar2 = uVar5;
    _swift_retain();
    bVar3 = (byte)uVar2;
    (*pcVar4)();
    FUN_100004550(pcVar4,uVar5);
  }
  lVar1 = _TtC5Paste10TabBarCell::isDragDestination;
  *(byte *)(unaff_x20 + _TtC5Paste10TabBarCell::isDragDestination) = bVar3 & 1;
  FUN_10007a078();
  return *(undefined1 *)(unaff_x20 + lVar1);
}



/* Address: 0x10007a578 | FUN_10007a578 */

undefined8 FUN_10007a578(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  if (((*(byte *)(unaff_x20 + _TtC5Paste10TabBarCell::isEditing) & 1) == 0) &&
     ((*(byte *)(unaff_x20 + _TtC5Paste10TabBarCell::isCollapsed) & 1) == 0)) {
    *(undefined1 *)(unaff_x20 + _TtC5Paste10TabBarCell::isHovered) = 1;
    FUN_10007a078();
    pcVar2 = *(code **)(unaff_x20 + _TtC5Paste10TabBarCell::menuProvider);
    if (pcVar2 != (code *)0x0) {
      uVar3 = ((undefined8 *)(unaff_x20 + _TtC5Paste10TabBarCell::menuProvider))[1];
      uVar1 = uVar3;
      _swift_retain(uVar3);
      (*pcVar2)();
      FUN_100004550(pcVar2,uVar3);
      return uVar1;
    }
  }
  return 0;
}



/* Address: 0x10007a60c | thunk_FUN_10007a470 */

void thunk_FUN_10007a470(void)

{
  FUN_10007a470();
  return;
}



/* Address: 0x10007a610 | thunk_FUN_10007a470 */

void thunk_FUN_10007a470(void)

{
  FUN_10007a470();
  return;
}



/* Address: 0x10007a614 | FUN_10007a614 */

void FUN_10007a614(void)

{
  FUN_10007aa7c(&_TtC5Paste15ItemPreviewView::___lazy_storage___previewHeader,FUN_100013064,
                FUN_10007a630);
  return;
}



/* Address: 0x10007a630 | FUN_10007a630 */

void FUN_10007a630(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar5 = &DAT_100eb2e58;
  puVar4 = puVar5;
  _swift_allocObject(&DAT_100eb2e58,0x18,7);
  _swift_unknownObjectWeakInit(puVar4 + 0x10,param_2);
  puVar1 = (undefined8 *)(param_1 + _TtCC5Paste15ItemPreviewView13PreviewHeader::onClose);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = FUN_10007c954;
  puVar1[1] = puVar4;
  _swift_retain(puVar4);
  FUN_100004550(uVar2,uVar3);
  _swift_release(puVar4);
  puVar4 = puVar5;
  _swift_allocObject(&DAT_100eb2e58,0x18,7);
  _swift_unknownObjectWeakInit(puVar4 + 0x10,param_2);
  puVar1 = (undefined8 *)(param_1 + _TtCC5Paste15ItemPreviewView13PreviewHeader::onRename);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = FUN_10007c95c;
  puVar1[1] = puVar4;
  _swift_retain(puVar4);
  FUN_100004550(uVar2,uVar3);
  _swift_release(puVar4);
  puVar4 = puVar5;
  _swift_allocObject(&DAT_100eb2e58,0x18,7);
  _swift_unknownObjectWeakInit(puVar4 + 0x10,param_2);
  puVar1 = (undefined8 *)(param_1 + _TtCC5Paste15ItemPreviewView13PreviewHeader::onEdit);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = FUN_10007c964;
  puVar1[1] = puVar4;
  _swift_retain(puVar4);
  FUN_100004550(uVar2,uVar3);
  _swift_release(puVar4);
  puVar4 = puVar5;
  _swift_allocObject(&DAT_100eb2e58,0x18,7);
  _swift_unknownObjectWeakInit(puVar4 + 0x10,param_2);
  puVar1 = (undefined8 *)(param_1 + _TtCC5Paste15ItemPreviewView13PreviewHeader::onShare);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = FUN_10007c984;
  puVar1[1] = puVar4;
  _swift_retain(puVar4);
  FUN_100004550(uVar2,uVar3);
  _swift_release(puVar4);
  _swift_allocObject(&DAT_100eb2e58,0x18,7);
  _swift_unknownObjectWeakInit(puVar5 + 0x10,param_2);
  puVar1 = (undefined8 *)(param_1 + _TtCC5Paste15ItemPreviewView13PreviewHeader::onPin);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = FUN_10007c98c;
  puVar1[1] = puVar5;
  _swift_retain(puVar5);
  FUN_100004550(uVar2,uVar3);
  _swift_release(puVar5);
  return;
}



/* Address: 0x10007a830 | FUN_10007a830 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

undefined8 FUN_10007a830(long param_1)

{
  ID IVar1;
  
  IVar1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (IVar1 != 0) {
    FUN_10007a614();
    FUN_100011ba4();
    FUN_100011d28();
    IVar1 = objc_stub::window(IVar1);
    if (IVar1 != 0) {
      objc_stub::performClose_(IVar1,0);
    }
    return 0;
  }
  return 0;
}



/* Address: 0x10007a8c8 | FUN_10007a8c8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10007a8c8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  
  param_3 = param_3 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_3 != 0) {
    plVar1 = *(long **)(param_3 + _TtC5Paste15ItemPreviewView::viewModel);
    _swift_retain(plVar1);
    (**(code **)(*plVar1 + 200))(param_1,param_2);
    _swift_release(plVar1);
    return;
  }
  return;
}



/* Address: 0x10007a948 | FUN_10007a948 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10007a948(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 != 0) {
    puVar1 = &DAT_100fa6b80;
    FUN_1000037f0(&DAT_100fa6b80,&DAT_100c23760);
    _swift_initStackObject();
    *(undefined8 *)(puVar1 + 0x18) = 3;
    *(undefined8 *)(puVar1 + 0x10) = 1;
    puVar2 = puVar1;
    (**(code **)(**(long **)(param_2 + _TtC5Paste15ItemPreviewView::viewModel) + 0x70))();
    *(undefined **)(puVar1 + 0x20) = puVar2;
    FUN_100018620(0);
    _swift_initStackObject();
    FUN_1000183e0();
    objc_stub::showRelativeToRect_ofView_preferredEdge_(*(ID *)(puVar1 + 0x10),0,0,0,0,param_1,1);
    _swift_release(puVar1);
  }
  return;
}



/* Address: 0x10007aa1c | FUN_10007aa1c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10007aa1c(undefined8 param_1,long param_2)

{
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 != 0) {
    FUN_10007c378(param_1);
    return 0;
  }
  return 0;
}



/* Address: 0x10007aa60 | FUN_10007aa60 */

void FUN_10007aa60(void)

{
  FUN_10007aa7c(&_TtC5Paste15ItemPreviewView::___lazy_storage___editorHeader,FUN_100014710,
                FUN_10007aafc);
  return;
}



/* Address: 0x10007aa7c | FUN_10007aa7c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10007aa7c(long *param_1,code *param_2,code *param_3)

{
  ID self;
  long unaff_x20;
  long lVar1;
  
  lVar1 = *param_1;
  self = *(ID *)(unaff_x20 + lVar1);
  if (self == 0) {
    (*param_2)();
    _objc_allocWithZone();
    self = objc_stub::init(self);
    (*param_3)();
    *(ID *)(unaff_x20 + lVar1) = self;
  }
  return self;
}



/* Address: 0x10007aafc | FUN_10007aafc */

void FUN_10007aafc(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar5 = &DAT_100eb2e58;
  puVar4 = puVar5;
  _swift_allocObject(&DAT_100eb2e58,0x18,7);
  _swift_unknownObjectWeakInit(puVar4 + 0x10,param_2);
  puVar1 = (undefined8 *)(param_1 + _TtCC5Paste15ItemPreviewView12EditorHeader::onCancel);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = FUN_10007c914;
  puVar1[1] = puVar4;
  _swift_retain(puVar4);
  FUN_100004550(uVar2,uVar3);
  _swift_release(puVar4);
  _swift_allocObject(&DAT_100eb2e58,0x18,7);
  _swift_unknownObjectWeakInit(puVar5 + 0x10,param_2);
  puVar1 = (undefined8 *)(param_1 + _TtCC5Paste15ItemPreviewView12EditorHeader::onSave);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = FUN_10007c934;
  puVar1[1] = puVar5;
  _swift_retain(puVar5);
  FUN_100004550(uVar2,uVar3);
  _swift_release(puVar5);
  FUN_100208674(0);
  return;
}



/* Address: 0x10007abf4 | FUN_10007abf4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10007abf4(long param_1,code *param_2)

{
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    (*param_2)();
    return 0;
  }
  return 0;
}



/* Address: 0x10007ac34 | FUN_10007ac34 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1 * FUN_10007ac34(void)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_50 [32];
  
  lVar1 = _TtC5Paste15ItemPreviewView::___lazy_storage___contentView;
  puVar3 = auStack_50;
  puVar2 = *(undefined1 **)(unaff_x20 + _TtC5Paste15ItemPreviewView::___lazy_storage___contentView);
  if (puVar2 == (undefined1 *)0x0) {
    FUN_1003c3c90(auStack_50);
    FUN_1003df674();
    FUN_100004594(auStack_50);
    FUN_10007acd8(puVar3);
    *(undefined1 **)(unaff_x20 + lVar1) = puVar3;
    puVar2 = puVar3;
  }
  return puVar2;
}



/* Address: 0x10007acd8 | FUN_10007acd8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10007acd8(ID param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  ID IVar4;
  ID IVar5;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  ID local_80;
  undefined1 auStack_78 [24];
  undefined8 local_60;
  long lStack_58;
  
  uVar3 = 0;
  uVar1 = 0;
  local_80 = param_1;
  FUN_10000ec2c(0,&DAT_100fa6b90,&PTR__OBJC_CLASS___NSView_100f8d628);
  puVar2 = &DAT_100fa6550;
  FUN_1000037f0(&DAT_100fa6550,&DAT_100c22d40);
  _swift_dynamicCast(&local_b0,&local_80,uVar1,puVar2,6);
  if ((uVar3 & 1) == 0) {
    local_90 = 0;
    uStack_a8 = 0;
    local_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    FUN_100005808(&local_b0,&DAT_100fa6558,&DAT_100c22d48);
  }
  else {
    FUN_100076508(&local_b0,auStack_78);
    puVar2 = &DAT_100eb2e58;
    _swift_allocObject(&DAT_100eb2e58,0x18,7);
    _swift_unknownObjectWeakInit(puVar2 + 0x10,param_2);
    FUN_10007d048(auStack_78,local_60);
    (**(code **)(lStack_58 + 0x10))(FUN_10007d040,puVar2,local_60,lStack_58);
    FUN_100004594(auStack_78);
  }
  FUN_10000ec2c(0,&DAT_100fa8670,&PTR__OBJC_CLASS___NSColor_100f8d680);
  IVar4 = NSColor::blackColor((ID)&_OBJC_CLASS___NSColor);
  FUN_1002067b8(0x3fb999999999999a,IVar4);
  IVar5 = NSColor::whiteColor((ID)&_OBJC_CLASS___NSColor);
  FUN_1002067b8(0x3fb999999999999a,IVar5);
  FUN_1002066dc(IVar4,IVar5);
  objc_stub::setBorderColor_(param_1,IVar4);
  uVar1 = 0;
  FUN_1003ecfd4(0);
  IVar5 = param_1;
  _swift_dynamicCastClass(param_1,uVar1);
  uVar1 = 0x3fe0000000000000;
  if (IVar5 != 0) {
    uVar1 = 0;
  }
  objc_stub::setBorderWidth_(param_1,uVar1);
  objc_stub::setCornerRadius_curve_
            (param_1,0x4014000000000000,*(undefined8 *)PTR__kCACornerCurveCircular_100eaa398);
  return;
}



/* Address: 0x10007af08 | FUN_10007af08 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10007af08(uint param_1,long param_2)

{
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 != 0) {
    FUN_10007aa60();
    FUN_100013af4(0);
    FUN_10023dd84(param_1 & 1);
    return 0;
  }
  return 0;
}



/* Address: 0x10007af7c | FUN_10007af7c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10007af7c(void)

{
  long lVar1;
  ID IVar2;
  undefined *self;
  long unaff_x20;
  
  lVar1 = _TtC5Paste15ItemPreviewView::___lazy_storage___footer;
  IVar2 = *(ID *)(unaff_x20 + _TtC5Paste15ItemPreviewView::___lazy_storage___footer);
  if (IVar2 == 0) {
    self = &_OBJC_CLASS___NSView;
    _objc_allocWithZone();
    IVar2 = objc_stub::init((ID)self);
    *(ID *)(unaff_x20 + lVar1) = IVar2;
  }
  return IVar2;
}



/* Address: 0x10007afe8 | FUN_10007afe8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

undefined * FUN_10007afe8(ID param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ID *pIVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  ID *pIVar8;
  ID IVar9;
  ID IVar10;
  ID *pIVar11;
  ID IVar12;
  ID IVar13;
  ID IVar14;
  ID *pIVar15;
  ID IVar16;
  ID IVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  ID local_a8 [3];
  ID local_90;
  undefined **local_88;
  ID local_80;
  
  IVar16 = param_1;
  FUN_10007a614();
  local_80 = IVar16;
  FUN_10007c86c();
  local_88 = &PTR_PTR_100ec00e8;
  uVar3 = 0;
  local_a8[0] = param_1;
  local_90 = IVar16;
  FUN_100013064(0);
  pIVar4 = local_a8;
  FUN_1001f9b74(0,pIVar4,uVar3,&PTR_PTR_100ec00e8);
  FUN_100004594(local_a8);
  lVar1 = _TtC5Paste15ItemPreviewView::___lazy_storage___previewHeader;
  IVar5 = objc_stub::heightAnchor
                    (*(ID *)(param_1 + _TtC5Paste15ItemPreviewView::___lazy_storage___previewHeader)
                    );
  IVar6 = objc_stub::constraintEqualToConstant_(IVar5,0x4043000000000000);
  IVar5 = objc_stub::topAnchor(*(ID *)(param_1 + lVar1));
  IVar7 = objc_stub::topAnchor(param_1);
  IVar7 = objc_stub::constraintEqualToAnchor_(IVar5,IVar7);
  IVar5 = IVar7;
  FUN_10007aa60();
  local_88 = &PTR_PTR_100ec00e8;
  uVar3 = 0;
  local_a8[0] = param_1;
  local_90 = IVar16;
  local_80 = IVar5;
  FUN_100014710(0);
  pIVar8 = local_a8;
  FUN_1001f9b74(0,pIVar8,uVar3,&PTR_PTR_100ec00e8);
  FUN_100004594(local_a8);
  lVar2 = _TtC5Paste15ItemPreviewView::___lazy_storage___editorHeader;
  IVar5 = objc_stub::heightAnchor
                    (*(ID *)(param_1 + _TtC5Paste15ItemPreviewView::___lazy_storage___editorHeader))
  ;
  IVar9 = objc_stub::constraintEqualToConstant_(IVar5,0x4043000000000000);
  IVar5 = objc_stub::topAnchor(*(ID *)(param_1 + lVar2));
  IVar10 = objc_stub::topAnchor(param_1);
  IVar10 = objc_stub::constraintEqualToAnchor_(IVar5,IVar10);
  IVar5 = IVar10;
  FUN_10007ac34();
  local_88 = &PTR_PTR_100ec00e8;
  uVar3 = 0;
  local_a8[0] = param_1;
  local_90 = IVar16;
  local_80 = IVar5;
  FUN_10000ec2c(0,&DAT_100fa6b90,&PTR__OBJC_CLASS___NSView_100f8d628);
  pIVar11 = local_a8;
  FUN_1001f9b74(0x4014000000000000,pIVar11,uVar3,&PTR_PTR_100ec00e8);
  FUN_100004594(local_a8);
  lVar2 = _TtC5Paste15ItemPreviewView::___lazy_storage___contentView;
  IVar5 = objc_stub::topAnchor
                    (*(ID *)(param_1 + _TtC5Paste15ItemPreviewView::___lazy_storage___contentView));
  IVar12 = objc_stub::bottomAnchor(*(ID *)(param_1 + lVar1));
  IVar12 = objc_stub::constraintEqualToAnchor_(IVar5,IVar12);
  IVar13 = objc_stub::bottomAnchor(*(ID *)(param_1 + lVar2));
  IVar5 = IVar13;
  FUN_10007af7c();
  IVar5 = objc_stub::topAnchor(IVar5);
  IVar5 = objc_stub::constraintEqualToAnchor_(IVar13,IVar5);
  IVar13 = objc_stub::widthAnchor(*(ID *)(param_1 + lVar2));
  IVar13 = objc_stub::constraintGreaterThanOrEqualToConstant_(IVar13,0x4077c00000000000);
  IVar14 = objc_stub::heightAnchor(*(ID *)(param_1 + lVar2));
  IVar14 = objc_stub::constraintGreaterThanOrEqualToConstant_(IVar14,0x406e000000000000);
  lVar1 = _TtC5Paste15ItemPreviewView::___lazy_storage___footer;
  local_80 = *(undefined8 *)(param_1 + _TtC5Paste15ItemPreviewView::___lazy_storage___footer);
  local_88 = &PTR_PTR_100ec00e8;
  pIVar15 = local_a8;
  local_a8[0] = param_1;
  local_90 = IVar16;
  FUN_1001f9b74(0,pIVar15,uVar3,&PTR_PTR_100ec00e8);
  FUN_100004594(local_a8);
  IVar16 = objc_stub::bottomAnchor(*(ID *)(param_1 + lVar1));
  IVar17 = objc_stub::bottomAnchor(param_1);
  IVar16 = objc_stub::constraintEqualToAnchor_(IVar16,IVar17);
  puVar18 = &DAT_100fa8830;
  FUN_1000037f0(&DAT_100fa8830,&DAT_100c24a20);
  _swift_initStackObject();
  *(undefined8 *)(puVar18 + 0x18) = 0x1a;
  *(undefined8 *)(puVar18 + 0x10) = 0xd;
  puVar19 = &DAT_100fa8840;
  FUN_1000037f0(&DAT_100fa8840,&DAT_100c237d0);
  *(undefined **)(puVar18 + 0x38) = puVar19;
  *(undefined ***)(puVar18 + 0x40) = &PTR_PTR_100ec00b8;
  *(ID **)(puVar18 + 0x20) = pIVar4;
  uVar3 = 0;
  FUN_10000ec2c(0,&DAT_100fa86a0,&PTR__OBJC_CLASS___NSLayoutConstraint_100f8d660);
  *(undefined8 *)(puVar18 + 0x60) = uVar3;
  *(undefined ***)(puVar18 + 0x68) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar18 + 0x48) = IVar6;
  *(undefined8 *)(puVar18 + 0x88) = uVar3;
  *(undefined ***)(puVar18 + 0x90) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar18 + 0x70) = IVar7;
  *(undefined **)(puVar18 + 0xb0) = puVar19;
  *(undefined ***)(puVar18 + 0xb8) = &PTR_PTR_100ec00b8;
  *(ID **)(puVar18 + 0x98) = pIVar8;
  *(undefined8 *)(puVar18 + 0xd8) = uVar3;
  *(undefined ***)(puVar18 + 0xe0) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar18 + 0xc0) = IVar9;
  *(undefined8 *)(puVar18 + 0x100) = uVar3;
  *(undefined ***)(puVar18 + 0x108) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar18 + 0xe8) = IVar10;
  *(undefined **)(puVar18 + 0x128) = puVar19;
  *(undefined ***)(puVar18 + 0x130) = &PTR_PTR_100ec00b8;
  *(ID **)(puVar18 + 0x110) = pIVar11;
  *(undefined8 *)(puVar18 + 0x150) = uVar3;
  *(undefined ***)(puVar18 + 0x158) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar18 + 0x138) = IVar12;
  *(undefined8 *)(puVar18 + 0x178) = uVar3;
  *(undefined ***)(puVar18 + 0x180) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar18 + 0x160) = IVar5;
  *(undefined8 *)(puVar18 + 0x1a0) = uVar3;
  *(undefined ***)(puVar18 + 0x1a8) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar18 + 0x188) = IVar13;
  *(undefined8 *)(puVar18 + 0x1c8) = uVar3;
  *(undefined ***)(puVar18 + 0x1d0) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar18 + 0x1b0) = IVar14;
  *(undefined **)(puVar18 + 0x1f0) = puVar19;
  *(undefined ***)(puVar18 + 0x1f8) = &PTR_PTR_100ec00b8;
  *(ID **)(puVar18 + 0x1d8) = pIVar15;
  *(undefined8 *)(puVar18 + 0x218) = uVar3;
  *(undefined ***)(puVar18 + 0x220) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar18 + 0x200) = IVar16;
  _swift_bridgeObjectRetain(pIVar4);
  _swift_bridgeObjectRetain(pIVar8);
  _swift_bridgeObjectRetain(pIVar11);
  puVar20 = puVar18;
  FUN_1001f8d60(puVar18);
  _swift_bridgeObjectRelease(pIVar4);
  _swift_bridgeObjectRelease(pIVar8);
  _swift_bridgeObjectRelease(pIVar11);
  _swift_setDeallocating(puVar18);
  uVar3 = *(undefined8 *)(puVar18 + 0x10);
  puVar19 = &DAT_100fa6bc0;
  FUN_1000037f0(&DAT_100fa6bc0,&DAT_100c24a30);
  _swift_arrayDestroy(puVar18 + 0x20,uVar3,puVar19);
  return puVar20;
}



/* Address: 0x10007b660 | FUN_10007b660 */

undefined * FUN_10007b660(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 local_60 [3];
  undefined8 local_48;
  undefined **ppuStack_40;
  undefined8 local_38;
  
  local_38 = param_1;
  FUN_10007aa60();
  uVar1 = 0;
  FUN_100014710();
  ppuStack_40 = &PTR_PTR_100ec00e8;
  uVar2 = 0;
  local_60[0] = param_1;
  local_48 = uVar1;
  FUN_10000ec2c(0,&DAT_100fa6b90,&PTR__OBJC_CLASS___NSView_100f8d628);
  puVar3 = local_60;
  FUN_1001f9a0c(0,0,puVar3,uVar2,&PTR_PTR_100ec00e8);
  FUN_100004594(local_60);
  puVar4 = &DAT_100fa8830;
  FUN_1000037f0(&DAT_100fa8830,&DAT_100c24a20);
  _swift_initStackObject();
  *(undefined8 *)(puVar4 + 0x18) = 2;
  *(undefined8 *)(puVar4 + 0x10) = 1;
  puVar5 = &DAT_100fa8840;
  FUN_1000037f0(&DAT_100fa8840,&DAT_100c237d0);
  *(undefined **)(puVar4 + 0x38) = puVar5;
  *(undefined ***)(puVar4 + 0x40) = &PTR_PTR_100ec00b8;
  *(undefined8 **)(puVar4 + 0x20) = puVar3;
  puVar6 = puVar4;
  FUN_1001f8d60(puVar4);
  _swift_setDeallocating(puVar4);
  uVar1 = *(undefined8 *)(puVar4 + 0x10);
  puVar5 = &DAT_100fa6bc0;
  FUN_1000037f0(&DAT_100fa6bc0,&DAT_100c24a30);
  _swift_arrayDestroy(puVar4 + 0x20,uVar1,puVar5);
  return puVar6;
}



/* Address: 0x10007b784 | FUN_10007b784 */

undefined * FUN_10007b784(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 local_80 [3];
  undefined8 *local_68;
  undefined **ppuStack_60;
  undefined8 local_58;
  
  local_58 = param_1;
  FUN_10007af7c();
  puVar1 = (undefined8 *)0x0;
  FUN_10000ec2c(0,&DAT_100fa6b90,&PTR__OBJC_CLASS___NSView_100f8d628);
  ppuStack_60 = &PTR_PTR_100ec00e8;
  local_80[0] = param_1;
  local_68 = puVar1;
  FUN_1001f9774();
  uVar6 = *puVar1;
  uVar7 = puVar1[1];
  uVar8 = puVar1[2];
  uVar9 = puVar1[3];
  uVar2 = 0;
  FUN_1003df434(0);
  puVar1 = local_80;
  FUN_1001f97b4(uVar6,uVar7,uVar8,uVar9,puVar1,uVar2,&PTR_PTR_100ec00e8);
  FUN_100004594(local_80);
  puVar3 = &DAT_100fa8830;
  FUN_1000037f0(&DAT_100fa8830,&DAT_100c24a20);
  _swift_initStackObject();
  *(undefined8 *)(puVar3 + 0x18) = 2;
  *(undefined8 *)(puVar3 + 0x10) = 1;
  puVar4 = &DAT_100fa8840;
  FUN_1000037f0(&DAT_100fa8840,&DAT_100c237d0);
  *(undefined **)(puVar3 + 0x38) = puVar4;
  *(undefined ***)(puVar3 + 0x40) = &PTR_PTR_100ec00b8;
  *(undefined8 **)(puVar3 + 0x20) = puVar1;
  puVar5 = puVar3;
  FUN_1001f8d60(puVar3);
  _swift_setDeallocating(puVar3);
  uVar2 = *(undefined8 *)(puVar3 + 0x10);
  puVar4 = &DAT_100fa6bc0;
  FUN_1000037f0(&DAT_100fa6bc0,&DAT_100c24a30);
  _swift_arrayDestroy(puVar3 + 0x20,uVar2,puVar4);
  return puVar5;
}



/* Address: 0x10007b8cc | FUN_10007b8cc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Type propagation algorithm not settling */

MainActor * FUN_10007b8cc(ID *param_1,long param_2)

{
  bool bVar1;
  MainActor *pMVar2;
  MainActor *pMVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  ID IVar6;
  ID self;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long *plVar10;
  ID IVar11;
  long local_78 [7];
  
  IVar11 = *param_1;
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  pMVar3 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  pMVar2 = pMVar3;
  FUN_1000081a8();
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/ItemPreviewView.swift",0x1b,1,0x5c,UVar4.unknown,pMVar2);
  }
  IVar6 = objc_stub::isDeleted(IVar11);
  self = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if ((int)IVar6 != 0) {
    if (self != 0) {
      FUN_10007a614();
      FUN_100011ba4();
      FUN_100011d28();
      IVar11 = objc_stub::window(self);
      if (IVar11 == 0) {
        _swift_release(pMVar3);
      }
      else {
        objc_stub::performClose_(IVar11,0);
        _swift_release(pMVar3);
      }
      return (MainActor *)0x0;
    }
LAB_10007ba90:
    _swift_release(pMVar3);
    return pMVar3;
  }
  if (self != 0) {
    FUN_10007a614();
    FUN_100011e00(IVar11);
  }
  lVar7 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar7 == 0) goto LAB_10007ba90;
  FUN_10007a614();
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 != 0) {
    FUN_10007ac34();
    uVar8 = 0;
    local_78[0] = param_2;
    FUN_10000ec2c(0,&DAT_100fa6b90,&PTR__OBJC_CLASS___NSView_100f8d628);
    puVar9 = &DAT_100fa6550;
    FUN_1000037f0(&DAT_100fa6550,&DAT_100c22d40);
    plVar10 = local_78 + 1;
    _swift_dynamicCast(plVar10,local_78,uVar8,puVar9,6);
    if ((int)plVar10 != 0) {
      bVar1 = local_78[4] != 0;
      goto LAB_10007babc;
    }
  }
  bVar1 = false;
  local_78[5] = 0;
  local_78[2] = 0;
  local_78[1] = 0;
  local_78[4] = 0;
  local_78[3] = 0;
LAB_10007babc:
  FUN_100011a74();
  FUN_100208674(bVar1);
  FUN_100005808(local_78 + 1,&DAT_100fa6558,&DAT_100c22d48);
  _swift_release(pMVar3);
  return pMVar3;
}


