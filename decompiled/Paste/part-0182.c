/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100217358 | FUN_100217358 */

void FUN_100217358(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x70;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100008284;
  FUN_10021620c(plVar3,param_1,uVar1,uVar2,unaff_x20 + 0x20);
  return;
}



/* Address: 0x1002173c0 | FUN_1002173c0 */

void FUN_1002173c0(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x1002173e4 | FUN_1002173e4 */

undefined1  [16] FUN_1002173e4(void)

{
  return ZEXT816(0x100ec1d88);
}



/* Address: 0x1002173f4 | FUN_1002173f4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1002173f4(void)

{
  return ZEXT816(0x100f964c0);
}



/* Address: 0x100217414 | FUN_100217414 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100217414(ID param_1)

{
  undefined *puVar1;
  ID IVar2;
  undefined8 *puVar3;
  MainActor *pMVar4;
  TaskPriority TVar5;
  MainActor *this;
  MainActor *pMVar6;
  long extraout_x8;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long local_38;
  
  puVar1 = &DAT_100fb6228;
  FUN_1000037f0(&DAT_100fb6228,&DAT_100c36640);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  IVar2 = objc_stub::representedObject(param_1);
  if (IVar2 == 0) {
    uStack_68 = 0;
    local_70 = 0;
    lStack_58 = 0;
    uStack_60 = 0;
  }
  else {
    Swift::__bridgeAnyObjectToAny();
    _swift_unknownObjectRelease(IVar2);
  }
  uStack_48 = uStack_68;
  local_50 = local_70;
  local_38 = lStack_58;
  uStack_40 = uStack_60;
  if (lStack_58 == 0) {
    FUN_100201adc(&local_50);
  }
  else {
    puVar1 = &DAT_100fb70d0;
    FUN_1000037f0(&DAT_100fb70d0,&DAT_100c36738);
    puVar3 = &local_80;
    _swift_dynamicCast(puVar3,&local_50,PTR___type_metadata_for_Any_100eae0c0 + 8,puVar1,6);
    if (((ulong)puVar3 & 1) != 0) {
      pMVar4 = (MainActor *)&DAT_100ec1da8;
      _swift_allocObject(&DAT_100ec1da8,0x20,7);
      *(undefined8 *)(pMVar4 + 0x18) = uStack_78;
      *(undefined8 *)(pMVar4 + 0x10) = local_80;
      TVar5 = Swift::TaskPriority::typeMetadataAccessor();
      (**(code **)(*(long *)(TVar5.unknown + -8) + 0x38))
                ((long)&local_80 - extraout_x8,1,1,TVar5.unknown);
      this = Swift::MainActor::typeMetadataAccessor();
      puVar1 = PTR_typeMetadataAccessor_100eaec10;
      pMVar6 = pMVar4;
      _swift_retain();
      pMVar6 = Swift::MainActor::get_shared(this,pMVar6);
      puVar3 = &DAT_100fb6f30;
      FUN_100003a00(&DAT_100fb6f30,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
      puVar1 = &DAT_100ec1dd0;
      _swift_allocObject(&DAT_100ec1dd0,0x30,7);
      *(MainActor **)(puVar1 + 0x10) = pMVar6;
      *(undefined8 **)(puVar1 + 0x18) = puVar3;
      *(code **)(puVar1 + 0x20) = FUN_1000386a0;
      *(MainActor **)(puVar1 + 0x28) = pMVar4;
      FUN_10020ae18(0,0,(long)&local_80 - extraout_x8,&DAT_100c36780,puVar1);
      _swift_release();
      _swift_release(pMVar4);
    }
  }
  return;
}



/* Address: 0x1002175d4 | FUN_1002175d4 */

void FUN_1002175d4(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x100217600 | FUN_100217600 */

void FUN_100217600(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)&DAT_00000030;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)thunk_FUN_100008284;
  FUN_100216db0(plVar5,param_1,uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Address: 0x100217678 | FUN_100217678 */

undefined8 FUN_100217678(undefined8 param_1)

{
  Availability AVar1;
  undefined7 extraout_var;
  
  AVar1 = FoundationModels::SystemLanguageModel::Availability::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,AVar1.value) + -8) + 8))
            (param_1,CONCAT71(extraout_var,AVar1.value));
  return param_1;
}



/* Address: 0x1002176b4 | thunk_FUN_1002173c0 */

void thunk_FUN_1002173c0(void)

