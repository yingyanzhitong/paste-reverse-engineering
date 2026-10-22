/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1003cf000 | FUN_1003cf000 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1003cf000(void)

{
  ulong uVar1;
  code *pcVar2;
  ID IVar3;
  NSString *pNVar4;
  ID IVar5;
  __int64 _Var6;
  Dictionary<undefined,undefined> DVar7;
  undefined *self;
  NSString *pNVar8;
  NSDictionary *pNVar9;
  ID self_00;
  void *pvVar10;
  ID unaff_x20;
  String SVar11;
  
  _swift_getObjectType();
  objc_stub::setLineBreakMode_(unaff_x20,1);
  IVar3 = *(ID *)(unaff_x20 +
                 _TtC11PasteCoreUIP33_A767B84F7DFF3D98218543197143AD0B18HeadTruncatedLabel::
                 storedAttributedText);
  if (IVar3 != 0) {
    pNVar4 = (NSString *)objc_stub::string(IVar3);
    if (pNVar4 == (NSString *)0x0) {
      SVar11 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(SVar11.bridgeObject);
    }
    SVar11 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    pvVar10 = SVar11.bridgeObject;
    uVar1 = (ulong)SVar11.str & 0xffffffffffff;
    if (((ulong)pvVar10 & 0x2000000000000000) != 0) {
      uVar1 = (ulong)pvVar10 >> 0x38 & 0xf;
    }
    if (uVar1 == 0) {
      _swift_bridgeObjectRelease(pvVar10);
      return 0;
    }
    IVar5 = objc_stub::FUN_100c07260(unaff_x20);
    FUN_1003cf3ec();
    _Var6 = Swift::String::get_count(SVar11);
    if ((long)IVar5 < _Var6) {
      _Var6 = Swift::String::get_count(SVar11);
      if (SBORROW8(_Var6,IVar5)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1003cf2fc);
        (*pcVar2)();
      }
      objc_stub::attributesAtIndex_effectiveRange_(IVar3,0,0);
      FUN_1003cdfa4(0);
      FUN_100003a00(&DAT_100fc3230,FUN_1003cdfa4,&TargetProtocolConformanceDescriptor_100c45954);
      DVar7 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
      self = &_OBJC_CLASS___NSMutableAttributedString;
      _objc_allocWithZone();
      pNVar8 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      pNVar9 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(DVar7.unknown);
      self_00 = objc_stub::initWithString_attributes_((ID)self,pNVar8,pNVar9);
      IVar3 = objc_stub::FUN_100bfe260(IVar3,_Var6 - IVar5,IVar5);
      objc_stub::appendAttributedString_(self_00,IVar3);
      _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff70,"setAttributedText:",self_00);
      _swift_bridgeObjectRelease(pvVar10);
      _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff60,"setToolTip:",pNVar4);
    }
    else {
      _swift_bridgeObjectRelease(pvVar10);
      _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff90,"setAttributedText:",IVar3);
      _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff80,"setToolTip:",0);
    }
  }
  return 0;
}



/* Address: 0x1003cf2fc | _TtC11PasteCoreUIP33_A767B84F7DFF3D98218543197143AD0B18HeadTruncatedLabel::layout */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11PasteCoreUIP33_A767B84F7DFF3D98218543197143AD0B18HeadTruncatedLabel::layout
               (ID param_1,SEL param_2)

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
              ("PasteCoreUI/FilesItemCell.swift",0x1f,1,0x57,UVar5.unknown,puVar4);
  }
  local_50.receiver = param_1;
  local_50.super_class = pcVar2;
  _objc_msgSendSuper2(&local_50,"layout");
  FUN_1003cf000();
  _swift_release(pMVar3);
  return;
}



/* Address: 0x1003cf3ec | FUN_1003cf3ec */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003cf3ec(long param_1)

{
  code *pcVar1;
  NSString *this;
  NSString *self;
  undefined *puVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  NSDictionary *pNVar6;
  ID unaff_x20;
  double extraout_d0;
  double extraout_d0_00;
  double dVar7;
  
  this = (NSString *)0x0;
  FUN_10000ec2c(0,&DAT_100fc32d8,&PTR__OBJC_CLASS___NSString_100f8d910);
  self = (extension_Foundation)::__C::NSString::__allocating_init(this,(StaticString)0x100da51e0);
  puVar2 = &DAT_100fc32e0;
  FUN_1000037f0(&DAT_100fc32e0,&DAT_100c45af8);
  _swift_initStackObject();
  *(undefined8 *)(puVar2 + 0x18) = 2;
  *(undefined8 *)(puVar2 + 0x10) = 1;
  *(undefined8 *)(puVar2 + 0x20) = *(undefined8 *)PTR__NSFontAttributeName_100ea9048;
  IVar3 = objc_stub::font(unaff_x20);
  IVar4 = 0;
  FUN_10000ec2c(0,&DAT_100fc3e90,&PTR__OBJC_CLASS___NSFont_100f8d678);
  *(ID *)(puVar2 + 0x40) = IVar4;
  if (IVar3 == 0) {
    FUN_1001ff928();
    IVar3 = IVar4;
  }
  *(ID *)(puVar2 + 0x28) = IVar3;
  puVar5 = puVar2;
  FUN_1003cdb3c(puVar2);
  _swift_setDeallocating(puVar2);
  FUN_100005808(puVar2 + 0x20,&DAT_100fc31c8,&DAT_100c45b00);
  FUN_1003cdfa4(0);
  FUN_100003a00(&DAT_100fc3230,FUN_1003cdfa4,&TargetProtocolConformanceDescriptor_100c45954);
  pNVar6 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(puVar5);
  objc_stub::FUN_100c0ee60((ID)self,pNVar6);
  objc_stub::bounds(unaff_x20);
  dVar7 = extraout_d0_00;
  _CGRectGetWidth();
  dVar7 = (double)(long)(dVar7 / extraout_d0);
  if (0x7fefffffffffffff < (ulong)ABS(dVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1003cf5f0);
    (*pcVar1)();
  }
  if (dVar7 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1003cf5f4);
    (*pcVar1)();
  }
  if (dVar7 < 9.223372036854776e+18) {
    if (SUB168(SEXT816((long)dVar7) * SEXT816(param_1),8) == (long)dVar7 * param_1 >> 0x3f) {
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1003cf5fc);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003cf5f8);
  (*pcVar1)();
}



/* Address: 0x1003cf5fc | _TtC11PasteCoreUIP33_A767B84F7DFF3D98218543197143AD0B18HeadTruncatedLabel::initWithFrame: */

/* Function Stack Size: 0x30 bytes */

ID _TtC11PasteCoreUIP33_A767B84F7DFF3D98218543197143AD0B18HeadTruncatedLabel::initWithFrame_
             (ID param_1,SEL param_2,CGRect param_3)

{
  undefined *puVar1;
  class_t *pcVar2;
  MainActor *pMVar3;
  undefined8 *puVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  ID IVar7;
  objc_super local_70;
  
  pcVar2 = (class_t *)param_1;
  _swift_getObjectType
            (param_1,param_2,param_3.field0_0x0.field0_0x0,param_3.field0_0x0.field1_0x8,
             param_3.field1_0x10.field0_0x0,param_3.field1_0x10.field1_0x8);
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
              ("PasteCoreUI/FilesItemCell.swift",0x1f,1,0x4c,UVar5.unknown,puVar4);
  }
  *(undefined8 *)(param_1 + storedAttributedText) = 0;
  local_70.receiver = param_1;
  local_70.super_class = pcVar2;
  IVar7 = _objc_msgSendSuper2(&local_70,"initWithFrame:");
  _swift_release(pMVar3);
  return IVar7;
}



