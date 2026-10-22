/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1003e766c | FUN_1003e766c */

void FUN_1003e766c(void)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  ID IVar5;
  undefined *puVar6;
  long unaff_x20;
  String SVar7;
  
  lVar2 = _TtC11PasteCoreUI20ImageItemContentView::footer;
  uVar4 = 0;
  FUN_1003df434();
  _objc_allocWithZone();
  FUN_1003df4b8();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar4;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC11PasteCoreUI20ImageItemContentView::onCanCommitEditing);
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar2 = _TtC11PasteCoreUI20ImageItemContentView::checkerboardView;
  IVar5 = 0;
  FUN_1001fe13c();
  _objc_allocWithZone();
  IVar5 = objc_stub::init(IVar5);
  *(ID *)(unaff_x20 + lVar2) = IVar5;
  *(undefined8 *)
   (unaff_x20 + _TtC11PasteCoreUI20ImageItemContentView::___lazy_storage___zoomableImageView) = 0;
  *(undefined8 *)
   (unaff_x20 + _TtC11PasteCoreUI20ImageItemContentView::___lazy_storage___editToolbar) = 1;
  lVar2 = _TtC11PasteCoreUI20ImageItemContentView::editingConfiguration;
  puVar6 = &DAT_100fc3c80;
  FUN_1000037f0(&DAT_100fc3c80,&DAT_100c461f0);
  _swift_initStaticObject();
  FUN_1003cdc40();
  *(undefined **)(unaff_x20 + lVar2) = puVar6;
  *(undefined8 *)(unaff_x20 + _TtC11PasteCoreUI20ImageItemContentView::pendingCommitTask) = 0;
  SVar7.bridgeObject = (void *)0x2;
  SVar7.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar7,(StaticString)0xd000000000000025,0x8000000100d8dc00,
             0xda56e0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1003e7774);
  (*pcVar3)();
}



/* Address: 0x1003e7774 | FUN_1003e7774 */

void FUN_1003e7774(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x1003e77a0 | FUN_1003e77a0 */

void FUN_1003e77a0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100008284;
  FUN_1003e5ef4(plVar3,param_1,uVar1,uVar2,uVar4);
  return;
}



/* Address: 0x1003e780c | FUN_1003e780c */

void FUN_1003e780c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x1003e7830 | FUN_1003e7830 */

