/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10023b300 | FUN_10023b300 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10023b300(long param_1,ulong param_2)

{
  long lVar1;
  ID self;
  NSString *pNVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  self = *(ID *)(*(long *)(param_1 + 0x10) + _TtC7PasteUI9TextField::___lazy_storage___textField);
  if ((param_2 & 1) == 0) {
    if (lVar1 == 0) {
      pNVar2 = (NSString *)0x0;
    }
    else {
      pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(lVar1);
    }
    objc_stub::setText_(self,pNVar2);
  }
  else {
    if (lVar1 == 0) {
      pNVar2 = (NSString *)0x0;
    }
    else {
      _swift_bridgeObjectRetain(lVar1);
      pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(lVar1);
    }
    objc_stub::setText_(self,pNVar2);
    _swift_bridgeObjectRelease(lVar1);
  }
  return 0;
}



/* Address: 0x10023b3e0 | FUN_10023b3e0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10023b3e0(ID param_1)

{
  ID IVar1;
  
  FUN_10023adf0();
  IVar1 = objc_stub::isEditable(param_1);
  return IVar1;
}



/* Address: 0x10023b414 | FUN_10023b414 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10023b414(ID param_1)

{
  ID self;
  
  self = param_1;
  FUN_10023adf0();
  objc_stub::setEditable_(self,(ulong)((uint)param_1 & 1));
  return 0;
}



/* Address: 0x10023b444 | FUN_10023b444 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_10023b444(undefined8 *param_1)

{
  undefined8 *self;
  ID IVar1;
  undefined8 unaff_x20;
  undefined1 auVar2 [16];
  
  *param_1 = unaff_x20;
  self = param_1;
  FUN_10023adf0();
  IVar1 = objc_stub::isEditable((ID)self);
  *(char *)(param_1 + 1) = (char)IVar1;
  auVar2._8_8_ = param_1 + 1;
  auVar2._0_8_ = FUN_10023b494;
  return auVar2;
}



/* Address: 0x10023b494 | FUN_10023b494 */

void FUN_10023b494(long *param_1)

{
  objc_stub::setEditable_
            (*(ID *)(*param_1 + _TtC7PasteUI9TextField::___lazy_storage___textField),
             (ulong)*(byte *)(param_1 + 1));
  return;
}



/* Address: 0x10023b4ac | FUN_10023b4ac */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10023b4ac(ID param_1)

{
  ID IVar1;
  
  FUN_10023adf0();
  IVar1 = objc_stub::isEnabled(param_1);
  return IVar1;
}



/* Address: 0x10023b4e0 | FUN_10023b4e0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10023b4e0(ID param_1)

{
  ID self;
  
  self = param_1;
  FUN_10023adf0();
  objc_stub::setEnabled_(self,(ulong)((uint)param_1 & 1));
  return 0;
}



/* Address: 0x10023b510 | FUN_10023b510 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_10023b510(undefined8 *param_1)

{
  undefined8 *self;
  ID IVar1;
  undefined8 unaff_x20;
  undefined1 auVar2 [16];
  
  *param_1 = unaff_x20;
  self = param_1;
  FUN_10023adf0();
  IVar1 = objc_stub::isEnabled((ID)self);
  *(char *)(param_1 + 1) = (char)IVar1;
  auVar2._8_8_ = param_1 + 1;
  auVar2._0_8_ = FUN_10023b560;
  return auVar2;
}



/* Address: 0x10023b560 | FUN_10023b560 */

void FUN_10023b560(long *param_1)

{
  objc_stub::setEnabled_
            (*(ID *)(*param_1 + _TtC7PasteUI9TextField::___lazy_storage___textField),
             (ulong)*(byte *)(param_1 + 1));
  return;
}



/* Address: 0x10023b578 | FUN_10023b578 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

String FUN_10023b578(ID param_1)

{
  ID self;
  String SVar1;
  
  FUN_10023adf0();
  self = objc_stub::placeholderAttributedString(param_1);
  if (self == 0) {
    SVar1 = (String)ZEXT816(0);
  }
  else {
    objc_stub::string(self);
    SVar1 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  return SVar1;
}



/* Address: 0x10023b600 | FUN_10023b600 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined8 FUN_10023b600(ID param_1,long param_2)

{
  ID *pIVar1;
  long lVar2;
  ID self;
  undefined *puVar3;
  long lVar4;
  ID IVar5;
  NSDictionary *pNVar6;
  ulong uVar7;
  long unaff_x20;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  
  self = param_1;
  FUN_10023adf0();
  if (param_2 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar3 = &DAT_100fb7ac0;
    FUN_1000037f0(&DAT_100fb7ac0,&DAT_100c37128);
    lVar4 = 0;
    FUN_100202fc8();
    lVar9 = *(long *)(*(long *)(lVar4 + -8) + 0x48);
    uVar7 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
    uVar11 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
    _swift_allocObject(puVar3,uVar11 + lVar9 * 2,uVar7 | 7);
    *(undefined8 *)(puVar3 + 0x18) = 4;
    *(undefined8 *)(puVar3 + 0x10) = 2;
    lVar2 = _TtC7PasteUI9TextField::___lazy_storage___textField;
    IVar5 = objc_stub::textColor
                      (*(ID *)(unaff_x20 + _TtC7PasteUI9TextField::___lazy_storage___textField));
    if (IVar5 == 0) {
      IVar5 = NSColor::textColor((ID)&_OBJC_CLASS___NSColor);
    }
    else {
      IVar5 = objc_stub::colorWithAlphaComponent_(IVar5,0x3fe3333333333333);
    }
    pIVar1 = (ID *)(puVar3 + uVar11);
    *pIVar1 = IVar5;
    _swift_storeEnumTagMultiPayload(pIVar1,lVar4,1);
    IVar5 = objc_stub::font(*(ID *)(unaff_x20 + lVar2));
    if (IVar5 == 0) {
      uVar10 = *(undefined8 *)PTR__NSFontTextStyleTitle3_100ea90a0;
      puVar8 = PTR___swiftEmptyArrayStorage_100eae0d8;
      FUN_1001f363c(PTR___swiftEmptyArrayStorage_100eae0d8);
      FUN_1001f3e90(0);
      FUN_100003a00(&DAT_100fb5e88,FUN_1001f3e90,&TargetProtocolConformanceDescriptor_100c347e0);
      pNVar6 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(puVar8);
      IVar5 = NSFont::preferredFontForTextStyle_options_((ID)&_OBJC_CLASS___NSFont,uVar10,pNVar6);
    }
    *(ID *)((long)pIVar1 + lVar9) = IVar5;
    _swift_storeEnumTagMultiPayload((undefined *)((long)pIVar1 + lVar9),lVar4,0);
    puVar8 = puVar3;
    FUN_100201eb0(puVar3,param_1,param_2);
    _swift_bridgeObjectRelease(param_2);
    _swift_setDeallocating(puVar3);
    _swift_arrayDestroy(pIVar1,2,lVar4);
    _swift_deallocClassInstance(puVar3,0x20,7);
  }
  objc_stub::setPlaceholderAttributedString_(self,puVar8);
  return 0;
}



/* Address: 0x10023b85c | FUN_10023b85c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_10023b85c(String *param_1)

{
  String *self;
  ID self_00;
  char *unaff_x20;
  String SVar1;
  undefined1 auVar2 [16];
  
  param_1[1].str = unaff_x20;
  self = param_1;
  FUN_10023adf0();
  self_00 = objc_stub::placeholderAttributedString((ID)self);
  if (self_00 == 0) {
    SVar1 = (String)ZEXT816(0);
  }
  else {
    objc_stub::string(self_00);
    SVar1 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  *param_1 = SVar1;
  auVar2._8_8_ = param_1;
  auVar2._0_8_ = FUN_10023b8f4;
  return auVar2;
}



/* Address: 0x10023b8f4 | FUN_10023b8f4 */