{
  FUN_1002173c0();
  return;
}



/* Address: 0x1002176b8 | thunk_FUN_1002173c0 */

void thunk_FUN_1002173c0(void)

{
  FUN_1002173c0();
  return;
}



/* Address: 0x1002176bc | _TtC7PasteUI16WindowController::window */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC7PasteUI16WindowController::window(ID param_1,SEL param_2)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  char *pcVar4;
  ID IVar5;
  objc_super local_40;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1001f7290();
  UVar3 = Swift::Actor::get_unownedExecutor();
  pcVar4 = (char *)UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar4 & 1) == 0) {
    pcVar4 = "PasteUI/WindowController.swift";
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/WindowController.swift",0x1e,1,0xf,UVar3.unknown,pMVar1);
  }
  FUN_1002177a4();
  local_40.receiver = param_1;
  local_40.super_class = (class_t *)pcVar4;
  IVar5 = _objc_msgSendSuper2(&local_40,"window");
  _swift_release(pMVar2);
  return IVar5;
}



/* Address: 0x100217770 | FUN_100217770 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

ID FUN_100217770(void)

{
  ID IVar1;
  
  FUN_1002177a4();
  IVar1 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"window");
  return IVar1;
}



/* Address: 0x1002177a4 | FUN_1002177a4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1002177a4(void)

{
  return ZEXT816(0x100f96570);
}



/* Address: 0x1002177c4 | _TtC7PasteUI16WindowController::setWindow: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC7PasteUI16WindowController::setWindow_(ID param_1,SEL param_2,ID param_3)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  char *pcVar4;
  objc_super local_50;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1001f7290();
  UVar3 = Swift::Actor::get_unownedExecutor();
  pcVar4 = (char *)UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar4 & 1) == 0) {
    pcVar4 = "PasteUI/WindowController.swift";
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/WindowController.swift",0x1e,1,0xf,UVar3.unknown,pMVar1);
  }
  FUN_1002177a4();
  local_50.receiver = param_1;
  local_50.super_class = (class_t *)pcVar4;
  _objc_msgSendSuper2(&local_50,"setWindow:",param_3);
  FUN_1002178fc();
  _swift_release(pMVar2);
  return;
}



/* Address: 0x1002178b0 | FUN_1002178b0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1002178b0(undefined8 param_1)

{
  FUN_1002177a4();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffd0,"setWindow:",param_1);
  FUN_1002178fc();
  return 0;
}



/* Address: 0x1002178fc | FUN_1002178fc */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_1002178fc(void)

{
  ID IVar1;
  ID unaff_x20;
  
  IVar1 = objc_stub::window(unaff_x20);
  if (IVar1 != 0) {
    IVar1 = objc_stub::standardWindowButton_(IVar1,0);
    if (IVar1 != 0) {
      objc_stub::setTarget_(IVar1);
      objc_stub::setAction_(IVar1,"closeButtonAction:");
      return 0;
    }
  }
  return 0;
}



/* Address: 0x100217994 | FUN_100217994 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100217994(void)

{
  ID IVar1;
  ID self;
  ID unaff_x20;
  
  IVar1 = objc_stub::isWindowLoaded(unaff_x20);
  if (((int)IVar1 != 0) && (self = objc_stub::window(unaff_x20), IVar1 = 0, self != 0)) {
    IVar1 = objc_stub::isVisible(self);
  }
  return IVar1;
}



/* Address: 0x1002179e4 | FUN_1002179e4 */

undefined1 FUN_1002179e4(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _TtC7PasteUI16WindowController::presentationMode;
  _swift_beginAccess(unaff_x20 + _TtC7PasteUI16WindowController::presentationMode,auStack_38,0,0);
  return *(undefined1 *)(unaff_x20 + lVar1);
}