void FUN_1003e7830(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1003e65c0(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1003e7838 | FUN_1003e7838 */

undefined8 FUN_1003e7838(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fc3610;
  FUN_1000037f0(&DAT_100fc3610,&DAT_100c45d70);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1003e7888 | FUN_1003e7888 */

undefined8 FUN_1003e7888(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fc3610;
  FUN_1000037f0(&DAT_100fc3610,&DAT_100c45d70);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x1003e78d0 | FUN_1003e78d0 */

void FUN_1003e78d0(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x1003e78f4 | FUN_1003e78f4 */

void FUN_1003e78f4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_100008284;
  FUN_10007493c(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Address: 0x1003e7964 | FUN_1003e7964 */

void FUN_1003e7964(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100008284;
  FUN_10007493c(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Address: 0x1003e79d4 | FUN_1003e79d4 */

void FUN_1003e79d4(void)

{
  long unaff_x20;
  
  FUN_1003e57b8(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1003e79dc | thunk_FUN_1003e78d0 */

void thunk_FUN_1003e78d0(void)

{
  FUN_1003e78d0();
  return;
}



/* Address: 0x1003e79e0 | FUN_1003e79e0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1003e79e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  LocalizedStringResource LVar2;
  ID IVar3;
  undefined *puVar4;
  ID IVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  URL UVar9;
  undefined8 extraout_x1;
  undefined8 uVar10;
  long extraout_x8;
  String SVar11;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [8];
  undefined8 auStack_e0 [2];
  undefined1 auStack_d0 [16];
  undefined *local_c0;
  ID IStack_b8;
  undefined1 auStack_a8 [40];
  
  _swift_getObjectType();
  LVar2 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar2.unknown + -8) + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  IVar3 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff80,"initWithFrame:",0,0,0,0);
  puVar4 = &_OBJC_CLASS___NSTextField;
  _objc_allocWithZone();
  IVar5 = objc_stub::init((ID)puVar4);
  FUN_1003e7d00(IVar5,param_1);
  objc_stub::sharedWorkspace((ID)&_OBJC_CLASS___NSWorkspace);
  uVar6 = param_1;
  uVar10 = extraout_x1;
  FUN_1003e7ddc(param_1);
  thunk_FUN_1001e6b98(auStack_d0 + lVar1,uVar6,uVar10);
  _swift_bridgeObjectRelease(uVar10);
  SVar11 = (extension_Foundation)::Swift::String::init
                     ((LocalizedStringResource)(auStack_d0 + lVar1));
  FUN_100240298(0);
  _objc_allocWithZone();
  _swift_retain(param_3);
  *(undefined8 *)((long)auStack_e0 + lVar1) = param_2;
  *(undefined8 *)((long)auStack_e0 + lVar1 + 8) = param_3;
  auStack_e8[lVar1] = 0;
  *(undefined8 *)((long)&uStack_f0 + lVar1) = 0;
  uVar6 = 0;
  FUN_10023e034(0,0,SVar11.str,SVar11.bridgeObject,0,0,1,0);
  FUN_10000ec2c(0,&DAT_100fc3500,&PTR__OBJC_CLASS___NSStackView_100f8d698);
  puVar4 = &DAT_100fc3e80;
  FUN_1000037f0(&DAT_100fc3e80,&DAT_100c45d50);
  puVar7 = puVar4;
  _swift_allocObject();
  *(undefined8 *)(puVar7 + 0x18) = 7;
  *(undefined8 *)(puVar7 + 0x10) = 3;
  *(ID *)(puVar7 + 0x20) = IVar5;
  puVar8 = &_OBJC_CLASS___NSView;
  _objc_allocWithZone();
  IVar5 = objc_stub::init((ID)puVar8);
  objc_stub::setContentHuggingPriority_forOrientation_(IVar5,0x437a0000,0);
  objc_stub::setContentCompressionResistancePriority_forOrientation_(IVar5,0x437a0000,0);
  *(ID *)(puVar7 + 0x28) = IVar5;
  *(undefined8 *)(puVar7 + 0x30) = uVar6;
  FUN_1000f66dc();
  _swift_initStackObject(puVar4,auStack_a8);
  *(undefined8 *)(puVar4 + 0x18) = 3;
  *(undefined8 *)(puVar4 + 0x10) = 1;
  *(undefined **)(puVar4 + 0x20) = puVar7;
  puVar8 = puVar4;
  local_c0 = puVar7;
  IStack_b8 = IVar3;
  FUN_1001fa150(puVar4,FUN_1003e82dc,auStack_d0);
  _swift_bridgeObjectRelease(puVar8);
  _swift_release(param_3);
  _swift_setDeallocating(puVar4);
  _swift_arrayDestroy(puVar4 + 0x20,*(undefined8 *)(puVar4 + 0x10),
                      PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8);
  UVar9 = Foundation::URL::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar9.unknown + -8) + 8))(param_1,UVar9.unknown);
  return IVar3;
}



/* Address: 0x1003e7d00 | FUN_1003e7d00 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003e7d00(URL param_1)

{
  NSString *pNVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  String SVar4;
  
  SVar4 = Foundation::URL::get_absoluteString(param_1);
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(SVar4.bridgeObject);
  objc_stub::setText_((ID)param_1.unknown,pNVar1);
  puVar2 = (undefined8 *)0x0;
  FUN_1001fe19c();
  objc_stub::setTextColor_((ID)param_1.unknown,*puVar2);
  uVar3 = 0;
  FUN_10000ec2c(0,&DAT_100fc3e90,&PTR__OBJC_CLASS___NSFont_100f8d678);
  FUN_1001ff928();
  objc_stub::setFont_((ID)param_1.unknown,uVar3);
  objc_stub::setEditable_((ID)param_1.unknown,0);
  objc_stub::setSelectable_((ID)param_1.unknown,0);
  objc_stub::setBordered_((ID)param_1.unknown,0);
  objc_stub::setDrawsBackground_((ID)param_1.unknown,0);
  objc_stub::setContentCompressionResistancePriority_forOrientation_
            ((ID)param_1.unknown,0x437a0000,0);
  return;
}



/* Address: 0x1003e7ddc | FUN_1003e7ddc */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

String FUN_1003e7ddc(void)

{
  LocalizedStringResource LVar1;
  URL UVar2;
  NSURL *pNVar3;
  URL UVar4;
  ID IVar5;
  NSString *pNVar6;
  char **ppcVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  ID unaff_x20;
  long lVar8;
  long lVar9;
  long lVar10;
  String SVar11;
  char *local_90;
  void *pvStack_88;
  undefined8 uStack_80;
  long lStack_78;
  char *local_70;
  void *pvStack_68;
  undefined8 uStack_60;
  long local_58;
  
  LVar1 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar1.unknown + -8) + 0x40));
  LVar1.unknown = (undefined *)((long)&local_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar10 = *(long *)(UVar2.unknown + -8);
  UVar4 = UVar2;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar10 + 0x40));
  lVar9 = (long)LVar1.unknown - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar8 = lVar9 - extraout_x12;
  pNVar3 = Foundation::URL::_bridgeToObjectiveC(UVar4);
  UVar4.unknown = (undefined *)objc_stub::FUN_100bfcfa0(unaff_x20,pNVar3);
  if (UVar4.unknown != (undefined *)0x0) {
    Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar4);
    (**(code **)(lVar10 + 0x20))(lVar8,lVar9,UVar2.unknown);
    UVar4.unknown = &_OBJC_CLASS___NSBundle;
    _objc_allocWithZone();
    pNVar3 = Foundation::URL::_bridgeToObjectiveC(UVar4);
    IVar5 = objc_stub::initWithURL_((ID)UVar4.unknown,pNVar3);
    if (IVar5 == 0) {
      (**(code **)(lVar10 + 8))(lVar8,UVar2.unknown);
      pvStack_68 = (void *)0x0;
      local_70 = (char *)0x0;
      local_58 = 0;
      uStack_60 = 0;
    }
    else {
      pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      IVar5 = objc_stub::objectForInfoDictionaryKey_(IVar5,pNVar6);
      if (IVar5 == 0) {
        (**(code **)(lVar10 + 8))(lVar8,UVar2.unknown);
        pvStack_88 = (void *)0x0;
        local_90 = (char *)0x0;
        lStack_78 = 0;
        uStack_80 = 0;
      }
      else {
        Swift::__bridgeAnyObjectToAny();
        _swift_unknownObjectRelease(IVar5);
        (**(code **)(lVar10 + 8))(lVar8,UVar2.unknown);
      }
      pvStack_68 = pvStack_88;
      local_70 = local_90;
      local_58 = lStack_78;
      uStack_60 = uStack_80;
      if (lStack_78 != 0) {
        ppcVar7 = &local_90;
        _swift_dynamicCast(ppcVar7,&local_70,PTR___type_metadata_for_Any_100eae0c0 + 8,
                           PTR___type_metadata_for_Swift_String_100eac208,6);
        if ((int)ppcVar7 != 0) {
          SVar11.bridgeObject = pvStack_88;
          SVar11.str = local_90;
          return SVar11;
        }
        goto LAB_1003e8008;
      }
    }
    FUN_1003d2f38(&local_70);
  }
LAB_1003e8008:
  FUN_1001c4388(LVar1.unknown);
  SVar11 = (extension_Foundation)::Swift::String::init(LVar1);
  return SVar11;
}



/* Address: 0x1003e8034 | FUN_1003e8034 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_1003e8034(undefined8 param_1,undefined8 *param_2)

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
  undefined8 *local_80 [3];
  undefined8 *local_68;
  undefined **ppuStack_60;
  undefined8 local_58;
  
  puVar1 = param_2;
  _swift_getObjectType();
  ppuStack_60 = &PTR_PTR_100ec00e8;
  local_80[0] = param_2;
  local_68 = puVar1;
  local_58 = param_1;
  FUN_1001f9774();
  uVar7 = *param_2;
  uVar8 = param_2[1];
  uVar9 = param_2[2];
  uVar10 = param_2[3];
  uVar2 = 0;
  FUN_10000ec2c(0,&DAT_100fc3500,&PTR__OBJC_CLASS___NSStackView_100f8d698);
  ppuVar3 = local_80;
  FUN_1001f97b4(uVar7,uVar8,uVar9,uVar10,ppuVar3,uVar2,&PTR_PTR_100ec00e8);
  FUN_100004594(local_80);
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



/* Address: 0x1003e8180 | _TtCC11PasteCoreUI19LinkItemContentView17FooterContentView::initWithCoder: */

/* Function Stack Size: 0x18 bytes */

ID _TtCC11PasteCoreUI19LinkItemContentView17FooterContentView::initWithCoder_
             (ID param_1,SEL param_2,ID param_3)

{
  code *pcVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  String SVar5;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  FUN_1003d0b5c();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteCoreUI/LinkItemContentView.Footer.swift",0x2c,1,0x45,UVar3.unknown,pMVar2);
  }
  SVar5.bridgeObject = (void *)0x2;
  SVar5.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar5,(StaticString)0xd000000000000025,0x8000000100d8dc00,
             0xda5740);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003e8234);
  (*pcVar1)();
}



/* Address: 0x1003e8234 | _TtCC11PasteCoreUI19LinkItemContentView17FooterContentView::initWithFrame: */

/* Function Stack Size: 0x30 bytes */

ID _TtCC11PasteCoreUI19LinkItemContentView17FooterContentView::initWithFrame_
             (ID param_1,SEL param_2,CGRect param_3)

{
  code *pcVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  FUN_1003d0b5c();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteCoreUI/LinkItemContentView.Footer.swift",0x2c,1,0xb,UVar3.unknown,pMVar2);
  }
  __swift_stdlib_reportUnimplementedInitializer
            ("PasteCoreUI.FooterContentView",0x1d,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003e82bc);
  (*pcVar1)();
}



/* Address: 0x1003e82bc | FUN_1003e82bc */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1003e82bc(void)

{
  return ZEXT816(0x100f9b0e0);
}



/* Address: 0x1003e82dc | FUN_1003e82dc */

void FUN_1003e82dc(void)

{
  long unaff_x20;
  
  FUN_1003e8034(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1003e82e4 | FUN_1003e82e4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1003e82e4(void)

{
  long lVar1;
  ID self;
  long unaff_x20;
  
  lVar1 = _TtC11PasteCoreUI19LinkItemContentView::___lazy_storage___webView;
  self = *(ID *)(unaff_x20 + _TtC11PasteCoreUI19LinkItemContentView::___lazy_storage___webView);
  if (self == 0) {
    FUN_1003ea304();
    _swift_getObjCClassFromMetadata();
    _objc_allocWithZone();
    self = objc_stub::init(self);
    objc_stub::FUN_100c0cca0(self);
    objc_stub::FUN_100c0a580(self,0);
    *(ID *)(unaff_x20 + lVar1) = self;
  }
  return self;
}



/* Address: 0x1003e836c | FUN_1003e836c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1003e836c(void)

{
  long lVar1;
  ID IVar2;
  undefined *self;
  long unaff_x20;
  
  lVar1 = _TtC11PasteCoreUI19LinkItemContentView::___lazy_storage___textView;
  IVar2 = *(ID *)(unaff_x20 + _TtC11PasteCoreUI19LinkItemContentView::___lazy_storage___textView);
  if (IVar2 == 0) {
    self = &_OBJC_CLASS___NSTextView;
    _objc_allocWithZone();
    IVar2 = objc_stub::init((ID)self);
    FUN_1003e83e8();
    *(ID *)(unaff_x20 + lVar1) = IVar2;
  }
  return IVar2;
}



/* Address: 0x1003e83e8 | FUN_1003e83e8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003e83e8(ID param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  objc_stub::setSelectable_(param_1,1);
  objc_stub::setEditable_(param_1,1);
  uVar1 = 0;
  FUN_10000ec2c(0,&DAT_100fc3e90,&PTR__OBJC_CLASS___NSFont_100f8d678);
  FUN_1001ff928();
  objc_stub::setFont_(param_1,uVar1);
  puVar2 = (undefined8 *)0x0;
  FUN_1001fe15c();
  objc_stub::setTextColor_(param_1,*puVar2);
  objc_stub::setDelegate_(param_1,param_2);
  objc_stub::setTextContainerInset_(param_1,0x4028000000000000,0x4028000000000000);
  objc_stub::setAutoresizingMask_(param_1,2);
  return;
}



/* Address: 0x1003e8490 | FUN_1003e8490 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1003e8490(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ID IVar6;
  undefined *puVar7;
  long unaff_x20;
  undefined1 auStack_68 [24];
  
  _swift_getObjectType();
  *(undefined8 *)(unaff_x20 + _TtC11PasteCoreUI19LinkItemContentView::editToolbar) = 0;
  lVar3 = _TtC11PasteCoreUI19LinkItemContentView::footer;
  uVar4 = 0;
  FUN_1003df434();
  _objc_allocWithZone();
  FUN_1003df4b8();
  *(undefined8 *)(unaff_x20 + lVar3) = uVar4;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC11PasteCoreUI19LinkItemContentView::onCanCommitEditing);
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar3 = _TtC11PasteCoreUI19LinkItemContentView::loaderView;
  puVar5 = &_OBJC_CLASS___NSProgressIndicator;
  _objc_allocWithZone();
  IVar6 = objc_stub::init((ID)puVar5);
  objc_stub::setStyle_(IVar6,1);
  *(ID *)(unaff_x20 + lVar3) = IVar6;
  *(undefined8 *)(unaff_x20 + _TtC11PasteCoreUI19LinkItemContentView::___lazy_storage___webView) = 0
  ;
  *(undefined8 *)(unaff_x20 + _TtC11PasteCoreUI19LinkItemContentView::___lazy_storage___textView) =
       0;
  *(long *)(unaff_x20 + _TtC11PasteCoreUI19LinkItemContentView::viewModel) = param_1;
  _swift_retain(param_1);
  IVar6 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffb0,"initWithFrame:",0,0,0,0);
  puVar5 = &DAT_100ed07b8;
  _swift_allocObject(&DAT_100ed07b8,0x18,7);
  _swift_unknownObjectWeakInit(puVar5 + 0x10,IVar6);
  puVar7 = &DAT_100ed08a8;
  _swift_allocObject(&DAT_100ed08a8,0x20,7);
  *(undefined **)(puVar7 + 0x10) = puVar5;
  *(long *)(puVar7 + 0x18) = param_1;
  _swift_beginAccess(param_1 + 0x10,auStack_68,1,0);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(code **)(param_1 + 0x10) = FUN_1003eb1f8;
  *(undefined **)(param_1 + 0x18) = puVar7;
  _swift_retain(param_1);
  _swift_retain(puVar5);
  FUN_100004550(uVar4,uVar2);
  _swift_release(puVar5);
  FUN_1003e8b04(0);
  _swift_release(param_1);
  return IVar6;
}



/* Address: 0x1003e8640 | FUN_1003e8640 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1003e8640(long param_1,undefined8 param_2)

{
  bool bVar1;
  URLRequest_conflict UVar2;
  URL UVar3;
  undefined *puVar4;
  ID self;
  URL UVar5;
  long lVar6;
  NSURLRequest *pNVar7;
  long extraout_x8;
  long extraout_x8_00;
  undefined *puVar8;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar9;
  long extraout_x12;
  long extraout_x12_00;
  long lVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  long lVar14;
  long lVar15;
  ID IVar16;
  undefined *local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  URL local_78;
  undefined *local_70;
  undefined8 local_68;
  
  local_68 = param_2;
  UVar2 = Foundation::URLRequest::typeMetadataAccessor();
  lVar11 = *(long *)(UVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar11 + 0x40));
  lVar12 = (long)&local_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  UVar3 = Foundation::URL::typeMetadataAccessor();
  lVar10 = *(long *)(UVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar10 + 0x40));
  puVar8 = (undefined *)(lVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  puVar4 = &DAT_100fc3e50;
  local_78.unknown = puVar8;
  FUN_1000037f0(&DAT_100fc3e50,&DAT_100c462d0);
  local_70 = puVar4;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = (long)puVar8 - extraout_x8_01;
  puVar4 = &DAT_100fc3e38;
  FUN_1000037f0(&DAT_100fc3e38,&DAT_100c462c8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar4 + -8) + 0x40));
  lVar9 = lVar15 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_80 = lVar9;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar9 = lVar9 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  IVar16 = lVar9 - extraout_x12_00;
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 == 0) {
    return;
  }
  local_a0 = UVar2.unknown;
  local_98 = lVar11;
  local_88 = lVar12;
  FUN_1003bf65c(IVar16);
  pcVar13 = *(code **)(lVar10 + 0x38);
  self = IVar16;
  local_90 = lVar10;
  (*pcVar13)(IVar16,0,1,UVar3.unknown);
  FUN_1003e82e4();
  UVar5.unknown = (undefined *)objc_stub::URL(self);
  if (UVar5.unknown != (undefined *)0x0) {
    Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar5);
  }
  (*pcVar13)(lVar9,UVar5.unknown == (undefined *)0x0,1,UVar3.unknown);
  lVar10 = (long)*(int *)(local_70 + 0x30);
  FUN_100011090(IVar16,lVar15,&DAT_100fc3e38,&DAT_100c462c8);
  FUN_100011090(lVar9,lVar15 + lVar10,&DAT_100fc3e38,&DAT_100c462c8);
  lVar11 = local_90;
  pcVar13 = *(code **)(local_90 + 0x30);
  lVar6 = lVar15;
  (*pcVar13)(lVar15,1,UVar3.unknown);
  lVar12 = local_80;
  if ((int)lVar6 == 1) {
    FUN_100005808(lVar9,&DAT_100fc3e38,&DAT_100c462c8);
    FUN_100005808(IVar16,&DAT_100fc3e38,&DAT_100c462c8);
    lVar10 = lVar15 + lVar10;
    (*pcVar13)(lVar10,1,UVar3.unknown);
    lVar14 = local_88;
    if ((int)lVar10 == 1) {
      FUN_100005808(lVar15,&DAT_100fc3e38,&DAT_100c462c8);
      return;
    }
  }
  else {
    FUN_100011090(lVar15,local_80,&DAT_100fc3e38,&DAT_100c462c8);
    lVar6 = lVar15 + lVar10;
    (*pcVar13)(lVar6,1,UVar3.unknown);
    UVar5.unknown = local_78.unknown;
    lVar14 = local_88;
    if ((int)lVar6 != 1) {
      (**(code **)(lVar11 + 0x20))(local_78.unknown,lVar15 + lVar10,UVar3.unknown);
      puVar4 = &DAT_100fc3e58;
      FUN_100003a00(&DAT_100fc3e58,PTR_typeMetadataAccessor_100ea71a8,
                    PTR_Foundation__Foundation__URL_>Swift__Equatable_100ea71c8);
      bVar1 = Swift::Equatable::___infix(lVar12,UVar5.unknown,UVar3.unknown,puVar4);
      pcVar13 = *(code **)(lVar11 + 8);
      (*pcVar13)(UVar5.unknown,UVar3.unknown);
      FUN_100005808(lVar9,&DAT_100fc3e38,&DAT_100c462c8);
      FUN_100005808(IVar16,&DAT_100fc3e38,&DAT_100c462c8);
      (*pcVar13)(local_80,UVar3.unknown);
      FUN_100005808(lVar15,&DAT_100fc3e38,&DAT_100c462c8);
      if (bVar1) {
        return;
      }
      goto LAB_1003e8994;
    }
    FUN_100005808(lVar9,&DAT_100fc3e38,&DAT_100c462c8);
    FUN_100005808(IVar16,&DAT_100fc3e38,&DAT_100c462c8);
    (**(code **)(lVar11 + 8))(lVar12,UVar3.unknown);
  }
  FUN_100005808(lVar15,&DAT_100fc3e50,&DAT_100c462d0);
LAB_1003e8994:
  UVar3.unknown = local_78.unknown;
  lVar9 = local_98;
  IVar16 = *(ID *)(param_1 + _TtC11PasteCoreUI19LinkItemContentView::___lazy_storage___webView);
  FUN_1003bf65c(local_78.unknown);
  UVar2 = Foundation::URLRequest::init(UVar3,(NSURLRequestCachePolicy)0x0,60.0);
  pNVar7 = Foundation::URLRequest::_bridgeToObjectiveC(UVar2);
  (**(code **)(lVar9 + 8))(lVar14,local_a0);
  objc_stub::loadRequest_(IVar16,pNVar7);
  return;
}



/* Address: 0x1003e8b04 | FUN_1003e8b04 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_1003e8b04(uint param_1)

{
  long lVar1;
  _CocoaArrayWrapper _Var2;
  code *pcVar3;
  URL UVar4;
  _ArrayBuffer _Var5;
  ulong self;
  MainActor *pMVar6;
  undefined8 *puVar7;
  UnownedSerialExecutor UVar8;
  UnownedSerialExecutor UVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  long extraout_x8;
  ID unaff_x20;
  long lVar12;
  ulong uVar13;
  undefined1 auStack_80 [12];
  uint local_74;
  undefined1 *local_70;
  
  local_74 = param_1;
  UVar4 = Foundation::URL::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(UVar4.unknown + -8) + 0x40));
  local_70 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  _Var5.unknown = (undefined *)objc_stub::subviews(unaff_x20);
  FUN_10000ec2c(0,&DAT_100fc3e40,&PTR__OBJC_CLASS___NSView_100f8d628);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  if ((ulong)_Var5.unknown >> 0x3e == 0) {
    lVar12 = *(long *)(((ulong)_Var5.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var2.unknown = _Var5.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < _Var5.unknown) {
      _Var2.unknown = _Var5.unknown;
    }
    lVar12 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
  }
  if (lVar12 != 0) {
    uVar13 = 0;
    do {
      if (((ulong)_Var5.unknown & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)_Var5.unknown & 0xffffffffffffff8) + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1003e8ca0);
          (*pcVar3)();
        }
        self = *(ulong *)(_Var5.unknown + uVar13 * 8 + 0x20);
      }
      else {
        self = uVar13;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar13,_Var5);
      }
      lVar1 = uVar13 + 1;
      if (SCARRY8(uVar13,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1003e8c9c);
        (*pcVar3)();
      }
      pMVar6 = Swift::MainActor::typeMetadataAccessor();
      pMVar6 = Swift::MainActor::get_shared(pMVar6,pMVar6);
      puVar7 = &DAT_100fc31a8;
      FUN_100003a00(&DAT_100fc31a8,PTR_typeMetadataAccessor_100eaec10,
                    PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
      UVar8 = Swift::Actor::get_unownedExecutor();
      UVar9 = UVar8;
      _swift_task_isCurrentExecutor();
      if (((ulong)UVar9.unknown & 1) == 0) {
        _swift_task_reportUnexpectedExecutor
                  ("PasteCoreUI/LinkItemContentView.swift",0x25,1,0x54,UVar8.unknown,puVar7);
      }
      objc_stub::removeFromSuperview(self);
      _swift_release(pMVar6);
      uVar13 = uVar13 + 1;
    } while (lVar1 != lVar12);
  }
  _swift_bridgeObjectRelease(_Var5.unknown);
  if ((local_74 & 1) == 0) {
    FUN_1003e95a0();
  }
  else {
    FUN_1003e944c();
  }
  puVar11 = local_70;
  FUN_1003bf65c(local_70);
  puVar10 = &DAT_100ed07b8;
  _swift_allocObject(&DAT_100ed07b8,0x18,7);
  _swift_unknownObjectWeakInit(puVar10 + 0x10,unaff_x20);
  FUN_1003e82bc(0);
  _objc_allocWithZone();
  FUN_1003e79e0(puVar11,FUN_1003eaa64,puVar10);
  FUN_1003df0b0(puVar11);
  return 0;
}



/* Address: 0x1003e8d94 | _TtC11PasteCoreUI19LinkItemContentView::initWithCoder: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC11PasteCoreUI19LinkItemContentView::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fc31a8;
  FUN_100003a00(&DAT_100fc31a8,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteCoreUI/LinkItemContentView.swift",0x25,1,0x3f,UVar4.unknown,puVar3);
  }
  FUN_1003eb0ec();
  _swift_release(pMVar2);
  return param_3;
}



/* Address: 0x1003e8e5c | FUN_1003e8e5c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003e8e5c(void)

{
  undefined1 *puVar1;
  URL UVar2;
  URL UVar3;
  long lVar4;
  URL UVar5;
  void *in_x3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  code *pcVar10;
  code *pcVar11;
  long lVar12;
  String SVar13;
  String SVar14;
  undefined8 local_70;
  undefined1 *puStack_68;
  
  puVar9 = &DAT_100fc3e38;
  FUN_1000037f0(&DAT_100fc3e38,&DAT_100c462c8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar9 + -8) + 0x40));
  lVar6 = (long)&local_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar9 = (undefined *)(lVar6 - extraout_x12);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar7 = (long)puVar9 - extraout_x12_00;
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar12 = *(long *)(UVar2.unknown + -8);
  UVar3 = UVar2;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar12 + 0x40));
  lVar8 = lVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_1003e836c();
  objc_stub::text((ID)UVar3.unknown);
  SVar13 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  Foundation::URL::_init();
  _swift_bridgeObjectRelease(SVar13.bridgeObject);
  pcVar11 = *(code **)(lVar12 + 0x30);
  lVar4 = 1;
  UVar3.unknown = puVar9;
  UVar5 = UVar2;
  (*pcVar11)();
  if ((int)UVar3.unknown == 1) {
    FUN_100005808(puVar9,&DAT_100fc3e38,&DAT_100c462c8);
    (**(code **)(lVar12 + 0x38))(lVar7,1,1,UVar2.unknown);
  }
  else {
    Foundation::URL::_get_scheme(UVar3);
    if (lVar4 == 0) {
      local_70 = 0x2f2f3a7370747468;
      puStack_68 = &DAT_e800000000000000;
      SVar13 = Foundation::URL::get_absoluteString(UVar3);
      SVar14.bridgeObject = in_x3;
      SVar14.str = UVar5.unknown;
      Swift::String::append(SVar13,SVar14);
      _swift_bridgeObjectRelease(SVar13.bridgeObject);
      puVar1 = puStack_68;
      Foundation::URL::_init();
      _swift_bridgeObjectRelease(puVar1);
    }
    else {
      _swift_bridgeObjectRelease(lVar4);
      (**(code **)(lVar12 + 0x10))(lVar7,puVar9,UVar2.unknown);
      (**(code **)(lVar12 + 0x38))(lVar7,0,1,UVar2.unknown);
    }
    pcVar10 = *(code **)(lVar12 + 8);
    (*pcVar10)(puVar9,UVar2.unknown);
    lVar4 = lVar7;
    (*pcVar11)(lVar7,1,UVar2.unknown);
    if ((int)lVar4 != 1) {
      (**(code **)(lVar12 + 0x20))(lVar8,lVar7,UVar2.unknown);
      (**(code **)(lVar12 + 0x10))(lVar6,lVar8,UVar2.unknown);
      (**(code **)(lVar12 + 0x38))(lVar6,0,1,UVar2.unknown);
      FUN_1003bf900(lVar6);
      FUN_100005808(lVar6,&DAT_100fc3e38,&DAT_100c462c8);
      FUN_1003e8b04(0);
      (*pcVar10)(lVar8,UVar2.unknown);
      return;
    }
  }
  FUN_100005808(lVar7,&DAT_100fc3e38,&DAT_100c462c8);
  return;
}



/* Address: 0x1003e9148 | _TtC11PasteCoreUI19LinkItemContentView::initWithFrame: */

/* Function Stack Size: 0x30 bytes */

ID _TtC11PasteCoreUI19LinkItemContentView::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

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
              ("PasteCoreUI/LinkItemContentView.swift",0x25,1,8,UVar4.unknown,puVar3);
  }
  __swift_stdlib_reportUnimplementedInitializer
            ("PasteCoreUI.LinkItemContentView",0x1f,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1003e91f0);
  (*pcVar2)();
}



/* Address: 0x1003e91f0 | _TtC11PasteCoreUI19LinkItemContentView::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11PasteCoreUI19LinkItemContentView::_cxx_destruct(ID param_1,SEL param_2)

{
  FUN_100004550(*(undefined8 *)(param_1 + onCanCommitEditing),
                ((undefined8 *)(param_1 + onCanCommitEditing))[1]);
  _swift_release(*(undefined8 *)(param_1 + viewModel));
  return;
}



/* Address: 0x1003e927c | FUN_1003e927c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1003e927c(void)

{
  return ZEXT816(0x100f9b198);
}



/* Address: 0x1003e929c | FUN_1003e929c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_1003e929c(void)

{
  long *unaff_x20;
  
  return *(undefined8 *)(*unaff_x20 + _TtC11PasteCoreUI19LinkItemContentView::footer);
}



/* Address: 0x1003e92b0 | FUN_1003e92b0 */

undefined1  [16] FUN_1003e92b0(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long *unaff_x20;
  undefined1 auStack_38 [24];
  
  pauVar1 = (undefined1 (*) [16])
            (*unaff_x20 + _TtC11PasteCoreUI19LinkItemContentView::onCanCommitEditing);
  _swift_beginAccess(pauVar1,auStack_38,0,0);
  auVar2 = *pauVar1;
  thunk_FUN_100011128(*(undefined8 *)*pauVar1,*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Address: 0x1003e930c | FUN_1003e930c */

void FUN_1003e930c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(*unaff_x20 + _TtC11PasteCoreUI19LinkItemContentView::onCanCommitEditing);
  _swift_beginAccess(puVar1,auStack_48,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  FUN_100004550(uVar2,uVar3);
  return;
}



/* Address: 0x1003e936c | FUN_1003e936c */

undefined1  [16] FUN_1003e936c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  undefined1 auVar3 [16];
  
  lVar1 = _TtC11PasteCoreUI19LinkItemContentView::onCanCommitEditing;
  lVar2 = *unaff_x20;
  _swift_beginAccess(lVar2 + _TtC11PasteCoreUI19LinkItemContentView::onCanCommitEditing,param_1,0x21
                     ,0);
  auVar3._8_8_ = lVar2 + lVar1;
  auVar3._0_8_ = _swift_endAccess;
  return auVar3;
}



/* Address: 0x1003e93b0 | FUN_1003e93b0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_1003e93b0(void)

{
  long *unaff_x20;
  
  return *(undefined8 *)(*unaff_x20 + _TtC11PasteCoreUI19LinkItemContentView::editToolbar);
}



/* Address: 0x1003e93e4 | FUN_1003e93e4 */

void FUN_1003e93e4(void)

{
  FUN_1003e8b04(1);
  return;
}



/* Address: 0x1003e9408 | FUN_1003e9408 */

void FUN_1003e9408(void)

{
  FUN_1003e8b04(0);
  return;
}



/* Address: 0x1003e942c | FUN_1003e942c */

void FUN_1003e942c(void)

{
  FUN_1003e8e5c();
  return;
}



/* Address: 0x1003e944c | FUN_1003e944c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_1003e944c(void)

{
  long lVar1;
  URL UVar2;
  URL UVar3;
  undefined *self;
  NSString *pNVar4;
  long extraout_x8;
  long unaff_x20;
  long lVar5;
  String SVar6;
  undefined1 auStack_70 [16];
  
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar5 = *(long *)(UVar2.unknown + -8);
  UVar3 = UVar2;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar5 + 0x40));
  FUN_1003e836c();
  FUN_1001fa09c();
  _swift_bridgeObjectRelease(UVar3.unknown);
  lVar1 = _TtC11PasteCoreUI19LinkItemContentView::___lazy_storage___textView;
  self = *(undefined **)
          (unaff_x20 + _TtC11PasteCoreUI19LinkItemContentView::___lazy_storage___textView);
  UVar3.unknown = self;
  FUN_1003bf65c(auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  SVar6 = Foundation::URL::get_absoluteString(UVar3);
  pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(SVar6.bridgeObject);
  (**(code **)(lVar5 + 8))(auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),UVar2.unknown);
  objc_stub::setText_((ID)self,pNVar4);
  objc_stub::text(*(ID *)(unaff_x20 + lVar1));
  SVar6 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  FUN_1003e9940(SVar6.str,SVar6.bridgeObject);
  _swift_bridgeObjectRelease(SVar6.bridgeObject);
  return;
}



/* Address: 0x1003e95a0 | FUN_1003e95a0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

undefined8 FUN_1003e95a0(void)

{
  long lVar1;
  URL UVar2;
  URLRequest_conflict UVar3;
  undefined *puVar4;
  URLRequest_conflict UVar5;
  NSURLRequest *pNVar6;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  ID IVar7;
  long lVar8;
  undefined1 auStack_b0 [16];
  
  UVar2 = Foundation::URL::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(UVar2.unknown + -8) + 0x40));
  UVar2.unknown = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  UVar3 = Foundation::URLRequest::typeMetadataAccessor();
  lVar8 = *(long *)(UVar3.unknown + -8);
  UVar5 = UVar3;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar8 + 0x40));
  FUN_1003e82e4();
  objc_stub::setHidden_((ID)UVar5.unknown,1);
  IVar7 = *(ID *)(unaff_x20 + _TtC11PasteCoreUI19LinkItemContentView::loaderView);
  objc_stub::FUN_100c0f340(IVar7,0);
  puVar4 = &DAT_100fc3e80;
  FUN_1000037f0(&DAT_100fc3e80,&DAT_100c45d50);
  _swift_initStackObject();
  *(undefined8 *)(puVar4 + 0x18) = 5;
  *(undefined8 *)(puVar4 + 0x10) = 2;
  *(ID *)(puVar4 + 0x20) = IVar7;
  lVar1 = _TtC11PasteCoreUI19LinkItemContentView::___lazy_storage___webView;
  *(undefined8 *)(puVar4 + 0x28) =
       *(undefined8 *)
        (unaff_x20 + _TtC11PasteCoreUI19LinkItemContentView::___lazy_storage___webView);
  FUN_1001fa150(puVar4,FUN_1003eaa74,auStack_b0);
  _swift_bridgeObjectRelease();
  _swift_setDeallocating(puVar4);
  _swift_arrayDestroy(puVar4 + 0x20,*(undefined8 *)(puVar4 + 0x10),
                      PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8);
  IVar7 = *(ID *)(unaff_x20 + lVar1);
  FUN_1003bf65c(UVar2.unknown);
  UVar5 = Foundation::URLRequest::init(UVar2,(NSURLRequestCachePolicy)0x0,60.0);
  pNVar6 = Foundation::URLRequest::_bridgeToObjectiveC(UVar5);
  (**(code **)(lVar8 + 8))
            ((long)UVar2.unknown - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0),UVar3.unknown);
  objc_stub::loadRequest_(IVar7,pNVar6);
  return 0;
}



/* Address: 0x1003e9790 | FUN_1003e9790 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003e9790(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _TtC11PasteCoreUI19LinkItemContentView::viewModel);
    _swift_retain(uVar1);
    FUN_1003bfcf0(0);
    _swift_release(uVar1);
    return;
  }
  return;
}



/* Address: 0x1003e97e8 | FUN_1003e97e8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_1003e97e8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *local_80 [3];
  undefined8 *local_68;
  undefined **ppuStack_60;
  undefined8 *local_58;
  
  puVar1 = param_1;
  _swift_getObjectType();
  puVar2 = puVar1;
  FUN_1003e836c();
  ppuStack_60 = &PTR_PTR_100ec00e8;
  local_80[0] = param_1;
  local_68 = puVar1;
  local_58 = puVar2;
  FUN_1001f9774();
  uVar8 = *param_1;
  uVar9 = param_1[1];
  uVar10 = param_1[2];
  uVar11 = param_1[3];
  uVar3 = 0;
  FUN_10000ec2c(0,&DAT_100fc3e60,&PTR__OBJC_CLASS___NSTextView_100f8da30);
  ppuVar4 = local_80;
  FUN_1001f97b4(uVar8,uVar9,uVar10,uVar11,ppuVar4,uVar3,&PTR_PTR_100ec00e8);
  FUN_100004594(local_80);
  puVar5 = &DAT_100fc3b00;
  FUN_1000037f0(&DAT_100fc3b00,&DAT_100c45590);
  _swift_initStackObject();
  *(undefined8 *)(puVar5 + 0x18) = 2;
  *(undefined8 *)(puVar5 + 0x10) = 1;
  puVar6 = &DAT_100fc3e70;
  FUN_1000037f0(&DAT_100fc3e70,&DAT_100c45d60);
  *(undefined **)(puVar5 + 0x38) = puVar6;
  *(undefined ***)(puVar5 + 0x40) = &PTR_PTR_100ec00b8;
  *(undefined8 ***)(puVar5 + 0x20) = ppuVar4;
  puVar7 = puVar5;
  FUN_1001f8d60(puVar5);
  _swift_setDeallocating(puVar5);
  uVar3 = *(undefined8 *)(puVar5 + 0x10);
  puVar6 = &DAT_100fc3b10;
  FUN_1000037f0(&DAT_100fc3b10,&DAT_100c455a0);
  _swift_arrayDestroy(puVar5 + 0x20,uVar3,puVar6);
  return puVar7;
}



/* Address: 0x1003e9940 | FUN_1003e9940 */

void FUN_1003e9940(void)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  bool bVar3;
  URL UVar4;
  URL UVar5;
  long lVar6;
  URL UVar7;
  void *in_x3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar8;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long unaff_x20;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  code *pcVar14;
  undefined *puVar15;
  code *pcVar16;
  String SVar17;
  String SVar18;
  undefined1 auStack_a0 [8];
  undefined1 *local_98;
  long local_90;
  undefined *local_88;
  long local_80;
  undefined8 local_78;
  undefined1 *puStack_70;
  
  UVar4 = Foundation::URL::typeMetadataAccessor();
  lVar11 = *(long *)(UVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar11 + 0x40));
  puVar9 = &DAT_100fc3e50;
  local_98 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_1000037f0(&DAT_100fc3e50,&DAT_100c462d0);
  local_88 = puVar9;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = (long)(auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
  puVar9 = &DAT_100fc3e38;
  FUN_1000037f0(&DAT_100fc3e38,&DAT_100c462c8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar9 + -8) + 0x40));
  lVar8 = lVar10 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_90 = lVar8;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar9 = (undefined *)(lVar8 - extraout_x12);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar15 = puVar9 + -extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar12 = (long)puVar15 - extraout_x12_01;
  Foundation::URL::_init();
  pcVar16 = *(code **)(lVar11 + 0x30);
  lVar8 = 1;
  UVar5.unknown = puVar15;
  UVar7 = UVar4;
  (*pcVar16)();
  local_80 = lVar12;
  if ((int)UVar5.unknown == 1) {
    FUN_100005808(puVar15,&DAT_100fc3e38,&DAT_100c462c8);
    (**(code **)(lVar11 + 0x38))(lVar12,1,1,UVar4.unknown);
  }
  else {
    Foundation::URL::_get_scheme(UVar5);
    if (lVar8 == 0) {
      local_78 = 0x2f2f3a7370747468;
      puStack_70 = &DAT_e800000000000000;
      SVar17 = Foundation::URL::get_absoluteString(UVar5);
      SVar18.bridgeObject = in_x3;
      SVar18.str = UVar7.unknown;
      Swift::String::append(SVar17,SVar18);
      _swift_bridgeObjectRelease(SVar17.bridgeObject);
      puVar2 = puStack_70;
      Foundation::URL::_init();
      _swift_bridgeObjectRelease(puVar2);
    }
    else {
      _swift_bridgeObjectRelease(lVar8);
      (**(code **)(lVar11 + 0x10))(lVar12,puVar15,UVar4.unknown);
      (**(code **)(lVar11 + 0x38))(lVar12,0,1,UVar4.unknown);
    }
    (**(code **)(lVar11 + 8))(puVar15,UVar4.unknown);
  }
  puVar1 = (undefined8 *)(unaff_x20 + _TtC11PasteCoreUI19LinkItemContentView::onCanCommitEditing);
  _swift_beginAccess(puVar1,&local_78,0x20,0);
  pcVar14 = (code *)*puVar1;
  if (pcVar14 == (code *)0x0) {
    FUN_100005808(local_80,&DAT_100fc3e38,&DAT_100c462c8);
    _swift_endAccess(&local_78);
    return;
  }
  uVar13 = puVar1[1];
  _swift_endAccess(&local_78);
  (**(code **)(lVar11 + 0x38))(puVar9,1,1,UVar4.unknown);
  lVar8 = (long)*(int *)(local_88 + 0x30);
  FUN_100011090(local_80,lVar10,&DAT_100fc3e38,&DAT_100c462c8);
  FUN_100011090(puVar9,lVar10 + lVar8,&DAT_100fc3e38,&DAT_100c462c8);
  lVar6 = lVar10;
  (*pcVar16)(lVar10,1,UVar4.unknown);
  lVar12 = local_90;
  if ((int)lVar6 == 1) {
    _swift_retain(uVar13);
    FUN_100005808(puVar9,&DAT_100fc3e38,&DAT_100c462c8);
    lVar8 = lVar10 + lVar8;
    (*pcVar16)(lVar8,1,UVar4.unknown);
    if ((int)lVar8 == 1) {
      FUN_100005808(lVar10,&DAT_100fc3e38,&DAT_100c462c8);
      bVar3 = false;
      goto LAB_1003e9ddc;
    }
  }
  else {
    local_88 = puVar9;
    FUN_100011090(lVar10,local_90,&DAT_100fc3e38,&DAT_100c462c8);
    lVar6 = lVar10 + lVar8;
    (*pcVar16)(lVar6,1,UVar4.unknown);
    puVar2 = local_98;
    if ((int)lVar6 != 1) {
      (**(code **)(lVar11 + 0x20))(local_98,lVar10 + lVar8,UVar4.unknown);
      puVar9 = &DAT_100fc3e58;
      FUN_100003a00(&DAT_100fc3e58,PTR_typeMetadataAccessor_100ea71a8,
                    PTR_Foundation__Foundation__URL_>Swift__Equatable_100ea71c8);
      _swift_retain(uVar13);
      bVar3 = Swift::Equatable::___infix(lVar12,puVar2,UVar4.unknown,puVar9);
      pcVar16 = *(code **)(lVar11 + 8);
      (*pcVar16)(puVar2,UVar4.unknown);
      FUN_100005808(local_88,&DAT_100fc3e38,&DAT_100c462c8);
      (*pcVar16)(lVar12,UVar4.unknown);
      FUN_100005808(lVar10,&DAT_100fc3e38,&DAT_100c462c8);
      bVar3 = !bVar3;
      goto LAB_1003e9ddc;
    }
    _swift_retain(uVar13);
    FUN_100005808(local_88,&DAT_100fc3e38,&DAT_100c462c8);
    (**(code **)(lVar11 + 8))(lVar12,UVar4.unknown);
  }
  FUN_100005808(lVar10,&DAT_100fc3e50,&DAT_100c462d0);
  bVar3 = true;