/* Address: 0x1003cf70c | _TtC11PasteCoreUIP33_A767B84F7DFF3D98218543197143AD0B18HeadTruncatedLabel::initWithCoder: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC11PasteCoreUIP33_A767B84F7DFF3D98218543197143AD0B18HeadTruncatedLabel::initWithCoder_
             (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  class_t *pcVar2;
  MainActor *pMVar3;
  undefined8 *puVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  ID IVar7;
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
              ("PasteCoreUI/FilesItemCell.swift",0x1f,1,0x4c,UVar5.unknown,puVar4);
  }
  *(undefined8 *)(param_1 + storedAttributedText) = 0;
  local_50.receiver = param_1;
  local_50.super_class = pcVar2;
  IVar7 = _objc_msgSendSuper2(&local_50,"initWithCoder:",param_3);
  _swift_release(pMVar3);
  return IVar7;
}



/* Address: 0x1003cf820 | _TtC11PasteCoreUIP33_A767B84F7DFF3D98218543197143AD0B18HeadTruncatedLabel::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11PasteCoreUIP33_A767B84F7DFF3D98218543197143AD0B18HeadTruncatedLabel::_cxx_destruct
               (ID param_1,SEL param_2)

{
  return;
}



/* Address: 0x1003cf830 | FUN_1003cf830 */

undefined1  [16] FUN_1003cf830(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long extraout_x8;
  long *plVar9;
  undefined1 auVar10 [16];
  
  puVar4 = &DAT_100fc3120;
  FUN_1000037f0(&DAT_100fc3120,&DAT_100c45360);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = -extraout_x8;
  plVar9 = (long *)(&stack0xffffffffffffffc0 + lVar3);
  FUN_10031ebc8(plVar9);
  lVar5 = 0;
  FUN_100317b10();
  plVar6 = plVar9;
  (**(code **)(*(long *)(lVar5 + -8) + 0x30))(plVar9,1,lVar5);
  if ((int)plVar6 == 1) {
    FUN_100005808(plVar9,&DAT_100fc3120,&DAT_100c45360);
  }
  else {
    plVar6 = plVar9;
    _swift_getEnumCaseMultiPayload(plVar9,lVar5);
    if ((int)plVar6 == 4) {
      lVar5 = *plVar9;
      uVar1 = *(undefined8 *)(&stack0xffffffffffffffd0 + lVar3);
      uVar2 = *(undefined8 *)(&stack0xffffffffffffffd8 + lVar3);
      if (*(long *)(lVar5 + 0x10) != 0) {
        uVar7 = *(undefined8 *)(lVar5 + 0x20);
        uVar8 = *(undefined8 *)(lVar5 + 0x28);
        _swift_bridgeObjectRetain(uVar8);
        _swift_bridgeObjectRelease(lVar5);
        FUN_10003bf18(uVar1,uVar2);
        goto LAB_1003cf94c;
      }
      _swift_bridgeObjectRelease(lVar5);
      FUN_10003bf18(uVar1,uVar2);
    }
    else {
      FUN_10009eff8(plVar9);
    }
  }
  uVar7 = 0;
  uVar8 = 0xe000000000000000;
LAB_1003cf94c:
  auVar10._8_8_ = uVar8;
  auVar10._0_8_ = uVar7;
  return auVar10;
}



/* Address: 0x1003cf964 | FUN_1003cf964 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1003cf964(void)

{
  return ZEXT816(0x100f99058);
}



/* Address: 0x1003cf984 | FUN_1003cf984 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1003cf984(void)

{
  return ZEXT816(0x100f98da8);
}



/* Address: 0x1003cf9a4 | FUN_1003cf9a4 */

void FUN_1003cf9a4(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1003ce3e0(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1003cf9ac | FUN_1003cf9ac */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1003cf9ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined1 auStack_120 [16];
  code *local_110;
  undefined1 *puStack_108;
  ID local_100;
  undefined1 auStack_f0 [16];
  ID local_e0;
  undefined1 auStack_98 [24];
  
  _swift_getObjectType();
  lVar1 = _TtC11PasteCoreUI13ImageItemCell::checkerboardView;
  IVar2 = 0;
  FUN_1001fe13c();
  _objc_allocWithZone();
  IVar2 = objc_stub::init(IVar2);
  *(ID *)(unaff_x20 + lVar1) = IVar2;
  lVar1 = _TtC11PasteCoreUI13ImageItemCell::imageView;
  IVar2 = 0;
  FUN_1001f3ba0();
  _swift_getObjCClassFromMetadata();
  _objc_allocWithZone();
  IVar2 = objc_stub::init(IVar2);
  *(ID *)(unaff_x20 + lVar1) = IVar2;
  lVar1 = _TtC11PasteCoreUI13ImageItemCell::sizeLabel;
  IVar2 = 0;
  FUN_1003d0b3c();
  _objc_allocWithZone();
  IVar2 = objc_stub::init(IVar2);
  *(ID *)(unaff_x20 + lVar1) = IVar2;
  IVar2 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff80,"initWithFrame:",param_1,
                              param_2,param_3,param_4);
  lVar1 = _TtC11PasteCoreUI8ItemCell::preferredCompactHeaderStyle;
  _swift_beginAccess(IVar2 + _TtC11PasteCoreUI8ItemCell::preferredCompactHeaderStyle,auStack_98,1,0)
  ;
  *(undefined1 *)(IVar2 + lVar1) = 1;
  puVar3 = &DAT_100fc3e80;
  FUN_1000037f0(&DAT_100fc3e80,&DAT_100c45d50);
  _swift_initStackObject();
  *(undefined8 *)(puVar3 + 0x18) = 7;
  *(undefined8 *)(puVar3 + 0x10) = 3;
  *(undefined8 *)(puVar3 + 0x20) =
       *(undefined8 *)(IVar2 + _TtC11PasteCoreUI13ImageItemCell::checkerboardView);
  *(undefined8 *)(puVar3 + 0x28) =
       *(undefined8 *)(IVar2 + _TtC11PasteCoreUI13ImageItemCell::imageView);
  *(undefined8 *)(puVar3 + 0x30) =
       *(undefined8 *)(IVar2 + _TtC11PasteCoreUI13ImageItemCell::sizeLabel);
  puStack_108 = auStack_f0;
  local_110 = FUN_1003d0ba8;
  puVar4 = puVar3;
  local_100 = IVar2;
  local_e0 = IVar2;
  FUN_1001fa150(puVar3,FUN_1003cdf48,auStack_120);
  _swift_bridgeObjectRelease(puVar4);
  _swift_setDeallocating(puVar3);
  _swift_arrayDestroy(puVar3 + 0x20,*(undefined8 *)(puVar3 + 0x10),
                      PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8);
  return IVar2;
}



