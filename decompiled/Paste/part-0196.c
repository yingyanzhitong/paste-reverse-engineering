/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10023db34 | FUN_10023db34 */

void FUN_10023db34(undefined8 param_1,undefined8 param_2)

{
  FUN_10023db40(param_1,param_2,FUN_10023d784);
  return;
}



/* Address: 0x10023db40 | FUN_10023db40 */

void FUN_10023db40(undefined8 param_1,ulong param_2,code *param_3)

{
  _swift_endAccess();
  if ((param_2 & 1) == 0) {
    (*param_3)();
  }
  return;
}



/* Address: 0x10023db7c | _TtC7PasteUI13ToolbarButton::isEnabled */

/* Function Stack Size: 0x10 bytes */

bool _TtC7PasteUI13ToolbarButton::isEnabled(ID param_1,SEL param_2)

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
  puVar4 = &DAT_100fb6f30;
  FUN_100003a00(&DAT_100fb6f30,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar5 = Swift::Actor::get_unownedExecutor();
  UVar6 = UVar5;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar6.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/ToolbarButton.macOS.swift",0x21,1,0x18,UVar5.unknown,puVar4);
  }
  local_50.receiver = param_1;
  local_50.super_class = pcVar2;
  IVar7 = _objc_msgSendSuper2(&local_50,"isEnabled");
  _swift_release(pMVar3);
  return (bool)IVar7;
}



/* Address: 0x10023dc50 | FUN_10023dc50 */

void FUN_10023dc50(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"isEnabled");
  return;
}



/* Address: 0x10023dc84 | _TtC7PasteUI13ToolbarButton::setEnabled: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x14 bytes */

void _TtC7PasteUI13ToolbarButton::setEnabled_(ID param_1,SEL param_2,bool param_3)

{
  undefined *puVar1;
  class_t *pcVar2;
  MainActor *pMVar3;
  undefined8 *puVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  objc_super local_60;
  
  pcVar2 = (class_t *)param_1;
  _swift_getObjectType();
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
              ("PasteUI/ToolbarButton.macOS.swift",0x21,1,0x18,UVar5.unknown,puVar4);
  }
  local_60.receiver = param_1;
  local_60.super_class = pcVar2;
  _objc_msgSendSuper2(&local_60,"setEnabled:",(ulong)param_3);
  FUN_10023d784();
  _swift_release(pMVar3);
  return;
}



/* Address: 0x10023dd84 | FUN_10023dd84 */

void FUN_10023dd84(uint param_1)

{
  _swift_getObjectType();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffd0,"setEnabled:",(ulong)(param_1 & 1));
  FUN_10023d784();
  return;
}



/* Address: 0x10023ddcc | FUN_10023ddcc */

undefined1  [16] FUN_10023ddcc(undefined8 *param_1)

{
  objc_super *super;
  class_t *pcVar1;
  ID IVar2;
  class_t *unaff_x20;
  undefined1 auVar3 [16];
  
  super = (objc_super *)0x48;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    super = _malloc(0x48);
  }
  else {
    _swift_coroFrameAlloc(0x48,0x7bec);
  }
  *param_1 = super;
  super[3].receiver = (ID)unaff_x20;
  pcVar1 = unaff_x20;
  _swift_getObjectType();
  super[3].super_class = pcVar1;
  super->receiver = (ID)unaff_x20;
  super->super_class = pcVar1;
  IVar2 = _objc_msgSendSuper2(super,"isEnabled");
  *(char *)&super[4].receiver = (char)IVar2;
  auVar3._8_8_ = super + 4;
  auVar3._0_8_ = FUN_10023de4c;
  return auVar3;
}



/* Address: 0x10023de4c | FUN_10023de4c */

void FUN_10023de4c(undefined8 *param_1,ulong param_2)

{
  byte bVar1;
  void *pvVar2;
  
  pvVar2 = (void *)*param_1;
  bVar1 = *(byte *)((long)pvVar2 + 0x40);
  if ((param_2 & 1) == 0) {
    ((objc_super *)((long)pvVar2 + 0x20))->receiver = *(ID *)((long)pvVar2 + 0x30);
    *(undefined8 *)((long)pvVar2 + 0x28) = *(undefined8 *)((long)pvVar2 + 0x38);
    _objc_msgSendSuper2((objc_super *)((long)pvVar2 + 0x20),"setEnabled:",(ulong)bVar1);
    FUN_10023d784();
  }
  else {
    *(undefined8 *)((long)pvVar2 + 0x18) = *(undefined8 *)((long)pvVar2 + 0x38);
    ((objc_super *)((long)pvVar2 + 0x10))->receiver = *(ID *)((long)pvVar2 + 0x30);
    _objc_msgSendSuper2((objc_super *)((long)pvVar2 + 0x10),"setEnabled:",(ulong)bVar1);
  }
  _free(pvVar2);
  return;
}



/* Address: 0x10023deb4 | FUN_10023deb4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10023deb4(void)

{
  undefined8 *puVar1;
  long lVar2;
  ID self;
  NSString *pNVar3;
  undefined *puVar4;
  NSDictionary *pNVar5;
  ID IVar6;
  long unaff_x20;
  undefined8 uVar7;
  
  lVar2 = _TtC7PasteUI13ToolbarButton::___lazy_storage___titleLabel;
  self = *(ID *)(unaff_x20 + _TtC7PasteUI13ToolbarButton::___lazy_storage___titleLabel);
  if (self == 0) {
    pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    self = NSTextField::labelWithString_((ID)&_OBJC_CLASS___NSTextField,pNVar3);
    puVar1 = (undefined8 *)PTR__NSFontTextStyleBody_100ea9050;
    if (*(char *)(unaff_x20 + _TtC7PasteUI13ToolbarButton::size) != '\0') {
      puVar1 = (undefined8 *)PTR__NSFontTextStyleTitle3_100ea90a0;
    }
    uVar7 = *puVar1;
    puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_1001f363c(PTR___swiftEmptyArrayStorage_100eae0d8);
    FUN_1001f3e90(0);
    FUN_100003a00(&DAT_100fb5e88,FUN_1001f3e90,&TargetProtocolConformanceDescriptor_100c347e0);
    pNVar5 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(puVar4);
    IVar6 = NSFont::preferredFontForTextStyle_options_((ID)&_OBJC_CLASS___NSFont,uVar7,pNVar5);
    NSTextField::setFont_(self,IVar6);
    NSTextField::setTextAlignment_(self,1);
    *(ID *)(unaff_x20 + lVar2) = self;
  }
  return self;
}



/* Address: 0x10023e034 | FUN_10023e034 */

undefined8 FUN_10023e034(undefined8 param_1)

{
  undefined8 in_stack_00000018;
  
  FUN_10023fc94();
  _swift_release(in_stack_00000018);
  return param_1;
}



