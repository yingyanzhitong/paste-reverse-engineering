/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1003df0b0 | FUN_1003df0b0 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1003df0b0(undefined8 param_1)

{
  long lVar1;
  _CocoaArrayWrapper _Var2;
  code *pcVar3;
  ID self;
  _ArrayBuffer _Var4;
  ulong self_00;
  MainActor *pMVar5;
  MainActor *pMVar6;
  UnownedSerialExecutor UVar7;
  UnownedSerialExecutor UVar8;
  long unaff_x20;
  long lVar9;
  ulong uVar10;
  undefined1 auStack_80 [16];
  undefined8 local_70;
  
  self = *(ID *)(unaff_x20 + _TtCO11PasteCoreUI11ItemContent10FooterView::containerView);
  _Var4.unknown = (undefined *)objc_stub::subviews(self);
  FUN_1003df5cc(0);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  if ((ulong)_Var4.unknown >> 0x3e == 0) {
    lVar9 = *(long *)(((ulong)_Var4.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var2.unknown = _Var4.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < _Var4.unknown) {
      _Var2.unknown = _Var4.unknown;
    }
    lVar9 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
  }
  if (lVar9 != 0) {
    uVar10 = 0;
    do {
      if (((ulong)_Var4.unknown & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)_Var4.unknown & 0xffffffffffffff8) + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1003df1f8);
          (*pcVar3)();
        }
        self_00 = *(ulong *)(_Var4.unknown + uVar10 * 8 + 0x20);
      }
      else {
        self_00 = uVar10;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar10,_Var4);
      }
      lVar1 = uVar10 + 1;
      if (SCARRY8(uVar10,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1003df1f4);
        (*pcVar3)();
      }
      pMVar5 = Swift::MainActor::typeMetadataAccessor();
      pMVar6 = Swift::MainActor::get_shared(pMVar5,pMVar5);
      pMVar5 = pMVar6;
      FUN_1003d0b5c();
      UVar7 = Swift::Actor::get_unownedExecutor();
      UVar8 = UVar7;
      _swift_task_isCurrentExecutor();
      if (((ulong)UVar8.unknown & 1) == 0) {
        _swift_task_reportUnexpectedExecutor
                  ("PasteCoreUI/ItemContent.Footer.swift",0x24,1,0x51,UVar7.unknown,pMVar5);
      }
      objc_stub::removeFromSuperview(self_00);
      _swift_release(pMVar6);
      uVar10 = uVar10 + 1;
    } while (lVar1 != lVar9);
  }
  _swift_bridgeObjectRelease(_Var4.unknown);
  local_70 = param_1;
  FUN_1001fa09c(param_1,FUN_1003df610,auStack_80);
  _swift_bridgeObjectRelease();
  objc_stub::layoutIfNeeded(self);
  return;
}



/* Address: 0x1003df260 | FUN_1003df260 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_1003df260(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *local_60 [3];
  undefined8 local_48;
  undefined **ppuStack_40;
  undefined8 local_38;
  
  puVar6 = *(undefined8 **)(param_2 + _TtCO11PasteCoreUI11ItemContent10FooterView::containerView);
  uVar1 = 0;
  local_38 = param_1;
  FUN_1003df5cc();
  ppuStack_40 = &PTR_PTR_100ec00e8;
  local_60[0] = puVar6;
  local_48 = uVar1;
  FUN_1001f9774();
  ppuVar2 = local_60;
  FUN_1001f97b4(*puVar6,puVar6[1],puVar6[2],puVar6[3],ppuVar2,uVar1,&PTR_PTR_100ec00e8);
  FUN_100004594(local_60);
  puVar3 = &DAT_100fc3b00;
  FUN_1000037f0(&DAT_100fc3b00,&DAT_100c45590);
  _swift_initStackObject();
  *(undefined8 *)(puVar3 + 0x18) = 2;
  *(undefined8 *)(puVar3 + 0x10) = 1;
  puVar4 = &DAT_100fc3e70;
  FUN_1000037f0(&DAT_100fc3e70,&DAT_100c45d60);
  *(undefined **)(puVar3 + 0x38) = puVar4;
  *(undefined ***)(puVar3 + 0x40) = &PTR_PTR_100ec00b8;
  *(undefined8 ***)(puVar3 + 0x20) = ppuVar2;
  puVar5 = puVar3;
  FUN_1001f8d60(puVar3);
  _swift_setDeallocating(puVar3);
  uVar1 = *(undefined8 *)(puVar3 + 0x10);
  puVar4 = &DAT_100fc3b10;
  FUN_1000037f0(&DAT_100fc3b10,&DAT_100c455a0);
  _swift_arrayDestroy(puVar3 + 0x20,uVar1,puVar4);
  return puVar5;
}



/* Address: 0x1003df37c | _TtCO11PasteCoreUI11ItemContent10FooterView::initWithFrame: */

/* Function Stack Size: 0x30 bytes */

ID _TtCO11PasteCoreUI11ItemContent10FooterView::initWithFrame_
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
              ("PasteCoreUI/ItemContent.Footer.swift",0x24,1,0xf,UVar3.unknown,pMVar2);
  }
  __swift_stdlib_reportUnimplementedInitializer("PasteCoreUI.FooterView",0x16,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003df404);
  (*pcVar1)();
}



/* Address: 0x1003df404 | FUN_1003df404 */

void FUN_1003df404(void)

{
  FUN_1003df434();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"dealloc");
  return;
}



/* Address: 0x1003df434 | FUN_1003df434 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1003df434(void)

{
  return ZEXT816(0x100f9a828);
}



/* Address: 0x1003df454 | thunk_FUN_1003df458 */

void thunk_FUN_1003df458(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc3880 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c45e98;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c45e98,&DAT_100ed0300);
  DAT_100fc3880 = pTVar1;
  return;
}



/* Address: 0x1003df458 | FUN_1003df458 */

void FUN_1003df458(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc3880 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c45e98;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c45e98,&DAT_100ed0300);
  DAT_100fc3880 = pTVar1;
  return;
}



/* Address: 0x1003df498 | FUN_1003df498 */

undefined1  [16] FUN_1003df498(void)

{
  return ZEXT816(0x100ed0300);
}



/* Address: 0x1003df4a8 | _TtCO11PasteCoreUI11ItemContent10FooterView::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtCO11PasteCoreUI11ItemContent10FooterView::_cxx_destruct(ID param_1,SEL param_2)

{
  return;
}



/* Address: 0x1003df4b8 | FUN_1003df4b8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1003df4b8(void)

{
  long lVar1;
  undefined *puVar2;
  ID IVar3;
  long unaff_x20;
  undefined1 auStack_80 [16];
  ID local_70;
  
  lVar1 = _TtCO11PasteCoreUI11ItemContent10FooterView::containerView;
  puVar2 = &_OBJC_CLASS___NSView;
  _objc_allocWithZone();
  IVar3 = objc_stub::init((ID)puVar2);
  *(ID *)(unaff_x20 + lVar1) = IVar3;
  FUN_1003df434();
  IVar3 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffc0,"initWithFrame:",0,0,0,0);
  puVar2 = &DAT_100fc3e80;
  FUN_1000037f0(&DAT_100fc3e80,&DAT_100c45d50);
  _swift_initStackObject();
  *(undefined8 *)(puVar2 + 0x18) = 3;
  *(undefined8 *)(puVar2 + 0x10) = 1;
  *(undefined8 *)(puVar2 + 0x20) =
       *(undefined8 *)(IVar3 + _TtCO11PasteCoreUI11ItemContent10FooterView::containerView);
  local_70 = IVar3;
  FUN_1001fa150(puVar2,FUN_1003df5c4,auStack_80);
  _swift_bridgeObjectRelease();
  _swift_setDeallocating(puVar2);
  _swift_arrayDestroy(puVar2 + 0x20,*(undefined8 *)(puVar2 + 0x10),
                      PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8);
  return IVar3;
}



/* Address: 0x1003df5c4 | FUN_1003df5c4 */

