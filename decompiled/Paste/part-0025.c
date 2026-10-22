/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100042d64 | FUN_100042d64 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100042d64(ID param_1)

{
  ID self;
  
  FUN_100042090();
  self = objc_stub::animator(param_1);
  objc_stub::setAlphaValue_(self,0x3ff0000000000000);
  return 0;
}



/* Address: 0x100042db0 | FUN_100042db0 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100042db0(ID param_1)

{
  ID self;
  
  FUN_100042090();
  self = objc_stub::animator(param_1);
  objc_stub::setAlphaValue_(self,0);
  return 0;
}



/* Address: 0x100042dfc | FUN_100042dfc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100042dfc(long param_1)

{
  ID self;
  
  self = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (self != 0) {
    if ((*(byte *)(self + _TtCC5Paste11SearchField9InputView::isClearButtonVisible) & 1) == 0) {
      FUN_100042090();
      objc_stub::setHidden_(self,1);
    }
    return 0;
  }
  return 0;
}



/* Address: 0x100042e60 | _TtCC5Paste11SearchField9InputView::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtCC5Paste11SearchField9InputView::_cxx_destruct(ID param_1,SEL param_2)

{
  FUN_100004550(*(undefined8 *)(param_1 + onClear),((undefined8 *)(param_1 + onClear))[1]);
  return;
}



/* Address: 0x100042ebc | FUN_100042ebc */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100042ebc(void)

{
  return ZEXT816(0x100f90640);
}



/* Address: 0x100042edc | FUN_100042edc */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100042edc(undefined8 param_1)

{
  undefined8 *puVar1;
  ID self;
  long unaff_x20;
  
  _swift_getObjectType();
  puVar1 = (undefined8 *)
           (unaff_x20 +
           _TtCCC5Paste11SearchField9InputViewP33_88626D17C36931F5670CC3740FF3505016TextViewScroller
           ::focusRingBounds);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  self = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffd0,"initWithFrame:",0,0,0,0);
  objc_stub::setHasHorizontalScroller_(self,0);
  objc_stub::setHasVerticalScroller_(self,0);
  objc_stub::setDrawsBackground_(self,0);
  objc_stub::setFocusRingType_(self,2);
  objc_stub::setBorderType_(self,0);
  objc_stub::setDocumentView_(self,param_1);
  FUN_100042fc8(0);
  return self;
}



/* Address: 0x100042fc8 | FUN_100042fc8 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100042fc8(void)

{
  ID IVar1;
  ID unaff_x20;
  
  objc_stub::setMinSize_(unaff_x20,0x3ff0000000000000,0x3ff0000000000000);
  objc_stub::setMaxSize_(unaff_x20,0x412e848000000000,0x412e848000000000);
  IVar1 = objc_stub::textLayoutManager(unaff_x20);
  if ((IVar1 != 0) && (IVar1 = objc_stub::textContainer(IVar1), IVar1 != 0)) {
    objc_stub::setWidthTracksTextView_(IVar1,0);
  }
  IVar1 = objc_stub::textLayoutManager(unaff_x20);
  if ((IVar1 != 0) && (IVar1 = objc_stub::textContainer(IVar1), IVar1 != 0)) {
    objc_stub::setHeightTracksTextView_(IVar1,0);
  }
  IVar1 = objc_stub::textLayoutManager(unaff_x20);
  IVar1 = objc_stub::textContainer(IVar1);
  objc_stub::setSize_(IVar1,0x412e848000000000,0x412e848000000000);
  IVar1 = objc_stub::textLayoutManager(unaff_x20);
  if ((IVar1 != 0) && (IVar1 = objc_stub::textContainer(IVar1), IVar1 != 0)) {
    objc_stub::setMaximumNumberOfLines_(IVar1,1);
  }
  IVar1 = objc_stub::textLayoutManager(unaff_x20);
  if ((IVar1 != 0) && (IVar1 = objc_stub::textContainer(IVar1), IVar1 != 0)) {
    objc_stub::setLineFragmentPadding_(IVar1,0);
  }
  objc_stub::setDrawsBackground_(unaff_x20,0);
  objc_stub::setFocusRingType_(unaff_x20,2);
  objc_stub::setAutomaticSpellingCorrectionEnabled_(unaff_x20,0);
  objc_stub::setAutomaticQuoteSubstitutionEnabled_(unaff_x20,0);
  objc_stub::setAutomaticDashSubstitutionEnabled_(unaff_x20,0);
  objc_stub::setAutomaticTextReplacementEnabled_(unaff_x20,0);
  objc_stub::setAutomaticTextCompletionEnabled_(unaff_x20,0);
  objc_stub::setAutomaticDataDetectionEnabled_(unaff_x20,0);
  objc_stub::setAutomaticLinkDetectionEnabled_(unaff_x20,0);
  objc_stub::setContentType_(unaff_x20,0);
  objc_stub::setHorizontallyResizable_(unaff_x20,1);
  objc_stub::setVerticallyResizable_(unaff_x20,1);
  objc_stub::setFieldEditor_(unaff_x20,1);
  objc_stub::setSelectable_(unaff_x20,1);
  objc_stub::setEditable_(unaff_x20,1);
  IVar1 = objc_stub::setRichText_(unaff_x20,0);
  FUN_1000436a0();
  objc_stub::addSubview_(unaff_x20,IVar1);
  FUN_100043904(0);
  return;
}



/* Address: 0x100043258 | _TtCCC5Paste11SearchField9InputViewP33_88626D17C36931F5670CC3740FF3505016TextViewScroller::initWithCoder: */

/* Function Stack Size: 0x18 bytes */

ID _TtCCC5Paste11SearchField9InputViewP33_88626D17C36931F5670CC3740FF3505016TextViewScroller::
   initWithCoder_(ID param_1,SEL param_2,ID param_3)

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
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/SearchField.InputView.swift",0x21,1,0x87,UVar4.unknown,puVar3);
  }
  puVar3 = (undefined8 *)(param_1 + focusRingBounds);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  SVar6.bridgeObject = (void *)0x2;
  SVar6.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar6,(StaticString)0xd000000000000025,0x8000000100d8dc00,
             0xd8e730);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100043344);
  (*pcVar2)();
}



/* Address: 0x100043344 | _TtCCC5Paste11SearchField9InputViewP33_88626D17C36931F5670CC3740FF3505016TextViewScroller::focusRingMaskBounds */

/* Function Stack Size: 0x10 bytes */

CGRect _TtCCC5Paste11SearchField9InputViewP33_88626D17C36931F5670CC3740FF3505016TextViewScroller::
       focusRingMaskBounds(ID param_1,SEL param_2)

{
  CGRect CVar1;
  undefined *puVar2;
  MainActor *pMVar3;
  undefined8 *puVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  puVar2 = PTR_typeMetadataAccessor_100eaec10;
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  puVar4 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar2,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar5 = Swift::Actor::get_unownedExecutor();
  UVar6 = UVar5;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar6.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/SearchField.InputView.swift",0x21,1,0x8b,UVar5.unknown,puVar4);
  }
  CVar1 = *(CGRect *)(param_1 + focusRingBounds);
  _swift_release(pMVar3);
  return CVar1;
}



/* Address: 0x100043418 | FUN_100043418 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100043418(void)

{
  double *pdVar1;
  byte bVar2;
  ID self;
  ID self_00;
  long unaff_x20;
  double dVar3;
  
  pdVar1 = (double *)
           (unaff_x20 +
           _TtCCC5Paste11SearchField9InputViewP33_88626D17C36931F5670CC3740FF3505016TextViewScroller
           ::focusRingBounds);
  dVar3 = *pdVar1;
  _CGRectGetHeight(dVar3,pdVar1[1],pdVar1[2],pdVar1[3]);
  bVar2 = Swift::_stdlib_isOSVersionAtLeast(0x1a,0,0);
  dVar3 = dVar3 * 0.5;
  if ((bVar2 & 1) == 0) {
    dVar3 = 6.0;
  }
  self = NSBezierPath::bezierPathWithRoundedRect_xRadius_yRadius_
                   ((ID)&_OBJC_CLASS___NSBezierPath,*pdVar1,pdVar1[1],pdVar1[2],pdVar1[3],dVar3,
                    dVar3);
  self_00 = NSColor::blackColor((ID)&_OBJC_CLASS___NSColor);
  NSColor::set(self_00);
  NSBezierPath::fill(self);
  return 0;
}



/* Address: 0x1000434f8 | _TtCCC5Paste11SearchField9InputViewP33_88626D17C36931F5670CC3740FF3505016TextViewScroller::drawFocusRingMask */

/* Function Stack Size: 0x10 bytes */

void _TtCCC5Paste11SearchField9InputViewP33_88626D17C36931F5670CC3740FF3505016TextViewScroller::
     drawFocusRingMask(ID param_1,SEL param_2)

{
  FUN_100043508(param_1,param_2,0x8f,FUN_100043418);
  return;
}



/* Address: 0x100043508 | FUN_100043508 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100043508(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

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
              ("Paste/SearchField.InputView.swift",0x21,1,param_3,UVar4.unknown,puVar3);
  }
  (*param_4)(param_1);
  _swift_release(pMVar2);
  return 0;
}



/* Address: 0x1000435d8 | _TtCCC5Paste11SearchField9InputViewP33_88626D17C36931F5670CC3740FF3505016TextViewScroller::initWithFrame: */

/* Function Stack Size: 0x30 bytes */