/* Address: 0x1003cfba0 | FUN_1003cfba0 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_1003cfba0(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ID IVar11;
  ID self;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  puVar2 = param_1;
  FUN_1001f9774();
  uVar12 = *puVar2;
  uVar13 = puVar2[1];
  uVar14 = puVar2[2];
  uVar15 = puVar2[3];
  uVar3 = 0;
  FUN_1001fe13c(0);
  puVar4 = param_1;
  FUN_1001f97b4(uVar12,uVar13,uVar14,uVar15,param_1,uVar3,&PTR_PTR_100ec00e8);
  uVar12 = *puVar2;
  uVar13 = puVar2[1];
  uVar14 = puVar2[2];
  uVar15 = puVar2[3];
  uVar3 = 0;
  FUN_1001f3ba0(0);
  puVar2 = param_1;
  FUN_1001f97b4(uVar12,uVar13,uVar14,uVar15,param_1,uVar3,&PTR_PTR_100ec00e8);
  IVar11 = *(ID *)(param_2 + _TtC11PasteCoreUI13ImageItemCell::sizeLabel);
  IVar5 = objc_stub::centerXAnchor(IVar11);
  uVar3 = param_1[3];
  lVar1 = param_1[4];
  FUN_100004640(param_1,uVar3);
  (**(code **)(lVar1 + 0x28))(uVar3,lVar1);
  IVar5 = objc_stub::constraintEqualToAnchor_(IVar5,uVar3);
  IVar6 = objc_stub::centerYAnchor(IVar11);
  self = *(ID *)(param_2 + _TtC11PasteCoreUI8ItemCell::shortcutView);
  IVar7 = objc_stub::centerYAnchor(self);
  IVar6 = objc_stub::constraintEqualToAnchor_(IVar6,IVar7);
  IVar7 = objc_stub::heightAnchor(IVar11);
  IVar11 = objc_stub::heightAnchor(self);
  IVar7 = objc_stub::constraintEqualToAnchor_(IVar7,IVar11);
  puVar8 = &DAT_100fc3b00;
  FUN_1000037f0(&DAT_100fc3b00,&DAT_100c45590);
  _swift_initStackObject();
  *(undefined8 *)(puVar8 + 0x18) = 10;
  *(undefined8 *)(puVar8 + 0x10) = 5;
  puVar9 = &DAT_100fc3e70;
  FUN_1000037f0(&DAT_100fc3e70,&DAT_100c45d60);
  *(undefined **)(puVar8 + 0x38) = puVar9;
  *(undefined ***)(puVar8 + 0x40) = &PTR_PTR_100ec00b8;
  *(undefined8 **)(puVar8 + 0x20) = puVar4;
  *(undefined **)(puVar8 + 0x60) = puVar9;
  *(undefined ***)(puVar8 + 0x68) = &PTR_PTR_100ec00b8;
  *(undefined8 **)(puVar8 + 0x48) = puVar2;
  uVar3 = 0;
  FUN_10000ec2c(0,&DAT_100fc32d0,&PTR__OBJC_CLASS___NSLayoutConstraint_100f8d660);
  *(undefined8 *)(puVar8 + 0x88) = uVar3;
  *(undefined ***)(puVar8 + 0x90) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar8 + 0x70) = IVar5;
  *(undefined8 *)(puVar8 + 0xb0) = uVar3;
  *(undefined ***)(puVar8 + 0xb8) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar8 + 0x98) = IVar6;
  *(undefined8 *)(puVar8 + 0xd8) = uVar3;
  *(undefined ***)(puVar8 + 0xe0) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar8 + 0xc0) = IVar7;
  _swift_bridgeObjectRetain(puVar4);
  _swift_bridgeObjectRetain(puVar2);
  puVar10 = puVar8;
  FUN_1001f8d60(puVar8);
  _swift_bridgeObjectRelease(puVar4);
  _swift_bridgeObjectRelease(puVar2);
  _swift_setDeallocating(puVar8);
  uVar3 = *(undefined8 *)(puVar8 + 0x10);
  puVar9 = &DAT_100fc3b10;
  FUN_1000037f0(&DAT_100fc3b10,&DAT_100c455a0);
  _swift_arrayDestroy(puVar8 + 0x20,uVar3,puVar9);
  return puVar10;
}



/* Address: 0x1003cfec4 | _TtC11PasteCoreUI13ImageItemCell::initWithFrame: */

/* Function Stack Size: 0x30 bytes */

ID __thiscall
_TtC11PasteCoreUI13ImageItemCell::initWithFrame_
          (_TtC11PasteCoreUI13ImageItemCell *this,ID param_1,SEL param_2,CGRect param_3)

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
    pcVar4 = "PasteCoreUI/ImageItemCell.swift";
    _swift_task_reportUnexpectedExecutor
              ("PasteCoreUI/ImageItemCell.swift",0x1f,1,0x10,UVar3.unknown,pMVar1);
  }
  FUN_1003cf9ac();
  _swift_release(pMVar2);
  return (ID)pcVar4;
}



