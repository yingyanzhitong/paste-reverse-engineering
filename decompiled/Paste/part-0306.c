/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1003d7e54 | FUN_1003d7e54 */

undefined1  [16] FUN_1003d7e54(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _TtC11PasteCoreUI8ItemCell::preferredCompactHeaderStyle;
  _swift_beginAccess(unaff_x20 + _TtC11PasteCoreUI8ItemCell::preferredCompactHeaderStyle,param_1,
                     0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = _swift_endAccess;
  return auVar2;
}



/* Address: 0x1003d7e94 | FUN_1003d7e94 */

undefined1  [16] FUN_1003d7e94(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + _TtC11PasteCoreUI8ItemCell::userSettingsProvider);
  _swift_beginAccess(pauVar1,auStack_38,0,0);
  auVar2 = *pauVar1;
  FUN_100011128(*(undefined8 *)*pauVar1,*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Address: 0x1003d7eec | FUN_1003d7eec */

void FUN_1003d7eec(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _TtC11PasteCoreUI8ItemCell::userSettingsProvider);
  _swift_beginAccess(puVar1,auStack_58,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  FUN_100011128(param_1,param_2);
  FUN_100004550(uVar2,uVar3);
  puVar1 = (undefined8 *)
           (*(long *)(unaff_x20 + _TtC11PasteCoreUI8ItemCell::shortcutView) +
           _TtCC11PasteCoreUI8ItemCell21ShortcutIndicatorView::userSettingsProvider);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  FUN_100004550(uVar2,uVar3);
  return;
}



/* Address: 0x1003d7f8c | FUN_1003d7f8c */

undefined1  [16] FUN_1003d7f8c(undefined8 *param_1)

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
    _swift_coroFrameAlloc(0x28,0xadd0);
  }
  *param_1 = pvVar2;
  lVar1 = _TtC11PasteCoreUI8ItemCell::userSettingsProvider;
  *(long *)((long)pvVar2 + 0x18) = unaff_x20;
  *(long *)((long)pvVar2 + 0x20) = lVar1;
  _swift_beginAccess(unaff_x20 + lVar1,pvVar2,0x21,0);
  auVar3._8_8_ = unaff_x20 + lVar1;
  auVar3._0_8_ = FUN_1003d7ff8;
  return auVar3;
}



/* Address: 0x1003d7ff8 | FUN_1003d7ff8 */

void FUN_1003d7ff8(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  void *pvVar6;
  
  pvVar6 = (void *)*param_1;
  _swift_endAccess(pvVar6);
  if ((param_2 & 1) == 0) {
    puVar1 = (undefined8 *)(*(long *)((long)pvVar6 + 0x18) + *(long *)((long)pvVar6 + 0x20));
    uVar4 = puVar1[1];
    puVar2 = (undefined8 *)
             (*(long *)(*(long *)((long)pvVar6 + 0x18) + _TtC11PasteCoreUI8ItemCell::shortcutView) +
             _TtCC11PasteCoreUI8ItemCell21ShortcutIndicatorView::userSettingsProvider);
    uVar3 = *puVar2;
    uVar5 = puVar2[1];
    *puVar2 = *puVar1;
    puVar2[1] = uVar4;
    FUN_100011128();
    FUN_100004550(uVar3,uVar5);
  }
  _free(pvVar6);
  return;
}



/* Address: 0x1003d8070 | FUN_1003d8070 */

undefined1  [16] FUN_1003d8070(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  
  pauVar1 = (undefined1 (*) [16])
            (*(long *)(*(long *)(unaff_x20 + _TtC11PasteCoreUI8ItemCell::headerView) +
                      _TtCC11PasteCoreUI8ItemCell10HeaderView::titleLabel) +
            _TtCCC11PasteCoreUI8ItemCell10HeaderView10TitleLabel::onCommitEditing);
  auVar2 = *pauVar1;
  FUN_100011128(*(undefined8 *)*pauVar1,*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Address: 0x1003d80c8 | FUN_1003d80c8 */

void FUN_1003d80c8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  puVar1 = (undefined8 *)
           (*(long *)(*(long *)(unaff_x20 + _TtC11PasteCoreUI8ItemCell::headerView) +
                     _TtCC11PasteCoreUI8ItemCell10HeaderView::titleLabel) +
           _TtCCC11PasteCoreUI8ItemCell10HeaderView10TitleLabel::onCommitEditing);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  FUN_100011128();
  FUN_100004550(uVar2,uVar3);
  FUN_100004550(param_1,param_2);
  return;
}



/* Address: 0x1003d8138 | FUN_1003d8138 */

undefined1  [16] FUN_1003d8138(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auVar5 [16];
  
  lVar3 = _TtCC11PasteCoreUI8ItemCell10HeaderView::titleLabel;
  lVar4 = *(long *)(unaff_x20 + _TtC11PasteCoreUI8ItemCell::headerView);
  param_1[2] = lVar4;
  param_1[3] = lVar3;
  puVar1 = (undefined8 *)
           (*(long *)(lVar4 + lVar3) +
           _TtCCC11PasteCoreUI8ItemCell10HeaderView10TitleLabel::onCommitEditing);
  uVar2 = puVar1[1];
  *param_1 = *puVar1;
  param_1[1] = uVar2;
  FUN_100011128();
  auVar5._8_8_ = param_1;
  auVar5._0_8_ = FUN_1003d8198;
  return auVar5;
}



/* Address: 0x1003d8198 | FUN_1003d8198 */

void FUN_1003d8198(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = *param_1;
  uVar3 = param_1[1];
  puVar1 = (undefined8 *)
           (*(long *)(param_1[2] + param_1[3]) +
           _TtCCC11PasteCoreUI8ItemCell10HeaderView10TitleLabel::onCommitEditing);
  uVar4 = *puVar1;
  uVar5 = puVar1[1];
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  FUN_100011128(uVar2,uVar3);
  if ((param_2 & 1) != 0) {
    FUN_100011128(uVar2,uVar3);
    FUN_100004550(uVar4,uVar5);
    uVar4 = uVar2;
    uVar5 = uVar3;
  }
  FUN_100004550(uVar4,uVar5);
  FUN_100004550(uVar2,uVar3);
  return;
}



/* Address: 0x1003d8230 | FUN_1003d8230 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1003d8230(void)

{
  long lVar1;
  ID IVar2;
  ID IVar3;
  long unaff_x20;
  
  lVar1 = _TtC11PasteCoreUI8ItemCell::___lazy_storage___contentTopAnchorConstraint;
  IVar2 = *(ID *)(unaff_x20 +
                 _TtC11PasteCoreUI8ItemCell::___lazy_storage___contentTopAnchorConstraint);
  if (IVar2 == 0) {
    IVar2 = objc_stub::topAnchor(*(ID *)(unaff_x20 + _TtC11PasteCoreUI8ItemCell::bodyView));
    IVar3 = objc_stub::topAnchor(*(ID *)(unaff_x20 + _TtC11PasteCoreUI8BaseCell::contentView));
    IVar2 = objc_stub::constraintEqualToAnchor_(IVar2,IVar3);
    *(ID *)(unaff_x20 + lVar1) = IVar2;
  }
  return IVar2;
}



/* Address: 0x1003d82fc | FUN_1003d82fc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1003d82fc(void)

{
  long lVar1;
  ID IVar2;
  ID IVar3;
  long unaff_x20;
  
  lVar1 = _TtC11PasteCoreUI8ItemCell::___lazy_storage___lockViewCenterYConstraint;
  IVar2 = *(ID *)(unaff_x20 +
                 _TtC11PasteCoreUI8ItemCell::___lazy_storage___lockViewCenterYConstraint);
  if (IVar2 == 0) {
    IVar2 = objc_stub::centerYAnchor(*(ID *)(unaff_x20 + _TtC11PasteCoreUI8ItemCell::lockView));
    IVar3 = objc_stub::centerYAnchor(*(ID *)(unaff_x20 + _TtC11PasteCoreUI8ItemCell::bodyView));
    IVar2 = objc_stub::constraintEqualToAnchor_(IVar2,IVar3);
    *(ID *)(unaff_x20 + lVar1) = IVar2;
  }
  return IVar2;
}



/* Address: 0x1003d83c4 | FUN_1003d83c4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1003d83c4(void)

{
  long lVar1;
  ID IVar2;
  long unaff_x20;
  
  lVar1 = _TtC11PasteCoreUI8ItemCell::___lazy_storage___headerHeightConstraint;
  IVar2 = *(ID *)(unaff_x20 + _TtC11PasteCoreUI8ItemCell::___lazy_storage___headerHeightConstraint);
  if (IVar2 == 0) {
    IVar2 = objc_stub::heightAnchor(*(ID *)(unaff_x20 + _TtC11PasteCoreUI8ItemCell::headerView));
    IVar2 = objc_stub::constraintEqualToConstant_(IVar2,0x4024000000000000);
    *(ID *)(unaff_x20 + lVar1) = IVar2;
  }
  return IVar2;
}



/* Address: 0x1003d8464 | FUN_1003d8464 */

void FUN_1003d8464(undefined8 param_1,undefined1 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  puVar1 = (undefined8 *)
           (*(long *)(unaff_x20 + _TtC11PasteCoreUI8ItemCell::shortcutView) +
           _TtCC11PasteCoreUI8ItemCell21ShortcutIndicatorView::quickPasteIndex);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = param_2;
  FUN_1003d6444();
  return;
}



/* Address: 0x1003d84a4 | FUN_1003d84a4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003d84a4(double param_1,double param_2,double param_3,undefined8 param_4,ID param_5)

{
  ID IVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar2 = param_1;
  FUN_1003d8588();
  IVar1 = param_5;
  dVar3 = dVar2;
  dVar4 = param_2;
  dVar5 = param_3;
  FUN_1003d8588();
  dVar6 = 1.0 - param_1;
  FUN_1003d8230();
  objc_stub::setConstant_(IVar1,dVar6 * dVar2 + param_1 * dVar3);
  IVar1 = 0;
  FUN_1003d83c4();
  objc_stub::setConstant_(IVar1,dVar6 * param_2 + param_1 * dVar4);
  IVar1 = 0;
  FUN_1003d82fc();
  objc_stub::setConstant_(IVar1,dVar6 * param_3 + param_1 * dVar5);
  FUN_1003d4ce0(param_1,param_4,param_5);
  return;
}



/* Address: 0x1003d8588 | FUN_1003d8588 */

undefined8 FUN_1003d8588(undefined8 param_1,undefined8 param_2,byte param_3)

{
  byte bVar1;
  long lVar2;
  byte bVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_48 [24];
  
  lVar2 = _TtC11PasteCoreUI8ItemCell::isCompactContentFullsize;
  if (param_3 < 2) {
    uVar4 = 0x404c000000000000;
    if (param_3 != 0) {
      uVar4 = 0x404a000000000000;
    }
  }
  else if (param_3 == 2) {
    uVar4 = 0x4048000000000000;
  }
  else {
    _swift_beginAccess(param_1,param_2,0xc024000000000000,
                       unaff_x20 + _TtC11PasteCoreUI8ItemCell::isCompactContentFullsize,auStack_48,0
                       ,0);
    bVar1 = *(byte *)(unaff_x20 + lVar2);
    bVar3 = Swift::_stdlib_isOSVersionAtLeast(0x1a,0,0);
    uVar4 = 0x4042000000000000;
    if ((bVar3 & 1) == 0) {
      uVar4 = 0x4041000000000000;
    }
    Swift::_stdlib_isOSVersionAtLeast(0x1a,0,0);
    if ((bVar1 & 1) != 0) {
      uVar4 = 0;
    }
  }
  return uVar4;
}



/* Address: 0x1003d868c | FUN_1003d868c */

void FUN_1003d868c(void)

{
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + _TtC11PasteCoreUI8ItemCell::isEditable) == '\x01') {
    FUN_1003d2488();
  }
  return;
}