void FUN_1003df5c4(void)

{
  long unaff_x20;
  
  FUN_1003deeb8(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1003df5cc | FUN_1003df5cc */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_1003df5cc(void)

{
  undefined *puVar1;
  
  if (DAT_100fc3e40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &_OBJC_CLASS___NSView;
  _swift_getObjCClassMetadata();
  DAT_100fc3e40 = puVar1;
  return;
}



/* Address: 0x1003df610 | FUN_1003df610 */

void FUN_1003df610(void)

{
  long unaff_x20;
  
  FUN_1003df260(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1003df618 | FUN_1003df618 */

void FUN_1003df618(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_100004520(param_3,param_4);
  FUN_100004550(param_1,param_2);
  return;
}



/* Address: 0x1003df654 | FUN_1003df654 */

undefined1  [16] FUN_1003df654(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  
  *param_1 = 0;
  param_1[1] = 0;
  auVar1._8_8_ = param_1;
  auVar1._0_8_ = FUN_1003df668;
  return auVar1;
}



/* Address: 0x1003df668 | FUN_1003df668 */

void FUN_1003df668(undefined8 *param_1)

{
  FUN_100004550(*param_1,param_1[1]);
  return;
}



/* Address: 0x1003df674 | FUN_1003df674 */

ID FUN_1003df674(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  ID *pIVar3;
  ID IVar4;
  ID local_48;
  undefined1 auStack_40 [32];
  
  FUN_10000cbfc(param_1,auStack_40);
  uVar2 = 0;
  FUN_1003bcd70(0);
  puVar1 = PTR___type_metadata_for_Any_100eae0c0;
  pIVar3 = &local_48;
  _swift_dynamicCast(pIVar3,auStack_40,PTR___type_metadata_for_Any_100eae0c0 + 8,uVar2,0);
  if ((int)pIVar3 == 0) {
    uVar2 = 0;
    FUN_1003c0184(0);
    pIVar3 = &local_48;
    _swift_dynamicCast(pIVar3,auStack_40,puVar1 + 8,uVar2,0);
    if ((int)pIVar3 == 0) {
      uVar2 = 0;
      FUN_1003c1fe0(0);
      pIVar3 = &local_48;
      _swift_dynamicCast(pIVar3,auStack_40,puVar1 + 8,uVar2,0);
      if ((int)pIVar3 == 0) {
        uVar2 = 0;
        FUN_1003bed54(0);
        pIVar3 = &local_48;
        _swift_dynamicCast(pIVar3,auStack_40,puVar1 + 8,uVar2,0);
        if ((int)pIVar3 == 0) {
          uVar2 = 0;
          FUN_1003bc4bc(0);
          pIVar3 = &local_48;
          _swift_dynamicCast(pIVar3,auStack_40,puVar1 + 8,uVar2,0);
          if ((int)pIVar3 == 0) {
            IVar4 = 0;
            FUN_1003ecfd4();
            _objc_allocWithZone();
            IVar4 = objc_stub::init(IVar4);
          }
          else {
            FUN_1003e1d2c(0);
            _objc_allocWithZone();
            FUN_1003e119c(local_48);
            IVar4 = local_48;
          }
        }
        else {
          FUN_1003e67f0(0);
          _objc_allocWithZone();
          FUN_1003e5590(local_48);
          IVar4 = local_48;
        }
      }
      else {
        FUN_1003ebee0(0);
        _objc_allocWithZone();
        FUN_1003eb750(local_48);
        IVar4 = local_48;
      }
    }
    else {
      FUN_1003e927c(0);
      _objc_allocWithZone();
      FUN_1003e8490(local_48);
      IVar4 = local_48;
    }
  }
  else {
    FUN_1003e3920(0);
    _objc_allocWithZone();
    FUN_1003e3034(local_48);
    IVar4 = local_48;
  }
  FUN_100004594(auStack_40);
  return IVar4;
}



/* Address: 0x1003df818 | FUN_1003df818 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

bool FUN_1003df818(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1003e67f0(0);
  _swift_dynamicCastClass(param_1,uVar1);
  if (param_1 != 0) {
    FUN_1003e4a54(param_2);
  }
  return param_1 != 0;
}



/* Address: 0x1003df880 | FUN_1003df880 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003df880(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  Task TVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 auStack_58 [24];
  
  uVar2 = 0;
  FUN_1003e67f0(0);
  _swift_dynamicCastClass(param_1,uVar2);
  lVar1 = _TtC11PasteCoreUI20ImageItemContentView::pendingCommitTask;
  if (param_1 != 0) {
    puVar5 = *(undefined **)(param_1 + _TtC11PasteCoreUI20ImageItemContentView::pendingCommitTask);
    if (puVar5 != (undefined *)0x0) {
      TVar3.unknown = puVar5;
      _swift_retain();
      Swift::Task::cancel(TVar3);
      _swift_release(puVar5);
      lVar4 = *(long *)(param_1 + lVar1);
      *(undefined8 *)(param_1 + lVar1) = 0;
      _swift_release();
      FUN_1003e4fe0();
      lVar1 = _TtC7PasteUI17ZoomableImageView::image;
      _swift_beginAccess(lVar4 + _TtC7PasteUI17ZoomableImageView::image,auStack_58,0,0);
      FUN_1003bde74(*(undefined8 *)(lVar4 + lVar1));
      FUN_1003bed20(0);
    }
  }
  return;
}



/* Address: 0x1003df988 | FUN_1003df988 */

void FUN_1003df988(undefined8 param_1)

{
  MainActor *pMVar1;
  UnownedSerialExecutor UVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  *(MainActor **)(unaff_x22 + 0x30) = pMVar1;
  pMVar1 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  *(MainActor **)(unaff_x22 + 0x38) = pMVar1;
  FUN_1003d0b5c();
  *(MainActor **)(unaff_x22 + 0x40) = pMVar1;
  UVar2 = Swift::Actor::get_unownedExecutor();
  *(undefined **)(unaff_x22 + 0x48) = UVar2.unknown;
  *(MainActor **)(unaff_x22 + 0x50) = pMVar1;
  _swift_task_switch(FUN_1003df9fc,UVar2.unknown,pMVar1);
  return;
}



/* Address: 0x1003df9fc | FUN_1003df9fc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1003df9fc(void)

{
  undefined8 uVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  MainActor *pMVar4;
  long unaff_x22;
  
  pMVar4 = *(MainActor **)(unaff_x22 + 0x28);
  uVar1 = 0;
  FUN_1003e67f0(0);
  pMVar2 = pMVar4;
  _swift_dynamicCastClass(pMVar4,uVar1);
  *(MainActor **)(unaff_x22 + 0x58) = pMVar2;
  if (pMVar2 != (MainActor *)0x0) {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
    pMVar2 = Swift::MainActor::get_shared(*(MainActor **)(unaff_x22 + 0x30),pMVar4);
    *(MainActor **)(unaff_x22 + 0x60) = pMVar2;
    UVar3 = Swift::Actor::get_unownedExecutor();
    *(undefined **)(unaff_x22 + 0x68) = UVar3.unknown;
    *(undefined8 *)(unaff_x22 + 0x70) = uVar1;
    _swift_task_switch(FUN_1003dfab0,UVar3.unknown,uVar1);
    return;
  }
  _swift_release(*(undefined8 *)(unaff_x22 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x0001003dfaac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Address: 0x1003dfab0 | FUN_1003dfab0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003dfab0(long param_1)

{
  long *plVar1;
  long lVar2;
  long unaff_x22;
  
  FUN_1003e4fe0();
  lVar2 = _TtC7PasteUI17ZoomableImageView::image;
  _swift_beginAccess(param_1 + _TtC7PasteUI17ZoomableImageView::image,unaff_x22 + 0x10,0,0);
  lVar2 = *(long *)(param_1 + lVar2);
  *(long *)(unaff_x22 + 0x78) = lVar2;
  if (lVar2 != 0) {
    plVar1 = (long *)&DAT_00000030;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x80) = plVar1;
    *plVar1 = unaff_x22;
    plVar1[1] = (long)FUN_1003dfb8c;
    FUN_1003be058(lVar2);
    return;
  }
  _swift_release(*(undefined8 *)(unaff_x22 + 0x60));
  *(undefined1 *)(unaff_x22 + 0x89) = 0;
  _swift_task_switch(FUN_1003dfc24,*(undefined8 *)(unaff_x22 + 0x48),
                     *(undefined8 *)(unaff_x22 + 0x50));
  return;
}



/* Address: 0x1003dfb8c | FUN_1003dfb8c */

void FUN_1003dfb8c(undefined1 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined1 *)(lVar1 + 0x88) = param_1;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x80));
  _swift_task_switch(FUN_1003dfbd8,*(undefined8 *)(lVar1 + 0x68),*(undefined8 *)(lVar1 + 0x70));
  return;
}



/* Address: 0x1003dfbd8 | FUN_1003dfbd8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003dfbd8(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x60));
  *(undefined1 *)(unaff_x22 + 0x89) = *(undefined1 *)(unaff_x22 + 0x88);
  _swift_task_switch(FUN_1003dfc24,*(undefined8 *)(unaff_x22 + 0x48),
                     *(undefined8 *)(unaff_x22 + 0x50));
  return;
}



/* Address: 0x1003dfc24 | FUN_1003dfc24 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003dfc24(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x0001003dfc60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined1 *)(unaff_x22 + 0x89));
  return;
}



/* Address: 0x1003dfc64 | FUN_1003dfc64 */

void FUN_1003dfc64(undefined8 param_1)

{
  MainActor *pMVar1;
  UnownedSerialExecutor UVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar1 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  *(MainActor **)(unaff_x22 + 0x18) = pMVar1;
  FUN_1003d0b5c();
  UVar2 = Swift::Actor::get_unownedExecutor();
  *(undefined **)(unaff_x22 + 0x20) = UVar2.unknown;
  *(MainActor **)(unaff_x22 + 0x28) = pMVar1;
  _swift_task_switch(FUN_1003dfcd0,UVar2.unknown,pMVar1);
  return;
}



/* Address: 0x1003dfcd0 | FUN_1003dfcd0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1003dfcd0(void)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x10);
  uVar1 = 0;
  FUN_1003e67f0(0);
  _swift_dynamicCastClass(lVar2,uVar1);
  if (lVar2 != 0) {
    plVar3 = (long *)0x60;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x30) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_1003dfd6c;
    FUN_1003e4d78();
    return;
  }
  _swift_release(*(undefined8 *)(unaff_x22 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0001003dfd68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Address: 0x1003dfd6c | FUN_1003dfd6c */

void FUN_1003dfd6c(undefined1 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined1 *)(lVar1 + 0x38) = param_1;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x30));
  _swift_task_switch(FUN_1003dfdb8,*(undefined8 *)(lVar1 + 0x20),*(undefined8 *)(lVar1 + 0x28));
  return;
}