/* Address: 0x10023e080 | FUN_10023e080 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_10023e080(char param_1,ID param_2)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ID IVar6;
  ID IVar7;
  ID self;
  undefined8 uVar8;
  
  if (param_1 == '\x01') {
    puVar3 = &DAT_100fb7040;
    FUN_1000037f0(&DAT_100fb7040,&DAT_100c34f70);
    _swift_allocObject();
    *(undefined8 *)(puVar3 + 0x18) = 5;
    *(undefined8 *)(puVar3 + 0x10) = 2;
    IVar1 = objc_stub::widthAnchor(param_2);
    IVar1 = objc_stub::constraintEqualToConstant_(IVar1,0x4040000000000000);
    *(ID *)(puVar3 + 0x20) = IVar1;
    IVar1 = objc_stub::heightAnchor(param_2);
    IVar1 = objc_stub::constraintEqualToConstant_(IVar1,0x4040000000000000);
    *(ID *)(puVar3 + 0x28) = IVar1;
    puVar5 = &DAT_100fb7ad0;
    FUN_1000037f0(&DAT_100fb7ad0,&DAT_100c36620);
    _swift_initStackObject();
    *(undefined8 *)(puVar5 + 0x18) = 2;
    *(undefined8 *)(puVar5 + 0x10) = 1;
    puVar4 = &DAT_100fb7050;
    FUN_1000037f0(&DAT_100fb7050,&DAT_100c366b0);
    *(undefined **)(puVar5 + 0x38) = puVar4;
    *(undefined ***)(puVar5 + 0x40) = &PTR_PTR_100ec00b8;
    *(undefined **)(puVar5 + 0x20) = puVar3;
    _swift_retain(puVar3);
    puVar4 = puVar5;
    thunk_FUN_1001f9238();
    _swift_setDeallocating(puVar5);
    FUN_100004594(puVar5 + 0x20);
    puVar2 = puVar4;
    FUN_10023e548();
    puVar5 = puVar2;
    thunk_FUN_1001f9238();
    _swift_bridgeObjectRelease(puVar2);
    _swift_release(puVar3);
    uVar8 = 0;
  }
  else {
    IVar1 = objc_stub::heightAnchor(param_2);
    IVar1 = objc_stub::constraintEqualToConstant_(IVar1,0x4036000000000000);
    IVar7 = objc_stub::widthAnchor(param_2);
    IVar7 = objc_stub::constraintGreaterThanOrEqualToConstant_(IVar7,0x4040000000000000);
    puVar3 = &DAT_100fb7ad0;
    FUN_1000037f0(&DAT_100fb7ad0,&DAT_100c36620);
    _swift_initStackObject();
    *(undefined8 *)(puVar3 + 0x18) = 4;
    *(undefined8 *)(puVar3 + 0x10) = 2;
    uVar8 = 0;
    FUN_10000ec2c(0,&DAT_100fb7ae0,&PTR__OBJC_CLASS___NSLayoutConstraint_100f8d660);
    *(undefined8 *)(puVar3 + 0x38) = uVar8;
    *(undefined ***)(puVar3 + 0x40) = &PTR_PTR_100ec00a8;
    *(ID *)(puVar3 + 0x20) = IVar1;
    *(undefined8 *)(puVar3 + 0x60) = uVar8;
    *(undefined ***)(puVar3 + 0x68) = &PTR_PTR_100ec00a8;
    *(ID *)(puVar3 + 0x48) = IVar7;
    puVar4 = puVar3;
    thunk_FUN_1001f9238();
    _swift_setDeallocating(puVar3);
    puVar5 = &DAT_100fb6f00;
    FUN_1000037f0(&DAT_100fb6f00,&DAT_100c36de0);
    _swift_arrayDestroy(puVar3 + 0x20,2,puVar5);
    puVar3 = puVar4;
    FUN_10023e548();
    puVar5 = puVar3;
    thunk_FUN_1001f9238();
    _swift_bridgeObjectRelease(puVar3);
    uVar8 = 0x4020000000000000;
  }
  _swift_bridgeObjectRelease(puVar4);
  IVar7 = *(ID *)(param_2 + _TtC7PasteUI13ToolbarButton::stackView);
  IVar1 = param_2;
  FUN_10023fb74(uVar8,param_2,IVar7);
  IVar7 = objc_stub::centerYAnchor(IVar7);
  IVar6 = objc_stub::centerYAnchor(param_2);
  IVar7 = objc_stub::constraintEqualToAnchor_(IVar7,IVar6);
  self = *(ID *)(param_2 + _TtC7PasteUI13ToolbarButton::pullDownArrowView);
  puVar3 = &DAT_100fb7040;
  FUN_1000037f0(&DAT_100fb7040,&DAT_100c34f70);
  _swift_allocObject();
  *(undefined8 *)(puVar3 + 0x18) = 5;
  *(undefined8 *)(puVar3 + 0x10) = 2;
  IVar6 = objc_stub::widthAnchor(self);
  IVar6 = objc_stub::constraintEqualToConstant_(IVar6,0x4020000000000000);
  *(ID *)(puVar3 + 0x20) = IVar6;
  IVar6 = objc_stub::heightAnchor(self);
  IVar6 = objc_stub::constraintEqualToConstant_(IVar6,0x4020000000000000);
  *(ID *)(puVar3 + 0x28) = IVar6;
  puVar4 = &DAT_100fb7ad0;
  FUN_1000037f0(&DAT_100fb7ad0,&DAT_100c36620);
  _swift_initStackObject();
  *(undefined8 *)(puVar4 + 0x18) = 8;
  *(undefined8 *)(puVar4 + 0x10) = 4;
  puVar2 = &DAT_100fb7050;
  FUN_1000037f0(&DAT_100fb7050,&DAT_100c366b0);
  *(undefined **)(puVar4 + 0x38) = puVar2;
  *(undefined ***)(puVar4 + 0x40) = &PTR_PTR_100ec00b8;
  *(undefined **)(puVar4 + 0x20) = puVar5;
  *(undefined **)(puVar4 + 0x60) = puVar2;
  *(undefined ***)(puVar4 + 0x68) = &PTR_PTR_100ec00b8;
  *(ID *)(puVar4 + 0x48) = IVar1;
  uVar8 = 0;
  FUN_10000ec2c(0,&DAT_100fb7ae0,&PTR__OBJC_CLASS___NSLayoutConstraint_100f8d660);
  *(undefined8 *)(puVar4 + 0x88) = uVar8;
  *(undefined ***)(puVar4 + 0x90) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar4 + 0x70) = IVar7;
  *(undefined **)(puVar4 + 0xb0) = puVar2;
  *(undefined ***)(puVar4 + 0xb8) = &PTR_PTR_100ec00b8;
  *(undefined **)(puVar4 + 0x98) = puVar3;
  puVar5 = puVar4;
  thunk_FUN_1001f9238(puVar4);
  _swift_setDeallocating(puVar4);
  puVar3 = &DAT_100fb6f00;
  FUN_1000037f0(&DAT_100fb6f00,&DAT_100c36de0);
  _swift_arrayDestroy(puVar4 + 0x20,4,puVar3);
  return puVar5;
}



/* Address: 0x10023e548 | FUN_10023e548 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_10023e548(_ArrayBuffer param_1)

{
  _CocoaArrayWrapper _Var1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong local_90 [3];
  undefined8 local_78;
  undefined **ppuStack_70;
  undefined *local_68;
  
  if ((ulong)param_1.unknown >> 0x3e == 0) {
    uVar6 = *(ulong *)(((ulong)param_1.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = param_1.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < param_1.unknown) {
      _Var1.unknown = param_1.unknown;
    }
    uVar6 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  puVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar6 != 0) {
    local_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_10022ff70(0,uVar6 & ((long)uVar6 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10023e720);
      (*pcVar2)();
    }
    puVar7 = local_68;
    if (((ulong)param_1.unknown & 0xc000000000000001) == 0) {
      puVar9 = (ulong *)(param_1.unknown + 0x20);
      do {
        uVar5 = *puVar9;
        uVar8 = *(ulong *)(puVar7 + 0x10);
        local_68 = puVar7;
        if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar8) {
          FUN_10022ff70(1 < *(ulong *)(puVar7 + 0x18),uVar8 + 1,1);
        }
        puVar7 = local_68;
        uVar4 = 0;
        FUN_10000ec2c(0,&DAT_100fb7ae0,&PTR__OBJC_CLASS___NSLayoutConstraint_100f8d660);
        ppuStack_70 = &PTR_PTR_100ec00a8;
        *(ulong *)(puVar7 + 0x10) = uVar8 + 1;
        local_90[0] = uVar5;
        local_78 = uVar4;
        FUN_100076508(local_90,puVar7 + uVar8 * 0x28 + 0x20);
        uVar6 = uVar6 - 1;
        puVar9 = puVar9 + 1;
      } while (uVar6 != 0);
    }
    else {
      uVar8 = 0;
      do {
        uVar3 = uVar8;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar8,param_1);
        uVar5 = *(ulong *)(puVar7 + 0x10);
        local_68 = puVar7;
        if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar5) {
          FUN_10022ff70(1 < *(ulong *)(puVar7 + 0x18),uVar5 + 1,1);
        }
        puVar7 = local_68;
        uVar8 = uVar8 + 1;
        uVar4 = 0;
        FUN_10000ec2c(0,&DAT_100fb7ae0,&PTR__OBJC_CLASS___NSLayoutConstraint_100f8d660);
        ppuStack_70 = &PTR_PTR_100ec00a8;
        *(ulong *)(puVar7 + 0x10) = uVar5 + 1;
        local_90[0] = uVar3;
        local_78 = uVar4;
        FUN_100076508(local_90,puVar7 + uVar5 * 0x28 + 0x20);
      } while (uVar6 != uVar8);
    }
  }
  return puVar7;
}



/* Address: 0x10023e720 | _TtC7PasteUI13ToolbarButton::initWithCoder: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC7PasteUI13ToolbarButton::initWithCoder_(ID param_1,SEL param_2,ID param_3)

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
              ("PasteUI/ToolbarButton.macOS.swift",0x21,1,0x67,UVar4.unknown,puVar3);
  }
  FUN_1002402c8();
  _swift_release(pMVar2);
  return param_3;
}



/* Address: 0x10023e7e8 | FUN_10023e7e8 */