/* Address: 0x1003d86d4 | FUN_1003d86d4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1003d86d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  ID IVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined1 auStack_f0 [16];
  ID local_e0;
  
  *(undefined1 *)(unaff_x20 + _TtC11PasteCoreUI8ItemCell::isCompactContentFullsize) = 0;
  *(undefined1 *)(unaff_x20 + _TtC11PasteCoreUI8ItemCell::preferredCompactHeaderStyle) = 2;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC11PasteCoreUI8ItemCell::userSettingsProvider);
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar2 = _TtC11PasteCoreUI8ItemCell::shortcutView;
  IVar3 = 0;
  FUN_1003d7578();
  _objc_allocWithZone();
  IVar3 = objc_stub::init(IVar3);
  *(ID *)(unaff_x20 + lVar2) = IVar3;
  lVar2 = _TtC11PasteCoreUI8ItemCell::headerView;
  IVar3 = 0;
  FUN_1003d4f80();
  _swift_getObjCClassFromMetadata();
  _objc_allocWithZone();
  IVar3 = objc_stub::init(IVar3);
  *(ID *)(unaff_x20 + lVar2) = IVar3;
  lVar2 = _TtC11PasteCoreUI8ItemCell::bodyView;
  puVar4 = &_OBJC_CLASS___NSView;
  _objc_allocWithZone();
  IVar3 = objc_stub::init((ID)puVar4);
  *(ID *)(unaff_x20 + lVar2) = IVar3;
  lVar2 = _TtC11PasteCoreUI8ItemCell::lockView;
  IVar3 = 0;
  FUN_1003d5a98();
  _objc_allocWithZone();
  IVar3 = objc_stub::init(IVar3);
  *(ID *)(unaff_x20 + lVar2) = IVar3;
  *(undefined8 *)
   (unaff_x20 + _TtC11PasteCoreUI8ItemCell::___lazy_storage___contentTopAnchorConstraint) = 0;
  *(undefined8 *)
   (unaff_x20 + _TtC11PasteCoreUI8ItemCell::___lazy_storage___lockViewCenterYConstraint) = 0;
  *(undefined8 *)(unaff_x20 + _TtC11PasteCoreUI8ItemCell::___lazy_storage___headerHeightConstraint)
       = 0;
  *(undefined1 *)(unaff_x20 + _TtC11PasteCoreUI8ItemCell::isEditable) = 1;
  FUN_1003d9138();
  IVar3 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff70,"initWithFrame:",param_1,
                              param_2,param_3,param_4);
  puVar4 = &DAT_100fc3e80;
  FUN_1000037f0(&DAT_100fc3e80,&DAT_100c45d50);
  _swift_initStackObject();
  *(undefined8 *)(puVar4 + 0x18) = 9;
  *(undefined8 *)(puVar4 + 0x10) = 4;
  *(undefined8 *)(puVar4 + 0x20) = *(undefined8 *)(IVar3 + _TtC11PasteCoreUI8ItemCell::bodyView);
  *(undefined8 *)(puVar4 + 0x28) = *(undefined8 *)(IVar3 + _TtC11PasteCoreUI8ItemCell::headerView);
  *(undefined8 *)(puVar4 + 0x30) = *(undefined8 *)(IVar3 + _TtC11PasteCoreUI8ItemCell::shortcutView)
  ;
  *(undefined8 *)(puVar4 + 0x38) = *(undefined8 *)(IVar3 + _TtC11PasteCoreUI8ItemCell::lockView);
  local_e0 = IVar3;
  FUN_1001fa150(puVar4,FUN_1003d9638,auStack_f0);
  _swift_bridgeObjectRelease();
  _swift_setDeallocating(puVar4);
  _swift_arrayDestroy(puVar4 + 0x20,*(undefined8 *)(puVar4 + 0x10),
                      PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8);
  return IVar3;
}



/* Address: 0x1003d892c | FUN_1003d892c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_1003d892c(long param_1)

{
  long lVar1;
  ID IVar2;
  ID IVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ID *pIVar6;
  ID *pIVar7;
  ID *pIVar8;
  ID *pIVar9;
  ID IVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  ID IVar14;
  ID IVar15;
  ID IVar16;
  ID local_90 [3];
  undefined8 local_78;
  undefined **ppuStack_70;
  
  IVar2 = objc_stub::topAnchor(*(ID *)(param_1 + _TtC11PasteCoreUI8ItemCell::headerView));
  IVar15 = *(ID *)(param_1 + _TtC11PasteCoreUI8BaseCell::contentView);
  IVar3 = objc_stub::topAnchor(IVar15);
  IVar3 = objc_stub::constraintEqualToAnchor_(IVar2,IVar3);
  uVar4 = 0;
  FUN_100236364();
  ppuStack_70 = &PTR_PTR_100ec00e8;
  uVar5 = 0;
  local_90[0] = IVar15;
  local_78 = uVar4;
  FUN_1003d4f80(0);
  pIVar6 = local_90;
  FUN_1001f9b74(0,pIVar6,uVar5,&PTR_PTR_100ec00e8);
  pIVar7 = local_90;
  FUN_100004594();
  FUN_1003d83c4();
  pIVar8 = pIVar7;
  FUN_1003d8230();
  lVar1 = _TtC11PasteCoreUI8ItemCell::bodyView;
  ppuStack_70 = &PTR_PTR_100ec00e8;
  uVar5 = 0;
  local_90[0] = IVar15;
  local_78 = uVar4;
  FUN_10000ec2c(0,&DAT_100fc3e40,&PTR__OBJC_CLASS___NSView_100f8d628);
  pIVar9 = local_90;
  FUN_1001f9b74(0,pIVar9,uVar5,&PTR_PTR_100ec00e8);
  FUN_100004594(local_90);
  IVar16 = *(ID *)(param_1 + lVar1);
  IVar2 = objc_stub::bottomAnchor(IVar16);
  IVar15 = objc_stub::bottomAnchor(IVar15);
  IVar15 = objc_stub::constraintEqualToAnchor_(IVar2,IVar15);
  IVar14 = *(ID *)(param_1 + _TtC11PasteCoreUI8ItemCell::shortcutView);
  IVar2 = objc_stub::trailingAnchor(IVar14);
  IVar10 = objc_stub::trailingAnchor(IVar16);
  IVar10 = objc_stub::constraintEqualToAnchor_constant_(IVar2,0xc020000000000000,IVar10);
  IVar2 = objc_stub::bottomAnchor(IVar14);
  IVar14 = objc_stub::bottomAnchor(IVar16);
  IVar14 = objc_stub::constraintEqualToAnchor_constant_(IVar2,0xc020000000000000,IVar14);
  IVar2 = objc_stub::centerXAnchor(*(ID *)(param_1 + _TtC11PasteCoreUI8ItemCell::lockView));
  IVar16 = objc_stub::centerXAnchor(IVar16);
  IVar16 = objc_stub::constraintEqualToAnchor_(IVar2,IVar16);
  IVar2 = IVar16;
  FUN_1003d82fc();
  puVar11 = &DAT_100fc3b00;
  FUN_1000037f0(&DAT_100fc3b00,&DAT_100c45590);
  _swift_initStackObject();
  *(undefined8 *)(puVar11 + 0x18) = 0x14;
  *(undefined8 *)(puVar11 + 0x10) = 10;
  uVar4 = 0;
  FUN_10000ec2c(0,&DAT_100fc32d0,&PTR__OBJC_CLASS___NSLayoutConstraint_100f8d660);
  *(undefined8 *)(puVar11 + 0x38) = uVar4;
  *(undefined ***)(puVar11 + 0x40) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar11 + 0x20) = IVar3;
  puVar12 = &DAT_100fc3e70;
  FUN_1000037f0(&DAT_100fc3e70,&DAT_100c45d60);
  *(undefined **)(puVar11 + 0x60) = puVar12;
  *(undefined ***)(puVar11 + 0x68) = &PTR_PTR_100ec00b8;
  *(ID **)(puVar11 + 0x48) = pIVar6;
  *(undefined8 *)(puVar11 + 0x88) = uVar4;
  *(undefined ***)(puVar11 + 0x90) = &PTR_PTR_100ec00a8;
  *(ID **)(puVar11 + 0x70) = pIVar7;
  *(undefined8 *)(puVar11 + 0xb0) = uVar4;
  *(undefined ***)(puVar11 + 0xb8) = &PTR_PTR_100ec00a8;
  *(ID **)(puVar11 + 0x98) = pIVar8;
  *(undefined **)(puVar11 + 0xd8) = puVar12;
  *(undefined ***)(puVar11 + 0xe0) = &PTR_PTR_100ec00b8;
  *(ID **)(puVar11 + 0xc0) = pIVar9;
  *(undefined8 *)(puVar11 + 0x100) = uVar4;
  *(undefined ***)(puVar11 + 0x108) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar11 + 0xe8) = IVar15;
  *(undefined8 *)(puVar11 + 0x128) = uVar4;
  *(undefined ***)(puVar11 + 0x130) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar11 + 0x110) = IVar10;
  *(undefined8 *)(puVar11 + 0x150) = uVar4;
  *(undefined ***)(puVar11 + 0x158) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar11 + 0x138) = IVar14;
  *(undefined8 *)(puVar11 + 0x178) = uVar4;
  *(undefined ***)(puVar11 + 0x180) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar11 + 0x160) = IVar16;
  *(undefined8 *)(puVar11 + 0x1a0) = uVar4;
  *(undefined ***)(puVar11 + 0x1a8) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar11 + 0x188) = IVar2;
  _swift_bridgeObjectRetain(pIVar6);
  _swift_bridgeObjectRetain(pIVar9);
  puVar13 = puVar11;
  FUN_1001f8d60(puVar11);
  _swift_bridgeObjectRelease(pIVar6);
  _swift_bridgeObjectRelease(pIVar9);
  _swift_setDeallocating(puVar11);
  uVar4 = *(undefined8 *)(puVar11 + 0x10);
  puVar12 = &DAT_100fc3b10;
  FUN_1000037f0(&DAT_100fc3b10,&DAT_100c455a0);
  _swift_arrayDestroy(puVar11 + 0x20,uVar4,puVar12);
  return puVar13;
}



/* Address: 0x1003d8dd4 | _TtC11PasteCoreUI8ItemCell::initWithFrame: */