/* Address: 0x1003dfdb8 | FUN_1003dfdb8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003dfdb8(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0001003dfdf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined1 *)(unaff_x22 + 0x38));
  return;
}



/* Address: 0x1003dfdf4 | FUN_1003dfdf4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1003dfdf4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1003e67f0(0);
  _swift_dynamicCastClass(param_1,uVar1);
  if ((param_1 != 0) && (FUN_1003bea94(), param_1 != 0)) {
    FUN_1003e4fe0();
    FUN_100240a64(param_1);
    FUN_1003e597c(0);
    return 0;
  }
  return 0;
}



/* Address: 0x1003dfe90 | FUN_1003dfe90 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003dfe90(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  uVar2 = 0;
  FUN_1003e67f0(0);
  _swift_dynamicCastClass(param_1,uVar2);
  if (param_1 != 0) {
    FUN_1003e4fe0();
    lVar1 = _TtC7PasteUI17ZoomableImageView::image;
    _swift_beginAccess(param_1 + _TtC7PasteUI17ZoomableImageView::image,auStack_48,0,0);
    FUN_1003bebd0(*(undefined8 *)(param_1 + lVar1));
  }
  return;
}



/* Address: 0x1003dff38 | FUN_1003dff38 */

undefined1  [16] FUN_1003dff38(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  
  *param_1 = 0;
  param_1[1] = 0;
  auVar1._8_8_ = param_1;
  auVar1._0_8_ = thunk_FUN_1003df668;
  return auVar1;
}



/* Address: 0x1003dff4c | FUN_1003dff4c */

undefined1  [16] FUN_1003dff4c(void)

{
  return ZEXT816(0x100ed0360);
}



/* Address: 0x1003dff5c | thunk_FUN_1003df668 */

void thunk_FUN_1003df668(void)

{
  FUN_1003df668();
  return;
}



/* Address: 0x1003dff60 | thunk_FUN_100004550 */

void thunk_FUN_100004550(void)

{
  thunk_FUN_100004550();
  return;
}



/* Address: 0x1003dff64 | FUN_1003dff64 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1003dff64(void)

{
  undefined8 uVar1;
  MainActor *pMVar2;
  ID IVar3;
  ID IVar4;
  MainActor *this;
  MainActor *pMVar5;
  ContiguousArray CVar6;
  UnownedSerialExecutor UVar7;
  UnownedSerialExecutor UVar8;
  undefined8 uVar9;
  code *self;
  char *pcVar10;
  ContiguousArray CVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined *local_90 [2];
  code *local_80;
  ID IStack_78;
  
  _swift_getObjectType();
  pcVar10 = "initWithFrame:";
  IVar3 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff90,"initWithFrame:",0,0,0,0);
  IVar4 = IVar3;
  FUN_1003e01d8();
  lVar13 = *(long *)(IVar4 + 0x10);
  if (lVar13 == 0) {
    _swift_bridgeObjectRelease(IVar4);
    puVar12 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    local_90[0] = PTR___swiftEmptyArrayStorage_100eae0d8;
    Swift::ContiguousArray::_reserveCapacity(lVar13,(ContiguousArray)pcVar10);
    this = Swift::MainActor::typeMetadataAccessor();
    puVar14 = (undefined8 *)(IVar4 + 0x38);
    do {
      uVar9 = puVar14[-3];
      CVar11.unknown = (undefined *)puVar14[-2];
      uVar1 = puVar14[-1];
      pMVar2 = (MainActor *)*puVar14;
      _swift_bridgeObjectRetain(CVar11.unknown);
      pMVar5 = pMVar2;
      _swift_bridgeObjectRetain();
      CVar6.unknown = Swift::MainActor::get_shared(this,pMVar5);
      pMVar5 = (MainActor *)CVar6.unknown;
      FUN_1003d0b5c();
      UVar7 = Swift::Actor::get_unownedExecutor();
      UVar8 = UVar7;
      _swift_task_isCurrentExecutor();
      if (((ulong)UVar8.unknown & 1) == 0) {
        _swift_task_reportUnexpectedExecutor
                  ("PasteCoreUI/ColorItemContentView.Footer.swift",0x2d,1,0xd,UVar7.unknown,pMVar5);
      }
      puVar14 = puVar14 + 4;
      FUN_1003e0fc0(0);
      _objc_allocWithZone();
      FUN_1003e0af8(uVar9,CVar11.unknown,uVar1,pMVar2);
      _swift_release();
      Swift::ContiguousArray::__makeUniqueAndReserveCapacityIfNotUnique(CVar6);
                    /* WARNING: Load size is inaccurate */
      CVar6.unknown = local_90[0][0x10];
      Swift::ContiguousArray::__reserveCapacityAssumingUniqueBuffer((__int64)CVar6.unknown,CVar11);
      Swift::ContiguousArray::__appendElementAssumeUniqueAndCapacity(CVar6.unknown,uVar9);
      Swift::ContiguousArray::__endMutation(CVar6);
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    _swift_bridgeObjectRelease(IVar4);
    puVar12 = local_90[0];
  }
  FUN_10000ec2c(0,&DAT_100fc3500,&PTR__OBJC_CLASS___NSStackView_100f8d698);
  uVar9 = 0;
  FUN_10000ec2c(0,&DAT_100fc3e40,&PTR__OBJC_CLASS___NSView_100f8d628);
  self = FUN_1003e07b0;
  FUN_1001b79c0(FUN_1003e07b0,0,puVar12,uVar9);
  _swift_bridgeObjectRelease(puVar12);
  FUN_1000f66dc();
  objc_stub::setSpacing_((ID)self,0x4020000000000000);
  local_80 = self;
  IStack_78 = IVar3;
  FUN_1001fa09c(self,FUN_1003e0fe0,local_90);
  _swift_bridgeObjectRelease(self);
  return IVar3;
}