void FUN_10023e7e8(void)

{
  FUN_10023eedc(&PTR_s_updateLayer_100f858a0);
  return;
}



/* Address: 0x10023e7f4 | _TtC7PasteUI13ToolbarButton::updateLayer */

/* Function Stack Size: 0x10 bytes */

void _TtC7PasteUI13ToolbarButton::updateLayer(ID param_1,SEL param_2)

{
  FUN_10023ef2c(param_1,param_2,0x6b,&PTR_s_updateLayer_100f858a0);
  return;
}



/* Address: 0x10023e804 | FUN_10023e804 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_10023e804(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  
  _swift_getObjectType();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffa0,"updateTrackingAreas");
  lVar1 = _TtC7PasteUI13ToolbarButton::trackingArea;
  if (*(long *)(unaff_x20 + _TtC7PasteUI13ToolbarButton::trackingArea) != 0) {
    objc_stub::removeTrackingArea_(unaff_x20);
  }
  objc_stub::bounds(unaff_x20);
  self = &_OBJC_CLASS___NSTrackingArea;
  _objc_allocWithZone();
  IVar4 = objc_stub::initWithRect_options_owner_userInfo_
                    ((ID)self,extraout_d0,param_2,param_3,param_4,0x481);
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
    *(undefined1 *)(unaff_x20 + _TtC7PasteUI13ToolbarButton::isHovered) = uVar3;
    FUN_10023d784();
    *(undefined1 *)(unaff_x20 + _TtC7PasteUI13ToolbarButton::isPressed) = 0;
    FUN_10023d784();
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10023e970);
  (*pcVar2)();
}



/* Address: 0x10023e970 | _TtC7PasteUI13ToolbarButton::updateTrackingAreas */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC7PasteUI13ToolbarButton::updateTrackingAreas(ID param_1,SEL param_2)

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
              ("PasteUI/ToolbarButton.macOS.swift",0x21,1,0x70,UVar4.unknown,puVar3);
  }
  FUN_10023e804(param_1);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x10023ea30 | FUN_10023ea30 */

void FUN_10023ea30(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_getObjectType();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffd0,"mouseEntered:",param_1);
  *(undefined1 *)(unaff_x20 + _TtC7PasteUI13ToolbarButton::isHovered) = 1;
  FUN_10023d784();
  return;
}



/* Address: 0x10023ea88 | _TtC7PasteUI13ToolbarButton::mouseEntered: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC7PasteUI13ToolbarButton::mouseEntered_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  class_t *pcVar2;
  MainActor *pMVar3;
  undefined8 *puVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  objc_super local_60;
  
  pcVar2 = (class_t *)param_1;
  _swift_getObjectType();
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
              ("PasteUI/ToolbarButton.macOS.swift",0x21,1,0x80,UVar5.unknown,puVar4);
  }
  local_60.receiver = param_1;
  local_60.super_class = pcVar2;
  _objc_msgSendSuper2(&local_60,"mouseEntered:",param_3);
  *(undefined1 *)(param_1 + isHovered) = 1;
  FUN_10023d784();
  _swift_release(pMVar3);
  return;
}



/* Address: 0x10023ebac | FUN_10023ebac */

void FUN_10023ebac(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_getObjectType();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffd0,"mouseExited:",param_1);
  *(undefined1 *)(unaff_x20 + _TtC7PasteUI13ToolbarButton::isHovered) = 0;
  FUN_10023d784();
  *(undefined1 *)(unaff_x20 + _TtC7PasteUI13ToolbarButton::isPressed) = 0;
  FUN_10023d784();
  return;
}



/* Address: 0x10023ec10 | _TtC7PasteUI13ToolbarButton::mouseExited: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC7PasteUI13ToolbarButton::mouseExited_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  class_t *pcVar2;
  MainActor *pMVar3;
  undefined8 *puVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  objc_super local_60;
  
  pcVar2 = (class_t *)param_1;
  _swift_getObjectType();
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
              ("PasteUI/ToolbarButton.macOS.swift",0x21,1,0x85,UVar5.unknown,puVar4);
  }
  local_60.receiver = param_1;
  local_60.super_class = pcVar2;
  _objc_msgSendSuper2(&local_60,"mouseExited:",param_3);
  *(undefined1 *)(param_1 + isHovered) = 0;
  FUN_10023d784();
  *(undefined1 *)(param_1 + isPressed) = 0;
  FUN_10023d784();
  _swift_release(pMVar3);
  return;
}



/* Address: 0x10023ed40 | FUN_10023ed40 */

