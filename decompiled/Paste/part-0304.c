/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1003d2174 | FUN_1003d2174 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_1003d2174(undefined8 *param_1)

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
  FUN_1003d1cc0();
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
  FUN_10023c8b4(0);
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



/* Address: 0x1003d22bc | _TtCCC11PasteCoreUI8ItemCell10HeaderView10TitleLabel::init */

/* Function Stack Size: 0x10 bytes */

ID _TtCCC11PasteCoreUI8ItemCell10HeaderView10TitleLabel::init(ID param_1,SEL param_2)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  char *pcVar5;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fc31a8;
  FUN_100003a00(&DAT_100fc31a8,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  pcVar5 = (char *)UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar5 & 1) == 0) {
    pcVar5 = "PasteCoreUI/ItemCell.HeaderView.TitleLabel.swift";
    _swift_task_reportUnexpectedExecutor
              ("PasteCoreUI/ItemCell.HeaderView.TitleLabel.swift",0x30,1,0x31,UVar4.unknown,puVar3);
  }
  FUN_1003d20a0();
  _swift_release(pMVar2);
  return (ID)pcVar5;
}



/* Address: 0x1003d2378 | _TtCCC11PasteCoreUI8ItemCell10HeaderView10TitleLabel::initWithCoder: */

/* Function Stack Size: 0x18 bytes */

ID _TtCCC11PasteCoreUI8ItemCell10HeaderView10TitleLabel::initWithCoder_
             (ID param_1,SEL param_2,ID param_3)

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
  puVar3 = &DAT_100fc31a8;
  FUN_100003a00(&DAT_100fc31a8,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteCoreUI/ItemCell.HeaderView.TitleLabel.swift",0x30,1,0x38,UVar4.unknown,puVar3);
  }
  *(undefined1 *)(param_1 + isEditable) = 0;
  puVar3 = (undefined8 *)(param_1 + onCommitEditing);
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined8 *)(param_1 + ___lazy_storage___textField) = 0;
  puVar3 = (undefined8 *)(param_1 + originalText);
  *puVar3 = 0;
  puVar3[1] = 0;
  SVar6.bridgeObject = (void *)0x2;
  SVar6.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar6,(StaticString)0xd000000000000025,0x8000000100d8dc00,
             0xda5240);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1003d2488);
  (*pcVar2)();
}



/* Address: 0x1003d2488 | FUN_1003d2488 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1003d2488(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  DispatchWorkItemFlags DVar2;
  DispatchQoS DVar3;
  DispatchQoS DVar4;
  undefined8 uVar5;
  OS_dispatch_queue *pOVar6;
  undefined *puVar7;
  void *aBlock;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar11;
  DispatchWorkItemFlags qos;
  long lVar12;
  long local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  DVar2 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  puVar9 = PTR_typeMetadataAccessor_100eae670;
  local_a0 = *(long *)(DVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_a0 + 0x40));
  lVar11 = (long)&local_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  DVar3 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar12 = *(long *)(DVar3.unknown + -8);
  DVar4 = DVar3;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar12 + 0x40));
  qos.unknown = (undefined *)(lVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  FUN_1003d1cc0();
  FUN_10023b1a4();
  puVar1 = (undefined8 *)
           (unaff_x20 + _TtCCC11PasteCoreUI8ItemCell10HeaderView10TitleLabel::originalText);
  uVar5 = puVar1[1];
  *puVar1 = DVar4.unknown;
  puVar1[1] = param_2;
  _swift_bridgeObjectRelease(uVar5);
  FUN_10023b414(1);
  pOVar6 = (OS_dispatch_queue *)0x0;
  FUN_1003d2f80();
  (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar6);
  puVar7 = &DAT_100ecfdb8;
  _swift_allocObject(&DAT_100ecfdb8,0x18,7);
  _swift_unknownObjectWeakInit(puVar7 + 0x10);
  local_70 = FUN_1003d3078;
  local_90 = PTR___NSConcreteStackBlock_100ea82a0;
  local_88 = 0x42000000;
  local_80 = FUN_100030410;
  puStack_78 = &DAT_100ecfdf8;
  local_68 = puVar7;
  aBlock = __Block_copy(&local_90);
  DVar4.unknown = puVar7;
  _swift_retain();
  Dispatch::DispatchQoS::get_unspecified(DVar4);
  local_98 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar8 = &DAT_100fc3440;
  FUN_100003a00(&DAT_100fc3440,puVar9,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_100eae680);
  puVar9 = &DAT_100fc3448;
  FUN_1000037f0(&DAT_100fc3448,&DAT_100c45c00);
  puVar10 = puVar9;
  FUN_1003d3020();
  Swift::SetAlgebra::_init(lVar11,&local_98,puVar9,puVar10,DVar2.unknown,puVar8);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
  __Block_release(aBlock);
  (**(code **)(local_a0 + 8))(lVar11,DVar2.unknown);
  (**(code **)(lVar12 + 8))(qos.unknown,DVar3.unknown);
  puVar8 = local_68;
  _swift_release(puVar7);
  _swift_release(puVar8);
  return;
}



/* Address: 0x1003d26f0 | _TtCCC11PasteCoreUI8ItemCell10HeaderView10TitleLabel::mouseDown: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtCCC11PasteCoreUI8ItemCell10HeaderView10TitleLabel::mouseDown_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  class_t *pcVar2;
  MainActor *pMVar3;
  undefined8 *puVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  ID IVar7;
  objc_super local_60;
  
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
              ("PasteCoreUI/ItemCell.HeaderView.TitleLabel.swift",0x30,1,0x3c,UVar5.unknown,puVar4);
  }
  if (*(char *)(param_1 + isEditable) == '\x01') {
    IVar7 = param_1;
    FUN_1003d1cc0();
    FUN_10023b3e0();
    if ((IVar7 & 1) == 0) {
      FUN_1003d2488(0);
      goto LAB_1003d2804;
    }
  }
  local_60.receiver = param_1;
  local_60.super_class = pcVar2;
  _objc_msgSendSuper2(&local_60,"mouseDown:",param_3);
LAB_1003d2804:
  _swift_release(pMVar3);
  return;
}



/* Address: 0x1003d2838 | FUN_1003d2838 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1003d2838(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  DispatchWorkItemFlags DVar4;
  DispatchQoS DVar5;
  OS_dispatch_queue *pOVar6;
  undefined *puVar7;
  void *aBlock;
  DispatchQoS DVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar12;
  DispatchWorkItemFlags qos;
  long lVar13;
  long local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  DVar4 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_a0 = *(long *)(DVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_a0 + 0x40));
  lVar12 = (long)&local_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  DVar5 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar13 = *(long *)(DVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar13 + 0x40));
  qos.unknown = (undefined *)(lVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  FUN_1003d1cc0();
  FUN_10023b414(0);
  lVar3 = _TtCCC11PasteCoreUI8ItemCell10HeaderView10TitleLabel::___lazy_storage___textField;
  uVar1 = *(undefined8 *)
           (unaff_x20 + _TtCCC11PasteCoreUI8ItemCell10HeaderView10TitleLabel::originalText);
  uVar2 = ((undefined8 *)
          (unaff_x20 + _TtCCC11PasteCoreUI8ItemCell10HeaderView10TitleLabel::originalText))[1];
  _swift_bridgeObjectRetain(uVar2);
  FUN_10023b214(uVar1,uVar2);
  FUN_10023bfdc(*(undefined8 *)(unaff_x20 + lVar3));
  pOVar6 = (OS_dispatch_queue *)0x0;
  FUN_1003d2f80();
  (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar6);
  puVar7 = &DAT_100ecfdb8;
  _swift_allocObject(&DAT_100ecfdb8,0x18,7);
  _swift_unknownObjectWeakInit(puVar7 + 0x10);
  local_70 = FUN_1003d2fe8;
  local_90 = PTR___NSConcreteStackBlock_100ea82a0;
  local_88 = 0x42000000;
  local_80 = FUN_100030410;
  puStack_78 = &DAT_100ecfdd0;
  local_68 = puVar7;
  aBlock = __Block_copy(&local_90);
  DVar8.unknown = puVar7;
  _swift_retain();
  Dispatch::DispatchQoS::get_unspecified(DVar8);
  local_98 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar9 = &DAT_100fc3440;
  FUN_100003a00(&DAT_100fc3440,PTR_typeMetadataAccessor_100eae670,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_100eae680);
  puVar10 = &DAT_100fc3448;
  FUN_1000037f0(&DAT_100fc3448,&DAT_100c45c00);
  puVar11 = puVar10;
  FUN_1003d3020();
  Swift::SetAlgebra::_init(lVar12,&local_98,puVar10,puVar11,DVar4.unknown,puVar9);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
  __Block_release(aBlock);
  (**(code **)(local_a0 + 8))(lVar12,DVar4.unknown);
  (**(code **)(lVar13 + 8))(qos.unknown,DVar5.unknown);
  puVar9 = local_68;
  _swift_release(puVar7);
  _swift_release(puVar9);
  return;
}



/* Address: 0x1003d2ab8 | _TtCCC11PasteCoreUI8ItemCell10HeaderView10TitleLabel::cancelOperation: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtCCC11PasteCoreUI8ItemCell10HeaderView10TitleLabel::cancelOperation_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
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
              ("PasteCoreUI/ItemCell.HeaderView.TitleLabel.swift",0x30,1,0x44,UVar4.unknown,puVar3);
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
  FUN_1003d2838();
  FUN_1003d2f38(&local_60);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x1003d2bc0 | FUN_1003d2bc0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

MainActor * FUN_1003d2bc0(long param_1)

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
  puVar3 = &DAT_100fc31a8;
  FUN_100003a00(&DAT_100fc31a8,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteCoreUI/ItemCell.HeaderView.TitleLabel.swift",0x30,1,0x52,UVar4.unknown,puVar3);
  }
  IVar6 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (IVar6 != 0) {
    FUN_1003d1cc0();
    IVar6 = objc_stub::window(IVar6);
    if (IVar6 != 0) {
      param_1 = param_1 + 0x10;
      _swift_unknownObjectWeakLoadStrong();
      if (param_1 == 0) {
        param_1 = 0;
      }
      else {
        FUN_1003d1cc0();
      }
      objc_stub::makeFirstResponder_(IVar6,param_1);
      _swift_release(pMVar2);
      return (MainActor *)0x0;
    }
  }
  _swift_release(pMVar2);
  return pMVar2;
}



/* Address: 0x1003d2d08 | FUN_1003d2d08 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

MainActor * FUN_1003d2d08(long param_1,undefined8 param_2)

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
  puVar3 = &DAT_100fc31a8;
  FUN_100003a00(&DAT_100fc31a8,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteCoreUI/ItemCell.HeaderView.TitleLabel.swift",0x30,1,param_2,UVar4.unknown,
               puVar3);
  }
  IVar6 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (IVar6 != 0) {
    FUN_1003d1cc0();
    IVar6 = objc_stub::window(IVar6);
    if (IVar6 != 0) {
      objc_stub::makeFirstResponder_(IVar6,0);
      _swift_release(pMVar2);
      return (MainActor *)0x0;
    }
  }
  _swift_release(pMVar2);
  return pMVar2;
}



/* Address: 0x1003d2e20 | _TtCCC11PasteCoreUI8ItemCell10HeaderView10TitleLabel::initWithFrame: */