/* Address: 0x1003e01d8 | FUN_1003e01d8 */

undefined * FUN_1003e01d8(double param_1,undefined8 param_2,double param_3)

{
  code *pcVar1;
  undefined *puVar2;
  char *pcVar3;
  void *in_x3;
  double dVar4;
  double dVar5;
  String SVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  char *local_b0;
  void *pvStack_a8;
  
  FUN_1002068e0();
  dVar4 = 256.0;
  dVar5 = (double)(long)(param_1 * 256.0);
  if (0x7fefffffffffffff < (ulong)ABS(dVar5)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1003e0748);
    (*pcVar1)();
  }
  if (dVar5 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1003e074c);
    (*pcVar1)();
  }
  if (9.223372036854776e+18 <= dVar5) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1003e0750);
    (*pcVar1)();
  }
  FUN_1002068e0();
  dVar4 = (double)(long)(dVar4 * 256.0);
  if (0x7fefffffffffffff < (ulong)ABS(dVar4)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1003e0754);
    (*pcVar1)();
  }
  if (dVar4 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1003e0758);
    (*pcVar1)();
  }
  if (9.223372036854776e+18 <= dVar4) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1003e075c);
    (*pcVar1)();
  }
  FUN_1002068e0();
  dVar4 = (double)(long)(param_3 * 256.0);
  if (0x7fefffffffffffff < (ulong)ABS(dVar4)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1003e0760);
    (*pcVar1)();
  }
  if (dVar4 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1003e0764);
    (*pcVar1)();
  }
  dVar5 = 9.223372036854776e+18;
  if (9.223372036854776e+18 <= dVar4) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1003e0768);
    (*pcVar1)();
  }
  FUN_1002069ac();
  dVar4 = 360.0;
  dVar5 = (double)(long)(dVar5 * 360.0);
  if (0x7fefffffffffffff < (ulong)ABS(dVar5)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1003e076c);
    (*pcVar1)();
  }
  if (dVar5 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1003e0770);
    (*pcVar1)();
  }
  if (9.223372036854776e+18 <= dVar5) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1003e0774);
    (*pcVar1)();
  }
  FUN_1002069ac();
  dVar4 = (double)(long)(dVar4 * 100.0);
  if (0x7fefffffffffffff < (ulong)ABS(dVar4)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1003e0778);
    (*pcVar1)();
  }
  if (dVar4 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1003e077c);
    (*pcVar1)();
  }
  if (9.223372036854776e+18 <= dVar4) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1003e0780);
    (*pcVar1)();
  }
  FUN_1002069ac();
  dVar4 = (double)(long)(param_3 * 100.0);
  if ((ulong)ABS(dVar4) < 0x7ff0000000000000) {
    if (dVar4 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1003e0788);
      (*pcVar1)();
    }
    dVar5 = 9.223372036854776e+18;
    if (9.223372036854776e+18 <= dVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1003e078c);
      (*pcVar1)();
    }
    FUN_100206a90();
    dVar4 = 360.0;
    dVar5 = (double)(long)(dVar5 * 360.0);
    if (0x7fefffffffffffff < (ulong)ABS(dVar5)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1003e0790);
      (*pcVar1)();
    }
    if (dVar5 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1003e0794);
      (*pcVar1)();
    }
    if (9.223372036854776e+18 <= dVar5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1003e0798);
      (*pcVar1)();
    }
    FUN_100206a90();
    dVar4 = (double)(long)(dVar4 * 100.0);
    if (0x7fefffffffffffff < (ulong)ABS(dVar4)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1003e079c);
      (*pcVar1)();
    }
    if (dVar4 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1003e07a0);
      (*pcVar1)();
    }
    if (dVar4 < 9.223372036854776e+18) {
      FUN_100206a90();
      dVar4 = (double)(long)(param_3 * 100.0);
      if (0x7fefffffffffffff < (ulong)ABS(dVar4)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1003e07a8);
        (*pcVar1)();
      }
      if (-9.223372036854778e+18 < dVar4) {
        if (dVar4 < 9.223372036854776e+18) {
          puVar2 = &DAT_100fc3908;
          FUN_1000037f0(&DAT_100fc3908,&DAT_100c45fc8);
          pcVar3 = (char *)0x7;
          _swift_allocObject();
          *(undefined8 *)(puVar2 + 0x18) = 6;
          *(undefined8 *)(puVar2 + 0x10) = 3;
          *(undefined8 *)(puVar2 + 0x20) = 0x424752;
          *(undefined8 *)(puVar2 + 0x28) = 0xe300000000000000;
          SVar6 = Swift::CustomStringConvertible::get_description();
          SVar7.bridgeObject = &SUB_e200000000000000;
          SVar7.str = (char *)0x202c;
          SVar13.bridgeObject = in_x3;
          SVar13.str = pcVar3;
          Swift::String::append(SVar7,SVar13);
          SVar7 = Swift::CustomStringConvertible::get_description();
          SVar14.bridgeObject = in_x3;
          SVar14.str = pcVar3;
          Swift::String::append(SVar7,SVar14);
          _swift_bridgeObjectRelease(SVar7.bridgeObject);
          SVar8.bridgeObject = &SUB_e200000000000000;
          SVar8.str = (char *)0x202c;
          SVar15.bridgeObject = in_x3;
          SVar15.str = pcVar3;
          Swift::String::append(SVar8,SVar15);
          SVar7 = Swift::CustomStringConvertible::get_description();
          SVar16.bridgeObject = in_x3;
          SVar16.str = pcVar3;
          Swift::String::append(SVar7,SVar16);
          _swift_bridgeObjectRelease(SVar7.bridgeObject);
          local_b0 = SVar6.str;
          pvStack_a8 = SVar6.bridgeObject;
          *(char **)(puVar2 + 0x30) = local_b0;
          *(void **)(puVar2 + 0x38) = pvStack_a8;
          *(undefined8 *)(puVar2 + 0x40) = 0x4c5348;
          *(undefined8 *)(puVar2 + 0x48) = 0xe300000000000000;
          SVar6 = Swift::CustomStringConvertible::get_description();
          SVar9.bridgeObject = &SUB_e200000000000000;
          SVar9.str = (char *)0x202c;
          SVar17.bridgeObject = in_x3;
          SVar17.str = pcVar3;
          Swift::String::append(SVar9,SVar17);
          SVar7 = Swift::CustomStringConvertible::get_description();
          SVar18.bridgeObject = in_x3;
          SVar18.str = pcVar3;
          Swift::String::append(SVar7,SVar18);
          _swift_bridgeObjectRelease(SVar7.bridgeObject);
          SVar10.bridgeObject = &SUB_e200000000000000;
          SVar10.str = (char *)0x202c;
          SVar19.bridgeObject = in_x3;
          SVar19.str = pcVar3;
          Swift::String::append(SVar10,SVar19);
          SVar7 = Swift::CustomStringConvertible::get_description();
          SVar20.bridgeObject = in_x3;
          SVar20.str = pcVar3;
          Swift::String::append(SVar7,SVar20);
          _swift_bridgeObjectRelease(SVar7.bridgeObject);
          local_b0 = SVar6.str;
          pvStack_a8 = SVar6.bridgeObject;
          *(char **)(puVar2 + 0x50) = local_b0;
          *(void **)(puVar2 + 0x58) = pvStack_a8;
          *(undefined8 *)(puVar2 + 0x60) = 0x425348;
          *(undefined8 *)(puVar2 + 0x68) = 0xe300000000000000;
          SVar6 = Swift::CustomStringConvertible::get_description();
          SVar11.bridgeObject = &SUB_e200000000000000;
          SVar11.str = (char *)0x202c;
          SVar21.bridgeObject = in_x3;
          SVar21.str = pcVar3;
          Swift::String::append(SVar11,SVar21);
          SVar7 = Swift::CustomStringConvertible::get_description();
          SVar22.bridgeObject = in_x3;
          SVar22.str = pcVar3;
          Swift::String::append(SVar7,SVar22);
          _swift_bridgeObjectRelease(SVar7.bridgeObject);
          SVar12.bridgeObject = &SUB_e200000000000000;
          SVar12.str = (char *)0x202c;
          SVar23.bridgeObject = in_x3;
          SVar23.str = pcVar3;
          Swift::String::append(SVar12,SVar23);
          SVar7 = Swift::CustomStringConvertible::get_description();
          SVar24.bridgeObject = in_x3;
          SVar24.str = pcVar3;
          Swift::String::append(SVar7,SVar24);
          _swift_bridgeObjectRelease(SVar7.bridgeObject);
          local_b0 = SVar6.str;
          pvStack_a8 = SVar6.bridgeObject;
          *(char **)(puVar2 + 0x70) = local_b0;
          *(void **)(puVar2 + 0x78) = pvStack_a8;
          return puVar2;
        }
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1003e07b0);
        (*pcVar1)();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1003e07ac);
      (*pcVar1)();
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1003e07a4);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003e0784);
  (*pcVar1)();
}