/* Function Stack Size: 0x30 bytes */

ID __thiscall
_TtC11PasteCoreUI8ItemCell::initWithFrame_
          (_TtC11PasteCoreUI8ItemCell *this,ID param_1,SEL param_2,CGRect param_3)

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
    pcVar4 = "PasteCoreUI/ItemCell.swift";
    _swift_task_reportUnexpectedExecutor
              ("PasteCoreUI/ItemCell.swift",0x1a,1,0x23,UVar3.unknown,pMVar1);
  }
  FUN_1003d86d4();
  _swift_release(pMVar2);
  return (ID)pcVar4;
}



/* Address: 0x1003d8e9c | FUN_1003d8e9c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003d8e9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ID param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined8 *puVar1;
  char cVar2;
  long lVar3;
  byte bVar4;
  uint uVar5;
  ID IVar6;
  long unaff_x20;
  long lVar7;
  undefined1 auStack_88 [24];
  
  lVar3 = _TtC11PasteCoreUI8ItemCell::preferredCompactHeaderStyle;
  lVar7 = *(long *)(unaff_x20 + _TtC11PasteCoreUI8ItemCell::headerView);
  _swift_beginAccess(unaff_x20 + _TtC11PasteCoreUI8ItemCell::preferredCompactHeaderStyle,auStack_88,
                     0,0);
  cVar2 = '\0';
  if (*(char *)(unaff_x20 + lVar3) != '\x02') {
    cVar2 = *(char *)(unaff_x20 + lVar3);
  }
  *(char *)(lVar7 + _TtCC11PasteCoreUI8ItemCell10HeaderView::compactStyle) = cVar2;
  FUN_1003d41b4(param_4,param_5,param_6);
  uVar5 = (uint)param_4;
  puVar1 = (undefined8 *)
           (*(long *)(unaff_x20 + _TtC11PasteCoreUI8ItemCell::shortcutView) +
           _TtCC11PasteCoreUI8ItemCell21ShortcutIndicatorView::quickPasteIndex);
  *puVar1 = param_7;
  *(undefined1 *)(puVar1 + 1) = param_8;
  FUN_1003d6444();
  FUN_10031c38c();
  FUN_100208674(uVar5 & 1);
  FUN_1003d8588();
  FUN_1003d8230();
  objc_stub::setConstant_(param_5,param_1);
  IVar6 = 0;
  FUN_1003d83c4();
  objc_stub::setConstant_(IVar6,param_2);
  IVar6 = 0;
  FUN_1003d82fc();
  objc_stub::setConstant_(IVar6,param_3);
  bVar4 = 0;
  FUN_10031f040();
  *(byte *)(unaff_x20 + _TtC11PasteCoreUI8ItemCell::isEditable) = bVar4 & 1;
  return;
}



/* Address: 0x1003d9018 | FUN_1003d9018 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_1003d9018(code *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 local_58 [3];
  undefined8 local_40;
  undefined **ppuStack_38;
  
  uVar6 = *(undefined8 *)(param_3 + _TtC11PasteCoreUI8ItemCell::bodyView);
  uVar1 = 0;
  FUN_10000ec2c(0,&DAT_100fc3e40,&PTR__OBJC_CLASS___NSView_100f8d628);
  ppuStack_38 = &PTR_PTR_100ec00e8;
  puVar2 = local_58;
  local_58[0] = uVar6;
  local_40 = uVar1;
  (*param_1)();
  FUN_100004594(local_58);
  puVar3 = &DAT_100fc3b00;
  FUN_1000037f0(&DAT_100fc3b00,&DAT_100c45590);
  _swift_initStackObject();
  *(undefined8 *)(puVar3 + 0x18) = 2;
  *(undefined8 *)(puVar3 + 0x10) = 1;
  puVar4 = &DAT_100fc3e70;
  FUN_1000037f0(&DAT_100fc3e70,&DAT_100c45d60);
  *(undefined **)(puVar3 + 0x38) = puVar4;
  *(undefined ***)(puVar3 + 0x40) = &PTR_PTR_100ec00b8;
  *(undefined8 **)(puVar3 + 0x20) = puVar2;
  puVar5 = puVar3;
  FUN_1001f8d60(puVar3);
  _swift_setDeallocating(puVar3);
  uVar1 = *(undefined8 *)(puVar3 + 0x10);
  puVar4 = &DAT_100fc3b10;
  FUN_1000037f0(&DAT_100fc3b10,&DAT_100c455a0);
  _swift_arrayDestroy(puVar3 + 0x20,uVar1,puVar4);
  return puVar5;
}



/* Address: 0x1003d912c | FUN_1003d912c */

void FUN_1003d912c(undefined8 param_1)