void FUN_10023ed40(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  _swift_getObjectType();
  lVar1 = _TtC7PasteUI13ToolbarButton::isPressed;
  *(undefined1 *)(unaff_x20 + _TtC7PasteUI13ToolbarButton::isPressed) = 1;
  FUN_10023d784();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffc0,"mouseDown:",param_1);
  *(undefined1 *)(unaff_x20 + lVar1) = 0;
  FUN_10023d784();
  return;
}



/* Address: 0x10023edac | _TtC7PasteUI13ToolbarButton::mouseDown: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC7PasteUI13ToolbarButton::mouseDown_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  long lVar2;
  class_t *pcVar3;
  MainActor *pMVar4;
  undefined8 *puVar5;
  UnownedSerialExecutor UVar6;
  UnownedSerialExecutor UVar7;
  objc_super local_60;
  
  pcVar3 = (class_t *)param_1;
  _swift_getObjectType();
  pMVar4 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar4 = Swift::MainActor::get_shared(pMVar4,pMVar4);
  puVar5 = &DAT_100fb6f30;
  FUN_100003a00(&DAT_100fb6f30,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar6 = Swift::Actor::get_unownedExecutor();
  UVar7 = UVar6;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar7.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/ToolbarButton.macOS.swift",0x21,1,0x8b,UVar6.unknown,puVar5);
  }
  lVar2 = isPressed;
  *(undefined1 *)(param_1 + isPressed) = 1;
  FUN_10023d784();
  local_60.receiver = param_1;
  local_60.super_class = pcVar3;
  _objc_msgSendSuper2(&local_60,"mouseDown:",param_3);
  *(undefined1 *)(param_1 + lVar2) = 0;
  FUN_10023d784();
  _swift_release(pMVar4);
  return;
}



/* Address: 0x10023eed0 | FUN_10023eed0 */

void FUN_10023eed0(void)

{
  FUN_10023eedc(&PTR_s_viewDidChangeEffectiveAppearance_100f858a8);
  return;
}



/* Address: 0x10023eedc | FUN_10023eedc */

void FUN_10023eedc(undefined8 *param_1)

{
  _swift_getObjectType();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffd0,(SEL)*param_1);
  FUN_10023d784();
  return;
}



/* Address: 0x10023ef1c | _TtC7PasteUI13ToolbarButton::viewDidChangeEffectiveAppearance */

/* Function Stack Size: 0x10 bytes */

void _TtC7PasteUI13ToolbarButton::viewDidChangeEffectiveAppearance(ID param_1,SEL param_2)

{
  FUN_10023ef2c(param_1,param_2,0x93,&PTR_s_viewDidChangeEffectiveAppearance_100f858a8);
  return;
}



/* Address: 0x10023ef2c | FUN_10023ef2c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10023ef2c(class_t *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined *puVar1;
  class_t *pcVar2;
  MainActor *pMVar3;
  undefined8 *puVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  objc_super local_60;
  
  pcVar2 = param_1;
  _swift_getObjectType();
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
              ("PasteUI/ToolbarButton.macOS.swift",0x21,1,param_3,UVar5.unknown,puVar4);
  }
  local_60.receiver = (ID)param_1;
  local_60.super_class = pcVar2;
  _objc_msgSendSuper2(&local_60,(SEL)*param_4);
  FUN_10023d784();
  _swift_release(pMVar3);
  return 0;
}



/* Address: 0x10023f028 | _TtC7PasteUI13ToolbarButton::initWithFrame: */

/* Function Stack Size: 0x30 bytes */

ID _TtC7PasteUI13ToolbarButton::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

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
  puVar3 = &DAT_100fb6f30;
  FUN_100003a00(&DAT_100fb6f30,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/ToolbarButton.macOS.swift",0x21,1,6,UVar4.unknown,puVar3);
  }
  __swift_stdlib_reportUnimplementedInitializer("PasteUI.ToolbarButton",0x15,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10023f0d0);
  (*pcVar2)();
}



/* Address: 0x10023f0d0 | _TtC7PasteUI13ToolbarButton::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC7PasteUI13ToolbarButton::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + symbol + 8));
  _swift_release(*(undefined8 *)(param_1 + buttonAction + 8));
  return;
}



/* Address: 0x10023f160 | _TtC7PasteUI13ToolbarButton::performAction */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC7PasteUI13ToolbarButton::performAction(ID param_1,SEL param_2)

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
              ("PasteUI/ToolbarButton.macOS.swift",0x21,1,0x9a,UVar4.unknown,puVar3);
  }
  (**(code **)(param_1 + buttonAction))(param_1);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x10023f230 | FUN_10023f230 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10023f230(class_t *param_1)

