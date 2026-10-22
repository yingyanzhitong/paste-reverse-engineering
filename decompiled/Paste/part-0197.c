/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10024074c | FUN_10024074c */

int FUN_10024074c(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (*(char *)((long)param_1 + 0x19) != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = 0xffffffff;
  if (1 < *(byte *)(param_1 + 6)) {
    uVar1 = *(byte *)(param_1 + 6) + 0x7ffffffe & 0x7fffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x1002407a0 | FUN_1002407a0 */

void FUN_1002407a0(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0xff) {
    if (0xfe < param_3) {
      *(undefined1 *)((long)param_1 + 0x19) = 0;
    }
    if (param_2 != 0) {
      *(char *)(param_1 + 3) = (char)param_2 + '\x01';
      return;
    }
  }
  else {
    param_1[1] = 0;
    param_1[2] = 0;
    *(undefined1 *)(param_1 + 3) = 0;
    *param_1 = (ulong)(param_2 - 0xff);
    if (0xfe < param_3) {
      *(undefined1 *)((long)param_1 + 0x19) = 1;
    }
  }
  return;
}



/* Address: 0x1002407e8 | FUN_1002407e8 */

undefined1  [16] FUN_1002407e8(void)

{
  return ZEXT816(0x100ec37e8);
}



/* Address: 0x1002407f8 | FUN_1002407f8 */

void FUN_1002407f8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb7c70 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c371d0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c371d0,&DAT_100ec37e8);
  DAT_100fb7c70 = pTVar1;
  return;
}



/* Address: 0x100240838 | FUN_100240838 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100240838(void)

{
  long lVar1;
  ID self;
  undefined *self_00;
  long unaff_x20;
  
  lVar1 = _TtC7PasteUI17ZoomableImageView::___lazy_storage___imageView;
  self = *(ID *)(unaff_x20 + _TtC7PasteUI17ZoomableImageView::___lazy_storage___imageView);
  if (self == 0) {
    self_00 = &_OBJC_CLASS___NSImageView;
    _objc_allocWithZone();
    self = objc_stub::init((ID)self_00);
    objc_stub::setImageScaling_(self,3);
    objc_stub::setWantsLayer_(self,1);
    *(ID *)(unaff_x20 + lVar1) = self;
  }
  return self;
}



/* Address: 0x1002408c0 | FUN_1002408c0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1002408c0(void)

{
  long lVar1;
  ID self;
  ID IVar2;
  long unaff_x20;
  
  lVar1 = _TtC7PasteUI17ZoomableImageView::___lazy_storage___contentView;
  self = *(ID *)(unaff_x20 + _TtC7PasteUI17ZoomableImageView::___lazy_storage___contentView);
  if (self == 0) {
    FUN_100241dc8();
    _swift_getObjCClassFromMetadata();
    _objc_allocWithZone();
    self = objc_stub::init(self);
    IVar2 = self;
    FUN_100240838();
    objc_stub::setDocumentView_(self,IVar2);
    objc_stub::setDrawsBackground_(self,0);
    *(ID *)(unaff_x20 + lVar1) = self;
  }
  return self;
}



/* Address: 0x10024095c | FUN_10024095c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10024095c(void)

{
  long lVar1;
  ID self;
  undefined *self_00;
  ID IVar2;
  long unaff_x20;
  
  lVar1 = _TtC7PasteUI17ZoomableImageView::___lazy_storage___scrollView;
  self = *(ID *)(unaff_x20 + _TtC7PasteUI17ZoomableImageView::___lazy_storage___scrollView);
  if (self == 0) {
    self_00 = &_OBJC_CLASS___NSScrollView;
    _objc_allocWithZone();
    self = objc_stub::init((ID)self_00);
    objc_stub::setHasVerticalScroller_(self,1);
    objc_stub::setHasHorizontalScroller_(self,1);
    objc_stub::setAllowsMagnification_(self,1);
    IVar2 = objc_stub::setDrawsBackground_(self,0);
    FUN_1002408c0();
    objc_stub::setContentView_(self,IVar2);
    *(ID *)(unaff_x20 + lVar1) = self;
  }
  return self;
}



/* Address: 0x100240a18 | FUN_100240a18 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_100240a18(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _TtC7PasteUI17ZoomableImageView::image;
  _swift_beginAccess(unaff_x20 + _TtC7PasteUI17ZoomableImageView::image,auStack_38,0,0);
  return *(undefined8 *)(unaff_x20 + lVar1);
}



/* Address: 0x100240a64 | FUN_100240a64 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100240a64(undefined8 param_1)

{
  long lVar1;
  ID self;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _TtC7PasteUI17ZoomableImageView::image;
  _swift_beginAccess(unaff_x20 + _TtC7PasteUI17ZoomableImageView::image,auStack_48,1,0);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  self = 0;
  FUN_100240838();
  objc_stub::setImage_(self,*(undefined8 *)(unaff_x20 + lVar1));
  return 0;
}



/* Address: 0x100240ae8 | FUN_100240ae8 */

undefined1  [16] FUN_100240ae8(undefined8 *param_1)

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
    _swift_coroFrameAlloc(0x28,0xa21);
  }
  *param_1 = pvVar2;
  lVar1 = _TtC7PasteUI17ZoomableImageView::image;
  *(long *)((long)pvVar2 + 0x18) = unaff_x20;
  *(long *)((long)pvVar2 + 0x20) = lVar1;
  _swift_beginAccess(unaff_x20 + lVar1,pvVar2,0x21,0);
  auVar3._8_8_ = unaff_x20 + lVar1;
  auVar3._0_8_ = FUN_100240b54;
  return auVar3;
}



/* Address: 0x100240b54 | FUN_100240b54 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100240b54(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  void *self;
  void *pvVar3;
  
  pvVar3 = (void *)*param_1;
  self = pvVar3;
  _swift_endAccess();
  if ((param_2 & 1) == 0) {
    lVar1 = *(long *)((long)pvVar3 + 0x18);
    lVar2 = *(long *)((long)pvVar3 + 0x20);
    FUN_100240838();
    objc_stub::setImage_((ID)self,*(undefined8 *)(lVar1 + lVar2));
  }
  _free(pvVar3);
  return;
}



/* Address: 0x100240ba8 | FUN_100240ba8 */