/* Function Stack Size: 0x30 bytes */

ID _TtCCC11PasteCoreUI8ItemCell10HeaderView10TitleLabel::initWithFrame_
             (ID param_1,SEL param_2,CGRect param_3)

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
              ("PasteCoreUI/ItemCell.HeaderView.TitleLabel.swift",0x30,1,0xb,UVar4.unknown,puVar3);
  }
  __swift_stdlib_reportUnimplementedInitializer("PasteCoreUI.TitleLabel",0x16,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1003d2ec8);
  (*pcVar2)();
}



/* Address: 0x1003d2ec8 | _TtCCC11PasteCoreUI8ItemCell10HeaderView10TitleLabel::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtCCC11PasteCoreUI8ItemCell10HeaderView10TitleLabel::_cxx_destruct(ID param_1,SEL param_2)

{
  FUN_100004550(*(undefined8 *)(param_1 + onCommitEditing),
                ((undefined8 *)(param_1 + onCommitEditing))[1]);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + originalText + 8));
  return;
}



/* Address: 0x1003d2f18 | FUN_1003d2f18 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1003d2f18(void)

{
  return ZEXT816(0x100f995d0);
}



/* Address: 0x1003d2f38 | FUN_1003d2f38 */

undefined8 FUN_1003d2f38(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fc3430;
  FUN_1000037f0(&DAT_100fc3430,&DAT_100c45bf8);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x1003d2f80 | FUN_1003d2f80 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_1003d2f80(void)

{
  undefined *puVar1;
  
  if (DAT_100fc3438 != (undefined *)0x0) {
    return;
  }
  puVar1 = &_OBJC_CLASS___OS_dispatch_queue;
  _swift_getObjCClassMetadata();
  DAT_100fc3438 = puVar1;
  return;
}



/* Address: 0x1003d2fc4 | FUN_1003d2fc4 */

void FUN_1003d2fc4(void)

{
  long unaff_x20;
  
  _swift_unknownObjectWeakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x1003d2fe8 | FUN_1003d2fe8 */

void FUN_1003d2fe8(void)

{
  FUN_1003d2d08();
  return;
}



/* Address: 0x1003d3004 | FUN_1003d3004 */

void FUN_1003d3004(long param_1,long param_2)

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



/* Address: 0x1003d3018 | FUN_1003d3018 */

void FUN_1003d3018(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x1003d3020 | FUN_1003d3020 */

void FUN_1003d3020(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fc3450 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fc3448;
  FUN_100005c24(&DAT_100fc3448,&DAT_100c45c00);
  puVar2 = PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530;
  _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530,puVar1);
  DAT_100fc3450 = puVar2;
  return;
}



/* Address: 0x1003d3070 | FUN_1003d3070 */

void FUN_1003d3070(void)

{
  long unaff_x20;
  
  FUN_1003d2174(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1003d3078 | FUN_1003d3078 */

void FUN_1003d3078(void)

{
  FUN_1003d2bc0();
  return;
}



/* Address: 0x1003d3080 | FUN_1003d3080 */

void FUN_1003d3080(void)

{
  FUN_1003d2d08();
  return;
}



/* Address: 0x1003d309c | FUN_1003d309c */

void FUN_1003d309c(void)

{
  FUN_1003d2064();
  return;
}



/* Address: 0x1003d30a4 | thunk_FUN_1003d3004 */

void thunk_FUN_1003d3004(void)

{
  FUN_1003d3004();
  return;
}



/* Address: 0x1003d30a8 | thunk_FUN_1003d3004 */

void thunk_FUN_1003d3004(void)

{
  FUN_1003d3004();
  return;
}



/* Address: 0x1003d30ac | thunk_FUN_1003d3018 */

void thunk_FUN_1003d3018(void)

{
  FUN_1003d3018();
  return;
}



/* Address: 0x1003d30b0 | thunk_FUN_1003d3018 */

void thunk_FUN_1003d3018(void)

{
  FUN_1003d3018();
  return;
}



/* Address: 0x1003d30b4 | FUN_1003d30b4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_1003d30b4(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar1 = _TtCC11PasteCoreUI8ItemCell10HeaderView::___lazy_storage___labelsStackView;
  puVar2 = *(undefined **)
            (unaff_x20 + _TtCC11PasteCoreUI8ItemCell10HeaderView::___lazy_storage___labelsStackView)
  ;
  if (puVar2 == (undefined *)0x0) {
    FUN_10000ec2c(0,&DAT_100fc3500,&PTR__OBJC_CLASS___NSStackView_100f8d698);
    puVar2 = &DAT_100fc3e80;
    FUN_1000037f0(&DAT_100fc3e80,&DAT_100c45d50);
    _swift_allocObject();
    *(undefined8 *)(puVar2 + 0x18) = 5;
    *(undefined8 *)(puVar2 + 0x10) = 2;
    uVar3 = *(undefined8 *)(unaff_x20 + _TtCC11PasteCoreUI8ItemCell10HeaderView::dateLabel);
    *(undefined8 *)(puVar2 + 0x20) =
         *(undefined8 *)(unaff_x20 + _TtCC11PasteCoreUI8ItemCell10HeaderView::titleLabel);
    *(undefined8 *)(puVar2 + 0x28) = uVar3;
    FUN_1000f66dc();
    *(undefined **)(unaff_x20 + lVar1) = puVar2;
  }
  return puVar2;
}



/* Address: 0x1003d3198 | FUN_1003d3198 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1003d3198(void)

{
  long lVar1;
  ID IVar2;
  long unaff_x20;
  
  lVar1 = _TtCC11PasteCoreUI8ItemCell10HeaderView::___lazy_storage___appIconViewHeightConstraint;
  IVar2 = *(ID *)(unaff_x20 +
                 _TtCC11PasteCoreUI8ItemCell10HeaderView::
                 ___lazy_storage___appIconViewHeightConstraint);
  if (IVar2 == 0) {
    IVar2 = objc_stub::heightAnchor
                      (*(ID *)(unaff_x20 + _TtCC11PasteCoreUI8ItemCell10HeaderView::appIconView));
    IVar2 = objc_stub::constraintEqualToConstant_(IVar2,0);
    *(ID *)(unaff_x20 + lVar1) = IVar2;
  }
  return IVar2;
}



/* Address: 0x1003d3238 | FUN_1003d3238 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1003d3238(void)

{
  long lVar1;
  ID IVar2;
  ID IVar3;
  ID unaff_x20;
  
  lVar1 = _TtCC11PasteCoreUI8ItemCell10HeaderView::___lazy_storage___appIconViewTrailingConstraint;
  IVar2 = *(ID *)(unaff_x20 +
                 _TtCC11PasteCoreUI8ItemCell10HeaderView::
                 ___lazy_storage___appIconViewTrailingConstraint);
  if (IVar2 == 0) {
    IVar2 = objc_stub::trailingAnchor
                      (*(ID *)(unaff_x20 + _TtCC11PasteCoreUI8ItemCell10HeaderView::appIconView));
    IVar3 = objc_stub::trailingAnchor(unaff_x20);
    IVar2 = objc_stub::constraintEqualToAnchor_(IVar2,IVar3);
    *(ID *)(unaff_x20 + lVar1) = IVar2;
  }
  return IVar2;
}



/* Address: 0x1003d32f8 | FUN_1003d32f8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1003d32f8(void)

{
  long lVar1;
  ID IVar2;
  ID IVar3;
  long unaff_x20;
  
  lVar1 = _TtCC11PasteCoreUI8ItemCell10HeaderView::___lazy_storage___pinboardViewTrailingConstraint;
  IVar2 = *(ID *)(unaff_x20 +
                 _TtCC11PasteCoreUI8ItemCell10HeaderView::
                 ___lazy_storage___pinboardViewTrailingConstraint);
  if (IVar2 == 0) {
    IVar2 = objc_stub::trailingAnchor
                      (*(ID *)(unaff_x20 + _TtCC11PasteCoreUI8ItemCell10HeaderView::pinboardIconView
                              ));
    IVar3 = objc_stub::trailingAnchor
                      (*(ID *)(unaff_x20 + _TtCC11PasteCoreUI8ItemCell10HeaderView::contentView));
    IVar2 = objc_stub::constraintEqualToAnchor_(IVar2,IVar3);
    *(ID *)(unaff_x20 + lVar1) = IVar2;
  }
  return IVar2;
}



/* Address: 0x1003d33c0 | FUN_1003d33c0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1003d33c0(void)

{
  long lVar1;
  ID IVar2;
  ID IVar3;
  ID unaff_x20;
  
  lVar1 = _TtCC11PasteCoreUI8ItemCell10HeaderView::
          ___lazy_storage___labelsStackViewTrailingConstraint;
  IVar2 = *(ID *)(unaff_x20 +
                 _TtCC11PasteCoreUI8ItemCell10HeaderView::
                 ___lazy_storage___labelsStackViewTrailingConstraint);
  if (IVar2 == 0) {
    FUN_1003d30b4();
    IVar2 = objc_stub::trailingAnchor(IVar2);
    IVar3 = objc_stub::trailingAnchor(unaff_x20);
    IVar2 = objc_stub::constraintLessThanOrEqualToAnchor_(IVar2,IVar3);
    *(ID *)(unaff_x20 + lVar1) = IVar2;
  }
  return IVar2;
}



/* Address: 0x1003d3484 | FUN_1003d3484 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

ID FUN_1003d3484(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  ID IVar3;
  undefined *puVar4;
  ID IVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long unaff_x20;
  undefined1 auStack_120 [64];
  undefined1 auStack_e0 [16];
  ID local_d0;
  
  _swift_getObjectType();
  lVar2 = _TtCC11PasteCoreUI8ItemCell10HeaderView::backgroundView;
  IVar3 = 0;
  FUN_100236364();
  _objc_allocWithZone();
  IVar3 = objc_stub::init(IVar3);
  *(ID *)(unaff_x20 + lVar2) = IVar3;
  lVar2 = _TtCC11PasteCoreUI8ItemCell10HeaderView::contentView;
  puVar4 = &_OBJC_CLASS___NSView;
  _objc_allocWithZone();
  IVar3 = objc_stub::init((ID)puVar4);
  *(ID *)(unaff_x20 + lVar2) = IVar3;
  lVar2 = _TtCC11PasteCoreUI8ItemCell10HeaderView::pinboardIconView;
  puVar4 = &_OBJC_CLASS___NSImageView;
  _objc_allocWithZone();
  IVar3 = objc_stub::init((ID)puVar4);
  *(ID *)(unaff_x20 + lVar2) = IVar3;
  lVar2 = _TtCC11PasteCoreUI8ItemCell10HeaderView::appIconView;
  puVar4 = &_OBJC_CLASS___NSImageView;
  _objc_allocWithZone();
  IVar3 = objc_stub::init((ID)puVar4);
  objc_stub::setImageScaling_(IVar3,3);
  *(ID *)(unaff_x20 + lVar2) = IVar3;
  lVar2 = _TtCC11PasteCoreUI8ItemCell10HeaderView::titleLabel;
  IVar3 = 0;
  FUN_1003d2f18();
  _objc_allocWithZone();
  IVar3 = objc_stub::init(IVar3);
  objc_stub::setContentCompressionResistancePriority_forOrientation_(IVar3,0x437a0000,0);
  *(ID *)(unaff_x20 + lVar2) = IVar3;
  lVar2 = _TtCC11PasteCoreUI8ItemCell10HeaderView::dateLabel;
  IVar3 = 0;
  FUN_1003d1364();
  _swift_getObjCClassFromMetadata();
  _objc_allocWithZone();
  IVar3 = objc_stub::init(IVar3);
  objc_stub::setContentCompressionResistancePriority_forOrientation_(IVar3,0x447a0000,0);
  *(ID *)(unaff_x20 + lVar2) = IVar3;
  *(undefined8 *)
   (unaff_x20 + _TtCC11PasteCoreUI8ItemCell10HeaderView::___lazy_storage___labelsStackView) = 0;
  lVar2 = _TtCC11PasteCoreUI8ItemCell10HeaderView::gradientView;
  IVar5 = objc_stub::blackColor((ID)&_OBJC_CLASS___NSColor);
  FUN_1002067b8(0x3fd999999999999a);
  IVar3 = objc_stub::clearColor((ID)&_OBJC_CLASS___NSColor);
  uVar6 = 0;
  FUN_100209c28(0);
  _objc_allocWithZone();
  FUN_100209214(0,IVar5,IVar3,uVar6);
  *(ID *)(unaff_x20 + lVar2) = IVar5;
  *(undefined8 *)
   (unaff_x20 +
   _TtCC11PasteCoreUI8ItemCell10HeaderView::___lazy_storage___appIconViewHeightConstraint) = 0;
  *(undefined8 *)
   (unaff_x20 +
   _TtCC11PasteCoreUI8ItemCell10HeaderView::___lazy_storage___appIconViewTrailingConstraint) = 0;
  *(undefined8 *)
   (unaff_x20 +
   _TtCC11PasteCoreUI8ItemCell10HeaderView::___lazy_storage___pinboardViewTrailingConstraint) = 0;
  *(undefined8 *)
   (unaff_x20 +
   _TtCC11PasteCoreUI8ItemCell10HeaderView::___lazy_storage___labelsStackViewTrailingConstraint) = 0
  ;
  *(undefined1 *)(unaff_x20 + _TtCC11PasteCoreUI8ItemCell10HeaderView::compactStyle) = 1;
  *(undefined1 *)(unaff_x20 + _TtCC11PasteCoreUI8ItemCell10HeaderView::isAppIconHidden) = 0;
  *(undefined8 *)(unaff_x20 + _TtCC11PasteCoreUI8ItemCell10HeaderView::sourceAppIcon) = 0;
  IVar3 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff68,"initWithFrame:",param_1,
                              param_2,param_3,param_4);
  objc_stub::setClipsToBounds_(IVar3,0);
  lVar2 = _TtCC11PasteCoreUI8ItemCell10HeaderView::contentView;
  objc_stub::setClipsToBounds_
            (*(ID *)(IVar3 + _TtCC11PasteCoreUI8ItemCell10HeaderView::contentView),1);
  puVar4 = &DAT_100fc3e80;
  FUN_1000037f0(&DAT_100fc3e80,&DAT_100c45d50);
  puVar7 = puVar4;
  _swift_initStackObject();
  *(undefined8 *)(puVar7 + 0x18) = 5;
  *(undefined8 *)(puVar7 + 0x10) = 2;
  *(undefined8 *)(puVar7 + 0x20) =
       *(undefined8 *)(IVar3 + _TtCC11PasteCoreUI8ItemCell10HeaderView::gradientView);
  *(undefined8 *)(puVar7 + 0x28) = *(undefined8 *)(IVar3 + lVar2);
  local_d0 = IVar3;
  FUN_1001fa150(puVar7,FUN_1003d51e8,auStack_e0);
  _swift_bridgeObjectRelease();
  _swift_setDeallocating(puVar7);
  puVar1 = PTR___type_metadata_for_Swift_AnyObject_100eae0b8;
  _swift_arrayDestroy(puVar7 + 0x20,*(undefined8 *)(puVar7 + 0x10),
                      PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8);
  _swift_initStackObject(puVar4,auStack_120);
  *(undefined8 *)(puVar4 + 0x18) = 9;
  *(undefined8 *)(puVar4 + 0x10) = 4;
  *(undefined8 *)(puVar4 + 0x20) =
       *(undefined8 *)(IVar3 + _TtCC11PasteCoreUI8ItemCell10HeaderView::pinboardIconView);
  *(undefined8 *)(puVar4 + 0x28) =
       *(undefined8 *)(IVar3 + _TtCC11PasteCoreUI8ItemCell10HeaderView::backgroundView);
  uVar6 = *(undefined8 *)(IVar3 + _TtCC11PasteCoreUI8ItemCell10HeaderView::appIconView);
  *(undefined8 *)(puVar4 + 0x30) = uVar6;
  FUN_1003d30b4();
  *(undefined8 *)(puVar4 + 0x38) = uVar6;
  local_d0 = IVar3;
  FUN_1001fa150(puVar4,FUN_1003d51f0,auStack_e0);
  _swift_bridgeObjectRelease();
  _swift_setDeallocating(puVar4);
  _swift_arrayDestroy(puVar4 + 0x20,*(undefined8 *)(puVar4 + 0x10),puVar1 + 8);
  return IVar3;
}



/* Address: 0x1003d385c | FUN_1003d385c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_1003d385c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 **ppuVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  ID IVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  ID self;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 *local_98 [3];
  undefined8 *local_80;
  undefined **ppuStack_78;
  
  puVar1 = param_1;
  _swift_getObjectType();
  ppuStack_78 = &PTR_PTR_100ec00e8;
  puVar2 = param_1;
  local_98[0] = param_1;
  local_80 = puVar1;
  FUN_1001f9774();
  uVar12 = *puVar2;
  uVar13 = puVar2[1];
  uVar14 = puVar2[2];
  uVar15 = puVar2[3];
  uVar3 = 0;
  FUN_10000ec2c(0,&DAT_100fc3e40,&PTR__OBJC_CLASS___NSView_100f8d628);
  ppuVar4 = local_98;
  FUN_1001f97b4(uVar12,uVar13,uVar14,uVar15,ppuVar4,uVar3,&PTR_PTR_100ec00e8);
  FUN_100004594(local_98);
  self = *(ID *)((long)param_1 + _TtCC11PasteCoreUI8ItemCell10HeaderView::gradientView);
  IVar5 = objc_stub::topAnchor(self);
  IVar6 = objc_stub::topAnchor((ID)param_1);
  IVar5 = objc_stub::constraintEqualToAnchor_(IVar5,IVar6);
  IVar6 = objc_stub::leadingAnchor(self);
  IVar7 = objc_stub::leadingAnchor((ID)param_1);
  IVar6 = objc_stub::constraintEqualToAnchor_(IVar6,IVar7);
  IVar7 = objc_stub::trailingAnchor(self);
  IVar8 = objc_stub::trailingAnchor((ID)param_1);
  IVar7 = objc_stub::constraintEqualToAnchor_(IVar7,IVar8);
  IVar8 = objc_stub::heightAnchor(self);
  IVar8 = objc_stub::constraintEqualToConstant_(IVar8,0x4050000000000000);
  puVar9 = &DAT_100fc3b00;
  FUN_1000037f0(&DAT_100fc3b00,&DAT_100c45590);
  _swift_initStackObject();
  *(undefined8 *)(puVar9 + 0x18) = 10;
  *(undefined8 *)(puVar9 + 0x10) = 5;
  puVar10 = &DAT_100fc3e70;
  FUN_1000037f0(&DAT_100fc3e70,&DAT_100c45d60);
  *(undefined **)(puVar9 + 0x38) = puVar10;
  *(undefined ***)(puVar9 + 0x40) = &PTR_PTR_100ec00b8;
  *(undefined8 ***)(puVar9 + 0x20) = ppuVar4;
  uVar3 = 0;
  FUN_10000ec2c(0,&DAT_100fc32d0,&PTR__OBJC_CLASS___NSLayoutConstraint_100f8d660);
  *(undefined8 *)(puVar9 + 0x60) = uVar3;
  *(undefined ***)(puVar9 + 0x68) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar9 + 0x48) = IVar5;
  *(undefined8 *)(puVar9 + 0x88) = uVar3;
  *(undefined ***)(puVar9 + 0x90) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar9 + 0x70) = IVar6;
  *(undefined8 *)(puVar9 + 0xb0) = uVar3;
  *(undefined ***)(puVar9 + 0xb8) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar9 + 0x98) = IVar7;
  *(undefined8 *)(puVar9 + 0xd8) = uVar3;
  *(undefined ***)(puVar9 + 0xe0) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar9 + 0xc0) = IVar8;
  _swift_bridgeObjectRetain(ppuVar4);
  puVar11 = puVar9;
  FUN_1001f8d60(puVar9);
  _swift_bridgeObjectRelease(ppuVar4);
  _swift_setDeallocating(puVar9);
  uVar3 = *(undefined8 *)(puVar9 + 0x10);
  puVar10 = &DAT_100fc3b10;
  FUN_1000037f0(&DAT_100fc3b10,&DAT_100c455a0);
  _swift_arrayDestroy(puVar9 + 0x20,uVar3,puVar10);
  return puVar11;
}



/* Address: 0x1003d3b74 | FUN_1003d3b74 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_1003d3b74(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 **ppuVar3;
  undefined8 **self;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  ID IVar8;
  ID IVar9;
  ID IVar10;
  ID IVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 *self_00;
  ID IVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 *local_b0 [3];
  undefined8 local_98;
  undefined **ppuStack_90;
  
  self_00 = *(undefined8 **)(param_1 + _TtCC11PasteCoreUI8ItemCell10HeaderView::contentView);
  uVar1 = 0;
  FUN_10000ec2c(0,&DAT_100fc3e40,&PTR__OBJC_CLASS___NSView_100f8d628);
  ppuStack_90 = &PTR_PTR_100ec00e8;
  puVar2 = self_00;
  local_b0[0] = self_00;
  local_98 = uVar1;
  FUN_1001f9774();
  uVar16 = *puVar2;
  uVar17 = puVar2[1];
  uVar18 = puVar2[2];
  uVar19 = puVar2[3];
  uVar1 = 0;
  FUN_100236364(0);
  ppuVar3 = local_b0;
  FUN_1001f97b4(uVar16,uVar17,uVar18,uVar19,ppuVar3,uVar1,&PTR_PTR_100ec00e8);
  self = local_b0;
  FUN_100004594();
  FUN_1003d30b4();
  IVar4 = objc_stub::leadingAnchor((ID)self);
  IVar5 = objc_stub::leadingAnchor((ID)self_00);
  IVar6 = objc_stub::constraintEqualToAnchor_constant_(IVar4,0x4028000000000000,IVar5);
  IVar4 = objc_stub::centerYAnchor
                    (*(ID *)(param_1 +
                            _TtCC11PasteCoreUI8ItemCell10HeaderView::
                            ___lazy_storage___labelsStackView));
  IVar15 = *(ID *)(param_1 + _TtCC11PasteCoreUI8ItemCell10HeaderView::appIconView);
  IVar5 = objc_stub::centerYAnchor(IVar15);
  IVar7 = objc_stub::constraintEqualToAnchor_(IVar4,IVar5);
  IVar4 = IVar7;
  FUN_1003d33c0();
  IVar5 = objc_stub::centerYAnchor(IVar15);
  IVar8 = objc_stub::centerYAnchor((ID)self_00);
  IVar9 = objc_stub::constraintEqualToAnchor_(IVar5,IVar8);
  IVar5 = objc_stub::widthAnchor(IVar15);
  IVar8 = objc_stub::heightAnchor(IVar15);
  IVar10 = objc_stub::constraintEqualToAnchor_(IVar5,IVar8);
  IVar5 = IVar10;
  FUN_1003d3238();
  IVar8 = IVar5;
  FUN_1003d3198();
  IVar15 = objc_stub::centerYAnchor
                     (*(ID *)(param_1 + _TtCC11PasteCoreUI8ItemCell10HeaderView::pinboardIconView));
  IVar11 = objc_stub::centerYAnchor((ID)self_00);
  IVar11 = objc_stub::constraintEqualToAnchor_(IVar15,IVar11);
  IVar15 = IVar11;
  FUN_1003d32f8();
  puVar12 = &DAT_100fc3b00;
  FUN_1000037f0(&DAT_100fc3b00,&DAT_100c45590);
  _swift_initStackObject();
  *(undefined8 *)(puVar12 + 0x18) = 0x14;
  *(undefined8 *)(puVar12 + 0x10) = 10;
  puVar13 = &DAT_100fc3e70;
  FUN_1000037f0(&DAT_100fc3e70,&DAT_100c45d60);
  *(undefined **)(puVar12 + 0x38) = puVar13;
  *(undefined ***)(puVar12 + 0x40) = &PTR_PTR_100ec00b8;
  *(undefined8 ***)(puVar12 + 0x20) = ppuVar3;
  uVar1 = 0;
  FUN_10000ec2c(0,&DAT_100fc32d0,&PTR__OBJC_CLASS___NSLayoutConstraint_100f8d660);
  *(undefined8 *)(puVar12 + 0x60) = uVar1;
  *(undefined ***)(puVar12 + 0x68) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar12 + 0x48) = IVar6;
  *(undefined8 *)(puVar12 + 0x88) = uVar1;
  *(undefined ***)(puVar12 + 0x90) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar12 + 0x70) = IVar7;
  *(undefined8 *)(puVar12 + 0xb0) = uVar1;
  *(undefined ***)(puVar12 + 0xb8) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar12 + 0x98) = IVar4;
  *(undefined8 *)(puVar12 + 0xd8) = uVar1;
  *(undefined ***)(puVar12 + 0xe0) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar12 + 0xc0) = IVar9;
  *(undefined8 *)(puVar12 + 0x100) = uVar1;
  *(undefined ***)(puVar12 + 0x108) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar12 + 0xe8) = IVar10;
  *(undefined8 *)(puVar12 + 0x128) = uVar1;
  *(undefined ***)(puVar12 + 0x130) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar12 + 0x110) = IVar5;
  *(undefined8 *)(puVar12 + 0x150) = uVar1;
  *(undefined ***)(puVar12 + 0x158) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar12 + 0x138) = IVar8;
  *(undefined8 *)(puVar12 + 0x178) = uVar1;
  *(undefined ***)(puVar12 + 0x180) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar12 + 0x160) = IVar11;
  *(undefined8 *)(puVar12 + 0x1a0) = uVar1;
  *(undefined ***)(puVar12 + 0x1a8) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar12 + 0x188) = IVar15;
  _swift_bridgeObjectRetain(ppuVar3);
  puVar14 = puVar12;
  FUN_1001f8d60();
  _swift_bridgeObjectRelease(ppuVar3);
  _swift_setDeallocating(puVar12);
  uVar1 = *(undefined8 *)(puVar12 + 0x10);
  puVar13 = &DAT_100fc3b10;
  FUN_1000037f0(&DAT_100fc3b10,&DAT_100c455a0);
  _swift_arrayDestroy(puVar12 + 0x20,uVar1,puVar13);
  return puVar14;
}



/* Address: 0x1003d4000 | _TtCC11PasteCoreUI8ItemCell10HeaderView::initWithFrame: */

/* Function Stack Size: 0x30 bytes */

ID __thiscall
_TtCC11PasteCoreUI8ItemCell10HeaderView::initWithFrame_
          (_TtCC11PasteCoreUI8ItemCell10HeaderView *this,ID param_1,SEL param_2,CGRect param_3)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  char *pcVar5;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fc31a8;
  FUN_100003a00(&DAT_100fc31a8,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  pcVar5 = (char *)UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar5 & 1) == 0) {
    pcVar5 = "PasteCoreUI/ItemCell.HeaderView.swift";
    _swift_task_reportUnexpectedExecutor
              ("PasteCoreUI/ItemCell.HeaderView.swift",0x25,1,0x34,UVar4.unknown,puVar3);
  }
  FUN_1003d3484();
  _swift_release(pMVar2);
  return (ID)pcVar5;
}



/* Address: 0x1003d40ec | _TtCC11PasteCoreUI8ItemCell10HeaderView::initWithCoder: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtCC11PasteCoreUI8ItemCell10HeaderView::initWithCoder_(ID param_1,SEL param_2,ID param_3)

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
              ("PasteCoreUI/ItemCell.HeaderView.swift",0x25,1,0x55,UVar4.unknown,puVar3);
  }
  FUN_1003d4fbc();
  _swift_release(pMVar2);
  return param_3;
}



/* Address: 0x1003d41b4 | FUN_1003d41b4 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_1003d41b4(ID param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  undefined *puVar6;
  Date DVar7;
  ID IVar8;
  NSString *pNVar9;
  undefined8 uVar10;
  Date DVar11;
  undefined *puVar12;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar13;
  long extraout_x8;
  long lVar14;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  long *plVar15;
  code *pcVar16;
  ID self;
  ulong *puVar17;
  long lVar18;
  ID self_00;
  ulong local_130;
  long local_128;
  undefined *local_120;
  long local_118;
  long local_110;
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [128];
  
  puVar6 = &DAT_100fc3508;
  local_130 = param_3;
  FUN_1000037f0(&DAT_100fc3508,&DAT_100c45c90);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar6 + -8) + 0x40));
  puVar6 = (undefined *)((long)&local_130 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  local_120 = puVar6;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar14 = (long)puVar6 - extraout_x12;
  local_128 = lVar14;
  DVar7 = Foundation::Date::typeMetadataAccessor();
  lVar18 = *(long *)(DVar7.unknown + -8);
  DVar11 = DVar7;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar18 + 0x40));
  bVar3 = (byte)DVar11.unknown;
  lVar14 = lVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_118 = lVar14;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_110 = lVar14 - extraout_x12_00;
  FUN_100308f38();
  lVar14 = _TtCC11PasteCoreUI8ItemCell10HeaderView::isAppIconHidden;
  *(byte *)(unaff_x20 + _TtCC11PasteCoreUI8ItemCell10HeaderView::isAppIconHidden) = bVar3 & 1;
  IVar8 = objc_stub::sourceApplication(param_1);
  if (IVar8 == 0) {
    pNVar9 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    IVar8 = objc_stub::imageNamed_((ID)&_OBJC_CLASS___NSImage,pNVar9);
  }
  else {
    FUN_100310dd0();
  }
  lVar1 = _TtCC11PasteCoreUI8ItemCell10HeaderView::sourceAppIcon;
  *(ID *)(unaff_x20 + _TtCC11PasteCoreUI8ItemCell10HeaderView::sourceAppIcon) = IVar8;
  self_00 = *(ID *)(unaff_x20 + _TtCC11PasteCoreUI8ItemCell10HeaderView::pinboardIconView);
  FUN_100208674(*(undefined1 *)(unaff_x20 + lVar14));
  self = *(ID *)(unaff_x20 + _TtCC11PasteCoreUI8ItemCell10HeaderView::appIconView);
  IVar8 = objc_stub::setHidden_(self,(ulong)*(byte *)(unaff_x20 + lVar14));
  if (*(char *)(unaff_x20 + lVar14) == '\x01') {
    FUN_1003d46fc();
    objc_stub::setImage_(self_00,IVar8);
    uVar13 = extraout_x1;
  }
  else {
    lVar14 = *(long *)(unaff_x20 + lVar1);
    if (lVar14 == 0) {
      lVar14 = 0;
    }
    else {
      FUN_1003ca024(*(undefined8 *)(&DAT_100c45cc8 + (param_2 & 0xff) * 8),
                    *(undefined8 *)(&DAT_100c45cc8 + (param_2 & 0xff) * 8),lVar14);
    }
    objc_stub::setImage_(self,lVar14);
    uVar13 = extraout_x1_00;
  }
  lVar14 = local_110;
  plVar15 = (long *)0x0;
  puVar17 = *(ulong **)(unaff_x20 + _TtCC11PasteCoreUI8ItemCell10HeaderView::backgroundView);
  FUN_1003de794();
  if (plVar15 == (long *)0x0) {
    FUN_1001fe4c8();
    plVar15 = (long *)*plVar15;
  }
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *puVar17) + 0x60))();
  FUN_100309008();
  FUN_1003d1cc0();
  FUN_10023b600(plVar15,uVar13);
  uVar10 = 0;
  FUN_100308f88(0);
  FUN_1003d1cc0();
  FUN_10023b214(uVar10,uVar13);
  puVar6 = local_120;
  uVar5 = 0;
  IVar8 = *(ID *)(unaff_x20 + _TtCC11PasteCoreUI8ItemCell10HeaderView::dateLabel);
  if ((long)local_130 < -0x4000000000000000) {
    uVar5 = 1;
  }
  else if (local_130 >> 0x3e == 0) {
    FUN_100308f38(0);
  }
  else {
    uVar5 = 0;
  }
  objc_stub::setHidden_(IVar8,(ulong)(uVar5 & 1));
  DVar11.unknown = (undefined *)objc_stub::timestamp(param_1);
  lVar1 = local_128;
  if (DVar11.unknown != (undefined *)0x0) {
    Foundation::Date::__unconditionallyBridgeFromObjectiveC(DVar11);
  }
  (**(code **)(lVar18 + 0x38))(lVar1,DVar11.unknown == (undefined *)0x0,1,DVar7.unknown);
  FUN_1003d522c(lVar1,puVar6);
  pcVar16 = *(code **)(lVar18 + 0x30);
  DVar11.unknown = puVar6;
  (*pcVar16)(puVar6,1,DVar7.unknown);
  if ((int)DVar11.unknown == 1) {
    Foundation::Date::get_now(DVar11);
    puVar12 = puVar6;
    (*pcVar16)(puVar6,1,DVar7.unknown);
    if ((int)puVar12 != 1) {
      FUN_1003d527c(puVar6);
    }
  }
  else {
    (**(code **)(lVar18 + 0x20))(lVar14,puVar6,DVar7.unknown);
  }
  lVar1 = _TtCCC11PasteCoreUI8ItemCell10HeaderView9DateLabel::date;
  _swift_beginAccess(IVar8 + _TtCCC11PasteCoreUI8ItemCell10HeaderView9DateLabel::date,auStack_108,0,
                     0);
  lVar2 = local_118;
  (**(code **)(lVar18 + 0x10))(local_118,IVar8 + lVar1,DVar7.unknown);
  puVar6 = &DAT_100fc3510;
  FUN_100003a00(&DAT_100fc3510,PTR_typeMetadataAccessor_100ea7480,
                PTR_Foundation__Foundation__Date_>Swift__Equatable_100ea74a0);
  bVar4 = Swift::Equatable::___infix(lVar2,lVar14,DVar7.unknown,puVar6);
  (**(code **)(lVar18 + 8))(lVar2,DVar7.unknown);
  if (!bVar4) {
    FUN_1003d0bb0(lVar14,*(undefined1 *)
                          (IVar8 + _TtCCC11PasteCoreUI8ItemCell10HeaderView9DateLabel::isCompact));
  }
  _swift_beginAccess(IVar8 + lVar1,auStack_f0,0x21,0);
  (**(code **)(lVar18 + 0x28))(IVar8 + lVar1,lVar14,DVar7.unknown);
  _swift_endAccess(auStack_f0);
  FUN_1003d47ac(auStack_f0,param_2);
  FUN_1003d4a98(auStack_f0,0);
  FUN_1003d51f8(auStack_f0);
  return;
}



/* Address: 0x1003d46fc | FUN_1003d46fc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003d46fc(long param_1,uint param_2)

{
  long lVar1;
  
  FUN_10031bc94();
  if ((param_1 != 0) && (FUN_1003293c4(), (param_2 & 0xff) == 1)) {
    thunk_FUN_100324cb0();
    FUN_1003de9a0();
    lVar1 = 0;
    FUN_10031bc94();
    if (lVar1 != 0) {
      FUN_100328e60();
      FUN_1003ed158(0x4028000000000000,(uint)lVar1 & 1,param_1);
    }
  }
  return;
}



/* Address: 0x1003d47ac | FUN_1003d47ac */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

ID * FUN_1003d47ac(undefined8 *param_1,byte param_2)

{
  long lVar1;
  undefined8 uVar2;
  ID *pIVar3;
  ID *pIVar4;
  ID *pIVar5;
  ID *pIVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined8 uVar12;
  double dVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  uVar2 = 0;
  FUN_10000ec2c(0,&DAT_100fc3e90,&PTR__OBJC_CLASS___NSFont_100f8d678);
  if (param_2 == 3) {
    FUN_1001ff910();
    FUN_1001ffa18();
    pIVar3 = (ID *)0x0;
    FUN_1001ff928();
    lVar1 = _TtCC11PasteCoreUI8ItemCell10HeaderView::compactStyle;
    uVar16 = 0;
    if (*(char *)(unaff_x20 + _TtCC11PasteCoreUI8ItemCell10HeaderView::compactStyle) != '\0') {
      uVar16 = 0x3ff0000000000000;
    }
    if (*(char *)(unaff_x20 + _TtCC11PasteCoreUI8ItemCell10HeaderView::compactStyle) == '\x01') {
      pIVar4 = (ID *)objc_stub::whiteColor((ID)&_OBJC_CLASS___NSColor);
      FUN_1002067b8(0x3feb333333333333);
      pIVar6 = (ID *)0x0;
    }
    else {
      pIVar6 = pIVar3;
      FUN_1001fe15c();
      pIVar6 = (ID *)*pIVar6;
      pIVar4 = pIVar6;
    }
    if (*(char *)(unaff_x20 + lVar1) == '\x01') {
      pIVar5 = (ID *)objc_stub::whiteColor((ID)&_OBJC_CLASS___NSColor);
      FUN_1002067b8(0x3fe199999999999a);
      pIVar6 = (ID *)0x0;
    }
    else {
      FUN_1001fe19c();
      pIVar6 = (ID *)*pIVar6;
      pIVar5 = pIVar6;
    }
    if ((*(char *)(unaff_x20 + _TtCC11PasteCoreUI8ItemCell10HeaderView::isAppIconHidden) == '\x01')
       && (*(long *)(unaff_x20 + _TtCC11PasteCoreUI8ItemCell10HeaderView::sourceAppIcon) == 0)) {
      uVar9 = 10;
      uVar8 = 0;
      uVar10 = 0x4034000000000000;
      uVar12 = 0xc020000000000000;
      dVar13 = -12.0;
      uVar17 = 0;
      uVar7 = 0x3feccccccccccccd;
      uVar15 = 0;
      uVar14 = 0xc028000000000000;
    }
    else {
      uVar9 = 10;
      uVar8 = 0;
      uVar10 = 0x4034000000000000;
      uVar12 = 0xc020000000000000;
      uVar14 = 0xc028000000000000;
      dVar13 = -30.0;
      uVar17 = 0;
      uVar7 = 0x3feccccccccccccd;
      uVar15 = 0;
    }
  }
  else {
    FUN_1001ff904();
    FUN_1001ffa24();
    pIVar3 = (ID *)0x0;
    FUN_1001ff934();
    uVar17 = 0x3ff0000000000000;
    uVar16 = 0;
    uVar7 = 0;
    if (*(char *)(unaff_x20 + _TtCC11PasteCoreUI8ItemCell10HeaderView::isAppIconHidden) == '\0') {
      uVar7 = 0x3ff0000000000000;
    }
    pIVar4 = pIVar3;
    FUN_1001fe25c();
    pIVar4 = (ID *)*pIVar4;
    pIVar5 = pIVar4;
    FUN_1002067b8(0x3fe999999999999a);
    pIVar6 = (ID *)0x0;
    auVar11 = NEON_fmov(0x402c000000000000,8);
    uVar12 = auVar11._8_8_;
    uVar10 = *(undefined8 *)(&DAT_100c45c98 + (ulong)param_2 * 8);
    uVar9 = 5;
    uVar8 = 1;
    uVar14 = 0x4020000000000000;
    dVar13 = -12.0;
    uVar15 = 0xbff0000000000000;
    if ((*(byte *)(unaff_x20 + _TtCC11PasteCoreUI8ItemCell10HeaderView::isAppIconHidden) & 1) == 0)
    {
      dVar13 = -*(double *)(&DAT_100c45cb0 + (ulong)param_2 * 8);
    }
  }
  *param_1 = uVar17;
  param_1[1] = uVar16;
  param_1[2] = uVar7;
  param_1[4] = uVar12;
  param_1[3] = uVar10;
  param_1[5] = uVar14;
  param_1[6] = uVar2;
  param_1[7] = pIVar4;
  *(bool *)(param_1 + 8) = param_2 == 3;
  param_1[9] = pIVar3;
  param_1[10] = pIVar5;
  param_1[0xb] = dVar13;
  param_1[0xd] = uVar9;
  param_1[0xc] = uVar8;
  param_1[0xe] = uVar15;
  return pIVar6;
}



/* Address: 0x1003d4a98 | FUN_1003d4a98 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_1003d4a98(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  Date DVar4;
  ID IVar5;
  long extraout_x8;
  long unaff_x20;
  long lVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  
  DVar4 = Foundation::Date::typeMetadataAccessor();
  lVar9 = *(long *)(DVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar9 + 0x40));
  puVar8 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_1003d30b4();
  FUN_1003d1788(param_1[0xe],param_1[0xc],param_1[0xd],param_2);
  IVar5 = 0;
  FUN_1003d33c0();
  objc_stub::setConstant_(IVar5,param_1[0xb]);
  IVar5 = 0;
  FUN_1003d3238();
  objc_stub::setConstant_(IVar5,param_1[4]);
  IVar5 = 0;
  FUN_1003d3198();
  objc_stub::setConstant_(IVar5,param_1[3]);
  IVar5 = 0;
  FUN_1003d32f8();
  objc_stub::setConstant_(IVar5,param_1[5]);
  FUN_1000f7548(*param_1,0);
  FUN_1000f7548(param_1[1]);
  FUN_1000f7548(param_1[2]);
  lVar3 = _TtCCC11PasteCoreUI8ItemCell10HeaderView9DateLabel::date;
  lVar2 = _TtCCC11PasteCoreUI8ItemCell10HeaderView9DateLabel::isCompact;
  lVar6 = *(long *)(unaff_x20 + _TtCC11PasteCoreUI8ItemCell10HeaderView::dateLabel);
  cVar1 = *(char *)(param_1 + 8);
  if (cVar1 != *(char *)(lVar6 + _TtCCC11PasteCoreUI8ItemCell10HeaderView9DateLabel::isCompact)) {
    _swift_beginAccess(lVar6 + _TtCCC11PasteCoreUI8ItemCell10HeaderView9DateLabel::date,auStack_78,0
                       ,0);
    (**(code **)(lVar9 + 0x10))(puVar8,lVar6 + lVar3,DVar4.unknown);
    FUN_1003d0bb0(puVar8,cVar1);
    (**(code **)(lVar9 + 8))(puVar8,DVar4.unknown);
  }
  *(char *)(lVar6 + lVar2) = cVar1;
  lVar2 = _TtCCC11PasteCoreUI8ItemCell10HeaderView9DateLabel::textField;
  objc_stub::setTextColor_
            (*(ID *)(lVar6 + _TtCCC11PasteCoreUI8ItemCell10HeaderView9DateLabel::textField),
             param_1[10]);
  objc_stub::setFont_(*(ID *)(lVar6 + lVar2),param_1[9]);
  uVar7 = param_1[7];
  FUN_1003d1cc0(uVar7);
  FUN_10023af6c(uVar7);
  uVar7 = param_1[6];
  FUN_1003d1cc0(uVar7);
  FUN_10023ae6c(uVar7);
  return 0;
}



/* Address: 0x1003d4ce0 | FUN_1003d4ce0 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1003d4ce0(double param_1,double param_2,undefined8 param_3,ulong param_4)

{
  bool bVar1;
  ID self;
  long lVar2;
  long unaff_x20;
  ID self_00;
  double extraout_d0;
  double dVar3;
  undefined1 auStack_1c8 [120];
  undefined1 auStack_150 [120];
  undefined1 auStack_d8 [120];
  
  FUN_1003d47ac(auStack_1c8);
  FUN_1003d47ac(auStack_150,param_4);
  FUN_1003d1638(auStack_d8,param_1,auStack_150);
  FUN_1003d4a98(auStack_d8,1);
  FUN_1003d51f8(auStack_d8);
  if (((*(byte *)(unaff_x20 + _TtCC11PasteCoreUI8ItemCell10HeaderView::isAppIconHidden) & 1) != 0)
     || (param_1 <= 0.5)) {
LAB_1003d4df8:
    FUN_1003d51f8(auStack_150);
    FUN_1003d51f8(auStack_1c8);
  }
  else {
    dVar3 = *(double *)(&DAT_100c45cc8 + (param_4 & 0xff) * 8);
    self_00 = *(ID *)(unaff_x20 + _TtCC11PasteCoreUI8ItemCell10HeaderView::appIconView);
    self = objc_stub::image(self_00);
    if (self != 0) {
      objc_stub::size(self);
      bVar1 = false;
      if ((dVar3 == extraout_d0) && (bVar1 = false, !NAN(dVar3) && !NAN(param_2))) {
        bVar1 = dVar3 == param_2;
      }
      if (bVar1) goto LAB_1003d4df8;
    }
    lVar2 = *(long *)(unaff_x20 + _TtCC11PasteCoreUI8ItemCell10HeaderView::sourceAppIcon);
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1003ca024(*(undefined8 *)(&DAT_100c45cc8 + (param_4 & 0xff) * 8),
                    *(undefined8 *)(&DAT_100c45cc8 + (param_4 & 0xff) * 8),lVar2);
    }
    objc_stub::setImage_(self_00,lVar2);
    FUN_1003d51f8(auStack_150);
    FUN_1003d51f8(auStack_1c8);
  }
  return;
}



/* Address: 0x1003d4e54 | _TtCC11PasteCoreUI8ItemCell10HeaderView::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtCC11PasteCoreUI8ItemCell10HeaderView::_cxx_destruct(ID param_1,SEL param_2)

{
  return;
}



/* Address: 0x1003d4f3c | thunk_FUN_1003d4f40 */

void thunk_FUN_1003d4f40(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc3458 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c45c08;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c45c08,&DAT_100ecfed0);
  DAT_100fc3458 = pTVar1;
  return;
}



/* Address: 0x1003d4f40 | FUN_1003d4f40 */

void FUN_1003d4f40(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc3458 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c45c08;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c45c08,&DAT_100ecfed0);
  DAT_100fc3458 = pTVar1;
  return;
}