{
  undefined *puVar1;
  long lVar2;
  byte bVar3;
  class_t *pcVar4;
  MainActor *pMVar5;
  undefined8 *puVar6;
  UnownedSerialExecutor UVar7;
  UnownedSerialExecutor UVar8;
  ID IVar9;
  ID IVar10;
  void *pvVar11;
  ID *pIVar12;
  ulong uVar13;
  String SVar14;
  objc_super local_118;
  objc_super local_108;
  objc_super local_f8;
  objc_super local_e8;
  undefined1 auStack_d8 [24];
  objc_super local_c0;
  objc_super local_b0;
  objc_super local_a0;
  objc_super local_90;
  undefined1 auStack_80 [32];
  
  pcVar4 = param_1;
  _swift_getObjectType();
  pMVar5 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar5 = Swift::MainActor::get_shared(pMVar5,pMVar5);
  puVar6 = &DAT_100fb6f30;
  FUN_100003a00(&DAT_100fb6f30,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar7 = Swift::Actor::get_unownedExecutor();
  UVar8 = UVar7;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar8.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/ToolbarButton.macOS.swift",0x21,1,0xc0,UVar7.unknown,puVar6);
  }
  lVar2 = _TtC7PasteUI13ToolbarButton::isPrimary;
  _swift_beginAccess((long)&param_1->isa + _TtC7PasteUI13ToolbarButton::isPrimary,auStack_80,0,0);
  if (*(char *)((long)&param_1->isa + lVar2) == '\x01') {
    local_108.receiver = (ID)param_1;
    local_108.super_class = pcVar4;
    IVar9 = _objc_msgSendSuper2(&local_108,"isEnabled");
    if ((int)IVar9 == 0) {
      uVar13 = 3;
    }
    else {
      uVar13 = (ulong)*(byte *)((long)&param_1->isa + _TtC7PasteUI13ToolbarButton::isPressed);
    }
    IVar9 = NSColor::controlAccentColor((ID)&_OBJC_CLASS___NSColor);
    IVar9 = NSColor::colorWithSystemEffect_(IVar9,uVar13);
    IVar10 = objc_stub::layer((ID)param_1);
    if (IVar10 != 0) {
      IVar9 = NSColor::CGColor(IVar9);
      objc_stub::setBackgroundColor_(IVar10,IVar9);
    }
    IVar9 = NSColor::whiteColor((ID)&_OBJC_CLASS___NSColor);
    IVar10 = NSColor::colorWithSystemEffect_(IVar9,uVar13);
    IVar9 = 0;
    FUN_10023deb4();
    objc_stub::setTextColor_(IVar9,IVar10);
    FUN_1000f65ec(IVar10);
    FUN_10023cc80();
    local_118.receiver = (ID)param_1;
    local_118.super_class = pcVar4;
    IVar9 = _objc_msgSendSuper2(&local_118,"contentTintColor");
    if (IVar9 == 0) {
      IVar9 = IVar10;
    }
    FUN_1000f65ec(IVar9);
    _swift_release(pMVar5);
    return;
  }
  IVar9 = NSColor::clearColor((ID)&_OBJC_CLASS___NSColor);
  IVar10 = objc_stub::layer((ID)param_1);
  if (IVar10 != 0) {
    IVar9 = NSColor::CGColor(IVar9);
    objc_stub::setBackgroundColor_(IVar10,IVar9);
  }
  if (DAT_100fb63e0 != -1) {
    _swift_once(&DAT_100fb63e0,FUN_1001feab8);
  }
  if (DAT_100fb63e8 != -1) {
    _swift_once(&DAT_100fb63e8,FUN_1001fec34);
  }
  IVar10 = DAT_1010577d0;
  IVar9 = DAT_1010577c8;
  bVar3 = Swift::_stdlib_isOSVersionAtLeast(0x1a,0,0);
  if ((bVar3 & 1) == 0) {
    IVar9 = IVar10;
  }
  IVar10 = IVar9;
  FUN_10023deb4();
  objc_stub::setTextColor_(IVar10,IVar9);
  FUN_1000f65ec(IVar9);
  FUN_10023cc80();
  local_90.receiver = (ID)param_1;
  local_90.super_class = pcVar4;
  IVar10 = _objc_msgSendSuper2(&local_90,"contentTintColor");
  if (IVar10 == 0) {
    IVar10 = IVar9;
  }
  FUN_1000f65ec(IVar10);
  IVar9 = objc_stub::layer((ID)param_1);
  if (IVar9 != 0) {
    local_a0.receiver = (ID)param_1;
    local_a0.super_class = pcVar4;
    _objc_msgSendSuper2(&local_a0,"title");
    SVar14 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    pvVar11 = SVar14.bridgeObject;
    _swift_bridgeObjectRelease(pvVar11);
    uVar13 = (ulong)SVar14.str & 0xffffffffffff;
    if (((ulong)pvVar11 & 0x2000000000000000) != 0) {
      uVar13 = (ulong)pvVar11 >> 0x38 & 0xf;
    }
    if (uVar13 == 0) {
      IVar10 = 0;
    }
    else {
      if (DAT_100fb63f0 != -1) {
        _swift_once(&DAT_100fb63f0,FUN_1001ff12c);
      }
      IVar10 = objc_stub::CGColor(DAT_1010577e8);
    }
    objc_stub::setBorderColor_(IVar9,IVar10);
  }
  local_b0.receiver = (ID)param_1;
  local_b0.super_class = pcVar4;
  IVar9 = _objc_msgSendSuper2(&local_b0,"isEnabled");
  lVar2 = _TtC7PasteUI13ToolbarButton::isSelected;
  if ((IVar9 & 1) == 0) {
    if (DAT_100fb71c8 != -1) {
      _swift_once(&DAT_100fb71c8,FUN_1002199b8);
    }
    IVar9 = objc_stub::colorWithSystemEffect_(DAT_1010578a8,3);
    IVar10 = IVar9;
    FUN_10023deb4();
    objc_stub::setTextColor_(IVar10,IVar9);
    FUN_1000f65ec(IVar9);
    FUN_10023cc80();
    local_c0.receiver = (ID)param_1;
    local_c0.super_class = pcVar4;
    IVar10 = _objc_msgSendSuper2(&local_c0,"contentTintColor");
  }
  else {
    if (*(char *)((long)&param_1->isa + _TtC7PasteUI13ToolbarButton::isPressed) != '\x01') {
      _swift_beginAccess((long)&param_1->isa + _TtC7PasteUI13ToolbarButton::isSelected,auStack_d8,0,
                         0);
      if (*(char *)((long)&param_1->isa + lVar2) == '\x01') {
        if (DAT_100fb6458 != -1) {
          _swift_once(&DAT_100fb6458,FUN_1001fef6c);
        }
        IVar9 = DAT_1010577e0;
        IVar10 = objc_stub::layer((ID)param_1);
        if (IVar10 != 0) {
          IVar9 = objc_stub::CGColor(IVar9);
          objc_stub::setBackgroundColor_(IVar10,IVar9);
        }
        puVar6 = (undefined8 *)0x0;
        if (DAT_100fb7178 != -1) {
          puVar6 = &DAT_100fb7178;
          _swift_once(&DAT_100fb7178,FUN_100218db4);
        }
        IVar9 = DAT_101057860;
        FUN_10023deb4();
        objc_stub::setTextColor_((ID)puVar6,IVar9);
        FUN_1000f65ec(IVar9);
        FUN_10023cc80();
        local_e8.receiver = (ID)param_1;
        local_e8.super_class = pcVar4;
        IVar10 = _objc_msgSendSuper2(&local_e8,"contentTintColor");
        if (IVar10 == 0) {
          IVar10 = IVar9;
        }
        FUN_1000f65ec(IVar10);
        _swift_release(pMVar5);
        return;
      }
      if (*(char *)((long)&param_1->isa + _TtC7PasteUI13ToolbarButton::isHovered) == '\x01') {
        if (DAT_100fb63f0 != -1) {
          _swift_once(&DAT_100fb63f0,FUN_1001ff12c);
        }
        IVar9 = DAT_1010577e8;
        IVar10 = objc_stub::layer((ID)param_1);
        if (IVar10 != 0) {
          IVar9 = objc_stub::CGColor(IVar9);
          objc_stub::setBackgroundColor_(IVar10,IVar9);
          _swift_release(pMVar5);
          return;
        }
      }
      _swift_release(pMVar5);
      return;
    }
    if (DAT_100fb6458 != -1) {
      _swift_once(&DAT_100fb6458,FUN_1001fef6c);
    }
    IVar9 = objc_stub::colorWithAlphaComponent_(DAT_1010577e0,0x3fc3333333333333);
    IVar10 = objc_stub::layer((ID)param_1);
    if (IVar10 != 0) {
      IVar9 = objc_stub::CGColor(IVar9);
      objc_stub::setBackgroundColor_(IVar10,IVar9);
    }
    lVar2 = _TtC7PasteUI13ToolbarButton::isSelected;
    _swift_beginAccess((long)&param_1->isa + _TtC7PasteUI13ToolbarButton::isSelected,auStack_d8,0,0)
    ;
    if (*(char *)((long)&param_1->isa + lVar2) == '\x01') {
      if (DAT_100fb71c8 != -1) {
        _swift_once(&DAT_100fb71c8,FUN_1002199b8);
      }
      pIVar12 = &DAT_1010578a8;
    }
    else {
      if (DAT_100fb7178 != -1) {
        _swift_once(&DAT_100fb7178,FUN_100218db4);
      }
      pIVar12 = &DAT_101057860;
    }
    IVar9 = *pIVar12;
    IVar10 = IVar9;
    FUN_10023deb4();
    objc_stub::setTextColor_(IVar10,IVar9);
    FUN_1000f65ec(IVar9);
    FUN_10023cc80();
    local_f8.receiver = (ID)param_1;
    local_f8.super_class = pcVar4;
    IVar10 = _objc_msgSendSuper2(&local_f8,"contentTintColor");
  }
  if (IVar10 == 0) {
    IVar10 = IVar9;
  }
  FUN_1000f65ec(IVar10);
  _swift_release(pMVar5);
  return;
}