undefined1 FUN_100240ba8(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _TtC7PasteUI17ZoomableImageView::isTextRecognitionEnabled;
  _swift_beginAccess(unaff_x20 + _TtC7PasteUI17ZoomableImageView::isTextRecognitionEnabled,
                     auStack_38,0,0);
  return *(undefined1 *)(unaff_x20 + lVar1);
}



/* Address: 0x100240be8 | FUN_100240be8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100240be8(byte param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _TtC7PasteUI17ZoomableImageView::isTextRecognitionEnabled;
  _swift_beginAccess(unaff_x20 + _TtC7PasteUI17ZoomableImageView::isTextRecognitionEnabled,
                     auStack_48,1,0);
  *(byte *)(unaff_x20 + lVar1) = param_1;
  FUN_100240838();
  if ((param_1 & 1) == 0) {
    FUN_10021a0b0();
  }
  else {
    FUN_10021aabc();
  }
  return 0;
}



/* Address: 0x100240c54 | FUN_100240c54 */

undefined1  [16] FUN_100240c54(undefined8 *param_1)

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
    _swift_coroFrameAlloc(0x28,0x8223);
  }
  *param_1 = pvVar2;
  lVar1 = _TtC7PasteUI17ZoomableImageView::isTextRecognitionEnabled;
  *(long *)((long)pvVar2 + 0x18) = unaff_x20;
  *(long *)((long)pvVar2 + 0x20) = lVar1;
  _swift_beginAccess(unaff_x20 + lVar1,pvVar2,0x21,0);
  auVar3._8_8_ = unaff_x20 + lVar1;
  auVar3._0_8_ = FUN_100240cc0;
  return auVar3;
}



/* Address: 0x100240cc0 | FUN_100240cc0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100240cc0(undefined8 *param_1,ulong param_2)

{
  char cVar1;
  void *pvVar2;
  
  pvVar2 = (void *)*param_1;
  _swift_endAccess(pvVar2);
  if ((param_2 & 1) == 0) {
    cVar1 = *(char *)(*(long *)((long)pvVar2 + 0x18) + *(long *)((long)pvVar2 + 0x20));
    FUN_100240838();
    if (cVar1 == '\x01') {
      FUN_10021aabc();
    }
    else {
      FUN_10021a0b0();
    }
  }
  _free(pvVar2);
  return;
}



/* Address: 0x100240d24 | FUN_100240d24 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

ID FUN_100240d24(void)

{
  ID self;
  _ArrayBuffer _Var1;
  MainActor *pMVar2;
  MainActor *pMVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  undefined *puVar6;
  undefined *puVar7;
  NSArray *pNVar8;
  ID IVar9;
  long unaff_x20;
  
  _swift_getObjectType();
  *(undefined8 *)(unaff_x20 + _TtC7PasteUI17ZoomableImageView::___lazy_storage___imageView) = 0;
  *(undefined8 *)(unaff_x20 + _TtC7PasteUI17ZoomableImageView::___lazy_storage___contentView) = 0;
  *(undefined8 *)(unaff_x20 + _TtC7PasteUI17ZoomableImageView::___lazy_storage___scrollView) = 0;
  *(undefined8 *)(unaff_x20 + _TtC7PasteUI17ZoomableImageView::image) = 0;
  *(undefined1 *)(unaff_x20 + _TtC7PasteUI17ZoomableImageView::isTextRecognitionEnabled) = 0;
  self = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffa0,"initWithFrame:",0,0,0,0);
  IVar9 = self;
  FUN_10024095c();
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
  pMVar3 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  pMVar2 = pMVar3;
  FUN_1001f7290();
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/NSView+LayoutBuilder.swift",0x22,1,0x15,UVar4.unknown,pMVar2);
  }
  objc_stub::addSubview_(self,IVar9);
  objc_stub::setTranslatesAutoresizingMaskIntoConstraints_(IVar9,0);
  _swift_release(pMVar3);
  FUN_10024095c();
  if (DAT_100fb6230 != -1) {
    _swift_once(&DAT_100fb6230,FUN_1001f9ff4);
  }
  IVar9 = self;
  FUN_100211c08(DAT_101057750,DAT_101057758,DAT_101057760,DAT_101057768,self,pMVar3);
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



/* Address: 0x100241004 | _TtC7PasteUI17ZoomableImageView::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC7PasteUI17ZoomableImageView::init(ID param_1,SEL param_2)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  char *pcVar4;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1001f7290();
  UVar3 = Swift::Actor::get_unownedExecutor();
  pcVar4 = (char *)UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar4 & 1) == 0) {
    pcVar4 = "PasteUI/ZoomableImageView.macOS.swift";
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/ZoomableImageView.macOS.swift",0x25,1,0x29,UVar3.unknown,pMVar1);
  }
  FUN_100240d24();
  _swift_release(pMVar2);
  return (ID)pcVar4;
}



/* Address: 0x10024109c | _TtC7PasteUI17ZoomableImageView::initWithCoder: */

/* Function Stack Size: 0x18 bytes */

ID _TtC7PasteUI17ZoomableImageView::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  code *pcVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  String SVar5;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  FUN_1001f7290();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/ZoomableImageView.macOS.swift",0x25,1,0x31,UVar3.unknown,pMVar2);
  }
  *(undefined8 *)(param_1 + ___lazy_storage___imageView) = 0;
  *(undefined8 *)(param_1 + ___lazy_storage___contentView) = 0;
  *(undefined8 *)(param_1 + ___lazy_storage___scrollView) = 0;
  *(undefined8 *)(param_1 + image) = 0;
  *(undefined1 *)(param_1 + isTextRecognitionEnabled) = 0;
  SVar5.bridgeObject = (void *)0x2;
  SVar5.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar5,(StaticString)0xd000000000000025,0x8000000100d8dc00,
             0xd9eca0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100241194);
  (*pcVar1)();
}



/* Address: 0x100241194 | FUN_100241194 */