{
  FUN_1003d9174(param_1,&PTR_s_rightMouseDown__100f891b0);
  return;
}



/* Address: 0x1003d9138 | FUN_1003d9138 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1003d9138(void)

{
  return ZEXT816(0x100f99a98);
}



/* Address: 0x1003d9158 | _TtC11PasteCoreUI8ItemCell::rightMouseDown: */

/* Function Stack Size: 0x18 bytes */

void _TtC11PasteCoreUI8ItemCell::rightMouseDown_(ID param_1,SEL param_2,ID param_3)

{
  FUN_1003d91ec();
  return;
}



/* Address: 0x1003d9168 | FUN_1003d9168 */

void FUN_1003d9168(undefined8 param_1)

{
  FUN_1003d9174(param_1,&PTR_s_mouseDown__100f85710);
  return;
}



/* Address: 0x1003d9174 | FUN_1003d9174 */

void FUN_1003d9174(undefined8 param_1,undefined8 *param_2)

{
  FUN_1003d1dbc();
  FUN_1003d9138();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffc0,(SEL)*param_2,param_1);
  return;
}



/* Address: 0x1003d91dc | _TtC11PasteCoreUI8ItemCell::mouseDown: */

/* Function Stack Size: 0x18 bytes */

void _TtC11PasteCoreUI8ItemCell::mouseDown_(ID param_1,SEL param_2,ID param_3)

{
  FUN_1003d91ec();
  return;
}



/* Address: 0x1003d91ec | FUN_1003d91ec */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
FUN_1003d91ec(class_t *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  class_t *pcVar5;
  objc_super local_60;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1003d0b5c();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteCoreUI/ItemCell.swift",0x1a,1,param_4,UVar3.unknown,pMVar1);
  }
  pcVar5 = param_1;
  FUN_1003d1dbc();
  FUN_1003d9138();
  local_60.receiver = (ID)param_1;
  local_60.super_class = pcVar5;
  _objc_msgSendSuper2(&local_60,(SEL)*param_5,param_3);
  _swift_release(pMVar2);
  return 0;
}



/* Address: 0x1003d92f4 | FUN_1003d92f4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1003d92f4(void)

{
  long unaff_x20;
  
  FUN_100004550(*(undefined8 *)(unaff_x20 + _TtC11PasteCoreUI8ItemCell::userSettingsProvider),
                ((undefined8 *)(unaff_x20 + _TtC11PasteCoreUI8ItemCell::userSettingsProvider))[1]);
  return 0;
}



/* Address: 0x1003d9384 | FUN_1003d9384 */

void FUN_1003d9384(void)

{
  FUN_1003d9138();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"dealloc");
  return;
}



/* Address: 0x1003d93b4 | _TtC11PasteCoreUI8ItemCell::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11PasteCoreUI8ItemCell::_cxx_destruct(ID param_1,SEL param_2)

{
  FUN_100004550(*(undefined8 *)(param_1 + userSettingsProvider),
                ((undefined8 *)(param_1 + userSettingsProvider))[1]);
  return;
}



/* Address: 0x1003d9450 | FUN_1003d9450 */

void FUN_1003d9450(void)

{
  undefined8 *unaff_x20;
  
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *(ulong *)*unaff_x20) + 0x218))();
  return;
}



/* Address: 0x1003d9488 | FUN_1003d9488 */

long FUN_1003d9488(long param_1)

{
  undefined8 uVar1;
  
  FUN_1003d95b8();
  _swift_allocObject();
  *(undefined8 *)(param_1 + 0x18) = 0xc;
  *(undefined8 *)(param_1 + 0x10) = 6;
  uVar1 = 0;
  FUN_1003dd14c();
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  uVar1 = 0;
  FUN_1003db754();
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  uVar1 = 0;
  FUN_1003d0b1c();
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  uVar1 = 0;
  FUN_1003cf984();
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  uVar1 = 0;
  FUN_1003cde04();
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  uVar1 = 0;
  FUN_1003de76c();
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  return param_1;
}



/* Address: 0x1003d951c | FUN_1003d951c */

void FUN_1003d951c(ulong param_1)

{
  uint uVar1;
  
  FUN_10031eba8();
  uVar1 = (uint)param_1 & 0xff;
  if (2 < uVar1) {
    if (uVar1 == 3) {
      FUN_1003cf984(0);
      return;
    }
    if (uVar1 == 4) {
      FUN_1003db754(0);
      return;
    }
    FUN_1003dd14c(0);
    return;
  }
  if ((param_1 & 0xff) == 0) {
    FUN_1003de76c(0);
    return;
  }
  if (uVar1 == 1) {
    FUN_1003d0b1c(0);
    return;
  }
  FUN_1003cde04(0);
  return;
}



/* Address: 0x1003d95b8 | FUN_1003d95b8 */

void FUN_1003d95b8(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xd,0,0,0x10,0,0);
  if ((bVar1 & 1) != 0) {
    puVar2 = &DAT_100fc36a8;
    FUN_1000037f0(&DAT_100fc36a8,&DAT_100c45de8);
    puVar3 = puVar2;
    _swift_isClassType();
    if (((int)puVar3 != 0) && (puVar2 != (undefined *)0x0)) {
      puVar2 = &DAT_100fc3e80;
      puVar3 = &DAT_100c45d50;
      goto LAB_1003d962c;
    }
  }
  puVar2 = &DAT_100fc36a0;
  puVar3 = &DAT_100c45de0;
LAB_1003d962c:
  FUN_1000037f0(puVar2,puVar3);
  return;
}



/* Address: 0x1003d9638 | FUN_1003d9638 */

void FUN_1003d9638(void)