LAB_1003e9ddc:
  (*pcVar14)(bVar3);
  FUN_100004550(pcVar14,uVar13);
  FUN_100005808(local_80,&DAT_100fc3e38,&DAT_100c462c8);
  return;
}



/* Address: 0x1003e9e2c | FUN_1003e9e2c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_1003e9e2c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 **ppuVar3;
  undefined8 uVar4;
  undefined8 **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *local_a8 [3];
  undefined8 *local_90;
  undefined **ppuStack_88;
  
  puVar1 = param_1;
  _swift_getObjectType();
  ppuStack_88 = &PTR_PTR_100ec00e8;
  uVar2 = 0;
  local_a8[0] = param_1;
  local_90 = puVar1;
  FUN_10000ec2c(0,&DAT_100fc3e88,&PTR__OBJC_CLASS___NSProgressIndicator_100f8dc58);
  ppuVar3 = local_a8;
  FUN_1001f9a0c(0,0,ppuVar3,uVar2,&PTR_PTR_100ec00e8);
  FUN_100004594(local_a8);
  FUN_1001f9e3c(0x4038000000000000,0x4038000000000000,uVar2,&PTR_PTR_100ec00e8);
  FUN_1003e82e4();
  ppuStack_88 = &PTR_PTR_100ec00e8;
  local_a8[0] = param_1;
  local_90 = puVar1;
  FUN_1001f9774();
  uVar9 = *param_1;
  uVar10 = param_1[1];
  uVar11 = param_1[2];
  uVar12 = param_1[3];
  uVar4 = 0;
  FUN_1003ea304(0);
  ppuVar5 = local_a8;
  FUN_1001f97b4(uVar9,uVar10,uVar11,uVar12,ppuVar5,uVar4,&PTR_PTR_100ec00e8);
  FUN_100004594(local_a8);
  puVar6 = &DAT_100fc3b00;
  FUN_1000037f0(&DAT_100fc3b00,&DAT_100c45590);
  _swift_initStackObject();
  *(undefined8 *)(puVar6 + 0x18) = 6;
  *(undefined8 *)(puVar6 + 0x10) = 3;
  puVar7 = &DAT_100fc3e70;
  FUN_1000037f0(&DAT_100fc3e70,&DAT_100c45d60);
  *(undefined **)(puVar6 + 0x38) = puVar7;
  *(undefined ***)(puVar6 + 0x40) = &PTR_PTR_100ec00b8;
  *(undefined8 ***)(puVar6 + 0x20) = ppuVar3;
  *(undefined **)(puVar6 + 0x60) = puVar7;
  *(undefined ***)(puVar6 + 0x68) = &PTR_PTR_100ec00b8;
  *(undefined8 *)(puVar6 + 0x48) = uVar2;
  *(undefined **)(puVar6 + 0x88) = puVar7;
  *(undefined ***)(puVar6 + 0x90) = &PTR_PTR_100ec00b8;
  *(undefined8 ***)(puVar6 + 0x70) = ppuVar5;
  puVar8 = puVar6;
  FUN_1001f8d60(puVar6);
  _swift_setDeallocating(puVar6);
  uVar2 = *(undefined8 *)(puVar6 + 0x10);
  puVar7 = &DAT_100fc3b10;
  FUN_1000037f0(&DAT_100fc3b10,&DAT_100c455a0);
  _swift_arrayDestroy(puVar6 + 0x20,uVar2,puVar7);
  return puVar8;
}



/* Address: 0x1003ea01c | _TtC11PasteCoreUIP33_5785B7991835B147BFE56CFE2A535F5D7WebView::acceptsFirstResponder */