void FUN_100241194(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"viewDidEndLiveResize");
  FUN_1002411cc();
  return;
}



/* Address: 0x1002411cc | FUN_1002411cc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1002411cc(undefined8 param_1,double param_2,double param_3,double param_4)

{
  long lVar1;
  ID IVar2;
  ID unaff_x20;
  double extraout_d0;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auStack_58 [24];
  
  lVar1 = _TtC7PasteUI17ZoomableImageView::image;
  _swift_beginAccess(unaff_x20 + _TtC7PasteUI17ZoomableImageView::image,auStack_58,0,0);
  IVar2 = *(ID *)(unaff_x20 + lVar1);
  if (IVar2 != 0) {
    objc_stub::size(IVar2);
    objc_stub::frame(unaff_x20);
    objc_stub::size(IVar2);
    IVar2 = objc_stub::frame(unaff_x20);
    dVar5 = param_2 / param_4;
    if (param_2 / param_4 < extraout_d0 / param_3) {
      dVar5 = extraout_d0 / param_3;
    }
    FUN_10024095c();
    dVar3 = 1.0;
    if (dVar5 < 1.0) {
      dVar3 = dVar5;
    }
    dVar4 = 1.0 / dVar5;
    if (dVar5 < 1.0) {
      dVar4 = dVar5;
    }
    objc_stub::setMinMagnification_(IVar2,dVar3);
    lVar1 = _TtC7PasteUI17ZoomableImageView::___lazy_storage___scrollView;
    objc_stub::setMaxMagnification_
              (*(ID *)(unaff_x20 + _TtC7PasteUI17ZoomableImageView::___lazy_storage___scrollView),
               dVar5 + dVar5);
    objc_stub::setMagnification_(*(ID *)(unaff_x20 + lVar1),dVar4);
  }
  return 0;
}



/* Address: 0x1002412ac | _TtC7PasteUI17ZoomableImageView::viewDidEndLiveResize */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC7PasteUI17ZoomableImageView::viewDidEndLiveResize(ID param_1,SEL param_2)

{
  class_t *pcVar1;
  MainActor *pMVar2;
  MainActor *pMVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  objc_super local_50;
  
  pcVar1 = (class_t *)param_1;
  _swift_getObjectType();
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  pMVar3 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  pMVar2 = pMVar3;
  FUN_1001f7290();
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/ZoomableImageView.macOS.swift",0x25,1,0x35,UVar4.unknown,pMVar2);
  }
  local_50.receiver = param_1;
  local_50.super_class = pcVar1;
  _objc_msgSendSuper2(&local_50,"viewDidEndLiveResize");
  FUN_1002411cc();
  _swift_release(pMVar3);
  return;
}



/* Address: 0x100241380 | FUN_100241380 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100241380(void)

{
  ID self;
  ID unaff_x20;
  
  _swift_getObjectType();
  self = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffd0,"layout");
  FUN_100240838();
  objc_stub::frame(unaff_x20);
  objc_stub::setFrame_(self);
  FUN_1002411cc(0);
  return;
}



/* Address: 0x1002413e0 | _TtC7PasteUI17ZoomableImageView::layout */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC7PasteUI17ZoomableImageView::layout(ID param_1,SEL param_2)

{
  class_t *pcVar1;
  MainActor *pMVar2;
  MainActor *pMVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  ID self;
  objc_super local_50;
  
  pcVar1 = (class_t *)param_1;
  _swift_getObjectType();
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  pMVar3 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  pMVar2 = pMVar3;
  FUN_1001f7290();
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/ZoomableImageView.macOS.swift",0x25,1,0x3a,UVar4.unknown,pMVar2);
  }
  local_50.receiver = param_1;
  local_50.super_class = pcVar1;
  self = _objc_msgSendSuper2(&local_50,"layout");
  FUN_100240838();
  objc_stub::frame(param_1);
  objc_stub::setFrame_(self);
  FUN_1002411cc(0);
  _swift_release(pMVar3);
  return;
}



/* Address: 0x1002414d8 | _TtC7PasteUI17ZoomableImageView::initWithFrame: */

/* Function Stack Size: 0x30 bytes */

ID _TtC7PasteUI17ZoomableImageView::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  code *pcVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  FUN_1001f7290();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/ZoomableImageView.macOS.swift",0x25,1,4,UVar3.unknown,pMVar2);
  }
  __swift_stdlib_reportUnimplementedInitializer
            ("PasteUI.ZoomableImageView",0x19,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100241560);
  (*pcVar1)();
}