{
  long unaff_x20;
  
  FUN_1003d892c(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1003d9640 | FUN_1003d9640 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_1003d9640(void)

{
  long lVar1;
  undefined *self;
  long unaff_x20;
  undefined8 uVar2;
  
  lVar1 = _TtC11PasteCoreUI12LinkItemCell::___lazy_storage___stackView;
  self = *(undefined **)(unaff_x20 + _TtC11PasteCoreUI12LinkItemCell::___lazy_storage___stackView);
  if (self == (undefined *)0x0) {
    FUN_10000ec2c(0,&DAT_100fc3500,&PTR__OBJC_CLASS___NSStackView_100f8d698);
    self = &DAT_100fc3e80;
    FUN_1000037f0(&DAT_100fc3e80,&DAT_100c45d50);
    _swift_allocObject();
    *(undefined8 *)(self + 0x18) = 5;
    *(undefined8 *)(self + 0x10) = 2;
    uVar2 = *(undefined8 *)(unaff_x20 + _TtC11PasteCoreUI12LinkItemCell::footerView);
    *(undefined8 *)(self + 0x20) =
         *(undefined8 *)(unaff_x20 + _TtC11PasteCoreUI12LinkItemCell::previewView);
    *(undefined8 *)(self + 0x28) = uVar2;
    FUN_1000f66dc();
    objc_stub::setDistribution_((ID)self,0);
    objc_stub::setSpacing_((ID)self,0);
    FUN_1000f668c(1);
    *(undefined **)(unaff_x20 + lVar1) = self;
  }
  return self;
}



/* Address: 0x1003d9748 | FUN_1003d9748 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1003d9748(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_e0 [16];
  code *local_d0;
  undefined1 *puStack_c8;
  ID local_c0;
  undefined1 auStack_b0 [16];
  ID local_a0;
  
  _swift_getObjectType();
  lVar6 = _TtC11PasteCoreUI12LinkItemCell::previewView;
  IVar3 = 0;
  FUN_1003db774();
  _objc_allocWithZone();
  IVar3 = objc_stub::initWithFrame_(IVar3,0,0,0,0);
  *(ID *)(unaff_x20 + lVar6) = IVar3;
  lVar6 = _TtC11PasteCoreUI12LinkItemCell::footerView;
  IVar3 = 0;
  FUN_1003db794();
  _objc_allocWithZone();
  IVar3 = objc_stub::initWithFrame_(IVar3,0,0,0,0);
  *(ID *)(unaff_x20 + lVar6) = IVar3;
  *(undefined8 *)(unaff_x20 + _TtC11PasteCoreUI12LinkItemCell::___lazy_storage___stackView) = 0;
  IVar3 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff90,"initWithFrame:",param_1,
                              param_2,param_3,param_4);
  lVar6 = *(long *)(IVar3 + _TtC11PasteCoreUI8ItemCell::shortcutView);
  if (DAT_100fc3778 != -1) {
    _swift_once(&DAT_100fc3778,FUN_1003dad0c);
  }
  puVar1 = (undefined8 *)(lVar6 + _TtCC11PasteCoreUI8ItemCell11OverlayView::background);
  uVar7 = *puVar1;
  *puVar1 = DAT_100fc3780;
  uVar2 = *(undefined1 *)(puVar1 + 1);
  *(undefined1 *)(puVar1 + 1) = 1;
  FUN_1003cd63c(uVar7,uVar2);
  FUN_1003d5b84();
  puVar4 = &DAT_100fc3e80;
  FUN_1000037f0(&DAT_100fc3e80,&DAT_100c45d50);
  _swift_initStackObject();
  *(undefined8 *)(puVar4 + 0x18) = 3;
  *(undefined8 *)(puVar4 + 0x10) = 1;
  puVar5 = puVar4;
  FUN_1003d9640();
  *(undefined **)(puVar4 + 0x20) = puVar5;
  puStack_c8 = auStack_b0;
  local_d0 = FUN_1003db7c4;
  puVar5 = puVar4;
  local_c0 = IVar3;
  local_a0 = IVar3;
  FUN_1001fa150(puVar4,FUN_1003cdf48,auStack_e0);
  _swift_bridgeObjectRelease(puVar5);
  _swift_setDeallocating(puVar4);
  _swift_arrayDestroy(puVar4 + 0x20,*(undefined8 *)(puVar4 + 0x10),
                      PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8);
  return IVar3;
}



/* Address: 0x1003d997c | FUN_1003d997c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_1003d997c(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ID IVar4;
  ID IVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  puVar2 = param_1;
  FUN_1003d9640();
  FUN_1001f9774();
  uVar9 = *puVar2;
  uVar10 = puVar2[1];
  uVar11 = puVar2[2];
  uVar12 = puVar2[3];
  uVar3 = 0;
  FUN_10000ec2c(0,&DAT_100fc3500,&PTR__OBJC_CLASS___NSStackView_100f8d698);
  puVar2 = param_1;
  FUN_1001f97b4(uVar9,uVar10,uVar11,uVar12,param_1,uVar3,&PTR_PTR_100ec00e8);
  IVar4 = objc_stub::widthAnchor(*(ID *)(param_2 + _TtC11PasteCoreUI12LinkItemCell::footerView));
  uVar3 = param_1[3];
  lVar1 = param_1[4];
  FUN_100004640(param_1,uVar3);
  (**(code **)(lVar1 + 0x38))(uVar3,lVar1);
  IVar4 = objc_stub::constraintEqualToAnchor_(IVar4,uVar3);
  IVar5 = objc_stub::widthAnchor(*(ID *)(param_2 + _TtC11PasteCoreUI12LinkItemCell::previewView));
  uVar3 = param_1[3];
  lVar1 = param_1[4];
  FUN_100004640(param_1,uVar3);
  (**(code **)(lVar1 + 0x38))(uVar3,lVar1);
  IVar5 = objc_stub::constraintEqualToAnchor_(IVar5,uVar3);
  puVar6 = &DAT_100fc3b00;
  FUN_1000037f0(&DAT_100fc3b00,&DAT_100c45590);
  _swift_initStackObject();
  *(undefined8 *)(puVar6 + 0x18) = 6;
  *(undefined8 *)(puVar6 + 0x10) = 3;
  puVar7 = &DAT_100fc3e70;
  FUN_1000037f0(&DAT_100fc3e70,&DAT_100c45d60);
  *(undefined **)(puVar6 + 0x38) = puVar7;
  *(undefined ***)(puVar6 + 0x40) = &PTR_PTR_100ec00b8;
  *(undefined8 **)(puVar6 + 0x20) = puVar2;
  uVar3 = 0;
  FUN_10000ec2c(0,&DAT_100fc32d0,&PTR__OBJC_CLASS___NSLayoutConstraint_100f8d660);
  *(undefined8 *)(puVar6 + 0x60) = uVar3;
  *(undefined ***)(puVar6 + 0x68) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar6 + 0x48) = IVar4;
  *(undefined8 *)(puVar6 + 0x88) = uVar3;
  *(undefined ***)(puVar6 + 0x90) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar6 + 0x70) = IVar5;
  _swift_bridgeObjectRetain(puVar2);
  puVar8 = puVar6;
  FUN_1001f8d60(puVar6);
  _swift_bridgeObjectRelease(puVar2);
  _swift_setDeallocating(puVar6);
  uVar3 = *(undefined8 *)(puVar6 + 0x10);
  puVar7 = &DAT_100fc3b10;
  FUN_1000037f0(&DAT_100fc3b10,&DAT_100c455a0);
  _swift_arrayDestroy(puVar6 + 0x20,uVar3,puVar7);
  return puVar8;
}



/* Address: 0x1003d9bf8 | _TtC11PasteCoreUI12LinkItemCell::initWithFrame: */

/* Function Stack Size: 0x30 bytes */

ID _TtC11PasteCoreUI12LinkItemCell::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  FUN_1003dab34(param_1,param_2,0x14,FUN_1003d9748,param_3.field1_0x10.field0_0x0,
                param_3.field1_0x10.field1_0x8);
  return param_1;
}



/* Address: 0x1003d9c08 | FUN_1003d9c08 */

void FUN_1003d9c08(void)

{
  long unaff_x20;
  
  _swift_getObjectType();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"prepareForReuse");
  objc_stub::prepareForReuse(*(ID *)(unaff_x20 + _TtC11PasteCoreUI12LinkItemCell::previewView));
  return;
}



/* Address: 0x1003d9c4c | _TtC11PasteCoreUI12LinkItemCell::prepareForReuse */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11PasteCoreUI12LinkItemCell::prepareForReuse(ID param_1,SEL param_2)

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
  puVar4 = &DAT_100fc31a8;
  FUN_100003a00(&DAT_100fc31a8,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar5 = Swift::Actor::get_unownedExecutor();
  UVar6 = UVar5;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar6.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteCoreUI/LinkItemCell.swift",0x1e,1,0x23,UVar5.unknown,puVar4);
  }
  local_50.receiver = param_1;
  local_50.super_class = pcVar2;
  _objc_msgSendSuper2(&local_50,"prepareForReuse");
  objc_stub::prepareForReuse(*(ID *)(param_1 + previewView));
  _swift_release(pMVar3);
  return;
}