/* Function Stack Size: 0x10 bytes */

bool _TtC11PasteCoreUIP33_5785B7991835B147BFE56CFE2A535F5D7WebView::acceptsFirstResponder
               (ID param_1,SEL param_2)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fc31a8;
  FUN_100003a00(&DAT_100fc31a8,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteCoreUI/LinkItemContentView.swift",0x25,1,0xa0,UVar4.unknown,puVar3);
  }
  _swift_release(pMVar2);
  return 0;
}



/* Address: 0x1003ea0bc | _TtC11PasteCoreUIP33_5785B7991835B147BFE56CFE2A535F5D7WebView::initWithFrame:configuration: */

/* Function Stack Size: 0x38 bytes */

ID _TtC11PasteCoreUIP33_5785B7991835B147BFE56CFE2A535F5D7WebView::initWithFrame_configuration_
             (ID param_1,SEL param_2,CGRect param_3,ID param_4)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  class_t *pcVar6;
  ID IVar7;
  objc_super local_70;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fc31a8;
  FUN_100003a00(&DAT_100fc31a8,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteCoreUI/LinkItemContentView.swift",0x25,1,0x9e,UVar4.unknown,puVar3);
  }
  pcVar6 = (class_t *)0x0;
  FUN_1003ea304();
  local_70.receiver = param_1;
  local_70.super_class = pcVar6;
  IVar7 = _objc_msgSendSuper2(&local_70,"initWithFrame:configuration:",param_3.field0_0x0.field0_0x0
                             );
  _swift_release(pMVar2);
  return IVar7;
}