/* Address: 0x10023fb74 | FUN_10023fb74 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_10023fb74(double param_1,ID param_2,ID param_3)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  
  puVar1 = &DAT_100fb7040;
  FUN_1000037f0(&DAT_100fb7040,&DAT_100c34f70);
  _swift_allocObject();
  *(undefined8 *)(puVar1 + 0x18) = 5;
  *(undefined8 *)(puVar1 + 0x10) = 2;
  IVar2 = objc_stub::leadingAnchor(param_3);
  IVar3 = objc_stub::leadingAnchor(param_2);
  IVar2 = objc_stub::constraintEqualToAnchor_constant_(IVar2,param_1,IVar3);
  *(ID *)(puVar1 + 0x20) = IVar2;
  IVar2 = objc_stub::trailingAnchor(param_3);
  IVar3 = objc_stub::trailingAnchor(param_2);
  IVar2 = objc_stub::constraintEqualToAnchor_constant_(IVar2,-param_1,IVar3);
  *(ID *)(puVar1 + 0x28) = IVar2;
  return puVar1;
}



/* Address: 0x10023fc94 | FUN_10023fc94 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

ID FUN_10023fc94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                char *param_5,char *param_6,char param_7,undefined8 param_8,long param_9,
                byte param_10,undefined4 param_11,undefined8 param_12,undefined8 param_13)

{
  code *pcVar1;
  long lVar2;
  ID IVar3;
  undefined *puVar4;
  undefined8 uVar5;
  NSString *pNVar6;
  _ArrayBuffer _Var7;
  ID IVar8;
  MainActor *pMVar9;
  undefined8 *puVar10;
  UnownedSerialExecutor UVar11;
  UnownedSerialExecutor UVar12;
  NSArray *pNVar13;
  char *pcVar14;
  void *pvVar15;
  long unaff_x20;
  long lVar16;
  ulong uVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  objc_super local_a0;
  undefined1 auStack_80 [32];
  
  lVar16 = 0x2e6e6f7276656863;
  _swift_getObjectType();
  puVar10 = (undefined8 *)(unaff_x20 + _TtC7PasteUI13ToolbarButton::symbol);
  *puVar10 = 0;
  puVar10[1] = 0;
  *(undefined1 *)(unaff_x20 + _TtC7PasteUI13ToolbarButton::hasPullDownArrow) = 0;
  *(undefined1 *)(unaff_x20 + _TtC7PasteUI13ToolbarButton::isPrimary) = 0;
  *(undefined1 *)(unaff_x20 + _TtC7PasteUI13ToolbarButton::isSelected) = 0;
  *(undefined1 *)(unaff_x20 + _TtC7PasteUI13ToolbarButton::isHovered) = 0;
  *(undefined1 *)(unaff_x20 + _TtC7PasteUI13ToolbarButton::isPressed) = 0;
  *(undefined8 *)(unaff_x20 + _TtC7PasteUI13ToolbarButton::___lazy_storage___iconView) = 0;
  *(undefined8 *)(unaff_x20 + _TtC7PasteUI13ToolbarButton::___lazy_storage___titleLabel) = 0;
  FUN_10000ec2c(0,&DAT_100fb5d30,&PTR__OBJC_CLASS___NSImage_100f8d6b8);
  lVar2 = lVar16;
  FUN_1000f653c(0x2e6e6f7276656863,0xec0000006e776f64);
  if (lVar2 == 0) {
    lVar16 = -0x2fffffffffffffed;
    FUN_1000f653c(0xd000000000000013,0x8000000100d8de20);
    if (lVar16 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100240254);
      (*pcVar1)();
    }
  }
  else {
    FUN_1000f653c(0x2e6e6f7276656863,0xec0000006e776f64);
    if (lVar16 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10023fdb0);
      (*pcVar1)();
    }
  }
  lVar2 = _TtC7PasteUI13ToolbarButton::pullDownArrowView;
  uVar17 = (ulong)param_10;
  IVar3 = NSImageView::imageViewWithImage_((ID)&_OBJC_CLASS___NSImageView,lVar16);
  if (DAT_100fb63e0 != -1) {
    _swift_once(&DAT_100fb63e0,FUN_1001feab8);
  }
  FUN_1000f65ec(DAT_1010577c8);
  *(ID *)(unaff_x20 + lVar2) = IVar3;
  lVar2 = _TtC7PasteUI13ToolbarButton::stackView;
  puVar4 = &_OBJC_CLASS___NSStackView;
  _objc_allocWithZone();
  IVar3 = objc_stub::init((ID)puVar4);
  FUN_1000f668c(0);
  objc_stub::setSpacing_(IVar3,0x4010000000000000);
  objc_stub::setDistribution_(IVar3,2);
  objc_stub::setAlignment_(IVar3,10);
  *(ID *)(unaff_x20 + lVar2) = IVar3;
  *(undefined8 *)(unaff_x20 + _TtC7PasteUI13ToolbarButton::trackingArea) = 0;
  pvVar15 = (void *)0x0;
  _swift_beginAccess(puVar10,auStack_80,1);
  uVar5 = puVar10[1];
  *puVar10 = param_1;
  puVar10[1] = param_2;
  _swift_bridgeObjectRelease(uVar5);
  puVar10 = (undefined8 *)(unaff_x20 + _TtC7PasteUI13ToolbarButton::buttonAction);
  *puVar10 = param_12;
  puVar10[1] = param_13;
  *(byte *)(unaff_x20 + _TtC7PasteUI13ToolbarButton::size) = param_10;
  _swift_retain(param_13);
  IVar3 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff70,"initWithFrame:",0,0,0,0);
  pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_4);
  local_a0.receiver = IVar3;
  _objc_msgSendSuper2(&local_a0,"setTitle:",pNVar6);
  FUN_10023ce40(0);
  objc_stub::setTransparent_(IVar3,1);
  objc_stub::setWantsLayer_(IVar3,1);
  objc_stub::setTarget_(IVar3,IVar3);
  objc_stub::setAction_(IVar3,"performAction");
  _Var7.unknown = &DAT_100fb7040;
  FUN_1000037f0(&DAT_100fb7040,&DAT_100c34f70);
  _swift_initStackObject();
  *(undefined8 *)(_Var7.unknown + 0x18) = 3;
  *(undefined8 *)(_Var7.unknown + 0x10) = 1;
  IVar8 = *(ID *)(IVar3 + _TtC7PasteUI13ToolbarButton::stackView);
  *(ID *)(_Var7.unknown + 0x20) = IVar8;
  if (((ulong)_Var7.unknown & 0xc000000000000001) != 0) {
    IVar8 = 0;
    Swift::_ArrayBuffer::__getElementSlowPath(0,_Var7);
  }
  pMVar9 = Swift::MainActor::typeMetadataAccessor();
  puVar4 = PTR_typeMetadataAccessor_100eaec10;
  pMVar9 = Swift::MainActor::get_shared(pMVar9,pMVar9);
  puVar10 = &DAT_100fb6f30;
  FUN_100003a00(&DAT_100fb6f30,puVar4,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar11 = Swift::Actor::get_unownedExecutor();
  UVar12 = UVar11;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar12.unknown & 1) == 0) {
    pvVar15 = (void *)0x15;
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/NSView+LayoutBuilder.swift",0x22,1,0x15,UVar11.unknown,puVar10);
  }
  objc_stub::addSubview_(IVar3,IVar8);
  objc_stub::setTranslatesAutoresizingMaskIntoConstraints_(IVar8,0);
  _swift_release(pMVar9);
  FUN_10023e080(uVar17,IVar3);
  FUN_10000ec2c(0,&DAT_100fb7ae0,&PTR__OBJC_CLASS___NSLayoutConstraint_100f8d660);
  pNVar13 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  NSLayoutConstraint::activateConstraints_((ID)&_OBJC_CLASS___NSLayoutConstraint,pNVar13);
  _swift_bridgeObjectRelease(uVar17);
  _swift_setDeallocating(_Var7.unknown);
  uVar5 = *(undefined8 *)(_Var7.unknown + 0x10);
  _swift_arrayDestroy(_Var7.unknown + 0x20,uVar5,
                      PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8);
  if (param_7 == '\x01') {
    if (param_9 != 0) goto LAB_1002401c8;
    pNVar6 = (NSString *)0x0;
  }
  else {
    FUN_1001e8098(param_5);
    pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(uVar5);
    objc_stub::setKeyEquivalent_(IVar3,pNVar6);
    pcVar14 = param_6;
    IVar8 = objc_stub::setKeyEquivalentModifierMask_(IVar3);
    if (param_9 == 0) goto LAB_1002401f8;
    SVar18.bridgeObject = &SUB_e200000000000000;
    SVar18.str = (char *)0x2820;
    SVar21.bridgeObject = pvVar15;
    SVar21.str = pcVar14;
    Swift::String::append(SVar18,SVar21);
    FUN_1001e9cc8();
    SVar19.bridgeObject = param_6;
    SVar19.str = param_5;
    SVar22.bridgeObject = pvVar15;
    SVar22.str = pcVar14;
    Swift::String::append(SVar19,SVar22);
    _swift_bridgeObjectRelease(param_6);
    SVar20.bridgeObject = (void *)0xe100000000000000;
    SVar20.str = (char *)0x29;
    SVar23.bridgeObject = pvVar15;
    SVar23.str = pcVar14;
    Swift::String::append(SVar20,SVar23);
LAB_1002401c8:
    pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(param_9);
  }
  objc_stub::setToolTip_(IVar3,pNVar6);
  IVar8 = 0;
LAB_1002401f8:
  FUN_10023ce40(IVar8);
  FUN_10023d784();
  return IVar3;
}



/* Address: 0x100240254 | thunk_FUN_100240258 */

