/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100238da8 | FUN_100238da8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_100238da8(NSObject *param_1,_ArrayBuffer param_2)

{
  _CocoaArrayWrapper _Var1;
  code *pcVar2;
  bool bVar3;
  NSObject *pNVar4;
  undefined8 uVar5;
  NSObject *pNVar6;
  NSObject *pNVar7;
  undefined *puVar8;
  undefined1 auVar9 [16];
  
  puVar8 = param_2.unknown & 0xffffffffffffff8;
  if ((ulong)param_2.unknown >> 0x3e == 0) {
    pNVar7 = *(NSObject **)(puVar8 + 0x10);
  }
  else {
    _Var1.unknown = puVar8;
    if ((undefined *)0x7fffffffffffffff < param_2.unknown) {
      _Var1.unknown = param_2.unknown;
    }
    pNVar7 = (NSObject *)Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  pNVar6 = (NSObject *)0x0;
  do {
    if (pNVar7 == pNVar6) {
      pNVar6 = (NSObject *)0x0;
      uVar5 = 1;
LAB_100238e7c:
      auVar9._8_8_ = uVar5;
      auVar9._0_8_ = pNVar6;
      return auVar9;
    }
    if (((ulong)param_2.unknown & 0xc000000000000001) == 0) {
      if (*(NSObject **)(puVar8 + 0x10) <= pNVar6) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100238ea0);
        (*pcVar2)();
      }
      pNVar4 = *(NSObject **)(param_2.unknown + (long)pNVar6 * 8 + 0x20);
    }
    else {
      pNVar4 = pNVar6;
      Swift::_ArrayBuffer::__getElementSlowPath((__int64)pNVar6,param_2);
    }
    FUN_10000ec2c(0,&DAT_100fb64d8,&PTR__OBJC_CLASS___NSView_100f8d628);
    bVar3 = (extension_ObjectiveC)::__C::NSObject::___infix(pNVar4,param_1);
    if (bVar3) {
      uVar5 = 0;
      goto LAB_100238e7c;
    }
    bVar3 = SCARRY8((long)pNVar6,1);
    pNVar6 = pNVar6 + 1;
    if (bVar3) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100238ea4);
      (*pcVar2)();
    }
  } while( true );
}



/* Address: 0x100238eb8 | FUN_100238eb8 */

void FUN_100238eb8(void)

{
  FUN_1001ade50(&_TtC7PasteUI20ReorderableStackView::onBeginMoving,thunk_FUN_100011128);
  return;
}



/* Address: 0x100238ecc | FUN_100238ecc */

void FUN_100238ecc(undefined8 param_1,undefined8 param_2)

{
  FUN_1001adec4(param_1,param_2,&_TtC7PasteUI20ReorderableStackView::onBeginMoving,
                thunk_FUN_100004550);
  return;
}



/* Address: 0x100238ee0 | FUN_100238ee0 */

