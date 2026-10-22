/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1003db2d8 | FUN_1003db2d8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

undefined * FUN_1003db2d8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long local_80 [3];
  long local_68;
  undefined **ppuStack_60;
  long local_58;
  
  lVar1 = param_1;
  _swift_getObjectType();
  lVar2 = lVar1;
  FUN_1003dafd4();
  ppuStack_60 = &PTR_PTR_100ec00e8;
  uVar3 = 0;
  local_80[0] = param_1;
  local_68 = lVar1;
  local_58 = lVar2;
  FUN_10000ec2c(0,&DAT_100fc3500,&PTR__OBJC_CLASS___NSStackView_100f8d698);
  plVar4 = local_80;
  FUN_1001f97b4(0x4024000000000000,0x4028000000000000,0x4024000000000000,0x4028000000000000,plVar4,
                uVar3,&PTR_PTR_100ec00e8);
  FUN_100004594(local_80);
  IVar5 = objc_stub::widthAnchor
                    (*(ID *)(param_1 +
                            _TtC11PasteCoreUIP33_31D1D9CD4C0417210CA62A35EC55ECF610FooterView::
                            titleLabel));
  lVar1 = _TtC11PasteCoreUIP33_31D1D9CD4C0417210CA62A35EC55ECF610FooterView::
          ___lazy_storage___stackView;
  IVar6 = objc_stub::widthAnchor
                    (*(ID *)(param_1 +
                            _TtC11PasteCoreUIP33_31D1D9CD4C0417210CA62A35EC55ECF610FooterView::
                            ___lazy_storage___stackView));
  IVar5 = objc_stub::constraintEqualToAnchor_(IVar5,IVar6);
  IVar6 = objc_stub::widthAnchor
                    (*(ID *)(param_1 +
                            _TtC11PasteCoreUIP33_31D1D9CD4C0417210CA62A35EC55ECF610FooterView::
                            urlLabel));
  IVar7 = objc_stub::widthAnchor(*(ID *)(param_1 + lVar1));
  IVar6 = objc_stub::constraintEqualToAnchor_(IVar6,IVar7);
  puVar8 = &DAT_100fc3b00;
  FUN_1000037f0(&DAT_100fc3b00,&DAT_100c45590);
  _swift_initStackObject();
  *(undefined8 *)(puVar8 + 0x18) = 6;
  *(undefined8 *)(puVar8 + 0x10) = 3;
  puVar9 = &DAT_100fc3e70;
  FUN_1000037f0(&DAT_100fc3e70,&DAT_100c45d60);
  *(undefined **)(puVar8 + 0x38) = puVar9;
  *(undefined ***)(puVar8 + 0x40) = &PTR_PTR_100ec00b8;
  *(long **)(puVar8 + 0x20) = plVar4;
  uVar3 = 0;
  FUN_10000ec2c(0,&DAT_100fc32d0,&PTR__OBJC_CLASS___NSLayoutConstraint_100f8d660);
  *(undefined8 *)(puVar8 + 0x60) = uVar3;
  *(undefined ***)(puVar8 + 0x68) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar8 + 0x48) = IVar5;
  *(undefined8 *)(puVar8 + 0x88) = uVar3;
  *(undefined ***)(puVar8 + 0x90) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar8 + 0x70) = IVar6;
  _swift_bridgeObjectRetain(plVar4);
  puVar10 = puVar8;
  FUN_1001f8d60(puVar8);
  _swift_bridgeObjectRelease(plVar4);
  _swift_setDeallocating(puVar8);
  uVar3 = *(undefined8 *)(puVar8 + 0x10);
  puVar9 = &DAT_100fc3b10;
  FUN_1000037f0(&DAT_100fc3b10,&DAT_100c455a0);
  _swift_arrayDestroy(puVar8 + 0x20,uVar3,puVar9);
  return puVar10;
}



/* Address: 0x1003db53c | _TtC11PasteCoreUIP33_31D1D9CD4C0417210CA62A35EC55ECF610FooterView::initWithFrame: */

/* Function Stack Size: 0x30 bytes */

ID _TtC11PasteCoreUIP33_31D1D9CD4C0417210CA62A35EC55ECF610FooterView::initWithFrame_
             (ID param_1,SEL param_2,CGRect param_3)

{
  FUN_1003dab34(param_1,param_2,0xff,FUN_1003db0dc,param_3.field1_0x10.field0_0x0,
                param_3.field1_0x10.field1_0x8);
  return param_1;
}



/* Address: 0x1003db54c | _TtC11PasteCoreUIP33_31D1D9CD4C0417210CA62A35EC55ECF610FooterView::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC11PasteCoreUIP33_31D1D9CD4C0417210CA62A35EC55ECF610FooterView::init(ID param_1,SEL param_2)

{
  FUN_1003db560(param_1,param_2,0xc2,"PasteCoreUI.FooterView",0x16);
  return param_1;
}



/* Address: 0x1003db560 | FUN_1003db560 */

void FUN_1003db560(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

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
  puVar3 = &DAT_100fc31a8;
  FUN_100003a00(&DAT_100fc31a8,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteCoreUI/LinkItemCell.swift",0x1e,1,param_3,UVar4.unknown,puVar3);
  }
  __swift_stdlib_reportUnimplementedInitializer(param_4,param_5,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1003db614);
  (*pcVar2)();
}



/* Address: 0x1003db614 | FUN_1003db614 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1003db614(void)

{
  return 0;
}



/* Address: 0x1003db650 | _TtC11PasteCoreUIP33_31D1D9CD4C0417210CA62A35EC55ECF610FooterView::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11PasteCoreUIP33_31D1D9CD4C0417210CA62A35EC55ECF610FooterView::_cxx_destruct
               (ID param_1,SEL param_2)

{
  return;
}



/* Address: 0x1003db698 | FUN_1003db698 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003db698(double param_1,ID param_2)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  long unaff_x20;
  double extraout_d0;
  double dVar4;
  undefined8 uVar5;
  
  uVar3 = (uint)param_2;
  FUN_1003da4d4();
  objc_stub::constant(param_2);
  bVar2 = Swift::_stdlib_isOSVersionAtLeast(0x1a,0,0);
  dVar4 = 5.0;
  if ((bVar2 & 1) == 0) {
    dVar4 = 7.0;
  }
  bVar1 = (uVar3 & 0xff) != 3;
  if (bVar1) {
    dVar4 = 0.0;
  }
  uVar5 = 0;
  if (bVar1) {
    uVar5 = 0x3fe6666666666666;
  }
  objc_stub::setConstant_
            (*(ID *)(unaff_x20 +
                    _TtC11PasteCoreUIP33_31D1D9CD4C0417210CA62A35EC55ECF611PreviewView::
                    ___lazy_storage___iconViewYAnchorConstraint),
             (1.0 - param_1) * extraout_d0 + param_1 * dVar4);
  FUN_1001f2144(uVar5);
  return;
}



/* Address: 0x1003db754 | FUN_1003db754 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1003db754(void)

{
  return ZEXT816(0x100f99d38);
}



/* Address: 0x1003db774 | FUN_1003db774 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1003db774(void)

{
  return ZEXT816(0x100f99ff0);
}



/* Address: 0x1003db794 | FUN_1003db794 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1003db794(void)

{
  return ZEXT816(0x100f9a0f0);
}



/* Address: 0x1003db7b4 | FUN_1003db7b4 */

void FUN_1003db7b4(void)