/* Address: 0x1003d9d40 | FUN_1003d9d40 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1003d9d40(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  ID param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined8 *puVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  undefined *puVar6;
  long lVar7;
  ID self;
  ID IVar8;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  ulong uVar9;
  long lVar10;
  char *pcVar11;
  ulong uVar12;
  code *pcVar13;
  undefined8 uVar14;
  double extraout_d0;
  undefined8 extraout_d0_00;
  ID local_f0;
  undefined8 local_e8;
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  
  puVar6 = &DAT_100fc3120;
  FUN_1000037f0(&DAT_100fc3120,&DAT_100c45360);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  self = (long)&local_f0 - extraout_x8;
  lVar7 = 0;
  FUN_1003187b8();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  lVar10 = self - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_10031ebc8(self);
  lVar7 = 0;
  FUN_100317b10();
  IVar8 = self;
  (**(code **)(*(long *)(lVar7 + -8) + 0x30))(self,1,lVar7);
  if ((int)IVar8 == 1) {
    FUN_1003cd5f4(self);
  }
  else {
    IVar8 = self;
    _swift_getEnumCaseMultiPayload(self,lVar7);
    if ((int)IVar8 == 1) {
      local_e8 = param_6;
      FUN_100319e98(self,lVar10);
      FUN_100318910();
      puVar1 = (undefined8 *)(unaff_x20 + _TtC11PasteCoreUI8ItemCell::userSettingsProvider);
      _swift_beginAccess(puVar1,auStack_98,0,0);
      pcVar13 = (code *)*puVar1;
      local_f0 = self;
      if (pcVar13 == (code *)0x0) {
        param_6 = local_e8;
        if (self != 0) {
          uVar12 = 1;
          goto LAB_1003d9f28;
        }
LAB_1003d9fcc:
        lVar7 = _TtC11PasteCoreUI8ItemCell::preferredCompactHeaderStyle;
        uVar14 = 1;
        _swift_beginAccess(unaff_x20 + _TtC11PasteCoreUI8ItemCell::preferredCompactHeaderStyle,
                           auStack_b0,1,0);
        *(undefined1 *)(unaff_x20 + lVar7) = 0;
        lVar7 = _TtC11PasteCoreUI8ItemCell::isCompactContentFullsize;
        _swift_beginAccess(unaff_x20 + _TtC11PasteCoreUI8ItemCell::isCompactContentFullsize,
                           auStack_c8,1,0);
        *(undefined1 *)(unaff_x20 + lVar7) = 1;
      }
      else {
        uVar9 = puVar1[1];
        uVar12 = uVar9;
        _swift_retain();
        (*pcVar13)();
        FUN_100004550(pcVar13,uVar9);
        if (self == 0) {
          param_6 = local_e8;
          if ((uVar12 & 1) != 0) goto LAB_1003d9fcc;
LAB_1003da018:
          lVar7 = _TtC11PasteCoreUI8ItemCell::preferredCompactHeaderStyle;
          _swift_beginAccess(unaff_x20 + _TtC11PasteCoreUI8ItemCell::preferredCompactHeaderStyle,
                             auStack_b0,1,0);
          *(undefined1 *)(unaff_x20 + lVar7) = 2;
          lVar7 = _TtC11PasteCoreUI8ItemCell::isCompactContentFullsize;
          _swift_beginAccess(unaff_x20 + _TtC11PasteCoreUI8ItemCell::isCompactContentFullsize,
                             auStack_c8,1,0);
          uVar14 = 0;
          *(undefined1 *)(unaff_x20 + lVar7) = 0;
        }
        else {
LAB_1003d9f28:
          param_6 = local_e8;
          objc_stub::size(self);
          objc_stub::size(self);
          lVar7 = _TtC11PasteCoreUI8ItemCell::preferredCompactHeaderStyle;
          param_1 = extraout_d0_00;
          if (((uVar12 & 1) != 0) && (extraout_d0 == param_2)) goto LAB_1003d9fcc;
          if ((uVar12 & 1) == 0) goto LAB_1003da018;
          uVar14 = 1;
          _swift_beginAccess(unaff_x20 + _TtC11PasteCoreUI8ItemCell::preferredCompactHeaderStyle,
                             auStack_b0,1,0);
          *(undefined1 *)(unaff_x20 + lVar7) = 1;
          lVar7 = _TtC11PasteCoreUI8ItemCell::isCompactContentFullsize;
          _swift_beginAccess(unaff_x20 + _TtC11PasteCoreUI8ItemCell::isCompactContentFullsize,
                             auStack_c8,1,0);
          *(undefined1 *)(unaff_x20 + lVar7) = 1;
        }
      }
      FUN_1003da1fc(lVar10,param_5);
      FUN_100208674(uVar14);
      FUN_1003da2e0(lVar10,uVar14);
      FUN_10005241c(lVar10,FUN_1003187b8);
      lVar10 = *(long *)(unaff_x20 + _TtC11PasteCoreUI8ItemCell::headerView);
      lVar7 = -0xd0;
      goto LAB_1003da0cc;
    }
    FUN_10005241c(self,FUN_100317b10);
  }
  lVar10 = *(long *)(unaff_x20 + _TtC11PasteCoreUI8ItemCell::headerView);
  lVar7 = -0x88;
LAB_1003da0cc:
  pcVar11 = (char *)(unaff_x20 + _TtC11PasteCoreUI8ItemCell::preferredCompactHeaderStyle);
  _swift_beginAccess(pcVar11,&stack0xfffffffffffffff0 + lVar7,0,0);
  cVar3 = *pcVar11;
  cVar2 = '\0';
  if (cVar3 != '\x02') {
    cVar2 = cVar3;
  }
  *(char *)(lVar10 + _TtCC11PasteCoreUI8ItemCell10HeaderView::compactStyle) = cVar2;
  FUN_1003d41b4(param_4,param_5,param_6);
  uVar5 = (uint)param_4;
  puVar1 = (undefined8 *)
           (*(long *)(unaff_x20 + _TtC11PasteCoreUI8ItemCell::shortcutView) +
           _TtCC11PasteCoreUI8ItemCell21ShortcutIndicatorView::quickPasteIndex);
  *puVar1 = param_7;
  *(undefined1 *)(puVar1 + 1) = param_8;
  FUN_1003d6444();
  FUN_10031c38c();
  FUN_100208674(uVar5 & 1);
  FUN_1003d8588();
  FUN_1003d8230();
  objc_stub::setConstant_(param_5,param_1);
  IVar8 = 0;
  FUN_1003d83c4();
  objc_stub::setConstant_(IVar8,param_2);
  IVar8 = 0;
  FUN_1003d82fc();
  objc_stub::setConstant_(IVar8,param_3);
  bVar4 = 0;
  FUN_10031f040();
  *(byte *)(unaff_x20 + _TtC11PasteCoreUI8ItemCell::isEditable) = bVar4 & 1;
  return;
}



/* Address: 0x1003da1fc | FUN_1003da1fc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1003da1fc(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4)

{
  ID self;
  long unaff_x20;
  ID self_00;
  double extraout_d0;
  
  FUN_1003db698(0x3ff0000000000000,param_4);
  FUN_1001f23b0(0);
  self_00 = *(ID *)(unaff_x20 +
                   _TtC11PasteCoreUIP33_31D1D9CD4C0417210CA62A35EC55ECF611PreviewView::iconView);
  self = objc_stub::setImage_(self_00,0);
  FUN_100318910();
  if (self == 0) {
    FUN_100318870();
    if (self == 0) {
      FUN_1003db7cc();
    }
  }
  else {
    objc_stub::size(self);
    objc_stub::size(self);
    if (extraout_d0 != param_2) {
      FUN_1001f23b0(self);
      return 0;
    }
  }
  objc_stub::setImage_(self_00,self);
  return 0;
}



/* Address: 0x1003da2e0 | FUN_1003da2e0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1003da2e0(long param_1,uint param_2)

{
  undefined8 *puVar1;
  long lVar2;
  URL UVar3;
  undefined8 uVar4;
  long unaff_x20;
  ID IVar5;
  ID self;
  String SVar6;
  
  IVar5 = *(ID *)(unaff_x20 +
                 _TtC11PasteCoreUIP33_31D1D9CD4C0417210CA62A35EC55ECF610FooterView::titleLabel);
  uVar4 = 3;
  if ((param_2 & 1) != 0) {
    uVar4 = 1;
  }
  objc_stub::setNumberOfLines_(IVar5,uVar4);
  lVar2 = 0;
  FUN_1003187b8();
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar2 + 0x14));
  uVar4 = *puVar1;
  lVar2 = puVar1[1];
  _swift_bridgeObjectRetain(lVar2);
  objc_stub::setHidden_(IVar5,(ulong)(lVar2 == 0));
  FUN_1002206bc(uVar4,lVar2);
  lVar2 = param_1;
  FUN_1003db9c0(param_1);
  objc_stub::setAttributedText_(IVar5,lVar2);
  uVar4 = 0;
  self = *(ID *)(unaff_x20 +
                _TtC11PasteCoreUIP33_31D1D9CD4C0417210CA62A35EC55ECF610FooterView::urlLabel);
  if ((param_2 & 1) != 0) {
    IVar5 = objc_stub::isHidden(IVar5,0);
    uVar4 = 1;
    if ((int)IVar5 != 0) {
      uVar4 = 2;
    }
  }
  UVar3.unknown = (undefined *)objc_stub::setNumberOfLines_(self,uVar4);
  SVar6 = Foundation::URL::get_absoluteString(UVar3);
  FUN_1002206bc(SVar6.str,SVar6.bridgeObject);
  FUN_1003dbbdc(param_1,param_2 & 1);
  objc_stub::setAttributedText_(self,param_1);
  return 0;
}



/* Address: 0x1003da3f8 | FUN_1003da3f8 */

void FUN_1003da3f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1003db698(param_3);
  FUN_1003d84a4(param_1,param_2,param_3);
  return;
}