ID _TtCCC5Paste11SearchField9InputViewP33_88626D17C36931F5670CC3740FF3505016TextViewScroller::
   initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

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
              ("Paste/SearchField.InputView.swift",0x21,1,0x76,UVar4.unknown,puVar3);
  }
  __swift_stdlib_reportUnimplementedInitializer("Paste.TextViewScroller",0x16,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100043680);
  (*pcVar2)();
}



/* Address: 0x100043680 | FUN_100043680 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100043680(void)

{
  return ZEXT816(0x100f90720);
}



/* Address: 0x1000436a0 | FUN_1000436a0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1000436a0(void)

{
  long lVar1;
  ID IVar2;
  undefined *self;
  long unaff_x20;
  
  lVar1 = _TtCCC5Paste11SearchField9InputViewP33_88626D17C36931F5670CC3740FF350508TextView::
          ___lazy_storage___placeholderLabel;
  IVar2 = *(ID *)(unaff_x20 +
                 _TtCCC5Paste11SearchField9InputViewP33_88626D17C36931F5670CC3740FF350508TextView::
                 ___lazy_storage___placeholderLabel);
  if (IVar2 == 0) {
    self = &_OBJC_CLASS___NSTextField;
    _objc_allocWithZone();
    IVar2 = objc_stub::init((ID)self);
    FUN_10004371c();
    *(ID *)(unaff_x20 + lVar1) = IVar2;
  }
  return IVar2;
}



/* Address: 0x10004371c | FUN_10004371c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10004371c(ID param_1,long param_2)

{
  LocalizedStringResource LVar1;
  ID IVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  NSString *pNVar5;
  long extraout_x8;
  long lVar6;
  long lVar7;
  String SVar8;
  undefined1 auStack_70 [8];
  undefined8 local_68 [3];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long local_38;
  
  LVar1 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar1.unknown + -8) + 0x40));
  objc_stub::setDrawsBackground_(param_1,0);
  objc_stub::setSelectable_(param_1,0);
  objc_stub::setEditable_(param_1,0);
  objc_stub::setBordered_(param_1,0);
  IVar2 = NSColor::placeholderTextColor((ID)&_OBJC_CLASS___NSColor);
  objc_stub::setTextColor_(param_1,IVar2);
  lVar6 = _TtCCC5Paste11SearchField9InputViewP33_88626D17C36931F5670CC3740FF350508TextView::
          preferredTypingAttributes;
  puVar4 = local_68;
  _swift_beginAccess(param_2 + _TtCCC5Paste11SearchField9InputViewP33_88626D17C36931F5670CC3740FF350508TextView
                               ::preferredTypingAttributes,puVar4,0x20,0);
  lVar6 = *(long *)(param_2 + lVar6);
  if (*(long *)(lVar6 + 0x10) != 0) {
    lVar7 = *(long *)PTR__NSFontAttributeName_100ea9048;
    _swift_bridgeObjectRetain(lVar6);
    FUN_1000712c0(lVar7);
    if (((ulong)puVar4 & 1) != 0) {
      FUN_10000cbfc(*(long *)(lVar6 + 0x38) + lVar7 * 0x20,&local_50);
      _swift_bridgeObjectRelease(lVar6);
      goto LAB_100043840;
    }
    _swift_bridgeObjectRelease(lVar6);
  }
  uStack_48 = 0;
  local_50 = 0;
  local_38 = 0;
  uStack_40 = 0;
LAB_100043840:
  _swift_endAccess(local_68);
  if (local_38 == 0) {
    FUN_100013954(&local_50);
    local_68[0] = 0;
  }
  else {
    uVar3 = 0;
    FUN_10000ec2c(0,&DAT_100fa6c38,&PTR__OBJC_CLASS___NSFont_100f8d678);
    puVar4 = local_68;
    _swift_dynamicCast(puVar4,&local_50,PTR___type_metadata_for_Any_100eae0c0 + 8,uVar3,6);
    if ((int)puVar4 == 0) {
      local_68[0] = 0;
    }
  }
  objc_stub::setFont_(param_1,local_68[0]);
  FUN_1001c6300(auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),0);
  SVar8 = (extension_Foundation)::Swift::String::init
                    ((LocalizedStringResource)
                     (auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)));
  pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(SVar8.bridgeObject);
  objc_stub::setText_(param_1,pNVar5);
  return 0;
}



/* Address: 0x100043904 | FUN_100043904 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100043904(ID param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  NSDictionary *pNVar5;
  ID unaff_x20;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 local_88 [3];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long local_58;
  
  FUN_1000436a0();
  lVar7 = _TtCCC5Paste11SearchField9InputViewP33_88626D17C36931F5670CC3740FF350508TextView::
          preferredTypingAttributes;
  lVar8 = *(long *)PTR__NSFontAttributeName_100ea9048;
  puVar4 = local_88;
  _swift_beginAccess(unaff_x20 +
                     _TtCCC5Paste11SearchField9InputViewP33_88626D17C36931F5670CC3740FF350508TextView
                     ::preferredTypingAttributes,puVar4,0x20,0);
  lVar6 = *(long *)(unaff_x20 + lVar7);
  if (*(long *)(lVar6 + 0x10) == 0) {
LAB_100043998:
    uStack_68 = 0;
    local_70 = 0;
    local_58 = 0;
    uStack_60 = 0;
  }
  else {
    _swift_bridgeObjectRetain(lVar6);
    lVar2 = lVar8;
    FUN_1000712c0(lVar8);
    if (((ulong)puVar4 & 1) == 0) {
      _swift_bridgeObjectRelease(lVar6);
      goto LAB_100043998;
    }
    FUN_10000cbfc(*(long *)(lVar6 + 0x38) + lVar2 * 0x20,&local_70);
    _swift_bridgeObjectRelease(lVar6);
  }
  _swift_endAccess(local_88);
  puVar1 = PTR___type_metadata_for_Any_100eae0c0;
  if (local_58 == 0) {
    FUN_100013954(&local_70);
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    FUN_10000ec2c(0,&DAT_100fa6c38,&PTR__OBJC_CLASS___NSFont_100f8d678);
    puVar4 = local_88;
    _swift_dynamicCast(puVar4,&local_70,puVar1 + 8,uVar3,6);
    uVar3 = local_88[0];
    if ((int)puVar4 == 0) {
      uVar3 = 0;
    }
  }
  objc_stub::setFont_(param_1,uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + lVar7);
  FUN_100003980(0);
  FUN_100003a00(&DAT_100fa8660,FUN_100003980,&TargetProtocolConformanceDescriptor_100c2262c);
  _swift_bridgeObjectRetain(uVar3);
  pNVar5 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(uVar3);
  objc_stub::setTypingAttributes_(unaff_x20,pNVar5);
  puVar4 = local_88;
  _swift_beginAccess(unaff_x20 + lVar7,puVar4,0x20,0);
  lVar7 = *(long *)(unaff_x20 + lVar7);
  if (*(long *)(lVar7 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar7);
    FUN_1000712c0(lVar8);
    if (((ulong)puVar4 & 1) != 0) {
      FUN_10000cbfc(*(long *)(lVar7 + 0x38) + lVar8 * 0x20,&local_70);
      _swift_bridgeObjectRelease(lVar7);
      goto LAB_100043ae8;
    }
    _swift_bridgeObjectRelease(lVar7);
  }
  uStack_68 = 0;
  local_70 = 0;
  local_58 = 0;
  uStack_60 = 0;
LAB_100043ae8:
  _swift_endAccess(local_88);
  if (local_58 == 0) {
    FUN_100013954(&local_70);
    local_88[0] = 0;
  }
  else {
    uVar3 = 0;
    FUN_10000ec2c(0,&DAT_100fa6c38,&PTR__OBJC_CLASS___NSFont_100f8d678);
    puVar4 = local_88;
    _swift_dynamicCast(puVar4,&local_70,puVar1 + 8,uVar3,6);
    if ((int)puVar4 == 0) {
      local_88[0] = 0;
    }
  }
  objc_stub::setFont_(unaff_x20,local_88[0]);
  return 0;
}



/* Address: 0x100043b74 | _TtCCC5Paste11SearchField9InputViewP33_88626D17C36931F5670CC3740FF350508TextView::acceptsFirstResponder */

/* Function Stack Size: 0x10 bytes */

bool _TtCCC5Paste11SearchField9InputViewP33_88626D17C36931F5670CC3740FF350508TextView::
     acceptsFirstResponder(ID param_1,SEL param_2)

{
  byte bVar1;
  undefined *puVar2;
  MainActor *pMVar3;
  undefined8 *puVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  puVar2 = PTR_typeMetadataAccessor_100eaec10;
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  puVar4 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar2,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar5 = Swift::Actor::get_unownedExecutor();
  UVar6 = UVar5;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar6.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/SearchField.InputView.swift",0x21,1,0xcb,UVar5.unknown,puVar4);
  }
  bVar1 = *(byte *)(param_1 + canAcceptFocus);
  _swift_release(pMVar3);
  return (bool)bVar1;
}



/* Address: 0x100043c24 | _TtCCC5Paste11SearchField9InputViewP33_88626D17C36931F5670CC3740FF350508TextView::becomeFirstResponder */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

bool _TtCCC5Paste11SearchField9InputViewP33_88626D17C36931F5670CC3740FF350508TextView::
     becomeFirstResponder(ID param_1,SEL param_2)