/* Address: 0x1003e07b0 | FUN_1003e07b0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003e07b0(ID *param_1)

{
  NSString *pNVar1;
  ID self;
  undefined8 *puVar2;
  
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  self = NSTextField::labelWithString_((ID)&_OBJC_CLASS___NSTextField,pNVar1);
  puVar2 = (undefined8 *)0x0;
  FUN_1001fef10();
  NSTextField::setTextColor_(self,*puVar2);
  *param_1 = self;
  return;
}



/* Address: 0x1003e0820 | FUN_1003e0820 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_1003e0820(ID param_1,ID param_2)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  undefined8 uVar5;
  ID *pIVar6;
  ID IVar7;
  ID IVar8;
  ID IVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  ID local_80 [3];
  ID local_68;
  undefined **ppuStack_60;
  ID local_58;
  
  IVar7 = param_2;
  _swift_getObjectType();
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1003d0b5c();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteCoreUI/ColorItemContentView.Footer.swift",0x2d,1,0x13,UVar3.unknown,pMVar1);
  }
  ppuStack_60 = &PTR_PTR_100ec00e8;
  uVar5 = 0;
  local_80[0] = param_2;
  local_68 = IVar7;
  local_58 = param_1;
  FUN_10000ec2c(0,&DAT_100fc3500,&PTR__OBJC_CLASS___NSStackView_100f8d698);
  pIVar6 = local_80;
  FUN_1001f9cd8(0,pIVar6,uVar5,&PTR_PTR_100ec00e8);
  FUN_100004594(local_80);
  IVar7 = objc_stub::leadingAnchor(param_1);
  IVar8 = objc_stub::leadingAnchor(param_2);
  IVar7 = objc_stub::constraintEqualToAnchor_(IVar7,IVar8);
  IVar8 = objc_stub::trailingAnchor(param_1);
  IVar9 = objc_stub::trailingAnchor(param_2);
  IVar8 = objc_stub::constraintLessThanOrEqualToAnchor_(IVar8,IVar9);
  puVar10 = &DAT_100fc3b00;
  FUN_1000037f0(&DAT_100fc3b00,&DAT_100c45590);
  _swift_initStackObject();
  *(undefined8 *)(puVar10 + 0x18) = 6;
  *(undefined8 *)(puVar10 + 0x10) = 3;
  puVar11 = &DAT_100fc3e70;
  FUN_1000037f0(&DAT_100fc3e70,&DAT_100c45d60);
  *(undefined **)(puVar10 + 0x38) = puVar11;
  *(undefined ***)(puVar10 + 0x40) = &PTR_PTR_100ec00b8;
  *(ID **)(puVar10 + 0x20) = pIVar6;
  uVar5 = 0;
  FUN_10000ec2c(0,&DAT_100fc32d0,&PTR__OBJC_CLASS___NSLayoutConstraint_100f8d660);
  *(undefined8 *)(puVar10 + 0x60) = uVar5;
  *(undefined ***)(puVar10 + 0x68) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar10 + 0x48) = IVar7;
  *(undefined8 *)(puVar10 + 0x88) = uVar5;
  *(undefined ***)(puVar10 + 0x90) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar10 + 0x70) = IVar8;
  _swift_bridgeObjectRetain(pIVar6);
  puVar12 = puVar10;
  FUN_1001f8d60(puVar10);
  _swift_bridgeObjectRelease(pIVar6);
  _swift_setDeallocating(puVar10);
  uVar5 = *(undefined8 *)(puVar10 + 0x10);
  puVar11 = &DAT_100fc3b10;
  FUN_1000037f0(&DAT_100fc3b10,&DAT_100c455a0);
  _swift_arrayDestroy(puVar10 + 0x20,uVar5,puVar11);
  _swift_release(pMVar2);
  return puVar12;
}



/* Address: 0x1003e0ab8 | _TtCC11PasteCoreUI20ColorItemContentView17FooterContentView::initWithCoder: */

/* Function Stack Size: 0x18 bytes */

ID _TtCC11PasteCoreUI20ColorItemContentView17FooterContentView::initWithCoder_
             (ID param_1,SEL param_2,ID param_3)

{
  FUN_1003e0e58();
  return param_1;
}



/* Address: 0x1003e0ac4 | _TtCC11PasteCoreUI20ColorItemContentView17FooterContentView::initWithFrame: */

/* Function Stack Size: 0x30 bytes */

ID _TtCC11PasteCoreUI20ColorItemContentView17FooterContentView::initWithFrame_
             (ID param_1,SEL param_2,CGRect param_3)

{
  FUN_1003e0f28(param_1,param_2,9,"PasteCoreUI.FooterContentView",0x1d,
                param_3.field1_0x10.field1_0x8);
  return param_1;
}