void FUN_10023b8f4(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  if ((param_2 & 1) != 0) {
    _swift_bridgeObjectRetain(uVar2);
    FUN_10023b600(uVar1,uVar2);
    _swift_bridgeObjectRelease(uVar2);
    return;
  }
  FUN_10023b600(uVar1,uVar2);
  return;
}



/* Address: 0x10023b954 | FUN_10023b954 */

void FUN_10023b954(ID param_1,undefined8 param_2)

{
  objc_stub::setDelegate_(param_1,param_2);
  objc_stub::setBordered_(param_1,0);
  objc_stub::setEditable_(param_1,0);
  objc_stub::setDrawsBackground_(param_1,0);
  objc_stub::setUsesSingleLineMode_(param_1,1);
  objc_stub::setAllowsExpansionToolTips_(param_1,1);
  objc_stub::setAllowsDefaultTighteningForTruncation_(param_1,1);
  objc_stub::setMaximumNumberOfLines_(param_1,1);
  objc_stub::setLineBreakMode_(param_1,4);
  objc_stub::setTextAlignment_(param_1,4);
  objc_stub::setFocusRingType_(param_1,1);
  return;
}



/* Address: 0x10023b9ec | FUN_10023b9ec */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

ID FUN_10023b9ec(void)

{
  ID self;
  _ArrayBuffer _Var1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  undefined *puVar6;
  undefined *puVar7;
  NSArray *pNVar8;
  ID IVar9;
  long unaff_x20;
  
  _swift_getObjectType();
  puVar3 = (undefined8 *)(unaff_x20 + _TtC7PasteUI9TextField::onDidEndEditing);
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined8 *)(unaff_x20 + _TtC7PasteUI9TextField::___lazy_storage___textField) = 0;
  self = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffa0,"initWithFrame:",0,0,0,0);
  IVar9 = self;
  FUN_10023adf0();
  _Var1.unknown = &DAT_100fb7040;
  FUN_1000037f0(&DAT_100fb7040,&DAT_100c34f70);
  _swift_initStackObject();
  *(undefined8 *)(_Var1.unknown + 0x18) = 3;
  *(undefined8 *)(_Var1.unknown + 0x10) = 1;
  *(ID *)(_Var1.unknown + 0x20) = IVar9;
  if (((ulong)_Var1.unknown & 0xc000000000000001) != 0) {
    IVar9 = 0;
    Swift::_ArrayBuffer::__getElementSlowPath(0,_Var1);
  }
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar6 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fb6f30;
  FUN_100003a00(&DAT_100fb6f30,puVar6,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/NSView+LayoutBuilder.swift",0x22,1,0x15,UVar4.unknown,puVar3);
  }
  objc_stub::addSubview_(self,IVar9);
  objc_stub::setTranslatesAutoresizingMaskIntoConstraints_(IVar9,0);
  _swift_release(pMVar2);
  FUN_10023adf0();
  if (DAT_100fb6230 != -1) {
    _swift_once(&DAT_100fb6230,FUN_1001f9ff4);
  }
  IVar9 = self;
  FUN_100211c08(DAT_101057750,DAT_101057758,DAT_101057760,DAT_101057768,self,pMVar2);
  puVar6 = &DAT_100fb7ad0;
  FUN_1000037f0(&DAT_100fb7ad0,&DAT_100c36620);
  _swift_initStackObject();
  *(undefined8 *)(puVar6 + 0x18) = 2;
  *(undefined8 *)(puVar6 + 0x10) = 1;
  puVar7 = &DAT_100fb7050;
  FUN_1000037f0(&DAT_100fb7050,&DAT_100c366b0);
  *(undefined **)(puVar6 + 0x38) = puVar7;
  *(undefined ***)(puVar6 + 0x40) = &PTR_PTR_100ec00b8;
  *(ID *)(puVar6 + 0x20) = IVar9;
  puVar7 = puVar6;
  thunk_FUN_1001f9238(puVar6);
  _swift_setDeallocating(puVar6);
  FUN_100004594(puVar6 + 0x20);
  FUN_1001f91f4(0);
  pNVar8 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  NSLayoutConstraint::activateConstraints_((ID)&_OBJC_CLASS___NSLayoutConstraint,pNVar8);
  _swift_bridgeObjectRelease(puVar7);
  _swift_setDeallocating(_Var1.unknown);
  _swift_arrayDestroy(_Var1.unknown + 0x20,*(undefined8 *)(_Var1.unknown + 0x10),
                      PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8);
  return self;
}