{
  undefined *puVar1;
  class_t *pcVar2;
  MainActor *pMVar3;
  undefined8 *puVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  ID IVar7;
  ID IVar8;
  undefined8 extraout_x1;
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
              ("Paste/SearchField.InputView.swift",0x21,1,0xcd,UVar5.unknown,puVar4);
  }
  local_50.receiver = param_1;
  local_50.super_class = pcVar2;
  IVar7 = _objc_msgSendSuper2(&local_50,"becomeFirstResponder");
  if ((bool)IVar7 != 0) {
    IVar8 = objc_stub::selectedRange(param_1);
    objc_stub::setSelectedRange_(param_1,IVar8,extraout_x1);
  }
  _swift_release(pMVar3);
  return (bool)IVar7;
}



/* Address: 0x100043d2c | _TtCCC5Paste11SearchField9InputViewP33_88626D17C36931F5670CC3740FF350508TextView::setSelectedRange:affinity:stillSelecting: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x2c bytes */

void __thiscall
_TtCCC5Paste11SearchField9InputViewP33_88626D17C36931F5670CC3740FF350508TextView::
setSelectedRange_affinity_stillSelecting_
          (_TtCCC5Paste11SearchField9InputViewP33_88626D17C36931F5670CC3740FF350508TextView *this,
          ID param_1,SEL param_2,_NSRange param_3,unsigned_long_long param_4,bool param_5)

{
  undefined *puVar1;
  class_t *pcVar2;
  MainActor *pMVar3;
  undefined8 *puVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  objc_super local_70;
  
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
              ("Paste/SearchField.InputView.swift",0x21,1,0xd4,UVar5.unknown,puVar4);
  }
  local_70.receiver = param_1;
  local_70.super_class = pcVar2;
  _objc_msgSendSuper2(&local_70,"setSelectedRange:affinity:stillSelecting:",param_3.field0_0x0,
                      param_3.field1_0x8,param_4,(ulong)param_5);
  FUN_100043904();
  _swift_release(pMVar3);
  return;
}



/* Address: 0x100043e4c | FUN_100043e4c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100043e4c(void)

{
  ulong uVar1;
  ID self;
  void *pvVar2;
  ID unaff_x20;
  String SVar3;
  
  _swift_getObjectType();
  self = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffb0,"didChangeText");
  FUN_1000436a0();
  objc_stub::string(unaff_x20);
  SVar3 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pvVar2 = SVar3.bridgeObject;
  _swift_bridgeObjectRelease(pvVar2);
  uVar1 = (ulong)SVar3.str & 0xffffffffffff;
  if (((ulong)pvVar2 & 0x2000000000000000) != 0) {
    uVar1 = (ulong)pvVar2 >> 0x38 & 0xf;
  }
  objc_stub::setHidden_(self,(ulong)(uVar1 != 0));
  FUN_100043904(0);
  return;
}



/* Address: 0x100043efc | _TtCCC5Paste11SearchField9InputViewP33_88626D17C36931F5670CC3740FF350508TextView::didChangeText */

/* Function Stack Size: 0x10 bytes */

void _TtCCC5Paste11SearchField9InputViewP33_88626D17C36931F5670CC3740FF350508TextView::didChangeText
               (ID param_1,SEL param_2)

{
  FUN_100043508(param_1,param_2,0xd9,FUN_100043e4c);
  return;
}



/* Address: 0x100043f0c | FUN_100043f0c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100043f0c(void)

{
  ID self;
  ID unaff_x20;
  double extraout_d0;
  undefined8 uVar1;
  
  _swift_getObjectType();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffc0,"layout");
  objc_stub::textContainerOrigin(unaff_x20);
  uVar1 = 0xbff0000000000000;
  self = objc_stub::textContainerOrigin(unaff_x20);
  FUN_1000436a0();
  objc_stub::frame(self);
  objc_stub::setFrame_(self,extraout_d0 + -1.0,uVar1);
  objc_stub::sizeToFit
            (*(ID *)(unaff_x20 +
                    _TtCCC5Paste11SearchField9InputViewP33_88626D17C36931F5670CC3740FF350508TextView
                    ::___lazy_storage___placeholderLabel));
  return;
}



/* Address: 0x100043fa0 | _TtCCC5Paste11SearchField9InputViewP33_88626D17C36931F5670CC3740FF350508TextView::layout */

/* Function Stack Size: 0x10 bytes */

void _TtCCC5Paste11SearchField9InputViewP33_88626D17C36931F5670CC3740FF350508TextView::layout
               (ID param_1,SEL param_2)

{
  FUN_100043508(param_1,param_2,0xeb,FUN_100043f0c);
  return;
}



/* Address: 0x100043fb0 | _TtCCC5Paste11SearchField9InputViewP33_88626D17C36931F5670CC3740FF350508TextView::validateUserInterfaceItem: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

bool _TtCCC5Paste11SearchField9InputViewP33_88626D17C36931F5670CC3740FF350508TextView::
     validateUserInterfaceItem_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  bool bVar2;
  class_t *pcVar3;
  MainActor *pMVar4;
  undefined8 *puVar5;
  UnownedSerialExecutor UVar6;
  UnownedSerialExecutor UVar7;
  ID IVar8;
  UnsafeMutablePointer UVar9;
  __int64 in_x3;
  UnsafeMutablePointer in_x4;
  undefined8 *in_x5;
  bool bVar10;
  Selector SVar11;
  Selector SVar12;
  Selector SVar13;
  objc_super local_50;
  
  pcVar3 = (class_t *)param_1;
  _swift_getObjectType();
  pMVar4 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar4 = Swift::MainActor::get_shared(pMVar4,pMVar4);
  puVar5 = &DAT_100fa6bb0;
  UVar9.unknown = PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18;
  FUN_100003a00(&DAT_100fa6bb0,puVar1);
  UVar6 = Swift::Actor::get_unownedExecutor();
  UVar7 = UVar6;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar7.unknown & 1) == 0) {
    UVar9.unknown = &DAT_00000001;
    in_x3 = 0xf3;
    _swift_task_reportUnexpectedExecutor("Paste/SearchField.InputView.swift",0x21);
    in_x4.unknown = UVar6.unknown;
    in_x5 = puVar5;
  }
  _swift_unknownObjectRetain(param_3);
  SVar11.events.unknown = (undefined *)objc_stub::action(param_3);
  if ((SVar11.events.unknown == (undefined *)0x0) ||
     (SVar11.eventsCapacity = (__int64)"changeLayoutOrientation:", SVar12.eventsCapacity = in_x3,
     SVar12.events.unknown = UVar9.unknown, SVar13.eventsCapacity = (__int64)in_x5,
     SVar13.events.unknown = in_x4.unknown,
     bVar2 = ObjectiveC::Selector::___infix(SVar11,SVar12,SVar13), !bVar2)) {
    local_50.receiver = param_1;
    local_50.super_class = pcVar3;
    IVar8 = _objc_msgSendSuper2(&local_50,"validateUserInterfaceItem:",param_3);
    bVar10 = (bool)IVar8;
    _swift_unknownObjectRelease(param_3);
  }
  else {
    _swift_unknownObjectRelease(param_3);
    bVar10 = 0;
  }
  _swift_release(pMVar4);
  return bVar10;
}



/* Address: 0x1000440e4 | _TtCCC5Paste11SearchField9InputViewP33_88626D17C36931F5670CC3740FF350508TextView::menuForEvent: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtCCC5Paste11SearchField9InputViewP33_88626D17C36931F5670CC3740FF350508TextView::menuForEvent_
             (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  class_t *pcVar2;
  MainActor *pMVar3;
  undefined8 *puVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  ID self;
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
              ("Paste/SearchField.InputView.swift",0x21,1,0xfa,UVar5.unknown,puVar4);
  }
  local_50.receiver = param_1;
  local_50.super_class = pcVar2;
  self = _objc_msgSendSuper2(&local_50,"menuForEvent:",param_3);
  if (self != 0) {
    objc_stub::setDelegate_(self,param_1);
  }
  _swift_release(pMVar3);
  return self;
}



/* Address: 0x100044204 | _TtCCC5Paste11SearchField9InputViewP33_88626D17C36931F5670CC3740FF350508TextView::initWithFrame:textContainer: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x38 bytes */

ID _TtCCC5Paste11SearchField9InputViewP33_88626D17C36931F5670CC3740FF350508TextView::
   initWithFrame_textContainer_(ID param_1,SEL param_2,CGRect param_3,ID param_4)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  double dVar6;
  
  dVar6 = param_3.field0_0x0.field0_0x0;
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
              ("Paste/SearchField.InputView.swift",0x21,1,0x97,UVar4.unknown,puVar3);
  }
  FUN_100044aec();
  _swift_release(pMVar2);
  return (ID)dVar6;
}