/* Address: 0x1003da450 | FUN_1003da450 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1003da450(void)

{
  return 0;
}



/* Address: 0x1003da48c | _TtC11PasteCoreUI12LinkItemCell::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11PasteCoreUI12LinkItemCell::_cxx_destruct(ID param_1,SEL param_2)

{
  return;
}



/* Address: 0x1003da4d4 | FUN_1003da4d4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1003da4d4(void)

{
  long lVar1;
  ID IVar2;
  ID IVar3;
  ID unaff_x20;
  
  lVar1 = _TtC11PasteCoreUIP33_31D1D9CD4C0417210CA62A35EC55ECF611PreviewView::
          ___lazy_storage___iconViewYAnchorConstraint;
  IVar2 = *(ID *)(unaff_x20 +
                 _TtC11PasteCoreUIP33_31D1D9CD4C0417210CA62A35EC55ECF611PreviewView::
                 ___lazy_storage___iconViewYAnchorConstraint);
  if (IVar2 == 0) {
    IVar2 = objc_stub::centerYAnchor
                      (*(ID *)(unaff_x20 +
                              _TtC11PasteCoreUIP33_31D1D9CD4C0417210CA62A35EC55ECF611PreviewView::
                              iconView));
    IVar3 = objc_stub::centerYAnchor(unaff_x20);
    IVar2 = objc_stub::constraintEqualToAnchor_(IVar2,IVar3);
    *(ID *)(unaff_x20 + lVar1) = IVar2;
  }
  return IVar2;
}



/* Address: 0x1003da594 | FUN_1003da594 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1003da594(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  byte bVar4;
  ID IVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined1 auStack_e0 [16];
  ID local_d0;
  
  _swift_getObjectType();
  lVar2 = _TtC11PasteCoreUIP33_31D1D9CD4C0417210CA62A35EC55ECF611PreviewView::fadingView;
  if (DAT_100fc3778 != -1) {
    _swift_once(&DAT_100fc3778,FUN_1003dad0c);
  }
  uVar7 = DAT_100fc3780;
  if (DAT_100fc3788 != -1) {
    _swift_once(&DAT_100fc3788,FUN_1003dad20);
  }
  uVar3 = DAT_100fc3790;
  FUN_100209c28(0);
  _objc_allocWithZone();
  FUN_100209214(0,uVar7,uVar3);
  *(undefined8 *)(unaff_x20 + lVar2) = uVar7;
  lVar2 = _TtC11PasteCoreUIP33_31D1D9CD4C0417210CA62A35EC55ECF611PreviewView::imageView;
  IVar5 = 0;
  FUN_1001f3ba0();
  _swift_getObjCClassFromMetadata();
  _objc_allocWithZone();
  IVar5 = objc_stub::init(IVar5);
  *(ID *)(unaff_x20 + lVar2) = IVar5;
  puVar6 = &_OBJC_CLASS___NSImageView;
  _objc_allocWithZone();
  IVar5 = objc_stub::init((ID)puVar6);
  objc_stub::setImageAlignment_(IVar5,0);
  objc_stub::setImageScaling_(IVar5,3);
  bVar4 = Swift::_stdlib_isOSVersionAtLeast(0x1a,0,0);
  lVar2 = _TtC11PasteCoreUIP33_31D1D9CD4C0417210CA62A35EC55ECF611PreviewView::iconView;
  uVar7 = 0x4028000000000000;
  puVar1 = (undefined8 *)PTR__kCACornerCurveContinuous_100eaa3a0;
  if ((bVar4 & 1) == 0) {
    uVar7 = 0x4024000000000000;
    puVar1 = (undefined8 *)PTR__kCACornerCurveCircular_100eaa398;
  }
  objc_stub::setCornerRadius_curve_(IVar5,uVar7,*puVar1);
  *(ID *)(unaff_x20 + lVar2) = IVar5;
  *(undefined8 *)
   (unaff_x20 +
   _TtC11PasteCoreUIP33_31D1D9CD4C0417210CA62A35EC55ECF611PreviewView::
   ___lazy_storage___iconViewYAnchorConstraint) = 0;
  IVar5 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff70,"initWithFrame:",param_1,
                              param_2,param_3,param_4);
  puVar6 = &DAT_100fc3e80;
  FUN_1000037f0(&DAT_100fc3e80,&DAT_100c45d50);
  _swift_initStackObject();
  *(undefined8 *)(puVar6 + 0x18) = 7;
  *(undefined8 *)(puVar6 + 0x10) = 3;
  *(undefined8 *)(puVar6 + 0x20) =
       *(undefined8 *)
        (IVar5 + _TtC11PasteCoreUIP33_31D1D9CD4C0417210CA62A35EC55ECF611PreviewView::fadingView);
  *(undefined8 *)(puVar6 + 0x28) =
       *(undefined8 *)
        (IVar5 + _TtC11PasteCoreUIP33_31D1D9CD4C0417210CA62A35EC55ECF611PreviewView::imageView);
  *(undefined8 *)(puVar6 + 0x30) =
       *(undefined8 *)
        (IVar5 + _TtC11PasteCoreUIP33_31D1D9CD4C0417210CA62A35EC55ECF611PreviewView::iconView);
  local_d0 = IVar5;
  FUN_1001fa150(puVar6,FUN_1003db7bc,auStack_e0);
  _swift_bridgeObjectRelease();
  _swift_setDeallocating(puVar6);
  _swift_arrayDestroy(puVar6 + 0x20,*(undefined8 *)(puVar6 + 0x10),
                      PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8);
  return IVar5;
}



/* Address: 0x1003da848 | FUN_1003da848 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_1003da848(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 **ppuVar5;
  ID IVar6;
  ID IVar7;
  undefined8 **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 *local_a8 [3];
  undefined8 *local_90;
  undefined **ppuStack_88;
  
  puVar2 = param_1;
  _swift_getObjectType();
  ppuStack_88 = &PTR_PTR_100ec00e8;
  puVar3 = param_1;
  local_a8[0] = param_1;
  local_90 = puVar2;
  FUN_1001f9774();
  uVar12 = *puVar3;
  uVar13 = puVar3[1];
  uVar14 = puVar3[2];
  uVar15 = puVar3[3];
  uVar4 = 0;
  FUN_100209c28(0);
  ppuVar5 = local_a8;
  FUN_1001f97b4(uVar12,uVar13,uVar14,uVar15,ppuVar5,uVar4,&PTR_PTR_100ec00e8);
  FUN_100004594(local_a8);
  lVar1 = _TtC11PasteCoreUIP33_31D1D9CD4C0417210CA62A35EC55ECF611PreviewView::iconView;
  uVar4 = 0;
  FUN_10000ec2c(0,&DAT_100fc32c8,&PTR__OBJC_CLASS___NSImageView_100f8d6a0);
  FUN_1001f9e3c(0x4045000000000000,0x4045000000000000);
  IVar6 = objc_stub::centerXAnchor(*(ID *)((long)param_1 + lVar1));
  IVar7 = objc_stub::centerXAnchor((ID)param_1);
  IVar7 = objc_stub::constraintEqualToAnchor_(IVar6,IVar7);
  IVar6 = IVar7;
  FUN_1003da4d4();
  ppuStack_88 = &PTR_PTR_100ec00e8;
  uVar13 = *puVar3;
  uVar14 = puVar3[1];
  uVar15 = puVar3[2];
  uVar16 = puVar3[3];
  uVar12 = 0;
  local_a8[0] = param_1;
  local_90 = puVar2;
  FUN_1001f3ba0(0);
  ppuVar8 = local_a8;
  FUN_1001f97b4(uVar13,uVar14,uVar15,uVar16,ppuVar8,uVar12,&PTR_PTR_100ec00e8);
  FUN_100004594(local_a8);
  puVar9 = &DAT_100fc3b00;
  FUN_1000037f0(&DAT_100fc3b00,&DAT_100c45590);
  _swift_initStackObject();
  *(undefined8 *)(puVar9 + 0x18) = 10;
  *(undefined8 *)(puVar9 + 0x10) = 5;
  puVar10 = &DAT_100fc3e70;
  FUN_1000037f0(&DAT_100fc3e70,&DAT_100c45d60);
  *(undefined **)(puVar9 + 0x38) = puVar10;
  *(undefined ***)(puVar9 + 0x40) = &PTR_PTR_100ec00b8;
  *(undefined8 ***)(puVar9 + 0x20) = ppuVar5;
  *(undefined **)(puVar9 + 0x60) = puVar10;
  *(undefined ***)(puVar9 + 0x68) = &PTR_PTR_100ec00b8;
  *(undefined8 *)(puVar9 + 0x48) = uVar4;
  uVar12 = 0;
  FUN_10000ec2c(0,&DAT_100fc32d0,&PTR__OBJC_CLASS___NSLayoutConstraint_100f8d660);
  *(undefined8 *)(puVar9 + 0x88) = uVar12;
  *(undefined ***)(puVar9 + 0x90) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar9 + 0x70) = IVar7;
  *(undefined8 *)(puVar9 + 0xb0) = uVar12;
  *(undefined ***)(puVar9 + 0xb8) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar9 + 0x98) = IVar6;
  *(undefined **)(puVar9 + 0xd8) = puVar10;
  *(undefined ***)(puVar9 + 0xe0) = &PTR_PTR_100ec00b8;
  *(undefined8 ***)(puVar9 + 0xc0) = ppuVar8;
  _swift_bridgeObjectRetain(ppuVar5);
  _swift_bridgeObjectRetain(uVar4);
  puVar11 = puVar9;
  FUN_1001f8d60(puVar9);
  _swift_bridgeObjectRelease(ppuVar5);
  _swift_bridgeObjectRelease(uVar4);
  _swift_setDeallocating(puVar9);
  uVar4 = *(undefined8 *)(puVar9 + 0x10);
  puVar10 = &DAT_100fc3b10;
  FUN_1000037f0(&DAT_100fc3b10,&DAT_100c455a0);
  _swift_arrayDestroy(puVar9 + 0x20,uVar4,puVar10);
  return puVar11;
}



/* Address: 0x1003dab24 | _TtC11PasteCoreUIP33_31D1D9CD4C0417210CA62A35EC55ECF611PreviewView::initWithFrame: */

/* Function Stack Size: 0x30 bytes */

ID _TtC11PasteCoreUIP33_31D1D9CD4C0417210CA62A35EC55ECF611PreviewView::initWithFrame_
             (ID param_1,SEL param_2,CGRect param_3)

{
  FUN_1003dab34(param_1,param_2,0x87,FUN_1003da594,param_3.field1_0x10.field0_0x0,
                param_3.field1_0x10.field1_0x8);
  return param_1;
}



/* Address: 0x1003dab34 | FUN_1003dab34 */

char * FUN_1003dab34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,code *param_8)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  char *pcVar5;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fc31a8;
  FUN_100003a00(&DAT_100fc31a8,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  pcVar5 = (char *)UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar5 & 1) == 0) {
    pcVar5 = "PasteCoreUI/LinkItemCell.swift";
    _swift_task_reportUnexpectedExecutor
              ("PasteCoreUI/LinkItemCell.swift",0x1e,1,param_7,UVar4.unknown,puVar3);
  }
  (*param_8)(param_1,param_2,param_3,param_4);
  _swift_release(pMVar2);
  return pcVar5;
}