/* Address: 0x10023bcc8 | _TtC7PasteUI9TextField::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC7PasteUI9TextField::init(ID param_1,SEL param_2)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  char *pcVar5;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fb6f30;
  FUN_100003a00(&DAT_100fb6f30,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  pcVar5 = (char *)UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar5 & 1) == 0) {
    pcVar5 = "PasteUI/TextField.swift";
    _swift_task_reportUnexpectedExecutor("PasteUI/TextField.swift",0x17,1,0x47,UVar4.unknown,puVar3)
    ;
  }
  FUN_10023b9ec();
  _swift_release(pMVar2);
  return (ID)pcVar5;
}



/* Address: 0x10023bd84 | _TtC7PasteUI9TextField::initWithCoder: */

/* Function Stack Size: 0x18 bytes */

ID _TtC7PasteUI9TextField::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  code *pcVar2;
  MainActor *this;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  String SVar6;
  
  this = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  Swift::MainActor::get_shared(this,this);
  puVar3 = &DAT_100fb6f30;
  FUN_100003a00(&DAT_100fb6f30,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor("PasteUI/TextField.swift",0x17,1,0x4d,UVar4.unknown,puVar3)
    ;
  }
  puVar3 = (undefined8 *)(param_1 + onDidEndEditing);
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined8 *)(param_1 + ___lazy_storage___textField) = 0;
  SVar6.bridgeObject = (void *)0x2;
  SVar6.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar6,(StaticString)0xd000000000000025,0x8000000100d8dc00,
             0xd9ec10);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10023be78);
  (*pcVar2)();
}



/* Address: 0x10023be78 | _TtC7PasteUI9TextField::intrinsicContentSize */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

CGSize __thiscall
_TtC7PasteUI9TextField::intrinsicContentSize(_TtC7PasteUI9TextField *this,ID param_1,SEL param_2)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  ID self;
  double extraout_d0;
  double in_d1;
  CGSize CVar6;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fb6f30;
  FUN_100003a00(&DAT_100fb6f30,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor("PasteUI/TextField.swift",0x17,1,0x51,UVar4.unknown,puVar3)
    ;
  }
  self = param_1;
  FUN_10023adf0();
  objc_stub::intrinsicContentSize(self);
  objc_stub::sizeThatFits_(*(ID *)(param_1 + ___lazy_storage___textField),0x7ff0000000000000,in_d1);
  _swift_release(pMVar2);
  CVar6.field0_0x0 = (double)(long)extraout_d0;
  CVar6.field1_0x8 = in_d1;
  return CVar6;
}



/* Address: 0x10023bf80 | FUN_10023bf80 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_10023bf80(undefined8 param_1,undefined8 param_2,ID param_3)

{
  long unaff_x20;
  double extraout_d0;
  undefined1 auVar1 [16];
  
  FUN_10023adf0();
  objc_stub::intrinsicContentSize(param_3);
  objc_stub::sizeThatFits_
            (*(ID *)(unaff_x20 + _TtC7PasteUI9TextField::___lazy_storage___textField),
             0x7ff0000000000000,param_2);
  auVar1._0_8_ = (long)extraout_d0;
  auVar1._8_8_ = param_2;
  return auVar1;
}



/* Address: 0x10023bfdc | FUN_10023bfdc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10023bfdc(ID param_1)

{
  ID IVar1;
  
  FUN_10023adf0();
  IVar1 = objc_stub::abortEditing(param_1);
  FUN_10023c01c(0);
  return IVar1;
}



/* Address: 0x10023c01c | FUN_10023c01c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10023c01c(ID param_1)

{
  ID IVar1;
  NSString *pNVar2;
  ID unaff_x20;
  String SVar3;
  
  FUN_10023adf0();
  IVar1 = objc_stub::text(param_1);
  if (IVar1 == 0) {
    IVar1 = *(ID *)(unaff_x20 + _TtC7PasteUI9TextField::___lazy_storage___textField);
  }
  else {
    SVar3 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    IVar1 = *(ID *)(unaff_x20 + _TtC7PasteUI9TextField::___lazy_storage___textField);
    if (SVar3.bridgeObject != (void *)0x0) {
      pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(SVar3.bridgeObject);
      goto LAB_10023c0b4;
    }
  }
  pNVar2 = (NSString *)0x0;
LAB_10023c0b4:
  objc_stub::setText_(IVar1,pNVar2);
  objc_stub::invalidateIntrinsicContentSize(unaff_x20);
  return;
}



/* Address: 0x10023c0e4 | _TtC7PasteUI9TextField::acceptsFirstResponder */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

bool _TtC7PasteUI9TextField::acceptsFirstResponder(ID param_1,SEL param_2)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  ID IVar6;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fb6f30;
  FUN_100003a00(&DAT_100fb6f30,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor("PasteUI/TextField.swift",0x17,1,0x61,UVar4.unknown,puVar3)
    ;
  }
  FUN_10023adf0();
  IVar6 = objc_stub::acceptsFirstResponder(param_1);
  _swift_release(pMVar2);
  return (bool)IVar6;
}



/* Address: 0x10023c1c0 | FUN_10023c1c0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10023c1c0(ID param_1)

{
  ID IVar1;
  
  FUN_10023adf0();
  IVar1 = objc_stub::acceptsFirstResponder(param_1);
  return IVar1;
}



/* Address: 0x10023c1f4 | FUN_10023c1f4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10023c1f4(ID param_1)

{
  ID IVar1;
  
  FUN_10023adf0();
  IVar1 = objc_stub::resignFirstResponder(param_1);
  return IVar1;
}



/* Address: 0x10023c228 | _TtC7PasteUI9TextField::resignFirstResponder */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

bool _TtC7PasteUI9TextField::resignFirstResponder(ID param_1,SEL param_2)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  ID IVar6;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fb6f30;
  FUN_100003a00(&DAT_100fb6f30,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor("PasteUI/TextField.swift",0x17,1,0x65,UVar4.unknown,puVar3)
    ;
  }
  FUN_10023adf0();
  IVar6 = objc_stub::resignFirstResponder(param_1);
  _swift_release(pMVar2);
  return (bool)IVar6;
}