/* Address: 0x10004430c | FUN_10004430c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10004430c(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ID IVar7;
  long unaff_x20;
  undefined8 uVar8;
  
  _swift_getObjectType();
  *(undefined1 *)
   (unaff_x20 +
   _TtCCC5Paste11SearchField9InputViewP33_88626D17C36931F5670CC3740FF350508TextView::canAcceptFocus)
       = 1;
  lVar1 = _TtCCC5Paste11SearchField9InputViewP33_88626D17C36931F5670CC3740FF350508TextView::
          preferredTypingAttributes;
  puVar2 = &DAT_100fa6c50;
  FUN_1000037f0(&DAT_100fa6c50,&DAT_100c237b0);
  _swift_initStackObject();
  *(undefined8 *)(puVar2 + 0x18) = 4;
  *(undefined8 *)(puVar2 + 0x10) = 2;
  puVar3 = *(undefined8 **)PTR__NSForegroundColorAttributeName_100ea90c8;
  *(undefined8 **)(puVar2 + 0x20) = puVar3;
  FUN_1001fe15c();
  uVar8 = *puVar3;
  uVar4 = 0;
  FUN_10000ec2c(0,&DAT_100fa8670,&PTR__OBJC_CLASS___NSColor_100f8d680);
  *(undefined8 *)(puVar2 + 0x28) = uVar8;
  uVar8 = *(undefined8 *)PTR__NSFontAttributeName_100ea9048;
  *(undefined8 *)(puVar2 + 0x40) = uVar4;
  *(undefined8 *)(puVar2 + 0x48) = uVar8;
  uVar4 = 0;
  FUN_10000ec2c(0,&DAT_100fa6c38,&PTR__OBJC_CLASS___NSFont_100f8d678);
  FUN_1001ff928();
  *(undefined8 *)(puVar2 + 0x68) = uVar4;
  *(undefined8 *)(puVar2 + 0x50) = uVar8;
  puVar5 = puVar2;
  FUN_10001072c();
  _swift_setDeallocating(puVar2);
  puVar6 = &DAT_100fa6c58;
  FUN_1000037f0(&DAT_100fa6c58,&DAT_100c255f0);
  _swift_arrayDestroy(puVar2 + 0x20,2,puVar6);
  *(undefined **)(unaff_x20 + lVar1) = puVar5;
  *(undefined8 *)
   (unaff_x20 +
   _TtCCC5Paste11SearchField9InputViewP33_88626D17C36931F5670CC3740FF350508TextView::
   ___lazy_storage___placeholderLabel) = 0;
  IVar7 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff20,"initWithCoder:",param_1);
  return IVar7;
}



/* Address: 0x1000444b0 | _TtCCC5Paste11SearchField9InputViewP33_88626D17C36931F5670CC3740FF350508TextView::initWithCoder: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtCCC5Paste11SearchField9InputViewP33_88626D17C36931F5670CC3740FF350508TextView::initWithCoder_
             (ID param_1,SEL param_2,ID param_3)

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
              ("Paste/SearchField.InputView.swift",0x21,1,0x97,UVar4.unknown,puVar3);
  }
  FUN_10004430c();
  _swift_release(pMVar2);
  return param_3;
}



/* Address: 0x100044578 | FUN_100044578 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100044578(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined8 uVar7;
  
  _swift_getObjectType();
  *(undefined1 *)
   (unaff_x20 +
   _TtCCC5Paste11SearchField9InputViewP33_88626D17C36931F5670CC3740FF350508TextView::canAcceptFocus)
       = 1;
  lVar1 = _TtCCC5Paste11SearchField9InputViewP33_88626D17C36931F5670CC3740FF350508TextView::
          preferredTypingAttributes;
  puVar2 = &DAT_100fa6c50;
  FUN_1000037f0(&DAT_100fa6c50,&DAT_100c237b0);
  _swift_initStackObject();
  *(undefined8 *)(puVar2 + 0x18) = 4;
  *(undefined8 *)(puVar2 + 0x10) = 2;
  puVar3 = *(undefined8 **)PTR__NSForegroundColorAttributeName_100ea90c8;
  *(undefined8 **)(puVar2 + 0x20) = puVar3;
  FUN_1001fe15c();
  uVar7 = *puVar3;
  uVar4 = 0;
  FUN_10000ec2c(0,&DAT_100fa8670,&PTR__OBJC_CLASS___NSColor_100f8d680);
  *(undefined8 *)(puVar2 + 0x28) = uVar7;
  uVar7 = *(undefined8 *)PTR__NSFontAttributeName_100ea9048;
  *(undefined8 *)(puVar2 + 0x40) = uVar4;
  *(undefined8 *)(puVar2 + 0x48) = uVar7;
  uVar4 = 0;
  FUN_10000ec2c(0,&DAT_100fa6c38,&PTR__OBJC_CLASS___NSFont_100f8d678);
  FUN_1001ff928();
  *(undefined8 *)(puVar2 + 0x68) = uVar4;
  *(undefined8 *)(puVar2 + 0x50) = uVar7;
  puVar5 = puVar2;
  FUN_10001072c();
  _swift_setDeallocating(puVar2);
  puVar6 = &DAT_100fa6c58;
  FUN_1000037f0(&DAT_100fa6c58,&DAT_100c255f0);
  _swift_arrayDestroy(puVar2 + 0x20,2,puVar6);
  *(undefined **)(unaff_x20 + lVar1) = puVar5;
  *(undefined8 *)
   (unaff_x20 +
   _TtCCC5Paste11SearchField9InputViewP33_88626D17C36931F5670CC3740FF350508TextView::
   ___lazy_storage___placeholderLabel) = 0;
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff10,"initWithFrame:",param_1,param_2,
                      param_3,param_4);
  return;
}



/* Address: 0x100044718 | _TtCCC5Paste11SearchField9InputViewP33_88626D17C36931F5670CC3740FF350508TextView::initWithFrame: */

/* Function Stack Size: 0x30 bytes */

ID _TtCCC5Paste11SearchField9InputViewP33_88626D17C36931F5670CC3740FF350508TextView::initWithFrame_
             (ID param_1,SEL param_2,CGRect param_3)

{
  FUN_100044728(param_1,param_2,0x97,FUN_100044578,param_3.field1_0x10.field0_0x0,
                param_3.field1_0x10.field1_0x8);
  return param_1;
}



/* Address: 0x100044728 | FUN_100044728 */

char * FUN_100044728(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  pcVar5 = (char *)UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar5 & 1) == 0) {
    pcVar5 = "Paste/SearchField.InputView.swift";
    _swift_task_reportUnexpectedExecutor
              ("Paste/SearchField.InputView.swift",0x21,1,param_7,UVar4.unknown,puVar3);
  }
  (*param_8)(param_1,param_2,param_3,param_4);
  _swift_release(pMVar2);
  return pcVar5;
}



/* Address: 0x100044824 | _TtCCC5Paste11SearchField9InputViewP33_88626D17C36931F5670CC3740FF350508TextView::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtCCC5Paste11SearchField9InputViewP33_88626D17C36931F5670CC3740FF350508TextView::_cxx_destruct
               (ID param_1,SEL param_2)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + preferredTypingAttributes));
  return;
}



/* Address: 0x10004485c | FUN_10004485c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10004485c(void)

{
  return ZEXT816(0x100f907e0);
}



/* Address: 0x10004487c | _TtCCC5Paste11SearchField9InputViewP33_88626D17C36931F5670CC3740FF350508TextView::menuWillOpen: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtCCC5Paste11SearchField9InputViewP33_88626D17C36931F5670CC3740FF350508TextView::menuWillOpen_
               (ID param_1,SEL param_2,ID param_3)

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
              ("Paste/SearchField.InputView.swift",0x21,1,0x105,UVar4.unknown,puVar3);
  }
  FUN_10021b56c(param_3);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x10004493c | FUN_10004493c */

void FUN_10004493c(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  long unaff_x20;
  String SVar3;
  
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
  SVar3.bridgeObject = (void *)0x2;
  SVar3.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar3,(StaticString)0xd000000000000025,0x8000000100d8dc00,
             0xd8e730);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1000449e8);
  (*pcVar2)();
}



/* Address: 0x1000449e8 | FUN_1000449e8 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000449e8(ID param_1)

{
  ulong uVar1;
  ID IVar2;
  void *pvVar3;
  long unaff_x20;
  undefined8 uVar4;
  String SVar5;
  
  FUN_100042b50();
  FUN_100041f9c();
  IVar2 = param_1;
  FUN_1000436a0();
  objc_stub::string(param_1);
  SVar5 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pvVar3 = SVar5.bridgeObject;
  _swift_bridgeObjectRelease(pvVar3);
  uVar1 = (ulong)SVar5.str & 0xffffffffffff;
  if (((ulong)pvVar3 & 0x2000000000000000) != 0) {
    uVar1 = (ulong)pvVar3 >> 0x38 & 0xf;
  }
  objc_stub::setHidden_(IVar2,(ulong)(uVar1 != 0));
  IVar2 = 0;
  FUN_100041f9c();
  IVar2 = objc_stub::textStorage(IVar2);
  if (IVar2 == 0) {
    uVar4 = 0x4000000000000000;
  }
  else {
    IVar2 = objc_stub::containsAttachments(IVar2);
    uVar4 = 0;
    if ((int)IVar2 == 0) {
      uVar4 = 0x4000000000000000;
    }
  }
  objc_stub::setTextContainerInset_
            (*(ID *)(unaff_x20 + _TtCC5Paste11SearchField9InputView::___lazy_storage___textView),0,
             uVar4);
  return;
}



/* Address: 0x100044aec | FUN_100044aec */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100044aec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined8 uVar7;
  
  _swift_getObjectType();
  *(undefined1 *)
   (unaff_x20 +
   _TtCCC5Paste11SearchField9InputViewP33_88626D17C36931F5670CC3740FF350508TextView::canAcceptFocus)
       = 1;
  lVar1 = _TtCCC5Paste11SearchField9InputViewP33_88626D17C36931F5670CC3740FF350508TextView::
          preferredTypingAttributes;
  puVar2 = &DAT_100fa6c50;
  FUN_1000037f0(&DAT_100fa6c50,&DAT_100c237b0);
  _swift_initStackObject();
  *(undefined8 *)(puVar2 + 0x18) = 4;
  *(undefined8 *)(puVar2 + 0x10) = 2;
  puVar3 = *(undefined8 **)PTR__NSForegroundColorAttributeName_100ea90c8;
  *(undefined8 **)(puVar2 + 0x20) = puVar3;
  FUN_1001fe15c();
  uVar7 = *puVar3;
  uVar4 = 0;
  FUN_10000ec2c(0,&DAT_100fa8670,&PTR__OBJC_CLASS___NSColor_100f8d680);
  *(undefined8 *)(puVar2 + 0x28) = uVar7;
  uVar7 = *(undefined8 *)PTR__NSFontAttributeName_100ea9048;
  *(undefined8 *)(puVar2 + 0x40) = uVar4;
  *(undefined8 *)(puVar2 + 0x48) = uVar7;
  uVar4 = 0;
  FUN_10000ec2c(0,&DAT_100fa6c38,&PTR__OBJC_CLASS___NSFont_100f8d678);
  FUN_1001ff928();
  *(undefined8 *)(puVar2 + 0x68) = uVar4;
  *(undefined8 *)(puVar2 + 0x50) = uVar7;
  puVar5 = puVar2;
  FUN_10001072c();
  _swift_setDeallocating(puVar2);
  puVar6 = &DAT_100fa6c58;
  FUN_1000037f0(&DAT_100fa6c58,&DAT_100c255f0);
  _swift_arrayDestroy(puVar2 + 0x20,2,puVar6);
  *(undefined **)(unaff_x20 + lVar1) = puVar5;
  *(undefined8 *)
   (unaff_x20 +
   _TtCCC5Paste11SearchField9InputViewP33_88626D17C36931F5670CC3740FF350508TextView::
   ___lazy_storage___placeholderLabel) = 0;
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff00,"initWithFrame:textContainer:",param_1,
                      param_2,param_3,param_4,param_5);
  return;
}