undefined1  [16] FUN_100238ee0(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _TtC7PasteUI20ReorderableStackView::onBeginMoving;
  _swift_beginAccess(unaff_x20 + _TtC7PasteUI20ReorderableStackView::onBeginMoving,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = _swift_endAccess;
  return auVar2;
}



/* Address: 0x100238f20 | FUN_100238f20 */

void FUN_100238f20(void)

{
  FUN_1001ade50(&_TtC7PasteUI20ReorderableStackView::onCommitMoving,thunk_FUN_100011128);
  return;
}



/* Address: 0x100238f34 | FUN_100238f34 */

void FUN_100238f34(undefined8 param_1,undefined8 param_2)

{
  FUN_1001adec4(param_1,param_2,&_TtC7PasteUI20ReorderableStackView::onCommitMoving,
                thunk_FUN_100004550);
  return;
}



/* Address: 0x100238f48 | FUN_100238f48 */

undefined1  [16] FUN_100238f48(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _TtC7PasteUI20ReorderableStackView::onCommitMoving;
  _swift_beginAccess(unaff_x20 + _TtC7PasteUI20ReorderableStackView::onCommitMoving,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = _swift_endAccess;
  return auVar2;
}



/* Address: 0x100238f88 | FUN_100238f88 */

void FUN_100238f88(void)

{
  FUN_1001ade50(&_TtC7PasteUI20ReorderableStackView::onCancelMoving,thunk_FUN_100011128);
  return;
}



/* Address: 0x100238f9c | FUN_100238f9c */

void FUN_100238f9c(undefined8 param_1,undefined8 param_2)

{
  FUN_1001adec4(param_1,param_2,&_TtC7PasteUI20ReorderableStackView::onCancelMoving,
                thunk_FUN_100004550);
  return;
}



/* Address: 0x100238fb0 | FUN_100238fb0 */

undefined1  [16] FUN_100238fb0(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _TtC7PasteUI20ReorderableStackView::onCancelMoving;
  _swift_beginAccess(unaff_x20 + _TtC7PasteUI20ReorderableStackView::onCancelMoving,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = _swift_endAccess;
  return auVar2;
}



/* Address: 0x100238ff0 | FUN_100238ff0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100238ff0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  ID self;
  undefined *puVar2;
  NSArray *pNVar3;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(unaff_x20 + _TtC7PasteUI20ReorderableStackView::onBeginMoving);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC7PasteUI20ReorderableStackView::onCommitMoving);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC7PasteUI20ReorderableStackView::onCancelMoving);
  *puVar1 = 0;
  puVar1[1] = 0;
  _swift_unknownObjectWeakInit(unaff_x20 + _TtC7PasteUI20ReorderableStackView::draggingView,0);
  puVar1 = (undefined8 *)(unaff_x20 + _TtC7PasteUI20ReorderableStackView::initialLocation);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC7PasteUI20ReorderableStackView::initialIndex);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  FUN_1002393c4();
  self = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffa0,"initWithFrame:",param_1,param_2
                             ,param_3,param_4);
  puVar2 = &DAT_100fb7a60;
  FUN_1000037f0(&DAT_100fb7a60,&DAT_100c370f0);
  _swift_allocObject();
  *(undefined8 *)(puVar2 + 0x18) = 2;
  *(undefined8 *)(puVar2 + 0x10) = 1;
  *(undefined8 *)(puVar2 + 0x20) = *(undefined8 *)PTR__NSPasteboardTypeString_100ea9100;
  FUN_1001f3e0c(0);
  pNVar3 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_release(puVar2);
  objc_stub::registerForDraggedTypes_(self,pNVar3);
  return self;
}



/* Address: 0x10023916c | _TtC7PasteUI20ReorderableStackView::initWithFrame: */

/* Function Stack Size: 0x30 bytes */

ID __thiscall
_TtC7PasteUI20ReorderableStackView::initWithFrame_
          (_TtC7PasteUI20ReorderableStackView *this,ID param_1,SEL param_2,CGRect param_3)

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
    pcVar5 = "PasteUI/ReorderableStackView.swift";
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/ReorderableStackView.swift",0x22,1,0x1e,UVar4.unknown,puVar3);
  }
  FUN_100238ff0();
  _swift_release(pMVar2);
  return (ID)pcVar5;
}



/* Address: 0x100239258 | FUN_100239258 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100239258(undefined8 param_1)

{
  undefined8 *puVar1;
  ID self;
  undefined *puVar2;
  NSArray *pNVar3;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(unaff_x20 + _TtC7PasteUI20ReorderableStackView::onBeginMoving);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC7PasteUI20ReorderableStackView::onCommitMoving);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC7PasteUI20ReorderableStackView::onCancelMoving);
  *puVar1 = 0;
  puVar1[1] = 0;
  _swift_unknownObjectWeakInit(unaff_x20 + _TtC7PasteUI20ReorderableStackView::draggingView,0);
  puVar1 = (undefined8 *)(unaff_x20 + _TtC7PasteUI20ReorderableStackView::initialLocation);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC7PasteUI20ReorderableStackView::initialIndex);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  FUN_1002393c4();
  self = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffb0,"initWithCoder:",param_1);
  if (self != 0) {
    puVar2 = &DAT_100fb7a60;
    FUN_1000037f0(&DAT_100fb7a60,&DAT_100c370f0);
    _swift_allocObject();
    *(undefined8 *)(puVar2 + 0x18) = 2;
    *(undefined8 *)(puVar2 + 0x10) = 1;
    *(undefined8 *)(puVar2 + 0x20) = *(undefined8 *)PTR__NSPasteboardTypeString_100ea9100;
    FUN_1001f3e0c(0);
    pNVar3 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
    _swift_release(puVar2);
    objc_stub::registerForDraggedTypes_(self,pNVar3);
  }
  return self;
}



/* Address: 0x1002393c4 | FUN_1002393c4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1002393c4(void)

{
  return ZEXT816(0x100f97080);
}



/* Address: 0x1002393e4 | _TtC7PasteUI20ReorderableStackView::initWithCoder: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC7PasteUI20ReorderableStackView::initWithCoder_(ID param_1,SEL param_2,ID param_3)

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
              ("PasteUI/ReorderableStackView.swift",0x22,1,0x24,UVar4.unknown,puVar3);
  }
  FUN_100239258();
  _swift_release(pMVar2);
  return param_3;
}



/* Address: 0x1002394ac | FUN_1002394ac */

void FUN_1002394ac(undefined8 param_1,undefined8 param_2,ID param_3)

{
  undefined8 *puVar1;
  ID unaff_x20;
  undefined8 extraout_d0;
  
  FUN_1002393c4();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffd0,"mouseDown:",param_3);
  objc_stub::locationInWindow(param_3);
  objc_stub::convertPoint_fromView_(unaff_x20,0);
  puVar1 = (undefined8 *)(unaff_x20 + _TtC7PasteUI20ReorderableStackView::initialLocation);
  *puVar1 = extraout_d0;
  puVar1[1] = param_2;
  *(undefined1 *)(puVar1 + 2) = 0;
  return;
}