/* Address: 0x10023c304 | FUN_10023c304 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

ID FUN_10023c304(ID param_1)

{
  long lVar1;
  ID IVar2;
  ID self;
  ID IVar3;
  long unaff_x20;
  
  FUN_10023adf0();
  IVar2 = objc_stub::becomeFirstResponder(param_1);
  lVar1 = _TtC7PasteUI9TextField::___lazy_storage___textField;
  self = objc_stub::currentEditor
                   (*(ID *)(unaff_x20 + _TtC7PasteUI9TextField::___lazy_storage___textField));
  if ((self != 0) && (_swift_dynamicCastObjCClass(self,&_OBJC_CLASS___NSTextView), self != 0)) {
    IVar3 = objc_stub::textColor(*(ID *)(unaff_x20 + lVar1));
    objc_stub::setInsertionPointColor_(self,IVar3);
  }
  return IVar2;
}



/* Address: 0x10023c3bc | _TtC7PasteUI9TextField::becomeFirstResponder */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

bool _TtC7PasteUI9TextField::becomeFirstResponder(ID param_1,SEL param_2)

{
  undefined *puVar1;
  uint uVar2;
  MainActor *pMVar3;
  undefined8 *puVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  
  uVar2 = (uint)param_1;
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  puVar4 = &DAT_100fb6f30;
  FUN_100003a00(&DAT_100fb6f30,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar5 = Swift::Actor::get_unownedExecutor();
  UVar6 = UVar5;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar6.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor("PasteUI/TextField.swift",0x17,1,0x69,UVar5.unknown,puVar4)
    ;
  }
  FUN_10023c304();
  _swift_release(pMVar3);
  return uVar2 & 1;
}



/* Address: 0x10023c488 | _TtC7PasteUI9TextField::initWithFrame: */

/* Function Stack Size: 0x30 bytes */

ID _TtC7PasteUI9TextField::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

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
    _swift_task_reportUnexpectedExecutor("PasteUI/TextField.swift",0x17,1,6,UVar4.unknown,puVar3);
  }
  __swift_stdlib_reportUnimplementedInitializer("PasteUI.TextField",0x11,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10023c530);
  (*pcVar2)();
}



/* Address: 0x10023c530 | _TtC7PasteUI9TextField::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC7PasteUI9TextField::_cxx_destruct(ID param_1,SEL param_2)

{
  FUN_100004550(*(undefined8 *)(param_1 + onDidEndEditing),
                ((undefined8 *)(param_1 + onDidEndEditing))[1]);
  return;
}



/* Address: 0x10023c56c | FUN_10023c56c */

void FUN_10023c56c(void)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _TtC7PasteUI9TextField::onDidEndEditing);
  _swift_beginAccess(puVar1,auStack_48,0,0);
  pcVar3 = (code *)*puVar1;
  if (pcVar3 != (code *)0x0) {
    uVar2 = puVar1[1];
    _swift_retain(uVar2);
    (*pcVar3)();
    FUN_100004550(pcVar3,uVar2);
  }
  return;
}



/* Address: 0x10023c5d8 | _TtC7PasteUI9TextField::controlTextDidEndEditing: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC7PasteUI9TextField::controlTextDidEndEditing_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  char *pcVar2;
  MainActor *pMVar3;
  UnownedSerialExecutor UVar4;
  undefined8 *puVar5;
  char *pcVar6;
  void *pvVar7;
  long extraout_x8;
  undefined8 uVar8;
  code *pcVar9;
  long lVar10;
  Notification NVar11;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  
  NVar11 = Foundation::Notification::typeMetadataAccessor();
  pvVar7 = NVar11.syncInProgress.bridgeObject;
  pcVar2 = NVar11.pastePaused.str;
  lVar10 = *(long *)(pcVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(undefined8 *)(lVar10 + 0x40),pcVar2,NVar11.pastePaused.bridgeObject,
             NVar11.syncInProgress.str);
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  puVar5 = &DAT_100fb6f30;
  pcVar6 = PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18;
  FUN_100003a00(&DAT_100fb6f30,puVar1);
  UVar4 = Swift::Actor::get_unownedExecutor();
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    puVar5 = (undefined8 *)0x17;
    pcVar6 = &DAT_00000001;
    pvVar7 = (void *)0x82;
    _swift_task_reportUnexpectedExecutor("PasteUI/TextField.swift");
  }
  NVar11.pastePaused.bridgeObject = puVar5;
  NVar11.pastePaused.str = (char *)param_3;
  NVar11.syncInProgress.bridgeObject = pvVar7;
  NVar11.syncInProgress.str = pcVar6;
  Foundation::Notification::__unconditionallyBridgeFromObjectiveC(NVar11);
  puVar5 = (undefined8 *)(param_1 + onDidEndEditing);
  _swift_beginAccess(puVar5,auStack_78,0,0);
  pcVar9 = (code *)*puVar5;
  if (pcVar9 == (code *)0x0) {
    (**(code **)(lVar10 + 8))(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),pcVar2);
    _swift_release(pMVar3);
  }
  else {
    uVar8 = puVar5[1];
    FUN_100011128(pcVar9,uVar8);
    (*pcVar9)();
    FUN_100004550(pcVar9,uVar8);
    (**(code **)(lVar10 + 8))(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),pcVar2);
    _swift_release(pMVar3);
  }
  return;
}



/* Address: 0x10023c780 | thunk_FUN_10023c01c */

void thunk_FUN_10023c01c(void)

{
  FUN_10023c01c();
  return;
}