/* Address: 0x1003d4f80 | FUN_1003d4f80 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1003d4f80(void)

{
  return ZEXT816(0x100f996a0);
}



/* Address: 0x1003d4fa0 | FUN_1003d4fa0 */

void FUN_1003d4fa0(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Address: 0x1003d4fac | FUN_1003d4fac */

undefined1  [16] FUN_1003d4fac(void)

{
  return ZEXT816(0x100ecfed0);
}



/* Address: 0x1003d4fbc | FUN_1003d4fbc */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003d4fbc(void)

{
  long lVar1;
  code *pcVar2;
  ID IVar3;
  undefined *puVar4;
  ID IVar5;
  undefined8 uVar6;
  long unaff_x20;
  String SVar7;
  
  lVar1 = _TtCC11PasteCoreUI8ItemCell10HeaderView::backgroundView;
  IVar3 = 0;
  FUN_100236364();
  _objc_allocWithZone();
  IVar3 = objc_stub::init(IVar3);
  *(ID *)(unaff_x20 + lVar1) = IVar3;
  lVar1 = _TtCC11PasteCoreUI8ItemCell10HeaderView::contentView;
  puVar4 = &_OBJC_CLASS___NSView;
  _objc_allocWithZone();
  IVar3 = objc_stub::init((ID)puVar4);
  *(ID *)(unaff_x20 + lVar1) = IVar3;
  lVar1 = _TtCC11PasteCoreUI8ItemCell10HeaderView::pinboardIconView;
  puVar4 = &_OBJC_CLASS___NSImageView;
  _objc_allocWithZone();
  IVar3 = objc_stub::init((ID)puVar4);
  *(ID *)(unaff_x20 + lVar1) = IVar3;
  lVar1 = _TtCC11PasteCoreUI8ItemCell10HeaderView::appIconView;
  puVar4 = &_OBJC_CLASS___NSImageView;
  _objc_allocWithZone();
  IVar3 = objc_stub::init((ID)puVar4);
  objc_stub::setImageScaling_(IVar3,3);
  *(ID *)(unaff_x20 + lVar1) = IVar3;
  lVar1 = _TtCC11PasteCoreUI8ItemCell10HeaderView::titleLabel;
  IVar3 = 0;
  FUN_1003d2f18();
  _objc_allocWithZone();
  IVar3 = objc_stub::init(IVar3);
  objc_stub::setContentCompressionResistancePriority_forOrientation_(IVar3,0x437a0000,0);
  *(ID *)(unaff_x20 + lVar1) = IVar3;
  lVar1 = _TtCC11PasteCoreUI8ItemCell10HeaderView::dateLabel;
  IVar3 = 0;
  FUN_1003d1364();
  _swift_getObjCClassFromMetadata();
  _objc_allocWithZone();
  IVar3 = objc_stub::init(IVar3);
  objc_stub::setContentCompressionResistancePriority_forOrientation_(IVar3,0x447a0000,0);
  *(ID *)(unaff_x20 + lVar1) = IVar3;
  *(undefined8 *)
   (unaff_x20 + _TtCC11PasteCoreUI8ItemCell10HeaderView::___lazy_storage___labelsStackView) = 0;
  lVar1 = _TtCC11PasteCoreUI8ItemCell10HeaderView::gradientView;
  IVar5 = objc_stub::blackColor((ID)&_OBJC_CLASS___NSColor);
  FUN_1002067b8(0x3fd999999999999a);
  IVar3 = objc_stub::clearColor((ID)&_OBJC_CLASS___NSColor);
  uVar6 = 0;
  FUN_100209c28(0);
  _objc_allocWithZone();
  FUN_100209214(0,IVar5,IVar3,uVar6);
  *(ID *)(unaff_x20 + lVar1) = IVar5;
  *(undefined8 *)
   (unaff_x20 +
   _TtCC11PasteCoreUI8ItemCell10HeaderView::___lazy_storage___appIconViewHeightConstraint) = 0;
  *(undefined8 *)
   (unaff_x20 +
   _TtCC11PasteCoreUI8ItemCell10HeaderView::___lazy_storage___appIconViewTrailingConstraint) = 0;
  *(undefined8 *)
   (unaff_x20 +
   _TtCC11PasteCoreUI8ItemCell10HeaderView::___lazy_storage___pinboardViewTrailingConstraint) = 0;
  *(undefined8 *)
   (unaff_x20 +
   _TtCC11PasteCoreUI8ItemCell10HeaderView::___lazy_storage___labelsStackViewTrailingConstraint) = 0
  ;
  *(undefined1 *)(unaff_x20 + _TtCC11PasteCoreUI8ItemCell10HeaderView::compactStyle) = 1;
  *(undefined1 *)(unaff_x20 + _TtCC11PasteCoreUI8ItemCell10HeaderView::isAppIconHidden) = 0;
  *(undefined8 *)(unaff_x20 + _TtCC11PasteCoreUI8ItemCell10HeaderView::sourceAppIcon) = 0;
  SVar7.bridgeObject = (void *)0x2;
  SVar7.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar7,(StaticString)0xd000000000000025,0x8000000100d8dc00,
             0xda52a0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1003d51e8);
  (*pcVar2)();
}