/* Address: 0x100239514 | _TtC7PasteUI20ReorderableStackView::mouseDown: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC7PasteUI20ReorderableStackView::mouseDown_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  char *pcVar5;
  undefined8 extraout_d0;
  undefined8 in_d1;
  objc_super local_60;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fb6f30;
  FUN_100003a00(&DAT_100fb6f30,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  pcVar5 = (char *)UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar5 & 1) == 0) {
    pcVar5 = "PasteUI/ReorderableStackView.swift";
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/ReorderableStackView.swift",0x22,1,0x2d,UVar4.unknown,puVar3);
  }
  FUN_1002393c4();
  local_60.receiver = param_1;
  local_60.super_class = (class_t *)pcVar5;
  _objc_msgSendSuper2(&local_60,"mouseDown:",param_3);
  objc_stub::locationInWindow(param_3);
  objc_stub::convertPoint_fromView_(param_1,0);
  puVar3 = (undefined8 *)(param_1 + initialLocation);
  *puVar3 = extraout_d0;
  puVar3[1] = in_d1;
  *(undefined1 *)(puVar3 + 2) = 0;
  _swift_release(pMVar2);
  return;
}



/* Address: 0x100239648 | FUN_100239648 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100239648(undefined8 param_1,double param_2,ID param_3)

{
  double *pdVar1;
  undefined8 *puVar2;
  long *plVar3;
  ID self;
  long lVar4;
  undefined *puVar5;
  ID IVar6;
  NSString *pNVar7;
  NSArray *pNVar8;
  long extraout_x1;
  long lVar9;
  ID unaff_x20;
  code *pcVar10;
  undefined8 uVar11;
  double extraout_d0;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auStack_88 [24];
  
  pdVar1 = (double *)(unaff_x20 + _TtC7PasteUI20ReorderableStackView::initialLocation);
  if (*(char *)(pdVar1 + 2) != '\x01') {
    dVar14 = *pdVar1;
    dVar13 = pdVar1[1];
    objc_stub::locationInWindow(param_3);
    self = objc_stub::convertPoint_fromView_(unaff_x20,0);
    dVar12 = extraout_d0 - dVar14;
    lVar9 = extraout_x1;
    _hypot(dVar12,param_2 - dVar13);
    if ((3.0 <= dVar12) && (FUN_10023a47c(dVar14,dVar13), self != 0)) {
      puVar2 = (undefined8 *)(unaff_x20 + _TtC7PasteUI20ReorderableStackView::onBeginMoving);
      _swift_beginAccess(puVar2,auStack_88,0,0);
      pcVar10 = (code *)*puVar2;
      if (pcVar10 != (code *)0x0) {
        uVar11 = puVar2[1];
        _swift_retain(uVar11);
        lVar4 = lVar9;
        (*pcVar10)();
        FUN_100004550(pcVar10,uVar11);
        if (lVar4 != 0) {
          _swift_unknownObjectWeakAssign
                    (unaff_x20 + _TtC7PasteUI20ReorderableStackView::draggingView,self);
          plVar3 = (long *)(unaff_x20 + _TtC7PasteUI20ReorderableStackView::initialIndex);
          *plVar3 = lVar9;
          *(undefined1 *)(plVar3 + 1) = 0;
          puVar5 = &_OBJC_CLASS___NSPasteboardItem;
          _objc_allocWithZone();
          IVar6 = objc_stub::init((ID)puVar5);
          pNVar7 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
          objc_stub::setString_forType_
                    (IVar6,pNVar7,*(undefined8 *)PTR__NSPasteboardTypeString_100ea9100);
          puVar5 = &_OBJC_CLASS___NSDraggingItem;
          _objc_allocWithZone();
          IVar6 = objc_stub::initWithPasteboardWriter_((ID)puVar5,IVar6);
          objc_stub::frame(self);
          objc_stub::setDraggingFrame_contents_(IVar6,lVar4);
          puVar5 = &DAT_100fb7040;
          FUN_1000037f0(&DAT_100fb7040,&DAT_100c34f70);
          _swift_allocObject();
          *(undefined8 *)(puVar5 + 0x18) = 3;
          *(undefined8 *)(puVar5 + 0x10) = 1;
          *(ID *)(puVar5 + 0x20) = IVar6;
          FUN_10000ec2c(0,&DAT_100fb7a70,&PTR__OBJC_CLASS___NSDraggingItem_100f8da60);
          pNVar8 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
          _swift_release(puVar5);
          objc_stub::beginDraggingSessionWithItems_event_source_(unaff_x20,pNVar8,param_3);
          *pdVar1 = 0.0;
          pdVar1[1] = 0.0;
          *(undefined1 *)(pdVar1 + 2) = 1;
        }
      }
    }
  }
  return;
}



/* Address: 0x1002398bc | _TtC7PasteUI20ReorderableStackView::mouseDragged: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC7PasteUI20ReorderableStackView::mouseDragged_(ID param_1,SEL param_2,ID param_3)

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
              ("PasteUI/ReorderableStackView.swift",0x22,1,0x33,UVar4.unknown,puVar3);
  }
  FUN_100239648(param_3);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x100239998 | FUN_100239998 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100239998(undefined8 param_1)

{
  long lVar1;
  ID IVar2;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _TtC7PasteUI20ReorderableStackView::draggingView;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    return 0;
  }
  FUN_1002393c4();
  IVar2 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffd0,"scrollWheel:",param_1);
  return IVar2;
}



/* Address: 0x1002399fc | _TtC7PasteUI20ReorderableStackView::scrollWheel: */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC7PasteUI20ReorderableStackView::scrollWheel_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  class_t *pcVar6;
  objc_super local_50;
  
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
              ("PasteUI/ReorderableStackView.swift",0x22,1,0x50,UVar4.unknown,puVar3);
  }
  pcVar6 = (class_t *)(param_1 + draggingView);
  _swift_unknownObjectWeakLoadStrong();
  if (pcVar6 != (class_t *)0x0) {
    _swift_release(pMVar2);
    return;
  }
  FUN_1002393c4();
  local_50.receiver = param_1;
  local_50.super_class = pcVar6;
  _objc_msgSendSuper2(&local_50,"scrollWheel:",param_3);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x100239b08 | FUN_100239b08 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100239b08(ID param_1)

{
  ID self;
  long unaff_x20;
  
  self = unaff_x20 + _TtC7PasteUI20ReorderableStackView::draggingView;
  _swift_unknownObjectWeakLoadStrong();
  if (self != 0) {
    objc_stub::setAlphaValue_(self,0);
  }
  objc_stub::setAnimatesToStartingPositionsOnCancelOrFail_(param_1,0);
  return;
}



/* Address: 0x100239b54 | _TtC7PasteUI20ReorderableStackView::draggingSession:willBeginAtPoint: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x28 bytes */

void _TtC7PasteUI20ReorderableStackView::draggingSession_willBeginAtPoint_
               (ID param_1,SEL param_2,ID param_3,CGPoint param_4)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  ID self;
  
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
              ("PasteUI/ReorderableStackView.swift",0x22,1,0x58,UVar4.unknown,puVar3);
  }
  self = param_1 + draggingView;
  _swift_unknownObjectWeakLoadStrong();
  if (self != 0) {
    objc_stub::setAlphaValue_(self,0);
  }
  objc_stub::setAnimatesToStartingPositionsOnCancelOrFail_(param_3,0);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x100239c5c | FUN_100239c5c */