/* Address: 0x10023c784 | _TtC7PasteUI9TextField::controlTextDidChange: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC7PasteUI9TextField::controlTextDidChange_(ID param_1,SEL param_2,ID param_3)

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
  Notification NVar9;
  
  NVar9 = Foundation::Notification::typeMetadataAccessor();
  pvVar7 = NVar9.syncInProgress.bridgeObject;
  pcVar2 = NVar9.pastePaused.str;
  lVar8 = *(long *)(pcVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(undefined8 *)(lVar8 + 0x40),pcVar2,NVar9.pastePaused.bridgeObject,
             NVar9.syncInProgress.str);
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  puVar5 = &DAT_100fb6f30;
  pcVar6 = PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18;
  FUN_100003a00(&DAT_100fb6f30,puVar1);
  UVar4 = Swift::Actor::get_unownedExecutor();
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    puVar5 = (undefined8 *)0x17;
    pcVar6 = &DAT_00000001;
    pvVar7 = (void *)0x86;
    _swift_task_reportUnexpectedExecutor("PasteUI/TextField.swift");
  }
  NVar9.pastePaused.bridgeObject = puVar5;
  NVar9.pastePaused.str = (char *)param_3;
  NVar9.syncInProgress.bridgeObject = pvVar7;
  NVar9.syncInProgress.str = pcVar6;
  NVar9 = Foundation::Notification::__unconditionallyBridgeFromObjectiveC(NVar9);
  FUN_10023c01c(param_1,NVar9.pastePaused.bridgeObject,NVar9.syncInProgress.str,
                NVar9.syncInProgress.bridgeObject);
  (**(code **)(lVar8 + 8))
            (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),pcVar2);
  _swift_release(pMVar3);
  return;
}



/* Address: 0x10023c8b4 | FUN_10023c8b4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10023c8b4(void)

{
  return ZEXT816(0x100f97220);
}



/* Address: 0x10023c8d4 | FUN_10023c8d4 */

void FUN_10023c8d4(undefined8 param_1)

{
  FUN_10023da1c(param_1,&_TtC7PasteUI13ToolbarButton::isSelected,FUN_10023d784);
  return;
}



/* Address: 0x10023c8e8 | FUN_10023c8e8 */

undefined8
FUN_10023c8e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10)

{
  undefined8 in_stack_00000018;
  
  _objc_allocWithZone();
  FUN_10023fc94(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  _swift_release(in_stack_00000018);
  return param_1;
}



/* Address: 0x10023c9a0 | _TtC7PasteUI13ToolbarButton::contentTintColor */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC7PasteUI13ToolbarButton::contentTintColor(ID param_1,SEL param_2)

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
              ("PasteUI/ToolbarButton.macOS.swift",0x21,1,0xc,UVar5.unknown,puVar4);
  }
  local_50.receiver = param_1;
  local_50.super_class = pcVar2;
  IVar7 = _objc_msgSendSuper2(&local_50,"contentTintColor");
  _swift_release(pMVar3);
  return IVar7;
}



/* Address: 0x10023ca7c | FUN_10023ca7c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

ID FUN_10023ca7c(void)

{
  ID IVar1;
  
  _swift_getObjectType();
  IVar1 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"contentTintColor");
  return IVar1;
}



/* Address: 0x10023cab4 | _TtC7PasteUI13ToolbarButton::setContentTintColor: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC7PasteUI13ToolbarButton::setContentTintColor_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  class_t *pcVar2;
  MainActor *pMVar3;
  undefined8 *puVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  ID IVar7;
  objc_super local_70;
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
              ("PasteUI/ToolbarButton.macOS.swift",0x21,1,0xc,UVar5.unknown,puVar4);
  }
  local_60.receiver = param_1;
  local_60.super_class = pcVar2;
  _objc_msgSendSuper2(&local_60,"setContentTintColor:",param_3);
  FUN_10023cc80();
  local_70.receiver = param_1;
  local_70.super_class = pcVar2;
  IVar7 = _objc_msgSendSuper2(&local_70,"contentTintColor");
  FUN_1000f65ec(IVar7);
  _swift_release(pMVar3);
  return;
}



/* Address: 0x10023cbf4 | FUN_10023cbf4 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10023cbf4(undefined8 param_1)

{
  ID IVar1;
  
  _swift_getObjectType();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffc0,"setContentTintColor:",param_1);
  FUN_10023cc80();
  IVar1 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffb0,"contentTintColor");
  FUN_1000f65ec(IVar1);
  return 0;
}



/* Address: 0x10023cc80 | FUN_10023cc80 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10023cc80(void)

{
  long lVar1;
  ID IVar2;
  undefined *self;
  long unaff_x20;
  
  lVar1 = _TtC7PasteUI13ToolbarButton::___lazy_storage___iconView;
  IVar2 = *(ID *)(unaff_x20 + _TtC7PasteUI13ToolbarButton::___lazy_storage___iconView);
  if (IVar2 == 0) {
    self = &_OBJC_CLASS___NSImageView;
    _objc_allocWithZone();
    IVar2 = objc_stub::init((ID)self);
    *(ID *)(unaff_x20 + lVar1) = IVar2;
  }
  return IVar2;
}



/* Address: 0x10023ccec | FUN_10023ccec */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

undefined1  [16] FUN_10023ccec(undefined8 *param_1)

{
  objc_super *super;
  class_t *pcVar1;
  ID IVar2;
  class_t *unaff_x20;
  undefined1 auVar3 [16];
  
  super = (objc_super *)0x58;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    super = _malloc(0x58);
  }
  else {
    _swift_coroFrameAlloc(0x58,0xd3aa);
  }
  *param_1 = super;
  super[4].super_class = unaff_x20;
  pcVar1 = unaff_x20;
  _swift_getObjectType();
  super[5].receiver = (ID)pcVar1;
  super->receiver = (ID)unaff_x20;
  super->super_class = pcVar1;
  IVar2 = _objc_msgSendSuper2(super,"contentTintColor");
  super[4].receiver = IVar2;
  auVar3._8_8_ = super + 4;
  auVar3._0_8_ = FUN_10023cd74;
  return auVar3;
}