/* Address: 0x1003ea1c8 | _TtC11PasteCoreUIP33_5785B7991835B147BFE56CFE2A535F5D7WebView::initWithCoder: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC11PasteCoreUIP33_5785B7991835B147BFE56CFE2A535F5D7WebView::initWithCoder_
             (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  class_t *pcVar6;
  ID IVar7;
  objc_super local_50;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fc31a8;
  FUN_100003a00(&DAT_100fc31a8,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteCoreUI/LinkItemContentView.swift",0x25,1,0x9e,UVar4.unknown,puVar3);
  }
  pcVar6 = (class_t *)0x0;
  FUN_1003ea304();
  local_50.receiver = param_1;
  local_50.super_class = pcVar6;
  IVar7 = _objc_msgSendSuper2(&local_50,"initWithCoder:",param_3);
  _swift_release(pMVar2);
  return IVar7;
}



/* Address: 0x1003ea2d0 | FUN_1003ea2d0 */

void FUN_1003ea2d0(void)

{
  FUN_1003ea304();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"dealloc");
  return;
}



/* Address: 0x1003ea304 | FUN_1003ea304 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1003ea304(void)

{
  return ZEXT816(0x100f9b288);
}



/* Address: 0x1003ea324 | _TtC11PasteCoreUI19LinkItemContentView::webView:decidePolicyForNavigationAction:decisionHandler: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void _TtC11PasteCoreUI19LinkItemContentView::
     webView_decidePolicyForNavigationAction_decisionHandler_
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               void *param_5)

{
  undefined *puVar1;
  void *pvVar2;
  TaskPriority TVar3;
  undefined *puVar4;
  long extraout_x8;
  
  puVar1 = &DAT_100fc3610;
  FUN_1000037f0(&DAT_100fc3610,&DAT_100c45d70);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  pvVar2 = __Block_copy(param_5);
  puVar1 = &DAT_100ed07e0;
  _swift_allocObject(&DAT_100ed07e0,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(void **)(puVar1 + 0x20) = pvVar2;
  *(undefined8 *)(puVar1 + 0x28) = param_1;
  TVar3 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar3.unknown + -8) + 0x38))
            (&stack0xffffffffffffffc0 + -extraout_x8,1,1,TVar3.unknown);
  puVar4 = &DAT_100ed0808;
  _swift_allocObject(&DAT_100ed0808,0x30,7);
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined8 *)(puVar4 + 0x18) = 0;
  *(undefined **)(puVar4 + 0x20) = &DAT_100c462e8;
  *(undefined **)(puVar4 + 0x28) = puVar1;
  puVar1 = &DAT_100ed0830;
  _swift_allocObject(&DAT_100ed0830,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined **)(puVar1 + 0x20) = &DAT_100c462f8;
  *(undefined **)(puVar1 + 0x28) = puVar4;
  FUN_1003eadc0(0,0,&stack0xffffffffffffffc0 + -extraout_x8,&DAT_100c46308,puVar1);
  _swift_release();
  return;
}



/* Address: 0x1003ea474 | FUN_1003ea474 */