undefined8 FUN_100239c5c(void)

{
  return 0x10;
}



/* Address: 0x100239c64 | _TtC7PasteUI20ReorderableStackView::draggingSession:sourceOperationMaskForDraggingContext: */

/* Function Stack Size: 0x20 bytes */

unsigned_long_long
_TtC7PasteUI20ReorderableStackView::draggingSession_sourceOperationMaskForDraggingContext_
          (ID param_1,SEL param_2,ID param_3,long_long param_4)

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
              ("PasteUI/ReorderableStackView.swift",0x22,1,0x5d,UVar4.unknown,puVar3);
  }
  _swift_release(pMVar2);
  return 0x10;
}



/* Address: 0x100239d04 | FUN_100239d04 */

void FUN_100239d04(undefined8 param_1,undefined8 param_2)

{
  FUN_10023a744(param_2);
  return;
}



/* Address: 0x100239d0c | FUN_100239d0c */

void FUN_100239d0c(void)

{
  undefined *puVar1;
  code *pcVar2;
  MainActor *pMVar3;
  undefined8 *puVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  
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
              ("PasteUI/ReorderableStackView.swift",0x22,1,0x6d,UVar5.unknown,puVar4);
  }
  if (*(ID *)PTR__NSApp_100ea8fa0 != 0) {
    objc_stub::activateIgnoringOtherApps_(*(ID *)PTR__NSApp_100ea8fa0,1);
    _swift_release(pMVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100239dc0);
  (*pcVar2)();
}



/* Address: 0x100239dc0 | _TtC7PasteUI20ReorderableStackView::draggingSession:endedAtPoint:operation: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x30 bytes */

void _TtC7PasteUI20ReorderableStackView::draggingSession_endedAtPoint_operation_
               (ID param_1,SEL param_2,ID param_3,CGPoint param_4,unsigned_long_long param_5)

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
              ("PasteUI/ReorderableStackView.swift",0x22,1,0x61,UVar4.unknown,puVar3);
  }
  FUN_10023a744(param_4.field0_0x0);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x100239ea8 | FUN_100239ea8 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_100239ea8(ID param_1)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  ID IVar4;
  long lVar5;
  long lVar6;
  ID IVar7;
  undefined *puVar8;
  undefined *puVar9;
  void *aBlock;
  undefined *puVar10;
  void *aBlock_00;
  ID unaff_x20;
  undefined8 uVar11;
  undefined *local_b0;
  undefined8 local_a8;
  code *local_a0;
  undefined *puStack_98;
  code *local_90;
  undefined *local_88;
  undefined1 auStack_80 [16];
  
  lVar3 = unaff_x20 + _TtC7PasteUI20ReorderableStackView::draggingView;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar3 == 0) {
    uVar11 = 0;
  }
  else {
    IVar4 = objc_stub::arrangedSubviews(unaff_x20);
    FUN_10000ec2c(0,&DAT_100fb64d8,&PTR__OBJC_CLASS___NSView_100f8d628);
    (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
    lVar5 = lVar3;
    IVar7 = IVar4;
    FUN_100238da8();
    _swift_bridgeObjectRelease(IVar4);
    uVar11 = 0;
    if (((uint)IVar7 & 0xff) != 1) {
      objc_stub::draggingLocation(param_1);
      objc_stub::convertPoint_fromView_(unaff_x20,0);
      lVar6 = lVar5;
      FUN_10023a3e4();
      if (lVar6 == lVar5) {
        uVar11 = 0x10;
      }
      else {
        objc_stub::insertArrangedSubview_atIndex_(unaff_x20,lVar3,lVar6);
        IVar7 = CAMediaTimingFunction::functionWithName_
                          ((ID)&_OBJC_CLASS___CAMediaTimingFunction,
                           *(undefined8 *)PTR__kCAMediaTimingFunctionEaseOut_100eaa3c0);
        puVar8 = &DAT_100ec3560;
        _swift_allocObject(&DAT_100ec3560,0x38,7);
        *(undefined8 *)(puVar8 + 0x10) = 0x3fc3333333333333;
        puVar8[0x18] = 0;
        *(ID *)(puVar8 + 0x20) = IVar7;
        *(code **)(puVar8 + 0x28) = FUN_10023aa90;
        *(undefined1 **)(puVar8 + 0x30) = auStack_80;
        puVar9 = &DAT_100ec3588;
        _swift_allocObject(&DAT_100ec3588,0x20,7);
        *(code **)(puVar9 + 0x10) = FUN_100208b84;
        *(undefined **)(puVar9 + 0x18) = puVar8;
        puVar1 = PTR___NSConcreteStackBlock_100ea82a0;
        local_90 = FUN_1000e8174;
        local_b0 = PTR___NSConcreteStackBlock_100ea82a0;
        local_a8 = 0x42000000;
        local_a0 = FUN_1000f7788;
        puStack_98 = &DAT_100ec35a0;
        local_88 = puVar9;
        aBlock = __Block_copy(&local_b0);
        puVar10 = local_88;
        _swift_retain(puVar9);
        _swift_release(puVar10);
        puVar10 = &DAT_100ec35d8;
        _swift_allocObject(&DAT_100ec35d8,0x20,7);
        *(undefined8 *)(puVar10 + 0x10) = 0;
        *(undefined8 *)(puVar10 + 0x18) = 0;
        local_90 = FUN_100208bf0;
        local_b0 = puVar1;
        local_a8 = 0x42000000;
        local_a0 = FUN_100030410;
        puStack_98 = &DAT_100ec35f0;
        local_88 = puVar10;
        aBlock_00 = __Block_copy(&local_b0);
        _swift_release(local_88);
        NSAnimationContext::runAnimationGroup_completionHandler_
                  ((ID)&_OBJC_CLASS___NSAnimationContext,aBlock,aBlock_00);
        __Block_release(aBlock_00);
        __Block_release(aBlock);
        puVar10 = puVar9;
        _swift_isEscapingClosureAtFileLocation(puVar9,"",0x84,0x1c,0x2e,1);
        _swift_release(puVar9);
        _swift_release(puVar8);
        if (((ulong)puVar10 & 1) != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10023a188);
          (*pcVar2)();
        }
        uVar11 = 0x10;
      }
    }
  }
  return uVar11;
}