/* Address: 0x1003cff8c | FUN_1003cff8c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1003cff8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ID param_5,double param_6,undefined8 param_7,undefined4 param_8)

{
  String *pSVar1;
  undefined8 *puVar2;
  char cVar3;
  Data DVar4;
  double dVar5;
  undefined1 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  code *pcVar9;
  byte bVar10;
  uint uVar11;
  long lVar12;
  double *pdVar13;
  undefined *puVar14;
  NSData *pNVar15;
  ID IVar16;
  NSString *pNVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  long extraout_x8;
  long unaff_x20;
  double *pdVar20;
  long lVar21;
  long lVar22;
  double dVar23;
  double dVar24;
  String SVar25;
  double local_d0;
  undefined *puStack_c8;
  double local_c0;
  undefined4 local_b4;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  
  puVar14 = &DAT_100fc3120;
  local_b4 = param_8;
  FUN_1000037f0(&DAT_100fc3120,&DAT_100c45360);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar14 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar22 = -extraout_x8;
  pdVar20 = (double *)((long)&local_d0 + lVar22);
  FUN_10031ebc8(pdVar20);
  lVar12 = 0;
  FUN_100317b10();
  pdVar13 = pdVar20;
  (**(code **)(*(long *)(lVar12 + -8) + 0x30))(pdVar20,1,lVar12);
  if ((int)pdVar13 == 1) {
    FUN_1003cd5f4(pdVar20);
  }
  else {
    pdVar13 = pdVar20;
    _swift_getEnumCaseMultiPayload(pdVar20,lVar12);
    lVar12 = _TtC11PasteCoreUI8ItemCell::isCompactContentFullsize;
    if ((int)pdVar13 == 2) {
      dVar24 = *pdVar20;
      dVar23 = *(double *)((long)&puStack_c8 + lVar22);
      local_c0 = dVar24;
      DVar4.unknown = *(undefined **)((long)&local_c0 + lVar22);
      dVar5 = *(double *)(&stack0xffffffffffffff48 + lVar22);
      _swift_beginAccess(unaff_x20 + _TtC11PasteCoreUI8ItemCell::isCompactContentFullsize,auStack_98
                         ,1,0);
      *(undefined1 *)(unaff_x20 + lVar12) = 1;
      puVar14 = &_OBJC_CLASS___NSImage;
      _objc_allocWithZone();
      FUN_1001037b4(DVar4.unknown,dVar5);
      pNVar15 = Foundation::Data::_bridgeToObjectiveC(DVar4);
      IVar16 = objc_stub::initWithData_((ID)puVar14,pNVar15);
      local_d0 = dVar5;
      puStack_c8 = DVar4.unknown;
      FUN_10003bf2c(DVar4.unknown,dVar5);
      FUN_1001f23b0(IVar16);
      lVar22 = *(long *)(unaff_x20 + _TtC11PasteCoreUI13ImageItemCell::sizeLabel);
      puVar14 = &DAT_100fc3300;
      FUN_1000037f0(&DAT_100fc3300,&DAT_100c45b18);
      _swift_allocObject();
      *(undefined8 *)(puVar14 + 0x18) = 4;
      *(undefined8 *)(puVar14 + 0x10) = 2;
      puVar8 = PTR___protocol_witness_table_for_Swift_Int___Swift_CVarArg_in_Swift_100eac760;
      puVar7 = PTR___type_metadata_for_Swift_Int_100eac6f8;
      if (0x7fefffffffffffff < (ulong)ABS(local_c0)) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1003d04d0);
        (*pcVar9)();
      }
      if (dVar24 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1003d04d4);
        (*pcVar9)();
      }
      if (9.223372036854776e+18 <= dVar24) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1003d04d8);
        (*pcVar9)();
      }
      *(undefined **)(puVar14 + 0x38) = PTR___type_metadata_for_Swift_Int_100eac6f8;
      *(undefined **)(puVar14 + 0x40) = puVar8;
      *(long *)(puVar14 + 0x20) = (long)dVar24;
      if (0x7fefffffffffffff < (ulong)ABS(dVar23)) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1003d04dc);
        (*pcVar9)();
      }
      if (dVar23 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1003d04e0);
        (*pcVar9)();
      }
      if (9.223372036854776e+18 <= dVar23) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1003d04e4);
        (*pcVar9)();
      }
      *(undefined **)(puVar14 + 0x60) = puVar7;
      *(undefined **)(puVar14 + 0x68) = puVar8;
      *(long *)(puVar14 + 0x48) = (long)dVar23;
      SVar25 = (extension_Foundation)::Swift::String::_init();
      pSVar1 = (String *)
               (lVar22 + _TtC11PasteCoreUIP33_40BD5117DF6A55B8A7CD12DC23A79F0A9SizeLabel::text);
      *pSVar1 = SVar25;
      _swift_bridgeObjectRelease(pSVar1->bridgeObject);
      lVar12 = _TtC11PasteCoreUIP33_40BD5117DF6A55B8A7CD12DC23A79F0A9SizeLabel::label;
      IVar16 = *(ID *)(lVar22 + _TtC11PasteCoreUIP33_40BD5117DF6A55B8A7CD12DC23A79F0A9SizeLabel::
                                label);
      local_c0 = param_6;
      _swift_bridgeObjectRetain(SVar25.bridgeObject);
      pNVar17 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(SVar25.bridgeObject);
      objc_stub::setText_(IVar16,pNVar17);
      lVar21 = *(long *)(unaff_x20 + _TtC11PasteCoreUI8ItemCell::shortcutView);
      puVar2 = (undefined8 *)(lVar21 + _TtCC11PasteCoreUI8ItemCell11OverlayView::background);
      uVar18 = *puVar2;
      *puVar2 = 6;
      uVar6 = *(undefined1 *)(puVar2 + 1);
      *(undefined1 *)(puVar2 + 1) = 0;
      FUN_1003cd63c(uVar18,uVar6);
      FUN_1003d5b84();
      puVar2 = (undefined8 *)(lVar22 + _TtCC11PasteCoreUI8ItemCell11OverlayView::background);
      puVar19 = (undefined8 *)*puVar2;
      *puVar2 = 6;
      uVar6 = *(undefined1 *)(puVar2 + 1);
      *(undefined1 *)(puVar2 + 1) = 0;
      FUN_1003cd63c(puVar19,uVar6);
      FUN_1003d5b84();
      FUN_1001fe19c();
      uVar18 = *puVar19;
      *(undefined8 *)
       (lVar22 + _TtC11PasteCoreUIP33_40BD5117DF6A55B8A7CD12DC23A79F0A9SizeLabel::textColor) =
           uVar18;
      objc_stub::setTextColor_(*(ID *)(lVar22 + lVar12),uVar18);
      param_2 = 0;
      param_1 = 0;
      if (((uint)param_5 & 0xff) != 3) {
        param_1 = 0x3ff0000000000000;
      }
      FUN_1000f7548(param_1,0);
      FUN_10003bf2c(puStack_c8,local_d0);
      lVar22 = _TtC11PasteCoreUI8ItemCell::preferredCompactHeaderStyle;
      lVar12 = *(long *)(unaff_x20 + _TtC11PasteCoreUI8ItemCell::headerView);
      _swift_beginAccess(unaff_x20 + _TtC11PasteCoreUI8ItemCell::preferredCompactHeaderStyle,
                         auStack_b0,0,0);
      cVar3 = '\0';
      if (*(char *)(unaff_x20 + lVar22) != '\x02') {
        cVar3 = *(char *)(unaff_x20 + lVar22);
      }
      *(char *)(lVar12 + _TtCC11PasteCoreUI8ItemCell10HeaderView::compactStyle) = cVar3;
      FUN_1003d41b4(param_4,param_5,local_c0);
      uVar11 = (uint)param_4;
      goto LAB_1003d03e0;
    }
    FUN_10009eff8(pdVar20);
  }
  lVar22 = _TtC11PasteCoreUI8ItemCell::preferredCompactHeaderStyle;
  lVar12 = *(long *)(unaff_x20 + _TtC11PasteCoreUI8ItemCell::headerView);
  _swift_beginAccess(unaff_x20 + _TtC11PasteCoreUI8ItemCell::preferredCompactHeaderStyle,auStack_98,
                     0,0);
  cVar3 = '\0';
  if (*(char *)(unaff_x20 + lVar22) != '\x02') {
    cVar3 = *(char *)(unaff_x20 + lVar22);
  }
  *(char *)(lVar12 + _TtCC11PasteCoreUI8ItemCell10HeaderView::compactStyle) = cVar3;
  FUN_1003d41b4(param_4,param_5,param_6);
  uVar11 = (uint)param_4;
  lVar21 = *(long *)(unaff_x20 + _TtC11PasteCoreUI8ItemCell::shortcutView);
LAB_1003d03e0:
  puVar2 = (undefined8 *)
           (lVar21 + _TtCC11PasteCoreUI8ItemCell21ShortcutIndicatorView::quickPasteIndex);
  *puVar2 = param_7;
  *(char *)(puVar2 + 1) = (char)local_b4;
  FUN_1003d6444();
  FUN_10031c38c();
  FUN_100208674(uVar11 & 1);
  FUN_1003d8588();
  FUN_1003d8230();
  objc_stub::setConstant_(param_5,param_1);
  IVar16 = 0;
  FUN_1003d83c4();
  objc_stub::setConstant_(IVar16,param_2);
  IVar16 = 0;
  FUN_1003d82fc();
  objc_stub::setConstant_(IVar16,param_3);
  bVar10 = 0;
  FUN_10031f040();
  *(byte *)(unaff_x20 + _TtC11PasteCoreUI8ItemCell::isEditable) = bVar10 & 1;
  return;
}



/* Address: 0x1003d04e4 | FUN_1003d04e4 */

void FUN_1003d04e4(double param_1,undefined8 param_2,undefined8 param_3)

{
  double dVar1;
  double dVar2;
  
  dVar1 = param_1;
  FUN_1000f7540();
  dVar2 = 0.0;
  if (((uint)param_3 & 0xff) != 3) {
    dVar2 = 1.0;
  }
  FUN_1000f7548(param_1 * dVar2 + (1.0 - param_1) * dVar1);
  FUN_1003d84a4(param_1,param_2,param_3);
  return;
}



/* Address: 0x1003d0568 | FUN_1003d0568 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1003d0568(void)

{
  return 0;
}



/* Address: 0x1003d05a4 | _TtC11PasteCoreUI13ImageItemCell::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11PasteCoreUI13ImageItemCell::_cxx_destruct(ID param_1,SEL param_2)

{
  return;
}



/* Address: 0x1003d05ec | FUN_1003d05ec */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

ID FUN_1003d05ec(void)

{
  undefined8 *puVar1;
  long lVar2;
  ID IVar3;
  NSString *pNVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined1 auStack_90 [16];
  ID local_80;
  
  puVar1 = (undefined8 *)
           (unaff_x20 + _TtC11PasteCoreUIP33_40BD5117DF6A55B8A7CD12DC23A79F0A9SizeLabel::text);
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar2 = _TtC11PasteCoreUIP33_40BD5117DF6A55B8A7CD12DC23A79F0A9SizeLabel::textColor;
  IVar3 = objc_stub::blackColor((ID)&_OBJC_CLASS___NSColor);
  *(ID *)(unaff_x20 + lVar2) = IVar3;
  lVar2 = _TtC11PasteCoreUIP33_40BD5117DF6A55B8A7CD12DC23A79F0A9SizeLabel::label;
  pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar3 = objc_stub::labelWithString_((ID)&_OBJC_CLASS___NSTextField,pNVar4);
  objc_stub::setTextAlignment_(IVar3,1);
  uVar5 = 0;
  FUN_10000ec2c(0,&DAT_100fc3e90,&PTR__OBJC_CLASS___NSFont_100f8d678);
  FUN_1001ff934();
  objc_stub::setFont_(IVar3,uVar5);
  *(ID *)(unaff_x20 + lVar2) = IVar3;
  FUN_1003d0b3c();
  IVar3 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffb0,"init");
  objc_stub::setCornerRadius_curve_
            (IVar3,0x4010000000000000,*(undefined8 *)PTR__kCACornerCurveCircular_100eaa398);
  puVar6 = &DAT_100fc3e80;
  FUN_1000037f0(&DAT_100fc3e80,&DAT_100c45d50);
  _swift_initStackObject();
  *(undefined8 *)(puVar6 + 0x18) = 3;
  *(undefined8 *)(puVar6 + 0x10) = 1;
  *(undefined8 *)(puVar6 + 0x20) =
       *(undefined8 *)
        (IVar3 + _TtC11PasteCoreUIP33_40BD5117DF6A55B8A7CD12DC23A79F0A9SizeLabel::label);
  local_80 = IVar3;
  FUN_1001fa150(puVar6,FUN_1003d0ba0,auStack_90);
  _swift_bridgeObjectRelease();
  _swift_setDeallocating(puVar6);
  _swift_arrayDestroy(puVar6 + 0x20,*(undefined8 *)(puVar6 + 0x10),
                      PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8);
  return IVar3;
}