/* Address: 0x100217a24 | FUN_100217a24 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100217a24(void)

{
  ID IVar1;
  undefined *self;
  ID IVar2;
  ID unaff_x20;
  
  IVar2 = unaff_x20;
  _swift_getObjectType();
  IVar1 = IVar2;
  _swift_conformsToProtocol2();
  if ((IVar1 == 0 || unaff_x20 == 0) &&
     (_swift_conformsToProtocol2(IVar2,&TargetProtocolDescriptor_100ca815c),
     IVar2 == 0 || unaff_x20 == 0)) {
    self = &_OBJC_CLASS___NSWindow;
    _objc_allocWithZone();
    IVar2 = objc_stub::initWithContentRect_styleMask_backing_defer_((ID)self,0,0,0,0,7,2,1);
    objc_stub::setWindow_(unaff_x20,IVar2);
    return 0;
  }
  FUN_1002177a4();
  IVar2 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffd0,"loadWindow");
  return IVar2;
}



/* Address: 0x100217aec | _TtC7PasteUI16WindowController::loadWindow */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC7PasteUI16WindowController::loadWindow(ID param_1,SEL param_2)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  class_t *pcVar5;
  class_t *pcVar6;
  undefined *self;
  ID IVar7;
  objc_super local_40;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1001f7290();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/WindowController.swift",0x1e,1,0x25,UVar3.unknown,pMVar1);
  }
  pcVar5 = (class_t *)param_1;
  _swift_getObjectType();
  pcVar6 = pcVar5;
  _swift_conformsToProtocol2();
  if (((pcVar6 == (class_t *)0x0) || (param_1 == 0)) &&
     ((_swift_conformsToProtocol2(pcVar5,&TargetProtocolDescriptor_100ca815c),
      pcVar5 == (class_t *)0x0 || (pcVar6 = pcVar5, param_1 == 0)))) {
    self = &_OBJC_CLASS___NSWindow;
    _objc_allocWithZone();
    IVar7 = objc_stub::initWithContentRect_styleMask_backing_defer_((ID)self,0,0,0,0,7,2,1);
    setWindow_(param_1,IVar7);
    _swift_release(pMVar2);
    return;
  }
  FUN_1002177a4();
  local_40.receiver = param_1;
  local_40.super_class = pcVar6;
  _objc_msgSendSuper2(&local_40,"loadWindow");
  _swift_release(pMVar2);
  return;
}



/* Address: 0x100217c40 | _TtC7PasteUI16WindowController::closeButtonAction: */

/* Function Stack Size: 0x18 bytes */

void _TtC7PasteUI16WindowController::closeButtonAction_(ID param_1,SEL param_2,ID param_3)

{
  FUN_10021859c();
  return;
}



/* Address: 0x100217c48 | FUN_100217c48 */

void FUN_100217c48(undefined8 param_1)

{
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 auStack_90 [8];
  undefined1 auStack_78 [24];
  long local_60;
  undefined1 auStack_58 [24];
  
  lVar3 = _TtC7PasteUI16WindowController::presentationMode;
  _swift_beginAccess(unaff_x20 + _TtC7PasteUI16WindowController::presentationMode,auStack_58,1,0);
  *(undefined1 *)(unaff_x20 + lVar3) = 1;
  FUN_100201b24(param_1,auStack_78);
  if (local_60 == 0) {
    puVar1 = (undefined1 *)0x0;
  }
  else {
    FUN_100004640(auStack_78,local_60);
    lVar3 = *(long *)(local_60 + -8);
    (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar3 + 0x40));
    puVar2 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar3 + 0x10))(puVar2);
    puVar1 = puVar2;
    Swift::__bridgeAnythingToObjectiveC(puVar2,local_60);
    (**(code **)(lVar3 + 8))(puVar2,local_60);
    FUN_100004594();
  }
  FUN_1002177a4();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff78,"showWindow:",puVar1);
  _swift_unknownObjectRelease(puVar1);
  return;
}



/* Address: 0x100217d5c | _TtC7PasteUI16WindowController::showWindow: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC7PasteUI16WindowController::showWindow_(ID param_1,SEL param_2,ID param_3)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1001f7290();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/WindowController.swift",0x1e,1,0x37,UVar3.unknown,pMVar1);
  }
  if (param_3 == 0) {
    uStack_58 = 0;
    local_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    _swift_unknownObjectRetain(param_3);
    Swift::__bridgeAnyObjectToAny();
    _swift_unknownObjectRelease(param_3);
  }
  FUN_100217c48(&local_60);
  FUN_100201adc(&local_60);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x100217e4c | FUN_100217e4c */