/* Address: 0x10023a188 | _TtC7PasteUI20ReorderableStackView::draggingUpdated: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

unsigned_long_long
_TtC7PasteUI20ReorderableStackView::draggingUpdated_(ID param_1,SEL param_2,ID param_3)

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
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/ReorderableStackView.swift",0x22,1,0x70,UVar4.unknown,puVar3);
  }
  _swift_unknownObjectRetain(param_3);
  IVar6 = param_3;
  FUN_100239ea8();
  _swift_release(pMVar2);
  _swift_unknownObjectRelease(param_3);
  return IVar6;
}



/* Address: 0x10023a26c | thunk_FUN_10023ab14 */

void thunk_FUN_10023ab14(void)

{
  FUN_10023ab14();
  return;
}



/* Address: 0x10023a270 | _TtC7PasteUI20ReorderableStackView::draggingEnded: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC7PasteUI20ReorderableStackView::draggingEnded_(ID param_1,SEL param_2,ID param_3)

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
              ("PasteUI/ReorderableStackView.swift",0x22,1,0x83,UVar4.unknown,puVar3);
  }
  _swift_unknownObjectRetain(param_3);
  FUN_10023ab14(param_1);
  _swift_release(pMVar2);
  _swift_unknownObjectRelease(param_3);
  return;
}



/* Address: 0x10023a344 | _TtC7PasteUI20ReorderableStackView::performDragOperation: */

/* Function Stack Size: 0x18 bytes */

bool _TtC7PasteUI20ReorderableStackView::performDragOperation_(ID param_1,SEL param_2,ID param_3)

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
              ("PasteUI/ReorderableStackView.swift",0x22,1,0x90,UVar4.unknown,puVar3);
  }
  _swift_release(pMVar2);
  return 1;
}



/* Address: 0x10023a3e4 | FUN_10023a3e4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10023a3e4(double param_1,ID param_2,ID param_3)

{
  code *pcVar1;
  ID self;
  double extraout_d0;
  double dVar2;
  
  self = param_2;
  FUN_10023a47c();
  if ((self != 0) && (param_3 != param_2)) {
    objc_stub::frame(self);
    dVar2 = extraout_d0;
    _CGRectGetMidX();
    if ((long)param_2 < (long)param_3) {
      param_2 = param_3;
      if (param_1 <= dVar2) {
        param_2 = param_3 - 1;
      }
    }
    else {
      param_2 = param_3;
      if ((dVar2 <= param_1) && (param_2 = param_3 + 1, SCARRY8(param_3,1))) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10023a47c);
        (*pcVar1)();
      }
    }
  }
  return param_2;
}



/* Address: 0x10023a47c | FUN_10023a47c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10023a47c(void)

{
  long lVar1;
  _CocoaArrayWrapper _Var2;
  code *pcVar3;
  _ArrayBuffer _Var4;
  ulong self;
  MainActor *pMVar5;
  undefined8 *puVar6;
  UnownedSerialExecutor UVar7;
  UnownedSerialExecutor UVar8;
  ulong uVar9;
  ID IVar10;
  ID IVar11;
  ID IVar12;
  ID unaff_x20;
  long lVar13;
  ulong uVar14;
  undefined1 auVar15 [16];
  
  _Var4.unknown = (undefined *)objc_stub::arrangedSubviews(unaff_x20);
  FUN_10000ec2c(0,&DAT_100fb64d8,&PTR__OBJC_CLASS___NSView_100f8d628);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  if ((ulong)_Var4.unknown >> 0x3e == 0) {
    lVar13 = *(long *)(((ulong)_Var4.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var2.unknown = _Var4.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < _Var4.unknown) {
      _Var2.unknown = _Var4.unknown;
    }
    lVar13 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
  }
  if (lVar13 != 0) {
    uVar14 = 0;
    do {
      if (((ulong)_Var4.unknown & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)_Var4.unknown & 0xffffffffffffff8) + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10023a65c);
          (*pcVar3)();
        }
        self = *(ulong *)(_Var4.unknown + uVar14 * 8 + 0x20);
      }
      else {
        self = uVar14;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar14,_Var4);
      }
      lVar1 = uVar14 + 1;
      if (SCARRY8(uVar14,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10023a658);
        (*pcVar3)();
      }
      pMVar5 = Swift::MainActor::typeMetadataAccessor();
      pMVar5 = Swift::MainActor::get_shared(pMVar5,pMVar5);
      puVar6 = &DAT_100fb6f30;
      FUN_100003a00(&DAT_100fb6f30,PTR_typeMetadataAccessor_100eaec10,
                    PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
      UVar7 = Swift::Actor::get_unownedExecutor();
      UVar8 = UVar7;
      _swift_task_isCurrentExecutor();
      if (((ulong)UVar8.unknown & 1) == 0) {
        _swift_task_reportUnexpectedExecutor
                  ("PasteUI/ReorderableStackView.swift",0x22,1,0xa9,UVar7.unknown,puVar6);
      }
      uVar9 = objc_stub::frame(self);
      _CGRectContainsPoint();
      _swift_release(pMVar5);
      if ((uVar9 & 1) != 0) {
        _swift_bridgeObjectRelease(_Var4.unknown);
        IVar10 = objc_stub::arrangedSubviews(unaff_x20);
        (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
        IVar12 = self;
        IVar11 = IVar10;
        FUN_100238da8(self);
        _swift_bridgeObjectRelease(IVar10);
        if (((uint)IVar11 & 0xff) == 1) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10023a6b0);
          (*pcVar3)();
        }
        goto LAB_10023a684;
      }
      uVar14 = uVar14 + 1;
    } while (lVar1 != lVar13);
  }
  _swift_bridgeObjectRelease(_Var4.unknown);
  self = 0;
  IVar12 = 0;
LAB_10023a684:
  auVar15._8_8_ = IVar12;
  auVar15._0_8_ = self;
  return auVar15;
}



/* Address: 0x10023a6b0 | FUN_10023a6b0 */