/* Address: 0x100044c9c | FUN_100044c9c */

void FUN_100044c9c(void)

{
  long unaff_x20;
  
  FUN_100042d64(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100044ca4 | FUN_100044ca4 */

void FUN_100044ca4(void)

{
  long unaff_x20;
  
  FUN_100042db0(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100044cac | FUN_100044cac */

void FUN_100044cac(void)

{
  long unaff_x20;
  
  _swift_unknownObjectWeakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x100044cd0 | FUN_100044cd0 */

void FUN_100044cd0(void)

{
  FUN_100042dfc();
  return;
}



/* Address: 0x100044cd8 | FUN_100044cd8 */

void FUN_100044cd8(void)

{
  long unaff_x20;
  
  FUN_1000424e8(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100044ce0 | FUN_100044ce0 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

ID FUN_100044ce0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  ID IVar6;
  ID self;
  NSString *pNVar7;
  undefined8 uVar8;
  long unaff_x20;
  ID IVar9;
  undefined1 auStack_c0 [16];
  ID local_b0;
  
  _swift_getObjectType();
  lVar2 = _TtCC5Paste11SearchField10FilterView::stackView;
  puVar5 = &_OBJC_CLASS___NSStackView;
  _objc_allocWithZone();
  IVar6 = objc_stub::init((ID)puVar5);
  *(ID *)(unaff_x20 + lVar2) = IVar6;
  lVar2 = _TtCC5Paste11SearchField10FilterView::iconView;
  puVar5 = &_OBJC_CLASS___NSImageView;
  _objc_allocWithZone();
  IVar6 = objc_stub::init((ID)puVar5);
  *(ID *)(unaff_x20 + lVar2) = IVar6;
  lVar2 = _TtCC5Paste11SearchField10FilterView::label;
  puVar5 = &_OBJC_CLASS___NSTextField;
  _objc_allocWithZone();
  IVar6 = objc_stub::init((ID)puVar5);
  *(ID *)(unaff_x20 + lVar2) = IVar6;
  puVar1 = (undefined8 *)(unaff_x20 + _TtCC5Paste11SearchField10FilterView::onClick);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  FUN_100011128(param_4,param_5);
  self = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff90,"initWithFrame:",0,0,0,0);
  objc_stub::setWantsLayer_(self,1);
  lVar3 = _TtCC5Paste11SearchField10FilterView::iconView;
  IVar6 = *(ID *)(self + _TtCC5Paste11SearchField10FilterView::iconView);
  uVar8 = param_1;
  FUN_1000546e0(param_1,param_2,param_3);
  objc_stub::setImage_(IVar6,uVar8);
  IVar9 = *(ID *)(self + lVar3);
  IVar6 = NSColor::labelColor((ID)&_OBJC_CLASS___NSColor);
  objc_stub::setContentTintColor_(IVar9,IVar6);
  lVar4 = _TtCC5Paste11SearchField10FilterView::label;
  objc_stub::setEditable_(*(ID *)(self + _TtCC5Paste11SearchField10FilterView::label),0);
  objc_stub::setSelectable_(*(ID *)(self + lVar4),0);
  objc_stub::setBordered_(*(ID *)(self + lVar4),0);
  objc_stub::setDrawsBackground_(*(ID *)(self + lVar4),0);
  IVar9 = *(ID *)(self + lVar4);
  FUN_10000ec2c(0,&DAT_100fa6c38,&PTR__OBJC_CLASS___NSFont_100f8d678);
  IVar6 = IVar9;
  FUN_1001ff928();
  objc_stub::setFont_(IVar9,IVar6);
  IVar6 = *(ID *)(self + lVar4);
  IVar9 = NSColor::labelColor((ID)&_OBJC_CLASS___NSColor);
  objc_stub::setTextColor_(IVar6,IVar9);
  IVar6 = *(ID *)(self + lVar4);
  FUN_1002ddc10(param_1,param_2,param_3);
  _swift_bridgeObjectRelease(param_3);
  pNVar7 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_2);
  objc_stub::setText_(IVar6,pNVar7);
  lVar2 = _TtCC5Paste11SearchField10FilterView::stackView;
  objc_stub::setOrientation_(*(ID *)(self + _TtCC5Paste11SearchField10FilterView::stackView),0);
  objc_stub::setAlignment_(*(ID *)(self + lVar2),10);
  objc_stub::setSpacing_(*(ID *)(self + lVar2),0x4000000000000000);
  puVar5 = &DAT_100fa6b80;
  FUN_1000037f0(&DAT_100fa6b80,&DAT_100c23760);
  _swift_initStackObject();
  *(undefined8 *)(puVar5 + 0x18) = 5;
  *(undefined8 *)(puVar5 + 0x10) = 2;
  *(undefined8 *)(puVar5 + 0x20) = *(undefined8 *)(self + lVar3);
  *(undefined8 *)(puVar5 + 0x28) = *(undefined8 *)(self + lVar4);
  FUN_100201b9c(puVar5);
  _swift_setDeallocating(puVar5);
  _swift_arrayDestroy(puVar5 + 0x20,*(undefined8 *)(puVar5 + 0x10),
                      PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8);
  uVar8 = *(undefined8 *)(self + lVar2);
  local_b0 = self;
  FUN_1001fa09c(uVar8,FUN_100045678,auStack_c0);
  _swift_bridgeObjectRelease(uVar8);
  FUN_100004550(param_4,param_5);
  return self;
}



/* Address: 0x1000450a8 | FUN_1000450a8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_1000450a8(undefined8 param_1)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 local_68 [3];
  undefined8 local_50;
  undefined **ppuStack_48;
  
  uVar7 = param_1;
  _swift_getObjectType();
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1000081a8();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/SearchField.FilterView.swift",0x22,1,0x21,UVar3.unknown,pMVar1);
  }
  ppuStack_48 = &PTR_PTR_100ec00e8;
  uVar5 = 0;
  local_68[0] = param_1;
  local_50 = uVar7;
  FUN_10000ec2c(0,&DAT_100fa6c68,&PTR__OBJC_CLASS___NSStackView_100f8d698);
  puVar6 = local_68;
  FUN_1001f97b4(0x4000000000000000,0x4018000000000000,0x4000000000000000,0x4018000000000000,puVar6,
                uVar5,&PTR_PTR_100ec00e8);
  FUN_100004594(local_68);
  uVar7 = 0;
  FUN_10000ec2c(0,&DAT_100fa8850,&PTR__OBJC_CLASS___NSImageView_100f8d6a0);
  FUN_1001f9e3c(0x4028000000000000,0x4028000000000000);
  puVar8 = &DAT_100fa8830;
  FUN_1000037f0(&DAT_100fa8830,&DAT_100c24a20);
  _swift_initStackObject();
  *(undefined8 *)(puVar8 + 0x18) = 4;
  *(undefined8 *)(puVar8 + 0x10) = 2;
  puVar9 = &DAT_100fa8840;
  FUN_1000037f0(&DAT_100fa8840,&DAT_100c237d0);
  *(undefined **)(puVar8 + 0x38) = puVar9;
  *(undefined ***)(puVar8 + 0x40) = &PTR_PTR_100ec00b8;
  *(undefined8 **)(puVar8 + 0x20) = puVar6;
  *(undefined **)(puVar8 + 0x60) = puVar9;
  *(undefined ***)(puVar8 + 0x68) = &PTR_PTR_100ec00b8;
  *(undefined8 *)(puVar8 + 0x48) = uVar7;
  puVar10 = puVar8;
  FUN_1001f8d60(puVar8);
  _swift_setDeallocating(puVar8);
  uVar7 = *(undefined8 *)(puVar8 + 0x10);
  puVar9 = &DAT_100fa6bc0;
  FUN_1000037f0(&DAT_100fa6bc0,&DAT_100c24a30);
  _swift_arrayDestroy(puVar8 + 0x20,uVar7,puVar9);
  _swift_release(pMVar2);
  return puVar10;
}



/* Address: 0x10004528c | _TtCC5Paste11SearchField10FilterView::initWithCoder: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtCC5Paste11SearchField10FilterView::initWithCoder_(ID param_1,SEL param_2,ID param_3)

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
              ("Paste/SearchField.FilterView.swift",0x22,1,0x28,UVar3.unknown,pMVar1);
  }
  FUN_100045680();
  _swift_release(pMVar2);
  return param_3;
}



/* Address: 0x100045338 | FUN_100045338 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100045338(void)

{
  ID *self;
  ID *pIVar1;
  ID IVar2;
  ID unaff_x20;
  double extraout_d0;
  double dVar3;
  
  _swift_getObjectType();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffd0,"layout");
  objc_stub::bounds(unaff_x20);
  dVar3 = extraout_d0;
  _CGRectGetHeight();
  objc_stub::setCornerRadius_curve_
            (unaff_x20,dVar3 * 0.5,*(undefined8 *)PTR__kCACornerCurveContinuous_100eaa3a0);
  self = (ID *)objc_stub::layer(unaff_x20);
  if (self != (ID *)0x0) {
    pIVar1 = self;
    FUN_1001ff0d0();
    IVar2 = objc_stub::CGColor(*pIVar1);
    objc_stub::setBackgroundColor_((ID)self,IVar2);
  }
  return 0;
}



/* Address: 0x1000453e8 | _TtCC5Paste11SearchField10FilterView::layout */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtCC5Paste11SearchField10FilterView::layout(ID param_1,SEL param_2)

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
              ("Paste/SearchField.FilterView.swift",0x22,1,0x2c,UVar3.unknown,pMVar1);
  }
  FUN_100045338(param_1);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x100045484 | _TtCC5Paste11SearchField10FilterView::mouseDown: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtCC5Paste11SearchField10FilterView::mouseDown_(ID param_1,SEL param_2,ID param_3)

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
              ("Paste/SearchField.FilterView.swift",0x22,1,0x34,UVar3.unknown,pMVar1);
  }
  if (*(code **)(param_1 + onClick) != (code *)0x0) {
    (**(code **)(param_1 + onClick))(param_3);
    _swift_release(pMVar2);
    return;
  }
  _swift_release(pMVar2);
  return;
}



/* Address: 0x100045574 | _TtCC5Paste11SearchField10FilterView::initWithFrame: */

/* Function Stack Size: 0x30 bytes */

ID _TtCC5Paste11SearchField10FilterView::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

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
    _swift_task_reportUnexpectedExecutor
              ("Paste/SearchField.FilterView.swift",0x22,1,5,UVar3.unknown,pMVar2);
  }
  __swift_stdlib_reportUnimplementedInitializer("Paste.FilterView",0x10,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1000455fc);
  (*pcVar1)();
}