void FUN_100217e4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long extraout_x8;
  ID unaff_x20;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 auStack_60 [24];
  long local_48;
  
  puVar1 = (undefined8 *)(unaff_x20 + _TtC7PasteUI16WindowController::completionHandler);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = param_2;
  puVar1[1] = param_3;
  _swift_retain(param_3);
  FUN_100004550(uVar2,uVar3);
  FUN_100201b24(param_1,auStack_60);
  if (local_48 == 0) {
    puVar4 = (undefined1 *)0x0;
  }
  else {
    FUN_100004640(auStack_60,local_48);
    lVar6 = *(long *)(local_48 + -8);
    (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar6 + 0x40));
    puVar5 = auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar6 + 0x10))(puVar5);
    puVar4 = puVar5;
    Swift::__bridgeAnythingToObjectiveC(puVar5,local_48);
    (**(code **)(lVar6 + 8))(puVar5,local_48);
    FUN_100004594(auStack_60);
  }
  objc_stub::showWindow_(unaff_x20,puVar4);
  _swift_unknownObjectRelease(puVar4);
  return;
}



/* Address: 0x100217f54 | FUN_100217f54 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100217f54(void)

{
  long lVar1;
  code *pcVar2;
  ID IVar3;
  ID unaff_x20;
  String SVar4;
  undefined1 auStack_48 [24];
  
  IVar3 = objc_stub::window(unaff_x20);
  lVar1 = _TtC7PasteUI16WindowController::presentationMode;
  if (IVar3 == 0) {
    SVar4.bridgeObject = (void *)0x2;
    SVar4.str = (char *)0xb;
    Swift::_assertionFailure
              ((StaticString)0x100d8deb0,SVar4,(StaticString)0xd000000000000026,0x8000000100d9e770,
               0xd9e770);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100218030);
    (*pcVar2)();
  }
  _swift_beginAccess(unaff_x20 + _TtC7PasteUI16WindowController::presentationMode,auStack_48,1,0);
  *(undefined1 *)(unaff_x20 + lVar1) = 3;
  if (*(ID *)PTR__NSApp_100ea8fa0 != 0) {
    IVar3 = objc_stub::runModalForWindow_(*(ID *)PTR__NSApp_100ea8fa0,IVar3);
    return IVar3;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100217fe4);
  (*pcVar2)();
}



/* Address: 0x100218030 | FUN_100218030 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100218030(ID param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  ID IVar4;
  void *aBlock;
  ID unaff_x20;
  String SVar5;
  undefined *local_88;
  undefined8 local_80;
  code *local_78;
  undefined *puStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 auStack_58 [24];
  
  IVar4 = objc_stub::window(unaff_x20);
  lVar1 = _TtC7PasteUI16WindowController::presentationMode;
  if (IVar4 != 0) {
    _swift_beginAccess(unaff_x20 + _TtC7PasteUI16WindowController::presentationMode,auStack_58,1,0);
    *(undefined1 *)(unaff_x20 + lVar1) = 2;
    *(ID *)(unaff_x20 + _TtC7PasteUI16WindowController::presentationWindow) = param_1;
    local_88 = PTR___NSConcreteStackBlock_100ea82a0;
    local_80 = 0x42000000;
    local_78 = FUN_100061d58;
    puStack_70 = &DAT_100ec1de8;
    local_68 = param_2;
    local_60 = param_3;
    aBlock = __Block_copy(&local_88);
    uVar2 = local_60;
    _swift_retain(param_3);
    _swift_release(uVar2);
    objc_stub::beginSheet_completionHandler_(param_1,IVar4,aBlock);
    __Block_release(aBlock);
    return;
  }
  SVar5.bridgeObject = (void *)0x2;
  SVar5.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar5,(StaticString)0xd000000000000026,0x8000000100d9e770,
             0xd9e770);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10021818c);
  (*pcVar3)();
}



/* Address: 0x10021818c | FUN_10021818c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10021818c(ID param_1)

{
  long lVar1;
  code *pcVar2;
  ID IVar3;
  ID unaff_x20;
  String SVar4;
  undefined1 auStack_48 [24];
  
  IVar3 = objc_stub::window(unaff_x20);
  lVar1 = _TtC7PasteUI16WindowController::presentationMode;
  if (IVar3 == 0) {
    SVar4.bridgeObject = (void *)0x2;
    SVar4.str = (char *)0xb;
    Swift::_assertionFailure
              ((StaticString)0x100d8deb0,SVar4,(StaticString)0xd000000000000026,0x8000000100d9e770,
               0xd9e770);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1002182a4);
    (*pcVar2)();
  }
  _swift_beginAccess(unaff_x20 + _TtC7PasteUI16WindowController::presentationMode,auStack_48,1,0);
  *(undefined1 *)(unaff_x20 + lVar1) = 4;
  *(ID *)(unaff_x20 + _TtC7PasteUI16WindowController::presentationWindow) = param_1;
  objc_stub::beginSheet_completionHandler_(param_1,IVar3,0);
  if (*(ID *)PTR__NSApp_100ea8fa0 != 0) {
    IVar3 = objc_stub::runModalForWindow_(*(ID *)PTR__NSApp_100ea8fa0,IVar3);
    return IVar3;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100218258);
  (*pcVar2)();
}



/* Address: 0x1002182a4 | FUN_1002182a4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

undefined8 FUN_1002182a4(ulong param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  code *pcVar4;
  ulong uVar5;
  ID IVar6;
  ID IVar7;
  objc_super *super;
  undefined8 uVar8;
  ulong *unaff_x20;
  undefined8 uVar9;
  undefined1 auStack_68 [24];
  
  uVar5 = param_1;
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0x70))();
  uVar2 = (uint)uVar5 & 0xff;
  if (uVar2 == 1 || (uVar5 & 0xff) == 0) {
    if ((uVar5 & 0xff) == 0) {
      FUN_1002177a4();
      super = (objc_super *)&stack0xffffffffffffffb0;
    }
    else {
      FUN_1002177a4();
      super = (objc_super *)&stack0xffffffffffffff78;
    }
    _objc_msgSendSuper2(super,"close");
  }
  else if (uVar2 == 2) {
    IVar6 = *(ID *)((long)unaff_x20 + _TtC7PasteUI16WindowController::presentationWindow);
    if (IVar6 != 0) {
      IVar7 = objc_stub::window((ID)unaff_x20);
      if (IVar7 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1002184b8);
        (*pcVar4)();
      }
      objc_stub::endSheet_(IVar6,IVar7);
    }
  }
  else {
    if (uVar2 == 3) {
      FUN_1002177a4();
      _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff88,"close");
      IVar6 = *(ID *)PTR__NSApp_100ea8fa0;
      if (IVar6 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10021832c);
        (*pcVar4)();
      }
    }
    else {
      IVar6 = *(ID *)((long)unaff_x20 + _TtC7PasteUI16WindowController::presentationWindow);
      if (IVar6 != 0) {
        IVar7 = objc_stub::window((ID)unaff_x20);
        if (IVar7 == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1002184bc);
          (*pcVar4)();
        }
        objc_stub::endSheet_(IVar6,IVar7);
      }
      IVar6 = *(ID *)PTR__NSApp_100ea8fa0;
      if (IVar6 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1002184b4);
        (*pcVar4)();
      }
    }
    objc_stub::stopModalWithCode_(IVar6,param_1);
  }
  puVar1 = (undefined8 *)((long)unaff_x20 + _TtC7PasteUI16WindowController::completionHandler);
  pcVar4 = (code *)*puVar1;
  if (pcVar4 == (code *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar9 = puVar1[1];
    _swift_retain(uVar9);
    (*pcVar4)(param_1);
    FUN_100004550(pcVar4,uVar9);
    uVar9 = *puVar1;
  }
  uVar8 = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  FUN_100004550(uVar9,uVar8);
  lVar3 = _TtC7PasteUI16WindowController::presentationMode;
  _swift_beginAccess((long)unaff_x20 + _TtC7PasteUI16WindowController::presentationMode,auStack_68,1
                     ,0);
  *(undefined1 *)((long)unaff_x20 + lVar3) = 0;
  objc_stub::setContentViewController_((ID)unaff_x20,0);
  *(undefined8 *)((long)unaff_x20 + _TtC7PasteUI16WindowController::presentationWindow) = 0;
  return 0;
}



/* Address: 0x1002184bc | FUN_1002184bc */