void thunk_FUN_100240258(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb7c08 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c37148;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c37148,&DAT_100ec36c0);
  DAT_100fb7c08 = pTVar1;
  return;
}



/* Address: 0x100240258 | FUN_100240258 */

void FUN_100240258(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb7c08 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c37148;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c37148,&DAT_100ec36c0);
  DAT_100fb7c08 = pTVar1;
  return;
}



/* Address: 0x100240298 | FUN_100240298 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100240298(void)

{
  return ZEXT816(0x100f972e0);
}



/* Address: 0x1002402b8 | FUN_1002402b8 */

undefined1  [16] FUN_1002402b8(void)

{
  return ZEXT816(0x100ec36c0);
}



/* Address: 0x1002402c8 | FUN_1002402c8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1002402c8(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  ID IVar4;
  undefined *self;
  long unaff_x20;
  long lVar5;
  String SVar6;
  
  lVar5 = 0x2e6e6f7276656863;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC7PasteUI13ToolbarButton::symbol);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(unaff_x20 + _TtC7PasteUI13ToolbarButton::hasPullDownArrow) = 0;
  *(undefined1 *)(unaff_x20 + _TtC7PasteUI13ToolbarButton::isPrimary) = 0;
  *(undefined1 *)(unaff_x20 + _TtC7PasteUI13ToolbarButton::isSelected) = 0;
  *(undefined1 *)(unaff_x20 + _TtC7PasteUI13ToolbarButton::isHovered) = 0;
  *(undefined1 *)(unaff_x20 + _TtC7PasteUI13ToolbarButton::isPressed) = 0;
  *(undefined8 *)(unaff_x20 + _TtC7PasteUI13ToolbarButton::___lazy_storage___iconView) = 0;
  *(undefined8 *)(unaff_x20 + _TtC7PasteUI13ToolbarButton::___lazy_storage___titleLabel) = 0;
  FUN_10000ec2c(0,&DAT_100fb5d30,&PTR__OBJC_CLASS___NSImage_100f8d6b8);
  lVar3 = lVar5;
  FUN_1000f653c(0x2e6e6f7276656863,0xec0000006e776f64);
  if (lVar3 == 0) {
    lVar5 = -0x2fffffffffffffed;
    FUN_1000f653c(0xd000000000000013,0x8000000100d8de20);
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1002403b0);
      (*pcVar2)();
    }
  }
  else {
    FUN_1000f653c(0x2e6e6f7276656863,0xec0000006e776f64);
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1002403c8);
      (*pcVar2)();
    }
  }
  lVar3 = _TtC7PasteUI13ToolbarButton::pullDownArrowView;
  IVar4 = NSImageView::imageViewWithImage_((ID)&_OBJC_CLASS___NSImageView,lVar5);
  if (DAT_100fb63e0 != -1) {
    _swift_once(&DAT_100fb63e0,FUN_1001feab8);
  }
  FUN_1000f65ec(DAT_1010577c8);
  *(ID *)(unaff_x20 + lVar3) = IVar4;
  lVar3 = _TtC7PasteUI13ToolbarButton::stackView;
  self = &_OBJC_CLASS___NSStackView;
  _objc_allocWithZone();
  IVar4 = objc_stub::init((ID)self);
  FUN_1000f668c(0);
  objc_stub::setSpacing_(IVar4,0x4010000000000000);
  objc_stub::setDistribution_(IVar4,2);
  objc_stub::setAlignment_(IVar4,10);
  *(ID *)(unaff_x20 + lVar3) = IVar4;
  *(undefined8 *)(unaff_x20 + _TtC7PasteUI13ToolbarButton::trackingArea) = 0;
  SVar6.bridgeObject = (void *)0x2;
  SVar6.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar6,(StaticString)0xd000000000000025,0x8000000100d8dc00,
             0xd9ec50);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1002404e8);
  (*pcVar2)();
}



/* Address: 0x1002404e8 | FUN_1002404e8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002404e8(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x10024050c | FUN_10024050c */