/* Address: 0x10023cd74 | FUN_10023cd74 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_10023cd74(undefined8 *param_1,ulong param_2)

{
  ID IVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  pvVar2 = (void *)*param_1;
  uVar3 = *(undefined8 *)((long)pvVar2 + 0x40);
  if ((param_2 & 1) == 0) {
    uVar4 = *(undefined8 *)((long)pvVar2 + 0x50);
    IVar1 = *(ID *)((long)pvVar2 + 0x48);
    *(undefined8 *)((long)pvVar2 + 0x28) = *(undefined8 *)((long)pvVar2 + 0x50);
    ((objc_super *)((long)pvVar2 + 0x20))->receiver = IVar1;
    _objc_msgSendSuper2((objc_super *)((long)pvVar2 + 0x20),"setContentTintColor:",uVar3);
    FUN_10023cc80(0);
    ((objc_super *)((long)pvVar2 + 0x30))->receiver = IVar1;
    *(undefined8 *)((long)pvVar2 + 0x38) = uVar4;
    IVar1 = _objc_msgSendSuper2((objc_super *)((long)pvVar2 + 0x30),"contentTintColor");
    FUN_1000f65ec(IVar1);
  }
  else {
    *(undefined8 *)((long)pvVar2 + 0x18) = *(undefined8 *)((long)pvVar2 + 0x50);
    ((objc_super *)((long)pvVar2 + 0x10))->receiver = *(ID *)((long)pvVar2 + 0x48);
    _objc_msgSendSuper2((objc_super *)((long)pvVar2 + 0x10),"setContentTintColor:",uVar3);
  }
  _free(pvVar2);
  return;
}



/* Address: 0x10023ce40 | FUN_10023ce40 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_10023ce40(void)

{
  long *plVar1;
  undefined8 *puVar2;
  ulong uVar3;
  code *pcVar4;
  long *self;
  ID self_00;
  long lVar5;
  void *self_01;
  NSString *pNVar6;
  void *pvVar7;
  long unaff_x20;
  ID IVar8;
  long lVar9;
  String SVar10;
  undefined1 auStack_a0 [24];
  undefined1 auStack_68 [24];
  
  _swift_getObjectType();
  plVar1 = (long *)(unaff_x20 + _TtC7PasteUI13ToolbarButton::symbol);
  self = plVar1;
  _swift_beginAccess(plVar1,auStack_68,0,0);
  IVar8 = plVar1[1];
  if (IVar8 == 0) {
    FUN_10023cc80();
    objc_stub::setImage_((ID)self,0);
    objc_stub::removeFromSuperview
              (*(ID *)(unaff_x20 + _TtC7PasteUI13ToolbarButton::___lazy_storage___iconView));
  }
  else {
    lVar9 = *plVar1;
    self_00 = IVar8;
    _swift_bridgeObjectRetain();
    FUN_10023cc80();
    FUN_10000ec2c(0,&DAT_100fb5d30,&PTR__OBJC_CLASS___NSImage_100f8d6b8);
    _swift_bridgeObjectRetain(IVar8);
    lVar5 = lVar9;
    FUN_1000f653c(lVar9,IVar8);
    if (lVar5 == 0) {
      _swift_bridgeObjectRelease(IVar8);
      lVar5 = -0x2fffffffffffffed;
      FUN_1000f653c(0xd000000000000013,0x8000000100d8de20);
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10023d164);
        (*pcVar4)();
      }
    }
    else {
      FUN_1000f653c(lVar9,IVar8);
      if (lVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10023cefc);
        (*pcVar4)();
      }
    }
    puVar2 = (undefined8 *)PTR__NSFontTextStyleBody_100ea9050;
    if (*(char *)(unaff_x20 + _TtC7PasteUI13ToolbarButton::size) != '\0') {
      puVar2 = (undefined8 *)PTR__NSFontTextStyleTitle2_100ea9098;
    }
    IVar8 = NSImageSymbolConfiguration::configurationWithTextStyle_
                      ((ID)&_OBJC_CLASS___NSImageSymbolConfiguration,*puVar2);
    FUN_1000f65b0(IVar8);
    objc_stub::setImage_(self_00,IVar8);
    objc_stub::addArrangedSubview_
              (*(ID *)(unaff_x20 + _TtC7PasteUI13ToolbarButton::stackView),
               *(undefined8 *)(unaff_x20 + _TtC7PasteUI13ToolbarButton::___lazy_storage___iconView))
    ;
  }
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff88,"title");
  SVar10 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pvVar7 = SVar10.bridgeObject;
  self_01 = pvVar7;
  _swift_bridgeObjectRelease();
  uVar3 = (ulong)SVar10.str & 0xffffffffffff;
  if (((ulong)pvVar7 & 0x2000000000000000) != 0) {
    uVar3 = (ulong)pvVar7 >> 0x38 & 0xf;
  }
  FUN_10023deb4();
  if (uVar3 == 0) {
    objc_stub::setText_((ID)self_01,0);
    objc_stub::removeFromSuperview
              (*(ID *)(unaff_x20 + _TtC7PasteUI13ToolbarButton::___lazy_storage___titleLabel));
  }
  else {
    pNVar6 = (NSString *)_objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff78,"title");
    if (pNVar6 == (NSString *)0x0) {
      SVar10 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(SVar10.bridgeObject);
    }
    objc_stub::setText_((ID)self_01,pNVar6);
    objc_stub::addArrangedSubview_
              (*(ID *)(unaff_x20 + _TtC7PasteUI13ToolbarButton::stackView),
               *(undefined8 *)
                (unaff_x20 + _TtC7PasteUI13ToolbarButton::___lazy_storage___titleLabel));
  }
  lVar5 = _TtC7PasteUI13ToolbarButton::hasPullDownArrow;
  _swift_beginAccess(unaff_x20 + _TtC7PasteUI13ToolbarButton::hasPullDownArrow,auStack_a0,0,0);
  if (*(char *)(unaff_x20 + lVar5) == '\x01') {
    objc_stub::addArrangedSubview_
              (*(ID *)(unaff_x20 + _TtC7PasteUI13ToolbarButton::stackView),
               *(undefined8 *)(unaff_x20 + _TtC7PasteUI13ToolbarButton::pullDownArrowView));
  }
  else {
    objc_stub::removeFromSuperview
              (*(ID *)(unaff_x20 + _TtC7PasteUI13ToolbarButton::pullDownArrowView));
  }
  return;
}



/* Address: 0x10023d164 | FUN_10023d164 */