/* Address: 0x100241560 | _TtC7PasteUI17ZoomableImageView::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC7PasteUI17ZoomableImageView::_cxx_destruct(ID param_1,SEL param_2)

{
  return;
}



/* Address: 0x1002415b8 | FUN_1002415b8 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1002415b8(double param_1,double param_2,double param_3,double param_4)

{
  ID IVar1;
  ID IVar2;
  ID unaff_x20;
  double extraout_d0;
  double extraout_d0_00;
  double extraout_d0_01;
  double dVar3;
  double extraout_d0_02;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  IVar1 = objc_stub::documentView(unaff_x20);
  FUN_100241dc8();
  if (IVar1 == 0) {
    IVar1 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff90,"constrainBoundsRect:",
                                param_1,param_2,param_3,param_4);
  }
  else {
    _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff80,"constrainBoundsRect:");
    dVar4 = param_2;
    dVar5 = param_3;
    dVar6 = param_4;
    objc_stub::bounds(unaff_x20);
    dVar8 = extraout_d0;
    _CGRectGetWidth();
    dVar7 = 1.0;
    if (0.0 < dVar8) {
      objc_stub::bounds(unaff_x20);
      dVar7 = extraout_d0_00;
      _CGRectGetWidth();
      dVar7 = param_3 / dVar7;
    }
    objc_stub::contentInsets(unaff_x20);
    dVar9 = dVar7 * dVar4;
    dVar8 = dVar7 * dVar5;
    dVar3 = dVar7 * dVar6;
    IVar2 = objc_stub::isFlipped(unaff_x20);
    dVar12 = dVar7 * extraout_d0_01;
    if ((int)IVar2 == 0) {
      dVar12 = dVar8;
    }
    IVar2 = objc_stub::isFlipped(unaff_x20);
    if ((int)IVar2 == 0) {
      dVar8 = dVar7 * extraout_d0_01;
    }
    objc_stub::frame(IVar1);
    dVar7 = extraout_d0_02;
    _CGRectGetMinX();
    dVar7 = dVar7 - dVar9;
    dVar10 = extraout_d0_02;
    _CGRectGetMinY(extraout_d0_02,dVar4,dVar5,dVar6);
    dVar10 = dVar10 - dVar12;
    dVar11 = extraout_d0_02;
    _CGRectGetWidth(extraout_d0_02,dVar4,dVar5,dVar6);
    dVar11 = dVar9 + dVar3 + dVar11;
    dVar3 = extraout_d0_02;
    _CGRectGetHeight(extraout_d0_02,dVar4,dVar5,dVar6);
    dVar3 = dVar12 + dVar8 + dVar3;
    dVar8 = param_1;
    _CGRectGetWidth(param_1,param_2,param_3,param_4);
    dVar4 = dVar7;
    _CGRectGetWidth(dVar7,dVar10,dVar11,dVar3);
    if (dVar8 <= dVar4) {
      dVar8 = param_1;
      _CGRectGetWidth(param_1,param_2,param_3,param_4);
      dVar4 = dVar7;
      _CGRectGetWidth(dVar7,dVar10,dVar11,dVar3);
      if (dVar8 < dVar4) {
        dVar8 = param_1;
        _CGRectGetMaxX(param_1,param_2,param_3,param_4);
        dVar4 = dVar7;
        _CGRectGetMaxX(dVar7,dVar10,dVar11,dVar3);
        if (dVar8 <= dVar4) {
          dVar8 = param_1;
          _CGRectGetMinX(param_1,param_2,param_3,param_4);
          dVar4 = dVar7;
          _CGRectGetMinX(dVar7,dVar10,dVar11,dVar3);
          if (dVar8 < dVar4) {
            param_1 = dVar7;
            _CGRectGetMinX(dVar7,dVar10,dVar11,dVar3);
          }
        }
        else {
          dVar8 = dVar7;
          _CGRectGetMaxX(dVar7,dVar10,dVar11,dVar3);
          _CGRectGetWidth(param_1,param_2,param_3,param_4);
          param_1 = dVar8 - param_1;
        }
      }
    }
    else {
      dVar8 = dVar7;
      _CGRectGetMinX(dVar7,dVar10,dVar11,dVar3);
      _CGRectGetWidth(param_1,param_2,param_3,param_4);
      dVar4 = dVar7;
      _CGRectGetWidth(dVar7,dVar10,dVar11,dVar3);
      param_1 = dVar8 + (param_1 - dVar4) * -0.5;
    }
    dVar8 = param_1;
    _CGRectGetHeight(param_1,param_2,param_3,param_4);
    dVar4 = dVar7;
    _CGRectGetHeight(dVar7,dVar10,dVar11,dVar3);
    if (dVar8 <= dVar4) {
      dVar8 = param_1;
      _CGRectGetHeight(param_1,param_2,param_3,param_4);
      dVar4 = dVar7;
      _CGRectGetHeight(dVar7,dVar10,dVar11,dVar3);
      if (dVar8 < dVar4) {
        dVar8 = param_1;
        _CGRectGetMaxY(param_1,param_2,param_3,param_4);
        dVar4 = dVar7;
        _CGRectGetMaxY(dVar7,dVar10,dVar11,dVar3);
        if (dVar8 <= dVar4) {
          dVar8 = param_1;
          _CGRectGetMinY(param_1,param_2,param_3,param_4);
          dVar4 = dVar7;
          _CGRectGetMinY(dVar7,dVar10,dVar11,dVar3);
          if (dVar8 < dVar4) {
            _CGRectGetMinY(dVar7,dVar10,dVar11,dVar3);
            param_2 = dVar7;
          }
        }
        else {
          _CGRectGetMaxY(dVar7,dVar10,dVar11,dVar3);
          dVar8 = param_1;
          _CGRectGetHeight(param_1,param_2,param_3,param_4);
          param_2 = dVar7 - dVar8;
        }
      }
    }
    else {
      dVar8 = dVar7;
      _CGRectGetMinY(dVar7,dVar10,dVar11,dVar3);
      dVar4 = param_1;
      _CGRectGetHeight(param_1,param_2,param_3,param_4);
      _CGRectGetHeight(dVar7,dVar10,dVar11,dVar3);
      param_2 = dVar8 + (dVar4 - dVar7) * -0.5;
    }
    objc_stub::backingAlignedRect_options_(unaff_x20,param_1,param_2,param_3,param_4,0xf0000);
    IVar1 = 0;
  }
  return IVar1;
}



/* Address: 0x100241ab8 | _TtCC7PasteUI17ZoomableImageViewP33_D98063BDB002CD1D436D23AA9725C10317CenteringClipView::constrainBoundsRect: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x30 bytes */

CGRect _TtCC7PasteUI17ZoomableImageViewP33_D98063BDB002CD1D436D23AA9725C10317CenteringClipView::
       constrainBoundsRect_(ID param_1,SEL param_2,CGRect param_3)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  double in_d0;
  double in_d1;
  double in_d2;
  double in_d3;
  CGRect CVar5;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1001f7290();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/ZoomableImageView.macOS.swift",0x25,1,0x51,UVar3.unknown,pMVar1);
  }
  FUN_1002415b8(param_1);
  _swift_release(pMVar2);
  CVar5.field0_0x0.field1_0x8 = in_d1;
  CVar5.field0_0x0.field0_0x0 = in_d0;
  CVar5.field1_0x10.field1_0x8 = in_d3;
  CVar5.field1_0x10.field0_0x0 = in_d2;
  return CVar5;
}



/* Address: 0x100241ba8 | _TtCC7PasteUI17ZoomableImageViewP33_D98063BDB002CD1D436D23AA9725C10317CenteringClipView::initWithFrame: */