void FUN_1003ea474(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_3;
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  *(MainActor **)(unaff_x22 + 0x18) = pMVar2;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  *(MainActor **)(unaff_x22 + 0x20) = pMVar2;
  puVar3 = &DAT_100fc31a8;
  FUN_100003a00(&DAT_100fc31a8,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  *(undefined8 **)(unaff_x22 + 0x28) = puVar3;
  UVar4 = Swift::Actor::get_unownedExecutor();
  _swift_task_switch(FUN_1003ea50c,UVar4.unknown,puVar3);
  return;
}



/* Address: 0x1003ea50c | FUN_1003ea50c */

void FUN_1003ea50c(void)

{
  MainActor *pMVar1;
  UnownedSerialExecutor UVar2;
  undefined8 uVar3;
  MainActor *this;
  long unaff_x22;
  
  pMVar1 = *(MainActor **)(unaff_x22 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x28);
  this = *(MainActor **)(unaff_x22 + 0x18);
  _swift_release();
  pMVar1 = Swift::MainActor::get_shared(this,pMVar1);
  *(MainActor **)(unaff_x22 + 0x30) = pMVar1;
  UVar2 = Swift::Actor::get_unownedExecutor();
  _swift_task_switch(FUN_1003ea578,UVar2.unknown,uVar3);
  return;
}



/* Address: 0x1003ea578 | FUN_1003ea578 */

void FUN_1003ea578(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x10);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x30));
  (**(code **)(lVar1 + 0x10))(lVar1,1);
                    /* WARNING: Could not recover jumptable at 0x0001003ea5b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1003ea5bc | _TtC11PasteCoreUI19LinkItemContentView::webView:didFinishNavigation: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void _TtC11PasteCoreUI19LinkItemContentView::webView_didFinishNavigation_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fc31a8;
  FUN_100003a00(&DAT_100fc31a8,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteCoreUI/LinkItemContentView.swift",0x25,1,0xab,UVar4.unknown,puVar3);
  }
  objc_stub::FUN_100c0f720(*(ID *)(param_1 + loaderView),0);
  objc_stub::setHidden_(param_3,0);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x1003ea6b0 | _TtC11PasteCoreUI19LinkItemContentView::webView:didFailNavigation:withError: */