undefined1  [16] FUN_10023d164(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + _TtC7PasteUI13ToolbarButton::symbol);
  _swift_beginAccess(pauVar1,auStack_38,0,0);
  auVar2 = *pauVar1;
  _swift_bridgeObjectRetain(*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Address: 0x10023d1b8 | FUN_10023d1b8 */

void FUN_10023d1b8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _TtC7PasteUI13ToolbarButton::symbol);
  _swift_beginAccess(puVar1,auStack_48,1,0);
  uVar2 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  _swift_bridgeObjectRelease(uVar2);
  FUN_10023ce40();
  return;
}



/* Address: 0x10023d218 | FUN_10023d218 */

undefined1  [16] FUN_10023d218(long param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  *(long *)(param_1 + 0x18) = unaff_x20;
  lVar1 = _TtC7PasteUI13ToolbarButton::symbol;
  _swift_beginAccess(unaff_x20 + _TtC7PasteUI13ToolbarButton::symbol,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = thunk_FUN_10023d778;
  return auVar2;
}



/* Address: 0x10023d25c | _TtC7PasteUI13ToolbarButton::title */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC7PasteUI13ToolbarButton::title(ID param_1,SEL param_2)

{
  undefined *puVar1;
  class_t *pcVar2;
  MainActor *pMVar3;
  undefined8 *puVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  NSString *pNVar7;
  String SVar8;
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
              ("PasteUI/ToolbarButton.macOS.swift",0x21,1,0x13,UVar5.unknown,puVar4);
  }
  local_50.receiver = param_1;
  local_50.super_class = pcVar2;
  pNVar7 = (NSString *)_objc_msgSendSuper2(&local_50,"title");
  if (pNVar7 == (NSString *)0x0) {
    SVar8 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    pNVar7 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_release(pMVar3);
    _swift_bridgeObjectRelease(SVar8.bridgeObject);
  }
  else {
    _swift_release(pMVar3);
  }
  return (ID)pNVar7;
}



/* Address: 0x10023d378 | FUN_10023d378 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

String FUN_10023d378(void)

{
  String SVar1;
  
  _swift_getObjectType();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffc0,"title");
  SVar1 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  return SVar1;
}



/* Address: 0x10023d3e4 | _TtC7PasteUI13ToolbarButton::setTitle: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC7PasteUI13ToolbarButton::setTitle_(ID param_1,SEL param_2,ID param_3)

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
              ("PasteUI/ToolbarButton.macOS.swift",0x21,1,0x13,UVar5.unknown,puVar4);
  }
  local_60.receiver = param_1;
  local_60.super_class = pcVar2;
  _objc_msgSendSuper2(&local_60,"setTitle:",param_3);
  FUN_10023ce40();
  _swift_release(pMVar3);
  return;
}



/* Address: 0x10023d4e4 | FUN_10023d4e4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10023d4e4(undefined8 param_1,undefined8 param_2)

{
  NSString *pNVar1;
  
  _swift_getObjectType();
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_2);
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffc0,"setTitle:",pNVar1);
  FUN_10023ce40(0);
  return;
}



/* Address: 0x10023d55c | FUN_10023d55c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_10023d55c(undefined8 *param_1)

{
  String *pSVar1;
  char *pcVar2;
  char *unaff_x20;
  String SVar3;
  undefined1 auVar4 [16];
  
  pSVar1 = (String *)0x50;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    pSVar1 = _malloc(0x50);
  }
  else {
    _swift_coroFrameAlloc(0x50,0xa299);
  }
  *param_1 = pSVar1;
  pSVar1[4].str = unaff_x20;
  pcVar2 = unaff_x20;
  _swift_getObjectType();
  pSVar1[4].bridgeObject = pcVar2;
  ((objc_super *)(pSVar1 + 1))->receiver = (ID)unaff_x20;
  pSVar1[1].bridgeObject = pcVar2;
  _objc_msgSendSuper2((objc_super *)(pSVar1 + 1),"title");
  SVar3 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  *pSVar1 = SVar3;
  auVar4._8_8_ = pSVar1;
  auVar4._0_8_ = FUN_10023d604;
  return auVar4;
}



/* Address: 0x10023d604 | FUN_10023d604 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10023d604(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  NSString *pNVar2;
  void *pvVar3;
  undefined8 uVar4;
  ID IVar5;
  
  pvVar3 = (void *)*param_1;
  uVar1 = *(undefined8 *)((long)pvVar3 + 8);
  uVar4 = *(undefined8 *)((long)pvVar3 + 0x48);
  IVar5 = *(ID *)((long)pvVar3 + 0x40);
  if ((param_2 & 1) == 0) {
    uVar4 = *(undefined8 *)((long)pvVar3 + 0x48);
    pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(uVar1);
    ((objc_super *)((long)pvVar3 + 0x30))->receiver = IVar5;
    *(undefined8 *)((long)pvVar3 + 0x38) = uVar4;
    _objc_msgSendSuper2((objc_super *)((long)pvVar3 + 0x30),"setTitle:",pNVar2);
    FUN_10023ce40(0);
  }
  else {
    _swift_bridgeObjectRetain(uVar1);
    pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(uVar1);
    *(undefined8 *)((long)pvVar3 + 0x28) = uVar4;
    ((objc_super *)((long)pvVar3 + 0x20))->receiver = IVar5;
    _objc_msgSendSuper2((objc_super *)((long)pvVar3 + 0x20),"setTitle:",pNVar2);
    _swift_bridgeObjectRelease(*(undefined8 *)((long)pvVar3 + 8));
  }
  _free(pvVar3);
  return;
}



/* Address: 0x10023d6e0 | FUN_10023d6e0 */

undefined1 FUN_10023d6e0(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _TtC7PasteUI13ToolbarButton::hasPullDownArrow;
  _swift_beginAccess(unaff_x20 + _TtC7PasteUI13ToolbarButton::hasPullDownArrow,auStack_38,0,0);
  return *(undefined1 *)(unaff_x20 + lVar1);
}



/* Address: 0x10023d720 | FUN_10023d720 */

void FUN_10023d720(undefined8 param_1)

{
  FUN_10023da1c(param_1,&_TtC7PasteUI13ToolbarButton::hasPullDownArrow,FUN_10023ce40);
  return;
}