/* Address: 0x1003d51e8 | FUN_1003d51e8 */

void FUN_1003d51e8(void)

{
  long unaff_x20;
  
  FUN_1003d385c(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1003d51f0 | FUN_1003d51f0 */

void FUN_1003d51f0(void)

{
  long unaff_x20;
  
  FUN_1003d3b74(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1003d51f8 | FUN_1003d51f8 */

undefined8 FUN_1003d51f8(undefined8 param_1)

{
  FUN_1003d1988();
  return param_1;
}



/* Address: 0x1003d522c | FUN_1003d522c */

undefined8 FUN_1003d522c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fc3508;
  FUN_1000037f0(&DAT_100fc3508,&DAT_100c45c90);
  (**(code **)(*(long *)(puVar1 + -8) + 0x20))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1003d527c | FUN_1003d527c */

undefined8 FUN_1003d527c(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fc3508;
  FUN_1000037f0(&DAT_100fc3508,&DAT_100c45c90);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x1003d52c4 | FUN_1003d52c4 */

void FUN_1003d52c4(double *param_1,double param_2,double *param_3)

{
  double *unaff_x20;
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar1 = param_3[2];
  dVar2 = unaff_x20[2];
  dVar4 = 1.0 - param_2;
  dVar3 = *param_3;
  dVar5 = *unaff_x20;
  param_1[1] = param_3[1] * param_2 + unaff_x20[1] * dVar4;
  *param_1 = dVar3 * param_2 + dVar5 * dVar4;
  param_1[2] = param_2 * dVar1 + dVar4 * dVar2;
  return;
}



/* Address: 0x1003d5300 | FUN_1003d5300 */

undefined1  [16] FUN_1003d5300(void)

{
  return ZEXT816(0x100ecff98);
}



/* Address: 0x1003d5310 | FUN_1003d5310 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1003d5310(ID param_1)

{
  code *pcVar1;
  ID IVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  NSArray *pNVar6;
  ID IVar7;
  ID IVar8;
  ID *pIVar9;
  ID IVar10;
  
  IVar2 = objc_stub::configurationWithPointSize_weight_
                    ((ID)&_OBJC_CLASS___NSImageSymbolConfiguration,0x4040000000000000,
                     *(undefined8 *)PTR__NSFontWeightRegular_100ea90b8);
  puVar3 = (undefined8 *)&DAT_100fc3e80;
  FUN_1000037f0(&DAT_100fc3e80,&DAT_100c45d50);
  _swift_allocObject();
  puVar3[3] = 3;
  puVar3[2] = 1;
  puVar4 = puVar3;
  FUN_1001fe19c();
  uVar5 = *puVar4;
  FUN_1002067b8(0x3fe3333333333333);
  puVar3[4] = uVar5;
  FUN_10000ec2c(0,&DAT_100fc3550,&PTR__OBJC_CLASS___NSColor_100f8d680);
  pNVar6 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_release(puVar3);
  IVar7 = objc_stub::FUN_100bff960((ID)&_OBJC_CLASS___NSImageSymbolConfiguration,pNVar6);
  IVar8 = objc_stub::FUN_100bff940(IVar2,IVar7);
  pIVar9 = (ID *)0x0;
  FUN_10000ec2c(0,&DAT_100fc3558,&PTR__OBJC_CLASS___NSImage_100f8d6b8);
  FUN_10020d3e8();
  IVar2 = *pIVar9;
  IVar7 = pIVar9[1];
  _swift_bridgeObjectRetain_n(IVar7,2);
  IVar10 = IVar2;
  FUN_1000f653c(IVar2,IVar7);
  if (IVar10 == 0) {
    _swift_bridgeObjectRelease(IVar7);
    IVar2 = 0xd000000000000013;
    FUN_1000f653c(0xd000000000000013,0x8000000100d8de20);
    if (IVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1003d5510);
      (*pcVar1)();
    }
  }
  else {
    FUN_1000f653c(IVar2,IVar7);
    if (IVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1003d5494);
      (*pcVar1)();
    }
  }
  IVar2 = objc_stub::imageWithSymbolConfiguration_(IVar2,IVar8);
  objc_stub::setImage_(param_1,IVar2);
  return 0;
}



/* Address: 0x1003d5510 | FUN_1003d5510 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1003d5510(void)

{
  long lVar1;
  undefined *puVar2;
  ID IVar3;
  long unaff_x20;
  undefined1 auStack_a0 [16];
  ID local_90;
  
  _swift_getObjectType();
  lVar1 = _TtCC11PasteCoreUI8ItemCell8LockView::backgroundView;
  puVar2 = &_OBJC_CLASS___NSVisualEffectView;
  _objc_allocWithZone();
  IVar3 = objc_stub::init((ID)puVar2);
  objc_stub::setBlendingMode_(IVar3,1);
  objc_stub::setMaterial_(IVar3,5);
  objc_stub::setState_(IVar3,1);
  *(ID *)(unaff_x20 + lVar1) = IVar3;
  lVar1 = _TtCC11PasteCoreUI8ItemCell8LockView::imageView;
  puVar2 = &_OBJC_CLASS___NSImageView;
  _objc_allocWithZone();
  IVar3 = objc_stub::init((ID)puVar2);
  FUN_1003d5310();
  *(ID *)(unaff_x20 + lVar1) = IVar3;
  IVar3 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffb0,"initWithFrame:",0,0,0,0);
  puVar2 = &DAT_100fc3e80;
  FUN_1000037f0(&DAT_100fc3e80,&DAT_100c45d50);
  _swift_initStackObject();
  *(undefined8 *)(puVar2 + 0x18) = 5;
  *(undefined8 *)(puVar2 + 0x10) = 2;
  *(undefined8 *)(puVar2 + 0x20) =
       *(undefined8 *)(IVar3 + _TtCC11PasteCoreUI8ItemCell8LockView::backgroundView);
  *(undefined8 *)(puVar2 + 0x28) =
       *(undefined8 *)(IVar3 + _TtCC11PasteCoreUI8ItemCell8LockView::imageView);
  local_90 = IVar3;
  FUN_1001fa150(puVar2,FUN_1003d5b7c,auStack_a0);
  _swift_bridgeObjectRelease();
  _swift_setDeallocating(puVar2);
  _swift_arrayDestroy(puVar2 + 0x20,*(undefined8 *)(puVar2 + 0x10),
                      PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8);
  objc_stub::setCornerRadius_curve_
            (IVar3,0x403c000000000000,*(undefined8 *)PTR__kCACornerCurveCircular_100eaa398);
  return IVar3;
}



/* Address: 0x1003d56a0 | FUN_1003d56a0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_1003d56a0(undefined8 *param_1)

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
  undefined8 *local_98 [3];
  undefined8 *local_80;
  undefined **ppuStack_78;
  
  puVar1 = param_1;
  _swift_getObjectType();
  ppuStack_78 = &PTR_PTR_100ec00e8;
  puVar2 = param_1;
  local_98[0] = param_1;
  local_80 = puVar1;
  FUN_1001f9774();
  uVar9 = *puVar2;
  uVar10 = puVar2[1];
  uVar11 = puVar2[2];
  uVar12 = puVar2[3];
  uVar3 = 0;
  FUN_10000ec2c(0,&DAT_100fc3560,&PTR__OBJC_CLASS___NSVisualEffectView_100f8d708);
  ppuVar4 = local_98;
  FUN_1001f97b4(uVar9,uVar10,uVar11,uVar12,ppuVar4,uVar3,&PTR_PTR_100ec00e8);
  FUN_100004594(local_98);
  ppuStack_78 = &PTR_PTR_100ec00e8;
  uVar3 = 0;
  local_98[0] = param_1;
  local_80 = puVar1;
  FUN_10000ec2c(0,&DAT_100fc32c8,&PTR__OBJC_CLASS___NSImageView_100f8d6a0);
  ppuVar5 = local_98;
  FUN_1001f9a0c(0,0,ppuVar5,uVar3,&PTR_PTR_100ec00e8);
  FUN_100004594(local_98);
  local_98[0] = param_1;
  FUN_1001f9e3c(0x404c000000000000,0x404c000000000000,puVar1,&PTR_PTR_100ec00e8);
  puVar6 = &DAT_100fc3b00;
  FUN_1000037f0(&DAT_100fc3b00,&DAT_100c45590);
  _swift_initStackObject();
  *(undefined8 *)(puVar6 + 0x18) = 6;
  *(undefined8 *)(puVar6 + 0x10) = 3;
  puVar7 = &DAT_100fc3e70;
  FUN_1000037f0(&DAT_100fc3e70,&DAT_100c45d60);
  *(undefined **)(puVar6 + 0x38) = puVar7;
  *(undefined ***)(puVar6 + 0x40) = &PTR_PTR_100ec00b8;
  *(undefined8 ***)(puVar6 + 0x20) = ppuVar4;
  *(undefined **)(puVar6 + 0x60) = puVar7;
  *(undefined ***)(puVar6 + 0x68) = &PTR_PTR_100ec00b8;
  *(undefined8 ***)(puVar6 + 0x48) = ppuVar5;
  *(undefined **)(puVar6 + 0x88) = puVar7;
  *(undefined ***)(puVar6 + 0x90) = &PTR_PTR_100ec00b8;
  *(undefined8 **)(puVar6 + 0x70) = puVar1;
  puVar8 = puVar6;
  FUN_1001f8d60(puVar6);
  _swift_setDeallocating(puVar6);
  uVar3 = *(undefined8 *)(puVar6 + 0x10);
  puVar7 = &DAT_100fc3b10;
  FUN_1000037f0(&DAT_100fc3b10,&DAT_100c455a0);
  _swift_arrayDestroy(puVar6 + 0x20,uVar3,puVar7);
  return puVar8;
}



/* Address: 0x1003d5894 | _TtCC11PasteCoreUI8ItemCell8LockView::init */

/* Function Stack Size: 0x10 bytes */

ID _TtCC11PasteCoreUI8ItemCell8LockView::init(ID param_1,SEL param_2)

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
    pcVar4 = "PasteCoreUI/ItemCell.LockView.swift";
    _swift_task_reportUnexpectedExecutor
              ("PasteCoreUI/ItemCell.LockView.swift",0x23,1,0x1c,UVar3.unknown,pMVar1);
  }
  FUN_1003d5510();
  _swift_release(pMVar2);
  return (ID)pcVar4;
}



/* Address: 0x1003d592c | _TtCC11PasteCoreUI8ItemCell8LockView::initWithCoder: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtCC11PasteCoreUI8ItemCell8LockView::initWithCoder_(ID param_1,SEL param_2,ID param_3)

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
              ("PasteCoreUI/ItemCell.LockView.swift",0x23,1,0x29,UVar3.unknown,pMVar1);
  }
  FUN_1003d5ab8();
  _swift_release(pMVar2);
  return param_3;
}



/* Address: 0x1003d59d8 | _TtCC11PasteCoreUI8ItemCell8LockView::initWithFrame: */

/* Function Stack Size: 0x30 bytes */

ID _TtCC11PasteCoreUI8ItemCell8LockView::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

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
              ("PasteCoreUI/ItemCell.LockView.swift",0x23,1,10,UVar3.unknown,pMVar2);
  }
  __swift_stdlib_reportUnimplementedInitializer("PasteCoreUI.LockView",0x14,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003d5a60);
  (*pcVar1)();
}



/* Address: 0x1003d5a60 | _TtCC11PasteCoreUI8ItemCell8LockView::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtCC11PasteCoreUI8ItemCell8LockView::_cxx_destruct(ID param_1,SEL param_2)

{
  return;
}



/* Address: 0x1003d5a98 | FUN_1003d5a98 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1003d5a98(void)

{
  return ZEXT816(0x100f997c8);
}