{
  long unaff_x20;
  
  FUN_1003db2d8(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1003db7bc | FUN_1003db7bc */

void FUN_1003db7bc(void)

{
  long unaff_x20;
  
  FUN_1003da848(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1003db7c4 | FUN_1003db7c4 */

void FUN_1003db7c4(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1003d997c(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1003db7cc | FUN_1003db7cc */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1003db7cc(undefined8 *param_1)

{
  code *pcVar1;
  ID IVar2;
  undefined *puVar3;
  NSArray *pNVar4;
  ID IVar5;
  ID IVar6;
  ID *pIVar7;
  ID IVar8;
  undefined8 uVar9;
  
  FUN_1001fe19c();
  uVar9 = *param_1;
  IVar2 = objc_stub::configurationWithPointSize_weight_
                    ((ID)&_OBJC_CLASS___NSImageSymbolConfiguration,0x4045000000000000,
                     *(undefined8 *)PTR__NSFontWeightRegular_100ea90b8);
  puVar3 = &DAT_100fc3e80;
  FUN_1000037f0(&DAT_100fc3e80,&DAT_100c45d50);
  _swift_allocObject();
  *(undefined8 *)(puVar3 + 0x18) = 3;
  *(undefined8 *)(puVar3 + 0x10) = 1;
  *(undefined8 *)(puVar3 + 0x20) = uVar9;
  FUN_10000ec2c(0,&DAT_100fc3550,&PTR__OBJC_CLASS___NSColor_100f8d680);
  pNVar4 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_release(puVar3);
  IVar5 = objc_stub::FUN_100bff960((ID)&_OBJC_CLASS___NSImageSymbolConfiguration,pNVar4);
  IVar6 = objc_stub::FUN_100bff940(IVar2,IVar5);
  pIVar7 = (ID *)0x0;
  FUN_10000ec2c(0,&DAT_100fc3558,&PTR__OBJC_CLASS___NSImage_100f8d6b8);
  FUN_10020d844();
  IVar2 = *pIVar7;
  IVar5 = pIVar7[1];
  _swift_bridgeObjectRetain_n(IVar5,2);
  IVar8 = IVar2;
  FUN_1000f653c(IVar2,IVar5);
  if (IVar8 == 0) {
    _swift_bridgeObjectRelease(IVar5);
    IVar2 = 0xd000000000000013;
    FUN_1000f653c(0xd000000000000013,0x8000000100d8de20);
    if (IVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1003db9c0);
      (*pcVar1)();
    }
  }
  else {
    FUN_1000f653c(IVar2,IVar5);
    if (IVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1003db948);
      (*pcVar1)();
    }
  }
  IVar2 = objc_stub::imageWithSymbolConfiguration_(IVar2,IVar6);
  return IVar2;
}



/* Address: 0x1003db9c0 | FUN_1003db9c0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

ID FUN_1003db9c0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  NSString *pNVar7;
  NSDictionary *pNVar8;
  ID IVar9;
  undefined8 *puVar10;
  long lVar11;
  
  uVar1 = 0;
  FUN_10000ec2c(0,&DAT_100fc3e90,&PTR__OBJC_CLASS___NSFont_100f8d678);
  uVar2 = uVar1;
  FUN_1001ff928();
  FUN_1001ffa18();
  puVar6 = &DAT_100fc32e0;
  FUN_1000037f0(&DAT_100fc32e0,&DAT_100c45af8);
  _swift_initStackObject();
  *(undefined8 *)(puVar6 + 0x18) = 4;
  *(undefined8 *)(puVar6 + 0x10) = 2;
  *(undefined8 *)(puVar6 + 0x20) = *(undefined8 *)PTR__NSFontAttributeName_100ea9048;
  *(undefined8 *)(puVar6 + 0x28) = uVar2;
  puVar10 = *(undefined8 **)PTR__NSForegroundColorAttributeName_100ea90c8;
  *(undefined8 *)(puVar6 + 0x40) = uVar1;
  *(undefined8 **)(puVar6 + 0x48) = puVar10;
  FUN_1001fe15c();
  uVar1 = *puVar10;
  uVar2 = 0;
  FUN_10000ec2c(0,&DAT_100fc3550,&PTR__OBJC_CLASS___NSColor_100f8d680);
  *(undefined8 *)(puVar6 + 0x68) = uVar2;
  *(undefined8 *)(puVar6 + 0x50) = uVar1;
  puVar3 = puVar6;
  FUN_1003cdb3c(puVar6);
  _swift_setDeallocating(puVar6);
  puVar4 = &DAT_100fc31c8;
  FUN_1000037f0(&DAT_100fc31c8,&DAT_100c45b00);
  _swift_arrayDestroy(puVar6 + 0x20,2,puVar4);
  lVar5 = 0;
  FUN_1003187b8();
  lVar11 = *(long *)(param_1 + *(int *)(lVar5 + 0x14) + 8);
  lVar5 = lVar11;
  if (lVar11 == 0) {
    lVar5 = -0x2000000000000000;
  }
  puVar6 = &_OBJC_CLASS___NSAttributedString;
  _objc_allocWithZone();
  _swift_bridgeObjectRetain(lVar11);
  pNVar7 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(lVar5);
  FUN_1003cdfa4(0);
  FUN_100003a00(&DAT_100fc3230,FUN_1003cdfa4,&TargetProtocolConformanceDescriptor_100c45954);
  pNVar8 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(puVar3);
  IVar9 = objc_stub::initWithString_attributes_((ID)puVar6,pNVar7,pNVar8);
  return IVar9;
}



/* Address: 0x1003dbbdc | FUN_1003dbbdc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1003dbbdc(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  NSString *pNVar5;
  NSDictionary *pNVar6;
  ID IVar7;
  void *pvVar8;
  URL UVar9;
  undefined8 *puVar10;
  String SVar11;
  
  uVar1 = 0;
  FUN_10000ec2c(0,&DAT_100fc3e90,&PTR__OBJC_CLASS___NSFont_100f8d678);
  uVar2 = uVar1;
  FUN_1001ff934();
  puVar4 = &DAT_100fc32e0;
  FUN_1000037f0(&DAT_100fc32e0,&DAT_100c45af8);
  _swift_initStackObject();
  *(undefined8 *)(puVar4 + 0x18) = 4;
  *(undefined8 *)(puVar4 + 0x10) = 2;
  UVar9.unknown = puVar4 + 0x20;
  *(undefined8 *)UVar9.unknown = *(undefined8 *)PTR__NSFontAttributeName_100ea9048;
  *(undefined8 *)(puVar4 + 0x28) = uVar2;
  puVar10 = *(undefined8 **)PTR__NSForegroundColorAttributeName_100ea90c8;
  *(undefined8 *)(puVar4 + 0x40) = uVar1;
  *(undefined8 **)(puVar4 + 0x48) = puVar10;
  FUN_1001fe19c();
  uVar1 = *puVar10;
  uVar2 = 0;
  FUN_10000ec2c(0,&DAT_100fc3550,&PTR__OBJC_CLASS___NSColor_100f8d680);
  *(undefined8 *)(puVar4 + 0x68) = uVar2;
  *(undefined8 *)(puVar4 + 0x50) = uVar1;
  puVar3 = puVar4;
  FUN_1003cdb3c(puVar4);
  _swift_setDeallocating(puVar4);
  puVar4 = &DAT_100fc31c8;
  FUN_1000037f0(&DAT_100fc31c8,&DAT_100c45b00);
  pvVar8 = (void *)0x2;
  _swift_arrayDestroy(UVar9.unknown,2,puVar4);
  if ((param_2 & 1) == 0) {
    SVar11 = Foundation::URL::get_absoluteString(UVar9);
    pvVar8 = SVar11.bridgeObject;
  }
  else {
    FUN_1003189b0();
  }
  puVar4 = &_OBJC_CLASS___NSAttributedString;
  _objc_allocWithZone();
  pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(pvVar8);
  FUN_1003cdfa4(0);
  FUN_100003a00(&DAT_100fc3230,FUN_1003cdfa4,&TargetProtocolConformanceDescriptor_100c45954);
  pNVar6 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(puVar3);
  IVar7 = objc_stub::initWithString_attributes_((ID)puVar4,pNVar5,pNVar6);
  return IVar7;
}



/* Address: 0x1003dbddc | FUN_1003dbddc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1003dbddc(void)

{
  long lVar1;
  ID self;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  lVar1 = _TtC11PasteCoreUI12TextItemCell::___lazy_storage___previewLabel;
  self = *(ID *)(unaff_x20 + _TtC11PasteCoreUI12TextItemCell::___lazy_storage___previewLabel);
  if (self == 0) {
    puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_100201eb0(PTR___swiftEmptyArrayStorage_100eae0d8,0,0xe000000000000000);
    self = objc_stub::labelWithAttributedString_((ID)&_OBJC_CLASS___NSTextField,puVar2);
    objc_stub::setNumberOfLines_(self,0);
    puVar3 = (undefined8 *)objc_stub::setTextAlignment_(self,4);
    FUN_1001fe15c();
    objc_stub::setTextColor_(self,*puVar3);
    uVar4 = 0;
    FUN_10000ec2c(0,&DAT_100fc3e90,&PTR__OBJC_CLASS___NSFont_100f8d678);
    FUN_1000f3e48();
    objc_stub::setFont_(self,uVar4);
    *(ID *)(unaff_x20 + lVar1) = self;
  }
  return self;
}



/* Address: 0x1003dbee0 | FUN_1003dbee0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1003dbee0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined1 auStack_f0 [16];
  code *local_e0;
  undefined1 *puStack_d8;
  ID local_d0;
  undefined1 auStack_c0 [16];
  ID local_b0;
  
  _swift_getObjectType();
  *(undefined8 *)(unaff_x20 + _TtC11PasteCoreUI12TextItemCell::___lazy_storage___previewLabel) = 0;
  lVar1 = _TtC11PasteCoreUI12TextItemCell::footerView;
  IVar2 = 0;
  FUN_1003dda70();
  _objc_allocWithZone();
  IVar2 = objc_stub::initWithFrame_(IVar2,0,0,0,0);
  objc_stub::setContentHuggingPriority_forOrientation_(IVar2,0x443b8000,1);
  *(ID *)(unaff_x20 + lVar1) = IVar2;
  IVar3 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff90,"initWithFrame:",param_1,
                              param_2,param_3,param_4);
  puVar4 = &DAT_100fc3e80;
  FUN_1000037f0(&DAT_100fc3e80,&DAT_100c45d50);
  _swift_initStackObject();
  *(undefined8 *)(puVar4 + 0x18) = 5;
  *(undefined8 *)(puVar4 + 0x10) = 2;
  IVar2 = IVar3;
  FUN_1003dbddc();
  *(ID *)(puVar4 + 0x20) = IVar2;
  *(undefined8 *)(puVar4 + 0x28) =
       *(undefined8 *)(IVar3 + _TtC11PasteCoreUI12TextItemCell::footerView);
  puStack_d8 = auStack_c0;
  local_e0 = FUN_1003ddc2c;
  puVar5 = puVar4;
  local_d0 = IVar3;
  local_b0 = IVar3;
  FUN_1001fa150(puVar4,FUN_1003cdf48,auStack_f0);
  _swift_bridgeObjectRelease(puVar5);
  _swift_setDeallocating(puVar4);
  _swift_arrayDestroy(puVar4 + 0x20,*(undefined8 *)(puVar4 + 0x10),
                      PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8);
  return IVar3;
}



/* Address: 0x1003dc07c | FUN_1003dc07c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_1003dc07c(long param_1,ID param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  ID IVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  
  FUN_1003dbddc();
  uVar3 = 0;
  FUN_10000ec2c(0,&DAT_100fc31b0,&PTR__OBJC_CLASS___NSTextField_100f8d670);
  lVar4 = param_1;
  FUN_1001f9b74(0x4028000000000000,param_1,uVar3,&PTR_PTR_100ec00e8);
  lVar2 = _TtC11PasteCoreUI12TextItemCell::___lazy_storage___previewLabel;
  IVar5 = objc_stub::bottomAnchor
                    (*(ID *)(param_2 +
                            _TtC11PasteCoreUI12TextItemCell::___lazy_storage___previewLabel));
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  lVar1 = *(long *)(param_1 + 0x20);
  FUN_100004640(param_1,uVar3);
  (**(code **)(lVar1 + 0x10))(uVar3,lVar1);
  IVar5 = objc_stub::constraintLessThanOrEqualToAnchor_constant_(IVar5,0x4024000000000000,uVar3);
  IVar6 = objc_stub::topAnchor(*(ID *)(param_2 + lVar2));
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  lVar1 = *(long *)(param_1 + 0x20);
  FUN_100004640(param_1,uVar3);
  (**(code **)(lVar1 + 8))(uVar3,lVar1);
  IVar6 = objc_stub::constraintEqualToAnchor_(IVar6,uVar3);
  lVar1 = _TtC11PasteCoreUI12TextItemCell::footerView;
  uVar3 = 0;
  FUN_1003dda70(0);
  FUN_1001f9b74(0,param_1,uVar3,&PTR_PTR_100ec00e8);
  IVar7 = objc_stub::bottomAnchor(*(ID *)(param_2 + lVar1));
  IVar8 = objc_stub::bottomAnchor(param_2);
  IVar7 = objc_stub::constraintEqualToAnchor_(IVar7,IVar8);
  puVar9 = &DAT_100fc3b00;
  FUN_1000037f0(&DAT_100fc3b00,&DAT_100c45590);
  _swift_initStackObject();
  *(undefined8 *)(puVar9 + 0x18) = 10;
  *(undefined8 *)(puVar9 + 0x10) = 5;
  puVar10 = &DAT_100fc3e70;
  FUN_1000037f0(&DAT_100fc3e70,&DAT_100c45d60);
  *(undefined **)(puVar9 + 0x38) = puVar10;
  *(undefined ***)(puVar9 + 0x40) = &PTR_PTR_100ec00b8;
  *(long *)(puVar9 + 0x20) = lVar4;
  uVar3 = 0;
  FUN_10000ec2c(0,&DAT_100fc32d0,&PTR__OBJC_CLASS___NSLayoutConstraint_100f8d660);
  *(undefined8 *)(puVar9 + 0x60) = uVar3;
  *(undefined ***)(puVar9 + 0x68) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar9 + 0x48) = IVar5;
  *(undefined8 *)(puVar9 + 0x88) = uVar3;
  *(undefined ***)(puVar9 + 0x90) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar9 + 0x70) = IVar6;
  *(undefined **)(puVar9 + 0xb0) = puVar10;
  *(undefined ***)(puVar9 + 0xb8) = &PTR_PTR_100ec00b8;
  *(long *)(puVar9 + 0x98) = param_1;
  *(undefined8 *)(puVar9 + 0xd8) = uVar3;
  *(undefined ***)(puVar9 + 0xe0) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar9 + 0xc0) = IVar7;
  _swift_bridgeObjectRetain(lVar4);
  puVar11 = puVar9;
  FUN_1001f8d60(puVar9);
  _swift_bridgeObjectRelease(lVar4);
  _swift_setDeallocating(puVar9);
  uVar3 = *(undefined8 *)(puVar9 + 0x10);
  puVar10 = &DAT_100fc3b10;
  FUN_1000037f0(&DAT_100fc3b10,&DAT_100c455a0);
  _swift_arrayDestroy(puVar9 + 0x20,uVar3,puVar10);
  return puVar11;
}



/* Address: 0x1003dc380 | _TtC11PasteCoreUI12TextItemCell::initWithFrame: */

/* Function Stack Size: 0x30 bytes */

ID _TtC11PasteCoreUI12TextItemCell::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  FUN_1003dd884(param_1,param_2,0x17,FUN_1003dbee0,param_3.field1_0x10.field0_0x0,
                param_3.field1_0x10.field1_0x8);
  return param_1;
}



/* Address: 0x1003dc390 | FUN_1003dc390 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1003dc390(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8)

{
  undefined8 *puVar1;
  ID *pIVar2;
  char cVar3;
  code *pcVar4;
  bool bVar5;
  byte bVar6;
  uint uVar7;
  LocalizedStringResource LVar8;
  AttributedString AVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  NSAttributedString *this;
  NSAttributedString *pNVar13;
  NSString *pNVar14;
  ID IVar15;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ID unaff_x20;
  long lVar16;
  ID IVar17;
  ID IVar18;
  AttributedString AVar19;
  long *plVar20;
  ID IVar21;
  undefined8 uVar22;
  undefined8 extraout_d0;
  String SVar23;
  ID local_d0 [4];
  undefined8 local_b0;
  undefined4 local_a8;
  uint local_a4;
  undefined1 auStack_a0 [16];
  long local_90;
  
  local_d0[3] = param_6;
  local_b0 = param_7;
  local_a8 = param_8;
  local_a4 = param_5;
  LVar8 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar8.unknown + -8) + 0x40));
  LVar8.unknown = (undefined *)((long)local_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  AVar9 = Foundation::AttributedString::typeMetadataAccessor();
  lVar16 = *(long *)(AVar9.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar16 + 0x40));
  AVar19.unknown = LVar8.unknown + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar10 = &DAT_100fc3120;
  FUN_1000037f0(&DAT_100fc3120,&DAT_100c45360);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  IVar17 = (long)AVar19.unknown - extraout_x8_01;
  lVar11 = 0;
  FUN_10031a030();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar11 + -8) + 0x40));
  plVar20 = (long *)(IVar17 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  FUN_10031ebc8(IVar17);
  lVar12 = 0;
  FUN_100317b10();
  IVar21 = IVar17;
  (**(code **)(*(long *)(lVar12 + -8) + 0x30))(IVar17,1,lVar12);
  if ((int)IVar21 == 1) {
    FUN_1003cd5f4(IVar17);
  }
  else {
    IVar21 = IVar17;
    _swift_getEnumCaseMultiPayload(IVar17,lVar12);
    if ((int)IVar21 == 0) {
      local_d0[2] = param_4;
      FUN_10031a7dc(IVar17,plVar20);
      FUN_1003ded74();
      FUN_10000ec2c(0,&DAT_100fc3128,&PTR__OBJC_CLASS___NSAppearance_100f8da50);
      IVar21 = IVar17;
      FUN_10021a014();
      local_d0[0] = IVar17;
      objc_stub::setAppearance_(unaff_x20,IVar21);
      local_d0[1] = IVar17;
      (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 &
                   **(ulong **)(unaff_x20 + _TtC11PasteCoreUI8BaseCell::contentView)) + 0x60))();
      FUN_1003dbddc();
      this = (NSAttributedString *)0x0;
      FUN_10000ec2c(0,&DAT_100fc3798,&PTR__OBJC_CLASS___NSAttributedString_100f8d688);
      (**(code **)(lVar16 + 0x10))
                (AVar19.unknown,(long)plVar20 + (long)*(int *)(lVar11 + 0x14),AVar9.unknown);
      pNVar13 = (extension_Foundation)::__C::NSAttributedString::__allocating_init(this,AVar19);
      objc_stub::setAttributedText_(IVar17,pNVar13);
      IVar17 = *(ID *)(unaff_x20 + _TtC11PasteCoreUI12TextItemCell::___lazy_storage___previewLabel);
      FUN_1003dca0c();
      uVar7 = local_a4;
      IVar21 = (ID)local_a4;
      if (IVar17 != 0) {
        uVar22 = 0;
        if ((local_a4 & 0xff) != 3) {
          uVar22 = 0x4024000000000000;
        }
        objc_stub::setConstant_(IVar17,uVar22);
      }
      IVar17 = local_d0[2];
      if (*plVar20 < -0x80000000) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1003dca08);
        (*pcVar4)();
      }
      if (0x7fffffff < *plVar20) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1003dca0c);
        (*pcVar4)();
      }
      lVar11 = *(long *)(unaff_x20 + _TtC11PasteCoreUI12TextItemCell::footerView);
      thunk_FUN_1001e6b38(LVar8.unknown);
      SVar23 = (extension_Foundation)::Swift::String::init(LVar8);
      IVar18 = *(ID *)(lVar11 + _TtC11PasteCoreUIP33_F07B8EDBDD8A7D685CAC01D5F7B8ABA010FooterView::
                                textLabel);
      pNVar14 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(SVar23.bridgeObject);
      objc_stub::setText_(IVar18,pNVar14);
      IVar18 = local_d0[1];
      *(ID *)(lVar11 + _TtC11PasteCoreUIP33_F07B8EDBDD8A7D685CAC01D5F7B8ABA010FooterView::
                       fadingColor) = local_d0[1];
      FUN_1003dcfa0(0);
      bVar5 = (uVar7 & 0xff) == 3;
      IVar15 = (ID)bVar5;
      param_2 = 0;
      uVar22 = 0;
      if (!bVar5) {
        uVar22 = 0x4032000000000000;
      }
      FUN_100208820(IVar15,0);
      FUN_1003dd0a4();
      objc_stub::setConstant_(IVar15,uVar22);
      param_1 = extraout_d0;
      FUN_10000ec2c(0,&DAT_100fc3e40,&PTR__OBJC_CLASS___NSView_100f8d628);
      uVar22 = 0;
      local_90 = lVar11;
      FUN_10000ec2c(0,&DAT_100fc33e0,&PTR__OBJC_CLASS___CAMediaTimingFunction_100f8d668);
      FUN_10021ccd4();
      FUN_10021cadc(0,1,uVar22,0,FUN_1003dd144,auStack_a0,0,0);
      lVar12 = *(long *)(unaff_x20 + _TtC11PasteCoreUI8ItemCell::shortcutView);
      pIVar2 = (ID *)(lVar12 + _TtCC11PasteCoreUI8ItemCell11OverlayView::background);
      IVar15 = *pIVar2;
      *pIVar2 = IVar18;
      IVar18 = pIVar2[1];
      *(undefined1 *)(pIVar2 + 1) = 1;
      FUN_1003cd63c(IVar15,(char)IVar18);
      FUN_1003d5b84();
      FUN_10005241c(plVar20,FUN_10031a030);
      lVar11 = _TtC11PasteCoreUI8ItemCell::preferredCompactHeaderStyle;
      lVar16 = *(long *)(unaff_x20 + _TtC11PasteCoreUI8ItemCell::headerView);
      _swift_beginAccess(unaff_x20 + _TtC11PasteCoreUI8ItemCell::preferredCompactHeaderStyle,
                         auStack_a0,0,0);
      cVar3 = '\0';
      if (*(char *)(unaff_x20 + lVar11) != '\x02') {
        cVar3 = *(char *)(unaff_x20 + lVar11);
      }
      *(char *)(lVar16 + _TtCC11PasteCoreUI8ItemCell10HeaderView::compactStyle) = cVar3;
      FUN_1003d41b4(IVar17,IVar21,local_d0[3]);
      uVar7 = (uint)IVar17;
      goto LAB_1003dc578;
    }
    FUN_10005241c(IVar17,FUN_100317b10);
  }
  lVar11 = _TtC11PasteCoreUI8ItemCell::preferredCompactHeaderStyle;
  lVar12 = *(long *)(unaff_x20 + _TtC11PasteCoreUI8ItemCell::headerView);
  _swift_beginAccess(unaff_x20 + _TtC11PasteCoreUI8ItemCell::preferredCompactHeaderStyle,auStack_a0,
                     0,0);
  cVar3 = '\0';
  if (*(char *)(unaff_x20 + lVar11) != '\x02') {
    cVar3 = *(char *)(unaff_x20 + lVar11);
  }
  *(char *)(lVar12 + _TtCC11PasteCoreUI8ItemCell10HeaderView::compactStyle) = cVar3;
  IVar21 = (ID)local_a4;
  FUN_1003d41b4(param_4,IVar21,local_d0[3]);
  uVar7 = (uint)param_4;
  lVar12 = *(long *)(unaff_x20 + _TtC11PasteCoreUI8ItemCell::shortcutView);
LAB_1003dc578:
  puVar1 = (undefined8 *)
           (lVar12 + _TtCC11PasteCoreUI8ItemCell21ShortcutIndicatorView::quickPasteIndex);
  *puVar1 = local_b0;
  *(char *)(puVar1 + 1) = (char)local_a8;
  FUN_1003d6444();
  FUN_10031c38c();
  FUN_100208674(uVar7 & 1);
  FUN_1003d8588();
  FUN_1003d8230();
  objc_stub::setConstant_(IVar21,param_1);
  IVar21 = 0;
  FUN_1003d83c4();
  objc_stub::setConstant_(IVar21,param_2);
  IVar21 = 0;
  FUN_1003d82fc();
  objc_stub::setConstant_(IVar21,param_3);
  bVar6 = 0;
  FUN_10031f040();
  *(byte *)(unaff_x20 + _TtC11PasteCoreUI8ItemCell::isEditable) = bVar6 & 1;
  return;
}



/* Address: 0x1003dca0c | FUN_1003dca0c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

ID FUN_1003dca0c(void)

{
  long lVar1;
  _CocoaArrayWrapper _Var2;
  code *pcVar3;
  bool bVar4;
  ID IVar5;
  _ArrayBuffer _Var6;
  ulong self;
  MainActor *pMVar7;
  MainActor *pMVar8;
  UnownedSerialExecutor UVar9;
  UnownedSerialExecutor UVar10;
  NSObject *pNVar11;
  NSObject *pNVar12;
  NSObject *unaff_x20;
  long lVar13;
  ulong uVar14;
  
  IVar5 = objc_stub::superview((ID)unaff_x20);
  if (IVar5 != 0) {
    _Var6.unknown = (undefined *)objc_stub::FUN_100bffc00(IVar5);
    FUN_10000ec2c(0,&DAT_100fc32d0,&PTR__OBJC_CLASS___NSLayoutConstraint_100f8d660);
    (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
    if ((ulong)_Var6.unknown >> 0x3e == 0) {
      lVar13 = *(long *)(((ulong)_Var6.unknown & 0xffffffffffffff8) + 0x10);
    }
    else {
      _Var2.unknown = _Var6.unknown & 0xffffffffffffff8;
      if ((undefined *)0x7fffffffffffffff < _Var6.unknown) {
        _Var2.unknown = _Var6.unknown;
      }
      lVar13 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
    }
    if (lVar13 != 0) {
      uVar14 = 0;
      do {
        if (((ulong)_Var6.unknown & 0xc000000000000001) == 0) {
          if (*(ulong *)(((ulong)_Var6.unknown & 0xffffffffffffff8) + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1003dcd20);
            (*pcVar3)();
          }
          self = *(ulong *)(_Var6.unknown + uVar14 * 8 + 0x20);
        }
        else {
          self = uVar14;
          Swift::_ArrayBuffer::__getElementSlowPath(uVar14,_Var6);
        }
        lVar1 = uVar14 + 1;
        if (SCARRY8(uVar14,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1003dcd1c);
          (*pcVar3)();
        }
        pMVar7 = Swift::MainActor::typeMetadataAccessor();
        pMVar8 = Swift::MainActor::get_shared(pMVar7,pMVar7);
        pMVar7 = pMVar8;
        FUN_1003d0b5c();
        UVar9 = Swift::Actor::get_unownedExecutor();
        UVar10 = UVar9;
        _swift_task_isCurrentExecutor();
        if (((ulong)UVar10.unknown & 1) == 0) {
          _swift_task_reportUnexpectedExecutor
                    ("PasteCoreUI/TextItemCell.swift",0x1e,1,0x8c,UVar9.unknown,pMVar7);
        }
        pNVar11 = (NSObject *)objc_stub::FUN_100c027c0(self);
        if (pNVar11 != (NSObject *)0x0) {
          pNVar12 = pNVar11;
          _swift_dynamicCastObjCClass(pNVar11,&_OBJC_CLASS___NSView);
          if (pNVar12 == (NSObject *)0x0) {
            _swift_unknownObjectRelease(pNVar11);
          }
          else {
            FUN_10000ec2c(0,&DAT_100fc3e40,&PTR__OBJC_CLASS___NSView_100f8d628);
            _swift_unknownObjectRetain(pNVar11);
            bVar4 = (extension_ObjectiveC)::__C::NSObject::___infix(pNVar12,unaff_x20);
            _swift_unknownObjectRelease_n(pNVar11,2);
            if ((bVar4) && (IVar5 = objc_stub::FUN_100c027a0(self), IVar5 == 3)) {
              _swift_bridgeObjectRelease(_Var6.unknown);
              _swift_release(pMVar8);
              return self;
            }
          }
        }
        pNVar11 = (NSObject *)objc_stub::FUN_100c09d00(self);
        if (pNVar11 == (NSObject *)0x0) {
LAB_1003dcab8:
          _swift_release(pMVar8);
        }
        else {
          pNVar12 = pNVar11;
          _swift_dynamicCastObjCClass(pNVar11,&_OBJC_CLASS___NSView);
          if (pNVar12 == (NSObject *)0x0) {
            _swift_release(pMVar8);
            _swift_unknownObjectRelease(pNVar11);
          }
          else {
            FUN_10000ec2c(0,&DAT_100fc3e40,&PTR__OBJC_CLASS___NSView_100f8d628);
            _swift_unknownObjectRetain(pNVar11);
            bVar4 = (extension_ObjectiveC)::__C::NSObject::___infix(pNVar12,unaff_x20);
            _swift_unknownObjectRelease_n(pNVar11,2);
            if (!bVar4) goto LAB_1003dcab8;
            IVar5 = objc_stub::FUN_100c09ce0(self);
            _swift_release(pMVar8);
            if (IVar5 == 3) {
              _swift_bridgeObjectRelease(_Var6.unknown);
              return self;
            }
          }
        }
        uVar14 = uVar14 + 1;
      } while (lVar1 != lVar13);
    }
    _swift_bridgeObjectRelease(_Var6.unknown);
  }
  return 0;
}



/* Address: 0x1003dcd68 | FUN_1003dcd68 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1003dcd68(double param_1,ID param_2,undefined8 param_3)

{
  bool bVar1;
  ID IVar2;
  long unaff_x20;
  undefined8 uVar3;
  double extraout_d0;
  double dVar4;
  undefined8 uVar5;
  double dVar6;
  undefined1 auStack_80 [16];
  undefined8 local_70;
  
  IVar2 = param_2;
  FUN_1003dbddc();
  FUN_1003dca0c();
  if (IVar2 == 0) {
    dVar4 = 0.0;
  }
  else {
    objc_stub::constant(IVar2);
    dVar4 = extraout_d0;
  }
  dVar6 = 0.0;
  if (((uint)param_3 & 0xff) != 3) {
    dVar6 = 10.0;
  }
  IVar2 = *(ID *)(unaff_x20 + _TtC11PasteCoreUI12TextItemCell::___lazy_storage___previewLabel);
  FUN_1003dca0c();
  if (IVar2 != 0) {
    objc_stub::setConstant_(IVar2,param_1 * dVar6 + (1.0 - param_1) * dVar4);
  }
  uVar3 = *(undefined8 *)(unaff_x20 + _TtC11PasteCoreUI12TextItemCell::footerView);
  bVar1 = ((uint)param_3 & 0xff) == 3;
  IVar2 = (ID)bVar1;
  uVar5 = 0;
  if (!bVar1) {
    uVar5 = 0x4032000000000000;
  }
  FUN_100208820(IVar2,1);
  FUN_1003dd0a4();
  objc_stub::setConstant_(IVar2,uVar5);
  FUN_10000ec2c(0,&DAT_100fc3e40,&PTR__OBJC_CLASS___NSView_100f8d628);
  uVar5 = 0;
  local_70 = uVar3;
  FUN_10000ec2c(0,&DAT_100fc33e0,&PTR__OBJC_CLASS___CAMediaTimingFunction_100f8d668);
  FUN_10021ccd4();
  FUN_10021cadc(0,1,uVar5,1,thunk_FUN_1003dd144,auStack_80,0,0);
  FUN_1003d84a4(param_1,param_2,param_3);
  return;
}



/* Address: 0x1003dcf3c | FUN_1003dcf3c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1003dcf3c(void)

{
  return 0;
}



/* Address: 0x1003dcf68 | _TtC11PasteCoreUI12TextItemCell::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11PasteCoreUI12TextItemCell::_cxx_destruct(ID param_1,SEL param_2)

{
  return;
}



/* Address: 0x1003dcfa0 | FUN_1003dcfa0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_1003dcfa0(void)

{
  long lVar1;
  ID IVar2;
  long unaff_x20;
  
  lVar1 = _TtC11PasteCoreUIP33_F07B8EDBDD8A7D685CAC01D5F7B8ABA010FooterView::fadingColor;
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 &
               **(ulong **)
                 (unaff_x20 +
                 _TtC11PasteCoreUIP33_F07B8EDBDD8A7D685CAC01D5F7B8ABA010FooterView::opaqueView)) +
              0x60))(*(undefined8 *)
                      (unaff_x20 +
                      _TtC11PasteCoreUIP33_F07B8EDBDD8A7D685CAC01D5F7B8ABA010FooterView::fadingColor
                      ));
  IVar2 = *(ID *)(unaff_x20 + lVar1);
  if (IVar2 == 0) {
    IVar2 = objc_stub::clearColor((ID)&_OBJC_CLASS___NSColor);
  }
  else {
    FUN_1002067b8(0,IVar2);
  }
  FUN_100208ee4(IVar2);
  IVar2 = *(ID *)(unaff_x20 + lVar1);
  if (IVar2 == 0) {
    IVar2 = objc_stub::clearColor((ID)&_OBJC_CLASS___NSColor);
  }
  FUN_100208f74(IVar2);
  return;
}



/* Address: 0x1003dd0a4 | FUN_1003dd0a4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1003dd0a4(void)

{
  long lVar1;
  ID IVar2;
  long unaff_x20;
  
  lVar1 = _TtC11PasteCoreUIP33_F07B8EDBDD8A7D685CAC01D5F7B8ABA010FooterView::
          ___lazy_storage___opaqueViewHeightConstraint;
  IVar2 = *(ID *)(unaff_x20 +
                 _TtC11PasteCoreUIP33_F07B8EDBDD8A7D685CAC01D5F7B8ABA010FooterView::
                 ___lazy_storage___opaqueViewHeightConstraint);
  if (IVar2 == 0) {
    IVar2 = objc_stub::heightAnchor
                      (*(ID *)(unaff_x20 +
                              _TtC11PasteCoreUIP33_F07B8EDBDD8A7D685CAC01D5F7B8ABA010FooterView::
                              opaqueView));
    IVar2 = objc_stub::constraintEqualToConstant_(IVar2,0x4032000000000000);
    *(ID *)(unaff_x20 + lVar1) = IVar2;
  }
  return IVar2;
}



/* Address: 0x1003dd144 | FUN_1003dd144 */

void FUN_1003dd144(void)

{
  long unaff_x20;
  
  objc_stub::layoutIfNeeded(*(ID *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1003dd14c | FUN_1003dd14c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1003dd14c(void)

{
  return ZEXT816(0x100f9a1e8);
}



/* Address: 0x1003dd16c | FUN_1003dd16c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

ID FUN_1003dd16c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ID IVar2;
  ID IVar3;
  undefined8 uVar4;
  NSString *pNVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  long unaff_x20;
  undefined1 auStack_d0 [16];
  ID local_c0;
  
  _swift_getObjectType();
  *(undefined8 *)
   (unaff_x20 + _TtC11PasteCoreUIP33_F07B8EDBDD8A7D685CAC01D5F7B8ABA010FooterView::fadingColor) = 0;
  lVar1 = _TtC11PasteCoreUIP33_F07B8EDBDD8A7D685CAC01D5F7B8ABA010FooterView::fadingView;
  IVar2 = NSColor::whiteColor((ID)&_OBJC_CLASS___NSColor);
  IVar3 = NSColor::blackColor((ID)&_OBJC_CLASS___NSColor);
  uVar4 = 0;
  FUN_100209c28(0);
  _objc_allocWithZone();
  FUN_100209214(0,IVar2,IVar3,uVar4);
  *(ID *)(unaff_x20 + lVar1) = IVar2;
  lVar1 = _TtC11PasteCoreUIP33_F07B8EDBDD8A7D685CAC01D5F7B8ABA010FooterView::opaqueView;
  IVar3 = 0;
  FUN_100236364();
  _objc_allocWithZone();
  IVar3 = objc_stub::init(IVar3);
  *(ID *)(unaff_x20 + lVar1) = IVar3;
  lVar1 = _TtC11PasteCoreUIP33_F07B8EDBDD8A7D685CAC01D5F7B8ABA010FooterView::textLabel;
  pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar3 = NSTextField::labelWithString_((ID)&_OBJC_CLASS___NSTextField,pNVar5);
  puVar6 = (undefined8 *)0x0;
  FUN_1001fe19c();
  NSTextField::setTextColor_(IVar3,*puVar6);
  NSTextField::setTextAlignment_(IVar3,1);
  uVar4 = 0;
  FUN_10000ec2c(0,&DAT_100fc3e90,&PTR__OBJC_CLASS___NSFont_100f8d678);
  FUN_1001ff934();
  NSTextField::setFont_(IVar3,uVar4);
  *(ID *)(unaff_x20 + lVar1) = IVar3;
  *(undefined8 *)
   (unaff_x20 +
   _TtC11PasteCoreUIP33_F07B8EDBDD8A7D685CAC01D5F7B8ABA010FooterView::
   ___lazy_storage___opaqueViewHeightConstraint) = 0;
  IVar3 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff80,"initWithFrame:",param_1,
                              param_2,param_3,param_4);
  puVar7 = &DAT_100fc3e80;
  FUN_1000037f0(&DAT_100fc3e80,&DAT_100c45d50);
  _swift_initStackObject();
  *(undefined8 *)(puVar7 + 0x18) = 7;
  *(undefined8 *)(puVar7 + 0x10) = 3;
  *(undefined8 *)(puVar7 + 0x20) =
       *(undefined8 *)
        (IVar3 + _TtC11PasteCoreUIP33_F07B8EDBDD8A7D685CAC01D5F7B8ABA010FooterView::opaqueView);
  *(undefined8 *)(puVar7 + 0x28) =
       *(undefined8 *)
        (IVar3 + _TtC11PasteCoreUIP33_F07B8EDBDD8A7D685CAC01D5F7B8ABA010FooterView::fadingView);
  *(undefined8 *)(puVar7 + 0x30) =
       *(undefined8 *)
        (IVar3 + _TtC11PasteCoreUIP33_F07B8EDBDD8A7D685CAC01D5F7B8ABA010FooterView::textLabel);
  local_c0 = IVar3;
  FUN_1001fa150(puVar7,FUN_1003ddc24,auStack_d0);
  _swift_bridgeObjectRelease();
  _swift_setDeallocating(puVar7);
  _swift_arrayDestroy(puVar7 + 0x20,*(undefined8 *)(puVar7 + 0x10),
                      PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8);
  return IVar3;
}



/* Address: 0x1003dd3f0 | FUN_1003dd3f0 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_1003dd3f0(ID param_1)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  undefined8 uVar5;
  ID *pIVar6;
  ID *pIVar7;
  ID *pIVar8;
  ID IVar9;
  ID *pIVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  ID IVar14;
  ID IVar15;
  ID local_90 [3];
  ID local_78;
  undefined **ppuStack_70;
  
  IVar1 = param_1;
  _swift_getObjectType();
  IVar14 = *(ID *)(param_1 +
                  _TtC11PasteCoreUIP33_F07B8EDBDD8A7D685CAC01D5F7B8ABA010FooterView::fadingView);
  IVar2 = objc_stub::topAnchor(IVar14);
  IVar3 = objc_stub::topAnchor(param_1);
  IVar2 = objc_stub::constraintEqualToAnchor_(IVar2,IVar3);
  IVar3 = objc_stub::heightAnchor(IVar14);
  IVar3 = objc_stub::constraintEqualToConstant_(IVar3,0x4040000000000000);
  IVar14 = objc_stub::bottomAnchor(IVar14);
  IVar15 = *(ID *)(param_1 +
                  _TtC11PasteCoreUIP33_F07B8EDBDD8A7D685CAC01D5F7B8ABA010FooterView::opaqueView);
  IVar4 = objc_stub::topAnchor(IVar15);
  IVar14 = objc_stub::constraintEqualToAnchor_(IVar14,IVar4);
  ppuStack_70 = &PTR_PTR_100ec00e8;
  uVar5 = 0;
  local_90[0] = param_1;
  local_78 = IVar1;
  FUN_100209c28(0);
  pIVar6 = local_90;
  FUN_1001f9b74(0,pIVar6,uVar5,&PTR_PTR_100ec00e8);
  FUN_100004594(local_90);
  IVar4 = objc_stub::bottomAnchor(IVar15);
  IVar15 = objc_stub::bottomAnchor(param_1);
  IVar4 = objc_stub::constraintEqualToAnchor_(IVar4,IVar15);
  ppuStack_70 = &PTR_PTR_100ec00e8;
  uVar5 = 0;
  local_90[0] = param_1;
  local_78 = IVar1;
  FUN_100236364(0);
  pIVar7 = local_90;
  FUN_1001f9b74(0,pIVar7,uVar5,&PTR_PTR_100ec00e8);
  pIVar8 = local_90;
  FUN_100004594();
  FUN_1003dd0a4();
  IVar15 = objc_stub::bottomAnchor
                     (*(ID *)(param_1 +
                             _TtC11PasteCoreUIP33_F07B8EDBDD8A7D685CAC01D5F7B8ABA010FooterView::
                             textLabel));
  IVar9 = objc_stub::bottomAnchor(param_1);
  IVar15 = objc_stub::constraintEqualToAnchor_constant_(IVar15,0xc024000000000000,IVar9);
  ppuStack_70 = &PTR_PTR_100ec00e8;
  uVar5 = 0;
  local_90[0] = param_1;
  local_78 = IVar1;
  FUN_10000ec2c(0,&DAT_100fc31b0,&PTR__OBJC_CLASS___NSTextField_100f8d670);
  pIVar10 = local_90;
  FUN_1001f9b74(0,pIVar10,uVar5,&PTR_PTR_100ec00e8);
  FUN_100004594(local_90);
  puVar11 = &DAT_100fc3b00;
  FUN_1000037f0(&DAT_100fc3b00,&DAT_100c45590);
  _swift_initStackObject();
  *(undefined8 *)(puVar11 + 0x18) = 0x12;
  *(undefined8 *)(puVar11 + 0x10) = 9;
  uVar5 = 0;
  FUN_10000ec2c(0,&DAT_100fc32d0,&PTR__OBJC_CLASS___NSLayoutConstraint_100f8d660);
  *(undefined8 *)(puVar11 + 0x38) = uVar5;
  *(undefined ***)(puVar11 + 0x40) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar11 + 0x20) = IVar2;
  *(undefined8 *)(puVar11 + 0x60) = uVar5;
  *(undefined ***)(puVar11 + 0x68) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar11 + 0x48) = IVar3;
  *(undefined8 *)(puVar11 + 0x88) = uVar5;
  *(undefined ***)(puVar11 + 0x90) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar11 + 0x70) = IVar14;
  puVar12 = &DAT_100fc3e70;
  FUN_1000037f0(&DAT_100fc3e70,&DAT_100c45d60);
  *(undefined **)(puVar11 + 0xb0) = puVar12;
  *(undefined ***)(puVar11 + 0xb8) = &PTR_PTR_100ec00b8;
  *(ID **)(puVar11 + 0x98) = pIVar6;
  *(undefined8 *)(puVar11 + 0xd8) = uVar5;
  *(undefined ***)(puVar11 + 0xe0) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar11 + 0xc0) = IVar4;
  *(undefined **)(puVar11 + 0x100) = puVar12;
  *(undefined ***)(puVar11 + 0x108) = &PTR_PTR_100ec00b8;
  *(ID **)(puVar11 + 0xe8) = pIVar7;
  *(undefined8 *)(puVar11 + 0x128) = uVar5;
  *(undefined ***)(puVar11 + 0x130) = &PTR_PTR_100ec00a8;
  *(ID **)(puVar11 + 0x110) = pIVar8;
  *(undefined8 *)(puVar11 + 0x150) = uVar5;
  *(undefined ***)(puVar11 + 0x158) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar11 + 0x138) = IVar15;
  *(undefined **)(puVar11 + 0x178) = puVar12;
  *(undefined ***)(puVar11 + 0x180) = &PTR_PTR_100ec00b8;
  *(ID **)(puVar11 + 0x160) = pIVar10;
  _swift_bridgeObjectRetain(pIVar6);
  _swift_bridgeObjectRetain(pIVar7);
  puVar13 = puVar11;
  FUN_1001f8d60();
  _swift_bridgeObjectRelease(pIVar6);
  _swift_bridgeObjectRelease(pIVar7);
  _swift_setDeallocating(puVar11);
  uVar5 = *(undefined8 *)(puVar11 + 0x10);
  puVar12 = &DAT_100fc3b10;
  FUN_1000037f0(&DAT_100fc3b10,&DAT_100c455a0);
  _swift_arrayDestroy(puVar11 + 0x20,uVar5,puVar12);
  return puVar13;
}



/* Address: 0x1003dd874 | _TtC11PasteCoreUIP33_F07B8EDBDD8A7D685CAC01D5F7B8ABA010FooterView::initWithFrame: */

/* Function Stack Size: 0x30 bytes */

ID _TtC11PasteCoreUIP33_F07B8EDBDD8A7D685CAC01D5F7B8ABA010FooterView::initWithFrame_
             (ID param_1,SEL param_2,CGRect param_3)

{
  FUN_1003dd884(param_1,param_2,0x72,FUN_1003dd16c,param_3.field1_0x10.field0_0x0,
                param_3.field1_0x10.field1_0x8);
  return param_1;
}



/* Address: 0x1003dd884 | FUN_1003dd884 */

char * FUN_1003dd884(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,code *param_8)

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
    pcVar4 = "PasteCoreUI/TextItemCell.swift";
    _swift_task_reportUnexpectedExecutor
              ("PasteCoreUI/TextItemCell.swift",0x1e,1,param_7,UVar3.unknown,pMVar1);
  }
  (*param_8)(param_1,param_2,param_3,param_4);
  _swift_release(pMVar2);
  return pcVar4;
}



/* Address: 0x1003dd95c | _TtC11PasteCoreUIP33_F07B8EDBDD8A7D685CAC01D5F7B8ABA010FooterView::initWithCoder: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC11PasteCoreUIP33_F07B8EDBDD8A7D685CAC01D5F7B8ABA010FooterView::initWithCoder_
             (ID param_1,SEL param_2,ID param_3)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1003d0b5c();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteCoreUI/TextItemCell.swift",0x1e,1,0x85,UVar3.unknown,pMVar1);
  }
  FUN_1003dda90();
  _swift_release(pMVar2);
  return param_3;
}



/* Address: 0x1003dda08 | _TtC11PasteCoreUIP33_F07B8EDBDD8A7D685CAC01D5F7B8ABA010FooterView::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11PasteCoreUIP33_F07B8EDBDD8A7D685CAC01D5F7B8ABA010FooterView::_cxx_destruct
               (ID param_1,SEL param_2)

{
  return;
}



/* Address: 0x1003dda70 | FUN_1003dda70 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1003dda70(void)

{
  return ZEXT816(0x100f9a498);
}



/* Address: 0x1003dda90 | FUN_1003dda90 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003dda90(void)

{
  long lVar1;
  code *pcVar2;
  ID IVar3;
  ID IVar4;
  undefined8 uVar5;
  NSString *pNVar6;
  undefined8 *puVar7;
  long unaff_x20;
  String SVar8;
  
  *(undefined8 *)
   (unaff_x20 + _TtC11PasteCoreUIP33_F07B8EDBDD8A7D685CAC01D5F7B8ABA010FooterView::fadingColor) = 0;
  lVar1 = _TtC11PasteCoreUIP33_F07B8EDBDD8A7D685CAC01D5F7B8ABA010FooterView::fadingView;
  IVar3 = objc_stub::whiteColor((ID)&_OBJC_CLASS___NSColor);
  IVar4 = objc_stub::blackColor((ID)&_OBJC_CLASS___NSColor);
  uVar5 = 0;
  FUN_100209c28(0);
  _objc_allocWithZone();
  FUN_100209214(0,IVar3,IVar4,uVar5);
  *(ID *)(unaff_x20 + lVar1) = IVar3;
  lVar1 = _TtC11PasteCoreUIP33_F07B8EDBDD8A7D685CAC01D5F7B8ABA010FooterView::opaqueView;
  IVar4 = 0;
  FUN_100236364();
  _objc_allocWithZone();
  IVar4 = objc_stub::init(IVar4);
  *(ID *)(unaff_x20 + lVar1) = IVar4;
  lVar1 = _TtC11PasteCoreUIP33_F07B8EDBDD8A7D685CAC01D5F7B8ABA010FooterView::textLabel;
  pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar4 = objc_stub::labelWithString_((ID)&_OBJC_CLASS___NSTextField,pNVar6);
  puVar7 = (undefined8 *)0x0;
  FUN_1001fe19c();
  objc_stub::setTextColor_(IVar4,*puVar7);
  objc_stub::setTextAlignment_(IVar4,1);
  uVar5 = 0;
  FUN_10000ec2c(0,&DAT_100fc3e90,&PTR__OBJC_CLASS___NSFont_100f8d678);
  FUN_1001ff934();
  objc_stub::setFont_(IVar4,uVar5);
  *(ID *)(unaff_x20 + lVar1) = IVar4;
  *(undefined8 *)
   (unaff_x20 +
   _TtC11PasteCoreUIP33_F07B8EDBDD8A7D685CAC01D5F7B8ABA010FooterView::
   ___lazy_storage___opaqueViewHeightConstraint) = 0;
  SVar8.bridgeObject = (void *)0x2;
  SVar8.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar8,(StaticString)0xd000000000000025,0x8000000100d8dc00,
             0xda5450);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1003ddc24);
  (*pcVar2)();
}



/* Address: 0x1003ddc24 | FUN_1003ddc24 */

void FUN_1003ddc24(void)

{
  long unaff_x20;
  
  FUN_1003dd3f0(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1003ddc2c | FUN_1003ddc2c */

void FUN_1003ddc2c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1003dc07c(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1003ddc34 | thunk_FUN_1003dd144 */

void thunk_FUN_1003dd144(void)

{
  long unaff_x20;
  
  objc_stub::layoutIfNeeded(*(ID *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1003ddc38 | FUN_1003ddc38 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1003ddc38(void)

{
  long lVar1;
  ID IVar2;
  undefined *self;
  long unaff_x20;
  
  lVar1 = _TtC11PasteCoreUI15UnknownItemCell::___lazy_storage___imageViewTopConstraint;
  IVar2 = *(ID *)(unaff_x20 +
                 _TtC11PasteCoreUI15UnknownItemCell::___lazy_storage___imageViewTopConstraint);
  if (IVar2 == 0) {
    self = &_OBJC_CLASS___NSLayoutConstraint;
    _objc_allocWithZone();
    IVar2 = objc_stub::init((ID)self);
    *(ID *)(unaff_x20 + lVar1) = IVar2;
  }
  return IVar2;
}



/* Address: 0x1003ddca4 | FUN_1003ddca4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1003ddca4(ID param_1)

{
  code *pcVar1;
  byte bVar2;
  ID IVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  NSArray *pNVar6;
  ID IVar7;
  ID IVar8;
  ID *pIVar9;
  ID IVar10;
  undefined8 uVar11;
  
  bVar2 = Swift::_stdlib_isOSVersionAtLeast(0x1a,0,0);
  uVar11 = 0x4040000000000000;
  if ((bVar2 & 1) == 0) {
    uVar11 = 0x4048000000000000;
  }
  IVar3 = objc_stub::configurationWithPointSize_weight_
                    ((ID)&_OBJC_CLASS___NSImageSymbolConfiguration,uVar11,
                     *(undefined8 *)PTR__NSFontWeightRegular_100ea90b8);
  puVar4 = (undefined8 *)&DAT_100fc3e80;
  FUN_1000037f0(&DAT_100fc3e80,&DAT_100c45d50);
  _swift_allocObject();
  puVar4[3] = 3;
  puVar4[2] = 1;
  puVar5 = puVar4;
  FUN_1001fe19c();
  puVar4[4] = *puVar5;
  FUN_10000ec2c(0,&DAT_100fc3550,&PTR__OBJC_CLASS___NSColor_100f8d680);
  pNVar6 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_release(puVar4);
  IVar7 = objc_stub::FUN_100bff960((ID)&_OBJC_CLASS___NSImageSymbolConfiguration,pNVar6);
  IVar8 = objc_stub::FUN_100bff940(IVar3,IVar7);
  pIVar9 = (ID *)0x0;
  FUN_10000ec2c(0,&DAT_100fc3558,&PTR__OBJC_CLASS___NSImage_100f8d6b8);
  FUN_10020cf18();
  IVar3 = *pIVar9;
  IVar7 = pIVar9[1];
  _swift_bridgeObjectRetain_n(IVar7,2);
  IVar10 = IVar3;
  FUN_1000f653c(IVar3,IVar7);
  if (IVar10 == 0) {
    _swift_bridgeObjectRelease(IVar7);
    IVar3 = 0xd000000000000013;
    FUN_1000f653c(0xd000000000000013,0x8000000100d8de20);
    if (IVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1003ddeb0);
      (*pcVar1)();
    }
  }
  else {
    FUN_1000f653c(IVar3,IVar7);
    if (IVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1003dde34);
      (*pcVar1)();
    }
  }
  IVar3 = objc_stub::imageWithSymbolConfiguration_(IVar3,IVar8);
  objc_stub::setImage_(param_1,IVar3);
  return 0;
}



/* Address: 0x1003ddeb0 | FUN_1003ddeb0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

ID FUN_1003ddeb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  LocalizedStringResource LVar2;
  undefined *puVar3;
  ID IVar4;
  NSString *pNVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long extraout_x8;
  long unaff_x20;
  String SVar9;
  undefined1 auStack_110 [16];
  code *local_100;
  undefined1 *puStack_f8;
  ID local_f0;
  undefined1 auStack_e0 [16];
  ID local_d0;
  
  _swift_getObjectType();
  LVar2 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar2.unknown + -8) + 0x40));
  *(undefined8 *)
   (unaff_x20 + _TtC11PasteCoreUI15UnknownItemCell::___lazy_storage___imageViewTopConstraint) = 0;
  lVar1 = _TtC11PasteCoreUI15UnknownItemCell::imageView;
  puVar3 = &_OBJC_CLASS___NSImageView;
  _objc_allocWithZone();
  IVar4 = objc_stub::init((ID)puVar3);
  FUN_1003ddca4();
  *(ID *)(unaff_x20 + lVar1) = IVar4;
  lVar1 = _TtC11PasteCoreUI15UnknownItemCell::textLabel;
  FUN_1001daf54(auStack_110 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  SVar9 = (extension_Foundation)::Swift::String::init
                    ((LocalizedStringResource)
                     (auStack_110 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)));
  pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(SVar9.bridgeObject);
  IVar4 = objc_stub::labelWithString_((ID)&_OBJC_CLASS___NSTextField,pNVar5);
  puVar6 = (undefined8 *)objc_stub::setTextAlignment_(IVar4,1);
  FUN_1001fe19c();
  objc_stub::setTextColor_(IVar4,*puVar6);
  uVar7 = 0;
  FUN_10000ec2c(0,&DAT_100fc3e90,&PTR__OBJC_CLASS___NSFont_100f8d678);
  FUN_1001ff934();
  objc_stub::setFont_(IVar4,uVar7);
  *(ID *)(unaff_x20 + lVar1) = IVar4;
  IVar4 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff70,"initWithFrame:",param_1,
                              param_2,param_3,param_4);
  puVar3 = &DAT_100fc3e80;
  FUN_1000037f0(&DAT_100fc3e80,&DAT_100c45d50);
  _swift_initStackObject();
  *(undefined8 *)(puVar3 + 0x18) = 5;
  *(undefined8 *)(puVar3 + 0x10) = 2;
  *(undefined8 *)(puVar3 + 0x20) =
       *(undefined8 *)(IVar4 + _TtC11PasteCoreUI15UnknownItemCell::imageView);
  *(undefined8 *)(puVar3 + 0x28) =
       *(undefined8 *)(IVar4 + _TtC11PasteCoreUI15UnknownItemCell::textLabel);
  puStack_f8 = auStack_e0;
  local_100 = FUN_1003de78c;
  puVar8 = puVar3;
  local_f0 = IVar4;
  local_d0 = IVar4;
  FUN_1001fa150(puVar3,FUN_1003cdf48,auStack_110);
  _swift_bridgeObjectRelease(puVar8);
  _swift_setDeallocating(puVar3);
  _swift_arrayDestroy(puVar3 + 0x20,*(undefined8 *)(puVar3 + 0x10),
                      PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8);
  return IVar4;
}



/* Address: 0x1003de12c | FUN_1003de12c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_1003de12c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ID IVar5;
  ID IVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  ID IVar12;
  ID self;
  long local_90 [3];
  long local_78;
  undefined **ppuStack_70;
  
  lVar2 = param_2;
  _swift_getObjectType();
  lVar1 = _TtC11PasteCoreUI15UnknownItemCell::imageView;
  uVar3 = 0;
  FUN_10000ec2c(0,&DAT_100fc32c8,&PTR__OBJC_CLASS___NSImageView_100f8d6a0);
  lVar4 = param_1;
  FUN_1001f9b74(0x4028000000000000,param_1,uVar3,&PTR_PTR_100ec00e8);
  IVar12 = *(ID *)(param_2 + lVar1);
  IVar5 = objc_stub::bottomAnchor(IVar12);
  self = *(ID *)(param_2 + _TtC11PasteCoreUI15UnknownItemCell::textLabel);
  IVar6 = objc_stub::topAnchor(self);
  IVar5 = objc_stub::constraintEqualToAnchor_constant_(IVar5,0xc024000000000000,IVar6);
  IVar6 = objc_stub::topAnchor(IVar12);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  lVar1 = *(long *)(param_1 + 0x20);
  FUN_100004640(param_1,uVar3);
  (**(code **)(lVar1 + 8))(uVar3,lVar1);
  IVar6 = objc_stub::constraintEqualToAnchor_(IVar6,uVar3);
  *(ID *)(param_2 + _TtC11PasteCoreUI15UnknownItemCell::___lazy_storage___imageViewTopConstraint) =
       IVar6;
  uVar3 = 0;
  FUN_1003ddc38();
  ppuStack_70 = &PTR_PTR_100ec00e8;
  uVar7 = 0;
  local_90[0] = param_2;
  local_78 = lVar2;
  FUN_10000ec2c(0,&DAT_100fc31b0,&PTR__OBJC_CLASS___NSTextField_100f8d670);
  plVar8 = local_90;
  FUN_1001f9b74(0,plVar8,uVar7,&PTR_PTR_100ec00e8);
  FUN_100004594(local_90);
  IVar6 = objc_stub::centerYAnchor(self);
  IVar12 = objc_stub::centerYAnchor(*(ID *)(param_2 + _TtC11PasteCoreUI8ItemCell::shortcutView));
  IVar6 = objc_stub::constraintEqualToAnchor_(IVar6,IVar12);
  puVar9 = &DAT_100fc3b00;
  FUN_1000037f0(&DAT_100fc3b00,&DAT_100c45590);
  _swift_initStackObject();
  *(undefined8 *)(puVar9 + 0x18) = 10;
  *(undefined8 *)(puVar9 + 0x10) = 5;
  puVar10 = &DAT_100fc3e70;
  FUN_1000037f0(&DAT_100fc3e70,&DAT_100c45d60);
  *(undefined **)(puVar9 + 0x38) = puVar10;
  *(undefined ***)(puVar9 + 0x40) = &PTR_PTR_100ec00b8;
  *(long *)(puVar9 + 0x20) = lVar4;
  uVar7 = 0;
  FUN_10000ec2c(0,&DAT_100fc32d0,&PTR__OBJC_CLASS___NSLayoutConstraint_100f8d660);
  *(undefined8 *)(puVar9 + 0x60) = uVar7;
  *(undefined ***)(puVar9 + 0x68) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar9 + 0x48) = IVar5;
  *(undefined8 *)(puVar9 + 0x88) = uVar7;
  *(undefined ***)(puVar9 + 0x90) = &PTR_PTR_100ec00a8;
  *(undefined8 *)(puVar9 + 0x70) = uVar3;
  *(undefined **)(puVar9 + 0xb0) = puVar10;
  *(undefined ***)(puVar9 + 0xb8) = &PTR_PTR_100ec00b8;
  *(long **)(puVar9 + 0x98) = plVar8;
  *(undefined8 *)(puVar9 + 0xd8) = uVar7;
  *(undefined ***)(puVar9 + 0xe0) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar9 + 0xc0) = IVar6;
  _swift_bridgeObjectRetain(lVar4);
  puVar11 = puVar9;
  FUN_1001f8d60(puVar9);
  _swift_bridgeObjectRelease(lVar4);
  _swift_setDeallocating(puVar9);
  uVar3 = *(undefined8 *)(puVar9 + 0x10);
  puVar10 = &DAT_100fc3b10;
  FUN_1000037f0(&DAT_100fc3b10,&DAT_100c455a0);
  _swift_arrayDestroy(puVar9 + 0x20,uVar3,puVar10);
  return puVar11;
}



/* Address: 0x1003de474 | _TtC11PasteCoreUI15UnknownItemCell::initWithFrame: */

/* Function Stack Size: 0x30 bytes */

ID __thiscall
_TtC11PasteCoreUI15UnknownItemCell::initWithFrame_
          (_TtC11PasteCoreUI15UnknownItemCell *this,ID param_1,SEL param_2,CGRect param_3)

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
    pcVar4 = "PasteCoreUI/UnknownItemCell.swift";
    _swift_task_reportUnexpectedExecutor
              ("PasteCoreUI/UnknownItemCell.swift",0x21,1,0x28,UVar3.unknown,pMVar1);
  }
  FUN_1003ddeb0();
  _swift_release(pMVar2);
  return (ID)pcVar4;
}



/* Address: 0x1003de53c | FUN_1003de53c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003de53c(undefined8 param_1,undefined8 param_2,undefined8 param_3,ID param_4,ID param_5,
                  undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined8 *puVar1;
  char cVar2;
  long lVar3;
  byte bVar4;
  uint uVar5;
  ID IVar6;
  long unaff_x20;
  long lVar7;
  undefined8 uVar8;
  undefined8 extraout_d0;
  undefined8 uVar9;
  undefined1 auStack_88 [24];
  
  IVar6 = param_4;
  FUN_1003ddc38();
  uVar9 = 0;
  uVar8 = 0;
  if (((uint)param_5 & 0xff) != 3) {
    uVar8 = 0x4024000000000000;
  }
  objc_stub::setConstant_(IVar6,uVar8);
  lVar3 = _TtC11PasteCoreUI8ItemCell::preferredCompactHeaderStyle;
  lVar7 = *(long *)(unaff_x20 + _TtC11PasteCoreUI8ItemCell::headerView);
  uVar8 = extraout_d0;
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
  objc_stub::setConstant_(param_5,uVar8);
  IVar6 = 0;
  FUN_1003d83c4();
  objc_stub::setConstant_(IVar6,uVar9);
  IVar6 = 0;
  FUN_1003d82fc();
  objc_stub::setConstant_(IVar6,param_3);
  bVar4 = 0;
  FUN_10031f040();
  *(byte *)(unaff_x20 + _TtC11PasteCoreUI8ItemCell::isEditable) = bVar4 & 1;
  return;
}



/* Address: 0x1003de6e8 | FUN_1003de6e8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1003de6e8(void)

{
  return 0;
}



/* Address: 0x1003de724 | _TtC11PasteCoreUI15UnknownItemCell::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11PasteCoreUI15UnknownItemCell::_cxx_destruct(ID param_1,SEL param_2)

{
  return;
}



/* Address: 0x1003de76c | FUN_1003de76c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1003de76c(void)

{
  return ZEXT816(0x100f9a570);
}



/* Address: 0x1003de78c | FUN_1003de78c */

void FUN_1003de78c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1003de12c(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1003de794 | FUN_1003de794 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 * FUN_1003de794(undefined8 *param_1,uint param_2)

{
  long lVar1;
  undefined8 *puVar2;
  ulong extraout_x1;
  ulong uVar3;
  ID unaff_x20;
  
  FUN_10031bc94();
  if ((param_1 == (undefined8 *)0x0) || (FUN_1003293c4(), (param_2 & 0xff) != 1)) {
    puVar2 = (undefined8 *)objc_stub::sourceApplication(unaff_x20);
    if (puVar2 == (undefined8 *)0x0) {
      param_1 = (undefined8 *)0x0;
    }
    else {
      uVar3 = extraout_x1;
      if (DAT_100fc3868 != -1) {
        puVar2 = &DAT_100fc3868;
        uVar3 = 0;
        _swift_once();
      }
      lVar1 = DAT_100fc3870;
      FUN_100310f10();
      FUN_100308c8c();
      param_1 = (undefined8 *)0x0;
      if ((*(long *)(lVar1 + 0x10) == 0) || (FUN_10016f9fc(), param_1 = puVar2, (uVar3 & 1) == 0)) {
        FUN_100310f10();
      }
      else {
        param_1 = *(undefined8 **)(*(long *)(lVar1 + 0x38) + (long)puVar2 * 8);
      }
    }
  }
  else {
    thunk_FUN_100324cb0();
    FUN_1003de9a0();
  }
  return param_1;
}



/* Address: 0x1003de89c | FUN_1003de89c */

undefined8 FUN_1003de89c(undefined8 param_1,uint param_2)

{
  FUN_1003293c4();
  if ((param_2 & 0xff) == 1) {
    thunk_FUN_100324cb0();
    FUN_1003de9a0();
    return param_1;
  }
  return 0;
}



/* Address: 0x1003de8d0 | FUN_1003de8d0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 * FUN_1003de8d0(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (DAT_100fc3868 != -1) {
    param_1 = &DAT_100fc3868;
    param_2 = 0;
    _swift_once();
  }
  lVar1 = DAT_100fc3870;
  FUN_100310f10();
  FUN_100308c8c();
  puVar2 = (undefined8 *)0x0;
  if ((*(long *)(lVar1 + 0x10) != 0) && (FUN_10016f9fc(), puVar2 = param_1, (param_2 & 1) != 0)) {
    return *(undefined8 **)(*(long *)(lVar1 + 0x38) + (long)param_1 * 8);
  }
  FUN_100310f10();
  return puVar2;
}



/* Address: 0x1003de974 | FUN_1003de974 */

undefined8 FUN_1003de974(undefined8 param_1,uint param_2)

{
  FUN_1003293c4();
  if ((param_2 & 0xff) == 1) {
    thunk_FUN_100324cb0();
    return param_1;
  }
  return 8;
}



/* Address: 0x1003de9a0 | FUN_1003de9a0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1003de9a0(undefined8 *param_1)

{
  uint uVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = (uint)param_1 & 0xff;
  if (uVar1 < 4) {
    if (uVar1 == 1 || ((ulong)param_1 & 0xff) == 0) {
      if (((ulong)param_1 & 0xff) == 0) {
        uVar3 = 0xf0554d;
        FUN_1001fe66c();
      }
      else {
        uVar3 = 0xfa9214;
        FUN_1001fe6f8();
      }
    }
    else if (uVar1 == 2) {
      uVar3 = 0xfab700;
      FUN_1001fe944();
    }
    else {
      uVar3 = 0x52cc64;
      FUN_1001fe554();
    }
  }
  else if (uVar1 < 6) {
    if (uVar1 == 4) {
      uVar3 = 0x62a9f5;
      FUN_1001fe5e0();
    }
    else {
      uVar3 = 0xb663e0;
      FUN_1001fe9d0();
    }
  }
  else if (uVar1 == 6) {
    uVar3 = 0xfa506f;
    FUN_1001fea5c();
  }
  else {
    uVar3 = 0x8f8f93;
    FUN_1001fe4c8();
  }
  uVar4 = *param_1;
  FUN_1003dec08(0);
  FUN_100206668(0x3ff0000000000000,uVar3);
  bVar2 = Swift::_stdlib_isOSVersionAtLeast(0x1a,0,0);
  if ((bVar2 & 1) == 0) {
    uVar4 = uVar3;
  }
  return uVar4;
}



/* Address: 0x1003dead8 | FUN_1003dead8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_1003dead8(undefined8 *param_1)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  _DictionaryStorage *this;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  FUN_1001fe5e0();
  param_1 = (undefined8 *)*param_1;
  puVar3 = param_1;
  FUN_1001fe66c();
  uVar8 = *puVar3;
  this = (_DictionaryStorage *)&DAT_100fc3878;
  uVar7 = 0;
  FUN_1000037f0();
  lVar4 = 2;
  Swift::_DictionaryStorage::_allocate(this,2);
  uVar5 = 0x62a9f5;
  FUN_10016f9fc();
  if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1003debfc);
    (*pcVar2)();
  }
  lVar1 = lVar4 + 0x40;
  uVar6 = uVar5 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar6) = *(ulong *)(lVar1 + uVar6) | 1L << (uVar5 & 0x3f);
  *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar5 * 8) = 0x62a9f5;
  *(undefined8 **)(*(long *)(lVar4 + 0x38) + uVar5 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar4 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1003dec00);
    (*pcVar2)();
  }
  *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
  uVar5 = 0xf0554d;
  FUN_10016f9fc();
  if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1003dec04);
    (*pcVar2)();
  }
  uVar7 = uVar5 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar7) = *(ulong *)(lVar1 + uVar7) | 1L << (uVar5 & 0x3f);
  *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar5 * 8) = 0xf0554d;
  *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar5 * 8) = uVar8;
  if (!SCARRY8(*(long *)(lVar4 + 0x10),1)) {
    *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
    DAT_100fc3870 = lVar4;
    return uVar8;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1003dec08);
  (*pcVar2)();
}



/* Address: 0x1003dec08 | FUN_1003dec08 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_1003dec08(void)

{
  undefined *puVar1;
  
  if (DAT_100fc3550 != (undefined *)0x0) {
    return;
  }
  puVar1 = &_OBJC_CLASS___NSColor;
  _swift_getObjCClassMetadata();
  DAT_100fc3550 = puVar1;
  return;
}



/* Address: 0x1003dec4c | FUN_1003dec4c */

void FUN_1003dec4c(void)

{
  return;
}



/* Address: 0x1003dec78 | FUN_1003dec78 */

void FUN_1003dec78(undefined8 param_1,Hasher param_2)

{
  Hasher HVar1;
  long unaff_x20;
  
  Swift::Hasher::init(*(__int64 *)(unaff_x20 + 0x28));
  HVar1.unknown = (undefined *)0x0;
  Swift::Hasher::_combine(0,param_2);
  Swift::Hasher::_finalize(HVar1);
  FUN_1003dec4c();
  return;
}



/* Address: 0x1003decbc | FUN_1003decbc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

char * FUN_1003decbc(undefined8 param_1,uint param_2)

{
  ID unaff_x20;
  String SVar1;
  
  FUN_1003293c4();
  if ((param_2 & 0xff) == 1) {
    thunk_FUN_100324cb0();
    FUN_1003de9a0();
  }
  else {
    FUN_1001ff0d0();
  }
  FUN_1003ed58c();
  FUN_1003c89c8(0);
  objc_stub::name(unaff_x20);
  SVar1 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  return SVar1.str;
}



/* Address: 0x1003ded74 | FUN_1003ded74 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

NSAttributedString * FUN_1003ded74(void)

{
  AttributedString AVar1;
  NSAttributedString *this;
  long lVar2;
  NSAttributedString *pNVar3;
  NSAttributedString *pNVar4;
  long extraout_x8;
  long unaff_x20;
  long lVar5;
  
  AVar1 = Foundation::AttributedString::typeMetadataAccessor();
  lVar5 = *(long *)(AVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar5 + 0x40));
  this = (NSAttributedString *)0x0;
  FUN_1003dee74();
  lVar2 = 0;
  FUN_10031a030();
  (**(code **)(lVar5 + 0x10))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             unaff_x20 + *(int *)(lVar2 + 0x14),AVar1.unknown);
  pNVar3 = (extension_Foundation)::__C::NSAttributedString::__allocating_init
                     (this,(AttributedString)
                           (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)));
  FUN_1003095bc();
  if (((ulong)pNVar3 & 1) == 0) {
    FUN_1001ffc58();
    pNVar4 = pNVar3;
    FUN_100206f0c();
    if (((ulong)pNVar4 & 1) != 0) {
      FUN_100218f60();
      pNVar3 = *(NSAttributedString **)pNVar4;
    }
  }
  else {
    FUN_100219bc4();
    pNVar3 = *(NSAttributedString **)pNVar3;
  }
  return pNVar3;
}



/* Address: 0x1003dee74 | FUN_1003dee74 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_1003dee74(void)

{
  undefined *puVar1;
  
  if (DAT_100fc3798 != (undefined *)0x0) {
    return;
  }
  puVar1 = &_OBJC_CLASS___NSAttributedString;
  _swift_getObjCClassMetadata();
  DAT_100fc3798 = puVar1;
  return;
}



/* Address: 0x1003deeb8 | FUN_1003deeb8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_1003deeb8(undefined8 param_1)

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
  
  uVar6 = param_1;
  FUN_1003df434();
  ppuStack_38 = &PTR_PTR_100ec00e8;
  uVar1 = 0;
  local_58[0] = param_1;
  local_40 = uVar6;
  FUN_1003df5cc(0);
  puVar2 = local_58;
  FUN_1001f97b4(0x4026000000000000,0x4028000000000000,0x4026000000000000,0x4028000000000000,puVar2,
                uVar1,&PTR_PTR_100ec00e8);
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
  uVar6 = *(undefined8 *)(puVar3 + 0x10);
  puVar4 = &DAT_100fc3b10;
  FUN_1000037f0(&DAT_100fc3b10,&DAT_100c455a0);
  _swift_arrayDestroy(puVar3 + 0x20,uVar6,puVar4);
  return puVar5;
}



/* Address: 0x1003defd8 | _TtCO11PasteCoreUI11ItemContent10FooterView::initWithCoder: */

/* Function Stack Size: 0x18 bytes */

ID _TtCO11PasteCoreUI11ItemContent10FooterView::initWithCoder_(ID param_1,SEL param_2,ID param_3)

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
              ("PasteCoreUI/ItemContent.Footer.swift",0x24,1,0x4c,UVar4.unknown,pMVar3);
  }
  lVar1 = containerView;
  self = &_OBJC_CLASS___NSView;
  _objc_allocWithZone();
  IVar6 = objc_stub::init((ID)self);
  *(ID *)(param_1 + lVar1) = IVar6;
  SVar7.bridgeObject = (void *)0x2;
  SVar7.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar7,(StaticString)0xd000000000000025,0x8000000100d8dc00,
             0xda54a0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1003df0b0);
  (*pcVar2)();
}