/* Function Stack Size: 0x30 bytes */

ID _TtCC7PasteUI17ZoomableImageViewP33_D98063BDB002CD1D436D23AA9725C10317CenteringClipView::
   initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  class_t *pcVar5;
  ID IVar6;
  objc_super local_60;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1001f7290();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/ZoomableImageView.macOS.swift",0x25,1,0x50,UVar3.unknown,pMVar1);
  }
  pcVar5 = (class_t *)0x0;
  FUN_100241dc8();
  local_60.receiver = param_1;
  local_60.super_class = pcVar5;
  IVar6 = _objc_msgSendSuper2(&local_60,"initWithFrame:");
  _swift_release(pMVar2);
  return IVar6;
}



/* Address: 0x100241c88 | _TtCC7PasteUI17ZoomableImageViewP33_D98063BDB002CD1D436D23AA9725C10317CenteringClipView::initWithCoder: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtCC7PasteUI17ZoomableImageViewP33_D98063BDB002CD1D436D23AA9725C10317CenteringClipView::
   initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  class_t *pcVar5;
  ID IVar6;
  objc_super local_50;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1001f7290();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/ZoomableImageView.macOS.swift",0x25,1,0x50,UVar3.unknown,pMVar1);
  }
  pcVar5 = (class_t *)0x0;
  FUN_100241dc8();
  local_50.receiver = param_1;
  local_50.super_class = pcVar5;
  IVar6 = _objc_msgSendSuper2(&local_50,"initWithCoder:",param_3);
  _swift_release(pMVar2);
  return IVar6;
}



/* Address: 0x100241d74 | FUN_100241d74 */

void FUN_100241d74(void)

{
  FUN_100241dc8();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"dealloc");
  return;
}



/* Address: 0x100241da8 | FUN_100241da8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100241da8(void)

{
  return ZEXT816(0x100f97400);
}



/* Address: 0x100241dc8 | FUN_100241dc8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100241dc8(void)

{
  return ZEXT816(0x100f974d8);
}



/* Address: 0x100241de8 | FUN_100241de8 */

void FUN_100241de8(undefined8 param_1)

{
  FUN_100241e04();
  DAT_1010578c0 = param_1;
  return;
}



/* Address: 0x100241e04 | FUN_100241e04 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100241e04(void)

{
  undefined1 *puVar1;
  long lVar2;
  bool bVar3;
  URL UVar4;
  undefined *puVar5;
  undefined *puVar6;
  ID IVar7;
  URL UVar8;
  undefined8 uVar9;
  long lVar10;
  NSURL *pNVar11;
  long extraout_x8;
  long extraout_x8_00;
  long lVar12;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long lVar13;
  ulong uVar14;
  code *pcVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  String SVar20;
  String SVar21;
  undefined8 uStack_d0;
  undefined4 auStack_c8 [2];
  undefined1 auStack_c0 [8];
  char *local_b8;
  undefined1 *local_b0;
  long local_a8;
  long local_a0;
  undefined *local_98;
  long local_90;
  long local_88;
  code *local_80;
  undefined *local_78;
  long local_70;
  undefined *local_68;
  
  UVar4 = Foundation::URL::typeMetadataAccessor();
  lVar18 = *(long *)(UVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar18 + 0x40));
  puVar5 = &DAT_100fb7dd8;
  local_b0 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_1000037f0(&DAT_100fb7dd8,&DAT_100c37678);
  lVar13 = *(long *)(puVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar13 + 0x40));
  lVar16 = (long)(auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar17 = lVar16 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_a8 = lVar17 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar12 = (lVar17 - extraout_x12_00) - extraout_x12_01;
  local_70 = lVar12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar12 = lVar12 - extraout_x12_02;
  local_90 = lVar12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar12 = lVar12 - extraout_x12_03;
  puVar6 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_100242374();
  puVar5 = &DAT_100fb7de0;
  local_78 = puVar6;
  FUN_1000037f0(&DAT_100fb7de0,&DAT_100c37680);
  local_88 = *(long *)(lVar13 + 0x48);
  uVar14 = (ulong)*(byte *)(lVar13 + 0x50) + 0x20 &
           ((ulong)*(byte *)(lVar13 + 0x50) ^ 0xffffffffffffffff);
  _swift_allocObject();
  *(undefined8 *)(puVar5 + 0x18) = 6;
  *(undefined8 *)(puVar5 + 0x10) = 3;
  IVar7 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle);
  UVar8.unknown = (undefined *)NSBundle::resourceURL(IVar7);
  if (UVar8.unknown != (undefined *)0x0) {
    Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar8);
  }
  local_80 = *(code **)(lVar18 + 0x38);
  local_a0 = lVar18;
  (*local_80)(lVar12,UVar8.unknown == (undefined *)0x0,1,UVar4.unknown);
  puVar6 = puVar5 + uVar14;
  local_98 = puVar5;
  FUN_100242ed4(lVar12,puVar6);
  uVar9 = 0;
  FUN_100242eb4(0);
  _swift_getObjCClassFromMetadata();
  IVar7 = NSBundle::bundleForClass_((ID)&_OBJC_CLASS___NSBundle,uVar9);
  UVar8.unknown = (undefined *)NSBundle::resourceURL(IVar7);
  lVar13 = local_88;
  if (UVar8.unknown != (undefined *)0x0) {
    Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar8);
  }
  pcVar15 = local_80;
  (*local_80)(puVar6 + lVar13,UVar8.unknown == (undefined *)0x0,1,UVar4.unknown);
  IVar7 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle);
  UVar8.unknown = (undefined *)NSBundle::bundleURL(IVar7);
  Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar8);
  (*pcVar15)(puVar6 + lVar13 * 2,0,1,UVar4.unknown);
  local_68 = local_78;
  FUN_100242964(local_98);
  local_78 = local_68;
  local_98 = *(undefined **)(local_68 + 0x10);
  if (local_98 != (undefined *)0x0) {
    uVar19 = 0;
    puVar5 = local_68 + uVar14;
    local_b8 = "appstore-license-cache";
    lVar13 = local_a8;
    lVar18 = local_a0;
    do {
      lVar10 = local_90;
      if (*(ulong *)(local_78 + 0x10) <= uVar19) {
                    /* WARNING: Does not return */
        pcVar15 = (code *)SoftwareBreakpoint(1,0x10024231c);
        (*pcVar15)();
      }
      FUN_100011090(puVar5,local_90,&DAT_100fb7dd8,&DAT_100c37678);
      lVar2 = local_70;
      FUN_100242ed4(lVar10,local_70);
      FUN_100011090(lVar2,lVar17,&DAT_100fb7dd8,&DAT_100c37678);
      pcVar15 = *(code **)(lVar18 + 0x30);
      lVar10 = lVar17;
      UVar8 = UVar4;
      (*pcVar15)(lVar17,1);
      bVar3 = (int)lVar10 != 1;
      if (bVar3) {
        SVar20.bridgeObject = (void *)((ulong)local_b8 | 0x8000000000000000);
        SVar20.str = (char *)0xd00000000000002b;
        Foundation::URL::appendingPathComponent(SVar20,UVar8);
        (**(code **)(lVar18 + 8))(lVar17,UVar4.unknown);
      }
      else {
        FUN_100242f24(lVar17);
      }
      (*local_80)(lVar13,!bVar3,1,UVar4.unknown);
      FUN_100011090(lVar13,lVar16,&DAT_100fb7dd8,&DAT_100c37678);
      lVar10 = lVar16;
      (*pcVar15)(lVar16,1,UVar4.unknown);
      puVar1 = local_b0;
      if ((int)lVar10 == 1) {
        FUN_100242f24(lVar13);
        FUN_100242f24(local_70);
      }
      else {
        (**(code **)(lVar18 + 0x20))(local_b0,lVar16,UVar4.unknown);
        UVar8.unknown = &_OBJC_CLASS___NSBundle;
        _objc_allocWithZone();
        pNVar11 = Foundation::URL::_bridgeToObjectiveC(UVar8);
        lVar18 = local_a0;
        IVar7 = objc_stub::initWithURL_((ID)UVar8.unknown,pNVar11);
        lVar13 = local_a8;
        (**(code **)(lVar18 + 8))(puVar1,UVar4.unknown);
        FUN_100242f24(lVar13);
        FUN_100242f24(local_70);
        if (IVar7 != 0) {
          _swift_bridgeObjectRelease(local_78);
          return IVar7;
        }
      }
      uVar19 = uVar19 + 1;
      puVar5 = puVar5 + local_88;
    } while (local_98 != (undefined *)uVar19);
  }
  *(undefined4 *)(lVar12 + -8) = 0;
  *(undefined8 *)(lVar12 + -0x10) = 0x2c;
  SVar21.bridgeObject = (void *)0x2;
  SVar21.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar21,(StaticString)0xd000000000000040,0x8000000100d9ed40,
             0xd9ed20);
                    /* WARNING: Does not return */
  pcVar15 = (code *)SoftwareBreakpoint(1,0x100242374);
  (*pcVar15)();
}