void FUN_1002184bc(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001002184d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0x108))(0);
  return;
}



/* Address: 0x1002184dc | _TtC7PasteUI16WindowController::close */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

int _TtC7PasteUI16WindowController::close(int param_1)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1001f7290();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/WindowController.swift",0x1e,1,0x92,UVar3.unknown,pMVar1);
  }
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *(ulong *)(ulong)(uint)param_1) + 0x108))
            (0);
  _swift_release(pMVar2);
  return 0;
}



/* Address: 0x100218594 | _TtC7PasteUI16WindowController::close: */

/* Function Stack Size: 0x18 bytes */

void _TtC7PasteUI16WindowController::close_(ID param_1,SEL param_2,ID param_3)

{
  FUN_10021859c();
  return;
}



/* Address: 0x10021859c | FUN_10021859c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10021859c(ID param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1001f7290();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/WindowController.swift",0x1e,1,param_4,UVar3.unknown,pMVar1);
  }
  if (param_3 == 0) {
    uStack_58 = 0;
    local_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    _swift_unknownObjectRetain(param_3);
    Swift::__bridgeAnyObjectToAny();
    _swift_unknownObjectRelease(param_3);
  }
  objc_stub::close(param_1);
  FUN_100201adc(&local_60);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x100218688 | FUN_100218688 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100218688(undefined8 param_1)

{
  ID IVar1;
  ID unaff_x20;
  
  _objc_allocWithZone();
  IVar1 = objc_stub::initWithWindow_(unaff_x20,param_1);
  return IVar1;
}



/* Address: 0x1002186c4 | FUN_1002186c4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1002186c4(undefined8 param_1)

{
  undefined8 *puVar1;
  ID IVar2;
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + _TtC7PasteUI16WindowController::presentationMode) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC7PasteUI16WindowController::completionHandler);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _TtC7PasteUI16WindowController::presentationWindow) = 0;
  FUN_1002177a4();
  IVar2 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffd0,"initWithWindow:",param_1);
  return IVar2;
}



/* Address: 0x10021873c | _TtC7PasteUI16WindowController::initWithWindow: */