/* Address: 0x1003e0ad8 | FUN_1003e0ad8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1003e0ad8(void)

{
  return ZEXT816(0x100f9a8f0);
}



/* Address: 0x1003e0af8 | FUN_1003e0af8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

ID FUN_1003e0af8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ID *pIVar2;
  ID self;
  undefined *puVar3;
  long lVar4;
  ID *pIVar5;
  undefined *puVar6;
  undefined *puVar7;
  ID IVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 extraout_d0;
  
  _swift_getObjectType();
  self = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff80,"initWithFrame:",0,0,0,0);
  puVar3 = &DAT_100fc32e8;
  FUN_1000037f0(&DAT_100fc32e8,&DAT_100c45b08);
  lVar4 = 0;
  FUN_100202fc8();
  lVar11 = *(long *)(*(long *)(lVar4 + -8) + 0x48);
  uVar10 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  uVar9 = uVar10 + 0x20 & (uVar10 ^ 0xffffffffffffffff);
  lVar1 = uVar9 + lVar11 * 2;
  puVar7 = puVar3;
  _swift_allocObject(puVar3,lVar1,uVar10 | 7);
  *(undefined8 *)(puVar7 + 0x18) = 4;
  *(undefined8 *)(puVar7 + 0x10) = 2;
  pIVar2 = (ID *)(puVar7 + uVar9);
  FUN_10000ec2c(0,&DAT_100fc3e90,&PTR__OBJC_CLASS___NSFont_100f8d678);
  IVar8 = self;
  FUN_1001ff928();
  *pIVar2 = IVar8;
  pIVar5 = pIVar2;
  _swift_storeEnumTagMultiPayload(pIVar2,lVar4,0);
  FUN_1001fef10();
  *(ID *)((long)pIVar2 + lVar11) = *pIVar5;
  _swift_storeEnumTagMultiPayload((undefined *)((long)pIVar2 + lVar11),lVar4,1);
  puVar6 = puVar7;
  FUN_100201eb0(puVar7,param_1,param_2);
  _swift_setDeallocating(puVar7);
  _swift_arrayDestroy(pIVar2,*(undefined8 *)(puVar7 + 0x10),lVar4);
  _swift_deallocClassInstance(puVar7,0x20,7);
  _swift_allocObject(puVar3,lVar1,uVar10 | 7);
  *(undefined8 *)(puVar3 + 0x18) = 4;
  *(undefined8 *)(puVar3 + 0x10) = 2;
  pIVar2 = (ID *)(puVar3 + uVar9);
  puVar7 = &_OBJC_CLASS___NSFont;
  FUN_1001ff928();
  objc_stub::pointSize((ID)puVar7);
  IVar8 = objc_stub::monospacedDigitSystemFontOfSize_weight_
                    ((ID)&_OBJC_CLASS___NSFont,extraout_d0,
                     *(undefined8 *)PTR__NSFontWeightRegular_100ea90b8);
  *pIVar2 = IVar8;
  pIVar5 = pIVar2;
  _swift_storeEnumTagMultiPayload(pIVar2,lVar4,0);
  FUN_1001fe19c();
  *(ID *)((long)pIVar2 + lVar11) = *pIVar5;
  _swift_storeEnumTagMultiPayload((undefined *)((long)pIVar2 + lVar11),lVar4,1);
  puVar7 = puVar3;
  FUN_100201eb0(puVar3,param_3,param_4);
  _swift_bridgeObjectRelease(param_4);
  _swift_bridgeObjectRelease(param_2);
  _swift_setDeallocating(puVar3);
  _swift_arrayDestroy(pIVar2,*(undefined8 *)(puVar3 + 0x10),lVar4);
  _swift_deallocClassInstance(puVar3,0x20,7);
  objc_stub::setSpacing_(self,0x4010000000000000);
  FUN_1000f668c(0);
  puVar3 = &DAT_100fc3e80;
  FUN_1000037f0(&DAT_100fc3e80,&DAT_100c45d50);
  _swift_initStackObject();
  *(undefined8 *)(puVar3 + 0x18) = 5;
  *(undefined8 *)(puVar3 + 0x10) = 2;
  IVar8 = objc_stub::labelWithAttributedString_((ID)&_OBJC_CLASS___NSTextField,puVar6);
  *(ID *)(puVar3 + 0x20) = IVar8;
  IVar8 = objc_stub::labelWithAttributedString_((ID)&_OBJC_CLASS___NSTextField,puVar7);
  *(ID *)(puVar3 + 0x28) = IVar8;
  FUN_100201b9c(puVar3);
  _swift_setDeallocating(puVar3);
  _swift_arrayDestroy(puVar3 + 0x20,*(undefined8 *)(puVar3 + 0x10),
                      PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8);
  return self;
}



/* Address: 0x1003e0e4c | _TtC11PasteCoreUIP33_A0E2071F64FF1E7385C5B123082B932815ColorFormatView::initWithCoder: */

/* Function Stack Size: 0x18 bytes */

ID _TtC11PasteCoreUIP33_A0E2071F64FF1E7385C5B123082B932815ColorFormatView::initWithCoder_
             (ID param_1,SEL param_2,ID param_3)

{
  FUN_1003e0e58();
  return param_1;
}



/* Address: 0x1003e0e58 | FUN_1003e0e58 */

void FUN_1003e0e58(void)

{
  code *pcVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  undefined8 in_x3;
  String SVar5;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  FUN_1003d0b5c();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteCoreUI/ColorItemContentView.Footer.swift",0x2d,1,in_x3,UVar3.unknown,pMVar2);
  }
  SVar5.bridgeObject = (void *)0x2;
  SVar5.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar5,(StaticString)0xd000000000000025,0x8000000100d8dc00,
             0xda54d0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003e0f14);
  (*pcVar1)();
}



/* Address: 0x1003e0f14 | _TtC11PasteCoreUIP33_A0E2071F64FF1E7385C5B123082B932815ColorFormatView::initWithFrame: */

/* Function Stack Size: 0x30 bytes */

ID _TtC11PasteCoreUIP33_A0E2071F64FF1E7385C5B123082B932815ColorFormatView::initWithFrame_
             (ID param_1,SEL param_2,CGRect param_3)

{
  FUN_1003e0f28(param_1,param_2,0x2a,"PasteCoreUI.ColorFormatView",0x1b,
                param_3.field1_0x10.field1_0x8);
  return param_1;
}



/* Address: 0x1003e0f28 | FUN_1003e0f28 */

void FUN_1003e0f28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

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
              ("PasteCoreUI/ColorItemContentView.Footer.swift",0x2d,1,param_3,UVar3.unknown,pMVar2);
  }
  __swift_stdlib_reportUnimplementedInitializer(param_4,param_5,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003e0fc0);
  (*pcVar1)();
}



/* Address: 0x1003e0fc0 | FUN_1003e0fc0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1003e0fc0(void)

{
  return ZEXT816(0x100f9a9a8);
}



/* Address: 0x1003e0fe0 | FUN_1003e0fe0 */

void FUN_1003e0fe0(void)