/* Address: 0x10023d734 | FUN_10023d734 */

undefined1  [16] FUN_10023d734(long param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  *(long *)(param_1 + 0x18) = unaff_x20;
  lVar1 = _TtC7PasteUI13ToolbarButton::hasPullDownArrow;
  _swift_beginAccess(unaff_x20 + _TtC7PasteUI13ToolbarButton::hasPullDownArrow,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_10023d778;
  return auVar2;
}



/* Address: 0x10023d778 | FUN_10023d778 */

void FUN_10023d778(undefined8 param_1,undefined8 param_2)

{
  FUN_10023db40(param_1,param_2,FUN_10023ce40);
  return;
}



/* Address: 0x10023d784 | FUN_10023d784 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10023d784(void)

{
  ulong uVar1;
  code *pcVar2;
  byte bVar3;
  ID IVar4;
  undefined *puVar5;
  undefined *puVar6;
  void *pvVar7;
  undefined *puVar8;
  ID unaff_x20;
  undefined8 uVar9;
  double extraout_d0;
  double dVar10;
  double dVar11;
  String SVar12;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  _swift_getObjectType();
  IVar4 = objc_stub::layer(unaff_x20);
  if (IVar4 != 0) {
    _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffa0,"title");
    SVar12 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    pvVar7 = SVar12.bridgeObject;
    _swift_bridgeObjectRelease(pvVar7);
    uVar1 = (ulong)SVar12.str & 0xffffffffffff;
    if (((ulong)pvVar7 & 0x2000000000000000) != 0) {
      uVar1 = (ulong)pvVar7 >> 0x38 & 0xf;
    }
    uVar9 = 0;
    if (uVar1 != 0) {
      uVar9 = 0x3ff0000000000000;
    }
    objc_stub::setBorderWidth_(IVar4,uVar9);
  }
  IVar4 = objc_stub::layer(unaff_x20);
  if (IVar4 != 0) {
    objc_stub::bounds(unaff_x20);
    dVar10 = extraout_d0;
    _CGRectGetHeight();
    dVar11 = 5.0;
    if (*(char *)(unaff_x20 + _TtC7PasteUI13ToolbarButton::size) != '\0') {
      dVar11 = 6.0;
    }
    bVar3 = Swift::_stdlib_isOSVersionAtLeast(0x1a,0,0);
    dVar10 = dVar10 * 0.5;
    if ((bVar3 & 1) == 0) {
      dVar10 = dVar11;
    }
    objc_stub::setCornerRadius_(IVar4,dVar10);
  }
  IVar4 = objc_stub::effectiveAppearance(unaff_x20);
  puVar5 = &DAT_100ec36e0;
  _swift_allocObject(&DAT_100ec36e0,0x18,7);
  *(ID *)(puVar5 + 0x10) = unaff_x20;
  puVar6 = &DAT_100ec3708;
  _swift_allocObject(&DAT_100ec3708,0x20,7);
  *(code **)(puVar6 + 0x10) = FUN_10024050c;
  *(undefined **)(puVar6 + 0x18) = puVar5;
  local_70 = FUN_100209b34;
  local_90 = PTR___NSConcreteStackBlock_100ea82a0;
  local_88 = 0x42000000;
  local_80 = FUN_1000d5218;
  puStack_78 = &DAT_100ec3720;
  local_68 = puVar6;
  pvVar7 = __Block_copy(&local_90);
  puVar8 = local_68;
  _swift_retain(puVar6);
  _swift_release(puVar8);
  objc_stub::performAsCurrentDrawingAppearance_(IVar4,pvVar7);
  __Block_release(pvVar7);
  puVar8 = puVar6;
  _swift_isEscapingClosureAtFileLocation(puVar6,"",0x82,0xc0,0x3f,1);
  _swift_release(puVar6);
  _swift_release(puVar5);
  if (((ulong)puVar8 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10023d9c8);
  (*pcVar2)();
}



/* Address: 0x10023d9c8 | FUN_10023d9c8 */

undefined1 FUN_10023d9c8(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _TtC7PasteUI13ToolbarButton::isPrimary;
  _swift_beginAccess(unaff_x20 + _TtC7PasteUI13ToolbarButton::isPrimary,auStack_38,0,0);
  return *(undefined1 *)(unaff_x20 + lVar1);
}



/* Address: 0x10023da08 | FUN_10023da08 */

void FUN_10023da08(undefined8 param_1)

{
  FUN_10023da1c(param_1,&_TtC7PasteUI13ToolbarButton::isPrimary,FUN_10023d784);
  return;
}



/* Address: 0x10023da1c | FUN_10023da1c */

void FUN_10023da1c(undefined1 param_1,long *param_2,code *param_3)

{
  long unaff_x20;
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_2;
  _swift_beginAccess(unaff_x20 + lVar1,auStack_48,1,0);
  *(undefined1 *)(unaff_x20 + lVar1) = param_1;
  (*param_3)();
  return;
}



/* Address: 0x10023da6c | FUN_10023da6c */

undefined1  [16] FUN_10023da6c(long param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  *(long *)(param_1 + 0x18) = unaff_x20;
  lVar1 = _TtC7PasteUI13ToolbarButton::isPrimary;
  _swift_beginAccess(unaff_x20 + _TtC7PasteUI13ToolbarButton::isPrimary,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = thunk_FUN_10023db34;
  return auVar2;
}



/* Address: 0x10023dab0 | FUN_10023dab0 */

undefined1 FUN_10023dab0(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _TtC7PasteUI13ToolbarButton::isSelected;
  _swift_beginAccess(unaff_x20 + _TtC7PasteUI13ToolbarButton::isSelected,auStack_38,0,0);
  return *(undefined1 *)(unaff_x20 + lVar1);
}



/* Address: 0x10023daf0 | FUN_10023daf0 */

undefined1  [16] FUN_10023daf0(long param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  *(long *)(param_1 + 0x18) = unaff_x20;
  lVar1 = _TtC7PasteUI13ToolbarButton::isSelected;
  _swift_beginAccess(unaff_x20 + _TtC7PasteUI13ToolbarButton::isSelected,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_10023db34;
  return auVar2;
}