/* Function Stack Size: 0x28 bytes */

void _TtC11PasteCoreUI19LinkItemContentView::webView_didFailNavigation_withError_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  FUN_1003ea6c0();
  return;
}



/* Address: 0x1003ea6b8 | _TtC11PasteCoreUI19LinkItemContentView::webView:didFailProvisionalNavigation:withError: */

/* Function Stack Size: 0x28 bytes */

void _TtC11PasteCoreUI19LinkItemContentView::webView_didFailProvisionalNavigation_withError_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  FUN_1003ea6c0();
  return;
}



/* Address: 0x1003ea6c0 | FUN_1003ea6c0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1003ea6c0(ID param_1)

{
  undefined *puVar1;
  URL UVar2;
  MainActor *pMVar3;
  undefined8 *puVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  URL UVar7;
  URLRequest_conflict UVar8;
  NSURLRequest *pNVar9;
  undefined8 in_x5;
  long extraout_x8;
  long extraout_x8_00;
  long lVar10;
  URL url;
  long local_70;
  undefined *puStack_68;
  
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar10 = *(long *)(UVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar10 + 0x40));
  url.unknown = (undefined *)((long)&local_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  puStack_68 = (undefined *)Foundation::URLRequest::typeMetadataAccessor();
  local_70 = *(long *)(puStack_68 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_70 + 0x40));
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
              ("PasteCoreUI/LinkItemContentView.swift",0x25,1,in_x5,UVar5.unknown,puVar4);
  }
  FUN_1003e82e4();
  if (DAT_100fc3e98 != -1) {
    _swift_once(&DAT_100fc3e98,FUN_1003eaa7c);
  }
  UVar7 = UVar2;
  FUN_1000cd990(UVar2.unknown,&DAT_100fc3ea0);
  (**(code **)(lVar10 + 0x10))(url.unknown,UVar7.unknown,UVar2.unknown);
  UVar8 = Foundation::URLRequest::init(url,(NSURLRequestCachePolicy)0x0,60.0);
  pNVar9 = Foundation::URLRequest::_bridgeToObjectiveC(UVar8);
  (**(code **)(local_70 + 8))
            ((long)url.unknown - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0),puStack_68);
  objc_stub::loadRequest_(param_1,pNVar9);
  _swift_release(pMVar3);
  return 0;
}



/* Address: 0x1003ea8c8 | _TtC11PasteCoreUI19LinkItemContentView::textDidChange: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC11PasteCoreUI19LinkItemContentView::textDidChange_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  char *pcVar2;
  MainActor *pMVar3;
  UnownedSerialExecutor UVar4;
  undefined8 *puVar5;
  char *pcVar6;
  void *pvVar7;
  long extraout_x8;
  long lVar8;
  String SVar9;
  Notification NVar10;
  
  NVar10 = Foundation::Notification::typeMetadataAccessor();
  pvVar7 = NVar10.syncInProgress.bridgeObject;
  pcVar2 = NVar10.pastePaused.str;
  lVar8 = *(long *)(pcVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(undefined8 *)(lVar8 + 0x40),pcVar2,NVar10.pastePaused.bridgeObject,
             NVar10.syncInProgress.str);
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  puVar5 = &DAT_100fc31a8;
  pcVar6 = PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18;
  FUN_100003a00(&DAT_100fc31a8,puVar1);
  UVar4 = Swift::Actor::get_unownedExecutor();
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    puVar5 = (undefined8 *)0x25;
    pcVar6 = &DAT_00000001;
    pvVar7 = (void *)0xc4;
    _swift_task_reportUnexpectedExecutor("PasteCoreUI/LinkItemContentView.swift");
  }
  NVar10.pastePaused.bridgeObject = puVar5;
  NVar10.pastePaused.str = (char *)param_3;
  NVar10.syncInProgress.bridgeObject = pvVar7;
  NVar10.syncInProgress.str = pcVar6;
  NVar10 = Foundation::Notification::__unconditionallyBridgeFromObjectiveC(NVar10);
  FUN_1003e836c(param_1,NVar10.pastePaused.bridgeObject,NVar10.syncInProgress.str,
                NVar10.syncInProgress.bridgeObject);
  objc_stub::text(param_1);
  SVar9 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  FUN_1003e9940(SVar9.str,SVar9.bridgeObject);
  _swift_bridgeObjectRelease(SVar9.bridgeObject);
  (**(code **)(lVar8 + 8))
            (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),pcVar2);
  _swift_release(pMVar3);
  return;
}



/* Address: 0x1003eaa40 | FUN_1003eaa40 */