/* Address: 0x1000455fc | _TtCC5Paste11SearchField10FilterView::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtCC5Paste11SearchField10FilterView::_cxx_destruct(ID param_1,SEL param_2)

{
  FUN_100004550(*(undefined8 *)(param_1 + onClick),((undefined8 *)(param_1 + onClick))[1]);
  return;
}



/* Address: 0x100045658 | FUN_100045658 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100045658(void)

{
  return ZEXT816(0x100f908a8);
}



/* Address: 0x100045678 | FUN_100045678 */

void FUN_100045678(void)

{
  long unaff_x20;
  
  FUN_1000450a8(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100045680 | FUN_100045680 */

void FUN_100045680(void)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  ID IVar4;
  long unaff_x20;
  String SVar5;
  
  lVar1 = _TtCC5Paste11SearchField10FilterView::stackView;
  puVar3 = &_OBJC_CLASS___NSStackView;
  _objc_allocWithZone();
  IVar4 = objc_stub::init((ID)puVar3);
  *(ID *)(unaff_x20 + lVar1) = IVar4;
  lVar1 = _TtCC5Paste11SearchField10FilterView::iconView;
  puVar3 = &_OBJC_CLASS___NSImageView;
  _objc_allocWithZone();
  IVar4 = objc_stub::init((ID)puVar3);
  *(ID *)(unaff_x20 + lVar1) = IVar4;
  lVar1 = _TtCC5Paste11SearchField10FilterView::label;
  puVar3 = &_OBJC_CLASS___NSTextField;
  _objc_allocWithZone();
  IVar4 = objc_stub::init((ID)puVar3);
  *(ID *)(unaff_x20 + lVar1) = IVar4;
  SVar5.bridgeObject = (void *)0x2;
  SVar5.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar5,(StaticString)0xd000000000000025,0x8000000100d8dc00,
             0xd8e780);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100045730);
  (*pcVar2)();
}



/* Address: 0x100045730 | FUN_100045730 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100045730(void)

{
  long lVar1;
  ID IVar2;
  undefined *self;
  long unaff_x20;
  undefined1 auStack_38 [8];
  
  lVar1 = _TtC5Paste11SearchField::___lazy_storage___filtersButton;
  IVar2 = *(ID *)(unaff_x20 + _TtC5Paste11SearchField::___lazy_storage___filtersButton);
  if (IVar2 == 0) {
    self = &_OBJC_CLASS___NSButton;
    _objc_allocWithZone();
    IVar2 = objc_stub::init((ID)self);
    _swift_unknownObjectWeakInit(auStack_38);
    FUN_100045edc(IVar2,auStack_38);
    _swift_unknownObjectWeakDestroy(auStack_38);
    *(ID *)(unaff_x20 + lVar1) = IVar2;
  }
  return IVar2;
}



/* Address: 0x1000457cc | FUN_1000457cc */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined8 FUN_1000457cc(undefined8 param_1,double param_2,ID param_3)

{
  ID self;
  NSString *pNVar1;
  ID self_00;
  undefined *puVar2;
  ID IVar3;
  undefined8 uVar4;
  NSArray *pNVar5;
  NSNumber *this;
  NSNumber *pNVar6;
  double extraout_d0;
  double extraout_d0_00;
  double extraout_d0_01;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_180 [128];
  undefined1 auStack_100 [128];
  
  FUN_100045730();
  self = objc_stub::layer(param_3);
  if (self != 0) {
    objc_stub::anchorPoint(self);
    objc_stub::bounds(self);
    dVar9 = extraout_d0_00;
    _CGRectGetWidth();
    dVar7 = (0.5 - extraout_d0) * dVar9;
    objc_stub::anchorPoint(self);
    objc_stub::bounds(self);
    dVar10 = extraout_d0_01;
    _CGRectGetHeight();
    dVar8 = (0.5 - param_2) * dVar10;
    pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    self_00 = CAKeyframeAnimation::animationWithKeyPath_
                        ((ID)&_OBJC_CLASS___CAKeyframeAnimation,pNVar1);
    puVar2 = &DAT_100fa82e0;
    FUN_1000037f0(&DAT_100fa82e0,&DAT_100c25360);
    _swift_allocObject();
    *(undefined8 *)(puVar2 + 0x18) = 8;
    *(undefined8 *)(puVar2 + 0x10) = 4;
    _CATransform3DMakeTranslation(auStack_100,dVar7,dVar8,0);
    _CATransform3DScale(auStack_180,0x3ff0000000000000,0x3ff0000000000000,0x3ff0000000000000,
                        auStack_100);
    dVar9 = -((0.5 - extraout_d0) * dVar9);
    dVar10 = -((0.5 - param_2) * dVar10);
    _CATransform3DTranslate(auStack_100,dVar9,dVar10,0,auStack_180);
    IVar3 = NSValue::valueWithCATransform3D_((ID)&_OBJC_CLASS___NSValue,auStack_100);
    uVar4 = 0;
    FUN_10000ec2c(0,&DAT_100fa87e8,&PTR__OBJC_CLASS___NSValue_100f8d748);
    *(undefined8 *)(puVar2 + 0x38) = uVar4;
    *(ID *)(puVar2 + 0x20) = IVar3;
    _CATransform3DMakeTranslation(auStack_100,dVar7,dVar8,0);
    _CATransform3DScale(auStack_180,0x3ff28f5c28f5c28f,0x3ff28f5c28f5c28f,0x3ff0000000000000,
                        auStack_100);
    _CATransform3DTranslate(auStack_100,dVar9,dVar10,0,auStack_180);
    IVar3 = NSValue::valueWithCATransform3D_((ID)&_OBJC_CLASS___NSValue,auStack_100);
    *(undefined8 *)(puVar2 + 0x58) = uVar4;
    *(ID *)(puVar2 + 0x40) = IVar3;
    _CATransform3DMakeTranslation(auStack_100,dVar7,dVar8,0);
    _CATransform3DScale(auStack_180,0x3fef5c28f5c28f5c,0x3fef5c28f5c28f5c,0x3ff0000000000000,
                        auStack_100);
    _CATransform3DTranslate(auStack_100,dVar9,dVar10,0,auStack_180);
    IVar3 = NSValue::valueWithCATransform3D_((ID)&_OBJC_CLASS___NSValue,auStack_100);
    *(undefined8 *)(puVar2 + 0x78) = uVar4;
    *(ID *)(puVar2 + 0x60) = IVar3;
    _CATransform3DMakeTranslation(auStack_100,dVar7,dVar8,0);
    _CATransform3DScale(auStack_180,0x3ff0000000000000,0x3ff0000000000000,0x3ff0000000000000,
                        auStack_100);
    _CATransform3DTranslate(auStack_100,dVar9,dVar10,0,auStack_180);
    IVar3 = NSValue::valueWithCATransform3D_((ID)&_OBJC_CLASS___NSValue,auStack_100);
    *(undefined8 *)(puVar2 + 0x98) = uVar4;
    *(ID *)(puVar2 + 0x80) = IVar3;
    pNVar5 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
    _swift_release(puVar2);
    CAKeyframeAnimation::setValues_(self_00,pNVar5);
    puVar2 = &DAT_100fa6b80;
    FUN_1000037f0(&DAT_100fa6b80,&DAT_100c23760);
    _swift_allocObject();
    *(undefined8 *)(puVar2 + 0x18) = 9;
    *(undefined8 *)(puVar2 + 0x10) = 4;
    this = (NSNumber *)0x0;
    FUN_10000ec2c(0,&DAT_100fa87f8,&PTR__OBJC_CLASS___NSNumber_100f8d750);
    pNVar6 = (extension_Foundation)::__C::NSNumber::__allocating_init(this,0);
    *(NSNumber **)(puVar2 + 0x20) = pNVar6;
    pNVar6 = (extension_Foundation)::__C::NSNumber::__allocating_init(this,0.35);
    *(NSNumber **)(puVar2 + 0x28) = pNVar6;
    pNVar6 = (extension_Foundation)::__C::NSNumber::__allocating_init(this,0.7);
    *(NSNumber **)(puVar2 + 0x30) = pNVar6;
    pNVar6 = (extension_Foundation)::__C::NSNumber::__allocating_init(this,1);
    *(NSNumber **)(puVar2 + 0x38) = pNVar6;
    pNVar5 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
    _swift_release(puVar2);
    CAKeyframeAnimation::setKeyTimes_(self_00,pNVar5);
    CAKeyframeAnimation::setCalculationMode_
              (self_00,*(undefined8 *)PTR__kCAAnimationCubic_100eaa390);
    CAKeyframeAnimation::setDuration_(self_00,0x3fd1eb851eb851ec);
    pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    objc_stub::addAnimation_forKey_(self,self_00,pNVar1);
  }
  return 0;
}