/* Address: 0x1003d07a0 | FUN_1003d07a0 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_1003d07a0(ID param_1)

{
  ID IVar1;
  ID IVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ID *pIVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ID IVar9;
  ID local_78 [3];
  undefined8 local_60;
  undefined **ppuStack_58;
  
  IVar1 = objc_stub::heightAnchor(param_1);
  IVar9 = *(ID *)(param_1 + _TtC11PasteCoreUIP33_40BD5117DF6A55B8A7CD12DC23A79F0A9SizeLabel::label);
  IVar2 = objc_stub::heightAnchor(IVar9);
  IVar1 = objc_stub::constraintGreaterThanOrEqualToAnchor_(IVar1,IVar2);
  uVar3 = 0;
  FUN_1003d0b3c();
  ppuStack_58 = &PTR_PTR_100ec00e8;
  uVar4 = 0;
  local_78[0] = param_1;
  local_60 = uVar3;
  FUN_10000ec2c(0,&DAT_100fc31b0,&PTR__OBJC_CLASS___NSTextField_100f8d670);
  pIVar5 = local_78;
  FUN_1001f9b74(0x4010000000000000,pIVar5,uVar4,&PTR_PTR_100ec00e8);
  FUN_100004594(local_78);
  IVar2 = objc_stub::centerYAnchor(IVar9);
  IVar9 = objc_stub::centerYAnchor(param_1);
  IVar2 = objc_stub::constraintEqualToAnchor_(IVar2,IVar9);
  puVar6 = &DAT_100fc3b00;
  FUN_1000037f0(&DAT_100fc3b00,&DAT_100c45590);
  _swift_initStackObject();
  *(undefined8 *)(puVar6 + 0x18) = 6;
  *(undefined8 *)(puVar6 + 0x10) = 3;
  uVar3 = 0;
  FUN_10000ec2c(0,&DAT_100fc32d0,&PTR__OBJC_CLASS___NSLayoutConstraint_100f8d660);
  *(undefined8 *)(puVar6 + 0x38) = uVar3;
  *(undefined ***)(puVar6 + 0x40) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar6 + 0x20) = IVar1;
  puVar7 = &DAT_100fc3e70;
  FUN_1000037f0(&DAT_100fc3e70,&DAT_100c45d60);
  *(undefined **)(puVar6 + 0x60) = puVar7;
  *(undefined ***)(puVar6 + 0x68) = &PTR_PTR_100ec00b8;
  *(ID **)(puVar6 + 0x48) = pIVar5;
  *(undefined8 *)(puVar6 + 0x88) = uVar3;
  *(undefined ***)(puVar6 + 0x90) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar6 + 0x70) = IVar2;
  puVar8 = puVar6;
  FUN_1001f8d60(puVar6);
  _swift_setDeallocating(puVar6);
  uVar3 = *(undefined8 *)(puVar6 + 0x10);
  puVar7 = &DAT_100fc3b10;
  FUN_1000037f0(&DAT_100fc3b10,&DAT_100c455a0);
  _swift_arrayDestroy(puVar6 + 0x20,uVar3,puVar7);
  return puVar8;
}



/* Address: 0x1003d09c4 | _TtC11PasteCoreUIP33_40BD5117DF6A55B8A7CD12DC23A79F0A9SizeLabel::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC11PasteCoreUIP33_40BD5117DF6A55B8A7CD12DC23A79F0A9SizeLabel::init(ID param_1,SEL param_2)

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
    pcVar4 = "PasteCoreUI/ImageItemCell.swift";
    _swift_task_reportUnexpectedExecutor
              ("PasteCoreUI/ImageItemCell.swift",0x1f,1,0x51,UVar3.unknown,pMVar1);
  }
  FUN_1003d05ec();
  _swift_release(pMVar2);
  return (ID)pcVar4;
}



/* Address: 0x1003d0a5c | FUN_1003d0a5c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1003d0a5c(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease
            (*(undefined8 *)
              (unaff_x20 + _TtC11PasteCoreUIP33_40BD5117DF6A55B8A7CD12DC23A79F0A9SizeLabel::text + 8
              ));
  return 0;
}



/* Address: 0x1003d0a9c | FUN_1003d0a9c */

void FUN_1003d0a9c(void)

{
  FUN_1003d0b3c();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"dealloc");
  return;
}



/* Address: 0x1003d0ad0 | _TtC11PasteCoreUIP33_40BD5117DF6A55B8A7CD12DC23A79F0A9SizeLabel::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11PasteCoreUIP33_40BD5117DF6A55B8A7CD12DC23A79F0A9SizeLabel::_cxx_destruct
               (ID param_1,SEL param_2)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + text + 8));
  return;
}



/* Address: 0x1003d0b1c | FUN_1003d0b1c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1003d0b1c(void)

{
  return ZEXT816(0x100f99110);
}



/* Address: 0x1003d0b3c | FUN_1003d0b3c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1003d0b3c(void)

{
  return ZEXT816(0x100f993c8);
}



/* Address: 0x1003d0b5c | FUN_1003d0b5c */

void FUN_1003d0b5c(void)

{
  MainActor *pMVar1;
  undefined *puVar2;
  
  if (DAT_100fc31a8 != (undefined *)0x0) {
    return;
  }
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  puVar2 = PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18;
  _swift_getWitnessTable(PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18,pMVar1);
  DAT_100fc31a8 = puVar2;
  return;
}



/* Address: 0x1003d0ba0 | FUN_1003d0ba0 */

void FUN_1003d0ba0(void)