void FUN_1003eaa40(void)

{
  long unaff_x20;
  
  _swift_unknownObjectWeakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x1003eaa64 | FUN_1003eaa64 */

void FUN_1003eaa64(void)

{
  FUN_1003e9790();
  return;
}



/* Address: 0x1003eaa6c | FUN_1003eaa6c */

void FUN_1003eaa6c(void)

{
  long unaff_x20;
  
  FUN_1003e97e8(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1003eaa74 | FUN_1003eaa74 */

void FUN_1003eaa74(void)

{
  long unaff_x20;
  
  FUN_1003e9e2c(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1003eaa7c | FUN_1003eaa7c */

void FUN_1003eaa7c(void)

{
  code *pcVar1;
  undefined *puVar2;
  URL UVar3;
  URL UVar4;
  undefined1 *puVar5;
  long extraout_x8;
  undefined1 *puVar6;
  long lVar7;
  
  puVar2 = &DAT_100fc3e38;
  FUN_1000037f0(&DAT_100fc3e38,&DAT_100c462c8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = &stack0xffffffffffffffd0 + -extraout_x8;
  UVar3 = Foundation::URL::typeMetadataAccessor();
  FUN_1000ce204(UVar3.unknown,&DAT_100fc3ea0);
  UVar4 = UVar3;
  FUN_1000cd990(UVar3.unknown,&DAT_100fc3ea0);
  Foundation::URL::_init();
  lVar7 = *(long *)(UVar3.unknown + -8);
  puVar5 = puVar6;
  (**(code **)(lVar7 + 0x30))(puVar6,1,UVar3.unknown);
  if ((int)puVar5 != 1) {
    (**(code **)(lVar7 + 0x20))(UVar4.unknown,puVar6,UVar3.unknown);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003eab64);
  (*pcVar1)();
}