/* Address: 0x100045c2c | FUN_100045c2c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100045c2c(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ID self;
  undefined *puVar5;
  undefined *self_00;
  undefined *puVar6;
  long unaff_x20;
  
  lVar4 = _TtC5Paste11SearchField::___lazy_storage___inputView;
  self = *(ID *)(unaff_x20 + _TtC5Paste11SearchField::___lazy_storage___inputView);
  if (self == 0) {
    FUN_100042ebc();
    _swift_getObjCClassFromMetadata();
    _objc_allocWithZone();
    self = objc_stub::init(self);
    puVar5 = &DAT_100eb1b08;
    _swift_allocObject(&DAT_100eb1b08,0x18,7);
    self_00 = puVar5 + 0x10;
    _swift_unknownObjectWeakInit();
    FUN_100041f9c();
    puVar6 = puVar5 + 0x10;
    _swift_unknownObjectWeakLoadStrong(puVar6);
    objc_stub::setDelegate_((ID)self_00,puVar6);
    puVar1 = (undefined8 *)(self + _TtCC5Paste11SearchField9InputView::onClear);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    *puVar1 = FUN_1000482b8;
    puVar1[1] = puVar5;
    _swift_retain(puVar5);
    FUN_100004550(uVar2,uVar3);
    _swift_release(puVar5);
    *(ID *)(unaff_x20 + lVar4) = self;
  }
  return self;
}



/* Address: 0x100045d40 | FUN_100045d40 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 * FUN_100045d40(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  byte bVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ID IVar8;
  undefined8 *puVar9;
  long unaff_x20;
  
  lVar4 = _TtC5Paste11SearchField::___lazy_storage___searchIconView;
  puVar6 = *(undefined8 **)(unaff_x20 + _TtC5Paste11SearchField::___lazy_storage___searchIconView);
  if (puVar6 == (undefined8 *)0x0) {
    FUN_10020d45c();
    puVar3 = PTR__NSFontTextStyleTitle2_100ea9098;
    puVar1 = (undefined8 *)PTR__NSFontTextStyleBody_100ea9050;
    puVar9 = (undefined8 *)*puVar6;
    uVar2 = puVar6[1];
    bVar5 = Swift::_stdlib_isOSVersionAtLeast(0x1a,0,0);
    if ((bVar5 & 1) == 0) {
      puVar1 = (undefined8 *)puVar3;
    }
    uVar7 = *puVar1;
    FUN_10000ec2c(0,&DAT_100fa8850,&PTR__OBJC_CLASS___NSImageView_100f8d6a0);
    _swift_bridgeObjectRetain(uVar2);
    IVar8 = NSImageSymbolConfiguration::configurationWithTextStyle_
                      ((ID)&_OBJC_CLASS___NSImageSymbolConfiguration,uVar7);
    FUN_10020dce0(puVar9,uVar2,IVar8);
    *(undefined8 **)(unaff_x20 + lVar4) = puVar9;
    puVar6 = puVar9;
  }
  return puVar6;
}



/* Address: 0x100045e54 | FUN_100045e54 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

code * FUN_100045e54(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 == 0) {
    return (code *)0x0;
  }
  pcVar1 = *(code **)(param_1 + _TtC5Paste11SearchField::onClear);
  if (pcVar1 != (code *)0x0) {
    uVar2 = ((undefined8 *)(param_1 + _TtC5Paste11SearchField::onClear))[1];
    FUN_100011128(pcVar1,uVar2);
    (*pcVar1)(0);
    FUN_100004550(pcVar1,uVar2);
    return pcVar1;
  }
  return (code *)0x0;
}



/* Address: 0x100045edc | FUN_100045edc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100045edc(ID param_1,undefined8 param_2,undefined8 param_3,void *param_4)

{
  long lVar1;
  code *pcVar2;
  LocalizedStringResource LVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  char *pcVar7;
  NSString *pNVar8;
  void *pvVar9;
  char *pcVar10;
  long extraout_x8;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  String local_50;
  
  LVar3 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar3.unknown + -8) + 0x40));
  LVar3.unknown = (undefined *)((long)&local_50 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  plVar4 = (long *)0x0;
  FUN_10000ec2c(0,&DAT_100fa8680,&PTR__OBJC_CLASS___NSImage_100f8d6b8);
  FUN_10020d37c();
  lVar6 = *plVar4;
  lVar1 = plVar4[1];
  _swift_bridgeObjectRetain_n(lVar1,2);
  lVar5 = lVar6;
  FUN_1000f653c(lVar6,lVar1);
  if (lVar5 == 0) {
    _swift_bridgeObjectRelease(lVar1);
    lVar6 = -0x2fffffffffffffed;
    FUN_1000f653c(0xd000000000000013,0x8000000100d8de20);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1000460b8);
      (*pcVar2)();
    }
  }
  else {
    FUN_1000f653c(lVar6,lVar1);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100045f88);
      (*pcVar2)();
    }
  }
  objc_stub::setImage_(param_1,lVar6);
  objc_stub::setAction_(param_1,"didClickFiltersButton");
  _swift_unknownObjectWeakLoadStrong(param_2);
  objc_stub::setTarget_(param_1,param_2);
  objc_stub::setRefusesFirstResponder_(param_1,1);
  objc_stub::setBordered_(param_1,0);
  pcVar10 = &DAT_00000001;
  objc_stub::setWantsLayer_(param_1);
  FUN_1001db854(LVar3.unknown);
  local_50 = (extension_Foundation)::Swift::String::init(LVar3);
  SVar11.bridgeObject = &SUB_e200000000000000;
  SVar11.str = (char *)0x2820;
  SVar14.bridgeObject = param_4;
  SVar14.str = pcVar10;
  Swift::String::append(SVar11,SVar14);
  pcVar7 = (char *)0x66;
  FUN_1001e94d4(0x66,0xe100000000000000);
  pvVar9 = (void *)0x100000;
  FUN_1001e9cc8();
  SVar12.bridgeObject = pvVar9;
  SVar12.str = pcVar7;
  SVar15.bridgeObject = param_4;
  SVar15.str = pcVar10;
  Swift::String::append(SVar12,SVar15);
  _swift_bridgeObjectRelease(pvVar9);
  SVar13.bridgeObject = (void *)0xe100000000000000;
  SVar13.str = (char *)0x29;
  SVar16.bridgeObject = param_4;
  SVar16.str = pcVar10;
  Swift::String::append(SVar13,SVar16);
  pvVar9 = local_50.bridgeObject;
  pNVar8 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(pvVar9);
  objc_stub::setToolTip_(param_1,pNVar8);
  return 0;
}



/* Address: 0x1000460b8 | _TtC5Paste11SearchField::didClickFiltersButton */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC5Paste11SearchField::didClickFiltersButton(ID param_1,SEL param_2)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  code *pcVar5;
  undefined8 uVar6;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1000081a8();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor("Paste/SearchField.swift",0x17,1,0x29,UVar3.unknown,pMVar1)
    ;
  }
  pcVar5 = *(code **)(param_1 + onShowFilters);
  if (pcVar5 != (code *)0x0) {
    uVar6 = ((undefined8 *)(param_1 + onShowFilters))[1];
    FUN_100011128(pcVar5,uVar6);
    FUN_100045730();
    (*pcVar5)();
    FUN_100004550(pcVar5,uVar6);
  }
  _swift_release(pMVar2);
  return;
}