void FUN_10023a6b0(void)

{
  FUN_1002393c4();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"dealloc");
  return;
}



/* Address: 0x10023a6e0 | _TtC7PasteUI20ReorderableStackView::.cxx_destruct */

/* Function Stack Size: 0x10 bytes */

void _TtC7PasteUI20ReorderableStackView::_cxx_destruct(ID param_1,SEL param_2)

{
  FUN_100004550(*(undefined8 *)(param_1 + onBeginMoving),
                ((undefined8 *)(param_1 + onBeginMoving))[1]);
  FUN_100004550(*(undefined8 *)(param_1 + onCommitMoving),
                ((undefined8 *)(param_1 + onCommitMoving))[1]);
  FUN_100004550(*(undefined8 *)(param_1 + onCancelMoving),
                ((undefined8 *)(param_1 + onCancelMoving))[1]);
  _swift_unknownObjectWeakDestroy(param_1 + draggingView);
  return;
}



/* Address: 0x10023a744 | FUN_10023a744 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10023a744(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  DispatchWorkItemFlags DVar3;
  DispatchQoS DVar4;
  DispatchTime DVar5;
  ID IVar6;
  OS_dispatch_queue *pOVar7;
  DispatchTime DVar8;
  DispatchQoS aBlock;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long extraout_x8;
  long lVar13;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 uVar14;
  long extraout_x12;
  long unaff_x20;
  DispatchWorkItemFlags flags;
  long lVar15;
  DispatchQoS qos;
  DispatchTime DVar16;
  code *pcVar17;
  undefined8 uVar18;
  undefined1 auStack_e0 [8];
  undefined1 auStack_b0 [24];
  undefined *local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined8 uStack_68;
  
  DVar3 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  lVar12 = *(long *)(DVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar12 + 0x40));
  flags.unknown = auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  DVar4 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar13 = *(long *)(DVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar13 + 0x40));
  qos.unknown = flags.unknown + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  DVar5 = Dispatch::DispatchTime::typeMetadataAccessor();
  lVar15 = *(long *)(DVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar15 + 0x40));
  DVar16.unknown = qos.unknown + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar2 = _TtC7PasteUI20ReorderableStackView::draggingView;
  IVar6 = unaff_x20 + _TtC7PasteUI20ReorderableStackView::draggingView;
  _swift_unknownObjectWeakLoadStrong();
  objc_stub::updateTrackingAreas(IVar6);
  IVar6 = unaff_x20 + lVar2;
  _swift_unknownObjectWeakLoadStrong();
  if (IVar6 != 0) {
    objc_stub::setAlphaValue_(IVar6,0x3ff0000000000000);
  }
  if ((param_1 == 0) &&
     (*(char *)((undefined8 *)(unaff_x20 + _TtC7PasteUI20ReorderableStackView::initialIndex) + 1) !=
      '\x01')) {
    uVar14 = *(undefined8 *)(unaff_x20 + _TtC7PasteUI20ReorderableStackView::initialIndex);
    puVar1 = (undefined8 *)(unaff_x20 + _TtC7PasteUI20ReorderableStackView::onCancelMoving);
    _swift_beginAccess(puVar1,auStack_b0,0,0);
    pcVar17 = (code *)*puVar1;
    if (pcVar17 != (code *)0x0) {
      uVar18 = puVar1[1];
      _swift_retain(uVar18);
      (*pcVar17)(uVar14);
      FUN_100004550(pcVar17,uVar18);
    }
  }
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar2,0);
  puVar1 = (undefined8 *)(unaff_x20 + _TtC7PasteUI20ReorderableStackView::initialIndex);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  pOVar7 = (OS_dispatch_queue *)0x0;
  FUN_10000ec2c(0,&DAT_100fb7600,&PTR__OBJC_CLASS___OS_dispatch_queue_100f8d6e8);
  DVar8.unknown = (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar7);
  Dispatch::DispatchTime::now(DVar8);
  Dispatch::__infix(DVar16,1.0);
  pcVar17 = *(code **)(lVar15 + 8);
  (*pcVar17)(DVar16.unknown,DVar5.unknown);
  local_70 = FUN_100239d0c;
  uStack_68 = 0;
  local_90 = PTR___NSConcreteStackBlock_100ea82a0;
  local_88 = 0x42000000;
  local_80 = FUN_100030410;
  puStack_78 = &DAT_100ec3618;
  aBlock.unknown = __Block_copy(&local_90);
  Dispatch::DispatchQoS::get_unspecified(aBlock);
  local_98 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar9 = &DAT_100fb7588;
  FUN_100003a00(&DAT_100fb7588,PTR_typeMetadataAccessor_100eae670,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_100eae680);
  puVar10 = &DAT_100fb7610;
  FUN_1000037f0(&DAT_100fb7610,&DAT_100c36c38);
  puVar11 = puVar10;
  FUN_100225b20();
  Swift::SetAlgebra::_init(flags.unknown,&local_98,puVar10,puVar11,DVar3.unknown,puVar9);
  (extension_Dispatch)::__C::OS_dispatch_queue::_asyncAfter
            ((DispatchTime)(DVar16.unknown + -extraout_x12),qos,flags);
  __Block_release(aBlock.unknown);
  (**(code **)(lVar12 + 8))(flags.unknown,DVar3.unknown);
  (**(code **)(lVar13 + 8))(qos.unknown,DVar4.unknown);
  (*pcVar17)(DVar16.unknown + -extraout_x12,DVar5.unknown);
  return;
}



/* Address: 0x10023aa90 | FUN_10023aa90 */