/* Address: 0x100242374 | FUN_100242374 */

undefined * FUN_100242374(long param_1)

{
  ulong uVar1;
  undefined1 *puVar2;
  URL UVar3;
  undefined *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_90 [8];
  code *local_88;
  long local_80;
  undefined *local_78;
  undefined1 *local_70;
  undefined *local_68;
  
  UVar3 = Foundation::URL::typeMetadataAccessor();
  lVar6 = *(long *)(UVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar6 + 0x40));
  local_70 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar5 = (long)(auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  puVar4 = &DAT_100fb7dd8;
  FUN_1000037f0(&DAT_100fb7dd8,&DAT_100c37678);
  lVar8 = *(long *)(puVar4 + -8);
  local_78 = puVar4;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = *(long *)(param_1 + 0x10);
  puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (lVar7 != 0) {
    local_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_1002b1010(0,lVar7,0);
    param_1 = param_1 + ((ulong)*(byte *)(lVar6 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar6 + 0x50) ^ 0xffffffffffffffff));
    local_80 = *(long *)(lVar6 + 0x48);
    local_88 = *(code **)(lVar6 + 0x10);
    puVar4 = local_68;
    do {
      (*local_88)(lVar5,param_1,UVar3.unknown);
      puVar2 = local_70;
      (**(code **)(lVar6 + 0x20))(local_70,lVar5,UVar3.unknown);
      _swift_dynamicCast(lVar5 - extraout_x8_00,puVar2,UVar3.unknown,local_78,7);
      uVar1 = *(ulong *)(puVar4 + 0x10);
      local_68 = puVar4;
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar1) {
        FUN_1002b1010(1 < *(ulong *)(puVar4 + 0x18),uVar1 + 1,1);
      }
      puVar4 = local_68;
      *(ulong *)(local_68 + 0x10) = uVar1 + 1;
      FUN_100242ed4(lVar5 - extraout_x8_00,
                    local_68 +
                    *(long *)(lVar8 + 0x48) * uVar1 +
                    ((ulong)*(byte *)(lVar8 + 0x50) + 0x20 &
                    ((ulong)*(byte *)(lVar8 + 0x50) ^ 0xffffffffffffffff)));
      param_1 = param_1 + local_80;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return puVar4;
}



/* Address: 0x100242554 | FUN_100242554 */

void FUN_100242554(void)

{
  ID self;
  
  self = 0;
  FUN_100248454();
  _objc_allocWithZone();
  objc_stub::init(self);
  return;
}



/* Address: 0x100242570 | FUN_100242570 */

void FUN_100242570(void)

{
  FUN_1000037f0(&DAT_100fb81d0,&DAT_100c374b0);
  _swift_allocObject();
  FUN_1001a8524(0x4132750000000000,0xd000000000000016,0x8000000100d9ecb0);
  return;
}



/* Address: 0x1002425d4 | FUN_1002425d4 */

void FUN_1002425d4(void)

{
  FUN_1000dbd5c(&DAT_100c374f0,&DAT_100fb81e0,&DAT_100c37520,0x50);
  return;
}