{
  long unaff_x20;
  
  FUN_1003d07a0(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1003d0ba8 | FUN_1003d0ba8 */

void FUN_1003d0ba8(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1003cfba0(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1003d0bb0 | FUN_1003d0bb0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003d0bb0(undefined8 param_1,byte param_2)

{
  Date DVar1;
  long lVar2;
  NSString *pNVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 *puVar9;
  long extraout_x8;
  ulong uVar10;
  long extraout_x12;
  long unaff_x20;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  ID self;
  long lVar15;
  
  DVar1 = Foundation::Date::typeMetadataAccessor();
  lVar13 = *(long *)(DVar1.unknown + -8);
  lVar14 = *(long *)(lVar13 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar9 = &stack0xffffffffffffff80 + -(lVar14 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  FUN_10030a6c4();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar15 = (long)puVar9 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar11 = lVar15 - extraout_x12;
  self = *(ID *)(unaff_x20 + _TtCCC11PasteCoreUI8ItemCell10HeaderView9DateLabel::textField);
  Foundation::Date::init();
  _swift_storeEnumTagMultiPayload(lVar11,lVar2,param_2 & 1);
  FUN_10030a38c(0);
  _swift_initStaticObject();
  lVar8 = lVar11;
  thunk_FUN_100309e0c(param_1,lVar11);
  FUN_10030a688(lVar11);
  pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(lVar8);
  objc_stub::setText_(self,pNVar3);
  _swift_storeEnumTagMultiPayload(lVar15,lVar2,2);
  lVar8 = lVar15;
  thunk_FUN_100309e0c(param_1,lVar15);
  FUN_10030a688(lVar15);
  pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(lVar8);
  objc_stub::setToolTip_(self,pNVar3);
  puVar4 = &DAT_100ecfbf8;
  _swift_allocObject(&DAT_100ecfbf8,0x18,7);
  _swift_unknownObjectWeakInit(puVar4 + 0x10,unaff_x20);
  (**(code **)(lVar13 + 0x10))(puVar9,param_1,DVar1.unknown);
  uVar10 = (ulong)*(byte *)(lVar13 + 0x50);
  uVar12 = uVar10 + 0x18 & (uVar10 ^ 0xffffffffffffffff);
  lVar14 = uVar12 + lVar14;
  puVar5 = &DAT_100ecfc20;
  _swift_allocObject(&DAT_100ecfc20,lVar14 + 1,uVar10 | 7);
  *(undefined **)(puVar5 + 0x10) = puVar4;
  (**(code **)(lVar13 + 0x20))(puVar5 + uVar12,puVar9,DVar1.unknown);
  puVar5[lVar14] = param_2;
  uVar6 = 0;
  FUN_100385b1c(0);
  _swift_allocObject();
  uVar7 = 0;
  FUN_100385984(0x403e000000000000,0,FUN_1003d1600,puVar5,uVar6);
  uVar6 = *(undefined8 *)
           (unaff_x20 + _TtCCC11PasteCoreUI8ItemCell10HeaderView9DateLabel::updateTimer);
  *(undefined8 *)(unaff_x20 + _TtCCC11PasteCoreUI8ItemCell10HeaderView9DateLabel::updateTimer) =
       uVar7;
  _swift_release(uVar6);
  return;
}



/* Address: 0x1003d0e44 | FUN_1003d0e44 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

ID FUN_1003d0e44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  NSString *pNVar2;
  ID IVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined1 auStack_b0 [16];
  ID local_a0;
  
  _swift_getObjectType();
  *(undefined1 *)(unaff_x20 + _TtCCC11PasteCoreUI8ItemCell10HeaderView9DateLabel::isCompact) = 0;
  Foundation::Date::init();
  lVar1 = _TtCCC11PasteCoreUI8ItemCell10HeaderView9DateLabel::textField;
  pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar3 = objc_stub::labelWithString_((ID)&_OBJC_CLASS___NSTextField,pNVar2);
  puVar4 = (undefined8 *)objc_stub::setAllowsDefaultTighteningForTruncation_(IVar3,1);
  FUN_1001fe25c();
  objc_stub::setTextColor_(IVar3,*puVar4);
  objc_stub::setTextAlignment_(IVar3,4);
  *(ID *)(unaff_x20 + lVar1) = IVar3;
  *(undefined8 *)(unaff_x20 + _TtCCC11PasteCoreUI8ItemCell10HeaderView9DateLabel::updateTimer) = 0;
  IVar3 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff90,"initWithFrame:",param_1,
                              param_2,param_3,param_4);
  puVar5 = &DAT_100fc3e80;
  FUN_1000037f0(&DAT_100fc3e80,&DAT_100c45d50);
  _swift_initStackObject();
  *(undefined8 *)(puVar5 + 0x18) = 3;
  *(undefined8 *)(puVar5 + 0x10) = 1;
  *(undefined8 *)(puVar5 + 0x20) =
       *(undefined8 *)(IVar3 + _TtCCC11PasteCoreUI8ItemCell10HeaderView9DateLabel::textField);
  local_a0 = IVar3;
  FUN_1001fa150(puVar5,FUN_1003d1520,auStack_b0);
  _swift_bridgeObjectRelease();
  _swift_setDeallocating(puVar5);
  _swift_arrayDestroy(puVar5 + 0x20,*(undefined8 *)(puVar5 + 0x10),
                      PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8);
  return IVar3;
}



/* Address: 0x1003d0ff8 | FUN_1003d0ff8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_1003d0ff8(undefined8 *param_1)

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
  FUN_1003d1528(0);
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



/* Address: 0x1003d1130 | _TtCCC11PasteCoreUI8ItemCell10HeaderView9DateLabel::initWithFrame: */

/* Function Stack Size: 0x30 bytes */

ID __thiscall
_TtCCC11PasteCoreUI8ItemCell10HeaderView9DateLabel::initWithFrame_
          (_TtCCC11PasteCoreUI8ItemCell10HeaderView9DateLabel *this,ID param_1,SEL param_2,
          CGRect param_3)

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
    pcVar4 = "PasteCoreUI/ItemCell.HeaderView.DateLabel.swift";
    _swift_task_reportUnexpectedExecutor
              ("PasteCoreUI/ItemCell.HeaderView.DateLabel.swift",0x2f,1,0x26,UVar3.unknown,pMVar1);
  }
  FUN_1003d0e44();
  _swift_release(pMVar2);
  return (ID)pcVar4;
}



/* Address: 0x1003d11f8 | _TtCCC11PasteCoreUI8ItemCell10HeaderView9DateLabel::initWithCoder: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtCCC11PasteCoreUI8ItemCell10HeaderView9DateLabel::initWithCoder_
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
              ("PasteCoreUI/ItemCell.HeaderView.DateLabel.swift",0x2f,1,0x2f,UVar3.unknown,pMVar1);
  }
  FUN_1003d142c();
  _swift_release(pMVar2);
  return param_3;
}



/* Address: 0x1003d12a4 | FUN_1003d12a4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1003d12a4(long param_1,undefined8 param_2,uint param_3)

{
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    FUN_1003d0bb0(param_2,param_3 & 1);
    return 0;
  }
  return 0;
}



/* Address: 0x1003d1300 | _TtCCC11PasteCoreUI8ItemCell10HeaderView9DateLabel::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtCCC11PasteCoreUI8ItemCell10HeaderView9DateLabel::_cxx_destruct(ID param_1,SEL param_2)

{
  long lVar1;
  Date DVar2;
  
  lVar1 = date;
  DVar2 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar2.unknown + -8) + 8))(param_1 + lVar1,DVar2.unknown);
  _swift_release(*(undefined8 *)(param_1 + updateTimer));
  return;
}



/* Address: 0x1003d135c | FUN_1003d135c */

void FUN_1003d135c(void)

{
  FUN_1003d1364(0);
  return;
}



/* Address: 0x1003d1364 | FUN_1003d1364 */

void FUN_1003d1364(undefined8 param_1)

{
  if (DAT_100fc33b8 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetClassDescriptor_100cae074);
  return;
}



/* Address: 0x1003d139c | FUN_1003d139c */

undefined1  [16] FUN_1003d139c(Date param_1,ulong param_2)

{
  Date DVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined *local_40;
  long local_38;
  undefined *puStack_30;
  undefined *local_28;
  
  local_40 = &DAT_100c45b58;
  DVar1 = Foundation::Date::typeMetadataAccessor();
  if (param_2 < 0x40) {
    local_38 = *(long *)(DVar1.unknown + -8) + 0x40;
    puStack_30 = PTR___value_witness_table_for_Builtin_UnknownObject_100eabd30 + 0x40;
    local_28 = &DAT_100c45b70;
    uVar2 = 0x100;
    _swift_updateClassMetadata2(param_1.unknown,0x100,4,&local_40,param_1.unknown + 0x50);
    if (param_1.unknown == (undefined *)0x0) {
      param_1.unknown = (undefined *)0x0;
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0x3f;
    param_1 = DVar1;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = param_1.unknown;
  return auVar3;
}



/* Address: 0x1003d142c | FUN_1003d142c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003d142c(void)

{
  long lVar1;
  code *pcVar2;
  NSString *pNVar3;
  ID self;
  undefined8 *puVar4;
  long unaff_x20;
  String SVar5;
  
  *(undefined1 *)(unaff_x20 + _TtCCC11PasteCoreUI8ItemCell10HeaderView9DateLabel::isCompact) = 0;
  Foundation::Date::init();
  lVar1 = _TtCCC11PasteCoreUI8ItemCell10HeaderView9DateLabel::textField;
  pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  self = objc_stub::labelWithString_((ID)&_OBJC_CLASS___NSTextField,pNVar3);
  puVar4 = (undefined8 *)objc_stub::setAllowsDefaultTighteningForTruncation_(self,1);
  FUN_1001fe25c();
  objc_stub::setTextColor_(self,*puVar4);
  objc_stub::setTextAlignment_(self,4);
  *(ID *)(unaff_x20 + lVar1) = self;
  *(undefined8 *)(unaff_x20 + _TtCCC11PasteCoreUI8ItemCell10HeaderView9DateLabel::updateTimer) = 0;
  SVar5.bridgeObject = (void *)0x2;
  SVar5.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar5,(StaticString)0xd000000000000025,0x8000000100d8dc00,
             0xda5210);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1003d1520);
  (*pcVar2)();
}



/* Address: 0x1003d1520 | FUN_1003d1520 */

void FUN_1003d1520(void)

{
  long unaff_x20;
  
  FUN_1003d0ff8(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1003d1528 | FUN_1003d1528 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_1003d1528(void)

{
  undefined *puVar1;
  
  if (DAT_100fc31b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &_OBJC_CLASS___NSTextField;
  _swift_getObjCClassMetadata();
  DAT_100fc31b0 = puVar1;
  return;
}



/* Address: 0x1003d156c | FUN_1003d156c */

void FUN_1003d156c(void)

{
  long unaff_x20;
  
  _swift_unknownObjectWeakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x1003d1590 | FUN_1003d1590 */

void FUN_1003d1590(void)

{
  Date DVar1;
  long unaff_x20;
  long lVar2;
  ulong uVar3;
  
  DVar1 = Foundation::Date::typeMetadataAccessor();
  lVar2 = *(long *)(DVar1.unknown + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  (**(code **)(lVar2 + 8))(unaff_x20 + (uVar3 + 0x18 & (uVar3 ^ 0xffffffffffffffff)),DVar1.unknown);
  _swift_deallocObject();
  return;
}



/* Address: 0x1003d1600 | FUN_1003d1600 */

void FUN_1003d1600(void)

{
  long lVar1;
  Date DVar2;
  ulong uVar3;
  long unaff_x20;
  
  DVar2 = Foundation::Date::typeMetadataAccessor();
  uVar3 = (ulong)*(byte *)(*(long *)(DVar2.unknown + -8) + 0x50);
  lVar1 = unaff_x20 + (uVar3 + 0x18 & (uVar3 ^ 0xffffffffffffffff));
  FUN_1003d12a4(*(undefined8 *)(unaff_x20 + 0x10),lVar1,
                *(undefined1 *)(lVar1 + *(long *)(*(long *)(DVar2.unknown + -8) + 0x40)));
  return;
}



/* Address: 0x1003d1638 | FUN_1003d1638 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

double FUN_1003d1638(double *param_1,double param_2,double *param_3)

{
  undefined1 uVar1;
  double *unaff_x20;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  dVar3 = 1.0 - param_2;
  uVar1 = *(undefined1 *)(param_3 + 8);
  dVar2 = *param_3;
  dVar5 = param_3[3];
  dVar4 = param_3[2];
  dVar6 = *unaff_x20;
  dVar10 = unaff_x20[3];
  dVar8 = unaff_x20[2];
  dVar7 = param_3[0xb];
  dVar9 = param_3[0xe];
  param_1[1] = unaff_x20[1] * dVar3 + param_3[1] * param_2;
  *param_1 = dVar6 * dVar3 + dVar2 * param_2;
  param_1[3] = dVar10 * dVar3 + dVar5 * param_2;
  param_1[2] = dVar8 * dVar3 + dVar4 * param_2;
  dVar2 = param_3[4];
  dVar6 = param_3[7];
  dVar5 = param_3[6];
  dVar4 = unaff_x20[4];
  param_1[5] = unaff_x20[5] * dVar3 + param_3[5] * param_2;
  param_1[4] = dVar4 * dVar3 + dVar2 * param_2;
  param_1[7] = dVar6;
  param_1[6] = dVar5;
  *(undefined1 *)(param_1 + 8) = uVar1;
  dVar3 = param_3[10];
  dVar2 = param_3[9];
  param_1[10] = param_3[10];
  param_1[9] = dVar2;
  param_1[0xb] = dVar7;
  dVar2 = param_3[0xc];
  param_1[0xd] = param_3[0xd];
  param_1[0xc] = dVar2;
  param_1[0xe] = dVar9;
  return dVar3;
}



/* Address: 0x1003d16f0 | FUN_1003d16f0 */

void FUN_1003d16f0(undefined8 *param_1)

{
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  FUN_1003d1638(&local_98);
  param_1[9] = uStack_50;
  param_1[8] = local_58;
  param_1[0xb] = uStack_40;
  param_1[10] = local_48;
  param_1[0xd] = uStack_30;
  param_1[0xc] = local_38;
  param_1[0xe] = local_28;
  param_1[1] = uStack_90;
  *param_1 = local_98;
  param_1[3] = uStack_80;
  param_1[2] = local_88;
  param_1[5] = uStack_70;
  param_1[4] = local_78;
  param_1[7] = uStack_60;
  param_1[6] = local_68;
  return;
}



/* Address: 0x1003d1750 | FUN_1003d1750 */

bool FUN_1003d1750(long *param_1,long *param_2)

{
  if (*param_1 == *param_2) {
    return (double)param_1[2] == (double)param_2[2] && param_1[1] == param_2[1];
  }
  return false;
}



/* Address: 0x1003d1788 | FUN_1003d1788 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1003d1788(double param_1,long param_2,ID param_3,ulong param_4)

{
  undefined8 uVar1;
  long lVar2;
  ID IVar3;
  ID IVar4;
  ID unaff_x20;
  double extraout_d0;
  undefined1 auStack_80 [16];
  
  if ((param_4 & 1) == 0) {
    lVar2 = param_2;
    FUN_1000f6684();
    IVar3 = objc_stub::alignment(unaff_x20);
    IVar4 = objc_stub::spacing(unaff_x20);
    if (((lVar2 != param_2) || (IVar3 != param_3)) || (extraout_d0 != param_1)) {
      objc_stub::setSpacing_(unaff_x20,param_1);
      objc_stub::setAlignment_(unaff_x20,param_3);
      FUN_1000f668c(param_2);
      IVar4 = objc_stub::layoutIfNeeded(unaff_x20);
      return IVar4;
    }
  }
  else {
    FUN_10000ec2c(0,&DAT_100fc3e40,&PTR__OBJC_CLASS___NSView_100f8d628);
    uVar1 = 0;
    FUN_10000ec2c(0,&DAT_100fc33e0,&PTR__OBJC_CLASS___CAMediaTimingFunction_100f8d668);
    FUN_10021ccd4();
    FUN_10021cadc(0x3fd3333333333333,0,uVar1,1,FUN_1003d1978,auStack_80,0,0);
    IVar4 = 0;
  }
  return IVar4;
}



/* Address: 0x1003d18c8 | FUN_1003d18c8 */

void FUN_1003d18c8(double param_1,ID param_2,ID param_3,ID param_4)

{
  ID IVar1;
  ID IVar2;
  double extraout_d0;
  
  IVar1 = param_2;
  FUN_1000f6684();
  IVar2 = objc_stub::alignment(param_2);
  objc_stub::spacing(param_2);
  if (((IVar1 == param_3) && (IVar2 == param_4)) && (extraout_d0 == param_1)) {
    return;
  }
  objc_stub::setSpacing_(param_2,param_1);
  objc_stub::setAlignment_(param_2,param_4);
  FUN_1000f668c(param_3);
  objc_stub::layoutIfNeeded(param_2);
  return;
}



/* Address: 0x1003d1978 | FUN_1003d1978 */

void FUN_1003d1978(void)

{
  long unaff_x20;
  
  FUN_1003d18c8(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1003d1988 | FUN_1003d1988 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1003d1988(void)

{
  return 0;
}



/* Address: 0x1003d19c0 | FUN_1003d19c0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 * FUN_1003d19c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar1 = param_2[4];
  uVar3 = param_2[7];
  uVar2 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar1;
  param_1[7] = uVar3;
  param_1[6] = uVar2;
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  uVar1 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar1;
  param_1[0xb] = param_2[0xb];
  uVar2 = param_2[0xd];
  uVar1 = param_2[0xc];
  param_1[0xe] = param_2[0xe];
  param_1[0xd] = uVar2;
  param_1[0xc] = uVar1;
  return param_1;
}



/* Address: 0x1003d1a54 | FUN_1003d1a54 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 * FUN_1003d1a54(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  return param_1;
}



/* Address: 0x1003d1b38 | FUN_1003d1b38 */

void FUN_1003d1b38(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar5 = param_2[4];
  uVar7 = param_2[7];
  uVar6 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar5;
  param_1[7] = uVar7;
  param_1[6] = uVar6;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  uVar2 = param_2[9];
  uVar1 = param_2[8];
  uVar4 = param_2[0xb];
  uVar3 = param_2[10];
  uVar6 = param_2[0xd];
  uVar5 = param_2[0xc];
  param_1[0xe] = param_2[0xe];
  param_1[0xb] = uVar4;
  param_1[10] = uVar3;
  param_1[0xd] = uVar6;
  param_1[0xc] = uVar5;
  param_1[9] = uVar2;
  param_1[8] = uVar1;
  return;
}



/* Address: 0x1003d1b64 | FUN_1003d1b64 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 * FUN_1003d1b64(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar1 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar1;
  uVar1 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar1;
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  uVar1 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar1;
  param_1[0xb] = param_2[0xb];
  uVar1 = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar1;
  param_1[0xe] = param_2[0xe];
  return param_1;
}



/* Address: 0x1003d1be8 | FUN_1003d1be8 */

int FUN_1003d1be8(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x1e] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 0xc);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x1003d1c30 | FUN_1003d1c30 */

void FUN_1003d1c30(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    param_1[0xe] = 0;
    param_1[0xd] = 0;
    param_1[0xc] = 0;
    param_1[0xb] = 0;
    param_1[10] = 0;
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 0xf) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 0xf) = 0;
    }
    if (param_2 != 0) {
      param_1[6] = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x1003d1c8c | FUN_1003d1c8c */

undefined1  [16] FUN_1003d1c8c(void)

{
  return ZEXT816(0x100ecfcb8);
}



/* Address: 0x1003d1c9c | FUN_1003d1c9c */

void FUN_1003d1c9c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x1003d1cb0 | FUN_1003d1cb0 */

undefined1  [16] FUN_1003d1cb0(void)

{
  return ZEXT816(0x100ecfd68);
}



/* Address: 0x1003d1cc0 | FUN_1003d1cc0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1003d1cc0(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ID self;
  undefined *puVar5;
  long unaff_x20;
  undefined1 auStack_68 [24];
  
  lVar4 = _TtCCC11PasteCoreUI8ItemCell10HeaderView10TitleLabel::___lazy_storage___textField;
  self = *(ID *)(unaff_x20 +
                _TtCCC11PasteCoreUI8ItemCell10HeaderView10TitleLabel::___lazy_storage___textField);
  if (self == 0) {
    FUN_10023c8b4();
    _objc_allocWithZone();
    self = objc_stub::init(self);
    puVar5 = &DAT_100ecfdb8;
    _swift_allocObject(&DAT_100ecfdb8,0x18,7);
    _swift_unknownObjectWeakInit(puVar5 + 0x10);
    puVar1 = (undefined8 *)(self + _TtC7PasteUI9TextField::onDidEndEditing);
    _swift_beginAccess(puVar1,auStack_68,1,0);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    *puVar1 = FUN_1003d309c;
    puVar1[1] = puVar5;
    _swift_retain(puVar5);
    FUN_100004550(uVar2,uVar3);
    _swift_release(puVar5);
    *(ID *)(unaff_x20 + lVar4) = self;
  }
  return self;
}



/* Address: 0x1003d1dbc | FUN_1003d1dbc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1003d1dbc(void)

{
  DispatchWorkItemFlags DVar1;
  OS_dispatch_queue *pOVar2;
  undefined *puVar3;
  void *aBlock;
  DispatchQoS DVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 uVar8;
  long unaff_x20;
  code *pcVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_b0 [8];
  undefined *local_a8;
  long local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  DVar1 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  puVar6 = PTR_typeMetadataAccessor_100eae670;
  local_a0 = *(long *)(DVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_a0 + 0x40));
  puVar10 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_a8 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar12 = *(long *)(local_a8 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar12 + 0x40));
  FUN_1003d1cc0();
  FUN_10023b414(0);
  pOVar2 = (OS_dispatch_queue *)0x0;
  FUN_1003d2f80();
  (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar2);
  puVar3 = &DAT_100ecfdb8;
  _swift_allocObject(&DAT_100ecfdb8,0x18,7);
  _swift_unknownObjectWeakInit(puVar3 + 0x10);
  local_70 = FUN_1003d3080;
  local_90 = PTR___NSConcreteStackBlock_100ea82a0;
  local_88 = 0x42000000;
  local_80 = FUN_100030410;
  puStack_78 = &DAT_100ecfe20;
  local_68 = puVar3;
  aBlock = __Block_copy(&local_90);
  DVar4.unknown = puVar3;
  _swift_retain();
  Dispatch::DispatchQoS::get_unspecified(DVar4);
  local_98 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar5 = &DAT_100fc3440;
  FUN_100003a00(&DAT_100fc3440,puVar6,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_100eae680);
  puVar6 = &DAT_100fc3448;
  FUN_1000037f0(&DAT_100fc3448,&DAT_100c45c00);
  puVar7 = puVar6;
  FUN_1003d3020();
  Swift::SetAlgebra::_init(puVar10,&local_98,puVar6,puVar7,DVar1.unknown,puVar5);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async
            ((DispatchQoS)0x0,
             (DispatchWorkItemFlags)(puVar10 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0)));
  __Block_release(aBlock);
  (**(code **)(local_a0 + 8))(puVar10,DVar1.unknown);
  (**(code **)(lVar12 + 8))(puVar10 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0),local_a8);
  puVar5 = local_68;
  _swift_release(puVar3);
  _swift_release(puVar5);
  pcVar9 = *(code **)(unaff_x20 +
                     _TtCCC11PasteCoreUI8ItemCell10HeaderView10TitleLabel::onCommitEditing);
  if (pcVar9 != (code *)0x0) {
    lVar11 = ((undefined8 *)
             (unaff_x20 + _TtCCC11PasteCoreUI8ItemCell10HeaderView10TitleLabel::onCommitEditing))[1]
    ;
    uVar8 = *(undefined8 *)
             (unaff_x20 +
             _TtCCC11PasteCoreUI8ItemCell10HeaderView10TitleLabel::___lazy_storage___textField);
    lVar12 = lVar11;
    FUN_100011128(pcVar9);
    FUN_10023b1a4(uVar8);
    if (lVar12 == 0) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x1003d2064);
      (*pcVar9)();
    }
    (*pcVar9)(uVar8,lVar12);
    _swift_bridgeObjectRelease(lVar12);
    FUN_100004550(pcVar9,lVar11);
  }
  return;
}



/* Address: 0x1003d2064 | FUN_1003d2064 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1003d2064(long param_1)

{
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    FUN_1003d1dbc();
    return 0;
  }
  return 0;
}



/* Address: 0x1003d20a0 | FUN_1003d20a0 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1003d20a0(void)

{
  undefined8 *puVar1;
  ID IVar2;
  ID IVar3;
  long unaff_x20;
  
  _swift_getObjectType();
  *(undefined1 *)(unaff_x20 + _TtCCC11PasteCoreUI8ItemCell10HeaderView10TitleLabel::isEditable) = 0;
  puVar1 = (undefined8 *)
           (unaff_x20 + _TtCCC11PasteCoreUI8ItemCell10HeaderView10TitleLabel::onCommitEditing);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)
   (unaff_x20 + _TtCCC11PasteCoreUI8ItemCell10HeaderView10TitleLabel::___lazy_storage___textField) =
       0;
  puVar1 = (undefined8 *)
           (unaff_x20 + _TtCCC11PasteCoreUI8ItemCell10HeaderView10TitleLabel::originalText);
  *puVar1 = 0;
  puVar1[1] = 0;
  IVar2 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffc0,"initWithFrame:",0,0,0,0);
  IVar3 = IVar2;
  FUN_1003d1cc0();
  FUN_1001fa09c();
  _swift_bridgeObjectRelease(IVar3);
  return IVar2;
}