/* Address: 0x1000461a4 | FUN_1000461a4 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 *
FUN_1000461a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined1 auStack_b0 [16];
  undefined8 *local_a0;
  
  _swift_getObjectType();
  puVar2 = (undefined8 *)(unaff_x20 + _TtC5Paste11SearchField::onShowFilters);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(unaff_x20 + _TtC5Paste11SearchField::onTextShouldChange);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(unaff_x20 + _TtC5Paste11SearchField::onSelectionChange);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(unaff_x20 + _TtC5Paste11SearchField::onEndEditing);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(unaff_x20 + _TtC5Paste11SearchField::onEnter);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(unaff_x20 + _TtC5Paste11SearchField::onCancel);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(unaff_x20 + _TtC5Paste11SearchField::onClear);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(unaff_x20 + _TtC5Paste11SearchField::onUndo);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(unaff_x20 + _TtC5Paste11SearchField::onRedo);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined1 *)(unaff_x20 + _TtC5Paste11SearchField::canAcceptFocus) = 1;
  *(undefined8 *)(unaff_x20 + _TtC5Paste11SearchField::___lazy_storage___searchIconView) = 0;
  *(undefined8 *)(unaff_x20 + _TtC5Paste11SearchField::___lazy_storage___inputView) = 0;
  *(undefined8 *)(unaff_x20 + _TtC5Paste11SearchField::___lazy_storage___filtersButton) = 0;
  puVar1 = (undefined8 *)
           _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffa0,"initWithFrame:",param_1,
                               param_2,param_3,param_4);
  puVar2 = puVar1;
  FUN_1001ff0d0();
  FUN_1002356a8(*puVar2);
  puVar3 = &DAT_100fa6b80;
  FUN_1000037f0(&DAT_100fa6b80,&DAT_100c23760);
  _swift_initStackObject();
  *(undefined8 *)(puVar3 + 0x18) = 7;
  *(undefined8 *)(puVar3 + 0x10) = 3;
  puVar4 = puVar3;
  FUN_100045d40();
  *(undefined **)(puVar3 + 0x20) = puVar4;
  FUN_100045c2c();
  *(undefined **)(puVar3 + 0x28) = puVar4;
  FUN_100045730();
  *(undefined **)(puVar3 + 0x30) = puVar4;
  local_a0 = puVar1;
  FUN_1001fa150(puVar3,FUN_10004870c,auStack_b0);
  _swift_bridgeObjectRelease();
  _swift_setDeallocating(puVar3);
  _swift_arrayDestroy(puVar3 + 0x20,*(undefined8 *)(puVar3 + 0x10),
                      PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8);
  return puVar1;
}



/* Address: 0x10004639c | FUN_10004639c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_10004639c(ID param_1)

{
  long lVar1;
  long lVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  ID IVar8;
  undefined8 uVar9;
  ID *pIVar10;
  ID IVar11;
  ID IVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  ID local_98 [3];
  ID local_80;
  undefined **ppuStack_78;
  ID local_70;
  
  IVar11 = param_1;
  _swift_getObjectType();
  IVar3 = IVar11;
  FUN_100045d40();
  IVar3 = objc_stub::centerYAnchor(IVar3);
  IVar4 = objc_stub::centerYAnchor(param_1);
  IVar4 = objc_stub::constraintEqualToAnchor_(IVar3,IVar4);
  lVar1 = _TtC5Paste11SearchField::___lazy_storage___searchIconView;
  IVar3 = objc_stub::leadingAnchor
                    (*(ID *)(param_1 + _TtC5Paste11SearchField::___lazy_storage___searchIconView));
  IVar5 = objc_stub::leadingAnchor(param_1);
  IVar5 = objc_stub::constraintEqualToAnchor_constant_(IVar3,0x4020000000000000,IVar5);
  IVar3 = IVar5;
  FUN_100045c2c();
  IVar3 = objc_stub::centerYAnchor(IVar3);
  IVar6 = objc_stub::centerYAnchor(param_1);
  IVar6 = objc_stub::constraintEqualToAnchor_(IVar3,IVar6);
  lVar2 = _TtC5Paste11SearchField::___lazy_storage___inputView;
  IVar3 = objc_stub::heightAnchor
                    (*(ID *)(param_1 + _TtC5Paste11SearchField::___lazy_storage___inputView));
  IVar7 = objc_stub::constraintEqualToConstant_(IVar3,0x4034000000000000);
  IVar3 = objc_stub::leadingAnchor(*(ID *)(param_1 + lVar2));
  IVar8 = objc_stub::trailingAnchor(*(ID *)(param_1 + lVar1));
  IVar8 = objc_stub::constraintEqualToAnchor_constant_(IVar3,0x4010000000000000,IVar8);
  IVar3 = IVar8;
  FUN_100045730();
  ppuStack_78 = &PTR_PTR_100ec00e8;
  uVar9 = 0;
  local_98[0] = param_1;
  local_80 = IVar11;
  local_70 = IVar3;
  FUN_10000ec2c(0,&DAT_100fa8690,&PTR__OBJC_CLASS___NSButton_100f8d6b0);
  pIVar10 = local_98;
  FUN_1001f9cd8(0,pIVar10,uVar9,&PTR_PTR_100ec00e8);
  FUN_100004594(local_98);
  lVar1 = _TtC5Paste11SearchField::___lazy_storage___filtersButton;
  IVar11 = objc_stub::leadingAnchor
                     (*(ID *)(param_1 + _TtC5Paste11SearchField::___lazy_storage___filtersButton));
  IVar3 = objc_stub::trailingAnchor(*(ID *)(param_1 + lVar2));
  IVar11 = objc_stub::constraintEqualToAnchor_constant_(IVar11,0x4010000000000000,IVar3);
  IVar3 = objc_stub::trailingAnchor(*(ID *)(param_1 + lVar1));
  IVar12 = objc_stub::trailingAnchor(param_1);
  IVar3 = objc_stub::constraintEqualToAnchor_constant_(IVar3,0xc020000000000000,IVar12);
  puVar13 = &DAT_100fa8830;
  FUN_1000037f0(&DAT_100fa8830,&DAT_100c24a20);
  _swift_initStackObject();
  *(undefined8 *)(puVar13 + 0x18) = 0x10;
  *(undefined8 *)(puVar13 + 0x10) = 8;
  uVar9 = 0;
  FUN_10000ec2c(0,&DAT_100fa86a0,&PTR__OBJC_CLASS___NSLayoutConstraint_100f8d660);
  *(undefined8 *)(puVar13 + 0x38) = uVar9;
  *(undefined ***)(puVar13 + 0x40) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar13 + 0x20) = IVar4;
  *(undefined8 *)(puVar13 + 0x60) = uVar9;
  *(undefined ***)(puVar13 + 0x68) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar13 + 0x48) = IVar5;
  *(undefined8 *)(puVar13 + 0x88) = uVar9;
  *(undefined ***)(puVar13 + 0x90) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar13 + 0x70) = IVar6;
  *(undefined8 *)(puVar13 + 0xb0) = uVar9;
  *(undefined ***)(puVar13 + 0xb8) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar13 + 0x98) = IVar7;
  *(undefined8 *)(puVar13 + 0xd8) = uVar9;
  *(undefined ***)(puVar13 + 0xe0) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar13 + 0xc0) = IVar8;
  puVar14 = &DAT_100fa8840;
  FUN_1000037f0(&DAT_100fa8840,&DAT_100c237d0);
  *(undefined **)(puVar13 + 0x100) = puVar14;
  *(undefined ***)(puVar13 + 0x108) = &PTR_PTR_100ec00b8;
  *(ID **)(puVar13 + 0xe8) = pIVar10;
  *(undefined8 *)(puVar13 + 0x128) = uVar9;
  *(undefined ***)(puVar13 + 0x130) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar13 + 0x110) = IVar11;
  *(undefined8 *)(puVar13 + 0x150) = uVar9;
  *(undefined ***)(puVar13 + 0x158) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar13 + 0x138) = IVar3;
  _swift_bridgeObjectRetain();
  puVar15 = puVar13;
  FUN_1001f8d60(puVar13);
  _swift_bridgeObjectRelease(pIVar10);
  _swift_setDeallocating(puVar13);
  uVar9 = *(undefined8 *)(puVar13 + 0x10);
  puVar14 = &DAT_100fa6bc0;
  FUN_1000037f0(&DAT_100fa6bc0,&DAT_100c24a30);
  _swift_arrayDestroy(puVar13 + 0x20,uVar9,puVar14);
  return puVar15;
}



/* Address: 0x10004684c | _TtC5Paste11SearchField::initWithFrame: */

/* Function Stack Size: 0x30 bytes */

ID __thiscall
_TtC5Paste11SearchField::initWithFrame_
          (_TtC5Paste11SearchField *this,ID param_1,SEL param_2,CGRect param_3)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  char *pcVar4;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1000081a8();
  UVar3 = Swift::Actor::get_unownedExecutor();
  pcVar4 = (char *)UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar4 & 1) == 0) {
    pcVar4 = "Paste/SearchField.swift";
    _swift_task_reportUnexpectedExecutor("Paste/SearchField.swift",0x17,1,0x46,UVar3.unknown,pMVar1)
    ;
  }
  FUN_1000461a4();
  _swift_release(pMVar2);
  return (ID)pcVar4;
}