/* Function Stack Size: 0x18 bytes */

ID _TtC7PasteUI16WindowController::initWithWindow_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 *puVar1;
  MainActor *pMVar2;
  MainActor *pMVar3;
  UnownedSerialExecutor UVar4;
  char *pcVar5;
  ID IVar6;
  objc_super local_50;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  pMVar3 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  pMVar2 = pMVar3;
  FUN_1001f7290();
  UVar4 = Swift::Actor::get_unownedExecutor();
  pcVar5 = (char *)UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar5 & 1) == 0) {
    pcVar5 = "PasteUI/WindowController.swift";
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/WindowController.swift",0x1e,1,0xe,UVar4.unknown,pMVar2);
  }
  *(undefined1 *)(param_1 + presentationMode) = 0;
  puVar1 = (undefined8 *)(param_1 + completionHandler);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(param_1 + presentationWindow) = 0;
  FUN_1002177a4();
  local_50.receiver = param_1;
  local_50.super_class = (class_t *)pcVar5;
  IVar6 = _objc_msgSendSuper2(&local_50,"initWithWindow:",param_3);
  _swift_release(pMVar3);
  return IVar6;
}



/* Address: 0x100218820 | FUN_100218820 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100218820(undefined8 param_1)

{
  ID IVar1;
  ID unaff_x20;
  
  _objc_allocWithZone();
  IVar1 = objc_stub::initWithCoder_(unaff_x20,param_1);
  return IVar1;
}



/* Address: 0x10021885c | FUN_10021885c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10021885c(undefined8 param_1)

{
  undefined8 *puVar1;
  ID IVar2;
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + _TtC7PasteUI16WindowController::presentationMode) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC7PasteUI16WindowController::completionHandler);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _TtC7PasteUI16WindowController::presentationWindow) = 0;
  FUN_1002177a4();
  IVar2 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffc0,"initWithCoder:",param_1);
  return IVar2;
}



/* Address: 0x1002188f0 | _TtC7PasteUI16WindowController::initWithCoder: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC7PasteUI16WindowController::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1001f7290();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/WindowController.swift",0x1e,1,0xe,UVar3.unknown,pMVar1);
  }
  FUN_10021885c();
  _swift_release(pMVar2);
  return param_3;
}



/* Address: 0x10021899c | FUN_10021899c */

void FUN_10021899c(void)

{
  FUN_1002177a4();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"dealloc");
  return;
}



/* Address: 0x1002189cc | _TtC7PasteUI16WindowController::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC7PasteUI16WindowController::_cxx_destruct(ID param_1,SEL param_2)

{
  FUN_100004550(*(undefined8 *)(param_1 + completionHandler),
                ((undefined8 *)(param_1 + completionHandler))[1]);
  return;
}



/* Address: 0x100218a08 | FUN_100218a08 */

void FUN_100218a08(long param_1,long param_2)

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



/* Address: 0x100218a1c | FUN_100218a1c */