/* Address: 0x1003dac30 | _TtC11PasteCoreUIP33_31D1D9CD4C0417210CA62A35EC55ECF611PreviewView::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC11PasteCoreUIP33_31D1D9CD4C0417210CA62A35EC55ECF611PreviewView::init(ID param_1,SEL param_2)

{
  FUN_1003db560(param_1,param_2,0x5c,"PasteCoreUI.PreviewView",0x17);
  return param_1;
}



/* Address: 0x1003dac44 | FUN_1003dac44 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1003dac44(void)

{
  return 0;
}



/* Address: 0x1003dac90 | _TtC11PasteCoreUIP33_31D1D9CD4C0417210CA62A35EC55ECF611PreviewView::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11PasteCoreUIP33_31D1D9CD4C0417210CA62A35EC55ECF611PreviewView::_cxx_destruct
               (ID param_1,SEL param_2)

{
  return;
}



/* Address: 0x1003dace8 | FUN_1003dace8 */

void FUN_1003dace8(undefined8 param_1,undefined8 param_2)

{
  FUN_1003db698(param_2);
  return;
}



/* Address: 0x1003dad0c | FUN_1003dad0c */

void FUN_1003dad0c(undefined8 param_1)

{
  FUN_1003dad34(param_1,FUN_100218f60,&DAT_100fc3780);
  return;
}



/* Address: 0x1003dad20 | FUN_1003dad20 */

void FUN_1003dad20(undefined8 param_1)

{
  FUN_1003dad34(param_1,FUN_10021911c,&DAT_100fc3790);
  return;
}



/* Address: 0x1003dad34 | FUN_1003dad34 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1003dad34(undefined8 param_1,code *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x0;
  FUN_10000ec2c(0,&DAT_100fc3550,&PTR__OBJC_CLASS___NSColor_100f8d680);
  (*param_2)();
  uVar2 = *puVar1;
  FUN_1002066dc(uVar2,uVar2);
  *param_3 = uVar2;
  return 0;
}



/* Address: 0x1003dadb0 | FUN_1003dadb0 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1003dadb0(ID param_1)

{
  undefined8 *puVar1;
  ID IVar2;
  undefined8 uVar3;
  
  objc_stub::setContentCompressionResistancePriority_forOrientation_(param_1,0x447a0000,1);
  objc_stub::setContentHuggingPriority_forOrientation_(param_1,0x447a0000,1);
  objc_stub::setAllowsDefaultTighteningForTruncation_(param_1,1);
  puVar1 = (undefined8 *)objc_stub::setTextAlignment_(param_1,4);
  FUN_1001fe15c();
  objc_stub::setTextColor_(param_1,*puVar1);
  IVar2 = objc_stub::FUN_100bff140(param_1);
  if (IVar2 != 0) {
    objc_stub::setLineBreakMode_(IVar2,0);
  }
  IVar2 = objc_stub::FUN_100bff140(param_1);
  objc_stub::FUN_100c0e5c0(IVar2,1);
  IVar2 = objc_stub::FUN_100bff140(param_1);
  objc_stub::FUN_100c0ea60(IVar2,1);
  uVar3 = 0;
  FUN_10000ec2c(0,&DAT_100fc3e90,&PTR__OBJC_CLASS___NSFont_100f8d678);
  FUN_1001ff928();
  FUN_1001ffa18();
  objc_stub::setFont_(param_1,uVar3);
  return 0;
}



/* Address: 0x1003daedc | FUN_1003daedc */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1003daedc(ID param_1)

{
  undefined8 *puVar1;
  ID IVar2;
  undefined8 uVar3;
  
  objc_stub::setContentHuggingPriority_forOrientation_(param_1,0x437a0000,1);
  objc_stub::setAllowsDefaultTighteningForTruncation_(param_1,1);
  puVar1 = (undefined8 *)objc_stub::setTextAlignment_(param_1,4);
  FUN_1001fe19c();
  objc_stub::setTextColor_(param_1,*puVar1);
  IVar2 = objc_stub::FUN_100bff140(param_1);
  if (IVar2 != 0) {
    objc_stub::setLineBreakMode_(IVar2,1);
  }
  IVar2 = objc_stub::FUN_100bff140(param_1);
  objc_stub::FUN_100c0e5c0(IVar2,1);
  IVar2 = objc_stub::FUN_100bff140(param_1);
  objc_stub::FUN_100c0ea60(IVar2,1);
  uVar3 = 0;
  FUN_10000ec2c(0,&DAT_100fc3e90,&PTR__OBJC_CLASS___NSFont_100f8d678);
  FUN_1001ff934();
  objc_stub::setFont_(param_1,uVar3);
  return 0;
}



/* Address: 0x1003dafd4 | FUN_1003dafd4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_1003dafd4(void)

{
  long lVar1;
  undefined *self;
  long unaff_x20;
  undefined8 uVar2;
  
  lVar1 = _TtC11PasteCoreUIP33_31D1D9CD4C0417210CA62A35EC55ECF610FooterView::
          ___lazy_storage___stackView;
  self = *(undefined **)
          (unaff_x20 +
          _TtC11PasteCoreUIP33_31D1D9CD4C0417210CA62A35EC55ECF610FooterView::
          ___lazy_storage___stackView);
  if (self == (undefined *)0x0) {
    FUN_10000ec2c(0,&DAT_100fc3500,&PTR__OBJC_CLASS___NSStackView_100f8d698);
    self = &DAT_100fc3e80;
    FUN_1000037f0(&DAT_100fc3e80,&DAT_100c45d50);
    _swift_allocObject();
    *(undefined8 *)(self + 0x18) = 5;
    *(undefined8 *)(self + 0x10) = 2;
    uVar2 = *(undefined8 *)
             (unaff_x20 +
             _TtC11PasteCoreUIP33_31D1D9CD4C0417210CA62A35EC55ECF610FooterView::urlLabel);
    *(undefined8 *)(self + 0x20) =
         *(undefined8 *)
          (unaff_x20 + _TtC11PasteCoreUIP33_31D1D9CD4C0417210CA62A35EC55ECF610FooterView::titleLabel
          );
    *(undefined8 *)(self + 0x28) = uVar2;
    FUN_1000f66dc();
    objc_stub::setAlignment_((ID)self,5);
    objc_stub::setSpacing_((ID)self,0x4008000000000000);
    FUN_1000f668c(1);
    *(undefined **)(unaff_x20 + lVar1) = self;
  }
  return self;
}



/* Address: 0x1003db0dc | FUN_1003db0dc */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

ID FUN_1003db0dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ID IVar2;
  NSString *pNVar3;
  ID IVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined1 auStack_b0 [16];
  ID local_a0;
  
  _swift_getObjectType();
  lVar1 = _TtC11PasteCoreUIP33_31D1D9CD4C0417210CA62A35EC55ECF610FooterView::titleLabel;
  IVar2 = 0;
  FUN_100220f8c();
  pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_getObjCClassFromMetadata();
  IVar4 = objc_stub::labelWithString_(IVar2,pNVar3);
  FUN_1003dadb0(IVar4);
  *(ID *)(unaff_x20 + lVar1) = IVar4;
  lVar1 = _TtC11PasteCoreUIP33_31D1D9CD4C0417210CA62A35EC55ECF610FooterView::urlLabel;
  pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar2 = objc_stub::labelWithString_(IVar2,pNVar3);
  FUN_1003daedc(IVar2);
  *(ID *)(unaff_x20 + lVar1) = IVar2;
  *(undefined8 *)
   (unaff_x20 +
   _TtC11PasteCoreUIP33_31D1D9CD4C0417210CA62A35EC55ECF610FooterView::___lazy_storage___stackView) =
       0;
  IVar2 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff90,"initWithFrame:",param_1,
                              param_2,param_3,param_4);
  if (DAT_100fc3778 != -1) {
    _swift_once(&DAT_100fc3778,FUN_1003dad0c);
  }
  FUN_1002356a8(DAT_100fc3780);
  puVar5 = &DAT_100fc3e80;
  FUN_1000037f0(&DAT_100fc3e80,&DAT_100c45d50);
  _swift_initStackObject();
  *(undefined8 *)(puVar5 + 0x18) = 3;
  *(undefined8 *)(puVar5 + 0x10) = 1;
  puVar6 = puVar5;
  FUN_1003dafd4();
  *(undefined **)(puVar5 + 0x20) = puVar6;
  local_a0 = IVar2;
  FUN_1001fa150(puVar5,FUN_1003db7b4,auStack_b0);
  _swift_bridgeObjectRelease();
  _swift_setDeallocating(puVar5);
  _swift_arrayDestroy(puVar5 + 0x20,*(undefined8 *)(puVar5 + 0x10),
                      PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8);
  return IVar2;
}