{
  long unaff_x20;
  
  FUN_1003e0820(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1003e0fe8 | FUN_1003e0fe8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1003e0fe8(void)

{
  long lVar1;
  ID IVar2;
  long unaff_x20;
  
  lVar1 = _TtC11PasteCoreUI20ColorItemContentView::___lazy_storage___colorPanel;
  IVar2 = *(ID *)(unaff_x20 + _TtC11PasteCoreUI20ColorItemContentView::___lazy_storage___colorPanel)
  ;
  if (IVar2 == 0) {
    IVar2 = objc_stub::FUN_100c0eb60((ID)&_OBJC_CLASS___NSColorPanel);
    FUN_1003e106c();
    *(ID *)(unaff_x20 + lVar1) = IVar2;
  }
  return IVar2;
}



/* Address: 0x1003e106c | FUN_1003e106c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003e106c(ID param_1,ID param_2)

{
  ID IVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 local_48;
  ID IStack_40;
  undefined8 local_38;
  
  IVar1 = objc_stub::standardWindowButton_(param_1,2);
  if (IVar1 != 0) {
    objc_stub::setEnabled_(IVar1,0);
  }
  IVar1 = objc_stub::standardWindowButton_(param_1,0);
  if (IVar1 != 0) {
    objc_stub::setEnabled_(IVar1,0);
  }
  objc_stub::FUN_100c0db00(param_1,0);
  objc_stub::setHidesOnDeactivate_(param_1,0);
  IVar1 = objc_stub::window(param_2);
  if (IVar1 == 0) {
    IStack_40 = 3;
  }
  else {
    IStack_40 = objc_stub::FUN_100c06200(IVar1);
  }
  uVar2 = 0;
  FUN_1003cdfe0(0);
  local_48 = 1;
  puVar3 = &DAT_100fc3980;
  FUN_100003a00(&DAT_100fc3980,FUN_1003cdfe0,
                PTR_AppKit____C__NSWindowLevel_>AppKit___AppKitKitNumericRawRepresentable_100ea8e98)
  ;
  (extension_AppKit)::AppKit::_AppKitKitNumericRawRepresentable::___infix
            (&local_38,&IStack_40,&local_48,uVar2,puVar3);
  objc_stub::setLevel_(param_1,local_38);
  objc_stub::setAnimationBehavior_(param_1,2);
  return;
}



/* Address: 0x1003e119c | FUN_1003e119c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

ID FUN_1003e119c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  ID IVar5;
  NSString *pNVar6;
  ID IVar7;
  undefined *puVar8;
  ID self;
  undefined *puVar9;
  long unaff_x20;
  undefined1 auStack_b0 [16];
  ID local_a0;
  
  _swift_getObjectType();
  *(undefined8 *)(unaff_x20 + _TtC11PasteCoreUI20ColorItemContentView::editToolbar) = 0;
  lVar3 = _TtC11PasteCoreUI20ColorItemContentView::footer;
  uVar4 = 0;
  FUN_1003df434();
  _objc_allocWithZone();
  FUN_1003df4b8();
  *(undefined8 *)(unaff_x20 + lVar3) = uVar4;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC11PasteCoreUI20ColorItemContentView::onCanCommitEditing);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC11PasteCoreUI20ColorItemContentView::onDidFinishEditing);
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar3 = _TtC11PasteCoreUI20ColorItemContentView::colorView;
  IVar5 = 0;
  FUN_100236364();
  _objc_allocWithZone();
  IVar5 = objc_stub::init(IVar5);
  *(ID *)(unaff_x20 + lVar3) = IVar5;
  lVar3 = _TtC11PasteCoreUI20ColorItemContentView::colorCodeLabel;
  pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar5 = objc_stub::labelWithString_((ID)&_OBJC_CLASS___NSTextField,pNVar6);
  IVar7 = objc_stub::userFixedPitchFontOfSize_((ID)&_OBJC_CLASS___NSFont,0x4036000000000000);
  objc_stub::setFont_(IVar5,IVar7);
  objc_stub::setTextAlignment_(IVar5,1);
  *(ID *)(unaff_x20 + lVar3) = IVar5;
  *(undefined1 *)(unaff_x20 + _TtC11PasteCoreUI20ColorItemContentView::isEditing) = 0;
  *(undefined8 *)(unaff_x20 + _TtC11PasteCoreUI20ColorItemContentView::___lazy_storage___colorPanel)
       = 0;
  *(long *)(unaff_x20 + _TtC11PasteCoreUI20ColorItemContentView::viewModel) = param_1;
  _swift_retain(param_1);
  IVar7 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffa0,"initWithFrame:",0,0,0,0);
  puVar8 = &DAT_100fc3e80;
  FUN_1000037f0(&DAT_100fc3e80,&DAT_100c45d50);
  _swift_initStackObject();
  *(undefined8 *)(puVar8 + 0x18) = 5;
  *(undefined8 *)(puVar8 + 0x10) = 2;
  *(undefined8 *)(puVar8 + 0x20) =
       *(undefined8 *)(IVar7 + _TtC11PasteCoreUI20ColorItemContentView::colorView);
  *(undefined8 *)(puVar8 + 0x28) =
       *(undefined8 *)(IVar7 + _TtC11PasteCoreUI20ColorItemContentView::colorCodeLabel);
  local_a0 = IVar7;
  FUN_1001fa150(puVar8,FUN_1003e2334,auStack_b0);
  _swift_bridgeObjectRelease();
  _swift_setDeallocating(puVar8);
  _swift_arrayDestroy(puVar8 + 0x20,*(undefined8 *)(puVar8 + 0x10),
                      PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8);
  self = objc_stub::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  uVar4 = *(undefined8 *)PTR__NSColorPanelColorDidChangeNotification_100ea9020;
  IVar5 = IVar7;
  FUN_1003e0fe8();
  objc_stub::addObserver_selector_name_object_(self,IVar7,"colorChanged",uVar4,IVar5);
  puVar8 = &DAT_100ed03f8;
  _swift_allocObject(&DAT_100ed03f8,0x18,7);
  _swift_unknownObjectWeakInit(puVar8 + 0x10,IVar7);
  puVar9 = &DAT_100ed0420;
  _swift_allocObject(&DAT_100ed0420,0x20,7);
  *(undefined **)(puVar9 + 0x10) = puVar8;
  *(long *)(puVar9 + 0x18) = param_1;
  _swift_beginAccess(param_1 + 0x10,auStack_b0,1,0);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(code **)(param_1 + 0x10) = FUN_1003e238c;
  *(undefined **)(param_1 + 0x18) = puVar9;
  _swift_retain(param_1);
  _swift_retain(puVar8);
  FUN_100004550(uVar4,uVar2);
  _swift_release(puVar8);
  FUN_1003bbc20();
  FUN_1003e1724();
  _swift_release(param_1);
  return IVar7;
}



/* Address: 0x1003e1508 | FUN_1003e1508 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_1003e1508(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 **ppuVar4;
  undefined8 **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *local_88 [3];
  undefined8 *local_70;
  undefined **ppuStack_68;
  
  puVar1 = param_1;
  _swift_getObjectType();
  ppuStack_68 = &PTR_PTR_100ec00e8;
  puVar2 = param_1;
  local_88[0] = param_1;
  local_70 = puVar1;
  FUN_1001f9774();
  uVar9 = *puVar2;
  uVar10 = puVar2[1];
  uVar11 = puVar2[2];
  uVar12 = puVar2[3];
  uVar3 = 0;
  FUN_100236364(0);
  ppuVar4 = local_88;
  FUN_1001f97b4(uVar9,uVar10,uVar11,uVar12,ppuVar4,uVar3,&PTR_PTR_100ec00e8);
  FUN_100004594(local_88);
  ppuStack_68 = &PTR_PTR_100ec00e8;
  uVar3 = 0;
  local_88[0] = param_1;
  local_70 = puVar1;
  FUN_10000ec2c(0,&DAT_100fc31b0,&PTR__OBJC_CLASS___NSTextField_100f8d670);
  ppuVar5 = local_88;
  FUN_1001f9a0c(0,0,ppuVar5,uVar3,&PTR_PTR_100ec00e8);
  FUN_100004594(local_88);
  puVar6 = &DAT_100fc3b00;
  FUN_1000037f0(&DAT_100fc3b00,&DAT_100c45590);
  _swift_initStackObject();
  *(undefined8 *)(puVar6 + 0x18) = 4;
  *(undefined8 *)(puVar6 + 0x10) = 2;
  puVar7 = &DAT_100fc3e70;
  FUN_1000037f0(&DAT_100fc3e70,&DAT_100c45d60);
  *(undefined **)(puVar6 + 0x38) = puVar7;
  *(undefined ***)(puVar6 + 0x40) = &PTR_PTR_100ec00b8;
  *(undefined8 ***)(puVar6 + 0x20) = ppuVar4;
  *(undefined **)(puVar6 + 0x60) = puVar7;
  *(undefined ***)(puVar6 + 0x68) = &PTR_PTR_100ec00b8;
  *(undefined8 ***)(puVar6 + 0x48) = ppuVar5;
  puVar8 = puVar6;
  FUN_1001f8d60(puVar6);
  _swift_setDeallocating(puVar6);
  uVar3 = *(undefined8 *)(puVar6 + 0x10);
  puVar7 = &DAT_100fc3b10;
  FUN_1000037f0(&DAT_100fc3b10,&DAT_100c455a0);
  _swift_arrayDestroy(puVar6 + 0x20,uVar3,puVar7);
  return puVar8;
}



/* Address: 0x1003e16b4 | FUN_1003e16b4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1003e16b4(long param_1)

{
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    if ((*(byte *)(param_1 + _TtC11PasteCoreUI20ColorItemContentView::isEditing) & 1) == 0) {
      FUN_1003bbc20();
      FUN_1003e1724();
    }
    return 0;
  }
  return 0;
}



/* Address: 0x1003e1724 | FUN_1003e1724 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1003e1724(char *param_1,void *param_2)

{
  char *pcVar1;
  NSString *pNVar2;
  undefined8 uVar3;
  long unaff_x20;
  ID self;
  String SVar4;
  
  pcVar1 = param_1;
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 &
               **(ulong **)(unaff_x20 + _TtC11PasteCoreUI20ColorItemContentView::colorView)) + 0x60)
  )();
  self = *(ID *)(unaff_x20 + _TtC11PasteCoreUI20ColorItemContentView::colorCodeLabel);
  FUN_100206b5c();
  SVar4.bridgeObject = param_2;
  SVar4.str = pcVar1;
  SVar4 = Swift::String::uppercased(SVar4);
  _swift_bridgeObjectRelease(param_2);
  pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(SVar4.bridgeObject);
  objc_stub::setText_(self,pNVar2);
  uVar3 = 0;
  FUN_100206ecc(0);
  objc_stub::setTextColor_(self,uVar3);
  FUN_1003e0ad8(0);
  _objc_allocWithZone();
  FUN_1003dff64(param_1);
  FUN_1003df0b0();
  return 0;
}



/* Address: 0x1003e1838 | _TtC11PasteCoreUI20ColorItemContentView::initWithCoder: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC11PasteCoreUI20ColorItemContentView::initWithCoder_(ID param_1,SEL param_2,ID param_3)

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
              ("PasteCoreUI/ColorItemContentView.swift",0x26,1,0x48,UVar4.unknown,puVar3);
  }
  FUN_1003e21cc();
  _swift_release(pMVar2);
  return param_3;
}



/* Address: 0x1003e1900 | FUN_1003e1900 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8
FUN_1003e1900(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,ID param_5)

{
  long lVar1;
  ID IVar2;
  ID self;
  ID unaff_x20;
  double extraout_d0;
  double extraout_d0_00;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  double dVar8;
  undefined8 uVar9;
  
  FUN_1003e0fe8();
  IVar2 = param_5;
  FUN_1003bbc20();
  objc_stub::FUN_100c0af20(param_5,IVar2);
  lVar1 = _TtC11PasteCoreUI20ColorItemContentView::___lazy_storage___colorPanel;
  objc_stub::makeKeyAndOrderFront_
            (*(ID *)(unaff_x20 +
                    _TtC11PasteCoreUI20ColorItemContentView::___lazy_storage___colorPanel),0);
  IVar2 = objc_stub::window(unaff_x20);
  if (IVar2 != 0) {
    self = objc_stub::mainScreen((ID)&_OBJC_CLASS___NSScreen);
    if (self != 0) {
      objc_stub::frame(self);
      dVar8 = param_3;
      objc_stub::frame(IVar2);
      uVar7 = param_2;
      dVar6 = dVar8;
      uVar9 = param_4;
      objc_stub::frame(*(ID *)(unaff_x20 + lVar1));
      dVar5 = extraout_d0;
      _CGRectGetMaxX(extraout_d0,param_2,dVar8,param_4);
      dVar3 = extraout_d0;
      _CGRectGetMaxX(extraout_d0,param_2,dVar8,param_4);
      dVar4 = extraout_d0_00;
      _CGRectGetWidth(extraout_d0_00,uVar7,dVar6,uVar9);
      if (dVar4 + 40.0 <= param_3 - dVar3) {
        dVar5 = dVar5 + 20.0;
      }
      else {
        dVar3 = extraout_d0;
        _CGRectGetMinX(extraout_d0,param_2,dVar8,param_4);
        dVar5 = extraout_d0_00;
        _CGRectGetWidth(extraout_d0_00,uVar7,dVar6,uVar9);
        dVar5 = (dVar3 + -20.0) - dVar5;
      }
      dVar3 = extraout_d0;
      _CGRectGetMinY(extraout_d0,param_2,dVar8,param_4);
      dVar4 = extraout_d0_00;
      _CGRectGetHeight(extraout_d0_00,uVar7,dVar6,uVar9);
      dVar6 = extraout_d0;
      _CGRectGetHeight(extraout_d0,param_2,dVar8,param_4);
      objc_stub::setFrameOrigin_(*(ID *)(unaff_x20 + lVar1),dVar5,dVar3 + (dVar4 - dVar6) * -0.5);
    }
    return 0;
  }
  return 0;
}



/* Address: 0x1003e1b54 | FUN_1003e1b54 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1003e1b54(ID param_1)

{
  long lVar1;
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + _TtC11PasteCoreUI20ColorItemContentView::isEditing) = 0;
  FUN_1003e0fe8();
  objc_stub::orderOut_(param_1,0);
  lVar1 = 0;
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 &
               **(ulong **)(unaff_x20 + _TtC11PasteCoreUI20ColorItemContentView::colorView)) + 0x58)
  )();
  if (lVar1 != 0) {
    FUN_1003bc01c();
    return 0;
  }
  return 0;
}



/* Address: 0x1003e1be4 | _TtC11PasteCoreUI20ColorItemContentView::initWithFrame: */

/* Function Stack Size: 0x30 bytes */

ID _TtC11PasteCoreUI20ColorItemContentView::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

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
              ("PasteCoreUI/ColorItemContentView.swift",0x26,1,10,UVar4.unknown,puVar3);
  }
  __swift_stdlib_reportUnimplementedInitializer
            ("PasteCoreUI.ColorItemContentView",0x20,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1003e1c8c);
  (*pcVar2)();
}