void FUN_100218a1c(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x100218a24 | thunk_FUN_100218a28 */

void thunk_FUN_100218a28(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb7140 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c36798;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c36798,&DAT_100ec1eb0);
  DAT_100fb7140 = pTVar1;
  return;
}



/* Address: 0x100218a28 | FUN_100218a28 */

void FUN_100218a28(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb7140 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c36798;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c36798,&DAT_100ec1eb0);
  DAT_100fb7140 = pTVar1;
  return;
}



/* Address: 0x100218a68 | FUN_100218a68 */

void FUN_100218a68(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = SUB81(param_2,0);
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *(ulong *)*param_2) + 0x70))();
  *param_1 = uVar1;
  return;
}



/* Address: 0x100218aa8 | FUN_100218aa8 */

void FUN_100218aa8(undefined1 *param_1,long *param_2)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_48 [24];
  
  lVar2 = _TtC7PasteUI16WindowController::presentationMode;
  uVar1 = *param_1;
  lVar3 = *param_2;
  _swift_beginAccess(lVar3 + _TtC7PasteUI16WindowController::presentationMode,auStack_48,1,0);
  *(undefined1 *)(lVar3 + lVar2) = uVar1;
  return;
}



/* Address: 0x100218af8 | FUN_100218af8 */

undefined1  [16] FUN_100218af8(void)

{
  return ZEXT816(0x100ec1eb0);
}



/* Address: 0x100218b08 | FUN_100218b08 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100218b08(void)

{
  ID IVar1;
  ID IVar2;
  ID unaff_x20;
  
  IVar1 = NSColorSpace::sRGBColorSpace((ID)&_OBJC_CLASS___NSColorSpace);
  IVar1 = objc_stub::colorUsingColorSpace_(unaff_x20,IVar1);
  if (IVar1 == 0) {
    IVar1 = unaff_x20;
  }
  IVar2 = objc_stub::colorSpace(IVar1);
  IVar2 = objc_stub::colorSpaceModel(IVar2);
  if (IVar2 == 1) {
    IVar2 = NSColorSpace::genericGrayColorSpace((ID)&_OBJC_CLASS___NSColorSpace);
    IVar1 = objc_stub::colorUsingColorSpace_(IVar1,IVar2);
    if (IVar1 == 0) {
      return;
    }
  }
  return;
}



/* Address: 0x100218c28 | FUN_100218c28 */

undefined8 * FUN_100218c28(void)

{
  if (DAT_100fb7170 != -1) {
    _swift_once(&DAT_100fb7170,FUN_100219318);
  }
  return &DAT_101057888;
}



/* Address: 0x100218c68 | FUN_100218c68 */

undefined8 * FUN_100218c68(void)

{
  if (DAT_100fb7178 != -1) {
    _swift_once(&DAT_100fb7178,FUN_100218db4);
  }
  return &DAT_101057860;
}



/* Address: 0x100218ca8 | FUN_100218ca8 */

undefined8 * FUN_100218ca8(void)

{
  if (DAT_100fb7180 != -1) {
    _swift_once(&DAT_100fb7180,FUN_100219a44);
  }
  return &DAT_1010578b0;
}



/* Address: 0x100218ce8 | FUN_100218ce8 */

undefined8 * FUN_100218ce8(void)

{
  if (DAT_100fb7188 != -1) {
    _swift_once(&DAT_100fb7188,FUN_100218e00);
  }
  return &DAT_101057868;
}



/* Address: 0x100218d28 | FUN_100218d28 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100218d28(void)

{
  DAT_101057858 = NSColor::controlAccentColor((ID)&_OBJC_CLASS___NSColor);
  return;
}



/* Address: 0x100218d58 | FUN_100218d58 */

undefined8 * FUN_100218d58(void)

{
  if (DAT_100fb7190 != -1) {
    _swift_once(&DAT_100fb7190,FUN_100218d28);
  }
  return &DAT_101057858;
}



/* Address: 0x100218d98 | FUN_100218d98 */

void FUN_100218d98(void)

{
  FUN_100126a6c(&DAT_100fb7190,&DAT_101057858,FUN_100218d28);
  return;
}



/* Address: 0x100218db4 | FUN_100218db4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100218db4(void)

{
  DAT_101057860 = NSColor::labelColor((ID)&_OBJC_CLASS___NSColor);
  return;
}



/* Address: 0x100218de4 | FUN_100218de4 */