/* Address: 0x1002425f4 | thunk_FUN_10019fcd4 */

void thunk_FUN_10019fcd4(void)

{
  FUN_10019fcd4();
  return;
}



/* Address: 0x1002425f8 | FUN_1002425f8 */

void FUN_1002425f8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1002b0184();
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(undefined ***)(param_1 + 0x20) = &PTR_PTR_100ec6870;
  FUN_1000d80e0(param_1,"PasteLicensingAppStore/DI+AppStore.swift",0x28,2,0xf,0x13,FUN_100244158,0);
  return;
}



/* Address: 0x100242654 | FUN_100242654 */

void FUN_100242654(void)

{
  FUN_1000dbd5c(&DAT_100c37558,&DAT_100fb81f0,&DAT_100c37580,0x30);
  return;
}



/* Address: 0x100242674 | FUN_100242674 */

void FUN_100242674(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1002b85e4(0);
  FUN_1000d80e0(param_1,"PasteLicensingAppStore/DI+AppStore.swift",0x28,2,7,0x13,FUN_100244110,0,
                uVar1);
  return;
}



/* Address: 0x1002426c4 | FUN_1002426c4 */

void FUN_1002426c4(void)

{
  FUN_1000dbd5c(&DAT_100c37588,&DAT_100fb7d00,&DAT_100c375b8,0x30);
  return;
}



/* Address: 0x1002426e4 | FUN_1002426e4 */

void FUN_1002426e4(undefined8 *param_1,undefined8 param_2)

{
  FUN_1003fc588();
  *param_1 = param_2;
  return;
}



/* Address: 0x100242708 | FUN_100242708 */

void FUN_100242708(void)

{
  FUN_1000dbd5c(&DAT_100c375c0,&DAT_100fb7d08,&DAT_100c375f0,0x50);
  return;
}



/* Address: 0x100242728 | thunk_FUN_10019fbf0 */

void thunk_FUN_10019fbf0(void)

{
  FUN_10019fbf0();
  return;
}



/* Address: 0x10024272c | FUN_10024272c */

void FUN_10024272c(void)

{
  FUN_1000dbd5c(&DAT_100c375f8,&DAT_100fb7d10,&DAT_100c37620,0x30);
  return;
}



/* Address: 0x10024274c | FUN_10024274c */

void FUN_10024274c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1002a7d4c(0);
  FUN_1000d80e0(param_1,"PasteLicensingAppStore/PromoOfferEligibility.swift",0x32,2,0x2a,0x13,
                FUN_1002a7d74,0,uVar1);
  return;
}



/* Address: 0x10024279c | FUN_10024279c */

undefined * FUN_10024279c(void)

{
  return PTR___swiftEmptySetSingleton_100eae0e8;
}



/* Address: 0x1002427a8 | FUN_1002427a8 */

void FUN_1002427a8(void)

{
  int iVar1;
  
  iVar1 = 1;
  FUN_100bf158c(1,0x1a,4,0);
  if (iVar1 == 0) {
    SwiftUI::_TaskModifier::typeMetadataAccessor();
  }
  else {
    SwiftUI::_TaskModifier2::typeMetadataAccessor();
  }
  SwiftUI::ModifiedContent::typeMetadataAccessor();
  return;
}



/* Address: 0x1002427fc | FUN_1002427fc */

void FUN_1002427fc(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  int iVar3;
  ModifiedContent MVar4;
  ModifiedContent MVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 local_50;
  undefined *puStack_48;
  undefined8 local_40;
  undefined *puStack_38;
  
  puVar7 = &local_50;
  uVar1 = *(undefined8 *)(param_1 + 8);
  iVar3 = 1;
  FUN_100bf158c(1,0x1a,4,0);
  if (iVar3 == 0) {
    SwiftUI::_TaskModifier::typeMetadataAccessor();
    puVar2 = PTR_typeMetadataAccessor_100eaa7d0;
    MVar4 = SwiftUI::ModifiedContent::typeMetadataAccessor();
    puVar6 = &DAT_100fb7d20;
    FUN_100003a00(&DAT_100fb7d20,puVar2,
                  PTR_SwiftUI__SwiftUI___TaskModifier_>SwiftUI__ViewModifier_100eaa7c8);
    local_50 = uVar1;
    puStack_48 = puVar6;
  }
  else {
    SwiftUI::_TaskModifier2::typeMetadataAccessor();
    MVar4 = SwiftUI::ModifiedContent::typeMetadataAccessor();
    MVar5 = MVar4;
    FUN_1002428c8();
    puVar7 = &local_40;
    local_40 = uVar1;
    puStack_38 = MVar5.unknown;
  }
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             MVar4.unknown,puVar7);
  return;
}



/* Address: 0x1002428c8 | FUN_1002428c8 */

void FUN_1002428c8(void)

{
  _TaskModifier2 _Var1;
  undefined *puVar2;
  
  if (DAT_100fb7d18 != (undefined *)0x0) {
    return;
  }
  _Var1 = SwiftUI::_TaskModifier2::typeMetadataAccessor();
  puVar2 = PTR_SwiftUI__SwiftUI___TaskModifier2_>SwiftUI__ViewModifier_100eaa8e8;
  _swift_getWitnessTable
            (PTR_SwiftUI__SwiftUI___TaskModifier2_>SwiftUI__ViewModifier_100eaa8e8,_Var1.unknown);
  DAT_100fb7d18 = puVar2;
  return;
}



/* Address: 0x10024290c | FUN_10024290c */

void FUN_10024290c(void)

{
  FUN_100242924(PTR_typeMetadataAccessor_100ea6de0);
  return;
}



/* Address: 0x100242918 | FUN_100242918 */

void FUN_100242918(void)

{
  FUN_100242924(FUN_1002abbf0);
  return;
}



/* Address: 0x100242924 | FUN_100242924 */

void FUN_100242924(undefined8 param_1,code *param_2)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_2)();
                    /* WARNING: Could not recover jumptable at 0x000100242960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(param_1,1,1,lVar1);
  return;
}



/* Address: 0x100242964 | FUN_100242964 */