void FUN_10024050c(void)

{
  long unaff_x20;
  
  FUN_10023f230(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100240514 | FUN_100240514 */

void FUN_100240514(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x100240524 | FUN_100240524 */

void FUN_100240524(long param_1,long param_2)

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



/* Address: 0x100240538 | FUN_100240538 */

void FUN_100240538(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x100240540 | thunk_FUN_10023d778 */

void thunk_FUN_10023d778(undefined8 param_1,undefined8 param_2)

{
  FUN_10023db40(param_1,param_2,FUN_10023ce40);
  return;
}



/* Address: 0x100240544 | thunk_FUN_10023db34 */

void thunk_FUN_10023db34(undefined8 param_1,undefined8 param_2)

{
  FUN_10023db40(param_1,param_2,FUN_10023d784);
  return;
}



/* Address: 0x100240548 | FUN_100240548 */

void FUN_100240548(void)

{
  return;
}



/* Address: 0x100240550 | FUN_100240550 */

void FUN_100240550(void)

{
  undefined *self;
  
  self = &_OBJC_CLASS___NSVisualEffectView;
  _objc_allocWithZone();
  objc_stub::init((ID)self);
  return;
}



/* Address: 0x10024056c | FUN_10024056c */

void FUN_10024056c(ID param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,uint param_6)

{
  objc_stub::setMaterial_(param_1);
  objc_stub::setBlendingMode_(param_1,param_4);
  objc_stub::setState_(param_1,param_5);
  objc_stub::setEmphasized_(param_1,(ulong)(param_6 & 1));
  return;
}



/* Address: 0x1002405c0 | thunk_FUN_1002405c4 */

void thunk_FUN_1002405c4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb7c68 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c37260;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c37260,&DAT_100ec37e8);
  DAT_100fb7c68 = pTVar1;
  return;
}



/* Address: 0x1002405c4 | FUN_1002405c4 */

void FUN_1002405c4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb7c68 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c37260;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c37260,&DAT_100ec37e8);
  DAT_100fb7c68 = pTVar1;
  return;
}



/* Address: 0x100240604 | FUN_100240604 */

void FUN_100240604(ID param_1)

{
  undefined8 uVar1;
  byte bVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  
  uVar1 = unaff_x20[1];
  uVar3 = unaff_x20[2];
  bVar2 = *(byte *)(unaff_x20 + 3);
  objc_stub::setMaterial_(param_1,*unaff_x20);
  objc_stub::setBlendingMode_(param_1,uVar1);
  objc_stub::setState_(param_1,uVar3);
  objc_stub::setEmphasized_(param_1,(ulong)bVar2);
  return;
}



/* Address: 0x100240658 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::(extension_SwiftUI)::SwiftUI::NSViewRepresentable::$dismantleNSView */

void (extension_SwiftUI)::SwiftUI::NSViewRepresentable::_dismantleNSView(void)

{
  _dismantleNSView();
  return;
}



/* Address: 0x10024065c | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::(extension_SwiftUI)::SwiftUI::NSViewRepresentable::$makeCoordinator */

void (extension_SwiftUI)::SwiftUI::NSViewRepresentable::_makeCoordinator(void)

{
  _makeCoordinator();
  return;
}



/* Address: 0x100240660 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::(extension_SwiftUI)::SwiftUI::NSViewRepresentable::$_identifiedViewTree */

_IdentifiedViewTree (extension_SwiftUI)::SwiftUI::NSViewRepresentable::__identifiedViewTree(void)

{
  _IdentifiedViewTree _Var1;
  
  _Var1 = __identifiedViewTree();
  return (_IdentifiedViewTree)_Var1.value;
}



/* Address: 0x100240664 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::(extension_SwiftUI)::SwiftUI::NSViewRepresentable::$sizeThatFits */

void (extension_SwiftUI)::SwiftUI::NSViewRepresentable::_sizeThatFits
               (ProposedViewSize param_1,NSViewRepresentableContext<undefined> nsView)

{
  _sizeThatFits(param_1,nsView);
  return;
}



/* Address: 0x100240668 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::(extension_SwiftUI)::SwiftUI::NSViewRepresentable::$_overrideSizeThatFits */

void (extension_SwiftUI)::SwiftUI::NSViewRepresentable::__overrideSizeThatFits
               (CGSize param_1,_ProposedSize in)

{
  __overrideSizeThatFits(param_1,in);
  return;
}



/* Address: 0x10024066c | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::(extension_SwiftUI)::SwiftUI::NSViewRepresentable::$_overrideLayoutTraits */

void (extension_SwiftUI)::SwiftUI::NSViewRepresentable::__overrideLayoutTraits
               (_LayoutTraits param_1)

{
  __overrideLayoutTraits(param_1);
  return;
}



/* Address: 0x100240670 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::(extension_SwiftUI)::SwiftUI::NSViewRepresentable::_modifyBridgedViewInputs */

void (extension_SwiftUI)::SwiftUI::NSViewRepresentable::_modifyBridgedViewInputs
               (_ViewInputs param_1)

{
  _modifyBridgedViewInputs(param_1);
  return;
}



/* Address: 0x100240674 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::(extension_SwiftUI)::SwiftUI::NSViewRepresentable::get__invalidatesSizeOnConstraintChanges */

bool (extension_SwiftUI)::SwiftUI::NSViewRepresentable::get__invalidatesSizeOnConstraintChanges
               (void)

{
  bool bVar1;
  
  bVar1 = get__invalidatesSizeOnConstraintChanges();
  return bVar1;
}



/* Address: 0x100240678 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::(extension_SwiftUI)::SwiftUI::NSViewRepresentable::$_layoutOptions */

_PlatformViewRepresentableLayoutOptions
(extension_SwiftUI)::SwiftUI::NSViewRepresentable::__layoutOptions(void)

{
  _PlatformViewRepresentableLayoutOptions _Var1;
  
  _Var1 = __layoutOptions();
  return (_PlatformViewRepresentableLayoutOptions)_Var1.unknown;
}



/* Address: 0x10024067c | FUN_10024067c */

undefined * FUN_10024067c(void)

{
  return PTR___protocol_witness_table_for_Swift_Never___SwiftUI_View_in_SwiftUI_100eabb78;
}



/* Address: 0x100240688 | FUN_100240688 */

void FUN_100240688(_GraphValue<undefined> param_1,_ViewInputs param_2)

{
  FUN_1002407f8();
  (extension_SwiftUI)::SwiftUI::NSViewRepresentable::_makeView(param_1,param_2);
  return;
}



/* Address: 0x1002406d8 | FUN_1002406d8 */

void FUN_1002406d8(_GraphValue<undefined> param_1,_ViewListInputs param_2)

{
  FUN_1002407f8();
  (extension_SwiftUI)::SwiftUI::NSViewRepresentable::_makeViewList(param_1,param_2);
  return;
}



/* Address: 0x100240728 | FUN_100240728 */

void FUN_100240728(void)

{
  code *pcVar1;
  
  FUN_1002407f8();
  (extension_SwiftUI)::SwiftUI::NSViewRepresentable::get_body();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10024074c);
  (*pcVar1)();
}