void FUN_100218de4(void)

{
  FUN_100126a6c(&DAT_100fb7178,&DAT_101057860,FUN_100218db4);
  return;
}



/* Address: 0x100218e00 | FUN_100218e00 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100218e00(void)

{
  DAT_101057868 = NSColor::separatorColor((ID)&_OBJC_CLASS___NSColor);
  return;
}



/* Address: 0x100218e30 | FUN_100218e30 */

void FUN_100218e30(void)

{
  FUN_100126a6c(&DAT_100fb7188,&DAT_101057868,FUN_100218e00);
  return;
}



/* Address: 0x100218e4c | FUN_100218e4c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100218e4c(void)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  void *aBlock;
  undefined *local_60;
  undefined8 local_58;
  code *local_50;
  undefined *puStack_48;
  code *local_40;
  undefined *local_38;
  
  IVar1 = NSColor::whiteColor((ID)&_OBJC_CLASS___NSColor);
  IVar2 = NSColor::windowBackgroundColor((ID)&_OBJC_CLASS___NSColor);
  puVar3 = &DAT_100ec20f0;
  _swift_allocObject(&DAT_100ec20f0,0x20,7);
  *(ID *)(puVar3 + 0x10) = IVar2;
  *(ID *)(puVar3 + 0x18) = IVar1;
  local_40 = thunk_FUN_1001ff49c;
  local_60 = PTR___NSConcreteStackBlock_100ea82a0;
  local_58 = 0x42000000;
  local_50 = FUN_100059c14;
  puStack_48 = &DAT_100ec2108;
  local_38 = puVar3;
  aBlock = __Block_copy(&local_60);
  IVar1 = NSColor::colorWithName_dynamicProvider_((ID)&_OBJC_CLASS___NSColor,0,aBlock);
  __Block_release(aBlock);
  _swift_release(local_38);
  DAT_101057870 = IVar1;
  return;
}



/* Address: 0x100218f60 | FUN_100218f60 */

undefined8 * FUN_100218f60(void)

{
  if (DAT_100fb7198 != -1) {
    _swift_once(&DAT_100fb7198,FUN_100218e4c);
  }
  return &DAT_101057870;
}



/* Address: 0x100218fa0 | FUN_100218fa0 */

void FUN_100218fa0(void)

{
  FUN_100126a6c(&DAT_100fb7198,&DAT_101057870,FUN_100218e4c);
  return;
}



/* Address: 0x100218fbc | FUN_100218fbc */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100218fbc(void)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  void *aBlock;
  undefined *local_60;
  undefined8 local_58;
  code *local_50;
  undefined *puStack_48;
  code *local_40;
  undefined *local_38;
  
  IVar1 = NSColor::colorWithRed_green_blue_alpha_
                    ((ID)&_OBJC_CLASS___NSColor,0x3fee5e5e5e5e5e5e,0x3fee5e5e5e5e5e5e,
                     0x3feefefefefefeff,0x3ff0000000000000);
  IVar2 = NSColor::colorWithRed_green_blue_alpha_
                    ((ID)&_OBJC_CLASS___NSColor,0x3fbc1c1c1c1c1c1c,0x3fbc1c1c1c1c1c1c,
                     0x3fbe1e1e1e1e1e1e,0x3ff0000000000000);
  puVar3 = &DAT_100ec20a0;
  _swift_allocObject(&DAT_100ec20a0,0x20,7);
  *(ID *)(puVar3 + 0x10) = IVar2;
  *(ID *)(puVar3 + 0x18) = IVar1;
  local_40 = thunk_FUN_1001ff49c;
  local_60 = PTR___NSConcreteStackBlock_100ea82a0;
  local_58 = 0x42000000;
  local_50 = FUN_100059c14;
  puStack_48 = &DAT_100ec20b8;
  local_38 = puVar3;
  aBlock = __Block_copy(&local_60);
  IVar1 = NSColor::colorWithName_dynamicProvider_((ID)&_OBJC_CLASS___NSColor,0,aBlock);
  __Block_release(aBlock);
  _swift_release(local_38);
  DAT_101057878 = IVar1;
  return;
}



/* Address: 0x10021911c | FUN_10021911c */

undefined8 * FUN_10021911c(void)

{
  if (DAT_100fb71a0 != -1) {
    _swift_once(&DAT_100fb71a0,FUN_100218fbc);
  }
  return &DAT_101057878;
}