void FUN_100242964(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long *unaff_x20;
  ulong uVar6;
  long lVar7;
  
  uVar6 = *(ulong *)(param_1 + 0x10);
  lVar5 = *unaff_x20;
  lVar7 = *(long *)(lVar5 + 0x10);
  if (SCARRY8(lVar7,uVar6)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100242a74);
    (*pcVar1)();
  }
  lVar2 = lVar5;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((int)lVar2 == 0) ||
     (uVar4 = *(ulong *)(lVar5 + 0x18) >> 1, (long)uVar4 < (long)(lVar7 + uVar6))) {
    FUN_1002b0bd4();
    uVar4 = *(ulong *)(lVar2 + 0x18) >> 1;
    lVar7 = *(long *)(param_1 + 0x10);
    lVar5 = lVar2;
  }
  else {
    lVar7 = *(long *)(param_1 + 0x10);
  }
  if (lVar7 == 0) {
    _swift_bridgeObjectRelease(param_1);
    if (uVar6 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100242a78);
      (*pcVar1)();
    }
  }
  else {
    lVar7 = *(long *)(lVar5 + 0x10);
    if (uVar4 - lVar7 < uVar6) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100242a7c);
      (*pcVar1)();
    }
    puVar3 = &DAT_100fb7dd8;
    FUN_1000037f0(&DAT_100fb7dd8,&DAT_100c37678);
    uVar4 = (ulong)*(byte *)(*(long *)(puVar3 + -8) + 0x50);
    uVar4 = uVar4 + 0x20 & (uVar4 ^ 0xffffffffffffffff);
    _swift_arrayInitWithCopy
              (lVar5 + uVar4 + *(long *)(*(long *)(puVar3 + -8) + 0x48) * lVar7,param_1 + uVar4,
               uVar6,puVar3);
    _swift_bridgeObjectRelease(param_1);
    if (uVar6 != 0) {
      if (SCARRY8(*(long *)(lVar5 + 0x10),uVar6)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100242a80);
        (*pcVar1)();
      }
      *(ulong *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + uVar6;
    }
  }
  *unaff_x20 = lVar5;
  return;
}



/* Address: 0x100242a80 | FUN_100242a80 */

void FUN_100242a80(long param_1)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *unaff_x20;
  ulong uVar5;
  long lVar6;
  Status SVar7;
  
  uVar5 = *(ulong *)(param_1 + 0x10);
  lVar4 = *unaff_x20;
  lVar6 = *(long *)(lVar4 + 0x10);
  if (SCARRY8(lVar6,uVar5)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100242b84);
    (*pcVar1)();
  }
  lVar3 = lVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((int)lVar3 == 0) ||
     (uVar2 = *(ulong *)(lVar4 + 0x18) >> 1, (long)uVar2 < (long)(lVar6 + uVar5))) {
    FUN_1002b0d20();
    uVar2 = *(ulong *)(lVar3 + 0x18) >> 1;
    lVar6 = *(long *)(param_1 + 0x10);
    lVar4 = lVar3;
  }
  else {
    lVar6 = *(long *)(param_1 + 0x10);
  }
  if (lVar6 == 0) {
    _swift_bridgeObjectRelease(param_1);
    if (uVar5 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100242b88);
      (*pcVar1)();
    }
  }
  else {
    lVar6 = *(long *)(lVar4 + 0x10);
    SVar7 = StoreKit::Product::SubscriptionInfo::Status::typeMetadataAccessor();
    if (uVar2 - lVar6 < uVar5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100242b8c);
      (*pcVar1)();
    }
    lVar3 = *(long *)(SVar7.code + -8);
    uVar2 = (ulong)*(byte *)(lVar3 + 0x50);
    uVar2 = uVar2 + 0x20 & (uVar2 ^ 0xffffffffffffffff);
    _swift_arrayInitWithCopy
              (lVar4 + uVar2 + *(long *)(lVar3 + 0x48) * lVar6,param_1 + uVar2,uVar5,SVar7.code);
    _swift_bridgeObjectRelease(param_1);
    if (uVar5 != 0) {
      if (SCARRY8(*(long *)(lVar4 + 0x10),uVar5)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100242b90);
        (*pcVar1)();
      }
      *(ulong *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + uVar5;
    }
  }
  *unaff_x20 = lVar4;
  return;
}



/* Address: 0x100242b90 | FUN_100242b90 */

void FUN_100242b90(void)

{
  FUN_1000dbd5c(&DAT_100c374b8,&DAT_100fb7cf0,&DAT_100c3ca30,0x50);
  return;
}



/* Address: 0x100242bb0 | FUN_100242bb0 */

void FUN_100242bb0(void)

{
  FUN_1000dbd5c(&DAT_100c37528,&DAT_100fb7cf8,&DAT_100c37550,0x50);
  return;
}



/* Address: 0x100242bd0 | FUN_100242bd0 */

void FUN_100242bd0(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}



/* Address: 0x100242bd8 | FUN_100242bd8 */

String FUN_100242bd8(void)

{
  String SVar1;
  
  SVar1 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  return SVar1;
}



/* Address: 0x100242be8 | FUN_100242be8 */

void FUN_100242be8(void)

{
  FUN_100003a00(&DAT_100fb7e40,FUN_100242f6c,&TargetProtocolConformanceDescriptor_100c377f0);
  (extension_Foundation)::Foundation::_BridgedStoredNSError::get_errorCode();
  return;
}



/* Address: 0x100242c28 | FUN_100242c28 */

void FUN_100242c28(void)

{
  FUN_100003a00(&DAT_100fb7e40,FUN_100242f6c,&TargetProtocolConformanceDescriptor_100c377f0);
  (extension_Foundation)::Foundation::_BridgedStoredNSError::_get_errorUserInfo();
  return;
}



/* Address: 0x100242c68 | FUN_100242c68 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100242c68(NSError *param_1)

{
  FUN_100003a00(&DAT_100fb7e40,FUN_100242f6c,&TargetProtocolConformanceDescriptor_100c377f0);
  (extension_Foundation)::Foundation::_BridgedStoredNSError::_init(param_1);
  return;
}