void FUN_10023aa90(void)

{
  long unaff_x20;
  
  objc_stub::layoutSubtreeIfNeeded(*(ID *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x10023aa98 | FUN_10023aa98 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10023aa98(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x10023aabc | FUN_10023aabc */

void FUN_10023aabc(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x10023aacc | FUN_10023aacc */

void FUN_10023aacc(long param_1,long param_2)

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



/* Address: 0x10023aae0 | FUN_10023aae0 */

void FUN_10023aae0(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x10023aae8 | FUN_10023aae8 */

void FUN_10023aae8(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  }
  _swift_deallocObject();
  return;
}



/* Address: 0x10023ab14 | FUN_10023ab14 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

code * FUN_10023ab14(code *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ID IVar3;
  ID IVar4;
  ID unaff_x20;
  undefined8 uVar5;
  long lVar6;
  code *pcVar7;
  undefined1 auStack_58 [24];
  
  if ((char)((long *)(unaff_x20 + _TtC7PasteUI20ReorderableStackView::initialIndex))[1] == '\x01') {
    return param_1;
  }
  lVar6 = *(long *)(unaff_x20 + _TtC7PasteUI20ReorderableStackView::initialIndex);
  lVar2 = unaff_x20 + _TtC7PasteUI20ReorderableStackView::draggingView;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar2 != 0) {
    IVar3 = objc_stub::arrangedSubviews(unaff_x20);
    FUN_10000ec2c(0,&DAT_100fb64d8,&PTR__OBJC_CLASS___NSView_100f8d628);
    (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
    IVar4 = IVar3;
    FUN_100238da8();
    _swift_bridgeObjectRelease(IVar3);
    if (((uint)IVar4 & 0xff) == 1) {
      return (code *)0x0;
    }
    if (lVar6 == lVar2) {
      puVar1 = (undefined8 *)(unaff_x20 + _TtC7PasteUI20ReorderableStackView::onCancelMoving);
      _swift_beginAccess(puVar1,auStack_58,0,0);
      pcVar7 = (code *)*puVar1;
      if (pcVar7 == (code *)0x0) {
        return (code *)0x0;
      }
      uVar5 = puVar1[1];
      _swift_retain(uVar5);
      (*pcVar7)(lVar6);
    }
    else {
      puVar1 = (undefined8 *)(unaff_x20 + _TtC7PasteUI20ReorderableStackView::onCommitMoving);
      _swift_beginAccess(puVar1,auStack_58,0,0);
      pcVar7 = (code *)*puVar1;
      if (pcVar7 == (code *)0x0) {
        return (code *)0x0;
      }
      uVar5 = puVar1[1];
      _swift_retain(uVar5);
      (*pcVar7)(lVar6,lVar2);
    }
    FUN_100004550(pcVar7,uVar5);
    return pcVar7;
  }
  return (code *)0x0;
}



/* Address: 0x10023acb0 | thunk_FUN_10023aacc */

void thunk_FUN_10023aacc(void)

{
  FUN_10023aacc();
  return;
}



/* Address: 0x10023acb4 | thunk_FUN_10023aacc */

void thunk_FUN_10023aacc(void)

{
  FUN_10023aacc();
  return;
}



/* Address: 0x10023acb8 | thunk_FUN_10023aae0 */

void thunk_FUN_10023aae0(void)

{
  FUN_10023aae0();
  return;
}



/* Address: 0x10023acbc | thunk_FUN_10023aae0 */

void thunk_FUN_10023aae0(void)

{
  FUN_10023aae0();
  return;
}



/* Address: 0x10023acc0 | FUN_10023acc0 */

undefined1  [16] FUN_10023acc0(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + _TtC7PasteUI9TextField::onDidEndEditing);
  _swift_beginAccess(pauVar1,auStack_38,0,0);
  auVar2 = *pauVar1;
  FUN_100011128(*(undefined8 *)*pauVar1,*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Address: 0x10023ad18 | FUN_10023ad18 */

void FUN_10023ad18(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _TtC7PasteUI9TextField::onDidEndEditing);
  _swift_beginAccess(puVar1,auStack_48,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  FUN_100004550(uVar2,uVar3);
  return;
}



/* Address: 0x10023ad74 | FUN_10023ad74 */

undefined1  [16] FUN_10023ad74(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _TtC7PasteUI9TextField::onDidEndEditing;
  _swift_beginAccess(unaff_x20 + _TtC7PasteUI9TextField::onDidEndEditing,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = _swift_endAccess;
  return auVar2;
}



/* Address: 0x10023adb4 | FUN_10023adb4 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10023adb4(ID param_1)

{
  ID IVar1;
  
  FUN_10023adf0();
  IVar1 = objc_stub::font(param_1);
  return IVar1;
}



/* Address: 0x10023adf0 | FUN_10023adf0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10023adf0(void)

{
  long lVar1;
  ID IVar2;
  undefined *self;
  long unaff_x20;
  
  lVar1 = _TtC7PasteUI9TextField::___lazy_storage___textField;
  IVar2 = *(ID *)(unaff_x20 + _TtC7PasteUI9TextField::___lazy_storage___textField);
  if (IVar2 == 0) {
    self = &_OBJC_CLASS___NSTextField;
    _objc_allocWithZone();
    IVar2 = objc_stub::init((ID)self);
    FUN_10023b954();
    *(ID *)(unaff_x20 + lVar1) = IVar2;
  }
  return IVar2;
}



/* Address: 0x10023ae6c | FUN_10023ae6c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10023ae6c(ID param_1)

{
  ID self;
  
  self = param_1;
  FUN_10023adf0();
  objc_stub::setFont_(self,param_1);
  return 0;
}



/* Address: 0x10023aea4 | FUN_10023aea4 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_10023aea4(ID *param_1)

{
  ID *self;
  ID IVar1;
  ID unaff_x20;
  undefined1 auVar2 [16];
  
  param_1[1] = unaff_x20;
  self = param_1;
  FUN_10023adf0();
  IVar1 = objc_stub::font((ID)self);
  *param_1 = IVar1;
  auVar2._8_8_ = param_1;
  auVar2._0_8_ = FUN_10023aefc;
  return auVar2;
}



/* Address: 0x10023aefc | FUN_10023aefc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10023aefc(undefined8 *param_1)

{
  objc_stub::setFont_(*(ID *)(param_1[1] + _TtC7PasteUI9TextField::___lazy_storage___textField),
                      *param_1);
  return 0;
}



/* Address: 0x10023af30 | FUN_10023af30 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10023af30(ID param_1)

{
  ID IVar1;
  
  FUN_10023adf0();
  IVar1 = objc_stub::textColor(param_1);
  return IVar1;
}



/* Address: 0x10023af6c | FUN_10023af6c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

undefined8 FUN_10023af6c(ID param_1)

{
  ID IVar1;
  long unaff_x20;
  String SVar2;
  
  IVar1 = param_1;
  FUN_10023adf0();
  objc_stub::setTextColor_(IVar1,param_1);
  IVar1 = objc_stub::placeholderAttributedString
                    (*(ID *)(unaff_x20 + _TtC7PasteUI9TextField::___lazy_storage___textField));
  if (IVar1 == 0) {
    SVar2 = (String)ZEXT816(0);
  }
  else {
    objc_stub::string(IVar1);
    SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  FUN_10023b600(SVar2.str,SVar2.bridgeObject);
  return 0;
}



/* Address: 0x10023b01c | FUN_10023b01c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_10023b01c(ID *param_1)

{
  ID *self;
  ID IVar1;
  ID unaff_x20;
  undefined1 auVar2 [16];
  
  param_1[1] = unaff_x20;
  self = param_1;
  FUN_10023adf0();
  IVar1 = objc_stub::textColor((ID)self);
  *param_1 = IVar1;
  auVar2._8_8_ = param_1;
  auVar2._0_8_ = FUN_10023b074;
  return auVar2;
}



/* Address: 0x10023b074 | FUN_10023b074 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10023b074(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  ID IVar3;
  String SVar4;
  
  lVar2 = _TtC7PasteUI9TextField::___lazy_storage___textField;
  lVar1 = param_1[1];
  if ((param_2 & 1) == 0) {
    objc_stub::setTextColor_
              (*(ID *)(lVar1 + _TtC7PasteUI9TextField::___lazy_storage___textField),*param_1);
    IVar3 = objc_stub::placeholderAttributedString(*(ID *)(lVar1 + lVar2));
    if (IVar3 == 0) {
      SVar4 = (String)ZEXT816(0);
    }
    else {
      objc_stub::string(IVar3);
      SVar4 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    }
    FUN_10023b600(SVar4.str,SVar4.bridgeObject);
  }
  else {
    objc_stub::setTextColor_
              (*(ID *)(lVar1 + _TtC7PasteUI9TextField::___lazy_storage___textField),*param_1);
    IVar3 = objc_stub::placeholderAttributedString(*(ID *)(lVar1 + lVar2));
    if (IVar3 == 0) {
      SVar4 = (String)ZEXT816(0);
    }
    else {
      objc_stub::string(IVar3);
      SVar4 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    }
    FUN_10023b600(SVar4.str,SVar4.bridgeObject);
  }
  return 0;
}



/* Address: 0x10023b1a4 | FUN_10023b1a4 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

String FUN_10023b1a4(ID param_1)

{
  ID IVar1;
  String SVar2;
  
  FUN_10023adf0();
  IVar1 = objc_stub::text(param_1);
  if (IVar1 == 0) {
    SVar2 = (String)ZEXT816(0);
  }
  else {
    SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  return SVar2;
}



/* Address: 0x10023b214 | FUN_10023b214 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10023b214(ID param_1,long param_2)

{
  NSString *pNVar1;
  
  FUN_10023adf0();
  if (param_2 == 0) {
    pNVar1 = (NSString *)0x0;
  }
  else {
    pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(param_2);
  }
  objc_stub::setText_(param_1,pNVar1);
  return 0;
}



/* Address: 0x10023b280 | FUN_10023b280 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_10023b280(String *param_1)

{
  String *self;
  ID IVar1;
  char *unaff_x20;
  String SVar2;
  undefined1 auVar3 [16];
  
  param_1[1].str = unaff_x20;
  self = param_1;
  FUN_10023adf0();
  IVar1 = objc_stub::text((ID)self);
  if (IVar1 == 0) {
    SVar2 = (String)ZEXT816(0);
  }
  else {
    SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  *param_1 = SVar2;
  auVar3._8_8_ = param_1;
  auVar3._0_8_ = FUN_10023b300;
  return auVar3;
}