/* Address: 0x1003e1c8c | _TtC11PasteCoreUI20ColorItemContentView::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11PasteCoreUI20ColorItemContentView::_cxx_destruct(ID param_1,SEL param_2)

{
  FUN_100004550(*(undefined8 *)(param_1 + onCanCommitEditing),
                ((undefined8 *)(param_1 + onCanCommitEditing))[1]);
  FUN_100004550(*(undefined8 *)(param_1 + onDidFinishEditing),
                ((undefined8 *)(param_1 + onDidFinishEditing))[1]);
  _swift_release(*(undefined8 *)(param_1 + viewModel));
  return;
}



/* Address: 0x1003e1d2c | FUN_1003e1d2c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1003e1d2c(void)

{
  return ZEXT816(0x100f9aa60);
}



/* Address: 0x1003e1d4c | FUN_1003e1d4c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_1003e1d4c(void)

{
  long *unaff_x20;
  
  return *(undefined8 *)(*unaff_x20 + _TtC11PasteCoreUI20ColorItemContentView::footer);
}



/* Address: 0x1003e1d60 | FUN_1003e1d60 */

void FUN_1003e1d60(undefined8 param_1,undefined8 param_2)

{
  FUN_1003e1de0(param_1,param_2,&_TtC11PasteCoreUI20ColorItemContentView::onCanCommitEditing,
                thunk_FUN_100011128);
  return;
}



/* Address: 0x1003e1d74 | FUN_1003e1d74 */

void FUN_1003e1d74(void)

{
  FUN_1003e1e58();
  return;
}


